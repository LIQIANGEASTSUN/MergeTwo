; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 934 .UnboxingSystem.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6788C98 | private static void .cctor() { }
; bytes=104 sha256=2cfc7853597c0a8a2140d5aa6be831bb2fe3103ce0f4c4babb00a175bda35458 status=arm64_complete_bound indexed_start=True
0x06788C98: fe0f1ef8  str x30, [sp, #-0x20]!
0x06788C9C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06788CA0: 13ad0090  adrp x19, #0x7d28000
0x06788CA4: 547c0090  adrp x20, #0x7710000
0x06788CA8: 68a67439  ldrb w8, [x19, #0xd29]
0x06788CAC: 94f240f9  ldr x20, [x20, #0x1e0]
0x06788CB0: c8000037  tbnz w8, #0, #0x6788cc8
0x06788CB4: 407c0090  adrp x0, #0x7710000
0x06788CB8: 00f040f9  ldr x0, [x0, #0x1e0]
0x06788CBC: 57df2797  bl #0x3180a18
0x06788CC0: 28008052  movz w8, #0x1
0x06788CC4: 68a63439  strb w8, [x19, #0xd29]
0x06788CC8: 800240f9  ldr x0, [x20]
0x06788CCC: f5df2797  bl #0x3180ca0
0x06788CD0: e1031faa  mov x1, xzr
0x06788CD4: f30300aa  mov x19, x0
0x06788CD8: 4946bd97  bl #0x56da5fc
0x06788CDC: 880240f9  ldr x8, [x20]
0x06788CE0: e10313aa  mov x1, x19
0x06788CE4: 085d40f9  ldr x8, [x8, #0xb8]
0x06788CE8: 130100f9  str x19, [x8]
0x06788CEC: 880240f9  ldr x8, [x20]
0x06788CF0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06788CF4: 005d40f9  ldr x0, [x8, #0xb8]
0x06788CF8: fe0742f8  ldr x30, [sp], #0x20
0x06788CFC: 32df2717  b #0x31809c4

; RVA 0x6788D00 | public void .ctor() { }
; bytes=8 sha256=f4298d0247b4fd90afab8574755ec3b12d0f879526533e28eab8bca1def2a152 status=arm64_complete_bound indexed_start=True
0x06788D00: e1031faa  mov x1, xzr
0x06788D04: 3e46bd17  b #0x56da5fc

; RVA 0x6788D08 | internal string <ProcessItemConsumeUnboxing>b__12_0(ItemMultiple p) { }
; bytes=196 sha256=3c7966d26ea1ab39c2da4ffd14ebf4fde8f1d3b5efe3ae1b40c5eb1619c4c490 status=arm64_complete_bound indexed_start=True
0x06788D08: fe0f1ef8  str x30, [sp, #-0x20]!
0x06788D0C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06788D10: 14ad0090  adrp x20, #0x7d28000
0x06788D14: 88aa7439  ldrb w8, [x20, #0xd2a]
0x06788D18: f30301aa  mov x19, x1
0x06788D1C: 28010037  tbnz w8, #0, #0x6788d40
0x06788D20: 807700b0  adrp x0, #0x7679000
0x06788D24: 001044f9  ldr x0, [x0, #0x820]
0x06788D28: 3cdf2797  bl #0x3180a18
0x06788D2C: 807700d0  adrp x0, #0x767a000
0x06788D30: 00f443f9  ldr x0, [x0, #0x7e8]
0x06788D34: 39df2797  bl #0x3180a18
0x06788D38: 28008052  movz w8, #0x1
0x06788D3C: 88aa3439  strb w8, [x20, #0xd2a]
0x06788D40: 530400b4  cbz x19, #0x6788dc8
0x06788D44: 887700d0  adrp x8, #0x767a000
0x06788D48: 08f543f9  ldr x8, [x8, #0x7e8]
0x06788D4C: e00313aa  mov x0, x19
0x06788D50: 010140f9  ldr x1, [x8]
0x06788D54: 3125b097  bl #0x5392218
0x06788D58: 800300b4  cbz x0, #0x6788dc8
0x06788D5C: 8a7700b0  adrp x10, #0x7679000
0x06788D60: 080040f9  ldr x8, [x0]
0x06788D64: 4a1144f9  ldr x10, [x10, #0x820]
0x06788D68: f30300aa  mov x19, x0
0x06788D6C: 095d4279  ldrh w9, [x8, #0x12e]
0x06788D70: 410140f9  ldr x1, [x10]
0x06788D74: 290100b4  cbz x9, #0x6788d98
0x06788D78: 0a5940f9  ldr x10, [x8, #0xb0]
0x06788D7C: 4a210091  add x10, x10, #8
0x06788D80: 4b815ff8  ldur x11, [x10, #-8]
0x06788D84: 7f0101eb  cmp x11, x1
0x06788D88: 00010054  b.eq #0x6788da8
0x06788D8C: 290500f1  subs x9, x9, #1
0x06788D90: 4a410091  add x10, x10, #0x10
0x06788D94: 61ffff54  b.ne #0x6788d80
0x06788D98: e00313aa  mov x0, x19
0x06788D9C: e2031f2a  mov w2, wzr
0x06788DA0: 5c372797  bl #0x3156b10
0x06788DA4: 04000014  b #0x6788db4
0x06788DA8: 490180b9  ldrsw x9, [x10]
0x06788DAC: 0811098b  add x8, x8, x9, lsl #4
0x06788DB0: 00e10491  add x0, x8, #0x138
0x06788DB4: 020440a9  ldp x2, x1, [x0]
0x06788DB8: e00313aa  mov x0, x19
0x06788DBC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06788DC0: fe0742f8  ldr x30, [sp], #0x20
0x06788DC4: 40001fd6  br x2
0x06788DC8: b9df2797  bl #0x3180cac

