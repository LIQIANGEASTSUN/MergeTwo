; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25913 .MergeBoardLayoutExtensions.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A99C34 | private static void .cctor() { }
; bytes=104 sha256=82ae401ca08f964cc7307efb07f27f26257879b71d2de8fda887f2265e44992a status=arm64_complete_bound indexed_start=True
0x06A99C34: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A99C38: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A99C3C: 939400b0  adrp x19, #0x7d2a000
0x06A99C40: d46400b0  adrp x20, #0x7732000
0x06A99C44: 68ce6039  ldrb w8, [x19, #0x833]
0x06A99C48: 94f642f9  ldr x20, [x20, #0x5e8]
0x06A99C4C: c8000037  tbnz w8, #0, #0x6a99c64
0x06A99C50: c06400b0  adrp x0, #0x7732000
0x06A99C54: 00f442f9  ldr x0, [x0, #0x5e8]
0x06A99C58: 709b1b97  bl #0x3180a18
0x06A99C5C: 28008052  movz w8, #0x1
0x06A99C60: 68ce2039  strb w8, [x19, #0x833]
0x06A99C64: 800240f9  ldr x0, [x20]
0x06A99C68: 0e9c1b97  bl #0x3180ca0
0x06A99C6C: e1031faa  mov x1, xzr
0x06A99C70: f30300aa  mov x19, x0
0x06A99C74: 6202b197  bl #0x56da5fc
0x06A99C78: 880240f9  ldr x8, [x20]
0x06A99C7C: e10313aa  mov x1, x19
0x06A99C80: 085d40f9  ldr x8, [x8, #0xb8]
0x06A99C84: 130100f9  str x19, [x8]
0x06A99C88: 880240f9  ldr x8, [x20]
0x06A99C8C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A99C90: 005d40f9  ldr x0, [x8, #0xb8]
0x06A99C94: fe0742f8  ldr x30, [sp], #0x20
0x06A99C98: 4b9b1b17  b #0x31809c4

; RVA 0x6A99C9C | public void .ctor() { }
; bytes=8 sha256=7dd8642df9ab2962a6fda723b2c32b74f019a5931967ebc61242db2e259c4f17 status=arm64_complete_bound indexed_start=True
0x06A99C9C: e1031faa  mov x1, xzr
0x06A99CA0: 5702b117  b #0x56da5fc

; RVA 0x6A99CA4 | internal int <TryGetClosestEmptyPositionFromContext>b__3_0(ValueTuple<Entity, BoardTilePositionComponent> e) { }
; bytes=8 sha256=c284374dd3c4e6853c28106ef7a9bed989c1c15635d14fc3131dabe43632d003 status=arm64_complete_bound indexed_start=True
0x06A99CA4: e00302aa  mov x0, x2
0x06A99CA8: c0035fd6  ret

; RVA 0x6A99CAC | internal int <TryGetRandomEmptyPositionIncludingDeadPosition>b__4_0(ValueTuple<Entity, BoardTilePositionComponent> e) { }
; bytes=8 sha256=c284374dd3c4e6853c28106ef7a9bed989c1c15635d14fc3131dabe43632d003 status=arm64_complete_bound indexed_start=True
0x06A99CAC: e00302aa  mov x0, x2
0x06A99CB0: c0035fd6  ret

; RVA 0x6A99CB4 | internal int <TryGetRandomEmptyPositionFromContext>b__5_0(ValueTuple<Entity, BoardTilePositionComponent> e) { }
; bytes=8 sha256=c284374dd3c4e6853c28106ef7a9bed989c1c15635d14fc3131dabe43632d003 status=arm64_complete_bound indexed_start=True
0x06A99CB4: e00302aa  mov x0, x2
0x06A99CB8: c0035fd6  ret

