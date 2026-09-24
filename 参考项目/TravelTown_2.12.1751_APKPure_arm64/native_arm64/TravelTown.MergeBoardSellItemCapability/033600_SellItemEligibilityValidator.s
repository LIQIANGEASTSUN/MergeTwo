; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 33600 Merger.MergeBoardSellItemCapability.Logic.SellItemEligibilityValidator
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A60CC8 | public bool CanBeSold(Entity entity) { }
; bytes=728 sha256=00a2cebb49adf58f27728f43e0d77ae6e39ca529b12617e09cfa61c7870ebb3e status=arm64_complete_bound indexed_start=True
0x06A60CC8: ff0302d1  sub sp, sp, #0x80
0x06A60CCC: fe5f05a9  stp x30, x23, [sp, #0x50]
0x06A60CD0: f65706a9  stp x22, x21, [sp, #0x60]
0x06A60CD4: f44f07a9  stp x20, x19, [sp, #0x70]
0x06A60CD8: 549600d0  adrp x20, #0x7d2a000
0x06A60CDC: 88925939  ldrb w8, [x20, #0x664]
0x06A60CE0: f50301aa  mov x21, x1
0x06A60CE4: f30300aa  mov x19, x0
0x06A60CE8: 08030037  tbnz w8, #0, #0x6a60d48
0x06A60CEC: 606000f0  adrp x0, #0x766f000
0x06A60CF0: 00f844f9  ldr x0, [x0, #0x9f0]
0x06A60CF4: 497f1c97  bl #0x3180a18
0x06A60CF8: c06000d0  adrp x0, #0x767a000
0x06A60CFC: 004442f9  ldr x0, [x0, #0x488]
0x06A60D00: 467f1c97  bl #0x3180a18
0x06A60D04: 80660090  adrp x0, #0x7730000
0x06A60D08: 00a443f9  ldr x0, [x0, #0x748]
0x06A60D0C: 437f1c97  bl #0x3180a18
0x06A60D10: c06000d0  adrp x0, #0x767a000
0x06A60D14: 00ac42f9  ldr x0, [x0, #0x558]
0x06A60D18: 407f1c97  bl #0x3180a18
0x06A60D1C: e06000d0  adrp x0, #0x767e000
0x06A60D20: 00a442f9  ldr x0, [x0, #0x548]
0x06A60D24: 3d7f1c97  bl #0x3180a18
0x06A60D28: c06000d0  adrp x0, #0x767a000
0x06A60D2C: 004c42f9  ldr x0, [x0, #0x498]
0x06A60D30: 3a7f1c97  bl #0x3180a18
0x06A60D34: 40630090  adrp x0, #0x76c8000
0x06A60D38: 003c47f9  ldr x0, [x0, #0xe78]
0x06A60D3C: 377f1c97  bl #0x3180a18
0x06A60D40: 28008052  movz w8, #0x1
0x06A60D44: 88921939  strb w8, [x20, #0x664]
0x06A60D48: 00e4006f  movi v0.2d, #0000000000000000
0x06A60D4C: e08301ad  stp q0, q0, [sp, #0x30]
0x06A60D50: b50a00b4  cbz x21, #0x6a60ea4
0x06A60D54: c86000d0  adrp x8, #0x767a000
0x06A60D58: 084542f9  ldr x8, [x8, #0x488]
0x06A60D5C: e00315aa  mov x0, x21
0x06A60D60: 010140f9  ldr x1, [x8]
0x06A60D64: e8030091  mov x8, sp
0x06A60D68: 3ae94697  bl #0x3c1b250
0x06A60D6C: 740e40f9  ldr x20, [x19, #0x18]
0x06A60D70: 741100b4  cbz x20, #0x6a60f9c
0x06A60D74: ca6000d0  adrp x10, #0x767a000
0x06A60D78: 880240f9  ldr x8, [x20]
0x06A60D7C: 4a4d42f9  ldr x10, [x10, #0x498]
0x06A60D80: 97660090  adrp x23, #0x7730000
0x06A60D84: f60340f9  ldr x22, [sp]
0x06A60D88: 095d4279  ldrh w9, [x8, #0x12e]
0x06A60D8C: 410140f9  ldr x1, [x10]
0x06A60D90: f7a643f9  ldr x23, [x23, #0x748]
0x06A60D94: 290100b4  cbz x9, #0x6a60db8
0x06A60D98: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A60D9C: 4a210091  add x10, x10, #8
0x06A60DA0: 4b815ff8  ldur x11, [x10, #-8]
0x06A60DA4: 7f0101eb  cmp x11, x1
0x06A60DA8: 00010054  b.eq #0x6a60dc8
0x06A60DAC: 290500f1  subs x9, x9, #1
0x06A60DB0: 4a410091  add x10, x10, #0x10
0x06A60DB4: 61ffff54  b.ne #0x6a60da0
0x06A60DB8: 22018052  movz w2, #0x9
0x06A60DBC: e00314aa  mov x0, x20
0x06A60DC0: 54d71b97  bl #0x3156b10
0x06A60DC4: 05000014  b #0x6a60dd8
0x06A60DC8: 490140b9  ldr w9, [x10]
0x06A60DCC: 29250011  add w9, w9, #9
0x06A60DD0: 08d1298b  add x8, x8, w9, sxtw #4
0x06A60DD4: 00e10491  add x0, x8, #0x138
0x06A60DD8: 080840a9  ldp x8, x2, [x0]
0x06A60DDC: e00314aa  mov x0, x20
0x06A60DE0: e10316aa  mov x1, x22
0x06A60DE4: 00013fd6  blr x8
0x06A60DE8: e10240f9  ldr x1, [x23]
0x06A60DEC: f40300aa  mov x20, x0
0x06A60DF0: e00315aa  mov x0, x21
0x06A60DF4: 81ec4697  bl #0x3c1bff8
0x06A60DF8: 40010036  tbz w0, #0, #0x6a60e20
0x06A60DFC: c86000d0  adrp x8, #0x767a000
0x06A60E00: 08ad42f9  ldr x8, [x8, #0x558]
0x06A60E04: e1c30091  add x1, sp, #0x30
0x06A60E08: e00315aa  mov x0, x21
0x06A60E0C: 020140f9  ldr x2, [x8]
0x06A60E10: c5fb4697  bl #0x3c1fd24
0x06A60E14: 60000036  tbz w0, #0, #0x6a60e20
0x06A60E18: e8e34039  ldrb w8, [sp, #0x38]
0x06A60E1C: 48040035  cbnz w8, #0x6a60ea4
0x06A60E20: f40b00b4  cbz x20, #0x6a60f9c
0x06A60E24: f66000d0  adrp x22, #0x767e000
0x06A60E28: 880240f9  ldr x8, [x20]
0x06A60E2C: d6a642f9  ldr x22, [x22, #0x548]
0x06A60E30: 095d4279  ldrh w9, [x8, #0x12e]
0x06A60E34: c10240f9  ldr x1, [x22]
0x06A60E38: 290100b4  cbz x9, #0x6a60e5c
0x06A60E3C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A60E40: 4a210091  add x10, x10, #8
0x06A60E44: 4b815ff8  ldur x11, [x10, #-8]
0x06A60E48: 7f0101eb  cmp x11, x1
0x06A60E4C: 00010054  b.eq #0x6a60e6c
0x06A60E50: 290500f1  subs x9, x9, #1
0x06A60E54: 4a410091  add x10, x10, #0x10
0x06A60E58: 61ffff54  b.ne #0x6a60e44
0x06A60E5C: 62008052  movz w2, #0x3
0x06A60E60: e00314aa  mov x0, x20
0x06A60E64: 2bd71b97  bl #0x3156b10
0x06A60E68: 05000014  b #0x6a60e7c
0x06A60E6C: 490140b9  ldr w9, [x10]
0x06A60E70: 290d0011  add w9, w9, #3
0x06A60E74: 08d1298b  add x8, x8, w9, sxtw #4
0x06A60E78: 00e10491  add x0, x8, #0x138
0x06A60E7C: 080440a9  ldp x8, x1, [x0]
0x06A60E80: e00314aa  mov x0, x20
0x06A60E84: 00013fd6  blr x8
0x06A60E88: a00800b4  cbz x0, #0x6a60f9c
0x06A60E8C: 08404039  ldrb w8, [x0, #0x10]
0x06A60E90: a8000034  cbz w8, #0x6a60ea4
0x06A60E94: e00315aa  mov x0, x21
0x06A60E98: e1031faa  mov x1, xzr
0x06A60E9C: 92960094  bl #0x6a868e4
0x06A60EA0: e0000036  tbz w0, #0, #0x6a60ebc
0x06A60EA4: e0031f2a  mov w0, wzr
0x06A60EA8: f44f47a9  ldp x20, x19, [sp, #0x70]
0x06A60EAC: f65746a9  ldp x22, x21, [sp, #0x60]
0x06A60EB0: fe5f45a9  ldp x30, x23, [sp, #0x50]
0x06A60EB4: ff030291  add sp, sp, #0x80
0x06A60EB8: c0035fd6  ret
0x06A60EBC: 730a40f9  ldr x19, [x19, #0x10]
0x06A60EC0: f30600b4  cbz x19, #0x6a60f9c
0x06A60EC4: 4a630090  adrp x10, #0x76c8000
0x06A60EC8: 680240f9  ldr x8, [x19]
0x06A60ECC: 4a3d47f9  ldr x10, [x10, #0xe78]
0x06A60ED0: 095d4279  ldrh w9, [x8, #0x12e]
0x06A60ED4: 410140f9  ldr x1, [x10]
0x06A60ED8: 290100b4  cbz x9, #0x6a60efc
0x06A60EDC: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A60EE0: 4a210091  add x10, x10, #8
0x06A60EE4: 4b815ff8  ldur x11, [x10, #-8]
0x06A60EE8: 7f0101eb  cmp x11, x1
0x06A60EEC: 00010054  b.eq #0x6a60f0c
0x06A60EF0: 290500f1  subs x9, x9, #1
0x06A60EF4: 4a410091  add x10, x10, #0x10
0x06A60EF8: 61ffff54  b.ne #0x6a60ee4
0x06A60EFC: e00313aa  mov x0, x19
0x06A60F00: e2031f2a  mov w2, wzr
0x06A60F04: 03d71b97  bl #0x3156b10
0x06A60F08: 04000014  b #0x6a60f18
0x06A60F0C: 490180b9  ldrsw x9, [x10]
0x06A60F10: 0811098b  add x8, x8, x9, lsl #4
0x06A60F14: 00e10491  add x0, x8, #0x138
0x06A60F18: 080440a9  ldp x8, x1, [x0]
0x06A60F1C: e00313aa  mov x0, x19
0x06A60F20: 00013fd6  blr x8
0x06A60F24: c00300b4  cbz x0, #0x6a60f9c
0x06A60F28: 880240f9  ldr x8, [x20]
0x06A60F2C: 132040b9  ldr w19, [x0, #0x20]
0x06A60F30: c10240f9  ldr x1, [x22]
0x06A60F34: 095d4279  ldrh w9, [x8, #0x12e]
0x06A60F38: 290100b4  cbz x9, #0x6a60f5c
0x06A60F3C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A60F40: 4a210091  add x10, x10, #8
0x06A60F44: 4b815ff8  ldur x11, [x10, #-8]
0x06A60F48: 7f0101eb  cmp x11, x1
0x06A60F4C: 00010054  b.eq #0x6a60f6c
0x06A60F50: 290500f1  subs x9, x9, #1
0x06A60F54: 4a410091  add x10, x10, #0x10
0x06A60F58: 61ffff54  b.ne #0x6a60f44
0x06A60F5C: 62008052  movz w2, #0x3
0x06A60F60: e00314aa  mov x0, x20
0x06A60F64: ebd61b97  bl #0x3156b10
0x06A60F68: 05000014  b #0x6a60f7c
0x06A60F6C: 490140b9  ldr w9, [x10]
0x06A60F70: 290d0011  add w9, w9, #3
0x06A60F74: 08d1298b  add x8, x8, w9, sxtw #4
0x06A60F78: 00e10491  add x0, x8, #0x138
0x06A60F7C: 080440a9  ldp x8, x1, [x0]
0x06A60F80: e00314aa  mov x0, x20
0x06A60F84: 00013fd6  blr x8
0x06A60F88: a00000b4  cbz x0, #0x6a60f9c
0x06A60F8C: 081c40b9  ldr w8, [x0, #0x1c]
0x06A60F90: 7f02086b  cmp w19, w8
0x06A60F94: e0b79f1a  cset w0, ge
0x06A60F98: c4ffff17  b #0x6a60ea8
0x06A60F9C: 447f1c97  bl #0x3180cac

; RVA 0x6A60FA0 | public void .ctor() { }
; bytes=8 sha256=fe9f40cc6c9415cd2f87dbde1dfbd00f30e7697e7a551635c0d2e78cf33e1f25 status=arm64_complete_bound indexed_start=True
0x06A60FA0: e1031faa  mov x1, xzr
0x06A60FA4: 96e5b117  b #0x56da5fc

