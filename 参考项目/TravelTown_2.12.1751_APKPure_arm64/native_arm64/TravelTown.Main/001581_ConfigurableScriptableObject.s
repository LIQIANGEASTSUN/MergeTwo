; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1581 GameCore.Configuration.Definitions.ConfigurableScriptableObject
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x601F910 | public string get_UniqueId() { }
; bytes=48 sha256=7609bbc1c1e1554906a0ea513e8f3ad70f7ef637ada9b1af52edc0298c99c17b status=arm64_complete_bound indexed_start=True
0x0601F910: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x0601F914: f30300aa  mov x19, x0
0x0601F918: 003440f9  ldr x0, [x0, #0x68]
0x0601F91C: e1031faa  mov x1, xzr
0x0601F920: 6360d397  bl #0x54f7aac
0x0601F924: 1f000072  tst w0, #1
0x0601F928: 080d8052  movz w8, #0x68
0x0601F92C: 090b8052  movz w9, #0x58
0x0601F930: 2811889a  csel x8, x9, x8, ne
0x0601F934: 606a68f8  ldr x0, [x19, x8]
0x0601F938: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x0601F93C: c0035fd6  ret

; RVA 0x601F940 | public bool get_IsPartOfAbTest() { }
; bytes=8 sha256=a7b76497ed12b4f3e690147d999566b24cee240e10f9a1bfc9c90496477bcb69 status=arm64_complete_bound indexed_start=True
0x0601F940: 00804139  ldrb w0, [x0, #0x60]
0x0601F944: c0035fd6  ret

; RVA 0x601F948 | public void set_IsPartOfAbTest(bool value) { }
; bytes=12 sha256=5dbb7da7eb7a36232cdc62a5cf791433c6bc3fe9ff0154ae95a5957d06340e79 status=arm64_complete_bound indexed_start=True
0x0601F948: 28000012  and w8, w1, #1
0x0601F94C: 08800139  strb w8, [x0, #0x60]
0x0601F950: c0035fd6  ret

; RVA 0x601F954 | protected void .ctor() { }
; bytes=8 sha256=d1a1b1098c0990d1ba39bca2bb9d46db69d2fdf58331cd1144aeb377bd478cb1 status=arm64_complete_bound indexed_start=True
0x0601F954: e1031faa  mov x1, xzr
0x0601F958: 8a2ce317  b #0x58eab80

; RVA 0x601F95C | protected void .ctor(string storedUniqueId) { }
; bytes=48 sha256=4a266f5c9d4a76c72c86901d1504a33dfc8f62f4226f7339abdcf8acfdaa8dd7 status=arm64_complete_bound indexed_start=True
0x0601F95C: fe0f1ef8  str x30, [sp, #-0x20]!
0x0601F960: f44f01a9  stp x20, x19, [sp, #0x10]
0x0601F964: f30301aa  mov x19, x1
0x0601F968: e1031faa  mov x1, xzr
0x0601F96C: f40300aa  mov x20, x0
0x0601F970: 842ce397  bl #0x58eab80
0x0601F974: 938e05f8  str x19, [x20, #0x58]!
0x0601F978: e00314aa  mov x0, x20
0x0601F97C: e10313aa  mov x1, x19
0x0601F980: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0601F984: fe0742f8  ldr x30, [sp], #0x20
0x0601F988: 0f844517  b #0x31809c4

; RVA 0x601F98C | public void SetUniqueId(string id) { }
; bytes=8 sha256=3dbf976a0660fef14c7e99fc6fe505d74c01a05a00d2574c76b89840ba035bc3 status=arm64_complete_bound indexed_start=True
0x0601F98C: 018c05f8  str x1, [x0, #0x58]!
0x0601F990: 0d844517  b #0x31809c4

; RVA 0x601F994 | public void SetOverrideUniqueIdFrom(ConfigurableScriptableObject other) { }
; bytes=164 sha256=f454d52d14a55fac674b4140003e45b2cce13b49ccb6c812761caac34910f036 status=arm64_complete_bound indexed_start=True
0x0601F994: fe0f1df8  str x30, [sp, #-0x30]!
0x0601F998: f65701a9  stp x22, x21, [sp, #0x10]
0x0601F99C: f44f02a9  stp x20, x19, [sp, #0x20]
0x0601F9A0: 35e80090  adrp x21, #0x7d23000
0x0601F9A4: 76b100f0  adrp x22, #0x764e000
0x0601F9A8: a88e6139  ldrb w8, [x21, #0x863]
0x0601F9AC: d67242f9  ldr x22, [x22, #0x4e0]
0x0601F9B0: f40301aa  mov x20, x1
0x0601F9B4: f30300aa  mov x19, x0
0x0601F9B8: c8000037  tbnz w8, #0, #0x601f9d0
0x0601F9BC: 60b100f0  adrp x0, #0x764e000
0x0601F9C0: 007042f9  ldr x0, [x0, #0x4e0]
0x0601F9C4: 15844597  bl #0x3180a18
0x0601F9C8: 28008052  movz w8, #0x1
0x0601F9CC: a88e2139  strb w8, [x21, #0x863]
0x0601F9D0: c00240f9  ldr x0, [x22]
0x0601F9D4: 08e040b9  ldr w8, [x0, #0xe0]
0x0601F9D8: 48000035  cbnz w8, #0x601f9e0
0x0601F9DC: 6c844597  bl #0x3180b8c
0x0601F9E0: e00314aa  mov x0, x20
0x0601F9E4: e1031faa  mov x1, xzr
0x0601F9E8: e2031faa  mov x2, xzr
0x0601F9EC: 62fc3a94  bl #0x6edeb74
0x0601F9F0: e1031faa  mov x1, xzr
0x0601F9F4: 20010036  tbz w0, #0, #0x601fa18
0x0601F9F8: f40100b4  cbz x20, #0x601fa34
0x0601F9FC: 808e46f8  ldr x0, [x20, #0x68]!
0x0601FA00: e1031faa  mov x1, xzr
0x0601FA04: 2a60d397  bl #0x54f7aac
0x0601FA08: 884200d1  sub x8, x20, #0x10
0x0601FA0C: 1f000072  tst w0, #1
0x0601FA10: 0811949a  csel x8, x8, x20, ne
0x0601FA14: 010140f9  ldr x1, [x8]
0x0601FA18: f30000b4  cbz x19, #0x601fa34
0x0601FA1C: 618e06f8  str x1, [x19, #0x68]!
0x0601FA20: e00313aa  mov x0, x19
0x0601FA24: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0601FA28: f65741a9  ldp x22, x21, [sp, #0x10]
0x0601FA2C: fe0743f8  ldr x30, [sp], #0x30
0x0601FA30: e5834517  b #0x31809c4
0x0601FA34: 9e844597  bl #0x3180cac

