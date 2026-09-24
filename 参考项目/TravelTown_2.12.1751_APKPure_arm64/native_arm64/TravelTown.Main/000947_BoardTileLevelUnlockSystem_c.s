; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 947 .BoardTileLevelUnlockSystem.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x678AD50 | private static void .cctor() { }
; bytes=104 sha256=e6a208e0bba1c52c18d991568b240cac3aa4c18ad062de61f244ecc5098ed512 status=arm64_complete_bound indexed_start=True
0x0678AD50: fe0f1ef8  str x30, [sp, #-0x20]!
0x0678AD54: f44f01a9  stp x20, x19, [sp, #0x10]
0x0678AD58: f3ac00d0  adrp x19, #0x7d28000
0x0678AD5C: 347c00d0  adrp x20, #0x7710000
0x0678AD60: 68ee7439  ldrb w8, [x19, #0xd3b]
0x0678AD64: 947241f9  ldr x20, [x20, #0x2e0]
0x0678AD68: c8000037  tbnz w8, #0, #0x678ad80
0x0678AD6C: 207c00d0  adrp x0, #0x7710000
0x0678AD70: 007041f9  ldr x0, [x0, #0x2e0]
0x0678AD74: 29d72797  bl #0x3180a18
0x0678AD78: 28008052  movz w8, #0x1
0x0678AD7C: 68ee3439  strb w8, [x19, #0xd3b]
0x0678AD80: 800240f9  ldr x0, [x20]
0x0678AD84: c7d72797  bl #0x3180ca0
0x0678AD88: e1031faa  mov x1, xzr
0x0678AD8C: f30300aa  mov x19, x0
0x0678AD90: 1b3ebd97  bl #0x56da5fc
0x0678AD94: 880240f9  ldr x8, [x20]
0x0678AD98: e10313aa  mov x1, x19
0x0678AD9C: 085d40f9  ldr x8, [x8, #0xb8]
0x0678ADA0: 130100f9  str x19, [x8]
0x0678ADA4: 880240f9  ldr x8, [x20]
0x0678ADA8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0678ADAC: 005d40f9  ldr x0, [x8, #0xb8]
0x0678ADB0: fe0742f8  ldr x30, [sp], #0x20
0x0678ADB4: 04d72717  b #0x31809c4

; RVA 0x678ADB8 | public void .ctor() { }
; bytes=8 sha256=473d6b948f0dd7cb762f9aff66974cfb8b594b6b8be985d37c7da0bab8cffeb9 status=arm64_complete_bound indexed_start=True
0x0678ADB8: e1031faa  mov x1, xzr
0x0678ADBC: 103ebd17  b #0x56da5fc

; RVA 0x678ADC0 | internal LockedComponent <TryUnlockItems>b__18_0(PositionComponent positionComponent) { }
; bytes=80 sha256=2bd1d26e2d46c2c48aabb487cd23f872bd33f6bf4d2cc4ec682f3afdd5ef1df3 status=arm64_complete_bound indexed_start=True
0x0678ADC0: fe0f1ef8  str x30, [sp, #-0x20]!
0x0678ADC4: f44f01a9  stp x20, x19, [sp, #0x10]
0x0678ADC8: f4ac00d0  adrp x20, #0x7d28000
0x0678ADCC: 88f27439  ldrb w8, [x20, #0xd3c]
0x0678ADD0: f30301aa  mov x19, x1
0x0678ADD4: c8000037  tbnz w8, #0, #0x678adec
0x0678ADD8: a0770090  adrp x0, #0x767e000
0x0678ADDC: 001c43f9  ldr x0, [x0, #0x638]
0x0678ADE0: 0ed72797  bl #0x3180a18
0x0678ADE4: 28008052  movz w8, #0x1
0x0678ADE8: 88f23439  strb w8, [x20, #0xd3c]
0x0678ADEC: 130100b4  cbz x19, #0x678ae0c
0x0678ADF0: a8770090  adrp x8, #0x767e000
0x0678ADF4: 081d43f9  ldr x8, [x8, #0x638]
0x0678ADF8: e00313aa  mov x0, x19
0x0678ADFC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0678AE00: 010140f9  ldr x1, [x8]
0x0678AE04: fe0742f8  ldr x30, [sp], #0x20
0x0678AE08: 858a5117  b #0x3bed81c
0x0678AE0C: a8d72797  bl #0x3180cac

