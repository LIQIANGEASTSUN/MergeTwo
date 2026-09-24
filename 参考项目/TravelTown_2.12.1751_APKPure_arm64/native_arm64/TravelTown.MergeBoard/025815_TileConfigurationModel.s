; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25815 Merger.MergeBoard.Models.TileConfigurationModel
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A7DC50 | public IEnumerable<int> get_TileIndices() { }
; bytes=184 sha256=4615e38262bf8380680f090cbf795db1318d21cd9de2e39b3747319676d19628 status=arm64_complete_bound indexed_start=True
0x06A7DC50: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A7DC54: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A7DC58: 749500b0  adrp x20, #0x7d2a000
0x06A7DC5C: 881e5d39  ldrb w8, [x20, #0x747]
0x06A7DC60: f30300aa  mov x19, x0
0x06A7DC64: 28010037  tbnz w8, #0, #0x6a7dc88
0x06A7DC68: a0650090  adrp x0, #0x7731000
0x06A7DC6C: 00d844f9  ldr x0, [x0, #0x9b0]
0x06A7DC70: 6a0b1c97  bl #0x3180a18
0x06A7DC74: 206000b0  adrp x0, #0x7682000
0x06A7DC78: 000443f9  ldr x0, [x0, #0x608]
0x06A7DC7C: 670b1c97  bl #0x3180a18
0x06A7DC80: 28008052  movz w8, #0x1
0x06A7DC84: 881e1d39  strb w8, [x20, #0x747]
0x06A7DC88: 600a40f9  ldr x0, [x19, #0x10]
0x06A7DC8C: c00000b4  cbz x0, #0x6a7dca4
0x06A7DC90: a8650090  adrp x8, #0x7731000
0x06A7DC94: 08d944f9  ldr x8, [x8, #0x9b0]
0x06A7DC98: 010140f9  ldr x1, [x8]
0x06A7DC9C: dfde8e97  bl #0x4e35818
0x06A7DCA0: e00200b5  cbnz x0, #0x6a7dcfc
0x06A7DCA4: 286000b0  adrp x8, #0x7682000
0x06A7DCA8: 080543f9  ldr x8, [x8, #0x608]
0x06A7DCAC: 130140f9  ldr x19, [x8]
0x06A7DCB0: 681e40f9  ldr x8, [x19, #0x38]
0x06A7DCB4: 880000b5  cbnz x8, #0x6a7dcc4
0x06A7DCB8: e00313aa  mov x0, x19
0x06A7DCBC: ef621b97  bl #0x3156878
0x06A7DCC0: 681e40f9  ldr x8, [x19, #0x38]
0x06A7DCC4: 000940f9  ldr x0, [x8, #0x10]
0x06A7DCC8: 08d44439  ldrb w8, [x0, #0x135]
0x06A7DCCC: 48000037  tbnz w8, #0, #0x6a7dcd4
0x06A7DCD0: d3621b97  bl #0x315681c
0x06A7DCD4: 08e040b9  ldr w8, [x0, #0xe0]
0x06A7DCD8: 48000035  cbnz w8, #0x6a7dce0
0x06A7DCDC: ac0b1c97  bl #0x3180b8c
0x06A7DCE0: 681e40f9  ldr x8, [x19, #0x38]
0x06A7DCE4: 000940f9  ldr x0, [x8, #0x10]
0x06A7DCE8: 08d44439  ldrb w8, [x0, #0x135]
0x06A7DCEC: 48000037  tbnz w8, #0, #0x6a7dcf4
0x06A7DCF0: cb621b97  bl #0x315681c
0x06A7DCF4: 085c40f9  ldr x8, [x0, #0xb8]
0x06A7DCF8: 000140f9  ldr x0, [x8]
0x06A7DCFC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A7DD00: fe0742f8  ldr x30, [sp], #0x20
0x06A7DD04: c0035fd6  ret

; RVA 0x6A7DD08 | public int get_TileCount() { }
; bytes=88 sha256=3e8b7a5cc1fd8a1875bc5b6e7a1c032180b06155a95ca9e2b526afeeec776a76 status=arm64_complete_bound indexed_start=True
0x06A7DD08: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A7DD0C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A7DD10: 749500b0  adrp x20, #0x7d2a000
0x06A7DD14: 88225d39  ldrb w8, [x20, #0x748]
0x06A7DD18: f30300aa  mov x19, x0
0x06A7DD1C: c8000037  tbnz w8, #0, #0x6a7dd34
0x06A7DD20: a0650090  adrp x0, #0x7731000
0x06A7DD24: 00dc44f9  ldr x0, [x0, #0x9b8]
0x06A7DD28: 3c0b1c97  bl #0x3180a18
0x06A7DD2C: 28008052  movz w8, #0x1
0x06A7DD30: 88221d39  strb w8, [x20, #0x748]
0x06A7DD34: 600a40f9  ldr x0, [x19, #0x10]
0x06A7DD38: e00000b4  cbz x0, #0x6a7dd54
0x06A7DD3C: a8650090  adrp x8, #0x7731000
0x06A7DD40: 08dd44f9  ldr x8, [x8, #0x9b8]
0x06A7DD44: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A7DD48: 010140f9  ldr x1, [x8]
0x06A7DD4C: fe0742f8  ldr x30, [sp], #0x20
0x06A7DD50: aede8e17  b #0x4e35808
0x06A7DD54: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A7DD58: fe0742f8  ldr x30, [sp], #0x20
0x06A7DD5C: c0035fd6  ret

; RVA 0x6A7DD60 | public void SetTileConfiguration(List<DynamicBoardCellConfiguration> tileConfigurationData) { }
; bytes=504 sha256=2db0cc49ed2edd384e10fc943cb45eb965543ec09548813805fac9e82312431a status=arm64_complete_bound indexed_start=True
0x06A7DD60: fe67bca9  stp x30, x25, [sp, #-0x40]!
0x06A7DD64: f85f01a9  stp x24, x23, [sp, #0x10]
0x06A7DD68: f65702a9  stp x22, x21, [sp, #0x20]
0x06A7DD6C: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A7DD70: 759500b0  adrp x21, #0x7d2a000
0x06A7DD74: a8265d39  ldrb w8, [x21, #0x749]
0x06A7DD78: f40301aa  mov x20, x1
0x06A7DD7C: f30300aa  mov x19, x0
0x06A7DD80: 68030037  tbnz w8, #0, #0x6a7ddec
0x06A7DD84: a0650090  adrp x0, #0x7731000
0x06A7DD88: 00e044f9  ldr x0, [x0, #0x9c0]
0x06A7DD8C: 230b1c97  bl #0x3180a18
0x06A7DD90: a0650090  adrp x0, #0x7731000
0x06A7DD94: 00e444f9  ldr x0, [x0, #0x9c8]
0x06A7DD98: 200b1c97  bl #0x3180a18
0x06A7DD9C: a0650090  adrp x0, #0x7731000
0x06A7DDA0: 00e844f9  ldr x0, [x0, #0x9d0]
0x06A7DDA4: 1d0b1c97  bl #0x3180a18
0x06A7DDA8: a0650090  adrp x0, #0x7731000
0x06A7DDAC: 00ec44f9  ldr x0, [x0, #0x9d8]
0x06A7DDB0: 1a0b1c97  bl #0x3180a18
0x06A7DDB4: a0650090  adrp x0, #0x7731000
0x06A7DDB8: 00f044f9  ldr x0, [x0, #0x9e0]
0x06A7DDBC: 170b1c97  bl #0x3180a18
0x06A7DDC0: a0650090  adrp x0, #0x7731000
0x06A7DDC4: 00f444f9  ldr x0, [x0, #0x9e8]
0x06A7DDC8: 140b1c97  bl #0x3180a18
0x06A7DDCC: a0650090  adrp x0, #0x7731000
0x06A7DDD0: 00f844f9  ldr x0, [x0, #0x9f0]
0x06A7DDD4: 110b1c97  bl #0x3180a18
0x06A7DDD8: a0650090  adrp x0, #0x7731000
0x06A7DDDC: 00fc44f9  ldr x0, [x0, #0x9f8]
0x06A7DDE0: 0e0b1c97  bl #0x3180a18
0x06A7DDE4: 28008052  movz w8, #0x1
0x06A7DDE8: a8261d39  strb w8, [x21, #0x749]
0x06A7DDEC: 140900b4  cbz x20, #0x6a7df0c
0x06A7DDF0: b8650090  adrp x24, #0x7731000
0x06A7DDF4: 18ff44f9  ldr x24, [x24, #0x9f8]
0x06A7DDF8: 000340f9  ldr x0, [x24]
0x06A7DDFC: 08e040b9  ldr w8, [x0, #0xe0]
0x06A7DE00: 68000035  cbnz w8, #0x6a7de0c
0x06A7DE04: 620b1c97  bl #0x3180b8c
0x06A7DE08: 000340f9  ldr x0, [x24]
0x06A7DE0C: 085c40f9  ldr x8, [x0, #0xb8]
0x06A7DE10: 150540f9  ldr x21, [x8, #8]
0x06A7DE14: 150300b5  cbnz x21, #0x6a7de74
0x06A7DE18: 08e040b9  ldr w8, [x0, #0xe0]
0x06A7DE1C: 68000035  cbnz w8, #0x6a7de28
0x06A7DE20: 5b0b1c97  bl #0x3180b8c
0x06A7DE24: 000340f9  ldr x0, [x24]
0x06A7DE28: a9650090  adrp x9, #0x7731000
0x06A7DE2C: 085c40f9  ldr x8, [x0, #0xb8]
0x06A7DE30: 29f144f9  ldr x9, [x9, #0x9e0]
0x06A7DE34: 160140f9  ldr x22, [x8]
0x06A7DE38: 200140f9  ldr x0, [x9]
0x06A7DE3C: 990b1c97  bl #0x3180ca0
0x06A7DE40: a8650090  adrp x8, #0x7731000
0x06A7DE44: 08f544f9  ldr x8, [x8, #0x9e8]
0x06A7DE48: e10316aa  mov x1, x22
0x06A7DE4C: e3031faa  mov x3, xzr
0x06A7DE50: f50300aa  mov x21, x0
0x06A7DE54: 020140f9  ldr x2, [x8]
0x06A7DE58: 03629f97  bl #0x5256664
0x06A7DE5C: 080340f9  ldr x8, [x24]
0x06A7DE60: e10315aa  mov x1, x21
0x06A7DE64: 005d40f9  ldr x0, [x8, #0xb8]
0x06A7DE68: 158c00f8  str x21, [x0, #8]!
0x06A7DE6C: d60a1c97  bl #0x31809c4
0x06A7DE70: 000340f9  ldr x0, [x24]
0x06A7DE74: 08e040b9  ldr w8, [x0, #0xe0]
0x06A7DE78: 68000035  cbnz w8, #0x6a7de84
0x06A7DE7C: 440b1c97  bl #0x3180b8c
0x06A7DE80: 000340f9  ldr x0, [x24]
0x06A7DE84: 085c40f9  ldr x8, [x0, #0xb8]
0x06A7DE88: b9650090  adrp x25, #0x7731000
0x06A7DE8C: 160940f9  ldr x22, [x8, #0x10]
0x06A7DE90: 39eb44f9  ldr x25, [x25, #0x9d0]
0x06A7DE94: f60200b5  cbnz x22, #0x6a7def0
0x06A7DE98: 08e040b9  ldr w8, [x0, #0xe0]
0x06A7DE9C: 68000035  cbnz w8, #0x6a7dea8
0x06A7DEA0: 3b0b1c97  bl #0x3180b8c
0x06A7DEA4: 000340f9  ldr x0, [x24]
0x06A7DEA8: a9650090  adrp x9, #0x7731000
0x06A7DEAC: 085c40f9  ldr x8, [x0, #0xb8]
0x06A7DEB0: 29ed44f9  ldr x9, [x9, #0x9d8]
0x06A7DEB4: 170140f9  ldr x23, [x8]
0x06A7DEB8: 200140f9  ldr x0, [x9]
0x06A7DEBC: 790b1c97  bl #0x3180ca0
0x06A7DEC0: a8650090  adrp x8, #0x7731000
0x06A7DEC4: 08f944f9  ldr x8, [x8, #0x9f0]
0x06A7DEC8: e10317aa  mov x1, x23
0x06A7DECC: e3031faa  mov x3, xzr
0x06A7DED0: f60300aa  mov x22, x0
0x06A7DED4: 020140f9  ldr x2, [x8]
0x06A7DED8: b8629f97  bl #0x52569b8
0x06A7DEDC: 080340f9  ldr x8, [x24]
0x06A7DEE0: e10316aa  mov x1, x22
0x06A7DEE4: 005d40f9  ldr x0, [x8, #0xb8]
0x06A7DEE8: 160c01f8  str x22, [x0, #0x10]!
0x06A7DEEC: b60a1c97  bl #0x31809c4
0x06A7DEF0: 230340f9  ldr x3, [x25]
0x06A7DEF4: e00314aa  mov x0, x20
0x06A7DEF8: e10315aa  mov x1, x21
0x06A7DEFC: e20316aa  mov x2, x22
0x06A7DF00: 02784797  bl #0x3c5bf08
0x06A7DF04: f40300aa  mov x20, x0
0x06A7DF08: 400100b5  cbnz x0, #0x6a7df30
0x06A7DF0C: a8650090  adrp x8, #0x7731000
0x06A7DF10: 08e544f9  ldr x8, [x8, #0x9c8]
0x06A7DF14: b4650090  adrp x20, #0x7731000
0x06A7DF18: 000140f9  ldr x0, [x8]
0x06A7DF1C: 94e244f9  ldr x20, [x20, #0x9c0]
0x06A7DF20: 600b1c97  bl #0x3180ca0
0x06A7DF24: 810240f9  ldr x1, [x20]
0x06A7DF28: f40300aa  mov x20, x0
0x06A7DF2C: 8cdb8e97  bl #0x4e34d5c
0x06A7DF30: 330100b4  cbz x19, #0x6a7df54
0x06A7DF34: 740e01f8  str x20, [x19, #0x10]!
0x06A7DF38: e00313aa  mov x0, x19
0x06A7DF3C: e10314aa  mov x1, x20
0x06A7DF40: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A7DF44: f65742a9  ldp x22, x21, [sp, #0x20]
0x06A7DF48: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06A7DF4C: fe67c4a8  ldp x30, x25, [sp], #0x40
0x06A7DF50: 9d0a1c17  b #0x31809c4
0x06A7DF54: 560b1c97  bl #0x3180cac

; RVA 0x6A7DF58 | public List<DynamicBoardCellConfiguration> GetTileConfiguration() { }
; bytes=108 sha256=a84807232dd18b995a81e6e78c286600828ddda2eedc75f4d3034b1c4701da16 status=arm64_complete_bound indexed_start=True
0x06A7DF58: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A7DF5C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A7DF60: 749500b0  adrp x20, #0x7d2a000
0x06A7DF64: 882a5d39  ldrb w8, [x20, #0x74a]
0x06A7DF68: f30300aa  mov x19, x0
0x06A7DF6C: 28010037  tbnz w8, #0, #0x6a7df90
0x06A7DF70: a0650090  adrp x0, #0x7731000
0x06A7DF74: 000045f9  ldr x0, [x0, #0xa00]
0x06A7DF78: a80a1c97  bl #0x3180a18
0x06A7DF7C: a0650090  adrp x0, #0x7731000
0x06A7DF80: 000445f9  ldr x0, [x0, #0xa08]
0x06A7DF84: a50a1c97  bl #0x3180a18
0x06A7DF88: 28008052  movz w8, #0x1
0x06A7DF8C: 882a1d39  strb w8, [x20, #0x74a]
0x06A7DF90: 600a40f9  ldr x0, [x19, #0x10]
0x06A7DF94: 600100b4  cbz x0, #0x6a7dfc0
0x06A7DF98: a8650090  adrp x8, #0x7731000
0x06A7DF9C: 080145f9  ldr x8, [x8, #0xa00]
0x06A7DFA0: b3650090  adrp x19, #0x7731000
0x06A7DFA4: 010140f9  ldr x1, [x8]
0x06A7DFA8: 730645f9  ldr x19, [x19, #0xa08]
0x06A7DFAC: 6fde8e97  bl #0x4e35968
0x06A7DFB0: 610240f9  ldr x1, [x19]
0x06A7DFB4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A7DFB8: fe0742f8  ldr x30, [sp], #0x20
0x06A7DFBC: 05884717  b #0x3c5ffd0
0x06A7DFC0: 3b0b1c97  bl #0x3180cac

; RVA 0x6A7DFC4 | public DynamicBoardCellConfiguration GetTileConfiguration(int tileIndex) { }
; bytes=116 sha256=959111923dd988e496fcbc1d4eafea881b5b06f292eb64e7cad86c8f943c8a3e status=arm64_complete_bound indexed_start=True
0x06A7DFC4: ffc300d1  sub sp, sp, #0x30
0x06A7DFC8: fe5701a9  stp x30, x21, [sp, #0x10]
0x06A7DFCC: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A7DFD0: 759500b0  adrp x21, #0x7d2a000
0x06A7DFD4: a82e5d39  ldrb w8, [x21, #0x74b]
0x06A7DFD8: f303012a  mov w19, w1
0x06A7DFDC: f40300aa  mov x20, x0
0x06A7DFE0: c8000037  tbnz w8, #0, #0x6a7dff8
0x06A7DFE4: a0650090  adrp x0, #0x7731000
0x06A7DFE8: 000845f9  ldr x0, [x0, #0xa10]
0x06A7DFEC: 8b0a1c97  bl #0x3180a18
0x06A7DFF0: 28008052  movz w8, #0x1
0x06A7DFF4: a82e1d39  strb w8, [x21, #0x74b]
0x06A7DFF8: ff0700f9  str xzr, [sp, #8]
0x06A7DFFC: 800a40f9  ldr x0, [x20, #0x10]
0x06A7E000: 400100b4  cbz x0, #0x6a7e028
0x06A7E004: 886500f0  adrp x8, #0x7731000
0x06A7E008: 080945f9  ldr x8, [x8, #0xa10]
0x06A7E00C: e2230091  add x2, sp, #8
0x06A7E010: e103132a  mov w1, w19
0x06A7E014: 030140f9  ldr x3, [x8]
0x06A7E018: 7ce58e97  bl #0x4e37608
0x06A7E01C: e80740f9  ldr x8, [sp, #8]
0x06A7E020: 1f000072  tst w0, #1
0x06A7E024: 00119f9a  csel x0, x8, xzr, ne
0x06A7E028: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A7E02C: fe5741a9  ldp x30, x21, [sp, #0x10]
0x06A7E030: ffc30091  add sp, sp, #0x30
0x06A7E034: c0035fd6  ret

; RVA 0x6A7E038 | public bool HasTileConfiguration(int tileIndex) { }
; bytes=96 sha256=4c0e9a98d3f57d2e2418a66e60a08660c851d65543e28725501399b483ce0d68 status=arm64_complete_bound indexed_start=True
0x06A7E038: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A7E03C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A7E040: 75950090  adrp x21, #0x7d2a000
0x06A7E044: a8325d39  ldrb w8, [x21, #0x74c]
0x06A7E048: f303012a  mov w19, w1
0x06A7E04C: f40300aa  mov x20, x0
0x06A7E050: c8000037  tbnz w8, #0, #0x6a7e068
0x06A7E054: 806500f0  adrp x0, #0x7731000
0x06A7E058: 000c45f9  ldr x0, [x0, #0xa18]
0x06A7E05C: 6f0a1c97  bl #0x3180a18
0x06A7E060: 28008052  movz w8, #0x1
0x06A7E064: a8321d39  strb w8, [x21, #0x74c]
0x06A7E068: 800a40f9  ldr x0, [x20, #0x10]
0x06A7E06C: 000100b4  cbz x0, #0x6a7e08c
0x06A7E070: 886500f0  adrp x8, #0x7731000
0x06A7E074: 080d45f9  ldr x8, [x8, #0xa18]
0x06A7E078: e103132a  mov w1, w19
0x06A7E07C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A7E080: 020140f9  ldr x2, [x8]
0x06A7E084: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A7E088: 31df8e17  b #0x4e35d4c
0x06A7E08C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A7E090: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A7E094: c0035fd6  ret

; RVA 0x6A7E098 | public void .ctor() { }
; bytes=136 sha256=3f3eb0cdcda1204fa34dce3cd28ecd18d20e642e5218c4748434c412554a9b2a status=arm64_complete_bound indexed_start=True
0x06A7E098: fe0f1df8  str x30, [sp, #-0x30]!
0x06A7E09C: f65701a9  stp x22, x21, [sp, #0x10]
0x06A7E0A0: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A7E0A4: 75950090  adrp x21, #0x7d2a000
0x06A7E0A8: 966500f0  adrp x22, #0x7731000
0x06A7E0AC: 946500f0  adrp x20, #0x7731000
0x06A7E0B0: a8365d39  ldrb w8, [x21, #0x74d]
0x06A7E0B4: d6e644f9  ldr x22, [x22, #0x9c8]
0x06A7E0B8: 94e244f9  ldr x20, [x20, #0x9c0]
0x06A7E0BC: f30300aa  mov x19, x0
0x06A7E0C0: 28010037  tbnz w8, #0, #0x6a7e0e4
0x06A7E0C4: 806500f0  adrp x0, #0x7731000
0x06A7E0C8: 00e044f9  ldr x0, [x0, #0x9c0]
0x06A7E0CC: 530a1c97  bl #0x3180a18
0x06A7E0D0: 806500f0  adrp x0, #0x7731000
0x06A7E0D4: 00e444f9  ldr x0, [x0, #0x9c8]
0x06A7E0D8: 500a1c97  bl #0x3180a18
0x06A7E0DC: 28008052  movz w8, #0x1
0x06A7E0E0: a8361d39  strb w8, [x21, #0x74d]
0x06A7E0E4: c00240f9  ldr x0, [x22]
0x06A7E0E8: ee0a1c97  bl #0x3180ca0
0x06A7E0EC: 810240f9  ldr x1, [x20]
0x06A7E0F0: f40300aa  mov x20, x0
0x06A7E0F4: 1adb8e97  bl #0x4e34d5c
0x06A7E0F8: e00313aa  mov x0, x19
0x06A7E0FC: 140c01f8  str x20, [x0, #0x10]!
0x06A7E100: e10314aa  mov x1, x20
0x06A7E104: 300a1c97  bl #0x31809c4
0x06A7E108: e00313aa  mov x0, x19
0x06A7E10C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A7E110: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A7E114: e1031faa  mov x1, xzr
0x06A7E118: fe0743f8  ldr x30, [sp], #0x30
0x06A7E11C: 3871b117  b #0x56da5fc

