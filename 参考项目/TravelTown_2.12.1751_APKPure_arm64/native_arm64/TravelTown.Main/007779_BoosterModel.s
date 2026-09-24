; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 7779 Merger.Boosters.Models.BoosterModel
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x65C5AFC | public ReadOnlyCollection<IBoosterItem> get_Boosters() { }
; bytes=72 sha256=1b9984cb9ad903fd08b63b490b76b96989bde4bebb8384b15fe88e69a15eaa16 status=arm64_complete_bound indexed_start=True
0x065C5AFC: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x065C5B00: f44f01a9  stp x20, x19, [sp, #0x10]
0x065C5B04: 14bb00d0  adrp x20, #0x7d27000
0x065C5B08: f58900d0  adrp x21, #0x7703000
0x065C5B0C: 882a6539  ldrb w8, [x20, #0x94a]
0x065C5B10: b5d641f9  ldr x21, [x21, #0x3a8]
0x065C5B14: f30300aa  mov x19, x0
0x065C5B18: c8000037  tbnz w8, #0, #0x65c5b30
0x065C5B1C: e08900d0  adrp x0, #0x7703000
0x065C5B20: 00d441f9  ldr x0, [x0, #0x3a8]
0x065C5B24: bdeb2e97  bl #0x3180a18
0x065C5B28: 28008052  movz w8, #0x1
0x065C5B2C: 882a2539  strb w8, [x20, #0x94a]
0x065C5B30: a10240f9  ldr x1, [x21]
0x065C5B34: e00313aa  mov x0, x19
0x065C5B38: f44f41a9  ldp x20, x19, [sp, #0x10]
0x065C5B3C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x065C5B40: d96b7117  b #0x4220aa4

; RVA 0x65C5B44 | public List<RemoteBoosterData> get_RemoteActiveBoosters() { }
; bytes=8 sha256=d598436bff3a9dd6f386d52e9d196b4b622d920d9df2d4b374773cddd2c4c4b8 status=arm64_complete_bound indexed_start=True
0x065C5B44: 002c40f9  ldr x0, [x0, #0x58]
0x065C5B48: c0035fd6  ret

; RVA 0x65C5B4C | public void set_RemoteActiveBoosters(List<RemoteBoosterData> value) { }
; bytes=8 sha256=e885b105c560b7155c1b965c3bd722225f8c40c27594932e63b5f864611fcc1e status=arm64_complete_bound indexed_start=True
0x065C5B4C: 018c05f8  str x1, [x0, #0x58]!
0x065C5B50: 9deb2e17  b #0x31809c4

; RVA 0x65C5B54 | public Dictionary<string, BoosterType> get_PendingQueueActivationBoosters() { }
; bytes=8 sha256=dc0647a8f63aacbe9d6b7a7bf9b54950de74e29f82066e71731415b61d501071 status=arm64_complete_bound indexed_start=True
0x065C5B54: 003040f9  ldr x0, [x0, #0x60]
0x065C5B58: c0035fd6  ret

; RVA 0x65C5B5C | public HashSet<string> get_DeactivatedBoosters() { }
; bytes=8 sha256=f637e07b3820a82a5634a0174c92391b8ec5194fafa5b124fa3a73d3007ae512 status=arm64_complete_bound indexed_start=True
0x065C5B5C: 003440f9  ldr x0, [x0, #0x68]
0x065C5B60: c0035fd6  ret

; RVA 0x65C5B64 | public string[] get_SpriteReferenceRewardTypes() { }
; bytes=136 sha256=4d1c5adfe8ac440042521a92a528d80f90c96405f513749682b23036348495ec status=arm64_complete_bound indexed_start=True
0x065C5B64: fe0f1ef8  str x30, [sp, #-0x20]!
0x065C5B68: f44f01a9  stp x20, x19, [sp, #0x10]
0x065C5B6C: 13bb00d0  adrp x19, #0x7d27000
0x065C5B70: 548400b0  adrp x20, #0x764e000
0x065C5B74: 682e6539  ldrb w8, [x19, #0x94b]
0x065C5B78: 945e43f9  ldr x20, [x20, #0x6b8]
0x065C5B7C: 28010037  tbnz w8, #0, #0x65c5ba0
0x065C5B80: 408400b0  adrp x0, #0x764e000
0x065C5B84: 005c43f9  ldr x0, [x0, #0x6b8]
0x065C5B88: a4eb2e97  bl #0x3180a18
0x065C5B8C: a0850090  adrp x0, #0x7679000
0x065C5B90: 00f843f9  ldr x0, [x0, #0x7f0]
0x065C5B94: a1eb2e97  bl #0x3180a18
0x065C5B98: 28008052  movz w8, #0x1
0x065C5B9C: 682e2539  strb w8, [x19, #0x94b]
0x065C5BA0: 800240f9  ldr x0, [x20]
0x065C5BA4: 21008052  movz w1, #0x1
0x065C5BA8: d5eb2e97  bl #0x3180afc
0x065C5BAC: c00100b4  cbz x0, #0x65c5be4
0x065C5BB0: 081840b9  ldr w8, [x0, #0x18]
0x065C5BB4: f30300aa  mov x19, x0
0x065C5BB8: 88010034  cbz w8, #0x65c5be8
0x065C5BBC: a8850090  adrp x8, #0x7679000
0x065C5BC0: 08f943f9  ldr x8, [x8, #0x7f0]
0x065C5BC4: e00313aa  mov x0, x19
0x065C5BC8: 010140f9  ldr x1, [x8]
0x065C5BCC: 010c02f8  str x1, [x0, #0x20]!
0x065C5BD0: 7deb2e97  bl #0x31809c4
0x065C5BD4: e00313aa  mov x0, x19
0x065C5BD8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x065C5BDC: fe0742f8  ldr x30, [sp], #0x20
0x065C5BE0: c0035fd6  ret
0x065C5BE4: 32ec2e97  bl #0x3180cac
0x065C5BE8: 33ec2e97  bl #0x3180cb4

; RVA 0x65C5BEC | public List<RemoteBoosterData> get_RemoteActiveBoostersCached() { }
; bytes=8 sha256=36cc23bb70bc1c1b59cc307e6204dbafdeee922c2168929d194e21890ad85195 status=arm64_complete_bound indexed_start=True
0x065C5BEC: 003840f9  ldr x0, [x0, #0x70]
0x065C5BF0: c0035fd6  ret

; RVA 0x65C5BF4 | public void set_RemoteActiveBoostersCached(List<RemoteBoosterData> value) { }
; bytes=8 sha256=e97d7dd852b209c86c7e503537d0e3dfe19831a96298cf11e1c132bb382b153b status=arm64_complete_bound indexed_start=True
0x065C5BF4: 010c07f8  str x1, [x0, #0x70]!
0x065C5BF8: 73eb2e17  b #0x31809c4

; RVA 0x65C5BFC | public HashSet<string> get_LockedBoosters() { }
; bytes=8 sha256=9f68aa97a5258a1e1fbe41f1226846f8b2e5cde4fa5f5b786f7a74d470a04298 status=arm64_complete_bound indexed_start=True
0x065C5BFC: 003c40f9  ldr x0, [x0, #0x78]
0x065C5C00: c0035fd6  ret

; RVA 0x65C5C04 | public bool get_ShouldForceProcessAllBoosters() { }
; bytes=8 sha256=d57b98e32cc087b38749caf0d37651f9b7df9b5ff96e812609f39474156d3ee9 status=arm64_complete_bound indexed_start=True
0x065C5C04: 00004239  ldrb w0, [x0, #0x80]
0x065C5C08: c0035fd6  ret

; RVA 0x65C5C0C | public void set_ShouldForceProcessAllBoosters(bool value) { }
; bytes=12 sha256=5a98df9d26e05384272f48a8d041e1a0817fb25e119e6e336837ad428c0443ad status=arm64_complete_bound indexed_start=True
0x065C5C0C: 28000012  and w8, w1, #1
0x065C5C10: 08000239  strb w8, [x0, #0x80]
0x065C5C14: c0035fd6  ret

; RVA 0x65C5C18 | public List<BoosterSendToActivationData> get_BoosterSendToActivationDatas() { }
; bytes=8 sha256=e22509159eb9c3b897155eb8b2b6f0173dadac1f476c0f92d8d8f930abbe4347 status=arm64_complete_bound indexed_start=True
0x065C5C18: 004440f9  ldr x0, [x0, #0x88]
0x065C5C1C: c0035fd6  ret

; RVA 0x65C5C20 | public bool get_IsSpecialChainCollectSequence() { }
; bytes=8 sha256=b6e45e39862790ae55b102d5f150b1bbc78fa7a04f35a7d988e35311df9744cb status=arm64_complete_bound indexed_start=True
0x065C5C20: 00404239  ldrb w0, [x0, #0x90]
0x065C5C24: c0035fd6  ret

; RVA 0x65C5C28 | public void set_IsSpecialChainCollectSequence(bool value) { }
; bytes=12 sha256=617d6760c8bad5a439f32f6180be5706b31e254592b358a36deb68972054a7a9 status=arm64_complete_bound indexed_start=True
0x065C5C28: 28000012  and w8, w1, #1
0x065C5C2C: 08400239  strb w8, [x0, #0x90]
0x065C5C30: c0035fd6  ret

; RVA 0x65C5C34 | public List<BoosterActivatedSignal> get_PendingActivationSignal() { }
; bytes=8 sha256=8719895e0a1a7a364f8198ecb5c52c335ea6cc04400a216f8ff55a9e8348baca status=arm64_complete_bound indexed_start=True
0x065C5C34: 004c40f9  ldr x0, [x0, #0x98]
0x065C5C38: c0035fd6  ret

; RVA 0x65C5C3C | public IBoosterItem GetBooster(string uniqueId) { }
; bytes=164 sha256=a68fbaf5c205c3e69e338857d1ab3905959bc91861c81e0b204338f6d4c0db1e status=arm64_complete_bound indexed_start=True
0x065C5C3C: ffc300d1  sub sp, sp, #0x30
0x065C5C40: fe5701a9  stp x30, x21, [sp, #0x10]
0x065C5C44: f44f02a9  stp x20, x19, [sp, #0x20]
0x065C5C48: 15bb00d0  adrp x21, #0x7d27000
0x065C5C4C: a8326539  ldrb w8, [x21, #0x94c]
0x065C5C50: f30301aa  mov x19, x1
0x065C5C54: f40300aa  mov x20, x0
0x065C5C58: 28010037  tbnz w8, #0, #0x65c5c7c
0x065C5C5C: e08900d0  adrp x0, #0x7703000
0x065C5C60: 00d841f9  ldr x0, [x0, #0x3b0]
0x065C5C64: 6deb2e97  bl #0x3180a18
0x065C5C68: e08900d0  adrp x0, #0x7703000
0x065C5C6C: 00dc41f9  ldr x0, [x0, #0x3b8]
0x065C5C70: 6aeb2e97  bl #0x3180a18
0x065C5C74: 28008052  movz w8, #0x1
0x065C5C78: a8322539  strb w8, [x21, #0x94c]
0x065C5C7C: e00313aa  mov x0, x19
0x065C5C80: e1031faa  mov x1, xzr
0x065C5C84: ff0700f9  str xzr, [sp, #8]
0x065C5C88: 89c7bc97  bl #0x54f7aac
0x065C5C8C: e803002a  mov w8, w0
0x065C5C90: e0031faa  mov x0, xzr
0x065C5C94: c8010037  tbnz w8, #0, #0x65c5ccc
0x065C5C98: e88900d0  adrp x8, #0x7703000
0x065C5C9C: 08d941f9  ldr x8, [x8, #0x3b0]
0x065C5CA0: e00314aa  mov x0, x20
0x065C5CA4: 010140f9  ldr x1, [x8]
0x065C5CA8: 8f6b7197  bl #0x4220ae4
0x065C5CAC: 800100b4  cbz x0, #0x65c5cdc
0x065C5CB0: e88900d0  adrp x8, #0x7703000
0x065C5CB4: 08dd41f9  ldr x8, [x8, #0x3b8]
0x065C5CB8: e2230091  add x2, sp, #8
0x065C5CBC: e10313aa  mov x1, x19
0x065C5CC0: 030140f9  ldr x3, [x8]
0x065C5CC4: 688b7b97  bl #0x44a8a64
0x065C5CC8: e00740f9  ldr x0, [sp, #8]
0x065C5CCC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x065C5CD0: fe5741a9  ldp x30, x21, [sp, #0x10]
0x065C5CD4: ffc30091  add sp, sp, #0x30
0x065C5CD8: c0035fd6  ret
0x065C5CDC: f4eb2e97  bl #0x3180cac

; RVA 0x65C5CE0 | public bool HasBoosterById(string itemId) { }
; bytes=124 sha256=c4aec74110a16f7061456f7455011c3a1ec99225d416b669824589de8c6e5e1d status=arm64_complete_bound indexed_start=True
0x065C5CE0: fe0f1df8  str x30, [sp, #-0x30]!
0x065C5CE4: f65701a9  stp x22, x21, [sp, #0x10]
0x065C5CE8: f44f02a9  stp x20, x19, [sp, #0x20]
0x065C5CEC: 15bb00d0  adrp x21, #0x7d27000
0x065C5CF0: f68900d0  adrp x22, #0x7703000
0x065C5CF4: a8366539  ldrb w8, [x21, #0x94d]
0x065C5CF8: d6da41f9  ldr x22, [x22, #0x3b0]
0x065C5CFC: f30301aa  mov x19, x1
0x065C5D00: f40300aa  mov x20, x0
0x065C5D04: 28010037  tbnz w8, #0, #0x65c5d28
0x065C5D08: e08900d0  adrp x0, #0x7703000
0x065C5D0C: 00d841f9  ldr x0, [x0, #0x3b0]
0x065C5D10: 42eb2e97  bl #0x3180a18
0x065C5D14: e08900d0  adrp x0, #0x7703000
0x065C5D18: 00e041f9  ldr x0, [x0, #0x3c0]
0x065C5D1C: 3feb2e97  bl #0x3180a18
0x065C5D20: 28008052  movz w8, #0x1
0x065C5D24: a8362539  strb w8, [x21, #0x94d]
0x065C5D28: c10240f9  ldr x1, [x22]
0x065C5D2C: e00314aa  mov x0, x20
0x065C5D30: 6d6b7197  bl #0x4220ae4
0x065C5D34: 200100b4  cbz x0, #0x65c5d58
0x065C5D38: e88900d0  adrp x8, #0x7703000
0x065C5D3C: 08e141f9  ldr x8, [x8, #0x3c0]
0x065C5D40: e10313aa  mov x1, x19
0x065C5D44: f44f42a9  ldp x20, x19, [sp, #0x20]
0x065C5D48: f65741a9  ldp x22, x21, [sp, #0x10]
0x065C5D4C: 020140f9  ldr x2, [x8]
0x065C5D50: fe0743f8  ldr x30, [sp], #0x30
0x065C5D54: 198b7b17  b #0x44a89b8
0x065C5D58: d5eb2e97  bl #0x3180cac

; RVA 0x65C5D5C | public bool get_HasBlockToProcess() { }
; bytes=196 sha256=7bb575a2bee1dba58d705a0cc653570acfe18ad1598bd3286b62b165065548fb status=arm64_complete_bound indexed_start=True
0x065C5D5C: fe0f1ef8  str x30, [sp, #-0x20]!
0x065C5D60: f44f01a9  stp x20, x19, [sp, #0x10]
0x065C5D64: 14bb00d0  adrp x20, #0x7d27000
0x065C5D68: 883a6539  ldrb w8, [x20, #0x94e]
0x065C5D6C: f30300aa  mov x19, x0
0x065C5D70: 28010037  tbnz w8, #0, #0x65c5d94
0x065C5D74: 408500d0  adrp x0, #0x766f000
0x065C5D78: 006c44f9  ldr x0, [x0, #0x8d8]
0x065C5D7C: 27eb2e97  bl #0x3180a18
0x065C5D80: 008900f0  adrp x0, #0x76e8000
0x065C5D84: 006044f9  ldr x0, [x0, #0x8c0]
0x065C5D88: 24eb2e97  bl #0x3180a18
0x065C5D8C: 28008052  movz w8, #0x1
0x065C5D90: 883a2539  strb w8, [x20, #0x94e]
0x065C5D94: 732a40f9  ldr x19, [x19, #0x50]
0x065C5D98: 330400b4  cbz x19, #0x65c5e1c
0x065C5D9C: 4a8500d0  adrp x10, #0x766f000
0x065C5DA0: 680240f9  ldr x8, [x19]
0x065C5DA4: 4a6d44f9  ldr x10, [x10, #0x8d8]
0x065C5DA8: 148900f0  adrp x20, #0x76e8000
0x065C5DAC: 095d4279  ldrh w9, [x8, #0x12e]
0x065C5DB0: 410140f9  ldr x1, [x10]
0x065C5DB4: 946244f9  ldr x20, [x20, #0x8c0]
0x065C5DB8: 290100b4  cbz x9, #0x65c5ddc
0x065C5DBC: 0a5940f9  ldr x10, [x8, #0xb0]
0x065C5DC0: 4a210091  add x10, x10, #8
0x065C5DC4: 4b815ff8  ldur x11, [x10, #-8]
0x065C5DC8: 7f0101eb  cmp x11, x1
0x065C5DCC: 00010054  b.eq #0x65c5dec
0x065C5DD0: 290500f1  subs x9, x9, #1
0x065C5DD4: 4a410091  add x10, x10, #0x10
0x065C5DD8: 61ffff54  b.ne #0x65c5dc4
0x065C5DDC: c2008052  movz w2, #0x6
0x065C5DE0: e00313aa  mov x0, x19
0x065C5DE4: 4b432e97  bl #0x3156b10
0x065C5DE8: 05000014  b #0x65c5dfc
0x065C5DEC: 490140b9  ldr w9, [x10]
0x065C5DF0: 29190011  add w9, w9, #6
0x065C5DF4: 08d1298b  add x8, x8, w9, sxtw #4
0x065C5DF8: 00e10491  add x0, x8, #0x138
0x065C5DFC: 080440a9  ldp x8, x1, [x0]
0x065C5E00: e00313aa  mov x0, x19
0x065C5E04: 00013fd6  blr x8
0x065C5E08: 810240f9  ldr x1, [x20]
0x065C5E0C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x065C5E10: e2031faa  mov x2, xzr
0x065C5E14: fe0742f8  ldr x30, [sp], #0x20
0x065C5E18: 9692bc17  b #0x54ea870
0x065C5E1C: a4eb2e97  bl #0x3180cac

; RVA 0x65C5E20 | public IBoosterItem GetBoosterByMergeItemId(string itemId) { }
; bytes=288 sha256=fdb681d5dde1d9a30e4b14a7f5469ad0ebfdb71e1e80cb7e2f5987f958e4e796 status=arm64_complete_bound indexed_start=True
0x065C5E20: fe67bca9  stp x30, x25, [sp, #-0x40]!
0x065C5E24: f85f01a9  stp x24, x23, [sp, #0x10]
0x065C5E28: f65702a9  stp x22, x21, [sp, #0x20]
0x065C5E2C: f44f03a9  stp x20, x19, [sp, #0x30]
0x065C5E30: 15bb00d0  adrp x21, #0x7d27000
0x065C5E34: f68900d0  adrp x22, #0x7703000
0x065C5E38: a83e6539  ldrb w8, [x21, #0x94f]
0x065C5E3C: d6e641f9  ldr x22, [x22, #0x3c8]
0x065C5E40: f40301aa  mov x20, x1
0x065C5E44: f30300aa  mov x19, x0
0x065C5E48: a8020037  tbnz w8, #0, #0x65c5e9c
0x065C5E4C: e08900d0  adrp x0, #0x7703000
0x065C5E50: 00e841f9  ldr x0, [x0, #0x3d0]
0x065C5E54: f1ea2e97  bl #0x3180a18
0x065C5E58: e08900d0  adrp x0, #0x7703000
0x065C5E5C: 00ec41f9  ldr x0, [x0, #0x3d8]
0x065C5E60: eeea2e97  bl #0x3180a18
0x065C5E64: e08900d0  adrp x0, #0x7703000
0x065C5E68: 00f041f9  ldr x0, [x0, #0x3e0]
0x065C5E6C: ebea2e97  bl #0x3180a18
0x065C5E70: e08900d0  adrp x0, #0x7703000
0x065C5E74: 00d841f9  ldr x0, [x0, #0x3b0]
0x065C5E78: e8ea2e97  bl #0x3180a18
0x065C5E7C: e08900d0  adrp x0, #0x7703000
0x065C5E80: 00f441f9  ldr x0, [x0, #0x3e8]
0x065C5E84: e5ea2e97  bl #0x3180a18
0x065C5E88: e08900d0  adrp x0, #0x7703000
0x065C5E8C: 00e441f9  ldr x0, [x0, #0x3c8]
0x065C5E90: e2ea2e97  bl #0x3180a18
0x065C5E94: 28008052  movz w8, #0x1
0x065C5E98: a83e2539  strb w8, [x21, #0x94f]
0x065C5E9C: c00240f9  ldr x0, [x22]
0x065C5EA0: 80eb2e97  bl #0x3180ca0
0x065C5EA4: e1031faa  mov x1, xzr
0x065C5EA8: f50300aa  mov x21, x0
0x065C5EAC: d451c497  bl #0x56da5fc
0x065C5EB0: 750400b4  cbz x21, #0x65c5f3c
0x065C5EB4: f68900d0  adrp x22, #0x7703000
0x065C5EB8: f78900d0  adrp x23, #0x7703000
0x065C5EBC: f88900d0  adrp x24, #0x7703000
0x065C5EC0: f98900d0  adrp x25, #0x7703000
0x065C5EC4: d6da41f9  ldr x22, [x22, #0x3b0]
0x065C5EC8: f7ee41f9  ldr x23, [x23, #0x3d8]
0x065C5ECC: 18f741f9  ldr x24, [x24, #0x3e8]
0x065C5ED0: 39eb41f9  ldr x25, [x25, #0x3d0]
0x065C5ED4: e00315aa  mov x0, x21
0x065C5ED8: 140c01f8  str x20, [x0, #0x10]!
0x065C5EDC: e10314aa  mov x1, x20
0x065C5EE0: b9ea2e97  bl #0x31809c4
0x065C5EE4: c10240f9  ldr x1, [x22]
0x065C5EE8: e00313aa  mov x0, x19
0x065C5EEC: fe6a7197  bl #0x4220ae4
0x065C5EF0: e80240f9  ldr x8, [x23]
0x065C5EF4: f30300aa  mov x19, x0
0x065C5EF8: e00308aa  mov x0, x8
0x065C5EFC: 69eb2e97  bl #0x3180ca0
0x065C5F00: 020340f9  ldr x2, [x24]
0x065C5F04: e10315aa  mov x1, x21
0x065C5F08: e3031faa  mov x3, xzr
0x065C5F0C: f40300aa  mov x20, x0
0x065C5F10: e51cb297  bl #0x524d2a4
0x065C5F14: 220340f9  ldr x2, [x25]
0x065C5F18: e00313aa  mov x0, x19
0x065C5F1C: e10314aa  mov x1, x20
0x065C5F20: cafa5997  bl #0x3c44a48
0x065C5F24: f44f43a9  ldp x20, x19, [sp, #0x30]
0x065C5F28: f65742a9  ldp x22, x21, [sp, #0x20]
0x065C5F2C: f85f41a9  ldp x24, x23, [sp, #0x10]
0x065C5F30: e00301aa  mov x0, x1
0x065C5F34: fe67c4a8  ldp x30, x25, [sp], #0x40
0x065C5F38: c0035fd6  ret
0x065C5F3C: 5ceb2e97  bl #0x3180cac

; RVA 0x65C5F48 | public AssetReferenceT<Sprite> GetRewardSpriteReference(string rewardType, string uniqueId) { }
; bytes=188 sha256=60e7fc3ff3548ba7e324a9b801a37083b3b4e8a51bb6f2b0574bdcaac8cf2334 status=arm64_complete_bound indexed_start=True
0x065C5F48: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x065C5F4C: f44f01a9  stp x20, x19, [sp, #0x10]
0x065C5F50: 15bb00d0  adrp x21, #0x7d27000
0x065C5F54: a8426539  ldrb w8, [x21, #0x950]
0x065C5F58: f30302aa  mov x19, x2
0x065C5F5C: f40300aa  mov x20, x0
0x065C5F60: c8000037  tbnz w8, #0, #0x65c5f78
0x065C5F64: c08500f0  adrp x0, #0x7680000
0x065C5F68: 004843f9  ldr x0, [x0, #0x690]
0x065C5F6C: abea2e97  bl #0x3180a18
0x065C5F70: 28008052  movz w8, #0x1
0x065C5F74: a8422539  strb w8, [x21, #0x950]
0x065C5F78: e00314aa  mov x0, x20
0x065C5F7C: e10313aa  mov x1, x19
0x065C5F80: 2fffff97  bl #0x65c5c3c
0x065C5F84: 800200b4  cbz x0, #0x65c5fd4
0x065C5F88: ca8500f0  adrp x10, #0x7680000
0x065C5F8C: 080040f9  ldr x8, [x0]
0x065C5F90: 4a4943f9  ldr x10, [x10, #0x690]
0x065C5F94: f30300aa  mov x19, x0
0x065C5F98: 095d4279  ldrh w9, [x8, #0x12e]
0x065C5F9C: 410140f9  ldr x1, [x10]
0x065C5FA0: 290100b4  cbz x9, #0x65c5fc4
0x065C5FA4: 0a5940f9  ldr x10, [x8, #0xb0]
0x065C5FA8: 4a210091  add x10, x10, #8
0x065C5FAC: 4b815ff8  ldur x11, [x10, #-8]
0x065C5FB0: 7f0101eb  cmp x11, x1
0x065C5FB4: 60010054  b.eq #0x65c5fe0
0x065C5FB8: 290500f1  subs x9, x9, #1
0x065C5FBC: 4a410091  add x10, x10, #0x10
0x065C5FC0: 61ffff54  b.ne #0x65c5fac
0x065C5FC4: 42008052  movz w2, #0x2
0x065C5FC8: e00313aa  mov x0, x19
0x065C5FCC: d1422e97  bl #0x3156b10
0x065C5FD0: 08000014  b #0x65c5ff0
0x065C5FD4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x065C5FD8: fe57c2a8  ldp x30, x21, [sp], #0x20
0x065C5FDC: c0035fd6  ret
0x065C5FE0: 490140b9  ldr w9, [x10]
0x065C5FE4: 29090011  add w9, w9, #2
0x065C5FE8: 08d1298b  add x8, x8, w9, sxtw #4
0x065C5FEC: 00e10491  add x0, x8, #0x138
0x065C5FF0: 020440a9  ldp x2, x1, [x0]
0x065C5FF4: e00313aa  mov x0, x19
0x065C5FF8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x065C5FFC: fe57c2a8  ldp x30, x21, [sp], #0x20
0x065C6000: 40001fd6  br x2

; RVA 0x65C6004 | protected override void ConfigurationAdded(IBoosterItem configuration) { }
; bytes=392 sha256=8c9fafded02f3d03748970d9d8b9069871e075cc3d2ccc5dd2aa82a36ade728f status=arm64_complete_bound indexed_start=True
0x065C6004: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x065C6008: f65701a9  stp x22, x21, [sp, #0x10]
0x065C600C: f44f02a9  stp x20, x19, [sp, #0x20]
0x065C6010: 16bb00b0  adrp x22, #0x7d27000
0x065C6014: f78900b0  adrp x23, #0x7703000
0x065C6018: 35890090  adrp x21, #0x76ea000
0x065C601C: c8466539  ldrb w8, [x22, #0x951]
0x065C6020: f7fa41f9  ldr x23, [x23, #0x3f0]
0x065C6024: b5ea46f9  ldr x21, [x21, #0xdd0]
0x065C6028: f30301aa  mov x19, x1
0x065C602C: f40300aa  mov x20, x0
0x065C6030: e8010037  tbnz w8, #0, #0x65c606c
0x065C6034: 20890090  adrp x0, #0x76ea000
0x065C6038: 00e846f9  ldr x0, [x0, #0xdd0]
0x065C603C: 77ea2e97  bl #0x3180a18
0x065C6040: c08500d0  adrp x0, #0x7680000
0x065C6044: 004843f9  ldr x0, [x0, #0x690]
0x065C6048: 74ea2e97  bl #0x3180a18
0x065C604C: 808500f0  adrp x0, #0x7679000
0x065C6050: 001044f9  ldr x0, [x0, #0x820]
0x065C6054: 71ea2e97  bl #0x3180a18
0x065C6058: e08900b0  adrp x0, #0x7703000
0x065C605C: 00f841f9  ldr x0, [x0, #0x3f0]
0x065C6060: 6eea2e97  bl #0x3180a18
0x065C6064: 28008052  movz w8, #0x1
0x065C6068: c8462539  strb w8, [x22, #0x951]
0x065C606C: e20240f9  ldr x2, [x23]
0x065C6070: e00314aa  mov x0, x20
0x065C6074: e10313aa  mov x1, x19
0x065C6078: 756b7197  bl #0x4220e4c
0x065C607C: a00240f9  ldr x0, [x21]
0x065C6080: 08eb2e97  bl #0x3180ca0
0x065C6084: e1031faa  mov x1, xzr
0x065C6088: f50300aa  mov x21, x0
0x065C608C: 59080494  bl #0x66c81f0
0x065C6090: d30700b4  cbz x19, #0x65c6188
0x065C6094: 8a8500f0  adrp x10, #0x7679000
0x065C6098: 680240f9  ldr x8, [x19]
0x065C609C: 4a1144f9  ldr x10, [x10, #0x820]
0x065C60A0: 095d4279  ldrh w9, [x8, #0x12e]
0x065C60A4: 410140f9  ldr x1, [x10]
0x065C60A8: 290100b4  cbz x9, #0x65c60cc
0x065C60AC: 0a5940f9  ldr x10, [x8, #0xb0]
0x065C60B0: 4a210091  add x10, x10, #8
0x065C60B4: 4b815ff8  ldur x11, [x10, #-8]
0x065C60B8: 7f0101eb  cmp x11, x1
0x065C60BC: 00010054  b.eq #0x65c60dc
0x065C60C0: 290500f1  subs x9, x9, #1
0x065C60C4: 4a410091  add x10, x10, #0x10
0x065C60C8: 61ffff54  b.ne #0x65c60b4
0x065C60CC: e00313aa  mov x0, x19
0x065C60D0: e2031f2a  mov w2, wzr
0x065C60D4: 8f422e97  bl #0x3156b10
0x065C60D8: 04000014  b #0x65c60e8
0x065C60DC: 490180b9  ldrsw x9, [x10]
0x065C60E0: 0811098b  add x8, x8, x9, lsl #4
0x065C60E4: 00e10491  add x0, x8, #0x138
0x065C60E8: 080440a9  ldp x8, x1, [x0]
0x065C60EC: e00313aa  mov x0, x19
0x065C60F0: 00013fd6  blr x8
0x065C60F4: b50400b4  cbz x21, #0x65c6188
0x065C60F8: d68500d0  adrp x22, #0x7680000
0x065C60FC: d64a43f9  ldr x22, [x22, #0x690]
0x065C6100: e10300aa  mov x1, x0
0x065C6104: e00315aa  mov x0, x21
0x065C6108: 018c06f8  str x1, [x0, #0x68]!
0x065C610C: 2eea2e97  bl #0x31809c4
0x065C6110: 680240f9  ldr x8, [x19]
0x065C6114: c10240f9  ldr x1, [x22]
0x065C6118: 095d4279  ldrh w9, [x8, #0x12e]
0x065C611C: 290100b4  cbz x9, #0x65c6140
0x065C6120: 0a5940f9  ldr x10, [x8, #0xb0]
0x065C6124: 4a210091  add x10, x10, #8
0x065C6128: 4b815ff8  ldur x11, [x10, #-8]
0x065C612C: 7f0101eb  cmp x11, x1
0x065C6130: 00010054  b.eq #0x65c6150
0x065C6134: 290500f1  subs x9, x9, #1
0x065C6138: 4a410091  add x10, x10, #0x10
0x065C613C: 61ffff54  b.ne #0x65c6128
0x065C6140: a2008052  movz w2, #0x5
0x065C6144: e00313aa  mov x0, x19
0x065C6148: 72422e97  bl #0x3156b10
0x065C614C: 05000014  b #0x65c6160
0x065C6150: 490140b9  ldr w9, [x10]
0x065C6154: 29150011  add w9, w9, #5
0x065C6158: 08d1298b  add x8, x8, w9, sxtw #4
0x065C615C: 00e10491  add x0, x8, #0x138
0x065C6160: 080840a9  ldp x8, x2, [x0]
0x065C6164: e00313aa  mov x0, x19
0x065C6168: e10315aa  mov x1, x21
0x065C616C: 00013fd6  blr x8
0x065C6170: e00314aa  mov x0, x20
0x065C6174: e10313aa  mov x1, x19
0x065C6178: f44f42a9  ldp x20, x19, [sp, #0x20]
0x065C617C: f65741a9  ldp x22, x21, [sp, #0x10]
0x065C6180: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x065C6184: 02000014  b #0x65c618c
0x065C6188: c9ea2e97  bl #0x3180cac

; RVA 0x65C618C | private void InjectDynamicTooltipContent(IBoosterItem configuration) { }
; bytes=680 sha256=7c55f126d563a0fc7f0de9658b20bb82a71118d6ed0bcdafd4c2d4347ad28357 status=arm64_complete_bound indexed_start=True
0x065C618C: ff0301d1  sub sp, sp, #0x40
0x065C6190: fe5f01a9  stp x30, x23, [sp, #0x10]
0x065C6194: f65702a9  stp x22, x21, [sp, #0x20]
0x065C6198: f44f03a9  stp x20, x19, [sp, #0x30]
0x065C619C: 16bb00b0  adrp x22, #0x7d27000
0x065C61A0: f58900b0  adrp x21, #0x7703000
0x065C61A4: c84a6539  ldrb w8, [x22, #0x952]
0x065C61A8: b5fe41f9  ldr x21, [x21, #0x3f8]
0x065C61AC: f40301aa  mov x20, x1
0x065C61B0: f30300aa  mov x19, x0
0x065C61B4: 68030037  tbnz w8, #0, #0x65c6220
0x065C61B8: e08900b0  adrp x0, #0x7703000
0x065C61BC: 000042f9  ldr x0, [x0, #0x400]
0x065C61C0: 16ea2e97  bl #0x3180a18
0x065C61C4: e08900b0  adrp x0, #0x7703000
0x065C61C8: 000442f9  ldr x0, [x0, #0x408]
0x065C61CC: 13ea2e97  bl #0x3180a18
0x065C61D0: 608500d0  adrp x0, #0x7674000
0x065C61D4: 009844f9  ldr x0, [x0, #0x930]
0x065C61D8: 10ea2e97  bl #0x3180a18
0x065C61DC: 808500f0  adrp x0, #0x7679000
0x065C61E0: 004443f9  ldr x0, [x0, #0x688]
0x065C61E4: 0dea2e97  bl #0x3180a18
0x065C61E8: 808500f0  adrp x0, #0x7679000
0x065C61EC: 00c443f9  ldr x0, [x0, #0x788]
0x065C61F0: 0aea2e97  bl #0x3180a18
0x065C61F4: e08900b0  adrp x0, #0x7703000
0x065C61F8: 000842f9  ldr x0, [x0, #0x410]
0x065C61FC: 07ea2e97  bl #0x3180a18
0x065C6200: e08900b0  adrp x0, #0x7703000
0x065C6204: 000c42f9  ldr x0, [x0, #0x418]
0x065C6208: 04ea2e97  bl #0x3180a18
0x065C620C: e08900b0  adrp x0, #0x7703000
0x065C6210: 00fc41f9  ldr x0, [x0, #0x3f8]
0x065C6214: 01ea2e97  bl #0x3180a18
0x065C6218: 28008052  movz w8, #0x1
0x065C621C: c84a2539  strb w8, [x22, #0x952]
0x065C6220: a00240f9  ldr x0, [x21]
0x065C6224: ff7f00a9  stp xzr, xzr, [sp]
0x065C6228: 9eea2e97  bl #0x3180ca0
0x065C622C: e1031faa  mov x1, xzr
0x065C6230: f50300aa  mov x21, x0
0x065C6234: f250c497  bl #0x56da5fc
0x065C6238: f40100b4  cbz x20, #0x65c6274
0x065C623C: 888500f0  adrp x8, #0x7679000
0x065C6240: 08c543f9  ldr x8, [x8, #0x788]
0x065C6244: 890240f9  ldr x9, [x20]
0x065C6248: 080140f9  ldr x8, [x8]
0x065C624C: 2bc14439  ldrb w11, [x9, #0x130]
0x065C6250: 0ac14439  ldrb w10, [x8, #0x130]
0x065C6254: 7f010a6b  cmp w11, w10
0x065C6258: e3000054  b.lo #0x65c6274
0x065C625C: 296540f9  ldr x9, [x9, #0xc8]
0x065C6260: 290d0a8b  add x9, x9, x10, lsl #3
0x065C6264: 29815ff8  ldur x9, [x9, #-8]
0x065C6268: 3f0108eb  cmp x9, x8
0x065C626C: 94029f9a  csel x20, x20, xzr, eq
0x065C6270: c0000054  b.eq #0x65c6288
0x065C6274: f44f43a9  ldp x20, x19, [sp, #0x30]
0x065C6278: f65742a9  ldp x22, x21, [sp, #0x20]
0x065C627C: fe5f41a9  ldp x30, x23, [sp, #0x10]
0x065C6280: ff030191  add sp, sp, #0x40
0x065C6284: c0035fd6  ret
0x065C6288: e10314aa  mov x1, x20
0x065C628C: 6c000094  bl #0x65c643c
0x065C6290: 150d00b4  cbz x21, #0x65c6430
0x065C6294: e10300aa  mov x1, x0
0x065C6298: e00315aa  mov x0, x21
0x065C629C: 010c01f8  str x1, [x0, #0x10]!
0x065C62A0: c9e92e97  bl #0x31809c4
0x065C62A4: 740c00b4  cbz x20, #0x65c6430
0x065C62A8: 962a40f9  ldr x22, [x20, #0x50]
0x065C62AC: 56feffb4  cbz x22, #0x65c6274
0x065C62B0: e88900b0  adrp x8, #0x7703000
0x065C62B4: 080542f9  ldr x8, [x8, #0x408]
0x065C62B8: 000140f9  ldr x0, [x8]
0x065C62BC: 79ea2e97  bl #0x3180ca0
0x065C62C0: e88900b0  adrp x8, #0x7703000
0x065C62C4: 080d42f9  ldr x8, [x8, #0x418]
0x065C62C8: e10315aa  mov x1, x21
0x065C62CC: e3031faa  mov x3, xzr
0x065C62D0: f70300aa  mov x23, x0
0x065C62D4: 020140f9  ldr x2, [x8]
0x065C62D8: 393fb297  bl #0x5255fbc
0x065C62DC: e88900b0  adrp x8, #0x7703000
0x065C62E0: 080142f9  ldr x8, [x8, #0x400]
0x065C62E4: e00316aa  mov x0, x22
0x065C62E8: e10317aa  mov x1, x23
0x065C62EC: 020140f9  ldr x2, [x8]
0x065C62F0: 90fb5997  bl #0x3c45130
0x065C62F4: 00fcffb4  cbz x0, #0x65c6274
0x065C62F8: 761a40f9  ldr x22, [x19, #0x30]
0x065C62FC: b60900b4  cbz x22, #0x65c6430
0x065C6300: 6a8500d0  adrp x10, #0x7674000
0x065C6304: c80240f9  ldr x8, [x22]
0x065C6308: 170c40f9  ldr x23, [x0, #0x18]
0x065C630C: 4a9944f9  ldr x10, [x10, #0x930]
0x065C6310: f50300aa  mov x21, x0
0x065C6314: 095d4279  ldrh w9, [x8, #0x12e]
0x065C6318: 410140f9  ldr x1, [x10]
0x065C631C: 290100b4  cbz x9, #0x65c6340
0x065C6320: 0a5940f9  ldr x10, [x8, #0xb0]
0x065C6324: 4a210091  add x10, x10, #8
0x065C6328: 4b815ff8  ldur x11, [x10, #-8]
0x065C632C: 7f0101eb  cmp x11, x1
0x065C6330: 00010054  b.eq #0x65c6350
0x065C6334: 290500f1  subs x9, x9, #1
0x065C6338: 4a410091  add x10, x10, #0x10
0x065C633C: 61ffff54  b.ne #0x65c6328
0x065C6340: 42008052  movz w2, #0x2
0x065C6344: e00316aa  mov x0, x22
0x065C6348: f2412e97  bl #0x3156b10
0x065C634C: 05000014  b #0x65c6360
0x065C6350: 490140b9  ldr w9, [x10]
0x065C6354: 29090011  add w9, w9, #2
0x065C6358: 08d1298b  add x8, x8, w9, sxtw #4
0x065C635C: 00e10491  add x0, x8, #0x138
0x065C6360: 081040a9  ldp x8, x4, [x0]
0x065C6364: 22008052  movz w2, #0x1
0x065C6368: e00316aa  mov x0, x22
0x065C636C: e10317aa  mov x1, x23
0x065C6370: e3031faa  mov x3, xzr
0x065C6374: 00013fd6  blr x8
0x065C6378: e00700f9  str x0, [sp, #8]
0x065C637C: a10a40f9  ldr x1, [x21, #0x10]
0x065C6380: e0230091  add x0, sp, #8
0x065C6384: e2031faa  mov x2, xzr
0x065C6388: cb1dbb97  bl #0x548dab4
0x065C638C: e98900b0  adrp x9, #0x7703000
0x065C6390: 682240f9  ldr x8, [x19, #0x40]
0x065C6394: 290942f9  ldr x9, [x9, #0x410]
0x065C6398: f50300aa  mov x21, x0
0x065C639C: e2030091  mov x2, sp
0x065C63A0: e00308aa  mov x0, x8
0x065C63A4: 230140f9  ldr x3, [x9]
0x065C63A8: e10314aa  mov x1, x20
0x065C63AC: 000c6097  bl #0x3dc93ac
0x065C63B0: 20f60736  tbz w0, #0, #0x65c6274
0x065C63B4: 731e40f9  ldr x19, [x19, #0x38]
0x065C63B8: d30300b4  cbz x19, #0x65c6430
0x065C63BC: 8a8500f0  adrp x10, #0x7679000
0x065C63C0: 680240f9  ldr x8, [x19]
0x065C63C4: f40340f9  ldr x20, [sp]
0x065C63C8: 4a4543f9  ldr x10, [x10, #0x688]
0x065C63CC: 095d4279  ldrh w9, [x8, #0x12e]
0x065C63D0: 410140f9  ldr x1, [x10]
0x065C63D4: 290100b4  cbz x9, #0x65c63f8
0x065C63D8: 0a5940f9  ldr x10, [x8, #0xb0]
0x065C63DC: 4a210091  add x10, x10, #8
0x065C63E0: 4b815ff8  ldur x11, [x10, #-8]
0x065C63E4: 7f0101eb  cmp x11, x1
0x065C63E8: 00010054  b.eq #0x65c6408
0x065C63EC: 290500f1  subs x9, x9, #1
0x065C63F0: 4a410091  add x10, x10, #0x10
0x065C63F4: 61ffff54  b.ne #0x65c63e0
0x065C63F8: e00313aa  mov x0, x19
0x065C63FC: e2031f2a  mov w2, wzr
0x065C6400: c4412e97  bl #0x3156b10
0x065C6404: 04000014  b #0x65c6414
0x065C6408: 490180b9  ldrsw x9, [x10]
0x065C640C: 0811098b  add x8, x8, x9, lsl #4
0x065C6410: 00e10491  add x0, x8, #0x138
0x065C6414: 081040a9  ldp x8, x4, [x0]
0x065C6418: e00313aa  mov x0, x19
0x065C641C: e10315aa  mov x1, x21
0x065C6420: e20314aa  mov x2, x20
0x065C6424: e3031f2a  mov w3, wzr
0x065C6428: 00013fd6  blr x8
0x065C642C: 92ffff17  b #0x65c6274
0x065C6430: 1fea2e97  bl #0x3180cac

; RVA 0x65C64D0 | public RemoteBoosterData GetRemoteActiveBoosterByUuid(string uuid) { }
; bytes=232 sha256=7a87ae3c04fb9b374576030d4317d582c6d0245ef8a37aee62163ee49faff6d6 status=arm64_complete_bound indexed_start=True
0x065C64D0: fe0f1cf8  str x30, [sp, #-0x40]!
0x065C64D4: f85f01a9  stp x24, x23, [sp, #0x10]
0x065C64D8: f65702a9  stp x22, x21, [sp, #0x20]
0x065C64DC: f44f03a9  stp x20, x19, [sp, #0x30]
0x065C64E0: 15bb00b0  adrp x21, #0x7d27000
0x065C64E4: f68900b0  adrp x22, #0x7703000
0x065C64E8: a84e6539  ldrb w8, [x21, #0x953]
0x065C64EC: d61a42f9  ldr x22, [x22, #0x430]
0x065C64F0: f40301aa  mov x20, x1
0x065C64F4: f30300aa  mov x19, x0
0x065C64F8: e8010037  tbnz w8, #0, #0x65c6534
0x065C64FC: 808500f0  adrp x0, #0x7679000
0x065C6500: 00e043f9  ldr x0, [x0, #0x7c0]
0x065C6504: 45e92e97  bl #0x3180a18
0x065C6508: 808500f0  adrp x0, #0x7679000
0x065C650C: 00e443f9  ldr x0, [x0, #0x7c8]
0x065C6510: 42e92e97  bl #0x3180a18
0x065C6514: e08900b0  adrp x0, #0x7703000
0x065C6518: 001c42f9  ldr x0, [x0, #0x438]
0x065C651C: 3fe92e97  bl #0x3180a18
0x065C6520: e08900b0  adrp x0, #0x7703000
0x065C6524: 001842f9  ldr x0, [x0, #0x430]
0x065C6528: 3ce92e97  bl #0x3180a18
0x065C652C: 28008052  movz w8, #0x1
0x065C6530: a84e2539  strb w8, [x21, #0x953]
0x065C6534: c00240f9  ldr x0, [x22]
0x065C6538: dae92e97  bl #0x3180ca0
0x065C653C: e1031faa  mov x1, xzr
0x065C6540: f50300aa  mov x21, x0
0x065C6544: 2e50c497  bl #0x56da5fc
0x065C6548: 750300b4  cbz x21, #0x65c65b4
0x065C654C: 968500f0  adrp x22, #0x7679000
0x065C6550: f78900b0  adrp x23, #0x7703000
0x065C6554: 988500f0  adrp x24, #0x7679000
0x065C6558: d6e643f9  ldr x22, [x22, #0x7c8]
0x065C655C: f71e42f9  ldr x23, [x23, #0x438]
0x065C6560: 18e343f9  ldr x24, [x24, #0x7c0]
0x065C6564: e00315aa  mov x0, x21
0x065C6568: 140c01f8  str x20, [x0, #0x10]!
0x065C656C: e10314aa  mov x1, x20
0x065C6570: 15e92e97  bl #0x31809c4
0x065C6574: c00240f9  ldr x0, [x22]
0x065C6578: 732e40f9  ldr x19, [x19, #0x58]
0x065C657C: c9e92e97  bl #0x3180ca0
0x065C6580: e20240f9  ldr x2, [x23]
0x065C6584: e10315aa  mov x1, x21
0x065C6588: e3031faa  mov x3, xzr
0x065C658C: f40300aa  mov x20, x0
0x065C6590: 8b3eb297  bl #0x5255fbc
0x065C6594: 020340f9  ldr x2, [x24]
0x065C6598: e00313aa  mov x0, x19
0x065C659C: e10314aa  mov x1, x20
0x065C65A0: f44f43a9  ldp x20, x19, [sp, #0x30]
0x065C65A4: f65742a9  ldp x22, x21, [sp, #0x20]
0x065C65A8: f85f41a9  ldp x24, x23, [sp, #0x10]
0x065C65AC: fe0744f8  ldr x30, [sp], #0x40
0x065C65B0: e0fa5917  b #0x3c45130
0x065C65B4: bee92e97  bl #0x3180cac

; RVA 0x65C65C0 | public bool IsBooster(ComponentBase component) { }
; bytes=96 sha256=7668e43d634dcacbf81194f4d62a16ef618cad1f693bd266eb583c287d8a0af6 status=arm64_complete_bound indexed_start=True
0x065C65C0: fe0f1ef8  str x30, [sp, #-0x20]!
0x065C65C4: f44f01a9  stp x20, x19, [sp, #0x10]
0x065C65C8: 14bb00b0  adrp x20, #0x7d27000
0x065C65CC: 88526539  ldrb w8, [x20, #0x954]
0x065C65D0: f30301aa  mov x19, x1
0x065C65D4: c8000037  tbnz w8, #0, #0x65c65ec
0x065C65D8: a0850090  adrp x0, #0x767a000
0x065C65DC: 009c44f9  ldr x0, [x0, #0x938]
0x065C65E0: 0ee92e97  bl #0x3180a18
0x065C65E4: 28008052  movz w8, #0x1
0x065C65E8: 88522539  strb w8, [x20, #0x954]
0x065C65EC: 930100b4  cbz x19, #0x65c661c
0x065C65F0: 600a40f9  ldr x0, [x19, #0x10]
0x065C65F4: 400100b4  cbz x0, #0x65c661c
0x065C65F8: a8850090  adrp x8, #0x767a000
0x065C65FC: 089d44f9  ldr x8, [x8, #0x938]
0x065C6600: 010140f9  ldr x1, [x8]
0x065C6604: e0695997  bl #0x3c20d84
0x065C6608: f44f41a9  ldp x20, x19, [sp, #0x10]
0x065C660C: 1f0000f1  cmp x0, #0
0x065C6610: e0079f1a  cset w0, ne
0x065C6614: fe0742f8  ldr x30, [sp], #0x20
0x065C6618: c0035fd6  ret
0x065C661C: a4e92e97  bl #0x3180cac

; RVA 0x65C643C | private string GetTooltipContentName(RemoteBoosterItem remoteBoosterItem) { }
; bytes=148 sha256=c4059a3c404d0721a4393b99cafd76340744ec63cff6a0bcaf166bf880058f53 status=arm64_complete_bound indexed_start=True
0x065C643C: fe0f1ef8  str x30, [sp, #-0x20]!
0x065C6440: f44f01a9  stp x20, x19, [sp, #0x10]
0x065C6444: 14bb00b0  adrp x20, #0x7d27000
0x065C6448: 88566539  ldrb w8, [x20, #0x955]
0x065C644C: f30301aa  mov x19, x1
0x065C6450: 88010037  tbnz w8, #0, #0x65c6480
0x065C6454: e08900b0  adrp x0, #0x7703000
0x065C6458: 001042f9  ldr x0, [x0, #0x420]
0x065C645C: 6fe92e97  bl #0x3180a18
0x065C6460: e08900b0  adrp x0, #0x7703000
0x065C6464: 001442f9  ldr x0, [x0, #0x428]
0x065C6468: 6ce92e97  bl #0x3180a18
0x065C646C: c0890090  adrp x0, #0x76fe000
0x065C6470: 00e441f9  ldr x0, [x0, #0x3c8]
0x065C6474: 69e92e97  bl #0x3180a18
0x065C6478: 28008052  movz w8, #0x1
0x065C647C: 88562539  strb w8, [x20, #0x955]
0x065C6480: 730200b4  cbz x19, #0x65c64cc
0x065C6484: e88900b0  adrp x8, #0x7703000
0x065C6488: 692e40f9  ldr x9, [x19, #0x58]
0x065C648C: 081542f9  ldr x8, [x8, #0x428]
0x065C6490: 690100b4  cbz x9, #0x65c64bc
0x065C6494: 291540b9  ldr w9, [x9, #0x14]
0x065C6498: 3f110071  cmp w9, #4
0x065C649C: 81000054  b.ne #0x65c64ac
0x065C64A0: e88900b0  adrp x8, #0x7703000
0x065C64A4: 081142f9  ldr x8, [x8, #0x420]
0x065C64A8: 05000014  b #0x65c64bc
0x065C64AC: ca890090  adrp x10, #0x76fe000
0x065C64B0: 4ae541f9  ldr x10, [x10, #0x3c8]
0x065C64B4: 3f150071  cmp w9, #5
0x065C64B8: 4801889a  csel x8, x10, x8, eq
0x065C64BC: 000140f9  ldr x0, [x8]
0x065C64C0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x065C64C4: fe0742f8  ldr x30, [sp], #0x20
0x065C64C8: c0035fd6  ret
0x065C64CC: f8e92e97  bl #0x3180cac

; RVA 0x65C6620 | public bool HasAnyBoosterPendingForActivation(BoosterType boosterType) { }
; bytes=224 sha256=35567fb39621ee3ecaae518a28c0b851fc0c02fbc0d199815c4b4884279b6073 status=arm64_complete_bound indexed_start=True
0x065C6620: fe0f1df8  str x30, [sp, #-0x30]!
0x065C6624: f65701a9  stp x22, x21, [sp, #0x10]
0x065C6628: f44f02a9  stp x20, x19, [sp, #0x20]
0x065C662C: 15bb00b0  adrp x21, #0x7d27000
0x065C6630: f68900b0  adrp x22, #0x7703000
0x065C6634: a85a6539  ldrb w8, [x21, #0x956]
0x065C6638: d62242f9  ldr x22, [x22, #0x440]
0x065C663C: f403012a  mov w20, w1
0x065C6640: f30300aa  mov x19, x0
0x065C6644: e8010037  tbnz w8, #0, #0x65c6680
0x065C6648: e08900b0  adrp x0, #0x7703000
0x065C664C: 002442f9  ldr x0, [x0, #0x448]
0x065C6650: f2e82e97  bl #0x3180a18
0x065C6654: e08900b0  adrp x0, #0x7703000
0x065C6658: 002842f9  ldr x0, [x0, #0x450]
0x065C665C: efe82e97  bl #0x3180a18
0x065C6660: e08900b0  adrp x0, #0x7703000
0x065C6664: 002c42f9  ldr x0, [x0, #0x458]
0x065C6668: ece82e97  bl #0x3180a18
0x065C666C: e08900b0  adrp x0, #0x7703000
0x065C6670: 002042f9  ldr x0, [x0, #0x440]
0x065C6674: e9e82e97  bl #0x3180a18
0x065C6678: 28008052  movz w8, #0x1
0x065C667C: a85a2539  strb w8, [x21, #0x956]
0x065C6680: c00240f9  ldr x0, [x22]
0x065C6684: 87e92e97  bl #0x3180ca0
0x065C6688: e1031faa  mov x1, xzr
0x065C668C: f50300aa  mov x21, x0
0x065C6690: db4fc497  bl #0x56da5fc
0x065C6694: 550300b4  cbz x21, #0x65c66fc
0x065C6698: e88900b0  adrp x8, #0x7703000
0x065C669C: 082942f9  ldr x8, [x8, #0x450]
0x065C66A0: b41200b9  str w20, [x21, #0x10]
0x065C66A4: f48900b0  adrp x20, #0x7703000
0x065C66A8: f68900b0  adrp x22, #0x7703000
0x065C66AC: 000140f9  ldr x0, [x8]
0x065C66B0: 733240f9  ldr x19, [x19, #0x60]
0x065C66B4: 942e42f9  ldr x20, [x20, #0x458]
0x065C66B8: d62642f9  ldr x22, [x22, #0x448]
0x065C66BC: 79e92e97  bl #0x3180ca0
0x065C66C0: 820240f9  ldr x2, [x20]
0x065C66C4: e10315aa  mov x1, x21
0x065C66C8: e3031faa  mov x3, xzr
0x065C66CC: f40300aa  mov x20, x0
0x065C66D0: 8d19b297  bl #0x524cd04
0x065C66D4: c20240f9  ldr x2, [x22]
0x065C66D8: e00313aa  mov x0, x19
0x065C66DC: e10314aa  mov x1, x20
0x065C66E0: 5ad35997  bl #0x3c3b448
0x065C66E4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x065C66E8: f65741a9  ldp x22, x21, [sp, #0x10]
0x065C66EC: 1f000071  cmp w0, #0
0x065C66F0: e0d79f1a  cset w0, gt
0x065C66F4: fe0743f8  ldr x30, [sp], #0x30
0x065C66F8: c0035fd6  ret
0x065C66FC: 6ce92e97  bl #0x3180cac

; RVA 0x65C6708 | public void AddBoosterToPendingActivationList(string uuid, BoosterType boosterType) { }
; bytes=328 sha256=7b42c069ce33705062b6105baeaba77df52b708566fb1b0b9fbf351242f31aea status=arm64_complete_bound indexed_start=True
0x065C6708: ff4301d1  sub sp, sp, #0x50
0x065C670C: fe1300f9  str x30, [sp, #0x20]
0x065C6710: f65703a9  stp x22, x21, [sp, #0x30]
0x065C6714: f44f04a9  stp x20, x19, [sp, #0x40]
0x065C6718: 16bb00b0  adrp x22, #0x7d27000
0x065C671C: c85e6539  ldrb w8, [x22, #0x957]
0x065C6720: f403022a  mov w20, w2
0x065C6724: f30301aa  mov x19, x1
0x065C6728: f50300aa  mov x21, x0
0x065C672C: a8020037  tbnz w8, #0, #0x65c6780
0x065C6730: 208500f0  adrp x0, #0x766d000
0x065C6734: 006c46f9  ldr x0, [x0, #0xcd8]
0x065C6738: b8e82e97  bl #0x3180a18
0x065C673C: e08900b0  adrp x0, #0x7703000
0x065C6740: 003042f9  ldr x0, [x0, #0x460]
0x065C6744: b5e82e97  bl #0x3180a18
0x065C6748: 808500f0  adrp x0, #0x7679000
0x065C674C: 007844f9  ldr x0, [x0, #0x8f0]
0x065C6750: b2e82e97  bl #0x3180a18
0x065C6754: e08900b0  adrp x0, #0x7703000
0x065C6758: 003442f9  ldr x0, [x0, #0x468]
0x065C675C: afe82e97  bl #0x3180a18
0x065C6760: e08900b0  adrp x0, #0x7703000
0x065C6764: 003842f9  ldr x0, [x0, #0x470]
0x065C6768: ace82e97  bl #0x3180a18
0x065C676C: e08900b0  adrp x0, #0x7703000
0x065C6770: 003c42f9  ldr x0, [x0, #0x478]
0x065C6774: a9e82e97  bl #0x3180a18
0x065C6778: 28008052  movz w8, #0x1
0x065C677C: c85e2539  strb w8, [x22, #0x957]
0x065C6780: a03240f9  ldr x0, [x21, #0x60]
0x065C6784: 400600b4  cbz x0, #0x65c684c
0x065C6788: e88900b0  adrp x8, #0x7703000
0x065C678C: 083142f9  ldr x8, [x8, #0x460]
0x065C6790: e10313aa  mov x1, x19
0x065C6794: e203142a  mov w2, w20
0x065C6798: 030140f9  ldr x3, [x8]
0x065C679C: 02c4a397  bl #0x4eb77a4
0x065C67A0: c0040037  tbnz w0, #0, #0x65c6838
0x065C67A4: e88900b0  adrp x8, #0x7703000
0x065C67A8: 083542f9  ldr x8, [x8, #0x468]
0x065C67AC: e10313aa  mov x1, x19
0x065C67B0: e2031faa  mov x2, xzr
0x065C67B4: 000140f9  ldr x0, [x8]
0x065C67B8: fa8fbc97  bl #0x54ea7a0
0x065C67BC: 888500f0  adrp x8, #0x7679000
0x065C67C0: 087944f9  ldr x8, [x8, #0x8f0]
0x065C67C4: f30300aa  mov x19, x0
0x065C67C8: 09008092  movn x9, #0
0x065C67CC: 4a068052  movz w10, #0x32
0x065C67D0: 080140f9  ldr x8, [x8]
0x065C67D4: e0230091  add x0, sp, #8
0x065C67D8: e1031faa  mov x1, xzr
0x065C67DC: ea1b00b9  str w10, [sp, #0x18]
0x065C67E0: e8a700a9  stp x8, x9, [sp, #8]
0x065C67E4: c01bc497  bl #0x56cd6e4
0x065C67E8: 288500f0  adrp x8, #0x766d000
0x065C67EC: 086d46f9  ldr x8, [x8, #0xcd8]
0x065C67F0: f40300aa  mov x20, x0
0x065C67F4: 080140f9  ldr x8, [x8]
0x065C67F8: 09e140b9  ldr w9, [x8, #0xe0]
0x065C67FC: 69000035  cbnz w9, #0x65c6808
0x065C6800: e00308aa  mov x0, x8
0x065C6804: e2e82e97  bl #0x3180b8c
0x065C6808: e88900b0  adrp x8, #0x7703000
0x065C680C: e98900b0  adrp x9, #0x7703000
0x065C6810: 083d42f9  ldr x8, [x8, #0x478]
0x065C6814: 293942f9  ldr x9, [x9, #0x470]
0x065C6818: e00313aa  mov x0, x19
0x065C681C: e10314aa  mov x1, x20
0x065C6820: 030140f9  ldr x3, [x8]
0x065C6824: 240140f9  ldr x4, [x9]
0x065C6828: e2031faa  mov x2, xzr
0x065C682C: e5031faa  mov x5, xzr
0x065C6830: e6031faa  mov x6, xzr
0x065C6834: 0097ba97  bl #0x546c434
0x065C6838: f44f44a9  ldp x20, x19, [sp, #0x40]
0x065C683C: f65743a9  ldp x22, x21, [sp, #0x30]
0x065C6840: fe1340f9  ldr x30, [sp, #0x20]
0x065C6844: ff430191  add sp, sp, #0x50
0x065C6848: c0035fd6  ret
0x065C684C: 18e92e97  bl #0x3180cac

; RVA 0x65C6850 | public void .ctor() { }
; bytes=520 sha256=0f14a10acc87a91568747354de36540d120745f81c10105aa508a49a5fdd21fb status=arm64_complete_bound indexed_start=True
0x065C6850: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x065C6854: fc6f01a9  stp x28, x27, [sp, #0x10]
0x065C6858: fa6702a9  stp x26, x25, [sp, #0x20]
0x065C685C: f85f03a9  stp x24, x23, [sp, #0x30]
0x065C6860: f65704a9  stp x22, x21, [sp, #0x40]
0x065C6864: f44f05a9  stp x20, x19, [sp, #0x50]
0x065C6868: 15bb00b0  adrp x21, #0x7d27000
0x065C686C: f68900b0  adrp x22, #0x7703000
0x065C6870: f48900b0  adrp x20, #0x7703000
0x065C6874: fd8900b0  adrp x29, #0x7703000
0x065C6878: fc8900b0  adrp x28, #0x7703000
0x065C687C: 7b840090  adrp x27, #0x7652000
0x065C6880: 7a840090  adrp x26, #0x7652000
0x065C6884: f98900b0  adrp x25, #0x7703000
0x065C6888: f88900b0  adrp x24, #0x7703000
0x065C688C: f78900b0  adrp x23, #0x7703000
0x065C6890: d69640f9  ldr x22, [x22, #0x128]
0x065C6894: 944242f9  ldr x20, [x20, #0x480]
0x065C6898: bd4742f9  ldr x29, [x29, #0x488]
0x065C689C: 9c4b42f9  ldr x28, [x28, #0x490]
0x065C68A0: 7b4b46f9  ldr x27, [x27, #0xc90]
0x065C68A4: 5a4746f9  ldr x26, [x26, #0xc88]
0x065C68A8: a8626539  ldrb w8, [x21, #0x958]
0x065C68AC: 394f42f9  ldr x25, [x25, #0x498]
0x065C68B0: 185342f9  ldr x24, [x24, #0x4a0]
0x065C68B4: f75642f9  ldr x23, [x23, #0x4a8]
0x065C68B8: f30300aa  mov x19, x0
0x065C68BC: 88040037  tbnz w8, #0, #0x65c694c
0x065C68C0: e08900b0  adrp x0, #0x7703000
0x065C68C4: 004842f9  ldr x0, [x0, #0x490]
0x065C68C8: 54e82e97  bl #0x3180a18
0x065C68CC: e08900b0  adrp x0, #0x7703000
0x065C68D0: 004442f9  ldr x0, [x0, #0x488]
0x065C68D4: 51e82e97  bl #0x3180a18
0x065C68D8: 60840090  adrp x0, #0x7652000
0x065C68DC: 004446f9  ldr x0, [x0, #0xc88]
0x065C68E0: 4ee82e97  bl #0x3180a18
0x065C68E4: 60840090  adrp x0, #0x7652000
0x065C68E8: 004846f9  ldr x0, [x0, #0xc90]
0x065C68EC: 4be82e97  bl #0x3180a18
0x065C68F0: e08900b0  adrp x0, #0x7703000
0x065C68F4: 004042f9  ldr x0, [x0, #0x480]
0x065C68F8: 48e82e97  bl #0x3180a18
0x065C68FC: e08900b0  adrp x0, #0x7703000
0x065C6900: 005042f9  ldr x0, [x0, #0x4a0]
0x065C6904: 45e82e97  bl #0x3180a18
0x065C6908: e08900b0  adrp x0, #0x7703000
0x065C690C: 005842f9  ldr x0, [x0, #0x4b0]
0x065C6910: 42e82e97  bl #0x3180a18
0x065C6914: e08900b0  adrp x0, #0x7703000
0x065C6918: 004c42f9  ldr x0, [x0, #0x498]
0x065C691C: 3fe82e97  bl #0x3180a18
0x065C6920: e08900b0  adrp x0, #0x7703000
0x065C6924: 009440f9  ldr x0, [x0, #0x128]
0x065C6928: 3ce82e97  bl #0x3180a18
0x065C692C: e08900b0  adrp x0, #0x7703000
0x065C6930: 005442f9  ldr x0, [x0, #0x4a8]
0x065C6934: 39e82e97  bl #0x3180a18
0x065C6938: e08900b0  adrp x0, #0x7703000
0x065C693C: 005c42f9  ldr x0, [x0, #0x4b8]
0x065C6940: 36e82e97  bl #0x3180a18
0x065C6944: 28008052  movz w8, #0x1
0x065C6948: a8622539  strb w8, [x21, #0x958]
0x065C694C: c00240f9  ldr x0, [x22]
0x065C6950: d4e82e97  bl #0x3180ca0
0x065C6954: 810240f9  ldr x1, [x20]
0x065C6958: f40300aa  mov x20, x0
0x065C695C: b7f46997  bl #0x4043c38
0x065C6960: e00313aa  mov x0, x19
0x065C6964: 148c05f8  str x20, [x0, #0x58]!
0x065C6968: e10314aa  mov x1, x20
0x065C696C: 16e82e97  bl #0x31809c4
0x065C6970: a00340f9  ldr x0, [x29]
0x065C6974: cbe82e97  bl #0x3180ca0
0x065C6978: 810340f9  ldr x1, [x28]
0x065C697C: f40300aa  mov x20, x0
0x065C6980: 3fb9a397  bl #0x4eb4e7c
0x065C6984: e00313aa  mov x0, x19
0x065C6988: 140c06f8  str x20, [x0, #0x60]!
0x065C698C: e10314aa  mov x1, x20
0x065C6990: 0de82e97  bl #0x31809c4
0x065C6994: 600340f9  ldr x0, [x27]
0x065C6998: c2e82e97  bl #0x3180ca0
0x065C699C: 410340f9  ldr x1, [x26]
0x065C69A0: f40300aa  mov x20, x0
0x065C69A4: 27e5b397  bl #0x52bfe40
0x065C69A8: e00313aa  mov x0, x19
0x065C69AC: 148c06f8  str x20, [x0, #0x68]!
0x065C69B0: e10314aa  mov x1, x20
0x065C69B4: 04e82e97  bl #0x31809c4
0x065C69B8: 600340f9  ldr x0, [x27]
0x065C69BC: b9e82e97  bl #0x3180ca0
0x065C69C0: 410340f9  ldr x1, [x26]
0x065C69C4: f40300aa  mov x20, x0
0x065C69C8: 1ee5b397  bl #0x52bfe40
0x065C69CC: e00313aa  mov x0, x19
0x065C69D0: 148c07f8  str x20, [x0, #0x78]!
0x065C69D4: e10314aa  mov x1, x20
0x065C69D8: fbe72e97  bl #0x31809c4
0x065C69DC: 200340f9  ldr x0, [x25]
0x065C69E0: b0e82e97  bl #0x3180ca0
0x065C69E4: 010340f9  ldr x1, [x24]
0x065C69E8: f40300aa  mov x20, x0
0x065C69EC: 93f46997  bl #0x4043c38
0x065C69F0: e00313aa  mov x0, x19
0x065C69F4: 148c08f8  str x20, [x0, #0x88]!
0x065C69F8: e10314aa  mov x1, x20
0x065C69FC: f2e72e97  bl #0x31809c4
0x065C6A00: e00240f9  ldr x0, [x23]
0x065C6A04: a7e82e97  bl #0x3180ca0
0x065C6A08: e88900b0  adrp x8, #0x7703000
0x065C6A0C: 085942f9  ldr x8, [x8, #0x4b0]
0x065C6A10: f40300aa  mov x20, x0
0x065C6A14: 010140f9  ldr x1, [x8]
0x065C6A18: 88f46997  bl #0x4043c38
0x065C6A1C: e00313aa  mov x0, x19
0x065C6A20: 148c09f8  str x20, [x0, #0x98]!
0x065C6A24: e10314aa  mov x1, x20
0x065C6A28: e7e72e97  bl #0x31809c4
0x065C6A2C: e88900b0  adrp x8, #0x7703000
0x065C6A30: 085d42f9  ldr x8, [x8, #0x4b8]
0x065C6A34: e00313aa  mov x0, x19
0x065C6A38: f44f45a9  ldp x20, x19, [sp, #0x50]
0x065C6A3C: f65744a9  ldp x22, x21, [sp, #0x40]
0x065C6A40: 010140f9  ldr x1, [x8]
0x065C6A44: f85f43a9  ldp x24, x23, [sp, #0x30]
0x065C6A48: fa6742a9  ldp x26, x25, [sp, #0x20]
0x065C6A4C: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x065C6A50: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x065C6A54: 00697117  b #0x4220e54

; Generic instantiation from Il2CppDumper script.json | RVA 0x3BDAF14 | Merger.Boosters.Models.BoosterModel$$GetBoosterProgress<object>
; native signature: Il2CppObject* Merger_Boosters_Models_BoosterModel__GetBoosterProgress_object_ (Merger_Boosters_Models_BoosterModel_o* __this, System_String_o* uniqueId, const MethodInfo_3BDAF14* method);
; bytes=340 sha256=4ec39ee250ff8150b8b70d371c83fe70a0dbeee2be88c3fc43ae42a2305adeec status=arm64_complete_bound indexed_start=True
0x03BDAF14: fe0f1df8  str x30, [sp, #-0x30]!
0x03BDAF18: f65701a9  stp x22, x21, [sp, #0x10]
0x03BDAF1C: f44f02a9  stp x20, x19, [sp, #0x20]
0x03BDAF20: 481c40f9  ldr x8, [x2, #0x38]
0x03BDAF24: f30302aa  mov x19, x2
0x03BDAF28: f50301aa  mov x21, x1
0x03BDAF2C: f40300aa  mov x20, x0
0x03BDAF30: 880100b5  cbnz x8, #0x3bdaf60
0x03BDAF34: e0d401f0  adrp x0, #0x7679000
0x03BDAF38: 00e043f9  ldr x0, [x0, #0x7c0]
0x03BDAF3C: b796d697  bl #0x3180a18
0x03BDAF40: e0d401f0  adrp x0, #0x7679000
0x03BDAF44: 00e443f9  ldr x0, [x0, #0x7c8]
0x03BDAF48: b496d697  bl #0x3180a18
0x03BDAF4C: 681e40f9  ldr x8, [x19, #0x38]
0x03BDAF50: 880000b5  cbnz x8, #0x3bdaf60
0x03BDAF54: e00313aa  mov x0, x19
0x03BDAF58: 48eed597  bl #0x3156878
0x03BDAF5C: 681e40f9  ldr x8, [x19, #0x38]
0x03BDAF60: 000140f9  ldr x0, [x8]
0x03BDAF64: 08d44439  ldrb w8, [x0, #0x135]
0x03BDAF68: 48000037  tbnz w8, #0, #0x3bdaf70
0x03BDAF6C: 2ceed597  bl #0x315681c
0x03BDAF70: 4c97d697  bl #0x3180ca0
0x03BDAF74: 681e40f9  ldr x8, [x19, #0x38]
0x03BDAF78: f60300aa  mov x22, x0
0x03BDAF7C: 010540f9  ldr x1, [x8, #8]
0x03BDAF80: 0cd23c94  bl #0x4b0f7b0
0x03BDAF84: 160700b4  cbz x22, #0x3bdb064
0x03BDAF88: e00316aa  mov x0, x22
0x03BDAF8C: 150c01f8  str x21, [x0, #0x10]!
0x03BDAF90: e10315aa  mov x1, x21
0x03BDAF94: 8c96d697  bl #0x31809c4
0x03BDAF98: e8d401f0  adrp x8, #0x7679000
0x03BDAF9C: 942e40f9  ldr x20, [x20, #0x58]
0x03BDAFA0: 08e543f9  ldr x8, [x8, #0x7c8]
0x03BDAFA4: 000140f9  ldr x0, [x8]
0x03BDAFA8: 3e97d697  bl #0x3180ca0
0x03BDAFAC: 681e40f9  ldr x8, [x19, #0x38]
0x03BDAFB0: e10316aa  mov x1, x22
0x03BDAFB4: e3031faa  mov x3, xzr
0x03BDAFB8: f50300aa  mov x21, x0
0x03BDAFBC: 020940f9  ldr x2, [x8, #0x10]
0x03BDAFC0: ffeb5994  bl #0x5255fbc
0x03BDAFC4: e8d401f0  adrp x8, #0x7679000
0x03BDAFC8: 08e143f9  ldr x8, [x8, #0x7c0]
0x03BDAFCC: e00314aa  mov x0, x20
0x03BDAFD0: e10315aa  mov x1, x21
0x03BDAFD4: 020140f9  ldr x2, [x8]
0x03BDAFD8: 56a80194  bl #0x3c45130
0x03BDAFDC: 600000b4  cbz x0, #0x3bdafe8
0x03BDAFE0: 143440f9  ldr x20, [x0, #0x68]
0x03BDAFE4: 02000014  b #0x3bdafec
0x03BDAFE8: f4031faa  mov x20, xzr
0x03BDAFEC: 681e40f9  ldr x8, [x19, #0x38]
0x03BDAFF0: 010d40f9  ldr x1, [x8, #0x18]
0x03BDAFF4: 28d44439  ldrb w8, [x1, #0x135]
0x03BDAFF8: 88000037  tbnz w8, #0, #0x3bdb008
0x03BDAFFC: e00301aa  mov x0, x1
0x03BDB000: 07eed597  bl #0x315681c
0x03BDB004: e10300aa  mov x1, x0
0x03BDB008: e00314aa  mov x0, x20
0x03BDB00C: e196d697  bl #0x3180b90
0x03BDB010: 681e40f9  ldr x8, [x19, #0x38]
0x03BDB014: f40300aa  mov x20, x0
0x03BDB018: 130d40f9  ldr x19, [x8, #0x18]
0x03BDB01C: 68d64439  ldrb w8, [x19, #0x135]
0x03BDB020: 88000037  tbnz w8, #0, #0x3bdb030
0x03BDB024: e00313aa  mov x0, x19
0x03BDB028: fdedd597  bl #0x315681c
0x03BDB02C: f30300aa  mov x19, x0
0x03BDB030: 140100b4  cbz x20, #0x3bdb050
0x03BDB034: e00314aa  mov x0, x20
0x03BDB038: e10313aa  mov x1, x19
0x03BDB03C: d596d697  bl #0x3180b90
0x03BDB040: a00000b5  cbnz x0, #0x3bdb054
0x03BDB044: e00314aa  mov x0, x20
0x03BDB048: e10313aa  mov x1, x19
0x03BDB04C: ff97d697  bl #0x3181048
0x03BDB050: e0031faa  mov x0, xzr
0x03BDB054: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03BDB058: f65741a9  ldp x22, x21, [sp, #0x10]
0x03BDB05C: fe0743f8  ldr x30, [sp], #0x30
0x03BDB060: c0035fd6  ret
0x03BDB064: 1297d697  bl #0x3180cac

