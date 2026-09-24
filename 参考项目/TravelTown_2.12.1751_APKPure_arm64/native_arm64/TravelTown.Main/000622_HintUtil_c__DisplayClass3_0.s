; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 622 .HintUtil.<>c__DisplayClass3_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6274778 | public void .ctor() { }
; bytes=8 sha256=b01f76fe3cab0c90ad1b259ba4508cbb79a2379b39ee5f7bd24d01df2c592d8c status=arm64_complete_bound indexed_start=True
0x06274778: e1031faa  mov x1, xzr
0x0627477C: a097d117  b #0x56da5fc

; RVA 0x6277A20 | internal bool <TrySetStackingHintPair>b__0(IdComponent item) { }
; bytes=168 sha256=76042b3b273f2a975f9fafede1906b2190d21cdd240417ed4aa5f58aae17ecac status=arm64_complete_bound indexed_start=True
0x06277A20: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06277A24: f44f01a9  stp x20, x19, [sp, #0x10]
0x06277A28: 75d500d0  adrp x21, #0x7d25000
0x06277A2C: a8865139  ldrb w8, [x21, #0x461]
0x06277A30: f30301aa  mov x19, x1
0x06277A34: f40300aa  mov x20, x0
0x06277A38: c8000037  tbnz w8, #0, #0x6277a50
0x06277A3C: 60a300f0  adrp x0, #0x76e6000
0x06277A40: 00e444f9  ldr x0, [x0, #0x9c8]
0x06277A44: f5233c97  bl #0x3180a18
0x06277A48: 28008052  movz w8, #0x1
0x06277A4C: a8861139  strb w8, [x21, #0x461]
0x06277A50: 800a40f9  ldr x0, [x20, #0x10]
0x06277A54: 7f0200eb  cmp x19, x0
0x06277A58: e0010054  b.eq #0x6277a94
0x06277A5C: 800200b4  cbz x0, #0x6277aac
0x06277A60: 75a300f0  adrp x21, #0x76e6000
0x06277A64: b5e644f9  ldr x21, [x21, #0x9c8]
0x06277A68: a10240f9  ldr x1, [x21]
0x06277A6C: 6cd76597  bl #0x3bed81c
0x06277A70: a00100b4  cbz x0, #0x6277aa4
0x06277A74: 142840b9  ldr w20, [x0, #0x28]
0x06277A78: b30100b4  cbz x19, #0x6277aac
0x06277A7C: a10240f9  ldr x1, [x21]
0x06277A80: e00313aa  mov x0, x19
0x06277A84: 66d76597  bl #0x3bed81c
0x06277A88: 400100b4  cbz x0, #0x6277ab0
0x06277A8C: 012840b9  ldr w1, [x0, #0x28]
0x06277A90: 09000014  b #0x6277ab4
0x06277A94: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06277A98: e0031f2a  mov w0, wzr
0x06277A9C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06277AA0: c0035fd6  ret
0x06277AA4: 34008052  movz w20, #0x1
0x06277AA8: b3feffb5  cbnz x19, #0x6277a7c
0x06277AAC: 80243c97  bl #0x3180cac
0x06277AB0: 21008052  movz w1, #0x1
0x06277AB4: e003142a  mov w0, w20
0x06277AB8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06277ABC: e2031faa  mov x2, xzr
0x06277AC0: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06277AC4: 2d3d1414  b #0x6786f78

