; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 32778 Merger.MergeBoard.PowerBoost.Signals.PowerBoostInitializeOnEventActivationSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6ACD39C | public string get_EventId() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06ACD39C: 000840f9  ldr x0, [x0, #0x10]
0x06ACD3A0: c0035fd6  ret

; RVA 0x6ACD3A4 | public int get_EventIndex() { }
; bytes=8 sha256=50abf56e70bf4ffd353b0c6ed3c4e4880c6169bcd84263b80a4680f2ca7fb9ab status=arm64_complete_bound indexed_start=True
0x06ACD3A4: 001840b9  ldr w0, [x0, #0x18]
0x06ACD3A8: c0035fd6  ret

; RVA 0x6ACD3AC | public void set_EventIndex(int value) { }
; bytes=8 sha256=6e9ff5dd14743d62b4c65ceed8cc7444a06b1f6a6df852c7ffa011f059b9080f status=arm64_complete_bound indexed_start=True
0x06ACD3AC: 011800b9  str w1, [x0, #0x18]
0x06ACD3B0: c0035fd6  ret

; RVA 0x6ACD3B4 | public int get_CurrentLevel() { }
; bytes=8 sha256=7a2c484f16193ad2c5617bbe6704b2ccbdcc31004cfa1370a3ba4533f12de7f9 status=arm64_complete_bound indexed_start=True
0x06ACD3B4: 001c40b9  ldr w0, [x0, #0x1c]
0x06ACD3B8: c0035fd6  ret

; RVA 0x6ACD3BC | public PowerBoostMultiModesConfig get_Configuration() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x06ACD3BC: 001040f9  ldr x0, [x0, #0x20]
0x06ACD3C0: c0035fd6  ret

; RVA 0x6ACD3C4 | public void .ctor(string eventId, int eventIndex, int currentLevel, PowerBoostMultiModesConfig configuration) { }
; bytes=88 sha256=8faee39c9ee4e059a7d1b4b750eb9cd1224f3a5a6fea3a123970b75357b31fe6 status=arm64_complete_bound indexed_start=True
0x06ACD3C4: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x06ACD3C8: f65701a9  stp x22, x21, [sp, #0x10]
0x06ACD3CC: f44f02a9  stp x20, x19, [sp, #0x20]
0x06ACD3D0: f60301aa  mov x22, x1
0x06ACD3D4: e1031faa  mov x1, xzr
0x06ACD3D8: f30304aa  mov x19, x4
0x06ACD3DC: f403032a  mov w20, w3
0x06ACD3E0: f503022a  mov w21, w2
0x06ACD3E4: f70300aa  mov x23, x0
0x06ACD3E8: 8534b097  bl #0x56da5fc
0x06ACD3EC: e00317aa  mov x0, x23
0x06ACD3F0: 160c01f8  str x22, [x0, #0x10]!
0x06ACD3F4: e10316aa  mov x1, x22
0x06ACD3F8: 73cd1a97  bl #0x31809c4
0x06ACD3FC: f30e02f8  str x19, [x23, #0x20]!
0x06ACD400: f5523f29  stp w21, w20, [x23, #-8]
0x06ACD404: e10313aa  mov x1, x19
0x06ACD408: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06ACD40C: f65741a9  ldp x22, x21, [sp, #0x10]
0x06ACD410: e00317aa  mov x0, x23
0x06ACD414: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x06ACD418: 6bcd1a17  b #0x31809c4

