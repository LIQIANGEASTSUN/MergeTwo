; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 7459 .ActiveOrdersBubbleDropProbabilityModifier.<>c__DisplayClass13_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x657D138 | public void .ctor() { }
; bytes=8 sha256=20a55914369414bd442c44a4d162f0a7de3751e1d1330173b25ce53dece03931 status=arm64_complete_bound indexed_start=True
0x0657D138: e1031faa  mov x1, xzr
0x0657D13C: 3075c517  b #0x56da5fc

; RVA 0x657D140 | internal OrderData <get_Objectives>b__4(IMergeGraphItem graph) { }
; bytes=128 sha256=edaee9f7f4fc8396aa22fb26e0294ff55c8b19306de5b09c5abdbaec1eb4ee69 status=arm64_complete_bound indexed_start=True
0x0657D140: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0657D144: f44f01a9  stp x20, x19, [sp, #0x10]
0x0657D148: 55bd00d0  adrp x21, #0x7d27000
0x0657D14C: a85a5939  ldrb w8, [x21, #0x656]
0x0657D150: f30301aa  mov x19, x1
0x0657D154: f40300aa  mov x20, x0
0x0657D158: 28010037  tbnz w8, #0, #0x657d17c
0x0657D15C: 008c00f0  adrp x0, #0x7700000
0x0657D160: 002443f9  ldr x0, [x0, #0x648]
0x0657D164: 2d0e3097  bl #0x3180a18
0x0657D168: 008c00f0  adrp x0, #0x7700000
0x0657D16C: 002843f9  ldr x0, [x0, #0x650]
0x0657D170: 2a0e3097  bl #0x3180a18
0x0657D174: 28008052  movz w8, #0x1
0x0657D178: a85a1939  strb w8, [x21, #0x656]
0x0657D17C: 880a40f9  ldr x8, [x20, #0x10]
0x0657D180: e80100b4  cbz x8, #0x657d1bc
0x0657D184: 098c00f0  adrp x9, #0x7700000
0x0657D188: 292543f9  ldr x9, [x9, #0x648]
0x0657D18C: 140940f9  ldr x20, [x8, #0x10]
0x0657D190: 200140f9  ldr x0, [x9]
0x0657D194: c30e3097  bl #0x3180ca0
0x0657D198: e10314aa  mov x1, x20
0x0657D19C: e20313aa  mov x2, x19
0x0657D1A0: e3031faa  mov x3, xzr
0x0657D1A4: f50300aa  mov x21, x0
0x0657D1A8: 045ce997  bl #0x5fd41b8
0x0657D1AC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0657D1B0: e00315aa  mov x0, x21
0x0657D1B4: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0657D1B8: c0035fd6  ret
0x0657D1BC: bc0e3097  bl #0x3180cac

