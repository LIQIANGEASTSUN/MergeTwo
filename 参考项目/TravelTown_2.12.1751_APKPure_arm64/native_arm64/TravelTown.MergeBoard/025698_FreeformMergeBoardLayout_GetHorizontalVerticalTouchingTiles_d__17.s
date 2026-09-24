; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25698 .FreeformMergeBoardLayout.<GetHorizontalVerticalTouchingTiles>d__17
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A408BC | public void .ctor(int <>1__state) { }
; bytes=52 sha256=28b66ce306db03e6ebf7ab6e2dd0cfabc089e0b38657cea1a792a9aaa8067874 status=arm64_complete_bound indexed_start=True
0x06A408BC: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A408C0: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A408C4: f303012a  mov w19, w1
0x06A408C8: e1031faa  mov x1, xzr
0x06A408CC: f40300aa  mov x20, x0
0x06A408D0: 4b67b297  bl #0x56da5fc
0x06A408D4: e0031faa  mov x0, xzr
0x06A408D8: 931200b9  str w19, [x20, #0x10]
0x06A408DC: fb76b297  bl #0x56de4c8
0x06A408E0: 801a00b9  str w0, [x20, #0x18]
0x06A408E4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A408E8: fe0742f8  ldr x30, [sp], #0x20
0x06A408EC: c0035fd6  ret

; RVA 0x6A40E80 | private void System.IDisposable.Dispose() { }
; bytes=28 sha256=caca20a934c0cc19bbd6ec35fe90652c504dc9caff31c12b04a4e4567e31f494 status=arm64_complete_bound indexed_start=True
0x06A40E80: 081040b9  ldr w8, [x0, #0x10]
0x06A40E84: 1f050071  cmp w8, #1
0x06A40E88: 60000054  b.eq #0x6a40e94
0x06A40E8C: 1f0d0031  cmn w8, #3
0x06A40E90: 41000054  b.ne #0x6a40e98
0x06A40E94: 2c010014  b #0x6a41344
0x06A40E98: c0035fd6  ret

; RVA 0x6A40E9C | private bool MoveNext() { }
; bytes=1192 sha256=8df468eabdad51dd59bf4485d1375bb505339e02b39e3322d3f06997aaaf1be3 status=arm64_complete_bound indexed_start=True
0x06A40E9C: ff0303d1  sub sp, sp, #0xc0
0x06A40EA0: ed33056d  stp d13, d12, [sp, #0x50]
0x06A40EA4: eb2b066d  stp d11, d10, [sp, #0x60]
0x06A40EA8: e923076d  stp d9, d8, [sp, #0x70]
0x06A40EAC: fe0308a9  stp x30, x0, [sp, #0x80]
0x06A40EB0: f85f09a9  stp x24, x23, [sp, #0x90]
0x06A40EB4: f6570aa9  stp x22, x21, [sp, #0xa0]
0x06A40EB8: f44f0ba9  stp x20, x19, [sp, #0xb0]
0x06A40EBC: 539700d0  adrp x19, #0x7d2a000
0x06A40EC0: 68ee5439  ldrb w8, [x19, #0x53b]
0x06A40EC4: f40300aa  mov x20, x0
0x06A40EC8: 28040037  tbnz w8, #0, #0x6a40f4c
0x06A40ECC: 606000d0  adrp x0, #0x764e000
0x06A40ED0: 00cc42f9  ldr x0, [x0, #0x598]
0x06A40ED4: d1fe1c97  bl #0x3180a18
0x06A40ED8: 606700f0  adrp x0, #0x772f000
0x06A40EDC: 00bc44f9  ldr x0, [x0, #0x978]
0x06A40EE0: cefe1c97  bl #0x3180a18
0x06A40EE4: 606700f0  adrp x0, #0x772f000
0x06A40EE8: 00c444f9  ldr x0, [x0, #0x988]
0x06A40EEC: cbfe1c97  bl #0x3180a18
0x06A40EF0: 606700f0  adrp x0, #0x772f000
0x06A40EF4: 00c844f9  ldr x0, [x0, #0x990]
0x06A40EF8: c8fe1c97  bl #0x3180a18
0x06A40EFC: 606000d0  adrp x0, #0x764e000
0x06A40F00: 005843f9  ldr x0, [x0, #0x6b0]
0x06A40F04: c5fe1c97  bl #0x3180a18
0x06A40F08: 606700f0  adrp x0, #0x772f000
0x06A40F0C: 00cc44f9  ldr x0, [x0, #0x998]
0x06A40F10: c2fe1c97  bl #0x3180a18
0x06A40F14: 606000d0  adrp x0, #0x764e000
0x06A40F18: 000447f9  ldr x0, [x0, #0xe08]
0x06A40F1C: bffe1c97  bl #0x3180a18
0x06A40F20: 606000f0  adrp x0, #0x764f000
0x06A40F24: 001444f9  ldr x0, [x0, #0x828]
0x06A40F28: bcfe1c97  bl #0x3180a18
0x06A40F2C: 606700f0  adrp x0, #0x772f000
0x06A40F30: 00f844f9  ldr x0, [x0, #0x9f0]
0x06A40F34: b9fe1c97  bl #0x3180a18
0x06A40F38: 606700f0  adrp x0, #0x772f000
0x06A40F3C: 00fc44f9  ldr x0, [x0, #0x9f8]
0x06A40F40: b6fe1c97  bl #0x3180a18
0x06A40F44: 28008052  movz w8, #0x1
0x06A40F48: 68ee1439  strb w8, [x19, #0x53b]
0x06A40F4C: e8230291  add x8, sp, #0x88
0x06A40F50: e82700f9  str x8, [sp, #0x48]
0x06A40F54: 881240b9  ldr w8, [x20, #0x10]
0x06A40F58: 931240f9  ldr x19, [x20, #0x20]
0x06A40F5C: 1f050071  cmp w8, #1
0x06A40F60: 400c0054  b.eq #0x6a410e8
0x06A40F64: 48070035  cbnz w8, #0x6a4104c
0x06A40F68: 08008012  movn w8, #0
0x06A40F6C: 881200b9  str w8, [x20, #0x10]
0x06A40F70: d31800b4  cbz x19, #0x6a41288
0x06A40F74: 812a40b9  ldr w1, [x20, #0x28]
0x06A40F78: e00313aa  mov x0, x19
0x06A40F7C: 60fcff97  bl #0x6a400fc
0x06A40F80: e84740f9  ldr x8, [sp, #0x88]
0x06A40F84: 60030036  tbz w0, #0, #0x6a40ff0
0x06A40F88: 003140bd  ldr s0, [x8, #0x30]
0x06A40F8C: 0820201e  fcmp s0, #0.0
0x06A40F90: 25060054  b.pl #0x6a41054
0x06A40F94: 686000f0  adrp x8, #0x764f000
0x06A40F98: 081544f9  ldr x8, [x8, #0x828]
0x06A40F9C: e02300bd  str s0, [sp, #0x20]
0x06A40FA0: 000140f9  ldr x0, [x8]
0x06A40FA4: e1830091  add x1, sp, #0x20
0x06A40FA8: fbfe1c97  bl #0x3180b94
0x06A40FAC: e10300aa  mov x1, x0
0x06A40FB0: 686700f0  adrp x8, #0x772f000
0x06A40FB4: 08fd44f9  ldr x8, [x8, #0x9f8]
0x06A40FB8: 000140f9  ldr x0, [x8]
0x06A40FBC: e2031faa  mov x2, xzr
0x06A40FC0: c0b5aa97  bl #0x54ee6c0
0x06A40FC4: 686000d0  adrp x8, #0x764e000
0x06A40FC8: 08cd42f9  ldr x8, [x8, #0x598]
0x06A40FCC: f30300aa  mov x19, x0
0x06A40FD0: 000140f9  ldr x0, [x8]
0x06A40FD4: 08e040b9  ldr w8, [x0, #0xe0]
0x06A40FD8: 48000035  cbnz w8, #0x6a40fe0
0x06A40FDC: ecfe1c97  bl #0x3180b8c
0x06A40FE0: e00313aa  mov x0, x19
0x06A40FE4: e1031faa  mov x1, xzr
0x06A40FE8: 669d1194  bl #0x6ea8580
0x06A40FEC: 18000014  b #0x6a4104c
0x06A40FF0: 696000d0  adrp x9, #0x764e000
0x06A40FF4: 082940b9  ldr w8, [x8, #0x28]
0x06A40FF8: 295943f9  ldr x9, [x9, #0x6b0]
0x06A40FFC: e82300b9  str w8, [sp, #0x20]
0x06A41000: 200140f9  ldr x0, [x9]
0x06A41004: e1830091  add x1, sp, #0x20
0x06A41008: e3fe1c97  bl #0x3180b94
0x06A4100C: e10300aa  mov x1, x0
0x06A41010: 686700d0  adrp x8, #0x772f000
0x06A41014: 08f944f9  ldr x8, [x8, #0x9f0]
0x06A41018: 000140f9  ldr x0, [x8]
0x06A4101C: e2031faa  mov x2, xzr
0x06A41020: a8b5aa97  bl #0x54ee6c0
0x06A41024: 686000b0  adrp x8, #0x764e000
0x06A41028: 08cd42f9  ldr x8, [x8, #0x598]
0x06A4102C: f30300aa  mov x19, x0
0x06A41030: 000140f9  ldr x0, [x8]
0x06A41034: 08e040b9  ldr w8, [x0, #0xe0]
0x06A41038: 48000035  cbnz w8, #0x6a41040
0x06A4103C: d4fe1c97  bl #0x3180b8c
0x06A41040: e00313aa  mov x0, x19
0x06A41044: e1031faa  mov x1, xzr
0x06A41048: 4e9d1194  bl #0x6ea8580
0x06A4104C: e0031f2a  mov w0, wzr
0x06A41050: 84000014  b #0x6a41260
0x06A41054: 012940b9  ldr w1, [x8, #0x28]
0x06A41058: e00313aa  mov x0, x19
0x06A4105C: 3efcff97  bl #0x6a40154
0x06A41060: e10300aa  mov x1, x0
0x06A41064: 23feff97  bl #0x6a408f0
0x06A41068: e84740f9  ldr x8, [sp, #0x88]
0x06A4106C: 04102c1e  fmov s4, #0.50000000
0x06A41070: 4508241e  fmul s5, s2, s4
0x06A41074: 6408241e  fmul s4, s3, s4
0x06A41078: a528201e  fadd s5, s5, s0
0x06A4107C: 8428211e  fadd s4, s4, s1
0x06A41080: 0005072d  stp s0, s1, [x8, #0x38]
0x06A41084: 020d082d  stp s2, s3, [x8, #0x40]
0x06A41088: 0511092d  stp s5, s4, [x8, #0x48]
0x06A4108C: 601a40f9  ldr x0, [x19, #0x30]
0x06A41090: e00f00b4  cbz x0, #0x6a4128c
0x06A41094: 686700d0  adrp x8, #0x772f000
0x06A41098: 08bd44f9  ldr x8, [x8, #0x978]
0x06A4109C: 010140f9  ldr x1, [x8]
0x06A410A0: ded18f97  bl #0x4e35818
0x06A410A4: 600f00b4  cbz x0, #0x6a41290
0x06A410A8: 686700d0  adrp x8, #0x772f000
0x06A410AC: 08cd44f9  ldr x8, [x8, #0x998]
0x06A410B0: 010140f9  ldr x1, [x8]
0x06A410B4: e8230091  add x8, sp, #8
0x06A410B8: 14c6a597  bl #0x53b2908
0x06A410BC: e94740f9  ldr x9, [sp, #0x88]
0x06A410C0: e083c03c  ldur q0, [sp, #8]
0x06A410C4: e80f40f9  ldr x8, [sp, #0x18]
0x06A410C8: 20410191  add x0, x9, #0x50
0x06A410CC: e00b803d  str q0, [sp, #0x20]
0x06A410D0: e81b00f9  str x8, [sp, #0x30]
0x06A410D4: 283100f9  str x8, [x9, #0x60]
0x06A410D8: 2015803d  str q0, [x9, #0x50]
0x06A410DC: e1031faa  mov x1, xzr
0x06A410E0: 39fe1c97  bl #0x31809c4
0x06A410E4: f44740f9  ldr x20, [sp, #0x88]
0x06A410E8: 48008012  movn w8, #0x2
0x06A410EC: 881200b9  str w8, [x20, #0x10]
0x06A410F0: 766700d0  adrp x22, #0x772f000
0x06A410F4: 776000b0  adrp x23, #0x764e000
0x06A410F8: d6c644f9  ldr x22, [x22, #0x988]
0x06A410FC: f70647f9  ldr x23, [x23, #0xe08]
0x06A41100: 0c102c1e  fmov s12, #0.50000000
0x06A41104: c10240f9  ldr x1, [x22]
0x06A41108: 80420191  add x0, x20, #0x50
0x06A4110C: a21e9897  bl #0x5048b94
0x06A41110: f44740f9  ldr x20, [sp, #0x88]
0x06A41114: a0090036  tbz w0, #0, #0x6a41248
0x06A41118: 956240b9  ldr w21, [x20, #0x60]
0x06A4111C: 882a40b9  ldr w8, [x20, #0x28]
0x06A41120: bf02086b  cmp w21, w8
0x06A41124: 00ffff54  b.eq #0x6a41104
0x06A41128: f30a00b4  cbz x19, #0x6a41284
0x06A4112C: e00313aa  mov x0, x19
0x06A41130: e103152a  mov w1, w21
0x06A41134: 08fcff97  bl #0x6a40154
0x06A41138: e10300aa  mov x1, x0
0x06A4113C: edfdff97  bl #0x6a408f0
0x06A41140: e00240f9  ldr x0, [x23]
0x06A41144: f44740f9  ldr x20, [sp, #0x88]
0x06A41148: 081ca04e  mov v8.16b, v0.16b
0x06A4114C: 291ca14e  mov v9.16b, v1.16b
0x06A41150: 08e040b9  ldr w8, [x0, #0xe0]
0x06A41154: 8d4e40bd  ldr s13, [x20, #0x4c]
0x06A41158: 4b1ca24e  mov v11.16b, v2.16b
0x06A4115C: 6a1ca34e  mov v10.16b, v3.16b
0x06A41160: 68000035  cbnz w8, #0x6a4116c
0x06A41164: 8afe1c97  bl #0x3180b8c
0x06A41168: f44740f9  ldr x20, [sp, #0x88]
0x06A4116C: 803240bd  ldr s0, [x20, #0x30]
0x06A41170: 4a092c1e  fmul s10, s10, s12
0x06A41174: 29292a1e  fadd s9, s9, s10
0x06A41178: 6b092c1e  fmul s11, s11, s12
0x06A4117C: a1d5a97e  fabd s1, s13, s9
0x06A41180: 2020201e  fcmp s1, s0
0x06A41184: 08292b1e  fadd s8, s8, s11
0x06A41188: 05020054  b.pl #0x6a411c8
0x06A4118C: e00240f9  ldr x0, [x23]
0x06A41190: 8d4a40bd  ldr s13, [x20, #0x48]
0x06A41194: 08e040b9  ldr w8, [x0, #0xe0]
0x06A41198: 88000035  cbnz w8, #0x6a411a8
0x06A4119C: 7cfe1c97  bl #0x3180b8c
0x06A411A0: f44740f9  ldr x20, [sp, #0x88]
0x06A411A4: 803240bd  ldr s0, [x20, #0x30]
0x06A411A8: 814240bd  ldr s1, [x20, #0x40]
0x06A411AC: a2d5a87e  fabd s2, s13, s8
0x06A411B0: 21082c1e  fmul s1, s1, s12
0x06A411B4: 6129211e  fadd s1, s11, s1
0x06A411B8: 0028211e  fadd s0, s0, s1
0x06A411BC: 4020201e  fcmp s2, s0
0x06A411C0: f8879f1a  cset w24, ls
0x06A411C4: 02000014  b #0x6a411cc
0x06A411C8: f8031f2a  mov w24, wzr
0x06A411CC: e00240f9  ldr x0, [x23]
0x06A411D0: 8b4a40bd  ldr s11, [x20, #0x48]
0x06A411D4: 08e040b9  ldr w8, [x0, #0xe0]
0x06A411D8: 68000035  cbnz w8, #0x6a411e4
0x06A411DC: 6cfe1c97  bl #0x3180b8c
0x06A411E0: f44740f9  ldr x20, [sp, #0x88]
0x06A411E4: 803240bd  ldr s0, [x20, #0x30]
0x06A411E8: 61d5a87e  fabd s1, s11, s8
0x06A411EC: 2020201e  fcmp s1, s0
0x06A411F0: 05020054  b.pl #0x6a41230
0x06A411F4: e00240f9  ldr x0, [x23]
0x06A411F8: 884e40bd  ldr s8, [x20, #0x4c]
0x06A411FC: 08e040b9  ldr w8, [x0, #0xe0]
0x06A41200: 88000035  cbnz w8, #0x6a41210
0x06A41204: 62fe1c97  bl #0x3180b8c
0x06A41208: f44740f9  ldr x20, [sp, #0x88]
0x06A4120C: 803240bd  ldr s0, [x20, #0x30]
0x06A41210: 814640bd  ldr s1, [x20, #0x44]
0x06A41214: 02d5a97e  fabd s2, s8, s9
0x06A41218: 21082c1e  fmul s1, s1, s12
0x06A4121C: 4129211e  fadd s1, s10, s1
0x06A41220: 0028211e  fadd s0, s0, s1
0x06A41224: 4020201e  fcmp s2, s0
0x06A41228: e8879f1a  cset w8, ls
0x06A4122C: 02000014  b #0x6a41234
0x06A41230: e8031f2a  mov w8, wzr
0x06A41234: 0801182a  orr w8, w8, w24
0x06A41238: 68f6ff34  cbz w8, #0x6a41104
0x06A4123C: 20008052  movz w0, #0x1
0x06A41240: 80560229  stp w0, w21, [x20, #0x10]
0x06A41244: 07000014  b #0x6a41260
0x06A41248: e00314aa  mov x0, x20
0x06A4124C: 3e000094  bl #0x6a41344
0x06A41250: e84740f9  ldr x8, [sp, #0x88]
0x06A41254: e0031f2a  mov w0, wzr
0x06A41258: 1f7d05a9  stp xzr, xzr, [x8, #0x50]
0x06A4125C: 1f3100f9  str xzr, [x8, #0x60]
0x06A41260: f44f4ba9  ldp x20, x19, [sp, #0xb0]
0x06A41264: f6574aa9  ldp x22, x21, [sp, #0xa0]
0x06A41268: f85f49a9  ldp x24, x23, [sp, #0x90]
0x06A4126C: fe4340f9  ldr x30, [sp, #0x80]
0x06A41270: e923476d  ldp d9, d8, [sp, #0x70]
0x06A41274: eb2b466d  ldp d11, d10, [sp, #0x60]
0x06A41278: ed33456d  ldp d13, d12, [sp, #0x50]
0x06A4127C: ff030391  add sp, sp, #0xc0
0x06A41280: c0035fd6  ret
0x06A41284: 8afe1c97  bl #0x3180cac
0x06A41288: 89fe1c97  bl #0x3180cac
0x06A4128C: 88fe1c97  bl #0x3180cac
0x06A41290: 87fe1c97  bl #0x3180cac
0x06A41294: 14000014  b #0x6a412e4
0x06A41298: 13000014  b #0x6a412e4
0x06A4129C: 12000014  b #0x6a412e4
0x06A412A0: 11000014  b #0x6a412e4
0x06A412A4: 10000014  b #0x6a412e4
0x06A412A8: 0f000014  b #0x6a412e4
0x06A412AC: 0e000014  b #0x6a412e4
0x06A412B0: 0d000014  b #0x6a412e4
0x06A412B4: 0c000014  b #0x6a412e4
0x06A412B8: 0b000014  b #0x6a412e4
0x06A412BC: 0a000014  b #0x6a412e4
0x06A412C0: 09000014  b #0x6a412e4
0x06A412C4: 08000014  b #0x6a412e4
0x06A412C8: 07000014  b #0x6a412e4
0x06A412CC: 06000014  b #0x6a412e4
0x06A412D0: 05000014  b #0x6a412e4
0x06A412D4: 04000014  b #0x6a412e4
0x06A412D8: 03000014  b #0x6a412e4
0x06A412DC: 02000014  b #0x6a412e4
0x06A412E0: 01000014  b #0x6a412e4
0x06A412E4: 3f040071  cmp w1, #1
0x06A412E8: 81010054  b.ne #0x6a41318
0x06A412EC: 89351e94  bl #0x71ce910
0x06A412F0: 130040f9  ldr x19, [x0]
0x06A412F4: f32300f9  str x19, [sp, #0x40]
0x06A412F8: 8a351e94  bl #0x71ce920
0x06A412FC: 93eaffb4  cbz x19, #0x6a4104c
0x06A41300: e8030191  add x8, sp, #0x40
0x06A41304: 00210091  add x0, x8, #8
0x06A41308: adf61a97  bl #0x30fedbc
0x06A4130C: e00313aa  mov x0, x19
0x06A41310: 65fe1c97  bl #0x3180ca4
0x06A41314: 530000b5  cbnz x19, #0x6a4131c
0x06A41318: 90912097  bl #0x3265958
0x06A4131C: e04740f9  ldr x0, [sp, #0x88]
0x06A41320: 081040b9  ldr w8, [x0, #0x10]
0x06A41324: 1f050071  cmp w8, #1
0x06A41328: 60000054  b.eq #0x6a41334
0x06A4132C: 1f0d0031  cmn w8, #3
0x06A41330: 41000054  b.ne #0x6a41338
0x06A41334: 04000094  bl #0x6a41344
0x06A41338: e00313aa  mov x0, x19
0x06A4133C: 5afe1c97  bl #0x3180ca4
0x06A41340: 75200f97  bl #0x2e09514

; RVA 0x6A41344 | private void <>m__Finally1() { }
; bytes=80 sha256=c76661104a7335ed39ce0ea527c904b0f3c10e7ed8b3a90eec9d8bc2f198fd58 status=arm64_complete_bound indexed_start=True
0x06A41344: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A41348: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A4134C: 559700b0  adrp x21, #0x7d2a000
0x06A41350: 746700d0  adrp x20, #0x772f000
0x06A41354: a8f25439  ldrb w8, [x21, #0x53c]
0x06A41358: 94c244f9  ldr x20, [x20, #0x980]
0x06A4135C: f30300aa  mov x19, x0
0x06A41360: c8000037  tbnz w8, #0, #0x6a41378
0x06A41364: 606700d0  adrp x0, #0x772f000
0x06A41368: 00c044f9  ldr x0, [x0, #0x980]
0x06A4136C: abfd1c97  bl #0x3180a18
0x06A41370: 28008052  movz w8, #0x1
0x06A41374: a8f21439  strb w8, [x21, #0x53c]
0x06A41378: 08008012  movn w8, #0
0x06A4137C: 681200b9  str w8, [x19, #0x10]
0x06A41380: 810240f9  ldr x1, [x20]
0x06A41384: 60420191  add x0, x19, #0x50
0x06A41388: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A4138C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A41390: 001e9817  b #0x5048b90

; RVA 0x6A41394 | private int System.Collections.Generic.IEnumerator<System.Int32>.get_Current() { }
; bytes=8 sha256=ca9be5891608b757b7bc8d84905b452237de4af4115e73ad7cd6348b92859bf1 status=arm64_complete_bound indexed_start=True
0x06A41394: 001440b9  ldr w0, [x0, #0x14]
0x06A41398: c0035fd6  ret

; RVA 0x6A4139C | private void System.Collections.IEnumerator.Reset() { }
; bytes=56 sha256=b2d0da25a0980becaa4acf12cfb6d2c42bdc7250d6c6c67e20458f50ced8c193 status=arm64_complete_bound indexed_start=True
0x06A4139C: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x06A413A0: 606000d0  adrp x0, #0x764f000
0x06A413A4: 00d043f9  ldr x0, [x0, #0x7a0]
0x06A413A8: a1fd1c97  bl #0x3180a2c
0x06A413AC: 3dfe1c97  bl #0x3180ca0
0x06A413B0: e1031faa  mov x1, xzr
0x06A413B4: f30300aa  mov x19, x0
0x06A413B8: da5db197  bl #0x5698b20
0x06A413BC: 606700d0  adrp x0, #0x772f000
0x06A413C0: 000045f9  ldr x0, [x0, #0xa00]
0x06A413C4: 9afd1c97  bl #0x3180a2c
0x06A413C8: e10300aa  mov x1, x0
0x06A413CC: e00313aa  mov x0, x19
0x06A413D0: ebfd1c97  bl #0x3180b7c

; RVA 0x6A413D4 | private object System.Collections.IEnumerator.get_Current() { }
; bytes=92 sha256=7a32a9dc089bcd4a8188845306a3bc2f040110084dbab07892b3cecaa8fb4dc5 status=arm64_complete_bound indexed_start=True
0x06A413D4: ffc300d1  sub sp, sp, #0x30
0x06A413D8: fe5701a9  stp x30, x21, [sp, #0x10]
0x06A413DC: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A413E0: 559700b0  adrp x21, #0x7d2a000
0x06A413E4: 746000b0  adrp x20, #0x764e000
0x06A413E8: a8f65439  ldrb w8, [x21, #0x53d]
0x06A413EC: 945a43f9  ldr x20, [x20, #0x6b0]
0x06A413F0: f30300aa  mov x19, x0
0x06A413F4: c8000037  tbnz w8, #0, #0x6a4140c
0x06A413F8: 606000b0  adrp x0, #0x764e000
0x06A413FC: 005843f9  ldr x0, [x0, #0x6b0]
0x06A41400: 86fd1c97  bl #0x3180a18
0x06A41404: 28008052  movz w8, #0x1
0x06A41408: a8f61439  strb w8, [x21, #0x53d]
0x06A4140C: 681640b9  ldr w8, [x19, #0x14]
0x06A41410: 800240f9  ldr x0, [x20]
0x06A41414: e1330091  add x1, sp, #0xc
0x06A41418: e80f00b9  str w8, [sp, #0xc]
0x06A4141C: defd1c97  bl #0x3180b94
0x06A41420: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A41424: fe5741a9  ldp x30, x21, [sp, #0x10]
0x06A41428: ffc30091  add sp, sp, #0x30
0x06A4142C: c0035fd6  ret

; RVA 0x6A41430 | private IEnumerator<int> System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator() { }
; bytes=180 sha256=b2807c7251fbecf65a26b900c8d54406580bc03b0f9000bcec286893283e0b80 status=arm64_complete_bound indexed_start=True
0x06A41430: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A41434: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A41438: 549700b0  adrp x20, #0x7d2a000
0x06A4143C: 88fa5439  ldrb w8, [x20, #0x53e]
0x06A41440: f30300aa  mov x19, x0
0x06A41444: c8000037  tbnz w8, #0, #0x6a4145c
0x06A41448: 606700d0  adrp x0, #0x772f000
0x06A4144C: 00d844f9  ldr x0, [x0, #0x9b0]
0x06A41450: 72fd1c97  bl #0x3180a18
0x06A41454: 28008052  movz w8, #0x1
0x06A41458: 88fa1439  strb w8, [x20, #0x53e]
0x06A4145C: 681240b9  ldr w8, [x19, #0x10]
0x06A41460: 1f090031  cmn w8, #2
0x06A41464: 21010054  b.ne #0x6a41488
0x06A41468: 741a40b9  ldr w20, [x19, #0x18]
0x06A4146C: e0031faa  mov x0, xzr
0x06A41470: 1674b297  bl #0x56de4c8
0x06A41474: 9f02006b  cmp w20, w0
0x06A41478: 81000054  b.ne #0x6a41488
0x06A4147C: 7f1200b9  str wzr, [x19, #0x10]
0x06A41480: f40313aa  mov x20, x19
0x06A41484: 10000014  b #0x6a414c4
0x06A41488: 686700d0  adrp x8, #0x772f000
0x06A4148C: 08d944f9  ldr x8, [x8, #0x9b0]
0x06A41490: 000140f9  ldr x0, [x8]
0x06A41494: 03fe1c97  bl #0x3180ca0
0x06A41498: e1031faa  mov x1, xzr
0x06A4149C: f40300aa  mov x20, x0
0x06A414A0: 5764b297  bl #0x56da5fc
0x06A414A4: e0031faa  mov x0, xzr
0x06A414A8: 9f1200b9  str wzr, [x20, #0x10]
0x06A414AC: 0774b297  bl #0x56de4c8
0x06A414B0: 801a00b9  str w0, [x20, #0x18]
0x06A414B4: 611240f9  ldr x1, [x19, #0x20]
0x06A414B8: e00314aa  mov x0, x20
0x06A414BC: 010c02f8  str x1, [x0, #0x20]!
0x06A414C0: 41fd1c97  bl #0x31809c4
0x06A414C4: 682e40b9  ldr w8, [x19, #0x2c]
0x06A414C8: e00314aa  mov x0, x20
0x06A414CC: 882a00b9  str w8, [x20, #0x28]
0x06A414D0: 603640bd  ldr s0, [x19, #0x34]
0x06A414D4: 803200bd  str s0, [x20, #0x30]
0x06A414D8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A414DC: fe0742f8  ldr x30, [sp], #0x20
0x06A414E0: c0035fd6  ret

; RVA 0x6A414E4 | private IEnumerator System.Collections.IEnumerable.GetEnumerator() { }
; bytes=4 sha256=accdd98ed1adcadda0b0c8b333c988b014f18926d604fbf24d0d043883c2a965 status=arm64_complete_bound indexed_start=True
0x06A414E4: d3ffff17  b #0x6a41430

