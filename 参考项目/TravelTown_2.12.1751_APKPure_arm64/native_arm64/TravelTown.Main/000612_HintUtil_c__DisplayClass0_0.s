; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 612 .HintUtil.<>c__DisplayClass0_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6272C94 | public void .ctor() { }
; bytes=8 sha256=e2de9e13a8870bab3e0959903bb5c0089b526c0efeb929ae1bb083ff43eca7fb status=arm64_complete_bound indexed_start=True
0x06272C94: e1031faa  mov x1, xzr
0x06272C98: 599ed117  b #0x56da5fc

; RVA 0x6276CD4 | internal bool <GetHint>b__1(IdComponent item) { }
; bytes=296 sha256=318ff01512751bfb9e6de1d60a168ccb00290df714ae8b41ae5c3b321fe17cd3 status=arm64_complete_bound indexed_start=True
0x06276CD4: fe0f1df8  str x30, [sp, #-0x30]!
0x06276CD8: f65701a9  stp x22, x21, [sp, #0x10]
0x06276CDC: f44f02a9  stp x20, x19, [sp, #0x20]
0x06276CE0: 76d500f0  adrp x22, #0x7d25000
0x06276CE4: 95a30090  adrp x21, #0x76e6000
0x06276CE8: c8525139  ldrb w8, [x22, #0x454]
0x06276CEC: b5e244f9  ldr x21, [x21, #0x9c0]
0x06276CF0: f30301aa  mov x19, x1
0x06276CF4: f40300aa  mov x20, x0
0x06276CF8: 88010037  tbnz w8, #0, #0x6276d28
0x06276CFC: 80a30090  adrp x0, #0x76e6000
0x06276D00: 00e044f9  ldr x0, [x0, #0x9c0]
0x06276D04: 45273c97  bl #0x3180a18
0x06276D08: 20a00090  adrp x0, #0x767a000
0x06276D0C: 004c42f9  ldr x0, [x0, #0x498]
0x06276D10: 42273c97  bl #0x3180a18
0x06276D14: 609f00b0  adrp x0, #0x7663000
0x06276D18: 00f446f9  ldr x0, [x0, #0xde8]
0x06276D1C: 3f273c97  bl #0x3180a18
0x06276D20: 28008052  movz w8, #0x1
0x06276D24: c8521139  strb w8, [x22, #0x454]
0x06276D28: a00240f9  ldr x0, [x21]
0x06276D2C: 960a40f9  ldr x22, [x20, #0x10]
0x06276D30: dc273c97  bl #0x3180ca0
0x06276D34: 360600b4  cbz x22, #0x6276df8
0x06276D38: 2aa00090  adrp x10, #0x767a000
0x06276D3C: c80240f9  ldr x8, [x22]
0x06276D40: 4a4d42f9  ldr x10, [x10, #0x498]
0x06276D44: f50300aa  mov x21, x0
0x06276D48: 095d4279  ldrh w9, [x8, #0x12e]
0x06276D4C: 410140f9  ldr x1, [x10]
0x06276D50: 290100b4  cbz x9, #0x6276d74
0x06276D54: 0a5940f9  ldr x10, [x8, #0xb0]
0x06276D58: 4a210091  add x10, x10, #8
0x06276D5C: 4b815ff8  ldur x11, [x10, #-8]
0x06276D60: 7f0101eb  cmp x11, x1
0x06276D64: 00010054  b.eq #0x6276d84
0x06276D68: 290500f1  subs x9, x9, #1
0x06276D6C: 4a410091  add x10, x10, #0x10
0x06276D70: 61ffff54  b.ne #0x6276d5c
0x06276D74: a2018052  movz w2, #0xd
0x06276D78: e00316aa  mov x0, x22
0x06276D7C: 657f3b97  bl #0x3156b10
0x06276D80: 05000014  b #0x6276d94
0x06276D84: 490140b9  ldr w9, [x10]
0x06276D88: 29350011  add w9, w9, #0xd
0x06276D8C: 08d1298b  add x8, x8, w9, sxtw #4
0x06276D90: 00e10491  add x0, x8, #0x138
0x06276D94: 020440f9  ldr x2, [x0, #8]
0x06276D98: e00315aa  mov x0, x21
0x06276D9C: e10316aa  mov x1, x22
0x06276DA0: e3031faa  mov x3, xzr
0x06276DA4: 057fbf97  bl #0x52569b8
0x06276DA8: e00313aa  mov x0, x19
0x06276DAC: e10315aa  mov x1, x21
0x06276DB0: 76f6ff97  bl #0x6274788
0x06276DB4: 60010036  tbz w0, #0, #0x6276de0
0x06276DB8: 130200b4  cbz x19, #0x6276df8
0x06276DBC: 800e40f9  ldr x0, [x20, #0x18]
0x06276DC0: c00100b4  cbz x0, #0x6276df8
0x06276DC4: 689f00b0  adrp x8, #0x7663000
0x06276DC8: 611a40f9  ldr x1, [x19, #0x30]
0x06276DCC: 08f546f9  ldr x8, [x8, #0xde8]
0x06276DD0: 020140f9  ldr x2, [x8]
0x06276DD4: 8a367797  bl #0x40447fc
0x06276DD8: 08000052  eor w8, w0, #1
0x06276DDC: 02000014  b #0x6276de4
0x06276DE0: e8031f2a  mov w8, wzr
0x06276DE4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06276DE8: f65741a9  ldp x22, x21, [sp, #0x10]
0x06276DEC: 00010012  and w0, w8, #1
0x06276DF0: fe0743f8  ldr x30, [sp], #0x30
0x06276DF4: c0035fd6  ret
0x06276DF8: ad273c97  bl #0x3180cac

; RVA 0x6276DFC | internal bool <GetHint>b__3(IdComponent id) { }
; bytes=312 sha256=3c6ebbd5a4c4cd23c3dfe0c12d243a93cb7c38d4143fdb9be4d08853d0e711ad status=arm64_complete_bound indexed_start=True
0x06276DFC: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06276E00: f44f01a9  stp x20, x19, [sp, #0x10]
0x06276E04: 75d500f0  adrp x21, #0x7d25000
0x06276E08: a8565139  ldrb w8, [x21, #0x455]
0x06276E0C: f40301aa  mov x20, x1
0x06276E10: f30300aa  mov x19, x0
0x06276E14: 28010037  tbnz w8, #0, #0x6276e38
0x06276E18: 20a000d0  adrp x0, #0x767c000
0x06276E1C: 002441f9  ldr x0, [x0, #0x248]
0x06276E20: fe263c97  bl #0x3180a18
0x06276E24: 20a00090  adrp x0, #0x767a000
0x06276E28: 004c42f9  ldr x0, [x0, #0x498]
0x06276E2C: fb263c97  bl #0x3180a18
0x06276E30: 28008052  movz w8, #0x1
0x06276E34: a8561139  strb w8, [x21, #0x455]
0x06276E38: d40700b4  cbz x20, #0x6276f30
0x06276E3C: 730a40f9  ldr x19, [x19, #0x10]
0x06276E40: 930700b4  cbz x19, #0x6276f30
0x06276E44: 2aa00090  adrp x10, #0x767a000
0x06276E48: 680240f9  ldr x8, [x19]
0x06276E4C: 4a4d42f9  ldr x10, [x10, #0x498]
0x06276E50: 941a40f9  ldr x20, [x20, #0x30]
0x06276E54: 095d4279  ldrh w9, [x8, #0x12e]
0x06276E58: 410140f9  ldr x1, [x10]
0x06276E5C: 290100b4  cbz x9, #0x6276e80
0x06276E60: 0a5940f9  ldr x10, [x8, #0xb0]
0x06276E64: 4a210091  add x10, x10, #8
0x06276E68: 4b815ff8  ldur x11, [x10, #-8]
0x06276E6C: 7f0101eb  cmp x11, x1
0x06276E70: 00010054  b.eq #0x6276e90
0x06276E74: 290500f1  subs x9, x9, #1
0x06276E78: 4a410091  add x10, x10, #0x10
0x06276E7C: 61ffff54  b.ne #0x6276e68
0x06276E80: 82008052  movz w2, #0x4
0x06276E84: e00313aa  mov x0, x19
0x06276E88: 227f3b97  bl #0x3156b10
0x06276E8C: 05000014  b #0x6276ea0
0x06276E90: 490140b9  ldr w9, [x10]
0x06276E94: 29110011  add w9, w9, #4
0x06276E98: 08d1298b  add x8, x8, w9, sxtw #4
0x06276E9C: 00e10491  add x0, x8, #0x138
0x06276EA0: 080840a9  ldp x8, x2, [x0]
0x06276EA4: e00313aa  mov x0, x19
0x06276EA8: e10314aa  mov x1, x20
0x06276EAC: 00013fd6  blr x8
0x06276EB0: 000400b4  cbz x0, #0x6276f30
0x06276EB4: 2aa000d0  adrp x10, #0x767c000
0x06276EB8: 080040f9  ldr x8, [x0]
0x06276EBC: 4a2541f9  ldr x10, [x10, #0x248]
0x06276EC0: f30300aa  mov x19, x0
0x06276EC4: 095d4279  ldrh w9, [x8, #0x12e]
0x06276EC8: 410140f9  ldr x1, [x10]
0x06276ECC: 290100b4  cbz x9, #0x6276ef0
0x06276ED0: 0a5940f9  ldr x10, [x8, #0xb0]
0x06276ED4: 4a210091  add x10, x10, #8
0x06276ED8: 4b815ff8  ldur x11, [x10, #-8]
0x06276EDC: 7f0101eb  cmp x11, x1
0x06276EE0: 00010054  b.eq #0x6276f00
0x06276EE4: 290500f1  subs x9, x9, #1
0x06276EE8: 4a410091  add x10, x10, #0x10
0x06276EEC: 61ffff54  b.ne #0x6276ed8
0x06276EF0: e2008052  movz w2, #0x7
0x06276EF4: e00313aa  mov x0, x19
0x06276EF8: 067f3b97  bl #0x3156b10
0x06276EFC: 05000014  b #0x6276f10
0x06276F00: 490140b9  ldr w9, [x10]
0x06276F04: 291d0011  add w9, w9, #7
0x06276F08: 08d1298b  add x8, x8, w9, sxtw #4
0x06276F0C: 00e10491  add x0, x8, #0x138
0x06276F10: 080440a9  ldp x8, x1, [x0]
0x06276F14: e00313aa  mov x0, x19
0x06276F18: 00013fd6  blr x8
0x06276F1C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06276F20: e803202a  mvn w8, w0
0x06276F24: 00010012  and w0, w8, #1
0x06276F28: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06276F2C: c0035fd6  ret
0x06276F30: 5f273c97  bl #0x3180cac

; RVA 0x6276F34 | internal bool <GetHint>b__5(IdComponent component) { }
; bytes=188 sha256=b8db2fd3ab01116de612836b527f4c3ddf2c82f47802f8d071bba795d672210d status=arm64_complete_bound indexed_start=True
0x06276F34: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06276F38: f44f01a9  stp x20, x19, [sp, #0x10]
0x06276F3C: 75d500f0  adrp x21, #0x7d25000
0x06276F40: a85a5139  ldrb w8, [x21, #0x456]
0x06276F44: f40301aa  mov x20, x1
0x06276F48: f30300aa  mov x19, x0
0x06276F4C: c8000037  tbnz w8, #0, #0x6276f64
0x06276F50: 00a000f0  adrp x0, #0x7679000
0x06276F54: 001044f9  ldr x0, [x0, #0x820]
0x06276F58: b0263c97  bl #0x3180a18
0x06276F5C: 28008052  movz w8, #0x1
0x06276F60: a85a1139  strb w8, [x21, #0x456]
0x06276F64: 540400b4  cbz x20, #0x6276fec
0x06276F68: 731240f9  ldr x19, [x19, #0x20]
0x06276F6C: 130400b4  cbz x19, #0x6276fec
0x06276F70: 0aa000f0  adrp x10, #0x7679000
0x06276F74: 680240f9  ldr x8, [x19]
0x06276F78: 4a1144f9  ldr x10, [x10, #0x820]
0x06276F7C: 941a40f9  ldr x20, [x20, #0x30]
0x06276F80: 095d4279  ldrh w9, [x8, #0x12e]
0x06276F84: 410140f9  ldr x1, [x10]
0x06276F88: 290100b4  cbz x9, #0x6276fac
0x06276F8C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06276F90: 4a210091  add x10, x10, #8
0x06276F94: 4b815ff8  ldur x11, [x10, #-8]
0x06276F98: 7f0101eb  cmp x11, x1
0x06276F9C: 00010054  b.eq #0x6276fbc
0x06276FA0: 290500f1  subs x9, x9, #1
0x06276FA4: 4a410091  add x10, x10, #0x10
0x06276FA8: 61ffff54  b.ne #0x6276f94
0x06276FAC: e00313aa  mov x0, x19
0x06276FB0: e2031f2a  mov w2, wzr
0x06276FB4: d77e3b97  bl #0x3156b10
0x06276FB8: 04000014  b #0x6276fc8
0x06276FBC: 490180b9  ldrsw x9, [x10]
0x06276FC0: 0811098b  add x8, x8, x9, lsl #4
0x06276FC4: 00e10491  add x0, x8, #0x138
0x06276FC8: 080440a9  ldp x8, x1, [x0]
0x06276FCC: e00313aa  mov x0, x19
0x06276FD0: 00013fd6  blr x8
0x06276FD4: e10300aa  mov x1, x0
0x06276FD8: e00314aa  mov x0, x20
0x06276FDC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06276FE0: e2031faa  mov x2, xzr
0x06276FE4: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06276FE8: 22cec917  b #0x54ea870
0x06276FEC: 30273c97  bl #0x3180cac

; RVA 0x6276FF0 | internal bool <GetHint>b__7(IdComponent component) { }
; bytes=36 sha256=1dff4e1c34daffa5dbe4ee07a743e7fc033dd05778ec3d2e1a267da447daabd9 status=arm64_complete_bound indexed_start=True
0x06276FF0: fe0f1ff8  str x30, [sp, #-0x10]!
0x06276FF4: 081440f9  ldr x8, [x0, #0x28]
0x06276FF8: c80000b4  cbz x8, #0x6277010
0x06276FFC: 030d40f9  ldr x3, [x8, #0x18]
0x06277000: 002140f9  ldr x0, [x8, #0x40]
0x06277004: 021540f9  ldr x2, [x8, #0x28]
0x06277008: fe0741f8  ldr x30, [sp], #0x10
0x0627700C: 60001fd6  br x3
0x06277010: 27273c97  bl #0x3180cac

