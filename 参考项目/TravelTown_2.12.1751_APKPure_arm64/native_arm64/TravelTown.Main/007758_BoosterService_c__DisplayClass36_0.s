; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 7758 .BoosterService.<>c__DisplayClass36_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x65C2344 | public void .ctor() { }
; bytes=8 sha256=269aa3a945caada37e367cfddd15af29d2633eb7c2259191b3a68a8db5c3ce42 status=arm64_complete_bound indexed_start=True
0x065C2344: e1031faa  mov x1, xzr
0x065C2348: ad60c417  b #0x56da5fc

; RVA 0x65C4688 | internal void <GetActiveBoosters>b__0(List<RemoteBoosterData> response) { }
; bytes=592 sha256=9e672058915d22d957b0dc1e1bf0fe2a059a2243ebf015445f6c408dd8c42d66 status=arm64_complete_bound indexed_start=True
0x065C4688: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x065C468C: f65701a9  stp x22, x21, [sp, #0x10]
0x065C4690: f44f02a9  stp x20, x19, [sp, #0x20]
0x065C4694: 15bb00f0  adrp x21, #0x7d27000
0x065C4698: f6850090  adrp x22, #0x7680000
0x065C469C: a8ea6439  ldrb w8, [x21, #0x93a]
0x065C46A0: d6b243f9  ldr x22, [x22, #0x760]
0x065C46A4: f40301aa  mov x20, x1
0x065C46A8: f30300aa  mov x19, x0
0x065C46AC: 08030037  tbnz w8, #0, #0x65c470c
0x065C46B0: e0850090  adrp x0, #0x7680000
0x065C46B4: 00b043f9  ldr x0, [x0, #0x760]
0x065C46B8: d8f02e97  bl #0x3180a18
0x065C46BC: e08900f0  adrp x0, #0x7703000
0x065C46C0: 006441f9  ldr x0, [x0, #0x2c8]
0x065C46C4: d5f02e97  bl #0x3180a18
0x065C46C8: a08500d0  adrp x0, #0x767a000
0x065C46CC: 005445f9  ldr x0, [x0, #0xaa8]
0x065C46D0: d2f02e97  bl #0x3180a18
0x065C46D4: e08900f0  adrp x0, #0x7703000
0x065C46D8: 006841f9  ldr x0, [x0, #0x2d0]
0x065C46DC: cff02e97  bl #0x3180a18
0x065C46E0: e08900f0  adrp x0, #0x7703000
0x065C46E4: 006c41f9  ldr x0, [x0, #0x2d8]
0x065C46E8: ccf02e97  bl #0x3180a18
0x065C46EC: e08900f0  adrp x0, #0x7703000
0x065C46F0: 007041f9  ldr x0, [x0, #0x2e0]
0x065C46F4: c9f02e97  bl #0x3180a18
0x065C46F8: e08900f0  adrp x0, #0x7703000
0x065C46FC: 006041f9  ldr x0, [x0, #0x2c0]
0x065C4700: c6f02e97  bl #0x3180a18
0x065C4704: 28008052  movz w8, #0x1
0x065C4708: a8ea2439  strb w8, [x21, #0x93a]
0x065C470C: c10240f9  ldr x1, [x22]
0x065C4710: e00314aa  mov x0, x20
0x065C4714: fe8e5897  bl #0x3be830c
0x065C4718: 00050037  tbnz w0, #0, #0x65c47b8
0x065C471C: f78900f0  adrp x23, #0x7703000
0x065C4720: f76241f9  ldr x23, [x23, #0x2c0]
0x065C4724: e00240f9  ldr x0, [x23]
0x065C4728: 08e040b9  ldr w8, [x0, #0xe0]
0x065C472C: 68000035  cbnz w8, #0x65c4738
0x065C4730: 17f12e97  bl #0x3180b8c
0x065C4734: e00240f9  ldr x0, [x23]
0x065C4738: 085c40f9  ldr x8, [x0, #0xb8]
0x065C473C: 150540f9  ldr x21, [x8, #8]
0x065C4740: f50200b5  cbnz x21, #0x65c479c
0x065C4744: 08e040b9  ldr w8, [x0, #0xe0]
0x065C4748: 68000035  cbnz w8, #0x65c4754
0x065C474C: 10f12e97  bl #0x3180b8c
0x065C4750: e00240f9  ldr x0, [x23]
0x065C4754: e98900f0  adrp x9, #0x7703000
0x065C4758: 085c40f9  ldr x8, [x0, #0xb8]
0x065C475C: 296541f9  ldr x9, [x9, #0x2c8]
0x065C4760: 160140f9  ldr x22, [x8]
0x065C4764: 200140f9  ldr x0, [x9]
0x065C4768: 4ef12e97  bl #0x3180ca0
0x065C476C: e88900f0  adrp x8, #0x7703000
0x065C4770: 087141f9  ldr x8, [x8, #0x2e0]
0x065C4774: e10316aa  mov x1, x22
0x065C4778: e3031faa  mov x3, xzr
0x065C477C: f50300aa  mov x21, x0
0x065C4780: 020140f9  ldr x2, [x8]
0x065C4784: e6369e97  bl #0x4d5231c
0x065C4788: e80240f9  ldr x8, [x23]
0x065C478C: e10315aa  mov x1, x21
0x065C4790: 005d40f9  ldr x0, [x8, #0xb8]
0x065C4794: 158c00f8  str x21, [x0, #8]!
0x065C4798: 8bf02e97  bl #0x31809c4
0x065C479C: d40900b4  cbz x20, #0x65c48d4
0x065C47A0: e88900f0  adrp x8, #0x7703000
0x065C47A4: 086941f9  ldr x8, [x8, #0x2d0]
0x065C47A8: e00314aa  mov x0, x20
0x065C47AC: e10315aa  mov x1, x21
0x065C47B0: 020140f9  ldr x2, [x8]
0x065C47B4: 38066a97  bl #0x4046094
0x065C47B8: 680a40f9  ldr x8, [x19, #0x10]
0x065C47BC: c80800b4  cbz x8, #0x65c48d4
0x065C47C0: 151940f9  ldr x21, [x8, #0x30]
0x065C47C4: 950800b4  cbz x21, #0x65c48d4
0x065C47C8: b68500d0  adrp x22, #0x767a000
0x065C47CC: a80240f9  ldr x8, [x21]
0x065C47D0: d65645f9  ldr x22, [x22, #0xaa8]
0x065C47D4: 095d4279  ldrh w9, [x8, #0x12e]
0x065C47D8: c10240f9  ldr x1, [x22]
0x065C47DC: 290100b4  cbz x9, #0x65c4800
0x065C47E0: 0a5940f9  ldr x10, [x8, #0xb0]
0x065C47E4: 4a210091  add x10, x10, #8
0x065C47E8: 4b815ff8  ldur x11, [x10, #-8]
0x065C47EC: 7f0101eb  cmp x11, x1
0x065C47F0: 00010054  b.eq #0x65c4810
0x065C47F4: 290500f1  subs x9, x9, #1
0x065C47F8: 4a410091  add x10, x10, #0x10
0x065C47FC: 61ffff54  b.ne #0x65c47e8
0x065C4800: a2008052  movz w2, #0x5
0x065C4804: e00315aa  mov x0, x21
0x065C4808: c2482e97  bl #0x3156b10
0x065C480C: 05000014  b #0x65c4820
0x065C4810: 490140b9  ldr w9, [x10]
0x065C4814: 29150011  add w9, w9, #5
0x065C4818: 08d1298b  add x8, x8, w9, sxtw #4
0x065C481C: 00e10491  add x0, x8, #0x138
0x065C4820: 080840a9  ldp x8, x2, [x0]
0x065C4824: e00315aa  mov x0, x21
0x065C4828: e10314aa  mov x1, x20
0x065C482C: 00013fd6  blr x8
0x065C4830: 740a40f9  ldr x20, [x19, #0x10]
0x065C4834: 140500b4  cbz x20, #0x65c48d4
0x065C4838: 951a40f9  ldr x21, [x20, #0x30]
0x065C483C: d50400b4  cbz x21, #0x65c48d4
0x065C4840: a80240f9  ldr x8, [x21]
0x065C4844: c10240f9  ldr x1, [x22]
0x065C4848: 095d4279  ldrh w9, [x8, #0x12e]
0x065C484C: 290100b4  cbz x9, #0x65c4870
0x065C4850: 0a5940f9  ldr x10, [x8, #0xb0]
0x065C4854: 4a210091  add x10, x10, #8
0x065C4858: 4b815ff8  ldur x11, [x10, #-8]
0x065C485C: 7f0101eb  cmp x11, x1
0x065C4860: 00010054  b.eq #0x65c4880
0x065C4864: 290500f1  subs x9, x9, #1
0x065C4868: 4a410091  add x10, x10, #0x10
0x065C486C: 61ffff54  b.ne #0x65c4858
0x065C4870: 82008052  movz w2, #0x4
0x065C4874: e00315aa  mov x0, x21
0x065C4878: a6482e97  bl #0x3156b10
0x065C487C: 05000014  b #0x65c4890
0x065C4880: 490140b9  ldr w9, [x10]
0x065C4884: 29110011  add w9, w9, #4
0x065C4888: 08d1298b  add x8, x8, w9, sxtw #4
0x065C488C: 00e10491  add x0, x8, #0x138
0x065C4890: 080440a9  ldp x8, x1, [x0]
0x065C4894: e00315aa  mov x0, x21
0x065C4898: 00013fd6  blr x8
0x065C489C: e10300aa  mov x1, x0
0x065C48A0: e00314aa  mov x0, x20
0x065C48A4: b4f5ff97  bl #0x65c1f74
0x065C48A8: 680a40f9  ldr x8, [x19, #0x10]
0x065C48AC: 480100b4  cbz x8, #0x65c48d4
0x065C48B0: 001140f9  ldr x0, [x8, #0x20]
0x065C48B4: 000100b4  cbz x0, #0x65c48d4
0x065C48B8: e88900f0  adrp x8, #0x7703000
0x065C48BC: 086d41f9  ldr x8, [x8, #0x2d8]
0x065C48C0: f44f42a9  ldp x20, x19, [sp, #0x20]
0x065C48C4: f65741a9  ldp x22, x21, [sp, #0x10]
0x065C48C8: 010140f9  ldr x1, [x8]
0x065C48CC: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x065C48D0: 08815f17  b #0x3da4cf0
0x065C48D4: f6f02e97  bl #0x3180cac

; RVA 0x65C48D8 | internal void <GetActiveBoosters>b__1(Exception ex) { }
; bytes=520 sha256=feabfb556005d10700ff2fae71ad8681ed3acd82afddaa456fd25871aa5b868b status=arm64_complete_bound indexed_start=True
0x065C48D8: ff8301d1  sub sp, sp, #0x60
0x065C48DC: fe1300f9  str x30, [sp, #0x20]
0x065C48E0: f85f03a9  stp x24, x23, [sp, #0x30]
0x065C48E4: f65704a9  stp x22, x21, [sp, #0x40]
0x065C48E8: f44f05a9  stp x20, x19, [sp, #0x50]
0x065C48EC: 18bb00f0  adrp x24, #0x7d27000
0x065C48F0: f78900f0  adrp x23, #0x7703000
0x065C48F4: b68500b0  adrp x22, #0x7679000
0x065C48F8: 558500b0  adrp x21, #0x766d000
0x065C48FC: 08ef6439  ldrb w8, [x24, #0x93b]
0x065C4900: f77641f9  ldr x23, [x23, #0x2e8]
0x065C4904: d67a44f9  ldr x22, [x22, #0x8f0]
0x065C4908: b56e46f9  ldr x21, [x21, #0xcd8]
0x065C490C: f40301aa  mov x20, x1
0x065C4910: f30300aa  mov x19, x0
0x065C4914: 28040037  tbnz w8, #0, #0x65c4998
0x065C4918: 408500b0  adrp x0, #0x766d000
0x065C491C: 006c46f9  ldr x0, [x0, #0xcd8]
0x065C4920: 3ef02e97  bl #0x3180a18
0x065C4924: 608500b0  adrp x0, #0x7671000
0x065C4928: 008443f9  ldr x0, [x0, #0x708]
0x065C492C: 3bf02e97  bl #0x3180a18
0x065C4930: 408500f0  adrp x0, #0x766f000
0x065C4934: 000c45f9  ldr x0, [x0, #0xa18]
0x065C4938: 38f02e97  bl #0x3180a18
0x065C493C: a08500b0  adrp x0, #0x7679000
0x065C4940: 007844f9  ldr x0, [x0, #0x8f0]
0x065C4944: 35f02e97  bl #0x3180a18
0x065C4948: 408500f0  adrp x0, #0x766f000
0x065C494C: 001045f9  ldr x0, [x0, #0xa20]
0x065C4950: 32f02e97  bl #0x3180a18
0x065C4954: e08900f0  adrp x0, #0x7703000
0x065C4958: 007841f9  ldr x0, [x0, #0x2f0]
0x065C495C: 2ff02e97  bl #0x3180a18
0x065C4960: c0850090  adrp x0, #0x767c000
0x065C4964: 003040f9  ldr x0, [x0, #0x60]
0x065C4968: 2cf02e97  bl #0x3180a18
0x065C496C: e08900f0  adrp x0, #0x7703000
0x065C4970: 007441f9  ldr x0, [x0, #0x2e8]
0x065C4974: 29f02e97  bl #0x3180a18
0x065C4978: e08900f0  adrp x0, #0x7703000
0x065C497C: 007c41f9  ldr x0, [x0, #0x2f8]
0x065C4980: 26f02e97  bl #0x3180a18
0x065C4984: e08900f0  adrp x0, #0x7703000
0x065C4988: 008041f9  ldr x0, [x0, #0x300]
0x065C498C: 23f02e97  bl #0x3180a18
0x065C4990: 28008052  movz w8, #0x1
0x065C4994: 08ef2439  strb w8, [x24, #0x93b]
0x065C4998: e00240f9  ldr x0, [x23]
0x065C499C: d8850090  adrp x24, #0x767c000
0x065C49A0: f78900f0  adrp x23, #0x7703000
0x065C49A4: 183340f9  ldr x24, [x24, #0x60]
0x065C49A8: f77e41f9  ldr x23, [x23, #0x2f8]
0x065C49AC: e10314aa  mov x1, x20
0x065C49B0: e2031faa  mov x2, xzr
0x065C49B4: 43a7bc97  bl #0x54ee6c0
0x065C49B8: c80240f9  ldr x8, [x22]
0x065C49BC: f40300aa  mov x20, x0
0x065C49C0: 09008092  movn x9, #0
0x065C49C4: 4a068052  movz w10, #0x32
0x065C49C8: e0230091  add x0, sp, #8
0x065C49CC: e1031faa  mov x1, xzr
0x065C49D0: e8a700a9  stp x8, x9, [sp, #8]
0x065C49D4: ea1b00b9  str w10, [sp, #0x18]
0x065C49D8: 4323c497  bl #0x56cd6e4
0x065C49DC: a80240f9  ldr x8, [x21]
0x065C49E0: f50300aa  mov x21, x0
0x065C49E4: 09e140b9  ldr w9, [x8, #0xe0]
0x065C49E8: 69000035  cbnz w9, #0x65c49f4
0x065C49EC: e00308aa  mov x0, x8
0x065C49F0: 67f02e97  bl #0x3180b8c
0x065C49F4: 030340f9  ldr x3, [x24]
0x065C49F8: e40240f9  ldr x4, [x23]
0x065C49FC: e00314aa  mov x0, x20
0x065C4A00: e10315aa  mov x1, x21
0x065C4A04: e2031faa  mov x2, xzr
0x065C4A08: e5031faa  mov x5, xzr
0x065C4A0C: e6031faa  mov x6, xzr
0x065C4A10: 899eba97  bl #0x546c434
0x065C4A14: 68624039  ldrb w8, [x19, #0x18]
0x065C4A18: 68050034  cbz w8, #0x65c4ac4
0x065C4A1C: 680a40f9  ldr x8, [x19, #0x10]
0x065C4A20: e80500b4  cbz x8, #0x65c4adc
0x065C4A24: e98900f0  adrp x9, #0x7703000
0x065C4A28: 298141f9  ldr x9, [x9, #0x300]
0x065C4A2C: f70313aa  mov x23, x19
0x065C4A30: 588500f0  adrp x24, #0x766f000
0x065C4A34: 141140f9  ldr x20, [x8, #0x20]
0x065C4A38: f60e42f8  ldr x22, [x23, #0x20]!
0x065C4A3C: 350140f9  ldr x21, [x9]
0x065C4A40: 180f45f9  ldr x24, [x24, #0xa18]
0x065C4A44: 160200b5  cbnz x22, #0x65c4a84
0x065C4A48: 688500b0  adrp x8, #0x7671000
0x065C4A4C: 088543f9  ldr x8, [x8, #0x708]
0x065C4A50: 000140f9  ldr x0, [x8]
0x065C4A54: 93f02e97  bl #0x3180ca0
0x065C4A58: e88900f0  adrp x8, #0x7703000
0x065C4A5C: 087941f9  ldr x8, [x8, #0x2f0]
0x065C4A60: e10313aa  mov x1, x19
0x065C4A64: e3031faa  mov x3, xzr
0x065C4A68: f60300aa  mov x22, x0
0x065C4A6C: 020140f9  ldr x2, [x8]
0x065C4A70: 7d960b94  bl #0x68aa464
0x065C4A74: e00317aa  mov x0, x23
0x065C4A78: e10316aa  mov x1, x22
0x065C4A7C: 761200f9  str x22, [x19, #0x20]
0x065C4A80: d1ef2e97  bl #0x31809c4
0x065C4A84: 000340f9  ldr x0, [x24]
0x065C4A88: 86f02e97  bl #0x3180ca0
0x065C4A8C: e003271e  fmov s0, wzr
0x065C4A90: c30f8752  movz w3, #0x387e
0x065C4A94: e10315aa  mov x1, x21
0x065C4A98: e20316aa  mov x2, x22
0x065C4A9C: e4031faa  mov x4, xzr
0x065C4AA0: f30300aa  mov x19, x0
0x065C4AA4: 20660d94  bl #0x691e324
0x065C4AA8: b40100b4  cbz x20, #0x65c4adc
0x065C4AAC: 488500f0  adrp x8, #0x766f000
0x065C4AB0: 081145f9  ldr x8, [x8, #0xa20]
0x065C4AB4: e00314aa  mov x0, x20
0x065C4AB8: e10313aa  mov x1, x19
0x065C4ABC: 020140f9  ldr x2, [x8]
0x065C4AC0: ab805f97  bl #0x3da4d6c
0x065C4AC4: f44f45a9  ldp x20, x19, [sp, #0x50]
0x065C4AC8: f65744a9  ldp x22, x21, [sp, #0x40]
0x065C4ACC: f85f43a9  ldp x24, x23, [sp, #0x30]
0x065C4AD0: fe1340f9  ldr x30, [sp, #0x20]
0x065C4AD4: ff830191  add sp, sp, #0x60
0x065C4AD8: c0035fd6  ret
0x065C4ADC: 74f02e97  bl #0x3180cac

; RVA 0x65C4AE0 | internal void <GetActiveBoosters>b__3() { }
; bytes=136 sha256=bcbaa7cc2ddd5a1a0267ff18d91a49212e8c30783af3794a1092af831b394203 status=arm64_complete_bound indexed_start=True
0x065C4AE0: fe0f1ef8  str x30, [sp, #-0x20]!
0x065C4AE4: f44f01a9  stp x20, x19, [sp, #0x10]
0x065C4AE8: 14bb00f0  adrp x20, #0x7d27000
0x065C4AEC: 88f26439  ldrb w8, [x20, #0x93c]
0x065C4AF0: f30300aa  mov x19, x0
0x065C4AF4: 28010037  tbnz w8, #0, #0x65c4b18
0x065C4AF8: e0870090  adrp x0, #0x76c0000
0x065C4AFC: 008c47f9  ldr x0, [x0, #0xf18]
0x065C4B00: c6ef2e97  bl #0x3180a18
0x065C4B04: e0870090  adrp x0, #0x76c0000
0x065C4B08: 009047f9  ldr x0, [x0, #0xf20]
0x065C4B0C: c3ef2e97  bl #0x3180a18
0x065C4B10: 28008052  movz w8, #0x1
0x065C4B14: 88f22439  strb w8, [x20, #0x93c]
0x065C4B18: 680a40f9  ldr x8, [x19, #0x10]
0x065C4B1C: 480200b4  cbz x8, #0x65c4b64
0x065C4B20: e9870090  adrp x9, #0x76c0000
0x065C4B24: 299147f9  ldr x9, [x9, #0xf20]
0x065C4B28: 131140f9  ldr x19, [x8, #0x20]
0x065C4B2C: 200140f9  ldr x0, [x9]
0x065C4B30: 5cf02e97  bl #0x3180ca0
0x065C4B34: e1031faa  mov x1, xzr
0x065C4B38: f40300aa  mov x20, x0
0x065C4B3C: dfa10694  bl #0x676d2b8
0x065C4B40: 330100b4  cbz x19, #0x65c4b64
0x065C4B44: e8870090  adrp x8, #0x76c0000
0x065C4B48: 088d47f9  ldr x8, [x8, #0xf18]
0x065C4B4C: e00313aa  mov x0, x19
0x065C4B50: e10314aa  mov x1, x20
0x065C4B54: f44f41a9  ldp x20, x19, [sp, #0x10]
0x065C4B58: 020140f9  ldr x2, [x8]
0x065C4B5C: fe0742f8  ldr x30, [sp], #0x20
0x065C4B60: 83805f17  b #0x3da4d6c
0x065C4B64: 52f02e97  bl #0x3180cac

