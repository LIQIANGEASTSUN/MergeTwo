; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 611 .HintUtil.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x627659C | private static void .cctor() { }
; bytes=104 sha256=5863297f9c28899fd2478ae234f5f135d0c1d703a1c79b901caf46e600632232 status=arm64_complete_bound indexed_start=True
0x0627659C: fe0f1ef8  str x30, [sp, #-0x20]!
0x062765A0: f44f01a9  stp x20, x19, [sp, #0x10]
0x062765A4: 73d500f0  adrp x19, #0x7d25000
0x062765A8: 94a30090  adrp x20, #0x76e6000
0x062765AC: 68125139  ldrb w8, [x19, #0x444]
0x062765B0: 94a643f9  ldr x20, [x20, #0x748]
0x062765B4: c8000037  tbnz w8, #0, #0x62765cc
0x062765B8: 80a30090  adrp x0, #0x76e6000
0x062765BC: 00a443f9  ldr x0, [x0, #0x748]
0x062765C0: 16293c97  bl #0x3180a18
0x062765C4: 28008052  movz w8, #0x1
0x062765C8: 68121139  strb w8, [x19, #0x444]
0x062765CC: 800240f9  ldr x0, [x20]
0x062765D0: b4293c97  bl #0x3180ca0
0x062765D4: e1031faa  mov x1, xzr
0x062765D8: f30300aa  mov x19, x0
0x062765DC: 0890d197  bl #0x56da5fc
0x062765E0: 880240f9  ldr x8, [x20]
0x062765E4: e10313aa  mov x1, x19
0x062765E8: 085d40f9  ldr x8, [x8, #0xb8]
0x062765EC: 130100f9  str x19, [x8]
0x062765F0: 880240f9  ldr x8, [x20]
0x062765F4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x062765F8: 005d40f9  ldr x0, [x8, #0xb8]
0x062765FC: fe0742f8  ldr x30, [sp], #0x20
0x06276600: f1283c17  b #0x31809c4

; RVA 0x6276604 | public void .ctor() { }
; bytes=8 sha256=6a353414d968eb78cbb59d1bdae9bc0ad8c1807667fabb1e580ce8b755808d58 status=arm64_complete_bound indexed_start=True
0x06276604: e1031faa  mov x1, xzr
0x06276608: fd8fd117  b #0x56da5fc

; RVA 0x627660C | internal IdComponent <GetHint>b__0_0(PositionComponent position) { }
; bytes=80 sha256=85e07ded542bc7ea4fe1de51bddea990d6c4a2aa05ff500bd18155d1cfee5b93 status=arm64_complete_bound indexed_start=True
0x0627660C: fe0f1ef8  str x30, [sp, #-0x20]!
0x06276610: f44f01a9  stp x20, x19, [sp, #0x10]
0x06276614: 74d500f0  adrp x20, #0x7d25000
0x06276618: 88165139  ldrb w8, [x20, #0x445]
0x0627661C: f30301aa  mov x19, x1
0x06276620: c8000037  tbnz w8, #0, #0x6276638
0x06276624: 20a000b0  adrp x0, #0x767b000
0x06276628: 00cc47f9  ldr x0, [x0, #0xf98]
0x0627662C: fb283c97  bl #0x3180a18
0x06276630: 28008052  movz w8, #0x1
0x06276634: 88161139  strb w8, [x20, #0x445]
0x06276638: 130100b4  cbz x19, #0x6276658
0x0627663C: 28a000b0  adrp x8, #0x767b000
0x06276640: 08cd47f9  ldr x8, [x8, #0xf98]
0x06276644: e00313aa  mov x0, x19
0x06276648: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0627664C: 010140f9  ldr x1, [x8]
0x06276650: fe0742f8  ldr x30, [sp], #0x20
0x06276654: 72dc6517  b #0x3bed81c
0x06276658: 95293c97  bl #0x3180cac

; RVA 0x627665C | internal bool <GetHint>b__0_2(IdComponent id) { }
; bytes=100 sha256=bb86f0a5f7772010c31a1b87835376824047859465e595071dee7d2d6fd824b3 status=arm64_complete_bound indexed_start=True
0x0627665C: fe0f1ef8  str x30, [sp, #-0x20]!
0x06276660: f44f01a9  stp x20, x19, [sp, #0x10]
0x06276664: 74d500f0  adrp x20, #0x7d25000
0x06276668: 881a5139  ldrb w8, [x20, #0x446]
0x0627666C: f30301aa  mov x19, x1
0x06276670: c8000037  tbnz w8, #0, #0x6276688
0x06276674: 40a00090  adrp x0, #0x767e000
0x06276678: 001c43f9  ldr x0, [x0, #0x638]
0x0627667C: e7283c97  bl #0x3180a18
0x06276680: 28008052  movz w8, #0x1
0x06276684: 881a1139  strb w8, [x20, #0x446]
0x06276688: b30100b4  cbz x19, #0x62766bc
0x0627668C: 48a00090  adrp x8, #0x767e000
0x06276690: 081d43f9  ldr x8, [x8, #0x638]
0x06276694: e00313aa  mov x0, x19
0x06276698: 010140f9  ldr x1, [x8]
0x0627669C: 60dc6597  bl #0x3bed81c
0x062766A0: e00000b4  cbz x0, #0x62766bc
0x062766A4: 08c04039  ldrb w8, [x0, #0x30]
0x062766A8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x062766AC: 1f010071  cmp w8, #0
0x062766B0: e0179f1a  cset w0, eq
0x062766B4: fe0742f8  ldr x30, [sp], #0x20
0x062766B8: c0035fd6  ret
0x062766BC: 7c293c97  bl #0x3180cac

; RVA 0x62766C0 | internal bool <GetHint>b__0_4(IdComponent id) { }
; bytes=92 sha256=74b50120e059a6f057b2ae2968c1c8b885be1a0a7ab6026e0d062d13524d8e62 status=arm64_complete_bound indexed_start=True
0x062766C0: fe0f1ef8  str x30, [sp, #-0x20]!
0x062766C4: f44f01a9  stp x20, x19, [sp, #0x10]
0x062766C8: 74d500f0  adrp x20, #0x7d25000
0x062766CC: 881e5139  ldrb w8, [x20, #0x447]
0x062766D0: f30301aa  mov x19, x1
0x062766D4: c8000037  tbnz w8, #0, #0x62766ec
0x062766D8: 80a30090  adrp x0, #0x76e6000
0x062766DC: 006044f9  ldr x0, [x0, #0x8c0]
0x062766E0: ce283c97  bl #0x3180a18
0x062766E4: 28008052  movz w8, #0x1
0x062766E8: 881e1139  strb w8, [x20, #0x447]
0x062766EC: 730100b4  cbz x19, #0x6276718
0x062766F0: 88a30090  adrp x8, #0x76e6000
0x062766F4: 086144f9  ldr x8, [x8, #0x8c0]
0x062766F8: e00313aa  mov x0, x19
0x062766FC: 010140f9  ldr x1, [x8]
0x06276700: 47dc6597  bl #0x3bed81c
0x06276704: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06276708: 1f0000f1  cmp x0, #0
0x0627670C: e0179f1a  cset w0, eq
0x06276710: fe0742f8  ldr x30, [sp], #0x20
0x06276714: c0035fd6  ret
0x06276718: 65293c97  bl #0x3180cac

; RVA 0x627671C | internal string <GetHint>b__0_6(IdComponent idComponent) { }
; bytes=24 sha256=5edf3f9251566071b2fe9e4044f8a48b1935ab9ec7bdae3191ae67c21b8d0d09 status=arm64_complete_bound indexed_start=True
0x0627671C: fe0f1ff8  str x30, [sp, #-0x10]!
0x06276720: 810000b4  cbz x1, #0x6276730
0x06276724: 201840f9  ldr x0, [x1, #0x30]
0x06276728: fe0741f8  ldr x30, [sp], #0x10
0x0627672C: c0035fd6  ret
0x06276730: 5f293c97  bl #0x3180cac

; RVA 0x6276734 | internal ItemMultiple <TryFindConsumeHint>b__1_4(ItemMultiple item) { }
; bytes=8 sha256=50ddf39453988ba55a1b7d9bbba7f1ae7c5c5c3f7414c859acf17118fa4886b8 status=arm64_complete_bound indexed_start=True
0x06276734: e00301aa  mov x0, x1
0x06276738: c0035fd6  ret

; RVA 0x627673C | internal IdComponent <TryFindStackableHint>b__2_2(PositionComponent pos) { }
; bytes=80 sha256=652c95f40a22b62e4ca26b30125e8c6b41186414df3f428f1b0195224b178c45 status=arm64_complete_bound indexed_start=True
0x0627673C: fe0f1ef8  str x30, [sp, #-0x20]!
0x06276740: f44f01a9  stp x20, x19, [sp, #0x10]
0x06276744: 74d500f0  adrp x20, #0x7d25000
0x06276748: 88225139  ldrb w8, [x20, #0x448]
0x0627674C: f30301aa  mov x19, x1
0x06276750: c8000037  tbnz w8, #0, #0x6276768
0x06276754: 20a000b0  adrp x0, #0x767b000
0x06276758: 00cc47f9  ldr x0, [x0, #0xf98]
0x0627675C: af283c97  bl #0x3180a18
0x06276760: 28008052  movz w8, #0x1
0x06276764: 88221139  strb w8, [x20, #0x448]
0x06276768: 130100b4  cbz x19, #0x6276788
0x0627676C: 28a000b0  adrp x8, #0x767b000
0x06276770: 08cd47f9  ldr x8, [x8, #0xf98]
0x06276774: e00313aa  mov x0, x19
0x06276778: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0627677C: 010140f9  ldr x1, [x8]
0x06276780: fe0742f8  ldr x30, [sp], #0x20
0x06276784: 26dc6517  b #0x3bed81c
0x06276788: 49293c97  bl #0x3180cac

; RVA 0x627678C | internal bool <TryFindPrioritizedStackingHint>b__4_0(IMergeItem item) { }
; bytes=12 sha256=ce2107ea26bda5e6530619bfaefacf436d10ca3300542336b9df2040c0ef65dc status=arm64_complete_bound indexed_start=True
0x0627678C: e00301aa  mov x0, x1
0x06276790: e1031faa  mov x1, xzr
0x06276794: 8c9c1e14  b #0x6a1d9c4

; RVA 0x6276798 | internal bool <TryFindPrioritizedStackingHint>b__4_1(IMergeItem item) { }
; bytes=12 sha256=41171615a15eb15ccf1f70e3764876479a8429b11d8246171298e0169cf7a835 status=arm64_complete_bound indexed_start=True
0x06276798: e00301aa  mov x0, x1
0x0627679C: e1031faa  mov x1, xzr
0x062767A0: 5c9c1e14  b #0x6a1d910

; RVA 0x62767A4 | internal bool <TryFindMergeAnyHint>b__5_0(PositionComponent position) { }
; bytes=124 sha256=ba28335ddd8917a063df4eed07176ee63cad37a686ec468db0b48148aa005a04 status=arm64_complete_bound indexed_start=True
0x062767A4: fe0f1ef8  str x30, [sp, #-0x20]!
0x062767A8: f44f01a9  stp x20, x19, [sp, #0x10]
0x062767AC: 74d500f0  adrp x20, #0x7d25000
0x062767B0: 88265139  ldrb w8, [x20, #0x449]
0x062767B4: f30301aa  mov x19, x1
0x062767B8: c8000037  tbnz w8, #0, #0x62767d0
0x062767BC: 80a30090  adrp x0, #0x76e6000
0x062767C0: 004444f9  ldr x0, [x0, #0x888]
0x062767C4: 95283c97  bl #0x3180a18
0x062767C8: 28008052  movz w8, #0x1
0x062767CC: 88261139  strb w8, [x20, #0x449]
0x062767D0: 730200b4  cbz x19, #0x627681c
0x062767D4: 88a30090  adrp x8, #0x76e6000
0x062767D8: 084544f9  ldr x8, [x8, #0x888]
0x062767DC: e00313aa  mov x0, x19
0x062767E0: 010140f9  ldr x1, [x8]
0x062767E4: 0edc6597  bl #0x3bed81c
0x062767E8: 000100b4  cbz x0, #0x6276808
0x062767EC: 082840b9  ldr w8, [x0, #0x28]
0x062767F0: 1f050071  cmp w8, #1
0x062767F4: a1000054  b.ne #0x6276808
0x062767F8: e00313aa  mov x0, x19
0x062767FC: d4eaff97  bl #0x627134c
0x06276800: 08000052  eor w8, w0, #1
0x06276804: 02000014  b #0x627680c
0x06276808: e8031f2a  mov w8, wzr
0x0627680C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06276810: 00010012  and w0, w8, #1
0x06276814: fe0742f8  ldr x30, [sp], #0x20
0x06276818: c0035fd6  ret
0x0627681C: 24293c97  bl #0x3180cac

; RVA 0x6276820 | internal MergeComponent <TryFindMergeAnyHint>b__5_1(PositionComponent position) { }
; bytes=80 sha256=15d3f86c151d50858314e86e0278674e03176200f6fb4c310c582a310284bb01 status=arm64_complete_bound indexed_start=True
0x06276820: fe0f1ef8  str x30, [sp, #-0x20]!
0x06276824: f44f01a9  stp x20, x19, [sp, #0x10]
0x06276828: 74d500f0  adrp x20, #0x7d25000
0x0627682C: 882a5139  ldrb w8, [x20, #0x44a]
0x06276830: f30301aa  mov x19, x1
0x06276834: c8000037  tbnz w8, #0, #0x627684c
0x06276838: 80a30090  adrp x0, #0x76e6000
0x0627683C: 004444f9  ldr x0, [x0, #0x888]
0x06276840: 76283c97  bl #0x3180a18
0x06276844: 28008052  movz w8, #0x1
0x06276848: 882a1139  strb w8, [x20, #0x44a]
0x0627684C: 130100b4  cbz x19, #0x627686c
0x06276850: 88a30090  adrp x8, #0x76e6000
0x06276854: 084544f9  ldr x8, [x8, #0x888]
0x06276858: e00313aa  mov x0, x19
0x0627685C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06276860: 010140f9  ldr x1, [x8]
0x06276864: fe0742f8  ldr x30, [sp], #0x20
0x06276868: eddb6517  b #0x3bed81c
0x0627686C: 10293c97  bl #0x3180cac

; RVA 0x6276870 | internal MergeComponent <TryFindMergeAnyHint>b__5_3(PositionComponent position) { }
; bytes=80 sha256=0a682c1b84c5e76de62ce15b26dfc237dafaa8514aded2594cbbf8c91d195fb3 status=arm64_complete_bound indexed_start=True
0x06276870: fe0f1ef8  str x30, [sp, #-0x20]!
0x06276874: f44f01a9  stp x20, x19, [sp, #0x10]
0x06276878: 74d500f0  adrp x20, #0x7d25000
0x0627687C: 882e5139  ldrb w8, [x20, #0x44b]
0x06276880: f30301aa  mov x19, x1
0x06276884: c8000037  tbnz w8, #0, #0x627689c
0x06276888: 80a30090  adrp x0, #0x76e6000
0x0627688C: 004444f9  ldr x0, [x0, #0x888]
0x06276890: 62283c97  bl #0x3180a18
0x06276894: 28008052  movz w8, #0x1
0x06276898: 882e1139  strb w8, [x20, #0x44b]
0x0627689C: 130100b4  cbz x19, #0x62768bc
0x062768A0: 88a30090  adrp x8, #0x76e6000
0x062768A4: 084544f9  ldr x8, [x8, #0x888]
0x062768A8: e00313aa  mov x0, x19
0x062768AC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x062768B0: 010140f9  ldr x1, [x8]
0x062768B4: fe0742f8  ldr x30, [sp], #0x20
0x062768B8: d9db6517  b #0x3bed81c
0x062768BC: fc283c97  bl #0x3180cac

; RVA 0x62768C0 | internal IdComponent <GetCollectable>b__7_0(PositionComponent position) { }
; bytes=80 sha256=a77f3ae3a771d82ff1b85b527a405c16a2057e7b41c5208314f1f5fe1603f3a3 status=arm64_complete_bound indexed_start=True
0x062768C0: fe0f1ef8  str x30, [sp, #-0x20]!
0x062768C4: f44f01a9  stp x20, x19, [sp, #0x10]
0x062768C8: 74d500f0  adrp x20, #0x7d25000
0x062768CC: 88325139  ldrb w8, [x20, #0x44c]
0x062768D0: f30301aa  mov x19, x1
0x062768D4: c8000037  tbnz w8, #0, #0x62768ec
0x062768D8: 20a000b0  adrp x0, #0x767b000
0x062768DC: 00cc47f9  ldr x0, [x0, #0xf98]
0x062768E0: 4e283c97  bl #0x3180a18
0x062768E4: 28008052  movz w8, #0x1
0x062768E8: 88321139  strb w8, [x20, #0x44c]
0x062768EC: 130100b4  cbz x19, #0x627690c
0x062768F0: 28a000b0  adrp x8, #0x767b000
0x062768F4: 08cd47f9  ldr x8, [x8, #0xf98]
0x062768F8: e00313aa  mov x0, x19
0x062768FC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06276900: 010140f9  ldr x1, [x8]
0x06276904: fe0742f8  ldr x30, [sp], #0x20
0x06276908: c5db6517  b #0x3bed81c
0x0627690C: e8283c97  bl #0x3180cac

; RVA 0x6276910 | internal bool <GetCollectable>b__7_2(IdComponent item) { }
; bytes=52 sha256=4f795b193e1f66741dbb47970ff4b45624e2d0674220e50e799306d288469b18 status=arm64_complete_bound indexed_start=True
0x06276910: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x06276914: e00301aa  mov x0, x1
0x06276918: f30301aa  mov x19, x1
0x0627691C: 82f8ff97  bl #0x6274b24
0x06276920: a0000036  tbz w0, #0, #0x6276934
0x06276924: e00313aa  mov x0, x19
0x06276928: 68f8ff97  bl #0x6274ac8
0x0627692C: 08000052  eor w8, w0, #1
0x06276930: 02000014  b #0x6276938
0x06276934: e8031f2a  mov w8, wzr
0x06276938: 00010012  and w0, w8, #1
0x0627693C: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x06276940: c0035fd6  ret

; RVA 0x6276944 | internal IdComponent <GetLowestLevelBasicItem>b__10_0(PositionComponent position) { }
; bytes=80 sha256=eb3fbb3db72a898ce7b70fd3d3e858ed72436278cef27ae0f34554b8fb195121 status=arm64_complete_bound indexed_start=True
0x06276944: fe0f1ef8  str x30, [sp, #-0x20]!
0x06276948: f44f01a9  stp x20, x19, [sp, #0x10]
0x0627694C: 74d500f0  adrp x20, #0x7d25000
0x06276950: 88365139  ldrb w8, [x20, #0x44d]
0x06276954: f30301aa  mov x19, x1
0x06276958: c8000037  tbnz w8, #0, #0x6276970
0x0627695C: 20a000b0  adrp x0, #0x767b000
0x06276960: 00cc47f9  ldr x0, [x0, #0xf98]
0x06276964: 2d283c97  bl #0x3180a18
0x06276968: 28008052  movz w8, #0x1
0x0627696C: 88361139  strb w8, [x20, #0x44d]
0x06276970: 130100b4  cbz x19, #0x6276990
0x06276974: 28a000b0  adrp x8, #0x767b000
0x06276978: 08cd47f9  ldr x8, [x8, #0xf98]
0x0627697C: e00313aa  mov x0, x19
0x06276980: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06276984: 010140f9  ldr x1, [x8]
0x06276988: fe0742f8  ldr x30, [sp], #0x20
0x0627698C: a4db6517  b #0x3bed81c
0x06276990: c7283c97  bl #0x3180cac

; RVA 0x6276994 | internal bool <GetLowestLevelBasicItem>b__10_1(IdComponent item) { }
; bytes=220 sha256=cc92fc357f02131b9c6c6e02df50334d870166c7e94b06b019d4149e47f13397 status=arm64_complete_bound indexed_start=True
0x06276994: fe0f1ef8  str x30, [sp, #-0x20]!
0x06276998: f44f01a9  stp x20, x19, [sp, #0x10]
0x0627699C: 74d500f0  adrp x20, #0x7d25000
0x062769A0: 883a5139  ldrb w8, [x20, #0x44e]
0x062769A4: f30301aa  mov x19, x1
0x062769A8: e8010037  tbnz w8, #0, #0x62769e4
0x062769AC: 80a30090  adrp x0, #0x76e6000
0x062769B0: 006044f9  ldr x0, [x0, #0x8c0]
0x062769B4: 19283c97  bl #0x3180a18
0x062769B8: 80a30090  adrp x0, #0x76e6000
0x062769BC: 008042f9  ldr x0, [x0, #0x500]
0x062769C0: 16283c97  bl #0x3180a18
0x062769C4: 40a000d0  adrp x0, #0x7680000
0x062769C8: 001442f9  ldr x0, [x0, #0x428]
0x062769CC: 13283c97  bl #0x3180a18
0x062769D0: 80a30090  adrp x0, #0x76e6000
0x062769D4: 00dc44f9  ldr x0, [x0, #0x9b8]
0x062769D8: 10283c97  bl #0x3180a18
0x062769DC: 28008052  movz w8, #0x1
0x062769E0: 883a1139  strb w8, [x20, #0x44e]
0x062769E4: e00313aa  mov x0, x19
0x062769E8: 38f8ff97  bl #0x6274ac8
0x062769EC: 80020037  tbnz w0, #0, #0x6276a3c
0x062769F0: f30300b4  cbz x19, #0x6276a6c
0x062769F4: 48a000d0  adrp x8, #0x7680000
0x062769F8: 081542f9  ldr x8, [x8, #0x428]
0x062769FC: e00313aa  mov x0, x19
0x06276A00: 010140f9  ldr x1, [x8]
0x06276A04: 86db6597  bl #0x3bed81c
0x06276A08: a00100b5  cbnz x0, #0x6276a3c
0x06276A0C: 88a30090  adrp x8, #0x76e6000
0x06276A10: 08dd44f9  ldr x8, [x8, #0x9b8]
0x06276A14: e00313aa  mov x0, x19
0x06276A18: 010140f9  ldr x1, [x8]
0x06276A1C: 80db6597  bl #0x3bed81c
0x06276A20: e00000b5  cbnz x0, #0x6276a3c
0x06276A24: 88a30090  adrp x8, #0x76e6000
0x06276A28: 086144f9  ldr x8, [x8, #0x8c0]
0x06276A2C: e00313aa  mov x0, x19
0x06276A30: 010140f9  ldr x1, [x8]
0x06276A34: 7adb6597  bl #0x3bed81c
0x06276A38: a00000b4  cbz x0, #0x6276a4c
0x06276A3C: e0031f2a  mov w0, wzr
0x06276A40: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06276A44: fe0742f8  ldr x30, [sp], #0x20
0x06276A48: c0035fd6  ret
0x06276A4C: 88a30090  adrp x8, #0x76e6000
0x06276A50: 088142f9  ldr x8, [x8, #0x500]
0x06276A54: e00313aa  mov x0, x19
0x06276A58: 010140f9  ldr x1, [x8]
0x06276A5C: 70db6597  bl #0x3bed81c
0x06276A60: 1f0000f1  cmp x0, #0
0x06276A64: e0179f1a  cset w0, eq
0x06276A68: f6ffff17  b #0x6276a40
0x06276A6C: 90283c97  bl #0x3180cac

; RVA 0x6276A70 | internal bool <CountFeeds>b__13_0(PositionComponent item) { }
; bytes=184 sha256=3b4f7faff7438d83780bffceb75a6889af6b82ef1ff13bad32208a5f793c4925 status=arm64_complete_bound indexed_start=True
0x06276A70: fe0f1ef8  str x30, [sp, #-0x20]!
0x06276A74: f44f01a9  stp x20, x19, [sp, #0x10]
0x06276A78: 74d500f0  adrp x20, #0x7d25000
0x06276A7C: 883e5139  ldrb w8, [x20, #0x44f]
0x06276A80: f30301aa  mov x19, x1
0x06276A84: 28010037  tbnz w8, #0, #0x6276aa8
0x06276A88: 80a30090  adrp x0, #0x76e6000
0x06276A8C: 00b043f9  ldr x0, [x0, #0x760]
0x06276A90: e2273c97  bl #0x3180a18
0x06276A94: 00a300b0  adrp x0, #0x76d7000
0x06276A98: 00c442f9  ldr x0, [x0, #0x588]
0x06276A9C: df273c97  bl #0x3180a18
0x06276AA0: 28008052  movz w8, #0x1
0x06276AA4: 883e1139  strb w8, [x20, #0x44f]
0x06276AA8: f30300b4  cbz x19, #0x6276b24
0x06276AAC: 14a300b0  adrp x20, #0x76d7000
0x06276AB0: 94c642f9  ldr x20, [x20, #0x588]
0x06276AB4: e00313aa  mov x0, x19
0x06276AB8: 810240f9  ldr x1, [x20]
0x06276ABC: 58db6597  bl #0x3bed81c
0x06276AC0: 200300b4  cbz x0, #0x6276b24
0x06276AC4: 08204139  ldrb w8, [x0, #0x48]
0x06276AC8: 68020034  cbz w8, #0x6276b14
0x06276ACC: 810240f9  ldr x1, [x20]
0x06276AD0: e00313aa  mov x0, x19
0x06276AD4: 52db6597  bl #0x3bed81c
0x06276AD8: 600200b4  cbz x0, #0x6276b24
0x06276ADC: 08404139  ldrb w8, [x0, #0x50]
0x06276AE0: a8010034  cbz w8, #0x6276b14
0x06276AE4: 88a30090  adrp x8, #0x76e6000
0x06276AE8: 08b143f9  ldr x8, [x8, #0x760]
0x06276AEC: e00313aa  mov x0, x19
0x06276AF0: 010140f9  ldr x1, [x8]
0x06276AF4: 4adb6597  bl #0x3bed81c
0x06276AF8: 600100b4  cbz x0, #0x6276b24
0x06276AFC: 082c40f9  ldr x8, [x0, #0x58]
0x06276B00: 280100b4  cbz x8, #0x6276b24
0x06276B04: 081940b9  ldr w8, [x8, #0x18]
0x06276B08: 1f010071  cmp w8, #0
0x06276B0C: e0079f1a  cset w0, ne
0x06276B10: 02000014  b #0x6276b18
0x06276B14: e0031f2a  mov w0, wzr
0x06276B18: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06276B1C: fe0742f8  ldr x30, [sp], #0x20
0x06276B20: c0035fd6  ret
0x06276B24: 62283c97  bl #0x3180cac

; RVA 0x6276B28 | internal MergeComponent <CountMergeTiles>b__14_0(PositionComponent position) { }
; bytes=80 sha256=50cb4bc892157021cd771bff7abfddd98245719e530cee5131fb445c71ef3316 status=arm64_complete_bound indexed_start=True
0x06276B28: fe0f1ef8  str x30, [sp, #-0x20]!
0x06276B2C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06276B30: 74d500f0  adrp x20, #0x7d25000
0x06276B34: 88425139  ldrb w8, [x20, #0x450]
0x06276B38: f30301aa  mov x19, x1
0x06276B3C: c8000037  tbnz w8, #0, #0x6276b54
0x06276B40: 80a30090  adrp x0, #0x76e6000
0x06276B44: 004444f9  ldr x0, [x0, #0x888]
0x06276B48: b4273c97  bl #0x3180a18
0x06276B4C: 28008052  movz w8, #0x1
0x06276B50: 88421139  strb w8, [x20, #0x450]
0x06276B54: 130100b4  cbz x19, #0x6276b74
0x06276B58: 88a30090  adrp x8, #0x76e6000
0x06276B5C: 084544f9  ldr x8, [x8, #0x888]
0x06276B60: e00313aa  mov x0, x19
0x06276B64: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06276B68: 010140f9  ldr x1, [x8]
0x06276B6C: fe0742f8  ldr x30, [sp], #0x20
0x06276B70: 2bdb6517  b #0x3bed81c
0x06276B74: 4e283c97  bl #0x3180cac

; RVA 0x6276B78 | internal string <CountMergeTiles>b__14_2(MergeComponent mergeComponent) { }
; bytes=92 sha256=5f41bbab6199ec0abe45bb1b125b69c641ed3ed8ff995b94a1b5ae88c7650957 status=arm64_complete_bound indexed_start=True
0x06276B78: fe0f1ef8  str x30, [sp, #-0x20]!
0x06276B7C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06276B80: 74d500f0  adrp x20, #0x7d25000
0x06276B84: 88465139  ldrb w8, [x20, #0x451]
0x06276B88: f30301aa  mov x19, x1
0x06276B8C: c8000037  tbnz w8, #0, #0x6276ba4
0x06276B90: 20a000b0  adrp x0, #0x767b000
0x06276B94: 00cc47f9  ldr x0, [x0, #0xf98]
0x06276B98: a0273c97  bl #0x3180a18
0x06276B9C: 28008052  movz w8, #0x1
0x06276BA0: 88461139  strb w8, [x20, #0x451]
0x06276BA4: 730100b4  cbz x19, #0x6276bd0
0x06276BA8: 28a000b0  adrp x8, #0x767b000
0x06276BAC: 08cd47f9  ldr x8, [x8, #0xf98]
0x06276BB0: e00313aa  mov x0, x19
0x06276BB4: 010140f9  ldr x1, [x8]
0x06276BB8: 19db6597  bl #0x3bed81c
0x06276BBC: a00000b4  cbz x0, #0x6276bd0
0x06276BC0: 001840f9  ldr x0, [x0, #0x30]
0x06276BC4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06276BC8: fe0742f8  ldr x30, [sp], #0x20
0x06276BCC: c0035fd6  ret
0x06276BD0: 37283c97  bl #0x3180cac

; RVA 0x6276BD4 | internal bool <CountMergeTiles>b__14_3(MergeComponent item) { }
; bytes=8 sha256=7d0a08cf0f35b3079d46f45a00a1c1df729c30c1a46bdfd505f44e9b709262d8 status=arm64_complete_bound indexed_start=True
0x06276BD4: e00301aa  mov x0, x1
0x06276BD8: 56e9ff17  b #0x6271130

; RVA 0x6276BDC | internal bool <CountJokerMergeTiles>b__15_0(PositionComponent position) { }
; bytes=124 sha256=0af612c30c01fdaafa1c11aac063a13b7fa55aa549c463c16c831933f0164e4c status=arm64_complete_bound indexed_start=True
0x06276BDC: fe0f1ef8  str x30, [sp, #-0x20]!
0x06276BE0: f44f01a9  stp x20, x19, [sp, #0x10]
0x06276BE4: 74d500f0  adrp x20, #0x7d25000
0x06276BE8: 884a5139  ldrb w8, [x20, #0x452]
0x06276BEC: f30301aa  mov x19, x1
0x06276BF0: c8000037  tbnz w8, #0, #0x6276c08
0x06276BF4: 80a30090  adrp x0, #0x76e6000
0x06276BF8: 004444f9  ldr x0, [x0, #0x888]
0x06276BFC: 87273c97  bl #0x3180a18
0x06276C00: 28008052  movz w8, #0x1
0x06276C04: 884a1139  strb w8, [x20, #0x452]
0x06276C08: 730200b4  cbz x19, #0x6276c54
0x06276C0C: 88a30090  adrp x8, #0x76e6000
0x06276C10: 084544f9  ldr x8, [x8, #0x888]
0x06276C14: e00313aa  mov x0, x19
0x06276C18: 010140f9  ldr x1, [x8]
0x06276C1C: 00db6597  bl #0x3bed81c
0x06276C20: 000100b4  cbz x0, #0x6276c40
0x06276C24: 082840b9  ldr w8, [x0, #0x28]
0x06276C28: 1f050071  cmp w8, #1
0x06276C2C: a1000054  b.ne #0x6276c40
0x06276C30: e00313aa  mov x0, x19
0x06276C34: c6e9ff97  bl #0x627134c
0x06276C38: 08000052  eor w8, w0, #1
0x06276C3C: 02000014  b #0x6276c44
0x06276C40: e8031f2a  mov w8, wzr
0x06276C44: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06276C48: 00010012  and w0, w8, #1
0x06276C4C: fe0742f8  ldr x30, [sp], #0x20
0x06276C50: c0035fd6  ret
0x06276C54: 16283c97  bl #0x3180cac

; RVA 0x6276C58 | internal bool <CountCollectables>b__16_0(PositionComponent item) { }
; bytes=124 sha256=2a3a29a8903749a6ce220ebab4106f833fa97496c0080b2c5433670d25f729e5 status=arm64_complete_bound indexed_start=True
0x06276C58: fe0f1ef8  str x30, [sp, #-0x20]!
0x06276C5C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06276C60: 74d500f0  adrp x20, #0x7d25000
0x06276C64: 884e5139  ldrb w8, [x20, #0x453]
0x06276C68: f30301aa  mov x19, x1
0x06276C6C: c8000037  tbnz w8, #0, #0x6276c84
0x06276C70: 20a000b0  adrp x0, #0x767b000
0x06276C74: 00cc47f9  ldr x0, [x0, #0xf98]
0x06276C78: 68273c97  bl #0x3180a18
0x06276C7C: 28008052  movz w8, #0x1
0x06276C80: 884e1139  strb w8, [x20, #0x453]
0x06276C84: 730200b4  cbz x19, #0x6276cd0
0x06276C88: 34a000b0  adrp x20, #0x767b000
0x06276C8C: 94ce47f9  ldr x20, [x20, #0xf98]
0x06276C90: e00313aa  mov x0, x19
0x06276C94: 810240f9  ldr x1, [x20]
0x06276C98: e1da6597  bl #0x3bed81c
0x06276C9C: a2f7ff97  bl #0x6274b24
0x06276CA0: e0000036  tbz w0, #0, #0x6276cbc
0x06276CA4: 810240f9  ldr x1, [x20]
0x06276CA8: e00313aa  mov x0, x19
0x06276CAC: dcda6597  bl #0x3bed81c
0x06276CB0: 86f7ff97  bl #0x6274ac8
0x06276CB4: 08000052  eor w8, w0, #1
0x06276CB8: 02000014  b #0x6276cc0
0x06276CBC: e8031f2a  mov w8, wzr
0x06276CC0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06276CC4: 00010012  and w0, w8, #1
0x06276CC8: fe0742f8  ldr x30, [sp], #0x20
0x06276CCC: c0035fd6  ret
0x06276CD0: f7273c97  bl #0x3180cac

