; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25730 Merger.MergeBoard.Systems.ExpendableSystem
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A659E4 | public void Tick(TickContext context) { }
; bytes=824 sha256=daa40d8ff85bc015b9f18f27746da57e764cd8dd5c8700438b722f01760be78d status=arm64_complete_bound indexed_start=True
0x06A659E4: fd0f1af8  str x29, [sp, #-0x60]!
0x06A659E8: fe6f01a9  stp x30, x27, [sp, #0x10]
0x06A659EC: fa6702a9  stp x26, x25, [sp, #0x20]
0x06A659F0: f85f03a9  stp x24, x23, [sp, #0x30]
0x06A659F4: f65704a9  stp x22, x21, [sp, #0x40]
0x06A659F8: f44f05a9  stp x20, x19, [sp, #0x50]
0x06A659FC: ff430cd1  sub sp, sp, #0x310
0x06A65A00: 3b9600b0  adrp x27, #0x7d2a000
0x06A65A04: 556600f0  adrp x21, #0x7730000
0x06A65A08: 586600d0  adrp x24, #0x772f000
0x06A65A0C: 566600d0  adrp x22, #0x772f000
0x06A65A10: 5a6600f0  adrp x26, #0x7730000
0x06A65A14: 596600f0  adrp x25, #0x7730000
0x06A65A18: 687f5a39  ldrb w8, [x27, #0x69f]
0x06A65A1C: b54e45f9  ldr x21, [x21, #0xa98]
0x06A65A20: 183747f9  ldr x24, [x24, #0xe68]
0x06A65A24: d62647f9  ldr x22, [x22, #0xe48]
0x06A65A28: 5a5345f9  ldr x26, [x26, #0xaa0]
0x06A65A2C: 395745f9  ldr x25, [x25, #0xaa8]
0x06A65A30: f40301aa  mov x20, x1
0x06A65A34: f30300aa  mov x19, x0
0x06A65A38: f7430291  add x23, sp, #0x90
0x06A65A3C: 88040037  tbnz w8, #0, #0x6a65acc
0x06A65A40: 406600f0  adrp x0, #0x7730000
0x06A65A44: 005845f9  ldr x0, [x0, #0xab0]
0x06A65A48: f46b1c97  bl #0x3180a18
0x06A65A4C: 406600d0  adrp x0, #0x772f000
0x06A65A50: 002447f9  ldr x0, [x0, #0xe48]
0x06A65A54: f16b1c97  bl #0x3180a18
0x06A65A58: 406600f0  adrp x0, #0x7730000
0x06A65A5C: 004c45f9  ldr x0, [x0, #0xa98]
0x06A65A60: ee6b1c97  bl #0x3180a18
0x06A65A64: 406600f0  adrp x0, #0x7730000
0x06A65A68: 005c45f9  ldr x0, [x0, #0xab8]
0x06A65A6C: eb6b1c97  bl #0x3180a18
0x06A65A70: 406600f0  adrp x0, #0x7730000
0x06A65A74: 006045f9  ldr x0, [x0, #0xac0]
0x06A65A78: e86b1c97  bl #0x3180a18
0x06A65A7C: 406600d0  adrp x0, #0x772f000
0x06A65A80: 003447f9  ldr x0, [x0, #0xe68]
0x06A65A84: e56b1c97  bl #0x3180a18
0x06A65A88: 406600f0  adrp x0, #0x7730000
0x06A65A8C: 006445f9  ldr x0, [x0, #0xac8]
0x06A65A90: e26b1c97  bl #0x3180a18
0x06A65A94: 406600f0  adrp x0, #0x7730000
0x06A65A98: 006845f9  ldr x0, [x0, #0xad0]
0x06A65A9C: df6b1c97  bl #0x3180a18
0x06A65AA0: 406600f0  adrp x0, #0x7730000
0x06A65AA4: 005445f9  ldr x0, [x0, #0xaa8]
0x06A65AA8: dc6b1c97  bl #0x3180a18
0x06A65AAC: 406600f0  adrp x0, #0x7730000
0x06A65AB0: 006c45f9  ldr x0, [x0, #0xad8]
0x06A65AB4: d96b1c97  bl #0x3180a18
0x06A65AB8: 406600f0  adrp x0, #0x7730000
0x06A65ABC: 005045f9  ldr x0, [x0, #0xaa0]
0x06A65AC0: d66b1c97  bl #0x3180a18
0x06A65AC4: 28008052  movz w8, #0x1
0x06A65AC8: 687f1a39  strb w8, [x27, #0x69f]
0x06A65ACC: 00e4006f  movi v0.2d, #0000000000000000
0x06A65AD0: e0230991  add x0, sp, #0x248
0x06A65AD4: 02158052  movz w2, #0xa8
0x06A65AD8: e1031f2a  mov w1, wzr
0x06A65ADC: e00213ad  stp q0, q0, [x23, #0x260]
0x06A65AE0: b0a31d94  bl #0x71ce9a0
0x06A65AE4: 02e4006f  movi v2.2d, #0000000000000000
0x06A65AE8: e28a0cad  stp q2, q2, [x23, #0x190]
0x06A65AEC: e28a0bad  stp q2, q2, [x23, #0x170]
0x06A65AF0: 810240ad  ldp q1, q0, [x20]
0x06A65AF4: a00240f9  ldr x0, [x21]
0x06A65AF8: e08a0aad  stp q0, q2, [x23, #0x150]
0x06A65AFC: e152803d  str q1, [x23, #0x140]
0x06A65B00: 4fd44697  bl #0x3c1ac3c
0x06A65B04: 080340f9  ldr x8, [x24]
0x06A65B08: f50300aa  mov x21, x0
0x06A65B0C: e00308aa  mov x0, x8
0x06A65B10: 646c1c97  bl #0x3180ca0
0x06A65B14: c20240f9  ldr x2, [x22]
0x06A65B18: e1031faa  mov x1, xzr
0x06A65B1C: e3031faa  mov x3, xzr
0x06A65B20: f60300aa  mov x22, x0
0x06A65B24: 79c0d297  bl #0x5f15d08
0x06A65B28: e0064aad  ldp q0, q1, [x23, #0x140]
0x06A65B2C: 430340f9  ldr x3, [x26]
0x06A65B30: e8c30b91  add x8, sp, #0x2f0
0x06A65B34: e0830491  add x0, sp, #0x120
0x06A65B38: e10315aa  mov x1, x21
0x06A65B3C: e20316aa  mov x2, x22
0x06A65B40: e08604ad  stp q0, q1, [x23, #0x90]
0x06A65B44: a8024c97  bl #0x3d665e4
0x06A65B48: 220340f9  ldr x2, [x25]
0x06A65B4C: e0c30b91  add x0, sp, #0x2f0
0x06A65B50: e1230991  add x1, sp, #0x248
0x06A65B54: dcc66497  bl #0x43976c4
0x06A65B58: 80040036  tbz w0, #0, #0x6a65be8
0x06A65B5C: 810240ad  ldp q1, q0, [x20]
0x06A65B60: f42741f9  ldr x20, [sp, #0x248]
0x06A65B64: e0830491  add x0, sp, #0x120
0x06A65B68: e1230991  add x1, sp, #0x248
0x06A65B6C: 02158052  movz w2, #0xa8
0x06A65B70: e18202ad  stp q1, q0, [x23, #0x50]
0x06A65B74: 7fa31d94  bl #0x71ce970
0x06A65B78: 486600f0  adrp x8, #0x7730000
0x06A65B7C: f58342b9  ldr w21, [sp, #0x280]
0x06A65B80: e17341f9  ldr x1, [sp, #0x2e0]
0x06A65B84: e27741f9  ldr x2, [sp, #0x2e8]
0x06A65B88: 086545f9  ldr x8, [x8, #0xac8]
0x06A65B8C: e0230491  add x0, sp, #0x108
0x06A65B90: ffff10a9  stp xzr, xzr, [sp, #0x108]
0x06A65B94: ff8f00f9  str xzr, [sp, #0x118]
0x06A65B98: 030140f9  ldr x3, [x8]
0x06A65B9C: 3a5d6097  bl #0x427d084
0x06A65BA0: e8270091  add x8, sp, #9
0x06A65BA4: e082c93c  ldur q0, [x23, #0x98]
0x06A65BA8: e182ca3c  ldur q1, [x23, #0xa8]
0x06A65BAC: e282cb3c  ldur q2, [x23, #0xb8]
0x06A65BB0: 03f1cf3c  ldur q3, [x8, #0xff]
0x06A65BB4: e88f40f9  ldr x8, [sp, #0x118]
0x06A65BB8: e1830391  add x1, sp, #0xe0
0x06A65BBC: e3c30291  add x3, sp, #0xb0
0x06A65BC0: e7430291  add x7, sp, #0x90
0x06A65BC4: e00313aa  mov x0, x19
0x06A65BC8: e20314aa  mov x2, x20
0x06A65BCC: e40315aa  mov x4, x21
0x06A65BD0: e00601ad  stp q0, q1, [x23, #0x20]
0x06A65BD4: e212803d  str q2, [x23, #0x40]
0x06A65BD8: e302803d  str q3, [x23]
0x06A65BDC: e85300f9  str x8, [sp, #0xa0]
0x06A65BE0: 4f000094  bl #0x6a65d1c
0x06A65BE4: 44000014  b #0x6a65cf4
0x06A65BE8: 486600f0  adrp x8, #0x7730000
0x06A65BEC: 800640ad  ldp q0, q1, [x20]
0x06A65BF0: 085d45f9  ldr x8, [x8, #0xab8]
0x06A65BF4: e08703ad  stp q0, q1, [sp, #0x70]
0x06A65BF8: 000140f9  ldr x0, [x8]
0x06A65BFC: 67d34697  bl #0x3c1a998
0x06A65C00: 080340f9  ldr x8, [x24]
0x06A65C04: f50300aa  mov x21, x0
0x06A65C08: e00308aa  mov x0, x8
0x06A65C0C: 256c1c97  bl #0x3180ca0
0x06A65C10: 486600f0  adrp x8, #0x7730000
0x06A65C14: 085945f9  ldr x8, [x8, #0xab0]
0x06A65C18: e1031faa  mov x1, xzr
0x06A65C1C: e3031faa  mov x3, xzr
0x06A65C20: f60300aa  mov x22, x0
0x06A65C24: 020140f9  ldr x2, [x8]
0x06A65C28: 38c0d297  bl #0x5f15d08
0x06A65C2C: 486600f0  adrp x8, #0x7730000
0x06A65C30: 086d45f9  ldr x8, [x8, #0xad8]
0x06A65C34: e08743ad  ldp q0, q1, [sp, #0x70]
0x06A65C38: e0830491  add x0, sp, #0x120
0x06A65C3C: e10315aa  mov x1, x21
0x06A65C40: 030140f9  ldr x3, [x8]
0x06A65C44: e8830891  add x8, sp, #0x220
0x06A65C48: e20316aa  mov x2, x22
0x06A65C4C: e08604ad  stp q0, q1, [x23, #0x90]
0x06A65C50: 4d014c97  bl #0x3d66184
0x06A65C54: 486600f0  adrp x8, #0x7730000
0x06A65C58: 086945f9  ldr x8, [x8, #0xad0]
0x06A65C5C: e0830891  add x0, sp, #0x220
0x06A65C60: 010140f9  ldr x1, [x8]
0x06A65C64: e1ba6497  bl #0x43947e8
0x06A65C68: 486600f0  adrp x8, #0x7730000
0x06A65C6C: 086145f9  ldr x8, [x8, #0xac0]
0x06A65C70: 010140f9  ldr x1, [x8]
0x06A65C74: 09d64797  bl #0x3c5b498
0x06A65C78: 000500b4  cbz x0, #0x6a65d18
0x06A65C7C: 080c40f9  ldr x8, [x0, #0x18]
0x06A65C80: f50300aa  mov x21, x0
0x06A65C84: 1f050071  cmp w8, #1
0x06A65C88: 6b030054  b.lt #0x6a65cf4
0x06A65C8C: f6031faa  mov x22, xzr
0x06A65C90: 087d4092  and x8, x8, #0xffffffff
0x06A65C94: b8620191  add x24, x21, #0x58
0x06A65C98: df4228eb  cmp x22, w8, uxtw
0x06A65C9C: c2030054  b.hs #0x6a65d14
0x06A65CA0: 02037fad  ldp q2, q0, [x24, #-0x20]
0x06A65CA4: 0103dd3c  ldur q1, [x24, #-0x30]
0x06A65CA8: 02835cf8  ldur x2, [x24, #-0x38]
0x06A65CAC: 048749b8  ldr w4, [x24], #0x98
0x06A65CB0: e2820bad  stp q2, q0, [x23, #0x170]
0x06A65CB4: e15a803d  str q1, [x23, #0x160]
0x06A65CB8: 831240ad  ldp q3, q4, [x20]
0x06A65CBC: e1430191  add x1, sp, #0x50
0x06A65CC0: e3830091  add x3, sp, #0x20
0x06A65CC4: e7230091  add x7, sp, #8
0x06A65CC8: e00313aa  mov x0, x19
0x06A65CCC: e10b01ad  stp q1, q2, [sp, #0x20]
0x06A65CD0: e00f02ad  stp q0, q3, [sp, #0x40]
0x06A65CD4: ff7f01a9  stp xzr, xzr, [sp, #0x10]
0x06A65CD8: e41b803d  str q4, [sp, #0x60]
0x06A65CDC: ff0700f9  str xzr, [sp, #8]
0x06A65CE0: 0f000094  bl #0x6a65d1c
0x06A65CE4: a81a40b9  ldr w8, [x21, #0x18]
0x06A65CE8: d6060091  add x22, x22, #1
0x06A65CEC: dfc228eb  cmp x22, w8, sxtw
0x06A65CF0: 4bfdff54  b.lt #0x6a65c98
0x06A65CF4: ff430c91  add sp, sp, #0x310
0x06A65CF8: f44f45a9  ldp x20, x19, [sp, #0x50]
0x06A65CFC: f65744a9  ldp x22, x21, [sp, #0x40]
0x06A65D00: f85f43a9  ldp x24, x23, [sp, #0x30]
0x06A65D04: fa6742a9  ldp x26, x25, [sp, #0x20]
0x06A65D08: fe6f41a9  ldp x30, x27, [sp, #0x10]
0x06A65D0C: fd0746f8  ldr x29, [sp], #0x60
0x06A65D10: c0035fd6  ret
0x06A65D14: e86b1c97  bl #0x3180cb4
0x06A65D18: e56b1c97  bl #0x3180cac

; RVA 0x6A65D1C | private void ProcessExpendableItem(TickContext context, Entity entity, ExpendableComponent expendableComponent, BoardTilePositionComponent positionComponent, IdComponent idComponent, InteractionComponent interactionComponent, Nullable<PendingInteractionComponent> pendingInteraction) { }
; bytes=1484 sha256=ab4b9d6e8890692c5ed6fea07ba0a83ca43e85ab27ed1f770aa6ad080c9f13b9 status=arm64_complete_bound indexed_start=True
0x06A65D1C: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x06A65D20: fc6f01a9  stp x28, x27, [sp, #0x10]
0x06A65D24: fa6702a9  stp x26, x25, [sp, #0x20]
0x06A65D28: f85f03a9  stp x24, x23, [sp, #0x30]
0x06A65D2C: f65704a9  stp x22, x21, [sp, #0x40]
0x06A65D30: f44f05a9  stp x20, x19, [sp, #0x50]
0x06A65D34: ff8306d1  sub sp, sp, #0x1a0
0x06A65D38: 5ad03bd5  mrs x26, tpidr_el0
0x06A65D3C: 481740f9  ldr x8, [x26, #0x28]
0x06A65D40: 389600b0  adrp x24, #0x7d2a000
0x06A65D44: f90307aa  mov x25, x7
0x06A65D48: f30304aa  mov x19, x4
0x06A65D4C: e8cf00f9  str x8, [sp, #0x198]
0x06A65D50: 08835a39  ldrb w8, [x24, #0x6a0]
0x06A65D54: f60303aa  mov x22, x3
0x06A65D58: f40302aa  mov x20, x2
0x06A65D5C: f50301aa  mov x21, x1
0x06A65D60: f70300aa  mov x23, x0
0x06A65D64: c8060037  tbnz w8, #0, #0x6a65e3c
0x06A65D68: 406600f0  adrp x0, #0x7730000
0x06A65D6C: 007045f9  ldr x0, [x0, #0xae0]
0x06A65D70: 2a6b1c97  bl #0x3180a18
0x06A65D74: 406600f0  adrp x0, #0x7730000
0x06A65D78: 007445f9  ldr x0, [x0, #0xae8]
0x06A65D7C: 276b1c97  bl #0x3180a18
0x06A65D80: a06000b0  adrp x0, #0x767a000
0x06A65D84: 00ac42f9  ldr x0, [x0, #0x558]
0x06A65D88: 246b1c97  bl #0x3180a18
0x06A65D8C: 406600f0  adrp x0, #0x7730000
0x06A65D90: 007845f9  ldr x0, [x0, #0xaf0]
0x06A65D94: 216b1c97  bl #0x3180a18
0x06A65D98: 406600f0  adrp x0, #0x7730000
0x06A65D9C: 007c45f9  ldr x0, [x0, #0xaf8]
0x06A65DA0: 1e6b1c97  bl #0x3180a18
0x06A65DA4: 406600f0  adrp x0, #0x7730000
0x06A65DA8: 008045f9  ldr x0, [x0, #0xb00]
0x06A65DAC: 1b6b1c97  bl #0x3180a18
0x06A65DB0: 406600f0  adrp x0, #0x7730000
0x06A65DB4: 008445f9  ldr x0, [x0, #0xb08]
0x06A65DB8: 186b1c97  bl #0x3180a18
0x06A65DBC: 406600f0  adrp x0, #0x7730000
0x06A65DC0: 008845f9  ldr x0, [x0, #0xb10]
0x06A65DC4: 156b1c97  bl #0x3180a18
0x06A65DC8: 406600f0  adrp x0, #0x7730000
0x06A65DCC: 008c45f9  ldr x0, [x0, #0xb18]
0x06A65DD0: 126b1c97  bl #0x3180a18
0x06A65DD4: 406600f0  adrp x0, #0x7730000
0x06A65DD8: 009045f9  ldr x0, [x0, #0xb20]
0x06A65DDC: 0f6b1c97  bl #0x3180a18
0x06A65DE0: 406600f0  adrp x0, #0x7730000
0x06A65DE4: 009445f9  ldr x0, [x0, #0xb28]
0x06A65DE8: 0c6b1c97  bl #0x3180a18
0x06A65DEC: 406600f0  adrp x0, #0x7730000
0x06A65DF0: 009845f9  ldr x0, [x0, #0xb30]
0x06A65DF4: 096b1c97  bl #0x3180a18
0x06A65DF8: 406600f0  adrp x0, #0x7730000
0x06A65DFC: 009c45f9  ldr x0, [x0, #0xb38]
0x06A65E00: 066b1c97  bl #0x3180a18
0x06A65E04: 406600f0  adrp x0, #0x7730000
0x06A65E08: 00a045f9  ldr x0, [x0, #0xb40]
0x06A65E0C: 036b1c97  bl #0x3180a18
0x06A65E10: 406500f0  adrp x0, #0x7710000
0x06A65E14: 00d041f9  ldr x0, [x0, #0x3a0]
0x06A65E18: 006b1c97  bl #0x3180a18
0x06A65E1C: 405f00d0  adrp x0, #0x764f000
0x06A65E20: 00ac40f9  ldr x0, [x0, #0x158]
0x06A65E24: fd6a1c97  bl #0x3180a18
0x06A65E28: c06000b0  adrp x0, #0x767e000
0x06A65E2C: 00ac44f9  ldr x0, [x0, #0x958]
0x06A65E30: fa6a1c97  bl #0x3180a18
0x06A65E34: 28008052  movz w8, #0x1
0x06A65E38: 08831a39  strb w8, [x24, #0x6a0]
0x06A65E3C: 00e4006f  movi v0.2d, #0000000000000000
0x06A65E40: ff7f0da9  stp xzr, xzr, [sp, #0xd0]
0x06A65E44: e08305ad  stp q0, q0, [sp, #0xb0]
0x06A65E48: c80240b9  ldr w8, [x22]
0x06A65E4C: 1f010071  cmp w8, #0
0x06A65E50: ac000054  b.gt #0x6a65e64
0x06A65E54: e00316aa  mov x0, x22
0x06A65E58: e1031faa  mov x1, xzr
0x06A65E5C: 26c50094  bl #0x6a972f4
0x06A65E60: 80220037  tbnz w0, #0, #0x6a662b0
0x06A65E64: 485f00d0  adrp x8, #0x764f000
0x06A65E68: 08ad40f9  ldr x8, [x8, #0x158]
0x06A65E6C: e11240f9  ldr x1, [x23, #0x20]
0x06A65E70: e00314aa  mov x0, x20
0x06A65E74: e5031faa  mov x5, xzr
0x06A65E78: 020140f9  ldr x2, [x8]
0x06A65E7C: fc830391  add x28, sp, #0xe0
0x06A65E80: e30302aa  mov x3, x2
0x06A65E84: e40302aa  mov x4, x2
0x06A65E88: abf40094  bl #0x6aa3134
0x06A65E8C: c00ac03d  ldr q0, [x22, #0x20]
0x06A65E90: c142c13c  ldur q1, [x22, #0x14]
0x06A65E94: c242c03c  ldur q2, [x22, #4]
0x06A65E98: db0240b9  ldr w27, [x22]
0x06A65E9C: f80300aa  mov x24, x0
0x06A65EA0: e00314aa  mov x0, x20
0x06A65EA4: e1031faa  mov x1, xzr
0x06A65EA8: 80c3893c  stur q0, [x28, #0x9c]
0x06A65EAC: e2070bad  stp q2, q1, [sp, #0x160]
0x06A65EB0: 9bc80094  bl #0x6a9811c
0x06A65EB4: 00010036  tbz w0, #0, #0x6a65ed4
0x06A65EB8: a10240ad  ldp q1, q0, [x21]
0x06A65EBC: e1430291  add x1, sp, #0x90
0x06A65EC0: e20314aa  mov x2, x20
0x06A65EC4: e18304ad  stp q1, q0, [sp, #0x90]
0x06A65EC8: 08010094  bl #0x6a662e8
0x06A65ECC: 80000037  tbnz w0, #0, #0x6a65edc
0x06A65ED0: f8000014  b #0x6a662b0
0x06A65ED4: 28034039  ldrb w8, [x25]
0x06A65ED8: c81e0034  cbz w8, #0x6a662b0
0x06A65EDC: 382000b4  cbz x24, #0x6a662e0
0x06A65EE0: 7b070051  sub w27, w27, #1
0x06A65EE4: 1ba300b9  str w27, [x24, #0xa0]
0x06A65EE8: 28034039  ldrb w8, [x25]
0x06A65EEC: 48030034  cbz w8, #0x6a65f54
0x06A65EF0: 486600f0  adrp x8, #0x7730000
0x06A65EF4: 088d45f9  ldr x8, [x8, #0xb18]
0x06A65EF8: e00319aa  mov x0, x25
0x06A65EFC: 010140f9  ldr x1, [x8]
0x06A65F00: 6d5c6097  bl #0x427d0b4
0x06A65F04: e0070da9  stp x0, x1, [sp, #0xd0]
0x06A65F08: e0430391  add x0, sp, #0xd0
0x06A65F0C: e1031faa  mov x1, xzr
0x06A65F10: e5d80094  bl #0x6a9c2a4
0x06A65F14: 741e00b4  cbz x20, #0x6a662e0
0x06A65F18: 486600f0  adrp x8, #0x7730000
0x06A65F1C: 087545f9  ldr x8, [x8, #0xae8]
0x06A65F20: e20300aa  mov x2, x0
0x06A65F24: e40301aa  mov x4, x1
0x06A65F28: e00314aa  mov x0, x20
0x06A65F2C: 030140f9  ldr x3, [x8]
0x06A65F30: e10302aa  mov x1, x2
0x06A65F34: e20304aa  mov x2, x4
0x06A65F38: 2dde4697  bl #0x3c1d7ec
0x06A65F3C: e0074bad  ldp q0, q1, [sp, #0x160]
0x06A65F40: 82c3c93c  ldur q2, [x28, #0x9c]
0x06A65F44: e8c30491  add x8, sp, #0x130
0x06A65F48: e08709ad  stp q0, q1, [sp, #0x130]
0x06A65F4C: 82c3863c  stur q2, [x28, #0x6c]
0x06A65F50: 07000014  b #0x6a65f6c
0x06A65F54: e0074bad  ldp q0, q1, [sp, #0x160]
0x06A65F58: 82c3c93c  ldur q2, [x28, #0x9c]
0x06A65F5C: e08709ad  stp q0, q1, [sp, #0x130]
0x06A65F60: 82c3863c  stur q2, [x28, #0x6c]
0x06A65F64: f41b00b4  cbz x20, #0x6a662e0
0x06A65F68: e8c30491  add x8, sp, #0x130
0x06A65F6C: 496600f0  adrp x9, #0x7730000
0x06A65F70: 297145f9  ldr x9, [x9, #0xae0]
0x06A65F74: 00c1c13c  ldur q0, [x8, #0x1c]
0x06A65F78: 010940ad  ldp q1, q2, [x8]
0x06A65F7C: e1830391  add x1, sp, #0xe0
0x06A65F80: 220140f9  ldr x2, [x9]
0x06A65F84: e00314aa  mov x0, x20
0x06A65F88: fbe300b9  str w27, [sp, #0xe0]
0x06A65F8C: e043803d  str q0, [sp, #0x100]
0x06A65F90: 8243813c  stur q2, [x28, #0x14]
0x06A65F94: 8143803c  stur q1, [x28, #4]
0x06A65F98: 71db4697  bl #0x3c1cd5c
0x06A65F9C: 7f030071  cmp w27, #0
0x06A65FA0: 8d040054  b.le #0x6a66030
0x06A65FA4: c8364039  ldrb w8, [x22, #0xd]
0x06A65FA8: e8140034  cbz w8, #0x6a66244
0x06A65FAC: a10240ad  ldp q1, q0, [x21]
0x06A65FB0: f81640f9  ldr x24, [x23, #0x28]
0x06A65FB4: e18302ad  stp q1, q0, [sp, #0x50]
0x06A65FB8: c28240ad  ldp q2, q0, [x22, #0x10]
0x06A65FBC: c102c03d  ldr q1, [x22]
0x06A65FC0: f65e41a9  ldp x22, x23, [x23, #0x10]
0x06A65FC4: e2030aad  stp q2, q0, [sp, #0x140]
0x06A65FC8: e14f803d  str q1, [sp, #0x130]
0x06A65FCC: b81800b4  cbz x24, #0x6a662e0
0x06A65FD0: e08742ad  ldp q0, q1, [sp, #0x50]
0x06A65FD4: e28f49ad  ldp q2, q3, [sp, #0x130]
0x06A65FD8: e457c03d  ldr q4, [sp, #0x150]
0x06A65FDC: 4a6600f0  adrp x10, #0x7730000
0x06A65FE0: e08701ad  stp q0, q1, [sp, #0x30]
0x06A65FE4: e20f00ad  stp q2, q3, [sp]
0x06A65FE8: e40b803d  str q4, [sp, #0x20]
0x06A65FEC: 080340f9  ldr x8, [x24]
0x06A65FF0: 4a8145f9  ldr x10, [x10, #0xb00]
0x06A65FF4: 095d4279  ldrh w9, [x8, #0x12e]
0x06A65FF8: 410140f9  ldr x1, [x10]
0x06A65FFC: 290100b4  cbz x9, #0x6a66020
0x06A66000: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A66004: 4a210091  add x10, x10, #8
0x06A66008: 4b815ff8  ldur x11, [x10, #-8]
0x06A6600C: 7f0101eb  cmp x11, x1
0x06A66010: e00b0054  b.eq #0x6a6618c
0x06A66014: 290500f1  subs x9, x9, #1
0x06A66018: 4a410091  add x10, x10, #0x10
0x06A6601C: 61ffff54  b.ne #0x6a66008
0x06A66020: e00318aa  mov x0, x24
0x06A66024: e2031f2a  mov w2, wzr
0x06A66028: bac21b97  bl #0x3156b10
0x06A6602C: 5b000014  b #0x6a66198
0x06A66030: d9600090  adrp x25, #0x767e000
0x06A66034: 39af44f9  ldr x25, [x25, #0x958]
0x06A66038: e00318aa  mov x0, x24
0x06A6603C: 210340f9  ldr x1, [x25]
0x06A66040: 018c0bf8  str x1, [x0, #0xb8]!
0x06A66044: 606a1c97  bl #0x31809c4
0x06A66048: 486500d0  adrp x8, #0x7710000
0x06A6604C: 08d141f9  ldr x8, [x8, #0x3a0]
0x06A66050: f60318aa  mov x22, x24
0x06A66054: 010140f9  ldr x1, [x8]
0x06A66058: c10e0cf8  str x1, [x22, #0xc0]!
0x06A6605C: e00316aa  mov x0, x22
0x06A66060: 596a1c97  bl #0x31809c4
0x06A66064: df021eb8  stur wzr, [x22, #-0x20]
0x06A66068: a8600090  adrp x8, #0x767a000
0x06A6606C: 08ad42f9  ldr x8, [x8, #0x558]
0x06A66070: e1c30291  add x1, sp, #0xb0
0x06A66074: e00314aa  mov x0, x20
0x06A66078: 020140f9  ldr x2, [x8]
0x06A6607C: 2ae74697  bl #0x3c1fd24
0x06A66080: 60010036  tbz w0, #0, #0x6a660ac
0x06A66084: e05b40fd  ldr d0, [sp, #0xb0]
0x06A66088: 08feefd2  movz x8, #0x7ff0, lsl #48
0x06A6608C: 097cf8d2  movz x9, #0xc3e0, lsl #48
0x06A66090: 0101679e  fmov d1, x8
0x06A66094: 0800789e  fcvtzs x8, d0
0x06A66098: 0201629e  scvtf d2, x8
0x06A6609C: 0020611e  fcmp d0, d1
0x06A660A0: 2001679e  fmov d0, x9
0x06A660A4: 000c621e  fcsel d0, d0, d2, eq
0x06A660A8: 008700fd  str d0, [x24, #0x108]
0x06A660AC: a10240ad  ldp q1, q0, [x21]
0x06A660B0: e0c30191  add x0, sp, #0x70
0x06A660B4: e10314aa  mov x1, x20
0x06A660B8: e2031faa  mov x2, xzr
0x06A660BC: e18303ad  stp q1, q0, [sp, #0x70]
0x06A660C0: abcb0094  bl #0x6a98f6c
0x06A660C4: 486600d0  adrp x8, #0x7730000
0x06A660C8: b60a40f9  ldr x22, [x21, #0x10]
0x06A660CC: 087d45f9  ldr x8, [x8, #0xaf8]
0x06A660D0: 000140f9  ldr x0, [x8]
0x06A660D4: f36a1c97  bl #0x3180ca0
0x06A660D8: e1031faa  mov x1, xzr
0x06A660DC: f70300aa  mov x23, x0
0x06A660E0: b3d00094  bl #0x6a9a3ac
0x06A660E4: f70f00b4  cbz x23, #0x6a662e0
0x06A660E8: e00317aa  mov x0, x23
0x06A660EC: 140c01f8  str x20, [x0, #0x10]!
0x06A660F0: e10314aa  mov x1, x20
0x06A660F4: 346a1c97  bl #0x31809c4
0x06A660F8: f31a00b9  str w19, [x23, #0x18]
0x06A660FC: 210340f9  ldr x1, [x25]
0x06A66100: e00317aa  mov x0, x23
0x06A66104: 010c02f8  str x1, [x0, #0x20]!
0x06A66108: 2f6a1c97  bl #0x31809c4
0x06A6610C: b60e00b4  cbz x22, #0x6a662e0
0x06A66110: 486600d0  adrp x8, #0x7730000
0x06A66114: 089945f9  ldr x8, [x8, #0xb30]
0x06A66118: e00316aa  mov x0, x22
0x06A6611C: e10317aa  mov x1, x23
0x06A66120: 020140f9  ldr x2, [x8]
0x06A66124: b0744d97  bl #0x3dc33e4
0x06A66128: 486600d0  adrp x8, #0x7730000
0x06A6612C: b60a40f9  ldr x22, [x21, #0x10]
0x06A66130: 088545f9  ldr x8, [x8, #0xb08]
0x06A66134: 000140f9  ldr x0, [x8]
0x06A66138: da6a1c97  bl #0x3180ca0
0x06A6613C: e1031faa  mov x1, xzr
0x06A66140: f70300aa  mov x23, x0
0x06A66144: e4d10094  bl #0x6a9a8d4
0x06A66148: d70c00b4  cbz x23, #0x6a662e0
0x06A6614C: e00317aa  mov x0, x23
0x06A66150: 140c01f8  str x20, [x0, #0x10]!
0x06A66154: e10314aa  mov x1, x20
0x06A66158: 1b6a1c97  bl #0x31809c4
0x06A6615C: 210340f9  ldr x1, [x25]
0x06A66160: e00317aa  mov x0, x23
0x06A66164: 018c01f8  str x1, [x0, #0x18]!
0x06A66168: 176a1c97  bl #0x31809c4
0x06A6616C: e00317aa  mov x0, x23
0x06A66170: 180c02f8  str x24, [x0, #0x20]!
0x06A66174: e10318aa  mov x1, x24
0x06A66178: 136a1c97  bl #0x31809c4
0x06A6617C: 360b00b4  cbz x22, #0x6a662e0
0x06A66180: 486600d0  adrp x8, #0x7730000
0x06A66184: 089d45f9  ldr x8, [x8, #0xb38]
0x06A66188: 2b000014  b #0x6a66234
0x06A6618C: 490180b9  ldrsw x9, [x10]
0x06A66190: 0811098b  add x8, x8, x9, lsl #4
0x06A66194: 00e10491  add x0, x8, #0x138
0x06A66198: e08741ad  ldp q0, q1, [sp, #0x30]
0x06A6619C: e20f40ad  ldp q2, q3, [sp]
0x06A661A0: e40bc03d  ldr q4, [sp, #0x20]
0x06A661A4: 080040f9  ldr x8, [x0]
0x06A661A8: e08708ad  stp q0, q1, [sp, #0x110]
0x06A661AC: e20f07ad  stp q2, q3, [sp, #0xe0]
0x06A661B0: e443803d  str q4, [sp, #0x100]
0x06A661B4: 070440f9  ldr x7, [x0, #8]
0x06A661B8: e2430491  add x2, sp, #0x110
0x06A661BC: e5830391  add x5, sp, #0xe0
0x06A661C0: e00318aa  mov x0, x24
0x06A661C4: e10314aa  mov x1, x20
0x06A661C8: e30316aa  mov x3, x22
0x06A661CC: e40317aa  mov x4, x23
0x06A661D0: e603132a  mov w6, w19
0x06A661D4: 00013fd6  blr x8
0x06A661D8: 486600d0  adrp x8, #0x7730000
0x06A661DC: b60a40f9  ldr x22, [x21, #0x10]
0x06A661E0: 089145f9  ldr x8, [x8, #0xb20]
0x06A661E4: 000140f9  ldr x0, [x8]
0x06A661E8: ae6a1c97  bl #0x3180ca0
0x06A661EC: e1031faa  mov x1, xzr
0x06A661F0: f70300aa  mov x23, x0
0x06A661F4: b9d20094  bl #0x6a9acd8
0x06A661F8: 570700b4  cbz x23, #0x6a662e0
0x06A661FC: e00317aa  mov x0, x23
0x06A66200: 140c01f8  str x20, [x0, #0x10]!
0x06A66204: e10314aa  mov x1, x20
0x06A66208: ef691c97  bl #0x31809c4
0x06A6620C: f31a00b9  str w19, [x23, #0x18]
0x06A66210: c8600090  adrp x8, #0x767e000
0x06A66214: 08ad44f9  ldr x8, [x8, #0x958]
0x06A66218: e00317aa  mov x0, x23
0x06A6621C: 010140f9  ldr x1, [x8]
0x06A66220: 010c02f8  str x1, [x0, #0x20]!
0x06A66224: e8691c97  bl #0x31809c4
0x06A66228: d60500b4  cbz x22, #0x6a662e0
0x06A6622C: 486600d0  adrp x8, #0x7730000
0x06A66230: 08a145f9  ldr x8, [x8, #0xb40]
0x06A66234: 020140f9  ldr x2, [x8]
0x06A66238: e00316aa  mov x0, x22
0x06A6623C: e10317aa  mov x1, x23
0x06A66240: 69744d97  bl #0x3dc33e4
0x06A66244: 486600d0  adrp x8, #0x7730000
0x06A66248: b50a40f9  ldr x21, [x21, #0x10]
0x06A6624C: 087945f9  ldr x8, [x8, #0xaf0]
0x06A66250: 000140f9  ldr x0, [x8]
0x06A66254: 936a1c97  bl #0x3180ca0
0x06A66258: e1031faa  mov x1, xzr
0x06A6625C: f60300aa  mov x22, x0
0x06A66260: 45d00094  bl #0x6a9a374
0x06A66264: f60300b4  cbz x22, #0x6a662e0
0x06A66268: e00316aa  mov x0, x22
0x06A6626C: 140c01f8  str x20, [x0, #0x10]!
0x06A66270: e10314aa  mov x1, x20
0x06A66274: d4691c97  bl #0x31809c4
0x06A66278: d36e0329  stp w19, w27, [x22, #0x18]
0x06A6627C: c8600090  adrp x8, #0x767e000
0x06A66280: 08ad44f9  ldr x8, [x8, #0x958]
0x06A66284: e00316aa  mov x0, x22
0x06A66288: 010140f9  ldr x1, [x8]
0x06A6628C: 010c02f8  str x1, [x0, #0x20]!
0x06A66290: cd691c97  bl #0x31809c4
0x06A66294: 750200b4  cbz x21, #0x6a662e0
0x06A66298: 486600d0  adrp x8, #0x7730000
0x06A6629C: 089545f9  ldr x8, [x8, #0xb28]
0x06A662A0: e00315aa  mov x0, x21
0x06A662A4: e10316aa  mov x1, x22
0x06A662A8: 020140f9  ldr x2, [x8]
0x06A662AC: 4e744d97  bl #0x3dc33e4
0x06A662B0: 481740f9  ldr x8, [x26, #0x28]
0x06A662B4: e9cf40f9  ldr x9, [sp, #0x198]
0x06A662B8: 1f0109eb  cmp x8, x9
0x06A662BC: 41010054  b.ne #0x6a662e4
0x06A662C0: ff830691  add sp, sp, #0x1a0
0x06A662C4: f44f45a9  ldp x20, x19, [sp, #0x50]
0x06A662C8: f65744a9  ldp x22, x21, [sp, #0x40]
0x06A662CC: f85f43a9  ldp x24, x23, [sp, #0x30]
0x06A662D0: fa6742a9  ldp x26, x25, [sp, #0x20]
0x06A662D4: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x06A662D8: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x06A662DC: c0035fd6  ret
0x06A662E0: 736a1c97  bl #0x3180cac
0x06A662E4: aba11d94  bl #0x71ce990

; RVA 0x6A662E8 | private bool HasSpawnedAnItemThisTick(TickContext context, Entity expendableEntity) { }
; bytes=484 sha256=bb1bfd639d43657c6df9aed5dece22025058543f74ceb4cb1e28f72a2547ae4a status=arm64_complete_bound indexed_start=True
0x06A662E8: ff4303d1  sub sp, sp, #0xd0
0x06A662EC: fd7b07a9  stp x29, x30, [sp, #0x70]
0x06A662F0: fc6f08a9  stp x28, x27, [sp, #0x80]
0x06A662F4: fa6709a9  stp x26, x25, [sp, #0x90]
0x06A662F8: f85f0aa9  stp x24, x23, [sp, #0xa0]
0x06A662FC: f6570ba9  stp x22, x21, [sp, #0xb0]
0x06A66300: f44f0ca9  stp x20, x19, [sp, #0xc0]
0x06A66304: 36960090  adrp x22, #0x7d2a000
0x06A66308: 556600d0  adrp x21, #0x7730000
0x06A6630C: c8865a39  ldrb w8, [x22, #0x6a1]
0x06A66310: b5a645f9  ldr x21, [x21, #0xb48]
0x06A66314: f40302aa  mov x20, x2
0x06A66318: f30301aa  mov x19, x1
0x06A6631C: c8030037  tbnz w8, #0, #0x6a66394
0x06A66320: 406600b0  adrp x0, #0x772f000
0x06A66324: 002447f9  ldr x0, [x0, #0xe48]
0x06A66328: bc691c97  bl #0x3180a18
0x06A6632C: 406600d0  adrp x0, #0x7730000
0x06A66330: 00a845f9  ldr x0, [x0, #0xb50]
0x06A66334: b9691c97  bl #0x3180a18
0x06A66338: 406600b0  adrp x0, #0x772f000
0x06A6633C: 003447f9  ldr x0, [x0, #0xe68]
0x06A66340: b6691c97  bl #0x3180a18
0x06A66344: 406600d0  adrp x0, #0x7730000
0x06A66348: 00ac45f9  ldr x0, [x0, #0xb58]
0x06A6634C: b3691c97  bl #0x3180a18
0x06A66350: 406600d0  adrp x0, #0x7730000
0x06A66354: 00b045f9  ldr x0, [x0, #0xb60]
0x06A66358: b0691c97  bl #0x3180a18
0x06A6635C: 406600d0  adrp x0, #0x7730000
0x06A66360: 00b445f9  ldr x0, [x0, #0xb68]
0x06A66364: ad691c97  bl #0x3180a18
0x06A66368: 406600d0  adrp x0, #0x7730000
0x06A6636C: 00b845f9  ldr x0, [x0, #0xb70]
0x06A66370: aa691c97  bl #0x3180a18
0x06A66374: 406600d0  adrp x0, #0x7730000
0x06A66378: 00bc45f9  ldr x0, [x0, #0xb78]
0x06A6637C: a7691c97  bl #0x3180a18
0x06A66380: 406600d0  adrp x0, #0x7730000
0x06A66384: 00a445f9  ldr x0, [x0, #0xb48]
0x06A66388: a4691c97  bl #0x3180a18
0x06A6638C: 28008052  movz w8, #0x1
0x06A66390: c8861a39  strb w8, [x22, #0x6a1]
0x06A66394: a00240f9  ldr x0, [x21]
0x06A66398: 00e4006f  movi v0.2d, #0000000000000000
0x06A6639C: ff7f04a9  stp xzr, xzr, [sp, #0x40]
0x06A663A0: e00301ad  stp q0, q0, [sp, #0x20]
0x06A663A4: 3f6a1c97  bl #0x3180ca0
0x06A663A8: e1031faa  mov x1, xzr
0x06A663AC: f50300aa  mov x21, x0
0x06A663B0: 93d0b197  bl #0x56da5fc
0x06A663B4: b50800b4  cbz x21, #0x6a664c8
0x06A663B8: 586600d0  adrp x24, #0x7730000
0x06A663BC: 596600b0  adrp x25, #0x772f000
0x06A663C0: 5a6600b0  adrp x26, #0x772f000
0x06A663C4: 5b6600d0  adrp x27, #0x7730000
0x06A663C8: 5c6600d0  adrp x28, #0x7730000
0x06A663CC: 5d6600d0  adrp x29, #0x7730000
0x06A663D0: 576600d0  adrp x23, #0x7730000
0x06A663D4: 566600d0  adrp x22, #0x7730000
0x06A663D8: 18ab45f9  ldr x24, [x24, #0xb50]
0x06A663DC: 393747f9  ldr x25, [x25, #0xe68]
0x06A663E0: 5a2747f9  ldr x26, [x26, #0xe48]
0x06A663E4: 7bbb45f9  ldr x27, [x27, #0xb70]
0x06A663E8: 9caf45f9  ldr x28, [x28, #0xb58]
0x06A663EC: bdbf45f9  ldr x29, [x29, #0xb78]
0x06A663F0: f7b645f9  ldr x23, [x23, #0xb68]
0x06A663F4: d6b245f9  ldr x22, [x22, #0xb60]
0x06A663F8: e00315aa  mov x0, x21
0x06A663FC: 140c01f8  str x20, [x0, #0x10]!
0x06A66400: e10314aa  mov x1, x20
0x06A66404: 70691c97  bl #0x31809c4
0x06A66408: 610240ad  ldp q1, q0, [x19]
0x06A6640C: 000340f9  ldr x0, [x24]
0x06A66410: e10300ad  stp q1, q0, [sp]
0x06A66414: 2bce4697  bl #0x3c19cc0
0x06A66418: 280340f9  ldr x8, [x25]
0x06A6641C: f30300aa  mov x19, x0
0x06A66420: e00308aa  mov x0, x8
0x06A66424: 1f6a1c97  bl #0x3180ca0
0x06A66428: 420340f9  ldr x2, [x26]
0x06A6642C: e1031faa  mov x1, xzr
0x06A66430: e3031faa  mov x3, xzr
0x06A66434: f40300aa  mov x20, x0
0x06A66438: 34bed297  bl #0x5f15d08
0x06A6643C: e00740ad  ldp q0, q1, [sp]
0x06A66440: 630340f9  ldr x3, [x27]
0x06A66444: e8830091  add x8, sp, #0x20
0x06A66448: e0430191  add x0, sp, #0x50
0x06A6644C: e10313aa  mov x1, x19
0x06A66450: e20314aa  mov x2, x20
0x06A66454: e08702ad  stp q0, q1, [sp, #0x50]
0x06A66458: abf94b97  bl #0x3d64b04
0x06A6645C: 800340f9  ldr x0, [x28]
0x06A66460: 106a1c97  bl #0x3180ca0
0x06A66464: a20340f9  ldr x2, [x29]
0x06A66468: e10315aa  mov x1, x21
0x06A6646C: e3031faa  mov x3, xzr
0x06A66470: f30300aa  mov x19, x0
0x06A66474: f09e9f97  bl #0x524e034
0x06A66478: e20240f9  ldr x2, [x23]
0x06A6647C: e8430191  add x8, sp, #0x50
0x06A66480: e0830091  add x0, sp, #0x20
0x06A66484: e10313aa  mov x1, x19
0x06A66488: 3e7f6497  bl #0x4386180
0x06A6648C: e08742ad  ldp q0, q1, [sp, #0x50]
0x06A66490: c20240f9  ldr x2, [x22]
0x06A66494: e0830091  add x0, sp, #0x20
0x06A66498: e1030191  add x1, sp, #0x40
0x06A6649C: e00701ad  stp q0, q1, [sp, #0x20]
0x06A664A0: a47f6497  bl #0x4386330
0x06A664A4: f44f4ca9  ldp x20, x19, [sp, #0xc0]
0x06A664A8: f6574ba9  ldp x22, x21, [sp, #0xb0]
0x06A664AC: f85f4aa9  ldp x24, x23, [sp, #0xa0]
0x06A664B0: fa6749a9  ldp x26, x25, [sp, #0x90]
0x06A664B4: fc6f48a9  ldp x28, x27, [sp, #0x80]
0x06A664B8: fd7b47a9  ldp x29, x30, [sp, #0x70]
0x06A664BC: 00000012  and w0, w0, #1
0x06A664C0: ff430391  add sp, sp, #0xd0
0x06A664C4: c0035fd6  ret
0x06A664C8: f9691c97  bl #0x3180cac

; RVA 0x6A664D4 | public void .ctor() { }
; bytes=8 sha256=74d20165eec9f214221e7d4333f8f14fc3c470b13ce9d71e9a906fce42d73b0c status=arm64_complete_bound indexed_start=True
0x06A664D4: e1031faa  mov x1, xzr
0x06A664D8: 49d0b117  b #0x56da5fc

