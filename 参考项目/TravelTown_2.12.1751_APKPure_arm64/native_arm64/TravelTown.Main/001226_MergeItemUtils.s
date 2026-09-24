; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1226 MergeEngine.Configuration.Orders.Difficulty.MergeItemUtils
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A1D7F8 | public static bool IsPrimaryProducer(IMergeGraphItem graph) { }
; bytes=280 sha256=7ad01ba7fef53765a054bf30edeb5eaefcd29c8fa243481f5da4425c47d671b3 status=arm64_complete_bound indexed_start=True
0x06A1D7F8: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A1D7FC: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A1D800: 749800b0  adrp x20, #0x7d2a000
0x06A1D804: 88ba4e39  ldrb w8, [x20, #0x3ae]
0x06A1D808: f30300aa  mov x19, x0
0x06A1D80C: c8000037  tbnz w8, #0, #0x6a1d824
0x06A1D810: e06200f0  adrp x0, #0x767c000
0x06A1D814: 002441f9  ldr x0, [x0, #0x248]
0x06A1D818: 808c1d97  bl #0x3180a18
0x06A1D81C: 28008052  movz w8, #0x1
0x06A1D820: 88ba0e39  strb w8, [x20, #0x3ae]
0x06A1D824: 530700b4  cbz x19, #0x6a1d90c
0x06A1D828: f46200f0  adrp x20, #0x767c000
0x06A1D82C: 680240f9  ldr x8, [x19]
0x06A1D830: 942641f9  ldr x20, [x20, #0x248]
0x06A1D834: 095d4279  ldrh w9, [x8, #0x12e]
0x06A1D838: 810240f9  ldr x1, [x20]
0x06A1D83C: 290100b4  cbz x9, #0x6a1d860
0x06A1D840: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A1D844: 4a210091  add x10, x10, #8
0x06A1D848: 4b815ff8  ldur x11, [x10, #-8]
0x06A1D84C: 7f0101eb  cmp x11, x1
0x06A1D850: 00010054  b.eq #0x6a1d870
0x06A1D854: 290500f1  subs x9, x9, #1
0x06A1D858: 4a410091  add x10, x10, #0x10
0x06A1D85C: 61ffff54  b.ne #0x6a1d848
0x06A1D860: e2018052  movz w2, #0xf
0x06A1D864: e00313aa  mov x0, x19
0x06A1D868: aae41c97  bl #0x3156b10
0x06A1D86C: 05000014  b #0x6a1d880
0x06A1D870: 490140b9  ldr w9, [x10]
0x06A1D874: 293d0011  add w9, w9, #0xf
0x06A1D878: 08d1298b  add x8, x8, w9, sxtw #4
0x06A1D87C: 00e10491  add x0, x8, #0x138
0x06A1D880: 080440a9  ldp x8, x1, [x0]
0x06A1D884: e00313aa  mov x0, x19
0x06A1D888: 00013fd6  blr x8
0x06A1D88C: 1f100071  cmp w0, #4
0x06A1D890: 61000054  b.ne #0x6a1d89c
0x06A1D894: 20008052  movz w0, #0x1
0x06A1D898: 1a000014  b #0x6a1d900
0x06A1D89C: 680240f9  ldr x8, [x19]
0x06A1D8A0: 810240f9  ldr x1, [x20]
0x06A1D8A4: 095d4279  ldrh w9, [x8, #0x12e]
0x06A1D8A8: 290100b4  cbz x9, #0x6a1d8cc
0x06A1D8AC: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A1D8B0: 4a210091  add x10, x10, #8
0x06A1D8B4: 4b815ff8  ldur x11, [x10, #-8]
0x06A1D8B8: 7f0101eb  cmp x11, x1
0x06A1D8BC: 00010054  b.eq #0x6a1d8dc
0x06A1D8C0: 290500f1  subs x9, x9, #1
0x06A1D8C4: 4a410091  add x10, x10, #0x10
0x06A1D8C8: 61ffff54  b.ne #0x6a1d8b4
0x06A1D8CC: e2018052  movz w2, #0xf
0x06A1D8D0: e00313aa  mov x0, x19
0x06A1D8D4: 8fe41c97  bl #0x3156b10
0x06A1D8D8: 05000014  b #0x6a1d8ec
0x06A1D8DC: 490140b9  ldr w9, [x10]
0x06A1D8E0: 293d0011  add w9, w9, #0xf
0x06A1D8E4: 08d1298b  add x8, x8, w9, sxtw #4
0x06A1D8E8: 00e10491  add x0, x8, #0x138
0x06A1D8EC: 080440a9  ldp x8, x1, [x0]
0x06A1D8F0: e00313aa  mov x0, x19
0x06A1D8F4: 00013fd6  blr x8
0x06A1D8F8: 1f080071  cmp w0, #2
0x06A1D8FC: e0179f1a  cset w0, eq
0x06A1D900: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A1D904: fe0742f8  ldr x30, [sp], #0x20
0x06A1D908: c0035fd6  ret
0x06A1D90C: e88c1d97  bl #0x3180cac

; RVA 0x6A1D910 | public static bool IsJokerItem(IMergeItem mergeItem) { }
; bytes=180 sha256=2a825f72efee7d5af0b3b885f564d6944b7488aeecc9077047e3c475bd70f7be status=arm64_complete_bound indexed_start=True
0x06A1D910: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A1D914: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A1D918: 749800b0  adrp x20, #0x7d2a000
0x06A1D91C: 88be4e39  ldrb w8, [x20, #0x3af]
0x06A1D920: f30300aa  mov x19, x0
0x06A1D924: c8000037  tbnz w8, #0, #0x6a1d93c
0x06A1D928: 006300b0  adrp x0, #0x767e000
0x06A1D92C: 00a442f9  ldr x0, [x0, #0x548]
0x06A1D930: 3a8c1d97  bl #0x3180a18
0x06A1D934: 28008052  movz w8, #0x1
0x06A1D938: 88be0e39  strb w8, [x20, #0x3af]
0x06A1D93C: 330400b4  cbz x19, #0x6a1d9c0
0x06A1D940: 0a6300b0  adrp x10, #0x767e000
0x06A1D944: 680240f9  ldr x8, [x19]
0x06A1D948: 4aa542f9  ldr x10, [x10, #0x548]
0x06A1D94C: 095d4279  ldrh w9, [x8, #0x12e]
0x06A1D950: 410140f9  ldr x1, [x10]
0x06A1D954: 290100b4  cbz x9, #0x6a1d978
0x06A1D958: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A1D95C: 4a210091  add x10, x10, #8
0x06A1D960: 4b815ff8  ldur x11, [x10, #-8]
0x06A1D964: 7f0101eb  cmp x11, x1
0x06A1D968: 00010054  b.eq #0x6a1d988
0x06A1D96C: 290500f1  subs x9, x9, #1
0x06A1D970: 4a410091  add x10, x10, #0x10
0x06A1D974: 61ffff54  b.ne #0x6a1d960
0x06A1D978: e2008052  movz w2, #0x7
0x06A1D97C: e00313aa  mov x0, x19
0x06A1D980: 64e41c97  bl #0x3156b10
0x06A1D984: 05000014  b #0x6a1d998
0x06A1D988: 490140b9  ldr w9, [x10]
0x06A1D98C: 291d0011  add w9, w9, #7
0x06A1D990: 08d1298b  add x8, x8, w9, sxtw #4
0x06A1D994: 00e10491  add x0, x8, #0x138
0x06A1D998: 080440a9  ldp x8, x1, [x0]
0x06A1D99C: e00313aa  mov x0, x19
0x06A1D9A0: 00013fd6  blr x8
0x06A1D9A4: e00000b4  cbz x0, #0x6a1d9c0
0x06A1D9A8: 081440b9  ldr w8, [x0, #0x14]
0x06A1D9AC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A1D9B0: 1f050071  cmp w8, #1
0x06A1D9B4: e0179f1a  cset w0, eq
0x06A1D9B8: fe0742f8  ldr x30, [sp], #0x20
0x06A1D9BC: c0035fd6  ret
0x06A1D9C0: bb8c1d97  bl #0x3180cac

; RVA 0x6A1D9C4 | public static bool IsSplitterItem(IMergeItem mergeItem) { }
; bytes=292 sha256=176072027253f0ec4f9aba6deb2e59b7d65abda738364b7120199d760206d893 status=arm64_complete_bound indexed_start=True
0x06A1D9C4: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A1D9C8: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A1D9CC: 749800b0  adrp x20, #0x7d2a000
0x06A1D9D0: 88c24e39  ldrb w8, [x20, #0x3b0]
0x06A1D9D4: f30300aa  mov x19, x0
0x06A1D9D8: c8000037  tbnz w8, #0, #0x6a1d9f0
0x06A1D9DC: 006300b0  adrp x0, #0x767e000
0x06A1D9E0: 00a442f9  ldr x0, [x0, #0x548]
0x06A1D9E4: 0d8c1d97  bl #0x3180a18
0x06A1D9E8: 28008052  movz w8, #0x1
0x06A1D9EC: 88c20e39  strb w8, [x20, #0x3b0]
0x06A1D9F0: b30700b4  cbz x19, #0x6a1dae4
0x06A1D9F4: 146300b0  adrp x20, #0x767e000
0x06A1D9F8: 680240f9  ldr x8, [x19]
0x06A1D9FC: 94a642f9  ldr x20, [x20, #0x548]
0x06A1DA00: 095d4279  ldrh w9, [x8, #0x12e]
0x06A1DA04: 810240f9  ldr x1, [x20]
0x06A1DA08: 290100b4  cbz x9, #0x6a1da2c
0x06A1DA0C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A1DA10: 4a210091  add x10, x10, #8
0x06A1DA14: 4b815ff8  ldur x11, [x10, #-8]
0x06A1DA18: 7f0101eb  cmp x11, x1
0x06A1DA1C: 00010054  b.eq #0x6a1da3c
0x06A1DA20: 290500f1  subs x9, x9, #1
0x06A1DA24: 4a410091  add x10, x10, #0x10
0x06A1DA28: 61ffff54  b.ne #0x6a1da14
0x06A1DA2C: 02028052  movz w2, #0x10
0x06A1DA30: e00313aa  mov x0, x19
0x06A1DA34: 37e41c97  bl #0x3156b10
0x06A1DA38: 05000014  b #0x6a1da4c
0x06A1DA3C: 490140b9  ldr w9, [x10]
0x06A1DA40: 29410011  add w9, w9, #0x10
0x06A1DA44: 08d1298b  add x8, x8, w9, sxtw #4
0x06A1DA48: 00e10491  add x0, x8, #0x138
0x06A1DA4C: 080440a9  ldp x8, x1, [x0]
0x06A1DA50: e00313aa  mov x0, x19
0x06A1DA54: 00013fd6  blr x8
0x06A1DA58: 600400b4  cbz x0, #0x6a1dae4
0x06A1DA5C: 08404039  ldrb w8, [x0, #0x10]
0x06A1DA60: 28020034  cbz w8, #0x6a1daa4
0x06A1DA64: 680240f9  ldr x8, [x19]
0x06A1DA68: 810240f9  ldr x1, [x20]
0x06A1DA6C: 095d4279  ldrh w9, [x8, #0x12e]
0x06A1DA70: 290100b4  cbz x9, #0x6a1da94
0x06A1DA74: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A1DA78: 4a210091  add x10, x10, #8
0x06A1DA7C: 4b815ff8  ldur x11, [x10, #-8]
0x06A1DA80: 7f0101eb  cmp x11, x1
0x06A1DA84: 40010054  b.eq #0x6a1daac
0x06A1DA88: 290500f1  subs x9, x9, #1
0x06A1DA8C: 4a410091  add x10, x10, #0x10
0x06A1DA90: 61ffff54  b.ne #0x6a1da7c
0x06A1DA94: e2008052  movz w2, #0x7
0x06A1DA98: e00313aa  mov x0, x19
0x06A1DA9C: 1de41c97  bl #0x3156b10
0x06A1DAA0: 07000014  b #0x6a1dabc
0x06A1DAA4: e0031f2a  mov w0, wzr
0x06A1DAA8: 0c000014  b #0x6a1dad8
0x06A1DAAC: 490140b9  ldr w9, [x10]
0x06A1DAB0: 291d0011  add w9, w9, #7
0x06A1DAB4: 08d1298b  add x8, x8, w9, sxtw #4
0x06A1DAB8: 00e10491  add x0, x8, #0x138
0x06A1DABC: 080440a9  ldp x8, x1, [x0]
0x06A1DAC0: e00313aa  mov x0, x19
0x06A1DAC4: 00013fd6  blr x8
0x06A1DAC8: e00000b4  cbz x0, #0x6a1dae4
0x06A1DACC: 081440b9  ldr w8, [x0, #0x14]
0x06A1DAD0: 1f110071  cmp w8, #4
0x06A1DAD4: e0179f1a  cset w0, eq
0x06A1DAD8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A1DADC: fe0742f8  ldr x30, [sp], #0x20
0x06A1DAE0: c0035fd6  ret
0x06A1DAE4: 728c1d97  bl #0x3180cac

; RVA 0x6A1DAE8 | public static bool IsSecondaryProducerItem(IMergeItem mergeItem) { }
; bytes=400 sha256=f7ec6e5f215be416743ba6aa40b26da2fa07d7e09c9f4878040e819777cf7a5b status=arm64_complete_bound indexed_start=True
0x06A1DAE8: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A1DAEC: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A1DAF0: 749800b0  adrp x20, #0x7d2a000
0x06A1DAF4: 88c64e39  ldrb w8, [x20, #0x3b1]
0x06A1DAF8: f30300aa  mov x19, x0
0x06A1DAFC: 28010037  tbnz w8, #0, #0x6a1db20
0x06A1DB00: e06200f0  adrp x0, #0x767c000
0x06A1DB04: 002441f9  ldr x0, [x0, #0x248]
0x06A1DB08: c48b1d97  bl #0x3180a18
0x06A1DB0C: 006300b0  adrp x0, #0x767e000
0x06A1DB10: 00a442f9  ldr x0, [x0, #0x548]
0x06A1DB14: c18b1d97  bl #0x3180a18
0x06A1DB18: 28008052  movz w8, #0x1
0x06A1DB1C: 88c60e39  strb w8, [x20, #0x3b1]
0x06A1DB20: b30a00b4  cbz x19, #0x6a1dc74
0x06A1DB24: 156300b0  adrp x21, #0x767e000
0x06A1DB28: 680240f9  ldr x8, [x19]
0x06A1DB2C: b5a642f9  ldr x21, [x21, #0x548]
0x06A1DB30: 095d4279  ldrh w9, [x8, #0x12e]
0x06A1DB34: a10240f9  ldr x1, [x21]
0x06A1DB38: 290100b4  cbz x9, #0x6a1db5c
0x06A1DB3C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A1DB40: 4a210091  add x10, x10, #8
0x06A1DB44: 4b815ff8  ldur x11, [x10, #-8]
0x06A1DB48: 7f0101eb  cmp x11, x1
0x06A1DB4C: 00010054  b.eq #0x6a1db6c
0x06A1DB50: 290500f1  subs x9, x9, #1
0x06A1DB54: 4a410091  add x10, x10, #0x10
0x06A1DB58: 61ffff54  b.ne #0x6a1db44
0x06A1DB5C: 62038052  movz w2, #0x1b
0x06A1DB60: e00313aa  mov x0, x19
0x06A1DB64: ebe31c97  bl #0x3156b10
0x06A1DB68: 05000014  b #0x6a1db7c
0x06A1DB6C: 490140b9  ldr w9, [x10]
0x06A1DB70: 296d0011  add w9, w9, #0x1b
0x06A1DB74: 08d1298b  add x8, x8, w9, sxtw #4
0x06A1DB78: 00e10491  add x0, x8, #0x138
0x06A1DB7C: 080440a9  ldp x8, x1, [x0]
0x06A1DB80: e00313aa  mov x0, x19
0x06A1DB84: 00013fd6  blr x8
0x06A1DB88: 600700b4  cbz x0, #0x6a1dc74
0x06A1DB8C: ea6200f0  adrp x10, #0x767c000
0x06A1DB90: 080040f9  ldr x8, [x0]
0x06A1DB94: 4a2541f9  ldr x10, [x10, #0x248]
0x06A1DB98: f40300aa  mov x20, x0
0x06A1DB9C: 095d4279  ldrh w9, [x8, #0x12e]
0x06A1DBA0: 410140f9  ldr x1, [x10]
0x06A1DBA4: 290100b4  cbz x9, #0x6a1dbc8
0x06A1DBA8: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A1DBAC: 4a210091  add x10, x10, #8
0x06A1DBB0: 4b815ff8  ldur x11, [x10, #-8]
0x06A1DBB4: 7f0101eb  cmp x11, x1
0x06A1DBB8: 00010054  b.eq #0x6a1dbd8
0x06A1DBBC: 290500f1  subs x9, x9, #1
0x06A1DBC0: 4a410091  add x10, x10, #0x10
0x06A1DBC4: 61ffff54  b.ne #0x6a1dbb0
0x06A1DBC8: e2018052  movz w2, #0xf
0x06A1DBCC: e00314aa  mov x0, x20
0x06A1DBD0: d0e31c97  bl #0x3156b10
0x06A1DBD4: 05000014  b #0x6a1dbe8
0x06A1DBD8: 490140b9  ldr w9, [x10]
0x06A1DBDC: 293d0011  add w9, w9, #0xf
0x06A1DBE0: 08d1298b  add x8, x8, w9, sxtw #4
0x06A1DBE4: 00e10491  add x0, x8, #0x138
0x06A1DBE8: 080440a9  ldp x8, x1, [x0]
0x06A1DBEC: e00314aa  mov x0, x20
0x06A1DBF0: 00013fd6  blr x8
0x06A1DBF4: 1f200071  cmp w0, #8
0x06A1DBF8: 21020054  b.ne #0x6a1dc3c
0x06A1DBFC: 680240f9  ldr x8, [x19]
0x06A1DC00: a10240f9  ldr x1, [x21]
0x06A1DC04: 095d4279  ldrh w9, [x8, #0x12e]
0x06A1DC08: 290100b4  cbz x9, #0x6a1dc2c
0x06A1DC0C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A1DC10: 4a210091  add x10, x10, #8
0x06A1DC14: 4b815ff8  ldur x11, [x10, #-8]
0x06A1DC18: 7f0101eb  cmp x11, x1
0x06A1DC1C: 40010054  b.eq #0x6a1dc44
0x06A1DC20: 290500f1  subs x9, x9, #1
0x06A1DC24: 4a410091  add x10, x10, #0x10
0x06A1DC28: 61ffff54  b.ne #0x6a1dc14
0x06A1DC2C: 42038052  movz w2, #0x1a
0x06A1DC30: e00313aa  mov x0, x19
0x06A1DC34: b7e31c97  bl #0x3156b10
0x06A1DC38: 07000014  b #0x6a1dc54
0x06A1DC3C: e0031f2a  mov w0, wzr
0x06A1DC40: 0a000014  b #0x6a1dc68
0x06A1DC44: 490140b9  ldr w9, [x10]
0x06A1DC48: 29690011  add w9, w9, #0x1a
0x06A1DC4C: 08d1298b  add x8, x8, w9, sxtw #4
0x06A1DC50: 00e10491  add x0, x8, #0x138
0x06A1DC54: 080440a9  ldp x8, x1, [x0]
0x06A1DC58: e00313aa  mov x0, x19
0x06A1DC5C: 00013fd6  blr x8
0x06A1DC60: 1f0000f1  cmp x0, #0
0x06A1DC64: e0079f1a  cset w0, ne
0x06A1DC68: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A1DC6C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A1DC70: c0035fd6  ret
0x06A1DC74: 0e8c1d97  bl #0x3180cac

