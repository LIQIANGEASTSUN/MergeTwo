; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 783 MergeEngine.ECS.Systems.State.Board.Event.EventBoardInventoryStateSystem
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x64EAD0C | public void .ctor() { }
; bytes=72 sha256=9f1cba0f6fe29b39ece3da0729e245a5c6f7e16916d5dd51889bd9ea5870b88b status=arm64_complete_bound indexed_start=True
0x064EAD0C: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x064EAD10: f44f01a9  stp x20, x19, [sp, #0x10]
0x064EAD14: f4c100b0  adrp x20, #0x7d27000
0x064EAD18: 959000b0  adrp x21, #0x76fb000
0x064EAD1C: 88324139  ldrb w8, [x20, #0x4c]
0x064EAD20: b54245f9  ldr x21, [x21, #0xa80]
0x064EAD24: f30300aa  mov x19, x0
0x064EAD28: c8000037  tbnz w8, #0, #0x64ead40
0x064EAD2C: 809000b0  adrp x0, #0x76fb000
0x064EAD30: 004045f9  ldr x0, [x0, #0xa80]
0x064EAD34: 39573297  bl #0x3180a18
0x064EAD38: 28008052  movz w8, #0x1
0x064EAD3C: 88320139  strb w8, [x20, #0x4c]
0x064EAD40: a10240f9  ldr x1, [x21]
0x064EAD44: e00313aa  mov x0, x19
0x064EAD48: f44f41a9  ldp x20, x19, [sp, #0x10]
0x064EAD4C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x064EAD50: c2b69c17  b #0x4c18858

