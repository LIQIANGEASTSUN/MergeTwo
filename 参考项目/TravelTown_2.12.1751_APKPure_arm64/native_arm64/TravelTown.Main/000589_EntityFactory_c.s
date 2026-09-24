; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 589 .EntityFactory.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x614656C | private static void .cctor() { }
; bytes=104 sha256=82acc3ecebdfa4287acda36a1d4e717cf88b59a23626f62185e425cca55ebaff status=arm64_complete_bound indexed_start=True
0x0614656C: fe0f1ef8  str x30, [sp, #-0x20]!
0x06146570: f44f01a9  stp x20, x19, [sp, #0x10]
0x06146574: f3de00d0  adrp x19, #0x7d24000
0x06146578: b4ac00b0  adrp x20, #0x76db000
0x0614657C: 684a5839  ldrb w8, [x19, #0x612]
0x06146580: 942a44f9  ldr x20, [x20, #0x850]
0x06146584: c8000037  tbnz w8, #0, #0x614659c
0x06146588: a0ac00b0  adrp x0, #0x76db000
0x0614658C: 002844f9  ldr x0, [x0, #0x850]
0x06146590: 22e94097  bl #0x3180a18
0x06146594: 28008052  movz w8, #0x1
0x06146598: 684a1839  strb w8, [x19, #0x612]
0x0614659C: 800240f9  ldr x0, [x20]
0x061465A0: c0e94097  bl #0x3180ca0
0x061465A4: e1031faa  mov x1, xzr
0x061465A8: f30300aa  mov x19, x0
0x061465AC: 1450d697  bl #0x56da5fc
0x061465B0: 880240f9  ldr x8, [x20]
0x061465B4: e10313aa  mov x1, x19
0x061465B8: 085d40f9  ldr x8, [x8, #0xb8]
0x061465BC: 130100f9  str x19, [x8]
0x061465C0: 880240f9  ldr x8, [x20]
0x061465C4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x061465C8: 005d40f9  ldr x0, [x8, #0xb8]
0x061465CC: fe0742f8  ldr x30, [sp], #0x20
0x061465D0: fde84017  b #0x31809c4

; RVA 0x61465D4 | public void .ctor() { }
; bytes=8 sha256=2e2bc826b4ddb182a5866812e4e98cd6519cea6ecef4c178b948554a734caed5 status=arm64_complete_bound indexed_start=True
0x061465D4: e1031faa  mov x1, xzr
0x061465D8: 0950d617  b #0x56da5fc

; RVA 0x61465DC | internal IEnumerable<WeightedItem> <CreateBoardItemEntity>b__2_0(Combination interactionCostItem) { }
; bytes=24 sha256=14123dde0e300e4872d03b40a9db675e6bf7244d08ce37d7cdbabcd9af856c6f status=arm64_complete_bound indexed_start=True
0x061465DC: fe0f1ff8  str x30, [sp, #-0x10]!
0x061465E0: 810000b4  cbz x1, #0x61465f0
0x061465E4: 201440f9  ldr x0, [x1, #0x28]
0x061465E8: fe0741f8  ldr x30, [sp], #0x10
0x061465EC: c0035fd6  ret
0x061465F0: afe94097  bl #0x3180cac

; RVA 0x61465F4 | internal WeightedItemSpawnable <CreateBoardItemEntity>b__2_1(WeightedItem i) { }
; bytes=124 sha256=b926af394a60d488e87089724d836229c980b2a273520a46c8dc3872bfe8e0bf status=arm64_complete_bound indexed_start=True
0x061465F4: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x061465F8: f44f01a9  stp x20, x19, [sp, #0x10]
0x061465FC: f4de00d0  adrp x20, #0x7d24000
0x06146600: d5a90090  adrp x21, #0x767e000
0x06146604: 884e5839  ldrb w8, [x20, #0x613]
0x06146608: b5aa42f9  ldr x21, [x21, #0x550]
0x0614660C: f30301aa  mov x19, x1
0x06146610: c8000037  tbnz w8, #0, #0x6146628
0x06146614: c0a90090  adrp x0, #0x767e000
0x06146618: 00a842f9  ldr x0, [x0, #0x550]
0x0614661C: ffe84097  bl #0x3180a18
0x06146620: 28008052  movz w8, #0x1
0x06146624: 884e1839  strb w8, [x20, #0x613]
0x06146628: a00240f9  ldr x0, [x21]
0x0614662C: 9de94097  bl #0x3180ca0
0x06146630: e1031faa  mov x1, xzr
0x06146634: f40300aa  mov x20, x0
0x06146638: 138d2394  bl #0x6a29a84
0x0614663C: 930100b4  cbz x19, #0x614666c
0x06146640: 740100b4  cbz x20, #0x614666c
0x06146644: 610e40f9  ldr x1, [x19, #0x18]
0x06146648: e00314aa  mov x0, x20
0x0614664C: 010c01f8  str x1, [x0, #0x10]!
0x06146650: dde84097  bl #0x31809c4
0x06146654: 681240b9  ldr w8, [x19, #0x10]
0x06146658: e00314aa  mov x0, x20
0x0614665C: 882600b9  str w8, [x20, #0x24]
0x06146660: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06146664: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06146668: c0035fd6  ret
0x0614666C: 90e94097  bl #0x3180cac

