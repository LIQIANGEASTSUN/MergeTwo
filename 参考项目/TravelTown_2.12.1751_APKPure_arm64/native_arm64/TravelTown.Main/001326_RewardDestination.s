; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1326 MergeEngine.Configuration.Definitions.RewardDestination
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A2E84C | public void set_typeString(string value) { }
; bytes=164 sha256=ed0d95160e502c20f7a03f005d4411ef98183994e0526e7d25d051ad46b6a1dc status=arm64_complete_bound indexed_start=True
0x06A2E84C: ffc300d1  sub sp, sp, #0x30
0x06A2E850: fe5701a9  stp x30, x21, [sp, #0x10]
0x06A2E854: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A2E858: f5970090  adrp x21, #0x7d2a000
0x06A2E85C: a8e25139  ldrb w8, [x21, #0x478]
0x06A2E860: f40301aa  mov x20, x1
0x06A2E864: f30300aa  mov x19, x0
0x06A2E868: 28010037  tbnz w8, #0, #0x6a2e88c
0x06A2E86C: 006800b0  adrp x0, #0x772f000
0x06A2E870: 007841f9  ldr x0, [x0, #0x2f0]
0x06A2E874: 69481d97  bl #0x3180a18
0x06A2E878: 006100b0  adrp x0, #0x764f000
0x06A2E87C: 00ac43f9  ldr x0, [x0, #0x758]
0x06A2E880: 66481d97  bl #0x3180a18
0x06A2E884: 28008052  movz w8, #0x1
0x06A2E888: a8e21139  strb w8, [x21, #0x478]
0x06A2E88C: e00314aa  mov x0, x20
0x06A2E890: e1031faa  mov x1, xzr
0x06A2E894: ff0f00b9  str wzr, [sp, #0xc]
0x06A2E898: 5d3dab97  bl #0x54fde0c
0x06A2E89C: 20020037  tbnz w0, #0, #0x6a2e8e0
0x06A2E8A0: 086100b0  adrp x8, #0x764f000
0x06A2E8A4: 08ad43f9  ldr x8, [x8, #0x758]
0x06A2E8A8: 156800b0  adrp x21, #0x772f000
0x06A2E8AC: 000140f9  ldr x0, [x8]
0x06A2E8B0: 08e040b9  ldr w8, [x0, #0xe0]
0x06A2E8B4: b57a41f9  ldr x21, [x21, #0x2f0]
0x06A2E8B8: 48000035  cbnz w8, #0x6a2e8c0
0x06A2E8BC: b4481d97  bl #0x3180b8c
0x06A2E8C0: a30240f9  ldr x3, [x21]
0x06A2E8C4: e2330091  add x2, sp, #0xc
0x06A2E8C8: 21008052  movz w1, #0x1
0x06A2E8CC: e00314aa  mov x0, x20
0x06A2E8D0: 7fd14797  bl #0x3c22ecc
0x06A2E8D4: 60000036  tbz w0, #0, #0x6a2e8e0
0x06A2E8D8: e80f40b9  ldr w8, [sp, #0xc]
0x06A2E8DC: 681200b9  str w8, [x19, #0x10]
0x06A2E8E0: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A2E8E4: fe5741a9  ldp x30, x21, [sp, #0x10]
0x06A2E8E8: ffc30091  add sp, sp, #0x30
0x06A2E8EC: c0035fd6  ret

; RVA 0x6A2E8F0 | public RewardDestinationType get_DestinationType() { }
; bytes=8 sha256=6f1929ee2376e6ada94db6d2aafe012dfc8382613e73b99aea0c7dea270fac13 status=arm64_complete_bound indexed_start=True
0x06A2E8F0: 001040b9  ldr w0, [x0, #0x10]
0x06A2E8F4: c0035fd6  ret

; RVA 0x6A2E8F8 | public void set_DestinationType(RewardDestinationType value) { }
; bytes=8 sha256=4f1731a5a3d5539e5c40e4019b837526eaa31ef7b03eb65ceaee7084e15a198b status=arm64_complete_bound indexed_start=True
0x06A2E8F8: 011000b9  str w1, [x0, #0x10]
0x06A2E8FC: c0035fd6  ret

; RVA 0x6A2E900 | public void .ctor() { }
; bytes=8 sha256=08c410e6db5709107083de046b4a27ac52c4f0e4eac86170c917518ba93d384d status=arm64_complete_bound indexed_start=True
0x06A2E900: e1031faa  mov x1, xzr
0x06A2E904: 3eafb217  b #0x56da5fc

