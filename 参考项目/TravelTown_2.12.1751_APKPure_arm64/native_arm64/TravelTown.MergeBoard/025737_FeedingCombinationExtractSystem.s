; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25737 Merger.MergeBoard.Systems.FeedingCombinationExtractSystem
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A67918 | public void Tick(TickContext context) { }
; bytes=936 sha256=1785f6a658d06985d2215f09e908f0bb9c7f804502bc5ef3c64ddca661f2fc40 status=arm64_complete_bound indexed_start=True
0x06A67918: ff8305d1  sub sp, sp, #0x160
0x06A6791C: fd7b10a9  stp x29, x30, [sp, #0x100]
0x06A67920: fc6f11a9  stp x28, x27, [sp, #0x110]
0x06A67924: fa6712a9  stp x26, x25, [sp, #0x120]
0x06A67928: f85f13a9  stp x24, x23, [sp, #0x130]
0x06A6792C: f65714a9  stp x22, x21, [sp, #0x140]
0x06A67930: f44f15a9  stp x20, x19, [sp, #0x150]
0x06A67934: 159600f0  adrp x21, #0x7d2a000
0x06A67938: a8ae5a39  ldrb w8, [x21, #0x6ab]
0x06A6793C: f40301aa  mov x20, x1
0x06A67940: f30300aa  mov x19, x0
0x06A67944: 48050037  tbnz w8, #0, #0x6a679ec
0x06A67948: 406600b0  adrp x0, #0x7730000
0x06A6794C: 003c46f9  ldr x0, [x0, #0xc78]
0x06A67950: 32641c97  bl #0x3180a18
0x06A67954: 406600b0  adrp x0, #0x7730000
0x06A67958: 004046f9  ldr x0, [x0, #0xc80]
0x06A6795C: 2f641c97  bl #0x3180a18
0x06A67960: 405f00b0  adrp x0, #0x7650000
0x06A67964: 005046f9  ldr x0, [x0, #0xca0]
0x06A67968: 2c641c97  bl #0x3180a18
0x06A6796C: 405f00b0  adrp x0, #0x7650000
0x06A67970: 005446f9  ldr x0, [x0, #0xca8]
0x06A67974: 29641c97  bl #0x3180a18
0x06A67978: 405f00b0  adrp x0, #0x7650000
0x06A6797C: 005846f9  ldr x0, [x0, #0xcb0]
0x06A67980: 26641c97  bl #0x3180a18
0x06A67984: 406600b0  adrp x0, #0x7730000
0x06A67988: 004446f9  ldr x0, [x0, #0xc88]
0x06A6798C: 23641c97  bl #0x3180a18
0x06A67990: 405f00b0  adrp x0, #0x7650000
0x06A67994: 006046f9  ldr x0, [x0, #0xcc0]
0x06A67998: 20641c97  bl #0x3180a18
0x06A6799C: 406600b0  adrp x0, #0x7730000
0x06A679A0: 004846f9  ldr x0, [x0, #0xc90]
0x06A679A4: 1d641c97  bl #0x3180a18
0x06A679A8: 406600b0  adrp x0, #0x7730000
0x06A679AC: 004c46f9  ldr x0, [x0, #0xc98]
0x06A679B0: 1a641c97  bl #0x3180a18
0x06A679B4: 406600b0  adrp x0, #0x7730000
0x06A679B8: 005046f9  ldr x0, [x0, #0xca0]
0x06A679BC: 17641c97  bl #0x3180a18
0x06A679C0: 406600b0  adrp x0, #0x7730000
0x06A679C4: 005446f9  ldr x0, [x0, #0xca8]
0x06A679C8: 14641c97  bl #0x3180a18
0x06A679CC: 406600b0  adrp x0, #0x7730000
0x06A679D0: 005846f9  ldr x0, [x0, #0xcb0]
0x06A679D4: 11641c97  bl #0x3180a18
0x06A679D8: 406600b0  adrp x0, #0x7730000
0x06A679DC: 005c46f9  ldr x0, [x0, #0xcb8]
0x06A679E0: 0e641c97  bl #0x3180a18
0x06A679E4: 28008052  movz w8, #0x1
0x06A679E8: a8ae1a39  strb w8, [x21, #0x6ab]
0x06A679EC: 00e4006f  movi v0.2d, #0000000000000000
0x06A679F0: ff6f00f9  str xzr, [sp, #0xd8]
0x06A679F4: ff7f09a9  stp xzr, xzr, [sp, #0x90]
0x06A679F8: ff5300f9  str xzr, [sp, #0xa0]
0x06A679FC: e08305ad  stp q0, q0, [sp, #0xb0]
0x06A67A00: ff4700f9  str xzr, [sp, #0x88]
0x06A67A04: 800640f9  ldr x0, [x20, #8]
0x06A67A08: 001400b4  cbz x0, #0x6a67c88
0x06A67A0C: 486600b0  adrp x8, #0x7730000
0x06A67A10: 085546f9  ldr x8, [x8, #0xca8]
0x06A67A14: e1630391  add x1, sp, #0xd8
0x06A67A18: 020140f9  ldr x2, [x8]
0x06A67A1C: 81754d97  bl #0x3dc5020
0x06A67A20: 80010036  tbz w0, #0, #0x6a67a50
0x06A67A24: 800640ad  ldp q0, q1, [x20]
0x06A67A28: e86f40f9  ldr x8, [sp, #0xd8]
0x06A67A2C: e00707ad  stp q0, q1, [sp, #0xe0]
0x06A67A30: c81200b4  cbz x8, #0x6a67c88
0x06A67A34: e00747ad  ldp q0, q1, [sp, #0xe0]
0x06A67A38: 020d41a9  ldp x2, x3, [x8, #0x10]
0x06A67A3C: e1830191  add x1, sp, #0x60
0x06A67A40: e00313aa  mov x0, x19
0x06A67A44: e00703ad  stp q0, q1, [sp, #0x60]
0x06A67A48: 9e000094  bl #0x6a67cc0
0x06A67A4C: 87000014  b #0x6a67c68
0x06A67A50: 486600b0  adrp x8, #0x7730000
0x06A67A54: 800640ad  ldp q0, q1, [x20]
0x06A67A58: 083d46f9  ldr x8, [x8, #0xc78]
0x06A67A5C: e00701ad  stp q0, q1, [sp, #0x20]
0x06A67A60: 000140f9  ldr x0, [x8]
0x06A67A64: a6ca4697  bl #0x3c1a4fc
0x06A67A68: 486600b0  adrp x8, #0x7730000
0x06A67A6C: 085146f9  ldr x8, [x8, #0xca0]
0x06A67A70: e00741ad  ldp q0, q1, [sp, #0x20]
0x06A67A74: e10300aa  mov x1, x0
0x06A67A78: e0830391  add x0, sp, #0xe0
0x06A67A7C: 030140f9  ldr x3, [x8]
0x06A67A80: e8030191  add x8, sp, #0x40
0x06A67A84: e2031faa  mov x2, xzr
0x06A67A88: e00707ad  stp q0, q1, [sp, #0xe0]
0x06A67A8C: b6f74b97  bl #0x3d65964
0x06A67A90: 576600b0  adrp x23, #0x7730000
0x06A67A94: e10342ad  ldp q1, q0, [sp, #0x40]
0x06A67A98: f75e46f9  ldr x23, [x23, #0xcb8]
0x06A67A9C: e18305ad  stp q1, q0, [sp, #0xb0]
0x06A67AA0: e00240f9  ldr x0, [x23]
0x06A67AA4: 08e040b9  ldr w8, [x0, #0xe0]
0x06A67AA8: 68000035  cbnz w8, #0x6a67ab4
0x06A67AAC: 38641c97  bl #0x3180b8c
0x06A67AB0: e00240f9  ldr x0, [x23]
0x06A67AB4: 085c40f9  ldr x8, [x0, #0xb8]
0x06A67AB8: 150540f9  ldr x21, [x8, #8]
0x06A67ABC: f50200b5  cbnz x21, #0x6a67b18
0x06A67AC0: 08e040b9  ldr w8, [x0, #0xe0]
0x06A67AC4: 68000035  cbnz w8, #0x6a67ad0
0x06A67AC8: 31641c97  bl #0x3180b8c
0x06A67ACC: e00240f9  ldr x0, [x23]
0x06A67AD0: 496600b0  adrp x9, #0x7730000
0x06A67AD4: 085c40f9  ldr x8, [x0, #0xb8]
0x06A67AD8: 294546f9  ldr x9, [x9, #0xc88]
0x06A67ADC: 160140f9  ldr x22, [x8]
0x06A67AE0: 200140f9  ldr x0, [x9]
0x06A67AE4: 6f641c97  bl #0x3180ca0
0x06A67AE8: 486600b0  adrp x8, #0x7730000
0x06A67AEC: 085946f9  ldr x8, [x8, #0xcb0]
0x06A67AF0: e10316aa  mov x1, x22
0x06A67AF4: e3031faa  mov x3, xzr
0x06A67AF8: f50300aa  mov x21, x0
0x06A67AFC: 020140f9  ldr x2, [x8]
0x06A67B00: 46a49f97  bl #0x5250c18
0x06A67B04: e80240f9  ldr x8, [x23]
0x06A67B08: e10315aa  mov x1, x21
0x06A67B0C: 005d40f9  ldr x0, [x8, #0xb8]
0x06A67B10: 158c00f8  str x21, [x0, #8]!
0x06A67B14: ac631c97  bl #0x31809c4
0x06A67B18: 486600b0  adrp x8, #0x7730000
0x06A67B1C: 084d46f9  ldr x8, [x8, #0xc98]
0x06A67B20: e0c30291  add x0, sp, #0xb0
0x06A67B24: e10315aa  mov x1, x21
0x06A67B28: 020140f9  ldr x2, [x8]
0x06A67B2C: e8830391  add x8, sp, #0xe0
0x06A67B30: 2c9e6497  bl #0x438f3e0
0x06A67B34: 486600b0  adrp x8, #0x7730000
0x06A67B38: e00747ad  ldp q0, q1, [sp, #0xe0]
0x06A67B3C: 084946f9  ldr x8, [x8, #0xc90]
0x06A67B40: e0c30291  add x0, sp, #0xb0
0x06A67B44: e08705ad  stp q0, q1, [sp, #0xb0]
0x06A67B48: 010140f9  ldr x1, [x8]
0x06A67B4C: 3b9e6497  bl #0x438f438
0x06A67B50: 486600b0  adrp x8, #0x7730000
0x06A67B54: 084146f9  ldr x8, [x8, #0xc80]
0x06A67B58: 010140f9  ldr x1, [x8]
0x06A67B5C: a5cd4797  bl #0x3c5b1f0
0x06A67B60: 400900b4  cbz x0, #0x6a67c88
0x06A67B64: 080c40f9  ldr x8, [x0, #0x18]
0x06A67B68: f50300aa  mov x21, x0
0x06A67B6C: 1f050071  cmp w8, #1
0x06A67B70: cb070054  b.lt #0x6a67c68
0x06A67B74: 5b5f00b0  adrp x27, #0x7650000
0x06A67B78: 5c5f00b0  adrp x28, #0x7650000
0x06A67B7C: 585f00b0  adrp x24, #0x7650000
0x06A67B80: 7b6346f9  ldr x27, [x27, #0xcc0]
0x06A67B84: 9c5746f9  ldr x28, [x28, #0xca8]
0x06A67B88: 185346f9  ldr x24, [x24, #0xca0]
0x06A67B8C: f9031faa  mov x25, xzr
0x06A67B90: 087d4092  and x8, x8, #0xffffffff
0x06A67B94: 1a038052  movz w26, #0x18
0x06A67B98: 3f4328eb  cmp x25, w8, uxtw
0x06A67B9C: 82070054  b.hs #0x6a67c8c
0x06A67BA0: 28571a9b  madd x8, x25, x26, x21
0x06A67BA4: 162542a9  ldp x22, x9, [x8, #0x20]
0x06A67BA8: 173540b9  ldr w23, [x8, #0x34]
0x06A67BAC: e0230291  add x0, sp, #0x88
0x06A67BB0: e1031faa  mov x1, xzr
0x06A67BB4: e94700f9  str x9, [sp, #0x88]
0x06A67BB8: ea7b0094  bl #0x6a86b60
0x06A67BBC: 600600b4  cbz x0, #0x6a67c88
0x06A67BC0: 610340f9  ldr x1, [x27]
0x06A67BC4: e8830391  add x8, sp, #0xe0
0x06A67BC8: 28755797  bl #0x4045068
0x06A67BCC: e03bc03d  ldr q0, [sp, #0xe0]
0x06A67BD0: e87b40f9  ldr x8, [sp, #0xf0]
0x06A67BD4: e027803d  str q0, [sp, #0x90]
0x06A67BD8: e85300f9  str x8, [sp, #0xa0]
0x06A67BDC: 810340f9  ldr x1, [x28]
0x06A67BE0: e0430291  add x0, sp, #0x90
0x06A67BE4: 74b79697  bl #0x50159b4
0x06A67BE8: 40010036  tbz w0, #0, #0x6a67c10
0x06A67BEC: 800640ad  ldp q0, q1, [x20]
0x06A67BF0: e35340f9  ldr x3, [sp, #0xa0]
0x06A67BF4: e00700ad  stp q0, q1, [sp]
0x06A67BF8: e1030091  mov x1, sp
0x06A67BFC: e00313aa  mov x0, x19
0x06A67C00: e20316aa  mov x2, x22
0x06A67C04: e403172a  mov w4, w23
0x06A67C08: 6d000094  bl #0x6a67dbc
0x06A67C0C: f4ffff17  b #0x6a67bdc
0x06A67C10: 010340f9  ldr x1, [x24]
0x06A67C14: e0430291  add x0, sp, #0x90
0x06A67C18: 66b79697  bl #0x50159b0
0x06A67C1C: a81a40b9  ldr w8, [x21, #0x18]
0x06A67C20: 39070091  add x25, x25, #1
0x06A67C24: 3fc328eb  cmp x25, w8, sxtw
0x06A67C28: 8bfbff54  b.lt #0x6a67b98
0x06A67C2C: 0f000014  b #0x6a67c68
0x06A67C30: 01000014  b #0x6a67c34
0x06A67C34: f70300aa  mov x23, x0
0x06A67C38: 3f040071  cmp w1, #1
0x06A67C3C: a1020054  b.ne #0x6a67c90
0x06A67C40: e00317aa  mov x0, x23
0x06A67C44: 339b1d94  bl #0x71ce910
0x06A67C48: 160040f9  ldr x22, [x0]
0x06A67C4C: 359b1d94  bl #0x71ce920
0x06A67C50: 010340f9  ldr x1, [x24]
0x06A67C54: e0430291  add x0, sp, #0x90
0x06A67C58: 56b79697  bl #0x50159b0
0x06A67C5C: 16feffb4  cbz x22, #0x6a67c1c
0x06A67C60: e00316aa  mov x0, x22
0x06A67C64: 10641c97  bl #0x3180ca4
0x06A67C68: f44f55a9  ldp x20, x19, [sp, #0x150]
0x06A67C6C: f65754a9  ldp x22, x21, [sp, #0x140]
0x06A67C70: f85f53a9  ldp x24, x23, [sp, #0x130]
0x06A67C74: fa6752a9  ldp x26, x25, [sp, #0x120]
0x06A67C78: fc6f51a9  ldp x28, x27, [sp, #0x110]
0x06A67C7C: fd7b50a9  ldp x29, x30, [sp, #0x100]
0x06A67C80: ff830591  add sp, sp, #0x160
0x06A67C84: c0035fd6  ret
0x06A67C88: 09641c97  bl #0x3180cac
0x06A67C8C: 0a641c97  bl #0x3180cb4
0x06A67C90: f6031faa  mov x22, xzr
0x06A67C94: 02000014  b #0x6a67c9c
0x06A67C98: f70300aa  mov x23, x0
0x06A67C9C: 010340f9  ldr x1, [x24]
0x06A67CA0: e0430291  add x0, sp, #0x90
0x06A67CA4: 43b79697  bl #0x50159b0
0x06A67CA8: 760000b5  cbnz x22, #0x6a67cb4
0x06A67CAC: e00317aa  mov x0, x23
0x06A67CB0: 2af71f97  bl #0x3265958
0x06A67CB4: e00316aa  mov x0, x22
0x06A67CB8: fb631c97  bl #0x3180ca4
0x06A67CBC: 16860e97  bl #0x2e09514

; RVA 0x6A67CC0 | private void ExtractItemByAction(TickContext context, Entity feedingEntity, string itemId) { }
; bytes=252 sha256=ce1ffcc424f6bdafe9df7a2602ed8dbe2ae902144233c3160486cd241dffbc8a status=arm64_complete_bound indexed_start=True
0x06A67CC0: ff0302d1  sub sp, sp, #0x80
0x06A67CC4: fe5f05a9  stp x30, x23, [sp, #0x50]
0x06A67CC8: f65706a9  stp x22, x21, [sp, #0x60]
0x06A67CCC: f44f07a9  stp x20, x19, [sp, #0x70]
0x06A67CD0: 179600f0  adrp x23, #0x7d2a000
0x06A67CD4: e8b25a39  ldrb w8, [x23, #0x6ac]
0x06A67CD8: f40303aa  mov x20, x3
0x06A67CDC: f30302aa  mov x19, x2
0x06A67CE0: f60301aa  mov x22, x1
0x06A67CE4: f50300aa  mov x21, x0
0x06A67CE8: 28010037  tbnz w8, #0, #0x6a67d0c
0x06A67CEC: 406600b0  adrp x0, #0x7730000
0x06A67CF0: 006046f9  ldr x0, [x0, #0xcc0]
0x06A67CF4: 49631c97  bl #0x3180a18
0x06A67CF8: 406600b0  adrp x0, #0x7730000
0x06A67CFC: 006446f9  ldr x0, [x0, #0xcc8]
0x06A67D00: 46631c97  bl #0x3180a18
0x06A67D04: 28008052  movz w8, #0x1
0x06A67D08: e8b21a39  strb w8, [x23, #0x6ac]
0x06A67D0C: e00314aa  mov x0, x20
0x06A67D10: e1031faa  mov x1, xzr
0x06A67D14: ff4f00b9  str wzr, [sp, #0x4c]
0x06A67D18: 3d58aa97  bl #0x54fde0c
0x06A67D1C: 40040037  tbnz w0, #0, #0x6a67da4
0x06A67D20: c10240ad  ldp q1, q0, [x22]
0x06A67D24: a00e40f9  ldr x0, [x21, #0x18]
0x06A67D28: e1830091  add x1, sp, #0x20
0x06A67D2C: e2330191  add x2, sp, #0x4c
0x06A67D30: e3031faa  mov x3, xzr
0x06A67D34: e10301ad  stp q1, q0, [sp, #0x20]
0x06A67D38: 17c70094  bl #0x6a99994
0x06A67D3C: 40010036  tbz w0, #0, #0x6a67d64
0x06A67D40: c10240ad  ldp q1, q0, [x22]
0x06A67D44: e44f40b9  ldr w4, [sp, #0x4c]
0x06A67D48: e1030091  mov x1, sp
0x06A67D4C: e00315aa  mov x0, x21
0x06A67D50: e20313aa  mov x2, x19
0x06A67D54: e30314aa  mov x3, x20
0x06A67D58: e10300ad  stp q1, q0, [sp]
0x06A67D5C: a9000094  bl #0x6a68000
0x06A67D60: 11000014  b #0x6a67da4
0x06A67D64: 486600b0  adrp x8, #0x7730000
0x06A67D68: d40a40f9  ldr x20, [x22, #0x10]
0x06A67D6C: 086146f9  ldr x8, [x8, #0xcc0]
0x06A67D70: 000140f9  ldr x0, [x8]
0x06A67D74: cb631c97  bl #0x3180ca0
0x06A67D78: e10313aa  mov x1, x19
0x06A67D7C: e2031faa  mov x2, xzr
0x06A67D80: f50300aa  mov x21, x0
0x06A67D84: 01c90094  bl #0x6a9a188
0x06A67D88: 940100b4  cbz x20, #0x6a67db8
0x06A67D8C: 486600b0  adrp x8, #0x7730000
0x06A67D90: 086546f9  ldr x8, [x8, #0xcc8]
0x06A67D94: e00314aa  mov x0, x20
0x06A67D98: e10315aa  mov x1, x21
0x06A67D9C: 020140f9  ldr x2, [x8]
0x06A67DA0: 916d4d97  bl #0x3dc33e4
0x06A67DA4: f44f47a9  ldp x20, x19, [sp, #0x70]
0x06A67DA8: f65746a9  ldp x22, x21, [sp, #0x60]
0x06A67DAC: fe5f45a9  ldp x30, x23, [sp, #0x50]
0x06A67DB0: ff030291  add sp, sp, #0x80
0x06A67DB4: c0035fd6  ret
0x06A67DB8: bd631c97  bl #0x3180cac

; RVA 0x6A67DBC | private void ExtractItemByTime(TickContext context, Entity feedingEntity, string itemId, int deadPosition = 0) { }
; bytes=580 sha256=4623c3631066f34a9fad4c6dcab2961586cdc28d5aeeefd2d9b5f6aef5fe2dd2 status=arm64_complete_bound indexed_start=True
0x06A67DBC: ff0302d1  sub sp, sp, #0x80
0x06A67DC0: fe2300f9  str x30, [sp, #0x40]
0x06A67DC4: f85f05a9  stp x24, x23, [sp, #0x50]
0x06A67DC8: f65706a9  stp x22, x21, [sp, #0x60]
0x06A67DCC: f44f07a9  stp x20, x19, [sp, #0x70]
0x06A67DD0: 189600f0  adrp x24, #0x7d2a000
0x06A67DD4: 08b75a39  ldrb w8, [x24, #0x6ad]
0x06A67DD8: f703042a  mov w23, w4
0x06A67DDC: f50303aa  mov x21, x3
0x06A67DE0: f60302aa  mov x22, x2
0x06A67DE4: f30301aa  mov x19, x1
0x06A67DE8: f40300aa  mov x20, x0
0x06A67DEC: 48020037  tbnz w8, #0, #0x6a67e34
0x06A67DF0: 406600b0  adrp x0, #0x7730000
0x06A67DF4: 006846f9  ldr x0, [x0, #0xcd0]
0x06A67DF8: 08631c97  bl #0x3180a18
0x06A67DFC: c06200d0  adrp x0, #0x76c1000
0x06A67E00: 005843f9  ldr x0, [x0, #0x6b0]
0x06A67E04: 05631c97  bl #0x3180a18
0x06A67E08: 806000f0  adrp x0, #0x767a000
0x06A67E0C: 004c42f9  ldr x0, [x0, #0x498]
0x06A67E10: 02631c97  bl #0x3180a18
0x06A67E14: 406600b0  adrp x0, #0x7730000
0x06A67E18: 006c46f9  ldr x0, [x0, #0xcd8]
0x06A67E1C: ff621c97  bl #0x3180a18
0x06A67E20: 406600b0  adrp x0, #0x7730000
0x06A67E24: 00a043f9  ldr x0, [x0, #0x740]
0x06A67E28: fc621c97  bl #0x3180a18
0x06A67E2C: 28008052  movz w8, #0x1
0x06A67E30: 08b71a39  strb w8, [x24, #0x6ad]
0x06A67E34: e00315aa  mov x0, x21
0x06A67E38: e1031faa  mov x1, xzr
0x06A67E3C: ff4f00b9  str wzr, [sp, #0x4c]
0x06A67E40: f357aa97  bl #0x54fde0c
0x06A67E44: 000d0037  tbnz w0, #0, #0x6a67fe4
0x06A67E48: 610240ad  ldp q1, q0, [x19]
0x06A67E4C: 800e40f9  ldr x0, [x20, #0x18]
0x06A67E50: e1830091  add x1, sp, #0x20
0x06A67E54: e3330191  add x3, sp, #0x4c
0x06A67E58: e203172a  mov w2, w23
0x06A67E5C: e4031faa  mov x4, xzr
0x06A67E60: e10301ad  stp q1, q0, [sp, #0x20]
0x06A67E64: 08c60094  bl #0x6a99684
0x06A67E68: 40010036  tbz w0, #0, #0x6a67e90
0x06A67E6C: 610240ad  ldp q1, q0, [x19]
0x06A67E70: e44f40b9  ldr w4, [sp, #0x4c]
0x06A67E74: e1030091  mov x1, sp
0x06A67E78: e00314aa  mov x0, x20
0x06A67E7C: e20316aa  mov x2, x22
0x06A67E80: e30315aa  mov x3, x21
0x06A67E84: e10300ad  stp q1, q0, [sp]
0x06A67E88: 5e000094  bl #0x6a68000
0x06A67E8C: 56000014  b #0x6a67fe4
0x06A67E90: 971a40f9  ldr x23, [x20, #0x30]
0x06A67E94: 570b00b4  cbz x23, #0x6a67ffc
0x06A67E98: 8a6000f0  adrp x10, #0x767a000
0x06A67E9C: e80240f9  ldr x8, [x23]
0x06A67EA0: 4a4d42f9  ldr x10, [x10, #0x498]
0x06A67EA4: 095d4279  ldrh w9, [x8, #0x12e]
0x06A67EA8: 410140f9  ldr x1, [x10]
0x06A67EAC: 290100b4  cbz x9, #0x6a67ed0
0x06A67EB0: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A67EB4: 4a210091  add x10, x10, #8
0x06A67EB8: 4b815ff8  ldur x11, [x10, #-8]
0x06A67EBC: 7f0101eb  cmp x11, x1
0x06A67EC0: 00010054  b.eq #0x6a67ee0
0x06A67EC4: 290500f1  subs x9, x9, #1
0x06A67EC8: 4a410091  add x10, x10, #0x10
0x06A67ECC: 61ffff54  b.ne #0x6a67eb8
0x06A67ED0: 22018052  movz w2, #0x9
0x06A67ED4: e00317aa  mov x0, x23
0x06A67ED8: 0ebb1b97  bl #0x3156b10
0x06A67EDC: 05000014  b #0x6a67ef0
0x06A67EE0: 490140b9  ldr w9, [x10]
0x06A67EE4: 29250011  add w9, w9, #9
0x06A67EE8: 08d1298b  add x8, x8, w9, sxtw #4
0x06A67EEC: 00e10491  add x0, x8, #0x138
0x06A67EF0: 080840a9  ldp x8, x2, [x0]
0x06A67EF4: e00317aa  mov x0, x23
0x06A67EF8: e10315aa  mov x1, x21
0x06A67EFC: 00013fd6  blr x8
0x06A67F00: e10316aa  mov x1, x22
0x06A67F04: e20315aa  mov x2, x21
0x06A67F08: f70300aa  mov x23, x0
0x06A67F0C: d6000094  bl #0x6a68264
0x06A67F10: 600700b4  cbz x0, #0x6a67ffc
0x06A67F14: 941240f9  ldr x20, [x20, #0x20]
0x06A67F18: 340700b4  cbz x20, #0x6a67ffc
0x06A67F1C: ca6200d0  adrp x10, #0x76c1000
0x06A67F20: 880240f9  ldr x8, [x20]
0x06A67F24: 150840f9  ldr x21, [x0, #0x10]
0x06A67F28: 4a5943f9  ldr x10, [x10, #0x6b0]
0x06A67F2C: 095d4279  ldrh w9, [x8, #0x12e]
0x06A67F30: 410140f9  ldr x1, [x10]
0x06A67F34: 290100b4  cbz x9, #0x6a67f58
0x06A67F38: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A67F3C: 4a210091  add x10, x10, #8
0x06A67F40: 4b815ff8  ldur x11, [x10, #-8]
0x06A67F44: 7f0101eb  cmp x11, x1
0x06A67F48: 00010054  b.eq #0x6a67f68
0x06A67F4C: 290500f1  subs x9, x9, #1
0x06A67F50: 4a410091  add x10, x10, #0x10
0x06A67F54: 61ffff54  b.ne #0x6a67f40
0x06A67F58: 42008052  movz w2, #0x2
0x06A67F5C: e00314aa  mov x0, x20
0x06A67F60: ecba1b97  bl #0x3156b10
0x06A67F64: 05000014  b #0x6a67f78
0x06A67F68: 490140b9  ldr w9, [x10]
0x06A67F6C: 29090011  add w9, w9, #2
0x06A67F70: 08d1298b  add x8, x8, w9, sxtw #4
0x06A67F74: 00e10491  add x0, x8, #0x138
0x06A67F78: 080c40a9  ldp x8, x3, [x0]
0x06A67F7C: 02008012  movn w2, #0
0x06A67F80: e00314aa  mov x0, x20
0x06A67F84: e10315aa  mov x1, x21
0x06A67F88: 00013fd6  blr x8
0x06A67F8C: 486600b0  adrp x8, #0x7730000
0x06A67F90: 730a40f9  ldr x19, [x19, #0x10]
0x06A67F94: 086946f9  ldr x8, [x8, #0xcd0]
0x06A67F98: f50300aa  mov x21, x0
0x06A67F9C: 080140f9  ldr x8, [x8]
0x06A67FA0: e00308aa  mov x0, x8
0x06A67FA4: 3f631c97  bl #0x3180ca0
0x06A67FA8: 486600b0  adrp x8, #0x7730000
0x06A67FAC: 08a143f9  ldr x8, [x8, #0x740]
0x06A67FB0: e10315aa  mov x1, x21
0x06A67FB4: e30317aa  mov x3, x23
0x06A67FB8: e4031faa  mov x4, xzr
0x06A67FBC: 020140f9  ldr x2, [x8]
0x06A67FC0: f40300aa  mov x20, x0
0x06A67FC4: 4bc90094  bl #0x6a9a4f0
0x06A67FC8: b30100b4  cbz x19, #0x6a67ffc
0x06A67FCC: 486600b0  adrp x8, #0x7730000
0x06A67FD0: 086d46f9  ldr x8, [x8, #0xcd8]
0x06A67FD4: e00313aa  mov x0, x19
0x06A67FD8: e10314aa  mov x1, x20
0x06A67FDC: 020140f9  ldr x2, [x8]
0x06A67FE0: 016d4d97  bl #0x3dc33e4
0x06A67FE4: f44f47a9  ldp x20, x19, [sp, #0x70]
0x06A67FE8: f65746a9  ldp x22, x21, [sp, #0x60]
0x06A67FEC: f85f45a9  ldp x24, x23, [sp, #0x50]
0x06A67FF0: fe2340f9  ldr x30, [sp, #0x40]
0x06A67FF4: ff030291  add sp, sp, #0x80
0x06A67FF8: c0035fd6  ret
0x06A67FFC: 2c631c97  bl #0x3180cac

; RVA 0x6A68000 | private void HandleExtract(TickContext context, Entity feedingEntity, string itemId, int emptyPosition) { }
; bytes=612 sha256=e916055e458cadcfc0a36aa62b5f4919ae088505f8e7c44d5f7b07c3491bcfa2 status=arm64_complete_bound indexed_start=True
0x06A68000: ffc301d1  sub sp, sp, #0x70
0x06A68004: fe6f02a9  stp x30, x27, [sp, #0x20]
0x06A68008: fa6703a9  stp x26, x25, [sp, #0x30]
0x06A6800C: f85f04a9  stp x24, x23, [sp, #0x40]
0x06A68010: f65705a9  stp x22, x21, [sp, #0x50]
0x06A68014: f44f06a9  stp x20, x19, [sp, #0x60]
0x06A68018: 189600d0  adrp x24, #0x7d2a000
0x06A6801C: 08bb5a39  ldrb w8, [x24, #0x6ae]
0x06A68020: f403042a  mov w20, w4
0x06A68024: f70303aa  mov x23, x3
0x06A68028: f30302aa  mov x19, x2
0x06A6802C: f60301aa  mov x22, x1
0x06A68030: f50300aa  mov x21, x0
0x06A68034: 68030037  tbnz w8, #0, #0x6a680a0
0x06A68038: c0620090  adrp x0, #0x76c0000
0x06A6803C: 006447f9  ldr x0, [x0, #0xec8]
0x06A68040: 76621c97  bl #0x3180a18
0x06A68044: 206600f0  adrp x0, #0x772f000
0x06A68048: 006c42f9  ldr x0, [x0, #0x4d8]
0x06A6804C: 73621c97  bl #0x3180a18
0x06A68050: 40660090  adrp x0, #0x7730000
0x06A68054: 007046f9  ldr x0, [x0, #0xce0]
0x06A68058: 70621c97  bl #0x3180a18
0x06A6805C: c06200b0  adrp x0, #0x76c1000
0x06A68060: 005843f9  ldr x0, [x0, #0x6b0]
0x06A68064: 6d621c97  bl #0x3180a18
0x06A68068: 40660090  adrp x0, #0x7730000
0x06A6806C: 007446f9  ldr x0, [x0, #0xce8]
0x06A68070: 6a621c97  bl #0x3180a18
0x06A68074: 40660090  adrp x0, #0x7730000
0x06A68078: 007846f9  ldr x0, [x0, #0xcf0]
0x06A6807C: 67621c97  bl #0x3180a18
0x06A68080: 40660090  adrp x0, #0x7730000
0x06A68084: 003446f9  ldr x0, [x0, #0xc68]
0x06A68088: 64621c97  bl #0x3180a18
0x06A6808C: 205f00f0  adrp x0, #0x764f000
0x06A68090: 00ac40f9  ldr x0, [x0, #0x158]
0x06A68094: 61621c97  bl #0x3180a18
0x06A68098: 28008052  movz w8, #0x1
0x06A6809C: 08bb1a39  strb w8, [x24, #0x6ae]
0x06A680A0: e10313aa  mov x1, x19
0x06A680A4: e20317aa  mov x2, x23
0x06A680A8: 6f000094  bl #0x6a68264
0x06A680AC: a00d00b4  cbz x0, #0x6a68260
0x06A680B0: b81240f9  ldr x24, [x21, #0x20]
0x06A680B4: 780d00b4  cbz x24, #0x6a68260
0x06A680B8: ca6200b0  adrp x10, #0x76c1000
0x06A680BC: 080340f9  ldr x8, [x24]
0x06A680C0: 4a5943f9  ldr x10, [x10, #0x6b0]
0x06A680C4: 190840f9  ldr x25, [x0, #0x10]
0x06A680C8: f70300aa  mov x23, x0
0x06A680CC: 095d4279  ldrh w9, [x8, #0x12e]
0x06A680D0: 410140f9  ldr x1, [x10]
0x06A680D4: 290100b4  cbz x9, #0x6a680f8
0x06A680D8: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A680DC: 4a210091  add x10, x10, #8
0x06A680E0: 4b815ff8  ldur x11, [x10, #-8]
0x06A680E4: 7f0101eb  cmp x11, x1
0x06A680E8: 00010054  b.eq #0x6a68108
0x06A680EC: 290500f1  subs x9, x9, #1
0x06A680F0: 4a410091  add x10, x10, #0x10
0x06A680F4: 61ffff54  b.ne #0x6a680e0
0x06A680F8: 42008052  movz w2, #0x2
0x06A680FC: e00318aa  mov x0, x24
0x06A68100: 84ba1b97  bl #0x3156b10
0x06A68104: 05000014  b #0x6a68118
0x06A68108: 490140b9  ldr w9, [x10]
0x06A6810C: 29090011  add w9, w9, #2
0x06A68110: 08d1298b  add x8, x8, w9, sxtw #4
0x06A68114: 00e10491  add x0, x8, #0x138
0x06A68118: 080c40a9  ldp x8, x3, [x0]
0x06A6811C: e00318aa  mov x0, x24
0x06A68120: e10319aa  mov x1, x25
0x06A68124: e203142a  mov w2, w20
0x06A68128: 00013fd6  blr x8
0x06A6812C: c00640ad  ldp q0, q1, [x22]
0x06A68130: f80300aa  mov x24, x0
0x06A68134: e0030091  mov x0, sp
0x06A68138: e10318aa  mov x1, x24
0x06A6813C: e20313aa  mov x2, x19
0x06A68140: e3031faa  mov x3, xzr
0x06A68144: e00700ad  stp q0, q1, [sp]
0x06A68148: 46c30094  bl #0x6a98e60
0x06A6814C: b30800b4  cbz x19, #0x6a68260
0x06A68150: 286600f0  adrp x8, #0x772f000
0x06A68154: 086d42f9  ldr x8, [x8, #0x4d8]
0x06A68158: e00313aa  mov x0, x19
0x06A6815C: 010140f9  ldr x1, [x8]
0x06A68160: 03cc4697  bl #0x3c1b16c
0x06A68164: e00700b4  cbz x0, #0x6a68260
0x06A68168: 48660090  adrp x8, #0x7730000
0x06A6816C: 087546f9  ldr x8, [x8, #0xce8]
0x06A68170: 5a660090  adrp x26, #0x7730000
0x06A68174: 5b660090  adrp x27, #0x7730000
0x06A68178: e10317aa  mov x1, x23
0x06A6817C: 020140f9  ldr x2, [x8]
0x06A68180: 5a3746f9  ldr x26, [x26, #0xc68]
0x06A68184: 7b7346f9  ldr x27, [x27, #0xce0]
0x06A68188: f90300aa  mov x25, x0
0x06A6818C: 5b765797  bl #0x4045af8
0x06A68190: 420340f9  ldr x2, [x26]
0x06A68194: e00319aa  mov x0, x25
0x06A68198: e10313aa  mov x1, x19
0x06A6819C: 15824d97  bl #0x3dc89f0
0x06A681A0: 600340f9  ldr x0, [x27]
0x06A681A4: d60a40f9  ldr x22, [x22, #0x10]
0x06A681A8: be621c97  bl #0x3180ca0
0x06A681AC: e1031faa  mov x1, xzr
0x06A681B0: f70300aa  mov x23, x0
0x06A681B4: fbc80094  bl #0x6a9a5a0
0x06A681B8: 570500b4  cbz x23, #0x6a68260
0x06A681BC: d9620090  adrp x25, #0x76c0000
0x06A681C0: 3a5f00f0  adrp x26, #0x764f000
0x06A681C4: 396747f9  ldr x25, [x25, #0xec8]
0x06A681C8: 5aaf40f9  ldr x26, [x26, #0x158]
0x06A681CC: e00317aa  mov x0, x23
0x06A681D0: 130c01f8  str x19, [x0, #0x10]!
0x06A681D4: e10313aa  mov x1, x19
0x06A681D8: fb611c97  bl #0x31809c4
0x06A681DC: e00317aa  mov x0, x23
0x06A681E0: 188c01f8  str x24, [x0, #0x18]!
0x06A681E4: e10318aa  mov x1, x24
0x06A681E8: f7611c97  bl #0x31809c4
0x06A681EC: 210340f9  ldr x1, [x25]
0x06A681F0: e00313aa  mov x0, x19
0x06A681F4: 27cb4697  bl #0x3c1ae90
0x06A681F8: e0520429  stp w0, w20, [x23, #0x20]
0x06A681FC: 420340f9  ldr x2, [x26]
0x06A68200: a11a40f9  ldr x1, [x21, #0x30]
0x06A68204: e00313aa  mov x0, x19
0x06A68208: e5031faa  mov x5, xzr
0x06A6820C: e30302aa  mov x3, x2
0x06A68210: e40302aa  mov x4, x2
0x06A68214: c8eb0094  bl #0x6aa3134
0x06A68218: e10300aa  mov x1, x0
0x06A6821C: e00317aa  mov x0, x23
0x06A68220: 018c02f8  str x1, [x0, #0x28]!
0x06A68224: e8611c97  bl #0x31809c4
0x06A68228: d60100b4  cbz x22, #0x6a68260
0x06A6822C: 48660090  adrp x8, #0x7730000
0x06A68230: 087946f9  ldr x8, [x8, #0xcf0]
0x06A68234: e00316aa  mov x0, x22
0x06A68238: e10317aa  mov x1, x23
0x06A6823C: 020140f9  ldr x2, [x8]
0x06A68240: 696c4d97  bl #0x3dc33e4
0x06A68244: f44f46a9  ldp x20, x19, [sp, #0x60]
0x06A68248: f65745a9  ldp x22, x21, [sp, #0x50]
0x06A6824C: f85f44a9  ldp x24, x23, [sp, #0x40]
0x06A68250: fa6743a9  ldp x26, x25, [sp, #0x30]
0x06A68254: fe6f42a9  ldp x30, x27, [sp, #0x20]
0x06A68258: ffc30191  add sp, sp, #0x70
0x06A6825C: c0035fd6  ret
0x06A68260: 93621c97  bl #0x3180cac

; RVA 0x6A68264 | private FeedingCombinationConsumedItemSnapshot FindConsumedItemSnapshot(Entity feedingEntity, string itemId) { }
; bytes=268 sha256=fe60c3e19b90e02c5bc2d0c832efbee54c4b906fb84efbcd332a546ed6006d35 status=arm64_complete_bound indexed_start=True
0x06A68264: fe0f1df8  str x30, [sp, #-0x30]!
0x06A68268: f65701a9  stp x22, x21, [sp, #0x10]
0x06A6826C: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A68270: 159600d0  adrp x21, #0x7d2a000
0x06A68274: 56660090  adrp x22, #0x7730000
0x06A68278: a8be5a39  ldrb w8, [x21, #0x6af]
0x06A6827C: d67e46f9  ldr x22, [x22, #0xcf8]
0x06A68280: f40302aa  mov x20, x2
0x06A68284: f30301aa  mov x19, x1
0x06A68288: 48020037  tbnz w8, #0, #0x6a682d0
0x06A6828C: 206600f0  adrp x0, #0x772f000
0x06A68290: 006c42f9  ldr x0, [x0, #0x4d8]
0x06A68294: e1611c97  bl #0x3180a18
0x06A68298: 40660090  adrp x0, #0x7730000
0x06A6829C: 008046f9  ldr x0, [x0, #0xd00]
0x06A682A0: de611c97  bl #0x3180a18
0x06A682A4: 40660090  adrp x0, #0x7730000
0x06A682A8: 008446f9  ldr x0, [x0, #0xd08]
0x06A682AC: db611c97  bl #0x3180a18
0x06A682B0: 40660090  adrp x0, #0x7730000
0x06A682B4: 008846f9  ldr x0, [x0, #0xd10]
0x06A682B8: d8611c97  bl #0x3180a18
0x06A682BC: 40660090  adrp x0, #0x7730000
0x06A682C0: 007c46f9  ldr x0, [x0, #0xcf8]
0x06A682C4: d5611c97  bl #0x3180a18
0x06A682C8: 28008052  movz w8, #0x1
0x06A682CC: a8be1a39  strb w8, [x21, #0x6af]
0x06A682D0: c00240f9  ldr x0, [x22]
0x06A682D4: 73621c97  bl #0x3180ca0
0x06A682D8: e1031faa  mov x1, xzr
0x06A682DC: f50300aa  mov x21, x0
0x06A682E0: c7c8b197  bl #0x56da5fc
0x06A682E4: 550400b4  cbz x21, #0x6a6836c
0x06A682E8: e00315aa  mov x0, x21
0x06A682EC: 140c01f8  str x20, [x0, #0x10]!
0x06A682F0: e10314aa  mov x1, x20
0x06A682F4: b4611c97  bl #0x31809c4
0x06A682F8: b30300b4  cbz x19, #0x6a6836c
0x06A682FC: 286600f0  adrp x8, #0x772f000
0x06A68300: 086d42f9  ldr x8, [x8, #0x4d8]
0x06A68304: 54660090  adrp x20, #0x7730000
0x06A68308: 56660090  adrp x22, #0x7730000
0x06A6830C: e00313aa  mov x0, x19
0x06A68310: 010140f9  ldr x1, [x8]
0x06A68314: 948646f9  ldr x20, [x20, #0xd08]
0x06A68318: d68a46f9  ldr x22, [x22, #0xd10]
0x06A6831C: 94cb4697  bl #0x3c1b16c
0x06A68320: 880240f9  ldr x8, [x20]
0x06A68324: f30300aa  mov x19, x0
0x06A68328: e00308aa  mov x0, x8
0x06A6832C: 5d621c97  bl #0x3180ca0
0x06A68330: c20240f9  ldr x2, [x22]
0x06A68334: e10315aa  mov x1, x21
0x06A68338: e3031faa  mov x3, xzr
0x06A6833C: f40300aa  mov x20, x0
0x06A68340: 87d66397  bl #0x435dd5c
0x06A68344: 530100b4  cbz x19, #0x6a6836c
0x06A68348: 48660090  adrp x8, #0x7730000
0x06A6834C: 088146f9  ldr x8, [x8, #0xd00]
0x06A68350: e00313aa  mov x0, x19
0x06A68354: e10314aa  mov x1, x20
0x06A68358: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A6835C: 020140f9  ldr x2, [x8]
0x06A68360: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A68364: fe0743f8  ldr x30, [sp], #0x30
0x06A68368: f4715717  b #0x4044b38
0x06A6836C: 50621c97  bl #0x3180cac

; RVA 0x6A68378 | public void .ctor() { }
; bytes=8 sha256=3fba0e921e12e42c1c42e4f306c7e9a547e8543992f2c45655b5c09c6f55e1b5 status=arm64_complete_bound indexed_start=True
0x06A68378: e1031faa  mov x1, xzr
0x06A6837C: a0c8b117  b #0x56da5fc

