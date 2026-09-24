; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 32805 .MergeBoardPowerBoostedItemLandedCommand.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6AD40E8 | private static void .cctor() { }
; bytes=104 sha256=5c70f576d9e7c7f3d1838ab0f2794407eabaa69bb87a3976ed9655a608f7de1b status=arm64_complete_bound indexed_start=True
0x06AD40E8: fe0f1ef8  str x30, [sp, #-0x20]!
0x06AD40EC: f44f01a9  stp x20, x19, [sp, #0x10]
0x06AD40F0: b39200d0  adrp x19, #0x7d2a000
0x06AD40F4: 14630090  adrp x20, #0x7734000
0x06AD40F8: 68ee6a39  ldrb w8, [x19, #0xabb]
0x06AD40FC: 947641f9  ldr x20, [x20, #0x2e8]
0x06AD4100: c8000037  tbnz w8, #0, #0x6ad4118
0x06AD4104: 00630090  adrp x0, #0x7734000
0x06AD4108: 007441f9  ldr x0, [x0, #0x2e8]
0x06AD410C: 43b21a97  bl #0x3180a18
0x06AD4110: 28008052  movz w8, #0x1
0x06AD4114: 68ee2a39  strb w8, [x19, #0xabb]
0x06AD4118: 800240f9  ldr x0, [x20]
0x06AD411C: e1b21a97  bl #0x3180ca0
0x06AD4120: e1031faa  mov x1, xzr
0x06AD4124: f30300aa  mov x19, x0
0x06AD4128: 3519b097  bl #0x56da5fc
0x06AD412C: 880240f9  ldr x8, [x20]
0x06AD4130: e10313aa  mov x1, x19
0x06AD4134: 085d40f9  ldr x8, [x8, #0xb8]
0x06AD4138: 130100f9  str x19, [x8]
0x06AD413C: 880240f9  ldr x8, [x20]
0x06AD4140: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06AD4144: 005d40f9  ldr x0, [x8, #0xb8]
0x06AD4148: fe0742f8  ldr x30, [sp], #0x20
0x06AD414C: 1eb21a17  b #0x31809c4

; RVA 0x6AD4150 | public void .ctor() { }
; bytes=8 sha256=aa0d65f4c99b79793ab0aa6b4fe03622e9af2523d5e3f257424685aae5dff36a status=arm64_complete_bound indexed_start=True
0x06AD4150: e1031faa  mov x1, xzr
0x06AD4154: 2a19b017  b #0x56da5fc

; RVA 0x6AD4158 | internal string <Execute>b__3_0(IMergeItem i) { }
; bytes=156 sha256=17f3f9ddf984b37cba480dbb74b4ae05f4d3a2ccc522d184586e951212a35105 status=arm64_complete_bound indexed_start=True
0x06AD4158: fe0f1ef8  str x30, [sp, #-0x20]!
0x06AD415C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06AD4160: b49200d0  adrp x20, #0x7d2a000
0x06AD4164: 88f26a39  ldrb w8, [x20, #0xabc]
0x06AD4168: f30301aa  mov x19, x1
0x06AD416C: c8000037  tbnz w8, #0, #0x6ad4184
0x06AD4170: 205d00b0  adrp x0, #0x7679000
0x06AD4174: 001044f9  ldr x0, [x0, #0x820]
0x06AD4178: 28b21a97  bl #0x3180a18
0x06AD417C: 28008052  movz w8, #0x1
0x06AD4180: 88f22a39  strb w8, [x20, #0xabc]
0x06AD4184: 730300b4  cbz x19, #0x6ad41f0
0x06AD4188: 2a5d00b0  adrp x10, #0x7679000
0x06AD418C: 680240f9  ldr x8, [x19]
0x06AD4190: 4a1144f9  ldr x10, [x10, #0x820]
0x06AD4194: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD4198: 410140f9  ldr x1, [x10]
0x06AD419C: 290100b4  cbz x9, #0x6ad41c0
0x06AD41A0: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD41A4: 4a210091  add x10, x10, #8
0x06AD41A8: 4b815ff8  ldur x11, [x10, #-8]
0x06AD41AC: 7f0101eb  cmp x11, x1
0x06AD41B0: 00010054  b.eq #0x6ad41d0
0x06AD41B4: 290500f1  subs x9, x9, #1
0x06AD41B8: 4a410091  add x10, x10, #0x10
0x06AD41BC: 61ffff54  b.ne #0x6ad41a8
0x06AD41C0: e00313aa  mov x0, x19
0x06AD41C4: e2031f2a  mov w2, wzr
0x06AD41C8: 520a1a97  bl #0x3156b10
0x06AD41CC: 04000014  b #0x6ad41dc
0x06AD41D0: 490180b9  ldrsw x9, [x10]
0x06AD41D4: 0811098b  add x8, x8, x9, lsl #4
0x06AD41D8: 00e10491  add x0, x8, #0x138
0x06AD41DC: 020440a9  ldp x2, x1, [x0]
0x06AD41E0: e00313aa  mov x0, x19
0x06AD41E4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06AD41E8: fe0742f8  ldr x30, [sp], #0x20
0x06AD41EC: 40001fd6  br x2
0x06AD41F0: afb21a97  bl #0x3180cac

