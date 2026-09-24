; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25738 Merger.MergeBoard.Systems.FeedingCombinationFeedSystem
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A6846C | public void Tick(TickContext context) { }
; bytes=136 sha256=a4a5260906d9830ccff2cb98b9a2f9c3c718f74ed00e5e912b78b5b9e2317734 status=arm64_complete_bound indexed_start=True
0x06A6846C: ff8301d1  sub sp, sp, #0x60
0x06A68470: fe5704a9  stp x30, x21, [sp, #0x40]
0x06A68474: f44f05a9  stp x20, x19, [sp, #0x50]
0x06A68478: 159600d0  adrp x21, #0x7d2a000
0x06A6847C: a8ca5a39  ldrb w8, [x21, #0x6b2]
0x06A68480: f30301aa  mov x19, x1
0x06A68484: f40300aa  mov x20, x0
0x06A68488: c8000037  tbnz w8, #0, #0x6a684a0
0x06A6848C: 40660090  adrp x0, #0x7730000
0x06A68490: 009046f9  ldr x0, [x0, #0xd20]
0x06A68494: 61611c97  bl #0x3180a18
0x06A68498: 28008052  movz w8, #0x1
0x06A6849C: a8ca1a39  strb w8, [x21, #0x6b2]
0x06A684A0: 600640f9  ldr x0, [x19, #8]
0x06A684A4: 600200b4  cbz x0, #0x6a684f0
0x06A684A8: 48660090  adrp x8, #0x7730000
0x06A684AC: 089146f9  ldr x8, [x8, #0xd20]
0x06A684B0: 010140f9  ldr x1, [x8]
0x06A684B4: c2704d97  bl #0x3dc47bc
0x06A684B8: c0000036  tbz w0, #0, #0x6a684d0
0x06A684BC: 610240ad  ldp q1, q0, [x19]
0x06A684C0: e1830091  add x1, sp, #0x20
0x06A684C4: e00314aa  mov x0, x20
0x06A684C8: e10301ad  stp q1, q0, [sp, #0x20]
0x06A684CC: 0a000094  bl #0x6a684f4
0x06A684D0: 610240ad  ldp q1, q0, [x19]
0x06A684D4: e1030091  mov x1, sp
0x06A684D8: e10300ad  stp q1, q0, [sp]
0x06A684DC: c4000094  bl #0x6a687ec
0x06A684E0: f44f45a9  ldp x20, x19, [sp, #0x50]
0x06A684E4: fe5744a9  ldp x30, x21, [sp, #0x40]
0x06A684E8: ff830191  add sp, sp, #0x60
0x06A684EC: c0035fd6  ret
0x06A684F0: ef611c97  bl #0x3180cac

; RVA 0x6A684F4 | private void TryFeedItem(TickContext context) { }
; bytes=760 sha256=7bd44ec1e4087e2140ab4757cf542faf0f54b481125075e29de46cac8e68e6ca status=arm64_complete_bound indexed_start=True
0x06A684F4: fd0f1af8  str x29, [sp, #-0x60]!
0x06A684F8: fe6f01a9  stp x30, x27, [sp, #0x10]
0x06A684FC: fa6702a9  stp x26, x25, [sp, #0x20]
0x06A68500: f85f03a9  stp x24, x23, [sp, #0x30]
0x06A68504: f65704a9  stp x22, x21, [sp, #0x40]
0x06A68508: f44f05a9  stp x20, x19, [sp, #0x50]
0x06A6850C: ff030cd1  sub sp, sp, #0x300
0x06A68510: 59d03bd5  mrs x25, tpidr_el0
0x06A68514: 281740f9  ldr x8, [x25, #0x28]
0x06A68518: 1b9600d0  adrp x27, #0x7d2a000
0x06A6851C: 55660090  adrp x21, #0x7730000
0x06A68520: 376600f0  adrp x23, #0x772f000
0x06A68524: e87f01f9  str x8, [sp, #0x2f8]
0x06A68528: 366600f0  adrp x22, #0x772f000
0x06A6852C: 5a660090  adrp x26, #0x7730000
0x06A68530: 58660090  adrp x24, #0x7730000
0x06A68534: 68cf5a39  ldrb w8, [x27, #0x6b3]
0x06A68538: b59646f9  ldr x21, [x21, #0xd28]
0x06A6853C: f73647f9  ldr x23, [x23, #0xe68]
0x06A68540: d62647f9  ldr x22, [x22, #0xe48]
0x06A68544: 5a9b46f9  ldr x26, [x26, #0xd30]
0x06A68548: 189f46f9  ldr x24, [x24, #0xd38]
0x06A6854C: f30301aa  mov x19, x1
0x06A68550: f40300aa  mov x20, x0
0x06A68554: 28040037  tbnz w8, #0, #0x6a685d8
0x06A68558: 40660090  adrp x0, #0x7730000
0x06A6855C: 00a046f9  ldr x0, [x0, #0xd40]
0x06A68560: 2e611c97  bl #0x3180a18
0x06A68564: 206600f0  adrp x0, #0x772f000
0x06A68568: 002447f9  ldr x0, [x0, #0xe48]
0x06A6856C: 2b611c97  bl #0x3180a18
0x06A68570: 40660090  adrp x0, #0x7730000
0x06A68574: 00a446f9  ldr x0, [x0, #0xd48]
0x06A68578: 28611c97  bl #0x3180a18
0x06A6857C: 40660090  adrp x0, #0x7730000
0x06A68580: 009446f9  ldr x0, [x0, #0xd28]
0x06A68584: 25611c97  bl #0x3180a18
0x06A68588: 40660090  adrp x0, #0x7730000
0x06A6858C: 00a846f9  ldr x0, [x0, #0xd50]
0x06A68590: 22611c97  bl #0x3180a18
0x06A68594: 206600f0  adrp x0, #0x772f000
0x06A68598: 003447f9  ldr x0, [x0, #0xe68]
0x06A6859C: 1f611c97  bl #0x3180a18
0x06A685A0: 40660090  adrp x0, #0x7730000
0x06A685A4: 00ac46f9  ldr x0, [x0, #0xd58]
0x06A685A8: 1c611c97  bl #0x3180a18
0x06A685AC: 40660090  adrp x0, #0x7730000
0x06A685B0: 009c46f9  ldr x0, [x0, #0xd38]
0x06A685B4: 19611c97  bl #0x3180a18
0x06A685B8: 40660090  adrp x0, #0x7730000
0x06A685BC: 009846f9  ldr x0, [x0, #0xd30]
0x06A685C0: 16611c97  bl #0x3180a18
0x06A685C4: 40660090  adrp x0, #0x7730000
0x06A685C8: 00b046f9  ldr x0, [x0, #0xd60]
0x06A685CC: 13611c97  bl #0x3180a18
0x06A685D0: 28008052  movz w8, #0x1
0x06A685D4: 68cf1a39  strb w8, [x27, #0x6b3]
0x06A685D8: 00e4006f  movi v0.2d, #0000000000000000
0x06A685DC: fffb00f9  str xzr, [sp, #0x1f0]
0x06A685E0: e00310ad  stp q0, q0, [sp, #0x200]
0x06A685E4: e0830ead  stp q0, q0, [sp, #0x1d0]
0x06A685E8: e0830dad  stp q0, q0, [sp, #0x1b0]
0x06A685EC: e0830cad  stp q0, q0, [sp, #0x190]
0x06A685F0: 610240ad  ldp q1, q0, [x19]
0x06A685F4: a00240f9  ldr x0, [x21]
0x06A685F8: e1830bad  stp q1, q0, [sp, #0x170]
0x06A685FC: 42c74697  bl #0x3c1a304
0x06A68600: e80240f9  ldr x8, [x23]
0x06A68604: f50300aa  mov x21, x0
0x06A68608: e00308aa  mov x0, x8
0x06A6860C: a5611c97  bl #0x3180ca0
0x06A68610: c20240f9  ldr x2, [x22]
0x06A68614: e1031faa  mov x1, xzr
0x06A68618: e3031faa  mov x3, xzr
0x06A6861C: f60300aa  mov x22, x0
0x06A68620: bab5d297  bl #0x5f15d08
0x06A68624: e0874bad  ldp q0, q1, [sp, #0x170]
0x06A68628: 430340f9  ldr x3, [x26]
0x06A6862C: e8030891  add x8, sp, #0x200
0x06A68630: e0830891  add x0, sp, #0x220
0x06A68634: e10315aa  mov x1, x21
0x06A68638: e20316aa  mov x2, x22
0x06A6863C: e00711ad  stp q0, q1, [sp, #0x220]
0x06A68640: d9f34b97  bl #0x3d655a4
0x06A68644: 020340f9  ldr x2, [x24]
0x06A68648: e0030891  add x0, sp, #0x200
0x06A6864C: e1c30691  add x1, sp, #0x1b0
0x06A68650: 22926497  bl #0x438ced8
0x06A68654: e00a0036  tbz w0, #0, #0x6a687b0
0x06A68658: 48660090  adrp x8, #0x7730000
0x06A6865C: 600640ad  ldp q0, q1, [x19]
0x06A68660: 08a546f9  ldr x8, [x8, #0xd48]
0x06A68664: e0870aad  stp q0, q1, [sp, #0x150]
0x06A68668: 000140f9  ldr x0, [x8]
0x06A6866C: b4c94697  bl #0x3c1ad3c
0x06A68670: e80240f9  ldr x8, [x23]
0x06A68674: f50300aa  mov x21, x0
0x06A68678: e00308aa  mov x0, x8
0x06A6867C: 89611c97  bl #0x3180ca0
0x06A68680: 48660090  adrp x8, #0x7730000
0x06A68684: 08a146f9  ldr x8, [x8, #0xd40]
0x06A68688: e1031faa  mov x1, xzr
0x06A6868C: e3031faa  mov x3, xzr
0x06A68690: f60300aa  mov x22, x0
0x06A68694: 020140f9  ldr x2, [x8]
0x06A68698: 9cb5d297  bl #0x5f15d08
0x06A6869C: 48660090  adrp x8, #0x7730000
0x06A686A0: 08b146f9  ldr x8, [x8, #0xd60]
0x06A686A4: e0874aad  ldp q0, q1, [sp, #0x150]
0x06A686A8: e0830891  add x0, sp, #0x220
0x06A686AC: e10315aa  mov x1, x21
0x06A686B0: 030140f9  ldr x3, [x8]
0x06A686B4: e8430691  add x8, sp, #0x190
0x06A686B8: e20316aa  mov x2, x22
0x06A686BC: e00711ad  stp q0, q1, [sp, #0x220]
0x06A686C0: 19f84b97  bl #0x3d66724
0x06A686C4: 48660090  adrp x8, #0x7730000
0x06A686C8: 08ad46f9  ldr x8, [x8, #0xd58]
0x06A686CC: e0430691  add x0, sp, #0x190
0x06A686D0: 010140f9  ldr x1, [x8]
0x06A686D4: e4be6497  bl #0x4398264
0x06A686D8: 48660090  adrp x8, #0x7730000
0x06A686DC: 08a946f9  ldr x8, [x8, #0xd50]
0x06A686E0: 010140f9  ldr x1, [x8]
0x06A686E4: d3cb4797  bl #0x3c5b630
0x06A686E8: e00700b4  cbz x0, #0x6a687e4
0x06A686EC: 080c40f9  ldr x8, [x0, #0x18]
0x06A686F0: f50300aa  mov x21, x0
0x06A686F4: 1f050071  cmp w8, #1
0x06A686F8: cb050054  b.lt #0x6a687b0
0x06A686FC: e9c30191  add x9, sp, #0x70
0x06A68700: fa031faa  mov x26, xzr
0x06A68704: 087d4092  and x8, x8, #0xffffffff
0x06A68708: 36310091  add x22, x9, #0xc
0x06A6870C: b7b20091  add x23, x21, #0x2c
0x06A68710: 5f4328eb  cmp x26, w8, uxtw
0x06A68714: 62060054  b.hs #0x6a687e0
0x06A68718: f8425ff8  ldur x24, [x23, #-0xc]
0x06A6871C: fbc25fb8  ldur w27, [x23, #-4]
0x06A68720: e0830891  add x0, sp, #0x220
0x06A68724: 821a8052  movz w2, #0xd4
0x06A68728: e10317aa  mov x1, x23
0x06A6872C: 91981d94  bl #0x71ce970
0x06A68730: e8bb41b9  ldr w8, [sp, #0x1b8]
0x06A68734: 7f03086b  cmp w27, w8
0x06A68738: 21030054  b.ne #0x6a6879c
0x06A6873C: 800a40f9  ldr x0, [x20, #0x10]
0x06A68740: 200500b4  cbz x0, #0x6a687e4
0x06A68744: e1db40f9  ldr x1, [sp, #0x1b0]
0x06A68748: e20318aa  mov x2, x24
0x06A6874C: e3031faa  mov x3, xzr
0x06A68750: 24780094  bl #0x6a867e0
0x06A68754: 40020036  tbz w0, #0, #0x6a6879c
0x06A68758: e1830891  add x1, sp, #0x220
0x06A6875C: 821a8052  movz w2, #0xd4
0x06A68760: e00316aa  mov x0, x22
0x06A68764: 83981d94  bl #0x71ce970
0x06A68768: e0a30091  add x0, sp, #0x28
0x06A6876C: e1c30691  add x1, sp, #0x1b0
0x06A68770: 02098052  movz w2, #0x48
0x06A68774: 7f981d94  bl #0x71ce970
0x06A68778: 600640ad  ldp q0, q1, [x19]
0x06A6877C: e1c30191  add x1, sp, #0x70
0x06A68780: e2a30091  add x2, sp, #0x28
0x06A68784: e3030091  mov x3, sp
0x06A68788: e00314aa  mov x0, x20
0x06A6878C: f83b00f9  str x24, [sp, #0x70]
0x06A68790: e00700ad  stp q0, q1, [sp]
0x06A68794: fb7b00b9  str w27, [sp, #0x78]
0x06A68798: 69010094  bl #0x6a68d3c
0x06A6879C: a81a40b9  ldr w8, [x21, #0x18]
0x06A687A0: 5a070091  add x26, x26, #1
0x06A687A4: f7820391  add x23, x23, #0xe0
0x06A687A8: 5fc328eb  cmp x26, w8, sxtw
0x06A687AC: 2bfbff54  b.lt #0x6a68710
0x06A687B0: 281740f9  ldr x8, [x25, #0x28]
0x06A687B4: e97f41f9  ldr x9, [sp, #0x2f8]
0x06A687B8: 1f0109eb  cmp x8, x9
0x06A687BC: 61010054  b.ne #0x6a687e8
0x06A687C0: ff030c91  add sp, sp, #0x300
0x06A687C4: f44f45a9  ldp x20, x19, [sp, #0x50]
0x06A687C8: f65744a9  ldp x22, x21, [sp, #0x40]
0x06A687CC: f85f43a9  ldp x24, x23, [sp, #0x30]
0x06A687D0: fa6742a9  ldp x26, x25, [sp, #0x20]
0x06A687D4: fe6f41a9  ldp x30, x27, [sp, #0x10]
0x06A687D8: fd0746f8  ldr x29, [sp], #0x60
0x06A687DC: c0035fd6  ret
0x06A687E0: 35611c97  bl #0x3180cb4
0x06A687E4: 32611c97  bl #0x3180cac
0x06A687E8: 6a981d94  bl #0x71ce990

; RVA 0x6A68D3C | private void FeedItem(ValueTuple<Entity, BoardTilePositionComponent, FeedingCombinationComponent, IdComponent, InteractionComponent, ProducerComponent, TimeCycleComponent> feedingCombinationsEntity, ValueTuple<Entity, BoardTilePositionComponent, ItemMovedComponent, IdComponent> consumedEntity, TickContext context) { }
; bytes=600 sha256=7e18334c4888e13bdc005610479aa2ee4d8d8b1da2db1ce6e1d8ca586805b57f status=arm64_complete_bound indexed_start=True
0x06A68D3C: fd7bbca9  stp x29, x30, [sp, #-0x40]!
0x06A68D40: f85f01a9  stp x24, x23, [sp, #0x10]
0x06A68D44: f65702a9  stp x22, x21, [sp, #0x20]
0x06A68D48: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A68D4C: ff8307d1  sub sp, sp, #0x1e0
0x06A68D50: 179600d0  adrp x23, #0x7d2a000
0x06A68D54: e8d25a39  ldrb w8, [x23, #0x6b4]
0x06A68D58: f60303aa  mov x22, x3
0x06A68D5C: f50302aa  mov x21, x2
0x06A68D60: f30301aa  mov x19, x1
0x06A68D64: f40300aa  mov x20, x0
0x06A68D68: a8020037  tbnz w8, #0, #0x6a68dbc
0x06A68D6C: 40660090  adrp x0, #0x7730000
0x06A68D70: 00c846f9  ldr x0, [x0, #0xd90]
0x06A68D74: 295f1c97  bl #0x3180a18
0x06A68D78: 40660090  adrp x0, #0x7730000
0x06A68D7C: 00cc46f9  ldr x0, [x0, #0xd98]
0x06A68D80: 265f1c97  bl #0x3180a18
0x06A68D84: 40660090  adrp x0, #0x7730000
0x06A68D88: 00d046f9  ldr x0, [x0, #0xda0]
0x06A68D8C: 235f1c97  bl #0x3180a18
0x06A68D90: 40660090  adrp x0, #0x7730000
0x06A68D94: 00d446f9  ldr x0, [x0, #0xda8]
0x06A68D98: 205f1c97  bl #0x3180a18
0x06A68D9C: 40660090  adrp x0, #0x7730000
0x06A68DA0: 00d846f9  ldr x0, [x0, #0xdb0]
0x06A68DA4: 1d5f1c97  bl #0x3180a18
0x06A68DA8: 205f00f0  adrp x0, #0x764f000
0x06A68DAC: 00ac40f9  ldr x0, [x0, #0x158]
0x06A68DB0: 1a5f1c97  bl #0x3180a18
0x06A68DB4: 28008052  movz w8, #0x1
0x06A68DB8: e8d21a39  strb w8, [x23, #0x6b4]
0x06A68DBC: 971640f9  ldr x23, [x20, #0x28]
0x06A68DC0: 970e00b4  cbz x23, #0x6a68f90
0x06A68DC4: 4a660090  adrp x10, #0x7730000
0x06A68DC8: e80240f9  ldr x8, [x23]
0x06A68DCC: 4acd46f9  ldr x10, [x10, #0xd98]
0x06A68DD0: b80240f9  ldr x24, [x21]
0x06A68DD4: 095d4279  ldrh w9, [x8, #0x12e]
0x06A68DD8: 410140f9  ldr x1, [x10]
0x06A68DDC: 290100b4  cbz x9, #0x6a68e00
0x06A68DE0: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A68DE4: 4a210091  add x10, x10, #8
0x06A68DE8: 4b815ff8  ldur x11, [x10, #-8]
0x06A68DEC: 7f0101eb  cmp x11, x1
0x06A68DF0: 00010054  b.eq #0x6a68e10
0x06A68DF4: 290500f1  subs x9, x9, #1
0x06A68DF8: 4a410091  add x10, x10, #0x10
0x06A68DFC: 61ffff54  b.ne #0x6a68de8
0x06A68E00: e00317aa  mov x0, x23
0x06A68E04: e2031f2a  mov w2, wzr
0x06A68E08: 42b71b97  bl #0x3156b10
0x06A68E0C: 04000014  b #0x6a68e1c
0x06A68E10: 490180b9  ldrsw x9, [x10]
0x06A68E14: 0811098b  add x8, x8, x9, lsl #4
0x06A68E18: 00e10491  add x0, x8, #0x138
0x06A68E1C: 080840a9  ldp x8, x2, [x0]
0x06A68E20: e00317aa  mov x0, x23
0x06A68E24: e10318aa  mov x1, x24
0x06A68E28: 00013fd6  blr x8
0x06A68E2C: 680a40f9  ldr x8, [x19, #0x10]
0x06A68E30: 080b00b4  cbz x8, #0x6a68f90
0x06A68E34: 4a660090  adrp x10, #0x7730000
0x06A68E38: 4ad146f9  ldr x10, [x10, #0xda0]
0x06A68E3C: 0b1d40b9  ldr w11, [x8, #0x1c]
0x06A68E40: 090940f9  ldr x9, [x8, #0x10]
0x06A68E44: 4a0140f9  ldr x10, [x10]
0x06A68E48: 6b050011  add w11, w11, #1
0x06A68E4C: 0b1d00b9  str w11, [x8, #0x1c]
0x06A68E50: 090a00b4  cbz x9, #0x6a68f90
0x06A68E54: 0b1980b9  ldrsw x11, [x8, #0x18]
0x06A68E58: 2c1940b9  ldr w12, [x9, #0x18]
0x06A68E5C: 57660090  adrp x23, #0x7730000
0x06A68E60: 58660090  adrp x24, #0x7730000
0x06A68E64: f7da46f9  ldr x23, [x23, #0xdb0]
0x06A68E68: 18cb46f9  ldr x24, [x24, #0xd90]
0x06A68E6C: e10300aa  mov x1, x0
0x06A68E70: 7f010c6b  cmp w11, w12
0x06A68E74: e2000054  b.hs #0x6a68e90
0x06A68E78: 6a050011  add w10, w11, #1
0x06A68E7C: 200d0b8b  add x0, x9, x11, lsl #3
0x06A68E80: 0a1900b9  str w10, [x8, #0x18]
0x06A68E84: 010c02f8  str x1, [x0, #0x20]!
0x06A68E88: cf5e1c97  bl #0x31809c4
0x06A68E8C: 06000014  b #0x6a68ea4
0x06A68E90: 491140f9  ldr x9, [x10, #0x20]
0x06A68E94: e00308aa  mov x0, x8
0x06A68E98: 296140f9  ldr x9, [x9, #0xc0]
0x06A68E9C: 223940f9  ldr x2, [x9, #0x70]
0x06A68EA0: 736d5797  bl #0x404446c
0x06A68EA4: e0830091  add x0, sp, #0x20
0x06A68EA8: 021c8052  movz w2, #0xe0
0x06A68EAC: e10313aa  mov x1, x19
0x06A68EB0: b0961d94  bl #0x71ce970
0x06A68EB4: f70240f9  ldr x23, [x23]
0x06A68EB8: e0030491  add x0, sp, #0x100
0x06A68EBC: e1830091  add x1, sp, #0x20
0x06A68EC0: 021c8052  movz w2, #0xe0
0x06A68EC4: ab961d94  bl #0x71ce970
0x06A68EC8: e0030491  add x0, sp, #0x100
0x06A68ECC: e10317aa  mov x1, x23
0x06A68ED0: 89794d97  bl #0x3dc74f4
0x06A68ED4: c10240ad  ldp q1, q0, [x22]
0x06A68ED8: e0030091  mov x0, sp
0x06A68EDC: e2031faa  mov x2, xzr
0x06A68EE0: e10300ad  stp q1, q0, [sp]
0x06A68EE4: a10240f9  ldr x1, [x21]
0x06A68EE8: 21c00094  bl #0x6a98f6c
0x06A68EEC: 000340f9  ldr x0, [x24]
0x06A68EF0: d60a40f9  ldr x22, [x22, #0x10]
0x06A68EF4: 6b5f1c97  bl #0x3180ca0
0x06A68EF8: e1031faa  mov x1, xzr
0x06A68EFC: f70300aa  mov x23, x0
0x06A68F00: b6c50094  bl #0x6a9a5d8
0x06A68F04: 770400b4  cbz x23, #0x6a68f90
0x06A68F08: 610240f9  ldr x1, [x19]
0x06A68F0C: 385f00f0  adrp x24, #0x764f000
0x06A68F10: 18af40f9  ldr x24, [x24, #0x158]
0x06A68F14: e00317aa  mov x0, x23
0x06A68F18: 010c01f8  str x1, [x0, #0x10]!
0x06A68F1C: aa5e1c97  bl #0x31809c4
0x06A68F20: a10240f9  ldr x1, [x21]
0x06A68F24: e00317aa  mov x0, x23
0x06A68F28: 018c01f8  str x1, [x0, #0x18]!
0x06A68F2C: a65e1c97  bl #0x31809c4
0x06A68F30: 020340f9  ldr x2, [x24]
0x06A68F34: 600240f9  ldr x0, [x19]
0x06A68F38: 811a40f9  ldr x1, [x20, #0x30]
0x06A68F3C: e5031faa  mov x5, xzr
0x06A68F40: e30302aa  mov x3, x2
0x06A68F44: e40302aa  mov x4, x2
0x06A68F48: 7be80094  bl #0x6aa3134
0x06A68F4C: e10300aa  mov x1, x0
0x06A68F50: e00317aa  mov x0, x23
0x06A68F54: 010c02f8  str x1, [x0, #0x20]!
0x06A68F58: 9b5e1c97  bl #0x31809c4
0x06A68F5C: b60100b4  cbz x22, #0x6a68f90
0x06A68F60: 48660090  adrp x8, #0x7730000
0x06A68F64: 08d546f9  ldr x8, [x8, #0xda8]
0x06A68F68: e00316aa  mov x0, x22
0x06A68F6C: e10317aa  mov x1, x23
0x06A68F70: 020140f9  ldr x2, [x8]
0x06A68F74: 1c694d97  bl #0x3dc33e4
0x06A68F78: ff830791  add sp, sp, #0x1e0
0x06A68F7C: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A68F80: f65742a9  ldp x22, x21, [sp, #0x20]
0x06A68F84: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06A68F88: fd7bc4a8  ldp x29, x30, [sp], #0x40
0x06A68F8C: c0035fd6  ret
0x06A68F90: 475f1c97  bl #0x3180cac

; RVA 0x6A687EC | private void CheckForFedProducers(TickContext context) { }
; bytes=1360 sha256=4cfc6ce2bb533646827281e73cd18075afca188b2f79b73e94181f838df9a9ad status=arm64_complete_bound indexed_start=True
0x06A687EC: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x06A687F0: fc6f01a9  stp x28, x27, [sp, #0x10]
0x06A687F4: fa6702a9  stp x26, x25, [sp, #0x20]
0x06A687F8: f85f03a9  stp x24, x23, [sp, #0x30]
0x06A687FC: f65704a9  stp x22, x21, [sp, #0x40]
0x06A68800: f44f05a9  stp x20, x19, [sp, #0x50]
0x06A68804: ff8307d1  sub sp, sp, #0x1e0
0x06A68808: 48d03bd5  mrs x8, tpidr_el0
0x06A6880C: e80b00f9  str x8, [sp, #0x10]
0x06A68810: 081540f9  ldr x8, [x8, #0x28]
0x06A68814: 1a9600d0  adrp x26, #0x7d2a000
0x06A68818: 59660090  adrp x25, #0x7730000
0x06A6881C: 386600f0  adrp x24, #0x772f000
0x06A68820: e8ef00f9  str x8, [sp, #0x1d8]
0x06A68824: 346600f0  adrp x20, #0x772f000
0x06A68828: 57660090  adrp x23, #0x7730000
0x06A6882C: 55660090  adrp x21, #0x7730000
0x06A68830: 48d75a39  ldrb w8, [x26, #0x6b5]
0x06A68834: 39b746f9  ldr x25, [x25, #0xd68]
0x06A68838: 183747f9  ldr x24, [x24, #0xe68]
0x06A6883C: 942647f9  ldr x20, [x20, #0xe48]
0x06A68840: f7ba46f9  ldr x23, [x23, #0xd70]
0x06A68844: b5be46f9  ldr x21, [x21, #0xd78]
0x06A68848: f30301aa  mov x19, x1
0x06A6884C: f6430391  add x22, sp, #0xd0
0x06A68850: 88040037  tbnz w8, #0, #0x6a688e0
0x06A68854: 206600f0  adrp x0, #0x772f000
0x06A68858: 002447f9  ldr x0, [x0, #0xe48]
0x06A6885C: 6f601c97  bl #0x3180a18
0x06A68860: 40660090  adrp x0, #0x7730000
0x06A68864: 00b446f9  ldr x0, [x0, #0xd68]
0x06A68868: 6c601c97  bl #0x3180a18
0x06A6886C: 206600f0  adrp x0, #0x772f000
0x06A68870: 00ac47f9  ldr x0, [x0, #0xf58]
0x06A68874: 69601c97  bl #0x3180a18
0x06A68878: 206600f0  adrp x0, #0x772f000
0x06A6887C: 003447f9  ldr x0, [x0, #0xe68]
0x06A68880: 66601c97  bl #0x3180a18
0x06A68884: 205f00d0  adrp x0, #0x764e000
0x06A68888: 006444f9  ldr x0, [x0, #0x8c8]
0x06A6888C: 63601c97  bl #0x3180a18
0x06A68890: 40660090  adrp x0, #0x7730000
0x06A68894: 00c046f9  ldr x0, [x0, #0xd80]
0x06A68898: 60601c97  bl #0x3180a18
0x06A6889C: 40660090  adrp x0, #0x7730000
0x06A688A0: 00c446f9  ldr x0, [x0, #0xd88]
0x06A688A4: 5d601c97  bl #0x3180a18
0x06A688A8: 205f00d0  adrp x0, #0x764e000
0x06A688AC: 007044f9  ldr x0, [x0, #0x8e0]
0x06A688B0: 5a601c97  bl #0x3180a18
0x06A688B4: 206300b0  adrp x0, #0x76cd000
0x06A688B8: 002c45f9  ldr x0, [x0, #0xa58]
0x06A688BC: 57601c97  bl #0x3180a18
0x06A688C0: 40660090  adrp x0, #0x7730000
0x06A688C4: 00bc46f9  ldr x0, [x0, #0xd78]
0x06A688C8: 54601c97  bl #0x3180a18
0x06A688CC: 40660090  adrp x0, #0x7730000
0x06A688D0: 00b846f9  ldr x0, [x0, #0xd70]
0x06A688D4: 51601c97  bl #0x3180a18
0x06A688D8: 28008052  movz w8, #0x1
0x06A688DC: 48d71a39  strb w8, [x26, #0x6b5]
0x06A688E0: 00e4006f  movi v0.2d, #0000000000000000
0x06A688E4: ff7f14a9  stp xzr, xzr, [sp, #0x140]
0x06A688E8: ff7f13a9  stp xzr, xzr, [sp, #0x130]
0x06A688EC: ff2b01b9  str wzr, [sp, #0x128]
0x06A688F0: dfb205b8  stur wzr, [x22, #0x5b]
0x06A688F4: c00204ad  stp q0, q0, [x22, #0x80]
0x06A688F8: 600640ad  ldp q0, q1, [x19]
0x06A688FC: 200340f9  ldr x0, [x25]
0x06A68900: c08601ad  stp q0, q1, [x22, #0x30]
0x06A68904: e6c74697  bl #0x3c1a89c
0x06A68908: 080340f9  ldr x8, [x24]
0x06A6890C: f30300aa  mov x19, x0
0x06A68910: e00308aa  mov x0, x8
0x06A68914: e3601c97  bl #0x3180ca0
0x06A68918: 820240f9  ldr x2, [x20]
0x06A6891C: e1031faa  mov x1, xzr
0x06A68920: e3031faa  mov x3, xzr
0x06A68924: f40300aa  mov x20, x0
0x06A68928: f8b4d297  bl #0x5f15d08
0x06A6892C: c08641ad  ldp q0, q1, [x22, #0x30]
0x06A68930: e30240f9  ldr x3, [x23]
0x06A68934: e8430391  add x8, sp, #0xd0
0x06A68938: e0c30191  add x0, sp, #0x70
0x06A6893C: e10313aa  mov x1, x19
0x06A68940: e20314aa  mov x2, x20
0x06A68944: e08703ad  stp q0, q1, [sp, #0x70]
0x06A68948: 97f54b97  bl #0x3d65fa4
0x06A6894C: c00640ad  ldp q0, q1, [x22]
0x06A68950: a10240f9  ldr x1, [x21]
0x06A68954: e0430591  add x0, sp, #0x150
0x06A68958: c00604ad  stp q0, q1, [x22, #0x80]
0x06A6895C: c7aa6497  bl #0x4393478
0x06A68960: 401800b4  cbz x0, #0x6a68c68
0x06A68964: 4a660090  adrp x10, #0x7730000
0x06A68968: 080040f9  ldr x8, [x0]
0x06A6896C: 4ac146f9  ldr x10, [x10, #0xd80]
0x06A68970: f30300aa  mov x19, x0
0x06A68974: 095d4279  ldrh w9, [x8, #0x12e]
0x06A68978: 410140f9  ldr x1, [x10]
0x06A6897C: 290100b4  cbz x9, #0x6a689a0
0x06A68980: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A68984: 4a210091  add x10, x10, #8
0x06A68988: 4b815ff8  ldur x11, [x10, #-8]
0x06A6898C: 7f0101eb  cmp x11, x1
0x06A68990: 00010054  b.eq #0x6a689b0
0x06A68994: 290500f1  subs x9, x9, #1
0x06A68998: 4a410091  add x10, x10, #0x10
0x06A6899C: 61ffff54  b.ne #0x6a68988
0x06A689A0: e00313aa  mov x0, x19
0x06A689A4: e2031f2a  mov w2, wzr
0x06A689A8: 5ab81b97  bl #0x3156b10
0x06A689AC: 04000014  b #0x6a689bc
0x06A689B0: 490180b9  ldrsw x9, [x10]
0x06A689B4: 0811098b  add x8, x8, x9, lsl #4
0x06A689B8: 00e10491  add x0, x8, #0x138
0x06A689BC: 080440a9  ldp x8, x1, [x0]
0x06A689C0: e00313aa  mov x0, x19
0x06A689C4: 00013fd6  blr x8
0x06A689C8: f30300aa  mov x19, x0
0x06A689CC: 001500b4  cbz x0, #0x6a68c6c
0x06A689D0: 385f00d0  adrp x24, #0x764e000
0x06A689D4: 59660090  adrp x25, #0x7730000
0x06A689D8: 3a6600f0  adrp x26, #0x772f000
0x06A689DC: 187344f9  ldr x24, [x24, #0x8e0]
0x06A689E0: 39c746f9  ldr x25, [x25, #0xd88]
0x06A689E4: 5aaf47f9  ldr x26, [x26, #0xf58]
0x06A689E8: e8c30191  add x8, sp, #0x70
0x06A689EC: e9430691  add x9, sp, #0x190
0x06A689F0: eac30591  add x10, sp, #0x170
0x06A689F4: 1b210091  add x27, x8, #8
0x06A689F8: 1ca50091  add x28, x8, #0x29
0x06A689FC: 1de10091  add x29, x8, #0x38
0x06A68A00: 37210091  add x23, x9, #8
0x06A68A04: 55650091  add x21, x10, #0x19
0x06A68A08: 680240f9  ldr x8, [x19]
0x06A68A0C: 010340f9  ldr x1, [x24]
0x06A68A10: 095d4279  ldrh w9, [x8, #0x12e]
0x06A68A14: 290100b4  cbz x9, #0x6a68a38
0x06A68A18: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A68A1C: 4a210091  add x10, x10, #8
0x06A68A20: 4b815ff8  ldur x11, [x10, #-8]
0x06A68A24: 7f0101eb  cmp x11, x1
0x06A68A28: 00010054  b.eq #0x6a68a48
0x06A68A2C: 290500f1  subs x9, x9, #1
0x06A68A30: 4a410091  add x10, x10, #0x10
0x06A68A34: 61ffff54  b.ne #0x6a68a20
0x06A68A38: e00313aa  mov x0, x19
0x06A68A3C: e2031f2a  mov w2, wzr
0x06A68A40: 34b81b97  bl #0x3156b10
0x06A68A44: 04000014  b #0x6a68a54
0x06A68A48: 490180b9  ldrsw x9, [x10]
0x06A68A4C: 0811098b  add x8, x8, x9, lsl #4
0x06A68A50: 00e10491  add x0, x8, #0x138
0x06A68A54: 080440a9  ldp x8, x1, [x0]
0x06A68A58: e00313aa  mov x0, x19
0x06A68A5C: 00013fd6  blr x8
0x06A68A60: 000b0036  tbz w0, #0, #0x6a68bc0
0x06A68A64: 680240f9  ldr x8, [x19]
0x06A68A68: 210340f9  ldr x1, [x25]
0x06A68A6C: 095d4279  ldrh w9, [x8, #0x12e]
0x06A68A70: 290100b4  cbz x9, #0x6a68a94
0x06A68A74: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A68A78: 4a210091  add x10, x10, #8
0x06A68A7C: 4b815ff8  ldur x11, [x10, #-8]
0x06A68A80: 7f0101eb  cmp x11, x1
0x06A68A84: 00010054  b.eq #0x6a68aa4
0x06A68A88: 290500f1  subs x9, x9, #1
0x06A68A8C: 4a410091  add x10, x10, #0x10
0x06A68A90: 61ffff54  b.ne #0x6a68a7c
0x06A68A94: e00313aa  mov x0, x19
0x06A68A98: e2031f2a  mov w2, wzr
0x06A68A9C: 1db81b97  bl #0x3156b10
0x06A68AA0: 04000014  b #0x6a68ab0
0x06A68AA4: 490180b9  ldrsw x9, [x10]
0x06A68AA8: 0811098b  add x8, x8, x9, lsl #4
0x06A68AAC: 00e10491  add x0, x8, #0x138
0x06A68AB0: 090440a9  ldp x9, x1, [x0]
0x06A68AB4: e8c30191  add x8, sp, #0x70
0x06A68AB8: e00313aa  mov x0, x19
0x06A68ABC: 20013fd6  blr x9
0x06A68AC0: 880340b9  ldr w8, [x28]
0x06A68AC4: 893340b8  ldur w9, [x28, #3]
0x06A68AC8: 610340ad  ldp q1, q0, [x27]
0x06A68ACC: a30b40ad  ldp q3, q2, [x29]
0x06A68AD0: e8fb00b9  str w8, [sp, #0xf8]
0x06A68AD4: c9b202b8  stur w9, [x22, #0x2b]
0x06A68AD8: a91340f9  ldr x9, [x29, #0x20]
0x06A68ADC: c10207ad  stp q1, q0, [x22, #0xe0]
0x06A68AE0: c00647ad  ldp q0, q1, [x22, #0xe0]
0x06A68AE4: e8fb40b9  ldr w8, [sp, #0xf8]
0x06A68AE8: e97b00f9  str x9, [sp, #0xf0]
0x06A68AEC: c9b242b8  ldur w9, [x22, #0x2b]
0x06A68AF0: c30a00ad  stp q3, q2, [x22]
0x06A68AF4: c00606ad  stp q0, q1, [x22, #0xc0]
0x06A68AF8: f43b40f9  ldr x20, [sp, #0x70]
0x06A68AFC: ea5340f9  ldr x10, [sp, #0xa0]
0x06A68B00: c20e40ad  ldp q2, q3, [x22]
0x06A68B04: e82b01b9  str w8, [sp, #0x128]
0x06A68B08: e87b40f9  ldr x8, [sp, #0xf0]
0x06A68B0C: c9b205b8  stur w9, [x22, #0x5b]
0x06A68B10: e90a40f9  ldr x9, [x23, #0x10]
0x06A68B14: e002c03d  ldr q0, [x23]
0x06A68B18: e28f03ad  stp q2, q3, [sp, #0x70]
0x06A68B1C: e84b00f9  str x8, [sp, #0x90]
0x06A68B20: e92b14a9  stp x9, x10, [sp, #0x140]
0x06A68B24: c01a803d  str q0, [x22, #0x60]
0x06A68B28: e0230591  add x0, sp, #0x148
0x06A68B2C: e1031faa  mov x1, xzr
0x06A68B30: 0c780094  bl #0x6a86b60
0x06A68B34: e10300aa  mov x1, x0
0x06A68B38: e08743ad  ldp q0, q1, [sp, #0x70]
0x06A68B3C: e84b40f9  ldr x8, [sp, #0x90]
0x06A68B40: e00702ad  stp q0, q1, [sp, #0x40]
0x06A68B44: e83300f9  str x8, [sp, #0x60]
0x06A68B48: e0030191  add x0, sp, #0x40
0x06A68B4C: e2031faa  mov x2, xzr
0x06A68B50: cfbe0094  bl #0x6a9868c
0x06A68B54: 600800b4  cbz x0, #0x6a68c60
0x06A68B58: 081840b9  ldr w8, [x0, #0x18]
0x06A68B5C: c01ac03d  ldr q0, [x22, #0x60]
0x06A68B60: e9a340f9  ldr x9, [sp, #0x140]
0x06A68B64: ea2b41b9  ldr w10, [sp, #0x128]
0x06A68B68: cbb245b8  ldur w11, [x22, #0x5b]
0x06A68B6C: e00b803d  str q0, [sp, #0x20]
0x06A68B70: e91b00f9  str x9, [sp, #0x30]
0x06A68B74: ea1b00b9  str w10, [sp, #0x18]
0x06A68B78: ebb301b8  stur w11, [sp, #0x1b]
0x06A68B7C: 540700b4  cbz x20, #0x6a68c64
0x06A68B80: 1f010071  cmp w8, #0
0x06A68B84: e00bc03d  ldr q0, [sp, #0x20]
0x06A68B88: e81b40f9  ldr x8, [sp, #0x30]
0x06A68B8C: e91b40b9  ldr w9, [sp, #0x18]
0x06A68B90: eab341b8  ldur w10, [sp, #0x1b]
0x06A68B94: 420340f9  ldr x2, [x26]
0x06A68B98: ebd79f1a  cset w11, gt
0x06A68B9C: c02a803d  str q0, [x22, #0xa0]
0x06A68BA0: e8c300f9  str x8, [sp, #0x180]
0x06A68BA4: eb230639  strb w11, [sp, #0x188]
0x06A68BA8: aa3200b8  stur w10, [x21, #3]
0x06A68BAC: a90200b9  str w9, [x21]
0x06A68BB0: e1c30591  add x1, sp, #0x170
0x06A68BB4: e00314aa  mov x0, x20
0x06A68BB8: 74d34697  bl #0x3c1d988
0x06A68BBC: 93ffff17  b #0x6a68a08
0x06A68BC0: f4031faa  mov x20, xzr
0x06A68BC4: 330300b4  cbz x19, #0x6a68c28
0x06A68BC8: 680240f9  ldr x8, [x19]
0x06A68BCC: 2a5f00d0  adrp x10, #0x764e000
0x06A68BD0: 095d4279  ldrh w9, [x8, #0x12e]
0x06A68BD4: 4a6544f9  ldr x10, [x10, #0x8c8]
0x06A68BD8: 410140f9  ldr x1, [x10]
0x06A68BDC: 290100b4  cbz x9, #0x6a68c00
0x06A68BE0: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A68BE4: 4a210091  add x10, x10, #8
0x06A68BE8: 4b815ff8  ldur x11, [x10, #-8]
0x06A68BEC: 7f0101eb  cmp x11, x1
0x06A68BF0: 00010054  b.eq #0x6a68c10
0x06A68BF4: 290500f1  subs x9, x9, #1
0x06A68BF8: 4a410091  add x10, x10, #0x10
0x06A68BFC: 61ffff54  b.ne #0x6a68be8
0x06A68C00: e00313aa  mov x0, x19
0x06A68C04: e2031f2a  mov w2, wzr
0x06A68C08: c2b71b97  bl #0x3156b10
0x06A68C0C: 04000014  b #0x6a68c1c
0x06A68C10: 490180b9  ldrsw x9, [x10]
0x06A68C14: 0811098b  add x8, x8, x9, lsl #4
0x06A68C18: 00e10491  add x0, x8, #0x138
0x06A68C1C: 080440a9  ldp x8, x1, [x0]
0x06A68C20: e00313aa  mov x0, x19
0x06A68C24: 00013fd6  blr x8
0x06A68C28: 540200b5  cbnz x20, #0x6a68c70
0x06A68C2C: e80b40f9  ldr x8, [sp, #0x10]
0x06A68C30: 081540f9  ldr x8, [x8, #0x28]
0x06A68C34: e9ef40f9  ldr x9, [sp, #0x1d8]
0x06A68C38: 1f0109eb  cmp x8, x9
0x06A68C3C: e1010054  b.ne #0x6a68c78
0x06A68C40: ff830791  add sp, sp, #0x1e0
0x06A68C44: f44f45a9  ldp x20, x19, [sp, #0x50]
0x06A68C48: f65744a9  ldp x22, x21, [sp, #0x40]
0x06A68C4C: f85f43a9  ldp x24, x23, [sp, #0x30]
0x06A68C50: fa6742a9  ldp x26, x25, [sp, #0x20]
0x06A68C54: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x06A68C58: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x06A68C5C: c0035fd6  ret
0x06A68C60: 13601c97  bl #0x3180cac
0x06A68C64: 12601c97  bl #0x3180cac
0x06A68C68: 11601c97  bl #0x3180cac
0x06A68C6C: 10601c97  bl #0x3180cac
0x06A68C70: e00314aa  mov x0, x20
0x06A68C74: 0c601c97  bl #0x3180ca4
0x06A68C78: 46971d94  bl #0x71ce990
0x06A68C7C: 07000014  b #0x6a68c98
0x06A68C80: 06000014  b #0x6a68c98
0x06A68C84: 05000014  b #0x6a68c98
0x06A68C88: 04000014  b #0x6a68c98
0x06A68C8C: 03000014  b #0x6a68c98
0x06A68C90: 02000014  b #0x6a68c98
0x06A68C94: 01000014  b #0x6a68c98
0x06A68C98: 3f040071  cmp w1, #1
0x06A68C9C: a1000054  b.ne #0x6a68cb0
0x06A68CA0: 1c971d94  bl #0x71ce910
0x06A68CA4: 140040f9  ldr x20, [x0]
0x06A68CA8: 1e971d94  bl #0x71ce920
0x06A68CAC: c6ffff17  b #0x6a68bc4
0x06A68CB0: e00b00f9  str x0, [sp, #0x10]
0x06A68CB4: f4031faa  mov x20, xzr
0x06A68CB8: 02000014  b #0x6a68cc0
0x06A68CBC: e00b00f9  str x0, [sp, #0x10]
0x06A68CC0: 330300b4  cbz x19, #0x6a68d24
0x06A68CC4: 680240f9  ldr x8, [x19]
0x06A68CC8: 2a5f00d0  adrp x10, #0x764e000
0x06A68CCC: 095d4279  ldrh w9, [x8, #0x12e]
0x06A68CD0: 4a6544f9  ldr x10, [x10, #0x8c8]
0x06A68CD4: 410140f9  ldr x1, [x10]
0x06A68CD8: 290100b4  cbz x9, #0x6a68cfc
0x06A68CDC: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A68CE0: 4a210091  add x10, x10, #8
0x06A68CE4: 4b815ff8  ldur x11, [x10, #-8]
0x06A68CE8: 7f0101eb  cmp x11, x1
0x06A68CEC: 00010054  b.eq #0x6a68d0c
0x06A68CF0: 290500f1  subs x9, x9, #1
0x06A68CF4: 4a410091  add x10, x10, #0x10
0x06A68CF8: 61ffff54  b.ne #0x6a68ce4
0x06A68CFC: e00313aa  mov x0, x19
0x06A68D00: e2031f2a  mov w2, wzr
0x06A68D04: 83b71b97  bl #0x3156b10
0x06A68D08: 04000014  b #0x6a68d18
0x06A68D0C: 490180b9  ldrsw x9, [x10]
0x06A68D10: 0811098b  add x8, x8, x9, lsl #4
0x06A68D14: 00e10491  add x0, x8, #0x138
0x06A68D18: 080440a9  ldp x8, x1, [x0]
0x06A68D1C: e00313aa  mov x0, x19
0x06A68D20: 00013fd6  blr x8
0x06A68D24: 740000b5  cbnz x20, #0x6a68d30
0x06A68D28: e00b40f9  ldr x0, [sp, #0x10]
0x06A68D2C: 0bf31f97  bl #0x3265958
0x06A68D30: e00314aa  mov x0, x20
0x06A68D34: dc5f1c97  bl #0x3180ca4
0x06A68D38: f7810e97  bl #0x2e09514

; RVA 0x6A68F94 | public void .ctor() { }
; bytes=8 sha256=13102c5fd0698bc3ffa6acf792adff33811e356d7622305f2b86b21fae47085f status=arm64_complete_bound indexed_start=True
0x06A68F94: e1031faa  mov x1, xzr
0x06A68F98: 99c5b117  b #0x56da5fc

