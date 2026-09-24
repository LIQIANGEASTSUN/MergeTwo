; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1325 MergeEngine.Configuration.Definitions.Reward
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A2AAA0 | public List<ResourceMultiple> get_Resources() { }
; bytes=76 sha256=6c52e42846280ae9c4e033e3284909477532e684e1ffb15cde07334a17582833 status=arm64_complete_bound indexed_start=True
0x06A2AAA0: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A2AAA4: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A2AAA8: 14980090  adrp x20, #0x7d2a000
0x06A2AAAC: 356800b0  adrp x21, #0x772f000
0x06A2AAB0: 88e65039  ldrb w8, [x20, #0x439]
0x06A2AAB4: b58640f9  ldr x21, [x21, #0x108]
0x06A2AAB8: f30300aa  mov x19, x0
0x06A2AABC: c8000037  tbnz w8, #0, #0x6a2aad4
0x06A2AAC0: 206800b0  adrp x0, #0x772f000
0x06A2AAC4: 008440f9  ldr x0, [x0, #0x108]
0x06A2AAC8: d4571d97  bl #0x3180a18
0x06A2AACC: 28008052  movz w8, #0x1
0x06A2AAD0: 88e61039  strb w8, [x20, #0x439]
0x06A2AAD4: a20240f9  ldr x2, [x21]
0x06A2AAD8: e00313aa  mov x0, x19
0x06A2AADC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A2AAE0: 21008052  movz w1, #0x1
0x06A2AAE4: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A2AAE8: f6474d17  b #0x3d7cac0

; RVA 0x6A2AAEC | public List<ItemMultiple> get_Items() { }
; bytes=76 sha256=839aa7b96ed3200b9ea747ae5c2f92c35b887601751fcaa22d64507f0ef8afe5 status=arm64_complete_bound indexed_start=True
0x06A2AAEC: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A2AAF0: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A2AAF4: 14980090  adrp x20, #0x7d2a000
0x06A2AAF8: b56600f0  adrp x21, #0x7701000
0x06A2AAFC: 88ea5039  ldrb w8, [x20, #0x43a]
0x06A2AB00: b55e45f9  ldr x21, [x21, #0xab8]
0x06A2AB04: f30300aa  mov x19, x0
0x06A2AB08: c8000037  tbnz w8, #0, #0x6a2ab20
0x06A2AB0C: a06600f0  adrp x0, #0x7701000
0x06A2AB10: 005c45f9  ldr x0, [x0, #0xab8]
0x06A2AB14: c1571d97  bl #0x3180a18
0x06A2AB18: 28008052  movz w8, #0x1
0x06A2AB1C: 88ea1039  strb w8, [x20, #0x43a]
0x06A2AB20: a20240f9  ldr x2, [x21]
0x06A2AB24: e00313aa  mov x0, x19
0x06A2AB28: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A2AB2C: 21008052  movz w1, #0x1
0x06A2AB30: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A2AB34: e3474d17  b #0x3d7cac0

; RVA 0x6A2AB38 | public List<BoosterMultiple> get_Boosters() { }
; bytes=76 sha256=5d8a262134904772b81c1b2beaa5351dd74808169ac255e9ca8d425b3b0db150 status=arm64_complete_bound indexed_start=True
0x06A2AB38: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A2AB3C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A2AB40: 14980090  adrp x20, #0x7d2a000
0x06A2AB44: 356800b0  adrp x21, #0x772f000
0x06A2AB48: 88ee5039  ldrb w8, [x20, #0x43b]
0x06A2AB4C: b58a40f9  ldr x21, [x21, #0x110]
0x06A2AB50: f30300aa  mov x19, x0
0x06A2AB54: c8000037  tbnz w8, #0, #0x6a2ab6c
0x06A2AB58: 206800b0  adrp x0, #0x772f000
0x06A2AB5C: 008840f9  ldr x0, [x0, #0x110]
0x06A2AB60: ae571d97  bl #0x3180a18
0x06A2AB64: 28008052  movz w8, #0x1
0x06A2AB68: 88ee1039  strb w8, [x20, #0x43b]
0x06A2AB6C: a20240f9  ldr x2, [x21]
0x06A2AB70: e00313aa  mov x0, x19
0x06A2AB74: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A2AB78: 21008052  movz w1, #0x1
0x06A2AB7C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A2AB80: d0474d17  b #0x3d7cac0

; RVA 0x6A2AB84 | public List<CardsPackMultiple> get_Packs() { }
; bytes=76 sha256=b3b82c10d29b82f11cae0e681cb6cfb100d05dcd53c68370256f153baca547a0 status=arm64_complete_bound indexed_start=True
0x06A2AB84: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A2AB88: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A2AB8C: 14980090  adrp x20, #0x7d2a000
0x06A2AB90: 356800b0  adrp x21, #0x772f000
0x06A2AB94: 88f25039  ldrb w8, [x20, #0x43c]
0x06A2AB98: b58e40f9  ldr x21, [x21, #0x118]
0x06A2AB9C: f30300aa  mov x19, x0
0x06A2ABA0: c8000037  tbnz w8, #0, #0x6a2abb8
0x06A2ABA4: 206800b0  adrp x0, #0x772f000
0x06A2ABA8: 008c40f9  ldr x0, [x0, #0x118]
0x06A2ABAC: 9b571d97  bl #0x3180a18
0x06A2ABB0: 28008052  movz w8, #0x1
0x06A2ABB4: 88f21039  strb w8, [x20, #0x43c]
0x06A2ABB8: a20240f9  ldr x2, [x21]
0x06A2ABBC: e00313aa  mov x0, x19
0x06A2ABC0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A2ABC4: 21008052  movz w1, #0x1
0x06A2ABC8: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A2ABCC: bd474d17  b #0x3d7cac0

; RVA 0x6A2ABD0 | public List<VanityRewardItemMultiple> get_VanityItems() { }
; bytes=76 sha256=13ff8c692185d6994dfb8649fbd43af0f65c232bb56aca164f91aef241bee058 status=arm64_complete_bound indexed_start=True
0x06A2ABD0: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A2ABD4: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A2ABD8: 14980090  adrp x20, #0x7d2a000
0x06A2ABDC: 356800b0  adrp x21, #0x772f000
0x06A2ABE0: 88f65039  ldrb w8, [x20, #0x43d]
0x06A2ABE4: b59240f9  ldr x21, [x21, #0x120]
0x06A2ABE8: f30300aa  mov x19, x0
0x06A2ABEC: c8000037  tbnz w8, #0, #0x6a2ac04
0x06A2ABF0: 206800b0  adrp x0, #0x772f000
0x06A2ABF4: 009040f9  ldr x0, [x0, #0x120]
0x06A2ABF8: 88571d97  bl #0x3180a18
0x06A2ABFC: 28008052  movz w8, #0x1
0x06A2AC00: 88f61039  strb w8, [x20, #0x43d]
0x06A2AC04: a20240f9  ldr x2, [x21]
0x06A2AC08: e00313aa  mov x0, x19
0x06A2AC0C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A2AC10: 21008052  movz w1, #0x1
0x06A2AC14: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A2AC18: aa474d17  b #0x3d7cac0

; RVA 0x6A2AC1C | public List<ChestMultiple> get_Chests() { }
; bytes=76 sha256=138bcf8e3d7fced1d4914fefdf615467f2621586d30bf3824fb713918fa573d5 status=arm64_complete_bound indexed_start=True
0x06A2AC1C: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A2AC20: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A2AC24: 14980090  adrp x20, #0x7d2a000
0x06A2AC28: 356800b0  adrp x21, #0x772f000
0x06A2AC2C: 88fa5039  ldrb w8, [x20, #0x43e]
0x06A2AC30: b59640f9  ldr x21, [x21, #0x128]
0x06A2AC34: f30300aa  mov x19, x0
0x06A2AC38: c8000037  tbnz w8, #0, #0x6a2ac50
0x06A2AC3C: 206800b0  adrp x0, #0x772f000
0x06A2AC40: 009440f9  ldr x0, [x0, #0x128]
0x06A2AC44: 75571d97  bl #0x3180a18
0x06A2AC48: 28008052  movz w8, #0x1
0x06A2AC4C: 88fa1039  strb w8, [x20, #0x43e]
0x06A2AC50: a20240f9  ldr x2, [x21]
0x06A2AC54: e00313aa  mov x0, x19
0x06A2AC58: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A2AC5C: 21008052  movz w1, #0x1
0x06A2AC60: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A2AC64: 97474d17  b #0x3d7cac0

; RVA 0x6A2AC68 | public List<FrameMultiple> get_Frames() { }
; bytes=76 sha256=f97f4cedb6135219cce39b5f252ae07c8267a07cdb986bf56ff784bd233435f2 status=arm64_complete_bound indexed_start=True
0x06A2AC68: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A2AC6C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A2AC70: 14980090  adrp x20, #0x7d2a000
0x06A2AC74: 356800b0  adrp x21, #0x772f000
0x06A2AC78: 88fe5039  ldrb w8, [x20, #0x43f]
0x06A2AC7C: b59a40f9  ldr x21, [x21, #0x130]
0x06A2AC80: f30300aa  mov x19, x0
0x06A2AC84: c8000037  tbnz w8, #0, #0x6a2ac9c
0x06A2AC88: 206800b0  adrp x0, #0x772f000
0x06A2AC8C: 009840f9  ldr x0, [x0, #0x130]
0x06A2AC90: 62571d97  bl #0x3180a18
0x06A2AC94: 28008052  movz w8, #0x1
0x06A2AC98: 88fe1039  strb w8, [x20, #0x43f]
0x06A2AC9C: a20240f9  ldr x2, [x21]
0x06A2ACA0: e00313aa  mov x0, x19
0x06A2ACA4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A2ACA8: 21008052  movz w1, #0x1
0x06A2ACAC: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A2ACB0: 84474d17  b #0x3d7cac0

; RVA 0x6A2ACB4 | public List<PortalItem> get_PortalItems() { }
; bytes=76 sha256=6ca9390df9771bb598ac895c2a86facf400ebaaa1379eadd9b12cccedecaab77 status=arm64_complete_bound indexed_start=True
0x06A2ACB4: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A2ACB8: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A2ACBC: 14980090  adrp x20, #0x7d2a000
0x06A2ACC0: 356800b0  adrp x21, #0x772f000
0x06A2ACC4: 88025139  ldrb w8, [x20, #0x440]
0x06A2ACC8: b59e40f9  ldr x21, [x21, #0x138]
0x06A2ACCC: f30300aa  mov x19, x0
0x06A2ACD0: c8000037  tbnz w8, #0, #0x6a2ace8
0x06A2ACD4: 206800b0  adrp x0, #0x772f000
0x06A2ACD8: 009c40f9  ldr x0, [x0, #0x138]
0x06A2ACDC: 4f571d97  bl #0x3180a18
0x06A2ACE0: 28008052  movz w8, #0x1
0x06A2ACE4: 88021139  strb w8, [x20, #0x440]
0x06A2ACE8: a20240f9  ldr x2, [x21]
0x06A2ACEC: e00313aa  mov x0, x19
0x06A2ACF0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A2ACF4: 21008052  movz w1, #0x1
0x06A2ACF8: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A2ACFC: 71474d17  b #0x3d7cac0

; RVA 0x6A2AD00 | public List<ConditionalRewardMultiple> get_ConditionalRewards() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06A2AD00: 000840f9  ldr x0, [x0, #0x10]
0x06A2AD04: c0035fd6  ret

; RVA 0x6A2AD08 | public List<GenericTokenMultiple> get_GenericTokens() { }
; bytes=76 sha256=33bd4c27c2b8b678778594b38e68a4d0b2a8901205264c3df1359c9d04fb6ee9 status=arm64_complete_bound indexed_start=True
0x06A2AD08: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A2AD0C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A2AD10: 14980090  adrp x20, #0x7d2a000
0x06A2AD14: 356800b0  adrp x21, #0x772f000
0x06A2AD18: 88065139  ldrb w8, [x20, #0x441]
0x06A2AD1C: b5a240f9  ldr x21, [x21, #0x140]
0x06A2AD20: f30300aa  mov x19, x0
0x06A2AD24: c8000037  tbnz w8, #0, #0x6a2ad3c
0x06A2AD28: 206800b0  adrp x0, #0x772f000
0x06A2AD2C: 00a040f9  ldr x0, [x0, #0x140]
0x06A2AD30: 3a571d97  bl #0x3180a18
0x06A2AD34: 28008052  movz w8, #0x1
0x06A2AD38: 88061139  strb w8, [x20, #0x441]
0x06A2AD3C: a20240f9  ldr x2, [x21]
0x06A2AD40: e00313aa  mov x0, x19
0x06A2AD44: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A2AD48: 21008052  movz w1, #0x1
0x06A2AD4C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A2AD50: 5c474d17  b #0x3d7cac0

; RVA 0x6A2AD54 | public List<WheelMultiple> get_Wheels() { }
; bytes=76 sha256=e925ea1123d0ea8b209254af78ab72e39203353cc48ff1e0d474bd94eddde2c5 status=arm64_complete_bound indexed_start=True
0x06A2AD54: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A2AD58: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A2AD5C: 14980090  adrp x20, #0x7d2a000
0x06A2AD60: 356800b0  adrp x21, #0x772f000
0x06A2AD64: 880a5139  ldrb w8, [x20, #0x442]
0x06A2AD68: b5a640f9  ldr x21, [x21, #0x148]
0x06A2AD6C: f30300aa  mov x19, x0
0x06A2AD70: c8000037  tbnz w8, #0, #0x6a2ad88
0x06A2AD74: 206800b0  adrp x0, #0x772f000
0x06A2AD78: 00a440f9  ldr x0, [x0, #0x148]
0x06A2AD7C: 27571d97  bl #0x3180a18
0x06A2AD80: 28008052  movz w8, #0x1
0x06A2AD84: 880a1139  strb w8, [x20, #0x442]
0x06A2AD88: a20240f9  ldr x2, [x21]
0x06A2AD8C: e00313aa  mov x0, x19
0x06A2AD90: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A2AD94: 21008052  movz w1, #0x1
0x06A2AD98: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A2AD9C: 49474d17  b #0x3d7cac0

; RVA 0x6A2ADA0 | public List<BubbleBlasterMultiple> get_BubbleBlasters() { }
; bytes=76 sha256=6a3d286122249f9fc27cd21454f51ebd1c6862fc2ac0cdfc2db659be46d5d781 status=arm64_complete_bound indexed_start=True
0x06A2ADA0: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A2ADA4: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A2ADA8: 14980090  adrp x20, #0x7d2a000
0x06A2ADAC: 356800b0  adrp x21, #0x772f000
0x06A2ADB0: 880e5139  ldrb w8, [x20, #0x443]
0x06A2ADB4: b5aa40f9  ldr x21, [x21, #0x150]
0x06A2ADB8: f30300aa  mov x19, x0
0x06A2ADBC: c8000037  tbnz w8, #0, #0x6a2add4
0x06A2ADC0: 206800b0  adrp x0, #0x772f000
0x06A2ADC4: 00a840f9  ldr x0, [x0, #0x150]
0x06A2ADC8: 14571d97  bl #0x3180a18
0x06A2ADCC: 28008052  movz w8, #0x1
0x06A2ADD0: 880e1139  strb w8, [x20, #0x443]
0x06A2ADD4: a20240f9  ldr x2, [x21]
0x06A2ADD8: e00313aa  mov x0, x19
0x06A2ADDC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A2ADE0: 21008052  movz w1, #0x1
0x06A2ADE4: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A2ADE8: 36474d17  b #0x3d7cac0

; RVA 0x6A2ADEC | public int get_ResourcesCount() { }
; bytes=96 sha256=bef09614e6047f7439b309fa0d41c2ac78dcf84a2b3f3f9cb13fed681b0a1ac8 status=arm64_complete_bound indexed_start=True
0x06A2ADEC: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A2ADF0: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A2ADF4: 15980090  adrp x21, #0x7d2a000
0x06A2ADF8: 546200b0  adrp x20, #0x7673000
0x06A2ADFC: a8125139  ldrb w8, [x21, #0x444]
0x06A2AE00: 945e40f9  ldr x20, [x20, #0xb8]
0x06A2AE04: f30300aa  mov x19, x0
0x06A2AE08: c8000037  tbnz w8, #0, #0x6a2ae20
0x06A2AE0C: 406200b0  adrp x0, #0x7673000
0x06A2AE10: 005c40f9  ldr x0, [x0, #0xb8]
0x06A2AE14: 01571d97  bl #0x3180a18
0x06A2AE18: 28008052  movz w8, #0x1
0x06A2AE1C: a8121139  strb w8, [x21, #0x444]
0x06A2AE20: 800240f9  ldr x0, [x20]
0x06A2AE24: 08e040b9  ldr w8, [x0, #0xe0]
0x06A2AE28: 68000035  cbnz w8, #0x6a2ae34
0x06A2AE2C: 58571d97  bl #0x3180b8c
0x06A2AE30: 800240f9  ldr x0, [x20]
0x06A2AE34: 085c40f9  ldr x8, [x0, #0xb8]
0x06A2AE38: e00313aa  mov x0, x19
0x06A2AE3C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A2AE40: 01f940f9  ldr x1, [x8, #0x1f0]
0x06A2AE44: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A2AE48: 01000014  b #0x6a2ae4c

; RVA 0x6A2B130 | public int get_BoostersCount() { }
; bytes=96 sha256=991fe305d733db82e90c2aa859da5a573859e6f06b9ba90c5d233b0fc9bfb784 status=arm64_complete_bound indexed_start=True
0x06A2B130: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A2B134: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A2B138: f59700f0  adrp x21, #0x7d2a000
0x06A2B13C: 54620090  adrp x20, #0x7673000
0x06A2B140: a8165139  ldrb w8, [x21, #0x445]
0x06A2B144: 945e40f9  ldr x20, [x20, #0xb8]
0x06A2B148: f30300aa  mov x19, x0
0x06A2B14C: c8000037  tbnz w8, #0, #0x6a2b164
0x06A2B150: 40620090  adrp x0, #0x7673000
0x06A2B154: 005c40f9  ldr x0, [x0, #0xb8]
0x06A2B158: 30561d97  bl #0x3180a18
0x06A2B15C: 28008052  movz w8, #0x1
0x06A2B160: a8161139  strb w8, [x21, #0x445]
0x06A2B164: 800240f9  ldr x0, [x20]
0x06A2B168: 08e040b9  ldr w8, [x0, #0xe0]
0x06A2B16C: 68000035  cbnz w8, #0x6a2b178
0x06A2B170: 87561d97  bl #0x3180b8c
0x06A2B174: 800240f9  ldr x0, [x20]
0x06A2B178: 085c40f9  ldr x8, [x0, #0xb8]
0x06A2B17C: e00313aa  mov x0, x19
0x06A2B180: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A2B184: 010941f9  ldr x1, [x8, #0x210]
0x06A2B188: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A2B18C: 30ffff17  b #0x6a2ae4c

; RVA 0x6A2B190 | public int get_FramesCount() { }
; bytes=96 sha256=3fa33c1efce7c76ecd4c6b326319e900061a4ea408b804e23edab41b8b9f72f3 status=arm64_complete_bound indexed_start=True
0x06A2B190: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A2B194: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A2B198: f59700f0  adrp x21, #0x7d2a000
0x06A2B19C: 54620090  adrp x20, #0x7673000
0x06A2B1A0: a81a5139  ldrb w8, [x21, #0x446]
0x06A2B1A4: 945e40f9  ldr x20, [x20, #0xb8]
0x06A2B1A8: f30300aa  mov x19, x0
0x06A2B1AC: c8000037  tbnz w8, #0, #0x6a2b1c4
0x06A2B1B0: 40620090  adrp x0, #0x7673000
0x06A2B1B4: 005c40f9  ldr x0, [x0, #0xb8]
0x06A2B1B8: 18561d97  bl #0x3180a18
0x06A2B1BC: 28008052  movz w8, #0x1
0x06A2B1C0: a81a1139  strb w8, [x21, #0x446]
0x06A2B1C4: 800240f9  ldr x0, [x20]
0x06A2B1C8: 08e040b9  ldr w8, [x0, #0xe0]
0x06A2B1CC: 68000035  cbnz w8, #0x6a2b1d8
0x06A2B1D0: 6f561d97  bl #0x3180b8c
0x06A2B1D4: 800240f9  ldr x0, [x20]
0x06A2B1D8: 085c40f9  ldr x8, [x0, #0xb8]
0x06A2B1DC: e00313aa  mov x0, x19
0x06A2B1E0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A2B1E4: 01a140f9  ldr x1, [x8, #0x140]
0x06A2B1E8: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A2B1EC: 01000014  b #0x6a2b1f0

; RVA 0x6A2B2D8 | public int get_VanityItemsCount() { }
; bytes=96 sha256=5d69e2eafbe0c44acaaf7c399e18674e19ce0f590e374360c8a0d45ece3831dd status=arm64_complete_bound indexed_start=True
0x06A2B2D8: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A2B2DC: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A2B2E0: f59700f0  adrp x21, #0x7d2a000
0x06A2B2E4: 54620090  adrp x20, #0x7673000
0x06A2B2E8: a81e5139  ldrb w8, [x21, #0x447]
0x06A2B2EC: 945e40f9  ldr x20, [x20, #0xb8]
0x06A2B2F0: f30300aa  mov x19, x0
0x06A2B2F4: c8000037  tbnz w8, #0, #0x6a2b30c
0x06A2B2F8: 40620090  adrp x0, #0x7673000
0x06A2B2FC: 005c40f9  ldr x0, [x0, #0xb8]
0x06A2B300: c6551d97  bl #0x3180a18
0x06A2B304: 28008052  movz w8, #0x1
0x06A2B308: a81e1139  strb w8, [x21, #0x447]
0x06A2B30C: 800240f9  ldr x0, [x20]
0x06A2B310: 08e040b9  ldr w8, [x0, #0xe0]
0x06A2B314: 68000035  cbnz w8, #0x6a2b320
0x06A2B318: 1d561d97  bl #0x3180b8c
0x06A2B31C: 800240f9  ldr x0, [x20]
0x06A2B320: 085c40f9  ldr x8, [x0, #0xb8]
0x06A2B324: e00313aa  mov x0, x19
0x06A2B328: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A2B32C: 012940f9  ldr x1, [x8, #0x50]
0x06A2B330: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A2B334: afffff17  b #0x6a2b1f0

; RVA 0x6A2B338 | public int get_PacksCount() { }
; bytes=96 sha256=7eaf3602674f472df6ea1b6024e73ec6bce395224eb877998a07f979633ee0e8 status=arm64_complete_bound indexed_start=True
0x06A2B338: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A2B33C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A2B340: f59700f0  adrp x21, #0x7d2a000
0x06A2B344: 54620090  adrp x20, #0x7673000
0x06A2B348: a8225139  ldrb w8, [x21, #0x448]
0x06A2B34C: 945e40f9  ldr x20, [x20, #0xb8]
0x06A2B350: f30300aa  mov x19, x0
0x06A2B354: c8000037  tbnz w8, #0, #0x6a2b36c
0x06A2B358: 40620090  adrp x0, #0x7673000
0x06A2B35C: 005c40f9  ldr x0, [x0, #0xb8]
0x06A2B360: ae551d97  bl #0x3180a18
0x06A2B364: 28008052  movz w8, #0x1
0x06A2B368: a8221139  strb w8, [x21, #0x448]
0x06A2B36C: 800240f9  ldr x0, [x20]
0x06A2B370: 08e040b9  ldr w8, [x0, #0xe0]
0x06A2B374: 68000035  cbnz w8, #0x6a2b380
0x06A2B378: 05561d97  bl #0x3180b8c
0x06A2B37C: 800240f9  ldr x0, [x20]
0x06A2B380: 085c40f9  ldr x8, [x0, #0xb8]
0x06A2B384: e00313aa  mov x0, x19
0x06A2B388: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A2B38C: 012540f9  ldr x1, [x8, #0x48]
0x06A2B390: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A2B394: 97ffff17  b #0x6a2b1f0

; RVA 0x6A2B398 | public int get_ItemsCount() { }
; bytes=96 sha256=5cbddb91fa47399b67716259b12956bff4c31cf1912ebaa7b3a03d5ef9b14f4a status=arm64_complete_bound indexed_start=True
0x06A2B398: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A2B39C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A2B3A0: f59700f0  adrp x21, #0x7d2a000
0x06A2B3A4: 54620090  adrp x20, #0x7673000
0x06A2B3A8: a8265139  ldrb w8, [x21, #0x449]
0x06A2B3AC: 945e40f9  ldr x20, [x20, #0xb8]
0x06A2B3B0: f30300aa  mov x19, x0
0x06A2B3B4: c8000037  tbnz w8, #0, #0x6a2b3cc
0x06A2B3B8: 40620090  adrp x0, #0x7673000
0x06A2B3BC: 005c40f9  ldr x0, [x0, #0xb8]
0x06A2B3C0: 96551d97  bl #0x3180a18
0x06A2B3C4: 28008052  movz w8, #0x1
0x06A2B3C8: a8261139  strb w8, [x21, #0x449]
0x06A2B3CC: 800240f9  ldr x0, [x20]
0x06A2B3D0: 08e040b9  ldr w8, [x0, #0xe0]
0x06A2B3D4: 68000035  cbnz w8, #0x6a2b3e0
0x06A2B3D8: ed551d97  bl #0x3180b8c
0x06A2B3DC: 800240f9  ldr x0, [x20]
0x06A2B3E0: 085c40f9  ldr x8, [x0, #0xb8]
0x06A2B3E4: e00313aa  mov x0, x19
0x06A2B3E8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A2B3EC: 012140f9  ldr x1, [x8, #0x40]
0x06A2B3F0: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A2B3F4: 7fffff17  b #0x6a2b1f0

; RVA 0x6A2B3F8 | public bool get_HasResources() { }
; bytes=24 sha256=74f685071c7b74eed9675bf525c4d24ca124c5837d02f5c6f0753c5d6aa15035 status=arm64_complete_bound indexed_start=True
0x06A2B3F8: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A2B3FC: 7cfeff97  bl #0x6a2adec
0x06A2B400: 1f000071  cmp w0, #0
0x06A2B404: e0d79f1a  cset w0, gt
0x06A2B408: fe0741f8  ldr x30, [sp], #0x10
0x06A2B40C: c0035fd6  ret

; RVA 0x6A2B410 | public bool get_HasGenericTokens() { }
; bytes=96 sha256=f3ea95f5f47a489fc79b0e5d5365d78ba05aa5d55bbfca82a9889d46d81711f8 status=arm64_complete_bound indexed_start=True
0x06A2B410: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A2B414: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A2B418: f49700f0  adrp x20, #0x7d2a000
0x06A2B41C: 882a5139  ldrb w8, [x20, #0x44a]
0x06A2B420: f30300aa  mov x19, x0
0x06A2B424: c8000037  tbnz w8, #0, #0x6a2b43c
0x06A2B428: 406200b0  adrp x0, #0x7674000
0x06A2B42C: 00b440f9  ldr x0, [x0, #0x168]
0x06A2B430: 7a551d97  bl #0x3180a18
0x06A2B434: 28008052  movz w8, #0x1
0x06A2B438: 882a1139  strb w8, [x20, #0x44a]
0x06A2B43C: e00313aa  mov x0, x19
0x06A2B440: 32feff97  bl #0x6a2ad08
0x06A2B444: e00000b4  cbz x0, #0x6a2b460
0x06A2B448: e00313aa  mov x0, x19
0x06A2B44C: 2ffeff97  bl #0x6a2ad08
0x06A2B450: e00000b4  cbz x0, #0x6a2b46c
0x06A2B454: 081840b9  ldr w8, [x0, #0x18]
0x06A2B458: 1f010071  cmp w8, #0
0x06A2B45C: e0d79f1a  cset w0, gt
0x06A2B460: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A2B464: fe0742f8  ldr x30, [sp], #0x20
0x06A2B468: c0035fd6  ret
0x06A2B46C: 10561d97  bl #0x3180cac

; RVA 0x6A2B470 | public bool get_HasBubbleBlasters() { }
; bytes=88 sha256=553c1897cb951f2052f42101b515cc69a84e30197b04abb5fdd815955586779c status=arm64_complete_bound indexed_start=True
0x06A2B470: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A2B474: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A2B478: f59700f0  adrp x21, #0x7d2a000
0x06A2B47C: 34680090  adrp x20, #0x772f000
0x06A2B480: a82e5139  ldrb w8, [x21, #0x44b]
0x06A2B484: 94ba40f9  ldr x20, [x20, #0x170]
0x06A2B488: f30300aa  mov x19, x0
0x06A2B48C: c8000037  tbnz w8, #0, #0x6a2b4a4
0x06A2B490: 20680090  adrp x0, #0x772f000
0x06A2B494: 00b840f9  ldr x0, [x0, #0x170]
0x06A2B498: 60551d97  bl #0x3180a18
0x06A2B49C: 28008052  movz w8, #0x1
0x06A2B4A0: a82e1139  strb w8, [x21, #0x44b]
0x06A2B4A4: e00313aa  mov x0, x19
0x06A2B4A8: 3efeff97  bl #0x6a2ada0
0x06A2B4AC: 810240f9  ldr x1, [x20]
0x06A2B4B0: 97f34697  bl #0x3be830c
0x06A2B4B4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A2B4B8: e803202a  mvn w8, w0
0x06A2B4BC: 00010012  and w0, w8, #1
0x06A2B4C0: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A2B4C4: c0035fd6  ret

; RVA 0x6A2B4C8 | public bool get_HasMergeItems() { }
; bytes=24 sha256=7811e5cea64f2b2a30e7ef09b05b4a7893b89129296097eb4a861df01434f40f status=arm64_complete_bound indexed_start=True
0x06A2B4C8: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A2B4CC: b3ffff97  bl #0x6a2b398
0x06A2B4D0: 1f000071  cmp w0, #0
0x06A2B4D4: e0d79f1a  cset w0, gt
0x06A2B4D8: fe0741f8  ldr x30, [sp], #0x10
0x06A2B4DC: c0035fd6  ret

; RVA 0x6A2B4E0 | public bool get_HasBoosters() { }
; bytes=24 sha256=1a2e6218f22854699e91169df2a65fd2bb60457d9fd8be7c3391174cd83b7cda status=arm64_complete_bound indexed_start=True
0x06A2B4E0: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A2B4E4: 13ffff97  bl #0x6a2b130
0x06A2B4E8: 1f000071  cmp w0, #0
0x06A2B4EC: e0d79f1a  cset w0, gt
0x06A2B4F0: fe0741f8  ldr x30, [sp], #0x10
0x06A2B4F4: c0035fd6  ret

; RVA 0x6A2B4F8 | public bool get_HasPacks() { }
; bytes=24 sha256=d26d96208a362a034d50ab933d18ebf71a60dbe3e574f4f73e76519da24e830a status=arm64_complete_bound indexed_start=True
0x06A2B4F8: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A2B4FC: 8fffff97  bl #0x6a2b338
0x06A2B500: 1f000071  cmp w0, #0
0x06A2B504: e0d79f1a  cset w0, gt
0x06A2B508: fe0741f8  ldr x30, [sp], #0x10
0x06A2B50C: c0035fd6  ret

; RVA 0x6A2B510 | public bool get_HasChests() { }
; bytes=108 sha256=cafe40f0829df1b822dd10b5edf66bbecb8a15c0bdf8ab9848dccc43b4c85c75 status=arm64_complete_bound indexed_start=True
0x06A2B510: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A2B514: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A2B518: f59700f0  adrp x21, #0x7d2a000
0x06A2B51C: 54620090  adrp x20, #0x7673000
0x06A2B520: a8325139  ldrb w8, [x21, #0x44c]
0x06A2B524: 945e40f9  ldr x20, [x20, #0xb8]
0x06A2B528: f30300aa  mov x19, x0
0x06A2B52C: c8000037  tbnz w8, #0, #0x6a2b544
0x06A2B530: 40620090  adrp x0, #0x7673000
0x06A2B534: 005c40f9  ldr x0, [x0, #0xb8]
0x06A2B538: 38551d97  bl #0x3180a18
0x06A2B53C: 28008052  movz w8, #0x1
0x06A2B540: a8321139  strb w8, [x21, #0x44c]
0x06A2B544: 800240f9  ldr x0, [x20]
0x06A2B548: 08e040b9  ldr w8, [x0, #0xe0]
0x06A2B54C: 68000035  cbnz w8, #0x6a2b558
0x06A2B550: 8f551d97  bl #0x3180b8c
0x06A2B554: 800240f9  ldr x0, [x20]
0x06A2B558: 085c40f9  ldr x8, [x0, #0xb8]
0x06A2B55C: e00313aa  mov x0, x19
0x06A2B560: 011941f9  ldr x1, [x8, #0x230]
0x06A2B564: 3afeff97  bl #0x6a2ae4c
0x06A2B568: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A2B56C: 1f000071  cmp w0, #0
0x06A2B570: e0d79f1a  cset w0, gt
0x06A2B574: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A2B578: c0035fd6  ret

; RVA 0x6A2B57C | public bool get_HasFrames() { }
; bytes=24 sha256=7b5d26b12853c8b958fccd33d98dd92506575e04b8f2937b15ff62ff82391660 status=arm64_complete_bound indexed_start=True
0x06A2B57C: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A2B580: 04ffff97  bl #0x6a2b190
0x06A2B584: 1f000071  cmp w0, #0
0x06A2B588: e0d79f1a  cset w0, gt
0x06A2B58C: fe0741f8  ldr x30, [sp], #0x10
0x06A2B590: c0035fd6  ret

; RVA 0x6A2B594 | public bool get_HasBunchOfItems() { }
; bytes=108 sha256=2bd2b1ba8409814253fba72923073003e5886e418431f4a695b4bb3fda13b166 status=arm64_complete_bound indexed_start=True
0x06A2B594: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A2B598: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A2B59C: f59700f0  adrp x21, #0x7d2a000
0x06A2B5A0: 54620090  adrp x20, #0x7673000
0x06A2B5A4: a8365139  ldrb w8, [x21, #0x44d]
0x06A2B5A8: 945e40f9  ldr x20, [x20, #0xb8]
0x06A2B5AC: f30300aa  mov x19, x0
0x06A2B5B0: c8000037  tbnz w8, #0, #0x6a2b5c8
0x06A2B5B4: 40620090  adrp x0, #0x7673000
0x06A2B5B8: 005c40f9  ldr x0, [x0, #0xb8]
0x06A2B5BC: 17551d97  bl #0x3180a18
0x06A2B5C0: 28008052  movz w8, #0x1
0x06A2B5C4: a8361139  strb w8, [x21, #0x44d]
0x06A2B5C8: 800240f9  ldr x0, [x20]
0x06A2B5CC: 08e040b9  ldr w8, [x0, #0xe0]
0x06A2B5D0: 68000035  cbnz w8, #0x6a2b5dc
0x06A2B5D4: 6e551d97  bl #0x3180b8c
0x06A2B5D8: 800240f9  ldr x0, [x20]
0x06A2B5DC: 085c40f9  ldr x8, [x0, #0xb8]
0x06A2B5E0: e00313aa  mov x0, x19
0x06A2B5E4: 01ad40f9  ldr x1, [x8, #0x158]
0x06A2B5E8: 02ffff97  bl #0x6a2b1f0
0x06A2B5EC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A2B5F0: 1f000071  cmp w0, #0
0x06A2B5F4: e0d79f1a  cset w0, gt
0x06A2B5F8: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A2B5FC: c0035fd6  ret

; RVA 0x6A2B600 | public bool get_HasPendable() { }
; bytes=96 sha256=2f7a6d46afbf31f98f56ef77c60a983b86d7f36c2ebf3da8179cf7529795d397 status=arm64_complete_bound indexed_start=True
0x06A2B600: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x06A2B604: f30300aa  mov x19, x0
0x06A2B608: c2ffff97  bl #0x6a2b510
0x06A2B60C: e0010037  tbnz w0, #0, #0x6a2b648
0x06A2B610: e00313aa  mov x0, x19
0x06A2B614: 49ffff97  bl #0x6a2b338
0x06A2B618: 1f000071  cmp w0, #0
0x06A2B61C: 6c010054  b.gt #0x6a2b648
0x06A2B620: e00313aa  mov x0, x19
0x06A2B624: 0f000094  bl #0x6a2b660
0x06A2B628: 00010037  tbnz w0, #0, #0x6a2b648
0x06A2B62C: e00313aa  mov x0, x19
0x06A2B630: c0feff97  bl #0x6a2b130
0x06A2B634: 1f000071  cmp w0, #0
0x06A2B638: 8c000054  b.gt #0x6a2b648
0x06A2B63C: e00313aa  mov x0, x19
0x06A2B640: 23000094  bl #0x6a2b6cc
0x06A2B644: 80000036  tbz w0, #0, #0x6a2b654
0x06A2B648: 20008052  movz w0, #0x1
0x06A2B64C: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x06A2B650: c0035fd6  ret
0x06A2B654: e00313aa  mov x0, x19
0x06A2B658: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x06A2B65C: ceffff17  b #0x6a2b594

; RVA 0x6A2B724 | public bool get_HasVanityItems() { }
; bytes=24 sha256=366ce8dd845cd55c994c2a70a99aa1c28dc7b3da49c7036ab906dc48a0dbc57d status=arm64_complete_bound indexed_start=True
0x06A2B724: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A2B728: ecfeff97  bl #0x6a2b2d8
0x06A2B72C: 1f000071  cmp w0, #0
0x06A2B730: e0d79f1a  cset w0, gt
0x06A2B734: fe0741f8  ldr x30, [sp], #0x10
0x06A2B738: c0035fd6  ret

; RVA 0x6A2B73C | public bool get_HasAnyItems() { }
; bytes=144 sha256=606fb55f78bf3ec1b81c8f2f141f14f60b1ea17eae5a1c3f63dc521756d5887c status=arm64_complete_bound indexed_start=True
0x06A2B73C: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x06A2B740: f30300aa  mov x19, x0
0x06A2B744: 15ffff97  bl #0x6a2b398
0x06A2B748: 1f000071  cmp w0, #0
0x06A2B74C: 4c030054  b.gt #0x6a2b7b4
0x06A2B750: e00313aa  mov x0, x19
0x06A2B754: 77feff97  bl #0x6a2b130
0x06A2B758: 1f000071  cmp w0, #0
0x06A2B75C: cc020054  b.gt #0x6a2b7b4
0x06A2B760: e00313aa  mov x0, x19
0x06A2B764: f5feff97  bl #0x6a2b338
0x06A2B768: 1f000071  cmp w0, #0
0x06A2B76C: 4c020054  b.gt #0x6a2b7b4
0x06A2B770: e00313aa  mov x0, x19
0x06A2B774: d9feff97  bl #0x6a2b2d8
0x06A2B778: 1f000071  cmp w0, #0
0x06A2B77C: cc010054  b.gt #0x6a2b7b4
0x06A2B780: e00313aa  mov x0, x19
0x06A2B784: 63ffff97  bl #0x6a2b510
0x06A2B788: 60010037  tbnz w0, #0, #0x6a2b7b4
0x06A2B78C: e00313aa  mov x0, x19
0x06A2B790: b4ffff97  bl #0x6a2b660
0x06A2B794: 00010037  tbnz w0, #0, #0x6a2b7b4
0x06A2B798: e00313aa  mov x0, x19
0x06A2B79C: 7dfeff97  bl #0x6a2b190
0x06A2B7A0: 1f000071  cmp w0, #0
0x06A2B7A4: 8c000054  b.gt #0x6a2b7b4
0x06A2B7A8: e00313aa  mov x0, x19
0x06A2B7AC: c8ffff97  bl #0x6a2b6cc
0x06A2B7B0: 80000036  tbz w0, #0, #0x6a2b7c0
0x06A2B7B4: 20008052  movz w0, #0x1
0x06A2B7B8: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x06A2B7BC: c0035fd6  ret
0x06A2B7C0: e00313aa  mov x0, x19
0x06A2B7C4: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x06A2B7C8: 73ffff17  b #0x6a2b594

; RVA 0x6A2B7CC | public bool get_ContainsReward() { }
; bytes=80 sha256=83263a3836dea2611bcdb415dd45acca7c09ce7910af8acffbaaafce9e5fb0fc status=arm64_complete_bound indexed_start=True
0x06A2B7CC: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A2B7D0: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A2B7D4: f49700f0  adrp x20, #0x7d2a000
0x06A2B7D8: 883a5139  ldrb w8, [x20, #0x44e]
0x06A2B7DC: f30300aa  mov x19, x0
0x06A2B7E0: c8000037  tbnz w8, #0, #0x6a2b7f8
0x06A2B7E4: a06200b0  adrp x0, #0x7680000
0x06A2B7E8: 00e840f9  ldr x0, [x0, #0x1d0]
0x06A2B7EC: 8b541d97  bl #0x3180a18
0x06A2B7F0: 28008052  movz w8, #0x1
0x06A2B7F4: 883a1139  strb w8, [x20, #0x44e]
0x06A2B7F8: 680e40f9  ldr x8, [x19, #0x18]
0x06A2B7FC: e80000b4  cbz x8, #0x6a2b818
0x06A2B800: 081940b9  ldr w8, [x8, #0x18]
0x06A2B804: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A2B808: 1f010071  cmp w8, #0
0x06A2B80C: e0d79f1a  cset w0, gt
0x06A2B810: fe0742f8  ldr x30, [sp], #0x20
0x06A2B814: c0035fd6  ret
0x06A2B818: 25551d97  bl #0x3180cac

; RVA 0x6A2B660 | public bool get_HasPortalItems() { }
; bytes=108 sha256=18dc01437ef0d330fc2a81c7d4be1d3b509405b308b1c79b0b7047e1222078c2 status=arm64_complete_bound indexed_start=True
0x06A2B660: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A2B664: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A2B668: f59700f0  adrp x21, #0x7d2a000
0x06A2B66C: 54620090  adrp x20, #0x7673000
0x06A2B670: a83e5139  ldrb w8, [x21, #0x44f]
0x06A2B674: 945e40f9  ldr x20, [x20, #0xb8]
0x06A2B678: f30300aa  mov x19, x0
0x06A2B67C: c8000037  tbnz w8, #0, #0x6a2b694
0x06A2B680: 40620090  adrp x0, #0x7673000
0x06A2B684: 005c40f9  ldr x0, [x0, #0xb8]
0x06A2B688: e4541d97  bl #0x3180a18
0x06A2B68C: 28008052  movz w8, #0x1
0x06A2B690: a83e1139  strb w8, [x21, #0x44f]
0x06A2B694: 800240f9  ldr x0, [x20]
0x06A2B698: 08e040b9  ldr w8, [x0, #0xe0]
0x06A2B69C: 68000035  cbnz w8, #0x6a2b6a8
0x06A2B6A0: 3b551d97  bl #0x3180b8c
0x06A2B6A4: 800240f9  ldr x0, [x20]
0x06A2B6A8: 085c40f9  ldr x8, [x0, #0xb8]
0x06A2B6AC: e00313aa  mov x0, x19
0x06A2B6B0: 01f540f9  ldr x1, [x8, #0x1e8]
0x06A2B6B4: e6fdff97  bl #0x6a2ae4c
0x06A2B6B8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A2B6BC: 1f000071  cmp w0, #0
0x06A2B6C0: e0d79f1a  cset w0, gt
0x06A2B6C4: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A2B6C8: c0035fd6  ret

; RVA 0x6A2B6CC | public bool get_HasWheels() { }
; bytes=88 sha256=0bec64b7ecbb265a036acc0894fa0aa6efae7789ea6c2592dc3c1f461626be5d status=arm64_complete_bound indexed_start=True
0x06A2B6CC: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A2B6D0: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A2B6D4: f59700f0  adrp x21, #0x7d2a000
0x06A2B6D8: 546500d0  adrp x20, #0x76d5000
0x06A2B6DC: a8425139  ldrb w8, [x21, #0x450]
0x06A2B6E0: 94ba45f9  ldr x20, [x20, #0xb70]
0x06A2B6E4: f30300aa  mov x19, x0
0x06A2B6E8: c8000037  tbnz w8, #0, #0x6a2b700
0x06A2B6EC: 406500d0  adrp x0, #0x76d5000
0x06A2B6F0: 00b845f9  ldr x0, [x0, #0xb70]
0x06A2B6F4: c9541d97  bl #0x3180a18
0x06A2B6F8: 28008052  movz w8, #0x1
0x06A2B6FC: a8421139  strb w8, [x21, #0x450]
0x06A2B700: e00313aa  mov x0, x19
0x06A2B704: 94fdff97  bl #0x6a2ad54
0x06A2B708: 810240f9  ldr x1, [x20]
0x06A2B70C: 00f34697  bl #0x3be830c
0x06A2B710: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A2B714: e803202a  mvn w8, w0
0x06A2B718: 00010012  and w0, w8, #1
0x06A2B71C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A2B720: c0035fd6  ret

; RVA 0x6A2B81C | public int get_UnpendingRewardsCount() { }
; bytes=124 sha256=d039069da52acf21e200c0aa2294f87d0552c89435393e50411e2110339ef19b status=arm64_complete_bound indexed_start=True
0x06A2B81C: fe0f1cf8  str x30, [sp, #-0x40]!
0x06A2B820: f85f01a9  stp x24, x23, [sp, #0x10]
0x06A2B824: f65702a9  stp x22, x21, [sp, #0x20]
0x06A2B828: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A2B82C: f30300aa  mov x19, x0
0x06A2B830: 6ffdff97  bl #0x6a2adec
0x06A2B834: f403002a  mov w20, w0
0x06A2B838: e00313aa  mov x0, x19
0x06A2B83C: 3dfeff97  bl #0x6a2b130
0x06A2B840: f503002a  mov w21, w0
0x06A2B844: e00313aa  mov x0, x19
0x06A2B848: d4feff97  bl #0x6a2b398
0x06A2B84C: f603002a  mov w22, w0
0x06A2B850: e00313aa  mov x0, x19
0x06A2B854: b9feff97  bl #0x6a2b338
0x06A2B858: f703002a  mov w23, w0
0x06A2B85C: e00313aa  mov x0, x19
0x06A2B860: 9efeff97  bl #0x6a2b2d8
0x06A2B864: f803002a  mov w24, w0
0x06A2B868: e00313aa  mov x0, x19
0x06A2B86C: 49feff97  bl #0x6a2b190
0x06A2B870: a802140b  add w8, w21, w20
0x06A2B874: 0801160b  add w8, w8, w22
0x06A2B878: 0801170b  add w8, w8, w23
0x06A2B87C: 0801180b  add w8, w8, w24
0x06A2B880: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A2B884: f65742a9  ldp x22, x21, [sp, #0x20]
0x06A2B888: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06A2B88C: 0001000b  add w0, w8, w0
0x06A2B890: fe0744f8  ldr x30, [sp], #0x40
0x06A2B894: c0035fd6  ret

; RVA 0x6A2B898 | public List<IRewardViewData> get_OriginalOrderRewards() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x06A2B898: 000c40f9  ldr x0, [x0, #0x18]
0x06A2B89C: c0035fd6  ret

; RVA 0x6A2B8A0 | public List<IRewardAnalyticsData> get_RewardAnalyticsDatas() { }
; bytes=220 sha256=b246d4c410d12507a788487b3603b2aefd7b646f163acd9d791ba52d2e1d0516 status=arm64_complete_bound indexed_start=True
0x06A2B8A0: fe0f1df8  str x30, [sp, #-0x30]!
0x06A2B8A4: f65701a9  stp x22, x21, [sp, #0x10]
0x06A2B8A8: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A2B8AC: f69700f0  adrp x22, #0x7d2a000
0x06A2B8B0: 15670090  adrp x21, #0x770b000
0x06A2B8B4: 14670090  adrp x20, #0x770b000
0x06A2B8B8: c8465139  ldrb w8, [x22, #0x451]
0x06A2B8BC: b5f643f9  ldr x21, [x21, #0x7e8]
0x06A2B8C0: 94fa43f9  ldr x20, [x20, #0x7f0]
0x06A2B8C4: f30300aa  mov x19, x0
0x06A2B8C8: 88010037  tbnz w8, #0, #0x6a2b8f8
0x06A2B8CC: 20680090  adrp x0, #0x772f000
0x06A2B8D0: 00bc40f9  ldr x0, [x0, #0x178]
0x06A2B8D4: 51541d97  bl #0x3180a18
0x06A2B8D8: 00670090  adrp x0, #0x770b000
0x06A2B8DC: 00f843f9  ldr x0, [x0, #0x7f0]
0x06A2B8E0: 4e541d97  bl #0x3180a18
0x06A2B8E4: 00670090  adrp x0, #0x770b000
0x06A2B8E8: 00f443f9  ldr x0, [x0, #0x7e8]
0x06A2B8EC: 4b541d97  bl #0x3180a18
0x06A2B8F0: 28008052  movz w8, #0x1
0x06A2B8F4: c8461139  strb w8, [x22, #0x451]
0x06A2B8F8: a00240f9  ldr x0, [x21]
0x06A2B8FC: 35680090  adrp x21, #0x772f000
0x06A2B900: b5be40f9  ldr x21, [x21, #0x178]
0x06A2B904: e7541d97  bl #0x3180ca0
0x06A2B908: 810240f9  ldr x1, [x20]
0x06A2B90C: f40300aa  mov x20, x0
0x06A2B910: ca605897  bl #0x4043c38
0x06A2B914: e00313aa  mov x0, x19
0x06A2B918: c1fcff97  bl #0x6a2ac1c
0x06A2B91C: 000100b4  cbz x0, #0x6a2b93c
0x06A2B920: e00313aa  mov x0, x19
0x06A2B924: befcff97  bl #0x6a2ac1c
0x06A2B928: 940200b4  cbz x20, #0x6a2b978
0x06A2B92C: a20240f9  ldr x2, [x21]
0x06A2B930: e10300aa  mov x1, x0
0x06A2B934: e00314aa  mov x0, x20
0x06A2B938: 50635897  bl #0x4044678
0x06A2B93C: e00313aa  mov x0, x19
0x06A2B940: cafcff97  bl #0x6a2ac68
0x06A2B944: 000100b4  cbz x0, #0x6a2b964
0x06A2B948: e00313aa  mov x0, x19
0x06A2B94C: c7fcff97  bl #0x6a2ac68
0x06A2B950: 540100b4  cbz x20, #0x6a2b978
0x06A2B954: a20240f9  ldr x2, [x21]
0x06A2B958: e10300aa  mov x1, x0
0x06A2B95C: e00314aa  mov x0, x20
0x06A2B960: 46635897  bl #0x4044678
0x06A2B964: e00314aa  mov x0, x20
0x06A2B968: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A2B96C: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A2B970: fe0743f8  ldr x30, [sp], #0x30
0x06A2B974: c0035fd6  ret
0x06A2B978: cd541d97  bl #0x3180cac

; RVA 0x6A2B97C | public List<IRewardViewData> get_AllItemRewards() { }
; bytes=260 sha256=313c0079e475dd14813bdf289a395ca8b50d1347ee0da087412375053a8cb6b0 status=arm64_complete_bound indexed_start=True
0x06A2B97C: fe0f1df8  str x30, [sp, #-0x30]!
0x06A2B980: f65701a9  stp x22, x21, [sp, #0x10]
0x06A2B984: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A2B988: f49700f0  adrp x20, #0x7d2a000
0x06A2B98C: 36680090  adrp x22, #0x772f000
0x06A2B990: 884a5139  ldrb w8, [x20, #0x452]
0x06A2B994: d6c240f9  ldr x22, [x22, #0x180]
0x06A2B998: f30300aa  mov x19, x0
0x06A2B99C: e8010037  tbnz w8, #0, #0x6a2b9d8
0x06A2B9A0: 806600d0  adrp x0, #0x76fd000
0x06A2B9A4: 001444f9  ldr x0, [x0, #0x828]
0x06A2B9A8: 1c541d97  bl #0x3180a18
0x06A2B9AC: a06200b0  adrp x0, #0x7680000
0x06A2B9B0: 00fc40f9  ldr x0, [x0, #0x1f8]
0x06A2B9B4: 19541d97  bl #0x3180a18
0x06A2B9B8: 20680090  adrp x0, #0x772f000
0x06A2B9BC: 00c440f9  ldr x0, [x0, #0x188]
0x06A2B9C0: 16541d97  bl #0x3180a18
0x06A2B9C4: 20680090  adrp x0, #0x772f000
0x06A2B9C8: 00c040f9  ldr x0, [x0, #0x180]
0x06A2B9CC: 13541d97  bl #0x3180a18
0x06A2B9D0: 28008052  movz w8, #0x1
0x06A2B9D4: 884a1139  strb w8, [x20, #0x452]
0x06A2B9D8: c00240f9  ldr x0, [x22]
0x06A2B9DC: 730e40f9  ldr x19, [x19, #0x18]
0x06A2B9E0: 08e040b9  ldr w8, [x0, #0xe0]
0x06A2B9E4: 68000035  cbnz w8, #0x6a2b9f0
0x06A2B9E8: 69541d97  bl #0x3180b8c
0x06A2B9EC: c00240f9  ldr x0, [x22]
0x06A2B9F0: 085c40f9  ldr x8, [x0, #0xb8]
0x06A2B9F4: 140540f9  ldr x20, [x8, #8]
0x06A2B9F8: f40200b5  cbnz x20, #0x6a2ba54
0x06A2B9FC: 08e040b9  ldr w8, [x0, #0xe0]
0x06A2BA00: 68000035  cbnz w8, #0x6a2ba0c
0x06A2BA04: 62541d97  bl #0x3180b8c
0x06A2BA08: c00240f9  ldr x0, [x22]
0x06A2BA0C: a96200b0  adrp x9, #0x7680000
0x06A2BA10: 085c40f9  ldr x8, [x0, #0xb8]
0x06A2BA14: 29fd40f9  ldr x9, [x9, #0x1f8]
0x06A2BA18: 150140f9  ldr x21, [x8]
0x06A2BA1C: 200140f9  ldr x0, [x9]
0x06A2BA20: a0541d97  bl #0x3180ca0
0x06A2BA24: 28680090  adrp x8, #0x772f000
0x06A2BA28: 08c540f9  ldr x8, [x8, #0x188]
0x06A2BA2C: e10315aa  mov x1, x21
0x06A2BA30: e3031faa  mov x3, xzr
0x06A2BA34: f40300aa  mov x20, x0
0x06A2BA38: 020140f9  ldr x2, [x8]
0x06A2BA3C: c8c86497  bl #0x435dd5c
0x06A2BA40: c80240f9  ldr x8, [x22]
0x06A2BA44: e10314aa  mov x1, x20
0x06A2BA48: 005d40f9  ldr x0, [x8, #0xb8]
0x06A2BA4C: 148c00f8  str x20, [x0, #8]!
0x06A2BA50: dd531d97  bl #0x31809c4
0x06A2BA54: 530100b4  cbz x19, #0x6a2ba7c
0x06A2BA58: 886600d0  adrp x8, #0x76fd000
0x06A2BA5C: 081544f9  ldr x8, [x8, #0x828]
0x06A2BA60: e00313aa  mov x0, x19
0x06A2BA64: e10314aa  mov x1, x20
0x06A2BA68: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A2BA6C: 020140f9  ldr x2, [x8]
0x06A2BA70: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A2BA74: fe0743f8  ldr x30, [sp], #0x30
0x06A2BA78: 5a645817  b #0x4044be0
0x06A2BA7C: 8c541d97  bl #0x3180cac

; RVA 0x6A2BA80 | public int get_AllRewardsCount() { }
; bytes=72 sha256=0df759d6c5df1df9284899d3148139105ce67c299e6bc13c9da3659456c934d9 status=arm64_complete_bound indexed_start=True
0x06A2BA80: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A2BA84: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A2BA88: f49700f0  adrp x20, #0x7d2a000
0x06A2BA8C: 884e5139  ldrb w8, [x20, #0x453]
0x06A2BA90: f30300aa  mov x19, x0
0x06A2BA94: c8000037  tbnz w8, #0, #0x6a2baac
0x06A2BA98: a06200b0  adrp x0, #0x7680000
0x06A2BA9C: 00e840f9  ldr x0, [x0, #0x1d0]
0x06A2BAA0: de531d97  bl #0x3180a18
0x06A2BAA4: 28008052  movz w8, #0x1
0x06A2BAA8: 884e1139  strb w8, [x20, #0x453]
0x06A2BAAC: 680e40f9  ldr x8, [x19, #0x18]
0x06A2BAB0: a80000b4  cbz x8, #0x6a2bac4
0x06A2BAB4: 001940b9  ldr w0, [x8, #0x18]
0x06A2BAB8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A2BABC: fe0742f8  ldr x30, [sp], #0x20
0x06A2BAC0: c0035fd6  ret
0x06A2BAC4: 7a541d97  bl #0x3180cac

; RVA 0x6A2BAC8 | public int get_AllRewardsCountWithoutOutOfBoosters() { }
; bytes=296 sha256=4f38368721b67f0e5a3d0aaffe1f8a6f9fd894268c13fd317493462859ce5a35 status=arm64_complete_bound indexed_start=True
0x06A2BAC8: fe0f1cf8  str x30, [sp, #-0x40]!
0x06A2BACC: f85f01a9  stp x24, x23, [sp, #0x10]
0x06A2BAD0: f65702a9  stp x22, x21, [sp, #0x20]
0x06A2BAD4: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A2BAD8: f39700f0  adrp x19, #0x7d2a000
0x06A2BADC: 37680090  adrp x23, #0x772f000
0x06A2BAE0: 68525139  ldrb w8, [x19, #0x454]
0x06A2BAE4: f7c240f9  ldr x23, [x23, #0x180]
0x06A2BAE8: f40300aa  mov x20, x0
0x06A2BAEC: e8010037  tbnz w8, #0, #0x6a2bb28
0x06A2BAF0: 806600b0  adrp x0, #0x76fc000
0x06A2BAF4: 004045f9  ldr x0, [x0, #0xa80]
0x06A2BAF8: c8531d97  bl #0x3180a18
0x06A2BAFC: 406500b0  adrp x0, #0x76d4000
0x06A2BB00: 004841f9  ldr x0, [x0, #0x290]
0x06A2BB04: c5531d97  bl #0x3180a18
0x06A2BB08: 20680090  adrp x0, #0x772f000
0x06A2BB0C: 00c840f9  ldr x0, [x0, #0x190]
0x06A2BB10: c2531d97  bl #0x3180a18
0x06A2BB14: 20680090  adrp x0, #0x772f000
0x06A2BB18: 00c040f9  ldr x0, [x0, #0x180]
0x06A2BB1C: bf531d97  bl #0x3180a18
0x06A2BB20: 28008052  movz w8, #0x1
0x06A2BB24: 68521139  strb w8, [x19, #0x454]
0x06A2BB28: e00314aa  mov x0, x20
0x06A2BB2C: d5ffff97  bl #0x6a2ba80
0x06A2BB30: f303002a  mov w19, w0
0x06A2BB34: e00314aa  mov x0, x20
0x06A2BB38: 00fcff97  bl #0x6a2ab38
0x06A2BB3C: e80240f9  ldr x8, [x23]
0x06A2BB40: f40300aa  mov x20, x0
0x06A2BB44: 09e140b9  ldr w9, [x8, #0xe0]
0x06A2BB48: 89000035  cbnz w9, #0x6a2bb58
0x06A2BB4C: e00308aa  mov x0, x8
0x06A2BB50: 0f541d97  bl #0x3180b8c
0x06A2BB54: e80240f9  ldr x8, [x23]
0x06A2BB58: 095d40f9  ldr x9, [x8, #0xb8]
0x06A2BB5C: 986600b0  adrp x24, #0x76fc000
0x06A2BB60: 350940f9  ldr x21, [x9, #0x10]
0x06A2BB64: 184345f9  ldr x24, [x24, #0xa80]
0x06A2BB68: 150300b5  cbnz x21, #0x6a2bbc8
0x06A2BB6C: 09e140b9  ldr w9, [x8, #0xe0]
0x06A2BB70: 89000035  cbnz w9, #0x6a2bb80
0x06A2BB74: e00308aa  mov x0, x8
0x06A2BB78: 05541d97  bl #0x3180b8c
0x06A2BB7C: e80240f9  ldr x8, [x23]
0x06A2BB80: 496500b0  adrp x9, #0x76d4000
0x06A2BB84: 085d40f9  ldr x8, [x8, #0xb8]
0x06A2BB88: 294941f9  ldr x9, [x9, #0x290]
0x06A2BB8C: 160140f9  ldr x22, [x8]
0x06A2BB90: 200140f9  ldr x0, [x9]
0x06A2BB94: 43541d97  bl #0x3180ca0
0x06A2BB98: 28680090  adrp x8, #0x772f000
0x06A2BB9C: 08c940f9  ldr x8, [x8, #0x190]
0x06A2BBA0: e10316aa  mov x1, x22
0x06A2BBA4: e3031faa  mov x3, xzr
0x06A2BBA8: f50300aa  mov x21, x0
0x06A2BBAC: 020140f9  ldr x2, [x8]
0x06A2BBB0: 03a9a097  bl #0x5255fbc
0x06A2BBB4: e80240f9  ldr x8, [x23]
0x06A2BBB8: e10315aa  mov x1, x21
0x06A2BBBC: 005d40f9  ldr x0, [x8, #0xb8]
0x06A2BBC0: 150c01f8  str x21, [x0, #0x10]!
0x06A2BBC4: 80531d97  bl #0x31809c4
0x06A2BBC8: 020340f9  ldr x2, [x24]
0x06A2BBCC: e00314aa  mov x0, x20
0x06A2BBD0: e10315aa  mov x1, x21
0x06A2BBD4: ce3f4897  bl #0x3c3bb0c
0x06A2BBD8: 6002004b  sub w0, w19, w0
0x06A2BBDC: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A2BBE0: f65742a9  ldp x22, x21, [sp, #0x20]
0x06A2BBE4: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06A2BBE8: fe0744f8  ldr x30, [sp], #0x40
0x06A2BBEC: c0035fd6  ret

; RVA 0x6A24C88 | public void .ctor(IEnumerable<IRewardViewData> originalOrderRewards, List<ConditionalRewardMultiple> conditionals) { }
; bytes=1004 sha256=1bf329bd593830997c9383545c1e8c2b31c20342bc106fe1d51bd98f8e7c32dc status=arm64_complete_bound indexed_start=True
0x06A24C88: fe0f1bf8  str x30, [sp, #-0x50]!
0x06A24C8C: fa6701a9  stp x26, x25, [sp, #0x10]
0x06A24C90: f85f02a9  stp x24, x23, [sp, #0x20]
0x06A24C94: f65703a9  stp x22, x21, [sp, #0x30]
0x06A24C98: f44f04a9  stp x20, x19, [sp, #0x40]
0x06A24C9C: 379800d0  adrp x23, #0x7d2a000
0x06A24CA0: da650090  adrp x26, #0x76dc000
0x06A24CA4: d4650090  adrp x20, #0x76dc000
0x06A24CA8: 996200b0  adrp x25, #0x7675000
0x06A24CAC: 986200b0  adrp x24, #0x7675000
0x06A24CB0: e8565139  ldrb w8, [x23, #0x455]
0x06A24CB4: 5ae740f9  ldr x26, [x26, #0x1c8]
0x06A24CB8: 94ea40f9  ldr x20, [x20, #0x1d0]
0x06A24CBC: 39e340f9  ldr x25, [x25, #0x1c0]
0x06A24CC0: 18e740f9  ldr x24, [x24, #0x1c8]
0x06A24CC4: f30302aa  mov x19, x2
0x06A24CC8: f50301aa  mov x21, x1
0x06A24CCC: f60300aa  mov x22, x0
0x06A24CD0: 28040037  tbnz w8, #0, #0x6a24d54
0x06A24CD4: 406800d0  adrp x0, #0x772e000
0x06A24CD8: 009047f9  ldr x0, [x0, #0xf20]
0x06A24CDC: 4f6f1d97  bl #0x3180a18
0x06A24CE0: 406100d0  adrp x0, #0x764e000
0x06A24CE4: 006444f9  ldr x0, [x0, #0x8c8]
0x06A24CE8: 4c6f1d97  bl #0x3180a18
0x06A24CEC: e0620090  adrp x0, #0x7680000
0x06A24CF0: 000c41f9  ldr x0, [x0, #0x218]
0x06A24CF4: 496f1d97  bl #0x3180a18
0x06A24CF8: e0620090  adrp x0, #0x7680000
0x06A24CFC: 001041f9  ldr x0, [x0, #0x220]
0x06A24D00: 466f1d97  bl #0x3180a18
0x06A24D04: 406100d0  adrp x0, #0x764e000
0x06A24D08: 007044f9  ldr x0, [x0, #0x8e0]
0x06A24D0C: 436f1d97  bl #0x3180a18
0x06A24D10: 406800d0  adrp x0, #0x772e000
0x06A24D14: 009447f9  ldr x0, [x0, #0xf28]
0x06A24D18: 406f1d97  bl #0x3180a18
0x06A24D1C: 806200b0  adrp x0, #0x7675000
0x06A24D20: 00e440f9  ldr x0, [x0, #0x1c8]
0x06A24D24: 3d6f1d97  bl #0x3180a18
0x06A24D28: c0650090  adrp x0, #0x76dc000
0x06A24D2C: 00e840f9  ldr x0, [x0, #0x1d0]
0x06A24D30: 3a6f1d97  bl #0x3180a18
0x06A24D34: c0650090  adrp x0, #0x76dc000
0x06A24D38: 00e440f9  ldr x0, [x0, #0x1c8]
0x06A24D3C: 376f1d97  bl #0x3180a18
0x06A24D40: 806200b0  adrp x0, #0x7675000
0x06A24D44: 00e040f9  ldr x0, [x0, #0x1c0]
0x06A24D48: 346f1d97  bl #0x3180a18
0x06A24D4C: 28008052  movz w8, #0x1
0x06A24D50: e8561139  strb w8, [x23, #0x455]
0x06A24D54: 400340f9  ldr x0, [x26]
0x06A24D58: d26f1d97  bl #0x3180ca0
0x06A24D5C: 810240f9  ldr x1, [x20]
0x06A24D60: f70300aa  mov x23, x0
0x06A24D64: b57b5897  bl #0x4043c38
0x06A24D68: f40316aa  mov x20, x22
0x06A24D6C: 970e01f8  str x23, [x20, #0x10]!
0x06A24D70: e00314aa  mov x0, x20
0x06A24D74: e10317aa  mov x1, x23
0x06A24D78: 136f1d97  bl #0x31809c4
0x06A24D7C: 200340f9  ldr x0, [x25]
0x06A24D80: c86f1d97  bl #0x3180ca0
0x06A24D84: 010340f9  ldr x1, [x24]
0x06A24D88: f70300aa  mov x23, x0
0x06A24D8C: ab7b5897  bl #0x4043c38
0x06A24D90: e00316aa  mov x0, x22
0x06A24D94: 178c01f8  str x23, [x0, #0x18]!
0x06A24D98: e10317aa  mov x1, x23
0x06A24D9C: 0a6f1d97  bl #0x31809c4
0x06A24DA0: e00316aa  mov x0, x22
0x06A24DA4: e1031faa  mov x1, xzr
0x06A24DA8: 15d6b297  bl #0x56da5fc
0x06A24DAC: 951000b4  cbz x21, #0x6a24fbc
0x06A24DB0: ea620090  adrp x10, #0x7680000
0x06A24DB4: a80240f9  ldr x8, [x21]
0x06A24DB8: 4a0d41f9  ldr x10, [x10, #0x218]
0x06A24DBC: 095d4279  ldrh w9, [x8, #0x12e]
0x06A24DC0: 410140f9  ldr x1, [x10]
0x06A24DC4: 290100b4  cbz x9, #0x6a24de8
0x06A24DC8: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A24DCC: 4a210091  add x10, x10, #8
0x06A24DD0: 4b815ff8  ldur x11, [x10, #-8]
0x06A24DD4: 7f0101eb  cmp x11, x1
0x06A24DD8: 00010054  b.eq #0x6a24df8
0x06A24DDC: 290500f1  subs x9, x9, #1
0x06A24DE0: 4a410091  add x10, x10, #0x10
0x06A24DE4: 61ffff54  b.ne #0x6a24dd0
0x06A24DE8: e00315aa  mov x0, x21
0x06A24DEC: e2031f2a  mov w2, wzr
0x06A24DF0: 48c71c97  bl #0x3156b10
0x06A24DF4: 04000014  b #0x6a24e04
0x06A24DF8: 490180b9  ldrsw x9, [x10]
0x06A24DFC: 0811098b  add x8, x8, x9, lsl #4
0x06A24E00: 00e10491  add x0, x8, #0x138
0x06A24E04: 080440a9  ldp x8, x1, [x0]
0x06A24E08: 576100d0  adrp x23, #0x764e000
0x06A24E0C: f76644f9  ldr x23, [x23, #0x8c8]
0x06A24E10: e00315aa  mov x0, x21
0x06A24E14: 00013fd6  blr x8
0x06A24E18: f50300aa  mov x21, x0
0x06A24E1C: 200d00b4  cbz x0, #0x6a24fc0
0x06A24E20: 586100d0  adrp x24, #0x764e000
0x06A24E24: f9620090  adrp x25, #0x7680000
0x06A24E28: 187344f9  ldr x24, [x24, #0x8e0]
0x06A24E2C: 391341f9  ldr x25, [x25, #0x220]
0x06A24E30: a80240f9  ldr x8, [x21]
0x06A24E34: 010340f9  ldr x1, [x24]
0x06A24E38: 095d4279  ldrh w9, [x8, #0x12e]
0x06A24E3C: 290100b4  cbz x9, #0x6a24e60
0x06A24E40: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A24E44: 4a210091  add x10, x10, #8
0x06A24E48: 4b815ff8  ldur x11, [x10, #-8]
0x06A24E4C: 7f0101eb  cmp x11, x1
0x06A24E50: 00010054  b.eq #0x6a24e70
0x06A24E54: 290500f1  subs x9, x9, #1
0x06A24E58: 4a410091  add x10, x10, #0x10
0x06A24E5C: 61ffff54  b.ne #0x6a24e48
0x06A24E60: e00315aa  mov x0, x21
0x06A24E64: e2031f2a  mov w2, wzr
0x06A24E68: 2ac71c97  bl #0x3156b10
0x06A24E6C: 04000014  b #0x6a24e7c
0x06A24E70: 490180b9  ldrsw x9, [x10]
0x06A24E74: 0811098b  add x8, x8, x9, lsl #4
0x06A24E78: 00e10491  add x0, x8, #0x138
0x06A24E7C: 080440a9  ldp x8, x1, [x0]
0x06A24E80: e00315aa  mov x0, x21
0x06A24E84: 00013fd6  blr x8
0x06A24E88: 60030036  tbz w0, #0, #0x6a24ef4
0x06A24E8C: a80240f9  ldr x8, [x21]
0x06A24E90: 210340f9  ldr x1, [x25]
0x06A24E94: 095d4279  ldrh w9, [x8, #0x12e]
0x06A24E98: 290100b4  cbz x9, #0x6a24ebc
0x06A24E9C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A24EA0: 4a210091  add x10, x10, #8
0x06A24EA4: 4b815ff8  ldur x11, [x10, #-8]
0x06A24EA8: 7f0101eb  cmp x11, x1
0x06A24EAC: 00010054  b.eq #0x6a24ecc
0x06A24EB0: 290500f1  subs x9, x9, #1
0x06A24EB4: 4a410091  add x10, x10, #0x10
0x06A24EB8: 61ffff54  b.ne #0x6a24ea4
0x06A24EBC: e00315aa  mov x0, x21
0x06A24EC0: e2031f2a  mov w2, wzr
0x06A24EC4: 13c71c97  bl #0x3156b10
0x06A24EC8: 04000014  b #0x6a24ed8
0x06A24ECC: 490180b9  ldrsw x9, [x10]
0x06A24ED0: 0811098b  add x8, x8, x9, lsl #4
0x06A24ED4: 00e10491  add x0, x8, #0x138
0x06A24ED8: 080440a9  ldp x8, x1, [x0]
0x06A24EDC: e00315aa  mov x0, x21
0x06A24EE0: 00013fd6  blr x8
0x06A24EE4: e10300aa  mov x1, x0
0x06A24EE8: e00316aa  mov x0, x22
0x06A24EEC: f8020094  bl #0x6a25acc
0x06A24EF0: d0ffff17  b #0x6a24e30
0x06A24EF4: f6031faa  mov x22, xzr
0x06A24EF8: f50200b4  cbz x21, #0x6a24f54
0x06A24EFC: a80240f9  ldr x8, [x21]
0x06A24F00: e10240f9  ldr x1, [x23]
0x06A24F04: 095d4279  ldrh w9, [x8, #0x12e]
0x06A24F08: 290100b4  cbz x9, #0x6a24f2c
0x06A24F0C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A24F10: 4a210091  add x10, x10, #8
0x06A24F14: 4b815ff8  ldur x11, [x10, #-8]
0x06A24F18: 7f0101eb  cmp x11, x1
0x06A24F1C: 00010054  b.eq #0x6a24f3c
0x06A24F20: 290500f1  subs x9, x9, #1
0x06A24F24: 4a410091  add x10, x10, #0x10
0x06A24F28: 61ffff54  b.ne #0x6a24f14
0x06A24F2C: e00315aa  mov x0, x21
0x06A24F30: e2031f2a  mov w2, wzr
0x06A24F34: f7c61c97  bl #0x3156b10
0x06A24F38: 04000014  b #0x6a24f48
0x06A24F3C: 490180b9  ldrsw x9, [x10]
0x06A24F40: 0811098b  add x8, x8, x9, lsl #4
0x06A24F44: 00e10491  add x0, x8, #0x138
0x06A24F48: 080440a9  ldp x8, x1, [x0]
0x06A24F4C: e00315aa  mov x0, x21
0x06A24F50: 00013fd6  blr x8
0x06A24F54: 960300b5  cbnz x22, #0x6a24fc4
0x06A24F58: f30000b4  cbz x19, #0x6a24f74
0x06A24F5C: 486800d0  adrp x8, #0x772e000
0x06A24F60: 089147f9  ldr x8, [x8, #0xf20]
0x06A24F64: e00313aa  mov x0, x19
0x06A24F68: 010140f9  ldr x1, [x8]
0x06A24F6C: e80c4797  bl #0x3be830c
0x06A24F70: e0000036  tbz w0, #0, #0x6a24f8c
0x06A24F74: f44f44a9  ldp x20, x19, [sp, #0x40]
0x06A24F78: f65743a9  ldp x22, x21, [sp, #0x30]
0x06A24F7C: f85f42a9  ldp x24, x23, [sp, #0x20]
0x06A24F80: fa6741a9  ldp x26, x25, [sp, #0x10]
0x06A24F84: fe0745f8  ldr x30, [sp], #0x50
0x06A24F88: c0035fd6  ret
0x06A24F8C: 800240f9  ldr x0, [x20]
0x06A24F90: 600100b4  cbz x0, #0x6a24fbc
0x06A24F94: 486800d0  adrp x8, #0x772e000
0x06A24F98: 089547f9  ldr x8, [x8, #0xf28]
0x06A24F9C: e10313aa  mov x1, x19
0x06A24FA0: f44f44a9  ldp x20, x19, [sp, #0x40]
0x06A24FA4: f65743a9  ldp x22, x21, [sp, #0x30]
0x06A24FA8: 020140f9  ldr x2, [x8]
0x06A24FAC: f85f42a9  ldp x24, x23, [sp, #0x20]
0x06A24FB0: fa6741a9  ldp x26, x25, [sp, #0x10]
0x06A24FB4: fe0745f8  ldr x30, [sp], #0x50
0x06A24FB8: b07d5817  b #0x4044678
0x06A24FBC: 3c6f1d97  bl #0x3180cac
0x06A24FC0: 3b6f1d97  bl #0x3180cac
0x06A24FC4: e00316aa  mov x0, x22
0x06A24FC8: 376f1d97  bl #0x3180ca4
0x06A24FCC: 03000014  b #0x6a24fd8
0x06A24FD0: 02000014  b #0x6a24fd8
0x06A24FD4: 01000014  b #0x6a24fd8
0x06A24FD8: 3f040071  cmp w1, #1
0x06A24FDC: a1000054  b.ne #0x6a24ff0
0x06A24FE0: 4ca61e94  bl #0x71ce910
0x06A24FE4: 160040f9  ldr x22, [x0]
0x06A24FE8: 4ea61e94  bl #0x71ce920
0x06A24FEC: c3ffff17  b #0x6a24ef8
0x06A24FF0: f30300aa  mov x19, x0
0x06A24FF4: f6031faa  mov x22, xzr
0x06A24FF8: 02000014  b #0x6a25000
0x06A24FFC: f30300aa  mov x19, x0
0x06A25000: f50200b4  cbz x21, #0x6a2505c
0x06A25004: a80240f9  ldr x8, [x21]
0x06A25008: e10240f9  ldr x1, [x23]
0x06A2500C: 095d4279  ldrh w9, [x8, #0x12e]
0x06A25010: 290100b4  cbz x9, #0x6a25034
0x06A25014: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A25018: 4a210091  add x10, x10, #8
0x06A2501C: 4b815ff8  ldur x11, [x10, #-8]
0x06A25020: 7f0101eb  cmp x11, x1
0x06A25024: 00010054  b.eq #0x6a25044
0x06A25028: 290500f1  subs x9, x9, #1
0x06A2502C: 4a410091  add x10, x10, #0x10
0x06A25030: 61ffff54  b.ne #0x6a2501c
0x06A25034: e00315aa  mov x0, x21
0x06A25038: e2031f2a  mov w2, wzr
0x06A2503C: b5c61c97  bl #0x3156b10
0x06A25040: 04000014  b #0x6a25050
0x06A25044: 490180b9  ldrsw x9, [x10]
0x06A25048: 0811098b  add x8, x8, x9, lsl #4
0x06A2504C: 00e10491  add x0, x8, #0x138
0x06A25050: 080440a9  ldp x8, x1, [x0]
0x06A25054: e00315aa  mov x0, x21
0x06A25058: 00013fd6  blr x8
0x06A2505C: 760000b5  cbnz x22, #0x6a25068
0x06A25060: e00313aa  mov x0, x19
0x06A25064: 3d022197  bl #0x3265958
0x06A25068: e00316aa  mov x0, x22
0x06A2506C: 0e6f1d97  bl #0x3180ca4
0x06A25070: 29910f97  bl #0x2e09514

; RVA 0x6A1CD68 | public void .ctor() { }
; bytes=220 sha256=adc86688f10a706a7d61471b72031c1603a3b620417ad8e7522a319614430d31 status=arm64_complete_bound indexed_start=True
0x06A1CD68: fe0f1cf8  str x30, [sp, #-0x40]!
0x06A1CD6C: f85f01a9  stp x24, x23, [sp, #0x10]
0x06A1CD70: f65702a9  stp x22, x21, [sp, #0x20]
0x06A1CD74: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A1CD78: 779800d0  adrp x23, #0x7d2a000
0x06A1CD7C: 18660090  adrp x24, #0x76dc000
0x06A1CD80: 14660090  adrp x20, #0x76dc000
0x06A1CD84: d66200b0  adrp x22, #0x7675000
0x06A1CD88: d56200b0  adrp x21, #0x7675000
0x06A1CD8C: e85a5139  ldrb w8, [x23, #0x456]
0x06A1CD90: 18e740f9  ldr x24, [x24, #0x1c8]
0x06A1CD94: 94ea40f9  ldr x20, [x20, #0x1d0]
0x06A1CD98: d6e240f9  ldr x22, [x22, #0x1c0]
0x06A1CD9C: b5e640f9  ldr x21, [x21, #0x1c8]
0x06A1CDA0: f30300aa  mov x19, x0
0x06A1CDA4: e8010037  tbnz w8, #0, #0x6a1cde0
0x06A1CDA8: c06200b0  adrp x0, #0x7675000
0x06A1CDAC: 00e440f9  ldr x0, [x0, #0x1c8]
0x06A1CDB0: 1a8f1d97  bl #0x3180a18
0x06A1CDB4: 00660090  adrp x0, #0x76dc000
0x06A1CDB8: 00e840f9  ldr x0, [x0, #0x1d0]
0x06A1CDBC: 178f1d97  bl #0x3180a18
0x06A1CDC0: 00660090  adrp x0, #0x76dc000
0x06A1CDC4: 00e440f9  ldr x0, [x0, #0x1c8]
0x06A1CDC8: 148f1d97  bl #0x3180a18
0x06A1CDCC: c06200b0  adrp x0, #0x7675000
0x06A1CDD0: 00e040f9  ldr x0, [x0, #0x1c0]
0x06A1CDD4: 118f1d97  bl #0x3180a18
0x06A1CDD8: 28008052  movz w8, #0x1
0x06A1CDDC: e85a1139  strb w8, [x23, #0x456]
0x06A1CDE0: 000340f9  ldr x0, [x24]
0x06A1CDE4: af8f1d97  bl #0x3180ca0
0x06A1CDE8: 810240f9  ldr x1, [x20]
0x06A1CDEC: f40300aa  mov x20, x0
0x06A1CDF0: 929b5897  bl #0x4043c38
0x06A1CDF4: e00313aa  mov x0, x19
0x06A1CDF8: 140c01f8  str x20, [x0, #0x10]!
0x06A1CDFC: e10314aa  mov x1, x20
0x06A1CE00: f18e1d97  bl #0x31809c4
0x06A1CE04: c00240f9  ldr x0, [x22]
0x06A1CE08: a68f1d97  bl #0x3180ca0
0x06A1CE0C: a10240f9  ldr x1, [x21]
0x06A1CE10: f40300aa  mov x20, x0
0x06A1CE14: 899b5897  bl #0x4043c38
0x06A1CE18: e00313aa  mov x0, x19
0x06A1CE1C: 148c01f8  str x20, [x0, #0x18]!
0x06A1CE20: e10314aa  mov x1, x20
0x06A1CE24: e88e1d97  bl #0x31809c4
0x06A1CE28: e00313aa  mov x0, x19
0x06A1CE2C: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A1CE30: f65742a9  ldp x22, x21, [sp, #0x20]
0x06A1CE34: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06A1CE38: e1031faa  mov x1, xzr
0x06A1CE3C: fe0744f8  ldr x30, [sp], #0x40
0x06A1CE40: eff5b217  b #0x56da5fc

; RVA 0x6A2BBF0 | public Reward Clone() { }
; bytes=576 sha256=35c66420d73b3ebc096d6ca2c97549f311dce16ea0a771399a4d17bac6911f08 status=arm64_complete_bound indexed_start=True
0x06A2BBF0: fe0f1bf8  str x30, [sp, #-0x50]!
0x06A2BBF4: fa6701a9  stp x26, x25, [sp, #0x10]
0x06A2BBF8: f85f02a9  stp x24, x23, [sp, #0x20]
0x06A2BBFC: f65703a9  stp x22, x21, [sp, #0x30]
0x06A2BC00: f44f04a9  stp x20, x19, [sp, #0x40]
0x06A2BC04: f49700f0  adrp x20, #0x7d2a000
0x06A2BC08: 885e5139  ldrb w8, [x20, #0x457]
0x06A2BC0C: f30300aa  mov x19, x0
0x06A2BC10: 28040037  tbnz w8, #0, #0x6a2bc94
0x06A2BC14: 20680090  adrp x0, #0x772f000
0x06A2BC18: 00cc40f9  ldr x0, [x0, #0x198]
0x06A2BC1C: 7f531d97  bl #0x3180a18
0x06A2BC20: 20680090  adrp x0, #0x772f000
0x06A2BC24: 00d040f9  ldr x0, [x0, #0x1a0]
0x06A2BC28: 7c531d97  bl #0x3180a18
0x06A2BC2C: 20680090  adrp x0, #0x772f000
0x06A2BC30: 00d440f9  ldr x0, [x0, #0x1a8]
0x06A2BC34: 79531d97  bl #0x3180a18
0x06A2BC38: c06500d0  adrp x0, #0x76e5000
0x06A2BC3C: 003046f9  ldr x0, [x0, #0xc60]
0x06A2BC40: 76531d97  bl #0x3180a18
0x06A2BC44: 20680090  adrp x0, #0x772f000
0x06A2BC48: 00d840f9  ldr x0, [x0, #0x1b0]
0x06A2BC4C: 73531d97  bl #0x3180a18
0x06A2BC50: 20680090  adrp x0, #0x772f000
0x06A2BC54: 00dc40f9  ldr x0, [x0, #0x1b8]
0x06A2BC58: 70531d97  bl #0x3180a18
0x06A2BC5C: 406200d0  adrp x0, #0x7675000
0x06A2BC60: 00ec40f9  ldr x0, [x0, #0x1d8]
0x06A2BC64: 6d531d97  bl #0x3180a18
0x06A2BC68: 20680090  adrp x0, #0x772f000
0x06A2BC6C: 00e040f9  ldr x0, [x0, #0x1c0]
0x06A2BC70: 6a531d97  bl #0x3180a18
0x06A2BC74: 20680090  adrp x0, #0x772f000
0x06A2BC78: 00e440f9  ldr x0, [x0, #0x1c8]
0x06A2BC7C: 67531d97  bl #0x3180a18
0x06A2BC80: 20680090  adrp x0, #0x772f000
0x06A2BC84: 00c040f9  ldr x0, [x0, #0x180]
0x06A2BC88: 64531d97  bl #0x3180a18
0x06A2BC8C: 28008052  movz w8, #0x1
0x06A2BC90: 885e1139  strb w8, [x20, #0x457]
0x06A2BC94: 37680090  adrp x23, #0x772f000
0x06A2BC98: 740e40f9  ldr x20, [x19, #0x18]
0x06A2BC9C: f7c240f9  ldr x23, [x23, #0x180]
0x06A2BCA0: 540500b4  cbz x20, #0x6a2bd48
0x06A2BCA4: e00240f9  ldr x0, [x23]
0x06A2BCA8: 08e040b9  ldr w8, [x0, #0xe0]
0x06A2BCAC: 68000035  cbnz w8, #0x6a2bcb8
0x06A2BCB0: b7531d97  bl #0x3180b8c
0x06A2BCB4: e00240f9  ldr x0, [x23]
0x06A2BCB8: 085c40f9  ldr x8, [x0, #0xb8]
0x06A2BCBC: 39680090  adrp x25, #0x772f000
0x06A2BCC0: d86500d0  adrp x24, #0x76e5000
0x06A2BCC4: 150d40f9  ldr x21, [x8, #0x18]
0x06A2BCC8: 39d340f9  ldr x25, [x25, #0x1a0]
0x06A2BCCC: 183346f9  ldr x24, [x24, #0xc60]
0x06A2BCD0: f50200b5  cbnz x21, #0x6a2bd2c
0x06A2BCD4: 08e040b9  ldr w8, [x0, #0xe0]
0x06A2BCD8: 68000035  cbnz w8, #0x6a2bce4
0x06A2BCDC: ac531d97  bl #0x3180b8c
0x06A2BCE0: e00240f9  ldr x0, [x23]
0x06A2BCE4: 29680090  adrp x9, #0x772f000
0x06A2BCE8: 085c40f9  ldr x8, [x0, #0xb8]
0x06A2BCEC: 29dd40f9  ldr x9, [x9, #0x1b8]
0x06A2BCF0: 160140f9  ldr x22, [x8]
0x06A2BCF4: 200140f9  ldr x0, [x9]
0x06A2BCF8: ea531d97  bl #0x3180ca0
0x06A2BCFC: 28680090  adrp x8, #0x772f000
0x06A2BD00: 08e140f9  ldr x8, [x8, #0x1c0]
0x06A2BD04: e10316aa  mov x1, x22
0x06A2BD08: e3031faa  mov x3, xzr
0x06A2BD0C: f50300aa  mov x21, x0
0x06A2BD10: 020140f9  ldr x2, [x8]
0x06A2BD14: 29aba097  bl #0x52569b8
0x06A2BD18: e80240f9  ldr x8, [x23]
0x06A2BD1C: e10315aa  mov x1, x21
0x06A2BD20: 005d40f9  ldr x0, [x8, #0xb8]
0x06A2BD24: 158c01f8  str x21, [x0, #0x18]!
0x06A2BD28: 27531d97  bl #0x31809c4
0x06A2BD2C: 220340f9  ldr x2, [x25]
0x06A2BD30: e00314aa  mov x0, x20
0x06A2BD34: e10315aa  mov x1, x21
0x06A2BD38: 57934897  bl #0x3c50a94
0x06A2BD3C: 010340f9  ldr x1, [x24]
0x06A2BD40: a4d04897  bl #0x3c5ffd0
0x06A2BD44: f40300aa  mov x20, x0
0x06A2BD48: 586200d0  adrp x24, #0x7675000
0x06A2BD4C: 730a40f9  ldr x19, [x19, #0x10]
0x06A2BD50: 18ef40f9  ldr x24, [x24, #0x1d8]
0x06A2BD54: 530500b4  cbz x19, #0x6a2bdfc
0x06A2BD58: e00240f9  ldr x0, [x23]
0x06A2BD5C: 08e040b9  ldr w8, [x0, #0xe0]
0x06A2BD60: 68000035  cbnz w8, #0x6a2bd6c
0x06A2BD64: 8a531d97  bl #0x3180b8c
0x06A2BD68: e00240f9  ldr x0, [x23]
0x06A2BD6C: 085c40f9  ldr x8, [x0, #0xb8]
0x06A2BD70: 3a680090  adrp x26, #0x772f000
0x06A2BD74: 39680090  adrp x25, #0x772f000
0x06A2BD78: 151140f9  ldr x21, [x8, #0x20]
0x06A2BD7C: 5acf40f9  ldr x26, [x26, #0x198]
0x06A2BD80: 39d740f9  ldr x25, [x25, #0x1a8]
0x06A2BD84: f50200b5  cbnz x21, #0x6a2bde0
0x06A2BD88: 08e040b9  ldr w8, [x0, #0xe0]
0x06A2BD8C: 68000035  cbnz w8, #0x6a2bd98
0x06A2BD90: 7f531d97  bl #0x3180b8c
0x06A2BD94: e00240f9  ldr x0, [x23]
0x06A2BD98: 29680090  adrp x9, #0x772f000
0x06A2BD9C: 085c40f9  ldr x8, [x0, #0xb8]
0x06A2BDA0: 29d940f9  ldr x9, [x9, #0x1b0]
0x06A2BDA4: 160140f9  ldr x22, [x8]
0x06A2BDA8: 200140f9  ldr x0, [x9]
0x06A2BDAC: bd531d97  bl #0x3180ca0
0x06A2BDB0: 28680090  adrp x8, #0x772f000
0x06A2BDB4: 08e540f9  ldr x8, [x8, #0x1c8]
0x06A2BDB8: e10316aa  mov x1, x22
0x06A2BDBC: e3031faa  mov x3, xzr
0x06A2BDC0: f50300aa  mov x21, x0
0x06A2BDC4: 020140f9  ldr x2, [x8]
0x06A2BDC8: fcaaa097  bl #0x52569b8
0x06A2BDCC: e80240f9  ldr x8, [x23]
0x06A2BDD0: e10315aa  mov x1, x21
0x06A2BDD4: 005d40f9  ldr x0, [x8, #0xb8]
0x06A2BDD8: 150c02f8  str x21, [x0, #0x20]!
0x06A2BDDC: fa521d97  bl #0x31809c4
0x06A2BDE0: 420340f9  ldr x2, [x26]
0x06A2BDE4: e00313aa  mov x0, x19
0x06A2BDE8: e10315aa  mov x1, x21
0x06A2BDEC: 2a934897  bl #0x3c50a94
0x06A2BDF0: 210340f9  ldr x1, [x25]
0x06A2BDF4: 77d04897  bl #0x3c5ffd0
0x06A2BDF8: f30300aa  mov x19, x0
0x06A2BDFC: 000340f9  ldr x0, [x24]
0x06A2BE00: a8531d97  bl #0x3180ca0
0x06A2BE04: e10314aa  mov x1, x20
0x06A2BE08: e20313aa  mov x2, x19
0x06A2BE0C: f50300aa  mov x21, x0
0x06A2BE10: 9ee3ff97  bl #0x6a24c88
0x06A2BE14: e00315aa  mov x0, x21
0x06A2BE18: f44f44a9  ldp x20, x19, [sp, #0x40]
0x06A2BE1C: f65743a9  ldp x22, x21, [sp, #0x30]
0x06A2BE20: f85f42a9  ldp x24, x23, [sp, #0x20]
0x06A2BE24: fa6741a9  ldp x26, x25, [sp, #0x10]
0x06A2BE28: fe0745f8  ldr x30, [sp], #0x50
0x06A2BE2C: c0035fd6  ret

; RVA 0x6A2BE30 | public Reward CloneExcludingAmountType(RewardAmountType typeToExclude) { }
; bytes=856 sha256=49f7b8c397c1550b4853ee3aef53d270ba1d684f9137cd431c7be9ce0c088521 status=arm64_complete_bound indexed_start=True
0x06A2BE30: fe0f1bf8  str x30, [sp, #-0x50]!
0x06A2BE34: fa6701a9  stp x26, x25, [sp, #0x10]
0x06A2BE38: f85f02a9  stp x24, x23, [sp, #0x20]
0x06A2BE3C: f65703a9  stp x22, x21, [sp, #0x30]
0x06A2BE40: f44f04a9  stp x20, x19, [sp, #0x40]
0x06A2BE44: f59700f0  adrp x21, #0x7d2a000
0x06A2BE48: 36680090  adrp x22, #0x772f000
0x06A2BE4C: a8625139  ldrb w8, [x21, #0x458]
0x06A2BE50: d6ea40f9  ldr x22, [x22, #0x1d0]
0x06A2BE54: f303012a  mov w19, w1
0x06A2BE58: f40300aa  mov x20, x0
0x06A2BE5C: c8060037  tbnz w8, #0, #0x6a2bf34
0x06A2BE60: 20680090  adrp x0, #0x772f000
0x06A2BE64: 00cc40f9  ldr x0, [x0, #0x198]
0x06A2BE68: ec521d97  bl #0x3180a18
0x06A2BE6C: 20680090  adrp x0, #0x772f000
0x06A2BE70: 00d040f9  ldr x0, [x0, #0x1a0]
0x06A2BE74: e9521d97  bl #0x3180a18
0x06A2BE78: 20680090  adrp x0, #0x772f000
0x06A2BE7C: 00d440f9  ldr x0, [x0, #0x1a8]
0x06A2BE80: e6521d97  bl #0x3180a18
0x06A2BE84: c06500d0  adrp x0, #0x76e5000
0x06A2BE88: 003046f9  ldr x0, [x0, #0xc60]
0x06A2BE8C: e3521d97  bl #0x3180a18
0x06A2BE90: 806500b0  adrp x0, #0x76dc000
0x06A2BE94: 001041f9  ldr x0, [x0, #0x220]
0x06A2BE98: e0521d97  bl #0x3180a18
0x06A2BE9C: 606500d0  adrp x0, #0x76d9000
0x06A2BEA0: 00ac43f9  ldr x0, [x0, #0x758]
0x06A2BEA4: dd521d97  bl #0x3180a18
0x06A2BEA8: 206200d0  adrp x0, #0x7671000
0x06A2BEAC: 00bc43f9  ldr x0, [x0, #0x778]
0x06A2BEB0: da521d97  bl #0x3180a18
0x06A2BEB4: 20680090  adrp x0, #0x772f000
0x06A2BEB8: 00d840f9  ldr x0, [x0, #0x1b0]
0x06A2BEBC: d7521d97  bl #0x3180a18
0x06A2BEC0: 20680090  adrp x0, #0x772f000
0x06A2BEC4: 00dc40f9  ldr x0, [x0, #0x1b8]
0x06A2BEC8: d4521d97  bl #0x3180a18
0x06A2BECC: 806500b0  adrp x0, #0x76dc000
0x06A2BED0: 001441f9  ldr x0, [x0, #0x228]
0x06A2BED4: d1521d97  bl #0x3180a18
0x06A2BED8: 406200d0  adrp x0, #0x7675000
0x06A2BEDC: 00ec40f9  ldr x0, [x0, #0x1d8]
0x06A2BEE0: ce521d97  bl #0x3180a18
0x06A2BEE4: 20680090  adrp x0, #0x772f000
0x06A2BEE8: 00ec40f9  ldr x0, [x0, #0x1d8]
0x06A2BEEC: cb521d97  bl #0x3180a18
0x06A2BEF0: 20680090  adrp x0, #0x772f000
0x06A2BEF4: 00f040f9  ldr x0, [x0, #0x1e0]
0x06A2BEF8: c8521d97  bl #0x3180a18
0x06A2BEFC: 20680090  adrp x0, #0x772f000
0x06A2BF00: 00f440f9  ldr x0, [x0, #0x1e8]
0x06A2BF04: c5521d97  bl #0x3180a18
0x06A2BF08: 20680090  adrp x0, #0x772f000
0x06A2BF0C: 00f840f9  ldr x0, [x0, #0x1f0]
0x06A2BF10: c2521d97  bl #0x3180a18
0x06A2BF14: 20680090  adrp x0, #0x772f000
0x06A2BF18: 00e840f9  ldr x0, [x0, #0x1d0]
0x06A2BF1C: bf521d97  bl #0x3180a18
0x06A2BF20: 20680090  adrp x0, #0x772f000
0x06A2BF24: 00c040f9  ldr x0, [x0, #0x180]
0x06A2BF28: bc521d97  bl #0x3180a18
0x06A2BF2C: 28008052  movz w8, #0x1
0x06A2BF30: a8621139  strb w8, [x21, #0x458]
0x06A2BF34: c00240f9  ldr x0, [x22]
0x06A2BF38: 5a531d97  bl #0x3180ca0
0x06A2BF3C: e1031faa  mov x1, xzr
0x06A2BF40: f50300aa  mov x21, x0
0x06A2BF44: aeb9b297  bl #0x56da5fc
0x06A2BF48: f51100b4  cbz x21, #0x6a2c184
0x06A2BF4C: b31200b9  str w19, [x21, #0x10]
0x06A2BF50: 930a40f9  ldr x19, [x20, #0x10]
0x06A2BF54: 730200b4  cbz x19, #0x6a2bfa0
0x06A2BF58: 886500b0  adrp x8, #0x76dc000
0x06A2BF5C: 081541f9  ldr x8, [x8, #0x228]
0x06A2BF60: 36680090  adrp x22, #0x772f000
0x06A2BF64: 976500b0  adrp x23, #0x76dc000
0x06A2BF68: 000140f9  ldr x0, [x8]
0x06A2BF6C: d6f640f9  ldr x22, [x22, #0x1e8]
0x06A2BF70: f71241f9  ldr x23, [x23, #0x220]
0x06A2BF74: 4b531d97  bl #0x3180ca0
0x06A2BF78: c20240f9  ldr x2, [x22]
0x06A2BF7C: e10315aa  mov x1, x21
0x06A2BF80: e3031faa  mov x3, xzr
0x06A2BF84: f60300aa  mov x22, x0
0x06A2BF88: 0da8a097  bl #0x5255fbc
0x06A2BF8C: e20240f9  ldr x2, [x23]
0x06A2BF90: e00313aa  mov x0, x19
0x06A2BF94: e10316aa  mov x1, x22
0x06A2BF98: c46c4997  bl #0x3c872a8
0x06A2BF9C: f30300aa  mov x19, x0
0x06A2BFA0: 37680090  adrp x23, #0x772f000
0x06A2BFA4: 940e40f9  ldr x20, [x20, #0x18]
0x06A2BFA8: f7c240f9  ldr x23, [x23, #0x180]
0x06A2BFAC: b40700b4  cbz x20, #0x6a2c0a0
0x06A2BFB0: 286200d0  adrp x8, #0x7671000
0x06A2BFB4: 08bd43f9  ldr x8, [x8, #0x778]
0x06A2BFB8: 36680090  adrp x22, #0x772f000
0x06A2BFBC: 786500d0  adrp x24, #0x76d9000
0x06A2BFC0: 000140f9  ldr x0, [x8]
0x06A2BFC4: d6fa40f9  ldr x22, [x22, #0x1f0]
0x06A2BFC8: 18af43f9  ldr x24, [x24, #0x758]
0x06A2BFCC: 35531d97  bl #0x3180ca0
0x06A2BFD0: c20240f9  ldr x2, [x22]
0x06A2BFD4: e10315aa  mov x1, x21
0x06A2BFD8: e3031faa  mov x3, xzr
0x06A2BFDC: f60300aa  mov x22, x0
0x06A2BFE0: f7a7a097  bl #0x5255fbc
0x06A2BFE4: 020340f9  ldr x2, [x24]
0x06A2BFE8: e00314aa  mov x0, x20
0x06A2BFEC: e10316aa  mov x1, x22
0x06A2BFF0: ae6c4997  bl #0x3c872a8
0x06A2BFF4: f40300aa  mov x20, x0
0x06A2BFF8: 400500b4  cbz x0, #0x6a2c0a0
0x06A2BFFC: e00240f9  ldr x0, [x23]
0x06A2C000: 08e040b9  ldr w8, [x0, #0xe0]
0x06A2C004: 68000035  cbnz w8, #0x6a2c010
0x06A2C008: e1521d97  bl #0x3180b8c
0x06A2C00C: e00240f9  ldr x0, [x23]
0x06A2C010: 085c40f9  ldr x8, [x0, #0xb8]
0x06A2C014: 151540f9  ldr x21, [x8, #0x28]
0x06A2C018: f50200b5  cbnz x21, #0x6a2c074
0x06A2C01C: 08e040b9  ldr w8, [x0, #0xe0]
0x06A2C020: 68000035  cbnz w8, #0x6a2c02c
0x06A2C024: da521d97  bl #0x3180b8c
0x06A2C028: e00240f9  ldr x0, [x23]
0x06A2C02C: 096800f0  adrp x9, #0x772f000
0x06A2C030: 085c40f9  ldr x8, [x0, #0xb8]
0x06A2C034: 29dd40f9  ldr x9, [x9, #0x1b8]
0x06A2C038: 160140f9  ldr x22, [x8]
0x06A2C03C: 200140f9  ldr x0, [x9]
0x06A2C040: 18531d97  bl #0x3180ca0
0x06A2C044: 086800f0  adrp x8, #0x772f000
0x06A2C048: 08ed40f9  ldr x8, [x8, #0x1d8]
0x06A2C04C: e10316aa  mov x1, x22
0x06A2C050: e3031faa  mov x3, xzr
0x06A2C054: f50300aa  mov x21, x0
0x06A2C058: 020140f9  ldr x2, [x8]
0x06A2C05C: 57aaa097  bl #0x52569b8
0x06A2C060: e80240f9  ldr x8, [x23]
0x06A2C064: e10315aa  mov x1, x21
0x06A2C068: 005d40f9  ldr x0, [x8, #0xb8]
0x06A2C06C: 158c02f8  str x21, [x0, #0x28]!
0x06A2C070: 55521d97  bl #0x31809c4
0x06A2C074: 086800f0  adrp x8, #0x772f000
0x06A2C078: 08d140f9  ldr x8, [x8, #0x1a0]
0x06A2C07C: e00314aa  mov x0, x20
0x06A2C080: e10315aa  mov x1, x21
0x06A2C084: 020140f9  ldr x2, [x8]
0x06A2C088: 83924897  bl #0x3c50a94
0x06A2C08C: c86500b0  adrp x8, #0x76e5000
0x06A2C090: 083146f9  ldr x8, [x8, #0xc60]
0x06A2C094: 010140f9  ldr x1, [x8]
0x06A2C098: cecf4897  bl #0x3c5ffd0
0x06A2C09C: f40300aa  mov x20, x0
0x06A2C0A0: 586200b0  adrp x24, #0x7675000
0x06A2C0A4: 18ef40f9  ldr x24, [x24, #0x1d8]
0x06A2C0A8: 530500b4  cbz x19, #0x6a2c150
0x06A2C0AC: e00240f9  ldr x0, [x23]
0x06A2C0B0: 08e040b9  ldr w8, [x0, #0xe0]
0x06A2C0B4: 68000035  cbnz w8, #0x6a2c0c0
0x06A2C0B8: b5521d97  bl #0x3180b8c
0x06A2C0BC: e00240f9  ldr x0, [x23]
0x06A2C0C0: 085c40f9  ldr x8, [x0, #0xb8]
0x06A2C0C4: 1a6800f0  adrp x26, #0x772f000
0x06A2C0C8: 196800f0  adrp x25, #0x772f000
0x06A2C0CC: 151940f9  ldr x21, [x8, #0x30]
0x06A2C0D0: 5acf40f9  ldr x26, [x26, #0x198]
0x06A2C0D4: 39d740f9  ldr x25, [x25, #0x1a8]
0x06A2C0D8: f50200b5  cbnz x21, #0x6a2c134
0x06A2C0DC: 08e040b9  ldr w8, [x0, #0xe0]
0x06A2C0E0: 68000035  cbnz w8, #0x6a2c0ec
0x06A2C0E4: aa521d97  bl #0x3180b8c
0x06A2C0E8: e00240f9  ldr x0, [x23]
0x06A2C0EC: 096800f0  adrp x9, #0x772f000
0x06A2C0F0: 085c40f9  ldr x8, [x0, #0xb8]
0x06A2C0F4: 29d940f9  ldr x9, [x9, #0x1b0]
0x06A2C0F8: 160140f9  ldr x22, [x8]
0x06A2C0FC: 200140f9  ldr x0, [x9]
0x06A2C100: e8521d97  bl #0x3180ca0
0x06A2C104: 086800f0  adrp x8, #0x772f000
0x06A2C108: 08f140f9  ldr x8, [x8, #0x1e0]
0x06A2C10C: e10316aa  mov x1, x22
0x06A2C110: e3031faa  mov x3, xzr
0x06A2C114: f50300aa  mov x21, x0
0x06A2C118: 020140f9  ldr x2, [x8]
0x06A2C11C: 27aaa097  bl #0x52569b8
0x06A2C120: e80240f9  ldr x8, [x23]
0x06A2C124: e10315aa  mov x1, x21
0x06A2C128: 005d40f9  ldr x0, [x8, #0xb8]
0x06A2C12C: 150c03f8  str x21, [x0, #0x30]!
0x06A2C130: 25521d97  bl #0x31809c4
0x06A2C134: 420340f9  ldr x2, [x26]
0x06A2C138: e00313aa  mov x0, x19
0x06A2C13C: e10315aa  mov x1, x21
0x06A2C140: 55924897  bl #0x3c50a94
0x06A2C144: 210340f9  ldr x1, [x25]
0x06A2C148: a2cf4897  bl #0x3c5ffd0
0x06A2C14C: f30300aa  mov x19, x0
0x06A2C150: 000340f9  ldr x0, [x24]
0x06A2C154: d3521d97  bl #0x3180ca0
0x06A2C158: e10314aa  mov x1, x20
0x06A2C15C: e20313aa  mov x2, x19
0x06A2C160: f50300aa  mov x21, x0
0x06A2C164: c9e2ff97  bl #0x6a24c88
0x06A2C168: e00315aa  mov x0, x21
0x06A2C16C: f44f44a9  ldp x20, x19, [sp, #0x40]
0x06A2C170: f65743a9  ldp x22, x21, [sp, #0x30]
0x06A2C174: f85f42a9  ldp x24, x23, [sp, #0x20]
0x06A2C178: fa6741a9  ldp x26, x25, [sp, #0x10]
0x06A2C17C: fe0745f8  ldr x30, [sp], #0x50
0x06A2C180: c0035fd6  ret
0x06A2C184: ca521d97  bl #0x3180cac

; RVA 0x6A2C190 | public bool get_IsEmpty() { }
; bytes=80 sha256=65663782ef2ca92685bcabeaf86299ff92862a7c753fa4101197e85289d4fb01 status=arm64_complete_bound indexed_start=True
0x06A2C190: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A2C194: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A2C198: f49700d0  adrp x20, #0x7d2a000
0x06A2C19C: 88665139  ldrb w8, [x20, #0x459]
0x06A2C1A0: f30300aa  mov x19, x0
0x06A2C1A4: c8000037  tbnz w8, #0, #0x6a2c1bc
0x06A2C1A8: a0620090  adrp x0, #0x7680000
0x06A2C1AC: 00e840f9  ldr x0, [x0, #0x1d0]
0x06A2C1B0: 1a521d97  bl #0x3180a18
0x06A2C1B4: 28008052  movz w8, #0x1
0x06A2C1B8: 88661139  strb w8, [x20, #0x459]
0x06A2C1BC: 680e40f9  ldr x8, [x19, #0x18]
0x06A2C1C0: e80000b4  cbz x8, #0x6a2c1dc
0x06A2C1C4: 081940b9  ldr w8, [x8, #0x18]
0x06A2C1C8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A2C1CC: 1f010071  cmp w8, #0
0x06A2C1D0: e0179f1a  cset w0, eq
0x06A2C1D4: fe0742f8  ldr x30, [sp], #0x20
0x06A2C1D8: c0035fd6  ret
0x06A2C1DC: b4521d97  bl #0x3180cac

; RVA 0x6A2C1E0 | public override bool Equals(object obj) { }
; bytes=128 sha256=6f4f9dae020cbb468a7ade88e9493abdd66d2ea5872ae5f7b85a035c8394c65e status=arm64_complete_bound indexed_start=True
0x06A2C1E0: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A2C1E4: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A2C1E8: f59700d0  adrp x21, #0x7d2a000
0x06A2C1EC: a86a5139  ldrb w8, [x21, #0x45a]
0x06A2C1F0: f40301aa  mov x20, x1
0x06A2C1F4: f30300aa  mov x19, x0
0x06A2C1F8: c8000037  tbnz w8, #0, #0x6a2c210
0x06A2C1FC: 406200b0  adrp x0, #0x7675000
0x06A2C200: 00ec40f9  ldr x0, [x0, #0x1d8]
0x06A2C204: 05521d97  bl #0x3180a18
0x06A2C208: 28008052  movz w8, #0x1
0x06A2C20C: a86a1139  strb w8, [x21, #0x45a]
0x06A2C210: 340100b4  cbz x20, #0x6a2c234
0x06A2C214: 486200b0  adrp x8, #0x7675000
0x06A2C218: 08ed40f9  ldr x8, [x8, #0x1d8]
0x06A2C21C: 890240f9  ldr x9, [x20]
0x06A2C220: 080140f9  ldr x8, [x8]
0x06A2C224: 2bc14439  ldrb w11, [x9, #0x130]
0x06A2C228: 0ac14439  ldrb w10, [x8, #0x130]
0x06A2C22C: 7f010a6b  cmp w11, w10
0x06A2C230: 62000054  b.hs #0x6a2c23c
0x06A2C234: e1031faa  mov x1, xzr
0x06A2C238: 06000014  b #0x6a2c250
0x06A2C23C: 296540f9  ldr x9, [x9, #0xc8]
0x06A2C240: 290d0a8b  add x9, x9, x10, lsl #3
0x06A2C244: 29815ff8  ldur x9, [x9, #-8]
0x06A2C248: 3f0108eb  cmp x9, x8
0x06A2C24C: 81029f9a  csel x1, x20, xzr, eq
0x06A2C250: e00313aa  mov x0, x19
0x06A2C254: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A2C258: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A2C25C: 5cefff17  b #0x6a27fcc

; RVA 0x6A27FCC | public bool Equals(Reward otherReward) { }
; bytes=196 sha256=2ed96ac7faba083262df536d8808edb5e1e705f1303943469f994ecce11a3ce0 status=arm64_complete_bound indexed_start=True
0x06A27FCC: fe0f1df8  str x30, [sp, #-0x30]!
0x06A27FD0: f65701a9  stp x22, x21, [sp, #0x10]
0x06A27FD4: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A27FD8: 159800f0  adrp x21, #0x7d2a000
0x06A27FDC: a86e5139  ldrb w8, [x21, #0x45b]
0x06A27FE0: f30301aa  mov x19, x1
0x06A27FE4: f40300aa  mov x20, x0
0x06A27FE8: c8000037  tbnz w8, #0, #0x6a28000
0x06A27FEC: 206100f0  adrp x0, #0x764e000
0x06A27FF0: 00ac42f9  ldr x0, [x0, #0x558]
0x06A27FF4: 89621d97  bl #0x3180a18
0x06A27FF8: 28008052  movz w8, #0x1
0x06A27FFC: a86e1139  strb w8, [x21, #0x45b]
0x06A28000: b30200b4  cbz x19, #0x6a28054
0x06A28004: 366100d0  adrp x22, #0x764e000
0x06A28008: d6ae42f9  ldr x22, [x22, #0x558]
0x06A2800C: e00314aa  mov x0, x20
0x06A28010: e1031faa  mov x1, xzr
0x06A28014: 6ccbb297  bl #0x56dadc4
0x06A28018: f50300aa  mov x21, x0
0x06A2801C: e00313aa  mov x0, x19
0x06A28020: e1031faa  mov x1, xzr
0x06A28024: 68cbb297  bl #0x56dadc4
0x06A28028: c80240f9  ldr x8, [x22]
0x06A2802C: f60300aa  mov x22, x0
0x06A28030: 09e140b9  ldr w9, [x8, #0xe0]
0x06A28034: 69000035  cbnz w9, #0x6a28040
0x06A28038: e00308aa  mov x0, x8
0x06A2803C: d4621d97  bl #0x3180b8c
0x06A28040: e00315aa  mov x0, x21
0x06A28044: e10316aa  mov x1, x22
0x06A28048: e2031faa  mov x2, xzr
0x06A2804C: fc1eb297  bl #0x56afc3c
0x06A28050: c0000036  tbz w0, #0, #0x6a28068
0x06A28054: e0031f2a  mov w0, wzr
0x06A28058: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A2805C: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A28060: fe0743f8  ldr x30, [sp], #0x30
0x06A28064: c0035fd6  ret
0x06A28068: 9f0213eb  cmp x20, x19
0x06A2806C: e0000054  b.eq #0x6a28088
0x06A28070: e00314aa  mov x0, x20
0x06A28074: e10313aa  mov x1, x19
0x06A28078: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A2807C: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A28080: fe0743f8  ldr x30, [sp], #0x30
0x06A28084: 77100014  b #0x6a2c260
0x06A28088: 20008052  movz w0, #0x1
0x06A2808C: f3ffff17  b #0x6a28058

; RVA 0x6A2C260 | private bool IsSameOrderRewards(Reward otherReward) { }
; bytes=372 sha256=ac0994d291f5e968a74b5bf1b6c42a60c370fdb68667e73e28d6b365a8c934e1 status=arm64_complete_bound indexed_start=True
0x06A2C260: fe0f1bf8  str x30, [sp, #-0x50]!
0x06A2C264: fa6701a9  stp x26, x25, [sp, #0x10]
0x06A2C268: f85f02a9  stp x24, x23, [sp, #0x20]
0x06A2C26C: f65703a9  stp x22, x21, [sp, #0x30]
0x06A2C270: f44f04a9  stp x20, x19, [sp, #0x40]
0x06A2C274: f59700d0  adrp x21, #0x7d2a000
0x06A2C278: a8725139  ldrb w8, [x21, #0x45c]
0x06A2C27C: f30301aa  mov x19, x1
0x06A2C280: f40300aa  mov x20, x0
0x06A2C284: 88010037  tbnz w8, #0, #0x6a2c2b4
0x06A2C288: 806200f0  adrp x0, #0x767f000
0x06A2C28C: 004c44f9  ldr x0, [x0, #0x898]
0x06A2C290: e2511d97  bl #0x3180a18
0x06A2C294: a0620090  adrp x0, #0x7680000
0x06A2C298: 00e840f9  ldr x0, [x0, #0x1d0]
0x06A2C29C: df511d97  bl #0x3180a18
0x06A2C2A0: a0620090  adrp x0, #0x7680000
0x06A2C2A4: 00ec40f9  ldr x0, [x0, #0x1d8]
0x06A2C2A8: dc511d97  bl #0x3180a18
0x06A2C2AC: 28008052  movz w8, #0x1
0x06A2C2B0: a8721139  strb w8, [x21, #0x45c]
0x06A2C2B4: 800e40f9  ldr x0, [x20, #0x18]
0x06A2C2B8: c00800b4  cbz x0, #0x6a2c3d0
0x06A2C2BC: b30800b4  cbz x19, #0x6a2c3d0
0x06A2C2C0: 690e40f9  ldr x9, [x19, #0x18]
0x06A2C2C4: 690800b4  cbz x9, #0x6a2c3d0
0x06A2C2C8: 081840b9  ldr w8, [x0, #0x18]
0x06A2C2CC: 291940b9  ldr w9, [x9, #0x18]
0x06A2C2D0: 1f01096b  cmp w8, w9
0x06A2C2D4: e1060054  b.ne #0x6a2c3b0
0x06A2C2D8: 1f010071  cmp w8, #0
0x06A2C2DC: f8d79f1a  cset w24, gt
0x06A2C2E0: 1f050071  cmp w8, #1
0x06A2C2E4: 2b060054  b.lt #0x6a2c3a8
0x06A2C2E8: b9620090  adrp x25, #0x7680000
0x06A2C2EC: 9a6200f0  adrp x26, #0x767f000
0x06A2C2F0: 39ef40f9  ldr x25, [x25, #0x1d8]
0x06A2C2F4: 5a4f44f9  ldr x26, [x26, #0x898]
0x06A2C2F8: f5031f2a  mov w21, wzr
0x06A2C2FC: 220340f9  ldr x2, [x25]
0x06A2C300: e103152a  mov w1, w21
0x06A2C304: a65f5897  bl #0x404419c
0x06A2C308: 680e40f9  ldr x8, [x19, #0x18]
0x06A2C30C: 280600b4  cbz x8, #0x6a2c3d0
0x06A2C310: 220340f9  ldr x2, [x25]
0x06A2C314: f60300aa  mov x22, x0
0x06A2C318: e00308aa  mov x0, x8
0x06A2C31C: e103152a  mov w1, w21
0x06A2C320: 9f5f5897  bl #0x404419c
0x06A2C324: 760500b4  cbz x22, #0x6a2c3d0
0x06A2C328: c80240f9  ldr x8, [x22]
0x06A2C32C: 410340f9  ldr x1, [x26]
0x06A2C330: f70300aa  mov x23, x0
0x06A2C334: 095d4279  ldrh w9, [x8, #0x12e]
0x06A2C338: 290100b4  cbz x9, #0x6a2c35c
0x06A2C33C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A2C340: 4a210091  add x10, x10, #8
0x06A2C344: 4b815ff8  ldur x11, [x10, #-8]
0x06A2C348: 7f0101eb  cmp x11, x1
0x06A2C34C: 00010054  b.eq #0x6a2c36c
0x06A2C350: 290500f1  subs x9, x9, #1
0x06A2C354: 4a410091  add x10, x10, #0x10
0x06A2C358: 61ffff54  b.ne #0x6a2c344
0x06A2C35C: e00316aa  mov x0, x22
0x06A2C360: e2031f2a  mov w2, wzr
0x06A2C364: eba91c97  bl #0x3156b10
0x06A2C368: 04000014  b #0x6a2c378
0x06A2C36C: 490180b9  ldrsw x9, [x10]
0x06A2C370: 0811098b  add x8, x8, x9, lsl #4
0x06A2C374: 00e10491  add x0, x8, #0x138
0x06A2C378: 080840a9  ldp x8, x2, [x0]
0x06A2C37C: e00316aa  mov x0, x22
0x06A2C380: e10317aa  mov x1, x23
0x06A2C384: 00013fd6  blr x8
0x06A2C388: 00010036  tbz w0, #0, #0x6a2c3a8
0x06A2C38C: 800e40f9  ldr x0, [x20, #0x18]
0x06A2C390: 000200b4  cbz x0, #0x6a2c3d0
0x06A2C394: 081840b9  ldr w8, [x0, #0x18]
0x06A2C398: b5060011  add w21, w21, #1
0x06A2C39C: bf02086b  cmp w21, w8
0x06A2C3A0: f8a79f1a  cset w24, lt
0x06A2C3A4: cbfaff54  b.lt #0x6a2c2fc
0x06A2C3A8: 08030052  eor w8, w24, #1
0x06A2C3AC: 02000014  b #0x6a2c3b4
0x06A2C3B0: e8031f2a  mov w8, wzr
0x06A2C3B4: f44f44a9  ldp x20, x19, [sp, #0x40]
0x06A2C3B8: f65743a9  ldp x22, x21, [sp, #0x30]
0x06A2C3BC: f85f42a9  ldp x24, x23, [sp, #0x20]
0x06A2C3C0: fa6741a9  ldp x26, x25, [sp, #0x10]
0x06A2C3C4: 00010012  and w0, w8, #1
0x06A2C3C8: fe0745f8  ldr x30, [sp], #0x50
0x06A2C3CC: c0035fd6  ret
0x06A2C3D0: 37521d97  bl #0x3180cac

; RVA 0x6A2C3D4 | public IReadOnlyList<PortalItem> GetGroupedPortalItems() { }
; bytes=1716 sha256=0e9ed9b019af5f5b486ad9f48b767794c1a198e2455c68bd6c4e900c4933e57d status=arm64_complete_bound indexed_start=True
0x06A2C3D4: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x06A2C3D8: fc6f01a9  stp x28, x27, [sp, #0x10]
0x06A2C3DC: fa6702a9  stp x26, x25, [sp, #0x20]
0x06A2C3E0: f85f03a9  stp x24, x23, [sp, #0x30]
0x06A2C3E4: f65704a9  stp x22, x21, [sp, #0x40]
0x06A2C3E8: f44f05a9  stp x20, x19, [sp, #0x50]
0x06A2C3EC: f59700d0  adrp x21, #0x7d2a000
0x06A2C3F0: 166800f0  adrp x22, #0x772f000
0x06A2C3F4: 136800f0  adrp x19, #0x772f000
0x06A2C3F8: 1a6800f0  adrp x26, #0x772f000
0x06A2C3FC: a8765139  ldrb w8, [x21, #0x45d]
0x06A2C400: d6fe40f9  ldr x22, [x22, #0x1f8]
0x06A2C404: 730241f9  ldr x19, [x19, #0x200]
0x06A2C408: 5ac340f9  ldr x26, [x26, #0x180]
0x06A2C40C: f40300aa  mov x20, x0
0x06A2C410: 68060037  tbnz w8, #0, #0x6a2c4dc
0x06A2C414: 606500b0  adrp x0, #0x76d9000
0x06A2C418: 005043f9  ldr x0, [x0, #0x6a0]
0x06A2C41C: 7f511d97  bl #0x3180a18
0x06A2C420: 606500b0  adrp x0, #0x76d9000
0x06A2C424: 000444f9  ldr x0, [x0, #0x808]
0x06A2C428: 7c511d97  bl #0x3180a18
0x06A2C42C: 606500b0  adrp x0, #0x76d9000
0x06A2C430: 000044f9  ldr x0, [x0, #0x800]
0x06A2C434: 79511d97  bl #0x3180a18
0x06A2C438: 606500b0  adrp x0, #0x76d9000
0x06A2C43C: 000844f9  ldr x0, [x0, #0x810]
0x06A2C440: 76511d97  bl #0x3180a18
0x06A2C444: 606500b0  adrp x0, #0x76d9000
0x06A2C448: 005c43f9  ldr x0, [x0, #0x6b8]
0x06A2C44C: 73511d97  bl #0x3180a18
0x06A2C450: 006100d0  adrp x0, #0x764e000
0x06A2C454: 006444f9  ldr x0, [x0, #0x8c8]
0x06A2C458: 70511d97  bl #0x3180a18
0x06A2C45C: 006800f0  adrp x0, #0x772f000
0x06A2C460: 000441f9  ldr x0, [x0, #0x208]
0x06A2C464: 6d511d97  bl #0x3180a18
0x06A2C468: 006800f0  adrp x0, #0x772f000
0x06A2C46C: 000841f9  ldr x0, [x0, #0x210]
0x06A2C470: 6a511d97  bl #0x3180a18
0x06A2C474: 006100d0  adrp x0, #0x764e000
0x06A2C478: 007044f9  ldr x0, [x0, #0x8e0]
0x06A2C47C: 67511d97  bl #0x3180a18
0x06A2C480: 006800f0  adrp x0, #0x772f000
0x06A2C484: 000c41f9  ldr x0, [x0, #0x218]
0x06A2C488: 64511d97  bl #0x3180a18
0x06A2C48C: 006800f0  adrp x0, #0x772f000
0x06A2C490: 000041f9  ldr x0, [x0, #0x200]
0x06A2C494: 61511d97  bl #0x3180a18
0x06A2C498: 006800f0  adrp x0, #0x772f000
0x06A2C49C: 00fc40f9  ldr x0, [x0, #0x1f8]
0x06A2C4A0: 5e511d97  bl #0x3180a18
0x06A2C4A4: a06400b0  adrp x0, #0x76c1000
0x06A2C4A8: 003047f9  ldr x0, [x0, #0xe60]
0x06A2C4AC: 5b511d97  bl #0x3180a18
0x06A2C4B0: 006800f0  adrp x0, #0x772f000
0x06A2C4B4: 001041f9  ldr x0, [x0, #0x220]
0x06A2C4B8: 58511d97  bl #0x3180a18
0x06A2C4BC: 006800f0  adrp x0, #0x772f000
0x06A2C4C0: 001441f9  ldr x0, [x0, #0x228]
0x06A2C4C4: 55511d97  bl #0x3180a18
0x06A2C4C8: 006800f0  adrp x0, #0x772f000
0x06A2C4CC: 00c040f9  ldr x0, [x0, #0x180]
0x06A2C4D0: 52511d97  bl #0x3180a18
0x06A2C4D4: 28008052  movz w8, #0x1
0x06A2C4D8: a8761139  strb w8, [x21, #0x45d]
0x06A2C4DC: c00240f9  ldr x0, [x22]
0x06A2C4E0: f0511d97  bl #0x3180ca0
0x06A2C4E4: 610240f9  ldr x1, [x19]
0x06A2C4E8: f30300aa  mov x19, x0
0x06A2C4EC: d35d5897  bl #0x4043c38
0x06A2C4F0: e00314aa  mov x0, x20
0x06A2C4F4: f0f9ff97  bl #0x6a2acb4
0x06A2C4F8: 480340f9  ldr x8, [x26]
0x06A2C4FC: f40300aa  mov x20, x0
0x06A2C500: 09e140b9  ldr w9, [x8, #0xe0]
0x06A2C504: 89000035  cbnz w9, #0x6a2c514
0x06A2C508: e00308aa  mov x0, x8
0x06A2C50C: a0511d97  bl #0x3180b8c
0x06A2C510: 480340f9  ldr x8, [x26]
0x06A2C514: 095d40f9  ldr x9, [x8, #0xb8]
0x06A2C518: 776500b0  adrp x23, #0x76d9000
0x06A2C51C: 351d40f9  ldr x21, [x9, #0x38]
0x06A2C520: f75243f9  ldr x23, [x23, #0x6a0]
0x06A2C524: 150300b5  cbnz x21, #0x6a2c584
0x06A2C528: 09e140b9  ldr w9, [x8, #0xe0]
0x06A2C52C: 89000035  cbnz w9, #0x6a2c53c
0x06A2C530: e00308aa  mov x0, x8
0x06A2C534: 96511d97  bl #0x3180b8c
0x06A2C538: 480340f9  ldr x8, [x26]
0x06A2C53C: 696500b0  adrp x9, #0x76d9000
0x06A2C540: 085d40f9  ldr x8, [x8, #0xb8]
0x06A2C544: 295d43f9  ldr x9, [x9, #0x6b8]
0x06A2C548: 160140f9  ldr x22, [x8]
0x06A2C54C: 200140f9  ldr x0, [x9]
0x06A2C550: d4511d97  bl #0x3180ca0
0x06A2C554: 086800f0  adrp x8, #0x772f000
0x06A2C558: 081141f9  ldr x8, [x8, #0x220]
0x06A2C55C: e10316aa  mov x1, x22
0x06A2C560: e3031faa  mov x3, xzr
0x06A2C564: f50300aa  mov x21, x0
0x06A2C568: 020140f9  ldr x2, [x8]
0x06A2C56C: 13a9a097  bl #0x52569b8
0x06A2C570: 480340f9  ldr x8, [x26]
0x06A2C574: e10315aa  mov x1, x21
0x06A2C578: 005d40f9  ldr x0, [x8, #0xb8]
0x06A2C57C: 158c03f8  str x21, [x0, #0x38]!
0x06A2C580: 11511d97  bl #0x31809c4
0x06A2C584: e20240f9  ldr x2, [x23]
0x06A2C588: e00314aa  mov x0, x20
0x06A2C58C: e10315aa  mov x1, x21
0x06A2C590: 7c654897  bl #0x3c45b80
0x06A2C594: e01f00b4  cbz x0, #0x6a2c990
0x06A2C598: 0a6800f0  adrp x10, #0x772f000
0x06A2C59C: 080040f9  ldr x8, [x0]
0x06A2C5A0: 4a0541f9  ldr x10, [x10, #0x208]
0x06A2C5A4: f40300aa  mov x20, x0
0x06A2C5A8: 095d4279  ldrh w9, [x8, #0x12e]
0x06A2C5AC: 410140f9  ldr x1, [x10]
0x06A2C5B0: 290100b4  cbz x9, #0x6a2c5d4
0x06A2C5B4: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A2C5B8: 4a210091  add x10, x10, #8
0x06A2C5BC: 4b815ff8  ldur x11, [x10, #-8]
0x06A2C5C0: 7f0101eb  cmp x11, x1
0x06A2C5C4: 00010054  b.eq #0x6a2c5e4
0x06A2C5C8: 290500f1  subs x9, x9, #1
0x06A2C5CC: 4a410091  add x10, x10, #0x10
0x06A2C5D0: 61ffff54  b.ne #0x6a2c5bc
0x06A2C5D4: e00314aa  mov x0, x20
0x06A2C5D8: e2031f2a  mov w2, wzr
0x06A2C5DC: 4da91c97  bl #0x3156b10
0x06A2C5E0: 04000014  b #0x6a2c5f0
0x06A2C5E4: 490180b9  ldrsw x9, [x10]
0x06A2C5E8: 0811098b  add x8, x8, x9, lsl #4
0x06A2C5EC: 00e10491  add x0, x8, #0x138
0x06A2C5F0: 080440a9  ldp x8, x1, [x0]
0x06A2C5F4: e00314aa  mov x0, x20
0x06A2C5F8: 00013fd6  blr x8
0x06A2C5FC: f40300aa  mov x20, x0
0x06A2C600: a01c00b4  cbz x0, #0x6a2c994
0x06A2C604: 1b6100d0  adrp x27, #0x764e000
0x06A2C608: 186800f0  adrp x24, #0x772f000
0x06A2C60C: b96400b0  adrp x25, #0x76c1000
0x06A2C610: 7c6500b0  adrp x28, #0x76d9000
0x06A2C614: 1d6800f0  adrp x29, #0x772f000
0x06A2C618: 7b7344f9  ldr x27, [x27, #0x8e0]
0x06A2C61C: 180b41f9  ldr x24, [x24, #0x210]
0x06A2C620: 393347f9  ldr x25, [x25, #0xe60]
0x06A2C624: 9c0744f9  ldr x28, [x28, #0x808]
0x06A2C628: bd0f41f9  ldr x29, [x29, #0x218]
0x06A2C62C: 880240f9  ldr x8, [x20]
0x06A2C630: 610340f9  ldr x1, [x27]
0x06A2C634: 095d4279  ldrh w9, [x8, #0x12e]
0x06A2C638: 290100b4  cbz x9, #0x6a2c65c
0x06A2C63C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A2C640: 4a210091  add x10, x10, #8
0x06A2C644: 4b815ff8  ldur x11, [x10, #-8]
0x06A2C648: 7f0101eb  cmp x11, x1
0x06A2C64C: 00010054  b.eq #0x6a2c66c
0x06A2C650: 290500f1  subs x9, x9, #1
0x06A2C654: 4a410091  add x10, x10, #0x10
0x06A2C658: 61ffff54  b.ne #0x6a2c644
0x06A2C65C: e00314aa  mov x0, x20
0x06A2C660: e2031f2a  mov w2, wzr
0x06A2C664: 2ba91c97  bl #0x3156b10
0x06A2C668: 04000014  b #0x6a2c678
0x06A2C66C: 490180b9  ldrsw x9, [x10]
0x06A2C670: 0811098b  add x8, x8, x9, lsl #4
0x06A2C674: 00e10491  add x0, x8, #0x138
0x06A2C678: 080440a9  ldp x8, x1, [x0]
0x06A2C67C: e00314aa  mov x0, x20
0x06A2C680: 00013fd6  blr x8
0x06A2C684: 80120036  tbz w0, #0, #0x6a2c8d4
0x06A2C688: 880240f9  ldr x8, [x20]
0x06A2C68C: 010340f9  ldr x1, [x24]
0x06A2C690: 095d4279  ldrh w9, [x8, #0x12e]
0x06A2C694: 290100b4  cbz x9, #0x6a2c6b8
0x06A2C698: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A2C69C: 4a210091  add x10, x10, #8
0x06A2C6A0: 4b815ff8  ldur x11, [x10, #-8]
0x06A2C6A4: 7f0101eb  cmp x11, x1
0x06A2C6A8: 00010054  b.eq #0x6a2c6c8
0x06A2C6AC: 290500f1  subs x9, x9, #1
0x06A2C6B0: 4a410091  add x10, x10, #0x10
0x06A2C6B4: 61ffff54  b.ne #0x6a2c6a0
0x06A2C6B8: e00314aa  mov x0, x20
0x06A2C6BC: e2031f2a  mov w2, wzr
0x06A2C6C0: 14a91c97  bl #0x3156b10
0x06A2C6C4: 04000014  b #0x6a2c6d4
0x06A2C6C8: 490180b9  ldrsw x9, [x10]
0x06A2C6CC: 0811098b  add x8, x8, x9, lsl #4
0x06A2C6D0: 00e10491  add x0, x8, #0x138
0x06A2C6D4: 080440a9  ldp x8, x1, [x0]
0x06A2C6D8: e00314aa  mov x0, x20
0x06A2C6DC: 00013fd6  blr x8
0x06A2C6E0: 686500b0  adrp x8, #0x76d9000
0x06A2C6E4: 080144f9  ldr x8, [x8, #0x800]
0x06A2C6E8: 010140f9  ldr x1, [x8]
0x06A2C6EC: 7bbc4897  bl #0x3c5b8d8
0x06A2C6F0: f50300aa  mov x21, x0
0x06A2C6F4: c01300b4  cbz x0, #0x6a2c96c
0x06A2C6F8: a81a40b9  ldr w8, [x21, #0x18]
0x06A2C6FC: a8130034  cbz w8, #0x6a2c970
0x06A2C700: a01240f9  ldr x0, [x21, #0x20]
0x06A2C704: 001300b4  cbz x0, #0x6a2c964
0x06A2C708: 080040f9  ldr x8, [x0]
0x06A2C70C: 01d141f9  ldr x1, [x8, #0x3a0]
0x06A2C710: 09cd41f9  ldr x9, [x8, #0x398]
0x06A2C714: 20013fd6  blr x9
0x06A2C718: f60300aa  mov x22, x0
0x06A2C71C: 400340f9  ldr x0, [x26]
0x06A2C720: 08e040b9  ldr w8, [x0, #0xe0]
0x06A2C724: 68000035  cbnz w8, #0x6a2c730
0x06A2C728: 19511d97  bl #0x3180b8c
0x06A2C72C: 400340f9  ldr x0, [x26]
0x06A2C730: 085c40f9  ldr x8, [x0, #0xb8]
0x06A2C734: 210340f9  ldr x1, [x25]
0x06A2C738: 172140f9  ldr x23, [x8, #0x40]
0x06A2C73C: b70100b4  cbz x23, #0x6a2c770
0x06A2C740: f60500b4  cbz x22, #0x6a2c7fc
0x06A2C744: c80240f9  ldr x8, [x22]
0x06A2C748: 29c04439  ldrb w9, [x1, #0x130]
0x06A2C74C: 0ac14439  ldrb w10, [x8, #0x130]
0x06A2C750: 5f01096b  cmp w10, w9
0x06A2C754: 63110054  b.lo #0x6a2c980
0x06A2C758: 086540f9  ldr x8, [x8, #0xc8]
0x06A2C75C: 080d098b  add x8, x8, x9, lsl #3
0x06A2C760: 08815ff8  ldur x8, [x8, #-8]
0x06A2C764: 1f0101eb  cmp x8, x1
0x06A2C768: a0040054  b.eq #0x6a2c7fc
0x06A2C76C: 85000014  b #0x6a2c980
0x06A2C770: 760100b4  cbz x22, #0x6a2c79c
0x06A2C774: c80240f9  ldr x8, [x22]
0x06A2C778: 29c04439  ldrb w9, [x1, #0x130]
0x06A2C77C: 0ac14439  ldrb w10, [x8, #0x130]
0x06A2C780: 5f01096b  cmp w10, w9
0x06A2C784: 23100054  b.lo #0x6a2c988
0x06A2C788: 086540f9  ldr x8, [x8, #0xc8]
0x06A2C78C: 080d098b  add x8, x8, x9, lsl #3
0x06A2C790: 08815ff8  ldur x8, [x8, #-8]
0x06A2C794: 1f0101eb  cmp x8, x1
0x06A2C798: 810f0054  b.ne #0x6a2c988
0x06A2C79C: 08e040b9  ldr w8, [x0, #0xe0]
0x06A2C7A0: 68000035  cbnz w8, #0x6a2c7ac
0x06A2C7A4: fa501d97  bl #0x3180b8c
0x06A2C7A8: 400340f9  ldr x0, [x26]
0x06A2C7AC: 085c40f9  ldr x8, [x0, #0xb8]
0x06A2C7B0: 180140f9  ldr x24, [x8]
0x06A2C7B4: 686500b0  adrp x8, #0x76d9000
0x06A2C7B8: 080944f9  ldr x8, [x8, #0x810]
0x06A2C7BC: 000140f9  ldr x0, [x8]
0x06A2C7C0: 38511d97  bl #0x3180ca0
0x06A2C7C4: 086800f0  adrp x8, #0x772f000
0x06A2C7C8: 081541f9  ldr x8, [x8, #0x228]
0x06A2C7CC: f70300aa  mov x23, x0
0x06A2C7D0: 020140f9  ldr x2, [x8]
0x06A2C7D4: e10318aa  mov x1, x24
0x06A2C7D8: e3031faa  mov x3, xzr
0x06A2C7DC: a2a7a097  bl #0x5256664
0x06A2C7E0: 480340f9  ldr x8, [x26]
0x06A2C7E4: 005d40f9  ldr x0, [x8, #0xb8]
0x06A2C7E8: 170c04f8  str x23, [x0, #0x40]!
0x06A2C7EC: e10317aa  mov x1, x23
0x06A2C7F0: 75501d97  bl #0x31809c4
0x06A2C7F4: 186800f0  adrp x24, #0x772f000
0x06A2C7F8: 180b41f9  ldr x24, [x24, #0x210]
0x06A2C7FC: 820340f9  ldr x2, [x28]
0x06A2C800: e00315aa  mov x0, x21
0x06A2C804: e10317aa  mov x1, x23
0x06A2C808: 32b44897  bl #0x3c598d0
0x06A2C80C: e103002a  mov w1, w0
0x06A2C810: d60a00b4  cbz x22, #0x6a2c968
0x06A2C814: e00316aa  mov x0, x22
0x06A2C818: e2031faa  mov x2, xzr
0x06A2C81C: 06cad797  bl #0x601f034
0x06A2C820: a81a40b9  ldr w8, [x21, #0x18]
0x06A2C824: e8090034  cbz w8, #0x6a2c960
0x06A2C828: a01240f9  ldr x0, [x21, #0x20]
0x06A2C82C: 400a00b4  cbz x0, #0x6a2c974
0x06A2C830: 080040f9  ldr x8, [x0]
0x06A2C834: 01d141f9  ldr x1, [x8, #0x3a0]
0x06A2C838: 09cd41f9  ldr x9, [x8, #0x398]
0x06A2C83C: 20013fd6  blr x9
0x06A2C840: d30900b4  cbz x19, #0x6a2c978
0x06A2C844: e00000b4  cbz x0, #0x6a2c860
0x06A2C848: 090040f9  ldr x9, [x0]
0x06A2C84C: 280340f9  ldr x8, [x25]
0x06A2C850: 2bc14439  ldrb w11, [x9, #0x130]
0x06A2C854: 0ac14439  ldrb w10, [x8, #0x130]
0x06A2C858: 7f010a6b  cmp w11, w10
0x06A2C85C: 62000054  b.hs #0x6a2c868
0x06A2C860: e1031faa  mov x1, xzr
0x06A2C864: 06000014  b #0x6a2c87c
0x06A2C868: 296540f9  ldr x9, [x9, #0xc8]
0x06A2C86C: 290d0a8b  add x9, x9, x10, lsl #3
0x06A2C870: 29815ff8  ldur x9, [x9, #-8]
0x06A2C874: 3f0108eb  cmp x9, x8
0x06A2C878: 01009f9a  csel x1, x0, xzr, eq
0x06A2C87C: 6a1e40b9  ldr w10, [x19, #0x1c]
0x06A2C880: 680a40f9  ldr x8, [x19, #0x10]
0x06A2C884: a90340f9  ldr x9, [x29]
0x06A2C888: 4a050011  add w10, w10, #1
0x06A2C88C: 6a1e00b9  str w10, [x19, #0x1c]
0x06A2C890: 680700b4  cbz x8, #0x6a2c97c
0x06A2C894: 6a1a80b9  ldrsw x10, [x19, #0x18]
0x06A2C898: 0b1940b9  ldr w11, [x8, #0x18]
0x06A2C89C: 5f010b6b  cmp w10, w11
0x06A2C8A0: e2000054  b.hs #0x6a2c8bc
0x06A2C8A4: 49050011  add w9, w10, #1
0x06A2C8A8: 000d0a8b  add x0, x8, x10, lsl #3
0x06A2C8AC: 691a00b9  str w9, [x19, #0x18]
0x06A2C8B0: 010c02f8  str x1, [x0, #0x20]!
0x06A2C8B4: 44501d97  bl #0x31809c4
0x06A2C8B8: 5dffff17  b #0x6a2c62c
0x06A2C8BC: 281140f9  ldr x8, [x9, #0x20]
0x06A2C8C0: 086140f9  ldr x8, [x8, #0xc0]
0x06A2C8C4: 023940f9  ldr x2, [x8, #0x70]
0x06A2C8C8: e00313aa  mov x0, x19
0x06A2C8CC: e85e5897  bl #0x404446c
0x06A2C8D0: 57ffff17  b #0x6a2c62c
0x06A2C8D4: f6031faa  mov x22, xzr
0x06A2C8D8: 340300b4  cbz x20, #0x6a2c93c
0x06A2C8DC: 880240f9  ldr x8, [x20]
0x06A2C8E0: 0a6100d0  adrp x10, #0x764e000
0x06A2C8E4: 095d4279  ldrh w9, [x8, #0x12e]
0x06A2C8E8: 4a6544f9  ldr x10, [x10, #0x8c8]
0x06A2C8EC: 410140f9  ldr x1, [x10]
0x06A2C8F0: 290100b4  cbz x9, #0x6a2c914
0x06A2C8F4: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A2C8F8: 4a210091  add x10, x10, #8
0x06A2C8FC: 4b815ff8  ldur x11, [x10, #-8]
0x06A2C900: 7f0101eb  cmp x11, x1
0x06A2C904: 00010054  b.eq #0x6a2c924
0x06A2C908: 290500f1  subs x9, x9, #1
0x06A2C90C: 4a410091  add x10, x10, #0x10
0x06A2C910: 61ffff54  b.ne #0x6a2c8fc
0x06A2C914: e00314aa  mov x0, x20
0x06A2C918: e2031f2a  mov w2, wzr
0x06A2C91C: 7da81c97  bl #0x3156b10
0x06A2C920: 04000014  b #0x6a2c930
0x06A2C924: 490180b9  ldrsw x9, [x10]
0x06A2C928: 0811098b  add x8, x8, x9, lsl #4
0x06A2C92C: 00e10491  add x0, x8, #0x138
0x06A2C930: 080440a9  ldp x8, x1, [x0]
0x06A2C934: e00314aa  mov x0, x20
0x06A2C938: 00013fd6  blr x8
0x06A2C93C: f60200b5  cbnz x22, #0x6a2c998
0x06A2C940: e00313aa  mov x0, x19
0x06A2C944: f44f45a9  ldp x20, x19, [sp, #0x50]
0x06A2C948: f65744a9  ldp x22, x21, [sp, #0x40]
0x06A2C94C: f85f43a9  ldp x24, x23, [sp, #0x30]
0x06A2C950: fa6742a9  ldp x26, x25, [sp, #0x20]
0x06A2C954: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x06A2C958: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x06A2C95C: c0035fd6  ret
0x06A2C960: d5501d97  bl #0x3180cb4
0x06A2C964: d2501d97  bl #0x3180cac
0x06A2C968: d1501d97  bl #0x3180cac
0x06A2C96C: d0501d97  bl #0x3180cac
0x06A2C970: d1501d97  bl #0x3180cb4
0x06A2C974: ce501d97  bl #0x3180cac
0x06A2C978: cd501d97  bl #0x3180cac
0x06A2C97C: cc501d97  bl #0x3180cac
0x06A2C980: e00316aa  mov x0, x22
0x06A2C984: b1511d97  bl #0x3181048
0x06A2C988: e00316aa  mov x0, x22
0x06A2C98C: af511d97  bl #0x3181048
0x06A2C990: c7501d97  bl #0x3180cac
0x06A2C994: c6501d97  bl #0x3180cac
0x06A2C998: e00316aa  mov x0, x22
0x06A2C99C: c2501d97  bl #0x3180ca4
0x06A2C9A0: 10000014  b #0x6a2c9e0
0x06A2C9A4: 0f000014  b #0x6a2c9e0
0x06A2C9A8: 0e000014  b #0x6a2c9e0
0x06A2C9AC: 0d000014  b #0x6a2c9e0
0x06A2C9B0: 0c000014  b #0x6a2c9e0
0x06A2C9B4: 0b000014  b #0x6a2c9e0
0x06A2C9B8: 0a000014  b #0x6a2c9e0
0x06A2C9BC: 09000014  b #0x6a2c9e0
0x06A2C9C0: 08000014  b #0x6a2c9e0
0x06A2C9C4: 07000014  b #0x6a2c9e0
0x06A2C9C8: 06000014  b #0x6a2c9e0
0x06A2C9CC: 05000014  b #0x6a2c9e0
0x06A2C9D0: 04000014  b #0x6a2c9e0
0x06A2C9D4: 03000014  b #0x6a2c9e0
0x06A2C9D8: 02000014  b #0x6a2c9e0
0x06A2C9DC: 01000014  b #0x6a2c9e0
0x06A2C9E0: f50300aa  mov x21, x0
0x06A2C9E4: 3f040071  cmp w1, #1
0x06A2C9E8: c1000054  b.ne #0x6a2ca00
0x06A2C9EC: e00315aa  mov x0, x21
0x06A2C9F0: c8871e94  bl #0x71ce910
0x06A2C9F4: 160040f9  ldr x22, [x0]
0x06A2C9F8: ca871e94  bl #0x71ce920
0x06A2C9FC: b7ffff17  b #0x6a2c8d8
0x06A2CA00: f6031faa  mov x22, xzr
0x06A2CA04: 02000014  b #0x6a2ca0c
0x06A2CA08: f50300aa  mov x21, x0
0x06A2CA0C: 340300b4  cbz x20, #0x6a2ca70
0x06A2CA10: 880240f9  ldr x8, [x20]
0x06A2CA14: 0a6100d0  adrp x10, #0x764e000
0x06A2CA18: 095d4279  ldrh w9, [x8, #0x12e]
0x06A2CA1C: 4a6544f9  ldr x10, [x10, #0x8c8]
0x06A2CA20: 410140f9  ldr x1, [x10]
0x06A2CA24: 290100b4  cbz x9, #0x6a2ca48
0x06A2CA28: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A2CA2C: 4a210091  add x10, x10, #8
0x06A2CA30: 4b815ff8  ldur x11, [x10, #-8]
0x06A2CA34: 7f0101eb  cmp x11, x1
0x06A2CA38: 00010054  b.eq #0x6a2ca58
0x06A2CA3C: 290500f1  subs x9, x9, #1
0x06A2CA40: 4a410091  add x10, x10, #0x10
0x06A2CA44: 61ffff54  b.ne #0x6a2ca30
0x06A2CA48: e00314aa  mov x0, x20
0x06A2CA4C: e2031f2a  mov w2, wzr
0x06A2CA50: 30a81c97  bl #0x3156b10
0x06A2CA54: 04000014  b #0x6a2ca64
0x06A2CA58: 490180b9  ldrsw x9, [x10]
0x06A2CA5C: 0811098b  add x8, x8, x9, lsl #4
0x06A2CA60: 00e10491  add x0, x8, #0x138
0x06A2CA64: 080440a9  ldp x8, x1, [x0]
0x06A2CA68: e00314aa  mov x0, x20
0x06A2CA6C: 00013fd6  blr x8
0x06A2CA70: 760000b5  cbnz x22, #0x6a2ca7c
0x06A2CA74: e00315aa  mov x0, x21
0x06A2CA78: b8e32097  bl #0x3265958
0x06A2CA7C: e00316aa  mov x0, x22
0x06A2CA80: 89501d97  bl #0x3180ca4
0x06A2CA84: a4720f97  bl #0x2e09514

; RVA 0x6A2CA88 | public void AccumulateRewards(Reward otherReward) { }
; bytes=380 sha256=67c8c3bca40c873ac7292b764966c1aca2ccda1d633b1078b71c96a6d44731d0 status=arm64_complete_bound indexed_start=True
0x06A2CA88: ff0301d1  sub sp, sp, #0x40
0x06A2CA8C: fe5702a9  stp x30, x21, [sp, #0x20]
0x06A2CA90: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A2CA94: f59700d0  adrp x21, #0x7d2a000
0x06A2CA98: a87a5139  ldrb w8, [x21, #0x45e]
0x06A2CA9C: f40301aa  mov x20, x1
0x06A2CAA0: f30300aa  mov x19, x0
0x06A2CAA4: 48020037  tbnz w8, #0, #0x6a2caec
0x06A2CAA8: 606200b0  adrp x0, #0x7679000
0x06A2CAAC: 00d847f9  ldr x0, [x0, #0xfb0]
0x06A2CAB0: da4f1d97  bl #0x3180a18
0x06A2CAB4: 606200b0  adrp x0, #0x7679000
0x06A2CAB8: 00dc47f9  ldr x0, [x0, #0xfb8]
0x06A2CABC: d74f1d97  bl #0x3180a18
0x06A2CAC0: 606200b0  adrp x0, #0x7679000
0x06A2CAC4: 00e047f9  ldr x0, [x0, #0xfc0]
0x06A2CAC8: d44f1d97  bl #0x3180a18
0x06A2CACC: 006800d0  adrp x0, #0x772e000
0x06A2CAD0: 009447f9  ldr x0, [x0, #0xf28]
0x06A2CAD4: d14f1d97  bl #0x3180a18
0x06A2CAD8: 606200b0  adrp x0, #0x7679000
0x06A2CADC: 00e447f9  ldr x0, [x0, #0xfc8]
0x06A2CAE0: ce4f1d97  bl #0x3180a18
0x06A2CAE4: 28008052  movz w8, #0x1
0x06A2CAE8: a87a1139  strb w8, [x21, #0x45e]
0x06A2CAEC: ffff00a9  stp xzr, xzr, [sp, #8]
0x06A2CAF0: ff0f00f9  str xzr, [sp, #0x18]
0x06A2CAF4: 340400b4  cbz x20, #0x6a2cb78
0x06A2CAF8: e00314aa  mov x0, x20
0x06A2CAFC: a5fdff97  bl #0x6a2c190
0x06A2CB00: c0030037  tbnz w0, #0, #0x6a2cb78
0x06A2CB04: 600a40f9  ldr x0, [x19, #0x10]
0x06A2CB08: 000400b4  cbz x0, #0x6a2cb88
0x06A2CB0C: 086800d0  adrp x8, #0x772e000
0x06A2CB10: 810a40f9  ldr x1, [x20, #0x10]
0x06A2CB14: 089547f9  ldr x8, [x8, #0xf28]
0x06A2CB18: 020140f9  ldr x2, [x8]
0x06A2CB1C: d75e5897  bl #0x4044678
0x06A2CB20: 800e40f9  ldr x0, [x20, #0x18]
0x06A2CB24: 200300b4  cbz x0, #0x6a2cb88
0x06A2CB28: 686200b0  adrp x8, #0x7679000
0x06A2CB2C: 08e547f9  ldr x8, [x8, #0xfc8]
0x06A2CB30: 010140f9  ldr x1, [x8]
0x06A2CB34: e8230091  add x8, sp, #8
0x06A2CB38: 4c615897  bl #0x4045068
0x06A2CB3C: 746200b0  adrp x20, #0x7679000
0x06A2CB40: 94de47f9  ldr x20, [x20, #0xfb8]
0x06A2CB44: 810240f9  ldr x1, [x20]
0x06A2CB48: e0230091  add x0, sp, #8
0x06A2CB4C: 9aa39797  bl #0x50159b4
0x06A2CB50: a0000036  tbz w0, #0, #0x6a2cb64
0x06A2CB54: e10f40f9  ldr x1, [sp, #0x18]
0x06A2CB58: e00313aa  mov x0, x19
0x06A2CB5C: dce3ff97  bl #0x6a25acc
0x06A2CB60: f9ffff17  b #0x6a2cb44
0x06A2CB64: 686200b0  adrp x8, #0x7679000
0x06A2CB68: 08d947f9  ldr x8, [x8, #0xfb0]
0x06A2CB6C: e0230091  add x0, sp, #8
0x06A2CB70: 010140f9  ldr x1, [x8]
0x06A2CB74: 8fa39797  bl #0x50159b0
0x06A2CB78: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A2CB7C: fe5742a9  ldp x30, x21, [sp, #0x20]
0x06A2CB80: ff030191  add sp, sp, #0x40
0x06A2CB84: c0035fd6  ret
0x06A2CB88: 49501d97  bl #0x3180cac
0x06A2CB8C: 01000014  b #0x6a2cb90
0x06A2CB90: f40300aa  mov x20, x0
0x06A2CB94: 3f040071  cmp w1, #1
0x06A2CB98: a1010054  b.ne #0x6a2cbcc
0x06A2CB9C: e00314aa  mov x0, x20
0x06A2CBA0: 5c871e94  bl #0x71ce910
0x06A2CBA4: 130040f9  ldr x19, [x0]
0x06A2CBA8: 5e871e94  bl #0x71ce920
0x06A2CBAC: 686200b0  adrp x8, #0x7679000
0x06A2CBB0: 08d947f9  ldr x8, [x8, #0xfb0]
0x06A2CBB4: e0230091  add x0, sp, #8
0x06A2CBB8: 010140f9  ldr x1, [x8]
0x06A2CBBC: 7da39797  bl #0x50159b0
0x06A2CBC0: d3fdffb4  cbz x19, #0x6a2cb78
0x06A2CBC4: e00313aa  mov x0, x19
0x06A2CBC8: 37501d97  bl #0x3180ca4
0x06A2CBCC: f3031faa  mov x19, xzr
0x06A2CBD0: 02000014  b #0x6a2cbd8
0x06A2CBD4: f40300aa  mov x20, x0
0x06A2CBD8: 686200b0  adrp x8, #0x7679000
0x06A2CBDC: 08d947f9  ldr x8, [x8, #0xfb0]
0x06A2CBE0: 010140f9  ldr x1, [x8]
0x06A2CBE4: e0230091  add x0, sp, #8
0x06A2CBE8: 72a39797  bl #0x50159b0
0x06A2CBEC: 730000b5  cbnz x19, #0x6a2cbf8
0x06A2CBF0: e00314aa  mov x0, x20
0x06A2CBF4: 59e32097  bl #0x3265958
0x06A2CBF8: e00313aa  mov x0, x19
0x06A2CBFC: 2a501d97  bl #0x3180ca4
0x06A2CC00: 45720f97  bl #0x2e09514

; RVA 0x6A2CC04 | private bool CompareItemBoxes(Reward otherReward) { }
; bytes=1372 sha256=31ebe4a837f497737ffd3af376535b12cc2659376bd6f40ff3636e776dbb0d29 status=arm64_complete_bound indexed_start=True
0x06A2CC04: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x06A2CC08: fc6f01a9  stp x28, x27, [sp, #0x10]
0x06A2CC0C: fa6702a9  stp x26, x25, [sp, #0x20]
0x06A2CC10: f85f03a9  stp x24, x23, [sp, #0x30]
0x06A2CC14: f65704a9  stp x22, x21, [sp, #0x40]
0x06A2CC18: f44f05a9  stp x20, x19, [sp, #0x50]
0x06A2CC1C: f59700d0  adrp x21, #0x7d2a000
0x06A2CC20: 186800f0  adrp x24, #0x772f000
0x06A2CC24: a87e5139  ldrb w8, [x21, #0x45f]
0x06A2CC28: 18c340f9  ldr x24, [x24, #0x180]
0x06A2CC2C: f30301aa  mov x19, x1
0x06A2CC30: f40300aa  mov x20, x0
0x06A2CC34: 68060037  tbnz w8, #0, #0x6a2cd00
0x06A2CC38: 006800f0  adrp x0, #0x772f000
0x06A2CC3C: 001841f9  ldr x0, [x0, #0x230]
0x06A2CC40: 764f1d97  bl #0x3180a18
0x06A2CC44: 006800f0  adrp x0, #0x772f000
0x06A2CC48: 001c41f9  ldr x0, [x0, #0x238]
0x06A2CC4C: 734f1d97  bl #0x3180a18
0x06A2CC50: 006800f0  adrp x0, #0x772f000
0x06A2CC54: 002041f9  ldr x0, [x0, #0x240]
0x06A2CC58: 704f1d97  bl #0x3180a18
0x06A2CC5C: c06500d0  adrp x0, #0x76e6000
0x06A2CC60: 008047f9  ldr x0, [x0, #0xf00]
0x06A2CC64: 6d4f1d97  bl #0x3180a18
0x06A2CC68: c06500d0  adrp x0, #0x76e6000
0x06A2CC6C: 00bc43f9  ldr x0, [x0, #0x778]
0x06A2CC70: 6a4f1d97  bl #0x3180a18
0x06A2CC74: 006800f0  adrp x0, #0x772f000
0x06A2CC78: 002441f9  ldr x0, [x0, #0x248]
0x06A2CC7C: 674f1d97  bl #0x3180a18
0x06A2CC80: 006500b0  adrp x0, #0x76cd000
0x06A2CC84: 00a445f9  ldr x0, [x0, #0xb48]
0x06A2CC88: 644f1d97  bl #0x3180a18
0x06A2CC8C: 006800f0  adrp x0, #0x772f000
0x06A2CC90: 002841f9  ldr x0, [x0, #0x250]
0x06A2CC94: 614f1d97  bl #0x3180a18
0x06A2CC98: 006500f0  adrp x0, #0x76cf000
0x06A2CC9C: 00c440f9  ldr x0, [x0, #0x188]
0x06A2CCA0: 5e4f1d97  bl #0x3180a18
0x06A2CCA4: 006800f0  adrp x0, #0x772f000
0x06A2CCA8: 002c41f9  ldr x0, [x0, #0x258]
0x06A2CCAC: 5b4f1d97  bl #0x3180a18
0x06A2CCB0: 006800f0  adrp x0, #0x772f000
0x06A2CCB4: 003041f9  ldr x0, [x0, #0x260]
0x06A2CCB8: 584f1d97  bl #0x3180a18
0x06A2CCBC: 006800f0  adrp x0, #0x772f000
0x06A2CCC0: 003441f9  ldr x0, [x0, #0x268]
0x06A2CCC4: 554f1d97  bl #0x3180a18
0x06A2CCC8: 006800f0  adrp x0, #0x772f000
0x06A2CCCC: 003841f9  ldr x0, [x0, #0x270]
0x06A2CCD0: 524f1d97  bl #0x3180a18
0x06A2CCD4: 006800f0  adrp x0, #0x772f000
0x06A2CCD8: 003c41f9  ldr x0, [x0, #0x278]
0x06A2CCDC: 4f4f1d97  bl #0x3180a18
0x06A2CCE0: 006800f0  adrp x0, #0x772f000
0x06A2CCE4: 004041f9  ldr x0, [x0, #0x280]
0x06A2CCE8: 4c4f1d97  bl #0x3180a18
0x06A2CCEC: 006800f0  adrp x0, #0x772f000
0x06A2CCF0: 00c040f9  ldr x0, [x0, #0x180]
0x06A2CCF4: 494f1d97  bl #0x3180a18
0x06A2CCF8: 28008052  movz w8, #0x1
0x06A2CCFC: a87e1139  strb w8, [x21, #0x45f]
0x06A2CD00: e00314aa  mov x0, x20
0x06A2CD04: 7af7ff97  bl #0x6a2aaec
0x06A2CD08: 080340f9  ldr x8, [x24]
0x06A2CD0C: f40300aa  mov x20, x0
0x06A2CD10: 09e140b9  ldr w9, [x8, #0xe0]
0x06A2CD14: 89000035  cbnz w9, #0x6a2cd24
0x06A2CD18: e00308aa  mov x0, x8
0x06A2CD1C: 9c4f1d97  bl #0x3180b8c
0x06A2CD20: 080340f9  ldr x8, [x24]
0x06A2CD24: 095d40f9  ldr x9, [x8, #0xb8]
0x06A2CD28: d96500d0  adrp x25, #0x76e6000
0x06A2CD2C: db6500d0  adrp x27, #0x76e6000
0x06A2CD30: 352540f9  ldr x21, [x9, #0x48]
0x06A2CD34: 39bf43f9  ldr x25, [x25, #0x778]
0x06A2CD38: 7b8347f9  ldr x27, [x27, #0xf00]
0x06A2CD3C: 150300b5  cbnz x21, #0x6a2cd9c
0x06A2CD40: 09e140b9  ldr w9, [x8, #0xe0]
0x06A2CD44: 89000035  cbnz w9, #0x6a2cd54
0x06A2CD48: e00308aa  mov x0, x8
0x06A2CD4C: 904f1d97  bl #0x3180b8c
0x06A2CD50: 080340f9  ldr x8, [x24]
0x06A2CD54: 096500b0  adrp x9, #0x76cd000
0x06A2CD58: 085d40f9  ldr x8, [x8, #0xb8]
0x06A2CD5C: 29a545f9  ldr x9, [x9, #0xb48]
0x06A2CD60: 160140f9  ldr x22, [x8]
0x06A2CD64: 200140f9  ldr x0, [x9]
0x06A2CD68: ce4f1d97  bl #0x3180ca0
0x06A2CD6C: 086800f0  adrp x8, #0x772f000
0x06A2CD70: 082d41f9  ldr x8, [x8, #0x258]
0x06A2CD74: e10316aa  mov x1, x22
0x06A2CD78: e3031faa  mov x3, xzr
0x06A2CD7C: f50300aa  mov x21, x0
0x06A2CD80: 020140f9  ldr x2, [x8]
0x06A2CD84: 8ea4a097  bl #0x5255fbc
0x06A2CD88: 080340f9  ldr x8, [x24]
0x06A2CD8C: e10315aa  mov x1, x21
0x06A2CD90: 005d40f9  ldr x0, [x8, #0xb8]
0x06A2CD94: 158c04f8  str x21, [x0, #0x48]!
0x06A2CD98: 0b4f1d97  bl #0x31809c4
0x06A2CD9C: 220340f9  ldr x2, [x25]
0x06A2CDA0: e00314aa  mov x0, x20
0x06A2CDA4: e10315aa  mov x1, x21
0x06A2CDA8: 40694997  bl #0x3c872a8
0x06A2CDAC: 610340f9  ldr x1, [x27]
0x06A2CDB0: 88cc4897  bl #0x3c5ffd0
0x06A2CDB4: 401d00b4  cbz x0, #0x6a2d15c
0x06A2CDB8: 081840b9  ldr w8, [x0, #0x18]
0x06A2CDBC: f50300aa  mov x21, x0
0x06A2CDC0: e81b0034  cbz w8, #0x6a2d13c
0x06A2CDC4: 000340f9  ldr x0, [x24]
0x06A2CDC8: 08e040b9  ldr w8, [x0, #0xe0]
0x06A2CDCC: 68000035  cbnz w8, #0x6a2cdd8
0x06A2CDD0: 6f4f1d97  bl #0x3180b8c
0x06A2CDD4: 000340f9  ldr x0, [x24]
0x06A2CDD8: 085c40f9  ldr x8, [x0, #0xb8]
0x06A2CDDC: 142940f9  ldr x20, [x8, #0x50]
0x06A2CDE0: f40200b5  cbnz x20, #0x6a2ce3c
0x06A2CDE4: 08e040b9  ldr w8, [x0, #0xe0]
0x06A2CDE8: 68000035  cbnz w8, #0x6a2cdf4
0x06A2CDEC: 684f1d97  bl #0x3180b8c
0x06A2CDF0: 000340f9  ldr x0, [x24]
0x06A2CDF4: 096500b0  adrp x9, #0x76cd000
0x06A2CDF8: 085c40f9  ldr x8, [x0, #0xb8]
0x06A2CDFC: 29a545f9  ldr x9, [x9, #0xb48]
0x06A2CE00: 160140f9  ldr x22, [x8]
0x06A2CE04: 200140f9  ldr x0, [x9]
0x06A2CE08: a64f1d97  bl #0x3180ca0
0x06A2CE0C: 086800f0  adrp x8, #0x772f000
0x06A2CE10: 083141f9  ldr x8, [x8, #0x260]
0x06A2CE14: e10316aa  mov x1, x22
0x06A2CE18: e3031faa  mov x3, xzr
0x06A2CE1C: f40300aa  mov x20, x0
0x06A2CE20: 020140f9  ldr x2, [x8]
0x06A2CE24: 66a4a097  bl #0x5255fbc
0x06A2CE28: 080340f9  ldr x8, [x24]
0x06A2CE2C: e10314aa  mov x1, x20
0x06A2CE30: 005d40f9  ldr x0, [x8, #0xb8]
0x06A2CE34: 140c05f8  str x20, [x0, #0x50]!
0x06A2CE38: e34e1d97  bl #0x31809c4
0x06A2CE3C: 220340f9  ldr x2, [x25]
0x06A2CE40: e00315aa  mov x0, x21
0x06A2CE44: e10314aa  mov x1, x20
0x06A2CE48: 18694997  bl #0x3c872a8
0x06A2CE4C: 080340f9  ldr x8, [x24]
0x06A2CE50: f40300aa  mov x20, x0
0x06A2CE54: 09e140b9  ldr w9, [x8, #0xe0]
0x06A2CE58: 89000035  cbnz w9, #0x6a2ce68
0x06A2CE5C: e00308aa  mov x0, x8
0x06A2CE60: 4b4f1d97  bl #0x3180b8c
0x06A2CE64: 080340f9  ldr x8, [x24]
0x06A2CE68: 095d40f9  ldr x9, [x8, #0xb8]
0x06A2CE6C: 1d6800f0  adrp x29, #0x772f000
0x06A2CE70: 1c6800f0  adrp x28, #0x772f000
0x06A2CE74: 1a6800f0  adrp x26, #0x772f000
0x06A2CE78: 362d40f9  ldr x22, [x9, #0x58]
0x06A2CE7C: bd1f41f9  ldr x29, [x29, #0x238]
0x06A2CE80: 9c1b41f9  ldr x28, [x28, #0x230]
0x06A2CE84: 5a2341f9  ldr x26, [x26, #0x240]
0x06A2CE88: 160300b5  cbnz x22, #0x6a2cee8
0x06A2CE8C: 09e140b9  ldr w9, [x8, #0xe0]
0x06A2CE90: 89000035  cbnz w9, #0x6a2cea0
0x06A2CE94: e00308aa  mov x0, x8
0x06A2CE98: 3d4f1d97  bl #0x3180b8c
0x06A2CE9C: 080340f9  ldr x8, [x24]
0x06A2CEA0: 096800f0  adrp x9, #0x772f000
0x06A2CEA4: 085d40f9  ldr x8, [x8, #0xb8]
0x06A2CEA8: 292541f9  ldr x9, [x9, #0x248]
0x06A2CEAC: 170140f9  ldr x23, [x8]
0x06A2CEB0: 200140f9  ldr x0, [x9]
0x06A2CEB4: 7b4f1d97  bl #0x3180ca0
0x06A2CEB8: 086800f0  adrp x8, #0x772f000
0x06A2CEBC: 083541f9  ldr x8, [x8, #0x268]
0x06A2CEC0: e10317aa  mov x1, x23
0x06A2CEC4: e3031faa  mov x3, xzr
0x06A2CEC8: f60300aa  mov x22, x0
0x06A2CECC: 020140f9  ldr x2, [x8]
0x06A2CED0: baa6a097  bl #0x52569b8
0x06A2CED4: 080340f9  ldr x8, [x24]
0x06A2CED8: e10316aa  mov x1, x22
0x06A2CEDC: 005d40f9  ldr x0, [x8, #0xb8]
0x06A2CEE0: 168c05f8  str x22, [x0, #0x58]!
0x06A2CEE4: b84e1d97  bl #0x31809c4
0x06A2CEE8: a20340f9  ldr x2, [x29]
0x06A2CEEC: e00314aa  mov x0, x20
0x06A2CEF0: e10316aa  mov x1, x22
0x06A2CEF4: e88e4897  bl #0x3c50a94
0x06A2CEF8: 810340f9  ldr x1, [x28]
0x06A2CEFC: ebfd4797  bl #0x3c2c6a8
0x06A2CF00: 410340f9  ldr x1, [x26]
0x06A2CF04: 33cc4897  bl #0x3c5ffd0
0x06A2CF08: b31200b4  cbz x19, #0x6a2d15c
0x06A2CF0C: f40300aa  mov x20, x0
0x06A2CF10: e00313aa  mov x0, x19
0x06A2CF14: f6f6ff97  bl #0x6a2aaec
0x06A2CF18: 080340f9  ldr x8, [x24]
0x06A2CF1C: f30300aa  mov x19, x0
0x06A2CF20: 09e140b9  ldr w9, [x8, #0xe0]
0x06A2CF24: 89000035  cbnz w9, #0x6a2cf34
0x06A2CF28: e00308aa  mov x0, x8
0x06A2CF2C: 184f1d97  bl #0x3180b8c
0x06A2CF30: 080340f9  ldr x8, [x24]
0x06A2CF34: 095d40f9  ldr x9, [x8, #0xb8]
0x06A2CF38: 363140f9  ldr x22, [x9, #0x60]
0x06A2CF3C: 160300b5  cbnz x22, #0x6a2cf9c
0x06A2CF40: 09e140b9  ldr w9, [x8, #0xe0]
0x06A2CF44: 89000035  cbnz w9, #0x6a2cf54
0x06A2CF48: e00308aa  mov x0, x8
0x06A2CF4C: 104f1d97  bl #0x3180b8c
0x06A2CF50: 080340f9  ldr x8, [x24]
0x06A2CF54: 096500b0  adrp x9, #0x76cd000
0x06A2CF58: 085d40f9  ldr x8, [x8, #0xb8]
0x06A2CF5C: 29a545f9  ldr x9, [x9, #0xb48]
0x06A2CF60: 170140f9  ldr x23, [x8]
0x06A2CF64: 200140f9  ldr x0, [x9]
0x06A2CF68: 4e4f1d97  bl #0x3180ca0
0x06A2CF6C: 086800f0  adrp x8, #0x772f000
0x06A2CF70: 083941f9  ldr x8, [x8, #0x270]
0x06A2CF74: e10317aa  mov x1, x23
0x06A2CF78: e3031faa  mov x3, xzr
0x06A2CF7C: f60300aa  mov x22, x0
0x06A2CF80: 020140f9  ldr x2, [x8]
0x06A2CF84: 0ea4a097  bl #0x5255fbc
0x06A2CF88: 080340f9  ldr x8, [x24]
0x06A2CF8C: e10316aa  mov x1, x22
0x06A2CF90: 005d40f9  ldr x0, [x8, #0xb8]
0x06A2CF94: 160c06f8  str x22, [x0, #0x60]!
0x06A2CF98: 8b4e1d97  bl #0x31809c4
0x06A2CF9C: 220340f9  ldr x2, [x25]
0x06A2CFA0: e00313aa  mov x0, x19
0x06A2CFA4: e10316aa  mov x1, x22
0x06A2CFA8: c0684997  bl #0x3c872a8
0x06A2CFAC: 610340f9  ldr x1, [x27]
0x06A2CFB0: 08cc4897  bl #0x3c5ffd0
0x06A2CFB4: 400d00b4  cbz x0, #0x6a2d15c
0x06A2CFB8: a81a40b9  ldr w8, [x21, #0x18]
0x06A2CFBC: 091840b9  ldr w9, [x0, #0x18]
0x06A2CFC0: f30300aa  mov x19, x0
0x06A2CFC4: 1f01096b  cmp w8, w9
0x06A2CFC8: 610b0054  b.ne #0x6a2d134
0x06A2CFCC: 000340f9  ldr x0, [x24]
0x06A2CFD0: 08e040b9  ldr w8, [x0, #0xe0]
0x06A2CFD4: 68000035  cbnz w8, #0x6a2cfe0
0x06A2CFD8: ed4e1d97  bl #0x3180b8c
0x06A2CFDC: 000340f9  ldr x0, [x24]
0x06A2CFE0: 085c40f9  ldr x8, [x0, #0xb8]
0x06A2CFE4: 153540f9  ldr x21, [x8, #0x68]
0x06A2CFE8: f50200b5  cbnz x21, #0x6a2d044
0x06A2CFEC: 08e040b9  ldr w8, [x0, #0xe0]
0x06A2CFF0: 68000035  cbnz w8, #0x6a2cffc
0x06A2CFF4: e64e1d97  bl #0x3180b8c
0x06A2CFF8: 000340f9  ldr x0, [x24]
0x06A2CFFC: 096500b0  adrp x9, #0x76cd000
0x06A2D000: 085c40f9  ldr x8, [x0, #0xb8]
0x06A2D004: d2851e14  b #0x71ce74c
0x06A2D008: 160140f9  ldr x22, [x8]
0x06A2D00C: 200140f9  ldr x0, [x9]
0x06A2D010: 244f1d97  bl #0x3180ca0
0x06A2D014: 086800d0  adrp x8, #0x772f000
0x06A2D018: 083d41f9  ldr x8, [x8, #0x278]
0x06A2D01C: e10316aa  mov x1, x22
0x06A2D020: e3031faa  mov x3, xzr
0x06A2D024: f50300aa  mov x21, x0
0x06A2D028: 020140f9  ldr x2, [x8]
0x06A2D02C: e4a3a097  bl #0x5255fbc
0x06A2D030: 080340f9  ldr x8, [x24]
0x06A2D034: e10315aa  mov x1, x21
0x06A2D038: 005d40f9  ldr x0, [x8, #0xb8]
0x06A2D03C: 158c06f8  str x21, [x0, #0x68]!
0x06A2D040: 614e1d97  bl #0x31809c4
0x06A2D044: 220340f9  ldr x2, [x25]
0x06A2D048: e00313aa  mov x0, x19
0x06A2D04C: e10315aa  mov x1, x21
0x06A2D050: 96684997  bl #0x3c872a8
0x06A2D054: 080340f9  ldr x8, [x24]
0x06A2D058: f30300aa  mov x19, x0
0x06A2D05C: 09e140b9  ldr w9, [x8, #0xe0]
0x06A2D060: 89000035  cbnz w9, #0x6a2d070
0x06A2D064: e00308aa  mov x0, x8
0x06A2D068: c94e1d97  bl #0x3180b8c
0x06A2D06C: 080340f9  ldr x8, [x24]
0x06A2D070: 095d40f9  ldr x9, [x8, #0xb8]
0x06A2D074: 353940f9  ldr x21, [x9, #0x70]
0x06A2D078: 150300b5  cbnz x21, #0x6a2d0d8
0x06A2D07C: 09e140b9  ldr w9, [x8, #0xe0]
0x06A2D080: 89000035  cbnz w9, #0x6a2d090
0x06A2D084: e00308aa  mov x0, x8
0x06A2D088: c14e1d97  bl #0x3180b8c
0x06A2D08C: 080340f9  ldr x8, [x24]
0x06A2D090: 096800d0  adrp x9, #0x772f000
0x06A2D094: 085d40f9  ldr x8, [x8, #0xb8]
0x06A2D098: 292541f9  ldr x9, [x9, #0x248]
0x06A2D09C: 160140f9  ldr x22, [x8]
0x06A2D0A0: 200140f9  ldr x0, [x9]
0x06A2D0A4: ff4e1d97  bl #0x3180ca0
0x06A2D0A8: 086800d0  adrp x8, #0x772f000
0x06A2D0AC: 084141f9  ldr x8, [x8, #0x280]
0x06A2D0B0: e10316aa  mov x1, x22
0x06A2D0B4: e3031faa  mov x3, xzr
0x06A2D0B8: f50300aa  mov x21, x0
0x06A2D0BC: 020140f9  ldr x2, [x8]
0x06A2D0C0: 3ea6a097  bl #0x52569b8
0x06A2D0C4: 080340f9  ldr x8, [x24]
0x06A2D0C8: e10315aa  mov x1, x21
0x06A2D0CC: 005d40f9  ldr x0, [x8, #0xb8]
0x06A2D0D0: 150c07f8  str x21, [x0, #0x70]!
0x06A2D0D4: 3c4e1d97  bl #0x31809c4
0x06A2D0D8: a20340f9  ldr x2, [x29]
0x06A2D0DC: e00313aa  mov x0, x19
0x06A2D0E0: e10315aa  mov x1, x21
0x06A2D0E4: 6c8e4897  bl #0x3c50a94
0x06A2D0E8: 810340f9  ldr x1, [x28]
0x06A2D0EC: 6ffd4797  bl #0x3c2c6a8
0x06A2D0F0: 410340f9  ldr x1, [x26]
0x06A2D0F4: b7cb4897  bl #0x3c5ffd0
0x06A2D0F8: 340300b4  cbz x20, #0x6a2d15c
0x06A2D0FC: 000300b4  cbz x0, #0x6a2d15c
0x06A2D100: 881a40b9  ldr w8, [x20, #0x18]
0x06A2D104: 091840b9  ldr w9, [x0, #0x18]
0x06A2D108: 1f01096b  cmp w8, w9
0x06A2D10C: 41010054  b.ne #0x6a2d134
0x06A2D110: e10314aa  mov x1, x20
0x06A2D114: f44f45a9  ldp x20, x19, [sp, #0x50]
0x06A2D118: f65744a9  ldp x22, x21, [sp, #0x40]
0x06A2D11C: f85f43a9  ldp x24, x23, [sp, #0x30]
0x06A2D120: fa6742a9  ldp x26, x25, [sp, #0x20]
0x06A2D124: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x06A2D128: e20300aa  mov x2, x0
0x06A2D12C: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x06A2D130: 0c000014  b #0x6a2d160
0x06A2D134: e0031f2a  mov w0, wzr
0x06A2D138: 02000014  b #0x6a2d140
0x06A2D13C: 20008052  movz w0, #0x1
0x06A2D140: f44f45a9  ldp x20, x19, [sp, #0x50]
0x06A2D144: f65744a9  ldp x22, x21, [sp, #0x40]
0x06A2D148: f85f43a9  ldp x24, x23, [sp, #0x30]
0x06A2D14C: fa6742a9  ldp x26, x25, [sp, #0x20]
0x06A2D150: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x06A2D154: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x06A2D158: c0035fd6  ret
0x06A2D15C: d44e1d97  bl #0x3180cac

; RVA 0x6A2D160 | private bool AreItemBoxesRefsEqual(List<DynamicMergeItemWeakReference> myRewardItemsRefs, List<DynamicMergeItemWeakReference> otherRewardItemsRefs) { }
; bytes=532 sha256=b3828bd35599e99ac5c237ba4e2c34679e951756cd92dcc0e6cbdd6e4bf25031 status=arm64_complete_bound indexed_start=True
0x06A2D160: ffc301d1  sub sp, sp, #0x70
0x06A2D164: fe6f02a9  stp x30, x27, [sp, #0x20]
0x06A2D168: fa6703a9  stp x26, x25, [sp, #0x30]
0x06A2D16C: f85f04a9  stp x24, x23, [sp, #0x40]
0x06A2D170: f65705a9  stp x22, x21, [sp, #0x50]
0x06A2D174: f44f06a9  stp x20, x19, [sp, #0x60]
0x06A2D178: f59700b0  adrp x21, #0x7d2a000
0x06A2D17C: a8825139  ldrb w8, [x21, #0x460]
0x06A2D180: f30302aa  mov x19, x2
0x06A2D184: f40301aa  mov x20, x1
0x06A2D188: 68030037  tbnz w8, #0, #0x6a2d1f4
0x06A2D18C: 006800d0  adrp x0, #0x772f000
0x06A2D190: 004441f9  ldr x0, [x0, #0x288]
0x06A2D194: 214e1d97  bl #0x3180a18
0x06A2D198: 006800d0  adrp x0, #0x772f000
0x06A2D19C: 004841f9  ldr x0, [x0, #0x290]
0x06A2D1A0: 1e4e1d97  bl #0x3180a18
0x06A2D1A4: 006800d0  adrp x0, #0x772f000
0x06A2D1A8: 004c41f9  ldr x0, [x0, #0x298]
0x06A2D1AC: 1b4e1d97  bl #0x3180a18
0x06A2D1B0: 006800d0  adrp x0, #0x772f000
0x06A2D1B4: 005041f9  ldr x0, [x0, #0x2a0]
0x06A2D1B8: 184e1d97  bl #0x3180a18
0x06A2D1BC: 006800d0  adrp x0, #0x772f000
0x06A2D1C0: 005441f9  ldr x0, [x0, #0x2a8]
0x06A2D1C4: 154e1d97  bl #0x3180a18
0x06A2D1C8: 006800d0  adrp x0, #0x772f000
0x06A2D1CC: 005841f9  ldr x0, [x0, #0x2b0]
0x06A2D1D0: 124e1d97  bl #0x3180a18
0x06A2D1D4: 006800d0  adrp x0, #0x772f000
0x06A2D1D8: 005c41f9  ldr x0, [x0, #0x2b8]
0x06A2D1DC: 0f4e1d97  bl #0x3180a18
0x06A2D1E0: 006800d0  adrp x0, #0x772f000
0x06A2D1E4: 006041f9  ldr x0, [x0, #0x2c0]
0x06A2D1E8: 0c4e1d97  bl #0x3180a18
0x06A2D1EC: 28008052  movz w8, #0x1
0x06A2D1F0: a8821139  strb w8, [x21, #0x460]
0x06A2D1F4: ffff00a9  stp xzr, xzr, [sp, #8]
0x06A2D1F8: ff0f00f9  str xzr, [sp, #0x18]
0x06A2D1FC: b40700b4  cbz x20, #0x6a2d2f0
0x06A2D200: 086800d0  adrp x8, #0x772f000
0x06A2D204: 085941f9  ldr x8, [x8, #0x2b0]
0x06A2D208: 176800d0  adrp x23, #0x772f000
0x06A2D20C: 186800d0  adrp x24, #0x772f000
0x06A2D210: 196800d0  adrp x25, #0x772f000
0x06A2D214: f74e41f9  ldr x23, [x23, #0x298]
0x06A2D218: 186341f9  ldr x24, [x24, #0x2c0]
0x06A2D21C: 395741f9  ldr x25, [x25, #0x2a8]
0x06A2D220: 010140f9  ldr x1, [x8]
0x06A2D224: 1a6800d0  adrp x26, #0x772f000
0x06A2D228: 1b6800d0  adrp x27, #0x772f000
0x06A2D22C: 166800d0  adrp x22, #0x772f000
0x06A2D230: 5a5f41f9  ldr x26, [x26, #0x2b8]
0x06A2D234: 7b4741f9  ldr x27, [x27, #0x288]
0x06A2D238: d64a41f9  ldr x22, [x22, #0x290]
0x06A2D23C: e8230091  add x8, sp, #8
0x06A2D240: e00314aa  mov x0, x20
0x06A2D244: 895f5897  bl #0x4045068
0x06A2D248: e10240f9  ldr x1, [x23]
0x06A2D24C: e0230091  add x0, sp, #8
0x06A2D250: d9a19797  bl #0x50159b4
0x06A2D254: 20030036  tbz w0, #0, #0x6a2d2b8
0x06A2D258: 000340f9  ldr x0, [x24]
0x06A2D25C: 914e1d97  bl #0x3180ca0
0x06A2D260: f40300aa  mov x20, x0
0x06A2D264: e1031faa  mov x1, xzr
0x06A2D268: e5b4b297  bl #0x56da5fc
0x06A2D26C: 140400b4  cbz x20, #0x6a2d2ec
0x06A2D270: e10f40f9  ldr x1, [sp, #0x18]
0x06A2D274: e00314aa  mov x0, x20
0x06A2D278: 010c01f8  str x1, [x0, #0x10]!
0x06A2D27C: d24d1d97  bl #0x31809c4
0x06A2D280: 200340f9  ldr x0, [x25]
0x06A2D284: 874e1d97  bl #0x3180ca0
0x06A2D288: 420340f9  ldr x2, [x26]
0x06A2D28C: f50300aa  mov x21, x0
0x06A2D290: e10314aa  mov x1, x20
0x06A2D294: e3031faa  mov x3, xzr
0x06A2D298: 49a3a097  bl #0x5255fbc
0x06A2D29C: 620340f9  ldr x2, [x27]
0x06A2D2A0: e00313aa  mov x0, x19
0x06A2D2A4: e10315aa  mov x1, x21
0x06A2D2A8: 5af84797  bl #0x3c2b410
0x06A2D2AC: e0fc0737  tbnz w0, #0, #0x6a2d248
0x06A2D2B0: 93008052  movz w19, #0x4
0x06A2D2B4: 02000014  b #0x6a2d2bc
0x06A2D2B8: b3008052  movz w19, #0x5
0x06A2D2BC: c10240f9  ldr x1, [x22]
0x06A2D2C0: e0230091  add x0, sp, #8
0x06A2D2C4: bba19797  bl #0x50159b0
0x06A2D2C8: 7f120071  cmp w19, #4
0x06A2D2CC: f44f46a9  ldp x20, x19, [sp, #0x60]
0x06A2D2D0: f65745a9  ldp x22, x21, [sp, #0x50]
0x06A2D2D4: f85f44a9  ldp x24, x23, [sp, #0x40]
0x06A2D2D8: fa6743a9  ldp x26, x25, [sp, #0x30]
0x06A2D2DC: fe6f42a9  ldp x30, x27, [sp, #0x20]
0x06A2D2E0: e0079f1a  cset w0, ne
0x06A2D2E4: ffc30191  add sp, sp, #0x70
0x06A2D2E8: c0035fd6  ret
0x06A2D2EC: 704e1d97  bl #0x3180cac
0x06A2D2F0: 6f4e1d97  bl #0x3180cac
0x06A2D2F4: 05000014  b #0x6a2d308
0x06A2D2F8: 04000014  b #0x6a2d308
0x06A2D2FC: 03000014  b #0x6a2d308
0x06A2D300: 02000014  b #0x6a2d308
0x06A2D304: 01000014  b #0x6a2d308
0x06A2D308: f30300aa  mov x19, x0
0x06A2D30C: 3f040071  cmp w1, #1
0x06A2D310: 61010054  b.ne #0x6a2d33c
0x06A2D314: e00313aa  mov x0, x19
0x06A2D318: 7e851e94  bl #0x71ce910
0x06A2D31C: 140040f9  ldr x20, [x0]
0x06A2D320: 80851e94  bl #0x71ce920
0x06A2D324: c10240f9  ldr x1, [x22]
0x06A2D328: e0230091  add x0, sp, #8
0x06A2D32C: a1a19797  bl #0x50159b0
0x06A2D330: b40000b5  cbnz x20, #0x6a2d344
0x06A2D334: f3031f2a  mov w19, wzr
0x06A2D338: e4ffff17  b #0x6a2d2c8
0x06A2D33C: f4031faa  mov x20, xzr
0x06A2D340: 04000014  b #0x6a2d350
0x06A2D344: e00314aa  mov x0, x20
0x06A2D348: 574e1d97  bl #0x3180ca4
0x06A2D34C: f30300aa  mov x19, x0
0x06A2D350: c10240f9  ldr x1, [x22]
0x06A2D354: e0230091  add x0, sp, #8
0x06A2D358: 96a19797  bl #0x50159b0
0x06A2D35C: 740000b5  cbnz x20, #0x6a2d368
0x06A2D360: e00313aa  mov x0, x19
0x06A2D364: 7de12097  bl #0x3265958
0x06A2D368: e00314aa  mov x0, x20
0x06A2D36C: 4e4e1d97  bl #0x3180ca4
0x06A2D370: 69700f97  bl #0x2e09514

; RVA 0x6A2D37C | public void FixOriginalRewardsIfMissingChests() { }
; bytes=176 sha256=77e7e6019cdc412b6c6cb636ca2f3e1ebe749f5756574b1d3c583d91633dc3ff status=arm64_complete_bound indexed_start=True
0x06A2D37C: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A2D380: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A2D384: f49700b0  adrp x20, #0x7d2a000
0x06A2D388: 88865139  ldrb w8, [x20, #0x461]
0x06A2D38C: f30300aa  mov x19, x0
0x06A2D390: 88010037  tbnz w8, #0, #0x6a2d3c0
0x06A2D394: 806200f0  adrp x0, #0x7680000
0x06A2D398: 000441f9  ldr x0, [x0, #0x208]
0x06A2D39C: 9f4d1d97  bl #0x3180a18
0x06A2D3A0: 806200f0  adrp x0, #0x7680000
0x06A2D3A4: 00e840f9  ldr x0, [x0, #0x1d0]
0x06A2D3A8: 9c4d1d97  bl #0x3180a18
0x06A2D3AC: 406600b0  adrp x0, #0x76f6000
0x06A2D3B0: 006c40f9  ldr x0, [x0, #0xd8]
0x06A2D3B4: 994d1d97  bl #0x3180a18
0x06A2D3B8: 28008052  movz w8, #0x1
0x06A2D3BC: 88861139  strb w8, [x20, #0x461]
0x06A2D3C0: e00313aa  mov x0, x19
0x06A2D3C4: 16f9ff97  bl #0x6a2b81c
0x06A2D3C8: f503002a  mov w21, w0
0x06A2D3CC: e00313aa  mov x0, x19
0x06A2D3D0: 13f6ff97  bl #0x6a2ac1c
0x06A2D3D4: a00200b4  cbz x0, #0x6a2d428
0x06A2D3D8: 740e40f9  ldr x20, [x19, #0x18]
0x06A2D3DC: 740200b4  cbz x20, #0x6a2d428
0x06A2D3E0: 081840b9  ldr w8, [x0, #0x18]
0x06A2D3E4: 891a40b9  ldr w9, [x20, #0x18]
0x06A2D3E8: 0801150b  add w8, w8, w21
0x06A2D3EC: 1f01096b  cmp w8, w9
0x06A2D3F0: 6d010054  b.le #0x6a2d41c
0x06A2D3F4: e00313aa  mov x0, x19
0x06A2D3F8: 09f6ff97  bl #0x6a2ac1c
0x06A2D3FC: 886200f0  adrp x8, #0x7680000
0x06A2D400: 080541f9  ldr x8, [x8, #0x208]
0x06A2D404: e10300aa  mov x1, x0
0x06A2D408: e00314aa  mov x0, x20
0x06A2D40C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A2D410: 020140f9  ldr x2, [x8]
0x06A2D414: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A2D418: 985c5817  b #0x4044678
0x06A2D41C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A2D420: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A2D424: c0035fd6  ret
0x06A2D428: 214e1d97  bl #0x3180cac

; RVA 0x6A2D42C | public Reward RemovePendingBoosters() { }
; bytes=180 sha256=9bb132171fac07b1b8c1da1e8a31d9245f6c1e5ead29c7bdba82038e29e5d8e1 status=arm64_complete_bound indexed_start=True
0x06A2D42C: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A2D430: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A2D434: f49700b0  adrp x20, #0x7d2a000
0x06A2D438: 888a5139  ldrb w8, [x20, #0x462]
0x06A2D43C: f30300aa  mov x19, x0
0x06A2D440: 88010037  tbnz w8, #0, #0x6a2d470
0x06A2D444: 806200f0  adrp x0, #0x7680000
0x06A2D448: 00f840f9  ldr x0, [x0, #0x1f0]
0x06A2D44C: 734d1d97  bl #0x3180a18
0x06A2D450: 806200f0  adrp x0, #0x7680000
0x06A2D454: 00fc40f9  ldr x0, [x0, #0x1f8]
0x06A2D458: 704d1d97  bl #0x3180a18
0x06A2D45C: 006800d0  adrp x0, #0x772f000
0x06A2D460: 006441f9  ldr x0, [x0, #0x2c8]
0x06A2D464: 6d4d1d97  bl #0x3180a18
0x06A2D468: 28008052  movz w8, #0x1
0x06A2D46C: 888a1139  strb w8, [x20, #0x462]
0x06A2D470: e00313aa  mov x0, x19
0x06A2D474: dff9ff97  bl #0x6a2bbf0
0x06A2D478: 200300b4  cbz x0, #0x6a2d4dc
0x06A2D47C: 886200f0  adrp x8, #0x7680000
0x06A2D480: 08fd40f9  ldr x8, [x8, #0x1f8]
0x06A2D484: f30300aa  mov x19, x0
0x06A2D488: 140c40f9  ldr x20, [x0, #0x18]
0x06A2D48C: 156800d0  adrp x21, #0x772f000
0x06A2D490: 000140f9  ldr x0, [x8]
0x06A2D494: b56641f9  ldr x21, [x21, #0x2c8]
0x06A2D498: 024e1d97  bl #0x3180ca0
0x06A2D49C: a20240f9  ldr x2, [x21]
0x06A2D4A0: e1031faa  mov x1, xzr
0x06A2D4A4: e3031faa  mov x3, xzr
0x06A2D4A8: f50300aa  mov x21, x0
0x06A2D4AC: 2cc26497  bl #0x435dd5c
0x06A2D4B0: 740100b4  cbz x20, #0x6a2d4dc
0x06A2D4B4: 886200f0  adrp x8, #0x7680000
0x06A2D4B8: 08f940f9  ldr x8, [x8, #0x1f0]
0x06A2D4BC: e00314aa  mov x0, x20
0x06A2D4C0: e10315aa  mov x1, x21
0x06A2D4C4: 020140f9  ldr x2, [x8]
0x06A2D4C8: d9615897  bl #0x4045c2c
0x06A2D4CC: e00313aa  mov x0, x19
0x06A2D4D0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A2D4D4: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A2D4D8: c0035fd6  ret
0x06A2D4DC: f44d1d97  bl #0x3180cac

; RVA 0x6A2D4E0 | public Reward AggregateRewardTypesByConfigurationId() { }
; bytes=380 sha256=5be17232bd4291f96499d54083f1efb92b2f87267d6d73a63b23a1bb04b67249 status=arm64_complete_bound indexed_start=True
0x06A2D4E0: ff4301d1  sub sp, sp, #0x50
0x06A2D4E4: fe1300f9  str x30, [sp, #0x20]
0x06A2D4E8: f65703a9  stp x22, x21, [sp, #0x30]
0x06A2D4EC: f44f04a9  stp x20, x19, [sp, #0x40]
0x06A2D4F0: f39700b0  adrp x19, #0x7d2a000
0x06A2D4F4: 688e5139  ldrb w8, [x19, #0x463]
0x06A2D4F8: f40300aa  mov x20, x0
0x06A2D4FC: 48020037  tbnz w8, #0, #0x6a2d544
0x06A2D500: 60620090  adrp x0, #0x7679000
0x06A2D504: 00d847f9  ldr x0, [x0, #0xfb0]
0x06A2D508: 444d1d97  bl #0x3180a18
0x06A2D50C: 60620090  adrp x0, #0x7679000
0x06A2D510: 00dc47f9  ldr x0, [x0, #0xfb8]
0x06A2D514: 414d1d97  bl #0x3180a18
0x06A2D518: 60620090  adrp x0, #0x7679000
0x06A2D51C: 00e047f9  ldr x0, [x0, #0xfc0]
0x06A2D520: 3e4d1d97  bl #0x3180a18
0x06A2D524: 60620090  adrp x0, #0x7679000
0x06A2D528: 00e447f9  ldr x0, [x0, #0xfc8]
0x06A2D52C: 3b4d1d97  bl #0x3180a18
0x06A2D530: 006800d0  adrp x0, #0x772f000
0x06A2D534: 006841f9  ldr x0, [x0, #0x2d0]
0x06A2D538: 384d1d97  bl #0x3180a18
0x06A2D53C: 28008052  movz w8, #0x1
0x06A2D540: 688e1139  strb w8, [x19, #0x463]
0x06A2D544: e00314aa  mov x0, x20
0x06A2D548: ffff00a9  stp xzr, xzr, [sp, #8]
0x06A2D54C: ff0f00f9  str xzr, [sp, #0x18]
0x06A2D550: a8f9ff97  bl #0x6a2bbf0
0x06A2D554: e00400b4  cbz x0, #0x6a2d5f0
0x06A2D558: 086800d0  adrp x8, #0x772f000
0x06A2D55C: 086941f9  ldr x8, [x8, #0x2d0]
0x06A2D560: 010c40f9  ldr x1, [x0, #0x18]
0x06A2D564: f30300aa  mov x19, x0
0x06A2D568: e00314aa  mov x0, x20
0x06A2D56C: 020140f9  ldr x2, [x8]
0x06A2D570: b43e4d97  bl #0x3d7d040
0x06A2D574: f40300aa  mov x20, x0
0x06A2D578: e00313aa  mov x0, x19
0x06A2D57C: 38000094  bl #0x6a2d65c
0x06A2D580: 940300b4  cbz x20, #0x6a2d5f0
0x06A2D584: 68620090  adrp x8, #0x7679000
0x06A2D588: 08e547f9  ldr x8, [x8, #0xfc8]
0x06A2D58C: 75620090  adrp x21, #0x7679000
0x06A2D590: 76620090  adrp x22, #0x7679000
0x06A2D594: e00314aa  mov x0, x20
0x06A2D598: 010140f9  ldr x1, [x8]
0x06A2D59C: b5de47f9  ldr x21, [x21, #0xfb8]
0x06A2D5A0: d6da47f9  ldr x22, [x22, #0xfb0]
0x06A2D5A4: e8230091  add x8, sp, #8
0x06A2D5A8: b05e5897  bl #0x4045068
0x06A2D5AC: a10240f9  ldr x1, [x21]
0x06A2D5B0: e0230091  add x0, sp, #8
0x06A2D5B4: 00a19797  bl #0x50159b4
0x06A2D5B8: a0000036  tbz w0, #0, #0x6a2d5cc
0x06A2D5BC: e10f40f9  ldr x1, [sp, #0x18]
0x06A2D5C0: e00313aa  mov x0, x19
0x06A2D5C4: 42e1ff97  bl #0x6a25acc
0x06A2D5C8: f9ffff17  b #0x6a2d5ac
0x06A2D5CC: c10240f9  ldr x1, [x22]
0x06A2D5D0: e0230091  add x0, sp, #8
0x06A2D5D4: f7a09797  bl #0x50159b0
0x06A2D5D8: e00313aa  mov x0, x19
0x06A2D5DC: f44f44a9  ldp x20, x19, [sp, #0x40]
0x06A2D5E0: f65743a9  ldp x22, x21, [sp, #0x30]
0x06A2D5E4: fe1340f9  ldr x30, [sp, #0x20]
0x06A2D5E8: ff430191  add sp, sp, #0x50
0x06A2D5EC: c0035fd6  ret
0x06A2D5F0: af4d1d97  bl #0x3180cac
0x06A2D5F4: 01000014  b #0x6a2d5f8
0x06A2D5F8: f50300aa  mov x21, x0
0x06A2D5FC: 3f040071  cmp w1, #1
0x06A2D600: 61010054  b.ne #0x6a2d62c
0x06A2D604: e00315aa  mov x0, x21
0x06A2D608: c2841e94  bl #0x71ce910
0x06A2D60C: 140040f9  ldr x20, [x0]
0x06A2D610: c4841e94  bl #0x71ce920
0x06A2D614: c10240f9  ldr x1, [x22]
0x06A2D618: e0230091  add x0, sp, #8
0x06A2D61C: e5a09797  bl #0x50159b0
0x06A2D620: d4fdffb4  cbz x20, #0x6a2d5d8
0x06A2D624: e00314aa  mov x0, x20
0x06A2D628: 9f4d1d97  bl #0x3180ca4
0x06A2D62C: f4031faa  mov x20, xzr
0x06A2D630: 02000014  b #0x6a2d638
0x06A2D634: f50300aa  mov x21, x0
0x06A2D638: c10240f9  ldr x1, [x22]
0x06A2D63C: e0230091  add x0, sp, #8
0x06A2D640: dca09797  bl #0x50159b0
0x06A2D644: 740000b5  cbnz x20, #0x6a2d650
0x06A2D648: e00315aa  mov x0, x21
0x06A2D64C: c3e02097  bl #0x3265958
0x06A2D650: e00314aa  mov x0, x20
0x06A2D654: 944d1d97  bl #0x3180ca4
0x06A2D658: af6f0f97  bl #0x2e09514

; RVA 0x6A2D6CC | public Reward CloneAndRemoveEventXP() { }
; bytes=488 sha256=e289aec21ecb3711af38f03fca596fde828bd68bcf9dda1d567ca4e87e87b1d2 status=arm64_complete_bound indexed_start=True
0x06A2D6CC: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x06A2D6D0: f65701a9  stp x22, x21, [sp, #0x10]
0x06A2D6D4: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A2D6D8: f49700b0  adrp x20, #0x7d2a000
0x06A2D6DC: 88925139  ldrb w8, [x20, #0x464]
0x06A2D6E0: f30300aa  mov x19, x0
0x06A2D6E4: 08030037  tbnz w8, #0, #0x6a2d744
0x06A2D6E8: 806200f0  adrp x0, #0x7680000
0x06A2D6EC: 00f840f9  ldr x0, [x0, #0x1f0]
0x06A2D6F0: ca4c1d97  bl #0x3180a18
0x06A2D6F4: 006800d0  adrp x0, #0x772f000
0x06A2D6F8: 006c41f9  ldr x0, [x0, #0x2d8]
0x06A2D6FC: c74c1d97  bl #0x3180a18
0x06A2D700: 806200f0  adrp x0, #0x7680000
0x06A2D704: 00fc40f9  ldr x0, [x0, #0x1f8]
0x06A2D708: c44c1d97  bl #0x3180a18
0x06A2D70C: 006500b0  adrp x0, #0x76ce000
0x06A2D710: 00fc47f9  ldr x0, [x0, #0xff8]
0x06A2D714: c14c1d97  bl #0x3180a18
0x06A2D718: 006800d0  adrp x0, #0x772f000
0x06A2D71C: 007041f9  ldr x0, [x0, #0x2e0]
0x06A2D720: be4c1d97  bl #0x3180a18
0x06A2D724: 006800d0  adrp x0, #0x772f000
0x06A2D728: 007441f9  ldr x0, [x0, #0x2e8]
0x06A2D72C: bb4c1d97  bl #0x3180a18
0x06A2D730: 006800d0  adrp x0, #0x772f000
0x06A2D734: 00c040f9  ldr x0, [x0, #0x180]
0x06A2D738: b84c1d97  bl #0x3180a18
0x06A2D73C: 28008052  movz w8, #0x1
0x06A2D740: 88921139  strb w8, [x20, #0x464]
0x06A2D744: e00313aa  mov x0, x19
0x06A2D748: 2af9ff97  bl #0x6a2bbf0
0x06A2D74C: 200b00b4  cbz x0, #0x6a2d8b0
0x06A2D750: 176800d0  adrp x23, #0x772f000
0x06A2D754: f7c240f9  ldr x23, [x23, #0x180]
0x06A2D758: f30300aa  mov x19, x0
0x06A2D75C: 740e40f9  ldr x20, [x19, #0x18]
0x06A2D760: e00240f9  ldr x0, [x23]
0x06A2D764: 08e040b9  ldr w8, [x0, #0xe0]
0x06A2D768: 68000035  cbnz w8, #0x6a2d774
0x06A2D76C: 084d1d97  bl #0x3180b8c
0x06A2D770: e00240f9  ldr x0, [x23]
0x06A2D774: 085c40f9  ldr x8, [x0, #0xb8]
0x06A2D778: 153d40f9  ldr x21, [x8, #0x78]
0x06A2D77C: f50200b5  cbnz x21, #0x6a2d7d8
0x06A2D780: 08e040b9  ldr w8, [x0, #0xe0]
0x06A2D784: 68000035  cbnz w8, #0x6a2d790
0x06A2D788: 014d1d97  bl #0x3180b8c
0x06A2D78C: e00240f9  ldr x0, [x23]
0x06A2D790: 896200f0  adrp x9, #0x7680000
0x06A2D794: 085c40f9  ldr x8, [x0, #0xb8]
0x06A2D798: 29fd40f9  ldr x9, [x9, #0x1f8]
0x06A2D79C: 160140f9  ldr x22, [x8]
0x06A2D7A0: 200140f9  ldr x0, [x9]
0x06A2D7A4: 3f4d1d97  bl #0x3180ca0
0x06A2D7A8: 086800d0  adrp x8, #0x772f000
0x06A2D7AC: 087141f9  ldr x8, [x8, #0x2e0]
0x06A2D7B0: e10316aa  mov x1, x22
0x06A2D7B4: e3031faa  mov x3, xzr
0x06A2D7B8: f50300aa  mov x21, x0
0x06A2D7BC: 020140f9  ldr x2, [x8]
0x06A2D7C0: 67c16497  bl #0x435dd5c
0x06A2D7C4: e80240f9  ldr x8, [x23]
0x06A2D7C8: e10315aa  mov x1, x21
0x06A2D7CC: 005d40f9  ldr x0, [x8, #0xb8]
0x06A2D7D0: 158c07f8  str x21, [x0, #0x78]!
0x06A2D7D4: 7c4c1d97  bl #0x31809c4
0x06A2D7D8: d40600b4  cbz x20, #0x6a2d8b0
0x06A2D7DC: 886200f0  adrp x8, #0x7680000
0x06A2D7E0: 08f940f9  ldr x8, [x8, #0x1f0]
0x06A2D7E4: e00314aa  mov x0, x20
0x06A2D7E8: e10315aa  mov x1, x21
0x06A2D7EC: 020140f9  ldr x2, [x8]
0x06A2D7F0: 0f615897  bl #0x4045c2c
0x06A2D7F4: e00313aa  mov x0, x19
0x06A2D7F8: aaf4ff97  bl #0x6a2aaa0
0x06A2D7FC: e80240f9  ldr x8, [x23]
0x06A2D800: f40300aa  mov x20, x0
0x06A2D804: 09e140b9  ldr w9, [x8, #0xe0]
0x06A2D808: 89000035  cbnz w9, #0x6a2d818
0x06A2D80C: e00308aa  mov x0, x8
0x06A2D810: df4c1d97  bl #0x3180b8c
0x06A2D814: e80240f9  ldr x8, [x23]
0x06A2D818: 095d40f9  ldr x9, [x8, #0xb8]
0x06A2D81C: 354140f9  ldr x21, [x9, #0x80]
0x06A2D820: 150300b5  cbnz x21, #0x6a2d880
0x06A2D824: 09e140b9  ldr w9, [x8, #0xe0]
0x06A2D828: 89000035  cbnz w9, #0x6a2d838
0x06A2D82C: e00308aa  mov x0, x8
0x06A2D830: d74c1d97  bl #0x3180b8c
0x06A2D834: e80240f9  ldr x8, [x23]
0x06A2D838: 096500b0  adrp x9, #0x76ce000
0x06A2D83C: 085d40f9  ldr x8, [x8, #0xb8]
0x06A2D840: 29fd47f9  ldr x9, [x9, #0xff8]
0x06A2D844: 160140f9  ldr x22, [x8]
0x06A2D848: 200140f9  ldr x0, [x9]
0x06A2D84C: 154d1d97  bl #0x3180ca0
0x06A2D850: 086800d0  adrp x8, #0x772f000
0x06A2D854: 087541f9  ldr x8, [x8, #0x2e8]
0x06A2D858: e10316aa  mov x1, x22
0x06A2D85C: e3031faa  mov x3, xzr
0x06A2D860: f50300aa  mov x21, x0
0x06A2D864: 020140f9  ldr x2, [x8]
0x06A2D868: 3dc16497  bl #0x435dd5c
0x06A2D86C: e80240f9  ldr x8, [x23]
0x06A2D870: e10315aa  mov x1, x21
0x06A2D874: 005d40f9  ldr x0, [x8, #0xb8]
0x06A2D878: 150c08f8  str x21, [x0, #0x80]!
0x06A2D87C: 524c1d97  bl #0x31809c4
0x06A2D880: 940100b4  cbz x20, #0x6a2d8b0
0x06A2D884: 086800d0  adrp x8, #0x772f000
0x06A2D888: 086d41f9  ldr x8, [x8, #0x2d8]
0x06A2D88C: e00314aa  mov x0, x20
0x06A2D890: e10315aa  mov x1, x21
0x06A2D894: 020140f9  ldr x2, [x8]
0x06A2D898: e5605897  bl #0x4045c2c
0x06A2D89C: e00313aa  mov x0, x19
0x06A2D8A0: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A2D8A4: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A2D8A8: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x06A2D8AC: c0035fd6  ret
0x06A2D8B0: ff4c1d97  bl #0x3180cac

; RVA 0x6A25ACC | public void AddViewData(IRewardViewData rewardViewData) { }
; bytes=172 sha256=3673948ae3b76858e6e00d22b73780eb2a670bbaf6ceaf564f4b7cf4018e771c status=arm64_complete_bound indexed_start=True
0x06A25ACC: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A25AD0: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A25AD4: 359800b0  adrp x21, #0x7d2a000
0x06A25AD8: a8965139  ldrb w8, [x21, #0x465]
0x06A25ADC: f30301aa  mov x19, x1
0x06A25AE0: f40300aa  mov x20, x0
0x06A25AE4: c8000037  tbnz w8, #0, #0x6a25afc
0x06A25AE8: 80620090  adrp x0, #0x7675000
0x06A25AEC: 00e840f9  ldr x0, [x0, #0x1d0]
0x06A25AF0: ca6b1d97  bl #0x3180a18
0x06A25AF4: 28008052  movz w8, #0x1
0x06A25AF8: a8961139  strb w8, [x21, #0x465]
0x06A25AFC: 800e40f9  ldr x0, [x20, #0x18]
0x06A25B00: a00300b4  cbz x0, #0x6a25b74
0x06A25B04: 89620090  adrp x9, #0x7675000
0x06A25B08: 29e940f9  ldr x9, [x9, #0x1d0]
0x06A25B0C: 0a1c40b9  ldr w10, [x0, #0x1c]
0x06A25B10: 080840f9  ldr x8, [x0, #0x10]
0x06A25B14: 290140f9  ldr x9, [x9]
0x06A25B18: 4a050011  add w10, w10, #1
0x06A25B1C: 0a1c00b9  str w10, [x0, #0x1c]
0x06A25B20: a80200b4  cbz x8, #0x6a25b74
0x06A25B24: 0a1880b9  ldrsw x10, [x0, #0x18]
0x06A25B28: 0b1940b9  ldr w11, [x8, #0x18]
0x06A25B2C: 5f010b6b  cmp w10, w11
0x06A25B30: 42010054  b.hs #0x6a25b58
0x06A25B34: 49050011  add w9, w10, #1
0x06A25B38: 080d0a8b  add x8, x8, x10, lsl #3
0x06A25B3C: 091800b9  str w9, [x0, #0x18]
0x06A25B40: 130d02f8  str x19, [x8, #0x20]!
0x06A25B44: e10313aa  mov x1, x19
0x06A25B48: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A25B4C: e00308aa  mov x0, x8
0x06A25B50: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A25B54: 9c6b1d17  b #0x31809c4
0x06A25B58: 281140f9  ldr x8, [x9, #0x20]
0x06A25B5C: e10313aa  mov x1, x19
0x06A25B60: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A25B64: 086140f9  ldr x8, [x8, #0xc0]
0x06A25B68: 023940f9  ldr x2, [x8, #0x70]
0x06A25B6C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A25B70: 3f7a5817  b #0x404446c
0x06A25B74: 4e6c1d97  bl #0x3180cac

; RVA 0x6A2D65C | public void Clear() { }
; bytes=112 sha256=51b6bba3ce88437c3392b9f83b9c82d8d4587199760946e95bd0d7d1620d9754 status=arm64_complete_bound indexed_start=True
0x06A2D65C: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A2D660: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A2D664: f49700b0  adrp x20, #0x7d2a000
0x06A2D668: 889a5139  ldrb w8, [x20, #0x466]
0x06A2D66C: f30300aa  mov x19, x0
0x06A2D670: c8000037  tbnz w8, #0, #0x6a2d688
0x06A2D674: 00650090  adrp x0, #0x76cd000
0x06A2D678: 004047f9  ldr x0, [x0, #0xe80]
0x06A2D67C: e74c1d97  bl #0x3180a18
0x06A2D680: 28008052  movz w8, #0x1
0x06A2D684: 889a1139  strb w8, [x20, #0x466]
0x06A2D688: 680e40f9  ldr x8, [x19, #0x18]
0x06A2D68C: e80100b4  cbz x8, #0x6a2d6c8
0x06A2D690: 02254329  ldp w2, w9, [x8, #0x18]
0x06A2D694: 29050011  add w9, w9, #1
0x06A2D698: 5f040071  cmp w2, #1
0x06A2D69C: 1f250329  stp wzr, w9, [x8, #0x18]
0x06A2D6A0: eb000054  b.lt #0x6a2d6bc
0x06A2D6A4: 000940f9  ldr x0, [x8, #0x10]
0x06A2D6A8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A2D6AC: e1031f2a  mov w1, wzr
0x06A2D6B0: e3031faa  mov x3, xzr
0x06A2D6B4: fe0742f8  ldr x30, [sp], #0x20
0x06A2D6B8: 7131b217  b #0x56b9c7c
0x06A2D6BC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A2D6C0: fe0742f8  ldr x30, [sp], #0x20
0x06A2D6C4: c0035fd6  ret
0x06A2D6C8: 794d1d97  bl #0x3180cac

; RVA 0x6A2B1F0 | public int Count(IRewardType rewardType) { }
; bytes=232 sha256=7c4fd3bd0d41d7dd5bee6b3fd60df04ef4c4c3a3e71059116fa9b554747bab91 status=arm64_complete_bound indexed_start=True
0x06A2B1F0: fe0f1cf8  str x30, [sp, #-0x40]!
0x06A2B1F4: f85f01a9  stp x24, x23, [sp, #0x10]
0x06A2B1F8: f65702a9  stp x22, x21, [sp, #0x20]
0x06A2B1FC: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A2B200: f59700f0  adrp x21, #0x7d2a000
0x06A2B204: 36680090  adrp x22, #0x772f000
0x06A2B208: a89e5139  ldrb w8, [x21, #0x467]
0x06A2B20C: d6ae40f9  ldr x22, [x22, #0x158]
0x06A2B210: f40301aa  mov x20, x1
0x06A2B214: f30300aa  mov x19, x0
0x06A2B218: e8010037  tbnz w8, #0, #0x6a2b254
0x06A2B21C: 20680090  adrp x0, #0x772f000
0x06A2B220: 00b040f9  ldr x0, [x0, #0x160]
0x06A2B224: fd551d97  bl #0x3180a18
0x06A2B228: 206200d0  adrp x0, #0x7671000
0x06A2B22C: 00bc43f9  ldr x0, [x0, #0x778]
0x06A2B230: fa551d97  bl #0x3180a18
0x06A2B234: 20680090  adrp x0, #0x772f000
0x06A2B238: 00b440f9  ldr x0, [x0, #0x168]
0x06A2B23C: f7551d97  bl #0x3180a18
0x06A2B240: 20680090  adrp x0, #0x772f000
0x06A2B244: 00ac40f9  ldr x0, [x0, #0x158]
0x06A2B248: f4551d97  bl #0x3180a18
0x06A2B24C: 28008052  movz w8, #0x1
0x06A2B250: a89e1139  strb w8, [x21, #0x467]
0x06A2B254: c00240f9  ldr x0, [x22]
0x06A2B258: 92561d97  bl #0x3180ca0
0x06A2B25C: e1031faa  mov x1, xzr
0x06A2B260: f50300aa  mov x21, x0
0x06A2B264: e6bcb297  bl #0x56da5fc
0x06A2B268: 750300b4  cbz x21, #0x6a2b2d4
0x06A2B26C: 366200d0  adrp x22, #0x7671000
0x06A2B270: 37680090  adrp x23, #0x772f000
0x06A2B274: 38680090  adrp x24, #0x772f000
0x06A2B278: d6be43f9  ldr x22, [x22, #0x778]
0x06A2B27C: f7b640f9  ldr x23, [x23, #0x168]
0x06A2B280: 18b340f9  ldr x24, [x24, #0x160]
0x06A2B284: e00315aa  mov x0, x21
0x06A2B288: 140c01f8  str x20, [x0, #0x10]!
0x06A2B28C: e10314aa  mov x1, x20
0x06A2B290: cd551d97  bl #0x31809c4
0x06A2B294: c00240f9  ldr x0, [x22]
0x06A2B298: 730e40f9  ldr x19, [x19, #0x18]
0x06A2B29C: 81561d97  bl #0x3180ca0
0x06A2B2A0: e20240f9  ldr x2, [x23]
0x06A2B2A4: e10315aa  mov x1, x21
0x06A2B2A8: e3031faa  mov x3, xzr
0x06A2B2AC: f40300aa  mov x20, x0
0x06A2B2B0: 43aba097  bl #0x5255fbc
0x06A2B2B4: 020340f9  ldr x2, [x24]
0x06A2B2B8: e00313aa  mov x0, x19
0x06A2B2BC: e10314aa  mov x1, x20
0x06A2B2C0: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A2B2C4: f65742a9  ldp x22, x21, [sp, #0x20]
0x06A2B2C8: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06A2B2CC: fe0744f8  ldr x30, [sp], #0x40
0x06A2B2D0: 0f424817  b #0x3c3bb0c
0x06A2B2D4: 76561d97  bl #0x3180cac

; RVA 0x6A2AE4C | public int Count(IEnumerable<IRewardType> rewardTypes) { }
; bytes=740 sha256=992a846efe1358101e8761a4c55648e79311224548b0d700629c8b82cfdea0a9 status=arm64_complete_bound indexed_start=True
0x06A2AE4C: fe0f1cf8  str x30, [sp, #-0x40]!
0x06A2AE50: f85f01a9  stp x24, x23, [sp, #0x10]
0x06A2AE54: f65702a9  stp x22, x21, [sp, #0x20]
0x06A2AE58: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A2AE5C: 14980090  adrp x20, #0x7d2a000
0x06A2AE60: 88a25139  ldrb w8, [x20, #0x468]
0x06A2AE64: f30301aa  mov x19, x1
0x06A2AE68: f50300aa  mov x21, x0
0x06A2AE6C: e8010037  tbnz w8, #0, #0x6a2aea8
0x06A2AE70: 20610090  adrp x0, #0x764e000
0x06A2AE74: 006444f9  ldr x0, [x0, #0x8c8]
0x06A2AE78: e8561d97  bl #0x3180a18
0x06A2AE7C: 406200b0  adrp x0, #0x7673000
0x06A2AE80: 008c40f9  ldr x0, [x0, #0x118]
0x06A2AE84: e5561d97  bl #0x3180a18
0x06A2AE88: 406200b0  adrp x0, #0x7673000
0x06A2AE8C: 009040f9  ldr x0, [x0, #0x120]
0x06A2AE90: e2561d97  bl #0x3180a18
0x06A2AE94: 20610090  adrp x0, #0x764e000
0x06A2AE98: 007044f9  ldr x0, [x0, #0x8e0]
0x06A2AE9C: df561d97  bl #0x3180a18
0x06A2AEA0: 28008052  movz w8, #0x1
0x06A2AEA4: 88a21139  strb w8, [x20, #0x468]
0x06A2AEA8: 730e00b4  cbz x19, #0x6a2b074
0x06A2AEAC: 4a6200b0  adrp x10, #0x7673000
0x06A2AEB0: 680240f9  ldr x8, [x19]
0x06A2AEB4: 4a8d40f9  ldr x10, [x10, #0x118]
0x06A2AEB8: 095d4279  ldrh w9, [x8, #0x12e]
0x06A2AEBC: 410140f9  ldr x1, [x10]
0x06A2AEC0: 290100b4  cbz x9, #0x6a2aee4
0x06A2AEC4: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A2AEC8: 4a210091  add x10, x10, #8
0x06A2AECC: 4b815ff8  ldur x11, [x10, #-8]
0x06A2AED0: 7f0101eb  cmp x11, x1
0x06A2AED4: 00010054  b.eq #0x6a2aef4
0x06A2AED8: 290500f1  subs x9, x9, #1
0x06A2AEDC: 4a410091  add x10, x10, #0x10
0x06A2AEE0: 61ffff54  b.ne #0x6a2aecc
0x06A2AEE4: e00313aa  mov x0, x19
0x06A2AEE8: e2031f2a  mov w2, wzr
0x06A2AEEC: 09af1c97  bl #0x3156b10
0x06A2AEF0: 04000014  b #0x6a2af00
0x06A2AEF4: 490180b9  ldrsw x9, [x10]
0x06A2AEF8: 0811098b  add x8, x8, x9, lsl #4
0x06A2AEFC: 00e10491  add x0, x8, #0x138
0x06A2AF00: 080440a9  ldp x8, x1, [x0]
0x06A2AF04: 36610090  adrp x22, #0x764e000
0x06A2AF08: d66644f9  ldr x22, [x22, #0x8c8]
0x06A2AF0C: e00313aa  mov x0, x19
0x06A2AF10: 00013fd6  blr x8
0x06A2AF14: f30300aa  mov x19, x0
0x06A2AF18: 000b00b4  cbz x0, #0x6a2b078
0x06A2AF1C: 37610090  adrp x23, #0x764e000
0x06A2AF20: 586200b0  adrp x24, #0x7673000
0x06A2AF24: f77244f9  ldr x23, [x23, #0x8e0]
0x06A2AF28: 189340f9  ldr x24, [x24, #0x120]
0x06A2AF2C: f4031f2a  mov w20, wzr
0x06A2AF30: 680240f9  ldr x8, [x19]
0x06A2AF34: e10240f9  ldr x1, [x23]
0x06A2AF38: 095d4279  ldrh w9, [x8, #0x12e]
0x06A2AF3C: 290100b4  cbz x9, #0x6a2af60
0x06A2AF40: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A2AF44: 4a210091  add x10, x10, #8
0x06A2AF48: 4b815ff8  ldur x11, [x10, #-8]
0x06A2AF4C: 7f0101eb  cmp x11, x1
0x06A2AF50: 00010054  b.eq #0x6a2af70
0x06A2AF54: 290500f1  subs x9, x9, #1
0x06A2AF58: 4a410091  add x10, x10, #0x10
0x06A2AF5C: 61ffff54  b.ne #0x6a2af48
0x06A2AF60: e00313aa  mov x0, x19
0x06A2AF64: e2031f2a  mov w2, wzr
0x06A2AF68: eaae1c97  bl #0x3156b10
0x06A2AF6C: 04000014  b #0x6a2af7c
0x06A2AF70: 490180b9  ldrsw x9, [x10]
0x06A2AF74: 0811098b  add x8, x8, x9, lsl #4
0x06A2AF78: 00e10491  add x0, x8, #0x138
0x06A2AF7C: 080440a9  ldp x8, x1, [x0]
0x06A2AF80: e00313aa  mov x0, x19
0x06A2AF84: 00013fd6  blr x8
0x06A2AF88: 80030036  tbz w0, #0, #0x6a2aff8
0x06A2AF8C: 680240f9  ldr x8, [x19]
0x06A2AF90: 010340f9  ldr x1, [x24]
0x06A2AF94: 095d4279  ldrh w9, [x8, #0x12e]
0x06A2AF98: 290100b4  cbz x9, #0x6a2afbc
0x06A2AF9C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A2AFA0: 4a210091  add x10, x10, #8
0x06A2AFA4: 4b815ff8  ldur x11, [x10, #-8]
0x06A2AFA8: 7f0101eb  cmp x11, x1
0x06A2AFAC: 00010054  b.eq #0x6a2afcc
0x06A2AFB0: 290500f1  subs x9, x9, #1
0x06A2AFB4: 4a410091  add x10, x10, #0x10
0x06A2AFB8: 61ffff54  b.ne #0x6a2afa4
0x06A2AFBC: e00313aa  mov x0, x19
0x06A2AFC0: e2031f2a  mov w2, wzr
0x06A2AFC4: d3ae1c97  bl #0x3156b10
0x06A2AFC8: 04000014  b #0x6a2afd8
0x06A2AFCC: 490180b9  ldrsw x9, [x10]
0x06A2AFD0: 0811098b  add x8, x8, x9, lsl #4
0x06A2AFD4: 00e10491  add x0, x8, #0x138
0x06A2AFD8: 080440a9  ldp x8, x1, [x0]
0x06A2AFDC: e00313aa  mov x0, x19
0x06A2AFE0: 00013fd6  blr x8
0x06A2AFE4: e10300aa  mov x1, x0
0x06A2AFE8: e00315aa  mov x0, x21
0x06A2AFEC: 81000094  bl #0x6a2b1f0
0x06A2AFF0: 1400140b  add w20, w0, w20
0x06A2AFF4: cfffff17  b #0x6a2af30
0x06A2AFF8: f5031faa  mov x21, xzr
0x06A2AFFC: f30200b4  cbz x19, #0x6a2b058
0x06A2B000: 680240f9  ldr x8, [x19]
0x06A2B004: c10240f9  ldr x1, [x22]
0x06A2B008: 095d4279  ldrh w9, [x8, #0x12e]
0x06A2B00C: 290100b4  cbz x9, #0x6a2b030
0x06A2B010: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A2B014: 4a210091  add x10, x10, #8
0x06A2B018: 4b815ff8  ldur x11, [x10, #-8]
0x06A2B01C: 7f0101eb  cmp x11, x1
0x06A2B020: 00010054  b.eq #0x6a2b040
0x06A2B024: 290500f1  subs x9, x9, #1
0x06A2B028: 4a410091  add x10, x10, #0x10
0x06A2B02C: 61ffff54  b.ne #0x6a2b018
0x06A2B030: e00313aa  mov x0, x19
0x06A2B034: e2031f2a  mov w2, wzr
0x06A2B038: b6ae1c97  bl #0x3156b10
0x06A2B03C: 04000014  b #0x6a2b04c
0x06A2B040: 490180b9  ldrsw x9, [x10]
0x06A2B044: 0811098b  add x8, x8, x9, lsl #4
0x06A2B048: 00e10491  add x0, x8, #0x138
0x06A2B04C: 080440a9  ldp x8, x1, [x0]
0x06A2B050: e00313aa  mov x0, x19
0x06A2B054: 00013fd6  blr x8
0x06A2B058: 350100b5  cbnz x21, #0x6a2b07c
0x06A2B05C: e003142a  mov w0, w20
0x06A2B060: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A2B064: f65742a9  ldp x22, x21, [sp, #0x20]
0x06A2B068: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06A2B06C: fe0744f8  ldr x30, [sp], #0x40
0x06A2B070: c0035fd6  ret
0x06A2B074: 0e571d97  bl #0x3180cac
0x06A2B078: 0d571d97  bl #0x3180cac
0x06A2B07C: e00315aa  mov x0, x21
0x06A2B080: 09571d97  bl #0x3180ca4
0x06A2B084: f4031f2a  mov w20, wzr
0x06A2B088: 03000014  b #0x6a2b094
0x06A2B08C: 02000014  b #0x6a2b094
0x06A2B090: 01000014  b #0x6a2b094
0x06A2B094: 3f040071  cmp w1, #1
0x06A2B098: a1000054  b.ne #0x6a2b0ac
0x06A2B09C: 1d8e1e94  bl #0x71ce910
0x06A2B0A0: 150040f9  ldr x21, [x0]
0x06A2B0A4: 1f8e1e94  bl #0x71ce920
0x06A2B0A8: d5ffff17  b #0x6a2affc
0x06A2B0AC: f40300aa  mov x20, x0
0x06A2B0B0: f5031faa  mov x21, xzr
0x06A2B0B4: 02000014  b #0x6a2b0bc
0x06A2B0B8: f40300aa  mov x20, x0
0x06A2B0BC: f30200b4  cbz x19, #0x6a2b118
0x06A2B0C0: 680240f9  ldr x8, [x19]
0x06A2B0C4: c10240f9  ldr x1, [x22]
0x06A2B0C8: 095d4279  ldrh w9, [x8, #0x12e]
0x06A2B0CC: 290100b4  cbz x9, #0x6a2b0f0
0x06A2B0D0: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A2B0D4: 4a210091  add x10, x10, #8
0x06A2B0D8: 4b815ff8  ldur x11, [x10, #-8]
0x06A2B0DC: 7f0101eb  cmp x11, x1
0x06A2B0E0: 00010054  b.eq #0x6a2b100
0x06A2B0E4: 290500f1  subs x9, x9, #1
0x06A2B0E8: 4a410091  add x10, x10, #0x10
0x06A2B0EC: 61ffff54  b.ne #0x6a2b0d8
0x06A2B0F0: e00313aa  mov x0, x19
0x06A2B0F4: e2031f2a  mov w2, wzr
0x06A2B0F8: 86ae1c97  bl #0x3156b10
0x06A2B0FC: 04000014  b #0x6a2b10c
0x06A2B100: 490180b9  ldrsw x9, [x10]
0x06A2B104: 0811098b  add x8, x8, x9, lsl #4
0x06A2B108: 00e10491  add x0, x8, #0x138
0x06A2B10C: 080440a9  ldp x8, x1, [x0]
0x06A2B110: e00313aa  mov x0, x19
0x06A2B114: 00013fd6  blr x8
0x06A2B118: 750000b5  cbnz x21, #0x6a2b124
0x06A2B11C: e00314aa  mov x0, x20
0x06A2B120: 0eea2097  bl #0x3265958
0x06A2B124: e00315aa  mov x0, x21
0x06A2B128: df561d97  bl #0x3180ca4
0x06A2B12C: fa780f97  bl #0x2e09514

; RVA 0x6A2D8BC | public bool RequiresTapToClaimPopup() { }
; bytes=256 sha256=97bea3f45a3eea43fd31b68b2e9676d6d1d5a43db77b88fdab66553e0927fc28 status=arm64_complete_bound indexed_start=True
0x06A2D8BC: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A2D8C0: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A2D8C4: f49700b0  adrp x20, #0x7d2a000
0x06A2D8C8: 88a65139  ldrb w8, [x20, #0x469]
0x06A2D8CC: f30300aa  mov x19, x0
0x06A2D8D0: 88010037  tbnz w8, #0, #0x6a2d900
0x06A2D8D4: 60650090  adrp x0, #0x76d9000
0x06A2D8D8: 008c41f9  ldr x0, [x0, #0x318]
0x06A2D8DC: 4f4c1d97  bl #0x3180a18
0x06A2D8E0: 606200d0  adrp x0, #0x767b000
0x06A2D8E4: 006041f9  ldr x0, [x0, #0x2c0]
0x06A2D8E8: 4c4c1d97  bl #0x3180a18
0x06A2D8EC: 806200f0  adrp x0, #0x7680000
0x06A2D8F0: 00e840f9  ldr x0, [x0, #0x1d0]
0x06A2D8F4: 494c1d97  bl #0x3180a18
0x06A2D8F8: 28008052  movz w8, #0x1
0x06A2D8FC: 88a61139  strb w8, [x20, #0x469]
0x06A2D900: 600e40f9  ldr x0, [x19, #0x18]
0x06A2D904: a00500b4  cbz x0, #0x6a2d9b8
0x06A2D908: 081840b9  ldr w8, [x0, #0x18]
0x06A2D90C: 1f050071  cmp w8, #1
0x06A2D910: 4b030054  b.lt #0x6a2d978
0x06A2D914: 61030054  b.ne #0x6a2d980
0x06A2D918: 68650090  adrp x8, #0x76d9000
0x06A2D91C: 088d41f9  ldr x8, [x8, #0x318]
0x06A2D920: 010140f9  ldr x1, [x8]
0x06A2D924: 344c4897  bl #0x3c409f4
0x06A2D928: 800400b4  cbz x0, #0x6a2d9b8
0x06A2D92C: 6a6200d0  adrp x10, #0x767b000
0x06A2D930: 080040f9  ldr x8, [x0]
0x06A2D934: 4a6141f9  ldr x10, [x10, #0x2c0]
0x06A2D938: f30300aa  mov x19, x0
0x06A2D93C: 095d4279  ldrh w9, [x8, #0x12e]
0x06A2D940: 410140f9  ldr x1, [x10]
0x06A2D944: 290100b4  cbz x9, #0x6a2d968
0x06A2D948: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A2D94C: 4a210091  add x10, x10, #8
0x06A2D950: 4b815ff8  ldur x11, [x10, #-8]
0x06A2D954: 7f0101eb  cmp x11, x1
0x06A2D958: 80010054  b.eq #0x6a2d988
0x06A2D95C: 290500f1  subs x9, x9, #1
0x06A2D960: 4a410091  add x10, x10, #0x10
0x06A2D964: 61ffff54  b.ne #0x6a2d950
0x06A2D968: 62008052  movz w2, #0x3
0x06A2D96C: e00313aa  mov x0, x19
0x06A2D970: 68a41c97  bl #0x3156b10
0x06A2D974: 09000014  b #0x6a2d998
0x06A2D978: e8031f2a  mov w8, wzr
0x06A2D97C: 0b000014  b #0x6a2d9a8
0x06A2D980: 28008052  movz w8, #0x1
0x06A2D984: 09000014  b #0x6a2d9a8
0x06A2D988: 490140b9  ldr w9, [x10]
0x06A2D98C: 290d0011  add w9, w9, #3
0x06A2D990: 08d1298b  add x8, x8, w9, sxtw #4
0x06A2D994: 00e10491  add x0, x8, #0x138
0x06A2D998: 080440a9  ldp x8, x1, [x0]
0x06A2D99C: e00313aa  mov x0, x19
0x06A2D9A0: 00013fd6  blr x8
0x06A2D9A4: 08000052  eor w8, w0, #1
0x06A2D9A8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A2D9AC: 00010012  and w0, w8, #1
0x06A2D9B0: fe0742f8  ldr x30, [sp], #0x20
0x06A2D9B4: c0035fd6  ret
0x06A2D9B8: bd4c1d97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D7C7F4 | MergeEngine.Configuration.Definitions.Reward$$EnrichMultipleWithConditionals<object>
; native signature: System_Collections_Generic_List_TMultiple__o* MergeEngine_Configuration_Definitions_Reward__EnrichMultipleWithConditionals_object_ (MergeEngine_Configuration_Definitions_Reward_o* __this, System_Collections_Generic_List_TMultiple__o* multipleList, const MethodInfo_3D7C7F4* method);
; bytes=356 sha256=dce934f0e065082ef3db1eaac8fc44df576dec48cc51443b8a1715898bc7b484 status=arm64_complete_bound indexed_start=True
0x03D7C7F4: ff0301d1  sub sp, sp, #0x40
0x03D7C7F8: fe5702a9  stp x30, x21, [sp, #0x20]
0x03D7C7FC: f44f03a9  stp x20, x19, [sp, #0x30]
0x03D7C800: 481c40f9  ldr x8, [x2, #0x38]
0x03D7C804: f40302aa  mov x20, x2
0x03D7C808: f30301aa  mov x19, x1
0x03D7C80C: f50300aa  mov x21, x0
0x03D7C810: 280200b5  cbnz x8, #0x3d7c854
0x03D7C814: e0c701f0  adrp x0, #0x767b000
0x03D7C818: 007041f9  ldr x0, [x0, #0x2e0]
0x03D7C81C: 7f10d097  bl #0x3180a18
0x03D7C820: e0c701f0  adrp x0, #0x767b000
0x03D7C824: 007441f9  ldr x0, [x0, #0x2e8]
0x03D7C828: 7c10d097  bl #0x3180a18
0x03D7C82C: e0c701f0  adrp x0, #0x767b000
0x03D7C830: 007841f9  ldr x0, [x0, #0x2f0]
0x03D7C834: 7910d097  bl #0x3180a18
0x03D7C838: e0c701f0  adrp x0, #0x767b000
0x03D7C83C: 007c41f9  ldr x0, [x0, #0x2f8]
0x03D7C840: 7610d097  bl #0x3180a18
0x03D7C844: 881e40f9  ldr x8, [x20, #0x38]
0x03D7C848: 680000b5  cbnz x8, #0x3d7c854
0x03D7C84C: e00314aa  mov x0, x20
0x03D7C850: 0a68cf97  bl #0x3156878
0x03D7C854: ffff00a9  stp xzr, xzr, [sp, #8]
0x03D7C858: ff0f00f9  str xzr, [sp, #0x18]
0x03D7C85C: a00a40f9  ldr x0, [x21, #0x10]
0x03D7C860: c00300b4  cbz x0, #0x3d7c8d8
0x03D7C864: e8c701f0  adrp x8, #0x767b000
0x03D7C868: 087d41f9  ldr x8, [x8, #0x2f8]
0x03D7C86C: 010140f9  ldr x1, [x8]
0x03D7C870: e8230091  add x8, sp, #8
0x03D7C874: fd210b94  bl #0x4045068
0x03D7C878: f5c701f0  adrp x21, #0x767b000
0x03D7C87C: b57641f9  ldr x21, [x21, #0x2e8]
0x03D7C880: a10240f9  ldr x1, [x21]
0x03D7C884: e0230091  add x0, sp, #8
0x03D7C888: 4b644a94  bl #0x50159b4
0x03D7C88C: 00010036  tbz w0, #0, #0x3d7c8ac
0x03D7C890: e00f40f9  ldr x0, [sp, #0x18]
0x03D7C894: 000200b4  cbz x0, #0x3d7c8d4
0x03D7C898: 881e40f9  ldr x8, [x20, #0x38]
0x03D7C89C: 020540f9  ldr x2, [x8, #8]
0x03D7C8A0: e10313aa  mov x1, x19
0x03D7C8A4: 65cbf997  bl #0x3bef638
0x03D7C8A8: f6ffff17  b #0x3d7c880
0x03D7C8AC: e8c701f0  adrp x8, #0x767b000
0x03D7C8B0: 087141f9  ldr x8, [x8, #0x2e0]
0x03D7C8B4: e0230091  add x0, sp, #8
0x03D7C8B8: 010140f9  ldr x1, [x8]
0x03D7C8BC: 3d644a94  bl #0x50159b0
0x03D7C8C0: e00313aa  mov x0, x19
0x03D7C8C4: f44f43a9  ldp x20, x19, [sp, #0x30]
0x03D7C8C8: fe5742a9  ldp x30, x21, [sp, #0x20]
0x03D7C8CC: ff030191  add sp, sp, #0x40
0x03D7C8D0: c0035fd6  ret
0x03D7C8D4: f610d097  bl #0x3180cac
0x03D7C8D8: f510d097  bl #0x3180cac
0x03D7C8DC: 02000014  b #0x3d7c8e4
0x03D7C8E0: 01000014  b #0x3d7c8e4
0x03D7C8E4: f40300aa  mov x20, x0
0x03D7C8E8: 3f040071  cmp w1, #1
0x03D7C8EC: a1010054  b.ne #0x3d7c920
0x03D7C8F0: e00314aa  mov x0, x20
0x03D7C8F4: 0748d194  bl #0x71ce910
0x03D7C8F8: 150040f9  ldr x21, [x0]
0x03D7C8FC: 0948d194  bl #0x71ce920
0x03D7C900: e8c701f0  adrp x8, #0x767b000
0x03D7C904: 087141f9  ldr x8, [x8, #0x2e0]
0x03D7C908: e0230091  add x0, sp, #8
0x03D7C90C: 010140f9  ldr x1, [x8]
0x03D7C910: 28644a94  bl #0x50159b0
0x03D7C914: 75fdffb4  cbz x21, #0x3d7c8c0
0x03D7C918: e00315aa  mov x0, x21
0x03D7C91C: e210d097  bl #0x3180ca4
0x03D7C920: f5031faa  mov x21, xzr
0x03D7C924: 02000014  b #0x3d7c92c
0x03D7C928: f40300aa  mov x20, x0
0x03D7C92C: e8c701f0  adrp x8, #0x767b000
0x03D7C930: 087141f9  ldr x8, [x8, #0x2e0]
0x03D7C934: 010140f9  ldr x1, [x8]
0x03D7C938: e0230091  add x0, sp, #8
0x03D7C93C: 1d644a94  bl #0x50159b0
0x03D7C940: 750000b5  cbnz x21, #0x3d7c94c
0x03D7C944: e00314aa  mov x0, x20
0x03D7C948: 04a4d397  bl #0x3265958
0x03D7C94C: e00315aa  mov x0, x21
0x03D7C950: d510d097  bl #0x3180ca4
0x03D7C954: f032c297  bl #0x2e09514

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D7C958 | MergeEngine.Configuration.Definitions.Reward$$EnrichMultipleWithConditionals<__Il2CppFullySharedGenericType>
; native signature: System_Collections_Generic_List_TMultiple__o* MergeEngine_Configuration_Definitions_Reward__EnrichMultipleWithConditionals___Il2CppFullySharedGenericType_ (MergeEngine_Configuration_Definitions_Reward_o* __this, System_Collections_Generic_List_TMultiple__o* multipleList, const MethodInfo_3D7C958* method);
; bytes=360 sha256=1605c6c96158443feb057941c1a63834087c0243d05f8edd45b3bbdcf7ad9dc8 status=arm64_complete_bound indexed_start=True
0x03D7C958: ff0301d1  sub sp, sp, #0x40
0x03D7C95C: fe5702a9  stp x30, x21, [sp, #0x20]
0x03D7C960: f44f03a9  stp x20, x19, [sp, #0x30]
0x03D7C964: 481c40f9  ldr x8, [x2, #0x38]
0x03D7C968: f40302aa  mov x20, x2
0x03D7C96C: f30301aa  mov x19, x1
0x03D7C970: f50300aa  mov x21, x0
0x03D7C974: 280200b5  cbnz x8, #0x3d7c9b8
0x03D7C978: e0c701f0  adrp x0, #0x767b000
0x03D7C97C: 007041f9  ldr x0, [x0, #0x2e0]
0x03D7C980: 2610d097  bl #0x3180a18
0x03D7C984: e0c701f0  adrp x0, #0x767b000
0x03D7C988: 007441f9  ldr x0, [x0, #0x2e8]
0x03D7C98C: 2310d097  bl #0x3180a18
0x03D7C990: e0c701f0  adrp x0, #0x767b000
0x03D7C994: 007841f9  ldr x0, [x0, #0x2f0]
0x03D7C998: 2010d097  bl #0x3180a18
0x03D7C99C: e0c701f0  adrp x0, #0x767b000
0x03D7C9A0: 007c41f9  ldr x0, [x0, #0x2f8]
0x03D7C9A4: 1d10d097  bl #0x3180a18
0x03D7C9A8: 881e40f9  ldr x8, [x20, #0x38]
0x03D7C9AC: 680000b5  cbnz x8, #0x3d7c9b8
0x03D7C9B0: e00314aa  mov x0, x20
0x03D7C9B4: b167cf97  bl #0x3156878
0x03D7C9B8: ffff00a9  stp xzr, xzr, [sp, #8]
0x03D7C9BC: ff0f00f9  str xzr, [sp, #0x18]
0x03D7C9C0: a00a40f9  ldr x0, [x21, #0x10]
0x03D7C9C4: e00300b4  cbz x0, #0x3d7ca40
0x03D7C9C8: e8c701f0  adrp x8, #0x767b000
0x03D7C9CC: 087d41f9  ldr x8, [x8, #0x2f8]
0x03D7C9D0: 010140f9  ldr x1, [x8]
0x03D7C9D4: e8230091  add x8, sp, #8
0x03D7C9D8: a4210b94  bl #0x4045068
0x03D7C9DC: f5c701f0  adrp x21, #0x767b000
0x03D7C9E0: b57641f9  ldr x21, [x21, #0x2e8]
0x03D7C9E4: a10240f9  ldr x1, [x21]
0x03D7C9E8: e0230091  add x0, sp, #8
0x03D7C9EC: f2634a94  bl #0x50159b4
0x03D7C9F0: 20010036  tbz w0, #0, #0x3d7ca14
0x03D7C9F4: e00f40f9  ldr x0, [sp, #0x18]
0x03D7C9F8: 200200b4  cbz x0, #0x3d7ca3c
0x03D7C9FC: 881e40f9  ldr x8, [x20, #0x38]
0x03D7CA00: 020540f9  ldr x2, [x8, #8]
0x03D7CA04: 480040f9  ldr x8, [x2]
0x03D7CA08: e10313aa  mov x1, x19
0x03D7CA0C: 00013fd6  blr x8
0x03D7CA10: f5ffff17  b #0x3d7c9e4
0x03D7CA14: e8c701f0  adrp x8, #0x767b000
0x03D7CA18: 087141f9  ldr x8, [x8, #0x2e0]
0x03D7CA1C: e0230091  add x0, sp, #8
0x03D7CA20: 010140f9  ldr x1, [x8]
0x03D7CA24: e3634a94  bl #0x50159b0
0x03D7CA28: e00313aa  mov x0, x19
0x03D7CA2C: f44f43a9  ldp x20, x19, [sp, #0x30]
0x03D7CA30: fe5742a9  ldp x30, x21, [sp, #0x20]
0x03D7CA34: ff030191  add sp, sp, #0x40
0x03D7CA38: c0035fd6  ret
0x03D7CA3C: 9c10d097  bl #0x3180cac
0x03D7CA40: 9b10d097  bl #0x3180cac
0x03D7CA44: 02000014  b #0x3d7ca4c
0x03D7CA48: 01000014  b #0x3d7ca4c
0x03D7CA4C: f40300aa  mov x20, x0
0x03D7CA50: 3f040071  cmp w1, #1
0x03D7CA54: a1010054  b.ne #0x3d7ca88
0x03D7CA58: e00314aa  mov x0, x20
0x03D7CA5C: ad47d194  bl #0x71ce910
0x03D7CA60: 150040f9  ldr x21, [x0]
0x03D7CA64: af47d194  bl #0x71ce920
0x03D7CA68: e8c701f0  adrp x8, #0x767b000
0x03D7CA6C: 087141f9  ldr x8, [x8, #0x2e0]
0x03D7CA70: e0230091  add x0, sp, #8
0x03D7CA74: 010140f9  ldr x1, [x8]
0x03D7CA78: ce634a94  bl #0x50159b0
0x03D7CA7C: 75fdffb4  cbz x21, #0x3d7ca28
0x03D7CA80: e00315aa  mov x0, x21
0x03D7CA84: 8810d097  bl #0x3180ca4
0x03D7CA88: f5031faa  mov x21, xzr
0x03D7CA8C: 02000014  b #0x3d7ca94
0x03D7CA90: f40300aa  mov x20, x0
0x03D7CA94: e8c701f0  adrp x8, #0x767b000
0x03D7CA98: 087141f9  ldr x8, [x8, #0x2e0]
0x03D7CA9C: 010140f9  ldr x1, [x8]
0x03D7CAA0: e0230091  add x0, sp, #8
0x03D7CAA4: c3634a94  bl #0x50159b0
0x03D7CAA8: 750000b5  cbnz x21, #0x3d7cab4
0x03D7CAAC: e00314aa  mov x0, x20
0x03D7CAB0: aaa3d397  bl #0x3265958
0x03D7CAB4: e00315aa  mov x0, x21
0x03D7CAB8: 7b10d097  bl #0x3180ca4
0x03D7CABC: 9632c297  bl #0x2e09514

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D7D040 | MergeEngine.Configuration.Definitions.Reward$$TryAggregate<object>
; native signature: System_Collections_Generic_List_T__o* MergeEngine_Configuration_Definitions_Reward__TryAggregate_object_ (MergeEngine_Configuration_Definitions_Reward_o* __this, System_Collections_Generic_List_T__o* source, const MethodInfo_3D7D040* method);
; bytes=92 sha256=3efaec847082b12c5e5f8544e31c8232e1bd6474e27bc58f18cb851f06391774 status=arm64_complete_bound indexed_start=True
0x03D7D040: fe0f1ef8  str x30, [sp, #-0x20]!
0x03D7D044: f44f01a9  stp x20, x19, [sp, #0x10]
0x03D7D048: 481c40f9  ldr x8, [x2, #0x38]
0x03D7D04C: f40302aa  mov x20, x2
0x03D7D050: f30301aa  mov x19, x1
0x03D7D054: 880000b5  cbnz x8, #0x3d7d064
0x03D7D058: e00314aa  mov x0, x20
0x03D7D05C: 0766cf97  bl #0x3156878
0x03D7D060: 881e40f9  ldr x8, [x20, #0x38]
0x03D7D064: 020540f9  ldr x2, [x8, #8]
0x03D7D068: e10313aa  mov x1, x19
0x03D7D06C: 1cfdff97  bl #0x3d7c4dc
0x03D7D070: e0000036  tbz w0, #0, #0x3d7d08c
0x03D7D074: 881e40f9  ldr x8, [x20, #0x38]
0x03D7D078: e10313aa  mov x1, x19
0x03D7D07C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03D7D080: 020940f9  ldr x2, [x8, #0x10]
0x03D7D084: fe0742f8  ldr x30, [sp], #0x20
0x03D7D088: e1f9ff17  b #0x3d7b80c
0x03D7D08C: e00313aa  mov x0, x19
0x03D7D090: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03D7D094: fe0742f8  ldr x30, [sp], #0x20
0x03D7D098: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D7D09C | MergeEngine.Configuration.Definitions.Reward$$TryAggregate<__Il2CppFullySharedGenericType>
; native signature: System_Collections_Generic_List_T__o* MergeEngine_Configuration_Definitions_Reward__TryAggregate___Il2CppFullySharedGenericType_ (MergeEngine_Configuration_Definitions_Reward_o* __this, System_Collections_Generic_List_T__o* source, const MethodInfo_3D7D09C* method);
; bytes=112 sha256=29d37e0058ff899d35cdfd86748e976d6723ea282b4fee0314204ea21d396cac status=arm64_complete_bound indexed_start=True
0x03D7D09C: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x03D7D0A0: f44f01a9  stp x20, x19, [sp, #0x10]
0x03D7D0A4: 481c40f9  ldr x8, [x2, #0x38]
0x03D7D0A8: f40302aa  mov x20, x2
0x03D7D0AC: f30301aa  mov x19, x1
0x03D7D0B0: f50300aa  mov x21, x0
0x03D7D0B4: 880000b5  cbnz x8, #0x3d7d0c4
0x03D7D0B8: e00314aa  mov x0, x20
0x03D7D0BC: ef65cf97  bl #0x3156878
0x03D7D0C0: 881e40f9  ldr x8, [x20, #0x38]
0x03D7D0C4: 020540f9  ldr x2, [x8, #8]
0x03D7D0C8: e00315aa  mov x0, x21
0x03D7D0CC: e10313aa  mov x1, x19
0x03D7D0D0: 480040f9  ldr x8, [x2]
0x03D7D0D4: 00013fd6  blr x8
0x03D7D0D8: 20010036  tbz w0, #0, #0x3d7d0fc
0x03D7D0DC: 881e40f9  ldr x8, [x20, #0x38]
0x03D7D0E0: e10313aa  mov x1, x19
0x03D7D0E4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03D7D0E8: e00315aa  mov x0, x21
0x03D7D0EC: 020940f9  ldr x2, [x8, #0x10]
0x03D7D0F0: 430040f9  ldr x3, [x2]
0x03D7D0F4: fe57c2a8  ldp x30, x21, [sp], #0x20
0x03D7D0F8: 60001fd6  br x3
0x03D7D0FC: e00313aa  mov x0, x19
0x03D7D100: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03D7D104: fe57c2a8  ldp x30, x21, [sp], #0x20
0x03D7D108: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D7C4DC | MergeEngine.Configuration.Definitions.Reward$$CanAggregate<object>
; native signature: bool MergeEngine_Configuration_Definitions_Reward__CanAggregate_object_ (MergeEngine_Configuration_Definitions_Reward_o* __this, System_Collections_Generic_List_T__o* source, const MethodInfo_3D7C4DC* method);
; bytes=372 sha256=63f59a0ba2ded9e1171fa41175535f27b292fb17bdd411bc224f3a324a2387c4 status=arm64_complete_bound indexed_start=True
0x03D7C4DC: fe0f1df8  str x30, [sp, #-0x30]!
0x03D7C4E0: f65701a9  stp x22, x21, [sp, #0x10]
0x03D7C4E4: f44f02a9  stp x20, x19, [sp, #0x20]
0x03D7C4E8: 481c40f9  ldr x8, [x2, #0x38]
0x03D7C4EC: f40302aa  mov x20, x2
0x03D7C4F0: f30301aa  mov x19, x1
0x03D7C4F4: 680000b4  cbz x8, #0x3d7c500
0x03D7C4F8: b30000b5  cbnz x19, #0x3d7c50c
0x03D7C4FC: 50000014  b #0x3d7c63c
0x03D7C500: e00314aa  mov x0, x20
0x03D7C504: dd68cf97  bl #0x3156878
0x03D7C508: b30900b4  cbz x19, #0x3d7c63c
0x03D7C50C: 681a40b9  ldr w8, [x19, #0x18]
0x03D7C510: 1f090071  cmp w8, #2
0x03D7C514: 4b090054  b.lt #0x3d7c63c
0x03D7C518: 881e40f9  ldr x8, [x20, #0x38]
0x03D7C51C: 001140f9  ldr x0, [x8, #0x20]
0x03D7C520: 08d44439  ldrb w8, [x0, #0x135]
0x03D7C524: 48000037  tbnz w8, #0, #0x3d7c52c
0x03D7C528: bd68cf97  bl #0x315681c
0x03D7C52C: 08e040b9  ldr w8, [x0, #0xe0]
0x03D7C530: 48000035  cbnz w8, #0x3d7c538
0x03D7C534: 9611d097  bl #0x3180b8c
0x03D7C538: 881e40f9  ldr x8, [x20, #0x38]
0x03D7C53C: 001140f9  ldr x0, [x8, #0x20]
0x03D7C540: 08d44439  ldrb w8, [x0, #0x135]
0x03D7C544: 48000037  tbnz w8, #0, #0x3d7c54c
0x03D7C548: b568cf97  bl #0x315681c
0x03D7C54C: 085c40f9  ldr x8, [x0, #0xb8]
0x03D7C550: 150540f9  ldr x21, [x8, #8]
0x03D7C554: d50500b5  cbnz x21, #0x3d7c60c
0x03D7C558: 881e40f9  ldr x8, [x20, #0x38]
0x03D7C55C: 001140f9  ldr x0, [x8, #0x20]
0x03D7C560: 08d44439  ldrb w8, [x0, #0x135]
0x03D7C564: 48000037  tbnz w8, #0, #0x3d7c56c
0x03D7C568: ad68cf97  bl #0x315681c
0x03D7C56C: 08e040b9  ldr w8, [x0, #0xe0]
0x03D7C570: 48000035  cbnz w8, #0x3d7c578
0x03D7C574: 8611d097  bl #0x3180b8c
0x03D7C578: 881e40f9  ldr x8, [x20, #0x38]
0x03D7C57C: 001140f9  ldr x0, [x8, #0x20]
0x03D7C580: 09d44439  ldrb w9, [x0, #0x135]
0x03D7C584: 69000037  tbnz w9, #0, #0x3d7c590
0x03D7C588: a568cf97  bl #0x315681c
0x03D7C58C: 881e40f9  ldr x8, [x20, #0x38]
0x03D7C590: 080d40f9  ldr x8, [x8, #0x18]
0x03D7C594: 095c40f9  ldr x9, [x0, #0xb8]
0x03D7C598: 0ad54439  ldrb w10, [x8, #0x135]
0x03D7C59C: 360140f9  ldr x22, [x9]
0x03D7C5A0: 8a000037  tbnz w10, #0, #0x3d7c5b0
0x03D7C5A4: e00308aa  mov x0, x8
0x03D7C5A8: 9d68cf97  bl #0x315681c
0x03D7C5AC: e80300aa  mov x8, x0
0x03D7C5B0: e00308aa  mov x0, x8
0x03D7C5B4: bb11d097  bl #0x3180ca0
0x03D7C5B8: 881e40f9  ldr x8, [x20, #0x38]
0x03D7C5BC: e10316aa  mov x1, x22
0x03D7C5C0: f50300aa  mov x21, x0
0x03D7C5C4: 028d42a9  ldp x2, x3, [x8, #0x28]
0x03D7C5C8: fc685394  bl #0x52569b8
0x03D7C5CC: 881e40f9  ldr x8, [x20, #0x38]
0x03D7C5D0: 001140f9  ldr x0, [x8, #0x20]
0x03D7C5D4: 08d44439  ldrb w8, [x0, #0x135]
0x03D7C5D8: 48000037  tbnz w8, #0, #0x3d7c5e0
0x03D7C5DC: 9068cf97  bl #0x315681c
0x03D7C5E0: 085c40f9  ldr x8, [x0, #0xb8]
0x03D7C5E4: 150500f9  str x21, [x8, #8]
0x03D7C5E8: 881e40f9  ldr x8, [x20, #0x38]
0x03D7C5EC: 001140f9  ldr x0, [x8, #0x20]
0x03D7C5F0: 08d44439  ldrb w8, [x0, #0x135]
0x03D7C5F4: 48000037  tbnz w8, #0, #0x3d7c5fc
0x03D7C5F8: 8968cf97  bl #0x315681c
0x03D7C5FC: 085c40f9  ldr x8, [x0, #0xb8]
0x03D7C600: e10315aa  mov x1, x21
0x03D7C604: 00210091  add x0, x8, #8
0x03D7C608: ef10d097  bl #0x31809c4
0x03D7C60C: 881e40f9  ldr x8, [x20, #0x38]
0x03D7C610: e00313aa  mov x0, x19
0x03D7C614: e10315aa  mov x1, x21
0x03D7C618: 021d40f9  ldr x2, [x8, #0x38]
0x03D7C61C: 5925fb97  bl #0x3c45b80
0x03D7C620: 881e40f9  ldr x8, [x20, #0x38]
0x03D7C624: 012940f9  ldr x1, [x8, #0x50]
0x03D7C628: bcf7fa97  bl #0x3c3a518
0x03D7C62C: 681a40b9  ldr w8, [x19, #0x18]
0x03D7C630: 1f00086b  cmp w0, w8
0x03D7C634: e0079f1a  cset w0, ne
0x03D7C638: 02000014  b #0x3d7c640
0x03D7C63C: e0031f2a  mov w0, wzr
0x03D7C640: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03D7C644: f65741a9  ldp x22, x21, [sp, #0x10]
0x03D7C648: fe0743f8  ldr x30, [sp], #0x30
0x03D7C64C: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D7C650 | MergeEngine.Configuration.Definitions.Reward$$CanAggregate<__Il2CppFullySharedGenericType>
; native signature: bool MergeEngine_Configuration_Definitions_Reward__CanAggregate___Il2CppFullySharedGenericType_ (MergeEngine_Configuration_Definitions_Reward_o* __this, System_Collections_Generic_List_T__o* source, const MethodInfo_3D7C650* method);
; bytes=420 sha256=ed94a482b97e4f4fd450436079159d57d72845802919d8ea0ba160fe8559bcd4 status=arm64_complete_bound indexed_start=True
0x03D7C650: fe0f1df8  str x30, [sp, #-0x30]!
0x03D7C654: f65701a9  stp x22, x21, [sp, #0x10]
0x03D7C658: f44f02a9  stp x20, x19, [sp, #0x20]
0x03D7C65C: 481c40f9  ldr x8, [x2, #0x38]
0x03D7C660: f40302aa  mov x20, x2
0x03D7C664: f30301aa  mov x19, x1
0x03D7C668: 680000b4  cbz x8, #0x3d7c674
0x03D7C66C: b30000b5  cbnz x19, #0x3d7c680
0x03D7C670: 5c000014  b #0x3d7c7e0
0x03D7C674: e00314aa  mov x0, x20
0x03D7C678: 8068cf97  bl #0x3156878
0x03D7C67C: 330b00b4  cbz x19, #0x3d7c7e0
0x03D7C680: 881e40f9  ldr x8, [x20, #0x38]
0x03D7C684: e00313aa  mov x0, x19
0x03D7C688: 010540f9  ldr x1, [x8, #8]
0x03D7C68C: 280040f9  ldr x8, [x1]
0x03D7C690: 00013fd6  blr x8
0x03D7C694: 1f080071  cmp w0, #2
0x03D7C698: 4b0a0054  b.lt #0x3d7c7e0
0x03D7C69C: 881e40f9  ldr x8, [x20, #0x38]
0x03D7C6A0: 001140f9  ldr x0, [x8, #0x20]
0x03D7C6A4: 08d44439  ldrb w8, [x0, #0x135]
0x03D7C6A8: 48000037  tbnz w8, #0, #0x3d7c6b0
0x03D7C6AC: 5c68cf97  bl #0x315681c
0x03D7C6B0: 08e040b9  ldr w8, [x0, #0xe0]
0x03D7C6B4: 48000035  cbnz w8, #0x3d7c6bc
0x03D7C6B8: 3511d097  bl #0x3180b8c
0x03D7C6BC: 881e40f9  ldr x8, [x20, #0x38]
0x03D7C6C0: 001140f9  ldr x0, [x8, #0x20]
0x03D7C6C4: 08d44439  ldrb w8, [x0, #0x135]
0x03D7C6C8: 48000037  tbnz w8, #0, #0x3d7c6d0
0x03D7C6CC: 5468cf97  bl #0x315681c
0x03D7C6D0: 085c40f9  ldr x8, [x0, #0xb8]
0x03D7C6D4: 150540f9  ldr x21, [x8, #8]
0x03D7C6D8: f50500b5  cbnz x21, #0x3d7c794
0x03D7C6DC: 881e40f9  ldr x8, [x20, #0x38]
0x03D7C6E0: 001140f9  ldr x0, [x8, #0x20]
0x03D7C6E4: 08d44439  ldrb w8, [x0, #0x135]
0x03D7C6E8: 48000037  tbnz w8, #0, #0x3d7c6f0
0x03D7C6EC: 4c68cf97  bl #0x315681c
0x03D7C6F0: 08e040b9  ldr w8, [x0, #0xe0]
0x03D7C6F4: 48000035  cbnz w8, #0x3d7c6fc
0x03D7C6F8: 2511d097  bl #0x3180b8c
0x03D7C6FC: 881e40f9  ldr x8, [x20, #0x38]
0x03D7C700: 001140f9  ldr x0, [x8, #0x20]
0x03D7C704: 09d44439  ldrb w9, [x0, #0x135]
0x03D7C708: 69000037  tbnz w9, #0, #0x3d7c714
0x03D7C70C: 4468cf97  bl #0x315681c
0x03D7C710: 881e40f9  ldr x8, [x20, #0x38]
0x03D7C714: 080d40f9  ldr x8, [x8, #0x18]
0x03D7C718: 095c40f9  ldr x9, [x0, #0xb8]
0x03D7C71C: 0ad54439  ldrb w10, [x8, #0x135]
0x03D7C720: 360140f9  ldr x22, [x9]
0x03D7C724: 8a000037  tbnz w10, #0, #0x3d7c734
0x03D7C728: e00308aa  mov x0, x8
0x03D7C72C: 3c68cf97  bl #0x315681c
0x03D7C730: e80300aa  mov x8, x0
0x03D7C734: e00308aa  mov x0, x8
0x03D7C738: 5a11d097  bl #0x3180ca0
0x03D7C73C: 881e40f9  ldr x8, [x20, #0x38]
0x03D7C740: e10316aa  mov x1, x22
0x03D7C744: f50300aa  mov x21, x0
0x03D7C748: 028d42a9  ldp x2, x3, [x8, #0x28]
0x03D7C74C: 680040f9  ldr x8, [x3]
0x03D7C750: 00013fd6  blr x8
0x03D7C754: 881e40f9  ldr x8, [x20, #0x38]
0x03D7C758: 001140f9  ldr x0, [x8, #0x20]
0x03D7C75C: 08d44439  ldrb w8, [x0, #0x135]
0x03D7C760: 48000037  tbnz w8, #0, #0x3d7c768
0x03D7C764: 2e68cf97  bl #0x315681c
0x03D7C768: 085c40f9  ldr x8, [x0, #0xb8]
0x03D7C76C: 150500f9  str x21, [x8, #8]
0x03D7C770: 881e40f9  ldr x8, [x20, #0x38]
0x03D7C774: 001140f9  ldr x0, [x8, #0x20]
0x03D7C778: 08d44439  ldrb w8, [x0, #0x135]
0x03D7C77C: 48000037  tbnz w8, #0, #0x3d7c784
0x03D7C780: 2768cf97  bl #0x315681c
0x03D7C784: 085c40f9  ldr x8, [x0, #0xb8]
0x03D7C788: e10315aa  mov x1, x21
0x03D7C78C: 00210091  add x0, x8, #8
0x03D7C790: 8d10d097  bl #0x31809c4
0x03D7C794: 881e40f9  ldr x8, [x20, #0x38]
0x03D7C798: e00313aa  mov x0, x19
0x03D7C79C: e10315aa  mov x1, x21
0x03D7C7A0: 021d40f9  ldr x2, [x8, #0x38]
0x03D7C7A4: 480040f9  ldr x8, [x2]
0x03D7C7A8: 00013fd6  blr x8
0x03D7C7AC: 881e40f9  ldr x8, [x20, #0x38]
0x03D7C7B0: 012940f9  ldr x1, [x8, #0x50]
0x03D7C7B4: 280040f9  ldr x8, [x1]
0x03D7C7B8: 00013fd6  blr x8
0x03D7C7BC: 881e40f9  ldr x8, [x20, #0x38]
0x03D7C7C0: f403002a  mov w20, w0
0x03D7C7C4: e00313aa  mov x0, x19
0x03D7C7C8: 010540f9  ldr x1, [x8, #8]
0x03D7C7CC: 280040f9  ldr x8, [x1]
0x03D7C7D0: 00013fd6  blr x8
0x03D7C7D4: 9f02006b  cmp w20, w0
0x03D7C7D8: e0079f1a  cset w0, ne
0x03D7C7DC: 02000014  b #0x3d7c7e4
0x03D7C7E0: e0031f2a  mov w0, wzr
0x03D7C7E4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03D7C7E8: f65741a9  ldp x22, x21, [sp, #0x10]
0x03D7C7EC: fe0743f8  ldr x30, [sp], #0x30
0x03D7C7F0: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D7B80C | MergeEngine.Configuration.Definitions.Reward$$Aggregate<object>
; native signature: System_Collections_Generic_List_T__o* MergeEngine_Configuration_Definitions_Reward__Aggregate_object_ (MergeEngine_Configuration_Definitions_Reward_o* __this, System_Collections_Generic_List_T__o* source, const MethodInfo_3D7B80C* method);
; bytes=1396 sha256=9efd29648018def5c4fdf488016ea3c525ed38095d85c0514c1e05340cfdcf45 status=arm64_complete_bound indexed_start=True
0x03D7B80C: ff8302d1  sub sp, sp, #0xa0
0x03D7B810: fd7b04a9  stp x29, x30, [sp, #0x40]
0x03D7B814: fc6f05a9  stp x28, x27, [sp, #0x50]
0x03D7B818: fa6706a9  stp x26, x25, [sp, #0x60]
0x03D7B81C: f85f07a9  stp x24, x23, [sp, #0x70]
0x03D7B820: f65708a9  stp x22, x21, [sp, #0x80]
0x03D7B824: f44f09a9  stp x20, x19, [sp, #0x90]
0x03D7B828: 481c40f9  ldr x8, [x2, #0x38]
0x03D7B82C: f30302aa  mov x19, x2
0x03D7B830: f50301aa  mov x21, x1
0x03D7B834: 680300b5  cbnz x8, #0x3d7b8a0
0x03D7B838: 80c701d0  adrp x0, #0x766d000
0x03D7B83C: 006c46f9  ldr x0, [x0, #0xcd8]
0x03D7B840: 7614d097  bl #0x3180a18
0x03D7B844: a0c701d0  adrp x0, #0x7671000
0x03D7B848: 00c443f9  ldr x0, [x0, #0x788]
0x03D7B84C: 7314d097  bl #0x3180a18
0x03D7B850: 00c80190  adrp x0, #0x767b000
0x03D7B854: 006041f9  ldr x0, [x0, #0x2c0]
0x03D7B858: 7014d097  bl #0x3180a18
0x03D7B85C: 00c80190  adrp x0, #0x767b000
0x03D7B860: 006441f9  ldr x0, [x0, #0x2c8]
0x03D7B864: 6d14d097  bl #0x3180a18
0x03D7B868: 00c80190  adrp x0, #0x767b000
0x03D7B86C: 006841f9  ldr x0, [x0, #0x2d0]
0x03D7B870: 6a14d097  bl #0x3180a18
0x03D7B874: 00c80190  adrp x0, #0x767b000
0x03D7B878: 006c41f9  ldr x0, [x0, #0x2d8]
0x03D7B87C: 6714d097  bl #0x3180a18
0x03D7B880: a0c601b0  adrp x0, #0x7650000
0x03D7B884: 00dc41f9  ldr x0, [x0, #0x3b8]
0x03D7B888: 6414d097  bl #0x3180a18
0x03D7B88C: 681e40f9  ldr x8, [x19, #0x38]
0x03D7B890: 880000b5  cbnz x8, #0x3d7b8a0
0x03D7B894: e00313aa  mov x0, x19
0x03D7B898: f86bcf97  bl #0x3156878
0x03D7B89C: 681e40f9  ldr x8, [x19, #0x38]
0x03D7B8A0: ff7f02a9  stp xzr, xzr, [sp, #0x20]
0x03D7B8A4: ff1b00f9  str xzr, [sp, #0x30]
0x03D7B8A8: 000140f9  ldr x0, [x8]
0x03D7B8AC: 08d44439  ldrb w8, [x0, #0x135]
0x03D7B8B0: 48000037  tbnz w8, #0, #0x3d7b8b8
0x03D7B8B4: da6bcf97  bl #0x315681c
0x03D7B8B8: fa14d097  bl #0x3180ca0
0x03D7B8BC: 681e40f9  ldr x8, [x19, #0x38]
0x03D7B8C0: f40300aa  mov x20, x0
0x03D7B8C4: 010540f9  ldr x1, [x8, #8]
0x03D7B8C8: dc200b94  bl #0x4043c38
0x03D7B8CC: 552000b4  cbz x21, #0x3d7bcd4
0x03D7B8D0: 681e40f9  ldr x8, [x19, #0x38]
0x03D7B8D4: e00315aa  mov x0, x21
0x03D7B8D8: 010940f9  ldr x1, [x8, #0x10]
0x03D7B8DC: e8230091  add x8, sp, #8
0x03D7B8E0: e2250b94  bl #0x4045068
0x03D7B8E4: e083c03c  ldur q0, [sp, #8]
0x03D7B8E8: e80f40f9  ldr x8, [sp, #0x18]
0x03D7B8EC: b8c701d0  adrp x24, #0x7671000
0x03D7B8F0: 9ac701d0  adrp x26, #0x766d000
0x03D7B8F4: 1bc80190  adrp x27, #0x767b000
0x03D7B8F8: bcc601b0  adrp x28, #0x7650000
0x03D7B8FC: 1dc80190  adrp x29, #0x767b000
0x03D7B900: 18c743f9  ldr x24, [x24, #0x788]
0x03D7B904: 5a6f46f9  ldr x26, [x26, #0xcd8]
0x03D7B908: 7b6741f9  ldr x27, [x27, #0x2c8]
0x03D7B90C: 9cdf41f9  ldr x28, [x28, #0x3b8]
0x03D7B910: bd6f41f9  ldr x29, [x29, #0x2d8]
0x03D7B914: e00b803d  str q0, [sp, #0x20]
0x03D7B918: e81b00f9  str x8, [sp, #0x30]
0x03D7B91C: 19c80190  adrp x25, #0x767b000
0x03D7B920: 396b41f9  ldr x25, [x25, #0x2d0]
0x03D7B924: 681e40f9  ldr x8, [x19, #0x38]
0x03D7B928: 014540f9  ldr x1, [x8, #0x88]
0x03D7B92C: e0830091  add x0, sp, #0x20
0x03D7B930: 21684a94  bl #0x50159b4
0x03D7B934: a0190036  tbz w0, #0, #0x3d7bc68
0x03D7B938: 681e40f9  ldr x8, [x19, #0x38]
0x03D7B93C: 001140f9  ldr x0, [x8, #0x20]
0x03D7B940: 08d44439  ldrb w8, [x0, #0x135]
0x03D7B944: 48000037  tbnz w8, #0, #0x3d7b94c
0x03D7B948: b56bcf97  bl #0x315681c
0x03D7B94C: d514d097  bl #0x3180ca0
0x03D7B950: 681e40f9  ldr x8, [x19, #0x38]
0x03D7B954: f60300aa  mov x22, x0
0x03D7B958: 011540f9  ldr x1, [x8, #0x28]
0x03D7B95C: f1e10694  bl #0x3f34120
0x03D7B960: 561a00b4  cbz x22, #0x3d7bca8
0x03D7B964: e11b40f9  ldr x1, [sp, #0x30]
0x03D7B968: f50316aa  mov x21, x22
0x03D7B96C: a10e01f8  str x1, [x21, #0x10]!
0x03D7B970: e00315aa  mov x0, x21
0x03D7B974: 1414d097  bl #0x31809c4
0x03D7B978: b70240f9  ldr x23, [x21]
0x03D7B97C: 971900b4  cbz x23, #0x3d7bcac
0x03D7B980: e80240f9  ldr x8, [x23]
0x03D7B984: 010340f9  ldr x1, [x24]
0x03D7B988: 095d4279  ldrh w9, [x8, #0x12e]
0x03D7B98C: 290100b4  cbz x9, #0x3d7b9b0
0x03D7B990: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D7B994: 4a210091  add x10, x10, #8
0x03D7B998: 4b815ff8  ldur x11, [x10, #-8]
0x03D7B99C: 7f0101eb  cmp x11, x1
0x03D7B9A0: 00010054  b.eq #0x3d7b9c0
0x03D7B9A4: 290500f1  subs x9, x9, #1
0x03D7B9A8: 4a410091  add x10, x10, #0x10
0x03D7B9AC: 61ffff54  b.ne #0x3d7b998
0x03D7B9B0: 82008052  movz w2, #0x4
0x03D7B9B4: e00317aa  mov x0, x23
0x03D7B9B8: 566ccf97  bl #0x3156b10
0x03D7B9BC: 05000014  b #0x3d7b9d0
0x03D7B9C0: 490140b9  ldr w9, [x10]
0x03D7B9C4: 29110011  add w9, w9, #4
0x03D7B9C8: 08d1298b  add x8, x8, w9, sxtw #4
0x03D7B9CC: 00e10491  add x0, x8, #0x138
0x03D7B9D0: 080440a9  ldp x8, x1, [x0]
0x03D7B9D4: e00317aa  mov x0, x23
0x03D7B9D8: 00013fd6  blr x8
0x03D7B9DC: 401600b4  cbz x0, #0x3d7bca4
0x03D7B9E0: 081040b9  ldr w8, [x0, #0x10]
0x03D7B9E4: c8010034  cbz w8, #0x3d7ba1c
0x03D7B9E8: 400340f9  ldr x0, [x26]
0x03D7B9EC: 08e040b9  ldr w8, [x0, #0xe0]
0x03D7B9F0: 48000035  cbnz w8, #0x3d7b9f8
0x03D7B9F4: 6614d097  bl #0x3180b8c
0x03D7B9F8: 600340f9  ldr x0, [x27]
0x03D7B9FC: 810340f9  ldr x1, [x28]
0x03D7BA00: a30340f9  ldr x3, [x29]
0x03D7BA04: 240340f9  ldr x4, [x25]
0x03D7BA08: e2031faa  mov x2, xzr
0x03D7BA0C: e5031faa  mov x5, xzr
0x03D7BA10: e6031faa  mov x6, xzr
0x03D7BA14: 88c25b94  bl #0x546c434
0x03D7BA18: c3ffff17  b #0x3d7b924
0x03D7BA1C: 681e40f9  ldr x8, [x19, #0x38]
0x03D7BA20: 002d40f9  ldr x0, [x8, #0x58]
0x03D7BA24: 08d44439  ldrb w8, [x0, #0x135]
0x03D7BA28: 48000037  tbnz w8, #0, #0x3d7ba30
0x03D7BA2C: 7c6bcf97  bl #0x315681c
0x03D7BA30: 9c14d097  bl #0x3180ca0
0x03D7BA34: 681e40f9  ldr x8, [x19, #0x38]
0x03D7BA38: f70300aa  mov x23, x0
0x03D7BA3C: 022940f9  ldr x2, [x8, #0x50]
0x03D7BA40: 033140f9  ldr x3, [x8, #0x60]
0x03D7BA44: e10316aa  mov x1, x22
0x03D7BA48: 5d695394  bl #0x5255fbc
0x03D7BA4C: 681e40f9  ldr x8, [x19, #0x38]
0x03D7BA50: 023540f9  ldr x2, [x8, #0x68]
0x03D7BA54: e00314aa  mov x0, x20
0x03D7BA58: e10317aa  mov x1, x23
0x03D7BA5C: b525fb97  bl #0x3c45130
0x03D7BA60: f60300aa  mov x22, x0
0x03D7BA64: 200200b4  cbz x0, #0x3d7baa8
0x03D7BA68: c80240f9  ldr x8, [x22]
0x03D7BA6C: 010340f9  ldr x1, [x24]
0x03D7BA70: 095d4279  ldrh w9, [x8, #0x12e]
0x03D7BA74: 290100b4  cbz x9, #0x3d7ba98
0x03D7BA78: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D7BA7C: 4a210091  add x10, x10, #8
0x03D7BA80: 4b815ff8  ldur x11, [x10, #-8]
0x03D7BA84: 7f0101eb  cmp x11, x1
0x03D7BA88: 80030054  b.eq #0x3d7baf8
0x03D7BA8C: 290500f1  subs x9, x9, #1
0x03D7BA90: 4a410091  add x10, x10, #0x10
0x03D7BA94: 61ffff54  b.ne #0x3d7ba80
0x03D7BA98: 82008052  movz w2, #0x4
0x03D7BA9C: e00316aa  mov x0, x22
0x03D7BAA0: 1c6ccf97  bl #0x3156b10
0x03D7BAA4: 19000014  b #0x3d7bb08
0x03D7BAA8: b50240f9  ldr x21, [x21]
0x03D7BAAC: b51000b4  cbz x21, #0x3d7bcc0
0x03D7BAB0: a80240f9  ldr x8, [x21]
0x03D7BAB4: 0ac80190  adrp x10, #0x767b000
0x03D7BAB8: 095d4279  ldrh w9, [x8, #0x12e]
0x03D7BABC: 4a6141f9  ldr x10, [x10, #0x2c0]
0x03D7BAC0: 410140f9  ldr x1, [x10]
0x03D7BAC4: 290100b4  cbz x9, #0x3d7bae8
0x03D7BAC8: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D7BACC: 4a210091  add x10, x10, #8
0x03D7BAD0: 4b815ff8  ldur x11, [x10, #-8]
0x03D7BAD4: 7f0101eb  cmp x11, x1
0x03D7BAD8: c0060054  b.eq #0x3d7bbb0
0x03D7BADC: 290500f1  subs x9, x9, #1
0x03D7BAE0: 4a410091  add x10, x10, #0x10
0x03D7BAE4: 61ffff54  b.ne #0x3d7bad0
0x03D7BAE8: e00315aa  mov x0, x21
0x03D7BAEC: e2031f2a  mov w2, wzr
0x03D7BAF0: 086ccf97  bl #0x3156b10
0x03D7BAF4: 32000014  b #0x3d7bbbc
0x03D7BAF8: 490140b9  ldr w9, [x10]
0x03D7BAFC: 29110011  add w9, w9, #4
0x03D7BB00: 08d1298b  add x8, x8, w9, sxtw #4
0x03D7BB04: 00e10491  add x0, x8, #0x138
0x03D7BB08: 080440a9  ldp x8, x1, [x0]
0x03D7BB0C: e00316aa  mov x0, x22
0x03D7BB10: 00013fd6  blr x8
0x03D7BB14: f60300aa  mov x22, x0
0x03D7BB18: c00c00b4  cbz x0, #0x3d7bcb0
0x03D7BB1C: e00316aa  mov x0, x22
0x03D7BB20: e1031faa  mov x1, xzr
0x03D7BB24: 2c8d8a94  bl #0x601efd4
0x03D7BB28: b50240f9  ldr x21, [x21]
0x03D7BB2C: 550c00b4  cbz x21, #0x3d7bcb4
0x03D7BB30: a80240f9  ldr x8, [x21]
0x03D7BB34: 010340f9  ldr x1, [x24]
0x03D7BB38: f703002a  mov w23, w0
0x03D7BB3C: 095d4279  ldrh w9, [x8, #0x12e]
0x03D7BB40: 290100b4  cbz x9, #0x3d7bb64
0x03D7BB44: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D7BB48: 4a210091  add x10, x10, #8
0x03D7BB4C: 4b815ff8  ldur x11, [x10, #-8]
0x03D7BB50: 7f0101eb  cmp x11, x1
0x03D7BB54: 00010054  b.eq #0x3d7bb74
0x03D7BB58: 290500f1  subs x9, x9, #1
0x03D7BB5C: 4a410091  add x10, x10, #0x10
0x03D7BB60: 61ffff54  b.ne #0x3d7bb4c
0x03D7BB64: 82008052  movz w2, #0x4
0x03D7BB68: e00315aa  mov x0, x21
0x03D7BB6C: e96bcf97  bl #0x3156b10
0x03D7BB70: 05000014  b #0x3d7bb84
0x03D7BB74: 490140b9  ldr w9, [x10]
0x03D7BB78: 29110011  add w9, w9, #4
0x03D7BB7C: 08d1298b  add x8, x8, w9, sxtw #4
0x03D7BB80: 00e10491  add x0, x8, #0x138
0x03D7BB84: 080440a9  ldp x8, x1, [x0]
0x03D7BB88: e00315aa  mov x0, x21
0x03D7BB8C: 00013fd6  blr x8
0x03D7BB90: 400900b4  cbz x0, #0x3d7bcb8
0x03D7BB94: e1031faa  mov x1, xzr
0x03D7BB98: 0f8d8a94  bl #0x601efd4
0x03D7BB9C: 0100170b  add w1, w0, w23
0x03D7BBA0: e00316aa  mov x0, x22
0x03D7BBA4: e2031faa  mov x2, xzr
0x03D7BBA8: 598d8a94  bl #0x601f10c
0x03D7BBAC: 5effff17  b #0x3d7b924
0x03D7BBB0: 490180b9  ldrsw x9, [x10]
0x03D7BBB4: 0811098b  add x8, x8, x9, lsl #4
0x03D7BBB8: 00e10491  add x0, x8, #0x138
0x03D7BBBC: 080440a9  ldp x8, x1, [x0]
0x03D7BBC0: e00315aa  mov x0, x21
0x03D7BBC4: 00013fd6  blr x8
0x03D7BBC8: f40700b4  cbz x20, #0x3d7bcc4
0x03D7BBCC: 681e40f9  ldr x8, [x19, #0x38]
0x03D7BBD0: f50300aa  mov x21, x0
0x03D7BBD4: 162140f9  ldr x22, [x8, #0x40]
0x03D7BBD8: c8d64439  ldrb w8, [x22, #0x135]
0x03D7BBDC: 88000037  tbnz w8, #0, #0x3d7bbec
0x03D7BBE0: e00316aa  mov x0, x22
0x03D7BBE4: 0e6bcf97  bl #0x315681c
0x03D7BBE8: f60300aa  mov x22, x0
0x03D7BBEC: f50000b4  cbz x21, #0x3d7bc08
0x03D7BBF0: e00315aa  mov x0, x21
0x03D7BBF4: e10316aa  mov x1, x22
0x03D7BBF8: e613d097  bl #0x3180b90
0x03D7BBFC: e10300aa  mov x1, x0
0x03D7BC00: 610000b5  cbnz x1, #0x3d7bc0c
0x03D7BC04: 31000014  b #0x3d7bcc8
0x03D7BC08: e1031faa  mov x1, xzr
0x03D7BC0C: 691e40f9  ldr x9, [x19, #0x38]
0x03D7BC10: 8a1e40b9  ldr w10, [x20, #0x1c]
0x03D7BC14: 880a40f9  ldr x8, [x20, #0x10]
0x03D7BC18: 294140f9  ldr x9, [x9, #0x80]
0x03D7BC1C: 4a050011  add w10, w10, #1
0x03D7BC20: 8a1e00b9  str w10, [x20, #0x1c]
0x03D7BC24: c80400b4  cbz x8, #0x3d7bcbc
0x03D7BC28: 8a1a80b9  ldrsw x10, [x20, #0x18]
0x03D7BC2C: 0b1940b9  ldr w11, [x8, #0x18]
0x03D7BC30: 5f010b6b  cmp w10, w11
0x03D7BC34: e2000054  b.hs #0x3d7bc50
0x03D7BC38: 49050011  add w9, w10, #1
0x03D7BC3C: 000d0a8b  add x0, x8, x10, lsl #3
0x03D7BC40: 891a00b9  str w9, [x20, #0x18]
0x03D7BC44: 010c02f8  str x1, [x0, #0x20]!
0x03D7BC48: 5f13d097  bl #0x31809c4
0x03D7BC4C: 36ffff17  b #0x3d7b924
0x03D7BC50: 281140f9  ldr x8, [x9, #0x20]
0x03D7BC54: 086140f9  ldr x8, [x8, #0xc0]
0x03D7BC58: 023940f9  ldr x2, [x8, #0x70]
0x03D7BC5C: e00314aa  mov x0, x20
0x03D7BC60: 03220b94  bl #0x404446c
0x03D7BC64: 30ffff17  b #0x3d7b924
0x03D7BC68: f6031faa  mov x22, xzr
0x03D7BC6C: 681e40f9  ldr x8, [x19, #0x38]
0x03D7BC70: e0830091  add x0, sp, #0x20
0x03D7BC74: 014940f9  ldr x1, [x8, #0x90]
0x03D7BC78: 4e674a94  bl #0x50159b0
0x03D7BC7C: f60200b5  cbnz x22, #0x3d7bcd8
0x03D7BC80: e00314aa  mov x0, x20
0x03D7BC84: f44f49a9  ldp x20, x19, [sp, #0x90]
0x03D7BC88: f65748a9  ldp x22, x21, [sp, #0x80]
0x03D7BC8C: f85f47a9  ldp x24, x23, [sp, #0x70]
0x03D7BC90: fa6746a9  ldp x26, x25, [sp, #0x60]
0x03D7BC94: fc6f45a9  ldp x28, x27, [sp, #0x50]
0x03D7BC98: fd7b44a9  ldp x29, x30, [sp, #0x40]
0x03D7BC9C: ff830291  add sp, sp, #0xa0
0x03D7BCA0: c0035fd6  ret
0x03D7BCA4: 0214d097  bl #0x3180cac
0x03D7BCA8: 0114d097  bl #0x3180cac
0x03D7BCAC: 0014d097  bl #0x3180cac
0x03D7BCB0: ff13d097  bl #0x3180cac
0x03D7BCB4: fe13d097  bl #0x3180cac
0x03D7BCB8: fd13d097  bl #0x3180cac
0x03D7BCBC: fc13d097  bl #0x3180cac
0x03D7BCC0: fb13d097  bl #0x3180cac
0x03D7BCC4: fa13d097  bl #0x3180cac
0x03D7BCC8: e00315aa  mov x0, x21
0x03D7BCCC: e10316aa  mov x1, x22
0x03D7BCD0: de14d097  bl #0x3181048
0x03D7BCD4: f613d097  bl #0x3180cac
0x03D7BCD8: e00316aa  mov x0, x22
0x03D7BCDC: f213d097  bl #0x3180ca4
0x03D7BCE0: 13000014  b #0x3d7bd2c
0x03D7BCE4: 12000014  b #0x3d7bd2c
0x03D7BCE8: 11000014  b #0x3d7bd2c
0x03D7BCEC: 10000014  b #0x3d7bd2c
0x03D7BCF0: 0f000014  b #0x3d7bd2c
0x03D7BCF4: 0e000014  b #0x3d7bd2c
0x03D7BCF8: 0d000014  b #0x3d7bd2c
0x03D7BCFC: 0c000014  b #0x3d7bd2c
0x03D7BD00: 0b000014  b #0x3d7bd2c
0x03D7BD04: 0a000014  b #0x3d7bd2c
0x03D7BD08: 09000014  b #0x3d7bd2c
0x03D7BD0C: 08000014  b #0x3d7bd2c
0x03D7BD10: 07000014  b #0x3d7bd2c
0x03D7BD14: 06000014  b #0x3d7bd2c
0x03D7BD18: 05000014  b #0x3d7bd2c
0x03D7BD1C: 04000014  b #0x3d7bd2c
0x03D7BD20: 03000014  b #0x3d7bd2c
0x03D7BD24: 02000014  b #0x3d7bd2c
0x03D7BD28: 01000014  b #0x3d7bd2c
0x03D7BD2C: f50300aa  mov x21, x0
0x03D7BD30: 3f040071  cmp w1, #1
0x03D7BD34: c1000054  b.ne #0x3d7bd4c
0x03D7BD38: e00315aa  mov x0, x21
0x03D7BD3C: f54ad194  bl #0x71ce910
0x03D7BD40: 160040f9  ldr x22, [x0]
0x03D7BD44: f74ad194  bl #0x71ce920
0x03D7BD48: c9ffff17  b #0x3d7bc6c
0x03D7BD4C: f6031faa  mov x22, xzr
0x03D7BD50: 02000014  b #0x3d7bd58
0x03D7BD54: f50300aa  mov x21, x0
0x03D7BD58: 681e40f9  ldr x8, [x19, #0x38]
0x03D7BD5C: 014940f9  ldr x1, [x8, #0x90]
0x03D7BD60: e0830091  add x0, sp, #0x20
0x03D7BD64: 13674a94  bl #0x50159b0
0x03D7BD68: 760000b5  cbnz x22, #0x3d7bd74
0x03D7BD6C: e00315aa  mov x0, x21
0x03D7BD70: faa6d397  bl #0x3265958
0x03D7BD74: e00316aa  mov x0, x22
0x03D7BD78: cb13d097  bl #0x3180ca4
0x03D7BD7C: e635c297  bl #0x2e09514

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D7BD80 | MergeEngine.Configuration.Definitions.Reward$$Aggregate<__Il2CppFullySharedGenericType>
; native signature: System_Collections_Generic_List_T__o* MergeEngine_Configuration_Definitions_Reward__Aggregate___Il2CppFullySharedGenericType_ (MergeEngine_Configuration_Definitions_Reward_o* __this, System_Collections_Generic_List_T__o* source, const MethodInfo_3D7BD80* method);
; bytes=1884 sha256=f398e5f62c7a08fb751552cb7b8e44698a9a07df20408debd482628a43a9b86b status=arm64_complete_bound indexed_start=True
0x03D7BD80: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x03D7BD84: fc6f01a9  stp x28, x27, [sp, #0x10]
0x03D7BD88: fa6702a9  stp x26, x25, [sp, #0x20]
0x03D7BD8C: f85f03a9  stp x24, x23, [sp, #0x30]
0x03D7BD90: f65704a9  stp x22, x21, [sp, #0x40]
0x03D7BD94: f44f05a9  stp x20, x19, [sp, #0x50]
0x03D7BD98: fd030091  mov x29, sp
0x03D7BD9C: ff8301d1  sub sp, sp, #0x60
0x03D7BDA0: 48d03bd5  mrs x8, tpidr_el0
0x03D7BDA4: a8031af8  stur x8, [x29, #-0x60]
0x03D7BDA8: 081540f9  ldr x8, [x8, #0x28]
0x03D7BDAC: f30302aa  mov x19, x2
0x03D7BDB0: fa0301aa  mov x26, x1
0x03D7BDB4: a8831ff8  stur x8, [x29, #-8]
0x03D7BDB8: 758e43f8  ldr x21, [x19, #0x38]!
0x03D7BDBC: d50200b5  cbnz x21, #0x3d7be14
0x03D7BDC0: 80c701d0  adrp x0, #0x766d000
0x03D7BDC4: 006c46f9  ldr x0, [x0, #0xcd8]
0x03D7BDC8: f40302aa  mov x20, x2
0x03D7BDCC: 1313d097  bl #0x3180a18
0x03D7BDD0: 00c80190  adrp x0, #0x767b000
0x03D7BDD4: 006441f9  ldr x0, [x0, #0x2c8]
0x03D7BDD8: 1013d097  bl #0x3180a18
0x03D7BDDC: 00c80190  adrp x0, #0x767b000
0x03D7BDE0: 006841f9  ldr x0, [x0, #0x2d0]
0x03D7BDE4: 0d13d097  bl #0x3180a18
0x03D7BDE8: 00c80190  adrp x0, #0x767b000
0x03D7BDEC: 006c41f9  ldr x0, [x0, #0x2d8]
0x03D7BDF0: 0a13d097  bl #0x3180a18
0x03D7BDF4: a0c601b0  adrp x0, #0x7650000
0x03D7BDF8: 00dc41f9  ldr x0, [x0, #0x3b8]
0x03D7BDFC: 0713d097  bl #0x3180a18
0x03D7BE00: 750240f9  ldr x21, [x19]
0x03D7BE04: 950000b5  cbnz x21, #0x3d7be14
0x03D7BE08: e00314aa  mov x0, x20
0x03D7BE0C: 9b6acf97  bl #0x3156878
0x03D7BE10: 951e40f9  ldr x21, [x20, #0x38]
0x03D7BE14: a00e40f9  ldr x0, [x21, #0x18]
0x03D7BE18: a82240f9  ldr x8, [x21, #0x40]
0x03D7BE1C: 18fc40b9  ldr w24, [x0, #0xfc]
0x03D7BE20: 09d44439  ldrb w9, [x0, #0x135]
0x03D7BE24: 16fd40b9  ldr w22, [x8, #0xfc]
0x03D7BE28: c9000037  tbnz w9, #0, #0x3d7be40
0x03D7BE2C: 7c6acf97  bl #0x315681c
0x03D7BE30: 750240f9  ldr x21, [x19]
0x03D7BE34: 09fc40b9  ldr w9, [x0, #0xfc]
0x03D7BE38: a82240f9  ldr x8, [x21, #0x40]
0x03D7BE3C: 02000014  b #0x3d7be44
0x03D7BE40: e903182a  mov w9, w24
0x03D7BE44: 29410011  add w9, w9, #0x10
0x03D7BE48: 293d0091  add x9, x9, #0xf
0x03D7BE4C: ea030091  mov x10, sp
0x03D7BE50: 29717c92  and x9, x9, #0x1fffffff0
0x03D7BE54: 4a0109cb  sub x10, x10, x9
0x03D7BE58: 5f010091  mov sp, x10
0x03D7BE5C: 09d50491  add x9, x8, #0x135
0x03D7BE60: 29014079  ldrh w9, [x9]
0x03D7BE64: aa831af8  stur x10, [x29, #-0x58]
0x03D7BE68: 09010037  tbnz w9, #0, #0x3d7be88
0x03D7BE6C: e00308aa  mov x0, x8
0x03D7BE70: 6b6acf97  bl #0x315681c
0x03D7BE74: 750240f9  ldr x21, [x19]
0x03D7BE78: a82240f9  ldr x8, [x21, #0x40]
0x03D7BE7C: 09d50491  add x9, x8, #0x135
0x03D7BE80: 29014079  ldrh w9, [x9]
0x03D7BE84: 02000014  b #0x3d7be8c
0x03D7BE88: e00308aa  mov x0, x8
0x03D7BE8C: 0afc40b9  ldr w10, [x0, #0xfc]
0x03D7BE90: eb030091  mov x11, sp
0x03D7BE94: 4a410011  add w10, w10, #0x10
0x03D7BE98: 4a3d0091  add x10, x10, #0xf
0x03D7BE9C: 4a717c92  and x10, x10, #0x1fffffff0
0x03D7BEA0: 6a010acb  sub x10, x11, x10
0x03D7BEA4: aa831df8  stur x10, [x29, #-0x28]
0x03D7BEA8: 5f010091  mov sp, x10
0x03D7BEAC: 09010037  tbnz w9, #0, #0x3d7becc
0x03D7BEB0: e00308aa  mov x0, x8
0x03D7BEB4: 5a6acf97  bl #0x315681c
0x03D7BEB8: 750240f9  ldr x21, [x19]
0x03D7BEBC: a82240f9  ldr x8, [x21, #0x40]
0x03D7BEC0: 09d50491  add x9, x8, #0x135
0x03D7BEC4: 29014079  ldrh w9, [x9]
0x03D7BEC8: 02000014  b #0x3d7bed0
0x03D7BECC: e00308aa  mov x0, x8
0x03D7BED0: 0afc40b9  ldr w10, [x0, #0xfc]
0x03D7BED4: eb030091  mov x11, sp
0x03D7BED8: 4a410011  add w10, w10, #0x10
0x03D7BEDC: 4a3d0091  add x10, x10, #0xf
0x03D7BEE0: 4a717c92  and x10, x10, #0x1fffffff0
0x03D7BEE4: 6a010acb  sub x10, x11, x10
0x03D7BEE8: aa031cf8  stur x10, [x29, #-0x40]
0x03D7BEEC: 5f010091  mov sp, x10
0x03D7BEF0: 09010037  tbnz w9, #0, #0x3d7bf10
0x03D7BEF4: e00308aa  mov x0, x8
0x03D7BEF8: 496acf97  bl #0x315681c
0x03D7BEFC: 750240f9  ldr x21, [x19]
0x03D7BF00: a82240f9  ldr x8, [x21, #0x40]
0x03D7BF04: 09d50491  add x9, x8, #0x135
0x03D7BF08: 29014079  ldrh w9, [x9]
0x03D7BF0C: 02000014  b #0x3d7bf14
0x03D7BF10: e00308aa  mov x0, x8
0x03D7BF14: 0afc40b9  ldr w10, [x0, #0xfc]
0x03D7BF18: eb030091  mov x11, sp
0x03D7BF1C: 4a410011  add w10, w10, #0x10
0x03D7BF20: 4a3d0091  add x10, x10, #0xf
0x03D7BF24: 4a717c92  and x10, x10, #0x1fffffff0
0x03D7BF28: 6a010acb  sub x10, x11, x10
0x03D7BF2C: aa031bf8  stur x10, [x29, #-0x50]
0x03D7BF30: 5f010091  mov sp, x10
0x03D7BF34: a9000037  tbnz w9, #0, #0x3d7bf48
0x03D7BF38: e00308aa  mov x0, x8
0x03D7BF3C: 386acf97  bl #0x315681c
0x03D7BF40: 750240f9  ldr x21, [x19]
0x03D7BF44: e80300aa  mov x8, x0
0x03D7BF48: 08fd40b9  ldr w8, [x8, #0xfc]
0x03D7BF4C: e9030091  mov x9, sp
0x03D7BF50: 08410011  add w8, w8, #0x10
0x03D7BF54: 083d0091  add x8, x8, #0xf
0x03D7BF58: 08717c92  and x8, x8, #0x1fffffff0
0x03D7BF5C: 280108cb  sub x8, x9, x8
0x03D7BF60: a8831bf8  stur x8, [x29, #-0x48]
0x03D7BF64: 1f010091  mov sp, x8
0x03D7BF68: c93e0091  add x9, x22, #0xf
0x03D7BF6C: e8030091  mov x8, sp
0x03D7BF70: 37717c92  and x23, x9, #0x1fffffff0
0x03D7BF74: 1b0117cb  sub x27, x8, x23
0x03D7BF78: 7f030091  mov sp, x27
0x03D7BF7C: e8030091  mov x8, sp
0x03D7BF80: 080117cb  sub x8, x8, x23
0x03D7BF84: a8831cf8  stur x8, [x29, #-0x38]
0x03D7BF88: 1f010091  mov sp, x8
0x03D7BF8C: 093f0091  add x9, x24, #0xf
0x03D7BF90: e8030091  mov x8, sp
0x03D7BF94: 29717c92  and x9, x9, #0x1fffffff0
0x03D7BF98: 190109cb  sub x25, x8, x9
0x03D7BF9C: 3f030091  mov sp, x25
0x03D7BFA0: e8030091  mov x8, sp
0x03D7BFA4: 140109cb  sub x20, x8, x9
0x03D7BFA8: 9f020091  mov sp, x20
0x03D7BFAC: e00314aa  mov x0, x20
0x03D7BFB0: e1031f2a  mov w1, wzr
0x03D7BFB4: e20318aa  mov x2, x24
0x03D7BFB8: 7a4ad194  bl #0x71ce9a0
0x03D7BFBC: e8030091  mov x8, sp
0x03D7BFC0: 170117cb  sub x23, x8, x23
0x03D7BFC4: ff020091  mov sp, x23
0x03D7BFC8: e00317aa  mov x0, x23
0x03D7BFCC: e1031f2a  mov w1, wzr
0x03D7BFD0: e20316aa  mov x2, x22
0x03D7BFD4: 734ad194  bl #0x71ce9a0
0x03D7BFD8: a00240f9  ldr x0, [x21]
0x03D7BFDC: 08d44439  ldrb w8, [x0, #0x135]
0x03D7BFE0: 48000037  tbnz w8, #0, #0x3d7bfe8
0x03D7BFE4: 0e6acf97  bl #0x315681c
0x03D7BFE8: 2e13d097  bl #0x3180ca0
0x03D7BFEC: 680240f9  ldr x8, [x19]
0x03D7BFF0: a0031df8  stur x0, [x29, #-0x30]
0x03D7BFF4: 010540f9  ldr x1, [x8, #8]
0x03D7BFF8: 280040f9  ldr x8, [x1]
0x03D7BFFC: 00013fd6  blr x8
0x03D7C000: ba2000b4  cbz x26, #0x3d7c414
0x03D7C004: 680240f9  ldr x8, [x19]
0x03D7C008: a38300d1  sub x3, x29, #0x20
0x03D7C00C: e2031aaa  mov x2, x26
0x03D7C010: e40319aa  mov x4, x25
0x03D7C014: 010940f9  ldr x1, [x8, #0x10]
0x03D7C018: 200040f9  ldr x0, [x1]
0x03D7C01C: b9031ef8  stur x25, [x29, #-0x20]
0x03D7C020: 280840f9  ldr x8, [x1, #0x10]
0x03D7C024: 00013fd6  blr x8
0x03D7C028: e00314aa  mov x0, x20
0x03D7C02C: e10319aa  mov x1, x25
0x03D7C030: e20318aa  mov x2, x24
0x03D7C034: 4f4ad194  bl #0x71ce970
0x03D7C038: 680240f9  ldr x8, [x19]
0x03D7C03C: 014540f9  ldr x1, [x8, #0x88]
0x03D7C040: 280040f9  ldr x8, [x1]
0x03D7C044: e00314aa  mov x0, x20
0x03D7C048: 00013fd6  blr x8
0x03D7C04C: 201a0036  tbz w0, #0, #0x3d7c390
0x03D7C050: 680240f9  ldr x8, [x19]
0x03D7C054: 001140f9  ldr x0, [x8, #0x20]
0x03D7C058: 08d44439  ldrb w8, [x0, #0x135]
0x03D7C05C: 48000037  tbnz w8, #0, #0x3d7c064
0x03D7C060: ef69cf97  bl #0x315681c
0x03D7C064: 0f13d097  bl #0x3180ca0
0x03D7C068: 680240f9  ldr x8, [x19]
0x03D7C06C: f80300aa  mov x24, x0
0x03D7C070: 011540f9  ldr x1, [x8, #0x28]
0x03D7C074: 280040f9  ldr x8, [x1]
0x03D7C078: 00013fd6  blr x8
0x03D7C07C: 680240f9  ldr x8, [x19]
0x03D7C080: 011940f9  ldr x1, [x8, #0x30]
0x03D7C084: 200040f9  ldr x0, [x1]
0x03D7C088: bb031ef8  stur x27, [x29, #-0x20]
0x03D7C08C: 280840f9  ldr x8, [x1, #0x10]
0x03D7C090: a38300d1  sub x3, x29, #0x20
0x03D7C094: e20314aa  mov x2, x20
0x03D7C098: e4031baa  mov x4, x27
0x03D7C09C: 00013fd6  blr x8
0x03D7C0A0: 181b00b4  cbz x24, #0x3d7c400
0x03D7C0A4: 680240f9  ldr x8, [x19]
0x03D7C0A8: 081140f9  ldr x8, [x8, #0x20]
0x03D7C0AC: 014140f9  ldr x1, [x8, #0x80]
0x03D7C0B0: e00318aa  mov x0, x24
0x03D7C0B4: e2031baa  mov x2, x27
0x03D7C0B8: e303162a  mov w3, w22
0x03D7C0BC: 6012d097  bl #0x3180a3c
0x03D7C0C0: 680240f9  ldr x8, [x19]
0x03D7C0C4: 192140f9  ldr x25, [x8, #0x40]
0x03D7C0C8: 29d74439  ldrb w9, [x25, #0x135]
0x03D7C0CC: a9000037  tbnz w9, #0, #0x3d7c0e0
0x03D7C0D0: e00319aa  mov x0, x25
0x03D7C0D4: d269cf97  bl #0x315681c
0x03D7C0D8: 680240f9  ldr x8, [x19]
0x03D7C0DC: f90300aa  mov x25, x0
0x03D7C0E0: 091140f9  ldr x9, [x8, #0x20]
0x03D7C0E4: 152540f9  ldr x21, [x8, #0x48]
0x03D7C0E8: 214140f9  ldr x1, [x9, #0x80]
0x03D7C0EC: e00318aa  mov x0, x24
0x03D7C0F0: 5212d097  bl #0x3180a38
0x03D7C0F4: e30300aa  mov x3, x0
0x03D7C0F8: a2835df8  ldur x2, [x29, #-0x28]
0x03D7C0FC: a58300d1  sub x5, x29, #0x20
0x03D7C100: e00319aa  mov x0, x25
0x03D7C104: e10315aa  mov x1, x21
0x03D7C108: e4031faa  mov x4, xzr
0x03D7C10C: 2015d097  bl #0x318158c
0x03D7C110: a8035ef8  ldur x8, [x29, #-0x20]
0x03D7C114: 881700b4  cbz x8, #0x3d7c404
0x03D7C118: 081140b9  ldr w8, [x8, #0x10]
0x03D7C11C: 08030034  cbz w8, #0x3d7c17c
0x03D7C120: 88c701b0  adrp x8, #0x766d000
0x03D7C124: 086d46f9  ldr x8, [x8, #0xcd8]
0x03D7C128: 000140f9  ldr x0, [x8]
0x03D7C12C: 08e040b9  ldr w8, [x0, #0xe0]
0x03D7C130: 48000035  cbnz w8, #0x3d7c138
0x03D7C134: 9612d097  bl #0x3180b8c
0x03D7C138: e8c701f0  adrp x8, #0x767b000
0x03D7C13C: 086541f9  ldr x8, [x8, #0x2c8]
0x03D7C140: 000140f9  ldr x0, [x8]
0x03D7C144: a8c60190  adrp x8, #0x7650000
0x03D7C148: 08dd41f9  ldr x8, [x8, #0x3b8]
0x03D7C14C: 010140f9  ldr x1, [x8]
0x03D7C150: e8c701f0  adrp x8, #0x767b000
0x03D7C154: 086d41f9  ldr x8, [x8, #0x2d8]
0x03D7C158: 030140f9  ldr x3, [x8]
0x03D7C15C: e8c701f0  adrp x8, #0x767b000
0x03D7C160: 086941f9  ldr x8, [x8, #0x2d0]
0x03D7C164: 040140f9  ldr x4, [x8]
0x03D7C168: e2031faa  mov x2, xzr
0x03D7C16C: e5031faa  mov x5, xzr
0x03D7C170: e6031faa  mov x6, xzr
0x03D7C174: b0c05b94  bl #0x546c434
0x03D7C178: b0ffff17  b #0x3d7c038
0x03D7C17C: 680240f9  ldr x8, [x19]
0x03D7C180: 002d40f9  ldr x0, [x8, #0x58]
0x03D7C184: 08d44439  ldrb w8, [x0, #0x135]
0x03D7C188: 48000037  tbnz w8, #0, #0x3d7c190
0x03D7C18C: a469cf97  bl #0x315681c
0x03D7C190: c412d097  bl #0x3180ca0
0x03D7C194: 680240f9  ldr x8, [x19]
0x03D7C198: f50300aa  mov x21, x0
0x03D7C19C: 033140f9  ldr x3, [x8, #0x60]
0x03D7C1A0: 022940f9  ldr x2, [x8, #0x50]
0x03D7C1A4: 690040f9  ldr x9, [x3]
0x03D7C1A8: e10318aa  mov x1, x24
0x03D7C1AC: 20013fd6  blr x9
0x03D7C1B0: 680240f9  ldr x8, [x19]
0x03D7C1B4: 013540f9  ldr x1, [x8, #0x68]
0x03D7C1B8: a8035df8  ldur x8, [x29, #-0x30]
0x03D7C1BC: 200040f9  ldr x0, [x1]
0x03D7C1C0: a8573ea9  stp x8, x21, [x29, #-0x20]
0x03D7C1C4: bb031ff8  stur x27, [x29, #-0x10]
0x03D7C1C8: 280840f9  ldr x8, [x1, #0x10]
0x03D7C1CC: a38300d1  sub x3, x29, #0x20
0x03D7C1D0: e2031faa  mov x2, xzr
0x03D7C1D4: e4031baa  mov x4, x27
0x03D7C1D8: 00013fd6  blr x8
0x03D7C1DC: e00317aa  mov x0, x23
0x03D7C1E0: e1031baa  mov x1, x27
0x03D7C1E4: e20316aa  mov x2, x22
0x03D7C1E8: e249d194  bl #0x71ce970
0x03D7C1EC: b5835cf8  ldur x21, [x29, #-0x38]
0x03D7C1F0: e10317aa  mov x1, x23
0x03D7C1F4: e20316aa  mov x2, x22
0x03D7C1F8: e00315aa  mov x0, x21
0x03D7C1FC: dd49d194  bl #0x71ce970
0x03D7C200: 680240f9  ldr x8, [x19]
0x03D7C204: 002140f9  ldr x0, [x8, #0x40]
0x03D7C208: e10315aa  mov x1, x21
0x03D7C20C: 9612d097  bl #0x3180c64
0x03D7C210: 680240f9  ldr x8, [x19]
0x03D7C214: 192140f9  ldr x25, [x8, #0x40]
0x03D7C218: 29d70491  add x9, x25, #0x135
0x03D7C21C: 29014079  ldrh w9, [x9]
0x03D7C220: 00060036  tbz w0, #0, #0x3d7c2e0
0x03D7C224: a9000037  tbnz w9, #0, #0x3d7c238
0x03D7C228: e00319aa  mov x0, x25
0x03D7C22C: 7c69cf97  bl #0x315681c
0x03D7C230: 680240f9  ldr x8, [x19]
0x03D7C234: f90300aa  mov x25, x0
0x03D7C238: 012540f9  ldr x1, [x8, #0x48]
0x03D7C23C: a2035cf8  ldur x2, [x29, #-0x40]
0x03D7C240: a58300d1  sub x5, x29, #0x20
0x03D7C244: e00319aa  mov x0, x25
0x03D7C248: e30317aa  mov x3, x23
0x03D7C24C: e4031faa  mov x4, xzr
0x03D7C250: cf14d097  bl #0x318158c
0x03D7C254: b9035ef8  ldur x25, [x29, #-0x20]
0x03D7C258: b90d00b4  cbz x25, #0x3d7c40c
0x03D7C25C: e00319aa  mov x0, x25
0x03D7C260: e1031faa  mov x1, xzr
0x03D7C264: 5c8b8a94  bl #0x601efd4
0x03D7C268: 680240f9  ldr x8, [x19]
0x03D7C26C: fa03002a  mov w26, w0
0x03D7C270: 152140f9  ldr x21, [x8, #0x40]
0x03D7C274: a9d64439  ldrb w9, [x21, #0x135]
0x03D7C278: a9000037  tbnz w9, #0, #0x3d7c28c
0x03D7C27C: e00315aa  mov x0, x21
0x03D7C280: 6769cf97  bl #0x315681c
0x03D7C284: 680240f9  ldr x8, [x19]
0x03D7C288: f50300aa  mov x21, x0
0x03D7C28C: 091140f9  ldr x9, [x8, #0x20]
0x03D7C290: 1c2540f9  ldr x28, [x8, #0x48]
0x03D7C294: 214140f9  ldr x1, [x9, #0x80]
0x03D7C298: e00318aa  mov x0, x24
0x03D7C29C: e711d097  bl #0x3180a38
0x03D7C2A0: e30300aa  mov x3, x0
0x03D7C2A4: a2035bf8  ldur x2, [x29, #-0x50]
0x03D7C2A8: a58300d1  sub x5, x29, #0x20
0x03D7C2AC: e00315aa  mov x0, x21
0x03D7C2B0: e1031caa  mov x1, x28
0x03D7C2B4: e4031faa  mov x4, xzr
0x03D7C2B8: b514d097  bl #0x318158c
0x03D7C2BC: a0035ef8  ldur x0, [x29, #-0x20]
0x03D7C2C0: 400a00b4  cbz x0, #0x3d7c408
0x03D7C2C4: e1031faa  mov x1, xzr
0x03D7C2C8: 438b8a94  bl #0x601efd4
0x03D7C2CC: 01001a0b  add w1, w0, w26
0x03D7C2D0: e00319aa  mov x0, x25
0x03D7C2D4: e2031faa  mov x2, xzr
0x03D7C2D8: 8d8b8a94  bl #0x601f10c
0x03D7C2DC: 57ffff17  b #0x3d7c038
0x03D7C2E0: a9000037  tbnz w9, #0, #0x3d7c2f4
0x03D7C2E4: e00319aa  mov x0, x25
0x03D7C2E8: 4d69cf97  bl #0x315681c
0x03D7C2EC: 680240f9  ldr x8, [x19]
0x03D7C2F0: f90300aa  mov x25, x0
0x03D7C2F4: 091140f9  ldr x9, [x8, #0x20]
0x03D7C2F8: 153d40f9  ldr x21, [x8, #0x78]
0x03D7C2FC: 214140f9  ldr x1, [x9, #0x80]
0x03D7C300: e00318aa  mov x0, x24
0x03D7C304: cd11d097  bl #0x3180a38
0x03D7C308: e30300aa  mov x3, x0
0x03D7C30C: a2835bf8  ldur x2, [x29, #-0x48]
0x03D7C310: a58300d1  sub x5, x29, #0x20
0x03D7C314: e00319aa  mov x0, x25
0x03D7C318: e10315aa  mov x1, x21
0x03D7C31C: e4031faa  mov x4, xzr
0x03D7C320: 9b14d097  bl #0x318158c
0x03D7C324: 680240f9  ldr x8, [x19]
0x03D7C328: b5035ef8  ldur x21, [x29, #-0x20]
0x03D7C32C: 012140f9  ldr x1, [x8, #0x40]
0x03D7C330: 28d44439  ldrb w8, [x1, #0x135]
0x03D7C334: 88000037  tbnz w8, #0, #0x3d7c344
0x03D7C338: e00301aa  mov x0, x1
0x03D7C33C: 3869cf97  bl #0x315681c
0x03D7C340: e10300aa  mov x1, x0
0x03D7C344: e00315aa  mov x0, x21
0x03D7C348: e2031baa  mov x2, x27
0x03D7C34C: 1512d097  bl #0x3180ba0
0x03D7C350: a8035df8  ldur x8, [x29, #-0x30]
0x03D7C354: e80500b4  cbz x8, #0x3d7c410
0x03D7C358: 680240f9  ldr x8, [x19]
0x03D7C35C: e40300aa  mov x4, x0
0x03D7C360: 092140f9  ldr x9, [x8, #0x40]
0x03D7C364: 292940b9  ldr w9, [x9, #0x28]
0x03D7C368: 4900f837  tbnz w9, #0x1f, #0x3d7c370
0x03D7C36C: 840040f9  ldr x4, [x4]
0x03D7C370: 014140f9  ldr x1, [x8, #0x80]
0x03D7C374: 200040f9  ldr x0, [x1]
0x03D7C378: a4031ef8  stur x4, [x29, #-0x20]
0x03D7C37C: 280840f9  ldr x8, [x1, #0x10]
0x03D7C380: a2035df8  ldur x2, [x29, #-0x30]
0x03D7C384: a38300d1  sub x3, x29, #0x20
0x03D7C388: 00013fd6  blr x8
0x03D7C38C: 2bffff17  b #0x3d7c038
0x03D7C390: f6031faa  mov x22, xzr
0x03D7C394: 680240f9  ldr x8, [x19]
0x03D7C398: 000d40f9  ldr x0, [x8, #0x18]
0x03D7C39C: 09d44439  ldrb w9, [x0, #0x135]
0x03D7C3A0: 69000037  tbnz w9, #0, #0x3d7c3ac
0x03D7C3A4: 1e69cf97  bl #0x315681c
0x03D7C3A8: 680240f9  ldr x8, [x19]
0x03D7C3AC: a2835af8  ldur x2, [x29, #-0x58]
0x03D7C3B0: 014940f9  ldr x1, [x8, #0x90]
0x03D7C3B4: e30314aa  mov x3, x20
0x03D7C3B8: e4031faa  mov x4, xzr
0x03D7C3BC: e5031faa  mov x5, xzr
0x03D7C3C0: 7314d097  bl #0x318158c
0x03D7C3C4: b60200b5  cbnz x22, #0x3d7c418
0x03D7C3C8: a8035af8  ldur x8, [x29, #-0x60]
0x03D7C3CC: 081540f9  ldr x8, [x8, #0x28]
0x03D7C3D0: a9835ff8  ldur x9, [x29, #-8]
0x03D7C3D4: 1f0109eb  cmp x8, x9
0x03D7C3D8: 41020054  b.ne #0x3d7c420
0x03D7C3DC: a0035df8  ldur x0, [x29, #-0x30]
0x03D7C3E0: bf030091  mov sp, x29
0x03D7C3E4: f44f45a9  ldp x20, x19, [sp, #0x50]
0x03D7C3E8: f65744a9  ldp x22, x21, [sp, #0x40]
0x03D7C3EC: f85f43a9  ldp x24, x23, [sp, #0x30]
0x03D7C3F0: fa6742a9  ldp x26, x25, [sp, #0x20]
0x03D7C3F4: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x03D7C3F8: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x03D7C3FC: c0035fd6  ret
0x03D7C400: 2b12d097  bl #0x3180cac
0x03D7C404: 2a12d097  bl #0x3180cac
0x03D7C408: 2912d097  bl #0x3180cac
0x03D7C40C: 2812d097  bl #0x3180cac
0x03D7C410: 2712d097  bl #0x3180cac
0x03D7C414: 2612d097  bl #0x3180cac
0x03D7C418: e00316aa  mov x0, x22
0x03D7C41C: 2212d097  bl #0x3180ca4
0x03D7C420: 5c49d194  bl #0x71ce990
0x03D7C424: 11000014  b #0x3d7c468
0x03D7C428: 10000014  b #0x3d7c468
0x03D7C42C: 0f000014  b #0x3d7c468
0x03D7C430: 0e000014  b #0x3d7c468
0x03D7C434: 0d000014  b #0x3d7c468
0x03D7C438: 0c000014  b #0x3d7c468
0x03D7C43C: 0b000014  b #0x3d7c468
0x03D7C440: 0a000014  b #0x3d7c468
0x03D7C444: 09000014  b #0x3d7c468
0x03D7C448: 08000014  b #0x3d7c468
0x03D7C44C: 07000014  b #0x3d7c468
0x03D7C450: 06000014  b #0x3d7c468
0x03D7C454: 05000014  b #0x3d7c468
0x03D7C458: 04000014  b #0x3d7c468
0x03D7C45C: 03000014  b #0x3d7c468
0x03D7C460: 02000014  b #0x3d7c468
0x03D7C464: 01000014  b #0x3d7c468
0x03D7C468: f50300aa  mov x21, x0
0x03D7C46C: 3f040071  cmp w1, #1
0x03D7C470: c1000054  b.ne #0x3d7c488
0x03D7C474: e00315aa  mov x0, x21
0x03D7C478: 2649d194  bl #0x71ce910
0x03D7C47C: 160040f9  ldr x22, [x0]
0x03D7C480: 2849d194  bl #0x71ce920
0x03D7C484: c4ffff17  b #0x3d7c394
0x03D7C488: f6031faa  mov x22, xzr
0x03D7C48C: 02000014  b #0x3d7c494
0x03D7C490: f50300aa  mov x21, x0
0x03D7C494: 680240f9  ldr x8, [x19]
0x03D7C498: 000d40f9  ldr x0, [x8, #0x18]
0x03D7C49C: 09d44439  ldrb w9, [x0, #0x135]
0x03D7C4A0: 69000037  tbnz w9, #0, #0x3d7c4ac
0x03D7C4A4: de68cf97  bl #0x315681c
0x03D7C4A8: 680240f9  ldr x8, [x19]
0x03D7C4AC: 014940f9  ldr x1, [x8, #0x90]
0x03D7C4B0: a2835af8  ldur x2, [x29, #-0x58]
0x03D7C4B4: e30314aa  mov x3, x20
0x03D7C4B8: e4031faa  mov x4, xzr
0x03D7C4BC: e5031faa  mov x5, xzr
0x03D7C4C0: 3314d097  bl #0x318158c
0x03D7C4C4: 760000b5  cbnz x22, #0x3d7c4d0
0x03D7C4C8: e00315aa  mov x0, x21
0x03D7C4CC: 23a5d397  bl #0x3265958
0x03D7C4D0: e00316aa  mov x0, x22
0x03D7C4D4: f411d097  bl #0x3180ca4
0x03D7C4D8: 0f34c297  bl #0x2e09514

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D7CAC0 | MergeEngine.Configuration.Definitions.Reward$$FindAllMultiplesByType<object>
; native signature: System_Collections_Generic_List_TMultiple__o* MergeEngine_Configuration_Definitions_Reward__FindAllMultiplesByType_object_ (MergeEngine_Configuration_Definitions_Reward_o* __this, bool isEnrich, const MethodInfo_3D7CAC0* method);
; bytes=656 sha256=c483b6930d9d31b1fa414945337878a1ee71cb0bc25ed4b71b9a67bf74256612 status=arm64_complete_bound indexed_start=True
0x03D7CAC0: ff0302d1  sub sp, sp, #0x80
0x03D7CAC4: fe6704a9  stp x30, x25, [sp, #0x40]
0x03D7CAC8: f85f05a9  stp x24, x23, [sp, #0x50]
0x03D7CACC: f65706a9  stp x22, x21, [sp, #0x60]
0x03D7CAD0: f44f07a9  stp x20, x19, [sp, #0x70]
0x03D7CAD4: 481c40f9  ldr x8, [x2, #0x38]
0x03D7CAD8: f30302aa  mov x19, x2
0x03D7CADC: f503012a  mov w21, w1
0x03D7CAE0: f40300aa  mov x20, x0
0x03D7CAE4: 480200b5  cbnz x8, #0x3d7cb2c
0x03D7CAE8: e0c701b0  adrp x0, #0x7679000
0x03D7CAEC: 00d847f9  ldr x0, [x0, #0xfb0]
0x03D7CAF0: ca0fd097  bl #0x3180a18
0x03D7CAF4: e0c701b0  adrp x0, #0x7679000
0x03D7CAF8: 00dc47f9  ldr x0, [x0, #0xfb8]
0x03D7CAFC: c70fd097  bl #0x3180a18
0x03D7CB00: e0c701b0  adrp x0, #0x7679000
0x03D7CB04: 00e047f9  ldr x0, [x0, #0xfc0]
0x03D7CB08: c40fd097  bl #0x3180a18
0x03D7CB0C: e0c701b0  adrp x0, #0x7679000
0x03D7CB10: 00e447f9  ldr x0, [x0, #0xfc8]
0x03D7CB14: c10fd097  bl #0x3180a18
0x03D7CB18: 681e40f9  ldr x8, [x19, #0x38]
0x03D7CB1C: 880000b5  cbnz x8, #0x3d7cb2c
0x03D7CB20: e00313aa  mov x0, x19
0x03D7CB24: 5567cf97  bl #0x3156878
0x03D7CB28: 681e40f9  ldr x8, [x19, #0x38]
0x03D7CB2C: ff7f02a9  stp xzr, xzr, [sp, #0x20]
0x03D7CB30: ff1b00f9  str xzr, [sp, #0x30]
0x03D7CB34: 000140f9  ldr x0, [x8]
0x03D7CB38: 08d44439  ldrb w8, [x0, #0x135]
0x03D7CB3C: 48000037  tbnz w8, #0, #0x3d7cb44
0x03D7CB40: 3767cf97  bl #0x315681c
0x03D7CB44: 5710d097  bl #0x3180ca0
0x03D7CB48: 681e40f9  ldr x8, [x19, #0x38]
0x03D7CB4C: f60300aa  mov x22, x0
0x03D7CB50: 010540f9  ldr x1, [x8, #8]
0x03D7CB54: 391c0b94  bl #0x4043c38
0x03D7CB58: 800e40f9  ldr x0, [x20, #0x18]
0x03D7CB5C: 400b00b4  cbz x0, #0x3d7ccc4
0x03D7CB60: e8c701b0  adrp x8, #0x7679000
0x03D7CB64: 08e547f9  ldr x8, [x8, #0xfc8]
0x03D7CB68: 010140f9  ldr x1, [x8]
0x03D7CB6C: e8230091  add x8, sp, #8
0x03D7CB70: 3e210b94  bl #0x4045068
0x03D7CB74: e083c03c  ldur q0, [sp, #8]
0x03D7CB78: e80f40f9  ldr x8, [sp, #0x18]
0x03D7CB7C: f9c701b0  adrp x25, #0x7679000
0x03D7CB80: e00b803d  str q0, [sp, #0x20]
0x03D7CB84: e81b00f9  str x8, [sp, #0x30]
0x03D7CB88: 39df47f9  ldr x25, [x25, #0xfb8]
0x03D7CB8C: 210340f9  ldr x1, [x25]
0x03D7CB90: e0830091  add x0, sp, #0x20
0x03D7CB94: 88634a94  bl #0x50159b4
0x03D7CB98: 80060036  tbz w0, #0, #0x3d7cc68
0x03D7CB9C: 681e40f9  ldr x8, [x19, #0x38]
0x03D7CBA0: f71b40f9  ldr x23, [sp, #0x30]
0x03D7CBA4: 010940f9  ldr x1, [x8, #0x10]
0x03D7CBA8: 28d44439  ldrb w8, [x1, #0x135]
0x03D7CBAC: 88000037  tbnz w8, #0, #0x3d7cbbc
0x03D7CBB0: e00301aa  mov x0, x1
0x03D7CBB4: 1a67cf97  bl #0x315681c
0x03D7CBB8: e10300aa  mov x1, x0
0x03D7CBBC: e00317aa  mov x0, x23
0x03D7CBC0: f40fd097  bl #0x3180b90
0x03D7CBC4: 40feffb4  cbz x0, #0x3d7cb8c
0x03D7CBC8: 681e40f9  ldr x8, [x19, #0x38]
0x03D7CBCC: 180940f9  ldr x24, [x8, #0x10]
0x03D7CBD0: 08d74439  ldrb w8, [x24, #0x135]
0x03D7CBD4: 88000037  tbnz w8, #0, #0x3d7cbe4
0x03D7CBD8: e00318aa  mov x0, x24
0x03D7CBDC: 1067cf97  bl #0x315681c
0x03D7CBE0: f80300aa  mov x24, x0
0x03D7CBE4: 170100b4  cbz x23, #0x3d7cc04
0x03D7CBE8: e00317aa  mov x0, x23
0x03D7CBEC: e10318aa  mov x1, x24
0x03D7CBF0: e80fd097  bl #0x3180b90
0x03D7CBF4: e10300aa  mov x1, x0
0x03D7CBF8: 010600b4  cbz x1, #0x3d7ccb8
0x03D7CBFC: 960000b5  cbnz x22, #0x3d7cc0c
0x03D7CC00: 2c000014  b #0x3d7ccb0
0x03D7CC04: e1031faa  mov x1, xzr
0x03D7CC08: 560500b4  cbz x22, #0x3d7ccb0
0x03D7CC0C: 691e40f9  ldr x9, [x19, #0x38]
0x03D7CC10: ca1e40b9  ldr w10, [x22, #0x1c]
0x03D7CC14: c80a40f9  ldr x8, [x22, #0x10]
0x03D7CC18: 290d40f9  ldr x9, [x9, #0x18]
0x03D7CC1C: 4a050011  add w10, w10, #1
0x03D7CC20: ca1e00b9  str w10, [x22, #0x1c]
0x03D7CC24: 880400b4  cbz x8, #0x3d7ccb4
0x03D7CC28: ca1a80b9  ldrsw x10, [x22, #0x18]
0x03D7CC2C: 0b1940b9  ldr w11, [x8, #0x18]
0x03D7CC30: 5f010b6b  cmp w10, w11
0x03D7CC34: e2000054  b.hs #0x3d7cc50
0x03D7CC38: 49050011  add w9, w10, #1
0x03D7CC3C: 000d0a8b  add x0, x8, x10, lsl #3
0x03D7CC40: c91a00b9  str w9, [x22, #0x18]
0x03D7CC44: 010c02f8  str x1, [x0, #0x20]!
0x03D7CC48: 5f0fd097  bl #0x31809c4
0x03D7CC4C: d0ffff17  b #0x3d7cb8c
0x03D7CC50: 281140f9  ldr x8, [x9, #0x20]
0x03D7CC54: 086140f9  ldr x8, [x8, #0xc0]
0x03D7CC58: 023940f9  ldr x2, [x8, #0x70]
0x03D7CC5C: e00316aa  mov x0, x22
0x03D7CC60: 031e0b94  bl #0x404446c
0x03D7CC64: caffff17  b #0x3d7cb8c
0x03D7CC68: e8c701b0  adrp x8, #0x7679000
0x03D7CC6C: 08d947f9  ldr x8, [x8, #0xfb0]
0x03D7CC70: e0830091  add x0, sp, #0x20
0x03D7CC74: 010140f9  ldr x1, [x8]
0x03D7CC78: 4e634a94  bl #0x50159b0
0x03D7CC7C: d5000036  tbz w21, #0, #0x3d7cc94
0x03D7CC80: 681e40f9  ldr x8, [x19, #0x38]
0x03D7CC84: e00314aa  mov x0, x20
0x03D7CC88: e10316aa  mov x1, x22
0x03D7CC8C: 021140f9  ldr x2, [x8, #0x20]
0x03D7CC90: d9feff97  bl #0x3d7c7f4
0x03D7CC94: e00316aa  mov x0, x22
0x03D7CC98: f44f47a9  ldp x20, x19, [sp, #0x70]
0x03D7CC9C: f65746a9  ldp x22, x21, [sp, #0x60]
0x03D7CCA0: f85f45a9  ldp x24, x23, [sp, #0x50]
0x03D7CCA4: fe6744a9  ldp x30, x25, [sp, #0x40]
0x03D7CCA8: ff030291  add sp, sp, #0x80
0x03D7CCAC: c0035fd6  ret
0x03D7CCB0: ff0fd097  bl #0x3180cac
0x03D7CCB4: fe0fd097  bl #0x3180cac
0x03D7CCB8: e00317aa  mov x0, x23
0x03D7CCBC: e10318aa  mov x1, x24
0x03D7CCC0: e210d097  bl #0x3181048
0x03D7CCC4: fa0fd097  bl #0x3180cac
0x03D7CCC8: 05000014  b #0x3d7ccdc
0x03D7CCCC: 04000014  b #0x3d7ccdc
0x03D7CCD0: 03000014  b #0x3d7ccdc
0x03D7CCD4: 02000014  b #0x3d7ccdc
0x03D7CCD8: 01000014  b #0x3d7ccdc
0x03D7CCDC: f70300aa  mov x23, x0
0x03D7CCE0: 3f040071  cmp w1, #1
0x03D7CCE4: a1010054  b.ne #0x3d7cd18
0x03D7CCE8: e00317aa  mov x0, x23
0x03D7CCEC: 0947d194  bl #0x71ce910
0x03D7CCF0: 180040f9  ldr x24, [x0]
0x03D7CCF4: 0b47d194  bl #0x71ce920
0x03D7CCF8: e8c701b0  adrp x8, #0x7679000
0x03D7CCFC: 08d947f9  ldr x8, [x8, #0xfb0]
0x03D7CD00: e0830091  add x0, sp, #0x20
0x03D7CD04: 010140f9  ldr x1, [x8]
0x03D7CD08: 2a634a94  bl #0x50159b0
0x03D7CD0C: 98fbffb4  cbz x24, #0x3d7cc7c
0x03D7CD10: e00318aa  mov x0, x24
0x03D7CD14: e40fd097  bl #0x3180ca4
0x03D7CD18: f8031faa  mov x24, xzr
0x03D7CD1C: 02000014  b #0x3d7cd24
0x03D7CD20: f70300aa  mov x23, x0
0x03D7CD24: e8c701b0  adrp x8, #0x7679000
0x03D7CD28: 08d947f9  ldr x8, [x8, #0xfb0]
0x03D7CD2C: 010140f9  ldr x1, [x8]
0x03D7CD30: e0830091  add x0, sp, #0x20
0x03D7CD34: 1f634a94  bl #0x50159b0
0x03D7CD38: 780000b5  cbnz x24, #0x3d7cd44
0x03D7CD3C: e00317aa  mov x0, x23
0x03D7CD40: 06a3d397  bl #0x3265958
0x03D7CD44: e00318aa  mov x0, x24
0x03D7CD48: d70fd097  bl #0x3180ca4
0x03D7CD4C: f231c297  bl #0x2e09514

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D7CD50 | MergeEngine.Configuration.Definitions.Reward$$FindAllMultiplesByType<__Il2CppFullySharedGenericType>
; native signature: System_Collections_Generic_List_TMultiple__o* MergeEngine_Configuration_Definitions_Reward__FindAllMultiplesByType___Il2CppFullySharedGenericType_ (MergeEngine_Configuration_Definitions_Reward_o* __this, bool isEnrich, const MethodInfo_3D7CD50* method);
; bytes=752 sha256=2ab6511c230bdfa6a159fab90564384400bad862b0801a09aabb87b9568e30a1 status=arm64_complete_bound indexed_start=True
0x03D7CD50: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x03D7CD54: fc6f01a9  stp x28, x27, [sp, #0x10]
0x03D7CD58: fa6702a9  stp x26, x25, [sp, #0x20]
0x03D7CD5C: f85f03a9  stp x24, x23, [sp, #0x30]
0x03D7CD60: f65704a9  stp x22, x21, [sp, #0x40]
0x03D7CD64: f44f05a9  stp x20, x19, [sp, #0x50]
0x03D7CD68: fd030091  mov x29, sp
0x03D7CD6C: ff0301d1  sub sp, sp, #0x40
0x03D7CD70: 5cd03bd5  mrs x28, tpidr_el0
0x03D7CD74: 881740f9  ldr x8, [x28, #0x28]
0x03D7CD78: f30302aa  mov x19, x2
0x03D7CD7C: f603012a  mov w22, w1
0x03D7CD80: fb0300aa  mov x27, x0
0x03D7CD84: a8831ff8  stur x8, [x29, #-8]
0x03D7CD88: 551c40f9  ldr x21, [x2, #0x38]
0x03D7CD8C: 550200b5  cbnz x21, #0x3d7cdd4
0x03D7CD90: e0c701b0  adrp x0, #0x7679000
0x03D7CD94: 00d847f9  ldr x0, [x0, #0xfb0]
0x03D7CD98: 200fd097  bl #0x3180a18
0x03D7CD9C: e0c701b0  adrp x0, #0x7679000
0x03D7CDA0: 00dc47f9  ldr x0, [x0, #0xfb8]
0x03D7CDA4: 1d0fd097  bl #0x3180a18
0x03D7CDA8: e0c701b0  adrp x0, #0x7679000
0x03D7CDAC: 00e047f9  ldr x0, [x0, #0xfc0]
0x03D7CDB0: 1a0fd097  bl #0x3180a18
0x03D7CDB4: e0c701b0  adrp x0, #0x7679000
0x03D7CDB8: 00e447f9  ldr x0, [x0, #0xfc8]
0x03D7CDBC: 170fd097  bl #0x3180a18
0x03D7CDC0: 751e40f9  ldr x21, [x19, #0x38]
0x03D7CDC4: 950000b5  cbnz x21, #0x3d7cdd4
0x03D7CDC8: e00313aa  mov x0, x19
0x03D7CDCC: ab66cf97  bl #0x3156878
0x03D7CDD0: 751e40f9  ldr x21, [x19, #0x38]
0x03D7CDD4: a80a40f9  ldr x8, [x21, #0x10]
0x03D7CDD8: 17fd40b9  ldr w23, [x8, #0xfc]
0x03D7CDDC: e8030091  mov x8, sp
0x03D7CDE0: e93e0091  add x9, x23, #0xf
0x03D7CDE4: 29717c92  and x9, x9, #0x1fffffff0
0x03D7CDE8: 180109cb  sub x24, x8, x9
0x03D7CDEC: 1f030091  mov sp, x24
0x03D7CDF0: e8030091  mov x8, sp
0x03D7CDF4: 190109cb  sub x25, x8, x9
0x03D7CDF8: 3f030091  mov sp, x25
0x03D7CDFC: e8030091  mov x8, sp
0x03D7CE00: 1a0109cb  sub x26, x8, x9
0x03D7CE04: bf7f3ea9  stp xzr, xzr, [x29, #-0x20]
0x03D7CE08: bf031ff8  stur xzr, [x29, #-0x10]
0x03D7CE0C: 5f030091  mov sp, x26
0x03D7CE10: e0031aaa  mov x0, x26
0x03D7CE14: e1031f2a  mov w1, wzr
0x03D7CE18: e20317aa  mov x2, x23
0x03D7CE1C: e146d194  bl #0x71ce9a0
0x03D7CE20: a00240f9  ldr x0, [x21]
0x03D7CE24: b6431cb8  stur w22, [x29, #-0x3c]
0x03D7CE28: 08d44439  ldrb w8, [x0, #0x135]
0x03D7CE2C: 48000037  tbnz w8, #0, #0x3d7ce34
0x03D7CE30: 7b66cf97  bl #0x315681c
0x03D7CE34: 9b0fd097  bl #0x3180ca0
0x03D7CE38: 681e40f9  ldr x8, [x19, #0x38]
0x03D7CE3C: f60300aa  mov x22, x0
0x03D7CE40: 010540f9  ldr x1, [x8, #8]
0x03D7CE44: 280040f9  ldr x8, [x1]
0x03D7CE48: 00013fd6  blr x8
0x03D7CE4C: 600f40f9  ldr x0, [x27, #0x18]
0x03D7CE50: 200b00b4  cbz x0, #0x3d7cfb4
0x03D7CE54: e8c701b0  adrp x8, #0x7679000
0x03D7CE58: 08e547f9  ldr x8, [x8, #0xfc8]
0x03D7CE5C: f4031baa  mov x20, x27
0x03D7CE60: 010140f9  ldr x1, [x8]
0x03D7CE64: a8e300d1  sub x8, x29, #0x38
0x03D7CE68: 80200b94  bl #0x4045068
0x03D7CE6C: a083dc3c  ldur q0, [x29, #-0x38]
0x03D7CE70: a8835df8  ldur x8, [x29, #-0x28]
0x03D7CE74: f5c701b0  adrp x21, #0x7679000
0x03D7CE78: a0039e3c  stur q0, [x29, #-0x20]
0x03D7CE7C: a8031ff8  stur x8, [x29, #-0x10]
0x03D7CE80: b5de47f9  ldr x21, [x21, #0xfb8]
0x03D7CE84: a10240f9  ldr x1, [x21]
0x03D7CE88: a08300d1  sub x0, x29, #0x20
0x03D7CE8C: ca624a94  bl #0x50159b4
0x03D7CE90: a0050036  tbz w0, #0, #0x3d7cf44
0x03D7CE94: 681e40f9  ldr x8, [x19, #0x38]
0x03D7CE98: bb035ff8  ldur x27, [x29, #-0x10]
0x03D7CE9C: 010940f9  ldr x1, [x8, #0x10]
0x03D7CEA0: 28d44439  ldrb w8, [x1, #0x135]
0x03D7CEA4: 88000037  tbnz w8, #0, #0x3d7ceb4
0x03D7CEA8: e00301aa  mov x0, x1
0x03D7CEAC: 5c66cf97  bl #0x315681c
0x03D7CEB0: e10300aa  mov x1, x0
0x03D7CEB4: e0031baa  mov x0, x27
0x03D7CEB8: 360fd097  bl #0x3180b90
0x03D7CEBC: 40feffb4  cbz x0, #0x3d7ce84
0x03D7CEC0: 681e40f9  ldr x8, [x19, #0x38]
0x03D7CEC4: 010940f9  ldr x1, [x8, #0x10]
0x03D7CEC8: 28d44439  ldrb w8, [x1, #0x135]
0x03D7CECC: 88000037  tbnz w8, #0, #0x3d7cedc
0x03D7CED0: e00301aa  mov x0, x1
0x03D7CED4: 5266cf97  bl #0x315681c
0x03D7CED8: e10300aa  mov x1, x0
0x03D7CEDC: e0031baa  mov x0, x27
0x03D7CEE0: e20318aa  mov x2, x24
0x03D7CEE4: 2f0fd097  bl #0x3180ba0
0x03D7CEE8: e10300aa  mov x1, x0
0x03D7CEEC: e0031aaa  mov x0, x26
0x03D7CEF0: e20317aa  mov x2, x23
0x03D7CEF4: 9f46d194  bl #0x71ce970
0x03D7CEF8: e00319aa  mov x0, x25
0x03D7CEFC: e1031aaa  mov x1, x26
0x03D7CF00: e20317aa  mov x2, x23
0x03D7CF04: 9b46d194  bl #0x71ce970
0x03D7CF08: 560500b4  cbz x22, #0x3d7cfb0
0x03D7CF0C: 681e40f9  ldr x8, [x19, #0x38]
0x03D7CF10: e40319aa  mov x4, x25
0x03D7CF14: 090940f9  ldr x9, [x8, #0x10]
0x03D7CF18: 292940b9  ldr w9, [x9, #0x28]
0x03D7CF1C: 4900f837  tbnz w9, #0x1f, #0x3d7cf24
0x03D7CF20: 240340f9  ldr x4, [x25]
0x03D7CF24: 010d40f9  ldr x1, [x8, #0x18]
0x03D7CF28: 200040f9  ldr x0, [x1]
0x03D7CF2C: a4831cf8  stur x4, [x29, #-0x38]
0x03D7CF30: 280840f9  ldr x8, [x1, #0x10]
0x03D7CF34: a3e300d1  sub x3, x29, #0x38
0x03D7CF38: e20316aa  mov x2, x22
0x03D7CF3C: 00013fd6  blr x8
0x03D7CF40: d1ffff17  b #0x3d7ce84
0x03D7CF44: e8c701b0  adrp x8, #0x7679000
0x03D7CF48: 08d947f9  ldr x8, [x8, #0xfb0]
0x03D7CF4C: a08300d1  sub x0, x29, #0x20
0x03D7CF50: 010140f9  ldr x1, [x8]
0x03D7CF54: 97624a94  bl #0x50159b0
0x03D7CF58: a8435cb8  ldur w8, [x29, #-0x3c]
0x03D7CF5C: 08010036  tbz w8, #0, #0x3d7cf7c
0x03D7CF60: 681e40f9  ldr x8, [x19, #0x38]
0x03D7CF64: e00314aa  mov x0, x20
0x03D7CF68: e10316aa  mov x1, x22
0x03D7CF6C: 021140f9  ldr x2, [x8, #0x20]
0x03D7CF70: 480040f9  ldr x8, [x2]
0x03D7CF74: 00013fd6  blr x8
0x03D7CF78: f60300aa  mov x22, x0
0x03D7CF7C: 881740f9  ldr x8, [x28, #0x28]
0x03D7CF80: a9835ff8  ldur x9, [x29, #-8]
0x03D7CF84: 1f0109eb  cmp x8, x9
0x03D7CF88: 81010054  b.ne #0x3d7cfb8
0x03D7CF8C: e00316aa  mov x0, x22
0x03D7CF90: bf030091  mov sp, x29
0x03D7CF94: f44f45a9  ldp x20, x19, [sp, #0x50]
0x03D7CF98: f65744a9  ldp x22, x21, [sp, #0x40]
0x03D7CF9C: f85f43a9  ldp x24, x23, [sp, #0x30]
0x03D7CFA0: fa6742a9  ldp x26, x25, [sp, #0x20]
0x03D7CFA4: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x03D7CFA8: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x03D7CFAC: c0035fd6  ret
0x03D7CFB0: 3f0fd097  bl #0x3180cac
0x03D7CFB4: 3e0fd097  bl #0x3180cac
0x03D7CFB8: 7646d194  bl #0x71ce990
0x03D7CFBC: 04000014  b #0x3d7cfcc
0x03D7CFC0: 03000014  b #0x3d7cfcc
0x03D7CFC4: 02000014  b #0x3d7cfcc
0x03D7CFC8: 01000014  b #0x3d7cfcc
0x03D7CFCC: f70300aa  mov x23, x0
0x03D7CFD0: 3f040071  cmp w1, #1
0x03D7CFD4: a1010054  b.ne #0x3d7d008
0x03D7CFD8: e00317aa  mov x0, x23
0x03D7CFDC: 4d46d194  bl #0x71ce910
0x03D7CFE0: 180040f9  ldr x24, [x0]
0x03D7CFE4: 4f46d194  bl #0x71ce920
0x03D7CFE8: e8c701b0  adrp x8, #0x7679000
0x03D7CFEC: 08d947f9  ldr x8, [x8, #0xfb0]
0x03D7CFF0: a08300d1  sub x0, x29, #0x20
0x03D7CFF4: 010140f9  ldr x1, [x8]
0x03D7CFF8: 6e624a94  bl #0x50159b0
0x03D7CFFC: f8faffb4  cbz x24, #0x3d7cf58
0x03D7D000: e00318aa  mov x0, x24
0x03D7D004: 280fd097  bl #0x3180ca4
0x03D7D008: f8031faa  mov x24, xzr
0x03D7D00C: 02000014  b #0x3d7d014
0x03D7D010: f70300aa  mov x23, x0
0x03D7D014: e8c70190  adrp x8, #0x7679000
0x03D7D018: 08d947f9  ldr x8, [x8, #0xfb0]
0x03D7D01C: 010140f9  ldr x1, [x8]
0x03D7D020: a08300d1  sub x0, x29, #0x20
0x03D7D024: 63624a94  bl #0x50159b0
0x03D7D028: 780000b5  cbnz x24, #0x3d7d034
0x03D7D02C: e00317aa  mov x0, x23
0x03D7D030: 4aa2d397  bl #0x3265958
0x03D7D034: e00318aa  mov x0, x24
0x03D7D038: 1b0fd097  bl #0x3180ca4
0x03D7D03C: 3631c297  bl #0x2e09514

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D7B228 | MergeEngine.Configuration.Definitions.Reward$$AddViewDatas<object>
; native signature: void MergeEngine_Configuration_Definitions_Reward__AddViewDatas_object_ (MergeEngine_Configuration_Definitions_Reward_o* __this, System_Collections_ObjectModel_ReadOnlyCollection_TMultiple__o* newDataItems, const MethodInfo_3D7B228* method);
; bytes=652 sha256=7bd5c4d170f346e1aa8e976c07c26530db5e33406f5cfdf3bf1b8004e2063aae status=arm64_complete_bound indexed_start=True
0x03D7B228: fe0f1df8  str x30, [sp, #-0x30]!
0x03D7B22C: f65701a9  stp x22, x21, [sp, #0x10]
0x03D7B230: f44f02a9  stp x20, x19, [sp, #0x20]
0x03D7B234: 481c40f9  ldr x8, [x2, #0x38]
0x03D7B238: f40302aa  mov x20, x2
0x03D7B23C: f30301aa  mov x19, x1
0x03D7B240: f50300aa  mov x21, x0
0x03D7B244: 680100b5  cbnz x8, #0x3d7b270
0x03D7B248: 80c601f0  adrp x0, #0x764e000
0x03D7B24C: 006444f9  ldr x0, [x0, #0x8c8]
0x03D7B250: f215d097  bl #0x3180a18
0x03D7B254: 80c601f0  adrp x0, #0x764e000
0x03D7B258: 007044f9  ldr x0, [x0, #0x8e0]
0x03D7B25C: ef15d097  bl #0x3180a18
0x03D7B260: 881e40f9  ldr x8, [x20, #0x38]
0x03D7B264: 680000b5  cbnz x8, #0x3d7b270
0x03D7B268: e00314aa  mov x0, x20
0x03D7B26C: 836dcf97  bl #0x3156878
0x03D7B270: 130c00b4  cbz x19, #0x3d7b3f0
0x03D7B274: 881e40f9  ldr x8, [x20, #0x38]
0x03D7B278: e00313aa  mov x0, x19
0x03D7B27C: 010540f9  ldr x1, [x8, #8]
0x03D7B280: 522a1b94  bl #0x4445bc8
0x03D7B284: f30300aa  mov x19, x0
0x03D7B288: 600b00b4  cbz x0, #0x3d7b3f4
0x03D7B28C: 96c601f0  adrp x22, #0x764e000
0x03D7B290: d67244f9  ldr x22, [x22, #0x8e0]
0x03D7B294: 680240f9  ldr x8, [x19]
0x03D7B298: c10240f9  ldr x1, [x22]
0x03D7B29C: 095d4279  ldrh w9, [x8, #0x12e]
0x03D7B2A0: 290100b4  cbz x9, #0x3d7b2c4
0x03D7B2A4: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D7B2A8: 4a210091  add x10, x10, #8
0x03D7B2AC: 4b815ff8  ldur x11, [x10, #-8]
0x03D7B2B0: 7f0101eb  cmp x11, x1
0x03D7B2B4: 00010054  b.eq #0x3d7b2d4
0x03D7B2B8: 290500f1  subs x9, x9, #1
0x03D7B2BC: 4a410091  add x10, x10, #0x10
0x03D7B2C0: 61ffff54  b.ne #0x3d7b2ac
0x03D7B2C4: e00313aa  mov x0, x19
0x03D7B2C8: e2031f2a  mov w2, wzr
0x03D7B2CC: 116ecf97  bl #0x3156b10
0x03D7B2D0: 04000014  b #0x3d7b2e0
0x03D7B2D4: 490180b9  ldrsw x9, [x10]
0x03D7B2D8: 0811098b  add x8, x8, x9, lsl #4
0x03D7B2DC: 00e10491  add x0, x8, #0x138
0x03D7B2E0: 080440a9  ldp x8, x1, [x0]
0x03D7B2E4: e00313aa  mov x0, x19
0x03D7B2E8: 00013fd6  blr x8
0x03D7B2EC: 40040036  tbz w0, #0, #0x3d7b374
0x03D7B2F0: 881e40f9  ldr x8, [x20, #0x38]
0x03D7B2F4: 010940f9  ldr x1, [x8, #0x10]
0x03D7B2F8: 28d44439  ldrb w8, [x1, #0x135]
0x03D7B2FC: 88000037  tbnz w8, #0, #0x3d7b30c
0x03D7B300: e00301aa  mov x0, x1
0x03D7B304: 466dcf97  bl #0x315681c
0x03D7B308: e10300aa  mov x1, x0
0x03D7B30C: 680240f9  ldr x8, [x19]
0x03D7B310: 095d4279  ldrh w9, [x8, #0x12e]
0x03D7B314: 290100b4  cbz x9, #0x3d7b338
0x03D7B318: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D7B31C: 4a210091  add x10, x10, #8
0x03D7B320: 4b815ff8  ldur x11, [x10, #-8]
0x03D7B324: 7f0101eb  cmp x11, x1
0x03D7B328: 00010054  b.eq #0x3d7b348
0x03D7B32C: 290500f1  subs x9, x9, #1
0x03D7B330: 4a410091  add x10, x10, #0x10
0x03D7B334: 61ffff54  b.ne #0x3d7b320
0x03D7B338: e00313aa  mov x0, x19
0x03D7B33C: e2031f2a  mov w2, wzr
0x03D7B340: f46dcf97  bl #0x3156b10
0x03D7B344: 04000014  b #0x3d7b354
0x03D7B348: 490180b9  ldrsw x9, [x10]
0x03D7B34C: 0811098b  add x8, x8, x9, lsl #4
0x03D7B350: 00e10491  add x0, x8, #0x138
0x03D7B354: 080440a9  ldp x8, x1, [x0]
0x03D7B358: e00313aa  mov x0, x19
0x03D7B35C: 00013fd6  blr x8
0x03D7B360: e10300aa  mov x1, x0
0x03D7B364: e00315aa  mov x0, x21
0x03D7B368: e2031faa  mov x2, xzr
0x03D7B36C: d8a9b294  bl #0x6a25acc
0x03D7B370: c9ffff17  b #0x3d7b294
0x03D7B374: f4031faa  mov x20, xzr
0x03D7B378: 330300b4  cbz x19, #0x3d7b3dc
0x03D7B37C: 8ac601f0  adrp x10, #0x764e000
0x03D7B380: 680240f9  ldr x8, [x19]
0x03D7B384: 4a6544f9  ldr x10, [x10, #0x8c8]
0x03D7B388: 095d4279  ldrh w9, [x8, #0x12e]
0x03D7B38C: 410140f9  ldr x1, [x10]
0x03D7B390: 290100b4  cbz x9, #0x3d7b3b4
0x03D7B394: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D7B398: 4a210091  add x10, x10, #8
0x03D7B39C: 4b815ff8  ldur x11, [x10, #-8]
0x03D7B3A0: 7f0101eb  cmp x11, x1
0x03D7B3A4: 00010054  b.eq #0x3d7b3c4
0x03D7B3A8: 290500f1  subs x9, x9, #1
0x03D7B3AC: 4a410091  add x10, x10, #0x10
0x03D7B3B0: 61ffff54  b.ne #0x3d7b39c
0x03D7B3B4: e00313aa  mov x0, x19
0x03D7B3B8: e2031f2a  mov w2, wzr
0x03D7B3BC: d56dcf97  bl #0x3156b10
0x03D7B3C0: 04000014  b #0x3d7b3d0
0x03D7B3C4: 490180b9  ldrsw x9, [x10]
0x03D7B3C8: 0811098b  add x8, x8, x9, lsl #4
0x03D7B3CC: 00e10491  add x0, x8, #0x138
0x03D7B3D0: 080440a9  ldp x8, x1, [x0]
0x03D7B3D4: e00313aa  mov x0, x19
0x03D7B3D8: 00013fd6  blr x8
0x03D7B3DC: f40000b5  cbnz x20, #0x3d7b3f8
0x03D7B3E0: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03D7B3E4: f65741a9  ldp x22, x21, [sp, #0x10]
0x03D7B3E8: fe0743f8  ldr x30, [sp], #0x30
0x03D7B3EC: c0035fd6  ret
0x03D7B3F0: 2f16d097  bl #0x3180cac
0x03D7B3F4: 2e16d097  bl #0x3180cac
0x03D7B3F8: e00314aa  mov x0, x20
0x03D7B3FC: 2a16d097  bl #0x3180ca4
0x03D7B400: 03000014  b #0x3d7b40c
0x03D7B404: 02000014  b #0x3d7b40c
0x03D7B408: 01000014  b #0x3d7b40c
0x03D7B40C: f50300aa  mov x21, x0
0x03D7B410: 3f040071  cmp w1, #1
0x03D7B414: c1000054  b.ne #0x3d7b42c
0x03D7B418: e00315aa  mov x0, x21
0x03D7B41C: 3d4dd194  bl #0x71ce910
0x03D7B420: 140040f9  ldr x20, [x0]
0x03D7B424: 3f4dd194  bl #0x71ce920
0x03D7B428: d4ffff17  b #0x3d7b378
0x03D7B42C: f4031faa  mov x20, xzr
0x03D7B430: 02000014  b #0x3d7b438
0x03D7B434: f50300aa  mov x21, x0
0x03D7B438: 330300b4  cbz x19, #0x3d7b49c
0x03D7B43C: 8ac601f0  adrp x10, #0x764e000
0x03D7B440: 680240f9  ldr x8, [x19]
0x03D7B444: 4a6544f9  ldr x10, [x10, #0x8c8]
0x03D7B448: 095d4279  ldrh w9, [x8, #0x12e]
0x03D7B44C: 410140f9  ldr x1, [x10]
0x03D7B450: 290100b4  cbz x9, #0x3d7b474
0x03D7B454: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D7B458: 4a210091  add x10, x10, #8
0x03D7B45C: 4b815ff8  ldur x11, [x10, #-8]
0x03D7B460: 7f0101eb  cmp x11, x1
0x03D7B464: 00010054  b.eq #0x3d7b484
0x03D7B468: 290500f1  subs x9, x9, #1
0x03D7B46C: 4a410091  add x10, x10, #0x10
0x03D7B470: 61ffff54  b.ne #0x3d7b45c
0x03D7B474: e00313aa  mov x0, x19
0x03D7B478: e2031f2a  mov w2, wzr
0x03D7B47C: a56dcf97  bl #0x3156b10
0x03D7B480: 04000014  b #0x3d7b490
0x03D7B484: 490180b9  ldrsw x9, [x10]
0x03D7B488: 0811098b  add x8, x8, x9, lsl #4
0x03D7B48C: 00e10491  add x0, x8, #0x138
0x03D7B490: 080440a9  ldp x8, x1, [x0]
0x03D7B494: e00313aa  mov x0, x19
0x03D7B498: 00013fd6  blr x8
0x03D7B49C: 740000b5  cbnz x20, #0x3d7b4a8
0x03D7B4A0: e00315aa  mov x0, x21
0x03D7B4A4: 2da9d397  bl #0x3265958
0x03D7B4A8: e00314aa  mov x0, x20
0x03D7B4AC: fe15d097  bl #0x3180ca4
0x03D7B4B0: 1938c297  bl #0x2e09514

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D7B4B4 | MergeEngine.Configuration.Definitions.Reward$$AddViewDatas<__Il2CppFullySharedGenericType>
; native signature: void MergeEngine_Configuration_Definitions_Reward__AddViewDatas___Il2CppFullySharedGenericType_ (MergeEngine_Configuration_Definitions_Reward_o* __this, System_Collections_ObjectModel_ReadOnlyCollection_TMultiple__o* newDataItems, const MethodInfo_3D7B4B4* method);
; bytes=856 sha256=dc19b6b20093fee431f13841b859cfe811c067bc6b7c4ad99bc57a93516e79de status=arm64_complete_bound indexed_start=True
0x03D7B4B4: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x03D7B4B8: fb0b00f9  str x27, [sp, #0x10]
0x03D7B4BC: fa6702a9  stp x26, x25, [sp, #0x20]
0x03D7B4C0: f85f03a9  stp x24, x23, [sp, #0x30]
0x03D7B4C4: f65704a9  stp x22, x21, [sp, #0x40]
0x03D7B4C8: f44f05a9  stp x20, x19, [sp, #0x50]
0x03D7B4CC: fd030091  mov x29, sp
0x03D7B4D0: ff4300d1  sub sp, sp, #0x10
0x03D7B4D4: 5ad03bd5  mrs x26, tpidr_el0
0x03D7B4D8: 481740f9  ldr x8, [x26, #0x28]
0x03D7B4DC: f40302aa  mov x20, x2
0x03D7B4E0: f30301aa  mov x19, x1
0x03D7B4E4: f50300aa  mov x21, x0
0x03D7B4E8: a8831ff8  stur x8, [x29, #-8]
0x03D7B4EC: 5b1c40f9  ldr x27, [x2, #0x38]
0x03D7B4F0: 9b0100b5  cbnz x27, #0x3d7b520
0x03D7B4F4: 80c601f0  adrp x0, #0x764e000
0x03D7B4F8: 006444f9  ldr x0, [x0, #0x8c8]
0x03D7B4FC: 4715d097  bl #0x3180a18
0x03D7B500: 80c601f0  adrp x0, #0x764e000
0x03D7B504: 007044f9  ldr x0, [x0, #0x8e0]
0x03D7B508: 4415d097  bl #0x3180a18
0x03D7B50C: 9b1e40f9  ldr x27, [x20, #0x38]
0x03D7B510: 9b0000b5  cbnz x27, #0x3d7b520
0x03D7B514: e00314aa  mov x0, x20
0x03D7B518: d86ccf97  bl #0x3156878
0x03D7B51C: 9b1e40f9  ldr x27, [x20, #0x38]
0x03D7B520: 681340f9  ldr x8, [x27, #0x20]
0x03D7B524: 16fd40b9  ldr w22, [x8, #0xfc]
0x03D7B528: e8030091  mov x8, sp
0x03D7B52C: c93e0091  add x9, x22, #0xf
0x03D7B530: 29717c92  and x9, x9, #0x1fffffff0
0x03D7B534: 170109cb  sub x23, x8, x9
0x03D7B538: ff020091  mov sp, x23
0x03D7B53C: e8030091  mov x8, sp
0x03D7B540: 180109cb  sub x24, x8, x9
0x03D7B544: 1f030091  mov sp, x24
0x03D7B548: e8030091  mov x8, sp
0x03D7B54C: 190109cb  sub x25, x8, x9
0x03D7B550: 3f030091  mov sp, x25
0x03D7B554: e00319aa  mov x0, x25
0x03D7B558: e1031f2a  mov w1, wzr
0x03D7B55C: e20316aa  mov x2, x22
0x03D7B560: 104dd194  bl #0x71ce9a0
0x03D7B564: 130f00b4  cbz x19, #0x3d7b744
0x03D7B568: 610740f9  ldr x1, [x27, #8]
0x03D7B56C: e00313aa  mov x0, x19
0x03D7B570: 280040f9  ldr x8, [x1]
0x03D7B574: 00013fd6  blr x8
0x03D7B578: f30300aa  mov x19, x0
0x03D7B57C: 600e00b4  cbz x0, #0x3d7b748
0x03D7B580: 9bc601f0  adrp x27, #0x764e000
0x03D7B584: 7b7344f9  ldr x27, [x27, #0x8e0]
0x03D7B588: 680240f9  ldr x8, [x19]
0x03D7B58C: 610340f9  ldr x1, [x27]
0x03D7B590: 095d4279  ldrh w9, [x8, #0x12e]
0x03D7B594: 290100b4  cbz x9, #0x3d7b5b8
0x03D7B598: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D7B59C: 4a210091  add x10, x10, #8
0x03D7B5A0: 4b815ff8  ldur x11, [x10, #-8]
0x03D7B5A4: 7f0101eb  cmp x11, x1
0x03D7B5A8: 00010054  b.eq #0x3d7b5c8
0x03D7B5AC: 290500f1  subs x9, x9, #1
0x03D7B5B0: 4a410091  add x10, x10, #0x10
0x03D7B5B4: 61ffff54  b.ne #0x3d7b5a0
0x03D7B5B8: e00313aa  mov x0, x19
0x03D7B5BC: e2031f2a  mov w2, wzr
0x03D7B5C0: 546dcf97  bl #0x3156b10
0x03D7B5C4: 04000014  b #0x3d7b5d4
0x03D7B5C8: 490180b9  ldrsw x9, [x10]
0x03D7B5CC: 0811098b  add x8, x8, x9, lsl #4
0x03D7B5D0: 00e10491  add x0, x8, #0x138
0x03D7B5D4: 080440a9  ldp x8, x1, [x0]
0x03D7B5D8: e00313aa  mov x0, x19
0x03D7B5DC: 00013fd6  blr x8
0x03D7B5E0: 40060036  tbz w0, #0, #0x3d7b6a8
0x03D7B5E4: 881e40f9  ldr x8, [x20, #0x38]
0x03D7B5E8: 010940f9  ldr x1, [x8, #0x10]
0x03D7B5EC: 28d44439  ldrb w8, [x1, #0x135]
0x03D7B5F0: 88000037  tbnz w8, #0, #0x3d7b600
0x03D7B5F4: e00301aa  mov x0, x1
0x03D7B5F8: 896ccf97  bl #0x315681c
0x03D7B5FC: e10300aa  mov x1, x0
0x03D7B600: 680240f9  ldr x8, [x19]
0x03D7B604: 095d4279  ldrh w9, [x8, #0x12e]
0x03D7B608: 290100b4  cbz x9, #0x3d7b62c
0x03D7B60C: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D7B610: 4a210091  add x10, x10, #8
0x03D7B614: 4b815ff8  ldur x11, [x10, #-8]
0x03D7B618: 7f0101eb  cmp x11, x1
0x03D7B61C: 00010054  b.eq #0x3d7b63c
0x03D7B620: 290500f1  subs x9, x9, #1
0x03D7B624: 4a410091  add x10, x10, #0x10
0x03D7B628: 61ffff54  b.ne #0x3d7b614
0x03D7B62C: e00313aa  mov x0, x19
0x03D7B630: e2031f2a  mov w2, wzr
0x03D7B634: 376dcf97  bl #0x3156b10
0x03D7B638: 04000014  b #0x3d7b648
0x03D7B63C: 490180b9  ldrsw x9, [x10]
0x03D7B640: 0811098b  add x8, x8, x9, lsl #4
0x03D7B644: 00e10491  add x0, x8, #0x138
0x03D7B648: b7031ff8  stur x23, [x29, #-0x10]
0x03D7B64C: 010440f9  ldr x1, [x0, #8]
0x03D7B650: 20a040a9  ldp x0, x8, [x1, #8]
0x03D7B654: a34300d1  sub x3, x29, #0x10
0x03D7B658: e20313aa  mov x2, x19
0x03D7B65C: e40317aa  mov x4, x23
0x03D7B660: 00013fd6  blr x8
0x03D7B664: e00319aa  mov x0, x25
0x03D7B668: e10317aa  mov x1, x23
0x03D7B66C: e20316aa  mov x2, x22
0x03D7B670: c04cd194  bl #0x71ce970
0x03D7B674: e00318aa  mov x0, x24
0x03D7B678: e10319aa  mov x1, x25
0x03D7B67C: e20316aa  mov x2, x22
0x03D7B680: bc4cd194  bl #0x71ce970
0x03D7B684: 881e40f9  ldr x8, [x20, #0x38]
0x03D7B688: 001140f9  ldr x0, [x8, #0x20]
0x03D7B68C: e10318aa  mov x1, x24
0x03D7B690: 4115d097  bl #0x3180b94
0x03D7B694: e10300aa  mov x1, x0
0x03D7B698: e00315aa  mov x0, x21
0x03D7B69C: e2031faa  mov x2, xzr
0x03D7B6A0: 0ba9b294  bl #0x6a25acc
0x03D7B6A4: b9ffff17  b #0x3d7b588
0x03D7B6A8: f4031faa  mov x20, xzr
0x03D7B6AC: 330300b4  cbz x19, #0x3d7b710
0x03D7B6B0: 8ac601f0  adrp x10, #0x764e000
0x03D7B6B4: 680240f9  ldr x8, [x19]
0x03D7B6B8: 4a6544f9  ldr x10, [x10, #0x8c8]
0x03D7B6BC: 095d4279  ldrh w9, [x8, #0x12e]
0x03D7B6C0: 410140f9  ldr x1, [x10]
0x03D7B6C4: 290100b4  cbz x9, #0x3d7b6e8
0x03D7B6C8: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D7B6CC: 4a210091  add x10, x10, #8
0x03D7B6D0: 4b815ff8  ldur x11, [x10, #-8]
0x03D7B6D4: 7f0101eb  cmp x11, x1
0x03D7B6D8: 00010054  b.eq #0x3d7b6f8
0x03D7B6DC: 290500f1  subs x9, x9, #1
0x03D7B6E0: 4a410091  add x10, x10, #0x10
0x03D7B6E4: 61ffff54  b.ne #0x3d7b6d0
0x03D7B6E8: e00313aa  mov x0, x19
0x03D7B6EC: e2031f2a  mov w2, wzr
0x03D7B6F0: 086dcf97  bl #0x3156b10
0x03D7B6F4: 04000014  b #0x3d7b704
0x03D7B6F8: 490180b9  ldrsw x9, [x10]
0x03D7B6FC: 0811098b  add x8, x8, x9, lsl #4
0x03D7B700: 00e10491  add x0, x8, #0x138
0x03D7B704: 080440a9  ldp x8, x1, [x0]
0x03D7B708: e00313aa  mov x0, x19
0x03D7B70C: 00013fd6  blr x8
0x03D7B710: f40100b5  cbnz x20, #0x3d7b74c
0x03D7B714: 481740f9  ldr x8, [x26, #0x28]
0x03D7B718: a9835ff8  ldur x9, [x29, #-8]
0x03D7B71C: 1f0109eb  cmp x8, x9
0x03D7B720: a1010054  b.ne #0x3d7b754
0x03D7B724: bf030091  mov sp, x29
0x03D7B728: f44f45a9  ldp x20, x19, [sp, #0x50]
0x03D7B72C: f65744a9  ldp x22, x21, [sp, #0x40]
0x03D7B730: f85f43a9  ldp x24, x23, [sp, #0x30]
0x03D7B734: fa6742a9  ldp x26, x25, [sp, #0x20]
0x03D7B738: fb0b40f9  ldr x27, [sp, #0x10]
0x03D7B73C: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x03D7B740: c0035fd6  ret
0x03D7B744: 5a15d097  bl #0x3180cac
0x03D7B748: 5915d097  bl #0x3180cac
0x03D7B74C: e00314aa  mov x0, x20
0x03D7B750: 5515d097  bl #0x3180ca4
0x03D7B754: 8f4cd194  bl #0x71ce990
0x03D7B758: 03000014  b #0x3d7b764
0x03D7B75C: 02000014  b #0x3d7b764
0x03D7B760: 01000014  b #0x3d7b764
0x03D7B764: f50300aa  mov x21, x0
0x03D7B768: 3f040071  cmp w1, #1
0x03D7B76C: c1000054  b.ne #0x3d7b784
0x03D7B770: e00315aa  mov x0, x21
0x03D7B774: 674cd194  bl #0x71ce910
0x03D7B778: 140040f9  ldr x20, [x0]
0x03D7B77C: 694cd194  bl #0x71ce920
0x03D7B780: cbffff17  b #0x3d7b6ac
0x03D7B784: f4031faa  mov x20, xzr
0x03D7B788: 02000014  b #0x3d7b790
0x03D7B78C: f50300aa  mov x21, x0
0x03D7B790: 330300b4  cbz x19, #0x3d7b7f4
0x03D7B794: 8ac601f0  adrp x10, #0x764e000
0x03D7B798: 680240f9  ldr x8, [x19]
0x03D7B79C: 4a6544f9  ldr x10, [x10, #0x8c8]
0x03D7B7A0: 095d4279  ldrh w9, [x8, #0x12e]
0x03D7B7A4: 410140f9  ldr x1, [x10]
0x03D7B7A8: 290100b4  cbz x9, #0x3d7b7cc
0x03D7B7AC: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D7B7B0: 4a210091  add x10, x10, #8
0x03D7B7B4: 4b815ff8  ldur x11, [x10, #-8]
0x03D7B7B8: 7f0101eb  cmp x11, x1
0x03D7B7BC: 00010054  b.eq #0x3d7b7dc
0x03D7B7C0: 290500f1  subs x9, x9, #1
0x03D7B7C4: 4a410091  add x10, x10, #0x10
0x03D7B7C8: 61ffff54  b.ne #0x3d7b7b4
0x03D7B7CC: e00313aa  mov x0, x19
0x03D7B7D0: e2031f2a  mov w2, wzr
0x03D7B7D4: cf6ccf97  bl #0x3156b10
0x03D7B7D8: 04000014  b #0x3d7b7e8
0x03D7B7DC: 490180b9  ldrsw x9, [x10]
0x03D7B7E0: 0811098b  add x8, x8, x9, lsl #4
0x03D7B7E4: 00e10491  add x0, x8, #0x138
0x03D7B7E8: 080440a9  ldp x8, x1, [x0]
0x03D7B7EC: e00313aa  mov x0, x19
0x03D7B7F0: 00013fd6  blr x8
0x03D7B7F4: 740000b5  cbnz x20, #0x3d7b800
0x03D7B7F8: e00315aa  mov x0, x21
0x03D7B7FC: 57a8d397  bl #0x3265958
0x03D7B800: e00314aa  mov x0, x20
0x03D7B804: 2815d097  bl #0x3180ca4
0x03D7B808: 4337c297  bl #0x2e09514

