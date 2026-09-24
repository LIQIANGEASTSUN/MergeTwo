; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25944 Merger.MergeBoard.Data.TickResultArgs.ExpendableItemRemovedResult
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9A37C | public Entity get_Entity() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06A9A37C: 000840f9  ldr x0, [x0, #0x10]
0x06A9A380: c0035fd6  ret

; RVA 0x6A9A384 | public void set_Entity(Entity value) { }
; bytes=8 sha256=5022f2cf91314e1fca021fa2f12bf229c6d51ab1aec0736dd894879b59d19602 status=arm64_complete_bound indexed_start=True
0x06A9A384: 010c01f8  str x1, [x0, #0x10]!
0x06A9A388: 8f991b17  b #0x31809c4

; RVA 0x6A9A38C | public int get_Position() { }
; bytes=8 sha256=50abf56e70bf4ffd353b0c6ed3c4e4880c6169bcd84263b80a4680f2ca7fb9ab status=arm64_complete_bound indexed_start=True
0x06A9A38C: 001840b9  ldr w0, [x0, #0x18]
0x06A9A390: c0035fd6  ret

; RVA 0x6A9A394 | public void set_Position(int value) { }
; bytes=8 sha256=6e9ff5dd14743d62b4c65ceed8cc7444a06b1f6a6df852c7ffa011f059b9080f status=arm64_complete_bound indexed_start=True
0x06A9A394: 011800b9  str w1, [x0, #0x18]
0x06A9A398: c0035fd6  ret

; RVA 0x6A9A39C | public string get_Reason() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x06A9A39C: 001040f9  ldr x0, [x0, #0x20]
0x06A9A3A0: c0035fd6  ret

; RVA 0x6A9A3A4 | public void set_Reason(string value) { }
; bytes=8 sha256=5c43d44f687fb308b77dde5a89c004855bcc57c433a154d7ad66d1dd7cf3be88 status=arm64_complete_bound indexed_start=True
0x06A9A3A4: 010c02f8  str x1, [x0, #0x20]!
0x06A9A3A8: 87991b17  b #0x31809c4

; RVA 0x6A9A3AC | public void .ctor() { }
; bytes=8 sha256=862bcf2ec31e53e9fc3d0fd9b5419c53d688b934bc845f7d356ad45fdedf3c27 status=arm64_complete_bound indexed_start=True
0x06A9A3AC: e1031faa  mov x1, xzr
0x06A9A3B0: 9300b117  b #0x56da5fc

