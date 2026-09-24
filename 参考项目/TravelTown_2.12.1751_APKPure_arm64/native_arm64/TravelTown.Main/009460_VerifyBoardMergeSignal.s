; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 9460 Merger.Game.Signal.VerifyBoardMergeSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x676D198 | public MergeCheckItemType get_MergeCheckType() { }
; bytes=8 sha256=6f1929ee2376e6ada94db6d2aafe012dfc8382613e73b99aea0c7dea270fac13 status=arm64_complete_bound indexed_start=True
0x0676D198: 001040b9  ldr w0, [x0, #0x10]
0x0676D19C: c0035fd6  ret

; RVA 0x676D1A0 | public PositionComponent get_FirstItem() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x0676D1A0: 000c40f9  ldr x0, [x0, #0x18]
0x0676D1A4: c0035fd6  ret

; RVA 0x676D1A8 | public PositionComponent get_SecondItem() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x0676D1A8: 001040f9  ldr x0, [x0, #0x20]
0x0676D1AC: c0035fd6  ret

; RVA 0x676D1B0 | public IItem get_CheckInitiatingItem() { }
; bytes=8 sha256=c0b9896d6c3d8aacf384c0d0cf5d897e84f621efe31cc89c980be348eb9c6614 status=arm64_complete_bound indexed_start=True
0x0676D1B0: 001440f9  ldr x0, [x0, #0x28]
0x0676D1B4: c0035fd6  ret

; RVA 0x676D1B8 | public IItem get_MergeItem() { }
; bytes=8 sha256=6b819324b4a3bc2d390c83c7fe02ea41a1f57ae5d4f2a9b0c9256341a5b8d37f status=arm64_complete_bound indexed_start=True
0x0676D1B8: 001840f9  ldr x0, [x0, #0x30]
0x0676D1BC: c0035fd6  ret

; RVA 0x676D1C0 | public IItem get_ResultItem() { }
; bytes=8 sha256=095bb56e13b6dfde16ade0b592279392884c282a7c7810cb58472b839de552de status=arm64_complete_bound indexed_start=True
0x0676D1C0: 001c40f9  ldr x0, [x0, #0x38]
0x0676D1C4: c0035fd6  ret

; RVA 0x676D1C8 | public Action<BoardItemPosition, BoardItemPosition> get_ConfirmMergeAction() { }
; bytes=8 sha256=ac1915dbf8ae56825a9e0c79c21190a655d4b32b9c10f299546aad7c9ecadc66 status=arm64_complete_bound indexed_start=True
0x0676D1C8: 002040f9  ldr x0, [x0, #0x40]
0x0676D1CC: c0035fd6  ret

; RVA 0x676D1D0 | public Action get_DeclineMergeAction() { }
; bytes=8 sha256=62c64bd585db7a91917843362bb75aa8dd20b002bce4874891b0b3ec8fd242b9 status=arm64_complete_bound indexed_start=True
0x0676D1D0: 002440f9  ldr x0, [x0, #0x48]
0x0676D1D4: c0035fd6  ret

; RVA 0x676D1D8 | public void .ctor(MergeCheckItemType mergeCheckType, PositionComponent firstItem, PositionComponent secondItem, IItem checkInitiatingItem, IItem mergeItem, IItem resultItem, Action<BoardItemPosition, BoardItemPosition> confirmMergeAction, Action declineMergeAction) { }
; bytes=200 sha256=9b54169ce6d1d547b04be3239897fe8f9270c31458f0adbb9a6beb9b695b56af status=arm64_complete_bound indexed_start=True
0x0676D1D8: fe6fbba9  stp x30, x27, [sp, #-0x50]!
0x0676D1DC: fa6701a9  stp x26, x25, [sp, #0x10]
0x0676D1E0: f85f02a9  stp x24, x23, [sp, #0x20]
0x0676D1E4: f65703a9  stp x22, x21, [sp, #0x30]
0x0676D1E8: f44f04a9  stp x20, x19, [sp, #0x40]
0x0676D1EC: fa2b40f9  ldr x26, [sp, #0x50]
0x0676D1F0: f903012a  mov w25, w1
0x0676D1F4: e1031faa  mov x1, xzr
0x0676D1F8: f30307aa  mov x19, x7
0x0676D1FC: f40306aa  mov x20, x6
0x0676D200: f50305aa  mov x21, x5
0x0676D204: f60304aa  mov x22, x4
0x0676D208: f70303aa  mov x23, x3
0x0676D20C: f80302aa  mov x24, x2
0x0676D210: fb0300aa  mov x27, x0
0x0676D214: fab4bd97  bl #0x56da5fc
0x0676D218: e0031baa  mov x0, x27
0x0676D21C: 791300b9  str w25, [x27, #0x10]
0x0676D220: 188c01f8  str x24, [x0, #0x18]!
0x0676D224: e10318aa  mov x1, x24
0x0676D228: e74d2897  bl #0x31809c4
0x0676D22C: e0031baa  mov x0, x27
0x0676D230: 170c02f8  str x23, [x0, #0x20]!
0x0676D234: e10317aa  mov x1, x23
0x0676D238: e34d2897  bl #0x31809c4
0x0676D23C: e0031baa  mov x0, x27
0x0676D240: 168c02f8  str x22, [x0, #0x28]!
0x0676D244: e10316aa  mov x1, x22
0x0676D248: df4d2897  bl #0x31809c4
0x0676D24C: e0031baa  mov x0, x27
0x0676D250: 150c03f8  str x21, [x0, #0x30]!
0x0676D254: e10315aa  mov x1, x21
0x0676D258: db4d2897  bl #0x31809c4
0x0676D25C: e0031baa  mov x0, x27
0x0676D260: 148c03f8  str x20, [x0, #0x38]!
0x0676D264: e10314aa  mov x1, x20
0x0676D268: d74d2897  bl #0x31809c4
0x0676D26C: e0031baa  mov x0, x27
0x0676D270: 130c04f8  str x19, [x0, #0x40]!
0x0676D274: e10313aa  mov x1, x19
0x0676D278: d34d2897  bl #0x31809c4
0x0676D27C: 7a8f04f8  str x26, [x27, #0x48]!
0x0676D280: e1031aaa  mov x1, x26
0x0676D284: f44f44a9  ldp x20, x19, [sp, #0x40]
0x0676D288: f65743a9  ldp x22, x21, [sp, #0x30]
0x0676D28C: f85f42a9  ldp x24, x23, [sp, #0x20]
0x0676D290: fa6741a9  ldp x26, x25, [sp, #0x10]
0x0676D294: e0031baa  mov x0, x27
0x0676D298: fe6fc5a8  ldp x30, x27, [sp], #0x50
0x0676D29C: ca4d2817  b #0x31809c4

