; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1452 .ItemsSpawningCapability.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6011444 | private static void .cctor() { }
; bytes=104 sha256=fda7ddcaf3a149fc2bb6eff0c8966cd6125de617f4d88b2a1d91f1cf8e812fe0 status=arm64_complete_bound indexed_start=True
0x06011444: fe0f1ef8  str x30, [sp, #-0x20]!
0x06011448: f44f01a9  stp x20, x19, [sp, #0x10]
0x0601144C: 93e800d0  adrp x19, #0x7d23000
0x06011450: f4b500d0  adrp x20, #0x76cf000
0x06011454: 68825f39  ldrb w8, [x19, #0x7e0]
0x06011458: 94a642f9  ldr x20, [x20, #0x548]
0x0601145C: c8000037  tbnz w8, #0, #0x6011474
0x06011460: e0b500d0  adrp x0, #0x76cf000
0x06011464: 00a442f9  ldr x0, [x0, #0x548]
0x06011468: 6cbd4597  bl #0x3180a18
0x0601146C: 28008052  movz w8, #0x1
0x06011470: 68821f39  strb w8, [x19, #0x7e0]
0x06011474: 800240f9  ldr x0, [x20]
0x06011478: 0abe4597  bl #0x3180ca0
0x0601147C: e1031faa  mov x1, xzr
0x06011480: f30300aa  mov x19, x0
0x06011484: 5e24db97  bl #0x56da5fc
0x06011488: 880240f9  ldr x8, [x20]
0x0601148C: e10313aa  mov x1, x19
0x06011490: 085d40f9  ldr x8, [x8, #0xb8]
0x06011494: 130100f9  str x19, [x8]
0x06011498: 880240f9  ldr x8, [x20]
0x0601149C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x060114A0: 005d40f9  ldr x0, [x8, #0xb8]
0x060114A4: fe0742f8  ldr x30, [sp], #0x20
0x060114A8: 47bd4517  b #0x31809c4

; RVA 0x60114AC | public void .ctor() { }
; bytes=8 sha256=5747acc11a64d8908087a90c9933f77dadcb4522cad9e8832d347dddda0bf704 status=arm64_complete_bound indexed_start=True
0x060114AC: e1031faa  mov x1, xzr
0x060114B0: 5324db17  b #0x56da5fc

; RVA 0x60114B4 | internal IMergeItem <GetSpawningList>b__13_0(ConsumedItemToProducedItemMapping linkedItem) { }
; bytes=36 sha256=5f0adf5562a0da453b6f55f1eb95a23a3ec63b14395a9e575dbf1ecbfde1abc7 status=arm64_complete_bound indexed_start=True
0x060114B4: fe0f1ff8  str x30, [sp, #-0x10]!
0x060114B8: e10000b4  cbz x1, #0x60114d4
0x060114BC: 200c40f9  ldr x0, [x1, #0x18]
0x060114C0: a00000b4  cbz x0, #0x60114d4
0x060114C4: 080040f9  ldr x8, [x0]
0x060114C8: 02855ea9  ldp x2, x1, [x8, #0x1e8]
0x060114CC: fe0741f8  ldr x30, [sp], #0x10
0x060114D0: 40001fd6  br x2
0x060114D4: f6bd4597  bl #0x3180cac

; RVA 0x60114D8 | internal IEnumerable<IMergeItem> <GetSpawningList>b__13_1(Combination c) { }
; bytes=260 sha256=af1d6e39f7f4ebb7c9e4448c35e6f8c50b5e348701826109cb07863c519b71b2 status=arm64_complete_bound indexed_start=True
0x060114D8: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x060114DC: f65701a9  stp x22, x21, [sp, #0x10]
0x060114E0: f44f02a9  stp x20, x19, [sp, #0x20]
0x060114E4: 94e800d0  adrp x20, #0x7d23000
0x060114E8: 88865f39  ldrb w8, [x20, #0x7e1]
0x060114EC: f30301aa  mov x19, x1
0x060114F0: e8010037  tbnz w8, #0, #0x601152c
0x060114F4: e0b50090  adrp x0, #0x76cd000
0x060114F8: 008045f9  ldr x0, [x0, #0xb00]
0x060114FC: 47bd4597  bl #0x3180a18
0x06011500: e0b50090  adrp x0, #0x76cd000
0x06011504: 008445f9  ldr x0, [x0, #0xb08]
0x06011508: 44bd4597  bl #0x3180a18
0x0601150C: e0b500d0  adrp x0, #0x76cf000
0x06011510: 00f842f9  ldr x0, [x0, #0x5f0]
0x06011514: 41bd4597  bl #0x3180a18
0x06011518: e0b500d0  adrp x0, #0x76cf000
0x0601151C: 00a442f9  ldr x0, [x0, #0x548]
0x06011520: 3ebd4597  bl #0x3180a18
0x06011524: 28008052  movz w8, #0x1
0x06011528: 88861f39  strb w8, [x20, #0x7e1]
0x0601152C: 730500b4  cbz x19, #0x60115d8
0x06011530: f6b500d0  adrp x22, #0x76cf000
0x06011534: d6a642f9  ldr x22, [x22, #0x548]
0x06011538: 731640f9  ldr x19, [x19, #0x28]
0x0601153C: c00240f9  ldr x0, [x22]
0x06011540: 08e040b9  ldr w8, [x0, #0xe0]
0x06011544: 68000035  cbnz w8, #0x6011550
0x06011548: 91bd4597  bl #0x3180b8c
0x0601154C: c00240f9  ldr x0, [x22]
0x06011550: 085c40f9  ldr x8, [x0, #0xb8]
0x06011554: f7b50090  adrp x23, #0x76cd000
0x06011558: 140940f9  ldr x20, [x8, #0x10]
0x0601155C: f78245f9  ldr x23, [x23, #0xb00]
0x06011560: f40200b5  cbnz x20, #0x60115bc
0x06011564: 08e040b9  ldr w8, [x0, #0xe0]
0x06011568: 68000035  cbnz w8, #0x6011574
0x0601156C: 88bd4597  bl #0x3180b8c
0x06011570: c00240f9  ldr x0, [x22]
0x06011574: e9b50090  adrp x9, #0x76cd000
0x06011578: 085c40f9  ldr x8, [x0, #0xb8]
0x0601157C: 298545f9  ldr x9, [x9, #0xb08]
0x06011580: 150140f9  ldr x21, [x8]
0x06011584: 200140f9  ldr x0, [x9]
0x06011588: c6bd4597  bl #0x3180ca0
0x0601158C: e8b500d0  adrp x8, #0x76cf000
0x06011590: 08f942f9  ldr x8, [x8, #0x5f0]
0x06011594: e10315aa  mov x1, x21
0x06011598: e3031faa  mov x3, xzr
0x0601159C: f40300aa  mov x20, x0
0x060115A0: 020140f9  ldr x2, [x8]
0x060115A4: 0515c997  bl #0x52569b8
0x060115A8: c80240f9  ldr x8, [x22]
0x060115AC: e10314aa  mov x1, x20
0x060115B0: 005d40f9  ldr x0, [x8, #0xb8]
0x060115B4: 140c01f8  str x20, [x0, #0x10]!
0x060115B8: 03bd4597  bl #0x31809c4
0x060115BC: e20240f9  ldr x2, [x23]
0x060115C0: e00313aa  mov x0, x19
0x060115C4: e10314aa  mov x1, x20
0x060115C8: f44f42a9  ldp x20, x19, [sp, #0x20]
0x060115CC: f65741a9  ldp x22, x21, [sp, #0x10]
0x060115D0: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x060115D4: 30fd7017  b #0x3c50a94
0x060115D8: b5bd4597  bl #0x3180cac

; RVA 0x60115DC | internal IMergeItem <GetSpawningList>b__13_6(WeightedItem p) { }
; bytes=36 sha256=dd74409f6e3fecedc06269a18e5eebba236546aad3d425a5015f0314ef476409 status=arm64_complete_bound indexed_start=True
0x060115DC: fe0f1ff8  str x30, [sp, #-0x10]!
0x060115E0: e10000b4  cbz x1, #0x60115fc
0x060115E4: 200c40f9  ldr x0, [x1, #0x18]
0x060115E8: a00000b4  cbz x0, #0x60115fc
0x060115EC: 080040f9  ldr x8, [x0]
0x060115F0: 02855ea9  ldp x2, x1, [x8, #0x1e8]
0x060115F4: fe0741f8  ldr x30, [sp], #0x10
0x060115F8: 40001fd6  br x2
0x060115FC: acbd4597  bl #0x3180cac

; RVA 0x6011600 | internal IMergeItem <GetSpawningList>b__13_2(WeightedItemSpawnable weightedItem) { }
; bytes=36 sha256=70d30e48c153404e39497f56b5da06135a1d72f55e790a2088d650450b2aa1c8 status=arm64_complete_bound indexed_start=True
0x06011600: fe0f1ff8  str x30, [sp, #-0x10]!
0x06011604: e10000b4  cbz x1, #0x6011620
0x06011608: 200840f9  ldr x0, [x1, #0x10]
0x0601160C: a00000b4  cbz x0, #0x6011620
0x06011610: 080040f9  ldr x8, [x0]
0x06011614: 02855ea9  ldp x2, x1, [x8, #0x1e8]
0x06011618: fe0741f8  ldr x30, [sp], #0x10
0x0601161C: 40001fd6  br x2
0x06011620: a3bd4597  bl #0x3180cac

; RVA 0x6011624 | internal IMergeItem <GetSpawningList>b__13_3(FixedItemSpawnable fixedItem) { }
; bytes=36 sha256=69db64e1aaf96df5530b747d173ad29c8a4c4a5df0cfd50360c68de0e6bd956e status=arm64_complete_bound indexed_start=True
0x06011624: fe0f1ff8  str x30, [sp, #-0x10]!
0x06011628: e10000b4  cbz x1, #0x6011644
0x0601162C: 200840f9  ldr x0, [x1, #0x10]
0x06011630: a00000b4  cbz x0, #0x6011644
0x06011634: 080040f9  ldr x8, [x0]
0x06011638: 02855ea9  ldp x2, x1, [x8, #0x1e8]
0x0601163C: fe0741f8  ldr x30, [sp], #0x10
0x06011640: 40001fd6  br x2
0x06011644: 9abd4597  bl #0x3180cac

; RVA 0x6011648 | internal IMergeItem <GetSpawningList>b__13_4(WeightedItemSpawnable weightedItem) { }
; bytes=36 sha256=1ec251ab0ff86640157e6d255df51893c59c08203ee156ff1ff79443ec442e6d status=arm64_complete_bound indexed_start=True
0x06011648: fe0f1ff8  str x30, [sp, #-0x10]!
0x0601164C: e10000b4  cbz x1, #0x6011668
0x06011650: 200840f9  ldr x0, [x1, #0x10]
0x06011654: a00000b4  cbz x0, #0x6011668
0x06011658: 080040f9  ldr x8, [x0]
0x0601165C: 02855ea9  ldp x2, x1, [x8, #0x1e8]
0x06011660: fe0741f8  ldr x30, [sp], #0x10
0x06011664: 40001fd6  br x2
0x06011668: 91bd4597  bl #0x3180cac

; RVA 0x601166C | internal IMergeItem <GetSpawningList>b__13_5(FixedItemSpawnable fixedItem) { }
; bytes=36 sha256=d557cb3d86a85c670226b34719a5752dfa6484cdeb3f1c46108f7eadc4b0954e status=arm64_complete_bound indexed_start=True
0x0601166C: fe0f1ff8  str x30, [sp, #-0x10]!
0x06011670: e10000b4  cbz x1, #0x601168c
0x06011674: 200840f9  ldr x0, [x1, #0x10]
0x06011678: a00000b4  cbz x0, #0x601168c
0x0601167C: 080040f9  ldr x8, [x0]
0x06011680: 02855ea9  ldp x2, x1, [x8, #0x1e8]
0x06011684: fe0741f8  ldr x30, [sp], #0x10
0x06011688: 40001fd6  br x2
0x0601168C: 88bd4597  bl #0x3180cac

; RVA 0x6011690 | internal KeyValuePair<IMergeItem, int> <GetItemPoolWithSpawnCounts>b__15_0(FixedItemSpawnable fixedItem) { }
; bytes=128 sha256=225e0b46729875f16c13224986ee385d004fec81a94a40876b715898107ca1e3 status=arm64_complete_bound indexed_start=True
0x06011690: ffc300d1  sub sp, sp, #0x30
0x06011694: fe0b00f9  str x30, [sp, #0x10]
0x06011698: f44f02a9  stp x20, x19, [sp, #0x20]
0x0601169C: 94e800d0  adrp x20, #0x7d23000
0x060116A0: 888a5f39  ldrb w8, [x20, #0x7e2]
0x060116A4: f30301aa  mov x19, x1
0x060116A8: c8000037  tbnz w8, #0, #0x60116c0
0x060116AC: e0b500d0  adrp x0, #0x76cf000
0x060116B0: 00fc42f9  ldr x0, [x0, #0x5f8]
0x060116B4: d9bc4597  bl #0x3180a18
0x060116B8: 28008052  movz w8, #0x1
0x060116BC: 888a1f39  strb w8, [x20, #0x7e2]
0x060116C0: 730200b4  cbz x19, #0x601170c
0x060116C4: 600a40f9  ldr x0, [x19, #0x10]
0x060116C8: 200200b4  cbz x0, #0x601170c
0x060116CC: 080040f9  ldr x8, [x0]
0x060116D0: f4b500d0  adrp x20, #0x76cf000
0x060116D4: 09855ea9  ldp x9, x1, [x8, #0x1e8]
0x060116D8: 94fe42f9  ldr x20, [x20, #0x5f8]
0x060116DC: 20013fd6  blr x9
0x060116E0: 622640b9  ldr w2, [x19, #0x24]
0x060116E4: 830240f9  ldr x3, [x20]
0x060116E8: e10300aa  mov x1, x0
0x060116EC: e0030091  mov x0, sp
0x060116F0: ff7f00a9  stp xzr, xzr, [sp]
0x060116F4: 9130cf97  bl #0x53dd938
0x060116F8: e00740a9  ldp x0, x1, [sp]
0x060116FC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06011700: fe0b40f9  ldr x30, [sp, #0x10]
0x06011704: ffc30091  add sp, sp, #0x30
0x06011708: c0035fd6  ret
0x0601170C: 68bd4597  bl #0x3180cac

; RVA 0x6011710 | internal int <GetItemPoolWithSpawnCounts>b__15_1(WeightedItemSpawnable item) { }
; bytes=24 sha256=aa07f43ea22941bf3922872d8f9034a87669b38a67040aeaf658f44c9bbcb54d status=arm64_complete_bound indexed_start=True
0x06011710: fe0f1ff8  str x30, [sp, #-0x10]!
0x06011714: 810000b4  cbz x1, #0x6011724
0x06011718: 202440b9  ldr w0, [x1, #0x24]
0x0601171C: fe0741f8  ldr x30, [sp], #0x10
0x06011720: c0035fd6  ret
0x06011724: 62bd4597  bl #0x3180cac

; RVA 0x6011728 | internal KeyValuePair<IMergeItem, int> <GetItemPoolWithSpawnCounts>b__15_2(WeightedItemSpawnable weightedItem) { }
; bytes=128 sha256=bee5fb638e85527b2c421d3967845d813e184cdff610a3a51c97d902272dc419 status=arm64_complete_bound indexed_start=True
0x06011728: ffc300d1  sub sp, sp, #0x30
0x0601172C: fe0b00f9  str x30, [sp, #0x10]
0x06011730: f44f02a9  stp x20, x19, [sp, #0x20]
0x06011734: 94e800d0  adrp x20, #0x7d23000
0x06011738: 888e5f39  ldrb w8, [x20, #0x7e3]
0x0601173C: f30301aa  mov x19, x1
0x06011740: c8000037  tbnz w8, #0, #0x6011758
0x06011744: e0b500d0  adrp x0, #0x76cf000
0x06011748: 00fc42f9  ldr x0, [x0, #0x5f8]
0x0601174C: b3bc4597  bl #0x3180a18
0x06011750: 28008052  movz w8, #0x1
0x06011754: 888e1f39  strb w8, [x20, #0x7e3]
0x06011758: 730200b4  cbz x19, #0x60117a4
0x0601175C: 600a40f9  ldr x0, [x19, #0x10]
0x06011760: 200200b4  cbz x0, #0x60117a4
0x06011764: 080040f9  ldr x8, [x0]
0x06011768: f4b500d0  adrp x20, #0x76cf000
0x0601176C: 09855ea9  ldp x9, x1, [x8, #0x1e8]
0x06011770: 94fe42f9  ldr x20, [x20, #0x5f8]
0x06011774: 20013fd6  blr x9
0x06011778: 622640b9  ldr w2, [x19, #0x24]
0x0601177C: 830240f9  ldr x3, [x20]
0x06011780: e10300aa  mov x1, x0
0x06011784: e0030091  mov x0, sp
0x06011788: ff7f00a9  stp xzr, xzr, [sp]
0x0601178C: 6b30cf97  bl #0x53dd938
0x06011790: e00740a9  ldp x0, x1, [sp]
0x06011794: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06011798: fe0b40f9  ldr x30, [sp, #0x10]
0x0601179C: ffc30091  add sp, sp, #0x30
0x060117A0: c0035fd6  ret
0x060117A4: 42bd4597  bl #0x3180cac

