; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 923 MergeEngine.ECS.Systems.Board.GenericTokensStateSystem
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x666C728 | private ResourceReplenishmentSystem get_ResourceReplenishmentSystem() { }
; bytes=184 sha256=51f8862167a56204b88b1633f5637d75ba7478d32e1bf1f0081af453882c9785 status=arm64_complete_bound indexed_start=True
0x0666C728: fe0f1ef8  str x30, [sp, #-0x20]!
0x0666C72C: f44f01a9  stp x20, x19, [sp, #0x10]
0x0666C730: f4b50090  adrp x20, #0x7d28000
0x0666C734: 88e24339  ldrb w8, [x20, #0xf8]
0x0666C738: f30300aa  mov x19, x0
0x0666C73C: c8000037  tbnz w8, #0, #0x666c754
0x0666C740: e0840090  adrp x0, #0x7708000
0x0666C744: 000440f9  ldr x0, [x0, #8]
0x0666C748: b4502c97  bl #0x3180a18
0x0666C74C: 28008052  movz w8, #0x1
0x0666C750: 88e20339  strb w8, [x20, #0xf8]
0x0666C754: 732a40f9  ldr x19, [x19, #0x50]
0x0666C758: 330400b4  cbz x19, #0x666c7dc
0x0666C75C: e9840090  adrp x9, #0x7708000
0x0666C760: 290540f9  ldr x9, [x9, #8]
0x0666C764: 680240f9  ldr x8, [x19]
0x0666C768: 340140f9  ldr x20, [x9]
0x0666C76C: 095d4279  ldrh w9, [x8, #0x12e]
0x0666C770: 811240f9  ldr x1, [x20, #0x20]
0x0666C774: 82a24079  ldrh w2, [x20, #0x50]
0x0666C778: 290100b4  cbz x9, #0x666c79c
0x0666C77C: 0a5940f9  ldr x10, [x8, #0xb0]
0x0666C780: 4a210091  add x10, x10, #8
0x0666C784: 4b815ff8  ldur x11, [x10, #-8]
0x0666C788: 7f0101eb  cmp x11, x1
0x0666C78C: e0000054  b.eq #0x666c7a8
0x0666C790: 290500f1  subs x9, x9, #1
0x0666C794: 4a410091  add x10, x10, #0x10
0x0666C798: 61ffff54  b.ne #0x666c784
0x0666C79C: e00313aa  mov x0, x19
0x0666C7A0: dca82b97  bl #0x3156b10
0x0666C7A4: 05000014  b #0x666c7b8
0x0666C7A8: 490140b9  ldr w9, [x10]
0x0666C7AC: 2901020b  add w9, w9, w2
0x0666C7B0: 08d1298b  add x8, x8, w9, sxtw #4
0x0666C7B4: 00e10491  add x0, x8, #0x138
0x0666C7B8: 000440f9  ldr x0, [x0, #8]
0x0666C7BC: e10314aa  mov x1, x20
0x0666C7C0: f2502c97  bl #0x3180b88
0x0666C7C4: e10300aa  mov x1, x0
0x0666C7C8: 020440f9  ldr x2, [x0, #8]
0x0666C7CC: e00313aa  mov x0, x19
0x0666C7D0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0666C7D4: fe0742f8  ldr x30, [sp], #0x20
0x0666C7D8: 40001fd6  br x2
0x0666C7DC: 34512c97  bl #0x3180cac

; RVA 0x666C7E0 | protected override void LoadState(GenericTokenState newState) { }
; bytes=732 sha256=b5c3cad8bdf0ea3983c3f171b70b1484ae3cfc8145d6eec3e8f22121885be7e5 status=arm64_complete_bound indexed_start=True
0x0666C7E0: ff8302d1  sub sp, sp, #0xa0
0x0666C7E4: fe2300f9  str x30, [sp, #0x40]
0x0666C7E8: fc6f05a9  stp x28, x27, [sp, #0x50]
0x0666C7EC: fa6706a9  stp x26, x25, [sp, #0x60]
0x0666C7F0: f85f07a9  stp x24, x23, [sp, #0x70]
0x0666C7F4: f65708a9  stp x22, x21, [sp, #0x80]
0x0666C7F8: f44f09a9  stp x20, x19, [sp, #0x90]
0x0666C7FC: f5b50090  adrp x21, #0x7d28000
0x0666C800: a8e64339  ldrb w8, [x21, #0xf9]
0x0666C804: f40301aa  mov x20, x1
0x0666C808: f30300aa  mov x19, x0
0x0666C80C: 08030037  tbnz w8, #0, #0x666c86c
0x0666C810: e0840090  adrp x0, #0x7708000
0x0666C814: 000840f9  ldr x0, [x0, #0x10]
0x0666C818: 80502c97  bl #0x3180a18
0x0666C81C: e0840090  adrp x0, #0x7708000
0x0666C820: 000c40f9  ldr x0, [x0, #0x18]
0x0666C824: 7d502c97  bl #0x3180a18
0x0666C828: e0840090  adrp x0, #0x7708000
0x0666C82C: 001040f9  ldr x0, [x0, #0x20]
0x0666C830: 7a502c97  bl #0x3180a18
0x0666C834: 208000f0  adrp x0, #0x7673000
0x0666C838: 004443f9  ldr x0, [x0, #0x688]
0x0666C83C: 77502c97  bl #0x3180a18
0x0666C840: e0840090  adrp x0, #0x7708000
0x0666C844: 001440f9  ldr x0, [x0, #0x28]
0x0666C848: 74502c97  bl #0x3180a18
0x0666C84C: 208000f0  adrp x0, #0x7673000
0x0666C850: 009c40f9  ldr x0, [x0, #0x138]
0x0666C854: 71502c97  bl #0x3180a18
0x0666C858: 208000b0  adrp x0, #0x7671000
0x0666C85C: 00cc43f9  ldr x0, [x0, #0x798]
0x0666C860: 6e502c97  bl #0x3180a18
0x0666C864: 28008052  movz w8, #0x1
0x0666C868: a8e60339  strb w8, [x21, #0xf9]
0x0666C86C: ff7f02a9  stp xzr, xzr, [sp, #0x20]
0x0666C870: ff1b00f9  str xzr, [sp, #0x30]
0x0666C874: 340e00b4  cbz x20, #0x666ca38
0x0666C878: 800e40f9  ldr x0, [x20, #0x18]
0x0666C87C: e00d00b4  cbz x0, #0x666ca38
0x0666C880: e8840090  adrp x8, #0x7708000
0x0666C884: 081540f9  ldr x8, [x8, #0x28]
0x0666C888: f8840090  adrp x24, #0x7708000
0x0666C88C: 398000b0  adrp x25, #0x7671000
0x0666C890: 180f40f9  ldr x24, [x24, #0x18]
0x0666C894: 39cf43f9  ldr x25, [x25, #0x798]
0x0666C898: 010140f9  ldr x1, [x8]
0x0666C89C: 3a8000f0  adrp x26, #0x7673000
0x0666C8A0: 3b8000f0  adrp x27, #0x7673000
0x0666C8A4: f7840090  adrp x23, #0x7708000
0x0666C8A8: 5a9f40f9  ldr x26, [x26, #0x138]
0x0666C8AC: 7b4743f9  ldr x27, [x27, #0x688]
0x0666C8B0: f70a40f9  ldr x23, [x23, #0x10]
0x0666C8B4: e8230091  add x8, sp, #8
0x0666C8B8: ec616797  bl #0x4045068
0x0666C8BC: e083c03c  ldur q0, [sp, #8]
0x0666C8C0: e80f40f9  ldr x8, [sp, #0x18]
0x0666C8C4: e00b803d  str q0, [sp, #0x20]
0x0666C8C8: e81b00f9  str x8, [sp, #0x30]
0x0666C8CC: 010340f9  ldr x1, [x24]
0x0666C8D0: e0830091  add x0, sp, #0x20
0x0666C8D4: 38a4a697  bl #0x50159b4
0x0666C8D8: 40090036  tbz w0, #0, #0x666ca00
0x0666C8DC: fc1b40f9  ldr x28, [sp, #0x30]
0x0666C8E0: 7c0a00b4  cbz x28, #0x666ca2c
0x0666C8E4: 950b40f9  ldr x21, [x28, #0x10]
0x0666C8E8: 200340f9  ldr x0, [x25]
0x0666C8EC: ed502c97  bl #0x3180ca0
0x0666C8F0: 430340f9  ldr x3, [x26]
0x0666C8F4: f40300aa  mov x20, x0
0x0666C8F8: 61018052  movz w1, #0xb
0x0666C8FC: e20315aa  mov x2, x21
0x0666C900: eb7a7997  bl #0x44cb4ac
0x0666C904: 752640f9  ldr x21, [x19, #0x48]
0x0666C908: 550900b4  cbz x21, #0x666ca30
0x0666C90C: a80240f9  ldr x8, [x21]
0x0666C910: 610340f9  ldr x1, [x27]
0x0666C914: 095d4279  ldrh w9, [x8, #0x12e]
0x0666C918: 290100b4  cbz x9, #0x666c93c
0x0666C91C: 0a5940f9  ldr x10, [x8, #0xb0]
0x0666C920: 4a210091  add x10, x10, #8
0x0666C924: 4b815ff8  ldur x11, [x10, #-8]
0x0666C928: 7f0101eb  cmp x11, x1
0x0666C92C: 00010054  b.eq #0x666c94c
0x0666C930: 290500f1  subs x9, x9, #1
0x0666C934: 4a410091  add x10, x10, #0x10
0x0666C938: 61ffff54  b.ne #0x666c924
0x0666C93C: 02018052  movz w2, #0x8
0x0666C940: e00315aa  mov x0, x21
0x0666C944: 73a82b97  bl #0x3156b10
0x0666C948: 05000014  b #0x666c95c
0x0666C94C: 490140b9  ldr w9, [x10]
0x0666C950: 29210011  add w9, w9, #8
0x0666C954: 08d1298b  add x8, x8, w9, sxtw #4
0x0666C958: 00e10491  add x0, x8, #0x138
0x0666C95C: 080840a9  ldp x8, x2, [x0]
0x0666C960: e00315aa  mov x0, x21
0x0666C964: e10314aa  mov x1, x20
0x0666C968: 00013fd6  blr x8
0x0666C96C: 00fb0736  tbz w0, #0, #0x666c8cc
0x0666C970: 752640f9  ldr x21, [x19, #0x48]
0x0666C974: 150600b4  cbz x21, #0x666ca34
0x0666C978: a80240f9  ldr x8, [x21]
0x0666C97C: 961b40b9  ldr w22, [x28, #0x18]
0x0666C980: 610340f9  ldr x1, [x27]
0x0666C984: 095d4279  ldrh w9, [x8, #0x12e]
0x0666C988: 290100b4  cbz x9, #0x666c9ac
0x0666C98C: 0a5940f9  ldr x10, [x8, #0xb0]
0x0666C990: 4a210091  add x10, x10, #8
0x0666C994: 4b815ff8  ldur x11, [x10, #-8]
0x0666C998: 7f0101eb  cmp x11, x1
0x0666C99C: 00010054  b.eq #0x666c9bc
0x0666C9A0: 290500f1  subs x9, x9, #1
0x0666C9A4: 4a410091  add x10, x10, #0x10
0x0666C9A8: 61ffff54  b.ne #0x666c994
0x0666C9AC: 22018052  movz w2, #0x9
0x0666C9B0: e00315aa  mov x0, x21
0x0666C9B4: 57a82b97  bl #0x3156b10
0x0666C9B8: 05000014  b #0x666c9cc
0x0666C9BC: 490140b9  ldr w9, [x10]
0x0666C9C0: 29250011  add w9, w9, #9
0x0666C9C4: 08d1298b  add x8, x8, w9, sxtw #4
0x0666C9C8: 00e10491  add x0, x8, #0x138
0x0666C9CC: 081440a9  ldp x8, x5, [x0]
0x0666C9D0: c4038052  movz w4, #0x1e
0x0666C9D4: e00315aa  mov x0, x21
0x0666C9D8: e10314aa  mov x1, x20
0x0666C9DC: e203162a  mov w2, w22
0x0666C9E0: e3031f2a  mov w3, wzr
0x0666C9E4: 00013fd6  blr x8
0x0666C9E8: 821340f9  ldr x2, [x28, #0x20]
0x0666C9EC: 02f7ffb4  cbz x2, #0x666c8cc
0x0666C9F0: e00313aa  mov x0, x19
0x0666C9F4: e10314aa  mov x1, x20
0x0666C9F8: 31000094  bl #0x666cabc
0x0666C9FC: b4ffff17  b #0x666c8cc
0x0666CA00: e10240f9  ldr x1, [x23]
0x0666CA04: e0830091  add x0, sp, #0x20
0x0666CA08: eaa3a697  bl #0x50159b0
0x0666CA0C: f44f49a9  ldp x20, x19, [sp, #0x90]
0x0666CA10: f65748a9  ldp x22, x21, [sp, #0x80]
0x0666CA14: f85f47a9  ldp x24, x23, [sp, #0x70]
0x0666CA18: fa6746a9  ldp x26, x25, [sp, #0x60]
0x0666CA1C: fc6f45a9  ldp x28, x27, [sp, #0x50]
0x0666CA20: fe2340f9  ldr x30, [sp, #0x40]
0x0666CA24: ff830291  add sp, sp, #0xa0
0x0666CA28: c0035fd6  ret
0x0666CA2C: a0502c97  bl #0x3180cac
0x0666CA30: 9f502c97  bl #0x3180cac
0x0666CA34: 9e502c97  bl #0x3180cac
0x0666CA38: 9d502c97  bl #0x3180cac
0x0666CA3C: 07000014  b #0x666ca58
0x0666CA40: 06000014  b #0x666ca58
0x0666CA44: 05000014  b #0x666ca58
0x0666CA48: 04000014  b #0x666ca58
0x0666CA4C: 03000014  b #0x666ca58
0x0666CA50: 02000014  b #0x666ca58
0x0666CA54: 01000014  b #0x666ca58
0x0666CA58: f30300aa  mov x19, x0
0x0666CA5C: 3f040071  cmp w1, #1
0x0666CA60: 61010054  b.ne #0x666ca8c
0x0666CA64: e00313aa  mov x0, x19
0x0666CA68: aa872d94  bl #0x71ce910
0x0666CA6C: 140040f9  ldr x20, [x0]
0x0666CA70: ac872d94  bl #0x71ce920
0x0666CA74: e10240f9  ldr x1, [x23]
0x0666CA78: e0830091  add x0, sp, #0x20
0x0666CA7C: cda3a697  bl #0x50159b0
0x0666CA80: 74fcffb4  cbz x20, #0x666ca0c
0x0666CA84: e00314aa  mov x0, x20
0x0666CA88: 87502c97  bl #0x3180ca4
0x0666CA8C: f4031faa  mov x20, xzr
0x0666CA90: 02000014  b #0x666ca98
0x0666CA94: f30300aa  mov x19, x0
0x0666CA98: e10240f9  ldr x1, [x23]
0x0666CA9C: e0830091  add x0, sp, #0x20
0x0666CAA0: c4a3a697  bl #0x50159b0
0x0666CAA4: 740000b5  cbnz x20, #0x666cab0
0x0666CAA8: e00313aa  mov x0, x19
0x0666CAAC: abe32f97  bl #0x3265958
0x0666CAB0: e00314aa  mov x0, x20
0x0666CAB4: 7c502c97  bl #0x3180ca4
0x0666CAB8: 97721e97  bl #0x2e09514

; RVA 0x666CABC | public void UpdateRefillData(IRewardType rewardType, RewardRefillData rewardRefillData) { }
; bytes=376 sha256=5bab29c242ebb39da16457e6da2ad283675de772fdc34321da927e83aa5c5a83 status=arm64_complete_bound indexed_start=True
0x0666CABC: e80f1cfc  str d8, [sp, #-0x40]!
0x0666CAC0: fe0700f9  str x30, [sp, #8]
0x0666CAC4: f85f01a9  stp x24, x23, [sp, #0x10]
0x0666CAC8: f65702a9  stp x22, x21, [sp, #0x20]
0x0666CACC: f44f03a9  stp x20, x19, [sp, #0x30]
0x0666CAD0: f6b50090  adrp x22, #0x7d28000
0x0666CAD4: c8ea4339  ldrb w8, [x22, #0xfa]
0x0666CAD8: f40302aa  mov x20, x2
0x0666CADC: f30301aa  mov x19, x1
0x0666CAE0: f50300aa  mov x21, x0
0x0666CAE4: 28010037  tbnz w8, #0, #0x666cb08
0x0666CAE8: 008300d0  adrp x0, #0x76ce000
0x0666CAEC: 002445f9  ldr x0, [x0, #0xa48]
0x0666CAF0: ca4f2c97  bl #0x3180a18
0x0666CAF4: 80800090  adrp x0, #0x767c000
0x0666CAF8: 00e047f9  ldr x0, [x0, #0xfc0]
0x0666CAFC: c74f2c97  bl #0x3180a18
0x0666CB00: 28008052  movz w8, #0x1
0x0666CB04: c8ea0339  strb w8, [x22, #0xfa]
0x0666CB08: b62e40f9  ldr x22, [x21, #0x58]
0x0666CB0C: 360900b4  cbz x22, #0x666cc30
0x0666CB10: 0a8300d0  adrp x10, #0x76ce000
0x0666CB14: c80240f9  ldr x8, [x22]
0x0666CB18: 4a2545f9  ldr x10, [x10, #0xa48]
0x0666CB1C: 095d4279  ldrh w9, [x8, #0x12e]
0x0666CB20: 410140f9  ldr x1, [x10]
0x0666CB24: 290100b4  cbz x9, #0x666cb48
0x0666CB28: 0a5940f9  ldr x10, [x8, #0xb0]
0x0666CB2C: 4a210091  add x10, x10, #8
0x0666CB30: 4b815ff8  ldur x11, [x10, #-8]
0x0666CB34: 7f0101eb  cmp x11, x1
0x0666CB38: 00010054  b.eq #0x666cb58
0x0666CB3C: 290500f1  subs x9, x9, #1
0x0666CB40: 4a410091  add x10, x10, #0x10
0x0666CB44: 61ffff54  b.ne #0x666cb30
0x0666CB48: e00316aa  mov x0, x22
0x0666CB4C: e2031f2a  mov w2, wzr
0x0666CB50: f0a72b97  bl #0x3156b10
0x0666CB54: 04000014  b #0x666cb64
0x0666CB58: 490180b9  ldrsw x9, [x10]
0x0666CB5C: 0811098b  add x8, x8, x9, lsl #4
0x0666CB60: 00e10491  add x0, x8, #0x138
0x0666CB64: 080840a9  ldp x8, x2, [x0]
0x0666CB68: e00316aa  mov x0, x22
0x0666CB6C: e10313aa  mov x1, x19
0x0666CB70: 00013fd6  blr x8
0x0666CB74: 400400b4  cbz x0, #0x666cbfc
0x0666CB78: d40500b4  cbz x20, #0x666cc30
0x0666CB7C: 8a800090  adrp x10, #0x767c000
0x0666CB80: 4ae147f9  ldr x10, [x10, #0xfc0]
0x0666CB84: 080040f9  ldr x8, [x0]
0x0666CB88: 8b2240b9  ldr w11, [x20, #0x20]
0x0666CB8C: 985e4329  ldp w24, w23, [x20, #0x18]
0x0666CB90: 410140f9  ldr x1, [x10]
0x0666CB94: 095d4279  ldrh w9, [x8, #0x12e]
0x0666CB98: f60300aa  mov x22, x0
0x0666CB9C: 6801621e  scvtf d8, w11
0x0666CBA0: 290100b4  cbz x9, #0x666cbc4
0x0666CBA4: 0a5940f9  ldr x10, [x8, #0xb0]
0x0666CBA8: 4a210091  add x10, x10, #8
0x0666CBAC: 4b815ff8  ldur x11, [x10, #-8]
0x0666CBB0: 7f0101eb  cmp x11, x1
0x0666CBB4: 00010054  b.eq #0x666cbd4
0x0666CBB8: 290500f1  subs x9, x9, #1
0x0666CBBC: 4a410091  add x10, x10, #0x10
0x0666CBC0: 61ffff54  b.ne #0x666cbac
0x0666CBC4: 82008052  movz w2, #0x4
0x0666CBC8: e00316aa  mov x0, x22
0x0666CBCC: d1a72b97  bl #0x3156b10
0x0666CBD0: 05000014  b #0x666cbe4
0x0666CBD4: 490140b9  ldr w9, [x10]
0x0666CBD8: 29110011  add w9, w9, #4
0x0666CBDC: 08d1298b  add x8, x8, w9, sxtw #4
0x0666CBE0: 00e10491  add x0, x8, #0x138
0x0666CBE4: 080c40a9  ldp x8, x3, [x0]
0x0666CBE8: e00316aa  mov x0, x22
0x0666CBEC: e103182a  mov w1, w24
0x0666CBF0: e203172a  mov w2, w23
0x0666CBF4: 001da84e  mov v0.16b, v8.16b
0x0666CBF8: 00013fd6  blr x8
0x0666CBFC: e00315aa  mov x0, x21
0x0666CC00: cafeff97  bl #0x666c728
0x0666CC04: 740100b4  cbz x20, #0x666cc30
0x0666CC08: 400100b4  cbz x0, #0x666cc30
0x0666CC0C: 820a40f9  ldr x2, [x20, #0x10]
0x0666CC10: e10313aa  mov x1, x19
0x0666CC14: f44f43a9  ldp x20, x19, [sp, #0x30]
0x0666CC18: f65742a9  ldp x22, x21, [sp, #0x20]
0x0666CC1C: f85f41a9  ldp x24, x23, [sp, #0x10]
0x0666CC20: fe0740f9  ldr x30, [sp, #8]
0x0666CC24: e3031faa  mov x3, xzr
0x0666CC28: e80744fc  ldr d8, [sp], #0x40
0x0666CC2C: d7f9f917  b #0x64eb388
0x0666CC30: 1f502c97  bl #0x3180cac

; RVA 0x666CC34 | public void .ctor() { }
; bytes=72 sha256=9354de1da7e9570eaaf42d1398377d65415eca341588d2c3268df1bc859b502a status=arm64_complete_bound indexed_start=True
0x0666CC34: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0666CC38: f44f01a9  stp x20, x19, [sp, #0x10]
0x0666CC3C: f4b50090  adrp x20, #0x7d28000
0x0666CC40: f5840090  adrp x21, #0x7708000
0x0666CC44: 88ee4339  ldrb w8, [x20, #0xfb]
0x0666CC48: b51a40f9  ldr x21, [x21, #0x30]
0x0666CC4C: f30300aa  mov x19, x0
0x0666CC50: c8000037  tbnz w8, #0, #0x666cc68
0x0666CC54: e0840090  adrp x0, #0x7708000
0x0666CC58: 001840f9  ldr x0, [x0, #0x30]
0x0666CC5C: 6f4f2c97  bl #0x3180a18
0x0666CC60: 28008052  movz w8, #0x1
0x0666CC64: 88ee0339  strb w8, [x20, #0xfb]
0x0666CC68: a10240f9  ldr x1, [x21]
0x0666CC6C: e00313aa  mov x0, x19
0x0666CC70: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0666CC74: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0666CC78: 48617b17  b #0x4545198

