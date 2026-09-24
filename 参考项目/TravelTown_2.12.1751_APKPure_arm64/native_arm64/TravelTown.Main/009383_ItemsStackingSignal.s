; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 9383 Merger.Game.Signal.ItemsStackingSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x676BB88 | public BoardItemPosition get_Position() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x0676BB88: 000840f9  ldr x0, [x0, #0x10]
0x0676BB8C: c0035fd6  ret

; RVA 0x676BB90 | public int get_StackSizeAdded() { }
; bytes=8 sha256=50abf56e70bf4ffd353b0c6ed3c4e4880c6169bcd84263b80a4680f2ca7fb9ab status=arm64_complete_bound indexed_start=True
0x0676BB90: 001840b9  ldr w0, [x0, #0x18]
0x0676BB94: c0035fd6  ret

; RVA 0x676BB98 | public int get_TotalStackSize() { }
; bytes=8 sha256=7a2c484f16193ad2c5617bbe6704b2ccbdcc31004cfa1370a3ba4533f12de7f9 status=arm64_complete_bound indexed_start=True
0x0676BB98: 001c40b9  ldr w0, [x0, #0x1c]
0x0676BB9C: c0035fd6  ret

; RVA 0x676BBA0 | public void .ctor(BoardItemPosition position, int stackSizeAdded, int totalStackSize) { }
; bytes=60 sha256=0ece9d54862bacf3d6b67aacdb4107c1b00bc3af8beb5d39b020e1d40408d096 status=arm64_complete_bound indexed_start=True
0x0676BBA0: fe0f1df8  str x30, [sp, #-0x30]!
0x0676BBA4: f65701a9  stp x22, x21, [sp, #0x10]
0x0676BBA8: f44f02a9  stp x20, x19, [sp, #0x20]
0x0676BBAC: f50301aa  mov x21, x1
0x0676BBB0: e1031faa  mov x1, xzr
0x0676BBB4: f303032a  mov w19, w3
0x0676BBB8: f403022a  mov w20, w2
0x0676BBBC: f60300aa  mov x22, x0
0x0676BBC0: 8fbabd97  bl #0x56da5fc
0x0676BBC4: d50a00f9  str x21, [x22, #0x10]
0x0676BBC8: d44e0329  stp w20, w19, [x22, #0x18]
0x0676BBCC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0676BBD0: f65741a9  ldp x22, x21, [sp, #0x10]
0x0676BBD4: fe0743f8  ldr x30, [sp], #0x30
0x0676BBD8: c0035fd6  ret

