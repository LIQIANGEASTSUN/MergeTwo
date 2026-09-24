; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 528 .DynamicMergeItemConfigurationModel.<>c__DisplayClass4_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x613B8B4 | public void .ctor() { }
; bytes=8 sha256=ae0059a9824df6d582ab6085471371f51fd9d3151e77c479702b6888b3a0edc9 status=arm64_complete_bound indexed_start=True
0x0613B8B4: e1031faa  mov x1, xzr
0x0613B8B8: 517bd617  b #0x56da5fc

; RVA 0x613B944 | internal bool <GetDynamicMergeItemWithItemId>b__0(IMergeItem mergeItem) { }
; bytes=172 sha256=5ff71afde6ad6bbfd8be3895c0bdd6c6139ebbe9595df427ff2cfbbcfb4174ff status=arm64_complete_bound indexed_start=True
0x0613B944: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0613B948: f44f01a9  stp x20, x19, [sp, #0x10]
0x0613B94C: 55df00b0  adrp x21, #0x7d24000
0x0613B950: a8465639  ldrb w8, [x21, #0x591]
0x0613B954: f40301aa  mov x20, x1
0x0613B958: f30300aa  mov x19, x0
0x0613B95C: c8000037  tbnz w8, #0, #0x613b974
0x0613B960: e0a900d0  adrp x0, #0x7679000
0x0613B964: 001044f9  ldr x0, [x0, #0x820]
0x0613B968: 2c144197  bl #0x3180a18
0x0613B96C: 28008052  movz w8, #0x1
0x0613B970: a8461639  strb w8, [x21, #0x591]
0x0613B974: d40300b4  cbz x20, #0x613b9ec
0x0613B978: eaa900d0  adrp x10, #0x7679000
0x0613B97C: 880240f9  ldr x8, [x20]
0x0613B980: 4a1144f9  ldr x10, [x10, #0x820]
0x0613B984: 095d4279  ldrh w9, [x8, #0x12e]
0x0613B988: 410140f9  ldr x1, [x10]
0x0613B98C: 290100b4  cbz x9, #0x613b9b0
0x0613B990: 0a5940f9  ldr x10, [x8, #0xb0]
0x0613B994: 4a210091  add x10, x10, #8
0x0613B998: 4b815ff8  ldur x11, [x10, #-8]
0x0613B99C: 7f0101eb  cmp x11, x1
0x0613B9A0: 00010054  b.eq #0x613b9c0
0x0613B9A4: 290500f1  subs x9, x9, #1
0x0613B9A8: 4a410091  add x10, x10, #0x10
0x0613B9AC: 61ffff54  b.ne #0x613b998
0x0613B9B0: e00314aa  mov x0, x20
0x0613B9B4: e2031f2a  mov w2, wzr
0x0613B9B8: 566c4097  bl #0x3156b10
0x0613B9BC: 04000014  b #0x613b9cc
0x0613B9C0: 490180b9  ldrsw x9, [x10]
0x0613B9C4: 0811098b  add x8, x8, x9, lsl #4
0x0613B9C8: 00e10491  add x0, x8, #0x138
0x0613B9CC: 080440a9  ldp x8, x1, [x0]
0x0613B9D0: e00314aa  mov x0, x20
0x0613B9D4: 00013fd6  blr x8
0x0613B9D8: 610a40f9  ldr x1, [x19, #0x10]
0x0613B9DC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0613B9E0: e2031faa  mov x2, xzr
0x0613B9E4: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0613B9E8: a2bbce17  b #0x54ea870
0x0613B9EC: b0144197  bl #0x3180cac

