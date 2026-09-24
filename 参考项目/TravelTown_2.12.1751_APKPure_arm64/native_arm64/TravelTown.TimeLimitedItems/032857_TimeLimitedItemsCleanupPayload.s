; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 32857 Merger.TimeLimitedItems.Data.TimeLimitedItemsCleanupPayload
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6B4DDE0 | public string get_EventId() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06B4DDE0: 000840f9  ldr x0, [x0, #0x10]
0x06B4DDE4: c0035fd6  ret

; RVA 0x6B4DDE8 | public OperationNotificationData[] get_BoardOperations() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x06B4DDE8: 000c40f9  ldr x0, [x0, #0x18]
0x06B4DDEC: c0035fd6  ret

; RVA 0x6B4DC50 | public void .ctor(string eventId, OperationNotificationData[] boardOperations) { }
; bytes=68 sha256=409765db51c493e344f0803c344a592e0b902a2ed9af4ca99b1864212e348522 status=arm64_complete_bound indexed_start=True
0x06B4DC50: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06B4DC54: f44f01a9  stp x20, x19, [sp, #0x10]
0x06B4DC58: f40301aa  mov x20, x1
0x06B4DC5C: e1031faa  mov x1, xzr
0x06B4DC60: f30302aa  mov x19, x2
0x06B4DC64: f50300aa  mov x21, x0
0x06B4DC68: 6532ae97  bl #0x56da5fc
0x06B4DC6C: e00315aa  mov x0, x21
0x06B4DC70: 140c01f8  str x20, [x0, #0x10]!
0x06B4DC74: e10314aa  mov x1, x20
0x06B4DC78: 53cb1897  bl #0x31809c4
0x06B4DC7C: b38e01f8  str x19, [x21, #0x18]!
0x06B4DC80: e10313aa  mov x1, x19
0x06B4DC84: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06B4DC88: e00315aa  mov x0, x21
0x06B4DC8C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06B4DC90: 4dcb1817  b #0x31809c4

