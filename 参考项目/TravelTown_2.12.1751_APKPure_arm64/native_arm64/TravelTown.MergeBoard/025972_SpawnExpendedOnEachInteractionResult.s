; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25972 Merger.MergeBoard.Data.TickResultArgs.SpawnExpendedOnEachInteractionResult
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9ACA8 | public Entity get_Entity() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06A9ACA8: 000840f9  ldr x0, [x0, #0x10]
0x06A9ACAC: c0035fd6  ret

; RVA 0x6A9ACB0 | public void set_Entity(Entity value) { }
; bytes=8 sha256=e515c3c559cf58a4c9a350da21d16654f98bb663d2f91979aeffcd498b22633c status=arm64_complete_bound indexed_start=True
0x06A9ACB0: 010c01f8  str x1, [x0, #0x10]!
0x06A9ACB4: 44971b17  b #0x31809c4

; RVA 0x6A9ACB8 | public int get_Position() { }
; bytes=8 sha256=50abf56e70bf4ffd353b0c6ed3c4e4880c6169bcd84263b80a4680f2ca7fb9ab status=arm64_complete_bound indexed_start=True
0x06A9ACB8: 001840b9  ldr w0, [x0, #0x18]
0x06A9ACBC: c0035fd6  ret

; RVA 0x6A9ACC0 | public void set_Position(int value) { }
; bytes=8 sha256=6e9ff5dd14743d62b4c65ceed8cc7444a06b1f6a6df852c7ffa011f059b9080f status=arm64_complete_bound indexed_start=True
0x06A9ACC0: 011800b9  str w1, [x0, #0x18]
0x06A9ACC4: c0035fd6  ret

; RVA 0x6A9ACC8 | public string get_Reason() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x06A9ACC8: 001040f9  ldr x0, [x0, #0x20]
0x06A9ACCC: c0035fd6  ret

; RVA 0x6A9ACD0 | public void set_Reason(string value) { }
; bytes=8 sha256=1ee1201c2d5e62beeafd566f425d407681292408fcc505614715be1dbf4f7026 status=arm64_complete_bound indexed_start=True
0x06A9ACD0: 010c02f8  str x1, [x0, #0x20]!
0x06A9ACD4: 3c971b17  b #0x31809c4

; RVA 0x6A9ACD8 | public void .ctor() { }
; bytes=8 sha256=6c04504bf2002927399f4bb9eac387de948aff5c1e4d114aabc3c2e6aac863fa status=arm64_complete_bound indexed_start=True
0x06A9ACD8: e1031faa  mov x1, xzr
0x06A9ACDC: 48feb017  b #0x56da5fc

