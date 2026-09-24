; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1430 MergeEngine.Configuration.Capabilities.BaseIdCapability
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x600F9C8 | public string get_Id() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x0600F9C8: 000840f9  ldr x0, [x0, #0x10]
0x0600F9CC: c0035fd6  ret

; RVA 0x600F9D0 | public string get_UUId() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x0600F9D0: 000c40f9  ldr x0, [x0, #0x18]
0x0600F9D4: c0035fd6  ret

; RVA 0x600F9D8 | public void .ctor(string id, string uuId) { }
; bytes=68 sha256=b8b4e366b27497d8f6ff7bb43c527b092f5e04b330bfaf8afacfa0a927187880 status=arm64_complete_bound indexed_start=True
0x0600F9D8: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0600F9DC: f44f01a9  stp x20, x19, [sp, #0x10]
0x0600F9E0: f40301aa  mov x20, x1
0x0600F9E4: e1031faa  mov x1, xzr
0x0600F9E8: f30302aa  mov x19, x2
0x0600F9EC: f50300aa  mov x21, x0
0x0600F9F0: 032bdb97  bl #0x56da5fc
0x0600F9F4: e00315aa  mov x0, x21
0x0600F9F8: 140c01f8  str x20, [x0, #0x10]!
0x0600F9FC: e10314aa  mov x1, x20
0x0600FA00: f1c34597  bl #0x31809c4
0x0600FA04: b38e01f8  str x19, [x21, #0x18]!
0x0600FA08: e10313aa  mov x1, x19
0x0600FA0C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0600FA10: e00315aa  mov x0, x21
0x0600FA14: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0600FA18: ebc34517  b #0x31809c4

