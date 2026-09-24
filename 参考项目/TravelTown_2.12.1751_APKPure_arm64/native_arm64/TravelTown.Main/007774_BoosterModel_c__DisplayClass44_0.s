; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 7774 .BoosterModel.<>c__DisplayClass44_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x65C5F40 | public void .ctor() { }
; bytes=8 sha256=f762ab666b6a3caec9a27a89a98298e3b4abeb0ed2236e8ef56310da33f870aa status=arm64_complete_bound indexed_start=True
0x065C5F40: e1031faa  mov x1, xzr
0x065C5F44: ae51c417  b #0x56da5fc

; RVA 0x65C6A58 | internal bool <GetBoosterByMergeItemId>b__0(KeyValuePair<string, IBoosterItem> item) { }
; bytes=212 sha256=c7112c614d3b3598f9c6b5ed7462278c28e612aac922187ecadf5b0575ee67d0 status=arm64_complete_bound indexed_start=True
0x065C6A58: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x065C6A5C: f44f01a9  stp x20, x19, [sp, #0x10]
0x065C6A60: 15bb00b0  adrp x21, #0x7d27000
0x065C6A64: a8666539  ldrb w8, [x21, #0x959]
0x065C6A68: f40302aa  mov x20, x2
0x065C6A6C: f30300aa  mov x19, x0
0x065C6A70: 28010037  tbnz w8, #0, #0x65c6a94
0x065C6A74: 808500f0  adrp x0, #0x7679000
0x065C6A78: 00d443f9  ldr x0, [x0, #0x7a8]
0x065C6A7C: e7e72e97  bl #0x3180a18
0x065C6A80: e08900b0  adrp x0, #0x7703000
0x065C6A84: 00f041f9  ldr x0, [x0, #0x3e0]
0x065C6A88: e4e72e97  bl #0x3180a18
0x065C6A8C: 28008052  movz w8, #0x1
0x065C6A90: a8662539  strb w8, [x21, #0x959]
0x065C6A94: b40400b4  cbz x20, #0x65c6b28
0x065C6A98: 8a8500f0  adrp x10, #0x7679000
0x065C6A9C: 880240f9  ldr x8, [x20]
0x065C6AA0: 4ad543f9  ldr x10, [x10, #0x7a8]
0x065C6AA4: 095d4279  ldrh w9, [x8, #0x12e]
0x065C6AA8: 410140f9  ldr x1, [x10]
0x065C6AAC: 290100b4  cbz x9, #0x65c6ad0
0x065C6AB0: 0a5940f9  ldr x10, [x8, #0xb0]
0x065C6AB4: 4a210091  add x10, x10, #8
0x065C6AB8: 4b815ff8  ldur x11, [x10, #-8]
0x065C6ABC: 7f0101eb  cmp x11, x1
0x065C6AC0: 00010054  b.eq #0x65c6ae0
0x065C6AC4: 290500f1  subs x9, x9, #1
0x065C6AC8: 4a410091  add x10, x10, #0x10
0x065C6ACC: 61ffff54  b.ne #0x65c6ab8
0x065C6AD0: 62008052  movz w2, #0x3
0x065C6AD4: e00314aa  mov x0, x20
0x065C6AD8: 0e402e97  bl #0x3156b10
0x065C6ADC: 05000014  b #0x65c6af0
0x065C6AE0: 490140b9  ldr w9, [x10]
0x065C6AE4: 290d0011  add w9, w9, #3
0x065C6AE8: 08d1298b  add x8, x8, w9, sxtw #4
0x065C6AEC: 00e10491  add x0, x8, #0x138
0x065C6AF0: 080440a9  ldp x8, x1, [x0]
0x065C6AF4: e00314aa  mov x0, x20
0x065C6AF8: 00013fd6  blr x8
0x065C6AFC: c00000b4  cbz x0, #0x65c6b14
0x065C6B00: 000c40f9  ldr x0, [x0, #0x18]
0x065C6B04: 800000b4  cbz x0, #0x65c6b14
0x065C6B08: 080040f9  ldr x8, [x0]
0x065C6B0C: 09855ca9  ldp x9, x1, [x8, #0x1c8]
0x065C6B10: 20013fd6  blr x9
0x065C6B14: 610a40f9  ldr x1, [x19, #0x10]
0x065C6B18: f44f41a9  ldp x20, x19, [sp, #0x10]
0x065C6B1C: e2031faa  mov x2, xzr
0x065C6B20: fe57c2a8  ldp x30, x21, [sp], #0x20
0x065C6B24: 538fbc17  b #0x54ea870
0x065C6B28: 61e82e97  bl #0x3180cac

