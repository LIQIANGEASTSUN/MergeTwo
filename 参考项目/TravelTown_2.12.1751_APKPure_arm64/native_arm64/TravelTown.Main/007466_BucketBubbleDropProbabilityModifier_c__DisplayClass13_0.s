; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 7466 .BucketBubbleDropProbabilityModifier.<>c__DisplayClass13_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x657F8D4 | public void .ctor() { }
; bytes=8 sha256=06e8839dcc72db7ccd371c89f625888c4792a12d2140def73f1cdf260d9a1414 status=arm64_complete_bound indexed_start=True
0x0657F8D4: e1031faa  mov x1, xzr
0x0657F8D8: 496bc517  b #0x56da5fc

; RVA 0x657FA70 | internal bool <CalculateConversionRatio>b__3(BubbleData b) { }
; bytes=232 sha256=d6681118d146468a754c8d873bea176a2680c749c4a3f484771589a2b1bb9064 status=arm64_complete_bound indexed_start=True
0x0657FA70: fe0f1cf8  str x30, [sp, #-0x40]!
0x0657FA74: f85f01a9  stp x24, x23, [sp, #0x10]
0x0657FA78: f65702a9  stp x22, x21, [sp, #0x20]
0x0657FA7C: f44f03a9  stp x20, x19, [sp, #0x30]
0x0657FA80: 55bd0090  adrp x21, #0x7d27000
0x0657FA84: 168c00b0  adrp x22, #0x7700000
0x0657FA88: a8925939  ldrb w8, [x21, #0x664]
0x0657FA8C: d60244f9  ldr x22, [x22, #0x800]
0x0657FA90: f40301aa  mov x20, x1
0x0657FA94: f30300aa  mov x19, x0
0x0657FA98: e8010037  tbnz w8, #0, #0x657fad4
0x0657FA9C: 008c00b0  adrp x0, #0x7700000
0x0657FAA0: 000444f9  ldr x0, [x0, #0x808]
0x0657FAA4: dd033097  bl #0x3180a18
0x0657FAA8: 008c00b0  adrp x0, #0x7700000
0x0657FAAC: 000844f9  ldr x0, [x0, #0x810]
0x0657FAB0: da033097  bl #0x3180a18
0x0657FAB4: 008c00b0  adrp x0, #0x7700000
0x0657FAB8: 000c44f9  ldr x0, [x0, #0x818]
0x0657FABC: d7033097  bl #0x3180a18
0x0657FAC0: 008c00b0  adrp x0, #0x7700000
0x0657FAC4: 000044f9  ldr x0, [x0, #0x800]
0x0657FAC8: d4033097  bl #0x3180a18
0x0657FACC: 28008052  movz w8, #0x1
0x0657FAD0: a8921939  strb w8, [x21, #0x664]
0x0657FAD4: c00240f9  ldr x0, [x22]
0x0657FAD8: 72043097  bl #0x3180ca0
0x0657FADC: e1031faa  mov x1, xzr
0x0657FAE0: f50300aa  mov x21, x0
0x0657FAE4: c66ac597  bl #0x56da5fc
0x0657FAE8: 750300b4  cbz x21, #0x657fb54
0x0657FAEC: 168c00b0  adrp x22, #0x7700000
0x0657FAF0: 178c00b0  adrp x23, #0x7700000
0x0657FAF4: 188c00b0  adrp x24, #0x7700000
0x0657FAF8: d60a44f9  ldr x22, [x22, #0x810]
0x0657FAFC: f70e44f9  ldr x23, [x23, #0x818]
0x0657FB00: 180744f9  ldr x24, [x24, #0x808]
0x0657FB04: e00315aa  mov x0, x21
0x0657FB08: 140c01f8  str x20, [x0, #0x10]!
0x0657FB0C: e10314aa  mov x1, x20
0x0657FB10: ad033097  bl #0x31809c4
0x0657FB14: c00240f9  ldr x0, [x22]
0x0657FB18: 730a40f9  ldr x19, [x19, #0x10]
0x0657FB1C: 61043097  bl #0x3180ca0
0x0657FB20: e20240f9  ldr x2, [x23]
0x0657FB24: e10315aa  mov x1, x21
0x0657FB28: e3031faa  mov x3, xzr
0x0657FB2C: f40300aa  mov x20, x0
0x0657FB30: 2359b397  bl #0x5255fbc
0x0657FB34: 020340f9  ldr x2, [x24]
0x0657FB38: e00313aa  mov x0, x19
0x0657FB3C: e10314aa  mov x1, x20
0x0657FB40: f44f43a9  ldp x20, x19, [sp, #0x30]
0x0657FB44: f65742a9  ldp x22, x21, [sp, #0x20]
0x0657FB48: f85f41a9  ldp x24, x23, [sp, #0x10]
0x0657FB4C: fe0744f8  ldr x30, [sp], #0x40
0x0657FB50: 30ae5a17  b #0x3c2b410
0x0657FB54: 56043097  bl #0x3180cac

