; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 2860 Merger.Rewards.ViewModels.RewardAnimationTargetViewModel
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6112AB0 | protected virtual RewardAnimationTarget get_RewardAnimationTarget() { }
; bytes=8 sha256=b8b3bd2e38816d82c156176d3f423b837ecea21aae12d748584af20b84f122d8 status=arm64_complete_bound indexed_start=True
0x06112AB0: 008040b9  ldr w0, [x0, #0x80]
0x06112AB4: c0035fd6  ret

; RVA 0x6112AB8 | public void ResetRewardTargets(RectTransform transform) { }
; bytes=68 sha256=30c0ee71a4d808a86a671c64b5007e19e376e5cd1a14dd95058a9e06e61f1595 status=arm64_complete_bound indexed_start=True
0x06112AB8: fe0f1ef8  str x30, [sp, #-0x20]!
0x06112ABC: f44f01a9  stp x20, x19, [sp, #0x10]
0x06112AC0: 080040f9  ldr x8, [x0]
0x06112AC4: f40301aa  mov x20, x1
0x06112AC8: f30300aa  mov x19, x0
0x06112ACC: 09bd42f9  ldr x9, [x8, #0x578]
0x06112AD0: 08c142f9  ldr x8, [x8, #0x580]
0x06112AD4: e10308aa  mov x1, x8
0x06112AD8: 20013fd6  blr x9
0x06112ADC: 680240f9  ldr x8, [x19]
0x06112AE0: e00313aa  mov x0, x19
0x06112AE4: e10314aa  mov x1, x20
0x06112AE8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06112AEC: 03c542f9  ldr x3, [x8, #0x588]
0x06112AF0: 02c942f9  ldr x2, [x8, #0x590]
0x06112AF4: fe0742f8  ldr x30, [sp], #0x20
0x06112AF8: 60001fd6  br x3

; RVA 0x6112AFC | public virtual void UnregisterRewardTargets() { }
; bytes=192 sha256=87fa0f54f007e6ba0f9576ec388174c85bb6f3a3ac0e020b67050ad6d0e6bb98 status=arm64_complete_bound indexed_start=True
0x06112AFC: fe0f1ef8  str x30, [sp, #-0x20]!
0x06112B00: f44f01a9  stp x20, x19, [sp, #0x10]
0x06112B04: 93e000d0  adrp x19, #0x7d24000
0x06112B08: 683a4f39  ldrb w8, [x19, #0x3ce]
0x06112B0C: f40300aa  mov x20, x0
0x06112B10: c8000037  tbnz w8, #0, #0x6112b28
0x06112B14: 60ab00d0  adrp x0, #0x7680000
0x06112B18: 002444f9  ldr x0, [x0, #0x848]
0x06112B1C: bfb74197  bl #0x3180a18
0x06112B20: 28008052  movz w8, #0x1
0x06112B24: 683a0f39  strb w8, [x19, #0x3ce]
0x06112B28: 880240f9  ldr x8, [x20]
0x06112B2C: 933e40f9  ldr x19, [x20, #0x78]
0x06112B30: e00314aa  mov x0, x20
0x06112B34: 09b542f9  ldr x9, [x8, #0x568]
0x06112B38: 01b942f9  ldr x1, [x8, #0x570]
0x06112B3C: 20013fd6  blr x9
0x06112B40: d30300b4  cbz x19, #0x6112bb8
0x06112B44: 6aab00d0  adrp x10, #0x7680000
0x06112B48: 680240f9  ldr x8, [x19]
0x06112B4C: 4a2544f9  ldr x10, [x10, #0x848]
0x06112B50: f403002a  mov w20, w0
0x06112B54: 095d4279  ldrh w9, [x8, #0x12e]
0x06112B58: 410140f9  ldr x1, [x10]
0x06112B5C: 290100b4  cbz x9, #0x6112b80
0x06112B60: 0a5940f9  ldr x10, [x8, #0xb0]
0x06112B64: 4a210091  add x10, x10, #8
0x06112B68: 4b815ff8  ldur x11, [x10, #-8]
0x06112B6C: 7f0101eb  cmp x11, x1
0x06112B70: 00010054  b.eq #0x6112b90
0x06112B74: 290500f1  subs x9, x9, #1
0x06112B78: 4a410091  add x10, x10, #0x10
0x06112B7C: 61ffff54  b.ne #0x6112b68
0x06112B80: 62008052  movz w2, #0x3
0x06112B84: e00313aa  mov x0, x19
0x06112B88: e20f4197  bl #0x3156b10
0x06112B8C: 05000014  b #0x6112ba0
0x06112B90: 490140b9  ldr w9, [x10]
0x06112B94: 290d0011  add w9, w9, #3
0x06112B98: 08d1298b  add x8, x8, w9, sxtw #4
0x06112B9C: 00e10491  add x0, x8, #0x138
0x06112BA0: 030840a9  ldp x3, x2, [x0]
0x06112BA4: e00313aa  mov x0, x19
0x06112BA8: e103142a  mov w1, w20
0x06112BAC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06112BB0: fe0742f8  ldr x30, [sp], #0x20
0x06112BB4: 60001fd6  br x3
0x06112BB8: 3db84197  bl #0x3180cac

; RVA 0x6112BBC | public virtual void RegisterRewardTargets(RectTransform targetRectTransform) { }
; bytes=4 sha256=110f46b5b35c069160560c6ad6786f647dd44e8760a52a46fc22dbbcd7630b91 status=arm64_complete_bound indexed_start=True
0x06112BBC: c0035fd6  ret

; RVA 0x6112BC0 | public void RegisterItemRewardTarget(IRewardType rewardType, RectTransform targetRectTransform, RewardDestinationType destinationType = 3) { }
; bytes=116 sha256=1baf9fcca252a82a871bed18f6d5c25963d2e4896310a0fe2e0c855f15c53350 status=arm64_complete_bound indexed_start=True
0x06112BC0: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x06112BC4: f65701a9  stp x22, x21, [sp, #0x10]
0x06112BC8: f44f02a9  stp x20, x19, [sp, #0x20]
0x06112BCC: 17e000b0  adrp x23, #0x7d13000
0x06112BD0: e8725b39  ldrb w8, [x23, #0x6dc]
0x06112BD4: f303032a  mov w19, w3
0x06112BD8: f40302aa  mov x20, x2
0x06112BDC: f50301aa  mov x21, x1
0x06112BE0: f60300aa  mov x22, x0
0x06112BE4: c8000035  cbnz w8, #0x6112bfc
0x06112BE8: e0a900d0  adrp x0, #0x7650000
0x06112BEC: 007440f9  ldr x0, [x0, #0xe8]
0x06112BF0: 8ab74197  bl #0x3180a18
0x06112BF4: 28008052  movz w8, #0x1
0x06112BF8: e8721b39  strb w8, [x23, #0x6dc]
0x06112BFC: e8a900d0  adrp x8, #0x7650000
0x06112C00: 087540f9  ldr x8, [x8, #0xe8]
0x06112C04: e00316aa  mov x0, x22
0x06112C08: e10315aa  mov x1, x21
0x06112C0C: e20314aa  mov x2, x20
0x06112C10: 080140f9  ldr x8, [x8]
0x06112C14: e403132a  mov w4, w19
0x06112C18: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06112C1C: f65741a9  ldp x22, x21, [sp, #0x10]
0x06112C20: 085d40f9  ldr x8, [x8, #0xb8]
0x06112C24: e3031f2a  mov w3, wzr
0x06112C28: 0005402d  ldp s0, s1, [x8]
0x06112C2C: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x06112C30: 01000014  b #0x6112c34

; RVA 0x6112E0C | public void RegisterItemRewardTarget(IRewardType rewardType, RectTransform targetRectTransform, Vector2 offset, RewardDestinationType destinationType = 3) { }
; bytes=12 sha256=45305b7f3b85bffb6ea3b7233770f6f8d7bd6077653a09409e8058e560dad40f status=arm64_complete_bound indexed_start=True
0x06112E0C: e403032a  mov w4, w3
0x06112E10: e3031f2a  mov w3, wzr
0x06112E14: 88ffff17  b #0x6112c34

; RVA 0x6112E18 | public void RegisterItemRewardTargetForAllDestinations(IRewardType rewardType, RectTransform targetRectTransform, Vector2 offset) { }
; bytes=120 sha256=2a060b8bcc7ffb332da40db0320c6bdd42c05a8465e1da2b39a50746e1a1df74 status=arm64_complete_bound indexed_start=True
0x06112E18: e923bd6d  stp d9, d8, [sp, #-0x30]!
0x06112E1C: fe5701a9  stp x30, x21, [sp, #0x10]
0x06112E20: f44f02a9  stp x20, x19, [sp, #0x20]
0x06112E24: 44008052  movz w4, #0x2
0x06112E28: e3031f2a  mov w3, wzr
0x06112E2C: 281ca14e  mov v8.16b, v1.16b
0x06112E30: 091ca04e  mov v9.16b, v0.16b
0x06112E34: f30302aa  mov x19, x2
0x06112E38: f40301aa  mov x20, x1
0x06112E3C: f50300aa  mov x21, x0
0x06112E40: 7dffff97  bl #0x6112c34
0x06112E44: 24008052  movz w4, #0x1
0x06112E48: e00315aa  mov x0, x21
0x06112E4C: e10314aa  mov x1, x20
0x06112E50: e20313aa  mov x2, x19
0x06112E54: 201da94e  mov v0.16b, v9.16b
0x06112E58: 011da84e  mov v1.16b, v8.16b
0x06112E5C: e3031f2a  mov w3, wzr
0x06112E60: 75ffff97  bl #0x6112c34
0x06112E64: e00315aa  mov x0, x21
0x06112E68: e10314aa  mov x1, x20
0x06112E6C: e20313aa  mov x2, x19
0x06112E70: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06112E74: fe5741a9  ldp x30, x21, [sp, #0x10]
0x06112E78: 64008052  movz w4, #0x3
0x06112E7C: 201da94e  mov v0.16b, v9.16b
0x06112E80: 011da84e  mov v1.16b, v8.16b
0x06112E84: e3031f2a  mov w3, wzr
0x06112E88: e923c36c  ldp d9, d8, [sp], #0x30
0x06112E8C: 6affff17  b #0x6112c34

; RVA 0x6112E90 | public void RegisterResourceRewardTarget(IRewardType rewardType, RectTransform targetRectTransform, Vector2 offset, ResourceSource resourceSource = 0) { }
; bytes=8 sha256=7dac8e0d0b024c8ee132c7909817ce992e76b50495ebfa25b295d44265628606 status=arm64_complete_bound indexed_start=True
0x06112E90: e4031f2a  mov w4, wzr
0x06112E94: 68ffff17  b #0x6112c34

; RVA 0x6112E98 | public void RegisterResourceRewardTarget(IRewardType rewardType, RectTransform targetRectTransform, ResourceSource resourceSource = 0) { }
; bytes=116 sha256=1cb782970dead13d7f58f8a33cbe202d06c1f546d7333d2377c2bf68bb3ea5b0 status=arm64_complete_bound indexed_start=True
0x06112E98: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x06112E9C: f65701a9  stp x22, x21, [sp, #0x10]
0x06112EA0: f44f02a9  stp x20, x19, [sp, #0x20]
0x06112EA4: 17e000b0  adrp x23, #0x7d13000
0x06112EA8: e8725b39  ldrb w8, [x23, #0x6dc]
0x06112EAC: f303032a  mov w19, w3
0x06112EB0: f40302aa  mov x20, x2
0x06112EB4: f50301aa  mov x21, x1
0x06112EB8: f60300aa  mov x22, x0
0x06112EBC: c8000035  cbnz w8, #0x6112ed4
0x06112EC0: e0a900d0  adrp x0, #0x7650000
0x06112EC4: 007440f9  ldr x0, [x0, #0xe8]
0x06112EC8: d4b64197  bl #0x3180a18
0x06112ECC: 28008052  movz w8, #0x1
0x06112ED0: e8721b39  strb w8, [x23, #0x6dc]
0x06112ED4: e8a900d0  adrp x8, #0x7650000
0x06112ED8: 087540f9  ldr x8, [x8, #0xe8]
0x06112EDC: e00316aa  mov x0, x22
0x06112EE0: e10315aa  mov x1, x21
0x06112EE4: e20314aa  mov x2, x20
0x06112EE8: 080140f9  ldr x8, [x8]
0x06112EEC: e303132a  mov w3, w19
0x06112EF0: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06112EF4: f65741a9  ldp x22, x21, [sp, #0x10]
0x06112EF8: 085d40f9  ldr x8, [x8, #0xb8]
0x06112EFC: e4031f2a  mov w4, wzr
0x06112F00: 0005402d  ldp s0, s1, [x8]
0x06112F04: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x06112F08: 4bffff17  b #0x6112c34

; RVA 0x6112C34 | protected void RegisterRewardTarget(IRewardType rewardType, RectTransform targetRectTransform, Vector2 offset, ResourceSource resourceSource, RewardDestinationType destinationType) { }
; bytes=472 sha256=1f45af5a430ecab6b0f48b7d38ee087114020327710b532a485b9b6e3779b92f status=arm64_complete_bound indexed_start=True
0x06112C34: e923bb6d  stp d9, d8, [sp, #-0x50]!
0x06112C38: fe6701a9  stp x30, x25, [sp, #0x10]
0x06112C3C: f85f02a9  stp x24, x23, [sp, #0x20]
0x06112C40: f65703a9  stp x22, x21, [sp, #0x30]
0x06112C44: f44f04a9  stp x20, x19, [sp, #0x40]
0x06112C48: 98e000d0  adrp x24, #0x7d24000
0x06112C4C: 083f4f39  ldrb w8, [x24, #0x3cf]
0x06112C50: f503042a  mov w21, w4
0x06112C54: f603032a  mov w22, w3
0x06112C58: 281ca14e  mov v8.16b, v1.16b
0x06112C5C: 091ca04e  mov v9.16b, v0.16b
0x06112C60: f40302aa  mov x20, x2
0x06112C64: f70301aa  mov x23, x1
0x06112C68: f30300aa  mov x19, x0
0x06112C6C: e8010037  tbnz w8, #0, #0x6112ca8
0x06112C70: 60ab00d0  adrp x0, #0x7680000
0x06112C74: 002444f9  ldr x0, [x0, #0x848]
0x06112C78: 68b74197  bl #0x3180a18
0x06112C7C: 20ab00f0  adrp x0, #0x7679000
0x06112C80: 000c44f9  ldr x0, [x0, #0x818]
0x06112C84: 65b74197  bl #0x3180a18
0x06112C88: 60ab00d0  adrp x0, #0x7680000
0x06112C8C: 002844f9  ldr x0, [x0, #0x850]
0x06112C90: 62b74197  bl #0x3180a18
0x06112C94: 60ab00d0  adrp x0, #0x7680000
0x06112C98: 002c44f9  ldr x0, [x0, #0x858]
0x06112C9C: 5fb74197  bl #0x3180a18
0x06112CA0: 28008052  movz w8, #0x1
0x06112CA4: 083f0f39  strb w8, [x24, #0x3cf]
0x06112CA8: 170b00b4  cbz x23, #0x6112e08
0x06112CAC: 2aab00f0  adrp x10, #0x7679000
0x06112CB0: e80240f9  ldr x8, [x23]
0x06112CB4: 4a0d44f9  ldr x10, [x10, #0x818]
0x06112CB8: 78ab00d0  adrp x24, #0x7680000
0x06112CBC: 79ab00d0  adrp x25, #0x7680000
0x06112CC0: 095d4279  ldrh w9, [x8, #0x12e]
0x06112CC4: 410140f9  ldr x1, [x10]
0x06112CC8: 182b44f9  ldr x24, [x24, #0x850]
0x06112CCC: 392f44f9  ldr x25, [x25, #0x858]
0x06112CD0: 290100b4  cbz x9, #0x6112cf4
0x06112CD4: 0a5940f9  ldr x10, [x8, #0xb0]
0x06112CD8: 4a210091  add x10, x10, #8
0x06112CDC: 4b815ff8  ldur x11, [x10, #-8]
0x06112CE0: 7f0101eb  cmp x11, x1
0x06112CE4: 00010054  b.eq #0x6112d04
0x06112CE8: 290500f1  subs x9, x9, #1
0x06112CEC: 4a410091  add x10, x10, #0x10
0x06112CF0: 61ffff54  b.ne #0x6112cdc
0x06112CF4: e00317aa  mov x0, x23
0x06112CF8: e2031f2a  mov w2, wzr
0x06112CFC: 850f4197  bl #0x3156b10
0x06112D00: 04000014  b #0x6112d10
0x06112D04: 490180b9  ldrsw x9, [x10]
0x06112D08: 0811098b  add x8, x8, x9, lsl #4
0x06112D0C: 00e10491  add x0, x8, #0x138
0x06112D10: 080440a9  ldp x8, x1, [x0]
0x06112D14: e00317aa  mov x0, x23
0x06112D18: 00013fd6  blr x8
0x06112D1C: 080340f9  ldr x8, [x24]
0x06112D20: f80300aa  mov x24, x0
0x06112D24: e00308aa  mov x0, x8
0x06112D28: deb74197  bl #0x3180ca0
0x06112D2C: e10318aa  mov x1, x24
0x06112D30: e203162a  mov w2, w22
0x06112D34: e303152a  mov w3, w21
0x06112D38: e4031faa  mov x4, xzr
0x06112D3C: f70300aa  mov x23, x0
0x06112D40: ddd70094  bl #0x6148cb4
0x06112D44: 680240f9  ldr x8, [x19]
0x06112D48: e00313aa  mov x0, x19
0x06112D4C: 09b542f9  ldr x9, [x8, #0x568]
0x06112D50: 01b942f9  ldr x1, [x8, #0x570]
0x06112D54: 20013fd6  blr x9
0x06112D58: 280340f9  ldr x8, [x25]
0x06112D5C: f603002a  mov w22, w0
0x06112D60: e00308aa  mov x0, x8
0x06112D64: cfb74197  bl #0x3180ca0
0x06112D68: e103162a  mov w1, w22
0x06112D6C: e20314aa  mov x2, x20
0x06112D70: 201da94e  mov v0.16b, v9.16b
0x06112D74: 011da84e  mov v1.16b, v8.16b
0x06112D78: e3031faa  mov x3, xzr
0x06112D7C: f50300aa  mov x21, x0
0x06112D80: ccd80094  bl #0x61490b0
0x06112D84: 733e40f9  ldr x19, [x19, #0x78]
0x06112D88: 130400b4  cbz x19, #0x6112e08
0x06112D8C: 6aab00d0  adrp x10, #0x7680000
0x06112D90: 680240f9  ldr x8, [x19]
0x06112D94: 4a2544f9  ldr x10, [x10, #0x848]
0x06112D98: 095d4279  ldrh w9, [x8, #0x12e]
0x06112D9C: 410140f9  ldr x1, [x10]
0x06112DA0: 290100b4  cbz x9, #0x6112dc4
0x06112DA4: 0a5940f9  ldr x10, [x8, #0xb0]
0x06112DA8: 4a210091  add x10, x10, #8
0x06112DAC: 4b815ff8  ldur x11, [x10, #-8]
0x06112DB0: 7f0101eb  cmp x11, x1
0x06112DB4: 00010054  b.eq #0x6112dd4
0x06112DB8: 290500f1  subs x9, x9, #1
0x06112DBC: 4a410091  add x10, x10, #0x10
0x06112DC0: 61ffff54  b.ne #0x6112dac
0x06112DC4: e00313aa  mov x0, x19
0x06112DC8: e2031f2a  mov w2, wzr
0x06112DCC: 510f4197  bl #0x3156b10
0x06112DD0: 04000014  b #0x6112de0
0x06112DD4: 490180b9  ldrsw x9, [x10]
0x06112DD8: 0811098b  add x8, x8, x9, lsl #4
0x06112DDC: 00e10491  add x0, x8, #0x138
0x06112DE0: 040c40a9  ldp x4, x3, [x0]
0x06112DE4: e00313aa  mov x0, x19
0x06112DE8: e10317aa  mov x1, x23
0x06112DEC: e20315aa  mov x2, x21
0x06112DF0: f44f44a9  ldp x20, x19, [sp, #0x40]
0x06112DF4: f65743a9  ldp x22, x21, [sp, #0x30]
0x06112DF8: f85f42a9  ldp x24, x23, [sp, #0x20]
0x06112DFC: fe6741a9  ldp x30, x25, [sp, #0x10]
0x06112E00: e923c56c  ldp d9, d8, [sp], #0x50
0x06112E04: 80001fd6  br x4
0x06112E08: a9b74197  bl #0x3180cac

; RVA 0x6112F0C | public bool IsRewardTarget(RewardAnimationTarget rewardAnimationTarget) { }
; bytes=44 sha256=c8afbb68fad455a36c7cc0c9f96abd67d866d1f40147bb3ef8fb8f5efc00be22 status=arm64_complete_bound indexed_start=True
0x06112F0C: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x06112F10: 080040f9  ldr x8, [x0]
0x06112F14: f303012a  mov w19, w1
0x06112F18: 09b542f9  ldr x9, [x8, #0x568]
0x06112F1C: 08b942f9  ldr x8, [x8, #0x570]
0x06112F20: e10308aa  mov x1, x8
0x06112F24: 20013fd6  blr x9
0x06112F28: 1f00136b  cmp w0, w19
0x06112F2C: e0179f1a  cset w0, eq
0x06112F30: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x06112F34: c0035fd6  ret

; RVA 0x6112F38 | public Vector2 GetResourceTargetPositionInRootCanvas(PlayerResourceEnum playerResourceEnum) { }
; bytes=172 sha256=e2d078433975d2b4256810d0dac2ef33ac09929fe544192bc295a2a6214887c3 status=arm64_complete_bound indexed_start=True
0x06112F38: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06112F3C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06112F40: 95e000d0  adrp x21, #0x7d24000
0x06112F44: a8424f39  ldrb w8, [x21, #0x3d0]
0x06112F48: f303012a  mov w19, w1
0x06112F4C: f40300aa  mov x20, x0
0x06112F50: c8000037  tbnz w8, #0, #0x6112f68
0x06112F54: 60ab00d0  adrp x0, #0x7680000
0x06112F58: 002444f9  ldr x0, [x0, #0x848]
0x06112F5C: afb64197  bl #0x3180a18
0x06112F60: 28008052  movz w8, #0x1
0x06112F64: a8420f39  strb w8, [x21, #0x3d0]
0x06112F68: 943e40f9  ldr x20, [x20, #0x78]
0x06112F6C: b40300b4  cbz x20, #0x6112fe0
0x06112F70: 6aab00d0  adrp x10, #0x7680000
0x06112F74: 880240f9  ldr x8, [x20]
0x06112F78: 4a2544f9  ldr x10, [x10, #0x848]
0x06112F7C: 095d4279  ldrh w9, [x8, #0x12e]
0x06112F80: 410140f9  ldr x1, [x10]
0x06112F84: 290100b4  cbz x9, #0x6112fa8
0x06112F88: 0a5940f9  ldr x10, [x8, #0xb0]
0x06112F8C: 4a210091  add x10, x10, #8
0x06112F90: 4b815ff8  ldur x11, [x10, #-8]
0x06112F94: 7f0101eb  cmp x11, x1
0x06112F98: 00010054  b.eq #0x6112fb8
0x06112F9C: 290500f1  subs x9, x9, #1
0x06112FA0: 4a410091  add x10, x10, #0x10
0x06112FA4: 61ffff54  b.ne #0x6112f90
0x06112FA8: 42008052  movz w2, #0x2
0x06112FAC: e00314aa  mov x0, x20
0x06112FB0: d80e4197  bl #0x3156b10
0x06112FB4: 05000014  b #0x6112fc8
0x06112FB8: 490140b9  ldr w9, [x10]
0x06112FBC: 29090011  add w9, w9, #2
0x06112FC0: 08d1298b  add x8, x8, w9, sxtw #4
0x06112FC4: 00e10491  add x0, x8, #0x138
0x06112FC8: 030840a9  ldp x3, x2, [x0]
0x06112FCC: e00314aa  mov x0, x20
0x06112FD0: e103132a  mov w1, w19
0x06112FD4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06112FD8: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06112FDC: 60001fd6  br x3
0x06112FE0: 33b74197  bl #0x3180cac

; RVA 0x6112FE4 | protected void UnregisterRewardTargets(IRewardType rewardType) { }
; bytes=200 sha256=f298e3544067fffe6d86596a639969fdaefedec69f152f19e8b1640ecfcff3e2 status=arm64_complete_bound indexed_start=True
0x06112FE4: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06112FE8: f44f01a9  stp x20, x19, [sp, #0x10]
0x06112FEC: 94e000d0  adrp x20, #0x7d24000
0x06112FF0: 88464f39  ldrb w8, [x20, #0x3d1]
0x06112FF4: f30301aa  mov x19, x1
0x06112FF8: f50300aa  mov x21, x0
0x06112FFC: c8000037  tbnz w8, #0, #0x6113014
0x06113000: 60ab00b0  adrp x0, #0x7680000
0x06113004: 002444f9  ldr x0, [x0, #0x848]
0x06113008: 84b64197  bl #0x3180a18
0x0611300C: 28008052  movz w8, #0x1
0x06113010: 88460f39  strb w8, [x20, #0x3d1]
0x06113014: a80240f9  ldr x8, [x21]
0x06113018: b43e40f9  ldr x20, [x21, #0x78]
0x0611301C: e00315aa  mov x0, x21
0x06113020: 09b542f9  ldr x9, [x8, #0x568]
0x06113024: 01b942f9  ldr x1, [x8, #0x570]
0x06113028: 20013fd6  blr x9
0x0611302C: f40300b4  cbz x20, #0x61130a8
0x06113030: 6aab00b0  adrp x10, #0x7680000
0x06113034: 880240f9  ldr x8, [x20]
0x06113038: 4a2544f9  ldr x10, [x10, #0x848]
0x0611303C: f503002a  mov w21, w0
0x06113040: 095d4279  ldrh w9, [x8, #0x12e]
0x06113044: 410140f9  ldr x1, [x10]
0x06113048: 290100b4  cbz x9, #0x611306c
0x0611304C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06113050: 4a210091  add x10, x10, #8
0x06113054: 4b815ff8  ldur x11, [x10, #-8]
0x06113058: 7f0101eb  cmp x11, x1
0x0611305C: 00010054  b.eq #0x611307c
0x06113060: 290500f1  subs x9, x9, #1
0x06113064: 4a410091  add x10, x10, #0x10
0x06113068: 61ffff54  b.ne #0x6113054
0x0611306C: 82008052  movz w2, #0x4
0x06113070: e00314aa  mov x0, x20
0x06113074: a70e4197  bl #0x3156b10
0x06113078: 05000014  b #0x611308c
0x0611307C: 490140b9  ldr w9, [x10]
0x06113080: 29110011  add w9, w9, #4
0x06113084: 08d1298b  add x8, x8, w9, sxtw #4
0x06113088: 00e10491  add x0, x8, #0x138
0x0611308C: 040c40a9  ldp x4, x3, [x0]
0x06113090: e00314aa  mov x0, x20
0x06113094: e20313aa  mov x2, x19
0x06113098: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0611309C: e103152a  mov w1, w21
0x061130A0: fe57c2a8  ldp x30, x21, [sp], #0x20
0x061130A4: 80001fd6  br x4
0x061130A8: 01b74197  bl #0x3180cac

; RVA 0x61130AC | protected void SetRegisterTarget(RewardAnimationTarget rewardAnimationTarget) { }
; bytes=8 sha256=f23afd2c5982a6d9375c74272eb15eea6617dbebe85e6940e37be685ba3670fb status=arm64_complete_bound indexed_start=True
0x061130AC: 018000b9  str w1, [x0, #0x80]
0x061130B0: c0035fd6  ret

; RVA 0x61130B4 | public void .ctor() { }
; bytes=8 sha256=26e752befeb6eab29e853973167cee76933fa56033fd197157d90e45fd2eedc5 status=arm64_complete_bound indexed_start=True
0x061130B4: e1031faa  mov x1, xzr
0x061130B8: abe81214  b #0x65cd364

