; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 6433 Merger.RemoteLiveOps.Data.EventData.RemoteLiveOpData
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6465EF4 | public bool get_HasTheme() { }
; bytes=16 sha256=696894d47c0a58d271c57d05eade6002991fbd0b05295748d7e9adf3dda6406c status=arm64_complete_bound indexed_start=True
0x06465EF4: 002440f9  ldr x0, [x0, #0x48]
0x06465EF8: 400000b4  cbz x0, #0x6465f00
0x06465EFC: d5feff17  b #0x6465a50
0x06465F00: c0035fd6  ret

; RVA 0x6465F04 | public string get_eventId() { }
; bytes=8 sha256=6b819324b4a3bc2d390c83c7fe02ea41a1f57ae5d4f2a9b0c9256341a5b8d37f status=arm64_complete_bound indexed_start=True
0x06465F04: 001840f9  ldr x0, [x0, #0x30]
0x06465F08: c0035fd6  ret

; RVA 0x6465F0C | private void set_eventId(string value) { }
; bytes=8 sha256=b58b622f20de4ce900433ce39324e1d56c805cab0b7eb53582b30fed70bb9661 status=arm64_complete_bound indexed_start=True
0x06465F0C: 010c03f8  str x1, [x0, #0x30]!
0x06465F10: ad6a3417  b #0x31809c4

; RVA 0x6465F14 | public virtual RemoteEventType get_Type() { }
; bytes=8 sha256=70b6226cdde2aa2e19c7cef1812dc4f3cd14b63d0b93bca2e70ec7210fcf097f status=arm64_complete_bound indexed_start=True
0x06465F14: 003840b9  ldr w0, [x0, #0x38]
0x06465F18: c0035fd6  ret

; RVA 0x6465F1C | public string get_ConfigurationName() { }
; bytes=8 sha256=ac1915dbf8ae56825a9e0c79c21190a655d4b32b9c10f299546aad7c9ecadc66 status=arm64_complete_bound indexed_start=True
0x06465F1C: 002040f9  ldr x0, [x0, #0x40]
0x06465F20: c0035fd6  ret

; RVA 0x6465F24 | public void set_ConfigurationName(string value) { }
; bytes=8 sha256=bb099f77fd094a0c359550cf922e03109f3f13c5b9e55f8329205457a23527f3 status=arm64_complete_bound indexed_start=True
0x06465F24: 010c04f8  str x1, [x0, #0x40]!
0x06465F28: a76a3417  b #0x31809c4

; RVA 0x6465F2C | public RemoteLiveOpEventTheme get_Theme() { }
; bytes=8 sha256=62c64bd585db7a91917843362bb75aa8dd20b002bce4874891b0b3ec8fd242b9 status=arm64_complete_bound indexed_start=True
0x06465F2C: 002440f9  ldr x0, [x0, #0x48]
0x06465F30: c0035fd6  ret

; RVA 0x6465F34 | public void set_Theme(RemoteLiveOpEventTheme value) { }
; bytes=8 sha256=e02f9b8b82e498aa3e52f97d3e6b523a9af168c6e92f745853d2e016957d5d50 status=arm64_complete_bound indexed_start=True
0x06465F34: 018c04f8  str x1, [x0, #0x48]!
0x06465F38: a36a3417  b #0x31809c4

; RVA 0x6465F3C | public bool get_ForceEnrollment() { }
; bytes=8 sha256=eaa8f5bab95d1713110a3774aeaebf65c0af3605085769e01b2fdfa404ba8cfd status=arm64_complete_bound indexed_start=True
0x06465F3C: 00404139  ldrb w0, [x0, #0x50]
0x06465F40: c0035fd6  ret

; RVA 0x6465F44 | public void set_ForceEnrollment(bool value) { }
; bytes=12 sha256=c5177acf6df3d1e45a8c58677795df0e04c5bd5fa7037d9fc82cedc5cbbeccdc status=arm64_complete_bound indexed_start=True
0x06465F44: 28000012  and w8, w1, #1
0x06465F48: 08400139  strb w8, [x0, #0x50]
0x06465F4C: c0035fd6  ret

; RVA 0x6465F50 | public LiveOpsEventAnalyticsData get_Analytics() { }
; bytes=8 sha256=d598436bff3a9dd6f386d52e9d196b4b622d920d9df2d4b374773cddd2c4c4b8 status=arm64_complete_bound indexed_start=True
0x06465F50: 002c40f9  ldr x0, [x0, #0x58]
0x06465F54: c0035fd6  ret

; RVA 0x6465F58 | private void set_Analytics(LiveOpsEventAnalyticsData value) { }
; bytes=8 sha256=13f89e4fd728467c513baa282aa12c0b91cc69fd11c378b342a87b35c0baa439 status=arm64_complete_bound indexed_start=True
0x06465F58: 018c05f8  str x1, [x0, #0x58]!
0x06465F5C: 9a6a3417  b #0x31809c4

; RVA 0x6465F60 | public void .ctor() { }
; bytes=16 sha256=037a285a9d4cebb5dfd45be6ab0879f38e6a367b7490ebef8b1d47218a66b083 status=arm64_complete_bound indexed_start=True
0x06465F60: 28008052  movz w8, #0x1
0x06465F64: e1031faa  mov x1, xzr
0x06465F68: 08400139  strb w8, [x0, #0x50]
0x06465F6C: a4d1c917  b #0x56da5fc

; RVA 0x6465F78 | public void .ctor(RemoteFeatureStatus status, long startDate, long endDate) { }
; bytes=68 sha256=d10519baaaa6f7a5e2888d631ed6e1c42ae322dc3acd88eedb2a3314c039784e status=arm64_complete_bound indexed_start=True
0x06465F78: fe0f1df8  str x30, [sp, #-0x30]!
0x06465F7C: f65701a9  stp x22, x21, [sp, #0x10]
0x06465F80: f44f02a9  stp x20, x19, [sp, #0x20]
0x06465F84: f503012a  mov w21, w1
0x06465F88: 28008052  movz w8, #0x1
0x06465F8C: e1031faa  mov x1, xzr
0x06465F90: f30303aa  mov x19, x3
0x06465F94: f40302aa  mov x20, x2
0x06465F98: f60300aa  mov x22, x0
0x06465F9C: 08400139  strb w8, [x0, #0x50]
0x06465FA0: 97d1c997  bl #0x56da5fc
0x06465FA4: d51200b9  str w21, [x22, #0x10]
0x06465FA8: d4ce01a9  stp x20, x19, [x22, #0x18]
0x06465FAC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06465FB0: f65741a9  ldp x22, x21, [sp, #0x10]
0x06465FB4: fe0743f8  ldr x30, [sp], #0x30
0x06465FB8: c0035fd6  ret

