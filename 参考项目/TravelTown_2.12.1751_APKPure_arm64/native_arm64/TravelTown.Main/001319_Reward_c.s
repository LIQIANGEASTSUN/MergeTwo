; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1319 .Reward.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A2D9BC | private static void .cctor() { }
; bytes=104 sha256=9afee5c2eca4290798df7b26e237c08301f75205a01ee1b0d76d7b6f45a3690f status=arm64_complete_bound indexed_start=True
0x06A2D9BC: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A2D9C0: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A2D9C4: f39700b0  adrp x19, #0x7d2a000
0x06A2D9C8: 146800d0  adrp x20, #0x772f000
0x06A2D9CC: 68aa5139  ldrb w8, [x19, #0x46a]
0x06A2D9D0: 94c240f9  ldr x20, [x20, #0x180]
0x06A2D9D4: c8000037  tbnz w8, #0, #0x6a2d9ec
0x06A2D9D8: 006800d0  adrp x0, #0x772f000
0x06A2D9DC: 00c040f9  ldr x0, [x0, #0x180]
0x06A2D9E0: 0e4c1d97  bl #0x3180a18
0x06A2D9E4: 28008052  movz w8, #0x1
0x06A2D9E8: 68aa1139  strb w8, [x19, #0x46a]
0x06A2D9EC: 800240f9  ldr x0, [x20]
0x06A2D9F0: ac4c1d97  bl #0x3180ca0
0x06A2D9F4: e1031faa  mov x1, xzr
0x06A2D9F8: f30300aa  mov x19, x0
0x06A2D9FC: 00b3b297  bl #0x56da5fc
0x06A2DA00: 880240f9  ldr x8, [x20]
0x06A2DA04: e10313aa  mov x1, x19
0x06A2DA08: 085d40f9  ldr x8, [x8, #0xb8]
0x06A2DA0C: 130100f9  str x19, [x8]
0x06A2DA10: 880240f9  ldr x8, [x20]
0x06A2DA14: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A2DA18: 005d40f9  ldr x0, [x8, #0xb8]
0x06A2DA1C: fe0742f8  ldr x30, [sp], #0x20
0x06A2DA20: e94b1d17  b #0x31809c4

; RVA 0x6A2DA24 | public void .ctor() { }
; bytes=8 sha256=392ae1eea9189cb919201de0964f2bf762acd11b591c4bca76e94d09d6754fd7 status=arm64_complete_bound indexed_start=True
0x06A2DA24: e1031faa  mov x1, xzr
0x06A2DA28: f5b2b217  b #0x56da5fc

; RVA 0x6A2DA2C | internal bool <get_AllItemRewards>b__76_0(IRewardViewData q) { }
; bytes=248 sha256=2560023a374781e7ce1820e8dee76ce9df0fed4ad9eed7fcb4c79aba300f3fc5 status=arm64_complete_bound indexed_start=True
0x06A2DA2C: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A2DA30: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A2DA34: f59700b0  adrp x21, #0x7d2a000
0x06A2DA38: 346200d0  adrp x20, #0x7673000
0x06A2DA3C: a8ae5139  ldrb w8, [x21, #0x46b]
0x06A2DA40: 945e40f9  ldr x20, [x20, #0xb8]
0x06A2DA44: f30301aa  mov x19, x1
0x06A2DA48: 88010037  tbnz w8, #0, #0x6a2da78
0x06A2DA4C: 406100d0  adrp x0, #0x7657000
0x06A2DA50: 002446f9  ldr x0, [x0, #0xc48]
0x06A2DA54: f14b1d97  bl #0x3180a18
0x06A2DA58: 20620090  adrp x0, #0x7671000
0x06A2DA5C: 00c443f9  ldr x0, [x0, #0x788]
0x06A2DA60: ee4b1d97  bl #0x3180a18
0x06A2DA64: 206200d0  adrp x0, #0x7673000
0x06A2DA68: 005c40f9  ldr x0, [x0, #0xb8]
0x06A2DA6C: eb4b1d97  bl #0x3180a18
0x06A2DA70: 28008052  movz w8, #0x1
0x06A2DA74: a8ae1139  strb w8, [x21, #0x46b]
0x06A2DA78: 800240f9  ldr x0, [x20]
0x06A2DA7C: 08e040b9  ldr w8, [x0, #0xe0]
0x06A2DA80: 68000035  cbnz w8, #0x6a2da8c
0x06A2DA84: 424c1d97  bl #0x3180b8c
0x06A2DA88: 800240f9  ldr x0, [x20]
0x06A2DA8C: b30400b4  cbz x19, #0x6a2db20
0x06A2DA90: 2a620090  adrp x10, #0x7671000
0x06A2DA94: 095c40f9  ldr x9, [x0, #0xb8]
0x06A2DA98: 680240f9  ldr x8, [x19]
0x06A2DA9C: 4ac543f9  ldr x10, [x10, #0x788]
0x06A2DAA0: 341541f9  ldr x20, [x9, #0x228]
0x06A2DAA4: 095d4279  ldrh w9, [x8, #0x12e]
0x06A2DAA8: 410140f9  ldr x1, [x10]
0x06A2DAAC: 290100b4  cbz x9, #0x6a2dad0
0x06A2DAB0: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A2DAB4: 4a210091  add x10, x10, #8
0x06A2DAB8: 4b815ff8  ldur x11, [x10, #-8]
0x06A2DABC: 7f0101eb  cmp x11, x1
0x06A2DAC0: 00010054  b.eq #0x6a2dae0
0x06A2DAC4: 290500f1  subs x9, x9, #1
0x06A2DAC8: 4a410091  add x10, x10, #0x10
0x06A2DACC: 61ffff54  b.ne #0x6a2dab8
0x06A2DAD0: 42008052  movz w2, #0x2
0x06A2DAD4: e00313aa  mov x0, x19
0x06A2DAD8: 0ea41c97  bl #0x3156b10
0x06A2DADC: 05000014  b #0x6a2daf0
0x06A2DAE0: 490140b9  ldr w9, [x10]
0x06A2DAE4: 29090011  add w9, w9, #2
0x06A2DAE8: 08d1298b  add x8, x8, w9, sxtw #4
0x06A2DAEC: 00e10491  add x0, x8, #0x138
0x06A2DAF0: 080440a9  ldp x8, x1, [x0]
0x06A2DAF4: e00313aa  mov x0, x19
0x06A2DAF8: 00013fd6  blr x8
0x06A2DAFC: 340100b4  cbz x20, #0x6a2db20
0x06A2DB00: 486100d0  adrp x8, #0x7657000
0x06A2DB04: 082546f9  ldr x8, [x8, #0xc48]
0x06A2DB08: e10300aa  mov x1, x0
0x06A2DB0C: e00314aa  mov x0, x20
0x06A2DB10: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A2DB14: 020140f9  ldr x2, [x8]
0x06A2DB18: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A2DB1C: 864aa217  b #0x52c0534
0x06A2DB20: 634c1d97  bl #0x3180cac

; RVA 0x6A2DB24 | internal bool <get_AllRewardsCountWithoutOutOfBoosters>b__80_0(BoosterMultiple booster) { }
; bytes=40 sha256=0701405233c14730edb749ea16d4378c9e1c1a0ae03bb5aba018273e49e813be status=arm64_complete_bound indexed_start=True
0x06A2DB24: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A2DB28: 010100b4  cbz x1, #0x6a2db48
0x06A2DB2C: 281040f9  ldr x8, [x1, #0x20]
0x06A2DB30: c80000b4  cbz x8, #0x6a2db48
0x06A2DB34: 081140b9  ldr w8, [x8, #0x10]
0x06A2DB38: 1f090071  cmp w8, #2
0x06A2DB3C: e0179f1a  cset w0, eq
0x06A2DB40: fe0741f8  ldr x30, [sp], #0x10
0x06A2DB44: c0035fd6  ret
0x06A2DB48: 594c1d97  bl #0x3180cac

; RVA 0x6A2DB4C | internal IRewardViewData <Clone>b__83_0(IRewardViewData item) { }
; bytes=156 sha256=970d9e9b588ea88b9c4102e6fba097ce0bcf39f4b3280fee9f5242881d56c3cc status=arm64_complete_bound indexed_start=True
0x06A2DB4C: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A2DB50: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A2DB54: f49700b0  adrp x20, #0x7d2a000
0x06A2DB58: 88b25139  ldrb w8, [x20, #0x46c]
0x06A2DB5C: f30301aa  mov x19, x1
0x06A2DB60: c8000037  tbnz w8, #0, #0x6a2db78
0x06A2DB64: 606200d0  adrp x0, #0x767b000
0x06A2DB68: 006041f9  ldr x0, [x0, #0x2c0]
0x06A2DB6C: ab4b1d97  bl #0x3180a18
0x06A2DB70: 28008052  movz w8, #0x1
0x06A2DB74: 88b21139  strb w8, [x20, #0x46c]
0x06A2DB78: 730300b4  cbz x19, #0x6a2dbe4
0x06A2DB7C: 6a6200d0  adrp x10, #0x767b000
0x06A2DB80: 680240f9  ldr x8, [x19]
0x06A2DB84: 4a6141f9  ldr x10, [x10, #0x2c0]
0x06A2DB88: 095d4279  ldrh w9, [x8, #0x12e]
0x06A2DB8C: 410140f9  ldr x1, [x10]
0x06A2DB90: 290100b4  cbz x9, #0x6a2dbb4
0x06A2DB94: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A2DB98: 4a210091  add x10, x10, #8
0x06A2DB9C: 4b815ff8  ldur x11, [x10, #-8]
0x06A2DBA0: 7f0101eb  cmp x11, x1
0x06A2DBA4: 00010054  b.eq #0x6a2dbc4
0x06A2DBA8: 290500f1  subs x9, x9, #1
0x06A2DBAC: 4a410091  add x10, x10, #0x10
0x06A2DBB0: 61ffff54  b.ne #0x6a2db9c
0x06A2DBB4: e00313aa  mov x0, x19
0x06A2DBB8: e2031f2a  mov w2, wzr
0x06A2DBBC: d5a31c97  bl #0x3156b10
0x06A2DBC0: 04000014  b #0x6a2dbd0
0x06A2DBC4: 490180b9  ldrsw x9, [x10]
0x06A2DBC8: 0811098b  add x8, x8, x9, lsl #4
0x06A2DBCC: 00e10491  add x0, x8, #0x138
0x06A2DBD0: 020440a9  ldp x2, x1, [x0]
0x06A2DBD4: e00313aa  mov x0, x19
0x06A2DBD8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A2DBDC: fe0742f8  ldr x30, [sp], #0x20
0x06A2DBE0: 40001fd6  br x2
0x06A2DBE4: 324c1d97  bl #0x3180cac

; RVA 0x6A2DBE8 | internal ConditionalRewardMultiple <Clone>b__83_1(ConditionalRewardMultiple item) { }
; bytes=128 sha256=6250c0c87ec60695b558685a52e3558b3aa95d9e14c06824b88453f9d0a1f9da status=arm64_complete_bound indexed_start=True
0x06A2DBE8: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A2DBEC: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A2DBF0: f49700b0  adrp x20, #0x7d2a000
0x06A2DBF4: 88b65139  ldrb w8, [x20, #0x46d]
0x06A2DBF8: f30301aa  mov x19, x1
0x06A2DBFC: c8000037  tbnz w8, #0, #0x6a2dc14
0x06A2DC00: 806200f0  adrp x0, #0x7680000
0x06A2DC04: 000041f9  ldr x0, [x0, #0x200]
0x06A2DC08: 844b1d97  bl #0x3180a18
0x06A2DC0C: 28008052  movz w8, #0x1
0x06A2DC10: 88b61139  strb w8, [x20, #0x46d]
0x06A2DC14: 930200b4  cbz x19, #0x6a2dc64
0x06A2DC18: 896200f0  adrp x9, #0x7680000
0x06A2DC1C: 290141f9  ldr x9, [x9, #0x200]
0x06A2DC20: 680240f9  ldr x8, [x19]
0x06A2DC24: 210140f9  ldr x1, [x9]
0x06A2DC28: 0ac14439  ldrb w10, [x8, #0x130]
0x06A2DC2C: 29c04439  ldrb w9, [x1, #0x130]
0x06A2DC30: 5f01096b  cmp w10, w9
0x06A2DC34: 43010054  b.lo #0x6a2dc5c
0x06A2DC38: 086540f9  ldr x8, [x8, #0xc8]
0x06A2DC3C: 080d098b  add x8, x8, x9, lsl #3
0x06A2DC40: 08815ff8  ldur x8, [x8, #-8]
0x06A2DC44: 1f0101eb  cmp x8, x1
0x06A2DC48: a1000054  b.ne #0x6a2dc5c
0x06A2DC4C: e00313aa  mov x0, x19
0x06A2DC50: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A2DC54: fe0742f8  ldr x30, [sp], #0x20
0x06A2DC58: c0035fd6  ret
0x06A2DC5C: e00313aa  mov x0, x19
0x06A2DC60: fa4c1d97  bl #0x3181048
0x06A2DC64: 124c1d97  bl #0x3180cac

; RVA 0x6A2DC68 | internal IRewardViewData <CloneExcludingAmountType>b__84_2(IRewardViewData item) { }
; bytes=156 sha256=8c95902a78a7921cc0fca8331ca8882a5f48389001345fb25490d2936f35955f status=arm64_complete_bound indexed_start=True
0x06A2DC68: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A2DC6C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A2DC70: f49700b0  adrp x20, #0x7d2a000
0x06A2DC74: 88ba5139  ldrb w8, [x20, #0x46e]
0x06A2DC78: f30301aa  mov x19, x1
0x06A2DC7C: c8000037  tbnz w8, #0, #0x6a2dc94
0x06A2DC80: 606200d0  adrp x0, #0x767b000
0x06A2DC84: 006041f9  ldr x0, [x0, #0x2c0]
0x06A2DC88: 644b1d97  bl #0x3180a18
0x06A2DC8C: 28008052  movz w8, #0x1
0x06A2DC90: 88ba1139  strb w8, [x20, #0x46e]
0x06A2DC94: 730300b4  cbz x19, #0x6a2dd00
0x06A2DC98: 6a6200d0  adrp x10, #0x767b000
0x06A2DC9C: 680240f9  ldr x8, [x19]
0x06A2DCA0: 4a6141f9  ldr x10, [x10, #0x2c0]
0x06A2DCA4: 095d4279  ldrh w9, [x8, #0x12e]
0x06A2DCA8: 410140f9  ldr x1, [x10]
0x06A2DCAC: 290100b4  cbz x9, #0x6a2dcd0
0x06A2DCB0: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A2DCB4: 4a210091  add x10, x10, #8
0x06A2DCB8: 4b815ff8  ldur x11, [x10, #-8]
0x06A2DCBC: 7f0101eb  cmp x11, x1
0x06A2DCC0: 00010054  b.eq #0x6a2dce0
0x06A2DCC4: 290500f1  subs x9, x9, #1
0x06A2DCC8: 4a410091  add x10, x10, #0x10
0x06A2DCCC: 61ffff54  b.ne #0x6a2dcb8
0x06A2DCD0: e00313aa  mov x0, x19
0x06A2DCD4: e2031f2a  mov w2, wzr
0x06A2DCD8: 8ea31c97  bl #0x3156b10
0x06A2DCDC: 04000014  b #0x6a2dcec
0x06A2DCE0: 490180b9  ldrsw x9, [x10]
0x06A2DCE4: 0811098b  add x8, x8, x9, lsl #4
0x06A2DCE8: 00e10491  add x0, x8, #0x138
0x06A2DCEC: 020440a9  ldp x2, x1, [x0]
0x06A2DCF0: e00313aa  mov x0, x19
0x06A2DCF4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A2DCF8: fe0742f8  ldr x30, [sp], #0x20
0x06A2DCFC: 40001fd6  br x2
0x06A2DD00: eb4b1d97  bl #0x3180cac

; RVA 0x6A2DD04 | internal ConditionalRewardMultiple <CloneExcludingAmountType>b__84_3(ConditionalRewardMultiple item) { }
; bytes=128 sha256=c6a83c896f083f5fabf35f156c1902726ebad9f21ee80c79a9f0885b558b3d00 status=arm64_complete_bound indexed_start=True
0x06A2DD04: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A2DD08: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A2DD0C: f49700b0  adrp x20, #0x7d2a000
0x06A2DD10: 88be5139  ldrb w8, [x20, #0x46f]
0x06A2DD14: f30301aa  mov x19, x1
0x06A2DD18: c8000037  tbnz w8, #0, #0x6a2dd30
0x06A2DD1C: 806200f0  adrp x0, #0x7680000
0x06A2DD20: 000041f9  ldr x0, [x0, #0x200]
0x06A2DD24: 3d4b1d97  bl #0x3180a18
0x06A2DD28: 28008052  movz w8, #0x1
0x06A2DD2C: 88be1139  strb w8, [x20, #0x46f]
0x06A2DD30: 930200b4  cbz x19, #0x6a2dd80
0x06A2DD34: 896200f0  adrp x9, #0x7680000
0x06A2DD38: 290141f9  ldr x9, [x9, #0x200]
0x06A2DD3C: 680240f9  ldr x8, [x19]
0x06A2DD40: 210140f9  ldr x1, [x9]
0x06A2DD44: 0ac14439  ldrb w10, [x8, #0x130]
0x06A2DD48: 29c04439  ldrb w9, [x1, #0x130]
0x06A2DD4C: 5f01096b  cmp w10, w9
0x06A2DD50: 43010054  b.lo #0x6a2dd78
0x06A2DD54: 086540f9  ldr x8, [x8, #0xc8]
0x06A2DD58: 080d098b  add x8, x8, x9, lsl #3
0x06A2DD5C: 08815ff8  ldur x8, [x8, #-8]
0x06A2DD60: 1f0101eb  cmp x8, x1
0x06A2DD64: a1000054  b.ne #0x6a2dd78
0x06A2DD68: e00313aa  mov x0, x19
0x06A2DD6C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A2DD70: fe0742f8  ldr x30, [sp], #0x20
0x06A2DD74: c0035fd6  ret
0x06A2DD78: e00313aa  mov x0, x19
0x06A2DD7C: b34c1d97  bl #0x3181048
0x06A2DD80: cb4b1d97  bl #0x3180cac

; RVA 0x6A2DD84 | internal string <GetGroupedPortalItems>b__90_0(PortalItem portalItem) { }
; bytes=24 sha256=d73cb65dfbfd879fc05fbf9362a1c5e300bf7a19bd89e89f6dd125e8ea5eed99 status=arm64_complete_bound indexed_start=True
0x06A2DD84: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A2DD88: 810000b4  cbz x1, #0x6a2dd98
0x06A2DD8C: 203040f9  ldr x0, [x1, #0x60]
0x06A2DD90: fe0741f8  ldr x30, [sp], #0x10
0x06A2DD94: c0035fd6  ret
0x06A2DD98: c54b1d97  bl #0x3180cac

; RVA 0x6A2DD9C | internal int <GetGroupedPortalItems>b__90_1(PortalItem item) { }
; bytes=24 sha256=1c6a2f943ea20c9f1d4e2a9043d6e0e004b62545f629ae8ed7c00926db108dd7 status=arm64_complete_bound indexed_start=True
0x06A2DD9C: 810000b4  cbz x1, #0x6a2ddac
0x06A2DDA0: e00301aa  mov x0, x1
0x06A2DDA4: e1031faa  mov x1, xzr
0x06A2DDA8: 55c4d717  b #0x601eefc
0x06A2DDAC: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A2DDB0: bf4b1d97  bl #0x3180cac

; RVA 0x6A2DDB4 | internal bool <CompareItemBoxes>b__93_0(ItemMultiple x) { }
; bytes=468 sha256=d5cad3b3d30a90e68388094201f45f0b07c112e89d5bcd7f1752e1702b475223 status=arm64_complete_bound indexed_start=True
0x06A2DDB4: fe0f1df8  str x30, [sp, #-0x30]!
0x06A2DDB8: f65701a9  stp x22, x21, [sp, #0x10]
0x06A2DDBC: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A2DDC0: f49700b0  adrp x20, #0x7d2a000
0x06A2DDC4: 88c25139  ldrb w8, [x20, #0x470]
0x06A2DDC8: f30301aa  mov x19, x1
0x06A2DDCC: 88010037  tbnz w8, #0, #0x6a2ddfc
0x06A2DDD0: 006500f0  adrp x0, #0x76d0000
0x06A2DDD4: 009841f9  ldr x0, [x0, #0x330]
0x06A2DDD8: 104b1d97  bl #0x3180a18
0x06A2DDDC: 806200f0  adrp x0, #0x7680000
0x06A2DDE0: 004843f9  ldr x0, [x0, #0x690]
0x06A2DDE4: 0d4b1d97  bl #0x3180a18
0x06A2DDE8: 606200b0  adrp x0, #0x767a000
0x06A2DDEC: 00f443f9  ldr x0, [x0, #0x7e8]
0x06A2DDF0: 0a4b1d97  bl #0x3180a18
0x06A2DDF4: 28008052  movz w8, #0x1
0x06A2DDF8: 88c21139  strb w8, [x20, #0x470]
0x06A2DDFC: 530c00b4  cbz x19, #0x6a2df84
0x06A2DE00: 756200b0  adrp x21, #0x767a000
0x06A2DE04: b5f643f9  ldr x21, [x21, #0x7e8]
0x06A2DE08: e00313aa  mov x0, x19
0x06A2DE0C: a10240f9  ldr x1, [x21]
0x06A2DE10: 0291a597  bl #0x5392218
0x06A2DE14: 000b00b4  cbz x0, #0x6a2df74
0x06A2DE18: a10240f9  ldr x1, [x21]
0x06A2DE1C: e00313aa  mov x0, x19
0x06A2DE20: fe90a597  bl #0x5392218
0x06A2DE24: 000b00b4  cbz x0, #0x6a2df84
0x06A2DE28: 966200f0  adrp x22, #0x7680000
0x06A2DE2C: 080040f9  ldr x8, [x0]
0x06A2DE30: d64a43f9  ldr x22, [x22, #0x690]
0x06A2DE34: f40300aa  mov x20, x0
0x06A2DE38: 095d4279  ldrh w9, [x8, #0x12e]
0x06A2DE3C: c10240f9  ldr x1, [x22]
0x06A2DE40: 290100b4  cbz x9, #0x6a2de64
0x06A2DE44: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A2DE48: 4a210091  add x10, x10, #8
0x06A2DE4C: 4b815ff8  ldur x11, [x10, #-8]
0x06A2DE50: 7f0101eb  cmp x11, x1
0x06A2DE54: 00010054  b.eq #0x6a2de74
0x06A2DE58: 290500f1  subs x9, x9, #1
0x06A2DE5C: 4a410091  add x10, x10, #0x10
0x06A2DE60: 61ffff54  b.ne #0x6a2de4c
0x06A2DE64: 82008052  movz w2, #0x4
0x06A2DE68: e00314aa  mov x0, x20
0x06A2DE6C: 29a31c97  bl #0x3156b10
0x06A2DE70: 05000014  b #0x6a2de84
0x06A2DE74: 490140b9  ldr w9, [x10]
0x06A2DE78: 29110011  add w9, w9, #4
0x06A2DE7C: 08d1298b  add x8, x8, w9, sxtw #4
0x06A2DE80: 00e10491  add x0, x8, #0x138
0x06A2DE84: 080440a9  ldp x8, x1, [x0]
0x06A2DE88: e00314aa  mov x0, x20
0x06A2DE8C: 00013fd6  blr x8
0x06A2DE90: 200700b4  cbz x0, #0x6a2df74
0x06A2DE94: a10240f9  ldr x1, [x21]
0x06A2DE98: e00313aa  mov x0, x19
0x06A2DE9C: df90a597  bl #0x5392218
0x06A2DEA0: 200700b4  cbz x0, #0x6a2df84
0x06A2DEA4: 080040f9  ldr x8, [x0]
0x06A2DEA8: c10240f9  ldr x1, [x22]
0x06A2DEAC: f30300aa  mov x19, x0
0x06A2DEB0: 095d4279  ldrh w9, [x8, #0x12e]
0x06A2DEB4: 290100b4  cbz x9, #0x6a2ded8
0x06A2DEB8: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A2DEBC: 4a210091  add x10, x10, #8
0x06A2DEC0: 4b815ff8  ldur x11, [x10, #-8]
0x06A2DEC4: 7f0101eb  cmp x11, x1
0x06A2DEC8: 00010054  b.eq #0x6a2dee8
0x06A2DECC: 290500f1  subs x9, x9, #1
0x06A2DED0: 4a410091  add x10, x10, #0x10
0x06A2DED4: 61ffff54  b.ne #0x6a2dec0
0x06A2DED8: 82008052  movz w2, #0x4
0x06A2DEDC: e00313aa  mov x0, x19
0x06A2DEE0: 0ca31c97  bl #0x3156b10
0x06A2DEE4: 05000014  b #0x6a2def8
0x06A2DEE8: 490140b9  ldr w9, [x10]
0x06A2DEEC: 29110011  add w9, w9, #4
0x06A2DEF0: 08d1298b  add x8, x8, w9, sxtw #4
0x06A2DEF4: 00e10491  add x0, x8, #0x138
0x06A2DEF8: 080440a9  ldp x8, x1, [x0]
0x06A2DEFC: e00313aa  mov x0, x19
0x06A2DF00: 00013fd6  blr x8
0x06A2DF04: 000400b4  cbz x0, #0x6a2df84
0x06A2DF08: 0a6500f0  adrp x10, #0x76d0000
0x06A2DF0C: 080040f9  ldr x8, [x0]
0x06A2DF10: 4a9941f9  ldr x10, [x10, #0x330]
0x06A2DF14: f30300aa  mov x19, x0
0x06A2DF18: 095d4279  ldrh w9, [x8, #0x12e]
0x06A2DF1C: 410140f9  ldr x1, [x10]
0x06A2DF20: 290100b4  cbz x9, #0x6a2df44
0x06A2DF24: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A2DF28: 4a210091  add x10, x10, #8
0x06A2DF2C: 4b815ff8  ldur x11, [x10, #-8]
0x06A2DF30: 7f0101eb  cmp x11, x1
0x06A2DF34: 00010054  b.eq #0x6a2df54
0x06A2DF38: 290500f1  subs x9, x9, #1
0x06A2DF3C: 4a410091  add x10, x10, #0x10
0x06A2DF40: 61ffff54  b.ne #0x6a2df2c
0x06A2DF44: e00313aa  mov x0, x19
0x06A2DF48: e2031f2a  mov w2, wzr
0x06A2DF4C: f1a21c97  bl #0x3156b10
0x06A2DF50: 04000014  b #0x6a2df60
0x06A2DF54: 490180b9  ldrsw x9, [x10]
0x06A2DF58: 0811098b  add x8, x8, x9, lsl #4
0x06A2DF5C: 00e10491  add x0, x8, #0x138
0x06A2DF60: 080440a9  ldp x8, x1, [x0]
0x06A2DF64: e00313aa  mov x0, x19
0x06A2DF68: 00013fd6  blr x8
0x06A2DF6C: 1f040071  cmp w0, #1
0x06A2DF70: e0179f1a  cset w0, eq
0x06A2DF74: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A2DF78: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A2DF7C: fe0743f8  ldr x30, [sp], #0x30
0x06A2DF80: c0035fd6  ret
0x06A2DF84: 4a4b1d97  bl #0x3180cac

; RVA 0x6A2DF88 | internal bool <CompareItemBoxes>b__93_1(ItemMultiple x) { }
; bytes=132 sha256=c11038b6f5c95b8c26322959dce3a3364d7505e6befcbdd85bee8a07a46e94a6 status=arm64_complete_bound indexed_start=True
0x06A2DF88: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A2DF8C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A2DF90: f49700b0  adrp x20, #0x7d2a000
0x06A2DF94: 88c65139  ldrb w8, [x20, #0x471]
0x06A2DF98: f30301aa  mov x19, x1
0x06A2DF9C: c8000037  tbnz w8, #0, #0x6a2dfb4
0x06A2DFA0: a06200b0  adrp x0, #0x7682000
0x06A2DFA4: 00ec46f9  ldr x0, [x0, #0xdd8]
0x06A2DFA8: 9c4a1d97  bl #0x3180a18
0x06A2DFAC: 28008052  movz w8, #0x1
0x06A2DFB0: 88c61139  strb w8, [x20, #0x471]
0x06A2DFB4: b30200b4  cbz x19, #0x6a2e008
0x06A2DFB8: 683240f9  ldr x8, [x19, #0x60]
0x06A2DFBC: 280100b4  cbz x8, #0x6a2dfe0
0x06A2DFC0: aa6200b0  adrp x10, #0x7682000
0x06A2DFC4: 4aed46f9  ldr x10, [x10, #0xdd8]
0x06A2DFC8: 090140f9  ldr x9, [x8]
0x06A2DFCC: 480140f9  ldr x8, [x10]
0x06A2DFD0: 2bc14439  ldrb w11, [x9, #0x130]
0x06A2DFD4: 0ac14439  ldrb w10, [x8, #0x130]
0x06A2DFD8: 7f010a6b  cmp w11, w10
0x06A2DFDC: 62000054  b.hs #0x6a2dfe8
0x06A2DFE0: e0031f2a  mov w0, wzr
0x06A2DFE4: 06000014  b #0x6a2dffc
0x06A2DFE8: 296540f9  ldr x9, [x9, #0xc8]
0x06A2DFEC: 290d0a8b  add x9, x9, x10, lsl #3
0x06A2DFF0: 29815ff8  ldur x9, [x9, #-8]
0x06A2DFF4: 3f0108eb  cmp x9, x8
0x06A2DFF8: e0179f1a  cset w0, eq
0x06A2DFFC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A2E000: fe0742f8  ldr x30, [sp], #0x20
0x06A2E004: c0035fd6  ret
0x06A2E008: 294b1d97  bl #0x3180cac

; RVA 0x6A2E00C | internal MergeItemWeakReference <CompareItemBoxes>b__93_2(ItemMultiple x) { }
; bytes=24 sha256=be7ab7fbca5bed735a4b2be597b3270e261ba18f516c1f3754825c692a5dc2a5 status=arm64_complete_bound indexed_start=True
0x06A2E00C: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A2E010: 810000b4  cbz x1, #0x6a2e020
0x06A2E014: 203040f9  ldr x0, [x1, #0x60]
0x06A2E018: fe0741f8  ldr x30, [sp], #0x10
0x06A2E01C: c0035fd6  ret
0x06A2E020: 234b1d97  bl #0x3180cac

; RVA 0x6A2E024 | internal bool <CompareItemBoxes>b__93_3(ItemMultiple x) { }
; bytes=468 sha256=456b8fc416e35fe5f12dcbc4ee79ccd9b4dc3b00cc2d58db273de48150b885f6 status=arm64_complete_bound indexed_start=True
0x06A2E024: fe0f1df8  str x30, [sp, #-0x30]!
0x06A2E028: f65701a9  stp x22, x21, [sp, #0x10]
0x06A2E02C: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A2E030: f4970090  adrp x20, #0x7d2a000
0x06A2E034: 88ca5139  ldrb w8, [x20, #0x472]
0x06A2E038: f30301aa  mov x19, x1
0x06A2E03C: 88010037  tbnz w8, #0, #0x6a2e06c
0x06A2E040: 006500d0  adrp x0, #0x76d0000
0x06A2E044: 009841f9  ldr x0, [x0, #0x330]
0x06A2E048: 744a1d97  bl #0x3180a18
0x06A2E04C: 806200d0  adrp x0, #0x7680000
0x06A2E050: 004843f9  ldr x0, [x0, #0x690]
0x06A2E054: 714a1d97  bl #0x3180a18
0x06A2E058: 60620090  adrp x0, #0x767a000
0x06A2E05C: 00f443f9  ldr x0, [x0, #0x7e8]
0x06A2E060: 6e4a1d97  bl #0x3180a18
0x06A2E064: 28008052  movz w8, #0x1
0x06A2E068: 88ca1139  strb w8, [x20, #0x472]
0x06A2E06C: 530c00b4  cbz x19, #0x6a2e1f4
0x06A2E070: 75620090  adrp x21, #0x767a000
0x06A2E074: b5f643f9  ldr x21, [x21, #0x7e8]
0x06A2E078: e00313aa  mov x0, x19
0x06A2E07C: a10240f9  ldr x1, [x21]
0x06A2E080: 6690a597  bl #0x5392218
0x06A2E084: 000b00b4  cbz x0, #0x6a2e1e4
0x06A2E088: a10240f9  ldr x1, [x21]
0x06A2E08C: e00313aa  mov x0, x19
0x06A2E090: 6290a597  bl #0x5392218
0x06A2E094: 000b00b4  cbz x0, #0x6a2e1f4
0x06A2E098: 966200d0  adrp x22, #0x7680000
0x06A2E09C: 080040f9  ldr x8, [x0]
0x06A2E0A0: d64a43f9  ldr x22, [x22, #0x690]
0x06A2E0A4: f40300aa  mov x20, x0
0x06A2E0A8: 095d4279  ldrh w9, [x8, #0x12e]
0x06A2E0AC: c10240f9  ldr x1, [x22]
0x06A2E0B0: 290100b4  cbz x9, #0x6a2e0d4
0x06A2E0B4: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A2E0B8: 4a210091  add x10, x10, #8
0x06A2E0BC: 4b815ff8  ldur x11, [x10, #-8]
0x06A2E0C0: 7f0101eb  cmp x11, x1
0x06A2E0C4: 00010054  b.eq #0x6a2e0e4
0x06A2E0C8: 290500f1  subs x9, x9, #1
0x06A2E0CC: 4a410091  add x10, x10, #0x10
0x06A2E0D0: 61ffff54  b.ne #0x6a2e0bc
0x06A2E0D4: 82008052  movz w2, #0x4
0x06A2E0D8: e00314aa  mov x0, x20
0x06A2E0DC: 8da21c97  bl #0x3156b10
0x06A2E0E0: 05000014  b #0x6a2e0f4
0x06A2E0E4: 490140b9  ldr w9, [x10]
0x06A2E0E8: 29110011  add w9, w9, #4
0x06A2E0EC: 08d1298b  add x8, x8, w9, sxtw #4
0x06A2E0F0: 00e10491  add x0, x8, #0x138
0x06A2E0F4: 080440a9  ldp x8, x1, [x0]
0x06A2E0F8: e00314aa  mov x0, x20
0x06A2E0FC: 00013fd6  blr x8
0x06A2E100: 200700b4  cbz x0, #0x6a2e1e4
0x06A2E104: a10240f9  ldr x1, [x21]
0x06A2E108: e00313aa  mov x0, x19
0x06A2E10C: 4390a597  bl #0x5392218
0x06A2E110: 200700b4  cbz x0, #0x6a2e1f4
0x06A2E114: 080040f9  ldr x8, [x0]
0x06A2E118: c10240f9  ldr x1, [x22]
0x06A2E11C: f30300aa  mov x19, x0
0x06A2E120: 095d4279  ldrh w9, [x8, #0x12e]
0x06A2E124: 290100b4  cbz x9, #0x6a2e148
0x06A2E128: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A2E12C: 4a210091  add x10, x10, #8
0x06A2E130: 4b815ff8  ldur x11, [x10, #-8]
0x06A2E134: 7f0101eb  cmp x11, x1
0x06A2E138: 00010054  b.eq #0x6a2e158
0x06A2E13C: 290500f1  subs x9, x9, #1
0x06A2E140: 4a410091  add x10, x10, #0x10
0x06A2E144: 61ffff54  b.ne #0x6a2e130
0x06A2E148: 82008052  movz w2, #0x4
0x06A2E14C: e00313aa  mov x0, x19
0x06A2E150: 70a21c97  bl #0x3156b10
0x06A2E154: 05000014  b #0x6a2e168
0x06A2E158: 490140b9  ldr w9, [x10]
0x06A2E15C: 29110011  add w9, w9, #4
0x06A2E160: 08d1298b  add x8, x8, w9, sxtw #4
0x06A2E164: 00e10491  add x0, x8, #0x138
0x06A2E168: 080440a9  ldp x8, x1, [x0]
0x06A2E16C: e00313aa  mov x0, x19
0x06A2E170: 00013fd6  blr x8
0x06A2E174: 000400b4  cbz x0, #0x6a2e1f4
0x06A2E178: 0a6500d0  adrp x10, #0x76d0000
0x06A2E17C: 080040f9  ldr x8, [x0]
0x06A2E180: 4a9941f9  ldr x10, [x10, #0x330]
0x06A2E184: f30300aa  mov x19, x0
0x06A2E188: 095d4279  ldrh w9, [x8, #0x12e]
0x06A2E18C: 410140f9  ldr x1, [x10]
0x06A2E190: 290100b4  cbz x9, #0x6a2e1b4
0x06A2E194: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A2E198: 4a210091  add x10, x10, #8
0x06A2E19C: 4b815ff8  ldur x11, [x10, #-8]
0x06A2E1A0: 7f0101eb  cmp x11, x1
0x06A2E1A4: 00010054  b.eq #0x6a2e1c4
0x06A2E1A8: 290500f1  subs x9, x9, #1
0x06A2E1AC: 4a410091  add x10, x10, #0x10
0x06A2E1B0: 61ffff54  b.ne #0x6a2e19c
0x06A2E1B4: e00313aa  mov x0, x19
0x06A2E1B8: e2031f2a  mov w2, wzr
0x06A2E1BC: 55a21c97  bl #0x3156b10
0x06A2E1C0: 04000014  b #0x6a2e1d0
0x06A2E1C4: 490180b9  ldrsw x9, [x10]
0x06A2E1C8: 0811098b  add x8, x8, x9, lsl #4
0x06A2E1CC: 00e10491  add x0, x8, #0x138
0x06A2E1D0: 080440a9  ldp x8, x1, [x0]
0x06A2E1D4: e00313aa  mov x0, x19
0x06A2E1D8: 00013fd6  blr x8
0x06A2E1DC: 1f040071  cmp w0, #1
0x06A2E1E0: e0179f1a  cset w0, eq
0x06A2E1E4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A2E1E8: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A2E1EC: fe0743f8  ldr x30, [sp], #0x30
0x06A2E1F0: c0035fd6  ret
0x06A2E1F4: ae4a1d97  bl #0x3180cac

; RVA 0x6A2E1F8 | internal bool <CompareItemBoxes>b__93_4(ItemMultiple x) { }
; bytes=132 sha256=0e9869a3f233902241d970058618b0ab819a2decffa8df3939068c7c8cf7c0d1 status=arm64_complete_bound indexed_start=True
0x06A2E1F8: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A2E1FC: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A2E200: f4970090  adrp x20, #0x7d2a000
0x06A2E204: 88ce5139  ldrb w8, [x20, #0x473]
0x06A2E208: f30301aa  mov x19, x1
0x06A2E20C: c8000037  tbnz w8, #0, #0x6a2e224
0x06A2E210: a0620090  adrp x0, #0x7682000
0x06A2E214: 00ec46f9  ldr x0, [x0, #0xdd8]
0x06A2E218: 004a1d97  bl #0x3180a18
0x06A2E21C: 28008052  movz w8, #0x1
0x06A2E220: 88ce1139  strb w8, [x20, #0x473]
0x06A2E224: b30200b4  cbz x19, #0x6a2e278
0x06A2E228: 683240f9  ldr x8, [x19, #0x60]
0x06A2E22C: 280100b4  cbz x8, #0x6a2e250
0x06A2E230: aa620090  adrp x10, #0x7682000
0x06A2E234: 4aed46f9  ldr x10, [x10, #0xdd8]
0x06A2E238: 090140f9  ldr x9, [x8]
0x06A2E23C: 480140f9  ldr x8, [x10]
0x06A2E240: 2bc14439  ldrb w11, [x9, #0x130]
0x06A2E244: 0ac14439  ldrb w10, [x8, #0x130]
0x06A2E248: 7f010a6b  cmp w11, w10
0x06A2E24C: 62000054  b.hs #0x6a2e258
0x06A2E250: e0031f2a  mov w0, wzr
0x06A2E254: 06000014  b #0x6a2e26c
0x06A2E258: 296540f9  ldr x9, [x9, #0xc8]
0x06A2E25C: 290d0a8b  add x9, x9, x10, lsl #3
0x06A2E260: 29815ff8  ldur x9, [x9, #-8]
0x06A2E264: 3f0108eb  cmp x9, x8
0x06A2E268: e0179f1a  cset w0, eq
0x06A2E26C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A2E270: fe0742f8  ldr x30, [sp], #0x20
0x06A2E274: c0035fd6  ret
0x06A2E278: 8d4a1d97  bl #0x3180cac

; RVA 0x6A2E27C | internal MergeItemWeakReference <CompareItemBoxes>b__93_5(ItemMultiple x) { }
; bytes=24 sha256=abcd817feb42bff2578f52553f5fb6ef50fa3b00a9baa4defad6ff533641031f status=arm64_complete_bound indexed_start=True
0x06A2E27C: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A2E280: 810000b4  cbz x1, #0x6a2e290
0x06A2E284: 203040f9  ldr x0, [x1, #0x60]
0x06A2E288: fe0741f8  ldr x30, [sp], #0x10
0x06A2E28C: c0035fd6  ret
0x06A2E290: 874a1d97  bl #0x3180cac

; RVA 0x6A2E294 | internal bool <CloneAndRemoveEventXP>b__101_0(IRewardViewData q) { }
; bytes=440 sha256=6dea988a6095cfa4a30d8d3869fd7fa57c166ac3c327425a1b72fbf4626ad286 status=arm64_complete_bound indexed_start=True
0x06A2E294: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A2E298: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A2E29C: f4970090  adrp x20, #0x7d2a000
0x06A2E2A0: 88d25139  ldrb w8, [x20, #0x474]
0x06A2E2A4: f30301aa  mov x19, x1
0x06A2E2A8: 88010037  tbnz w8, #0, #0x6a2e2d8
0x06A2E2AC: 006200f0  adrp x0, #0x7671000
0x06A2E2B0: 00c443f9  ldr x0, [x0, #0x788]
0x06A2E2B4: d9491d97  bl #0x3180a18
0x06A2E2B8: 406200f0  adrp x0, #0x7679000
0x06A2E2BC: 000c44f9  ldr x0, [x0, #0x818]
0x06A2E2C0: d6491d97  bl #0x3180a18
0x06A2E2C4: 206200b0  adrp x0, #0x7673000
0x06A2E2C8: 005c40f9  ldr x0, [x0, #0xb8]
0x06A2E2CC: d3491d97  bl #0x3180a18
0x06A2E2D0: 28008052  movz w8, #0x1
0x06A2E2D4: 88d21139  strb w8, [x20, #0x474]
0x06A2E2D8: 930b00b4  cbz x19, #0x6a2e448
0x06A2E2DC: 0a6200f0  adrp x10, #0x7671000
0x06A2E2E0: 680240f9  ldr x8, [x19]
0x06A2E2E4: 4ac543f9  ldr x10, [x10, #0x788]
0x06A2E2E8: 095d4279  ldrh w9, [x8, #0x12e]
0x06A2E2EC: 410140f9  ldr x1, [x10]
0x06A2E2F0: 290100b4  cbz x9, #0x6a2e314
0x06A2E2F4: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A2E2F8: 4a210091  add x10, x10, #8
0x06A2E2FC: 4b815ff8  ldur x11, [x10, #-8]
0x06A2E300: 7f0101eb  cmp x11, x1
0x06A2E304: 00010054  b.eq #0x6a2e324
0x06A2E308: 290500f1  subs x9, x9, #1
0x06A2E30C: 4a410091  add x10, x10, #0x10
0x06A2E310: 61ffff54  b.ne #0x6a2e2fc
0x06A2E314: 62008052  movz w2, #0x3
0x06A2E318: e00313aa  mov x0, x19
0x06A2E31C: fda11c97  bl #0x3156b10
0x06A2E320: 05000014  b #0x6a2e334
0x06A2E324: 490140b9  ldr w9, [x10]
0x06A2E328: 290d0011  add w9, w9, #3
0x06A2E32C: 08d1298b  add x8, x8, w9, sxtw #4
0x06A2E330: 00e10491  add x0, x8, #0x138
0x06A2E334: 080440a9  ldp x8, x1, [x0]
0x06A2E338: e00313aa  mov x0, x19
0x06A2E33C: 00013fd6  blr x8
0x06A2E340: 400800b4  cbz x0, #0x6a2e448
0x06A2E344: 556200f0  adrp x21, #0x7679000
0x06A2E348: 080040f9  ldr x8, [x0]
0x06A2E34C: b50e44f9  ldr x21, [x21, #0x818]
0x06A2E350: 346200b0  adrp x20, #0x7673000
0x06A2E354: f30300aa  mov x19, x0
0x06A2E358: 095d4279  ldrh w9, [x8, #0x12e]
0x06A2E35C: a10240f9  ldr x1, [x21]
0x06A2E360: 945e40f9  ldr x20, [x20, #0xb8]
0x06A2E364: 290100b4  cbz x9, #0x6a2e388
0x06A2E368: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A2E36C: 4a210091  add x10, x10, #8
0x06A2E370: 4b815ff8  ldur x11, [x10, #-8]
0x06A2E374: 7f0101eb  cmp x11, x1
0x06A2E378: 00010054  b.eq #0x6a2e398
0x06A2E37C: 290500f1  subs x9, x9, #1
0x06A2E380: 4a410091  add x10, x10, #0x10
0x06A2E384: 61ffff54  b.ne #0x6a2e370
0x06A2E388: e00313aa  mov x0, x19
0x06A2E38C: e2031f2a  mov w2, wzr
0x06A2E390: e0a11c97  bl #0x3156b10
0x06A2E394: 04000014  b #0x6a2e3a4
0x06A2E398: 490180b9  ldrsw x9, [x10]
0x06A2E39C: 0811098b  add x8, x8, x9, lsl #4
0x06A2E3A0: 00e10491  add x0, x8, #0x138
0x06A2E3A4: 080440a9  ldp x8, x1, [x0]
0x06A2E3A8: e00313aa  mov x0, x19
0x06A2E3AC: 00013fd6  blr x8
0x06A2E3B0: 880240f9  ldr x8, [x20]
0x06A2E3B4: f30300aa  mov x19, x0
0x06A2E3B8: 09e140b9  ldr w9, [x8, #0xe0]
0x06A2E3BC: 89000035  cbnz w9, #0x6a2e3cc
0x06A2E3C0: e00308aa  mov x0, x8
0x06A2E3C4: f2491d97  bl #0x3180b8c
0x06A2E3C8: 880240f9  ldr x8, [x20]
0x06A2E3CC: 085d40f9  ldr x8, [x8, #0xb8]
0x06A2E3D0: 145d40f9  ldr x20, [x8, #0xb8]
0x06A2E3D4: b40300b4  cbz x20, #0x6a2e448
0x06A2E3D8: 880240f9  ldr x8, [x20]
0x06A2E3DC: a10240f9  ldr x1, [x21]
0x06A2E3E0: 095d4279  ldrh w9, [x8, #0x12e]
0x06A2E3E4: 290100b4  cbz x9, #0x6a2e408
0x06A2E3E8: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A2E3EC: 4a210091  add x10, x10, #8
0x06A2E3F0: 4b815ff8  ldur x11, [x10, #-8]
0x06A2E3F4: 7f0101eb  cmp x11, x1
0x06A2E3F8: 00010054  b.eq #0x6a2e418
0x06A2E3FC: 290500f1  subs x9, x9, #1
0x06A2E400: 4a410091  add x10, x10, #0x10
0x06A2E404: 61ffff54  b.ne #0x6a2e3f0
0x06A2E408: e00314aa  mov x0, x20
0x06A2E40C: e2031f2a  mov w2, wzr
0x06A2E410: c0a11c97  bl #0x3156b10
0x06A2E414: 04000014  b #0x6a2e424
0x06A2E418: 490180b9  ldrsw x9, [x10]
0x06A2E41C: 0811098b  add x8, x8, x9, lsl #4
0x06A2E420: 00e10491  add x0, x8, #0x138
0x06A2E424: 080440a9  ldp x8, x1, [x0]
0x06A2E428: e00314aa  mov x0, x20
0x06A2E42C: 00013fd6  blr x8
0x06A2E430: e10300aa  mov x1, x0
0x06A2E434: e00313aa  mov x0, x19
0x06A2E438: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A2E43C: e2031faa  mov x2, xzr
0x06A2E440: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A2E444: 0bf1aa17  b #0x54ea870
0x06A2E448: 194a1d97  bl #0x3180cac

; RVA 0x6A2E44C | internal bool <CloneAndRemoveEventXP>b__101_1(ResourceMultiple q) { }
; bytes=328 sha256=685e73a4cfb5852ad1dd4a594c06d33f401b3d94c537ef8477814e212fb25006 status=arm64_complete_bound indexed_start=True
0x06A2E44C: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A2E450: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A2E454: f4970090  adrp x20, #0x7d2a000
0x06A2E458: 88d65139  ldrb w8, [x20, #0x475]
0x06A2E45C: f30301aa  mov x19, x1
0x06A2E460: 28010037  tbnz w8, #0, #0x6a2e484
0x06A2E464: 406200f0  adrp x0, #0x7679000
0x06A2E468: 000c44f9  ldr x0, [x0, #0x818]
0x06A2E46C: 6b491d97  bl #0x3180a18
0x06A2E470: 206200b0  adrp x0, #0x7673000
0x06A2E474: 005c40f9  ldr x0, [x0, #0xb8]
0x06A2E478: 68491d97  bl #0x3180a18
0x06A2E47C: 28008052  movz w8, #0x1
0x06A2E480: 88d61139  strb w8, [x20, #0x475]
0x06A2E484: 730800b4  cbz x19, #0x6a2e590
0x06A2E488: 732640f9  ldr x19, [x19, #0x48]
0x06A2E48C: 330800b4  cbz x19, #0x6a2e590
0x06A2E490: 556200f0  adrp x21, #0x7679000
0x06A2E494: 680240f9  ldr x8, [x19]
0x06A2E498: b50e44f9  ldr x21, [x21, #0x818]
0x06A2E49C: 346200b0  adrp x20, #0x7673000
0x06A2E4A0: 095d4279  ldrh w9, [x8, #0x12e]
0x06A2E4A4: a10240f9  ldr x1, [x21]
0x06A2E4A8: 945e40f9  ldr x20, [x20, #0xb8]
0x06A2E4AC: 290100b4  cbz x9, #0x6a2e4d0
0x06A2E4B0: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A2E4B4: 4a210091  add x10, x10, #8
0x06A2E4B8: 4b815ff8  ldur x11, [x10, #-8]
0x06A2E4BC: 7f0101eb  cmp x11, x1
0x06A2E4C0: 00010054  b.eq #0x6a2e4e0
0x06A2E4C4: 290500f1  subs x9, x9, #1
0x06A2E4C8: 4a410091  add x10, x10, #0x10
0x06A2E4CC: 61ffff54  b.ne #0x6a2e4b8
0x06A2E4D0: e00313aa  mov x0, x19
0x06A2E4D4: e2031f2a  mov w2, wzr
0x06A2E4D8: 8ea11c97  bl #0x3156b10
0x06A2E4DC: 04000014  b #0x6a2e4ec
0x06A2E4E0: 490180b9  ldrsw x9, [x10]
0x06A2E4E4: 0811098b  add x8, x8, x9, lsl #4
0x06A2E4E8: 00e10491  add x0, x8, #0x138
0x06A2E4EC: 080440a9  ldp x8, x1, [x0]
0x06A2E4F0: e00313aa  mov x0, x19
0x06A2E4F4: 00013fd6  blr x8
0x06A2E4F8: 880240f9  ldr x8, [x20]
0x06A2E4FC: f30300aa  mov x19, x0
0x06A2E500: 09e140b9  ldr w9, [x8, #0xe0]
0x06A2E504: 89000035  cbnz w9, #0x6a2e514
0x06A2E508: e00308aa  mov x0, x8
0x06A2E50C: a0491d97  bl #0x3180b8c
0x06A2E510: 880240f9  ldr x8, [x20]
0x06A2E514: 085d40f9  ldr x8, [x8, #0xb8]
0x06A2E518: 145d40f9  ldr x20, [x8, #0xb8]
0x06A2E51C: b40300b4  cbz x20, #0x6a2e590
0x06A2E520: 880240f9  ldr x8, [x20]
0x06A2E524: a10240f9  ldr x1, [x21]
0x06A2E528: 095d4279  ldrh w9, [x8, #0x12e]
0x06A2E52C: 290100b4  cbz x9, #0x6a2e550
0x06A2E530: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A2E534: 4a210091  add x10, x10, #8
0x06A2E538: 4b815ff8  ldur x11, [x10, #-8]
0x06A2E53C: 7f0101eb  cmp x11, x1
0x06A2E540: 00010054  b.eq #0x6a2e560
0x06A2E544: 290500f1  subs x9, x9, #1
0x06A2E548: 4a410091  add x10, x10, #0x10
0x06A2E54C: 61ffff54  b.ne #0x6a2e538
0x06A2E550: e00314aa  mov x0, x20
0x06A2E554: e2031f2a  mov w2, wzr
0x06A2E558: 6ea11c97  bl #0x3156b10
0x06A2E55C: 04000014  b #0x6a2e56c
0x06A2E560: 490180b9  ldrsw x9, [x10]
0x06A2E564: 0811098b  add x8, x8, x9, lsl #4
0x06A2E568: 00e10491  add x0, x8, #0x138
0x06A2E56C: 080440a9  ldp x8, x1, [x0]
0x06A2E570: e00314aa  mov x0, x20
0x06A2E574: 00013fd6  blr x8
0x06A2E578: e10300aa  mov x1, x0
0x06A2E57C: e00313aa  mov x0, x19
0x06A2E580: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A2E584: e2031faa  mov x2, xzr
0x06A2E588: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A2E58C: b9f0aa17  b #0x54ea870
0x06A2E590: c7491d97  bl #0x3180cac

