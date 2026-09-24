; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 33292 Merger.MergeBoardQueue.Systems.BoardQueueSystem
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A56C08 | public void Tick(TickContext context) { }
; bytes=796 sha256=ce13abbbff4d10011c010eafbca04aab83bd6a5ce41b38d180e4a8e448b13401 status=arm64_complete_bound indexed_start=True
0x06A56C08: ffc303d1  sub sp, sp, #0xf0
0x06A56C0C: fe5b00f9  str x30, [sp, #0xb0]
0x06A56C10: f85f0ca9  stp x24, x23, [sp, #0xc0]
0x06A56C14: f6570da9  stp x22, x21, [sp, #0xd0]
0x06A56C18: f44f0ea9  stp x20, x19, [sp, #0xe0]
0x06A56C1C: b5960090  adrp x21, #0x7d2a000
0x06A56C20: a8ee5739  ldrb w8, [x21, #0x5fb]
0x06A56C24: f30301aa  mov x19, x1
0x06A56C28: f40300aa  mov x20, x0
0x06A56C2C: 68030037  tbnz w8, #0, #0x6a56c98
0x06A56C30: 406300d0  adrp x0, #0x76c0000
0x06A56C34: 008847f9  ldr x0, [x0, #0xf10]
0x06A56C38: 78a71c97  bl #0x3180a18
0x06A56C3C: 006100f0  adrp x0, #0x7679000
0x06A56C40: 001044f9  ldr x0, [x0, #0x820]
0x06A56C44: 75a71c97  bl #0x3180a18
0x06A56C48: c06600d0  adrp x0, #0x7730000
0x06A56C4C: 005841f9  ldr x0, [x0, #0x2b0]
0x06A56C50: 72a71c97  bl #0x3180a18
0x06A56C54: c06600d0  adrp x0, #0x7730000
0x06A56C58: 005c41f9  ldr x0, [x0, #0x2b8]
0x06A56C5C: 6fa71c97  bl #0x3180a18
0x06A56C60: c06600d0  adrp x0, #0x7730000
0x06A56C64: 006041f9  ldr x0, [x0, #0x2c0]
0x06A56C68: 6ca71c97  bl #0x3180a18
0x06A56C6C: c06600d0  adrp x0, #0x7730000
0x06A56C70: 006441f9  ldr x0, [x0, #0x2c8]
0x06A56C74: 69a71c97  bl #0x3180a18
0x06A56C78: c06600d0  adrp x0, #0x7730000
0x06A56C7C: 006841f9  ldr x0, [x0, #0x2d0]
0x06A56C80: 66a71c97  bl #0x3180a18
0x06A56C84: c06600d0  adrp x0, #0x7730000
0x06A56C88: 006c41f9  ldr x0, [x0, #0x2d8]
0x06A56C8C: 63a71c97  bl #0x3180a18
0x06A56C90: 28008052  movz w8, #0x1
0x06A56C94: a8ee1739  strb w8, [x21, #0x5fb]
0x06A56C98: ff5f00f9  str xzr, [sp, #0xb8]
0x06A56C9C: ff7f0aa9  stp xzr, xzr, [sp, #0xa0]
0x06A56CA0: ff4f00f9  str xzr, [sp, #0x98]
0x06A56CA4: ff9700b9  str wzr, [sp, #0x94]
0x06A56CA8: ff7f08a9  stp xzr, xzr, [sp, #0x80]
0x06A56CAC: ff7f00b9  str wzr, [sp, #0x7c]
0x06A56CB0: 600640f9  ldr x0, [x19, #8]
0x06A56CB4: 601300b4  cbz x0, #0x6a56f20
0x06A56CB8: c86600d0  adrp x8, #0x7730000
0x06A56CBC: 086941f9  ldr x8, [x8, #0x2d0]
0x06A56CC0: e1e30291  add x1, sp, #0xb8
0x06A56CC4: 020140f9  ldr x2, [x8]
0x06A56CC8: d6b84d97  bl #0x3dc5020
0x06A56CCC: c0040036  tbz w0, #0, #0x6a56d64
0x06A56CD0: 600640ad  ldp q0, q1, [x19]
0x06A56CD4: e85f40f9  ldr x8, [sp, #0xb8]
0x06A56CD8: e08702ad  stp q0, q1, [sp, #0x50]
0x06A56CDC: 281200b4  cbz x8, #0x6a56f20
0x06A56CE0: 048d41a9  ldp x4, x3, [x8, #0x18]
0x06A56CE4: e08742ad  ldp q0, q1, [sp, #0x50]
0x06A56CE8: 020940f9  ldr x2, [x8, #0x10]
0x06A56CEC: e1c30091  add x1, sp, #0x30
0x06A56CF0: e5830291  add x5, sp, #0xa0
0x06A56CF4: e6630291  add x6, sp, #0x98
0x06A56CF8: e7530291  add x7, sp, #0x94
0x06A56CFC: e00314aa  mov x0, x20
0x06A56D00: e08701ad  stp q0, q1, [sp, #0x30]
0x06A56D04: 88000094  bl #0x6a56f24
0x06A56D08: 00100036  tbz w0, #0, #0x6a56f08
0x06A56D0C: 961640f9  ldr x22, [x20, #0x28]
0x06A56D10: 961000b4  cbz x22, #0x6a56f20
0x06A56D14: 4a6300d0  adrp x10, #0x76c0000
0x06A56D18: 730a40f9  ldr x19, [x19, #0x10]
0x06A56D1C: c80240f9  ldr x8, [x22]
0x06A56D20: f4d749a9  ldp x20, x21, [sp, #0x98]
0x06A56D24: 4a8947f9  ldr x10, [x10, #0xf10]
0x06A56D28: 095d4279  ldrh w9, [x8, #0x12e]
0x06A56D2C: 410140f9  ldr x1, [x10]
0x06A56D30: 290100b4  cbz x9, #0x6a56d54
0x06A56D34: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A56D38: 4a210091  add x10, x10, #8
0x06A56D3C: 4b815ff8  ldur x11, [x10, #-8]
0x06A56D40: 7f0101eb  cmp x11, x1
0x06A56D44: 40050054  b.eq #0x6a56dec
0x06A56D48: 290500f1  subs x9, x9, #1
0x06A56D4C: 4a410091  add x10, x10, #0x10
0x06A56D50: 61ffff54  b.ne #0x6a56d3c
0x06A56D54: 42008052  movz w2, #0x2
0x06A56D58: e00316aa  mov x0, x22
0x06A56D5C: 6dff1b97  bl #0x3156b10
0x06A56D60: 27000014  b #0x6a56dfc
0x06A56D64: 600640f9  ldr x0, [x19, #8]
0x06A56D68: c00d00b4  cbz x0, #0x6a56f20
0x06A56D6C: c86600d0  adrp x8, #0x7730000
0x06A56D70: 086d41f9  ldr x8, [x8, #0x2d8]
0x06A56D74: e1a30291  add x1, sp, #0xa8
0x06A56D78: 020140f9  ldr x2, [x8]
0x06A56D7C: a9b84d97  bl #0x3dc5020
0x06A56D80: 400c0036  tbz w0, #0, #0x6a56f08
0x06A56D84: 600640ad  ldp q0, q1, [x19]
0x06A56D88: e85740f9  ldr x8, [sp, #0xa8]
0x06A56D8C: e08702ad  stp q0, q1, [sp, #0x50]
0x06A56D90: 880c00b4  cbz x8, #0x6a56f20
0x06A56D94: 080d40f9  ldr x8, [x8, #0x18]
0x06A56D98: 480c00b4  cbz x8, #0x6a56f20
0x06A56D9C: 150940f9  ldr x21, [x8, #0x10]
0x06A56DA0: 150c00b4  cbz x21, #0x6a56f20
0x06A56DA4: 0a6100f0  adrp x10, #0x7679000
0x06A56DA8: a80240f9  ldr x8, [x21]
0x06A56DAC: 4a1144f9  ldr x10, [x10, #0x820]
0x06A56DB0: 095d4279  ldrh w9, [x8, #0x12e]
0x06A56DB4: 410140f9  ldr x1, [x10]
0x06A56DB8: 290100b4  cbz x9, #0x6a56ddc
0x06A56DBC: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A56DC0: 4a210091  add x10, x10, #8
0x06A56DC4: 4b815ff8  ldur x11, [x10, #-8]
0x06A56DC8: 7f0101eb  cmp x11, x1
0x06A56DCC: 40040054  b.eq #0x6a56e54
0x06A56DD0: 290500f1  subs x9, x9, #1
0x06A56DD4: 4a410091  add x10, x10, #0x10
0x06A56DD8: 61ffff54  b.ne #0x6a56dc4
0x06A56DDC: e00315aa  mov x0, x21
0x06A56DE0: e2031f2a  mov w2, wzr
0x06A56DE4: 4bff1b97  bl #0x3156b10
0x06A56DE8: 1e000014  b #0x6a56e60
0x06A56DEC: 490140b9  ldr w9, [x10]
0x06A56DF0: 29090011  add w9, w9, #2
0x06A56DF4: 08d1298b  add x8, x8, w9, sxtw #4
0x06A56DF8: 00e10491  add x0, x8, #0x138
0x06A56DFC: 080440a9  ldp x8, x1, [x0]
0x06A56E00: e00316aa  mov x0, x22
0x06A56E04: 00013fd6  blr x8
0x06A56E08: c86600d0  adrp x8, #0x7730000
0x06A56E0C: f79740b9  ldr w23, [sp, #0x94]
0x06A56E10: 085941f9  ldr x8, [x8, #0x2b0]
0x06A56E14: f80300aa  mov x24, x0
0x06A56E18: 080140f9  ldr x8, [x8]
0x06A56E1C: e00308aa  mov x0, x8
0x06A56E20: a0a71c97  bl #0x3180ca0
0x06A56E24: e10315aa  mov x1, x21
0x06A56E28: e20314aa  mov x2, x20
0x06A56E2C: e30318aa  mov x3, x24
0x06A56E30: e403172a  mov w4, w23
0x06A56E34: f60300aa  mov x22, x0
0x06A56E38: ff000094  bl #0x6a57234
0x06A56E3C: 330700b4  cbz x19, #0x6a56f20
0x06A56E40: c86600d0  adrp x8, #0x7730000
0x06A56E44: 086141f9  ldr x8, [x8, #0x2c0]
0x06A56E48: e00313aa  mov x0, x19
0x06A56E4C: e10316aa  mov x1, x22
0x06A56E50: 2c000014  b #0x6a56f00
0x06A56E54: 490180b9  ldrsw x9, [x10]
0x06A56E58: 0811098b  add x8, x8, x9, lsl #4
0x06A56E5C: 00e10491  add x0, x8, #0x138
0x06A56E60: 080440a9  ldp x8, x1, [x0]
0x06A56E64: e00315aa  mov x0, x21
0x06A56E68: 00013fd6  blr x8
0x06A56E6C: e85740f9  ldr x8, [sp, #0xa8]
0x06A56E70: 880500b4  cbz x8, #0x6a56f20
0x06A56E74: 090d40f9  ldr x9, [x8, #0x18]
0x06A56E78: 490500b4  cbz x9, #0x6a56f20
0x06A56E7C: 030940f9  ldr x3, [x8, #0x10]
0x06A56E80: e08742ad  ldp q0, q1, [sp, #0x50]
0x06A56E84: 240d40f9  ldr x4, [x9, #0x18]
0x06A56E88: e20300aa  mov x2, x0
0x06A56E8C: e1430091  add x1, sp, #0x10
0x06A56E90: e5230291  add x5, sp, #0x88
0x06A56E94: e6030291  add x6, sp, #0x80
0x06A56E98: e7f30191  add x7, sp, #0x7c
0x06A56E9C: e00314aa  mov x0, x20
0x06A56EA0: e08700ad  stp q0, q1, [sp, #0x10]
0x06A56EA4: 20000094  bl #0x6a56f24
0x06A56EA8: 00030036  tbz w0, #0, #0x6a56f08
0x06A56EAC: e85740f9  ldr x8, [sp, #0xa8]
0x06A56EB0: 880300b4  cbz x8, #0x6a56f20
0x06A56EB4: 170d40f9  ldr x23, [x8, #0x18]
0x06A56EB8: c86600d0  adrp x8, #0x7730000
0x06A56EBC: 730a40f9  ldr x19, [x19, #0x10]
0x06A56EC0: f55b48a9  ldp x21, x22, [sp, #0x80]
0x06A56EC4: f87f40b9  ldr w24, [sp, #0x7c]
0x06A56EC8: 085d41f9  ldr x8, [x8, #0x2b8]
0x06A56ECC: 000140f9  ldr x0, [x8]
0x06A56ED0: 74a71c97  bl #0x3180ca0
0x06A56ED4: e10316aa  mov x1, x22
0x06A56ED8: e20315aa  mov x2, x21
0x06A56EDC: e30317aa  mov x3, x23
0x06A56EE0: e403182a  mov w4, w24
0x06A56EE4: f40300aa  mov x20, x0
0x06A56EE8: ee000094  bl #0x6a572a0
0x06A56EEC: b30100b4  cbz x19, #0x6a56f20
0x06A56EF0: c86600d0  adrp x8, #0x7730000
0x06A56EF4: 086541f9  ldr x8, [x8, #0x2c8]
0x06A56EF8: e00313aa  mov x0, x19
0x06A56EFC: e10314aa  mov x1, x20
0x06A56F00: 020140f9  ldr x2, [x8]
0x06A56F04: 38b14d97  bl #0x3dc33e4
0x06A56F08: f44f4ea9  ldp x20, x19, [sp, #0xe0]
0x06A56F0C: f6574da9  ldp x22, x21, [sp, #0xd0]
0x06A56F10: f85f4ca9  ldp x24, x23, [sp, #0xc0]
0x06A56F14: fe5b40f9  ldr x30, [sp, #0xb0]
0x06A56F18: ffc30391  add sp, sp, #0xf0
0x06A56F1C: c0035fd6  ret
0x06A56F20: 63a71c97  bl #0x3180cac

; RVA 0x6A56F24 | private bool TrySpawnEntityFromQueue(TickContext context, string itemName, IMergeItem mergeItem, ItemPayloadBase itemPayload, out Entity entity, out ItemAnalyticsData analyticsData, out int position) { }
; bytes=784 sha256=1ca58439be3e69a6a111a7a89afa3db28f1f2899d460373ab50e441e9b656d23 status=arm64_complete_bound indexed_start=True
0x06A56F24: ffc302d1  sub sp, sp, #0xb0
0x06A56F28: fd7b05a9  stp x29, x30, [sp, #0x50]
0x06A56F2C: fc6f06a9  stp x28, x27, [sp, #0x60]
0x06A56F30: fa6707a9  stp x26, x25, [sp, #0x70]
0x06A56F34: f85f08a9  stp x24, x23, [sp, #0x80]
0x06A56F38: f65709a9  stp x22, x21, [sp, #0x90]
0x06A56F3C: f44f0aa9  stp x20, x19, [sp, #0xa0]
0x06A56F40: b7960090  adrp x23, #0x7d2a000
0x06A56F44: e8f25739  ldrb w8, [x23, #0x5fc]
0x06A56F48: fa0307aa  mov x26, x7
0x06A56F4C: f30306aa  mov x19, x6
0x06A56F50: f40305aa  mov x20, x5
0x06A56F54: f90304aa  mov x25, x4
0x06A56F58: fb0303aa  mov x27, x3
0x06A56F5C: f80302aa  mov x24, x2
0x06A56F60: f50301aa  mov x21, x1
0x06A56F64: f60300aa  mov x22, x0
0x06A56F68: 48020037  tbnz w8, #0, #0x6a56fb0
0x06A56F6C: 406300f0  adrp x0, #0x76c1000
0x06A56F70: 005843f9  ldr x0, [x0, #0x6b0]
0x06A56F74: a9a61c97  bl #0x3180a18
0x06A56F78: 40610090  adrp x0, #0x767e000
0x06A56F7C: 00a442f9  ldr x0, [x0, #0x548]
0x06A56F80: a6a61c97  bl #0x3180a18
0x06A56F84: c06600b0  adrp x0, #0x772f000
0x06A56F88: 003c47f9  ldr x0, [x0, #0xe78]
0x06A56F8C: a3a61c97  bl #0x3180a18
0x06A56F90: c06600b0  adrp x0, #0x772f000
0x06A56F94: 005447f9  ldr x0, [x0, #0xea8]
0x06A56F98: a0a61c97  bl #0x3180a18
0x06A56F9C: c05f00b0  adrp x0, #0x764f000
0x06A56FA0: 00ac40f9  ldr x0, [x0, #0x158]
0x06A56FA4: 9da61c97  bl #0x3180a18
0x06A56FA8: 28008052  movz w8, #0x1
0x06A56FAC: e8f21739  strb w8, [x23, #0x5fc]
0x06A56FB0: e00314aa  mov x0, x20
0x06A56FB4: e1031faa  mov x1, xzr
0x06A56FB8: 9f0200f9  str xzr, [x20]
0x06A56FBC: 82a61c97  bl #0x31809c4
0x06A56FC0: e00313aa  mov x0, x19
0x06A56FC4: e1031faa  mov x1, xzr
0x06A56FC8: 7f0200f9  str xzr, [x19]
0x06A56FCC: 7ea61c97  bl #0x31809c4
0x06A56FD0: a10240ad  ldp q1, q0, [x21]
0x06A56FD4: e1c30091  add x1, sp, #0x30
0x06A56FD8: e00316aa  mov x0, x22
0x06A56FDC: e2031aaa  mov x2, x26
0x06A56FE0: e18301ad  stp q1, q0, [sp, #0x30]
0x06A56FE4: ca000094  bl #0x6a5730c
0x06A56FE8: f703002a  mov w23, w0
0x06A56FEC: 00110036  tbz w0, #0, #0x6a5720c
0x06A56FF0: f80700f9  str x24, [sp, #8]
0x06A56FF4: 7b0200b4  cbz x27, #0x6a57040
0x06A56FF8: 4a610090  adrp x10, #0x767e000
0x06A56FFC: 680340f9  ldr x8, [x27]
0x06A57000: dbdd1d14  b #0x71ce76c
0x06A57004: 095d4279  ldrh w9, [x8, #0x12e]
0x06A57008: 410140f9  ldr x1, [x10]
0x06A5700C: 290100b4  cbz x9, #0x6a57030
0x06A57010: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A57014: 4a210091  add x10, x10, #8
0x06A57018: 4b815ff8  ldur x11, [x10, #-8]
0x06A5701C: 7f0101eb  cmp x11, x1
0x06A57020: 40010054  b.eq #0x6a57048
0x06A57024: 290500f1  subs x9, x9, #1
0x06A57028: 4a410091  add x10, x10, #0x10
0x06A5702C: 61ffff54  b.ne #0x6a57018
0x06A57030: c2038052  movz w2, #0x1e
0x06A57034: e0031baa  mov x0, x27
0x06A57038: b6fe1b97  bl #0x3156b10
0x06A5703C: 07000014  b #0x6a57058
0x06A57040: fc031faa  mov x28, xzr
0x06A57044: 09000014  b #0x6a57068
0x06A57048: 490140b9  ldr w9, [x10]
0x06A5704C: 29790011  add w9, w9, #0x1e
0x06A57050: 08d1298b  add x8, x8, w9, sxtw #4
0x06A57054: 00e10491  add x0, x8, #0x138
0x06A57058: 080440a9  ldp x8, x1, [x0]
0x06A5705C: e0031baa  mov x0, x27
0x06A57060: 00013fd6  blr x8
0x06A57064: fc0300aa  mov x28, x0
0x06A57068: db0e40f9  ldr x27, [x22, #0x18]
0x06A5706C: 3f0300f1  cmp x25, #0
0x06A57070: fd03949a  csel x29, xzr, x20, eq
0x06A57074: 98029f9a  csel x24, x20, xzr, eq
0x06A57078: db0d00b4  cbz x27, #0x6a57230
0x06A5707C: 496300d0  adrp x9, #0x76c1000
0x06A57080: 680340f9  ldr x8, [x27]
0x06A57084: 5a0340b9  ldr w26, [x26]
0x06A57088: 295943f9  ldr x9, [x9, #0x6b0]
0x06A5708C: 210140f9  ldr x1, [x9]
0x06A57090: 095d4279  ldrh w9, [x8, #0x12e]
0x06A57094: d90100b4  cbz x25, #0x6a570cc
0x06A57098: 29010034  cbz w9, #0x6a570bc
0x06A5709C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A570A0: 4a210091  add x10, x10, #8
0x06A570A4: 4b815ff8  ldur x11, [x10, #-8]
0x06A570A8: 7f0101eb  cmp x11, x1
0x06A570AC: a0020054  b.eq #0x6a57100
0x06A570B0: 290500f1  subs x9, x9, #1
0x06A570B4: 4a410091  add x10, x10, #0x10
0x06A570B8: 61ffff54  b.ne #0x6a570a4
0x06A570BC: 42008052  movz w2, #0x2
0x06A570C0: e0031baa  mov x0, x27
0x06A570C4: 93fe1b97  bl #0x3156b10
0x06A570C8: 12000014  b #0x6a57110
0x06A570CC: 29010034  cbz w9, #0x6a570f0
0x06A570D0: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A570D4: 4a210091  add x10, x10, #8
0x06A570D8: 4b815ff8  ldur x11, [x10, #-8]
0x06A570DC: 7f0101eb  cmp x11, x1
0x06A570E0: 60020054  b.eq #0x6a5712c
0x06A570E4: 290500f1  subs x9, x9, #1
0x06A570E8: 4a410091  add x10, x10, #0x10
0x06A570EC: 61ffff54  b.ne #0x6a570d8
0x06A570F0: 22008052  movz w2, #0x1
0x06A570F4: e0031baa  mov x0, x27
0x06A570F8: 86fe1b97  bl #0x3156b10
0x06A570FC: 10000014  b #0x6a5713c
0x06A57100: 490140b9  ldr w9, [x10]
0x06A57104: 29090011  add w9, w9, #2
0x06A57108: 08d1298b  add x8, x8, w9, sxtw #4
0x06A5710C: 00e10491  add x0, x8, #0x138
0x06A57110: 080c40a9  ldp x8, x3, [x0]
0x06A57114: e0031baa  mov x0, x27
0x06A57118: e10319aa  mov x1, x25
0x06A5711C: e2031a2a  mov w2, w26
0x06A57120: 00013fd6  blr x8
0x06A57124: e10300aa  mov x1, x0
0x06A57128: 0f000014  b #0x6a57164
0x06A5712C: 490140b9  ldr w9, [x10]
0x06A57130: 29050011  add w9, w9, #1
0x06A57134: 08d1298b  add x8, x8, w9, sxtw #4
0x06A57138: 00e10491  add x0, x8, #0x138
0x06A5713C: 081840a9  ldp x8, x6, [x0]
0x06A57140: e10740f9  ldr x1, [sp, #8]
0x06A57144: 03048052  movz w3, #0x20
0x06A57148: e0031baa  mov x0, x27
0x06A5714C: e2031a2a  mov w2, w26
0x06A57150: e4031f2a  mov w4, wzr
0x06A57154: e5031caa  mov x5, x28
0x06A57158: 00013fd6  blr x8
0x06A5715C: e10300aa  mov x1, x0
0x06A57160: fd0318aa  mov x29, x24
0x06A57164: e0031daa  mov x0, x29
0x06A57168: a10300f9  str x1, [x29]
0x06A5716C: 16a61c97  bl #0x31809c4
0x06A57170: a10240ad  ldp q1, q0, [x21]
0x06A57174: e0430091  add x0, sp, #0x10
0x06A57178: e2031faa  mov x2, xzr
0x06A5717C: e3031faa  mov x3, xzr
0x06A57180: e18300ad  stp q1, q0, [sp, #0x10]
0x06A57184: 810240f9  ldr x1, [x20]
0x06A57188: 36070194  bl #0x6a98e60
0x06A5718C: c85f0090  adrp x8, #0x764f000
0x06A57190: 800240f9  ldr x0, [x20]
0x06A57194: c11240f9  ldr x1, [x22, #0x20]
0x06A57198: 08ad40f9  ldr x8, [x8, #0x158]
0x06A5719C: e5031faa  mov x5, xzr
0x06A571A0: 020140f9  ldr x2, [x8]
0x06A571A4: e30302aa  mov x3, x2
0x06A571A8: e40302aa  mov x4, x2
0x06A571AC: e22f0194  bl #0x6aa3134
0x06A571B0: e10300aa  mov x1, x0
0x06A571B4: 600200f9  str x0, [x19]
0x06A571B8: e00313aa  mov x0, x19
0x06A571BC: 02a61c97  bl #0x31809c4
0x06A571C0: c8660090  adrp x8, #0x772f000
0x06A571C4: b50a40f9  ldr x21, [x21, #0x10]
0x06A571C8: 940240f9  ldr x20, [x20]
0x06A571CC: 760240f9  ldr x22, [x19]
0x06A571D0: 083d47f9  ldr x8, [x8, #0xe78]
0x06A571D4: 000140f9  ldr x0, [x8]
0x06A571D8: b2a61c97  bl #0x3180ca0
0x06A571DC: e10314aa  mov x1, x20
0x06A571E0: e20316aa  mov x2, x22
0x06A571E4: e3031faa  mov x3, xzr
0x06A571E8: f30300aa  mov x19, x0
0x06A571EC: 8f0d0194  bl #0x6a9a828
0x06A571F0: 150200b4  cbz x21, #0x6a57230
0x06A571F4: c8660090  adrp x8, #0x772f000
0x06A571F8: 085547f9  ldr x8, [x8, #0xea8]
0x06A571FC: e00315aa  mov x0, x21
0x06A57200: e10313aa  mov x1, x19
0x06A57204: 020140f9  ldr x2, [x8]
0x06A57208: 77b04d97  bl #0x3dc33e4
0x06A5720C: e0020012  and w0, w23, #1
0x06A57210: f44f4aa9  ldp x20, x19, [sp, #0xa0]
0x06A57214: f65749a9  ldp x22, x21, [sp, #0x90]
0x06A57218: f85f48a9  ldp x24, x23, [sp, #0x80]
0x06A5721C: fa6747a9  ldp x26, x25, [sp, #0x70]
0x06A57220: fc6f46a9  ldp x28, x27, [sp, #0x60]
0x06A57224: fd7b45a9  ldp x29, x30, [sp, #0x50]
0x06A57228: ffc30291  add sp, sp, #0xb0
0x06A5722C: c0035fd6  ret
0x06A57230: 9fa61c97  bl #0x3180cac

; RVA 0x6A5730C | private bool TryFindEmptyPositionUsingModel(TickContext context, out int emptyPosition) { }
; bytes=676 sha256=6642c2dada435cbacd9c20b51cd049f9c01b2510cee455273e4161ec66392001 status=arm64_complete_bound indexed_start=True
0x06A5730C: ff0303d1  sub sp, sp, #0xc0
0x06A57310: fe3300f9  str x30, [sp, #0x60]
0x06A57314: fc6f07a9  stp x28, x27, [sp, #0x70]
0x06A57318: fa6708a9  stp x26, x25, [sp, #0x80]
0x06A5731C: f85f09a9  stp x24, x23, [sp, #0x90]
0x06A57320: f6570aa9  stp x22, x21, [sp, #0xa0]
0x06A57324: f44f0ba9  stp x20, x19, [sp, #0xb0]
0x06A57328: 9c9600f0  adrp x28, #0x7d2a000
0x06A5732C: db660090  adrp x27, #0x772f000
0x06A57330: da660090  adrp x26, #0x772f000
0x06A57334: d6660090  adrp x22, #0x772f000
0x06A57338: d9660090  adrp x25, #0x772f000
0x06A5733C: d7660090  adrp x23, #0x772f000
0x06A57340: d86600b0  adrp x24, #0x7730000
0x06A57344: 7b2b47f9  ldr x27, [x27, #0xe50]
0x06A57348: 88f75739  ldrb w8, [x28, #0x5fd]
0x06A5734C: 5a3747f9  ldr x26, [x26, #0xe68]
0x06A57350: d62647f9  ldr x22, [x22, #0xe48]
0x06A57354: 395347f9  ldr x25, [x25, #0xea0]
0x06A57358: f74e47f9  ldr x23, [x23, #0xe98]
0x06A5735C: 187341f9  ldr x24, [x24, #0x2e0]
0x06A57360: f30302aa  mov x19, x2
0x06A57364: f50301aa  mov x21, x1
0x06A57368: f40300aa  mov x20, x0
0x06A5736C: 88040037  tbnz w8, #0, #0x6a573fc
0x06A57370: c0660090  adrp x0, #0x772f000
0x06A57374: 002447f9  ldr x0, [x0, #0xe48]
0x06A57378: a8a51c97  bl #0x3180a18
0x06A5737C: c0660090  adrp x0, #0x772f000
0x06A57380: 002847f9  ldr x0, [x0, #0xe50]
0x06A57384: a5a51c97  bl #0x3180a18
0x06A57388: c0660090  adrp x0, #0x772f000
0x06A5738C: 003047f9  ldr x0, [x0, #0xe60]
0x06A57390: a2a51c97  bl #0x3180a18
0x06A57394: 406300d0  adrp x0, #0x76c1000
0x06A57398: 007c46f9  ldr x0, [x0, #0xcf8]
0x06A5739C: 9fa51c97  bl #0x3180a18
0x06A573A0: c0660090  adrp x0, #0x772f000
0x06A573A4: 003447f9  ldr x0, [x0, #0xe68]
0x06A573A8: 9ca51c97  bl #0x3180a18
0x06A573AC: c0660090  adrp x0, #0x772f000
0x06A573B0: 003847f9  ldr x0, [x0, #0xe70]
0x06A573B4: 99a51c97  bl #0x3180a18
0x06A573B8: 406300d0  adrp x0, #0x76c1000
0x06A573BC: 002047f9  ldr x0, [x0, #0xe40]
0x06A573C0: 96a51c97  bl #0x3180a18
0x06A573C4: c0660090  adrp x0, #0x772f000
0x06A573C8: 004c47f9  ldr x0, [x0, #0xe98]
0x06A573CC: 93a51c97  bl #0x3180a18
0x06A573D0: c0660090  adrp x0, #0x772f000
0x06A573D4: 005047f9  ldr x0, [x0, #0xea0]
0x06A573D8: 90a51c97  bl #0x3180a18
0x06A573DC: c06600b0  adrp x0, #0x7730000
0x06A573E0: 007441f9  ldr x0, [x0, #0x2e8]
0x06A573E4: 8da51c97  bl #0x3180a18
0x06A573E8: c06600b0  adrp x0, #0x7730000
0x06A573EC: 007041f9  ldr x0, [x0, #0x2e0]
0x06A573F0: 8aa51c97  bl #0x3180a18
0x06A573F4: 28008052  movz w8, #0x1
0x06A573F8: 88f71739  strb w8, [x28, #0x5fd]
0x06A573FC: 00e4006f  movi v0.2d, #0000000000000000
0x06A57400: e00301ad  stp q0, q0, [sp, #0x20]
0x06A57404: a10240ad  ldp q1, q0, [x21]
0x06A57408: 600340f9  ldr x0, [x27]
0x06A5740C: e10300ad  stp q1, q0, [sp]
0x06A57410: 170a4797  bl #0x3c19c6c
0x06A57414: 480340f9  ldr x8, [x26]
0x06A57418: f50300aa  mov x21, x0
0x06A5741C: e00308aa  mov x0, x8
0x06A57420: 20a61c97  bl #0x3180ca0
0x06A57424: c20240f9  ldr x2, [x22]
0x06A57428: e1031faa  mov x1, xzr
0x06A5742C: e3031faa  mov x3, xzr
0x06A57430: f60300aa  mov x22, x0
0x06A57434: 35fad297  bl #0x5f15d08
0x06A57438: e00740ad  ldp q0, q1, [sp]
0x06A5743C: 230340f9  ldr x3, [x25]
0x06A57440: e8830091  add x8, sp, #0x20
0x06A57444: e0030191  add x0, sp, #0x40
0x06A57448: e10315aa  mov x1, x21
0x06A5744C: e20316aa  mov x2, x22
0x06A57450: e00702ad  stp q0, q1, [sp, #0x40]
0x06A57454: 84354c97  bl #0x3d64a64
0x06A57458: e10240f9  ldr x1, [x23]
0x06A5745C: e0830091  add x0, sp, #0x20
0x06A57460: dab96497  bl #0x4385bc8
0x06A57464: 080340f9  ldr x8, [x24]
0x06A57468: f50300aa  mov x21, x0
0x06A5746C: 09e140b9  ldr w9, [x8, #0xe0]
0x06A57470: 89000035  cbnz w9, #0x6a57480
0x06A57474: e00308aa  mov x0, x8
0x06A57478: c5a51c97  bl #0x3180b8c
0x06A5747C: 080340f9  ldr x8, [x24]
0x06A57480: 095d40f9  ldr x9, [x8, #0xb8]
0x06A57484: da660090  adrp x26, #0x772f000
0x06A57488: 596300d0  adrp x25, #0x76c1000
0x06A5748C: 360540f9  ldr x22, [x9, #8]
0x06A57490: 5a3347f9  ldr x26, [x26, #0xe60]
0x06A57494: 397f46f9  ldr x25, [x25, #0xcf8]
0x06A57498: 160300b5  cbnz x22, #0x6a574f8
0x06A5749C: 09e140b9  ldr w9, [x8, #0xe0]
0x06A574A0: 89000035  cbnz w9, #0x6a574b0
0x06A574A4: e00308aa  mov x0, x8
0x06A574A8: b9a51c97  bl #0x3180b8c
0x06A574AC: 080340f9  ldr x8, [x24]
0x06A574B0: c9660090  adrp x9, #0x772f000
0x06A574B4: 085d40f9  ldr x8, [x8, #0xb8]
0x06A574B8: 293947f9  ldr x9, [x9, #0xe70]
0x06A574BC: 170140f9  ldr x23, [x8]
0x06A574C0: 200140f9  ldr x0, [x9]
0x06A574C4: f7a51c97  bl #0x3180ca0
0x06A574C8: c86600b0  adrp x8, #0x7730000
0x06A574CC: 087541f9  ldr x8, [x8, #0x2e8]
0x06A574D0: e10317aa  mov x1, x23
0x06A574D4: e3031faa  mov x3, xzr
0x06A574D8: f60300aa  mov x22, x0
0x06A574DC: 020140f9  ldr x2, [x8]
0x06A574E0: 7bda9f97  bl #0x524decc
0x06A574E4: 080340f9  ldr x8, [x24]
0x06A574E8: e10316aa  mov x1, x22
0x06A574EC: 005d40f9  ldr x0, [x8, #0xb8]
0x06A574F0: 168c00f8  str x22, [x0, #8]!
0x06A574F4: 34a51c97  bl #0x31809c4
0x06A574F8: 420340f9  ldr x2, [x26]
0x06A574FC: e00315aa  mov x0, x21
0x06A57500: e10316aa  mov x1, x22
0x06A57504: e2d74797  bl #0x3c4d48c
0x06A57508: 210340f9  ldr x1, [x25]
0x06A5750C: 35224897  bl #0x3c5fde0
0x06A57510: 950a40f9  ldr x21, [x20, #0x10]
0x06A57514: d50400b4  cbz x21, #0x6a575ac
0x06A57518: 4a6300d0  adrp x10, #0x76c1000
0x06A5751C: a80240f9  ldr x8, [x21]
0x06A57520: 4a2147f9  ldr x10, [x10, #0xe40]
0x06A57524: f40300aa  mov x20, x0
0x06A57528: 095d4279  ldrh w9, [x8, #0x12e]
0x06A5752C: 410140f9  ldr x1, [x10]
0x06A57530: 290100b4  cbz x9, #0x6a57554
0x06A57534: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A57538: 4a210091  add x10, x10, #8
0x06A5753C: 4b815ff8  ldur x11, [x10, #-8]
0x06A57540: 7f0101eb  cmp x11, x1
0x06A57544: 00010054  b.eq #0x6a57564
0x06A57548: 290500f1  subs x9, x9, #1
0x06A5754C: 4a410091  add x10, x10, #0x10
0x06A57550: 61ffff54  b.ne #0x6a5753c
0x06A57554: 22008052  movz w2, #0x1
0x06A57558: e00315aa  mov x0, x21
0x06A5755C: 6dfd1b97  bl #0x3156b10
0x06A57560: 05000014  b #0x6a57574
0x06A57564: 490140b9  ldr w9, [x10]
0x06A57568: 29050011  add w9, w9, #1
0x06A5756C: 08d1298b  add x8, x8, w9, sxtw #4
0x06A57570: 00e10491  add x0, x8, #0x138
0x06A57574: 080c40a9  ldp x8, x3, [x0]
0x06A57578: e00315aa  mov x0, x21
0x06A5757C: e10314aa  mov x1, x20
0x06A57580: e20313aa  mov x2, x19
0x06A57584: 00013fd6  blr x8
0x06A57588: f44f4ba9  ldp x20, x19, [sp, #0xb0]
0x06A5758C: f6574aa9  ldp x22, x21, [sp, #0xa0]
0x06A57590: f85f49a9  ldp x24, x23, [sp, #0x90]
0x06A57594: fa6748a9  ldp x26, x25, [sp, #0x80]
0x06A57598: fc6f47a9  ldp x28, x27, [sp, #0x70]
0x06A5759C: fe3340f9  ldr x30, [sp, #0x60]
0x06A575A0: 00000012  and w0, w0, #1
0x06A575A4: ff030391  add sp, sp, #0xc0
0x06A575A8: c0035fd6  ret
0x06A575AC: c0a51c97  bl #0x3180cac

; RVA 0x6A575B0 | public void .ctor() { }
; bytes=8 sha256=fc0b033e4100dd004c9d29fba8ab791583e858ef875ba2750ccb90aad366af9d status=arm64_complete_bound indexed_start=True
0x06A575B0: e1031faa  mov x1, xzr
0x06A575B4: 120cb217  b #0x56da5fc

