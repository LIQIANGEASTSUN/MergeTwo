; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 32777 Merger.MergeBoard.PowerBoost.Signals.PowerBoostConfigurationUpdatedSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6ACD31C | public string get_EventId() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06ACD31C: 000840f9  ldr x0, [x0, #0x10]
0x06ACD320: c0035fd6  ret

; RVA 0x6ACD324 | public int get_EventIndex() { }
; bytes=8 sha256=50abf56e70bf4ffd353b0c6ed3c4e4880c6169bcd84263b80a4680f2ca7fb9ab status=arm64_complete_bound indexed_start=True
0x06ACD324: 001840b9  ldr w0, [x0, #0x18]
0x06ACD328: c0035fd6  ret

; RVA 0x6ACD32C | public void set_EventIndex(int value) { }
; bytes=8 sha256=6e9ff5dd14743d62b4c65ceed8cc7444a06b1f6a6df852c7ffa011f059b9080f status=arm64_complete_bound indexed_start=True
0x06ACD32C: 011800b9  str w1, [x0, #0x18]
0x06ACD330: c0035fd6  ret

; RVA 0x6ACD334 | public int get_CurrentLevel() { }
; bytes=8 sha256=7a2c484f16193ad2c5617bbe6704b2ccbdcc31004cfa1370a3ba4533f12de7f9 status=arm64_complete_bound indexed_start=True
0x06ACD334: 001c40b9  ldr w0, [x0, #0x1c]
0x06ACD338: c0035fd6  ret

; RVA 0x6ACD33C | public PowerBoostMultiModesConfig get_Configuration() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x06ACD33C: 001040f9  ldr x0, [x0, #0x20]
0x06ACD340: c0035fd6  ret

; RVA 0x6ACD344 | public void .ctor(string eventId, int eventIndex, int currentLevel, PowerBoostMultiModesConfig configuration) { }
; bytes=88 sha256=c10d5e4be0fbfd112e0ac31ea647aa5e3c68eeed8ed4c4b5835c81742b73e565 status=arm64_complete_bound indexed_start=True
0x06ACD344: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x06ACD348: f65701a9  stp x22, x21, [sp, #0x10]
0x06ACD34C: f44f02a9  stp x20, x19, [sp, #0x20]
0x06ACD350: f60301aa  mov x22, x1
0x06ACD354: e1031faa  mov x1, xzr
0x06ACD358: f30304aa  mov x19, x4
0x06ACD35C: f403032a  mov w20, w3
0x06ACD360: f503022a  mov w21, w2
0x06ACD364: f70300aa  mov x23, x0
0x06ACD368: a534b097  bl #0x56da5fc
0x06ACD36C: e00317aa  mov x0, x23
0x06ACD370: 160c01f8  str x22, [x0, #0x10]!
0x06ACD374: e10316aa  mov x1, x22
0x06ACD378: 93cd1a97  bl #0x31809c4
0x06ACD37C: f30e02f8  str x19, [x23, #0x20]!
0x06ACD380: f5523f29  stp w21, w20, [x23, #-8]
0x06ACD384: e10313aa  mov x1, x19
0x06ACD388: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06ACD38C: f65741a9  ldp x22, x21, [sp, #0x10]
0x06ACD390: e00317aa  mov x0, x23
0x06ACD394: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x06ACD398: 8bcd1a17  b #0x31809c4

