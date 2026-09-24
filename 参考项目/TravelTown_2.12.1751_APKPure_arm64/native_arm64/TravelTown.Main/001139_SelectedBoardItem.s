; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1139 MergeEngine.Data.SelectedBoardItem
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x69050A0 | public IMergeItem get_MergeItem() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x069050A0: 000840f9  ldr x0, [x0, #0x10]
0x069050A4: c0035fd6  ret

; RVA 0x69050A8 | public ITimeLocked get_TimeLocked() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x069050A8: 000c40f9  ldr x0, [x0, #0x18]
0x069050AC: c0035fd6  ret

; RVA 0x69050B0 | public BoardItemPosition get_BoardItemPosition() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x069050B0: 001040f9  ldr x0, [x0, #0x20]
0x069050B4: c0035fd6  ret

; RVA 0x69050B8 | public ILocked get_Locked() { }
; bytes=8 sha256=c0b9896d6c3d8aacf384c0d0cf5d897e84f621efe31cc89c980be348eb9c6614 status=arm64_complete_bound indexed_start=True
0x069050B8: 001440f9  ldr x0, [x0, #0x28]
0x069050BC: c0035fd6  ret

; RVA 0x69050C0 | public ICollectable get_Collectable() { }
; bytes=8 sha256=6b819324b4a3bc2d390c83c7fe02ea41a1f57ae5d4f2a9b0c9256341a5b8d37f status=arm64_complete_bound indexed_start=True
0x069050C0: 001840f9  ldr x0, [x0, #0x30]
0x069050C4: c0035fd6  ret

; RVA 0x69050C8 | public IItemSpawning get_ItemSpawning() { }
; bytes=8 sha256=095bb56e13b6dfde16ade0b592279392884c282a7c7810cb58472b839de552de status=arm64_complete_bound indexed_start=True
0x069050C8: 001c40f9  ldr x0, [x0, #0x38]
0x069050CC: c0035fd6  ret

; RVA 0x69050D0 | public IdComponent get_Id() { }
; bytes=8 sha256=ac1915dbf8ae56825a9e0c79c21190a655d4b32b9c10f299546aad7c9ecadc66 status=arm64_complete_bound indexed_start=True
0x069050D0: 002040f9  ldr x0, [x0, #0x40]
0x069050D4: c0035fd6  ret

; RVA 0x69050D8 | public ExpendableComponent get_Expendable() { }
; bytes=8 sha256=62c64bd585db7a91917843362bb75aa8dd20b002bce4874891b0b3ec8fd242b9 status=arm64_complete_bound indexed_start=True
0x069050D8: 002440f9  ldr x0, [x0, #0x48]
0x069050DC: c0035fd6  ret

; RVA 0x69050E0 | public VisualComponent get_VisualComponent() { }
; bytes=8 sha256=989bb1a041c93e09fa2954014eaba1a46b19128664c6bbb210694e0989f09532 status=arm64_complete_bound indexed_start=True
0x069050E0: 002840f9  ldr x0, [x0, #0x50]
0x069050E4: c0035fd6  ret

; RVA 0x69050E8 | public TimeDurationComponent get_TimeDurationComponent() { }
; bytes=8 sha256=d598436bff3a9dd6f386d52e9d196b4b622d920d9df2d4b374773cddd2c4c4b8 status=arm64_complete_bound indexed_start=True
0x069050E8: 002c40f9  ldr x0, [x0, #0x58]
0x069050EC: c0035fd6  ret

; RVA 0x69050F0 | public ProducerComponent get_ProducerComponent() { }
; bytes=8 sha256=dc0647a8f63aacbe9d6b7a7bf9b54950de74e29f82066e71731415b61d501071 status=arm64_complete_bound indexed_start=True
0x069050F0: 003040f9  ldr x0, [x0, #0x60]
0x069050F4: c0035fd6  ret

; RVA 0x69050F8 | public SpawnerComponent get_SpawnerComponent() { }
; bytes=8 sha256=f637e07b3820a82a5634a0174c92391b8ec5194fafa5b124fa3a73d3007ae512 status=arm64_complete_bound indexed_start=True
0x069050F8: 003440f9  ldr x0, [x0, #0x68]
0x069050FC: c0035fd6  ret

; RVA 0x6905100 | public void .ctor(IMergeItem mergeItem, Entity entity) { }
; bytes=680 sha256=900f6f955bbf0bb156d3c305c783a3f697e79a9f1440688bcca2b35268e8ad1d status=arm64_complete_bound indexed_start=True
0x06905100: fe6fbba9  stp x30, x27, [sp, #-0x50]!
0x06905104: fa6701a9  stp x26, x25, [sp, #0x10]
0x06905108: f85f02a9  stp x24, x23, [sp, #0x20]
0x0690510C: f65703a9  stp x22, x21, [sp, #0x30]
0x06905110: f44f04a9  stp x20, x19, [sp, #0x40]
0x06905114: 36a10090  adrp x22, #0x7d29000
0x06905118: c8aa6439  ldrb w8, [x22, #0x92a]
0x0690511C: f30302aa  mov x19, x2
0x06905120: f50301aa  mov x21, x1
0x06905124: f40300aa  mov x20, x0
0x06905128: 28040037  tbnz w8, #0, #0x69051ac
0x0690512C: c06f0090  adrp x0, #0x76fd000
0x06905130: 00f842f9  ldr x0, [x0, #0x5f0]
0x06905134: 39ee2197  bl #0x3180a18
0x06905138: a06b00b0  adrp x0, #0x767a000
0x0690513C: 008c44f9  ldr x0, [x0, #0x918]
0x06905140: 36ee2197  bl #0x3180a18
0x06905144: a06b00b0  adrp x0, #0x767a000
0x06905148: 009044f9  ldr x0, [x0, #0x920]
0x0690514C: 33ee2197  bl #0x3180a18
0x06905150: a06b00b0  adrp x0, #0x767a000
0x06905154: 009844f9  ldr x0, [x0, #0x930]
0x06905158: 30ee2197  bl #0x3180a18
0x0690515C: a06b00b0  adrp x0, #0x767a000
0x06905160: 00a044f9  ldr x0, [x0, #0x940]
0x06905164: 2dee2197  bl #0x3180a18
0x06905168: c06b00f0  adrp x0, #0x7680000
0x0690516C: 003442f9  ldr x0, [x0, #0x468]
0x06905170: 2aee2197  bl #0x3180a18
0x06905174: 006f00b0  adrp x0, #0x76e6000
0x06905178: 000c42f9  ldr x0, [x0, #0x418]
0x0690517C: 27ee2197  bl #0x3180a18
0x06905180: a06b00b0  adrp x0, #0x767a000
0x06905184: 00a844f9  ldr x0, [x0, #0x950]
0x06905188: 24ee2197  bl #0x3180a18
0x0690518C: a06b00b0  adrp x0, #0x767a000
0x06905190: 00b044f9  ldr x0, [x0, #0x960]
0x06905194: 21ee2197  bl #0x3180a18
0x06905198: c06b00b0  adrp x0, #0x767e000
0x0690519C: 00d042f9  ldr x0, [x0, #0x5a0]
0x069051A0: 1eee2197  bl #0x3180a18
0x069051A4: 28008052  movz w8, #0x1
0x069051A8: c8aa2439  strb w8, [x22, #0x92a]
0x069051AC: e00314aa  mov x0, x20
0x069051B0: e1031faa  mov x1, xzr
0x069051B4: 1255b797  bl #0x56da5fc
0x069051B8: e00314aa  mov x0, x20
0x069051BC: 150c01f8  str x21, [x0, #0x10]!
0x069051C0: e10315aa  mov x1, x21
0x069051C4: 00ee2197  bl #0x31809c4
0x069051C8: f30e00b4  cbz x19, #0x69053a4
0x069051CC: a86b00b0  adrp x8, #0x767a000
0x069051D0: 08b144f9  ldr x8, [x8, #0x960]
0x069051D4: b56b00b0  adrp x21, #0x767a000
0x069051D8: e00313aa  mov x0, x19
0x069051DC: 010140f9  ldr x1, [x8]
0x069051E0: b5a244f9  ldr x21, [x21, #0x940]
0x069051E4: e86e4c97  bl #0x3c20d84
0x069051E8: e10300aa  mov x1, x0
0x069051EC: e00314aa  mov x0, x20
0x069051F0: 018c01f8  str x1, [x0, #0x18]!
0x069051F4: f4ed2197  bl #0x31809c4
0x069051F8: a10240f9  ldr x1, [x21]
0x069051FC: e00313aa  mov x0, x19
0x06905200: e16e4c97  bl #0x3c20d84
0x06905204: 000d00b4  cbz x0, #0x69053a4
0x06905208: a86b00b0  adrp x8, #0x767a000
0x0690520C: d56f0090  adrp x21, #0x76fd000
0x06905210: 089944f9  ldr x8, [x8, #0x930]
0x06905214: b5fa42f9  ldr x21, [x21, #0x5f0]
0x06905218: 091840f9  ldr x9, [x0, #0x30]
0x0690521C: db6b00f0  adrp x27, #0x7680000
0x06905220: 166f00b0  adrp x22, #0x76e6000
0x06905224: ba6b00b0  adrp x26, #0x767a000
0x06905228: 7b3742f9  ldr x27, [x27, #0x468]
0x0690522C: d60e42f9  ldr x22, [x22, #0x418]
0x06905230: 5a8f44f9  ldr x26, [x26, #0x918]
0x06905234: 891200f9  str x9, [x20, #0x20]
0x06905238: 010140f9  ldr x1, [x8]
0x0690523C: d96b00b0  adrp x25, #0x767e000
0x06905240: b86b00b0  adrp x24, #0x767a000
0x06905244: b76b00b0  adrp x23, #0x767a000
0x06905248: 39d342f9  ldr x25, [x25, #0x5a0]
0x0690524C: 18ab44f9  ldr x24, [x24, #0x950]
0x06905250: f79244f9  ldr x23, [x23, #0x920]
0x06905254: e00313aa  mov x0, x19
0x06905258: cb6e4c97  bl #0x3c20d84
0x0690525C: e10300aa  mov x1, x0
0x06905260: e00314aa  mov x0, x20
0x06905264: 018c02f8  str x1, [x0, #0x28]!
0x06905268: d7ed2197  bl #0x31809c4
0x0690526C: a10240f9  ldr x1, [x21]
0x06905270: e00313aa  mov x0, x19
0x06905274: c46e4c97  bl #0x3c20d84
0x06905278: e10300aa  mov x1, x0
0x0690527C: e00314aa  mov x0, x20
0x06905280: 010c03f8  str x1, [x0, #0x30]!
0x06905284: d0ed2197  bl #0x31809c4
0x06905288: 610340f9  ldr x1, [x27]
0x0690528C: e00313aa  mov x0, x19
0x06905290: bd6e4c97  bl #0x3c20d84
0x06905294: f50314aa  mov x21, x20
0x06905298: a08e03f8  str x0, [x21, #0x38]!
0x0690529C: e10300aa  mov x1, x0
0x069052A0: e00315aa  mov x0, x21
0x069052A4: c8ed2197  bl #0x31809c4
0x069052A8: 610340f9  ldr x1, [x27]
0x069052AC: e00313aa  mov x0, x19
0x069052B0: b56e4c97  bl #0x3c20d84
0x069052B4: e10300aa  mov x1, x0
0x069052B8: e00314aa  mov x0, x20
0x069052BC: 010c06f8  str x1, [x0, #0x60]!
0x069052C0: c1ed2197  bl #0x31809c4
0x069052C4: c10240f9  ldr x1, [x22]
0x069052C8: e00313aa  mov x0, x19
0x069052CC: ae6e4c97  bl #0x3c20d84
0x069052D0: e10300aa  mov x1, x0
0x069052D4: e00314aa  mov x0, x20
0x069052D8: 018c06f8  str x1, [x0, #0x68]!
0x069052DC: baed2197  bl #0x31809c4
0x069052E0: 410340f9  ldr x1, [x26]
0x069052E4: e00313aa  mov x0, x19
0x069052E8: a76e4c97  bl #0x3c20d84
0x069052EC: e10300aa  mov x1, x0
0x069052F0: e00314aa  mov x0, x20
0x069052F4: 018c04f8  str x1, [x0, #0x48]!
0x069052F8: b3ed2197  bl #0x31809c4
0x069052FC: 210340f9  ldr x1, [x25]
0x06905300: e00313aa  mov x0, x19
0x06905304: a06e4c97  bl #0x3c20d84
0x06905308: e10300aa  mov x1, x0
0x0690530C: e00314aa  mov x0, x20
0x06905310: 010c05f8  str x1, [x0, #0x50]!
0x06905314: aced2197  bl #0x31809c4
0x06905318: 010340f9  ldr x1, [x24]
0x0690531C: e00313aa  mov x0, x19
0x06905320: 996e4c97  bl #0x3c20d84
0x06905324: e10300aa  mov x1, x0
0x06905328: e00314aa  mov x0, x20
0x0690532C: 018c05f8  str x1, [x0, #0x58]!
0x06905330: a5ed2197  bl #0x31809c4
0x06905334: e10240f9  ldr x1, [x23]
0x06905338: e00313aa  mov x0, x19
0x0690533C: 926e4c97  bl #0x3c20d84
0x06905340: 800e04f8  str x0, [x20, #0x40]!
0x06905344: e10300aa  mov x1, x0
0x06905348: e00314aa  mov x0, x20
0x0690534C: 9eed2197  bl #0x31809c4
0x06905350: a80240f9  ldr x8, [x21]
0x06905354: e80000b4  cbz x8, #0x6905370
0x06905358: f44f44a9  ldp x20, x19, [sp, #0x40]
0x0690535C: f65743a9  ldp x22, x21, [sp, #0x30]
0x06905360: f85f42a9  ldp x24, x23, [sp, #0x20]
0x06905364: fa6741a9  ldp x26, x25, [sp, #0x10]
0x06905368: fe6fc5a8  ldp x30, x27, [sp], #0x50
0x0690536C: c0035fd6  ret
0x06905370: c10240f9  ldr x1, [x22]
0x06905374: e00313aa  mov x0, x19
0x06905378: 836e4c97  bl #0x3c20d84
0x0690537C: e0feffb4  cbz x0, #0x6905358
0x06905380: e10300aa  mov x1, x0
0x06905384: a00200f9  str x0, [x21]
0x06905388: e00315aa  mov x0, x21
0x0690538C: f44f44a9  ldp x20, x19, [sp, #0x40]
0x06905390: f65743a9  ldp x22, x21, [sp, #0x30]
0x06905394: f85f42a9  ldp x24, x23, [sp, #0x20]
0x06905398: fa6741a9  ldp x26, x25, [sp, #0x10]
0x0690539C: fe6fc5a8  ldp x30, x27, [sp], #0x50
0x069053A0: 89ed2117  b #0x31809c4
0x069053A4: 42ee2197  bl #0x3180cac

