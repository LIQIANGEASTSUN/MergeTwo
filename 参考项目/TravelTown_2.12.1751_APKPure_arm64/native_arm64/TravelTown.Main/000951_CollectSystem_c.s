; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 951 .CollectSystem.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x678C1B8 | private static void .cctor() { }
; bytes=104 sha256=3bc833f163c287bb3aea3240dd6b02d3dc1d091e4c17197ecb676af7f353733d status=arm64_complete_bound indexed_start=True
0x0678C1B8: fe0f1ef8  str x30, [sp, #-0x20]!
0x0678C1BC: f44f01a9  stp x20, x19, [sp, #0x10]
0x0678C1C0: f3ac0090  adrp x19, #0x7d28000
0x0678C1C4: 347c0090  adrp x20, #0x7710000
0x0678C1C8: 68227539  ldrb w8, [x19, #0xd48]
0x0678C1CC: 948241f9  ldr x20, [x20, #0x300]
0x0678C1D0: c8000037  tbnz w8, #0, #0x678c1e8
0x0678C1D4: 207c0090  adrp x0, #0x7710000
0x0678C1D8: 008041f9  ldr x0, [x0, #0x300]
0x0678C1DC: 0fd22797  bl #0x3180a18
0x0678C1E0: 28008052  movz w8, #0x1
0x0678C1E4: 68223539  strb w8, [x19, #0xd48]
0x0678C1E8: 800240f9  ldr x0, [x20]
0x0678C1EC: add22797  bl #0x3180ca0
0x0678C1F0: e1031faa  mov x1, xzr
0x0678C1F4: f30300aa  mov x19, x0
0x0678C1F8: 0139bd97  bl #0x56da5fc
0x0678C1FC: 880240f9  ldr x8, [x20]
0x0678C200: e10313aa  mov x1, x19
0x0678C204: 085d40f9  ldr x8, [x8, #0xb8]
0x0678C208: 130100f9  str x19, [x8]
0x0678C20C: 880240f9  ldr x8, [x20]
0x0678C210: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0678C214: 005d40f9  ldr x0, [x8, #0xb8]
0x0678C218: fe0742f8  ldr x30, [sp], #0x20
0x0678C21C: ead12717  b #0x31809c4

; RVA 0x678C220 | public void .ctor() { }
; bytes=8 sha256=55a1991c41127c7b57ce89412811f26452f429e8c9b73c12b9a4b3c590545d3d status=arm64_complete_bound indexed_start=True
0x0678C220: e1031faa  mov x1, xzr
0x0678C224: f638bd17  b #0x56da5fc

; RVA 0x678C228 | internal bool <OnWillProcessComponents>b__15_0(CollectableComponent collectable) { }
; bytes=92 sha256=c6238cb7640c5a2e0a5ddfbdb9ac1d6f711157da70a2ec093a71eda1109d1bb5 status=arm64_complete_bound indexed_start=True
0x0678C228: fe0f1ef8  str x30, [sp, #-0x20]!
0x0678C22C: f44f01a9  stp x20, x19, [sp, #0x10]
0x0678C230: f4ac0090  adrp x20, #0x7d28000
0x0678C234: 88267539  ldrb w8, [x20, #0xd49]
0x0678C238: f30301aa  mov x19, x1
0x0678C23C: c8000037  tbnz w8, #0, #0x678c254
0x0678C240: 407a00f0  adrp x0, #0x76d7000
0x0678C244: 00dc42f9  ldr x0, [x0, #0x5b8]
0x0678C248: f4d12797  bl #0x3180a18
0x0678C24C: 28008052  movz w8, #0x1
0x0678C250: 88263539  strb w8, [x20, #0xd49]
0x0678C254: 730100b4  cbz x19, #0x678c280
0x0678C258: 487a00f0  adrp x8, #0x76d7000
0x0678C25C: 08dd42f9  ldr x8, [x8, #0x5b8]
0x0678C260: e00313aa  mov x0, x19
0x0678C264: 010140f9  ldr x1, [x8]
0x0678C268: 6d855197  bl #0x3bed81c
0x0678C26C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0678C270: 1f0000f1  cmp x0, #0
0x0678C274: e0079f1a  cset w0, ne
0x0678C278: fe0742f8  ldr x30, [sp], #0x20
0x0678C27C: c0035fd6  ret
0x0678C280: 8bd22797  bl #0x3180cac

