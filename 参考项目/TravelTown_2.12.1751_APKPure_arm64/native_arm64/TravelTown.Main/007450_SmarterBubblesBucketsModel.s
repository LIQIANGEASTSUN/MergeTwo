; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 7450 Merger.Bubbles.SmarterBubblesBucketsModel
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6579C8C | public BucketProbabilityData get_BucketsProbabilityData() { }
; bytes=308 sha256=2e2357d7eb5c1b29674d64b626a4d55c3ed23750dd2a36a7b6d37223a9808807 status=arm64_complete_bound indexed_start=True
0x06579C8C: fe0f1ef8  str x30, [sp, #-0x20]!
0x06579C90: f44f01a9  stp x20, x19, [sp, #0x10]
0x06579C94: 74bd00d0  adrp x20, #0x7d27000
0x06579C98: 88de5839  ldrb w8, [x20, #0x637]
0x06579C9C: f30300aa  mov x19, x0
0x06579CA0: 88010037  tbnz w8, #0, #0x6579cd0
0x06579CA4: c08700b0  adrp x0, #0x7672000
0x06579CA8: 006043f9  ldr x0, [x0, #0x6c0]
0x06579CAC: 5b1b3097  bl #0x3180a18
0x06579CB0: 208c00f0  adrp x0, #0x7700000
0x06579CB4: 000c42f9  ldr x0, [x0, #0x418]
0x06579CB8: 581b3097  bl #0x3180a18
0x06579CBC: 208800b0  adrp x0, #0x767e000
0x06579CC0: 00e047f9  ldr x0, [x0, #0xfc0]
0x06579CC4: 551b3097  bl #0x3180a18
0x06579CC8: 28008052  movz w8, #0x1
0x06579CCC: 88de1839  strb w8, [x20, #0x637]
0x06579CD0: 740a40f9  ldr x20, [x19, #0x10]
0x06579CD4: 540700b4  cbz x20, #0x6579dbc
0x06579CD8: ca8700b0  adrp x10, #0x7672000
0x06579CDC: 880240f9  ldr x8, [x20]
0x06579CE0: 4a6143f9  ldr x10, [x10, #0x6c0]
0x06579CE4: 730e40f9  ldr x19, [x19, #0x18]
0x06579CE8: 095d4279  ldrh w9, [x8, #0x12e]
0x06579CEC: 410140f9  ldr x1, [x10]
0x06579CF0: 290100b4  cbz x9, #0x6579d14
0x06579CF4: 0a5940f9  ldr x10, [x8, #0xb0]
0x06579CF8: 4a210091  add x10, x10, #8
0x06579CFC: 4b815ff8  ldur x11, [x10, #-8]
0x06579D00: 7f0101eb  cmp x11, x1
0x06579D04: 00010054  b.eq #0x6579d24
0x06579D08: 290500f1  subs x9, x9, #1
0x06579D0C: 4a410091  add x10, x10, #0x10
0x06579D10: 61ffff54  b.ne #0x6579cfc
0x06579D14: a2008052  movz w2, #0x5
0x06579D18: e00314aa  mov x0, x20
0x06579D1C: 7d732f97  bl #0x3156b10
0x06579D20: 05000014  b #0x6579d34
0x06579D24: 490140b9  ldr w9, [x10]
0x06579D28: 29150011  add w9, w9, #5
0x06579D2C: 08d1298b  add x8, x8, w9, sxtw #4
0x06579D30: 00e10491  add x0, x8, #0x138
0x06579D34: 080440a9  ldp x8, x1, [x0]
0x06579D38: e00314aa  mov x0, x20
0x06579D3C: 00013fd6  blr x8
0x06579D40: e00300b4  cbz x0, #0x6579dbc
0x06579D44: d30300b4  cbz x19, #0x6579dbc
0x06579D48: 2a8c00f0  adrp x10, #0x7700000
0x06579D4C: 680240f9  ldr x8, [x19]
0x06579D50: 4a0d42f9  ldr x10, [x10, #0x418]
0x06579D54: 142040b9  ldr w20, [x0, #0x20]
0x06579D58: 095d4279  ldrh w9, [x8, #0x12e]
0x06579D5C: 410140f9  ldr x1, [x10]
0x06579D60: 290100b4  cbz x9, #0x6579d84
0x06579D64: 0a5940f9  ldr x10, [x8, #0xb0]
0x06579D68: 4a210091  add x10, x10, #8
0x06579D6C: 4b815ff8  ldur x11, [x10, #-8]
0x06579D70: 7f0101eb  cmp x11, x1
0x06579D74: 00010054  b.eq #0x6579d94
0x06579D78: 290500f1  subs x9, x9, #1
0x06579D7C: 4a410091  add x10, x10, #0x10
0x06579D80: 61ffff54  b.ne #0x6579d6c
0x06579D84: 42008052  movz w2, #0x2
0x06579D88: e00313aa  mov x0, x19
0x06579D8C: 61732f97  bl #0x3156b10
0x06579D90: 05000014  b #0x6579da4
0x06579D94: 490140b9  ldr w9, [x10]
0x06579D98: 29090011  add w9, w9, #2
0x06579D9C: 08d1298b  add x8, x8, w9, sxtw #4
0x06579DA0: 00e10491  add x0, x8, #0x138
0x06579DA4: 030840a9  ldp x3, x2, [x0]
0x06579DA8: e00313aa  mov x0, x19
0x06579DAC: e103142a  mov w1, w20
0x06579DB0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06579DB4: fe0742f8  ldr x30, [sp], #0x20
0x06579DB8: 60001fd6  br x3
0x06579DBC: bc1b3097  bl #0x3180cac

; RVA 0x6579DC0 | public IReadOnlyDictionary<CurrentBoardType, BucketProbabilityData> get_ProbabilityData() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x06579DC0: 000c40f9  ldr x0, [x0, #0x18]
0x06579DC4: c0035fd6  ret

; RVA 0x6579DC8 | public void .ctor() { }
; bytes=256 sha256=594801490b282298c037feb0cced3a80d2a6e3b9007fabbb1fc8793ded8f32d7 status=arm64_complete_bound indexed_start=True
0x06579DC8: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x06579DCC: f65701a9  stp x22, x21, [sp, #0x10]
0x06579DD0: f44f02a9  stp x20, x19, [sp, #0x20]
0x06579DD4: 75bd00d0  adrp x21, #0x7d27000
0x06579DD8: 378c00f0  adrp x23, #0x7700000
0x06579DDC: 348c00f0  adrp x20, #0x7700000
0x06579DE0: 368c00f0  adrp x22, #0x7700000
0x06579DE4: a8e25839  ldrb w8, [x21, #0x638]
0x06579DE8: f71242f9  ldr x23, [x23, #0x420]
0x06579DEC: 941642f9  ldr x20, [x20, #0x428]
0x06579DF0: d61a42f9  ldr x22, [x22, #0x430]
0x06579DF4: f30300aa  mov x19, x0
0x06579DF8: e8010037  tbnz w8, #0, #0x6579e34
0x06579DFC: 208c00f0  adrp x0, #0x7700000
0x06579E00: 001842f9  ldr x0, [x0, #0x430]
0x06579E04: 051b3097  bl #0x3180a18
0x06579E08: 208c00f0  adrp x0, #0x7700000
0x06579E0C: 001c42f9  ldr x0, [x0, #0x438]
0x06579E10: 021b3097  bl #0x3180a18
0x06579E14: 208c00f0  adrp x0, #0x7700000
0x06579E18: 001442f9  ldr x0, [x0, #0x428]
0x06579E1C: ff1a3097  bl #0x3180a18
0x06579E20: 208c00f0  adrp x0, #0x7700000
0x06579E24: 001042f9  ldr x0, [x0, #0x420]
0x06579E28: fc1a3097  bl #0x3180a18
0x06579E2C: 28008052  movz w8, #0x1
0x06579E30: a8e21839  strb w8, [x21, #0x638]
0x06579E34: e00240f9  ldr x0, [x23]
0x06579E38: 9a1b3097  bl #0x3180ca0
0x06579E3C: 810240f9  ldr x1, [x20]
0x06579E40: f40300aa  mov x20, x0
0x06579E44: 999ca397  bl #0x4e610a8
0x06579E48: c00240f9  ldr x0, [x22]
0x06579E4C: 951b3097  bl #0x3180ca0
0x06579E50: f50300aa  mov x21, x0
0x06579E54: 1d000094  bl #0x6579ec8
0x06579E58: 740300b4  cbz x20, #0x6579ec4
0x06579E5C: 378c00f0  adrp x23, #0x7700000
0x06579E60: f71e42f9  ldr x23, [x23, #0x438]
0x06579E64: e00314aa  mov x0, x20
0x06579E68: e1031f2a  mov w1, wzr
0x06579E6C: e20315aa  mov x2, x21
0x06579E70: e30240f9  ldr x3, [x23]
0x06579E74: 0ca0a397  bl #0x4e61ea4
0x06579E78: c00240f9  ldr x0, [x22]
0x06579E7C: 891b3097  bl #0x3180ca0
0x06579E80: f50300aa  mov x21, x0
0x06579E84: 11000094  bl #0x6579ec8
0x06579E88: e30240f9  ldr x3, [x23]
0x06579E8C: 21008052  movz w1, #0x1
0x06579E90: e00314aa  mov x0, x20
0x06579E94: e20315aa  mov x2, x21
0x06579E98: 03a0a397  bl #0x4e61ea4
0x06579E9C: e00313aa  mov x0, x19
0x06579EA0: 148c01f8  str x20, [x0, #0x18]!
0x06579EA4: e10314aa  mov x1, x20
0x06579EA8: c71a3097  bl #0x31809c4
0x06579EAC: e00313aa  mov x0, x19
0x06579EB0: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06579EB4: f65741a9  ldp x22, x21, [sp, #0x10]
0x06579EB8: e1031faa  mov x1, xzr
0x06579EBC: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x06579EC0: cf81c517  b #0x56da5fc
0x06579EC4: 7a1b3097  bl #0x3180cac

