; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1106 MergeEngine.ECS.Components.Items.Producers.ProducerComponent
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6900318 | public string get_ProducedItemsLabel() { }
; bytes=8 sha256=e22509159eb9c3b897155eb8b2b6f0173dadac1f476c0f92d8d8f930abbe4347 status=arm64_complete_bound indexed_start=True
0x06900318: 004440f9  ldr x0, [x0, #0x88]
0x0690031C: c0035fd6  ret

; RVA 0x6900320 | public void .ctor(ProduceCapability capability, Entity entity) { }
; bytes=96 sha256=eba3b3f8df39bc6056a2336ec94f4f3f926dceb662306a2268a771c25e7efeb0 status=arm64_complete_bound indexed_start=True
0x06900320: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x06900324: f65701a9  stp x22, x21, [sp, #0x10]
0x06900328: f44f02a9  stp x20, x19, [sp, #0x20]
0x0690032C: 56a100b0  adrp x22, #0x7d29000
0x06900330: 377100d0  adrp x23, #0x7726000
0x06900334: c8926339  ldrb w8, [x22, #0x8e4]
0x06900338: f72644f9  ldr x23, [x23, #0x848]
0x0690033C: f30302aa  mov x19, x2
0x06900340: f40301aa  mov x20, x1
0x06900344: f50300aa  mov x21, x0
0x06900348: c8000037  tbnz w8, #0, #0x6900360
0x0690034C: 207100d0  adrp x0, #0x7726000
0x06900350: 002444f9  ldr x0, [x0, #0x848]
0x06900354: b1012297  bl #0x3180a18
0x06900358: 28008052  movz w8, #0x1
0x0690035C: c8922339  strb w8, [x22, #0x8e4]
0x06900360: e30240f9  ldr x3, [x23]
0x06900364: e00315aa  mov x0, x21
0x06900368: e10314aa  mov x1, x20
0x0690036C: e20313aa  mov x2, x19
0x06900370: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06900374: f65741a9  ldp x22, x21, [sp, #0x10]
0x06900378: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x0690037C: 714daa17  b #0x5393940

; RVA 0x6900380 | public void FillItemsQueue(List<Combination> feedingComponentCombinations) { }
; bytes=84 sha256=e898e08755ef8c1101717337ad28acdc319d6ff9c6971ae6eb23e52162bb2d8e status=arm64_complete_bound indexed_start=True
0x06900380: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06900384: f44f01a9  stp x20, x19, [sp, #0x10]
0x06900388: 55a100b0  adrp x21, #0x7d29000
0x0690038C: a8966339  ldrb w8, [x21, #0x8e5]
0x06900390: f30301aa  mov x19, x1
0x06900394: f40300aa  mov x20, x0
0x06900398: c8000037  tbnz w8, #0, #0x69003b0
0x0690039C: 80700090  adrp x0, #0x7710000
0x069003A0: 00a444f9  ldr x0, [x0, #0x948]
0x069003A4: 9d012297  bl #0x3180a18
0x069003A8: 28008052  movz w8, #0x1
0x069003AC: a8962339  strb w8, [x21, #0x8e5]
0x069003B0: 804240f9  ldr x0, [x20, #0x80]
0x069003B4: e00000b4  cbz x0, #0x69003d0
0x069003B8: e10313aa  mov x1, x19
0x069003BC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x069003C0: e2031f2a  mov w2, wzr
0x069003C4: e3031faa  mov x3, xzr
0x069003C8: fe57c2a8  ldp x30, x21, [sp], #0x20
0x069003CC: d8a3db17  b #0x5fe932c
0x069003D0: 37022297  bl #0x3180cac

; RVA 0x69003D4 | public void SetCombinations(List<Combination> feedingComponentCombinations) { }
; bytes=80 sha256=6addfc6e0e615f1708bd53b6dab92443bd480c4d2838cd22757cefe4181aaa21 status=arm64_complete_bound indexed_start=True
0x069003D4: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x069003D8: f44f01a9  stp x20, x19, [sp, #0x10]
0x069003DC: 55a100b0  adrp x21, #0x7d29000
0x069003E0: a89a6339  ldrb w8, [x21, #0x8e6]
0x069003E4: f30301aa  mov x19, x1
0x069003E8: f40300aa  mov x20, x0
0x069003EC: c8000037  tbnz w8, #0, #0x6900404
0x069003F0: 207100d0  adrp x0, #0x7726000
0x069003F4: 002844f9  ldr x0, [x0, #0x850]
0x069003F8: 88012297  bl #0x3180a18
0x069003FC: 28008052  movz w8, #0x1
0x06900400: a89a2339  strb w8, [x21, #0x8e6]
0x06900404: 801240f9  ldr x0, [x20, #0x20]
0x06900408: c00000b4  cbz x0, #0x6900420
0x0690040C: 138c06f8  str x19, [x0, #0x68]!
0x06900410: e10313aa  mov x1, x19
0x06900414: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06900418: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0690041C: 6a012217  b #0x31809c4
0x06900420: 23022297  bl #0x3180cac

; RVA 0x6900424 | public void FillItemsQueue(List<WeightedItemSpawnable> items) { }
; bytes=80 sha256=528f09558838f1ecaa1edf5b0f32d307c13f4a7d1c4064b87066f0cdaf888b3b status=arm64_complete_bound indexed_start=True
0x06900424: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06900428: f44f01a9  stp x20, x19, [sp, #0x10]
0x0690042C: 55a100b0  adrp x21, #0x7d29000
0x06900430: a89e6339  ldrb w8, [x21, #0x8e7]
0x06900434: f30301aa  mov x19, x1
0x06900438: f40300aa  mov x20, x0
0x0690043C: c8000037  tbnz w8, #0, #0x6900454
0x06900440: 80700090  adrp x0, #0x7710000
0x06900444: 00a444f9  ldr x0, [x0, #0x948]
0x06900448: 74012297  bl #0x3180a18
0x0690044C: 28008052  movz w8, #0x1
0x06900450: a89e2339  strb w8, [x21, #0x8e7]
0x06900454: 804240f9  ldr x0, [x20, #0x80]
0x06900458: c00000b4  cbz x0, #0x6900470
0x0690045C: e10313aa  mov x1, x19
0x06900460: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06900464: e2031faa  mov x2, xzr
0x06900468: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0690046C: f6a7db17  b #0x5fea444
0x06900470: 0f022297  bl #0x3180cac

