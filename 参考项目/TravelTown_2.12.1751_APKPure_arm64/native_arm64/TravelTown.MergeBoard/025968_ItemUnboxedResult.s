; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25968 Merger.MergeBoard.Data.TickResultArgs.ItemUnboxedResult
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9ABB0 | public Entity get_Entity() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06A9ABB0: 000840f9  ldr x0, [x0, #0x10]
0x06A9ABB4: c0035fd6  ret

; RVA 0x6A9ABB8 | public void set_Entity(Entity value) { }
; bytes=8 sha256=54597654a646b7fe97ffe58a798d7d437f342e21f4d8ccee8f04dc204fb7c284 status=arm64_complete_bound indexed_start=True
0x06A9ABB8: 010c01f8  str x1, [x0, #0x10]!
0x06A9ABBC: 82971b17  b #0x31809c4

; RVA 0x6A9ABC0 | public int get_Position() { }
; bytes=8 sha256=50abf56e70bf4ffd353b0c6ed3c4e4880c6169bcd84263b80a4680f2ca7fb9ab status=arm64_complete_bound indexed_start=True
0x06A9ABC0: 001840b9  ldr w0, [x0, #0x18]
0x06A9ABC4: c0035fd6  ret

; RVA 0x6A9ABC8 | public void set_Position(int value) { }
; bytes=8 sha256=6e9ff5dd14743d62b4c65ceed8cc7444a06b1f6a6df852c7ffa011f059b9080f status=arm64_complete_bound indexed_start=True
0x06A9ABC8: 011800b9  str w1, [x0, #0x18]
0x06A9ABCC: c0035fd6  ret

; RVA 0x6A9ABD0 | public string get_Reason() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x06A9ABD0: 001040f9  ldr x0, [x0, #0x20]
0x06A9ABD4: c0035fd6  ret

; RVA 0x6A9ABD8 | public void set_Reason(string value) { }
; bytes=8 sha256=bac725c49c405df2d378e0018fbaa4c6cdee2e47c148d0a22b191fe1f00a3d7f status=arm64_complete_bound indexed_start=True
0x06A9ABD8: 010c02f8  str x1, [x0, #0x20]!
0x06A9ABDC: 7a971b17  b #0x31809c4

; RVA 0x6A9ABE0 | public string get_MergedItemId1() { }
; bytes=8 sha256=c0b9896d6c3d8aacf384c0d0cf5d897e84f621efe31cc89c980be348eb9c6614 status=arm64_complete_bound indexed_start=True
0x06A9ABE0: 001440f9  ldr x0, [x0, #0x28]
0x06A9ABE4: c0035fd6  ret

; RVA 0x6A9ABE8 | public void set_MergedItemId1(string value) { }
; bytes=8 sha256=9b18e003cb94524924269b593b3fff2654e5bef102e7950ff1246fb4843457d7 status=arm64_complete_bound indexed_start=True
0x06A9ABE8: 018c02f8  str x1, [x0, #0x28]!
0x06A9ABEC: 76971b17  b #0x31809c4

; RVA 0x6A9ABF0 | public string get_MergedItemId2() { }
; bytes=8 sha256=6b819324b4a3bc2d390c83c7fe02ea41a1f57ae5d4f2a9b0c9256341a5b8d37f status=arm64_complete_bound indexed_start=True
0x06A9ABF0: 001840f9  ldr x0, [x0, #0x30]
0x06A9ABF4: c0035fd6  ret

; RVA 0x6A9ABF8 | public void set_MergedItemId2(string value) { }
; bytes=8 sha256=f19fd116d0cfc83af0c1571d8830ff2bdc395ddf24db8b961335090292ff13d4 status=arm64_complete_bound indexed_start=True
0x06A9ABF8: 010c03f8  str x1, [x0, #0x30]!
0x06A9ABFC: 72971b17  b #0x31809c4

; RVA 0x6A9AC00 | public int get_InteractionPosition() { }
; bytes=8 sha256=70b6226cdde2aa2e19c7cef1812dc4f3cd14b63d0b93bca2e70ec7210fcf097f status=arm64_complete_bound indexed_start=True
0x06A9AC00: 003840b9  ldr w0, [x0, #0x38]
0x06A9AC04: c0035fd6  ret

; RVA 0x6A9AC08 | public void set_InteractionPosition(int value) { }
; bytes=8 sha256=23e2a2078bd41e84b46906ac0e13db3743cb4f934a32dac307e79ba21bc620b5 status=arm64_complete_bound indexed_start=True
0x06A9AC08: 013800b9  str w1, [x0, #0x38]
0x06A9AC0C: c0035fd6  ret

; RVA 0x6A9AC10 | public void .ctor() { }
; bytes=8 sha256=f1a456bbbc559c3c93b892088dd2fda34b4d0220688358a36539dff5e4f97710 status=arm64_complete_bound indexed_start=True
0x06A9AC10: e1031faa  mov x1, xzr
0x06A9AC14: 7afeb017  b #0x56da5fc

