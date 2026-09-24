; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 94 .ItemSpawningQueue.<>c__DisplayClass16_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x5FE9BEC | public void .ctor() { }
; bytes=8 sha256=5e2c7e7b20be7960895288c327809ff17d38ba4569bb4a8cef217a2e5d2d0e4d status=arm64_complete_bound indexed_start=True
0x05FE9BEC: e1031faa  mov x1, xzr
0x05FE9BF0: 83c2db17  b #0x56da5fc

; RVA 0x5FEAC38 | internal bool <AddCombinationWeightedItems>b__2(WeightedItemSpawnable item) { }
; bytes=244 sha256=5205934d00f42b493998c1bbb7e3ab83912e47291c46225a1f1cb11bf8a3d6cf status=arm64_complete_bound indexed_start=True
0x05FEAC38: fe0f1df8  str x30, [sp, #-0x30]!
0x05FEAC3C: f65701a9  stp x22, x21, [sp, #0x10]
0x05FEAC40: f44f02a9  stp x20, x19, [sp, #0x20]
0x05FEAC44: d5e900b0  adrp x21, #0x7d23000
0x05FEAC48: 16b700f0  adrp x22, #0x76cd000
0x05FEAC4C: a8c25839  ldrb w8, [x21, #0x630]
0x05FEAC50: d68e45f9  ldr x22, [x22, #0xb18]
0x05FEAC54: f40301aa  mov x20, x1
0x05FEAC58: f30300aa  mov x19, x0
0x05FEAC5C: e8010037  tbnz w8, #0, #0x5feac98
0x05FEAC60: 00b700f0  adrp x0, #0x76cd000
0x05FEAC64: 009045f9  ldr x0, [x0, #0xb20]
0x05FEAC68: 6c574697  bl #0x3180a18
0x05FEAC6C: 00b700f0  adrp x0, #0x76cd000
0x05FEAC70: 009445f9  ldr x0, [x0, #0xb28]
0x05FEAC74: 69574697  bl #0x3180a18
0x05FEAC78: 00b700f0  adrp x0, #0x76cd000
0x05FEAC7C: 009845f9  ldr x0, [x0, #0xb30]
0x05FEAC80: 66574697  bl #0x3180a18
0x05FEAC84: 00b700f0  adrp x0, #0x76cd000
0x05FEAC88: 008c45f9  ldr x0, [x0, #0xb18]
0x05FEAC8C: 63574697  bl #0x3180a18
0x05FEAC90: 28008052  movz w8, #0x1
0x05FEAC94: a8c21839  strb w8, [x21, #0x630]
0x05FEAC98: c00240f9  ldr x0, [x22]
0x05FEAC9C: 01584697  bl #0x3180ca0
0x05FEACA0: e1031faa  mov x1, xzr
0x05FEACA4: f50300aa  mov x21, x0
0x05FEACA8: 55bedb97  bl #0x56da5fc
0x05FEACAC: f50300b4  cbz x21, #0x5fead28
0x05FEACB0: e00315aa  mov x0, x21
0x05FEACB4: 140c01f8  str x20, [x0, #0x10]!
0x05FEACB8: e10314aa  mov x1, x20
0x05FEACBC: 42574697  bl #0x31809c4
0x05FEACC0: 680a40f9  ldr x8, [x19, #0x10]
0x05FEACC4: 280300b4  cbz x8, #0x5fead28
0x05FEACC8: 09b700f0  adrp x9, #0x76cd000
0x05FEACCC: 299545f9  ldr x9, [x9, #0xb28]
0x05FEACD0: 14b700f0  adrp x20, #0x76cd000
0x05FEACD4: 16b700f0  adrp x22, #0x76cd000
0x05FEACD8: 131540f9  ldr x19, [x8, #0x28]
0x05FEACDC: 200140f9  ldr x0, [x9]
0x05FEACE0: 949a45f9  ldr x20, [x20, #0xb30]
0x05FEACE4: d69245f9  ldr x22, [x22, #0xb20]
0x05FEACE8: ee574697  bl #0x3180ca0
0x05FEACEC: 820240f9  ldr x2, [x20]
0x05FEACF0: e10315aa  mov x1, x21
0x05FEACF4: e3031faa  mov x3, xzr
0x05FEACF8: f40300aa  mov x20, x0
0x05FEACFC: b0acc997  bl #0x5255fbc
0x05FEAD00: c20240f9  ldr x2, [x22]
0x05FEAD04: e00313aa  mov x0, x19
0x05FEAD08: e10314aa  mov x1, x20
0x05FEAD0C: 09697197  bl #0x3c45130
0x05FEAD10: f44f42a9  ldp x20, x19, [sp, #0x20]
0x05FEAD14: f65741a9  ldp x22, x21, [sp, #0x10]
0x05FEAD18: 1f0000f1  cmp x0, #0
0x05FEAD1C: e0079f1a  cset w0, ne
0x05FEAD20: fe0743f8  ldr x30, [sp], #0x30
0x05FEAD24: c0035fd6  ret
0x05FEAD28: e1574697  bl #0x3180cac

