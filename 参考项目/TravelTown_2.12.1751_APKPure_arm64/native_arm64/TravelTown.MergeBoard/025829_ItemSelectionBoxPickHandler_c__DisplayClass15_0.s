; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25829 .ItemSelectionBoxPickHandler.<>c__DisplayClass15_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A82820 | public void .ctor() { }
; bytes=8 sha256=a8e2143f7eee258a92b75c7dc2875887b6628aab0aa0182dadff291937acbd97 status=arm64_complete_bound indexed_start=True
0x06A82820: e1031faa  mov x1, xzr
0x06A82824: 765fb117  b #0x56da5fc

; RVA 0x6A82C04 | internal void <GenerateContent>b__0(GenerateISBResponse r) { }
; bytes=1008 sha256=b38952ab04e96fe8473a08e17acb39cb252dcd91ba17f1d88640d109ff5925ad status=arm64_complete_bound indexed_start=True
0x06A82C04: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x06A82C08: fc6f01a9  stp x28, x27, [sp, #0x10]
0x06A82C0C: fa6702a9  stp x26, x25, [sp, #0x20]
0x06A82C10: f85f03a9  stp x24, x23, [sp, #0x30]
0x06A82C14: f65704a9  stp x22, x21, [sp, #0x40]
0x06A82C18: f44f05a9  stp x20, x19, [sp, #0x50]
0x06A82C1C: 54950090  adrp x20, #0x7d2a000
0x06A82C20: 88ba5d39  ldrb w8, [x20, #0x76e]
0x06A82C24: f50301aa  mov x21, x1
0x06A82C28: f30300aa  mov x19, x0
0x06A82C2C: 88040037  tbnz w8, #0, #0x6a82cbc
0x06A82C30: e05f0090  adrp x0, #0x767e000
0x06A82C34: 00a442f9  ldr x0, [x0, #0x548]
0x06A82C38: 78f71b97  bl #0x3180a18
0x06A82C3C: c05f0090  adrp x0, #0x767a000
0x06A82C40: 004c42f9  ldr x0, [x0, #0x498]
0x06A82C44: 75f71b97  bl #0x3180a18
0x06A82C48: 806300b0  adrp x0, #0x76f3000
0x06A82C4C: 00b044f9  ldr x0, [x0, #0x960]
0x06A82C50: 72f71b97  bl #0x3180a18
0x06A82C54: 806300b0  adrp x0, #0x76f3000
0x06A82C58: 00b444f9  ldr x0, [x0, #0x968]
0x06A82C5C: 6ff71b97  bl #0x3180a18
0x06A82C60: c06200b0  adrp x0, #0x76db000
0x06A82C64: 002842f9  ldr x0, [x0, #0x450]
0x06A82C68: 6cf71b97  bl #0x3180a18
0x06A82C6C: 206300b0  adrp x0, #0x76e7000
0x06A82C70: 003c42f9  ldr x0, [x0, #0x478]
0x06A82C74: 69f71b97  bl #0x3180a18
0x06A82C78: 806300b0  adrp x0, #0x76f3000
0x06A82C7C: 00b844f9  ldr x0, [x0, #0x970]
0x06A82C80: 66f71b97  bl #0x3180a18
0x06A82C84: e05f0090  adrp x0, #0x767e000
0x06A82C88: 008442f9  ldr x0, [x0, #0x508]
0x06A82C8C: 63f71b97  bl #0x3180a18
0x06A82C90: 806300b0  adrp x0, #0x76f3000
0x06A82C94: 00bc44f9  ldr x0, [x0, #0x978]
0x06A82C98: 60f71b97  bl #0x3180a18
0x06A82C9C: 606200b0  adrp x0, #0x76cf000
0x06A82CA0: 006842f9  ldr x0, [x0, #0x4d0]
0x06A82CA4: 5df71b97  bl #0x3180a18
0x06A82CA8: e05f0090  adrp x0, #0x767e000
0x06A82CAC: 007842f9  ldr x0, [x0, #0x4f0]
0x06A82CB0: 5af71b97  bl #0x3180a18
0x06A82CB4: 28008052  movz w8, #0x1
0x06A82CB8: 88ba1d39  strb w8, [x20, #0x76e]
0x06A82CBC: 951900b4  cbz x21, #0x6a82fec
0x06A82CC0: b41640f9  ldr x20, [x21, #0x28]
0x06A82CC4: 541900b4  cbz x20, #0x6a82fec
0x06A82CC8: 686200b0  adrp x8, #0x76cf000
0x06A82CCC: 086942f9  ldr x8, [x8, #0x4d0]
0x06A82CD0: 366300b0  adrp x22, #0x76e7000
0x06A82CD4: 000140f9  ldr x0, [x8]
0x06A82CD8: d63e42f9  ldr x22, [x22, #0x478]
0x06A82CDC: f1f71b97  bl #0x3180ca0
0x06A82CE0: 811a40b9  ldr w1, [x20, #0x18]
0x06A82CE4: c20240f9  ldr x2, [x22]
0x06A82CE8: f40300aa  mov x20, x0
0x06A82CEC: ef035797  bl #0x4043ca8
0x06A82CF0: f41700b4  cbz x20, #0x6a82fec
0x06A82CF4: 886300b0  adrp x8, #0x76f3000
0x06A82CF8: 08bd44f9  ldr x8, [x8, #0x978]
0x06A82CFC: 976300b0  adrp x23, #0x76f3000
0x06A82D00: 760a40f9  ldr x22, [x19, #0x10]
0x06A82D04: 981a40b9  ldr w24, [x20, #0x18]
0x06A82D08: 000140f9  ldr x0, [x8]
0x06A82D0C: f7ba44f9  ldr x23, [x23, #0x970]
0x06A82D10: e4f71b97  bl #0x3180ca0
0x06A82D14: e20240f9  ldr x2, [x23]
0x06A82D18: e103182a  mov w1, w24
0x06A82D1C: f70300aa  mov x23, x0
0x06A82D20: e2035797  bl #0x4043ca8
0x06A82D24: 561600b4  cbz x22, #0x6a82fec
0x06A82D28: d70e01f8  str x23, [x22, #0x10]!
0x06A82D2C: e00316aa  mov x0, x22
0x06A82D30: e10317aa  mov x1, x23
0x06A82D34: 24f71b97  bl #0x31809c4
0x06A82D38: b91640f9  ldr x25, [x21, #0x28]
0x06A82D3C: 991500b4  cbz x25, #0x6a82fec
0x06A82D40: 280f40f9  ldr x8, [x25, #0x18]
0x06A82D44: 1f050071  cmp w8, #1
0x06A82D48: 4b0e0054  b.lt #0x6a82f10
0x06A82D4C: 9d6300b0  adrp x29, #0x76f3000
0x06A82D50: fb5f0090  adrp x27, #0x767e000
0x06A82D54: 9c6300b0  adrp x28, #0x76f3000
0x06A82D58: bdb344f9  ldr x29, [x29, #0x960]
0x06A82D5C: 7b7b42f9  ldr x27, [x27, #0x4f0]
0x06A82D60: 9cb744f9  ldr x28, [x28, #0x968]
0x06A82D64: fa031faa  mov x26, xzr
0x06A82D68: 087d4092  and x8, x8, #0xffffffff
0x06A82D6C: 5f4328eb  cmp x26, w8, uxtw
0x06A82D70: 02140054  b.hs #0x6a82ff0
0x06A82D74: 680e40f9  ldr x8, [x19, #0x18]
0x06A82D78: a81300b4  cbz x8, #0x6a82fec
0x06A82D7C: 161540f9  ldr x22, [x8, #0x28]
0x06A82D80: 761300b4  cbz x22, #0x6a82fec
0x06A82D84: c80240f9  ldr x8, [x22]
0x06A82D88: 290f1a8b  add x9, x25, x26, lsl #3
0x06A82D8C: ca5f0090  adrp x10, #0x767a000
0x06A82D90: 351140f9  ldr x21, [x9, #0x20]
0x06A82D94: 095d4279  ldrh w9, [x8, #0x12e]
0x06A82D98: 4a4d42f9  ldr x10, [x10, #0x498]
0x06A82D9C: 410140f9  ldr x1, [x10]
0x06A82DA0: 290100b4  cbz x9, #0x6a82dc4
0x06A82DA4: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A82DA8: 4a210091  add x10, x10, #8
0x06A82DAC: 4b815ff8  ldur x11, [x10, #-8]
0x06A82DB0: 7f0101eb  cmp x11, x1
0x06A82DB4: 00010054  b.eq #0x6a82dd4
0x06A82DB8: 290500f1  subs x9, x9, #1
0x06A82DBC: 4a410091  add x10, x10, #0x10
0x06A82DC0: 61ffff54  b.ne #0x6a82dac
0x06A82DC4: 22018052  movz w2, #0x9
0x06A82DC8: e00316aa  mov x0, x22
0x06A82DCC: 514f1b97  bl #0x3156b10
0x06A82DD0: 05000014  b #0x6a82de4
0x06A82DD4: 490140b9  ldr w9, [x10]
0x06A82DD8: 29250011  add w9, w9, #9
0x06A82DDC: 08d1298b  add x8, x8, w9, sxtw #4
0x06A82DE0: 00e10491  add x0, x8, #0x138
0x06A82DE4: 080840a9  ldp x8, x2, [x0]
0x06A82DE8: e00316aa  mov x0, x22
0x06A82DEC: e10315aa  mov x1, x21
0x06A82DF0: 00013fd6  blr x8
0x06A82DF4: c96200b0  adrp x9, #0x76db000
0x06A82DF8: 8a1e40b9  ldr w10, [x20, #0x1c]
0x06A82DFC: 880a40f9  ldr x8, [x20, #0x10]
0x06A82E00: 292942f9  ldr x9, [x9, #0x450]
0x06A82E04: 4a050011  add w10, w10, #1
0x06A82E08: 290140f9  ldr x9, [x9]
0x06A82E0C: 8a1e00b9  str w10, [x20, #0x1c]
0x06A82E10: e80e00b4  cbz x8, #0x6a82fec
0x06A82E14: 8a1a80b9  ldrsw x10, [x20, #0x18]
0x06A82E18: 0b1940b9  ldr w11, [x8, #0x18]
0x06A82E1C: e10300aa  mov x1, x0
0x06A82E20: 5f010b6b  cmp w10, w11
0x06A82E24: e2000054  b.hs #0x6a82e40
0x06A82E28: 49050011  add w9, w10, #1
0x06A82E2C: 000d0a8b  add x0, x8, x10, lsl #3
0x06A82E30: 891a00b9  str w9, [x20, #0x18]
0x06A82E34: 010c02f8  str x1, [x0, #0x20]!
0x06A82E38: e3f61b97  bl #0x31809c4
0x06A82E3C: 06000014  b #0x6a82e54
0x06A82E40: 281140f9  ldr x8, [x9, #0x20]
0x06A82E44: e00314aa  mov x0, x20
0x06A82E48: 086140f9  ldr x8, [x8, #0xc0]
0x06A82E4C: 023940f9  ldr x2, [x8, #0x70]
0x06A82E50: 87055797  bl #0x404446c
0x06A82E54: 680a40f9  ldr x8, [x19, #0x10]
0x06A82E58: a80c00b4  cbz x8, #0x6a82fec
0x06A82E5C: a00340f9  ldr x0, [x29]
0x06A82E60: 160940f9  ldr x22, [x8, #0x10]
0x06A82E64: 8ff71b97  bl #0x3180ca0
0x06A82E68: e1031faa  mov x1, xzr
0x06A82E6C: f70300aa  mov x23, x0
0x06A82E70: f2e6ef97  bl #0x667ca38
0x06A82E74: 600340f9  ldr x0, [x27]
0x06A82E78: 8af71b97  bl #0x3180ca0
0x06A82E7C: e10315aa  mov x1, x21
0x06A82E80: e2031faa  mov x2, xzr
0x06A82E84: f80300aa  mov x24, x0
0x06A82E88: 2406d697  bl #0x6004718
0x06A82E8C: 170b00b4  cbz x23, #0x6a82fec
0x06A82E90: e00317aa  mov x0, x23
0x06A82E94: 180c01f8  str x24, [x0, #0x10]!
0x06A82E98: e10318aa  mov x1, x24
0x06A82E9C: caf61b97  bl #0x31809c4
0x06A82EA0: 760a00b4  cbz x22, #0x6a82fec
0x06A82EA4: ca1e40b9  ldr w10, [x22, #0x1c]
0x06A82EA8: c80a40f9  ldr x8, [x22, #0x10]
0x06A82EAC: 890340f9  ldr x9, [x28]
0x06A82EB0: 4a050011  add w10, w10, #1
0x06A82EB4: ca1e00b9  str w10, [x22, #0x1c]
0x06A82EB8: a80900b4  cbz x8, #0x6a82fec
0x06A82EBC: ca1a80b9  ldrsw x10, [x22, #0x18]
0x06A82EC0: 0b1940b9  ldr w11, [x8, #0x18]
0x06A82EC4: 5f010b6b  cmp w10, w11
0x06A82EC8: 02010054  b.hs #0x6a82ee8
0x06A82ECC: 49050011  add w9, w10, #1
0x06A82ED0: 000d0a8b  add x0, x8, x10, lsl #3
0x06A82ED4: c91a00b9  str w9, [x22, #0x18]
0x06A82ED8: 170c02f8  str x23, [x0, #0x20]!
0x06A82EDC: e10317aa  mov x1, x23
0x06A82EE0: b9f61b97  bl #0x31809c4
0x06A82EE4: 07000014  b #0x6a82f00
0x06A82EE8: 281140f9  ldr x8, [x9, #0x20]
0x06A82EEC: e00316aa  mov x0, x22
0x06A82EF0: e10317aa  mov x1, x23
0x06A82EF4: 086140f9  ldr x8, [x8, #0xc0]
0x06A82EF8: 023940f9  ldr x2, [x8, #0x70]
0x06A82EFC: 5c055797  bl #0x404446c
0x06A82F00: 281b40b9  ldr w8, [x25, #0x18]
0x06A82F04: 5a070091  add x26, x26, #1
0x06A82F08: 5fc328eb  cmp x26, w8, sxtw
0x06A82F0C: 0bf3ff54  b.lt #0x6a82d6c
0x06A82F10: 680e40f9  ldr x8, [x19, #0x18]
0x06A82F14: c80600b4  cbz x8, #0x6a82fec
0x06A82F18: 001940f9  ldr x0, [x8, #0x30]
0x06A82F1C: 800600b4  cbz x0, #0x6a82fec
0x06A82F20: 611240f9  ldr x1, [x19, #0x20]
0x06A82F24: e20314aa  mov x2, x20
0x06A82F28: e3031faa  mov x3, xzr
0x06A82F2C: 678fe597  bl #0x63e6cc8
0x06A82F30: 741640f9  ldr x20, [x19, #0x28]
0x06A82F34: d40500b4  cbz x20, #0x6a82fec
0x06A82F38: ea5f0090  adrp x10, #0x767e000
0x06A82F3C: 880240f9  ldr x8, [x20]
0x06A82F40: 4aa542f9  ldr x10, [x10, #0x548]
0x06A82F44: 095d4279  ldrh w9, [x8, #0x12e]
0x06A82F48: 410140f9  ldr x1, [x10]
0x06A82F4C: 290100b4  cbz x9, #0x6a82f70
0x06A82F50: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A82F54: 4a210091  add x10, x10, #8
0x06A82F58: 4b815ff8  ldur x11, [x10, #-8]
0x06A82F5C: 7f0101eb  cmp x11, x1
0x06A82F60: 00010054  b.eq #0x6a82f80
0x06A82F64: 290500f1  subs x9, x9, #1
0x06A82F68: 4a410091  add x10, x10, #0x10
0x06A82F6C: 61ffff54  b.ne #0x6a82f58
0x06A82F70: c2038052  movz w2, #0x1e
0x06A82F74: e00314aa  mov x0, x20
0x06A82F78: e64e1b97  bl #0x3156b10
0x06A82F7C: 05000014  b #0x6a82f90
0x06A82F80: 490140b9  ldr w9, [x10]
0x06A82F84: 29790011  add w9, w9, #0x1e
0x06A82F88: 08d1298b  add x8, x8, w9, sxtw #4
0x06A82F8C: 00e10491  add x0, x8, #0x138
0x06A82F90: 080440a9  ldp x8, x1, [x0]
0x06A82F94: e00314aa  mov x0, x20
0x06A82F98: 00013fd6  blr x8
0x06A82F9C: 800200b4  cbz x0, #0x6a82fec
0x06A82FA0: 141440f9  ldr x20, [x0, #0x28]
0x06A82FA4: 600a40f9  ldr x0, [x19, #0x10]
0x06A82FA8: e1031faa  mov x1, xzr
0x06A82FAC: f034b597  bl #0x57d036c
0x06A82FB0: f40100b4  cbz x20, #0x6a82fec
0x06A82FB4: 808e01f8  str x0, [x20, #0x18]!
0x06A82FB8: e10300aa  mov x1, x0
0x06A82FBC: e00314aa  mov x0, x20
0x06A82FC0: 81f61b97  bl #0x31809c4
0x06A82FC4: 600e40f9  ldr x0, [x19, #0x18]
0x06A82FC8: 200100b4  cbz x0, #0x6a82fec
0x06A82FCC: 611a40f9  ldr x1, [x19, #0x30]
0x06A82FD0: f44f45a9  ldp x20, x19, [sp, #0x50]
0x06A82FD4: f65744a9  ldp x22, x21, [sp, #0x40]
0x06A82FD8: f85f43a9  ldp x24, x23, [sp, #0x30]
0x06A82FDC: fa6742a9  ldp x26, x25, [sp, #0x20]
0x06A82FE0: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x06A82FE4: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x06A82FE8: 10feff17  b #0x6a82828
0x06A82FEC: 30f71b97  bl #0x3180cac
0x06A82FF0: 31f71b97  bl #0x3180cb4

; RVA 0x6A82FF4 | internal void <GenerateContent>b__1(Exception ex) { }
; bytes=616 sha256=3f37d28c3b15fee727f77ae8bb69f652495e070cd72ff868cf5126f6ae32de1d status=arm64_complete_bound indexed_start=True
0x06A82FF4: ff8301d1  sub sp, sp, #0x60
0x06A82FF8: fe1300f9  str x30, [sp, #0x20]
0x06A82FFC: f85f03a9  stp x24, x23, [sp, #0x30]
0x06A83000: f65704a9  stp x22, x21, [sp, #0x40]
0x06A83004: f44f05a9  stp x20, x19, [sp, #0x50]
0x06A83008: 349500f0  adrp x20, #0x7d2a000
0x06A8300C: 565e00f0  adrp x22, #0x764e000
0x06A83010: 88be5d39  ldrb w8, [x20, #0x76f]
0x06A83014: d65e43f9  ldr x22, [x22, #0x6b8]
0x06A83018: f30301aa  mov x19, x1
0x06A8301C: f50300aa  mov x21, x0
0x06A83020: c8030037  tbnz w8, #0, #0x6a83098
0x06A83024: 405f00d0  adrp x0, #0x766d000
0x06A83028: 006c46f9  ldr x0, [x0, #0xcd8]
0x06A8302C: 7bf61b97  bl #0x3180a18
0x06A83030: a05f00d0  adrp x0, #0x7679000
0x06A83034: 007844f9  ldr x0, [x0, #0x8f0]
0x06A83038: 78f61b97  bl #0x3180a18
0x06A8303C: 405e00f0  adrp x0, #0x764e000
0x06A83040: 005c43f9  ldr x0, [x0, #0x6b8]
0x06A83044: 75f61b97  bl #0x3180a18
0x06A83048: 80630090  adrp x0, #0x76f3000
0x06A8304C: 00c444f9  ldr x0, [x0, #0x988]
0x06A83050: 72f61b97  bl #0x3180a18
0x06A83054: 405e00f0  adrp x0, #0x764e000
0x06A83058: 004c43f9  ldr x0, [x0, #0x698]
0x06A8305C: 6ff61b97  bl #0x3180a18
0x06A83060: 80630090  adrp x0, #0x76f3000
0x06A83064: 00c844f9  ldr x0, [x0, #0x990]
0x06A83068: 6cf61b97  bl #0x3180a18
0x06A8306C: 80630090  adrp x0, #0x76f3000
0x06A83070: 00cc44f9  ldr x0, [x0, #0x998]
0x06A83074: 69f61b97  bl #0x3180a18
0x06A83078: 80630090  adrp x0, #0x76f3000
0x06A8307C: 00d044f9  ldr x0, [x0, #0x9a0]
0x06A83080: 66f61b97  bl #0x3180a18
0x06A83084: 606500d0  adrp x0, #0x7731000
0x06A83088: 00a445f9  ldr x0, [x0, #0xb48]
0x06A8308C: 63f61b97  bl #0x3180a18
0x06A83090: 28008052  movz w8, #0x1
0x06A83094: 88be1d39  strb w8, [x20, #0x76f]
0x06A83098: c00240f9  ldr x0, [x22]
0x06A8309C: e1008052  movz w1, #0x7
0x06A830A0: 97f61b97  bl #0x3180afc
0x06A830A4: a00d00b4  cbz x0, #0x6a83258
0x06A830A8: 081840b9  ldr w8, [x0, #0x18]
0x06A830AC: f40300aa  mov x20, x0
0x06A830B0: 280d0034  cbz w8, #0x6a83254
0x06A830B4: 88630090  adrp x8, #0x76f3000
0x06A830B8: 08d144f9  ldr x8, [x8, #0x9a0]
0x06A830BC: f60314aa  mov x22, x20
0x06A830C0: 010140f9  ldr x1, [x8]
0x06A830C4: c10e02f8  str x1, [x22, #0x20]!
0x06A830C8: e00316aa  mov x0, x22
0x06A830CC: 3ef61b97  bl #0x31809c4
0x06A830D0: c8825fb8  ldur w8, [x22, #-8]
0x06A830D4: 1f050071  cmp w8, #1
0x06A830D8: e90b0054  b.ls #0x6a83254
0x06A830DC: a11e40f9  ldr x1, [x21, #0x38]
0x06A830E0: f60314aa  mov x22, x20
0x06A830E4: c18e02f8  str x1, [x22, #0x28]!
0x06A830E8: e00316aa  mov x0, x22
0x06A830EC: 36f61b97  bl #0x31809c4
0x06A830F0: c8025fb8  ldur w8, [x22, #-0x10]
0x06A830F4: 1f090071  cmp w8, #2
0x06A830F8: e90a0054  b.ls #0x6a83254
0x06A830FC: 88630090  adrp x8, #0x76f3000
0x06A83100: 08cd44f9  ldr x8, [x8, #0x998]
0x06A83104: f60314aa  mov x22, x20
0x06A83108: 010140f9  ldr x1, [x8]
0x06A8310C: c10e03f8  str x1, [x22, #0x30]!
0x06A83110: e00316aa  mov x0, x22
0x06A83114: 2cf61b97  bl #0x31809c4
0x06A83118: c8825eb8  ldur w8, [x22, #-0x18]
0x06A8311C: 1f0d0071  cmp w8, #3
0x06A83120: a9090054  b.ls #0x6a83254
0x06A83124: a11240f9  ldr x1, [x21, #0x20]
0x06A83128: f50314aa  mov x21, x20
0x06A8312C: a18e03f8  str x1, [x21, #0x38]!
0x06A83130: e00315aa  mov x0, x21
0x06A83134: 24f61b97  bl #0x31809c4
0x06A83138: a8025eb8  ldur w8, [x21, #-0x20]
0x06A8313C: 1f110071  cmp w8, #4
0x06A83140: a9080054  b.ls #0x6a83254
0x06A83144: 88630090  adrp x8, #0x76f3000
0x06A83148: 08c944f9  ldr x8, [x8, #0x990]
0x06A8314C: e00314aa  mov x0, x20
0x06A83150: 010140f9  ldr x1, [x8]
0x06A83154: 010c04f8  str x1, [x0, #0x40]!
0x06A83158: 1bf61b97  bl #0x31809c4
0x06A8315C: f30700b4  cbz x19, #0x6a83258
0x06A83160: 680240f9  ldr x8, [x19]
0x06A83164: e00313aa  mov x0, x19
0x06A83168: 098558a9  ldp x9, x1, [x8, #0x188]
0x06A8316C: 20013fd6  blr x9
0x06A83170: 881a40b9  ldr w8, [x20, #0x18]
0x06A83174: 1f150071  cmp w8, #5
0x06A83178: e9060054  b.ls #0x6a83254
0x06A8317C: f30314aa  mov x19, x20
0x06A83180: 608e04f8  str x0, [x19, #0x48]!
0x06A83184: e10300aa  mov x1, x0
0x06A83188: e00313aa  mov x0, x19
0x06A8318C: 0ef61b97  bl #0x31809c4
0x06A83190: 68025db8  ldur w8, [x19, #-0x30]
0x06A83194: 1f190071  cmp w8, #6
0x06A83198: e9050054  b.ls #0x6a83254
0x06A8319C: 485e00f0  adrp x8, #0x764e000
0x06A831A0: 084d43f9  ldr x8, [x8, #0x698]
0x06A831A4: b75f00d0  adrp x23, #0x7679000
0x06A831A8: f77a44f9  ldr x23, [x23, #0x8f0]
0x06A831AC: 585f00d0  adrp x24, #0x766d000
0x06A831B0: 010140f9  ldr x1, [x8]
0x06A831B4: 766500d0  adrp x22, #0x7731000
0x06A831B8: 95630090  adrp x21, #0x76f3000
0x06A831BC: 186f46f9  ldr x24, [x24, #0xcd8]
0x06A831C0: d6a645f9  ldr x22, [x22, #0xb48]
0x06A831C4: b5c644f9  ldr x21, [x21, #0x988]
0x06A831C8: e00314aa  mov x0, x20
0x06A831CC: 010c05f8  str x1, [x0, #0x50]!
0x06A831D0: fdf51b97  bl #0x31809c4
0x06A831D4: e00314aa  mov x0, x20
0x06A831D8: e1031faa  mov x1, xzr
0x06A831DC: 7ed2a997  bl #0x54f7bd4
0x06A831E0: e80240f9  ldr x8, [x23]
0x06A831E4: f30300aa  mov x19, x0
0x06A831E8: 09008092  movn x9, #0
0x06A831EC: ca0d8052  movz w10, #0x6e
0x06A831F0: e0230091  add x0, sp, #8
0x06A831F4: e1031faa  mov x1, xzr
0x06A831F8: e8a700a9  stp x8, x9, [sp, #8]
0x06A831FC: ea1b00b9  str w10, [sp, #0x18]
0x06A83200: 3929b197  bl #0x56cd6e4
0x06A83204: 080340f9  ldr x8, [x24]
0x06A83208: f40300aa  mov x20, x0
0x06A8320C: 09e140b9  ldr w9, [x8, #0xe0]
0x06A83210: 69000035  cbnz w9, #0x6a8321c
0x06A83214: e00308aa  mov x0, x8
0x06A83218: 5df61b97  bl #0x3180b8c
0x06A8321C: c30240f9  ldr x3, [x22]
0x06A83220: a40240f9  ldr x4, [x21]
0x06A83224: e00313aa  mov x0, x19
0x06A83228: e10314aa  mov x1, x20
0x06A8322C: e2031faa  mov x2, xzr
0x06A83230: e5031faa  mov x5, xzr
0x06A83234: e6031faa  mov x6, xzr
0x06A83238: 7fa4a797  bl #0x546c434
0x06A8323C: f44f45a9  ldp x20, x19, [sp, #0x50]
0x06A83240: f65744a9  ldp x22, x21, [sp, #0x40]
0x06A83244: f85f43a9  ldp x24, x23, [sp, #0x30]
0x06A83248: fe1340f9  ldr x30, [sp, #0x20]
0x06A8324C: ff830191  add sp, sp, #0x60
0x06A83250: c0035fd6  ret
0x06A83254: 98f61b97  bl #0x3180cb4
0x06A83258: 95f61b97  bl #0x3180cac

; RVA 0x6A8325C | internal void <GenerateContent>b__2() { }
; bytes=48 sha256=d1e92ed01e34eb5146bc7d37e485efbacdb695de2e60b91949d574a98956ff15 status=arm64_complete_bound indexed_start=True
0x06A8325C: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A83260: 080c40f9  ldr x8, [x0, #0x18]
0x06A83264: 280100b4  cbz x8, #0x6a83288
0x06A83268: 081940f9  ldr x8, [x8, #0x30]
0x06A8326C: e80000b4  cbz x8, #0x6a83288
0x06A83270: 011040f9  ldr x1, [x0, #0x20]
0x06A83274: e00308aa  mov x0, x8
0x06A83278: e2031f2a  mov w2, wzr
0x06A8327C: e3031faa  mov x3, xzr
0x06A83280: fe0741f8  ldr x30, [sp], #0x10
0x06A83284: ec8be517  b #0x63e6234
0x06A83288: 89f61b97  bl #0x3180cac

