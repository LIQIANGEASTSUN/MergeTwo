; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 33871 Merger.MergeBoardSkipCooldownCapability.Systems.TimeLockSkipCooldownSystem
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A62DB4 | public void Tick(TickContext context) { }
; bytes=696 sha256=a3c0bef9708670f0555c4fad222012f77ac7f110cc7e38eb6962b2742f60db4a status=arm64_complete_bound indexed_start=True
0x06A62DB4: ff8304d1  sub sp, sp, #0x120
0x06A62DB8: fd7300f9  str x29, [sp, #0xe0]
0x06A62DBC: fe5f0fa9  stp x30, x23, [sp, #0xf0]
0x06A62DC0: f65710a9  stp x22, x21, [sp, #0x100]
0x06A62DC4: f44f11a9  stp x20, x19, [sp, #0x110]
0x06A62DC8: 56960090  adrp x22, #0x7d2a000
0x06A62DCC: 756600d0  adrp x21, #0x7730000
0x06A62DD0: c8f25939  ldrb w8, [x22, #0x67c]
0x06A62DD4: b54a44f9  ldr x21, [x21, #0x890]
0x06A62DD8: f30301aa  mov x19, x1
0x06A62DDC: f40300aa  mov x20, x0
0x06A62DE0: 48050037  tbnz w8, #0, #0x6a62e88
0x06A62DE4: 606600d0  adrp x0, #0x7730000
0x06A62DE8: 002044f9  ldr x0, [x0, #0x840]
0x06A62DEC: 0b771c97  bl #0x3180a18
0x06A62DF0: 606600b0  adrp x0, #0x772f000
0x06A62DF4: 002447f9  ldr x0, [x0, #0xe48]
0x06A62DF8: 08771c97  bl #0x3180a18
0x06A62DFC: 606600d0  adrp x0, #0x7730000
0x06A62E00: 004c44f9  ldr x0, [x0, #0x898]
0x06A62E04: 05771c97  bl #0x3180a18
0x06A62E08: 606600b0  adrp x0, #0x772f000
0x06A62E0C: 003447f9  ldr x0, [x0, #0xe68]
0x06A62E10: 02771c97  bl #0x3180a18
0x06A62E14: 606600d0  adrp x0, #0x7730000
0x06A62E18: 005044f9  ldr x0, [x0, #0x8a0]
0x06A62E1C: ff761c97  bl #0x3180a18
0x06A62E20: 606600d0  adrp x0, #0x7730000
0x06A62E24: 005444f9  ldr x0, [x0, #0x8a8]
0x06A62E28: fc761c97  bl #0x3180a18
0x06A62E2C: 606600d0  adrp x0, #0x7730000
0x06A62E30: 005844f9  ldr x0, [x0, #0x8b0]
0x06A62E34: f9761c97  bl #0x3180a18
0x06A62E38: 606600d0  adrp x0, #0x7730000
0x06A62E3C: 005c44f9  ldr x0, [x0, #0x8b8]
0x06A62E40: f6761c97  bl #0x3180a18
0x06A62E44: 606600d0  adrp x0, #0x7730000
0x06A62E48: 003844f9  ldr x0, [x0, #0x870]
0x06A62E4C: f3761c97  bl #0x3180a18
0x06A62E50: 606600d0  adrp x0, #0x7730000
0x06A62E54: 003c44f9  ldr x0, [x0, #0x878]
0x06A62E58: f0761c97  bl #0x3180a18
0x06A62E5C: 606600d0  adrp x0, #0x7730000
0x06A62E60: 006044f9  ldr x0, [x0, #0x8c0]
0x06A62E64: ed761c97  bl #0x3180a18
0x06A62E68: 606600d0  adrp x0, #0x7730000
0x06A62E6C: 006444f9  ldr x0, [x0, #0x8c8]
0x06A62E70: ea761c97  bl #0x3180a18
0x06A62E74: 606600d0  adrp x0, #0x7730000
0x06A62E78: 004844f9  ldr x0, [x0, #0x890]
0x06A62E7C: e7761c97  bl #0x3180a18
0x06A62E80: 28008052  movz w8, #0x1
0x06A62E84: c8f21939  strb w8, [x22, #0x67c]
0x06A62E88: a00240f9  ldr x0, [x21]
0x06A62E8C: 00e4006f  movi v0.2d, #0000000000000000
0x06A62E90: ff3b00f9  str xzr, [sp, #0x70]
0x06A62E94: e00304ad  stp q0, q0, [sp, #0x80]
0x06A62E98: e08302ad  stp q0, q0, [sp, #0x50]
0x06A62E9C: e08301ad  stp q0, q0, [sp, #0x30]
0x06A62EA0: e00b803d  str q0, [sp, #0x20]
0x06A62EA4: 7f771c97  bl #0x3180ca0
0x06A62EA8: e1031faa  mov x1, xzr
0x06A62EAC: f50300aa  mov x21, x0
0x06A62EB0: d3ddb197  bl #0x56da5fc
0x06A62EB4: b50d00b4  cbz x21, #0x6a63068
0x06A62EB8: f60315aa  mov x22, x21
0x06A62EBC: d48e01f8  str x20, [x22, #0x18]!
0x06A62EC0: e00316aa  mov x0, x22
0x06A62EC4: e10314aa  mov x1, x20
0x06A62EC8: bf761c97  bl #0x31809c4
0x06A62ECC: 600640f9  ldr x0, [x19, #8]
0x06A62ED0: c00c00b4  cbz x0, #0x6a63068
0x06A62ED4: 686600d0  adrp x8, #0x7730000
0x06A62ED8: 083d44f9  ldr x8, [x8, #0x878]
0x06A62EDC: d42200d1  sub x20, x22, #8
0x06A62EE0: e10314aa  mov x1, x20
0x06A62EE4: 020140f9  ldr x2, [x8]
0x06A62EE8: 4e884d97  bl #0x3dc5020
0x06A62EEC: 200b0036  tbz w0, #0, #0x6a63050
0x06A62EF0: 686600d0  adrp x8, #0x7730000
0x06A62EF4: 600640ad  ldp q0, q1, [x19]
0x06A62EF8: 084d44f9  ldr x8, [x8, #0x898]
0x06A62EFC: e00700ad  stp q0, q1, [sp]
0x06A62F00: 000140f9  ldr x0, [x8]
0x06A62F04: 57dc4697  bl #0x3c1a060
0x06A62F08: 686600b0  adrp x8, #0x772f000
0x06A62F0C: 083547f9  ldr x8, [x8, #0xe68]
0x06A62F10: f60300aa  mov x22, x0
0x06A62F14: 080140f9  ldr x8, [x8]
0x06A62F18: e00308aa  mov x0, x8
0x06A62F1C: 61771c97  bl #0x3180ca0
0x06A62F20: 686600b0  adrp x8, #0x772f000
0x06A62F24: 082547f9  ldr x8, [x8, #0xe48]
0x06A62F28: e1031faa  mov x1, xzr
0x06A62F2C: e3031faa  mov x3, xzr
0x06A62F30: f70300aa  mov x23, x0
0x06A62F34: 020140f9  ldr x2, [x8]
0x06A62F38: 74cbd297  bl #0x5f15d08
0x06A62F3C: 686600d0  adrp x8, #0x7730000
0x06A62F40: 085d44f9  ldr x8, [x8, #0x8b8]
0x06A62F44: e00740ad  ldp q0, q1, [sp]
0x06A62F48: e0830291  add x0, sp, #0xa0
0x06A62F4C: e10316aa  mov x1, x22
0x06A62F50: 030140f9  ldr x3, [x8]
0x06A62F54: e8830091  add x8, sp, #0x20
0x06A62F58: e20317aa  mov x2, x23
0x06A62F5C: e00705ad  stp q0, q1, [sp, #0xa0]
0x06A62F60: 79084c97  bl #0x3d65144
0x06A62F64: 686600d0  adrp x8, #0x7730000
0x06A62F68: 085144f9  ldr x8, [x8, #0x8a0]
0x06A62F6C: 000140f9  ldr x0, [x8]
0x06A62F70: 4c771c97  bl #0x3180ca0
0x06A62F74: 686600d0  adrp x8, #0x7730000
0x06A62F78: 086544f9  ldr x8, [x8, #0x8c8]
0x06A62F7C: e10315aa  mov x1, x21
0x06A62F80: e3031faa  mov x3, xzr
0x06A62F84: f60300aa  mov x22, x0
0x06A62F88: 020140f9  ldr x2, [x8]
0x06A62F8C: 39b49f97  bl #0x5250070
0x06A62F90: 686600d0  adrp x8, #0x7730000
0x06A62F94: 085944f9  ldr x8, [x8, #0x8b0]
0x06A62F98: e0830091  add x0, sp, #0x20
0x06A62F9C: e10316aa  mov x1, x22
0x06A62FA0: 020140f9  ldr x2, [x8]
0x06A62FA4: e8030291  add x8, sp, #0x80
0x06A62FA8: 1b9c6497  bl #0x438a014
0x06A62FAC: 686600d0  adrp x8, #0x7730000
0x06A62FB0: 085544f9  ldr x8, [x8, #0x8a8]
0x06A62FB4: e0030291  add x0, sp, #0x80
0x06A62FB8: e1030191  add x1, sp, #0x40
0x06A62FBC: 020140f9  ldr x2, [x8]
0x06A62FC0: 829c6497  bl #0x438a1c8
0x06A62FC4: 60040036  tbz w0, #0, #0x6a63050
0x06A62FC8: ff2b00f9  str xzr, [sp, #0x50]
0x06A62FCC: 686600d0  adrp x8, #0x7730000
0x06A62FD0: 086144f9  ldr x8, [x8, #0x8c0]
0x06A62FD4: e28342ad  ldp q2, q0, [sp, #0x50]
0x06A62FD8: e93b40f9  ldr x9, [sp, #0x70]
0x06A62FDC: e113c03d  ldr q1, [sp, #0x40]
0x06A62FE0: 010140f9  ldr x1, [x8]
0x06A62FE4: e0830291  add x0, sp, #0xa0
0x06A62FE8: e28305ad  stp q2, q0, [sp, #0xb0]
0x06A62FEC: e12b803d  str q1, [sp, #0xa0]
0x06A62FF0: e96b00f9  str x9, [sp, #0xd0]
0x06A62FF4: fa8c4d97  bl #0x3dc63dc
0x06A62FF8: 686600d0  adrp x8, #0x7730000
0x06A62FFC: 730a40f9  ldr x19, [x19, #0x10]
0x06A63000: ddad1d14  b #0x71ce774
0x06A63004: 000140f9  ldr x0, [x8]
0x06A63008: 26771c97  bl #0x3180ca0
0x06A6300C: e1031faa  mov x1, xzr
0x06A63010: f50300aa  mov x21, x0
0x06A63014: 7addb197  bl #0x56da5fc
0x06A63018: 880240f9  ldr x8, [x20]
0x06A6301C: 680200b4  cbz x8, #0x6a63068
0x06A63020: 550200b4  cbz x21, #0x6a63068
0x06A63024: 010940f9  ldr x1, [x8, #0x10]
0x06A63028: e00315aa  mov x0, x21
0x06A6302C: 010c01f8  str x1, [x0, #0x10]!
0x06A63030: 65761c97  bl #0x31809c4
0x06A63034: b30100b4  cbz x19, #0x6a63068
0x06A63038: 686600b0  adrp x8, #0x7730000
0x06A6303C: 083944f9  ldr x8, [x8, #0x870]
0x06A63040: e00313aa  mov x0, x19
0x06A63044: e10315aa  mov x1, x21
0x06A63048: 020140f9  ldr x2, [x8]
0x06A6304C: e6804d97  bl #0x3dc33e4
0x06A63050: f44f51a9  ldp x20, x19, [sp, #0x110]
0x06A63054: f65750a9  ldp x22, x21, [sp, #0x100]
0x06A63058: fe5f4fa9  ldp x30, x23, [sp, #0xf0]
0x06A6305C: fd7340f9  ldr x29, [sp, #0xe0]
0x06A63060: ff830491  add sp, sp, #0x120
0x06A63064: c0035fd6  ret
0x06A63068: 11771c97  bl #0x3180cac

; RVA 0x6A63074 | public void .ctor() { }
; bytes=8 sha256=026e2f7fbd57b349370eea862b01da8c2eab132e14c51be95317d74ccd8b5a7a status=arm64_complete_bound indexed_start=True
0x06A63074: e1031faa  mov x1, xzr
0x06A63078: 61ddb117  b #0x56da5fc

