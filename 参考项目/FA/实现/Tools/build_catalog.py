#!/usr/bin/env python3
"""Regenerate the portable HTML resource catalog from the extracted JSON files."""
from pathlib import Path
import json
P=Path(__file__).resolve().parents[1]
items=json.loads((P/'Configs/Json/MergeTwoItemTemplate.json').read_text())
icons={x['id']:x for x in json.loads((P/'Docs/Manifests/item-assets.json').read_text())}
names=json.loads((P/'Configs/Localization/zh.json').read_text())
for key,item in items.items():
    item['displayName']=names.get(item['name'],item['name'])
    item['assetPaths']=icons[key]['paths']
    item['image']='../'+icons[key]['paths'][0].split('Assets/MergeTwo/',1)[1] if icons[key]['paths'] else ''
payload=json.dumps(dict(items=list(items.values()),boards=json.loads((P/'Configs/Json/MergeTwoMainTemplate.json').read_text())),ensure_ascii=False).replace('<','\\u003c')
html='''<!doctype html><html lang="zh-CN"><meta charset="utf-8"><meta name="viewport" content="width=device-width, initial-scale=1"><title>MergeTwo 资源目录</title>
<style>
:root{color-scheme:dark;font:15px/1.6 system-ui,sans-serif;background:#111827;color:#e5e7eb}*{box-sizing:border-box}body{margin:0 auto;max-width:1500px;padding:28px}h1{margin:0;font-size:30px}h2{font-size:20px}p{color:#aebbd0}.tag{font:12px monospace;color:#89d7cb}.toolbar{display:flex;flex-wrap:wrap;gap:12px;position:sticky;top:0;background:#111827ee;padding:15px 0;z-index:4}input,select,button{font:inherit;color:inherit;background:#243044;border:1px solid #526077;border-radius:8px;padding:9px}input{flex:1;min-width:180px}button{cursor:pointer}.layout{display:grid;grid-template-columns:minmax(0,1fr) 335px;gap:24px}.cards{display:grid;grid-template-columns:repeat(auto-fill,minmax(140px,1fr));gap:12px}.card{display:flex;align-items:center;flex-direction:column;background:#1d293c;min-height:195px;text-align:center}.card:hover{border-color:#64d5bb}.card img{width:95px;height:95px;object-fit:contain}.card small{color:#b6c6dd}.missing{height:95px;display:grid;place-items:center;color:#ffadad}.detail{background:#1d293c;border:1px solid #41516c;border-radius:10px;padding:18px;position:sticky;top:80px;align-self:start;overflow-wrap:anywhere}.detail img{width:130px;height:130px;object-fit:contain}.detail pre{white-space:pre-wrap;font:12px/1.6 monospace;max-height:60vh;overflow:auto}#board{display:grid;gap:5px;max-width:760px;margin:20px 0}.cell{position:relative;aspect-ratio:1;background:#2f6458;min-width:0;padding:2px;border:1px solid #83c5b3;border-radius:7px}.cell img{width:82%;height:82%;object-fit:contain}.cell.lock1{background:#416078;border-color:#bad0e8}.cell.lock2{background:#4e4267;border-color:#9281af}.cell span{position:absolute;font-size:10px;bottom:0;left:3px;background:#101828cc;border-radius:3px;padding:0 2px}.legend{font-size:13px}#boardView[hidden],#itemsView[hidden]{display:none}@media(max-width:850px){body{padding:15px}.layout{grid-template-columns:1fr}.detail{position:static}.cards{grid-template-columns:repeat(auto-fill,minmax(125px,1fr))}}
</style><header><div class="tag">HISTORICAL REFERENCE · 6dd100ab483</div><h1>MergeTwo 二合资源目录</h1><p>原配置与素材的可检索索引。初始棋盘按表绘制，非游戏截图；缺失素材保持标记，不补造。</p></header>
<nav class="toolbar"><button id="itemsTab">物品与合成链</button><button id="boardTab">初始棋盘</button></nav>
<section id="itemsView"><div class="toolbar"><input id="search" aria-label="搜索物品" placeholder="搜索 ID、名称、图标、合成链"><select id="group" aria-label="筛选合成链"><option value="">全部合成链</option></select><select id="type" aria-label="筛选类型"><option value="">全部类型</option></select></div><p id="count"></p><div class="layout"><div id="cards" class="cards"></div><aside class="detail"><h2>物品详情</h2><p>点击物品查看配置与迁移后的素材路径。</p><div id="detail"></div></aside></div></section>
<section id="boardView" hidden><select id="map" aria-label="选择棋盘"></select><p class="legend">绿：解锁；蓝：浅锁；紫：深锁。单元角标为行/列及锁状态。悬停查看物品、任务区域、遮盖图；不模拟服务器存档。</p><div id="board"></div></section>
<script>const DATA=__PAYLOAD__;
const $=id=>document.getElementById(id),types={1:'普通物品',2:'手动生成器',3:'普通宝箱',4:'自选箱',5:'被动生成器',6:'使用类',10:'剪刀',11:'减CD'};
const byId=new Map(DATA.items.map(x=>[x.id,x]));
function option(select,value,text){const x=document.createElement('option');x.value=value;x.textContent=text;select.append(x)}
[...new Set(DATA.items.map(x=>String(x.groupId)))].sort().forEach(x=>option($('group'),x,x==='0'?'未配置链 (0)':x));
[...new Set(DATA.items.map(x=>x.type))].sort((a,b)=>a-b).forEach(x=>option($('type'),x,types[x]||x));
function image(item){const x=document.createElement(item.image?'img':'div');if(item.image){x.src=item.image;x.alt=item.icon;x.loading='lazy'}else{x.className='missing';x.textContent='源资源缺失'}return x}
function detail(item){$('detail').replaceChildren(image(item));const data=document.createElement('pre');data.textContent=JSON.stringify(item,null,2);$('detail').append(data)}
function render(){const q=$('search').value.trim().toLowerCase(),g=$('group').value,t=$('type').value;const found=DATA.items.filter(x=>(!g||String(x.groupId)===g)&&(!t||String(x.type)===t)&&(!q||[x.id,x.displayName,x.icon,x.groupId].join(' ').toLowerCase().includes(q)));$('count').textContent=`${found.length} / ${DATA.items.length} 个配置条目`;$('cards').replaceChildren();for(const item of found){const card=document.createElement('button');card.className='card';card.append(image(item));const name=document.createElement('b');name.textContent=item.displayName;const info=document.createElement('small');info.textContent=`${item.id} · Lv ${item.level}`;const next=document.createElement('small');next.textContent=`下一阶：${item.nextId||'链尾'}`;card.append(name,info,next);card.onclick=()=>detail(item);$('cards').append(card)}}
$('search').oninput=render;$('group').onchange=render;$('type').onchange=render;
const maps=[...new Set(Object.values(DATA.boards).map(x=>x.mapId))].sort();maps.forEach(x=>option($('map'),x,`棋盘 ${x} · 7 × 9`));
function board(){const rows=Object.values(DATA.boards).filter(x=>x.mapId===$('map').value).sort((a,b)=>Number(a.id)-Number(b.id)),cols=rows[0].maxCol;$('board').style.gridTemplateColumns=`repeat(${cols},1fr)`;$('board').replaceChildren();rows.forEach((row,r)=>{for(let c=1;c<=cols;c++){const cell=row['column_'+c],item=byId.get(String(cell[0])),div=document.createElement('button');div.className='cell lock'+cell[1];div.title=`${r+1},${c} | ID ${cell[0]||'空'} | 状态 ${cell[1]} | 遮盖 ${cell[2]||'无'} | 区域任务 ${cell[3]||'无'} / ${cell[4]}`;if(item)div.append(image(item));const label=document.createElement('span');label.textContent=`${r+1}/${c} · ${cell[1]}`;div.append(label);div.onclick=()=>{if(item){$('itemsView').hidden=false;$('boardView').hidden=true;detail(item);$('search').value=item.id;$('group').value='';$('type').value='';render()}};$('board').append(div)}})}
$('map').onchange=board;$('itemsTab').onclick=()=>{$('itemsView').hidden=false;$('boardView').hidden=true};$('boardTab').onclick=()=>{$('itemsView').hidden=true;$('boardView').hidden=false;board()};render();
</script></html>'''
(P/'Docs/ResourceCatalog.html').write_text(html.replace('__PAYLOAD__',payload))
print('Catalog:',len(items),'items')
