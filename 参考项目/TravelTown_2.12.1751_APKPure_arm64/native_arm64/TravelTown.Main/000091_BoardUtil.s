; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 91 MergeEngine.Util.BoardUtil
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x5FE7918 | public static bool AnyItemsCanBeProduced(IEntityManager entityManager) { }
; bytes=268 sha256=5e37ec454ac2227460df8d4b44ecfb6fbee5b23aa57e773c5567ed4c1a3cbfc9 status=arm64_complete_bound indexed_start=True
0x05FE7918: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x05FE791C: f65701a9  stp x22, x21, [sp, #0x10]
0x05FE7920: f44f02a9  stp x20, x19, [sp, #0x20]
0x05FE7924: f4e90090  adrp x20, #0x7d23000
0x05FE7928: 36b700d0  adrp x22, #0x76cd000
0x05FE792C: 88525839  ldrb w8, [x20, #0x614]
0x05FE7930: d6a643f9  ldr x22, [x22, #0x748]
0x05FE7934: f30300aa  mov x19, x0
0x05FE7938: e8010037  tbnz w8, #0, #0x5fe7974
0x05FE793C: 20b700d0  adrp x0, #0x76cd000
0x05FE7940: 00a843f9  ldr x0, [x0, #0x750]
0x05FE7944: 35644697  bl #0x3180a18
0x05FE7948: 20b700d0  adrp x0, #0x76cd000
0x05FE794C: 00ac43f9  ldr x0, [x0, #0x758]
0x05FE7950: 32644697  bl #0x3180a18
0x05FE7954: 20b700d0  adrp x0, #0x76cd000
0x05FE7958: 00b043f9  ldr x0, [x0, #0x760]
0x05FE795C: 2f644697  bl #0x3180a18
0x05FE7960: 20b700d0  adrp x0, #0x76cd000
0x05FE7964: 00a443f9  ldr x0, [x0, #0x748]
0x05FE7968: 2c644697  bl #0x3180a18
0x05FE796C: 28008052  movz w8, #0x1
0x05FE7970: 88521839  strb w8, [x20, #0x614]
0x05FE7974: e00313aa  mov x0, x19
0x05FE7978: 2b000094  bl #0x5fe7a24
0x05FE797C: c80240f9  ldr x8, [x22]
0x05FE7980: f30300aa  mov x19, x0
0x05FE7984: 09e140b9  ldr w9, [x8, #0xe0]
0x05FE7988: 89000035  cbnz w9, #0x5fe7998
0x05FE798C: e00308aa  mov x0, x8
0x05FE7990: 7f644697  bl #0x3180b8c
0x05FE7994: c80240f9  ldr x8, [x22]
0x05FE7998: 095d40f9  ldr x9, [x8, #0xb8]
0x05FE799C: 37b700d0  adrp x23, #0x76cd000
0x05FE79A0: 340540f9  ldr x20, [x9, #8]
0x05FE79A4: f7aa43f9  ldr x23, [x23, #0x750]
0x05FE79A8: 140300b5  cbnz x20, #0x5fe7a08
0x05FE79AC: 09e140b9  ldr w9, [x8, #0xe0]
0x05FE79B0: 89000035  cbnz w9, #0x5fe79c0
0x05FE79B4: e00308aa  mov x0, x8
0x05FE79B8: 75644697  bl #0x3180b8c
0x05FE79BC: c80240f9  ldr x8, [x22]
0x05FE79C0: 29b700d0  adrp x9, #0x76cd000
0x05FE79C4: 085d40f9  ldr x8, [x8, #0xb8]
0x05FE79C8: 29ad43f9  ldr x9, [x9, #0x758]
0x05FE79CC: 150140f9  ldr x21, [x8]
0x05FE79D0: 200140f9  ldr x0, [x9]
0x05FE79D4: b3644697  bl #0x3180ca0
0x05FE79D8: 28b700d0  adrp x8, #0x76cd000
0x05FE79DC: 08b143f9  ldr x8, [x8, #0x760]
0x05FE79E0: e10315aa  mov x1, x21
0x05FE79E4: e3031faa  mov x3, xzr
0x05FE79E8: f40300aa  mov x20, x0
0x05FE79EC: 020140f9  ldr x2, [x8]
0x05FE79F0: 73b9c997  bl #0x5255fbc
0x05FE79F4: c80240f9  ldr x8, [x22]
0x05FE79F8: e10314aa  mov x1, x20
0x05FE79FC: 005d40f9  ldr x0, [x8, #0xb8]
0x05FE7A00: 148c00f8  str x20, [x0, #8]!
0x05FE7A04: f0634697  bl #0x31809c4
0x05FE7A08: e20240f9  ldr x2, [x23]
0x05FE7A0C: e00313aa  mov x0, x19
0x05FE7A10: e10314aa  mov x1, x20
0x05FE7A14: f44f42a9  ldp x20, x19, [sp, #0x20]
0x05FE7A18: f65741a9  ldp x22, x21, [sp, #0x10]
0x05FE7A1C: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x05FE7A20: 7c0e7117  b #0x3c2b410

; RVA 0x5FE7BF0 | public static ITimeCycleComponent GetProducerThatCanProduce(IEntityManager entityManager) { }
; bytes=268 sha256=7866f1021fe1ad30822e8e4bc2ca4419976f49065a86e40b699d8d273c9b9cf5 status=arm64_complete_bound indexed_start=True
0x05FE7BF0: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x05FE7BF4: f65701a9  stp x22, x21, [sp, #0x10]
0x05FE7BF8: f44f02a9  stp x20, x19, [sp, #0x20]
0x05FE7BFC: f4e90090  adrp x20, #0x7d23000
0x05FE7C00: 36b700d0  adrp x22, #0x76cd000
0x05FE7C04: 88565839  ldrb w8, [x20, #0x615]
0x05FE7C08: d6a643f9  ldr x22, [x22, #0x748]
0x05FE7C0C: f30300aa  mov x19, x0
0x05FE7C10: e8010037  tbnz w8, #0, #0x5fe7c4c
0x05FE7C14: 20b700d0  adrp x0, #0x76cd000
0x05FE7C18: 00c443f9  ldr x0, [x0, #0x788]
0x05FE7C1C: 7f634697  bl #0x3180a18
0x05FE7C20: 20b700d0  adrp x0, #0x76cd000
0x05FE7C24: 00ac43f9  ldr x0, [x0, #0x758]
0x05FE7C28: 7c634697  bl #0x3180a18
0x05FE7C2C: 20b700d0  adrp x0, #0x76cd000
0x05FE7C30: 00c843f9  ldr x0, [x0, #0x790]
0x05FE7C34: 79634697  bl #0x3180a18
0x05FE7C38: 20b700d0  adrp x0, #0x76cd000
0x05FE7C3C: 00a443f9  ldr x0, [x0, #0x748]
0x05FE7C40: 76634697  bl #0x3180a18
0x05FE7C44: 28008052  movz w8, #0x1
0x05FE7C48: 88561839  strb w8, [x20, #0x615]
0x05FE7C4C: e00313aa  mov x0, x19
0x05FE7C50: 75ffff97  bl #0x5fe7a24
0x05FE7C54: c80240f9  ldr x8, [x22]
0x05FE7C58: f30300aa  mov x19, x0
0x05FE7C5C: 09e140b9  ldr w9, [x8, #0xe0]
0x05FE7C60: 89000035  cbnz w9, #0x5fe7c70
0x05FE7C64: e00308aa  mov x0, x8
0x05FE7C68: c9634697  bl #0x3180b8c
0x05FE7C6C: c80240f9  ldr x8, [x22]
0x05FE7C70: 095d40f9  ldr x9, [x8, #0xb8]
0x05FE7C74: 37b700d0  adrp x23, #0x76cd000
0x05FE7C78: 340940f9  ldr x20, [x9, #0x10]
0x05FE7C7C: f7c643f9  ldr x23, [x23, #0x788]
0x05FE7C80: 140300b5  cbnz x20, #0x5fe7ce0
0x05FE7C84: 09e140b9  ldr w9, [x8, #0xe0]
0x05FE7C88: 89000035  cbnz w9, #0x5fe7c98
0x05FE7C8C: e00308aa  mov x0, x8
0x05FE7C90: bf634697  bl #0x3180b8c
0x05FE7C94: c80240f9  ldr x8, [x22]
0x05FE7C98: 29b700d0  adrp x9, #0x76cd000
0x05FE7C9C: 085d40f9  ldr x8, [x8, #0xb8]
0x05FE7CA0: 29ad43f9  ldr x9, [x9, #0x758]
0x05FE7CA4: 150140f9  ldr x21, [x8]
0x05FE7CA8: 200140f9  ldr x0, [x9]
0x05FE7CAC: fd634697  bl #0x3180ca0
0x05FE7CB0: 28b700d0  adrp x8, #0x76cd000
0x05FE7CB4: 08c943f9  ldr x8, [x8, #0x790]
0x05FE7CB8: e10315aa  mov x1, x21
0x05FE7CBC: e3031faa  mov x3, xzr
0x05FE7CC0: f40300aa  mov x20, x0
0x05FE7CC4: 020140f9  ldr x2, [x8]
0x05FE7CC8: bdb8c997  bl #0x5255fbc
0x05FE7CCC: c80240f9  ldr x8, [x22]
0x05FE7CD0: e10314aa  mov x1, x20
0x05FE7CD4: 005d40f9  ldr x0, [x8, #0xb8]
0x05FE7CD8: 140c01f8  str x20, [x0, #0x10]!
0x05FE7CDC: 3a634697  bl #0x31809c4
0x05FE7CE0: e20240f9  ldr x2, [x23]
0x05FE7CE4: e00313aa  mov x0, x19
0x05FE7CE8: e10314aa  mov x1, x20
0x05FE7CEC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x05FE7CF0: f65741a9  ldp x22, x21, [sp, #0x10]
0x05FE7CF4: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x05FE7CF8: 0e757117  b #0x3c45130

; RVA 0x5FE7CFC | public static bool HasUnmergedProducersOnBoard(IEntityManager entityManager) { }
; bytes=460 sha256=6d8083b8de585386d3a8352e49e40128b01c580e62c4876909242d50ba5424f4 status=arm64_complete_bound indexed_start=True
0x05FE7CFC: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x05FE7D00: f65701a9  stp x22, x21, [sp, #0x10]
0x05FE7D04: f44f02a9  stp x20, x19, [sp, #0x20]
0x05FE7D08: f4e90090  adrp x20, #0x7d23000
0x05FE7D0C: 36b700d0  adrp x22, #0x76cd000
0x05FE7D10: 885a5839  ldrb w8, [x20, #0x616]
0x05FE7D14: d6a643f9  ldr x22, [x22, #0x748]
0x05FE7D18: f30300aa  mov x19, x0
0x05FE7D1C: 08030037  tbnz w8, #0, #0x5fe7d7c
0x05FE7D20: 20b700d0  adrp x0, #0x76cd000
0x05FE7D24: 00cc43f9  ldr x0, [x0, #0x798]
0x05FE7D28: 3c634697  bl #0x3180a18
0x05FE7D2C: 20b700d0  adrp x0, #0x76cd000
0x05FE7D30: 00d043f9  ldr x0, [x0, #0x7a0]
0x05FE7D34: 39634697  bl #0x3180a18
0x05FE7D38: 20b700d0  adrp x0, #0x76cd000
0x05FE7D3C: 00d443f9  ldr x0, [x0, #0x7a8]
0x05FE7D40: 36634697  bl #0x3180a18
0x05FE7D44: 20b700d0  adrp x0, #0x76cd000
0x05FE7D48: 00d843f9  ldr x0, [x0, #0x7b0]
0x05FE7D4C: 33634697  bl #0x3180a18
0x05FE7D50: 20b700d0  adrp x0, #0x76cd000
0x05FE7D54: 00dc43f9  ldr x0, [x0, #0x7b8]
0x05FE7D58: 30634697  bl #0x3180a18
0x05FE7D5C: 20b700d0  adrp x0, #0x76cd000
0x05FE7D60: 00e043f9  ldr x0, [x0, #0x7c0]
0x05FE7D64: 2d634697  bl #0x3180a18
0x05FE7D68: 20b700d0  adrp x0, #0x76cd000
0x05FE7D6C: 00a443f9  ldr x0, [x0, #0x748]
0x05FE7D70: 2a634697  bl #0x3180a18
0x05FE7D74: 28008052  movz w8, #0x1
0x05FE7D78: 885a1839  strb w8, [x20, #0x616]
0x05FE7D7C: e00313aa  mov x0, x19
0x05FE7D80: 29ffff97  bl #0x5fe7a24
0x05FE7D84: c80240f9  ldr x8, [x22]
0x05FE7D88: f30300aa  mov x19, x0
0x05FE7D8C: 09e140b9  ldr w9, [x8, #0xe0]
0x05FE7D90: 89000035  cbnz w9, #0x5fe7da0
0x05FE7D94: e00308aa  mov x0, x8
0x05FE7D98: 7d634697  bl #0x3180b8c
0x05FE7D9C: c80240f9  ldr x8, [x22]
0x05FE7DA0: 095d40f9  ldr x9, [x8, #0xb8]
0x05FE7DA4: 37b700d0  adrp x23, #0x76cd000
0x05FE7DA8: 340d40f9  ldr x20, [x9, #0x18]
0x05FE7DAC: f7d243f9  ldr x23, [x23, #0x7a0]
0x05FE7DB0: 140300b5  cbnz x20, #0x5fe7e10
0x05FE7DB4: 09e140b9  ldr w9, [x8, #0xe0]
0x05FE7DB8: 89000035  cbnz w9, #0x5fe7dc8
0x05FE7DBC: e00308aa  mov x0, x8
0x05FE7DC0: 73634697  bl #0x3180b8c
0x05FE7DC4: c80240f9  ldr x8, [x22]
0x05FE7DC8: 29b700d0  adrp x9, #0x76cd000
0x05FE7DCC: 085d40f9  ldr x8, [x8, #0xb8]
0x05FE7DD0: 29d943f9  ldr x9, [x9, #0x7b0]
0x05FE7DD4: 150140f9  ldr x21, [x8]
0x05FE7DD8: 200140f9  ldr x0, [x9]
0x05FE7DDC: b1634697  bl #0x3180ca0
0x05FE7DE0: 28b700d0  adrp x8, #0x76cd000
0x05FE7DE4: 08dd43f9  ldr x8, [x8, #0x7b8]
0x05FE7DE8: e10315aa  mov x1, x21
0x05FE7DEC: e3031faa  mov x3, xzr
0x05FE7DF0: f40300aa  mov x20, x0
0x05FE7DF4: 020140f9  ldr x2, [x8]
0x05FE7DF8: f0bac997  bl #0x52569b8
0x05FE7DFC: c80240f9  ldr x8, [x22]
0x05FE7E00: e10314aa  mov x1, x20
0x05FE7E04: 005d40f9  ldr x0, [x8, #0xb8]
0x05FE7E08: 148c01f8  str x20, [x0, #0x18]!
0x05FE7E0C: ee624697  bl #0x31809c4
0x05FE7E10: e20240f9  ldr x2, [x23]
0x05FE7E14: e00313aa  mov x0, x19
0x05FE7E18: e10314aa  mov x1, x20
0x05FE7E1C: 59777197  bl #0x3c45b80
0x05FE7E20: c80240f9  ldr x8, [x22]
0x05FE7E24: f30300aa  mov x19, x0
0x05FE7E28: 09e140b9  ldr w9, [x8, #0xe0]
0x05FE7E2C: 89000035  cbnz w9, #0x5fe7e3c
0x05FE7E30: e00308aa  mov x0, x8
0x05FE7E34: 56634697  bl #0x3180b8c
0x05FE7E38: c80240f9  ldr x8, [x22]
0x05FE7E3C: 095d40f9  ldr x9, [x8, #0xb8]
0x05FE7E40: 37b700d0  adrp x23, #0x76cd000
0x05FE7E44: 341140f9  ldr x20, [x9, #0x20]
0x05FE7E48: f7ce43f9  ldr x23, [x23, #0x798]
0x05FE7E4C: 140300b5  cbnz x20, #0x5fe7eac
0x05FE7E50: 09e140b9  ldr w9, [x8, #0xe0]
0x05FE7E54: 89000035  cbnz w9, #0x5fe7e64
0x05FE7E58: e00308aa  mov x0, x8
0x05FE7E5C: 4c634697  bl #0x3180b8c
0x05FE7E60: c80240f9  ldr x8, [x22]
0x05FE7E64: 29b700d0  adrp x9, #0x76cd000
0x05FE7E68: 085d40f9  ldr x8, [x8, #0xb8]
0x05FE7E6C: 29d543f9  ldr x9, [x9, #0x7a8]
0x05FE7E70: 150140f9  ldr x21, [x8]
0x05FE7E74: 200140f9  ldr x0, [x9]
0x05FE7E78: 8a634697  bl #0x3180ca0
0x05FE7E7C: 28b700d0  adrp x8, #0x76cd000
0x05FE7E80: 08e143f9  ldr x8, [x8, #0x7c0]
0x05FE7E84: e10315aa  mov x1, x21
0x05FE7E88: e3031faa  mov x3, xzr
0x05FE7E8C: f40300aa  mov x20, x0
0x05FE7E90: 020140f9  ldr x2, [x8]
0x05FE7E94: 4ab8c997  bl #0x5255fbc
0x05FE7E98: c80240f9  ldr x8, [x22]
0x05FE7E9C: e10314aa  mov x1, x20
0x05FE7EA0: 005d40f9  ldr x0, [x8, #0xb8]
0x05FE7EA4: 140c02f8  str x20, [x0, #0x20]!
0x05FE7EA8: c7624697  bl #0x31809c4
0x05FE7EAC: e20240f9  ldr x2, [x23]
0x05FE7EB0: e00313aa  mov x0, x19
0x05FE7EB4: e10314aa  mov x1, x20
0x05FE7EB8: f44f42a9  ldp x20, x19, [sp, #0x20]
0x05FE7EBC: f65741a9  ldp x22, x21, [sp, #0x10]
0x05FE7EC0: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x05FE7EC4: 530d7117  b #0x3c2b410

; RVA 0x5FE7EC8 | public static bool HasToolsOnBoard(IEntityManager entityManager) { }
; bytes=412 sha256=a105e9c10f62f1083fbfda63bf5fd34c2584e54ac02496a5c668f788f3bac168 status=arm64_complete_bound indexed_start=True
0x05FE7EC8: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x05FE7ECC: f65701a9  stp x22, x21, [sp, #0x10]
0x05FE7ED0: f44f02a9  stp x20, x19, [sp, #0x20]
0x05FE7ED4: f4e90090  adrp x20, #0x7d23000
0x05FE7ED8: 885e5839  ldrb w8, [x20, #0x617]
0x05FE7EDC: f30300aa  mov x19, x0
0x05FE7EE0: 48020037  tbnz w8, #0, #0x5fe7f28
0x05FE7EE4: 20b700d0  adrp x0, #0x76cd000
0x05FE7EE8: 00e443f9  ldr x0, [x0, #0x7c8]
0x05FE7EEC: cb624697  bl #0x3180a18
0x05FE7EF0: 20b700d0  adrp x0, #0x76cd000
0x05FE7EF4: 00e843f9  ldr x0, [x0, #0x7d0]
0x05FE7EF8: c8624697  bl #0x3180a18
0x05FE7EFC: 20b700d0  adrp x0, #0x76cd000
0x05FE7F00: 00ec43f9  ldr x0, [x0, #0x7d8]
0x05FE7F04: c5624697  bl #0x3180a18
0x05FE7F08: 20b700d0  adrp x0, #0x76cd000
0x05FE7F0C: 00f043f9  ldr x0, [x0, #0x7e0]
0x05FE7F10: c2624697  bl #0x3180a18
0x05FE7F14: 20b700d0  adrp x0, #0x76cd000
0x05FE7F18: 00a443f9  ldr x0, [x0, #0x748]
0x05FE7F1C: bf624697  bl #0x3180a18
0x05FE7F20: 28008052  movz w8, #0x1
0x05FE7F24: 885e1839  strb w8, [x20, #0x617]
0x05FE7F28: d30900b4  cbz x19, #0x5fe8060
0x05FE7F2C: 29b700d0  adrp x9, #0x76cd000
0x05FE7F30: 29ed43f9  ldr x9, [x9, #0x7d8]
0x05FE7F34: 680240f9  ldr x8, [x19]
0x05FE7F38: 340140f9  ldr x20, [x9]
0x05FE7F3C: 095d4279  ldrh w9, [x8, #0x12e]
0x05FE7F40: 811240f9  ldr x1, [x20, #0x20]
0x05FE7F44: 82a24079  ldrh w2, [x20, #0x50]
0x05FE7F48: 290100b4  cbz x9, #0x5fe7f6c
0x05FE7F4C: 0a5940f9  ldr x10, [x8, #0xb0]
0x05FE7F50: 4a210091  add x10, x10, #8
0x05FE7F54: 4b815ff8  ldur x11, [x10, #-8]
0x05FE7F58: 7f0101eb  cmp x11, x1
0x05FE7F5C: e0000054  b.eq #0x5fe7f78
0x05FE7F60: 290500f1  subs x9, x9, #1
0x05FE7F64: 4a410091  add x10, x10, #0x10
0x05FE7F68: 61ffff54  b.ne #0x5fe7f54
0x05FE7F6C: e00313aa  mov x0, x19
0x05FE7F70: e8ba4597  bl #0x3156b10
0x05FE7F74: 05000014  b #0x5fe7f88
0x05FE7F78: 490140b9  ldr w9, [x10]
0x05FE7F7C: 2901020b  add w9, w9, w2
0x05FE7F80: 08d1298b  add x8, x8, w9, sxtw #4
0x05FE7F84: 00e10491  add x0, x8, #0x138
0x05FE7F88: 000440f9  ldr x0, [x0, #8]
0x05FE7F8C: e10314aa  mov x1, x20
0x05FE7F90: fe624697  bl #0x3180b88
0x05FE7F94: 080440f9  ldr x8, [x0, #8]
0x05FE7F98: e10300aa  mov x1, x0
0x05FE7F9C: e00313aa  mov x0, x19
0x05FE7FA0: 00013fd6  blr x8
0x05FE7FA4: 600500b4  cbz x0, #0x5fe8050
0x05FE7FA8: 36b700d0  adrp x22, #0x76cd000
0x05FE7FAC: d6a643f9  ldr x22, [x22, #0x748]
0x05FE7FB0: f30300aa  mov x19, x0
0x05FE7FB4: c00240f9  ldr x0, [x22]
0x05FE7FB8: 08e040b9  ldr w8, [x0, #0xe0]
0x05FE7FBC: 68000035  cbnz w8, #0x5fe7fc8
0x05FE7FC0: f3624697  bl #0x3180b8c
0x05FE7FC4: c00240f9  ldr x0, [x22]
0x05FE7FC8: 085c40f9  ldr x8, [x0, #0xb8]
0x05FE7FCC: 37b700d0  adrp x23, #0x76cd000
0x05FE7FD0: 141540f9  ldr x20, [x8, #0x28]
0x05FE7FD4: f7e643f9  ldr x23, [x23, #0x7c8]
0x05FE7FD8: f40200b5  cbnz x20, #0x5fe8034
0x05FE7FDC: 08e040b9  ldr w8, [x0, #0xe0]
0x05FE7FE0: 68000035  cbnz w8, #0x5fe7fec
0x05FE7FE4: ea624697  bl #0x3180b8c
0x05FE7FE8: c00240f9  ldr x0, [x22]
0x05FE7FEC: 29b700d0  adrp x9, #0x76cd000
0x05FE7FF0: 085c40f9  ldr x8, [x0, #0xb8]
0x05FE7FF4: 29e943f9  ldr x9, [x9, #0x7d0]
0x05FE7FF8: 150140f9  ldr x21, [x8]
0x05FE7FFC: 200140f9  ldr x0, [x9]
0x05FE8000: 28634697  bl #0x3180ca0
0x05FE8004: 28b700b0  adrp x8, #0x76cd000
0x05FE8008: 08f143f9  ldr x8, [x8, #0x7e0]
0x05FE800C: e10315aa  mov x1, x21
0x05FE8010: e3031faa  mov x3, xzr
0x05FE8014: f40300aa  mov x20, x0
0x05FE8018: 020140f9  ldr x2, [x8]
0x05FE801C: e8b7c997  bl #0x5255fbc
0x05FE8020: c80240f9  ldr x8, [x22]
0x05FE8024: e10314aa  mov x1, x20
0x05FE8028: 005d40f9  ldr x0, [x8, #0xb8]
0x05FE802C: 148c02f8  str x20, [x0, #0x28]!
0x05FE8030: 65624697  bl #0x31809c4
0x05FE8034: e20240f9  ldr x2, [x23]
0x05FE8038: e00313aa  mov x0, x19
0x05FE803C: e10314aa  mov x1, x20
0x05FE8040: f44f42a9  ldp x20, x19, [sp, #0x20]
0x05FE8044: f65741a9  ldp x22, x21, [sp, #0x10]
0x05FE8048: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x05FE804C: f10c7117  b #0x3c2b410
0x05FE8050: f44f42a9  ldp x20, x19, [sp, #0x20]
0x05FE8054: f65741a9  ldp x22, x21, [sp, #0x10]
0x05FE8058: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x05FE805C: c0035fd6  ret
0x05FE8060: 13634697  bl #0x3180cac

; RVA 0x5FE8064 | public static CollectableComponent GetFirstToolOnBoard(IEntityManager entityManager) { }
; bytes=412 sha256=623be3c7a6207a8edb226822868744bf61606fa0eb90078ad11b4e78b52b20b3 status=arm64_complete_bound indexed_start=True
0x05FE8064: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x05FE8068: f65701a9  stp x22, x21, [sp, #0x10]
0x05FE806C: f44f02a9  stp x20, x19, [sp, #0x20]
0x05FE8070: d4e900f0  adrp x20, #0x7d23000
0x05FE8074: 88625839  ldrb w8, [x20, #0x618]
0x05FE8078: f30300aa  mov x19, x0
0x05FE807C: 48020037  tbnz w8, #0, #0x5fe80c4
0x05FE8080: 20b700b0  adrp x0, #0x76cd000
0x05FE8084: 00f443f9  ldr x0, [x0, #0x7e8]
0x05FE8088: 64624697  bl #0x3180a18
0x05FE808C: 20b700b0  adrp x0, #0x76cd000
0x05FE8090: 00e843f9  ldr x0, [x0, #0x7d0]
0x05FE8094: 61624697  bl #0x3180a18
0x05FE8098: 20b700b0  adrp x0, #0x76cd000
0x05FE809C: 00ec43f9  ldr x0, [x0, #0x7d8]
0x05FE80A0: 5e624697  bl #0x3180a18
0x05FE80A4: 20b700b0  adrp x0, #0x76cd000
0x05FE80A8: 00f843f9  ldr x0, [x0, #0x7f0]
0x05FE80AC: 5b624697  bl #0x3180a18
0x05FE80B0: 20b700b0  adrp x0, #0x76cd000
0x05FE80B4: 00a443f9  ldr x0, [x0, #0x748]
0x05FE80B8: 58624697  bl #0x3180a18
0x05FE80BC: 28008052  movz w8, #0x1
0x05FE80C0: 88621839  strb w8, [x20, #0x618]
0x05FE80C4: d30900b4  cbz x19, #0x5fe81fc
0x05FE80C8: 29b700b0  adrp x9, #0x76cd000
0x05FE80CC: 29ed43f9  ldr x9, [x9, #0x7d8]
0x05FE80D0: 680240f9  ldr x8, [x19]
0x05FE80D4: 340140f9  ldr x20, [x9]
0x05FE80D8: 095d4279  ldrh w9, [x8, #0x12e]
0x05FE80DC: 811240f9  ldr x1, [x20, #0x20]
0x05FE80E0: 82a24079  ldrh w2, [x20, #0x50]
0x05FE80E4: 290100b4  cbz x9, #0x5fe8108
0x05FE80E8: 0a5940f9  ldr x10, [x8, #0xb0]
0x05FE80EC: 4a210091  add x10, x10, #8
0x05FE80F0: 4b815ff8  ldur x11, [x10, #-8]
0x05FE80F4: 7f0101eb  cmp x11, x1
0x05FE80F8: e0000054  b.eq #0x5fe8114
0x05FE80FC: 290500f1  subs x9, x9, #1
0x05FE8100: 4a410091  add x10, x10, #0x10
0x05FE8104: 61ffff54  b.ne #0x5fe80f0
0x05FE8108: e00313aa  mov x0, x19
0x05FE810C: 81ba4597  bl #0x3156b10
0x05FE8110: 05000014  b #0x5fe8124
0x05FE8114: 490140b9  ldr w9, [x10]
0x05FE8118: 2901020b  add w9, w9, w2
0x05FE811C: 08d1298b  add x8, x8, w9, sxtw #4
0x05FE8120: 00e10491  add x0, x8, #0x138
0x05FE8124: 000440f9  ldr x0, [x0, #8]
0x05FE8128: e10314aa  mov x1, x20
0x05FE812C: 97624697  bl #0x3180b88
0x05FE8130: 080440f9  ldr x8, [x0, #8]
0x05FE8134: e10300aa  mov x1, x0
0x05FE8138: e00313aa  mov x0, x19
0x05FE813C: 00013fd6  blr x8
0x05FE8140: 600500b4  cbz x0, #0x5fe81ec
0x05FE8144: 36b700b0  adrp x22, #0x76cd000
0x05FE8148: d6a643f9  ldr x22, [x22, #0x748]
0x05FE814C: f30300aa  mov x19, x0
0x05FE8150: c00240f9  ldr x0, [x22]
0x05FE8154: 08e040b9  ldr w8, [x0, #0xe0]
0x05FE8158: 68000035  cbnz w8, #0x5fe8164
0x05FE815C: 8c624697  bl #0x3180b8c
0x05FE8160: c00240f9  ldr x0, [x22]
0x05FE8164: 085c40f9  ldr x8, [x0, #0xb8]
0x05FE8168: 37b700b0  adrp x23, #0x76cd000
0x05FE816C: 141940f9  ldr x20, [x8, #0x30]
0x05FE8170: f7f643f9  ldr x23, [x23, #0x7e8]
0x05FE8174: f40200b5  cbnz x20, #0x5fe81d0
0x05FE8178: 08e040b9  ldr w8, [x0, #0xe0]
0x05FE817C: 68000035  cbnz w8, #0x5fe8188
0x05FE8180: 83624697  bl #0x3180b8c
0x05FE8184: c00240f9  ldr x0, [x22]
0x05FE8188: 29b700b0  adrp x9, #0x76cd000
0x05FE818C: 085c40f9  ldr x8, [x0, #0xb8]
0x05FE8190: 29e943f9  ldr x9, [x9, #0x7d0]
0x05FE8194: 150140f9  ldr x21, [x8]
0x05FE8198: 200140f9  ldr x0, [x9]
0x05FE819C: c1624697  bl #0x3180ca0
0x05FE81A0: 28b700b0  adrp x8, #0x76cd000
0x05FE81A4: 08f943f9  ldr x8, [x8, #0x7f0]
0x05FE81A8: e10315aa  mov x1, x21
0x05FE81AC: e3031faa  mov x3, xzr
0x05FE81B0: f40300aa  mov x20, x0
0x05FE81B4: 020140f9  ldr x2, [x8]
0x05FE81B8: 81b7c997  bl #0x5255fbc
0x05FE81BC: c80240f9  ldr x8, [x22]
0x05FE81C0: e10314aa  mov x1, x20
0x05FE81C4: 005d40f9  ldr x0, [x8, #0xb8]
0x05FE81C8: 140c03f8  str x20, [x0, #0x30]!
0x05FE81CC: fe614697  bl #0x31809c4
0x05FE81D0: e20240f9  ldr x2, [x23]
0x05FE81D4: e00313aa  mov x0, x19
0x05FE81D8: e10314aa  mov x1, x20
0x05FE81DC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x05FE81E0: f65741a9  ldp x22, x21, [sp, #0x10]
0x05FE81E4: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x05FE81E8: d2737117  b #0x3c45130
0x05FE81EC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x05FE81F0: f65741a9  ldp x22, x21, [sp, #0x10]
0x05FE81F4: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x05FE81F8: c0035fd6  ret
0x05FE81FC: ac624697  bl #0x3180cac

; RVA 0x5FE7A24 | private static IEnumerable<ITimeCycleComponent> GetTimeCycleComponents(IEntityManager entityManager) { }
; bytes=460 sha256=90a0548ec61b8d29e16f519f28b37223600ca573fa9b3c8582103dc34c4bfda8 status=arm64_complete_bound indexed_start=True
0x05FE7A24: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x05FE7A28: f65701a9  stp x22, x21, [sp, #0x10]
0x05FE7A2C: f44f02a9  stp x20, x19, [sp, #0x20]
0x05FE7A30: f4e90090  adrp x20, #0x7d23000
0x05FE7A34: 36b700d0  adrp x22, #0x76cd000
0x05FE7A38: 88665839  ldrb w8, [x20, #0x619]
0x05FE7A3C: d6a643f9  ldr x22, [x22, #0x748]
0x05FE7A40: f30300aa  mov x19, x0
0x05FE7A44: 08030037  tbnz w8, #0, #0x5fe7aa4
0x05FE7A48: 20b700d0  adrp x0, #0x76cd000
0x05FE7A4C: 00b443f9  ldr x0, [x0, #0x768]
0x05FE7A50: f2634697  bl #0x3180a18
0x05FE7A54: c0b400b0  adrp x0, #0x7680000
0x05FE7A58: 002c42f9  ldr x0, [x0, #0x458]
0x05FE7A5C: ef634697  bl #0x3180a18
0x05FE7A60: c0b40090  adrp x0, #0x767f000
0x05FE7A64: 008844f9  ldr x0, [x0, #0x910]
0x05FE7A68: ec634697  bl #0x3180a18
0x05FE7A6C: 20b700d0  adrp x0, #0x76cd000
0x05FE7A70: 00b843f9  ldr x0, [x0, #0x770]
0x05FE7A74: e9634697  bl #0x3180a18
0x05FE7A78: 20b700d0  adrp x0, #0x76cd000
0x05FE7A7C: 00bc43f9  ldr x0, [x0, #0x778]
0x05FE7A80: e6634697  bl #0x3180a18
0x05FE7A84: 20b700d0  adrp x0, #0x76cd000
0x05FE7A88: 00c043f9  ldr x0, [x0, #0x780]
0x05FE7A8C: e3634697  bl #0x3180a18
0x05FE7A90: 20b700d0  adrp x0, #0x76cd000
0x05FE7A94: 00a443f9  ldr x0, [x0, #0x748]
0x05FE7A98: e0634697  bl #0x3180a18
0x05FE7A9C: 28008052  movz w8, #0x1
0x05FE7AA0: 88661839  strb w8, [x20, #0x619]
0x05FE7AA4: e00313aa  mov x0, x19
0x05FE7AA8: d6010094  bl #0x5fe8200
0x05FE7AAC: c80240f9  ldr x8, [x22]
0x05FE7AB0: f30300aa  mov x19, x0
0x05FE7AB4: 09e140b9  ldr w9, [x8, #0xe0]
0x05FE7AB8: 89000035  cbnz w9, #0x5fe7ac8
0x05FE7ABC: e00308aa  mov x0, x8
0x05FE7AC0: 33644697  bl #0x3180b8c
0x05FE7AC4: c80240f9  ldr x8, [x22]
0x05FE7AC8: 095d40f9  ldr x9, [x8, #0xb8]
0x05FE7ACC: d7b400b0  adrp x23, #0x7680000
0x05FE7AD0: 341d40f9  ldr x20, [x9, #0x38]
0x05FE7AD4: f72e42f9  ldr x23, [x23, #0x458]
0x05FE7AD8: 140300b5  cbnz x20, #0x5fe7b38
0x05FE7ADC: 09e140b9  ldr w9, [x8, #0xe0]
0x05FE7AE0: 89000035  cbnz w9, #0x5fe7af0
0x05FE7AE4: e00308aa  mov x0, x8
0x05FE7AE8: 29644697  bl #0x3180b8c
0x05FE7AEC: c80240f9  ldr x8, [x22]
0x05FE7AF0: c9b40090  adrp x9, #0x767f000
0x05FE7AF4: 085d40f9  ldr x8, [x8, #0xb8]
0x05FE7AF8: 298944f9  ldr x9, [x9, #0x910]
0x05FE7AFC: 150140f9  ldr x21, [x8]
0x05FE7B00: 200140f9  ldr x0, [x9]
0x05FE7B04: 67644697  bl #0x3180ca0
0x05FE7B08: 28b700d0  adrp x8, #0x76cd000
0x05FE7B0C: 08bd43f9  ldr x8, [x8, #0x778]
0x05FE7B10: e10315aa  mov x1, x21
0x05FE7B14: e3031faa  mov x3, xzr
0x05FE7B18: f40300aa  mov x20, x0
0x05FE7B1C: 020140f9  ldr x2, [x8]
0x05FE7B20: 27b9c997  bl #0x5255fbc
0x05FE7B24: c80240f9  ldr x8, [x22]
0x05FE7B28: e10314aa  mov x1, x20
0x05FE7B2C: 005d40f9  ldr x0, [x8, #0xb8]
0x05FE7B30: 148c03f8  str x20, [x0, #0x38]!
0x05FE7B34: a4634697  bl #0x31809c4
0x05FE7B38: e20240f9  ldr x2, [x23]
0x05FE7B3C: e00313aa  mov x0, x19
0x05FE7B40: e10314aa  mov x1, x20
0x05FE7B44: d97d7297  bl #0x3c872a8
0x05FE7B48: c80240f9  ldr x8, [x22]
0x05FE7B4C: f30300aa  mov x19, x0
0x05FE7B50: 09e140b9  ldr w9, [x8, #0xe0]
0x05FE7B54: 89000035  cbnz w9, #0x5fe7b64
0x05FE7B58: e00308aa  mov x0, x8
0x05FE7B5C: 0c644697  bl #0x3180b8c
0x05FE7B60: c80240f9  ldr x8, [x22]
0x05FE7B64: 095d40f9  ldr x9, [x8, #0xb8]
0x05FE7B68: 37b700d0  adrp x23, #0x76cd000
0x05FE7B6C: 342140f9  ldr x20, [x9, #0x40]
0x05FE7B70: f7b643f9  ldr x23, [x23, #0x768]
0x05FE7B74: 140300b5  cbnz x20, #0x5fe7bd4
0x05FE7B78: 09e140b9  ldr w9, [x8, #0xe0]
0x05FE7B7C: 89000035  cbnz w9, #0x5fe7b8c
0x05FE7B80: e00308aa  mov x0, x8
0x05FE7B84: 02644697  bl #0x3180b8c
0x05FE7B88: c80240f9  ldr x8, [x22]
0x05FE7B8C: 29b700d0  adrp x9, #0x76cd000
0x05FE7B90: 085d40f9  ldr x8, [x8, #0xb8]
0x05FE7B94: 29b943f9  ldr x9, [x9, #0x770]
0x05FE7B98: 150140f9  ldr x21, [x8]
0x05FE7B9C: 200140f9  ldr x0, [x9]
0x05FE7BA0: 40644697  bl #0x3180ca0
0x05FE7BA4: 28b700d0  adrp x8, #0x76cd000
0x05FE7BA8: 08c143f9  ldr x8, [x8, #0x780]
0x05FE7BAC: e10315aa  mov x1, x21
0x05FE7BB0: e3031faa  mov x3, xzr
0x05FE7BB4: f40300aa  mov x20, x0
0x05FE7BB8: 020140f9  ldr x2, [x8]
0x05FE7BBC: 7fbbc997  bl #0x52569b8
0x05FE7BC0: c80240f9  ldr x8, [x22]
0x05FE7BC4: e10314aa  mov x1, x20
0x05FE7BC8: 005d40f9  ldr x0, [x8, #0xb8]
0x05FE7BCC: 140c04f8  str x20, [x0, #0x40]!
0x05FE7BD0: 7d634697  bl #0x31809c4
0x05FE7BD4: e20240f9  ldr x2, [x23]
0x05FE7BD8: e00313aa  mov x0, x19
0x05FE7BDC: e10314aa  mov x1, x20
0x05FE7BE0: f44f42a9  ldp x20, x19, [sp, #0x20]
0x05FE7BE4: f65741a9  ldp x22, x21, [sp, #0x10]
0x05FE7BE8: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x05FE7BEC: 2bae7117  b #0x3c53498

; RVA 0x5FE8200 | public static IEnumerable<PositionComponent> GetUnlockedComponents(IEntityManager entityManager) { }
; bytes=404 sha256=3c6c97b471622938ffaac535ea635f70e36d171a7f2d51f86ba50d2a3076c03a status=arm64_complete_bound indexed_start=True
0x05FE8200: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x05FE8204: f44f01a9  stp x20, x19, [sp, #0x10]
0x05FE8208: d4e900f0  adrp x20, #0x7d23000
0x05FE820C: 886a5839  ldrb w8, [x20, #0x61a]
0x05FE8210: f30300aa  mov x19, x0
0x05FE8214: 48020037  tbnz w8, #0, #0x5fe825c
0x05FE8218: 20b700b0  adrp x0, #0x76cd000
0x05FE821C: 00fc43f9  ldr x0, [x0, #0x7f8]
0x05FE8220: fe614697  bl #0x3180a18
0x05FE8224: 20b700b0  adrp x0, #0x76cd000
0x05FE8228: 000044f9  ldr x0, [x0, #0x800]
0x05FE822C: fb614697  bl #0x3180a18
0x05FE8230: c0b40090  adrp x0, #0x7680000
0x05FE8234: 002c42f9  ldr x0, [x0, #0x458]
0x05FE8238: f8614697  bl #0x3180a18
0x05FE823C: a0b400f0  adrp x0, #0x767f000
0x05FE8240: 008844f9  ldr x0, [x0, #0x910]
0x05FE8244: f5614697  bl #0x3180a18
0x05FE8248: 20b700b0  adrp x0, #0x76cd000
0x05FE824C: 000444f9  ldr x0, [x0, #0x808]
0x05FE8250: f2614697  bl #0x3180a18
0x05FE8254: 28008052  movz w8, #0x1
0x05FE8258: 886a1839  strb w8, [x20, #0x61a]
0x05FE825C: b30900b4  cbz x19, #0x5fe8390
0x05FE8260: 29b700b0  adrp x9, #0x76cd000
0x05FE8264: 290544f9  ldr x9, [x9, #0x808]
0x05FE8268: 680240f9  ldr x8, [x19]
0x05FE826C: 340140f9  ldr x20, [x9]
0x05FE8270: 095d4279  ldrh w9, [x8, #0x12e]
0x05FE8274: 811240f9  ldr x1, [x20, #0x20]
0x05FE8278: 82a24079  ldrh w2, [x20, #0x50]
0x05FE827C: 290100b4  cbz x9, #0x5fe82a0
0x05FE8280: 0a5940f9  ldr x10, [x8, #0xb0]
0x05FE8284: 4a210091  add x10, x10, #8
0x05FE8288: 4b815ff8  ldur x11, [x10, #-8]
0x05FE828C: 7f0101eb  cmp x11, x1
0x05FE8290: e0000054  b.eq #0x5fe82ac
0x05FE8294: 290500f1  subs x9, x9, #1
0x05FE8298: 4a410091  add x10, x10, #0x10
0x05FE829C: 61ffff54  b.ne #0x5fe8288
0x05FE82A0: e00313aa  mov x0, x19
0x05FE82A4: 1bba4597  bl #0x3156b10
0x05FE82A8: 05000014  b #0x5fe82bc
0x05FE82AC: 490140b9  ldr w9, [x10]
0x05FE82B0: 2901020b  add w9, w9, w2
0x05FE82B4: 08d1298b  add x8, x8, w9, sxtw #4
0x05FE82B8: 00e10491  add x0, x8, #0x138
0x05FE82BC: 000440f9  ldr x0, [x0, #8]
0x05FE82C0: e10314aa  mov x1, x20
0x05FE82C4: 31624697  bl #0x3180b88
0x05FE82C8: 080440f9  ldr x8, [x0, #8]
0x05FE82CC: e10300aa  mov x1, x0
0x05FE82D0: e00313aa  mov x0, x19
0x05FE82D4: 00013fd6  blr x8
0x05FE82D8: a00200b4  cbz x0, #0x5fe832c
0x05FE82DC: a8b400f0  adrp x8, #0x767f000
0x05FE82E0: 088944f9  ldr x8, [x8, #0x910]
0x05FE82E4: f30300aa  mov x19, x0
0x05FE82E8: 34b700b0  adrp x20, #0x76cd000
0x05FE82EC: d5b40090  adrp x21, #0x7680000
0x05FE82F0: 000140f9  ldr x0, [x8]
0x05FE82F4: 94fe43f9  ldr x20, [x20, #0x7f8]
0x05FE82F8: b52e42f9  ldr x21, [x21, #0x458]
0x05FE82FC: 69624697  bl #0x3180ca0
0x05FE8300: 820240f9  ldr x2, [x20]
0x05FE8304: e1031faa  mov x1, xzr
0x05FE8308: e3031faa  mov x3, xzr
0x05FE830C: f40300aa  mov x20, x0
0x05FE8310: 2bb7c997  bl #0x5255fbc
0x05FE8314: a20240f9  ldr x2, [x21]
0x05FE8318: e00313aa  mov x0, x19
0x05FE831C: e10314aa  mov x1, x20
0x05FE8320: f44f41a9  ldp x20, x19, [sp, #0x10]
0x05FE8324: fe57c2a8  ldp x30, x21, [sp], #0x20
0x05FE8328: e07b7217  b #0x3c872a8
0x05FE832C: 28b700b0  adrp x8, #0x76cd000
0x05FE8330: 080144f9  ldr x8, [x8, #0x800]
0x05FE8334: 130140f9  ldr x19, [x8]
0x05FE8338: 681e40f9  ldr x8, [x19, #0x38]
0x05FE833C: 880000b5  cbnz x8, #0x5fe834c
0x05FE8340: e00313aa  mov x0, x19
0x05FE8344: 4db94597  bl #0x3156878
0x05FE8348: 681e40f9  ldr x8, [x19, #0x38]
0x05FE834C: 000940f9  ldr x0, [x8, #0x10]
0x05FE8350: 08d44439  ldrb w8, [x0, #0x135]
0x05FE8354: 48000037  tbnz w8, #0, #0x5fe835c
0x05FE8358: 31b94597  bl #0x315681c
0x05FE835C: 08e040b9  ldr w8, [x0, #0xe0]
0x05FE8360: 48000035  cbnz w8, #0x5fe8368
0x05FE8364: 0a624697  bl #0x3180b8c
0x05FE8368: 681e40f9  ldr x8, [x19, #0x38]
0x05FE836C: 000940f9  ldr x0, [x8, #0x10]
0x05FE8370: 08d44439  ldrb w8, [x0, #0x135]
0x05FE8374: 48000037  tbnz w8, #0, #0x5fe837c
0x05FE8378: 29b94597  bl #0x315681c
0x05FE837C: 085c40f9  ldr x8, [x0, #0xb8]
0x05FE8380: f44f41a9  ldp x20, x19, [sp, #0x10]
0x05FE8384: 000140f9  ldr x0, [x8]
0x05FE8388: fe57c2a8  ldp x30, x21, [sp], #0x20
0x05FE838C: c0035fd6  ret
0x05FE8390: 47624697  bl #0x3180cac

; RVA 0x5FE8394 | public static bool AnyItemsCanBeMerged(ISystemManager systemManager) { }
; bytes=204 sha256=e91cd6a5dce6fe655e602f5f082d3ec95d6da5e57d251d8d43c24c58ac08c1a1 status=arm64_complete_bound indexed_start=True
0x05FE8394: fe0f1ef8  str x30, [sp, #-0x20]!
0x05FE8398: f44f01a9  stp x20, x19, [sp, #0x10]
0x05FE839C: d4e900f0  adrp x20, #0x7d23000
0x05FE83A0: 886e5839  ldrb w8, [x20, #0x61b]
0x05FE83A4: f30300aa  mov x19, x0
0x05FE83A8: c8000037  tbnz w8, #0, #0x5fe83c0
0x05FE83AC: 20b700b0  adrp x0, #0x76cd000
0x05FE83B0: 000844f9  ldr x0, [x0, #0x810]
0x05FE83B4: 99614697  bl #0x3180a18
0x05FE83B8: 28008052  movz w8, #0x1
0x05FE83BC: 886e1839  strb w8, [x20, #0x61b]
0x05FE83C0: f30400b4  cbz x19, #0x5fe845c
0x05FE83C4: 29b700b0  adrp x9, #0x76cd000
0x05FE83C8: 290944f9  ldr x9, [x9, #0x810]
0x05FE83CC: 680240f9  ldr x8, [x19]
0x05FE83D0: 340140f9  ldr x20, [x9]
0x05FE83D4: 095d4279  ldrh w9, [x8, #0x12e]
0x05FE83D8: 811240f9  ldr x1, [x20, #0x20]
0x05FE83DC: 82a24079  ldrh w2, [x20, #0x50]
0x05FE83E0: 290100b4  cbz x9, #0x5fe8404
0x05FE83E4: 0a5940f9  ldr x10, [x8, #0xb0]
0x05FE83E8: 4a210091  add x10, x10, #8
0x05FE83EC: 4b815ff8  ldur x11, [x10, #-8]
0x05FE83F0: 7f0101eb  cmp x11, x1
0x05FE83F4: e0000054  b.eq #0x5fe8410
0x05FE83F8: 290500f1  subs x9, x9, #1
0x05FE83FC: 4a410091  add x10, x10, #0x10
0x05FE8400: 61ffff54  b.ne #0x5fe83ec
0x05FE8404: e00313aa  mov x0, x19
0x05FE8408: c2b94597  bl #0x3156b10
0x05FE840C: 05000014  b #0x5fe8420
0x05FE8410: 490140b9  ldr w9, [x10]
0x05FE8414: 2901020b  add w9, w9, w2
0x05FE8418: 08d1298b  add x8, x8, w9, sxtw #4
0x05FE841C: 00e10491  add x0, x8, #0x138
0x05FE8420: 000440f9  ldr x0, [x0, #8]
0x05FE8424: e10314aa  mov x1, x20
0x05FE8428: d8614697  bl #0x3180b88
0x05FE842C: 080440f9  ldr x8, [x0, #8]
0x05FE8430: e10300aa  mov x1, x0
0x05FE8434: e00313aa  mov x0, x19
0x05FE8438: 00013fd6  blr x8
0x05FE843C: 000100b4  cbz x0, #0x5fe845c
0x05FE8440: e1031faa  mov x1, xzr
0x05FE8444: a6c41994  bl #0x66596dc
0x05FE8448: f44f41a9  ldp x20, x19, [sp, #0x10]
0x05FE844C: 1f0000f1  cmp x0, #0
0x05FE8450: e0079f1a  cset w0, ne
0x05FE8454: fe0742f8  ldr x30, [sp], #0x20
0x05FE8458: c0035fd6  ret
0x05FE845C: 14624697  bl #0x3180cac

; RVA 0x5FE8460 | public static bool IsInBounds(BoardItemPosition pos, BoardComponent board) { }
; bytes=64 sha256=68f121dc391d737420c75f1f6c27833379a0ba347a7ef40349875941e0a011ae status=arm64_complete_bound indexed_start=True
0x05FE8460: fe0f1ff8  str x30, [sp, #-0x10]!
0x05FE8464: 08fc60d3  lsr x8, x0, #0x20
0x05FE8468: 0901002a  orr w9, w8, w0
0x05FE846C: 2901f837  tbnz w9, #0x1f, #0x5fe8490
0x05FE8470: 610100b4  cbz x1, #0x5fe849c
0x05FE8474: 292840b9  ldr w9, [x1, #0x28]
0x05FE8478: 3f01006b  cmp w9, w0
0x05FE847C: ad000054  b.le #0x5fe8490
0x05FE8480: 292c40b9  ldr w9, [x1, #0x2c]
0x05FE8484: 3f01086b  cmp w9, w8
0x05FE8488: e0d79f1a  cset w0, gt
0x05FE848C: 02000014  b #0x5fe8494
0x05FE8490: e0031f2a  mov w0, wzr
0x05FE8494: fe0741f8  ldr x30, [sp], #0x10
0x05FE8498: c0035fd6  ret
0x05FE849C: 04624697  bl #0x3180cac

