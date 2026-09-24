; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25708 Merger.MergeBoard.View.Items.MergeBoardItemBehavioursHandler
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A44698 | public Dictionary<string, BehaviourPrefabData> get_CombinedBehaviourConfig() { }
; bytes=112 sha256=bdf64cf17d67c805a6f6304ceec13f0e18c5367829aedfdb0c55bd8b80580af0 status=arm64_complete_bound indexed_start=True
0x06A44698: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A4469C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A446A0: 349700d0  adrp x20, #0x7d2a000
0x06A446A4: 88565539  ldrb w8, [x20, #0x555]
0x06A446A8: f30300aa  mov x19, x0
0x06A446AC: c8000037  tbnz w8, #0, #0x6a446c4
0x06A446B0: 406700f0  adrp x0, #0x772f000
0x06A446B4: 002445f9  ldr x0, [x0, #0xa48]
0x06A446B8: d8f01c97  bl #0x3180a18
0x06A446BC: 28008052  movz w8, #0x1
0x06A446C0: 88561539  strb w8, [x20, #0x555]
0x06A446C4: f40313aa  mov x20, x19
0x06A446C8: 950e44f8  ldr x21, [x20, #0x40]!
0x06A446CC: 550100b5  cbnz x21, #0x6a446f4
0x06A446D0: 601640f9  ldr x0, [x19, #0x28]
0x06A446D4: 800100b4  cbz x0, #0x6a44704
0x06A446D8: 611a40f9  ldr x1, [x19, #0x30]
0x06A446DC: 23aeff97  bl #0x6a2ff68
0x06A446E0: f50300aa  mov x21, x0
0x06A446E4: 602200f9  str x0, [x19, #0x40]
0x06A446E8: e00314aa  mov x0, x20
0x06A446EC: e10315aa  mov x1, x21
0x06A446F0: b5f01c97  bl #0x31809c4
0x06A446F4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A446F8: e00315aa  mov x0, x21
0x06A446FC: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A44700: c0035fd6  ret
0x06A44704: 6af11c97  bl #0x3180cac

; RVA 0x6A44708 | public string get_BehavioursPoolIdStringFormat() { }
; bytes=72 sha256=3db9368efd08c26c0b906f9c64eeb69e2ada7dc8ce6a017991166fdea52575f3 status=arm64_complete_bound indexed_start=True
0x06A44708: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A4470C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A44710: 349700d0  adrp x20, #0x7d2a000
0x06A44714: 885a5539  ldrb w8, [x20, #0x556]
0x06A44718: f30300aa  mov x19, x0
0x06A4471C: c8000037  tbnz w8, #0, #0x6a44734
0x06A44720: 406700f0  adrp x0, #0x772f000
0x06A44724: 002445f9  ldr x0, [x0, #0xa48]
0x06A44728: bcf01c97  bl #0x3180a18
0x06A4472C: 28008052  movz w8, #0x1
0x06A44730: 885a1539  strb w8, [x20, #0x556]
0x06A44734: 681640f9  ldr x8, [x19, #0x28]
0x06A44738: a80000b4  cbz x8, #0x6a4474c
0x06A4473C: 004940f9  ldr x0, [x8, #0x90]
0x06A44740: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A44744: fe0742f8  ldr x30, [sp], #0x20
0x06A44748: c0035fd6  ret
0x06A4474C: 58f11c97  bl #0x3180cac

; RVA 0x6A44750 | public void AttachBehaviours(IBoardItemView boardItem) { }
; bytes=176 sha256=f2f0749e3f05dd0e2ff010e228915134a3de06bd769af9ba88bb4223b0e2616e status=arm64_complete_bound indexed_start=True
0x06A44750: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A44754: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A44758: 359700d0  adrp x21, #0x7d2a000
0x06A4475C: a85e5539  ldrb w8, [x21, #0x557]
0x06A44760: f40301aa  mov x20, x1
0x06A44764: f30300aa  mov x19, x0
0x06A44768: 28010037  tbnz w8, #0, #0x6a4478c
0x06A4476C: 006500d0  adrp x0, #0x76e6000
0x06A44770: 00e446f9  ldr x0, [x0, #0xdc8]
0x06A44774: a9f01c97  bl #0x3180a18
0x06A44778: 406700f0  adrp x0, #0x772f000
0x06A4477C: 002445f9  ldr x0, [x0, #0xa48]
0x06A44780: a6f01c97  bl #0x3180a18
0x06A44784: 28008052  movz w8, #0x1
0x06A44788: a85e1539  strb w8, [x21, #0x557]
0x06A4478C: f40100b4  cbz x20, #0x6a447c8
0x06A44790: 086500d0  adrp x8, #0x76e6000
0x06A44794: 08e546f9  ldr x8, [x8, #0xdc8]
0x06A44798: 890240f9  ldr x9, [x20]
0x06A4479C: 080140f9  ldr x8, [x8]
0x06A447A0: 2bc14439  ldrb w11, [x9, #0x130]
0x06A447A4: 0ac14439  ldrb w10, [x8, #0x130]
0x06A447A8: 7f010a6b  cmp w11, w10
0x06A447AC: e3000054  b.lo #0x6a447c8
0x06A447B0: 296540f9  ldr x9, [x9, #0xc8]
0x06A447B4: 290d0a8b  add x9, x9, x10, lsl #3
0x06A447B8: 29815ff8  ldur x9, [x9, #-8]
0x06A447BC: 3f0108eb  cmp x9, x8
0x06A447C0: 94029f9a  csel x20, x20, xzr, eq
0x06A447C4: 80000054  b.eq #0x6a447d4
0x06A447C8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A447CC: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A447D0: c0035fd6  ret
0x06A447D4: 601640f9  ldr x0, [x19, #0x28]
0x06A447D8: 200100b4  cbz x0, #0x6a447fc
0x06A447DC: e10314aa  mov x1, x20
0x06A447E0: 40afff97  bl #0x6a304e0
0x06A447E4: 681640f9  ldr x8, [x19, #0x28]
0x06A447E8: a80000b4  cbz x8, #0x6a447fc
0x06A447EC: e10314aa  mov x1, x20
0x06A447F0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A447F4: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A447F8: 19b1ff17  b #0x6a30c5c
0x06A447FC: 2cf11c97  bl #0x3180cac

; RVA 0x6A44800 | public void InitializeBehaviourPools() { }
; bytes=340 sha256=77a63ff2981f4cc99442ff934173530601d96c81f6dd7c7750656bdc754843b2 status=arm64_complete_bound indexed_start=True
0x06A44800: fe0f1df8  str x30, [sp, #-0x30]!
0x06A44804: f65701a9  stp x22, x21, [sp, #0x10]
0x06A44808: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A4480C: 349700d0  adrp x20, #0x7d2a000
0x06A44810: 566000d0  adrp x22, #0x764e000
0x06A44814: 88625539  ldrb w8, [x20, #0x558]
0x06A44818: d67242f9  ldr x22, [x22, #0x4e0]
0x06A4481C: f30300aa  mov x19, x0
0x06A44820: 48020037  tbnz w8, #0, #0x6a44868
0x06A44824: 406700f0  adrp x0, #0x772f000
0x06A44828: 002845f9  ldr x0, [x0, #0xa50]
0x06A4482C: 7bf01c97  bl #0x3180a18
0x06A44830: 406000f0  adrp x0, #0x764f000
0x06A44834: 000446f9  ldr x0, [x0, #0xc08]
0x06A44838: 78f01c97  bl #0x3180a18
0x06A4483C: 406000d0  adrp x0, #0x764e000
0x06A44840: 007042f9  ldr x0, [x0, #0x4e0]
0x06A44844: 75f01c97  bl #0x3180a18
0x06A44848: 406700f0  adrp x0, #0x772f000
0x06A4484C: 002445f9  ldr x0, [x0, #0xa48]
0x06A44850: 72f01c97  bl #0x3180a18
0x06A44854: 206600b0  adrp x0, #0x7709000
0x06A44858: 005842f9  ldr x0, [x0, #0x4b0]
0x06A4485C: 6ff01c97  bl #0x3180a18
0x06A44860: 28008052  movz w8, #0x1
0x06A44864: 88621539  strb w8, [x20, #0x558]
0x06A44868: f40313aa  mov x20, x19
0x06A4486C: 958e43f8  ldr x21, [x20, #0x38]!
0x06A44870: c00240f9  ldr x0, [x22]
0x06A44874: 08e040b9  ldr w8, [x0, #0xe0]
0x06A44878: 48000035  cbnz w8, #0x6a44880
0x06A4487C: c4f01c97  bl #0x3180b8c
0x06A44880: e00315aa  mov x0, x21
0x06A44884: e1031faa  mov x1, xzr
0x06A44888: e2031faa  mov x2, xzr
0x06A4488C: 186f1294  bl #0x6ee04ec
0x06A44890: e0030036  tbz w0, #0, #0x6a4490c
0x06A44894: 486000f0  adrp x8, #0x764f000
0x06A44898: 080546f9  ldr x8, [x8, #0xc08]
0x06A4489C: 356600b0  adrp x21, #0x7709000
0x06A448A0: 000140f9  ldr x0, [x8]
0x06A448A4: b55a42f9  ldr x21, [x21, #0x4b0]
0x06A448A8: fef01c97  bl #0x3180ca0
0x06A448AC: a10240f9  ldr x1, [x21]
0x06A448B0: e2031faa  mov x2, xzr
0x06A448B4: f50300aa  mov x21, x0
0x06A448B8: 976b1294  bl #0x6edf714
0x06A448BC: b50400b4  cbz x21, #0x6a44950
0x06A448C0: e00315aa  mov x0, x21
0x06A448C4: e1031faa  mov x1, xzr
0x06A448C8: 1a6a1294  bl #0x6edf130
0x06A448CC: f60300aa  mov x22, x0
0x06A448D0: e00313aa  mov x0, x19
0x06A448D4: e1031faa  mov x1, xzr
0x06A448D8: 6f5d1294  bl #0x6edbe94
0x06A448DC: b60300b4  cbz x22, #0x6a44950
0x06A448E0: e10300aa  mov x1, x0
0x06A448E4: e00316aa  mov x0, x22
0x06A448E8: e2031faa  mov x2, xzr
0x06A448EC: 0c9b1294  bl #0x6eeb51c
0x06A448F0: e00315aa  mov x0, x21
0x06A448F4: e1031faa  mov x1, xzr
0x06A448F8: 0e6a1294  bl #0x6edf130
0x06A448FC: e10300aa  mov x1, x0
0x06A44900: 800200f9  str x0, [x20]
0x06A44904: e00314aa  mov x0, x20
0x06A44908: 2ff01c97  bl #0x31809c4
0x06A4490C: 741640f9  ldr x20, [x19, #0x28]
0x06A44910: 751e40f9  ldr x21, [x19, #0x38]
0x06A44914: e00313aa  mov x0, x19
0x06A44918: 60ffff97  bl #0x6a44698
0x06A4491C: a00100b4  cbz x0, #0x6a44950
0x06A44920: 486700f0  adrp x8, #0x772f000
0x06A44924: 082945f9  ldr x8, [x8, #0xa50]
0x06A44928: 010140f9  ldr x1, [x8]
0x06A4492C: a0789297  bl #0x4ee2bac
0x06A44930: 140100b4  cbz x20, #0x6a44950
0x06A44934: e20300aa  mov x2, x0
0x06A44938: e00314aa  mov x0, x20
0x06A4493C: e10315aa  mov x1, x21
0x06A44940: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A44944: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A44948: fe0743f8  ldr x30, [sp], #0x30
0x06A4494C: 64acff17  b #0x6a2fadc
0x06A44950: d7f01c97  bl #0x3180cac

; RVA 0x6A44954 | public void .ctor() { }
; bytes=72 sha256=1494558a7d795f36c36f182dea2dacd8659024c430213a47ce3d23515c40e783 status=arm64_complete_bound indexed_start=True
0x06A44954: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A44958: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A4495C: 349700d0  adrp x20, #0x7d2a000
0x06A44960: 556700f0  adrp x21, #0x772f000
0x06A44964: 88665539  ldrb w8, [x20, #0x559]
0x06A44968: b52e45f9  ldr x21, [x21, #0xa58]
0x06A4496C: f30300aa  mov x19, x0
0x06A44970: c8000037  tbnz w8, #0, #0x6a44988
0x06A44974: 406700f0  adrp x0, #0x772f000
0x06A44978: 002c45f9  ldr x0, [x0, #0xa58]
0x06A4497C: 27f01c97  bl #0x3180a18
0x06A44980: 28008052  movz w8, #0x1
0x06A44984: 88661539  strb w8, [x20, #0x559]
0x06A44988: a10240f9  ldr x1, [x21]
0x06A4498C: e00313aa  mov x0, x19
0x06A44990: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A44994: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A44998: f9b47b17  b #0x4931d7c

