#!/usr/bin/env python3
"""Offline reference-package audit. Python 3 stdlib only; never executes Lua.
Usage: python3 Assets/MergeTwo/Tools/audit_reference.py [--write-report]
Exit 1: extraction/integrity failure. Baseline source issues are reported separately.
"""
from pathlib import Path
import argparse,collections,hashlib,json,re,sys
sys.dont_write_bytecode=True
from reference_data import read_config
P=Path(__file__).resolve().parents[1]
PROJECT=P.parents[1]
GUID=re.compile(rb'guid: ([a-f0-9]{32})')

def read(name):return json.loads((P/name).read_text())
def digest(data):return hashlib.sha256(data).hexdigest()
def relative(path):return str(path.relative_to(P))
def main():
    parser=argparse.ArgumentParser();parser.add_argument('--write-report',action='store_true');args=parser.parse_args()
    migration=read('Docs/Manifests/migration.json');errors=[];baseline=[]
    inverse={v:k for k,v in migration['guid_remap'].items()}
    for row in migration['assets']:
        path=P/row['destination'].split('Assets/MergeTwo/',1)[1]
        if not path.is_file():errors.append('Missing: '+relative(path));continue
        content=path.read_bytes()
        if digest(content)!=row['destination_sha256']:errors.append('Content changed after extraction: '+relative(path))
        restored=GUID.sub(lambda m:b'guid: '+inverse.get(m[1].decode(),m[1].decode()).encode(),content) if row['reference_guids_rewritten'] else content
        if digest(restored)!=row['source_sha256']:errors.append('Source fidelity mismatch: '+relative(path))
        if row['operation']=='move':
            meta=Path(str(path)+'.meta')
            if row['original_guid'] and (not meta.exists() or ('guid: '+row['original_guid']) not in meta.read_text()):errors.append('Moved GUID changed: '+relative(path))
            if meta.exists() and row['source_meta_sha256']:
                restored_meta=GUID.sub(lambda m:b'guid: '+inverse.get(m[1].decode(),m[1].decode()).encode(),meta.read_bytes())
                if digest(restored_meta)!=row['source_meta_sha256']:errors.append('Moved importer settings changed: '+relative(path))
    guidmap={};assets=[]
    for p in P.rglob('*'):
        if p.name.startswith('.') or '__pycache__' in p.parts:continue
        if p.suffix=='.meta':
            owner=Path(str(p)[:-5])
            if not owner.exists():errors.append('Orphan meta: '+relative(p))
            m=GUID.search(p.read_bytes())
            if not m:errors.append('Missing GUID: '+relative(p));continue
            guid=m[1].decode()
            if guid in guidmap:errors.append('Duplicate GUID: '+guid)
            guidmap[guid]=relative(owner)
        else:
            if not Path(str(p)+'.meta').exists():errors.append('Missing meta: '+relative(p))
            if p.is_file():assets.append(p)
    package=read('Docs/Manifests/ugui-guids.json')
    script_guids={r['original_guid']:r['destination'] for r in migration['assets'] if r['operation']=='source-reference'}
    unresolved=collections.defaultdict(set); external=collections.defaultdict(set)
    for p in assets:
        if p.suffix.lower() not in ('.prefab','.asset','.mat','.anim','.controller','.spriteatlas','.shader'):continue
        for g in {m.decode() for m in GUID.findall(p.read_bytes())}:
            if g in guidmap or g.startswith('0000000000000000') or g in package:continue
            (external if g in script_guids else unresolved)[g].add(relative(p))
    expected={e['guid'] for e in read('Docs/Manifests/asset-dependencies.json') if e['status']=='unresolved'}
    for g,paths in unresolved.items():
        if g not in expected:errors.append('New unresolved GUID: '+g)
        baseline.append(dict(kind='unresolved_source_guid',guid=g,owners=sorted(paths)))
    configs={}
    for path in sorted((P/'Configs').rglob('*.lua')):
        cfg=read_config(path);configs[path.stem]=cfg
        jsonpath=P/('Configs/Related/Json' if 'Related' in path.parts else 'Configs/Json')/(path.stem+'.json')
        if cfg!=json.loads(jsonpath.read_text()):errors.append('Lua/JSON data mismatch: '+path.stem)
    items=configs['MergeTwoItemTemplate'];gens=configs['MergeTwoItemGenerateTemplate'];boxes=configs['MergeTwoboxTemplate']
    def itemref(value,owner,field):
        if value not in ('',0,None) and str(value) not in items:baseline.append(dict(kind='missing_item_reference',owner=owner,field=field,id=value))
    for item in items.values():
        itemref(item['nextId'],item['id'],'nextId')
        if item['type'] in (2,5) and item['id'] not in gens:baseline.append(dict(kind='missing_generator_config',id=item['id']))
        if item['type'] in (3,4) and item['id'] not in boxes:baseline.append(dict(kind='missing_box_config',id=item['id']))
        visited=set();curr=item['id']
        while curr in items and items[curr]['nextId'] not in ('',0,None):
            if curr in visited:baseline.append(dict(kind='merge_chain_cycle',id=item['id']));break
            visited.add(curr);curr=str(items[curr]['nextId'])
    for table in [gens,boxes]:
        for item in table.values():
            for value in item['fixedOutput'] or []:itemref(value,item['id'],'fixedOutput')
            for value in item['proOutput'] or []:itemref(value[0],item['id'],'proOutput')
    for row in configs['MergeTwoMainTemplate'].values():
        for key,value in row.items():
            if key.startswith('column_'):itemref(value[0],row['id'],key)
    for row in configs['MergeTwoOrderTemplate'].values():
        for need in row['needMitem'] or []:itemref(need[0],row['id'],'needMitem')
    for item in read('Docs/Manifests/item-assets.json'):
        if not item['paths']:baseline.append(dict(kind='icon_not_found',id=item['id'],icon=item['icon']))
        for path in item['paths']:
            target=P/path.split('Assets/MergeTwo/',1)[1]
            if not target.exists():errors.append('Item icon absent from package: '+path)
    for rel in read('Docs/Manifests/lua-dependencies.json'):
        if rel['target'] is None:baseline.append(dict(kind='missing_lua_module',module=rel['module'],source=rel['source']))
    result=dict(status='PASS' if not errors else 'FAIL',scope='Static extraction integrity, not a Unity import or runtime test',source_commit=migration['commit'],preservation_errors=errors,asset_count=len(assets),moved_asset_count=sum(r['operation']=='move' for r in migration['assets']),copied_reference_count=sum(r['operation']!='move' for r in migration['assets']),config_row_counts={k:len(v) for k,v in configs.items()},external_script_guids={k:dict(reference=script_guids[k],owners=sorted(v)) for k,v in external.items()},baseline_findings=baseline)
    if args.write_report:(P/'Docs/Manifests/validation.json').write_text(json.dumps(result,ensure_ascii=False,indent=2)+'\n')
    print(json.dumps(dict(status=result['status'],preservation_errors=errors,assets=len(assets),external_script_guids=len(external),baseline_counts=dict(collections.Counter(x['kind'] for x in baseline))),ensure_ascii=False,indent=2))
    return 1 if errors else 0
if __name__=='__main__':raise SystemExit(main())
