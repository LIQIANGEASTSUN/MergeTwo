; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25662 Merger.MergeBoard.ViewModel.MergeBoardItemCreatorViewModel
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A31A40 | public VisualAdapter GetVisualAdapter(Entity entity) { }
; bytes=168 sha256=3152e24f1937583dcc4403ef3208e7af1405d622f8744d297868810e32e57e4b status=arm64_complete_bound indexed_start=True
0x06A31A40: fe0f1df8  str x30, [sp, #-0x30]!
0x06A31A44: f65701a9  stp x22, x21, [sp, #0x10]
0x06A31A48: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A31A4C: d69700b0  adrp x22, #0x7d2a000
0x06A31A50: f56700d0  adrp x21, #0x772f000
0x06A31A54: c85a5239  ldrb w8, [x22, #0x496]
0x06A31A58: b5f241f9  ldr x21, [x21, #0x3e0]
0x06A31A5C: f30301aa  mov x19, x1
0x06A31A60: f40300aa  mov x20, x0
0x06A31A64: 28010037  tbnz w8, #0, #0x6a31a88
0x06A31A68: e06700d0  adrp x0, #0x772f000
0x06A31A6C: 00f441f9  ldr x0, [x0, #0x3e8]
0x06A31A70: ea3b1d97  bl #0x3180a18
0x06A31A74: e06700d0  adrp x0, #0x772f000
0x06A31A78: 00f041f9  ldr x0, [x0, #0x3e0]
0x06A31A7C: e73b1d97  bl #0x3180a18
0x06A31A80: 28008052  movz w8, #0x1
0x06A31A84: c85a1239  strb w8, [x22, #0x496]
0x06A31A88: a00240f9  ldr x0, [x21]
0x06A31A8C: 943640f9  ldr x20, [x20, #0x68]
0x06A31A90: 21008052  movz w1, #0x1
0x06A31A94: 1a3c1d97  bl #0x3180afc
0x06A31A98: 400200b4  cbz x0, #0x6a31ae0
0x06A31A9C: 081840b9  ldr w8, [x0, #0x18]
0x06A31AA0: f50300aa  mov x21, x0
0x06A31AA4: 08020034  cbz w8, #0x6a31ae4
0x06A31AA8: e00315aa  mov x0, x21
0x06A31AAC: 130c02f8  str x19, [x0, #0x20]!
0x06A31AB0: e10313aa  mov x1, x19
0x06A31AB4: c43b1d97  bl #0x31809c4
0x06A31AB8: 540100b4  cbz x20, #0x6a31ae0
0x06A31ABC: e86700d0  adrp x8, #0x772f000
0x06A31AC0: 08f541f9  ldr x8, [x8, #0x3e8]
0x06A31AC4: e00314aa  mov x0, x20
0x06A31AC8: e10315aa  mov x1, x21
0x06A31ACC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A31AD0: 020140f9  ldr x2, [x8]
0x06A31AD4: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A31AD8: fe0743f8  ldr x30, [sp], #0x30
0x06A31ADC: c84c4717  b #0x3c04dfc
0x06A31AE0: 733c1d97  bl #0x3180cac
0x06A31AE4: 743c1d97  bl #0x3180cb4

; RVA 0x6A31AE8 | public Transform GetTransformForIndex(int index) { }
; bytes=168 sha256=aaf6d99cc9d887306cd485c91b93aab848313d5de4cfeabbbeee669cd250c84f status=arm64_complete_bound indexed_start=True
0x06A31AE8: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A31AEC: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A31AF0: d59700b0  adrp x21, #0x7d2a000
0x06A31AF4: a85e5239  ldrb w8, [x21, #0x497]
0x06A31AF8: f303012a  mov w19, w1
0x06A31AFC: f40300aa  mov x20, x0
0x06A31B00: c8000037  tbnz w8, #0, #0x6a31b18
0x06A31B04: 80640090  adrp x0, #0x76c1000
0x06A31B08: 002047f9  ldr x0, [x0, #0xe40]
0x06A31B0C: c33b1d97  bl #0x3180a18
0x06A31B10: 28008052  movz w8, #0x1
0x06A31B14: a85e1239  strb w8, [x21, #0x497]
0x06A31B18: 943a40f9  ldr x20, [x20, #0x70]
0x06A31B1C: 940300b4  cbz x20, #0x6a31b8c
0x06A31B20: 8a640090  adrp x10, #0x76c1000
0x06A31B24: 880240f9  ldr x8, [x20]
0x06A31B28: 4a2147f9  ldr x10, [x10, #0xe40]
0x06A31B2C: 095d4279  ldrh w9, [x8, #0x12e]
0x06A31B30: 410140f9  ldr x1, [x10]
0x06A31B34: 290100b4  cbz x9, #0x6a31b58
0x06A31B38: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A31B3C: 4a210091  add x10, x10, #8
0x06A31B40: 4b815ff8  ldur x11, [x10, #-8]
0x06A31B44: 7f0101eb  cmp x11, x1
0x06A31B48: 00010054  b.eq #0x6a31b68
0x06A31B4C: 290500f1  subs x9, x9, #1
0x06A31B50: 4a410091  add x10, x10, #0x10
0x06A31B54: 61ffff54  b.ne #0x6a31b40
0x06A31B58: e00314aa  mov x0, x20
0x06A31B5C: e2031f2a  mov w2, wzr
0x06A31B60: ec931c97  bl #0x3156b10
0x06A31B64: 04000014  b #0x6a31b74
0x06A31B68: 490180b9  ldrsw x9, [x10]
0x06A31B6C: 0811098b  add x8, x8, x9, lsl #4
0x06A31B70: 00e10491  add x0, x8, #0x138
0x06A31B74: 030840a9  ldp x3, x2, [x0]
0x06A31B78: e00314aa  mov x0, x20
0x06A31B7C: e103132a  mov w1, w19
0x06A31B80: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A31B84: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A31B88: 60001fd6  br x3
0x06A31B8C: 483c1d97  bl #0x3180cac

; RVA 0x6A31B90 | public bool HasTileConfiguration(int index) { }
; bytes=172 sha256=25cbd889cdf8e13221950859ff3e63e662e27e238f234505bb066d3477087020 status=arm64_complete_bound indexed_start=True
0x06A31B90: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A31B94: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A31B98: d59700b0  adrp x21, #0x7d2a000
0x06A31B9C: a8625239  ldrb w8, [x21, #0x498]
0x06A31BA0: f303012a  mov w19, w1
0x06A31BA4: f40300aa  mov x20, x0
0x06A31BA8: c8000037  tbnz w8, #0, #0x6a31bc0
0x06A31BAC: 80640090  adrp x0, #0x76c1000
0x06A31BB0: 00e441f9  ldr x0, [x0, #0x3c8]
0x06A31BB4: 993b1d97  bl #0x3180a18
0x06A31BB8: 28008052  movz w8, #0x1
0x06A31BBC: a8621239  strb w8, [x21, #0x498]
0x06A31BC0: 943e40f9  ldr x20, [x20, #0x78]
0x06A31BC4: b40300b4  cbz x20, #0x6a31c38
0x06A31BC8: 8a640090  adrp x10, #0x76c1000
0x06A31BCC: 880240f9  ldr x8, [x20]
0x06A31BD0: 4ae541f9  ldr x10, [x10, #0x3c8]
0x06A31BD4: 095d4279  ldrh w9, [x8, #0x12e]
0x06A31BD8: 410140f9  ldr x1, [x10]
0x06A31BDC: 290100b4  cbz x9, #0x6a31c00
0x06A31BE0: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A31BE4: 4a210091  add x10, x10, #8
0x06A31BE8: 4b815ff8  ldur x11, [x10, #-8]
0x06A31BEC: 7f0101eb  cmp x11, x1
0x06A31BF0: 00010054  b.eq #0x6a31c10
0x06A31BF4: 290500f1  subs x9, x9, #1
0x06A31BF8: 4a410091  add x10, x10, #0x10
0x06A31BFC: 61ffff54  b.ne #0x6a31be8
0x06A31C00: 42008052  movz w2, #0x2
0x06A31C04: e00314aa  mov x0, x20
0x06A31C08: c2931c97  bl #0x3156b10
0x06A31C0C: 05000014  b #0x6a31c20
0x06A31C10: 490140b9  ldr w9, [x10]
0x06A31C14: 29090011  add w9, w9, #2
0x06A31C18: 08d1298b  add x8, x8, w9, sxtw #4
0x06A31C1C: 00e10491  add x0, x8, #0x138
0x06A31C20: 030840a9  ldp x3, x2, [x0]
0x06A31C24: e00314aa  mov x0, x20
0x06A31C28: e103132a  mov w1, w19
0x06A31C2C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A31C30: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A31C34: 60001fd6  br x3
0x06A31C38: 1d3c1d97  bl #0x3180cac

; RVA 0x6A31C3C | public DynamicBoardCellConfiguration GetTileConfiguration(int index) { }
; bytes=172 sha256=719dee6d7924608a18fd09c2f2284d1a540c79e521195660c3196f6de2d1e130 status=arm64_complete_bound indexed_start=True
0x06A31C3C: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A31C40: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A31C44: d59700b0  adrp x21, #0x7d2a000
0x06A31C48: a8665239  ldrb w8, [x21, #0x499]
0x06A31C4C: f303012a  mov w19, w1
0x06A31C50: f40300aa  mov x20, x0
0x06A31C54: c8000037  tbnz w8, #0, #0x6a31c6c
0x06A31C58: 80640090  adrp x0, #0x76c1000
0x06A31C5C: 00e441f9  ldr x0, [x0, #0x3c8]
0x06A31C60: 6e3b1d97  bl #0x3180a18
0x06A31C64: 28008052  movz w8, #0x1
0x06A31C68: a8661239  strb w8, [x21, #0x499]
0x06A31C6C: 943e40f9  ldr x20, [x20, #0x78]
0x06A31C70: b40300b4  cbz x20, #0x6a31ce4
0x06A31C74: 8a640090  adrp x10, #0x76c1000
0x06A31C78: 880240f9  ldr x8, [x20]
0x06A31C7C: 4ae541f9  ldr x10, [x10, #0x3c8]
0x06A31C80: 095d4279  ldrh w9, [x8, #0x12e]
0x06A31C84: 410140f9  ldr x1, [x10]
0x06A31C88: 290100b4  cbz x9, #0x6a31cac
0x06A31C8C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A31C90: 4a210091  add x10, x10, #8
0x06A31C94: 4b815ff8  ldur x11, [x10, #-8]
0x06A31C98: 7f0101eb  cmp x11, x1
0x06A31C9C: 00010054  b.eq #0x6a31cbc
0x06A31CA0: 290500f1  subs x9, x9, #1
0x06A31CA4: 4a410091  add x10, x10, #0x10
0x06A31CA8: 61ffff54  b.ne #0x6a31c94
0x06A31CAC: 22008052  movz w2, #0x1
0x06A31CB0: e00314aa  mov x0, x20
0x06A31CB4: 97931c97  bl #0x3156b10
0x06A31CB8: 05000014  b #0x6a31ccc
0x06A31CBC: 490140b9  ldr w9, [x10]
0x06A31CC0: 29050011  add w9, w9, #1
0x06A31CC4: 08d1298b  add x8, x8, w9, sxtw #4
0x06A31CC8: 00e10491  add x0, x8, #0x138
0x06A31CCC: 030840a9  ldp x3, x2, [x0]
0x06A31CD0: e00314aa  mov x0, x20
0x06A31CD4: e103132a  mov w1, w19
0x06A31CD8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A31CDC: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A31CE0: 60001fd6  br x3
0x06A31CE4: f23b1d97  bl #0x3180cac

; RVA 0x6A31CE8 | public void .ctor() { }
; bytes=8 sha256=6b1cbc92c5c2a3ff6e56e634aca7a9499333ac086a770eecef1b4602cd3f733a status=arm64_complete_bound indexed_start=True
0x06A31CE8: e1031faa  mov x1, xzr
0x06A31CEC: d165fc17  b #0x694b430

