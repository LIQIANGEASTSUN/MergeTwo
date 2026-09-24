; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 628 .InteractionUtil.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6278724 | private static void .cctor() { }
; bytes=104 sha256=7ba866523f0995b65a45f33413653a4020b6d578d12437d8aa6c6e81b311dde5 status=arm64_complete_bound indexed_start=True
0x06278724: fe0f1ef8  str x30, [sp, #-0x20]!
0x06278728: f44f01a9  stp x20, x19, [sp, #0x10]
0x0627872C: 73d500b0  adrp x19, #0x7d25000
0x06278730: 74a300d0  adrp x20, #0x76e6000
0x06278734: 68be5139  ldrb w8, [x19, #0x46f]
0x06278738: 94fe44f9  ldr x20, [x20, #0x9f8]
0x0627873C: c8000037  tbnz w8, #0, #0x6278754
0x06278740: 60a300d0  adrp x0, #0x76e6000
0x06278744: 00fc44f9  ldr x0, [x0, #0x9f8]
0x06278748: b4203c97  bl #0x3180a18
0x0627874C: 28008052  movz w8, #0x1
0x06278750: 68be1139  strb w8, [x19, #0x46f]
0x06278754: 800240f9  ldr x0, [x20]
0x06278758: 52213c97  bl #0x3180ca0
0x0627875C: e1031faa  mov x1, xzr
0x06278760: f30300aa  mov x19, x0
0x06278764: a687d197  bl #0x56da5fc
0x06278768: 880240f9  ldr x8, [x20]
0x0627876C: e10313aa  mov x1, x19
0x06278770: 085d40f9  ldr x8, [x8, #0xb8]
0x06278774: 130100f9  str x19, [x8]
0x06278778: 880240f9  ldr x8, [x20]
0x0627877C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06278780: 005d40f9  ldr x0, [x8, #0xb8]
0x06278784: fe0742f8  ldr x30, [sp], #0x20
0x06278788: 8f203c17  b #0x31809c4

; RVA 0x627878C | public void .ctor() { }
; bytes=8 sha256=7961e73bc1f48cda392c43ab393e29b4b918d38be165270291f28d20f3015c87 status=arm64_complete_bound indexed_start=True
0x0627878C: e1031faa  mov x1, xzr
0x06278790: 9b87d117  b #0x56da5fc

; RVA 0x6278794 | internal string <GetMissingItemsNames>b__0_1(ItemMultiple itemMultiple) { }
; bytes=196 sha256=dd76d5165b08e8e9f154edacc821e8945374b79538ecaae6019aa4cbdcc60981 status=arm64_complete_bound indexed_start=True
0x06278794: fe0f1ef8  str x30, [sp, #-0x20]!
0x06278798: f44f01a9  stp x20, x19, [sp, #0x10]
0x0627879C: 74d500b0  adrp x20, #0x7d25000
0x062787A0: 88c25139  ldrb w8, [x20, #0x470]
0x062787A4: f30301aa  mov x19, x1
0x062787A8: 28010037  tbnz w8, #0, #0x62787cc
0x062787AC: 40a00090  adrp x0, #0x7680000
0x062787B0: 004843f9  ldr x0, [x0, #0x690]
0x062787B4: 99203c97  bl #0x3180a18
0x062787B8: 00a000d0  adrp x0, #0x767a000
0x062787BC: 00f443f9  ldr x0, [x0, #0x7e8]
0x062787C0: 96203c97  bl #0x3180a18
0x062787C4: 28008052  movz w8, #0x1
0x062787C8: 88c21139  strb w8, [x20, #0x470]
0x062787CC: 530400b4  cbz x19, #0x6278854
0x062787D0: 08a000d0  adrp x8, #0x767a000
0x062787D4: 08f543f9  ldr x8, [x8, #0x7e8]
0x062787D8: e00313aa  mov x0, x19
0x062787DC: 010140f9  ldr x1, [x8]
0x062787E0: 8e66c497  bl #0x5392218
0x062787E4: 800300b4  cbz x0, #0x6278854
0x062787E8: 4aa00090  adrp x10, #0x7680000
0x062787EC: 080040f9  ldr x8, [x0]
0x062787F0: 4a4943f9  ldr x10, [x10, #0x690]
0x062787F4: f30300aa  mov x19, x0
0x062787F8: 095d4279  ldrh w9, [x8, #0x12e]
0x062787FC: 410140f9  ldr x1, [x10]
0x06278800: 290100b4  cbz x9, #0x6278824
0x06278804: 0a5940f9  ldr x10, [x8, #0xb0]
0x06278808: 4a210091  add x10, x10, #8
0x0627880C: 4b815ff8  ldur x11, [x10, #-8]
0x06278810: 7f0101eb  cmp x11, x1
0x06278814: 00010054  b.eq #0x6278834
0x06278818: 290500f1  subs x9, x9, #1
0x0627881C: 4a410091  add x10, x10, #0x10
0x06278820: 61ffff54  b.ne #0x627880c
0x06278824: e00313aa  mov x0, x19
0x06278828: e2031f2a  mov w2, wzr
0x0627882C: b9783b97  bl #0x3156b10
0x06278830: 04000014  b #0x6278840
0x06278834: 490180b9  ldrsw x9, [x10]
0x06278838: 0811098b  add x8, x8, x9, lsl #4
0x0627883C: 00e10491  add x0, x8, #0x138
0x06278840: 020440a9  ldp x2, x1, [x0]
0x06278844: e00313aa  mov x0, x19
0x06278848: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0627884C: fe0742f8  ldr x30, [sp], #0x20
0x06278850: 40001fd6  br x2
0x06278854: 16213c97  bl #0x3180cac

; RVA 0x6278858 | internal ItemMultiple <GetConsumedItems>b__1_1(ItemMultiple itemMultiple) { }
; bytes=8 sha256=50ddf39453988ba55a1b7d9bbba7f1ae7c5c5c3f7414c859acf17118fa4886b8 status=arm64_complete_bound indexed_start=True
0x06278858: e00301aa  mov x0, x1
0x0627885C: c0035fd6  ret

; RVA 0x6278860 | internal int <GetItemInteractionCount>b__2_0(ItemMultiple item) { }
; bytes=24 sha256=b36daead4ca2bcbcf27951145232f5f045f5d12c51921f4f43564ccf90ab3a91 status=arm64_complete_bound indexed_start=True
0x06278860: 810000b4  cbz x1, #0x6278870
0x06278864: e00301aa  mov x0, x1
0x06278868: e1031faa  mov x1, xzr
0x0627886C: a499f617  b #0x601eefc
0x06278870: fe0f1ff8  str x30, [sp, #-0x10]!
0x06278874: 0e213c97  bl #0x3180cac

; RVA 0x6278878 | internal bool <IsComboProducer>b__8_0(Combination r) { }
; bytes=84 sha256=92f24dadbe71568133093b908586b69d4931694902e87f338af2a657f22a7b5e status=arm64_complete_bound indexed_start=True
0x06278878: fe0f1ef8  str x30, [sp, #-0x20]!
0x0627887C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06278880: 74d500b0  adrp x20, #0x7d25000
0x06278884: 88c65139  ldrb w8, [x20, #0x471]
0x06278888: f30301aa  mov x19, x1
0x0627888C: c8000037  tbnz w8, #0, #0x62788a4
0x06278890: a0a200b0  adrp x0, #0x76cd000
0x06278894: 002445f9  ldr x0, [x0, #0xa48]
0x06278898: 60203c97  bl #0x3180a18
0x0627889C: 28008052  movz w8, #0x1
0x062788A0: 88c61139  strb w8, [x20, #0x471]
0x062788A4: 330100b4  cbz x19, #0x62788c8
0x062788A8: 681240f9  ldr x8, [x19, #0x20]
0x062788AC: e80000b4  cbz x8, #0x62788c8
0x062788B0: 081940b9  ldr w8, [x8, #0x18]
0x062788B4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x062788B8: 1f050071  cmp w8, #1
0x062788BC: e0d79f1a  cset w0, gt
0x062788C0: fe0742f8  ldr x30, [sp], #0x20
0x062788C4: c0035fd6  ret
0x062788C8: f9203c97  bl #0x3180cac

; RVA 0x62788CC | internal bool <IsAnyMode>b__9_0(Combination r) { }
; bytes=84 sha256=5f358ab8e4a0e7bcd517acc7056bc84df82acd9eccade9f6e059d58c648e8303 status=arm64_complete_bound indexed_start=True
0x062788CC: fe0f1ef8  str x30, [sp, #-0x20]!
0x062788D0: f44f01a9  stp x20, x19, [sp, #0x10]
0x062788D4: 74d500b0  adrp x20, #0x7d25000
0x062788D8: 88ca5139  ldrb w8, [x20, #0x472]
0x062788DC: f30301aa  mov x19, x1
0x062788E0: c8000037  tbnz w8, #0, #0x62788f8
0x062788E4: a0a200b0  adrp x0, #0x76cd000
0x062788E8: 002445f9  ldr x0, [x0, #0xa48]
0x062788EC: 4b203c97  bl #0x3180a18
0x062788F0: 28008052  movz w8, #0x1
0x062788F4: 88ca1139  strb w8, [x20, #0x472]
0x062788F8: 330100b4  cbz x19, #0x627891c
0x062788FC: 681240f9  ldr x8, [x19, #0x20]
0x06278900: e80000b4  cbz x8, #0x627891c
0x06278904: 081940b9  ldr w8, [x8, #0x18]
0x06278908: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0627890C: 1f050071  cmp w8, #1
0x06278910: e0179f1a  cset w0, eq
0x06278914: fe0742f8  ldr x30, [sp], #0x20
0x06278918: c0035fd6  ret
0x0627891C: e4203c97  bl #0x3180cac

