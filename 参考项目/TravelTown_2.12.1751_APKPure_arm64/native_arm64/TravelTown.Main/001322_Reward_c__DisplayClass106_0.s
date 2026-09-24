; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1322 .Reward.<>c__DisplayClass106_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A2D8B4 | public void .ctor() { }
; bytes=8 sha256=c1a9c6b674126d64caec36eacbd98a2ae73797d24a4749203337fc88427ab067 status=arm64_complete_bound indexed_start=True
0x06A2D8B4: e1031faa  mov x1, xzr
0x06A2D8B8: 51b3b217  b #0x56da5fc

; RVA 0x6A2E594 | internal bool <Count>b__0(IRewardViewData r) { }
; bytes=396 sha256=7455d71f6ffe99b0ce4e8d098080c25e343c5fdba9a4d4cdaa34053266969c82 status=arm64_complete_bound indexed_start=True
0x06A2E594: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A2E598: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A2E59C: f5970090  adrp x21, #0x7d2a000
0x06A2E5A0: a8da5139  ldrb w8, [x21, #0x476]
0x06A2E5A4: f40301aa  mov x20, x1
0x06A2E5A8: f30300aa  mov x19, x0
0x06A2E5AC: 28010037  tbnz w8, #0, #0x6a2e5d0
0x06A2E5B0: 006200f0  adrp x0, #0x7671000
0x06A2E5B4: 00c443f9  ldr x0, [x0, #0x788]
0x06A2E5B8: 18491d97  bl #0x3180a18
0x06A2E5BC: 406200f0  adrp x0, #0x7679000
0x06A2E5C0: 000c44f9  ldr x0, [x0, #0x818]
0x06A2E5C4: 15491d97  bl #0x3180a18
0x06A2E5C8: 28008052  movz w8, #0x1
0x06A2E5CC: a8da1139  strb w8, [x21, #0x476]
0x06A2E5D0: 740a00b4  cbz x20, #0x6a2e71c
0x06A2E5D4: 0a6200f0  adrp x10, #0x7671000
0x06A2E5D8: 880240f9  ldr x8, [x20]
0x06A2E5DC: 4ac543f9  ldr x10, [x10, #0x788]
0x06A2E5E0: 095d4279  ldrh w9, [x8, #0x12e]
0x06A2E5E4: 410140f9  ldr x1, [x10]
0x06A2E5E8: 290100b4  cbz x9, #0x6a2e60c
0x06A2E5EC: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A2E5F0: 4a210091  add x10, x10, #8
0x06A2E5F4: 4b815ff8  ldur x11, [x10, #-8]
0x06A2E5F8: 7f0101eb  cmp x11, x1
0x06A2E5FC: 00010054  b.eq #0x6a2e61c
0x06A2E600: 290500f1  subs x9, x9, #1
0x06A2E604: 4a410091  add x10, x10, #0x10
0x06A2E608: 61ffff54  b.ne #0x6a2e5f4
0x06A2E60C: 62008052  movz w2, #0x3
0x06A2E610: e00314aa  mov x0, x20
0x06A2E614: 3fa11c97  bl #0x3156b10
0x06A2E618: 05000014  b #0x6a2e62c
0x06A2E61C: 490140b9  ldr w9, [x10]
0x06A2E620: 290d0011  add w9, w9, #3
0x06A2E624: 08d1298b  add x8, x8, w9, sxtw #4
0x06A2E628: 00e10491  add x0, x8, #0x138
0x06A2E62C: 080440a9  ldp x8, x1, [x0]
0x06A2E630: e00314aa  mov x0, x20
0x06A2E634: 00013fd6  blr x8
0x06A2E638: 200700b4  cbz x0, #0x6a2e71c
0x06A2E63C: 556200f0  adrp x21, #0x7679000
0x06A2E640: 080040f9  ldr x8, [x0]
0x06A2E644: b50e44f9  ldr x21, [x21, #0x818]
0x06A2E648: f40300aa  mov x20, x0
0x06A2E64C: 095d4279  ldrh w9, [x8, #0x12e]
0x06A2E650: a10240f9  ldr x1, [x21]
0x06A2E654: 290100b4  cbz x9, #0x6a2e678
0x06A2E658: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A2E65C: 4a210091  add x10, x10, #8
0x06A2E660: 4b815ff8  ldur x11, [x10, #-8]
0x06A2E664: 7f0101eb  cmp x11, x1
0x06A2E668: 00010054  b.eq #0x6a2e688
0x06A2E66C: 290500f1  subs x9, x9, #1
0x06A2E670: 4a410091  add x10, x10, #0x10
0x06A2E674: 61ffff54  b.ne #0x6a2e660
0x06A2E678: e00314aa  mov x0, x20
0x06A2E67C: e2031f2a  mov w2, wzr
0x06A2E680: 24a11c97  bl #0x3156b10
0x06A2E684: 04000014  b #0x6a2e694
0x06A2E688: 490180b9  ldrsw x9, [x10]
0x06A2E68C: 0811098b  add x8, x8, x9, lsl #4
0x06A2E690: 00e10491  add x0, x8, #0x138
0x06A2E694: 080440a9  ldp x8, x1, [x0]
0x06A2E698: e00314aa  mov x0, x20
0x06A2E69C: 00013fd6  blr x8
0x06A2E6A0: 740a40f9  ldr x20, [x19, #0x10]
0x06A2E6A4: d40300b4  cbz x20, #0x6a2e71c
0x06A2E6A8: 880240f9  ldr x8, [x20]
0x06A2E6AC: a10240f9  ldr x1, [x21]
0x06A2E6B0: f30300aa  mov x19, x0
0x06A2E6B4: 095d4279  ldrh w9, [x8, #0x12e]
0x06A2E6B8: 290100b4  cbz x9, #0x6a2e6dc
0x06A2E6BC: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A2E6C0: 4a210091  add x10, x10, #8
0x06A2E6C4: 4b815ff8  ldur x11, [x10, #-8]
0x06A2E6C8: 7f0101eb  cmp x11, x1
0x06A2E6CC: 00010054  b.eq #0x6a2e6ec
0x06A2E6D0: 290500f1  subs x9, x9, #1
0x06A2E6D4: 4a410091  add x10, x10, #0x10
0x06A2E6D8: 61ffff54  b.ne #0x6a2e6c4
0x06A2E6DC: e00314aa  mov x0, x20
0x06A2E6E0: e2031f2a  mov w2, wzr
0x06A2E6E4: 0ba11c97  bl #0x3156b10
0x06A2E6E8: 04000014  b #0x6a2e6f8
0x06A2E6EC: 490180b9  ldrsw x9, [x10]
0x06A2E6F0: 0811098b  add x8, x8, x9, lsl #4
0x06A2E6F4: 00e10491  add x0, x8, #0x138
0x06A2E6F8: 080440a9  ldp x8, x1, [x0]
0x06A2E6FC: e00314aa  mov x0, x20
0x06A2E700: 00013fd6  blr x8
0x06A2E704: e10300aa  mov x1, x0
0x06A2E708: e00313aa  mov x0, x19
0x06A2E70C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A2E710: e2031faa  mov x2, xzr
0x06A2E714: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A2E718: 56f0aa17  b #0x54ea870
0x06A2E71C: 64491d97  bl #0x3180cac

