; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1180 MergeEngine.Configuration.ItemBase
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6912B64 | public AssetReferenceT<Sprite> get_Sprite() { }
; bytes=64 sha256=e8ffb1718b0b401b3f7cf0d215790cfa3de14c22b70f1292097747b63b0dbde6 status=arm64_complete_bound indexed_start=True
0x06912B64: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06912B68: f44f01a9  stp x20, x19, [sp, #0x10]
0x06912B6C: f30300aa  mov x19, x0
0x06912B70: 748e47f8  ldr x20, [x19, #0x78]!
0x06912B74: 140100b5  cbnz x20, #0x6912b94
0x06912B78: f50300aa  mov x21, x0
0x06912B7C: 0a000094  bl #0x6912ba4
0x06912B80: f40300aa  mov x20, x0
0x06912B84: a03e00f9  str x0, [x21, #0x78]
0x06912B88: e00313aa  mov x0, x19
0x06912B8C: e10314aa  mov x1, x20
0x06912B90: 8db72197  bl #0x31809c4
0x06912B94: e00314aa  mov x0, x20
0x06912B98: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06912B9C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06912BA0: c0035fd6  ret

; RVA 0x6912C3C | public bool get_AutoOpenTooltip() { }
; bytes=8 sha256=87dcbe320c60fbb0ec9755802900c459ba1319bf67e25398856f8e5cd63de6b6 status=arm64_complete_bound indexed_start=True
0x06912C3C: 00204239  ldrb w0, [x0, #0x88]
0x06912C40: c0035fd6  ret

; RVA 0x6912C44 | public void set_AutoOpenTooltip(bool value) { }
; bytes=12 sha256=afbeb038a588f1a56d0e8bfd48df8d0467672647b82d73d91c2eadcf68e32799 status=arm64_complete_bound indexed_start=True
0x06912C44: 28000012  and w8, w1, #1
0x06912C48: 08200239  strb w8, [x0, #0x88]
0x06912C4C: c0035fd6  ret

; RVA 0x6912C50 | public string get_ItemName() { }
; bytes=8 sha256=509d712a0d747485a74d3684f00fd4941c9c210d3f084bf792b1b75c5e6c3652 status=arm64_complete_bound indexed_start=True
0x06912C50: 004040f9  ldr x0, [x0, #0x80]
0x06912C54: c0035fd6  ret

; RVA 0x6912C58 | public string get_BundleAssetUrl() { }
; bytes=8 sha256=ed86e0b2911b6a4e9edfa1a48e9544ba115299466a1992e2370619d8ce8e29fc status=arm64_complete_bound indexed_start=True
0x06912C58: e0031faa  mov x0, xzr
0x06912C5C: c0035fd6  ret

; RVA 0x6912C60 | public BoardQueueOrderCapability get_BoardQueueOrder() { }
; bytes=8 sha256=2c5f27fe901329ddd9be5f1b7961d0a984f813a76cac0c1f81ae43071f5b08b1 status=arm64_complete_bound indexed_start=True
0x06912C60: 004840f9  ldr x0, [x0, #0x90]
0x06912C64: c0035fd6  ret

; RVA 0x6912C68 | public RemoteContentBundleHandle get_BundleHandle() { }
; bytes=8 sha256=8719895e0a1a7a364f8198ecb5c52c335ea6cc04400a216f8ff55a9e8348baca status=arm64_complete_bound indexed_start=True
0x06912C68: 004c40f9  ldr x0, [x0, #0x98]
0x06912C6C: c0035fd6  ret

; RVA 0x6912C70 | public void set_BundleHandle(RemoteContentBundleHandle value) { }
; bytes=12 sha256=9877c5de6ae84f0303350c4beda716245797584d909e5913690dc19a5590e3c1 status=arm64_complete_bound indexed_start=True
0x06912C70: 018c09f8  str x1, [x0, #0x98]!
0x06912C74: e1031faa  mov x1, xzr
0x06912C78: 53b72117  b #0x31809c4

; RVA 0x6912C7C | public IItemInfoData get_ItemInfoData() { }
; bytes=8 sha256=8acf48fdbb8521073af2f36bb9112b7f2ef477cfaa15922bb3dc5322094b6251 status=arm64_complete_bound indexed_start=True
0x06912C7C: 005040f9  ldr x0, [x0, #0xa0]
0x06912C80: c0035fd6  ret

; RVA 0x6912C84 | public void set_ItemInfoData(IItemInfoData value) { }
; bytes=8 sha256=9460b8198c1ff9ace459b9417c7deb54628c5e17cc86b719872ba0ea7689d9d0 status=arm64_complete_bound indexed_start=True
0x06912C84: 010c0af8  str x1, [x0, #0xa0]!
0x06912C88: 4fb72117  b #0x31809c4

; RVA 0x6912BA4 | private RemoteSpriteLocation GetParsedSpriteLocation() { }
; bytes=152 sha256=d866e1fe37e4fa4f5c1573e2230b0aec7f2cae576402968fbd923a9f7965254c status=arm64_complete_bound indexed_start=True
0x06912BA4: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06912BA8: f44f01a9  stp x20, x19, [sp, #0x10]
0x06912BAC: 143840f9  ldr x20, [x0, #0x70]
0x06912BB0: f30300aa  mov x19, x0
0x06912BB4: 940100b4  cbz x20, #0x6912be4
0x06912BB8: 680240f9  ldr x8, [x19]
0x06912BBC: e00313aa  mov x0, x19
0x06912BC0: 093541f9  ldr x9, [x8, #0x268]
0x06912BC4: 013941f9  ldr x1, [x8, #0x270]
0x06912BC8: 20013fd6  blr x9
0x06912BCC: e10300aa  mov x1, x0
0x06912BD0: e00314aa  mov x0, x20
0x06912BD4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06912BD8: e2031faa  mov x2, xzr
0x06912BDC: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06912BE0: f41fbe17  b #0x589abb0
0x06912BE4: e00313aa  mov x0, x19
0x06912BE8: e1031faa  mov x1, xzr
0x06912BEC: 4933dc97  bl #0x601f910
0x06912BF0: 680240f9  ldr x8, [x19]
0x06912BF4: f40300aa  mov x20, x0
0x06912BF8: e00313aa  mov x0, x19
0x06912BFC: 092d41f9  ldr x9, [x8, #0x258]
0x06912C00: 013141f9  ldr x1, [x8, #0x260]
0x06912C04: 20013fd6  blr x9
0x06912C08: 680240f9  ldr x8, [x19]
0x06912C0C: f50300aa  mov x21, x0
0x06912C10: e00313aa  mov x0, x19
0x06912C14: 093541f9  ldr x9, [x8, #0x268]
0x06912C18: 013941f9  ldr x1, [x8, #0x270]
0x06912C1C: 20013fd6  blr x9
0x06912C20: e20300aa  mov x2, x0
0x06912C24: e00314aa  mov x0, x20
0x06912C28: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06912C2C: e10315aa  mov x1, x21
0x06912C30: e3031faa  mov x3, xzr
0x06912C34: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06912C38: 2520be17  b #0x589accc

; RVA 0x6912C8C | public void SetAsLocalSprite() { }
; bytes=112 sha256=3425936f6d64bb63488f1ea131906d8aadc587ee47da38d4b3ce324a67cf34f1 status=arm64_complete_bound indexed_start=True
0x06912C8C: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06912C90: f44f01a9  stp x20, x19, [sp, #0x10]
0x06912C94: e1031faa  mov x1, xzr
0x06912C98: f30300aa  mov x19, x0
0x06912C9C: 1d33dc97  bl #0x601f910
0x06912CA0: 680240f9  ldr x8, [x19]
0x06912CA4: f40300aa  mov x20, x0
0x06912CA8: e00313aa  mov x0, x19
0x06912CAC: 092d41f9  ldr x9, [x8, #0x258]
0x06912CB0: 013141f9  ldr x1, [x8, #0x260]
0x06912CB4: 20013fd6  blr x9
0x06912CB8: 680240f9  ldr x8, [x19]
0x06912CBC: f50300aa  mov x21, x0
0x06912CC0: e00313aa  mov x0, x19
0x06912CC4: 093541f9  ldr x9, [x8, #0x268]
0x06912CC8: 013941f9  ldr x1, [x8, #0x270]
0x06912CCC: 20013fd6  blr x9
0x06912CD0: e20300aa  mov x2, x0
0x06912CD4: e00314aa  mov x0, x20
0x06912CD8: e10315aa  mov x1, x21
0x06912CDC: e3031faa  mov x3, xzr
0x06912CE0: fb1fbe97  bl #0x589accc
0x06912CE4: 608e07f8  str x0, [x19, #0x78]!
0x06912CE8: e10300aa  mov x1, x0
0x06912CEC: e00313aa  mov x0, x19
0x06912CF0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06912CF4: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06912CF8: 33b72117  b #0x31809c4

; RVA 0x6912CFC | protected void .ctor() { }
; bytes=8 sha256=26e5e97b2d4d2fe95fd4521075a19909f82227531781052a82a561267d32c202 status=arm64_complete_bound indexed_start=True
0x06912CFC: e1031faa  mov x1, xzr
0x06912D00: 1533dc17  b #0x601f954

