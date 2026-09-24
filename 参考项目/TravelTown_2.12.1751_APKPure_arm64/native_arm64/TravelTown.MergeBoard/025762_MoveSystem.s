; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25762 Merger.MergeBoard.Systems.MoveSystem
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A71B54 | public void Tick(TickContext context) { }
; bytes=720 sha256=b78907f5a90080a6c8427a859f43e64165f528d9dcef6748c0433b7e0a9e6f0f status=arm64_complete_bound indexed_start=True
0x06A71B54: ff0303d1  sub sp, sp, #0xc0
0x06A71B58: fe5f09a9  stp x30, x23, [sp, #0x90]
0x06A71B5C: f6570aa9  stp x22, x21, [sp, #0xa0]
0x06A71B60: f44f0ba9  stp x20, x19, [sp, #0xb0]
0x06A71B64: d59500b0  adrp x21, #0x7d2a000
0x06A71B68: 14660090  adrp x20, #0x7731000
0x06A71B6C: a8a65b39  ldrb w8, [x21, #0x6e9]
0x06A71B70: 946641f9  ldr x20, [x20, #0x2c8]
0x06A71B74: f30301aa  mov x19, x1
0x06A71B78: a8050037  tbnz w8, #0, #0x6a71c2c
0x06A71B7C: 00660090  adrp x0, #0x7731000
0x06A71B80: 006841f9  ldr x0, [x0, #0x2d0]
0x06A71B84: a53b1c97  bl #0x3180a18
0x06A71B88: e06500d0  adrp x0, #0x772f000
0x06A71B8C: 002847f9  ldr x0, [x0, #0xe50]
0x06A71B90: a23b1c97  bl #0x3180a18
0x06A71B94: e06500f0  adrp x0, #0x7730000
0x06A71B98: 008443f9  ldr x0, [x0, #0x708]
0x06A71B9C: 9f3b1c97  bl #0x3180a18
0x06A71BA0: e06500d0  adrp x0, #0x772f000
0x06A71BA4: 003447f9  ldr x0, [x0, #0xe68]
0x06A71BA8: 9c3b1c97  bl #0x3180a18
0x06A71BAC: 00660090  adrp x0, #0x7731000
0x06A71BB0: 004c40f9  ldr x0, [x0, #0x98]
0x06A71BB4: 993b1c97  bl #0x3180a18
0x06A71BB8: 00660090  adrp x0, #0x7731000
0x06A71BBC: 006c41f9  ldr x0, [x0, #0x2d8]
0x06A71BC0: 963b1c97  bl #0x3180a18
0x06A71BC4: 00660090  adrp x0, #0x7731000
0x06A71BC8: 005440f9  ldr x0, [x0, #0xa8]
0x06A71BCC: 933b1c97  bl #0x3180a18
0x06A71BD0: 00660090  adrp x0, #0x7731000
0x06A71BD4: 005840f9  ldr x0, [x0, #0xb0]
0x06A71BD8: 903b1c97  bl #0x3180a18
0x06A71BDC: e06500d0  adrp x0, #0x772f000
0x06A71BE0: 005047f9  ldr x0, [x0, #0xea0]
0x06A71BE4: 8d3b1c97  bl #0x3180a18
0x06A71BE8: 00660090  adrp x0, #0x7731000
0x06A71BEC: 007041f9  ldr x0, [x0, #0x2e0]
0x06A71BF0: 8a3b1c97  bl #0x3180a18
0x06A71BF4: 00660090  adrp x0, #0x7731000
0x06A71BF8: 005c40f9  ldr x0, [x0, #0xb8]
0x06A71BFC: 873b1c97  bl #0x3180a18
0x06A71C00: 00660090  adrp x0, #0x7731000
0x06A71C04: 007441f9  ldr x0, [x0, #0x2e8]
0x06A71C08: 843b1c97  bl #0x3180a18
0x06A71C0C: 00660090  adrp x0, #0x7731000
0x06A71C10: 007841f9  ldr x0, [x0, #0x2f0]
0x06A71C14: 813b1c97  bl #0x3180a18
0x06A71C18: 00660090  adrp x0, #0x7731000
0x06A71C1C: 006441f9  ldr x0, [x0, #0x2c8]
0x06A71C20: 7e3b1c97  bl #0x3180a18
0x06A71C24: 28008052  movz w8, #0x1
0x06A71C28: a8a61b39  strb w8, [x21, #0x6e9]
0x06A71C2C: 800240f9  ldr x0, [x20]
0x06A71C30: 00e4006f  movi v0.2d, #0000000000000000
0x06A71C34: ff7f06a9  stp xzr, xzr, [sp, #0x60]
0x06A71C38: e00302ad  stp q0, q0, [sp, #0x40]
0x06A71C3C: 193c1c97  bl #0x3180ca0
0x06A71C40: e1031faa  mov x1, xzr
0x06A71C44: f50300aa  mov x21, x0
0x06A71C48: 6da2b197  bl #0x56da5fc
0x06A71C4C: b50e00b4  cbz x21, #0x6a71e20
0x06A71C50: 600640f9  ldr x0, [x19, #8]
0x06A71C54: 600e00b4  cbz x0, #0x6a71e20
0x06A71C58: 08660090  adrp x8, #0x7731000
0x06A71C5C: 085d40f9  ldr x8, [x8, #0xb8]
0x06A71C60: b4420091  add x20, x21, #0x10
0x06A71C64: e10314aa  mov x1, x20
0x06A71C68: 020140f9  ldr x2, [x8]
0x06A71C6C: ed4c4d97  bl #0x3dc5020
0x06A71C70: e00c0036  tbz w0, #0, #0x6a71e0c
0x06A71C74: e86500d0  adrp x8, #0x772f000
0x06A71C78: 600640ad  ldp q0, q1, [x19]
0x06A71C7C: 082947f9  ldr x8, [x8, #0xe50]
0x06A71C80: e00701ad  stp q0, q1, [sp, #0x20]
0x06A71C84: 000140f9  ldr x0, [x8]
0x06A71C88: f99f4697  bl #0x3c19c6c
0x06A71C8C: e86500d0  adrp x8, #0x772f000
0x06A71C90: 083547f9  ldr x8, [x8, #0xe68]
0x06A71C94: f60300aa  mov x22, x0
0x06A71C98: 080140f9  ldr x8, [x8]
0x06A71C9C: e00308aa  mov x0, x8
0x06A71CA0: 003c1c97  bl #0x3180ca0
0x06A71CA4: 08660090  adrp x8, #0x7731000
0x06A71CA8: 086941f9  ldr x8, [x8, #0x2d0]
0x06A71CAC: e1031faa  mov x1, xzr
0x06A71CB0: e3031faa  mov x3, xzr
0x06A71CB4: f70300aa  mov x23, x0
0x06A71CB8: 020140f9  ldr x2, [x8]
0x06A71CBC: 1390d297  bl #0x5f15d08
0x06A71CC0: e86500d0  adrp x8, #0x772f000
0x06A71CC4: 085147f9  ldr x8, [x8, #0xea0]
0x06A71CC8: e00741ad  ldp q0, q1, [sp, #0x20]
0x06A71CCC: e0c30191  add x0, sp, #0x70
0x06A71CD0: e10316aa  mov x1, x22
0x06A71CD4: 030140f9  ldr x3, [x8]
0x06A71CD8: e8030191  add x8, sp, #0x40
0x06A71CDC: e20317aa  mov x2, x23
0x06A71CE0: e08703ad  stp q0, q1, [sp, #0x70]
0x06A71CE4: 60cb4b97  bl #0x3d64a64
0x06A71CE8: 08660090  adrp x8, #0x7731000
0x06A71CEC: 084d40f9  ldr x8, [x8, #0x98]
0x06A71CF0: 000140f9  ldr x0, [x8]
0x06A71CF4: eb3b1c97  bl #0x3180ca0
0x06A71CF8: 08660090  adrp x8, #0x7731000
0x06A71CFC: 087941f9  ldr x8, [x8, #0x2f0]
0x06A71D00: e10315aa  mov x1, x21
0x06A71D04: e3031faa  mov x3, xzr
0x06A71D08: f60300aa  mov x22, x0
0x06A71D0C: 020140f9  ldr x2, [x8]
0x06A71D10: 42709f97  bl #0x524de18
0x06A71D14: 08660090  adrp x8, #0x7731000
0x06A71D18: 085940f9  ldr x8, [x8, #0xb0]
0x06A71D1C: e0030191  add x0, sp, #0x40
0x06A71D20: e10316aa  mov x1, x22
0x06A71D24: 020140f9  ldr x2, [x8]
0x06A71D28: e8c30191  add x8, sp, #0x70
0x06A71D2C: 914f6497  bl #0x4385b70
0x06A71D30: 08660090  adrp x8, #0x7731000
0x06A71D34: e08743ad  ldp q0, q1, [sp, #0x70]
0x06A71D38: 085540f9  ldr x8, [x8, #0xa8]
0x06A71D3C: e0030191  add x0, sp, #0x40
0x06A71D40: e1830191  add x1, sp, #0x60
0x06A71D44: e00702ad  stp q0, q1, [sp, #0x40]
0x06A71D48: 020140f9  ldr x2, [x8]
0x06A71D4C: f54f6497  bl #0x4385d20
0x06A71D50: e0050036  tbz w0, #0, #0x6a71e0c
0x06A71D54: 880240f9  ldr x8, [x20]
0x06A71D58: 480600b4  cbz x8, #0x6a71e20
0x06A71D5C: e03340f9  ldr x0, [sp, #0x60]
0x06A71D60: 000600b4  cbz x0, #0x6a71e20
0x06A71D64: 011540b9  ldr w1, [x8, #0x14]
0x06A71D68: e86500f0  adrp x8, #0x7730000
0x06A71D6C: 088543f9  ldr x8, [x8, #0x708]
0x06A71D70: 020140f9  ldr x2, [x8]
0x06A71D74: 29aa4697  bl #0x3c1c618
0x06A71D78: 610240ad  ldp q1, q0, [x19]
0x06A71D7C: e10300ad  stp q1, q0, [sp]
0x06A71D80: 880240f9  ldr x8, [x20]
0x06A71D84: e80400b4  cbz x8, #0x6a71e20
0x06A71D88: 020940f9  ldr x2, [x8, #0x10]
0x06A71D8C: 08660090  adrp x8, #0x7731000
0x06A71D90: e13340f9  ldr x1, [sp, #0x60]
0x06A71D94: 087541f9  ldr x8, [x8, #0x2e8]
0x06A71D98: e00740ad  ldp q0, q1, [sp]
0x06A71D9C: e0c30191  add x0, sp, #0x70
0x06A71DA0: 030140f9  ldr x3, [x8]
0x06A71DA4: e08703ad  stp q0, q1, [sp, #0x70]
0x06A71DA8: 9d4e4d97  bl #0x3dc581c
0x06A71DAC: 08660090  adrp x8, #0x7731000
0x06A71DB0: 730a40f9  ldr x19, [x19, #0x10]
0x06A71DB4: 086d41f9  ldr x8, [x8, #0x2d8]
0x06A71DB8: 000140f9  ldr x0, [x8]
0x06A71DBC: b93b1c97  bl #0x3180ca0
0x06A71DC0: e1031faa  mov x1, xzr
0x06A71DC4: f50300aa  mov x21, x0
0x06A71DC8: c5a20094  bl #0x6a9a8dc
0x06A71DCC: b50200b4  cbz x21, #0x6a71e20
0x06A71DD0: e13340f9  ldr x1, [sp, #0x60]
0x06A71DD4: e00315aa  mov x0, x21
0x06A71DD8: 010c01f8  str x1, [x0, #0x10]!
0x06A71DDC: fa3a1c97  bl #0x31809c4
0x06A71DE0: 880240f9  ldr x8, [x20]
0x06A71DE4: e80100b4  cbz x8, #0x6a71e20
0x06A71DE8: 000940fd  ldr d0, [x8, #0x10]
0x06A71DEC: a00e00fd  str d0, [x21, #0x18]
0x06A71DF0: 930100b4  cbz x19, #0x6a71e20
0x06A71DF4: 08660090  adrp x8, #0x7731000
0x06A71DF8: 087141f9  ldr x8, [x8, #0x2e0]
0x06A71DFC: e00313aa  mov x0, x19
0x06A71E00: e10315aa  mov x1, x21
0x06A71E04: 020140f9  ldr x2, [x8]
0x06A71E08: 77454d97  bl #0x3dc33e4
0x06A71E0C: f44f4ba9  ldp x20, x19, [sp, #0xb0]
0x06A71E10: f6574aa9  ldp x22, x21, [sp, #0xa0]
0x06A71E14: fe5f49a9  ldp x30, x23, [sp, #0x90]
0x06A71E18: ff030391  add sp, sp, #0xc0
0x06A71E1C: c0035fd6  ret
0x06A71E20: a33b1c97  bl #0x3180cac

; RVA 0x6A71E2C | public void .ctor() { }
; bytes=8 sha256=6ea478eae0f1969add3b0525490d5150dc362c1680fc734630903bb443cec15a status=arm64_complete_bound indexed_start=True
0x06A71E2C: e1031faa  mov x1, xzr
0x06A71E30: f3a1b117  b #0x56da5fc

