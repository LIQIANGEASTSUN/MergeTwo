; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 10955 Framework.Core.Services.Backend.Remote.Payloads.BoardState.BackendBoardQueueItem
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x69274B4 | public string get_UUIDInBoardQueue() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x069274B4: 000840f9  ldr x0, [x0, #0x10]
0x069274B8: c0035fd6  ret

; RVA 0x69274BC | public IItem get_QueuedItem() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x069274BC: 000c40f9  ldr x0, [x0, #0x18]
0x069274C0: c0035fd6  ret

; RVA 0x69274C4 | public ItemPayloadBase get_ItemBase() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x069274C4: 001040f9  ldr x0, [x0, #0x20]
0x069274C8: c0035fd6  ret

; RVA 0x69274CC | public BoosterData get_BoosterData() { }
; bytes=8 sha256=c0b9896d6c3d8aacf384c0d0cf5d897e84f621efe31cc89c980be348eb9c6614 status=arm64_complete_bound indexed_start=True
0x069274CC: 001440f9  ldr x0, [x0, #0x28]
0x069274D0: c0035fd6  ret

; RVA 0x69274D4 | public long get_EnqueueTimestamp() { }
; bytes=8 sha256=6b819324b4a3bc2d390c83c7fe02ea41a1f57ae5d4f2a9b0c9256341a5b8d37f status=arm64_complete_bound indexed_start=True
0x069274D4: 001840f9  ldr x0, [x0, #0x30]
0x069274D8: c0035fd6  ret

; RVA 0x69274DC | public CardPackData get_CardPackData() { }
; bytes=8 sha256=095bb56e13b6dfde16ade0b592279392884c282a7c7810cb58472b839de552de status=arm64_complete_bound indexed_start=True
0x069274DC: 001c40f9  ldr x0, [x0, #0x38]
0x069274E0: c0035fd6  ret

; RVA 0x69274E4 | public string get_Reason() { }
; bytes=8 sha256=ac1915dbf8ae56825a9e0c79c21190a655d4b32b9c10f299546aad7c9ecadc66 status=arm64_complete_bound indexed_start=True
0x069274E4: 002040f9  ldr x0, [x0, #0x40]
0x069274E8: c0035fd6  ret

; RVA 0x69274EC | public BoardQueueOrder get_BoardQueueOrder() { }
; bytes=8 sha256=5a3dbf09a4e8bdcceec86da53e57e6eb7ac66ceb50eedbff297fa2d5d118a7be status=arm64_complete_bound indexed_start=True
0x069274EC: 004840b9  ldr w0, [x0, #0x48]
0x069274F0: c0035fd6  ret

; RVA 0x69274F4 | public void .ctor(string uuidInBoardQueue, IItem queuedItem, ItemPayloadBase itemBase, BoosterData boosterData, CardPackData cardPackData, long enqueueTimestamp, string reason, BoardQueueOrder boardQueueOrder) { }
; bytes=192 sha256=ac0904071c397c95c4a1d19dbb9d0daabca562873486e34fc8e4fc6d5999b886 status=arm64_complete_bound indexed_start=True
0x069274F4: fe6fbba9  stp x30, x27, [sp, #-0x50]!
0x069274F8: fa6701a9  stp x26, x25, [sp, #0x10]
0x069274FC: f85f02a9  stp x24, x23, [sp, #0x20]
0x06927500: f65703a9  stp x22, x21, [sp, #0x30]
0x06927504: f44f04a9  stp x20, x19, [sp, #0x40]
0x06927508: fb5340b9  ldr w27, [sp, #0x50]
0x0692750C: f90301aa  mov x25, x1
0x06927510: e1031faa  mov x1, xzr
0x06927514: f30307aa  mov x19, x7
0x06927518: f40306aa  mov x20, x6
0x0692751C: f50305aa  mov x21, x5
0x06927520: f60304aa  mov x22, x4
0x06927524: f70303aa  mov x23, x3
0x06927528: f80302aa  mov x24, x2
0x0692752C: fa0300aa  mov x26, x0
0x06927530: 33ccb697  bl #0x56da5fc
0x06927534: e0031aaa  mov x0, x26
0x06927538: 190c01f8  str x25, [x0, #0x10]!
0x0692753C: e10319aa  mov x1, x25
0x06927540: 21652197  bl #0x31809c4
0x06927544: e0031aaa  mov x0, x26
0x06927548: 188c01f8  str x24, [x0, #0x18]!
0x0692754C: e10318aa  mov x1, x24
0x06927550: 1d652197  bl #0x31809c4
0x06927554: e0031aaa  mov x0, x26
0x06927558: 170c02f8  str x23, [x0, #0x20]!
0x0692755C: e10317aa  mov x1, x23
0x06927560: 19652197  bl #0x31809c4
0x06927564: e0031aaa  mov x0, x26
0x06927568: 168c02f8  str x22, [x0, #0x28]!
0x0692756C: e10316aa  mov x1, x22
0x06927570: 15652197  bl #0x31809c4
0x06927574: e0031aaa  mov x0, x26
0x06927578: 158c03f8  str x21, [x0, #0x38]!
0x0692757C: e10315aa  mov x1, x21
0x06927580: 11652197  bl #0x31809c4
0x06927584: 530f04f8  str x19, [x26, #0x40]!
0x06927588: e0031aaa  mov x0, x26
0x0692758C: e10313aa  mov x1, x19
0x06927590: 54031ff8  stur x20, [x26, #-0x10]
0x06927594: 0c652197  bl #0x31809c4
0x06927598: 5b0b00b9  str w27, [x26, #8]
0x0692759C: f44f44a9  ldp x20, x19, [sp, #0x40]
0x069275A0: f65743a9  ldp x22, x21, [sp, #0x30]
0x069275A4: f85f42a9  ldp x24, x23, [sp, #0x20]
0x069275A8: fa6741a9  ldp x26, x25, [sp, #0x10]
0x069275AC: fe6fc5a8  ldp x30, x27, [sp], #0x50
0x069275B0: c0035fd6  ret

