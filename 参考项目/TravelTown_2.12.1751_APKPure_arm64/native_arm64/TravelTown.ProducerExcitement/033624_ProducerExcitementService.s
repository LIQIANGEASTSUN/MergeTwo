; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 33624 Merger.ProducerExcitement.Services.ProducerExcitementService
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6AD5C20 | private OrdersSystem get_OrdersSystem() { }
; bytes=224 sha256=2e14c3307c517a649d343f0baee98c60c3d298ea60616f3e210b717dd1839ce3 status=arm64_complete_bound indexed_start=True
0x06AD5C20: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06AD5C24: f44f01a9  stp x20, x19, [sp, #0x10]
0x06AD5C28: b39200b0  adrp x19, #0x7d2a000
0x06AD5C2C: 684a6b39  ldrb w8, [x19, #0xad2]
0x06AD5C30: f40300aa  mov x20, x0
0x06AD5C34: c8000037  tbnz w8, #0, #0x6ad5c4c
0x06AD5C38: 605f00b0  adrp x0, #0x76c2000
0x06AD5C3C: 009447f9  ldr x0, [x0, #0xf28]
0x06AD5C40: 76ab1a97  bl #0x3180a18
0x06AD5C44: 28008052  movz w8, #0x1
0x06AD5C48: 684a2b39  strb w8, [x19, #0xad2]
0x06AD5C4C: f30314aa  mov x19, x20
0x06AD5C50: 758e48f8  ldr x21, [x19, #0x88]!
0x06AD5C54: d50400b5  cbnz x21, #0x6ad5cec
0x06AD5C58: 941a40f9  ldr x20, [x20, #0x30]
0x06AD5C5C: 140500b4  cbz x20, #0x6ad5cfc
0x06AD5C60: 695f00b0  adrp x9, #0x76c2000
0x06AD5C64: 299547f9  ldr x9, [x9, #0xf28]
0x06AD5C68: 880240f9  ldr x8, [x20]
0x06AD5C6C: 350140f9  ldr x21, [x9]
0x06AD5C70: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD5C74: a11240f9  ldr x1, [x21, #0x20]
0x06AD5C78: a2a24079  ldrh w2, [x21, #0x50]
0x06AD5C7C: 290100b4  cbz x9, #0x6ad5ca0
0x06AD5C80: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD5C84: 4a210091  add x10, x10, #8
0x06AD5C88: 4b815ff8  ldur x11, [x10, #-8]
0x06AD5C8C: 7f0101eb  cmp x11, x1
0x06AD5C90: e0000054  b.eq #0x6ad5cac
0x06AD5C94: 290500f1  subs x9, x9, #1
0x06AD5C98: 4a410091  add x10, x10, #0x10
0x06AD5C9C: 61ffff54  b.ne #0x6ad5c88
0x06AD5CA0: e00314aa  mov x0, x20
0x06AD5CA4: 9b031a97  bl #0x3156b10
0x06AD5CA8: 05000014  b #0x6ad5cbc
0x06AD5CAC: 490140b9  ldr w9, [x10]
0x06AD5CB0: 2901020b  add w9, w9, w2
0x06AD5CB4: 08d1298b  add x8, x8, w9, sxtw #4
0x06AD5CB8: 00e10491  add x0, x8, #0x138
0x06AD5CBC: 000440f9  ldr x0, [x0, #8]
0x06AD5CC0: e10315aa  mov x1, x21
0x06AD5CC4: b1ab1a97  bl #0x3180b88
0x06AD5CC8: 080440f9  ldr x8, [x0, #8]
0x06AD5CCC: e10300aa  mov x1, x0
0x06AD5CD0: e00314aa  mov x0, x20
0x06AD5CD4: 00013fd6  blr x8
0x06AD5CD8: f50300aa  mov x21, x0
0x06AD5CDC: 600200f9  str x0, [x19]
0x06AD5CE0: e00313aa  mov x0, x19
0x06AD5CE4: e10315aa  mov x1, x21
0x06AD5CE8: 37ab1a97  bl #0x31809c4
0x06AD5CEC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06AD5CF0: e00315aa  mov x0, x21
0x06AD5CF4: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06AD5CF8: c0035fd6  ret
0x06AD5CFC: ecab1a97  bl #0x3180cac

; RVA 0x6AD5D00 | private BoardSystem get_BoardSystem() { }
; bytes=224 sha256=27776fdd19c78a97280214b8e42724438435d09aff3f7b280b148c940b1af519 status=arm64_complete_bound indexed_start=True
0x06AD5D00: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06AD5D04: f44f01a9  stp x20, x19, [sp, #0x10]
0x06AD5D08: b39200b0  adrp x19, #0x7d2a000
0x06AD5D0C: 684e6b39  ldrb w8, [x19, #0xad3]
0x06AD5D10: f40300aa  mov x20, x0
0x06AD5D14: c8000037  tbnz w8, #0, #0x6ad5d2c
0x06AD5D18: a05f00f0  adrp x0, #0x76cc000
0x06AD5D1C: 003043f9  ldr x0, [x0, #0x660]
0x06AD5D20: 3eab1a97  bl #0x3180a18
0x06AD5D24: 28008052  movz w8, #0x1
0x06AD5D28: 684e2b39  strb w8, [x19, #0xad3]
0x06AD5D2C: f30314aa  mov x19, x20
0x06AD5D30: 750e48f8  ldr x21, [x19, #0x80]!
0x06AD5D34: d50400b5  cbnz x21, #0x6ad5dcc
0x06AD5D38: 941a40f9  ldr x20, [x20, #0x30]
0x06AD5D3C: 140500b4  cbz x20, #0x6ad5ddc
0x06AD5D40: a95f00f0  adrp x9, #0x76cc000
0x06AD5D44: 293143f9  ldr x9, [x9, #0x660]
0x06AD5D48: 880240f9  ldr x8, [x20]
0x06AD5D4C: 350140f9  ldr x21, [x9]
0x06AD5D50: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD5D54: a11240f9  ldr x1, [x21, #0x20]
0x06AD5D58: a2a24079  ldrh w2, [x21, #0x50]
0x06AD5D5C: 290100b4  cbz x9, #0x6ad5d80
0x06AD5D60: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD5D64: 4a210091  add x10, x10, #8
0x06AD5D68: 4b815ff8  ldur x11, [x10, #-8]
0x06AD5D6C: 7f0101eb  cmp x11, x1
0x06AD5D70: e0000054  b.eq #0x6ad5d8c
0x06AD5D74: 290500f1  subs x9, x9, #1
0x06AD5D78: 4a410091  add x10, x10, #0x10
0x06AD5D7C: 61ffff54  b.ne #0x6ad5d68
0x06AD5D80: e00314aa  mov x0, x20
0x06AD5D84: 63031a97  bl #0x3156b10
0x06AD5D88: 05000014  b #0x6ad5d9c
0x06AD5D8C: 490140b9  ldr w9, [x10]
0x06AD5D90: 2901020b  add w9, w9, w2
0x06AD5D94: 08d1298b  add x8, x8, w9, sxtw #4
0x06AD5D98: 00e10491  add x0, x8, #0x138
0x06AD5D9C: 000440f9  ldr x0, [x0, #8]
0x06AD5DA0: e10315aa  mov x1, x21
0x06AD5DA4: 79ab1a97  bl #0x3180b88
0x06AD5DA8: 080440f9  ldr x8, [x0, #8]
0x06AD5DAC: e10300aa  mov x1, x0
0x06AD5DB0: e00314aa  mov x0, x20
0x06AD5DB4: 00013fd6  blr x8
0x06AD5DB8: f50300aa  mov x21, x0
0x06AD5DBC: 600200f9  str x0, [x19]
0x06AD5DC0: e00313aa  mov x0, x19
0x06AD5DC4: e10315aa  mov x1, x21
0x06AD5DC8: ffaa1a97  bl #0x31809c4
0x06AD5DCC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06AD5DD0: e00315aa  mov x0, x21
0x06AD5DD4: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06AD5DD8: c0035fd6  ret
0x06AD5DDC: b4ab1a97  bl #0x3180cac

; RVA 0x6AD5DE0 | private OperationTrackingSystem get_OperationTrackingSystem() { }
; bytes=224 sha256=b443b3919a6949530c291994fdf0893dbca6299692a488590f66d326cf01c108 status=arm64_complete_bound indexed_start=True
0x06AD5DE0: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06AD5DE4: f44f01a9  stp x20, x19, [sp, #0x10]
0x06AD5DE8: b39200b0  adrp x19, #0x7d2a000
0x06AD5DEC: 68526b39  ldrb w8, [x19, #0xad4]
0x06AD5DF0: f40300aa  mov x20, x0
0x06AD5DF4: c8000037  tbnz w8, #0, #0x6ad5e0c
0x06AD5DF8: e06000d0  adrp x0, #0x76f3000
0x06AD5DFC: 006844f9  ldr x0, [x0, #0x8d0]
0x06AD5E00: 06ab1a97  bl #0x3180a18
0x06AD5E04: 28008052  movz w8, #0x1
0x06AD5E08: 68522b39  strb w8, [x19, #0xad4]
0x06AD5E0C: f30314aa  mov x19, x20
0x06AD5E10: 750e49f8  ldr x21, [x19, #0x90]!
0x06AD5E14: d50400b5  cbnz x21, #0x6ad5eac
0x06AD5E18: 941a40f9  ldr x20, [x20, #0x30]
0x06AD5E1C: 140500b4  cbz x20, #0x6ad5ebc
0x06AD5E20: e96000d0  adrp x9, #0x76f3000
0x06AD5E24: 296944f9  ldr x9, [x9, #0x8d0]
0x06AD5E28: 880240f9  ldr x8, [x20]
0x06AD5E2C: 350140f9  ldr x21, [x9]
0x06AD5E30: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD5E34: a11240f9  ldr x1, [x21, #0x20]
0x06AD5E38: a2a24079  ldrh w2, [x21, #0x50]
0x06AD5E3C: 290100b4  cbz x9, #0x6ad5e60
0x06AD5E40: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD5E44: 4a210091  add x10, x10, #8
0x06AD5E48: 4b815ff8  ldur x11, [x10, #-8]
0x06AD5E4C: 7f0101eb  cmp x11, x1
0x06AD5E50: e0000054  b.eq #0x6ad5e6c
0x06AD5E54: 290500f1  subs x9, x9, #1
0x06AD5E58: 4a410091  add x10, x10, #0x10
0x06AD5E5C: 61ffff54  b.ne #0x6ad5e48
0x06AD5E60: e00314aa  mov x0, x20
0x06AD5E64: 2b031a97  bl #0x3156b10
0x06AD5E68: 05000014  b #0x6ad5e7c
0x06AD5E6C: 490140b9  ldr w9, [x10]
0x06AD5E70: 2901020b  add w9, w9, w2
0x06AD5E74: 08d1298b  add x8, x8, w9, sxtw #4
0x06AD5E78: 00e10491  add x0, x8, #0x138
0x06AD5E7C: 000440f9  ldr x0, [x0, #8]
0x06AD5E80: e10315aa  mov x1, x21
0x06AD5E84: 41ab1a97  bl #0x3180b88
0x06AD5E88: 080440f9  ldr x8, [x0, #8]
0x06AD5E8C: e10300aa  mov x1, x0
0x06AD5E90: e00314aa  mov x0, x20
0x06AD5E94: 00013fd6  blr x8
0x06AD5E98: f50300aa  mov x21, x0
0x06AD5E9C: 600200f9  str x0, [x19]
0x06AD5EA0: e00313aa  mov x0, x19
0x06AD5EA4: e10315aa  mov x1, x21
0x06AD5EA8: c7aa1a97  bl #0x31809c4
0x06AD5EAC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06AD5EB0: e00315aa  mov x0, x21
0x06AD5EB4: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06AD5EB8: c0035fd6  ret
0x06AD5EBC: 7cab1a97  bl #0x3180cac

; RVA 0x6AD5EC0 | private PowerBoostSystem get_PowerBoostSystem() { }
; bytes=224 sha256=dae96946d1523f34e51c490aeba4d6715054b1309d65b1032a3a4a1b756f3510 status=arm64_complete_bound indexed_start=True
0x06AD5EC0: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06AD5EC4: f44f01a9  stp x20, x19, [sp, #0x10]
0x06AD5EC8: b39200b0  adrp x19, #0x7d2a000
0x06AD5ECC: 68566b39  ldrb w8, [x19, #0xad5]
0x06AD5ED0: f40300aa  mov x20, x0
0x06AD5ED4: c8000037  tbnz w8, #0, #0x6ad5eec
0x06AD5ED8: 805f00d0  adrp x0, #0x76c7000
0x06AD5EDC: 002c47f9  ldr x0, [x0, #0xe58]
0x06AD5EE0: ceaa1a97  bl #0x3180a18
0x06AD5EE4: 28008052  movz w8, #0x1
0x06AD5EE8: 68562b39  strb w8, [x19, #0xad5]
0x06AD5EEC: f30314aa  mov x19, x20
0x06AD5EF0: 758e49f8  ldr x21, [x19, #0x98]!
0x06AD5EF4: d50400b5  cbnz x21, #0x6ad5f8c
0x06AD5EF8: 941a40f9  ldr x20, [x20, #0x30]
0x06AD5EFC: 140500b4  cbz x20, #0x6ad5f9c
0x06AD5F00: 895f00d0  adrp x9, #0x76c7000
0x06AD5F04: 292d47f9  ldr x9, [x9, #0xe58]
0x06AD5F08: 880240f9  ldr x8, [x20]
0x06AD5F0C: 350140f9  ldr x21, [x9]
0x06AD5F10: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD5F14: a11240f9  ldr x1, [x21, #0x20]
0x06AD5F18: a2a24079  ldrh w2, [x21, #0x50]
0x06AD5F1C: 290100b4  cbz x9, #0x6ad5f40
0x06AD5F20: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD5F24: 4a210091  add x10, x10, #8
0x06AD5F28: 4b815ff8  ldur x11, [x10, #-8]
0x06AD5F2C: 7f0101eb  cmp x11, x1
0x06AD5F30: e0000054  b.eq #0x6ad5f4c
0x06AD5F34: 290500f1  subs x9, x9, #1
0x06AD5F38: 4a410091  add x10, x10, #0x10
0x06AD5F3C: 61ffff54  b.ne #0x6ad5f28
0x06AD5F40: e00314aa  mov x0, x20
0x06AD5F44: f3021a97  bl #0x3156b10
0x06AD5F48: 05000014  b #0x6ad5f5c
0x06AD5F4C: 490140b9  ldr w9, [x10]
0x06AD5F50: 2901020b  add w9, w9, w2
0x06AD5F54: 08d1298b  add x8, x8, w9, sxtw #4
0x06AD5F58: 00e10491  add x0, x8, #0x138
0x06AD5F5C: 000440f9  ldr x0, [x0, #8]
0x06AD5F60: e10315aa  mov x1, x21
0x06AD5F64: 09ab1a97  bl #0x3180b88
0x06AD5F68: 080440f9  ldr x8, [x0, #8]
0x06AD5F6C: e10300aa  mov x1, x0
0x06AD5F70: e00314aa  mov x0, x20
0x06AD5F74: 00013fd6  blr x8
0x06AD5F78: f50300aa  mov x21, x0
0x06AD5F7C: 600200f9  str x0, [x19]
0x06AD5F80: e00313aa  mov x0, x19
0x06AD5F84: e10315aa  mov x1, x21
0x06AD5F88: 8faa1a97  bl #0x31809c4
0x06AD5F8C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06AD5F90: e00315aa  mov x0, x21
0x06AD5F94: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06AD5F98: c0035fd6  ret
0x06AD5F9C: 44ab1a97  bl #0x3180cac

; RVA 0x6AD5FA0 | protected override void InitializeService() { }
; bytes=408 sha256=6cba5f059dfabb77977c3d104c333e6c066757521698d2c012952a24d1c4a183 status=arm64_complete_bound indexed_start=True
0x06AD5FA0: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x06AD5FA4: f65701a9  stp x22, x21, [sp, #0x10]
0x06AD5FA8: f44f02a9  stp x20, x19, [sp, #0x20]
0x06AD5FAC: b49200b0  adrp x20, #0x7d2a000
0x06AD5FB0: 885a6b39  ldrb w8, [x20, #0xad6]
0x06AD5FB4: f30300aa  mov x19, x0
0x06AD5FB8: 08030037  tbnz w8, #0, #0x6ad6018
0x06AD5FBC: e06200f0  adrp x0, #0x7734000
0x06AD5FC0: 00cc41f9  ldr x0, [x0, #0x398]
0x06AD5FC4: 95aa1a97  bl #0x3180a18
0x06AD5FC8: e06200f0  adrp x0, #0x7734000
0x06AD5FCC: 00a841f9  ldr x0, [x0, #0x350]
0x06AD5FD0: 92aa1a97  bl #0x3180a18
0x06AD5FD4: e06000d0  adrp x0, #0x76f3000
0x06AD5FD8: 00d445f9  ldr x0, [x0, #0xba8]
0x06AD5FDC: 8faa1a97  bl #0x3180a18
0x06AD5FE0: e06200f0  adrp x0, #0x7734000
0x06AD5FE4: 00b441f9  ldr x0, [x0, #0x368]
0x06AD5FE8: 8caa1a97  bl #0x3180a18
0x06AD5FEC: e06200f0  adrp x0, #0x7734000
0x06AD5FF0: 00d041f9  ldr x0, [x0, #0x3a0]
0x06AD5FF4: 89aa1a97  bl #0x3180a18
0x06AD5FF8: e06200f0  adrp x0, #0x7734000
0x06AD5FFC: 00d441f9  ldr x0, [x0, #0x3a8]
0x06AD6000: 86aa1a97  bl #0x3180a18
0x06AD6004: e06200d0  adrp x0, #0x7734000
0x06AD6008: 00d841f9  ldr x0, [x0, #0x3b0]
0x06AD600C: 83aa1a97  bl #0x3180a18
0x06AD6010: 28008052  movz w8, #0x1
0x06AD6014: 885a2b39  strb w8, [x20, #0xad6]
0x06AD6018: e00313aa  mov x0, x19
0x06AD601C: e1031faa  mov x1, xzr
0x06AD6020: e7cdf797  bl #0x68c97bc
0x06AD6024: 741640f9  ldr x20, [x19, #0x28]
0x06AD6028: 740800b4  cbz x20, #0x6ad6134
0x06AD602C: ea6000b0  adrp x10, #0x76f3000
0x06AD6030: 880240f9  ldr x8, [x20]
0x06AD6034: 4ad545f9  ldr x10, [x10, #0xba8]
0x06AD6038: f66200d0  adrp x22, #0x7734000
0x06AD603C: f56200d0  adrp x21, #0x7734000
0x06AD6040: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD6044: 410140f9  ldr x1, [x10]
0x06AD6048: d6aa41f9  ldr x22, [x22, #0x350]
0x06AD604C: b5d241f9  ldr x21, [x21, #0x3a0]
0x06AD6050: 290100b4  cbz x9, #0x6ad6074
0x06AD6054: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD6058: 4a210091  add x10, x10, #8
0x06AD605C: 4b815ff8  ldur x11, [x10, #-8]
0x06AD6060: 7f0101eb  cmp x11, x1
0x06AD6064: 00010054  b.eq #0x6ad6084
0x06AD6068: 290500f1  subs x9, x9, #1
0x06AD606C: 4a410091  add x10, x10, #0x10
0x06AD6070: 61ffff54  b.ne #0x6ad605c
0x06AD6074: e00314aa  mov x0, x20
0x06AD6078: e2031f2a  mov w2, wzr
0x06AD607C: a5021a97  bl #0x3156b10
0x06AD6080: 04000014  b #0x6ad6090
0x06AD6084: 490180b9  ldrsw x9, [x10]
0x06AD6088: 0811098b  add x8, x8, x9, lsl #4
0x06AD608C: 00e10491  add x0, x8, #0x138
0x06AD6090: 080440a9  ldp x8, x1, [x0]
0x06AD6094: e00314aa  mov x0, x20
0x06AD6098: 00013fd6  blr x8
0x06AD609C: c80240f9  ldr x8, [x22]
0x06AD60A0: f40300aa  mov x20, x0
0x06AD60A4: e00308aa  mov x0, x8
0x06AD60A8: feaa1a97  bl #0x3180ca0
0x06AD60AC: a20240f9  ldr x2, [x21]
0x06AD60B0: e10313aa  mov x1, x19
0x06AD60B4: e3031faa  mov x3, xzr
0x06AD60B8: f50300aa  mov x21, x0
0x06AD60BC: 4630a197  bl #0x53221d4
0x06AD60C0: b40300b4  cbz x20, #0x6ad6134
0x06AD60C4: e86200d0  adrp x8, #0x7734000
0x06AD60C8: 08b541f9  ldr x8, [x8, #0x368]
0x06AD60CC: f66200d0  adrp x22, #0x7734000
0x06AD60D0: f76200d0  adrp x23, #0x7734000
0x06AD60D4: e00314aa  mov x0, x20
0x06AD60D8: 020140f9  ldr x2, [x8]
0x06AD60DC: d6ce41f9  ldr x22, [x22, #0x398]
0x06AD60E0: f7d641f9  ldr x23, [x23, #0x3a8]
0x06AD60E4: e10315aa  mov x1, x21
0x06AD60E8: e8546197  bl #0x432b488
0x06AD60EC: c00240f9  ldr x0, [x22]
0x06AD60F0: 741240f9  ldr x20, [x19, #0x20]
0x06AD60F4: ebaa1a97  bl #0x3180ca0
0x06AD60F8: e20240f9  ldr x2, [x23]
0x06AD60FC: e10313aa  mov x1, x19
0x06AD6100: e3031faa  mov x3, xzr
0x06AD6104: f50300aa  mov x21, x0
0x06AD6108: 3330a197  bl #0x53221d4
0x06AD610C: 540100b4  cbz x20, #0x6ad6134
0x06AD6110: e86200d0  adrp x8, #0x7734000
0x06AD6114: 08d941f9  ldr x8, [x8, #0x3b0]
0x06AD6118: e00314aa  mov x0, x20
0x06AD611C: e10315aa  mov x1, x21
0x06AD6120: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06AD6124: 020140f9  ldr x2, [x8]
0x06AD6128: f65741a9  ldp x22, x21, [sp, #0x10]
0x06AD612C: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x06AD6130: 753c4b17  b #0x3da5304
0x06AD6134: deaa1a97  bl #0x3180cac

; RVA 0x6AD6138 | protected override void DisposeService() { }
; bytes=416 sha256=550037c1b0a843cc7dc5921aeaee31edd841f2bd833dd0db3e2ddc4909aa6056 status=arm64_complete_bound indexed_start=True
0x06AD6138: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x06AD613C: f65701a9  stp x22, x21, [sp, #0x10]
0x06AD6140: f44f02a9  stp x20, x19, [sp, #0x20]
0x06AD6144: b4920090  adrp x20, #0x7d2a000
0x06AD6148: 885e6b39  ldrb w8, [x20, #0xad7]
0x06AD614C: f30300aa  mov x19, x0
0x06AD6150: 08030037  tbnz w8, #0, #0x6ad61b0
0x06AD6154: e06200d0  adrp x0, #0x7734000
0x06AD6158: 00cc41f9  ldr x0, [x0, #0x398]
0x06AD615C: 2faa1a97  bl #0x3180a18
0x06AD6160: e06200d0  adrp x0, #0x7734000
0x06AD6164: 00a841f9  ldr x0, [x0, #0x350]
0x06AD6168: 2caa1a97  bl #0x3180a18
0x06AD616C: e06000b0  adrp x0, #0x76f3000
0x06AD6170: 00d445f9  ldr x0, [x0, #0xba8]
0x06AD6174: 29aa1a97  bl #0x3180a18
0x06AD6178: e06200d0  adrp x0, #0x7734000
0x06AD617C: 00ac41f9  ldr x0, [x0, #0x358]
0x06AD6180: 26aa1a97  bl #0x3180a18
0x06AD6184: e06200d0  adrp x0, #0x7734000
0x06AD6188: 00d041f9  ldr x0, [x0, #0x3a0]
0x06AD618C: 23aa1a97  bl #0x3180a18
0x06AD6190: e06200d0  adrp x0, #0x7734000
0x06AD6194: 00d441f9  ldr x0, [x0, #0x3a8]
0x06AD6198: 20aa1a97  bl #0x3180a18
0x06AD619C: e06200d0  adrp x0, #0x7734000
0x06AD61A0: 00dc41f9  ldr x0, [x0, #0x3b8]
0x06AD61A4: 1daa1a97  bl #0x3180a18
0x06AD61A8: 28008052  movz w8, #0x1
0x06AD61AC: 885e2b39  strb w8, [x20, #0xad7]
0x06AD61B0: 741640f9  ldr x20, [x19, #0x28]
0x06AD61B4: 140900b4  cbz x20, #0x6ad62d4
0x06AD61B8: ea6000b0  adrp x10, #0x76f3000
0x06AD61BC: 880240f9  ldr x8, [x20]
0x06AD61C0: 4ad545f9  ldr x10, [x10, #0xba8]
0x06AD61C4: f66200d0  adrp x22, #0x7734000
0x06AD61C8: f56200d0  adrp x21, #0x7734000
0x06AD61CC: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD61D0: 410140f9  ldr x1, [x10]
0x06AD61D4: d6aa41f9  ldr x22, [x22, #0x350]
0x06AD61D8: b5d241f9  ldr x21, [x21, #0x3a0]
0x06AD61DC: 290100b4  cbz x9, #0x6ad6200
0x06AD61E0: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD61E4: 4a210091  add x10, x10, #8
0x06AD61E8: 4b815ff8  ldur x11, [x10, #-8]
0x06AD61EC: 7f0101eb  cmp x11, x1
0x06AD61F0: 00010054  b.eq #0x6ad6210
0x06AD61F4: 290500f1  subs x9, x9, #1
0x06AD61F8: 4a410091  add x10, x10, #0x10
0x06AD61FC: 61ffff54  b.ne #0x6ad61e8
0x06AD6200: e00314aa  mov x0, x20
0x06AD6204: e2031f2a  mov w2, wzr
0x06AD6208: 42021a97  bl #0x3156b10
0x06AD620C: 04000014  b #0x6ad621c
0x06AD6210: 490180b9  ldrsw x9, [x10]
0x06AD6214: 0811098b  add x8, x8, x9, lsl #4
0x06AD6218: 00e10491  add x0, x8, #0x138
0x06AD621C: 080440a9  ldp x8, x1, [x0]
0x06AD6220: e00314aa  mov x0, x20
0x06AD6224: 00013fd6  blr x8
0x06AD6228: c80240f9  ldr x8, [x22]
0x06AD622C: f40300aa  mov x20, x0
0x06AD6230: e00308aa  mov x0, x8
0x06AD6234: 9baa1a97  bl #0x3180ca0
0x06AD6238: a20240f9  ldr x2, [x21]
0x06AD623C: e10313aa  mov x1, x19
0x06AD6240: e3031faa  mov x3, xzr
0x06AD6244: f50300aa  mov x21, x0
0x06AD6248: e32fa197  bl #0x53221d4
0x06AD624C: 540400b4  cbz x20, #0x6ad62d4
0x06AD6250: e86200d0  adrp x8, #0x7734000
0x06AD6254: 08ad41f9  ldr x8, [x8, #0x358]
0x06AD6258: f66200d0  adrp x22, #0x7734000
0x06AD625C: f76200d0  adrp x23, #0x7734000
0x06AD6260: e00314aa  mov x0, x20
0x06AD6264: 020140f9  ldr x2, [x8]
0x06AD6268: d6ce41f9  ldr x22, [x22, #0x398]
0x06AD626C: f7d641f9  ldr x23, [x23, #0x3a8]
0x06AD6270: e10315aa  mov x1, x21
0x06AD6274: b0546197  bl #0x432b534
0x06AD6278: c00240f9  ldr x0, [x22]
0x06AD627C: 741240f9  ldr x20, [x19, #0x20]
0x06AD6280: 88aa1a97  bl #0x3180ca0
0x06AD6284: e20240f9  ldr x2, [x23]
0x06AD6288: e10313aa  mov x1, x19
0x06AD628C: e3031faa  mov x3, xzr
0x06AD6290: f50300aa  mov x21, x0
0x06AD6294: d02fa197  bl #0x53221d4
0x06AD6298: f40100b4  cbz x20, #0x6ad62d4
0x06AD629C: e86200d0  adrp x8, #0x7734000
0x06AD62A0: 08dd41f9  ldr x8, [x8, #0x3b8]
0x06AD62A4: e00314aa  mov x0, x20
0x06AD62A8: e10315aa  mov x1, x21
0x06AD62AC: 020140f9  ldr x2, [x8]
0x06AD62B0: d63f4b97  bl #0x3da6208
0x06AD62B4: e00313aa  mov x0, x19
0x06AD62B8: 08000094  bl #0x6ad62d8
0x06AD62BC: e00313aa  mov x0, x19
0x06AD62C0: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06AD62C4: f65741a9  ldp x22, x21, [sp, #0x10]
0x06AD62C8: e1031faa  mov x1, xzr
0x06AD62CC: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x06AD62D0: 3ccdf717  b #0x68c97c0
0x06AD62D4: 76aa1a97  bl #0x3180cac

; RVA 0x6AD6540 | public bool TryDropExcitementItem(PositionComponent producerPosition, out BoardItemPosition excitementPosition, out ProducerExcitementSpawnData spawnData) { }
; bytes=992 sha256=c5400804ca8300121d40ad3da2dfbd0f472e8db77140c2bb0e42cfc42744a545 status=arm64_complete_bound indexed_start=True
0x06AD6540: ff8301d1  sub sp, sp, #0x60
0x06AD6544: fe6f01a9  stp x30, x27, [sp, #0x10]
0x06AD6548: fa6702a9  stp x26, x25, [sp, #0x20]
0x06AD654C: f85f03a9  stp x24, x23, [sp, #0x30]
0x06AD6550: f65704a9  stp x22, x21, [sp, #0x40]
0x06AD6554: f44f05a9  stp x20, x19, [sp, #0x50]
0x06AD6558: b7920090  adrp x23, #0x7d2a000
0x06AD655C: e8626b39  ldrb w8, [x23, #0xad8]
0x06AD6560: f30303aa  mov x19, x3
0x06AD6564: f40302aa  mov x20, x2
0x06AD6568: f50301aa  mov x21, x1
0x06AD656C: f60300aa  mov x22, x0
0x06AD6570: a8020037  tbnz w8, #0, #0x6ad65c4
0x06AD6574: 205d0090  adrp x0, #0x767a000
0x06AD6578: 004c42f9  ldr x0, [x0, #0x498]
0x06AD657C: 27a91a97  bl #0x3180a18
0x06AD6580: e06200d0  adrp x0, #0x7734000
0x06AD6584: 00fc41f9  ldr x0, [x0, #0x3f8]
0x06AD6588: 24a91a97  bl #0x3180a18
0x06AD658C: e06000b0  adrp x0, #0x76f3000
0x06AD6590: 00d445f9  ldr x0, [x0, #0xba8]
0x06AD6594: 21a91a97  bl #0x3180a18
0x06AD6598: 005d00f0  adrp x0, #0x7679000
0x06AD659C: 001044f9  ldr x0, [x0, #0x820]
0x06AD65A0: 1ea91a97  bl #0x3180a18
0x06AD65A4: e06200d0  adrp x0, #0x7734000
0x06AD65A8: 000042f9  ldr x0, [x0, #0x400]
0x06AD65AC: 1ba91a97  bl #0x3180a18
0x06AD65B0: e06200d0  adrp x0, #0x7734000
0x06AD65B4: 000442f9  ldr x0, [x0, #0x408]
0x06AD65B8: 18a91a97  bl #0x3180a18
0x06AD65BC: 28008052  movz w8, #0x1
0x06AD65C0: e8622b39  strb w8, [x23, #0xad8]
0x06AD65C4: e00313aa  mov x0, x19
0x06AD65C8: e1031faa  mov x1, xzr
0x06AD65CC: ff0f00b9  str wzr, [sp, #0xc]
0x06AD65D0: 9f0200f9  str xzr, [x20]
0x06AD65D4: 7f0200f9  str xzr, [x19]
0x06AD65D8: fba81a97  bl #0x31809c4
0x06AD65DC: d71640f9  ldr x23, [x22, #0x28]
0x06AD65E0: f71900b4  cbz x23, #0x6ad691c
0x06AD65E4: fb6000b0  adrp x27, #0x76f3000
0x06AD65E8: e80240f9  ldr x8, [x23]
0x06AD65EC: 7bd745f9  ldr x27, [x27, #0xba8]
0x06AD65F0: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD65F4: 610340f9  ldr x1, [x27]
0x06AD65F8: 290100b4  cbz x9, #0x6ad661c
0x06AD65FC: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD6600: 4a210091  add x10, x10, #8
0x06AD6604: 4b815ff8  ldur x11, [x10, #-8]
0x06AD6608: 7f0101eb  cmp x11, x1
0x06AD660C: 00010054  b.eq #0x6ad662c
0x06AD6610: 290500f1  subs x9, x9, #1
0x06AD6614: 4a410091  add x10, x10, #0x10
0x06AD6618: 61ffff54  b.ne #0x6ad6604
0x06AD661C: e00317aa  mov x0, x23
0x06AD6620: e2031f2a  mov w2, wzr
0x06AD6624: 3b011a97  bl #0x3156b10
0x06AD6628: 04000014  b #0x6ad6638
0x06AD662C: 490180b9  ldrsw x9, [x10]
0x06AD6630: 0811098b  add x8, x8, x9, lsl #4
0x06AD6634: 00e10491  add x0, x8, #0x138
0x06AD6638: 080440a9  ldp x8, x1, [x0]
0x06AD663C: e00317aa  mov x0, x23
0x06AD6640: 00013fd6  blr x8
0x06AD6644: c01600b4  cbz x0, #0x6ad691c
0x06AD6648: 081840b9  ldr w8, [x0, #0x18]
0x06AD664C: 48130034  cbz w8, #0x6ad68b4
0x06AD6650: d71e40f9  ldr x23, [x22, #0x38]
0x06AD6654: 571600b4  cbz x23, #0x6ad691c
0x06AD6658: 2a5d0090  adrp x10, #0x767a000
0x06AD665C: e80240f9  ldr x8, [x23]
0x06AD6660: 4a4d42f9  ldr x10, [x10, #0x498]
0x06AD6664: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD6668: 410140f9  ldr x1, [x10]
0x06AD666C: 290100b4  cbz x9, #0x6ad6690
0x06AD6670: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD6674: 4a210091  add x10, x10, #8
0x06AD6678: 4b815ff8  ldur x11, [x10, #-8]
0x06AD667C: 7f0101eb  cmp x11, x1
0x06AD6680: 00010054  b.eq #0x6ad66a0
0x06AD6684: 290500f1  subs x9, x9, #1
0x06AD6688: 4a410091  add x10, x10, #0x10
0x06AD668C: 61ffff54  b.ne #0x6ad6678
0x06AD6690: 82028052  movz w2, #0x14
0x06AD6694: e00317aa  mov x0, x23
0x06AD6698: 1e011a97  bl #0x3156b10
0x06AD669C: 05000014  b #0x6ad66b0
0x06AD66A0: 490140b9  ldr w9, [x10]
0x06AD66A4: 29510011  add w9, w9, #0x14
0x06AD66A8: 08d1298b  add x8, x8, w9, sxtw #4
0x06AD66AC: 00e10491  add x0, x8, #0x138
0x06AD66B0: 080840a9  ldp x8, x2, [x0]
0x06AD66B4: e00317aa  mov x0, x23
0x06AD66B8: e10315aa  mov x1, x21
0x06AD66BC: 00013fd6  blr x8
0x06AD66C0: c00f00b4  cbz x0, #0x6ad68b8
0x06AD66C4: f70300aa  mov x23, x0
0x06AD66C8: e00316aa  mov x0, x22
0x06AD66CC: 8dfdff97  bl #0x6ad5d00
0x06AD66D0: 601200b4  cbz x0, #0x6ad691c
0x06AD66D4: e1031faa  mov x1, xzr
0x06AD66D8: ba0dee97  bl #0x6659dc0
0x06AD66DC: c00e0037  tbnz w0, #0, #0x6ad68b4
0x06AD66E0: f51100b4  cbz x21, #0x6ad691c
0x06AD66E4: a11a40f9  ldr x1, [x21, #0x30]
0x06AD66E8: e00316aa  mov x0, x22
0x06AD66EC: e20314aa  mov x2, x20
0x06AD66F0: 8c000094  bl #0x6ad6920
0x06AD66F4: 000e0036  tbz w0, #0, #0x6ad68b4
0x06AD66F8: d82a40f9  ldr x24, [x22, #0x50]
0x06AD66FC: 181100b4  cbz x24, #0x6ad691c
0x06AD6700: ea6200d0  adrp x10, #0x7734000
0x06AD6704: 080340f9  ldr x8, [x24]
0x06AD6708: 4afd41f9  ldr x10, [x10, #0x3f8]
0x06AD670C: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD6710: 410140f9  ldr x1, [x10]
0x06AD6714: 290100b4  cbz x9, #0x6ad6738
0x06AD6718: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD671C: 4a210091  add x10, x10, #8
0x06AD6720: 4b815ff8  ldur x11, [x10, #-8]
0x06AD6724: 7f0101eb  cmp x11, x1
0x06AD6728: 00010054  b.eq #0x6ad6748
0x06AD672C: 290500f1  subs x9, x9, #1
0x06AD6730: 4a410091  add x10, x10, #0x10
0x06AD6734: 61ffff54  b.ne #0x6ad6720
0x06AD6738: 22008052  movz w2, #0x1
0x06AD673C: e00318aa  mov x0, x24
0x06AD6740: f4001a97  bl #0x3156b10
0x06AD6744: 05000014  b #0x6ad6758
0x06AD6748: 490140b9  ldr w9, [x10]
0x06AD674C: 29050011  add w9, w9, #1
0x06AD6750: 08d1298b  add x8, x8, w9, sxtw #4
0x06AD6754: 00e10491  add x0, x8, #0x138
0x06AD6758: 080440a9  ldp x8, x1, [x0]
0x06AD675C: e00318aa  mov x0, x24
0x06AD6760: 00013fd6  blr x8
0x06AD6764: 800a0036  tbz w0, #0, #0x6ad68b4
0x06AD6768: 0a5d00f0  adrp x10, #0x7679000
0x06AD676C: e80240f9  ldr x8, [x23]
0x06AD6770: 4a1144f9  ldr x10, [x10, #0x820]
0x06AD6774: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD6778: 410140f9  ldr x1, [x10]
0x06AD677C: 290100b4  cbz x9, #0x6ad67a0
0x06AD6780: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD6784: 4a210091  add x10, x10, #8
0x06AD6788: 4b815ff8  ldur x11, [x10, #-8]
0x06AD678C: 7f0101eb  cmp x11, x1
0x06AD6790: 00010054  b.eq #0x6ad67b0
0x06AD6794: 290500f1  subs x9, x9, #1
0x06AD6798: 4a410091  add x10, x10, #0x10
0x06AD679C: 61ffff54  b.ne #0x6ad6788
0x06AD67A0: e00317aa  mov x0, x23
0x06AD67A4: e2031f2a  mov w2, wzr
0x06AD67A8: da001a97  bl #0x3156b10
0x06AD67AC: 04000014  b #0x6ad67bc
0x06AD67B0: 490180b9  ldrsw x9, [x10]
0x06AD67B4: 0811098b  add x8, x8, x9, lsl #4
0x06AD67B8: 00e10491  add x0, x8, #0x138
0x06AD67BC: 080440a9  ldp x8, x1, [x0]
0x06AD67C0: e00317aa  mov x0, x23
0x06AD67C4: 00013fd6  blr x8
0x06AD67C8: e10300aa  mov x1, x0
0x06AD67CC: e2330091  add x2, sp, #0xc
0x06AD67D0: e00316aa  mov x0, x22
0x06AD67D4: ea000094  bl #0x6ad6b7c
0x06AD67D8: 000700b4  cbz x0, #0x6ad68b8
0x06AD67DC: da1640f9  ldr x26, [x22, #0x28]
0x06AD67E0: fa0900b4  cbz x26, #0x6ad691c
0x06AD67E4: 480340f9  ldr x8, [x26]
0x06AD67E8: f80f40b9  ldr w24, [sp, #0xc]
0x06AD67EC: 610340f9  ldr x1, [x27]
0x06AD67F0: f90300aa  mov x25, x0
0x06AD67F4: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD67F8: 290100b4  cbz x9, #0x6ad681c
0x06AD67FC: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD6800: 4a210091  add x10, x10, #8
0x06AD6804: 4b815ff8  ldur x11, [x10, #-8]
0x06AD6808: 7f0101eb  cmp x11, x1
0x06AD680C: 00010054  b.eq #0x6ad682c
0x06AD6810: 290500f1  subs x9, x9, #1
0x06AD6814: 4a410091  add x10, x10, #0x10
0x06AD6818: 61ffff54  b.ne #0x6ad6804
0x06AD681C: c2008052  movz w2, #0x6
0x06AD6820: e0031aaa  mov x0, x26
0x06AD6824: bb001a97  bl #0x3156b10
0x06AD6828: 05000014  b #0x6ad683c
0x06AD682C: 490140b9  ldr w9, [x10]
0x06AD6830: 29190011  add w9, w9, #6
0x06AD6834: 08d1298b  add x8, x8, w9, sxtw #4
0x06AD6838: 00e10491  add x0, x8, #0x138
0x06AD683C: 080840a9  ldp x8, x2, [x0]
0x06AD6840: e0031aaa  mov x0, x26
0x06AD6844: e103182a  mov w1, w24
0x06AD6848: 00013fd6  blr x8
0x06AD684C: fa03002a  mov w26, w0
0x06AD6850: 1f080071  cmp w0, #2
0x06AD6854: 61010054  b.ne #0x6ad6880
0x06AD6858: e00316aa  mov x0, x22
0x06AD685C: 29fdff97  bl #0x6ad5d00
0x06AD6860: e00500b4  cbz x0, #0x6ad691c
0x06AD6864: a11a40f9  ldr x1, [x21, #0x30]
0x06AD6868: e2031faa  mov x2, xzr
0x06AD686C: e3031faa  mov x3, xzr
0x06AD6870: ff4cee97  bl #0x6669c6c
0x06AD6874: 800200f9  str x0, [x20]
0x06AD6878: 390b40f9  ldr x25, [x25, #0x10]
0x06AD687C: 16000014  b #0x6ad68d4
0x06AD6880: 390b40f9  ldr x25, [x25, #0x10]
0x06AD6884: 5f070071  cmp w26, #1
0x06AD6888: 61020054  b.ne #0x6ad68d4
0x06AD688C: 820240f9  ldr x2, [x20]
0x06AD6890: e00316aa  mov x0, x22
0x06AD6894: e10319aa  mov x1, x25
0x06AD6898: 2e030094  bl #0x6ad7550
0x06AD689C: a20a40f9  ldr x2, [x21, #0x10]
0x06AD68A0: e10300aa  mov x1, x0
0x06AD68A4: e00316aa  mov x0, x22
0x06AD68A8: e30317aa  mov x3, x23
0x06AD68AC: e403182a  mov w4, w24
0x06AD68B0: 8a030094  bl #0x6ad76d8
0x06AD68B4: e0031f2a  mov w0, wzr
0x06AD68B8: f44f45a9  ldp x20, x19, [sp, #0x50]
0x06AD68BC: f65744a9  ldp x22, x21, [sp, #0x40]
0x06AD68C0: f85f43a9  ldp x24, x23, [sp, #0x30]
0x06AD68C4: fa6742a9  ldp x26, x25, [sp, #0x20]
0x06AD68C8: fe6f41a9  ldp x30, x27, [sp, #0x10]
0x06AD68CC: ff830191  add sp, sp, #0x60
0x06AD68D0: c0035fd6  ret
0x06AD68D4: e86200d0  adrp x8, #0x7734000
0x06AD68D8: 080542f9  ldr x8, [x8, #0x408]
0x06AD68DC: 5f0b0071  cmp w26, #2
0x06AD68E0: f4179f1a  cset w20, eq
0x06AD68E4: 000140f9  ldr x0, [x8]
0x06AD68E8: eea81a97  bl #0x3180ca0
0x06AD68EC: e10319aa  mov x1, x25
0x06AD68F0: e203182a  mov w2, w24
0x06AD68F4: e303142a  mov w3, w20
0x06AD68F8: e4031faa  mov x4, xzr
0x06AD68FC: f50300aa  mov x21, x0
0x06AD6900: 276adb97  bl #0x61b119c
0x06AD6904: e00313aa  mov x0, x19
0x06AD6908: e10315aa  mov x1, x21
0x06AD690C: 750200f9  str x21, [x19]
0x06AD6910: 2da81a97  bl #0x31809c4
0x06AD6914: 20008052  movz w0, #0x1
0x06AD6918: e8ffff17  b #0x6ad68b8
0x06AD691C: e4a81a97  bl #0x3180cac

; RVA 0x6AD7B48 | public void ApplyVisuals(VisualComponent visualComponent, BoardItemPosition entityPosition) { }
; bytes=200 sha256=c683892badb85df0e385cf297e2ee837e82c67ffc77214f0ef025cec3eb87d32 status=arm64_complete_bound indexed_start=True
0x06AD7B48: fe0f1df8  str x30, [sp, #-0x30]!
0x06AD7B4C: f65701a9  stp x22, x21, [sp, #0x10]
0x06AD7B50: f44f02a9  stp x20, x19, [sp, #0x20]
0x06AD7B54: 969200f0  adrp x22, #0x7d2a000
0x06AD7B58: c8666b39  ldrb w8, [x22, #0xad9]
0x06AD7B5C: f40302aa  mov x20, x2
0x06AD7B60: f30301aa  mov x19, x1
0x06AD7B64: f50300aa  mov x21, x0
0x06AD7B68: c8000037  tbnz w8, #0, #0x6ad7b80
0x06AD7B6C: e06200b0  adrp x0, #0x7734000
0x06AD7B70: 00fc41f9  ldr x0, [x0, #0x3f8]
0x06AD7B74: a9a31a97  bl #0x3180a18
0x06AD7B78: 28008052  movz w8, #0x1
0x06AD7B7C: c8662b39  strb w8, [x22, #0xad9]
0x06AD7B80: 730400b4  cbz x19, #0x6ad7c0c
0x06AD7B84: 74ae00f9  str x20, [x19, #0x158]
0x06AD7B88: b42a40f9  ldr x20, [x21, #0x50]
0x06AD7B8C: 140400b4  cbz x20, #0x6ad7c0c
0x06AD7B90: ea6200b0  adrp x10, #0x7734000
0x06AD7B94: 880240f9  ldr x8, [x20]
0x06AD7B98: 4afd41f9  ldr x10, [x10, #0x3f8]
0x06AD7B9C: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD7BA0: 410140f9  ldr x1, [x10]
0x06AD7BA4: 290100b4  cbz x9, #0x6ad7bc8
0x06AD7BA8: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD7BAC: 4a210091  add x10, x10, #8
0x06AD7BB0: 4b815ff8  ldur x11, [x10, #-8]
0x06AD7BB4: 7f0101eb  cmp x11, x1
0x06AD7BB8: 00010054  b.eq #0x6ad7bd8
0x06AD7BBC: 290500f1  subs x9, x9, #1
0x06AD7BC0: 4a410091  add x10, x10, #0x10
0x06AD7BC4: 61ffff54  b.ne #0x6ad7bb0
0x06AD7BC8: e00314aa  mov x0, x20
0x06AD7BCC: e2031f2a  mov w2, wzr
0x06AD7BD0: d0fb1997  bl #0x3156b10
0x06AD7BD4: 04000014  b #0x6ad7be4
0x06AD7BD8: 490180b9  ldrsw x9, [x10]
0x06AD7BDC: 0811098b  add x8, x8, x9, lsl #4
0x06AD7BE0: 00e10491  add x0, x8, #0x138
0x06AD7BE4: 080440a9  ldp x8, x1, [x0]
0x06AD7BE8: e00314aa  mov x0, x20
0x06AD7BEC: 00013fd6  blr x8
0x06AD7BF0: e10300aa  mov x1, x0
0x06AD7BF4: 60820591  add x0, x19, #0x160
0x06AD7BF8: 61b200f9  str x1, [x19, #0x160]
0x06AD7BFC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06AD7C00: f65741a9  ldp x22, x21, [sp, #0x10]
0x06AD7C04: fe0743f8  ldr x30, [sp], #0x30
0x06AD7C08: 6fa31a17  b #0x31809c4
0x06AD7C0C: 28a41a97  bl #0x3180cac

; RVA 0x6AD6B7C | private ProducerExcitementItemResponse ConsumeExcitementForProducer(string producerId, out int claimedExcitementId) { }
; bytes=2516 sha256=c5cf35d5dd367fbe1a2cb24cf35a275bb5cab2cb405fa13d7a32a103986c90fd status=arm64_complete_bound indexed_start=True
0x06AD6B7C: ff4303d1  sub sp, sp, #0xd0
0x06AD6B80: fd7b07a9  stp x29, x30, [sp, #0x70]
0x06AD6B84: fc6f08a9  stp x28, x27, [sp, #0x80]
0x06AD6B88: fa6709a9  stp x26, x25, [sp, #0x90]
0x06AD6B8C: f85f0aa9  stp x24, x23, [sp, #0xa0]
0x06AD6B90: f6570ba9  stp x22, x21, [sp, #0xb0]
0x06AD6B94: f44f0ca9  stp x20, x19, [sp, #0xc0]
0x06AD6B98: b3920090  adrp x19, #0x7d2a000
0x06AD6B9C: 686a6b39  ldrb w8, [x19, #0xada]
0x06AD6BA0: f50302aa  mov x21, x2
0x06AD6BA4: f40300aa  mov x20, x0
0x06AD6BA8: e10700f9  str x1, [sp, #8]
0x06AD6BAC: 28070037  tbnz w8, #0, #0x6ad6c90
0x06AD6BB0: 605e00b0  adrp x0, #0x76a3000
0x06AD6BB4: 00c444f9  ldr x0, [x0, #0x988]
0x06AD6BB8: 98a71a97  bl #0x3180a18
0x06AD6BBC: 605f0090  adrp x0, #0x76c2000
0x06AD6BC0: 007447f9  ldr x0, [x0, #0xee8]
0x06AD6BC4: 95a71a97  bl #0x3180a18
0x06AD6BC8: c05b0090  adrp x0, #0x764e000
0x06AD6BCC: 002c45f9  ldr x0, [x0, #0xa58]
0x06AD6BD0: 92a71a97  bl #0x3180a18
0x06AD6BD4: e06200d0  adrp x0, #0x7734000
0x06AD6BD8: 001042f9  ldr x0, [x0, #0x420]
0x06AD6BDC: 8fa71a97  bl #0x3180a18
0x06AD6BE0: e06200d0  adrp x0, #0x7734000
0x06AD6BE4: 001442f9  ldr x0, [x0, #0x428]
0x06AD6BE8: 8ca71a97  bl #0x3180a18
0x06AD6BEC: e06200d0  adrp x0, #0x7734000
0x06AD6BF0: 001842f9  ldr x0, [x0, #0x430]
0x06AD6BF4: 89a71a97  bl #0x3180a18
0x06AD6BF8: 605f0090  adrp x0, #0x76c2000
0x06AD6BFC: 008047f9  ldr x0, [x0, #0xf00]
0x06AD6C00: 86a71a97  bl #0x3180a18
0x06AD6C04: 605e00b0  adrp x0, #0x76a3000
0x06AD6C08: 00c844f9  ldr x0, [x0, #0x990]
0x06AD6C0C: 83a71a97  bl #0x3180a18
0x06AD6C10: 205d0090  adrp x0, #0x767a000
0x06AD6C14: 004c42f9  ldr x0, [x0, #0x498]
0x06AD6C18: 80a71a97  bl #0x3180a18
0x06AD6C1C: 205d0090  adrp x0, #0x767a000
0x06AD6C20: 00c842f9  ldr x0, [x0, #0x590]
0x06AD6C24: 7da71a97  bl #0x3180a18
0x06AD6C28: e06000b0  adrp x0, #0x76f3000
0x06AD6C2C: 00d445f9  ldr x0, [x0, #0xba8]
0x06AD6C30: 7aa71a97  bl #0x3180a18
0x06AD6C34: e05c00b0  adrp x0, #0x7673000
0x06AD6C38: 006c46f9  ldr x0, [x0, #0xcd8]
0x06AD6C3C: 77a71a97  bl #0x3180a18
0x06AD6C40: 605c00b0  adrp x0, #0x7663000
0x06AD6C44: 00f446f9  ldr x0, [x0, #0xde8]
0x06AD6C48: 74a71a97  bl #0x3180a18
0x06AD6C4C: e06200d0  adrp x0, #0x7734000
0x06AD6C50: 001c42f9  ldr x0, [x0, #0x438]
0x06AD6C54: 71a71a97  bl #0x3180a18
0x06AD6C58: e06200d0  adrp x0, #0x7734000
0x06AD6C5C: 002042f9  ldr x0, [x0, #0x440]
0x06AD6C60: 6ea71a97  bl #0x3180a18
0x06AD6C64: e06200d0  adrp x0, #0x7734000
0x06AD6C68: 002442f9  ldr x0, [x0, #0x448]
0x06AD6C6C: 6ba71a97  bl #0x3180a18
0x06AD6C70: e06200d0  adrp x0, #0x7734000
0x06AD6C74: 002842f9  ldr x0, [x0, #0x450]
0x06AD6C78: 68a71a97  bl #0x3180a18
0x06AD6C7C: e06200d0  adrp x0, #0x7734000
0x06AD6C80: 002c42f9  ldr x0, [x0, #0x458]
0x06AD6C84: 65a71a97  bl #0x3180a18
0x06AD6C88: 28008052  movz w8, #0x1
0x06AD6C8C: 686a2b39  strb w8, [x19, #0xada]
0x06AD6C90: e00314aa  mov x0, x20
0x06AD6C94: ff7f05a9  stp xzr, xzr, [sp, #0x50]
0x06AD6C98: ff3300f9  str xzr, [sp, #0x60]
0x06AD6C9C: e1fbff97  bl #0x6ad5c20
0x06AD6CA0: 403d00b4  cbz x0, #0x6ad7448
0x06AD6CA4: f36200d0  adrp x19, #0x7734000
0x06AD6CA8: 732e42f9  ldr x19, [x19, #0x458]
0x06AD6CAC: e1031faa  mov x1, xzr
0x06AD6CB0: 24d4e897  bl #0x650bd40
0x06AD6CB4: 680240f9  ldr x8, [x19]
0x06AD6CB8: f60300aa  mov x22, x0
0x06AD6CBC: f50300f9  str x21, [sp]
0x06AD6CC0: 09e140b9  ldr w9, [x8, #0xe0]
0x06AD6CC4: 89000035  cbnz w9, #0x6ad6cd4
0x06AD6CC8: e00308aa  mov x0, x8
0x06AD6CCC: b0a71a97  bl #0x3180b8c
0x06AD6CD0: 680240f9  ldr x8, [x19]
0x06AD6CD4: 095d40f9  ldr x9, [x8, #0xb8]
0x06AD6CD8: 795f0090  adrp x25, #0x76c2000
0x06AD6CDC: d55b0090  adrp x21, #0x764e000
0x06AD6CE0: 370540f9  ldr x23, [x9, #8]
0x06AD6CE4: 397747f9  ldr x25, [x25, #0xee8]
0x06AD6CE8: b52e45f9  ldr x21, [x21, #0xa58]
0x06AD6CEC: 170300b5  cbnz x23, #0x6ad6d4c
0x06AD6CF0: 09e140b9  ldr w9, [x8, #0xe0]
0x06AD6CF4: 89000035  cbnz w9, #0x6ad6d04
0x06AD6CF8: e00308aa  mov x0, x8
0x06AD6CFC: a4a71a97  bl #0x3180b8c
0x06AD6D00: 680240f9  ldr x8, [x19]
0x06AD6D04: 695f0090  adrp x9, #0x76c2000
0x06AD6D08: 085d40f9  ldr x8, [x8, #0xb8]
0x06AD6D0C: 298147f9  ldr x9, [x9, #0xf00]
0x06AD6D10: 180140f9  ldr x24, [x8]
0x06AD6D14: 200140f9  ldr x0, [x9]
0x06AD6D18: e2a71a97  bl #0x3180ca0
0x06AD6D1C: e86200d0  adrp x8, #0x7734000
0x06AD6D20: 082142f9  ldr x8, [x8, #0x440]
0x06AD6D24: e10318aa  mov x1, x24
0x06AD6D28: e3031faa  mov x3, xzr
0x06AD6D2C: f70300aa  mov x23, x0
0x06AD6D30: 020140f9  ldr x2, [x8]
0x06AD6D34: 21ff9d97  bl #0x52569b8
0x06AD6D38: 680240f9  ldr x8, [x19]
0x06AD6D3C: e10317aa  mov x1, x23
0x06AD6D40: 005d40f9  ldr x0, [x8, #0xb8]
0x06AD6D44: 178c00f8  str x23, [x0, #8]!
0x06AD6D48: 1fa71a97  bl #0x31809c4
0x06AD6D4C: 220340f9  ldr x2, [x25]
0x06AD6D50: e00316aa  mov x0, x22
0x06AD6D54: e10317aa  mov x1, x23
0x06AD6D58: 4fe74597  bl #0x3c50a94
0x06AD6D5C: a10240f9  ldr x1, [x21]
0x06AD6D60: 9c244697  bl #0x3c5ffd0
0x06AD6D64: 972240f9  ldr x23, [x20, #0x40]
0x06AD6D68: 173700b4  cbz x23, #0x6ad7448
0x06AD6D6C: 2a5d0090  adrp x10, #0x767a000
0x06AD6D70: e80240f9  ldr x8, [x23]
0x06AD6D74: 4ac942f9  ldr x10, [x10, #0x590]
0x06AD6D78: f30300aa  mov x19, x0
0x06AD6D7C: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD6D80: 410140f9  ldr x1, [x10]
0x06AD6D84: 290100b4  cbz x9, #0x6ad6da8
0x06AD6D88: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD6D8C: 4a210091  add x10, x10, #8
0x06AD6D90: 4b815ff8  ldur x11, [x10, #-8]
0x06AD6D94: 7f0101eb  cmp x11, x1
0x06AD6D98: 00010054  b.eq #0x6ad6db8
0x06AD6D9C: 290500f1  subs x9, x9, #1
0x06AD6DA0: 4a410091  add x10, x10, #0x10
0x06AD6DA4: 61ffff54  b.ne #0x6ad6d90
0x06AD6DA8: 42008052  movz w2, #0x2
0x06AD6DAC: e00317aa  mov x0, x23
0x06AD6DB0: 58ff1997  bl #0x3156b10
0x06AD6DB4: 05000014  b #0x6ad6dc8
0x06AD6DB8: 490140b9  ldr w9, [x10]
0x06AD6DBC: 29090011  add w9, w9, #2
0x06AD6DC0: 08d1298b  add x8, x8, w9, sxtw #4
0x06AD6DC4: 00e10491  add x0, x8, #0x138
0x06AD6DC8: 080440a9  ldp x8, x1, [x0]
0x06AD6DCC: e00317aa  mov x0, x23
0x06AD6DD0: 00013fd6  blr x8
0x06AD6DD4: 981640f9  ldr x24, [x20, #0x28]
0x06AD6DD8: e02f00b9  str w0, [sp, #0x2c]
0x06AD6DDC: 783300b4  cbz x24, #0x6ad7448
0x06AD6DE0: ea6000b0  adrp x10, #0x76f3000
0x06AD6DE4: 080340f9  ldr x8, [x24]
0x06AD6DE8: 4ad545f9  ldr x10, [x10, #0xba8]
0x06AD6DEC: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD6DF0: 410140f9  ldr x1, [x10]
0x06AD6DF4: 290100b4  cbz x9, #0x6ad6e18
0x06AD6DF8: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD6DFC: 4a210091  add x10, x10, #8
0x06AD6E00: 4b815ff8  ldur x11, [x10, #-8]
0x06AD6E04: 7f0101eb  cmp x11, x1
0x06AD6E08: 00010054  b.eq #0x6ad6e28
0x06AD6E0C: 290500f1  subs x9, x9, #1
0x06AD6E10: 4a410091  add x10, x10, #0x10
0x06AD6E14: 61ffff54  b.ne #0x6ad6e00
0x06AD6E18: e00318aa  mov x0, x24
0x06AD6E1C: e2031f2a  mov w2, wzr
0x06AD6E20: 3cff1997  bl #0x3156b10
0x06AD6E24: 04000014  b #0x6ad6e34
0x06AD6E28: 490180b9  ldrsw x9, [x10]
0x06AD6E2C: 0811098b  add x8, x8, x9, lsl #4
0x06AD6E30: 00e10491  add x0, x8, #0x138
0x06AD6E34: 080440a9  ldp x8, x1, [x0]
0x06AD6E38: e00318aa  mov x0, x24
0x06AD6E3C: f31300f9  str x19, [sp, #0x20]
0x06AD6E40: 00013fd6  blr x8
0x06AD6E44: 203000b4  cbz x0, #0x6ad7448
0x06AD6E48: e86200d0  adrp x8, #0x7734000
0x06AD6E4C: 081d42f9  ldr x8, [x8, #0x438]
0x06AD6E50: 3c5d0090  adrp x28, #0x767a000
0x06AD6E54: f66200d0  adrp x22, #0x7734000
0x06AD6E58: 9c4f42f9  ldr x28, [x28, #0x498]
0x06AD6E5C: d62a42f9  ldr x22, [x22, #0x450]
0x06AD6E60: 010140f9  ldr x1, [x8]
0x06AD6E64: e8e30091  add x8, sp, #0x38
0x06AD6E68: 80b85597  bl #0x4045068
0x06AD6E6C: e083c33c  ldur q0, [sp, #0x38]
0x06AD6E70: e82740f9  ldr x8, [sp, #0x48]
0x06AD6E74: e017803d  str q0, [sp, #0x50]
0x06AD6E78: e83300f9  str x8, [sp, #0x60]
0x06AD6E7C: e86200d0  adrp x8, #0x7734000
0x06AD6E80: 081542f9  ldr x8, [x8, #0x428]
0x06AD6E84: 010140f9  ldr x1, [x8]
0x06AD6E88: e0430191  add x0, sp, #0x50
0x06AD6E8C: cafa9497  bl #0x50159b4
0x06AD6E90: 20230036  tbz w0, #0, #0x6ad72f4
0x06AD6E94: f33340f9  ldr x19, [sp, #0x60]
0x06AD6E98: d32c00b4  cbz x19, #0x6ad7430
0x06AD6E9C: 68624039  ldrb w8, [x19, #0x18]
0x06AD6EA0: e8feff34  cbz w8, #0x6ad6e7c
0x06AD6EA4: 681640f9  ldr x8, [x19, #0x28]
0x06AD6EA8: a8feffb4  cbz x8, #0x6ad6e7c
0x06AD6EAC: 982640f9  ldr x24, [x20, #0x48]
0x06AD6EB0: 382c00b4  cbz x24, #0x6ad7434
0x06AD6EB4: 080340f9  ldr x8, [x24]
0x06AD6EB8: ea5c00b0  adrp x10, #0x7673000
0x06AD6EBC: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD6EC0: 4a6d46f9  ldr x10, [x10, #0xcd8]
0x06AD6EC4: 410140f9  ldr x1, [x10]
0x06AD6EC8: 290100b4  cbz x9, #0x6ad6eec
0x06AD6ECC: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD6ED0: 4a210091  add x10, x10, #8
0x06AD6ED4: 4b815ff8  ldur x11, [x10, #-8]
0x06AD6ED8: 7f0101eb  cmp x11, x1
0x06AD6EDC: 00010054  b.eq #0x6ad6efc
0x06AD6EE0: 290500f1  subs x9, x9, #1
0x06AD6EE4: 4a410091  add x10, x10, #0x10
0x06AD6EE8: 61ffff54  b.ne #0x6ad6ed4
0x06AD6EEC: e00318aa  mov x0, x24
0x06AD6EF0: e2031f2a  mov w2, wzr
0x06AD6EF4: 07ff1997  bl #0x3156b10
0x06AD6EF8: 04000014  b #0x6ad6f08
0x06AD6EFC: 490180b9  ldrsw x9, [x10]
0x06AD6F00: 0811098b  add x8, x8, x9, lsl #4
0x06AD6F04: 00e10491  add x0, x8, #0x138
0x06AD6F08: 080440a9  ldp x8, x1, [x0]
0x06AD6F0C: e00318aa  mov x0, x24
0x06AD6F10: 00013fd6  blr x8
0x06AD6F14: 681640f9  ldr x8, [x19, #0x28]
0x06AD6F18: 082900b4  cbz x8, #0x6ad7438
0x06AD6F1C: 081140f9  ldr x8, [x8, #0x20]
0x06AD6F20: 1f0008eb  cmp x0, x8
0x06AD6F24: cafaff54  b.ge #0x6ad6e7c
0x06AD6F28: 981e40f9  ldr x24, [x20, #0x38]
0x06AD6F2C: 982800b4  cbz x24, #0x6ad743c
0x06AD6F30: 080340f9  ldr x8, [x24]
0x06AD6F34: 7d1240f9  ldr x29, [x19, #0x20]
0x06AD6F38: 810340f9  ldr x1, [x28]
0x06AD6F3C: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD6F40: 290100b4  cbz x9, #0x6ad6f64
0x06AD6F44: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD6F48: 4a210091  add x10, x10, #8
0x06AD6F4C: 4b815ff8  ldur x11, [x10, #-8]
0x06AD6F50: 7f0101eb  cmp x11, x1
0x06AD6F54: 00010054  b.eq #0x6ad6f74
0x06AD6F58: 290500f1  subs x9, x9, #1
0x06AD6F5C: 4a410091  add x10, x10, #0x10
0x06AD6F60: 61ffff54  b.ne #0x6ad6f4c
0x06AD6F64: 22018052  movz w2, #0x9
0x06AD6F68: e00318aa  mov x0, x24
0x06AD6F6C: e9fe1997  bl #0x3156b10
0x06AD6F70: 05000014  b #0x6ad6f84
0x06AD6F74: 490140b9  ldr w9, [x10]
0x06AD6F78: 29250011  add w9, w9, #9
0x06AD6F7C: 08d1298b  add x8, x8, w9, sxtw #4
0x06AD6F80: 00e10491  add x0, x8, #0x138
0x06AD6F84: 080840a9  ldp x8, x2, [x0]
0x06AD6F88: e10740f9  ldr x1, [sp, #8]
0x06AD6F8C: e00318aa  mov x0, x24
0x06AD6F90: 00013fd6  blr x8
0x06AD6F94: 7d2500b4  cbz x29, #0x6ad7440
0x06AD6F98: a90f40f9  ldr x9, [x29, #0x18]
0x06AD6F9C: 492500b4  cbz x9, #0x6ad7444
0x06AD6FA0: 281940b9  ldr w8, [x9, #0x18]
0x06AD6FA4: 1f050071  cmp w8, #1
0x06AD6FA8: abf6ff54  b.lt #0x6ad6e7c
0x06AD6FAC: f80300aa  mov x24, x0
0x06AD6FB0: ea031f2a  mov w10, wzr
0x06AD6FB4: e90b00f9  str x9, [sp, #0x10]
0x06AD6FB8: 5f01086b  cmp w10, w8
0x06AD6FBC: 82230054  b.hs #0x6ad742c
0x06AD6FC0: 28cd2a8b  add x8, x9, w10, sxtw #3
0x06AD6FC4: 081140f9  ldr x8, [x8, #0x20]
0x06AD6FC8: e82200b4  cbz x8, #0x6ad7424
0x06AD6FCC: 170d40f9  ldr x23, [x8, #0x18]
0x06AD6FD0: ea1f00b9  str w10, [sp, #0x1c]
0x06AD6FD4: b72200b4  cbz x23, #0x6ad7428
0x06AD6FD8: e80e40f9  ldr x8, [x23, #0x18]
0x06AD6FDC: 1f050071  cmp w8, #1
0x06AD6FE0: cb140054  b.lt #0x6ad7278
0x06AD6FE4: f5031faa  mov x21, xzr
0x06AD6FE8: 087d4092  and x8, x8, #0xffffffff
0x06AD6FEC: bf4228eb  cmp x21, w8, uxtw
0x06AD6FF0: 42200054  b.hs #0x6ad73f8
0x06AD6FF4: e80e158b  add x8, x23, x21, lsl #3
0x06AD6FF8: 131140f9  ldr x19, [x8, #0x20]
0x06AD6FFC: c00240f9  ldr x0, [x22]
0x06AD7000: 28a71a97  bl #0x3180ca0
0x06AD7004: f90300aa  mov x25, x0
0x06AD7008: e1031faa  mov x1, xzr
0x06AD700C: 7c0db097  bl #0x56da5fc
0x06AD7010: e00314aa  mov x0, x20
0x06AD7014: abfbff97  bl #0x6ad5ec0
0x06AD7018: 201f00b4  cbz x0, #0x6ad73fc
0x06AD701C: e10318aa  mov x1, x24
0x06AD7020: e2031faa  mov x2, xzr
0x06AD7024: 4976db97  bl #0x61b4948
0x06AD7028: e0000036  tbz w0, #0, #0x6ad7044
0x06AD702C: 131f00b4  cbz x19, #0x6ad740c
0x06AD7030: 681240b9  ldr w8, [x19, #0x10]
0x06AD7034: e92f40b9  ldr w9, [sp, #0x2c]
0x06AD7038: 1f01096b  cmp w8, w9
0x06AD703C: 60000054  b.eq #0x6ad7048
0x06AD7040: 8a000014  b #0x6ad7268
0x06AD7044: 331e00b4  cbz x19, #0x6ad7408
0x06AD7048: 690e40f9  ldr x9, [x19, #0x18]
0x06AD704C: a91d00b4  cbz x9, #0x6ad7400
0x06AD7050: 9a1e40f9  ldr x26, [x20, #0x38]
0x06AD7054: 9a1d00b4  cbz x26, #0x6ad7404
0x06AD7058: 480340f9  ldr x8, [x26]
0x06AD705C: 3b0940f9  ldr x27, [x9, #0x10]
0x06AD7060: 810340f9  ldr x1, [x28]
0x06AD7064: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD7068: 290100b4  cbz x9, #0x6ad708c
0x06AD706C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD7070: 4a210091  add x10, x10, #8
0x06AD7074: 4b815ff8  ldur x11, [x10, #-8]
0x06AD7078: 7f0101eb  cmp x11, x1
0x06AD707C: 00010054  b.eq #0x6ad709c
0x06AD7080: 290500f1  subs x9, x9, #1
0x06AD7084: 4a410091  add x10, x10, #0x10
0x06AD7088: 61ffff54  b.ne #0x6ad7074
0x06AD708C: 22018052  movz w2, #0x9
0x06AD7090: e0031aaa  mov x0, x26
0x06AD7094: 9ffe1997  bl #0x3156b10
0x06AD7098: 05000014  b #0x6ad70ac
0x06AD709C: 490140b9  ldr w9, [x10]
0x06AD70A0: 29250011  add w9, w9, #9
0x06AD70A4: 08d1298b  add x8, x8, w9, sxtw #4
0x06AD70A8: 00e10491  add x0, x8, #0x138
0x06AD70AC: 080840a9  ldp x8, x2, [x0]
0x06AD70B0: e0031aaa  mov x0, x26
0x06AD70B4: e1031baa  mov x1, x27
0x06AD70B8: 00013fd6  blr x8
0x06AD70BC: fa0300aa  mov x26, x0
0x06AD70C0: 400d00b4  cbz x0, #0x6ad7268
0x06AD70C4: 991a00b4  cbz x25, #0x6ad7414
0x06AD70C8: a81340b9  ldr w8, [x29, #0x10]
0x06AD70CC: 281300b9  str w8, [x25, #0x10]
0x06AD70D0: 9b1640f9  ldr x27, [x20, #0x28]
0x06AD70D4: fb1900b4  cbz x27, #0x6ad7410
0x06AD70D8: 680340f9  ldr x8, [x27]
0x06AD70DC: ea600090  adrp x10, #0x76f3000
0x06AD70E0: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD70E4: 4ad545f9  ldr x10, [x10, #0xba8]
0x06AD70E8: 410140f9  ldr x1, [x10]
0x06AD70EC: 290100b4  cbz x9, #0x6ad7110
0x06AD70F0: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD70F4: 4a210091  add x10, x10, #8
0x06AD70F8: 4b815ff8  ldur x11, [x10, #-8]
0x06AD70FC: 7f0101eb  cmp x11, x1
0x06AD7100: 00010054  b.eq #0x6ad7120
0x06AD7104: 290500f1  subs x9, x9, #1
0x06AD7108: 4a410091  add x10, x10, #0x10
0x06AD710C: 61ffff54  b.ne #0x6ad70f8
0x06AD7110: 22008052  movz w2, #0x1
0x06AD7114: e0031baa  mov x0, x27
0x06AD7118: 7efe1997  bl #0x3156b10
0x06AD711C: 05000014  b #0x6ad7130
0x06AD7120: 490140b9  ldr w9, [x10]
0x06AD7124: 29050011  add w9, w9, #1
0x06AD7128: 08d1298b  add x8, x8, w9, sxtw #4
0x06AD712C: 00e10491  add x0, x8, #0x138
0x06AD7130: 080440a9  ldp x8, x1, [x0]
0x06AD7134: e0031baa  mov x0, x27
0x06AD7138: 00013fd6  blr x8
0x06AD713C: f51b00f9  str x21, [sp, #0x30]
0x06AD7140: 685e0090  adrp x8, #0x76a3000
0x06AD7144: 08c944f9  ldr x8, [x8, #0x990]
0x06AD7148: fb0300aa  mov x27, x0
0x06AD714C: f5031aaa  mov x21, x26
0x06AD7150: fa0313aa  mov x26, x19
0x06AD7154: 000140f9  ldr x0, [x8]
0x06AD7158: f30317aa  mov x19, x23
0x06AD715C: f70318aa  mov x23, x24
0x06AD7160: f80314aa  mov x24, x20
0x06AD7164: f4031daa  mov x20, x29
0x06AD7168: fd0316aa  mov x29, x22
0x06AD716C: f6031caa  mov x22, x28
0x06AD7170: cca61a97  bl #0x3180ca0
0x06AD7174: e86200b0  adrp x8, #0x7734000
0x06AD7178: 082542f9  ldr x8, [x8, #0x448]
0x06AD717C: fc0300aa  mov x28, x0
0x06AD7180: 020140f9  ldr x2, [x8]
0x06AD7184: e10319aa  mov x1, x25
0x06AD7188: e3031faa  mov x3, xzr
0x06AD718C: e6f29d97  bl #0x5253d24
0x06AD7190: 685e0090  adrp x8, #0x76a3000
0x06AD7194: 08c544f9  ldr x8, [x8, #0x988]
0x06AD7198: 020140f9  ldr x2, [x8]
0x06AD719C: e0031baa  mov x0, x27
0x06AD71A0: e1031caa  mov x1, x28
0x06AD71A4: 034f4597  bl #0x3c2adb0
0x06AD71A8: fc0316aa  mov x28, x22
0x06AD71AC: f6031daa  mov x22, x29
0x06AD71B0: fd0314aa  mov x29, x20
0x06AD71B4: f40318aa  mov x20, x24
0x06AD71B8: f80317aa  mov x24, x23
0x06AD71BC: f70313aa  mov x23, x19
0x06AD71C0: f3031aaa  mov x19, x26
0x06AD71C4: fa0315aa  mov x26, x21
0x06AD71C8: f51b40f9  ldr x21, [sp, #0x30]
0x06AD71CC: e0040037  tbnz w0, #0, #0x6ad7268
0x06AD71D0: 9b1e40f9  ldr x27, [x20, #0x38]
0x06AD71D4: 3b1200b4  cbz x27, #0x6ad7418
0x06AD71D8: 680340f9  ldr x8, [x27]
0x06AD71DC: 810340f9  ldr x1, [x28]
0x06AD71E0: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD71E4: 290100b4  cbz x9, #0x6ad7208
0x06AD71E8: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD71EC: 4a210091  add x10, x10, #8
0x06AD71F0: 4b815ff8  ldur x11, [x10, #-8]
0x06AD71F4: 7f0101eb  cmp x11, x1
0x06AD71F8: 00010054  b.eq #0x6ad7218
0x06AD71FC: 290500f1  subs x9, x9, #1
0x06AD7200: 4a410091  add x10, x10, #0x10
0x06AD7204: 61ffff54  b.ne #0x6ad71f0
0x06AD7208: 02038052  movz w2, #0x18
0x06AD720C: e0031baa  mov x0, x27
0x06AD7210: 40fe1997  bl #0x3156b10
0x06AD7214: 05000014  b #0x6ad7228
0x06AD7218: 490140b9  ldr w9, [x10]
0x06AD721C: 29610011  add w9, w9, #0x18
0x06AD7220: 08d1298b  add x8, x8, w9, sxtw #4
0x06AD7224: 00e10491  add x0, x8, #0x138
0x06AD7228: 080c40a9  ldp x8, x3, [x0]
0x06AD722C: e0031baa  mov x0, x27
0x06AD7230: e1031aaa  mov x1, x26
0x06AD7234: e20318aa  mov x2, x24
0x06AD7238: 00013fd6  blr x8
0x06AD723C: 60010036  tbz w0, #0, #0x6ad7268
0x06AD7240: 680e40f9  ldr x8, [x19, #0x18]
0x06AD7244: c80e00b4  cbz x8, #0x6ad741c
0x06AD7248: e01340f9  ldr x0, [sp, #0x20]
0x06AD724C: a00e00b4  cbz x0, #0x6ad7420
0x06AD7250: 010d40f9  ldr x1, [x8, #0x18]
0x06AD7254: 685c0090  adrp x8, #0x7663000
0x06AD7258: 08f546f9  ldr x8, [x8, #0xde8]
0x06AD725C: 020140f9  ldr x2, [x8]
0x06AD7260: 67b55597  bl #0x40447fc
0x06AD7264: 80010037  tbnz w0, #0, #0x6ad7294
0x06AD7268: e81a40b9  ldr w8, [x23, #0x18]
0x06AD726C: b5060091  add x21, x21, #1
0x06AD7270: bfc228eb  cmp x21, w8, sxtw
0x06AD7274: cbebff54  b.lt #0x6ad6fec
0x06AD7278: e90b40f9  ldr x9, [sp, #0x10]
0x06AD727C: ea1f40b9  ldr w10, [sp, #0x1c]
0x06AD7280: 281940b9  ldr w8, [x9, #0x18]
0x06AD7284: 4a050011  add w10, w10, #1
0x06AD7288: 5f01086b  cmp w10, w8
0x06AD728C: 6be9ff54  b.lt #0x6ad6fb8
0x06AD7290: fbfeff17  b #0x6ad6e7c
0x06AD7294: 391340b9  ldr w25, [x25, #0x10]
0x06AD7298: 3f070031  cmn w25, #1
0x06AD729C: e0feff54  b.eq #0x6ad7278
0x06AD72A0: 961640f9  ldr x22, [x20, #0x28]
0x06AD72A4: 560d00b4  cbz x22, #0x6ad744c
0x06AD72A8: c80240f9  ldr x8, [x22]
0x06AD72AC: ea600090  adrp x10, #0x76f3000
0x06AD72B0: 750e40f9  ldr x21, [x19, #0x18]
0x06AD72B4: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD72B8: 4ad545f9  ldr x10, [x10, #0xba8]
0x06AD72BC: 410140f9  ldr x1, [x10]
0x06AD72C0: 290100b4  cbz x9, #0x6ad72e4
0x06AD72C4: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD72C8: 4a210091  add x10, x10, #8
0x06AD72CC: 4b815ff8  ldur x11, [x10, #-8]
0x06AD72D0: 7f0101eb  cmp x11, x1
0x06AD72D4: 40030054  b.eq #0x6ad733c
0x06AD72D8: 290500f1  subs x9, x9, #1
0x06AD72DC: 4a410091  add x10, x10, #0x10
0x06AD72E0: 61ffff54  b.ne #0x6ad72cc
0x06AD72E4: 62008052  movz w2, #0x3
0x06AD72E8: e00316aa  mov x0, x22
0x06AD72EC: 09fe1997  bl #0x3156b10
0x06AD72F0: 17000014  b #0x6ad734c
0x06AD72F4: e86200b0  adrp x8, #0x7734000
0x06AD72F8: 081142f9  ldr x8, [x8, #0x420]
0x06AD72FC: e0430191  add x0, sp, #0x50
0x06AD7300: 010140f9  ldr x1, [x8]
0x06AD7304: abf99497  bl #0x50159b0
0x06AD7308: e90340f9  ldr x9, [sp]
0x06AD730C: 08008012  movn w8, #0
0x06AD7310: f5031faa  mov x21, xzr
0x06AD7314: 280100b9  str w8, [x9]
0x06AD7318: e00315aa  mov x0, x21
0x06AD731C: f44f4ca9  ldp x20, x19, [sp, #0xc0]
0x06AD7320: f6574ba9  ldp x22, x21, [sp, #0xb0]
0x06AD7324: f85f4aa9  ldp x24, x23, [sp, #0xa0]
0x06AD7328: fa6749a9  ldp x26, x25, [sp, #0x90]
0x06AD732C: fc6f48a9  ldp x28, x27, [sp, #0x80]
0x06AD7330: fd7b47a9  ldp x29, x30, [sp, #0x70]
0x06AD7334: ff430391  add sp, sp, #0xd0
0x06AD7338: c0035fd6  ret
0x06AD733C: 490140b9  ldr w9, [x10]
0x06AD7340: 290d0011  add w9, w9, #3
0x06AD7344: 08d1298b  add x8, x8, w9, sxtw #4
0x06AD7348: 00e10491  add x0, x8, #0x138
0x06AD734C: 080840a9  ldp x8, x2, [x0]
0x06AD7350: e00316aa  mov x0, x22
0x06AD7354: e103192a  mov w1, w25
0x06AD7358: 00013fd6  blr x8
0x06AD735C: b50700b4  cbz x21, #0x6ad7450
0x06AD7360: 941640f9  ldr x20, [x20, #0x28]
0x06AD7364: 940700b4  cbz x20, #0x6ad7454
0x06AD7368: 880240f9  ldr x8, [x20]
0x06AD736C: ea600090  adrp x10, #0x76f3000
0x06AD7370: b61240f9  ldr x22, [x21, #0x20]
0x06AD7374: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD7378: 4ad545f9  ldr x10, [x10, #0xba8]
0x06AD737C: 410140f9  ldr x1, [x10]
0x06AD7380: 290100b4  cbz x9, #0x6ad73a4
0x06AD7384: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD7388: 4a210091  add x10, x10, #8
0x06AD738C: 4b815ff8  ldur x11, [x10, #-8]
0x06AD7390: 7f0101eb  cmp x11, x1
0x06AD7394: 00010054  b.eq #0x6ad73b4
0x06AD7398: 290500f1  subs x9, x9, #1
0x06AD739C: 4a410091  add x10, x10, #0x10
0x06AD73A0: 61ffff54  b.ne #0x6ad738c
0x06AD73A4: 42008052  movz w2, #0x2
0x06AD73A8: e00314aa  mov x0, x20
0x06AD73AC: d9fd1997  bl #0x3156b10
0x06AD73B0: 05000014  b #0x6ad73c4
0x06AD73B4: 490140b9  ldr w9, [x10]
0x06AD73B8: 29090011  add w9, w9, #2
0x06AD73BC: 08d1298b  add x8, x8, w9, sxtw #4
0x06AD73C0: 00e10491  add x0, x8, #0x138
0x06AD73C4: 080c40a9  ldp x8, x3, [x0]
0x06AD73C8: e00314aa  mov x0, x20
0x06AD73CC: e10316aa  mov x1, x22
0x06AD73D0: e203192a  mov w2, w25
0x06AD73D4: 00013fd6  blr x8
0x06AD73D8: e80340f9  ldr x8, [sp]
0x06AD73DC: e0430191  add x0, sp, #0x50
0x06AD73E0: 190100b9  str w25, [x8]
0x06AD73E4: e86200b0  adrp x8, #0x7734000
0x06AD73E8: 081142f9  ldr x8, [x8, #0x420]
0x06AD73EC: 010140f9  ldr x1, [x8]
0x06AD73F0: 70f99497  bl #0x50159b0
0x06AD73F4: c9ffff17  b #0x6ad7318
0x06AD73F8: 2fa61a97  bl #0x3180cb4
0x06AD73FC: 2ca61a97  bl #0x3180cac
0x06AD7400: 2ba61a97  bl #0x3180cac
0x06AD7404: 2aa61a97  bl #0x3180cac
0x06AD7408: 29a61a97  bl #0x3180cac
0x06AD740C: 28a61a97  bl #0x3180cac
0x06AD7410: 27a61a97  bl #0x3180cac
0x06AD7414: 26a61a97  bl #0x3180cac
0x06AD7418: 25a61a97  bl #0x3180cac
0x06AD741C: 24a61a97  bl #0x3180cac
0x06AD7420: 23a61a97  bl #0x3180cac
0x06AD7424: 22a61a97  bl #0x3180cac
0x06AD7428: 21a61a97  bl #0x3180cac
0x06AD742C: 22a61a97  bl #0x3180cb4
0x06AD7430: 1fa61a97  bl #0x3180cac
0x06AD7434: 1ea61a97  bl #0x3180cac
0x06AD7438: 1da61a97  bl #0x3180cac
0x06AD743C: 1ca61a97  bl #0x3180cac
0x06AD7440: 1ba61a97  bl #0x3180cac
0x06AD7444: 1aa61a97  bl #0x3180cac
0x06AD7448: 19a61a97  bl #0x3180cac
0x06AD744C: 18a61a97  bl #0x3180cac
0x06AD7450: 17a61a97  bl #0x3180cac
0x06AD7454: 16a61a97  bl #0x3180cac
0x06AD7458: 21000014  b #0x6ad74dc
0x06AD745C: 20000014  b #0x6ad74dc
0x06AD7460: 1f000014  b #0x6ad74dc
0x06AD7464: 1e000014  b #0x6ad74dc
0x06AD7468: 1d000014  b #0x6ad74dc
0x06AD746C: 1c000014  b #0x6ad74dc
0x06AD7470: 1b000014  b #0x6ad74dc
0x06AD7474: 1a000014  b #0x6ad74dc
0x06AD7478: 19000014  b #0x6ad74dc
0x06AD747C: 18000014  b #0x6ad74dc
0x06AD7480: 17000014  b #0x6ad74dc
0x06AD7484: 16000014  b #0x6ad74dc
0x06AD7488: 15000014  b #0x6ad74dc
0x06AD748C: 14000014  b #0x6ad74dc
0x06AD7490: 13000014  b #0x6ad74dc
0x06AD7494: 12000014  b #0x6ad74dc
0x06AD7498: 11000014  b #0x6ad74dc
0x06AD749C: 10000014  b #0x6ad74dc
0x06AD74A0: 0f000014  b #0x6ad74dc
0x06AD74A4: 0e000014  b #0x6ad74dc
0x06AD74A8: 0d000014  b #0x6ad74dc
0x06AD74AC: 0c000014  b #0x6ad74dc
0x06AD74B0: 0b000014  b #0x6ad74dc
0x06AD74B4: 0a000014  b #0x6ad74dc
0x06AD74B8: 09000014  b #0x6ad74dc
0x06AD74BC: 08000014  b #0x6ad74dc
0x06AD74C0: 07000014  b #0x6ad74dc
0x06AD74C4: 06000014  b #0x6ad74dc
0x06AD74C8: 05000014  b #0x6ad74dc
0x06AD74CC: 04000014  b #0x6ad74dc
0x06AD74D0: 03000014  b #0x6ad74dc
0x06AD74D4: 02000014  b #0x6ad74dc
0x06AD74D8: 01000014  b #0x6ad74dc
0x06AD74DC: f40300aa  mov x20, x0
0x06AD74E0: 3f040071  cmp w1, #1
0x06AD74E4: a1010054  b.ne #0x6ad7518
0x06AD74E8: e00314aa  mov x0, x20
0x06AD74EC: 09dd1b94  bl #0x71ce910
0x06AD74F0: 150040f9  ldr x21, [x0]
0x06AD74F4: 0bdd1b94  bl #0x71ce920
0x06AD74F8: e86200b0  adrp x8, #0x7734000
0x06AD74FC: 081142f9  ldr x8, [x8, #0x420]
0x06AD7500: e0430191  add x0, sp, #0x50
0x06AD7504: 010140f9  ldr x1, [x8]
0x06AD7508: 2af99497  bl #0x50159b0
0x06AD750C: f5efffb4  cbz x21, #0x6ad7308
0x06AD7510: e00315aa  mov x0, x21
0x06AD7514: e4a51a97  bl #0x3180ca4
0x06AD7518: f5031faa  mov x21, xzr
0x06AD751C: 02000014  b #0x6ad7524
0x06AD7520: f40300aa  mov x20, x0
0x06AD7524: e86200b0  adrp x8, #0x7734000
0x06AD7528: 081142f9  ldr x8, [x8, #0x420]
0x06AD752C: 010140f9  ldr x1, [x8]
0x06AD7530: e0430191  add x0, sp, #0x50
0x06AD7534: 1ff99497  bl #0x50159b0
0x06AD7538: 750000b5  cbnz x21, #0x6ad7544
0x06AD753C: e00314aa  mov x0, x20
0x06AD7540: 06391e97  bl #0x3265958
0x06AD7544: e00315aa  mov x0, x21
0x06AD7548: d7a51a97  bl #0x3180ca4
0x06AD754C: f2c70c97  bl #0x2e09514

; RVA 0x6AD7550 | private Entity CreateExcitementEntity(string itemId, BoardItemPosition position) { }
; bytes=392 sha256=f113c8a32f4edc1765105d9eb1a256da740e85d9f0dab4152fada14d7973c346 status=arm64_complete_bound indexed_start=True
0x06AD7550: ff0301d1  sub sp, sp, #0x40
0x06AD7554: fe5f01a9  stp x30, x23, [sp, #0x10]
0x06AD7558: f65702a9  stp x22, x21, [sp, #0x20]
0x06AD755C: f44f03a9  stp x20, x19, [sp, #0x30]
0x06AD7560: 969200f0  adrp x22, #0x7d2a000
0x06AD7564: c86e6b39  ldrb w8, [x22, #0xadb]
0x06AD7568: f40302aa  mov x20, x2
0x06AD756C: f50301aa  mov x21, x1
0x06AD7570: f30300aa  mov x19, x0
0x06AD7574: 88010037  tbnz w8, #0, #0x6ad75a4
0x06AD7578: 205d00f0  adrp x0, #0x767e000
0x06AD757C: 00dc42f9  ldr x0, [x0, #0x5b8]
0x06AD7580: 26a51a97  bl #0x3180a18
0x06AD7584: 005d00f0  adrp x0, #0x767a000
0x06AD7588: 004c42f9  ldr x0, [x0, #0x498]
0x06AD758C: 23a51a97  bl #0x3180a18
0x06AD7590: 205d00f0  adrp x0, #0x767e000
0x06AD7594: 00e842f9  ldr x0, [x0, #0x5d0]
0x06AD7598: 20a51a97  bl #0x3180a18
0x06AD759C: 28008052  movz w8, #0x1
0x06AD75A0: c86e2b39  strb w8, [x22, #0xadb]
0x06AD75A4: 761e40f9  ldr x22, [x19, #0x38]
0x06AD75A8: 760900b4  cbz x22, #0x6ad76d4
0x06AD75AC: 0a5d00f0  adrp x10, #0x767a000
0x06AD75B0: c80240f9  ldr x8, [x22]
0x06AD75B4: 4a4d42f9  ldr x10, [x10, #0x498]
0x06AD75B8: 375d00f0  adrp x23, #0x767e000
0x06AD75BC: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD75C0: 410140f9  ldr x1, [x10]
0x06AD75C4: f7ea42f9  ldr x23, [x23, #0x5d0]
0x06AD75C8: 290100b4  cbz x9, #0x6ad75ec
0x06AD75CC: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD75D0: 4a210091  add x10, x10, #8
0x06AD75D4: 4b815ff8  ldur x11, [x10, #-8]
0x06AD75D8: 7f0101eb  cmp x11, x1
0x06AD75DC: 00010054  b.eq #0x6ad75fc
0x06AD75E0: 290500f1  subs x9, x9, #1
0x06AD75E4: 4a410091  add x10, x10, #0x10
0x06AD75E8: 61ffff54  b.ne #0x6ad75d4
0x06AD75EC: 22018052  movz w2, #0x9
0x06AD75F0: e00316aa  mov x0, x22
0x06AD75F4: 47fd1997  bl #0x3156b10
0x06AD75F8: 05000014  b #0x6ad760c
0x06AD75FC: 490140b9  ldr w9, [x10]
0x06AD7600: 29250011  add w9, w9, #9
0x06AD7604: 08d1298b  add x8, x8, w9, sxtw #4
0x06AD7608: 00e10491  add x0, x8, #0x138
0x06AD760C: 080840a9  ldp x8, x2, [x0]
0x06AD7610: e00316aa  mov x0, x22
0x06AD7614: e10315aa  mov x1, x21
0x06AD7618: 00013fd6  blr x8
0x06AD761C: e20240f9  ldr x2, [x23]
0x06AD7620: f50300aa  mov x21, x0
0x06AD7624: e0230091  add x0, sp, #8
0x06AD7628: 01018052  movz w1, #0x8
0x06AD762C: ff0700f9  str xzr, [sp, #8]
0x06AD7630: 1b915e97  bl #0x427ba9c
0x06AD7634: e10740f9  ldr x1, [sp, #8]
0x06AD7638: e00314aa  mov x0, x20
0x06AD763C: e2031faa  mov x2, xzr
0x06AD7640: e3031faa  mov x3, xzr
0x06AD7644: e4031faa  mov x4, xzr
0x06AD7648: 60f1f897  bl #0x6913bc8
0x06AD764C: 743a40f9  ldr x20, [x19, #0x70]
0x06AD7650: 340400b4  cbz x20, #0x6ad76d4
0x06AD7654: 2a5d00f0  adrp x10, #0x767e000
0x06AD7658: 880240f9  ldr x8, [x20]
0x06AD765C: 4add42f9  ldr x10, [x10, #0x5b8]
0x06AD7660: f30300aa  mov x19, x0
0x06AD7664: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD7668: 410140f9  ldr x1, [x10]
0x06AD766C: 290100b4  cbz x9, #0x6ad7690
0x06AD7670: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD7674: 4a210091  add x10, x10, #8
0x06AD7678: 4b815ff8  ldur x11, [x10, #-8]
0x06AD767C: 7f0101eb  cmp x11, x1
0x06AD7680: 00010054  b.eq #0x6ad76a0
0x06AD7684: 290500f1  subs x9, x9, #1
0x06AD7688: 4a410091  add x10, x10, #0x10
0x06AD768C: 61ffff54  b.ne #0x6ad7678
0x06AD7690: e00314aa  mov x0, x20
0x06AD7694: e2031f2a  mov w2, wzr
0x06AD7698: 1efd1997  bl #0x3156b10
0x06AD769C: 04000014  b #0x6ad76ac
0x06AD76A0: 490180b9  ldrsw x9, [x10]
0x06AD76A4: 0811098b  add x8, x8, x9, lsl #4
0x06AD76A8: 00e10491  add x0, x8, #0x138
0x06AD76AC: 080c40a9  ldp x8, x3, [x0]
0x06AD76B0: e00314aa  mov x0, x20
0x06AD76B4: e10315aa  mov x1, x21
0x06AD76B8: e20313aa  mov x2, x19
0x06AD76BC: 00013fd6  blr x8
0x06AD76C0: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06AD76C4: f65742a9  ldp x22, x21, [sp, #0x20]
0x06AD76C8: fe5f41a9  ldp x30, x23, [sp, #0x10]
0x06AD76CC: ff030191  add sp, sp, #0x40
0x06AD76D0: c0035fd6  ret
0x06AD76D4: 76a51a97  bl #0x3180cac

; RVA 0x6AD76D8 | private void ReportGhostModeInteraction(Entity excitementEntity, Entity producerEntity, IMergeItem producerItem, int excitementId) { }
; bytes=1136 sha256=58a5334b530cfc836642046c225fc1739b3529183601ac2dd6ee42957d4b6338 status=arm64_complete_bound indexed_start=True
0x06AD76D8: ffc301d1  sub sp, sp, #0x70
0x06AD76DC: fd7b01a9  stp x29, x30, [sp, #0x10]
0x06AD76E0: fc6f02a9  stp x28, x27, [sp, #0x20]
0x06AD76E4: fa6703a9  stp x26, x25, [sp, #0x30]
0x06AD76E8: f85f04a9  stp x24, x23, [sp, #0x40]
0x06AD76EC: f65705a9  stp x22, x21, [sp, #0x50]
0x06AD76F0: f44f06a9  stp x20, x19, [sp, #0x60]
0x06AD76F4: 989200f0  adrp x24, #0x7d2a000
0x06AD76F8: 08736b39  ldrb w8, [x24, #0xadc]
0x06AD76FC: f403042a  mov w20, w4
0x06AD7700: f60303aa  mov x22, x3
0x06AD7704: f50302aa  mov x21, x2
0x06AD7708: f70301aa  mov x23, x1
0x06AD770C: f30300aa  mov x19, x0
0x06AD7710: 88040037  tbnz w8, #0, #0x6ad77a0
0x06AD7714: 005d00f0  adrp x0, #0x767a000
0x06AD7718: 009044f9  ldr x0, [x0, #0x920]
0x06AD771C: bfa41a97  bl #0x3180a18
0x06AD7720: 005d00f0  adrp x0, #0x767a000
0x06AD7724: 004c45f9  ldr x0, [x0, #0xa98]
0x06AD7728: bca41a97  bl #0x3180a18
0x06AD772C: 005d00f0  adrp x0, #0x767a000
0x06AD7730: 004c42f9  ldr x0, [x0, #0x498]
0x06AD7734: b9a41a97  bl #0x3180a18
0x06AD7738: 205d00f0  adrp x0, #0x767e000
0x06AD773C: 005042f9  ldr x0, [x0, #0x4a0]
0x06AD7740: b6a41a97  bl #0x3180a18
0x06AD7744: 205d00f0  adrp x0, #0x767e000
0x06AD7748: 005442f9  ldr x0, [x0, #0x4a8]
0x06AD774C: b3a41a97  bl #0x3180a18
0x06AD7750: a05f00b0  adrp x0, #0x76cc000
0x06AD7754: 008c44f9  ldr x0, [x0, #0x918]
0x06AD7758: b0a41a97  bl #0x3180a18
0x06AD775C: a05f00b0  adrp x0, #0x76cc000
0x06AD7760: 008844f9  ldr x0, [x0, #0x910]
0x06AD7764: ada41a97  bl #0x3180a18
0x06AD7768: c05b00b0  adrp x0, #0x7650000
0x06AD776C: 00d046f9  ldr x0, [x0, #0xda0]
0x06AD7770: aaa41a97  bl #0x3180a18
0x06AD7774: c06100b0  adrp x0, #0x7710000
0x06AD7778: 009843f9  ldr x0, [x0, #0x730]
0x06AD777C: a7a41a97  bl #0x3180a18
0x06AD7780: 205d00f0  adrp x0, #0x767e000
0x06AD7784: 00fc42f9  ldr x0, [x0, #0x5f8]
0x06AD7788: a4a41a97  bl #0x3180a18
0x06AD778C: 005d00b0  adrp x0, #0x7678000
0x06AD7790: 00d047f9  ldr x0, [x0, #0xfa0]
0x06AD7794: a1a41a97  bl #0x3180a18
0x06AD7798: 28008052  movz w8, #0x1
0x06AD779C: 08732b39  strb w8, [x24, #0xadc]
0x06AD77A0: 371d00b4  cbz x23, #0x6ad7b44
0x06AD77A4: 085d00f0  adrp x8, #0x767a000
0x06AD77A8: 089144f9  ldr x8, [x8, #0x920]
0x06AD77AC: 781e40f9  ldr x24, [x19, #0x38]
0x06AD77B0: e00317aa  mov x0, x23
0x06AD77B4: 010140f9  ldr x1, [x8]
0x06AD77B8: 73254597  bl #0x3c20d84
0x06AD77BC: 581c00b4  cbz x24, #0x6ad7b44
0x06AD77C0: 0a5d00f0  adrp x10, #0x767a000
0x06AD77C4: 080340f9  ldr x8, [x24]
0x06AD77C8: 4a4d42f9  ldr x10, [x10, #0x498]
0x06AD77CC: f90300aa  mov x25, x0
0x06AD77D0: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD77D4: 410140f9  ldr x1, [x10]
0x06AD77D8: 290100b4  cbz x9, #0x6ad77fc
0x06AD77DC: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD77E0: 4a210091  add x10, x10, #8
0x06AD77E4: 4b815ff8  ldur x11, [x10, #-8]
0x06AD77E8: 7f0101eb  cmp x11, x1
0x06AD77EC: 00010054  b.eq #0x6ad780c
0x06AD77F0: 290500f1  subs x9, x9, #1
0x06AD77F4: 4a410091  add x10, x10, #0x10
0x06AD77F8: 61ffff54  b.ne #0x6ad77e4
0x06AD77FC: 82028052  movz w2, #0x14
0x06AD7800: e00318aa  mov x0, x24
0x06AD7804: c3fc1997  bl #0x3156b10
0x06AD7808: 05000014  b #0x6ad781c
0x06AD780C: 490140b9  ldr w9, [x10]
0x06AD7810: 29510011  add w9, w9, #0x14
0x06AD7814: 08d1298b  add x8, x8, w9, sxtw #4
0x06AD7818: 00e10491  add x0, x8, #0x138
0x06AD781C: 080840a9  ldp x8, x2, [x0]
0x06AD7820: e00318aa  mov x0, x24
0x06AD7824: e10319aa  mov x1, x25
0x06AD7828: 00013fd6  blr x8
0x06AD782C: 793640f9  ldr x25, [x19, #0x68]
0x06AD7830: b91800b4  cbz x25, #0x6ad7b44
0x06AD7834: 3d5d00f0  adrp x29, #0x767e000
0x06AD7838: 2a5d00f0  adrp x10, #0x767e000
0x06AD783C: 280340f9  ldr x8, [x25]
0x06AD7840: bd5342f9  ldr x29, [x29, #0x4a0]
0x06AD7844: 4afd42f9  ldr x10, [x10, #0x5f8]
0x06AD7848: 1c5d00f0  adrp x28, #0x767a000
0x06AD784C: db5b00b0  adrp x27, #0x7650000
0x06AD7850: a10340f9  ldr x1, [x29]
0x06AD7854: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD7858: 5a0140f9  ldr x26, [x10]
0x06AD785C: 9c4f45f9  ldr x28, [x28, #0xa98]
0x06AD7860: 7bd346f9  ldr x27, [x27, #0xda0]
0x06AD7864: f80300aa  mov x24, x0
0x06AD7868: 290100b4  cbz x9, #0x6ad788c
0x06AD786C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD7870: 4a210091  add x10, x10, #8
0x06AD7874: 4b815ff8  ldur x11, [x10, #-8]
0x06AD7878: 7f0101eb  cmp x11, x1
0x06AD787C: 00010054  b.eq #0x6ad789c
0x06AD7880: 290500f1  subs x9, x9, #1
0x06AD7884: 4a410091  add x10, x10, #0x10
0x06AD7888: 61ffff54  b.ne #0x6ad7874
0x06AD788C: e00319aa  mov x0, x25
0x06AD7890: e2031f2a  mov w2, wzr
0x06AD7894: 9ffc1997  bl #0x3156b10
0x06AD7898: 04000014  b #0x6ad78a8
0x06AD789C: 490180b9  ldrsw x9, [x10]
0x06AD78A0: 0811098b  add x8, x8, x9, lsl #4
0x06AD78A4: 00e10491  add x0, x8, #0x138
0x06AD78A8: 081440a9  ldp x8, x5, [x0]
0x06AD78AC: e00319aa  mov x0, x25
0x06AD78B0: e1031aaa  mov x1, x26
0x06AD78B4: e20318aa  mov x2, x24
0x06AD78B8: e30317aa  mov x3, x23
0x06AD78BC: e4031faa  mov x4, xzr
0x06AD78C0: 00013fd6  blr x8
0x06AD78C4: f70300aa  mov x23, x0
0x06AD78C8: e00313aa  mov x0, x19
0x06AD78CC: e10316aa  mov x1, x22
0x06AD78D0: d2000094  bl #0x6ad7c18
0x06AD78D4: 880340f9  ldr x8, [x28]
0x06AD78D8: f80300aa  mov x24, x0
0x06AD78DC: e00308aa  mov x0, x8
0x06AD78E0: f0a41a97  bl #0x3180ca0
0x06AD78E4: e1031faa  mov x1, xzr
0x06AD78E8: f90300aa  mov x25, x0
0x06AD78EC: 4265f997  bl #0x6930df4
0x06AD78F0: 620340f9  ldr x2, [x27]
0x06AD78F4: e0230091  add x0, sp, #8
0x06AD78F8: e103142a  mov w1, w20
0x06AD78FC: ff0700f9  str xzr, [sp, #8]
0x06AD7900: 788f5e97  bl #0x427b6e0
0x06AD7904: 191200b4  cbz x25, #0x6ad7b44
0x06AD7908: e80740f9  ldr x8, [sp, #8]
0x06AD790C: e00319aa  mov x0, x25
0x06AD7910: 180c05f8  str x24, [x0, #0x50]!
0x06AD7914: e10318aa  mov x1, x24
0x06AD7918: 08801ff8  stur x8, [x0, #-8]
0x06AD791C: 2aa41a97  bl #0x31809c4
0x06AD7920: 371100b4  cbz x23, #0x6ad7b44
0x06AD7924: e00317aa  mov x0, x23
0x06AD7928: 190c02f8  str x25, [x0, #0x20]!
0x06AD792C: e10319aa  mov x1, x25
0x06AD7930: 25a41a97  bl #0x31809c4
0x06AD7934: 793640f9  ldr x25, [x19, #0x68]
0x06AD7938: 791000b4  cbz x25, #0x6ad7b44
0x06AD793C: 0a5d00b0  adrp x10, #0x7678000
0x06AD7940: 280340f9  ldr x8, [x25]
0x06AD7944: 4ad147f9  ldr x10, [x10, #0xfa0]
0x06AD7948: a10340f9  ldr x1, [x29]
0x06AD794C: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD7950: 5a0140f9  ldr x26, [x10]
0x06AD7954: 290100b4  cbz x9, #0x6ad7978
0x06AD7958: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD795C: 4a210091  add x10, x10, #8
0x06AD7960: 4b815ff8  ldur x11, [x10, #-8]
0x06AD7964: 7f0101eb  cmp x11, x1
0x06AD7968: 00010054  b.eq #0x6ad7988
0x06AD796C: 290500f1  subs x9, x9, #1
0x06AD7970: 4a410091  add x10, x10, #0x10
0x06AD7974: 61ffff54  b.ne #0x6ad7960
0x06AD7978: e00319aa  mov x0, x25
0x06AD797C: e2031f2a  mov w2, wzr
0x06AD7980: 64fc1997  bl #0x3156b10
0x06AD7984: 04000014  b #0x6ad7994
0x06AD7988: 490180b9  ldrsw x9, [x10]
0x06AD798C: 0811098b  add x8, x8, x9, lsl #4
0x06AD7990: 00e10491  add x0, x8, #0x138
0x06AD7994: 081440a9  ldp x8, x5, [x0]
0x06AD7998: e00319aa  mov x0, x25
0x06AD799C: e1031aaa  mov x1, x26
0x06AD79A0: e20316aa  mov x2, x22
0x06AD79A4: e30315aa  mov x3, x21
0x06AD79A8: e4031faa  mov x4, xzr
0x06AD79AC: 00013fd6  blr x8
0x06AD79B0: 880340f9  ldr x8, [x28]
0x06AD79B4: f50300aa  mov x21, x0
0x06AD79B8: e00308aa  mov x0, x8
0x06AD79BC: b9a41a97  bl #0x3180ca0
0x06AD79C0: e1031faa  mov x1, xzr
0x06AD79C4: f60300aa  mov x22, x0
0x06AD79C8: 0b65f997  bl #0x6930df4
0x06AD79CC: 620340f9  ldr x2, [x27]
0x06AD79D0: e0030091  mov x0, sp
0x06AD79D4: e103142a  mov w1, w20
0x06AD79D8: ff0300f9  str xzr, [sp]
0x06AD79DC: 418f5e97  bl #0x427b6e0
0x06AD79E0: 360b00b4  cbz x22, #0x6ad7b44
0x06AD79E4: e80340f9  ldr x8, [sp]
0x06AD79E8: e00316aa  mov x0, x22
0x06AD79EC: 180c05f8  str x24, [x0, #0x50]!
0x06AD79F0: e10318aa  mov x1, x24
0x06AD79F4: 08801ff8  stur x8, [x0, #-8]
0x06AD79F8: f3a31a97  bl #0x31809c4
0x06AD79FC: 550a00b4  cbz x21, #0x6ad7b44
0x06AD7A00: b45f00b0  adrp x20, #0x76cc000
0x06AD7A04: b85f00b0  adrp x24, #0x76cc000
0x06AD7A08: 948a44f9  ldr x20, [x20, #0x910]
0x06AD7A0C: 188f44f9  ldr x24, [x24, #0x918]
0x06AD7A10: e00315aa  mov x0, x21
0x06AD7A14: 160c02f8  str x22, [x0, #0x20]!
0x06AD7A18: e10316aa  mov x1, x22
0x06AD7A1C: eaa31a97  bl #0x31809c4
0x06AD7A20: e00313aa  mov x0, x19
0x06AD7A24: eff8ff97  bl #0x6ad5de0
0x06AD7A28: 880240f9  ldr x8, [x20]
0x06AD7A2C: f30300aa  mov x19, x0
0x06AD7A30: e00308aa  mov x0, x8
0x06AD7A34: 9ba41a97  bl #0x3180ca0
0x06AD7A38: 010340f9  ldr x1, [x24]
0x06AD7A3C: f40300aa  mov x20, x0
0x06AD7A40: 7eb05597  bl #0x4043c38
0x06AD7A44: 140800b4  cbz x20, #0x6ad7b44
0x06AD7A48: 365d00f0  adrp x22, #0x767e000
0x06AD7A4C: d65642f9  ldr x22, [x22, #0x4a8]
0x06AD7A50: 8a1e40b9  ldr w10, [x20, #0x1c]
0x06AD7A54: 880a40f9  ldr x8, [x20, #0x10]
0x06AD7A58: c90240f9  ldr x9, [x22]
0x06AD7A5C: 4a050011  add w10, w10, #1
0x06AD7A60: 8a1e00b9  str w10, [x20, #0x1c]
0x06AD7A64: 080700b4  cbz x8, #0x6ad7b44
0x06AD7A68: 8a1a80b9  ldrsw x10, [x20, #0x18]
0x06AD7A6C: 0b1940b9  ldr w11, [x8, #0x18]
0x06AD7A70: 5f010b6b  cmp w10, w11
0x06AD7A74: 02010054  b.hs #0x6ad7a94
0x06AD7A78: 49050011  add w9, w10, #1
0x06AD7A7C: 000d0a8b  add x0, x8, x10, lsl #3
0x06AD7A80: 891a00b9  str w9, [x20, #0x18]
0x06AD7A84: 170c02f8  str x23, [x0, #0x20]!
0x06AD7A88: e10317aa  mov x1, x23
0x06AD7A8C: cea31a97  bl #0x31809c4
0x06AD7A90: 07000014  b #0x6ad7aac
0x06AD7A94: 281140f9  ldr x8, [x9, #0x20]
0x06AD7A98: e00314aa  mov x0, x20
0x06AD7A9C: e10317aa  mov x1, x23
0x06AD7AA0: 086140f9  ldr x8, [x8, #0xc0]
0x06AD7AA4: 023940f9  ldr x2, [x8, #0x70]
0x06AD7AA8: 71b25597  bl #0x404446c
0x06AD7AAC: 8a1e40b9  ldr w10, [x20, #0x1c]
0x06AD7AB0: 880a40f9  ldr x8, [x20, #0x10]
0x06AD7AB4: c90240f9  ldr x9, [x22]
0x06AD7AB8: 4a050011  add w10, w10, #1
0x06AD7ABC: 8a1e00b9  str w10, [x20, #0x1c]
0x06AD7AC0: 280400b4  cbz x8, #0x6ad7b44
0x06AD7AC4: 8a1a80b9  ldrsw x10, [x20, #0x18]
0x06AD7AC8: 0b1940b9  ldr w11, [x8, #0x18]
0x06AD7ACC: 5f010b6b  cmp w10, w11
0x06AD7AD0: 02010054  b.hs #0x6ad7af0
0x06AD7AD4: 49050011  add w9, w10, #1
0x06AD7AD8: 000d0a8b  add x0, x8, x10, lsl #3
0x06AD7ADC: 891a00b9  str w9, [x20, #0x18]
0x06AD7AE0: 150c02f8  str x21, [x0, #0x20]!
0x06AD7AE4: e10315aa  mov x1, x21
0x06AD7AE8: b7a31a97  bl #0x31809c4
0x06AD7AEC: 07000014  b #0x6ad7b08
0x06AD7AF0: 281140f9  ldr x8, [x9, #0x20]
0x06AD7AF4: e00314aa  mov x0, x20
0x06AD7AF8: e10315aa  mov x1, x21
0x06AD7AFC: 086140f9  ldr x8, [x8, #0xc0]
0x06AD7B00: 023940f9  ldr x2, [x8, #0x70]
0x06AD7B04: 5ab25597  bl #0x404446c
0x06AD7B08: f30100b4  cbz x19, #0x6ad7b44
0x06AD7B0C: c86100b0  adrp x8, #0x7710000
0x06AD7B10: 089943f9  ldr x8, [x8, #0x730]
0x06AD7B14: e00313aa  mov x0, x19
0x06AD7B18: e10314aa  mov x1, x20
0x06AD7B1C: 020140f9  ldr x2, [x8]
0x06AD7B20: c3a24997  bl #0x3d4062c
0x06AD7B24: f44f46a9  ldp x20, x19, [sp, #0x60]
0x06AD7B28: f65745a9  ldp x22, x21, [sp, #0x50]
0x06AD7B2C: f85f44a9  ldp x24, x23, [sp, #0x40]
0x06AD7B30: fa6743a9  ldp x26, x25, [sp, #0x30]
0x06AD7B34: fc6f42a9  ldp x28, x27, [sp, #0x20]
0x06AD7B38: fd7b41a9  ldp x29, x30, [sp, #0x10]
0x06AD7B3C: ffc30191  add sp, sp, #0x70
0x06AD7B40: c0035fd6  ret
0x06AD7B44: 5aa41a97  bl #0x3180cac

; RVA 0x6AD7C18 | private string GetMaxLevelPrimaryProducerIdOnBoard(IMergeItem producerItem) { }
; bytes=1184 sha256=8eb352c19490c5983ee74da72325f7892c32d0c7efe96a3b301b4c02e23d2a3e status=arm64_complete_bound indexed_start=True
0x06AD7C18: fe0f1bf8  str x30, [sp, #-0x50]!
0x06AD7C1C: fa6701a9  stp x26, x25, [sp, #0x10]
0x06AD7C20: f85f02a9  stp x24, x23, [sp, #0x20]
0x06AD7C24: f65703a9  stp x22, x21, [sp, #0x30]
0x06AD7C28: f44f04a9  stp x20, x19, [sp, #0x40]
0x06AD7C2C: 949200f0  adrp x20, #0x7d2a000
0x06AD7C30: 88766b39  ldrb w8, [x20, #0xadd]
0x06AD7C34: f50301aa  mov x21, x1
0x06AD7C38: f30300aa  mov x19, x0
0x06AD7C3C: a8020037  tbnz w8, #0, #0x6ad7c90
0x06AD7C40: 205d00b0  adrp x0, #0x767c000
0x06AD7C44: 002441f9  ldr x0, [x0, #0x248]
0x06AD7C48: 74a31a97  bl #0x3180a18
0x06AD7C4C: 005d00f0  adrp x0, #0x767a000
0x06AD7C50: 004c42f9  ldr x0, [x0, #0x498]
0x06AD7C54: 71a31a97  bl #0x3180a18
0x06AD7C58: 005d00d0  adrp x0, #0x7679000
0x06AD7C5C: 001044f9  ldr x0, [x0, #0x820]
0x06AD7C60: 6ea31a97  bl #0x3180a18
0x06AD7C64: 205d00f0  adrp x0, #0x767e000
0x06AD7C68: 008442f9  ldr x0, [x0, #0x508]
0x06AD7C6C: 6ba31a97  bl #0x3180a18
0x06AD7C70: 205d00f0  adrp x0, #0x767e000
0x06AD7C74: 008842f9  ldr x0, [x0, #0x510]
0x06AD7C78: 68a31a97  bl #0x3180a18
0x06AD7C7C: a05b00f0  adrp x0, #0x764e000
0x06AD7C80: 00ec42f9  ldr x0, [x0, #0x5d8]
0x06AD7C84: 65a31a97  bl #0x3180a18
0x06AD7C88: 28008052  movz w8, #0x1
0x06AD7C8C: 88762b39  strb w8, [x20, #0xadd]
0x06AD7C90: 352100b4  cbz x21, #0x6ad80b4
0x06AD7C94: 185d00d0  adrp x24, #0x7679000
0x06AD7C98: a80240f9  ldr x8, [x21]
0x06AD7C9C: 181344f9  ldr x24, [x24, #0x820]
0x06AD7CA0: 741e40f9  ldr x20, [x19, #0x38]
0x06AD7CA4: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD7CA8: 010340f9  ldr x1, [x24]
0x06AD7CAC: 290100b4  cbz x9, #0x6ad7cd0
0x06AD7CB0: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD7CB4: 4a210091  add x10, x10, #8
0x06AD7CB8: 4b815ff8  ldur x11, [x10, #-8]
0x06AD7CBC: 7f0101eb  cmp x11, x1
0x06AD7CC0: 00010054  b.eq #0x6ad7ce0
0x06AD7CC4: 290500f1  subs x9, x9, #1
0x06AD7CC8: 4a410091  add x10, x10, #0x10
0x06AD7CCC: 61ffff54  b.ne #0x6ad7cb8
0x06AD7CD0: e00315aa  mov x0, x21
0x06AD7CD4: e2031f2a  mov w2, wzr
0x06AD7CD8: 8efb1997  bl #0x3156b10
0x06AD7CDC: 04000014  b #0x6ad7cec
0x06AD7CE0: 490180b9  ldrsw x9, [x10]
0x06AD7CE4: 0811098b  add x8, x8, x9, lsl #4
0x06AD7CE8: 00e10491  add x0, x8, #0x138
0x06AD7CEC: 080440a9  ldp x8, x1, [x0]
0x06AD7CF0: e00315aa  mov x0, x21
0x06AD7CF4: 00013fd6  blr x8
0x06AD7CF8: f41d00b4  cbz x20, #0x6ad80b4
0x06AD7CFC: 165d00f0  adrp x22, #0x767a000
0x06AD7D00: 880240f9  ldr x8, [x20]
0x06AD7D04: d64e42f9  ldr x22, [x22, #0x498]
0x06AD7D08: f50300aa  mov x21, x0
0x06AD7D0C: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD7D10: c10240f9  ldr x1, [x22]
0x06AD7D14: 290100b4  cbz x9, #0x6ad7d38
0x06AD7D18: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD7D1C: 4a210091  add x10, x10, #8
0x06AD7D20: 4b815ff8  ldur x11, [x10, #-8]
0x06AD7D24: 7f0101eb  cmp x11, x1
0x06AD7D28: 00010054  b.eq #0x6ad7d48
0x06AD7D2C: 290500f1  subs x9, x9, #1
0x06AD7D30: 4a410091  add x10, x10, #0x10
0x06AD7D34: 61ffff54  b.ne #0x6ad7d20
0x06AD7D38: 82008052  movz w2, #0x4
0x06AD7D3C: e00314aa  mov x0, x20
0x06AD7D40: 74fb1997  bl #0x3156b10
0x06AD7D44: 05000014  b #0x6ad7d58
0x06AD7D48: 490140b9  ldr w9, [x10]
0x06AD7D4C: 29110011  add w9, w9, #4
0x06AD7D50: 08d1298b  add x8, x8, w9, sxtw #4
0x06AD7D54: 00e10491  add x0, x8, #0x138
0x06AD7D58: 080840a9  ldp x8, x2, [x0]
0x06AD7D5C: e00314aa  mov x0, x20
0x06AD7D60: e10315aa  mov x1, x21
0x06AD7D64: 00013fd6  blr x8
0x06AD7D68: 751e40f9  ldr x21, [x19, #0x38]
0x06AD7D6C: 551a00b4  cbz x21, #0x6ad80b4
0x06AD7D70: a80240f9  ldr x8, [x21]
0x06AD7D74: c10240f9  ldr x1, [x22]
0x06AD7D78: f40300aa  mov x20, x0
0x06AD7D7C: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD7D80: 290100b4  cbz x9, #0x6ad7da4
0x06AD7D84: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD7D88: 4a210091  add x10, x10, #8
0x06AD7D8C: 4b815ff8  ldur x11, [x10, #-8]
0x06AD7D90: 7f0101eb  cmp x11, x1
0x06AD7D94: 00010054  b.eq #0x6ad7db4
0x06AD7D98: 290500f1  subs x9, x9, #1
0x06AD7D9C: 4a410091  add x10, x10, #0x10
0x06AD7DA0: 61ffff54  b.ne #0x6ad7d8c
0x06AD7DA4: 02048052  movz w2, #0x20
0x06AD7DA8: e00315aa  mov x0, x21
0x06AD7DAC: 59fb1997  bl #0x3156b10
0x06AD7DB0: 05000014  b #0x6ad7dc4
0x06AD7DB4: 490140b9  ldr w9, [x10]
0x06AD7DB8: 29810011  add w9, w9, #0x20
0x06AD7DBC: 08d1298b  add x8, x8, w9, sxtw #4
0x06AD7DC0: 00e10491  add x0, x8, #0x138
0x06AD7DC4: 080840a9  ldp x8, x2, [x0]
0x06AD7DC8: 395d00b0  adrp x25, #0x767c000
0x06AD7DCC: 392741f9  ldr x25, [x25, #0x248]
0x06AD7DD0: e00315aa  mov x0, x21
0x06AD7DD4: e10314aa  mov x1, x20
0x06AD7DD8: 00013fd6  blr x8
0x06AD7DDC: 40030037  tbnz w0, #0, #0x6ad7e44
0x06AD7DE0: b41600b4  cbz x20, #0x6ad80b4
0x06AD7DE4: 880240f9  ldr x8, [x20]
0x06AD7DE8: 210340f9  ldr x1, [x25]
0x06AD7DEC: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD7DF0: 290100b4  cbz x9, #0x6ad7e14
0x06AD7DF4: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD7DF8: 4a210091  add x10, x10, #8
0x06AD7DFC: 4b815ff8  ldur x11, [x10, #-8]
0x06AD7E00: 7f0101eb  cmp x11, x1
0x06AD7E04: 00010054  b.eq #0x6ad7e24
0x06AD7E08: 290500f1  subs x9, x9, #1
0x06AD7E0C: 4a410091  add x10, x10, #0x10
0x06AD7E10: 61ffff54  b.ne #0x6ad7dfc
0x06AD7E14: 22028052  movz w2, #0x11
0x06AD7E18: e00314aa  mov x0, x20
0x06AD7E1C: 3dfb1997  bl #0x3156b10
0x06AD7E20: 05000014  b #0x6ad7e34
0x06AD7E24: 490140b9  ldr w9, [x10]
0x06AD7E28: 29450011  add w9, w9, #0x11
0x06AD7E2C: 08d1298b  add x8, x8, w9, sxtw #4
0x06AD7E30: 00e10491  add x0, x8, #0x138
0x06AD7E34: 080440a9  ldp x8, x1, [x0]
0x06AD7E38: e00314aa  mov x0, x20
0x06AD7E3C: 00013fd6  blr x8
0x06AD7E40: f40300aa  mov x20, x0
0x06AD7E44: 340200b4  cbz x20, #0x6ad7e88
0x06AD7E48: 880240f9  ldr x8, [x20]
0x06AD7E4C: 210340f9  ldr x1, [x25]
0x06AD7E50: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD7E54: 290100b4  cbz x9, #0x6ad7e78
0x06AD7E58: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD7E5C: 4a210091  add x10, x10, #8
0x06AD7E60: 4b815ff8  ldur x11, [x10, #-8]
0x06AD7E64: 7f0101eb  cmp x11, x1
0x06AD7E68: c0010054  b.eq #0x6ad7ea0
0x06AD7E6C: 290500f1  subs x9, x9, #1
0x06AD7E70: 4a410091  add x10, x10, #0x10
0x06AD7E74: 61ffff54  b.ne #0x6ad7e60
0x06AD7E78: e00314aa  mov x0, x20
0x06AD7E7C: e2031f2a  mov w2, wzr
0x06AD7E80: 24fb1997  bl #0x3156b10
0x06AD7E84: 0a000014  b #0x6ad7eac
0x06AD7E88: a85b00f0  adrp x8, #0x764e000
0x06AD7E8C: 08ed42f9  ldr x8, [x8, #0x5d8]
0x06AD7E90: 080140f9  ldr x8, [x8]
0x06AD7E94: 085d40f9  ldr x8, [x8, #0xb8]
0x06AD7E98: 000140f9  ldr x0, [x8]
0x06AD7E9C: 59000014  b #0x6ad8000
0x06AD7EA0: 490180b9  ldrsw x9, [x10]
0x06AD7EA4: 0811098b  add x8, x8, x9, lsl #4
0x06AD7EA8: 00e10491  add x0, x8, #0x138
0x06AD7EAC: 080440a9  ldp x8, x1, [x0]
0x06AD7EB0: e00314aa  mov x0, x20
0x06AD7EB4: 00013fd6  blr x8
0x06AD7EB8: e00f00b4  cbz x0, #0x6ad80b4
0x06AD7EBC: 3a5d00f0  adrp x26, #0x767e000
0x06AD7EC0: 151840b9  ldr w21, [x0, #0x18]
0x06AD7EC4: 5a8b42f9  ldr x26, [x26, #0x510]
0x06AD7EC8: b5060071  subs w21, w21, #1
0x06AD7ECC: 84090054  b.mi #0x6ad7ffc
0x06AD7ED0: e00313aa  mov x0, x19
0x06AD7ED4: 8bf7ff97  bl #0x6ad5d00
0x06AD7ED8: 880240f9  ldr x8, [x20]
0x06AD7EDC: 210340f9  ldr x1, [x25]
0x06AD7EE0: f60300aa  mov x22, x0
0x06AD7EE4: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD7EE8: 290100b4  cbz x9, #0x6ad7f0c
0x06AD7EEC: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD7EF0: 4a210091  add x10, x10, #8
0x06AD7EF4: 4b815ff8  ldur x11, [x10, #-8]
0x06AD7EF8: 7f0101eb  cmp x11, x1
0x06AD7EFC: 00010054  b.eq #0x6ad7f1c
0x06AD7F00: 290500f1  subs x9, x9, #1
0x06AD7F04: 4a410091  add x10, x10, #0x10
0x06AD7F08: 61ffff54  b.ne #0x6ad7ef4
0x06AD7F0C: e00314aa  mov x0, x20
0x06AD7F10: e2031f2a  mov w2, wzr
0x06AD7F14: fffa1997  bl #0x3156b10
0x06AD7F18: 04000014  b #0x6ad7f28
0x06AD7F1C: 490180b9  ldrsw x9, [x10]
0x06AD7F20: 0811098b  add x8, x8, x9, lsl #4
0x06AD7F24: 00e10491  add x0, x8, #0x138
0x06AD7F28: 080440a9  ldp x8, x1, [x0]
0x06AD7F2C: e00314aa  mov x0, x20
0x06AD7F30: 00013fd6  blr x8
0x06AD7F34: 000c00b4  cbz x0, #0x6ad80b4
0x06AD7F38: 420340f9  ldr x2, [x26]
0x06AD7F3C: e103152a  mov w1, w21
0x06AD7F40: 97b05597  bl #0x404419c
0x06AD7F44: 800b00b4  cbz x0, #0x6ad80b4
0x06AD7F48: 080040f9  ldr x8, [x0]
0x06AD7F4C: 010340f9  ldr x1, [x24]
0x06AD7F50: f70300aa  mov x23, x0
0x06AD7F54: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD7F58: 290100b4  cbz x9, #0x6ad7f7c
0x06AD7F5C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD7F60: 4a210091  add x10, x10, #8
0x06AD7F64: 4b815ff8  ldur x11, [x10, #-8]
0x06AD7F68: 7f0101eb  cmp x11, x1
0x06AD7F6C: 00010054  b.eq #0x6ad7f8c
0x06AD7F70: 290500f1  subs x9, x9, #1
0x06AD7F74: 4a410091  add x10, x10, #0x10
0x06AD7F78: 61ffff54  b.ne #0x6ad7f64
0x06AD7F7C: e00317aa  mov x0, x23
0x06AD7F80: e2031f2a  mov w2, wzr
0x06AD7F84: e3fa1997  bl #0x3156b10
0x06AD7F88: 04000014  b #0x6ad7f98
0x06AD7F8C: 490180b9  ldrsw x9, [x10]
0x06AD7F90: 0811098b  add x8, x8, x9, lsl #4
0x06AD7F94: 00e10491  add x0, x8, #0x138
0x06AD7F98: 080440a9  ldp x8, x1, [x0]
0x06AD7F9C: e00317aa  mov x0, x23
0x06AD7FA0: 00013fd6  blr x8
0x06AD7FA4: 960800b4  cbz x22, #0x6ad80b4
0x06AD7FA8: e10300aa  mov x1, x0
0x06AD7FAC: e00316aa  mov x0, x22
0x06AD7FB0: e2031faa  mov x2, xzr
0x06AD7FB4: d64bee97  bl #0x666af0c
0x06AD7FB8: 80f80736  tbz w0, #0, #0x6ad7ec8
0x06AD7FBC: 880240f9  ldr x8, [x20]
0x06AD7FC0: 210340f9  ldr x1, [x25]
0x06AD7FC4: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD7FC8: 290100b4  cbz x9, #0x6ad7fec
0x06AD7FCC: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD7FD0: 4a210091  add x10, x10, #8
0x06AD7FD4: 4b815ff8  ldur x11, [x10, #-8]
0x06AD7FD8: 7f0101eb  cmp x11, x1
0x06AD7FDC: e0010054  b.eq #0x6ad8018
0x06AD7FE0: 290500f1  subs x9, x9, #1
0x06AD7FE4: 4a410091  add x10, x10, #0x10
0x06AD7FE8: 61ffff54  b.ne #0x6ad7fd4
0x06AD7FEC: e00314aa  mov x0, x20
0x06AD7FF0: e2031f2a  mov w2, wzr
0x06AD7FF4: c7fa1997  bl #0x3156b10
0x06AD7FF8: 0b000014  b #0x6ad8024
0x06AD7FFC: e0031faa  mov x0, xzr
0x06AD8000: f44f44a9  ldp x20, x19, [sp, #0x40]
0x06AD8004: f65743a9  ldp x22, x21, [sp, #0x30]
0x06AD8008: f85f42a9  ldp x24, x23, [sp, #0x20]
0x06AD800C: fa6741a9  ldp x26, x25, [sp, #0x10]
0x06AD8010: fe0745f8  ldr x30, [sp], #0x50
0x06AD8014: c0035fd6  ret
0x06AD8018: 490180b9  ldrsw x9, [x10]
0x06AD801C: 0811098b  add x8, x8, x9, lsl #4
0x06AD8020: 00e10491  add x0, x8, #0x138
0x06AD8024: 080440a9  ldp x8, x1, [x0]
0x06AD8028: e00314aa  mov x0, x20
0x06AD802C: 00013fd6  blr x8
0x06AD8030: 200400b4  cbz x0, #0x6ad80b4
0x06AD8034: 420340f9  ldr x2, [x26]
0x06AD8038: e103152a  mov w1, w21
0x06AD803C: 58b05597  bl #0x404419c
0x06AD8040: a00300b4  cbz x0, #0x6ad80b4
0x06AD8044: 080040f9  ldr x8, [x0]
0x06AD8048: 010340f9  ldr x1, [x24]
0x06AD804C: f30300aa  mov x19, x0
0x06AD8050: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD8054: 290100b4  cbz x9, #0x6ad8078
0x06AD8058: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD805C: 4a210091  add x10, x10, #8
0x06AD8060: 4b815ff8  ldur x11, [x10, #-8]
0x06AD8064: 7f0101eb  cmp x11, x1
0x06AD8068: 00010054  b.eq #0x6ad8088
0x06AD806C: 290500f1  subs x9, x9, #1
0x06AD8070: 4a410091  add x10, x10, #0x10
0x06AD8074: 61ffff54  b.ne #0x6ad8060
0x06AD8078: e00313aa  mov x0, x19
0x06AD807C: e2031f2a  mov w2, wzr
0x06AD8080: a4fa1997  bl #0x3156b10
0x06AD8084: 04000014  b #0x6ad8094
0x06AD8088: 490180b9  ldrsw x9, [x10]
0x06AD808C: 0811098b  add x8, x8, x9, lsl #4
0x06AD8090: 00e10491  add x0, x8, #0x138
0x06AD8094: 020440a9  ldp x2, x1, [x0]
0x06AD8098: e00313aa  mov x0, x19
0x06AD809C: f44f44a9  ldp x20, x19, [sp, #0x40]
0x06AD80A0: f65743a9  ldp x22, x21, [sp, #0x30]
0x06AD80A4: f85f42a9  ldp x24, x23, [sp, #0x20]
0x06AD80A8: fa6741a9  ldp x26, x25, [sp, #0x10]
0x06AD80AC: fe0745f8  ldr x30, [sp], #0x50
0x06AD80B0: 40001fd6  br x2
0x06AD80B4: fea21a97  bl #0x3180cac

; RVA 0x6AD6920 | private bool TryGetExcitementPosition(BoardItemPosition originalItemPosition, out BoardItemPosition excitementPosition) { }
; bytes=604 sha256=ca5b6a0b7fa670eaf3ce26e50d652f7aaa038dcbd35f4100e51ab6555d765bfe status=arm64_complete_bound indexed_start=True
0x06AD6920: fe0f1bf8  str x30, [sp, #-0x50]!
0x06AD6924: fa6701a9  stp x26, x25, [sp, #0x10]
0x06AD6928: f85f02a9  stp x24, x23, [sp, #0x20]
0x06AD692C: f65703a9  stp x22, x21, [sp, #0x30]
0x06AD6930: f44f04a9  stp x20, x19, [sp, #0x40]
0x06AD6934: b5920090  adrp x21, #0x7d2a000
0x06AD6938: f76200d0  adrp x23, #0x7734000
0x06AD693C: a87a6b39  ldrb w8, [x21, #0xade]
0x06AD6940: f70a42f9  ldr x23, [x23, #0x410]
0x06AD6944: f30302aa  mov x19, x2
0x06AD6948: f40301aa  mov x20, x1
0x06AD694C: f60300aa  mov x22, x0
0x06AD6950: 08030037  tbnz w8, #0, #0x6ad69b0
0x06AD6954: 405d0090  adrp x0, #0x767e000
0x06AD6958: 006c46f9  ldr x0, [x0, #0xcd8]
0x06AD695C: 2fa81a97  bl #0x3180a18
0x06AD6960: e0620090  adrp x0, #0x7732000
0x06AD6964: 002447f9  ldr x0, [x0, #0xe48]
0x06AD6968: 2ca81a97  bl #0x3180a18
0x06AD696C: 806100b0  adrp x0, #0x7707000
0x06AD6970: 002c47f9  ldr x0, [x0, #0xe58]
0x06AD6974: 29a81a97  bl #0x3180a18
0x06AD6978: 405d0090  adrp x0, #0x767e000
0x06AD697C: 007046f9  ldr x0, [x0, #0xce0]
0x06AD6980: 26a81a97  bl #0x3180a18
0x06AD6984: e0620090  adrp x0, #0x7732000
0x06AD6988: 002847f9  ldr x0, [x0, #0xe50]
0x06AD698C: 23a81a97  bl #0x3180a18
0x06AD6990: e06200d0  adrp x0, #0x7734000
0x06AD6994: 000c42f9  ldr x0, [x0, #0x418]
0x06AD6998: 20a81a97  bl #0x3180a18
0x06AD699C: e06200d0  adrp x0, #0x7734000
0x06AD69A0: 000842f9  ldr x0, [x0, #0x410]
0x06AD69A4: 1da81a97  bl #0x3180a18
0x06AD69A8: 28008052  movz w8, #0x1
0x06AD69AC: a87a2b39  strb w8, [x21, #0xade]
0x06AD69B0: e00240f9  ldr x0, [x23]
0x06AD69B4: bba81a97  bl #0x3180ca0
0x06AD69B8: e1031faa  mov x1, xzr
0x06AD69BC: f70300aa  mov x23, x0
0x06AD69C0: 0f0fb097  bl #0x56da5fc
0x06AD69C4: e00316aa  mov x0, x22
0x06AD69C8: 740200f9  str x20, [x19]
0x06AD69CC: cdfcff97  bl #0x6ad5d00
0x06AD69D0: 200d00b4  cbz x0, #0x6ad6b74
0x06AD69D4: e1031faa  mov x1, xzr
0x06AD69D8: fa0cee97  bl #0x6659dc0
0x06AD69DC: f503002a  mov w21, w0
0x06AD69E0: a00b0037  tbnz w0, #0, #0x6ad6b54
0x06AD69E4: e00316aa  mov x0, x22
0x06AD69E8: c6fcff97  bl #0x6ad5d00
0x06AD69EC: 400c00b4  cbz x0, #0x6ad6b74
0x06AD69F0: 22008052  movz w2, #0x1
0x06AD69F4: e10314aa  mov x1, x20
0x06AD69F8: e3031faa  mov x3, xzr
0x06AD69FC: e4031faa  mov x4, xzr
0x06AD6A00: 5350ee97  bl #0x666ab4c
0x06AD6A04: 970b00b4  cbz x23, #0x6ad6b74
0x06AD6A08: f80317aa  mov x24, x23
0x06AD6A0C: 000f01f8  str x0, [x24, #0x10]!
0x06AD6A10: e10300aa  mov x1, x0
0x06AD6A14: e00318aa  mov x0, x24
0x06AD6A18: eba71a97  bl #0x31809c4
0x06AD6A1C: 000340f9  ldr x0, [x24]
0x06AD6A20: a00a00b4  cbz x0, #0x6ad6b74
0x06AD6A24: 495d0090  adrp x9, #0x767e000
0x06AD6A28: 297146f9  ldr x9, [x9, #0xce0]
0x06AD6A2C: 0a1c40b9  ldr w10, [x0, #0x1c]
0x06AD6A30: 080840f9  ldr x8, [x0, #0x10]
0x06AD6A34: 290140f9  ldr x9, [x9]
0x06AD6A38: 4a050011  add w10, w10, #1
0x06AD6A3C: 0a1c00b9  str w10, [x0, #0x1c]
0x06AD6A40: a80900b4  cbz x8, #0x6ad6b74
0x06AD6A44: 0a1880b9  ldrsw x10, [x0, #0x18]
0x06AD6A48: 0b1940b9  ldr w11, [x8, #0x18]
0x06AD6A4C: 5f010b6b  cmp w10, w11
0x06AD6A50: c2000054  b.hs #0x6ad6a68
0x06AD6A54: 49050011  add w9, w10, #1
0x06AD6A58: 080d0a8b  add x8, x8, x10, lsl #3
0x06AD6A5C: 091800b9  str w9, [x0, #0x18]
0x06AD6A60: 141100f9  str x20, [x8, #0x20]
0x06AD6A64: 06000014  b #0x6ad6a7c
0x06AD6A68: 281140f9  ldr x8, [x9, #0x20]
0x06AD6A6C: e10314aa  mov x1, x20
0x06AD6A70: 086140f9  ldr x8, [x8, #0xc0]
0x06AD6A74: 023940f9  ldr x2, [x8, #0x70]
0x06AD6A78: 6ce05397  bl #0x3fcec28
0x06AD6A7C: e00316aa  mov x0, x22
0x06AD6A80: a0fcff97  bl #0x6ad5d00
0x06AD6A84: 800700b4  cbz x0, #0x6ad6b74
0x06AD6A88: e1031faa  mov x1, xzr
0x06AD6A8C: f042ee97  bl #0x666764c
0x06AD6A90: 886100b0  adrp x8, #0x7707000
0x06AD6A94: 082d47f9  ldr x8, [x8, #0xe58]
0x06AD6A98: f90300aa  mov x25, x0
0x06AD6A9C: 080140f9  ldr x8, [x8]
0x06AD6AA0: e00308aa  mov x0, x8
0x06AD6AA4: 7fa81a97  bl #0x3180ca0
0x06AD6AA8: e86200d0  adrp x8, #0x7734000
0x06AD6AAC: 080d42f9  ldr x8, [x8, #0x418]
0x06AD6AB0: e10317aa  mov x1, x23
0x06AD6AB4: e3031faa  mov x3, xzr
0x06AD6AB8: fa0300aa  mov x26, x0
0x06AD6ABC: 020140f9  ldr x2, [x8]
0x06AD6AC0: edef9d97  bl #0x5252a74
0x06AD6AC4: e8620090  adrp x8, #0x7732000
0x06AD6AC8: 082547f9  ldr x8, [x8, #0xe48]
0x06AD6ACC: e00319aa  mov x0, x25
0x06AD6AD0: e1031aaa  mov x1, x26
0x06AD6AD4: 020140f9  ldr x2, [x8]
0x06AD6AD8: 514e4597  bl #0x3c2a41c
0x06AD6ADC: f703002a  mov w23, w0
0x06AD6AE0: e00316aa  mov x0, x22
0x06AD6AE4: 87fcff97  bl #0x6ad5d00
0x06AD6AE8: f60300aa  mov x22, x0
0x06AD6AEC: 57010036  tbz w23, #0, #0x6ad6b14
0x06AD6AF0: 000340f9  ldr x0, [x24]
0x06AD6AF4: 000400b4  cbz x0, #0x6ad6b74
0x06AD6AF8: e8620090  adrp x8, #0x7732000
0x06AD6AFC: 082947f9  ldr x8, [x8, #0xe50]
0x06AD6B00: 010140f9  ldr x1, [x8]
0x06AD6B04: 51e75397  bl #0x3fd0848
0x06AD6B08: 760300b4  cbz x22, #0x6ad6b74
0x06AD6B0C: e20300aa  mov x2, x0
0x06AD6B10: 0c000014  b #0x6ad6b40
0x06AD6B14: 485d0090  adrp x8, #0x767e000
0x06AD6B18: 086d46f9  ldr x8, [x8, #0xcd8]
0x06AD6B1C: 21008052  movz w1, #0x1
0x06AD6B20: 000140f9  ldr x0, [x8]
0x06AD6B24: f6a71a97  bl #0x3180afc
0x06AD6B28: 600200b4  cbz x0, #0x6ad6b74
0x06AD6B2C: 081840b9  ldr w8, [x0, #0x18]
0x06AD6B30: e20300aa  mov x2, x0
0x06AD6B34: 28020034  cbz w8, #0x6ad6b78
0x06AD6B38: 541000f9  str x20, [x2, #0x20]
0x06AD6B3C: d60100b4  cbz x22, #0x6ad6b74
0x06AD6B40: e00316aa  mov x0, x22
0x06AD6B44: e10314aa  mov x1, x20
0x06AD6B48: e3031faa  mov x3, xzr
0x06AD6B4C: 484cee97  bl #0x6669c6c
0x06AD6B50: 600200f9  str x0, [x19]
0x06AD6B54: e803352a  mvn w8, w21
0x06AD6B58: f44f44a9  ldp x20, x19, [sp, #0x40]
0x06AD6B5C: f65743a9  ldp x22, x21, [sp, #0x30]
0x06AD6B60: f85f42a9  ldp x24, x23, [sp, #0x20]
0x06AD6B64: fa6741a9  ldp x26, x25, [sp, #0x10]
0x06AD6B68: 00010012  and w0, w8, #1
0x06AD6B6C: fe0745f8  ldr x30, [sp], #0x50
0x06AD6B70: c0035fd6  ret
0x06AD6B74: 4ea81a97  bl #0x3180cac
0x06AD6B78: 4fa81a97  bl #0x3180cb4

; RVA 0x6AD80C0 | private void OnExcitementStatesChanged(CollectionChangedArgs<ProducerExcitementDataResponse> changedArgs) { }
; bytes=196 sha256=ec792c40bbc8a7f76578966fb35e42faecbfa2d5266d5c9e492129d8dfed8d18 status=arm64_complete_bound indexed_start=True
0x06AD80C0: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06AD80C4: f44f01a9  stp x20, x19, [sp, #0x10]
0x06AD80C8: 959200d0  adrp x21, #0x7d2a000
0x06AD80CC: a87e6b39  ldrb w8, [x21, #0xadf]
0x06AD80D0: f40301aa  mov x20, x1
0x06AD80D4: f30300aa  mov x19, x0
0x06AD80D8: c8000037  tbnz w8, #0, #0x6ad80f0
0x06AD80DC: e0620090  adrp x0, #0x7734000
0x06AD80E0: 00c041f9  ldr x0, [x0, #0x380]
0x06AD80E4: 4da21a97  bl #0x3180a18
0x06AD80E8: 28008052  movz w8, #0x1
0x06AD80EC: a87e2b39  strb w8, [x21, #0xadf]
0x06AD80F0: 140400b4  cbz x20, #0x6ad8170
0x06AD80F4: f5620090  adrp x21, #0x7734000
0x06AD80F8: b5c241f9  ldr x21, [x21, #0x380]
0x06AD80FC: e00314aa  mov x0, x20
0x06AD8100: a10240f9  ldr x1, [x21]
0x06AD8104: 528d8697  bl #0x4c7b64c
0x06AD8108: 400300b4  cbz x0, #0x6ad8170
0x06AD810C: a10240f9  ldr x1, [x21]
0x06AD8110: e00314aa  mov x0, x20
0x06AD8114: 4e8d8697  bl #0x4c7b64c
0x06AD8118: 400300b4  cbz x0, #0x6ad8180
0x06AD811C: 081840b9  ldr w8, [x0, #0x18]
0x06AD8120: f40300aa  mov x20, x0
0x06AD8124: 1f050071  cmp w8, #1
0x06AD8128: 4b020054  b.lt #0x6ad8170
0x06AD812C: f5031f2a  mov w21, wzr
0x06AD8130: bf02086b  cmp w21, w8
0x06AD8134: 42020054  b.hs #0x6ad817c
0x06AD8138: 88ce358b  add x8, x20, w21, sxtw #3
0x06AD813C: 091140f9  ldr x9, [x8, #0x20]
0x06AD8140: 090200b4  cbz x9, #0x6ad8180
0x06AD8144: 281540f9  ldr x8, [x9, #0x28]
0x06AD8148: c80000b4  cbz x8, #0x6ad8160
0x06AD814C: 291140f9  ldr x9, [x9, #0x20]
0x06AD8150: 890000b4  cbz x9, #0x6ad8160
0x06AD8154: 010d40f9  ldr x1, [x8, #0x18]
0x06AD8158: e00313aa  mov x0, x19
0x06AD815C: 0a000094  bl #0x6ad8184
0x06AD8160: 881a40b9  ldr w8, [x20, #0x18]
0x06AD8164: b5060011  add w21, w21, #1
0x06AD8168: bf02086b  cmp w21, w8
0x06AD816C: 2bfeff54  b.lt #0x6ad8130
0x06AD8170: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06AD8174: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06AD8178: c0035fd6  ret
0x06AD817C: cea21a97  bl #0x3180cb4
0x06AD8180: cba21a97  bl #0x3180cac

; RVA 0x6AD8184 | private void RegisterCycleEndTimer(long cycleEndDate) { }
; bytes=1052 sha256=b9930f9c995cd0337c0fc59157b4404de4a3e49e4ed8384b90b51825be7d9f84 status=arm64_complete_bound indexed_start=True
0x06AD8184: ff0301d1  sub sp, sp, #0x40
0x06AD8188: fe5f01a9  stp x30, x23, [sp, #0x10]
0x06AD818C: f65702a9  stp x22, x21, [sp, #0x20]
0x06AD8190: f44f03a9  stp x20, x19, [sp, #0x30]
0x06AD8194: 939200d0  adrp x19, #0x7d2a000
0x06AD8198: f6620090  adrp x22, #0x7734000
0x06AD819C: 68826b39  ldrb w8, [x19, #0xae0]
0x06AD81A0: d63242f9  ldr x22, [x22, #0x460]
0x06AD81A4: f50301aa  mov x21, x1
0x06AD81A8: f40300aa  mov x20, x0
0x06AD81AC: a8050037  tbnz w8, #0, #0x6ad8260
0x06AD81B0: c05b0090  adrp x0, #0x7650000
0x06AD81B4: 004c45f9  ldr x0, [x0, #0xa98]
0x06AD81B8: 18a21a97  bl #0x3180a18
0x06AD81BC: a05c00f0  adrp x0, #0x766f000
0x06AD81C0: 002041f9  ldr x0, [x0, #0x240]
0x06AD81C4: 15a21a97  bl #0x3180a18
0x06AD81C8: e0620090  adrp x0, #0x7734000
0x06AD81CC: 003442f9  ldr x0, [x0, #0x468]
0x06AD81D0: 12a21a97  bl #0x3180a18
0x06AD81D4: e0620090  adrp x0, #0x7734000
0x06AD81D8: 003842f9  ldr x0, [x0, #0x470]
0x06AD81DC: 0fa21a97  bl #0x3180a18
0x06AD81E0: a05c00f0  adrp x0, #0x766f000
0x06AD81E4: 002441f9  ldr x0, [x0, #0x248]
0x06AD81E8: 0ca21a97  bl #0x3180a18
0x06AD81EC: 005d00f0  adrp x0, #0x767b000
0x06AD81F0: 007046f9  ldr x0, [x0, #0xce0]
0x06AD81F4: 09a21a97  bl #0x3180a18
0x06AD81F8: c05c00f0  adrp x0, #0x7673000
0x06AD81FC: 008846f9  ldr x0, [x0, #0xd10]
0x06AD8200: 06a21a97  bl #0x3180a18
0x06AD8204: c05c00f0  adrp x0, #0x7673000
0x06AD8208: 009c43f9  ldr x0, [x0, #0x738]
0x06AD820C: 03a21a97  bl #0x3180a18
0x06AD8210: a05b00d0  adrp x0, #0x764e000
0x06AD8214: 004843f9  ldr x0, [x0, #0x690]
0x06AD8218: 00a21a97  bl #0x3180a18
0x06AD821C: e0620090  adrp x0, #0x7734000
0x06AD8220: 003c42f9  ldr x0, [x0, #0x478]
0x06AD8224: fda11a97  bl #0x3180a18
0x06AD8228: e0620090  adrp x0, #0x7734000
0x06AD822C: 004042f9  ldr x0, [x0, #0x480]
0x06AD8230: faa11a97  bl #0x3180a18
0x06AD8234: e0620090  adrp x0, #0x7734000
0x06AD8238: 003042f9  ldr x0, [x0, #0x460]
0x06AD823C: f7a11a97  bl #0x3180a18
0x06AD8240: e0620090  adrp x0, #0x7734000
0x06AD8244: 002c42f9  ldr x0, [x0, #0x458]
0x06AD8248: f4a11a97  bl #0x3180a18
0x06AD824C: e0620090  adrp x0, #0x7734000
0x06AD8250: 00f841f9  ldr x0, [x0, #0x3f0]
0x06AD8254: f1a11a97  bl #0x3180a18
0x06AD8258: 28008052  movz w8, #0x1
0x06AD825C: 68822b39  strb w8, [x19, #0xae0]
0x06AD8260: c00240f9  ldr x0, [x22]
0x06AD8264: 8fa21a97  bl #0x3180ca0
0x06AD8268: e1031faa  mov x1, xzr
0x06AD826C: f30300aa  mov x19, x0
0x06AD8270: e308b097  bl #0x56da5fc
0x06AD8274: 531900b4  cbz x19, #0x6ad859c
0x06AD8278: f60313aa  mov x22, x19
0x06AD827C: d40e01f8  str x20, [x22, #0x10]!
0x06AD8280: e00316aa  mov x0, x22
0x06AD8284: e10314aa  mov x1, x20
0x06AD8288: cfa11a97  bl #0x31809c4
0x06AD828C: d50600f9  str x21, [x22, #8]
0x06AD8290: 803e40f9  ldr x0, [x20, #0x78]
0x06AD8294: 401800b4  cbz x0, #0x6ad859c
0x06AD8298: e8620090  adrp x8, #0x7734000
0x06AD829C: 083542f9  ldr x8, [x8, #0x468]
0x06AD82A0: e10315aa  mov x1, x21
0x06AD82A4: 020140f9  ldr x2, [x8]
0x06AD82A8: 57518e97  bl #0x4e6c804
0x06AD82AC: e0160037  tbnz w0, #0, #0x6ad8588
0x06AD82B0: a95b00d0  adrp x9, #0x764e000
0x06AD82B4: 680e40f9  ldr x8, [x19, #0x18]
0x06AD82B8: 294943f9  ldr x9, [x9, #0x690]
0x06AD82BC: e1230091  add x1, sp, #8
0x06AD82C0: e80700f9  str x8, [sp, #8]
0x06AD82C4: 200140f9  ldr x0, [x9]
0x06AD82C8: 33a21a97  bl #0x3180b94
0x06AD82CC: e8620090  adrp x8, #0x7734000
0x06AD82D0: 08f941f9  ldr x8, [x8, #0x3f0]
0x06AD82D4: e10300aa  mov x1, x0
0x06AD82D8: e2031faa  mov x2, xzr
0x06AD82DC: 080140f9  ldr x8, [x8]
0x06AD82E0: e00308aa  mov x0, x8
0x06AD82E4: f758a897  bl #0x54ee6c0
0x06AD82E8: 962e40f9  ldr x22, [x20, #0x58]
0x06AD82EC: 961500b4  cbz x22, #0x6ad859c
0x06AD82F0: ca5c00f0  adrp x10, #0x7673000
0x06AD82F4: c80240f9  ldr x8, [x22]
0x06AD82F8: 770e40f9  ldr x23, [x19, #0x18]
0x06AD82FC: 4a8946f9  ldr x10, [x10, #0xd10]
0x06AD8300: f50300aa  mov x21, x0
0x06AD8304: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD8308: 410140f9  ldr x1, [x10]
0x06AD830C: 290100b4  cbz x9, #0x6ad8330
0x06AD8310: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD8314: 4a210091  add x10, x10, #8
0x06AD8318: 4b815ff8  ldur x11, [x10, #-8]
0x06AD831C: 7f0101eb  cmp x11, x1
0x06AD8320: 00010054  b.eq #0x6ad8340
0x06AD8324: 290500f1  subs x9, x9, #1
0x06AD8328: 4a410091  add x10, x10, #0x10
0x06AD832C: 61ffff54  b.ne #0x6ad8318
0x06AD8330: 62008052  movz w2, #0x3
0x06AD8334: e00316aa  mov x0, x22
0x06AD8338: f6f91997  bl #0x3156b10
0x06AD833C: 05000014  b #0x6ad8350
0x06AD8340: 490140b9  ldr w9, [x10]
0x06AD8344: 290d0011  add w9, w9, #3
0x06AD8348: 08d1298b  add x8, x8, w9, sxtw #4
0x06AD834C: 00e10491  add x0, x8, #0x138
0x06AD8350: 080c40a9  ldp x8, x3, [x0]
0x06AD8354: e00316aa  mov x0, x22
0x06AD8358: e10315aa  mov x1, x21
0x06AD835C: e20317aa  mov x2, x23
0x06AD8360: 00013fd6  blr x8
0x06AD8364: 883e40f9  ldr x8, [x20, #0x78]
0x06AD8368: a81100b4  cbz x8, #0x6ad859c
0x06AD836C: e9620090  adrp x9, #0x7734000
0x06AD8370: 610e40f9  ldr x1, [x19, #0x18]
0x06AD8374: 293942f9  ldr x9, [x9, #0x470]
0x06AD8378: f40300aa  mov x20, x0
0x06AD837C: e00308aa  mov x0, x8
0x06AD8380: e20314aa  mov x2, x20
0x06AD8384: 230140f9  ldr x3, [x9]
0x06AD8388: 9d508e97  bl #0x4e6c5fc
0x06AD838C: 941000b4  cbz x20, #0x6ad859c
0x06AD8390: ca5c00f0  adrp x10, #0x7673000
0x06AD8394: 880240f9  ldr x8, [x20]
0x06AD8398: 4a9d43f9  ldr x10, [x10, #0x738]
0x06AD839C: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD83A0: 410140f9  ldr x1, [x10]
0x06AD83A4: 290100b4  cbz x9, #0x6ad83c8
0x06AD83A8: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD83AC: 4a210091  add x10, x10, #8
0x06AD83B0: 4b815ff8  ldur x11, [x10, #-8]
0x06AD83B4: 7f0101eb  cmp x11, x1
0x06AD83B8: 00010054  b.eq #0x6ad83d8
0x06AD83BC: 290500f1  subs x9, x9, #1
0x06AD83C0: 4a410091  add x10, x10, #0x10
0x06AD83C4: 61ffff54  b.ne #0x6ad83b0
0x06AD83C8: 62008052  movz w2, #0x3
0x06AD83CC: e00314aa  mov x0, x20
0x06AD83D0: d0f91997  bl #0x3156b10
0x06AD83D4: 05000014  b #0x6ad83e8
0x06AD83D8: 490140b9  ldr w9, [x10]
0x06AD83DC: 290d0011  add w9, w9, #3
0x06AD83E0: 08d1298b  add x8, x8, w9, sxtw #4
0x06AD83E4: 00e10491  add x0, x8, #0x138
0x06AD83E8: 080440a9  ldp x8, x1, [x0]
0x06AD83EC: e00314aa  mov x0, x20
0x06AD83F0: 00013fd6  blr x8
0x06AD83F4: c85b0090  adrp x8, #0x7650000
0x06AD83F8: 084d45f9  ldr x8, [x8, #0xa98]
0x06AD83FC: f40300aa  mov x20, x0
0x06AD8400: 080140f9  ldr x8, [x8]
0x06AD8404: e00308aa  mov x0, x8
0x06AD8408: 26a21a97  bl #0x3180ca0
0x06AD840C: e8620090  adrp x8, #0x7734000
0x06AD8410: 084142f9  ldr x8, [x8, #0x480]
0x06AD8414: e10313aa  mov x1, x19
0x06AD8418: e3031faa  mov x3, xzr
0x06AD841C: f50300aa  mov x21, x0
0x06AD8420: 020140f9  ldr x2, [x8]
0x06AD8424: 6c27a197  bl #0x53221d4
0x06AD8428: b40b00b4  cbz x20, #0x6ad859c
0x06AD842C: 0a5d00f0  adrp x10, #0x767b000
0x06AD8430: 880240f9  ldr x8, [x20]
0x06AD8434: 4a7146f9  ldr x10, [x10, #0xce0]
0x06AD8438: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD843C: 410140f9  ldr x1, [x10]
0x06AD8440: 290100b4  cbz x9, #0x6ad8464
0x06AD8444: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD8448: 4a210091  add x10, x10, #8
0x06AD844C: 4b815ff8  ldur x11, [x10, #-8]
0x06AD8450: 7f0101eb  cmp x11, x1
0x06AD8454: 00010054  b.eq #0x6ad8474
0x06AD8458: 290500f1  subs x9, x9, #1
0x06AD845C: 4a410091  add x10, x10, #0x10
0x06AD8460: 61ffff54  b.ne #0x6ad844c
0x06AD8464: e00314aa  mov x0, x20
0x06AD8468: e2031f2a  mov w2, wzr
0x06AD846C: a9f91997  bl #0x3156b10
0x06AD8470: 04000014  b #0x6ad8480
0x06AD8474: 490180b9  ldrsw x9, [x10]
0x06AD8478: 0811098b  add x8, x8, x9, lsl #4
0x06AD847C: 00e10491  add x0, x8, #0x138
0x06AD8480: 080840a9  ldp x8, x2, [x0]
0x06AD8484: e00314aa  mov x0, x20
0x06AD8488: e10315aa  mov x1, x21
0x06AD848C: 00013fd6  blr x8
0x06AD8490: f6620090  adrp x22, #0x7734000
0x06AD8494: d62e42f9  ldr x22, [x22, #0x458]
0x06AD8498: f30300aa  mov x19, x0
0x06AD849C: c80240f9  ldr x8, [x22]
0x06AD84A0: 09e140b9  ldr w9, [x8, #0xe0]
0x06AD84A4: 89000035  cbnz w9, #0x6ad84b4
0x06AD84A8: e00308aa  mov x0, x8
0x06AD84AC: b8a11a97  bl #0x3180b8c
0x06AD84B0: c80240f9  ldr x8, [x22]
0x06AD84B4: 095d40f9  ldr x9, [x8, #0xb8]
0x06AD84B8: 340940f9  ldr x20, [x9, #0x10]
0x06AD84BC: 140300b5  cbnz x20, #0x6ad851c
0x06AD84C0: 09e140b9  ldr w9, [x8, #0xe0]
0x06AD84C4: 89000035  cbnz w9, #0x6ad84d4
0x06AD84C8: e00308aa  mov x0, x8
0x06AD84CC: b0a11a97  bl #0x3180b8c
0x06AD84D0: c80240f9  ldr x8, [x22]
0x06AD84D4: a95c00f0  adrp x9, #0x766f000
0x06AD84D8: 085d40f9  ldr x8, [x8, #0xb8]
0x06AD84DC: 292141f9  ldr x9, [x9, #0x240]
0x06AD84E0: 150140f9  ldr x21, [x8]
0x06AD84E4: 200140f9  ldr x0, [x9]
0x06AD84E8: eea11a97  bl #0x3180ca0
0x06AD84EC: e8620090  adrp x8, #0x7734000
0x06AD84F0: 083d42f9  ldr x8, [x8, #0x478]
0x06AD84F4: e10315aa  mov x1, x21
0x06AD84F8: e3031faa  mov x3, xzr
0x06AD84FC: f40300aa  mov x20, x0
0x06AD8500: 020140f9  ldr x2, [x8]
0x06AD8504: 3427a197  bl #0x53221d4
0x06AD8508: c80240f9  ldr x8, [x22]
0x06AD850C: e10314aa  mov x1, x20
0x06AD8510: 005d40f9  ldr x0, [x8, #0xb8]
0x06AD8514: 140c01f8  str x20, [x0, #0x10]!
0x06AD8518: 2ba11a97  bl #0x31809c4
0x06AD851C: 130400b4  cbz x19, #0x6ad859c
0x06AD8520: aa5c00f0  adrp x10, #0x766f000
0x06AD8524: 680240f9  ldr x8, [x19]
0x06AD8528: 4a2541f9  ldr x10, [x10, #0x248]
0x06AD852C: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD8530: 410140f9  ldr x1, [x10]
0x06AD8534: 290100b4  cbz x9, #0x6ad8558
0x06AD8538: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD853C: 4a210091  add x10, x10, #8
0x06AD8540: 4b815ff8  ldur x11, [x10, #-8]
0x06AD8544: 7f0101eb  cmp x11, x1
0x06AD8548: 00010054  b.eq #0x6ad8568
0x06AD854C: 290500f1  subs x9, x9, #1
0x06AD8550: 4a410091  add x10, x10, #0x10
0x06AD8554: 61ffff54  b.ne #0x6ad8540
0x06AD8558: 22008052  movz w2, #0x1
0x06AD855C: e00313aa  mov x0, x19
0x06AD8560: 6cf91997  bl #0x3156b10
0x06AD8564: 05000014  b #0x6ad8578
0x06AD8568: 490140b9  ldr w9, [x10]
0x06AD856C: 29050011  add w9, w9, #1
0x06AD8570: 08d1298b  add x8, x8, w9, sxtw #4
0x06AD8574: 00e10491  add x0, x8, #0x138
0x06AD8578: 080840a9  ldp x8, x2, [x0]
0x06AD857C: e00313aa  mov x0, x19
0x06AD8580: e10314aa  mov x1, x20
0x06AD8584: 00013fd6  blr x8
0x06AD8588: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06AD858C: f65742a9  ldp x22, x21, [sp, #0x20]
0x06AD8590: fe5f41a9  ldp x30, x23, [sp, #0x10]
0x06AD8594: ff030191  add sp, sp, #0x40
0x06AD8598: c0035fd6  ret
0x06AD859C: c4a11a97  bl #0x3180cac

; RVA 0x6AD85A8 | private void OnCycleEnded(long cycleEndDate) { }
; bytes=516 sha256=edbb3e8d65a9d849653c4a74d2894e9cae9f4d7568b694b78444db8263558393 status=arm64_complete_bound indexed_start=True
0x06AD85A8: fe0f1df8  str x30, [sp, #-0x30]!
0x06AD85AC: f65701a9  stp x22, x21, [sp, #0x10]
0x06AD85B0: f44f02a9  stp x20, x19, [sp, #0x20]
0x06AD85B4: 959200d0  adrp x21, #0x7d2a000
0x06AD85B8: a8866b39  ldrb w8, [x21, #0xae1]
0x06AD85BC: f40301aa  mov x20, x1
0x06AD85C0: f30300aa  mov x19, x0
0x06AD85C4: 48020037  tbnz w8, #0, #0x6ad860c
0x06AD85C8: e0620090  adrp x0, #0x7734000
0x06AD85CC: 004442f9  ldr x0, [x0, #0x488]
0x06AD85D0: 12a11a97  bl #0x3180a18
0x06AD85D4: e0620090  adrp x0, #0x7734000
0x06AD85D8: 004842f9  ldr x0, [x0, #0x490]
0x06AD85DC: 0fa11a97  bl #0x3180a18
0x06AD85E0: c06000f0  adrp x0, #0x76f3000
0x06AD85E4: 00d445f9  ldr x0, [x0, #0xba8]
0x06AD85E8: 0ca11a97  bl #0x3180a18
0x06AD85EC: c05c00f0  adrp x0, #0x7673000
0x06AD85F0: 008846f9  ldr x0, [x0, #0xd10]
0x06AD85F4: 09a11a97  bl #0x3180a18
0x06AD85F8: c05c00f0  adrp x0, #0x7673000
0x06AD85FC: 009c43f9  ldr x0, [x0, #0x738]
0x06AD8600: 06a11a97  bl #0x3180a18
0x06AD8604: 28008052  movz w8, #0x1
0x06AD8608: a8862b39  strb w8, [x21, #0xae1]
0x06AD860C: 603e40f9  ldr x0, [x19, #0x78]
0x06AD8610: c00c00b4  cbz x0, #0x6ad87a8
0x06AD8614: e8620090  adrp x8, #0x7734000
0x06AD8618: 084942f9  ldr x8, [x8, #0x490]
0x06AD861C: 752e40f9  ldr x21, [x19, #0x58]
0x06AD8620: e10314aa  mov x1, x20
0x06AD8624: 020140f9  ldr x2, [x8]
0x06AD8628: d24f8e97  bl #0x4e6c570
0x06AD862C: e00b00b4  cbz x0, #0x6ad87a8
0x06AD8630: ca5c00f0  adrp x10, #0x7673000
0x06AD8634: 080040f9  ldr x8, [x0]
0x06AD8638: 4a9d43f9  ldr x10, [x10, #0x738]
0x06AD863C: f60300aa  mov x22, x0
0x06AD8640: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD8644: 410140f9  ldr x1, [x10]
0x06AD8648: 290100b4  cbz x9, #0x6ad866c
0x06AD864C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD8650: 4a210091  add x10, x10, #8
0x06AD8654: 4b815ff8  ldur x11, [x10, #-8]
0x06AD8658: 7f0101eb  cmp x11, x1
0x06AD865C: 00010054  b.eq #0x6ad867c
0x06AD8660: 290500f1  subs x9, x9, #1
0x06AD8664: 4a410091  add x10, x10, #0x10
0x06AD8668: 61ffff54  b.ne #0x6ad8654
0x06AD866C: e00316aa  mov x0, x22
0x06AD8670: e2031f2a  mov w2, wzr
0x06AD8674: 27f91997  bl #0x3156b10
0x06AD8678: 04000014  b #0x6ad8688
0x06AD867C: 490180b9  ldrsw x9, [x10]
0x06AD8680: 0811098b  add x8, x8, x9, lsl #4
0x06AD8684: 00e10491  add x0, x8, #0x138
0x06AD8688: 080440a9  ldp x8, x1, [x0]
0x06AD868C: e00316aa  mov x0, x22
0x06AD8690: 00013fd6  blr x8
0x06AD8694: b50800b4  cbz x21, #0x6ad87a8
0x06AD8698: ca5c00f0  adrp x10, #0x7673000
0x06AD869C: a80240f9  ldr x8, [x21]
0x06AD86A0: 4a8946f9  ldr x10, [x10, #0xd10]
0x06AD86A4: f60300aa  mov x22, x0
0x06AD86A8: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD86AC: 410140f9  ldr x1, [x10]
0x06AD86B0: 290100b4  cbz x9, #0x6ad86d4
0x06AD86B4: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD86B8: 4a210091  add x10, x10, #8
0x06AD86BC: 4b815ff8  ldur x11, [x10, #-8]
0x06AD86C0: 7f0101eb  cmp x11, x1
0x06AD86C4: 00010054  b.eq #0x6ad86e4
0x06AD86C8: 290500f1  subs x9, x9, #1
0x06AD86CC: 4a410091  add x10, x10, #0x10
0x06AD86D0: 61ffff54  b.ne #0x6ad86bc
0x06AD86D4: 42008052  movz w2, #0x2
0x06AD86D8: e00315aa  mov x0, x21
0x06AD86DC: 0df91997  bl #0x3156b10
0x06AD86E0: 05000014  b #0x6ad86f4
0x06AD86E4: 490140b9  ldr w9, [x10]
0x06AD86E8: 29090011  add w9, w9, #2
0x06AD86EC: 08d1298b  add x8, x8, w9, sxtw #4
0x06AD86F0: 00e10491  add x0, x8, #0x138
0x06AD86F4: 080840a9  ldp x8, x2, [x0]
0x06AD86F8: e00315aa  mov x0, x21
0x06AD86FC: e10316aa  mov x1, x22
0x06AD8700: 00013fd6  blr x8
0x06AD8704: 603e40f9  ldr x0, [x19, #0x78]
0x06AD8708: 000500b4  cbz x0, #0x6ad87a8
0x06AD870C: e8620090  adrp x8, #0x7734000
0x06AD8710: 084542f9  ldr x8, [x8, #0x488]
0x06AD8714: e10314aa  mov x1, x20
0x06AD8718: 020140f9  ldr x2, [x8]
0x06AD871C: da548e97  bl #0x4e6da84
0x06AD8720: 741640f9  ldr x20, [x19, #0x28]
0x06AD8724: 340400b4  cbz x20, #0x6ad87a8
0x06AD8728: ca6000f0  adrp x10, #0x76f3000
0x06AD872C: 880240f9  ldr x8, [x20]
0x06AD8730: 4ad545f9  ldr x10, [x10, #0xba8]
0x06AD8734: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD8738: 410140f9  ldr x1, [x10]
0x06AD873C: 290100b4  cbz x9, #0x6ad8760
0x06AD8740: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD8744: 4a210091  add x10, x10, #8
0x06AD8748: 4b815ff8  ldur x11, [x10, #-8]
0x06AD874C: 7f0101eb  cmp x11, x1
0x06AD8750: 00010054  b.eq #0x6ad8770
0x06AD8754: 290500f1  subs x9, x9, #1
0x06AD8758: 4a410091  add x10, x10, #0x10
0x06AD875C: 61ffff54  b.ne #0x6ad8748
0x06AD8760: 82008052  movz w2, #0x4
0x06AD8764: e00314aa  mov x0, x20
0x06AD8768: eaf81997  bl #0x3156b10
0x06AD876C: 05000014  b #0x6ad8780
0x06AD8770: 490140b9  ldr w9, [x10]
0x06AD8774: 29110011  add w9, w9, #4
0x06AD8778: 08d1298b  add x8, x8, w9, sxtw #4
0x06AD877C: 00e10491  add x0, x8, #0x138
0x06AD8780: 080440a9  ldp x8, x1, [x0]
0x06AD8784: e00314aa  mov x0, x20
0x06AD8788: 00013fd6  blr x8
0x06AD878C: 603240f9  ldr x0, [x19, #0x60]
0x06AD8790: c00000b4  cbz x0, #0x6ad87a8
0x06AD8794: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06AD8798: f65741a9  ldp x22, x21, [sp, #0x10]
0x06AD879C: e1031faa  mov x1, xzr
0x06AD87A0: fe0743f8  ldr x30, [sp], #0x30
0x06AD87A4: bb45e417  b #0x63e9e90
0x06AD87A8: 41a11a97  bl #0x3180cac

; RVA 0x6AD62D8 | private void UnregisterAllCycleTimers() { }
; bytes=616 sha256=1802e9c2126063cdfec49935a43e3a86263de95ac9d25e52423e8885ff5a43f6 status=arm64_complete_bound indexed_start=True
0x06AD62D8: ff4302d1  sub sp, sp, #0x90
0x06AD62DC: fe6f04a9  stp x30, x27, [sp, #0x40]
0x06AD62E0: fa6705a9  stp x26, x25, [sp, #0x50]
0x06AD62E4: f85f06a9  stp x24, x23, [sp, #0x60]
0x06AD62E8: f65707a9  stp x22, x21, [sp, #0x70]
0x06AD62EC: f44f08a9  stp x20, x19, [sp, #0x80]
0x06AD62F0: b4920090  adrp x20, #0x7d2a000
0x06AD62F4: 888a6b39  ldrb w8, [x20, #0xae2]
0x06AD62F8: f30300aa  mov x19, x0
0x06AD62FC: c8030037  tbnz w8, #0, #0x6ad6374
0x06AD6300: e06200d0  adrp x0, #0x7734000
0x06AD6304: 00e041f9  ldr x0, [x0, #0x3c0]
0x06AD6308: c4a91a97  bl #0x3180a18
0x06AD630C: e06200d0  adrp x0, #0x7734000
0x06AD6310: 00e441f9  ldr x0, [x0, #0x3c8]
0x06AD6314: c1a91a97  bl #0x3180a18
0x06AD6318: e06200d0  adrp x0, #0x7734000
0x06AD631C: 00e841f9  ldr x0, [x0, #0x3d0]
0x06AD6320: bea91a97  bl #0x3180a18
0x06AD6324: e06200d0  adrp x0, #0x7734000
0x06AD6328: 00ec41f9  ldr x0, [x0, #0x3d8]
0x06AD632C: bba91a97  bl #0x3180a18
0x06AD6330: e06200d0  adrp x0, #0x7734000
0x06AD6334: 00f041f9  ldr x0, [x0, #0x3e0]
0x06AD6338: b8a91a97  bl #0x3180a18
0x06AD633C: e05c00b0  adrp x0, #0x7673000
0x06AD6340: 008846f9  ldr x0, [x0, #0xd10]
0x06AD6344: b5a91a97  bl #0x3180a18
0x06AD6348: c05b0090  adrp x0, #0x764e000
0x06AD634C: 004843f9  ldr x0, [x0, #0x690]
0x06AD6350: b2a91a97  bl #0x3180a18
0x06AD6354: e06200d0  adrp x0, #0x7734000
0x06AD6358: 00f441f9  ldr x0, [x0, #0x3e8]
0x06AD635C: afa91a97  bl #0x3180a18
0x06AD6360: e06200d0  adrp x0, #0x7734000
0x06AD6364: 00f841f9  ldr x0, [x0, #0x3f0]
0x06AD6368: aca91a97  bl #0x3180a18
0x06AD636C: 28008052  movz w8, #0x1
0x06AD6370: 888a2b39  strb w8, [x20, #0xae2]
0x06AD6374: ff7f02a9  stp xzr, xzr, [sp, #0x20]
0x06AD6378: ff1b00f9  str xzr, [sp, #0x30]
0x06AD637C: 603e40f9  ldr x0, [x19, #0x78]
0x06AD6380: 600a00b4  cbz x0, #0x6ad64cc
0x06AD6384: e86200d0  adrp x8, #0x7734000
0x06AD6388: 08e541f9  ldr x8, [x8, #0x3c8]
0x06AD638C: 010140f9  ldr x1, [x8]
0x06AD6390: d0578e97  bl #0x4e6c2d0
0x06AD6394: c00900b4  cbz x0, #0x6ad64cc
0x06AD6398: e86200d0  adrp x8, #0x7734000
0x06AD639C: 08f541f9  ldr x8, [x8, #0x3e8]
0x06AD63A0: f86200d0  adrp x24, #0x7734000
0x06AD63A4: d95b0090  adrp x25, #0x764e000
0x06AD63A8: fa6200d0  adrp x26, #0x7734000
0x06AD63AC: 18ef41f9  ldr x24, [x24, #0x3d8]
0x06AD63B0: 394b43f9  ldr x25, [x25, #0x690]
0x06AD63B4: 5afb41f9  ldr x26, [x26, #0x3f0]
0x06AD63B8: 010140f9  ldr x1, [x8]
0x06AD63BC: fb5c00b0  adrp x27, #0x7673000
0x06AD63C0: f66200d0  adrp x22, #0x7734000
0x06AD63C4: f76200d0  adrp x23, #0x7734000
0x06AD63C8: 7b8b46f9  ldr x27, [x27, #0xd10]
0x06AD63CC: d6e241f9  ldr x22, [x22, #0x3c0]
0x06AD63D0: f7ea41f9  ldr x23, [x23, #0x3d0]
0x06AD63D4: e8230091  add x8, sp, #8
0x06AD63D8: ed8ba397  bl #0x53b938c
0x06AD63DC: e083c03c  ldur q0, [sp, #8]
0x06AD63E0: e80f40f9  ldr x8, [sp, #0x18]
0x06AD63E4: e00b803d  str q0, [sp, #0x20]
0x06AD63E8: e81b00f9  str x8, [sp, #0x30]
0x06AD63EC: 010340f9  ldr x1, [x24]
0x06AD63F0: e0830091  add x0, sp, #0x20
0x06AD63F4: e0ed9597  bl #0x5051b74
0x06AD63F8: c0040036  tbz w0, #0, #0x6ad6490
0x06AD63FC: e81b40f9  ldr x8, [sp, #0x30]
0x06AD6400: 742e40f9  ldr x20, [x19, #0x58]
0x06AD6404: 200340f9  ldr x0, [x25]
0x06AD6408: e80700f9  str x8, [sp, #8]
0x06AD640C: e1230091  add x1, sp, #8
0x06AD6410: e1a91a97  bl #0x3180b94
0x06AD6414: e10300aa  mov x1, x0
0x06AD6418: 400340f9  ldr x0, [x26]
0x06AD641C: e2031faa  mov x2, xzr
0x06AD6420: a860a897  bl #0x54ee6c0
0x06AD6424: 340500b4  cbz x20, #0x6ad64c8
0x06AD6428: 880240f9  ldr x8, [x20]
0x06AD642C: 610340f9  ldr x1, [x27]
0x06AD6430: f50300aa  mov x21, x0
0x06AD6434: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD6438: 290100b4  cbz x9, #0x6ad645c
0x06AD643C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD6440: 4a210091  add x10, x10, #8
0x06AD6444: 4b815ff8  ldur x11, [x10, #-8]
0x06AD6448: 7f0101eb  cmp x11, x1
0x06AD644C: 00010054  b.eq #0x6ad646c
0x06AD6450: 290500f1  subs x9, x9, #1
0x06AD6454: 4a410091  add x10, x10, #0x10
0x06AD6458: 61ffff54  b.ne #0x6ad6444
0x06AD645C: 42008052  movz w2, #0x2
0x06AD6460: e00314aa  mov x0, x20
0x06AD6464: ab011a97  bl #0x3156b10
0x06AD6468: 05000014  b #0x6ad647c
0x06AD646C: 490140b9  ldr w9, [x10]
0x06AD6470: 29090011  add w9, w9, #2
0x06AD6474: 08d1298b  add x8, x8, w9, sxtw #4
0x06AD6478: 00e10491  add x0, x8, #0x138
0x06AD647C: 080840a9  ldp x8, x2, [x0]
0x06AD6480: e00314aa  mov x0, x20
0x06AD6484: e10315aa  mov x1, x21
0x06AD6488: 00013fd6  blr x8
0x06AD648C: d8ffff17  b #0x6ad63ec
0x06AD6490: e10240f9  ldr x1, [x23]
0x06AD6494: e0830091  add x0, sp, #0x20
0x06AD6498: b6ed9597  bl #0x5051b70
0x06AD649C: 603e40f9  ldr x0, [x19, #0x78]
0x06AD64A0: 600100b4  cbz x0, #0x6ad64cc
0x06AD64A4: c10240f9  ldr x1, [x22]
0x06AD64A8: bc588e97  bl #0x4e6c798
0x06AD64AC: f44f48a9  ldp x20, x19, [sp, #0x80]
0x06AD64B0: f65747a9  ldp x22, x21, [sp, #0x70]
0x06AD64B4: f85f46a9  ldp x24, x23, [sp, #0x60]
0x06AD64B8: fa6745a9  ldp x26, x25, [sp, #0x50]
0x06AD64BC: fe6f44a9  ldp x30, x27, [sp, #0x40]
0x06AD64C0: ff430291  add sp, sp, #0x90
0x06AD64C4: c0035fd6  ret
0x06AD64C8: f9a91a97  bl #0x3180cac
0x06AD64CC: f8a91a97  bl #0x3180cac
0x06AD64D0: 03000014  b #0x6ad64dc
0x06AD64D4: 02000014  b #0x6ad64dc
0x06AD64D8: 01000014  b #0x6ad64dc
0x06AD64DC: f40300aa  mov x20, x0
0x06AD64E0: 3f040071  cmp w1, #1
0x06AD64E4: 61010054  b.ne #0x6ad6510
0x06AD64E8: e00314aa  mov x0, x20
0x06AD64EC: 09e11b94  bl #0x71ce910
0x06AD64F0: 150040f9  ldr x21, [x0]
0x06AD64F4: 0be11b94  bl #0x71ce920
0x06AD64F8: e10240f9  ldr x1, [x23]
0x06AD64FC: e0830091  add x0, sp, #0x20
0x06AD6500: 9ced9597  bl #0x5051b70
0x06AD6504: d5fcffb4  cbz x21, #0x6ad649c
0x06AD6508: e00315aa  mov x0, x21
0x06AD650C: e6a91a97  bl #0x3180ca4
0x06AD6510: f5031faa  mov x21, xzr
0x06AD6514: 02000014  b #0x6ad651c
0x06AD6518: f40300aa  mov x20, x0
0x06AD651C: e10240f9  ldr x1, [x23]
0x06AD6520: e0830091  add x0, sp, #0x20
0x06AD6524: 93ed9597  bl #0x5051b70
0x06AD6528: 750000b5  cbnz x21, #0x6ad6534
0x06AD652C: e00314aa  mov x0, x20
0x06AD6530: 0a3d1e97  bl #0x3265958
0x06AD6534: e00315aa  mov x0, x21
0x06AD6538: dba91a97  bl #0x3180ca4
0x06AD653C: f6cb0c97  bl #0x2e09514

; RVA 0x6AD87AC | private void RefreshState(ProducerExcitementRefreshStateSignal signal) { }
; bytes=40 sha256=62a8d732186f4e417b8e37cc850a726c77e4f385c701c8b6705e63138c106d04 status=arm64_complete_bound indexed_start=True
0x06AD87AC: fe0f1ff8  str x30, [sp, #-0x10]!
0x06AD87B0: 010100b4  cbz x1, #0x6ad87d0
0x06AD87B4: 280840f9  ldr x8, [x1, #0x10]
0x06AD87B8: 880000b4  cbz x8, #0x6ad87c8
0x06AD87BC: 010d40f9  ldr x1, [x8, #0x18]
0x06AD87C0: fe0741f8  ldr x30, [sp], #0x10
0x06AD87C4: 70feff17  b #0x6ad8184
0x06AD87C8: fe0741f8  ldr x30, [sp], #0x10
0x06AD87CC: c0035fd6  ret
0x06AD87D0: 37a11a97  bl #0x3180cac

; RVA 0x6AD87D4 | public void .ctor() { }
; bytes=136 sha256=b6dc583bc785564d3f8334da681ff26f495a3ad42277fb1bf88ea62c39b572ff status=arm64_complete_bound indexed_start=True
0x06AD87D4: fe0f1df8  str x30, [sp, #-0x30]!
0x06AD87D8: f65701a9  stp x22, x21, [sp, #0x10]
0x06AD87DC: f44f02a9  stp x20, x19, [sp, #0x20]
0x06AD87E0: 959200d0  adrp x21, #0x7d2a000
0x06AD87E4: f6620090  adrp x22, #0x7734000
0x06AD87E8: f4620090  adrp x20, #0x7734000
0x06AD87EC: a88e6b39  ldrb w8, [x21, #0xae3]
0x06AD87F0: d64e42f9  ldr x22, [x22, #0x498]
0x06AD87F4: 945242f9  ldr x20, [x20, #0x4a0]
0x06AD87F8: f30300aa  mov x19, x0
0x06AD87FC: 28010037  tbnz w8, #0, #0x6ad8820
0x06AD8800: e0620090  adrp x0, #0x7734000
0x06AD8804: 005042f9  ldr x0, [x0, #0x4a0]
0x06AD8808: 84a01a97  bl #0x3180a18
0x06AD880C: e0620090  adrp x0, #0x7734000
0x06AD8810: 004c42f9  ldr x0, [x0, #0x498]
0x06AD8814: 81a01a97  bl #0x3180a18
0x06AD8818: 28008052  movz w8, #0x1
0x06AD881C: a88e2b39  strb w8, [x21, #0xae3]
0x06AD8820: c00240f9  ldr x0, [x22]
0x06AD8824: 1fa11a97  bl #0x3180ca0
0x06AD8828: 810240f9  ldr x1, [x20]
0x06AD882C: f40300aa  mov x20, x0
0x06AD8830: fa4b8e97  bl #0x4e6b818
0x06AD8834: e00313aa  mov x0, x19
0x06AD8838: 148c07f8  str x20, [x0, #0x78]!
0x06AD883C: e10314aa  mov x1, x20
0x06AD8840: 61a01a97  bl #0x31809c4
0x06AD8844: e00313aa  mov x0, x19
0x06AD8848: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06AD884C: f65741a9  ldp x22, x21, [sp, #0x10]
0x06AD8850: e1031faa  mov x1, xzr
0x06AD8854: fe0743f8  ldr x30, [sp], #0x30
0x06AD8858: dbc3f717  b #0x68c97c4

