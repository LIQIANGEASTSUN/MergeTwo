; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25941 Merger.MergeBoard.Data.TickResultArgs.CooldownBlocked
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9A2CC | public void .ctor(Entity entity) { }
; bytes=48 sha256=dfa22f9055a93f23633a28e4a3df93b9d7411b623ffb7125b4f88b6302713e62 status=arm64_complete_bound indexed_start=True
0x06A9A2CC: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A9A2D0: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A9A2D4: f30301aa  mov x19, x1
0x06A9A2D8: e1031faa  mov x1, xzr
0x06A9A2DC: f40300aa  mov x20, x0
0x06A9A2E0: c700b197  bl #0x56da5fc
0x06A9A2E4: 930e01f8  str x19, [x20, #0x10]!
0x06A9A2E8: e00314aa  mov x0, x20
0x06A9A2EC: e10313aa  mov x1, x19
0x06A9A2F0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A9A2F4: fe0742f8  ldr x30, [sp], #0x20
0x06A9A2F8: b3991b17  b #0x31809c4

; RVA 0x6A9A2FC | public Entity get_Entity() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06A9A2FC: 000840f9  ldr x0, [x0, #0x10]
0x06A9A300: c0035fd6  ret

; RVA 0x6A9A304 | public void set_Entity(Entity value) { }
; bytes=8 sha256=9e7cb0f191efd9dd304da91a52012a8b362952fba76f370e2706970dc83a614d status=arm64_complete_bound indexed_start=True
0x06A9A304: 010c01f8  str x1, [x0, #0x10]!
0x06A9A308: af991b17  b #0x31809c4

