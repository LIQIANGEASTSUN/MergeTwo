; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25834 .ToolSpawnHandler.<>c__DisplayClass26_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A84E28 | public void .ctor() { }
; bytes=8 sha256=c13504443bcfa428a2538f327f98450a519f0c3c27864285523a064023d71162 status=arm64_complete_bound indexed_start=True
0x06A84E28: e1031faa  mov x1, xzr
0x06A84E2C: f455b117  b #0x56da5fc

; RVA 0x6A84E30 | internal bool <SumItemsMergeValue>b__0(string itemId) { }
; bytes=204 sha256=81c0948739a534af94aadbd4e10bffb7662c367fd86b76ab56eced343a2cd346 status=arm64_complete_bound indexed_start=True
0x06A84E30: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A84E34: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A84E38: 359500d0  adrp x21, #0x7d2a000
0x06A84E3C: a8125e39  ldrb w8, [x21, #0x784]
0x06A84E40: f30301aa  mov x19, x1
0x06A84E44: f40300aa  mov x20, x0
0x06A84E48: 28010037  tbnz w8, #0, #0x6a84e6c
0x06A84E4C: 606500b0  adrp x0, #0x7731000
0x06A84E50: 003446f9  ldr x0, [x0, #0xc68]
0x06A84E54: f1ee1b97  bl #0x3180a18
0x06A84E58: c05f0090  adrp x0, #0x767c000
0x06A84E5C: 002441f9  ldr x0, [x0, #0x248]
0x06A84E60: eeee1b97  bl #0x3180a18
0x06A84E64: 28008052  movz w8, #0x1
0x06A84E68: a8121e39  strb w8, [x21, #0x784]
0x06A84E6C: 940a40f9  ldr x20, [x20, #0x10]
0x06A84E70: 540400b4  cbz x20, #0x6a84ef8
0x06A84E74: ca5f0090  adrp x10, #0x767c000
0x06A84E78: 880240f9  ldr x8, [x20]
0x06A84E7C: 4a2541f9  ldr x10, [x10, #0x248]
0x06A84E80: 095d4279  ldrh w9, [x8, #0x12e]
0x06A84E84: 410140f9  ldr x1, [x10]
0x06A84E88: 290100b4  cbz x9, #0x6a84eac
0x06A84E8C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A84E90: 4a210091  add x10, x10, #8
0x06A84E94: 4b815ff8  ldur x11, [x10, #-8]
0x06A84E98: 7f0101eb  cmp x11, x1
0x06A84E9C: 00010054  b.eq #0x6a84ebc
0x06A84EA0: 290500f1  subs x9, x9, #1
0x06A84EA4: 4a410091  add x10, x10, #0x10
0x06A84EA8: 61ffff54  b.ne #0x6a84e94
0x06A84EAC: 22008052  movz w2, #0x1
0x06A84EB0: e00314aa  mov x0, x20
0x06A84EB4: 17471b97  bl #0x3156b10
0x06A84EB8: 05000014  b #0x6a84ecc
0x06A84EBC: 490140b9  ldr w9, [x10]
0x06A84EC0: 29050011  add w9, w9, #1
0x06A84EC4: 08d1298b  add x8, x8, w9, sxtw #4
0x06A84EC8: 00e10491  add x0, x8, #0x138
0x06A84ECC: 080440a9  ldp x8, x1, [x0]
0x06A84ED0: e00314aa  mov x0, x20
0x06A84ED4: 00013fd6  blr x8
0x06A84ED8: 000100b4  cbz x0, #0x6a84ef8
0x06A84EDC: 686500b0  adrp x8, #0x7731000
0x06A84EE0: 083546f9  ldr x8, [x8, #0xc68]
0x06A84EE4: e10313aa  mov x1, x19
0x06A84EE8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A84EEC: 020140f9  ldr x2, [x8]
0x06A84EF0: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A84EF4: 1f789117  b #0x4ee2f70
0x06A84EF8: 6def1b97  bl #0x3180cac

; RVA 0x6A84EFC | internal int <SumItemsMergeValue>b__1(string itemId) { }
; bytes=180 sha256=9849b30a26861f7f640240c1de3579ca20ab56dc9e4834471f7999e6d860c9a3 status=arm64_complete_bound indexed_start=True
0x06A84EFC: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A84F00: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A84F04: 359500d0  adrp x21, #0x7d2a000
0x06A84F08: a8165e39  ldrb w8, [x21, #0x785]
0x06A84F0C: f30301aa  mov x19, x1
0x06A84F10: f40300aa  mov x20, x0
0x06A84F14: c8000037  tbnz w8, #0, #0x6a84f2c
0x06A84F18: a05f00d0  adrp x0, #0x767a000
0x06A84F1C: 004c42f9  ldr x0, [x0, #0x498]
0x06A84F20: beee1b97  bl #0x3180a18
0x06A84F24: 28008052  movz w8, #0x1
0x06A84F28: a8161e39  strb w8, [x21, #0x785]
0x06A84F2C: 880e40f9  ldr x8, [x20, #0x18]
0x06A84F30: e80300b4  cbz x8, #0x6a84fac
0x06A84F34: 142540f9  ldr x20, [x8, #0x48]
0x06A84F38: b40300b4  cbz x20, #0x6a84fac
0x06A84F3C: aa5f00d0  adrp x10, #0x767a000
0x06A84F40: 880240f9  ldr x8, [x20]
0x06A84F44: 4a4d42f9  ldr x10, [x10, #0x498]
0x06A84F48: 095d4279  ldrh w9, [x8, #0x12e]
0x06A84F4C: 410140f9  ldr x1, [x10]
0x06A84F50: 290100b4  cbz x9, #0x6a84f74
0x06A84F54: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A84F58: 4a210091  add x10, x10, #8
0x06A84F5C: 4b815ff8  ldur x11, [x10, #-8]
0x06A84F60: 7f0101eb  cmp x11, x1
0x06A84F64: 00010054  b.eq #0x6a84f84
0x06A84F68: 290500f1  subs x9, x9, #1
0x06A84F6C: 4a410091  add x10, x10, #0x10
0x06A84F70: 61ffff54  b.ne #0x6a84f5c
0x06A84F74: 22038052  movz w2, #0x19
0x06A84F78: e00314aa  mov x0, x20
0x06A84F7C: e5461b97  bl #0x3156b10
0x06A84F80: 05000014  b #0x6a84f94
0x06A84F84: 490140b9  ldr w9, [x10]
0x06A84F88: 29650011  add w9, w9, #0x19
0x06A84F8C: 08d1298b  add x8, x8, w9, sxtw #4
0x06A84F90: 00e10491  add x0, x8, #0x138
0x06A84F94: 030840a9  ldp x3, x2, [x0]
0x06A84F98: e00314aa  mov x0, x20
0x06A84F9C: e10313aa  mov x1, x19
0x06A84FA0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A84FA4: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A84FA8: 60001fd6  br x3
0x06A84FAC: 40ef1b97  bl #0x3180cac

