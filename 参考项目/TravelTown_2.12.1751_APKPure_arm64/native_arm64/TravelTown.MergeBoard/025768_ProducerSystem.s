; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25768 Merger.MergeBoard.Systems.ProducerSystem
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A72C98 | public void Tick(TickContext context) { }
; bytes=72 sha256=5ff02b43e399d424405df880eff64e375af4a7d20b90ddbdb617e385287c8cff status=arm64_complete_bound indexed_start=True
0x06A72C98: ff8301d1  sub sp, sp, #0x60
0x06A72C9C: fe2300f9  str x30, [sp, #0x40]
0x06A72CA0: f44f05a9  stp x20, x19, [sp, #0x50]
0x06A72CA4: 210040ad  ldp q1, q0, [x1]
0x06A72CA8: f30301aa  mov x19, x1
0x06A72CAC: e1830091  add x1, sp, #0x20
0x06A72CB0: f40300aa  mov x20, x0
0x06A72CB4: e10301ad  stp q1, q0, [sp, #0x20]
0x06A72CB8: 0a000094  bl #0x6a72ce0
0x06A72CBC: 610240ad  ldp q1, q0, [x19]
0x06A72CC0: e1030091  mov x1, sp
0x06A72CC4: e00314aa  mov x0, x20
0x06A72CC8: e10300ad  stp q1, q0, [sp]
0x06A72CCC: 43010094  bl #0x6a731d8
0x06A72CD0: f44f45a9  ldp x20, x19, [sp, #0x50]
0x06A72CD4: fe2340f9  ldr x30, [sp, #0x40]
0x06A72CD8: ff830191  add sp, sp, #0x60
0x06A72CDC: c0035fd6  ret

; RVA 0x6A72CE0 | private void ProduceItemOnInteract(TickContext context) { }
; bytes=1272 sha256=0d9ebccc5e3d52eb6a94c0e47507495fdcd56ae0deb1f86a41c768a5ea8420e1 status=arm64_complete_bound indexed_start=True
0x06A72CE0: ff4307d1  sub sp, sp, #0x1d0
0x06A72CE4: fd7b18a9  stp x29, x30, [sp, #0x180]
0x06A72CE8: fa6719a9  stp x26, x25, [sp, #0x190]
0x06A72CEC: f85f1aa9  stp x24, x23, [sp, #0x1a0]
0x06A72CF0: f6571ba9  stp x22, x21, [sp, #0x1b0]
0x06A72CF4: f44f1ca9  stp x20, x19, [sp, #0x1c0]
0x06A72CF8: d7950090  adrp x23, #0x7d2a000
0x06A72CFC: f56500f0  adrp x21, #0x7731000
0x06A72D00: f66500f0  adrp x22, #0x7731000
0x06A72D04: f96500b0  adrp x25, #0x772f000
0x06A72D08: f86500b0  adrp x24, #0x772f000
0x06A72D0C: fa6500f0  adrp x26, #0x7731000
0x06A72D10: e8c65b39  ldrb w8, [x23, #0x6f1]
0x06A72D14: b5da41f9  ldr x21, [x21, #0x3b0]
0x06A72D18: d6de41f9  ldr x22, [x22, #0x3b8]
0x06A72D1C: 393747f9  ldr x25, [x25, #0xe68]
0x06A72D20: 182747f9  ldr x24, [x24, #0xe48]
0x06A72D24: 5ae341f9  ldr x26, [x26, #0x3c0]
0x06A72D28: f40301aa  mov x20, x1
0x06A72D2C: f30300aa  mov x19, x0
0x06A72D30: 48080037  tbnz w8, #0, #0x6a72e38
0x06A72D34: e06500d0  adrp x0, #0x7730000
0x06A72D38: 006046f9  ldr x0, [x0, #0xcc0]
0x06A72D3C: 37371c97  bl #0x3180a18
0x06A72D40: e06500b0  adrp x0, #0x772f000
0x06A72D44: 002447f9  ldr x0, [x0, #0xe48]
0x06A72D48: 34371c97  bl #0x3180a18
0x06A72D4C: e06500f0  adrp x0, #0x7731000
0x06A72D50: 00dc41f9  ldr x0, [x0, #0x3b8]
0x06A72D54: 31371c97  bl #0x3180a18
0x06A72D58: e06500b0  adrp x0, #0x772f000
0x06A72D5C: 002847f9  ldr x0, [x0, #0xe50]
0x06A72D60: 2e371c97  bl #0x3180a18
0x06A72D64: e06500d0  adrp x0, #0x7730000
0x06A72D68: 007445f9  ldr x0, [x0, #0xae8]
0x06A72D6C: 2b371c97  bl #0x3180a18
0x06A72D70: e06500b0  adrp x0, #0x772f000
0x06A72D74: 003047f9  ldr x0, [x0, #0xe60]
0x06A72D78: 28371c97  bl #0x3180a18
0x06A72D7C: 606200f0  adrp x0, #0x76c1000
0x06A72D80: 007c46f9  ldr x0, [x0, #0xcf8]
0x06A72D84: 25371c97  bl #0x3180a18
0x06A72D88: e06500b0  adrp x0, #0x772f000
0x06A72D8C: 003447f9  ldr x0, [x0, #0xe68]
0x06A72D90: 22371c97  bl #0x3180a18
0x06A72D94: e06500f0  adrp x0, #0x7731000
0x06A72D98: 004c40f9  ldr x0, [x0, #0x98]
0x06A72D9C: 1f371c97  bl #0x3180a18
0x06A72DA0: e06500b0  adrp x0, #0x772f000
0x06A72DA4: 003847f9  ldr x0, [x0, #0xe70]
0x06A72DA8: 1c371c97  bl #0x3180a18
0x06A72DAC: 606200f0  adrp x0, #0x76c1000
0x06A72DB0: 002047f9  ldr x0, [x0, #0xe40]
0x06A72DB4: 19371c97  bl #0x3180a18
0x06A72DB8: e06500b0  adrp x0, #0x772f000
0x06A72DBC: 004c47f9  ldr x0, [x0, #0xe98]
0x06A72DC0: 16371c97  bl #0x3180a18
0x06A72DC4: e06500f0  adrp x0, #0x7731000
0x06A72DC8: 00e441f9  ldr x0, [x0, #0x3c8]
0x06A72DCC: 13371c97  bl #0x3180a18
0x06A72DD0: e06500f0  adrp x0, #0x7731000
0x06A72DD4: 005840f9  ldr x0, [x0, #0xb0]
0x06A72DD8: 10371c97  bl #0x3180a18
0x06A72DDC: e06500b0  adrp x0, #0x772f000
0x06A72DE0: 005047f9  ldr x0, [x0, #0xea0]
0x06A72DE4: 0d371c97  bl #0x3180a18
0x06A72DE8: e06500f0  adrp x0, #0x7731000
0x06A72DEC: 00e041f9  ldr x0, [x0, #0x3c0]
0x06A72DF0: 0a371c97  bl #0x3180a18
0x06A72DF4: e06500d0  adrp x0, #0x7730000
0x06A72DF8: 006446f9  ldr x0, [x0, #0xcc8]
0x06A72DFC: 07371c97  bl #0x3180a18
0x06A72E00: e06500f0  adrp x0, #0x7731000
0x06A72E04: 00e841f9  ldr x0, [x0, #0x3d0]
0x06A72E08: 04371c97  bl #0x3180a18
0x06A72E0C: e06500f0  adrp x0, #0x7731000
0x06A72E10: 00ec41f9  ldr x0, [x0, #0x3d8]
0x06A72E14: 01371c97  bl #0x3180a18
0x06A72E18: e06500f0  adrp x0, #0x7731000
0x06A72E1C: 00d841f9  ldr x0, [x0, #0x3b0]
0x06A72E20: fe361c97  bl #0x3180a18
0x06A72E24: e06500f0  adrp x0, #0x7731000
0x06A72E28: 00f041f9  ldr x0, [x0, #0x3e0]
0x06A72E2C: fb361c97  bl #0x3180a18
0x06A72E30: 28008052  movz w8, #0x1
0x06A72E34: e8c61b39  strb w8, [x23, #0x6f1]
0x06A72E38: a00240f9  ldr x0, [x21]
0x06A72E3C: 00e4006f  movi v0.2d, #0000000000000000
0x06A72E40: e0030aad  stp q0, q0, [sp, #0x140]
0x06A72E44: ff3f01b9  str wzr, [sp, #0x13c]
0x06A72E48: e08308ad  stp q0, q0, [sp, #0x110]
0x06A72E4C: 95371c97  bl #0x3180ca0
0x06A72E50: e1031faa  mov x1, xzr
0x06A72E54: f50300aa  mov x21, x0
0x06A72E58: e99db197  bl #0x56da5fc
0x06A72E5C: 810240ad  ldp q1, q0, [x20]
0x06A72E60: c00240f9  ldr x0, [x22]
0x06A72E64: e18307ad  stp q1, q0, [sp, #0xf0]
0x06A72E68: 4b9f4697  bl #0x3c1ab94
0x06A72E6C: 280340f9  ldr x8, [x25]
0x06A72E70: f60300aa  mov x22, x0
0x06A72E74: e00308aa  mov x0, x8
0x06A72E78: 8a371c97  bl #0x3180ca0
0x06A72E7C: 020340f9  ldr x2, [x24]
0x06A72E80: e1031faa  mov x1, xzr
0x06A72E84: e3031faa  mov x3, xzr
0x06A72E88: f70300aa  mov x23, x0
0x06A72E8C: 9f8bd297  bl #0x5f15d08
0x06A72E90: e08747ad  ldp q0, q1, [sp, #0xf0]
0x06A72E94: 430340f9  ldr x3, [x26]
0x06A72E98: e8030591  add x8, sp, #0x140
0x06A72E9C: e0830591  add x0, sp, #0x160
0x06A72EA0: e10316aa  mov x1, x22
0x06A72EA4: e20317aa  mov x2, x23
0x06A72EA8: e0070bad  stp q0, q1, [sp, #0x160]
0x06A72EAC: 7ecd4b97  bl #0x3d664a4
0x06A72EB0: 351900b4  cbz x21, #0x6a731d4
0x06A72EB4: e86500f0  adrp x8, #0x7731000
0x06A72EB8: 08e541f9  ldr x8, [x8, #0x3c8]
0x06A72EBC: b6420091  add x22, x21, #0x10
0x06A72EC0: e0030591  add x0, sp, #0x140
0x06A72EC4: e10316aa  mov x1, x22
0x06A72EC8: 020140f9  ldr x2, [x8]
0x06A72ECC: be8e6497  bl #0x43969c4
0x06A72ED0: 40170036  tbz w0, #0, #0x6a731b8
0x06A72ED4: e86500b0  adrp x8, #0x772f000
0x06A72ED8: 800640ad  ldp q0, q1, [x20]
0x06A72EDC: 082947f9  ldr x8, [x8, #0xe50]
0x06A72EE0: e08706ad  stp q0, q1, [sp, #0xd0]
0x06A72EE4: 000140f9  ldr x0, [x8]
0x06A72EE8: 619b4697  bl #0x3c19c6c
0x06A72EEC: 280340f9  ldr x8, [x25]
0x06A72EF0: f70300aa  mov x23, x0
0x06A72EF4: e00308aa  mov x0, x8
0x06A72EF8: 6a371c97  bl #0x3180ca0
0x06A72EFC: 020340f9  ldr x2, [x24]
0x06A72F00: e1031faa  mov x1, xzr
0x06A72F04: e3031faa  mov x3, xzr
0x06A72F08: f80300aa  mov x24, x0
0x06A72F0C: 7f8bd297  bl #0x5f15d08
0x06A72F10: e86500b0  adrp x8, #0x772f000
0x06A72F14: 085147f9  ldr x8, [x8, #0xea0]
0x06A72F18: e08746ad  ldp q0, q1, [sp, #0xd0]
0x06A72F1C: e0830591  add x0, sp, #0x160
0x06A72F20: e10317aa  mov x1, x23
0x06A72F24: 030140f9  ldr x3, [x8]
0x06A72F28: e8430491  add x8, sp, #0x110
0x06A72F2C: e20318aa  mov x2, x24
0x06A72F30: e0070bad  stp q0, q1, [sp, #0x160]
0x06A72F34: ccc64b97  bl #0x3d64a64
0x06A72F38: e86500f0  adrp x8, #0x7731000
0x06A72F3C: 084d40f9  ldr x8, [x8, #0x98]
0x06A72F40: 000140f9  ldr x0, [x8]
0x06A72F44: 57371c97  bl #0x3180ca0
0x06A72F48: e86500f0  adrp x8, #0x7731000
0x06A72F4C: 08ed41f9  ldr x8, [x8, #0x3d8]
0x06A72F50: e10315aa  mov x1, x21
0x06A72F54: e3031faa  mov x3, xzr
0x06A72F58: f70300aa  mov x23, x0
0x06A72F5C: 020140f9  ldr x2, [x8]
0x06A72F60: ae6b9f97  bl #0x524de18
0x06A72F64: e86500f0  adrp x8, #0x7731000
0x06A72F68: 085940f9  ldr x8, [x8, #0xb0]
0x06A72F6C: e0430491  add x0, sp, #0x110
0x06A72F70: e10317aa  mov x1, x23
0x06A72F74: 020140f9  ldr x2, [x8]
0x06A72F78: e8830591  add x8, sp, #0x160
0x06A72F7C: fd4a6497  bl #0x4385b70
0x06A72F80: e86500b0  adrp x8, #0x772f000
0x06A72F84: e0074bad  ldp q0, q1, [sp, #0x160]
0x06A72F88: 084d47f9  ldr x8, [x8, #0xe98]
0x06A72F8C: e0430491  add x0, sp, #0x110
0x06A72F90: e08708ad  stp q0, q1, [sp, #0x110]
0x06A72F94: 010140f9  ldr x1, [x8]
0x06A72F98: 0c4b6497  bl #0x4385bc8
0x06A72F9C: fa6500f0  adrp x26, #0x7731000
0x06A72FA0: 5af341f9  ldr x26, [x26, #0x3e0]
0x06A72FA4: f70300aa  mov x23, x0
0x06A72FA8: 480340f9  ldr x8, [x26]
0x06A72FAC: 09e140b9  ldr w9, [x8, #0xe0]
0x06A72FB0: 89000035  cbnz w9, #0x6a72fc0
0x06A72FB4: e00308aa  mov x0, x8
0x06A72FB8: f5361c97  bl #0x3180b8c
0x06A72FBC: 480340f9  ldr x8, [x26]
0x06A72FC0: 095d40f9  ldr x9, [x8, #0xb8]
0x06A72FC4: 380540f9  ldr x24, [x9, #8]
0x06A72FC8: 180300b5  cbnz x24, #0x6a73028
0x06A72FCC: 09e140b9  ldr w9, [x8, #0xe0]
0x06A72FD0: 89000035  cbnz w9, #0x6a72fe0
0x06A72FD4: e00308aa  mov x0, x8
0x06A72FD8: ed361c97  bl #0x3180b8c
0x06A72FDC: 480340f9  ldr x8, [x26]
0x06A72FE0: e96500b0  adrp x9, #0x772f000
0x06A72FE4: 085d40f9  ldr x8, [x8, #0xb8]
0x06A72FE8: 293947f9  ldr x9, [x9, #0xe70]
0x06A72FEC: 190140f9  ldr x25, [x8]
0x06A72FF0: 200140f9  ldr x0, [x9]
0x06A72FF4: 2b371c97  bl #0x3180ca0
0x06A72FF8: e86500f0  adrp x8, #0x7731000
0x06A72FFC: 08e941f9  ldr x8, [x8, #0x3d0]
0x06A73000: e10319aa  mov x1, x25
0x06A73004: e3031faa  mov x3, xzr
0x06A73008: f80300aa  mov x24, x0
0x06A7300C: 020140f9  ldr x2, [x8]
0x06A73010: af6b9f97  bl #0x524decc
0x06A73014: 480340f9  ldr x8, [x26]
0x06A73018: e10318aa  mov x1, x24
0x06A7301C: 005d40f9  ldr x0, [x8, #0xb8]
0x06A73020: 188c00f8  str x24, [x0, #8]!
0x06A73024: 68361c97  bl #0x31809c4
0x06A73028: e8650090  adrp x8, #0x772f000
0x06A7302C: 083147f9  ldr x8, [x8, #0xe60]
0x06A73030: e00317aa  mov x0, x23
0x06A73034: e10318aa  mov x1, x24
0x06A73038: 020140f9  ldr x2, [x8]
0x06A7303C: 14694797  bl #0x3c4d48c
0x06A73040: 686200d0  adrp x8, #0x76c1000
0x06A73044: 087d46f9  ldr x8, [x8, #0xcf8]
0x06A73048: 010140f9  ldr x1, [x8]
0x06A7304C: 65b34797  bl #0x3c5fde0
0x06A73050: 780a40f9  ldr x24, [x19, #0x10]
0x06A73054: 180c00b4  cbz x24, #0x6a731d4
0x06A73058: 6a6200d0  adrp x10, #0x76c1000
0x06A7305C: 080340f9  ldr x8, [x24]
0x06A73060: b91a40b9  ldr w25, [x21, #0x18]
0x06A73064: 4a2147f9  ldr x10, [x10, #0xe40]
0x06A73068: f70300aa  mov x23, x0
0x06A7306C: 095d4279  ldrh w9, [x8, #0x12e]
0x06A73070: 410140f9  ldr x1, [x10]
0x06A73074: 290100b4  cbz x9, #0x6a73098
0x06A73078: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A7307C: 4a210091  add x10, x10, #8
0x06A73080: 4b815ff8  ldur x11, [x10, #-8]
0x06A73084: 7f0101eb  cmp x11, x1
0x06A73088: 00010054  b.eq #0x6a730a8
0x06A7308C: 290500f1  subs x9, x9, #1
0x06A73090: 4a410091  add x10, x10, #0x10
0x06A73094: 61ffff54  b.ne #0x6a73080
0x06A73098: 42008052  movz w2, #0x2
0x06A7309C: e00318aa  mov x0, x24
0x06A730A0: 9c8e1b97  bl #0x3156b10
0x06A730A4: 05000014  b #0x6a730b8
0x06A730A8: 490140b9  ldr w9, [x10]
0x06A730AC: 29090011  add w9, w9, #2
0x06A730B0: 08d1298b  add x8, x8, w9, sxtw #4
0x06A730B4: 00e10491  add x0, x8, #0x138
0x06A730B8: 081040a9  ldp x8, x4, [x0]
0x06A730BC: e3f30491  add x3, sp, #0x13c
0x06A730C0: e00318aa  mov x0, x24
0x06A730C4: e10317aa  mov x1, x23
0x06A730C8: e203192a  mov w2, w25
0x06A730CC: 00013fd6  blr x8
0x06A730D0: 20050036  tbz w0, #0, #0x6a73174
0x06A730D4: 810240ad  ldp q1, q0, [x20]
0x06A730D8: f73f41b9  ldr w23, [sp, #0x13c]
0x06A730DC: a1020191  add x1, x21, #0x40
0x06A730E0: e0030191  add x0, sp, #0x40
0x06A730E4: e18305ad  stp q1, q0, [sp, #0xb0]
0x06A730E8: a10241ad  ldp q1, q0, [x21, #0x20]
0x06A730EC: b40a40f9  ldr x20, [x21, #0x10]
0x06A730F0: b61a40b9  ldr w22, [x21, #0x18]
0x06A730F4: 020a8052  movz w2, #0x50
0x06A730F8: e18304ad  stp q1, q0, [sp, #0x90]
0x06A730FC: a86240f9  ldr x8, [x21, #0xc0]
0x06A73100: a00645ad  ldp q0, q1, [x21, #0xa0]
0x06A73104: e81b00f9  str x8, [sp, #0x30]
0x06A73108: e08700ad  stp q0, q1, [sp, #0x10]
0x06A7310C: 296e1d94  bl #0x71ce9b0
0x06A73110: e1c30291  add x1, sp, #0xb0
0x06A73114: e4430291  add x4, sp, #0x90
0x06A73118: e5030191  add x5, sp, #0x40
0x06A7311C: e6430091  add x6, sp, #0x10
0x06A73120: e00313aa  mov x0, x19
0x06A73124: e20314aa  mov x2, x20
0x06A73128: e30316aa  mov x3, x22
0x06A7312C: e703172a  mov w7, w23
0x06A73130: 41010094  bl #0x6a73634
0x06A73134: 20040036  tbz w0, #0, #0x6a731b8
0x06A73138: b30a40f9  ldr x19, [x21, #0x10]
0x06A7313C: a0420291  add x0, x21, #0x90
0x06A73140: e1031faa  mov x1, xzr
0x06A73144: 58a40094  bl #0x6a9c2a4
0x06A73148: 730400b4  cbz x19, #0x6a731d4
0x06A7314C: e86500b0  adrp x8, #0x7730000
0x06A73150: 087545f9  ldr x8, [x8, #0xae8]
0x06A73154: e20300aa  mov x2, x0
0x06A73158: e40301aa  mov x4, x1
0x06A7315C: e00313aa  mov x0, x19
0x06A73160: 030140f9  ldr x3, [x8]
0x06A73164: e10302aa  mov x1, x2
0x06A73168: e20304aa  mov x2, x4
0x06A7316C: a0a94697  bl #0x3c1d7ec
0x06A73170: 12000014  b #0x6a731b8
0x06A73174: e86500b0  adrp x8, #0x7730000
0x06A73178: 930a40f9  ldr x19, [x20, #0x10]
0x06A7317C: d50240f9  ldr x21, [x22]
0x06A73180: 086146f9  ldr x8, [x8, #0xcc0]
0x06A73184: 000140f9  ldr x0, [x8]
0x06A73188: c6361c97  bl #0x3180ca0
0x06A7318C: e10315aa  mov x1, x21
0x06A73190: e2031faa  mov x2, xzr
0x06A73194: f40300aa  mov x20, x0
0x06A73198: fc9b0094  bl #0x6a9a188
0x06A7319C: d30100b4  cbz x19, #0x6a731d4
0x06A731A0: e86500b0  adrp x8, #0x7730000
0x06A731A4: 086546f9  ldr x8, [x8, #0xcc8]
0x06A731A8: e00313aa  mov x0, x19
0x06A731AC: e10314aa  mov x1, x20
0x06A731B0: 020140f9  ldr x2, [x8]
0x06A731B4: 8c404d97  bl #0x3dc33e4
0x06A731B8: f44f5ca9  ldp x20, x19, [sp, #0x1c0]
0x06A731BC: f6575ba9  ldp x22, x21, [sp, #0x1b0]
0x06A731C0: f85f5aa9  ldp x24, x23, [sp, #0x1a0]
0x06A731C4: fa6759a9  ldp x26, x25, [sp, #0x190]
0x06A731C8: fd7b58a9  ldp x29, x30, [sp, #0x180]
0x06A731CC: ff430791  add sp, sp, #0x1d0
0x06A731D0: c0035fd6  ret
0x06A731D4: b6361c97  bl #0x3180cac

; RVA 0x6A731D8 | private void ProduceItemIfReady(TickContext context) { }
; bytes=1108 sha256=4f01a4095cfadd8e7e3a91db9866b0f7871845e852f2b3c5e7e7c3aa2b78b94a status=arm64_complete_bound indexed_start=True
0x06A731D8: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x06A731DC: fc6f01a9  stp x28, x27, [sp, #0x10]
0x06A731E0: fa6702a9  stp x26, x25, [sp, #0x20]
0x06A731E4: f85f03a9  stp x24, x23, [sp, #0x30]
0x06A731E8: f65704a9  stp x22, x21, [sp, #0x40]
0x06A731EC: f44f05a9  stp x20, x19, [sp, #0x50]
0x06A731F0: ff030cd1  sub sp, sp, #0x300
0x06A731F4: e01b00f9  str x0, [sp, #0x30]
0x06A731F8: 48d03bd5  mrs x8, tpidr_el0
0x06A731FC: e80f00f9  str x8, [sp, #0x18]
0x06A73200: 081540f9  ldr x8, [x8, #0x28]
0x06A73204: b99500f0  adrp x25, #0x7d2a000
0x06A73208: f86500d0  adrp x24, #0x7731000
0x06A7320C: f5650090  adrp x21, #0x772f000
0x06A73210: e87f01f9  str x8, [sp, #0x2f8]
0x06A73214: f66500b0  adrp x22, #0x7730000
0x06A73218: f46500d0  adrp x20, #0x7731000
0x06A7321C: f76500d0  adrp x23, #0x7731000
0x06A73220: 28cb5b39  ldrb w8, [x25, #0x6f2]
0x06A73224: 18f741f9  ldr x24, [x24, #0x3e8]
0x06A73228: b53647f9  ldr x21, [x21, #0xe68]
0x06A7322C: d65a45f9  ldr x22, [x22, #0xab0]
0x06A73230: 94fa41f9  ldr x20, [x20, #0x3f0]
0x06A73234: f7f241f9  ldr x23, [x23, #0x3e0]
0x06A73238: f30301aa  mov x19, x1
0x06A7323C: fac30891  add x26, sp, #0x230
0x06A73240: fb830391  add x27, sp, #0xe0
0x06A73244: 88040037  tbnz w8, #0, #0x6a732d4
0x06A73248: e06500b0  adrp x0, #0x7730000
0x06A7324C: 005845f9  ldr x0, [x0, #0xab0]
0x06A73250: f2351c97  bl #0x3180a18
0x06A73254: e06500d0  adrp x0, #0x7731000
0x06A73258: 00f441f9  ldr x0, [x0, #0x3e8]
0x06A7325C: ef351c97  bl #0x3180a18
0x06A73260: e0650090  adrp x0, #0x772f000
0x06A73264: 00ac47f9  ldr x0, [x0, #0xf58]
0x06A73268: ec351c97  bl #0x3180a18
0x06A7326C: e06500d0  adrp x0, #0x7731000
0x06A73270: 00fc41f9  ldr x0, [x0, #0x3f8]
0x06A73274: e9351c97  bl #0x3180a18
0x06A73278: e0650090  adrp x0, #0x772f000
0x06A7327C: 003447f9  ldr x0, [x0, #0xe68]
0x06A73280: e6351c97  bl #0x3180a18
0x06A73284: e06500d0  adrp x0, #0x7731000
0x06A73288: 000042f9  ldr x0, [x0, #0x400]
0x06A7328C: e3351c97  bl #0x3180a18
0x06A73290: e06500d0  adrp x0, #0x7731000
0x06A73294: 000442f9  ldr x0, [x0, #0x408]
0x06A73298: e0351c97  bl #0x3180a18
0x06A7329C: e06500d0  adrp x0, #0x7731000
0x06A732A0: 000842f9  ldr x0, [x0, #0x410]
0x06A732A4: dd351c97  bl #0x3180a18
0x06A732A8: e06500d0  adrp x0, #0x7731000
0x06A732AC: 00f841f9  ldr x0, [x0, #0x3f0]
0x06A732B0: da351c97  bl #0x3180a18
0x06A732B4: e06500d0  adrp x0, #0x7731000
0x06A732B8: 000c42f9  ldr x0, [x0, #0x418]
0x06A732BC: d7351c97  bl #0x3180a18
0x06A732C0: e06500d0  adrp x0, #0x7731000
0x06A732C4: 00f041f9  ldr x0, [x0, #0x3e0]
0x06A732C8: d4351c97  bl #0x3180a18
0x06A732CC: 28008052  movz w8, #0x1
0x06A732D0: 28cb1b39  strb w8, [x25, #0x6f2]
0x06A732D4: 00e4006f  movi v0.2d, #0000000000000000
0x06A732D8: ff7301f9  str xzr, [sp, #0x2e0]
0x06A732DC: ff6b01f9  str xzr, [sp, #0x2d0]
0x06A732E0: ff6f01f9  str xzr, [sp, #0x2d8]
0x06A732E4: ffeb02b9  str wzr, [sp, #0x2e8]
0x06A732E8: ff6b01b9  str wzr, [sp, #0x168]
0x06A732EC: 7fb308b8  stur wzr, [x27, #0x8b]
0x06A732F0: ff6301f9  str xzr, [sp, #0x2c0]
0x06A732F4: ff6701b9  str wzr, [sp, #0x164]
0x06A732F8: 608305ad  stp q0, q0, [x27, #0xb0]
0x06A732FC: 608304ad  stp q0, q0, [x27, #0x90]
0x06A73300: 400301ad  stp q0, q0, [x26, #0x20]
0x06A73304: 400302ad  stp q0, q0, [x26, #0x40]
0x06A73308: 400303ad  stp q0, q0, [x26, #0x60]
0x06A7330C: 4023803d  str q0, [x26, #0x80]
0x06A73310: 610240ad  ldp q1, q0, [x19]
0x06A73314: 000340f9  ldr x0, [x24]
0x06A73318: 610303ad  stp q1, q0, [x27, #0x60]
0x06A7331C: 759d4697  bl #0x3c1a8f0
0x06A73320: a80240f9  ldr x8, [x21]
0x06A73324: f50300aa  mov x21, x0
0x06A73328: e00308aa  mov x0, x8
0x06A7332C: 5d361c97  bl #0x3180ca0
0x06A73330: c20240f9  ldr x2, [x22]
0x06A73334: e1031faa  mov x1, xzr
0x06A73338: e3031faa  mov x3, xzr
0x06A7333C: f60300aa  mov x22, x0
0x06A73340: 728ad297  bl #0x5f15d08
0x06A73344: 600743ad  ldp q0, q1, [x27, #0x60]
0x06A73348: 830240f9  ldr x3, [x20]
0x06A7334C: e8c30591  add x8, sp, #0x170
0x06A73350: e0c30691  add x0, sp, #0x1b0
0x06A73354: e10315aa  mov x1, x21
0x06A73358: e20316aa  mov x2, x22
0x06A7335C: 608706ad  stp q0, q1, [x27, #0xd0]
0x06A73360: 39cb4b97  bl #0x3d66044
0x06A73364: e00240f9  ldr x0, [x23]
0x06A73368: 08e040b9  ldr w8, [x0, #0xe0]
0x06A7336C: 68000035  cbnz w8, #0x6a73378
0x06A73370: 07361c97  bl #0x3180b8c
0x06A73374: e00240f9  ldr x0, [x23]
0x06A73378: 085c40f9  ldr x8, [x0, #0xb8]
0x06A7337C: f96500d0  adrp x25, #0x7731000
0x06A73380: f86500d0  adrp x24, #0x7731000
0x06A73384: f46500d0  adrp x20, #0x7731000
0x06A73388: 150940f9  ldr x21, [x8, #0x10]
0x06A7338C: 390b42f9  ldr x25, [x25, #0x410]
0x06A73390: 180742f9  ldr x24, [x24, #0x408]
0x06A73394: 94fe41f9  ldr x20, [x20, #0x3f8]
0x06A73398: f50200b5  cbnz x21, #0x6a733f4
0x06A7339C: 08e040b9  ldr w8, [x0, #0xe0]
0x06A733A0: 68000035  cbnz w8, #0x6a733ac
0x06A733A4: fa351c97  bl #0x3180b8c
0x06A733A8: e00240f9  ldr x0, [x23]
0x06A733AC: e96500d0  adrp x9, #0x7731000
0x06A733B0: 085c40f9  ldr x8, [x0, #0xb8]
0x06A733B4: 290142f9  ldr x9, [x9, #0x400]
0x06A733B8: 160140f9  ldr x22, [x8]
0x06A733BC: 200140f9  ldr x0, [x9]
0x06A733C0: 38361c97  bl #0x3180ca0
0x06A733C4: e86500d0  adrp x8, #0x7731000
0x06A733C8: 080d42f9  ldr x8, [x8, #0x418]
0x06A733CC: e10316aa  mov x1, x22
0x06A733D0: e3031faa  mov x3, xzr
0x06A733D4: f50300aa  mov x21, x0
0x06A733D8: 020140f9  ldr x2, [x8]
0x06A733DC: 31799f97  bl #0x52518a0
0x06A733E0: e80240f9  ldr x8, [x23]
0x06A733E4: e10315aa  mov x1, x21
0x06A733E8: 005d40f9  ldr x0, [x8, #0xb8]
0x06A733EC: 150c01f8  str x21, [x0, #0x10]!
0x06A733F0: 75351c97  bl #0x31809c4
0x06A733F4: 220340f9  ldr x2, [x25]
0x06A733F8: e8430691  add x8, sp, #0x190
0x06A733FC: e0c30591  add x0, sp, #0x170
0x06A73400: e10315aa  mov x1, x21
0x06A73404: a3816497  bl #0x4393a90
0x06A73408: 010340f9  ldr x1, [x24]
0x06A7340C: e0430691  add x0, sp, #0x190
0x06A73410: b6816497  bl #0x4393ae8
0x06A73414: 810240f9  ldr x1, [x20]
0x06A73418: fe9f4797  bl #0x3c5b410
0x06A7341C: 401000b4  cbz x0, #0x6a73624
0x06A73420: 080c40f9  ldr x8, [x0, #0x18]
0x06A73424: e01700f9  str x0, [sp, #0x28]
0x06A73428: 1f050071  cmp w8, #1
0x06A7342C: 0b0e0054  b.lt #0x6a735ec
0x06A73430: e9c30891  add x9, sp, #0x230
0x06A73434: eac30691  add x10, sp, #0x1b0
0x06A73438: 39110091  add x25, x9, #4
0x06A7343C: 49650091  add x9, x10, #0x19
0x06A73440: e91300f9  str x9, [sp, #0x20]
0x06A73444: e91740f9  ldr x9, [sp, #0x28]
0x06A73448: eb830391  add x11, sp, #0xe0
0x06A7344C: fc031faa  mov x28, xzr
0x06A73450: 087d4092  and x8, x8, #0xffffffff
0x06A73454: 5d410191  add x29, x10, #0x50
0x06A73458: 74650091  add x20, x11, #0x19
0x06A7345C: 36410191  add x22, x9, #0x50
0x06A73460: 9f4328eb  cmp x28, w8, uxtw
0x06A73464: e20d0054  b.hs #0x6a73620
0x06A73468: c082de3c  ldur q0, [x22, #-0x18]
0x06A7346C: c1c2dd3c  ldur q1, [x22, #-0x24]
0x06A73470: d7025df8  ldur x23, [x22, #-0x30]
0x06A73474: d8825db8  ldur w24, [x22, #-0x28]
0x06A73478: 40c38a3c  stur q0, [x26, #0xac]
0x06A7347C: 412b803d  str q1, [x26, #0xa0]
0x06A73480: c8c25fb8  ldur w8, [x22, #-4]
0x06A73484: c9925fb8  ldur w9, [x22, #-7]
0x06A73488: d5825f38  ldurb w21, [x22, #-8]
0x06A7348C: e0430991  add x0, sp, #0x250
0x06A73490: 020f8052  movz w2, #0x78
0x06A73494: e10316aa  mov x1, x22
0x06A73498: 68b308b8  stur w8, [x27, #0x8b]
0x06A7349C: e96b01b9  str w9, [sp, #0x168]
0x06A734A0: 346d1d94  bl #0x71ce970
0x06A734A4: e81b40f9  ldr x8, [sp, #0x30]
0x06A734A8: 600640ad  ldp q0, q1, [x19]
0x06A734AC: e1830491  add x1, sp, #0x120
0x06A734B0: e3930591  add x3, sp, #0x164
0x06A734B4: 000940f9  ldr x0, [x8, #0x10]
0x06A734B8: e20318aa  mov x2, x24
0x06A734BC: e4031faa  mov x4, xzr
0x06A734C0: 600702ad  stp q0, q1, [x27, #0x40]
0x06A734C4: c6970094  bl #0x6a993dc
0x06A734C8: 20090036  tbz w0, #0, #0x6a735ec
0x06A734CC: 402bc03d  ldr q0, [x26, #0xa0]
0x06A734D0: 41c3ca3c  ldur q1, [x26, #0xac]
0x06A734D4: 620e40ad  ldp q2, q3, [x19]
0x06A734D8: e0430291  add x0, sp, #0x90
0x06A734DC: 6057803d  str q0, [x27, #0x150]
0x06A734E0: 41c3803c  stur q1, [x26, #0xc]
0x06A734E4: 2003c03d  ldr q0, [x25]
0x06A734E8: 280b40f9  ldr x8, [x25, #0x10]
0x06A734EC: e1430991  add x1, sp, #0x250
0x06A734F0: 020a8052  movz w2, #0x50
0x06A734F4: 620f01ad  stp q2, q3, [x27, #0x20]
0x06A734F8: 6003803d  str q0, [x27]
0x06A734FC: e87b00f9  str x8, [sp, #0xf0]
0x06A73500: 1c6d1d94  bl #0x71ce970
0x06A73504: e0c30691  add x0, sp, #0x1b0
0x06A73508: e1430991  add x1, sp, #0x250
0x06A7350C: 020f8052  movz w2, #0x78
0x06A73510: 186d1d94  bl #0x71ce970
0x06A73514: a81340f9  ldr x8, [x29, #0x20]
0x06A73518: a10340ad  ldp q1, q0, [x29]
0x06A7351C: e76741b9  ldr w7, [sp, #0x164]
0x06A73520: e96b41b9  ldr w9, [sp, #0x168]
0x06A73524: 6ab348b8  ldur w10, [x27, #0x8b]
0x06A73528: e01b40f9  ldr x0, [sp, #0x30]
0x06A7352C: e1030491  add x1, sp, #0x100
0x06A73530: e4830391  add x4, sp, #0xe0
0x06A73534: e5430291  add x5, sp, #0x90
0x06A73538: e6830191  add x6, sp, #0x60
0x06A7353C: e20317aa  mov x2, x23
0x06A73540: e30318aa  mov x3, x24
0x06A73544: f5e30339  strb w21, [sp, #0xf8]
0x06A73548: e10303ad  stp q1, q0, [sp, #0x60]
0x06A7354C: e84300f9  str x8, [sp, #0x80]
0x06A73550: 8a3200b8  stur w10, [x20, #3]
0x06A73554: 890200b9  str w9, [x20]
0x06A73558: 37000094  bl #0x6a73634
0x06A7355C: c0030036  tbz w0, #0, #0x6a735d4
0x06A73560: 402bc03d  ldr q0, [x26, #0xa0]
0x06A73564: 41c3ca3c  ldur q1, [x26, #0xac]
0x06A73568: e86b41b9  ldr w8, [sp, #0x168]
0x06A7356C: 6ab348b8  ldur w10, [x27, #0x8b]
0x06A73570: 4003803d  str q0, [x26]
0x06A73574: 41c3803c  stur q1, [x26, #0xc]
0x06A73578: 290b40f9  ldr x9, [x25, #0x10]
0x06A7357C: 2003c03d  ldr q0, [x25]
0x06A73580: e83b00b9  str w8, [sp, #0x38]
0x06A73584: eab303b8  stur w10, [sp, #0x3b]
0x06A73588: e92b00f9  str x9, [sp, #0x50]
0x06A7358C: e013803d  str q0, [sp, #0x40]
0x06A73590: b70400b4  cbz x23, #0x6a73624
0x06A73594: e8650090  adrp x8, #0x772f000
0x06A73598: 08ad47f9  ldr x8, [x8, #0xf58]
0x06A7359C: e013c03d  ldr q0, [sp, #0x40]
0x06A735A0: e93b40b9  ldr w9, [sp, #0x38]
0x06A735A4: eab343b8  ldur w10, [sp, #0x3b]
0x06A735A8: 020140f9  ldr x2, [x8]
0x06A735AC: e82b40f9  ldr x8, [sp, #0x50]
0x06A735B0: e1c30691  add x1, sp, #0x1b0
0x06A735B4: e00317aa  mov x0, x23
0x06A735B8: 6037803d  str q0, [x27, #0xd0]
0x06A735BC: e8e300f9  str x8, [sp, #0x1c0]
0x06A735C0: e81340f9  ldr x8, [sp, #0x20]
0x06A735C4: ff230739  strb wzr, [sp, #0x1c8]
0x06A735C8: 0a3100b8  stur w10, [x8, #3]
0x06A735CC: 090100b9  str w9, [x8]
0x06A735D0: eea84697  bl #0x3c1d988
0x06A735D4: e81740f9  ldr x8, [sp, #0x28]
0x06A735D8: 9c070091  add x28, x28, #1
0x06A735DC: d6a20291  add x22, x22, #0xa8
0x06A735E0: 081940b9  ldr w8, [x8, #0x18]
0x06A735E4: 9fc328eb  cmp x28, w8, sxtw
0x06A735E8: cbf3ff54  b.lt #0x6a73460
0x06A735EC: e80f40f9  ldr x8, [sp, #0x18]
0x06A735F0: 081540f9  ldr x8, [x8, #0x28]
0x06A735F4: e97f41f9  ldr x9, [sp, #0x2f8]
0x06A735F8: 1f0109eb  cmp x8, x9
0x06A735FC: 61010054  b.ne #0x6a73628
0x06A73600: ff030c91  add sp, sp, #0x300
0x06A73604: f44f45a9  ldp x20, x19, [sp, #0x50]
0x06A73608: f65744a9  ldp x22, x21, [sp, #0x40]
0x06A7360C: f85f43a9  ldp x24, x23, [sp, #0x30]
0x06A73610: fa6742a9  ldp x26, x25, [sp, #0x20]
0x06A73614: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x06A73618: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x06A7361C: c0035fd6  ret
0x06A73620: a5351c97  bl #0x3180cb4
0x06A73624: a2351c97  bl #0x3180cac
0x06A73628: da6c1d94  bl #0x71ce990

; RVA 0x6A73634 | private bool TryProduceItem(TickContext context, Entity entity, BoardTilePositionComponent boardTilePositionComponent, ProducerComponent producerComponent, TimeCycleComponent timeCycleComponent, InteractionComponent interactionComponent, int emptyPosition) { }
; bytes=852 sha256=aedd6b491f94450e904ede383062017e9e0497d04561df1faf1598ca1c54bbbb status=arm64_complete_bound indexed_start=True
0x06A73634: ff8305d1  sub sp, sp, #0x160
0x06A73638: fd7b10a9  stp x29, x30, [sp, #0x100]
0x06A7363C: fc6f11a9  stp x28, x27, [sp, #0x110]
0x06A73640: fa6712a9  stp x26, x25, [sp, #0x120]
0x06A73644: f85f13a9  stp x24, x23, [sp, #0x130]
0x06A73648: f65714a9  stp x22, x21, [sp, #0x140]
0x06A7364C: f44f15a9  stp x20, x19, [sp, #0x150]
0x06A73650: b59500f0  adrp x21, #0x7d2a000
0x06A73654: a8ce5b39  ldrb w8, [x21, #0x6f3]
0x06A73658: f403072a  mov w20, w7
0x06A7365C: f70306aa  mov x23, x6
0x06A73660: f90305aa  mov x25, x5
0x06A73664: fa0304aa  mov x26, x4
0x06A73668: fd0303aa  mov x29, x3
0x06A7366C: f60302aa  mov x22, x2
0x06A73670: f30301aa  mov x19, x1
0x06A73674: f80300aa  mov x24, x0
0x06A73678: 08030037  tbnz w8, #0, #0x6a736d8
0x06A7367C: 606200d0  adrp x0, #0x76c1000
0x06A73680: 005843f9  ldr x0, [x0, #0x6b0]
0x06A73684: e5341c97  bl #0x3180a18
0x06A73688: e0650090  adrp x0, #0x772f000
0x06A7368C: 003c47f9  ldr x0, [x0, #0xe78]
0x06A73690: e2341c97  bl #0x3180a18
0x06A73694: e0650090  adrp x0, #0x772f000
0x06A73698: 004047f9  ldr x0, [x0, #0xe80]
0x06A7369C: df341c97  bl #0x3180a18
0x06A736A0: e0650090  adrp x0, #0x772f000
0x06A736A4: 005447f9  ldr x0, [x0, #0xea8]
0x06A736A8: dc341c97  bl #0x3180a18
0x06A736AC: e0650090  adrp x0, #0x772f000
0x06A736B0: 005847f9  ldr x0, [x0, #0xeb0]
0x06A736B4: d9341c97  bl #0x3180a18
0x06A736B8: 406000f0  adrp x0, #0x767e000
0x06A736BC: 00a842f9  ldr x0, [x0, #0x550]
0x06A736C0: d6341c97  bl #0x3180a18
0x06A736C4: e05e0090  adrp x0, #0x764f000
0x06A736C8: 00ac40f9  ldr x0, [x0, #0x158]
0x06A736CC: d3341c97  bl #0x3180a18
0x06A736D0: 28008052  movz w8, #0x1
0x06A736D4: a8ce1b39  strb w8, [x21, #0x6f3]
0x06A736D8: 410340ad  ldp q1, q0, [x26]
0x06A736DC: e0430291  add x0, sp, #0x90
0x06A736E0: 020a8052  movz w2, #0x50
0x06A736E4: e10319aa  mov x1, x25
0x06A736E8: e10307ad  stp q1, q0, [sp, #0xe0]
0x06A736EC: a16c1d94  bl #0x71ce970
0x06A736F0: e00640ad  ldp q0, q1, [x23]
0x06A736F4: e81240f9  ldr x8, [x23, #0x20]
0x06A736F8: e1830391  add x1, sp, #0xe0
0x06A736FC: e2430291  add x2, sp, #0x90
0x06A73700: e00703ad  stp q0, q1, [sp, #0x60]
0x06A73704: e84300f9  str x8, [sp, #0x80]
0x06A73708: 041742a9  ldp x4, x5, [x24, #0x20]
0x06A7370C: e3830191  add x3, sp, #0x60
0x06A73710: e00316aa  mov x0, x22
0x06A73714: e6031faa  mov x6, xzr
0x06A73718: 246dff97  bl #0x6a4eba8
0x06A7371C: f70300aa  mov x23, x0
0x06A73720: e01100b4  cbz x0, #0x6a7395c
0x06A73724: e00a40f9  ldr x0, [x23, #0x10]
0x06A73728: e01200b4  cbz x0, #0x6a73984
0x06A7372C: 080040f9  ldr x8, [x0]
0x06A73730: 1a0f40f9  ldr x26, [x24, #0x18]
0x06A73734: 09855ca9  ldp x9, x1, [x8, #0x1c8]
0x06A73738: 20013fd6  blr x9
0x06A7373C: 5a1200b4  cbz x26, #0x6a73984
0x06A73740: 6a6200d0  adrp x10, #0x76c1000
0x06A73744: 480340f9  ldr x8, [x26]
0x06A73748: 4a5943f9  ldr x10, [x10, #0x6b0]
0x06A7374C: 5c6000f0  adrp x28, #0x767e000
0x06A73750: f5824039  ldrb w21, [x23, #0x20]
0x06A73754: 095d4279  ldrh w9, [x8, #0x12e]
0x06A73758: 410140f9  ldr x1, [x10]
0x06A7375C: 9cab42f9  ldr x28, [x28, #0x550]
0x06A73760: fb0300aa  mov x27, x0
0x06A73764: fd1b00f9  str x29, [sp, #0x30]
0x06A73768: 290100b4  cbz x9, #0x6a7378c
0x06A7376C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A73770: 4a210091  add x10, x10, #8
0x06A73774: 4b815ff8  ldur x11, [x10, #-8]
0x06A73778: 7f0101eb  cmp x11, x1
0x06A7377C: 00010054  b.eq #0x6a7379c
0x06A73780: 290500f1  subs x9, x9, #1
0x06A73784: 4a410091  add x10, x10, #0x10
0x06A73788: 61ffff54  b.ne #0x6a73774
0x06A7378C: 22008052  movz w2, #0x1
0x06A73790: e0031aaa  mov x0, x26
0x06A73794: df8c1b97  bl #0x3156b10
0x06A73798: 05000014  b #0x6a737ac
0x06A7379C: 490140b9  ldr w9, [x10]
0x06A737A0: 29050011  add w9, w9, #1
0x06A737A4: 08d1298b  add x8, x8, w9, sxtw #4
0x06A737A8: 00e10491  add x0, x8, #0x138
0x06A737AC: 081840a9  ldp x8, x6, [x0]
0x06A737B0: fd5e0090  adrp x29, #0x764f000
0x06A737B4: bdaf40f9  ldr x29, [x29, #0x158]
0x06A737B8: bf020071  cmp w21, #0
0x06A737BC: e4079f1a  cset w4, ne
0x06A737C0: 03018052  movz w3, #0x8
0x06A737C4: e0031aaa  mov x0, x26
0x06A737C8: e1031baa  mov x1, x27
0x06A737CC: e203142a  mov w2, w20
0x06A737D0: e5031faa  mov x5, xzr
0x06A737D4: 00013fd6  blr x8
0x06A737D8: 600640ad  ldp q0, q1, [x19]
0x06A737DC: fa0300aa  mov x26, x0
0x06A737E0: e0030191  add x0, sp, #0x40
0x06A737E4: e1031aaa  mov x1, x26
0x06A737E8: e20316aa  mov x2, x22
0x06A737EC: e3031faa  mov x3, xzr
0x06A737F0: f31f00f9  str x19, [sp, #0x38]
0x06A737F4: e00702ad  stp q0, q1, [sp, #0x40]
0x06A737F8: 9a950094  bl #0x6a98e60
0x06A737FC: e00319aa  mov x0, x25
0x06A73800: e10316aa  mov x1, x22
0x06A73804: e2031faa  mov x2, xzr
0x06A73808: 5d6fff97  bl #0x6a4f57c
0x06A7380C: e90240f9  ldr x9, [x23]
0x06A73810: 880340f9  ldr x8, [x28]
0x06A73814: fc031faa  mov x28, xzr
0x06A73818: 2bc14439  ldrb w11, [x9, #0x130]
0x06A7381C: 0ac14439  ldrb w10, [x8, #0x130]
0x06A73820: 7f010a6b  cmp w11, w10
0x06A73824: c3000054  b.lo #0x6a7383c
0x06A73828: 296540f9  ldr x9, [x9, #0xc8]
0x06A7382C: 290d0a8b  add x9, x9, x10, lsl #3
0x06A73830: 29815ff8  ldur x9, [x9, #-8]
0x06A73834: 3f0108eb  cmp x9, x8
0x06A73838: fc029f9a  csel x28, x23, xzr, eq
0x06A7383C: a20340f9  ldr x2, [x29]
0x06A73840: 011340f9  ldr x1, [x24, #0x20]
0x06A73844: e00316aa  mov x0, x22
0x06A73848: e5031faa  mov x5, xzr
0x06A7384C: e30302aa  mov x3, x2
0x06A73850: e40302aa  mov x4, x2
0x06A73854: f303142a  mov w19, w20
0x06A73858: 37be0094  bl #0x6aa3134
0x06A7385C: a20340f9  ldr x2, [x29]
0x06A73860: 011340f9  ldr x1, [x24, #0x20]
0x06A73864: fb0300aa  mov x27, x0
0x06A73868: e0031aaa  mov x0, x26
0x06A7386C: e30302aa  mov x3, x2
0x06A73870: e40302aa  mov x4, x2
0x06A73874: e5031faa  mov x5, xzr
0x06A73878: 2fbe0094  bl #0x6aa3134
0x06A7387C: e81f40f9  ldr x8, [sp, #0x38]
0x06A73880: f80300aa  mov x24, x0
0x06A73884: 190940f9  ldr x25, [x8, #0x10]
0x06A73888: 1c0100b4  cbz x28, #0x6a738a8
0x06A7388C: 88a74039  ldrb w8, [x28, #0x29]
0x06A73890: 89a34039  ldrb w9, [x28, #0x28]
0x06A73894: 1f010071  cmp w8, #0
0x06A73898: fd079f1a  cset w29, ne
0x06A7389C: 3f010071  cmp w9, #0
0x06A738A0: f4079f1a  cset w20, ne
0x06A738A4: 03000014  b #0x6a738b0
0x06A738A8: f4031f2a  mov w20, wzr
0x06A738AC: fd031f2a  mov w29, wzr
0x06A738B0: e8650090  adrp x8, #0x772f000
0x06A738B4: f58a4039  ldrb w21, [x23, #0x22]
0x06A738B8: 084147f9  ldr x8, [x8, #0xe80]
0x06A738BC: 000140f9  ldr x0, [x8]
0x06A738C0: f8341c97  bl #0x3180ca0
0x06A738C4: e10316aa  mov x1, x22
0x06A738C8: e2031aaa  mov x2, x26
0x06A738CC: e31b40f9  ldr x3, [sp, #0x30]
0x06A738D0: e403132a  mov w4, w19
0x06A738D4: e5031f2a  mov w5, wzr
0x06A738D8: e6031baa  mov x6, x27
0x06A738DC: e70318aa  mov x7, x24
0x06A738E0: fc0300aa  mov x28, x0
0x06A738E4: ff0f00f9  str xzr, [sp, #0x18]
0x06A738E8: f5430039  strb w21, [sp, #0x10]
0x06A738EC: fd230039  strb w29, [sp, #8]
0x06A738F0: f4030039  strb w20, [sp]
0x06A738F4: 679c0094  bl #0x6a9aa90
0x06A738F8: 790400b4  cbz x25, #0x6a73984
0x06A738FC: e8650090  adrp x8, #0x772f000
0x06A73900: 085947f9  ldr x8, [x8, #0xeb0]
0x06A73904: f4650090  adrp x20, #0x772f000
0x06A73908: e00319aa  mov x0, x25
0x06A7390C: e1031caa  mov x1, x28
0x06A73910: 020140f9  ldr x2, [x8]
0x06A73914: 943e47f9  ldr x20, [x20, #0xe78]
0x06A73918: b33e4d97  bl #0x3dc33e4
0x06A7391C: e81f40f9  ldr x8, [sp, #0x38]
0x06A73920: 800240f9  ldr x0, [x20]
0x06A73924: 130940f9  ldr x19, [x8, #0x10]
0x06A73928: de341c97  bl #0x3180ca0
0x06A7392C: e1031aaa  mov x1, x26
0x06A73930: e20318aa  mov x2, x24
0x06A73934: e3031faa  mov x3, xzr
0x06A73938: f40300aa  mov x20, x0
0x06A7393C: bb9b0094  bl #0x6a9a828
0x06A73940: 330200b4  cbz x19, #0x6a73984
0x06A73944: e8650090  adrp x8, #0x772f000
0x06A73948: 085547f9  ldr x8, [x8, #0xea8]
0x06A7394C: e00313aa  mov x0, x19
0x06A73950: e10314aa  mov x1, x20
0x06A73954: 020140f9  ldr x2, [x8]
0x06A73958: a33e4d97  bl #0x3dc33e4
0x06A7395C: ff0200f1  cmp x23, #0
0x06A73960: f44f55a9  ldp x20, x19, [sp, #0x150]
0x06A73964: f65754a9  ldp x22, x21, [sp, #0x140]
0x06A73968: f85f53a9  ldp x24, x23, [sp, #0x130]
0x06A7396C: fa6752a9  ldp x26, x25, [sp, #0x120]
0x06A73970: fc6f51a9  ldp x28, x27, [sp, #0x110]
0x06A73974: fd7b50a9  ldp x29, x30, [sp, #0x100]
0x06A73978: e0079f1a  cset w0, ne
0x06A7397C: ff830591  add sp, sp, #0x160
0x06A73980: c0035fd6  ret
0x06A73984: ca341c97  bl #0x3180cac

; RVA 0x6A73988 | public void .ctor() { }
; bytes=8 sha256=bcf6420a1211597467345e03348f06456491e0e6dbc4db10273ac5c81a9759c7 status=arm64_complete_bound indexed_start=True
0x06A73988: e1031faa  mov x1, xzr
0x06A7398C: 1c9bb117  b #0x56da5fc

