; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 260 MergeEngine.Signal.Board.EnqueueBoosterItemSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x5FF4584 | public IMergeItem get_MergeItem() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x05FF4584: 000840f9  ldr x0, [x0, #0x10]
0x05FF4588: c0035fd6  ret

; RVA 0x5FF458C | public Entity get_Entity() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x05FF458C: 000c40f9  ldr x0, [x0, #0x18]
0x05FF4590: c0035fd6  ret

; RVA 0x5FF4594 | public BoardItemPosition get_SourcePosition() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x05FF4594: 001040f9  ldr x0, [x0, #0x20]
0x05FF4598: c0035fd6  ret

; RVA 0x5FF459C | public BoardQueueOrder get_BoardQueueOrder() { }
; bytes=8 sha256=ba269e200604d0dd95f57e6bd974cfb4fb4a15db1799161315f4b00aef67931c status=arm64_complete_bound indexed_start=True
0x05FF459C: 002840b9  ldr w0, [x0, #0x28]
0x05FF45A0: c0035fd6  ret

; RVA 0x5FF45A4 | public ResourceSource get_Source() { }
; bytes=8 sha256=0471b33ab0983b843889248d4e9bd2f02e4d575679dc5668cc0ef6ea9dd367b5 status=arm64_complete_bound indexed_start=True
0x05FF45A4: 002c40b9  ldr w0, [x0, #0x2c]
0x05FF45A8: c0035fd6  ret

; RVA 0x5FF45AC | public bool get_SlideBoardItemToQueue() { }
; bytes=8 sha256=b5f756a94e2a4fd04c581b81886364460d3cd7c165e6a51d5f3195a9439a10c4 status=arm64_complete_bound indexed_start=True
0x05FF45AC: 00c04039  ldrb w0, [x0, #0x30]
0x05FF45B0: c0035fd6  ret

; RVA 0x5FF45B4 | public string get_BoosterUUId() { }
; bytes=8 sha256=095bb56e13b6dfde16ade0b592279392884c282a7c7810cb58472b839de552de status=arm64_complete_bound indexed_start=True
0x05FF45B4: 001c40f9  ldr x0, [x0, #0x38]
0x05FF45B8: c0035fd6  ret

; RVA 0x5FF45BC | public string get_BoosterId() { }
; bytes=8 sha256=ac1915dbf8ae56825a9e0c79c21190a655d4b32b9c10f299546aad7c9ecadc66 status=arm64_complete_bound indexed_start=True
0x05FF45BC: 002040f9  ldr x0, [x0, #0x40]
0x05FF45C0: c0035fd6  ret

; RVA 0x5FF45C4 | public IBoosterItem get_BoosterItem() { }
; bytes=8 sha256=62c64bd585db7a91917843362bb75aa8dd20b002bce4874891b0b3ec8fd242b9 status=arm64_complete_bound indexed_start=True
0x05FF45C4: 002440f9  ldr x0, [x0, #0x48]
0x05FF45C8: c0035fd6  ret

; RVA 0x5FF45CC | public void .ctor(IMergeItem mergeItem, Entity entity, BoardItemPosition sourcePosition, BoardQueueOrder boardQueueOrder, ResourceSource source, string boosterUuId, string boosterId, IBoosterItem boosterItem, bool slideBoardItemToQueue = False) { }
; bytes=192 sha256=9f4d148eeb0f0e3e627ceb06c8a3438546cfdc9a6fc41afd8797a7c2cadc88d9 status=arm64_complete_bound indexed_start=True
0x05FF45CC: fe0f1af8  str x30, [sp, #-0x60]!
0x05FF45D0: fc6f01a9  stp x28, x27, [sp, #0x10]
0x05FF45D4: fa6702a9  stp x26, x25, [sp, #0x20]
0x05FF45D8: f85f03a9  stp x24, x23, [sp, #0x30]
0x05FF45DC: f65704a9  stp x22, x21, [sp, #0x40]
0x05FF45E0: f44f05a9  stp x20, x19, [sp, #0x50]
0x05FF45E4: e8a34139  ldrb w8, [sp, #0x68]
0x05FF45E8: fb3340f9  ldr x27, [sp, #0x60]
0x05FF45EC: f90301aa  mov x25, x1
0x05FF45F0: e1031faa  mov x1, xzr
0x05FF45F4: f30307aa  mov x19, x7
0x05FF45F8: f40306aa  mov x20, x6
0x05FF45FC: f503052a  mov w21, w5
0x05FF4600: f603042a  mov w22, w4
0x05FF4604: f70303aa  mov x23, x3
0x05FF4608: f80302aa  mov x24, x2
0x05FF460C: fa0300aa  mov x26, x0
0x05FF4610: 1c010012  and w28, w8, #1
0x05FF4614: fa97db97  bl #0x56da5fc
0x05FF4618: e0031aaa  mov x0, x26
0x05FF461C: 190c01f8  str x25, [x0, #0x10]!
0x05FF4620: e10319aa  mov x1, x25
0x05FF4624: e8304697  bl #0x31809c4
0x05FF4628: e0031aaa  mov x0, x26
0x05FF462C: 188c01f8  str x24, [x0, #0x18]!
0x05FF4630: e10318aa  mov x1, x24
0x05FF4634: e4304697  bl #0x31809c4
0x05FF4638: e0031aaa  mov x0, x26
0x05FF463C: 571300f9  str x23, [x26, #0x20]
0x05FF4640: 56570529  stp w22, w21, [x26, #0x28]
0x05FF4644: 5cc30039  strb w28, [x26, #0x30]
0x05FF4648: 148c03f8  str x20, [x0, #0x38]!
0x05FF464C: e10314aa  mov x1, x20
0x05FF4650: dd304697  bl #0x31809c4
0x05FF4654: e0031aaa  mov x0, x26
0x05FF4658: 130c04f8  str x19, [x0, #0x40]!
0x05FF465C: e10313aa  mov x1, x19
0x05FF4660: d9304697  bl #0x31809c4
0x05FF4664: 5b8f04f8  str x27, [x26, #0x48]!
0x05FF4668: e0031aaa  mov x0, x26
0x05FF466C: e1031baa  mov x1, x27
0x05FF4670: f44f45a9  ldp x20, x19, [sp, #0x50]
0x05FF4674: f65744a9  ldp x22, x21, [sp, #0x40]
0x05FF4678: f85f43a9  ldp x24, x23, [sp, #0x30]
0x05FF467C: fa6742a9  ldp x26, x25, [sp, #0x20]
0x05FF4680: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x05FF4684: fe0746f8  ldr x30, [sp], #0x60
0x05FF4688: cf304617  b #0x31809c4

