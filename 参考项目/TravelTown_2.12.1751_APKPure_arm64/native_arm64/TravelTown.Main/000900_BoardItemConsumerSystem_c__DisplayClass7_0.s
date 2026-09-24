; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 900 .BoardItemConsumerSystem.<>c__DisplayClass7_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x666082C | public void .ctor() { }
; bytes=8 sha256=1294d051aa523fef9cac817170654e7684db16b98554d7115b60c0e341b41aba status=arm64_complete_bound indexed_start=True
0x0666082C: e1031faa  mov x1, xzr
0x06660830: 73e7c117  b #0x56da5fc

; RVA 0x6661960 | internal bool <GetTaskConsumeItems>b__0(ItemMultiple itemMultiple) { }
; bytes=316 sha256=53410cfb4acaf06937355a131d3892d2d544672d88d5a8645157de5a9ea53d4c status=arm64_complete_bound indexed_start=True
0x06661960: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06661964: f44f01a9  stp x20, x19, [sp, #0x10]
0x06661968: 35b600f0  adrp x21, #0x7d28000
0x0666196C: a8664239  ldrb w8, [x21, #0x99]
0x06661970: f40301aa  mov x20, x1
0x06661974: f30300aa  mov x19, x0
0x06661978: 28010037  tbnz w8, #0, #0x666199c
0x0666197C: c0800090  adrp x0, #0x7679000
0x06661980: 001044f9  ldr x0, [x0, #0x820]
0x06661984: 257c2c97  bl #0x3180a18
0x06661988: c08000b0  adrp x0, #0x767a000
0x0666198C: 00f443f9  ldr x0, [x0, #0x7e8]
0x06661990: 227c2c97  bl #0x3180a18
0x06661994: 28008052  movz w8, #0x1
0x06661998: a8660239  strb w8, [x21, #0x99]
0x0666199C: f40700b4  cbz x20, #0x6661a98
0x066619A0: c88000b0  adrp x8, #0x767a000
0x066619A4: 08f543f9  ldr x8, [x8, #0x7e8]
0x066619A8: e00314aa  mov x0, x20
0x066619AC: 010140f9  ldr x1, [x8]
0x066619B0: 1ac2b497  bl #0x5392218
0x066619B4: 200700b4  cbz x0, #0x6661a98
0x066619B8: d5800090  adrp x21, #0x7679000
0x066619BC: 080040f9  ldr x8, [x0]
0x066619C0: b51244f9  ldr x21, [x21, #0x820]
0x066619C4: f40300aa  mov x20, x0
0x066619C8: 095d4279  ldrh w9, [x8, #0x12e]
0x066619CC: a10240f9  ldr x1, [x21]
0x066619D0: 290100b4  cbz x9, #0x66619f4
0x066619D4: 0a5940f9  ldr x10, [x8, #0xb0]
0x066619D8: 4a210091  add x10, x10, #8
0x066619DC: 4b815ff8  ldur x11, [x10, #-8]
0x066619E0: 7f0101eb  cmp x11, x1
0x066619E4: 00010054  b.eq #0x6661a04
0x066619E8: 290500f1  subs x9, x9, #1
0x066619EC: 4a410091  add x10, x10, #0x10
0x066619F0: 61ffff54  b.ne #0x66619dc
0x066619F4: e00314aa  mov x0, x20
0x066619F8: e2031f2a  mov w2, wzr
0x066619FC: 45d42b97  bl #0x3156b10
0x06661A00: 04000014  b #0x6661a10
0x06661A04: 490180b9  ldrsw x9, [x10]
0x06661A08: 0811098b  add x8, x8, x9, lsl #4
0x06661A0C: 00e10491  add x0, x8, #0x138
0x06661A10: 080440a9  ldp x8, x1, [x0]
0x06661A14: e00314aa  mov x0, x20
0x06661A18: 00013fd6  blr x8
0x06661A1C: 740a40f9  ldr x20, [x19, #0x10]
0x06661A20: d40300b4  cbz x20, #0x6661a98
0x06661A24: 880240f9  ldr x8, [x20]
0x06661A28: a10240f9  ldr x1, [x21]
0x06661A2C: f30300aa  mov x19, x0
0x06661A30: 095d4279  ldrh w9, [x8, #0x12e]
0x06661A34: 290100b4  cbz x9, #0x6661a58
0x06661A38: 0a5940f9  ldr x10, [x8, #0xb0]
0x06661A3C: 4a210091  add x10, x10, #8
0x06661A40: 4b815ff8  ldur x11, [x10, #-8]
0x06661A44: 7f0101eb  cmp x11, x1
0x06661A48: 00010054  b.eq #0x6661a68
0x06661A4C: 290500f1  subs x9, x9, #1
0x06661A50: 4a410091  add x10, x10, #0x10
0x06661A54: 61ffff54  b.ne #0x6661a40
0x06661A58: e00314aa  mov x0, x20
0x06661A5C: e2031f2a  mov w2, wzr
0x06661A60: 2cd42b97  bl #0x3156b10
0x06661A64: 04000014  b #0x6661a74
0x06661A68: 490180b9  ldrsw x9, [x10]
0x06661A6C: 0811098b  add x8, x8, x9, lsl #4
0x06661A70: 00e10491  add x0, x8, #0x138
0x06661A74: 080440a9  ldp x8, x1, [x0]
0x06661A78: e00314aa  mov x0, x20
0x06661A7C: 00013fd6  blr x8
0x06661A80: e10300aa  mov x1, x0
0x06661A84: e00313aa  mov x0, x19
0x06661A88: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06661A8C: e2031faa  mov x2, xzr
0x06661A90: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06661A94: 5c55ba17  b #0x54f7004
0x06661A98: 857c2c97  bl #0x3180cac

