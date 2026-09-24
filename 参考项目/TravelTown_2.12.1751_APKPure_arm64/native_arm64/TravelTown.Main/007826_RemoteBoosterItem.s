; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 7826 Merger.Boosters.Declarations.Definitions.RemoteBoosterItem
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x65C9408 | public override string get_UniqueId() { }
; bytes=8 sha256=6b819324b4a3bc2d390c83c7fe02ea41a1f57ae5d4f2a9b0c9256341a5b8d37f status=arm64_complete_bound indexed_start=True
0x065C9408: 001840f9  ldr x0, [x0, #0x30]
0x065C940C: c0035fd6  ret

; RVA 0x65C9410 | public override void set_UniqueId(string value) { }
; bytes=8 sha256=d5feb5f3d1601876c74f287361110707a061829367955bd7a3a77b38dc6538b8 status=arm64_complete_bound indexed_start=True
0x065C9410: 010c03f8  str x1, [x0, #0x30]!
0x065C9414: 6cdd2e17  b #0x31809c4

; RVA 0x65C9418 | protected override string get_LocalSpritesPath() { }
; bytes=100 sha256=c3159005716836bd2d63496cc866bb9a1fac33ac5b16b6a73e092dbcb1807303 status=arm64_complete_bound indexed_start=True
0x065C9418: fe0f1ef8  str x30, [sp, #-0x20]!
0x065C941C: f44f01a9  stp x20, x19, [sp, #0x10]
0x065C9420: f4ba00d0  adrp x20, #0x7d27000
0x065C9424: d38700f0  adrp x19, #0x76c4000
0x065C9428: 88d26539  ldrb w8, [x20, #0x974]
0x065C942C: 738642f9  ldr x19, [x19, #0x508]
0x065C9430: c8000037  tbnz w8, #0, #0x65c9448
0x065C9434: c08700f0  adrp x0, #0x76c4000
0x065C9438: 008442f9  ldr x0, [x0, #0x508]
0x065C943C: 77dd2e97  bl #0x3180a18
0x065C9440: 28008052  movz w8, #0x1
0x065C9444: 88d22539  strb w8, [x20, #0x974]
0x065C9448: 600240f9  ldr x0, [x19]
0x065C944C: 08e040b9  ldr w8, [x0, #0xe0]
0x065C9450: 68000035  cbnz w8, #0x65c945c
0x065C9454: cedd2e97  bl #0x3180b8c
0x065C9458: 600240f9  ldr x0, [x19]
0x065C945C: 085c40f9  ldr x8, [x0, #0xb8]
0x065C9460: 000140f9  ldr x0, [x8]
0x065C9464: a00000b4  cbz x0, #0x65c9478
0x065C9468: f44f41a9  ldp x20, x19, [sp, #0x10]
0x065C946C: e1031faa  mov x1, xzr
0x065C9470: fe0742f8  ldr x30, [sp], #0x20
0x065C9474: 7e44cb17  b #0x589a66c
0x065C9478: 0dde2e97  bl #0x3180cac

; RVA 0x65C947C | protected override string get_SpriteLocatorUniqueId() { }
; bytes=108 sha256=db1a958d407e5ccd7d164d560b916ba788bc76917d77b35f827487c2a027624c status=arm64_complete_bound indexed_start=True
0x065C947C: fe0f1ef8  str x30, [sp, #-0x20]!
0x065C9480: f44f01a9  stp x20, x19, [sp, #0x10]
0x065C9484: f4ba00d0  adrp x20, #0x7d27000
0x065C9488: d38700f0  adrp x19, #0x76c4000
0x065C948C: 88d66539  ldrb w8, [x20, #0x975]
0x065C9490: 738642f9  ldr x19, [x19, #0x508]
0x065C9494: c8000037  tbnz w8, #0, #0x65c94ac
0x065C9498: c08700f0  adrp x0, #0x76c4000
0x065C949C: 008442f9  ldr x0, [x0, #0x508]
0x065C94A0: 5edd2e97  bl #0x3180a18
0x065C94A4: 28008052  movz w8, #0x1
0x065C94A8: 88d62539  strb w8, [x20, #0x975]
0x065C94AC: 600240f9  ldr x0, [x19]
0x065C94B0: 08e040b9  ldr w8, [x0, #0xe0]
0x065C94B4: 68000035  cbnz w8, #0x65c94c0
0x065C94B8: b5dd2e97  bl #0x3180b8c
0x065C94BC: 600240f9  ldr x0, [x19]
0x065C94C0: 085c40f9  ldr x8, [x0, #0xb8]
0x065C94C4: 000140f9  ldr x0, [x8]
0x065C94C8: e00000b4  cbz x0, #0x65c94e4
0x065C94CC: 080040f9  ldr x8, [x0]
0x065C94D0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x065C94D4: 025541f9  ldr x2, [x8, #0x2a8]
0x065C94D8: 015941f9  ldr x1, [x8, #0x2b0]
0x065C94DC: fe0742f8  ldr x30, [sp], #0x20
0x065C94E0: 40001fd6  br x2
0x065C94E4: f2dd2e97  bl #0x3180cac

; RVA 0x65C94E8 | private void set_SerializedBoosterType(string value) { }
; bytes=156 sha256=45ef562717fd37e649913fd5bef7fece99676c97b47b53e4559edcbefb1f518b status=arm64_complete_bound indexed_start=True
0x065C94E8: fe0f1df8  str x30, [sp, #-0x30]!
0x065C94EC: f65701a9  stp x22, x21, [sp, #0x10]
0x065C94F0: f44f02a9  stp x20, x19, [sp, #0x20]
0x065C94F4: f6ba00d0  adrp x22, #0x7d27000
0x065C94F8: 358400d0  adrp x21, #0x764f000
0x065C94FC: c8da6539  ldrb w8, [x22, #0x976]
0x065C9500: b5ae43f9  ldr x21, [x21, #0x758]
0x065C9504: f40301aa  mov x20, x1
0x065C9508: f30300aa  mov x19, x0
0x065C950C: 28010037  tbnz w8, #0, #0x65c9530
0x065C9510: c08900d0  adrp x0, #0x7703000
0x065C9514: 00f443f9  ldr x0, [x0, #0x7e8]
0x065C9518: 40dd2e97  bl #0x3180a18
0x065C951C: 208400d0  adrp x0, #0x764f000
0x065C9520: 00ac43f9  ldr x0, [x0, #0x758]
0x065C9524: 3ddd2e97  bl #0x3180a18
0x065C9528: 28008052  movz w8, #0x1
0x065C952C: c8da2539  strb w8, [x22, #0x976]
0x065C9530: a00240f9  ldr x0, [x21]
0x065C9534: ff0f00b9  str wzr, [sp, #0xc]
0x065C9538: d58900d0  adrp x21, #0x7703000
0x065C953C: 08e040b9  ldr w8, [x0, #0xe0]
0x065C9540: b5f643f9  ldr x21, [x21, #0x7e8]
0x065C9544: 48000035  cbnz w8, #0x65c954c
0x065C9548: 91dd2e97  bl #0x3180b8c
0x065C954C: a30240f9  ldr x3, [x21]
0x065C9550: e2330091  add x2, sp, #0xc
0x065C9554: 21008052  movz w1, #0x1
0x065C9558: e00314aa  mov x0, x20
0x065C955C: 5c665997  bl #0x3c22ecc
0x065C9560: e80f40b9  ldr w8, [sp, #0xc]
0x065C9564: 1f000072  tst w0, #1
0x065C9568: e00313aa  mov x0, x19
0x065C956C: 01119f1a  csel w1, w8, wzr, ne
0x065C9570: 05000094  bl #0x65c9584
0x065C9574: f44f42a9  ldp x20, x19, [sp, #0x20]
0x065C9578: f65741a9  ldp x22, x21, [sp, #0x10]
0x065C957C: fe0743f8  ldr x30, [sp], #0x30
0x065C9580: c0035fd6  ret

; RVA 0x65C9584 | private void set_BoosterType(BoosterType value) { }
; bytes=120 sha256=c779ffccb3c3ffe385981ddf1d1eaa1b98165e5e0e10eaac707bb5d4ca1e428a status=arm64_complete_bound indexed_start=True
0x065C9584: fe0f1df8  str x30, [sp, #-0x30]!
0x065C9588: f65701a9  stp x22, x21, [sp, #0x10]
0x065C958C: f44f02a9  stp x20, x19, [sp, #0x20]
0x065C9590: f5ba00d0  adrp x21, #0x7d27000
0x065C9594: d68900d0  adrp x22, #0x7703000
0x065C9598: a8de6539  ldrb w8, [x21, #0x977]
0x065C959C: d6fa43f9  ldr x22, [x22, #0x7f0]
0x065C95A0: f403012a  mov w20, w1
0x065C95A4: f30300aa  mov x19, x0
0x065C95A8: c8000037  tbnz w8, #0, #0x65c95c0
0x065C95AC: c08900d0  adrp x0, #0x7703000
0x065C95B0: 00f843f9  ldr x0, [x0, #0x7f0]
0x065C95B4: 19dd2e97  bl #0x3180a18
0x065C95B8: 28008052  movz w8, #0x1
0x065C95BC: a8de2539  strb w8, [x21, #0x977]
0x065C95C0: c00240f9  ldr x0, [x22]
0x065C95C4: b7dd2e97  bl #0x3180ca0
0x065C95C8: e1031faa  mov x1, xzr
0x065C95CC: f50300aa  mov x21, x0
0x065C95D0: fc18e997  bl #0x600f9c0
0x065C95D4: 350100b4  cbz x21, #0x65c95f8
0x065C95D8: b41600b9  str w20, [x21, #0x14]
0x065C95DC: 758e05f8  str x21, [x19, #0x58]!
0x065C95E0: e00313aa  mov x0, x19
0x065C95E4: e10315aa  mov x1, x21
0x065C95E8: f44f42a9  ldp x20, x19, [sp, #0x20]
0x065C95EC: f65741a9  ldp x22, x21, [sp, #0x10]
0x065C95F0: fe0743f8  ldr x30, [sp], #0x30
0x065C95F4: f4dc2e17  b #0x31809c4
0x065C95F8: addd2e97  bl #0x3180cac

; RVA 0x65BAAA0 | public BoosterType get_BoosterType() { }
; bytes=24 sha256=8dc823f38361427fbce4a01302392201f72c144167791f846d09bc77d1756665 status=arm64_complete_bound indexed_start=True
0x065BAAA0: 082c40f9  ldr x8, [x0, #0x58]
0x065BAAA4: 680000b4  cbz x8, #0x65baab0
0x065BAAA8: 001540b9  ldr w0, [x8, #0x14]
0x065BAAAC: c0035fd6  ret
0x065BAAB0: e0031f2a  mov w0, wzr
0x065BAAB4: c0035fd6  ret

; RVA 0x65C9604 | public TimeDurationCapability get_TimeDuration() { }
; bytes=8 sha256=095bb56e13b6dfde16ade0b592279392884c282a7c7810cb58472b839de552de status=arm64_complete_bound indexed_start=True
0x065C9604: 001c40f9  ldr x0, [x0, #0x38]
0x065C9608: c0035fd6  ret

; RVA 0x65C960C | public void set_TimeDuration(TimeDurationCapability value) { }
; bytes=8 sha256=09795349d5cb39a8eed5077c2a6a895f779471699787975e57d1159504483bc4 status=arm64_complete_bound indexed_start=True
0x065C960C: 018c03f8  str x1, [x0, #0x38]!
0x065C9610: eddc2e17  b #0x31809c4

; RVA 0x65C9614 | public MergeItemCapability get_MergeItem() { }
; bytes=8 sha256=ac1915dbf8ae56825a9e0c79c21190a655d4b32b9c10f299546aad7c9ecadc66 status=arm64_complete_bound indexed_start=True
0x065C9614: 002040f9  ldr x0, [x0, #0x40]
0x065C9618: c0035fd6  ret

; RVA 0x65C961C | public void set_MergeItem(MergeItemCapability value) { }
; bytes=8 sha256=cfc215680b754f4a345af4743f01352088295d4a3381ab8fd93fb17632676a4b status=arm64_complete_bound indexed_start=True
0x065C961C: 010c04f8  str x1, [x0, #0x40]!
0x065C9620: e9dc2e17  b #0x31809c4

; RVA 0x65C9624 | public BoosterRemoteConfig get_BoosterRemoteConfig() { }
; bytes=8 sha256=62c64bd585db7a91917843362bb75aa8dd20b002bce4874891b0b3ec8fd242b9 status=arm64_complete_bound indexed_start=True
0x065C9624: 002440f9  ldr x0, [x0, #0x48]
0x065C9628: c0035fd6  ret

; RVA 0x65C962C | public void set_BoosterRemoteConfig(BoosterRemoteConfig value) { }
; bytes=8 sha256=d6781e8ad1258dcfa541b623fac8083f3e336d2e9769bd4145404b85ed78d277 status=arm64_complete_bound indexed_start=True
0x065C962C: 018c04f8  str x1, [x0, #0x48]!
0x065C9630: e5dc2e17  b #0x31809c4

; RVA 0x65C9634 | public List<ClientAsset> get_ClientAssets() { }
; bytes=8 sha256=989bb1a041c93e09fa2954014eaba1a46b19128664c6bbb210694e0989f09532 status=arm64_complete_bound indexed_start=True
0x065C9634: 002840f9  ldr x0, [x0, #0x50]
0x065C9638: c0035fd6  ret

; RVA 0x65C963C | private void set_ClientAssets(List<ClientAsset> value) { }
; bytes=8 sha256=5114436ee76fecca314b4bb6a7c8136832b459e87e987d4238c9c87229daa7e0 status=arm64_complete_bound indexed_start=True
0x065C963C: 010c05f8  str x1, [x0, #0x50]!
0x065C9640: e1dc2e17  b #0x31809c4

; RVA 0x65BAAB8 | public CooldownBlockCapability get_CooldownBlock() { }
; bytes=24 sha256=7685d9c7ab1feb21ad8c7cebe3d63ad6ca7673a9728ec5454723d8dba97ec8c2 status=arm64_complete_bound indexed_start=True
0x065BAAB8: 082440f9  ldr x8, [x0, #0x48]
0x065BAABC: 680000b4  cbz x8, #0x65baac8
0x065BAAC0: 000940f9  ldr x0, [x8, #0x10]
0x065BAAC4: c0035fd6  ret
0x065BAAC8: e0031faa  mov x0, xzr
0x065BAACC: c0035fd6  ret

; RVA 0x65C9644 | public ActivationCapability get_Activation() { }
; bytes=8 sha256=d598436bff3a9dd6f386d52e9d196b4b622d920d9df2d4b374773cddd2c4c4b8 status=arm64_complete_bound indexed_start=True
0x065C9644: 002c40f9  ldr x0, [x0, #0x58]
0x065C9648: c0035fd6  ret

; RVA 0x65C964C | public string get_ItemName() { }
; bytes=236 sha256=d2efa7573c3812ce9e270bd771486b27a53a78c116675e6754710333bf0ff375 status=arm64_complete_bound indexed_start=True
0x065C964C: fe0f1ef8  str x30, [sp, #-0x20]!
0x065C9650: f44f01a9  stp x20, x19, [sp, #0x10]
0x065C9654: f4ba00d0  adrp x20, #0x7d27000
0x065C9658: 88e26539  ldrb w8, [x20, #0x978]
0x065C965C: f30300aa  mov x19, x0
0x065C9660: c8000037  tbnz w8, #0, #0x65c9678
0x065C9664: a08500f0  adrp x0, #0x7680000
0x065C9668: 004843f9  ldr x0, [x0, #0x690]
0x065C966C: ebdc2e97  bl #0x3180a18
0x065C9670: 28008052  movz w8, #0x1
0x065C9674: 88e22539  strb w8, [x20, #0x978]
0x065C9678: 682240f9  ldr x8, [x19, #0x40]
0x065C967C: 080400b4  cbz x8, #0x65c96fc
0x065C9680: 000d40f9  ldr x0, [x8, #0x18]
0x065C9684: c00300b4  cbz x0, #0x65c96fc
0x065C9688: e1031faa  mov x1, xzr
0x065C968C: d0ece897  bl #0x60049cc
0x065C9690: 600300b4  cbz x0, #0x65c96fc
0x065C9694: 682240f9  ldr x8, [x19, #0x40]
0x065C9698: e80300b4  cbz x8, #0x65c9714
0x065C969C: 000d40f9  ldr x0, [x8, #0x18]
0x065C96A0: a00300b4  cbz x0, #0x65c9714
0x065C96A4: e1031faa  mov x1, xzr
0x065C96A8: c9ece897  bl #0x60049cc
0x065C96AC: 400300b4  cbz x0, #0x65c9714
0x065C96B0: aa8500f0  adrp x10, #0x7680000
0x065C96B4: 080040f9  ldr x8, [x0]
0x065C96B8: 4a4943f9  ldr x10, [x10, #0x690]
0x065C96BC: f30300aa  mov x19, x0
0x065C96C0: 095d4279  ldrh w9, [x8, #0x12e]
0x065C96C4: 410140f9  ldr x1, [x10]
0x065C96C8: 290100b4  cbz x9, #0x65c96ec
0x065C96CC: 0a5940f9  ldr x10, [x8, #0xb0]
0x065C96D0: 4a210091  add x10, x10, #8
0x065C96D4: 4b815ff8  ldur x11, [x10, #-8]
0x065C96D8: 7f0101eb  cmp x11, x1
0x065C96DC: 40020054  b.eq #0x65c9724
0x065C96E0: 290500f1  subs x9, x9, #1
0x065C96E4: 4a410091  add x10, x10, #0x10
0x065C96E8: 61ffff54  b.ne #0x65c96d4
0x065C96EC: e00313aa  mov x0, x19
0x065C96F0: e2031f2a  mov w2, wzr
0x065C96F4: 07352e97  bl #0x3156b10
0x065C96F8: 0e000014  b #0x65c9730
0x065C96FC: 680240f9  ldr x8, [x19]
0x065C9700: 02855ca9  ldp x2, x1, [x8, #0x1c8]
0x065C9704: e00313aa  mov x0, x19
0x065C9708: f44f41a9  ldp x20, x19, [sp, #0x10]
0x065C970C: fe0742f8  ldr x30, [sp], #0x20
0x065C9710: 40001fd6  br x2
0x065C9714: f44f41a9  ldp x20, x19, [sp, #0x10]
0x065C9718: e0031faa  mov x0, xzr
0x065C971C: fe0742f8  ldr x30, [sp], #0x20
0x065C9720: c0035fd6  ret
0x065C9724: 490180b9  ldrsw x9, [x10]
0x065C9728: 0811098b  add x8, x8, x9, lsl #4
0x065C972C: 00e10491  add x0, x8, #0x138
0x065C9730: 020440a9  ldp x2, x1, [x0]
0x065C9734: f4ffff17  b #0x65c9704

; RVA 0x65C9738 | public RemoteContentBundleHandle get_BundleHandle() { }
; bytes=8 sha256=dc0647a8f63aacbe9d6b7a7bf9b54950de74e29f82066e71731415b61d501071 status=arm64_complete_bound indexed_start=True
0x065C9738: 003040f9  ldr x0, [x0, #0x60]
0x065C973C: c0035fd6  ret

; RVA 0x65C9740 | public void set_BundleHandle(RemoteContentBundleHandle value) { }
; bytes=12 sha256=730b72dbbd38ab16803ace642f5c22b6bf88db9b4a49f26ab753fd37003c1d09 status=arm64_complete_bound indexed_start=True
0x065C9740: 010c06f8  str x1, [x0, #0x60]!
0x065C9744: e1031faa  mov x1, xzr
0x065C9748: 9fdc2e17  b #0x31809c4

; RVA 0x65C974C | public string get_BundleAssetUrl() { }
; bytes=8 sha256=ed86e0b2911b6a4e9edfa1a48e9544ba115299466a1992e2370619d8ce8e29fc status=arm64_complete_bound indexed_start=True
0x065C974C: e0031faa  mov x0, xzr
0x065C9750: c0035fd6  ret

; RVA 0x65C9754 | public IItemInfoData get_ItemInfoData() { }
; bytes=8 sha256=f637e07b3820a82a5634a0174c92391b8ec5194fafa5b124fa3a73d3007ae512 status=arm64_complete_bound indexed_start=True
0x065C9754: 003440f9  ldr x0, [x0, #0x68]
0x065C9758: c0035fd6  ret

; RVA 0x65C975C | public void set_ItemInfoData(IItemInfoData value) { }
; bytes=8 sha256=943dd16797f0f6b0acb8db7936c5b42c86cd8457202de5b02465886cf76db20c status=arm64_complete_bound indexed_start=True
0x065C975C: 018c06f8  str x1, [x0, #0x68]!
0x065C9760: 99dc2e17  b #0x31809c4

; RVA 0x65C9764 | public bool get_AutoOpenTooltip() { }
; bytes=8 sha256=0c35e0c47c28785ddf5a0707514243d02ae8a312115dde20e75546488e5beb33 status=arm64_complete_bound indexed_start=True
0x065C9764: 00c04139  ldrb w0, [x0, #0x70]
0x065C9768: c0035fd6  ret

; RVA 0x65C976C | public void set_AutoOpenTooltip(bool value) { }
; bytes=12 sha256=3a5df5e27b3d1441d8286043fde8019cb3be0ae7c039360d3b7da504d631a9d3 status=arm64_complete_bound indexed_start=True
0x065C976C: 28000012  and w8, w1, #1
0x065C9770: 08c00139  strb w8, [x0, #0x70]
0x065C9774: c0035fd6  ret

; RVA 0x65C9778 | public void .ctor() { }
; bytes=8 sha256=975d25c2978ea1ce0ac1930382cab4cc0ce6e196ca92c093f05ae68a2b37a73e status=arm64_complete_bound indexed_start=True
0x065C9778: e1031faa  mov x1, xzr
0x065C977C: 7a4fee17  b #0x615d564

