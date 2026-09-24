; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 33678 ContextualizedECS.Entity
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x5F14CA0 | public void .ctor() { }
; bytes=136 sha256=093fd7b165e3b87a570b8979abca7361761ccbe0a1624ec936297d122533408c status=arm64_complete_bound indexed_start=True
0x05F14CA0: fe0f1df8  str x30, [sp, #-0x30]!
0x05F14CA4: f65701a9  stp x22, x21, [sp, #0x10]
0x05F14CA8: f44f02a9  stp x20, x19, [sp, #0x20]
0x05F14CAC: 75f000d0  adrp x21, #0x7d22000
0x05F14CB0: 76bd00f0  adrp x22, #0x76c3000
0x05F14CB4: 74bd00f0  adrp x20, #0x76c3000
0x05F14CB8: a84a7139  ldrb w8, [x21, #0xc52]
0x05F14CBC: d62245f9  ldr x22, [x22, #0xa40]
0x05F14CC0: 942645f9  ldr x20, [x20, #0xa48]
0x05F14CC4: f30300aa  mov x19, x0
0x05F14CC8: 28010037  tbnz w8, #0, #0x5f14cec
0x05F14CCC: 60bd00f0  adrp x0, #0x76c3000
0x05F14CD0: 002445f9  ldr x0, [x0, #0xa48]
0x05F14CD4: 51af4997  bl #0x3180a18
0x05F14CD8: 60bd00f0  adrp x0, #0x76c3000
0x05F14CDC: 002045f9  ldr x0, [x0, #0xa40]
0x05F14CE0: 4eaf4997  bl #0x3180a18
0x05F14CE4: 28008052  movz w8, #0x1
0x05F14CE8: a84a3139  strb w8, [x21, #0xc52]
0x05F14CEC: c00240f9  ldr x0, [x22]
0x05F14CF0: ecaf4997  bl #0x3180ca0
0x05F14CF4: 810240f9  ldr x1, [x20]
0x05F14CF8: f40300aa  mov x20, x0
0x05F14CFC: aa34bf97  bl #0x4ee1fa4
0x05F14D00: e00313aa  mov x0, x19
0x05F14D04: 140c01f8  str x20, [x0, #0x10]!
0x05F14D08: e10314aa  mov x1, x20
0x05F14D0C: 2eaf4997  bl #0x31809c4
0x05F14D10: e00313aa  mov x0, x19
0x05F14D14: f44f42a9  ldp x20, x19, [sp, #0x20]
0x05F14D18: f65741a9  ldp x22, x21, [sp, #0x10]
0x05F14D1C: e1031faa  mov x1, xzr
0x05F14D20: fe0743f8  ldr x30, [sp], #0x30
0x05F14D24: 3616df17  b #0x56da5fc

; RVA 0x5F14D28 | public void .ctor(Entity otherEntity) { }
; bytes=476 sha256=0b4142b16ccbe26654e7257ba11f3b331eb913af14ac0df627c7df5757adb72c status=arm64_complete_bound indexed_start=True
0x05F14D28: ff8301d1  sub sp, sp, #0x60
0x05F14D2C: fe5f03a9  stp x30, x23, [sp, #0x30]
0x05F14D30: f65704a9  stp x22, x21, [sp, #0x40]
0x05F14D34: f44f05a9  stp x20, x19, [sp, #0x50]
0x05F14D38: 77f000d0  adrp x23, #0x7d22000
0x05F14D3C: 76bd00f0  adrp x22, #0x76c3000
0x05F14D40: 75bd00f0  adrp x21, #0x76c3000
0x05F14D44: e84e7139  ldrb w8, [x23, #0xc53]
0x05F14D48: d62245f9  ldr x22, [x22, #0xa40]
0x05F14D4C: b52645f9  ldr x21, [x21, #0xa48]
0x05F14D50: f30301aa  mov x19, x1
0x05F14D54: f40300aa  mov x20, x0
0x05F14D58: c8030037  tbnz w8, #0, #0x5f14dd0
0x05F14D5C: 60bd00f0  adrp x0, #0x76c3000
0x05F14D60: 002845f9  ldr x0, [x0, #0xa50]
0x05F14D64: 2daf4997  bl #0x3180a18
0x05F14D68: 60bd00f0  adrp x0, #0x76c3000
0x05F14D6C: 002445f9  ldr x0, [x0, #0xa48]
0x05F14D70: 2aaf4997  bl #0x3180a18
0x05F14D74: 20bb00b0  adrp x0, #0x7679000
0x05F14D78: 002c46f9  ldr x0, [x0, #0xc58]
0x05F14D7C: 27af4997  bl #0x3180a18
0x05F14D80: 60bd00f0  adrp x0, #0x76c3000
0x05F14D84: 002045f9  ldr x0, [x0, #0xa40]
0x05F14D88: 24af4997  bl #0x3180a18
0x05F14D8C: 60bd00f0  adrp x0, #0x76c3000
0x05F14D90: 002c45f9  ldr x0, [x0, #0xa58]
0x05F14D94: 21af4997  bl #0x3180a18
0x05F14D98: 60bd00f0  adrp x0, #0x76c3000
0x05F14D9C: 003045f9  ldr x0, [x0, #0xa60]
0x05F14DA0: 1eaf4997  bl #0x3180a18
0x05F14DA4: 60bd00f0  adrp x0, #0x76c3000
0x05F14DA8: 003445f9  ldr x0, [x0, #0xa68]
0x05F14DAC: 1baf4997  bl #0x3180a18
0x05F14DB0: 60bd00f0  adrp x0, #0x76c3000
0x05F14DB4: 003845f9  ldr x0, [x0, #0xa70]
0x05F14DB8: 18af4997  bl #0x3180a18
0x05F14DBC: 60bd00f0  adrp x0, #0x76c3000
0x05F14DC0: 003c45f9  ldr x0, [x0, #0xa78]
0x05F14DC4: 15af4997  bl #0x3180a18
0x05F14DC8: 28008052  movz w8, #0x1
0x05F14DCC: e84e3139  strb w8, [x23, #0xc53]
0x05F14DD0: c00240f9  ldr x0, [x22]
0x05F14DD4: 00e4006f  movi v0.2d, #0000000000000000
0x05F14DD8: ff1300f9  str xzr, [sp, #0x20]
0x05F14DDC: e00300ad  stp q0, q0, [sp]
0x05F14DE0: b0af4997  bl #0x3180ca0
0x05F14DE4: a10240f9  ldr x1, [x21]
0x05F14DE8: f60300aa  mov x22, x0
0x05F14DEC: 6e34bf97  bl #0x4ee1fa4
0x05F14DF0: f50314aa  mov x21, x20
0x05F14DF4: b60e01f8  str x22, [x21, #0x10]!
0x05F14DF8: e00315aa  mov x0, x21
0x05F14DFC: e10316aa  mov x1, x22
0x05F14E00: f1ae4997  bl #0x31809c4
0x05F14E04: e00314aa  mov x0, x20
0x05F14E08: e1031faa  mov x1, xzr
0x05F14E0C: fc15df97  bl #0x56da5fc
0x05F14E10: 330400b4  cbz x19, #0x5f14e94
0x05F14E14: 600a40f9  ldr x0, [x19, #0x10]
0x05F14E18: e00300b4  cbz x0, #0x5f14e94
0x05F14E1C: 68bd00f0  adrp x8, #0x76c3000
0x05F14E20: 082945f9  ldr x8, [x8, #0xa50]
0x05F14E24: 73bd00f0  adrp x19, #0x76c3000
0x05F14E28: 34bb00b0  adrp x20, #0x7679000
0x05F14E2C: 76bd00f0  adrp x22, #0x76c3000
0x05F14E30: 010140f9  ldr x1, [x8]
0x05F14E34: 733245f9  ldr x19, [x19, #0xa60]
0x05F14E38: 942e46f9  ldr x20, [x20, #0xc58]
0x05F14E3C: d62e45f9  ldr x22, [x22, #0xa58]
0x05F14E40: e8030091  mov x8, sp
0x05F14E44: da38bf97  bl #0x4ee31ac
0x05F14E48: 610240f9  ldr x1, [x19]
0x05F14E4C: e0030091  mov x0, sp
0x05F14E50: 602bc597  bl #0x505fbd0
0x05F14E54: e0000036  tbz w0, #0, #0x5f14e70
0x05F14E58: a00240f9  ldr x0, [x21]
0x05F14E5C: a00100b4  cbz x0, #0x5f14e90
0x05F14E60: e10b41a9  ldp x1, x2, [sp, #0x10]
0x05F14E64: 830240f9  ldr x3, [x20]
0x05F14E68: c037bf97  bl #0x4ee2d68
0x05F14E6C: f7ffff17  b #0x5f14e48
0x05F14E70: c10240f9  ldr x1, [x22]
0x05F14E74: e0030091  mov x0, sp
0x05F14E78: 9e2bc597  bl #0x505fcf0
0x05F14E7C: f44f45a9  ldp x20, x19, [sp, #0x50]
0x05F14E80: f65744a9  ldp x22, x21, [sp, #0x40]
0x05F14E84: fe5f43a9  ldp x30, x23, [sp, #0x30]
0x05F14E88: ff830191  add sp, sp, #0x60
0x05F14E8C: c0035fd6  ret
0x05F14E90: 87af4997  bl #0x3180cac
0x05F14E94: 86af4997  bl #0x3180cac
0x05F14E98: 02000014  b #0x5f14ea0
0x05F14E9C: 01000014  b #0x5f14ea0
0x05F14EA0: f30300aa  mov x19, x0
0x05F14EA4: 3f040071  cmp w1, #1
0x05F14EA8: 61010054  b.ne #0x5f14ed4
0x05F14EAC: e00313aa  mov x0, x19
0x05F14EB0: 98e64a94  bl #0x71ce910
0x05F14EB4: 140040f9  ldr x20, [x0]
0x05F14EB8: 9ae64a94  bl #0x71ce920
0x05F14EBC: c10240f9  ldr x1, [x22]
0x05F14EC0: e0030091  mov x0, sp
0x05F14EC4: 8b2bc597  bl #0x505fcf0
0x05F14EC8: b4fdffb4  cbz x20, #0x5f14e7c
0x05F14ECC: e00314aa  mov x0, x20
0x05F14ED0: 75af4997  bl #0x3180ca4
0x05F14ED4: f4031faa  mov x20, xzr
0x05F14ED8: 02000014  b #0x5f14ee0
0x05F14EDC: f30300aa  mov x19, x0
0x05F14EE0: c10240f9  ldr x1, [x22]
0x05F14EE4: e0030091  mov x0, sp
0x05F14EE8: 822bc597  bl #0x505fcf0
0x05F14EEC: 740000b5  cbnz x20, #0x5f14ef8
0x05F14EF0: e00313aa  mov x0, x19
0x05F14EF4: 99424d97  bl #0x3265958
0x05F14EF8: e00314aa  mov x0, x20
0x05F14EFC: 6aaf4997  bl #0x3180ca4
0x05F14F00: 85d13b97  bl #0x2e09514

; RVA 0x5F14F04 | public bool HasComponent(Type componentType) { }
; bytes=88 sha256=68ac6bda6b9288480fb6c42892655e928df62e3d5497e6cd3ff1a869e28ba3b3 status=arm64_complete_bound indexed_start=True
0x05F14F04: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x05F14F08: f44f01a9  stp x20, x19, [sp, #0x10]
0x05F14F0C: 75f000d0  adrp x21, #0x7d22000
0x05F14F10: a8527139  ldrb w8, [x21, #0xc54]
0x05F14F14: f30301aa  mov x19, x1
0x05F14F18: f40300aa  mov x20, x0
0x05F14F1C: c8000037  tbnz w8, #0, #0x5f14f34
0x05F14F20: 20bb00b0  adrp x0, #0x7679000
0x05F14F24: 002846f9  ldr x0, [x0, #0xc50]
0x05F14F28: bcae4997  bl #0x3180a18
0x05F14F2C: 28008052  movz w8, #0x1
0x05F14F30: a8523139  strb w8, [x21, #0xc54]
0x05F14F34: 800a40f9  ldr x0, [x20, #0x10]
0x05F14F38: 000100b4  cbz x0, #0x5f14f58
0x05F14F3C: 28bb00b0  adrp x8, #0x7679000
0x05F14F40: 082946f9  ldr x8, [x8, #0xc50]
0x05F14F44: e10313aa  mov x1, x19
0x05F14F48: f44f41a9  ldp x20, x19, [sp, #0x10]
0x05F14F4C: 020140f9  ldr x2, [x8]
0x05F14F50: fe57c2a8  ldp x30, x21, [sp], #0x20
0x05F14F54: 0738bf17  b #0x4ee2f70
0x05F14F58: 55af4997  bl #0x3180cac

; RVA 0x5F14F5C | public bool RemoveComponent(Type type) { }
; bytes=88 sha256=d0ad00b3a1f478655acd960cb85d4b9899e6df413aa9dd55b1ebabd4cc59e9e7 status=arm64_complete_bound indexed_start=True
0x05F14F5C: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x05F14F60: f44f01a9  stp x20, x19, [sp, #0x10]
0x05F14F64: 75f000d0  adrp x21, #0x7d22000
0x05F14F68: a8567139  ldrb w8, [x21, #0xc55]
0x05F14F6C: f30301aa  mov x19, x1
0x05F14F70: f40300aa  mov x20, x0
0x05F14F74: c8000037  tbnz w8, #0, #0x5f14f8c
0x05F14F78: 60bd00f0  adrp x0, #0x76c3000
0x05F14F7C: 004045f9  ldr x0, [x0, #0xa80]
0x05F14F80: a6ae4997  bl #0x3180a18
0x05F14F84: 28008052  movz w8, #0x1
0x05F14F88: a8563139  strb w8, [x21, #0xc55]
0x05F14F8C: 800a40f9  ldr x0, [x20, #0x10]
0x05F14F90: 000100b4  cbz x0, #0x5f14fb0
0x05F14F94: 68bd00f0  adrp x8, #0x76c3000
0x05F14F98: 084145f9  ldr x8, [x8, #0xa80]
0x05F14F9C: e10313aa  mov x1, x19
0x05F14FA0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x05F14FA4: 020140f9  ldr x2, [x8]
0x05F14FA8: fe57c2a8  ldp x30, x21, [sp], #0x20
0x05F14FAC: b33cbf17  b #0x4ee4278
0x05F14FB0: 3faf4997  bl #0x3180cac

; RVA 0x5F14FB4 | public void OverrideComponents(Entity otherEntity) { }
; bytes=436 sha256=a9b732173d8e779e0e2ccbac6d341c98395dab9a8aeeac297982a061323bda87 status=arm64_complete_bound indexed_start=True
0x05F14FB4: ff8301d1  sub sp, sp, #0x60
0x05F14FB8: fe1b00f9  str x30, [sp, #0x30]
0x05F14FBC: f65704a9  stp x22, x21, [sp, #0x40]
0x05F14FC0: f44f05a9  stp x20, x19, [sp, #0x50]
0x05F14FC4: 75f000d0  adrp x21, #0x7d22000
0x05F14FC8: a85a7139  ldrb w8, [x21, #0xc56]
0x05F14FCC: f40301aa  mov x20, x1
0x05F14FD0: f30300aa  mov x19, x0
0x05F14FD4: 68030037  tbnz w8, #0, #0x5f15040
0x05F14FD8: 60bd00f0  adrp x0, #0x76c3000
0x05F14FDC: 004445f9  ldr x0, [x0, #0xa88]
0x05F14FE0: 8eae4997  bl #0x3180a18
0x05F14FE4: 60bd00f0  adrp x0, #0x76c3000
0x05F14FE8: 002845f9  ldr x0, [x0, #0xa50]
0x05F14FEC: 8bae4997  bl #0x3180a18
0x05F14FF0: 20bb00b0  adrp x0, #0x7679000
0x05F14FF4: 002c46f9  ldr x0, [x0, #0xc58]
0x05F14FF8: 88ae4997  bl #0x3180a18
0x05F14FFC: 60bd00f0  adrp x0, #0x76c3000
0x05F15000: 002c45f9  ldr x0, [x0, #0xa58]
0x05F15004: 85ae4997  bl #0x3180a18
0x05F15008: 60bd00d0  adrp x0, #0x76c3000
0x05F1500C: 003045f9  ldr x0, [x0, #0xa60]
0x05F15010: 82ae4997  bl #0x3180a18
0x05F15014: 60bd00d0  adrp x0, #0x76c3000
0x05F15018: 003445f9  ldr x0, [x0, #0xa68]
0x05F1501C: 7fae4997  bl #0x3180a18
0x05F15020: 60bd00d0  adrp x0, #0x76c3000
0x05F15024: 003845f9  ldr x0, [x0, #0xa70]
0x05F15028: 7cae4997  bl #0x3180a18
0x05F1502C: 60bd00d0  adrp x0, #0x76c3000
0x05F15030: 003c45f9  ldr x0, [x0, #0xa78]
0x05F15034: 79ae4997  bl #0x3180a18
0x05F15038: 28008052  movz w8, #0x1
0x05F1503C: a85a3139  strb w8, [x21, #0xc56]
0x05F15040: 00e4006f  movi v0.2d, #0000000000000000
0x05F15044: ff1300f9  str xzr, [sp, #0x20]
0x05F15048: e00300ad  stp q0, q0, [sp]
0x05F1504C: 600a40f9  ldr x0, [x19, #0x10]
0x05F15050: c00400b4  cbz x0, #0x5f150e8
0x05F15054: 68bd00d0  adrp x8, #0x76c3000
0x05F15058: 084545f9  ldr x8, [x8, #0xa88]
0x05F1505C: 010140f9  ldr x1, [x8]
0x05F15060: a937bf97  bl #0x4ee2f04
0x05F15064: 340400b4  cbz x20, #0x5f150e8
0x05F15068: 800a40f9  ldr x0, [x20, #0x10]
0x05F1506C: e00300b4  cbz x0, #0x5f150e8
0x05F15070: 68bd00d0  adrp x8, #0x76c3000
0x05F15074: 082945f9  ldr x8, [x8, #0xa50]
0x05F15078: 75bd00d0  adrp x21, #0x76c3000
0x05F1507C: 36bb0090  adrp x22, #0x7679000
0x05F15080: 74bd00d0  adrp x20, #0x76c3000
0x05F15084: 010140f9  ldr x1, [x8]
0x05F15088: b53245f9  ldr x21, [x21, #0xa60]
0x05F1508C: d62e46f9  ldr x22, [x22, #0xc58]
0x05F15090: 942e45f9  ldr x20, [x20, #0xa58]
0x05F15094: e8030091  mov x8, sp
0x05F15098: 4538bf97  bl #0x4ee31ac
0x05F1509C: a10240f9  ldr x1, [x21]
0x05F150A0: e0030091  mov x0, sp
0x05F150A4: cb2ac597  bl #0x505fbd0
0x05F150A8: e0000036  tbz w0, #0, #0x5f150c4
0x05F150AC: 600a40f9  ldr x0, [x19, #0x10]
0x05F150B0: a00100b4  cbz x0, #0x5f150e4
0x05F150B4: e10b41a9  ldp x1, x2, [sp, #0x10]
0x05F150B8: c30240f9  ldr x3, [x22]
0x05F150BC: 2b37bf97  bl #0x4ee2d68
0x05F150C0: f7ffff17  b #0x5f1509c
0x05F150C4: 810240f9  ldr x1, [x20]
0x05F150C8: e0030091  mov x0, sp
0x05F150CC: 092bc597  bl #0x505fcf0
0x05F150D0: f44f45a9  ldp x20, x19, [sp, #0x50]
0x05F150D4: f65744a9  ldp x22, x21, [sp, #0x40]
0x05F150D8: fe1b40f9  ldr x30, [sp, #0x30]
0x05F150DC: ff830191  add sp, sp, #0x60
0x05F150E0: c0035fd6  ret
0x05F150E4: f2ae4997  bl #0x3180cac
0x05F150E8: f1ae4997  bl #0x3180cac
0x05F150EC: 02000014  b #0x5f150f4
0x05F150F0: 01000014  b #0x5f150f4
0x05F150F4: f30300aa  mov x19, x0
0x05F150F8: 3f040071  cmp w1, #1
0x05F150FC: a1010054  b.ne #0x5f15130
0x05F15100: e00313aa  mov x0, x19
0x05F15104: 03e64a94  bl #0x71ce910
0x05F15108: 140040f9  ldr x20, [x0]
0x05F1510C: 05e64a94  bl #0x71ce920
0x05F15110: 68bd00d0  adrp x8, #0x76c3000
0x05F15114: 082d45f9  ldr x8, [x8, #0xa58]
0x05F15118: e0030091  mov x0, sp
0x05F1511C: 010140f9  ldr x1, [x8]
0x05F15120: f42ac597  bl #0x505fcf0
0x05F15124: 74fdffb4  cbz x20, #0x5f150d0
0x05F15128: e00314aa  mov x0, x20
0x05F1512C: deae4997  bl #0x3180ca4
0x05F15130: f4031faa  mov x20, xzr
0x05F15134: 02000014  b #0x5f1513c
0x05F15138: f30300aa  mov x19, x0
0x05F1513C: 68bd00d0  adrp x8, #0x76c3000
0x05F15140: 082d45f9  ldr x8, [x8, #0xa58]
0x05F15144: 010140f9  ldr x1, [x8]
0x05F15148: e0030091  mov x0, sp
0x05F1514C: e92ac597  bl #0x505fcf0
0x05F15150: 740000b5  cbnz x20, #0x5f1515c
0x05F15154: e00313aa  mov x0, x19
0x05F15158: 00424d97  bl #0x3265958
0x05F1515C: e00314aa  mov x0, x20
0x05F15160: d1ae4997  bl #0x3180ca4
0x05F15164: ecd03b97  bl #0x2e09514

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1C618 | ContextualizedECS.Entity$$SetComponent<BoardTilePositionComponent>
; native signature: void ContextualizedECS_Entity__SetComponent_BoardTilePositionComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_BoardTilePositionComponent_o component, const MethodInfo_3C1C618* method);
; bytes=200 sha256=343c334346d2fd69fa02f2d02b400edc1931f153a692122b1be21e4f21c9281b status=arm64_complete_bound indexed_start=True
0x03C1C618: fe0f1df8  str x30, [sp, #-0x30]!
0x03C1C61C: f65701a9  stp x22, x21, [sp, #0x10]
0x03C1C620: f44f02a9  stp x20, x19, [sp, #0x20]
0x03C1C624: 481c40f9  ldr x8, [x2, #0x38]
0x03C1C628: f30302aa  mov x19, x2
0x03C1C62C: f40301aa  mov x20, x1
0x03C1C630: f50300aa  mov x21, x0
0x03C1C634: 880100b5  cbnz x8, #0x3c1c664
0x03C1C638: e0d201b0  adrp x0, #0x7679000
0x03C1C63C: 002c46f9  ldr x0, [x0, #0xc58]
0x03C1C640: f690d597  bl #0x3180a18
0x03C1C644: 80d101d0  adrp x0, #0x764e000
0x03C1C648: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1C64C: f390d597  bl #0x3180a18
0x03C1C650: 681e40f9  ldr x8, [x19, #0x38]
0x03C1C654: 880000b5  cbnz x8, #0x3c1c664
0x03C1C658: e00313aa  mov x0, x19
0x03C1C65C: 87e8d497  bl #0x3156878
0x03C1C660: 681e40f9  ldr x8, [x19, #0x38]
0x03C1C664: 89d101d0  adrp x9, #0x764e000
0x03C1C668: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1C66C: b50a40f9  ldr x21, [x21, #0x10]
0x03C1C670: 160140f9  ldr x22, [x8]
0x03C1C674: 200140f9  ldr x0, [x9]
0x03C1C678: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1C67C: 49000035  cbnz w9, #0x3c1c684
0x03C1C680: 4391d597  bl #0x3180b8c
0x03C1C684: e00316aa  mov x0, x22
0x03C1C688: e1031faa  mov x1, xzr
0x03C1C68C: ce226a94  bl #0x56a51c4
0x03C1C690: f40b00b9  str w20, [sp, #8]
0x03C1C694: 681e40f9  ldr x8, [x19, #0x38]
0x03C1C698: f30300aa  mov x19, x0
0x03C1C69C: e1230091  add x1, sp, #8
0x03C1C6A0: 080540f9  ldr x8, [x8, #8]
0x03C1C6A4: e00308aa  mov x0, x8
0x03C1C6A8: 3b91d597  bl #0x3180b94
0x03C1C6AC: 950100b4  cbz x21, #0x3c1c6dc
0x03C1C6B0: e8d201b0  adrp x8, #0x7679000
0x03C1C6B4: 082d46f9  ldr x8, [x8, #0xc58]
0x03C1C6B8: e20300aa  mov x2, x0
0x03C1C6BC: e00315aa  mov x0, x21
0x03C1C6C0: e10313aa  mov x1, x19
0x03C1C6C4: 030140f9  ldr x3, [x8]
0x03C1C6C8: a8194b94  bl #0x4ee2d68
0x03C1C6CC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03C1C6D0: f65741a9  ldp x22, x21, [sp, #0x10]
0x03C1C6D4: fe0743f8  ldr x30, [sp], #0x30
0x03C1C6D8: c0035fd6  ret
0x03C1C6DC: 7491d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1C6E0 | ContextualizedECS.Entity$$SetComponent<BornComponent>
; native signature: void ContextualizedECS_Entity__SetComponent_BornComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_BornComponent_o component, const MethodInfo_3C1C6E0* method);
; bytes=200 sha256=6a39a2651b0c1ed610541691e8c887494696ce447b95b12c463bdb2aa6879c71 status=arm64_complete_bound indexed_start=True
0x03C1C6E0: fe0f1df8  str x30, [sp, #-0x30]!
0x03C1C6E4: f65701a9  stp x22, x21, [sp, #0x10]
0x03C1C6E8: f44f02a9  stp x20, x19, [sp, #0x20]
0x03C1C6EC: 481c40f9  ldr x8, [x2, #0x38]
0x03C1C6F0: f30302aa  mov x19, x2
0x03C1C6F4: f40301aa  mov x20, x1
0x03C1C6F8: f50300aa  mov x21, x0
0x03C1C6FC: 880100b5  cbnz x8, #0x3c1c72c
0x03C1C700: e0d201b0  adrp x0, #0x7679000
0x03C1C704: 002c46f9  ldr x0, [x0, #0xc58]
0x03C1C708: c490d597  bl #0x3180a18
0x03C1C70C: 80d101d0  adrp x0, #0x764e000
0x03C1C710: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1C714: c190d597  bl #0x3180a18
0x03C1C718: 681e40f9  ldr x8, [x19, #0x38]
0x03C1C71C: 880000b5  cbnz x8, #0x3c1c72c
0x03C1C720: e00313aa  mov x0, x19
0x03C1C724: 55e8d497  bl #0x3156878
0x03C1C728: 681e40f9  ldr x8, [x19, #0x38]
0x03C1C72C: 89d101d0  adrp x9, #0x764e000
0x03C1C730: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1C734: b50a40f9  ldr x21, [x21, #0x10]
0x03C1C738: 160140f9  ldr x22, [x8]
0x03C1C73C: 200140f9  ldr x0, [x9]
0x03C1C740: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1C744: 49000035  cbnz w9, #0x3c1c74c
0x03C1C748: 1191d597  bl #0x3180b8c
0x03C1C74C: e00316aa  mov x0, x22
0x03C1C750: e1031faa  mov x1, xzr
0x03C1C754: 9c226a94  bl #0x56a51c4
0x03C1C758: f40700f9  str x20, [sp, #8]
0x03C1C75C: 681e40f9  ldr x8, [x19, #0x38]
0x03C1C760: f30300aa  mov x19, x0
0x03C1C764: e1230091  add x1, sp, #8
0x03C1C768: 080540f9  ldr x8, [x8, #8]
0x03C1C76C: e00308aa  mov x0, x8
0x03C1C770: 0991d597  bl #0x3180b94
0x03C1C774: 950100b4  cbz x21, #0x3c1c7a4
0x03C1C778: e8d201b0  adrp x8, #0x7679000
0x03C1C77C: 082d46f9  ldr x8, [x8, #0xc58]
0x03C1C780: e20300aa  mov x2, x0
0x03C1C784: e00315aa  mov x0, x21
0x03C1C788: e10313aa  mov x1, x19
0x03C1C78C: 030140f9  ldr x3, [x8]
0x03C1C790: 76194b94  bl #0x4ee2d68
0x03C1C794: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03C1C798: f65741a9  ldp x22, x21, [sp, #0x10]
0x03C1C79C: fe0743f8  ldr x30, [sp], #0x30
0x03C1C7A0: c0035fd6  ret
0x03C1C7A4: 4291d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1C7A8 | ContextualizedECS.Entity$$SetComponent<BoxComponent>
; native signature: void ContextualizedECS_Entity__SetComponent_BoxComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_BoxComponent_o component, const MethodInfo_3C1C7A8* method);
; bytes=220 sha256=d13a032e53bd083e4ff81c1a1ac6c48fc0fc6a2b052e93c020648ff66dfd68fa status=arm64_complete_bound indexed_start=True
0x03C1C7A8: ff4301d1  sub sp, sp, #0x50
0x03C1C7AC: fe1300f9  str x30, [sp, #0x20]
0x03C1C7B0: f65703a9  stp x22, x21, [sp, #0x30]
0x03C1C7B4: f44f04a9  stp x20, x19, [sp, #0x40]
0x03C1C7B8: 481c40f9  ldr x8, [x2, #0x38]
0x03C1C7BC: f30302aa  mov x19, x2
0x03C1C7C0: f40301aa  mov x20, x1
0x03C1C7C4: f50300aa  mov x21, x0
0x03C1C7C8: 880100b5  cbnz x8, #0x3c1c7f8
0x03C1C7CC: e0d201b0  adrp x0, #0x7679000
0x03C1C7D0: 002c46f9  ldr x0, [x0, #0xc58]
0x03C1C7D4: 9190d597  bl #0x3180a18
0x03C1C7D8: 80d101d0  adrp x0, #0x764e000
0x03C1C7DC: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1C7E0: 8e90d597  bl #0x3180a18
0x03C1C7E4: 681e40f9  ldr x8, [x19, #0x38]
0x03C1C7E8: 880000b5  cbnz x8, #0x3c1c7f8
0x03C1C7EC: e00313aa  mov x0, x19
0x03C1C7F0: 22e8d497  bl #0x3156878
0x03C1C7F4: 681e40f9  ldr x8, [x19, #0x38]
0x03C1C7F8: 89d101d0  adrp x9, #0x764e000
0x03C1C7FC: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1C800: b50a40f9  ldr x21, [x21, #0x10]
0x03C1C804: 160140f9  ldr x22, [x8]
0x03C1C808: 200140f9  ldr x0, [x9]
0x03C1C80C: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1C810: 49000035  cbnz w9, #0x3c1c818
0x03C1C814: de90d597  bl #0x3180b8c
0x03C1C818: e00316aa  mov x0, x22
0x03C1C81C: e1031faa  mov x1, xzr
0x03C1C820: 69226a94  bl #0x56a51c4
0x03C1C824: 881240b9  ldr w8, [x20, #0x10]
0x03C1C828: 8002c03d  ldr q0, [x20]
0x03C1C82C: e1030091  mov x1, sp
0x03C1C830: e81300b9  str w8, [sp, #0x10]
0x03C1C834: e003803d  str q0, [sp]
0x03C1C838: 681e40f9  ldr x8, [x19, #0x38]
0x03C1C83C: f30300aa  mov x19, x0
0x03C1C840: 080540f9  ldr x8, [x8, #8]
0x03C1C844: e00308aa  mov x0, x8
0x03C1C848: d390d597  bl #0x3180b94
0x03C1C84C: b50100b4  cbz x21, #0x3c1c880
0x03C1C850: e8d201b0  adrp x8, #0x7679000
0x03C1C854: 082d46f9  ldr x8, [x8, #0xc58]
0x03C1C858: e20300aa  mov x2, x0
0x03C1C85C: e00315aa  mov x0, x21
0x03C1C860: e10313aa  mov x1, x19
0x03C1C864: 030140f9  ldr x3, [x8]
0x03C1C868: 40194b94  bl #0x4ee2d68
0x03C1C86C: f44f44a9  ldp x20, x19, [sp, #0x40]
0x03C1C870: f65743a9  ldp x22, x21, [sp, #0x30]
0x03C1C874: fe1340f9  ldr x30, [sp, #0x20]
0x03C1C878: ff430191  add sp, sp, #0x50
0x03C1C87C: c0035fd6  ret
0x03C1C880: 0b91d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1C884 | ContextualizedECS.Entity$$SetComponent<ChargeableComponent>
; native signature: void ContextualizedECS_Entity__SetComponent_ChargeableComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_ChargeableComponent_o component, const MethodInfo_3C1C884* method);
; bytes=200 sha256=ddb0fcac2177096169c77d541c89e6db3b0773b5df4adeb89bcfb569bb158fa9 status=arm64_complete_bound indexed_start=True
0x03C1C884: fe0f1df8  str x30, [sp, #-0x30]!
0x03C1C888: f65701a9  stp x22, x21, [sp, #0x10]
0x03C1C88C: f44f02a9  stp x20, x19, [sp, #0x20]
0x03C1C890: 481c40f9  ldr x8, [x2, #0x38]
0x03C1C894: f30302aa  mov x19, x2
0x03C1C898: f40301aa  mov x20, x1
0x03C1C89C: f50300aa  mov x21, x0
0x03C1C8A0: 880100b5  cbnz x8, #0x3c1c8d0
0x03C1C8A4: e0d201b0  adrp x0, #0x7679000
0x03C1C8A8: 002c46f9  ldr x0, [x0, #0xc58]
0x03C1C8AC: 5b90d597  bl #0x3180a18
0x03C1C8B0: 80d101d0  adrp x0, #0x764e000
0x03C1C8B4: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1C8B8: 5890d597  bl #0x3180a18
0x03C1C8BC: 681e40f9  ldr x8, [x19, #0x38]
0x03C1C8C0: 880000b5  cbnz x8, #0x3c1c8d0
0x03C1C8C4: e00313aa  mov x0, x19
0x03C1C8C8: ece7d497  bl #0x3156878
0x03C1C8CC: 681e40f9  ldr x8, [x19, #0x38]
0x03C1C8D0: 89d101d0  adrp x9, #0x764e000
0x03C1C8D4: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1C8D8: b50a40f9  ldr x21, [x21, #0x10]
0x03C1C8DC: 160140f9  ldr x22, [x8]
0x03C1C8E0: 200140f9  ldr x0, [x9]
0x03C1C8E4: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1C8E8: 49000035  cbnz w9, #0x3c1c8f0
0x03C1C8EC: a890d597  bl #0x3180b8c
0x03C1C8F0: e00316aa  mov x0, x22
0x03C1C8F4: e1031faa  mov x1, xzr
0x03C1C8F8: 33226a94  bl #0x56a51c4
0x03C1C8FC: f40700f9  str x20, [sp, #8]
0x03C1C900: 681e40f9  ldr x8, [x19, #0x38]
0x03C1C904: f30300aa  mov x19, x0
0x03C1C908: e1230091  add x1, sp, #8
0x03C1C90C: 080540f9  ldr x8, [x8, #8]
0x03C1C910: e00308aa  mov x0, x8
0x03C1C914: a090d597  bl #0x3180b94
0x03C1C918: 950100b4  cbz x21, #0x3c1c948
0x03C1C91C: e8d201b0  adrp x8, #0x7679000
0x03C1C920: 082d46f9  ldr x8, [x8, #0xc58]
0x03C1C924: e20300aa  mov x2, x0
0x03C1C928: e00315aa  mov x0, x21
0x03C1C92C: e10313aa  mov x1, x19
0x03C1C930: 030140f9  ldr x3, [x8]
0x03C1C934: 0d194b94  bl #0x4ee2d68
0x03C1C938: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03C1C93C: f65741a9  ldp x22, x21, [sp, #0x10]
0x03C1C940: fe0743f8  ldr x30, [sp], #0x30
0x03C1C944: c0035fd6  ret
0x03C1C948: d990d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1C94C | ContextualizedECS.Entity$$SetComponent<CollectableComponent>
; native signature: void ContextualizedECS_Entity__SetComponent_CollectableComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_CollectableComponent_o component, const MethodInfo_3C1C94C* method);
; bytes=220 sha256=a9ad675dc97bb88b262e4d8f39d6edd03d7ee999bc85963eda1e1e90e82a1850 status=arm64_complete_bound indexed_start=True
0x03C1C94C: ff4301d1  sub sp, sp, #0x50
0x03C1C950: fe1300f9  str x30, [sp, #0x20]
0x03C1C954: f65703a9  stp x22, x21, [sp, #0x30]
0x03C1C958: f44f04a9  stp x20, x19, [sp, #0x40]
0x03C1C95C: 481c40f9  ldr x8, [x2, #0x38]
0x03C1C960: f30302aa  mov x19, x2
0x03C1C964: f40301aa  mov x20, x1
0x03C1C968: f50300aa  mov x21, x0
0x03C1C96C: 880100b5  cbnz x8, #0x3c1c99c
0x03C1C970: e0d201b0  adrp x0, #0x7679000
0x03C1C974: 002c46f9  ldr x0, [x0, #0xc58]
0x03C1C978: 2890d597  bl #0x3180a18
0x03C1C97C: 80d101d0  adrp x0, #0x764e000
0x03C1C980: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1C984: 2590d597  bl #0x3180a18
0x03C1C988: 681e40f9  ldr x8, [x19, #0x38]
0x03C1C98C: 880000b5  cbnz x8, #0x3c1c99c
0x03C1C990: e00313aa  mov x0, x19
0x03C1C994: b9e7d497  bl #0x3156878
0x03C1C998: 681e40f9  ldr x8, [x19, #0x38]
0x03C1C99C: 89d101d0  adrp x9, #0x764e000
0x03C1C9A0: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1C9A4: b50a40f9  ldr x21, [x21, #0x10]
0x03C1C9A8: 160140f9  ldr x22, [x8]
0x03C1C9AC: 200140f9  ldr x0, [x9]
0x03C1C9B0: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1C9B4: 49000035  cbnz w9, #0x3c1c9bc
0x03C1C9B8: 7590d597  bl #0x3180b8c
0x03C1C9BC: e00316aa  mov x0, x22
0x03C1C9C0: e1031faa  mov x1, xzr
0x03C1C9C4: 00226a94  bl #0x56a51c4
0x03C1C9C8: 880a40f9  ldr x8, [x20, #0x10]
0x03C1C9CC: 8002c03d  ldr q0, [x20]
0x03C1C9D0: e1030091  mov x1, sp
0x03C1C9D4: e80b00f9  str x8, [sp, #0x10]
0x03C1C9D8: e003803d  str q0, [sp]
0x03C1C9DC: 681e40f9  ldr x8, [x19, #0x38]
0x03C1C9E0: f30300aa  mov x19, x0
0x03C1C9E4: 080540f9  ldr x8, [x8, #8]
0x03C1C9E8: e00308aa  mov x0, x8
0x03C1C9EC: 6a90d597  bl #0x3180b94
0x03C1C9F0: b50100b4  cbz x21, #0x3c1ca24
0x03C1C9F4: e8d201b0  adrp x8, #0x7679000
0x03C1C9F8: 082d46f9  ldr x8, [x8, #0xc58]
0x03C1C9FC: e20300aa  mov x2, x0
0x03C1CA00: e00315aa  mov x0, x21
0x03C1CA04: e10313aa  mov x1, x19
0x03C1CA08: 030140f9  ldr x3, [x8]
0x03C1CA0C: d7184b94  bl #0x4ee2d68
0x03C1CA10: f44f44a9  ldp x20, x19, [sp, #0x40]
0x03C1CA14: f65743a9  ldp x22, x21, [sp, #0x30]
0x03C1CA18: fe1340f9  ldr x30, [sp, #0x20]
0x03C1CA1C: ff430191  add sp, sp, #0x50
0x03C1CA20: c0035fd6  ret
0x03C1CA24: a290d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1CA28 | ContextualizedECS.Entity$$SetComponent<ConfirmedItemsCombinationComponent>
; native signature: void ContextualizedECS_Entity__SetComponent_ConfirmedItemsCombinationComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_ConfirmedItemsCombinationComponent_o component, const MethodInfo_3C1CA28* method);
; bytes=200 sha256=feee6d7b5db095cc771ebbcbc239f908a8c315abbd30d65eea76e63dc39621ab status=arm64_complete_bound indexed_start=True
0x03C1CA28: fe0f1df8  str x30, [sp, #-0x30]!
0x03C1CA2C: f65701a9  stp x22, x21, [sp, #0x10]
0x03C1CA30: f44f02a9  stp x20, x19, [sp, #0x20]
0x03C1CA34: 481c40f9  ldr x8, [x2, #0x38]
0x03C1CA38: f30302aa  mov x19, x2
0x03C1CA3C: f40301aa  mov x20, x1
0x03C1CA40: f50300aa  mov x21, x0
0x03C1CA44: 880100b5  cbnz x8, #0x3c1ca74
0x03C1CA48: e0d201b0  adrp x0, #0x7679000
0x03C1CA4C: 002c46f9  ldr x0, [x0, #0xc58]
0x03C1CA50: f28fd597  bl #0x3180a18
0x03C1CA54: 80d101d0  adrp x0, #0x764e000
0x03C1CA58: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1CA5C: ef8fd597  bl #0x3180a18
0x03C1CA60: 681e40f9  ldr x8, [x19, #0x38]
0x03C1CA64: 880000b5  cbnz x8, #0x3c1ca74
0x03C1CA68: e00313aa  mov x0, x19
0x03C1CA6C: 83e7d497  bl #0x3156878
0x03C1CA70: 681e40f9  ldr x8, [x19, #0x38]
0x03C1CA74: 89d101d0  adrp x9, #0x764e000
0x03C1CA78: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1CA7C: b50a40f9  ldr x21, [x21, #0x10]
0x03C1CA80: 160140f9  ldr x22, [x8]
0x03C1CA84: 200140f9  ldr x0, [x9]
0x03C1CA88: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1CA8C: 49000035  cbnz w9, #0x3c1ca94
0x03C1CA90: 3f90d597  bl #0x3180b8c
0x03C1CA94: e00316aa  mov x0, x22
0x03C1CA98: e1031faa  mov x1, xzr
0x03C1CA9C: ca216a94  bl #0x56a51c4
0x03C1CAA0: f40b00b9  str w20, [sp, #8]
0x03C1CAA4: 681e40f9  ldr x8, [x19, #0x38]
0x03C1CAA8: f30300aa  mov x19, x0
0x03C1CAAC: e1230091  add x1, sp, #8
0x03C1CAB0: 080540f9  ldr x8, [x8, #8]
0x03C1CAB4: e00308aa  mov x0, x8
0x03C1CAB8: 3790d597  bl #0x3180b94
0x03C1CABC: 950100b4  cbz x21, #0x3c1caec
0x03C1CAC0: e8d201b0  adrp x8, #0x7679000
0x03C1CAC4: 082d46f9  ldr x8, [x8, #0xc58]
0x03C1CAC8: e20300aa  mov x2, x0
0x03C1CACC: e00315aa  mov x0, x21
0x03C1CAD0: e10313aa  mov x1, x19
0x03C1CAD4: 030140f9  ldr x3, [x8]
0x03C1CAD8: a4184b94  bl #0x4ee2d68
0x03C1CADC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03C1CAE0: f65741a9  ldp x22, x21, [sp, #0x10]
0x03C1CAE4: fe0743f8  ldr x30, [sp], #0x30
0x03C1CAE8: c0035fd6  ret
0x03C1CAEC: 7090d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1CAF0 | ContextualizedECS.Entity$$SetComponent<CooldownBlockComponent>
; native signature: void ContextualizedECS_Entity__SetComponent_CooldownBlockComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_CooldownBlockComponent_o component, const MethodInfo_3C1CAF0* method);
; bytes=200 sha256=001bbb257480a7974d1e70cbafc432fde2d090b8753381d1e1e661d52db800c7 status=arm64_complete_bound indexed_start=True
0x03C1CAF0: fe0f1df8  str x30, [sp, #-0x30]!
0x03C1CAF4: f65701a9  stp x22, x21, [sp, #0x10]
0x03C1CAF8: f44f02a9  stp x20, x19, [sp, #0x20]
0x03C1CAFC: 481c40f9  ldr x8, [x2, #0x38]
0x03C1CB00: f30302aa  mov x19, x2
0x03C1CB04: f40301aa  mov x20, x1
0x03C1CB08: f50300aa  mov x21, x0
0x03C1CB0C: 880100b5  cbnz x8, #0x3c1cb3c
0x03C1CB10: e0d201b0  adrp x0, #0x7679000
0x03C1CB14: 002c46f9  ldr x0, [x0, #0xc58]
0x03C1CB18: c08fd597  bl #0x3180a18
0x03C1CB1C: 80d101d0  adrp x0, #0x764e000
0x03C1CB20: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1CB24: bd8fd597  bl #0x3180a18
0x03C1CB28: 681e40f9  ldr x8, [x19, #0x38]
0x03C1CB2C: 880000b5  cbnz x8, #0x3c1cb3c
0x03C1CB30: e00313aa  mov x0, x19
0x03C1CB34: 51e7d497  bl #0x3156878
0x03C1CB38: 681e40f9  ldr x8, [x19, #0x38]
0x03C1CB3C: 89d101d0  adrp x9, #0x764e000
0x03C1CB40: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1CB44: b50a40f9  ldr x21, [x21, #0x10]
0x03C1CB48: 160140f9  ldr x22, [x8]
0x03C1CB4C: 200140f9  ldr x0, [x9]
0x03C1CB50: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1CB54: 49000035  cbnz w9, #0x3c1cb5c
0x03C1CB58: 0d90d597  bl #0x3180b8c
0x03C1CB5C: e00316aa  mov x0, x22
0x03C1CB60: e1031faa  mov x1, xzr
0x03C1CB64: 98216a94  bl #0x56a51c4
0x03C1CB68: f4230039  strb w20, [sp, #8]
0x03C1CB6C: 681e40f9  ldr x8, [x19, #0x38]
0x03C1CB70: f30300aa  mov x19, x0
0x03C1CB74: e1230091  add x1, sp, #8
0x03C1CB78: 080540f9  ldr x8, [x8, #8]
0x03C1CB7C: e00308aa  mov x0, x8
0x03C1CB80: 0590d597  bl #0x3180b94
0x03C1CB84: 950100b4  cbz x21, #0x3c1cbb4
0x03C1CB88: e8d201b0  adrp x8, #0x7679000
0x03C1CB8C: 082d46f9  ldr x8, [x8, #0xc58]
0x03C1CB90: e20300aa  mov x2, x0
0x03C1CB94: e00315aa  mov x0, x21
0x03C1CB98: e10313aa  mov x1, x19
0x03C1CB9C: 030140f9  ldr x3, [x8]
0x03C1CBA0: 72184b94  bl #0x4ee2d68
0x03C1CBA4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03C1CBA8: f65741a9  ldp x22, x21, [sp, #0x10]
0x03C1CBAC: fe0743f8  ldr x30, [sp], #0x30
0x03C1CBB0: c0035fd6  ret
0x03C1CBB4: 3e90d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1CBB8 | ContextualizedECS.Entity$$SetComponent<DeadComponent>
; native signature: void ContextualizedECS_Entity__SetComponent_DeadComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_DeadComponent_o component, const MethodInfo_3C1CBB8* method);
; bytes=200 sha256=faee95b522e725fd586711b16f8024b8a780262d775892cf45d2bf527088a4be status=arm64_complete_bound indexed_start=True
0x03C1CBB8: fe0f1df8  str x30, [sp, #-0x30]!
0x03C1CBBC: f65701a9  stp x22, x21, [sp, #0x10]
0x03C1CBC0: f44f02a9  stp x20, x19, [sp, #0x20]
0x03C1CBC4: 481c40f9  ldr x8, [x2, #0x38]
0x03C1CBC8: f30302aa  mov x19, x2
0x03C1CBCC: f40301aa  mov x20, x1
0x03C1CBD0: f50300aa  mov x21, x0
0x03C1CBD4: 880100b5  cbnz x8, #0x3c1cc04
0x03C1CBD8: e0d201b0  adrp x0, #0x7679000
0x03C1CBDC: 002c46f9  ldr x0, [x0, #0xc58]
0x03C1CBE0: 8e8fd597  bl #0x3180a18
0x03C1CBE4: 80d101d0  adrp x0, #0x764e000
0x03C1CBE8: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1CBEC: 8b8fd597  bl #0x3180a18
0x03C1CBF0: 681e40f9  ldr x8, [x19, #0x38]
0x03C1CBF4: 880000b5  cbnz x8, #0x3c1cc04
0x03C1CBF8: e00313aa  mov x0, x19
0x03C1CBFC: 1fe7d497  bl #0x3156878
0x03C1CC00: 681e40f9  ldr x8, [x19, #0x38]
0x03C1CC04: 89d101d0  adrp x9, #0x764e000
0x03C1CC08: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1CC0C: b50a40f9  ldr x21, [x21, #0x10]
0x03C1CC10: 160140f9  ldr x22, [x8]
0x03C1CC14: 200140f9  ldr x0, [x9]
0x03C1CC18: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1CC1C: 49000035  cbnz w9, #0x3c1cc24
0x03C1CC20: db8fd597  bl #0x3180b8c
0x03C1CC24: e00316aa  mov x0, x22
0x03C1CC28: e1031faa  mov x1, xzr
0x03C1CC2C: 66216a94  bl #0x56a51c4
0x03C1CC30: f4230039  strb w20, [sp, #8]
0x03C1CC34: 681e40f9  ldr x8, [x19, #0x38]
0x03C1CC38: f30300aa  mov x19, x0
0x03C1CC3C: e1230091  add x1, sp, #8
0x03C1CC40: 080540f9  ldr x8, [x8, #8]
0x03C1CC44: e00308aa  mov x0, x8
0x03C1CC48: d38fd597  bl #0x3180b94
0x03C1CC4C: 950100b4  cbz x21, #0x3c1cc7c
0x03C1CC50: e8d201b0  adrp x8, #0x7679000
0x03C1CC54: 082d46f9  ldr x8, [x8, #0xc58]
0x03C1CC58: e20300aa  mov x2, x0
0x03C1CC5C: e00315aa  mov x0, x21
0x03C1CC60: e10313aa  mov x1, x19
0x03C1CC64: 030140f9  ldr x3, [x8]
0x03C1CC68: 40184b94  bl #0x4ee2d68
0x03C1CC6C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03C1CC70: f65741a9  ldp x22, x21, [sp, #0x10]
0x03C1CC74: fe0743f8  ldr x30, [sp], #0x30
0x03C1CC78: c0035fd6  ret
0x03C1CC7C: 0c90d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1CC80 | ContextualizedECS.Entity$$SetComponent<DynamicItemConfigComponent>
; native signature: void ContextualizedECS_Entity__SetComponent_DynamicItemConfigComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_DynamicItemConfigComponent_o component, const MethodInfo_3C1CC80* method);
; bytes=220 sha256=55d58fdaf5bc8c1e8ced90c9940e348332da04ea78d0239902b8465a93ef8e60 status=arm64_complete_bound indexed_start=True
0x03C1CC80: ff4301d1  sub sp, sp, #0x50
0x03C1CC84: fe1300f9  str x30, [sp, #0x20]
0x03C1CC88: f65703a9  stp x22, x21, [sp, #0x30]
0x03C1CC8C: f44f04a9  stp x20, x19, [sp, #0x40]
0x03C1CC90: 481c40f9  ldr x8, [x2, #0x38]
0x03C1CC94: f30302aa  mov x19, x2
0x03C1CC98: f40301aa  mov x20, x1
0x03C1CC9C: f50300aa  mov x21, x0
0x03C1CCA0: 880100b5  cbnz x8, #0x3c1ccd0
0x03C1CCA4: e0d201b0  adrp x0, #0x7679000
0x03C1CCA8: 002c46f9  ldr x0, [x0, #0xc58]
0x03C1CCAC: 5b8fd597  bl #0x3180a18
0x03C1CCB0: 80d101d0  adrp x0, #0x764e000
0x03C1CCB4: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1CCB8: 588fd597  bl #0x3180a18
0x03C1CCBC: 681e40f9  ldr x8, [x19, #0x38]
0x03C1CCC0: 880000b5  cbnz x8, #0x3c1ccd0
0x03C1CCC4: e00313aa  mov x0, x19
0x03C1CCC8: ece6d497  bl #0x3156878
0x03C1CCCC: 681e40f9  ldr x8, [x19, #0x38]
0x03C1CCD0: 89d101d0  adrp x9, #0x764e000
0x03C1CCD4: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1CCD8: b50a40f9  ldr x21, [x21, #0x10]
0x03C1CCDC: 160140f9  ldr x22, [x8]
0x03C1CCE0: 200140f9  ldr x0, [x9]
0x03C1CCE4: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1CCE8: 49000035  cbnz w9, #0x3c1ccf0
0x03C1CCEC: a88fd597  bl #0x3180b8c
0x03C1CCF0: e00316aa  mov x0, x22
0x03C1CCF4: e1031faa  mov x1, xzr
0x03C1CCF8: 33216a94  bl #0x56a51c4
0x03C1CCFC: 880a40f9  ldr x8, [x20, #0x10]
0x03C1CD00: 8002c03d  ldr q0, [x20]
0x03C1CD04: e1030091  mov x1, sp
0x03C1CD08: e80b00f9  str x8, [sp, #0x10]
0x03C1CD0C: e003803d  str q0, [sp]
0x03C1CD10: 681e40f9  ldr x8, [x19, #0x38]
0x03C1CD14: f30300aa  mov x19, x0
0x03C1CD18: 080540f9  ldr x8, [x8, #8]
0x03C1CD1C: e00308aa  mov x0, x8
0x03C1CD20: 9d8fd597  bl #0x3180b94
0x03C1CD24: b50100b4  cbz x21, #0x3c1cd58
0x03C1CD28: e8d201b0  adrp x8, #0x7679000
0x03C1CD2C: 082d46f9  ldr x8, [x8, #0xc58]
0x03C1CD30: e20300aa  mov x2, x0
0x03C1CD34: e00315aa  mov x0, x21
0x03C1CD38: e10313aa  mov x1, x19
0x03C1CD3C: 030140f9  ldr x3, [x8]
0x03C1CD40: 0a184b94  bl #0x4ee2d68
0x03C1CD44: f44f44a9  ldp x20, x19, [sp, #0x40]
0x03C1CD48: f65743a9  ldp x22, x21, [sp, #0x30]
0x03C1CD4C: fe1340f9  ldr x30, [sp, #0x20]
0x03C1CD50: ff430191  add sp, sp, #0x50
0x03C1CD54: c0035fd6  ret
0x03C1CD58: d58fd597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1CD5C | ContextualizedECS.Entity$$SetComponent<ExpendableComponent>
; native signature: void ContextualizedECS_Entity__SetComponent_ExpendableComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_ExpendableComponent_o component, const MethodInfo_3C1CD5C* method);
; bytes=220 sha256=4ca1c4b8f3304665712cba1d0d768178e709d3018ddf9c5207ed68c045565863 status=arm64_complete_bound indexed_start=True
0x03C1CD5C: ff8301d1  sub sp, sp, #0x60
0x03C1CD60: fe1b00f9  str x30, [sp, #0x30]
0x03C1CD64: f65704a9  stp x22, x21, [sp, #0x40]
0x03C1CD68: f44f05a9  stp x20, x19, [sp, #0x50]
0x03C1CD6C: 481c40f9  ldr x8, [x2, #0x38]
0x03C1CD70: f30302aa  mov x19, x2
0x03C1CD74: f40301aa  mov x20, x1
0x03C1CD78: f50300aa  mov x21, x0
0x03C1CD7C: 880100b5  cbnz x8, #0x3c1cdac
0x03C1CD80: e0d201b0  adrp x0, #0x7679000
0x03C1CD84: 002c46f9  ldr x0, [x0, #0xc58]
0x03C1CD88: 248fd597  bl #0x3180a18
0x03C1CD8C: 80d101d0  adrp x0, #0x764e000
0x03C1CD90: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1CD94: 218fd597  bl #0x3180a18
0x03C1CD98: 681e40f9  ldr x8, [x19, #0x38]
0x03C1CD9C: 880000b5  cbnz x8, #0x3c1cdac
0x03C1CDA0: e00313aa  mov x0, x19
0x03C1CDA4: b5e6d497  bl #0x3156878
0x03C1CDA8: 681e40f9  ldr x8, [x19, #0x38]
0x03C1CDAC: 89d101d0  adrp x9, #0x764e000
0x03C1CDB0: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1CDB4: b50a40f9  ldr x21, [x21, #0x10]
0x03C1CDB8: 160140f9  ldr x22, [x8]
0x03C1CDBC: 200140f9  ldr x0, [x9]
0x03C1CDC0: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1CDC4: 49000035  cbnz w9, #0x3c1cdcc
0x03C1CDC8: 718fd597  bl #0x3180b8c
0x03C1CDCC: e00316aa  mov x0, x22
0x03C1CDD0: e1031faa  mov x1, xzr
0x03C1CDD4: fc206a94  bl #0x56a51c4
0x03C1CDD8: 818240ad  ldp q1, q0, [x20, #0x10]
0x03C1CDDC: 8202c03d  ldr q2, [x20]
0x03C1CDE0: e1030091  mov x1, sp
0x03C1CDE4: e18300ad  stp q1, q0, [sp, #0x10]
0x03C1CDE8: e203803d  str q2, [sp]
0x03C1CDEC: 681e40f9  ldr x8, [x19, #0x38]
0x03C1CDF0: f30300aa  mov x19, x0
0x03C1CDF4: 080540f9  ldr x8, [x8, #8]
0x03C1CDF8: e00308aa  mov x0, x8
0x03C1CDFC: 668fd597  bl #0x3180b94
0x03C1CE00: b50100b4  cbz x21, #0x3c1ce34
0x03C1CE04: e8d201b0  adrp x8, #0x7679000
0x03C1CE08: 082d46f9  ldr x8, [x8, #0xc58]
0x03C1CE0C: e20300aa  mov x2, x0
0x03C1CE10: e00315aa  mov x0, x21
0x03C1CE14: e10313aa  mov x1, x19
0x03C1CE18: 030140f9  ldr x3, [x8]
0x03C1CE1C: d3174b94  bl #0x4ee2d68
0x03C1CE20: f44f45a9  ldp x20, x19, [sp, #0x50]
0x03C1CE24: f65744a9  ldp x22, x21, [sp, #0x40]
0x03C1CE28: fe1b40f9  ldr x30, [sp, #0x30]
0x03C1CE2C: ff830191  add sp, sp, #0x60
0x03C1CE30: c0035fd6  ret
0x03C1CE34: 9e8fd597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1CE38 | ContextualizedECS.Entity$$SetComponent<FeedingCombinationComponent>
; native signature: void ContextualizedECS_Entity__SetComponent_FeedingCombinationComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_FeedingCombinationComponent_o component, const MethodInfo_3C1CE38* method);
; bytes=200 sha256=b7208e8d0726cb8728eb8fe439f5211f5cf4bd8ea09ca018b1d3867bc6ec659e status=arm64_complete_bound indexed_start=True
0x03C1CE38: fe0f1df8  str x30, [sp, #-0x30]!
0x03C1CE3C: f65701a9  stp x22, x21, [sp, #0x10]
0x03C1CE40: f44f02a9  stp x20, x19, [sp, #0x20]
0x03C1CE44: 481c40f9  ldr x8, [x2, #0x38]
0x03C1CE48: f30302aa  mov x19, x2
0x03C1CE4C: f40301aa  mov x20, x1
0x03C1CE50: f50300aa  mov x21, x0
0x03C1CE54: 880100b5  cbnz x8, #0x3c1ce84
0x03C1CE58: e0d201b0  adrp x0, #0x7679000
0x03C1CE5C: 002c46f9  ldr x0, [x0, #0xc58]
0x03C1CE60: ee8ed597  bl #0x3180a18
0x03C1CE64: 80d101d0  adrp x0, #0x764e000
0x03C1CE68: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1CE6C: eb8ed597  bl #0x3180a18
0x03C1CE70: 681e40f9  ldr x8, [x19, #0x38]
0x03C1CE74: 880000b5  cbnz x8, #0x3c1ce84
0x03C1CE78: e00313aa  mov x0, x19
0x03C1CE7C: 7fe6d497  bl #0x3156878
0x03C1CE80: 681e40f9  ldr x8, [x19, #0x38]
0x03C1CE84: 89d101d0  adrp x9, #0x764e000
0x03C1CE88: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1CE8C: b50a40f9  ldr x21, [x21, #0x10]
0x03C1CE90: 160140f9  ldr x22, [x8]
0x03C1CE94: 200140f9  ldr x0, [x9]
0x03C1CE98: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1CE9C: 49000035  cbnz w9, #0x3c1cea4
0x03C1CEA0: 3b8fd597  bl #0x3180b8c
0x03C1CEA4: e00316aa  mov x0, x22
0x03C1CEA8: e1031faa  mov x1, xzr
0x03C1CEAC: c6206a94  bl #0x56a51c4
0x03C1CEB0: f40700f9  str x20, [sp, #8]
0x03C1CEB4: 681e40f9  ldr x8, [x19, #0x38]
0x03C1CEB8: f30300aa  mov x19, x0
0x03C1CEBC: e1230091  add x1, sp, #8
0x03C1CEC0: 080540f9  ldr x8, [x8, #8]
0x03C1CEC4: e00308aa  mov x0, x8
0x03C1CEC8: 338fd597  bl #0x3180b94
0x03C1CECC: 950100b4  cbz x21, #0x3c1cefc
0x03C1CED0: e8d201b0  adrp x8, #0x7679000
0x03C1CED4: 082d46f9  ldr x8, [x8, #0xc58]
0x03C1CED8: e20300aa  mov x2, x0
0x03C1CEDC: e00315aa  mov x0, x21
0x03C1CEE0: e10313aa  mov x1, x19
0x03C1CEE4: 030140f9  ldr x3, [x8]
0x03C1CEE8: a0174b94  bl #0x4ee2d68
0x03C1CEEC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03C1CEF0: f65741a9  ldp x22, x21, [sp, #0x10]
0x03C1CEF4: fe0743f8  ldr x30, [sp], #0x30
0x03C1CEF8: c0035fd6  ret
0x03C1CEFC: 6c8fd597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1CF00 | ContextualizedECS.Entity$$SetComponent<FixedPositionComponent>
; native signature: void ContextualizedECS_Entity__SetComponent_FixedPositionComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_FixedPositionComponent_o component, const MethodInfo_3C1CF00* method);
; bytes=200 sha256=135248412609467a50ead5cd450ad7a07cb5d1ff417c83d986d1711c9ba62a8d status=arm64_complete_bound indexed_start=True
0x03C1CF00: fe0f1df8  str x30, [sp, #-0x30]!
0x03C1CF04: f65701a9  stp x22, x21, [sp, #0x10]
0x03C1CF08: f44f02a9  stp x20, x19, [sp, #0x20]
0x03C1CF0C: 481c40f9  ldr x8, [x2, #0x38]
0x03C1CF10: f30302aa  mov x19, x2
0x03C1CF14: f40301aa  mov x20, x1
0x03C1CF18: f50300aa  mov x21, x0
0x03C1CF1C: 880100b5  cbnz x8, #0x3c1cf4c
0x03C1CF20: e0d201b0  adrp x0, #0x7679000
0x03C1CF24: 002c46f9  ldr x0, [x0, #0xc58]
0x03C1CF28: bc8ed597  bl #0x3180a18
0x03C1CF2C: 80d101d0  adrp x0, #0x764e000
0x03C1CF30: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1CF34: b98ed597  bl #0x3180a18
0x03C1CF38: 681e40f9  ldr x8, [x19, #0x38]
0x03C1CF3C: 880000b5  cbnz x8, #0x3c1cf4c
0x03C1CF40: e00313aa  mov x0, x19
0x03C1CF44: 4de6d497  bl #0x3156878
0x03C1CF48: 681e40f9  ldr x8, [x19, #0x38]
0x03C1CF4C: 89d101d0  adrp x9, #0x764e000
0x03C1CF50: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1CF54: b50a40f9  ldr x21, [x21, #0x10]
0x03C1CF58: 160140f9  ldr x22, [x8]
0x03C1CF5C: 200140f9  ldr x0, [x9]
0x03C1CF60: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1CF64: 49000035  cbnz w9, #0x3c1cf6c
0x03C1CF68: 098fd597  bl #0x3180b8c
0x03C1CF6C: e00316aa  mov x0, x22
0x03C1CF70: e1031faa  mov x1, xzr
0x03C1CF74: 94206a94  bl #0x56a51c4
0x03C1CF78: f4230039  strb w20, [sp, #8]
0x03C1CF7C: 681e40f9  ldr x8, [x19, #0x38]
0x03C1CF80: f30300aa  mov x19, x0
0x03C1CF84: e1230091  add x1, sp, #8
0x03C1CF88: 080540f9  ldr x8, [x8, #8]
0x03C1CF8C: e00308aa  mov x0, x8
0x03C1CF90: 018fd597  bl #0x3180b94
0x03C1CF94: 950100b4  cbz x21, #0x3c1cfc4
0x03C1CF98: e8d201b0  adrp x8, #0x7679000
0x03C1CF9C: 082d46f9  ldr x8, [x8, #0xc58]
0x03C1CFA0: e20300aa  mov x2, x0
0x03C1CFA4: e00315aa  mov x0, x21
0x03C1CFA8: e10313aa  mov x1, x19
0x03C1CFAC: 030140f9  ldr x3, [x8]
0x03C1CFB0: 6e174b94  bl #0x4ee2d68
0x03C1CFB4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03C1CFB8: f65741a9  ldp x22, x21, [sp, #0x10]
0x03C1CFBC: fe0743f8  ldr x30, [sp], #0x30
0x03C1CFC0: c0035fd6  ret
0x03C1CFC4: 3a8fd597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1CFC8 | ContextualizedECS.Entity$$SetComponent<IdComponent>
; native signature: void ContextualizedECS_Entity__SetComponent_IdComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_IdComponent_o component, const MethodInfo_3C1CFC8* method);
; bytes=220 sha256=908f08a892c4fe0ef3a4f97ee94742f990912a67db6bcabee7e2b7856484238c status=arm64_complete_bound indexed_start=True
0x03C1CFC8: ff8301d1  sub sp, sp, #0x60
0x03C1CFCC: fe1b00f9  str x30, [sp, #0x30]
0x03C1CFD0: f65704a9  stp x22, x21, [sp, #0x40]
0x03C1CFD4: f44f05a9  stp x20, x19, [sp, #0x50]
0x03C1CFD8: 481c40f9  ldr x8, [x2, #0x38]
0x03C1CFDC: f30302aa  mov x19, x2
0x03C1CFE0: f40301aa  mov x20, x1
0x03C1CFE4: f50300aa  mov x21, x0
0x03C1CFE8: 880100b5  cbnz x8, #0x3c1d018
0x03C1CFEC: e0d201b0  adrp x0, #0x7679000
0x03C1CFF0: 002c46f9  ldr x0, [x0, #0xc58]
0x03C1CFF4: 898ed597  bl #0x3180a18
0x03C1CFF8: 80d101d0  adrp x0, #0x764e000
0x03C1CFFC: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1D000: 868ed597  bl #0x3180a18
0x03C1D004: 681e40f9  ldr x8, [x19, #0x38]
0x03C1D008: 880000b5  cbnz x8, #0x3c1d018
0x03C1D00C: e00313aa  mov x0, x19
0x03C1D010: 1ae6d497  bl #0x3156878
0x03C1D014: 681e40f9  ldr x8, [x19, #0x38]
0x03C1D018: 89d101b0  adrp x9, #0x764e000
0x03C1D01C: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1D020: b50a40f9  ldr x21, [x21, #0x10]
0x03C1D024: 160140f9  ldr x22, [x8]
0x03C1D028: 200140f9  ldr x0, [x9]
0x03C1D02C: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1D030: 49000035  cbnz w9, #0x3c1d038
0x03C1D034: d68ed597  bl #0x3180b8c
0x03C1D038: e00316aa  mov x0, x22
0x03C1D03C: e1031faa  mov x1, xzr
0x03C1D040: 61206a94  bl #0x56a51c4
0x03C1D044: 818240ad  ldp q1, q0, [x20, #0x10]
0x03C1D048: 8202c03d  ldr q2, [x20]
0x03C1D04C: e1030091  mov x1, sp
0x03C1D050: e18300ad  stp q1, q0, [sp, #0x10]
0x03C1D054: e203803d  str q2, [sp]
0x03C1D058: 681e40f9  ldr x8, [x19, #0x38]
0x03C1D05C: f30300aa  mov x19, x0
0x03C1D060: 080540f9  ldr x8, [x8, #8]
0x03C1D064: e00308aa  mov x0, x8
0x03C1D068: cb8ed597  bl #0x3180b94
0x03C1D06C: b50100b4  cbz x21, #0x3c1d0a0
0x03C1D070: e8d20190  adrp x8, #0x7679000
0x03C1D074: 082d46f9  ldr x8, [x8, #0xc58]
0x03C1D078: e20300aa  mov x2, x0
0x03C1D07C: e00315aa  mov x0, x21
0x03C1D080: e10313aa  mov x1, x19
0x03C1D084: 030140f9  ldr x3, [x8]
0x03C1D088: 38174b94  bl #0x4ee2d68
0x03C1D08C: f44f45a9  ldp x20, x19, [sp, #0x50]
0x03C1D090: f65744a9  ldp x22, x21, [sp, #0x40]
0x03C1D094: fe1b40f9  ldr x30, [sp, #0x30]
0x03C1D098: ff830191  add sp, sp, #0x60
0x03C1D09C: c0035fd6  ret
0x03C1D0A0: 038fd597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1D0A4 | ContextualizedECS.Entity$$SetComponent<ImmediateToolComponent>
; native signature: void ContextualizedECS_Entity__SetComponent_ImmediateToolComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_ImmediateToolComponent_o component, const MethodInfo_3C1D0A4* method);
; bytes=220 sha256=a0c259dc507a109a49f3eb1e081b7b814e1941b8bc069e1ee2c10266997027c2 status=arm64_complete_bound indexed_start=True
0x03C1D0A4: ff4301d1  sub sp, sp, #0x50
0x03C1D0A8: fe1300f9  str x30, [sp, #0x20]
0x03C1D0AC: f65703a9  stp x22, x21, [sp, #0x30]
0x03C1D0B0: f44f04a9  stp x20, x19, [sp, #0x40]
0x03C1D0B4: 481c40f9  ldr x8, [x2, #0x38]
0x03C1D0B8: f30302aa  mov x19, x2
0x03C1D0BC: f40301aa  mov x20, x1
0x03C1D0C0: f50300aa  mov x21, x0
0x03C1D0C4: 880100b5  cbnz x8, #0x3c1d0f4
0x03C1D0C8: e0d20190  adrp x0, #0x7679000
0x03C1D0CC: 002c46f9  ldr x0, [x0, #0xc58]
0x03C1D0D0: 528ed597  bl #0x3180a18
0x03C1D0D4: 80d101b0  adrp x0, #0x764e000
0x03C1D0D8: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1D0DC: 4f8ed597  bl #0x3180a18
0x03C1D0E0: 681e40f9  ldr x8, [x19, #0x38]
0x03C1D0E4: 880000b5  cbnz x8, #0x3c1d0f4
0x03C1D0E8: e00313aa  mov x0, x19
0x03C1D0EC: e3e5d497  bl #0x3156878
0x03C1D0F0: 681e40f9  ldr x8, [x19, #0x38]
0x03C1D0F4: 89d101b0  adrp x9, #0x764e000
0x03C1D0F8: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1D0FC: b50a40f9  ldr x21, [x21, #0x10]
0x03C1D100: 160140f9  ldr x22, [x8]
0x03C1D104: 200140f9  ldr x0, [x9]
0x03C1D108: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1D10C: 49000035  cbnz w9, #0x3c1d114
0x03C1D110: 9f8ed597  bl #0x3180b8c
0x03C1D114: e00316aa  mov x0, x22
0x03C1D118: e1031faa  mov x1, xzr
0x03C1D11C: 2a206a94  bl #0x56a51c4
0x03C1D120: 880a40f9  ldr x8, [x20, #0x10]
0x03C1D124: 8002c03d  ldr q0, [x20]
0x03C1D128: e1030091  mov x1, sp
0x03C1D12C: e80b00f9  str x8, [sp, #0x10]
0x03C1D130: e003803d  str q0, [sp]
0x03C1D134: 681e40f9  ldr x8, [x19, #0x38]
0x03C1D138: f30300aa  mov x19, x0
0x03C1D13C: 080540f9  ldr x8, [x8, #8]
0x03C1D140: e00308aa  mov x0, x8
0x03C1D144: 948ed597  bl #0x3180b94
0x03C1D148: b50100b4  cbz x21, #0x3c1d17c
0x03C1D14C: e8d20190  adrp x8, #0x7679000
0x03C1D150: 082d46f9  ldr x8, [x8, #0xc58]
0x03C1D154: e20300aa  mov x2, x0
0x03C1D158: e00315aa  mov x0, x21
0x03C1D15C: e10313aa  mov x1, x19
0x03C1D160: 030140f9  ldr x3, [x8]
0x03C1D164: 01174b94  bl #0x4ee2d68
0x03C1D168: f44f44a9  ldp x20, x19, [sp, #0x40]
0x03C1D16C: f65743a9  ldp x22, x21, [sp, #0x30]
0x03C1D170: fe1340f9  ldr x30, [sp, #0x20]
0x03C1D174: ff430191  add sp, sp, #0x50
0x03C1D178: c0035fd6  ret
0x03C1D17C: cc8ed597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1D180 | ContextualizedECS.Entity$$SetComponent<InteractionComponent>
; native signature: void ContextualizedECS_Entity__SetComponent_InteractionComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_InteractionComponent_o component, const MethodInfo_3C1D180* method);
; bytes=220 sha256=552d2e8523ac1cbb64c06290011180df5fd8d1771c8ac37b2163e1bd498b2270 status=arm64_complete_bound indexed_start=True
0x03C1D180: ff8301d1  sub sp, sp, #0x60
0x03C1D184: fe1b00f9  str x30, [sp, #0x30]
0x03C1D188: f65704a9  stp x22, x21, [sp, #0x40]
0x03C1D18C: f44f05a9  stp x20, x19, [sp, #0x50]
0x03C1D190: 481c40f9  ldr x8, [x2, #0x38]
0x03C1D194: f30302aa  mov x19, x2
0x03C1D198: f40301aa  mov x20, x1
0x03C1D19C: f50300aa  mov x21, x0
0x03C1D1A0: 880100b5  cbnz x8, #0x3c1d1d0
0x03C1D1A4: e0d20190  adrp x0, #0x7679000
0x03C1D1A8: 002c46f9  ldr x0, [x0, #0xc58]
0x03C1D1AC: 1b8ed597  bl #0x3180a18
0x03C1D1B0: 80d101b0  adrp x0, #0x764e000
0x03C1D1B4: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1D1B8: 188ed597  bl #0x3180a18
0x03C1D1BC: 681e40f9  ldr x8, [x19, #0x38]
0x03C1D1C0: 880000b5  cbnz x8, #0x3c1d1d0
0x03C1D1C4: e00313aa  mov x0, x19
0x03C1D1C8: ace5d497  bl #0x3156878
0x03C1D1CC: 681e40f9  ldr x8, [x19, #0x38]
0x03C1D1D0: 89d101b0  adrp x9, #0x764e000
0x03C1D1D4: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1D1D8: b50a40f9  ldr x21, [x21, #0x10]
0x03C1D1DC: 160140f9  ldr x22, [x8]
0x03C1D1E0: 200140f9  ldr x0, [x9]
0x03C1D1E4: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1D1E8: 49000035  cbnz w9, #0x3c1d1f0
0x03C1D1EC: 688ed597  bl #0x3180b8c
0x03C1D1F0: e00316aa  mov x0, x22
0x03C1D1F4: e1031faa  mov x1, xzr
0x03C1D1F8: f31f6a94  bl #0x56a51c4
0x03C1D1FC: 881240f9  ldr x8, [x20, #0x20]
0x03C1D200: 810240ad  ldp q1, q0, [x20]
0x03C1D204: e1030091  mov x1, sp
0x03C1D208: e81300f9  str x8, [sp, #0x20]
0x03C1D20C: e10300ad  stp q1, q0, [sp]
0x03C1D210: 681e40f9  ldr x8, [x19, #0x38]
0x03C1D214: f30300aa  mov x19, x0
0x03C1D218: 080540f9  ldr x8, [x8, #8]
0x03C1D21C: e00308aa  mov x0, x8
0x03C1D220: 5d8ed597  bl #0x3180b94
0x03C1D224: b50100b4  cbz x21, #0x3c1d258
0x03C1D228: e8d20190  adrp x8, #0x7679000
0x03C1D22C: 082d46f9  ldr x8, [x8, #0xc58]
0x03C1D230: e20300aa  mov x2, x0
0x03C1D234: e00315aa  mov x0, x21
0x03C1D238: e10313aa  mov x1, x19
0x03C1D23C: 030140f9  ldr x3, [x8]
0x03C1D240: ca164b94  bl #0x4ee2d68
0x03C1D244: f44f45a9  ldp x20, x19, [sp, #0x50]
0x03C1D248: f65744a9  ldp x22, x21, [sp, #0x40]
0x03C1D24C: fe1b40f9  ldr x30, [sp, #0x30]
0x03C1D250: ff830191  add sp, sp, #0x60
0x03C1D254: c0035fd6  ret
0x03C1D258: 958ed597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1D25C | ContextualizedECS.Entity$$SetComponent<ItemConsumedComponent>
; native signature: void ContextualizedECS_Entity__SetComponent_ItemConsumedComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_ItemConsumedComponent_o component, const MethodInfo_3C1D25C* method);
; bytes=212 sha256=035d8414d916370074c60c9f2d4d551a087a2bfc3a2462fef7ab37a319412126 status=arm64_complete_bound indexed_start=True
0x03C1D25C: ff0301d1  sub sp, sp, #0x40
0x03C1D260: fe5f01a9  stp x30, x23, [sp, #0x10]
0x03C1D264: f65702a9  stp x22, x21, [sp, #0x20]
0x03C1D268: f44f03a9  stp x20, x19, [sp, #0x30]
0x03C1D26C: 681c40f9  ldr x8, [x3, #0x38]
0x03C1D270: f30303aa  mov x19, x3
0x03C1D274: f40302aa  mov x20, x2
0x03C1D278: f50301aa  mov x21, x1
0x03C1D27C: f60300aa  mov x22, x0
0x03C1D280: 880100b5  cbnz x8, #0x3c1d2b0
0x03C1D284: e0d20190  adrp x0, #0x7679000
0x03C1D288: 002c46f9  ldr x0, [x0, #0xc58]
0x03C1D28C: e38dd597  bl #0x3180a18
0x03C1D290: 80d101b0  adrp x0, #0x764e000
0x03C1D294: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1D298: e08dd597  bl #0x3180a18
0x03C1D29C: 681e40f9  ldr x8, [x19, #0x38]
0x03C1D2A0: 880000b5  cbnz x8, #0x3c1d2b0
0x03C1D2A4: e00313aa  mov x0, x19
0x03C1D2A8: 74e5d497  bl #0x3156878
0x03C1D2AC: 681e40f9  ldr x8, [x19, #0x38]
0x03C1D2B0: 89d101b0  adrp x9, #0x764e000
0x03C1D2B4: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1D2B8: d60a40f9  ldr x22, [x22, #0x10]
0x03C1D2BC: 170140f9  ldr x23, [x8]
0x03C1D2C0: 200140f9  ldr x0, [x9]
0x03C1D2C4: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1D2C8: 49000035  cbnz w9, #0x3c1d2d0
0x03C1D2CC: 308ed597  bl #0x3180b8c
0x03C1D2D0: e00317aa  mov x0, x23
0x03C1D2D4: e1031faa  mov x1, xzr
0x03C1D2D8: bb1f6a94  bl #0x56a51c4
0x03C1D2DC: f55300a9  stp x21, x20, [sp]
0x03C1D2E0: 681e40f9  ldr x8, [x19, #0x38]
0x03C1D2E4: f30300aa  mov x19, x0
0x03C1D2E8: e1030091  mov x1, sp
0x03C1D2EC: 080540f9  ldr x8, [x8, #8]
0x03C1D2F0: e00308aa  mov x0, x8
0x03C1D2F4: 288ed597  bl #0x3180b94
0x03C1D2F8: b60100b4  cbz x22, #0x3c1d32c
0x03C1D2FC: e8d20190  adrp x8, #0x7679000
0x03C1D300: 082d46f9  ldr x8, [x8, #0xc58]
0x03C1D304: e20300aa  mov x2, x0
0x03C1D308: e00316aa  mov x0, x22
0x03C1D30C: e10313aa  mov x1, x19
0x03C1D310: 030140f9  ldr x3, [x8]
0x03C1D314: 95164b94  bl #0x4ee2d68
0x03C1D318: f44f43a9  ldp x20, x19, [sp, #0x30]
0x03C1D31C: f65742a9  ldp x22, x21, [sp, #0x20]
0x03C1D320: fe5f41a9  ldp x30, x23, [sp, #0x10]
0x03C1D324: ff030191  add sp, sp, #0x40
0x03C1D328: c0035fd6  ret
0x03C1D32C: 608ed597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1D330 | ContextualizedECS.Entity$$SetComponent<ItemMergedComponent>
; native signature: void ContextualizedECS_Entity__SetComponent_ItemMergedComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_ItemMergedComponent_o component, const MethodInfo_3C1D330* method);
; bytes=200 sha256=58f01c0350d2cc8c1d65ad5c1f49c9d52b017d9162df7a6d0f53ba25ca8cdfe5 status=arm64_complete_bound indexed_start=True
0x03C1D330: fe0f1df8  str x30, [sp, #-0x30]!
0x03C1D334: f65701a9  stp x22, x21, [sp, #0x10]
0x03C1D338: f44f02a9  stp x20, x19, [sp, #0x20]
0x03C1D33C: 481c40f9  ldr x8, [x2, #0x38]
0x03C1D340: f30302aa  mov x19, x2
0x03C1D344: f40301aa  mov x20, x1
0x03C1D348: f50300aa  mov x21, x0
0x03C1D34C: 880100b5  cbnz x8, #0x3c1d37c
0x03C1D350: e0d20190  adrp x0, #0x7679000
0x03C1D354: 002c46f9  ldr x0, [x0, #0xc58]
0x03C1D358: b08dd597  bl #0x3180a18
0x03C1D35C: 80d101b0  adrp x0, #0x764e000
0x03C1D360: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1D364: ad8dd597  bl #0x3180a18
0x03C1D368: 681e40f9  ldr x8, [x19, #0x38]
0x03C1D36C: 880000b5  cbnz x8, #0x3c1d37c
0x03C1D370: e00313aa  mov x0, x19
0x03C1D374: 41e5d497  bl #0x3156878
0x03C1D378: 681e40f9  ldr x8, [x19, #0x38]
0x03C1D37C: 89d101b0  adrp x9, #0x764e000
0x03C1D380: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1D384: b50a40f9  ldr x21, [x21, #0x10]
0x03C1D388: 160140f9  ldr x22, [x8]
0x03C1D38C: 200140f9  ldr x0, [x9]
0x03C1D390: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1D394: 49000035  cbnz w9, #0x3c1d39c
0x03C1D398: fd8dd597  bl #0x3180b8c
0x03C1D39C: e00316aa  mov x0, x22
0x03C1D3A0: e1031faa  mov x1, xzr
0x03C1D3A4: 881f6a94  bl #0x56a51c4
0x03C1D3A8: f4230039  strb w20, [sp, #8]
0x03C1D3AC: 681e40f9  ldr x8, [x19, #0x38]
0x03C1D3B0: f30300aa  mov x19, x0
0x03C1D3B4: e1230091  add x1, sp, #8
0x03C1D3B8: 080540f9  ldr x8, [x8, #8]
0x03C1D3BC: e00308aa  mov x0, x8
0x03C1D3C0: f58dd597  bl #0x3180b94
0x03C1D3C4: 950100b4  cbz x21, #0x3c1d3f4
0x03C1D3C8: e8d20190  adrp x8, #0x7679000
0x03C1D3CC: 082d46f9  ldr x8, [x8, #0xc58]
0x03C1D3D0: e20300aa  mov x2, x0
0x03C1D3D4: e00315aa  mov x0, x21
0x03C1D3D8: e10313aa  mov x1, x19
0x03C1D3DC: 030140f9  ldr x3, [x8]
0x03C1D3E0: 62164b94  bl #0x4ee2d68
0x03C1D3E4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03C1D3E8: f65741a9  ldp x22, x21, [sp, #0x10]
0x03C1D3EC: fe0743f8  ldr x30, [sp], #0x30
0x03C1D3F0: c0035fd6  ret
0x03C1D3F4: 2e8ed597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1D3F8 | ContextualizedECS.Entity$$SetComponent<ItemMovedComponent>
; native signature: void ContextualizedECS_Entity__SetComponent_ItemMovedComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_ItemMovedComponent_o component, const MethodInfo_3C1D3F8* method);
; bytes=200 sha256=2ed0bad190edcecce0b3b666c6c3756e789fd4b54e53a5c28223710754584e4d status=arm64_complete_bound indexed_start=True
0x03C1D3F8: fe0f1df8  str x30, [sp, #-0x30]!
0x03C1D3FC: f65701a9  stp x22, x21, [sp, #0x10]
0x03C1D400: f44f02a9  stp x20, x19, [sp, #0x20]
0x03C1D404: 481c40f9  ldr x8, [x2, #0x38]
0x03C1D408: f30302aa  mov x19, x2
0x03C1D40C: f40301aa  mov x20, x1
0x03C1D410: f50300aa  mov x21, x0
0x03C1D414: 880100b5  cbnz x8, #0x3c1d444
0x03C1D418: e0d20190  adrp x0, #0x7679000
0x03C1D41C: 002c46f9  ldr x0, [x0, #0xc58]
0x03C1D420: 7e8dd597  bl #0x3180a18
0x03C1D424: 80d101b0  adrp x0, #0x764e000
0x03C1D428: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1D42C: 7b8dd597  bl #0x3180a18
0x03C1D430: 681e40f9  ldr x8, [x19, #0x38]
0x03C1D434: 880000b5  cbnz x8, #0x3c1d444
0x03C1D438: e00313aa  mov x0, x19
0x03C1D43C: 0fe5d497  bl #0x3156878
0x03C1D440: 681e40f9  ldr x8, [x19, #0x38]
0x03C1D444: 89d101b0  adrp x9, #0x764e000
0x03C1D448: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1D44C: b50a40f9  ldr x21, [x21, #0x10]
0x03C1D450: 160140f9  ldr x22, [x8]
0x03C1D454: 200140f9  ldr x0, [x9]
0x03C1D458: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1D45C: 49000035  cbnz w9, #0x3c1d464
0x03C1D460: cb8dd597  bl #0x3180b8c
0x03C1D464: e00316aa  mov x0, x22
0x03C1D468: e1031faa  mov x1, xzr
0x03C1D46C: 561f6a94  bl #0x56a51c4
0x03C1D470: f40700f9  str x20, [sp, #8]
0x03C1D474: 681e40f9  ldr x8, [x19, #0x38]
0x03C1D478: f30300aa  mov x19, x0
0x03C1D47C: e1230091  add x1, sp, #8
0x03C1D480: 080540f9  ldr x8, [x8, #8]
0x03C1D484: e00308aa  mov x0, x8
0x03C1D488: c38dd597  bl #0x3180b94
0x03C1D48C: 950100b4  cbz x21, #0x3c1d4bc
0x03C1D490: e8d20190  adrp x8, #0x7679000
0x03C1D494: 082d46f9  ldr x8, [x8, #0xc58]
0x03C1D498: e20300aa  mov x2, x0
0x03C1D49C: e00315aa  mov x0, x21
0x03C1D4A0: e10313aa  mov x1, x19
0x03C1D4A4: 030140f9  ldr x3, [x8]
0x03C1D4A8: 30164b94  bl #0x4ee2d68
0x03C1D4AC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03C1D4B0: f65741a9  ldp x22, x21, [sp, #0x10]
0x03C1D4B4: fe0743f8  ldr x30, [sp], #0x30
0x03C1D4B8: c0035fd6  ret
0x03C1D4BC: fc8dd597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1D4C0 | ContextualizedECS.Entity$$SetComponent<ItemUnboxedComponent>
; native signature: void ContextualizedECS_Entity__SetComponent_ItemUnboxedComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_ItemUnboxedComponent_o component, const MethodInfo_3C1D4C0* method);
; bytes=200 sha256=395b7c1e4d08ff3982f0f04d3833a7d18fe55650d591e7dfafb0972e37978c78 status=arm64_complete_bound indexed_start=True
0x03C1D4C0: fe0f1df8  str x30, [sp, #-0x30]!
0x03C1D4C4: f65701a9  stp x22, x21, [sp, #0x10]
0x03C1D4C8: f44f02a9  stp x20, x19, [sp, #0x20]
0x03C1D4CC: 481c40f9  ldr x8, [x2, #0x38]
0x03C1D4D0: f30302aa  mov x19, x2
0x03C1D4D4: f40301aa  mov x20, x1
0x03C1D4D8: f50300aa  mov x21, x0
0x03C1D4DC: 880100b5  cbnz x8, #0x3c1d50c
0x03C1D4E0: e0d20190  adrp x0, #0x7679000
0x03C1D4E4: 002c46f9  ldr x0, [x0, #0xc58]
0x03C1D4E8: 4c8dd597  bl #0x3180a18
0x03C1D4EC: 80d101b0  adrp x0, #0x764e000
0x03C1D4F0: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1D4F4: 498dd597  bl #0x3180a18
0x03C1D4F8: 681e40f9  ldr x8, [x19, #0x38]
0x03C1D4FC: 880000b5  cbnz x8, #0x3c1d50c
0x03C1D500: e00313aa  mov x0, x19
0x03C1D504: dde4d497  bl #0x3156878
0x03C1D508: 681e40f9  ldr x8, [x19, #0x38]
0x03C1D50C: 89d101b0  adrp x9, #0x764e000
0x03C1D510: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1D514: b50a40f9  ldr x21, [x21, #0x10]
0x03C1D518: 160140f9  ldr x22, [x8]
0x03C1D51C: 200140f9  ldr x0, [x9]
0x03C1D520: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1D524: 49000035  cbnz w9, #0x3c1d52c
0x03C1D528: 998dd597  bl #0x3180b8c
0x03C1D52C: e00316aa  mov x0, x22
0x03C1D530: e1031faa  mov x1, xzr
0x03C1D534: 241f6a94  bl #0x56a51c4
0x03C1D538: f4230039  strb w20, [sp, #8]
0x03C1D53C: 681e40f9  ldr x8, [x19, #0x38]
0x03C1D540: f30300aa  mov x19, x0
0x03C1D544: e1230091  add x1, sp, #8
0x03C1D548: 080540f9  ldr x8, [x8, #8]
0x03C1D54C: e00308aa  mov x0, x8
0x03C1D550: 918dd597  bl #0x3180b94
0x03C1D554: 950100b4  cbz x21, #0x3c1d584
0x03C1D558: e8d20190  adrp x8, #0x7679000
0x03C1D55C: 082d46f9  ldr x8, [x8, #0xc58]
0x03C1D560: e20300aa  mov x2, x0
0x03C1D564: e00315aa  mov x0, x21
0x03C1D568: e10313aa  mov x1, x19
0x03C1D56C: 030140f9  ldr x3, [x8]
0x03C1D570: fe154b94  bl #0x4ee2d68
0x03C1D574: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03C1D578: f65741a9  ldp x22, x21, [sp, #0x10]
0x03C1D57C: fe0743f8  ldr x30, [sp], #0x30
0x03C1D580: c0035fd6  ret
0x03C1D584: ca8dd597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1D588 | ContextualizedECS.Entity$$SetComponent<LockComponent>
; native signature: void ContextualizedECS_Entity__SetComponent_LockComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_LockComponent_o component, const MethodInfo_3C1D588* method);
; bytes=200 sha256=db002c750719fddef326b188fd216ddedc0626cc9fc17f81fae516853ae632ed status=arm64_complete_bound indexed_start=True
0x03C1D588: fe0f1df8  str x30, [sp, #-0x30]!
0x03C1D58C: f65701a9  stp x22, x21, [sp, #0x10]
0x03C1D590: f44f02a9  stp x20, x19, [sp, #0x20]
0x03C1D594: 481c40f9  ldr x8, [x2, #0x38]
0x03C1D598: f30302aa  mov x19, x2
0x03C1D59C: f40301aa  mov x20, x1
0x03C1D5A0: f50300aa  mov x21, x0
0x03C1D5A4: 880100b5  cbnz x8, #0x3c1d5d4
0x03C1D5A8: e0d20190  adrp x0, #0x7679000
0x03C1D5AC: 002c46f9  ldr x0, [x0, #0xc58]
0x03C1D5B0: 1a8dd597  bl #0x3180a18
0x03C1D5B4: 80d101b0  adrp x0, #0x764e000
0x03C1D5B8: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1D5BC: 178dd597  bl #0x3180a18
0x03C1D5C0: 681e40f9  ldr x8, [x19, #0x38]
0x03C1D5C4: 880000b5  cbnz x8, #0x3c1d5d4
0x03C1D5C8: e00313aa  mov x0, x19
0x03C1D5CC: abe4d497  bl #0x3156878
0x03C1D5D0: 681e40f9  ldr x8, [x19, #0x38]
0x03C1D5D4: 89d101b0  adrp x9, #0x764e000
0x03C1D5D8: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1D5DC: b50a40f9  ldr x21, [x21, #0x10]
0x03C1D5E0: 160140f9  ldr x22, [x8]
0x03C1D5E4: 200140f9  ldr x0, [x9]
0x03C1D5E8: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1D5EC: 49000035  cbnz w9, #0x3c1d5f4
0x03C1D5F0: 678dd597  bl #0x3180b8c
0x03C1D5F4: e00316aa  mov x0, x22
0x03C1D5F8: e1031faa  mov x1, xzr
0x03C1D5FC: f21e6a94  bl #0x56a51c4
0x03C1D600: f4230039  strb w20, [sp, #8]
0x03C1D604: 681e40f9  ldr x8, [x19, #0x38]
0x03C1D608: f30300aa  mov x19, x0
0x03C1D60C: e1230091  add x1, sp, #8
0x03C1D610: 080540f9  ldr x8, [x8, #8]
0x03C1D614: e00308aa  mov x0, x8
0x03C1D618: 5f8dd597  bl #0x3180b94
0x03C1D61C: 950100b4  cbz x21, #0x3c1d64c
0x03C1D620: e8d20190  adrp x8, #0x7679000
0x03C1D624: 082d46f9  ldr x8, [x8, #0xc58]
0x03C1D628: e20300aa  mov x2, x0
0x03C1D62C: e00315aa  mov x0, x21
0x03C1D630: e10313aa  mov x1, x19
0x03C1D634: 030140f9  ldr x3, [x8]
0x03C1D638: cc154b94  bl #0x4ee2d68
0x03C1D63C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03C1D640: f65741a9  ldp x22, x21, [sp, #0x10]
0x03C1D644: fe0743f8  ldr x30, [sp], #0x30
0x03C1D648: c0035fd6  ret
0x03C1D64C: 988dd597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1D650 | ContextualizedECS.Entity$$SetComponent<MergeComponent>
; native signature: void ContextualizedECS_Entity__SetComponent_MergeComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_MergeComponent_o component, const MethodInfo_3C1D650* method);
; bytes=212 sha256=b1f7351fa574fa4cc07d3ce54665c2edd7ed9445fe22951cc9ef2e8063007d41 status=arm64_complete_bound indexed_start=True
0x03C1D650: ff0301d1  sub sp, sp, #0x40
0x03C1D654: fe5f01a9  stp x30, x23, [sp, #0x10]
0x03C1D658: f65702a9  stp x22, x21, [sp, #0x20]
0x03C1D65C: f44f03a9  stp x20, x19, [sp, #0x30]
0x03C1D660: 681c40f9  ldr x8, [x3, #0x38]
0x03C1D664: f30303aa  mov x19, x3
0x03C1D668: f40302aa  mov x20, x2
0x03C1D66C: f50301aa  mov x21, x1
0x03C1D670: f60300aa  mov x22, x0
0x03C1D674: 880100b5  cbnz x8, #0x3c1d6a4
0x03C1D678: e0d20190  adrp x0, #0x7679000
0x03C1D67C: 002c46f9  ldr x0, [x0, #0xc58]
0x03C1D680: e68cd597  bl #0x3180a18
0x03C1D684: 80d101b0  adrp x0, #0x764e000
0x03C1D688: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1D68C: e38cd597  bl #0x3180a18
0x03C1D690: 681e40f9  ldr x8, [x19, #0x38]
0x03C1D694: 880000b5  cbnz x8, #0x3c1d6a4
0x03C1D698: e00313aa  mov x0, x19
0x03C1D69C: 77e4d497  bl #0x3156878
0x03C1D6A0: 681e40f9  ldr x8, [x19, #0x38]
0x03C1D6A4: 89d101b0  adrp x9, #0x764e000
0x03C1D6A8: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1D6AC: d60a40f9  ldr x22, [x22, #0x10]
0x03C1D6B0: 170140f9  ldr x23, [x8]
0x03C1D6B4: 200140f9  ldr x0, [x9]
0x03C1D6B8: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1D6BC: 49000035  cbnz w9, #0x3c1d6c4
0x03C1D6C0: 338dd597  bl #0x3180b8c
0x03C1D6C4: e00317aa  mov x0, x23
0x03C1D6C8: e1031faa  mov x1, xzr
0x03C1D6CC: be1e6a94  bl #0x56a51c4
0x03C1D6D0: f55300a9  stp x21, x20, [sp]
0x03C1D6D4: 681e40f9  ldr x8, [x19, #0x38]
0x03C1D6D8: f30300aa  mov x19, x0
0x03C1D6DC: e1030091  mov x1, sp
0x03C1D6E0: 080540f9  ldr x8, [x8, #8]
0x03C1D6E4: e00308aa  mov x0, x8
0x03C1D6E8: 2b8dd597  bl #0x3180b94
0x03C1D6EC: b60100b4  cbz x22, #0x3c1d720
0x03C1D6F0: e8d20190  adrp x8, #0x7679000
0x03C1D6F4: 082d46f9  ldr x8, [x8, #0xc58]
0x03C1D6F8: e20300aa  mov x2, x0
0x03C1D6FC: e00316aa  mov x0, x22
0x03C1D700: e10313aa  mov x1, x19
0x03C1D704: 030140f9  ldr x3, [x8]
0x03C1D708: 98154b94  bl #0x4ee2d68
0x03C1D70C: f44f43a9  ldp x20, x19, [sp, #0x30]
0x03C1D710: f65742a9  ldp x22, x21, [sp, #0x20]
0x03C1D714: fe5f41a9  ldp x30, x23, [sp, #0x10]
0x03C1D718: ff030191  add sp, sp, #0x40
0x03C1D71C: c0035fd6  ret
0x03C1D720: 638dd597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1D724 | ContextualizedECS.Entity$$SetComponent<MoveBlockComponent>
; native signature: void ContextualizedECS_Entity__SetComponent_MoveBlockComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_MoveBlockComponent_o component, const MethodInfo_3C1D724* method);
; bytes=200 sha256=e853a79b3a96ba7bde293eca2d51934e0b7e2ef1268f2a3f19ab16a0a02456f1 status=arm64_complete_bound indexed_start=True
0x03C1D724: fe0f1df8  str x30, [sp, #-0x30]!
0x03C1D728: f65701a9  stp x22, x21, [sp, #0x10]
0x03C1D72C: f44f02a9  stp x20, x19, [sp, #0x20]
0x03C1D730: 481c40f9  ldr x8, [x2, #0x38]
0x03C1D734: f30302aa  mov x19, x2
0x03C1D738: f40301aa  mov x20, x1
0x03C1D73C: f50300aa  mov x21, x0
0x03C1D740: 880100b5  cbnz x8, #0x3c1d770
0x03C1D744: e0d20190  adrp x0, #0x7679000
0x03C1D748: 002c46f9  ldr x0, [x0, #0xc58]
0x03C1D74C: b38cd597  bl #0x3180a18
0x03C1D750: 80d101b0  adrp x0, #0x764e000
0x03C1D754: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1D758: b08cd597  bl #0x3180a18
0x03C1D75C: 681e40f9  ldr x8, [x19, #0x38]
0x03C1D760: 880000b5  cbnz x8, #0x3c1d770
0x03C1D764: e00313aa  mov x0, x19
0x03C1D768: 44e4d497  bl #0x3156878
0x03C1D76C: 681e40f9  ldr x8, [x19, #0x38]
0x03C1D770: 89d101b0  adrp x9, #0x764e000
0x03C1D774: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1D778: b50a40f9  ldr x21, [x21, #0x10]
0x03C1D77C: 160140f9  ldr x22, [x8]
0x03C1D780: 200140f9  ldr x0, [x9]
0x03C1D784: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1D788: 49000035  cbnz w9, #0x3c1d790
0x03C1D78C: 008dd597  bl #0x3180b8c
0x03C1D790: e00316aa  mov x0, x22
0x03C1D794: e1031faa  mov x1, xzr
0x03C1D798: 8b1e6a94  bl #0x56a51c4
0x03C1D79C: f4230039  strb w20, [sp, #8]
0x03C1D7A0: 681e40f9  ldr x8, [x19, #0x38]
0x03C1D7A4: f30300aa  mov x19, x0
0x03C1D7A8: e1230091  add x1, sp, #8
0x03C1D7AC: 080540f9  ldr x8, [x8, #8]
0x03C1D7B0: e00308aa  mov x0, x8
0x03C1D7B4: f88cd597  bl #0x3180b94
0x03C1D7B8: 950100b4  cbz x21, #0x3c1d7e8
0x03C1D7BC: e8d20190  adrp x8, #0x7679000
0x03C1D7C0: 082d46f9  ldr x8, [x8, #0xc58]
0x03C1D7C4: e20300aa  mov x2, x0
0x03C1D7C8: e00315aa  mov x0, x21
0x03C1D7CC: e10313aa  mov x1, x19
0x03C1D7D0: 030140f9  ldr x3, [x8]
0x03C1D7D4: 65154b94  bl #0x4ee2d68
0x03C1D7D8: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03C1D7DC: f65741a9  ldp x22, x21, [sp, #0x10]
0x03C1D7E0: fe0743f8  ldr x30, [sp], #0x30
0x03C1D7E4: c0035fd6  ret
0x03C1D7E8: 318dd597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1D7EC | ContextualizedECS.Entity$$SetComponent<PendingInteractionComponent>
; native signature: void ContextualizedECS_Entity__SetComponent_PendingInteractionComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_PendingInteractionComponent_o component, const MethodInfo_3C1D7EC* method);
; bytes=212 sha256=e62801b478ad41d3a0e9567988583274783e1093e8382df298d46fd6050a3643 status=arm64_complete_bound indexed_start=True
0x03C1D7EC: ff0301d1  sub sp, sp, #0x40
0x03C1D7F0: fe5f01a9  stp x30, x23, [sp, #0x10]
0x03C1D7F4: f65702a9  stp x22, x21, [sp, #0x20]
0x03C1D7F8: f44f03a9  stp x20, x19, [sp, #0x30]
0x03C1D7FC: 681c40f9  ldr x8, [x3, #0x38]
0x03C1D800: f30303aa  mov x19, x3
0x03C1D804: f40302aa  mov x20, x2
0x03C1D808: f50301aa  mov x21, x1
0x03C1D80C: f60300aa  mov x22, x0
0x03C1D810: 880100b5  cbnz x8, #0x3c1d840
0x03C1D814: e0d20190  adrp x0, #0x7679000
0x03C1D818: 002c46f9  ldr x0, [x0, #0xc58]
0x03C1D81C: 7f8cd597  bl #0x3180a18
0x03C1D820: 80d101b0  adrp x0, #0x764e000
0x03C1D824: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1D828: 7c8cd597  bl #0x3180a18
0x03C1D82C: 681e40f9  ldr x8, [x19, #0x38]
0x03C1D830: 880000b5  cbnz x8, #0x3c1d840
0x03C1D834: e00313aa  mov x0, x19
0x03C1D838: 10e4d497  bl #0x3156878
0x03C1D83C: 681e40f9  ldr x8, [x19, #0x38]
0x03C1D840: 89d101b0  adrp x9, #0x764e000
0x03C1D844: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1D848: d60a40f9  ldr x22, [x22, #0x10]
0x03C1D84C: 170140f9  ldr x23, [x8]
0x03C1D850: 200140f9  ldr x0, [x9]
0x03C1D854: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1D858: 49000035  cbnz w9, #0x3c1d860
0x03C1D85C: cc8cd597  bl #0x3180b8c
0x03C1D860: e00317aa  mov x0, x23
0x03C1D864: e1031faa  mov x1, xzr
0x03C1D868: 571e6a94  bl #0x56a51c4
0x03C1D86C: f55300a9  stp x21, x20, [sp]
0x03C1D870: 681e40f9  ldr x8, [x19, #0x38]
0x03C1D874: f30300aa  mov x19, x0
0x03C1D878: e1030091  mov x1, sp
0x03C1D87C: 080540f9  ldr x8, [x8, #8]
0x03C1D880: e00308aa  mov x0, x8
0x03C1D884: c48cd597  bl #0x3180b94
0x03C1D888: b60100b4  cbz x22, #0x3c1d8bc
0x03C1D88C: e8d20190  adrp x8, #0x7679000
0x03C1D890: 082d46f9  ldr x8, [x8, #0xc58]
0x03C1D894: e20300aa  mov x2, x0
0x03C1D898: e00316aa  mov x0, x22
0x03C1D89C: e10313aa  mov x1, x19
0x03C1D8A0: 030140f9  ldr x3, [x8]
0x03C1D8A4: 31154b94  bl #0x4ee2d68
0x03C1D8A8: f44f43a9  ldp x20, x19, [sp, #0x30]
0x03C1D8AC: f65742a9  ldp x22, x21, [sp, #0x20]
0x03C1D8B0: fe5f41a9  ldp x30, x23, [sp, #0x10]
0x03C1D8B4: ff030191  add sp, sp, #0x40
0x03C1D8B8: c0035fd6  ret
0x03C1D8BC: fc8cd597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1D8C0 | ContextualizedECS.Entity$$SetComponent<PendingItemsCombinationComponent>
; native signature: void ContextualizedECS_Entity__SetComponent_PendingItemsCombinationComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_PendingItemsCombinationComponent_o component, const MethodInfo_3C1D8C0* method);
; bytes=200 sha256=16eff4e89f036c651254f9f925924c8caa9ad446e4e8aaf5d40815ab9eafb4dd status=arm64_complete_bound indexed_start=True
0x03C1D8C0: fe0f1df8  str x30, [sp, #-0x30]!
0x03C1D8C4: f65701a9  stp x22, x21, [sp, #0x10]
0x03C1D8C8: f44f02a9  stp x20, x19, [sp, #0x20]
0x03C1D8CC: 481c40f9  ldr x8, [x2, #0x38]
0x03C1D8D0: f30302aa  mov x19, x2
0x03C1D8D4: f40301aa  mov x20, x1
0x03C1D8D8: f50300aa  mov x21, x0
0x03C1D8DC: 880100b5  cbnz x8, #0x3c1d90c
0x03C1D8E0: e0d20190  adrp x0, #0x7679000
0x03C1D8E4: 002c46f9  ldr x0, [x0, #0xc58]
0x03C1D8E8: 4c8cd597  bl #0x3180a18
0x03C1D8EC: 80d101b0  adrp x0, #0x764e000
0x03C1D8F0: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1D8F4: 498cd597  bl #0x3180a18
0x03C1D8F8: 681e40f9  ldr x8, [x19, #0x38]
0x03C1D8FC: 880000b5  cbnz x8, #0x3c1d90c
0x03C1D900: e00313aa  mov x0, x19
0x03C1D904: dde3d497  bl #0x3156878
0x03C1D908: 681e40f9  ldr x8, [x19, #0x38]
0x03C1D90C: 89d101b0  adrp x9, #0x764e000
0x03C1D910: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1D914: b50a40f9  ldr x21, [x21, #0x10]
0x03C1D918: 160140f9  ldr x22, [x8]
0x03C1D91C: 200140f9  ldr x0, [x9]
0x03C1D920: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1D924: 49000035  cbnz w9, #0x3c1d92c
0x03C1D928: 998cd597  bl #0x3180b8c
0x03C1D92C: e00316aa  mov x0, x22
0x03C1D930: e1031faa  mov x1, xzr
0x03C1D934: 241e6a94  bl #0x56a51c4
0x03C1D938: f4230039  strb w20, [sp, #8]
0x03C1D93C: 681e40f9  ldr x8, [x19, #0x38]
0x03C1D940: f30300aa  mov x19, x0
0x03C1D944: e1230091  add x1, sp, #8
0x03C1D948: 080540f9  ldr x8, [x8, #8]
0x03C1D94C: e00308aa  mov x0, x8
0x03C1D950: 918cd597  bl #0x3180b94
0x03C1D954: 950100b4  cbz x21, #0x3c1d984
0x03C1D958: e8d20190  adrp x8, #0x7679000
0x03C1D95C: 082d46f9  ldr x8, [x8, #0xc58]
0x03C1D960: e20300aa  mov x2, x0
0x03C1D964: e00315aa  mov x0, x21
0x03C1D968: e10313aa  mov x1, x19
0x03C1D96C: 030140f9  ldr x3, [x8]
0x03C1D970: fe144b94  bl #0x4ee2d68
0x03C1D974: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03C1D978: f65741a9  ldp x22, x21, [sp, #0x10]
0x03C1D97C: fe0743f8  ldr x30, [sp], #0x30
0x03C1D980: c0035fd6  ret
0x03C1D984: ca8cd597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1D988 | ContextualizedECS.Entity$$SetComponent<ProducerComponent>
; native signature: void ContextualizedECS_Entity__SetComponent_ProducerComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_ProducerComponent_o component, const MethodInfo_3C1D988* method);
; bytes=212 sha256=48344e8bcdd8016dc7007667eb35c04e9e55d1ef7a84d257ab7ee0251a46537b status=arm64_complete_bound indexed_start=True
0x03C1D988: ff4301d1  sub sp, sp, #0x50
0x03C1D98C: fe1300f9  str x30, [sp, #0x20]
0x03C1D990: f65703a9  stp x22, x21, [sp, #0x30]
0x03C1D994: f44f04a9  stp x20, x19, [sp, #0x40]
0x03C1D998: 481c40f9  ldr x8, [x2, #0x38]
0x03C1D99C: f30302aa  mov x19, x2
0x03C1D9A0: f40301aa  mov x20, x1
0x03C1D9A4: f50300aa  mov x21, x0
0x03C1D9A8: 880100b5  cbnz x8, #0x3c1d9d8
0x03C1D9AC: e0d20190  adrp x0, #0x7679000
0x03C1D9B0: 002c46f9  ldr x0, [x0, #0xc58]
0x03C1D9B4: 198cd597  bl #0x3180a18
0x03C1D9B8: 80d101b0  adrp x0, #0x764e000
0x03C1D9BC: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1D9C0: 168cd597  bl #0x3180a18
0x03C1D9C4: 681e40f9  ldr x8, [x19, #0x38]
0x03C1D9C8: 880000b5  cbnz x8, #0x3c1d9d8
0x03C1D9CC: e00313aa  mov x0, x19
0x03C1D9D0: aae3d497  bl #0x3156878
0x03C1D9D4: 681e40f9  ldr x8, [x19, #0x38]
0x03C1D9D8: 89d101b0  adrp x9, #0x764e000
0x03C1D9DC: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1D9E0: b50a40f9  ldr x21, [x21, #0x10]
0x03C1D9E4: 160140f9  ldr x22, [x8]
0x03C1D9E8: 200140f9  ldr x0, [x9]
0x03C1D9EC: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1D9F0: 49000035  cbnz w9, #0x3c1d9f8
0x03C1D9F4: 668cd597  bl #0x3180b8c
0x03C1D9F8: e00316aa  mov x0, x22
0x03C1D9FC: e1031faa  mov x1, xzr
0x03C1DA00: f11d6a94  bl #0x56a51c4
0x03C1DA04: 810240ad  ldp q1, q0, [x20]
0x03C1DA08: e1030091  mov x1, sp
0x03C1DA0C: e10300ad  stp q1, q0, [sp]
0x03C1DA10: 681e40f9  ldr x8, [x19, #0x38]
0x03C1DA14: f30300aa  mov x19, x0
0x03C1DA18: 080540f9  ldr x8, [x8, #8]
0x03C1DA1C: e00308aa  mov x0, x8
0x03C1DA20: 5d8cd597  bl #0x3180b94
0x03C1DA24: b50100b4  cbz x21, #0x3c1da58
0x03C1DA28: e8d20190  adrp x8, #0x7679000
0x03C1DA2C: 082d46f9  ldr x8, [x8, #0xc58]
0x03C1DA30: e20300aa  mov x2, x0
0x03C1DA34: e00315aa  mov x0, x21
0x03C1DA38: e10313aa  mov x1, x19
0x03C1DA3C: 030140f9  ldr x3, [x8]
0x03C1DA40: ca144b94  bl #0x4ee2d68
0x03C1DA44: f44f44a9  ldp x20, x19, [sp, #0x40]
0x03C1DA48: f65743a9  ldp x22, x21, [sp, #0x30]
0x03C1DA4C: fe1340f9  ldr x30, [sp, #0x20]
0x03C1DA50: ff430191  add sp, sp, #0x50
0x03C1DA54: c0035fd6  ret
0x03C1DA58: 958cd597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1DA5C | ContextualizedECS.Entity$$SetComponent<ResourceConsumedComponent>
; native signature: void ContextualizedECS_Entity__SetComponent_ResourceConsumedComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_ResourceConsumedComponent_o component, const MethodInfo_3C1DA5C* method);
; bytes=200 sha256=47f9ee35a8df78cba21b42d941c4efcab5657ae035a650894838621831346267 status=arm64_complete_bound indexed_start=True
0x03C1DA5C: fe0f1df8  str x30, [sp, #-0x30]!
0x03C1DA60: f65701a9  stp x22, x21, [sp, #0x10]
0x03C1DA64: f44f02a9  stp x20, x19, [sp, #0x20]
0x03C1DA68: 481c40f9  ldr x8, [x2, #0x38]
0x03C1DA6C: f30302aa  mov x19, x2
0x03C1DA70: f40301aa  mov x20, x1
0x03C1DA74: f50300aa  mov x21, x0
0x03C1DA78: 880100b5  cbnz x8, #0x3c1daa8
0x03C1DA7C: e0d20190  adrp x0, #0x7679000
0x03C1DA80: 002c46f9  ldr x0, [x0, #0xc58]
0x03C1DA84: e58bd597  bl #0x3180a18
0x03C1DA88: 80d101b0  adrp x0, #0x764e000
0x03C1DA8C: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1DA90: e28bd597  bl #0x3180a18
0x03C1DA94: 681e40f9  ldr x8, [x19, #0x38]
0x03C1DA98: 880000b5  cbnz x8, #0x3c1daa8
0x03C1DA9C: e00313aa  mov x0, x19
0x03C1DAA0: 76e3d497  bl #0x3156878
0x03C1DAA4: 681e40f9  ldr x8, [x19, #0x38]
0x03C1DAA8: 89d101b0  adrp x9, #0x764e000
0x03C1DAAC: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1DAB0: b50a40f9  ldr x21, [x21, #0x10]
0x03C1DAB4: 160140f9  ldr x22, [x8]
0x03C1DAB8: 200140f9  ldr x0, [x9]
0x03C1DABC: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1DAC0: 49000035  cbnz w9, #0x3c1dac8
0x03C1DAC4: 328cd597  bl #0x3180b8c
0x03C1DAC8: e00316aa  mov x0, x22
0x03C1DACC: e1031faa  mov x1, xzr
0x03C1DAD0: bd1d6a94  bl #0x56a51c4
0x03C1DAD4: f4230039  strb w20, [sp, #8]
0x03C1DAD8: 681e40f9  ldr x8, [x19, #0x38]
0x03C1DADC: f30300aa  mov x19, x0
0x03C1DAE0: e1230091  add x1, sp, #8
0x03C1DAE4: 080540f9  ldr x8, [x8, #8]
0x03C1DAE8: e00308aa  mov x0, x8
0x03C1DAEC: 2a8cd597  bl #0x3180b94
0x03C1DAF0: 950100b4  cbz x21, #0x3c1db20
0x03C1DAF4: e8d20190  adrp x8, #0x7679000
0x03C1DAF8: 082d46f9  ldr x8, [x8, #0xc58]
0x03C1DAFC: e20300aa  mov x2, x0
0x03C1DB00: e00315aa  mov x0, x21
0x03C1DB04: e10313aa  mov x1, x19
0x03C1DB08: 030140f9  ldr x3, [x8]
0x03C1DB0C: 97144b94  bl #0x4ee2d68
0x03C1DB10: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03C1DB14: f65741a9  ldp x22, x21, [sp, #0x10]
0x03C1DB18: fe0743f8  ldr x30, [sp], #0x30
0x03C1DB1C: c0035fd6  ret
0x03C1DB20: 638cd597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1DB24 | ContextualizedECS.Entity$$SetComponent<SpawnerComponent>
; native signature: void ContextualizedECS_Entity__SetComponent_SpawnerComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_SpawnerComponent_o component, const MethodInfo_3C1DB24* method);
; bytes=220 sha256=dae265d3d8ae22caebe9fc41a3babf9f300a6fd72641b04f912973938fff3c71 status=arm64_complete_bound indexed_start=True
0x03C1DB24: ff4301d1  sub sp, sp, #0x50
0x03C1DB28: fe1300f9  str x30, [sp, #0x20]
0x03C1DB2C: f65703a9  stp x22, x21, [sp, #0x30]
0x03C1DB30: f44f04a9  stp x20, x19, [sp, #0x40]
0x03C1DB34: 481c40f9  ldr x8, [x2, #0x38]
0x03C1DB38: f30302aa  mov x19, x2
0x03C1DB3C: f40301aa  mov x20, x1
0x03C1DB40: f50300aa  mov x21, x0
0x03C1DB44: 880100b5  cbnz x8, #0x3c1db74
0x03C1DB48: e0d20190  adrp x0, #0x7679000
0x03C1DB4C: 002c46f9  ldr x0, [x0, #0xc58]
0x03C1DB50: b28bd597  bl #0x3180a18
0x03C1DB54: 80d101b0  adrp x0, #0x764e000
0x03C1DB58: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1DB5C: af8bd597  bl #0x3180a18
0x03C1DB60: 681e40f9  ldr x8, [x19, #0x38]
0x03C1DB64: 880000b5  cbnz x8, #0x3c1db74
0x03C1DB68: e00313aa  mov x0, x19
0x03C1DB6C: 43e3d497  bl #0x3156878
0x03C1DB70: 681e40f9  ldr x8, [x19, #0x38]
0x03C1DB74: 89d101b0  adrp x9, #0x764e000
0x03C1DB78: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1DB7C: b50a40f9  ldr x21, [x21, #0x10]
0x03C1DB80: 160140f9  ldr x22, [x8]
0x03C1DB84: 200140f9  ldr x0, [x9]
0x03C1DB88: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1DB8C: 49000035  cbnz w9, #0x3c1db94
0x03C1DB90: ff8bd597  bl #0x3180b8c
0x03C1DB94: e00316aa  mov x0, x22
0x03C1DB98: e1031faa  mov x1, xzr
0x03C1DB9C: 8a1d6a94  bl #0x56a51c4
0x03C1DBA0: 880a40f9  ldr x8, [x20, #0x10]
0x03C1DBA4: 8002c03d  ldr q0, [x20]
0x03C1DBA8: e1030091  mov x1, sp
0x03C1DBAC: e80b00f9  str x8, [sp, #0x10]
0x03C1DBB0: e003803d  str q0, [sp]
0x03C1DBB4: 681e40f9  ldr x8, [x19, #0x38]
0x03C1DBB8: f30300aa  mov x19, x0
0x03C1DBBC: 080540f9  ldr x8, [x8, #8]
0x03C1DBC0: e00308aa  mov x0, x8
0x03C1DBC4: f48bd597  bl #0x3180b94
0x03C1DBC8: b50100b4  cbz x21, #0x3c1dbfc
0x03C1DBCC: e8d20190  adrp x8, #0x7679000
0x03C1DBD0: 082d46f9  ldr x8, [x8, #0xc58]
0x03C1DBD4: e20300aa  mov x2, x0
0x03C1DBD8: e00315aa  mov x0, x21
0x03C1DBDC: e10313aa  mov x1, x19
0x03C1DBE0: 030140f9  ldr x3, [x8]
0x03C1DBE4: 61144b94  bl #0x4ee2d68
0x03C1DBE8: f44f44a9  ldp x20, x19, [sp, #0x40]
0x03C1DBEC: f65743a9  ldp x22, x21, [sp, #0x30]
0x03C1DBF0: fe1340f9  ldr x30, [sp, #0x20]
0x03C1DBF4: ff430191  add sp, sp, #0x50
0x03C1DBF8: c0035fd6  ret
0x03C1DBFC: 2c8cd597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1DC00 | ContextualizedECS.Entity$$SetComponent<SplitComponent>
; native signature: void ContextualizedECS_Entity__SetComponent_SplitComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_SplitComponent_o component, const MethodInfo_3C1DC00* method);
; bytes=200 sha256=4b102be0ba45b6987b8426816006d26a4c1ca53f51484948312449ca51cd8a27 status=arm64_complete_bound indexed_start=True
0x03C1DC00: fe0f1df8  str x30, [sp, #-0x30]!
0x03C1DC04: f65701a9  stp x22, x21, [sp, #0x10]
0x03C1DC08: f44f02a9  stp x20, x19, [sp, #0x20]
0x03C1DC0C: 481c40f9  ldr x8, [x2, #0x38]
0x03C1DC10: f30302aa  mov x19, x2
0x03C1DC14: f40301aa  mov x20, x1
0x03C1DC18: f50300aa  mov x21, x0
0x03C1DC1C: 880100b5  cbnz x8, #0x3c1dc4c
0x03C1DC20: e0d20190  adrp x0, #0x7679000
0x03C1DC24: 002c46f9  ldr x0, [x0, #0xc58]
0x03C1DC28: 7c8bd597  bl #0x3180a18
0x03C1DC2C: 80d101b0  adrp x0, #0x764e000
0x03C1DC30: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1DC34: 798bd597  bl #0x3180a18
0x03C1DC38: 681e40f9  ldr x8, [x19, #0x38]
0x03C1DC3C: 880000b5  cbnz x8, #0x3c1dc4c
0x03C1DC40: e00313aa  mov x0, x19
0x03C1DC44: 0de3d497  bl #0x3156878
0x03C1DC48: 681e40f9  ldr x8, [x19, #0x38]
0x03C1DC4C: 89d101b0  adrp x9, #0x764e000
0x03C1DC50: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1DC54: b50a40f9  ldr x21, [x21, #0x10]
0x03C1DC58: 160140f9  ldr x22, [x8]
0x03C1DC5C: 200140f9  ldr x0, [x9]
0x03C1DC60: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1DC64: 49000035  cbnz w9, #0x3c1dc6c
0x03C1DC68: c98bd597  bl #0x3180b8c
0x03C1DC6C: e00316aa  mov x0, x22
0x03C1DC70: e1031faa  mov x1, xzr
0x03C1DC74: 541d6a94  bl #0x56a51c4
0x03C1DC78: f4230039  strb w20, [sp, #8]
0x03C1DC7C: 681e40f9  ldr x8, [x19, #0x38]
0x03C1DC80: f30300aa  mov x19, x0
0x03C1DC84: e1230091  add x1, sp, #8
0x03C1DC88: 080540f9  ldr x8, [x8, #8]
0x03C1DC8C: e00308aa  mov x0, x8
0x03C1DC90: c18bd597  bl #0x3180b94
0x03C1DC94: 950100b4  cbz x21, #0x3c1dcc4
0x03C1DC98: e8d20190  adrp x8, #0x7679000
0x03C1DC9C: 082d46f9  ldr x8, [x8, #0xc58]
0x03C1DCA0: e20300aa  mov x2, x0
0x03C1DCA4: e00315aa  mov x0, x21
0x03C1DCA8: e10313aa  mov x1, x19
0x03C1DCAC: 030140f9  ldr x3, [x8]
0x03C1DCB0: 2e144b94  bl #0x4ee2d68
0x03C1DCB4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03C1DCB8: f65741a9  ldp x22, x21, [sp, #0x10]
0x03C1DCBC: fe0743f8  ldr x30, [sp], #0x30
0x03C1DCC0: c0035fd6  ret
0x03C1DCC4: fa8bd597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1DCC8 | ContextualizedECS.Entity$$SetComponent<TimeCycleComponent>
; native signature: void ContextualizedECS_Entity__SetComponent_TimeCycleComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_TimeCycleComponent_o component, const MethodInfo_3C1DCC8* method);
; bytes=216 sha256=0fb263b82633733f6dc040d5d5ba8812c2bcd4621ffaf3c9846d9f0e57dfebc9 status=arm64_complete_bound indexed_start=True
0x03C1DCC8: ff0302d1  sub sp, sp, #0x80
0x03C1DCCC: fe2b00f9  str x30, [sp, #0x50]
0x03C1DCD0: f65706a9  stp x22, x21, [sp, #0x60]
0x03C1DCD4: f44f07a9  stp x20, x19, [sp, #0x70]
0x03C1DCD8: 481c40f9  ldr x8, [x2, #0x38]
0x03C1DCDC: f30302aa  mov x19, x2
0x03C1DCE0: f40301aa  mov x20, x1
0x03C1DCE4: f50300aa  mov x21, x0
0x03C1DCE8: 880100b5  cbnz x8, #0x3c1dd18
0x03C1DCEC: e0d20190  adrp x0, #0x7679000
0x03C1DCF0: 002c46f9  ldr x0, [x0, #0xc58]
0x03C1DCF4: 498bd597  bl #0x3180a18
0x03C1DCF8: 80d101b0  adrp x0, #0x764e000
0x03C1DCFC: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1DD00: 468bd597  bl #0x3180a18
0x03C1DD04: 681e40f9  ldr x8, [x19, #0x38]
0x03C1DD08: 880000b5  cbnz x8, #0x3c1dd18
0x03C1DD0C: e00313aa  mov x0, x19
0x03C1DD10: dae2d497  bl #0x3156878
0x03C1DD14: 681e40f9  ldr x8, [x19, #0x38]
0x03C1DD18: 89d101b0  adrp x9, #0x764e000
0x03C1DD1C: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1DD20: b50a40f9  ldr x21, [x21, #0x10]
0x03C1DD24: 160140f9  ldr x22, [x8]
0x03C1DD28: 200140f9  ldr x0, [x9]
0x03C1DD2C: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1DD30: 49000035  cbnz w9, #0x3c1dd38
0x03C1DD34: 968bd597  bl #0x3180b8c
0x03C1DD38: e00316aa  mov x0, x22
0x03C1DD3C: e1031faa  mov x1, xzr
0x03C1DD40: 211d6a94  bl #0x56a51c4
0x03C1DD44: f60300aa  mov x22, x0
0x03C1DD48: e0030091  mov x0, sp
0x03C1DD4C: 020a8052  movz w2, #0x50
0x03C1DD50: e10314aa  mov x1, x20
0x03C1DD54: 07c3d694  bl #0x71ce970
0x03C1DD58: 681e40f9  ldr x8, [x19, #0x38]
0x03C1DD5C: e1030091  mov x1, sp
0x03C1DD60: 000540f9  ldr x0, [x8, #8]
0x03C1DD64: 8c8bd597  bl #0x3180b94
0x03C1DD68: b50100b4  cbz x21, #0x3c1dd9c
0x03C1DD6C: e8d20190  adrp x8, #0x7679000
0x03C1DD70: 082d46f9  ldr x8, [x8, #0xc58]
0x03C1DD74: e20300aa  mov x2, x0
0x03C1DD78: e00315aa  mov x0, x21
0x03C1DD7C: e10316aa  mov x1, x22
0x03C1DD80: 030140f9  ldr x3, [x8]
0x03C1DD84: f9134b94  bl #0x4ee2d68
0x03C1DD88: f44f47a9  ldp x20, x19, [sp, #0x70]
0x03C1DD8C: f65746a9  ldp x22, x21, [sp, #0x60]
0x03C1DD90: fe2b40f9  ldr x30, [sp, #0x50]
0x03C1DD94: ff030291  add sp, sp, #0x80
0x03C1DD98: c0035fd6  ret
0x03C1DD9C: c48bd597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1DDA0 | ContextualizedECS.Entity$$SetComponent<TimeDurationComponent>
; native signature: void ContextualizedECS_Entity__SetComponent_TimeDurationComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_TimeDurationComponent_o component, const MethodInfo_3C1DDA0* method);
; bytes=212 sha256=fc25a64350134d3aa8c032fb2723883d8bde44bfb55ab8faa4228f8966ad0de4 status=arm64_complete_bound indexed_start=True
0x03C1DDA0: ff4301d1  sub sp, sp, #0x50
0x03C1DDA4: fe1300f9  str x30, [sp, #0x20]
0x03C1DDA8: f65703a9  stp x22, x21, [sp, #0x30]
0x03C1DDAC: f44f04a9  stp x20, x19, [sp, #0x40]
0x03C1DDB0: 481c40f9  ldr x8, [x2, #0x38]
0x03C1DDB4: f30302aa  mov x19, x2
0x03C1DDB8: f40301aa  mov x20, x1
0x03C1DDBC: f50300aa  mov x21, x0
0x03C1DDC0: 880100b5  cbnz x8, #0x3c1ddf0
0x03C1DDC4: e0d20190  adrp x0, #0x7679000
0x03C1DDC8: 002c46f9  ldr x0, [x0, #0xc58]
0x03C1DDCC: 138bd597  bl #0x3180a18
0x03C1DDD0: 80d101b0  adrp x0, #0x764e000
0x03C1DDD4: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1DDD8: 108bd597  bl #0x3180a18
0x03C1DDDC: 681e40f9  ldr x8, [x19, #0x38]
0x03C1DDE0: 880000b5  cbnz x8, #0x3c1ddf0
0x03C1DDE4: e00313aa  mov x0, x19
0x03C1DDE8: a4e2d497  bl #0x3156878
0x03C1DDEC: 681e40f9  ldr x8, [x19, #0x38]
0x03C1DDF0: 89d101b0  adrp x9, #0x764e000
0x03C1DDF4: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1DDF8: b50a40f9  ldr x21, [x21, #0x10]
0x03C1DDFC: 160140f9  ldr x22, [x8]
0x03C1DE00: 200140f9  ldr x0, [x9]
0x03C1DE04: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1DE08: 49000035  cbnz w9, #0x3c1de10
0x03C1DE0C: 608bd597  bl #0x3180b8c
0x03C1DE10: e00316aa  mov x0, x22
0x03C1DE14: e1031faa  mov x1, xzr
0x03C1DE18: eb1c6a94  bl #0x56a51c4
0x03C1DE1C: 810240ad  ldp q1, q0, [x20]
0x03C1DE20: e1030091  mov x1, sp
0x03C1DE24: e10300ad  stp q1, q0, [sp]
0x03C1DE28: 681e40f9  ldr x8, [x19, #0x38]
0x03C1DE2C: f30300aa  mov x19, x0
0x03C1DE30: 080540f9  ldr x8, [x8, #8]
0x03C1DE34: e00308aa  mov x0, x8
0x03C1DE38: 578bd597  bl #0x3180b94
0x03C1DE3C: b50100b4  cbz x21, #0x3c1de70
0x03C1DE40: e8d20190  adrp x8, #0x7679000
0x03C1DE44: 082d46f9  ldr x8, [x8, #0xc58]
0x03C1DE48: e20300aa  mov x2, x0
0x03C1DE4C: e00315aa  mov x0, x21
0x03C1DE50: e10313aa  mov x1, x19
0x03C1DE54: 030140f9  ldr x3, [x8]
0x03C1DE58: c4134b94  bl #0x4ee2d68
0x03C1DE5C: f44f44a9  ldp x20, x19, [sp, #0x40]
0x03C1DE60: f65743a9  ldp x22, x21, [sp, #0x30]
0x03C1DE64: fe1340f9  ldr x30, [sp, #0x20]
0x03C1DE68: ff430191  add sp, sp, #0x50
0x03C1DE6C: c0035fd6  ret
0x03C1DE70: 8f8bd597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1DE74 | ContextualizedECS.Entity$$SetComponent<TimeLimitedActivationComponent>
; native signature: void ContextualizedECS_Entity__SetComponent_TimeLimitedActivationComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_TimeLimitedActivationComponent_o component, const MethodInfo_3C1DE74* method);
; bytes=212 sha256=e423d5d8c6f90a7a8dade0f2ae7c7b29e788324298f538f6e14c4f770075e18e status=arm64_complete_bound indexed_start=True
0x03C1DE74: ff4301d1  sub sp, sp, #0x50
0x03C1DE78: fe1300f9  str x30, [sp, #0x20]
0x03C1DE7C: f65703a9  stp x22, x21, [sp, #0x30]
0x03C1DE80: f44f04a9  stp x20, x19, [sp, #0x40]
0x03C1DE84: 481c40f9  ldr x8, [x2, #0x38]
0x03C1DE88: f30302aa  mov x19, x2
0x03C1DE8C: f40301aa  mov x20, x1
0x03C1DE90: f50300aa  mov x21, x0
0x03C1DE94: 880100b5  cbnz x8, #0x3c1dec4
0x03C1DE98: e0d20190  adrp x0, #0x7679000
0x03C1DE9C: 002c46f9  ldr x0, [x0, #0xc58]
0x03C1DEA0: de8ad597  bl #0x3180a18
0x03C1DEA4: 80d101b0  adrp x0, #0x764e000
0x03C1DEA8: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1DEAC: db8ad597  bl #0x3180a18
0x03C1DEB0: 681e40f9  ldr x8, [x19, #0x38]
0x03C1DEB4: 880000b5  cbnz x8, #0x3c1dec4
0x03C1DEB8: e00313aa  mov x0, x19
0x03C1DEBC: 6fe2d497  bl #0x3156878
0x03C1DEC0: 681e40f9  ldr x8, [x19, #0x38]
0x03C1DEC4: 89d101b0  adrp x9, #0x764e000
0x03C1DEC8: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1DECC: b50a40f9  ldr x21, [x21, #0x10]
0x03C1DED0: 160140f9  ldr x22, [x8]
0x03C1DED4: 200140f9  ldr x0, [x9]
0x03C1DED8: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1DEDC: 49000035  cbnz w9, #0x3c1dee4
0x03C1DEE0: 2b8bd597  bl #0x3180b8c
0x03C1DEE4: e00316aa  mov x0, x22
0x03C1DEE8: e1031faa  mov x1, xzr
0x03C1DEEC: b61c6a94  bl #0x56a51c4
0x03C1DEF0: 810240ad  ldp q1, q0, [x20]
0x03C1DEF4: e1030091  mov x1, sp
0x03C1DEF8: e10300ad  stp q1, q0, [sp]
0x03C1DEFC: 681e40f9  ldr x8, [x19, #0x38]
0x03C1DF00: f30300aa  mov x19, x0
0x03C1DF04: 080540f9  ldr x8, [x8, #8]
0x03C1DF08: e00308aa  mov x0, x8
0x03C1DF0C: 228bd597  bl #0x3180b94
0x03C1DF10: b50100b4  cbz x21, #0x3c1df44
0x03C1DF14: e8d20190  adrp x8, #0x7679000
0x03C1DF18: 082d46f9  ldr x8, [x8, #0xc58]
0x03C1DF1C: e20300aa  mov x2, x0
0x03C1DF20: e00315aa  mov x0, x21
0x03C1DF24: e10313aa  mov x1, x19
0x03C1DF28: 030140f9  ldr x3, [x8]
0x03C1DF2C: 8f134b94  bl #0x4ee2d68
0x03C1DF30: f44f44a9  ldp x20, x19, [sp, #0x40]
0x03C1DF34: f65743a9  ldp x22, x21, [sp, #0x30]
0x03C1DF38: fe1340f9  ldr x30, [sp, #0x20]
0x03C1DF3C: ff430191  add sp, sp, #0x50
0x03C1DF40: c0035fd6  ret
0x03C1DF44: 5a8bd597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1DF48 | ContextualizedECS.Entity$$SetComponent<TimeLockBlockComponent>
; native signature: void ContextualizedECS_Entity__SetComponent_TimeLockBlockComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_TimeLockBlockComponent_o component, const MethodInfo_3C1DF48* method);
; bytes=200 sha256=e659a4ccae542b8a85fd0e75bb7084c76a44225d8181f4b8001d6e92ec87774f status=arm64_complete_bound indexed_start=True
0x03C1DF48: fe0f1df8  str x30, [sp, #-0x30]!
0x03C1DF4C: f65701a9  stp x22, x21, [sp, #0x10]
0x03C1DF50: f44f02a9  stp x20, x19, [sp, #0x20]
0x03C1DF54: 481c40f9  ldr x8, [x2, #0x38]
0x03C1DF58: f30302aa  mov x19, x2
0x03C1DF5C: f40301aa  mov x20, x1
0x03C1DF60: f50300aa  mov x21, x0
0x03C1DF64: 880100b5  cbnz x8, #0x3c1df94
0x03C1DF68: e0d20190  adrp x0, #0x7679000
0x03C1DF6C: 002c46f9  ldr x0, [x0, #0xc58]
0x03C1DF70: aa8ad597  bl #0x3180a18
0x03C1DF74: 80d101b0  adrp x0, #0x764e000
0x03C1DF78: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1DF7C: a78ad597  bl #0x3180a18
0x03C1DF80: 681e40f9  ldr x8, [x19, #0x38]
0x03C1DF84: 880000b5  cbnz x8, #0x3c1df94
0x03C1DF88: e00313aa  mov x0, x19
0x03C1DF8C: 3be2d497  bl #0x3156878
0x03C1DF90: 681e40f9  ldr x8, [x19, #0x38]
0x03C1DF94: 89d101b0  adrp x9, #0x764e000
0x03C1DF98: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1DF9C: b50a40f9  ldr x21, [x21, #0x10]
0x03C1DFA0: 160140f9  ldr x22, [x8]
0x03C1DFA4: 200140f9  ldr x0, [x9]
0x03C1DFA8: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1DFAC: 49000035  cbnz w9, #0x3c1dfb4
0x03C1DFB0: f78ad597  bl #0x3180b8c
0x03C1DFB4: e00316aa  mov x0, x22
0x03C1DFB8: e1031faa  mov x1, xzr
0x03C1DFBC: 821c6a94  bl #0x56a51c4
0x03C1DFC0: f4230039  strb w20, [sp, #8]
0x03C1DFC4: 681e40f9  ldr x8, [x19, #0x38]
0x03C1DFC8: f30300aa  mov x19, x0
0x03C1DFCC: e1230091  add x1, sp, #8
0x03C1DFD0: 080540f9  ldr x8, [x8, #8]
0x03C1DFD4: e00308aa  mov x0, x8
0x03C1DFD8: ef8ad597  bl #0x3180b94
0x03C1DFDC: 950100b4  cbz x21, #0x3c1e00c
0x03C1DFE0: e8d20190  adrp x8, #0x7679000
0x03C1DFE4: 082d46f9  ldr x8, [x8, #0xc58]
0x03C1DFE8: e20300aa  mov x2, x0
0x03C1DFEC: e00315aa  mov x0, x21
0x03C1DFF0: e10313aa  mov x1, x19
0x03C1DFF4: 030140f9  ldr x3, [x8]
0x03C1DFF8: 5c134b94  bl #0x4ee2d68
0x03C1DFFC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03C1E000: f65741a9  ldp x22, x21, [sp, #0x10]
0x03C1E004: fe0743f8  ldr x30, [sp], #0x30
0x03C1E008: c0035fd6  ret
0x03C1E00C: 288bd597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1E010 | ContextualizedECS.Entity$$SetComponent<TimeLockComponent>
; native signature: void ContextualizedECS_Entity__SetComponent_TimeLockComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_TimeLockComponent_o component, const MethodInfo_3C1E010* method);
; bytes=220 sha256=d8675888764a5786d47ecd19efb9292e7cf0e1c8696c37ec78a7a5bcfd068f5f status=arm64_complete_bound indexed_start=True
0x03C1E010: ff8301d1  sub sp, sp, #0x60
0x03C1E014: fe1b00f9  str x30, [sp, #0x30]
0x03C1E018: f65704a9  stp x22, x21, [sp, #0x40]
0x03C1E01C: f44f05a9  stp x20, x19, [sp, #0x50]
0x03C1E020: 481c40f9  ldr x8, [x2, #0x38]
0x03C1E024: f30302aa  mov x19, x2
0x03C1E028: f40301aa  mov x20, x1
0x03C1E02C: f50300aa  mov x21, x0
0x03C1E030: 880100b5  cbnz x8, #0x3c1e060
0x03C1E034: c0d201f0  adrp x0, #0x7679000
0x03C1E038: 002c46f9  ldr x0, [x0, #0xc58]
0x03C1E03C: 778ad597  bl #0x3180a18
0x03C1E040: 80d10190  adrp x0, #0x764e000
0x03C1E044: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1E048: 748ad597  bl #0x3180a18
0x03C1E04C: 681e40f9  ldr x8, [x19, #0x38]
0x03C1E050: 880000b5  cbnz x8, #0x3c1e060
0x03C1E054: e00313aa  mov x0, x19
0x03C1E058: 08e2d497  bl #0x3156878
0x03C1E05C: 681e40f9  ldr x8, [x19, #0x38]
0x03C1E060: 89d10190  adrp x9, #0x764e000
0x03C1E064: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1E068: b50a40f9  ldr x21, [x21, #0x10]
0x03C1E06C: 160140f9  ldr x22, [x8]
0x03C1E070: 200140f9  ldr x0, [x9]
0x03C1E074: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1E078: 49000035  cbnz w9, #0x3c1e080
0x03C1E07C: c48ad597  bl #0x3180b8c
0x03C1E080: e00316aa  mov x0, x22
0x03C1E084: e1031faa  mov x1, xzr
0x03C1E088: 4f1c6a94  bl #0x56a51c4
0x03C1E08C: 881240f9  ldr x8, [x20, #0x20]
0x03C1E090: 810240ad  ldp q1, q0, [x20]
0x03C1E094: e1030091  mov x1, sp
0x03C1E098: e81300f9  str x8, [sp, #0x20]
0x03C1E09C: e10300ad  stp q1, q0, [sp]
0x03C1E0A0: 681e40f9  ldr x8, [x19, #0x38]
0x03C1E0A4: f30300aa  mov x19, x0
0x03C1E0A8: 080540f9  ldr x8, [x8, #8]
0x03C1E0AC: e00308aa  mov x0, x8
0x03C1E0B0: b98ad597  bl #0x3180b94
0x03C1E0B4: b50100b4  cbz x21, #0x3c1e0e8
0x03C1E0B8: c8d201f0  adrp x8, #0x7679000
0x03C1E0BC: 082d46f9  ldr x8, [x8, #0xc58]
0x03C1E0C0: e20300aa  mov x2, x0
0x03C1E0C4: e00315aa  mov x0, x21
0x03C1E0C8: e10313aa  mov x1, x19
0x03C1E0CC: 030140f9  ldr x3, [x8]
0x03C1E0D0: 26134b94  bl #0x4ee2d68
0x03C1E0D4: f44f45a9  ldp x20, x19, [sp, #0x50]
0x03C1E0D8: f65744a9  ldp x22, x21, [sp, #0x40]
0x03C1E0DC: fe1b40f9  ldr x30, [sp, #0x30]
0x03C1E0E0: ff830191  add sp, sp, #0x60
0x03C1E0E4: c0035fd6  ret
0x03C1E0E8: f18ad597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1E0EC | ContextualizedECS.Entity$$SetComponent<ToolSpawningComponent>
; native signature: void ContextualizedECS_Entity__SetComponent_ToolSpawningComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_ToolSpawningComponent_o component, const MethodInfo_3C1E0EC* method);
; bytes=212 sha256=b7c5a16fa05ed01f1e3a3706d6b17d61c9d4cf7c38415b4cb9405b08cf48eb86 status=arm64_complete_bound indexed_start=True
0x03C1E0EC: ff0301d1  sub sp, sp, #0x40
0x03C1E0F0: fe5f01a9  stp x30, x23, [sp, #0x10]
0x03C1E0F4: f65702a9  stp x22, x21, [sp, #0x20]
0x03C1E0F8: f44f03a9  stp x20, x19, [sp, #0x30]
0x03C1E0FC: 681c40f9  ldr x8, [x3, #0x38]
0x03C1E100: f30303aa  mov x19, x3
0x03C1E104: f40302aa  mov x20, x2
0x03C1E108: f50301aa  mov x21, x1
0x03C1E10C: f60300aa  mov x22, x0
0x03C1E110: 880100b5  cbnz x8, #0x3c1e140
0x03C1E114: c0d201f0  adrp x0, #0x7679000
0x03C1E118: 002c46f9  ldr x0, [x0, #0xc58]
0x03C1E11C: 3f8ad597  bl #0x3180a18
0x03C1E120: 80d10190  adrp x0, #0x764e000
0x03C1E124: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1E128: 3c8ad597  bl #0x3180a18
0x03C1E12C: 681e40f9  ldr x8, [x19, #0x38]
0x03C1E130: 880000b5  cbnz x8, #0x3c1e140
0x03C1E134: e00313aa  mov x0, x19
0x03C1E138: d0e1d497  bl #0x3156878
0x03C1E13C: 681e40f9  ldr x8, [x19, #0x38]
0x03C1E140: 89d10190  adrp x9, #0x764e000
0x03C1E144: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1E148: d60a40f9  ldr x22, [x22, #0x10]
0x03C1E14C: 170140f9  ldr x23, [x8]
0x03C1E150: 200140f9  ldr x0, [x9]
0x03C1E154: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1E158: 49000035  cbnz w9, #0x3c1e160
0x03C1E15C: 8c8ad597  bl #0x3180b8c
0x03C1E160: e00317aa  mov x0, x23
0x03C1E164: e1031faa  mov x1, xzr
0x03C1E168: 171c6a94  bl #0x56a51c4
0x03C1E16C: f55300a9  stp x21, x20, [sp]
0x03C1E170: 681e40f9  ldr x8, [x19, #0x38]
0x03C1E174: f30300aa  mov x19, x0
0x03C1E178: e1030091  mov x1, sp
0x03C1E17C: 080540f9  ldr x8, [x8, #8]
0x03C1E180: e00308aa  mov x0, x8
0x03C1E184: 848ad597  bl #0x3180b94
0x03C1E188: b60100b4  cbz x22, #0x3c1e1bc
0x03C1E18C: c8d201f0  adrp x8, #0x7679000
0x03C1E190: 082d46f9  ldr x8, [x8, #0xc58]
0x03C1E194: e20300aa  mov x2, x0
0x03C1E198: e00316aa  mov x0, x22
0x03C1E19C: e10313aa  mov x1, x19
0x03C1E1A0: 030140f9  ldr x3, [x8]
0x03C1E1A4: f1124b94  bl #0x4ee2d68
0x03C1E1A8: f44f43a9  ldp x20, x19, [sp, #0x30]
0x03C1E1AC: f65742a9  ldp x22, x21, [sp, #0x20]
0x03C1E1B0: fe5f41a9  ldp x30, x23, [sp, #0x10]
0x03C1E1B4: ff030191  add sp, sp, #0x40
0x03C1E1B8: c0035fd6  ret
0x03C1E1BC: bc8ad597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1E1C0 | ContextualizedECS.Entity$$SetComponent<__Il2CppFullySharedGenericStructType>
; native signature: void ContextualizedECS_Entity__SetComponent___Il2CppFullySharedGenericStructType_ (ContextualizedECS_Entity_o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o component, const MethodInfo_3C1E1C0* method);
; bytes=292 sha256=69e0e9f50b8c9e27298d440ed42010b3c28d30b563b58ffd6cb1eaa00c1471fa status=arm64_complete_bound indexed_start=True
0x03C1E1C0: fd7bbba9  stp x29, x30, [sp, #-0x50]!
0x03C1E1C4: f90b00f9  str x25, [sp, #0x10]
0x03C1E1C8: f85f02a9  stp x24, x23, [sp, #0x20]
0x03C1E1CC: f65703a9  stp x22, x21, [sp, #0x30]
0x03C1E1D0: f44f04a9  stp x20, x19, [sp, #0x40]
0x03C1E1D4: fd030091  mov x29, sp
0x03C1E1D8: ff4300d1  sub sp, sp, #0x10
0x03C1E1DC: 59d03bd5  mrs x25, tpidr_el0
0x03C1E1E0: 281740f9  ldr x8, [x25, #0x28]
0x03C1E1E4: f30302aa  mov x19, x2
0x03C1E1E8: f40301aa  mov x20, x1
0x03C1E1EC: f50300aa  mov x21, x0
0x03C1E1F0: a8831ff8  stur x8, [x29, #-8]
0x03C1E1F4: 481c40f9  ldr x8, [x2, #0x38]
0x03C1E1F8: 880100b5  cbnz x8, #0x3c1e228
0x03C1E1FC: c0d201f0  adrp x0, #0x7679000
0x03C1E200: 002c46f9  ldr x0, [x0, #0xc58]
0x03C1E204: 058ad597  bl #0x3180a18
0x03C1E208: 80d10190  adrp x0, #0x764e000
0x03C1E20C: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1E210: 028ad597  bl #0x3180a18
0x03C1E214: 681e40f9  ldr x8, [x19, #0x38]
0x03C1E218: 880000b5  cbnz x8, #0x3c1e228
0x03C1E21C: e00313aa  mov x0, x19
0x03C1E220: 96e1d497  bl #0x3156878
0x03C1E224: 681e40f9  ldr x8, [x19, #0x38]
0x03C1E228: 182540a9  ldp x24, x9, [x8]
0x03C1E22C: 37fd40b9  ldr w23, [x9, #0xfc]
0x03C1E230: e9030091  mov x9, sp
0x03C1E234: ea3e0091  add x10, x23, #0xf
0x03C1E238: 4a717c92  and x10, x10, #0x1fffffff0
0x03C1E23C: 36010acb  sub x22, x9, x10
0x03C1E240: df020091  mov sp, x22
0x03C1E244: 89d10190  adrp x9, #0x764e000
0x03C1E248: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1E24C: b50a40f9  ldr x21, [x21, #0x10]
0x03C1E250: 200140f9  ldr x0, [x9]
0x03C1E254: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1E258: 49000035  cbnz w9, #0x3c1e260
0x03C1E25C: 4c8ad597  bl #0x3180b8c
0x03C1E260: e00318aa  mov x0, x24
0x03C1E264: e1031faa  mov x1, xzr
0x03C1E268: d71b6a94  bl #0x56a51c4
0x03C1E26C: f80300aa  mov x24, x0
0x03C1E270: e00316aa  mov x0, x22
0x03C1E274: e10314aa  mov x1, x20
0x03C1E278: e20317aa  mov x2, x23
0x03C1E27C: bdc1d694  bl #0x71ce970
0x03C1E280: 681e40f9  ldr x8, [x19, #0x38]
0x03C1E284: e10316aa  mov x1, x22
0x03C1E288: 000540f9  ldr x0, [x8, #8]
0x03C1E28C: 428ad597  bl #0x3180b94
0x03C1E290: 750200b4  cbz x21, #0x3c1e2dc
0x03C1E294: c8d201f0  adrp x8, #0x7679000
0x03C1E298: 082d46f9  ldr x8, [x8, #0xc58]
0x03C1E29C: e20300aa  mov x2, x0
0x03C1E2A0: e00315aa  mov x0, x21
0x03C1E2A4: e10318aa  mov x1, x24
0x03C1E2A8: 030140f9  ldr x3, [x8]
0x03C1E2AC: af124b94  bl #0x4ee2d68
0x03C1E2B0: 281740f9  ldr x8, [x25, #0x28]
0x03C1E2B4: a9835ff8  ldur x9, [x29, #-8]
0x03C1E2B8: 1f0109eb  cmp x8, x9
0x03C1E2BC: 21010054  b.ne #0x3c1e2e0
0x03C1E2C0: bf030091  mov sp, x29
0x03C1E2C4: f44f44a9  ldp x20, x19, [sp, #0x40]
0x03C1E2C8: f65743a9  ldp x22, x21, [sp, #0x30]
0x03C1E2CC: f85f42a9  ldp x24, x23, [sp, #0x20]
0x03C1E2D0: f90b40f9  ldr x25, [sp, #0x10]
0x03C1E2D4: fd7bc5a8  ldp x29, x30, [sp], #0x50
0x03C1E2D8: c0035fd6  ret
0x03C1E2DC: 748ad597  bl #0x3180cac
0x03C1E2E0: acc1d694  bl #0x71ce990

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1E2E4 | ContextualizedECS.Entity$$TryGetComponent<BoardTilePositionComponent>
; native signature: bool ContextualizedECS_Entity__TryGetComponent_BoardTilePositionComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_BoardTilePositionComponent_o* component, const MethodInfo_3C1E2E4* method);
; bytes=268 sha256=c993915e73705625dbaa3dc2db9d69228de2dca033de66d58a1ee4b0c6dc86ed status=arm64_complete_bound indexed_start=True
0x03C1E2E4: fe0f1df8  str x30, [sp, #-0x30]!
0x03C1E2E8: f65701a9  stp x22, x21, [sp, #0x10]
0x03C1E2EC: f44f02a9  stp x20, x19, [sp, #0x20]
0x03C1E2F0: 481c40f9  ldr x8, [x2, #0x38]
0x03C1E2F4: f40302aa  mov x20, x2
0x03C1E2F8: f30301aa  mov x19, x1
0x03C1E2FC: f50300aa  mov x21, x0
0x03C1E300: 680100b5  cbnz x8, #0x3c1e32c
0x03C1E304: c0d201f0  adrp x0, #0x7679000
0x03C1E308: 003046f9  ldr x0, [x0, #0xc60]
0x03C1E30C: c389d597  bl #0x3180a18
0x03C1E310: 80d10190  adrp x0, #0x764e000
0x03C1E314: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1E318: c089d597  bl #0x3180a18
0x03C1E31C: 881e40f9  ldr x8, [x20, #0x38]
0x03C1E320: 680000b5  cbnz x8, #0x3c1e32c
0x03C1E324: e00314aa  mov x0, x20
0x03C1E328: 54e1d497  bl #0x3156878
0x03C1E32C: ff0700f9  str xzr, [sp, #8]
0x03C1E330: 7f0200b9  str wzr, [x19]
0x03C1E334: 88d10190  adrp x8, #0x764e000
0x03C1E338: 08ad42f9  ldr x8, [x8, #0x558]
0x03C1E33C: b50a40f9  ldr x21, [x21, #0x10]
0x03C1E340: 000140f9  ldr x0, [x8]
0x03C1E344: 881e40f9  ldr x8, [x20, #0x38]
0x03C1E348: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1E34C: 160940f9  ldr x22, [x8, #0x10]
0x03C1E350: 49000035  cbnz w9, #0x3c1e358
0x03C1E354: 0e8ad597  bl #0x3180b8c
0x03C1E358: e00316aa  mov x0, x22
0x03C1E35C: e1031faa  mov x1, xzr
0x03C1E360: 991b6a94  bl #0x56a51c4
0x03C1E364: 350400b4  cbz x21, #0x3c1e3e8
0x03C1E368: c8d201f0  adrp x8, #0x7679000
0x03C1E36C: 083146f9  ldr x8, [x8, #0xc60]
0x03C1E370: e10300aa  mov x1, x0
0x03C1E374: e2230091  add x2, sp, #8
0x03C1E378: e00315aa  mov x0, x21
0x03C1E37C: 030140f9  ldr x3, [x8]
0x03C1E380: 4c194b94  bl #0x4ee48b0
0x03C1E384: f503002a  mov w21, w0
0x03C1E388: 60020036  tbz w0, #0, #0x3c1e3d4
0x03C1E38C: 881e40f9  ldr x8, [x20, #0x38]
0x03C1E390: f40740f9  ldr x20, [sp, #8]
0x03C1E394: 010540f9  ldr x1, [x8, #8]
0x03C1E398: 28d44439  ldrb w8, [x1, #0x135]
0x03C1E39C: 88000037  tbnz w8, #0, #0x3c1e3ac
0x03C1E3A0: e00301aa  mov x0, x1
0x03C1E3A4: 1ee1d497  bl #0x315681c
0x03C1E3A8: e10300aa  mov x1, x0
0x03C1E3AC: f40100b4  cbz x20, #0x3c1e3e8
0x03C1E3B0: 880240f9  ldr x8, [x20]
0x03C1E3B4: 292040f9  ldr x9, [x1, #0x40]
0x03C1E3B8: e00314aa  mov x0, x20
0x03C1E3BC: 082140f9  ldr x8, [x8, #0x40]
0x03C1E3C0: 1f0109eb  cmp x8, x9
0x03C1E3C4: 41010054  b.ne #0x3c1e3ec
0x03C1E3C8: f489d597  bl #0x3180b98
0x03C1E3CC: 080040b9  ldr w8, [x0]
0x03C1E3D0: 680200b9  str w8, [x19]
0x03C1E3D4: a0020012  and w0, w21, #1
0x03C1E3D8: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03C1E3DC: f65741a9  ldp x22, x21, [sp, #0x10]
0x03C1E3E0: fe0743f8  ldr x30, [sp], #0x30
0x03C1E3E4: c0035fd6  ret
0x03C1E3E8: 318ad597  bl #0x3180cac
0x03C1E3EC: 178bd597  bl #0x3181048

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1E3F0 | ContextualizedECS.Entity$$TryGetComponent<BornComponent>
; native signature: bool ContextualizedECS_Entity__TryGetComponent_BornComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_BornComponent_o* component, const MethodInfo_3C1E3F0* method);
; bytes=280 sha256=5c64dc88529f61eafb37334010c59976e7ac84a15bfc2cb811526d17561596f3 status=arm64_complete_bound indexed_start=True
0x03C1E3F0: fe0f1df8  str x30, [sp, #-0x30]!
0x03C1E3F4: f65701a9  stp x22, x21, [sp, #0x10]
0x03C1E3F8: f44f02a9  stp x20, x19, [sp, #0x20]
0x03C1E3FC: 481c40f9  ldr x8, [x2, #0x38]
0x03C1E400: f40302aa  mov x20, x2
0x03C1E404: f30301aa  mov x19, x1
0x03C1E408: f50300aa  mov x21, x0
0x03C1E40C: 680100b5  cbnz x8, #0x3c1e438
0x03C1E410: c0d201f0  adrp x0, #0x7679000
0x03C1E414: 003046f9  ldr x0, [x0, #0xc60]
0x03C1E418: 8089d597  bl #0x3180a18
0x03C1E41C: 80d10190  adrp x0, #0x764e000
0x03C1E420: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1E424: 7d89d597  bl #0x3180a18
0x03C1E428: 881e40f9  ldr x8, [x20, #0x38]
0x03C1E42C: 680000b5  cbnz x8, #0x3c1e438
0x03C1E430: e00314aa  mov x0, x20
0x03C1E434: 11e1d497  bl #0x3156878
0x03C1E438: ff0700f9  str xzr, [sp, #8]
0x03C1E43C: 7f0200f9  str xzr, [x19]
0x03C1E440: 88d10190  adrp x8, #0x764e000
0x03C1E444: 08ad42f9  ldr x8, [x8, #0x558]
0x03C1E448: b50a40f9  ldr x21, [x21, #0x10]
0x03C1E44C: 000140f9  ldr x0, [x8]
0x03C1E450: 881e40f9  ldr x8, [x20, #0x38]
0x03C1E454: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1E458: 160940f9  ldr x22, [x8, #0x10]
0x03C1E45C: 49000035  cbnz w9, #0x3c1e464
0x03C1E460: cb89d597  bl #0x3180b8c
0x03C1E464: e00316aa  mov x0, x22
0x03C1E468: e1031faa  mov x1, xzr
0x03C1E46C: 561b6a94  bl #0x56a51c4
0x03C1E470: 950400b4  cbz x21, #0x3c1e500
0x03C1E474: c8d201f0  adrp x8, #0x7679000
0x03C1E478: 083146f9  ldr x8, [x8, #0xc60]
0x03C1E47C: e10300aa  mov x1, x0
0x03C1E480: e2230091  add x2, sp, #8
0x03C1E484: e00315aa  mov x0, x21
0x03C1E488: 030140f9  ldr x3, [x8]
0x03C1E48C: 09194b94  bl #0x4ee48b0
0x03C1E490: f503002a  mov w21, w0
0x03C1E494: c0020036  tbz w0, #0, #0x3c1e4ec
0x03C1E498: 881e40f9  ldr x8, [x20, #0x38]
0x03C1E49C: f40740f9  ldr x20, [sp, #8]
0x03C1E4A0: 010540f9  ldr x1, [x8, #8]
0x03C1E4A4: 28d44439  ldrb w8, [x1, #0x135]
0x03C1E4A8: 88000037  tbnz w8, #0, #0x3c1e4b8
0x03C1E4AC: e00301aa  mov x0, x1
0x03C1E4B0: dbe0d497  bl #0x315681c
0x03C1E4B4: e10300aa  mov x1, x0
0x03C1E4B8: 540200b4  cbz x20, #0x3c1e500
0x03C1E4BC: 880240f9  ldr x8, [x20]
0x03C1E4C0: 292040f9  ldr x9, [x1, #0x40]
0x03C1E4C4: e00314aa  mov x0, x20
0x03C1E4C8: 082140f9  ldr x8, [x8, #0x40]
0x03C1E4CC: 1f0109eb  cmp x8, x9
0x03C1E4D0: a1010054  b.ne #0x3c1e504
0x03C1E4D4: b189d597  bl #0x3180b98
0x03C1E4D8: 080040f9  ldr x8, [x0]
0x03C1E4DC: e00313aa  mov x0, x19
0x03C1E4E0: e1031faa  mov x1, xzr
0x03C1E4E4: 680200f9  str x8, [x19]
0x03C1E4E8: 3789d597  bl #0x31809c4
0x03C1E4EC: a0020012  and w0, w21, #1
0x03C1E4F0: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03C1E4F4: f65741a9  ldp x22, x21, [sp, #0x10]
0x03C1E4F8: fe0743f8  ldr x30, [sp], #0x30
0x03C1E4FC: c0035fd6  ret
0x03C1E500: eb89d597  bl #0x3180cac
0x03C1E504: d18ad597  bl #0x3181048

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1E508 | ContextualizedECS.Entity$$TryGetComponent<BoxComponent>
; native signature: bool ContextualizedECS_Entity__TryGetComponent_BoxComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_BoxComponent_o* component, const MethodInfo_3C1E508* method);
; bytes=280 sha256=49223a8b1eaa679880f2f29213835681779cfed0deca53620a14dd5eaf5f118e status=arm64_complete_bound indexed_start=True
0x03C1E508: fe0f1df8  str x30, [sp, #-0x30]!
0x03C1E50C: f65701a9  stp x22, x21, [sp, #0x10]
0x03C1E510: f44f02a9  stp x20, x19, [sp, #0x20]
0x03C1E514: 481c40f9  ldr x8, [x2, #0x38]
0x03C1E518: f40302aa  mov x20, x2
0x03C1E51C: f30301aa  mov x19, x1
0x03C1E520: f50300aa  mov x21, x0
0x03C1E524: 680100b5  cbnz x8, #0x3c1e550
0x03C1E528: c0d201f0  adrp x0, #0x7679000
0x03C1E52C: 003046f9  ldr x0, [x0, #0xc60]
0x03C1E530: 3a89d597  bl #0x3180a18
0x03C1E534: 80d10190  adrp x0, #0x764e000
0x03C1E538: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1E53C: 3789d597  bl #0x3180a18
0x03C1E540: 881e40f9  ldr x8, [x20, #0x38]
0x03C1E544: 680000b5  cbnz x8, #0x3c1e550
0x03C1E548: e00314aa  mov x0, x20
0x03C1E54C: cbe0d497  bl #0x3156878
0x03C1E550: ff0700f9  str xzr, [sp, #8]
0x03C1E554: 7f7e00a9  stp xzr, xzr, [x19]
0x03C1E558: 7f1200b9  str wzr, [x19, #0x10]
0x03C1E55C: 88d10190  adrp x8, #0x764e000
0x03C1E560: 08ad42f9  ldr x8, [x8, #0x558]
0x03C1E564: b50a40f9  ldr x21, [x21, #0x10]
0x03C1E568: 000140f9  ldr x0, [x8]
0x03C1E56C: 881e40f9  ldr x8, [x20, #0x38]
0x03C1E570: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1E574: 160940f9  ldr x22, [x8, #0x10]
0x03C1E578: 49000035  cbnz w9, #0x3c1e580
0x03C1E57C: 8489d597  bl #0x3180b8c
0x03C1E580: e00316aa  mov x0, x22
0x03C1E584: e1031faa  mov x1, xzr
0x03C1E588: 0f1b6a94  bl #0x56a51c4
0x03C1E58C: 750400b4  cbz x21, #0x3c1e618
0x03C1E590: c8d201f0  adrp x8, #0x7679000
0x03C1E594: 083146f9  ldr x8, [x8, #0xc60]
0x03C1E598: e10300aa  mov x1, x0
0x03C1E59C: e2230091  add x2, sp, #8
0x03C1E5A0: e00315aa  mov x0, x21
0x03C1E5A4: 030140f9  ldr x3, [x8]
0x03C1E5A8: c2184b94  bl #0x4ee48b0
0x03C1E5AC: f503002a  mov w21, w0
0x03C1E5B0: a0020036  tbz w0, #0, #0x3c1e604
0x03C1E5B4: 881e40f9  ldr x8, [x20, #0x38]
0x03C1E5B8: f40740f9  ldr x20, [sp, #8]
0x03C1E5BC: 010540f9  ldr x1, [x8, #8]
0x03C1E5C0: 28d44439  ldrb w8, [x1, #0x135]
0x03C1E5C4: 88000037  tbnz w8, #0, #0x3c1e5d4
0x03C1E5C8: e00301aa  mov x0, x1
0x03C1E5CC: 94e0d497  bl #0x315681c
0x03C1E5D0: e10300aa  mov x1, x0
0x03C1E5D4: 340200b4  cbz x20, #0x3c1e618
0x03C1E5D8: 880240f9  ldr x8, [x20]
0x03C1E5DC: 292040f9  ldr x9, [x1, #0x40]
0x03C1E5E0: e00314aa  mov x0, x20
0x03C1E5E4: 082140f9  ldr x8, [x8, #0x40]
0x03C1E5E8: 1f0109eb  cmp x8, x9
0x03C1E5EC: 81010054  b.ne #0x3c1e61c
0x03C1E5F0: 6a89d597  bl #0x3180b98
0x03C1E5F4: 0000c03d  ldr q0, [x0]
0x03C1E5F8: 081040b9  ldr w8, [x0, #0x10]
0x03C1E5FC: 6002803d  str q0, [x19]
0x03C1E600: 681200b9  str w8, [x19, #0x10]
0x03C1E604: a0020012  and w0, w21, #1
0x03C1E608: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03C1E60C: f65741a9  ldp x22, x21, [sp, #0x10]
0x03C1E610: fe0743f8  ldr x30, [sp], #0x30
0x03C1E614: c0035fd6  ret
0x03C1E618: a589d597  bl #0x3180cac
0x03C1E61C: 8b8ad597  bl #0x3181048

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1E620 | ContextualizedECS.Entity$$TryGetComponent<ChargeableComponent>
; native signature: bool ContextualizedECS_Entity__TryGetComponent_ChargeableComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_ChargeableComponent_o* component, const MethodInfo_3C1E620* method);
; bytes=268 sha256=64a1a7df5568a71670f781f6cd8666bc21a071c5b6e412f5e1855b84ae90c58a status=arm64_complete_bound indexed_start=True
0x03C1E620: fe0f1df8  str x30, [sp, #-0x30]!
0x03C1E624: f65701a9  stp x22, x21, [sp, #0x10]
0x03C1E628: f44f02a9  stp x20, x19, [sp, #0x20]
0x03C1E62C: 481c40f9  ldr x8, [x2, #0x38]
0x03C1E630: f40302aa  mov x20, x2
0x03C1E634: f30301aa  mov x19, x1
0x03C1E638: f50300aa  mov x21, x0
0x03C1E63C: 680100b5  cbnz x8, #0x3c1e668
0x03C1E640: c0d201f0  adrp x0, #0x7679000
0x03C1E644: 003046f9  ldr x0, [x0, #0xc60]
0x03C1E648: f488d597  bl #0x3180a18
0x03C1E64C: 80d10190  adrp x0, #0x764e000
0x03C1E650: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1E654: f188d597  bl #0x3180a18
0x03C1E658: 881e40f9  ldr x8, [x20, #0x38]
0x03C1E65C: 680000b5  cbnz x8, #0x3c1e668
0x03C1E660: e00314aa  mov x0, x20
0x03C1E664: 85e0d497  bl #0x3156878
0x03C1E668: ff0700f9  str xzr, [sp, #8]
0x03C1E66C: 7f0200f9  str xzr, [x19]
0x03C1E670: 88d10190  adrp x8, #0x764e000
0x03C1E674: 08ad42f9  ldr x8, [x8, #0x558]
0x03C1E678: b50a40f9  ldr x21, [x21, #0x10]
0x03C1E67C: 000140f9  ldr x0, [x8]
0x03C1E680: 881e40f9  ldr x8, [x20, #0x38]
0x03C1E684: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1E688: 160940f9  ldr x22, [x8, #0x10]
0x03C1E68C: 49000035  cbnz w9, #0x3c1e694
0x03C1E690: 3f89d597  bl #0x3180b8c
0x03C1E694: e00316aa  mov x0, x22
0x03C1E698: e1031faa  mov x1, xzr
0x03C1E69C: ca1a6a94  bl #0x56a51c4
0x03C1E6A0: 350400b4  cbz x21, #0x3c1e724
0x03C1E6A4: c8d201f0  adrp x8, #0x7679000
0x03C1E6A8: 083146f9  ldr x8, [x8, #0xc60]
0x03C1E6AC: e10300aa  mov x1, x0
0x03C1E6B0: e2230091  add x2, sp, #8
0x03C1E6B4: e00315aa  mov x0, x21
0x03C1E6B8: 030140f9  ldr x3, [x8]
0x03C1E6BC: 7d184b94  bl #0x4ee48b0
0x03C1E6C0: f503002a  mov w21, w0
0x03C1E6C4: 60020036  tbz w0, #0, #0x3c1e710
0x03C1E6C8: 881e40f9  ldr x8, [x20, #0x38]
0x03C1E6CC: f40740f9  ldr x20, [sp, #8]
0x03C1E6D0: 010540f9  ldr x1, [x8, #8]
0x03C1E6D4: 28d44439  ldrb w8, [x1, #0x135]
0x03C1E6D8: 88000037  tbnz w8, #0, #0x3c1e6e8
0x03C1E6DC: e00301aa  mov x0, x1
0x03C1E6E0: 4fe0d497  bl #0x315681c
0x03C1E6E4: e10300aa  mov x1, x0
0x03C1E6E8: f40100b4  cbz x20, #0x3c1e724
0x03C1E6EC: 880240f9  ldr x8, [x20]
0x03C1E6F0: 292040f9  ldr x9, [x1, #0x40]
0x03C1E6F4: e00314aa  mov x0, x20
0x03C1E6F8: 082140f9  ldr x8, [x8, #0x40]
0x03C1E6FC: 1f0109eb  cmp x8, x9
0x03C1E700: 41010054  b.ne #0x3c1e728
0x03C1E704: 2589d597  bl #0x3180b98
0x03C1E708: 080040f9  ldr x8, [x0]
0x03C1E70C: 680200f9  str x8, [x19]
0x03C1E710: a0020012  and w0, w21, #1
0x03C1E714: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03C1E718: f65741a9  ldp x22, x21, [sp, #0x10]
0x03C1E71C: fe0743f8  ldr x30, [sp], #0x30
0x03C1E720: c0035fd6  ret
0x03C1E724: 6289d597  bl #0x3180cac
0x03C1E728: 488ad597  bl #0x3181048

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1E72C | ContextualizedECS.Entity$$TryGetComponent<CollectableComponent>
; native signature: bool ContextualizedECS_Entity__TryGetComponent_CollectableComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_CollectableComponent_o* component, const MethodInfo_3C1E72C* method);
; bytes=292 sha256=d6d77ea53cd6fe21bbca06820c32291c58425a7c1ac54b9db7e4d8c987b56740 status=arm64_complete_bound indexed_start=True
0x03C1E72C: fe0f1df8  str x30, [sp, #-0x30]!
0x03C1E730: f65701a9  stp x22, x21, [sp, #0x10]
0x03C1E734: f44f02a9  stp x20, x19, [sp, #0x20]
0x03C1E738: 481c40f9  ldr x8, [x2, #0x38]
0x03C1E73C: f40302aa  mov x20, x2
0x03C1E740: f30301aa  mov x19, x1
0x03C1E744: f50300aa  mov x21, x0
0x03C1E748: 680100b5  cbnz x8, #0x3c1e774
0x03C1E74C: c0d201f0  adrp x0, #0x7679000
0x03C1E750: 003046f9  ldr x0, [x0, #0xc60]
0x03C1E754: b188d597  bl #0x3180a18
0x03C1E758: 80d10190  adrp x0, #0x764e000
0x03C1E75C: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1E760: ae88d597  bl #0x3180a18
0x03C1E764: 881e40f9  ldr x8, [x20, #0x38]
0x03C1E768: 680000b5  cbnz x8, #0x3c1e774
0x03C1E76C: e00314aa  mov x0, x20
0x03C1E770: 42e0d497  bl #0x3156878
0x03C1E774: ff0700f9  str xzr, [sp, #8]
0x03C1E778: 7f7e00a9  stp xzr, xzr, [x19]
0x03C1E77C: 7f0a00f9  str xzr, [x19, #0x10]
0x03C1E780: 88d10190  adrp x8, #0x764e000
0x03C1E784: 08ad42f9  ldr x8, [x8, #0x558]
0x03C1E788: b50a40f9  ldr x21, [x21, #0x10]
0x03C1E78C: 000140f9  ldr x0, [x8]
0x03C1E790: 881e40f9  ldr x8, [x20, #0x38]
0x03C1E794: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1E798: 160940f9  ldr x22, [x8, #0x10]
0x03C1E79C: 49000035  cbnz w9, #0x3c1e7a4
0x03C1E7A0: fb88d597  bl #0x3180b8c
0x03C1E7A4: e00316aa  mov x0, x22
0x03C1E7A8: e1031faa  mov x1, xzr
0x03C1E7AC: 861a6a94  bl #0x56a51c4
0x03C1E7B0: d50400b4  cbz x21, #0x3c1e848
0x03C1E7B4: c8d201f0  adrp x8, #0x7679000
0x03C1E7B8: 083146f9  ldr x8, [x8, #0xc60]
0x03C1E7BC: e10300aa  mov x1, x0
0x03C1E7C0: e2230091  add x2, sp, #8
0x03C1E7C4: e00315aa  mov x0, x21
0x03C1E7C8: 030140f9  ldr x3, [x8]
0x03C1E7CC: 39184b94  bl #0x4ee48b0
0x03C1E7D0: f503002a  mov w21, w0
0x03C1E7D4: 00030036  tbz w0, #0, #0x3c1e834
0x03C1E7D8: 881e40f9  ldr x8, [x20, #0x38]
0x03C1E7DC: f40740f9  ldr x20, [sp, #8]
0x03C1E7E0: 010540f9  ldr x1, [x8, #8]
0x03C1E7E4: 28d44439  ldrb w8, [x1, #0x135]
0x03C1E7E8: 88000037  tbnz w8, #0, #0x3c1e7f8
0x03C1E7EC: e00301aa  mov x0, x1
0x03C1E7F0: 0be0d497  bl #0x315681c
0x03C1E7F4: e10300aa  mov x1, x0
0x03C1E7F8: 940200b4  cbz x20, #0x3c1e848
0x03C1E7FC: 880240f9  ldr x8, [x20]
0x03C1E800: 292040f9  ldr x9, [x1, #0x40]
0x03C1E804: e00314aa  mov x0, x20
0x03C1E808: 082140f9  ldr x8, [x8, #0x40]
0x03C1E80C: 1f0109eb  cmp x8, x9
0x03C1E810: e1010054  b.ne #0x3c1e84c
0x03C1E814: e188d597  bl #0x3180b98
0x03C1E818: 0000c03d  ldr q0, [x0]
0x03C1E81C: 080840f9  ldr x8, [x0, #0x10]
0x03C1E820: e00313aa  mov x0, x19
0x03C1E824: e1031faa  mov x1, xzr
0x03C1E828: 6002803d  str q0, [x19]
0x03C1E82C: 680a00f9  str x8, [x19, #0x10]
0x03C1E830: 6588d597  bl #0x31809c4
0x03C1E834: a0020012  and w0, w21, #1
0x03C1E838: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03C1E83C: f65741a9  ldp x22, x21, [sp, #0x10]
0x03C1E840: fe0743f8  ldr x30, [sp], #0x30
0x03C1E844: c0035fd6  ret
0x03C1E848: 1989d597  bl #0x3180cac
0x03C1E84C: ff89d597  bl #0x3181048

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1E850 | ContextualizedECS.Entity$$TryGetComponent<ConfirmedItemsCombinationComponent>
; native signature: bool ContextualizedECS_Entity__TryGetComponent_ConfirmedItemsCombinationComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_ConfirmedItemsCombinationComponent_o* component, const MethodInfo_3C1E850* method);
; bytes=268 sha256=50418b04cea1e095fb3a58dee98e4ca5d127e8f5c6dd72e1c505c11687ff3eaa status=arm64_complete_bound indexed_start=True
0x03C1E850: fe0f1df8  str x30, [sp, #-0x30]!
0x03C1E854: f65701a9  stp x22, x21, [sp, #0x10]
0x03C1E858: f44f02a9  stp x20, x19, [sp, #0x20]
0x03C1E85C: 481c40f9  ldr x8, [x2, #0x38]
0x03C1E860: f40302aa  mov x20, x2
0x03C1E864: f30301aa  mov x19, x1
0x03C1E868: f50300aa  mov x21, x0
0x03C1E86C: 680100b5  cbnz x8, #0x3c1e898
0x03C1E870: c0d201f0  adrp x0, #0x7679000
0x03C1E874: 003046f9  ldr x0, [x0, #0xc60]
0x03C1E878: 6888d597  bl #0x3180a18
0x03C1E87C: 80d10190  adrp x0, #0x764e000
0x03C1E880: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1E884: 6588d597  bl #0x3180a18
0x03C1E888: 881e40f9  ldr x8, [x20, #0x38]
0x03C1E88C: 680000b5  cbnz x8, #0x3c1e898
0x03C1E890: e00314aa  mov x0, x20
0x03C1E894: f9dfd497  bl #0x3156878
0x03C1E898: ff0700f9  str xzr, [sp, #8]
0x03C1E89C: 7f0200b9  str wzr, [x19]
0x03C1E8A0: 88d10190  adrp x8, #0x764e000
0x03C1E8A4: 08ad42f9  ldr x8, [x8, #0x558]
0x03C1E8A8: b50a40f9  ldr x21, [x21, #0x10]
0x03C1E8AC: 000140f9  ldr x0, [x8]
0x03C1E8B0: 881e40f9  ldr x8, [x20, #0x38]
0x03C1E8B4: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1E8B8: 160940f9  ldr x22, [x8, #0x10]
0x03C1E8BC: 49000035  cbnz w9, #0x3c1e8c4
0x03C1E8C0: b388d597  bl #0x3180b8c
0x03C1E8C4: e00316aa  mov x0, x22
0x03C1E8C8: e1031faa  mov x1, xzr
0x03C1E8CC: 3e1a6a94  bl #0x56a51c4
0x03C1E8D0: 350400b4  cbz x21, #0x3c1e954
0x03C1E8D4: c8d201f0  adrp x8, #0x7679000
0x03C1E8D8: 083146f9  ldr x8, [x8, #0xc60]
0x03C1E8DC: e10300aa  mov x1, x0
0x03C1E8E0: e2230091  add x2, sp, #8
0x03C1E8E4: e00315aa  mov x0, x21
0x03C1E8E8: 030140f9  ldr x3, [x8]
0x03C1E8EC: f1174b94  bl #0x4ee48b0
0x03C1E8F0: f503002a  mov w21, w0
0x03C1E8F4: 60020036  tbz w0, #0, #0x3c1e940
0x03C1E8F8: 881e40f9  ldr x8, [x20, #0x38]
0x03C1E8FC: f40740f9  ldr x20, [sp, #8]
0x03C1E900: 010540f9  ldr x1, [x8, #8]
0x03C1E904: 28d44439  ldrb w8, [x1, #0x135]
0x03C1E908: 88000037  tbnz w8, #0, #0x3c1e918
0x03C1E90C: e00301aa  mov x0, x1
0x03C1E910: c3dfd497  bl #0x315681c
0x03C1E914: e10300aa  mov x1, x0
0x03C1E918: f40100b4  cbz x20, #0x3c1e954
0x03C1E91C: 880240f9  ldr x8, [x20]
0x03C1E920: 292040f9  ldr x9, [x1, #0x40]
0x03C1E924: e00314aa  mov x0, x20
0x03C1E928: 082140f9  ldr x8, [x8, #0x40]
0x03C1E92C: 1f0109eb  cmp x8, x9
0x03C1E930: 41010054  b.ne #0x3c1e958
0x03C1E934: 9988d597  bl #0x3180b98
0x03C1E938: 080040b9  ldr w8, [x0]
0x03C1E93C: 680200b9  str w8, [x19]
0x03C1E940: a0020012  and w0, w21, #1
0x03C1E944: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03C1E948: f65741a9  ldp x22, x21, [sp, #0x10]
0x03C1E94C: fe0743f8  ldr x30, [sp], #0x30
0x03C1E950: c0035fd6  ret
0x03C1E954: d688d597  bl #0x3180cac
0x03C1E958: bc89d597  bl #0x3181048

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1E95C | ContextualizedECS.Entity$$TryGetComponent<DeadComponent>
; native signature: bool ContextualizedECS_Entity__TryGetComponent_DeadComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_DeadComponent_o* component, const MethodInfo_3C1E95C* method);
; bytes=268 sha256=821a572d895dd74209b4844f13560792fd6d69a2105cb811710613ba4047347c status=arm64_complete_bound indexed_start=True
0x03C1E95C: fe0f1df8  str x30, [sp, #-0x30]!
0x03C1E960: f65701a9  stp x22, x21, [sp, #0x10]
0x03C1E964: f44f02a9  stp x20, x19, [sp, #0x20]
0x03C1E968: 481c40f9  ldr x8, [x2, #0x38]
0x03C1E96C: f40302aa  mov x20, x2
0x03C1E970: f30301aa  mov x19, x1
0x03C1E974: f50300aa  mov x21, x0
0x03C1E978: 680100b5  cbnz x8, #0x3c1e9a4
0x03C1E97C: c0d201f0  adrp x0, #0x7679000
0x03C1E980: 003046f9  ldr x0, [x0, #0xc60]
0x03C1E984: 2588d597  bl #0x3180a18
0x03C1E988: 80d10190  adrp x0, #0x764e000
0x03C1E98C: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1E990: 2288d597  bl #0x3180a18
0x03C1E994: 881e40f9  ldr x8, [x20, #0x38]
0x03C1E998: 680000b5  cbnz x8, #0x3c1e9a4
0x03C1E99C: e00314aa  mov x0, x20
0x03C1E9A0: b6dfd497  bl #0x3156878
0x03C1E9A4: ff0700f9  str xzr, [sp, #8]
0x03C1E9A8: 7f020039  strb wzr, [x19]
0x03C1E9AC: 88d10190  adrp x8, #0x764e000
0x03C1E9B0: 08ad42f9  ldr x8, [x8, #0x558]
0x03C1E9B4: b50a40f9  ldr x21, [x21, #0x10]
0x03C1E9B8: 000140f9  ldr x0, [x8]
0x03C1E9BC: 881e40f9  ldr x8, [x20, #0x38]
0x03C1E9C0: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1E9C4: 160940f9  ldr x22, [x8, #0x10]
0x03C1E9C8: 49000035  cbnz w9, #0x3c1e9d0
0x03C1E9CC: 7088d597  bl #0x3180b8c
0x03C1E9D0: e00316aa  mov x0, x22
0x03C1E9D4: e1031faa  mov x1, xzr
0x03C1E9D8: fb196a94  bl #0x56a51c4
0x03C1E9DC: 350400b4  cbz x21, #0x3c1ea60
0x03C1E9E0: c8d201f0  adrp x8, #0x7679000
0x03C1E9E4: 083146f9  ldr x8, [x8, #0xc60]
0x03C1E9E8: e10300aa  mov x1, x0
0x03C1E9EC: e2230091  add x2, sp, #8
0x03C1E9F0: e00315aa  mov x0, x21
0x03C1E9F4: 030140f9  ldr x3, [x8]
0x03C1E9F8: ae174b94  bl #0x4ee48b0
0x03C1E9FC: f503002a  mov w21, w0
0x03C1EA00: 60020036  tbz w0, #0, #0x3c1ea4c
0x03C1EA04: 881e40f9  ldr x8, [x20, #0x38]
0x03C1EA08: f40740f9  ldr x20, [sp, #8]
0x03C1EA0C: 010540f9  ldr x1, [x8, #8]
0x03C1EA10: 28d44439  ldrb w8, [x1, #0x135]
0x03C1EA14: 88000037  tbnz w8, #0, #0x3c1ea24
0x03C1EA18: e00301aa  mov x0, x1
0x03C1EA1C: 80dfd497  bl #0x315681c
0x03C1EA20: e10300aa  mov x1, x0
0x03C1EA24: f40100b4  cbz x20, #0x3c1ea60
0x03C1EA28: 880240f9  ldr x8, [x20]
0x03C1EA2C: 292040f9  ldr x9, [x1, #0x40]
0x03C1EA30: e00314aa  mov x0, x20
0x03C1EA34: 082140f9  ldr x8, [x8, #0x40]
0x03C1EA38: 1f0109eb  cmp x8, x9
0x03C1EA3C: 41010054  b.ne #0x3c1ea64
0x03C1EA40: 5688d597  bl #0x3180b98
0x03C1EA44: 08004039  ldrb w8, [x0]
0x03C1EA48: 68020039  strb w8, [x19]
0x03C1EA4C: a0020012  and w0, w21, #1
0x03C1EA50: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03C1EA54: f65741a9  ldp x22, x21, [sp, #0x10]
0x03C1EA58: fe0743f8  ldr x30, [sp], #0x30
0x03C1EA5C: c0035fd6  ret
0x03C1EA60: 9388d597  bl #0x3180cac
0x03C1EA64: 7989d597  bl #0x3181048

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1EA68 | ContextualizedECS.Entity$$TryGetComponent<DynamicItemConfigComponent>
; native signature: bool ContextualizedECS_Entity__TryGetComponent_DynamicItemConfigComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_DynamicItemConfigComponent_o* component, const MethodInfo_3C1EA68* method);
; bytes=292 sha256=d9abe4354e10102f04d9838ba4f6c339bf2ed3a9626ce367928c87f393f96e6d status=arm64_complete_bound indexed_start=True
0x03C1EA68: fe0f1df8  str x30, [sp, #-0x30]!
0x03C1EA6C: f65701a9  stp x22, x21, [sp, #0x10]
0x03C1EA70: f44f02a9  stp x20, x19, [sp, #0x20]
0x03C1EA74: 481c40f9  ldr x8, [x2, #0x38]
0x03C1EA78: f40302aa  mov x20, x2
0x03C1EA7C: f30301aa  mov x19, x1
0x03C1EA80: f50300aa  mov x21, x0
0x03C1EA84: 680100b5  cbnz x8, #0x3c1eab0
0x03C1EA88: c0d201f0  adrp x0, #0x7679000
0x03C1EA8C: 003046f9  ldr x0, [x0, #0xc60]
0x03C1EA90: e287d597  bl #0x3180a18
0x03C1EA94: 80d10190  adrp x0, #0x764e000
0x03C1EA98: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1EA9C: df87d597  bl #0x3180a18
0x03C1EAA0: 881e40f9  ldr x8, [x20, #0x38]
0x03C1EAA4: 680000b5  cbnz x8, #0x3c1eab0
0x03C1EAA8: e00314aa  mov x0, x20
0x03C1EAAC: 73dfd497  bl #0x3156878
0x03C1EAB0: ff0700f9  str xzr, [sp, #8]
0x03C1EAB4: 7f7e00a9  stp xzr, xzr, [x19]
0x03C1EAB8: 7f0a00f9  str xzr, [x19, #0x10]
0x03C1EABC: 88d10190  adrp x8, #0x764e000
0x03C1EAC0: 08ad42f9  ldr x8, [x8, #0x558]
0x03C1EAC4: b50a40f9  ldr x21, [x21, #0x10]
0x03C1EAC8: 000140f9  ldr x0, [x8]
0x03C1EACC: 881e40f9  ldr x8, [x20, #0x38]
0x03C1EAD0: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1EAD4: 160940f9  ldr x22, [x8, #0x10]
0x03C1EAD8: 49000035  cbnz w9, #0x3c1eae0
0x03C1EADC: 2c88d597  bl #0x3180b8c
0x03C1EAE0: e00316aa  mov x0, x22
0x03C1EAE4: e1031faa  mov x1, xzr
0x03C1EAE8: b7196a94  bl #0x56a51c4
0x03C1EAEC: d50400b4  cbz x21, #0x3c1eb84
0x03C1EAF0: c8d201f0  adrp x8, #0x7679000
0x03C1EAF4: 083146f9  ldr x8, [x8, #0xc60]
0x03C1EAF8: e10300aa  mov x1, x0
0x03C1EAFC: e2230091  add x2, sp, #8
0x03C1EB00: e00315aa  mov x0, x21
0x03C1EB04: 030140f9  ldr x3, [x8]
0x03C1EB08: 6a174b94  bl #0x4ee48b0
0x03C1EB0C: f503002a  mov w21, w0
0x03C1EB10: 00030036  tbz w0, #0, #0x3c1eb70
0x03C1EB14: 881e40f9  ldr x8, [x20, #0x38]
0x03C1EB18: f40740f9  ldr x20, [sp, #8]
0x03C1EB1C: 010540f9  ldr x1, [x8, #8]
0x03C1EB20: 28d44439  ldrb w8, [x1, #0x135]
0x03C1EB24: 88000037  tbnz w8, #0, #0x3c1eb34
0x03C1EB28: e00301aa  mov x0, x1
0x03C1EB2C: 3cdfd497  bl #0x315681c
0x03C1EB30: e10300aa  mov x1, x0
0x03C1EB34: 940200b4  cbz x20, #0x3c1eb84
0x03C1EB38: 880240f9  ldr x8, [x20]
0x03C1EB3C: 292040f9  ldr x9, [x1, #0x40]
0x03C1EB40: e00314aa  mov x0, x20
0x03C1EB44: 082140f9  ldr x8, [x8, #0x40]
0x03C1EB48: 1f0109eb  cmp x8, x9
0x03C1EB4C: e1010054  b.ne #0x3c1eb88
0x03C1EB50: 1288d597  bl #0x3180b98
0x03C1EB54: 0000c03d  ldr q0, [x0]
0x03C1EB58: 080840f9  ldr x8, [x0, #0x10]
0x03C1EB5C: e00313aa  mov x0, x19
0x03C1EB60: e1031faa  mov x1, xzr
0x03C1EB64: 6002803d  str q0, [x19]
0x03C1EB68: 680a00f9  str x8, [x19, #0x10]
0x03C1EB6C: 9687d597  bl #0x31809c4
0x03C1EB70: a0020012  and w0, w21, #1
0x03C1EB74: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03C1EB78: f65741a9  ldp x22, x21, [sp, #0x10]
0x03C1EB7C: fe0743f8  ldr x30, [sp], #0x30
0x03C1EB80: c0035fd6  ret
0x03C1EB84: 4a88d597  bl #0x3180cac
0x03C1EB88: 3089d597  bl #0x3181048

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1EB8C | ContextualizedECS.Entity$$TryGetComponent<ExpendableComponent>
; native signature: bool ContextualizedECS_Entity__TryGetComponent_ExpendableComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_ExpendableComponent_o* component, const MethodInfo_3C1EB8C* method);
; bytes=296 sha256=f3d0d3cb537e2058513a71e39b45b66edf77c0be56b3b8567d132f5409be72ed status=arm64_complete_bound indexed_start=True
0x03C1EB8C: fe0f1df8  str x30, [sp, #-0x30]!
0x03C1EB90: f65701a9  stp x22, x21, [sp, #0x10]
0x03C1EB94: f44f02a9  stp x20, x19, [sp, #0x20]
0x03C1EB98: 481c40f9  ldr x8, [x2, #0x38]
0x03C1EB9C: f40302aa  mov x20, x2
0x03C1EBA0: f30301aa  mov x19, x1
0x03C1EBA4: f50300aa  mov x21, x0
0x03C1EBA8: 680100b5  cbnz x8, #0x3c1ebd4
0x03C1EBAC: c0d201f0  adrp x0, #0x7679000
0x03C1EBB0: 003046f9  ldr x0, [x0, #0xc60]
0x03C1EBB4: 9987d597  bl #0x3180a18
0x03C1EBB8: 80d10190  adrp x0, #0x764e000
0x03C1EBBC: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1EBC0: 9687d597  bl #0x3180a18
0x03C1EBC4: 881e40f9  ldr x8, [x20, #0x38]
0x03C1EBC8: 680000b5  cbnz x8, #0x3c1ebd4
0x03C1EBCC: e00314aa  mov x0, x20
0x03C1EBD0: 2adfd497  bl #0x3156878
0x03C1EBD4: 00e4006f  movi v0.2d, #0000000000000000
0x03C1EBD8: ff0700f9  str xzr, [sp, #8]
0x03C1EBDC: 608200ad  stp q0, q0, [x19, #0x10]
0x03C1EBE0: 6002803d  str q0, [x19]
0x03C1EBE4: 88d10190  adrp x8, #0x764e000
0x03C1EBE8: 08ad42f9  ldr x8, [x8, #0x558]
0x03C1EBEC: b50a40f9  ldr x21, [x21, #0x10]
0x03C1EBF0: 000140f9  ldr x0, [x8]
0x03C1EBF4: 881e40f9  ldr x8, [x20, #0x38]
0x03C1EBF8: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1EBFC: 160940f9  ldr x22, [x8, #0x10]
0x03C1EC00: 49000035  cbnz w9, #0x3c1ec08
0x03C1EC04: e287d597  bl #0x3180b8c
0x03C1EC08: e00316aa  mov x0, x22
0x03C1EC0C: e1031faa  mov x1, xzr
0x03C1EC10: 6d196a94  bl #0x56a51c4
0x03C1EC14: d50400b4  cbz x21, #0x3c1ecac
0x03C1EC18: c8d201f0  adrp x8, #0x7679000
0x03C1EC1C: 083146f9  ldr x8, [x8, #0xc60]
0x03C1EC20: e10300aa  mov x1, x0
0x03C1EC24: e2230091  add x2, sp, #8
0x03C1EC28: e00315aa  mov x0, x21
0x03C1EC2C: 030140f9  ldr x3, [x8]
0x03C1EC30: 20174b94  bl #0x4ee48b0
0x03C1EC34: f503002a  mov w21, w0
0x03C1EC38: 00030036  tbz w0, #0, #0x3c1ec98
0x03C1EC3C: 881e40f9  ldr x8, [x20, #0x38]
0x03C1EC40: f40740f9  ldr x20, [sp, #8]
0x03C1EC44: 010540f9  ldr x1, [x8, #8]
0x03C1EC48: 28d44439  ldrb w8, [x1, #0x135]
0x03C1EC4C: 88000037  tbnz w8, #0, #0x3c1ec5c
0x03C1EC50: e00301aa  mov x0, x1
0x03C1EC54: f2ded497  bl #0x315681c
0x03C1EC58: e10300aa  mov x1, x0
0x03C1EC5C: 940200b4  cbz x20, #0x3c1ecac
0x03C1EC60: 880240f9  ldr x8, [x20]
0x03C1EC64: 292040f9  ldr x9, [x1, #0x40]
0x03C1EC68: e00314aa  mov x0, x20
0x03C1EC6C: 082140f9  ldr x8, [x8, #0x40]
0x03C1EC70: 1f0109eb  cmp x8, x9
0x03C1EC74: e1010054  b.ne #0x3c1ecb0
0x03C1EC78: c887d597  bl #0x3180b98
0x03C1EC7C: 000440ad  ldp q0, q1, [x0]
0x03C1EC80: 0208c03d  ldr q2, [x0, #0x20]
0x03C1EC84: 60420091  add x0, x19, #0x10
0x03C1EC88: e1031faa  mov x1, xzr
0x03C1EC8C: 600600ad  stp q0, q1, [x19]
0x03C1EC90: 620a803d  str q2, [x19, #0x20]
0x03C1EC94: 4c87d597  bl #0x31809c4
0x03C1EC98: a0020012  and w0, w21, #1
0x03C1EC9C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03C1ECA0: f65741a9  ldp x22, x21, [sp, #0x10]
0x03C1ECA4: fe0743f8  ldr x30, [sp], #0x30
0x03C1ECA8: c0035fd6  ret
0x03C1ECAC: 0088d597  bl #0x3180cac
0x03C1ECB0: e688d597  bl #0x3181048

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1ECB4 | ContextualizedECS.Entity$$TryGetComponent<FeedingCombinationComponent>
; native signature: bool ContextualizedECS_Entity__TryGetComponent_FeedingCombinationComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_FeedingCombinationComponent_o* component, const MethodInfo_3C1ECB4* method);
; bytes=280 sha256=d07a3dde9af6f49dfa5cad4b0aa64ad750f11ae2df6a865bddc020ae556678e6 status=arm64_complete_bound indexed_start=True
0x03C1ECB4: fe0f1df8  str x30, [sp, #-0x30]!
0x03C1ECB8: f65701a9  stp x22, x21, [sp, #0x10]
0x03C1ECBC: f44f02a9  stp x20, x19, [sp, #0x20]
0x03C1ECC0: 481c40f9  ldr x8, [x2, #0x38]
0x03C1ECC4: f40302aa  mov x20, x2
0x03C1ECC8: f30301aa  mov x19, x1
0x03C1ECCC: f50300aa  mov x21, x0
0x03C1ECD0: 680100b5  cbnz x8, #0x3c1ecfc
0x03C1ECD4: c0d201f0  adrp x0, #0x7679000
0x03C1ECD8: 003046f9  ldr x0, [x0, #0xc60]
0x03C1ECDC: 4f87d597  bl #0x3180a18
0x03C1ECE0: 80d10190  adrp x0, #0x764e000
0x03C1ECE4: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1ECE8: 4c87d597  bl #0x3180a18
0x03C1ECEC: 881e40f9  ldr x8, [x20, #0x38]
0x03C1ECF0: 680000b5  cbnz x8, #0x3c1ecfc
0x03C1ECF4: e00314aa  mov x0, x20
0x03C1ECF8: e0ded497  bl #0x3156878
0x03C1ECFC: ff0700f9  str xzr, [sp, #8]
0x03C1ED00: 7f0200f9  str xzr, [x19]
0x03C1ED04: 88d10190  adrp x8, #0x764e000
0x03C1ED08: 08ad42f9  ldr x8, [x8, #0x558]
0x03C1ED0C: b50a40f9  ldr x21, [x21, #0x10]
0x03C1ED10: 000140f9  ldr x0, [x8]
0x03C1ED14: 881e40f9  ldr x8, [x20, #0x38]
0x03C1ED18: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1ED1C: 160940f9  ldr x22, [x8, #0x10]
0x03C1ED20: 49000035  cbnz w9, #0x3c1ed28
0x03C1ED24: 9a87d597  bl #0x3180b8c
0x03C1ED28: e00316aa  mov x0, x22
0x03C1ED2C: e1031faa  mov x1, xzr
0x03C1ED30: 25196a94  bl #0x56a51c4
0x03C1ED34: 950400b4  cbz x21, #0x3c1edc4
0x03C1ED38: c8d201f0  adrp x8, #0x7679000
0x03C1ED3C: 083146f9  ldr x8, [x8, #0xc60]
0x03C1ED40: e10300aa  mov x1, x0
0x03C1ED44: e2230091  add x2, sp, #8
0x03C1ED48: e00315aa  mov x0, x21
0x03C1ED4C: 030140f9  ldr x3, [x8]
0x03C1ED50: d8164b94  bl #0x4ee48b0
0x03C1ED54: f503002a  mov w21, w0
0x03C1ED58: c0020036  tbz w0, #0, #0x3c1edb0
0x03C1ED5C: 881e40f9  ldr x8, [x20, #0x38]
0x03C1ED60: f40740f9  ldr x20, [sp, #8]
0x03C1ED64: 010540f9  ldr x1, [x8, #8]
0x03C1ED68: 28d44439  ldrb w8, [x1, #0x135]
0x03C1ED6C: 88000037  tbnz w8, #0, #0x3c1ed7c
0x03C1ED70: e00301aa  mov x0, x1
0x03C1ED74: aaded497  bl #0x315681c
0x03C1ED78: e10300aa  mov x1, x0
0x03C1ED7C: 540200b4  cbz x20, #0x3c1edc4
0x03C1ED80: 880240f9  ldr x8, [x20]
0x03C1ED84: 292040f9  ldr x9, [x1, #0x40]
0x03C1ED88: e00314aa  mov x0, x20
0x03C1ED8C: 082140f9  ldr x8, [x8, #0x40]
0x03C1ED90: 1f0109eb  cmp x8, x9
0x03C1ED94: a1010054  b.ne #0x3c1edc8
0x03C1ED98: 8087d597  bl #0x3180b98
0x03C1ED9C: 080040f9  ldr x8, [x0]
0x03C1EDA0: e00313aa  mov x0, x19
0x03C1EDA4: e1031faa  mov x1, xzr
0x03C1EDA8: 680200f9  str x8, [x19]
0x03C1EDAC: 0687d597  bl #0x31809c4
0x03C1EDB0: a0020012  and w0, w21, #1
0x03C1EDB4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03C1EDB8: f65741a9  ldp x22, x21, [sp, #0x10]
0x03C1EDBC: fe0743f8  ldr x30, [sp], #0x30
0x03C1EDC0: c0035fd6  ret
0x03C1EDC4: ba87d597  bl #0x3180cac
0x03C1EDC8: a088d597  bl #0x3181048

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1EDCC | ContextualizedECS.Entity$$TryGetComponent<IdComponent>
; native signature: bool ContextualizedECS_Entity__TryGetComponent_IdComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_IdComponent_o* component, const MethodInfo_3C1EDCC* method);
; bytes=296 sha256=20adec7b5db6fe3c7f9c10f48caa627398c7607c2b8888b601ec8af2537f5f90 status=arm64_complete_bound indexed_start=True
0x03C1EDCC: fe0f1df8  str x30, [sp, #-0x30]!
0x03C1EDD0: f65701a9  stp x22, x21, [sp, #0x10]
0x03C1EDD4: f44f02a9  stp x20, x19, [sp, #0x20]
0x03C1EDD8: 481c40f9  ldr x8, [x2, #0x38]
0x03C1EDDC: f40302aa  mov x20, x2
0x03C1EDE0: f30301aa  mov x19, x1
0x03C1EDE4: f50300aa  mov x21, x0
0x03C1EDE8: 680100b5  cbnz x8, #0x3c1ee14
0x03C1EDEC: c0d201f0  adrp x0, #0x7679000
0x03C1EDF0: 003046f9  ldr x0, [x0, #0xc60]
0x03C1EDF4: 0987d597  bl #0x3180a18
0x03C1EDF8: 80d10190  adrp x0, #0x764e000
0x03C1EDFC: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1EE00: 0687d597  bl #0x3180a18
0x03C1EE04: 881e40f9  ldr x8, [x20, #0x38]
0x03C1EE08: 680000b5  cbnz x8, #0x3c1ee14
0x03C1EE0C: e00314aa  mov x0, x20
0x03C1EE10: 9aded497  bl #0x3156878
0x03C1EE14: 00e4006f  movi v0.2d, #0000000000000000
0x03C1EE18: ff0700f9  str xzr, [sp, #8]
0x03C1EE1C: 608200ad  stp q0, q0, [x19, #0x10]
0x03C1EE20: 6002803d  str q0, [x19]
0x03C1EE24: 88d10190  adrp x8, #0x764e000
0x03C1EE28: 08ad42f9  ldr x8, [x8, #0x558]
0x03C1EE2C: b50a40f9  ldr x21, [x21, #0x10]
0x03C1EE30: 000140f9  ldr x0, [x8]
0x03C1EE34: 881e40f9  ldr x8, [x20, #0x38]
0x03C1EE38: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1EE3C: 160940f9  ldr x22, [x8, #0x10]
0x03C1EE40: 49000035  cbnz w9, #0x3c1ee48
0x03C1EE44: 5287d597  bl #0x3180b8c
0x03C1EE48: e00316aa  mov x0, x22
0x03C1EE4C: e1031faa  mov x1, xzr
0x03C1EE50: dd186a94  bl #0x56a51c4
0x03C1EE54: d50400b4  cbz x21, #0x3c1eeec
0x03C1EE58: c8d201f0  adrp x8, #0x7679000
0x03C1EE5C: 083146f9  ldr x8, [x8, #0xc60]
0x03C1EE60: e10300aa  mov x1, x0
0x03C1EE64: e2230091  add x2, sp, #8
0x03C1EE68: e00315aa  mov x0, x21
0x03C1EE6C: 030140f9  ldr x3, [x8]
0x03C1EE70: 90164b94  bl #0x4ee48b0
0x03C1EE74: f503002a  mov w21, w0
0x03C1EE78: 00030036  tbz w0, #0, #0x3c1eed8
0x03C1EE7C: 881e40f9  ldr x8, [x20, #0x38]
0x03C1EE80: f40740f9  ldr x20, [sp, #8]
0x03C1EE84: 010540f9  ldr x1, [x8, #8]
0x03C1EE88: 28d44439  ldrb w8, [x1, #0x135]
0x03C1EE8C: 88000037  tbnz w8, #0, #0x3c1ee9c
0x03C1EE90: e00301aa  mov x0, x1
0x03C1EE94: 62ded497  bl #0x315681c
0x03C1EE98: e10300aa  mov x1, x0
0x03C1EE9C: 940200b4  cbz x20, #0x3c1eeec
0x03C1EEA0: 880240f9  ldr x8, [x20]
0x03C1EEA4: 292040f9  ldr x9, [x1, #0x40]
0x03C1EEA8: e00314aa  mov x0, x20
0x03C1EEAC: 082140f9  ldr x8, [x8, #0x40]
0x03C1EEB0: 1f0109eb  cmp x8, x9
0x03C1EEB4: e1010054  b.ne #0x3c1eef0
0x03C1EEB8: 3887d597  bl #0x3180b98
0x03C1EEBC: 000440ad  ldp q0, q1, [x0]
0x03C1EEC0: 0208c03d  ldr q2, [x0, #0x20]
0x03C1EEC4: e00313aa  mov x0, x19
0x03C1EEC8: e1031faa  mov x1, xzr
0x03C1EECC: 600600ad  stp q0, q1, [x19]
0x03C1EED0: 620a803d  str q2, [x19, #0x20]
0x03C1EED4: bc86d597  bl #0x31809c4
0x03C1EED8: a0020012  and w0, w21, #1
0x03C1EEDC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03C1EEE0: f65741a9  ldp x22, x21, [sp, #0x10]
0x03C1EEE4: fe0743f8  ldr x30, [sp], #0x30
0x03C1EEE8: c0035fd6  ret
0x03C1EEEC: 7087d597  bl #0x3180cac
0x03C1EEF0: 5688d597  bl #0x3181048

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1EEF4 | ContextualizedECS.Entity$$TryGetComponent<ImmediateToolComponent>
; native signature: bool ContextualizedECS_Entity__TryGetComponent_ImmediateToolComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_ImmediateToolComponent_o* component, const MethodInfo_3C1EEF4* method);
; bytes=292 sha256=c6b92bcf68113c7c3acf9017fd4944eac42d48e299424524ef3466640d58020d status=arm64_complete_bound indexed_start=True
0x03C1EEF4: fe0f1df8  str x30, [sp, #-0x30]!
0x03C1EEF8: f65701a9  stp x22, x21, [sp, #0x10]
0x03C1EEFC: f44f02a9  stp x20, x19, [sp, #0x20]
0x03C1EF00: 481c40f9  ldr x8, [x2, #0x38]
0x03C1EF04: f40302aa  mov x20, x2
0x03C1EF08: f30301aa  mov x19, x1
0x03C1EF0C: f50300aa  mov x21, x0
0x03C1EF10: 680100b5  cbnz x8, #0x3c1ef3c
0x03C1EF14: c0d201f0  adrp x0, #0x7679000
0x03C1EF18: 003046f9  ldr x0, [x0, #0xc60]
0x03C1EF1C: bf86d597  bl #0x3180a18
0x03C1EF20: 80d10190  adrp x0, #0x764e000
0x03C1EF24: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1EF28: bc86d597  bl #0x3180a18
0x03C1EF2C: 881e40f9  ldr x8, [x20, #0x38]
0x03C1EF30: 680000b5  cbnz x8, #0x3c1ef3c
0x03C1EF34: e00314aa  mov x0, x20
0x03C1EF38: 50ded497  bl #0x3156878
0x03C1EF3C: ff0700f9  str xzr, [sp, #8]
0x03C1EF40: 7f7e00a9  stp xzr, xzr, [x19]
0x03C1EF44: 7f0a00f9  str xzr, [x19, #0x10]
0x03C1EF48: 88d10190  adrp x8, #0x764e000
0x03C1EF4C: 08ad42f9  ldr x8, [x8, #0x558]
0x03C1EF50: b50a40f9  ldr x21, [x21, #0x10]
0x03C1EF54: 000140f9  ldr x0, [x8]
0x03C1EF58: 881e40f9  ldr x8, [x20, #0x38]
0x03C1EF5C: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1EF60: 160940f9  ldr x22, [x8, #0x10]
0x03C1EF64: 49000035  cbnz w9, #0x3c1ef6c
0x03C1EF68: 0987d597  bl #0x3180b8c
0x03C1EF6C: e00316aa  mov x0, x22
0x03C1EF70: e1031faa  mov x1, xzr
0x03C1EF74: 94186a94  bl #0x56a51c4
0x03C1EF78: d50400b4  cbz x21, #0x3c1f010
0x03C1EF7C: c8d201f0  adrp x8, #0x7679000
0x03C1EF80: 083146f9  ldr x8, [x8, #0xc60]
0x03C1EF84: e10300aa  mov x1, x0
0x03C1EF88: e2230091  add x2, sp, #8
0x03C1EF8C: e00315aa  mov x0, x21
0x03C1EF90: 030140f9  ldr x3, [x8]
0x03C1EF94: 47164b94  bl #0x4ee48b0
0x03C1EF98: f503002a  mov w21, w0
0x03C1EF9C: 00030036  tbz w0, #0, #0x3c1effc
0x03C1EFA0: 881e40f9  ldr x8, [x20, #0x38]
0x03C1EFA4: f40740f9  ldr x20, [sp, #8]
0x03C1EFA8: 010540f9  ldr x1, [x8, #8]
0x03C1EFAC: 28d44439  ldrb w8, [x1, #0x135]
0x03C1EFB0: 88000037  tbnz w8, #0, #0x3c1efc0
0x03C1EFB4: e00301aa  mov x0, x1
0x03C1EFB8: 19ded497  bl #0x315681c
0x03C1EFBC: e10300aa  mov x1, x0
0x03C1EFC0: 940200b4  cbz x20, #0x3c1f010
0x03C1EFC4: 880240f9  ldr x8, [x20]
0x03C1EFC8: 292040f9  ldr x9, [x1, #0x40]
0x03C1EFCC: e00314aa  mov x0, x20
0x03C1EFD0: 082140f9  ldr x8, [x8, #0x40]
0x03C1EFD4: 1f0109eb  cmp x8, x9
0x03C1EFD8: e1010054  b.ne #0x3c1f014
0x03C1EFDC: ef86d597  bl #0x3180b98
0x03C1EFE0: 0000c03d  ldr q0, [x0]
0x03C1EFE4: 080840f9  ldr x8, [x0, #0x10]
0x03C1EFE8: e00313aa  mov x0, x19
0x03C1EFEC: e1031faa  mov x1, xzr
0x03C1EFF0: 6002803d  str q0, [x19]
0x03C1EFF4: 680a00f9  str x8, [x19, #0x10]
0x03C1EFF8: 7386d597  bl #0x31809c4
0x03C1EFFC: a0020012  and w0, w21, #1
0x03C1F000: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03C1F004: f65741a9  ldp x22, x21, [sp, #0x10]
0x03C1F008: fe0743f8  ldr x30, [sp], #0x30
0x03C1F00C: c0035fd6  ret
0x03C1F010: 2787d597  bl #0x3180cac
0x03C1F014: 0d88d597  bl #0x3181048

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1F018 | ContextualizedECS.Entity$$TryGetComponent<InteractionComponent>
; native signature: bool ContextualizedECS_Entity__TryGetComponent_InteractionComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_InteractionComponent_o* component, const MethodInfo_3C1F018* method);
; bytes=296 sha256=f50593cb179e132fbc6af2b7d93129e35a207e3455f49bec683e3f991ee42f42 status=arm64_complete_bound indexed_start=True
0x03C1F018: fe0f1df8  str x30, [sp, #-0x30]!
0x03C1F01C: f65701a9  stp x22, x21, [sp, #0x10]
0x03C1F020: f44f02a9  stp x20, x19, [sp, #0x20]
0x03C1F024: 481c40f9  ldr x8, [x2, #0x38]
0x03C1F028: f40302aa  mov x20, x2
0x03C1F02C: f30301aa  mov x19, x1
0x03C1F030: f50300aa  mov x21, x0
0x03C1F034: 680100b5  cbnz x8, #0x3c1f060
0x03C1F038: c0d201d0  adrp x0, #0x7679000
0x03C1F03C: 003046f9  ldr x0, [x0, #0xc60]
0x03C1F040: 7686d597  bl #0x3180a18
0x03C1F044: 60d101f0  adrp x0, #0x764e000
0x03C1F048: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1F04C: 7386d597  bl #0x3180a18
0x03C1F050: 881e40f9  ldr x8, [x20, #0x38]
0x03C1F054: 680000b5  cbnz x8, #0x3c1f060
0x03C1F058: e00314aa  mov x0, x20
0x03C1F05C: 07ded497  bl #0x3156878
0x03C1F060: 00e4006f  movi v0.2d, #0000000000000000
0x03C1F064: ff0700f9  str xzr, [sp, #8]
0x03C1F068: 7f1200f9  str xzr, [x19, #0x20]
0x03C1F06C: 600200ad  stp q0, q0, [x19]
0x03C1F070: 68d101f0  adrp x8, #0x764e000
0x03C1F074: 08ad42f9  ldr x8, [x8, #0x558]
0x03C1F078: b50a40f9  ldr x21, [x21, #0x10]
0x03C1F07C: 000140f9  ldr x0, [x8]
0x03C1F080: 881e40f9  ldr x8, [x20, #0x38]
0x03C1F084: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1F088: 160940f9  ldr x22, [x8, #0x10]
0x03C1F08C: 49000035  cbnz w9, #0x3c1f094
0x03C1F090: bf86d597  bl #0x3180b8c
0x03C1F094: e00316aa  mov x0, x22
0x03C1F098: e1031faa  mov x1, xzr
0x03C1F09C: 4a186a94  bl #0x56a51c4
0x03C1F0A0: d50400b4  cbz x21, #0x3c1f138
0x03C1F0A4: c8d201d0  adrp x8, #0x7679000
0x03C1F0A8: 083146f9  ldr x8, [x8, #0xc60]
0x03C1F0AC: e10300aa  mov x1, x0
0x03C1F0B0: e2230091  add x2, sp, #8
0x03C1F0B4: e00315aa  mov x0, x21
0x03C1F0B8: 030140f9  ldr x3, [x8]
0x03C1F0BC: fd154b94  bl #0x4ee48b0
0x03C1F0C0: f503002a  mov w21, w0
0x03C1F0C4: 00030036  tbz w0, #0, #0x3c1f124
0x03C1F0C8: 881e40f9  ldr x8, [x20, #0x38]
0x03C1F0CC: f40740f9  ldr x20, [sp, #8]
0x03C1F0D0: 010540f9  ldr x1, [x8, #8]
0x03C1F0D4: 28d44439  ldrb w8, [x1, #0x135]
0x03C1F0D8: 88000037  tbnz w8, #0, #0x3c1f0e8
0x03C1F0DC: e00301aa  mov x0, x1
0x03C1F0E0: cfddd497  bl #0x315681c
0x03C1F0E4: e10300aa  mov x1, x0
0x03C1F0E8: 940200b4  cbz x20, #0x3c1f138
0x03C1F0EC: 880240f9  ldr x8, [x20]
0x03C1F0F0: 292040f9  ldr x9, [x1, #0x40]
0x03C1F0F4: e00314aa  mov x0, x20
0x03C1F0F8: 082140f9  ldr x8, [x8, #0x40]
0x03C1F0FC: 1f0109eb  cmp x8, x9
0x03C1F100: e1010054  b.ne #0x3c1f13c
0x03C1F104: a586d597  bl #0x3180b98
0x03C1F108: 000440ad  ldp q0, q1, [x0]
0x03C1F10C: 081040f9  ldr x8, [x0, #0x20]
0x03C1F110: 60420091  add x0, x19, #0x10
0x03C1F114: e1031faa  mov x1, xzr
0x03C1F118: 600600ad  stp q0, q1, [x19]
0x03C1F11C: 681200f9  str x8, [x19, #0x20]
0x03C1F120: 2986d597  bl #0x31809c4
0x03C1F124: a0020012  and w0, w21, #1
0x03C1F128: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03C1F12C: f65741a9  ldp x22, x21, [sp, #0x10]
0x03C1F130: fe0743f8  ldr x30, [sp], #0x30
0x03C1F134: c0035fd6  ret
0x03C1F138: dd86d597  bl #0x3180cac
0x03C1F13C: c387d597  bl #0x3181048

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1F140 | ContextualizedECS.Entity$$TryGetComponent<ItemConsumedComponent>
; native signature: bool ContextualizedECS_Entity__TryGetComponent_ItemConsumedComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_ItemConsumedComponent_o* component, const MethodInfo_3C1F140* method);
; bytes=280 sha256=094d12462be85b88ed8142ddb670a90f61a636a8b765c791046103d51eeed820 status=arm64_complete_bound indexed_start=True
0x03C1F140: fe0f1df8  str x30, [sp, #-0x30]!
0x03C1F144: f65701a9  stp x22, x21, [sp, #0x10]
0x03C1F148: f44f02a9  stp x20, x19, [sp, #0x20]
0x03C1F14C: 481c40f9  ldr x8, [x2, #0x38]
0x03C1F150: f40302aa  mov x20, x2
0x03C1F154: f30301aa  mov x19, x1
0x03C1F158: f50300aa  mov x21, x0
0x03C1F15C: 680100b5  cbnz x8, #0x3c1f188
0x03C1F160: c0d201d0  adrp x0, #0x7679000
0x03C1F164: 003046f9  ldr x0, [x0, #0xc60]
0x03C1F168: 2c86d597  bl #0x3180a18
0x03C1F16C: 60d101f0  adrp x0, #0x764e000
0x03C1F170: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1F174: 2986d597  bl #0x3180a18
0x03C1F178: 881e40f9  ldr x8, [x20, #0x38]
0x03C1F17C: 680000b5  cbnz x8, #0x3c1f188
0x03C1F180: e00314aa  mov x0, x20
0x03C1F184: bdddd497  bl #0x3156878
0x03C1F188: ff0700f9  str xzr, [sp, #8]
0x03C1F18C: 7f7e00a9  stp xzr, xzr, [x19]
0x03C1F190: 68d101f0  adrp x8, #0x764e000
0x03C1F194: 08ad42f9  ldr x8, [x8, #0x558]
0x03C1F198: b50a40f9  ldr x21, [x21, #0x10]
0x03C1F19C: 000140f9  ldr x0, [x8]
0x03C1F1A0: 881e40f9  ldr x8, [x20, #0x38]
0x03C1F1A4: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1F1A8: 160940f9  ldr x22, [x8, #0x10]
0x03C1F1AC: 49000035  cbnz w9, #0x3c1f1b4
0x03C1F1B0: 7786d597  bl #0x3180b8c
0x03C1F1B4: e00316aa  mov x0, x22
0x03C1F1B8: e1031faa  mov x1, xzr
0x03C1F1BC: 02186a94  bl #0x56a51c4
0x03C1F1C0: 950400b4  cbz x21, #0x3c1f250
0x03C1F1C4: c8d201d0  adrp x8, #0x7679000
0x03C1F1C8: 083146f9  ldr x8, [x8, #0xc60]
0x03C1F1CC: e10300aa  mov x1, x0
0x03C1F1D0: e2230091  add x2, sp, #8
0x03C1F1D4: e00315aa  mov x0, x21
0x03C1F1D8: 030140f9  ldr x3, [x8]
0x03C1F1DC: b5154b94  bl #0x4ee48b0
0x03C1F1E0: f503002a  mov w21, w0
0x03C1F1E4: c0020036  tbz w0, #0, #0x3c1f23c
0x03C1F1E8: 881e40f9  ldr x8, [x20, #0x38]
0x03C1F1EC: f40740f9  ldr x20, [sp, #8]
0x03C1F1F0: 010540f9  ldr x1, [x8, #8]
0x03C1F1F4: 28d44439  ldrb w8, [x1, #0x135]
0x03C1F1F8: 88000037  tbnz w8, #0, #0x3c1f208
0x03C1F1FC: e00301aa  mov x0, x1
0x03C1F200: 87ddd497  bl #0x315681c
0x03C1F204: e10300aa  mov x1, x0
0x03C1F208: 540200b4  cbz x20, #0x3c1f250
0x03C1F20C: 880240f9  ldr x8, [x20]
0x03C1F210: 292040f9  ldr x9, [x1, #0x40]
0x03C1F214: e00314aa  mov x0, x20
0x03C1F218: 082140f9  ldr x8, [x8, #0x40]
0x03C1F21C: 1f0109eb  cmp x8, x9
0x03C1F220: a1010054  b.ne #0x3c1f254
0x03C1F224: 5d86d597  bl #0x3180b98
0x03C1F228: 0000c03d  ldr q0, [x0]
0x03C1F22C: 60220091  add x0, x19, #8
0x03C1F230: e1031faa  mov x1, xzr
0x03C1F234: 6002803d  str q0, [x19]
0x03C1F238: e385d597  bl #0x31809c4
0x03C1F23C: a0020012  and w0, w21, #1
0x03C1F240: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03C1F244: f65741a9  ldp x22, x21, [sp, #0x10]
0x03C1F248: fe0743f8  ldr x30, [sp], #0x30
0x03C1F24C: c0035fd6  ret
0x03C1F250: 9786d597  bl #0x3180cac
0x03C1F254: 7d87d597  bl #0x3181048

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1F258 | ContextualizedECS.Entity$$TryGetComponent<ItemMergedComponent>
; native signature: bool ContextualizedECS_Entity__TryGetComponent_ItemMergedComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_ItemMergedComponent_o* component, const MethodInfo_3C1F258* method);
; bytes=268 sha256=8a489fe7c6e9fa7664f7e1c11e4160be31c6c5071de85a3087c54716264ce945 status=arm64_complete_bound indexed_start=True
0x03C1F258: fe0f1df8  str x30, [sp, #-0x30]!
0x03C1F25C: f65701a9  stp x22, x21, [sp, #0x10]
0x03C1F260: f44f02a9  stp x20, x19, [sp, #0x20]
0x03C1F264: 481c40f9  ldr x8, [x2, #0x38]
0x03C1F268: f40302aa  mov x20, x2
0x03C1F26C: f30301aa  mov x19, x1
0x03C1F270: f50300aa  mov x21, x0
0x03C1F274: 680100b5  cbnz x8, #0x3c1f2a0
0x03C1F278: c0d201d0  adrp x0, #0x7679000
0x03C1F27C: 003046f9  ldr x0, [x0, #0xc60]
0x03C1F280: e685d597  bl #0x3180a18
0x03C1F284: 60d101f0  adrp x0, #0x764e000
0x03C1F288: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1F28C: e385d597  bl #0x3180a18
0x03C1F290: 881e40f9  ldr x8, [x20, #0x38]
0x03C1F294: 680000b5  cbnz x8, #0x3c1f2a0
0x03C1F298: e00314aa  mov x0, x20
0x03C1F29C: 77ddd497  bl #0x3156878
0x03C1F2A0: ff0700f9  str xzr, [sp, #8]
0x03C1F2A4: 7f020039  strb wzr, [x19]
0x03C1F2A8: 68d101f0  adrp x8, #0x764e000
0x03C1F2AC: 08ad42f9  ldr x8, [x8, #0x558]
0x03C1F2B0: b50a40f9  ldr x21, [x21, #0x10]
0x03C1F2B4: 000140f9  ldr x0, [x8]
0x03C1F2B8: 881e40f9  ldr x8, [x20, #0x38]
0x03C1F2BC: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1F2C0: 160940f9  ldr x22, [x8, #0x10]
0x03C1F2C4: 49000035  cbnz w9, #0x3c1f2cc
0x03C1F2C8: 3186d597  bl #0x3180b8c
0x03C1F2CC: e00316aa  mov x0, x22
0x03C1F2D0: e1031faa  mov x1, xzr
0x03C1F2D4: bc176a94  bl #0x56a51c4
0x03C1F2D8: 350400b4  cbz x21, #0x3c1f35c
0x03C1F2DC: c8d201d0  adrp x8, #0x7679000
0x03C1F2E0: 083146f9  ldr x8, [x8, #0xc60]
0x03C1F2E4: e10300aa  mov x1, x0
0x03C1F2E8: e2230091  add x2, sp, #8
0x03C1F2EC: e00315aa  mov x0, x21
0x03C1F2F0: 030140f9  ldr x3, [x8]
0x03C1F2F4: 6f154b94  bl #0x4ee48b0
0x03C1F2F8: f503002a  mov w21, w0
0x03C1F2FC: 60020036  tbz w0, #0, #0x3c1f348
0x03C1F300: 881e40f9  ldr x8, [x20, #0x38]
0x03C1F304: f40740f9  ldr x20, [sp, #8]
0x03C1F308: 010540f9  ldr x1, [x8, #8]
0x03C1F30C: 28d44439  ldrb w8, [x1, #0x135]
0x03C1F310: 88000037  tbnz w8, #0, #0x3c1f320
0x03C1F314: e00301aa  mov x0, x1
0x03C1F318: 41ddd497  bl #0x315681c
0x03C1F31C: e10300aa  mov x1, x0
0x03C1F320: f40100b4  cbz x20, #0x3c1f35c
0x03C1F324: 880240f9  ldr x8, [x20]
0x03C1F328: 292040f9  ldr x9, [x1, #0x40]
0x03C1F32C: e00314aa  mov x0, x20
0x03C1F330: 082140f9  ldr x8, [x8, #0x40]
0x03C1F334: 1f0109eb  cmp x8, x9
0x03C1F338: 41010054  b.ne #0x3c1f360
0x03C1F33C: 1786d597  bl #0x3180b98
0x03C1F340: 08004039  ldrb w8, [x0]
0x03C1F344: 68020039  strb w8, [x19]
0x03C1F348: a0020012  and w0, w21, #1
0x03C1F34C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03C1F350: f65741a9  ldp x22, x21, [sp, #0x10]
0x03C1F354: fe0743f8  ldr x30, [sp], #0x30
0x03C1F358: c0035fd6  ret
0x03C1F35C: 5486d597  bl #0x3180cac
0x03C1F360: 3a87d597  bl #0x3181048

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1F364 | ContextualizedECS.Entity$$TryGetComponent<ItemMovedComponent>
; native signature: bool ContextualizedECS_Entity__TryGetComponent_ItemMovedComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_ItemMovedComponent_o* component, const MethodInfo_3C1F364* method);
; bytes=268 sha256=62cb6a746e93d48b72e81f7397cc57e91fec3afbb3f93599cea4b9c7623d1bc6 status=arm64_complete_bound indexed_start=True
0x03C1F364: fe0f1df8  str x30, [sp, #-0x30]!
0x03C1F368: f65701a9  stp x22, x21, [sp, #0x10]
0x03C1F36C: f44f02a9  stp x20, x19, [sp, #0x20]
0x03C1F370: 481c40f9  ldr x8, [x2, #0x38]
0x03C1F374: f40302aa  mov x20, x2
0x03C1F378: f30301aa  mov x19, x1
0x03C1F37C: f50300aa  mov x21, x0
0x03C1F380: 680100b5  cbnz x8, #0x3c1f3ac
0x03C1F384: c0d201d0  adrp x0, #0x7679000
0x03C1F388: 003046f9  ldr x0, [x0, #0xc60]
0x03C1F38C: a385d597  bl #0x3180a18
0x03C1F390: 60d101f0  adrp x0, #0x764e000
0x03C1F394: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1F398: a085d597  bl #0x3180a18
0x03C1F39C: 881e40f9  ldr x8, [x20, #0x38]
0x03C1F3A0: 680000b5  cbnz x8, #0x3c1f3ac
0x03C1F3A4: e00314aa  mov x0, x20
0x03C1F3A8: 34ddd497  bl #0x3156878
0x03C1F3AC: ff0700f9  str xzr, [sp, #8]
0x03C1F3B0: 7f0200f9  str xzr, [x19]
0x03C1F3B4: 68d101f0  adrp x8, #0x764e000
0x03C1F3B8: 08ad42f9  ldr x8, [x8, #0x558]
0x03C1F3BC: b50a40f9  ldr x21, [x21, #0x10]
0x03C1F3C0: 000140f9  ldr x0, [x8]
0x03C1F3C4: 881e40f9  ldr x8, [x20, #0x38]
0x03C1F3C8: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1F3CC: 160940f9  ldr x22, [x8, #0x10]
0x03C1F3D0: 49000035  cbnz w9, #0x3c1f3d8
0x03C1F3D4: ee85d597  bl #0x3180b8c
0x03C1F3D8: e00316aa  mov x0, x22
0x03C1F3DC: e1031faa  mov x1, xzr
0x03C1F3E0: 79176a94  bl #0x56a51c4
0x03C1F3E4: 350400b4  cbz x21, #0x3c1f468
0x03C1F3E8: c8d201d0  adrp x8, #0x7679000
0x03C1F3EC: 083146f9  ldr x8, [x8, #0xc60]
0x03C1F3F0: e10300aa  mov x1, x0
0x03C1F3F4: e2230091  add x2, sp, #8
0x03C1F3F8: e00315aa  mov x0, x21
0x03C1F3FC: 030140f9  ldr x3, [x8]
0x03C1F400: 2c154b94  bl #0x4ee48b0
0x03C1F404: f503002a  mov w21, w0
0x03C1F408: 60020036  tbz w0, #0, #0x3c1f454
0x03C1F40C: 881e40f9  ldr x8, [x20, #0x38]
0x03C1F410: f40740f9  ldr x20, [sp, #8]
0x03C1F414: 010540f9  ldr x1, [x8, #8]
0x03C1F418: 28d44439  ldrb w8, [x1, #0x135]
0x03C1F41C: 88000037  tbnz w8, #0, #0x3c1f42c
0x03C1F420: e00301aa  mov x0, x1
0x03C1F424: fedcd497  bl #0x315681c
0x03C1F428: e10300aa  mov x1, x0
0x03C1F42C: f40100b4  cbz x20, #0x3c1f468
0x03C1F430: 880240f9  ldr x8, [x20]
0x03C1F434: 292040f9  ldr x9, [x1, #0x40]
0x03C1F438: e00314aa  mov x0, x20
0x03C1F43C: 082140f9  ldr x8, [x8, #0x40]
0x03C1F440: 1f0109eb  cmp x8, x9
0x03C1F444: 41010054  b.ne #0x3c1f46c
0x03C1F448: d485d597  bl #0x3180b98
0x03C1F44C: 080040f9  ldr x8, [x0]
0x03C1F450: 680200f9  str x8, [x19]
0x03C1F454: a0020012  and w0, w21, #1
0x03C1F458: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03C1F45C: f65741a9  ldp x22, x21, [sp, #0x10]
0x03C1F460: fe0743f8  ldr x30, [sp], #0x30
0x03C1F464: c0035fd6  ret
0x03C1F468: 1186d597  bl #0x3180cac
0x03C1F46C: f786d597  bl #0x3181048

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1F470 | ContextualizedECS.Entity$$TryGetComponent<LockComponent>
; native signature: bool ContextualizedECS_Entity__TryGetComponent_LockComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_LockComponent_o* component, const MethodInfo_3C1F470* method);
; bytes=268 sha256=d1f7925911a4c8a0e5bca95e267d63dd7d3ba8f2aca4380ee5765612bb32cfce status=arm64_complete_bound indexed_start=True
0x03C1F470: fe0f1df8  str x30, [sp, #-0x30]!
0x03C1F474: f65701a9  stp x22, x21, [sp, #0x10]
0x03C1F478: f44f02a9  stp x20, x19, [sp, #0x20]
0x03C1F47C: 481c40f9  ldr x8, [x2, #0x38]
0x03C1F480: f40302aa  mov x20, x2
0x03C1F484: f30301aa  mov x19, x1
0x03C1F488: f50300aa  mov x21, x0
0x03C1F48C: 680100b5  cbnz x8, #0x3c1f4b8
0x03C1F490: c0d201d0  adrp x0, #0x7679000
0x03C1F494: 003046f9  ldr x0, [x0, #0xc60]
0x03C1F498: 6085d597  bl #0x3180a18
0x03C1F49C: 60d101f0  adrp x0, #0x764e000
0x03C1F4A0: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1F4A4: 5d85d597  bl #0x3180a18
0x03C1F4A8: 881e40f9  ldr x8, [x20, #0x38]
0x03C1F4AC: 680000b5  cbnz x8, #0x3c1f4b8
0x03C1F4B0: e00314aa  mov x0, x20
0x03C1F4B4: f1dcd497  bl #0x3156878
0x03C1F4B8: ff0700f9  str xzr, [sp, #8]
0x03C1F4BC: 7f020039  strb wzr, [x19]
0x03C1F4C0: 68d101f0  adrp x8, #0x764e000
0x03C1F4C4: 08ad42f9  ldr x8, [x8, #0x558]
0x03C1F4C8: b50a40f9  ldr x21, [x21, #0x10]
0x03C1F4CC: 000140f9  ldr x0, [x8]
0x03C1F4D0: 881e40f9  ldr x8, [x20, #0x38]
0x03C1F4D4: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1F4D8: 160940f9  ldr x22, [x8, #0x10]
0x03C1F4DC: 49000035  cbnz w9, #0x3c1f4e4
0x03C1F4E0: ab85d597  bl #0x3180b8c
0x03C1F4E4: e00316aa  mov x0, x22
0x03C1F4E8: e1031faa  mov x1, xzr
0x03C1F4EC: 36176a94  bl #0x56a51c4
0x03C1F4F0: 350400b4  cbz x21, #0x3c1f574
0x03C1F4F4: c8d201d0  adrp x8, #0x7679000
0x03C1F4F8: 083146f9  ldr x8, [x8, #0xc60]
0x03C1F4FC: e10300aa  mov x1, x0
0x03C1F500: e2230091  add x2, sp, #8
0x03C1F504: e00315aa  mov x0, x21
0x03C1F508: 030140f9  ldr x3, [x8]
0x03C1F50C: e9144b94  bl #0x4ee48b0
0x03C1F510: f503002a  mov w21, w0
0x03C1F514: 60020036  tbz w0, #0, #0x3c1f560
0x03C1F518: 881e40f9  ldr x8, [x20, #0x38]
0x03C1F51C: f40740f9  ldr x20, [sp, #8]
0x03C1F520: 010540f9  ldr x1, [x8, #8]
0x03C1F524: 28d44439  ldrb w8, [x1, #0x135]
0x03C1F528: 88000037  tbnz w8, #0, #0x3c1f538
0x03C1F52C: e00301aa  mov x0, x1
0x03C1F530: bbdcd497  bl #0x315681c
0x03C1F534: e10300aa  mov x1, x0
0x03C1F538: f40100b4  cbz x20, #0x3c1f574
0x03C1F53C: 880240f9  ldr x8, [x20]
0x03C1F540: 292040f9  ldr x9, [x1, #0x40]
0x03C1F544: e00314aa  mov x0, x20
0x03C1F548: 082140f9  ldr x8, [x8, #0x40]
0x03C1F54C: 1f0109eb  cmp x8, x9
0x03C1F550: 41010054  b.ne #0x3c1f578
0x03C1F554: 9185d597  bl #0x3180b98
0x03C1F558: 08004039  ldrb w8, [x0]
0x03C1F55C: 68020039  strb w8, [x19]
0x03C1F560: a0020012  and w0, w21, #1
0x03C1F564: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03C1F568: f65741a9  ldp x22, x21, [sp, #0x10]
0x03C1F56C: fe0743f8  ldr x30, [sp], #0x30
0x03C1F570: c0035fd6  ret
0x03C1F574: ce85d597  bl #0x3180cac
0x03C1F578: b486d597  bl #0x3181048

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1F57C | ContextualizedECS.Entity$$TryGetComponent<MergeComponent>
; native signature: bool ContextualizedECS_Entity__TryGetComponent_MergeComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_MergeComponent_o* component, const MethodInfo_3C1F57C* method);
; bytes=280 sha256=b0b991ddddedb27d6c2103c446e1803efe6ecee3511d799ab021d5c2b710b296 status=arm64_complete_bound indexed_start=True
0x03C1F57C: fe0f1df8  str x30, [sp, #-0x30]!
0x03C1F580: f65701a9  stp x22, x21, [sp, #0x10]
0x03C1F584: f44f02a9  stp x20, x19, [sp, #0x20]
0x03C1F588: 481c40f9  ldr x8, [x2, #0x38]
0x03C1F58C: f40302aa  mov x20, x2
0x03C1F590: f30301aa  mov x19, x1
0x03C1F594: f50300aa  mov x21, x0
0x03C1F598: 680100b5  cbnz x8, #0x3c1f5c4
0x03C1F59C: c0d201d0  adrp x0, #0x7679000
0x03C1F5A0: 003046f9  ldr x0, [x0, #0xc60]
0x03C1F5A4: 1d85d597  bl #0x3180a18
0x03C1F5A8: 60d101f0  adrp x0, #0x764e000
0x03C1F5AC: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1F5B0: 1a85d597  bl #0x3180a18
0x03C1F5B4: 881e40f9  ldr x8, [x20, #0x38]
0x03C1F5B8: 680000b5  cbnz x8, #0x3c1f5c4
0x03C1F5BC: e00314aa  mov x0, x20
0x03C1F5C0: aedcd497  bl #0x3156878
0x03C1F5C4: ff0700f9  str xzr, [sp, #8]
0x03C1F5C8: 7f7e00a9  stp xzr, xzr, [x19]
0x03C1F5CC: 68d101f0  adrp x8, #0x764e000
0x03C1F5D0: 08ad42f9  ldr x8, [x8, #0x558]
0x03C1F5D4: b50a40f9  ldr x21, [x21, #0x10]
0x03C1F5D8: 000140f9  ldr x0, [x8]
0x03C1F5DC: 881e40f9  ldr x8, [x20, #0x38]
0x03C1F5E0: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1F5E4: 160940f9  ldr x22, [x8, #0x10]
0x03C1F5E8: 49000035  cbnz w9, #0x3c1f5f0
0x03C1F5EC: 6885d597  bl #0x3180b8c
0x03C1F5F0: e00316aa  mov x0, x22
0x03C1F5F4: e1031faa  mov x1, xzr
0x03C1F5F8: f3166a94  bl #0x56a51c4
0x03C1F5FC: 950400b4  cbz x21, #0x3c1f68c
0x03C1F600: c8d201d0  adrp x8, #0x7679000
0x03C1F604: 083146f9  ldr x8, [x8, #0xc60]
0x03C1F608: e10300aa  mov x1, x0
0x03C1F60C: e2230091  add x2, sp, #8
0x03C1F610: e00315aa  mov x0, x21
0x03C1F614: 030140f9  ldr x3, [x8]
0x03C1F618: a6144b94  bl #0x4ee48b0
0x03C1F61C: f503002a  mov w21, w0
0x03C1F620: c0020036  tbz w0, #0, #0x3c1f678
0x03C1F624: 881e40f9  ldr x8, [x20, #0x38]
0x03C1F628: f40740f9  ldr x20, [sp, #8]
0x03C1F62C: 010540f9  ldr x1, [x8, #8]
0x03C1F630: 28d44439  ldrb w8, [x1, #0x135]
0x03C1F634: 88000037  tbnz w8, #0, #0x3c1f644
0x03C1F638: e00301aa  mov x0, x1
0x03C1F63C: 78dcd497  bl #0x315681c
0x03C1F640: e10300aa  mov x1, x0
0x03C1F644: 540200b4  cbz x20, #0x3c1f68c
0x03C1F648: 880240f9  ldr x8, [x20]
0x03C1F64C: 292040f9  ldr x9, [x1, #0x40]
0x03C1F650: e00314aa  mov x0, x20
0x03C1F654: 082140f9  ldr x8, [x8, #0x40]
0x03C1F658: 1f0109eb  cmp x8, x9
0x03C1F65C: a1010054  b.ne #0x3c1f690
0x03C1F660: 4e85d597  bl #0x3180b98
0x03C1F664: 0000c03d  ldr q0, [x0]
0x03C1F668: 60220091  add x0, x19, #8
0x03C1F66C: e1031faa  mov x1, xzr
0x03C1F670: 6002803d  str q0, [x19]
0x03C1F674: d484d597  bl #0x31809c4
0x03C1F678: a0020012  and w0, w21, #1
0x03C1F67C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03C1F680: f65741a9  ldp x22, x21, [sp, #0x10]
0x03C1F684: fe0743f8  ldr x30, [sp], #0x30
0x03C1F688: c0035fd6  ret
0x03C1F68C: 8885d597  bl #0x3180cac
0x03C1F690: 6e86d597  bl #0x3181048

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1F694 | ContextualizedECS.Entity$$TryGetComponent<PendingInteractionComponent>
; native signature: bool ContextualizedECS_Entity__TryGetComponent_PendingInteractionComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_PendingInteractionComponent_o* component, const MethodInfo_3C1F694* method);
; bytes=280 sha256=1aeda2f3c7b1ca90bb41252fb24e1048bb6d3b158cee76a61a021443e80cc1f2 status=arm64_complete_bound indexed_start=True
0x03C1F694: fe0f1df8  str x30, [sp, #-0x30]!
0x03C1F698: f65701a9  stp x22, x21, [sp, #0x10]
0x03C1F69C: f44f02a9  stp x20, x19, [sp, #0x20]
0x03C1F6A0: 481c40f9  ldr x8, [x2, #0x38]
0x03C1F6A4: f40302aa  mov x20, x2
0x03C1F6A8: f30301aa  mov x19, x1
0x03C1F6AC: f50300aa  mov x21, x0
0x03C1F6B0: 680100b5  cbnz x8, #0x3c1f6dc
0x03C1F6B4: c0d201d0  adrp x0, #0x7679000
0x03C1F6B8: 003046f9  ldr x0, [x0, #0xc60]
0x03C1F6BC: d784d597  bl #0x3180a18
0x03C1F6C0: 60d101f0  adrp x0, #0x764e000
0x03C1F6C4: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1F6C8: d484d597  bl #0x3180a18
0x03C1F6CC: 881e40f9  ldr x8, [x20, #0x38]
0x03C1F6D0: 680000b5  cbnz x8, #0x3c1f6dc
0x03C1F6D4: e00314aa  mov x0, x20
0x03C1F6D8: 68dcd497  bl #0x3156878
0x03C1F6DC: ff0700f9  str xzr, [sp, #8]
0x03C1F6E0: 7f7e00a9  stp xzr, xzr, [x19]
0x03C1F6E4: 68d101f0  adrp x8, #0x764e000
0x03C1F6E8: 08ad42f9  ldr x8, [x8, #0x558]
0x03C1F6EC: b50a40f9  ldr x21, [x21, #0x10]
0x03C1F6F0: 000140f9  ldr x0, [x8]
0x03C1F6F4: 881e40f9  ldr x8, [x20, #0x38]
0x03C1F6F8: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1F6FC: 160940f9  ldr x22, [x8, #0x10]
0x03C1F700: 49000035  cbnz w9, #0x3c1f708
0x03C1F704: 2285d597  bl #0x3180b8c
0x03C1F708: e00316aa  mov x0, x22
0x03C1F70C: e1031faa  mov x1, xzr
0x03C1F710: ad166a94  bl #0x56a51c4
0x03C1F714: 950400b4  cbz x21, #0x3c1f7a4
0x03C1F718: c8d201d0  adrp x8, #0x7679000
0x03C1F71C: 083146f9  ldr x8, [x8, #0xc60]
0x03C1F720: e10300aa  mov x1, x0
0x03C1F724: e2230091  add x2, sp, #8
0x03C1F728: e00315aa  mov x0, x21
0x03C1F72C: 030140f9  ldr x3, [x8]
0x03C1F730: 60144b94  bl #0x4ee48b0
0x03C1F734: f503002a  mov w21, w0
0x03C1F738: c0020036  tbz w0, #0, #0x3c1f790
0x03C1F73C: 881e40f9  ldr x8, [x20, #0x38]
0x03C1F740: f40740f9  ldr x20, [sp, #8]
0x03C1F744: 010540f9  ldr x1, [x8, #8]
0x03C1F748: 28d44439  ldrb w8, [x1, #0x135]
0x03C1F74C: 88000037  tbnz w8, #0, #0x3c1f75c
0x03C1F750: e00301aa  mov x0, x1
0x03C1F754: 32dcd497  bl #0x315681c
0x03C1F758: e10300aa  mov x1, x0
0x03C1F75C: 540200b4  cbz x20, #0x3c1f7a4
0x03C1F760: 880240f9  ldr x8, [x20]
0x03C1F764: 292040f9  ldr x9, [x1, #0x40]
0x03C1F768: e00314aa  mov x0, x20
0x03C1F76C: 082140f9  ldr x8, [x8, #0x40]
0x03C1F770: 1f0109eb  cmp x8, x9
0x03C1F774: a1010054  b.ne #0x3c1f7a8
0x03C1F778: 0885d597  bl #0x3180b98
0x03C1F77C: 0000c03d  ldr q0, [x0]
0x03C1F780: 60220091  add x0, x19, #8
0x03C1F784: e1031faa  mov x1, xzr
0x03C1F788: 6002803d  str q0, [x19]
0x03C1F78C: 8e84d597  bl #0x31809c4
0x03C1F790: a0020012  and w0, w21, #1
0x03C1F794: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03C1F798: f65741a9  ldp x22, x21, [sp, #0x10]
0x03C1F79C: fe0743f8  ldr x30, [sp], #0x30
0x03C1F7A0: c0035fd6  ret
0x03C1F7A4: 4285d597  bl #0x3180cac
0x03C1F7A8: 2886d597  bl #0x3181048

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1F7AC | ContextualizedECS.Entity$$TryGetComponent<PendingItemsCombinationComponent>
; native signature: bool ContextualizedECS_Entity__TryGetComponent_PendingItemsCombinationComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_PendingItemsCombinationComponent_o* component, const MethodInfo_3C1F7AC* method);
; bytes=268 sha256=74ea3b9b456af7dd5be85c0b3a2be978aea3ae5eb33067703fd28a7ece16deea status=arm64_complete_bound indexed_start=True
0x03C1F7AC: fe0f1df8  str x30, [sp, #-0x30]!
0x03C1F7B0: f65701a9  stp x22, x21, [sp, #0x10]
0x03C1F7B4: f44f02a9  stp x20, x19, [sp, #0x20]
0x03C1F7B8: 481c40f9  ldr x8, [x2, #0x38]
0x03C1F7BC: f40302aa  mov x20, x2
0x03C1F7C0: f30301aa  mov x19, x1
0x03C1F7C4: f50300aa  mov x21, x0
0x03C1F7C8: 680100b5  cbnz x8, #0x3c1f7f4
0x03C1F7CC: c0d201d0  adrp x0, #0x7679000
0x03C1F7D0: 003046f9  ldr x0, [x0, #0xc60]
0x03C1F7D4: 9184d597  bl #0x3180a18
0x03C1F7D8: 60d101f0  adrp x0, #0x764e000
0x03C1F7DC: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1F7E0: 8e84d597  bl #0x3180a18
0x03C1F7E4: 881e40f9  ldr x8, [x20, #0x38]
0x03C1F7E8: 680000b5  cbnz x8, #0x3c1f7f4
0x03C1F7EC: e00314aa  mov x0, x20
0x03C1F7F0: 22dcd497  bl #0x3156878
0x03C1F7F4: ff0700f9  str xzr, [sp, #8]
0x03C1F7F8: 7f020039  strb wzr, [x19]
0x03C1F7FC: 68d101f0  adrp x8, #0x764e000
0x03C1F800: 08ad42f9  ldr x8, [x8, #0x558]
0x03C1F804: b50a40f9  ldr x21, [x21, #0x10]
0x03C1F808: 000140f9  ldr x0, [x8]
0x03C1F80C: 881e40f9  ldr x8, [x20, #0x38]
0x03C1F810: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1F814: 160940f9  ldr x22, [x8, #0x10]
0x03C1F818: 49000035  cbnz w9, #0x3c1f820
0x03C1F81C: dc84d597  bl #0x3180b8c
0x03C1F820: e00316aa  mov x0, x22
0x03C1F824: e1031faa  mov x1, xzr
0x03C1F828: 67166a94  bl #0x56a51c4
0x03C1F82C: 350400b4  cbz x21, #0x3c1f8b0
0x03C1F830: c8d201d0  adrp x8, #0x7679000
0x03C1F834: 083146f9  ldr x8, [x8, #0xc60]
0x03C1F838: e10300aa  mov x1, x0
0x03C1F83C: e2230091  add x2, sp, #8
0x03C1F840: e00315aa  mov x0, x21
0x03C1F844: 030140f9  ldr x3, [x8]
0x03C1F848: 1a144b94  bl #0x4ee48b0
0x03C1F84C: f503002a  mov w21, w0
0x03C1F850: 60020036  tbz w0, #0, #0x3c1f89c
0x03C1F854: 881e40f9  ldr x8, [x20, #0x38]
0x03C1F858: f40740f9  ldr x20, [sp, #8]
0x03C1F85C: 010540f9  ldr x1, [x8, #8]
0x03C1F860: 28d44439  ldrb w8, [x1, #0x135]
0x03C1F864: 88000037  tbnz w8, #0, #0x3c1f874
0x03C1F868: e00301aa  mov x0, x1
0x03C1F86C: ecdbd497  bl #0x315681c
0x03C1F870: e10300aa  mov x1, x0
0x03C1F874: f40100b4  cbz x20, #0x3c1f8b0
0x03C1F878: 880240f9  ldr x8, [x20]
0x03C1F87C: 292040f9  ldr x9, [x1, #0x40]
0x03C1F880: e00314aa  mov x0, x20
0x03C1F884: 082140f9  ldr x8, [x8, #0x40]
0x03C1F888: 1f0109eb  cmp x8, x9
0x03C1F88C: 41010054  b.ne #0x3c1f8b4
0x03C1F890: c284d597  bl #0x3180b98
0x03C1F894: 08004039  ldrb w8, [x0]
0x03C1F898: 68020039  strb w8, [x19]
0x03C1F89C: a0020012  and w0, w21, #1
0x03C1F8A0: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03C1F8A4: f65741a9  ldp x22, x21, [sp, #0x10]
0x03C1F8A8: fe0743f8  ldr x30, [sp], #0x30
0x03C1F8AC: c0035fd6  ret
0x03C1F8B0: ff84d597  bl #0x3180cac
0x03C1F8B4: e585d597  bl #0x3181048

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1F8B8 | ContextualizedECS.Entity$$TryGetComponent<ProducerComponent>
; native signature: bool ContextualizedECS_Entity__TryGetComponent_ProducerComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_ProducerComponent_o* component, const MethodInfo_3C1F8B8* method);
; bytes=284 sha256=abeefc9c1760131c346fe8f46e864936459cf526e42afc65b1ab87f7dbdbfcbc status=arm64_complete_bound indexed_start=True
0x03C1F8B8: fe0f1df8  str x30, [sp, #-0x30]!
0x03C1F8BC: f65701a9  stp x22, x21, [sp, #0x10]
0x03C1F8C0: f44f02a9  stp x20, x19, [sp, #0x20]
0x03C1F8C4: 481c40f9  ldr x8, [x2, #0x38]
0x03C1F8C8: f40302aa  mov x20, x2
0x03C1F8CC: f30301aa  mov x19, x1
0x03C1F8D0: f50300aa  mov x21, x0
0x03C1F8D4: 680100b5  cbnz x8, #0x3c1f900
0x03C1F8D8: c0d201d0  adrp x0, #0x7679000
0x03C1F8DC: 003046f9  ldr x0, [x0, #0xc60]
0x03C1F8E0: 4e84d597  bl #0x3180a18
0x03C1F8E4: 60d101f0  adrp x0, #0x764e000
0x03C1F8E8: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1F8EC: 4b84d597  bl #0x3180a18
0x03C1F8F0: 881e40f9  ldr x8, [x20, #0x38]
0x03C1F8F4: 680000b5  cbnz x8, #0x3c1f900
0x03C1F8F8: e00314aa  mov x0, x20
0x03C1F8FC: dfdbd497  bl #0x3156878
0x03C1F900: 00e4006f  movi v0.2d, #0000000000000000
0x03C1F904: ff0700f9  str xzr, [sp, #8]
0x03C1F908: 600200ad  stp q0, q0, [x19]
0x03C1F90C: 68d101f0  adrp x8, #0x764e000
0x03C1F910: 08ad42f9  ldr x8, [x8, #0x558]
0x03C1F914: b50a40f9  ldr x21, [x21, #0x10]
0x03C1F918: 000140f9  ldr x0, [x8]
0x03C1F91C: 881e40f9  ldr x8, [x20, #0x38]
0x03C1F920: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1F924: 160940f9  ldr x22, [x8, #0x10]
0x03C1F928: 49000035  cbnz w9, #0x3c1f930
0x03C1F92C: 9884d597  bl #0x3180b8c
0x03C1F930: e00316aa  mov x0, x22
0x03C1F934: e1031faa  mov x1, xzr
0x03C1F938: 23166a94  bl #0x56a51c4
0x03C1F93C: 950400b4  cbz x21, #0x3c1f9cc
0x03C1F940: c8d201d0  adrp x8, #0x7679000
0x03C1F944: 083146f9  ldr x8, [x8, #0xc60]
0x03C1F948: e10300aa  mov x1, x0
0x03C1F94C: e2230091  add x2, sp, #8
0x03C1F950: e00315aa  mov x0, x21
0x03C1F954: 030140f9  ldr x3, [x8]
0x03C1F958: d6134b94  bl #0x4ee48b0
0x03C1F95C: f503002a  mov w21, w0
0x03C1F960: c0020036  tbz w0, #0, #0x3c1f9b8
0x03C1F964: 881e40f9  ldr x8, [x20, #0x38]
0x03C1F968: f40740f9  ldr x20, [sp, #8]
0x03C1F96C: 010540f9  ldr x1, [x8, #8]
0x03C1F970: 28d44439  ldrb w8, [x1, #0x135]
0x03C1F974: 88000037  tbnz w8, #0, #0x3c1f984
0x03C1F978: e00301aa  mov x0, x1
0x03C1F97C: a8dbd497  bl #0x315681c
0x03C1F980: e10300aa  mov x1, x0
0x03C1F984: 540200b4  cbz x20, #0x3c1f9cc
0x03C1F988: 880240f9  ldr x8, [x20]
0x03C1F98C: 292040f9  ldr x9, [x1, #0x40]
0x03C1F990: e00314aa  mov x0, x20
0x03C1F994: 082140f9  ldr x8, [x8, #0x40]
0x03C1F998: 1f0109eb  cmp x8, x9
0x03C1F99C: a1010054  b.ne #0x3c1f9d0
0x03C1F9A0: 7e84d597  bl #0x3180b98
0x03C1F9A4: 000440ad  ldp q0, q1, [x0]
0x03C1F9A8: e00313aa  mov x0, x19
0x03C1F9AC: e1031faa  mov x1, xzr
0x03C1F9B0: 600600ad  stp q0, q1, [x19]
0x03C1F9B4: 0484d597  bl #0x31809c4
0x03C1F9B8: a0020012  and w0, w21, #1
0x03C1F9BC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03C1F9C0: f65741a9  ldp x22, x21, [sp, #0x10]
0x03C1F9C4: fe0743f8  ldr x30, [sp], #0x30
0x03C1F9C8: c0035fd6  ret
0x03C1F9CC: b884d597  bl #0x3180cac
0x03C1F9D0: 9e85d597  bl #0x3181048

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1F9D4 | ContextualizedECS.Entity$$TryGetComponent<ResourceConsumedComponent>
; native signature: bool ContextualizedECS_Entity__TryGetComponent_ResourceConsumedComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_ResourceConsumedComponent_o* component, const MethodInfo_3C1F9D4* method);
; bytes=268 sha256=7981921dc6653920d2c53ef20cb1a18a03074688d714c2f999374a913cc9e1aa status=arm64_complete_bound indexed_start=True
0x03C1F9D4: fe0f1df8  str x30, [sp, #-0x30]!
0x03C1F9D8: f65701a9  stp x22, x21, [sp, #0x10]
0x03C1F9DC: f44f02a9  stp x20, x19, [sp, #0x20]
0x03C1F9E0: 481c40f9  ldr x8, [x2, #0x38]
0x03C1F9E4: f40302aa  mov x20, x2
0x03C1F9E8: f30301aa  mov x19, x1
0x03C1F9EC: f50300aa  mov x21, x0
0x03C1F9F0: 680100b5  cbnz x8, #0x3c1fa1c
0x03C1F9F4: c0d201d0  adrp x0, #0x7679000
0x03C1F9F8: 003046f9  ldr x0, [x0, #0xc60]
0x03C1F9FC: 0784d597  bl #0x3180a18
0x03C1FA00: 60d101f0  adrp x0, #0x764e000
0x03C1FA04: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1FA08: 0484d597  bl #0x3180a18
0x03C1FA0C: 881e40f9  ldr x8, [x20, #0x38]
0x03C1FA10: 680000b5  cbnz x8, #0x3c1fa1c
0x03C1FA14: e00314aa  mov x0, x20
0x03C1FA18: 98dbd497  bl #0x3156878
0x03C1FA1C: ff0700f9  str xzr, [sp, #8]
0x03C1FA20: 7f020039  strb wzr, [x19]
0x03C1FA24: 68d101f0  adrp x8, #0x764e000
0x03C1FA28: 08ad42f9  ldr x8, [x8, #0x558]
0x03C1FA2C: b50a40f9  ldr x21, [x21, #0x10]
0x03C1FA30: 000140f9  ldr x0, [x8]
0x03C1FA34: 881e40f9  ldr x8, [x20, #0x38]
0x03C1FA38: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1FA3C: 160940f9  ldr x22, [x8, #0x10]
0x03C1FA40: 49000035  cbnz w9, #0x3c1fa48
0x03C1FA44: 5284d597  bl #0x3180b8c
0x03C1FA48: e00316aa  mov x0, x22
0x03C1FA4C: e1031faa  mov x1, xzr
0x03C1FA50: dd156a94  bl #0x56a51c4
0x03C1FA54: 350400b4  cbz x21, #0x3c1fad8
0x03C1FA58: c8d201d0  adrp x8, #0x7679000
0x03C1FA5C: 083146f9  ldr x8, [x8, #0xc60]
0x03C1FA60: e10300aa  mov x1, x0
0x03C1FA64: e2230091  add x2, sp, #8
0x03C1FA68: e00315aa  mov x0, x21
0x03C1FA6C: 030140f9  ldr x3, [x8]
0x03C1FA70: 90134b94  bl #0x4ee48b0
0x03C1FA74: f503002a  mov w21, w0
0x03C1FA78: 60020036  tbz w0, #0, #0x3c1fac4
0x03C1FA7C: 881e40f9  ldr x8, [x20, #0x38]
0x03C1FA80: f40740f9  ldr x20, [sp, #8]
0x03C1FA84: 010540f9  ldr x1, [x8, #8]
0x03C1FA88: 28d44439  ldrb w8, [x1, #0x135]
0x03C1FA8C: 88000037  tbnz w8, #0, #0x3c1fa9c
0x03C1FA90: e00301aa  mov x0, x1
0x03C1FA94: 62dbd497  bl #0x315681c
0x03C1FA98: e10300aa  mov x1, x0
0x03C1FA9C: f40100b4  cbz x20, #0x3c1fad8
0x03C1FAA0: 880240f9  ldr x8, [x20]
0x03C1FAA4: 292040f9  ldr x9, [x1, #0x40]
0x03C1FAA8: e00314aa  mov x0, x20
0x03C1FAAC: 082140f9  ldr x8, [x8, #0x40]
0x03C1FAB0: 1f0109eb  cmp x8, x9
0x03C1FAB4: 41010054  b.ne #0x3c1fadc
0x03C1FAB8: 3884d597  bl #0x3180b98
0x03C1FABC: 08004039  ldrb w8, [x0]
0x03C1FAC0: 68020039  strb w8, [x19]
0x03C1FAC4: a0020012  and w0, w21, #1
0x03C1FAC8: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03C1FACC: f65741a9  ldp x22, x21, [sp, #0x10]
0x03C1FAD0: fe0743f8  ldr x30, [sp], #0x30
0x03C1FAD4: c0035fd6  ret
0x03C1FAD8: 7584d597  bl #0x3180cac
0x03C1FADC: 5b85d597  bl #0x3181048

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1FAE0 | ContextualizedECS.Entity$$TryGetComponent<SpawnerComponent>
; native signature: bool ContextualizedECS_Entity__TryGetComponent_SpawnerComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_SpawnerComponent_o* component, const MethodInfo_3C1FAE0* method);
; bytes=292 sha256=8c863b1cf4ad1ce2cef2ee6a2b69c2bfe084d3fca0ff6ae01623414fd4da383b status=arm64_complete_bound indexed_start=True
0x03C1FAE0: fe0f1df8  str x30, [sp, #-0x30]!
0x03C1FAE4: f65701a9  stp x22, x21, [sp, #0x10]
0x03C1FAE8: f44f02a9  stp x20, x19, [sp, #0x20]
0x03C1FAEC: 481c40f9  ldr x8, [x2, #0x38]
0x03C1FAF0: f40302aa  mov x20, x2
0x03C1FAF4: f30301aa  mov x19, x1
0x03C1FAF8: f50300aa  mov x21, x0
0x03C1FAFC: 680100b5  cbnz x8, #0x3c1fb28
0x03C1FB00: c0d201d0  adrp x0, #0x7679000
0x03C1FB04: 003046f9  ldr x0, [x0, #0xc60]
0x03C1FB08: c483d597  bl #0x3180a18
0x03C1FB0C: 60d101f0  adrp x0, #0x764e000
0x03C1FB10: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1FB14: c183d597  bl #0x3180a18
0x03C1FB18: 881e40f9  ldr x8, [x20, #0x38]
0x03C1FB1C: 680000b5  cbnz x8, #0x3c1fb28
0x03C1FB20: e00314aa  mov x0, x20
0x03C1FB24: 55dbd497  bl #0x3156878
0x03C1FB28: ff0700f9  str xzr, [sp, #8]
0x03C1FB2C: 7f7e00a9  stp xzr, xzr, [x19]
0x03C1FB30: 7f0a00f9  str xzr, [x19, #0x10]
0x03C1FB34: 68d101f0  adrp x8, #0x764e000
0x03C1FB38: 08ad42f9  ldr x8, [x8, #0x558]
0x03C1FB3C: b50a40f9  ldr x21, [x21, #0x10]
0x03C1FB40: 000140f9  ldr x0, [x8]
0x03C1FB44: 881e40f9  ldr x8, [x20, #0x38]
0x03C1FB48: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1FB4C: 160940f9  ldr x22, [x8, #0x10]
0x03C1FB50: 49000035  cbnz w9, #0x3c1fb58
0x03C1FB54: 0e84d597  bl #0x3180b8c
0x03C1FB58: e00316aa  mov x0, x22
0x03C1FB5C: e1031faa  mov x1, xzr
0x03C1FB60: 99156a94  bl #0x56a51c4
0x03C1FB64: d50400b4  cbz x21, #0x3c1fbfc
0x03C1FB68: c8d201d0  adrp x8, #0x7679000
0x03C1FB6C: 083146f9  ldr x8, [x8, #0xc60]
0x03C1FB70: e10300aa  mov x1, x0
0x03C1FB74: e2230091  add x2, sp, #8
0x03C1FB78: e00315aa  mov x0, x21
0x03C1FB7C: 030140f9  ldr x3, [x8]
0x03C1FB80: 4c134b94  bl #0x4ee48b0
0x03C1FB84: f503002a  mov w21, w0
0x03C1FB88: 00030036  tbz w0, #0, #0x3c1fbe8
0x03C1FB8C: 881e40f9  ldr x8, [x20, #0x38]
0x03C1FB90: f40740f9  ldr x20, [sp, #8]
0x03C1FB94: 010540f9  ldr x1, [x8, #8]
0x03C1FB98: 28d44439  ldrb w8, [x1, #0x135]
0x03C1FB9C: 88000037  tbnz w8, #0, #0x3c1fbac
0x03C1FBA0: e00301aa  mov x0, x1
0x03C1FBA4: 1edbd497  bl #0x315681c
0x03C1FBA8: e10300aa  mov x1, x0
0x03C1FBAC: 940200b4  cbz x20, #0x3c1fbfc
0x03C1FBB0: 880240f9  ldr x8, [x20]
0x03C1FBB4: 292040f9  ldr x9, [x1, #0x40]
0x03C1FBB8: e00314aa  mov x0, x20
0x03C1FBBC: 082140f9  ldr x8, [x8, #0x40]
0x03C1FBC0: 1f0109eb  cmp x8, x9
0x03C1FBC4: e1010054  b.ne #0x3c1fc00
0x03C1FBC8: f483d597  bl #0x3180b98
0x03C1FBCC: 0000c03d  ldr q0, [x0]
0x03C1FBD0: 080840f9  ldr x8, [x0, #0x10]
0x03C1FBD4: e00313aa  mov x0, x19
0x03C1FBD8: e1031faa  mov x1, xzr
0x03C1FBDC: 6002803d  str q0, [x19]
0x03C1FBE0: 680a00f9  str x8, [x19, #0x10]
0x03C1FBE4: 7883d597  bl #0x31809c4
0x03C1FBE8: a0020012  and w0, w21, #1
0x03C1FBEC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03C1FBF0: f65741a9  ldp x22, x21, [sp, #0x10]
0x03C1FBF4: fe0743f8  ldr x30, [sp], #0x30
0x03C1FBF8: c0035fd6  ret
0x03C1FBFC: 2c84d597  bl #0x3180cac
0x03C1FC00: 1285d597  bl #0x3181048

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1FC04 | ContextualizedECS.Entity$$TryGetComponent<TimeCycleComponent>
; native signature: bool ContextualizedECS_Entity__TryGetComponent_TimeCycleComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_TimeCycleComponent_o* component, const MethodInfo_3C1FC04* method);
; bytes=288 sha256=25135ef0045ba4f657ff395ae582a8842052b845675367653fe7f8082ebcf39c status=arm64_complete_bound indexed_start=True
0x03C1FC04: fe0f1df8  str x30, [sp, #-0x30]!
0x03C1FC08: f65701a9  stp x22, x21, [sp, #0x10]
0x03C1FC0C: f44f02a9  stp x20, x19, [sp, #0x20]
0x03C1FC10: 481c40f9  ldr x8, [x2, #0x38]
0x03C1FC14: f40302aa  mov x20, x2
0x03C1FC18: f30301aa  mov x19, x1
0x03C1FC1C: f50300aa  mov x21, x0
0x03C1FC20: 680100b5  cbnz x8, #0x3c1fc4c
0x03C1FC24: c0d201d0  adrp x0, #0x7679000
0x03C1FC28: 003046f9  ldr x0, [x0, #0xc60]
0x03C1FC2C: 7b83d597  bl #0x3180a18
0x03C1FC30: 60d101f0  adrp x0, #0x764e000
0x03C1FC34: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1FC38: 7883d597  bl #0x3180a18
0x03C1FC3C: 881e40f9  ldr x8, [x20, #0x38]
0x03C1FC40: 680000b5  cbnz x8, #0x3c1fc4c
0x03C1FC44: e00314aa  mov x0, x20
0x03C1FC48: 0cdbd497  bl #0x3156878
0x03C1FC4C: 00e4006f  movi v0.2d, #0000000000000000
0x03C1FC50: ff0700f9  str xzr, [sp, #8]
0x03C1FC54: 608201ad  stp q0, q0, [x19, #0x30]
0x03C1FC58: 608200ad  stp q0, q0, [x19, #0x10]
0x03C1FC5C: 6002803d  str q0, [x19]
0x03C1FC60: 68d101f0  adrp x8, #0x764e000
0x03C1FC64: 08ad42f9  ldr x8, [x8, #0x558]
0x03C1FC68: b50a40f9  ldr x21, [x21, #0x10]
0x03C1FC6C: 000140f9  ldr x0, [x8]
0x03C1FC70: 881e40f9  ldr x8, [x20, #0x38]
0x03C1FC74: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1FC78: 160940f9  ldr x22, [x8, #0x10]
0x03C1FC7C: 49000035  cbnz w9, #0x3c1fc84
0x03C1FC80: c383d597  bl #0x3180b8c
0x03C1FC84: e00316aa  mov x0, x22
0x03C1FC88: e1031faa  mov x1, xzr
0x03C1FC8C: 4e156a94  bl #0x56a51c4
0x03C1FC90: 750400b4  cbz x21, #0x3c1fd1c
0x03C1FC94: c8d201d0  adrp x8, #0x7679000
0x03C1FC98: 083146f9  ldr x8, [x8, #0xc60]
0x03C1FC9C: e10300aa  mov x1, x0
0x03C1FCA0: e2230091  add x2, sp, #8
0x03C1FCA4: e00315aa  mov x0, x21
0x03C1FCA8: 030140f9  ldr x3, [x8]
0x03C1FCAC: 01134b94  bl #0x4ee48b0
0x03C1FCB0: f503002a  mov w21, w0
0x03C1FCB4: a0020036  tbz w0, #0, #0x3c1fd08
0x03C1FCB8: 881e40f9  ldr x8, [x20, #0x38]
0x03C1FCBC: f40740f9  ldr x20, [sp, #8]
0x03C1FCC0: 010540f9  ldr x1, [x8, #8]
0x03C1FCC4: 28d44439  ldrb w8, [x1, #0x135]
0x03C1FCC8: 88000037  tbnz w8, #0, #0x3c1fcd8
0x03C1FCCC: e00301aa  mov x0, x1
0x03C1FCD0: d3dad497  bl #0x315681c
0x03C1FCD4: e10300aa  mov x1, x0
0x03C1FCD8: 340200b4  cbz x20, #0x3c1fd1c
0x03C1FCDC: 880240f9  ldr x8, [x20]
0x03C1FCE0: 292040f9  ldr x9, [x1, #0x40]
0x03C1FCE4: e00314aa  mov x0, x20
0x03C1FCE8: 082140f9  ldr x8, [x8, #0x40]
0x03C1FCEC: 1f0109eb  cmp x8, x9
0x03C1FCF0: 81010054  b.ne #0x3c1fd20
0x03C1FCF4: a983d597  bl #0x3180b98
0x03C1FCF8: e10300aa  mov x1, x0
0x03C1FCFC: 020a8052  movz w2, #0x50
0x03C1FD00: e00313aa  mov x0, x19
0x03C1FD04: 1bbbd694  bl #0x71ce970
0x03C1FD08: a0020012  and w0, w21, #1
0x03C1FD0C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03C1FD10: f65741a9  ldp x22, x21, [sp, #0x10]
0x03C1FD14: fe0743f8  ldr x30, [sp], #0x30
0x03C1FD18: c0035fd6  ret
0x03C1FD1C: e483d597  bl #0x3180cac
0x03C1FD20: ca84d597  bl #0x3181048

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1FD24 | ContextualizedECS.Entity$$TryGetComponent<TimeDurationComponent>
; native signature: bool ContextualizedECS_Entity__TryGetComponent_TimeDurationComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_TimeDurationComponent_o* component, const MethodInfo_3C1FD24* method);
; bytes=272 sha256=f85fad5c007e2ab5cdfbb2c32949998bc7167978b898a73a97bfdbacaca8ceec status=arm64_complete_bound indexed_start=True
0x03C1FD24: fe0f1df8  str x30, [sp, #-0x30]!
0x03C1FD28: f65701a9  stp x22, x21, [sp, #0x10]
0x03C1FD2C: f44f02a9  stp x20, x19, [sp, #0x20]
0x03C1FD30: 481c40f9  ldr x8, [x2, #0x38]
0x03C1FD34: f40302aa  mov x20, x2
0x03C1FD38: f30301aa  mov x19, x1
0x03C1FD3C: f50300aa  mov x21, x0
0x03C1FD40: 680100b5  cbnz x8, #0x3c1fd6c
0x03C1FD44: c0d201d0  adrp x0, #0x7679000
0x03C1FD48: 003046f9  ldr x0, [x0, #0xc60]
0x03C1FD4C: 3383d597  bl #0x3180a18
0x03C1FD50: 60d101f0  adrp x0, #0x764e000
0x03C1FD54: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1FD58: 3083d597  bl #0x3180a18
0x03C1FD5C: 881e40f9  ldr x8, [x20, #0x38]
0x03C1FD60: 680000b5  cbnz x8, #0x3c1fd6c
0x03C1FD64: e00314aa  mov x0, x20
0x03C1FD68: c4dad497  bl #0x3156878
0x03C1FD6C: 00e4006f  movi v0.2d, #0000000000000000
0x03C1FD70: ff0700f9  str xzr, [sp, #8]
0x03C1FD74: 600200ad  stp q0, q0, [x19]
0x03C1FD78: 68d101f0  adrp x8, #0x764e000
0x03C1FD7C: 08ad42f9  ldr x8, [x8, #0x558]
0x03C1FD80: b50a40f9  ldr x21, [x21, #0x10]
0x03C1FD84: 000140f9  ldr x0, [x8]
0x03C1FD88: 881e40f9  ldr x8, [x20, #0x38]
0x03C1FD8C: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1FD90: 160940f9  ldr x22, [x8, #0x10]
0x03C1FD94: 49000035  cbnz w9, #0x3c1fd9c
0x03C1FD98: 7d83d597  bl #0x3180b8c
0x03C1FD9C: e00316aa  mov x0, x22
0x03C1FDA0: e1031faa  mov x1, xzr
0x03C1FDA4: 08156a94  bl #0x56a51c4
0x03C1FDA8: 350400b4  cbz x21, #0x3c1fe2c
0x03C1FDAC: c8d201d0  adrp x8, #0x7679000
0x03C1FDB0: 083146f9  ldr x8, [x8, #0xc60]
0x03C1FDB4: e10300aa  mov x1, x0
0x03C1FDB8: e2230091  add x2, sp, #8
0x03C1FDBC: e00315aa  mov x0, x21
0x03C1FDC0: 030140f9  ldr x3, [x8]
0x03C1FDC4: bb124b94  bl #0x4ee48b0
0x03C1FDC8: f503002a  mov w21, w0
0x03C1FDCC: 60020036  tbz w0, #0, #0x3c1fe18
0x03C1FDD0: 881e40f9  ldr x8, [x20, #0x38]
0x03C1FDD4: f40740f9  ldr x20, [sp, #8]
0x03C1FDD8: 010540f9  ldr x1, [x8, #8]
0x03C1FDDC: 28d44439  ldrb w8, [x1, #0x135]
0x03C1FDE0: 88000037  tbnz w8, #0, #0x3c1fdf0
0x03C1FDE4: e00301aa  mov x0, x1
0x03C1FDE8: 8ddad497  bl #0x315681c
0x03C1FDEC: e10300aa  mov x1, x0
0x03C1FDF0: f40100b4  cbz x20, #0x3c1fe2c
0x03C1FDF4: 880240f9  ldr x8, [x20]
0x03C1FDF8: 292040f9  ldr x9, [x1, #0x40]
0x03C1FDFC: e00314aa  mov x0, x20
0x03C1FE00: 082140f9  ldr x8, [x8, #0x40]
0x03C1FE04: 1f0109eb  cmp x8, x9
0x03C1FE08: 41010054  b.ne #0x3c1fe30
0x03C1FE0C: 6383d597  bl #0x3180b98
0x03C1FE10: 000440ad  ldp q0, q1, [x0]
0x03C1FE14: 600600ad  stp q0, q1, [x19]
0x03C1FE18: a0020012  and w0, w21, #1
0x03C1FE1C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03C1FE20: f65741a9  ldp x22, x21, [sp, #0x10]
0x03C1FE24: fe0743f8  ldr x30, [sp], #0x30
0x03C1FE28: c0035fd6  ret
0x03C1FE2C: a083d597  bl #0x3180cac
0x03C1FE30: 8684d597  bl #0x3181048

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1FE34 | ContextualizedECS.Entity$$TryGetComponent<TimeLimitedActivationComponent>
; native signature: bool ContextualizedECS_Entity__TryGetComponent_TimeLimitedActivationComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_TimeLimitedActivationComponent_o* component, const MethodInfo_3C1FE34* method);
; bytes=272 sha256=3532ab30d35c58beb25edcfc6efb317849c6c38b7b8d67bcd2ce749112188855 status=arm64_complete_bound indexed_start=True
0x03C1FE34: fe0f1df8  str x30, [sp, #-0x30]!
0x03C1FE38: f65701a9  stp x22, x21, [sp, #0x10]
0x03C1FE3C: f44f02a9  stp x20, x19, [sp, #0x20]
0x03C1FE40: 481c40f9  ldr x8, [x2, #0x38]
0x03C1FE44: f40302aa  mov x20, x2
0x03C1FE48: f30301aa  mov x19, x1
0x03C1FE4C: f50300aa  mov x21, x0
0x03C1FE50: 680100b5  cbnz x8, #0x3c1fe7c
0x03C1FE54: c0d201d0  adrp x0, #0x7679000
0x03C1FE58: 003046f9  ldr x0, [x0, #0xc60]
0x03C1FE5C: ef82d597  bl #0x3180a18
0x03C1FE60: 60d101f0  adrp x0, #0x764e000
0x03C1FE64: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1FE68: ec82d597  bl #0x3180a18
0x03C1FE6C: 881e40f9  ldr x8, [x20, #0x38]
0x03C1FE70: 680000b5  cbnz x8, #0x3c1fe7c
0x03C1FE74: e00314aa  mov x0, x20
0x03C1FE78: 80dad497  bl #0x3156878
0x03C1FE7C: 00e4006f  movi v0.2d, #0000000000000000
0x03C1FE80: ff0700f9  str xzr, [sp, #8]
0x03C1FE84: 600200ad  stp q0, q0, [x19]
0x03C1FE88: 68d101f0  adrp x8, #0x764e000
0x03C1FE8C: 08ad42f9  ldr x8, [x8, #0x558]
0x03C1FE90: b50a40f9  ldr x21, [x21, #0x10]
0x03C1FE94: 000140f9  ldr x0, [x8]
0x03C1FE98: 881e40f9  ldr x8, [x20, #0x38]
0x03C1FE9C: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1FEA0: 160940f9  ldr x22, [x8, #0x10]
0x03C1FEA4: 49000035  cbnz w9, #0x3c1feac
0x03C1FEA8: 3983d597  bl #0x3180b8c
0x03C1FEAC: e00316aa  mov x0, x22
0x03C1FEB0: e1031faa  mov x1, xzr
0x03C1FEB4: c4146a94  bl #0x56a51c4
0x03C1FEB8: 350400b4  cbz x21, #0x3c1ff3c
0x03C1FEBC: c8d201d0  adrp x8, #0x7679000
0x03C1FEC0: 083146f9  ldr x8, [x8, #0xc60]
0x03C1FEC4: e10300aa  mov x1, x0
0x03C1FEC8: e2230091  add x2, sp, #8
0x03C1FECC: e00315aa  mov x0, x21
0x03C1FED0: 030140f9  ldr x3, [x8]
0x03C1FED4: 77124b94  bl #0x4ee48b0
0x03C1FED8: f503002a  mov w21, w0
0x03C1FEDC: 60020036  tbz w0, #0, #0x3c1ff28
0x03C1FEE0: 881e40f9  ldr x8, [x20, #0x38]
0x03C1FEE4: f40740f9  ldr x20, [sp, #8]
0x03C1FEE8: 010540f9  ldr x1, [x8, #8]
0x03C1FEEC: 28d44439  ldrb w8, [x1, #0x135]
0x03C1FEF0: 88000037  tbnz w8, #0, #0x3c1ff00
0x03C1FEF4: e00301aa  mov x0, x1
0x03C1FEF8: 49dad497  bl #0x315681c
0x03C1FEFC: e10300aa  mov x1, x0
0x03C1FF00: f40100b4  cbz x20, #0x3c1ff3c
0x03C1FF04: 880240f9  ldr x8, [x20]
0x03C1FF08: 292040f9  ldr x9, [x1, #0x40]
0x03C1FF0C: e00314aa  mov x0, x20
0x03C1FF10: 082140f9  ldr x8, [x8, #0x40]
0x03C1FF14: 1f0109eb  cmp x8, x9
0x03C1FF18: 41010054  b.ne #0x3c1ff40
0x03C1FF1C: 1f83d597  bl #0x3180b98
0x03C1FF20: 000440ad  ldp q0, q1, [x0]
0x03C1FF24: 600600ad  stp q0, q1, [x19]
0x03C1FF28: a0020012  and w0, w21, #1
0x03C1FF2C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03C1FF30: f65741a9  ldp x22, x21, [sp, #0x10]
0x03C1FF34: fe0743f8  ldr x30, [sp], #0x30
0x03C1FF38: c0035fd6  ret
0x03C1FF3C: 5c83d597  bl #0x3180cac
0x03C1FF40: 4284d597  bl #0x3181048

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1FF44 | ContextualizedECS.Entity$$TryGetComponent<TimeLockComponent>
; native signature: bool ContextualizedECS_Entity__TryGetComponent_TimeLockComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_TimeLockComponent_o* component, const MethodInfo_3C1FF44* method);
; bytes=284 sha256=2299100d05905e046ca1c71998a5e962f9d06926a32e5cd52f8374d2192839ed status=arm64_complete_bound indexed_start=True
0x03C1FF44: fe0f1df8  str x30, [sp, #-0x30]!
0x03C1FF48: f65701a9  stp x22, x21, [sp, #0x10]
0x03C1FF4C: f44f02a9  stp x20, x19, [sp, #0x20]
0x03C1FF50: 481c40f9  ldr x8, [x2, #0x38]
0x03C1FF54: f40302aa  mov x20, x2
0x03C1FF58: f30301aa  mov x19, x1
0x03C1FF5C: f50300aa  mov x21, x0
0x03C1FF60: 680100b5  cbnz x8, #0x3c1ff8c
0x03C1FF64: c0d201d0  adrp x0, #0x7679000
0x03C1FF68: 003046f9  ldr x0, [x0, #0xc60]
0x03C1FF6C: ab82d597  bl #0x3180a18
0x03C1FF70: 60d101f0  adrp x0, #0x764e000
0x03C1FF74: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1FF78: a882d597  bl #0x3180a18
0x03C1FF7C: 881e40f9  ldr x8, [x20, #0x38]
0x03C1FF80: 680000b5  cbnz x8, #0x3c1ff8c
0x03C1FF84: e00314aa  mov x0, x20
0x03C1FF88: 3cdad497  bl #0x3156878
0x03C1FF8C: 00e4006f  movi v0.2d, #0000000000000000
0x03C1FF90: ff0700f9  str xzr, [sp, #8]
0x03C1FF94: 7f1200f9  str xzr, [x19, #0x20]
0x03C1FF98: 600200ad  stp q0, q0, [x19]
0x03C1FF9C: 68d101f0  adrp x8, #0x764e000
0x03C1FFA0: 08ad42f9  ldr x8, [x8, #0x558]
0x03C1FFA4: b50a40f9  ldr x21, [x21, #0x10]
0x03C1FFA8: 000140f9  ldr x0, [x8]
0x03C1FFAC: 881e40f9  ldr x8, [x20, #0x38]
0x03C1FFB0: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1FFB4: 160940f9  ldr x22, [x8, #0x10]
0x03C1FFB8: 49000035  cbnz w9, #0x3c1ffc0
0x03C1FFBC: f482d597  bl #0x3180b8c
0x03C1FFC0: e00316aa  mov x0, x22
0x03C1FFC4: e1031faa  mov x1, xzr
0x03C1FFC8: 7f146a94  bl #0x56a51c4
0x03C1FFCC: 750400b4  cbz x21, #0x3c20058
0x03C1FFD0: c8d201d0  adrp x8, #0x7679000
0x03C1FFD4: 083146f9  ldr x8, [x8, #0xc60]
0x03C1FFD8: e10300aa  mov x1, x0
0x03C1FFDC: e2230091  add x2, sp, #8
0x03C1FFE0: e00315aa  mov x0, x21
0x03C1FFE4: 030140f9  ldr x3, [x8]
0x03C1FFE8: 32124b94  bl #0x4ee48b0
0x03C1FFEC: f503002a  mov w21, w0
0x03C1FFF0: a0020036  tbz w0, #0, #0x3c20044
0x03C1FFF4: 881e40f9  ldr x8, [x20, #0x38]
0x03C1FFF8: f40740f9  ldr x20, [sp, #8]
0x03C1FFFC: 010540f9  ldr x1, [x8, #8]
0x03C20000: 28d44439  ldrb w8, [x1, #0x135]
0x03C20004: 88000037  tbnz w8, #0, #0x3c20014
0x03C20008: e00301aa  mov x0, x1
0x03C2000C: 04dad497  bl #0x315681c
0x03C20010: e10300aa  mov x1, x0
0x03C20014: 340200b4  cbz x20, #0x3c20058
0x03C20018: 880240f9  ldr x8, [x20]
0x03C2001C: 292040f9  ldr x9, [x1, #0x40]
0x03C20020: e00314aa  mov x0, x20
0x03C20024: 082140f9  ldr x8, [x8, #0x40]
0x03C20028: 1f0109eb  cmp x8, x9
0x03C2002C: 81010054  b.ne #0x3c2005c
0x03C20030: da82d597  bl #0x3180b98
0x03C20034: 000440ad  ldp q0, q1, [x0]
0x03C20038: 081040f9  ldr x8, [x0, #0x20]
0x03C2003C: 600600ad  stp q0, q1, [x19]
0x03C20040: 681200f9  str x8, [x19, #0x20]
0x03C20044: a0020012  and w0, w21, #1
0x03C20048: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03C2004C: f65741a9  ldp x22, x21, [sp, #0x10]
0x03C20050: fe0743f8  ldr x30, [sp], #0x30
0x03C20054: c0035fd6  ret
0x03C20058: 1583d597  bl #0x3180cac
0x03C2005C: fb83d597  bl #0x3181048

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C20060 | ContextualizedECS.Entity$$TryGetComponent<ToolSpawningComponent>
; native signature: bool ContextualizedECS_Entity__TryGetComponent_ToolSpawningComponent_ (ContextualizedECS_Entity_o* __this, Merger_MergeBoard_Components_ToolSpawningComponent_o* component, const MethodInfo_3C20060* method);
; bytes=280 sha256=a2e8c67de339b23cf80be96c74b67cd4e98a32dc7fedc6fa38b8db225518081b status=arm64_complete_bound indexed_start=True
0x03C20060: fe0f1df8  str x30, [sp, #-0x30]!
0x03C20064: f65701a9  stp x22, x21, [sp, #0x10]
0x03C20068: f44f02a9  stp x20, x19, [sp, #0x20]
0x03C2006C: 481c40f9  ldr x8, [x2, #0x38]
0x03C20070: f40302aa  mov x20, x2
0x03C20074: f30301aa  mov x19, x1
0x03C20078: f50300aa  mov x21, x0
0x03C2007C: 680100b5  cbnz x8, #0x3c200a8
0x03C20080: c0d201b0  adrp x0, #0x7679000
0x03C20084: 003046f9  ldr x0, [x0, #0xc60]
0x03C20088: 6482d597  bl #0x3180a18
0x03C2008C: 60d101d0  adrp x0, #0x764e000
0x03C20090: 00ac42f9  ldr x0, [x0, #0x558]
0x03C20094: 6182d597  bl #0x3180a18
0x03C20098: 881e40f9  ldr x8, [x20, #0x38]
0x03C2009C: 680000b5  cbnz x8, #0x3c200a8
0x03C200A0: e00314aa  mov x0, x20
0x03C200A4: f5d9d497  bl #0x3156878
0x03C200A8: ff0700f9  str xzr, [sp, #8]
0x03C200AC: 7f7e00a9  stp xzr, xzr, [x19]
0x03C200B0: 68d101d0  adrp x8, #0x764e000
0x03C200B4: 08ad42f9  ldr x8, [x8, #0x558]
0x03C200B8: b50a40f9  ldr x21, [x21, #0x10]
0x03C200BC: 000140f9  ldr x0, [x8]
0x03C200C0: 881e40f9  ldr x8, [x20, #0x38]
0x03C200C4: 09e040b9  ldr w9, [x0, #0xe0]
0x03C200C8: 160940f9  ldr x22, [x8, #0x10]
0x03C200CC: 49000035  cbnz w9, #0x3c200d4
0x03C200D0: af82d597  bl #0x3180b8c
0x03C200D4: e00316aa  mov x0, x22
0x03C200D8: e1031faa  mov x1, xzr
0x03C200DC: 3a146a94  bl #0x56a51c4
0x03C200E0: 950400b4  cbz x21, #0x3c20170
0x03C200E4: c8d201b0  adrp x8, #0x7679000
0x03C200E8: 083146f9  ldr x8, [x8, #0xc60]
0x03C200EC: e10300aa  mov x1, x0
0x03C200F0: e2230091  add x2, sp, #8
0x03C200F4: e00315aa  mov x0, x21
0x03C200F8: 030140f9  ldr x3, [x8]
0x03C200FC: ed114b94  bl #0x4ee48b0
0x03C20100: f503002a  mov w21, w0
0x03C20104: c0020036  tbz w0, #0, #0x3c2015c
0x03C20108: 881e40f9  ldr x8, [x20, #0x38]
0x03C2010C: f40740f9  ldr x20, [sp, #8]
0x03C20110: 010540f9  ldr x1, [x8, #8]
0x03C20114: 28d44439  ldrb w8, [x1, #0x135]
0x03C20118: 88000037  tbnz w8, #0, #0x3c20128
0x03C2011C: e00301aa  mov x0, x1
0x03C20120: bfd9d497  bl #0x315681c
0x03C20124: e10300aa  mov x1, x0
0x03C20128: 540200b4  cbz x20, #0x3c20170
0x03C2012C: 880240f9  ldr x8, [x20]
0x03C20130: 292040f9  ldr x9, [x1, #0x40]
0x03C20134: e00314aa  mov x0, x20
0x03C20138: 082140f9  ldr x8, [x8, #0x40]
0x03C2013C: 1f0109eb  cmp x8, x9
0x03C20140: a1010054  b.ne #0x3c20174
0x03C20144: 9582d597  bl #0x3180b98
0x03C20148: 0000c03d  ldr q0, [x0]
0x03C2014C: e00313aa  mov x0, x19
0x03C20150: e1031faa  mov x1, xzr
0x03C20154: 6002803d  str q0, [x19]
0x03C20158: 1b82d597  bl #0x31809c4
0x03C2015C: a0020012  and w0, w21, #1
0x03C20160: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03C20164: f65741a9  ldp x22, x21, [sp, #0x10]
0x03C20168: fe0743f8  ldr x30, [sp], #0x30
0x03C2016C: c0035fd6  ret
0x03C20170: cf82d597  bl #0x3180cac
0x03C20174: b583d597  bl #0x3181048

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C20178 | ContextualizedECS.Entity$$TryGetComponent<__Il2CppFullySharedGenericStructType>
; native signature: bool ContextualizedECS_Entity__TryGetComponent___Il2CppFullySharedGenericStructType_ (ContextualizedECS_Entity_o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o* component, const MethodInfo_3C20178* method);
; bytes=432 sha256=6958a5bb78b1fc9a0579659fccef37c3ad4976646c045b443339d815b168d435 status=arm64_complete_bound indexed_start=True
0x03C20178: ff0301d1  sub sp, sp, #0x40
0x03C2017C: fe5f01a9  stp x30, x23, [sp, #0x10]
0x03C20180: f65702a9  stp x22, x21, [sp, #0x20]
0x03C20184: f44f03a9  stp x20, x19, [sp, #0x30]
0x03C20188: 481c40f9  ldr x8, [x2, #0x38]
0x03C2018C: f40302aa  mov x20, x2
0x03C20190: f30301aa  mov x19, x1
0x03C20194: f50300aa  mov x21, x0
0x03C20198: 880100b5  cbnz x8, #0x3c201c8
0x03C2019C: c0d201b0  adrp x0, #0x7679000
0x03C201A0: 003046f9  ldr x0, [x0, #0xc60]
0x03C201A4: 1d82d597  bl #0x3180a18
0x03C201A8: 60d101d0  adrp x0, #0x764e000
0x03C201AC: 00ac42f9  ldr x0, [x0, #0x558]
0x03C201B0: 1a82d597  bl #0x3180a18
0x03C201B4: 881e40f9  ldr x8, [x20, #0x38]
0x03C201B8: 880000b5  cbnz x8, #0x3c201c8
0x03C201BC: e00314aa  mov x0, x20
0x03C201C0: aed9d497  bl #0x3156878
0x03C201C4: 881e40f9  ldr x8, [x20, #0x38]
0x03C201C8: 080540f9  ldr x8, [x8, #8]
0x03C201CC: e00313aa  mov x0, x19
0x03C201D0: e1031f2a  mov w1, wzr
0x03C201D4: 17fd40b9  ldr w23, [x8, #0xfc]
0x03C201D8: ff0700f9  str xzr, [sp, #8]
0x03C201DC: e20317aa  mov x2, x23
0x03C201E0: f0b9d694  bl #0x71ce9a0
0x03C201E4: 68d101d0  adrp x8, #0x764e000
0x03C201E8: 08ad42f9  ldr x8, [x8, #0x558]
0x03C201EC: b50a40f9  ldr x21, [x21, #0x10]
0x03C201F0: 000140f9  ldr x0, [x8]
0x03C201F4: 881e40f9  ldr x8, [x20, #0x38]
0x03C201F8: 09e040b9  ldr w9, [x0, #0xe0]
0x03C201FC: 160940f9  ldr x22, [x8, #0x10]
0x03C20200: 49000035  cbnz w9, #0x3c20208
0x03C20204: 6282d597  bl #0x3180b8c
0x03C20208: e00316aa  mov x0, x22
0x03C2020C: e1031faa  mov x1, xzr
0x03C20210: ed136a94  bl #0x56a51c4
0x03C20214: 550800b4  cbz x21, #0x3c2031c
0x03C20218: c8d201b0  adrp x8, #0x7679000
0x03C2021C: 083146f9  ldr x8, [x8, #0xc60]
0x03C20220: e10300aa  mov x1, x0
0x03C20224: e2230091  add x2, sp, #8
0x03C20228: e00315aa  mov x0, x21
0x03C2022C: 030140f9  ldr x3, [x8]
0x03C20230: a0114b94  bl #0x4ee48b0
0x03C20234: f503002a  mov w21, w0
0x03C20238: 60060036  tbz w0, #0, #0x3c20304
0x03C2023C: 881e40f9  ldr x8, [x20, #0x38]
0x03C20240: f60740f9  ldr x22, [sp, #8]
0x03C20244: 010540f9  ldr x1, [x8, #8]
0x03C20248: 28d44439  ldrb w8, [x1, #0x135]
0x03C2024C: 88000037  tbnz w8, #0, #0x3c2025c
0x03C20250: e00301aa  mov x0, x1
0x03C20254: 72d9d497  bl #0x315681c
0x03C20258: e10300aa  mov x1, x0
0x03C2025C: 160600b4  cbz x22, #0x3c2031c
0x03C20260: c80240f9  ldr x8, [x22]
0x03C20264: 292040f9  ldr x9, [x1, #0x40]
0x03C20268: 082140f9  ldr x8, [x8, #0x40]
0x03C2026C: 1f0109eb  cmp x8, x9
0x03C20270: 81050054  b.ne #0x3c20320
0x03C20274: e00316aa  mov x0, x22
0x03C20278: 4882d597  bl #0x3180b98
0x03C2027C: e10300aa  mov x1, x0
0x03C20280: e00313aa  mov x0, x19
0x03C20284: e20317aa  mov x2, x23
0x03C20288: bab9d694  bl #0x71ce970
0x03C2028C: 881e40f9  ldr x8, [x20, #0x38]
0x03C20290: 010540f9  ldr x1, [x8, #8]
0x03C20294: 28d40491  add x8, x1, #0x135
0x03C20298: 08014079  ldrh w8, [x8]
0x03C2029C: 48010037  tbnz w8, #0, #0x3c202c4
0x03C202A0: e00301aa  mov x0, x1
0x03C202A4: 5ed9d497  bl #0x315681c
0x03C202A8: 881e40f9  ldr x8, [x20, #0x38]
0x03C202AC: f40300aa  mov x20, x0
0x03C202B0: 010540f9  ldr x1, [x8, #8]
0x03C202B4: 28d40491  add x8, x1, #0x135
0x03C202B8: 08014079  ldrh w8, [x8]
0x03C202BC: 88000036  tbz w8, #0, #0x3c202cc
0x03C202C0: 06000014  b #0x3c202d8
0x03C202C4: f40301aa  mov x20, x1
0x03C202C8: 88000037  tbnz w8, #0, #0x3c202d8
0x03C202CC: e00301aa  mov x0, x1
0x03C202D0: 53d9d497  bl #0x315681c
0x03C202D4: e10300aa  mov x1, x0
0x03C202D8: c80240f9  ldr x8, [x22]
0x03C202DC: 292040f9  ldr x9, [x1, #0x40]
0x03C202E0: 082140f9  ldr x8, [x8, #0x40]
0x03C202E4: 1f0109eb  cmp x8, x9
0x03C202E8: c1010054  b.ne #0x3c20320
0x03C202EC: e00316aa  mov x0, x22
0x03C202F0: 2a82d597  bl #0x3180b98
0x03C202F4: e20300aa  mov x2, x0
0x03C202F8: e00314aa  mov x0, x20
0x03C202FC: e10313aa  mov x1, x19
0x03C20300: b281d597  bl #0x31809c8
0x03C20304: a0020012  and w0, w21, #1
0x03C20308: f44f43a9  ldp x20, x19, [sp, #0x30]
0x03C2030C: f65742a9  ldp x22, x21, [sp, #0x20]
0x03C20310: fe5f41a9  ldp x30, x23, [sp, #0x10]
0x03C20314: ff030191  add sp, sp, #0x40
0x03C20318: c0035fd6  ret
0x03C2031C: 6482d597  bl #0x3180cac
0x03C20320: e00316aa  mov x0, x22
0x03C20324: 4983d597  bl #0x3181048

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1AE90 | ContextualizedECS.Entity$$GetComponent<BoardTilePositionComponent>
; native signature: Merger_MergeBoard_Components_BoardTilePositionComponent_o ContextualizedECS_Entity__GetComponent_BoardTilePositionComponent_ (ContextualizedECS_Entity_o* __this, const MethodInfo_3C1AE90* method);
; bytes=228 sha256=43023aa32f5e1625a86e638525eca03b22515345452f269a887b796b1a83f5a9 status=arm64_complete_bound indexed_start=True
0x03C1AE90: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x03C1AE94: f44f01a9  stp x20, x19, [sp, #0x10]
0x03C1AE98: 281c40f9  ldr x8, [x1, #0x38]
0x03C1AE9C: f30301aa  mov x19, x1
0x03C1AEA0: f40300aa  mov x20, x0
0x03C1AEA4: 880100b5  cbnz x8, #0x3c1aed4
0x03C1AEA8: e0d201f0  adrp x0, #0x7679000
0x03C1AEAC: 002446f9  ldr x0, [x0, #0xc48]
0x03C1AEB0: da96d597  bl #0x3180a18
0x03C1AEB4: a0d10190  adrp x0, #0x764e000
0x03C1AEB8: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1AEBC: d796d597  bl #0x3180a18
0x03C1AEC0: 681e40f9  ldr x8, [x19, #0x38]
0x03C1AEC4: 880000b5  cbnz x8, #0x3c1aed4
0x03C1AEC8: e00313aa  mov x0, x19
0x03C1AECC: 6beed497  bl #0x3156878
0x03C1AED0: 681e40f9  ldr x8, [x19, #0x38]
0x03C1AED4: a9d10190  adrp x9, #0x764e000
0x03C1AED8: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1AEDC: 940a40f9  ldr x20, [x20, #0x10]
0x03C1AEE0: 150140f9  ldr x21, [x8]
0x03C1AEE4: 200140f9  ldr x0, [x9]
0x03C1AEE8: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1AEEC: 49000035  cbnz w9, #0x3c1aef4
0x03C1AEF0: 2797d597  bl #0x3180b8c
0x03C1AEF4: e00315aa  mov x0, x21
0x03C1AEF8: e1031faa  mov x1, xzr
0x03C1AEFC: b2286a94  bl #0x56a51c4
0x03C1AF00: 740300b4  cbz x20, #0x3c1af6c
0x03C1AF04: e8d201f0  adrp x8, #0x7679000
0x03C1AF08: 082546f9  ldr x8, [x8, #0xc48]
0x03C1AF0C: e10300aa  mov x1, x0
0x03C1AF10: e00314aa  mov x0, x20
0x03C1AF14: 020140f9  ldr x2, [x8]
0x03C1AF18: 791f4b94  bl #0x4ee2cfc
0x03C1AF1C: 681e40f9  ldr x8, [x19, #0x38]
0x03C1AF20: f30300aa  mov x19, x0
0x03C1AF24: 010540f9  ldr x1, [x8, #8]
0x03C1AF28: 28d44439  ldrb w8, [x1, #0x135]
0x03C1AF2C: 88000037  tbnz w8, #0, #0x3c1af3c
0x03C1AF30: e00301aa  mov x0, x1
0x03C1AF34: 3aeed497  bl #0x315681c
0x03C1AF38: e10300aa  mov x1, x0
0x03C1AF3C: 930100b4  cbz x19, #0x3c1af6c
0x03C1AF40: 680240f9  ldr x8, [x19]
0x03C1AF44: 292040f9  ldr x9, [x1, #0x40]
0x03C1AF48: e00313aa  mov x0, x19
0x03C1AF4C: 082140f9  ldr x8, [x8, #0x40]
0x03C1AF50: 1f0109eb  cmp x8, x9
0x03C1AF54: e1000054  b.ne #0x3c1af70
0x03C1AF58: 1097d597  bl #0x3180b98
0x03C1AF5C: 000040b9  ldr w0, [x0]
0x03C1AF60: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03C1AF64: fe57c2a8  ldp x30, x21, [sp], #0x20
0x03C1AF68: c0035fd6  ret
0x03C1AF6C: 5097d597  bl #0x3180cac
0x03C1AF70: 3698d597  bl #0x3181048

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1AF74 | ContextualizedECS.Entity$$GetComponent<BoxComponent>
; native signature: Merger_MergeBoard_Components_BoxComponent_o ContextualizedECS_Entity__GetComponent_BoxComponent_ (ContextualizedECS_Entity_o* __this, const MethodInfo_3C1AF74* method);
; bytes=252 sha256=dd7254e2ecc658e9673cf648bc8584c5a1f5c14e860448cd47d3f265b1d3548b status=arm64_complete_bound indexed_start=True
0x03C1AF74: fe0f1df8  str x30, [sp, #-0x30]!
0x03C1AF78: f65701a9  stp x22, x21, [sp, #0x10]
0x03C1AF7C: f44f02a9  stp x20, x19, [sp, #0x20]
0x03C1AF80: 291c40f9  ldr x9, [x1, #0x38]
0x03C1AF84: f40301aa  mov x20, x1
0x03C1AF88: f50300aa  mov x21, x0
0x03C1AF8C: f30308aa  mov x19, x8
0x03C1AF90: 890100b5  cbnz x9, #0x3c1afc0
0x03C1AF94: e0d201f0  adrp x0, #0x7679000
0x03C1AF98: 002446f9  ldr x0, [x0, #0xc48]
0x03C1AF9C: 9f96d597  bl #0x3180a18
0x03C1AFA0: a0d10190  adrp x0, #0x764e000
0x03C1AFA4: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1AFA8: 9c96d597  bl #0x3180a18
0x03C1AFAC: 891e40f9  ldr x9, [x20, #0x38]
0x03C1AFB0: 890000b5  cbnz x9, #0x3c1afc0
0x03C1AFB4: e00314aa  mov x0, x20
0x03C1AFB8: 30eed497  bl #0x3156878
0x03C1AFBC: 891e40f9  ldr x9, [x20, #0x38]
0x03C1AFC0: a8d10190  adrp x8, #0x764e000
0x03C1AFC4: 08ad42f9  ldr x8, [x8, #0x558]
0x03C1AFC8: b50a40f9  ldr x21, [x21, #0x10]
0x03C1AFCC: 360140f9  ldr x22, [x9]
0x03C1AFD0: 000140f9  ldr x0, [x8]
0x03C1AFD4: 08e040b9  ldr w8, [x0, #0xe0]
0x03C1AFD8: 48000035  cbnz w8, #0x3c1afe0
0x03C1AFDC: ec96d597  bl #0x3180b8c
0x03C1AFE0: e00316aa  mov x0, x22
0x03C1AFE4: e1031faa  mov x1, xzr
0x03C1AFE8: 77286a94  bl #0x56a51c4
0x03C1AFEC: f50300b4  cbz x21, #0x3c1b068
0x03C1AFF0: e8d201f0  adrp x8, #0x7679000
0x03C1AFF4: 082546f9  ldr x8, [x8, #0xc48]
0x03C1AFF8: e10300aa  mov x1, x0
0x03C1AFFC: e00315aa  mov x0, x21
0x03C1B000: 020140f9  ldr x2, [x8]
0x03C1B004: 3e1f4b94  bl #0x4ee2cfc
0x03C1B008: 881e40f9  ldr x8, [x20, #0x38]
0x03C1B00C: f40300aa  mov x20, x0
0x03C1B010: 010540f9  ldr x1, [x8, #8]
0x03C1B014: 28d44439  ldrb w8, [x1, #0x135]
0x03C1B018: 88000037  tbnz w8, #0, #0x3c1b028
0x03C1B01C: e00301aa  mov x0, x1
0x03C1B020: ffedd497  bl #0x315681c
0x03C1B024: e10300aa  mov x1, x0
0x03C1B028: 140200b4  cbz x20, #0x3c1b068
0x03C1B02C: 880240f9  ldr x8, [x20]
0x03C1B030: 292040f9  ldr x9, [x1, #0x40]
0x03C1B034: e00314aa  mov x0, x20
0x03C1B038: 082140f9  ldr x8, [x8, #0x40]
0x03C1B03C: 1f0109eb  cmp x8, x9
0x03C1B040: 61010054  b.ne #0x3c1b06c
0x03C1B044: d596d597  bl #0x3180b98
0x03C1B048: 0000c03d  ldr q0, [x0]
0x03C1B04C: 081040b9  ldr w8, [x0, #0x10]
0x03C1B050: f65741a9  ldp x22, x21, [sp, #0x10]
0x03C1B054: 6002803d  str q0, [x19]
0x03C1B058: 681200b9  str w8, [x19, #0x10]
0x03C1B05C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03C1B060: fe0743f8  ldr x30, [sp], #0x30
0x03C1B064: c0035fd6  ret
0x03C1B068: 1197d597  bl #0x3180cac
0x03C1B06C: f797d597  bl #0x3181048

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1B070 | ContextualizedECS.Entity$$GetComponent<ExpendableComponent>
; native signature: Merger_MergeBoard_Components_ExpendableComponent_o ContextualizedECS_Entity__GetComponent_ExpendableComponent_ (ContextualizedECS_Entity_o* __this, const MethodInfo_3C1B070* method);
; bytes=252 sha256=594c4fe012171e84a6779ce8155cee99a93b796b1c298b0283ee37b721451d3b status=arm64_complete_bound indexed_start=True
0x03C1B070: fe0f1df8  str x30, [sp, #-0x30]!
0x03C1B074: f65701a9  stp x22, x21, [sp, #0x10]
0x03C1B078: f44f02a9  stp x20, x19, [sp, #0x20]
0x03C1B07C: 291c40f9  ldr x9, [x1, #0x38]
0x03C1B080: f40301aa  mov x20, x1
0x03C1B084: f50300aa  mov x21, x0
0x03C1B088: f30308aa  mov x19, x8
0x03C1B08C: 890100b5  cbnz x9, #0x3c1b0bc
0x03C1B090: e0d201d0  adrp x0, #0x7679000
0x03C1B094: 002446f9  ldr x0, [x0, #0xc48]
0x03C1B098: 6096d597  bl #0x3180a18
0x03C1B09C: 80d101f0  adrp x0, #0x764e000
0x03C1B0A0: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1B0A4: 5d96d597  bl #0x3180a18
0x03C1B0A8: 891e40f9  ldr x9, [x20, #0x38]
0x03C1B0AC: 890000b5  cbnz x9, #0x3c1b0bc
0x03C1B0B0: e00314aa  mov x0, x20
0x03C1B0B4: f1edd497  bl #0x3156878
0x03C1B0B8: 891e40f9  ldr x9, [x20, #0x38]
0x03C1B0BC: 88d101f0  adrp x8, #0x764e000
0x03C1B0C0: 08ad42f9  ldr x8, [x8, #0x558]
0x03C1B0C4: b50a40f9  ldr x21, [x21, #0x10]
0x03C1B0C8: 360140f9  ldr x22, [x9]
0x03C1B0CC: 000140f9  ldr x0, [x8]
0x03C1B0D0: 08e040b9  ldr w8, [x0, #0xe0]
0x03C1B0D4: 48000035  cbnz w8, #0x3c1b0dc
0x03C1B0D8: ad96d597  bl #0x3180b8c
0x03C1B0DC: e00316aa  mov x0, x22
0x03C1B0E0: e1031faa  mov x1, xzr
0x03C1B0E4: 38286a94  bl #0x56a51c4
0x03C1B0E8: f50300b4  cbz x21, #0x3c1b164
0x03C1B0EC: e8d201d0  adrp x8, #0x7679000
0x03C1B0F0: 082546f9  ldr x8, [x8, #0xc48]
0x03C1B0F4: e10300aa  mov x1, x0
0x03C1B0F8: e00315aa  mov x0, x21
0x03C1B0FC: 020140f9  ldr x2, [x8]
0x03C1B100: ff1e4b94  bl #0x4ee2cfc
0x03C1B104: 881e40f9  ldr x8, [x20, #0x38]
0x03C1B108: f40300aa  mov x20, x0
0x03C1B10C: 010540f9  ldr x1, [x8, #8]
0x03C1B110: 28d44439  ldrb w8, [x1, #0x135]
0x03C1B114: 88000037  tbnz w8, #0, #0x3c1b124
0x03C1B118: e00301aa  mov x0, x1
0x03C1B11C: c0edd497  bl #0x315681c
0x03C1B120: e10300aa  mov x1, x0
0x03C1B124: 140200b4  cbz x20, #0x3c1b164
0x03C1B128: 880240f9  ldr x8, [x20]
0x03C1B12C: 292040f9  ldr x9, [x1, #0x40]
0x03C1B130: e00314aa  mov x0, x20
0x03C1B134: 082140f9  ldr x8, [x8, #0x40]
0x03C1B138: 1f0109eb  cmp x8, x9
0x03C1B13C: 61010054  b.ne #0x3c1b168
0x03C1B140: 9696d597  bl #0x3180b98
0x03C1B144: 000440ad  ldp q0, q1, [x0]
0x03C1B148: 0208c03d  ldr q2, [x0, #0x20]
0x03C1B14C: f65741a9  ldp x22, x21, [sp, #0x10]
0x03C1B150: 600600ad  stp q0, q1, [x19]
0x03C1B154: 620a803d  str q2, [x19, #0x20]
0x03C1B158: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03C1B15C: fe0743f8  ldr x30, [sp], #0x30
0x03C1B160: c0035fd6  ret
0x03C1B164: d296d597  bl #0x3180cac
0x03C1B168: b897d597  bl #0x3181048

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1B16C | ContextualizedECS.Entity$$GetComponent<FeedingCombinationComponent>
; native signature: Merger_MergeBoard_Components_FeedingCombinationComponent_o ContextualizedECS_Entity__GetComponent_FeedingCombinationComponent_ (ContextualizedECS_Entity_o* __this, const MethodInfo_3C1B16C* method);
; bytes=228 sha256=9511bab556d1386b817b35a7533db37f97c61d93b7990b410f6cc8f82304c43b status=arm64_complete_bound indexed_start=True
0x03C1B16C: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x03C1B170: f44f01a9  stp x20, x19, [sp, #0x10]
0x03C1B174: 281c40f9  ldr x8, [x1, #0x38]
0x03C1B178: f30301aa  mov x19, x1
0x03C1B17C: f40300aa  mov x20, x0
0x03C1B180: 880100b5  cbnz x8, #0x3c1b1b0
0x03C1B184: e0d201d0  adrp x0, #0x7679000
0x03C1B188: 002446f9  ldr x0, [x0, #0xc48]
0x03C1B18C: 2396d597  bl #0x3180a18
0x03C1B190: 80d101f0  adrp x0, #0x764e000
0x03C1B194: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1B198: 2096d597  bl #0x3180a18
0x03C1B19C: 681e40f9  ldr x8, [x19, #0x38]
0x03C1B1A0: 880000b5  cbnz x8, #0x3c1b1b0
0x03C1B1A4: e00313aa  mov x0, x19
0x03C1B1A8: b4edd497  bl #0x3156878
0x03C1B1AC: 681e40f9  ldr x8, [x19, #0x38]
0x03C1B1B0: 89d101f0  adrp x9, #0x764e000
0x03C1B1B4: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1B1B8: 940a40f9  ldr x20, [x20, #0x10]
0x03C1B1BC: 150140f9  ldr x21, [x8]
0x03C1B1C0: 200140f9  ldr x0, [x9]
0x03C1B1C4: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1B1C8: 49000035  cbnz w9, #0x3c1b1d0
0x03C1B1CC: 7096d597  bl #0x3180b8c
0x03C1B1D0: e00315aa  mov x0, x21
0x03C1B1D4: e1031faa  mov x1, xzr
0x03C1B1D8: fb276a94  bl #0x56a51c4
0x03C1B1DC: 740300b4  cbz x20, #0x3c1b248
0x03C1B1E0: e8d201d0  adrp x8, #0x7679000
0x03C1B1E4: 082546f9  ldr x8, [x8, #0xc48]
0x03C1B1E8: e10300aa  mov x1, x0
0x03C1B1EC: e00314aa  mov x0, x20
0x03C1B1F0: 020140f9  ldr x2, [x8]
0x03C1B1F4: c21e4b94  bl #0x4ee2cfc
0x03C1B1F8: 681e40f9  ldr x8, [x19, #0x38]
0x03C1B1FC: f30300aa  mov x19, x0
0x03C1B200: 010540f9  ldr x1, [x8, #8]
0x03C1B204: 28d44439  ldrb w8, [x1, #0x135]
0x03C1B208: 88000037  tbnz w8, #0, #0x3c1b218
0x03C1B20C: e00301aa  mov x0, x1
0x03C1B210: 83edd497  bl #0x315681c
0x03C1B214: e10300aa  mov x1, x0
0x03C1B218: 930100b4  cbz x19, #0x3c1b248
0x03C1B21C: 680240f9  ldr x8, [x19]
0x03C1B220: 292040f9  ldr x9, [x1, #0x40]
0x03C1B224: e00313aa  mov x0, x19
0x03C1B228: 082140f9  ldr x8, [x8, #0x40]
0x03C1B22C: 1f0109eb  cmp x8, x9
0x03C1B230: e1000054  b.ne #0x3c1b24c
0x03C1B234: 5996d597  bl #0x3180b98
0x03C1B238: 000040f9  ldr x0, [x0]
0x03C1B23C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03C1B240: fe57c2a8  ldp x30, x21, [sp], #0x20
0x03C1B244: c0035fd6  ret
0x03C1B248: 9996d597  bl #0x3180cac
0x03C1B24C: 7f97d597  bl #0x3181048

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1B250 | ContextualizedECS.Entity$$GetComponent<IdComponent>
; native signature: Merger_MergeBoard_Components_IdComponent_o ContextualizedECS_Entity__GetComponent_IdComponent_ (ContextualizedECS_Entity_o* __this, const MethodInfo_3C1B250* method);
; bytes=252 sha256=f38641d4d4385e36bc02cebbc7ea80b0a830db7509996a62281185818cba2500 status=arm64_complete_bound indexed_start=True
0x03C1B250: fe0f1df8  str x30, [sp, #-0x30]!
0x03C1B254: f65701a9  stp x22, x21, [sp, #0x10]
0x03C1B258: f44f02a9  stp x20, x19, [sp, #0x20]
0x03C1B25C: 291c40f9  ldr x9, [x1, #0x38]
0x03C1B260: f40301aa  mov x20, x1
0x03C1B264: f50300aa  mov x21, x0
0x03C1B268: f30308aa  mov x19, x8
0x03C1B26C: 890100b5  cbnz x9, #0x3c1b29c
0x03C1B270: e0d201d0  adrp x0, #0x7679000
0x03C1B274: 002446f9  ldr x0, [x0, #0xc48]
0x03C1B278: e895d597  bl #0x3180a18
0x03C1B27C: 80d101f0  adrp x0, #0x764e000
0x03C1B280: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1B284: e595d597  bl #0x3180a18
0x03C1B288: 891e40f9  ldr x9, [x20, #0x38]
0x03C1B28C: 890000b5  cbnz x9, #0x3c1b29c
0x03C1B290: e00314aa  mov x0, x20
0x03C1B294: 79edd497  bl #0x3156878
0x03C1B298: 891e40f9  ldr x9, [x20, #0x38]
0x03C1B29C: 88d101f0  adrp x8, #0x764e000
0x03C1B2A0: 08ad42f9  ldr x8, [x8, #0x558]
0x03C1B2A4: b50a40f9  ldr x21, [x21, #0x10]
0x03C1B2A8: 360140f9  ldr x22, [x9]
0x03C1B2AC: 000140f9  ldr x0, [x8]
0x03C1B2B0: 08e040b9  ldr w8, [x0, #0xe0]
0x03C1B2B4: 48000035  cbnz w8, #0x3c1b2bc
0x03C1B2B8: 3596d597  bl #0x3180b8c
0x03C1B2BC: e00316aa  mov x0, x22
0x03C1B2C0: e1031faa  mov x1, xzr
0x03C1B2C4: c0276a94  bl #0x56a51c4
0x03C1B2C8: f50300b4  cbz x21, #0x3c1b344
0x03C1B2CC: e8d201d0  adrp x8, #0x7679000
0x03C1B2D0: 082546f9  ldr x8, [x8, #0xc48]
0x03C1B2D4: e10300aa  mov x1, x0
0x03C1B2D8: e00315aa  mov x0, x21
0x03C1B2DC: 020140f9  ldr x2, [x8]
0x03C1B2E0: 871e4b94  bl #0x4ee2cfc
0x03C1B2E4: 881e40f9  ldr x8, [x20, #0x38]
0x03C1B2E8: f40300aa  mov x20, x0
0x03C1B2EC: 010540f9  ldr x1, [x8, #8]
0x03C1B2F0: 28d44439  ldrb w8, [x1, #0x135]
0x03C1B2F4: 88000037  tbnz w8, #0, #0x3c1b304
0x03C1B2F8: e00301aa  mov x0, x1
0x03C1B2FC: 48edd497  bl #0x315681c
0x03C1B300: e10300aa  mov x1, x0
0x03C1B304: 140200b4  cbz x20, #0x3c1b344
0x03C1B308: 880240f9  ldr x8, [x20]
0x03C1B30C: 292040f9  ldr x9, [x1, #0x40]
0x03C1B310: e00314aa  mov x0, x20
0x03C1B314: 082140f9  ldr x8, [x8, #0x40]
0x03C1B318: 1f0109eb  cmp x8, x9
0x03C1B31C: 61010054  b.ne #0x3c1b348
0x03C1B320: 1e96d597  bl #0x3180b98
0x03C1B324: 000440ad  ldp q0, q1, [x0]
0x03C1B328: 0208c03d  ldr q2, [x0, #0x20]
0x03C1B32C: f65741a9  ldp x22, x21, [sp, #0x10]
0x03C1B330: 600600ad  stp q0, q1, [x19]
0x03C1B334: 620a803d  str q2, [x19, #0x20]
0x03C1B338: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03C1B33C: fe0743f8  ldr x30, [sp], #0x30
0x03C1B340: c0035fd6  ret
0x03C1B344: 5a96d597  bl #0x3180cac
0x03C1B348: 4097d597  bl #0x3181048

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1B34C | ContextualizedECS.Entity$$GetComponent<InteractionComponent>
; native signature: Merger_MergeBoard_Components_InteractionComponent_o ContextualizedECS_Entity__GetComponent_InteractionComponent_ (ContextualizedECS_Entity_o* __this, const MethodInfo_3C1B34C* method);
; bytes=252 sha256=3ae215482406330314cf42457984163f9401d39b6127fde882eeab2e055722fb status=arm64_complete_bound indexed_start=True
0x03C1B34C: fe0f1df8  str x30, [sp, #-0x30]!
0x03C1B350: f65701a9  stp x22, x21, [sp, #0x10]
0x03C1B354: f44f02a9  stp x20, x19, [sp, #0x20]
0x03C1B358: 291c40f9  ldr x9, [x1, #0x38]
0x03C1B35C: f40301aa  mov x20, x1
0x03C1B360: f50300aa  mov x21, x0
0x03C1B364: f30308aa  mov x19, x8
0x03C1B368: 890100b5  cbnz x9, #0x3c1b398
0x03C1B36C: e0d201d0  adrp x0, #0x7679000
0x03C1B370: 002446f9  ldr x0, [x0, #0xc48]
0x03C1B374: a995d597  bl #0x3180a18
0x03C1B378: 80d101f0  adrp x0, #0x764e000
0x03C1B37C: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1B380: a695d597  bl #0x3180a18
0x03C1B384: 891e40f9  ldr x9, [x20, #0x38]
0x03C1B388: 890000b5  cbnz x9, #0x3c1b398
0x03C1B38C: e00314aa  mov x0, x20
0x03C1B390: 3aedd497  bl #0x3156878
0x03C1B394: 891e40f9  ldr x9, [x20, #0x38]
0x03C1B398: 88d101f0  adrp x8, #0x764e000
0x03C1B39C: 08ad42f9  ldr x8, [x8, #0x558]
0x03C1B3A0: b50a40f9  ldr x21, [x21, #0x10]
0x03C1B3A4: 360140f9  ldr x22, [x9]
0x03C1B3A8: 000140f9  ldr x0, [x8]
0x03C1B3AC: 08e040b9  ldr w8, [x0, #0xe0]
0x03C1B3B0: 48000035  cbnz w8, #0x3c1b3b8
0x03C1B3B4: f695d597  bl #0x3180b8c
0x03C1B3B8: e00316aa  mov x0, x22
0x03C1B3BC: e1031faa  mov x1, xzr
0x03C1B3C0: 81276a94  bl #0x56a51c4
0x03C1B3C4: f50300b4  cbz x21, #0x3c1b440
0x03C1B3C8: e8d201d0  adrp x8, #0x7679000
0x03C1B3CC: 082546f9  ldr x8, [x8, #0xc48]
0x03C1B3D0: e10300aa  mov x1, x0
0x03C1B3D4: e00315aa  mov x0, x21
0x03C1B3D8: 020140f9  ldr x2, [x8]
0x03C1B3DC: 481e4b94  bl #0x4ee2cfc
0x03C1B3E0: 881e40f9  ldr x8, [x20, #0x38]
0x03C1B3E4: f40300aa  mov x20, x0
0x03C1B3E8: 010540f9  ldr x1, [x8, #8]
0x03C1B3EC: 28d44439  ldrb w8, [x1, #0x135]
0x03C1B3F0: 88000037  tbnz w8, #0, #0x3c1b400
0x03C1B3F4: e00301aa  mov x0, x1
0x03C1B3F8: 09edd497  bl #0x315681c
0x03C1B3FC: e10300aa  mov x1, x0
0x03C1B400: 140200b4  cbz x20, #0x3c1b440
0x03C1B404: 880240f9  ldr x8, [x20]
0x03C1B408: 292040f9  ldr x9, [x1, #0x40]
0x03C1B40C: e00314aa  mov x0, x20
0x03C1B410: 082140f9  ldr x8, [x8, #0x40]
0x03C1B414: 1f0109eb  cmp x8, x9
0x03C1B418: 61010054  b.ne #0x3c1b444
0x03C1B41C: df95d597  bl #0x3180b98
0x03C1B420: 000440ad  ldp q0, q1, [x0]
0x03C1B424: 081040f9  ldr x8, [x0, #0x20]
0x03C1B428: f65741a9  ldp x22, x21, [sp, #0x10]
0x03C1B42C: 600600ad  stp q0, q1, [x19]
0x03C1B430: 681200f9  str x8, [x19, #0x20]
0x03C1B434: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03C1B438: fe0743f8  ldr x30, [sp], #0x30
0x03C1B43C: c0035fd6  ret
0x03C1B440: 1b96d597  bl #0x3180cac
0x03C1B444: 0197d597  bl #0x3181048

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1B448 | ContextualizedECS.Entity$$GetComponent<LockComponent>
; native signature: Merger_MergeBoard_Components_LockComponent_o ContextualizedECS_Entity__GetComponent_LockComponent_ (ContextualizedECS_Entity_o* __this, const MethodInfo_3C1B448* method);
; bytes=228 sha256=157ac5065f7924622c0370eb7358a183a610024abc6ae830a8ac391f9f718e65 status=arm64_complete_bound indexed_start=True
0x03C1B448: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x03C1B44C: f44f01a9  stp x20, x19, [sp, #0x10]
0x03C1B450: 281c40f9  ldr x8, [x1, #0x38]
0x03C1B454: f30301aa  mov x19, x1
0x03C1B458: f40300aa  mov x20, x0
0x03C1B45C: 880100b5  cbnz x8, #0x3c1b48c
0x03C1B460: e0d201d0  adrp x0, #0x7679000
0x03C1B464: 002446f9  ldr x0, [x0, #0xc48]
0x03C1B468: 6c95d597  bl #0x3180a18
0x03C1B46C: 80d101f0  adrp x0, #0x764e000
0x03C1B470: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1B474: 6995d597  bl #0x3180a18
0x03C1B478: 681e40f9  ldr x8, [x19, #0x38]
0x03C1B47C: 880000b5  cbnz x8, #0x3c1b48c
0x03C1B480: e00313aa  mov x0, x19
0x03C1B484: fdecd497  bl #0x3156878
0x03C1B488: 681e40f9  ldr x8, [x19, #0x38]
0x03C1B48C: 89d101f0  adrp x9, #0x764e000
0x03C1B490: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1B494: 940a40f9  ldr x20, [x20, #0x10]
0x03C1B498: 150140f9  ldr x21, [x8]
0x03C1B49C: 200140f9  ldr x0, [x9]
0x03C1B4A0: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1B4A4: 49000035  cbnz w9, #0x3c1b4ac
0x03C1B4A8: b995d597  bl #0x3180b8c
0x03C1B4AC: e00315aa  mov x0, x21
0x03C1B4B0: e1031faa  mov x1, xzr
0x03C1B4B4: 44276a94  bl #0x56a51c4
0x03C1B4B8: 740300b4  cbz x20, #0x3c1b524
0x03C1B4BC: e8d201d0  adrp x8, #0x7679000
0x03C1B4C0: 082546f9  ldr x8, [x8, #0xc48]
0x03C1B4C4: e10300aa  mov x1, x0
0x03C1B4C8: e00314aa  mov x0, x20
0x03C1B4CC: 020140f9  ldr x2, [x8]
0x03C1B4D0: 0b1e4b94  bl #0x4ee2cfc
0x03C1B4D4: 681e40f9  ldr x8, [x19, #0x38]
0x03C1B4D8: f30300aa  mov x19, x0
0x03C1B4DC: 010540f9  ldr x1, [x8, #8]
0x03C1B4E0: 28d44439  ldrb w8, [x1, #0x135]
0x03C1B4E4: 88000037  tbnz w8, #0, #0x3c1b4f4
0x03C1B4E8: e00301aa  mov x0, x1
0x03C1B4EC: ccecd497  bl #0x315681c
0x03C1B4F0: e10300aa  mov x1, x0
0x03C1B4F4: 930100b4  cbz x19, #0x3c1b524
0x03C1B4F8: 680240f9  ldr x8, [x19]
0x03C1B4FC: 292040f9  ldr x9, [x1, #0x40]
0x03C1B500: e00313aa  mov x0, x19
0x03C1B504: 082140f9  ldr x8, [x8, #0x40]
0x03C1B508: 1f0109eb  cmp x8, x9
0x03C1B50C: e1000054  b.ne #0x3c1b528
0x03C1B510: a295d597  bl #0x3180b98
0x03C1B514: 00004039  ldrb w0, [x0]
0x03C1B518: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03C1B51C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x03C1B520: c0035fd6  ret
0x03C1B524: e295d597  bl #0x3180cac
0x03C1B528: c896d597  bl #0x3181048

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1B52C | ContextualizedECS.Entity$$GetComponent<MergeComponent>
; native signature: Merger_MergeBoard_Components_MergeComponent_o ContextualizedECS_Entity__GetComponent_MergeComponent_ (ContextualizedECS_Entity_o* __this, const MethodInfo_3C1B52C* method);
; bytes=232 sha256=a2bb128615b665772e6d0eb984af8e3a6fe350b6a8a07ea8fc2eec6df3fd01ad status=arm64_complete_bound indexed_start=True
0x03C1B52C: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x03C1B530: f44f01a9  stp x20, x19, [sp, #0x10]
0x03C1B534: 281c40f9  ldr x8, [x1, #0x38]
0x03C1B538: f30301aa  mov x19, x1
0x03C1B53C: f40300aa  mov x20, x0
0x03C1B540: 880100b5  cbnz x8, #0x3c1b570
0x03C1B544: e0d201d0  adrp x0, #0x7679000
0x03C1B548: 002446f9  ldr x0, [x0, #0xc48]
0x03C1B54C: 3395d597  bl #0x3180a18
0x03C1B550: 80d101f0  adrp x0, #0x764e000
0x03C1B554: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1B558: 3095d597  bl #0x3180a18
0x03C1B55C: 681e40f9  ldr x8, [x19, #0x38]
0x03C1B560: 880000b5  cbnz x8, #0x3c1b570
0x03C1B564: e00313aa  mov x0, x19
0x03C1B568: c4ecd497  bl #0x3156878
0x03C1B56C: 681e40f9  ldr x8, [x19, #0x38]
0x03C1B570: 89d101f0  adrp x9, #0x764e000
0x03C1B574: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1B578: 940a40f9  ldr x20, [x20, #0x10]
0x03C1B57C: 150140f9  ldr x21, [x8]
0x03C1B580: 200140f9  ldr x0, [x9]
0x03C1B584: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1B588: 49000035  cbnz w9, #0x3c1b590
0x03C1B58C: 8095d597  bl #0x3180b8c
0x03C1B590: e00315aa  mov x0, x21
0x03C1B594: e1031faa  mov x1, xzr
0x03C1B598: 0b276a94  bl #0x56a51c4
0x03C1B59C: 940300b4  cbz x20, #0x3c1b60c
0x03C1B5A0: e8d201d0  adrp x8, #0x7679000
0x03C1B5A4: 082546f9  ldr x8, [x8, #0xc48]
0x03C1B5A8: e10300aa  mov x1, x0
0x03C1B5AC: e00314aa  mov x0, x20
0x03C1B5B0: 020140f9  ldr x2, [x8]
0x03C1B5B4: d21d4b94  bl #0x4ee2cfc
0x03C1B5B8: 681e40f9  ldr x8, [x19, #0x38]
0x03C1B5BC: f30300aa  mov x19, x0
0x03C1B5C0: 010540f9  ldr x1, [x8, #8]
0x03C1B5C4: 28d44439  ldrb w8, [x1, #0x135]
0x03C1B5C8: 88000037  tbnz w8, #0, #0x3c1b5d8
0x03C1B5CC: e00301aa  mov x0, x1
0x03C1B5D0: 93ecd497  bl #0x315681c
0x03C1B5D4: e10300aa  mov x1, x0
0x03C1B5D8: b30100b4  cbz x19, #0x3c1b60c
0x03C1B5DC: 680240f9  ldr x8, [x19]
0x03C1B5E0: 292040f9  ldr x9, [x1, #0x40]
0x03C1B5E4: e00313aa  mov x0, x19
0x03C1B5E8: 082140f9  ldr x8, [x8, #0x40]
0x03C1B5EC: 1f0109eb  cmp x8, x9
0x03C1B5F0: 01010054  b.ne #0x3c1b610
0x03C1B5F4: 6995d597  bl #0x3180b98
0x03C1B5F8: 080440a9  ldp x8, x1, [x0]
0x03C1B5FC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03C1B600: e00308aa  mov x0, x8
0x03C1B604: fe57c2a8  ldp x30, x21, [sp], #0x20
0x03C1B608: c0035fd6  ret
0x03C1B60C: a895d597  bl #0x3180cac
0x03C1B610: 8e96d597  bl #0x3181048

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1B614 | ContextualizedECS.Entity$$GetComponent<__Il2CppFullySharedGenericStructType>
; native signature: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o ContextualizedECS_Entity__GetComponent___Il2CppFullySharedGenericStructType_ (ContextualizedECS_Entity_o* __this, const MethodInfo_3C1B614* method);
; bytes=252 sha256=fb8d60c6a74f1ffd89521f62a76d12f7456cf0e43c989db88ce7fdf8dc403b48 status=arm64_complete_bound indexed_start=True
0x03C1B614: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x03C1B618: f65701a9  stp x22, x21, [sp, #0x10]
0x03C1B61C: f44f02a9  stp x20, x19, [sp, #0x20]
0x03C1B620: 481c40f9  ldr x8, [x2, #0x38]
0x03C1B624: f40302aa  mov x20, x2
0x03C1B628: f30301aa  mov x19, x1
0x03C1B62C: f60300aa  mov x22, x0
0x03C1B630: 880100b5  cbnz x8, #0x3c1b660
0x03C1B634: e0d201d0  adrp x0, #0x7679000
0x03C1B638: 002446f9  ldr x0, [x0, #0xc48]
0x03C1B63C: f794d597  bl #0x3180a18
0x03C1B640: 80d101f0  adrp x0, #0x764e000
0x03C1B644: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1B648: f494d597  bl #0x3180a18
0x03C1B64C: 881e40f9  ldr x8, [x20, #0x38]
0x03C1B650: 880000b5  cbnz x8, #0x3c1b660
0x03C1B654: e00314aa  mov x0, x20
0x03C1B658: 88ecd497  bl #0x3156878
0x03C1B65C: 881e40f9  ldr x8, [x20, #0x38]
0x03C1B660: 89d101f0  adrp x9, #0x764e000
0x03C1B664: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1B668: 172940a9  ldp x23, x10, [x8]
0x03C1B66C: d60a40f9  ldr x22, [x22, #0x10]
0x03C1B670: 200140f9  ldr x0, [x9]
0x03C1B674: 55fd40b9  ldr w21, [x10, #0xfc]
0x03C1B678: 08e040b9  ldr w8, [x0, #0xe0]
0x03C1B67C: 48000035  cbnz w8, #0x3c1b684
0x03C1B680: 4395d597  bl #0x3180b8c
0x03C1B684: e00317aa  mov x0, x23
0x03C1B688: e1031faa  mov x1, xzr
0x03C1B68C: ce266a94  bl #0x56a51c4
0x03C1B690: d60300b4  cbz x22, #0x3c1b708
0x03C1B694: e8d201d0  adrp x8, #0x7679000
0x03C1B698: 082546f9  ldr x8, [x8, #0xc48]
0x03C1B69C: e10300aa  mov x1, x0
0x03C1B6A0: e00316aa  mov x0, x22
0x03C1B6A4: 020140f9  ldr x2, [x8]
0x03C1B6A8: 951d4b94  bl #0x4ee2cfc
0x03C1B6AC: 881e40f9  ldr x8, [x20, #0x38]
0x03C1B6B0: f40300aa  mov x20, x0
0x03C1B6B4: 010540f9  ldr x1, [x8, #8]
0x03C1B6B8: 28d44439  ldrb w8, [x1, #0x135]
0x03C1B6BC: 88000037  tbnz w8, #0, #0x3c1b6cc
0x03C1B6C0: e00301aa  mov x0, x1
0x03C1B6C4: 56ecd497  bl #0x315681c
0x03C1B6C8: e10300aa  mov x1, x0
0x03C1B6CC: f40100b4  cbz x20, #0x3c1b708
0x03C1B6D0: 880240f9  ldr x8, [x20]
0x03C1B6D4: 292040f9  ldr x9, [x1, #0x40]
0x03C1B6D8: e00314aa  mov x0, x20
0x03C1B6DC: 082140f9  ldr x8, [x8, #0x40]
0x03C1B6E0: 1f0109eb  cmp x8, x9
0x03C1B6E4: 41010054  b.ne #0x3c1b70c
0x03C1B6E8: 2c95d597  bl #0x3180b98
0x03C1B6EC: e10300aa  mov x1, x0
0x03C1B6F0: e00313aa  mov x0, x19
0x03C1B6F4: e20315aa  mov x2, x21
0x03C1B6F8: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03C1B6FC: f65741a9  ldp x22, x21, [sp, #0x10]
0x03C1B700: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x03C1B704: 9bccd614  b #0x71ce970
0x03C1B708: 6995d597  bl #0x3180cac
0x03C1B70C: 4f96d597  bl #0x3181048

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C20328 | ContextualizedECS.Entity$$WithComponent<__Il2CppFullySharedGenericStructType>
; native signature: ContextualizedECS_Entity_o* ContextualizedECS_Entity__WithComponent___Il2CppFullySharedGenericStructType_ (ContextualizedECS_Entity_o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o component, const MethodInfo_3C20328* method);
; bytes=188 sha256=d087a4c39ec096af8f8f2f3d0f5c3d603c1563269acc4b063e75076ec32206bc status=arm64_complete_bound indexed_start=True
0x03C20328: fd7bbca9  stp x29, x30, [sp, #-0x40]!
0x03C2032C: f70b00f9  str x23, [sp, #0x10]
0x03C20330: f65702a9  stp x22, x21, [sp, #0x20]
0x03C20334: f44f03a9  stp x20, x19, [sp, #0x30]
0x03C20338: fd030091  mov x29, sp
0x03C2033C: ff4300d1  sub sp, sp, #0x10
0x03C20340: 56d03bd5  mrs x22, tpidr_el0
0x03C20344: c81640f9  ldr x8, [x22, #0x28]
0x03C20348: f40301aa  mov x20, x1
0x03C2034C: f30300aa  mov x19, x0
0x03C20350: a8831ff8  stur x8, [x29, #-8]
0x03C20354: 571c40f9  ldr x23, [x2, #0x38]
0x03C20358: b70000b5  cbnz x23, #0x3c2036c
0x03C2035C: e00302aa  mov x0, x2
0x03C20360: f50302aa  mov x21, x2
0x03C20364: 45d9d497  bl #0x3156878
0x03C20368: b71e40f9  ldr x23, [x21, #0x38]
0x03C2036C: e80240f9  ldr x8, [x23]
0x03C20370: 02fd40b9  ldr w2, [x8, #0xfc]
0x03C20374: e8030091  mov x8, sp
0x03C20378: 493c0091  add x9, x2, #0xf
0x03C2037C: 29717c92  and x9, x9, #0x1fffffff0
0x03C20380: 150109cb  sub x21, x8, x9
0x03C20384: bf020091  mov sp, x21
0x03C20388: e00315aa  mov x0, x21
0x03C2038C: e10314aa  mov x1, x20
0x03C20390: 78b9d694  bl #0x71ce970
0x03C20394: e10640f9  ldr x1, [x23, #8]
0x03C20398: a34300d1  sub x3, x29, #0x10
0x03C2039C: e20313aa  mov x2, x19
0x03C203A0: e40315aa  mov x4, x21
0x03C203A4: 200040f9  ldr x0, [x1]
0x03C203A8: b5031ff8  stur x21, [x29, #-0x10]
0x03C203AC: 280840f9  ldr x8, [x1, #0x10]
0x03C203B0: 00013fd6  blr x8
0x03C203B4: c81640f9  ldr x8, [x22, #0x28]
0x03C203B8: a9835ff8  ldur x9, [x29, #-8]
0x03C203BC: 1f0109eb  cmp x8, x9
0x03C203C0: 01010054  b.ne #0x3c203e0
0x03C203C4: e00313aa  mov x0, x19
0x03C203C8: bf030091  mov sp, x29
0x03C203CC: f44f43a9  ldp x20, x19, [sp, #0x30]
0x03C203D0: f65742a9  ldp x22, x21, [sp, #0x20]
0x03C203D4: f70b40f9  ldr x23, [sp, #0x10]
0x03C203D8: fd7bc4a8  ldp x29, x30, [sp], #0x40
0x03C203DC: c0035fd6  ret
0x03C203E0: 6cb9d694  bl #0x71ce990

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1B710 | ContextualizedECS.Entity$$HasComponent<BornComponent>
; native signature: bool ContextualizedECS_Entity__HasComponent_BornComponent_ (ContextualizedECS_Entity_o* __this, const MethodInfo_3C1B710* method);
; bytes=152 sha256=6273b175cf86a6f10374259fab2ba8e501871de4f63d154f88624f9844ba42c3 status=arm64_complete_bound indexed_start=True
0x03C1B710: fe0f1ef8  str x30, [sp, #-0x20]!
0x03C1B714: f44f01a9  stp x20, x19, [sp, #0x10]
0x03C1B718: 281c40f9  ldr x8, [x1, #0x38]
0x03C1B71C: f30300aa  mov x19, x0
0x03C1B720: a80100b5  cbnz x8, #0x3c1b754
0x03C1B724: e0d201d0  adrp x0, #0x7679000
0x03C1B728: 002846f9  ldr x0, [x0, #0xc50]
0x03C1B72C: f40301aa  mov x20, x1
0x03C1B730: ba94d597  bl #0x3180a18
0x03C1B734: 80d101f0  adrp x0, #0x764e000
0x03C1B738: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1B73C: b794d597  bl #0x3180a18
0x03C1B740: 881e40f9  ldr x8, [x20, #0x38]
0x03C1B744: 880000b5  cbnz x8, #0x3c1b754
0x03C1B748: e00314aa  mov x0, x20
0x03C1B74C: 4becd497  bl #0x3156878
0x03C1B750: 881e40f9  ldr x8, [x20, #0x38]
0x03C1B754: 89d101f0  adrp x9, #0x764e000
0x03C1B758: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1B75C: 730a40f9  ldr x19, [x19, #0x10]
0x03C1B760: 140140f9  ldr x20, [x8]
0x03C1B764: 200140f9  ldr x0, [x9]
0x03C1B768: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1B76C: 49000035  cbnz w9, #0x3c1b774
0x03C1B770: 0795d597  bl #0x3180b8c
0x03C1B774: e00314aa  mov x0, x20
0x03C1B778: e1031faa  mov x1, xzr
0x03C1B77C: 92266a94  bl #0x56a51c4
0x03C1B780: 330100b4  cbz x19, #0x3c1b7a4
0x03C1B784: e8d201d0  adrp x8, #0x7679000
0x03C1B788: 082946f9  ldr x8, [x8, #0xc50]
0x03C1B78C: e10300aa  mov x1, x0
0x03C1B790: e00313aa  mov x0, x19
0x03C1B794: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03C1B798: 020140f9  ldr x2, [x8]
0x03C1B79C: fe0742f8  ldr x30, [sp], #0x20
0x03C1B7A0: f41d4b14  b #0x4ee2f70
0x03C1B7A4: 4295d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1B7A8 | ContextualizedECS.Entity$$HasComponent<CollectableComponent>
; native signature: bool ContextualizedECS_Entity__HasComponent_CollectableComponent_ (ContextualizedECS_Entity_o* __this, const MethodInfo_3C1B7A8* method);
; bytes=152 sha256=6c2da124800cbd2b0e6d954026d6b306bedd6d6d6da85470170a93a3c98a8774 status=arm64_complete_bound indexed_start=True
0x03C1B7A8: fe0f1ef8  str x30, [sp, #-0x20]!
0x03C1B7AC: f44f01a9  stp x20, x19, [sp, #0x10]
0x03C1B7B0: 281c40f9  ldr x8, [x1, #0x38]
0x03C1B7B4: f30300aa  mov x19, x0
0x03C1B7B8: a80100b5  cbnz x8, #0x3c1b7ec
0x03C1B7BC: e0d201d0  adrp x0, #0x7679000
0x03C1B7C0: 002846f9  ldr x0, [x0, #0xc50]
0x03C1B7C4: f40301aa  mov x20, x1
0x03C1B7C8: 9494d597  bl #0x3180a18
0x03C1B7CC: 80d101f0  adrp x0, #0x764e000
0x03C1B7D0: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1B7D4: 9194d597  bl #0x3180a18
0x03C1B7D8: 881e40f9  ldr x8, [x20, #0x38]
0x03C1B7DC: 880000b5  cbnz x8, #0x3c1b7ec
0x03C1B7E0: e00314aa  mov x0, x20
0x03C1B7E4: 25ecd497  bl #0x3156878
0x03C1B7E8: 881e40f9  ldr x8, [x20, #0x38]
0x03C1B7EC: 89d101f0  adrp x9, #0x764e000
0x03C1B7F0: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1B7F4: 730a40f9  ldr x19, [x19, #0x10]
0x03C1B7F8: 140140f9  ldr x20, [x8]
0x03C1B7FC: 200140f9  ldr x0, [x9]
0x03C1B800: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1B804: 49000035  cbnz w9, #0x3c1b80c
0x03C1B808: e194d597  bl #0x3180b8c
0x03C1B80C: e00314aa  mov x0, x20
0x03C1B810: e1031faa  mov x1, xzr
0x03C1B814: 6c266a94  bl #0x56a51c4
0x03C1B818: 330100b4  cbz x19, #0x3c1b83c
0x03C1B81C: e8d201d0  adrp x8, #0x7679000
0x03C1B820: 082946f9  ldr x8, [x8, #0xc50]
0x03C1B824: e10300aa  mov x1, x0
0x03C1B828: e00313aa  mov x0, x19
0x03C1B82C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03C1B830: 020140f9  ldr x2, [x8]
0x03C1B834: fe0742f8  ldr x30, [sp], #0x20
0x03C1B838: ce1d4b14  b #0x4ee2f70
0x03C1B83C: 1c95d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1B840 | ContextualizedECS.Entity$$HasComponent<CooldownBlockComponent>
; native signature: bool ContextualizedECS_Entity__HasComponent_CooldownBlockComponent_ (ContextualizedECS_Entity_o* __this, const MethodInfo_3C1B840* method);
; bytes=152 sha256=65ddca2738b256e06f52dea21147777de01e713031aa4aae222eea614b7a948b status=arm64_complete_bound indexed_start=True
0x03C1B840: fe0f1ef8  str x30, [sp, #-0x20]!
0x03C1B844: f44f01a9  stp x20, x19, [sp, #0x10]
0x03C1B848: 281c40f9  ldr x8, [x1, #0x38]
0x03C1B84C: f30300aa  mov x19, x0
0x03C1B850: a80100b5  cbnz x8, #0x3c1b884
0x03C1B854: e0d201d0  adrp x0, #0x7679000
0x03C1B858: 002846f9  ldr x0, [x0, #0xc50]
0x03C1B85C: f40301aa  mov x20, x1
0x03C1B860: 6e94d597  bl #0x3180a18
0x03C1B864: 80d101f0  adrp x0, #0x764e000
0x03C1B868: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1B86C: 6b94d597  bl #0x3180a18
0x03C1B870: 881e40f9  ldr x8, [x20, #0x38]
0x03C1B874: 880000b5  cbnz x8, #0x3c1b884
0x03C1B878: e00314aa  mov x0, x20
0x03C1B87C: ffebd497  bl #0x3156878
0x03C1B880: 881e40f9  ldr x8, [x20, #0x38]
0x03C1B884: 89d101f0  adrp x9, #0x764e000
0x03C1B888: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1B88C: 730a40f9  ldr x19, [x19, #0x10]
0x03C1B890: 140140f9  ldr x20, [x8]
0x03C1B894: 200140f9  ldr x0, [x9]
0x03C1B898: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1B89C: 49000035  cbnz w9, #0x3c1b8a4
0x03C1B8A0: bb94d597  bl #0x3180b8c
0x03C1B8A4: e00314aa  mov x0, x20
0x03C1B8A8: e1031faa  mov x1, xzr
0x03C1B8AC: 46266a94  bl #0x56a51c4
0x03C1B8B0: 330100b4  cbz x19, #0x3c1b8d4
0x03C1B8B4: e8d201d0  adrp x8, #0x7679000
0x03C1B8B8: 082946f9  ldr x8, [x8, #0xc50]
0x03C1B8BC: e10300aa  mov x1, x0
0x03C1B8C0: e00313aa  mov x0, x19
0x03C1B8C4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03C1B8C8: 020140f9  ldr x2, [x8]
0x03C1B8CC: fe0742f8  ldr x30, [sp], #0x20
0x03C1B8D0: a81d4b14  b #0x4ee2f70
0x03C1B8D4: f694d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1B8D8 | ContextualizedECS.Entity$$HasComponent<DeadComponent>
; native signature: bool ContextualizedECS_Entity__HasComponent_DeadComponent_ (ContextualizedECS_Entity_o* __this, const MethodInfo_3C1B8D8* method);
; bytes=152 sha256=fcc0913c91c1eabad421ef50a8be80ffd19999f807b43d3ab1f902d9f556c24b status=arm64_complete_bound indexed_start=True
0x03C1B8D8: fe0f1ef8  str x30, [sp, #-0x20]!
0x03C1B8DC: f44f01a9  stp x20, x19, [sp, #0x10]
0x03C1B8E0: 281c40f9  ldr x8, [x1, #0x38]
0x03C1B8E4: f30300aa  mov x19, x0
0x03C1B8E8: a80100b5  cbnz x8, #0x3c1b91c
0x03C1B8EC: e0d201d0  adrp x0, #0x7679000
0x03C1B8F0: 002846f9  ldr x0, [x0, #0xc50]
0x03C1B8F4: f40301aa  mov x20, x1
0x03C1B8F8: 4894d597  bl #0x3180a18
0x03C1B8FC: 80d101f0  adrp x0, #0x764e000
0x03C1B900: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1B904: 4594d597  bl #0x3180a18
0x03C1B908: 881e40f9  ldr x8, [x20, #0x38]
0x03C1B90C: 880000b5  cbnz x8, #0x3c1b91c
0x03C1B910: e00314aa  mov x0, x20
0x03C1B914: d9ebd497  bl #0x3156878
0x03C1B918: 881e40f9  ldr x8, [x20, #0x38]
0x03C1B91C: 89d101f0  adrp x9, #0x764e000
0x03C1B920: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1B924: 730a40f9  ldr x19, [x19, #0x10]
0x03C1B928: 140140f9  ldr x20, [x8]
0x03C1B92C: 200140f9  ldr x0, [x9]
0x03C1B930: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1B934: 49000035  cbnz w9, #0x3c1b93c
0x03C1B938: 9594d597  bl #0x3180b8c
0x03C1B93C: e00314aa  mov x0, x20
0x03C1B940: e1031faa  mov x1, xzr
0x03C1B944: 20266a94  bl #0x56a51c4
0x03C1B948: 330100b4  cbz x19, #0x3c1b96c
0x03C1B94C: e8d201d0  adrp x8, #0x7679000
0x03C1B950: 082946f9  ldr x8, [x8, #0xc50]
0x03C1B954: e10300aa  mov x1, x0
0x03C1B958: e00313aa  mov x0, x19
0x03C1B95C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03C1B960: 020140f9  ldr x2, [x8]
0x03C1B964: fe0742f8  ldr x30, [sp], #0x20
0x03C1B968: 821d4b14  b #0x4ee2f70
0x03C1B96C: d094d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1B970 | ContextualizedECS.Entity$$HasComponent<ExpendableComponent>
; native signature: bool ContextualizedECS_Entity__HasComponent_ExpendableComponent_ (ContextualizedECS_Entity_o* __this, const MethodInfo_3C1B970* method);
; bytes=152 sha256=2afec33982d01fe6c39f5b4fd9211fbddbbe452c95da29f6c28a3e9dcdeca8ec status=arm64_complete_bound indexed_start=True
0x03C1B970: fe0f1ef8  str x30, [sp, #-0x20]!
0x03C1B974: f44f01a9  stp x20, x19, [sp, #0x10]
0x03C1B978: 281c40f9  ldr x8, [x1, #0x38]
0x03C1B97C: f30300aa  mov x19, x0
0x03C1B980: a80100b5  cbnz x8, #0x3c1b9b4
0x03C1B984: e0d201d0  adrp x0, #0x7679000
0x03C1B988: 002846f9  ldr x0, [x0, #0xc50]
0x03C1B98C: f40301aa  mov x20, x1
0x03C1B990: 2294d597  bl #0x3180a18
0x03C1B994: 80d101f0  adrp x0, #0x764e000
0x03C1B998: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1B99C: 1f94d597  bl #0x3180a18
0x03C1B9A0: 881e40f9  ldr x8, [x20, #0x38]
0x03C1B9A4: 880000b5  cbnz x8, #0x3c1b9b4
0x03C1B9A8: e00314aa  mov x0, x20
0x03C1B9AC: b3ebd497  bl #0x3156878
0x03C1B9B0: 881e40f9  ldr x8, [x20, #0x38]
0x03C1B9B4: 89d101f0  adrp x9, #0x764e000
0x03C1B9B8: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1B9BC: 730a40f9  ldr x19, [x19, #0x10]
0x03C1B9C0: 140140f9  ldr x20, [x8]
0x03C1B9C4: 200140f9  ldr x0, [x9]
0x03C1B9C8: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1B9CC: 49000035  cbnz w9, #0x3c1b9d4
0x03C1B9D0: 6f94d597  bl #0x3180b8c
0x03C1B9D4: e00314aa  mov x0, x20
0x03C1B9D8: e1031faa  mov x1, xzr
0x03C1B9DC: fa256a94  bl #0x56a51c4
0x03C1B9E0: 330100b4  cbz x19, #0x3c1ba04
0x03C1B9E4: e8d201d0  adrp x8, #0x7679000
0x03C1B9E8: 082946f9  ldr x8, [x8, #0xc50]
0x03C1B9EC: e10300aa  mov x1, x0
0x03C1B9F0: e00313aa  mov x0, x19
0x03C1B9F4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03C1B9F8: 020140f9  ldr x2, [x8]
0x03C1B9FC: fe0742f8  ldr x30, [sp], #0x20
0x03C1BA00: 5c1d4b14  b #0x4ee2f70
0x03C1BA04: aa94d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1BA08 | ContextualizedECS.Entity$$HasComponent<FeedingCombinationComponent>
; native signature: bool ContextualizedECS_Entity__HasComponent_FeedingCombinationComponent_ (ContextualizedECS_Entity_o* __this, const MethodInfo_3C1BA08* method);
; bytes=152 sha256=12035dcbff323d6ef154ceaa80f7bc3085f46207ca265c33b58cd0d44af308f5 status=arm64_complete_bound indexed_start=True
0x03C1BA08: fe0f1ef8  str x30, [sp, #-0x20]!
0x03C1BA0C: f44f01a9  stp x20, x19, [sp, #0x10]
0x03C1BA10: 281c40f9  ldr x8, [x1, #0x38]
0x03C1BA14: f30300aa  mov x19, x0
0x03C1BA18: a80100b5  cbnz x8, #0x3c1ba4c
0x03C1BA1C: e0d201d0  adrp x0, #0x7679000
0x03C1BA20: 002846f9  ldr x0, [x0, #0xc50]
0x03C1BA24: f40301aa  mov x20, x1
0x03C1BA28: fc93d597  bl #0x3180a18
0x03C1BA2C: 80d101f0  adrp x0, #0x764e000
0x03C1BA30: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1BA34: f993d597  bl #0x3180a18
0x03C1BA38: 881e40f9  ldr x8, [x20, #0x38]
0x03C1BA3C: 880000b5  cbnz x8, #0x3c1ba4c
0x03C1BA40: e00314aa  mov x0, x20
0x03C1BA44: 8debd497  bl #0x3156878
0x03C1BA48: 881e40f9  ldr x8, [x20, #0x38]
0x03C1BA4C: 89d101f0  adrp x9, #0x764e000
0x03C1BA50: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1BA54: 730a40f9  ldr x19, [x19, #0x10]
0x03C1BA58: 140140f9  ldr x20, [x8]
0x03C1BA5C: 200140f9  ldr x0, [x9]
0x03C1BA60: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1BA64: 49000035  cbnz w9, #0x3c1ba6c
0x03C1BA68: 4994d597  bl #0x3180b8c
0x03C1BA6C: e00314aa  mov x0, x20
0x03C1BA70: e1031faa  mov x1, xzr
0x03C1BA74: d4256a94  bl #0x56a51c4
0x03C1BA78: 330100b4  cbz x19, #0x3c1ba9c
0x03C1BA7C: e8d201d0  adrp x8, #0x7679000
0x03C1BA80: 082946f9  ldr x8, [x8, #0xc50]
0x03C1BA84: e10300aa  mov x1, x0
0x03C1BA88: e00313aa  mov x0, x19
0x03C1BA8C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03C1BA90: 020140f9  ldr x2, [x8]
0x03C1BA94: fe0742f8  ldr x30, [sp], #0x20
0x03C1BA98: 361d4b14  b #0x4ee2f70
0x03C1BA9C: 8494d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1BAA0 | ContextualizedECS.Entity$$HasComponent<FixedPositionComponent>
; native signature: bool ContextualizedECS_Entity__HasComponent_FixedPositionComponent_ (ContextualizedECS_Entity_o* __this, const MethodInfo_3C1BAA0* method);
; bytes=152 sha256=7ceeb83b9e4cdb78692a08a7a3915f7af838f1366aee36a1ed2b2542f48dc75a status=arm64_complete_bound indexed_start=True
0x03C1BAA0: fe0f1ef8  str x30, [sp, #-0x20]!
0x03C1BAA4: f44f01a9  stp x20, x19, [sp, #0x10]
0x03C1BAA8: 281c40f9  ldr x8, [x1, #0x38]
0x03C1BAAC: f30300aa  mov x19, x0
0x03C1BAB0: a80100b5  cbnz x8, #0x3c1bae4
0x03C1BAB4: e0d201d0  adrp x0, #0x7679000
0x03C1BAB8: 002846f9  ldr x0, [x0, #0xc50]
0x03C1BABC: f40301aa  mov x20, x1
0x03C1BAC0: d693d597  bl #0x3180a18
0x03C1BAC4: 80d101f0  adrp x0, #0x764e000
0x03C1BAC8: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1BACC: d393d597  bl #0x3180a18
0x03C1BAD0: 881e40f9  ldr x8, [x20, #0x38]
0x03C1BAD4: 880000b5  cbnz x8, #0x3c1bae4
0x03C1BAD8: e00314aa  mov x0, x20
0x03C1BADC: 67ebd497  bl #0x3156878
0x03C1BAE0: 881e40f9  ldr x8, [x20, #0x38]
0x03C1BAE4: 89d101f0  adrp x9, #0x764e000
0x03C1BAE8: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1BAEC: 730a40f9  ldr x19, [x19, #0x10]
0x03C1BAF0: 140140f9  ldr x20, [x8]
0x03C1BAF4: 200140f9  ldr x0, [x9]
0x03C1BAF8: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1BAFC: 49000035  cbnz w9, #0x3c1bb04
0x03C1BB00: 2394d597  bl #0x3180b8c
0x03C1BB04: e00314aa  mov x0, x20
0x03C1BB08: e1031faa  mov x1, xzr
0x03C1BB0C: ae256a94  bl #0x56a51c4
0x03C1BB10: 330100b4  cbz x19, #0x3c1bb34
0x03C1BB14: e8d201d0  adrp x8, #0x7679000
0x03C1BB18: 082946f9  ldr x8, [x8, #0xc50]
0x03C1BB1C: e10300aa  mov x1, x0
0x03C1BB20: e00313aa  mov x0, x19
0x03C1BB24: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03C1BB28: 020140f9  ldr x2, [x8]
0x03C1BB2C: fe0742f8  ldr x30, [sp], #0x20
0x03C1BB30: 101d4b14  b #0x4ee2f70
0x03C1BB34: 5e94d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1BB38 | ContextualizedECS.Entity$$HasComponent<ImmediateToolComponent>
; native signature: bool ContextualizedECS_Entity__HasComponent_ImmediateToolComponent_ (ContextualizedECS_Entity_o* __this, const MethodInfo_3C1BB38* method);
; bytes=152 sha256=48abf995c860bf9c48e448ff413ca778a89a14c35dd46d51d87b7bc6493f8b5e status=arm64_complete_bound indexed_start=True
0x03C1BB38: fe0f1ef8  str x30, [sp, #-0x20]!
0x03C1BB3C: f44f01a9  stp x20, x19, [sp, #0x10]
0x03C1BB40: 281c40f9  ldr x8, [x1, #0x38]
0x03C1BB44: f30300aa  mov x19, x0
0x03C1BB48: a80100b5  cbnz x8, #0x3c1bb7c
0x03C1BB4C: e0d201d0  adrp x0, #0x7679000
0x03C1BB50: 002846f9  ldr x0, [x0, #0xc50]
0x03C1BB54: f40301aa  mov x20, x1
0x03C1BB58: b093d597  bl #0x3180a18
0x03C1BB5C: 80d101f0  adrp x0, #0x764e000
0x03C1BB60: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1BB64: ad93d597  bl #0x3180a18
0x03C1BB68: 881e40f9  ldr x8, [x20, #0x38]
0x03C1BB6C: 880000b5  cbnz x8, #0x3c1bb7c
0x03C1BB70: e00314aa  mov x0, x20
0x03C1BB74: 41ebd497  bl #0x3156878
0x03C1BB78: 881e40f9  ldr x8, [x20, #0x38]
0x03C1BB7C: 89d101f0  adrp x9, #0x764e000
0x03C1BB80: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1BB84: 730a40f9  ldr x19, [x19, #0x10]
0x03C1BB88: 140140f9  ldr x20, [x8]
0x03C1BB8C: 200140f9  ldr x0, [x9]
0x03C1BB90: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1BB94: 49000035  cbnz w9, #0x3c1bb9c
0x03C1BB98: fd93d597  bl #0x3180b8c
0x03C1BB9C: e00314aa  mov x0, x20
0x03C1BBA0: e1031faa  mov x1, xzr
0x03C1BBA4: 88256a94  bl #0x56a51c4
0x03C1BBA8: 330100b4  cbz x19, #0x3c1bbcc
0x03C1BBAC: e8d201d0  adrp x8, #0x7679000
0x03C1BBB0: 082946f9  ldr x8, [x8, #0xc50]
0x03C1BBB4: e10300aa  mov x1, x0
0x03C1BBB8: e00313aa  mov x0, x19
0x03C1BBBC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03C1BBC0: 020140f9  ldr x2, [x8]
0x03C1BBC4: fe0742f8  ldr x30, [sp], #0x20
0x03C1BBC8: ea1c4b14  b #0x4ee2f70
0x03C1BBCC: 3894d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1BBD0 | ContextualizedECS.Entity$$HasComponent<ItemMovedComponent>
; native signature: bool ContextualizedECS_Entity__HasComponent_ItemMovedComponent_ (ContextualizedECS_Entity_o* __this, const MethodInfo_3C1BBD0* method);
; bytes=152 sha256=7eb5b985c156ec061c913d6e30aa0f2656f38da71980e1d5127dd78dfb5f7956 status=arm64_complete_bound indexed_start=True
0x03C1BBD0: fe0f1ef8  str x30, [sp, #-0x20]!
0x03C1BBD4: f44f01a9  stp x20, x19, [sp, #0x10]
0x03C1BBD8: 281c40f9  ldr x8, [x1, #0x38]
0x03C1BBDC: f30300aa  mov x19, x0
0x03C1BBE0: a80100b5  cbnz x8, #0x3c1bc14
0x03C1BBE4: e0d201d0  adrp x0, #0x7679000
0x03C1BBE8: 002846f9  ldr x0, [x0, #0xc50]
0x03C1BBEC: f40301aa  mov x20, x1
0x03C1BBF0: 8a93d597  bl #0x3180a18
0x03C1BBF4: 80d101f0  adrp x0, #0x764e000
0x03C1BBF8: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1BBFC: 8793d597  bl #0x3180a18
0x03C1BC00: 881e40f9  ldr x8, [x20, #0x38]
0x03C1BC04: 880000b5  cbnz x8, #0x3c1bc14
0x03C1BC08: e00314aa  mov x0, x20
0x03C1BC0C: 1bebd497  bl #0x3156878
0x03C1BC10: 881e40f9  ldr x8, [x20, #0x38]
0x03C1BC14: 89d101f0  adrp x9, #0x764e000
0x03C1BC18: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1BC1C: 730a40f9  ldr x19, [x19, #0x10]
0x03C1BC20: 140140f9  ldr x20, [x8]
0x03C1BC24: 200140f9  ldr x0, [x9]
0x03C1BC28: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1BC2C: 49000035  cbnz w9, #0x3c1bc34
0x03C1BC30: d793d597  bl #0x3180b8c
0x03C1BC34: e00314aa  mov x0, x20
0x03C1BC38: e1031faa  mov x1, xzr
0x03C1BC3C: 62256a94  bl #0x56a51c4
0x03C1BC40: 330100b4  cbz x19, #0x3c1bc64
0x03C1BC44: e8d201d0  adrp x8, #0x7679000
0x03C1BC48: 082946f9  ldr x8, [x8, #0xc50]
0x03C1BC4C: e10300aa  mov x1, x0
0x03C1BC50: e00313aa  mov x0, x19
0x03C1BC54: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03C1BC58: 020140f9  ldr x2, [x8]
0x03C1BC5C: fe0742f8  ldr x30, [sp], #0x20
0x03C1BC60: c41c4b14  b #0x4ee2f70
0x03C1BC64: 1294d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1BC68 | ContextualizedECS.Entity$$HasComponent<ItemUnboxedComponent>
; native signature: bool ContextualizedECS_Entity__HasComponent_ItemUnboxedComponent_ (ContextualizedECS_Entity_o* __this, const MethodInfo_3C1BC68* method);
; bytes=152 sha256=b5dba2bf4aa5bd2229a3247b3c1a47a4d795cb5094f89fe044665d21657e44dc status=arm64_complete_bound indexed_start=True
0x03C1BC68: fe0f1ef8  str x30, [sp, #-0x20]!
0x03C1BC6C: f44f01a9  stp x20, x19, [sp, #0x10]
0x03C1BC70: 281c40f9  ldr x8, [x1, #0x38]
0x03C1BC74: f30300aa  mov x19, x0
0x03C1BC78: a80100b5  cbnz x8, #0x3c1bcac
0x03C1BC7C: e0d201d0  adrp x0, #0x7679000
0x03C1BC80: 002846f9  ldr x0, [x0, #0xc50]
0x03C1BC84: f40301aa  mov x20, x1
0x03C1BC88: 6493d597  bl #0x3180a18
0x03C1BC8C: 80d101f0  adrp x0, #0x764e000
0x03C1BC90: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1BC94: 6193d597  bl #0x3180a18
0x03C1BC98: 881e40f9  ldr x8, [x20, #0x38]
0x03C1BC9C: 880000b5  cbnz x8, #0x3c1bcac
0x03C1BCA0: e00314aa  mov x0, x20
0x03C1BCA4: f5ead497  bl #0x3156878
0x03C1BCA8: 881e40f9  ldr x8, [x20, #0x38]
0x03C1BCAC: 89d101f0  adrp x9, #0x764e000
0x03C1BCB0: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1BCB4: 730a40f9  ldr x19, [x19, #0x10]
0x03C1BCB8: 140140f9  ldr x20, [x8]
0x03C1BCBC: 200140f9  ldr x0, [x9]
0x03C1BCC0: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1BCC4: 49000035  cbnz w9, #0x3c1bccc
0x03C1BCC8: b193d597  bl #0x3180b8c
0x03C1BCCC: e00314aa  mov x0, x20
0x03C1BCD0: e1031faa  mov x1, xzr
0x03C1BCD4: 3c256a94  bl #0x56a51c4
0x03C1BCD8: 330100b4  cbz x19, #0x3c1bcfc
0x03C1BCDC: e8d201d0  adrp x8, #0x7679000
0x03C1BCE0: 082946f9  ldr x8, [x8, #0xc50]
0x03C1BCE4: e10300aa  mov x1, x0
0x03C1BCE8: e00313aa  mov x0, x19
0x03C1BCEC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03C1BCF0: 020140f9  ldr x2, [x8]
0x03C1BCF4: fe0742f8  ldr x30, [sp], #0x20
0x03C1BCF8: 9e1c4b14  b #0x4ee2f70
0x03C1BCFC: ec93d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1BD00 | ContextualizedECS.Entity$$HasComponent<MoveBlockComponent>
; native signature: bool ContextualizedECS_Entity__HasComponent_MoveBlockComponent_ (ContextualizedECS_Entity_o* __this, const MethodInfo_3C1BD00* method);
; bytes=152 sha256=a978069fcd671e6870d3ca7cd5c235f1dd70444d21a627a3c21cb546fc59af9d status=arm64_complete_bound indexed_start=True
0x03C1BD00: fe0f1ef8  str x30, [sp, #-0x20]!
0x03C1BD04: f44f01a9  stp x20, x19, [sp, #0x10]
0x03C1BD08: 281c40f9  ldr x8, [x1, #0x38]
0x03C1BD0C: f30300aa  mov x19, x0
0x03C1BD10: a80100b5  cbnz x8, #0x3c1bd44
0x03C1BD14: e0d201d0  adrp x0, #0x7679000
0x03C1BD18: 002846f9  ldr x0, [x0, #0xc50]
0x03C1BD1C: f40301aa  mov x20, x1
0x03C1BD20: 3e93d597  bl #0x3180a18
0x03C1BD24: 80d101f0  adrp x0, #0x764e000
0x03C1BD28: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1BD2C: 3b93d597  bl #0x3180a18
0x03C1BD30: 881e40f9  ldr x8, [x20, #0x38]
0x03C1BD34: 880000b5  cbnz x8, #0x3c1bd44
0x03C1BD38: e00314aa  mov x0, x20
0x03C1BD3C: cfead497  bl #0x3156878
0x03C1BD40: 881e40f9  ldr x8, [x20, #0x38]
0x03C1BD44: 89d101f0  adrp x9, #0x764e000
0x03C1BD48: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1BD4C: 730a40f9  ldr x19, [x19, #0x10]
0x03C1BD50: 140140f9  ldr x20, [x8]
0x03C1BD54: 200140f9  ldr x0, [x9]
0x03C1BD58: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1BD5C: 49000035  cbnz w9, #0x3c1bd64
0x03C1BD60: 8b93d597  bl #0x3180b8c
0x03C1BD64: e00314aa  mov x0, x20
0x03C1BD68: e1031faa  mov x1, xzr
0x03C1BD6C: 16256a94  bl #0x56a51c4
0x03C1BD70: 330100b4  cbz x19, #0x3c1bd94
0x03C1BD74: e8d201d0  adrp x8, #0x7679000
0x03C1BD78: 082946f9  ldr x8, [x8, #0xc50]
0x03C1BD7C: e10300aa  mov x1, x0
0x03C1BD80: e00313aa  mov x0, x19
0x03C1BD84: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03C1BD88: 020140f9  ldr x2, [x8]
0x03C1BD8C: fe0742f8  ldr x30, [sp], #0x20
0x03C1BD90: 781c4b14  b #0x4ee2f70
0x03C1BD94: c693d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1BD98 | ContextualizedECS.Entity$$HasComponent<PendingItemsCombinationComponent>
; native signature: bool ContextualizedECS_Entity__HasComponent_PendingItemsCombinationComponent_ (ContextualizedECS_Entity_o* __this, const MethodInfo_3C1BD98* method);
; bytes=152 sha256=f55d5e00002a1574c0ec1b3a983570b77997b92124c259ad9b4591b709962d60 status=arm64_complete_bound indexed_start=True
0x03C1BD98: fe0f1ef8  str x30, [sp, #-0x20]!
0x03C1BD9C: f44f01a9  stp x20, x19, [sp, #0x10]
0x03C1BDA0: 281c40f9  ldr x8, [x1, #0x38]
0x03C1BDA4: f30300aa  mov x19, x0
0x03C1BDA8: a80100b5  cbnz x8, #0x3c1bddc
0x03C1BDAC: e0d201d0  adrp x0, #0x7679000
0x03C1BDB0: 002846f9  ldr x0, [x0, #0xc50]
0x03C1BDB4: f40301aa  mov x20, x1
0x03C1BDB8: 1893d597  bl #0x3180a18
0x03C1BDBC: 80d101f0  adrp x0, #0x764e000
0x03C1BDC0: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1BDC4: 1593d597  bl #0x3180a18
0x03C1BDC8: 881e40f9  ldr x8, [x20, #0x38]
0x03C1BDCC: 880000b5  cbnz x8, #0x3c1bddc
0x03C1BDD0: e00314aa  mov x0, x20
0x03C1BDD4: a9ead497  bl #0x3156878
0x03C1BDD8: 881e40f9  ldr x8, [x20, #0x38]
0x03C1BDDC: 89d101f0  adrp x9, #0x764e000
0x03C1BDE0: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1BDE4: 730a40f9  ldr x19, [x19, #0x10]
0x03C1BDE8: 140140f9  ldr x20, [x8]
0x03C1BDEC: 200140f9  ldr x0, [x9]
0x03C1BDF0: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1BDF4: 49000035  cbnz w9, #0x3c1bdfc
0x03C1BDF8: 6593d597  bl #0x3180b8c
0x03C1BDFC: e00314aa  mov x0, x20
0x03C1BE00: e1031faa  mov x1, xzr
0x03C1BE04: f0246a94  bl #0x56a51c4
0x03C1BE08: 330100b4  cbz x19, #0x3c1be2c
0x03C1BE0C: e8d201d0  adrp x8, #0x7679000
0x03C1BE10: 082946f9  ldr x8, [x8, #0xc50]
0x03C1BE14: e10300aa  mov x1, x0
0x03C1BE18: e00313aa  mov x0, x19
0x03C1BE1C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03C1BE20: 020140f9  ldr x2, [x8]
0x03C1BE24: fe0742f8  ldr x30, [sp], #0x20
0x03C1BE28: 521c4b14  b #0x4ee2f70
0x03C1BE2C: a093d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1BE30 | ContextualizedECS.Entity$$HasComponent<ProducerComponent>
; native signature: bool ContextualizedECS_Entity__HasComponent_ProducerComponent_ (ContextualizedECS_Entity_o* __this, const MethodInfo_3C1BE30* method);
; bytes=152 sha256=4da83fb30b685c6e6c79bf73d1b5a1ce780769756bd604f0a5fafb10c5a992e2 status=arm64_complete_bound indexed_start=True
0x03C1BE30: fe0f1ef8  str x30, [sp, #-0x20]!
0x03C1BE34: f44f01a9  stp x20, x19, [sp, #0x10]
0x03C1BE38: 281c40f9  ldr x8, [x1, #0x38]
0x03C1BE3C: f30300aa  mov x19, x0
0x03C1BE40: a80100b5  cbnz x8, #0x3c1be74
0x03C1BE44: e0d201d0  adrp x0, #0x7679000
0x03C1BE48: 002846f9  ldr x0, [x0, #0xc50]
0x03C1BE4C: f40301aa  mov x20, x1
0x03C1BE50: f292d597  bl #0x3180a18
0x03C1BE54: 80d101f0  adrp x0, #0x764e000
0x03C1BE58: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1BE5C: ef92d597  bl #0x3180a18
0x03C1BE60: 881e40f9  ldr x8, [x20, #0x38]
0x03C1BE64: 880000b5  cbnz x8, #0x3c1be74
0x03C1BE68: e00314aa  mov x0, x20
0x03C1BE6C: 83ead497  bl #0x3156878
0x03C1BE70: 881e40f9  ldr x8, [x20, #0x38]
0x03C1BE74: 89d101f0  adrp x9, #0x764e000
0x03C1BE78: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1BE7C: 730a40f9  ldr x19, [x19, #0x10]
0x03C1BE80: 140140f9  ldr x20, [x8]
0x03C1BE84: 200140f9  ldr x0, [x9]
0x03C1BE88: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1BE8C: 49000035  cbnz w9, #0x3c1be94
0x03C1BE90: 3f93d597  bl #0x3180b8c
0x03C1BE94: e00314aa  mov x0, x20
0x03C1BE98: e1031faa  mov x1, xzr
0x03C1BE9C: ca246a94  bl #0x56a51c4
0x03C1BEA0: 330100b4  cbz x19, #0x3c1bec4
0x03C1BEA4: e8d201d0  adrp x8, #0x7679000
0x03C1BEA8: 082946f9  ldr x8, [x8, #0xc50]
0x03C1BEAC: e10300aa  mov x1, x0
0x03C1BEB0: e00313aa  mov x0, x19
0x03C1BEB4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03C1BEB8: 020140f9  ldr x2, [x8]
0x03C1BEBC: fe0742f8  ldr x30, [sp], #0x20
0x03C1BEC0: 2c1c4b14  b #0x4ee2f70
0x03C1BEC4: 7a93d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1BEC8 | ContextualizedECS.Entity$$HasComponent<SpawnerComponent>
; native signature: bool ContextualizedECS_Entity__HasComponent_SpawnerComponent_ (ContextualizedECS_Entity_o* __this, const MethodInfo_3C1BEC8* method);
; bytes=152 sha256=c4549223e1669d90634cd1ca2a6758a563e3e952b5a9f79541d3651f45d6a930 status=arm64_complete_bound indexed_start=True
0x03C1BEC8: fe0f1ef8  str x30, [sp, #-0x20]!
0x03C1BECC: f44f01a9  stp x20, x19, [sp, #0x10]
0x03C1BED0: 281c40f9  ldr x8, [x1, #0x38]
0x03C1BED4: f30300aa  mov x19, x0
0x03C1BED8: a80100b5  cbnz x8, #0x3c1bf0c
0x03C1BEDC: e0d201d0  adrp x0, #0x7679000
0x03C1BEE0: 002846f9  ldr x0, [x0, #0xc50]
0x03C1BEE4: f40301aa  mov x20, x1
0x03C1BEE8: cc92d597  bl #0x3180a18
0x03C1BEEC: 80d101f0  adrp x0, #0x764e000
0x03C1BEF0: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1BEF4: c992d597  bl #0x3180a18
0x03C1BEF8: 881e40f9  ldr x8, [x20, #0x38]
0x03C1BEFC: 880000b5  cbnz x8, #0x3c1bf0c
0x03C1BF00: e00314aa  mov x0, x20
0x03C1BF04: 5dead497  bl #0x3156878
0x03C1BF08: 881e40f9  ldr x8, [x20, #0x38]
0x03C1BF0C: 89d101f0  adrp x9, #0x764e000
0x03C1BF10: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1BF14: 730a40f9  ldr x19, [x19, #0x10]
0x03C1BF18: 140140f9  ldr x20, [x8]
0x03C1BF1C: 200140f9  ldr x0, [x9]
0x03C1BF20: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1BF24: 49000035  cbnz w9, #0x3c1bf2c
0x03C1BF28: 1993d597  bl #0x3180b8c
0x03C1BF2C: e00314aa  mov x0, x20
0x03C1BF30: e1031faa  mov x1, xzr
0x03C1BF34: a4246a94  bl #0x56a51c4
0x03C1BF38: 330100b4  cbz x19, #0x3c1bf5c
0x03C1BF3C: e8d201d0  adrp x8, #0x7679000
0x03C1BF40: 082946f9  ldr x8, [x8, #0xc50]
0x03C1BF44: e10300aa  mov x1, x0
0x03C1BF48: e00313aa  mov x0, x19
0x03C1BF4C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03C1BF50: 020140f9  ldr x2, [x8]
0x03C1BF54: fe0742f8  ldr x30, [sp], #0x20
0x03C1BF58: 061c4b14  b #0x4ee2f70
0x03C1BF5C: 5493d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1BF60 | ContextualizedECS.Entity$$HasComponent<TimeDurationComponent>
; native signature: bool ContextualizedECS_Entity__HasComponent_TimeDurationComponent_ (ContextualizedECS_Entity_o* __this, const MethodInfo_3C1BF60* method);
; bytes=152 sha256=1a809e6a06af25f3cc6b47ddfc0f0b37fb9e04afa0d384775d61731cb6ba6d62 status=arm64_complete_bound indexed_start=True
0x03C1BF60: fe0f1ef8  str x30, [sp, #-0x20]!
0x03C1BF64: f44f01a9  stp x20, x19, [sp, #0x10]
0x03C1BF68: 281c40f9  ldr x8, [x1, #0x38]
0x03C1BF6C: f30300aa  mov x19, x0
0x03C1BF70: a80100b5  cbnz x8, #0x3c1bfa4
0x03C1BF74: e0d201d0  adrp x0, #0x7679000
0x03C1BF78: 002846f9  ldr x0, [x0, #0xc50]
0x03C1BF7C: f40301aa  mov x20, x1
0x03C1BF80: a692d597  bl #0x3180a18
0x03C1BF84: 80d101f0  adrp x0, #0x764e000
0x03C1BF88: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1BF8C: a392d597  bl #0x3180a18
0x03C1BF90: 881e40f9  ldr x8, [x20, #0x38]
0x03C1BF94: 880000b5  cbnz x8, #0x3c1bfa4
0x03C1BF98: e00314aa  mov x0, x20
0x03C1BF9C: 37ead497  bl #0x3156878
0x03C1BFA0: 881e40f9  ldr x8, [x20, #0x38]
0x03C1BFA4: 89d101f0  adrp x9, #0x764e000
0x03C1BFA8: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1BFAC: 730a40f9  ldr x19, [x19, #0x10]
0x03C1BFB0: 140140f9  ldr x20, [x8]
0x03C1BFB4: 200140f9  ldr x0, [x9]
0x03C1BFB8: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1BFBC: 49000035  cbnz w9, #0x3c1bfc4
0x03C1BFC0: f392d597  bl #0x3180b8c
0x03C1BFC4: e00314aa  mov x0, x20
0x03C1BFC8: e1031faa  mov x1, xzr
0x03C1BFCC: 7e246a94  bl #0x56a51c4
0x03C1BFD0: 330100b4  cbz x19, #0x3c1bff4
0x03C1BFD4: e8d201d0  adrp x8, #0x7679000
0x03C1BFD8: 082946f9  ldr x8, [x8, #0xc50]
0x03C1BFDC: e10300aa  mov x1, x0
0x03C1BFE0: e00313aa  mov x0, x19
0x03C1BFE4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03C1BFE8: 020140f9  ldr x2, [x8]
0x03C1BFEC: fe0742f8  ldr x30, [sp], #0x20
0x03C1BFF0: e01b4b14  b #0x4ee2f70
0x03C1BFF4: 2e93d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1BFF8 | ContextualizedECS.Entity$$HasComponent<TimeLimitedActivationComponent>
; native signature: bool ContextualizedECS_Entity__HasComponent_TimeLimitedActivationComponent_ (ContextualizedECS_Entity_o* __this, const MethodInfo_3C1BFF8* method);
; bytes=152 sha256=2cea14854e5261e024c7058bc7c16fcdef711b617c9217a16d077c88988b744b status=arm64_complete_bound indexed_start=True
0x03C1BFF8: fe0f1ef8  str x30, [sp, #-0x20]!
0x03C1BFFC: f44f01a9  stp x20, x19, [sp, #0x10]
0x03C1C000: 281c40f9  ldr x8, [x1, #0x38]
0x03C1C004: f30300aa  mov x19, x0
0x03C1C008: a80100b5  cbnz x8, #0x3c1c03c
0x03C1C00C: e0d201b0  adrp x0, #0x7679000
0x03C1C010: 002846f9  ldr x0, [x0, #0xc50]
0x03C1C014: f40301aa  mov x20, x1
0x03C1C018: 8092d597  bl #0x3180a18
0x03C1C01C: 80d101d0  adrp x0, #0x764e000
0x03C1C020: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1C024: 7d92d597  bl #0x3180a18
0x03C1C028: 881e40f9  ldr x8, [x20, #0x38]
0x03C1C02C: 880000b5  cbnz x8, #0x3c1c03c
0x03C1C030: e00314aa  mov x0, x20
0x03C1C034: 11ead497  bl #0x3156878
0x03C1C038: 881e40f9  ldr x8, [x20, #0x38]
0x03C1C03C: 89d101d0  adrp x9, #0x764e000
0x03C1C040: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1C044: 730a40f9  ldr x19, [x19, #0x10]
0x03C1C048: 140140f9  ldr x20, [x8]
0x03C1C04C: 200140f9  ldr x0, [x9]
0x03C1C050: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1C054: 49000035  cbnz w9, #0x3c1c05c
0x03C1C058: cd92d597  bl #0x3180b8c
0x03C1C05C: e00314aa  mov x0, x20
0x03C1C060: e1031faa  mov x1, xzr
0x03C1C064: 58246a94  bl #0x56a51c4
0x03C1C068: 330100b4  cbz x19, #0x3c1c08c
0x03C1C06C: e8d201b0  adrp x8, #0x7679000
0x03C1C070: 082946f9  ldr x8, [x8, #0xc50]
0x03C1C074: e10300aa  mov x1, x0
0x03C1C078: e00313aa  mov x0, x19
0x03C1C07C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03C1C080: 020140f9  ldr x2, [x8]
0x03C1C084: fe0742f8  ldr x30, [sp], #0x20
0x03C1C088: ba1b4b14  b #0x4ee2f70
0x03C1C08C: 0893d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1C090 | ContextualizedECS.Entity$$HasComponent<TimeLockBlockComponent>
; native signature: bool ContextualizedECS_Entity__HasComponent_TimeLockBlockComponent_ (ContextualizedECS_Entity_o* __this, const MethodInfo_3C1C090* method);
; bytes=152 sha256=af81261ca98d0515ad771535f1c0d49d70a44af2104b05502a0881545fbe556b status=arm64_complete_bound indexed_start=True
0x03C1C090: fe0f1ef8  str x30, [sp, #-0x20]!
0x03C1C094: f44f01a9  stp x20, x19, [sp, #0x10]
0x03C1C098: 281c40f9  ldr x8, [x1, #0x38]
0x03C1C09C: f30300aa  mov x19, x0
0x03C1C0A0: a80100b5  cbnz x8, #0x3c1c0d4
0x03C1C0A4: e0d201b0  adrp x0, #0x7679000
0x03C1C0A8: 002846f9  ldr x0, [x0, #0xc50]
0x03C1C0AC: f40301aa  mov x20, x1
0x03C1C0B0: 5a92d597  bl #0x3180a18
0x03C1C0B4: 80d101d0  adrp x0, #0x764e000
0x03C1C0B8: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1C0BC: 5792d597  bl #0x3180a18
0x03C1C0C0: 881e40f9  ldr x8, [x20, #0x38]
0x03C1C0C4: 880000b5  cbnz x8, #0x3c1c0d4
0x03C1C0C8: e00314aa  mov x0, x20
0x03C1C0CC: ebe9d497  bl #0x3156878
0x03C1C0D0: 881e40f9  ldr x8, [x20, #0x38]
0x03C1C0D4: 89d101d0  adrp x9, #0x764e000
0x03C1C0D8: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1C0DC: 730a40f9  ldr x19, [x19, #0x10]
0x03C1C0E0: 140140f9  ldr x20, [x8]
0x03C1C0E4: 200140f9  ldr x0, [x9]
0x03C1C0E8: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1C0EC: 49000035  cbnz w9, #0x3c1c0f4
0x03C1C0F0: a792d597  bl #0x3180b8c
0x03C1C0F4: e00314aa  mov x0, x20
0x03C1C0F8: e1031faa  mov x1, xzr
0x03C1C0FC: 32246a94  bl #0x56a51c4
0x03C1C100: 330100b4  cbz x19, #0x3c1c124
0x03C1C104: e8d201b0  adrp x8, #0x7679000
0x03C1C108: 082946f9  ldr x8, [x8, #0xc50]
0x03C1C10C: e10300aa  mov x1, x0
0x03C1C110: e00313aa  mov x0, x19
0x03C1C114: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03C1C118: 020140f9  ldr x2, [x8]
0x03C1C11C: fe0742f8  ldr x30, [sp], #0x20
0x03C1C120: 941b4b14  b #0x4ee2f70
0x03C1C124: e292d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1C128 | ContextualizedECS.Entity$$HasComponent<ToolSpawningComponent>
; native signature: bool ContextualizedECS_Entity__HasComponent_ToolSpawningComponent_ (ContextualizedECS_Entity_o* __this, const MethodInfo_3C1C128* method);
; bytes=152 sha256=4db956da79144be308b3ddefc42bea5d26bd86143a0832db765dc296db322553 status=arm64_complete_bound indexed_start=True
0x03C1C128: fe0f1ef8  str x30, [sp, #-0x20]!
0x03C1C12C: f44f01a9  stp x20, x19, [sp, #0x10]
0x03C1C130: 281c40f9  ldr x8, [x1, #0x38]
0x03C1C134: f30300aa  mov x19, x0
0x03C1C138: a80100b5  cbnz x8, #0x3c1c16c
0x03C1C13C: e0d201b0  adrp x0, #0x7679000
0x03C1C140: 002846f9  ldr x0, [x0, #0xc50]
0x03C1C144: f40301aa  mov x20, x1
0x03C1C148: 3492d597  bl #0x3180a18
0x03C1C14C: 80d101d0  adrp x0, #0x764e000
0x03C1C150: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1C154: 3192d597  bl #0x3180a18
0x03C1C158: 881e40f9  ldr x8, [x20, #0x38]
0x03C1C15C: 880000b5  cbnz x8, #0x3c1c16c
0x03C1C160: e00314aa  mov x0, x20
0x03C1C164: c5e9d497  bl #0x3156878
0x03C1C168: 881e40f9  ldr x8, [x20, #0x38]
0x03C1C16C: 89d101d0  adrp x9, #0x764e000
0x03C1C170: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1C174: 730a40f9  ldr x19, [x19, #0x10]
0x03C1C178: 140140f9  ldr x20, [x8]
0x03C1C17C: 200140f9  ldr x0, [x9]
0x03C1C180: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1C184: 49000035  cbnz w9, #0x3c1c18c
0x03C1C188: 8192d597  bl #0x3180b8c
0x03C1C18C: e00314aa  mov x0, x20
0x03C1C190: e1031faa  mov x1, xzr
0x03C1C194: 0c246a94  bl #0x56a51c4
0x03C1C198: 330100b4  cbz x19, #0x3c1c1bc
0x03C1C19C: e8d201b0  adrp x8, #0x7679000
0x03C1C1A0: 082946f9  ldr x8, [x8, #0xc50]
0x03C1C1A4: e10300aa  mov x1, x0
0x03C1C1A8: e00313aa  mov x0, x19
0x03C1C1AC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03C1C1B0: 020140f9  ldr x2, [x8]
0x03C1C1B4: fe0742f8  ldr x30, [sp], #0x20
0x03C1C1B8: 6e1b4b14  b #0x4ee2f70
0x03C1C1BC: bc92d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1C1C0 | ContextualizedECS.Entity$$HasComponent<__Il2CppFullySharedGenericStructType>
; native signature: bool ContextualizedECS_Entity__HasComponent___Il2CppFullySharedGenericStructType_ (ContextualizedECS_Entity_o* __this, const MethodInfo_3C1C1C0* method);
; bytes=152 sha256=e4586022d67e26abb81f479816324ad7c9a1633f6c7041f36a849cfd42fef9e0 status=arm64_complete_bound indexed_start=True
0x03C1C1C0: fe0f1ef8  str x30, [sp, #-0x20]!
0x03C1C1C4: f44f01a9  stp x20, x19, [sp, #0x10]
0x03C1C1C8: 281c40f9  ldr x8, [x1, #0x38]
0x03C1C1CC: f30300aa  mov x19, x0
0x03C1C1D0: a80100b5  cbnz x8, #0x3c1c204
0x03C1C1D4: e0d201b0  adrp x0, #0x7679000
0x03C1C1D8: 002846f9  ldr x0, [x0, #0xc50]
0x03C1C1DC: f40301aa  mov x20, x1
0x03C1C1E0: 0e92d597  bl #0x3180a18
0x03C1C1E4: 80d101d0  adrp x0, #0x764e000
0x03C1C1E8: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1C1EC: 0b92d597  bl #0x3180a18
0x03C1C1F0: 881e40f9  ldr x8, [x20, #0x38]
0x03C1C1F4: 880000b5  cbnz x8, #0x3c1c204
0x03C1C1F8: e00314aa  mov x0, x20
0x03C1C1FC: 9fe9d497  bl #0x3156878
0x03C1C200: 881e40f9  ldr x8, [x20, #0x38]
0x03C1C204: 89d101d0  adrp x9, #0x764e000
0x03C1C208: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1C20C: 730a40f9  ldr x19, [x19, #0x10]
0x03C1C210: 140140f9  ldr x20, [x8]
0x03C1C214: 200140f9  ldr x0, [x9]
0x03C1C218: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1C21C: 49000035  cbnz w9, #0x3c1c224
0x03C1C220: 5b92d597  bl #0x3180b8c
0x03C1C224: e00314aa  mov x0, x20
0x03C1C228: e1031faa  mov x1, xzr
0x03C1C22C: e6236a94  bl #0x56a51c4
0x03C1C230: 330100b4  cbz x19, #0x3c1c254
0x03C1C234: e8d201b0  adrp x8, #0x7679000
0x03C1C238: 082946f9  ldr x8, [x8, #0xc50]
0x03C1C23C: e10300aa  mov x1, x0
0x03C1C240: e00313aa  mov x0, x19
0x03C1C244: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03C1C248: 020140f9  ldr x2, [x8]
0x03C1C24C: fe0742f8  ldr x30, [sp], #0x20
0x03C1C250: 481b4b14  b #0x4ee2f70
0x03C1C254: 9692d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1C258 | ContextualizedECS.Entity$$RemoveComponent<CollectableComponent>
; native signature: bool ContextualizedECS_Entity__RemoveComponent_CollectableComponent_ (ContextualizedECS_Entity_o* __this, const MethodInfo_3C1C258* method);
; bytes=120 sha256=6f6f4e3615af5d35ccb8aa91c84967a86e3fa27feaca6bf7c8235324e5360bf8 status=arm64_complete_bound indexed_start=True
0x03C1C258: fe0f1ef8  str x30, [sp, #-0x20]!
0x03C1C25C: f44f01a9  stp x20, x19, [sp, #0x10]
0x03C1C260: 281c40f9  ldr x8, [x1, #0x38]
0x03C1C264: f30300aa  mov x19, x0
0x03C1C268: 480100b5  cbnz x8, #0x3c1c290
0x03C1C26C: 80d101d0  adrp x0, #0x764e000
0x03C1C270: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1C274: f40301aa  mov x20, x1
0x03C1C278: e891d597  bl #0x3180a18
0x03C1C27C: 881e40f9  ldr x8, [x20, #0x38]
0x03C1C280: 880000b5  cbnz x8, #0x3c1c290
0x03C1C284: e00314aa  mov x0, x20
0x03C1C288: 7ce9d497  bl #0x3156878
0x03C1C28C: 881e40f9  ldr x8, [x20, #0x38]
0x03C1C290: 89d101d0  adrp x9, #0x764e000
0x03C1C294: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1C298: 140140f9  ldr x20, [x8]
0x03C1C29C: 200140f9  ldr x0, [x9]
0x03C1C2A0: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1C2A4: 49000035  cbnz w9, #0x3c1c2ac
0x03C1C2A8: 3992d597  bl #0x3180b8c
0x03C1C2AC: e00314aa  mov x0, x20
0x03C1C2B0: e1031faa  mov x1, xzr
0x03C1C2B4: c4236a94  bl #0x56a51c4
0x03C1C2B8: e10300aa  mov x1, x0
0x03C1C2BC: e00313aa  mov x0, x19
0x03C1C2C0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03C1C2C4: e2031faa  mov x2, xzr
0x03C1C2C8: fe0742f8  ldr x30, [sp], #0x20
0x03C1C2CC: 24e38b14  b #0x5f14f5c

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1C2D0 | ContextualizedECS.Entity$$RemoveComponent<CooldownBlockComponent>
; native signature: bool ContextualizedECS_Entity__RemoveComponent_CooldownBlockComponent_ (ContextualizedECS_Entity_o* __this, const MethodInfo_3C1C2D0* method);
; bytes=120 sha256=2c958c9b34314ed7f9b7a8ef21521d34133ea147847bafdb3749d02d89c92842 status=arm64_complete_bound indexed_start=True
0x03C1C2D0: fe0f1ef8  str x30, [sp, #-0x20]!
0x03C1C2D4: f44f01a9  stp x20, x19, [sp, #0x10]
0x03C1C2D8: 281c40f9  ldr x8, [x1, #0x38]
0x03C1C2DC: f30300aa  mov x19, x0
0x03C1C2E0: 480100b5  cbnz x8, #0x3c1c308
0x03C1C2E4: 80d101d0  adrp x0, #0x764e000
0x03C1C2E8: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1C2EC: f40301aa  mov x20, x1
0x03C1C2F0: ca91d597  bl #0x3180a18
0x03C1C2F4: 881e40f9  ldr x8, [x20, #0x38]
0x03C1C2F8: 880000b5  cbnz x8, #0x3c1c308
0x03C1C2FC: e00314aa  mov x0, x20
0x03C1C300: 5ee9d497  bl #0x3156878
0x03C1C304: 881e40f9  ldr x8, [x20, #0x38]
0x03C1C308: 89d101d0  adrp x9, #0x764e000
0x03C1C30C: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1C310: 140140f9  ldr x20, [x8]
0x03C1C314: 200140f9  ldr x0, [x9]
0x03C1C318: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1C31C: 49000035  cbnz w9, #0x3c1c324
0x03C1C320: 1b92d597  bl #0x3180b8c
0x03C1C324: e00314aa  mov x0, x20
0x03C1C328: e1031faa  mov x1, xzr
0x03C1C32C: a6236a94  bl #0x56a51c4
0x03C1C330: e10300aa  mov x1, x0
0x03C1C334: e00313aa  mov x0, x19
0x03C1C338: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03C1C33C: e2031faa  mov x2, xzr
0x03C1C340: fe0742f8  ldr x30, [sp], #0x20
0x03C1C344: 06e38b14  b #0x5f14f5c

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1C348 | ContextualizedECS.Entity$$RemoveComponent<DeadComponent>
; native signature: bool ContextualizedECS_Entity__RemoveComponent_DeadComponent_ (ContextualizedECS_Entity_o* __this, const MethodInfo_3C1C348* method);
; bytes=120 sha256=caed41377f2513b0c494b1080ff4e094c834d9bc471d3a7b66f34a3ddfac40c0 status=arm64_complete_bound indexed_start=True
0x03C1C348: fe0f1ef8  str x30, [sp, #-0x20]!
0x03C1C34C: f44f01a9  stp x20, x19, [sp, #0x10]
0x03C1C350: 281c40f9  ldr x8, [x1, #0x38]
0x03C1C354: f30300aa  mov x19, x0
0x03C1C358: 480100b5  cbnz x8, #0x3c1c380
0x03C1C35C: 80d101d0  adrp x0, #0x764e000
0x03C1C360: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1C364: f40301aa  mov x20, x1
0x03C1C368: ac91d597  bl #0x3180a18
0x03C1C36C: 881e40f9  ldr x8, [x20, #0x38]
0x03C1C370: 880000b5  cbnz x8, #0x3c1c380
0x03C1C374: e00314aa  mov x0, x20
0x03C1C378: 40e9d497  bl #0x3156878
0x03C1C37C: 881e40f9  ldr x8, [x20, #0x38]
0x03C1C380: 89d101d0  adrp x9, #0x764e000
0x03C1C384: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1C388: 140140f9  ldr x20, [x8]
0x03C1C38C: 200140f9  ldr x0, [x9]
0x03C1C390: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1C394: 49000035  cbnz w9, #0x3c1c39c
0x03C1C398: fd91d597  bl #0x3180b8c
0x03C1C39C: e00314aa  mov x0, x20
0x03C1C3A0: e1031faa  mov x1, xzr
0x03C1C3A4: 88236a94  bl #0x56a51c4
0x03C1C3A8: e10300aa  mov x1, x0
0x03C1C3AC: e00313aa  mov x0, x19
0x03C1C3B0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03C1C3B4: e2031faa  mov x2, xzr
0x03C1C3B8: fe0742f8  ldr x30, [sp], #0x20
0x03C1C3BC: e8e28b14  b #0x5f14f5c

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1C3C0 | ContextualizedECS.Entity$$RemoveComponent<ExpendableComponent>
; native signature: bool ContextualizedECS_Entity__RemoveComponent_ExpendableComponent_ (ContextualizedECS_Entity_o* __this, const MethodInfo_3C1C3C0* method);
; bytes=120 sha256=4a06f1b415301364dcf410d30d7a002dee7bd2887fd466aa3a9381a8f5a4c01d status=arm64_complete_bound indexed_start=True
0x03C1C3C0: fe0f1ef8  str x30, [sp, #-0x20]!
0x03C1C3C4: f44f01a9  stp x20, x19, [sp, #0x10]
0x03C1C3C8: 281c40f9  ldr x8, [x1, #0x38]
0x03C1C3CC: f30300aa  mov x19, x0
0x03C1C3D0: 480100b5  cbnz x8, #0x3c1c3f8
0x03C1C3D4: 80d101d0  adrp x0, #0x764e000
0x03C1C3D8: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1C3DC: f40301aa  mov x20, x1
0x03C1C3E0: 8e91d597  bl #0x3180a18
0x03C1C3E4: 881e40f9  ldr x8, [x20, #0x38]
0x03C1C3E8: 880000b5  cbnz x8, #0x3c1c3f8
0x03C1C3EC: e00314aa  mov x0, x20
0x03C1C3F0: 22e9d497  bl #0x3156878
0x03C1C3F4: 881e40f9  ldr x8, [x20, #0x38]
0x03C1C3F8: 89d101d0  adrp x9, #0x764e000
0x03C1C3FC: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1C400: 140140f9  ldr x20, [x8]
0x03C1C404: 200140f9  ldr x0, [x9]
0x03C1C408: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1C40C: 49000035  cbnz w9, #0x3c1c414
0x03C1C410: df91d597  bl #0x3180b8c
0x03C1C414: e00314aa  mov x0, x20
0x03C1C418: e1031faa  mov x1, xzr
0x03C1C41C: 6a236a94  bl #0x56a51c4
0x03C1C420: e10300aa  mov x1, x0
0x03C1C424: e00313aa  mov x0, x19
0x03C1C428: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03C1C42C: e2031faa  mov x2, xzr
0x03C1C430: fe0742f8  ldr x30, [sp], #0x20
0x03C1C434: cae28b14  b #0x5f14f5c

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1C438 | ContextualizedECS.Entity$$RemoveComponent<PendingItemsCombinationComponent>
; native signature: bool ContextualizedECS_Entity__RemoveComponent_PendingItemsCombinationComponent_ (ContextualizedECS_Entity_o* __this, const MethodInfo_3C1C438* method);
; bytes=120 sha256=08bc4d633572ad2f2bae85406c4e4452fa9e04f3a03e5c48fb6c19cc8d60c77a status=arm64_complete_bound indexed_start=True
0x03C1C438: fe0f1ef8  str x30, [sp, #-0x20]!
0x03C1C43C: f44f01a9  stp x20, x19, [sp, #0x10]
0x03C1C440: 281c40f9  ldr x8, [x1, #0x38]
0x03C1C444: f30300aa  mov x19, x0
0x03C1C448: 480100b5  cbnz x8, #0x3c1c470
0x03C1C44C: 80d101d0  adrp x0, #0x764e000
0x03C1C450: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1C454: f40301aa  mov x20, x1
0x03C1C458: 7091d597  bl #0x3180a18
0x03C1C45C: 881e40f9  ldr x8, [x20, #0x38]
0x03C1C460: 880000b5  cbnz x8, #0x3c1c470
0x03C1C464: e00314aa  mov x0, x20
0x03C1C468: 04e9d497  bl #0x3156878
0x03C1C46C: 881e40f9  ldr x8, [x20, #0x38]
0x03C1C470: 89d101d0  adrp x9, #0x764e000
0x03C1C474: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1C478: 140140f9  ldr x20, [x8]
0x03C1C47C: 200140f9  ldr x0, [x9]
0x03C1C480: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1C484: 49000035  cbnz w9, #0x3c1c48c
0x03C1C488: c191d597  bl #0x3180b8c
0x03C1C48C: e00314aa  mov x0, x20
0x03C1C490: e1031faa  mov x1, xzr
0x03C1C494: 4c236a94  bl #0x56a51c4
0x03C1C498: e10300aa  mov x1, x0
0x03C1C49C: e00313aa  mov x0, x19
0x03C1C4A0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03C1C4A4: e2031faa  mov x2, xzr
0x03C1C4A8: fe0742f8  ldr x30, [sp], #0x20
0x03C1C4AC: ace28b14  b #0x5f14f5c

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1C4B0 | ContextualizedECS.Entity$$RemoveComponent<TimeLockBlockComponent>
; native signature: bool ContextualizedECS_Entity__RemoveComponent_TimeLockBlockComponent_ (ContextualizedECS_Entity_o* __this, const MethodInfo_3C1C4B0* method);
; bytes=120 sha256=4c4f72872242dfcee2bff98a1a35dd0d1c23669e72306d66a8e39960f86be2e1 status=arm64_complete_bound indexed_start=True
0x03C1C4B0: fe0f1ef8  str x30, [sp, #-0x20]!
0x03C1C4B4: f44f01a9  stp x20, x19, [sp, #0x10]
0x03C1C4B8: 281c40f9  ldr x8, [x1, #0x38]
0x03C1C4BC: f30300aa  mov x19, x0
0x03C1C4C0: 480100b5  cbnz x8, #0x3c1c4e8
0x03C1C4C4: 80d101d0  adrp x0, #0x764e000
0x03C1C4C8: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1C4CC: f40301aa  mov x20, x1
0x03C1C4D0: 5291d597  bl #0x3180a18
0x03C1C4D4: 881e40f9  ldr x8, [x20, #0x38]
0x03C1C4D8: 880000b5  cbnz x8, #0x3c1c4e8
0x03C1C4DC: e00314aa  mov x0, x20
0x03C1C4E0: e6e8d497  bl #0x3156878
0x03C1C4E4: 881e40f9  ldr x8, [x20, #0x38]
0x03C1C4E8: 89d101d0  adrp x9, #0x764e000
0x03C1C4EC: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1C4F0: 140140f9  ldr x20, [x8]
0x03C1C4F4: 200140f9  ldr x0, [x9]
0x03C1C4F8: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1C4FC: 49000035  cbnz w9, #0x3c1c504
0x03C1C500: a391d597  bl #0x3180b8c
0x03C1C504: e00314aa  mov x0, x20
0x03C1C508: e1031faa  mov x1, xzr
0x03C1C50C: 2e236a94  bl #0x56a51c4
0x03C1C510: e10300aa  mov x1, x0
0x03C1C514: e00313aa  mov x0, x19
0x03C1C518: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03C1C51C: e2031faa  mov x2, xzr
0x03C1C520: fe0742f8  ldr x30, [sp], #0x20
0x03C1C524: 8ee28b14  b #0x5f14f5c

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1C528 | ContextualizedECS.Entity$$RemoveComponent<ToolSpawningComponent>
; native signature: bool ContextualizedECS_Entity__RemoveComponent_ToolSpawningComponent_ (ContextualizedECS_Entity_o* __this, const MethodInfo_3C1C528* method);
; bytes=120 sha256=07427c64def180dff0c63212aeb05a5f11ed7eec05aefe6a40896b7361e330db status=arm64_complete_bound indexed_start=True
0x03C1C528: fe0f1ef8  str x30, [sp, #-0x20]!
0x03C1C52C: f44f01a9  stp x20, x19, [sp, #0x10]
0x03C1C530: 281c40f9  ldr x8, [x1, #0x38]
0x03C1C534: f30300aa  mov x19, x0
0x03C1C538: 480100b5  cbnz x8, #0x3c1c560
0x03C1C53C: 80d101d0  adrp x0, #0x764e000
0x03C1C540: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1C544: f40301aa  mov x20, x1
0x03C1C548: 3491d597  bl #0x3180a18
0x03C1C54C: 881e40f9  ldr x8, [x20, #0x38]
0x03C1C550: 880000b5  cbnz x8, #0x3c1c560
0x03C1C554: e00314aa  mov x0, x20
0x03C1C558: c8e8d497  bl #0x3156878
0x03C1C55C: 881e40f9  ldr x8, [x20, #0x38]
0x03C1C560: 89d101d0  adrp x9, #0x764e000
0x03C1C564: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1C568: 140140f9  ldr x20, [x8]
0x03C1C56C: 200140f9  ldr x0, [x9]
0x03C1C570: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1C574: 49000035  cbnz w9, #0x3c1c57c
0x03C1C578: 8591d597  bl #0x3180b8c
0x03C1C57C: e00314aa  mov x0, x20
0x03C1C580: e1031faa  mov x1, xzr
0x03C1C584: 10236a94  bl #0x56a51c4
0x03C1C588: e10300aa  mov x1, x0
0x03C1C58C: e00313aa  mov x0, x19
0x03C1C590: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03C1C594: e2031faa  mov x2, xzr
0x03C1C598: fe0742f8  ldr x30, [sp], #0x20
0x03C1C59C: 70e28b14  b #0x5f14f5c

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1C5A0 | ContextualizedECS.Entity$$RemoveComponent<__Il2CppFullySharedGenericStructType>
; native signature: bool ContextualizedECS_Entity__RemoveComponent___Il2CppFullySharedGenericStructType_ (ContextualizedECS_Entity_o* __this, const MethodInfo_3C1C5A0* method);
; bytes=120 sha256=9d9b72d921dd1f371e54db5625b0d7e4bd7cdfa1f9d7c7783e6203707218aa65 status=arm64_complete_bound indexed_start=True
0x03C1C5A0: fe0f1ef8  str x30, [sp, #-0x20]!
0x03C1C5A4: f44f01a9  stp x20, x19, [sp, #0x10]
0x03C1C5A8: 281c40f9  ldr x8, [x1, #0x38]
0x03C1C5AC: f30300aa  mov x19, x0
0x03C1C5B0: 480100b5  cbnz x8, #0x3c1c5d8
0x03C1C5B4: 80d101d0  adrp x0, #0x764e000
0x03C1C5B8: 00ac42f9  ldr x0, [x0, #0x558]
0x03C1C5BC: f40301aa  mov x20, x1
0x03C1C5C0: 1691d597  bl #0x3180a18
0x03C1C5C4: 881e40f9  ldr x8, [x20, #0x38]
0x03C1C5C8: 880000b5  cbnz x8, #0x3c1c5d8
0x03C1C5CC: e00314aa  mov x0, x20
0x03C1C5D0: aae8d497  bl #0x3156878
0x03C1C5D4: 881e40f9  ldr x8, [x20, #0x38]
0x03C1C5D8: 89d101d0  adrp x9, #0x764e000
0x03C1C5DC: 29ad42f9  ldr x9, [x9, #0x558]
0x03C1C5E0: 140140f9  ldr x20, [x8]
0x03C1C5E4: 200140f9  ldr x0, [x9]
0x03C1C5E8: 09e040b9  ldr w9, [x0, #0xe0]
0x03C1C5EC: 49000035  cbnz w9, #0x3c1c5f4
0x03C1C5F0: 6791d597  bl #0x3180b8c
0x03C1C5F4: e00314aa  mov x0, x20
0x03C1C5F8: e1031faa  mov x1, xzr
0x03C1C5FC: f2226a94  bl #0x56a51c4
0x03C1C600: e10300aa  mov x1, x0
0x03C1C604: e00313aa  mov x0, x19
0x03C1C608: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03C1C60C: e2031faa  mov x2, xzr
0x03C1C610: fe0742f8  ldr x30, [sp], #0x20
0x03C1C614: 52e28b14  b #0x5f14f5c

