; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 7458 .ActiveOrdersBubbleDropProbabilityModifier.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x657CC2C | private static void .cctor() { }
; bytes=104 sha256=ad12b064f78a371e5707a4d6943fce3d8398ea44c0c0daac3976e7f83c375798 status=arm64_complete_bound indexed_start=True
0x0657CC2C: fe0f1ef8  str x30, [sp, #-0x20]!
0x0657CC30: f44f01a9  stp x20, x19, [sp, #0x10]
0x0657CC34: 53bd00f0  adrp x19, #0x7d27000
0x0657CC38: 348c0090  adrp x20, #0x7700000
0x0657CC3C: 68465939  ldrb w8, [x19, #0x651]
0x0657CC40: 94a242f9  ldr x20, [x20, #0x540]
0x0657CC44: c8000037  tbnz w8, #0, #0x657cc5c
0x0657CC48: 208c0090  adrp x0, #0x7700000
0x0657CC4C: 00a042f9  ldr x0, [x0, #0x540]
0x0657CC50: 720f3097  bl #0x3180a18
0x0657CC54: 28008052  movz w8, #0x1
0x0657CC58: 68461939  strb w8, [x19, #0x651]
0x0657CC5C: 800240f9  ldr x0, [x20]
0x0657CC60: 10103097  bl #0x3180ca0
0x0657CC64: e1031faa  mov x1, xzr
0x0657CC68: f30300aa  mov x19, x0
0x0657CC6C: 6476c597  bl #0x56da5fc
0x0657CC70: 880240f9  ldr x8, [x20]
0x0657CC74: e10313aa  mov x1, x19
0x0657CC78: 085d40f9  ldr x8, [x8, #0xb8]
0x0657CC7C: 130100f9  str x19, [x8]
0x0657CC80: 880240f9  ldr x8, [x20]
0x0657CC84: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0657CC88: 005d40f9  ldr x0, [x8, #0xb8]
0x0657CC8C: fe0742f8  ldr x30, [sp], #0x20
0x0657CC90: 4d0f3017  b #0x31809c4

; RVA 0x657CC94 | public void .ctor() { }
; bytes=8 sha256=2d47fe5b12d1a1a71e9cd1525245dafae99f24288247016f789a7401712052ce status=arm64_complete_bound indexed_start=True
0x0657CC94: e1031faa  mov x1, xzr
0x0657CC98: 5976c517  b #0x56da5fc

; RVA 0x657CC9C | internal bool <get_Objectives>b__13_0(SingleTaskOrderProgress orderProgress) { }
; bytes=188 sha256=cae4e69d39e72fcfcb300bd007968e95cae0ae4e552a2febfe000a53a4a0c382 status=arm64_complete_bound indexed_start=True
0x0657CC9C: fe0f1ef8  str x30, [sp, #-0x20]!
0x0657CCA0: f44f01a9  stp x20, x19, [sp, #0x10]
0x0657CCA4: 54bd00f0  adrp x20, #0x7d27000
0x0657CCA8: 884a5939  ldrb w8, [x20, #0x652]
0x0657CCAC: f30301aa  mov x19, x1
0x0657CCB0: c8000037  tbnz w8, #0, #0x657ccc8
0x0657CCB4: 808a0090  adrp x0, #0x76cc000
0x0657CCB8: 00d042f9  ldr x0, [x0, #0x5a0]
0x0657CCBC: 570f3097  bl #0x3180a18
0x0657CCC0: 28008052  movz w8, #0x1
0x0657CCC4: 884a1939  strb w8, [x20, #0x652]
0x0657CCC8: 730400b4  cbz x19, #0x657cd54
0x0657CCCC: e00313aa  mov x0, x19
0x0657CCD0: e1031faa  mov x1, xzr
0x0657CCD4: b2e1ee97  bl #0x613539c
0x0657CCD8: e00300b4  cbz x0, #0x657cd54
0x0657CCDC: 8a8a0090  adrp x10, #0x76cc000
0x0657CCE0: 080040f9  ldr x8, [x0]
0x0657CCE4: 4ad142f9  ldr x10, [x10, #0x5a0]
0x0657CCE8: f30300aa  mov x19, x0
0x0657CCEC: 095d4279  ldrh w9, [x8, #0x12e]
0x0657CCF0: 410140f9  ldr x1, [x10]
0x0657CCF4: 290100b4  cbz x9, #0x657cd18
0x0657CCF8: 0a5940f9  ldr x10, [x8, #0xb0]
0x0657CCFC: 4a210091  add x10, x10, #8
0x0657CD00: 4b815ff8  ldur x11, [x10, #-8]
0x0657CD04: 7f0101eb  cmp x11, x1
0x0657CD08: 00010054  b.eq #0x657cd28
0x0657CD0C: 290500f1  subs x9, x9, #1
0x0657CD10: 4a410091  add x10, x10, #0x10
0x0657CD14: 61ffff54  b.ne #0x657cd00
0x0657CD18: e00313aa  mov x0, x19
0x0657CD1C: e2031f2a  mov w2, wzr
0x0657CD20: 7c672f97  bl #0x3156b10
0x0657CD24: 04000014  b #0x657cd34
0x0657CD28: 490180b9  ldrsw x9, [x10]
0x0657CD2C: 0811098b  add x8, x8, x9, lsl #4
0x0657CD30: 00e10491  add x0, x8, #0x138
0x0657CD34: 080440a9  ldp x8, x1, [x0]
0x0657CD38: e00313aa  mov x0, x19
0x0657CD3C: 00013fd6  blr x8
0x0657CD40: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0657CD44: 1f000071  cmp w0, #0
0x0657CD48: e0179f1a  cset w0, eq
0x0657CD4C: fe0742f8  ldr x30, [sp], #0x20
0x0657CD50: c0035fd6  ret
0x0657CD54: d60f3097  bl #0x3180cac

; RVA 0x657CD58 | internal <>f__AnonymousType4<string, List<IMergeGraphItem>> <get_Objectives>b__13_1(SingleTaskOrderProgress orderProgress) { }
; bytes=548 sha256=18f565973d4a3fb7fb24e6a040a14a0202caf39561d014f4a5e930f878f00e3e status=arm64_complete_bound indexed_start=True
0x0657CD58: fe6fbba9  stp x30, x27, [sp, #-0x50]!
0x0657CD5C: fa6701a9  stp x26, x25, [sp, #0x10]
0x0657CD60: f85f02a9  stp x24, x23, [sp, #0x20]
0x0657CD64: f65703a9  stp x22, x21, [sp, #0x30]
0x0657CD68: f44f04a9  stp x20, x19, [sp, #0x40]
0x0657CD6C: 53bd00f0  adrp x19, #0x7d27000
0x0657CD70: 684e5939  ldrb w8, [x19, #0x653]
0x0657CD74: f40301aa  mov x20, x1
0x0657CD78: 68030037  tbnz w8, #0, #0x657cde4
0x0657CD7C: 208c0090  adrp x0, #0x7700000
0x0657CD80: 00fc42f9  ldr x0, [x0, #0x5f8]
0x0657CD84: 250f3097  bl #0x3180a18
0x0657CD88: 20880090  adrp x0, #0x7680000
0x0657CD8C: 001c40f9  ldr x0, [x0, #0x38]
0x0657CD90: 220f3097  bl #0x3180a18
0x0657CD94: 208c0090  adrp x0, #0x7700000
0x0657CD98: 000043f9  ldr x0, [x0, #0x600]
0x0657CD9C: 1f0f3097  bl #0x3180a18
0x0657CDA0: 808a0090  adrp x0, #0x76cc000
0x0657CDA4: 00d042f9  ldr x0, [x0, #0x5a0]
0x0657CDA8: 1c0f3097  bl #0x3180a18
0x0657CDAC: 208c0090  adrp x0, #0x7700000
0x0657CDB0: 000443f9  ldr x0, [x0, #0x608]
0x0657CDB4: 190f3097  bl #0x3180a18
0x0657CDB8: 208c0090  adrp x0, #0x7700000
0x0657CDBC: 00a042f9  ldr x0, [x0, #0x540]
0x0657CDC0: 160f3097  bl #0x3180a18
0x0657CDC4: 208c0090  adrp x0, #0x7700000
0x0657CDC8: 000843f9  ldr x0, [x0, #0x610]
0x0657CDCC: 130f3097  bl #0x3180a18
0x0657CDD0: 208c0090  adrp x0, #0x7700000
0x0657CDD4: 000c43f9  ldr x0, [x0, #0x618]
0x0657CDD8: 100f3097  bl #0x3180a18
0x0657CDDC: 28008052  movz w8, #0x1
0x0657CDE0: 684e1939  strb w8, [x19, #0x653]
0x0657CDE4: b40c00b4  cbz x20, #0x657cf78
0x0657CDE8: 884a40f9  ldr x8, [x20, #0x90]
0x0657CDEC: 680000b4  cbz x8, #0x657cdf8
0x0657CDF0: 132940f9  ldr x19, [x8, #0x50]
0x0657CDF4: 02000014  b #0x657cdfc
0x0657CDF8: f3031faa  mov x19, xzr
0x0657CDFC: e00314aa  mov x0, x20
0x0657CE00: e1031faa  mov x1, xzr
0x0657CE04: 66e1ee97  bl #0x613539c
0x0657CE08: 800b00b4  cbz x0, #0x657cf78
0x0657CE0C: 8a8a0090  adrp x10, #0x76cc000
0x0657CE10: 080040f9  ldr x8, [x0]
0x0657CE14: 4ad142f9  ldr x10, [x10, #0x5a0]
0x0657CE18: 378c0090  adrp x23, #0x7700000
0x0657CE1C: f40300aa  mov x20, x0
0x0657CE20: 095d4279  ldrh w9, [x8, #0x12e]
0x0657CE24: 410140f9  ldr x1, [x10]
0x0657CE28: f7a242f9  ldr x23, [x23, #0x540]
0x0657CE2C: 290100b4  cbz x9, #0x657ce50
0x0657CE30: 0a5940f9  ldr x10, [x8, #0xb0]
0x0657CE34: 4a210091  add x10, x10, #8
0x0657CE38: 4b815ff8  ldur x11, [x10, #-8]
0x0657CE3C: 7f0101eb  cmp x11, x1
0x0657CE40: 00010054  b.eq #0x657ce60
0x0657CE44: 290500f1  subs x9, x9, #1
0x0657CE48: 4a410091  add x10, x10, #0x10
0x0657CE4C: 61ffff54  b.ne #0x657ce38
0x0657CE50: 62008052  movz w2, #0x3
0x0657CE54: e00314aa  mov x0, x20
0x0657CE58: 2e672f97  bl #0x3156b10
0x0657CE5C: 05000014  b #0x657ce70
0x0657CE60: 490140b9  ldr w9, [x10]
0x0657CE64: 290d0011  add w9, w9, #3
0x0657CE68: 08d1298b  add x8, x8, w9, sxtw #4
0x0657CE6C: 00e10491  add x0, x8, #0x138
0x0657CE70: 080440a9  ldp x8, x1, [x0]
0x0657CE74: e00314aa  mov x0, x20
0x0657CE78: 00013fd6  blr x8
0x0657CE7C: e80240f9  ldr x8, [x23]
0x0657CE80: f40300aa  mov x20, x0
0x0657CE84: 09e140b9  ldr w9, [x8, #0xe0]
0x0657CE88: 89000035  cbnz w9, #0x657ce98
0x0657CE8C: e00308aa  mov x0, x8
0x0657CE90: 3f0f3097  bl #0x3180b8c
0x0657CE94: e80240f9  ldr x8, [x23]
0x0657CE98: 095d40f9  ldr x9, [x8, #0xb8]
0x0657CE9C: 3b8c0090  adrp x27, #0x7700000
0x0657CEA0: 3a880090  adrp x26, #0x7680000
0x0657CEA4: 398c0090  adrp x25, #0x7700000
0x0657CEA8: 388c0090  adrp x24, #0x7700000
0x0657CEAC: 350940f9  ldr x21, [x9, #0x10]
0x0657CEB0: 7bff42f9  ldr x27, [x27, #0x5f8]
0x0657CEB4: 5a1f40f9  ldr x26, [x26, #0x38]
0x0657CEB8: 390f43f9  ldr x25, [x25, #0x618]
0x0657CEBC: 180b43f9  ldr x24, [x24, #0x610]
0x0657CEC0: 150300b5  cbnz x21, #0x657cf20
0x0657CEC4: 09e140b9  ldr w9, [x8, #0xe0]
0x0657CEC8: 89000035  cbnz w9, #0x657ced8
0x0657CECC: e00308aa  mov x0, x8
0x0657CED0: 2f0f3097  bl #0x3180b8c
0x0657CED4: e80240f9  ldr x8, [x23]
0x0657CED8: 298c0090  adrp x9, #0x7700000
0x0657CEDC: 085d40f9  ldr x8, [x8, #0xb8]
0x0657CEE0: 290143f9  ldr x9, [x9, #0x600]
0x0657CEE4: 160140f9  ldr x22, [x8]
0x0657CEE8: 200140f9  ldr x0, [x9]
0x0657CEEC: 6d0f3097  bl #0x3180ca0
0x0657CEF0: 288c0090  adrp x8, #0x7700000
0x0657CEF4: 080543f9  ldr x8, [x8, #0x608]
0x0657CEF8: e10316aa  mov x1, x22
0x0657CEFC: e3031faa  mov x3, xzr
0x0657CF00: f50300aa  mov x21, x0
0x0657CF04: 020140f9  ldr x2, [x8]
0x0657CF08: ac66b397  bl #0x52569b8
0x0657CF0C: e80240f9  ldr x8, [x23]
0x0657CF10: e10315aa  mov x1, x21
0x0657CF14: 005d40f9  ldr x0, [x8, #0xb8]
0x0657CF18: 150c01f8  str x21, [x0, #0x10]!
0x0657CF1C: aa0e3097  bl #0x31809c4
0x0657CF20: 620340f9  ldr x2, [x27]
0x0657CF24: e00314aa  mov x0, x20
0x0657CF28: e10315aa  mov x1, x21
0x0657CF2C: da4e5b97  bl #0x3c50a94
0x0657CF30: 410340f9  ldr x1, [x26]
0x0657CF34: 278c5b97  bl #0x3c5ffd0
0x0657CF38: 280340f9  ldr x8, [x25]
0x0657CF3C: f40300aa  mov x20, x0
0x0657CF40: e00308aa  mov x0, x8
0x0657CF44: 570f3097  bl #0x3180ca0
0x0657CF48: 030340f9  ldr x3, [x24]
0x0657CF4C: e10313aa  mov x1, x19
0x0657CF50: e20314aa  mov x2, x20
0x0657CF54: f50300aa  mov x21, x0
0x0657CF58: d72f9c97  bl #0x4c88eb4
0x0657CF5C: e00315aa  mov x0, x21
0x0657CF60: f44f44a9  ldp x20, x19, [sp, #0x40]
0x0657CF64: f65743a9  ldp x22, x21, [sp, #0x30]
0x0657CF68: f85f42a9  ldp x24, x23, [sp, #0x20]
0x0657CF6C: fa6741a9  ldp x26, x25, [sp, #0x10]
0x0657CF70: fe6fc5a8  ldp x30, x27, [sp], #0x50
0x0657CF74: c0035fd6  ret
0x0657CF78: 4d0f3097  bl #0x3180cac

; RVA 0x657CF7C | internal IMergeGraphItem <get_Objectives>b__13_3(ItemMultiple itemMultiple) { }
; bytes=200 sha256=f4310ddbf44cdd49345360076c85b36c8cee99b42f4959d682deed8b04852bab status=arm64_complete_bound indexed_start=True
0x0657CF7C: fe0f1ef8  str x30, [sp, #-0x20]!
0x0657CF80: f44f01a9  stp x20, x19, [sp, #0x10]
0x0657CF84: 54bd00f0  adrp x20, #0x7d27000
0x0657CF88: 88525939  ldrb w8, [x20, #0x654]
0x0657CF8C: f30301aa  mov x19, x1
0x0657CF90: 28010037  tbnz w8, #0, #0x657cfb4
0x0657CF94: 008800d0  adrp x0, #0x767e000
0x0657CF98: 00a442f9  ldr x0, [x0, #0x548]
0x0657CF9C: 9f0e3097  bl #0x3180a18
0x0657CFA0: e08700d0  adrp x0, #0x767a000
0x0657CFA4: 00f443f9  ldr x0, [x0, #0x7e8]
0x0657CFA8: 9c0e3097  bl #0x3180a18
0x0657CFAC: 28008052  movz w8, #0x1
0x0657CFB0: 88521939  strb w8, [x20, #0x654]
0x0657CFB4: 730400b4  cbz x19, #0x657d040
0x0657CFB8: e88700d0  adrp x8, #0x767a000
0x0657CFBC: 08f543f9  ldr x8, [x8, #0x7e8]
0x0657CFC0: e00313aa  mov x0, x19
0x0657CFC4: 010140f9  ldr x1, [x8]
0x0657CFC8: 9454b897  bl #0x5392218
0x0657CFCC: a00300b4  cbz x0, #0x657d040
0x0657CFD0: 0a8800d0  adrp x10, #0x767e000
0x0657CFD4: 080040f9  ldr x8, [x0]
0x0657CFD8: 4aa542f9  ldr x10, [x10, #0x548]
0x0657CFDC: f30300aa  mov x19, x0
0x0657CFE0: 095d4279  ldrh w9, [x8, #0x12e]
0x0657CFE4: 410140f9  ldr x1, [x10]
0x0657CFE8: 290100b4  cbz x9, #0x657d00c
0x0657CFEC: 0a5940f9  ldr x10, [x8, #0xb0]
0x0657CFF0: 4a210091  add x10, x10, #8
0x0657CFF4: 4b815ff8  ldur x11, [x10, #-8]
0x0657CFF8: 7f0101eb  cmp x11, x1
0x0657CFFC: 00010054  b.eq #0x657d01c
0x0657D000: 290500f1  subs x9, x9, #1
0x0657D004: 4a410091  add x10, x10, #0x10
0x0657D008: 61ffff54  b.ne #0x657cff4
0x0657D00C: 62038052  movz w2, #0x1b
0x0657D010: e00313aa  mov x0, x19
0x0657D014: bf662f97  bl #0x3156b10
0x0657D018: 05000014  b #0x657d02c
0x0657D01C: 490140b9  ldr w9, [x10]
0x0657D020: 296d0011  add w9, w9, #0x1b
0x0657D024: 08d1298b  add x8, x8, w9, sxtw #4
0x0657D028: 00e10491  add x0, x8, #0x138
0x0657D02C: 020440a9  ldp x2, x1, [x0]
0x0657D030: e00313aa  mov x0, x19
0x0657D034: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0657D038: fe0742f8  ldr x30, [sp], #0x20
0x0657D03C: 40001fd6  br x2
0x0657D040: 1b0f3097  bl #0x3180cac

; RVA 0x657D044 | internal IEnumerable<OrderData> <get_Objectives>b__13_2(<>f__AnonymousType4<string, List<IMergeGraphItem>> obj) { }
; bytes=244 sha256=ef379c0eec3780805f3bc2fb896eea6f460a52b026f61950836c2441ab6f7ce6 status=arm64_complete_bound indexed_start=True
0x0657D044: fe0f1df8  str x30, [sp, #-0x30]!
0x0657D048: f65701a9  stp x22, x21, [sp, #0x10]
0x0657D04C: f44f02a9  stp x20, x19, [sp, #0x20]
0x0657D050: 54bd00d0  adrp x20, #0x7d27000
0x0657D054: 158c00f0  adrp x21, #0x7700000
0x0657D058: 88565939  ldrb w8, [x20, #0x655]
0x0657D05C: b51243f9  ldr x21, [x21, #0x620]
0x0657D060: f30301aa  mov x19, x1
0x0657D064: 48020037  tbnz w8, #0, #0x657d0ac
0x0657D068: 008c00f0  adrp x0, #0x7700000
0x0657D06C: 001443f9  ldr x0, [x0, #0x628]
0x0657D070: 6a0e3097  bl #0x3180a18
0x0657D074: 008c00f0  adrp x0, #0x7700000
0x0657D078: 001843f9  ldr x0, [x0, #0x630]
0x0657D07C: 670e3097  bl #0x3180a18
0x0657D080: 008c00f0  adrp x0, #0x7700000
0x0657D084: 001c43f9  ldr x0, [x0, #0x638]
0x0657D088: 640e3097  bl #0x3180a18
0x0657D08C: 008c00f0  adrp x0, #0x7700000
0x0657D090: 001043f9  ldr x0, [x0, #0x620]
0x0657D094: 610e3097  bl #0x3180a18
0x0657D098: 008c00f0  adrp x0, #0x7700000
0x0657D09C: 002043f9  ldr x0, [x0, #0x640]
0x0657D0A0: 5e0e3097  bl #0x3180a18
0x0657D0A4: 28008052  movz w8, #0x1
0x0657D0A8: 88561939  strb w8, [x20, #0x655]
0x0657D0AC: a00240f9  ldr x0, [x21]
0x0657D0B0: fc0e3097  bl #0x3180ca0
0x0657D0B4: e1031faa  mov x1, xzr
0x0657D0B8: f40300aa  mov x20, x0
0x0657D0BC: 5075c597  bl #0x56da5fc
0x0657D0C0: b40300b4  cbz x20, #0x657d134
0x0657D0C4: f50314aa  mov x21, x20
0x0657D0C8: b30e01f8  str x19, [x21, #0x10]!
0x0657D0CC: e00315aa  mov x0, x21
0x0657D0D0: e10313aa  mov x1, x19
0x0657D0D4: 3c0e3097  bl #0x31809c4
0x0657D0D8: a80240f9  ldr x8, [x21]
0x0657D0DC: c80200b4  cbz x8, #0x657d134
0x0657D0E0: 098c00f0  adrp x9, #0x7700000
0x0657D0E4: 291943f9  ldr x9, [x9, #0x630]
0x0657D0E8: 158c00f0  adrp x21, #0x7700000
0x0657D0EC: 168c00f0  adrp x22, #0x7700000
0x0657D0F0: 130d40f9  ldr x19, [x8, #0x18]
0x0657D0F4: 200140f9  ldr x0, [x9]
0x0657D0F8: b51e43f9  ldr x21, [x21, #0x638]
0x0657D0FC: d61643f9  ldr x22, [x22, #0x628]
0x0657D100: e80e3097  bl #0x3180ca0
0x0657D104: a20240f9  ldr x2, [x21]
0x0657D108: e10314aa  mov x1, x20
0x0657D10C: e3031faa  mov x3, xzr
0x0657D110: f50300aa  mov x21, x0
0x0657D114: 2966b397  bl #0x52569b8
0x0657D118: c20240f9  ldr x2, [x22]
0x0657D11C: e00313aa  mov x0, x19
0x0657D120: e10315aa  mov x1, x21
0x0657D124: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0657D128: f65741a9  ldp x22, x21, [sp, #0x10]
0x0657D12C: fe0743f8  ldr x30, [sp], #0x30
0x0657D130: 594e5b17  b #0x3c50a94
0x0657D134: de0e3097  bl #0x3180cac

