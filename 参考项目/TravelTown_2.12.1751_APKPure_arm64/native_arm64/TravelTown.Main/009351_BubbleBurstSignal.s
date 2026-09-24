; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 9351 Merger.Game.Signal.BubbleBurstSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x676AC68 | public bool get_IsBubbleOnMainBoard() { }
; bytes=8 sha256=d2625c08dab8a7ed6a0ec29ef5e0b21222fe8c8aa1243088ffebd3218ae29cdc status=arm64_complete_bound indexed_start=True
0x0676AC68: 00a04039  ldrb w0, [x0, #0x28]
0x0676AC6C: c0035fd6  ret

; RVA 0x676AC70 | public bool get_WasBurstFree() { }
; bytes=8 sha256=1e20666c05e98db358ca32522f1309eec35a048d9afbfc473e2d7a0901670bb8 status=arm64_complete_bound indexed_start=True
0x0676AC70: 00a44039  ldrb w0, [x0, #0x29]
0x0676AC74: c0035fd6  ret

; RVA 0x676AC78 | public double get_SecondsUntilExpiry() { }
; bytes=8 sha256=2594837cad53e8a1b3ab23dbcca4f9ed83b9ba7f68aae4e5aa5b9dc6ba57176c status=arm64_complete_bound indexed_start=True
0x0676AC78: 001840fd  ldr d0, [x0, #0x30]
0x0676AC7C: c0035fd6  ret

; RVA 0x676AC80 | public float get_BubbleSpawnProbability() { }
; bytes=8 sha256=d5303a29d850bd7371f07f6312253e2314eb49e7c6b6b3ee1b658854b64860ac status=arm64_complete_bound indexed_start=True
0x0676AC80: 003840bd  ldr s0, [x0, #0x38]
0x0676AC84: c0035fd6  ret

; RVA 0x676AC88 | public string get_AdCampaignId() { }
; bytes=8 sha256=ac1915dbf8ae56825a9e0c79c21190a655d4b32b9c10f299546aad7c9ecadc66 status=arm64_complete_bound indexed_start=True
0x0676AC88: 002040f9  ldr x0, [x0, #0x40]
0x0676AC8C: c0035fd6  ret

; RVA 0x676AC90 | public ResourceMultiple get_BurstPrice() { }
; bytes=8 sha256=62c64bd585db7a91917843362bb75aa8dd20b002bce4874891b0b3ec8fd242b9 status=arm64_complete_bound indexed_start=True
0x0676AC90: 002440f9  ldr x0, [x0, #0x48]
0x0676AC94: c0035fd6  ret

; RVA 0x676AC98 | public bool get_BurstWithAd() { }
; bytes=8 sha256=eaa8f5bab95d1713110a3774aeaebf65c0af3605085769e01b2fdfa404ba8cfd status=arm64_complete_bound indexed_start=True
0x0676AC98: 00404139  ldrb w0, [x0, #0x50]
0x0676AC9C: c0035fd6  ret

; RVA 0x676ACA0 | public bool get_WasBubbleBlaster() { }
; bytes=8 sha256=ba8e74d89bf338ce7f44cd67c102589f5b60c0c01750e8f2f91877dbb0c0d801 status=arm64_complete_bound indexed_start=True
0x0676ACA0: 00444139  ldrb w0, [x0, #0x51]
0x0676ACA4: c0035fd6  ret

; RVA 0x676ACA8 | public int get_BubbleTier() { }
; bytes=8 sha256=1d508a88eaa79472130512ca701fa0b73bba28f7bab8307aae4939584f8e7bf8 status=arm64_complete_bound indexed_start=True
0x0676ACA8: 005440b9  ldr w0, [x0, #0x54]
0x0676ACAC: c0035fd6  ret

; RVA 0x676ACB0 | public int get_BlasterTier() { }
; bytes=8 sha256=d7f5f3095d77028926f25d8a842a6a2f7dac311346dbbc634a0b8fcc4543239b status=arm64_complete_bound indexed_start=True
0x0676ACB0: 005840b9  ldr w0, [x0, #0x58]
0x0676ACB4: c0035fd6  ret

; RVA 0x676ACB8 | public void .ctor(IMergeItem item, int level, bool isBubbleOnMainBoard, bool wasBurstFree, double secondsUntilExpiry, float bubbleSpawnProbability, string adCampaignId, ResourceMultiple burstPrice, bool burstWithAd, bool wasBubbleBlaster, int bubbleTier, int blasterTier) { }
; bytes=168 sha256=9b0be233bb033ee82f4e6b7a7bf6cfef2ce090074c4247929453758738193270 status=arm64_complete_bound indexed_start=True
0x0676ACB8: e923ba6d  stp d9, d8, [sp, #-0x60]!
0x0676ACBC: fe6f01a9  stp x30, x27, [sp, #0x10]
0x0676ACC0: fa6702a9  stp x26, x25, [sp, #0x20]
0x0676ACC4: f85f03a9  stp x24, x23, [sp, #0x30]
0x0676ACC8: f65704a9  stp x22, x21, [sp, #0x40]
0x0676ACCC: f44f05a9  stp x20, x19, [sp, #0x50]
0x0676ACD0: e8834139  ldrb w8, [sp, #0x60]
0x0676ACD4: f67340b9  ldr w22, [sp, #0x70]
0x0676ACD8: f76b40b9  ldr w23, [sp, #0x68]
0x0676ACDC: 78000012  and w24, w3, #1
0x0676ACE0: e3031faa  mov x3, xzr
0x0676ACE4: f30306aa  mov x19, x6
0x0676ACE8: f40305aa  mov x20, x5
0x0676ACEC: 281ca14e  mov v8.16b, v1.16b
0x0676ACF0: 091ca04e  mov v9.16b, v0.16b
0x0676ACF4: f50300aa  mov x21, x0
0x0676ACF8: 99000012  and w25, w4, #1
0x0676ACFC: fa000012  and w26, w7, #1
0x0676AD00: 1b010012  and w27, w8, #1
0x0676AD04: 9a23e297  bl #0x5ff3b6c
0x0676AD08: e00315aa  mov x0, x21
0x0676AD0C: b8a20039  strb w24, [x21, #0x28]
0x0676AD10: b9a60039  strb w25, [x21, #0x29]
0x0676AD14: a91a00fd  str d9, [x21, #0x30]
0x0676AD18: a83a00bd  str s8, [x21, #0x38]
0x0676AD1C: 140c04f8  str x20, [x0, #0x40]!
0x0676AD20: e10314aa  mov x1, x20
0x0676AD24: 28572897  bl #0x31809c4
0x0676AD28: b38e04f8  str x19, [x21, #0x48]!
0x0676AD2C: e00315aa  mov x0, x21
0x0676AD30: e10313aa  mov x1, x19
0x0676AD34: 24572897  bl #0x31809c4
0x0676AD38: ba220039  strb w26, [x21, #8]
0x0676AD3C: bb260039  strb w27, [x21, #9]
0x0676AD40: b7da0129  stp w23, w22, [x21, #0xc]
0x0676AD44: f44f45a9  ldp x20, x19, [sp, #0x50]
0x0676AD48: f65744a9  ldp x22, x21, [sp, #0x40]
0x0676AD4C: f85f43a9  ldp x24, x23, [sp, #0x30]
0x0676AD50: fa6742a9  ldp x26, x25, [sp, #0x20]
0x0676AD54: fe6f41a9  ldp x30, x27, [sp, #0x10]
0x0676AD58: e923c66c  ldp d9, d8, [sp], #0x60
0x0676AD5C: c0035fd6  ret

