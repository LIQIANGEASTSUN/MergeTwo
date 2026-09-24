; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 9500 Merger.Game.Signal.Bubbles.TryRemoveBubbleSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x676E6F8 | public BoardItemPosition get_BoardItemPosition() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x0676E6F8: 000840f9  ldr x0, [x0, #0x10]
0x0676E6FC: c0035fd6  ret

; RVA 0x676E700 | public void .ctor(BoardItemPosition boardItemPosition) { }
; bytes=40 sha256=29cc1acdc5063d25e9aef4ec917221e4e652897ae68ac00a775ca820e6d161d1 status=arm64_complete_bound indexed_start=True
0x0676E700: fe0f1ef8  str x30, [sp, #-0x20]!
0x0676E704: f44f01a9  stp x20, x19, [sp, #0x10]
0x0676E708: f30301aa  mov x19, x1
0x0676E70C: e1031faa  mov x1, xzr
0x0676E710: f40300aa  mov x20, x0
0x0676E714: baafbd97  bl #0x56da5fc
0x0676E718: 930a00f9  str x19, [x20, #0x10]
0x0676E71C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0676E720: fe0742f8  ldr x30, [sp], #0x20
0x0676E724: c0035fd6  ret

