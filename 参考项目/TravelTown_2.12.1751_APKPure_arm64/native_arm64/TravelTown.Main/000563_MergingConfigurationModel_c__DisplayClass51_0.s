; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 563 .MergingConfigurationModel.<>c__DisplayClass51_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x61406CC | public void .ctor() { }
; bytes=8 sha256=7b30e26dfe5c1af49ff1190fc89c709c2b01714aa8cda6600721af634d902dca status=arm64_complete_bound indexed_start=True
0x061406CC: e1031faa  mov x1, xzr
0x061406D0: cb67d617  b #0x56da5fc

; RVA 0x61419C8 | internal void <BuildRecursiveSpawnInfo>b__1(IMergeGraphItem graph) { }
; bytes=200 sha256=81706424c2f69bd08042d01630249dccd2c9ec102ca03de6729cbc9d815510f1 status=arm64_complete_bound indexed_start=True
0x061419C8: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x061419CC: f44f01a9  stp x20, x19, [sp, #0x10]
0x061419D0: 15df00f0  adrp x21, #0x7d24000
0x061419D4: a84e5739  ldrb w8, [x21, #0x5d3]
0x061419D8: f30301aa  mov x19, x1
0x061419DC: f40300aa  mov x20, x0
0x061419E0: 28010037  tbnz w8, #0, #0x6141a04
0x061419E4: c0a900f0  adrp x0, #0x767c000
0x061419E8: 002441f9  ldr x0, [x0, #0x248]
0x061419EC: 0bfc4097  bl #0x3180a18
0x061419F0: c0ac00d0  adrp x0, #0x76db000
0x061419F4: 000842f9  ldr x0, [x0, #0x410]
0x061419F8: 08fc4097  bl #0x3180a18
0x061419FC: 28008052  movz w8, #0x1
0x06141A00: a84e1739  strb w8, [x21, #0x5d3]
0x06141A04: 530400b4  cbz x19, #0x6141a8c
0x06141A08: caa900f0  adrp x10, #0x767c000
0x06141A0C: 680240f9  ldr x8, [x19]
0x06141A10: 4a2541f9  ldr x10, [x10, #0x248]
0x06141A14: d5ac00d0  adrp x21, #0x76db000
0x06141A18: 940a40f9  ldr x20, [x20, #0x10]
0x06141A1C: 095d4279  ldrh w9, [x8, #0x12e]
0x06141A20: 410140f9  ldr x1, [x10]
0x06141A24: b50a42f9  ldr x21, [x21, #0x410]
0x06141A28: 290100b4  cbz x9, #0x6141a4c
0x06141A2C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06141A30: 4a210091  add x10, x10, #8
0x06141A34: 4b815ff8  ldur x11, [x10, #-8]
0x06141A38: 7f0101eb  cmp x11, x1
0x06141A3C: 00010054  b.eq #0x6141a5c
0x06141A40: 290500f1  subs x9, x9, #1
0x06141A44: 4a410091  add x10, x10, #0x10
0x06141A48: 61ffff54  b.ne #0x6141a34
0x06141A4C: e00313aa  mov x0, x19
0x06141A50: e2031f2a  mov w2, wzr
0x06141A54: 2f544097  bl #0x3156b10
0x06141A58: 04000014  b #0x6141a68
0x06141A5C: 490180b9  ldrsw x9, [x10]
0x06141A60: 0811098b  add x8, x8, x9, lsl #4
0x06141A64: 00e10491  add x0, x8, #0x138
0x06141A68: 080440a9  ldp x8, x1, [x0]
0x06141A6C: e00313aa  mov x0, x19
0x06141A70: 00013fd6  blr x8
0x06141A74: a20240f9  ldr x2, [x21]
0x06141A78: e10300aa  mov x1, x0
0x06141A7C: e00314aa  mov x0, x20
0x06141A80: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06141A84: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06141A88: 4f2d6f17  b #0x3d0cfc4
0x06141A8C: 88fc4097  bl #0x3180cac

; RVA 0x6141A90 | internal bool <BuildRecursiveSpawnInfo>b__2(IMergeItem candidate) { }
; bytes=96 sha256=154e8b4f4d54e6574a987562dc3d6c38548e72ec7fda8d15379ce765071980bf status=arm64_complete_bound indexed_start=True
0x06141A90: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06141A94: f44f01a9  stp x20, x19, [sp, #0x10]
0x06141A98: 15df00f0  adrp x21, #0x7d24000
0x06141A9C: a8525739  ldrb w8, [x21, #0x5d4]
0x06141AA0: f30301aa  mov x19, x1
0x06141AA4: f40300aa  mov x20, x0
0x06141AA8: c8000037  tbnz w8, #0, #0x6141ac0
0x06141AAC: c0ac00d0  adrp x0, #0x76db000
0x06141AB0: 005442f9  ldr x0, [x0, #0x4a8]
0x06141AB4: d9fb4097  bl #0x3180a18
0x06141AB8: 28008052  movz w8, #0x1
0x06141ABC: a8521739  strb w8, [x21, #0x5d4]
0x06141AC0: 880e40f9  ldr x8, [x20, #0x18]
0x06141AC4: 480100b4  cbz x8, #0x6141aec
0x06141AC8: 001140f9  ldr x0, [x8, #0x20]
0x06141ACC: 000100b4  cbz x0, #0x6141aec
0x06141AD0: c8ac00d0  adrp x8, #0x76db000
0x06141AD4: 085542f9  ldr x8, [x8, #0x4a8]
0x06141AD8: e10313aa  mov x1, x19
0x06141ADC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06141AE0: 020140f9  ldr x2, [x8]
0x06141AE4: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06141AE8: 93fac517  b #0x52c0534
0x06141AEC: 70fc4097  bl #0x3180cac

