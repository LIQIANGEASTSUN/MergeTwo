; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 559 .MergingConfigurationModel.<>c__DisplayClass30_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x613E5F0 | public void .ctor() { }
; bytes=8 sha256=0a42701d6b622f16b1dc33293a6704a9588d05539a29e8ba9c8be80f3b32297a status=arm64_complete_bound indexed_start=True
0x0613E5F0: e1031faa  mov x1, xzr
0x0613E5F4: 0270d617  b #0x56da5fc

; RVA 0x6141594 | internal bool <GetNextItemOnGraph>b__0(IMergeItem item) { }
; bytes=172 sha256=837070202a47092383257539c85bce6b586c93f66d8d96786507797e6efe29fa status=arm64_complete_bound indexed_start=True
0x06141594: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06141598: f44f01a9  stp x20, x19, [sp, #0x10]
0x0614159C: 15df00f0  adrp x21, #0x7d24000
0x061415A0: a83e5739  ldrb w8, [x21, #0x5cf]
0x061415A4: f40301aa  mov x20, x1
0x061415A8: f30300aa  mov x19, x0
0x061415AC: c8000037  tbnz w8, #0, #0x61415c4
0x061415B0: c0a90090  adrp x0, #0x7679000
0x061415B4: 001044f9  ldr x0, [x0, #0x820]
0x061415B8: 18fd4097  bl #0x3180a18
0x061415BC: 28008052  movz w8, #0x1
0x061415C0: a83e1739  strb w8, [x21, #0x5cf]
0x061415C4: d40300b4  cbz x20, #0x614163c
0x061415C8: caa90090  adrp x10, #0x7679000
0x061415CC: 880240f9  ldr x8, [x20]
0x061415D0: 4a1144f9  ldr x10, [x10, #0x820]
0x061415D4: 095d4279  ldrh w9, [x8, #0x12e]
0x061415D8: 410140f9  ldr x1, [x10]
0x061415DC: 290100b4  cbz x9, #0x6141600
0x061415E0: 0a5940f9  ldr x10, [x8, #0xb0]
0x061415E4: 4a210091  add x10, x10, #8
0x061415E8: 4b815ff8  ldur x11, [x10, #-8]
0x061415EC: 7f0101eb  cmp x11, x1
0x061415F0: 00010054  b.eq #0x6141610
0x061415F4: 290500f1  subs x9, x9, #1
0x061415F8: 4a410091  add x10, x10, #0x10
0x061415FC: 61ffff54  b.ne #0x61415e8
0x06141600: e00314aa  mov x0, x20
0x06141604: e2031f2a  mov w2, wzr
0x06141608: 42554097  bl #0x3156b10
0x0614160C: 04000014  b #0x614161c
0x06141610: 490180b9  ldrsw x9, [x10]
0x06141614: 0811098b  add x8, x8, x9, lsl #4
0x06141618: 00e10491  add x0, x8, #0x138
0x0614161C: 080440a9  ldp x8, x1, [x0]
0x06141620: e00314aa  mov x0, x20
0x06141624: 00013fd6  blr x8
0x06141628: 610a40f9  ldr x1, [x19, #0x10]
0x0614162C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06141630: e2031faa  mov x2, xzr
0x06141634: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06141638: 8ea4ce17  b #0x54ea870
0x0614163C: 9cfd4097  bl #0x3180cac

