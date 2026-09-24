; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 5727 Merger.ItemSelectionBox.Signals.ItemSelectionBoxItemSelectedSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x63E3990 | public string get_FromUniqueId() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x063E3990: 000840f9  ldr x0, [x0, #0x10]
0x063E3994: c0035fd6  ret

; RVA 0x63E3998 | public string get_ToUniqueId() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x063E3998: 000c40f9  ldr x0, [x0, #0x18]
0x063E399C: c0035fd6  ret

; RVA 0x63E39A0 | public BoardItemPosition get_BoardItemPosition() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x063E39A0: 001040f9  ldr x0, [x0, #0x20]
0x063E39A4: c0035fd6  ret

; RVA 0x63E2F3C | public void .ctor(string fromUniqueId, string toUniqueId, BoardItemPosition boardItemPosition) { }
; bytes=88 sha256=08fb2c577fc6a06a84b18d5cb9740a2aec04c5d85bf3bf9c6eab73497ca2be5b status=arm64_complete_bound indexed_start=True
0x063E2F3C: fe0f1df8  str x30, [sp, #-0x30]!
0x063E2F40: f65701a9  stp x22, x21, [sp, #0x10]
0x063E2F44: f44f02a9  stp x20, x19, [sp, #0x20]
0x063E2F48: f50301aa  mov x21, x1
0x063E2F4C: e1031faa  mov x1, xzr
0x063E2F50: f30303aa  mov x19, x3
0x063E2F54: f40302aa  mov x20, x2
0x063E2F58: f60300aa  mov x22, x0
0x063E2F5C: a8ddcb97  bl #0x56da5fc
0x063E2F60: e00316aa  mov x0, x22
0x063E2F64: 150c01f8  str x21, [x0, #0x10]!
0x063E2F68: e10315aa  mov x1, x21
0x063E2F6C: 96763697  bl #0x31809c4
0x063E2F70: d48e01f8  str x20, [x22, #0x18]!
0x063E2F74: e00316aa  mov x0, x22
0x063E2F78: e10314aa  mov x1, x20
0x063E2F7C: 92763697  bl #0x31809c4
0x063E2F80: d30600f9  str x19, [x22, #8]
0x063E2F84: f44f42a9  ldp x20, x19, [sp, #0x20]
0x063E2F88: f65741a9  ldp x22, x21, [sp, #0x10]
0x063E2F8C: fe0743f8  ldr x30, [sp], #0x30
0x063E2F90: c0035fd6  ret

