; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25934 Merger.MergeBoard.Data.TickResultArgs.BoardIsFullResult
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9A188 | public void .ctor(Entity entity) { }
; bytes=48 sha256=b473f3690ad40ac24b0e4de3f98f147b3d478b9541d26c46539a629864c666be status=arm64_complete_bound indexed_start=True
0x06A9A188: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A9A18C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A9A190: f30301aa  mov x19, x1
0x06A9A194: e1031faa  mov x1, xzr
0x06A9A198: f40300aa  mov x20, x0
0x06A9A19C: 1801b197  bl #0x56da5fc
0x06A9A1A0: 930e01f8  str x19, [x20, #0x10]!
0x06A9A1A4: e00314aa  mov x0, x20
0x06A9A1A8: e10313aa  mov x1, x19
0x06A9A1AC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A9A1B0: fe0742f8  ldr x30, [sp], #0x20
0x06A9A1B4: 049a1b17  b #0x31809c4

; RVA 0x6A9A1B8 | public Entity get_InteractedEntity() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06A9A1B8: 000840f9  ldr x0, [x0, #0x10]
0x06A9A1BC: c0035fd6  ret

; RVA 0x6A9A1C0 | public void set_InteractedEntity(Entity value) { }
; bytes=8 sha256=8572f13af88c60b50afc435966d67a1fa05b5d34780bf4f5e6c4ac2d1067c4eb status=arm64_complete_bound indexed_start=True
0x06A9A1C0: 010c01f8  str x1, [x0, #0x10]!
0x06A9A1C4: 009a1b17  b #0x31809c4

