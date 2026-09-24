; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 788 MergeEngine.ECS.Systems.State.Board.Event.EventFreeVouchersStateSystem
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x64EB84C | protected override void InitializeSystem() { }
; bytes=240 sha256=8843678cfba62b75078edd8b825eb0416106636b94e8260fca1ce78a7db5794b status=arm64_complete_bound indexed_start=True
0x064EB84C: fe0f1df8  str x30, [sp, #-0x30]!
0x064EB850: f65701a9  stp x22, x21, [sp, #0x10]
0x064EB854: f44f02a9  stp x20, x19, [sp, #0x20]
0x064EB858: f4c10090  adrp x20, #0x7d27000
0x064EB85C: 885e4139  ldrb w8, [x20, #0x57]
0x064EB860: f30300aa  mov x19, x0
0x064EB864: 28010037  tbnz w8, #0, #0x64eb888
0x064EB868: 808c00f0  adrp x0, #0x767e000
0x064EB86C: 00dc47f9  ldr x0, [x0, #0xfb8]
0x064EB870: 6a543297  bl #0x3180a18
0x064EB874: 80900090  adrp x0, #0x76fb000
0x064EB878: 008045f9  ldr x0, [x0, #0xb00]
0x064EB87C: 67543297  bl #0x3180a18
0x064EB880: 28008052  movz w8, #0x1
0x064EB884: 885e0139  strb w8, [x20, #0x57]
0x064EB888: 742640f9  ldr x20, [x19, #0x48]
0x064EB88C: 740500b4  cbz x20, #0x64eb938
0x064EB890: 898c00f0  adrp x9, #0x767e000
0x064EB894: 29dd47f9  ldr x9, [x9, #0xfb8]
0x064EB898: 880240f9  ldr x8, [x20]
0x064EB89C: 96900090  adrp x22, #0x76fb000
0x064EB8A0: 350140f9  ldr x21, [x9]
0x064EB8A4: 095d4279  ldrh w9, [x8, #0x12e]
0x064EB8A8: a11240f9  ldr x1, [x21, #0x20]
0x064EB8AC: a2a24079  ldrh w2, [x21, #0x50]
0x064EB8B0: d68245f9  ldr x22, [x22, #0xb00]
0x064EB8B4: 290100b4  cbz x9, #0x64eb8d8
0x064EB8B8: 0a5940f9  ldr x10, [x8, #0xb0]
0x064EB8BC: 4a210091  add x10, x10, #8
0x064EB8C0: 4b815ff8  ldur x11, [x10, #-8]
0x064EB8C4: 7f0101eb  cmp x11, x1
0x064EB8C8: e0000054  b.eq #0x64eb8e4
0x064EB8CC: 290500f1  subs x9, x9, #1
0x064EB8D0: 4a410091  add x10, x10, #0x10
0x064EB8D4: 61ffff54  b.ne #0x64eb8c0
0x064EB8D8: e00314aa  mov x0, x20
0x064EB8DC: 8dac3197  bl #0x3156b10
0x064EB8E0: 05000014  b #0x64eb8f4
0x064EB8E4: 490140b9  ldr w9, [x10]
0x064EB8E8: 2901020b  add w9, w9, w2
0x064EB8EC: 08d1298b  add x8, x8, w9, sxtw #4
0x064EB8F0: 00e10491  add x0, x8, #0x138
0x064EB8F4: 000440f9  ldr x0, [x0, #8]
0x064EB8F8: e10315aa  mov x1, x21
0x064EB8FC: a3543297  bl #0x3180b88
0x064EB900: 080440f9  ldr x8, [x0, #8]
0x064EB904: e10300aa  mov x1, x0
0x064EB908: e00314aa  mov x0, x20
0x064EB90C: 00013fd6  blr x8
0x064EB910: e10300aa  mov x1, x0
0x064EB914: e00313aa  mov x0, x19
0x064EB918: 010c05f8  str x1, [x0, #0x50]!
0x064EB91C: 2a543297  bl #0x31809c4
0x064EB920: c10240f9  ldr x1, [x22]
0x064EB924: e00313aa  mov x0, x19
0x064EB928: f44f42a9  ldp x20, x19, [sp, #0x20]
0x064EB92C: f65741a9  ldp x22, x21, [sp, #0x10]
0x064EB930: fe0743f8  ldr x30, [sp], #0x30
0x064EB934: ce658117  b #0x454506c
0x064EB938: dd543297  bl #0x3180cac

; RVA 0x64EB93C | protected override void LoadState(EventBoardFreeVouchers newState) { }
; bytes=796 sha256=118e96b70a1d800b642a031b5b9b6c4c34a6114f53760f724a377603191abe5b status=arm64_complete_bound indexed_start=True
0x064EB93C: ffc302d1  sub sp, sp, #0xb0
0x064EB940: fe3300f9  str x30, [sp, #0x60]
0x064EB944: fa6707a9  stp x26, x25, [sp, #0x70]
0x064EB948: f85f08a9  stp x24, x23, [sp, #0x80]
0x064EB94C: f65709a9  stp x22, x21, [sp, #0x90]
0x064EB950: f44f0aa9  stp x20, x19, [sp, #0xa0]
0x064EB954: f5c10090  adrp x21, #0x7d27000
0x064EB958: a8624139  ldrb w8, [x21, #0x58]
0x064EB95C: f30301aa  mov x19, x1
0x064EB960: f40300aa  mov x20, x0
0x064EB964: 28040037  tbnz w8, #0, #0x64eb9e8
0x064EB968: 80900090  adrp x0, #0x76fb000
0x064EB96C: 002445f9  ldr x0, [x0, #0xa48]
0x064EB970: 2a543297  bl #0x3180a18
0x064EB974: 20900090  adrp x0, #0x76ef000
0x064EB978: 005046f9  ldr x0, [x0, #0xca0]
0x064EB97C: 27543297  bl #0x3180a18
0x064EB980: 80900090  adrp x0, #0x76fb000
0x064EB984: 002845f9  ldr x0, [x0, #0xa50]
0x064EB988: 24543297  bl #0x3180a18
0x064EB98C: 20900090  adrp x0, #0x76ef000
0x064EB990: 005446f9  ldr x0, [x0, #0xca8]
0x064EB994: 21543297  bl #0x3180a18
0x064EB998: 80900090  adrp x0, #0x76fb000
0x064EB99C: 002c45f9  ldr x0, [x0, #0xa58]
0x064EB9A0: 1e543297  bl #0x3180a18
0x064EB9A4: 20900090  adrp x0, #0x76ef000
0x064EB9A8: 005846f9  ldr x0, [x0, #0xcb0]
0x064EB9AC: 1b543297  bl #0x3180a18
0x064EB9B0: 80900090  adrp x0, #0x76fb000
0x064EB9B4: 003045f9  ldr x0, [x0, #0xa60]
0x064EB9B8: 18543297  bl #0x3180a18
0x064EB9BC: 20900090  adrp x0, #0x76ef000
0x064EB9C0: 006046f9  ldr x0, [x0, #0xcc0]
0x064EB9C4: 15543297  bl #0x3180a18
0x064EB9C8: 008b00f0  adrp x0, #0x764e000
0x064EB9CC: 00ec42f9  ldr x0, [x0, #0x5d8]
0x064EB9D0: 12543297  bl #0x3180a18
0x064EB9D4: 80900090  adrp x0, #0x76fb000
0x064EB9D8: 003445f9  ldr x0, [x0, #0xa68]
0x064EB9DC: 0f543297  bl #0x3180a18
0x064EB9E0: 28008052  movz w8, #0x1
0x064EB9E4: a8620139  strb w8, [x21, #0x58]
0x064EB9E8: ff7f04a9  stp xzr, xzr, [sp, #0x40]
0x064EB9EC: ff2b00f9  str xzr, [sp, #0x50]
0x064EB9F0: ff7f02a9  stp xzr, xzr, [sp, #0x20]
0x064EB9F4: ff1b00f9  str xzr, [sp, #0x30]
0x064EB9F8: 730b00b4  cbz x19, #0x64ebb64
0x064EB9FC: 088b00f0  adrp x8, #0x764e000
0x064EBA00: 08ed42f9  ldr x8, [x8, #0x5d8]
0x064EBA04: 601240f9  ldr x0, [x19, #0x20]
0x064EBA08: e2031faa  mov x2, xzr
0x064EBA0C: 080140f9  ldr x8, [x8]
0x064EBA10: 085d40f9  ldr x8, [x8, #0xb8]
0x064EBA14: 010140f9  ldr x1, [x8]
0x064EBA18: 96fbbf97  bl #0x54ea870
0x064EBA1C: 400a0037  tbnz w0, #0, #0x64ebb64
0x064EBA20: 802a40f9  ldr x0, [x20, #0x50]
0x064EBA24: a00c00b4  cbz x0, #0x64ebbb8
0x064EBA28: e1031faa  mov x1, xzr
0x064EBA2C: d557fa97  bl #0x6381980
0x064EBA30: 400c00b4  cbz x0, #0x64ebbb8
0x064EBA34: 28900090  adrp x8, #0x76ef000
0x064EBA38: 086146f9  ldr x8, [x8, #0xcc0]
0x064EBA3C: 010140f9  ldr x1, [x8]
0x064EBA40: e8230091  add x8, sp, #8
0x064EBA44: 89656d97  bl #0x4045068
0x064EBA48: e083c03c  ldur q0, [sp, #8]
0x064EBA4C: e80f40f9  ldr x8, [sp, #0x18]
0x064EBA50: 36900090  adrp x22, #0x76ef000
0x064EBA54: 97900090  adrp x23, #0x76fb000
0x064EBA58: 98900090  adrp x24, #0x76fb000
0x064EBA5C: 99900090  adrp x25, #0x76fb000
0x064EBA60: d65646f9  ldr x22, [x22, #0xca8]
0x064EBA64: f73245f9  ldr x23, [x23, #0xa60]
0x064EBA68: 182b45f9  ldr x24, [x24, #0xa50]
0x064EBA6C: 393745f9  ldr x25, [x25, #0xa68]
0x064EBA70: e013803d  str q0, [sp, #0x40]
0x064EBA74: e82b00f9  str x8, [sp, #0x50]
0x064EBA78: 95900090  adrp x21, #0x76fb000
0x064EBA7C: b52645f9  ldr x21, [x21, #0xa48]
0x064EBA80: c10240f9  ldr x1, [x22]
0x064EBA84: e0030191  add x0, sp, #0x40
0x064EBA88: cba7ac97  bl #0x50159b4
0x064EBA8C: 20060036  tbz w0, #0, #0x64ebb50
0x064EBA90: f42b40f9  ldr x20, [sp, #0x50]
0x064EBA94: b40800b4  cbz x20, #0x64ebba8
0x064EBA98: e00314aa  mov x0, x20
0x064EBA9C: e1031faa  mov x1, xzr
0x064EBAA0: f51cfa97  bl #0x6372e74
0x064EBAA4: 611240f9  ldr x1, [x19, #0x20]
0x064EBAA8: e2031faa  mov x2, xzr
0x064EBAAC: 562dc097  bl #0x54f7004
0x064EBAB0: 80fe0737  tbnz w0, #0, #0x64eba80
0x064EBAB4: 600e40f9  ldr x0, [x19, #0x18]
0x064EBAB8: a00700b4  cbz x0, #0x64ebbac
0x064EBABC: e10240f9  ldr x1, [x23]
0x064EBAC0: e8230091  add x8, sp, #8
0x064EBAC4: 69656d97  bl #0x4045068
0x064EBAC8: e083c03c  ldur q0, [sp, #8]
0x064EBACC: e80f40f9  ldr x8, [sp, #0x18]
0x064EBAD0: e00b803d  str q0, [sp, #0x20]
0x064EBAD4: e81b00f9  str x8, [sp, #0x30]
0x064EBAD8: 010340f9  ldr x1, [x24]
0x064EBADC: e0830091  add x0, sp, #0x20
0x064EBAE0: b5a7ac97  bl #0x50159b4
0x064EBAE4: 60010036  tbz w0, #0, #0x64ebb10
0x064EBAE8: fa1b40f9  ldr x26, [sp, #0x30]
0x064EBAEC: fa0100b4  cbz x26, #0x64ebb28
0x064EBAF0: 400b40f9  ldr x0, [x26, #0x10]
0x064EBAF4: 210340f9  ldr x1, [x25]
0x064EBAF8: e2031faa  mov x2, xzr
0x064EBAFC: 5dfbbf97  bl #0x54ea870
0x064EBB00: c0fe0736  tbz w0, #0, #0x64ebad8
0x064EBB04: 481b40b9  ldr w8, [x26, #0x18]
0x064EBB08: 885a00b9  str w8, [x20, #0x58]
0x064EBB0C: f3ffff17  b #0x64ebad8
0x064EBB10: f4031faa  mov x20, xzr
0x064EBB14: a10240f9  ldr x1, [x21]
0x064EBB18: e0830091  add x0, sp, #0x20
0x064EBB1C: a5a7ac97  bl #0x50159b0
0x064EBB20: 14fbffb4  cbz x20, #0x64eba80
0x064EBB24: 23000014  b #0x64ebbb0
0x064EBB28: 61543297  bl #0x3180cac
0x064EBB2C: 24000014  b #0x64ebbbc
0x064EBB30: 02000014  b #0x64ebb38
0x064EBB34: 01000014  b #0x64ebb38
0x064EBB38: 3f040071  cmp w1, #1
0x064EBB3C: 21020054  b.ne #0x64ebb80
0x064EBB40: 748b3394  bl #0x71ce910
0x064EBB44: 140040f9  ldr x20, [x0]
0x064EBB48: 768b3394  bl #0x71ce920
0x064EBB4C: f2ffff17  b #0x64ebb14
0x064EBB50: 28900090  adrp x8, #0x76ef000
0x064EBB54: 085146f9  ldr x8, [x8, #0xca0]
0x064EBB58: e0030191  add x0, sp, #0x40
0x064EBB5C: 010140f9  ldr x1, [x8]
0x064EBB60: 94a7ac97  bl #0x50159b0
0x064EBB64: f44f4aa9  ldp x20, x19, [sp, #0xa0]
0x064EBB68: f65749a9  ldp x22, x21, [sp, #0x90]
0x064EBB6C: f85f48a9  ldp x24, x23, [sp, #0x80]
0x064EBB70: fa6747a9  ldp x26, x25, [sp, #0x70]
0x064EBB74: fe3340f9  ldr x30, [sp, #0x60]
0x064EBB78: ffc30291  add sp, sp, #0xb0
0x064EBB7C: c0035fd6  ret
0x064EBB80: e13700f9  str x1, [sp, #0x68]
0x064EBB84: f30300aa  mov x19, x0
0x064EBB88: f4031faa  mov x20, xzr
0x064EBB8C: a10240f9  ldr x1, [x21]
0x064EBB90: e0830091  add x0, sp, #0x20
0x064EBB94: 87a7ac97  bl #0x50159b0
0x064EBB98: e13740f9  ldr x1, [sp, #0x68]
0x064EBB9C: 740200b4  cbz x20, #0x64ebbe8
0x064EBBA0: e00314aa  mov x0, x20
0x064EBBA4: 40543297  bl #0x3180ca4
0x064EBBA8: 41543297  bl #0x3180cac
0x064EBBAC: 40543297  bl #0x3180cac
0x064EBBB0: e00314aa  mov x0, x20
0x064EBBB4: 3c543297  bl #0x3180ca4
0x064EBBB8: 3d543297  bl #0x3180cac
0x064EBBBC: f30300aa  mov x19, x0
0x064EBBC0: e13700f9  str x1, [sp, #0x68]
0x064EBBC4: f2ffff17  b #0x64ebb8c
0x064EBBC8: 07000014  b #0x64ebbe4
0x064EBBCC: 06000014  b #0x64ebbe4
0x064EBBD0: 05000014  b #0x64ebbe4
0x064EBBD4: 04000014  b #0x64ebbe4
0x064EBBD8: 03000014  b #0x64ebbe4
0x064EBBDC: 02000014  b #0x64ebbe4
0x064EBBE0: 01000014  b #0x64ebbe4
0x064EBBE4: f30300aa  mov x19, x0
0x064EBBE8: 3f040071  cmp w1, #1
0x064EBBEC: a1010054  b.ne #0x64ebc20
0x064EBBF0: e00313aa  mov x0, x19
0x064EBBF4: 478b3394  bl #0x71ce910
0x064EBBF8: 140040f9  ldr x20, [x0]
0x064EBBFC: 498b3394  bl #0x71ce920
0x064EBC00: 28900090  adrp x8, #0x76ef000
0x064EBC04: 085146f9  ldr x8, [x8, #0xca0]
0x064EBC08: e0030191  add x0, sp, #0x40
0x064EBC0C: 010140f9  ldr x1, [x8]
0x064EBC10: 68a7ac97  bl #0x50159b0
0x064EBC14: 94faffb4  cbz x20, #0x64ebb64
0x064EBC18: e00314aa  mov x0, x20
0x064EBC1C: 22543297  bl #0x3180ca4
0x064EBC20: f4031faa  mov x20, xzr
0x064EBC24: 02000014  b #0x64ebc2c
0x064EBC28: f30300aa  mov x19, x0
0x064EBC2C: 28900090  adrp x8, #0x76ef000
0x064EBC30: 085146f9  ldr x8, [x8, #0xca0]
0x064EBC34: 010140f9  ldr x1, [x8]
0x064EBC38: e0030191  add x0, sp, #0x40
0x064EBC3C: 5da7ac97  bl #0x50159b0
0x064EBC40: 740000b5  cbnz x20, #0x64ebc4c
0x064EBC44: e00313aa  mov x0, x19
0x064EBC48: 44e73597  bl #0x3265958
0x064EBC4C: e00314aa  mov x0, x20
0x064EBC50: 15543297  bl #0x3180ca4
0x064EBC54: 30762497  bl #0x2e09514

; RVA 0x64EBC58 | private void UpdateFreeBurst(int value, LiveOpsEventProgress progress) { }
; bytes=24 sha256=d1165c049499e8c7f031ae7d17ece63f08d209d141e2a10fa1bd7b0ccd590766 status=arm64_complete_bound indexed_start=True
0x064EBC58: fe0f1ff8  str x30, [sp, #-0x10]!
0x064EBC5C: 820000b4  cbz x2, #0x64ebc6c
0x064EBC60: 415800b9  str w1, [x2, #0x58]
0x064EBC64: fe0741f8  ldr x30, [sp], #0x10
0x064EBC68: c0035fd6  ret
0x064EBC6C: 10543297  bl #0x3180cac

; RVA 0x64EBC70 | public void .ctor() { }
; bytes=72 sha256=3de6143bc5934c8b9e43808ef4141e833f7fb58bdb35b13941059a7f66d2623b status=arm64_complete_bound indexed_start=True
0x064EBC70: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x064EBC74: f44f01a9  stp x20, x19, [sp, #0x10]
0x064EBC78: f4c10090  adrp x20, #0x7d27000
0x064EBC7C: 95900090  adrp x21, #0x76fb000
0x064EBC80: 88664139  ldrb w8, [x20, #0x59]
0x064EBC84: b58645f9  ldr x21, [x21, #0xb08]
0x064EBC88: f30300aa  mov x19, x0
0x064EBC8C: c8000037  tbnz w8, #0, #0x64ebca4
0x064EBC90: 80900090  adrp x0, #0x76fb000
0x064EBC94: 008445f9  ldr x0, [x0, #0xb08]
0x064EBC98: 60533297  bl #0x3180a18
0x064EBC9C: 28008052  movz w8, #0x1
0x064EBCA0: 88660139  strb w8, [x20, #0x59]
0x064EBCA4: a10240f9  ldr x1, [x21]
0x064EBCA8: e00313aa  mov x0, x19
0x064EBCAC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x064EBCB0: fe57c2a8  ldp x30, x21, [sp], #0x20
0x064EBCB4: 39658117  b #0x4545198

