; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 32809 Merger.MergeBoard.PowerBoost.Commands.PowerBoostInitializeOnEventActivationCommand
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6AD4948 | public override void Execute(PowerBoostInitializeOnEventActivationSignal signal) { }
; bytes=592 sha256=0e29b6afb70503d8af51983dce9c980b64e93fdbbdc5bca821c63c7abfb7b678 status=arm64_complete_bound indexed_start=True
0x06AD4948: fe67bca9  stp x30, x25, [sp, #-0x40]!
0x06AD494C: f85f01a9  stp x24, x23, [sp, #0x10]
0x06AD4950: f65702a9  stp x22, x21, [sp, #0x20]
0x06AD4954: f44f03a9  stp x20, x19, [sp, #0x30]
0x06AD4958: b59200d0  adrp x21, #0x7d2a000
0x06AD495C: a8066b39  ldrb w8, [x21, #0xac1]
0x06AD4960: f40301aa  mov x20, x1
0x06AD4964: f30300aa  mov x19, x0
0x06AD4968: 88010037  tbnz w8, #0, #0x6ad4998
0x06AD496C: e06200f0  adrp x0, #0x7733000
0x06AD4970: 001047f9  ldr x0, [x0, #0xe20]
0x06AD4974: 29b01a97  bl #0x3180a18
0x06AD4978: e06200f0  adrp x0, #0x7733000
0x06AD497C: 006847f9  ldr x0, [x0, #0xed0]
0x06AD4980: 26b01a97  bl #0x3180a18
0x06AD4984: e06200f0  adrp x0, #0x7733000
0x06AD4988: 006c47f9  ldr x0, [x0, #0xed8]
0x06AD498C: 23b01a97  bl #0x3180a18
0x06AD4990: 28008052  movz w8, #0x1
0x06AD4994: a8062b39  strb w8, [x21, #0xac1]
0x06AD4998: f40f00b4  cbz x20, #0x6ad4b94
0x06AD499C: 951240f9  ldr x21, [x20, #0x20]
0x06AD49A0: f50200b4  cbz x21, #0x6ad49fc
0x06AD49A4: 761a40f9  ldr x22, [x19, #0x30]
0x06AD49A8: 760f00b4  cbz x22, #0x6ad4b94
0x06AD49AC: ea6200f0  adrp x10, #0x7733000
0x06AD49B0: 4a1147f9  ldr x10, [x10, #0xe20]
0x06AD49B4: c80240f9  ldr x8, [x22]
0x06AD49B8: 990a40f9  ldr x25, [x20, #0x10]
0x06AD49BC: 985e4329  ldp w24, w23, [x20, #0x18]
0x06AD49C0: 410140f9  ldr x1, [x10]
0x06AD49C4: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD49C8: 290100b4  cbz x9, #0x6ad49ec
0x06AD49CC: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD49D0: 4a210091  add x10, x10, #8
0x06AD49D4: 4b815ff8  ldur x11, [x10, #-8]
0x06AD49D8: 7f0101eb  cmp x11, x1
0x06AD49DC: a0010054  b.eq #0x6ad4a10
0x06AD49E0: 290500f1  subs x9, x9, #1
0x06AD49E4: 4a410091  add x10, x10, #0x10
0x06AD49E8: 61ffff54  b.ne #0x6ad49d4
0x06AD49EC: 62018052  movz w2, #0xb
0x06AD49F0: e00316aa  mov x0, x22
0x06AD49F4: 47081a97  bl #0x3156b10
0x06AD49F8: 0a000014  b #0x6ad4a20
0x06AD49FC: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06AD4A00: f65742a9  ldp x22, x21, [sp, #0x20]
0x06AD4A04: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06AD4A08: fe67c4a8  ldp x30, x25, [sp], #0x40
0x06AD4A0C: c0035fd6  ret
0x06AD4A10: 490140b9  ldr w9, [x10]
0x06AD4A14: 292d0011  add w9, w9, #0xb
0x06AD4A18: 08d1298b  add x8, x8, w9, sxtw #4
0x06AD4A1C: 00e10491  add x0, x8, #0x138
0x06AD4A20: 081440a9  ldp x8, x5, [x0]
0x06AD4A24: e00316aa  mov x0, x22
0x06AD4A28: e10319aa  mov x1, x25
0x06AD4A2C: e203182a  mov w2, w24
0x06AD4A30: e303172a  mov w3, w23
0x06AD4A34: e40315aa  mov x4, x21
0x06AD4A38: 00013fd6  blr x8
0x06AD4A3C: 751e40f9  ldr x21, [x19, #0x38]
0x06AD4A40: b50a00b4  cbz x21, #0x6ad4b94
0x06AD4A44: ea6200f0  adrp x10, #0x7733000
0x06AD4A48: a80240f9  ldr x8, [x21]
0x06AD4A4C: 4a6d47f9  ldr x10, [x10, #0xed8]
0x06AD4A50: 960a40f9  ldr x22, [x20, #0x10]
0x06AD4A54: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD4A58: 410140f9  ldr x1, [x10]
0x06AD4A5C: 290100b4  cbz x9, #0x6ad4a80
0x06AD4A60: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD4A64: 4a210091  add x10, x10, #8
0x06AD4A68: 4b815ff8  ldur x11, [x10, #-8]
0x06AD4A6C: 7f0101eb  cmp x11, x1
0x06AD4A70: 00010054  b.eq #0x6ad4a90
0x06AD4A74: 290500f1  subs x9, x9, #1
0x06AD4A78: 4a410091  add x10, x10, #0x10
0x06AD4A7C: 61ffff54  b.ne #0x6ad4a68
0x06AD4A80: e00315aa  mov x0, x21
0x06AD4A84: e2031f2a  mov w2, wzr
0x06AD4A88: 22081a97  bl #0x3156b10
0x06AD4A8C: 04000014  b #0x6ad4a9c
0x06AD4A90: 490180b9  ldrsw x9, [x10]
0x06AD4A94: 0811098b  add x8, x8, x9, lsl #4
0x06AD4A98: 00e10491  add x0, x8, #0x138
0x06AD4A9C: 080840a9  ldp x8, x2, [x0]
0x06AD4AA0: e00315aa  mov x0, x21
0x06AD4AA4: e10316aa  mov x1, x22
0x06AD4AA8: 00013fd6  blr x8
0x06AD4AAC: 752240f9  ldr x21, [x19, #0x40]
0x06AD4AB0: 350700b4  cbz x21, #0x6ad4b94
0x06AD4AB4: f66200f0  adrp x22, #0x7733000
0x06AD4AB8: a80240f9  ldr x8, [x21]
0x06AD4ABC: d66a47f9  ldr x22, [x22, #0xed0]
0x06AD4AC0: 940a40f9  ldr x20, [x20, #0x10]
0x06AD4AC4: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD4AC8: c10240f9  ldr x1, [x22]
0x06AD4ACC: 290100b4  cbz x9, #0x6ad4af0
0x06AD4AD0: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD4AD4: 4a210091  add x10, x10, #8
0x06AD4AD8: 4b815ff8  ldur x11, [x10, #-8]
0x06AD4ADC: 7f0101eb  cmp x11, x1
0x06AD4AE0: 00010054  b.eq #0x6ad4b00
0x06AD4AE4: 290500f1  subs x9, x9, #1
0x06AD4AE8: 4a410091  add x10, x10, #0x10
0x06AD4AEC: 61ffff54  b.ne #0x6ad4ad8
0x06AD4AF0: 22008052  movz w2, #0x1
0x06AD4AF4: e00315aa  mov x0, x21
0x06AD4AF8: 06081a97  bl #0x3156b10
0x06AD4AFC: 05000014  b #0x6ad4b10
0x06AD4B00: 490140b9  ldr w9, [x10]
0x06AD4B04: 29050011  add w9, w9, #1
0x06AD4B08: 08d1298b  add x8, x8, w9, sxtw #4
0x06AD4B0C: 00e10491  add x0, x8, #0x138
0x06AD4B10: 080840a9  ldp x8, x2, [x0]
0x06AD4B14: e00315aa  mov x0, x21
0x06AD4B18: e10314aa  mov x1, x20
0x06AD4B1C: 00013fd6  blr x8
0x06AD4B20: 732240f9  ldr x19, [x19, #0x40]
0x06AD4B24: 930300b4  cbz x19, #0x6ad4b94
0x06AD4B28: 680240f9  ldr x8, [x19]
0x06AD4B2C: c10240f9  ldr x1, [x22]
0x06AD4B30: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD4B34: 290100b4  cbz x9, #0x6ad4b58
0x06AD4B38: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD4B3C: 4a210091  add x10, x10, #8
0x06AD4B40: 4b815ff8  ldur x11, [x10, #-8]
0x06AD4B44: 7f0101eb  cmp x11, x1
0x06AD4B48: 00010054  b.eq #0x6ad4b68
0x06AD4B4C: 290500f1  subs x9, x9, #1
0x06AD4B50: 4a410091  add x10, x10, #0x10
0x06AD4B54: 61ffff54  b.ne #0x6ad4b40
0x06AD4B58: e2008052  movz w2, #0x7
0x06AD4B5C: e00313aa  mov x0, x19
0x06AD4B60: ec071a97  bl #0x3156b10
0x06AD4B64: 05000014  b #0x6ad4b78
0x06AD4B68: 490140b9  ldr w9, [x10]
0x06AD4B6C: 291d0011  add w9, w9, #7
0x06AD4B70: 08d1298b  add x8, x8, w9, sxtw #4
0x06AD4B74: 00e10491  add x0, x8, #0x138
0x06AD4B78: 020440a9  ldp x2, x1, [x0]
0x06AD4B7C: e00313aa  mov x0, x19
0x06AD4B80: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06AD4B84: f65742a9  ldp x22, x21, [sp, #0x20]
0x06AD4B88: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06AD4B8C: fe67c4a8  ldp x30, x25, [sp], #0x40
0x06AD4B90: 40001fd6  br x2
0x06AD4B94: 46b01a97  bl #0x3180cac

; RVA 0x6AD4B98 | public void .ctor() { }
; bytes=72 sha256=3516d96b30337e24c4c0d333e7589ace84b19984da5853b5e68dad605c23d82e status=arm64_complete_bound indexed_start=True
0x06AD4B98: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06AD4B9C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06AD4BA0: b49200d0  adrp x20, #0x7d2a000
0x06AD4BA4: 15630090  adrp x21, #0x7734000
0x06AD4BA8: 880a6b39  ldrb w8, [x20, #0xac2]
0x06AD4BAC: b59641f9  ldr x21, [x21, #0x328]
0x06AD4BB0: f30300aa  mov x19, x0
0x06AD4BB4: c8000037  tbnz w8, #0, #0x6ad4bcc
0x06AD4BB8: 00630090  adrp x0, #0x7734000
0x06AD4BBC: 009441f9  ldr x0, [x0, #0x328]
0x06AD4BC0: 96af1a97  bl #0x3180a18
0x06AD4BC4: 28008052  movz w8, #0x1
0x06AD4BC8: 880a2b39  strb w8, [x20, #0xac2]
0x06AD4BCC: a10240f9  ldr x1, [x21]
0x06AD4BD0: e00313aa  mov x0, x19
0x06AD4BD4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06AD4BD8: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06AD4BDC: 93368717  b #0x4ca2628

