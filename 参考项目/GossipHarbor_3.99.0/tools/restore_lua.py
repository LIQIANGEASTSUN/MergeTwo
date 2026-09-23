#!/usr/bin/env python3
"""Restore the user's specific Gossip Harbor 3.99.0 package for local study.
Requires UnityPy; takes an existing Il2CppDumper dump.cs and unluac JAR.
Does not execute game code, edit input APKs, or call game servers.
"""
import argparse
import concurrent.futures
import hashlib
import io
import json
from pathlib import Path
import re
import struct
import subprocess
import zipfile
import UnityPy

EXPECTED_SHA256 = '4196b88058b03575a1c090b46004a0fc9e87105fb9176643163bbc611149ae78'


def sha(data):
    return hashlib.sha256(data).hexdigest()


def write_json(path, value):
    path.write_text(json.dumps(value, ensure_ascii=False, indent=2))


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    for name in ['xapk', 'dump-cs', 'unluac', 'java', 'out']:
        ap.add_argument('--' + name, required=True, type=Path)
    ap.add_argument('--jobs', type=int, default=4)
    args = ap.parse_args()
    if not 1 <= args.jobs <= 8:
        ap.error('--jobs must be 1..8')
    raw_xapk = args.xapk.read_bytes()
    if sha(raw_xapk) != EXPECTED_SHA256:
        ap.error('Input SHA-256 does not match the studied package; do not assume the same format.')
    if args.out.exists() and any(args.out.iterdir()):
        ap.error('--out must be empty or not exist')
    args.out.mkdir(parents=True, exist_ok=True)
    for name in ['evidence', 'bytecode', 'normalized_bytecode', 'source', 'textassets', 'disassembly']:
        (args.out / name).mkdir()
    # Read the constant from this package's generated metadata declaration.
    dump = args.dump_cs.read_text()
    match = re.search(r'public static class Crypt\s[^\n]*\n\{.*?private const string key = "([^"\n]+)";', dump, re.S)
    if match is None:
        raise ValueError('Crypt key declaration not found in supplied dump.cs')
    key = match.group(1).encode('ascii')
    if '\\' in match.group(1):
        raise ValueError('Unexpected escaped key; inspect this format manually')
    module_manifest = []
    textasset_manifest = []
    outer = zipfile.ZipFile(io.BytesIO(raw_xapk))
    manifest = json.loads(outer.read('manifest.json'))
    write_json(args.out / 'evidence/package_manifest.json', manifest)
    (args.out / 'evidence/input_sha256.txt').write_text(EXPECTED_SHA256 + '\n')
    main_apk = zipfile.ZipFile(io.BytesIO(outer.read('com.mergegames.gossipharbor.apk')))
    for bundle_name in sorted(main_apk.namelist()):
        if not bundle_name.startswith('assets/aa/android/lua_assets_assets/scripts/lua/') or not bundle_name.endswith('.bundle'):
            continue
        bundle = main_apk.read(bundle_name)
        for obj in UnityPy.load(bundle).objects:
            if obj.type.name != 'TextAsset':
                continue
            asset = obj.read()
            if not re.fullmatch(r'[A-Za-z0-9_]+', asset.m_Name):
                raise ValueError('Unsafe TextAsset name')
            raw = asset.m_Script.encode('utf-8', 'surrogateescape') if isinstance(asset.m_Script, str) else asset.m_Script
            (args.out / 'textassets' / asset.m_Name).write_bytes(raw)
            textasset_manifest.append(dict(bundle=bundle_name, name=asset.m_Name, size=len(raw), sha256=sha(raw)))
            if not raw:
                continue
            payload = bytes(v ^ key[i % len(key)] for i, v in enumerate(raw))
            count = struct.unpack_from('<I', payload)[0]
            pos = 4
            for _ in range(count):
                name_size = struct.unpack_from('<H', payload, pos)[0]
                pos += 2
                module = payload[pos:pos+name_size].decode('utf-8')
                pos += name_size
                size = struct.unpack_from('<I', payload, pos)[0]
                pos += 4
                data = payload[pos:pos+size]
                pos += size
                if len(data) != size or not data.startswith(b'\x1bLuaS\x01'):
                    raise ValueError(f'Invalid module payload: {module}')
                parts = module.split('.')
                if any(not re.fullmatch(r'[A-Za-z0-9_]+', p) for p in parts):
                    raise ValueError(f'Unsafe module name: {module}')
                rel = Path(asset.m_Name, *parts).with_suffix('.luac')
                target = args.out / 'bytecode' / rel
                if target.exists():
                    raise ValueError(f'Duplicate module path: {rel}')
                target.parent.mkdir(parents=True, exist_ok=True)
                target.write_bytes(data)
                module_manifest.append(dict(layer=asset.m_Name, module=module, size=size, sha256=sha(data)))
            if pos != len(payload):
                raise ValueError(f'Trailing or missing bytes: {asset.m_Name}')
    write_json(args.out / 'evidence/textasset_manifest.json', textasset_manifest)
    write_json(args.out / 'evidence/bytecode_manifest.json', module_manifest)

    def decompile(path):
        rel = path.relative_to(args.out / 'bytecode')
        data = bytearray(path.read_bytes())
        if data[:6] != b'\x1bLuaS\x01' or data[12:16] != bytes([4, 4, 8, 8]):
            raise ValueError(f'Unexpected chunk format: {rel}')
        data[5] = 0
        data[13:13] = b'\x04'
        normalized = args.out / 'normalized_bytecode' / rel
        normalized.parent.mkdir(parents=True, exist_ok=True)
        normalized.write_bytes(data)
        command = [str(args.java), '-jar', str(args.unluac), str(normalized)]
        result = subprocess.run(command, capture_output=True, timeout=60)
        row = dict(file=rel.as_posix(), ok=result.returncode == 0, stderr=result.stderr.decode(errors='replace'))
        if not row['ok']:
            return row
        source = result.stdout
        if not source:
            dis = subprocess.run(command[:-1] + ['--disassemble', command[-1]], capture_output=True, timeout=60, check=True).stdout
            instructions = re.findall(rb'^\.line\s+\d+\s+(.+)$', dis, re.M)
            if len(instructions) != 1 or re.fullmatch(rb'return\s+r0\s+1\s*', instructions[0]) is None:
                raise ValueError(f'Unexpected empty decompilation: {rel}')
            evidence = args.out / 'disassembly' / rel.with_suffix('.txt')
            evidence.parent.mkdir(parents=True, exist_ok=True)
            evidence.write_bytes(dis)
            source = b'-- Empty chunk: bytecode contains only RETURN with no values.\n'
            row['empty_chunk'] = True
        out = args.out / 'source' / rel.with_suffix('.lua')
        out.parent.mkdir(parents=True, exist_ok=True)
        out.write_bytes(source)
        return row

    paths = sorted((args.out / 'bytecode').rglob('*.luac'))
    with concurrent.futures.ThreadPoolExecutor(max_workers=args.jobs) as pool:
        results = list(pool.map(decompile, paths))
    write_json(args.out / 'evidence/decompile_results.json', results)
    failures = [r for r in results if not r['ok']]
    print(json.dumps(dict(modules=len(paths), restored=len(results)-len(failures), failures=failures), ensure_ascii=False))
    if failures:
        raise SystemExit(1)


if __name__ == '__main__':
    main()
