; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1314 MergeEngine.Configuration.Definitions.ResourceMultiple
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A2A38C | public PlayerResourceEnum get_Resource() { }
; bytes=8 sha256=17cc0856ec0ddb478c5e4fd6857de6e98d688e40671b7869cf46922cedcb98b0 status=arm64_complete_bound indexed_start=True
0x06A2A38C: 005c40b9  ldr w0, [x0, #0x5c]
0x06A2A390: c0035fd6  ret

; RVA 0x6A2A394 | public virtual IRewardType get_ResourceType() { }
; bytes=8 sha256=dc0647a8f63aacbe9d6b7a7bf9b54950de74e29f82066e71731415b61d501071 status=arm64_complete_bound indexed_start=True
0x06A2A394: 003040f9  ldr x0, [x0, #0x60]
0x06A2A398: c0035fd6  ret

; RVA 0x6A2A39C | private void set_ResourceType(IRewardType value) { }
; bytes=8 sha256=be9f5f2256a86fc9b2ccdbcb5f87f36ba9dc8339c1a18c0f82360b1265fd065d status=arm64_complete_bound indexed_start=True
0x06A2A39C: 010c06f8  str x1, [x0, #0x60]!
0x06A2A3A0: 89591d17  b #0x31809c4

; RVA 0x6A2A3A4 | private int Merger.Game.Views.Components.Orders.Rewards.IPrioritizedOrderReward.get_Priority() { }
; bytes=88 sha256=12aee11bcb57bfdc31a35af714a49998900d44e7af436c761589999f9333645a status=arm64_complete_bound indexed_start=True
0x06A2A3A4: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A2A3A8: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A2A3AC: 14980090  adrp x20, #0x7d2a000
0x06A2A3B0: 156700f0  adrp x21, #0x770d000
0x06A2A3B4: 88b65039  ldrb w8, [x20, #0x42d]
0x06A2A3B8: b57e42f9  ldr x21, [x21, #0x4f8]
0x06A2A3BC: f30300aa  mov x19, x0
0x06A2A3C0: c8000037  tbnz w8, #0, #0x6a2a3d8
0x06A2A3C4: 006700f0  adrp x0, #0x770d000
0x06A2A3C8: 007c42f9  ldr x0, [x0, #0x4f8]
0x06A2A3CC: 93591d97  bl #0x3180a18
0x06A2A3D0: 28008052  movz w8, #0x1
0x06A2A3D4: 88b61039  strb w8, [x20, #0x42d]
0x06A2A3D8: a00240f9  ldr x0, [x21]
0x06A2A3DC: 08e040b9  ldr w8, [x0, #0xe0]
0x06A2A3E0: 48000035  cbnz w8, #0x6a2a3e8
0x06A2A3E4: ea591d97  bl #0x3180b8c
0x06A2A3E8: e00313aa  mov x0, x19
0x06A2A3EC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A2A3F0: e1031faa  mov x1, xzr
0x06A2A3F4: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A2A3F8: 1e05f417  b #0x672b870

; RVA 0x6A2A3FC | public override string get_ConfigurationId() { }
; bytes=180 sha256=b501f3c0a43c035eb46ee15381981a03a5ca899c3ada996cd3a406c45fe8f70c status=arm64_complete_bound indexed_start=True
0x06A2A3FC: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A2A400: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A2A404: 14980090  adrp x20, #0x7d2a000
0x06A2A408: 88ba5039  ldrb w8, [x20, #0x42e]
0x06A2A40C: f30300aa  mov x19, x0
0x06A2A410: c8000037  tbnz w8, #0, #0x6a2a428
0x06A2A414: 606200f0  adrp x0, #0x7679000
0x06A2A418: 000c44f9  ldr x0, [x0, #0x818]
0x06A2A41C: 7f591d97  bl #0x3180a18
0x06A2A420: 28008052  movz w8, #0x1
0x06A2A424: 88ba1039  strb w8, [x20, #0x42e]
0x06A2A428: 680240f9  ldr x8, [x19]
0x06A2A42C: e00313aa  mov x0, x19
0x06A2A430: 09ed41f9  ldr x9, [x8, #0x3d8]
0x06A2A434: 01f141f9  ldr x1, [x8, #0x3e0]
0x06A2A438: 20013fd6  blr x9
0x06A2A43C: 800300b4  cbz x0, #0x6a2a4ac
0x06A2A440: 6a6200f0  adrp x10, #0x7679000
0x06A2A444: 080040f9  ldr x8, [x0]
0x06A2A448: 4a0d44f9  ldr x10, [x10, #0x818]
0x06A2A44C: f30300aa  mov x19, x0
0x06A2A450: 095d4279  ldrh w9, [x8, #0x12e]
0x06A2A454: 410140f9  ldr x1, [x10]
0x06A2A458: 290100b4  cbz x9, #0x6a2a47c
0x06A2A45C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A2A460: 4a210091  add x10, x10, #8
0x06A2A464: 4b815ff8  ldur x11, [x10, #-8]
0x06A2A468: 7f0101eb  cmp x11, x1
0x06A2A46C: 00010054  b.eq #0x6a2a48c
0x06A2A470: 290500f1  subs x9, x9, #1
0x06A2A474: 4a410091  add x10, x10, #0x10
0x06A2A478: 61ffff54  b.ne #0x6a2a464
0x06A2A47C: e00313aa  mov x0, x19
0x06A2A480: e2031f2a  mov w2, wzr
0x06A2A484: a3b11c97  bl #0x3156b10
0x06A2A488: 04000014  b #0x6a2a498
0x06A2A48C: 490180b9  ldrsw x9, [x10]
0x06A2A490: 0811098b  add x8, x8, x9, lsl #4
0x06A2A494: 00e10491  add x0, x8, #0x138
0x06A2A498: 020440a9  ldp x2, x1, [x0]
0x06A2A49C: e00313aa  mov x0, x19
0x06A2A4A0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A2A4A4: fe0742f8  ldr x30, [sp], #0x20
0x06A2A4A8: 40001fd6  br x2
0x06A2A4AC: 005a1d97  bl #0x3180cac

; RVA 0x6A2A4B0 | public override string get_Name() { }
; bytes=236 sha256=5fa34d39bfca6487991c55f937f00d26b4c6c8ea5f46b6305479d9adafdc60f6 status=arm64_complete_bound indexed_start=True
0x06A2A4B0: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A2A4B4: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A2A4B8: 15980090  adrp x21, #0x7d2a000
0x06A2A4BC: 946200d0  adrp x20, #0x767c000
0x06A2A4C0: a8be5039  ldrb w8, [x21, #0x42f]
0x06A2A4C4: 94ee47f9  ldr x20, [x20, #0xfd8]
0x06A2A4C8: f30300aa  mov x19, x0
0x06A2A4CC: 88010037  tbnz w8, #0, #0x6a2a4fc
0x06A2A4D0: 20610090  adrp x0, #0x764e000
0x06A2A4D4: 00f442f9  ldr x0, [x0, #0x5e8]
0x06A2A4D8: 50591d97  bl #0x3180a18
0x06A2A4DC: 806200d0  adrp x0, #0x767c000
0x06A2A4E0: 00ec47f9  ldr x0, [x0, #0xfd8]
0x06A2A4E4: 4d591d97  bl #0x3180a18
0x06A2A4E8: 206100b0  adrp x0, #0x764f000
0x06A2A4EC: 00ac40f9  ldr x0, [x0, #0x158]
0x06A2A4F0: 4a591d97  bl #0x3180a18
0x06A2A4F4: 28008052  movz w8, #0x1
0x06A2A4F8: a8be1039  strb w8, [x21, #0x42f]
0x06A2A4FC: 800240f9  ldr x0, [x20]
0x06A2A500: 34610090  adrp x20, #0x764e000
0x06A2A504: 735e40b9  ldr w19, [x19, #0x5c]
0x06A2A508: 08e040b9  ldr w8, [x0, #0xe0]
0x06A2A50C: 94f642f9  ldr x20, [x20, #0x5e8]
0x06A2A510: 48000035  cbnz w8, #0x6a2a518
0x06A2A514: 9e591d97  bl #0x3180b8c
0x06A2A518: e003132a  mov w0, w19
0x06A2A51C: e1031faa  mov x1, xzr
0x06A2A520: cefaf997  bl #0x68a9058
0x06A2A524: 940240f9  ldr x20, [x20]
0x06A2A528: f30300aa  mov x19, x0
0x06A2A52C: 881e40f9  ldr x8, [x20, #0x38]
0x06A2A530: 880000b5  cbnz x8, #0x6a2a540
0x06A2A534: e00314aa  mov x0, x20
0x06A2A538: d0b01c97  bl #0x3156878
0x06A2A53C: 881e40f9  ldr x8, [x20, #0x38]
0x06A2A540: 000940f9  ldr x0, [x8, #0x10]
0x06A2A544: 08d44439  ldrb w8, [x0, #0x135]
0x06A2A548: 48000037  tbnz w8, #0, #0x6a2a550
0x06A2A54C: b4b01c97  bl #0x315681c
0x06A2A550: 08e040b9  ldr w8, [x0, #0xe0]
0x06A2A554: 48000035  cbnz w8, #0x6a2a55c
0x06A2A558: 8d591d97  bl #0x3180b8c
0x06A2A55C: 881e40f9  ldr x8, [x20, #0x38]
0x06A2A560: 346100b0  adrp x20, #0x764f000
0x06A2A564: 000940f9  ldr x0, [x8, #0x10]
0x06A2A568: 08d44439  ldrb w8, [x0, #0x135]
0x06A2A56C: 94ae40f9  ldr x20, [x20, #0x158]
0x06A2A570: 48000037  tbnz w8, #0, #0x6a2a578
0x06A2A574: aab01c97  bl #0x315681c
0x06A2A578: 085c40f9  ldr x8, [x0, #0xb8]
0x06A2A57C: 820240f9  ldr x2, [x20]
0x06A2A580: e00313aa  mov x0, x19
0x06A2A584: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A2A588: 030140f9  ldr x3, [x8]
0x06A2A58C: 21008052  movz w1, #0x1
0x06A2A590: e4031faa  mov x4, xzr
0x06A2A594: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A2A598: 9ef9f917  b #0x68a8c10

; RVA 0x6A2A59C | public void .ctor(PlayerResourceEnum resource, RewardAmount rewardAmount, RewardDestination destination) { }
; bytes=172 sha256=206bcadfa1a39a162812e1d73b893082a72a81d0969d42c3438f932b4fd355ea status=arm64_complete_bound indexed_start=True
0x06A2A59C: fe0f1cf8  str x30, [sp, #-0x40]!
0x06A2A5A0: f85f01a9  stp x24, x23, [sp, #0x10]
0x06A2A5A4: f65702a9  stp x22, x21, [sp, #0x20]
0x06A2A5A8: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A2A5AC: 17980090  adrp x23, #0x7d2a000
0x06A2A5B0: 586200b0  adrp x24, #0x7673000
0x06A2A5B4: e8c25039  ldrb w8, [x23, #0x430]
0x06A2A5B8: 185f40f9  ldr x24, [x24, #0xb8]
0x06A2A5BC: f50303aa  mov x21, x3
0x06A2A5C0: f60302aa  mov x22, x2
0x06A2A5C4: f403012a  mov w20, w1
0x06A2A5C8: f30300aa  mov x19, x0
0x06A2A5CC: c8000037  tbnz w8, #0, #0x6a2a5e4
0x06A2A5D0: 406200b0  adrp x0, #0x7673000
0x06A2A5D4: 005c40f9  ldr x0, [x0, #0xb8]
0x06A2A5D8: 10591d97  bl #0x3180a18
0x06A2A5DC: 28008052  movz w8, #0x1
0x06A2A5E0: e8c21039  strb w8, [x23, #0x430]
0x06A2A5E4: 000340f9  ldr x0, [x24]
0x06A2A5E8: 08e040b9  ldr w8, [x0, #0xe0]
0x06A2A5EC: 48000035  cbnz w8, #0x6a2a5f4
0x06A2A5F0: 67591d97  bl #0x3180b8c
0x06A2A5F4: e003142a  mov w0, w20
0x06A2A5F8: e1031faa  mov x1, xzr
0x06A2A5FC: 4989dc97  bl #0x614cb20
0x06A2A600: e10300aa  mov x1, x0
0x06A2A604: e00313aa  mov x0, x19
0x06A2A608: e20316aa  mov x2, x22
0x06A2A60C: e30315aa  mov x3, x21
0x06A2A610: e4031faa  mov x4, xzr
0x06A2A614: 30d3d797  bl #0x601f2d4
0x06A2A618: e003142a  mov w0, w20
0x06A2A61C: e1031faa  mov x1, xzr
0x06A2A620: 745e00b9  str w20, [x19, #0x5c]
0x06A2A624: 3f89dc97  bl #0x614cb20
0x06A2A628: 600e06f8  str x0, [x19, #0x60]!
0x06A2A62C: e10300aa  mov x1, x0
0x06A2A630: e00313aa  mov x0, x19
0x06A2A634: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A2A638: f65742a9  ldp x22, x21, [sp, #0x20]
0x06A2A63C: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06A2A640: fe0744f8  ldr x30, [sp], #0x40
0x06A2A644: e0581d17  b #0x31809c4

; RVA 0x6A2A648 | public void .ctor(IRewardType rewardType, RewardAmount rewardAmount, RewardDestination destination) { }
; bytes=48 sha256=4b98595a7c91002524268dc7c6eb95a38c3ae4dd3e1bb0bd36cdd8dfea3a2d68 status=arm64_complete_bound indexed_start=True
0x06A2A648: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A2A64C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A2A650: e4031faa  mov x4, xzr
0x06A2A654: f30301aa  mov x19, x1
0x06A2A658: f40300aa  mov x20, x0
0x06A2A65C: 1ed3d797  bl #0x601f2d4
0x06A2A660: 930e06f8  str x19, [x20, #0x60]!
0x06A2A664: e00314aa  mov x0, x20
0x06A2A668: e10313aa  mov x1, x19
0x06A2A66C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A2A670: fe0742f8  ldr x30, [sp], #0x20
0x06A2A674: d4581d17  b #0x31809c4

; RVA 0x6A2A678 | protected void .ctor(PlayerResourceEnum resource, IRewardType rewardType, RewardAmount rewardAmount, RewardDestination destination) { }
; bytes=68 sha256=7ea7d43fe6c7df5d18f80189aeb22ad0bfd0e56ac020aaf99a8cf3c492b15e2f status=arm64_complete_bound indexed_start=True
0x06A2A678: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A2A67C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A2A680: f30302aa  mov x19, x2
0x06A2A684: f403012a  mov w20, w1
0x06A2A688: e10302aa  mov x1, x2
0x06A2A68C: e20303aa  mov x2, x3
0x06A2A690: e30304aa  mov x3, x4
0x06A2A694: e4031faa  mov x4, xzr
0x06A2A698: f50300aa  mov x21, x0
0x06A2A69C: 0ed3d797  bl #0x601f2d4
0x06A2A6A0: b30e06f8  str x19, [x21, #0x60]!
0x06A2A6A4: b4c21fb8  stur w20, [x21, #-4]
0x06A2A6A8: e10313aa  mov x1, x19
0x06A2A6AC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A2A6B0: e00315aa  mov x0, x21
0x06A2A6B4: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A2A6B8: c3581d17  b #0x31809c4

; RVA 0x6A21870 | public void .ctor(PlayerResourceEnum resource, int amount, bool shouldBeHidden = False) { }
; bytes=212 sha256=960ae40a97d6a98610bbd531a6c37acf1477b997665a1eaa07ed1e4166ee848e status=arm64_complete_bound indexed_start=True
0x06A21870: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x06A21874: f65701a9  stp x22, x21, [sp, #0x10]
0x06A21878: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A2187C: 579800b0  adrp x23, #0x7d2a000
0x06A21880: 966200d0  adrp x22, #0x7673000
0x06A21884: e8c65039  ldrb w8, [x23, #0x431]
0x06A21888: d65e40f9  ldr x22, [x22, #0xb8]
0x06A2188C: f503022a  mov w21, w2
0x06A21890: f403012a  mov w20, w1
0x06A21894: f30300aa  mov x19, x0
0x06A21898: 28010037  tbnz w8, #0, #0x6a218bc
0x06A2189C: 806200d0  adrp x0, #0x7673000
0x06A218A0: 00c440f9  ldr x0, [x0, #0x188]
0x06A218A4: 5d7c1d97  bl #0x3180a18
0x06A218A8: 806200d0  adrp x0, #0x7673000
0x06A218AC: 005c40f9  ldr x0, [x0, #0xb8]
0x06A218B0: 5a7c1d97  bl #0x3180a18
0x06A218B4: 28008052  movz w8, #0x1
0x06A218B8: e8c61039  strb w8, [x23, #0x431]
0x06A218BC: c00240f9  ldr x0, [x22]
0x06A218C0: 966200d0  adrp x22, #0x7673000
0x06A218C4: 08e040b9  ldr w8, [x0, #0xe0]
0x06A218C8: d6c640f9  ldr x22, [x22, #0x188]
0x06A218CC: 48000035  cbnz w8, #0x6a218d4
0x06A218D0: af7c1d97  bl #0x3180b8c
0x06A218D4: e003142a  mov w0, w20
0x06A218D8: e1031faa  mov x1, xzr
0x06A218DC: 91acdc97  bl #0x614cb20
0x06A218E0: c80240f9  ldr x8, [x22]
0x06A218E4: f60300aa  mov x22, x0
0x06A218E8: e00308aa  mov x0, x8
0x06A218EC: ed7c1d97  bl #0x3180ca0
0x06A218F0: e103152a  mov w1, w21
0x06A218F4: e2031faa  mov x2, xzr
0x06A218F8: f70300aa  mov x23, x0
0x06A218FC: dcf8d797  bl #0x601fc6c
0x06A21900: e00313aa  mov x0, x19
0x06A21904: e10316aa  mov x1, x22
0x06A21908: e20317aa  mov x2, x23
0x06A2190C: e3031faa  mov x3, xzr
0x06A21910: e4031faa  mov x4, xzr
0x06A21914: 70f6d797  bl #0x601f2d4
0x06A21918: e003142a  mov w0, w20
0x06A2191C: e1031faa  mov x1, xzr
0x06A21920: 745e00b9  str w20, [x19, #0x5c]
0x06A21924: 7facdc97  bl #0x614cb20
0x06A21928: 600e06f8  str x0, [x19, #0x60]!
0x06A2192C: e10300aa  mov x1, x0
0x06A21930: e00313aa  mov x0, x19
0x06A21934: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A21938: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A2193C: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x06A21940: 217c1d17  b #0x31809c4

; RVA 0x6A2A6BC | public override IRewardViewData Clone() { }
; bytes=160 sha256=b44e2c226749bf0635c180e096f162e747da6e1cec90712c43491255aa5ef56c status=arm64_complete_bound indexed_start=True
0x06A2A6BC: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x06A2A6C0: f65701a9  stp x22, x21, [sp, #0x10]
0x06A2A6C4: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A2A6C8: 14980090  adrp x20, #0x7d2a000
0x06A2A6CC: 88ca5039  ldrb w8, [x20, #0x432]
0x06A2A6D0: f30300aa  mov x19, x0
0x06A2A6D4: c8000037  tbnz w8, #0, #0x6a2a6ec
0x06A2A6D8: 206200f0  adrp x0, #0x7671000
0x06A2A6DC: 00a047f9  ldr x0, [x0, #0xf40]
0x06A2A6E0: ce581d97  bl #0x3180a18
0x06A2A6E4: 28008052  movz w8, #0x1
0x06A2A6E8: 88ca1039  strb w8, [x20, #0x432]
0x06A2A6EC: 601240f9  ldr x0, [x19, #0x20]
0x06A2A6F0: 400300b4  cbz x0, #0x6a2a758
0x06A2A6F4: 346200f0  adrp x20, #0x7671000
0x06A2A6F8: 755e40b9  ldr w21, [x19, #0x5c]
0x06A2A6FC: 94a247f9  ldr x20, [x20, #0xf40]
0x06A2A700: e1031faa  mov x1, xzr
0x06A2A704: 90d6d797  bl #0x6020144
0x06A2A708: 880240f9  ldr x8, [x20]
0x06A2A70C: 761e40f9  ldr x22, [x19, #0x38]
0x06A2A710: f70300aa  mov x23, x0
0x06A2A714: e00308aa  mov x0, x8
0x06A2A718: 62591d97  bl #0x3180ca0
0x06A2A71C: e103152a  mov w1, w21
0x06A2A720: e20317aa  mov x2, x23
0x06A2A724: e30316aa  mov x3, x22
0x06A2A728: f40300aa  mov x20, x0
0x06A2A72C: 9cffff97  bl #0x6a2a59c
0x06A2A730: 540100b4  cbz x20, #0x6a2a758
0x06A2A734: 68ce4039  ldrb w8, [x19, #0x33]
0x06A2A738: e00314aa  mov x0, x20
0x06A2A73C: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A2A740: 88ce0039  strb w8, [x20, #0x33]
0x06A2A744: 68624039  ldrb w8, [x19, #0x18]
0x06A2A748: 88620039  strb w8, [x20, #0x18]
0x06A2A74C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A2A750: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x06A2A754: c0035fd6  ret
0x06A2A758: 55591d97  bl #0x3180cac

; RVA 0x6A2A75C | protected override string GetExtraLogData() { }
; bytes=164 sha256=f02d1e83cbc92afe2017be8ddccca5040ca0f9f0d4c55cdde49c19a23f92d08a status=arm64_complete_bound indexed_start=True
0x06A2A75C: ff0301d1  sub sp, sp, #0x40
0x06A2A760: fe5f01a9  stp x30, x23, [sp, #0x10]
0x06A2A764: f65702a9  stp x22, x21, [sp, #0x20]
0x06A2A768: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A2A76C: 17980090  adrp x23, #0x7d2a000
0x06A2A770: 96620090  adrp x22, #0x767a000
0x06A2A774: 346800b0  adrp x20, #0x772f000
0x06A2A778: 356800b0  adrp x21, #0x772f000
0x06A2A77C: e8ce5039  ldrb w8, [x23, #0x433]
0x06A2A780: d63a43f9  ldr x22, [x22, #0x670]
0x06A2A784: 947640f9  ldr x20, [x20, #0xe8]
0x06A2A788: b57a40f9  ldr x21, [x21, #0xf0]
0x06A2A78C: f30300aa  mov x19, x0
0x06A2A790: 88010037  tbnz w8, #0, #0x6a2a7c0
0x06A2A794: 80620090  adrp x0, #0x767a000
0x06A2A798: 003843f9  ldr x0, [x0, #0x670]
0x06A2A79C: 9f581d97  bl #0x3180a18
0x06A2A7A0: 206800b0  adrp x0, #0x772f000
0x06A2A7A4: 007840f9  ldr x0, [x0, #0xf0]
0x06A2A7A8: 9c581d97  bl #0x3180a18
0x06A2A7AC: 206800b0  adrp x0, #0x772f000
0x06A2A7B0: 007440f9  ldr x0, [x0, #0xe8]
0x06A2A7B4: 99581d97  bl #0x3180a18
0x06A2A7B8: 28008052  movz w8, #0x1
0x06A2A7BC: e8ce1039  strb w8, [x23, #0x433]
0x06A2A7C0: 685e40b9  ldr w8, [x19, #0x5c]
0x06A2A7C4: c00240f9  ldr x0, [x22]
0x06A2A7C8: e1330091  add x1, sp, #0xc
0x06A2A7CC: e80f00b9  str w8, [sp, #0xc]
0x06A2A7D0: f1581d97  bl #0x3180b94
0x06A2A7D4: 880240f9  ldr x8, [x20]
0x06A2A7D8: a10240f9  ldr x1, [x21]
0x06A2A7DC: e20300aa  mov x2, x0
0x06A2A7E0: e3031faa  mov x3, xzr
0x06A2A7E4: e00308aa  mov x0, x8
0x06A2A7E8: bd35ab97  bl #0x54f7edc
0x06A2A7EC: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A2A7F0: f65742a9  ldp x22, x21, [sp, #0x20]
0x06A2A7F4: fe5f41a9  ldp x30, x23, [sp, #0x10]
0x06A2A7F8: ff030191  add sp, sp, #0x40
0x06A2A7FC: c0035fd6  ret

; RVA 0x6A2A800 | public bool IsTool() { }
; bytes=92 sha256=c019f4aea779f22c4c277db9feca3243947e709421d00f9b3c135a3d88764dfc status=arm64_complete_bound indexed_start=True
0x06A2A800: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A2A804: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A2A808: 15980090  adrp x21, #0x7d2a000
0x06A2A80C: b46400b0  adrp x20, #0x76bf000
0x06A2A810: a8d25039  ldrb w8, [x21, #0x434]
0x06A2A814: 944644f9  ldr x20, [x20, #0x888]
0x06A2A818: f30300aa  mov x19, x0
0x06A2A81C: c8000037  tbnz w8, #0, #0x6a2a834
0x06A2A820: a06400b0  adrp x0, #0x76bf000
0x06A2A824: 004444f9  ldr x0, [x0, #0x888]
0x06A2A828: 7c581d97  bl #0x3180a18
0x06A2A82C: 28008052  movz w8, #0x1
0x06A2A830: a8d21039  strb w8, [x21, #0x434]
0x06A2A834: 800240f9  ldr x0, [x20]
0x06A2A838: 735e40b9  ldr w19, [x19, #0x5c]
0x06A2A83C: 08e040b9  ldr w8, [x0, #0xe0]
0x06A2A840: 48000035  cbnz w8, #0x6a2a848
0x06A2A844: d2581d97  bl #0x3180b8c
0x06A2A848: e003132a  mov w0, w19
0x06A2A84C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A2A850: e1031faa  mov x1, xzr
0x06A2A854: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A2A858: daeadb17  b #0x61253c0

; RVA 0x6A2A85C | public override AssetReferenceT<Sprite> get_SpriteReference() { }
; bytes=120 sha256=0d536d45cda48ee33d4934a4a027a570fe3c435652e40b44c7a374dea41888e0 status=arm64_complete_bound indexed_start=True
0x06A2A85C: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A2A860: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A2A864: 14980090  adrp x20, #0x7d2a000
0x06A2A868: 35650090  adrp x21, #0x76ce000
0x06A2A86C: 88d65039  ldrb w8, [x20, #0x435]
0x06A2A870: b51645f9  ldr x21, [x21, #0xa28]
0x06A2A874: f30300aa  mov x19, x0
0x06A2A878: c8000037  tbnz w8, #0, #0x6a2a890
0x06A2A87C: 20650090  adrp x0, #0x76ce000
0x06A2A880: 001445f9  ldr x0, [x0, #0xa28]
0x06A2A884: 65581d97  bl #0x3180a18
0x06A2A888: 28008052  movz w8, #0x1
0x06A2A88C: 88d61039  strb w8, [x20, #0x435]
0x06A2A890: a80240f9  ldr x8, [x21]
0x06A2A894: 690240f9  ldr x9, [x19]
0x06A2A898: e00313aa  mov x0, x19
0x06A2A89C: 085d40f9  ldr x8, [x8, #0xb8]
0x06A2A8A0: 2aed41f9  ldr x10, [x9, #0x3d8]
0x06A2A8A4: 21f141f9  ldr x1, [x9, #0x3e0]
0x06A2A8A8: 140540f9  ldr x20, [x8, #8]
0x06A2A8AC: 40013fd6  blr x10
0x06A2A8B0: 140100b4  cbz x20, #0x6a2a8d0
0x06A2A8B4: e10300aa  mov x1, x0
0x06A2A8B8: 830e40f9  ldr x3, [x20, #0x18]
0x06A2A8BC: 802240f9  ldr x0, [x20, #0x40]
0x06A2A8C0: 821640f9  ldr x2, [x20, #0x28]
0x06A2A8C4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A2A8C8: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A2A8CC: 60001fd6  br x3
0x06A2A8D0: f7581d97  bl #0x3180cac

; RVA 0x6A2A8D4 | public override bool get_ShouldHideIButton() { }
; bytes=8 sha256=2b59db05426e0f313d72b30f3398c65721de2562a59dc46ceeba224f98d0b876 status=arm64_complete_bound indexed_start=True
0x06A2A8D4: e0031f2a  mov w0, wzr
0x06A2A8D8: c0035fd6  ret

; RVA 0x6A2A8DC | public override bool get_ShowInfoButtonAfterContentLoad() { }
; bytes=8 sha256=2b59db05426e0f313d72b30f3398c65721de2562a59dc46ceeba224f98d0b876 status=arm64_complete_bound indexed_start=True
0x06A2A8DC: e0031f2a  mov w0, wzr
0x06A2A8E0: c0035fd6  ret

; RVA 0x6A2A8E4 | public override bool get_HasCollectScreen() { }
; bytes=8 sha256=2b59db05426e0f313d72b30f3398c65721de2562a59dc46ceeba224f98d0b876 status=arm64_complete_bound indexed_start=True
0x06A2A8E4: e0031f2a  mov w0, wzr
0x06A2A8E8: c0035fd6  ret

; RVA 0x6A2A8EC | public override int GetHashCode() { }
; bytes=148 sha256=a81b5f1ba350b850d9760185ba15d3b511a25e27ed21fb66a6487562c2f61291 status=arm64_complete_bound indexed_start=True
0x06A2A8EC: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A2A8F0: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A2A8F4: 14980090  adrp x20, #0x7d2a000
0x06A2A8F8: 88da5039  ldrb w8, [x20, #0x436]
0x06A2A8FC: f30300aa  mov x19, x0
0x06A2A900: 28010037  tbnz w8, #0, #0x6a2a924
0x06A2A904: 206800b0  adrp x0, #0x772f000
0x06A2A908: 007c40f9  ldr x0, [x0, #0xf8]
0x06A2A90C: 43581d97  bl #0x3180a18
0x06A2A910: 20620090  adrp x0, #0x766e000
0x06A2A914: 002042f9  ldr x0, [x0, #0x440]
0x06A2A918: 40581d97  bl #0x3180a18
0x06A2A91C: 28008052  movz w8, #0x1
0x06A2A920: 88da1039  strb w8, [x20, #0x436]
0x06A2A924: 601240f9  ldr x0, [x19, #0x20]
0x06A2A928: a00200b4  cbz x0, #0x6a2a97c
0x06A2A92C: 080040f9  ldr x8, [x0]
0x06A2A930: 34620090  adrp x20, #0x766e000
0x06A2A934: 356800b0  adrp x21, #0x772f000
0x06A2A938: 735e40b9  ldr w19, [x19, #0x5c]
0x06A2A93C: 098555a9  ldp x9, x1, [x8, #0x158]
0x06A2A940: 942242f9  ldr x20, [x20, #0x440]
0x06A2A944: b57e40f9  ldr x21, [x21, #0xf8]
0x06A2A948: 20013fd6  blr x9
0x06A2A94C: 880240f9  ldr x8, [x20]
0x06A2A950: f403002a  mov w20, w0
0x06A2A954: 09e140b9  ldr w9, [x8, #0xe0]
0x06A2A958: 69000035  cbnz w9, #0x6a2a964
0x06A2A95C: e00308aa  mov x0, x8
0x06A2A960: 8b581d97  bl #0x3180b8c
0x06A2A964: a20240f9  ldr x2, [x21]
0x06A2A968: e003132a  mov w0, w19
0x06A2A96C: e103142a  mov w1, w20
0x06A2A970: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A2A974: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A2A978: 24904a17  b #0x3ccea08
0x06A2A97C: cc581d97  bl #0x3180cac

