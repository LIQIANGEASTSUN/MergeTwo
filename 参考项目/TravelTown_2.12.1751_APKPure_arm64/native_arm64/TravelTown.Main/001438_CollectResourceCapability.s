; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1438 MergeEngine.Configuration.Capabilities.CollectResourceCapability
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x600FDB4 | public AfterCollectAnimation get_AfterCollectAnimation() { }
; bytes=148 sha256=c2649ce3a0e79289c645315e9ef06e01727b8b279fa35bfede88707eafca93b9 status=arm64_complete_bound indexed_start=True
0x0600FDB4: ffc300d1  sub sp, sp, #0x30
0x0600FDB8: fe5701a9  stp x30, x21, [sp, #0x10]
0x0600FDBC: f44f02a9  stp x20, x19, [sp, #0x20]
0x0600FDC0: b5e80090  adrp x21, #0x7d23000
0x0600FDC4: 14b20090  adrp x20, #0x764f000
0x0600FDC8: a8525f39  ldrb w8, [x21, #0x7d4]
0x0600FDCC: 94ae43f9  ldr x20, [x20, #0x758]
0x0600FDD0: f30300aa  mov x19, x0
0x0600FDD4: 28010037  tbnz w8, #0, #0x600fdf8
0x0600FDD8: 00b60090  adrp x0, #0x76cf000
0x0600FDDC: 002042f9  ldr x0, [x0, #0x440]
0x0600FDE0: 0ec34597  bl #0x3180a18
0x0600FDE4: 00b20090  adrp x0, #0x764f000
0x0600FDE8: 00ac43f9  ldr x0, [x0, #0x758]
0x0600FDEC: 0bc34597  bl #0x3180a18
0x0600FDF0: 28008052  movz w8, #0x1
0x0600FDF4: a8521f39  strb w8, [x21, #0x7d4]
0x0600FDF8: 800240f9  ldr x0, [x20]
0x0600FDFC: ff0f00b9  str wzr, [sp, #0xc]
0x0600FE00: 14b60090  adrp x20, #0x76cf000
0x0600FE04: 731640f9  ldr x19, [x19, #0x28]
0x0600FE08: 08e040b9  ldr w8, [x0, #0xe0]
0x0600FE0C: 942242f9  ldr x20, [x20, #0x440]
0x0600FE10: 48000035  cbnz w8, #0x600fe18
0x0600FE14: 5ec34597  bl #0x3180b8c
0x0600FE18: 830240f9  ldr x3, [x20]
0x0600FE1C: e2330091  add x2, sp, #0xc
0x0600FE20: 21008052  movz w1, #0x1
0x0600FE24: e00313aa  mov x0, x19
0x0600FE28: 294c7097  bl #0x3c22ecc
0x0600FE2C: e80f40b9  ldr w8, [sp, #0xc]
0x0600FE30: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0600FE34: fe5741a9  ldp x30, x21, [sp, #0x10]
0x0600FE38: 1f000072  tst w0, #1
0x0600FE3C: 00119f1a  csel w0, w8, wzr, ne
0x0600FE40: ffc30091  add sp, sp, #0x30
0x0600FE44: c0035fd6  ret

; RVA 0x600FE48 | public void .ctor() { }
; bytes=8 sha256=0738cdc369524d4027df0fc83e524d19565237db65b24b1e23f8f63c68f42f4d status=arm64_complete_bound indexed_start=True
0x0600FE48: e1031faa  mov x1, xzr
0x0600FE4C: ec29db17  b #0x56da5fc

