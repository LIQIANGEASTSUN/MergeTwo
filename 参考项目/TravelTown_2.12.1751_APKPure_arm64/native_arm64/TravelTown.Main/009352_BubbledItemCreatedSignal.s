; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 9352 Merger.Game.Signal.BubbledItemCreatedSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x676AD60 | public bool get_HasBurstPrice() { }
; bytes=8 sha256=d2625c08dab8a7ed6a0ec29ef5e0b21222fe8c8aa1243088ffebd3218ae29cdc status=arm64_complete_bound indexed_start=True
0x0676AD60: 00a04039  ldrb w0, [x0, #0x28]
0x0676AD64: c0035fd6  ret

; RVA 0x676AD68 | public int get_BurstPrice() { }
; bytes=8 sha256=0471b33ab0983b843889248d4e9bd2f02e4d575679dc5668cc0ef6ea9dd367b5 status=arm64_complete_bound indexed_start=True
0x0676AD68: 002c40b9  ldr w0, [x0, #0x2c]
0x0676AD6C: c0035fd6  ret

; RVA 0x676AD70 | public PlayerResourceEnum get_BurstResourceType() { }
; bytes=8 sha256=615cc4d4d19713a7b9ea6b3843c274d040126c740088a3e2d95ffe19ba04c269 status=arm64_complete_bound indexed_start=True
0x0676AD70: 003040b9  ldr w0, [x0, #0x30]
0x0676AD74: c0035fd6  ret

; RVA 0x676AD78 | public float get_BubbleSpawnProbability() { }
; bytes=8 sha256=f6d9d585acd791df880a13daa4a3d944c68509f91ec322e1b8491f0790232e8a status=arm64_complete_bound indexed_start=True
0x0676AD78: 003440bd  ldr s0, [x0, #0x34]
0x0676AD7C: c0035fd6  ret

; RVA 0x676AD80 | public int get_MinGameLevelToDropBubbles() { }
; bytes=8 sha256=70b6226cdde2aa2e19c7cef1812dc4f3cd14b63d0b93bca2e70ec7210fcf097f status=arm64_complete_bound indexed_start=True
0x0676AD80: 003840b9  ldr w0, [x0, #0x38]
0x0676AD84: c0035fd6  ret

; RVA 0x676AD88 | public double get_BubbleExpirationTimeInSeconds() { }
; bytes=8 sha256=c1aabd144840330961ea06b243107896540b7f97d5fbb11b554080f9459ff0bc status=arm64_complete_bound indexed_start=True
0x0676AD88: 002040fd  ldr d0, [x0, #0x40]
0x0676AD8C: c0035fd6  ret

; RVA 0x676AD90 | public int get_BubblesOnBoard() { }
; bytes=8 sha256=5a3dbf09a4e8bdcceec86da53e57e6eb7ac66ceb50eedbff297fa2d5d118a7be status=arm64_complete_bound indexed_start=True
0x0676AD90: 004840b9  ldr w0, [x0, #0x48]
0x0676AD94: c0035fd6  ret

; RVA 0x676AD98 | public bool get_HasOptionToBurstBubbleWithAd() { }
; bytes=8 sha256=b7d3a04ef7356d8e3ed9c04c39decc2ad17582e27299d6b4e0827c683ee8e168 status=arm64_complete_bound indexed_start=True
0x0676AD98: 00304139  ldrb w0, [x0, #0x4c]
0x0676AD9C: c0035fd6  ret

; RVA 0x676ADA0 | public int get_BlasterableTier() { }
; bytes=8 sha256=9431bc14d7719f9c67e7b5c65efd289808001eccec851d956c2e10042a676d12 status=arm64_complete_bound indexed_start=True
0x0676ADA0: 005040b9  ldr w0, [x0, #0x50]
0x0676ADA4: c0035fd6  ret

; RVA 0x676ADA8 | public void .ctor(IMergeItem mergeItem, int mergeItemLevel, int burstPrice, PlayerResourceEnum burstResourceType, float bubbleSpawnProbability, int minGameLevelToDropBubbles, double bubbleExpirationTimeInSeconds, int bubblesOnBoard, bool hasOptionToBurstBubbleWithAd, int blasterableTier) { }
; bytes=124 sha256=f339218eb944f782f17c46f6a56dba071e33b3695b3c30cf9248844d805855f0 status=arm64_complete_bound indexed_start=True
0x0676ADA8: e923bb6d  stp d9, d8, [sp, #-0x50]!
0x0676ADAC: fe6701a9  stp x30, x25, [sp, #0x10]
0x0676ADB0: f85f02a9  stp x24, x23, [sp, #0x20]
0x0676ADB4: f65703a9  stp x22, x21, [sp, #0x30]
0x0676ADB8: f44f04a9  stp x20, x19, [sp, #0x40]
0x0676ADBC: f85340b9  ldr w24, [sp, #0x50]
0x0676ADC0: f603032a  mov w22, w3
0x0676ADC4: e3031faa  mov x3, xzr
0x0676ADC8: f303062a  mov w19, w6
0x0676ADCC: 281ca14e  mov v8.16b, v1.16b
0x0676ADD0: f403052a  mov w20, w5
0x0676ADD4: 091ca04e  mov v9.16b, v0.16b
0x0676ADD8: f503042a  mov w21, w4
0x0676ADDC: f70300aa  mov x23, x0
0x0676ADE0: f9000012  and w25, w7, #1
0x0676ADE4: 6223e297  bl #0x5ff3b6c
0x0676ADE8: 28008052  movz w8, #0x1
0x0676ADEC: f6d60529  stp w22, w21, [x23, #0x2c]
0x0676ADF0: e93600bd  str s9, [x23, #0x34]
0x0676ADF4: f43a00b9  str w20, [x23, #0x38]
0x0676ADF8: e82200fd  str d8, [x23, #0x40]
0x0676ADFC: f34a00b9  str w19, [x23, #0x48]
0x0676AE00: f9320139  strb w25, [x23, #0x4c]
0x0676AE04: e8a20039  strb w8, [x23, #0x28]
0x0676AE08: f85200b9  str w24, [x23, #0x50]
0x0676AE0C: f44f44a9  ldp x20, x19, [sp, #0x40]
0x0676AE10: f65743a9  ldp x22, x21, [sp, #0x30]
0x0676AE14: f85f42a9  ldp x24, x23, [sp, #0x20]
0x0676AE18: fe6741a9  ldp x30, x25, [sp, #0x10]
0x0676AE1C: e923c56c  ldp d9, d8, [sp], #0x50
0x0676AE20: c0035fd6  ret

; RVA 0x676AE24 | public void .ctor(IMergeItem mergeItem, int mergeItemLevel, float bubbleSpawnProbability, int minGameLevelToDropBubbles, double bubbleExpirationTimeInSeconds, int bubblesOnBoard, bool hasOptionToBurstBubbleWithAd, int blasterableTier) { }
; bytes=100 sha256=6ccd4ad073d5692031228697299264c47ce7d4f9a3beaff7bb9400057227682a status=arm64_complete_bound indexed_start=True
0x0676AE24: e923bc6d  stp d9, d8, [sp, #-0x40]!
0x0676AE28: fe5f01a9  stp x30, x23, [sp, #0x10]
0x0676AE2C: f65702a9  stp x22, x21, [sp, #0x20]
0x0676AE30: f44f03a9  stp x20, x19, [sp, #0x30]
0x0676AE34: f503032a  mov w21, w3
0x0676AE38: e3031faa  mov x3, xzr
0x0676AE3C: f303062a  mov w19, w6
0x0676AE40: f403042a  mov w20, w4
0x0676AE44: 281ca14e  mov v8.16b, v1.16b
0x0676AE48: 091ca04e  mov v9.16b, v0.16b
0x0676AE4C: f60300aa  mov x22, x0
0x0676AE50: b7000012  and w23, w5, #1
0x0676AE54: 4623e297  bl #0x5ff3b6c
0x0676AE58: dfa20039  strb wzr, [x22, #0x28]
0x0676AE5C: c93600bd  str s9, [x22, #0x34]
0x0676AE60: d53a00b9  str w21, [x22, #0x38]
0x0676AE64: c82200fd  str d8, [x22, #0x40]
0x0676AE68: d44a00b9  str w20, [x22, #0x48]
0x0676AE6C: d7320139  strb w23, [x22, #0x4c]
0x0676AE70: d35200b9  str w19, [x22, #0x50]
0x0676AE74: f44f43a9  ldp x20, x19, [sp, #0x30]
0x0676AE78: f65742a9  ldp x22, x21, [sp, #0x20]
0x0676AE7C: fe5f41a9  ldp x30, x23, [sp, #0x10]
0x0676AE80: e923c46c  ldp d9, d8, [sp], #0x40
0x0676AE84: c0035fd6  ret

