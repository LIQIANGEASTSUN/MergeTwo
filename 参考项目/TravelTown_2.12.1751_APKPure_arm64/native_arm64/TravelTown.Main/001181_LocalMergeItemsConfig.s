; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1181 MergeEngine.Configuration.LocalMergeItemsConfig
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6912D04 | private HashSet<string> get_LocalItemNamesHashSet() { }
; bytes=152 sha256=7a909b4dc007218574fd5432aad78a9196158a6292f73c64c5fe63a59d9b2dc5 status=arm64_complete_bound indexed_start=True
0x06912D04: fe0f1df8  str x30, [sp, #-0x30]!
0x06912D08: f65701a9  stp x22, x21, [sp, #0x10]
0x06912D0C: f44f02a9  stp x20, x19, [sp, #0x20]
0x06912D10: b4a000f0  adrp x20, #0x7d29000
0x06912D14: 889a6739  ldrb w8, [x20, #0x9e6]
0x06912D18: f30300aa  mov x19, x0
0x06912D1C: 28010037  tbnz w8, #0, #0x6912d40
0x06912D20: 406a0090  adrp x0, #0x765a000
0x06912D24: 000846f9  ldr x0, [x0, #0xc10]
0x06912D28: 3cb72197  bl #0x3180a18
0x06912D2C: 006a0090  adrp x0, #0x7652000
0x06912D30: 004846f9  ldr x0, [x0, #0xc90]
0x06912D34: 39b72197  bl #0x3180a18
0x06912D38: 28008052  movz w8, #0x1
0x06912D3C: 889a2739  strb w8, [x20, #0x9e6]
0x06912D40: f40313aa  mov x20, x19
0x06912D44: 958e46f8  ldr x21, [x20, #0x68]!
0x06912D48: 150200b5  cbnz x21, #0x6912d88
0x06912D4C: 086a0090  adrp x8, #0x7652000
0x06912D50: 762e40f9  ldr x22, [x19, #0x58]
0x06912D54: 084946f9  ldr x8, [x8, #0xc90]
0x06912D58: 000140f9  ldr x0, [x8]
0x06912D5C: d1b72197  bl #0x3180ca0
0x06912D60: 486a0090  adrp x8, #0x765a000
0x06912D64: 080946f9  ldr x8, [x8, #0xc10]
0x06912D68: e10316aa  mov x1, x22
0x06912D6C: f50300aa  mov x21, x0
0x06912D70: 020140f9  ldr x2, [x8]
0x06912D74: 6fb4a697  bl #0x52bff30
0x06912D78: e00314aa  mov x0, x20
0x06912D7C: e10315aa  mov x1, x21
0x06912D80: 753600f9  str x21, [x19, #0x68]
0x06912D84: 10b72197  bl #0x31809c4
0x06912D88: e00315aa  mov x0, x21
0x06912D8C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06912D90: f65741a9  ldp x22, x21, [sp, #0x10]
0x06912D94: fe0743f8  ldr x30, [sp], #0x30
0x06912D98: c0035fd6  ret

; RVA 0x6912D9C | public void .ctor(List<string> localItemNames) { }
; bytes=204 sha256=176ccbcd8bffc7137fc12f2461f1d1ce97dfb0dbe3cdb9af217f56eb158d7287 status=arm64_complete_bound indexed_start=True
0x06912D9C: fe0f1cf8  str x30, [sp, #-0x40]!
0x06912DA0: f85f01a9  stp x24, x23, [sp, #0x10]
0x06912DA4: f65702a9  stp x22, x21, [sp, #0x20]
0x06912DA8: f44f03a9  stp x20, x19, [sp, #0x30]
0x06912DAC: b6a000f0  adrp x22, #0x7d29000
0x06912DB0: f8690090  adrp x24, #0x764e000
0x06912DB4: f5690090  adrp x21, #0x764e000
0x06912DB8: b76f00d0  adrp x23, #0x7708000
0x06912DBC: c89e6739  ldrb w8, [x22, #0x9e7]
0x06912DC0: 185f46f9  ldr x24, [x24, #0xcb8]
0x06912DC4: b56246f9  ldr x21, [x21, #0xcc0]
0x06912DC8: f77645f9  ldr x23, [x23, #0xae8]
0x06912DCC: f30301aa  mov x19, x1
0x06912DD0: f40300aa  mov x20, x0
0x06912DD4: 88010037  tbnz w8, #0, #0x6912e04
0x06912DD8: e0690090  adrp x0, #0x764e000
0x06912DDC: 006046f9  ldr x0, [x0, #0xcc0]
0x06912DE0: 0eb72197  bl #0x3180a18
0x06912DE4: e0690090  adrp x0, #0x764e000
0x06912DE8: 005c46f9  ldr x0, [x0, #0xcb8]
0x06912DEC: 0bb72197  bl #0x3180a18
0x06912DF0: a06f00d0  adrp x0, #0x7708000
0x06912DF4: 007445f9  ldr x0, [x0, #0xae8]
0x06912DF8: 08b72197  bl #0x3180a18
0x06912DFC: 28008052  movz w8, #0x1
0x06912E00: c89e2739  strb w8, [x22, #0x9e7]
0x06912E04: 000340f9  ldr x0, [x24]
0x06912E08: a6b72197  bl #0x3180ca0
0x06912E0C: a10240f9  ldr x1, [x21]
0x06912E10: f50300aa  mov x21, x0
0x06912E14: 89c35c97  bl #0x4043c38
0x06912E18: f60314aa  mov x22, x20
0x06912E1C: d58e05f8  str x21, [x22, #0x58]!
0x06912E20: e00316aa  mov x0, x22
0x06912E24: e10315aa  mov x1, x21
0x06912E28: e7b62197  bl #0x31809c4
0x06912E2C: e10240f9  ldr x1, [x23]
0x06912E30: e00314aa  mov x0, x20
0x06912E34: 010c06f8  str x1, [x0, #0x60]!
0x06912E38: e3b62197  bl #0x31809c4
0x06912E3C: e00314aa  mov x0, x20
0x06912E40: e1031faa  mov x1, xzr
0x06912E44: 4f5fbf97  bl #0x58eab80
0x06912E48: d30200f9  str x19, [x22]
0x06912E4C: e00316aa  mov x0, x22
0x06912E50: e10313aa  mov x1, x19
0x06912E54: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06912E58: f65742a9  ldp x22, x21, [sp, #0x20]
0x06912E5C: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06912E60: fe0744f8  ldr x30, [sp], #0x40
0x06912E64: d8b62117  b #0x31809c4

; RVA 0x6912E68 | private void OnEnable() { }
; bytes=4 sha256=788f1512f26f87f558ccda89030f23036527961be061f31e047ad5b93b8aafe2 status=arm64_complete_bound indexed_start=True
0x06912E68: 01000014  b #0x6912e6c

; RVA 0x6912F4C | public bool IsLocalItem(string itemName) { }
; bytes=92 sha256=ad9f1db0ff6bbe4a9d71d81c290d82bf79407fed58eb381b13f0d652f64f9418 status=arm64_complete_bound indexed_start=True
0x06912F4C: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06912F50: f44f01a9  stp x20, x19, [sp, #0x10]
0x06912F54: b5a000f0  adrp x21, #0x7d29000
0x06912F58: a8a26739  ldrb w8, [x21, #0x9e8]
0x06912F5C: f30301aa  mov x19, x1
0x06912F60: f40300aa  mov x20, x0
0x06912F64: c8000037  tbnz w8, #0, #0x6912f7c
0x06912F68: 206a00b0  adrp x0, #0x7657000
0x06912F6C: 002446f9  ldr x0, [x0, #0xc48]
0x06912F70: aab62197  bl #0x3180a18
0x06912F74: 28008052  movz w8, #0x1
0x06912F78: a8a22739  strb w8, [x21, #0x9e8]
0x06912F7C: e00314aa  mov x0, x20
0x06912F80: 61ffff97  bl #0x6912d04
0x06912F84: 000100b4  cbz x0, #0x6912fa4
0x06912F88: 286a00b0  adrp x8, #0x7657000
0x06912F8C: 082546f9  ldr x8, [x8, #0xc48]
0x06912F90: e10313aa  mov x1, x19
0x06912F94: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06912F98: 020140f9  ldr x2, [x8]
0x06912F9C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06912FA0: 65b5a617  b #0x52c0534
0x06912FA4: 42b72197  bl #0x3180cac

; RVA 0x6912FA8 | public ReadOnlyCollection<string> GetLocalItemNames() { }
; bytes=80 sha256=1afa3ce07719b16a7ce86dcddb4cf459b71264fc85883aefbdcf42ffc9ace752 status=arm64_complete_bound indexed_start=True
0x06912FA8: fe0f1ef8  str x30, [sp, #-0x20]!
0x06912FAC: f44f01a9  stp x20, x19, [sp, #0x10]
0x06912FB0: b4a000f0  adrp x20, #0x7d29000
0x06912FB4: 88a66739  ldrb w8, [x20, #0x9e9]
0x06912FB8: f30300aa  mov x19, x0
0x06912FBC: c8000037  tbnz w8, #0, #0x6912fd4
0x06912FC0: a06e0090  adrp x0, #0x76e6000
0x06912FC4: 00bc47f9  ldr x0, [x0, #0xf78]
0x06912FC8: 94b62197  bl #0x3180a18
0x06912FCC: 28008052  movz w8, #0x1
0x06912FD0: 88a62739  strb w8, [x20, #0x9e9]
0x06912FD4: 602e40f9  ldr x0, [x19, #0x58]
0x06912FD8: e00000b4  cbz x0, #0x6912ff4
0x06912FDC: a86e0090  adrp x8, #0x76e6000
0x06912FE0: 08bd47f9  ldr x8, [x8, #0xf78]
0x06912FE4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06912FE8: 010140f9  ldr x1, [x8]
0x06912FEC: fe0742f8  ldr x30, [sp], #0x20
0x06912FF0: a9c55c17  b #0x4044694
0x06912FF4: 2eb72197  bl #0x3180cac

; RVA 0x6912E6C | private void ValidatePrefixes() { }
; bytes=224 sha256=c15a2f4b3cdf77b78e373db86bac0f2d8b3d20a6dd92ccf2dd8fbcf88d70d1f5 status=arm64_complete_bound indexed_start=True
0x06912E6C: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x06912E70: f65701a9  stp x22, x21, [sp, #0x10]
0x06912E74: f44f02a9  stp x20, x19, [sp, #0x20]
0x06912E78: b4a000f0  adrp x20, #0x7d29000
0x06912E7C: 88aa6739  ldrb w8, [x20, #0x9ea]
0x06912E80: f30300aa  mov x19, x0
0x06912E84: 88010037  tbnz w8, #0, #0x6912eb4
0x06912E88: e06900f0  adrp x0, #0x7651000
0x06912E8C: 002845f9  ldr x0, [x0, #0xa50]
0x06912E90: e2b62197  bl #0x3180a18
0x06912E94: e06900f0  adrp x0, #0x7651000
0x06912E98: 002c45f9  ldr x0, [x0, #0xa58]
0x06912E9C: dfb62197  bl #0x3180a18
0x06912EA0: 006d00f0  adrp x0, #0x76b5000
0x06912EA4: 00d040f9  ldr x0, [x0, #0x1a0]
0x06912EA8: dcb62197  bl #0x3180a18
0x06912EAC: 28008052  movz w8, #0x1
0x06912EB0: 88aa2739  strb w8, [x20, #0x9ea]
0x06912EB4: 602e40f9  ldr x0, [x19, #0x58]
0x06912EB8: 000400b4  cbz x0, #0x6912f38
0x06912EBC: f66900f0  adrp x22, #0x7651000
0x06912EC0: 176d00f0  adrp x23, #0x76b5000
0x06912EC4: d62e45f9  ldr x22, [x22, #0xa58]
0x06912EC8: f7d240f9  ldr x23, [x23, #0x1a0]
0x06912ECC: f4031f2a  mov w20, wzr
0x06912ED0: 081840b9  ldr w8, [x0, #0x18]
0x06912ED4: 9f02086b  cmp w20, w8
0x06912ED8: 2a030054  b.ge #0x6912f3c
0x06912EDC: c20240f9  ldr x2, [x22]
0x06912EE0: e103142a  mov w1, w20
0x06912EE4: aec45c97  bl #0x404419c
0x06912EE8: 800200b4  cbz x0, #0x6912f38
0x06912EEC: 613240f9  ldr x1, [x19, #0x60]
0x06912EF0: e2031faa  mov x2, xzr
0x06912EF4: f50300aa  mov x21, x0
0x06912EF8: 0ca4af97  bl #0x54fbf28
0x06912EFC: 80010037  tbnz w0, #0, #0x6912f2c
0x06912F00: 603240f9  ldr x0, [x19, #0x60]
0x06912F04: e10315aa  mov x1, x21
0x06912F08: e2031faa  mov x2, xzr
0x06912F0C: 255eaf97  bl #0x54ea7a0
0x06912F10: 682e40f9  ldr x8, [x19, #0x58]
0x06912F14: 280100b4  cbz x8, #0x6912f38
0x06912F18: e30240f9  ldr x3, [x23]
0x06912F1C: e20300aa  mov x2, x0
0x06912F20: e00308aa  mov x0, x8
0x06912F24: e103142a  mov w1, w20
0x06912F28: b2c45c97  bl #0x40441f0
0x06912F2C: 602e40f9  ldr x0, [x19, #0x58]
0x06912F30: 94060011  add w20, w20, #1
0x06912F34: e0fcffb5  cbnz x0, #0x6912ed0
0x06912F38: 5db72197  bl #0x3180cac
0x06912F3C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06912F40: f65741a9  ldp x22, x21, [sp, #0x10]
0x06912F44: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x06912F48: c0035fd6  ret

; RVA 0x6912FF8 | public string MakeTextureName(string texName) { }
; bytes=12 sha256=bb143423ed4323f74333f57044d4c1b5311f444405a8b8af6f8bcd5ddf8be79c status=arm64_complete_bound indexed_start=True
0x06912FF8: 003040f9  ldr x0, [x0, #0x60]
0x06912FFC: e2031faa  mov x2, xzr
0x06913000: e85daf17  b #0x54ea7a0

