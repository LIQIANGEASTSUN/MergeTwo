; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 573 MergeEngine.Model.Configuration.ProducerInventoryConfigurationModel
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6142544 | protected override void HandleDataLoaded(IList<InventoryProducerSlotUnlock> data) { }
; bytes=272 sha256=5aadd78d2f62f94d6c7f1fefb5ccbe165a5044d76396a7aefc9a8212473b4125 status=arm64_complete_bound indexed_start=True
0x06142544: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x06142548: f65701a9  stp x22, x21, [sp, #0x10]
0x0614254C: f44f02a9  stp x20, x19, [sp, #0x20]
0x06142550: 15df00d0  adrp x21, #0x7d24000
0x06142554: d6ac00b0  adrp x22, #0x76db000
0x06142558: a88a5739  ldrb w8, [x21, #0x5e2]
0x0614255C: d6aa42f9  ldr x22, [x22, #0x550]
0x06142560: f40301aa  mov x20, x1
0x06142564: f30300aa  mov x19, x0
0x06142568: e8010037  tbnz w8, #0, #0x61425a4
0x0614256C: c0ac00b0  adrp x0, #0x76db000
0x06142570: 00ac42f9  ldr x0, [x0, #0x558]
0x06142574: 29f94097  bl #0x3180a18
0x06142578: c0ac00b0  adrp x0, #0x76db000
0x0614257C: 00b042f9  ldr x0, [x0, #0x560]
0x06142580: 26f94097  bl #0x3180a18
0x06142584: c0ac00b0  adrp x0, #0x76db000
0x06142588: 00b442f9  ldr x0, [x0, #0x568]
0x0614258C: 23f94097  bl #0x3180a18
0x06142590: c0ac00b0  adrp x0, #0x76db000
0x06142594: 00a842f9  ldr x0, [x0, #0x550]
0x06142598: 20f94097  bl #0x3180a18
0x0614259C: 28008052  movz w8, #0x1
0x061425A0: a88a1739  strb w8, [x21, #0x5e2]
0x061425A4: 748e02f8  str x20, [x19, #0x28]!
0x061425A8: e00313aa  mov x0, x19
0x061425AC: e10314aa  mov x1, x20
0x061425B0: 05f94097  bl #0x31809c4
0x061425B4: c00240f9  ldr x0, [x22]
0x061425B8: 730240f9  ldr x19, [x19]
0x061425BC: 08e040b9  ldr w8, [x0, #0xe0]
0x061425C0: 68000035  cbnz w8, #0x61425cc
0x061425C4: 72f94097  bl #0x3180b8c
0x061425C8: c00240f9  ldr x0, [x22]
0x061425CC: 085c40f9  ldr x8, [x0, #0xb8]
0x061425D0: d7ac00b0  adrp x23, #0x76db000
0x061425D4: 140540f9  ldr x20, [x8, #8]
0x061425D8: f7b242f9  ldr x23, [x23, #0x560]
0x061425DC: f40200b5  cbnz x20, #0x6142638
0x061425E0: 08e040b9  ldr w8, [x0, #0xe0]
0x061425E4: 68000035  cbnz w8, #0x61425f0
0x061425E8: 69f94097  bl #0x3180b8c
0x061425EC: c00240f9  ldr x0, [x22]
0x061425F0: c9ac00b0  adrp x9, #0x76db000
0x061425F4: 085c40f9  ldr x8, [x0, #0xb8]
0x061425F8: 29ad42f9  ldr x9, [x9, #0x558]
0x061425FC: 150140f9  ldr x21, [x8]
0x06142600: 200140f9  ldr x0, [x9]
0x06142604: a7f94097  bl #0x3180ca0
0x06142608: c8ac00b0  adrp x8, #0x76db000
0x0614260C: 08b542f9  ldr x8, [x8, #0x568]
0x06142610: e10315aa  mov x1, x21
0x06142614: e3031faa  mov x3, xzr
0x06142618: f40300aa  mov x20, x0
0x0614261C: 020140f9  ldr x2, [x8]
0x06142620: 3f3fb097  bl #0x4d5231c
0x06142624: c80240f9  ldr x8, [x22]
0x06142628: e10314aa  mov x1, x20
0x0614262C: 005d40f9  ldr x0, [x8, #0xb8]
0x06142630: 148c00f8  str x20, [x0, #8]!
0x06142634: e4f84097  bl #0x31809c4
0x06142638: e20240f9  ldr x2, [x23]
0x0614263C: e00313aa  mov x0, x19
0x06142640: e10314aa  mov x1, x20
0x06142644: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06142648: f65741a9  ldp x22, x21, [sp, #0x10]
0x0614264C: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x06142650: 5e3b6f17  b #0x3d113c8

; RVA 0x6142654 | public IList<InventoryProducerSlotUnlock> GetProducerInventorySlotUnlocks() { }
; bytes=8 sha256=c0b9896d6c3d8aacf384c0d0cf5d897e84f621efe31cc89c980be348eb9c6614 status=arm64_complete_bound indexed_start=True
0x06142654: 001440f9  ldr x0, [x0, #0x28]
0x06142658: c0035fd6  ret

; RVA 0x614265C | public void .ctor() { }
; bytes=156 sha256=fc34bb477ce7f1905a35a6b0ab1285b7a0e2bd10289f8bcf6fd016d7c0e1ec5d status=arm64_complete_bound indexed_start=True
0x0614265C: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x06142660: f65701a9  stp x22, x21, [sp, #0x10]
0x06142664: f44f02a9  stp x20, x19, [sp, #0x20]
0x06142668: 16df00d0  adrp x22, #0x7d24000
0x0614266C: d7ac00b0  adrp x23, #0x76db000
0x06142670: d4ac00b0  adrp x20, #0x76db000
0x06142674: d5ac00b0  adrp x21, #0x76db000
0x06142678: c88e5739  ldrb w8, [x22, #0x5e3]
0x0614267C: f7ba42f9  ldr x23, [x23, #0x570]
0x06142680: 94be42f9  ldr x20, [x20, #0x578]
0x06142684: b5c242f9  ldr x21, [x21, #0x580]
0x06142688: f30300aa  mov x19, x0
0x0614268C: 88010037  tbnz w8, #0, #0x61426bc
0x06142690: c0ac00b0  adrp x0, #0x76db000
0x06142694: 00c042f9  ldr x0, [x0, #0x580]
0x06142698: e0f84097  bl #0x3180a18
0x0614269C: c0ac00b0  adrp x0, #0x76db000
0x061426A0: 00bc42f9  ldr x0, [x0, #0x578]
0x061426A4: ddf84097  bl #0x3180a18
0x061426A8: c0ac00b0  adrp x0, #0x76db000
0x061426AC: 00b842f9  ldr x0, [x0, #0x570]
0x061426B0: daf84097  bl #0x3180a18
0x061426B4: 28008052  movz w8, #0x1
0x061426B8: c88e1739  strb w8, [x22, #0x5e3]
0x061426BC: e00240f9  ldr x0, [x23]
0x061426C0: 78f94097  bl #0x3180ca0
0x061426C4: 810240f9  ldr x1, [x20]
0x061426C8: f40300aa  mov x20, x0
0x061426CC: 5b057c97  bl #0x4043c38
0x061426D0: e00313aa  mov x0, x19
0x061426D4: 148c02f8  str x20, [x0, #0x28]!
0x061426D8: e10314aa  mov x1, x20
0x061426DC: baf84097  bl #0x31809c4
0x061426E0: a10240f9  ldr x1, [x21]
0x061426E4: e00313aa  mov x0, x19
0x061426E8: f44f42a9  ldp x20, x19, [sp, #0x20]
0x061426EC: f65741a9  ldp x22, x21, [sp, #0x10]
0x061426F0: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x061426F4: f23cb117  b #0x4d91abc

