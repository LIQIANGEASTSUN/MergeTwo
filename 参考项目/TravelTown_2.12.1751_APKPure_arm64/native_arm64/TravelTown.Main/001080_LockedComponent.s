; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1080 MergeEngine.ECS.Components.Items.LockedComponent
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x68FD528 | public override string get_ComponentKey() { }
; bytes=64 sha256=296ef12c12433eb0d66d224b50dac3ebe6b210c58f806b8f5f183ce9f71ec0b0 status=arm64_complete_bound indexed_start=True
0x068FD528: fe0f1ef8  str x30, [sp, #-0x20]!
0x068FD52C: f44f01a9  stp x20, x19, [sp, #0x10]
0x068FD530: 73a10090  adrp x19, #0x7d29000
0x068FD534: 146e00b0  adrp x20, #0x76be000
0x068FD538: 68ca6239  ldrb w8, [x19, #0x8b2]
0x068FD53C: 94de44f9  ldr x20, [x20, #0x9b8]
0x068FD540: c8000037  tbnz w8, #0, #0x68fd558
0x068FD544: 006e00b0  adrp x0, #0x76be000
0x068FD548: 00dc44f9  ldr x0, [x0, #0x9b8]
0x068FD54C: 330d2297  bl #0x3180a18
0x068FD550: 28008052  movz w8, #0x1
0x068FD554: 68ca2239  strb w8, [x19, #0x8b2]
0x068FD558: 800240f9  ldr x0, [x20]
0x068FD55C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x068FD560: fe0742f8  ldr x30, [sp], #0x20
0x068FD564: c0035fd6  ret

; RVA 0x68FD568 | public bool get_Locked() { }
; bytes=8 sha256=b5f756a94e2a4fd04c581b81886364460d3cd7c165e6a51d5f3195a9439a10c4 status=arm64_complete_bound indexed_start=True
0x068FD568: 00c04039  ldrb w0, [x0, #0x30]
0x068FD56C: c0035fd6  ret

; RVA 0x68FD570 | public void set_Locked(bool value) { }
; bytes=12 sha256=a249c3c061ec9da6b813e9f7669c4eee4712ae82443eca5c2d67c54d32999205 status=arm64_complete_bound indexed_start=True
0x068FD570: 28000012  and w8, w1, #1
0x068FD574: 08c00039  strb w8, [x0, #0x30]
0x068FD578: c0035fd6  ret

; RVA 0x68FD57C | public bool get_Bubbled() { }
; bytes=8 sha256=6a3cb8c4f92b5961effe3a4ee16cd73e98d1d0f94c954c6b45545a35177d46d8 status=arm64_complete_bound indexed_start=True
0x068FD57C: 00c44039  ldrb w0, [x0, #0x31]
0x068FD580: c0035fd6  ret

; RVA 0x68FD584 | public void set_Bubbled(bool value) { }
; bytes=12 sha256=2399f9d12d43e9d2bcf21d8ce2492dc5f3414cbe7d9899b246726f7cfec62d53 status=arm64_complete_bound indexed_start=True
0x068FD584: 28000012  and w8, w1, #1
0x068FD588: 08c40039  strb w8, [x0, #0x31]
0x068FD58C: c0035fd6  ret

; RVA 0x68FD590 | public bool get_Meteor() { }
; bytes=8 sha256=c1419eee0ff52e9dba03c5538f1a31a089d36861efdb5b2bfebc9abde36cbe25 status=arm64_complete_bound indexed_start=True
0x068FD590: 00c84039  ldrb w0, [x0, #0x32]
0x068FD594: c0035fd6  ret

; RVA 0x68FD598 | public void set_Meteor(bool value) { }
; bytes=12 sha256=2cee55a0d1b2bf0ea9920ef638d210fb180d96d3bde1dfcdf21736fe93804423 status=arm64_complete_bound indexed_start=True
0x068FD598: 28000012  and w8, w1, #1
0x068FD59C: 08c80039  strb w8, [x0, #0x32]
0x068FD5A0: c0035fd6  ret

; RVA 0x68FD5A4 | public bool get_Boxed() { }
; bytes=8 sha256=ee9b426fde5021c6109a49a5631f999c41c69a207238febc6e91fad8eb29798a status=arm64_complete_bound indexed_start=True
0x068FD5A4: 00cc4039  ldrb w0, [x0, #0x33]
0x068FD5A8: c0035fd6  ret

; RVA 0x68FD5AC | public void set_Boxed(bool value) { }
; bytes=12 sha256=6f08c2e1a18de44e324c67694cb7158aa6f2934d54330e990ae1c00642ed4bbd status=arm64_complete_bound indexed_start=True
0x068FD5AC: 28000012  and w8, w1, #1
0x068FD5B0: 08cc0039  strb w8, [x0, #0x33]
0x068FD5B4: c0035fd6  ret

; RVA 0x68FD5B8 | public UnboxingType get_UnboxingType() { }
; bytes=8 sha256=96907067fcf1f0f92a64ad5b4f6ac39cae65f2312486c4abdf79e771a70fbafe status=arm64_complete_bound indexed_start=True
0x068FD5B8: 003440b9  ldr w0, [x0, #0x34]
0x068FD5BC: c0035fd6  ret

; RVA 0x68FD5C0 | public void set_UnboxingType(UnboxingType value) { }
; bytes=8 sha256=bec88c0b626323e3656f327f9dbd2aef67c785ce4650404cbbf20ffdd9b27c95 status=arm64_complete_bound indexed_start=True
0x068FD5C0: 013400b9  str w1, [x0, #0x34]
0x068FD5C4: c0035fd6  ret

; RVA 0x68FD5C8 | public int get_InteractionAmount() { }
; bytes=8 sha256=70b6226cdde2aa2e19c7cef1812dc4f3cd14b63d0b93bca2e70ec7210fcf097f status=arm64_complete_bound indexed_start=True
0x068FD5C8: 003840b9  ldr w0, [x0, #0x38]
0x068FD5CC: c0035fd6  ret

; RVA 0x68FD5D0 | public void set_InteractionAmount(int value) { }
; bytes=8 sha256=23e2a2078bd41e84b46906ac0e13db3743cb4f934a32dac307e79ba21bc620b5 status=arm64_complete_bound indexed_start=True
0x068FD5D0: 013800b9  str w1, [x0, #0x38]
0x068FD5D4: c0035fd6  ret

; RVA 0x68FD5D8 | public int get_TotalInteractionAmount() { }
; bytes=8 sha256=000aafdc5a97b4392372a9ae2d9fd69232aaea89262cbc5e5afdb2edc3d7b4df status=arm64_complete_bound indexed_start=True
0x068FD5D8: 003c40b9  ldr w0, [x0, #0x3c]
0x068FD5DC: c0035fd6  ret

; RVA 0x68FD5E0 | public void set_TotalInteractionAmount(int value) { }
; bytes=8 sha256=4fac537ea6bc8e97f8b5c51e454024ad9de91913ae7f74b263050e5e5e7c87ef status=arm64_complete_bound indexed_start=True
0x068FD5E0: 013c00b9  str w1, [x0, #0x3c]
0x068FD5E4: c0035fd6  ret

; RVA 0x68FD5E8 | public PlayerResourceEnum get_InteractionResource() { }
; bytes=8 sha256=2794764ead4f4e46816d67d9f7faad262cb54d7a0b7a39d555c30024db08d1e8 status=arm64_complete_bound indexed_start=True
0x068FD5E8: 004040b9  ldr w0, [x0, #0x40]
0x068FD5EC: c0035fd6  ret

; RVA 0x68FD5F0 | public void set_InteractionResource(PlayerResourceEnum value) { }
; bytes=8 sha256=99126ca7b87d662b9b483045ef27bde13b4525b29d199b0dd709fac17bf71da4 status=arm64_complete_bound indexed_start=True
0x068FD5F0: 014000b9  str w1, [x0, #0x40]
0x068FD5F4: c0035fd6  ret

; RVA 0x68FD5F8 | public bool get_LockedByLevel() { }
; bytes=16 sha256=f275a1dbe7825c08da90a5fd8d16a01cb5194efe61b19c185c79b60f98580568 status=arm64_complete_bound indexed_start=True
0x068FD5F8: 084440b9  ldr w8, [x0, #0x44]
0x068FD5FC: 1f010071  cmp w8, #0
0x068FD600: e0d79f1a  cset w0, gt
0x068FD604: c0035fd6  ret

; RVA 0x68FD608 | public int get_LevelLock() { }
; bytes=8 sha256=a7ac6018475234fe11f86cdd24780682c92c26e9ef63a724a8a645b33f9edc7f status=arm64_complete_bound indexed_start=True
0x068FD608: 004440b9  ldr w0, [x0, #0x44]
0x068FD60C: c0035fd6  ret

; RVA 0x68FD610 | public void set_LevelLock(int value) { }
; bytes=8 sha256=f8ba8ad66f8668d8c49810b6cf2b99bdb3034321ccafc82ee22346d206332c38 status=arm64_complete_bound indexed_start=True
0x068FD610: 014400b9  str w1, [x0, #0x44]
0x068FD614: c0035fd6  ret

; RVA 0x68FD618 | public double get_BubbleTimeLeft() { }
; bytes=8 sha256=bda39139aa78bf4e0c0325de647994bccd7e6a3a7ba5f34c027bfc0f3066e098 status=arm64_complete_bound indexed_start=True
0x068FD618: 002440fd  ldr d0, [x0, #0x48]
0x068FD61C: c0035fd6  ret

; RVA 0x68FD620 | public void set_BubbleTimeLeft(double value) { }
; bytes=8 sha256=b3f53c3b2822a566ec59cfcd23cd6db6600283e9acaad9720b0f28d3c1f4e591 status=arm64_complete_bound indexed_start=True
0x068FD620: 002400fd  str d0, [x0, #0x48]
0x068FD624: c0035fd6  ret

; RVA 0x68FD628 | public long get_MeteorEndTime() { }
; bytes=8 sha256=989bb1a041c93e09fa2954014eaba1a46b19128664c6bbb210694e0989f09532 status=arm64_complete_bound indexed_start=True
0x068FD628: 002840f9  ldr x0, [x0, #0x50]
0x068FD62C: c0035fd6  ret

; RVA 0x68FD630 | public void set_MeteorEndTime(long value) { }
; bytes=8 sha256=99e9c505d21440096aac9993662e282f1d229d64d16bb1c32ef23d01d84a81b2 status=arm64_complete_bound indexed_start=True
0x068FD630: 012800f9  str x1, [x0, #0x50]
0x068FD634: c0035fd6  ret

; RVA 0x68FD638 | public long get_MeteorDuration() { }
; bytes=8 sha256=d598436bff3a9dd6f386d52e9d196b4b622d920d9df2d4b374773cddd2c4c4b8 status=arm64_complete_bound indexed_start=True
0x068FD638: 002c40f9  ldr x0, [x0, #0x58]
0x068FD63C: c0035fd6  ret

; RVA 0x68FD640 | public void set_MeteorDuration(long value) { }
; bytes=8 sha256=813d5e2df90426045ff1004e11e44d6d9b475fc20203a7cf27cab63d10e27ae1 status=arm64_complete_bound indexed_start=True
0x068FD640: 012c00f9  str x1, [x0, #0x58]
0x068FD644: c0035fd6  ret

; RVA 0x68FD648 | public string get_MeteorCycleId() { }
; bytes=8 sha256=dc0647a8f63aacbe9d6b7a7bf9b54950de74e29f82066e71731415b61d501071 status=arm64_complete_bound indexed_start=True
0x068FD648: 003040f9  ldr x0, [x0, #0x60]
0x068FD64C: c0035fd6  ret

; RVA 0x68FD650 | public void set_MeteorCycleId(string value) { }
; bytes=8 sha256=ca296393de06fe84d7bb7949aa6df10cc9a052ca06837896100334d916598e3e status=arm64_complete_bound indexed_start=True
0x068FD650: 010c06f8  str x1, [x0, #0x60]!
0x068FD654: dc0c2217  b #0x31809c4

; RVA 0x68FD658 | public int get_MeteorLocationItemIndex() { }
; bytes=8 sha256=629c044fe32313e0c2fe9ea704532b3f04f9a6b5cc7466f2c50efc28dea73852 status=arm64_complete_bound indexed_start=True
0x068FD658: 006840b9  ldr w0, [x0, #0x68]
0x068FD65C: c0035fd6  ret

; RVA 0x68FD660 | public void set_MeteorLocationItemIndex(int value) { }
; bytes=8 sha256=eca5388e52098c4902ed8abfebd325a6aceb7c8484d552dbca45530f2178d4ac status=arm64_complete_bound indexed_start=True
0x068FD660: 016800b9  str w1, [x0, #0x68]
0x068FD664: c0035fd6  ret

; RVA 0x68FD668 | public bool get_BubbleModifiedByStateLoad() { }
; bytes=8 sha256=839d64df6047455fe52be25e1d6511f08d06a8b7b3697ad97c65fccd54e4d1ea status=arm64_complete_bound indexed_start=True
0x068FD668: 00b04139  ldrb w0, [x0, #0x6c]
0x068FD66C: c0035fd6  ret

; RVA 0x68FD670 | public void set_BubbleModifiedByStateLoad(bool value) { }
; bytes=12 sha256=0b4f5cbe0586fb31a38f2dc5641c2028eecac4d301eae983855ce05ed0c52b95 status=arm64_complete_bound indexed_start=True
0x068FD670: 28000012  and w8, w1, #1
0x068FD674: 08b00139  strb w8, [x0, #0x6c]
0x068FD678: c0035fd6  ret

; RVA 0x68FD67C | public int get_BlasterableTier() { }
; bytes=8 sha256=8f98d112a6d95d77fa458ddff8ae6954314c59796f3bd55c73f6b642f818d2b6 status=arm64_complete_bound indexed_start=True
0x068FD67C: 007040b9  ldr w0, [x0, #0x70]
0x068FD680: c0035fd6  ret

; RVA 0x68FD684 | public void set_BlasterableTier(int value) { }
; bytes=8 sha256=c54cd369570b4715db08e12beed23191efab158079bf879c506d9c18d3955180 status=arm64_complete_bound indexed_start=True
0x068FD684: 017000b9  str w1, [x0, #0x70]
0x068FD688: c0035fd6  ret

; RVA 0x68FD68C | public bool get_IsBlasterable() { }
; bytes=16 sha256=4cc943cbf416d1e574ee58e2f6048b904211ce7092366f9564ef247da0164166 status=arm64_complete_bound indexed_start=True
0x068FD68C: 087040b9  ldr w8, [x0, #0x70]
0x068FD690: 1f010071  cmp w8, #0
0x068FD694: e0d79f1a  cset w0, gt
0x068FD698: c0035fd6  ret

; RVA 0x68FD69C | public bool get_LockedByTutorial() { }
; bytes=8 sha256=1100d241275fbe4bc4419e3f87ef9556d0bb3ad7853da97a0308ca737dce7179 status=arm64_complete_bound indexed_start=True
0x068FD69C: 00d04139  ldrb w0, [x0, #0x74]
0x068FD6A0: c0035fd6  ret

; RVA 0x68FD6A4 | public void set_LockedByTutorial(bool value) { }
; bytes=12 sha256=2eda8b6b78ca7ec465b768eac5fad04ebda827b0d36a1212af0be9f5e8516ce5 status=arm64_complete_bound indexed_start=True
0x068FD6A4: 28000012  and w8, w1, #1
0x068FD6A8: 08d00139  strb w8, [x0, #0x74]
0x068FD6AC: c0035fd6  ret

; RVA 0x68FD6B0 | public bool get_DragLockedByTutorial() { }
; bytes=8 sha256=e901bd4e3b36db19bc4b3fc6787059425f7786749761bbf30356c7ecb2dc3358 status=arm64_complete_bound indexed_start=True
0x068FD6B0: 00d44139  ldrb w0, [x0, #0x75]
0x068FD6B4: c0035fd6  ret

; RVA 0x68FD6B8 | public void set_DragLockedByTutorial(bool value) { }
; bytes=12 sha256=a0036c8e160df51e2cedb332112f1805d4060e8237a30dcc4492008cdbe1c93a status=arm64_complete_bound indexed_start=True
0x068FD6B8: 28000012  and w8, w1, #1
0x068FD6BC: 08d40139  strb w8, [x0, #0x75]
0x068FD6C0: c0035fd6  ret

; RVA 0x68FD6C4 | public bool get_InteractionLockedByTutorial() { }
; bytes=8 sha256=14b42f8e12df04990d73a0a748e49d9a26d6dcb74e15aecab0f5826866983d58 status=arm64_complete_bound indexed_start=True
0x068FD6C4: 00d84139  ldrb w0, [x0, #0x76]
0x068FD6C8: c0035fd6  ret

; RVA 0x68FD6CC | public void set_InteractionLockedByTutorial(bool value) { }
; bytes=12 sha256=554da8ddfe84ded9b9c8966d925c508ec134f265171d77c7aee84eaa4ab9eda7 status=arm64_complete_bound indexed_start=True
0x068FD6CC: 28000012  and w8, w1, #1
0x068FD6D0: 08d80139  strb w8, [x0, #0x76]
0x068FD6D4: c0035fd6  ret

; RVA 0x68FD6D8 | public bool get_LockedByInteraction() { }
; bytes=8 sha256=37094f91e962ec5913b564f021af08dc07d7b7c78eacf3abb124adff8dfa4a12 status=arm64_complete_bound indexed_start=True
0x068FD6D8: 00dc4139  ldrb w0, [x0, #0x77]
0x068FD6DC: c0035fd6  ret

; RVA 0x68FD6E0 | public void set_LockedByInteraction(bool value) { }
; bytes=12 sha256=a199deba303a81f62e94e36f2a4b12bdd1268d50a9fbb7da1349ea6fe2ab4934 status=arm64_complete_bound indexed_start=True
0x068FD6E0: 28000012  and w8, w1, #1
0x068FD6E4: 08dc0139  strb w8, [x0, #0x77]
0x068FD6E8: c0035fd6  ret

; RVA 0x68FD6EC | public bool get_LockedByNetworkOperation() { }
; bytes=8 sha256=1c02822f87eee63ad88aa503f98f120ed3e988ab0712ff97de9f51a0b1838867 status=arm64_complete_bound indexed_start=True
0x068FD6EC: 00e04139  ldrb w0, [x0, #0x78]
0x068FD6F0: c0035fd6  ret

; RVA 0x68FD6F4 | public void set_LockedByNetworkOperation(bool value) { }
; bytes=12 sha256=46d514f8987cf2b14f1b6475eb7cb8f930248790fbda2eeae8eb1418d7d1ef82 status=arm64_complete_bound indexed_start=True
0x068FD6F4: 28000012  and w8, w1, #1
0x068FD6F8: 08e00139  strb w8, [x0, #0x78]
0x068FD6FC: c0035fd6  ret

; RVA 0x68FD700 | public bool get_LockedByFlyingAnimation() { }
; bytes=8 sha256=5f17ef289f6bea3ecd4a4d52d09e5a6dfc2cc70cdaa57bd735696e264af011d6 status=arm64_complete_bound indexed_start=True
0x068FD700: 00e44139  ldrb w0, [x0, #0x79]
0x068FD704: c0035fd6  ret

; RVA 0x68FD708 | public void set_LockedByFlyingAnimation(bool value) { }
; bytes=12 sha256=faccbefa7fa28af794bf25fd604304d62c30d68f9b3c7bb93cfc2cce0540246d status=arm64_complete_bound indexed_start=True
0x068FD708: 28000012  and w8, w1, #1
0x068FD70C: 08e40139  strb w8, [x0, #0x79]
0x068FD710: c0035fd6  ret

; RVA 0x68FD714 | public bool get_AnyLock() { }
; bytes=76 sha256=07513e7d1b8613c65277f9a19c0b3fd1e59088fc6a17200f55d9533adf0bdc33 status=arm64_complete_bound indexed_start=True
0x068FD714: 08c04039  ldrb w8, [x0, #0x30]
0x068FD718: 88010035  cbnz w8, #0x68fd748
0x068FD71C: 08cc4039  ldrb w8, [x0, #0x33]
0x068FD720: 48010035  cbnz w8, #0x68fd748
0x068FD724: 084440b9  ldr w8, [x0, #0x44]
0x068FD728: 1f010071  cmp w8, #0
0x068FD72C: ec000054  b.gt #0x68fd748
0x068FD730: 08c44039  ldrb w8, [x0, #0x31]
0x068FD734: a8000035  cbnz w8, #0x68fd748
0x068FD738: 08e04139  ldrb w8, [x0, #0x78]
0x068FD73C: 68000035  cbnz w8, #0x68fd748
0x068FD740: 08e44139  ldrb w8, [x0, #0x79]
0x068FD744: 68000034  cbz w8, #0x68fd750
0x068FD748: 20008052  movz w0, #0x1
0x068FD74C: c0035fd6  ret
0x068FD750: 08c84039  ldrb w8, [x0, #0x32]
0x068FD754: 1f010071  cmp w8, #0
0x068FD758: e0079f1a  cset w0, ne
0x068FD75C: c0035fd6  ret

; RVA 0x68FD760 | public bool get_OnlyLock() { }
; bytes=76 sha256=cc87b7e306bfbb0d5af7012f92fc3ef3879adbedb84f91327656fef6105c1979 status=arm64_complete_bound indexed_start=True
0x068FD760: 08c04039  ldrb w8, [x0, #0x30]
0x068FD764: 88010034  cbz w8, #0x68fd794
0x068FD768: 08cc4039  ldrb w8, [x0, #0x33]
0x068FD76C: 48010035  cbnz w8, #0x68fd794
0x068FD770: 084440b9  ldr w8, [x0, #0x44]
0x068FD774: 1f010071  cmp w8, #0
0x068FD778: ec000054  b.gt #0x68fd794
0x068FD77C: 08c44039  ldrb w8, [x0, #0x31]
0x068FD780: a8000035  cbnz w8, #0x68fd794
0x068FD784: 08e04139  ldrb w8, [x0, #0x78]
0x068FD788: 68000035  cbnz w8, #0x68fd794
0x068FD78C: 08e44139  ldrb w8, [x0, #0x79]
0x068FD790: 68000034  cbz w8, #0x68fd79c
0x068FD794: e0031f2a  mov w0, wzr
0x068FD798: c0035fd6  ret
0x068FD79C: 08c84039  ldrb w8, [x0, #0x32]
0x068FD7A0: 1f010071  cmp w8, #0
0x068FD7A4: e0179f1a  cset w0, eq
0x068FD7A8: c0035fd6  ret

; RVA 0x68FD7AC | public bool get_AnyMergePreventingLock() { }
; bytes=60 sha256=1eed6011f89af5e8a438f2de4e86611655c3aa03be6c6398fbb016a0187ec34f status=arm64_complete_bound indexed_start=True
0x068FD7AC: 08cc4039  ldrb w8, [x0, #0x33]
0x068FD7B0: 08010035  cbnz w8, #0x68fd7d0
0x068FD7B4: 084440b9  ldr w8, [x0, #0x44]
0x068FD7B8: 1f010071  cmp w8, #0
0x068FD7BC: ac000054  b.gt #0x68fd7d0
0x068FD7C0: 08c44039  ldrb w8, [x0, #0x31]
0x068FD7C4: 68000035  cbnz w8, #0x68fd7d0
0x068FD7C8: 08e04139  ldrb w8, [x0, #0x78]
0x068FD7CC: 68000034  cbz w8, #0x68fd7d8
0x068FD7D0: 20008052  movz w0, #0x1
0x068FD7D4: c0035fd6  ret
0x068FD7D8: 08e44139  ldrb w8, [x0, #0x79]
0x068FD7DC: 1f010071  cmp w8, #0
0x068FD7E0: e0079f1a  cset w0, ne
0x068FD7E4: c0035fd6  ret

; RVA 0x68FD7E8 | public bool get_BoxedLockedOrLockedByTutorial() { }
; bytes=44 sha256=f2a20ec862cb93e21c5e9816283608c6253b0d000ca4ba2a8249773e20184746 status=arm64_complete_bound indexed_start=True
0x068FD7E8: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x068FD7EC: f30300aa  mov x19, x0
0x068FD7F0: c9ffff97  bl #0x68fd714
0x068FD7F4: 60000036  tbz w0, #0, #0x68fd800
0x068FD7F8: 20008052  movz w0, #0x1
0x068FD7FC: 04000014  b #0x68fd80c
0x068FD800: 68d24139  ldrb w8, [x19, #0x74]
0x068FD804: 1f010071  cmp w8, #0
0x068FD808: e0079f1a  cset w0, ne
0x068FD80C: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x068FD810: c0035fd6  ret

; RVA 0x68FD814 | public bool get_InteractionLocked() { }
; bytes=40 sha256=bed5b03ab02647df402a02ddbcbb539fe279a41ca44d55666d0f289279f4a447 status=arm64_complete_bound indexed_start=True
0x068FD814: 08dc4139  ldrb w8, [x0, #0x77]
0x068FD818: 68000035  cbnz w8, #0x68fd824
0x068FD81C: 08e04139  ldrb w8, [x0, #0x78]
0x068FD820: 68000034  cbz w8, #0x68fd82c
0x068FD824: 20008052  movz w0, #0x1
0x068FD828: c0035fd6  ret
0x068FD82C: 08e44139  ldrb w8, [x0, #0x79]
0x068FD830: 1f010071  cmp w8, #0
0x068FD834: e0079f1a  cset w0, ne
0x068FD838: c0035fd6  ret

; RVA 0x68FD83C | public bool get_DragLocked() { }
; bytes=60 sha256=2b92269a52c0e5df29a40f79a7f812d793828b495ed7d3d77e869e0c86f57fa3 status=arm64_complete_bound indexed_start=True
0x068FD83C: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x068FD840: f30300aa  mov x19, x0
0x068FD844: b4ffff97  bl #0x68fd714
0x068FD848: a0000037  tbnz w0, #0, #0x68fd85c
0x068FD84C: 68d24139  ldrb w8, [x19, #0x74]
0x068FD850: 68000035  cbnz w8, #0x68fd85c
0x068FD854: 68d64139  ldrb w8, [x19, #0x75]
0x068FD858: 88000034  cbz w8, #0x68fd868
0x068FD85C: 20008052  movz w0, #0x1
0x068FD860: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x068FD864: c0035fd6  ret
0x068FD868: 68e64139  ldrb w8, [x19, #0x79]
0x068FD86C: 1f010071  cmp w8, #0
0x068FD870: e0079f1a  cset w0, ne
0x068FD874: fbffff17  b #0x68fd860

; RVA 0x68FD878 | public bool get_StartDraggingLocked() { }
; bytes=76 sha256=53b42a2c6d8431ae16dd8d11d2e0d781b4f0397e18f774d4a881bcfedbdee44a status=arm64_complete_bound indexed_start=True
0x068FD878: 08c04039  ldrb w8, [x0, #0x30]
0x068FD87C: 88010035  cbnz w8, #0x68fd8ac
0x068FD880: 08d04139  ldrb w8, [x0, #0x74]
0x068FD884: 48010035  cbnz w8, #0x68fd8ac
0x068FD888: 08d44139  ldrb w8, [x0, #0x75]
0x068FD88C: 08010035  cbnz w8, #0x68fd8ac
0x068FD890: 084440b9  ldr w8, [x0, #0x44]
0x068FD894: 1f010071  cmp w8, #0
0x068FD898: ac000054  b.gt #0x68fd8ac
0x068FD89C: 08dc4139  ldrb w8, [x0, #0x77]
0x068FD8A0: 68000035  cbnz w8, #0x68fd8ac
0x068FD8A4: 08e04139  ldrb w8, [x0, #0x78]
0x068FD8A8: 68000034  cbz w8, #0x68fd8b4
0x068FD8AC: 20008052  movz w0, #0x1
0x068FD8B0: c0035fd6  ret
0x068FD8B4: 08e44139  ldrb w8, [x0, #0x79]
0x068FD8B8: 1f010071  cmp w8, #0
0x068FD8BC: e0079f1a  cset w0, ne
0x068FD8C0: c0035fd6  ret

; RVA 0x68FD8C4 | public bool get_BubbleExpirationBlocked() { }
; bytes=32 sha256=77167b49f3ef3a9ae62c4d6d0473127e6fdfd55c9fe59852d31ebc6d9888d3da status=arm64_complete_bound indexed_start=True
0x068FD8C4: 08e84139  ldrb w8, [x0, #0x7a]
0x068FD8C8: 68000034  cbz w8, #0x68fd8d4
0x068FD8CC: 20008052  movz w0, #0x1
0x068FD8D0: c0035fd6  ret
0x068FD8D4: 08e04139  ldrb w8, [x0, #0x78]
0x068FD8D8: 1f010071  cmp w8, #0
0x068FD8DC: e0079f1a  cset w0, ne
0x068FD8E0: c0035fd6  ret

; RVA 0x68FD8E4 | public void .ctor(LockedCapability locked, Entity entity) { }
; bytes=164 sha256=bdc7935f9f29104aa0bf3a039360d291c3aaf8c1320219dd30393eec010a556d status=arm64_complete_bound indexed_start=True
0x068FD8E4: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x068FD8E8: f65701a9  stp x22, x21, [sp, #0x10]
0x068FD8EC: f44f02a9  stp x20, x19, [sp, #0x20]
0x068FD8F0: 76a10090  adrp x22, #0x7d29000
0x068FD8F4: 577100b0  adrp x23, #0x7726000
0x068FD8F8: c8ce6239  ldrb w8, [x22, #0x8b3]
0x068FD8FC: f7ba43f9  ldr x23, [x23, #0x770]
0x068FD900: f50302aa  mov x21, x2
0x068FD904: f40301aa  mov x20, x1
0x068FD908: f30300aa  mov x19, x0
0x068FD90C: c8000037  tbnz w8, #0, #0x68fd924
0x068FD910: 407100b0  adrp x0, #0x7726000
0x068FD914: 00b843f9  ldr x0, [x0, #0x770]
0x068FD918: 400c2297  bl #0x3180a18
0x068FD91C: 28008052  movz w8, #0x1
0x068FD920: c8ce2239  strb w8, [x22, #0x8b3]
0x068FD924: e30240f9  ldr x3, [x23]
0x068FD928: e00313aa  mov x0, x19
0x068FD92C: e10314aa  mov x1, x20
0x068FD930: e20315aa  mov x2, x21
0x068FD934: a81b6f97  bl #0x44c47d4
0x068FD938: 740200b4  cbz x20, #0x68fd984
0x068FD93C: 88424039  ldrb w8, [x20, #0x10]
0x068FD940: f65741a9  ldp x22, x21, [sp, #0x10]
0x068FD944: 68c20039  strb w8, [x19, #0x30]
0x068FD948: 88464039  ldrb w8, [x20, #0x11]
0x068FD94C: 68ce0039  strb w8, [x19, #0x33]
0x068FD950: 881640b9  ldr w8, [x20, #0x14]
0x068FD954: 684600b9  str w8, [x19, #0x44]
0x068FD958: 88624039  ldrb w8, [x20, #0x18]
0x068FD95C: 68c60039  strb w8, [x19, #0x31]
0x068FD960: 80c241fc  ldur d0, [x20, #0x1c]
0x068FD964: 604203fc  stur d0, [x19, #0x34]
0x068FD968: 88664039  ldrb w8, [x20, #0x19]
0x068FD96C: 68ca0039  strb w8, [x19, #0x32]
0x068FD970: 882640b9  ldr w8, [x20, #0x24]
0x068FD974: 684200b9  str w8, [x19, #0x40]
0x068FD978: f44f42a9  ldp x20, x19, [sp, #0x20]
0x068FD97C: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x068FD980: c0035fd6  ret
0x068FD984: ca0c2297  bl #0x3180cac

; RVA 0x68FD988 | public override void LoadComponent(SerializedLockedComponent componentData) { }
; bytes=140 sha256=b6a4c16ffa086fde24c4eb06aee9573bdd9fb6f276a30d2f94b5a60791af2be0 status=arm64_complete_bound indexed_start=True
0x068FD988: fe0f1ef8  str x30, [sp, #-0x20]!
0x068FD98C: f44f01a9  stp x20, x19, [sp, #0x10]
0x068FD990: 010400b4  cbz x1, #0x68fda10
0x068FD994: 28444039  ldrb w8, [x1, #0x11]
0x068FD998: f30301aa  mov x19, x1
0x068FD99C: f40300aa  mov x20, x0
0x068FD9A0: 08c00039  strb w8, [x0, #0x30]
0x068FD9A4: 28484039  ldrb w8, [x1, #0x12]
0x068FD9A8: 08c40039  strb w8, [x0, #0x31]
0x068FD9AC: 28404039  ldrb w8, [x1, #0x10]
0x068FD9B0: 08cc0039  strb w8, [x0, #0x33]
0x068FD9B4: 281440b9  ldr w8, [x1, #0x14]
0x068FD9B8: 084400b9  str w8, [x0, #0x44]
0x068FD9BC: 201040fd  ldr d0, [x1, #0x20]
0x068FD9C0: 28008052  movz w8, #0x1
0x068FD9C4: 08b00139  strb w8, [x0, #0x6c]
0x068FD9C8: 002400fd  str d0, [x0, #0x48]
0x068FD9CC: 20c0c43c  ldur q0, [x1, #0x4c]
0x068FD9D0: 0040833c  stur q0, [x0, #0x34]
0x068FD9D4: 200cc03d  ldr q0, [x1, #0x30]
0x068FD9D8: 0014803d  str q0, [x0, #0x50]
0x068FD9DC: 212040f9  ldr x1, [x1, #0x40]
0x068FD9E0: 810e06f8  str x1, [x20, #0x60]!
0x068FD9E4: e00314aa  mov x0, x20
0x068FD9E8: f70b2297  bl #0x31809c4
0x068FD9EC: 684a40b9  ldr w8, [x19, #0x48]
0x068FD9F0: 880a00b9  str w8, [x20, #8]
0x068FD9F4: 684e4039  ldrb w8, [x19, #0x13]
0x068FD9F8: 88221d38  sturb w8, [x20, #-0x2e]
0x068FD9FC: 682a40b9  ldr w8, [x19, #0x28]
0x068FDA00: 881200b9  str w8, [x20, #0x10]
0x068FDA04: f44f41a9  ldp x20, x19, [sp, #0x10]
0x068FDA08: fe0742f8  ldr x30, [sp], #0x20
0x068FDA0C: c0035fd6  ret
0x068FDA10: a70c2297  bl #0x3180cac

; RVA 0x68FDA14 | protected override void OnBeforeSerialize() { }
; bytes=132 sha256=97ce5473758ee544e326a54bea95ca04af9c73af1c8455260b0ab7104e45f6ec status=arm64_complete_bound indexed_start=True
0x068FDA14: fe0f1ef8  str x30, [sp, #-0x20]!
0x068FDA18: f44f01a9  stp x20, x19, [sp, #0x10]
0x068FDA1C: 74a10090  adrp x20, #0x7d29000
0x068FDA20: 88d26239  ldrb w8, [x20, #0x8b4]
0x068FDA24: f30300aa  mov x19, x0
0x068FDA28: c8000037  tbnz w8, #0, #0x68fda40
0x068FDA2C: 407100b0  adrp x0, #0x7726000
0x068FDA30: 00bc43f9  ldr x0, [x0, #0x778]
0x068FDA34: f90b2297  bl #0x3180a18
0x068FDA38: 28008052  movz w8, #0x1
0x068FDA3C: 88d22239  strb w8, [x20, #0x8b4]
0x068FDA40: 681640f9  ldr x8, [x19, #0x28]
0x068FDA44: 880200b4  cbz x8, #0x68fda94
0x068FDA48: 69c24039  ldrb w9, [x19, #0x30]
0x068FDA4C: 09450039  strb w9, [x8, #0x11]
0x068FDA50: 69c64039  ldrb w9, [x19, #0x31]
0x068FDA54: 09490039  strb w9, [x8, #0x12]
0x068FDA58: 69ce4039  ldrb w9, [x19, #0x33]
0x068FDA5C: 09410039  strb w9, [x8, #0x10]
0x068FDA60: 69ca4039  ldrb w9, [x19, #0x32]
0x068FDA64: 094d0039  strb w9, [x8, #0x13]
0x068FDA68: 694640b9  ldr w9, [x19, #0x44]
0x068FDA6C: 091500b9  str w9, [x8, #0x14]
0x068FDA70: 602640fd  ldr d0, [x19, #0x48]
0x068FDA74: 001100fd  str d0, [x8, #0x20]
0x068FDA78: 697240b9  ldr w9, [x19, #0x70]
0x068FDA7C: 092900b9  str w9, [x8, #0x28]
0x068FDA80: 6042c33c  ldur q0, [x19, #0x34]
0x068FDA84: f44f41a9  ldp x20, x19, [sp, #0x10]
0x068FDA88: 00c1843c  stur q0, [x8, #0x4c]
0x068FDA8C: fe0742f8  ldr x30, [sp], #0x20
0x068FDA90: c0035fd6  ret
0x068FDA94: 860c2297  bl #0x3180cac

