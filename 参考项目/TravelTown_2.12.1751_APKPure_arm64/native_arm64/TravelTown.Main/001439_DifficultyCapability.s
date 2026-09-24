; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1439 MergeEngine.Configuration.Capabilities.DifficultyCapability
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x600FE50 | public void .ctor() { }
; bytes=136 sha256=9d44e362382f70b6d0bbce13c72340f1791af7285cce180fe7ddaf348a952007 status=arm64_complete_bound indexed_start=True
0x0600FE50: fe0f1df8  str x30, [sp, #-0x30]!
0x0600FE54: f65701a9  stp x22, x21, [sp, #0x10]
0x0600FE58: f44f02a9  stp x20, x19, [sp, #0x20]
0x0600FE5C: b5e80090  adrp x21, #0x7d23000
0x0600FE60: 16b60090  adrp x22, #0x76cf000
0x0600FE64: 14b60090  adrp x20, #0x76cf000
0x0600FE68: a8565f39  ldrb w8, [x21, #0x7d5]
0x0600FE6C: d62642f9  ldr x22, [x22, #0x448]
0x0600FE70: 942a42f9  ldr x20, [x20, #0x450]
0x0600FE74: f30300aa  mov x19, x0
0x0600FE78: 28010037  tbnz w8, #0, #0x600fe9c
0x0600FE7C: 00b60090  adrp x0, #0x76cf000
0x0600FE80: 002842f9  ldr x0, [x0, #0x450]
0x0600FE84: e5c24597  bl #0x3180a18
0x0600FE88: 00b60090  adrp x0, #0x76cf000
0x0600FE8C: 002442f9  ldr x0, [x0, #0x448]
0x0600FE90: e2c24597  bl #0x3180a18
0x0600FE94: 28008052  movz w8, #0x1
0x0600FE98: a8561f39  strb w8, [x21, #0x7d5]
0x0600FE9C: c00240f9  ldr x0, [x22]
0x0600FEA0: 80c34597  bl #0x3180ca0
0x0600FEA4: 810240f9  ldr x1, [x20]
0x0600FEA8: f40300aa  mov x20, x0
0x0600FEAC: 63cf8097  bl #0x4043c38
0x0600FEB0: e00313aa  mov x0, x19
0x0600FEB4: 148c01f8  str x20, [x0, #0x18]!
0x0600FEB8: e10314aa  mov x1, x20
0x0600FEBC: c2c24597  bl #0x31809c4
0x0600FEC0: e00313aa  mov x0, x19
0x0600FEC4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0600FEC8: f65741a9  ldp x22, x21, [sp, #0x10]
0x0600FECC: e1031faa  mov x1, xzr
0x0600FED0: fe0743f8  ldr x30, [sp], #0x30
0x0600FED4: ca29db17  b #0x56da5fc

