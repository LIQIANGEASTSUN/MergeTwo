; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 7763 .BoosterService.<>c__DisplayClass48_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x65C3D2C | public void .ctor() { }
; bytes=8 sha256=1a7240cf58460a2c1e3c361b610f7fc07c4fdb2c5d70bca5bf9d38c285d9d0d5 status=arm64_complete_bound indexed_start=True
0x065C3D2C: e1031faa  mov x1, xzr
0x065C3D30: 335ac417  b #0x56da5fc

; RVA 0x65C4D88 | internal void <CheckBoosterDeactivatedRemote>b__0(List<RemoteBoosterData> act) { }
; bytes=692 sha256=529cede26cecbbb0a0a533f6fac7e49beea01b5bbc846e7cee8fbd80cbdf2783 status=arm64_complete_bound indexed_start=True
0x065C4D88: ffc301d1  sub sp, sp, #0x70
0x065C4D8C: fe1300f9  str x30, [sp, #0x20]
0x065C4D90: fa6703a9  stp x26, x25, [sp, #0x30]
0x065C4D94: f85f04a9  stp x24, x23, [sp, #0x40]
0x065C4D98: f65705a9  stp x22, x21, [sp, #0x50]
0x065C4D9C: f44f06a9  stp x20, x19, [sp, #0x60]
0x065C4DA0: 15bb00f0  adrp x21, #0x7d27000
0x065C4DA4: a8026539  ldrb w8, [x21, #0x940]
0x065C4DA8: f40301aa  mov x20, x1
0x065C4DAC: f30300aa  mov x19, x0
0x065C4DB0: a8050037  tbnz w8, #0, #0x65c4e64
0x065C4DB4: 208900d0  adrp x0, #0x76ea000
0x065C4DB8: 00e844f9  ldr x0, [x0, #0x9d0]
0x065C4DBC: 17ef2e97  bl #0x3180a18
0x065C4DC0: c08500f0  adrp x0, #0x767f000
0x065C4DC4: 00e843f9  ldr x0, [x0, #0x7d0]
0x065C4DC8: 14ef2e97  bl #0x3180a18
0x065C4DCC: 408500b0  adrp x0, #0x766d000
0x065C4DD0: 006c46f9  ldr x0, [x0, #0xcd8]
0x065C4DD4: 11ef2e97  bl #0x3180a18
0x065C4DD8: 608500b0  adrp x0, #0x7671000
0x065C4DDC: 008443f9  ldr x0, [x0, #0x708]
0x065C4DE0: 0eef2e97  bl #0x3180a18
0x065C4DE4: c08500b0  adrp x0, #0x767d000
0x065C4DE8: 002c45f9  ldr x0, [x0, #0xa58]
0x065C4DEC: 0bef2e97  bl #0x3180a18
0x065C4DF0: a08500b0  adrp x0, #0x7679000
0x065C4DF4: 00e043f9  ldr x0, [x0, #0x7c0]
0x065C4DF8: 08ef2e97  bl #0x3180a18
0x065C4DFC: a08500b0  adrp x0, #0x7679000
0x065C4E00: 00e443f9  ldr x0, [x0, #0x7c8]
0x065C4E04: 05ef2e97  bl #0x3180a18
0x065C4E08: a08500b0  adrp x0, #0x7679000
0x065C4E0C: 007844f9  ldr x0, [x0, #0x8f0]
0x065C4E10: 02ef2e97  bl #0x3180a18
0x065C4E14: e08900f0  adrp x0, #0x7703000
0x065C4E18: 008441f9  ldr x0, [x0, #0x308]
0x065C4E1C: ffee2e97  bl #0x3180a18
0x065C4E20: e08900f0  adrp x0, #0x7703000
0x065C4E24: 008841f9  ldr x0, [x0, #0x310]
0x065C4E28: fcee2e97  bl #0x3180a18
0x065C4E2C: e08900f0  adrp x0, #0x7703000
0x065C4E30: 008c41f9  ldr x0, [x0, #0x318]
0x065C4E34: f9ee2e97  bl #0x3180a18
0x065C4E38: e08900f0  adrp x0, #0x7703000
0x065C4E3C: 009041f9  ldr x0, [x0, #0x320]
0x065C4E40: f6ee2e97  bl #0x3180a18
0x065C4E44: c0850090  adrp x0, #0x767c000
0x065C4E48: 003040f9  ldr x0, [x0, #0x60]
0x065C4E4C: f3ee2e97  bl #0x3180a18
0x065C4E50: e08900f0  adrp x0, #0x7703000
0x065C4E54: 009441f9  ldr x0, [x0, #0x328]
0x065C4E58: f0ee2e97  bl #0x3180a18
0x065C4E5C: 28008052  movz w8, #0x1
0x065C4E60: a8022539  strb w8, [x21, #0x940]
0x065C4E64: f50313aa  mov x21, x19
0x065C4E68: b78500b0  adrp x23, #0x7679000
0x065C4E6C: b60e42f8  ldr x22, [x21, #0x20]!
0x065C4E70: f7e243f9  ldr x23, [x23, #0x7c0]
0x065C4E74: 160200b5  cbnz x22, #0x65c4eb4
0x065C4E78: a88500b0  adrp x8, #0x7679000
0x065C4E7C: 08e543f9  ldr x8, [x8, #0x7c8]
0x065C4E80: 000140f9  ldr x0, [x8]
0x065C4E84: 87ef2e97  bl #0x3180ca0
0x065C4E88: e88900f0  adrp x8, #0x7703000
0x065C4E8C: 088541f9  ldr x8, [x8, #0x308]
0x065C4E90: e10313aa  mov x1, x19
0x065C4E94: e3031faa  mov x3, xzr
0x065C4E98: f60300aa  mov x22, x0
0x065C4E9C: 020140f9  ldr x2, [x8]
0x065C4EA0: 4744b297  bl #0x5255fbc
0x065C4EA4: e00315aa  mov x0, x21
0x065C4EA8: e10316aa  mov x1, x22
0x065C4EAC: 761200f9  str x22, [x19, #0x20]
0x065C4EB0: c5ee2e97  bl #0x31809c4
0x065C4EB4: e20240f9  ldr x2, [x23]
0x065C4EB8: e00314aa  mov x0, x20
0x065C4EBC: e10316aa  mov x1, x22
0x065C4EC0: 9c005a97  bl #0x3c45130
0x065C4EC4: c00a00b4  cbz x0, #0x65c501c
0x065C4EC8: 600a40f9  ldr x0, [x19, #0x10]
0x065C4ECC: 600b00b4  cbz x0, #0x65c5038
0x065C4ED0: 288900d0  adrp x8, #0x76ea000
0x065C4ED4: 08e944f9  ldr x8, [x8, #0x9d0]
0x065C4ED8: 010140f9  ldr x1, [x8]
0x065C4EDC: 9a9c9897  bl #0x4bec144
0x065C4EE0: 680a40f9  ldr x8, [x19, #0x10]
0x065C4EE4: a80a00b4  cbz x8, #0x65c5038
0x065C4EE8: c98500f0  adrp x9, #0x767f000
0x065C4EEC: 29e943f9  ldr x9, [x9, #0x7d0]
0x065C4EF0: f58900f0  adrp x21, #0x7703000
0x065C4EF4: f88900f0  adrp x24, #0x7703000
0x065C4EF8: b98500b0  adrp x25, #0x7679000
0x065C4EFC: b59241f9  ldr x21, [x21, #0x320]
0x065C4F00: 189741f9  ldr x24, [x24, #0x328]
0x065C4F04: 397b44f9  ldr x25, [x25, #0x8f0]
0x065C4F08: 210140f9  ldr x1, [x9]
0x065C4F0C: 5a8500b0  adrp x26, #0x766d000
0x065C4F10: d7850090  adrp x23, #0x767c000
0x065C4F14: f68900f0  adrp x22, #0x7703000
0x065C4F18: 5a6f46f9  ldr x26, [x26, #0xcd8]
0x065C4F1C: f73240f9  ldr x23, [x23, #0x60]
0x065C4F20: d68e41f9  ldr x22, [x22, #0x318]
0x065C4F24: f40300aa  mov x20, x0
0x065C4F28: e00308aa  mov x0, x8
0x065C4F2C: 8e9c9897  bl #0x4bec164
0x065C4F30: a80240f9  ldr x8, [x21]
0x065C4F34: 020340f9  ldr x2, [x24]
0x065C4F38: e30300aa  mov x3, x0
0x065C4F3C: e10314aa  mov x1, x20
0x065C4F40: e00308aa  mov x0, x8
0x065C4F44: e4031faa  mov x4, xzr
0x065C4F48: e1cabc97  bl #0x54f7acc
0x065C4F4C: 280340f9  ldr x8, [x25]
0x065C4F50: f40300aa  mov x20, x0
0x065C4F54: 09008092  movn x9, #0
0x065C4F58: 4a068052  movz w10, #0x32
0x065C4F5C: e0230091  add x0, sp, #8
0x065C4F60: e1031faa  mov x1, xzr
0x065C4F64: e8a700a9  stp x8, x9, [sp, #8]
0x065C4F68: ea1b00b9  str w10, [sp, #0x18]
0x065C4F6C: de21c497  bl #0x56cd6e4
0x065C4F70: 480340f9  ldr x8, [x26]
0x065C4F74: f50300aa  mov x21, x0
0x065C4F78: 09e140b9  ldr w9, [x8, #0xe0]
0x065C4F7C: 69000035  cbnz w9, #0x65c4f88
0x065C4F80: e00308aa  mov x0, x8
0x065C4F84: 02ef2e97  bl #0x3180b8c
0x065C4F88: e30240f9  ldr x3, [x23]
0x065C4F8C: c40240f9  ldr x4, [x22]
0x065C4F90: d68500b0  adrp x22, #0x767d000
0x065C4F94: d62e45f9  ldr x22, [x22, #0xa58]
0x065C4F98: e00314aa  mov x0, x20
0x065C4F9C: e10315aa  mov x1, x21
0x065C4FA0: e2031faa  mov x2, xzr
0x065C4FA4: e5031faa  mov x5, xzr
0x065C4FA8: e6031faa  mov x6, xzr
0x065C4FAC: 229dba97  bl #0x546c434
0x065C4FB0: f50313aa  mov x21, x19
0x065C4FB4: b48e42f8  ldr x20, [x21, #0x28]!
0x065C4FB8: 140200b5  cbnz x20, #0x65c4ff8
0x065C4FBC: 688500b0  adrp x8, #0x7671000
0x065C4FC0: 088543f9  ldr x8, [x8, #0x708]
0x065C4FC4: 000140f9  ldr x0, [x8]
0x065C4FC8: 36ef2e97  bl #0x3180ca0
0x065C4FCC: e88900f0  adrp x8, #0x7703000
0x065C4FD0: 088941f9  ldr x8, [x8, #0x310]
0x065C4FD4: e10313aa  mov x1, x19
0x065C4FD8: e3031faa  mov x3, xzr
0x065C4FDC: f40300aa  mov x20, x0
0x065C4FE0: 020140f9  ldr x2, [x8]
0x065C4FE4: 20950b94  bl #0x68aa464
0x065C4FE8: e00315aa  mov x0, x21
0x065C4FEC: e10314aa  mov x1, x20
0x065C4FF0: 741600f9  str x20, [x19, #0x28]
0x065C4FF4: 74ee2e97  bl #0x31809c4
0x065C4FF8: c00240f9  ldr x0, [x22]
0x065C4FFC: 08e040b9  ldr w8, [x0, #0xe0]
0x065C5000: 48000035  cbnz w8, #0x65c5008
0x065C5004: e2ee2e97  bl #0x3180b8c
0x065C5008: 00102e1e  fmov s0, #1.00000000
0x065C500C: 21008052  movz w1, #0x1
0x065C5010: e00314aa  mov x0, x20
0x065C5014: e2031faa  mov x2, xzr
0x065C5018: 4a950b94  bl #0x68aa540
0x065C501C: f44f46a9  ldp x20, x19, [sp, #0x60]
0x065C5020: f65745a9  ldp x22, x21, [sp, #0x50]
0x065C5024: f85f44a9  ldp x24, x23, [sp, #0x40]
0x065C5028: fa6743a9  ldp x26, x25, [sp, #0x30]
0x065C502C: fe1340f9  ldr x30, [sp, #0x20]
0x065C5030: ffc30191  add sp, sp, #0x70
0x065C5034: c0035fd6  ret
0x065C5038: 1def2e97  bl #0x3180cac

; RVA 0x65C503C | internal bool <CheckBoosterDeactivatedRemote>b__1(RemoteBoosterData b) { }
; bytes=108 sha256=13693720c739b6aac7751737387e524e31ea7278d4d4d54636afff529935fbeb status=arm64_complete_bound indexed_start=True
0x065C503C: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x065C5040: f44f01a9  stp x20, x19, [sp, #0x10]
0x065C5044: 15bb00d0  adrp x21, #0x7d27000
0x065C5048: a8066539  ldrb w8, [x21, #0x941]
0x065C504C: f30301aa  mov x19, x1
0x065C5050: f40300aa  mov x20, x0
0x065C5054: c8000037  tbnz w8, #0, #0x65c506c
0x065C5058: c08500d0  adrp x0, #0x767f000
0x065C505C: 00e843f9  ldr x0, [x0, #0x7d0]
0x065C5060: 6eee2e97  bl #0x3180a18
0x065C5064: 28008052  movz w8, #0x1
0x065C5068: a8062539  strb w8, [x21, #0x941]
0x065C506C: d30100b4  cbz x19, #0x65c50a4
0x065C5070: 800a40f9  ldr x0, [x20, #0x10]
0x065C5074: 800100b4  cbz x0, #0x65c50a4
0x065C5078: c88500d0  adrp x8, #0x767f000
0x065C507C: 08e943f9  ldr x8, [x8, #0x7d0]
0x065C5080: 731a40f9  ldr x19, [x19, #0x30]
0x065C5084: 010140f9  ldr x1, [x8]
0x065C5088: 379c9897  bl #0x4bec164
0x065C508C: e10300aa  mov x1, x0
0x065C5090: e00313aa  mov x0, x19
0x065C5094: f44f41a9  ldp x20, x19, [sp, #0x10]
0x065C5098: e2031faa  mov x2, xzr
0x065C509C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x065C50A0: f495bc17  b #0x54ea870
0x065C50A4: 02ef2e97  bl #0x3180cac

; RVA 0x65C50A8 | internal void <CheckBoosterDeactivatedRemote>b__2() { }
; bytes=32 sha256=e1d656a41f18cf7686673d9b5d0c6e3ec4bea471478f41ba17de617e6ae49957 status=arm64_complete_bound indexed_start=True
0x065C50A8: fe0f1ff8  str x30, [sp, #-0x10]!
0x065C50AC: 080c40f9  ldr x8, [x0, #0x18]
0x065C50B0: a80000b4  cbz x8, #0x65c50c4
0x065C50B4: 010840f9  ldr x1, [x0, #0x10]
0x065C50B8: e00308aa  mov x0, x8
0x065C50BC: fe0741f8  ldr x30, [sp], #0x10
0x065C50C0: c7faff17  b #0x65c3bdc
0x065C50C4: faee2e97  bl #0x3180cac

