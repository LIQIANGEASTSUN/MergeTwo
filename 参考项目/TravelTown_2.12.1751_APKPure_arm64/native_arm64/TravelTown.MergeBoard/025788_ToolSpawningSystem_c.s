; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25788 .ToolSpawningSystem.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A79840 | private static void .cctor() { }
; bytes=104 sha256=19d7198cc8d0d9ea1eba441667567b8bfc613e20be5e41230484c1472a3e210c status=arm64_complete_bound indexed_start=True
0x06A79840: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A79844: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A79848: 939500b0  adrp x19, #0x7d2a000
0x06A7984C: d4650090  adrp x20, #0x7731000
0x06A79850: 68765c39  ldrb w8, [x19, #0x71d]
0x06A79854: 94de43f9  ldr x20, [x20, #0x7b8]
0x06A79858: c8000037  tbnz w8, #0, #0x6a79870
0x06A7985C: c0650090  adrp x0, #0x7731000
0x06A79860: 00dc43f9  ldr x0, [x0, #0x7b8]
0x06A79864: 6d1c1c97  bl #0x3180a18
0x06A79868: 28008052  movz w8, #0x1
0x06A7986C: 68761c39  strb w8, [x19, #0x71d]
0x06A79870: 800240f9  ldr x0, [x20]
0x06A79874: 0b1d1c97  bl #0x3180ca0
0x06A79878: e1031faa  mov x1, xzr
0x06A7987C: f30300aa  mov x19, x0
0x06A79880: 5f83b197  bl #0x56da5fc
0x06A79884: 880240f9  ldr x8, [x20]
0x06A79888: e10313aa  mov x1, x19
0x06A7988C: 085d40f9  ldr x8, [x8, #0xb8]
0x06A79890: 130100f9  str x19, [x8]
0x06A79894: 880240f9  ldr x8, [x20]
0x06A79898: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A7989C: 005d40f9  ldr x0, [x8, #0xb8]
0x06A798A0: fe0742f8  ldr x30, [sp], #0x20
0x06A798A4: 481c1c17  b #0x31809c4

; RVA 0x6A798A8 | public void .ctor() { }
; bytes=8 sha256=9f9403bbcf5efc139bfe30c4cd2a7fb2ad07367c106fe557705d1e2a35c7756a status=arm64_complete_bound indexed_start=True
0x06A798A8: e1031faa  mov x1, xzr
0x06A798AC: 5483b117  b #0x56da5fc

; RVA 0x6A798B0 | internal bool <SpawnTool>b__5_0(ValueTuple<Entity, IdComponent> query) { }
; bytes=32 sha256=05c4b7ebc698f963153b1ee93d54be21753f025bc9d6c23f6ab8a55c475cb84e status=arm64_complete_bound indexed_start=True
0x06A798B0: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A798B4: 200040f9  ldr x0, [x1]
0x06A798B8: e1031faa  mov x1, xzr
0x06A798BC: 0a340094  bl #0x6a868e4
0x06A798C0: e803202a  mvn w8, w0
0x06A798C4: 00010012  and w0, w8, #1
0x06A798C8: fe0741f8  ldr x30, [sp], #0x10
0x06A798CC: c0035fd6  ret

; RVA 0x6A798D0 | internal string <SpawnTool>b__5_1(ValueTuple<Entity, IdComponent> query) { }
; bytes=8 sha256=b2502681cf514e9256eb830e0f597cc577aec290e3536b084b9dd09049305768 status=arm64_complete_bound indexed_start=True
0x06A798D0: 200440f9  ldr x0, [x1, #8]
0x06A798D4: c0035fd6  ret

