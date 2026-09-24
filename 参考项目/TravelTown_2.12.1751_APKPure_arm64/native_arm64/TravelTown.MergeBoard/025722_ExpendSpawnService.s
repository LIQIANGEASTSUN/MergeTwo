; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25722 Merger.MergeBoard.Utils.ExpendSpawnService
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A4D77C | public void TrySpawnExpendedItems(Entity sourceEntity, TickContext context, IEntityFactory entityFactory, IMergeBoardLayout layout, ExpendableComponent expendableComponent, int sourcePosition) { }
; bytes=2176 sha256=6f973186af6b5b15820bb768818f78a01a23fa212762e71b34af93b65be97d72 status=arm64_complete_bound indexed_start=True
0x06A4D77C: ff0307d1  sub sp, sp, #0x1c0
0x06A4D780: fd7b16a9  stp x29, x30, [sp, #0x160]
0x06A4D784: fc6f17a9  stp x28, x27, [sp, #0x170]
0x06A4D788: fa6718a9  stp x26, x25, [sp, #0x180]
0x06A4D78C: f85f19a9  stp x24, x23, [sp, #0x190]
0x06A4D790: f6571aa9  stp x22, x21, [sp, #0x1a0]
0x06A4D794: f44f1ba9  stp x20, x19, [sp, #0x1b0]
0x06A4D798: f39600b0  adrp x19, #0x7d2a000
0x06A4D79C: 68965639  ldrb w8, [x19, #0x5a5]
0x06A4D7A0: f503062a  mov w21, w6
0x06A4D7A4: fc0305aa  mov x28, x5
0x06A4D7A8: fb0304aa  mov x27, x4
0x06A4D7AC: f40303aa  mov x20, x3
0x06A4D7B0: f60302aa  mov x22, x2
0x06A4D7B4: e00706a9  stp x0, x1, [sp, #0x60]
0x06A4D7B8: 880a0037  tbnz w8, #0, #0x6a4d908
0x06A4D7BC: 606100b0  adrp x0, #0x767a000
0x06A4D7C0: 008841f9  ldr x0, [x0, #0x310]
0x06A4D7C4: 95cc1c97  bl #0x3180a18
0x06A4D7C8: 006700d0  adrp x0, #0x772f000
0x06A4D7CC: 002447f9  ldr x0, [x0, #0xe48]
0x06A4D7D0: 92cc1c97  bl #0x3180a18
0x06A4D7D4: 006700d0  adrp x0, #0x772f000
0x06A4D7D8: 002847f9  ldr x0, [x0, #0xe50]
0x06A4D7DC: 8fcc1c97  bl #0x3180a18
0x06A4D7E0: 006700d0  adrp x0, #0x772f000
0x06A4D7E4: 002c47f9  ldr x0, [x0, #0xe58]
0x06A4D7E8: 8ccc1c97  bl #0x3180a18
0x06A4D7EC: 006700d0  adrp x0, #0x772f000
0x06A4D7F0: 003047f9  ldr x0, [x0, #0xe60]
0x06A4D7F4: 89cc1c97  bl #0x3180a18
0x06A4D7F8: a0630090  adrp x0, #0x76c1000
0x06A4D7FC: 007c46f9  ldr x0, [x0, #0xcf8]
0x06A4D800: 86cc1c97  bl #0x3180a18
0x06A4D804: 00640090  adrp x0, #0x76cd000
0x06A4D808: 00b444f9  ldr x0, [x0, #0x968]
0x06A4D80C: 83cc1c97  bl #0x3180a18
0x06A4D810: 006700d0  adrp x0, #0x772f000
0x06A4D814: 003447f9  ldr x0, [x0, #0xe68]
0x06A4D818: 80cc1c97  bl #0x3180a18
0x06A4D81C: 006700d0  adrp x0, #0x772f000
0x06A4D820: 003847f9  ldr x0, [x0, #0xe70]
0x06A4D824: 7dcc1c97  bl #0x3180a18
0x06A4D828: a0630090  adrp x0, #0x76c1000
0x06A4D82C: 005843f9  ldr x0, [x0, #0x6b0]
0x06A4D830: 7acc1c97  bl #0x3180a18
0x06A4D834: a0630090  adrp x0, #0x76c1000
0x06A4D838: 002047f9  ldr x0, [x0, #0xe40]
0x06A4D83C: 77cc1c97  bl #0x3180a18
0x06A4D840: 006700d0  adrp x0, #0x772f000
0x06A4D844: 003c47f9  ldr x0, [x0, #0xe78]
0x06A4D848: 74cc1c97  bl #0x3180a18
0x06A4D84C: 006700d0  adrp x0, #0x772f000
0x06A4D850: 004047f9  ldr x0, [x0, #0xe80]
0x06A4D854: 71cc1c97  bl #0x3180a18
0x06A4D858: 60600090  adrp x0, #0x7659000
0x06A4D85C: 006445f9  ldr x0, [x0, #0xac8]
0x06A4D860: 6ecc1c97  bl #0x3180a18
0x06A4D864: c0600090  adrp x0, #0x7665000
0x06A4D868: 00a446f9  ldr x0, [x0, #0xd48]
0x06A4D86C: 6bcc1c97  bl #0x3180a18
0x06A4D870: 006700d0  adrp x0, #0x772f000
0x06A4D874: 004447f9  ldr x0, [x0, #0xe88]
0x06A4D878: 68cc1c97  bl #0x3180a18
0x06A4D87C: 006700d0  adrp x0, #0x772f000
0x06A4D880: 004847f9  ldr x0, [x0, #0xe90]
0x06A4D884: 65cc1c97  bl #0x3180a18
0x06A4D888: 60600090  adrp x0, #0x7659000
0x06A4D88C: 005c45f9  ldr x0, [x0, #0xab8]
0x06A4D890: 62cc1c97  bl #0x3180a18
0x06A4D894: c06600b0  adrp x0, #0x7726000
0x06A4D898: 005443f9  ldr x0, [x0, #0x6a8]
0x06A4D89C: 5fcc1c97  bl #0x3180a18
0x06A4D8A0: 006000b0  adrp x0, #0x764e000
0x06A4D8A4: 000447f9  ldr x0, [x0, #0xe08]
0x06A4D8A8: 5ccc1c97  bl #0x3180a18
0x06A4D8AC: 006700d0  adrp x0, #0x772f000
0x06A4D8B0: 004c47f9  ldr x0, [x0, #0xe98]
0x06A4D8B4: 59cc1c97  bl #0x3180a18
0x06A4D8B8: 006700d0  adrp x0, #0x772f000
0x06A4D8BC: 005047f9  ldr x0, [x0, #0xea0]
0x06A4D8C0: 56cc1c97  bl #0x3180a18
0x06A4D8C4: 006700d0  adrp x0, #0x772f000
0x06A4D8C8: 005447f9  ldr x0, [x0, #0xea8]
0x06A4D8CC: 53cc1c97  bl #0x3180a18
0x06A4D8D0: 006700d0  adrp x0, #0x772f000
0x06A4D8D4: 005847f9  ldr x0, [x0, #0xeb0]
0x06A4D8D8: 50cc1c97  bl #0x3180a18
0x06A4D8DC: 006700d0  adrp x0, #0x772f000
0x06A4D8E0: 005c47f9  ldr x0, [x0, #0xeb8]
0x06A4D8E4: 4dcc1c97  bl #0x3180a18
0x06A4D8E8: 006700d0  adrp x0, #0x772f000
0x06A4D8EC: 006047f9  ldr x0, [x0, #0xec0]
0x06A4D8F0: 4acc1c97  bl #0x3180a18
0x06A4D8F4: 006000d0  adrp x0, #0x764f000
0x06A4D8F8: 00ac40f9  ldr x0, [x0, #0x158]
0x06A4D8FC: 47cc1c97  bl #0x3180a18
0x06A4D900: 28008052  movz w8, #0x1
0x06A4D904: 68961639  strb w8, [x19, #0x5a5]
0x06A4D908: 00e4006f  movi v0.2d, #0000000000000000
0x06A4D90C: e00309ad  stp q0, q0, [sp, #0x120]
0x06A4D910: ff1f01b9  str wzr, [sp, #0x11c]
0x06A4D914: 880b40b9  ldr w8, [x28, #8]
0x06A4D918: 1f050071  cmp w8, #1
0x06A4D91C: eb350054  b.lt #0x6a4dfd8
0x06A4D920: f43b00f9  str x20, [sp, #0x70]
0x06A4D924: 086700d0  adrp x8, #0x772f000
0x06A4D928: 082947f9  ldr x8, [x8, #0xe50]
0x06A4D92C: 136700d0  adrp x19, #0x772f000
0x06A4D930: 176700d0  adrp x23, #0x772f000
0x06A4D934: 196700d0  adrp x25, #0x772f000
0x06A4D938: 1a6700d0  adrp x26, #0x772f000
0x06A4D93C: 733647f9  ldr x19, [x19, #0xe68]
0x06A4D940: f72647f9  ldr x23, [x23, #0xe48]
0x06A4D944: 395347f9  ldr x25, [x25, #0xea0]
0x06A4D948: c00640ad  ldp q0, q1, [x22]
0x06A4D94C: fd0316aa  mov x29, x22
0x06A4D950: 5a4f47f9  ldr x26, [x26, #0xe98]
0x06A4D954: 000140f9  ldr x0, [x8]
0x06A4D958: 166700d0  adrp x22, #0x772f000
0x06A4D95C: d66247f9  ldr x22, [x22, #0xec0]
0x06A4D960: e08706ad  stp q0, q1, [sp, #0xd0]
0x06A4D964: c2304797  bl #0x3c19c6c
0x06A4D968: 680240f9  ldr x8, [x19]
0x06A4D96C: f40300aa  mov x20, x0
0x06A4D970: e00308aa  mov x0, x8
0x06A4D974: cbcc1c97  bl #0x3180ca0
0x06A4D978: e20240f9  ldr x2, [x23]
0x06A4D97C: e1031faa  mov x1, xzr
0x06A4D980: e3031faa  mov x3, xzr
0x06A4D984: f80300aa  mov x24, x0
0x06A4D988: e020d397  bl #0x5f15d08
0x06A4D98C: e08746ad  ldp q0, q1, [sp, #0xd0]
0x06A4D990: 230340f9  ldr x3, [x25]
0x06A4D994: e8e30391  add x8, sp, #0xf8
0x06A4D998: e0030591  add x0, sp, #0x140
0x06A4D99C: e10314aa  mov x1, x20
0x06A4D9A0: e20318aa  mov x2, x24
0x06A4D9A4: e0070aad  stp q0, q1, [sp, #0x140]
0x06A4D9A8: 2f5c4c97  bl #0x3d64a64
0x06A4D9AC: e8270091  add x8, sp, #9
0x06A4D9B0: e083cf3c  ldur q0, [sp, #0xf8]
0x06A4D9B4: 01f1cf3c  ldur q1, [x8, #0xff]
0x06A4D9B8: 410340f9  ldr x1, [x26]
0x06A4D9BC: e0830491  add x0, sp, #0x120
0x06A4D9C0: e00709ad  stp q0, q1, [sp, #0x120]
0x06A4D9C4: 81e06497  bl #0x4385bc8
0x06A4D9C8: c80240f9  ldr x8, [x22]
0x06A4D9CC: f40300aa  mov x20, x0
0x06A4D9D0: 09e140b9  ldr w9, [x8, #0xe0]
0x06A4D9D4: 89000035  cbnz w9, #0x6a4d9e4
0x06A4D9D8: e00308aa  mov x0, x8
0x06A4D9DC: 6ccc1c97  bl #0x3180b8c
0x06A4D9E0: c80240f9  ldr x8, [x22]
0x06A4D9E4: 095d40f9  ldr x9, [x8, #0xb8]
0x06A4D9E8: 176700d0  adrp x23, #0x772f000
0x06A4D9EC: b3630090  adrp x19, #0x76c1000
0x06A4D9F0: fa031daa  mov x26, x29
0x06A4D9F4: 390540f9  ldr x25, [x9, #8]
0x06A4D9F8: f73247f9  ldr x23, [x23, #0xe60]
0x06A4D9FC: 737e46f9  ldr x19, [x19, #0xcf8]
0x06A4DA00: 190300b5  cbnz x25, #0x6a4da60
0x06A4DA04: 09e140b9  ldr w9, [x8, #0xe0]
0x06A4DA08: 89000035  cbnz w9, #0x6a4da18
0x06A4DA0C: e00308aa  mov x0, x8
0x06A4DA10: 5fcc1c97  bl #0x3180b8c
0x06A4DA14: c80240f9  ldr x8, [x22]
0x06A4DA18: 096700d0  adrp x9, #0x772f000
0x06A4DA1C: 085d40f9  ldr x8, [x8, #0xb8]
0x06A4DA20: 293947f9  ldr x9, [x9, #0xe70]
0x06A4DA24: 180140f9  ldr x24, [x8]
0x06A4DA28: 200140f9  ldr x0, [x9]
0x06A4DA2C: 9dcc1c97  bl #0x3180ca0
0x06A4DA30: 086700d0  adrp x8, #0x772f000
0x06A4DA34: 085d47f9  ldr x8, [x8, #0xeb8]
0x06A4DA38: e10318aa  mov x1, x24
0x06A4DA3C: e3031faa  mov x3, xzr
0x06A4DA40: f90300aa  mov x25, x0
0x06A4DA44: 020140f9  ldr x2, [x8]
0x06A4DA48: 2101a097  bl #0x524decc
0x06A4DA4C: c80240f9  ldr x8, [x22]
0x06A4DA50: e10319aa  mov x1, x25
0x06A4DA54: 005d40f9  ldr x0, [x8, #0xb8]
0x06A4DA58: 198c00f8  str x25, [x0, #8]!
0x06A4DA5C: dacb1c97  bl #0x31809c4
0x06A4DA60: e20240f9  ldr x2, [x23]
0x06A4DA64: e00314aa  mov x0, x20
0x06A4DA68: e10319aa  mov x1, x25
0x06A4DA6C: 88fe4797  bl #0x3c4d48c
0x06A4DA70: 610240f9  ldr x1, [x19]
0x06A4DA74: db484897  bl #0x3c5fde0
0x06A4DA78: 1b2c00b4  cbz x27, #0x6a4dff8
0x06A4DA7C: b8630090  adrp x24, #0x76c1000
0x06A4DA80: 680340f9  ldr x8, [x27]
0x06A4DA84: 182347f9  ldr x24, [x24, #0xe40]
0x06A4DA88: f63b40f9  ldr x22, [sp, #0x70]
0x06A4DA8C: fd0300aa  mov x29, x0
0x06A4DA90: 095d4279  ldrh w9, [x8, #0x12e]
0x06A4DA94: 010340f9  ldr x1, [x24]
0x06A4DA98: 290100b4  cbz x9, #0x6a4dabc
0x06A4DA9C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A4DAA0: 4a210091  add x10, x10, #8
0x06A4DAA4: 4b815ff8  ldur x11, [x10, #-8]
0x06A4DAA8: 7f0101eb  cmp x11, x1
0x06A4DAAC: 00010054  b.eq #0x6a4dacc
0x06A4DAB0: 290500f1  subs x9, x9, #1
0x06A4DAB4: 4a410091  add x10, x10, #0x10
0x06A4DAB8: 61ffff54  b.ne #0x6a4daa4
0x06A4DABC: 62008052  movz w2, #0x3
0x06A4DAC0: e0031baa  mov x0, x27
0x06A4DAC4: 13241c97  bl #0x3156b10
0x06A4DAC8: 05000014  b #0x6a4dadc
0x06A4DACC: 490140b9  ldr w9, [x10]
0x06A4DAD0: 290d0011  add w9, w9, #3
0x06A4DAD4: 08d1298b  add x8, x8, w9, sxtw #4
0x06A4DAD8: 00e10491  add x0, x8, #0x138
0x06A4DADC: 080840a9  ldp x8, x2, [x0]
0x06A4DAE0: e0031baa  mov x0, x27
0x06A4DAE4: e1031daa  mov x1, x29
0x06A4DAE8: 00013fd6  blr x8
0x06A4DAEC: 610240f9  ldr x1, [x19]
0x06A4DAF0: bc484897  bl #0x3c5fde0
0x06A4DAF4: 3d2800b4  cbz x29, #0x6a4dff8
0x06A4DAF8: 69600090  adrp x9, #0x7659000
0x06A4DAFC: 296545f9  ldr x9, [x9, #0xac8]
0x06A4DB00: aa1f40b9  ldr w10, [x29, #0x1c]
0x06A4DB04: a80b40f9  ldr x8, [x29, #0x10]
0x06A4DB08: 290140f9  ldr x9, [x9]
0x06A4DB0C: 4a050011  add w10, w10, #1
0x06A4DB10: aa1f00b9  str w10, [x29, #0x1c]
0x06A4DB14: 282700b4  cbz x8, #0x6a4dff8
0x06A4DB18: aa1b80b9  ldrsw x10, [x29, #0x18]
0x06A4DB1C: 0b1940b9  ldr w11, [x8, #0x18]
0x06A4DB20: f30300aa  mov x19, x0
0x06A4DB24: 5f010b6b  cmp w10, w11
0x06A4DB28: c2000054  b.hs #0x6a4db40
0x06A4DB2C: 49050011  add w9, w10, #1
0x06A4DB30: 08090a8b  add x8, x8, x10, lsl #2
0x06A4DB34: a91b00b9  str w9, [x29, #0x18]
0x06A4DB38: 152100b9  str w21, [x8, #0x20]
0x06A4DB3C: 07000014  b #0x6a4db58
0x06A4DB40: 281140f9  ldr x8, [x9, #0x20]
0x06A4DB44: e0031daa  mov x0, x29
0x06A4DB48: e103152a  mov w1, w21
0x06A4DB4C: 086140f9  ldr x8, [x8, #0xc0]
0x06A4DB50: 023940f9  ldr x2, [x8, #0x70]
0x06A4DB54: 51305797  bl #0x4019c98
0x06A4DB58: 132500b4  cbz x19, #0x6a4dff8
0x06A4DB5C: c8600090  adrp x8, #0x7665000
0x06A4DB60: 08a546f9  ldr x8, [x8, #0xd48]
0x06A4DB64: e00313aa  mov x0, x19
0x06A4DB68: e103152a  mov w1, w21
0x06A4DB6C: 020140f9  ldr x2, [x8]
0x06A4DB70: e2355797  bl #0x401b2f8
0x06A4DB74: 88334039  ldrb w8, [x28, #0xc]
0x06A4DB78: 88000034  cbz w8, #0x6a4db88
0x06A4DB7C: 880b40b9  ldr w8, [x28, #8]
0x06A4DB80: e87f00b9  str w8, [sp, #0x7c]
0x06A4DB84: 10000014  b #0x6a4dbc4
0x06A4DB88: 086000b0  adrp x8, #0x764e000
0x06A4DB8C: 080547f9  ldr x8, [x8, #0xe08]
0x06A4DB90: 741a40b9  ldr w20, [x19, #0x18]
0x06A4DB94: 980b40b9  ldr w24, [x28, #8]
0x06A4DB98: 000140f9  ldr x0, [x8]
0x06A4DB9C: 08e040b9  ldr w8, [x0, #0xe0]
0x06A4DBA0: 48000035  cbnz w8, #0x6a4dba8
0x06A4DBA4: facb1c97  bl #0x3180b8c
0x06A4DBA8: e003142a  mov w0, w20
0x06A4DBAC: e103182a  mov w1, w24
0x06A4DBB0: e2031faa  mov x2, xzr
0x06A4DBB4: 7326b197  bl #0x5697580
0x06A4DBB8: e07f00b9  str w0, [sp, #0x7c]
0x06A4DBBC: b8630090  adrp x24, #0x76c1000
0x06A4DBC0: 182347f9  ldr x24, [x24, #0xe40]
0x06A4DBC4: 990f40f9  ldr x25, [x28, #0x18]
0x06A4DBC8: f32f00f9  str x19, [sp, #0x58]
0x06A4DBCC: 590100b5  cbnz x25, #0x6a4dbf4
0x06A4DBD0: c86600b0  adrp x8, #0x7726000
0x06A4DBD4: 085543f9  ldr x8, [x8, #0x6a8]
0x06A4DBD8: 000140f9  ldr x0, [x8]
0x06A4DBDC: 31cc1c97  bl #0x3180ca0
0x06A4DBE0: 086700d0  adrp x8, #0x772f000
0x06A4DBE4: 084547f9  ldr x8, [x8, #0xe88]
0x06A4DBE8: f90300aa  mov x25, x0
0x06A4DBEC: 010140f9  ldr x1, [x8]
0x06A4DBF0: 12d85797  bl #0x4043c38
0x06A4DBF4: f37f40b9  ldr w19, [sp, #0x7c]
0x06A4DBF8: 7f060071  cmp w19, #1
0x06A4DBFC: eb1e0054  b.lt #0x6a4dfd8
0x06A4DC00: d91f00b4  cbz x25, #0x6a4dff8
0x06A4DC04: f7031f2a  mov w23, wzr
0x06A4DC08: ff6f03a9  stp xzr, x27, [sp, #0x30]
0x06A4DC0C: f55700b9  str w21, [sp, #0x54]
0x06A4DC10: fd7304a9  stp x29, x28, [sp, #0x40]
0x06A4DC14: f94700f9  str x25, [sp, #0x88]
0x06A4DC18: 281b40b9  ldr w8, [x25, #0x18]
0x06A4DC1C: 1f050071  cmp w8, #1
0x06A4DC20: 6b030054  b.lt #0x6a4dc8c
0x06A4DC24: 086700d0  adrp x8, #0x772f000
0x06A4DC28: 082d47f9  ldr x8, [x8, #0xe58]
0x06A4DC2C: e00319aa  mov x0, x25
0x06A4DC30: 010140f9  ldr x1, [x8]
0x06A4DC34: 9d7a4797  bl #0x3c2c6a8
0x06A4DC38: 08640090  adrp x8, #0x76cd000
0x06A4DC3C: 08b544f9  ldr x8, [x8, #0x968]
0x06A4DC40: 010140f9  ldr x1, [x8]
0x06A4DC44: e3484897  bl #0x3c5ffd0
0x06A4DC48: e10300aa  mov x1, x0
0x06A4DC4C: ec000094  bl #0x6a4dffc
0x06A4DC50: f40300aa  mov x20, x0
0x06A4DC54: e00100b4  cbz x0, #0x6a4dc90
0x06A4DC58: 686100b0  adrp x8, #0x767a000
0x06A4DC5C: 890240f9  ldr x9, [x20]
0x06A4DC60: 088941f9  ldr x8, [x8, #0x310]
0x06A4DC64: 2bc14439  ldrb w11, [x9, #0x130]
0x06A4DC68: 080140f9  ldr x8, [x8]
0x06A4DC6C: 0ac14439  ldrb w10, [x8, #0x130]
0x06A4DC70: 7f010a6b  cmp w11, w10
0x06A4DC74: c3000054  b.lo #0x6a4dc8c
0x06A4DC78: 296540f9  ldr x9, [x9, #0xc8]
0x06A4DC7C: 290d0a8b  add x9, x9, x10, lsl #3
0x06A4DC80: 29815ff8  ldur x9, [x9, #-8]
0x06A4DC84: 3f0108eb  cmp x9, x8
0x06A4DC88: 60180054  b.eq #0x6a4df94
0x06A4DC8C: f4031faa  mov x20, xzr
0x06A4DC90: f9031faa  mov x25, xzr
0x06A4DC94: e00319aa  mov x0, x25
0x06A4DC98: e1031faa  mov x1, xzr
0x06A4DC9C: 84a7aa97  bl #0x54f7aac
0x06A4DCA0: 00170037  tbnz w0, #0, #0x6a4df80
0x06A4DCA4: 680340f9  ldr x8, [x27]
0x06A4DCA8: 010340f9  ldr x1, [x24]
0x06A4DCAC: 095d4279  ldrh w9, [x8, #0x12e]
0x06A4DCB0: 290100b4  cbz x9, #0x6a4dcd4
0x06A4DCB4: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A4DCB8: 4a210091  add x10, x10, #8
0x06A4DCBC: 4b815ff8  ldur x11, [x10, #-8]
0x06A4DCC0: 7f0101eb  cmp x11, x1
0x06A4DCC4: 00010054  b.eq #0x6a4dce4
0x06A4DCC8: 290500f1  subs x9, x9, #1
0x06A4DCCC: 4a410091  add x10, x10, #0x10
0x06A4DCD0: 61ffff54  b.ne #0x6a4dcbc
0x06A4DCD4: 42008052  movz w2, #0x2
0x06A4DCD8: e0031baa  mov x0, x27
0x06A4DCDC: 8d231c97  bl #0x3156b10
0x06A4DCE0: 05000014  b #0x6a4dcf4
0x06A4DCE4: 490140b9  ldr w9, [x10]
0x06A4DCE8: 29090011  add w9, w9, #2
0x06A4DCEC: 08d1298b  add x8, x8, w9, sxtw #4
0x06A4DCF0: 00e10491  add x0, x8, #0x138
0x06A4DCF4: 081040a9  ldp x8, x4, [x0]
0x06A4DCF8: e3730491  add x3, sp, #0x11c
0x06A4DCFC: e0031baa  mov x0, x27
0x06A4DD00: e1031daa  mov x1, x29
0x06A4DD04: e203152a  mov w2, w21
0x06A4DD08: 00013fd6  blr x8
0x06A4DD0C: 80020036  tbz w0, #0, #0x6a4dd5c
0x06A4DD10: e11f41b9  ldr w1, [sp, #0x11c]
0x06A4DD14: 4102f837  tbnz w1, #0x1f, #0x6a4dd5c
0x06A4DD18: 69600090  adrp x9, #0x7659000
0x06A4DD1C: aa1f40b9  ldr w10, [x29, #0x1c]
0x06A4DD20: a80b40f9  ldr x8, [x29, #0x10]
0x06A4DD24: 296545f9  ldr x9, [x9, #0xac8]
0x06A4DD28: 4a050011  add w10, w10, #1
0x06A4DD2C: 290140f9  ldr x9, [x9]
0x06A4DD30: aa1f00b9  str w10, [x29, #0x1c]
0x06A4DD34: 281600b4  cbz x8, #0x6a4dff8
0x06A4DD38: aa1b80b9  ldrsw x10, [x29, #0x18]
0x06A4DD3C: 0b1940b9  ldr w11, [x8, #0x18]
0x06A4DD40: 5f010b6b  cmp w10, w11
0x06A4DD44: e2010054  b.hs #0x6a4dd80
0x06A4DD48: 49050011  add w9, w10, #1
0x06A4DD4C: 08090a8b  add x8, x8, x10, lsl #2
0x06A4DD50: a91b00b9  str w9, [x29, #0x18]
0x06A4DD54: 012100b9  str w1, [x8, #0x20]
0x06A4DD58: 0f000014  b #0x6a4dd94
0x06A4DD5C: 88334039  ldrb w8, [x28, #0xc]
0x06A4DD60: 08110034  cbz w8, #0x6a4df80
0x06A4DD64: 410340ad  ldp q1, q0, [x26]
0x06A4DD68: e3c30291  add x3, sp, #0xb0
0x06A4DD6C: e10314aa  mov x1, x20
0x06A4DD70: e20316aa  mov x2, x22
0x06A4DD74: e18305ad  stp q1, q0, [sp, #0xb0]
0x06A4DD78: 50010094  bl #0x6a4e2b8
0x06A4DD7C: 81000014  b #0x6a4df80
0x06A4DD80: 281140f9  ldr x8, [x9, #0x20]
0x06A4DD84: e0031daa  mov x0, x29
0x06A4DD88: 086140f9  ldr x8, [x8, #0xc0]
0x06A4DD8C: 023940f9  ldr x2, [x8, #0x70]
0x06A4DD90: c22f5797  bl #0x4019c98
0x06A4DD94: c8600090  adrp x8, #0x7665000
0x06A4DD98: e11f41b9  ldr w1, [sp, #0x11c]
0x06A4DD9C: 08a546f9  ldr x8, [x8, #0xd48]
0x06A4DDA0: e02f40f9  ldr x0, [sp, #0x58]
0x06A4DDA4: 020140f9  ldr x2, [x8]
0x06A4DDA8: 54355797  bl #0x401b2f8
0x06A4DDAC: 741200b4  cbz x20, #0x6a4dff8
0x06A4DDB0: 561200b4  cbz x22, #0x6a4dff8
0x06A4DDB4: c80240f9  ldr x8, [x22]
0x06A4DDB8: aa630090  adrp x10, #0x76c1000
0x06A4DDBC: fb1f41b9  ldr w27, [sp, #0x11c]
0x06A4DDC0: 93824039  ldrb w19, [x20, #0x20]
0x06A4DDC4: 095d4279  ldrh w9, [x8, #0x12e]
0x06A4DDC8: 4a5943f9  ldr x10, [x10, #0x6b0]
0x06A4DDCC: 410140f9  ldr x1, [x10]
0x06A4DDD0: 290100b4  cbz x9, #0x6a4ddf4
0x06A4DDD4: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A4DDD8: 4a210091  add x10, x10, #8
0x06A4DDDC: 4b815ff8  ldur x11, [x10, #-8]
0x06A4DDE0: 7f0101eb  cmp x11, x1
0x06A4DDE4: 00010054  b.eq #0x6a4de04
0x06A4DDE8: 290500f1  subs x9, x9, #1
0x06A4DDEC: 4a410091  add x10, x10, #0x10
0x06A4DDF0: 61ffff54  b.ne #0x6a4dddc
0x06A4DDF4: 22008052  movz w2, #0x1
0x06A4DDF8: e00316aa  mov x0, x22
0x06A4DDFC: 45231c97  bl #0x3156b10
0x06A4DE00: 05000014  b #0x6a4de14
0x06A4DE04: 490140b9  ldr w9, [x10]
0x06A4DE08: 29050011  add w9, w9, #1
0x06A4DE0C: 08d1298b  add x8, x8, w9, sxtw #4
0x06A4DE10: 00e10491  add x0, x8, #0x138
0x06A4DE14: 081840a9  ldp x8, x6, [x0]
0x06A4DE18: 7f020071  cmp w19, #0
0x06A4DE1C: e4079f1a  cset w4, ne
0x06A4DE20: 83008052  movz w3, #0x4
0x06A4DE24: e00316aa  mov x0, x22
0x06A4DE28: e10319aa  mov x1, x25
0x06A4DE2C: e2031b2a  mov w2, w27
0x06A4DE30: e5031faa  mov x5, xzr
0x06A4DE34: 00013fd6  blr x8
0x06A4DE38: f33740f9  ldr x19, [sp, #0x68]
0x06A4DE3C: 400740ad  ldp q0, q1, [x26]
0x06A4DE40: f90300aa  mov x25, x0
0x06A4DE44: e0430291  add x0, sp, #0x90
0x06A4DE48: e10319aa  mov x1, x25
0x06A4DE4C: e20313aa  mov x2, x19
0x06A4DE50: e3031faa  mov x3, xzr
0x06A4DE54: e08704ad  stp q0, q1, [sp, #0x90]
0x06A4DE58: 022c0194  bl #0x6a98e60
0x06A4DE5C: f53340f9  ldr x21, [sp, #0x60]
0x06A4DE60: 166000d0  adrp x22, #0x764f000
0x06A4DE64: e00313aa  mov x0, x19
0x06A4DE68: e5031faa  mov x5, xzr
0x06A4DE6C: a10a40f9  ldr x1, [x21, #0x10]
0x06A4DE70: d6ae40f9  ldr x22, [x22, #0x158]
0x06A4DE74: c20240f9  ldr x2, [x22]
0x06A4DE78: e30302aa  mov x3, x2
0x06A4DE7C: e40302aa  mov x4, x2
0x06A4DE80: ad540194  bl #0x6aa3134
0x06A4DE84: c20240f9  ldr x2, [x22]
0x06A4DE88: a10a40f9  ldr x1, [x21, #0x10]
0x06A4DE8C: e04300f9  str x0, [sp, #0x80]
0x06A4DE90: e00319aa  mov x0, x25
0x06A4DE94: e30302aa  mov x3, x2
0x06A4DE98: e40302aa  mov x4, x2
0x06A4DE9C: e5031faa  mov x5, xzr
0x06A4DEA0: a5540194  bl #0x6aa3134
0x06A4DEA4: 086700d0  adrp x8, #0x772f000
0x06A4DEA8: 5b0b40f9  ldr x27, [x26, #0x10]
0x06A4DEAC: f61f41b9  ldr w22, [sp, #0x11c]
0x06A4DEB0: 95a24039  ldrb w21, [x20, #0x28]
0x06A4DEB4: 9ca64039  ldrb w28, [x20, #0x29]
0x06A4DEB8: 9d8a4039  ldrb w29, [x20, #0x22]
0x06A4DEBC: 084147f9  ldr x8, [x8, #0xe80]
0x06A4DEC0: f40300aa  mov x20, x0
0x06A4DEC4: 080140f9  ldr x8, [x8]
0x06A4DEC8: e00308aa  mov x0, x8
0x06A4DECC: 75cb1c97  bl #0x3180ca0
0x06A4DED0: f5030039  strb w21, [sp]
0x06A4DED4: f55740b9  ldr w21, [sp, #0x54]
0x06A4DED8: e64340f9  ldr x6, [sp, #0x80]
0x06A4DEDC: 45008052  movz w5, #0x2
0x06A4DEE0: e10313aa  mov x1, x19
0x06A4DEE4: e20319aa  mov x2, x25
0x06A4DEE8: e303152a  mov w3, w21
0x06A4DEEC: e403162a  mov w4, w22
0x06A4DEF0: e70314aa  mov x7, x20
0x06A4DEF4: f80300aa  mov x24, x0
0x06A4DEF8: ff0f00f9  str xzr, [sp, #0x18]
0x06A4DEFC: fd430039  strb w29, [sp, #0x10]
0x06A4DF00: fc230039  strb w28, [sp, #8]
0x06A4DF04: e3320194  bl #0x6a9aa90
0x06A4DF08: 9b0700b4  cbz x27, #0x6a4dff8
0x06A4DF0C: 086700d0  adrp x8, #0x772f000
0x06A4DF10: 085947f9  ldr x8, [x8, #0xeb0]
0x06A4DF14: e0031baa  mov x0, x27
0x06A4DF18: e10318aa  mov x1, x24
0x06A4DF1C: 020140f9  ldr x2, [x8]
0x06A4DF20: 31d54d97  bl #0x3dc33e4
0x06A4DF24: 086700d0  adrp x8, #0x772f000
0x06A4DF28: 580b40f9  ldr x24, [x26, #0x10]
0x06A4DF2C: 083d47f9  ldr x8, [x8, #0xe78]
0x06A4DF30: 000140f9  ldr x0, [x8]
0x06A4DF34: 5bcb1c97  bl #0x3180ca0
0x06A4DF38: e10319aa  mov x1, x25
0x06A4DF3C: e20314aa  mov x2, x20
0x06A4DF40: e3031faa  mov x3, xzr
0x06A4DF44: fb0300aa  mov x27, x0
0x06A4DF48: 38320194  bl #0x6a9a828
0x06A4DF4C: fd7344a9  ldp x29, x28, [sp, #0x40]
0x06A4DF50: f37f40b9  ldr w19, [sp, #0x7c]
0x06A4DF54: 380500b4  cbz x24, #0x6a4dff8
0x06A4DF58: 086700d0  adrp x8, #0x772f000
0x06A4DF5C: 085547f9  ldr x8, [x8, #0xea8]
0x06A4DF60: e00318aa  mov x0, x24
0x06A4DF64: e1031baa  mov x1, x27
0x06A4DF68: 020140f9  ldr x2, [x8]
0x06A4DF6C: 1ed54d97  bl #0x3dc33e4
0x06A4DF70: b8630090  adrp x24, #0x76c1000
0x06A4DF74: fb1f40f9  ldr x27, [sp, #0x38]
0x06A4DF78: f63b40f9  ldr x22, [sp, #0x70]
0x06A4DF7C: 182347f9  ldr x24, [x24, #0xe40]
0x06A4DF80: f94740f9  ldr x25, [sp, #0x88]
0x06A4DF84: f7060011  add w23, w23, #1
0x06A4DF88: ff02136b  cmp w23, w19
0x06A4DF8C: 61e4ff54  b.ne #0x6a4dc18
0x06A4DF90: 12000014  b #0x6a4dfd8
0x06A4DF94: 88aa4039  ldrb w8, [x20, #0x2a]
0x06A4DF98: 68ffff35  cbnz w8, #0x6a4df84
0x06A4DF9C: 930a40f9  ldr x19, [x20, #0x10]
0x06A4DFA0: e81b40f9  ldr x8, [sp, #0x30]
0x06A4DFA4: 7f0200f1  cmp x19, #0
0x06A4DFA8: 0001939a  csel x0, x8, x19, eq
0x06A4DFAC: 130100b4  cbz x19, #0x6a4dfcc
0x06A4DFB0: 400200b4  cbz x0, #0x6a4dff8
0x06A4DFB4: 080040f9  ldr x8, [x0]
0x06A4DFB8: 09855ca9  ldp x9, x1, [x8, #0x1c8]
0x06A4DFBC: 20013fd6  blr x9
0x06A4DFC0: f90300aa  mov x25, x0
0x06A4DFC4: f31b00f9  str x19, [sp, #0x30]
0x06A4DFC8: 02000014  b #0x6a4dfd0
0x06A4DFCC: f9031faa  mov x25, xzr
0x06A4DFD0: f37f40b9  ldr w19, [sp, #0x7c]
0x06A4DFD4: 30ffff17  b #0x6a4dc94
0x06A4DFD8: f44f5ba9  ldp x20, x19, [sp, #0x1b0]
0x06A4DFDC: f6575aa9  ldp x22, x21, [sp, #0x1a0]
0x06A4DFE0: f85f59a9  ldp x24, x23, [sp, #0x190]
0x06A4DFE4: fa6758a9  ldp x26, x25, [sp, #0x180]
0x06A4DFE8: fc6f57a9  ldp x28, x27, [sp, #0x170]
0x06A4DFEC: fd7b56a9  ldp x29, x30, [sp, #0x160]
0x06A4DFF0: ff030791  add sp, sp, #0x1c0
0x06A4DFF4: c0035fd6  ret
0x06A4DFF8: 2dcb1c97  bl #0x3180cac

; RVA 0x6A4E438 | public void TransformAtSamePosition(Entity sourceEntity, TickContext context, IEntityFactory entityFactory, ExpendableComponent expendableComponent, int sourcePosition, string reason) { }
; bytes=924 sha256=f75ef9c464771eec787ab75841d13682b63de48492ef15fdbe508f7d5cfc2a89 status=arm64_complete_bound indexed_start=True
0x06A4E438: ff8302d1  sub sp, sp, #0xa0
0x06A4E43C: fd7b04a9  stp x29, x30, [sp, #0x40]
0x06A4E440: fc6f05a9  stp x28, x27, [sp, #0x50]
0x06A4E444: fa6706a9  stp x26, x25, [sp, #0x60]
0x06A4E448: f85f07a9  stp x24, x23, [sp, #0x70]
0x06A4E44C: f65708a9  stp x22, x21, [sp, #0x80]
0x06A4E450: f44f09a9  stp x20, x19, [sp, #0x90]
0x06A4E454: fa960090  adrp x26, #0x7d2a000
0x06A4E458: 1b6700b0  adrp x27, #0x772f000
0x06A4E45C: 489b5639  ldrb w8, [x26, #0x5a6]
0x06A4E460: 7b9347f9  ldr x27, [x27, #0xf20]
0x06A4E464: f90306aa  mov x25, x6
0x06A4E468: f403052a  mov w20, w5
0x06A4E46C: f80304aa  mov x24, x4
0x06A4E470: f70303aa  mov x23, x3
0x06A4E474: f30302aa  mov x19, x2
0x06A4E478: f50301aa  mov x21, x1
0x06A4E47C: f60300aa  mov x22, x0
0x06A4E480: e8040037  tbnz w8, #0, #0x6a4e51c
0x06A4E484: e06300f0  adrp x0, #0x76cd000
0x06A4E488: 00b444f9  ldr x0, [x0, #0x968]
0x06A4E48C: 63c91c97  bl #0x3180a18
0x06A4E490: 006600d0  adrp x0, #0x7710000
0x06A4E494: 003842f9  ldr x0, [x0, #0x470]
0x06A4E498: 60c91c97  bl #0x3180a18
0x06A4E49C: 006600d0  adrp x0, #0x7710000
0x06A4E4A0: 003c42f9  ldr x0, [x0, #0x478]
0x06A4E4A4: 5dc91c97  bl #0x3180a18
0x06A4E4A8: 806300f0  adrp x0, #0x76c1000
0x06A4E4AC: 005843f9  ldr x0, [x0, #0x6b0]
0x06A4E4B0: 5ac91c97  bl #0x3180a18
0x06A4E4B4: 006700b0  adrp x0, #0x772f000
0x06A4E4B8: 003c47f9  ldr x0, [x0, #0xe78]
0x06A4E4BC: 57c91c97  bl #0x3180a18
0x06A4E4C0: 006700b0  adrp x0, #0x772f000
0x06A4E4C4: 004047f9  ldr x0, [x0, #0xe80]
0x06A4E4C8: 54c91c97  bl #0x3180a18
0x06A4E4CC: 006600d0  adrp x0, #0x7710000
0x06A4E4D0: 00d841f9  ldr x0, [x0, #0x3b0]
0x06A4E4D4: 51c91c97  bl #0x3180a18
0x06A4E4D8: 006700b0  adrp x0, #0x772f000
0x06A4E4DC: 005447f9  ldr x0, [x0, #0xea8]
0x06A4E4E0: 4ec91c97  bl #0x3180a18
0x06A4E4E4: 006700b0  adrp x0, #0x772f000
0x06A4E4E8: 005847f9  ldr x0, [x0, #0xeb0]
0x06A4E4EC: 4bc91c97  bl #0x3180a18
0x06A4E4F0: 006700b0  adrp x0, #0x772f000
0x06A4E4F4: 009447f9  ldr x0, [x0, #0xf28]
0x06A4E4F8: 48c91c97  bl #0x3180a18
0x06A4E4FC: 006700b0  adrp x0, #0x772f000
0x06A4E500: 009047f9  ldr x0, [x0, #0xf20]
0x06A4E504: 45c91c97  bl #0x3180a18
0x06A4E508: 006000b0  adrp x0, #0x764f000
0x06A4E50C: 00ac40f9  ldr x0, [x0, #0x158]
0x06A4E510: 42c91c97  bl #0x3180a18
0x06A4E514: 28008052  movz w8, #0x1
0x06A4E518: 489b1639  strb w8, [x26, #0x5a6]
0x06A4E51C: 600340f9  ldr x0, [x27]
0x06A4E520: e0c91c97  bl #0x3180ca0
0x06A4E524: e1031faa  mov x1, xzr
0x06A4E528: fa0300aa  mov x26, x0
0x06A4E52C: 3430b297  bl #0x56da5fc
0x06A4E530: 1a1500b4  cbz x26, #0x6a4e7d0
0x06A4E534: e0031aaa  mov x0, x26
0x06A4E538: 190c01f8  str x25, [x0, #0x10]!
0x06A4E53C: e10319aa  mov x1, x25
0x06A4E540: 21c91c97  bl #0x31809c4
0x06A4E544: 190b40f9  ldr x25, [x24, #0x10]
0x06A4E548: 591300b4  cbz x25, #0x6a4e7b0
0x06A4E54C: 083b4039  ldrb w8, [x24, #0xe]
0x06A4E550: 48030034  cbz w8, #0x6a4e5b8
0x06A4E554: 086600d0  adrp x8, #0x7710000
0x06A4E558: 083d42f9  ldr x8, [x8, #0x478]
0x06A4E55C: 000140f9  ldr x0, [x8]
0x06A4E560: d0c91c97  bl #0x3180ca0
0x06A4E564: 086700b0  adrp x8, #0x772f000
0x06A4E568: 089547f9  ldr x8, [x8, #0xf28]
0x06A4E56C: e1031aaa  mov x1, x26
0x06A4E570: e3031faa  mov x3, xzr
0x06A4E574: f80300aa  mov x24, x0
0x06A4E578: 020140f9  ldr x2, [x8]
0x06A4E57C: 901ea097  bl #0x5255fbc
0x06A4E580: 086600d0  adrp x8, #0x7710000
0x06A4E584: 083942f9  ldr x8, [x8, #0x470]
0x06A4E588: e00319aa  mov x0, x25
0x06A4E58C: e10318aa  mov x1, x24
0x06A4E590: 020140f9  ldr x2, [x8]
0x06A4E594: 45e34897  bl #0x3c872a8
0x06A4E598: e86300f0  adrp x8, #0x76cd000
0x06A4E59C: 08b544f9  ldr x8, [x8, #0x968]
0x06A4E5A0: 010140f9  ldr x1, [x8]
0x06A4E5A4: 8b464897  bl #0x3c5ffd0
0x06A4E5A8: 401100b4  cbz x0, #0x6a4e7d0
0x06A4E5AC: 081840b9  ldr w8, [x0, #0x18]
0x06A4E5B0: f90300aa  mov x25, x0
0x06A4E5B4: e80f0034  cbz w8, #0x6a4e7b0
0x06A4E5B8: e10319aa  mov x1, x25
0x06A4E5BC: 90feff97  bl #0x6a4dffc
0x06A4E5C0: 200100b4  cbz x0, #0x6a4e5e4
0x06A4E5C4: f80300aa  mov x24, x0
0x06A4E5C8: 000840f9  ldr x0, [x0, #0x10]
0x06A4E5CC: 400100b4  cbz x0, #0x6a4e5f4
0x06A4E5D0: 080040f9  ldr x8, [x0]
0x06A4E5D4: 09855ca9  ldp x9, x1, [x8, #0x1c8]
0x06A4E5D8: 20013fd6  blr x9
0x06A4E5DC: f90300aa  mov x25, x0
0x06A4E5E0: 06000014  b #0x6a4e5f8
0x06A4E5E4: e1031faa  mov x1, xzr
0x06A4E5E8: 31a5aa97  bl #0x54f7aac
0x06A4E5EC: 200e0037  tbnz w0, #0, #0x6a4e7b0
0x06A4E5F0: 78000014  b #0x6a4e7d0
0x06A4E5F4: f9031faa  mov x25, xzr
0x06A4E5F8: e00319aa  mov x0, x25
0x06A4E5FC: e1031faa  mov x1, xzr
0x06A4E600: 2ba5aa97  bl #0x54f7aac
0x06A4E604: 600d0037  tbnz w0, #0, #0x6a4e7b0
0x06A4E608: 580e00b4  cbz x24, #0x6a4e7d0
0x06A4E60C: 370e00b4  cbz x23, #0x6a4e7d0
0x06A4E610: 8a6300f0  adrp x10, #0x76c1000
0x06A4E614: e80240f9  ldr x8, [x23]
0x06A4E618: 1a834039  ldrb w26, [x24, #0x20]
0x06A4E61C: 4a5943f9  ldr x10, [x10, #0x6b0]
0x06A4E620: 095d4279  ldrh w9, [x8, #0x12e]
0x06A4E624: 410140f9  ldr x1, [x10]
0x06A4E628: 290100b4  cbz x9, #0x6a4e64c
0x06A4E62C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A4E630: 4a210091  add x10, x10, #8
0x06A4E634: 4b815ff8  ldur x11, [x10, #-8]
0x06A4E638: 7f0101eb  cmp x11, x1
0x06A4E63C: 00010054  b.eq #0x6a4e65c
0x06A4E640: 290500f1  subs x9, x9, #1
0x06A4E644: 4a410091  add x10, x10, #0x10
0x06A4E648: 61ffff54  b.ne #0x6a4e634
0x06A4E64C: 22008052  movz w2, #0x1
0x06A4E650: e00317aa  mov x0, x23
0x06A4E654: 2f211c97  bl #0x3156b10
0x06A4E658: 05000014  b #0x6a4e66c
0x06A4E65C: 490140b9  ldr w9, [x10]
0x06A4E660: 29050011  add w9, w9, #1
0x06A4E664: 08d1298b  add x8, x8, w9, sxtw #4
0x06A4E668: 00e10491  add x0, x8, #0x138
0x06A4E66C: 081840a9  ldp x8, x6, [x0]
0x06A4E670: 5f030071  cmp w26, #0
0x06A4E674: e4079f1a  cset w4, ne
0x06A4E678: 03028052  movz w3, #0x10
0x06A4E67C: e00317aa  mov x0, x23
0x06A4E680: e10319aa  mov x1, x25
0x06A4E684: e203142a  mov w2, w20
0x06A4E688: e5031faa  mov x5, xzr
0x06A4E68C: 00013fd6  blr x8
0x06A4E690: 600640ad  ldp q0, q1, [x19]
0x06A4E694: f70300aa  mov x23, x0
0x06A4E698: e0830091  add x0, sp, #0x20
0x06A4E69C: e10317aa  mov x1, x23
0x06A4E6A0: e20315aa  mov x2, x21
0x06A4E6A4: e3031faa  mov x3, xzr
0x06A4E6A8: e00701ad  stp q0, q1, [sp, #0x20]
0x06A4E6AC: ed290194  bl #0x6a98e60
0x06A4E6B0: 196000b0  adrp x25, #0x764f000
0x06A4E6B4: c10a40f9  ldr x1, [x22, #0x10]
0x06A4E6B8: 39af40f9  ldr x25, [x25, #0x158]
0x06A4E6BC: e00315aa  mov x0, x21
0x06A4E6C0: e5031faa  mov x5, xzr
0x06A4E6C4: 220340f9  ldr x2, [x25]
0x06A4E6C8: e30302aa  mov x3, x2
0x06A4E6CC: e40302aa  mov x4, x2
0x06A4E6D0: 99520194  bl #0x6aa3134
0x06A4E6D4: 220340f9  ldr x2, [x25]
0x06A4E6D8: c10a40f9  ldr x1, [x22, #0x10]
0x06A4E6DC: fa0300aa  mov x26, x0
0x06A4E6E0: e00317aa  mov x0, x23
0x06A4E6E4: e30302aa  mov x3, x2
0x06A4E6E8: e40302aa  mov x4, x2
0x06A4E6EC: e5031faa  mov x5, xzr
0x06A4E6F0: 91520194  bl #0x6aa3134
0x06A4E6F4: 086700b0  adrp x8, #0x772f000
0x06A4E6F8: 790a40f9  ldr x25, [x19, #0x10]
0x06A4E6FC: 1ba34039  ldrb w27, [x24, #0x28]
0x06A4E700: 1ca74039  ldrb w28, [x24, #0x29]
0x06A4E704: 1d8b4039  ldrb w29, [x24, #0x22]
0x06A4E708: 084147f9  ldr x8, [x8, #0xe80]
0x06A4E70C: f60300aa  mov x22, x0
0x06A4E710: 080140f9  ldr x8, [x8]
0x06A4E714: e00308aa  mov x0, x8
0x06A4E718: 62c91c97  bl #0x3180ca0
0x06A4E71C: 65008052  movz w5, #0x3
0x06A4E720: e10315aa  mov x1, x21
0x06A4E724: e20317aa  mov x2, x23
0x06A4E728: e303142a  mov w3, w20
0x06A4E72C: e403142a  mov w4, w20
0x06A4E730: e6031aaa  mov x6, x26
0x06A4E734: e70316aa  mov x7, x22
0x06A4E738: f80300aa  mov x24, x0
0x06A4E73C: ff0f00f9  str xzr, [sp, #0x18]
0x06A4E740: fd430039  strb w29, [sp, #0x10]
0x06A4E744: fc230039  strb w28, [sp, #8]
0x06A4E748: fb030039  strb w27, [sp]
0x06A4E74C: d1300194  bl #0x6a9aa90
0x06A4E750: 190400b4  cbz x25, #0x6a4e7d0
0x06A4E754: 086700b0  adrp x8, #0x772f000
0x06A4E758: 085947f9  ldr x8, [x8, #0xeb0]
0x06A4E75C: e00319aa  mov x0, x25
0x06A4E760: e10318aa  mov x1, x24
0x06A4E764: 020140f9  ldr x2, [x8]
0x06A4E768: 1fd34d97  bl #0x3dc33e4
0x06A4E76C: 086700b0  adrp x8, #0x772f000
0x06A4E770: 730a40f9  ldr x19, [x19, #0x10]
0x06A4E774: 083d47f9  ldr x8, [x8, #0xe78]
0x06A4E778: 000140f9  ldr x0, [x8]
0x06A4E77C: 49c91c97  bl #0x3180ca0
0x06A4E780: e10317aa  mov x1, x23
0x06A4E784: e20316aa  mov x2, x22
0x06A4E788: e3031faa  mov x3, xzr
0x06A4E78C: f40300aa  mov x20, x0
0x06A4E790: 26300194  bl #0x6a9a828
0x06A4E794: f30100b4  cbz x19, #0x6a4e7d0
0x06A4E798: 086700b0  adrp x8, #0x772f000
0x06A4E79C: 085547f9  ldr x8, [x8, #0xea8]
0x06A4E7A0: e00313aa  mov x0, x19
0x06A4E7A4: e10314aa  mov x1, x20
0x06A4E7A8: 020140f9  ldr x2, [x8]
0x06A4E7AC: 0ed34d97  bl #0x3dc33e4
0x06A4E7B0: f44f49a9  ldp x20, x19, [sp, #0x90]
0x06A4E7B4: f65748a9  ldp x22, x21, [sp, #0x80]
0x06A4E7B8: f85f47a9  ldp x24, x23, [sp, #0x70]
0x06A4E7BC: fa6746a9  ldp x26, x25, [sp, #0x60]
0x06A4E7C0: fc6f45a9  ldp x28, x27, [sp, #0x50]
0x06A4E7C4: fd7b44a9  ldp x29, x30, [sp, #0x40]
0x06A4E7C8: ff830291  add sp, sp, #0xa0
0x06A4E7CC: c0035fd6  ret
0x06A4E7D0: 37c91c97  bl #0x3180cac

; RVA 0x6A4E2B8 | private void AddSpawnFailedResult(EmptiableWeightedItemSpawnable item, IEntityFactory entityFactory, TickContext context) { }
; bytes=384 sha256=44b44684af9ea69d0e6e59f06edb2e8107a26114e4869f8b0cad314b81e36fc4 status=arm64_complete_bound indexed_start=True
0x06A4E2B8: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x06A4E2BC: f65701a9  stp x22, x21, [sp, #0x10]
0x06A4E2C0: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A4E2C4: f6960090  adrp x22, #0x7d2a000
0x06A4E2C8: c89e5639  ldrb w8, [x22, #0x5a7]
0x06A4E2CC: f30303aa  mov x19, x3
0x06A4E2D0: f50302aa  mov x21, x2
0x06A4E2D4: f40301aa  mov x20, x1
0x06A4E2D8: e8010037  tbnz w8, #0, #0x6a4e314
0x06A4E2DC: 006700b0  adrp x0, #0x772f000
0x06A4E2E0: 008447f9  ldr x0, [x0, #0xf08]
0x06A4E2E4: cdc91c97  bl #0x3180a18
0x06A4E2E8: 806300f0  adrp x0, #0x76c1000
0x06A4E2EC: 005843f9  ldr x0, [x0, #0x6b0]
0x06A4E2F0: cac91c97  bl #0x3180a18
0x06A4E2F4: 006700b0  adrp x0, #0x772f000
0x06A4E2F8: 008847f9  ldr x0, [x0, #0xf10]
0x06A4E2FC: c7c91c97  bl #0x3180a18
0x06A4E300: 006700b0  adrp x0, #0x772f000
0x06A4E304: 008c47f9  ldr x0, [x0, #0xf18]
0x06A4E308: c4c91c97  bl #0x3180a18
0x06A4E30C: 28008052  movz w8, #0x1
0x06A4E310: c89e1639  strb w8, [x22, #0x5a7]
0x06A4E314: 140900b4  cbz x20, #0x6a4e434
0x06A4E318: 800a40f9  ldr x0, [x20, #0x10]
0x06A4E31C: c00800b4  cbz x0, #0x6a4e434
0x06A4E320: 080040f9  ldr x8, [x0]
0x06A4E324: 09855ca9  ldp x9, x1, [x8, #0x1c8]
0x06A4E328: 20013fd6  blr x9
0x06A4E32C: 550800b4  cbz x21, #0x6a4e434
0x06A4E330: 8a6300f0  adrp x10, #0x76c1000
0x06A4E334: a80240f9  ldr x8, [x21]
0x06A4E338: 4a5943f9  ldr x10, [x10, #0x6b0]
0x06A4E33C: 97824039  ldrb w23, [x20, #0x20]
0x06A4E340: f60300aa  mov x22, x0
0x06A4E344: 095d4279  ldrh w9, [x8, #0x12e]
0x06A4E348: 410140f9  ldr x1, [x10]
0x06A4E34C: 290100b4  cbz x9, #0x6a4e370
0x06A4E350: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A4E354: 4a210091  add x10, x10, #8
0x06A4E358: 4b815ff8  ldur x11, [x10, #-8]
0x06A4E35C: 7f0101eb  cmp x11, x1
0x06A4E360: 00010054  b.eq #0x6a4e380
0x06A4E364: 290500f1  subs x9, x9, #1
0x06A4E368: 4a410091  add x10, x10, #0x10
0x06A4E36C: 61ffff54  b.ne #0x6a4e358
0x06A4E370: 22008052  movz w2, #0x1
0x06A4E374: e00315aa  mov x0, x21
0x06A4E378: e6211c97  bl #0x3156b10
0x06A4E37C: 05000014  b #0x6a4e390
0x06A4E380: 490140b9  ldr w9, [x10]
0x06A4E384: 29050011  add w9, w9, #1
0x06A4E388: 08d1298b  add x8, x8, w9, sxtw #4
0x06A4E38C: 00e10491  add x0, x8, #0x138
0x06A4E390: 081840a9  ldp x8, x6, [x0]
0x06A4E394: ff020071  cmp w23, #0
0x06A4E398: e4079f1a  cset w4, ne
0x06A4E39C: 02008012  movn w2, #0
0x06A4E3A0: 83008052  movz w3, #0x4
0x06A4E3A4: e00315aa  mov x0, x21
0x06A4E3A8: e10316aa  mov x1, x22
0x06A4E3AC: e5031faa  mov x5, xzr
0x06A4E3B0: 00013fd6  blr x8
0x06A4E3B4: 880a40f9  ldr x8, [x20, #0x10]
0x06A4E3B8: e80300b4  cbz x8, #0x6a4e434
0x06A4E3BC: 090140f9  ldr x9, [x8]
0x06A4E3C0: 156700b0  adrp x21, #0x772f000
0x06A4E3C4: 176700b0  adrp x23, #0x772f000
0x06A4E3C8: 730a40f9  ldr x19, [x19, #0x10]
0x06A4E3CC: 2a855ea9  ldp x10, x1, [x9, #0x1e8]
0x06A4E3D0: b58647f9  ldr x21, [x21, #0xf08]
0x06A4E3D4: f78e47f9  ldr x23, [x23, #0xf18]
0x06A4E3D8: f40300aa  mov x20, x0
0x06A4E3DC: e00308aa  mov x0, x8
0x06A4E3E0: 40013fd6  blr x10
0x06A4E3E4: a80240f9  ldr x8, [x21]
0x06A4E3E8: f60300aa  mov x22, x0
0x06A4E3EC: e00308aa  mov x0, x8
0x06A4E3F0: 2cca1c97  bl #0x3180ca0
0x06A4E3F4: e20240f9  ldr x2, [x23]
0x06A4E3F8: e10314aa  mov x1, x20
0x06A4E3FC: e30316aa  mov x3, x22
0x06A4E400: e4031faa  mov x4, xzr
0x06A4E404: f50300aa  mov x21, x0
0x06A4E408: f12f0194  bl #0x6a9a3cc
0x06A4E40C: 530100b4  cbz x19, #0x6a4e434
0x06A4E410: 086700b0  adrp x8, #0x772f000
0x06A4E414: 088947f9  ldr x8, [x8, #0xf10]
0x06A4E418: e00313aa  mov x0, x19
0x06A4E41C: e10315aa  mov x1, x21
0x06A4E420: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A4E424: 020140f9  ldr x2, [x8]
0x06A4E428: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A4E42C: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x06A4E430: edd34d17  b #0x3dc33e4
0x06A4E434: 1eca1c97  bl #0x3180cac

; RVA 0x6A4DFFC | private WeightedItemSpawnable SelectWeightedItem(List<WeightedItemSpawnable> items) { }
; bytes=700 sha256=5e47db3df56a536c38c102da62491ccd27d077f070068f9ee8eb331a1cb1f637 status=arm64_complete_bound indexed_start=True
0x06A4DFFC: ff4301d1  sub sp, sp, #0x50
0x06A4E000: fe5f02a9  stp x30, x23, [sp, #0x20]
0x06A4E004: f65703a9  stp x22, x21, [sp, #0x30]
0x06A4E008: f44f04a9  stp x20, x19, [sp, #0x40]
0x06A4E00C: f4960090  adrp x20, #0x7d2a000
0x06A4E010: 88a25639  ldrb w8, [x20, #0x5a8]
0x06A4E014: f30301aa  mov x19, x1
0x06A4E018: 88040037  tbnz w8, #0, #0x6a4e0a8
0x06A4E01C: 006700b0  adrp x0, #0x772f000
0x06A4E020: 006447f9  ldr x0, [x0, #0xec8]
0x06A4E024: 7dca1c97  bl #0x3180a18
0x06A4E028: 006700b0  adrp x0, #0x772f000
0x06A4E02C: 006847f9  ldr x0, [x0, #0xed0]
0x06A4E030: 7aca1c97  bl #0x3180a18
0x06A4E034: 006700b0  adrp x0, #0x772f000
0x06A4E038: 006c47f9  ldr x0, [x0, #0xed8]
0x06A4E03C: 77ca1c97  bl #0x3180a18
0x06A4E040: 006700b0  adrp x0, #0x772f000
0x06A4E044: 007047f9  ldr x0, [x0, #0xee0]
0x06A4E048: 74ca1c97  bl #0x3180a18
0x06A4E04C: 006700b0  adrp x0, #0x772f000
0x06A4E050: 007447f9  ldr x0, [x0, #0xee8]
0x06A4E054: 71ca1c97  bl #0x3180a18
0x06A4E058: e06300f0  adrp x0, #0x76cd000
0x06A4E05C: 007c44f9  ldr x0, [x0, #0x8f8]
0x06A4E060: 6eca1c97  bl #0x3180a18
0x06A4E064: 006700b0  adrp x0, #0x772f000
0x06A4E068: 007847f9  ldr x0, [x0, #0xef0]
0x06A4E06C: 6bca1c97  bl #0x3180a18
0x06A4E070: 006600d0  adrp x0, #0x7710000
0x06A4E074: 00d841f9  ldr x0, [x0, #0x3b0]
0x06A4E078: 68ca1c97  bl #0x3180a18
0x06A4E07C: 006700b0  adrp x0, #0x772f000
0x06A4E080: 007c47f9  ldr x0, [x0, #0xef8]
0x06A4E084: 65ca1c97  bl #0x3180a18
0x06A4E088: 006700b0  adrp x0, #0x772f000
0x06A4E08C: 008047f9  ldr x0, [x0, #0xf00]
0x06A4E090: 62ca1c97  bl #0x3180a18
0x06A4E094: 006700b0  adrp x0, #0x772f000
0x06A4E098: 006047f9  ldr x0, [x0, #0xec0]
0x06A4E09C: 5fca1c97  bl #0x3180a18
0x06A4E0A0: 28008052  movz w8, #0x1
0x06A4E0A4: 88a21639  strb w8, [x20, #0x5a8]
0x06A4E0A8: ffff00a9  stp xzr, xzr, [sp, #8]
0x06A4E0AC: ff0f00f9  str xzr, [sp, #0x18]
0x06A4E0B0: 930100b4  cbz x19, #0x6a4e0e0
0x06A4E0B4: 681a40b9  ldr w8, [x19, #0x18]
0x06A4E0B8: 48010034  cbz w8, #0x6a4e0e0
0x06A4E0BC: 1f050071  cmp w8, #1
0x06A4E0C0: 41010054  b.ne #0x6a4e0e8
0x06A4E0C4: 086700b0  adrp x8, #0x772f000
0x06A4E0C8: 087d47f9  ldr x8, [x8, #0xef8]
0x06A4E0CC: e00313aa  mov x0, x19
0x06A4E0D0: e1031f2a  mov w1, wzr
0x06A4E0D4: 020140f9  ldr x2, [x8]
0x06A4E0D8: 31d85797  bl #0x404419c
0x06A4E0DC: 51000014  b #0x6a4e220
0x06A4E0E0: f5031faa  mov x21, xzr
0x06A4E0E4: 50000014  b #0x6a4e224
0x06A4E0E8: 166700b0  adrp x22, #0x772f000
0x06A4E0EC: d66247f9  ldr x22, [x22, #0xec0]
0x06A4E0F0: c00240f9  ldr x0, [x22]
0x06A4E0F4: 08e040b9  ldr w8, [x0, #0xe0]
0x06A4E0F8: 68000035  cbnz w8, #0x6a4e104
0x06A4E0FC: a4ca1c97  bl #0x3180b8c
0x06A4E100: c00240f9  ldr x0, [x22]
0x06A4E104: 085c40f9  ldr x8, [x0, #0xb8]
0x06A4E108: 140940f9  ldr x20, [x8, #0x10]
0x06A4E10C: f40200b5  cbnz x20, #0x6a4e168
0x06A4E110: 08e040b9  ldr w8, [x0, #0xe0]
0x06A4E114: 68000035  cbnz w8, #0x6a4e120
0x06A4E118: 9dca1c97  bl #0x3180b8c
0x06A4E11C: c00240f9  ldr x0, [x22]
0x06A4E120: e96300f0  adrp x9, #0x76cd000
0x06A4E124: 085c40f9  ldr x8, [x0, #0xb8]
0x06A4E128: 297d44f9  ldr x9, [x9, #0x8f8]
0x06A4E12C: 150140f9  ldr x21, [x8]
0x06A4E130: 200140f9  ldr x0, [x9]
0x06A4E134: dbca1c97  bl #0x3180ca0
0x06A4E138: 086700b0  adrp x8, #0x772f000
0x06A4E13C: 088147f9  ldr x8, [x8, #0xf00]
0x06A4E140: e10315aa  mov x1, x21
0x06A4E144: e3031faa  mov x3, xzr
0x06A4E148: f40300aa  mov x20, x0
0x06A4E14C: 020140f9  ldr x2, [x8]
0x06A4E150: 4521a097  bl #0x5256664
0x06A4E154: c80240f9  ldr x8, [x22]
0x06A4E158: e10314aa  mov x1, x20
0x06A4E15C: 005d40f9  ldr x0, [x8, #0xb8]
0x06A4E160: 140c01f8  str x20, [x0, #0x10]!
0x06A4E164: 18ca1c97  bl #0x31809c4
0x06A4E168: 086700b0  adrp x8, #0x772f000
0x06A4E16C: 086947f9  ldr x8, [x8, #0xed0]
0x06A4E170: e00313aa  mov x0, x19
0x06A4E174: e10314aa  mov x1, x20
0x06A4E178: 020140f9  ldr x2, [x8]
0x06A4E17C: d52d4897  bl #0x3c598d0
0x06A4E180: e103002a  mov w1, w0
0x06A4E184: e0031f2a  mov w0, wzr
0x06A4E188: e2031faa  mov x2, xzr
0x06A4E18C: b62d1294  bl #0x6ed9864
0x06A4E190: 086700b0  adrp x8, #0x772f000
0x06A4E194: 087947f9  ldr x8, [x8, #0xef0]
0x06A4E198: f403002a  mov w20, w0
0x06A4E19C: e00313aa  mov x0, x19
0x06A4E1A0: 010140f9  ldr x1, [x8]
0x06A4E1A4: e8230091  add x8, sp, #8
0x06A4E1A8: b0db5797  bl #0x4045068
0x06A4E1AC: 176700b0  adrp x23, #0x772f000
0x06A4E1B0: f77247f9  ldr x23, [x23, #0xee0]
0x06A4E1B4: f6031f2a  mov w22, wzr
0x06A4E1B8: e10240f9  ldr x1, [x23]
0x06A4E1BC: e0230091  add x0, sp, #8
0x06A4E1C0: fd1d9797  bl #0x50159b4
0x06A4E1C4: a0010036  tbz w0, #0, #0x6a4e1f8
0x06A4E1C8: f50f40f9  ldr x21, [sp, #0x18]
0x06A4E1CC: 950300b4  cbz x21, #0x6a4e23c
0x06A4E1D0: a82640b9  ldr w8, [x21, #0x24]
0x06A4E1D4: 1601160b  add w22, w8, w22
0x06A4E1D8: 9f02166b  cmp w20, w22
0x06A4E1DC: eafeff54  b.ge #0x6a4e1b8
0x06A4E1E0: 086700b0  adrp x8, #0x772f000
0x06A4E1E4: 086d47f9  ldr x8, [x8, #0xed8]
0x06A4E1E8: e0230091  add x0, sp, #8
0x06A4E1EC: 010140f9  ldr x1, [x8]
0x06A4E1F0: f01d9797  bl #0x50159b0
0x06A4E1F4: 0c000014  b #0x6a4e224
0x06A4E1F8: 086700b0  adrp x8, #0x772f000
0x06A4E1FC: 086d47f9  ldr x8, [x8, #0xed8]
0x06A4E200: e0230091  add x0, sp, #8
0x06A4E204: 010140f9  ldr x1, [x8]
0x06A4E208: ea1d9797  bl #0x50159b0
0x06A4E20C: 086700b0  adrp x8, #0x772f000
0x06A4E210: 086547f9  ldr x8, [x8, #0xec8]
0x06A4E214: e00313aa  mov x0, x19
0x06A4E218: 010140f9  ldr x1, [x8]
0x06A4E21C: 38e54797  bl #0x3c476fc
0x06A4E220: f50300aa  mov x21, x0
0x06A4E224: e00315aa  mov x0, x21
0x06A4E228: f44f44a9  ldp x20, x19, [sp, #0x40]
0x06A4E22C: f65743a9  ldp x22, x21, [sp, #0x30]
0x06A4E230: fe5f42a9  ldp x30, x23, [sp, #0x20]
0x06A4E234: ff430191  add sp, sp, #0x50
0x06A4E238: c0035fd6  ret
0x06A4E23C: 9cca1c97  bl #0x3180cac
0x06A4E240: 01000014  b #0x6a4e244
0x06A4E244: f50300aa  mov x21, x0
0x06A4E248: 3f040071  cmp w1, #1
0x06A4E24C: a1010054  b.ne #0x6a4e280
0x06A4E250: e00315aa  mov x0, x21
0x06A4E254: af011e94  bl #0x71ce910
0x06A4E258: 140040f9  ldr x20, [x0]
0x06A4E25C: b1011e94  bl #0x71ce920
0x06A4E260: 086700b0  adrp x8, #0x772f000
0x06A4E264: 086d47f9  ldr x8, [x8, #0xed8]
0x06A4E268: e0230091  add x0, sp, #8
0x06A4E26C: 010140f9  ldr x1, [x8]
0x06A4E270: d01d9797  bl #0x50159b0
0x06A4E274: d4fcffb4  cbz x20, #0x6a4e20c
0x06A4E278: e00314aa  mov x0, x20
0x06A4E27C: 8aca1c97  bl #0x3180ca4
0x06A4E280: f4031faa  mov x20, xzr
0x06A4E284: 02000014  b #0x6a4e28c
0x06A4E288: f50300aa  mov x21, x0
0x06A4E28C: 086700b0  adrp x8, #0x772f000
0x06A4E290: 086d47f9  ldr x8, [x8, #0xed8]
0x06A4E294: 010140f9  ldr x1, [x8]
0x06A4E298: e0230091  add x0, sp, #8
0x06A4E29C: c51d9797  bl #0x50159b0
0x06A4E2A0: 740000b5  cbnz x20, #0x6a4e2ac
0x06A4E2A4: e00315aa  mov x0, x21
0x06A4E2A8: ac5d2097  bl #0x3265958
0x06A4E2AC: e00314aa  mov x0, x20
0x06A4E2B0: 7dca1c97  bl #0x3180ca4
0x06A4E2B4: 98ec0e97  bl #0x2e09514

; RVA 0x6A4E7DC | public void .ctor() { }
; bytes=8 sha256=7bd846261c135ad84b368d5b0d355fe6560f2896a9259273d8bca70770a7e330 status=arm64_complete_bound indexed_start=True
0x06A4E7DC: e1031faa  mov x1, xzr
0x06A4E7E0: 872fb217  b #0x56da5fc

