; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 598 .BoardSystemUtil.<>c__DisplayClass0_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x626F8E8 | public void .ctor() { }
; bytes=8 sha256=08aab9a1fab27c17de604537b7336a56a9eab34e87fe7a463ec1bdfcd39d4cf2 status=arm64_complete_bound indexed_start=True
0x0626F8E8: e1031faa  mov x1, xzr
0x0626F8EC: 44abd117  b #0x56da5fc

; RVA 0x626F8F0 | internal void <SlideItemInOnInteractionCostDeducted>g__SlideItem|0() { }
; bytes=364 sha256=51b354fb545546ac18db29f61c1dfa780a497a20a64bb95eff1d08090574eacb status=arm64_complete_bound indexed_start=True
0x0626F8F0: e80f1cfc  str d8, [sp, #-0x40]!
0x0626F8F4: fe5f01a9  stp x30, x23, [sp, #0x10]
0x0626F8F8: f65702a9  stp x22, x21, [sp, #0x20]
0x0626F8FC: f44f03a9  stp x20, x19, [sp, #0x30]
0x0626F900: b4d500d0  adrp x20, #0x7d25000
0x0626F904: 88765039  ldrb w8, [x20, #0x41d]
0x0626F908: f30300aa  mov x19, x0
0x0626F90C: c8000037  tbnz w8, #0, #0x626f924
0x0626F910: e0a200b0  adrp x0, #0x76cc000
0x0626F914: 003c43f9  ldr x0, [x0, #0x678]
0x0626F918: 40443c97  bl #0x3180a18
0x0626F91C: 28008052  movz w8, #0x1
0x0626F920: 88761039  strb w8, [x20, #0x41d]
0x0626F924: 600a40f9  ldr x0, [x19, #0x10]
0x0626F928: 800900b4  cbz x0, #0x626fa58
0x0626F92C: 080040f9  ldr x8, [x0]
0x0626F930: 090541f9  ldr x9, [x8, #0x208]
0x0626F934: 010941f9  ldr x1, [x8, #0x210]
0x0626F938: 20013fd6  blr x9
0x0626F93C: e00800b4  cbz x0, #0x626fa58
0x0626F940: f7a200b0  adrp x23, #0x76cc000
0x0626F944: 080040f9  ldr x8, [x0]
0x0626F948: f73e43f9  ldr x23, [x23, #0x678]
0x0626F94C: 750e40f9  ldr x21, [x19, #0x18]
0x0626F950: f40300aa  mov x20, x0
0x0626F954: 095d4279  ldrh w9, [x8, #0x12e]
0x0626F958: e10240f9  ldr x1, [x23]
0x0626F95C: 290100b4  cbz x9, #0x626f980
0x0626F960: 0a5940f9  ldr x10, [x8, #0xb0]
0x0626F964: 4a210091  add x10, x10, #8
0x0626F968: 4b815ff8  ldur x11, [x10, #-8]
0x0626F96C: 7f0101eb  cmp x11, x1
0x0626F970: 00010054  b.eq #0x626f990
0x0626F974: 290500f1  subs x9, x9, #1
0x0626F978: 4a410091  add x10, x10, #0x10
0x0626F97C: 61ffff54  b.ne #0x626f968
0x0626F980: e2048052  movz w2, #0x27
0x0626F984: e00314aa  mov x0, x20
0x0626F988: 629c3b97  bl #0x3156b10
0x0626F98C: 05000014  b #0x626f9a0
0x0626F990: 490140b9  ldr w9, [x10]
0x0626F994: 299d0011  add w9, w9, #0x27
0x0626F998: 08d1298b  add x8, x8, w9, sxtw #4
0x0626F99C: 00e10491  add x0, x8, #0x138
0x0626F9A0: 080840a9  ldp x8, x2, [x0]
0x0626F9A4: e00314aa  mov x0, x20
0x0626F9A8: e10315aa  mov x1, x21
0x0626F9AC: 00013fd6  blr x8
0x0626F9B0: 600a40f9  ldr x0, [x19, #0x10]
0x0626F9B4: 200500b4  cbz x0, #0x626fa58
0x0626F9B8: 080040f9  ldr x8, [x0]
0x0626F9BC: 090541f9  ldr x9, [x8, #0x208]
0x0626F9C0: 010941f9  ldr x1, [x8, #0x210]
0x0626F9C4: 20013fd6  blr x9
0x0626F9C8: 800400b4  cbz x0, #0x626fa58
0x0626F9CC: 080040f9  ldr x8, [x0]
0x0626F9D0: 75da41a9  ldp x21, x22, [x19, #0x18]
0x0626F9D4: 682a40bd  ldr s8, [x19, #0x28]
0x0626F9D8: e10240f9  ldr x1, [x23]
0x0626F9DC: 095d4279  ldrh w9, [x8, #0x12e]
0x0626F9E0: f40300aa  mov x20, x0
0x0626F9E4: 290100b4  cbz x9, #0x626fa08
0x0626F9E8: 0a5940f9  ldr x10, [x8, #0xb0]
0x0626F9EC: 4a210091  add x10, x10, #8
0x0626F9F0: 4b815ff8  ldur x11, [x10, #-8]
0x0626F9F4: 7f0101eb  cmp x11, x1
0x0626F9F8: 00010054  b.eq #0x626fa18
0x0626F9FC: 290500f1  subs x9, x9, #1
0x0626FA00: 4a410091  add x10, x10, #0x10
0x0626FA04: 61ffff54  b.ne #0x626f9f0
0x0626FA08: 42038052  movz w2, #0x1a
0x0626FA0C: e00314aa  mov x0, x20
0x0626FA10: 409c3b97  bl #0x3156b10
0x0626FA14: 05000014  b #0x626fa28
0x0626FA18: 490140b9  ldr w9, [x10]
0x0626FA1C: 29690011  add w9, w9, #0x1a
0x0626FA20: 08d1298b  add x8, x8, w9, sxtw #4
0x0626FA24: 00e10491  add x0, x8, #0x138
0x0626FA28: 061440a9  ldp x6, x5, [x0]
0x0626FA2C: e00314aa  mov x0, x20
0x0626FA30: e10315aa  mov x1, x21
0x0626FA34: e20316aa  mov x2, x22
0x0626FA38: e30315aa  mov x3, x21
0x0626FA3C: f44f43a9  ldp x20, x19, [sp, #0x30]
0x0626FA40: f65742a9  ldp x22, x21, [sp, #0x20]
0x0626FA44: fe5f41a9  ldp x30, x23, [sp, #0x10]
0x0626FA48: 84008052  movz w4, #0x4
0x0626FA4C: 001da84e  mov v0.16b, v8.16b
0x0626FA50: e80744fc  ldr d8, [sp], #0x40
0x0626FA54: c0001fd6  br x6
0x0626FA58: 95443c97  bl #0x3180cac

