; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 572 .ProducerInventoryConfigurationModel.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x61426F8 | private static void .cctor() { }
; bytes=104 sha256=4a50afe2b3549bd4f02c2457dfc072d6b693ae0ebf58ea9bb81ad891d6813048 status=arm64_complete_bound indexed_start=True
0x061426F8: fe0f1ef8  str x30, [sp, #-0x20]!
0x061426FC: f44f01a9  stp x20, x19, [sp, #0x10]
0x06142700: 13df00d0  adrp x19, #0x7d24000
0x06142704: d4ac00b0  adrp x20, #0x76db000
0x06142708: 68925739  ldrb w8, [x19, #0x5e4]
0x0614270C: 94aa42f9  ldr x20, [x20, #0x550]
0x06142710: c8000037  tbnz w8, #0, #0x6142728
0x06142714: c0ac00b0  adrp x0, #0x76db000
0x06142718: 00a842f9  ldr x0, [x0, #0x550]
0x0614271C: bff84097  bl #0x3180a18
0x06142720: 28008052  movz w8, #0x1
0x06142724: 68921739  strb w8, [x19, #0x5e4]
0x06142728: 800240f9  ldr x0, [x20]
0x0614272C: 5df94097  bl #0x3180ca0
0x06142730: e1031faa  mov x1, xzr
0x06142734: f30300aa  mov x19, x0
0x06142738: b15fd697  bl #0x56da5fc
0x0614273C: 880240f9  ldr x8, [x20]
0x06142740: e10313aa  mov x1, x19
0x06142744: 085d40f9  ldr x8, [x8, #0xb8]
0x06142748: 130100f9  str x19, [x8]
0x0614274C: 880240f9  ldr x8, [x20]
0x06142750: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06142754: 005d40f9  ldr x0, [x8, #0xb8]
0x06142758: fe0742f8  ldr x30, [sp], #0x20
0x0614275C: 9af84017  b #0x31809c4

; RVA 0x6142760 | public void .ctor() { }
; bytes=8 sha256=675e606f130fccc06d7583d1f0117555ee74bf80e01ac09a50d069f757949c40 status=arm64_complete_bound indexed_start=True
0x06142760: e1031faa  mov x1, xzr
0x06142764: a65fd617  b #0x56da5fc

; RVA 0x6142768 | internal int <HandleDataLoaded>b__1_0(InventoryProducerSlotUnlock lhs, InventoryProducerSlotUnlock rhs) { }
; bytes=40 sha256=66cb2b8c10054e0fda4ca4ae3785f2d452d9624f4b997c95ef5cb9843da47242 status=arm64_complete_bound indexed_start=True
0x06142768: fe0f1ff8  str x30, [sp, #-0x10]!
0x0614276C: 010100b4  cbz x1, #0x614278c
0x06142770: e20000b4  cbz x2, #0x614278c
0x06142774: 481840b9  ldr w8, [x2, #0x18]
0x06142778: 20600091  add x0, x1, #0x18
0x0614277C: e2031faa  mov x2, xzr
0x06142780: e103082a  mov w1, w8
0x06142784: fe0741f8  ldr x30, [sp], #0x10
0x06142788: c644d517  b #0x5693aa0
0x0614278C: 48f94097  bl #0x3180cac

