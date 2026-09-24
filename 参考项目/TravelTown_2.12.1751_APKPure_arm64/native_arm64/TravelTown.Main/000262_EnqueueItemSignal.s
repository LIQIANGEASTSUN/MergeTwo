; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 262 MergeEngine.Signal.Board.EnqueueItemSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x5FF4928 | public IMergeItem get_MergeItem() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x05FF4928: 000840f9  ldr x0, [x0, #0x10]
0x05FF492C: c0035fd6  ret

; RVA 0x5FF4930 | public Entity get_Entity() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x05FF4930: 000c40f9  ldr x0, [x0, #0x18]
0x05FF4934: c0035fd6  ret

; RVA 0x5FF4938 | public BoardItemPosition get_SourcePosition() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x05FF4938: 001040f9  ldr x0, [x0, #0x20]
0x05FF493C: c0035fd6  ret

; RVA 0x5FF4940 | public BoardQueueOrder get_BoardQueueOrder() { }
; bytes=8 sha256=ba269e200604d0dd95f57e6bd974cfb4fb4a15db1799161315f4b00aef67931c status=arm64_complete_bound indexed_start=True
0x05FF4940: 002840b9  ldr w0, [x0, #0x28]
0x05FF4944: c0035fd6  ret

; RVA 0x5FF4948 | public ResourceSource get_Source() { }
; bytes=8 sha256=0471b33ab0983b843889248d4e9bd2f02e4d575679dc5668cc0ef6ea9dd367b5 status=arm64_complete_bound indexed_start=True
0x05FF4948: 002c40b9  ldr w0, [x0, #0x2c]
0x05FF494C: c0035fd6  ret

; RVA 0x5FF4950 | public bool get_SlideBoardItemToQueue() { }
; bytes=8 sha256=b5f756a94e2a4fd04c581b81886364460d3cd7c165e6a51d5f3195a9439a10c4 status=arm64_complete_bound indexed_start=True
0x05FF4950: 00c04039  ldrb w0, [x0, #0x30]
0x05FF4954: c0035fd6  ret

; RVA 0x5FF4958 | public void .ctor(IMergeItem mergeItem, Entity entity, BoardItemPosition sourcePosition, BoardQueueOrder boardQueueOrder, ResourceSource source, bool slideBoardItemToQueue = False) { }
; bytes=116 sha256=8546bb6707a33b7149d66a664de333e6b12f1ba7fb1f584f985ffa5fb41f592f status=arm64_complete_bound indexed_start=True
0x05FF4958: fe67bca9  stp x30, x25, [sp, #-0x40]!
0x05FF495C: f85f01a9  stp x24, x23, [sp, #0x10]
0x05FF4960: f65702a9  stp x22, x21, [sp, #0x20]
0x05FF4964: f44f03a9  stp x20, x19, [sp, #0x30]
0x05FF4968: f70301aa  mov x23, x1
0x05FF496C: e1031faa  mov x1, xzr
0x05FF4970: f303052a  mov w19, w5
0x05FF4974: f403042a  mov w20, w4
0x05FF4978: f50303aa  mov x21, x3
0x05FF497C: f60302aa  mov x22, x2
0x05FF4980: f80300aa  mov x24, x0
0x05FF4984: d9000012  and w25, w6, #1
0x05FF4988: 1d97db97  bl #0x56da5fc
0x05FF498C: e00318aa  mov x0, x24
0x05FF4990: 170c01f8  str x23, [x0, #0x10]!
0x05FF4994: e10317aa  mov x1, x23
0x05FF4998: 0b304697  bl #0x31809c4
0x05FF499C: 168f01f8  str x22, [x24, #0x18]!
0x05FF49A0: e00318aa  mov x0, x24
0x05FF49A4: e10316aa  mov x1, x22
0x05FF49A8: 07304697  bl #0x31809c4
0x05FF49AC: 150700f9  str x21, [x24, #8]
0x05FF49B0: 144f0229  stp w20, w19, [x24, #0x10]
0x05FF49B4: 19630039  strb w25, [x24, #0x18]
0x05FF49B8: f44f43a9  ldp x20, x19, [sp, #0x30]
0x05FF49BC: f65742a9  ldp x22, x21, [sp, #0x20]
0x05FF49C0: f85f41a9  ldp x24, x23, [sp, #0x10]
0x05FF49C4: fe67c4a8  ldp x30, x25, [sp], #0x40
0x05FF49C8: c0035fd6  ret

