; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25954 Merger.MergeBoard.Data.TickResultArgs.ItemBeingTimeUnlockedResult
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9A6E8 | public Entity get_Entity() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06A9A6E8: 000840f9  ldr x0, [x0, #0x10]
0x06A9A6EC: c0035fd6  ret

; RVA 0x6A9A6F0 | public void set_Entity(Entity value) { }
; bytes=8 sha256=0f86fd85291d7bcf1da1cb616661ad797aca8c4f275cc69c64149f16d5a847e5 status=arm64_complete_bound indexed_start=True
0x06A9A6F0: 010c01f8  str x1, [x0, #0x10]!
0x06A9A6F4: b4981b17  b #0x31809c4

; RVA 0x6A9A6F8 | public void .ctor() { }
; bytes=8 sha256=a2fb631d083b39d42c967549c08ea057c338f270bc81d29439b5adfaa2054563 status=arm64_complete_bound indexed_start=True
0x06A9A6F8: e1031faa  mov x1, xzr
0x06A9A6FC: c0ffb017  b #0x56da5fc

