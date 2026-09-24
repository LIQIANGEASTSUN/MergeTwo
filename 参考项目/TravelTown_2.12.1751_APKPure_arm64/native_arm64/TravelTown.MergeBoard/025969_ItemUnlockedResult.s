; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25969 Merger.MergeBoard.Data.TickResultArgs.ItemUnlockedResult
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9AC18 | public Entity get_Entity() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06A9AC18: 000840f9  ldr x0, [x0, #0x10]
0x06A9AC1C: c0035fd6  ret

; RVA 0x6A9AC20 | public void set_Entity(Entity value) { }
; bytes=8 sha256=511e465616d999826dfb6f022b58fb5b69d650f1a8a8e09360158ec839197f80 status=arm64_complete_bound indexed_start=True
0x06A9AC20: 010c01f8  str x1, [x0, #0x10]!
0x06A9AC24: 68971b17  b #0x31809c4

; RVA 0x6A9AC28 | public int get_Position() { }
; bytes=8 sha256=50abf56e70bf4ffd353b0c6ed3c4e4880c6169bcd84263b80a4680f2ca7fb9ab status=arm64_complete_bound indexed_start=True
0x06A9AC28: 001840b9  ldr w0, [x0, #0x18]
0x06A9AC2C: c0035fd6  ret

; RVA 0x6A9AC30 | public void set_Position(int value) { }
; bytes=8 sha256=6e9ff5dd14743d62b4c65ceed8cc7444a06b1f6a6df852c7ffa011f059b9080f status=arm64_complete_bound indexed_start=True
0x06A9AC30: 011800b9  str w1, [x0, #0x18]
0x06A9AC34: c0035fd6  ret

; RVA 0x6A9AC38 | public void .ctor() { }
; bytes=8 sha256=f55dd0756f9f0827af1b8b0e962a96c126fa0249023bc46788b8b59cb05005f4 status=arm64_complete_bound indexed_start=True
0x06A9AC38: e1031faa  mov x1, xzr
0x06A9AC3C: 70feb017  b #0x56da5fc

