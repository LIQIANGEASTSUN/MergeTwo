; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 782 MergeEngine.ECS.Systems.State.Board.Event.EventBoardInventorySlotsStateSystem
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x64EACC4 | public void .ctor() { }
; bytes=72 sha256=84daa459520d24a10fbbc6b6aa44d03282f9eacc96a7df274b581304024f5b7c status=arm64_complete_bound indexed_start=True
0x064EACC4: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x064EACC8: f44f01a9  stp x20, x19, [sp, #0x10]
0x064EACCC: f4c100b0  adrp x20, #0x7d27000
0x064EACD0: 959000b0  adrp x21, #0x76fb000
0x064EACD4: 882e4139  ldrb w8, [x20, #0x4b]
0x064EACD8: b53e45f9  ldr x21, [x21, #0xa78]
0x064EACDC: f30300aa  mov x19, x0
0x064EACE0: c8000037  tbnz w8, #0, #0x64eacf8
0x064EACE4: 809000b0  adrp x0, #0x76fb000
0x064EACE8: 003c45f9  ldr x0, [x0, #0xa78]
0x064EACEC: 4b573297  bl #0x3180a18
0x064EACF0: 28008052  movz w8, #0x1
0x064EACF4: 882e0139  strb w8, [x20, #0x4b]
0x064EACF8: a10240f9  ldr x1, [x21]
0x064EACFC: e00313aa  mov x0, x19
0x064EAD00: f44f41a9  ldp x20, x19, [sp, #0x10]
0x064EAD04: fe57c2a8  ldp x30, x21, [sp], #0x20
0x064EAD08: c5b49c17  b #0x4c1801c

