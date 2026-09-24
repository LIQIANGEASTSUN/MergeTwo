; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 33593 Merger.MergeBoardSellItemCapability.Systems.SellItemSystem
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A5FA08 | public void Tick(TickContext context) { }
; bytes=1064 sha256=48b705ccec10b65e1d9e183261578dbc9225899bc5475c6c61db15ab2c9625d8 status=arm64_complete_bound indexed_start=True
0x06A5FA08: ff0305d1  sub sp, sp, #0x140
0x06A5FA0C: fd8300f9  str x29, [sp, #0x100]
0x06A5FA10: fe5f11a9  stp x30, x23, [sp, #0x110]
0x06A5FA14: f65712a9  stp x22, x21, [sp, #0x120]
0x06A5FA18: f44f13a9  stp x20, x19, [sp, #0x130]
0x06A5FA1C: 569600f0  adrp x22, #0x7d2a000
0x06A5FA20: 956600b0  adrp x21, #0x7730000
0x06A5FA24: c8765939  ldrb w8, [x22, #0x65d]
0x06A5FA28: b55a43f9  ldr x21, [x21, #0x6b0]
0x06A5FA2C: f30301aa  mov x19, x1
0x06A5FA30: f40300aa  mov x20, x0
0x06A5FA34: a8050037  tbnz w8, #0, #0x6a5fae8
0x06A5FA38: 80660090  adrp x0, #0x772f000
0x06A5FA3C: 002447f9  ldr x0, [x0, #0xe48]
0x06A5FA40: f6831c97  bl #0x3180a18
0x06A5FA44: 806600b0  adrp x0, #0x7730000
0x06A5FA48: 005c43f9  ldr x0, [x0, #0x6b8]
0x06A5FA4C: f3831c97  bl #0x3180a18
0x06A5FA50: 80660090  adrp x0, #0x772f000
0x06A5FA54: 003447f9  ldr x0, [x0, #0xe68]
0x06A5FA58: f0831c97  bl #0x3180a18
0x06A5FA5C: 806600b0  adrp x0, #0x7730000
0x06A5FA60: 006043f9  ldr x0, [x0, #0x6c0]
0x06A5FA64: ed831c97  bl #0x3180a18
0x06A5FA68: e06000f0  adrp x0, #0x767e000
0x06A5FA6C: 00a442f9  ldr x0, [x0, #0x548]
0x06A5FA70: ea831c97  bl #0x3180a18
0x06A5FA74: c06000f0  adrp x0, #0x767a000
0x06A5FA78: 004c42f9  ldr x0, [x0, #0x498]
0x06A5FA7C: e7831c97  bl #0x3180a18
0x06A5FA80: 806600b0  adrp x0, #0x7730000
0x06A5FA84: 006443f9  ldr x0, [x0, #0x6c8]
0x06A5FA88: e4831c97  bl #0x3180a18
0x06A5FA8C: 806600b0  adrp x0, #0x7730000
0x06A5FA90: 006843f9  ldr x0, [x0, #0x6d0]
0x06A5FA94: e1831c97  bl #0x3180a18
0x06A5FA98: 806600b0  adrp x0, #0x7730000
0x06A5FA9C: 006c43f9  ldr x0, [x0, #0x6d8]
0x06A5FAA0: de831c97  bl #0x3180a18
0x06A5FAA4: 806600b0  adrp x0, #0x7730000
0x06A5FAA8: 007043f9  ldr x0, [x0, #0x6e0]
0x06A5FAAC: db831c97  bl #0x3180a18
0x06A5FAB0: 806600b0  adrp x0, #0x7730000
0x06A5FAB4: 007443f9  ldr x0, [x0, #0x6e8]
0x06A5FAB8: d8831c97  bl #0x3180a18
0x06A5FABC: 806600b0  adrp x0, #0x7730000
0x06A5FAC0: 007843f9  ldr x0, [x0, #0x6f0]
0x06A5FAC4: d5831c97  bl #0x3180a18
0x06A5FAC8: 806600b0  adrp x0, #0x7730000
0x06A5FACC: 007c43f9  ldr x0, [x0, #0x6f8]
0x06A5FAD0: d2831c97  bl #0x3180a18
0x06A5FAD4: 806600b0  adrp x0, #0x7730000
0x06A5FAD8: 005843f9  ldr x0, [x0, #0x6b0]
0x06A5FADC: cf831c97  bl #0x3180a18
0x06A5FAE0: 28008052  movz w8, #0x1
0x06A5FAE4: c8761939  strb w8, [x22, #0x65d]
0x06A5FAE8: a00240f9  ldr x0, [x21]
0x06A5FAEC: 00e4006f  movi v0.2d, #0000000000000000
0x06A5FAF0: e00306ad  stp q0, q0, [sp, #0xc0]
0x06A5FAF4: e00305ad  stp q0, q0, [sp, #0xa0]
0x06A5FAF8: e00304ad  stp q0, q0, [sp, #0x80]
0x06A5FAFC: e00303ad  stp q0, q0, [sp, #0x60]
0x06A5FB00: 68841c97  bl #0x3180ca0
0x06A5FB04: e1031faa  mov x1, xzr
0x06A5FB08: f50300aa  mov x21, x0
0x06A5FB0C: bceab197  bl #0x56da5fc
0x06A5FB10: f51800b4  cbz x21, #0x6a5fe2c
0x06A5FB14: e00315aa  mov x0, x21
0x06A5FB18: 148c01f8  str x20, [x0, #0x18]!
0x06A5FB1C: e10314aa  mov x1, x20
0x06A5FB20: a9831c97  bl #0x31809c4
0x06A5FB24: 600640f9  ldr x0, [x19, #8]
0x06A5FB28: 201800b4  cbz x0, #0x6a5fe2c
0x06A5FB2C: 886600b0  adrp x8, #0x7730000
0x06A5FB30: 087943f9  ldr x8, [x8, #0x6f0]
0x06A5FB34: a1420091  add x1, x21, #0x10
0x06A5FB38: 020140f9  ldr x2, [x8]
0x06A5FB3C: 39954d97  bl #0x3dc5020
0x06A5FB40: a0160036  tbz w0, #0, #0x6a5fe14
0x06A5FB44: 886600b0  adrp x8, #0x7730000
0x06A5FB48: 600640ad  ldp q0, q1, [x19]
0x06A5FB4C: 085d43f9  ldr x8, [x8, #0x6b8]
0x06A5FB50: e00701ad  stp q0, q1, [sp, #0x20]
0x06A5FB54: 000140f9  ldr x0, [x8]
0x06A5FB58: 81e94697  bl #0x3c1a15c
0x06A5FB5C: 88660090  adrp x8, #0x772f000
0x06A5FB60: 083547f9  ldr x8, [x8, #0xe68]
0x06A5FB64: f60300aa  mov x22, x0
0x06A5FB68: 080140f9  ldr x8, [x8]
0x06A5FB6C: e00308aa  mov x0, x8
0x06A5FB70: 4c841c97  bl #0x3180ca0
0x06A5FB74: 88660090  adrp x8, #0x772f000
0x06A5FB78: 082547f9  ldr x8, [x8, #0xe48]
0x06A5FB7C: e1031faa  mov x1, xzr
0x06A5FB80: e3031faa  mov x3, xzr
0x06A5FB84: f70300aa  mov x23, x0
0x06A5FB88: 020140f9  ldr x2, [x8]
0x06A5FB8C: 5fd8d297  bl #0x5f15d08
0x06A5FB90: 886600b0  adrp x8, #0x7730000
0x06A5FB94: 087143f9  ldr x8, [x8, #0x6e0]
0x06A5FB98: e00741ad  ldp q0, q1, [sp, #0x20]
0x06A5FB9C: e0830391  add x0, sp, #0xe0
0x06A5FBA0: e10316aa  mov x1, x22
0x06A5FBA4: 030140f9  ldr x3, [x8]
0x06A5FBA8: e8030191  add x8, sp, #0x40
0x06A5FBAC: e20317aa  mov x2, x23
0x06A5FBB0: e00707ad  stp q0, q1, [sp, #0xe0]
0x06A5FBB4: dc154c97  bl #0x3d65324
0x06A5FBB8: 886600b0  adrp x8, #0x7730000
0x06A5FBBC: e00742ad  ldp q0, q1, [sp, #0x40]
0x06A5FBC0: 086143f9  ldr x8, [x8, #0x6c0]
0x06A5FBC4: e00703ad  stp q0, q1, [sp, #0x60]
0x06A5FBC8: 000140f9  ldr x0, [x8]
0x06A5FBCC: 35841c97  bl #0x3180ca0
0x06A5FBD0: 886600b0  adrp x8, #0x7730000
0x06A5FBD4: 087d43f9  ldr x8, [x8, #0x6f8]
0x06A5FBD8: e10315aa  mov x1, x21
0x06A5FBDC: e3031faa  mov x3, xzr
0x06A5FBE0: f60300aa  mov x22, x0
0x06A5FBE4: 020140f9  ldr x2, [x8]
0x06A5FBE8: cec19f97  bl #0x5250320
0x06A5FBEC: 886600b0  adrp x8, #0x7730000
0x06A5FBF0: 086d43f9  ldr x8, [x8, #0x6d8]
0x06A5FBF4: e0830191  add x0, sp, #0x60
0x06A5FBF8: e10316aa  mov x1, x22
0x06A5FBFC: 020140f9  ldr x2, [x8]
0x06A5FC00: e8830391  add x8, sp, #0xe0
0x06A5FC04: d9ad6497  bl #0x438b368
0x06A5FC08: 886600b0  adrp x8, #0x7730000
0x06A5FC0C: e00747ad  ldp q0, q1, [sp, #0xe0]
0x06A5FC10: 086943f9  ldr x8, [x8, #0x6d0]
0x06A5FC14: e0030391  add x0, sp, #0xc0
0x06A5FC18: e1030291  add x1, sp, #0x80
0x06A5FC1C: e00706ad  stp q0, q1, [sp, #0xc0]
0x06A5FC20: 020140f9  ldr x2, [x8]
0x06A5FC24: 3dae6497  bl #0x438b518
0x06A5FC28: 600f0036  tbz w0, #0, #0x6a5fe14
0x06A5FC2C: 940e40f9  ldr x20, [x20, #0x18]
0x06A5FC30: f40f00b4  cbz x20, #0x6a5fe2c
0x06A5FC34: ca6000f0  adrp x10, #0x767a000
0x06A5FC38: 880240f9  ldr x8, [x20]
0x06A5FC3C: f54740f9  ldr x21, [sp, #0x88]
0x06A5FC40: 4a4d42f9  ldr x10, [x10, #0x498]
0x06A5FC44: 095d4279  ldrh w9, [x8, #0x12e]
0x06A5FC48: 410140f9  ldr x1, [x10]
0x06A5FC4C: 290100b4  cbz x9, #0x6a5fc70
0x06A5FC50: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A5FC54: 4a210091  add x10, x10, #8
0x06A5FC58: 4b815ff8  ldur x11, [x10, #-8]
0x06A5FC5C: 7f0101eb  cmp x11, x1
0x06A5FC60: 00010054  b.eq #0x6a5fc80
0x06A5FC64: 290500f1  subs x9, x9, #1
0x06A5FC68: 4a410091  add x10, x10, #0x10
0x06A5FC6C: 61ffff54  b.ne #0x6a5fc58
0x06A5FC70: 22018052  movz w2, #0x9
0x06A5FC74: e00314aa  mov x0, x20
0x06A5FC78: a6db1b97  bl #0x3156b10
0x06A5FC7C: 05000014  b #0x6a5fc90
0x06A5FC80: 490140b9  ldr w9, [x10]
0x06A5FC84: 29250011  add w9, w9, #9
0x06A5FC88: 08d1298b  add x8, x8, w9, sxtw #4
0x06A5FC8C: 00e10491  add x0, x8, #0x138
0x06A5FC90: 080840a9  ldp x8, x2, [x0]
0x06A5FC94: e00314aa  mov x0, x20
0x06A5FC98: e10315aa  mov x1, x21
0x06A5FC9C: 00013fd6  blr x8
0x06A5FCA0: 600640ad  ldp q0, q1, [x19]
0x06A5FCA4: e14340f9  ldr x1, [sp, #0x80]
0x06A5FCA8: f40300aa  mov x20, x0
0x06A5FCAC: e0030091  mov x0, sp
0x06A5FCB0: e2031faa  mov x2, xzr
0x06A5FCB4: e00700ad  stp q0, q1, [sp]
0x06A5FCB8: ade40094  bl #0x6a98f6c
0x06A5FCBC: 886600b0  adrp x8, #0x7730000
0x06A5FCC0: 730a40f9  ldr x19, [x19, #0x10]
0x06A5FCC4: 086543f9  ldr x8, [x8, #0x6c8]
0x06A5FCC8: 000140f9  ldr x0, [x8]
0x06A5FCCC: f5831c97  bl #0x3180ca0
0x06A5FCD0: e1031faa  mov x1, xzr
0x06A5FCD4: f50300aa  mov x21, x0
0x06A5FCD8: 49eab197  bl #0x56da5fc
0x06A5FCDC: 950a00b4  cbz x21, #0x6a5fe2c
0x06A5FCE0: e14340f9  ldr x1, [sp, #0x80]
0x06A5FCE4: e00315aa  mov x0, x21
0x06A5FCE8: 010c01f8  str x1, [x0, #0x10]!
0x06A5FCEC: 36831c97  bl #0x31809c4
0x06A5FCF0: e14740f9  ldr x1, [sp, #0x88]
0x06A5FCF4: e00315aa  mov x0, x21
0x06A5FCF8: 018c01f8  str x1, [x0, #0x18]!
0x06A5FCFC: 32831c97  bl #0x31809c4
0x06A5FD00: e14b40f9  ldr x1, [sp, #0x90]
0x06A5FD04: f60315aa  mov x22, x21
0x06A5FD08: c10e02f8  str x1, [x22, #0x20]!
0x06A5FD0C: e00316aa  mov x0, x22
0x06A5FD10: 2d831c97  bl #0x31809c4
0x06A5FD14: e8bb40b9  ldr w8, [sp, #0xb8]
0x06A5FD18: c80a00b9  str w8, [x22, #8]
0x06A5FD1C: 940800b4  cbz x20, #0x6a5fe2c
0x06A5FD20: f66000f0  adrp x22, #0x767e000
0x06A5FD24: 880240f9  ldr x8, [x20]
0x06A5FD28: d6a642f9  ldr x22, [x22, #0x548]
0x06A5FD2C: 095d4279  ldrh w9, [x8, #0x12e]
0x06A5FD30: c10240f9  ldr x1, [x22]
0x06A5FD34: 290100b4  cbz x9, #0x6a5fd58
0x06A5FD38: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A5FD3C: 4a210091  add x10, x10, #8
0x06A5FD40: 4b815ff8  ldur x11, [x10, #-8]
0x06A5FD44: 7f0101eb  cmp x11, x1
0x06A5FD48: 00010054  b.eq #0x6a5fd68
0x06A5FD4C: 290500f1  subs x9, x9, #1
0x06A5FD50: 4a410091  add x10, x10, #0x10
0x06A5FD54: 61ffff54  b.ne #0x6a5fd40
0x06A5FD58: 62008052  movz w2, #0x3
0x06A5FD5C: e00314aa  mov x0, x20
0x06A5FD60: 6cdb1b97  bl #0x3156b10
0x06A5FD64: 05000014  b #0x6a5fd78
0x06A5FD68: 490140b9  ldr w9, [x10]
0x06A5FD6C: 290d0011  add w9, w9, #3
0x06A5FD70: 08d1298b  add x8, x8, w9, sxtw #4
0x06A5FD74: 00e10491  add x0, x8, #0x138
0x06A5FD78: 080440a9  ldp x8, x1, [x0]
0x06A5FD7C: e00314aa  mov x0, x20
0x06A5FD80: 00013fd6  blr x8
0x06A5FD84: 400500b4  cbz x0, #0x6a5fe2c
0x06A5FD88: 081440b9  ldr w8, [x0, #0x14]
0x06A5FD8C: a82e00b9  str w8, [x21, #0x2c]
0x06A5FD90: 880240f9  ldr x8, [x20]
0x06A5FD94: c10240f9  ldr x1, [x22]
0x06A5FD98: 095d4279  ldrh w9, [x8, #0x12e]
0x06A5FD9C: 290100b4  cbz x9, #0x6a5fdc0
0x06A5FDA0: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A5FDA4: 4a210091  add x10, x10, #8
0x06A5FDA8: 4b815ff8  ldur x11, [x10, #-8]
0x06A5FDAC: 7f0101eb  cmp x11, x1
0x06A5FDB0: 00010054  b.eq #0x6a5fdd0
0x06A5FDB4: 290500f1  subs x9, x9, #1
0x06A5FDB8: 4a410091  add x10, x10, #0x10
0x06A5FDBC: 61ffff54  b.ne #0x6a5fda8
0x06A5FDC0: 62008052  movz w2, #0x3
0x06A5FDC4: e00314aa  mov x0, x20
0x06A5FDC8: 52db1b97  bl #0x3156b10
0x06A5FDCC: 05000014  b #0x6a5fde0
0x06A5FDD0: 490140b9  ldr w9, [x10]
0x06A5FDD4: 290d0011  add w9, w9, #3
0x06A5FDD8: 08d1298b  add x8, x8, w9, sxtw #4
0x06A5FDDC: 00e10491  add x0, x8, #0x138
0x06A5FDE0: 080440a9  ldp x8, x1, [x0]
0x06A5FDE4: e00314aa  mov x0, x20
0x06A5FDE8: 00013fd6  blr x8
0x06A5FDEC: 000200b4  cbz x0, #0x6a5fe2c
0x06A5FDF0: 081840b9  ldr w8, [x0, #0x18]
0x06A5FDF4: a83200b9  str w8, [x21, #0x30]
0x06A5FDF8: b30100b4  cbz x19, #0x6a5fe2c
0x06A5FDFC: 886600b0  adrp x8, #0x7730000
0x06A5FE00: 087543f9  ldr x8, [x8, #0x6e8]
0x06A5FE04: e00313aa  mov x0, x19
0x06A5FE08: e10315aa  mov x1, x21
0x06A5FE0C: 020140f9  ldr x2, [x8]
0x06A5FE10: 758d4d97  bl #0x3dc33e4
0x06A5FE14: f44f53a9  ldp x20, x19, [sp, #0x130]
0x06A5FE18: f65752a9  ldp x22, x21, [sp, #0x120]
0x06A5FE1C: fe5f51a9  ldp x30, x23, [sp, #0x110]
0x06A5FE20: fd8340f9  ldr x29, [sp, #0x100]
0x06A5FE24: ff030591  add sp, sp, #0x140
0x06A5FE28: c0035fd6  ret
0x06A5FE2C: a0831c97  bl #0x3180cac

; RVA 0x6A5FE40 | public void .ctor() { }
; bytes=8 sha256=97268784947b0e592b9c3436c897d42c3e697198e60073ea2d5c0c310744f044 status=arm64_complete_bound indexed_start=True
0x06A5FE40: e1031faa  mov x1, xzr
0x06A5FE44: eee9b117  b #0x56da5fc

