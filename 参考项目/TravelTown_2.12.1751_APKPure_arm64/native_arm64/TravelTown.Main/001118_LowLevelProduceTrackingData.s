; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1118 MergeEngine.ECS.Components.InteractionTracking.LowLevelProduceTrackingData
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6901F64 | public string get_OrderId() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06901F64: 000840f9  ldr x0, [x0, #0x10]
0x06901F68: c0035fd6  ret

; RVA 0x6901F6C | public void set_OrderId(string value) { }
; bytes=8 sha256=78a988360b24ed8f96577ec6d9c93ef526fe15f14b29c16de79c2203f451fac6 status=arm64_complete_bound indexed_start=True
0x06901F6C: 010c01f8  str x1, [x0, #0x10]!
0x06901F70: 95fa2117  b #0x31809c4

; RVA 0x6901F74 | public int get_ResourceAmount() { }
; bytes=8 sha256=50abf56e70bf4ffd353b0c6ed3c4e4880c6169bcd84263b80a4680f2ca7fb9ab status=arm64_complete_bound indexed_start=True
0x06901F74: 001840b9  ldr w0, [x0, #0x18]
0x06901F78: c0035fd6  ret

; RVA 0x6901F7C | public void set_ResourceAmount(int value) { }
; bytes=8 sha256=6e9ff5dd14743d62b4c65ceed8cc7444a06b1f6a6df852c7ffa011f059b9080f status=arm64_complete_bound indexed_start=True
0x06901F7C: 011800b9  str w1, [x0, #0x18]
0x06901F80: c0035fd6  ret

; RVA 0x6901F84 | public string get_SpawnReason() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x06901F84: 001040f9  ldr x0, [x0, #0x20]
0x06901F88: c0035fd6  ret

; RVA 0x6901F8C | public void set_SpawnReason(string value) { }
; bytes=8 sha256=834caf5a32f959c123489cbd645cfb1866f966872914bc8d94dd27ae77123422 status=arm64_complete_bound indexed_start=True
0x06901F8C: 010c02f8  str x1, [x0, #0x20]!
0x06901F90: 8dfa2117  b #0x31809c4

; RVA 0x6901F94 | public void .ctor() { }
; bytes=8 sha256=99f580a2dd0b20c6749870f78ec47942d26e10a426d5b358838058f48e9c8fcb status=arm64_complete_bound indexed_start=True
0x06901F94: e1031faa  mov x1, xzr
0x06901F98: 9961b717  b #0x56da5fc

