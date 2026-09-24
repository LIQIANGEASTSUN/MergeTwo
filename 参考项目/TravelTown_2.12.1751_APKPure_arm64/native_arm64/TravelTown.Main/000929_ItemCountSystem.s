; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 929 MergeEngine.ECS.Systems.Board.ItemCountSystem
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x666CF08 | public void add_ItemCountChanged(Action<IMergeItem, int> value) { }
; bytes=176 sha256=e94f2b386002c1e916ee0f3d84b2c7446916a7d9dd853141d410d283c4fbbb57 status=arm64_complete_bound indexed_start=True
0x0666CF08: fe0f1cf8  str x30, [sp, #-0x40]!
0x0666CF0C: f85f01a9  stp x24, x23, [sp, #0x10]
0x0666CF10: f65702a9  stp x22, x21, [sp, #0x20]
0x0666CF14: f44f03a9  stp x20, x19, [sp, #0x30]
0x0666CF18: f5b50090  adrp x21, #0x7d28000
0x0666CF1C: a8fe4339  ldrb w8, [x21, #0xff]
0x0666CF20: f30301aa  mov x19, x1
0x0666CF24: f40300aa  mov x20, x0
0x0666CF28: c8000037  tbnz w8, #0, #0x666cf40
0x0666CF2C: 80840090  adrp x0, #0x76fc000
0x0666CF30: 007043f9  ldr x0, [x0, #0x6e0]
0x0666CF34: b94e2c97  bl #0x3180a18
0x0666CF38: 28008052  movz w8, #0x1
0x0666CF3C: a8fe0339  strb w8, [x21, #0xff]
0x0666CF40: 98840090  adrp x24, #0x76fc000
0x0666CF44: 950e46f8  ldr x21, [x20, #0x60]!
0x0666CF48: 187343f9  ldr x24, [x24, #0x6e0]
0x0666CF4C: e00315aa  mov x0, x21
0x0666CF50: e10313aa  mov x1, x19
0x0666CF54: e2031faa  mov x2, xzr
0x0666CF58: f2c2c197  bl #0x56ddb20
0x0666CF5C: 000100b4  cbz x0, #0x666cf7c
0x0666CF60: 170340f9  ldr x23, [x24]
0x0666CF64: f60300aa  mov x22, x0
0x0666CF68: e10317aa  mov x1, x23
0x0666CF6C: 094f2c97  bl #0x3180b90
0x0666CF70: e10300aa  mov x1, x0
0x0666CF74: 600000b5  cbnz x0, #0x666cf80
0x0666CF78: 0d000014  b #0x666cfac
0x0666CF7C: e1031faa  mov x1, xzr
0x0666CF80: e00314aa  mov x0, x20
0x0666CF84: e20315aa  mov x2, x21
0x0666CF88: 6ec02d97  bl #0x31dd140
0x0666CF8C: bf0200eb  cmp x21, x0
0x0666CF90: f50300aa  mov x21, x0
0x0666CF94: c1fdff54  b.ne #0x666cf4c
0x0666CF98: f44f43a9  ldp x20, x19, [sp, #0x30]
0x0666CF9C: f65742a9  ldp x22, x21, [sp, #0x20]
0x0666CFA0: f85f41a9  ldp x24, x23, [sp, #0x10]
0x0666CFA4: fe0744f8  ldr x30, [sp], #0x40
0x0666CFA8: c0035fd6  ret
0x0666CFAC: e00316aa  mov x0, x22
0x0666CFB0: e10317aa  mov x1, x23
0x0666CFB4: 25502c97  bl #0x3181048

; RVA 0x666CFB8 | public void remove_ItemCountChanged(Action<IMergeItem, int> value) { }
; bytes=176 sha256=c665915e07a748d1a7f9703c11a65b5476a539928972a4045a0911d20ca9fa1d status=arm64_complete_bound indexed_start=True
0x0666CFB8: fe0f1cf8  str x30, [sp, #-0x40]!
0x0666CFBC: f85f01a9  stp x24, x23, [sp, #0x10]
0x0666CFC0: f65702a9  stp x22, x21, [sp, #0x20]
0x0666CFC4: f44f03a9  stp x20, x19, [sp, #0x30]
0x0666CFC8: f5b50090  adrp x21, #0x7d28000
0x0666CFCC: a8024439  ldrb w8, [x21, #0x100]
0x0666CFD0: f30301aa  mov x19, x1
0x0666CFD4: f40300aa  mov x20, x0
0x0666CFD8: c8000037  tbnz w8, #0, #0x666cff0
0x0666CFDC: 80840090  adrp x0, #0x76fc000
0x0666CFE0: 007043f9  ldr x0, [x0, #0x6e0]
0x0666CFE4: 8d4e2c97  bl #0x3180a18
0x0666CFE8: 28008052  movz w8, #0x1
0x0666CFEC: a8020439  strb w8, [x21, #0x100]
0x0666CFF0: 98840090  adrp x24, #0x76fc000
0x0666CFF4: 950e46f8  ldr x21, [x20, #0x60]!
0x0666CFF8: 187343f9  ldr x24, [x24, #0x6e0]
0x0666CFFC: e00315aa  mov x0, x21
0x0666D000: e10313aa  mov x1, x19
0x0666D004: e2031faa  mov x2, xzr
0x0666D008: 44c3c197  bl #0x56ddd18
0x0666D00C: 000100b4  cbz x0, #0x666d02c
0x0666D010: 170340f9  ldr x23, [x24]
0x0666D014: f60300aa  mov x22, x0
0x0666D018: e10317aa  mov x1, x23
0x0666D01C: dd4e2c97  bl #0x3180b90
0x0666D020: e10300aa  mov x1, x0
0x0666D024: 600000b5  cbnz x0, #0x666d030
0x0666D028: 0d000014  b #0x666d05c
0x0666D02C: e1031faa  mov x1, xzr
0x0666D030: e00314aa  mov x0, x20
0x0666D034: e20315aa  mov x2, x21
0x0666D038: 42c02d97  bl #0x31dd140
0x0666D03C: bf0200eb  cmp x21, x0
0x0666D040: f50300aa  mov x21, x0
0x0666D044: c1fdff54  b.ne #0x666cffc
0x0666D048: f44f43a9  ldp x20, x19, [sp, #0x30]
0x0666D04C: f65742a9  ldp x22, x21, [sp, #0x20]
0x0666D050: f85f41a9  ldp x24, x23, [sp, #0x10]
0x0666D054: fe0744f8  ldr x30, [sp], #0x40
0x0666D058: c0035fd6  ret
0x0666D05C: e00316aa  mov x0, x22
0x0666D060: e10317aa  mov x1, x23
0x0666D064: f94f2c97  bl #0x3181048

; RVA 0x666D068 | public void add_ItemCountIncreased(Action<IMergeItem, int> value) { }
; bytes=176 sha256=4413096661a019900a2dc89af03b04a660beaa9da15e547d236081d0f4a02133 status=arm64_complete_bound indexed_start=True
0x0666D068: fe0f1cf8  str x30, [sp, #-0x40]!
0x0666D06C: f85f01a9  stp x24, x23, [sp, #0x10]
0x0666D070: f65702a9  stp x22, x21, [sp, #0x20]
0x0666D074: f44f03a9  stp x20, x19, [sp, #0x30]
0x0666D078: d5b500f0  adrp x21, #0x7d28000
0x0666D07C: a8064439  ldrb w8, [x21, #0x101]
0x0666D080: f30301aa  mov x19, x1
0x0666D084: f40300aa  mov x20, x0
0x0666D088: c8000037  tbnz w8, #0, #0x666d0a0
0x0666D08C: 608400f0  adrp x0, #0x76fc000
0x0666D090: 007043f9  ldr x0, [x0, #0x6e0]
0x0666D094: 614e2c97  bl #0x3180a18
0x0666D098: 28008052  movz w8, #0x1
0x0666D09C: a8060439  strb w8, [x21, #0x101]
0x0666D0A0: 788400f0  adrp x24, #0x76fc000
0x0666D0A4: 958e46f8  ldr x21, [x20, #0x68]!
0x0666D0A8: 187343f9  ldr x24, [x24, #0x6e0]
0x0666D0AC: e00315aa  mov x0, x21
0x0666D0B0: e10313aa  mov x1, x19
0x0666D0B4: e2031faa  mov x2, xzr
0x0666D0B8: 9ac2c197  bl #0x56ddb20
0x0666D0BC: 000100b4  cbz x0, #0x666d0dc
0x0666D0C0: 170340f9  ldr x23, [x24]
0x0666D0C4: f60300aa  mov x22, x0
0x0666D0C8: e10317aa  mov x1, x23
0x0666D0CC: b14e2c97  bl #0x3180b90
0x0666D0D0: e10300aa  mov x1, x0
0x0666D0D4: 600000b5  cbnz x0, #0x666d0e0
0x0666D0D8: 0d000014  b #0x666d10c
0x0666D0DC: e1031faa  mov x1, xzr
0x0666D0E0: e00314aa  mov x0, x20
0x0666D0E4: e20315aa  mov x2, x21
0x0666D0E8: 16c02d97  bl #0x31dd140
0x0666D0EC: bf0200eb  cmp x21, x0
0x0666D0F0: f50300aa  mov x21, x0
0x0666D0F4: c1fdff54  b.ne #0x666d0ac
0x0666D0F8: f44f43a9  ldp x20, x19, [sp, #0x30]
0x0666D0FC: f65742a9  ldp x22, x21, [sp, #0x20]
0x0666D100: f85f41a9  ldp x24, x23, [sp, #0x10]
0x0666D104: fe0744f8  ldr x30, [sp], #0x40
0x0666D108: c0035fd6  ret
0x0666D10C: e00316aa  mov x0, x22
0x0666D110: e10317aa  mov x1, x23
0x0666D114: cd4f2c97  bl #0x3181048

; RVA 0x666D118 | public void remove_ItemCountIncreased(Action<IMergeItem, int> value) { }
; bytes=176 sha256=7025bb80b4e85dd85b273705e776089218cf3076ca197c1d54d57a1c032248f2 status=arm64_complete_bound indexed_start=True
0x0666D118: fe0f1cf8  str x30, [sp, #-0x40]!
0x0666D11C: f85f01a9  stp x24, x23, [sp, #0x10]
0x0666D120: f65702a9  stp x22, x21, [sp, #0x20]
0x0666D124: f44f03a9  stp x20, x19, [sp, #0x30]
0x0666D128: d5b500f0  adrp x21, #0x7d28000
0x0666D12C: a80a4439  ldrb w8, [x21, #0x102]
0x0666D130: f30301aa  mov x19, x1
0x0666D134: f40300aa  mov x20, x0
0x0666D138: c8000037  tbnz w8, #0, #0x666d150
0x0666D13C: 608400f0  adrp x0, #0x76fc000
0x0666D140: 007043f9  ldr x0, [x0, #0x6e0]
0x0666D144: 354e2c97  bl #0x3180a18
0x0666D148: 28008052  movz w8, #0x1
0x0666D14C: a80a0439  strb w8, [x21, #0x102]
0x0666D150: 788400f0  adrp x24, #0x76fc000
0x0666D154: 958e46f8  ldr x21, [x20, #0x68]!
0x0666D158: 187343f9  ldr x24, [x24, #0x6e0]
0x0666D15C: e00315aa  mov x0, x21
0x0666D160: e10313aa  mov x1, x19
0x0666D164: e2031faa  mov x2, xzr
0x0666D168: ecc2c197  bl #0x56ddd18
0x0666D16C: 000100b4  cbz x0, #0x666d18c
0x0666D170: 170340f9  ldr x23, [x24]
0x0666D174: f60300aa  mov x22, x0
0x0666D178: e10317aa  mov x1, x23
0x0666D17C: 854e2c97  bl #0x3180b90
0x0666D180: e10300aa  mov x1, x0
0x0666D184: 600000b5  cbnz x0, #0x666d190
0x0666D188: 0d000014  b #0x666d1bc
0x0666D18C: e1031faa  mov x1, xzr
0x0666D190: e00314aa  mov x0, x20
0x0666D194: e20315aa  mov x2, x21
0x0666D198: eabf2d97  bl #0x31dd140
0x0666D19C: bf0200eb  cmp x21, x0
0x0666D1A0: f50300aa  mov x21, x0
0x0666D1A4: c1fdff54  b.ne #0x666d15c
0x0666D1A8: f44f43a9  ldp x20, x19, [sp, #0x30]
0x0666D1AC: f65742a9  ldp x22, x21, [sp, #0x20]
0x0666D1B0: f85f41a9  ldp x24, x23, [sp, #0x10]
0x0666D1B4: fe0744f8  ldr x30, [sp], #0x40
0x0666D1B8: c0035fd6  ret
0x0666D1BC: e00316aa  mov x0, x22
0x0666D1C0: e10317aa  mov x1, x23
0x0666D1C4: a14f2c97  bl #0x3181048

; RVA 0x666D1C8 | protected override void InitializeSystem() { }
; bytes=196 sha256=65c67b3d01eb85a6c724512fe8414d94988beba1b52aa800e37d0a6d6deb1e54 status=arm64_complete_bound indexed_start=True
0x0666D1C8: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x0666D1CC: f65701a9  stp x22, x21, [sp, #0x10]
0x0666D1D0: f44f02a9  stp x20, x19, [sp, #0x20]
0x0666D1D4: d4b500f0  adrp x20, #0x7d28000
0x0666D1D8: 778300d0  adrp x23, #0x76db000
0x0666D1DC: d68400f0  adrp x22, #0x7708000
0x0666D1E0: 880e4439  ldrb w8, [x20, #0x103]
0x0666D1E4: f71a41f9  ldr x23, [x23, #0x230]
0x0666D1E8: d63240f9  ldr x22, [x22, #0x60]
0x0666D1EC: f30300aa  mov x19, x0
0x0666D1F0: 28010037  tbnz w8, #0, #0x666d214
0x0666D1F4: 608300d0  adrp x0, #0x76db000
0x0666D1F8: 001841f9  ldr x0, [x0, #0x230]
0x0666D1FC: 074e2c97  bl #0x3180a18
0x0666D200: c08400f0  adrp x0, #0x7708000
0x0666D204: 003040f9  ldr x0, [x0, #0x60]
0x0666D208: 044e2c97  bl #0x3180a18
0x0666D20C: 28008052  movz w8, #0x1
0x0666D210: 880e0439  strb w8, [x20, #0x103]
0x0666D214: e00240f9  ldr x0, [x23]
0x0666D218: 742240f9  ldr x20, [x19, #0x40]
0x0666D21C: a14e2c97  bl #0x3180ca0
0x0666D220: c20240f9  ldr x2, [x22]
0x0666D224: e10313aa  mov x1, x19
0x0666D228: e3031faa  mov x3, xzr
0x0666D22C: f50300aa  mov x21, x0
0x0666D230: e9d3b297  bl #0x53221d4
0x0666D234: b40200b4  cbz x20, #0x666d288
0x0666D238: e00314aa  mov x0, x20
0x0666D23C: e10315aa  mov x1, x21
0x0666D240: e2031faa  mov x2, xzr
0x0666D244: 20550a94  bl #0x69026c4
0x0666D248: e00240f9  ldr x0, [x23]
0x0666D24C: 742640f9  ldr x20, [x19, #0x48]
0x0666D250: 944e2c97  bl #0x3180ca0
0x0666D254: c20240f9  ldr x2, [x22]
0x0666D258: e10313aa  mov x1, x19
0x0666D25C: e3031faa  mov x3, xzr
0x0666D260: f50300aa  mov x21, x0
0x0666D264: dcd3b297  bl #0x53221d4
0x0666D268: 140100b4  cbz x20, #0x666d288
0x0666D26C: e00314aa  mov x0, x20
0x0666D270: e10315aa  mov x1, x21
0x0666D274: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0666D278: f65741a9  ldp x22, x21, [sp, #0x10]
0x0666D27C: e2031faa  mov x2, xzr
0x0666D280: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x0666D284: d42a0a14  b #0x68f7dd4
0x0666D288: 894e2c97  bl #0x3180cac

; RVA 0x666D28C | protected override void DisposeSystem() { }
; bytes=196 sha256=6b5668ae70281432273951e8eb1782ba98111c4e7b4e140aa1f6f5fa83022c57 status=arm64_complete_bound indexed_start=True
0x0666D28C: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x0666D290: f65701a9  stp x22, x21, [sp, #0x10]
0x0666D294: f44f02a9  stp x20, x19, [sp, #0x20]
0x0666D298: d4b500f0  adrp x20, #0x7d28000
0x0666D29C: 778300d0  adrp x23, #0x76db000
0x0666D2A0: d68400f0  adrp x22, #0x7708000
0x0666D2A4: 88124439  ldrb w8, [x20, #0x104]
0x0666D2A8: f71a41f9  ldr x23, [x23, #0x230]
0x0666D2AC: d63240f9  ldr x22, [x22, #0x60]
0x0666D2B0: f30300aa  mov x19, x0
0x0666D2B4: 28010037  tbnz w8, #0, #0x666d2d8
0x0666D2B8: 608300d0  adrp x0, #0x76db000
0x0666D2BC: 001841f9  ldr x0, [x0, #0x230]
0x0666D2C0: d64d2c97  bl #0x3180a18
0x0666D2C4: c08400f0  adrp x0, #0x7708000
0x0666D2C8: 003040f9  ldr x0, [x0, #0x60]
0x0666D2CC: d34d2c97  bl #0x3180a18
0x0666D2D0: 28008052  movz w8, #0x1
0x0666D2D4: 88120439  strb w8, [x20, #0x104]
0x0666D2D8: e00240f9  ldr x0, [x23]
0x0666D2DC: 742240f9  ldr x20, [x19, #0x40]
0x0666D2E0: 704e2c97  bl #0x3180ca0
0x0666D2E4: c20240f9  ldr x2, [x22]
0x0666D2E8: e10313aa  mov x1, x19
0x0666D2EC: e3031faa  mov x3, xzr
0x0666D2F0: f50300aa  mov x21, x0
0x0666D2F4: b8d3b297  bl #0x53221d4
0x0666D2F8: b40200b4  cbz x20, #0x666d34c
0x0666D2FC: e00314aa  mov x0, x20
0x0666D300: e10315aa  mov x1, x21
0x0666D304: e2031faa  mov x2, xzr
0x0666D308: 1b550a94  bl #0x6902774
0x0666D30C: e00240f9  ldr x0, [x23]
0x0666D310: 742640f9  ldr x20, [x19, #0x48]
0x0666D314: 634e2c97  bl #0x3180ca0
0x0666D318: c20240f9  ldr x2, [x22]
0x0666D31C: e10313aa  mov x1, x19
0x0666D320: e3031faa  mov x3, xzr
0x0666D324: f50300aa  mov x21, x0
0x0666D328: abd3b297  bl #0x53221d4
0x0666D32C: 140100b4  cbz x20, #0x666d34c
0x0666D330: e00314aa  mov x0, x20
0x0666D334: e10315aa  mov x1, x21
0x0666D338: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0666D33C: f65741a9  ldp x22, x21, [sp, #0x10]
0x0666D340: e2031faa  mov x2, xzr
0x0666D344: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x0666D348: cf2a0a14  b #0x68f7e84
0x0666D34C: 584e2c97  bl #0x3180cac

; RVA 0x666D350 | private void OnItemCountChanged(IMergeItem mergeItem) { }
; bytes=360 sha256=45b3ff0bccc1b6000624bc1f89de7eb8d2bd0e1ffb7eb752007fb6fdf581685e status=arm64_complete_bound indexed_start=True
0x0666D350: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x0666D354: f65701a9  stp x22, x21, [sp, #0x10]
0x0666D358: f44f02a9  stp x20, x19, [sp, #0x20]
0x0666D35C: d4b500f0  adrp x20, #0x7d28000
0x0666D360: d68400f0  adrp x22, #0x7708000
0x0666D364: 88164439  ldrb w8, [x20, #0x105]
0x0666D368: d63640f9  ldr x22, [x22, #0x68]
0x0666D36C: f50301aa  mov x21, x1
0x0666D370: f30300aa  mov x19, x0
0x0666D374: 48020037  tbnz w8, #0, #0x666d3bc
0x0666D378: 20800090  adrp x0, #0x7671000
0x0666D37C: 008443f9  ldr x0, [x0, #0x708]
0x0666D380: a64d2c97  bl #0x3180a18
0x0666D384: 80800090  adrp x0, #0x767d000
0x0666D388: 002c45f9  ldr x0, [x0, #0xa58]
0x0666D38C: a34d2c97  bl #0x3180a18
0x0666D390: 20840090  adrp x0, #0x76f1000
0x0666D394: 003446f9  ldr x0, [x0, #0xc68]
0x0666D398: a04d2c97  bl #0x3180a18
0x0666D39C: c08400f0  adrp x0, #0x7708000
0x0666D3A0: 003840f9  ldr x0, [x0, #0x70]
0x0666D3A4: 9d4d2c97  bl #0x3180a18
0x0666D3A8: c08400f0  adrp x0, #0x7708000
0x0666D3AC: 003440f9  ldr x0, [x0, #0x68]
0x0666D3B0: 9a4d2c97  bl #0x3180a18
0x0666D3B4: 28008052  movz w8, #0x1
0x0666D3B8: 88160439  strb w8, [x20, #0x105]
0x0666D3BC: c00240f9  ldr x0, [x22]
0x0666D3C0: 384e2c97  bl #0x3180ca0
0x0666D3C4: e1031faa  mov x1, xzr
0x0666D3C8: f40300aa  mov x20, x0
0x0666D3CC: 8cb4c197  bl #0x56da5fc
0x0666D3D0: 340700b4  cbz x20, #0x666d4b4
0x0666D3D4: e00314aa  mov x0, x20
0x0666D3D8: 130c01f8  str x19, [x0, #0x10]!
0x0666D3DC: e10313aa  mov x1, x19
0x0666D3E0: 794d2c97  bl #0x31809c4
0x0666D3E4: f60314aa  mov x22, x20
0x0666D3E8: d58e01f8  str x21, [x22, #0x18]!
0x0666D3EC: e00316aa  mov x0, x22
0x0666D3F0: e10315aa  mov x1, x21
0x0666D3F4: 744d2c97  bl #0x31809c4
0x0666D3F8: 602240f9  ldr x0, [x19, #0x40]
0x0666D3FC: c00500b4  cbz x0, #0x666d4b4
0x0666D400: c10240f9  ldr x1, [x22]
0x0666D404: e2031faa  mov x2, xzr
0x0666D408: 9e570a94  bl #0x6903280
0x0666D40C: 682640f9  ldr x8, [x19, #0x48]
0x0666D410: 280500b4  cbz x8, #0x666d4b4
0x0666D414: c10240f9  ldr x1, [x22]
0x0666D418: f503002a  mov w21, w0
0x0666D41C: e00308aa  mov x0, x8
0x0666D420: e2031faa  mov x2, xzr
0x0666D424: 642b0a94  bl #0x68f81b4
0x0666D428: 682e40f9  ldr x8, [x19, #0x58]
0x0666D42C: 480400b4  cbz x8, #0x666d4b4
0x0666D430: 29840090  adrp x9, #0x76f1000
0x0666D434: 293546f9  ldr x9, [x9, #0xc68]
0x0666D438: 33800090  adrp x19, #0x7671000
0x0666D43C: 738643f9  ldr x19, [x19, #0x708]
0x0666D440: 810e40f9  ldr x1, [x20, #0x18]
0x0666D444: 230140f9  ldr x3, [x9]
0x0666D448: d68400f0  adrp x22, #0x7708000
0x0666D44C: 97800090  adrp x23, #0x767d000
0x0666D450: d63a40f9  ldr x22, [x22, #0x70]
0x0666D454: f72e45f9  ldr x23, [x23, #0xa58]
0x0666D458: 0200150b  add w2, w0, w21
0x0666D45C: e00308aa  mov x0, x8
0x0666D460: 5e14a197  bl #0x4eb25d8
0x0666D464: 600240f9  ldr x0, [x19]
0x0666D468: 0e4e2c97  bl #0x3180ca0
0x0666D46C: c20240f9  ldr x2, [x22]
0x0666D470: e10314aa  mov x1, x20
0x0666D474: e3031faa  mov x3, xzr
0x0666D478: f30300aa  mov x19, x0
0x0666D47C: faf30894  bl #0x68aa464
0x0666D480: e00240f9  ldr x0, [x23]
0x0666D484: 08e040b9  ldr w8, [x0, #0xe0]
0x0666D488: 48000035  cbnz w8, #0x666d490
0x0666D48C: c04d2c97  bl #0x3180b8c
0x0666D490: 8882fdb0  adrp x8, #0x16be000
0x0666D494: 003147bd  ldr s0, [x8, #0x730]
0x0666D498: e00313aa  mov x0, x19
0x0666D49C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0666D4A0: f65741a9  ldp x22, x21, [sp, #0x10]
0x0666D4A4: 21008052  movz w1, #0x1
0x0666D4A8: e2031faa  mov x2, xzr
0x0666D4AC: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x0666D4B0: 24f40814  b #0x68aa540
0x0666D4B4: fe4d2c97  bl #0x3180cac

; RVA 0x666D4C0 | private void TryInvokeItemCountChanged(IMergeItem mergeItem) { }
; bytes=256 sha256=7a174d7e18e479717ae3c7537186532c81427ec3bb22afac85b372f20a2f9703 status=arm64_complete_bound indexed_start=True
0x0666D4C0: ffc300d1  sub sp, sp, #0x30
0x0666D4C4: fe5701a9  stp x30, x21, [sp, #0x10]
0x0666D4C8: f44f02a9  stp x20, x19, [sp, #0x20]
0x0666D4CC: d5b500f0  adrp x21, #0x7d28000
0x0666D4D0: a81a4439  ldrb w8, [x21, #0x106]
0x0666D4D4: f30301aa  mov x19, x1
0x0666D4D8: f40300aa  mov x20, x0
0x0666D4DC: 28010037  tbnz w8, #0, #0x666d500
0x0666D4E0: c08400f0  adrp x0, #0x7708000
0x0666D4E4: 003c40f9  ldr x0, [x0, #0x78]
0x0666D4E8: 4c4d2c97  bl #0x3180a18
0x0666D4EC: 20840090  adrp x0, #0x76f1000
0x0666D4F0: 003446f9  ldr x0, [x0, #0xc68]
0x0666D4F4: 494d2c97  bl #0x3180a18
0x0666D4F8: 28008052  movz w8, #0x1
0x0666D4FC: a81a0439  strb w8, [x21, #0x106]
0x0666D500: ff0700f9  str xzr, [sp, #8]
0x0666D504: 802a40f9  ldr x0, [x20, #0x50]
0x0666D508: a00500b4  cbz x0, #0x666d5bc
0x0666D50C: d58400f0  adrp x21, #0x7708000
0x0666D510: b53e40f9  ldr x21, [x21, #0x78]
0x0666D514: e2330091  add x2, sp, #0xc
0x0666D518: e10313aa  mov x1, x19
0x0666D51C: a30240f9  ldr x3, [x21]
0x0666D520: eb1aa197  bl #0x4eb40cc
0x0666D524: 802e40f9  ldr x0, [x20, #0x58]
0x0666D528: a00400b4  cbz x0, #0x666d5bc
0x0666D52C: a30240f9  ldr x3, [x21]
0x0666D530: e2230091  add x2, sp, #8
0x0666D534: e10313aa  mov x1, x19
0x0666D538: e51aa197  bl #0x4eb40cc
0x0666D53C: e2234129  ldp w2, w8, [sp, #8]
0x0666D540: 5f00086b  cmp w2, w8
0x0666D544: 00020054  b.eq #0x666d584
0x0666D548: 802a40f9  ldr x0, [x20, #0x50]
0x0666D54C: 800300b4  cbz x0, #0x666d5bc
0x0666D550: 28840090  adrp x8, #0x76f1000
0x0666D554: 083546f9  ldr x8, [x8, #0xc68]
0x0666D558: e10313aa  mov x1, x19
0x0666D55C: 030140f9  ldr x3, [x8]
0x0666D560: 1e14a197  bl #0x4eb25d8
0x0666D564: 883240f9  ldr x8, [x20, #0x60]
0x0666D568: e80000b4  cbz x8, #0x666d584
0x0666D56C: e20b40b9  ldr w2, [sp, #8]
0x0666D570: 090d40f9  ldr x9, [x8, #0x18]
0x0666D574: 002140f9  ldr x0, [x8, #0x40]
0x0666D578: 031540f9  ldr x3, [x8, #0x28]
0x0666D57C: e10313aa  mov x1, x19
0x0666D580: 20013fd6  blr x9
0x0666D584: e2234129  ldp w2, w8, [sp, #8]
0x0666D588: 5f00086b  cmp w2, w8
0x0666D58C: 0d010054  b.le #0x666d5ac
0x0666D590: 883640f9  ldr x8, [x20, #0x68]
0x0666D594: c80000b4  cbz x8, #0x666d5ac
0x0666D598: 090d40f9  ldr x9, [x8, #0x18]
0x0666D59C: 002140f9  ldr x0, [x8, #0x40]
0x0666D5A0: 031540f9  ldr x3, [x8, #0x28]
0x0666D5A4: e10313aa  mov x1, x19
0x0666D5A8: 20013fd6  blr x9
0x0666D5AC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0666D5B0: fe5741a9  ldp x30, x21, [sp, #0x10]
0x0666D5B4: ffc30091  add sp, sp, #0x30
0x0666D5B8: c0035fd6  ret
0x0666D5BC: bc4d2c97  bl #0x3180cac

; RVA 0x666D5C0 | public int GetItemCount(IMergeItem mergeItem) { }
; bytes=112 sha256=8e039de115fde4190e69d39371bc626079d5c4a1c9bbc9e841d335fdfb9edf54 status=arm64_complete_bound indexed_start=True
0x0666D5C0: ffc300d1  sub sp, sp, #0x30
0x0666D5C4: fe5701a9  stp x30, x21, [sp, #0x10]
0x0666D5C8: f44f02a9  stp x20, x19, [sp, #0x20]
0x0666D5CC: d5b500f0  adrp x21, #0x7d28000
0x0666D5D0: a81e4439  ldrb w8, [x21, #0x107]
0x0666D5D4: f30301aa  mov x19, x1
0x0666D5D8: f40300aa  mov x20, x0
0x0666D5DC: c8000037  tbnz w8, #0, #0x666d5f4
0x0666D5E0: c08400f0  adrp x0, #0x7708000
0x0666D5E4: 003c40f9  ldr x0, [x0, #0x78]
0x0666D5E8: 0c4d2c97  bl #0x3180a18
0x0666D5EC: 28008052  movz w8, #0x1
0x0666D5F0: a81e0439  strb w8, [x21, #0x107]
0x0666D5F4: ff0f00b9  str wzr, [sp, #0xc]
0x0666D5F8: 802a40f9  ldr x0, [x20, #0x50]
0x0666D5FC: 800100b4  cbz x0, #0x666d62c
0x0666D600: c88400f0  adrp x8, #0x7708000
0x0666D604: 083d40f9  ldr x8, [x8, #0x78]
0x0666D608: e2330091  add x2, sp, #0xc
0x0666D60C: e10313aa  mov x1, x19
0x0666D610: 030140f9  ldr x3, [x8]
0x0666D614: ae1aa197  bl #0x4eb40cc
0x0666D618: e00f40b9  ldr w0, [sp, #0xc]
0x0666D61C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0666D620: fe5741a9  ldp x30, x21, [sp, #0x10]
0x0666D624: ffc30091  add sp, sp, #0x30
0x0666D628: c0035fd6  ret
0x0666D62C: a04d2c97  bl #0x3180cac

; RVA 0x666D630 | public int GetItemCountById(string itemId) { }
; bytes=252 sha256=c6f8a0e5b1a08b0cf5f81a64e1581d79850afaf6c24c06dc0660813fab3c0346 status=arm64_complete_bound indexed_start=True
0x0666D630: fe0f1cf8  str x30, [sp, #-0x40]!
0x0666D634: f85f01a9  stp x24, x23, [sp, #0x10]
0x0666D638: f65702a9  stp x22, x21, [sp, #0x20]
0x0666D63C: f44f03a9  stp x20, x19, [sp, #0x30]
0x0666D640: d5b500f0  adrp x21, #0x7d28000
0x0666D644: d68400f0  adrp x22, #0x7708000
0x0666D648: a8224439  ldrb w8, [x21, #0x108]
0x0666D64C: d64240f9  ldr x22, [x22, #0x80]
0x0666D650: f40301aa  mov x20, x1
0x0666D654: f30300aa  mov x19, x0
0x0666D658: 48020037  tbnz w8, #0, #0x666d6a0
0x0666D65C: c08400f0  adrp x0, #0x7708000
0x0666D660: 004440f9  ldr x0, [x0, #0x88]
0x0666D664: ed4c2c97  bl #0x3180a18
0x0666D668: c08400f0  adrp x0, #0x7708000
0x0666D66C: 004840f9  ldr x0, [x0, #0x90]
0x0666D670: ea4c2c97  bl #0x3180a18
0x0666D674: c08400f0  adrp x0, #0x7708000
0x0666D678: 004c40f9  ldr x0, [x0, #0x98]
0x0666D67C: e74c2c97  bl #0x3180a18
0x0666D680: c08400f0  adrp x0, #0x7708000
0x0666D684: 005040f9  ldr x0, [x0, #0xa0]
0x0666D688: e44c2c97  bl #0x3180a18
0x0666D68C: c08400f0  adrp x0, #0x7708000
0x0666D690: 004040f9  ldr x0, [x0, #0x80]
0x0666D694: e14c2c97  bl #0x3180a18
0x0666D698: 28008052  movz w8, #0x1
0x0666D69C: a8220439  strb w8, [x21, #0x108]
0x0666D6A0: c00240f9  ldr x0, [x22]
0x0666D6A4: 7f4d2c97  bl #0x3180ca0
0x0666D6A8: e1031faa  mov x1, xzr
0x0666D6AC: f50300aa  mov x21, x0
0x0666D6B0: d3b3c197  bl #0x56da5fc
0x0666D6B4: b50300b4  cbz x21, #0x666d728
0x0666D6B8: d68400f0  adrp x22, #0x7708000
0x0666D6BC: d78400f0  adrp x23, #0x7708000
0x0666D6C0: d88400f0  adrp x24, #0x7708000
0x0666D6C4: d64a40f9  ldr x22, [x22, #0x90]
0x0666D6C8: f75240f9  ldr x23, [x23, #0xa0]
0x0666D6CC: 184740f9  ldr x24, [x24, #0x88]
0x0666D6D0: e00315aa  mov x0, x21
0x0666D6D4: 140c01f8  str x20, [x0, #0x10]!
0x0666D6D8: e10314aa  mov x1, x20
0x0666D6DC: ba4c2c97  bl #0x31809c4
0x0666D6E0: c00240f9  ldr x0, [x22]
0x0666D6E4: 732a40f9  ldr x19, [x19, #0x50]
0x0666D6E8: 6e4d2c97  bl #0x3180ca0
0x0666D6EC: e20240f9  ldr x2, [x23]
0x0666D6F0: e10315aa  mov x1, x21
0x0666D6F4: e3031faa  mov x3, xzr
0x0666D6F8: f40300aa  mov x20, x0
0x0666D6FC: 557daf97  bl #0x524cc50
0x0666D700: 020340f9  ldr x2, [x24]
0x0666D704: e00313aa  mov x0, x19
0x0666D708: e10314aa  mov x1, x20
0x0666D70C: f25b5797  bl #0x3c446d4
0x0666D710: f44f43a9  ldp x20, x19, [sp, #0x30]
0x0666D714: f65742a9  ldp x22, x21, [sp, #0x20]
0x0666D718: f85f41a9  ldp x24, x23, [sp, #0x10]
0x0666D71C: e00301aa  mov x0, x1
0x0666D720: fe0744f8  ldr x30, [sp], #0x40
0x0666D724: c0035fd6  ret
0x0666D728: 614d2c97  bl #0x3180cac

; RVA 0x666D734 | public void .ctor() { }
; bytes=172 sha256=5f513a394ea45e1e47bd43a77c10ffd6bd165ec7a6789f74efdb7f1889222a0e status=arm64_complete_bound indexed_start=True
0x0666D734: fe0f1df8  str x30, [sp, #-0x30]!
0x0666D738: f65701a9  stp x22, x21, [sp, #0x10]
0x0666D73C: f44f02a9  stp x20, x19, [sp, #0x20]
0x0666D740: d4b500f0  adrp x20, #0x7d28000
0x0666D744: 36840090  adrp x22, #0x76f1000
0x0666D748: 35840090  adrp x21, #0x76f1000
0x0666D74C: 88264439  ldrb w8, [x20, #0x109]
0x0666D750: d6f645f9  ldr x22, [x22, #0xbe8]
0x0666D754: b5f245f9  ldr x21, [x21, #0xbe0]
0x0666D758: f30300aa  mov x19, x0
0x0666D75C: 28010037  tbnz w8, #0, #0x666d780
0x0666D760: 20840090  adrp x0, #0x76f1000
0x0666D764: 00f045f9  ldr x0, [x0, #0xbe0]
0x0666D768: ac4c2c97  bl #0x3180a18
0x0666D76C: 20840090  adrp x0, #0x76f1000
0x0666D770: 00f445f9  ldr x0, [x0, #0xbe8]
0x0666D774: a94c2c97  bl #0x3180a18
0x0666D778: 28008052  movz w8, #0x1
0x0666D77C: 88260439  strb w8, [x20, #0x109]
0x0666D780: c00240f9  ldr x0, [x22]
0x0666D784: 474d2c97  bl #0x3180ca0
0x0666D788: a10240f9  ldr x1, [x21]
0x0666D78C: f40300aa  mov x20, x0
0x0666D790: 2010a197  bl #0x4eb1810
0x0666D794: e00313aa  mov x0, x19
0x0666D798: 140c05f8  str x20, [x0, #0x50]!
0x0666D79C: e10314aa  mov x1, x20
0x0666D7A0: 894c2c97  bl #0x31809c4
0x0666D7A4: c00240f9  ldr x0, [x22]
0x0666D7A8: 3e4d2c97  bl #0x3180ca0
0x0666D7AC: a10240f9  ldr x1, [x21]
0x0666D7B0: f40300aa  mov x20, x0
0x0666D7B4: 1710a197  bl #0x4eb1810
0x0666D7B8: e00313aa  mov x0, x19
0x0666D7BC: 148c05f8  str x20, [x0, #0x58]!
0x0666D7C0: e10314aa  mov x1, x20
0x0666D7C4: 804c2c97  bl #0x31809c4
0x0666D7C8: e00313aa  mov x0, x19
0x0666D7CC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0666D7D0: f65741a9  ldp x22, x21, [sp, #0x10]
0x0666D7D4: e1031faa  mov x1, xzr
0x0666D7D8: fe0743f8  ldr x30, [sp], #0x30
0x0666D7DC: 59e7f417  b #0x63a7540

