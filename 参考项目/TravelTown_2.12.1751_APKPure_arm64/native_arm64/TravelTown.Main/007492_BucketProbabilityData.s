; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 7492 Merger.Bubbles.Buckets.BucketProbabilityData
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6579EC8 | public void .ctor() { }
; bytes=136 sha256=9a8546fcada1f348f5b7c1eeba4fde9b489ab09a2f58ca199341cf94e245a33e status=arm64_complete_bound indexed_start=True
0x06579EC8: fe0f1df8  str x30, [sp, #-0x30]!
0x06579ECC: f65701a9  stp x22, x21, [sp, #0x10]
0x06579ED0: f44f02a9  stp x20, x19, [sp, #0x20]
0x06579ED4: 75bd00d0  adrp x21, #0x7d27000
0x06579ED8: 368c00f0  adrp x22, #0x7700000
0x06579EDC: 348c00f0  adrp x20, #0x7700000
0x06579EE0: a8f25a39  ldrb w8, [x21, #0x6bc]
0x06579EE4: d62242f9  ldr x22, [x22, #0x440]
0x06579EE8: 942642f9  ldr x20, [x20, #0x448]
0x06579EEC: f30300aa  mov x19, x0
0x06579EF0: 28010037  tbnz w8, #0, #0x6579f14
0x06579EF4: 208c00f0  adrp x0, #0x7700000
0x06579EF8: 002442f9  ldr x0, [x0, #0x448]
0x06579EFC: c71a3097  bl #0x3180a18
0x06579F00: 208c00f0  adrp x0, #0x7700000
0x06579F04: 002042f9  ldr x0, [x0, #0x440]
0x06579F08: c41a3097  bl #0x3180a18
0x06579F0C: 28008052  movz w8, #0x1
0x06579F10: a8f21a39  strb w8, [x21, #0x6bc]
0x06579F14: c00240f9  ldr x0, [x22]
0x06579F18: 621b3097  bl #0x3180ca0
0x06579F1C: 810240f9  ldr x1, [x20]
0x06579F20: f40300aa  mov x20, x0
0x06579F24: 45276b97  bl #0x4043c38
0x06579F28: e00313aa  mov x0, x19
0x06579F2C: 140c01f8  str x20, [x0, #0x10]!
0x06579F30: e10314aa  mov x1, x20
0x06579F34: a41a3097  bl #0x31809c4
0x06579F38: e00313aa  mov x0, x19
0x06579F3C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06579F40: f65741a9  ldp x22, x21, [sp, #0x10]
0x06579F44: e1031faa  mov x1, xzr
0x06579F48: fe0743f8  ldr x30, [sp], #0x30
0x06579F4C: ac81c517  b #0x56da5fc

