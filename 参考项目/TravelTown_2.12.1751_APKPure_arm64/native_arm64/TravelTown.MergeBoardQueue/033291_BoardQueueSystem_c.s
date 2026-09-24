; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 33291 .BoardQueueSystem.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A575B8 | private static void .cctor() { }
; bytes=104 sha256=5bd5586e4e476a66c4bb7d0e6552d9e77a4be43e3ff312b5d2afe96bbbe37fa6 status=arm64_complete_bound indexed_start=True
0x06A575B8: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A575BC: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A575C0: 939600f0  adrp x19, #0x7d2a000
0x06A575C4: d46600b0  adrp x20, #0x7730000
0x06A575C8: 68fa5739  ldrb w8, [x19, #0x5fe]
0x06A575CC: 947241f9  ldr x20, [x20, #0x2e0]
0x06A575D0: c8000037  tbnz w8, #0, #0x6a575e8
0x06A575D4: c06600b0  adrp x0, #0x7730000
0x06A575D8: 007041f9  ldr x0, [x0, #0x2e0]
0x06A575DC: 0fa51c97  bl #0x3180a18
0x06A575E0: 28008052  movz w8, #0x1
0x06A575E4: 68fa1739  strb w8, [x19, #0x5fe]
0x06A575E8: 800240f9  ldr x0, [x20]
0x06A575EC: ada51c97  bl #0x3180ca0
0x06A575F0: e1031faa  mov x1, xzr
0x06A575F4: f30300aa  mov x19, x0
0x06A575F8: 010cb297  bl #0x56da5fc
0x06A575FC: 880240f9  ldr x8, [x20]
0x06A57600: e10313aa  mov x1, x19
0x06A57604: 085d40f9  ldr x8, [x8, #0xb8]
0x06A57608: 130100f9  str x19, [x8]
0x06A5760C: 880240f9  ldr x8, [x20]
0x06A57610: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A57614: 005d40f9  ldr x0, [x8, #0xb8]
0x06A57618: fe0742f8  ldr x30, [sp], #0x20
0x06A5761C: eaa41c17  b #0x31809c4

; RVA 0x6A57620 | public void .ctor() { }
; bytes=8 sha256=a55ecb38d7d9c4cebb7adb3cf0c331a3023ca49e2cd57a4393dba2d269e62ac8 status=arm64_complete_bound indexed_start=True
0x06A57620: e1031faa  mov x1, xzr
0x06A57624: f60bb217  b #0x56da5fc

; RVA 0x6A57628 | internal int <TryFindEmptyPositionUsingModel>b__6_0(ValueTuple<Entity, BoardTilePositionComponent> e) { }
; bytes=8 sha256=c284374dd3c4e6853c28106ef7a9bed989c1c15635d14fc3131dabe43632d003 status=arm64_complete_bound indexed_start=True
0x06A57628: e00302aa  mov x0, x2
0x06A5762C: c0035fd6  ret

