; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 654 .InventorySystem.<>c__DisplayClass91_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6288760 | public void .ctor() { }
; bytes=8 sha256=07e47d25638419d652b52406f4cfbbf4780f71477f202c85dde318787c80d821 status=arm64_complete_bound indexed_start=True
0x06288760: e1031faa  mov x1, xzr
0x06288764: a647d117  b #0x56da5fc

; RVA 0x628A760 | internal bool <ValidateBackendSlots>b__0(Tuple<IMergeItem, int> item) { }
; bytes=192 sha256=bc12be0ceec83081fa972299a7cdd1b0b13a6c4137991a9b26e2a08806ffad5c status=arm64_complete_bound indexed_start=True
0x0628A760: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0628A764: f44f01a9  stp x20, x19, [sp, #0x10]
0x0628A768: d5d400f0  adrp x21, #0x7d25000
0x0628A76C: a8e25339  ldrb w8, [x21, #0x4f8]
0x0628A770: f40301aa  mov x20, x1
0x0628A774: f30300aa  mov x19, x0
0x0628A778: 28010037  tbnz w8, #0, #0x628a79c
0x0628A77C: 609f00f0  adrp x0, #0x7679000
0x0628A780: 001044f9  ldr x0, [x0, #0x820]
0x0628A784: a5d83b97  bl #0x3180a18
0x0628A788: e0a200b0  adrp x0, #0x76e7000
0x0628A78C: 009042f9  ldr x0, [x0, #0x520]
0x0628A790: a2d83b97  bl #0x3180a18
0x0628A794: 28008052  movz w8, #0x1
0x0628A798: a8e21339  strb w8, [x21, #0x4f8]
0x0628A79C: 140400b4  cbz x20, #0x628a81c
0x0628A7A0: 940a40f9  ldr x20, [x20, #0x10]
0x0628A7A4: d40300b4  cbz x20, #0x628a81c
0x0628A7A8: 6a9f00f0  adrp x10, #0x7679000
0x0628A7AC: 880240f9  ldr x8, [x20]
0x0628A7B0: 4a1144f9  ldr x10, [x10, #0x820]
0x0628A7B4: 095d4279  ldrh w9, [x8, #0x12e]
0x0628A7B8: 410140f9  ldr x1, [x10]
0x0628A7BC: 290100b4  cbz x9, #0x628a7e0
0x0628A7C0: 0a5940f9  ldr x10, [x8, #0xb0]
0x0628A7C4: 4a210091  add x10, x10, #8
0x0628A7C8: 4b815ff8  ldur x11, [x10, #-8]
0x0628A7CC: 7f0101eb  cmp x11, x1
0x0628A7D0: 00010054  b.eq #0x628a7f0
0x0628A7D4: 290500f1  subs x9, x9, #1
0x0628A7D8: 4a410091  add x10, x10, #0x10
0x0628A7DC: 61ffff54  b.ne #0x628a7c8
0x0628A7E0: e00314aa  mov x0, x20
0x0628A7E4: e2031f2a  mov w2, wzr
0x0628A7E8: ca303b97  bl #0x3156b10
0x0628A7EC: 04000014  b #0x628a7fc
0x0628A7F0: 490180b9  ldrsw x9, [x10]
0x0628A7F4: 0811098b  add x8, x8, x9, lsl #4
0x0628A7F8: 00e10491  add x0, x8, #0x138
0x0628A7FC: 080440a9  ldp x8, x1, [x0]
0x0628A800: e00314aa  mov x0, x20
0x0628A804: 00013fd6  blr x8
0x0628A808: 610a40f9  ldr x1, [x19, #0x10]
0x0628A80C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0628A810: e2031faa  mov x2, xzr
0x0628A814: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0628A818: 1680c917  b #0x54ea870
0x0628A81C: 24d93b97  bl #0x3180cac

