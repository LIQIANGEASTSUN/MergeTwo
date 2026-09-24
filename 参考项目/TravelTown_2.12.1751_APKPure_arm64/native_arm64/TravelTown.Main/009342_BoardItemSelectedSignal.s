; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 9342 Merger.Game.Signal.BoardItemSelectedSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x676ABC8 | public SelectedBoardItem get_SelectedBoardItem() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x0676ABC8: 000840f9  ldr x0, [x0, #0x10]
0x0676ABCC: c0035fd6  ret

; RVA 0x676ABD0 | public void .ctor(SelectedBoardItem selectedBoardItem) { }
; bytes=48 sha256=f7014348c992fd19841ad830d764657c84b8021d1c22a44f0fe882651d41eaf3 status=arm64_complete_bound indexed_start=True
0x0676ABD0: fe0f1ef8  str x30, [sp, #-0x20]!
0x0676ABD4: f44f01a9  stp x20, x19, [sp, #0x10]
0x0676ABD8: f30301aa  mov x19, x1
0x0676ABDC: e1031faa  mov x1, xzr
0x0676ABE0: f40300aa  mov x20, x0
0x0676ABE4: 86bebd97  bl #0x56da5fc
0x0676ABE8: 930e01f8  str x19, [x20, #0x10]!
0x0676ABEC: e00314aa  mov x0, x20
0x0676ABF0: e10313aa  mov x1, x19
0x0676ABF4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0676ABF8: fe0742f8  ldr x30, [sp], #0x20
0x0676ABFC: 72572817  b #0x31809c4

