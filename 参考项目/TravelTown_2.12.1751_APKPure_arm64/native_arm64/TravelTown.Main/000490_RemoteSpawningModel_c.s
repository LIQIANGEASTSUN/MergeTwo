; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 490 .RemoteSpawningModel.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6133178 | private static void .cctor() { }
; bytes=104 sha256=c5bac88f887341dd308ef8cdde0c3eab2d7fb35b2074eef3e4e79d24f0b1a246 status=arm64_complete_bound indexed_start=True
0x06133178: fe0f1ef8  str x30, [sp, #-0x20]!
0x0613317C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06133180: 93df00b0  adrp x19, #0x7d24000
0x06133184: 34ad00f0  adrp x20, #0x76da000
0x06133188: 687e5439  ldrb w8, [x19, #0x51f]
0x0613318C: 945e44f9  ldr x20, [x20, #0x8b8]
0x06133190: c8000037  tbnz w8, #0, #0x61331a8
0x06133194: 20ad00f0  adrp x0, #0x76da000
0x06133198: 005c44f9  ldr x0, [x0, #0x8b8]
0x0613319C: 1f364197  bl #0x3180a18
0x061331A0: 28008052  movz w8, #0x1
0x061331A4: 687e1439  strb w8, [x19, #0x51f]
0x061331A8: 800240f9  ldr x0, [x20]
0x061331AC: bd364197  bl #0x3180ca0
0x061331B0: e1031faa  mov x1, xzr
0x061331B4: f30300aa  mov x19, x0
0x061331B8: 119dd697  bl #0x56da5fc
0x061331BC: 880240f9  ldr x8, [x20]
0x061331C0: e10313aa  mov x1, x19
0x061331C4: 085d40f9  ldr x8, [x8, #0xb8]
0x061331C8: 130100f9  str x19, [x8]
0x061331CC: 880240f9  ldr x8, [x20]
0x061331D0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x061331D4: 005d40f9  ldr x0, [x8, #0xb8]
0x061331D8: fe0742f8  ldr x30, [sp], #0x20
0x061331DC: fa354117  b #0x31809c4

; RVA 0x61331E0 | public void .ctor() { }
; bytes=8 sha256=1672c1b1d5dd926c08f5ca191043dcad34ee4aca43398aac111c3a3c8b26bbc5 status=arm64_complete_bound indexed_start=True
0x061331E0: e1031faa  mov x1, xzr
0x061331E4: 069dd617  b #0x56da5fc

; RVA 0x61331E8 | internal string <GetNextItem>b__12_0(IMergeItem i) { }
; bytes=156 sha256=f6fe109e344e032a87170dac345d0685b5c0ee46d16b66bb18ed45a0246a7042 status=arm64_complete_bound indexed_start=True
0x061331E8: fe0f1ef8  str x30, [sp, #-0x20]!
0x061331EC: f44f01a9  stp x20, x19, [sp, #0x10]
0x061331F0: 94df00b0  adrp x20, #0x7d24000
0x061331F4: 88825439  ldrb w8, [x20, #0x520]
0x061331F8: f30301aa  mov x19, x1
0x061331FC: c8000037  tbnz w8, #0, #0x6133214
0x06133200: 20aa00d0  adrp x0, #0x7679000
0x06133204: 001044f9  ldr x0, [x0, #0x820]
0x06133208: 04364197  bl #0x3180a18
0x0613320C: 28008052  movz w8, #0x1
0x06133210: 88821439  strb w8, [x20, #0x520]
0x06133214: 730300b4  cbz x19, #0x6133280
0x06133218: 2aaa00d0  adrp x10, #0x7679000
0x0613321C: 680240f9  ldr x8, [x19]
0x06133220: 4a1144f9  ldr x10, [x10, #0x820]
0x06133224: 095d4279  ldrh w9, [x8, #0x12e]
0x06133228: 410140f9  ldr x1, [x10]
0x0613322C: 290100b4  cbz x9, #0x6133250
0x06133230: 0a5940f9  ldr x10, [x8, #0xb0]
0x06133234: 4a210091  add x10, x10, #8
0x06133238: 4b815ff8  ldur x11, [x10, #-8]
0x0613323C: 7f0101eb  cmp x11, x1
0x06133240: 00010054  b.eq #0x6133260
0x06133244: 290500f1  subs x9, x9, #1
0x06133248: 4a410091  add x10, x10, #0x10
0x0613324C: 61ffff54  b.ne #0x6133238
0x06133250: e00313aa  mov x0, x19
0x06133254: e2031f2a  mov w2, wzr
0x06133258: 2e8e4097  bl #0x3156b10
0x0613325C: 04000014  b #0x613326c
0x06133260: 490180b9  ldrsw x9, [x10]
0x06133264: 0811098b  add x8, x8, x9, lsl #4
0x06133268: 00e10491  add x0, x8, #0x138
0x0613326C: 020440a9  ldp x2, x1, [x0]
0x06133270: e00313aa  mov x0, x19
0x06133274: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06133278: fe0742f8  ldr x30, [sp], #0x20
0x0613327C: 40001fd6  br x2
0x06133280: 8b364197  bl #0x3180cac

; RVA 0x6133284 | internal string <ClearAllExpiredItems>b__26_1(RemoteSpawningModel.ExpiryItem item) { }
; bytes=24 sha256=66552b1802b95dea3521a3dbf59625bfbadb62fc048c462bec611449a6afef8a status=arm64_complete_bound indexed_start=True
0x06133284: fe0f1ff8  str x30, [sp, #-0x10]!
0x06133288: 810000b4  cbz x1, #0x6133298
0x0613328C: 200840f9  ldr x0, [x1, #0x10]
0x06133290: fe0741f8  ldr x30, [sp], #0x10
0x06133294: c0035fd6  ret
0x06133298: 85364197  bl #0x3180cac

