; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25664 Merger.MergeBoard.ViewModel.MergeBoardItemSelectionBoxViewModel
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A31DA8 | public override void TransitionToMergeGraph(IMergeItem mergeItem) { }
; bytes=412 sha256=7ba214cd66057e90b5f0599f6282737a25828217db57fe01e2493eef3263f476 status=arm64_complete_bound indexed_start=True
0x06A31DA8: fe67bca9  stp x30, x25, [sp, #-0x40]!
0x06A31DAC: f85f01a9  stp x24, x23, [sp, #0x10]
0x06A31DB0: f65702a9  stp x22, x21, [sp, #0x20]
0x06A31DB4: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A31DB8: d59700b0  adrp x21, #0x7d2a000
0x06A31DBC: a86e5239  ldrb w8, [x21, #0x49b]
0x06A31DC0: f40301aa  mov x20, x1
0x06A31DC4: f30300aa  mov x19, x0
0x06A31DC8: a8020037  tbnz w8, #0, #0x6a31e1c
0x06A31DCC: 60620090  adrp x0, #0x767d000
0x06A31DD0: 006c44f9  ldr x0, [x0, #0x8d8]
0x06A31DD4: 113b1d97  bl #0x3180a18
0x06A31DD8: e06100d0  adrp x0, #0x766f000
0x06A31DDC: 004c44f9  ldr x0, [x0, #0x898]
0x06A31DE0: 0e3b1d97  bl #0x3180a18
0x06A31DE4: 40620090  adrp x0, #0x7679000
0x06A31DE8: 001044f9  ldr x0, [x0, #0x820]
0x06A31DEC: 0b3b1d97  bl #0x3180a18
0x06A31DF0: e06700d0  adrp x0, #0x772f000
0x06A31DF4: 00f841f9  ldr x0, [x0, #0x3f0]
0x06A31DF8: 083b1d97  bl #0x3180a18
0x06A31DFC: 006200b0  adrp x0, #0x7672000
0x06A31E00: 000043f9  ldr x0, [x0, #0x600]
0x06A31E04: 053b1d97  bl #0x3180a18
0x06A31E08: 006600d0  adrp x0, #0x76f3000
0x06A31E0C: 006843f9  ldr x0, [x0, #0x6d0]
0x06A31E10: 023b1d97  bl #0x3180a18
0x06A31E14: 28008052  movz w8, #0x1
0x06A31E18: a86e1239  strb w8, [x21, #0x49b]
0x06A31E1C: 340900b4  cbz x20, #0x6a31f40
0x06A31E20: 4a620090  adrp x10, #0x7679000
0x06A31E24: 880240f9  ldr x8, [x20]
0x06A31E28: 4a1144f9  ldr x10, [x10, #0x820]
0x06A31E2C: f66700d0  adrp x22, #0x772f000
0x06A31E30: 156600d0  adrp x21, #0x76f3000
0x06A31E34: 176200b0  adrp x23, #0x7672000
0x06A31E38: 095d4279  ldrh w9, [x8, #0x12e]
0x06A31E3C: 410140f9  ldr x1, [x10]
0x06A31E40: d6fa41f9  ldr x22, [x22, #0x3f0]
0x06A31E44: b56a43f9  ldr x21, [x21, #0x6d0]
0x06A31E48: f70243f9  ldr x23, [x23, #0x600]
0x06A31E4C: 290100b4  cbz x9, #0x6a31e70
0x06A31E50: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A31E54: 4a210091  add x10, x10, #8
0x06A31E58: 4b815ff8  ldur x11, [x10, #-8]
0x06A31E5C: 7f0101eb  cmp x11, x1
0x06A31E60: 00010054  b.eq #0x6a31e80
0x06A31E64: 290500f1  subs x9, x9, #1
0x06A31E68: 4a410091  add x10, x10, #0x10
0x06A31E6C: 61ffff54  b.ne #0x6a31e58
0x06A31E70: e00314aa  mov x0, x20
0x06A31E74: e2031f2a  mov w2, wzr
0x06A31E78: 26931c97  bl #0x3156b10
0x06A31E7C: 04000014  b #0x6a31e8c
0x06A31E80: 490180b9  ldrsw x9, [x10]
0x06A31E84: 0811098b  add x8, x8, x9, lsl #4
0x06A31E88: 00e10491  add x0, x8, #0x138
0x06A31E8C: 080440a9  ldp x8, x1, [x0]
0x06A31E90: f96100d0  adrp x25, #0x766f000
0x06A31E94: 78620090  adrp x24, #0x767d000
0x06A31E98: 394f44f9  ldr x25, [x25, #0x898]
0x06A31E9C: 186f44f9  ldr x24, [x24, #0x8d8]
0x06A31EA0: e00314aa  mov x0, x20
0x06A31EA4: 00013fd6  blr x8
0x06A31EA8: c80240f9  ldr x8, [x22]
0x06A31EAC: f60300aa  mov x22, x0
0x06A31EB0: e00308aa  mov x0, x8
0x06A31EB4: 7b3b1d97  bl #0x3180ca0
0x06A31EB8: a20240f9  ldr x2, [x21]
0x06A31EBC: e10314aa  mov x1, x20
0x06A31EC0: e30316aa  mov x3, x22
0x06A31EC4: e4031faa  mov x4, xzr
0x06A31EC8: f50300aa  mov x21, x0
0x06A31ECC: cabef297  bl #0x66e19f4
0x06A31ED0: e00240f9  ldr x0, [x23]
0x06A31ED4: 746a40f9  ldr x20, [x19, #0xd0]
0x06A31ED8: 767640f9  ldr x22, [x19, #0xe8]
0x06A31EDC: 08e040b9  ldr w8, [x0, #0xe0]
0x06A31EE0: 48000035  cbnz w8, #0x6a31ee8
0x06A31EE4: 2a3b1d97  bl #0x3180b8c
0x06A31EE8: e00316aa  mov x0, x22
0x06A31EEC: e10315aa  mov x1, x21
0x06A31EF0: e2031faa  mov x2, xzr
0x06A31EF4: cb85f897  bl #0x6853620
0x06A31EF8: 280340f9  ldr x8, [x25]
0x06A31EFC: f50300aa  mov x21, x0
0x06A31F00: e00308aa  mov x0, x8
0x06A31F04: 673b1d97  bl #0x3180ca0
0x06A31F08: e10314aa  mov x1, x20
0x06A31F0C: e20315aa  mov x2, x21
0x06A31F10: e3031f2a  mov w3, wzr
0x06A31F14: e4031faa  mov x4, xzr
0x06A31F18: f60300aa  mov x22, x0
0x06A31F1C: 4fc3f997  bl #0x68a2c58
0x06A31F20: 020340f9  ldr x2, [x24]
0x06A31F24: e00313aa  mov x0, x19
0x06A31F28: e10316aa  mov x1, x22
0x06A31F2C: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A31F30: f65742a9  ldp x22, x21, [sp, #0x20]
0x06A31F34: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06A31F38: fe67c4a8  ldp x30, x25, [sp], #0x40
0x06A31F3C: 26534617  b #0x3bc6bd4
0x06A31F40: 5b3b1d97  bl #0x3180cac

; RVA 0x6A31F44 | public void .ctor() { }
; bytes=8 sha256=d4a9b10183387d2592d5980811d06136843b07dbcea38c96291a84afc32de869 status=arm64_complete_bound indexed_start=True
0x06A31F44: e1031faa  mov x1, xzr
0x06A31F48: 62c4e617  b #0x63e30d0

