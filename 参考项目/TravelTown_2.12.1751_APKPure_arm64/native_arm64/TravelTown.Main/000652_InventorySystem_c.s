; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 652 .InventorySystem.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x628A494 | private static void .cctor() { }
; bytes=104 sha256=abd1b4baecca2ee6477c8dc950f80128ad171dd8e61e28e159a3765c32c8f1b9 status=arm64_complete_bound indexed_start=True
0x0628A494: fe0f1ef8  str x30, [sp, #-0x20]!
0x0628A498: f44f01a9  stp x20, x19, [sp, #0x10]
0x0628A49C: d3d400f0  adrp x19, #0x7d25000
0x0628A4A0: f4a200b0  adrp x20, #0x76e7000
0x0628A4A4: 68d25339  ldrb w8, [x19, #0x4f4]
0x0628A4A8: 943a40f9  ldr x20, [x20, #0x70]
0x0628A4AC: c8000037  tbnz w8, #0, #0x628a4c4
0x0628A4B0: e0a200b0  adrp x0, #0x76e7000
0x0628A4B4: 003840f9  ldr x0, [x0, #0x70]
0x0628A4B8: 58d93b97  bl #0x3180a18
0x0628A4BC: 28008052  movz w8, #0x1
0x0628A4C0: 68d21339  strb w8, [x19, #0x4f4]
0x0628A4C4: 800240f9  ldr x0, [x20]
0x0628A4C8: f6d93b97  bl #0x3180ca0
0x0628A4CC: e1031faa  mov x1, xzr
0x0628A4D0: f30300aa  mov x19, x0
0x0628A4D4: 4a40d197  bl #0x56da5fc
0x0628A4D8: 880240f9  ldr x8, [x20]
0x0628A4DC: e10313aa  mov x1, x19
0x0628A4E0: 085d40f9  ldr x8, [x8, #0xb8]
0x0628A4E4: 130100f9  str x19, [x8]
0x0628A4E8: 880240f9  ldr x8, [x20]
0x0628A4EC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0628A4F0: 005d40f9  ldr x0, [x8, #0xb8]
0x0628A4F4: fe0742f8  ldr x30, [sp], #0x20
0x0628A4F8: 33d93b17  b #0x31809c4

; RVA 0x628A4FC | public void .ctor() { }
; bytes=8 sha256=b3d613c846e533814672d733cce3ab250804c95b113c2dd431a43f798b51dae4 status=arm64_complete_bound indexed_start=True
0x0628A4FC: e1031faa  mov x1, xzr
0x0628A500: 3f40d117  b #0x56da5fc

; RVA 0x628A504 | internal bool <IsFull>b__62_0(Entity entity) { }
; bytes=12 sha256=cb8c1dcdae94f2721210b893a4e9fd212770445fd068ece19c82938f1ca81ac0 status=arm64_complete_bound indexed_start=True
0x0628A504: 3f0000f1  cmp x1, #0
0x0628A508: e0079f1a  cset w0, ne
0x0628A50C: c0035fd6  ret

; RVA 0x628A510 | internal bool <NumFreeSlots>b__65_0(Entity entity) { }
; bytes=12 sha256=89595a0bc1d3a4a9a7d126df308f3f0d0c0d9afa1e5e9023e24d9120b63ae4b7 status=arm64_complete_bound indexed_start=True
0x0628A510: 3f0000f1  cmp x1, #0
0x0628A514: e0179f1a  cset w0, eq
0x0628A518: c0035fd6  ret

; RVA 0x628A51C | internal bool <NumFreeProducerSlots>b__66_0(Entity entity) { }
; bytes=12 sha256=89595a0bc1d3a4a9a7d126df308f3f0d0c0d9afa1e5e9023e24d9120b63ae4b7 status=arm64_complete_bound indexed_start=True
0x0628A51C: 3f0000f1  cmp x1, #0
0x0628A520: e0179f1a  cset w0, eq
0x0628A524: c0035fd6  ret

; RVA 0x628A528 | internal bool <SendItemAddedToInventoryEvent>b__79_0(Entity entity) { }
; bytes=12 sha256=89595a0bc1d3a4a9a7d126df308f3f0d0c0d9afa1e5e9023e24d9120b63ae4b7 status=arm64_complete_bound indexed_start=True
0x0628A528: 3f0000f1  cmp x1, #0
0x0628A52C: e0179f1a  cset w0, eq
0x0628A530: c0035fd6  ret

; RVA 0x628A534 | internal bool <SendItemRemovedFromInventoryEvent>b__80_0(Entity entity) { }
; bytes=12 sha256=89595a0bc1d3a4a9a7d126df308f3f0d0c0d9afa1e5e9023e24d9120b63ae4b7 status=arm64_complete_bound indexed_start=True
0x0628A534: 3f0000f1  cmp x1, #0
0x0628A538: e0179f1a  cset w0, eq
0x0628A53C: c0035fd6  ret

; RVA 0x628A540 | internal bool <UpdateEntitiesToNewMergeItemList>b__98_0(InventorySlotComponent item) { }
; bytes=32 sha256=39c3b2bdf8aac9e9ac3f8722444761323934bf7c2011bfe614b9b462578531d2 status=arm64_complete_bound indexed_start=True
0x0628A540: fe0f1ff8  str x30, [sp, #-0x10]!
0x0628A544: c10000b4  cbz x1, #0x628a55c
0x0628A548: 282c40b9  ldr w8, [x1, #0x2c]
0x0628A54C: 1f050071  cmp w8, #1
0x0628A550: e0179f1a  cset w0, eq
0x0628A554: fe0741f8  ldr x30, [sp], #0x10
0x0628A558: c0035fd6  ret
0x0628A55C: d4d93b97  bl #0x3180cac

; RVA 0x628A560 | internal IMergeItem <TryUnlockSlots>b__101_2(Tuple<IMergeItem, int> tuple) { }
; bytes=68 sha256=3a9395666156069714d30079a28a7d6740dcb36bcd9a56ada9a517fc9de7023e status=arm64_complete_bound indexed_start=True
0x0628A560: fe0f1ef8  str x30, [sp, #-0x20]!
0x0628A564: f44f01a9  stp x20, x19, [sp, #0x10]
0x0628A568: d4d400f0  adrp x20, #0x7d25000
0x0628A56C: 88d65339  ldrb w8, [x20, #0x4f5]
0x0628A570: f30301aa  mov x19, x1
0x0628A574: c8000037  tbnz w8, #0, #0x628a58c
0x0628A578: e0a200b0  adrp x0, #0x76e7000
0x0628A57C: 009042f9  ldr x0, [x0, #0x520]
0x0628A580: 26d93b97  bl #0x3180a18
0x0628A584: 28008052  movz w8, #0x1
0x0628A588: 88d61339  strb w8, [x20, #0x4f5]
0x0628A58C: b30000b4  cbz x19, #0x628a5a0
0x0628A590: 600a40f9  ldr x0, [x19, #0x10]
0x0628A594: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0628A598: fe0742f8  ldr x30, [sp], #0x20
0x0628A59C: c0035fd6  ret
0x0628A5A0: c3d93b97  bl #0x3180cac

; RVA 0x628A5A4 | internal string <AddUnlockedSlot>b__102_0(IMergeItem mergeItem) { }
; bytes=156 sha256=32118b820f849f0edb93bf8c38c988ae8fd2b83be63cb946218eb7412c5c4410 status=arm64_complete_bound indexed_start=True
0x0628A5A4: fe0f1ef8  str x30, [sp, #-0x20]!
0x0628A5A8: f44f01a9  stp x20, x19, [sp, #0x10]
0x0628A5AC: d4d400f0  adrp x20, #0x7d25000
0x0628A5B0: 88da5339  ldrb w8, [x20, #0x4f6]
0x0628A5B4: f30301aa  mov x19, x1
0x0628A5B8: c8000037  tbnz w8, #0, #0x628a5d0
0x0628A5BC: 609f00f0  adrp x0, #0x7679000
0x0628A5C0: 001044f9  ldr x0, [x0, #0x820]
0x0628A5C4: 15d93b97  bl #0x3180a18
0x0628A5C8: 28008052  movz w8, #0x1
0x0628A5CC: 88da1339  strb w8, [x20, #0x4f6]
0x0628A5D0: 730300b4  cbz x19, #0x628a63c
0x0628A5D4: 6a9f00f0  adrp x10, #0x7679000
0x0628A5D8: 680240f9  ldr x8, [x19]
0x0628A5DC: 4a1144f9  ldr x10, [x10, #0x820]
0x0628A5E0: 095d4279  ldrh w9, [x8, #0x12e]
0x0628A5E4: 410140f9  ldr x1, [x10]
0x0628A5E8: 290100b4  cbz x9, #0x628a60c
0x0628A5EC: 0a5940f9  ldr x10, [x8, #0xb0]
0x0628A5F0: 4a210091  add x10, x10, #8
0x0628A5F4: 4b815ff8  ldur x11, [x10, #-8]
0x0628A5F8: 7f0101eb  cmp x11, x1
0x0628A5FC: 00010054  b.eq #0x628a61c
0x0628A600: 290500f1  subs x9, x9, #1
0x0628A604: 4a410091  add x10, x10, #0x10
0x0628A608: 61ffff54  b.ne #0x628a5f4
0x0628A60C: e00313aa  mov x0, x19
0x0628A610: e2031f2a  mov w2, wzr
0x0628A614: 3f313b97  bl #0x3156b10
0x0628A618: 04000014  b #0x628a628
0x0628A61C: 490180b9  ldrsw x9, [x10]
0x0628A620: 0811098b  add x8, x8, x9, lsl #4
0x0628A624: 00e10491  add x0, x8, #0x138
0x0628A628: 020440a9  ldp x2, x1, [x0]
0x0628A62C: e00313aa  mov x0, x19
0x0628A630: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0628A634: fe0742f8  ldr x30, [sp], #0x20
0x0628A638: 40001fd6  br x2
0x0628A63C: 9cd93b97  bl #0x3180cac

; RVA 0x628A640 | internal bool <AddUnlockedSlot>b__102_1(Entity entity) { }
; bytes=12 sha256=89595a0bc1d3a4a9a7d126df308f3f0d0c0d9afa1e5e9023e24d9120b63ae4b7 status=arm64_complete_bound indexed_start=True
0x0628A640: 3f0000f1  cmp x1, #0
0x0628A644: e0179f1a  cset w0, eq
0x0628A648: c0035fd6  ret

