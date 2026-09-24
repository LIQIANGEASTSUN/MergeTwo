; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 7863 Merger.Boosters.Controllers.JokerCardBoosterController
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x65C9B98 | private BoosterBoardSystem get_BoosterBoardSystem() { }
; bytes=224 sha256=954c8704ce99d067458ecfb8d0cb66e4ecfc9204ab8e114a4fe455cdb0246a42 status=arm64_complete_bound indexed_start=True
0x065C9B98: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x065C9B9C: f44f01a9  stp x20, x19, [sp, #0x10]
0x065C9BA0: f3ba00d0  adrp x19, #0x7d27000
0x065C9BA4: 68ee6539  ldrb w8, [x19, #0x97b]
0x065C9BA8: f40300aa  mov x20, x0
0x065C9BAC: c8000037  tbnz w8, #0, #0x65c9bc4
0x065C9BB0: c08900d0  adrp x0, #0x7703000
0x065C9BB4: 00a040f9  ldr x0, [x0, #0x140]
0x065C9BB8: 98db2e97  bl #0x3180a18
0x065C9BBC: 28008052  movz w8, #0x1
0x065C9BC0: 68ee2539  strb w8, [x19, #0x97b]
0x065C9BC4: f30314aa  mov x19, x20
0x065C9BC8: 758e42f8  ldr x21, [x19, #0x28]!
0x065C9BCC: d50400b5  cbnz x21, #0x65c9c64
0x065C9BD0: 940e40f9  ldr x20, [x20, #0x18]
0x065C9BD4: 140500b4  cbz x20, #0x65c9c74
0x065C9BD8: c98900d0  adrp x9, #0x7703000
0x065C9BDC: 29a140f9  ldr x9, [x9, #0x140]
0x065C9BE0: 880240f9  ldr x8, [x20]
0x065C9BE4: 350140f9  ldr x21, [x9]
0x065C9BE8: 095d4279  ldrh w9, [x8, #0x12e]
0x065C9BEC: a11240f9  ldr x1, [x21, #0x20]
0x065C9BF0: a2a24079  ldrh w2, [x21, #0x50]
0x065C9BF4: 290100b4  cbz x9, #0x65c9c18
0x065C9BF8: 0a5940f9  ldr x10, [x8, #0xb0]
0x065C9BFC: 4a210091  add x10, x10, #8
0x065C9C00: 4b815ff8  ldur x11, [x10, #-8]
0x065C9C04: 7f0101eb  cmp x11, x1
0x065C9C08: e0000054  b.eq #0x65c9c24
0x065C9C0C: 290500f1  subs x9, x9, #1
0x065C9C10: 4a410091  add x10, x10, #0x10
0x065C9C14: 61ffff54  b.ne #0x65c9c00
0x065C9C18: e00314aa  mov x0, x20
0x065C9C1C: bd332e97  bl #0x3156b10
0x065C9C20: 05000014  b #0x65c9c34
0x065C9C24: 490140b9  ldr w9, [x10]
0x065C9C28: 2901020b  add w9, w9, w2
0x065C9C2C: 08d1298b  add x8, x8, w9, sxtw #4
0x065C9C30: 00e10491  add x0, x8, #0x138
0x065C9C34: 000440f9  ldr x0, [x0, #8]
0x065C9C38: e10315aa  mov x1, x21
0x065C9C3C: d3db2e97  bl #0x3180b88
0x065C9C40: 080440f9  ldr x8, [x0, #8]
0x065C9C44: e10300aa  mov x1, x0
0x065C9C48: e00314aa  mov x0, x20
0x065C9C4C: 00013fd6  blr x8
0x065C9C50: f50300aa  mov x21, x0
0x065C9C54: 600200f9  str x0, [x19]
0x065C9C58: e00313aa  mov x0, x19
0x065C9C5C: e10315aa  mov x1, x21
0x065C9C60: 59db2e97  bl #0x31809c4
0x065C9C64: f44f41a9  ldp x20, x19, [sp, #0x10]
0x065C9C68: e00315aa  mov x0, x21
0x065C9C6C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x065C9C70: c0035fd6  ret
0x065C9C74: 0edc2e97  bl #0x3180cac

; RVA 0x65C9C78 | public BoosterType get_Type() { }
; bytes=8 sha256=866b82fb6649dcf0f7873c61006d47004b1074ea9b382227c4ab724c93f547f7 status=arm64_complete_bound indexed_start=True
0x065C9C78: 80008052  movz w0, #0x4
0x065C9C7C: c0035fd6  ret

; RVA 0x65C9C80 | public void Process(List<RemoteBoosterData> boosters) { }
; bytes=632 sha256=88df27dd2e4a459cbfaf667e25aaf1eb50a99e2f4ddbf0965f0d2bcf34e1fe32 status=arm64_complete_bound indexed_start=True
0x065C9C80: ff0302d1  sub sp, sp, #0x80
0x065C9C84: fe6704a9  stp x30, x25, [sp, #0x40]
0x065C9C88: f85f05a9  stp x24, x23, [sp, #0x50]
0x065C9C8C: f65706a9  stp x22, x21, [sp, #0x60]
0x065C9C90: f44f07a9  stp x20, x19, [sp, #0x70]
0x065C9C94: f5ba00d0  adrp x21, #0x7d27000
0x065C9C98: a8f26539  ldrb w8, [x21, #0x97c]
0x065C9C9C: f40301aa  mov x20, x1
0x065C9CA0: f30300aa  mov x19, x0
0x065C9CA4: a8020037  tbnz w8, #0, #0x65c9cf8
0x065C9CA8: a08500f0  adrp x0, #0x7680000
0x065C9CAC: 009c43f9  ldr x0, [x0, #0x738]
0x065C9CB0: 5adb2e97  bl #0x3180a18
0x065C9CB4: a08500f0  adrp x0, #0x7680000
0x065C9CB8: 00a043f9  ldr x0, [x0, #0x740]
0x065C9CBC: 57db2e97  bl #0x3180a18
0x065C9CC0: a08500f0  adrp x0, #0x7680000
0x065C9CC4: 00a443f9  ldr x0, [x0, #0x748]
0x065C9CC8: 54db2e97  bl #0x3180a18
0x065C9CCC: 608400d0  adrp x0, #0x7657000
0x065C9CD0: 002446f9  ldr x0, [x0, #0xc48]
0x065C9CD4: 51db2e97  bl #0x3180a18
0x065C9CD8: 808500b0  adrp x0, #0x767a000
0x065C9CDC: 005445f9  ldr x0, [x0, #0xaa8]
0x065C9CE0: 4edb2e97  bl #0x3180a18
0x065C9CE4: a08500f0  adrp x0, #0x7680000
0x065C9CE8: 00ac43f9  ldr x0, [x0, #0x758]
0x065C9CEC: 4bdb2e97  bl #0x3180a18
0x065C9CF0: 28008052  movz w8, #0x1
0x065C9CF4: a8f22539  strb w8, [x21, #0x97c]
0x065C9CF8: ff7f02a9  stp xzr, xzr, [sp, #0x20]
0x065C9CFC: ff1b00f9  str xzr, [sp, #0x30]
0x065C9D00: 340b00b4  cbz x20, #0x65c9e64
0x065C9D04: a88500f0  adrp x8, #0x7680000
0x065C9D08: 08ad43f9  ldr x8, [x8, #0x758]
0x065C9D0C: b78500f0  adrp x23, #0x7680000
0x065C9D10: f7a243f9  ldr x23, [x23, #0x740]
0x065C9D14: 988500b0  adrp x24, #0x767a000
0x065C9D18: 010140f9  ldr x1, [x8]
0x065C9D1C: 798400d0  adrp x25, #0x7657000
0x065C9D20: b68500f0  adrp x22, #0x7680000
0x065C9D24: 185745f9  ldr x24, [x24, #0xaa8]
0x065C9D28: 392746f9  ldr x25, [x25, #0xc48]
0x065C9D2C: d69e43f9  ldr x22, [x22, #0x738]
0x065C9D30: e8230091  add x8, sp, #8
0x065C9D34: e00314aa  mov x0, x20
0x065C9D38: ccec6997  bl #0x4045068
0x065C9D3C: e083c03c  ldur q0, [sp, #8]
0x065C9D40: e80f40f9  ldr x8, [sp, #0x18]
0x065C9D44: e00b803d  str q0, [sp, #0x20]
0x065C9D48: e81b00f9  str x8, [sp, #0x30]
0x065C9D4C: e10240f9  ldr x1, [x23]
0x065C9D50: e0830091  add x0, sp, #0x20
0x065C9D54: 182fa997  bl #0x50159b4
0x065C9D58: a0060036  tbz w0, #0, #0x65c9e2c
0x065C9D5C: f41b40f9  ldr x20, [sp, #0x30]
0x065C9D60: 940700b4  cbz x20, #0x65c9e50
0x065C9D64: 883a40b9  ldr w8, [x20, #0x38]
0x065C9D68: 1f110071  cmp w8, #4
0x065C9D6C: 01ffff54  b.ne #0x65c9d4c
0x065C9D70: 751240f9  ldr x21, [x19, #0x20]
0x065C9D74: 150700b4  cbz x21, #0x65c9e54
0x065C9D78: a80240f9  ldr x8, [x21]
0x065C9D7C: 010340f9  ldr x1, [x24]
0x065C9D80: 095d4279  ldrh w9, [x8, #0x12e]
0x065C9D84: 290100b4  cbz x9, #0x65c9da8
0x065C9D88: 0a5940f9  ldr x10, [x8, #0xb0]
0x065C9D8C: 4a210091  add x10, x10, #8
0x065C9D90: 4b815ff8  ldur x11, [x10, #-8]
0x065C9D94: 7f0101eb  cmp x11, x1
0x065C9D98: 00010054  b.eq #0x65c9db8
0x065C9D9C: 290500f1  subs x9, x9, #1
0x065C9DA0: 4a410091  add x10, x10, #0x10
0x065C9DA4: 61ffff54  b.ne #0x65c9d90
0x065C9DA8: e2008052  movz w2, #0x7
0x065C9DAC: e00315aa  mov x0, x21
0x065C9DB0: 58332e97  bl #0x3156b10
0x065C9DB4: 05000014  b #0x65c9dc8
0x065C9DB8: 490140b9  ldr w9, [x10]
0x065C9DBC: 291d0011  add w9, w9, #7
0x065C9DC0: 08d1298b  add x8, x8, w9, sxtw #4
0x065C9DC4: 00e10491  add x0, x8, #0x138
0x065C9DC8: 080440a9  ldp x8, x1, [x0]
0x065C9DCC: e00315aa  mov x0, x21
0x065C9DD0: 00013fd6  blr x8
0x065C9DD4: 200400b4  cbz x0, #0x65c9e58
0x065C9DD8: 811a40f9  ldr x1, [x20, #0x30]
0x065C9DDC: 220340f9  ldr x2, [x25]
0x065C9DE0: d5d9b397  bl #0x52c0534
0x065C9DE4: 40fb0737  tbnz w0, #0, #0x65c9d4c
0x065C9DE8: 881240b9  ldr w8, [x20, #0x10]
0x065C9DEC: 1f110071  cmp w8, #4
0x065C9DF0: 20010054  b.eq #0x65c9e14
0x065C9DF4: 1f090071  cmp w8, #2
0x065C9DF8: a1faff54  b.ne #0x65c9d4c
0x065C9DFC: e00313aa  mov x0, x19
0x065C9E00: 66ffff97  bl #0x65c9b98
0x065C9E04: c00200b4  cbz x0, #0x65c9e5c
0x065C9E08: e10314aa  mov x1, x20
0x065C9E0C: 09c6ff97  bl #0x65bb630
0x065C9E10: cfffff17  b #0x65c9d4c
0x065C9E14: e00313aa  mov x0, x19
0x065C9E18: 60ffff97  bl #0x65c9b98
0x065C9E1C: 200200b4  cbz x0, #0x65c9e60
0x065C9E20: e10314aa  mov x1, x20
0x065C9E24: e9c7ff97  bl #0x65bbdc8
0x065C9E28: c9ffff17  b #0x65c9d4c
0x065C9E2C: c10240f9  ldr x1, [x22]
0x065C9E30: e0830091  add x0, sp, #0x20
0x065C9E34: df2ea997  bl #0x50159b0
0x065C9E38: f44f47a9  ldp x20, x19, [sp, #0x70]
0x065C9E3C: f65746a9  ldp x22, x21, [sp, #0x60]
0x065C9E40: f85f45a9  ldp x24, x23, [sp, #0x50]
0x065C9E44: fe6744a9  ldp x30, x25, [sp, #0x40]
0x065C9E48: ff030291  add sp, sp, #0x80
0x065C9E4C: c0035fd6  ret
0x065C9E50: 97db2e97  bl #0x3180cac
0x065C9E54: 96db2e97  bl #0x3180cac
0x065C9E58: 95db2e97  bl #0x3180cac
0x065C9E5C: 94db2e97  bl #0x3180cac
0x065C9E60: 93db2e97  bl #0x3180cac
0x065C9E64: 92db2e97  bl #0x3180cac
0x065C9E68: 0b000014  b #0x65c9e94
0x065C9E6C: 0a000014  b #0x65c9e94
0x065C9E70: 09000014  b #0x65c9e94
0x065C9E74: 08000014  b #0x65c9e94
0x065C9E78: 07000014  b #0x65c9e94
0x065C9E7C: 06000014  b #0x65c9e94
0x065C9E80: 05000014  b #0x65c9e94
0x065C9E84: 04000014  b #0x65c9e94
0x065C9E88: 03000014  b #0x65c9e94
0x065C9E8C: 02000014  b #0x65c9e94
0x065C9E90: 01000014  b #0x65c9e94
0x065C9E94: f30300aa  mov x19, x0
0x065C9E98: 3f040071  cmp w1, #1
0x065C9E9C: 61010054  b.ne #0x65c9ec8
0x065C9EA0: e00313aa  mov x0, x19
0x065C9EA4: 9b123094  bl #0x71ce910
0x065C9EA8: 140040f9  ldr x20, [x0]
0x065C9EAC: 9d123094  bl #0x71ce920
0x065C9EB0: c10240f9  ldr x1, [x22]
0x065C9EB4: e0830091  add x0, sp, #0x20
0x065C9EB8: be2ea997  bl #0x50159b0
0x065C9EBC: f4fbffb4  cbz x20, #0x65c9e38
0x065C9EC0: e00314aa  mov x0, x20
0x065C9EC4: 78db2e97  bl #0x3180ca4
0x065C9EC8: f4031faa  mov x20, xzr
0x065C9ECC: 02000014  b #0x65c9ed4
0x065C9ED0: f30300aa  mov x19, x0
0x065C9ED4: c10240f9  ldr x1, [x22]
0x065C9ED8: e0830091  add x0, sp, #0x20
0x065C9EDC: b52ea997  bl #0x50159b0
0x065C9EE0: 740000b5  cbnz x20, #0x65c9eec
0x065C9EE4: e00313aa  mov x0, x19
0x065C9EE8: 9c6e3297  bl #0x3265958
0x065C9EEC: e00314aa  mov x0, x20
0x065C9EF0: 6ddb2e97  bl #0x3180ca4
0x065C9EF4: 88fd2097  bl #0x2e09514

; RVA 0x65C9EF8 | public void BoosterActivated(RemoteBoosterData activeBooster) { }
; bytes=4 sha256=110f46b5b35c069160560c6ad6786f647dd44e8760a52a46fc22dbbcd7630b91 status=arm64_complete_bound indexed_start=True
0x065C9EF8: c0035fd6  ret

; RVA 0x65C9EFC | public void BoosterExpired(string uuid) { }
; bytes=4 sha256=110f46b5b35c069160560c6ad6786f647dd44e8760a52a46fc22dbbcd7630b91 status=arm64_complete_bound indexed_start=True
0x065C9EFC: c0035fd6  ret

; RVA 0x65C9F00 | private bool CanActivateOnMetaScreen(RemoteBoosterData remoteActiveBooster) { }
; bytes=32 sha256=f4dc76499dcf5d2720c2a81ac7a48d6c95e46f0d87d68bf6159af3c97a3527af status=arm64_complete_bound indexed_start=True
0x065C9F00: fe0f1ff8  str x30, [sp, #-0x10]!
0x065C9F04: c10000b4  cbz x1, #0x65c9f1c
0x065C9F08: 283840b9  ldr w8, [x1, #0x38]
0x065C9F0C: 1f110071  cmp w8, #4
0x065C9F10: e0179f1a  cset w0, eq
0x065C9F14: fe0741f8  ldr x30, [sp], #0x10
0x065C9F18: c0035fd6  ret
0x065C9F1C: 64db2e97  bl #0x3180cac

; RVA 0x65C9F20 | public void .ctor() { }
; bytes=8 sha256=ce6caf2810be16bdca084ab69c3f30c8d8ead044a89e811a0dce1351b0f81618 status=arm64_complete_bound indexed_start=True
0x065C9F20: e1031faa  mov x1, xzr
0x065C9F24: b641c417  b #0x56da5fc

