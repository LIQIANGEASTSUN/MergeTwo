; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25795 Merger.MergeBoard.Signals.MergeBoardNewItemCreatedSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A7AA1C | public string get_ItemId() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06A7AA1C: 000840f9  ldr x0, [x0, #0x10]
0x06A7AA20: c0035fd6  ret

; RVA 0x6A7AA24 | public void .ctor(string itemId) { }
; bytes=48 sha256=56398fee3d5d9ff2c80d3944757b13fdb931403baae89d32fc8baa10baede6e6 status=arm64_complete_bound indexed_start=True
0x06A7AA24: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A7AA28: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A7AA2C: f30301aa  mov x19, x1
0x06A7AA30: e1031faa  mov x1, xzr
0x06A7AA34: f40300aa  mov x20, x0
0x06A7AA38: f17eb197  bl #0x56da5fc
0x06A7AA3C: 930e01f8  str x19, [x20, #0x10]!
0x06A7AA40: e00314aa  mov x0, x20
0x06A7AA44: e10313aa  mov x1, x19
0x06A7AA48: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A7AA4C: fe0742f8  ldr x30, [sp], #0x20
0x06A7AA50: dd171c17  b #0x31809c4

