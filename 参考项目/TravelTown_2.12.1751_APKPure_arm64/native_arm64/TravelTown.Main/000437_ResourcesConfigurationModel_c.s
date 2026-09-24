; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 437 .ResourcesConfigurationModel.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x61272DC | private static void .cctor() { }
; bytes=104 sha256=7b557a8fcd69a658dc5a50b323dab8f4df9d7e0e53c38f5cdac27d2818c834e4 status=arm64_complete_bound indexed_start=True
0x061272DC: fe0f1ef8  str x30, [sp, #-0x20]!
0x061272E0: f44f01a9  stp x20, x19, [sp, #0x10]
0x061272E4: f3df00b0  adrp x19, #0x7d24000
0x061272E8: 94ad00f0  adrp x20, #0x76da000
0x061272EC: 68825239  ldrb w8, [x19, #0x4a0]
0x061272F0: 94c240f9  ldr x20, [x20, #0x180]
0x061272F4: c8000037  tbnz w8, #0, #0x612730c
0x061272F8: 80ad00f0  adrp x0, #0x76da000
0x061272FC: 00c040f9  ldr x0, [x0, #0x180]
0x06127300: c6654197  bl #0x3180a18
0x06127304: 28008052  movz w8, #0x1
0x06127308: 68821239  strb w8, [x19, #0x4a0]
0x0612730C: 800240f9  ldr x0, [x20]
0x06127310: 64664197  bl #0x3180ca0
0x06127314: e1031faa  mov x1, xzr
0x06127318: f30300aa  mov x19, x0
0x0612731C: b8ccd697  bl #0x56da5fc
0x06127320: 880240f9  ldr x8, [x20]
0x06127324: e10313aa  mov x1, x19
0x06127328: 085d40f9  ldr x8, [x8, #0xb8]
0x0612732C: 130100f9  str x19, [x8]
0x06127330: 880240f9  ldr x8, [x20]
0x06127334: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06127338: 005d40f9  ldr x0, [x8, #0xb8]
0x0612733C: fe0742f8  ldr x30, [sp], #0x20
0x06127340: a1654117  b #0x31809c4

; RVA 0x6127344 | public void .ctor() { }
; bytes=8 sha256=f37d05cef17560bccbc544fd93cb9ff6e1bd916ce66d6c56f6041000f8dfb193 status=arm64_complete_bound indexed_start=True
0x06127344: e1031faa  mov x1, xzr
0x06127348: adccd617  b #0x56da5fc

; RVA 0x612734C | internal IRewardType <AllGenericTokenIds>b__19_0(KeyValuePair<IRewardType, GenericTokenConfig> tokenConfig) { }
; bytes=60 sha256=a73203b40167e35c676f69106b1bd0f3ea4d27a2521fab8bc9df4548f9dfcb42 status=arm64_complete_bound indexed_start=True
0x0612734C: fe0f1ef8  str x30, [sp, #-0x20]!
0x06127350: f44f01a9  stp x20, x19, [sp, #0x10]
0x06127354: f4df00b0  adrp x20, #0x7d24000
0x06127358: 88865239  ldrb w8, [x20, #0x4a1]
0x0612735C: f30301aa  mov x19, x1
0x06127360: c8000037  tbnz w8, #0, #0x6127378
0x06127364: 80ad00f0  adrp x0, #0x76da000
0x06127368: 004c41f9  ldr x0, [x0, #0x298]
0x0612736C: ab654197  bl #0x3180a18
0x06127370: 28008052  movz w8, #0x1
0x06127374: 88861239  strb w8, [x20, #0x4a1]
0x06127378: e00313aa  mov x0, x19
0x0612737C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06127380: fe0742f8  ldr x30, [sp], #0x20
0x06127384: c0035fd6  ret

