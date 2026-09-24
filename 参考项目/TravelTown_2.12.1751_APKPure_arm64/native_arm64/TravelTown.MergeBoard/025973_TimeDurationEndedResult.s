; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25973 Merger.MergeBoard.Data.TickResultArgs.TimeDurationEndedResult
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9ACE0 | public Entity get_Entity() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06A9ACE0: 000840f9  ldr x0, [x0, #0x10]
0x06A9ACE4: c0035fd6  ret

; RVA 0x6A9ACE8 | public void set_Entity(Entity value) { }
; bytes=8 sha256=99a0d69fb14ef90577ad746a130f34ab00eeda62e68b34aee8034729394d9e3d status=arm64_complete_bound indexed_start=True
0x06A9ACE8: 010c01f8  str x1, [x0, #0x10]!
0x06A9ACEC: 36971b17  b #0x31809c4

; RVA 0x6A9ACF0 | public int get_Position() { }
; bytes=8 sha256=50abf56e70bf4ffd353b0c6ed3c4e4880c6169bcd84263b80a4680f2ca7fb9ab status=arm64_complete_bound indexed_start=True
0x06A9ACF0: 001840b9  ldr w0, [x0, #0x18]
0x06A9ACF4: c0035fd6  ret

; RVA 0x6A9ACF8 | public void set_Position(int value) { }
; bytes=8 sha256=6e9ff5dd14743d62b4c65ceed8cc7444a06b1f6a6df852c7ffa011f059b9080f status=arm64_complete_bound indexed_start=True
0x06A9ACF8: 011800b9  str w1, [x0, #0x18]
0x06A9ACFC: c0035fd6  ret

; RVA 0x6A9AD00 | public void .ctor() { }
; bytes=8 sha256=d2369987d0ab3de1e6b2d3486e0d8087732b2fc9a63c5567d2cdeb62a5087414 status=arm64_complete_bound indexed_start=True
0x06A9AD00: e1031faa  mov x1, xzr
0x06A9AD04: 3efeb017  b #0x56da5fc

