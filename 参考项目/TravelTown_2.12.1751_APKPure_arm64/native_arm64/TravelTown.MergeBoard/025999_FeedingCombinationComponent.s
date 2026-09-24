; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25999 Merger.MergeBoard.Components.FeedingCombinationComponent
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A86B60 | public List<string> get_ConsumedItemIds() { }
; bytes=288 sha256=d643f36c413756633807d7f908ff4b65291ddd200365c9b13cbf329e35066849 status=arm64_complete_bound indexed_start=True
0x06A86B60: fe0f1cf8  str x30, [sp, #-0x40]!
0x06A86B64: f85f01a9  stp x24, x23, [sp, #0x10]
0x06A86B68: f65702a9  stp x22, x21, [sp, #0x20]
0x06A86B6C: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A86B70: 34950090  adrp x20, #0x7d2a000
0x06A86B74: 566500f0  adrp x22, #0x7731000
0x06A86B78: 882e6139  ldrb w8, [x20, #0x84b]
0x06A86B7C: d68646f9  ldr x22, [x22, #0xd08]
0x06A86B80: f30300aa  mov x19, x0
0x06A86B84: 48020037  tbnz w8, #0, #0x6a86bcc
0x06A86B88: 406500f0  adrp x0, #0x7731000
0x06A86B8C: 008846f9  ldr x0, [x0, #0xd10]
0x06A86B90: a2e71b97  bl #0x3180a18
0x06A86B94: 405e0090  adrp x0, #0x764e000
0x06A86B98: 002c45f9  ldr x0, [x0, #0xa58]
0x06A86B9C: 9fe71b97  bl #0x3180a18
0x06A86BA0: 406500f0  adrp x0, #0x7731000
0x06A86BA4: 008c46f9  ldr x0, [x0, #0xd18]
0x06A86BA8: 9ce71b97  bl #0x3180a18
0x06A86BAC: 406500f0  adrp x0, #0x7731000
0x06A86BB0: 009046f9  ldr x0, [x0, #0xd20]
0x06A86BB4: 99e71b97  bl #0x3180a18
0x06A86BB8: 406500f0  adrp x0, #0x7731000
0x06A86BBC: 008446f9  ldr x0, [x0, #0xd08]
0x06A86BC0: 96e71b97  bl #0x3180a18
0x06A86BC4: 28008052  movz w8, #0x1
0x06A86BC8: 882e2139  strb w8, [x20, #0x84b]
0x06A86BCC: c00240f9  ldr x0, [x22]
0x06A86BD0: 730240f9  ldr x19, [x19]
0x06A86BD4: 08e040b9  ldr w8, [x0, #0xe0]
0x06A86BD8: 68000035  cbnz w8, #0x6a86be4
0x06A86BDC: ece71b97  bl #0x3180b8c
0x06A86BE0: c00240f9  ldr x0, [x22]
0x06A86BE4: 085c40f9  ldr x8, [x0, #0xb8]
0x06A86BE8: 586500f0  adrp x24, #0x7731000
0x06A86BEC: 575e0090  adrp x23, #0x764e000
0x06A86BF0: 140540f9  ldr x20, [x8, #8]
0x06A86BF4: 188b46f9  ldr x24, [x24, #0xd10]
0x06A86BF8: f72e45f9  ldr x23, [x23, #0xa58]
0x06A86BFC: f40200b5  cbnz x20, #0x6a86c58
0x06A86C00: 08e040b9  ldr w8, [x0, #0xe0]
0x06A86C04: 68000035  cbnz w8, #0x6a86c10
0x06A86C08: e1e71b97  bl #0x3180b8c
0x06A86C0C: c00240f9  ldr x0, [x22]
0x06A86C10: 496500f0  adrp x9, #0x7731000
0x06A86C14: 085c40f9  ldr x8, [x0, #0xb8]
0x06A86C18: 298d46f9  ldr x9, [x9, #0xd18]
0x06A86C1C: 150140f9  ldr x21, [x8]
0x06A86C20: 200140f9  ldr x0, [x9]
0x06A86C24: 1fe81b97  bl #0x3180ca0
0x06A86C28: 486500f0  adrp x8, #0x7731000
0x06A86C2C: 089146f9  ldr x8, [x8, #0xd20]
0x06A86C30: e10315aa  mov x1, x21
0x06A86C34: e3031faa  mov x3, xzr
0x06A86C38: f40300aa  mov x20, x0
0x06A86C3C: 020140f9  ldr x2, [x8]
0x06A86C40: 5e3f9f97  bl #0x52569b8
0x06A86C44: c80240f9  ldr x8, [x22]
0x06A86C48: e10314aa  mov x1, x20
0x06A86C4C: 005d40f9  ldr x0, [x8, #0xb8]
0x06A86C50: 148c00f8  str x20, [x0, #8]!
0x06A86C54: 5ce71b97  bl #0x31809c4
0x06A86C58: 020340f9  ldr x2, [x24]
0x06A86C5C: e00313aa  mov x0, x19
0x06A86C60: e10314aa  mov x1, x20
0x06A86C64: 8c274797  bl #0x3c50a94
0x06A86C68: e10240f9  ldr x1, [x23]
0x06A86C6C: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A86C70: f65742a9  ldp x22, x21, [sp, #0x20]
0x06A86C74: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06A86C78: fe0744f8  ldr x30, [sp], #0x40
0x06A86C7C: d5644717  b #0x3c5ffd0

; RVA 0x6A9BE44 | public List<FeedingCombinationConsumedItemSnapshot> get_ConsumedItems() { }
; bytes=8 sha256=4197ad96213c98161e13fbfd6185a724b5570ba296d316558cbd5cc5c1842369 status=arm64_complete_bound indexed_start=True
0x06A9BE44: 000040f9  ldr x0, [x0]
0x06A9BE48: c0035fd6  ret

; RVA 0x6A9BE4C | public void set_ConsumedItems(List<FeedingCombinationConsumedItemSnapshot> value) { }
; bytes=8 sha256=b73607d479377a84a4d75c9d410f845bf2ee6fba94ef6db5d4412b1c1c368ef4 status=arm64_complete_bound indexed_start=True
0x06A9BE4C: 010000f9  str x1, [x0]
0x06A9BE50: dd921b17  b #0x31809c4

