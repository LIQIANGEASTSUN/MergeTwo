; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 230 MergeEngine.Signal.Items.ItemUndoCompleteSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x5FF3AB8 | public Entity get_Item() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x05FF3AB8: 000840f9  ldr x0, [x0, #0x10]
0x05FF3ABC: c0035fd6  ret

; RVA 0x5FF3AC0 | public void .ctor(Entity item) { }
; bytes=48 sha256=0db2e273c04b3f627df7e4768ea50d3f76e3978e979aece7a0d4f12091c244cb status=arm64_complete_bound indexed_start=True
0x05FF3AC0: fe0f1ef8  str x30, [sp, #-0x20]!
0x05FF3AC4: f44f01a9  stp x20, x19, [sp, #0x10]
0x05FF3AC8: f30301aa  mov x19, x1
0x05FF3ACC: e1031faa  mov x1, xzr
0x05FF3AD0: f40300aa  mov x20, x0
0x05FF3AD4: ca9adb97  bl #0x56da5fc
0x05FF3AD8: 930e01f8  str x19, [x20, #0x10]!
0x05FF3ADC: e00314aa  mov x0, x20
0x05FF3AE0: e10313aa  mov x1, x19
0x05FF3AE4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x05FF3AE8: fe0742f8  ldr x30, [sp], #0x20
0x05FF3AEC: b6334617  b #0x31809c4

