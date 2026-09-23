#!/usr/bin/env python3
"""Compile recovered Lua 5.3 text in an empty environment, without executing it."""
import argparse
import json
from pathlib import Path
from lupa.lua53 import LuaRuntime


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument('source', type=Path)
    ap.add_argument('--report', type=Path, required=True)
    args = ap.parse_args()
    lua = LuaRuntime(unpack_returned_tuples=True, encoding=None)
    check = lua.eval(b'function(s,n) local f,e=load(s,n,"t",{}); return f~=nil,e end')
    rows = []
    for path in sorted(args.source.rglob('*.lua')):
        ok, error = check(path.read_bytes(), str(path).encode())
        rows.append(dict(file=path.relative_to(args.source).as_posix(), ok=ok, error=error.decode(errors='replace') if error else None))
    args.report.parent.mkdir(parents=True, exist_ok=True)
    args.report.write_text(json.dumps(rows, ensure_ascii=False, indent=2))
    print(json.dumps(dict(total=len(rows), passed=sum(row['ok'] for row in rows), failed=sum(not row['ok'] for row in rows))))
    if not rows or any(not row['ok'] for row in rows):
        raise SystemExit(1)


if __name__ == '__main__':
    main()
