; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 670 .PersistenceSystem.<>c__DisplayClass20_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x628C9BC | public void .ctor() { }
; bytes=8 sha256=4aae7b9542ca4c723bb11f11168617e8edeaf56bf7a243cf058a5cbff988597a status=arm64_complete_bound indexed_start=True
0x0628C9BC: e1031faa  mov x1, xzr
0x0628C9C0: 0f37d117  b #0x56da5fc

; RVA 0x628DEA4 | internal void <DeserializeEntity>b__0(ISerializableComponent component) { }
; bytes=324 sha256=43e68a03090b6b8abdb2a5e23f645c8d5329aeabe0933365f5b9d1b02a2a35bf status=arm64_complete_bound indexed_start=True
0x0628DEA4: ffc300d1  sub sp, sp, #0x30
0x0628DEA8: fe5701a9  stp x30, x21, [sp, #0x10]
0x0628DEAC: f44f02a9  stp x20, x19, [sp, #0x20]
0x0628DEB0: d5d40090  adrp x21, #0x7d25000
0x0628DEB4: a87a5439  ldrb w8, [x21, #0x51e]
0x0628DEB8: f30301aa  mov x19, x1
0x0628DEBC: f40300aa  mov x20, x0
0x0628DEC0: 28010037  tbnz w8, #0, #0x628dee4
0x0628DEC4: 009e00f0  adrp x0, #0x7650000
0x0628DEC8: 002843f9  ldr x0, [x0, #0x650]
0x0628DECC: d3ca3b97  bl #0x3180a18
0x0628DED0: c0a200d0  adrp x0, #0x76e7000
0x0628DED4: 00d443f9  ldr x0, [x0, #0x7a8]
0x0628DED8: d0ca3b97  bl #0x3180a18
0x0628DEDC: 28008052  movz w8, #0x1
0x0628DEE0: a87a1439  strb w8, [x21, #0x51e]
0x0628DEE4: ff0700f9  str xzr, [sp, #8]
0x0628DEE8: f30700b4  cbz x19, #0x628dfe4
0x0628DEEC: d5a200d0  adrp x21, #0x76e7000
0x0628DEF0: 680240f9  ldr x8, [x19]
0x0628DEF4: b5d643f9  ldr x21, [x21, #0x7a8]
0x0628DEF8: 940a40f9  ldr x20, [x20, #0x10]
0x0628DEFC: 095d4279  ldrh w9, [x8, #0x12e]
0x0628DF00: a10240f9  ldr x1, [x21]
0x0628DF04: 290100b4  cbz x9, #0x628df28
0x0628DF08: 0a5940f9  ldr x10, [x8, #0xb0]
0x0628DF0C: 4a210091  add x10, x10, #8
0x0628DF10: 4b815ff8  ldur x11, [x10, #-8]
0x0628DF14: 7f0101eb  cmp x11, x1
0x0628DF18: 00010054  b.eq #0x628df38
0x0628DF1C: 290500f1  subs x9, x9, #1
0x0628DF20: 4a410091  add x10, x10, #0x10
0x0628DF24: 61ffff54  b.ne #0x628df10
0x0628DF28: e00313aa  mov x0, x19
0x0628DF2C: e2031f2a  mov w2, wzr
0x0628DF30: f8223b97  bl #0x3156b10
0x0628DF34: 04000014  b #0x628df44
0x0628DF38: 490180b9  ldrsw x9, [x10]
0x0628DF3C: 0811098b  add x8, x8, x9, lsl #4
0x0628DF40: 00e10491  add x0, x8, #0x138
0x0628DF44: 080440a9  ldp x8, x1, [x0]
0x0628DF48: e00313aa  mov x0, x19
0x0628DF4C: 00013fd6  blr x8
0x0628DF50: b40400b4  cbz x20, #0x628dfe4
0x0628DF54: 089e00f0  adrp x8, #0x7650000
0x0628DF58: 082943f9  ldr x8, [x8, #0x650]
0x0628DF5C: e10300aa  mov x1, x0
0x0628DF60: e2230091  add x2, sp, #8
0x0628DF64: e00314aa  mov x0, x20
0x0628DF68: 030140f9  ldr x3, [x8]
0x0628DF6C: 515ab197  bl #0x4ee48b0
0x0628DF70: 680240f9  ldr x8, [x19]
0x0628DF74: f40740f9  ldr x20, [sp, #8]
0x0628DF78: a10240f9  ldr x1, [x21]
0x0628DF7C: 095d4279  ldrh w9, [x8, #0x12e]
0x0628DF80: 290100b4  cbz x9, #0x628dfa4
0x0628DF84: 0a5940f9  ldr x10, [x8, #0xb0]
0x0628DF88: 4a210091  add x10, x10, #8
0x0628DF8C: 4b815ff8  ldur x11, [x10, #-8]
0x0628DF90: 7f0101eb  cmp x11, x1
0x0628DF94: 00010054  b.eq #0x628dfb4
0x0628DF98: 290500f1  subs x9, x9, #1
0x0628DF9C: 4a410091  add x10, x10, #0x10
0x0628DFA0: 61ffff54  b.ne #0x628df8c
0x0628DFA4: 62008052  movz w2, #0x3
0x0628DFA8: e00313aa  mov x0, x19
0x0628DFAC: d9223b97  bl #0x3156b10
0x0628DFB0: 05000014  b #0x628dfc4
0x0628DFB4: 490140b9  ldr w9, [x10]
0x0628DFB8: 290d0011  add w9, w9, #3
0x0628DFBC: 08d1298b  add x8, x8, w9, sxtw #4
0x0628DFC0: 00e10491  add x0, x8, #0x138
0x0628DFC4: 080840a9  ldp x8, x2, [x0]
0x0628DFC8: e00313aa  mov x0, x19
0x0628DFCC: e10314aa  mov x1, x20
0x0628DFD0: 00013fd6  blr x8
0x0628DFD4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0628DFD8: fe5741a9  ldp x30, x21, [sp, #0x10]
0x0628DFDC: ffc30091  add sp, sp, #0x30
0x0628DFE0: c0035fd6  ret
0x0628DFE4: 32cb3b97  bl #0x3180cac

