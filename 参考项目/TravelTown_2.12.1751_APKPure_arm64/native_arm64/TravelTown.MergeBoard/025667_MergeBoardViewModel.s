; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25667 Merger.MergeBoard.ViewModel.MergeBoardViewModel
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A326F4 | public IEnumerable<int> get_PlayableTiles() { }
; bytes=164 sha256=905f81f0523aedccced4a88a4b177b6d1378265857e0b2ce5b75cfd30bb312f9 status=arm64_complete_bound indexed_start=True
0x06A326F4: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A326F8: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A326FC: d4970090  adrp x20, #0x7d2a000
0x06A32700: 888e5239  ldrb w8, [x20, #0x4a3]
0x06A32704: f30300aa  mov x19, x0
0x06A32708: c8000037  tbnz w8, #0, #0x6a32720
0x06A3270C: 606400d0  adrp x0, #0x76c0000
0x06A32710: 00a844f9  ldr x0, [x0, #0x950]
0x06A32714: c1381d97  bl #0x3180a18
0x06A32718: 28008052  movz w8, #0x1
0x06A3271C: 888e1239  strb w8, [x20, #0x4a3]
0x06A32720: 733e40f9  ldr x19, [x19, #0x78]
0x06A32724: 930300b4  cbz x19, #0x6a32794
0x06A32728: 6a6400d0  adrp x10, #0x76c0000
0x06A3272C: 680240f9  ldr x8, [x19]
0x06A32730: 4aa944f9  ldr x10, [x10, #0x950]
0x06A32734: 095d4279  ldrh w9, [x8, #0x12e]
0x06A32738: 410140f9  ldr x1, [x10]
0x06A3273C: 290100b4  cbz x9, #0x6a32760
0x06A32740: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A32744: 4a210091  add x10, x10, #8
0x06A32748: 4b815ff8  ldur x11, [x10, #-8]
0x06A3274C: 7f0101eb  cmp x11, x1
0x06A32750: 00010054  b.eq #0x6a32770
0x06A32754: 290500f1  subs x9, x9, #1
0x06A32758: 4a410091  add x10, x10, #0x10
0x06A3275C: 61ffff54  b.ne #0x6a32748
0x06A32760: 42008052  movz w2, #0x2
0x06A32764: e00313aa  mov x0, x19
0x06A32768: ea901c97  bl #0x3156b10
0x06A3276C: 05000014  b #0x6a32780
0x06A32770: 490140b9  ldr w9, [x10]
0x06A32774: 29090011  add w9, w9, #2
0x06A32778: 08d1298b  add x8, x8, w9, sxtw #4
0x06A3277C: 00e10491  add x0, x8, #0x138
0x06A32780: 020440a9  ldp x2, x1, [x0]
0x06A32784: e00313aa  mov x0, x19
0x06A32788: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A3278C: fe0742f8  ldr x30, [sp], #0x20
0x06A32790: 40001fd6  br x2
0x06A32794: 46391d97  bl #0x3180cac

; RVA 0x6A32798 | public IEnumerable<Entity> get_Entities() { }
; bytes=164 sha256=5fab251f5f6394a6a8bfb5bd18156607312724291cc452e43a0de0ef4abe1dec status=arm64_complete_bound indexed_start=True
0x06A32798: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A3279C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A327A0: d4970090  adrp x20, #0x7d2a000
0x06A327A4: 88925239  ldrb w8, [x20, #0x4a4]
0x06A327A8: f30300aa  mov x19, x0
0x06A327AC: c8000037  tbnz w8, #0, #0x6a327c4
0x06A327B0: 606400d0  adrp x0, #0x76c0000
0x06A327B4: 00dc43f9  ldr x0, [x0, #0x7b8]
0x06A327B8: 98381d97  bl #0x3180a18
0x06A327BC: 28008052  movz w8, #0x1
0x06A327C0: 88921239  strb w8, [x20, #0x4a4]
0x06A327C4: 734a40f9  ldr x19, [x19, #0x90]
0x06A327C8: 930300b4  cbz x19, #0x6a32838
0x06A327CC: 6a6400d0  adrp x10, #0x76c0000
0x06A327D0: 680240f9  ldr x8, [x19]
0x06A327D4: 4add43f9  ldr x10, [x10, #0x7b8]
0x06A327D8: 095d4279  ldrh w9, [x8, #0x12e]
0x06A327DC: 410140f9  ldr x1, [x10]
0x06A327E0: 290100b4  cbz x9, #0x6a32804
0x06A327E4: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A327E8: 4a210091  add x10, x10, #8
0x06A327EC: 4b815ff8  ldur x11, [x10, #-8]
0x06A327F0: 7f0101eb  cmp x11, x1
0x06A327F4: 00010054  b.eq #0x6a32814
0x06A327F8: 290500f1  subs x9, x9, #1
0x06A327FC: 4a410091  add x10, x10, #0x10
0x06A32800: 61ffff54  b.ne #0x6a327ec
0x06A32804: 22008052  movz w2, #0x1
0x06A32808: e00313aa  mov x0, x19
0x06A3280C: c1901c97  bl #0x3156b10
0x06A32810: 05000014  b #0x6a32824
0x06A32814: 490140b9  ldr w9, [x10]
0x06A32818: 29050011  add w9, w9, #1
0x06A3281C: 08d1298b  add x8, x8, w9, sxtw #4
0x06A32820: 00e10491  add x0, x8, #0x138
0x06A32824: 020440a9  ldp x2, x1, [x0]
0x06A32828: e00313aa  mov x0, x19
0x06A3282C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A32830: fe0742f8  ldr x30, [sp], #0x20
0x06A32834: 40001fd6  br x2
0x06A32838: 1d391d97  bl #0x3180cac

; RVA 0x6A3283C | public bool HasTileConfiguration(int tileIndex) { }
; bytes=172 sha256=35f4cfeff723d1de97442cef99aa6cfac2d8706327f90e9cd61076980280cee8 status=arm64_complete_bound indexed_start=True
0x06A3283C: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A32840: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A32844: d5970090  adrp x21, #0x7d2a000
0x06A32848: a8965239  ldrb w8, [x21, #0x4a5]
0x06A3284C: f303012a  mov w19, w1
0x06A32850: f40300aa  mov x20, x0
0x06A32854: c8000037  tbnz w8, #0, #0x6a3286c
0x06A32858: 606400f0  adrp x0, #0x76c1000
0x06A3285C: 00e441f9  ldr x0, [x0, #0x3c8]
0x06A32860: 6e381d97  bl #0x3180a18
0x06A32864: 28008052  movz w8, #0x1
0x06A32868: a8961239  strb w8, [x21, #0x4a5]
0x06A3286C: 944240f9  ldr x20, [x20, #0x80]
0x06A32870: b40300b4  cbz x20, #0x6a328e4
0x06A32874: 6a6400f0  adrp x10, #0x76c1000
0x06A32878: 880240f9  ldr x8, [x20]
0x06A3287C: 4ae541f9  ldr x10, [x10, #0x3c8]
0x06A32880: 095d4279  ldrh w9, [x8, #0x12e]
0x06A32884: 410140f9  ldr x1, [x10]
0x06A32888: 290100b4  cbz x9, #0x6a328ac
0x06A3288C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A32890: 4a210091  add x10, x10, #8
0x06A32894: 4b815ff8  ldur x11, [x10, #-8]
0x06A32898: 7f0101eb  cmp x11, x1
0x06A3289C: 00010054  b.eq #0x6a328bc
0x06A328A0: 290500f1  subs x9, x9, #1
0x06A328A4: 4a410091  add x10, x10, #0x10
0x06A328A8: 61ffff54  b.ne #0x6a32894
0x06A328AC: 42008052  movz w2, #0x2
0x06A328B0: e00314aa  mov x0, x20
0x06A328B4: 97901c97  bl #0x3156b10
0x06A328B8: 05000014  b #0x6a328cc
0x06A328BC: 490140b9  ldr w9, [x10]
0x06A328C0: 29090011  add w9, w9, #2
0x06A328C4: 08d1298b  add x8, x8, w9, sxtw #4
0x06A328C8: 00e10491  add x0, x8, #0x138
0x06A328CC: 030840a9  ldp x3, x2, [x0]
0x06A328D0: e00314aa  mov x0, x20
0x06A328D4: e103132a  mov w1, w19
0x06A328D8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A328DC: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A328E0: 60001fd6  br x3
0x06A328E4: f2381d97  bl #0x3180cac

; RVA 0x6A328E8 | public void MoveItem(int from, int to) { }
; bytes=28 sha256=93b269a662ac88cb3354edaaf74c96746e575136689bbc188a60c0ecf49c1fda status=arm64_complete_bound indexed_start=True
0x06A328E8: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A328EC: 003440f9  ldr x0, [x0, #0x68]
0x06A328F0: 800000b4  cbz x0, #0x6a32900
0x06A328F4: e3031faa  mov x3, xzr
0x06A328F8: fe0741f8  ldr x30, [sp], #0x10
0x06A328FC: e5a20114  b #0x6a9b490
0x06A32900: eb381d97  bl #0x3180cac

; RVA 0x6A32904 | public void HandleTap(int itemPosition) { }
; bytes=32 sha256=23218f95f31af9031491bb81542e323cbdd6b9286b112f0b344e75d9b17fcc06 status=arm64_complete_bound indexed_start=True
0x06A32904: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A32908: 003440f9  ldr x0, [x0, #0x68]
0x06A3290C: a00000b4  cbz x0, #0x6a32920
0x06A32910: e2031faa  mov x2, xzr
0x06A32914: e3031faa  mov x3, xzr
0x06A32918: fe0741f8  ldr x30, [sp], #0x10
0x06A3291C: 87a30114  b #0x6a9b738
0x06A32920: e3381d97  bl #0x3180cac

; RVA 0x6A32924 | public bool CanCombineItems(Entity draggedEntity, Entity otherEntity, out IItemCombinerValidator validator) { }
; bytes=316 sha256=5439c647f9bdda173cd99051976c4dae637a9ed8caec46f8477dc2982deb60b0 status=arm64_complete_bound indexed_start=True
0x06A32924: fe0f1bf8  str x30, [sp, #-0x50]!
0x06A32928: fa6701a9  stp x26, x25, [sp, #0x10]
0x06A3292C: f85f02a9  stp x24, x23, [sp, #0x20]
0x06A32930: f65703a9  stp x22, x21, [sp, #0x30]
0x06A32934: f44f04a9  stp x20, x19, [sp, #0x40]
0x06A32938: d7970090  adrp x23, #0x7d2a000
0x06A3293C: e89a5239  ldrb w8, [x23, #0x4a6]
0x06A32940: f30303aa  mov x19, x3
0x06A32944: f40302aa  mov x20, x2
0x06A32948: f50301aa  mov x21, x1
0x06A3294C: f60300aa  mov x22, x0
0x06A32950: c8000037  tbnz w8, #0, #0x6a32968
0x06A32954: e06700b0  adrp x0, #0x772f000
0x06A32958: 000842f9  ldr x0, [x0, #0x410]
0x06A3295C: 2f381d97  bl #0x3180a18
0x06A32960: 28008052  movz w8, #0x1
0x06A32964: e89a1239  strb w8, [x23, #0x4a6]
0x06A32968: d83a40f9  ldr x24, [x22, #0x70]
0x06A3296C: 980700b4  cbz x24, #0x6a32a5c
0x06A32970: 081b40b9  ldr w8, [x24, #0x18]
0x06A32974: 1f010071  cmp w8, #0
0x06A32978: f7d79f1a  cset w23, gt
0x06A3297C: 1f050071  cmp w8, #1
0x06A32980: eb040054  b.lt #0x6a32a1c
0x06A32984: fa6700b0  adrp x26, #0x772f000
0x06A32988: 5a0b42f9  ldr x26, [x26, #0x410]
0x06A3298C: f9031f2a  mov w25, wzr
0x06A32990: 3f03086b  cmp w25, w8
0x06A32994: 22060054  b.hs #0x6a32a58
0x06A32998: 08cf398b  add x8, x24, w25, sxtw #3
0x06A3299C: 161140f9  ldr x22, [x8, #0x20]
0x06A329A0: f60500b4  cbz x22, #0x6a32a5c
0x06A329A4: c80240f9  ldr x8, [x22]
0x06A329A8: 410340f9  ldr x1, [x26]
0x06A329AC: 095d4279  ldrh w9, [x8, #0x12e]
0x06A329B0: 290100b4  cbz x9, #0x6a329d4
0x06A329B4: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A329B8: 4a210091  add x10, x10, #8
0x06A329BC: 4b815ff8  ldur x11, [x10, #-8]
0x06A329C0: 7f0101eb  cmp x11, x1
0x06A329C4: 00010054  b.eq #0x6a329e4
0x06A329C8: 290500f1  subs x9, x9, #1
0x06A329CC: 4a410091  add x10, x10, #0x10
0x06A329D0: 61ffff54  b.ne #0x6a329bc
0x06A329D4: e00316aa  mov x0, x22
0x06A329D8: e2031f2a  mov w2, wzr
0x06A329DC: 4d901c97  bl #0x3156b10
0x06A329E0: 04000014  b #0x6a329f0
0x06A329E4: 490180b9  ldrsw x9, [x10]
0x06A329E8: 0811098b  add x8, x8, x9, lsl #4
0x06A329EC: 00e10491  add x0, x8, #0x138
0x06A329F0: 080c40a9  ldp x8, x3, [x0]
0x06A329F4: e00316aa  mov x0, x22
0x06A329F8: e10315aa  mov x1, x21
0x06A329FC: e20314aa  mov x2, x20
0x06A32A00: 00013fd6  blr x8
0x06A32A04: 40010037  tbnz w0, #0, #0x6a32a2c
0x06A32A08: 081b40b9  ldr w8, [x24, #0x18]
0x06A32A0C: 39070011  add w25, w25, #1
0x06A32A10: 3f03086b  cmp w25, w8
0x06A32A14: f7a79f1a  cset w23, lt
0x06A32A18: cbfbff54  b.lt #0x6a32990
0x06A32A1C: e00313aa  mov x0, x19
0x06A32A20: e1031faa  mov x1, xzr
0x06A32A24: 7f0200f9  str xzr, [x19]
0x06A32A28: 04000014  b #0x6a32a38
0x06A32A2C: 760200f9  str x22, [x19]
0x06A32A30: e00313aa  mov x0, x19
0x06A32A34: e10316aa  mov x1, x22
0x06A32A38: e3371d97  bl #0x31809c4
0x06A32A3C: e0020012  and w0, w23, #1
0x06A32A40: f44f44a9  ldp x20, x19, [sp, #0x40]
0x06A32A44: f65743a9  ldp x22, x21, [sp, #0x30]
0x06A32A48: f85f42a9  ldp x24, x23, [sp, #0x20]
0x06A32A4C: fa6741a9  ldp x26, x25, [sp, #0x10]
0x06A32A50: fe0745f8  ldr x30, [sp], #0x50
0x06A32A54: c0035fd6  ret
0x06A32A58: 97381d97  bl #0x3180cb4
0x06A32A5C: 94381d97  bl #0x3180cac

; RVA 0x6A32A60 | public bool TryGetItemCombinerVisualPresentation(IItemCombinerValidator validator, out IItemCombinerVisualPresentation visualPresentation) { }
; bytes=136 sha256=8237fe0b7c3e324d6dd6aeb8fe1a7c2696a0eccafd6ea93de8de88b60d548683 status=arm64_complete_bound indexed_start=True
0x06A32A60: fe0f1df8  str x30, [sp, #-0x30]!
0x06A32A64: f65701a9  stp x22, x21, [sp, #0x10]
0x06A32A68: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A32A6C: d5970090  adrp x21, #0x7d2a000
0x06A32A70: f66700b0  adrp x22, #0x772f000
0x06A32A74: a89e5239  ldrb w8, [x21, #0x4a7]
0x06A32A78: d60e42f9  ldr x22, [x22, #0x418]
0x06A32A7C: f30302aa  mov x19, x2
0x06A32A80: f40301aa  mov x20, x1
0x06A32A84: c8000037  tbnz w8, #0, #0x6a32a9c
0x06A32A88: e06700b0  adrp x0, #0x772f000
0x06A32A8C: 000c42f9  ldr x0, [x0, #0x418]
0x06A32A90: e2371d97  bl #0x3180a18
0x06A32A94: 28008052  movz w8, #0x1
0x06A32A98: a89e1239  strb w8, [x21, #0x4a7]
0x06A32A9C: c10240f9  ldr x1, [x22]
0x06A32AA0: e00314aa  mov x0, x20
0x06A32AA4: 3b381d97  bl #0x3180b90
0x06A32AA8: f40300aa  mov x20, x0
0x06A32AAC: a00000b4  cbz x0, #0x6a32ac0
0x06A32AB0: 740200f9  str x20, [x19]
0x06A32AB4: e00313aa  mov x0, x19
0x06A32AB8: e10314aa  mov x1, x20
0x06A32ABC: 04000014  b #0x6a32acc
0x06A32AC0: e00313aa  mov x0, x19
0x06A32AC4: e1031faa  mov x1, xzr
0x06A32AC8: 7f0200f9  str xzr, [x19]
0x06A32ACC: be371d97  bl #0x31809c4
0x06A32AD0: 9f0200f1  cmp x20, #0
0x06A32AD4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A32AD8: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A32ADC: e0079f1a  cset w0, ne
0x06A32AE0: fe0743f8  ldr x30, [sp], #0x30
0x06A32AE4: c0035fd6  ret

; RVA 0x6A32AE8 | public void CompleteCombinationVerification(bool isSuccess, int firstPosition, int secondPosition, MergeCheckItemType checkItemType) { }
; bytes=32 sha256=4105e33899188c5f9a30fc87478c246872ff2b8a7c579e484bce7bec93e9b63b status=arm64_complete_bound indexed_start=True
0x06A32AE8: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A32AEC: 003440f9  ldr x0, [x0, #0x68]
0x06A32AF0: a00000b4  cbz x0, #0x6a32b04
0x06A32AF4: 21000012  and w1, w1, #1
0x06A32AF8: e5031faa  mov x5, xzr
0x06A32AFC: fe0741f8  ldr x30, [sp], #0x10
0x06A32B00: 41a30114  b #0x6a9b804
0x06A32B04: 6a381d97  bl #0x3180cac

; RVA 0x6A32B08 | public IItem GetItemById(string id) { }
; bytes=172 sha256=7f8fd748422c3572516675c8800872c311d0a967d90a96aacd7c52b47c9c7278 status=arm64_complete_bound indexed_start=True
0x06A32B08: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A32B0C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A32B10: d5970090  adrp x21, #0x7d2a000
0x06A32B14: a8a25239  ldrb w8, [x21, #0x4a8]
0x06A32B18: f30301aa  mov x19, x1
0x06A32B1C: f40300aa  mov x20, x0
0x06A32B20: c8000037  tbnz w8, #0, #0x6a32b38
0x06A32B24: 40620090  adrp x0, #0x767a000
0x06A32B28: 004c42f9  ldr x0, [x0, #0x498]
0x06A32B2C: bb371d97  bl #0x3180a18
0x06A32B30: 28008052  movz w8, #0x1
0x06A32B34: a8a21239  strb w8, [x21, #0x4a8]
0x06A32B38: 944640f9  ldr x20, [x20, #0x88]
0x06A32B3C: b40300b4  cbz x20, #0x6a32bb0
0x06A32B40: 4a620090  adrp x10, #0x767a000
0x06A32B44: 880240f9  ldr x8, [x20]
0x06A32B48: 4a4d42f9  ldr x10, [x10, #0x498]
0x06A32B4C: 095d4279  ldrh w9, [x8, #0x12e]
0x06A32B50: 410140f9  ldr x1, [x10]
0x06A32B54: 290100b4  cbz x9, #0x6a32b78
0x06A32B58: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A32B5C: 4a210091  add x10, x10, #8
0x06A32B60: 4b815ff8  ldur x11, [x10, #-8]
0x06A32B64: 7f0101eb  cmp x11, x1
0x06A32B68: 00010054  b.eq #0x6a32b88
0x06A32B6C: 290500f1  subs x9, x9, #1
0x06A32B70: 4a410091  add x10, x10, #0x10
0x06A32B74: 61ffff54  b.ne #0x6a32b60
0x06A32B78: 22018052  movz w2, #0x9
0x06A32B7C: e00314aa  mov x0, x20
0x06A32B80: e48f1c97  bl #0x3156b10
0x06A32B84: 05000014  b #0x6a32b98
0x06A32B88: 490140b9  ldr w9, [x10]
0x06A32B8C: 29250011  add w9, w9, #9
0x06A32B90: 08d1298b  add x8, x8, w9, sxtw #4
0x06A32B94: 00e10491  add x0, x8, #0x138
0x06A32B98: 030840a9  ldp x3, x2, [x0]
0x06A32B9C: e00314aa  mov x0, x20
0x06A32BA0: e10313aa  mov x1, x19
0x06A32BA4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A32BA8: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A32BAC: 60001fd6  br x3
0x06A32BB0: 3f381d97  bl #0x3180cac

; RVA 0x6A32BB4 | public IItem GetMergeItem(Entity entity) { }
; bytes=112 sha256=11685999d0f6b8870685d7591e390647a1c7a1a3a2fa44eb9821883846ea2f74 status=arm64_complete_bound indexed_start=True
0x06A32BB4: ff4301d1  sub sp, sp, #0x50
0x06A32BB8: fe5703a9  stp x30, x21, [sp, #0x30]
0x06A32BBC: f44f04a9  stp x20, x19, [sp, #0x40]
0x06A32BC0: d5970090  adrp x21, #0x7d2a000
0x06A32BC4: a8a65239  ldrb w8, [x21, #0x4a9]
0x06A32BC8: f40301aa  mov x20, x1
0x06A32BCC: f30300aa  mov x19, x0
0x06A32BD0: c8000037  tbnz w8, #0, #0x6a32be8
0x06A32BD4: 40620090  adrp x0, #0x767a000
0x06A32BD8: 004442f9  ldr x0, [x0, #0x488]
0x06A32BDC: 8f371d97  bl #0x3180a18
0x06A32BE0: 28008052  movz w8, #0x1
0x06A32BE4: a8a61239  strb w8, [x21, #0x4a9]
0x06A32BE8: d40100b4  cbz x20, #0x6a32c20
0x06A32BEC: 48620090  adrp x8, #0x767a000
0x06A32BF0: 084542f9  ldr x8, [x8, #0x488]
0x06A32BF4: e00314aa  mov x0, x20
0x06A32BF8: 010140f9  ldr x1, [x8]
0x06A32BFC: e8030091  mov x8, sp
0x06A32C00: 94a14797  bl #0x3c1b250
0x06A32C04: e10340f9  ldr x1, [sp]
0x06A32C08: e00313aa  mov x0, x19
0x06A32C0C: bfffff97  bl #0x6a32b08
0x06A32C10: f44f44a9  ldp x20, x19, [sp, #0x40]
0x06A32C14: fe5743a9  ldp x30, x21, [sp, #0x30]
0x06A32C18: ff430191  add sp, sp, #0x50
0x06A32C1C: c0035fd6  ret
0x06A32C20: 23381d97  bl #0x3180cac

; RVA 0x6A32C24 | public void ExecuteInitializeAction() { }
; bytes=128 sha256=b1b60d0a9cc78676990ebab9de15ac5e251bfed0a2cbccdbd66c3a321c6ceafe status=arm64_complete_bound indexed_start=True
0x06A32C24: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A32C28: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A32C2C: d5970090  adrp x21, #0x7d2a000
0x06A32C30: f46700b0  adrp x20, #0x772f000
0x06A32C34: a8aa5239  ldrb w8, [x21, #0x4aa]
0x06A32C38: 941242f9  ldr x20, [x20, #0x420]
0x06A32C3C: f30300aa  mov x19, x0
0x06A32C40: 28010037  tbnz w8, #0, #0x6a32c64
0x06A32C44: e06700b0  adrp x0, #0x772f000
0x06A32C48: 001442f9  ldr x0, [x0, #0x428]
0x06A32C4C: 73371d97  bl #0x3180a18
0x06A32C50: e06700b0  adrp x0, #0x772f000
0x06A32C54: 001042f9  ldr x0, [x0, #0x420]
0x06A32C58: 70371d97  bl #0x3180a18
0x06A32C5C: 28008052  movz w8, #0x1
0x06A32C60: a8aa1239  strb w8, [x21, #0x4aa]
0x06A32C64: 800240f9  ldr x0, [x20]
0x06A32C68: 733640f9  ldr x19, [x19, #0x68]
0x06A32C6C: 0d381d97  bl #0x3180ca0
0x06A32C70: e1031faa  mov x1, xzr
0x06A32C74: f40300aa  mov x20, x0
0x06A32C78: 61a00194  bl #0x6a9adfc
0x06A32C7C: 330100b4  cbz x19, #0x6a32ca0
0x06A32C80: e86700b0  adrp x8, #0x772f000
0x06A32C84: 081542f9  ldr x8, [x8, #0x428]
0x06A32C88: e00313aa  mov x0, x19
0x06A32C8C: e10314aa  mov x1, x20
0x06A32C90: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A32C94: 020140f9  ldr x2, [x8]
0x06A32C98: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A32C9C: cd9a4617  b #0x3bd97d0
0x06A32CA0: 03381d97  bl #0x3180cac

; RVA 0x6A32CA4 | public bool IsItemGateway(Entity entity) { }
; bytes=256 sha256=3ab9d7a77ccf7a8c7bb5702f1262f21fbe58167c2ccc8519935abbb27e3f441a status=arm64_complete_bound indexed_start=True
0x06A32CA4: fe0f1df8  str x30, [sp, #-0x30]!
0x06A32CA8: f65701a9  stp x22, x21, [sp, #0x10]
0x06A32CAC: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A32CB0: d5970090  adrp x21, #0x7d2a000
0x06A32CB4: a8ae5239  ldrb w8, [x21, #0x4ab]
0x06A32CB8: f30301aa  mov x19, x1
0x06A32CBC: f40300aa  mov x20, x0
0x06A32CC0: 28010037  tbnz w8, #0, #0x6a32ce4
0x06A32CC4: 60620090  adrp x0, #0x767e000
0x06A32CC8: 00a442f9  ldr x0, [x0, #0x548]
0x06A32CCC: 53371d97  bl #0x3180a18
0x06A32CD0: 40620090  adrp x0, #0x767a000
0x06A32CD4: 004c42f9  ldr x0, [x0, #0x498]
0x06A32CD8: 50371d97  bl #0x3180a18
0x06A32CDC: 28008052  movz w8, #0x1
0x06A32CE0: a8ae1239  strb w8, [x21, #0x4ab]
0x06A32CE4: e00314aa  mov x0, x20
0x06A32CE8: e10313aa  mov x1, x19
0x06A32CEC: b2ffff97  bl #0x6a32bb4
0x06A32CF0: 800100b4  cbz x0, #0x6a32d20
0x06A32CF4: 68620090  adrp x8, #0x767e000
0x06A32CF8: 08a542f9  ldr x8, [x8, #0x548]
0x06A32CFC: f50300aa  mov x21, x0
0x06A32D00: 160140f9  ldr x22, [x8]
0x06A32D04: e10316aa  mov x1, x22
0x06A32D08: a2371d97  bl #0x3180b90
0x06A32D0C: f30300aa  mov x19, x0
0x06A32D10: a00000b5  cbnz x0, #0x6a32d24
0x06A32D14: e00315aa  mov x0, x21
0x06A32D18: e10316aa  mov x1, x22
0x06A32D1C: cb381d97  bl #0x3181048
0x06A32D20: f3031faa  mov x19, xzr
0x06A32D24: 944640f9  ldr x20, [x20, #0x88]
0x06A32D28: d40300b4  cbz x20, #0x6a32da0
0x06A32D2C: 4a620090  adrp x10, #0x767a000
0x06A32D30: 880240f9  ldr x8, [x20]
0x06A32D34: 4a4d42f9  ldr x10, [x10, #0x498]
0x06A32D38: 095d4279  ldrh w9, [x8, #0x12e]
0x06A32D3C: 410140f9  ldr x1, [x10]
0x06A32D40: 290100b4  cbz x9, #0x6a32d64
0x06A32D44: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A32D48: 4a210091  add x10, x10, #8
0x06A32D4C: 4b815ff8  ldur x11, [x10, #-8]
0x06A32D50: 7f0101eb  cmp x11, x1
0x06A32D54: 00010054  b.eq #0x6a32d74
0x06A32D58: 290500f1  subs x9, x9, #1
0x06A32D5C: 4a410091  add x10, x10, #0x10
0x06A32D60: 61ffff54  b.ne #0x6a32d4c
0x06A32D64: 62048052  movz w2, #0x23
0x06A32D68: e00314aa  mov x0, x20
0x06A32D6C: 698f1c97  bl #0x3156b10
0x06A32D70: 05000014  b #0x6a32d84
0x06A32D74: 490140b9  ldr w9, [x10]
0x06A32D78: 298d0011  add w9, w9, #0x23
0x06A32D7C: 08d1298b  add x8, x8, w9, sxtw #4
0x06A32D80: 00e10491  add x0, x8, #0x138
0x06A32D84: 030840a9  ldp x3, x2, [x0]
0x06A32D88: e00314aa  mov x0, x20
0x06A32D8C: e10313aa  mov x1, x19
0x06A32D90: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A32D94: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A32D98: fe0743f8  ldr x30, [sp], #0x30
0x06A32D9C: 60001fd6  br x3
0x06A32DA0: c3371d97  bl #0x3180cac

; RVA 0x6A32DA4 | public string GetGatewayFloatingTextKey(Entity entity) { }
; bytes=256 sha256=98b9950bc3fae2eb31eee4ed5750aa657ddbf4f07a69d9e720f33871ef8d7ec4 status=arm64_complete_bound indexed_start=True
0x06A32DA4: fe0f1df8  str x30, [sp, #-0x30]!
0x06A32DA8: f65701a9  stp x22, x21, [sp, #0x10]
0x06A32DAC: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A32DB0: d5970090  adrp x21, #0x7d2a000
0x06A32DB4: a8b25239  ldrb w8, [x21, #0x4ac]
0x06A32DB8: f30301aa  mov x19, x1
0x06A32DBC: f40300aa  mov x20, x0
0x06A32DC0: 28010037  tbnz w8, #0, #0x6a32de4
0x06A32DC4: 60620090  adrp x0, #0x767e000
0x06A32DC8: 00a442f9  ldr x0, [x0, #0x548]
0x06A32DCC: 13371d97  bl #0x3180a18
0x06A32DD0: 40620090  adrp x0, #0x767a000
0x06A32DD4: 004c42f9  ldr x0, [x0, #0x498]
0x06A32DD8: 10371d97  bl #0x3180a18
0x06A32DDC: 28008052  movz w8, #0x1
0x06A32DE0: a8b21239  strb w8, [x21, #0x4ac]
0x06A32DE4: e00314aa  mov x0, x20
0x06A32DE8: e10313aa  mov x1, x19
0x06A32DEC: 72ffff97  bl #0x6a32bb4
0x06A32DF0: 800100b4  cbz x0, #0x6a32e20
0x06A32DF4: 68620090  adrp x8, #0x767e000
0x06A32DF8: 08a542f9  ldr x8, [x8, #0x548]
0x06A32DFC: f50300aa  mov x21, x0
0x06A32E00: 160140f9  ldr x22, [x8]
0x06A32E04: e10316aa  mov x1, x22
0x06A32E08: 62371d97  bl #0x3180b90
0x06A32E0C: f30300aa  mov x19, x0
0x06A32E10: a00000b5  cbnz x0, #0x6a32e24
0x06A32E14: e00315aa  mov x0, x21
0x06A32E18: e10316aa  mov x1, x22
0x06A32E1C: 8b381d97  bl #0x3181048
0x06A32E20: f3031faa  mov x19, xzr
0x06A32E24: 944640f9  ldr x20, [x20, #0x88]
0x06A32E28: d40300b4  cbz x20, #0x6a32ea0
0x06A32E2C: 4a620090  adrp x10, #0x767a000
0x06A32E30: 880240f9  ldr x8, [x20]
0x06A32E34: 4a4d42f9  ldr x10, [x10, #0x498]
0x06A32E38: 095d4279  ldrh w9, [x8, #0x12e]
0x06A32E3C: 410140f9  ldr x1, [x10]
0x06A32E40: 290100b4  cbz x9, #0x6a32e64
0x06A32E44: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A32E48: 4a210091  add x10, x10, #8
0x06A32E4C: 4b815ff8  ldur x11, [x10, #-8]
0x06A32E50: 7f0101eb  cmp x11, x1
0x06A32E54: 00010054  b.eq #0x6a32e74
0x06A32E58: 290500f1  subs x9, x9, #1
0x06A32E5C: 4a410091  add x10, x10, #0x10
0x06A32E60: 61ffff54  b.ne #0x6a32e4c
0x06A32E64: 82048052  movz w2, #0x24
0x06A32E68: e00314aa  mov x0, x20
0x06A32E6C: 298f1c97  bl #0x3156b10
0x06A32E70: 05000014  b #0x6a32e84
0x06A32E74: 490140b9  ldr w9, [x10]
0x06A32E78: 29910011  add w9, w9, #0x24
0x06A32E7C: 08d1298b  add x8, x8, w9, sxtw #4
0x06A32E80: 00e10491  add x0, x8, #0x138
0x06A32E84: 030840a9  ldp x3, x2, [x0]
0x06A32E88: e00314aa  mov x0, x20
0x06A32E8C: e10313aa  mov x1, x19
0x06A32E90: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A32E94: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A32E98: fe0743f8  ldr x30, [sp], #0x30
0x06A32E9C: 60001fd6  br x3
0x06A32EA0: 83371d97  bl #0x3180cac

; RVA 0x6A32EA4 | public void .ctor() { }
; bytes=8 sha256=f3f53f999d2394cf18acd90f27cd491d06e46cac88768c629dafc1521accc088 status=arm64_complete_bound indexed_start=True
0x06A32EA4: e1031faa  mov x1, xzr
0x06A32EA8: 6261fc17  b #0x694b430

