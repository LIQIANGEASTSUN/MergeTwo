; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25697 .FreeformMergeBoardLayout.<GetAllEmptyPositions>d__7
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A40244 | public void .ctor(int <>1__state) { }
; bytes=52 sha256=2b907991523bad46d04eb0bb6fef3b21a48be08af87b8bc7c439aece5c5c4028 status=arm64_complete_bound indexed_start=True
0x06A40244: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A40248: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A4024C: f303012a  mov w19, w1
0x06A40250: e1031faa  mov x1, xzr
0x06A40254: f40300aa  mov x20, x0
0x06A40258: e968b297  bl #0x56da5fc
0x06A4025C: e0031faa  mov x0, xzr
0x06A40260: 931200b9  str w19, [x20, #0x10]
0x06A40264: 9978b297  bl #0x56de4c8
0x06A40268: 801a00b9  str w0, [x20, #0x18]
0x06A4026C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A40270: fe0742f8  ldr x30, [sp], #0x20
0x06A40274: c0035fd6  ret

; RVA 0x6A40A60 | private void System.IDisposable.Dispose() { }
; bytes=28 sha256=66af6c3a8306c270cd51d6d0ae964e13a10c551b37b08c9a42859640eccbb8ac status=arm64_complete_bound indexed_start=True
0x06A40A60: 081040b9  ldr w8, [x0, #0x10]
0x06A40A64: 1f050071  cmp w8, #1
0x06A40A68: 60000054  b.eq #0x6a40a74
0x06A40A6C: 1f0d0031  cmn w8, #3
0x06A40A70: 41000054  b.ne #0x6a40a78
0x06A40A74: 9a000014  b #0x6a40cdc
0x06A40A78: c0035fd6  ret

; RVA 0x6A40A7C | private bool MoveNext() { }
; bytes=608 sha256=85ff56e6cb7898d7daab768c683d670154c65198fdcd9c90267d700130fffccd status=arm64_complete_bound indexed_start=True
0x06A40A7C: ff0302d1  sub sp, sp, #0x80
0x06A40A80: fe0305a9  stp x30, x0, [sp, #0x50]
0x06A40A84: f65706a9  stp x22, x21, [sp, #0x60]
0x06A40A88: f44f07a9  stp x20, x19, [sp, #0x70]
0x06A40A8C: 549700d0  adrp x20, #0x7d2a000
0x06A40A90: 88de5439  ldrb w8, [x20, #0x537]
0x06A40A94: f30300aa  mov x19, x0
0x06A40A98: 08030037  tbnz w8, #0, #0x6a40af8
0x06A40A9C: 606700f0  adrp x0, #0x772f000
0x06A40AA0: 00bc44f9  ldr x0, [x0, #0x978]
0x06A40AA4: ddff1c97  bl #0x3180a18
0x06A40AA8: 606700f0  adrp x0, #0x772f000
0x06A40AAC: 00c444f9  ldr x0, [x0, #0x988]
0x06A40AB0: daff1c97  bl #0x3180a18
0x06A40AB4: 606700f0  adrp x0, #0x772f000
0x06A40AB8: 00c844f9  ldr x0, [x0, #0x990]
0x06A40ABC: d7ff1c97  bl #0x3180a18
0x06A40AC0: 606000d0  adrp x0, #0x764e000
0x06A40AC4: 006044f9  ldr x0, [x0, #0x8c0]
0x06A40AC8: d4ff1c97  bl #0x3180a18
0x06A40ACC: 006400b0  adrp x0, #0x76c1000
0x06A40AD0: 005442f9  ldr x0, [x0, #0x4a8]
0x06A40AD4: d1ff1c97  bl #0x3180a18
0x06A40AD8: 606000d0  adrp x0, #0x764e000
0x06A40ADC: 008844f9  ldr x0, [x0, #0x910]
0x06A40AE0: ceff1c97  bl #0x3180a18
0x06A40AE4: 606700f0  adrp x0, #0x772f000
0x06A40AE8: 00cc44f9  ldr x0, [x0, #0x998]
0x06A40AEC: cbff1c97  bl #0x3180a18
0x06A40AF0: 28008052  movz w8, #0x1
0x06A40AF4: 88de1439  strb w8, [x20, #0x537]
0x06A40AF8: e8630191  add x8, sp, #0x58
0x06A40AFC: e82700f9  str x8, [sp, #0x48]
0x06A40B00: 681240b9  ldr w8, [x19, #0x10]
0x06A40B04: 1f050071  cmp w8, #1
0x06A40B08: 80050054  b.eq #0x6a40bb8
0x06A40B0C: a80b0035  cbnz w8, #0x6a40c80
0x06A40B10: 08008012  movn w8, #0
0x06A40B14: 681200b9  str w8, [x19, #0x10]
0x06A40B18: 686000d0  adrp x8, #0x764e000
0x06A40B1C: 751a40f9  ldr x21, [x19, #0x30]
0x06A40B20: 741240f9  ldr x20, [x19, #0x20]
0x06A40B24: 088944f9  ldr x8, [x8, #0x910]
0x06A40B28: 000140f9  ldr x0, [x8]
0x06A40B2C: 5d001d97  bl #0x3180ca0
0x06A40B30: 086400b0  adrp x8, #0x76c1000
0x06A40B34: 085542f9  ldr x8, [x8, #0x4a8]
0x06A40B38: f30300aa  mov x19, x0
0x06A40B3C: 020140f9  ldr x2, [x8]
0x06A40B40: e10314aa  mov x1, x20
0x06A40B44: 1ddaa197  bl #0x52b73b8
0x06A40B48: e02f40f9  ldr x0, [sp, #0x58]
0x06A40B4C: 138c03f8  str x19, [x0, #0x38]!
0x06A40B50: e10313aa  mov x1, x19
0x06A40B54: 9cff1c97  bl #0x31809c4
0x06A40B58: f50600b4  cbz x21, #0x6a40c34
0x06A40B5C: a01a40f9  ldr x0, [x21, #0x30]
0x06A40B60: c00600b4  cbz x0, #0x6a40c38
0x06A40B64: 686700f0  adrp x8, #0x772f000
0x06A40B68: 08bd44f9  ldr x8, [x8, #0x978]
0x06A40B6C: 010140f9  ldr x1, [x8]
0x06A40B70: 2ad38f97  bl #0x4e35818
0x06A40B74: 400600b4  cbz x0, #0x6a40c3c
0x06A40B78: 686700f0  adrp x8, #0x772f000
0x06A40B7C: 08cd44f9  ldr x8, [x8, #0x998]
0x06A40B80: 010140f9  ldr x1, [x8]
0x06A40B84: e8230091  add x8, sp, #8
0x06A40B88: 60c7a597  bl #0x53b2908
0x06A40B8C: e92f40f9  ldr x9, [sp, #0x58]
0x06A40B90: e083c03c  ldur q0, [sp, #8]
0x06A40B94: e80f40f9  ldr x8, [sp, #0x18]
0x06A40B98: 20010191  add x0, x9, #0x40
0x06A40B9C: e00b803d  str q0, [sp, #0x20]
0x06A40BA0: e81b00f9  str x8, [sp, #0x30]
0x06A40BA4: 282900f9  str x8, [x9, #0x50]
0x06A40BA8: 2011803d  str q0, [x9, #0x40]
0x06A40BAC: e1031faa  mov x1, xzr
0x06A40BB0: 85ff1c97  bl #0x31809c4
0x06A40BB4: f32f40f9  ldr x19, [sp, #0x58]
0x06A40BB8: 48008012  movn w8, #0x2
0x06A40BBC: 681200b9  str w8, [x19, #0x10]
0x06A40BC0: 756700f0  adrp x21, #0x772f000
0x06A40BC4: 766000d0  adrp x22, #0x764e000
0x06A40BC8: b5c644f9  ldr x21, [x21, #0x988]
0x06A40BCC: d66244f9  ldr x22, [x22, #0x8c0]
0x06A40BD0: a10240f9  ldr x1, [x21]
0x06A40BD4: 60020191  add x0, x19, #0x40
0x06A40BD8: ef1f9897  bl #0x5048b94
0x06A40BDC: e803002a  mov w8, w0
0x06A40BE0: e02f40f9  ldr x0, [sp, #0x58]
0x06A40BE4: a8010036  tbz w8, #0, #0x6a40c18
0x06A40BE8: 081c40f9  ldr x8, [x0, #0x38]
0x06A40BEC: 280200b4  cbz x8, #0x6a40c30
0x06A40BF0: 145040b9  ldr w20, [x0, #0x50]
0x06A40BF4: c20240f9  ldr x2, [x22]
0x06A40BF8: e00308aa  mov x0, x8
0x06A40BFC: e103142a  mov w1, w20
0x06A40C00: 6fdba197  bl #0x52b79bc
0x06A40C04: f32f40f9  ldr x19, [sp, #0x58]
0x06A40C08: 40fe0737  tbnz w0, #0, #0x6a40bd0
0x06A40C0C: 20008052  movz w0, #0x1
0x06A40C10: 60520229  stp w0, w20, [x19, #0x10]
0x06A40C14: 1c000014  b #0x6a40c84
0x06A40C18: 31000094  bl #0x6a40cdc
0x06A40C1C: e82f40f9  ldr x8, [sp, #0x58]
0x06A40C20: e0031f2a  mov w0, wzr
0x06A40C24: 1f7d04a9  stp xzr, xzr, [x8, #0x40]
0x06A40C28: 1f2900f9  str xzr, [x8, #0x50]
0x06A40C2C: 16000014  b #0x6a40c84
0x06A40C30: 1f001d97  bl #0x3180cac
0x06A40C34: 1e001d97  bl #0x3180cac
0x06A40C38: 1d001d97  bl #0x3180cac
0x06A40C3C: 1c001d97  bl #0x3180cac
0x06A40C40: 09000014  b #0x6a40c64
0x06A40C44: 08000014  b #0x6a40c64
0x06A40C48: 07000014  b #0x6a40c64
0x06A40C4C: 06000014  b #0x6a40c64
0x06A40C50: 05000014  b #0x6a40c64
0x06A40C54: 04000014  b #0x6a40c64
0x06A40C58: 03000014  b #0x6a40c64
0x06A40C5C: 02000014  b #0x6a40c64
0x06A40C60: 01000014  b #0x6a40c64
0x06A40C64: 3f040071  cmp w1, #1
0x06A40C68: 41020054  b.ne #0x6a40cb0
0x06A40C6C: 29371e94  bl #0x71ce910
0x06A40C70: 130040f9  ldr x19, [x0]
0x06A40C74: f32300f9  str x19, [sp, #0x40]
0x06A40C78: 2a371e94  bl #0x71ce920
0x06A40C7C: f30000b5  cbnz x19, #0x6a40c98
0x06A40C80: e0031f2a  mov w0, wzr
0x06A40C84: f44f47a9  ldp x20, x19, [sp, #0x70]
0x06A40C88: f65746a9  ldp x22, x21, [sp, #0x60]
0x06A40C8C: fe2b40f9  ldr x30, [sp, #0x50]
0x06A40C90: ff030291  add sp, sp, #0x80
0x06A40C94: c0035fd6  ret
0x06A40C98: e8030191  add x8, sp, #0x40
0x06A40C9C: 00210091  add x0, x8, #8
0x06A40CA0: 3ff81a97  bl #0x30fed9c
0x06A40CA4: e00313aa  mov x0, x19
0x06A40CA8: ffff1c97  bl #0x3180ca4
0x06A40CAC: 530000b5  cbnz x19, #0x6a40cb4
0x06A40CB0: 2a932097  bl #0x3265958
0x06A40CB4: e02f40f9  ldr x0, [sp, #0x58]
0x06A40CB8: 081040b9  ldr w8, [x0, #0x10]
0x06A40CBC: 1f050071  cmp w8, #1
0x06A40CC0: 60000054  b.eq #0x6a40ccc
0x06A40CC4: 1f0d0031  cmn w8, #3
0x06A40CC8: 41000054  b.ne #0x6a40cd0
0x06A40CCC: 04000094  bl #0x6a40cdc
0x06A40CD0: e00313aa  mov x0, x19
0x06A40CD4: f4ff1c97  bl #0x3180ca4
0x06A40CD8: 0f220f97  bl #0x2e09514

; RVA 0x6A40CDC | private void <>m__Finally1() { }
; bytes=80 sha256=3fcb23dedc12bd1154ef8677df3c354b9056056ccb7eaf743b00050ba73a1f59 status=arm64_complete_bound indexed_start=True
0x06A40CDC: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A40CE0: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A40CE4: 559700d0  adrp x21, #0x7d2a000
0x06A40CE8: 746700f0  adrp x20, #0x772f000
0x06A40CEC: a8e25439  ldrb w8, [x21, #0x538]
0x06A40CF0: 94c244f9  ldr x20, [x20, #0x980]
0x06A40CF4: f30300aa  mov x19, x0
0x06A40CF8: c8000037  tbnz w8, #0, #0x6a40d10
0x06A40CFC: 606700f0  adrp x0, #0x772f000
0x06A40D00: 00c044f9  ldr x0, [x0, #0x980]
0x06A40D04: 45ff1c97  bl #0x3180a18
0x06A40D08: 28008052  movz w8, #0x1
0x06A40D0C: a8e21439  strb w8, [x21, #0x538]
0x06A40D10: 08008012  movn w8, #0
0x06A40D14: 681200b9  str w8, [x19, #0x10]
0x06A40D18: 810240f9  ldr x1, [x20]
0x06A40D1C: 60020191  add x0, x19, #0x40
0x06A40D20: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A40D24: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A40D28: 9a1f9817  b #0x5048b90

; RVA 0x6A40D2C | private int System.Collections.Generic.IEnumerator<System.Int32>.get_Current() { }
; bytes=8 sha256=ca9be5891608b757b7bc8d84905b452237de4af4115e73ad7cd6348b92859bf1 status=arm64_complete_bound indexed_start=True
0x06A40D2C: 001440b9  ldr w0, [x0, #0x14]
0x06A40D30: c0035fd6  ret

; RVA 0x6A40D34 | private void System.Collections.IEnumerator.Reset() { }
; bytes=56 sha256=467900ed92b1cff79cb37f32db50ba47ea9c21d6eca5087234f5f5642de869ef status=arm64_complete_bound indexed_start=True
0x06A40D34: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x06A40D38: 606000f0  adrp x0, #0x764f000
0x06A40D3C: 00d043f9  ldr x0, [x0, #0x7a0]
0x06A40D40: 3bff1c97  bl #0x3180a2c
0x06A40D44: d7ff1c97  bl #0x3180ca0
0x06A40D48: e1031faa  mov x1, xzr
0x06A40D4C: f30300aa  mov x19, x0
0x06A40D50: 745fb197  bl #0x5698b20
0x06A40D54: 606700f0  adrp x0, #0x772f000
0x06A40D58: 00f444f9  ldr x0, [x0, #0x9e8]
0x06A40D5C: 34ff1c97  bl #0x3180a2c
0x06A40D60: e10300aa  mov x1, x0
0x06A40D64: e00313aa  mov x0, x19
0x06A40D68: 85ff1c97  bl #0x3180b7c

; RVA 0x6A40D6C | private object System.Collections.IEnumerator.get_Current() { }
; bytes=92 sha256=dae1e99118f4b12686442f9e43ba1b637e63c175fd1e7ede54e38cd74e086ce4 status=arm64_complete_bound indexed_start=True
0x06A40D6C: ffc300d1  sub sp, sp, #0x30
0x06A40D70: fe5701a9  stp x30, x21, [sp, #0x10]
0x06A40D74: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A40D78: 559700d0  adrp x21, #0x7d2a000
0x06A40D7C: 746000d0  adrp x20, #0x764e000
0x06A40D80: a8e65439  ldrb w8, [x21, #0x539]
0x06A40D84: 945a43f9  ldr x20, [x20, #0x6b0]
0x06A40D88: f30300aa  mov x19, x0
0x06A40D8C: c8000037  tbnz w8, #0, #0x6a40da4
0x06A40D90: 606000d0  adrp x0, #0x764e000
0x06A40D94: 005843f9  ldr x0, [x0, #0x6b0]
0x06A40D98: 20ff1c97  bl #0x3180a18
0x06A40D9C: 28008052  movz w8, #0x1
0x06A40DA0: a8e61439  strb w8, [x21, #0x539]
0x06A40DA4: 681640b9  ldr w8, [x19, #0x14]
0x06A40DA8: 800240f9  ldr x0, [x20]
0x06A40DAC: e1330091  add x1, sp, #0xc
0x06A40DB0: e80f00b9  str w8, [sp, #0xc]
0x06A40DB4: 78ff1c97  bl #0x3180b94
0x06A40DB8: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A40DBC: fe5741a9  ldp x30, x21, [sp, #0x10]
0x06A40DC0: ffc30091  add sp, sp, #0x30
0x06A40DC4: c0035fd6  ret

; RVA 0x6A40DC8 | private IEnumerator<int> System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator() { }
; bytes=180 sha256=5866634b389bef0bf9a310cd6abb77661980aa7951edad6738ad9cd3d1f75254 status=arm64_complete_bound indexed_start=True
0x06A40DC8: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A40DCC: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A40DD0: 549700d0  adrp x20, #0x7d2a000
0x06A40DD4: 88ea5439  ldrb w8, [x20, #0x53a]
0x06A40DD8: f30300aa  mov x19, x0
0x06A40DDC: c8000037  tbnz w8, #0, #0x6a40df4
0x06A40DE0: 606700f0  adrp x0, #0x772f000
0x06A40DE4: 00d044f9  ldr x0, [x0, #0x9a0]
0x06A40DE8: 0cff1c97  bl #0x3180a18
0x06A40DEC: 28008052  movz w8, #0x1
0x06A40DF0: 88ea1439  strb w8, [x20, #0x53a]
0x06A40DF4: 681240b9  ldr w8, [x19, #0x10]
0x06A40DF8: 1f090031  cmn w8, #2
0x06A40DFC: 21010054  b.ne #0x6a40e20
0x06A40E00: 741a40b9  ldr w20, [x19, #0x18]
0x06A40E04: e0031faa  mov x0, xzr
0x06A40E08: b075b297  bl #0x56de4c8
0x06A40E0C: 9f02006b  cmp w20, w0
0x06A40E10: 81000054  b.ne #0x6a40e20
0x06A40E14: 7f1200b9  str wzr, [x19, #0x10]
0x06A40E18: f40313aa  mov x20, x19
0x06A40E1C: 10000014  b #0x6a40e5c
0x06A40E20: 686700f0  adrp x8, #0x772f000
0x06A40E24: 08d144f9  ldr x8, [x8, #0x9a0]
0x06A40E28: 000140f9  ldr x0, [x8]
0x06A40E2C: 9dff1c97  bl #0x3180ca0
0x06A40E30: e1031faa  mov x1, xzr
0x06A40E34: f40300aa  mov x20, x0
0x06A40E38: f165b297  bl #0x56da5fc
0x06A40E3C: e0031faa  mov x0, xzr
0x06A40E40: 9f1200b9  str wzr, [x20, #0x10]
0x06A40E44: a175b297  bl #0x56de4c8
0x06A40E48: 801a00b9  str w0, [x20, #0x18]
0x06A40E4C: 611a40f9  ldr x1, [x19, #0x30]
0x06A40E50: e00314aa  mov x0, x20
0x06A40E54: 010c03f8  str x1, [x0, #0x30]!
0x06A40E58: dbfe1c97  bl #0x31809c4
0x06A40E5C: 611640f9  ldr x1, [x19, #0x28]
0x06A40E60: e00314aa  mov x0, x20
0x06A40E64: 010c02f8  str x1, [x0, #0x20]!
0x06A40E68: d7fe1c97  bl #0x31809c4
0x06A40E6C: e00314aa  mov x0, x20
0x06A40E70: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A40E74: fe0742f8  ldr x30, [sp], #0x20
0x06A40E78: c0035fd6  ret

; RVA 0x6A40E7C | private IEnumerator System.Collections.IEnumerable.GetEnumerator() { }
; bytes=4 sha256=accdd98ed1adcadda0b0c8b333c988b014f18926d604fbf24d0d043883c2a965 status=arm64_complete_bound indexed_start=True
0x06A40E7C: d3ffff17  b #0x6a40dc8

