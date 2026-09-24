; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 93 .ItemSpawningQueue.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x5FEA948 | private static void .cctor() { }
; bytes=104 sha256=e5070f9ea0d6b3d26ffa197cdb81bef3a22ce527d370d0836a9004c07506383a status=arm64_complete_bound indexed_start=True
0x05FEA948: fe0f1ef8  str x30, [sp, #-0x20]!
0x05FEA94C: f44f01a9  stp x20, x19, [sp, #0x10]
0x05FEA950: d3e900b0  adrp x19, #0x7d23000
0x05FEA954: 14b700f0  adrp x20, #0x76cd000
0x05FEA958: 68b65839  ldrb w8, [x19, #0x62d]
0x05FEA95C: 949644f9  ldr x20, [x20, #0x928]
0x05FEA960: c8000037  tbnz w8, #0, #0x5fea978
0x05FEA964: 00b700f0  adrp x0, #0x76cd000
0x05FEA968: 009444f9  ldr x0, [x0, #0x928]
0x05FEA96C: 2b584697  bl #0x3180a18
0x05FEA970: 28008052  movz w8, #0x1
0x05FEA974: 68b61839  strb w8, [x19, #0x62d]
0x05FEA978: 800240f9  ldr x0, [x20]
0x05FEA97C: c9584697  bl #0x3180ca0
0x05FEA980: e1031faa  mov x1, xzr
0x05FEA984: f30300aa  mov x19, x0
0x05FEA988: 1dbfdb97  bl #0x56da5fc
0x05FEA98C: 880240f9  ldr x8, [x20]
0x05FEA990: e10313aa  mov x1, x19
0x05FEA994: 085d40f9  ldr x8, [x8, #0xb8]
0x05FEA998: 130100f9  str x19, [x8]
0x05FEA99C: 880240f9  ldr x8, [x20]
0x05FEA9A0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x05FEA9A4: 005d40f9  ldr x0, [x8, #0xb8]
0x05FEA9A8: fe0742f8  ldr x30, [sp], #0x20
0x05FEA9AC: 06584617  b #0x31809c4

; RVA 0x5FEA9B0 | public void .ctor() { }
; bytes=8 sha256=fd8d210df279ac31a6f54655fabbd63008ccb9ae6b88240e3de9c70b53c38552 status=arm64_complete_bound indexed_start=True
0x05FEA9B0: e1031faa  mov x1, xzr
0x05FEA9B4: 12bfdb17  b #0x56da5fc

; RVA 0x5FEA9B8 | internal IEnumerable<WeightedItem> <AddCombinationWeightedItems>b__16_0(Combination interactionCostItem) { }
; bytes=24 sha256=30f8be2189af86fca63c4ef429e7d0ee3cb28e4d6a56460dd2d890b92b38b868 status=arm64_complete_bound indexed_start=True
0x05FEA9B8: fe0f1ff8  str x30, [sp, #-0x10]!
0x05FEA9BC: 810000b4  cbz x1, #0x5fea9cc
0x05FEA9C0: 201440f9  ldr x0, [x1, #0x28]
0x05FEA9C4: fe0741f8  ldr x30, [sp], #0x10
0x05FEA9C8: c0035fd6  ret
0x05FEA9CC: b8584697  bl #0x3180cac

; RVA 0x5FEA9D0 | internal WeightedItemSpawnable <AddCombinationWeightedItems>b__16_1(WeightedItem i) { }
; bytes=124 sha256=7c1d0b091cd38b5ef339f6df6de2c988f8cf561e422d24d6feab4ef91f7c6ff3 status=arm64_complete_bound indexed_start=True
0x05FEA9D0: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x05FEA9D4: f44f01a9  stp x20, x19, [sp, #0x10]
0x05FEA9D8: d4e900b0  adrp x20, #0x7d23000
0x05FEA9DC: b5b40090  adrp x21, #0x767e000
0x05FEA9E0: 88ba5839  ldrb w8, [x20, #0x62e]
0x05FEA9E4: b5aa42f9  ldr x21, [x21, #0x550]
0x05FEA9E8: f30301aa  mov x19, x1
0x05FEA9EC: c8000037  tbnz w8, #0, #0x5feaa04
0x05FEA9F0: a0b40090  adrp x0, #0x767e000
0x05FEA9F4: 00a842f9  ldr x0, [x0, #0x550]
0x05FEA9F8: 08584697  bl #0x3180a18
0x05FEA9FC: 28008052  movz w8, #0x1
0x05FEAA00: 88ba1839  strb w8, [x20, #0x62e]
0x05FEAA04: a00240f9  ldr x0, [x21]
0x05FEAA08: a6584697  bl #0x3180ca0
0x05FEAA0C: e1031faa  mov x1, xzr
0x05FEAA10: f40300aa  mov x20, x0
0x05FEAA14: 1cfc2894  bl #0x6a29a84
0x05FEAA18: 930100b4  cbz x19, #0x5feaa48
0x05FEAA1C: 740100b4  cbz x20, #0x5feaa48
0x05FEAA20: 610e40f9  ldr x1, [x19, #0x18]
0x05FEAA24: e00314aa  mov x0, x20
0x05FEAA28: 010c01f8  str x1, [x0, #0x10]!
0x05FEAA2C: e6574697  bl #0x31809c4
0x05FEAA30: 681240b9  ldr w8, [x19, #0x10]
0x05FEAA34: e00314aa  mov x0, x20
0x05FEAA38: 882600b9  str w8, [x20, #0x24]
0x05FEAA3C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x05FEAA40: fe57c2a8  ldp x30, x21, [sp], #0x20
0x05FEAA44: c0035fd6  ret
0x05FEAA48: 99584697  bl #0x3180cac

; RVA 0x5FEAA4C | internal int <AddCombinationWeightedItems>b__16_3(WeightedItemSpawnable item1, WeightedItemSpawnable item2) { }
; bytes=36 sha256=de1177087363af960ea03ed0dc1f3a9e769fbf5daca3ded18799646337776698 status=arm64_complete_bound indexed_start=True
0x05FEAA4C: fe0f1ff8  str x30, [sp, #-0x10]!
0x05FEAA50: e20000b4  cbz x2, #0x5feaa6c
0x05FEAA54: c10000b4  cbz x1, #0x5feaa6c
0x05FEAA58: 482440b9  ldr w8, [x2, #0x24]
0x05FEAA5C: 292440b9  ldr w9, [x1, #0x24]
0x05FEAA60: 0001094b  sub w0, w8, w9
0x05FEAA64: fe0741f8  ldr x30, [sp], #0x10
0x05FEAA68: c0035fd6  ret
0x05FEAA6C: 90584697  bl #0x3180cac

; RVA 0x5FEAA70 | internal int <AddCombinationWeightedItems>b__16_4(WeightedItemSpawnable item) { }
; bytes=24 sha256=ae13b01aaa2c57c077a3d5b9461f07b2d776ecb94f7d1598c2b379ed49c6d7de status=arm64_complete_bound indexed_start=True
0x05FEAA70: fe0f1ff8  str x30, [sp, #-0x10]!
0x05FEAA74: 810000b4  cbz x1, #0x5feaa84
0x05FEAA78: 202440b9  ldr w0, [x1, #0x24]
0x05FEAA7C: fe0741f8  ldr x30, [sp], #0x10
0x05FEAA80: c0035fd6  ret
0x05FEAA84: 8a584697  bl #0x3180cac

; RVA 0x5FEAA88 | internal WeightedItemSpawnable <AddCombinationWeightedItems>b__16_5(WeightedItemSpawnable item) { }
; bytes=8 sha256=50ddf39453988ba55a1b7d9bbba7f1ae7c5c5c3f7414c859acf17118fa4886b8 status=arm64_complete_bound indexed_start=True
0x05FEAA88: e00301aa  mov x0, x1
0x05FEAA8C: c0035fd6  ret

; RVA 0x5FEAA90 | internal string <GetNextItems>b__17_4(MergeItemWeakReference i) { }
; bytes=36 sha256=96be2c8568d640c093b12fb72ccf6c42ae3c7ca75d32cd5fed5b19dcbff51e09 status=arm64_complete_bound indexed_start=True
0x05FEAA90: fe0f1ff8  str x30, [sp, #-0x10]!
0x05FEAA94: e10000b4  cbz x1, #0x5feaab0
0x05FEAA98: 280040f9  ldr x8, [x1]
0x05FEAA9C: e00301aa  mov x0, x1
0x05FEAAA0: 02a15ca9  ldp x2, x8, [x8, #0x1c8]
0x05FEAAA4: e10308aa  mov x1, x8
0x05FEAAA8: fe0741f8  ldr x30, [sp], #0x10
0x05FEAAAC: 40001fd6  br x2
0x05FEAAB0: 7f584697  bl #0x3180cac

; RVA 0x5FEAAB4 | internal string <GetNextItems>b__17_5(ItemPayloadBase i) { }
; bytes=24 sha256=0155ad382dbf44afa121ef41fa140322e954a451ecaa2f55059aa20fea6f1f6b status=arm64_complete_bound indexed_start=True
0x05FEAAB4: fe0f1ff8  str x30, [sp, #-0x10]!
0x05FEAAB8: 810000b4  cbz x1, #0x5feaac8
0x05FEAABC: 200840f9  ldr x0, [x1, #0x10]
0x05FEAAC0: fe0741f8  ldr x30, [sp], #0x10
0x05FEAAC4: c0035fd6  ret
0x05FEAAC8: 79584697  bl #0x3180cac

; RVA 0x5FEAACC | internal int <AddWeightedItems>b__20_0(WeightedItemSpawnable item1, WeightedItemSpawnable item2) { }
; bytes=36 sha256=6c0c44f71107fcf5fca28a4802199cb6c7c7b7fcdc638c0aa0c418a21b761667 status=arm64_complete_bound indexed_start=True
0x05FEAACC: fe0f1ff8  str x30, [sp, #-0x10]!
0x05FEAAD0: e20000b4  cbz x2, #0x5feaaec
0x05FEAAD4: c10000b4  cbz x1, #0x5feaaec
0x05FEAAD8: 482440b9  ldr w8, [x2, #0x24]
0x05FEAADC: 292440b9  ldr w9, [x1, #0x24]
0x05FEAAE0: 0001094b  sub w0, w8, w9
0x05FEAAE4: fe0741f8  ldr x30, [sp], #0x10
0x05FEAAE8: c0035fd6  ret
0x05FEAAEC: 70584697  bl #0x3180cac

; RVA 0x5FEAAF0 | internal int <AddWeightedItems>b__20_1(WeightedItemSpawnable item) { }
; bytes=24 sha256=ef813e7afbafe16d7c1e5377467c3711b750a9c9d2efc7b114ffc7e55707434a status=arm64_complete_bound indexed_start=True
0x05FEAAF0: fe0f1ff8  str x30, [sp, #-0x10]!
0x05FEAAF4: 810000b4  cbz x1, #0x5feab04
0x05FEAAF8: 202440b9  ldr w0, [x1, #0x24]
0x05FEAAFC: fe0741f8  ldr x30, [sp], #0x10
0x05FEAB00: c0035fd6  ret
0x05FEAB04: 6a584697  bl #0x3180cac

; RVA 0x5FEAB08 | internal WeightedItemSpawnable <AddWeightedItems>b__20_2(WeightedItemSpawnable item) { }
; bytes=8 sha256=50ddf39453988ba55a1b7d9bbba7f1ae7c5c5c3f7414c859acf17118fa4886b8 status=arm64_complete_bound indexed_start=True
0x05FEAB08: e00301aa  mov x0, x1
0x05FEAB0C: c0035fd6  ret

; RVA 0x5FEAB10 | internal IEnumerable<IMergeItem> <IsItemInQueue>b__22_0(Combination c) { }
; bytes=260 sha256=660e404716b29076fc8d304062d6fe2068085db28431c742838162602e9962db status=arm64_complete_bound indexed_start=True
0x05FEAB10: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x05FEAB14: f65701a9  stp x22, x21, [sp, #0x10]
0x05FEAB18: f44f02a9  stp x20, x19, [sp, #0x20]
0x05FEAB1C: d4e900b0  adrp x20, #0x7d23000
0x05FEAB20: 88be5839  ldrb w8, [x20, #0x62f]
0x05FEAB24: f30301aa  mov x19, x1
0x05FEAB28: e8010037  tbnz w8, #0, #0x5feab64
0x05FEAB2C: 00b700f0  adrp x0, #0x76cd000
0x05FEAB30: 008045f9  ldr x0, [x0, #0xb00]
0x05FEAB34: b9574697  bl #0x3180a18
0x05FEAB38: 00b700f0  adrp x0, #0x76cd000
0x05FEAB3C: 008445f9  ldr x0, [x0, #0xb08]
0x05FEAB40: b6574697  bl #0x3180a18
0x05FEAB44: 00b700f0  adrp x0, #0x76cd000
0x05FEAB48: 008845f9  ldr x0, [x0, #0xb10]
0x05FEAB4C: b3574697  bl #0x3180a18
0x05FEAB50: 00b700f0  adrp x0, #0x76cd000
0x05FEAB54: 009444f9  ldr x0, [x0, #0x928]
0x05FEAB58: b0574697  bl #0x3180a18
0x05FEAB5C: 28008052  movz w8, #0x1
0x05FEAB60: 88be1839  strb w8, [x20, #0x62f]
0x05FEAB64: 730500b4  cbz x19, #0x5feac10
0x05FEAB68: 16b700f0  adrp x22, #0x76cd000
0x05FEAB6C: d69644f9  ldr x22, [x22, #0x928]
0x05FEAB70: 731640f9  ldr x19, [x19, #0x28]
0x05FEAB74: c00240f9  ldr x0, [x22]
0x05FEAB78: 08e040b9  ldr w8, [x0, #0xe0]
0x05FEAB7C: 68000035  cbnz w8, #0x5feab88
0x05FEAB80: 03584697  bl #0x3180b8c
0x05FEAB84: c00240f9  ldr x0, [x22]
0x05FEAB88: 085c40f9  ldr x8, [x0, #0xb8]
0x05FEAB8C: 17b700f0  adrp x23, #0x76cd000
0x05FEAB90: 142d40f9  ldr x20, [x8, #0x58]
0x05FEAB94: f78245f9  ldr x23, [x23, #0xb00]
0x05FEAB98: f40200b5  cbnz x20, #0x5feabf4
0x05FEAB9C: 08e040b9  ldr w8, [x0, #0xe0]
0x05FEABA0: 68000035  cbnz w8, #0x5feabac
0x05FEABA4: fa574697  bl #0x3180b8c
0x05FEABA8: c00240f9  ldr x0, [x22]
0x05FEABAC: 09b700f0  adrp x9, #0x76cd000
0x05FEABB0: 085c40f9  ldr x8, [x0, #0xb8]
0x05FEABB4: 298545f9  ldr x9, [x9, #0xb08]
0x05FEABB8: 150140f9  ldr x21, [x8]
0x05FEABBC: 200140f9  ldr x0, [x9]
0x05FEABC0: 38584697  bl #0x3180ca0
0x05FEABC4: 08b700f0  adrp x8, #0x76cd000
0x05FEABC8: 088945f9  ldr x8, [x8, #0xb10]
0x05FEABCC: e10315aa  mov x1, x21
0x05FEABD0: e3031faa  mov x3, xzr
0x05FEABD4: f40300aa  mov x20, x0
0x05FEABD8: 020140f9  ldr x2, [x8]
0x05FEABDC: 77afc997  bl #0x52569b8
0x05FEABE0: c80240f9  ldr x8, [x22]
0x05FEABE4: e10314aa  mov x1, x20
0x05FEABE8: 005d40f9  ldr x0, [x8, #0xb8]
0x05FEABEC: 148c05f8  str x20, [x0, #0x58]!
0x05FEABF0: 75574697  bl #0x31809c4
0x05FEABF4: e20240f9  ldr x2, [x23]
0x05FEABF8: e00313aa  mov x0, x19
0x05FEABFC: e10314aa  mov x1, x20
0x05FEAC00: f44f42a9  ldp x20, x19, [sp, #0x20]
0x05FEAC04: f65741a9  ldp x22, x21, [sp, #0x10]
0x05FEAC08: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x05FEAC0C: a2977117  b #0x3c50a94
0x05FEAC10: 27584697  bl #0x3180cac

; RVA 0x5FEAC14 | internal IMergeItem <IsItemInQueue>b__22_4(WeightedItem p) { }
; bytes=36 sha256=f7f5238d35d5e34287bf2ddbac2e036a27815b0e334cde8dd1cefed6955f28c2 status=arm64_complete_bound indexed_start=True
0x05FEAC14: fe0f1ff8  str x30, [sp, #-0x10]!
0x05FEAC18: e10000b4  cbz x1, #0x5feac34
0x05FEAC1C: 200c40f9  ldr x0, [x1, #0x18]
0x05FEAC20: a00000b4  cbz x0, #0x5feac34
0x05FEAC24: 080040f9  ldr x8, [x0]
0x05FEAC28: 02855ea9  ldp x2, x1, [x8, #0x1e8]
0x05FEAC2C: fe0741f8  ldr x30, [sp], #0x10
0x05FEAC30: 40001fd6  br x2
0x05FEAC34: 1e584697  bl #0x3180cac

