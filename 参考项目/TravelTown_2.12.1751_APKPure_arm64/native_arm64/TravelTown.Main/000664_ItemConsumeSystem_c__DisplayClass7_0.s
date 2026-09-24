; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 664 .ItemConsumeSystem.<>c__DisplayClass7_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x628B1D8 | public void .ctor() { }
; bytes=8 sha256=f31afd0b5405c2277e4cb9096a60591c6c52354172c4d25f488a3a2130218676 status=arm64_complete_bound indexed_start=True
0x0628B1D8: e1031faa  mov x1, xzr
0x0628B1DC: 083dd117  b #0x56da5fc

; RVA 0x628B5DC | internal bool <GetAnyConsumedItems>b__1(ItemMultiple available) { }
; bytes=316 sha256=8e3fe89a1f2ab9a17a2d9a1f321fb32339570ff248cbb961215ccbda2a4bb4ec status=arm64_complete_bound indexed_start=True
0x0628B5DC: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0628B5E0: f44f01a9  stp x20, x19, [sp, #0x10]
0x0628B5E4: d5d400d0  adrp x21, #0x7d25000
0x0628B5E8: a8265439  ldrb w8, [x21, #0x509]
0x0628B5EC: f40301aa  mov x20, x1
0x0628B5F0: f30300aa  mov x19, x0
0x0628B5F4: 28010037  tbnz w8, #0, #0x628b618
0x0628B5F8: 609f00d0  adrp x0, #0x7679000
0x0628B5FC: 001044f9  ldr x0, [x0, #0x820]
0x0628B600: 06d53b97  bl #0x3180a18
0x0628B604: 609f00f0  adrp x0, #0x767a000
0x0628B608: 00f443f9  ldr x0, [x0, #0x7e8]
0x0628B60C: 03d53b97  bl #0x3180a18
0x0628B610: 28008052  movz w8, #0x1
0x0628B614: a8261439  strb w8, [x21, #0x509]
0x0628B618: f40700b4  cbz x20, #0x628b714
0x0628B61C: 689f00f0  adrp x8, #0x767a000
0x0628B620: 08f543f9  ldr x8, [x8, #0x7e8]
0x0628B624: e00314aa  mov x0, x20
0x0628B628: 010140f9  ldr x1, [x8]
0x0628B62C: fb1ac497  bl #0x5392218
0x0628B630: 200700b4  cbz x0, #0x628b714
0x0628B634: 759f00d0  adrp x21, #0x7679000
0x0628B638: 080040f9  ldr x8, [x0]
0x0628B63C: b51244f9  ldr x21, [x21, #0x820]
0x0628B640: f40300aa  mov x20, x0
0x0628B644: 095d4279  ldrh w9, [x8, #0x12e]
0x0628B648: a10240f9  ldr x1, [x21]
0x0628B64C: 290100b4  cbz x9, #0x628b670
0x0628B650: 0a5940f9  ldr x10, [x8, #0xb0]
0x0628B654: 4a210091  add x10, x10, #8
0x0628B658: 4b815ff8  ldur x11, [x10, #-8]
0x0628B65C: 7f0101eb  cmp x11, x1
0x0628B660: 00010054  b.eq #0x628b680
0x0628B664: 290500f1  subs x9, x9, #1
0x0628B668: 4a410091  add x10, x10, #0x10
0x0628B66C: 61ffff54  b.ne #0x628b658
0x0628B670: e00314aa  mov x0, x20
0x0628B674: e2031f2a  mov w2, wzr
0x0628B678: 262d3b97  bl #0x3156b10
0x0628B67C: 04000014  b #0x628b68c
0x0628B680: 490180b9  ldrsw x9, [x10]
0x0628B684: 0811098b  add x8, x8, x9, lsl #4
0x0628B688: 00e10491  add x0, x8, #0x138
0x0628B68C: 080440a9  ldp x8, x1, [x0]
0x0628B690: e00314aa  mov x0, x20
0x0628B694: 00013fd6  blr x8
0x0628B698: 740a40f9  ldr x20, [x19, #0x10]
0x0628B69C: d40300b4  cbz x20, #0x628b714
0x0628B6A0: 880240f9  ldr x8, [x20]
0x0628B6A4: a10240f9  ldr x1, [x21]
0x0628B6A8: f30300aa  mov x19, x0
0x0628B6AC: 095d4279  ldrh w9, [x8, #0x12e]
0x0628B6B0: 290100b4  cbz x9, #0x628b6d4
0x0628B6B4: 0a5940f9  ldr x10, [x8, #0xb0]
0x0628B6B8: 4a210091  add x10, x10, #8
0x0628B6BC: 4b815ff8  ldur x11, [x10, #-8]
0x0628B6C0: 7f0101eb  cmp x11, x1
0x0628B6C4: 00010054  b.eq #0x628b6e4
0x0628B6C8: 290500f1  subs x9, x9, #1
0x0628B6CC: 4a410091  add x10, x10, #0x10
0x0628B6D0: 61ffff54  b.ne #0x628b6bc
0x0628B6D4: e00314aa  mov x0, x20
0x0628B6D8: e2031f2a  mov w2, wzr
0x0628B6DC: 0d2d3b97  bl #0x3156b10
0x0628B6E0: 04000014  b #0x628b6f0
0x0628B6E4: 490180b9  ldrsw x9, [x10]
0x0628B6E8: 0811098b  add x8, x8, x9, lsl #4
0x0628B6EC: 00e10491  add x0, x8, #0x138
0x0628B6F0: 080440a9  ldp x8, x1, [x0]
0x0628B6F4: e00314aa  mov x0, x20
0x0628B6F8: 00013fd6  blr x8
0x0628B6FC: e10300aa  mov x1, x0
0x0628B700: e00313aa  mov x0, x19
0x0628B704: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0628B708: e2031faa  mov x2, xzr
0x0628B70C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0628B710: 587cc917  b #0x54ea870
0x0628B714: 66d53b97  bl #0x3180cac

