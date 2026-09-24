; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 3068 Merger.RemoteMergeItems.Configuration.RemoteItemBase
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x615D38C | protected virtual string get__spriteAsset() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x0615D38C: 000840f9  ldr x0, [x0, #0x10]
0x0615D390: c0035fd6  ret

; RVA 0x615D394 | protected virtual void set__spriteAsset(string value) { }
; bytes=8 sha256=0e7d19a77881dca8c4920b9c842d9bc8e1fa5920e85bfe3d96fb5c7701b4b03f status=arm64_complete_bound indexed_start=True
0x0615D394: 010c01f8  str x1, [x0, #0x10]!
0x0615D398: 8b8d4017  b #0x31809c4

; RVA 0x615D39C | public virtual AssetReferenceT<Sprite> get_Sprite() { }
; bytes=64 sha256=4880473d36e341412c020c159522425bfdf92a4dadf67f03a77cbf318b10ebd0 status=arm64_complete_bound indexed_start=True
0x0615D39C: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0615D3A0: f44f01a9  stp x20, x19, [sp, #0x10]
0x0615D3A4: f30300aa  mov x19, x0
0x0615D3A8: 748e41f8  ldr x20, [x19, #0x18]!
0x0615D3AC: 140100b5  cbnz x20, #0x615d3cc
0x0615D3B0: f50300aa  mov x21, x0
0x0615D3B4: 0a000094  bl #0x615d3dc
0x0615D3B8: f40300aa  mov x20, x0
0x0615D3BC: a00e00f9  str x0, [x21, #0x18]
0x0615D3C0: e00313aa  mov x0, x19
0x0615D3C4: e10314aa  mov x1, x20
0x0615D3C8: 7f8d4097  bl #0x31809c4
0x0615D3CC: e00314aa  mov x0, x20
0x0615D3D0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0615D3D4: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0615D3D8: c0035fd6  ret

; RVA 0x615D494 | public virtual RemoteSpriteLocation get_RemoteSprite() { }
; bytes=64 sha256=76acfd583ad3adbf91cc98f0756dc710ef03daa28543d0ffdd6af3e3fa2b9026 status=arm64_complete_bound indexed_start=True
0x0615D494: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0615D498: f44f01a9  stp x20, x19, [sp, #0x10]
0x0615D49C: f30300aa  mov x19, x0
0x0615D4A0: 748e41f8  ldr x20, [x19, #0x18]!
0x0615D4A4: 140100b5  cbnz x20, #0x615d4c4
0x0615D4A8: f50300aa  mov x21, x0
0x0615D4AC: ccffff97  bl #0x615d3dc
0x0615D4B0: f40300aa  mov x20, x0
0x0615D4B4: a00e00f9  str x0, [x21, #0x18]
0x0615D4B8: e00313aa  mov x0, x19
0x0615D4BC: e10314aa  mov x1, x20
0x0615D4C0: 418d4097  bl #0x31809c4
0x0615D4C4: e00314aa  mov x0, x20
0x0615D4C8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0615D4CC: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0615D4D0: c0035fd6  ret

; RVA 0x615D4D4 | public BoardQueueOrderCapability get_BoardQueueOrder() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x0615D4D4: 001040f9  ldr x0, [x0, #0x20]
0x0615D4D8: c0035fd6  ret

; RVA 0x615D4DC | public void set_BoardQueueOrder(BoardQueueOrderCapability value) { }
; bytes=8 sha256=cb582da5b40419d7abf880ccdc61f7de37d34f04f7654ab95996316b4e9b74f8 status=arm64_complete_bound indexed_start=True
0x0615D4DC: 010c02f8  str x1, [x0, #0x20]!
0x0615D4E0: 398d4017  b #0x31809c4

; RVA 0x615D4E4 | public virtual string get_UniqueId() { }
; bytes=8 sha256=c0b9896d6c3d8aacf384c0d0cf5d897e84f621efe31cc89c980be348eb9c6614 status=arm64_complete_bound indexed_start=True
0x0615D4E4: 001440f9  ldr x0, [x0, #0x28]
0x0615D4E8: c0035fd6  ret

; RVA 0x615D4EC | public virtual void set_UniqueId(string value) { }
; bytes=8 sha256=af3163049f58bcc05e0685a396216044fe7f4ef673c4a18d74f70830d7de1a63 status=arm64_complete_bound indexed_start=True
0x0615D4EC: 018c02f8  str x1, [x0, #0x28]!
0x0615D4F0: 358d4017  b #0x31809c4

; RVA 0x615D4F4 | protected virtual string get_LocalTextureName() { }
; bytes=12 sha256=cfd4ab670b54914132573855b22b7dc3d951bf2cedb74e0caf34b4bcf82cbed3 status=arm64_complete_bound indexed_start=True
0x0615D4F4: 080040f9  ldr x8, [x0]
0x0615D4F8: 02855ca9  ldp x2, x1, [x8, #0x1c8]
0x0615D4FC: 40001fd6  br x2

; RVA 0x615D3DC | private RemoteSpriteLocation GetParsedSpriteLocation() { }
; bytes=184 sha256=0ac8c13f8112759fcd9c020c8ef18b464aef17456ea121b15a3c2e97ff5e1b66 status=arm64_complete_bound indexed_start=True
0x0615D3DC: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0615D3E0: f44f01a9  stp x20, x19, [sp, #0x10]
0x0615D3E4: 080040f9  ldr x8, [x0]
0x0615D3E8: f30300aa  mov x19, x0
0x0615D3EC: 098557a9  ldp x9, x1, [x8, #0x178]
0x0615D3F0: 20013fd6  blr x9
0x0615D3F4: e1031faa  mov x1, xzr
0x0615D3F8: ad69ce97  bl #0x54f7aac
0x0615D3FC: 680240f9  ldr x8, [x19]
0x0615D400: c0020036  tbz w0, #0, #0x615d458
0x0615D404: 09855ea9  ldp x9, x1, [x8, #0x1e8]
0x0615D408: e00313aa  mov x0, x19
0x0615D40C: 20013fd6  blr x9
0x0615D410: 680240f9  ldr x8, [x19]
0x0615D414: f40300aa  mov x20, x0
0x0615D418: e00313aa  mov x0, x19
0x0615D41C: 09855fa9  ldp x9, x1, [x8, #0x1f8]
0x0615D420: 20013fd6  blr x9
0x0615D424: 680240f9  ldr x8, [x19]
0x0615D428: f50300aa  mov x21, x0
0x0615D42C: e00313aa  mov x0, x19
0x0615D430: 090541f9  ldr x9, [x8, #0x208]
0x0615D434: 010941f9  ldr x1, [x8, #0x210]
0x0615D438: 20013fd6  blr x9
0x0615D43C: e20300aa  mov x2, x0
0x0615D440: e00314aa  mov x0, x20
0x0615D444: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0615D448: e10315aa  mov x1, x21
0x0615D44C: e3031faa  mov x3, xzr
0x0615D450: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0615D454: 1ef6dc17  b #0x589accc
0x0615D458: 098557a9  ldp x9, x1, [x8, #0x178]
0x0615D45C: e00313aa  mov x0, x19
0x0615D460: 20013fd6  blr x9
0x0615D464: 680240f9  ldr x8, [x19]
0x0615D468: f40300aa  mov x20, x0
0x0615D46C: e00313aa  mov x0, x19
0x0615D470: 090541f9  ldr x9, [x8, #0x208]
0x0615D474: 010941f9  ldr x1, [x8, #0x210]
0x0615D478: 20013fd6  blr x9
0x0615D47C: e10300aa  mov x1, x0
0x0615D480: e00314aa  mov x0, x20
0x0615D484: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0615D488: e2031faa  mov x2, xzr
0x0615D48C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0615D490: c8f5dc17  b #0x589abb0

; RVA 0x615D500 | public void SetAsFallbackSprite(string fallbackId) { }
; bytes=100 sha256=585ed0d97b2d421bd91fde6b0d5cc69203a7c488d59d801d22e99964e689f73d status=arm64_complete_bound indexed_start=True
0x0615D500: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0615D504: f44f01a9  stp x20, x19, [sp, #0x10]
0x0615D508: 080040f9  ldr x8, [x0]
0x0615D50C: f40301aa  mov x20, x1
0x0615D510: f30300aa  mov x19, x0
0x0615D514: 09a15fa9  ldp x9, x8, [x8, #0x1f8]
0x0615D518: e10308aa  mov x1, x8
0x0615D51C: 20013fd6  blr x9
0x0615D520: 680240f9  ldr x8, [x19]
0x0615D524: f50300aa  mov x21, x0
0x0615D528: e00313aa  mov x0, x19
0x0615D52C: 090541f9  ldr x9, [x8, #0x208]
0x0615D530: 010941f9  ldr x1, [x8, #0x210]
0x0615D534: 20013fd6  blr x9
0x0615D538: e20300aa  mov x2, x0
0x0615D53C: e00314aa  mov x0, x20
0x0615D540: e10315aa  mov x1, x21
0x0615D544: e3031faa  mov x3, xzr
0x0615D548: e1f5dc97  bl #0x589accc
0x0615D54C: 608e01f8  str x0, [x19, #0x18]!
0x0615D550: e10300aa  mov x1, x0
0x0615D554: e00313aa  mov x0, x19
0x0615D558: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0615D55C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0615D560: 198d4017  b #0x31809c4

; RVA 0x615D564 | protected void .ctor() { }
; bytes=8 sha256=5380dc22195fc99bed0ccfa25eb01e09df2c0ed0e99b57096e25d12caa7bc060 status=arm64_complete_bound indexed_start=True
0x0615D564: e1031faa  mov x1, xzr
0x0615D568: 25f4d517  b #0x56da5fc

