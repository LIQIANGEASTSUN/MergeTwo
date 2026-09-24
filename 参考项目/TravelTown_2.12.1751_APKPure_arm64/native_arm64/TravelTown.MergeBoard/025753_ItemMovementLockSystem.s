; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25753 Merger.MergeBoard.Systems.ItemMovementLockSystem
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A6D98C | public void Tick(TickContext context) { }
; bytes=1000 sha256=00ad97b23c5da7b7ac520774739fa59687cc9c8de867c1602f78f0b6e2a216d9 status=arm64_complete_bound indexed_start=True
0x06A6D98C: ffc305d1  sub sp, sp, #0x170
0x06A6D990: fd7b11a9  stp x29, x30, [sp, #0x110]
0x06A6D994: fc6f12a9  stp x28, x27, [sp, #0x120]
0x06A6D998: fa6713a9  stp x26, x25, [sp, #0x130]
0x06A6D99C: f85f14a9  stp x24, x23, [sp, #0x140]
0x06A6D9A0: f65715a9  stp x22, x21, [sp, #0x150]
0x06A6D9A4: f44f16a9  stp x20, x19, [sp, #0x160]
0x06A6D9A8: f59500b0  adrp x21, #0x7d2a000
0x06A6D9AC: 34660090  adrp x20, #0x7731000
0x06A6D9B0: a8625b39  ldrb w8, [x21, #0x6d8]
0x06A6D9B4: 944240f9  ldr x20, [x20, #0x80]
0x06A6D9B8: f30301aa  mov x19, x1
0x06A6D9BC: f70300aa  mov x23, x0
0x06A6D9C0: a8050037  tbnz w8, #0, #0x6a6da74
0x06A6D9C4: 20660090  adrp x0, #0x7731000
0x06A6D9C8: 004440f9  ldr x0, [x0, #0x88]
0x06A6D9CC: 134c1c97  bl #0x3180a18
0x06A6D9D0: 006600d0  adrp x0, #0x772f000
0x06A6D9D4: 002847f9  ldr x0, [x0, #0xe50]
0x06A6D9D8: 104c1c97  bl #0x3180a18
0x06A6D9DC: 20660090  adrp x0, #0x7731000
0x06A6D9E0: 004840f9  ldr x0, [x0, #0x90]
0x06A6D9E4: 0d4c1c97  bl #0x3180a18
0x06A6D9E8: 006600d0  adrp x0, #0x772f000
0x06A6D9EC: 003447f9  ldr x0, [x0, #0xe68]
0x06A6D9F0: 0a4c1c97  bl #0x3180a18
0x06A6D9F4: 20660090  adrp x0, #0x7731000
0x06A6D9F8: 004c40f9  ldr x0, [x0, #0x98]
0x06A6D9FC: 074c1c97  bl #0x3180a18
0x06A6DA00: 20660090  adrp x0, #0x7731000
0x06A6DA04: 005040f9  ldr x0, [x0, #0xa0]
0x06A6DA08: 044c1c97  bl #0x3180a18
0x06A6DA0C: 20660090  adrp x0, #0x7731000
0x06A6DA10: 005440f9  ldr x0, [x0, #0xa8]
0x06A6DA14: 014c1c97  bl #0x3180a18
0x06A6DA18: 20660090  adrp x0, #0x7731000
0x06A6DA1C: 005840f9  ldr x0, [x0, #0xb0]
0x06A6DA20: fe4b1c97  bl #0x3180a18
0x06A6DA24: 006600d0  adrp x0, #0x772f000
0x06A6DA28: 005047f9  ldr x0, [x0, #0xea0]
0x06A6DA2C: fb4b1c97  bl #0x3180a18
0x06A6DA30: 20660090  adrp x0, #0x7731000
0x06A6DA34: 005c40f9  ldr x0, [x0, #0xb8]
0x06A6DA38: f84b1c97  bl #0x3180a18
0x06A6DA3C: 20660090  adrp x0, #0x7731000
0x06A6DA40: 006040f9  ldr x0, [x0, #0xc0]
0x06A6DA44: f54b1c97  bl #0x3180a18
0x06A6DA48: 20660090  adrp x0, #0x7731000
0x06A6DA4C: 006440f9  ldr x0, [x0, #0xc8]
0x06A6DA50: f24b1c97  bl #0x3180a18
0x06A6DA54: 20660090  adrp x0, #0x7731000
0x06A6DA58: 006840f9  ldr x0, [x0, #0xd0]
0x06A6DA5C: ef4b1c97  bl #0x3180a18
0x06A6DA60: 20660090  adrp x0, #0x7731000
0x06A6DA64: 004040f9  ldr x0, [x0, #0x80]
0x06A6DA68: ec4b1c97  bl #0x3180a18
0x06A6DA6C: 28008052  movz w8, #0x1
0x06A6DA70: a8621b39  strb w8, [x21, #0x6d8]
0x06A6DA74: 800240f9  ldr x0, [x20]
0x06A6DA78: 00e4006f  movi v0.2d, #0000000000000000
0x06A6DA7C: e08306ad  stp q0, q0, [sp, #0xd0]
0x06A6DA80: 884c1c97  bl #0x3180ca0
0x06A6DA84: e1031faa  mov x1, xzr
0x06A6DA88: f60300aa  mov x22, x0
0x06A6DA8C: dcb2b197  bl #0x56da5fc
0x06A6DA90: 161700b4  cbz x22, #0x6a6dd70
0x06A6DA94: 600640f9  ldr x0, [x19, #8]
0x06A6DA98: f70700f9  str x23, [sp, #8]
0x06A6DA9C: a01600b4  cbz x0, #0x6a6dd70
0x06A6DAA0: 28660090  adrp x8, #0x7731000
0x06A6DAA4: 085d40f9  ldr x8, [x8, #0xb8]
0x06A6DAA8: d5420091  add x21, x22, #0x10
0x06A6DAAC: e10315aa  mov x1, x21
0x06A6DAB0: 020140f9  ldr x2, [x8]
0x06A6DAB4: 5b5d4d97  bl #0x3dc5020
0x06A6DAB8: 20120036  tbz w0, #0, #0x6a6dcfc
0x06A6DABC: 196600d0  adrp x25, #0x772f000
0x06A6DAC0: 600640ad  ldp q0, q1, [x19]
0x06A6DAC4: 392b47f9  ldr x25, [x25, #0xe50]
0x06A6DAC8: e08705ad  stp q0, q1, [sp, #0xb0]
0x06A6DACC: 200340f9  ldr x0, [x25]
0x06A6DAD0: 67b04697  bl #0x3c19c6c
0x06A6DAD4: 1c6600d0  adrp x28, #0x772f000
0x06A6DAD8: 9c3747f9  ldr x28, [x28, #0xe68]
0x06A6DADC: f70300aa  mov x23, x0
0x06A6DAE0: 880340f9  ldr x8, [x28]
0x06A6DAE4: e00308aa  mov x0, x8
0x06A6DAE8: 6e4c1c97  bl #0x3180ca0
0x06A6DAEC: 3a660090  adrp x26, #0x7731000
0x06A6DAF0: 5a4740f9  ldr x26, [x26, #0x88]
0x06A6DAF4: e1031faa  mov x1, xzr
0x06A6DAF8: e3031faa  mov x3, xzr
0x06A6DAFC: f80300aa  mov x24, x0
0x06A6DB00: 420340f9  ldr x2, [x26]
0x06A6DB04: 81a0d297  bl #0x5f15d08
0x06A6DB08: 086600d0  adrp x8, #0x772f000
0x06A6DB0C: 085147f9  ldr x8, [x8, #0xea0]
0x06A6DB10: e08745ad  ldp q0, q1, [sp, #0xb0]
0x06A6DB14: e0c30391  add x0, sp, #0xf0
0x06A6DB18: e10317aa  mov x1, x23
0x06A6DB1C: 030140f9  ldr x3, [x8]
0x06A6DB20: e8430391  add x8, sp, #0xd0
0x06A6DB24: e20318aa  mov x2, x24
0x06A6DB28: e08707ad  stp q0, q1, [sp, #0xf0]
0x06A6DB2C: cedb4b97  bl #0x3d64a64
0x06A6DB30: 3b660090  adrp x27, #0x7731000
0x06A6DB34: 7b4f40f9  ldr x27, [x27, #0x98]
0x06A6DB38: 600340f9  ldr x0, [x27]
0x06A6DB3C: 594c1c97  bl #0x3180ca0
0x06A6DB40: 28660090  adrp x8, #0x7731000
0x06A6DB44: 086140f9  ldr x8, [x8, #0xc0]
0x06A6DB48: e10316aa  mov x1, x22
0x06A6DB4C: e3031faa  mov x3, xzr
0x06A6DB50: f70300aa  mov x23, x0
0x06A6DB54: 020140f9  ldr x2, [x8]
0x06A6DB58: b0809f97  bl #0x524de18
0x06A6DB5C: 3d660090  adrp x29, #0x7731000
0x06A6DB60: bd5b40f9  ldr x29, [x29, #0xb0]
0x06A6DB64: e8c30391  add x8, sp, #0xf0
0x06A6DB68: e0430391  add x0, sp, #0xd0
0x06A6DB6C: e10317aa  mov x1, x23
0x06A6DB70: a20340f9  ldr x2, [x29]
0x06A6DB74: ff5f6497  bl #0x4385b70
0x06A6DB78: 34660090  adrp x20, #0x7731000
0x06A6DB7C: e08747ad  ldp q0, q1, [sp, #0xf0]
0x06A6DB80: 945640f9  ldr x20, [x20, #0xa8]
0x06A6DB84: d7620091  add x23, x22, #0x18
0x06A6DB88: e0430391  add x0, sp, #0xd0
0x06A6DB8C: e10317aa  mov x1, x23
0x06A6DB90: 820240f9  ldr x2, [x20]
0x06A6DB94: e08706ad  stp q0, q1, [sp, #0xd0]
0x06A6DB98: 62606497  bl #0x4385d20
0x06A6DB9C: 000b0036  tbz w0, #0, #0x6a6dcfc
0x06A6DBA0: e00240f9  ldr x0, [x23]
0x06A6DBA4: e1031faa  mov x1, xzr
0x06A6DBA8: 43a90094  bl #0x6a980b4
0x06A6DBAC: a0010036  tbz w0, #0, #0x6a6dbe0
0x06A6DBB0: 610240ad  ldp q1, q0, [x19]
0x06A6DBB4: e18307ad  stp q1, q0, [sp, #0xf0]
0x06A6DBB8: a80240f9  ldr x8, [x21]
0x06A6DBBC: a80d00b4  cbz x8, #0x6a6dd70
0x06A6DBC0: e08747ad  ldp q0, q1, [sp, #0xf0]
0x06A6DBC4: e10240f9  ldr x1, [x23]
0x06A6DBC8: 021140b9  ldr w2, [x8, #0x10]
0x06A6DBCC: e0430291  add x0, sp, #0x90
0x06A6DBD0: e08704ad  stp q0, q1, [sp, #0x90]
0x06A6DBD4: e3031faa  mov x3, xzr
0x06A6DBD8: faac0094  bl #0x6a98fc0
0x06A6DBDC: 48000014  b #0x6a6dcfc
0x06A6DBE0: 610240ad  ldp q1, q0, [x19]
0x06A6DBE4: 200340f9  ldr x0, [x25]
0x06A6DBE8: e18302ad  stp q1, q0, [sp, #0x50]
0x06A6DBEC: 20b04697  bl #0x3c19c6c
0x06A6DBF0: 880340f9  ldr x8, [x28]
0x06A6DBF4: f80300aa  mov x24, x0
0x06A6DBF8: e00308aa  mov x0, x8
0x06A6DBFC: 294c1c97  bl #0x3180ca0
0x06A6DC00: 420340f9  ldr x2, [x26]
0x06A6DC04: e1031faa  mov x1, xzr
0x06A6DC08: e3031faa  mov x3, xzr
0x06A6DC0C: f90300aa  mov x25, x0
0x06A6DC10: 3ea0d297  bl #0x5f15d08
0x06A6DC14: 086600d0  adrp x8, #0x772f000
0x06A6DC18: e08742ad  ldp q0, q1, [sp, #0x50]
0x06A6DC1C: 085147f9  ldr x8, [x8, #0xea0]
0x06A6DC20: e0c30391  add x0, sp, #0xf0
0x06A6DC24: e10318aa  mov x1, x24
0x06A6DC28: e20319aa  mov x2, x25
0x06A6DC2C: 030140f9  ldr x3, [x8]
0x06A6DC30: e8c30191  add x8, sp, #0x70
0x06A6DC34: e08707ad  stp q0, q1, [sp, #0xf0]
0x06A6DC38: 8bdb4b97  bl #0x3d64a64
0x06A6DC3C: e08743ad  ldp q0, q1, [sp, #0x70]
0x06A6DC40: 600340f9  ldr x0, [x27]
0x06A6DC44: e08706ad  stp q0, q1, [sp, #0xd0]
0x06A6DC48: 164c1c97  bl #0x3180ca0
0x06A6DC4C: 28660090  adrp x8, #0x7731000
0x06A6DC50: 086540f9  ldr x8, [x8, #0xc8]
0x06A6DC54: e10316aa  mov x1, x22
0x06A6DC58: e3031faa  mov x3, xzr
0x06A6DC5C: f80300aa  mov x24, x0
0x06A6DC60: 020140f9  ldr x2, [x8]
0x06A6DC64: 6d809f97  bl #0x524de18
0x06A6DC68: a20340f9  ldr x2, [x29]
0x06A6DC6C: e8c30391  add x8, sp, #0xf0
0x06A6DC70: e0430391  add x0, sp, #0xd0
0x06A6DC74: e10318aa  mov x1, x24
0x06A6DC78: be5f6497  bl #0x4385b70
0x06A6DC7C: e08747ad  ldp q0, q1, [sp, #0xf0]
0x06A6DC80: 820240f9  ldr x2, [x20]
0x06A6DC84: d8a20091  add x24, x22, #0x28
0x06A6DC88: e0430391  add x0, sp, #0xd0
0x06A6DC8C: e10318aa  mov x1, x24
0x06A6DC90: e08706ad  stp q0, q1, [sp, #0xd0]
0x06A6DC94: 23606497  bl #0x4385d20
0x06A6DC98: 20030036  tbz w0, #0, #0x6a6dcfc
0x06A6DC9C: 000340f9  ldr x0, [x24]
0x06A6DCA0: e1031faa  mov x1, xzr
0x06A6DCA4: 04a90094  bl #0x6a980b4
0x06A6DCA8: a0020036  tbz w0, #0, #0x6a6dcfc
0x06A6DCAC: e80740f9  ldr x8, [sp, #8]
0x06A6DCB0: 140940f9  ldr x20, [x8, #0x10]
0x06A6DCB4: 28660090  adrp x8, #0x7731000
0x06A6DCB8: 085140f9  ldr x8, [x8, #0xa0]
0x06A6DCBC: 000140f9  ldr x0, [x8]
0x06A6DCC0: f84b1c97  bl #0x3180ca0
0x06A6DCC4: 28660090  adrp x8, #0x7731000
0x06A6DCC8: 086940f9  ldr x8, [x8, #0xd0]
0x06A6DCCC: e10316aa  mov x1, x22
0x06A6DCD0: e3031faa  mov x3, xzr
0x06A6DCD4: f90300aa  mov x25, x0
0x06A6DCD8: 020140f9  ldr x2, [x8]
0x06A6DCDC: b8a09f97  bl #0x5255fbc
0x06A6DCE0: 28660090  adrp x8, #0x7731000
0x06A6DCE4: 084940f9  ldr x8, [x8, #0x90]
0x06A6DCE8: e00314aa  mov x0, x20
0x06A6DCEC: e10319aa  mov x1, x25
0x06A6DCF0: 020140f9  ldr x2, [x8]
0x06A6DCF4: c7f54697  bl #0x3c2b410
0x06A6DCF8: 20010036  tbz w0, #0, #0x6a6dd1c
0x06A6DCFC: f44f56a9  ldp x20, x19, [sp, #0x160]
0x06A6DD00: f65755a9  ldp x22, x21, [sp, #0x150]
0x06A6DD04: f85f54a9  ldp x24, x23, [sp, #0x140]
0x06A6DD08: fa6753a9  ldp x26, x25, [sp, #0x130]
0x06A6DD0C: fc6f52a9  ldp x28, x27, [sp, #0x120]
0x06A6DD10: fd7b51a9  ldp x29, x30, [sp, #0x110]
0x06A6DD14: ffc30591  add sp, sp, #0x170
0x06A6DD18: c0035fd6  ret
0x06A6DD1C: 610240ad  ldp q1, q0, [x19]
0x06A6DD20: e18307ad  stp q1, q0, [sp, #0xf0]
0x06A6DD24: a80240f9  ldr x8, [x21]
0x06A6DD28: 480200b4  cbz x8, #0x6a6dd70
0x06A6DD2C: e10240f9  ldr x1, [x23]
0x06A6DD30: e08747ad  ldp q0, q1, [sp, #0xf0]
0x06A6DD34: 021140b9  ldr w2, [x8, #0x10]
0x06A6DD38: e0c30091  add x0, sp, #0x30
0x06A6DD3C: e3031faa  mov x3, xzr
0x06A6DD40: e08701ad  stp q0, q1, [sp, #0x30]
0x06A6DD44: 9fac0094  bl #0x6a98fc0
0x06A6DD48: 610240ad  ldp q1, q0, [x19]
0x06A6DD4C: e18303ad  stp q1, q0, [sp, #0x70]
0x06A6DD50: a80240f9  ldr x8, [x21]
0x06A6DD54: e80000b4  cbz x8, #0x6a6dd70
0x06A6DD58: 010340f9  ldr x1, [x24]
0x06A6DD5C: e08743ad  ldp q0, q1, [sp, #0x70]
0x06A6DD60: 021540b9  ldr w2, [x8, #0x14]
0x06A6DD64: e0430091  add x0, sp, #0x10
0x06A6DD68: e08700ad  stp q0, q1, [sp, #0x10]
0x06A6DD6C: 9affff17  b #0x6a6dbd4
0x06A6DD70: cf4b1c97  bl #0x3180cac

; RVA 0x6A6DD7C | public void .ctor() { }
; bytes=8 sha256=0a0f64ba55f23dadc80d433f91e3eeea1fb521648707b7a149516360d8eec28d status=arm64_complete_bound indexed_start=True
0x06A6DD7C: e1031faa  mov x1, xzr
0x06A6DD80: 1fb2b117  b #0x56da5fc

