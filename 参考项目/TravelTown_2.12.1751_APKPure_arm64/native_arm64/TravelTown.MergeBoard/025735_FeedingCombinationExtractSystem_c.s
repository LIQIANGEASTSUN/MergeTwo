; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25735 .FeedingCombinationExtractSystem.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A68380 | private static void .cctor() { }
; bytes=104 sha256=df3b3e419e019f1f8a31bc9d58259936b6a603824618b19584c9b91b87b311dd status=arm64_complete_bound indexed_start=True
0x06A68380: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A68384: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A68388: 139600d0  adrp x19, #0x7d2a000
0x06A6838C: 54660090  adrp x20, #0x7730000
0x06A68390: 68c25a39  ldrb w8, [x19, #0x6b0]
0x06A68394: 945e46f9  ldr x20, [x20, #0xcb8]
0x06A68398: c8000037  tbnz w8, #0, #0x6a683b0
0x06A6839C: 40660090  adrp x0, #0x7730000
0x06A683A0: 005c46f9  ldr x0, [x0, #0xcb8]
0x06A683A4: 9d611c97  bl #0x3180a18
0x06A683A8: 28008052  movz w8, #0x1
0x06A683AC: 68c21a39  strb w8, [x19, #0x6b0]
0x06A683B0: 800240f9  ldr x0, [x20]
0x06A683B4: 3b621c97  bl #0x3180ca0
0x06A683B8: e1031faa  mov x1, xzr
0x06A683BC: f30300aa  mov x19, x0
0x06A683C0: 8fc8b197  bl #0x56da5fc
0x06A683C4: 880240f9  ldr x8, [x20]
0x06A683C8: e10313aa  mov x1, x19
0x06A683CC: 085d40f9  ldr x8, [x8, #0xb8]
0x06A683D0: 130100f9  str x19, [x8]
0x06A683D4: 880240f9  ldr x8, [x20]
0x06A683D8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A683DC: 005d40f9  ldr x0, [x8, #0xb8]
0x06A683E0: fe0742f8  ldr x30, [sp], #0x20
0x06A683E4: 78611c17  b #0x31809c4

; RVA 0x6A683E8 | public void .ctor() { }
; bytes=8 sha256=cdbc82e5351287ae564e289534fa79424901e40b51b899ef1afdda9567b4d13f status=arm64_complete_bound indexed_start=True
0x06A683E8: e1031faa  mov x1, xzr
0x06A683EC: 84c8b117  b #0x56da5fc

; RVA 0x6A683F0 | internal bool <Tick>b__5_0(ValueTuple<Entity, FeedingCombinationComponent, DeadComponent, BoardTilePositionComponent> query) { }
; bytes=80 sha256=45fa04a2449e5d8abd1884126ee2d47667d74a36796149cab4edb72359e37a50 status=arm64_complete_bound indexed_start=True
0x06A683F0: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A683F4: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A683F8: 149600d0  adrp x20, #0x7d2a000
0x06A683FC: 88c65a39  ldrb w8, [x20, #0x6b1]
0x06A68400: f30301aa  mov x19, x1
0x06A68404: c8000037  tbnz w8, #0, #0x6a6841c
0x06A68408: 40660090  adrp x0, #0x7730000
0x06A6840C: 008c46f9  ldr x0, [x0, #0xd18]
0x06A68410: 82611c97  bl #0x3180a18
0x06A68414: 28008052  movz w8, #0x1
0x06A68418: 88c61a39  strb w8, [x20, #0x6b1]
0x06A6841C: 680640f9  ldr x8, [x19, #8]
0x06A68420: e80000b4  cbz x8, #0x6a6843c
0x06A68424: 081940b9  ldr w8, [x8, #0x18]
0x06A68428: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A6842C: 1f010071  cmp w8, #0
0x06A68430: e0d79f1a  cset w0, gt
0x06A68434: fe0742f8  ldr x30, [sp], #0x20
0x06A68438: c0035fd6  ret
0x06A6843C: 1c621c97  bl #0x3180cac

