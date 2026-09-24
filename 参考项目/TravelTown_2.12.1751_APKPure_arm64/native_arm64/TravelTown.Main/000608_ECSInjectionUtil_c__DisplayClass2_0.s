; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 608 .ECSInjectionUtil.<>c__DisplayClass2_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x627171C | public void .ctor() { }
; bytes=8 sha256=8ca12f4425f03c1c081e189d27c1f514a6e8a58a27460d0435609e1a37fa4e0d status=arm64_complete_bound indexed_start=True
0x0627171C: e1031faa  mov x1, xzr
0x06271720: b7a3d117  b #0x56da5fc

; RVA 0x6271C50 | internal void <InjectComponents>b__1(FieldInfo field) { }
; bytes=564 sha256=707d3356bd3538e846a033e601fa9d1a2255c7ed11fb5b3180dd9e00d1636918 status=arm64_complete_bound indexed_start=True
0x06271C50: fe0f1cf8  str x30, [sp, #-0x40]!
0x06271C54: f85f01a9  stp x24, x23, [sp, #0x10]
0x06271C58: f65702a9  stp x22, x21, [sp, #0x20]
0x06271C5C: f44f03a9  stp x20, x19, [sp, #0x30]
0x06271C60: b5d50090  adrp x21, #0x7d25000
0x06271C64: a8ce5039  ldrb w8, [x21, #0x433]
0x06271C68: f30301aa  mov x19, x1
0x06271C6C: f40300aa  mov x20, x0
0x06271C70: 08030037  tbnz w8, #0, #0x6271cd0
0x06271C74: 60a000f0  adrp x0, #0x7680000
0x06271C78: 000446f9  ldr x0, [x0, #0xc08]
0x06271C7C: 673b3c97  bl #0x3180a18
0x06271C80: 60a000f0  adrp x0, #0x7680000
0x06271C84: 000846f9  ldr x0, [x0, #0xc10]
0x06271C88: 643b3c97  bl #0x3180a18
0x06271C8C: c0a200b0  adrp x0, #0x76ca000
0x06271C90: 007447f9  ldr x0, [x0, #0xee8]
0x06271C94: 613b3c97  bl #0x3180a18
0x06271C98: a0a300b0  adrp x0, #0x76e6000
0x06271C9C: 003843f9  ldr x0, [x0, #0x670]
0x06271CA0: 5e3b3c97  bl #0x3180a18
0x06271CA4: e09e00b0  adrp x0, #0x764e000
0x06271CA8: 004c47f9  ldr x0, [x0, #0xe98]
0x06271CAC: 5b3b3c97  bl #0x3180a18
0x06271CB0: e09e00b0  adrp x0, #0x764e000
0x06271CB4: 00ac42f9  ldr x0, [x0, #0x558]
0x06271CB8: 583b3c97  bl #0x3180a18
0x06271CBC: a0a300b0  adrp x0, #0x76e6000
0x06271CC0: 003c43f9  ldr x0, [x0, #0x678]
0x06271CC4: 553b3c97  bl #0x3180a18
0x06271CC8: 28008052  movz w8, #0x1
0x06271CCC: a8ce1039  strb w8, [x21, #0x433]
0x06271CD0: ff0700f9  str xzr, [sp, #8]
0x06271CD4: f30c00b4  cbz x19, #0x6271e70
0x06271CD8: 680240f9  ldr x8, [x19]
0x06271CDC: d8a200b0  adrp x24, #0x76ca000
0x06271CE0: e00313aa  mov x0, x19
0x06271CE4: 092541f9  ldr x9, [x8, #0x248]
0x06271CE8: 012941f9  ldr x1, [x8, #0x250]
0x06271CEC: 187747f9  ldr x24, [x24, #0xee8]
0x06271CF0: 20013fd6  blr x9
0x06271CF4: 080340f9  ldr x8, [x24]
0x06271CF8: f50300aa  mov x21, x0
0x06271CFC: 09e140b9  ldr w9, [x8, #0xe0]
0x06271D00: 89000035  cbnz w9, #0x6271d10
0x06271D04: e00308aa  mov x0, x8
0x06271D08: a13b3c97  bl #0x3180b8c
0x06271D0C: 080340f9  ldr x8, [x24]
0x06271D10: 085d40f9  ldr x8, [x8, #0xb8]
0x06271D14: 000140f9  ldr x0, [x8]
0x06271D18: c00a00b4  cbz x0, #0x6271e70
0x06271D1C: 68a000f0  adrp x8, #0x7680000
0x06271D20: 080946f9  ldr x8, [x8, #0xc10]
0x06271D24: e2230091  add x2, sp, #8
0x06271D28: e10315aa  mov x1, x21
0x06271D2C: 030140f9  ldr x3, [x8]
0x06271D30: e0cab197  bl #0x4ee48b0
0x06271D34: e0070037  tbnz w0, #0, #0x6271e30
0x06271D38: e89e00b0  adrp x8, #0x764e000
0x06271D3C: 08ad42f9  ldr x8, [x8, #0x558]
0x06271D40: 000140f9  ldr x0, [x8]
0x06271D44: a8a300b0  adrp x8, #0x76e6000
0x06271D48: 083943f9  ldr x8, [x8, #0x670]
0x06271D4C: 09e040b9  ldr w9, [x0, #0xe0]
0x06271D50: 160140f9  ldr x22, [x8]
0x06271D54: 49000035  cbnz w9, #0x6271d5c
0x06271D58: 8d3b3c97  bl #0x3180b8c
0x06271D5C: e00316aa  mov x0, x22
0x06271D60: e1031faa  mov x1, xzr
0x06271D64: 18cdd097  bl #0x56a51c4
0x06271D68: 400800b4  cbz x0, #0x6271e70
0x06271D6C: a8a300b0  adrp x8, #0x76e6000
0x06271D70: 083d43f9  ldr x8, [x8, #0x678]
0x06271D74: e2031faa  mov x2, xzr
0x06271D78: 010140f9  ldr x1, [x8]
0x06271D7C: e2fdd097  bl #0x56b1504
0x06271D80: e89e00b0  adrp x8, #0x764e000
0x06271D84: 084d47f9  ldr x8, [x8, #0xe98]
0x06271D88: f60300aa  mov x22, x0
0x06271D8C: 21008052  movz w1, #0x1
0x06271D90: 080140f9  ldr x8, [x8]
0x06271D94: e00308aa  mov x0, x8
0x06271D98: 593b3c97  bl #0x3180afc
0x06271D9C: a00600b4  cbz x0, #0x6271e70
0x06271DA0: f70300aa  mov x23, x0
0x06271DA4: d50000b4  cbz x21, #0x6271dbc
0x06271DA8: e80240f9  ldr x8, [x23]
0x06271DAC: e00315aa  mov x0, x21
0x06271DB0: 012140f9  ldr x1, [x8, #0x40]
0x06271DB4: 773b3c97  bl #0x3180b90
0x06271DB8: 000600b4  cbz x0, #0x6271e78
0x06271DBC: e81a40b9  ldr w8, [x23, #0x18]
0x06271DC0: a8050034  cbz w8, #0x6271e74
0x06271DC4: e00317aa  mov x0, x23
0x06271DC8: 150c02f8  str x21, [x0, #0x20]!
0x06271DCC: e10315aa  mov x1, x21
0x06271DD0: fd3a3c97  bl #0x31809c4
0x06271DD4: f60400b4  cbz x22, #0x6271e70
0x06271DD8: c80240f9  ldr x8, [x22]
0x06271DDC: e00316aa  mov x0, x22
0x06271DE0: e10317aa  mov x1, x23
0x06271DE4: 09f541f9  ldr x9, [x8, #0x3e8]
0x06271DE8: 02f941f9  ldr x2, [x8, #0x3f0]
0x06271DEC: 20013fd6  blr x9
0x06271DF0: 080340f9  ldr x8, [x24]
0x06271DF4: e00700f9  str x0, [sp, #8]
0x06271DF8: 09e140b9  ldr w9, [x8, #0xe0]
0x06271DFC: 89000035  cbnz w9, #0x6271e0c
0x06271E00: e00308aa  mov x0, x8
0x06271E04: 623b3c97  bl #0x3180b8c
0x06271E08: 080340f9  ldr x8, [x24]
0x06271E0C: 085d40f9  ldr x8, [x8, #0xb8]
0x06271E10: 000140f9  ldr x0, [x8]
0x06271E14: e00200b4  cbz x0, #0x6271e70
0x06271E18: 68a000f0  adrp x8, #0x7680000
0x06271E1C: e20740f9  ldr x2, [sp, #8]
0x06271E20: 080546f9  ldr x8, [x8, #0xc08]
0x06271E24: e10315aa  mov x1, x21
0x06271E28: 030140f9  ldr x3, [x8]
0x06271E2C: d4c3b197  bl #0x4ee2d7c
0x06271E30: e00740f9  ldr x0, [sp, #8]
0x06271E34: e00100b4  cbz x0, #0x6271e70
0x06271E38: 810a40f9  ldr x1, [x20, #0x10]
0x06271E3C: e2031faa  mov x2, xzr
0x06271E40: e3031faa  mov x3, xzr
0x06271E44: d732cd97  bl #0x55be9a0
0x06271E48: 810e40f9  ldr x1, [x20, #0x18]
0x06271E4C: e20300aa  mov x2, x0
0x06271E50: e00313aa  mov x0, x19
0x06271E54: e3031faa  mov x3, xzr
0x06271E58: 3634cd97  bl #0x55bef30
0x06271E5C: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06271E60: f65742a9  ldp x22, x21, [sp, #0x20]
0x06271E64: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06271E68: fe0744f8  ldr x30, [sp], #0x40
0x06271E6C: c0035fd6  ret
0x06271E70: 8f3b3c97  bl #0x3180cac
0x06271E74: 903b3c97  bl #0x3180cb4
0x06271E78: 963b3c97  bl #0x3180cd0
0x06271E7C: e1031faa  mov x1, xzr
0x06271E80: 3f3b3c97  bl #0x3180b7c

