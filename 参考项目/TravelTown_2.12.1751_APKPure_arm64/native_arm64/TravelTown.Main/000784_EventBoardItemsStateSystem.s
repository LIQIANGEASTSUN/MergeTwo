; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 784 MergeEngine.ECS.Systems.State.Board.Event.EventBoardItemsStateSystem
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x64EAD54 | public void .ctor() { }
; bytes=72 sha256=6b6a314dd96b7985eddcec2127e2059f7097045b28fc171e4e6abdadc1b0eb3a status=arm64_complete_bound indexed_start=True
0x064EAD54: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x064EAD58: f44f01a9  stp x20, x19, [sp, #0x10]
0x064EAD5C: f4c100b0  adrp x20, #0x7d27000
0x064EAD60: 959000b0  adrp x21, #0x76fb000
0x064EAD64: 88364139  ldrb w8, [x20, #0x4d]
0x064EAD68: b54645f9  ldr x21, [x21, #0xa88]
0x064EAD6C: f30300aa  mov x19, x0
0x064EAD70: c8000037  tbnz w8, #0, #0x64ead88
0x064EAD74: 809000b0  adrp x0, #0x76fb000
0x064EAD78: 004445f9  ldr x0, [x0, #0xa88]
0x064EAD7C: 27573297  bl #0x3180a18
0x064EAD80: 28008052  movz w8, #0x1
0x064EAD84: 88360139  strb w8, [x20, #0x4d]
0x064EAD88: a10240f9  ldr x1, [x21]
0x064EAD8C: e00313aa  mov x0, x19
0x064EAD90: f44f41a9  ldp x20, x19, [sp, #0x10]
0x064EAD94: fe57c2a8  ldp x30, x21, [sp], #0x20
0x064EAD98: 81ba9c17  b #0x4c1979c

