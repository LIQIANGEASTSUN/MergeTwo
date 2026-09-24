; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1580 GameCore.Configuration.Definitions.BaseReward
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x601EED8 | public bool get_IsFeatured() { }
; bytes=8 sha256=e4c1a301829bf7e242097004cb25fc213af6f8bee45f49527b010f07bce68f54 status=arm64_complete_bound indexed_start=True
0x0601EED8: 00604039  ldrb w0, [x0, #0x18]
0x0601EEDC: c0035fd6  ret

; RVA 0x601EEE0 | public void set_IsFeatured(bool value) { }
; bytes=12 sha256=44e17fb1eb8f8ff9cdde629de5faf61cf17316e0f5f154eccbf27e368f8511ec status=arm64_complete_bound indexed_start=True
0x0601EEE0: 28000012  and w8, w1, #1
0x0601EEE4: 08600039  strb w8, [x0, #0x18]
0x0601EEE8: c0035fd6  ret

; RVA 0x601EEEC | public RewardAmount get_RewardAmount() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x0601EEEC: 001040f9  ldr x0, [x0, #0x20]
0x0601EEF0: c0035fd6  ret

; RVA 0x601EEF4 | protected void set_RewardAmount(RewardAmount value) { }
; bytes=8 sha256=8bacd2077abafd6639ca31d81c2613af68bd251ea8d55ec4adadf248b22a7016 status=arm64_complete_bound indexed_start=True
0x0601EEF4: 010c02f8  str x1, [x0, #0x20]!
0x0601EEF8: b3864517  b #0x31809c4

; RVA 0x601EEFC | public int get_Amount() { }
; bytes=136 sha256=1968bc062c0b2088d007d74dc6d6bfa6b53cbaa7e8b0d23028738b1aec9f7fae status=arm64_complete_bound indexed_start=True
0x0601EEFC: fe0f1ef8  str x30, [sp, #-0x20]!
0x0601EF00: f44f01a9  stp x20, x19, [sp, #0x10]
0x0601EF04: 34e800b0  adrp x20, #0x7d23000
0x0601EF08: 886e6139  ldrb w8, [x20, #0x85b]
0x0601EF0C: f30300aa  mov x19, x0
0x0601EF10: c8000037  tbnz w8, #0, #0x601ef28
0x0601EF14: a0b200b0  adrp x0, #0x7673000
0x0601EF18: 00c440f9  ldr x0, [x0, #0x188]
0x0601EF1C: bf864597  bl #0x3180a18
0x0601EF20: 28008052  movz w8, #0x1
0x0601EF24: 886e2139  strb w8, [x20, #0x85b]
0x0601EF28: 600e42f8  ldr x0, [x19, #0x20]!
0x0601EF2C: 400200b5  cbnz x0, #0x601ef74
0x0601EF30: a8b200b0  adrp x8, #0x7673000
0x0601EF34: 08c540f9  ldr x8, [x8, #0x188]
0x0601EF38: 000140f9  ldr x0, [x8]
0x0601EF3C: 59874597  bl #0x3180ca0
0x0601EF40: e1031faa  mov x1, xzr
0x0601EF44: f40300aa  mov x20, x0
0x0601EF48: adedda97  bl #0x56da5fc
0x0601EF4C: 08b5fdb0  adrp x8, #0x16bf000
0x0601EF50: 000dc33d  ldr q0, [x8, #0xc30]
0x0601EF54: e00313aa  mov x0, x19
0x0601EF58: e10314aa  mov x1, x20
0x0601EF5C: 9f2200b9  str wzr, [x20, #0x20]
0x0601EF60: 8006803d  str q0, [x20, #0x10]
0x0601EF64: 740200f9  str x20, [x19]
0x0601EF68: 97864597  bl #0x31809c4
0x0601EF6C: 600240f9  ldr x0, [x19]
0x0601EF70: 800000b4  cbz x0, #0x601ef80
0x0601EF74: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0601EF78: fe0742f8  ldr x30, [sp], #0x20
0x0601EF7C: 16000014  b #0x601efd4
0x0601EF80: 4b874597  bl #0x3180cac

; RVA 0x601F034 | public void set_Amount(int value) { }
; bytes=216 sha256=8c298c2eb24f3587e7fe7a08800e3b61ce1cb465fd55bd9c8d2d92ad362df46b status=arm64_complete_bound indexed_start=True
0x0601F034: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0601F038: f44f01a9  stp x20, x19, [sp, #0x10]
0x0601F03C: 35e80090  adrp x21, #0x7d23000
0x0601F040: a8726139  ldrb w8, [x21, #0x85c]
0x0601F044: f303012a  mov w19, w1
0x0601F048: f40300aa  mov x20, x0
0x0601F04C: c8000037  tbnz w8, #0, #0x601f064
0x0601F050: a0b20090  adrp x0, #0x7673000
0x0601F054: 00c440f9  ldr x0, [x0, #0x188]
0x0601F058: 70864597  bl #0x3180a18
0x0601F05C: 28008052  movz w8, #0x1
0x0601F060: a8722139  strb w8, [x21, #0x85c]
0x0601F064: 800e42f8  ldr x0, [x20, #0x20]!
0x0601F068: e00000b4  cbz x0, #0x601f084
0x0601F06C: 081040b9  ldr w8, [x0, #0x10]
0x0601F070: a8020035  cbnz w8, #0x601f0c4
0x0601F074: e103132a  mov w1, w19
0x0601F078: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0601F07C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0601F080: 23000014  b #0x601f10c
0x0601F084: a8b20090  adrp x8, #0x7673000
0x0601F088: 08c540f9  ldr x8, [x8, #0x188]
0x0601F08C: 000140f9  ldr x0, [x8]
0x0601F090: 04874597  bl #0x3180ca0
0x0601F094: e1031faa  mov x1, xzr
0x0601F098: f50300aa  mov x21, x0
0x0601F09C: 58edda97  bl #0x56da5fc
0x0601F0A0: bf4e0229  stp wzr, w19, [x21, #0x10]
0x0601F0A4: bf0e00f9  str xzr, [x21, #0x18]
0x0601F0A8: bf2200b9  str wzr, [x21, #0x20]
0x0601F0AC: 950200f9  str x21, [x20]
0x0601F0B0: e00314aa  mov x0, x20
0x0601F0B4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0601F0B8: e10315aa  mov x1, x21
0x0601F0BC: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0601F0C0: 41864517  b #0x31809c4
0x0601F0C4: 60b100f0  adrp x0, #0x764e000
0x0601F0C8: 006c42f9  ldr x0, [x0, #0x4d8]
0x0601F0CC: 58864597  bl #0x3180a2c
0x0601F0D0: f4864597  bl #0x3180ca0
0x0601F0D4: f30300aa  mov x19, x0
0x0601F0D8: 80b500b0  adrp x0, #0x76d0000
0x0601F0DC: 009840f9  ldr x0, [x0, #0x130]
0x0601F0E0: 53864597  bl #0x3180a2c
0x0601F0E4: e10300aa  mov x1, x0
0x0601F0E8: e00313aa  mov x0, x19
0x0601F0EC: e2031faa  mov x2, xzr
0x0601F0F0: 22bfda97  bl #0x56ced78
0x0601F0F4: 80b500b0  adrp x0, #0x76d0000
0x0601F0F8: 009c40f9  ldr x0, [x0, #0x138]
0x0601F0FC: 4c864597  bl #0x3180a2c
0x0601F100: e10300aa  mov x1, x0
0x0601F104: e00313aa  mov x0, x19
0x0601F108: 9d864597  bl #0x3180b7c

; RVA 0x601F16C | public virtual string get_ConfigurationId() { }
; bytes=8 sha256=c0b9896d6c3d8aacf384c0d0cf5d897e84f621efe31cc89c980be348eb9c6614 status=arm64_complete_bound indexed_start=True
0x0601F16C: 001440f9  ldr x0, [x0, #0x28]
0x0601F170: c0035fd6  ret

; RVA 0x601F174 | public virtual string get_Name() { }
; bytes=72 sha256=237e8cc153f29f47266c090878179485aa1c31ecbdf92184701366afb83f59a5 status=arm64_complete_bound indexed_start=True
0x0601F174: fe0f1ef8  str x30, [sp, #-0x20]!
0x0601F178: f44f01a9  stp x20, x19, [sp, #0x10]
0x0601F17C: 33e80090  adrp x19, #0x7d23000
0x0601F180: 74b100f0  adrp x20, #0x764e000
0x0601F184: 68766139  ldrb w8, [x19, #0x85d]
0x0601F188: 94ee42f9  ldr x20, [x20, #0x5d8]
0x0601F18C: c8000037  tbnz w8, #0, #0x601f1a4
0x0601F190: 60b100f0  adrp x0, #0x764e000
0x0601F194: 00ec42f9  ldr x0, [x0, #0x5d8]
0x0601F198: 20864597  bl #0x3180a18
0x0601F19C: 28008052  movz w8, #0x1
0x0601F1A0: 68762139  strb w8, [x19, #0x85d]
0x0601F1A4: 880240f9  ldr x8, [x20]
0x0601F1A8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0601F1AC: 085d40f9  ldr x8, [x8, #0xb8]
0x0601F1B0: 000140f9  ldr x0, [x8]
0x0601F1B4: fe0742f8  ldr x30, [sp], #0x20
0x0601F1B8: c0035fd6  ret

; RVA 0x601F1BC | public bool get_AutoOpenTooltip() { }
; bytes=8 sha256=b5f756a94e2a4fd04c581b81886364460d3cd7c165e6a51d5f3195a9439a10c4 status=arm64_complete_bound indexed_start=True
0x0601F1BC: 00c04039  ldrb w0, [x0, #0x30]
0x0601F1C0: c0035fd6  ret

; RVA 0x601F1C4 | public void set_AutoOpenTooltip(bool value) { }
; bytes=12 sha256=a249c3c061ec9da6b813e9f7669c4eee4712ae82443eca5c2d67c54d32999205 status=arm64_complete_bound indexed_start=True
0x0601F1C4: 28000012  and w8, w1, #1
0x0601F1C8: 08c00039  strb w8, [x0, #0x30]
0x0601F1CC: c0035fd6  ret

; RVA 0x601F1D0 | public bool get_AutoOpenTooltipEnabled() { }
; bytes=8 sha256=6a3cb8c4f92b5961effe3a4ee16cd73e98d1d0f94c954c6b45545a35177d46d8 status=arm64_complete_bound indexed_start=True
0x0601F1D0: 00c44039  ldrb w0, [x0, #0x31]
0x0601F1D4: c0035fd6  ret

; RVA 0x601F1D8 | public void set_AutoOpenTooltipEnabled(bool value) { }
; bytes=12 sha256=2399f9d12d43e9d2bcf21d8ce2492dc5f3414cbe7d9899b246726f7cfec62d53 status=arm64_complete_bound indexed_start=True
0x0601F1D8: 28000012  and w8, w1, #1
0x0601F1DC: 08c40039  strb w8, [x0, #0x31]
0x0601F1E0: c0035fd6  ret

; RVA 0x601F1E4 | public bool get_HideAmountText() { }
; bytes=8 sha256=c1419eee0ff52e9dba03c5538f1a31a089d36861efdb5b2bfebc9abde36cbe25 status=arm64_complete_bound indexed_start=True
0x0601F1E4: 00c84039  ldrb w0, [x0, #0x32]
0x0601F1E8: c0035fd6  ret

; RVA 0x601F1EC | public void set_HideAmountText(bool value) { }
; bytes=12 sha256=2cee55a0d1b2bf0ea9920ef638d210fb180d96d3bde1dfcdf21736fe93804423 status=arm64_complete_bound indexed_start=True
0x0601F1EC: 28000012  and w8, w1, #1
0x0601F1F0: 08c80039  strb w8, [x0, #0x32]
0x0601F1F4: c0035fd6  ret

; RVA 0x601F1F8 | public bool get_ShouldBeHidden() { }
; bytes=8 sha256=ee9b426fde5021c6109a49a5631f999c41c69a207238febc6e91fad8eb29798a status=arm64_complete_bound indexed_start=True
0x0601F1F8: 00cc4039  ldrb w0, [x0, #0x33]
0x0601F1FC: c0035fd6  ret

; RVA 0x601F200 | public void set_ShouldBeHidden(bool value) { }
; bytes=12 sha256=6f08c2e1a18de44e324c67694cb7158aa6f2934d54330e990ae1c00642ed4bbd status=arm64_complete_bound indexed_start=True
0x0601F200: 28000012  and w8, w1, #1
0x0601F204: 08cc0039  strb w8, [x0, #0x33]
0x0601F208: c0035fd6  ret

; RVA 0x601F20C | public RewardDestination get_Destination() { }
; bytes=8 sha256=095bb56e13b6dfde16ade0b592279392884c282a7c7810cb58472b839de552de status=arm64_complete_bound indexed_start=True
0x0601F20C: 001c40f9  ldr x0, [x0, #0x38]
0x0601F210: c0035fd6  ret

; RVA 0x601F214 | public RewardSource get_RewardSource() { }
; bytes=8 sha256=ac1915dbf8ae56825a9e0c79c21190a655d4b32b9c10f299546aad7c9ecadc66 status=arm64_complete_bound indexed_start=True
0x0601F214: 002040f9  ldr x0, [x0, #0x40]
0x0601F218: c0035fd6  ret

; RVA 0x601F21C | public void set_RewardSource(RewardSource value) { }
; bytes=8 sha256=ca322c8b62b04ea79d3ef04467fe5cee9dfdd1a36db619d896c91c1714a44cf3 status=arm64_complete_bound indexed_start=True
0x0601F21C: 010c04f8  str x1, [x0, #0x40]!
0x0601F220: e9854517  b #0x31809c4

; RVA 0x601F224 | public IRewardType get_RewardType() { }
; bytes=8 sha256=62c64bd585db7a91917843362bb75aa8dd20b002bce4874891b0b3ec8fd242b9 status=arm64_complete_bound indexed_start=True
0x0601F224: 002440f9  ldr x0, [x0, #0x48]
0x0601F228: c0035fd6  ret

; RVA 0x601F22C | public string get_Type() { }
; bytes=160 sha256=46ca524270c9fc13a38a15d94f6b8fd5eeb5ee88a6d33a6a790a934fe0991038 status=arm64_complete_bound indexed_start=True
0x0601F22C: fe0f1ef8  str x30, [sp, #-0x20]!
0x0601F230: f44f01a9  stp x20, x19, [sp, #0x10]
0x0601F234: 34e80090  adrp x20, #0x7d23000
0x0601F238: 887a6139  ldrb w8, [x20, #0x85e]
0x0601F23C: f30300aa  mov x19, x0
0x0601F240: c8000037  tbnz w8, #0, #0x601f258
0x0601F244: c0b200d0  adrp x0, #0x7679000
0x0601F248: 000c44f9  ldr x0, [x0, #0x818]
0x0601F24C: f3854597  bl #0x3180a18
0x0601F250: 28008052  movz w8, #0x1
0x0601F254: 887a2139  strb w8, [x20, #0x85e]
0x0601F258: 732640f9  ldr x19, [x19, #0x48]
0x0601F25C: 730300b4  cbz x19, #0x601f2c8
0x0601F260: cab200d0  adrp x10, #0x7679000
0x0601F264: 680240f9  ldr x8, [x19]
0x0601F268: 4a0d44f9  ldr x10, [x10, #0x818]
0x0601F26C: 095d4279  ldrh w9, [x8, #0x12e]
0x0601F270: 410140f9  ldr x1, [x10]
0x0601F274: 290100b4  cbz x9, #0x601f298
0x0601F278: 0a5940f9  ldr x10, [x8, #0xb0]
0x0601F27C: 4a210091  add x10, x10, #8
0x0601F280: 4b815ff8  ldur x11, [x10, #-8]
0x0601F284: 7f0101eb  cmp x11, x1
0x0601F288: 00010054  b.eq #0x601f2a8
0x0601F28C: 290500f1  subs x9, x9, #1
0x0601F290: 4a410091  add x10, x10, #0x10
0x0601F294: 61ffff54  b.ne #0x601f280
0x0601F298: e00313aa  mov x0, x19
0x0601F29C: e2031f2a  mov w2, wzr
0x0601F2A0: 1cde4497  bl #0x3156b10
0x0601F2A4: 04000014  b #0x601f2b4
0x0601F2A8: 490180b9  ldrsw x9, [x10]
0x0601F2AC: 0811098b  add x8, x8, x9, lsl #4
0x0601F2B0: 00e10491  add x0, x8, #0x138
0x0601F2B4: 020440a9  ldp x2, x1, [x0]
0x0601F2B8: e00313aa  mov x0, x19
0x0601F2BC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0601F2C0: fe0742f8  ldr x30, [sp], #0x20
0x0601F2C4: 40001fd6  br x2
0x0601F2C8: 79864597  bl #0x3180cac

; RVA 0x601F2CC | public virtual AssetReferenceT<Sprite> get_SpriteReference() { }
; bytes=8 sha256=989bb1a041c93e09fa2954014eaba1a46b19128664c6bbb210694e0989f09532 status=arm64_complete_bound indexed_start=True
0x0601F2CC: 002840f9  ldr x0, [x0, #0x50]
0x0601F2D0: c0035fd6  ret

; RVA 0x601F2D4 | protected void .ctor(IRewardType rewardType, RewardAmount rewardAmount, RewardDestination destination) { }
; bytes=96 sha256=3829b6ea86636aac1c7890a20c86faf632b9e3023acdf6a586368e6f45068c78 status=arm64_complete_bound indexed_start=True
0x0601F2D4: fe0f1df8  str x30, [sp, #-0x30]!
0x0601F2D8: f65701a9  stp x22, x21, [sp, #0x10]
0x0601F2DC: f44f02a9  stp x20, x19, [sp, #0x20]
0x0601F2E0: f50301aa  mov x21, x1
0x0601F2E4: e1031faa  mov x1, xzr
0x0601F2E8: f30303aa  mov x19, x3
0x0601F2EC: f40302aa  mov x20, x2
0x0601F2F0: f60300aa  mov x22, x0
0x0601F2F4: c2ecda97  bl #0x56da5fc
0x0601F2F8: e00316aa  mov x0, x22
0x0601F2FC: 158c04f8  str x21, [x0, #0x48]!
0x0601F300: e10315aa  mov x1, x21
0x0601F304: b0854597  bl #0x31809c4
0x0601F308: e00316aa  mov x0, x22
0x0601F30C: 140c02f8  str x20, [x0, #0x20]!
0x0601F310: e10314aa  mov x1, x20
0x0601F314: ac854597  bl #0x31809c4
0x0601F318: d38e03f8  str x19, [x22, #0x38]!
0x0601F31C: e00316aa  mov x0, x22
0x0601F320: e10313aa  mov x1, x19
0x0601F324: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0601F328: f65741a9  ldp x22, x21, [sp, #0x10]
0x0601F32C: fe0743f8  ldr x30, [sp], #0x30
0x0601F330: a5854517  b #0x31809c4

; RVA 0x601F334 | public virtual string GetTopText(RewardDisplayTextData rewardDisplayTextData, RewardDisplayFlag viewFlags) { }
; bytes=8 sha256=9228f13f7347c97cdf0827e2ae12d55abae1fbaf5ce64ff0b64f39b29d10a992 status=arm64_complete_bound indexed_start=True
0x0601F334: e3031faa  mov x3, xzr
0x0601F338: 4ee00314  b #0x6117470

; RVA 0x601F33C | public virtual string GetBottomText(RewardDisplayTextData rewardDisplayTextData) { }
; bytes=8 sha256=3e06d63007bd00caa655bd0936d7b71522cfbef52c8212f8e2e5f574ac5eff9c status=arm64_complete_bound indexed_start=True
0x0601F33C: e2031faa  mov x2, xzr
0x0601F340: d0e10314  b #0x6117a80

; RVA 0x601F344 | public string GetLogDebug() { }
; bytes=464 sha256=3260af551659994fdc1574359433adb8838d819ade7e95e3eb5fecf87ebb6b38 status=arm64_complete_bound indexed_start=True
0x0601F344: fe0f1df8  str x30, [sp, #-0x30]!
0x0601F348: f65701a9  stp x22, x21, [sp, #0x10]
0x0601F34C: f44f02a9  stp x20, x19, [sp, #0x20]
0x0601F350: 33e80090  adrp x19, #0x7d23000
0x0601F354: 75b100f0  adrp x21, #0x764e000
0x0601F358: 687e6139  ldrb w8, [x19, #0x85f]
0x0601F35C: b5d242f9  ldr x21, [x21, #0x5a0]
0x0601F360: f40300aa  mov x20, x0
0x0601F364: 88010037  tbnz w8, #0, #0x601f394
0x0601F368: 60b100f0  adrp x0, #0x764e000
0x0601F36C: 005843f9  ldr x0, [x0, #0x6b0]
0x0601F370: aa854597  bl #0x3180a18
0x0601F374: 60b100f0  adrp x0, #0x764e000
0x0601F378: 00d042f9  ldr x0, [x0, #0x5a0]
0x0601F37C: a7854597  bl #0x3180a18
0x0601F380: 80b500b0  adrp x0, #0x76d0000
0x0601F384: 00a440f9  ldr x0, [x0, #0x148]
0x0601F388: a4854597  bl #0x3180a18
0x0601F38C: 28008052  movz w8, #0x1
0x0601F390: 687e2139  strb w8, [x19, #0x85f]
0x0601F394: a00240f9  ldr x0, [x21]
0x0601F398: 81008052  movz w1, #0x4
0x0601F39C: d8854597  bl #0x3180afc
0x0601F3A0: f30300aa  mov x19, x0
0x0601F3A4: e00314aa  mov x0, x20
0x0601F3A8: a1ffff97  bl #0x601f22c
0x0601F3AC: 330b00b4  cbz x19, #0x601f510
0x0601F3B0: f50300aa  mov x21, x0
0x0601F3B4: c00000b4  cbz x0, #0x601f3cc
0x0601F3B8: 680240f9  ldr x8, [x19]
0x0601F3BC: e00315aa  mov x0, x21
0x0601F3C0: 012140f9  ldr x1, [x8, #0x40]
0x0601F3C4: f3854597  bl #0x3180b90
0x0601F3C8: e00900b4  cbz x0, #0x601f504
0x0601F3CC: 681a40b9  ldr w8, [x19, #0x18]
0x0601F3D0: 88090034  cbz w8, #0x601f500
0x0601F3D4: e00313aa  mov x0, x19
0x0601F3D8: 150c02f8  str x21, [x0, #0x20]!
0x0601F3DC: e10315aa  mov x1, x21
0x0601F3E0: 79854597  bl #0x31809c4
0x0601F3E4: 880240f9  ldr x8, [x20]
0x0601F3E8: e00314aa  mov x0, x20
0x0601F3EC: 098541f9  ldr x9, [x8, #0x308]
0x0601F3F0: 018941f9  ldr x1, [x8, #0x310]
0x0601F3F4: 20013fd6  blr x9
0x0601F3F8: f50300aa  mov x21, x0
0x0601F3FC: c00000b4  cbz x0, #0x601f414
0x0601F400: 680240f9  ldr x8, [x19]
0x0601F404: e00315aa  mov x0, x21
0x0601F408: 012140f9  ldr x1, [x8, #0x40]
0x0601F40C: e1854597  bl #0x3180b90
0x0601F410: a00700b4  cbz x0, #0x601f504
0x0601F414: 681a40b9  ldr w8, [x19, #0x18]
0x0601F418: 1f050071  cmp w8, #1
0x0601F41C: 29070054  b.ls #0x601f500
0x0601F420: 76b100f0  adrp x22, #0x764e000
0x0601F424: d65a43f9  ldr x22, [x22, #0x6b0]
0x0601F428: e00313aa  mov x0, x19
0x0601F42C: 158c02f8  str x21, [x0, #0x28]!
0x0601F430: e10315aa  mov x1, x21
0x0601F434: 64854597  bl #0x31809c4
0x0601F438: e00314aa  mov x0, x20
0x0601F43C: b0feff97  bl #0x601eefc
0x0601F440: c80240f9  ldr x8, [x22]
0x0601F444: e00f00b9  str w0, [sp, #0xc]
0x0601F448: e1330091  add x1, sp, #0xc
0x0601F44C: e00308aa  mov x0, x8
0x0601F450: d1854597  bl #0x3180b94
0x0601F454: f50300aa  mov x21, x0
0x0601F458: c00000b4  cbz x0, #0x601f470
0x0601F45C: 680240f9  ldr x8, [x19]
0x0601F460: e00315aa  mov x0, x21
0x0601F464: 012140f9  ldr x1, [x8, #0x40]
0x0601F468: ca854597  bl #0x3180b90
0x0601F46C: c00400b4  cbz x0, #0x601f504
0x0601F470: 681a40b9  ldr w8, [x19, #0x18]
0x0601F474: 1f090071  cmp w8, #2
0x0601F478: 49040054  b.ls #0x601f500
0x0601F47C: e00313aa  mov x0, x19
0x0601F480: 150c03f8  str x21, [x0, #0x30]!
0x0601F484: e10315aa  mov x1, x21
0x0601F488: 4f854597  bl #0x31809c4
0x0601F48C: 880240f9  ldr x8, [x20]
0x0601F490: e00314aa  mov x0, x20
0x0601F494: 09c541f9  ldr x9, [x8, #0x388]
0x0601F498: 01c941f9  ldr x1, [x8, #0x390]
0x0601F49C: 20013fd6  blr x9
0x0601F4A0: f40300aa  mov x20, x0
0x0601F4A4: c00000b4  cbz x0, #0x601f4bc
0x0601F4A8: 680240f9  ldr x8, [x19]
0x0601F4AC: e00314aa  mov x0, x20
0x0601F4B0: 012140f9  ldr x1, [x8, #0x40]
0x0601F4B4: b7854597  bl #0x3180b90
0x0601F4B8: 600200b4  cbz x0, #0x601f504
0x0601F4BC: 681a40b9  ldr w8, [x19, #0x18]
0x0601F4C0: 1f0d0071  cmp w8, #3
0x0601F4C4: e9010054  b.ls #0x601f500
0x0601F4C8: 95b500b0  adrp x21, #0x76d0000
0x0601F4CC: b5a640f9  ldr x21, [x21, #0x148]
0x0601F4D0: e00313aa  mov x0, x19
0x0601F4D4: 148c03f8  str x20, [x0, #0x38]!
0x0601F4D8: e10314aa  mov x1, x20
0x0601F4DC: 3a854597  bl #0x31809c4
0x0601F4E0: a00240f9  ldr x0, [x21]
0x0601F4E4: e10313aa  mov x1, x19
0x0601F4E8: e2031faa  mov x2, xzr
0x0601F4EC: 9e62d397  bl #0x54f7f64
0x0601F4F0: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0601F4F4: f65741a9  ldp x22, x21, [sp, #0x10]
0x0601F4F8: fe0743f8  ldr x30, [sp], #0x30
0x0601F4FC: c0035fd6  ret
0x0601F500: ed854597  bl #0x3180cb4
0x0601F504: f3854597  bl #0x3180cd0
0x0601F508: e1031faa  mov x1, xzr
0x0601F50C: 9c854597  bl #0x3180b7c
0x0601F510: e7854597  bl #0x3180cac

; RVA 0x601F514 | protected virtual string GetExtraLogData() { }
; bytes=72 sha256=fbcc25561e871351a4c12d6fa5b470d1fc7a63ac88df1b415d045afaa69d86c5 status=arm64_complete_bound indexed_start=True
0x0601F514: fe0f1ef8  str x30, [sp, #-0x20]!
0x0601F518: f44f01a9  stp x20, x19, [sp, #0x10]
0x0601F51C: 33e80090  adrp x19, #0x7d23000
0x0601F520: 74b100f0  adrp x20, #0x764e000
0x0601F524: 68826139  ldrb w8, [x19, #0x860]
0x0601F528: 94ee42f9  ldr x20, [x20, #0x5d8]
0x0601F52C: c8000037  tbnz w8, #0, #0x601f544
0x0601F530: 60b100f0  adrp x0, #0x764e000
0x0601F534: 00ec42f9  ldr x0, [x0, #0x5d8]
0x0601F538: 38854597  bl #0x3180a18
0x0601F53C: 28008052  movz w8, #0x1
0x0601F540: 68822139  strb w8, [x19, #0x860]
0x0601F544: 880240f9  ldr x8, [x20]
0x0601F548: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0601F54C: 085d40f9  ldr x8, [x8, #0xb8]
0x0601F550: 000140f9  ldr x0, [x8]
0x0601F554: fe0742f8  ldr x30, [sp], #0x20
0x0601F558: c0035fd6  ret

; RVA 0x601F55C | public virtual bool Equals(IRewardViewData other) { }
; bytes=492 sha256=1a6b0229ac76556ad363b6767f05c6fb70e1bc0e7ee71d49a442c1d66ac0eb5c status=arm64_complete_bound indexed_start=True
0x0601F55C: fe0f1df8  str x30, [sp, #-0x30]!
0x0601F560: f65701a9  stp x22, x21, [sp, #0x10]
0x0601F564: f44f02a9  stp x20, x19, [sp, #0x20]
0x0601F568: 35e80090  adrp x21, #0x7d23000
0x0601F56C: a8866139  ldrb w8, [x21, #0x861]
0x0601F570: f30301aa  mov x19, x1
0x0601F574: f40300aa  mov x20, x0
0x0601F578: c8000037  tbnz w8, #0, #0x601f590
0x0601F57C: 80b200d0  adrp x0, #0x7671000
0x0601F580: 00c443f9  ldr x0, [x0, #0x788]
0x0601F584: 25854597  bl #0x3180a18
0x0601F588: 28008052  movz w8, #0x1
0x0601F58C: a8862139  strb w8, [x21, #0x861]
0x0601F590: 530b00b4  cbz x19, #0x601f6f8
0x0601F594: 9f0213eb  cmp x20, x19
0x0601F598: 20030054  b.eq #0x601f5fc
0x0601F59C: 880240f9  ldr x8, [x20]
0x0601F5A0: e00314aa  mov x0, x20
0x0601F5A4: 098541f9  ldr x9, [x8, #0x308]
0x0601F5A8: 018941f9  ldr x1, [x8, #0x310]
0x0601F5AC: 20013fd6  blr x9
0x0601F5B0: 96b200d0  adrp x22, #0x7671000
0x0601F5B4: 680240f9  ldr x8, [x19]
0x0601F5B8: d6c643f9  ldr x22, [x22, #0x788]
0x0601F5BC: f50300aa  mov x21, x0
0x0601F5C0: 095d4279  ldrh w9, [x8, #0x12e]
0x0601F5C4: c10240f9  ldr x1, [x22]
0x0601F5C8: 290100b4  cbz x9, #0x601f5ec
0x0601F5CC: 0a5940f9  ldr x10, [x8, #0xb0]
0x0601F5D0: 4a210091  add x10, x10, #8
0x0601F5D4: 4b815ff8  ldur x11, [x10, #-8]
0x0601F5D8: 7f0101eb  cmp x11, x1
0x0601F5DC: 40010054  b.eq #0x601f604
0x0601F5E0: 290500f1  subs x9, x9, #1
0x0601F5E4: 4a410091  add x10, x10, #0x10
0x0601F5E8: 61ffff54  b.ne #0x601f5d4
0x0601F5EC: e00313aa  mov x0, x19
0x0601F5F0: e2031f2a  mov w2, wzr
0x0601F5F4: 47dd4497  bl #0x3156b10
0x0601F5F8: 06000014  b #0x601f610
0x0601F5FC: 20008052  movz w0, #0x1
0x0601F600: 3f000014  b #0x601f6fc
0x0601F604: 490180b9  ldrsw x9, [x10]
0x0601F608: 0811098b  add x8, x8, x9, lsl #4
0x0601F60C: 00e10491  add x0, x8, #0x138
0x0601F610: 080440a9  ldp x8, x1, [x0]
0x0601F614: e00313aa  mov x0, x19
0x0601F618: 00013fd6  blr x8
0x0601F61C: 550900b4  cbz x21, #0x601f744
0x0601F620: e10300aa  mov x1, x0
0x0601F624: e00315aa  mov x0, x21
0x0601F628: e2031faa  mov x2, xzr
0x0601F62C: 035dd397  bl #0x54f6a38
0x0601F630: 40060036  tbz w0, #0, #0x601f6f8
0x0601F634: e00314aa  mov x0, x20
0x0601F638: fdfeff97  bl #0x601f22c
0x0601F63C: 680240f9  ldr x8, [x19]
0x0601F640: c10240f9  ldr x1, [x22]
0x0601F644: f50300aa  mov x21, x0
0x0601F648: 095d4279  ldrh w9, [x8, #0x12e]
0x0601F64C: 290100b4  cbz x9, #0x601f670
0x0601F650: 0a5940f9  ldr x10, [x8, #0xb0]
0x0601F654: 4a210091  add x10, x10, #8
0x0601F658: 4b815ff8  ldur x11, [x10, #-8]
0x0601F65C: 7f0101eb  cmp x11, x1
0x0601F660: 00010054  b.eq #0x601f680
0x0601F664: 290500f1  subs x9, x9, #1
0x0601F668: 4a410091  add x10, x10, #0x10
0x0601F66C: 61ffff54  b.ne #0x601f658
0x0601F670: 42008052  movz w2, #0x2
0x0601F674: e00313aa  mov x0, x19
0x0601F678: 26dd4497  bl #0x3156b10
0x0601F67C: 05000014  b #0x601f690
0x0601F680: 490140b9  ldr w9, [x10]
0x0601F684: 29090011  add w9, w9, #2
0x0601F688: 08d1298b  add x8, x8, w9, sxtw #4
0x0601F68C: 00e10491  add x0, x8, #0x138
0x0601F690: 080440a9  ldp x8, x1, [x0]
0x0601F694: e00313aa  mov x0, x19
0x0601F698: 00013fd6  blr x8
0x0601F69C: 550500b4  cbz x21, #0x601f744
0x0601F6A0: e10300aa  mov x1, x0
0x0601F6A4: e00315aa  mov x0, x21
0x0601F6A8: e2031faa  mov x2, xzr
0x0601F6AC: e35cd397  bl #0x54f6a38
0x0601F6B0: 40020036  tbz w0, #0, #0x601f6f8
0x0601F6B4: 680240f9  ldr x8, [x19]
0x0601F6B8: 941240f9  ldr x20, [x20, #0x20]
0x0601F6BC: c10240f9  ldr x1, [x22]
0x0601F6C0: 095d4279  ldrh w9, [x8, #0x12e]
0x0601F6C4: 290100b4  cbz x9, #0x601f6e8
0x0601F6C8: 0a5940f9  ldr x10, [x8, #0xb0]
0x0601F6CC: 4a210091  add x10, x10, #8
0x0601F6D0: 4b815ff8  ldur x11, [x10, #-8]
0x0601F6D4: 7f0101eb  cmp x11, x1
0x0601F6D8: a0010054  b.eq #0x601f70c
0x0601F6DC: 290500f1  subs x9, x9, #1
0x0601F6E0: 4a410091  add x10, x10, #0x10
0x0601F6E4: 61ffff54  b.ne #0x601f6d0
0x0601F6E8: 82008052  movz w2, #0x4
0x0601F6EC: e00313aa  mov x0, x19
0x0601F6F0: 08dd4497  bl #0x3156b10
0x0601F6F4: 0a000014  b #0x601f71c
0x0601F6F8: e0031f2a  mov w0, wzr
0x0601F6FC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0601F700: f65741a9  ldp x22, x21, [sp, #0x10]
0x0601F704: fe0743f8  ldr x30, [sp], #0x30
0x0601F708: c0035fd6  ret
0x0601F70C: 490140b9  ldr w9, [x10]
0x0601F710: 29110011  add w9, w9, #4
0x0601F714: 08d1298b  add x8, x8, w9, sxtw #4
0x0601F718: 00e10491  add x0, x8, #0x138
0x0601F71C: 080440a9  ldp x8, x1, [x0]
0x0601F720: e00313aa  mov x0, x19
0x0601F724: 00013fd6  blr x8
0x0601F728: f40000b4  cbz x20, #0x601f744
0x0601F72C: e10300aa  mov x1, x0
0x0601F730: e00314aa  mov x0, x20
0x0601F734: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0601F738: f65741a9  ldp x22, x21, [sp, #0x10]
0x0601F73C: fe0743f8  ldr x30, [sp], #0x30
0x0601F740: 02000014  b #0x601f748
0x0601F744: 5a854597  bl #0x3180cac

; RVA 0x601F880 | public override bool Equals(object obj) { }
; bytes=128 sha256=5b873a81b5358c14b01f0d7ff13040c116185d72e1b4e721ccf55129fa2c6403 status=arm64_complete_bound indexed_start=True
0x0601F880: fe0f1df8  str x30, [sp, #-0x30]!
0x0601F884: f65701a9  stp x22, x21, [sp, #0x10]
0x0601F888: f44f02a9  stp x20, x19, [sp, #0x20]
0x0601F88C: 35e80090  adrp x21, #0x7d23000
0x0601F890: f6b20090  adrp x22, #0x767b000
0x0601F894: a88a6139  ldrb w8, [x21, #0x862]
0x0601F898: d66241f9  ldr x22, [x22, #0x2c0]
0x0601F89C: f40301aa  mov x20, x1
0x0601F8A0: f30300aa  mov x19, x0
0x0601F8A4: c8000037  tbnz w8, #0, #0x601f8bc
0x0601F8A8: e0b20090  adrp x0, #0x767b000
0x0601F8AC: 006041f9  ldr x0, [x0, #0x2c0]
0x0601F8B0: 5a844597  bl #0x3180a18
0x0601F8B4: 28008052  movz w8, #0x1
0x0601F8B8: a88a2139  strb w8, [x21, #0x862]
0x0601F8BC: c10240f9  ldr x1, [x22]
0x0601F8C0: e00314aa  mov x0, x20
0x0601F8C4: b3844597  bl #0x3180b90
0x0601F8C8: 400100b4  cbz x0, #0x601f8f0
0x0601F8CC: 680240f9  ldr x8, [x19]
0x0601F8D0: e10300aa  mov x1, x0
0x0601F8D4: e00313aa  mov x0, x19
0x0601F8D8: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0601F8DC: 03d541f9  ldr x3, [x8, #0x3a8]
0x0601F8E0: 02d941f9  ldr x2, [x8, #0x3b0]
0x0601F8E4: f65741a9  ldp x22, x21, [sp, #0x10]
0x0601F8E8: fe0743f8  ldr x30, [sp], #0x30
0x0601F8EC: 60001fd6  br x3
0x0601F8F0: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0601F8F4: f65741a9  ldp x22, x21, [sp, #0x10]
0x0601F8F8: fe0743f8  ldr x30, [sp], #0x30
0x0601F8FC: c0035fd6  ret

; RVA 0x601F900 | public virtual RewardViewPresentationType get_PresentationType() { }
; bytes=8 sha256=5103ba3de080c52a046485f800433848701faa49ab8f60241a80987ca249d7ac status=arm64_complete_bound indexed_start=True
0x0601F900: 20008052  movz w0, #0x1
0x0601F904: c0035fd6  ret

; RVA 0x601F908 | public virtual int get_Priority() { }
; bytes=8 sha256=d7f5f3095d77028926f25d8a842a6a2f7dac311346dbbc634a0b8fcc4543239b status=arm64_complete_bound indexed_start=True
0x0601F908: 005840b9  ldr w0, [x0, #0x58]
0x0601F90C: c0035fd6  ret

