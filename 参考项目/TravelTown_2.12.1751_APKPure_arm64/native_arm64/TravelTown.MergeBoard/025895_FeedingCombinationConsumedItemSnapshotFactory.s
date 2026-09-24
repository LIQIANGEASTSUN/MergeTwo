; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25895 Merger.MergeBoard.Factories.FeedingCombinationConsumedItemSnapshotFactory
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A93BC0 | public FeedingCombinationConsumedItemSnapshot CreateFeedingCombinationConsumedItemSnapshot(Entity entity) { }
; bytes=592 sha256=9f8f935eca9edf260fd79b23c1cb33ec856bb918be3e9e3b3ff5c1de2c6f1539 status=arm64_complete_bound indexed_start=True
0x06A93BC0: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x06A93BC4: f65701a9  stp x22, x21, [sp, #0x10]
0x06A93BC8: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A93BCC: b59400f0  adrp x21, #0x7d2a000
0x06A93BD0: a8066039  ldrb w8, [x21, #0x801]
0x06A93BD4: f40301aa  mov x20, x1
0x06A93BD8: f30300aa  mov x19, x0
0x06A93BDC: 48020037  tbnz w8, #0, #0x6a93c24
0x06A93BE0: e06400d0  adrp x0, #0x7731000
0x06A93BE4: 004846f9  ldr x0, [x0, #0xc90]
0x06A93BE8: 8cb31b97  bl #0x3180a18
0x06A93BEC: e06400f0  adrp x0, #0x7732000
0x06A93BF0: 007c41f9  ldr x0, [x0, #0x2f8]
0x06A93BF4: 89b31b97  bl #0x3180a18
0x06A93BF8: e06400f0  adrp x0, #0x7732000
0x06A93BFC: 008041f9  ldr x0, [x0, #0x300]
0x06A93C00: 86b31b97  bl #0x3180a18
0x06A93C04: 606100d0  adrp x0, #0x76c1000
0x06A93C08: 00e846f9  ldr x0, [x0, #0xdd0]
0x06A93C0C: 83b31b97  bl #0x3180a18
0x06A93C10: c05e0090  adrp x0, #0x766b000
0x06A93C14: 00b040f9  ldr x0, [x0, #0x160]
0x06A93C18: 80b31b97  bl #0x3180a18
0x06A93C1C: 28008052  movz w8, #0x1
0x06A93C20: a8062039  strb w8, [x21, #0x801]
0x06A93C24: 750e40f9  ldr x21, [x19, #0x18]
0x06A93C28: 350f00b4  cbz x21, #0x6a93e0c
0x06A93C2C: 696100d0  adrp x9, #0x76c1000
0x06A93C30: 29e946f9  ldr x9, [x9, #0xdd0]
0x06A93C34: a80240f9  ldr x8, [x21]
0x06A93C38: 370140f9  ldr x23, [x9]
0x06A93C3C: c95e0090  adrp x9, #0x766b000
0x06A93C40: 29b140f9  ldr x9, [x9, #0x160]
0x06A93C44: e11240f9  ldr x1, [x23, #0x20]
0x06A93C48: e2a24079  ldrh w2, [x23, #0x50]
0x06A93C4C: 360140f9  ldr x22, [x9]
0x06A93C50: 095d4279  ldrh w9, [x8, #0x12e]
0x06A93C54: 290100b4  cbz x9, #0x6a93c78
0x06A93C58: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A93C5C: 4a210091  add x10, x10, #8
0x06A93C60: 4b815ff8  ldur x11, [x10, #-8]
0x06A93C64: 7f0101eb  cmp x11, x1
0x06A93C68: e0000054  b.eq #0x6a93c84
0x06A93C6C: 290500f1  subs x9, x9, #1
0x06A93C70: 4a410091  add x10, x10, #0x10
0x06A93C74: 61ffff54  b.ne #0x6a93c60
0x06A93C78: e00315aa  mov x0, x21
0x06A93C7C: a50b1b97  bl #0x3156b10
0x06A93C80: 05000014  b #0x6a93c94
0x06A93C84: 490140b9  ldr w9, [x10]
0x06A93C88: 2901020b  add w9, w9, w2
0x06A93C8C: 08d1298b  add x8, x8, w9, sxtw #4
0x06A93C90: 00e10491  add x0, x8, #0x138
0x06A93C94: 000440f9  ldr x0, [x0, #8]
0x06A93C98: e10317aa  mov x1, x23
0x06A93C9C: bbb31b97  bl #0x3180b88
0x06A93CA0: 080440f9  ldr x8, [x0, #8]
0x06A93CA4: e40300aa  mov x4, x0
0x06A93CA8: e00315aa  mov x0, x21
0x06A93CAC: e10314aa  mov x1, x20
0x06A93CB0: e20316aa  mov x2, x22
0x06A93CB4: e3031faa  mov x3, xzr
0x06A93CB8: 00013fd6  blr x8
0x06A93CBC: 730a40f9  ldr x19, [x19, #0x10]
0x06A93CC0: 730a00b4  cbz x19, #0x6a93e0c
0x06A93CC4: e96400f0  adrp x9, #0x7732000
0x06A93CC8: 298141f9  ldr x9, [x9, #0x300]
0x06A93CCC: 680240f9  ldr x8, [x19]
0x06A93CD0: f76400f0  adrp x23, #0x7732000
0x06A93CD4: f40300aa  mov x20, x0
0x06A93CD8: 350140f9  ldr x21, [x9]
0x06A93CDC: 095d4279  ldrh w9, [x8, #0x12e]
0x06A93CE0: a11240f9  ldr x1, [x21, #0x20]
0x06A93CE4: a2a24079  ldrh w2, [x21, #0x50]
0x06A93CE8: f77e41f9  ldr x23, [x23, #0x2f8]
0x06A93CEC: 290100b4  cbz x9, #0x6a93d10
0x06A93CF0: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A93CF4: 4a210091  add x10, x10, #8
0x06A93CF8: 4b815ff8  ldur x11, [x10, #-8]
0x06A93CFC: 7f0101eb  cmp x11, x1
0x06A93D00: e0000054  b.eq #0x6a93d1c
0x06A93D04: 290500f1  subs x9, x9, #1
0x06A93D08: 4a410091  add x10, x10, #0x10
0x06A93D0C: 61ffff54  b.ne #0x6a93cf8
0x06A93D10: e00313aa  mov x0, x19
0x06A93D14: 7f0b1b97  bl #0x3156b10
0x06A93D18: 05000014  b #0x6a93d2c
0x06A93D1C: 490140b9  ldr w9, [x10]
0x06A93D20: 2901020b  add w9, w9, w2
0x06A93D24: 08d1298b  add x8, x8, w9, sxtw #4
0x06A93D28: 00e10491  add x0, x8, #0x138
0x06A93D2C: 000440f9  ldr x0, [x0, #8]
0x06A93D30: f66400d0  adrp x22, #0x7731000
0x06A93D34: d64a46f9  ldr x22, [x22, #0xc90]
0x06A93D38: e10315aa  mov x1, x21
0x06A93D3C: 93b31b97  bl #0x3180b88
0x06A93D40: 080440f9  ldr x8, [x0, #8]
0x06A93D44: e20300aa  mov x2, x0
0x06A93D48: e00313aa  mov x0, x19
0x06A93D4C: e10314aa  mov x1, x20
0x06A93D50: 00013fd6  blr x8
0x06A93D54: f50240f9  ldr x21, [x23]
0x06A93D58: 680240f9  ldr x8, [x19]
0x06A93D5C: f40300aa  mov x20, x0
0x06A93D60: a11240f9  ldr x1, [x21, #0x20]
0x06A93D64: 095d4279  ldrh w9, [x8, #0x12e]
0x06A93D68: a2a24079  ldrh w2, [x21, #0x50]
0x06A93D6C: 290100b4  cbz x9, #0x6a93d90
0x06A93D70: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A93D74: 4a210091  add x10, x10, #8
0x06A93D78: 4b815ff8  ldur x11, [x10, #-8]
0x06A93D7C: 7f0101eb  cmp x11, x1
0x06A93D80: e0000054  b.eq #0x6a93d9c
0x06A93D84: 290500f1  subs x9, x9, #1
0x06A93D88: 4a410091  add x10, x10, #0x10
0x06A93D8C: 61ffff54  b.ne #0x6a93d78
0x06A93D90: e00313aa  mov x0, x19
0x06A93D94: 5f0b1b97  bl #0x3156b10
0x06A93D98: 05000014  b #0x6a93dac
0x06A93D9C: 490140b9  ldr w9, [x10]
0x06A93DA0: 2901020b  add w9, w9, w2
0x06A93DA4: 08d1298b  add x8, x8, w9, sxtw #4
0x06A93DA8: 00e10491  add x0, x8, #0x138
0x06A93DAC: 000440f9  ldr x0, [x0, #8]
0x06A93DB0: e10315aa  mov x1, x21
0x06A93DB4: 75b31b97  bl #0x3180b88
0x06A93DB8: 080440f9  ldr x8, [x0, #8]
0x06A93DBC: e20300aa  mov x2, x0
0x06A93DC0: e00313aa  mov x0, x19
0x06A93DC4: e10314aa  mov x1, x20
0x06A93DC8: 00013fd6  blr x8
0x06A93DCC: c80240f9  ldr x8, [x22]
0x06A93DD0: f30300aa  mov x19, x0
0x06A93DD4: e00308aa  mov x0, x8
0x06A93DD8: b2b31b97  bl #0x3180ca0
0x06A93DDC: e1031faa  mov x1, xzr
0x06A93DE0: f40300aa  mov x20, x0
0x06A93DE4: 061ab197  bl #0x56da5fc
0x06A93DE8: e00314aa  mov x0, x20
0x06A93DEC: 130c01f8  str x19, [x0, #0x10]!
0x06A93DF0: e10313aa  mov x1, x19
0x06A93DF4: f4b21b97  bl #0x31809c4
0x06A93DF8: e00314aa  mov x0, x20
0x06A93DFC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A93E00: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A93E04: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x06A93E08: c0035fd6  ret
0x06A93E0C: a8b31b97  bl #0x3180cac

; RVA 0x6A93E10 | public void .ctor() { }
; bytes=8 sha256=c6200af09efcde6111577717b42dff0662aea4f824ca41270ee4c0d85c925da0 status=arm64_complete_bound indexed_start=True
0x06A93E10: e1031faa  mov x1, xzr
0x06A93E14: fa19b117  b #0x56da5fc

