; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 33869 Merger.MergeBoardSkipCooldownCapability.Systems.TimeCycleSkipCooldownSystem
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A629C4 | public void Tick(TickContext context) { }
; bytes=760 sha256=e1f22a00dc0b84cb59efb8ef8fbe3367cdce8673a1f28c07f65e4a4e5500e2cb status=arm64_complete_bound indexed_start=True
0x06A629C4: ff8305d1  sub sp, sp, #0x160
0x06A629C8: fd7b12a9  stp x29, x30, [sp, #0x120]
0x06A629CC: f85f13a9  stp x24, x23, [sp, #0x130]
0x06A629D0: f65714a9  stp x22, x21, [sp, #0x140]
0x06A629D4: f44f15a9  stp x20, x19, [sp, #0x150]
0x06A629D8: 56960090  adrp x22, #0x7d2a000
0x06A629DC: 756600d0  adrp x21, #0x7730000
0x06A629E0: c8ee5939  ldrb w8, [x22, #0x67b]
0x06A629E4: b51e44f9  ldr x21, [x21, #0x838]
0x06A629E8: f30301aa  mov x19, x1
0x06A629EC: f40300aa  mov x20, x0
0x06A629F0: a8050037  tbnz w8, #0, #0x6a62aa4
0x06A629F4: 606600d0  adrp x0, #0x7730000
0x06A629F8: 002044f9  ldr x0, [x0, #0x840]
0x06A629FC: 07781c97  bl #0x3180a18
0x06A62A00: 606600b0  adrp x0, #0x772f000
0x06A62A04: 002447f9  ldr x0, [x0, #0xe48]
0x06A62A08: 04781c97  bl #0x3180a18
0x06A62A0C: 606600d0  adrp x0, #0x7730000
0x06A62A10: 002444f9  ldr x0, [x0, #0x848]
0x06A62A14: 01781c97  bl #0x3180a18
0x06A62A18: 606600b0  adrp x0, #0x772f000
0x06A62A1C: 003447f9  ldr x0, [x0, #0xe68]
0x06A62A20: fe771c97  bl #0x3180a18
0x06A62A24: 606600d0  adrp x0, #0x7730000
0x06A62A28: 002844f9  ldr x0, [x0, #0x850]
0x06A62A2C: fb771c97  bl #0x3180a18
0x06A62A30: 606600d0  adrp x0, #0x7730000
0x06A62A34: 002c44f9  ldr x0, [x0, #0x858]
0x06A62A38: f8771c97  bl #0x3180a18
0x06A62A3C: 606600d0  adrp x0, #0x7730000
0x06A62A40: 003044f9  ldr x0, [x0, #0x860]
0x06A62A44: f5771c97  bl #0x3180a18
0x06A62A48: 606600d0  adrp x0, #0x7730000
0x06A62A4C: 003444f9  ldr x0, [x0, #0x868]
0x06A62A50: f2771c97  bl #0x3180a18
0x06A62A54: 606600d0  adrp x0, #0x7730000
0x06A62A58: 003844f9  ldr x0, [x0, #0x870]
0x06A62A5C: ef771c97  bl #0x3180a18
0x06A62A60: 606600d0  adrp x0, #0x7730000
0x06A62A64: 003c44f9  ldr x0, [x0, #0x878]
0x06A62A68: ec771c97  bl #0x3180a18
0x06A62A6C: 606600d0  adrp x0, #0x7730000
0x06A62A70: 004044f9  ldr x0, [x0, #0x880]
0x06A62A74: e9771c97  bl #0x3180a18
0x06A62A78: 606600d0  adrp x0, #0x7730000
0x06A62A7C: 004444f9  ldr x0, [x0, #0x888]
0x06A62A80: e6771c97  bl #0x3180a18
0x06A62A84: 606600d0  adrp x0, #0x7730000
0x06A62A88: 001c44f9  ldr x0, [x0, #0x838]
0x06A62A8C: e3771c97  bl #0x3180a18
0x06A62A90: 605f00b0  adrp x0, #0x764f000
0x06A62A94: 00ac40f9  ldr x0, [x0, #0x158]
0x06A62A98: e0771c97  bl #0x3180a18
0x06A62A9C: 28008052  movz w8, #0x1
0x06A62AA0: c8ee1939  strb w8, [x22, #0x67b]
0x06A62AA4: a00240f9  ldr x0, [x21]
0x06A62AA8: 00e4006f  movi v0.2d, #0000000000000000
0x06A62AAC: e00305ad  stp q0, q0, [sp, #0xa0]
0x06A62AB0: e00304ad  stp q0, q0, [sp, #0x80]
0x06A62AB4: e00303ad  stp q0, q0, [sp, #0x60]
0x06A62AB8: e00302ad  stp q0, q0, [sp, #0x40]
0x06A62ABC: e00301ad  stp q0, q0, [sp, #0x20]
0x06A62AC0: 78781c97  bl #0x3180ca0
0x06A62AC4: e1031faa  mov x1, xzr
0x06A62AC8: f60300aa  mov x22, x0
0x06A62ACC: ccdeb197  bl #0x56da5fc
0x06A62AD0: 560f00b4  cbz x22, #0x6a62cb8
0x06A62AD4: f50316aa  mov x21, x22
0x06A62AD8: b48e01f8  str x20, [x21, #0x18]!
0x06A62ADC: e00315aa  mov x0, x21
0x06A62AE0: e10314aa  mov x1, x20
0x06A62AE4: b8771c97  bl #0x31809c4
0x06A62AE8: 600640f9  ldr x0, [x19, #8]
0x06A62AEC: 600e00b4  cbz x0, #0x6a62cb8
0x06A62AF0: 686600d0  adrp x8, #0x7730000
0x06A62AF4: 083d44f9  ldr x8, [x8, #0x878]
0x06A62AF8: b52200d1  sub x21, x21, #8
0x06A62AFC: e10315aa  mov x1, x21
0x06A62B00: 020140f9  ldr x2, [x8]
0x06A62B04: 47894d97  bl #0x3dc5020
0x06A62B08: c00c0036  tbz w0, #0, #0x6a62ca0
0x06A62B0C: 686600d0  adrp x8, #0x7730000
0x06A62B10: 600640ad  ldp q0, q1, [x19]
0x06A62B14: 082544f9  ldr x8, [x8, #0x848]
0x06A62B18: e00700ad  stp q0, q1, [sp]
0x06A62B1C: 000140f9  ldr x0, [x8]
0x06A62B20: 3bdd4697  bl #0x3c1a00c
0x06A62B24: 686600b0  adrp x8, #0x772f000
0x06A62B28: 083547f9  ldr x8, [x8, #0xe68]
0x06A62B2C: f70300aa  mov x23, x0
0x06A62B30: 080140f9  ldr x8, [x8]
0x06A62B34: e00308aa  mov x0, x8
0x06A62B38: 5a781c97  bl #0x3180ca0
0x06A62B3C: 686600b0  adrp x8, #0x772f000
0x06A62B40: 082547f9  ldr x8, [x8, #0xe48]
0x06A62B44: e1031faa  mov x1, xzr
0x06A62B48: e3031faa  mov x3, xzr
0x06A62B4C: f80300aa  mov x24, x0
0x06A62B50: 020140f9  ldr x2, [x8]
0x06A62B54: 6dccd297  bl #0x5f15d08
0x06A62B58: 686600d0  adrp x8, #0x7730000
0x06A62B5C: 083544f9  ldr x8, [x8, #0x868]
0x06A62B60: e00740ad  ldp q0, q1, [sp]
0x06A62B64: e0030391  add x0, sp, #0xc0
0x06A62B68: e10317aa  mov x1, x23
0x06A62B6C: 030140f9  ldr x3, [x8]
0x06A62B70: e8830091  add x8, sp, #0x20
0x06A62B74: e20318aa  mov x2, x24
0x06A62B78: e00706ad  stp q0, q1, [sp, #0xc0]
0x06A62B7C: 4a094c97  bl #0x3d650a4
0x06A62B80: 686600d0  adrp x8, #0x7730000
0x06A62B84: 082944f9  ldr x8, [x8, #0x850]
0x06A62B88: 000140f9  ldr x0, [x8]
0x06A62B8C: 45781c97  bl #0x3180ca0
0x06A62B90: 686600d0  adrp x8, #0x7730000
0x06A62B94: 084544f9  ldr x8, [x8, #0x888]
0x06A62B98: e10316aa  mov x1, x22
0x06A62B9C: e3031faa  mov x3, xzr
0x06A62BA0: f70300aa  mov x23, x0
0x06A62BA4: 020140f9  ldr x2, [x8]
0x06A62BA8: f8b49f97  bl #0x524ff88
0x06A62BAC: 686600d0  adrp x8, #0x7730000
0x06A62BB0: 083144f9  ldr x8, [x8, #0x860]
0x06A62BB4: e0830091  add x0, sp, #0x20
0x06A62BB8: e10317aa  mov x1, x23
0x06A62BBC: 020140f9  ldr x2, [x8]
0x06A62BC0: e8830291  add x8, sp, #0xa0
0x06A62BC4: 789b6497  bl #0x43899a4
0x06A62BC8: 686600d0  adrp x8, #0x7730000
0x06A62BCC: 082d44f9  ldr x8, [x8, #0x858]
0x06A62BD0: e0830291  add x0, sp, #0xa0
0x06A62BD4: e1030191  add x1, sp, #0x40
0x06A62BD8: 020140f9  ldr x2, [x8]
0x06A62BDC: de9b6497  bl #0x4389b54
0x06A62BE0: 00060036  tbz w0, #0, #0x6a62ca0
0x06A62BE4: 685f00b0  adrp x8, #0x764f000
0x06A62BE8: e02340f9  ldr x0, [sp, #0x40]
0x06A62BEC: 810e40f9  ldr x1, [x20, #0x18]
0x06A62BF0: 08ad40f9  ldr x8, [x8, #0x158]
0x06A62BF4: e5031faa  mov x5, xzr
0x06A62BF8: 020140f9  ldr x2, [x8]
0x06A62BFC: e30302aa  mov x3, x2
0x06A62C00: e40302aa  mov x4, x2
0x06A62C04: 4c010194  bl #0x6aa3134
0x06A62C08: 686600d0  adrp x8, #0x7730000
0x06A62C0C: 084144f9  ldr x8, [x8, #0x880]
0x06A62C10: f40300aa  mov x20, x0
0x06A62C14: e0030391  add x0, sp, #0xc0
0x06A62C18: e1030191  add x1, sp, #0x40
0x06A62C1C: 160140f9  ldr x22, [x8]
0x06A62C20: 020c8052  movz w2, #0x60
0x06A62C24: ff7f07a9  stp xzr, xzr, [sp, #0x70]
0x06A62C28: 52af1d94  bl #0x71ce970
0x06A62C2C: e0030391  add x0, sp, #0xc0
0x06A62C30: e10316aa  mov x1, x22
0x06A62C34: bf8d4d97  bl #0x3dc6330
0x06A62C38: 686600d0  adrp x8, #0x7730000
0x06A62C3C: 730a40f9  ldr x19, [x19, #0x10]
0x06A62C40: 082144f9  ldr x8, [x8, #0x840]
0x06A62C44: 000140f9  ldr x0, [x8]
0x06A62C48: 16781c97  bl #0x3180ca0
0x06A62C4C: e1031faa  mov x1, xzr
0x06A62C50: f60300aa  mov x22, x0
0x06A62C54: 6adeb197  bl #0x56da5fc
0x06A62C58: a80240f9  ldr x8, [x21]
0x06A62C5C: e80200b4  cbz x8, #0x6a62cb8
0x06A62C60: d60200b4  cbz x22, #0x6a62cb8
0x06A62C64: 010940f9  ldr x1, [x8, #0x10]
0x06A62C68: e00316aa  mov x0, x22
0x06A62C6C: 010c01f8  str x1, [x0, #0x10]!
0x06A62C70: 55771c97  bl #0x31809c4
0x06A62C74: e00316aa  mov x0, x22
0x06A62C78: 148c01f8  str x20, [x0, #0x18]!
0x06A62C7C: e10314aa  mov x1, x20
0x06A62C80: 51771c97  bl #0x31809c4
0x06A62C84: b30100b4  cbz x19, #0x6a62cb8
0x06A62C88: 686600d0  adrp x8, #0x7730000
0x06A62C8C: 083944f9  ldr x8, [x8, #0x870]
0x06A62C90: e00313aa  mov x0, x19
0x06A62C94: e10316aa  mov x1, x22
0x06A62C98: 020140f9  ldr x2, [x8]
0x06A62C9C: d2814d97  bl #0x3dc33e4
0x06A62CA0: f44f55a9  ldp x20, x19, [sp, #0x150]
0x06A62CA4: f65754a9  ldp x22, x21, [sp, #0x140]
0x06A62CA8: f85f53a9  ldp x24, x23, [sp, #0x130]
0x06A62CAC: fd7b52a9  ldp x29, x30, [sp, #0x120]
0x06A62CB0: ff830591  add sp, sp, #0x160
0x06A62CB4: c0035fd6  ret
0x06A62CB8: fd771c97  bl #0x3180cac

; RVA 0x6A62CCC | public void .ctor() { }
; bytes=8 sha256=1f8e118bd0b62dbeee447c913bc409111e9c61841ed4c4c6ad1d2939abddb014 status=arm64_complete_bound indexed_start=True
0x06A62CCC: e1031faa  mov x1, xzr
0x06A62CD0: 4bdeb117  b #0x56da5fc

