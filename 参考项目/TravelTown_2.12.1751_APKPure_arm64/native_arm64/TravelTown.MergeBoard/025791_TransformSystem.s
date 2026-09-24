; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25791 Merger.MergeBoard.Systems.TransformSystem
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A798D8 | public void Tick(TickContext context) { }
; bytes=916 sha256=716ba0050dde4f3488e3a32a00545206e3f0a9eb6f267f92b8a99cb36b7dd8b6 status=arm64_complete_bound indexed_start=True
0x06A798D8: ffc307d1  sub sp, sp, #0x1f0
0x06A798DC: fd7b1aa9  stp x29, x30, [sp, #0x1a0]
0x06A798E0: fa671ba9  stp x26, x25, [sp, #0x1b0]
0x06A798E4: f85f1ca9  stp x24, x23, [sp, #0x1c0]
0x06A798E8: f6571da9  stp x22, x21, [sp, #0x1d0]
0x06A798EC: f44f1ea9  stp x20, x19, [sp, #0x1e0]
0x06A798F0: 999500b0  adrp x25, #0x7d2a000
0x06A798F4: d8650090  adrp x24, #0x7731000
0x06A798F8: d7650090  adrp x23, #0x7731000
0x06A798FC: d6650090  adrp x22, #0x7731000
0x06A79900: d5650090  adrp x21, #0x7731000
0x06A79904: 287b5c39  ldrb w8, [x25, #0x71e]
0x06A79908: 18eb43f9  ldr x24, [x24, #0x7d0]
0x06A7990C: f7ee43f9  ldr x23, [x23, #0x7d8]
0x06A79910: d6f243f9  ldr x22, [x22, #0x7e0]
0x06A79914: b5f643f9  ldr x21, [x21, #0x7e8]
0x06A79918: f30301aa  mov x19, x1
0x06A7991C: f40300aa  mov x20, x0
0x06A79920: a8050037  tbnz w8, #0, #0x6a799d4
0x06A79924: a06500d0  adrp x0, #0x772f000
0x06A79928: 002447f9  ldr x0, [x0, #0xe48]
0x06A7992C: 3b1c1c97  bl #0x3180a18
0x06A79930: c0650090  adrp x0, #0x7731000
0x06A79934: 00e843f9  ldr x0, [x0, #0x7d0]
0x06A79938: 381c1c97  bl #0x3180a18
0x06A7993C: c0650090  adrp x0, #0x7731000
0x06A79940: 00f843f9  ldr x0, [x0, #0x7f0]
0x06A79944: 351c1c97  bl #0x3180a18
0x06A79948: c0650090  adrp x0, #0x7731000
0x06A7994C: 00f443f9  ldr x0, [x0, #0x7e8]
0x06A79950: 321c1c97  bl #0x3180a18
0x06A79954: c0650090  adrp x0, #0x7731000
0x06A79958: 00fc43f9  ldr x0, [x0, #0x7f8]
0x06A7995C: 2f1c1c97  bl #0x3180a18
0x06A79960: a06500d0  adrp x0, #0x772f000
0x06A79964: 003447f9  ldr x0, [x0, #0xe68]
0x06A79968: 2c1c1c97  bl #0x3180a18
0x06A7996C: c0650090  adrp x0, #0x7731000
0x06A79970: 000044f9  ldr x0, [x0, #0x800]
0x06A79974: 291c1c97  bl #0x3180a18
0x06A79978: c0650090  adrp x0, #0x7731000
0x06A7997C: 00f043f9  ldr x0, [x0, #0x7e0]
0x06A79980: 261c1c97  bl #0x3180a18
0x06A79984: c0650090  adrp x0, #0x7731000
0x06A79988: 000444f9  ldr x0, [x0, #0x808]
0x06A7998C: 231c1c97  bl #0x3180a18
0x06A79990: c0650090  adrp x0, #0x7731000
0x06A79994: 000844f9  ldr x0, [x0, #0x810]
0x06A79998: 201c1c97  bl #0x3180a18
0x06A7999C: c0650090  adrp x0, #0x7731000
0x06A799A0: 00ec43f9  ldr x0, [x0, #0x7d8]
0x06A799A4: 1d1c1c97  bl #0x3180a18
0x06A799A8: c0650090  adrp x0, #0x7731000
0x06A799AC: 000c44f9  ldr x0, [x0, #0x818]
0x06A799B0: 1a1c1c97  bl #0x3180a18
0x06A799B4: c0650090  adrp x0, #0x7731000
0x06A799B8: 001044f9  ldr x0, [x0, #0x820]
0x06A799BC: 171c1c97  bl #0x3180a18
0x06A799C0: c0650090  adrp x0, #0x7731000
0x06A799C4: 001444f9  ldr x0, [x0, #0x828]
0x06A799C8: 141c1c97  bl #0x3180a18
0x06A799CC: 28008052  movz w8, #0x1
0x06A799D0: 287b1c39  strb w8, [x25, #0x71e]
0x06A799D4: 02e4006f  movi v2.2d, #0000000000000000
0x06A799D8: e20b0bad  stp q2, q2, [sp, #0x160]
0x06A799DC: e28b08ad  stp q2, q2, [sp, #0x110]
0x06A799E0: e28b07ad  stp q2, q2, [sp, #0xf0]
0x06A799E4: 610240ad  ldp q1, q0, [x19]
0x06A799E8: 000340f9  ldr x0, [x24]
0x06A799EC: e08b06ad  stp q0, q2, [sp, #0xd0]
0x06A799F0: e133803d  str q1, [sp, #0xc0]
0x06A799F4: 98824697  bl #0x3c1a454
0x06A799F8: e00746ad  ldp q0, q1, [sp, #0xc0]
0x06A799FC: e30240f9  ldr x3, [x23]
0x06A79A00: e10300aa  mov x1, x0
0x06A79A04: e8830591  add x8, sp, #0x160
0x06A79A08: e0c30491  add x0, sp, #0x130
0x06A79A0C: e2031faa  mov x2, xzr
0x06A79A10: e08709ad  stp q0, q1, [sp, #0x130]
0x06A79A14: 84af4b97  bl #0x3d65824
0x06A79A18: c10240f9  ldr x1, [x22]
0x06A79A1C: e0830591  add x0, sp, #0x160
0x06A79A20: 4c536497  bl #0x438e750
0x06A79A24: a10240f9  ldr x1, [x21]
0x06A79A28: d0854797  bl #0x3c5b168
0x06A79A2C: e01100b4  cbz x0, #0x6a79c68
0x06A79A30: 080c40f9  ldr x8, [x0, #0x18]
0x06A79A34: f50300aa  mov x21, x0
0x06A79A38: 1f050071  cmp w8, #1
0x06A79A3C: 0b030054  b.lt #0x6a79a9c
0x06A79A40: f6031faa  mov x22, xzr
0x06A79A44: 087d4092  and x8, x8, #0xffffffff
0x06A79A48: b7620191  add x23, x21, #0x58
0x06A79A4C: df4228eb  cmp x22, w8, uxtw
0x06A79A50: a2100054  b.hs #0x6a79c64
0x06A79A54: e2027fad  ldp q2, q0, [x23, #-0x20]
0x06A79A58: e102dd3c  ldur q1, [x23, #-0x30]
0x06A79A5C: e3825cf8  ldur x3, [x23, #-0x38]
0x06A79A60: e40644b8  ldr w4, [x23], #0x40
0x06A79A64: e2030aad  stp q2, q0, [sp, #0x140]
0x06A79A68: e14f803d  str q1, [sp, #0x130]
0x06A79A6C: 640e40ad  ldp q4, q3, [x19]
0x06A79A70: e1830291  add x1, sp, #0xa0
0x06A79A74: e2c30191  add x2, sp, #0x70
0x06A79A78: e00314aa  mov x0, x20
0x06A79A7C: e18b03ad  stp q1, q2, [sp, #0x70]
0x06A79A80: e40f05ad  stp q4, q3, [sp, #0xa0]
0x06A79A84: e027803d  str q0, [sp, #0x90]
0x06A79A88: 79000094  bl #0x6a79c6c
0x06A79A8C: a81a40b9  ldr w8, [x21, #0x18]
0x06A79A90: d6060091  add x22, x22, #1
0x06A79A94: dfc228eb  cmp x22, w8, sxtw
0x06A79A98: abfdff54  b.lt #0x6a79a4c
0x06A79A9C: c8650090  adrp x8, #0x7731000
0x06A79AA0: 08f943f9  ldr x8, [x8, #0x7f0]
0x06A79AA4: b56500d0  adrp x21, #0x772f000
0x06A79AA8: b66500d0  adrp x22, #0x772f000
0x06A79AAC: d8650090  adrp x24, #0x7731000
0x06A79AB0: b53647f9  ldr x21, [x21, #0xe68]
0x06A79AB4: d62647f9  ldr x22, [x22, #0xe48]
0x06A79AB8: 600640ad  ldp q0, q1, [x19]
0x06A79ABC: 180f44f9  ldr x24, [x24, #0x818]
0x06A79AC0: 000140f9  ldr x0, [x8]
0x06A79AC4: d7650090  adrp x23, #0x7731000
0x06A79AC8: f71644f9  ldr x23, [x23, #0x828]
0x06A79ACC: e08702ad  stp q0, q1, [sp, #0x50]
0x06A79AD0: c7834697  bl #0x3c1a9ec
0x06A79AD4: a80240f9  ldr x8, [x21]
0x06A79AD8: f50300aa  mov x21, x0
0x06A79ADC: e00308aa  mov x0, x8
0x06A79AE0: 701c1c97  bl #0x3180ca0
0x06A79AE4: c20240f9  ldr x2, [x22]
0x06A79AE8: e1031faa  mov x1, xzr
0x06A79AEC: e3031faa  mov x3, xzr
0x06A79AF0: f60300aa  mov x22, x0
0x06A79AF4: 8570d297  bl #0x5f15d08
0x06A79AF8: e08742ad  ldp q0, q1, [sp, #0x50]
0x06A79AFC: 030340f9  ldr x3, [x24]
0x06A79B00: e8430491  add x8, sp, #0x110
0x06A79B04: e0030691  add x0, sp, #0x180
0x06A79B08: e10315aa  mov x1, x21
0x06A79B0C: e20316aa  mov x2, x22
0x06A79B10: e0070cad  stp q0, q1, [sp, #0x180]
0x06A79B14: c4b14b97  bl #0x3d66224
0x06A79B18: e00240f9  ldr x0, [x23]
0x06A79B1C: 08e040b9  ldr w8, [x0, #0xe0]
0x06A79B20: 68000035  cbnz w8, #0x6a79b2c
0x06A79B24: 1a1c1c97  bl #0x3180b8c
0x06A79B28: e00240f9  ldr x0, [x23]
0x06A79B2C: 085c40f9  ldr x8, [x0, #0xb8]
0x06A79B30: da650090  adrp x26, #0x7731000
0x06A79B34: d9650090  adrp x25, #0x7731000
0x06A79B38: d8650090  adrp x24, #0x7731000
0x06A79B3C: 150540f9  ldr x21, [x8, #8]
0x06A79B40: 5a0b44f9  ldr x26, [x26, #0x810]
0x06A79B44: 390744f9  ldr x25, [x25, #0x808]
0x06A79B48: 18ff43f9  ldr x24, [x24, #0x7f8]
0x06A79B4C: f50200b5  cbnz x21, #0x6a79ba8
0x06A79B50: 08e040b9  ldr w8, [x0, #0xe0]
0x06A79B54: 68000035  cbnz w8, #0x6a79b60
0x06A79B58: 0d1c1c97  bl #0x3180b8c
0x06A79B5C: e00240f9  ldr x0, [x23]
0x06A79B60: c9650090  adrp x9, #0x7731000
0x06A79B64: 085c40f9  ldr x8, [x0, #0xb8]
0x06A79B68: 290144f9  ldr x9, [x9, #0x800]
0x06A79B6C: 160140f9  ldr x22, [x8]
0x06A79B70: 200140f9  ldr x0, [x9]
0x06A79B74: 4b1c1c97  bl #0x3180ca0
0x06A79B78: c8650090  adrp x8, #0x7731000
0x06A79B7C: 081144f9  ldr x8, [x8, #0x820]
0x06A79B80: e10316aa  mov x1, x22
0x06A79B84: e3031faa  mov x3, xzr
0x06A79B88: f50300aa  mov x21, x0
0x06A79B8C: 020140f9  ldr x2, [x8]
0x06A79B90: f25f9f97  bl #0x5251b58
0x06A79B94: e80240f9  ldr x8, [x23]
0x06A79B98: e10315aa  mov x1, x21
0x06A79B9C: 005d40f9  ldr x0, [x8, #0xb8]
0x06A79BA0: 158c00f8  str x21, [x0, #8]!
0x06A79BA4: 881b1c97  bl #0x31809c4
0x06A79BA8: 420340f9  ldr x2, [x26]
0x06A79BAC: e8030691  add x8, sp, #0x180
0x06A79BB0: e0430491  add x0, sp, #0x110
0x06A79BB4: e10315aa  mov x1, x21
0x06A79BB8: 966c6497  bl #0x4394e10
0x06A79BBC: e0074cad  ldp q0, q1, [sp, #0x180]
0x06A79BC0: 210340f9  ldr x1, [x25]
0x06A79BC4: e0430491  add x0, sp, #0x110
0x06A79BC8: e08708ad  stp q0, q1, [sp, #0x110]
0x06A79BCC: a76c6497  bl #0x4394e68
0x06A79BD0: 010340f9  ldr x1, [x24]
0x06A79BD4: 53864797  bl #0x3c5b520
0x06A79BD8: 800400b4  cbz x0, #0x6a79c68
0x06A79BDC: 080c40f9  ldr x8, [x0, #0x18]
0x06A79BE0: f50300aa  mov x21, x0
0x06A79BE4: 1f050071  cmp w8, #1
0x06A79BE8: 0b030054  b.lt #0x6a79c48
0x06A79BEC: f6031faa  mov x22, xzr
0x06A79BF0: 087d4092  and x8, x8, #0xffffffff
0x06A79BF4: b7620191  add x23, x21, #0x58
0x06A79BF8: df4228eb  cmp x22, w8, uxtw
0x06A79BFC: 42030054  b.hs #0x6a79c64
0x06A79C00: e2027fad  ldp q2, q0, [x23, #-0x20]
0x06A79C04: e102dd3c  ldur q1, [x23, #-0x30]
0x06A79C08: e3825cf8  ldur x3, [x23, #-0x38]
0x06A79C0C: e40648b8  ldr w4, [x23], #0x80
0x06A79C10: e28307ad  stp q2, q0, [sp, #0xf0]
0x06A79C14: e13b803d  str q1, [sp, #0xe0]
0x06A79C18: 640e40ad  ldp q4, q3, [x19]
0x06A79C1C: e1c30091  add x1, sp, #0x30
0x06A79C20: e2030091  mov x2, sp
0x06A79C24: e00314aa  mov x0, x20
0x06A79C28: e10b00ad  stp q1, q2, [sp]
0x06A79C2C: e48f01ad  stp q4, q3, [sp, #0x30]
0x06A79C30: e00b803d  str q0, [sp, #0x20]
0x06A79C34: 0c010094  bl #0x6a7a064
0x06A79C38: a81a40b9  ldr w8, [x21, #0x18]
0x06A79C3C: d6060091  add x22, x22, #1
0x06A79C40: dfc228eb  cmp x22, w8, sxtw
0x06A79C44: abfdff54  b.lt #0x6a79bf8
0x06A79C48: f44f5ea9  ldp x20, x19, [sp, #0x1e0]
0x06A79C4C: f6575da9  ldp x22, x21, [sp, #0x1d0]
0x06A79C50: f85f5ca9  ldp x24, x23, [sp, #0x1c0]
0x06A79C54: fa675ba9  ldp x26, x25, [sp, #0x1b0]
0x06A79C58: fd7b5aa9  ldp x29, x30, [sp, #0x1a0]
0x06A79C5C: ffc30791  add sp, sp, #0x1f0
0x06A79C60: c0035fd6  ret
0x06A79C64: 141c1c97  bl #0x3180cb4
0x06A79C68: 111c1c97  bl #0x3180cac

; RVA 0x6A79C6C | private void HandleTransformByInteract(TickContext context, ExpendableComponent expendableComponent, Entity entity, BoardTilePositionComponent positionComponent) { }
; bytes=1016 sha256=20aaf7467c3eab1956b8fc5beb407d3e8949ec2ee7334278aa2cbd734f97bda4 status=arm64_complete_bound indexed_start=True
0x06A79C6C: fd0f1af8  str x29, [sp, #-0x60]!
0x06A79C70: fe6f01a9  stp x30, x27, [sp, #0x10]
0x06A79C74: fa6702a9  stp x26, x25, [sp, #0x20]
0x06A79C78: f85f03a9  stp x24, x23, [sp, #0x30]
0x06A79C7C: f65704a9  stp x22, x21, [sp, #0x40]
0x06A79C80: f44f05a9  stp x20, x19, [sp, #0x50]
0x06A79C84: ff8307d1  sub sp, sp, #0x1e0
0x06A79C88: 989500b0  adrp x24, #0x7d2a000
0x06A79C8C: 087f5c39  ldrb w8, [x24, #0x71f]
0x06A79C90: f30304aa  mov x19, x4
0x06A79C94: f40303aa  mov x20, x3
0x06A79C98: f50302aa  mov x21, x2
0x06A79C9C: f70301aa  mov x23, x1
0x06A79CA0: f60300aa  mov x22, x0
0x06A79CA4: 08030037  tbnz w8, #0, #0x6a79d04
0x06A79CA8: a06500f0  adrp x0, #0x7730000
0x06A79CAC: 008045f9  ldr x0, [x0, #0xb00]
0x06A79CB0: 5a1b1c97  bl #0x3180a18
0x06A79CB4: a0620090  adrp x0, #0x76cd000
0x06A79CB8: 00cc44f9  ldr x0, [x0, #0x998]
0x06A79CBC: 571b1c97  bl #0x3180a18
0x06A79CC0: a06400f0  adrp x0, #0x7710000
0x06A79CC4: 00d841f9  ldr x0, [x0, #0x3b0]
0x06A79CC8: 541b1c97  bl #0x3180a18
0x06A79CCC: a0620090  adrp x0, #0x76cd000
0x06A79CD0: 00d444f9  ldr x0, [x0, #0x9a8]
0x06A79CD4: 511b1c97  bl #0x3180a18
0x06A79CD8: c0650090  adrp x0, #0x7731000
0x06A79CDC: 001844f9  ldr x0, [x0, #0x830]
0x06A79CE0: 4e1b1c97  bl #0x3180a18
0x06A79CE4: c0650090  adrp x0, #0x7731000
0x06A79CE8: 001444f9  ldr x0, [x0, #0x828]
0x06A79CEC: 4b1b1c97  bl #0x3180a18
0x06A79CF0: 206000b0  adrp x0, #0x767e000
0x06A79CF4: 00ac44f9  ldr x0, [x0, #0x958]
0x06A79CF8: 481b1c97  bl #0x3180a18
0x06A79CFC: 28008052  movz w8, #0x1
0x06A79D00: 087f1c39  strb w8, [x24, #0x71f]
0x06A79D04: a80240b9  ldr w8, [x21]
0x06A79D08: 1f010071  cmp w8, #0
0x06A79D0C: ac190054  b.gt #0x6a7a040
0x06A79D10: a80640b9  ldr w8, [x21, #4]
0x06A79D14: a8000035  cbnz w8, #0x6a79d28
0x06A79D18: e00315aa  mov x0, x21
0x06A79D1C: e1031faa  mov x1, xzr
0x06A79D20: 75750094  bl #0x6a972f4
0x06A79D24: e0180037  tbnz w0, #0, #0x6a7a040
0x06A79D28: b80a40f9  ldr x24, [x21, #0x10]
0x06A79D2C: 380a00b4  cbz x24, #0x6a79e70
0x06A79D30: a83a4039  ldrb w8, [x21, #0xe]
0x06A79D34: 68050034  cbz w8, #0x6a79de0
0x06A79D38: db650090  adrp x27, #0x7731000
0x06A79D3C: 7b1744f9  ldr x27, [x27, #0x828]
0x06A79D40: 600340f9  ldr x0, [x27]
0x06A79D44: 08e040b9  ldr w8, [x0, #0xe0]
0x06A79D48: 68000035  cbnz w8, #0x6a79d54
0x06A79D4C: 901b1c97  bl #0x3180b8c
0x06A79D50: 600340f9  ldr x0, [x27]
0x06A79D54: 085c40f9  ldr x8, [x0, #0xb8]
0x06A79D58: 190940f9  ldr x25, [x8, #0x10]
0x06A79D5C: f90200b5  cbnz x25, #0x6a79db8
0x06A79D60: 08e040b9  ldr w8, [x0, #0xe0]
0x06A79D64: 68000035  cbnz w8, #0x6a79d70
0x06A79D68: 891b1c97  bl #0x3180b8c
0x06A79D6C: 600340f9  ldr x0, [x27]
0x06A79D70: a9620090  adrp x9, #0x76cd000
0x06A79D74: 085c40f9  ldr x8, [x0, #0xb8]
0x06A79D78: 29d544f9  ldr x9, [x9, #0x9a8]
0x06A79D7C: 1a0140f9  ldr x26, [x8]
0x06A79D80: 200140f9  ldr x0, [x9]
0x06A79D84: c71b1c97  bl #0x3180ca0
0x06A79D88: c8650090  adrp x8, #0x7731000
0x06A79D8C: 081944f9  ldr x8, [x8, #0x830]
0x06A79D90: e1031aaa  mov x1, x26
0x06A79D94: e3031faa  mov x3, xzr
0x06A79D98: f90300aa  mov x25, x0
0x06A79D9C: 020140f9  ldr x2, [x8]
0x06A79DA0: ef8f6397  bl #0x435dd5c
0x06A79DA4: 680340f9  ldr x8, [x27]
0x06A79DA8: e10319aa  mov x1, x25
0x06A79DAC: 005d40f9  ldr x0, [x8, #0xb8]
0x06A79DB0: 190c01f8  str x25, [x0, #0x10]!
0x06A79DB4: 041b1c97  bl #0x31809c4
0x06A79DB8: a8620090  adrp x8, #0x76cd000
0x06A79DBC: 08cd44f9  ldr x8, [x8, #0x998]
0x06A79DC0: e00318aa  mov x0, x24
0x06A79DC4: e10319aa  mov x1, x25
0x06A79DC8: 020140f9  ldr x2, [x8]
0x06A79DCC: 852b5797  bl #0x4044be0
0x06A79DD0: 801400b4  cbz x0, #0x6a7a060
0x06A79DD4: 081840b9  ldr w8, [x0, #0x18]
0x06A79DD8: 1f010071  cmp w8, #0
0x06A79DDC: ad040054  b.le #0x6a79e70
0x06A79DE0: e10240ad  ldp q1, q0, [x23]
0x06A79DE4: d81640f9  ldr x24, [x22, #0x28]
0x06A79DE8: e18307ad  stp q1, q0, [sp, #0xf0]
0x06A79DEC: a18240ad  ldp q1, q0, [x21, #0x10]
0x06A79DF0: a202c03d  ldr q2, [x21]
0x06A79DF4: d90e40f9  ldr x25, [x22, #0x18]
0x06A79DF8: e1830bad  stp q1, q0, [sp, #0x170]
0x06A79DFC: e25b803d  str q2, [sp, #0x160]
0x06A79E00: 181300b4  cbz x24, #0x6a7a060
0x06A79E04: e08747ad  ldp q0, q1, [sp, #0xf0]
0x06A79E08: e20f4bad  ldp q2, q3, [sp, #0x160]
0x06A79E0C: e463c03d  ldr q4, [sp, #0x180]
0x06A79E10: bb6500f0  adrp x27, #0x7730000
0x06A79E14: e08706ad  stp q0, q1, [sp, #0xd0]
0x06A79E18: e20f05ad  stp q2, q3, [sp, #0xa0]
0x06A79E1C: e433803d  str q4, [sp, #0xc0]
0x06A79E20: 080340f9  ldr x8, [x24]
0x06A79E24: 7b8345f9  ldr x27, [x27, #0xb00]
0x06A79E28: 2a6000b0  adrp x10, #0x767e000
0x06A79E2C: 610340f9  ldr x1, [x27]
0x06A79E30: 4aad44f9  ldr x10, [x10, #0x958]
0x06A79E34: 095d4279  ldrh w9, [x8, #0x12e]
0x06A79E38: 5a0140f9  ldr x26, [x10]
0x06A79E3C: 290100b4  cbz x9, #0x6a79e60
0x06A79E40: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A79E44: 4a210091  add x10, x10, #8
0x06A79E48: 4b815ff8  ldur x11, [x10, #-8]
0x06A79E4C: 7f0101eb  cmp x11, x1
0x06A79E50: c0060054  b.eq #0x6a79f28
0x06A79E54: 290500f1  subs x9, x9, #1
0x06A79E58: 4a410091  add x10, x10, #0x10
0x06A79E5C: 61ffff54  b.ne #0x6a79e48
0x06A79E60: 22008052  movz w2, #0x1
0x06A79E64: e00318aa  mov x0, x24
0x06A79E68: 2a731b97  bl #0x3156b10
0x06A79E6C: 33000014  b #0x6a79f38
0x06A79E70: e10240ad  ldp q1, q0, [x23]
0x06A79E74: e1830cad  stp q1, q0, [sp, #0x190]
0x06A79E78: a28240ad  ldp q2, q0, [x21, #0x10]
0x06A79E7C: a102c03d  ldr q1, [x21]
0x06A79E80: d50e40f9  ldr x21, [x22, #0x18]
0x06A79E84: d65e42a9  ldp x22, x23, [x22, #0x20]
0x06A79E88: e2830bad  stp q2, q0, [sp, #0x170]
0x06A79E8C: e15b803d  str q1, [sp, #0x160]
0x06A79E90: 970e00b4  cbz x23, #0x6a7a060
0x06A79E94: e0874cad  ldp q0, q1, [sp, #0x190]
0x06A79E98: e20f4bad  ldp q2, q3, [sp, #0x160]
0x06A79E9C: e463c03d  ldr q4, [sp, #0x180]
0x06A79EA0: aa6500f0  adrp x10, #0x7730000
0x06A79EA4: e0070aad  stp q0, q1, [sp, #0x140]
0x06A79EA8: e28f08ad  stp q2, q3, [sp, #0x110]
0x06A79EAC: e44f803d  str q4, [sp, #0x130]
0x06A79EB0: e80240f9  ldr x8, [x23]
0x06A79EB4: 4a8145f9  ldr x10, [x10, #0xb00]
0x06A79EB8: 095d4279  ldrh w9, [x8, #0x12e]
0x06A79EBC: 410140f9  ldr x1, [x10]
0x06A79EC0: 290100b4  cbz x9, #0x6a79ee4
0x06A79EC4: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A79EC8: 4a210091  add x10, x10, #8
0x06A79ECC: 4b815ff8  ldur x11, [x10, #-8]
0x06A79ED0: 7f0101eb  cmp x11, x1
0x06A79ED4: 00010054  b.eq #0x6a79ef4
0x06A79ED8: 290500f1  subs x9, x9, #1
0x06A79EDC: 4a410091  add x10, x10, #0x10
0x06A79EE0: 61ffff54  b.ne #0x6a79ecc
0x06A79EE4: e00317aa  mov x0, x23
0x06A79EE8: e2031f2a  mov w2, wzr
0x06A79EEC: 09731b97  bl #0x3156b10
0x06A79EF0: 04000014  b #0x6a79f00
0x06A79EF4: 490180b9  ldrsw x9, [x10]
0x06A79EF8: 0811098b  add x8, x8, x9, lsl #4
0x06A79EFC: 00e10491  add x0, x8, #0x138
0x06A79F00: e0074aad  ldp q0, q1, [sp, #0x140]
0x06A79F04: e28f48ad  ldp q2, q3, [sp, #0x110]
0x06A79F08: e44fc03d  ldr q4, [sp, #0x130]
0x06A79F0C: 080040f9  ldr x8, [x0]
0x06A79F10: e08702ad  stp q0, q1, [sp, #0x50]
0x06A79F14: e28f0dad  stp q2, q3, [sp, #0x1b0]
0x06A79F18: e477803d  str q4, [sp, #0x1d0]
0x06A79F1C: 070440f9  ldr x7, [x0, #8]
0x06A79F20: e2430191  add x2, sp, #0x50
0x06A79F24: 40000014  b #0x6a7a024
0x06A79F28: 490140b9  ldr w9, [x10]
0x06A79F2C: 29050011  add w9, w9, #1
0x06A79F30: 08d1298b  add x8, x8, w9, sxtw #4
0x06A79F34: 00e10491  add x0, x8, #0x138
0x06A79F38: e08746ad  ldp q0, q1, [sp, #0xd0]
0x06A79F3C: e20f45ad  ldp q2, q3, [sp, #0xa0]
0x06A79F40: e433c03d  ldr q4, [sp, #0xc0]
0x06A79F44: 080040f9  ldr x8, [x0]
0x06A79F48: e08702ad  stp q0, q1, [sp, #0x50]
0x06A79F4C: e28f0dad  stp q2, q3, [sp, #0x1b0]
0x06A79F50: e477803d  str q4, [sp, #0x1d0]
0x06A79F54: 070440f9  ldr x7, [x0, #8]
0x06A79F58: e2430191  add x2, sp, #0x50
0x06A79F5C: e4c30691  add x4, sp, #0x1b0
0x06A79F60: e00318aa  mov x0, x24
0x06A79F64: e10314aa  mov x1, x20
0x06A79F68: e30319aa  mov x3, x25
0x06A79F6C: e503132a  mov w5, w19
0x06A79F70: e6031aaa  mov x6, x26
0x06A79F74: 00013fd6  blr x8
0x06A79F78: e10240ad  ldp q1, q0, [x23]
0x06A79F7C: e10304ad  stp q1, q0, [sp, #0x80]
0x06A79F80: a28240ad  ldp q2, q0, [x21, #0x10]
0x06A79F84: a102c03d  ldr q1, [x21]
0x06A79F88: d50e40f9  ldr x21, [x22, #0x18]
0x06A79F8C: d65e42a9  ldp x22, x23, [x22, #0x20]
0x06A79F90: e20303ad  stp q2, q0, [sp, #0x60]
0x06A79F94: e117803d  str q1, [sp, #0x50]
0x06A79F98: 570600b4  cbz x23, #0x6a7a060
0x06A79F9C: e00744ad  ldp q0, q1, [sp, #0x80]
0x06A79FA0: e28f42ad  ldp q2, q3, [sp, #0x50]
0x06A79FA4: e41fc03d  ldr q4, [sp, #0x70]
0x06A79FA8: 610340f9  ldr x1, [x27]
0x06A79FAC: e08701ad  stp q0, q1, [sp, #0x30]
0x06A79FB0: e20f00ad  stp q2, q3, [sp]
0x06A79FB4: e40b803d  str q4, [sp, #0x20]
0x06A79FB8: e80240f9  ldr x8, [x23]
0x06A79FBC: 095d4279  ldrh w9, [x8, #0x12e]
0x06A79FC0: 290100b4  cbz x9, #0x6a79fe4
0x06A79FC4: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A79FC8: 4a210091  add x10, x10, #8
0x06A79FCC: 4b815ff8  ldur x11, [x10, #-8]
0x06A79FD0: 7f0101eb  cmp x11, x1
0x06A79FD4: 00010054  b.eq #0x6a79ff4
0x06A79FD8: 290500f1  subs x9, x9, #1
0x06A79FDC: 4a410091  add x10, x10, #0x10
0x06A79FE0: 61ffff54  b.ne #0x6a79fcc
0x06A79FE4: e00317aa  mov x0, x23
0x06A79FE8: e2031f2a  mov w2, wzr
0x06A79FEC: c9721b97  bl #0x3156b10
0x06A79FF0: 04000014  b #0x6a7a000
0x06A79FF4: 490180b9  ldrsw x9, [x10]
0x06A79FF8: 0811098b  add x8, x8, x9, lsl #4
0x06A79FFC: 00e10491  add x0, x8, #0x138
0x06A7A000: e08741ad  ldp q0, q1, [sp, #0x30]
0x06A7A004: e20f40ad  ldp q2, q3, [sp]
0x06A7A008: e40bc03d  ldr q4, [sp, #0x20]
0x06A7A00C: 080040f9  ldr x8, [x0]
0x06A7A010: e0870cad  stp q0, q1, [sp, #0x190]
0x06A7A014: e28f0dad  stp q2, q3, [sp, #0x1b0]
0x06A7A018: e477803d  str q4, [sp, #0x1d0]
0x06A7A01C: 070440f9  ldr x7, [x0, #8]
0x06A7A020: e2430691  add x2, sp, #0x190
0x06A7A024: e5c30691  add x5, sp, #0x1b0
0x06A7A028: e00317aa  mov x0, x23
0x06A7A02C: e10314aa  mov x1, x20
0x06A7A030: e30315aa  mov x3, x21
0x06A7A034: e40316aa  mov x4, x22
0x06A7A038: e603132a  mov w6, w19
0x06A7A03C: 00013fd6  blr x8
0x06A7A040: ff830791  add sp, sp, #0x1e0
0x06A7A044: f44f45a9  ldp x20, x19, [sp, #0x50]
0x06A7A048: f65744a9  ldp x22, x21, [sp, #0x40]
0x06A7A04C: f85f43a9  ldp x24, x23, [sp, #0x30]
0x06A7A050: fa6742a9  ldp x26, x25, [sp, #0x20]
0x06A7A054: fe6f41a9  ldp x30, x27, [sp, #0x10]
0x06A7A058: fd0746f8  ldr x29, [sp], #0x60
0x06A7A05C: c0035fd6  ret
0x06A7A060: 131b1c97  bl #0x3180cac

; RVA 0x6A7A064 | private void HandleTransformByDuration(TickContext context, ExpendableComponent expendableComponent, Entity entity, BoardTilePositionComponent positionComponent) { }
; bytes=1016 sha256=bee38063248a7b48d2f235ee767d7caa12e1c48fa2524105fe5cbee923f88b7b status=arm64_complete_bound indexed_start=True
0x06A7A064: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x06A7A068: fc6f01a9  stp x28, x27, [sp, #0x10]
0x06A7A06C: fa6702a9  stp x26, x25, [sp, #0x20]
0x06A7A070: f85f03a9  stp x24, x23, [sp, #0x30]
0x06A7A074: f65704a9  stp x22, x21, [sp, #0x40]
0x06A7A078: f44f05a9  stp x20, x19, [sp, #0x50]
0x06A7A07C: ffc308d1  sub sp, sp, #0x230
0x06A7A080: 9a950090  adrp x26, #0x7d2a000
0x06A7A084: b95e00b0  adrp x25, #0x764f000
0x06A7A088: b66500d0  adrp x22, #0x7730000
0x06A7A08C: 48835c39  ldrb w8, [x26, #0x720]
0x06A7A090: 39af40f9  ldr x25, [x25, #0x158]
0x06A7A094: d69245f9  ldr x22, [x22, #0xb20]
0x06A7A098: f40304aa  mov x20, x4
0x06A7A09C: f30303aa  mov x19, x3
0x06A7A0A0: f80302aa  mov x24, x2
0x06A7A0A4: f50301aa  mov x21, x1
0x06A7A0A8: f70300aa  mov x23, x0
0x06A7A0AC: c8030037  tbnz w8, #0, #0x6a7a124
0x06A7A0B0: a06500d0  adrp x0, #0x7730000
0x06A7A0B4: 008045f9  ldr x0, [x0, #0xb00]
0x06A7A0B8: 581a1c97  bl #0x3180a18
0x06A7A0BC: a06400d0  adrp x0, #0x7710000
0x06A7A0C0: 00d841f9  ldr x0, [x0, #0x3b0]
0x06A7A0C4: 551a1c97  bl #0x3180a18
0x06A7A0C8: a06500d0  adrp x0, #0x7730000
0x06A7A0CC: 009045f9  ldr x0, [x0, #0xb20]
0x06A7A0D0: 521a1c97  bl #0x3180a18
0x06A7A0D4: a06500d0  adrp x0, #0x7730000
0x06A7A0D8: 00a045f9  ldr x0, [x0, #0xb40]
0x06A7A0DC: 4f1a1c97  bl #0x3180a18
0x06A7A0E0: a06500f0  adrp x0, #0x7731000
0x06A7A0E4: 001c44f9  ldr x0, [x0, #0x838]
0x06A7A0E8: 4c1a1c97  bl #0x3180a18
0x06A7A0EC: a06500f0  adrp x0, #0x7731000
0x06A7A0F0: 002044f9  ldr x0, [x0, #0x840]
0x06A7A0F4: 491a1c97  bl #0x3180a18
0x06A7A0F8: a06400d0  adrp x0, #0x7710000
0x06A7A0FC: 006842f9  ldr x0, [x0, #0x4d0]
0x06A7A100: 461a1c97  bl #0x3180a18
0x06A7A104: a05e00b0  adrp x0, #0x764f000
0x06A7A108: 00ac40f9  ldr x0, [x0, #0x158]
0x06A7A10C: 431a1c97  bl #0x3180a18
0x06A7A110: a06400d0  adrp x0, #0x7710000
0x06A7A114: 006442f9  ldr x0, [x0, #0x4c8]
0x06A7A118: 401a1c97  bl #0x3180a18
0x06A7A11C: 28008052  movz w8, #0x1
0x06A7A120: 48831c39  strb w8, [x26, #0x720]
0x06A7A124: 220340f9  ldr x2, [x25]
0x06A7A128: e10a40f9  ldr x1, [x23, #0x10]
0x06A7A12C: e00313aa  mov x0, x19
0x06A7A130: e5031faa  mov x5, xzr
0x06A7A134: e30302aa  mov x3, x2
0x06A7A138: e40302aa  mov x4, x2
0x06A7A13C: fea30094  bl #0x6aa3134
0x06A7A140: c80240f9  ldr x8, [x22]
0x06A7A144: b90a40f9  ldr x25, [x21, #0x10]
0x06A7A148: f60300aa  mov x22, x0
0x06A7A14C: e00308aa  mov x0, x8
0x06A7A150: d41a1c97  bl #0x3180ca0
0x06A7A154: e1031faa  mov x1, xzr
0x06A7A158: fa0300aa  mov x26, x0
0x06A7A15C: df820094  bl #0x6a9acd8
0x06A7A160: da1700b4  cbz x26, #0x6a7a458
0x06A7A164: bc6400d0  adrp x28, #0x7710000
0x06A7A168: 9c6742f9  ldr x28, [x28, #0x4c8]
0x06A7A16C: e0031aaa  mov x0, x26
0x06A7A170: 130c01f8  str x19, [x0, #0x10]!
0x06A7A174: e10313aa  mov x1, x19
0x06A7A178: 131a1c97  bl #0x31809c4
0x06A7A17C: 541b00b9  str w20, [x26, #0x18]
0x06A7A180: 810340f9  ldr x1, [x28]
0x06A7A184: e0031aaa  mov x0, x26
0x06A7A188: 010c02f8  str x1, [x0, #0x20]!
0x06A7A18C: 0e1a1c97  bl #0x31809c4
0x06A7A190: 591600b4  cbz x25, #0x6a7a458
0x06A7A194: a86500d0  adrp x8, #0x7730000
0x06A7A198: 08a145f9  ldr x8, [x8, #0xb40]
0x06A7A19C: bb6500f0  adrp x27, #0x7731000
0x06A7A1A0: e00319aa  mov x0, x25
0x06A7A1A4: e1031aaa  mov x1, x26
0x06A7A1A8: 020140f9  ldr x2, [x8]
0x06A7A1AC: 7b2344f9  ldr x27, [x27, #0x840]
0x06A7A1B0: 8d244d97  bl #0x3dc33e4
0x06A7A1B4: a00640ad  ldp q0, q1, [x21]
0x06A7A1B8: e0030791  add x0, sp, #0x1c0
0x06A7A1BC: e10313aa  mov x1, x19
0x06A7A1C0: e2031faa  mov x2, xzr
0x06A7A1C4: e0070ead  stp q0, q1, [sp, #0x1c0]
0x06A7A1C8: 697b0094  bl #0x6a98f6c
0x06A7A1CC: 600340f9  ldr x0, [x27]
0x06A7A1D0: b90a40f9  ldr x25, [x21, #0x10]
0x06A7A1D4: b31a1c97  bl #0x3180ca0
0x06A7A1D8: e1031faa  mov x1, xzr
0x06A7A1DC: fa0300aa  mov x26, x0
0x06A7A1E0: c8820094  bl #0x6a9ad00
0x06A7A1E4: ba1300b4  cbz x26, #0x6a7a458
0x06A7A1E8: fb031aaa  mov x27, x26
0x06A7A1EC: 730f01f8  str x19, [x27, #0x10]!
0x06A7A1F0: e0031baa  mov x0, x27
0x06A7A1F4: e10313aa  mov x1, x19
0x06A7A1F8: f3191c97  bl #0x31809c4
0x06A7A1FC: 740b00b9  str w20, [x27, #8]
0x06A7A200: d91200b4  cbz x25, #0x6a7a458
0x06A7A204: a86500f0  adrp x8, #0x7731000
0x06A7A208: 081d44f9  ldr x8, [x8, #0x838]
0x06A7A20C: e00319aa  mov x0, x25
0x06A7A210: e1031aaa  mov x1, x26
0x06A7A214: 020140f9  ldr x2, [x8]
0x06A7A218: 73244d97  bl #0x3dc33e4
0x06A7A21C: 080340b9  ldr w8, [x24]
0x06A7A220: 68040034  cbz w8, #0x6a7a2ac
0x06A7A224: a10240ad  ldp q1, q0, [x21]
0x06A7A228: f91640f9  ldr x25, [x23, #0x28]
0x06A7A22C: e1830aad  stp q1, q0, [sp, #0x150]
0x06A7A230: 018340ad  ldp q1, q0, [x24, #0x10]
0x06A7A234: 0203c03d  ldr q2, [x24]
0x06A7A238: fa0e40f9  ldr x26, [x23, #0x18]
0x06A7A23C: e18309ad  stp q1, q0, [sp, #0x130]
0x06A7A240: e24b803d  str q2, [sp, #0x120]
0x06A7A244: b91000b4  cbz x25, #0x6a7a458
0x06A7A248: e0874aad  ldp q0, q1, [sp, #0x150]
0x06A7A24C: e20f49ad  ldp q2, q3, [sp, #0x120]
0x06A7A250: e453c03d  ldr q4, [sp, #0x140]
0x06A7A254: bd6500d0  adrp x29, #0x7730000
0x06A7A258: e00708ad  stp q0, q1, [sp, #0x100]
0x06A7A25C: e28f06ad  stp q2, q3, [sp, #0xd0]
0x06A7A260: e43f803d  str q4, [sp, #0xf0]
0x06A7A264: 280340f9  ldr x8, [x25]
0x06A7A268: bd8345f9  ldr x29, [x29, #0xb00]
0x06A7A26C: 9b0340f9  ldr x27, [x28]
0x06A7A270: 095d4279  ldrh w9, [x8, #0x12e]
0x06A7A274: a10340f9  ldr x1, [x29]
0x06A7A278: 290100b4  cbz x9, #0x6a7a29c
0x06A7A27C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A7A280: 4a210091  add x10, x10, #8
0x06A7A284: 4b815ff8  ldur x11, [x10, #-8]
0x06A7A288: 7f0101eb  cmp x11, x1
0x06A7A28C: 60030054  b.eq #0x6a7a2f8
0x06A7A290: 290500f1  subs x9, x9, #1
0x06A7A294: 4a410091  add x10, x10, #0x10
0x06A7A298: 61ffff54  b.ne #0x6a7a284
0x06A7A29C: 22008052  movz w2, #0x1
0x06A7A2A0: e00319aa  mov x0, x25
0x06A7A2A4: 1b721b97  bl #0x3156b10
0x06A7A2A8: 18000014  b #0x6a7a308
0x06A7A2AC: 080b40f9  ldr x8, [x24, #0x10]
0x06A7A2B0: a8fbffb4  cbz x8, #0x6a7a224
0x06A7A2B4: 081940b9  ldr w8, [x8, #0x18]
0x06A7A2B8: 1f050071  cmp w8, #1
0x06A7A2BC: 4bfbff54  b.lt #0x6a7a224
0x06A7A2C0: a10240ad  ldp q1, q0, [x21]
0x06A7A2C4: 847e4092  and x4, x20, #0xffffffff
0x06A7A2C8: e1830691  add x1, sp, #0x1a0
0x06A7A2CC: e3c30591  add x3, sp, #0x170
0x06A7A2D0: e1030dad  stp q1, q0, [sp, #0x1a0]
0x06A7A2D4: 018340ad  ldp q1, q0, [x24, #0x10]
0x06A7A2D8: 0203c03d  ldr q2, [x24]
0x06A7A2DC: e00317aa  mov x0, x23
0x06A7A2E0: e20313aa  mov x2, x19
0x06A7A2E4: e50316aa  mov x5, x22
0x06A7A2E8: e1030cad  stp q1, q0, [sp, #0x180]
0x06A7A2EC: e25f803d  str q2, [sp, #0x170]
0x06A7A2F0: 5b000094  bl #0x6a7a45c
0x06A7A2F4: 51000014  b #0x6a7a438
0x06A7A2F8: 490140b9  ldr w9, [x10]
0x06A7A2FC: 29050011  add w9, w9, #1
0x06A7A300: 08d1298b  add x8, x8, w9, sxtw #4
0x06A7A304: 00e10491  add x0, x8, #0x138
0x06A7A308: e00748ad  ldp q0, q1, [sp, #0x100]
0x06A7A30C: e28f46ad  ldp q2, q3, [sp, #0xd0]
0x06A7A310: e43fc03d  ldr q4, [sp, #0xf0]
0x06A7A314: 080040f9  ldr x8, [x0]
0x06A7A318: e00704ad  stp q0, q1, [sp, #0x80]
0x06A7A31C: e20f10ad  stp q2, q3, [sp, #0x200]
0x06A7A320: e48b803d  str q4, [sp, #0x220]
0x06A7A324: 070440f9  ldr x7, [x0, #8]
0x06A7A328: e2030291  add x2, sp, #0x80
0x06A7A32C: e4030891  add x4, sp, #0x200
0x06A7A330: e00319aa  mov x0, x25
0x06A7A334: e10313aa  mov x1, x19
0x06A7A338: e3031aaa  mov x3, x26
0x06A7A33C: e503142a  mov w5, w20
0x06A7A340: e6031baa  mov x6, x27
0x06A7A344: 00013fd6  blr x8
0x06A7A348: a10240ad  ldp q1, q0, [x21]
0x06A7A34C: e18305ad  stp q1, q0, [sp, #0xb0]
0x06A7A350: 028340ad  ldp q2, q0, [x24, #0x10]
0x06A7A354: 0103c03d  ldr q1, [x24]
0x06A7A358: f80e40f9  ldr x24, [x23, #0x18]
0x06A7A35C: f76642a9  ldp x23, x25, [x23, #0x20]
0x06A7A360: e28304ad  stp q2, q0, [sp, #0x90]
0x06A7A364: e123803d  str q1, [sp, #0x80]
0x06A7A368: 990700b4  cbz x25, #0x6a7a458
0x06A7A36C: e08745ad  ldp q0, q1, [sp, #0xb0]
0x06A7A370: e20f44ad  ldp q2, q3, [sp, #0x80]
0x06A7A374: e42bc03d  ldr q4, [sp, #0xa0]
0x06A7A378: ba6400d0  adrp x26, #0x7710000
0x06A7A37C: e00703ad  stp q0, q1, [sp, #0x60]
0x06A7A380: e28f01ad  stp q2, q3, [sp, #0x30]
0x06A7A384: e417803d  str q4, [sp, #0x50]
0x06A7A388: 280340f9  ldr x8, [x25]
0x06A7A38C: a10340f9  ldr x1, [x29]
0x06A7A390: 095d4279  ldrh w9, [x8, #0x12e]
0x06A7A394: 5a6b42f9  ldr x26, [x26, #0x4d0]
0x06A7A398: 290100b4  cbz x9, #0x6a7a3bc
0x06A7A39C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A7A3A0: 4a210091  add x10, x10, #8
0x06A7A3A4: 4b815ff8  ldur x11, [x10, #-8]
0x06A7A3A8: 7f0101eb  cmp x11, x1
0x06A7A3AC: 00010054  b.eq #0x6a7a3cc
0x06A7A3B0: 290500f1  subs x9, x9, #1
0x06A7A3B4: 4a410091  add x10, x10, #0x10
0x06A7A3B8: 61ffff54  b.ne #0x6a7a3a4
0x06A7A3BC: e00319aa  mov x0, x25
0x06A7A3C0: e2031f2a  mov w2, wzr
0x06A7A3C4: d3711b97  bl #0x3156b10
0x06A7A3C8: 04000014  b #0x6a7a3d8
0x06A7A3CC: 490180b9  ldrsw x9, [x10]
0x06A7A3D0: 0811098b  add x8, x8, x9, lsl #4
0x06A7A3D4: 00e10491  add x0, x8, #0x138
0x06A7A3D8: e00743ad  ldp q0, q1, [sp, #0x60]
0x06A7A3DC: e28f41ad  ldp q2, q3, [sp, #0x30]
0x06A7A3E0: e417c03d  ldr q4, [sp, #0x50]
0x06A7A3E4: 080040f9  ldr x8, [x0]
0x06A7A3E8: e0070fad  stp q0, q1, [sp, #0x1e0]
0x06A7A3EC: e20f10ad  stp q2, q3, [sp, #0x200]
0x06A7A3F0: e48b803d  str q4, [sp, #0x220]
0x06A7A3F4: 070440f9  ldr x7, [x0, #8]
0x06A7A3F8: e2830791  add x2, sp, #0x1e0
0x06A7A3FC: e5030891  add x5, sp, #0x200
0x06A7A400: e00319aa  mov x0, x25
0x06A7A404: e10313aa  mov x1, x19
0x06A7A408: e30318aa  mov x3, x24
0x06A7A40C: e40317aa  mov x4, x23
0x06A7A410: e603142a  mov w6, w20
0x06A7A414: 00013fd6  blr x8
0x06A7A418: a00640ad  ldp q0, q1, [x21]
0x06A7A41C: 850340f9  ldr x5, [x28]
0x06A7A420: 460340f9  ldr x6, [x26]
0x06A7A424: e1430091  add x1, sp, #0x10
0x06A7A428: e20313aa  mov x2, x19
0x06A7A42C: e40316aa  mov x4, x22
0x06A7A430: e08700ad  stp q0, q1, [sp, #0x10]
0x06A7A434: cb000094  bl #0x6a7a760
0x06A7A438: ffc30891  add sp, sp, #0x230
0x06A7A43C: f44f45a9  ldp x20, x19, [sp, #0x50]
0x06A7A440: f65744a9  ldp x22, x21, [sp, #0x40]
0x06A7A444: f85f43a9  ldp x24, x23, [sp, #0x30]
0x06A7A448: fa6742a9  ldp x26, x25, [sp, #0x20]
0x06A7A44C: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x06A7A450: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x06A7A454: c0035fd6  ret
0x06A7A458: 151a1c97  bl #0x3180cac

; RVA 0x6A7A45C | private void TransformTimeLimitedItem(TickContext context, Entity entity, ExpendableComponent expendableComponent, BoardTilePositionComponent positionComponent, ItemAnalyticsData analyticsData) { }
; bytes=772 sha256=67fbf69ae37a9a80ea6a56b128fca9fbcad158d1dfda59809a94d8ba9efe3041 status=arm64_complete_bound indexed_start=True
0x06A7A45C: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x06A7A460: fc6f01a9  stp x28, x27, [sp, #0x10]
0x06A7A464: fa6702a9  stp x26, x25, [sp, #0x20]
0x06A7A468: f85f03a9  stp x24, x23, [sp, #0x30]
0x06A7A46C: f65704a9  stp x22, x21, [sp, #0x40]
0x06A7A470: f44f05a9  stp x20, x19, [sp, #0x50]
0x06A7A474: ff0307d1  sub sp, sp, #0x1c0
0x06A7A478: 99950090  adrp x25, #0x7d2a000
0x06A7A47C: ba6500f0  adrp x26, #0x7731000
0x06A7A480: 28875c39  ldrb w8, [x25, #0x721]
0x06A7A484: 5a2744f9  ldr x26, [x26, #0x848]
0x06A7A488: f30305aa  mov x19, x5
0x06A7A48C: f60304aa  mov x22, x4
0x06A7A490: f70303aa  mov x23, x3
0x06A7A494: f40302aa  mov x20, x2
0x06A7A498: f50301aa  mov x21, x1
0x06A7A49C: f80300aa  mov x24, x0
0x06A7A4A0: a8020037  tbnz w8, #0, #0x6a7a4f4
0x06A7A4A4: a06500f0  adrp x0, #0x7731000
0x06A7A4A8: 002444f9  ldr x0, [x0, #0x848]
0x06A7A4AC: 5b191c97  bl #0x3180a18
0x06A7A4B0: a06500d0  adrp x0, #0x7730000
0x06A7A4B4: 008045f9  ldr x0, [x0, #0xb00]
0x06A7A4B8: 58191c97  bl #0x3180a18
0x06A7A4BC: a06500f0  adrp x0, #0x7731000
0x06A7A4C0: 002844f9  ldr x0, [x0, #0x850]
0x06A7A4C4: 55191c97  bl #0x3180a18
0x06A7A4C8: c06400d0  adrp x0, #0x7714000
0x06A7A4CC: 000042f9  ldr x0, [x0, #0x400]
0x06A7A4D0: 52191c97  bl #0x3180a18
0x06A7A4D4: a06400d0  adrp x0, #0x7710000
0x06A7A4D8: 006442f9  ldr x0, [x0, #0x4c8]
0x06A7A4DC: 4f191c97  bl #0x3180a18
0x06A7A4E0: 20600090  adrp x0, #0x767e000
0x06A7A4E4: 00ac44f9  ldr x0, [x0, #0x958]
0x06A7A4E8: 4c191c97  bl #0x3180a18
0x06A7A4EC: 28008052  movz w8, #0x1
0x06A7A4F0: 28871c39  strb w8, [x25, #0x721]
0x06A7A4F4: 400340f9  ldr x0, [x26]
0x06A7A4F8: b90a40f9  ldr x25, [x21, #0x10]
0x06A7A4FC: e9191c97  bl #0x3180ca0
0x06A7A500: e1031faa  mov x1, xzr
0x06A7A504: fa0300aa  mov x26, x0
0x06A7A508: ec7f0094  bl #0x6a9a4b8
0x06A7A50C: 9a1200b4  cbz x26, #0x6a7a75c
0x06A7A510: 3b600090  adrp x27, #0x767e000
0x06A7A514: 7baf44f9  ldr x27, [x27, #0x958]
0x06A7A518: e0031aaa  mov x0, x26
0x06A7A51C: 140c01f8  str x20, [x0, #0x10]!
0x06A7A520: e10314aa  mov x1, x20
0x06A7A524: 28191c97  bl #0x31809c4
0x06A7A528: 561b00b9  str w22, [x26, #0x18]
0x06A7A52C: 610340f9  ldr x1, [x27]
0x06A7A530: fb031aaa  mov x27, x26
0x06A7A534: 610f02f8  str x1, [x27, #0x20]!
0x06A7A538: e0031baa  mov x0, x27
0x06A7A53C: 22191c97  bl #0x31809c4
0x06A7A540: e8824039  ldrb w8, [x23, #0x20]
0x06A7A544: 68230039  strb w8, [x27, #8]
0x06A7A548: e82640b9  ldr w8, [x23, #0x24]
0x06A7A54C: 680f00b9  str w8, [x27, #0xc]
0x06A7A550: 791000b4  cbz x25, #0x6a7a75c
0x06A7A554: a86500f0  adrp x8, #0x7731000
0x06A7A558: 082944f9  ldr x8, [x8, #0x850]
0x06A7A55C: e00319aa  mov x0, x25
0x06A7A560: e1031aaa  mov x1, x26
0x06A7A564: 020140f9  ldr x2, [x8]
0x06A7A568: 9f234d97  bl #0x3dc33e4
0x06A7A56C: a10240ad  ldp q1, q0, [x21]
0x06A7A570: 191740f9  ldr x25, [x24, #0x28]
0x06A7A574: e1830aad  stp q1, q0, [sp, #0x150]
0x06A7A578: e18240ad  ldp q1, q0, [x23, #0x10]
0x06A7A57C: e202c03d  ldr q2, [x23]
0x06A7A580: 1a0f40f9  ldr x26, [x24, #0x18]
0x06A7A584: e18309ad  stp q1, q0, [sp, #0x130]
0x06A7A588: e24b803d  str q2, [sp, #0x120]
0x06A7A58C: 990e00b4  cbz x25, #0x6a7a75c
0x06A7A590: e0874aad  ldp q0, q1, [sp, #0x150]
0x06A7A594: e20f49ad  ldp q2, q3, [sp, #0x120]
0x06A7A598: e453c03d  ldr q4, [sp, #0x140]
0x06A7A59C: bd6500d0  adrp x29, #0x7730000
0x06A7A5A0: e00708ad  stp q0, q1, [sp, #0x100]
0x06A7A5A4: e28f06ad  stp q2, q3, [sp, #0xd0]
0x06A7A5A8: e43f803d  str q4, [sp, #0xf0]
0x06A7A5AC: bc6400d0  adrp x28, #0x7710000
0x06A7A5B0: 280340f9  ldr x8, [x25]
0x06A7A5B4: bd8345f9  ldr x29, [x29, #0xb00]
0x06A7A5B8: 9c6742f9  ldr x28, [x28, #0x4c8]
0x06A7A5BC: 095d4279  ldrh w9, [x8, #0x12e]
0x06A7A5C0: a10340f9  ldr x1, [x29]
0x06A7A5C4: 9b0340f9  ldr x27, [x28]
0x06A7A5C8: 290100b4  cbz x9, #0x6a7a5ec
0x06A7A5CC: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A7A5D0: 4a210091  add x10, x10, #8
0x06A7A5D4: 4b815ff8  ldur x11, [x10, #-8]
0x06A7A5D8: 7f0101eb  cmp x11, x1
0x06A7A5DC: 00010054  b.eq #0x6a7a5fc
0x06A7A5E0: 290500f1  subs x9, x9, #1
0x06A7A5E4: 4a410091  add x10, x10, #0x10
0x06A7A5E8: 61ffff54  b.ne #0x6a7a5d4
0x06A7A5EC: 22008052  movz w2, #0x1
0x06A7A5F0: e00319aa  mov x0, x25
0x06A7A5F4: 47711b97  bl #0x3156b10
0x06A7A5F8: 05000014  b #0x6a7a60c
0x06A7A5FC: 490140b9  ldr w9, [x10]
0x06A7A600: 29050011  add w9, w9, #1
0x06A7A604: 08d1298b  add x8, x8, w9, sxtw #4
0x06A7A608: 00e10491  add x0, x8, #0x138
0x06A7A60C: e00748ad  ldp q0, q1, [sp, #0x100]
0x06A7A610: e28f46ad  ldp q2, q3, [sp, #0xd0]
0x06A7A614: e43fc03d  ldr q4, [sp, #0xf0]
0x06A7A618: 080040f9  ldr x8, [x0]
0x06A7A61C: e00704ad  stp q0, q1, [sp, #0x80]
0x06A7A620: e28f0cad  stp q2, q3, [sp, #0x190]
0x06A7A624: e46f803d  str q4, [sp, #0x1b0]
0x06A7A628: 070440f9  ldr x7, [x0, #8]
0x06A7A62C: e2030291  add x2, sp, #0x80
0x06A7A630: e4430691  add x4, sp, #0x190
0x06A7A634: e00319aa  mov x0, x25
0x06A7A638: e10314aa  mov x1, x20
0x06A7A63C: e3031aaa  mov x3, x26
0x06A7A640: e503162a  mov w5, w22
0x06A7A644: e6031baa  mov x6, x27
0x06A7A648: 00013fd6  blr x8
0x06A7A64C: a10240ad  ldp q1, q0, [x21]
0x06A7A650: e18305ad  stp q1, q0, [sp, #0xb0]
0x06A7A654: e28240ad  ldp q2, q0, [x23, #0x10]
0x06A7A658: e102c03d  ldr q1, [x23]
0x06A7A65C: 170f40f9  ldr x23, [x24, #0x18]
0x06A7A660: 186742a9  ldp x24, x25, [x24, #0x20]
0x06A7A664: e28304ad  stp q2, q0, [sp, #0x90]
0x06A7A668: e123803d  str q1, [sp, #0x80]
0x06A7A66C: 990700b4  cbz x25, #0x6a7a75c
0x06A7A670: e08745ad  ldp q0, q1, [sp, #0xb0]
0x06A7A674: e20f44ad  ldp q2, q3, [sp, #0x80]
0x06A7A678: e42bc03d  ldr q4, [sp, #0xa0]
0x06A7A67C: da6400d0  adrp x26, #0x7714000
0x06A7A680: e00703ad  stp q0, q1, [sp, #0x60]
0x06A7A684: e28f01ad  stp q2, q3, [sp, #0x30]
0x06A7A688: e417803d  str q4, [sp, #0x50]
0x06A7A68C: 280340f9  ldr x8, [x25]
0x06A7A690: a10340f9  ldr x1, [x29]
0x06A7A694: 095d4279  ldrh w9, [x8, #0x12e]
0x06A7A698: 5a0342f9  ldr x26, [x26, #0x400]
0x06A7A69C: 290100b4  cbz x9, #0x6a7a6c0
0x06A7A6A0: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A7A6A4: 4a210091  add x10, x10, #8
0x06A7A6A8: 4b815ff8  ldur x11, [x10, #-8]
0x06A7A6AC: 7f0101eb  cmp x11, x1
0x06A7A6B0: 00010054  b.eq #0x6a7a6d0
0x06A7A6B4: 290500f1  subs x9, x9, #1
0x06A7A6B8: 4a410091  add x10, x10, #0x10
0x06A7A6BC: 61ffff54  b.ne #0x6a7a6a8
0x06A7A6C0: e00319aa  mov x0, x25
0x06A7A6C4: e2031f2a  mov w2, wzr
0x06A7A6C8: 12711b97  bl #0x3156b10
0x06A7A6CC: 04000014  b #0x6a7a6dc
0x06A7A6D0: 490180b9  ldrsw x9, [x10]
0x06A7A6D4: 0811098b  add x8, x8, x9, lsl #4
0x06A7A6D8: 00e10491  add x0, x8, #0x138
0x06A7A6DC: e00743ad  ldp q0, q1, [sp, #0x60]
0x06A7A6E0: e28f41ad  ldp q2, q3, [sp, #0x30]
0x06A7A6E4: e417c03d  ldr q4, [sp, #0x50]
0x06A7A6E8: 080040f9  ldr x8, [x0]
0x06A7A6EC: e0870bad  stp q0, q1, [sp, #0x170]
0x06A7A6F0: e28f0cad  stp q2, q3, [sp, #0x190]
0x06A7A6F4: e46f803d  str q4, [sp, #0x1b0]
0x06A7A6F8: 070440f9  ldr x7, [x0, #8]
0x06A7A6FC: e2c30591  add x2, sp, #0x170
0x06A7A700: e5430691  add x5, sp, #0x190
0x06A7A704: e00319aa  mov x0, x25
0x06A7A708: e10314aa  mov x1, x20
0x06A7A70C: e30317aa  mov x3, x23
0x06A7A710: e40318aa  mov x4, x24
0x06A7A714: e603162a  mov w6, w22
0x06A7A718: 00013fd6  blr x8
0x06A7A71C: a00640ad  ldp q0, q1, [x21]
0x06A7A720: 850340f9  ldr x5, [x28]
0x06A7A724: 460340f9  ldr x6, [x26]
0x06A7A728: e1430091  add x1, sp, #0x10
0x06A7A72C: e20314aa  mov x2, x20
0x06A7A730: e40313aa  mov x4, x19
0x06A7A734: e08700ad  stp q0, q1, [sp, #0x10]
0x06A7A738: 0a000094  bl #0x6a7a760
0x06A7A73C: ff030791  add sp, sp, #0x1c0
0x06A7A740: f44f45a9  ldp x20, x19, [sp, #0x50]
0x06A7A744: f65744a9  ldp x22, x21, [sp, #0x40]
0x06A7A748: f85f43a9  ldp x24, x23, [sp, #0x30]
0x06A7A74C: fa6742a9  ldp x26, x25, [sp, #0x20]
0x06A7A750: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x06A7A754: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x06A7A758: c0035fd6  ret
0x06A7A75C: 54191c97  bl #0x3180cac

; RVA 0x6A7A760 | private void EmitItemExpiredResult(TickContext context, Entity entity, int position, ItemAnalyticsData analyticsData, string reason, string subReason) { }
; bytes=260 sha256=27356b3e0aecb44ecb18f00d6516d2e1940265ae11b55c0457cfb32a72487915 status=arm64_complete_bound indexed_start=True
0x06A7A760: fe67bca9  stp x30, x25, [sp, #-0x40]!
0x06A7A764: f85f01a9  stp x24, x23, [sp, #0x10]
0x06A7A768: f65702a9  stp x22, x21, [sp, #0x20]
0x06A7A76C: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A7A770: 98950090  adrp x24, #0x7d2a000
0x06A7A774: 088b5c39  ldrb w8, [x24, #0x722]
0x06A7A778: f70306aa  mov x23, x6
0x06A7A77C: f40305aa  mov x20, x5
0x06A7A780: f30304aa  mov x19, x4
0x06A7A784: f50302aa  mov x21, x2
0x06A7A788: f60301aa  mov x22, x1
0x06A7A78C: 28010037  tbnz w8, #0, #0x6a7a7b0
0x06A7A790: a06500d0  adrp x0, #0x7730000
0x06A7A794: 008445f9  ldr x0, [x0, #0xb08]
0x06A7A798: a0181c97  bl #0x3180a18
0x06A7A79C: a06500d0  adrp x0, #0x7730000
0x06A7A7A0: 009c45f9  ldr x0, [x0, #0xb38]
0x06A7A7A4: 9d181c97  bl #0x3180a18
0x06A7A7A8: 28008052  movz w8, #0x1
0x06A7A7AC: 088b1c39  strb w8, [x24, #0x722]
0x06A7A7B0: b96500d0  adrp x25, #0x7730000
0x06A7A7B4: 398745f9  ldr x25, [x25, #0xb08]
0x06A7A7B8: 930100b4  cbz x19, #0x6a7a7e8
0x06A7A7BC: e00313aa  mov x0, x19
0x06A7A7C0: 148c0bf8  str x20, [x0, #0xb8]!
0x06A7A7C4: e10314aa  mov x1, x20
0x06A7A7C8: 7f181c97  bl #0x31809c4
0x06A7A7CC: f80313aa  mov x24, x19
0x06A7A7D0: 170f0cf8  str x23, [x24, #0xc0]!
0x06A7A7D4: e00318aa  mov x0, x24
0x06A7A7D8: e10317aa  mov x1, x23
0x06A7A7DC: 7a181c97  bl #0x31809c4
0x06A7A7E0: 1f031eb8  stur wzr, [x24, #-0x20]
0x06A7A7E4: 1f2700f9  str xzr, [x24, #0x48]
0x06A7A7E8: 200340f9  ldr x0, [x25]
0x06A7A7EC: d60a40f9  ldr x22, [x22, #0x10]
0x06A7A7F0: 2c191c97  bl #0x3180ca0
0x06A7A7F4: e1031faa  mov x1, xzr
0x06A7A7F8: f70300aa  mov x23, x0
0x06A7A7FC: 36800094  bl #0x6a9a8d4
0x06A7A800: 170300b4  cbz x23, #0x6a7a860
0x06A7A804: e00317aa  mov x0, x23
0x06A7A808: 150c01f8  str x21, [x0, #0x10]!
0x06A7A80C: e10315aa  mov x1, x21
0x06A7A810: 6d181c97  bl #0x31809c4
0x06A7A814: e00317aa  mov x0, x23
0x06A7A818: 148c01f8  str x20, [x0, #0x18]!
0x06A7A81C: e10314aa  mov x1, x20
0x06A7A820: 69181c97  bl #0x31809c4
0x06A7A824: e00317aa  mov x0, x23
0x06A7A828: 130c02f8  str x19, [x0, #0x20]!
0x06A7A82C: e10313aa  mov x1, x19
0x06A7A830: 65181c97  bl #0x31809c4
0x06A7A834: 760100b4  cbz x22, #0x6a7a860
0x06A7A838: a86500d0  adrp x8, #0x7730000
0x06A7A83C: 089d45f9  ldr x8, [x8, #0xb38]
0x06A7A840: e00316aa  mov x0, x22
0x06A7A844: e10317aa  mov x1, x23
0x06A7A848: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A7A84C: 020140f9  ldr x2, [x8]
0x06A7A850: f65742a9  ldp x22, x21, [sp, #0x20]
0x06A7A854: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06A7A858: fe67c4a8  ldp x30, x25, [sp], #0x40
0x06A7A85C: e2224d17  b #0x3dc33e4
0x06A7A860: 13191c97  bl #0x3180cac

; RVA 0x6A7A864 | public void .ctor() { }
; bytes=8 sha256=cde9925af88c40dde1c269ddd2d635c108c3d38b5fd9869dadbdd38842c7112f status=arm64_complete_bound indexed_start=True
0x06A7A864: e1031faa  mov x1, xzr
0x06A7A868: 657fb117  b #0x56da5fc

