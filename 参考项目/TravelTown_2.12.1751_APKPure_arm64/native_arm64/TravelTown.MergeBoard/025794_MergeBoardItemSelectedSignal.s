; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25794 Merger.MergeBoard.Signals.MergeBoardItemSelectedSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A7A9E4 | public Entity get_ItemViewEntity() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06A7A9E4: 000840f9  ldr x0, [x0, #0x10]
0x06A7A9E8: c0035fd6  ret

; RVA 0x6A7A9EC | public void .ctor(Entity itemViewEntity) { }
; bytes=48 sha256=cd7bc1b29cf8a471079a53497b8de69ced466530e418d20a6997b77840801b7e status=arm64_complete_bound indexed_start=True
0x06A7A9EC: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A7A9F0: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A7A9F4: f30301aa  mov x19, x1
0x06A7A9F8: e1031faa  mov x1, xzr
0x06A7A9FC: f40300aa  mov x20, x0
0x06A7AA00: ff7eb197  bl #0x56da5fc
0x06A7AA04: 930e01f8  str x19, [x20, #0x10]!
0x06A7AA08: e00314aa  mov x0, x20
0x06A7AA0C: e10313aa  mov x1, x19
0x06A7AA10: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A7AA14: fe0742f8  ldr x30, [sp], #0x20
0x06A7AA18: eb171c17  b #0x31809c4

