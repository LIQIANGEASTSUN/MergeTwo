; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 33309 Merger.MergeBoardQueue.Data.QueuedItem
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A5BA5C | public IItem get_Item() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06A5BA5C: 000840f9  ldr x0, [x0, #0x10]
0x06A5BA60: c0035fd6  ret

; RVA 0x6A5BA64 | public ItemPayloadBase get_RestoredItemPayload() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x06A5BA64: 000c40f9  ldr x0, [x0, #0x18]
0x06A5BA68: c0035fd6  ret

; RVA 0x6A5BA6C | public string get_UUIDInBoardQueue() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x06A5BA6C: 001040f9  ldr x0, [x0, #0x20]
0x06A5BA70: c0035fd6  ret

; RVA 0x6A5BA74 | public long get_EnqueueTimestamp() { }
; bytes=8 sha256=c0b9896d6c3d8aacf384c0d0cf5d897e84f621efe31cc89c980be348eb9c6614 status=arm64_complete_bound indexed_start=True
0x06A5BA74: 001440f9  ldr x0, [x0, #0x28]
0x06A5BA78: c0035fd6  ret

; RVA 0x6A5BA7C | public BoardQueueOrder get_BoardQueueOrder() { }
; bytes=8 sha256=615cc4d4d19713a7b9ea6b3843c274d040126c740088a3e2d95ffe19ba04c269 status=arm64_complete_bound indexed_start=True
0x06A5BA7C: 003040b9  ldr w0, [x0, #0x30]
0x06A5BA80: c0035fd6  ret

; RVA 0x6A59160 | public void .ctor(IItem item, long enqueueTimestamp, BoardQueueOrder boardQueueOrder, string uuidInBoardQueue, ItemPayloadBase itemPayload) { }
; bytes=124 sha256=7d4f6f061a03f9b8245c7c27c4b6bd97721fcd60cec1faddec9e8782f133774f status=arm64_complete_bound indexed_start=True
0x06A59160: fe0f1cf8  str x30, [sp, #-0x40]!
0x06A59164: f85f01a9  stp x24, x23, [sp, #0x10]
0x06A59168: f65702a9  stp x22, x21, [sp, #0x20]
0x06A5916C: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A59170: f70301aa  mov x23, x1
0x06A59174: e1031faa  mov x1, xzr
0x06A59178: f30305aa  mov x19, x5
0x06A5917C: f40304aa  mov x20, x4
0x06A59180: f503032a  mov w21, w3
0x06A59184: f60302aa  mov x22, x2
0x06A59188: f80300aa  mov x24, x0
0x06A5918C: 1c05b297  bl #0x56da5fc
0x06A59190: e00318aa  mov x0, x24
0x06A59194: 170c01f8  str x23, [x0, #0x10]!
0x06A59198: e10317aa  mov x1, x23
0x06A5919C: 0a9e1c97  bl #0x31809c4
0x06A591A0: e00318aa  mov x0, x24
0x06A591A4: 140c02f8  str x20, [x0, #0x20]!
0x06A591A8: e10314aa  mov x1, x20
0x06A591AC: 069e1c97  bl #0x31809c4
0x06A591B0: 138f01f8  str x19, [x24, #0x18]!
0x06A591B4: e00318aa  mov x0, x24
0x06A591B8: e10313aa  mov x1, x19
0x06A591BC: 029e1c97  bl #0x31809c4
0x06A591C0: 160b00f9  str x22, [x24, #0x10]
0x06A591C4: 151b00b9  str w21, [x24, #0x18]
0x06A591C8: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A591CC: f65742a9  ldp x22, x21, [sp, #0x20]
0x06A591D0: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06A591D4: fe0744f8  ldr x30, [sp], #0x40
0x06A591D8: c0035fd6  ret

