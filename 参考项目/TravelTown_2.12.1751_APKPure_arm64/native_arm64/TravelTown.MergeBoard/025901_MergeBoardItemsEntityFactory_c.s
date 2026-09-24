; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25901 .MergeBoardItemsEntityFactory.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A97988 | private static void .cctor() { }
; bytes=104 sha256=bc420fb7a7370f6173ee0b470318b3a17e57ba004bc4c38816181d9cd9371ea0 status=arm64_complete_bound indexed_start=True
0x06A97988: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A9798C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A97990: 939400f0  adrp x19, #0x7d2a000
0x06A97994: d46400f0  adrp x20, #0x7732000
0x06A97998: 68566039  ldrb w8, [x19, #0x815]
0x06A9799C: 945e42f9  ldr x20, [x20, #0x4b8]
0x06A979A0: c8000037  tbnz w8, #0, #0x6a979b8
0x06A979A4: c06400f0  adrp x0, #0x7732000
0x06A979A8: 005c42f9  ldr x0, [x0, #0x4b8]
0x06A979AC: 1ba41b97  bl #0x3180a18
0x06A979B0: 28008052  movz w8, #0x1
0x06A979B4: 68562039  strb w8, [x19, #0x815]
0x06A979B8: 800240f9  ldr x0, [x20]
0x06A979BC: b9a41b97  bl #0x3180ca0
0x06A979C0: e1031faa  mov x1, xzr
0x06A979C4: f30300aa  mov x19, x0
0x06A979C8: 0d0bb197  bl #0x56da5fc
0x06A979CC: 880240f9  ldr x8, [x20]
0x06A979D0: e10313aa  mov x1, x19
0x06A979D4: 085d40f9  ldr x8, [x8, #0xb8]
0x06A979D8: 130100f9  str x19, [x8]
0x06A979DC: 880240f9  ldr x8, [x20]
0x06A979E0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A979E4: 005d40f9  ldr x0, [x8, #0xb8]
0x06A979E8: fe0742f8  ldr x30, [sp], #0x20
0x06A979EC: f6a31b17  b #0x31809c4

; RVA 0x6A979F0 | public void .ctor() { }
; bytes=8 sha256=5c7e4507632b77d27ff7f55d1b5549c5affdcfc084b69a170b62e2df70a03fc5 status=arm64_complete_bound indexed_start=True
0x06A979F0: e1031faa  mov x1, xzr
0x06A979F4: 020bb117  b #0x56da5fc

; RVA 0x6A979F8 | internal SplitComponent <CreateBoardItemEntity>b__11_5() { }
; bytes=8 sha256=ed86e0b2911b6a4e9edfa1a48e9544ba115299466a1992e2370619d8ce8e29fc status=arm64_complete_bound indexed_start=True
0x06A979F8: e0031faa  mov x0, xzr
0x06A979FC: c0035fd6  ret

; RVA 0x6A97A00 | internal IEnumerable<WeightedItem> <CreateProducerComponent>b__13_0(Combination interactionCostItem) { }
; bytes=24 sha256=3e93a8905329f4e260dacaea10f1f8ec9303ef1430fa35fc6a5b8fed48096e41 status=arm64_complete_bound indexed_start=True
0x06A97A00: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A97A04: 810000b4  cbz x1, #0x6a97a14
0x06A97A08: 201440f9  ldr x0, [x1, #0x28]
0x06A97A0C: fe0741f8  ldr x30, [sp], #0x10
0x06A97A10: c0035fd6  ret
0x06A97A14: a6a41b97  bl #0x3180cac

; RVA 0x6A97A18 | internal WeightedItemSpawnable <CreateProducerComponent>b__13_1(WeightedItem i) { }
; bytes=124 sha256=e5f0be529353d5375d4c9091c28f7574ae98d7f1701509930119ff7007f085b0 status=arm64_complete_bound indexed_start=True
0x06A97A18: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A97A1C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A97A20: 949400f0  adrp x20, #0x7d2a000
0x06A97A24: 355f00f0  adrp x21, #0x767e000
0x06A97A28: 885a6039  ldrb w8, [x20, #0x816]
0x06A97A2C: b5aa42f9  ldr x21, [x21, #0x550]
0x06A97A30: f30301aa  mov x19, x1
0x06A97A34: c8000037  tbnz w8, #0, #0x6a97a4c
0x06A97A38: 205f00f0  adrp x0, #0x767e000
0x06A97A3C: 00a842f9  ldr x0, [x0, #0x550]
0x06A97A40: f6a31b97  bl #0x3180a18
0x06A97A44: 28008052  movz w8, #0x1
0x06A97A48: 885a2039  strb w8, [x20, #0x816]
0x06A97A4C: a00240f9  ldr x0, [x21]
0x06A97A50: 94a41b97  bl #0x3180ca0
0x06A97A54: e1031faa  mov x1, xzr
0x06A97A58: f40300aa  mov x20, x0
0x06A97A5C: 0a48fe97  bl #0x6a29a84
0x06A97A60: 930100b4  cbz x19, #0x6a97a90
0x06A97A64: 740100b4  cbz x20, #0x6a97a90
0x06A97A68: 610e40f9  ldr x1, [x19, #0x18]
0x06A97A6C: e00314aa  mov x0, x20
0x06A97A70: 010c01f8  str x1, [x0, #0x10]!
0x06A97A74: d4a31b97  bl #0x31809c4
0x06A97A78: 681240b9  ldr w8, [x19, #0x10]
0x06A97A7C: e00314aa  mov x0, x20
0x06A97A80: 882600b9  str w8, [x20, #0x24]
0x06A97A84: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A97A88: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A97A8C: c0035fd6  ret
0x06A97A90: 87a41b97  bl #0x3180cac

; RVA 0x6A97A94 | internal IEnumerable<MergeItemWeakReference> <CreateInteractionComponent>b__21_0(Combination interactionCostItem) { }
; bytes=24 sha256=4288ef75fded669a3d764a136c76c5e31bef8226d1e0cdc5e19c278c18f76de8 status=arm64_complete_bound indexed_start=True
0x06A97A94: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A97A98: 810000b4  cbz x1, #0x6a97aa8
0x06A97A9C: 201040f9  ldr x0, [x1, #0x20]
0x06A97AA0: fe0741f8  ldr x30, [sp], #0x10
0x06A97AA4: c0035fd6  ret
0x06A97AA8: 81a41b97  bl #0x3180cac

; RVA 0x6A97AAC | internal ItemMultiple <CreateInteractionComponent>b__21_1(MergeItemWeakReference i) { }
; bytes=96 sha256=de24fab18f69c4cd63c28e3f83f7fd91578a5675d8545d7fd3096d8b54d224e7 status=arm64_complete_bound indexed_start=True
0x06A97AAC: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A97AB0: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A97AB4: 949400f0  adrp x20, #0x7d2a000
0x06A97AB8: b56100d0  adrp x21, #0x76cd000
0x06A97ABC: 885e6039  ldrb w8, [x20, #0x817]
0x06A97AC0: b5be45f9  ldr x21, [x21, #0xb78]
0x06A97AC4: f30301aa  mov x19, x1
0x06A97AC8: c8000037  tbnz w8, #0, #0x6a97ae0
0x06A97ACC: a06100d0  adrp x0, #0x76cd000
0x06A97AD0: 00bc45f9  ldr x0, [x0, #0xb78]
0x06A97AD4: d1a31b97  bl #0x3180a18
0x06A97AD8: 28008052  movz w8, #0x1
0x06A97ADC: 885e2039  strb w8, [x20, #0x817]
0x06A97AE0: a00240f9  ldr x0, [x21]
0x06A97AE4: 6fa41b97  bl #0x3180ca0
0x06A97AE8: 22008052  movz w2, #0x1
0x06A97AEC: e10313aa  mov x1, x19
0x06A97AF0: e3031faa  mov x3, xzr
0x06A97AF4: f40300aa  mov x20, x0
0x06A97AF8: 9048fe97  bl #0x6a29d38
0x06A97AFC: e00314aa  mov x0, x20
0x06A97B00: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A97B04: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A97B08: c0035fd6  ret

; RVA 0x6A97B0C | internal FixedPositionComponent <TryAddInteractionConstraint>b__26_0() { }
; bytes=8 sha256=ed86e0b2911b6a4e9edfa1a48e9544ba115299466a1992e2370619d8ce8e29fc status=arm64_complete_bound indexed_start=True
0x06A97B0C: e0031faa  mov x0, xzr
0x06A97B10: c0035fd6  ret

