; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 32793 Merger.MergeBoard.PowerBoost.Providers.MergeBoardPowerBoostDataProvider
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6AD13C4 | public int get_CurrentPowerBoost() { }
; bytes=340 sha256=3045a3e8b6713b26343b095d77a836764ddd0f11cb35731765422afe94064ac2 status=arm64_complete_bound indexed_start=True
0x06AD13C4: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06AD13C8: f44f01a9  stp x20, x19, [sp, #0x10]
0x06AD13CC: d49200b0  adrp x20, #0x7d2a000
0x06AD13D0: 88326a39  ldrb w8, [x20, #0xa8c]
0x06AD13D4: f30300aa  mov x19, x0
0x06AD13D8: 88010037  tbnz w8, #0, #0x6ad1408
0x06AD13DC: e05c00d0  adrp x0, #0x766f000
0x06AD13E0: 00f844f9  ldr x0, [x0, #0x9f0]
0x06AD13E4: 8dbd1a97  bl #0x3180a18
0x06AD13E8: 006300d0  adrp x0, #0x7733000
0x06AD13EC: 001047f9  ldr x0, [x0, #0xe20]
0x06AD13F0: 8abd1a97  bl #0x3180a18
0x06AD13F4: e05b00b0  adrp x0, #0x764e000
0x06AD13F8: 000447f9  ldr x0, [x0, #0xe08]
0x06AD13FC: 87bd1a97  bl #0x3180a18
0x06AD1400: 28008052  movz w8, #0x1
0x06AD1404: 88322a39  strb w8, [x20, #0xa8c]
0x06AD1408: 740a40f9  ldr x20, [x19, #0x10]
0x06AD140C: 540800b4  cbz x20, #0x6ad1514
0x06AD1410: 156300d0  adrp x21, #0x7733000
0x06AD1414: 880240f9  ldr x8, [x20]
0x06AD1418: b51247f9  ldr x21, [x21, #0xe20]
0x06AD141C: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD1420: a10240f9  ldr x1, [x21]
0x06AD1424: 290100b4  cbz x9, #0x6ad1448
0x06AD1428: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD142C: 4a210091  add x10, x10, #8
0x06AD1430: 4b815ff8  ldur x11, [x10, #-8]
0x06AD1434: 7f0101eb  cmp x11, x1
0x06AD1438: 00010054  b.eq #0x6ad1458
0x06AD143C: 290500f1  subs x9, x9, #1
0x06AD1440: 4a410091  add x10, x10, #0x10
0x06AD1444: 61ffff54  b.ne #0x6ad1430
0x06AD1448: e00314aa  mov x0, x20
0x06AD144C: e2031f2a  mov w2, wzr
0x06AD1450: b0151a97  bl #0x3156b10
0x06AD1454: 04000014  b #0x6ad1464
0x06AD1458: 490180b9  ldrsw x9, [x10]
0x06AD145C: 0811098b  add x8, x8, x9, lsl #4
0x06AD1460: 00e10491  add x0, x8, #0x138
0x06AD1464: 080440a9  ldp x8, x1, [x0]
0x06AD1468: e00314aa  mov x0, x20
0x06AD146C: 00013fd6  blr x8
0x06AD1470: 200500b4  cbz x0, #0x6ad1514
0x06AD1474: 740a40f9  ldr x20, [x19, #0x10]
0x06AD1478: f40400b4  cbz x20, #0x6ad1514
0x06AD147C: 880240f9  ldr x8, [x20]
0x06AD1480: a10240f9  ldr x1, [x21]
0x06AD1484: f55b00b0  adrp x21, #0x764e000
0x06AD1488: 132040b9  ldr w19, [x0, #0x20]
0x06AD148C: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD1490: b50647f9  ldr x21, [x21, #0xe08]
0x06AD1494: 290100b4  cbz x9, #0x6ad14b8
0x06AD1498: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD149C: 4a210091  add x10, x10, #8
0x06AD14A0: 4b815ff8  ldur x11, [x10, #-8]
0x06AD14A4: 7f0101eb  cmp x11, x1
0x06AD14A8: 00010054  b.eq #0x6ad14c8
0x06AD14AC: 290500f1  subs x9, x9, #1
0x06AD14B0: 4a410091  add x10, x10, #0x10
0x06AD14B4: 61ffff54  b.ne #0x6ad14a0
0x06AD14B8: 22008052  movz w2, #0x1
0x06AD14BC: e00314aa  mov x0, x20
0x06AD14C0: 94151a97  bl #0x3156b10
0x06AD14C4: 05000014  b #0x6ad14d8
0x06AD14C8: 490140b9  ldr w9, [x10]
0x06AD14CC: 29050011  add w9, w9, #1
0x06AD14D0: 08d1298b  add x8, x8, w9, sxtw #4
0x06AD14D4: 00e10491  add x0, x8, #0x138
0x06AD14D8: 080440a9  ldp x8, x1, [x0]
0x06AD14DC: e00314aa  mov x0, x20
0x06AD14E0: 00013fd6  blr x8
0x06AD14E4: a80240f9  ldr x8, [x21]
0x06AD14E8: f403002a  mov w20, w0
0x06AD14EC: 09e140b9  ldr w9, [x8, #0xe0]
0x06AD14F0: 69000035  cbnz w9, #0x6ad14fc
0x06AD14F4: e00308aa  mov x0, x8
0x06AD14F8: a5bd1a97  bl #0x3180b8c
0x06AD14FC: e003132a  mov w0, w19
0x06AD1500: e103142a  mov w1, w20
0x06AD1504: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06AD1508: e2031faa  mov x2, xzr
0x06AD150C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06AD1510: ca17af17  b #0x5697438
0x06AD1514: e6bd1a97  bl #0x3180cac

; RVA 0x6AD1518 | public int get_MaxAvailableBoost() { }
; bytes=160 sha256=a6d11ddd01773a5b3cd95811a209163959da370a8ea545b0589dc6c5fe01be1a status=arm64_complete_bound indexed_start=True
0x06AD1518: fe0f1ef8  str x30, [sp, #-0x20]!
0x06AD151C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06AD1520: d49200b0  adrp x20, #0x7d2a000
0x06AD1524: 88366a39  ldrb w8, [x20, #0xa8d]
0x06AD1528: f30300aa  mov x19, x0
0x06AD152C: c8000037  tbnz w8, #0, #0x6ad1544
0x06AD1530: 006300d0  adrp x0, #0x7733000
0x06AD1534: 006847f9  ldr x0, [x0, #0xed0]
0x06AD1538: 38bd1a97  bl #0x3180a18
0x06AD153C: 28008052  movz w8, #0x1
0x06AD1540: 88362a39  strb w8, [x20, #0xa8d]
0x06AD1544: 731240f9  ldr x19, [x19, #0x20]
0x06AD1548: 730300b4  cbz x19, #0x6ad15b4
0x06AD154C: 0a6300d0  adrp x10, #0x7733000
0x06AD1550: 680240f9  ldr x8, [x19]
0x06AD1554: 4a6947f9  ldr x10, [x10, #0xed0]
0x06AD1558: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD155C: 410140f9  ldr x1, [x10]
0x06AD1560: 290100b4  cbz x9, #0x6ad1584
0x06AD1564: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD1568: 4a210091  add x10, x10, #8
0x06AD156C: 4b815ff8  ldur x11, [x10, #-8]
0x06AD1570: 7f0101eb  cmp x11, x1
0x06AD1574: 00010054  b.eq #0x6ad1594
0x06AD1578: 290500f1  subs x9, x9, #1
0x06AD157C: 4a410091  add x10, x10, #0x10
0x06AD1580: 61ffff54  b.ne #0x6ad156c
0x06AD1584: e00313aa  mov x0, x19
0x06AD1588: e2031f2a  mov w2, wzr
0x06AD158C: 61151a97  bl #0x3156b10
0x06AD1590: 04000014  b #0x6ad15a0
0x06AD1594: 490180b9  ldrsw x9, [x10]
0x06AD1598: 0811098b  add x8, x8, x9, lsl #4
0x06AD159C: 00e10491  add x0, x8, #0x138
0x06AD15A0: 020440a9  ldp x2, x1, [x0]
0x06AD15A4: e00313aa  mov x0, x19
0x06AD15A8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06AD15AC: fe0742f8  ldr x30, [sp], #0x20
0x06AD15B0: 40001fd6  br x2
0x06AD15B4: bebd1a97  bl #0x3180cac

; RVA 0x6AD15B8 | public bool get_IsPowerBoostActive() { }
; bytes=300 sha256=613d63576b12597e363758372eb69612b2c92f4f4a6d641020adc90a216174c2 status=arm64_complete_bound indexed_start=True
0x06AD15B8: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06AD15BC: f44f01a9  stp x20, x19, [sp, #0x10]
0x06AD15C0: d49200b0  adrp x20, #0x7d2a000
0x06AD15C4: 883a6a39  ldrb w8, [x20, #0xa8e]
0x06AD15C8: f30300aa  mov x19, x0
0x06AD15CC: c8000037  tbnz w8, #0, #0x6ad15e4
0x06AD15D0: 006300d0  adrp x0, #0x7733000
0x06AD15D4: 001047f9  ldr x0, [x0, #0xe20]
0x06AD15D8: 10bd1a97  bl #0x3180a18
0x06AD15DC: 28008052  movz w8, #0x1
0x06AD15E0: 883a2a39  strb w8, [x20, #0xa8e]
0x06AD15E4: 740a40f9  ldr x20, [x19, #0x10]
0x06AD15E8: d40700b4  cbz x20, #0x6ad16e0
0x06AD15EC: 156300d0  adrp x21, #0x7733000
0x06AD15F0: 880240f9  ldr x8, [x20]
0x06AD15F4: b51247f9  ldr x21, [x21, #0xe20]
0x06AD15F8: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD15FC: a10240f9  ldr x1, [x21]
0x06AD1600: 290100b4  cbz x9, #0x6ad1624
0x06AD1604: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD1608: 4a210091  add x10, x10, #8
0x06AD160C: 4b815ff8  ldur x11, [x10, #-8]
0x06AD1610: 7f0101eb  cmp x11, x1
0x06AD1614: 00010054  b.eq #0x6ad1634
0x06AD1618: 290500f1  subs x9, x9, #1
0x06AD161C: 4a410091  add x10, x10, #0x10
0x06AD1620: 61ffff54  b.ne #0x6ad160c
0x06AD1624: a2008052  movz w2, #0x5
0x06AD1628: e00314aa  mov x0, x20
0x06AD162C: 39151a97  bl #0x3156b10
0x06AD1630: 05000014  b #0x6ad1644
0x06AD1634: 490140b9  ldr w9, [x10]
0x06AD1638: 29150011  add w9, w9, #5
0x06AD163C: 08d1298b  add x8, x8, w9, sxtw #4
0x06AD1640: 00e10491  add x0, x8, #0x138
0x06AD1644: 080440a9  ldp x8, x1, [x0]
0x06AD1648: e00314aa  mov x0, x20
0x06AD164C: 00013fd6  blr x8
0x06AD1650: c0020036  tbz w0, #0, #0x6ad16a8
0x06AD1654: e00313aa  mov x0, x19
0x06AD1658: 5bffff97  bl #0x6ad13c4
0x06AD165C: 740a40f9  ldr x20, [x19, #0x10]
0x06AD1660: 140400b4  cbz x20, #0x6ad16e0
0x06AD1664: 880240f9  ldr x8, [x20]
0x06AD1668: a10240f9  ldr x1, [x21]
0x06AD166C: f303002a  mov w19, w0
0x06AD1670: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD1674: 290100b4  cbz x9, #0x6ad1698
0x06AD1678: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD167C: 4a210091  add x10, x10, #8
0x06AD1680: 4b815ff8  ldur x11, [x10, #-8]
0x06AD1684: 7f0101eb  cmp x11, x1
0x06AD1688: 40010054  b.eq #0x6ad16b0
0x06AD168C: 290500f1  subs x9, x9, #1
0x06AD1690: 4a410091  add x10, x10, #0x10
0x06AD1694: 61ffff54  b.ne #0x6ad1680
0x06AD1698: 22008052  movz w2, #0x1
0x06AD169C: e00314aa  mov x0, x20
0x06AD16A0: 1c151a97  bl #0x3156b10
0x06AD16A4: 07000014  b #0x6ad16c0
0x06AD16A8: e0031f2a  mov w0, wzr
0x06AD16AC: 0a000014  b #0x6ad16d4
0x06AD16B0: 490140b9  ldr w9, [x10]
0x06AD16B4: 29050011  add w9, w9, #1
0x06AD16B8: 08d1298b  add x8, x8, w9, sxtw #4
0x06AD16BC: 00e10491  add x0, x8, #0x138
0x06AD16C0: 080440a9  ldp x8, x1, [x0]
0x06AD16C4: e00314aa  mov x0, x20
0x06AD16C8: 00013fd6  blr x8
0x06AD16CC: 7f02006b  cmp w19, w0
0x06AD16D0: e0d79f1a  cset w0, gt
0x06AD16D4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06AD16D8: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06AD16DC: c0035fd6  ret
0x06AD16E0: 73bd1a97  bl #0x3180cac

; RVA 0x6AD16E4 | public bool get_IsMaxBoostActive() { }
; bytes=336 sha256=a75fbb2bd450e2be6278b4a6e77532e86117f78e3094706158c367a625efd879 status=arm64_complete_bound indexed_start=True
0x06AD16E4: fe0f1df8  str x30, [sp, #-0x30]!
0x06AD16E8: f65701a9  stp x22, x21, [sp, #0x10]
0x06AD16EC: f44f02a9  stp x20, x19, [sp, #0x20]
0x06AD16F0: d49200b0  adrp x20, #0x7d2a000
0x06AD16F4: 883e6a39  ldrb w8, [x20, #0xa8f]
0x06AD16F8: f30300aa  mov x19, x0
0x06AD16FC: c8000037  tbnz w8, #0, #0x6ad1714
0x06AD1700: 006300d0  adrp x0, #0x7733000
0x06AD1704: 001047f9  ldr x0, [x0, #0xe20]
0x06AD1708: c4bc1a97  bl #0x3180a18
0x06AD170C: 28008052  movz w8, #0x1
0x06AD1710: 883e2a39  strb w8, [x20, #0xa8f]
0x06AD1714: 740a40f9  ldr x20, [x19, #0x10]
0x06AD1718: d40800b4  cbz x20, #0x6ad1830
0x06AD171C: 166300d0  adrp x22, #0x7733000
0x06AD1720: 880240f9  ldr x8, [x20]
0x06AD1724: d61247f9  ldr x22, [x22, #0xe20]
0x06AD1728: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD172C: c10240f9  ldr x1, [x22]
0x06AD1730: 290100b4  cbz x9, #0x6ad1754
0x06AD1734: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD1738: 4a210091  add x10, x10, #8
0x06AD173C: 4b815ff8  ldur x11, [x10, #-8]
0x06AD1740: 7f0101eb  cmp x11, x1
0x06AD1744: 00010054  b.eq #0x6ad1764
0x06AD1748: 290500f1  subs x9, x9, #1
0x06AD174C: 4a410091  add x10, x10, #0x10
0x06AD1750: 61ffff54  b.ne #0x6ad173c
0x06AD1754: a2008052  movz w2, #0x5
0x06AD1758: e00314aa  mov x0, x20
0x06AD175C: ed141a97  bl #0x3156b10
0x06AD1760: 05000014  b #0x6ad1774
0x06AD1764: 490140b9  ldr w9, [x10]
0x06AD1768: 29150011  add w9, w9, #5
0x06AD176C: 08d1298b  add x8, x8, w9, sxtw #4
0x06AD1770: 00e10491  add x0, x8, #0x138
0x06AD1774: 080440a9  ldp x8, x1, [x0]
0x06AD1778: e00314aa  mov x0, x20
0x06AD177C: 00013fd6  blr x8
0x06AD1780: e0040036  tbz w0, #0, #0x6ad181c
0x06AD1784: e00313aa  mov x0, x19
0x06AD1788: 64ffff97  bl #0x6ad1518
0x06AD178C: 750a40f9  ldr x21, [x19, #0x10]
0x06AD1790: 150500b4  cbz x21, #0x6ad1830
0x06AD1794: a80240f9  ldr x8, [x21]
0x06AD1798: c10240f9  ldr x1, [x22]
0x06AD179C: f403002a  mov w20, w0
0x06AD17A0: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD17A4: 290100b4  cbz x9, #0x6ad17c8
0x06AD17A8: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD17AC: 4a210091  add x10, x10, #8
0x06AD17B0: 4b815ff8  ldur x11, [x10, #-8]
0x06AD17B4: 7f0101eb  cmp x11, x1
0x06AD17B8: 00010054  b.eq #0x6ad17d8
0x06AD17BC: 290500f1  subs x9, x9, #1
0x06AD17C0: 4a410091  add x10, x10, #0x10
0x06AD17C4: 61ffff54  b.ne #0x6ad17b0
0x06AD17C8: 42008052  movz w2, #0x2
0x06AD17CC: e00315aa  mov x0, x21
0x06AD17D0: d0141a97  bl #0x3156b10
0x06AD17D4: 05000014  b #0x6ad17e8
0x06AD17D8: 490140b9  ldr w9, [x10]
0x06AD17DC: 29090011  add w9, w9, #2
0x06AD17E0: 08d1298b  add x8, x8, w9, sxtw #4
0x06AD17E4: 00e10491  add x0, x8, #0x138
0x06AD17E8: 080440a9  ldp x8, x1, [x0]
0x06AD17EC: e00315aa  mov x0, x21
0x06AD17F0: 00013fd6  blr x8
0x06AD17F4: 9f02006b  cmp w20, w0
0x06AD17F8: 2d010054  b.le #0x6ad181c
0x06AD17FC: e00313aa  mov x0, x19
0x06AD1800: f1feff97  bl #0x6ad13c4
0x06AD1804: f403002a  mov w20, w0
0x06AD1808: e00313aa  mov x0, x19
0x06AD180C: 43ffff97  bl #0x6ad1518
0x06AD1810: 9f02006b  cmp w20, w0
0x06AD1814: e0b79f1a  cset w0, ge
0x06AD1818: 02000014  b #0x6ad1820
0x06AD181C: e0031f2a  mov w0, wzr
0x06AD1820: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06AD1824: f65741a9  ldp x22, x21, [sp, #0x10]
0x06AD1828: fe0743f8  ldr x30, [sp], #0x30
0x06AD182C: c0035fd6  ret
0x06AD1830: 1fbd1a97  bl #0x3180cac

; RVA 0x6AD1834 | public bool get_IsPowerBoostAvailable() { }
; bytes=164 sha256=3c2d537d8ebf3fa52afe17bfb825ec8339268808f160f9851f96d486da91f4c7 status=arm64_complete_bound indexed_start=True
0x06AD1834: fe0f1ef8  str x30, [sp, #-0x20]!
0x06AD1838: f44f01a9  stp x20, x19, [sp, #0x10]
0x06AD183C: d49200b0  adrp x20, #0x7d2a000
0x06AD1840: 88426a39  ldrb w8, [x20, #0xa90]
0x06AD1844: f30300aa  mov x19, x0
0x06AD1848: c8000037  tbnz w8, #0, #0x6ad1860
0x06AD184C: 006300d0  adrp x0, #0x7733000
0x06AD1850: 001047f9  ldr x0, [x0, #0xe20]
0x06AD1854: 71bc1a97  bl #0x3180a18
0x06AD1858: 28008052  movz w8, #0x1
0x06AD185C: 88422a39  strb w8, [x20, #0xa90]
0x06AD1860: 730a40f9  ldr x19, [x19, #0x10]
0x06AD1864: 930300b4  cbz x19, #0x6ad18d4
0x06AD1868: 0a6300d0  adrp x10, #0x7733000
0x06AD186C: 680240f9  ldr x8, [x19]
0x06AD1870: 4a1147f9  ldr x10, [x10, #0xe20]
0x06AD1874: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD1878: 410140f9  ldr x1, [x10]
0x06AD187C: 290100b4  cbz x9, #0x6ad18a0
0x06AD1880: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD1884: 4a210091  add x10, x10, #8
0x06AD1888: 4b815ff8  ldur x11, [x10, #-8]
0x06AD188C: 7f0101eb  cmp x11, x1
0x06AD1890: 00010054  b.eq #0x6ad18b0
0x06AD1894: 290500f1  subs x9, x9, #1
0x06AD1898: 4a410091  add x10, x10, #0x10
0x06AD189C: 61ffff54  b.ne #0x6ad1888
0x06AD18A0: a2008052  movz w2, #0x5
0x06AD18A4: e00313aa  mov x0, x19
0x06AD18A8: 9a141a97  bl #0x3156b10
0x06AD18AC: 05000014  b #0x6ad18c0
0x06AD18B0: 490140b9  ldr w9, [x10]
0x06AD18B4: 29150011  add w9, w9, #5
0x06AD18B8: 08d1298b  add x8, x8, w9, sxtw #4
0x06AD18BC: 00e10491  add x0, x8, #0x138
0x06AD18C0: 020440a9  ldp x2, x1, [x0]
0x06AD18C4: e00313aa  mov x0, x19
0x06AD18C8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06AD18CC: fe0742f8  ldr x30, [sp], #0x20
0x06AD18D0: 40001fd6  br x2
0x06AD18D4: f6bc1a97  bl #0x3180cac

; RVA 0x6AD18D8 | public bool IsPowerBoostable(string id) { }
; bytes=680 sha256=28f338b215f012d869ebd5dceaa051e8b48c166b29c44f59a8338606479fb284 status=arm64_complete_bound indexed_start=True
0x06AD18D8: fe0f1df8  str x30, [sp, #-0x30]!
0x06AD18DC: f65701a9  stp x22, x21, [sp, #0x10]
0x06AD18E0: f44f02a9  stp x20, x19, [sp, #0x20]
0x06AD18E4: d59200b0  adrp x21, #0x7d2a000
0x06AD18E8: a8466a39  ldrb w8, [x21, #0xa91]
0x06AD18EC: f30301aa  mov x19, x1
0x06AD18F0: f40300aa  mov x20, x0
0x06AD18F4: e8010037  tbnz w8, #0, #0x6ad1930
0x06AD18F8: 405d00f0  adrp x0, #0x767c000
0x06AD18FC: 002441f9  ldr x0, [x0, #0x248]
0x06AD1900: 46bc1a97  bl #0x3180a18
0x06AD1904: 605d00b0  adrp x0, #0x767e000
0x06AD1908: 00a442f9  ldr x0, [x0, #0x548]
0x06AD190C: 43bc1a97  bl #0x3180a18
0x06AD1910: 405d00b0  adrp x0, #0x767a000
0x06AD1914: 004c42f9  ldr x0, [x0, #0x498]
0x06AD1918: 40bc1a97  bl #0x3180a18
0x06AD191C: 405d0090  adrp x0, #0x7679000
0x06AD1920: 001044f9  ldr x0, [x0, #0x820]
0x06AD1924: 3dbc1a97  bl #0x3180a18
0x06AD1928: 28008052  movz w8, #0x1
0x06AD192C: a8462a39  strb w8, [x21, #0xa91]
0x06AD1930: e00313aa  mov x0, x19
0x06AD1934: e1031faa  mov x1, xzr
0x06AD1938: 5d98a897  bl #0x54f7aac
0x06AD193C: 20100037  tbnz w0, #0, #0x6ad1b40
0x06AD1940: 950e40f9  ldr x21, [x20, #0x18]
0x06AD1944: d51100b4  cbz x21, #0x6ad1b7c
0x06AD1948: 565d00b0  adrp x22, #0x767a000
0x06AD194C: a80240f9  ldr x8, [x21]
0x06AD1950: d64e42f9  ldr x22, [x22, #0x498]
0x06AD1954: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD1958: c10240f9  ldr x1, [x22]
0x06AD195C: 290100b4  cbz x9, #0x6ad1980
0x06AD1960: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD1964: 4a210091  add x10, x10, #8
0x06AD1968: 4b815ff8  ldur x11, [x10, #-8]
0x06AD196C: 7f0101eb  cmp x11, x1
0x06AD1970: 00010054  b.eq #0x6ad1990
0x06AD1974: 290500f1  subs x9, x9, #1
0x06AD1978: 4a410091  add x10, x10, #0x10
0x06AD197C: 61ffff54  b.ne #0x6ad1968
0x06AD1980: 22018052  movz w2, #0x9
0x06AD1984: e00315aa  mov x0, x21
0x06AD1988: 62141a97  bl #0x3156b10
0x06AD198C: 05000014  b #0x6ad19a0
0x06AD1990: 490140b9  ldr w9, [x10]
0x06AD1994: 29250011  add w9, w9, #9
0x06AD1998: 08d1298b  add x8, x8, w9, sxtw #4
0x06AD199C: 00e10491  add x0, x8, #0x138
0x06AD19A0: 080840a9  ldp x8, x2, [x0]
0x06AD19A4: e00315aa  mov x0, x21
0x06AD19A8: e10313aa  mov x1, x19
0x06AD19AC: 00013fd6  blr x8
0x06AD19B0: 800c00b4  cbz x0, #0x6ad1b40
0x06AD19B4: 4a5d0090  adrp x10, #0x7679000
0x06AD19B8: 080040f9  ldr x8, [x0]
0x06AD19BC: 940e40f9  ldr x20, [x20, #0x18]
0x06AD19C0: 4a1144f9  ldr x10, [x10, #0x820]
0x06AD19C4: f30300aa  mov x19, x0
0x06AD19C8: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD19CC: 410140f9  ldr x1, [x10]
0x06AD19D0: 290100b4  cbz x9, #0x6ad19f4
0x06AD19D4: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD19D8: 4a210091  add x10, x10, #8
0x06AD19DC: 4b815ff8  ldur x11, [x10, #-8]
0x06AD19E0: 7f0101eb  cmp x11, x1
0x06AD19E4: 00010054  b.eq #0x6ad1a04
0x06AD19E8: 290500f1  subs x9, x9, #1
0x06AD19EC: 4a410091  add x10, x10, #0x10
0x06AD19F0: 61ffff54  b.ne #0x6ad19dc
0x06AD19F4: e00313aa  mov x0, x19
0x06AD19F8: e2031f2a  mov w2, wzr
0x06AD19FC: 45141a97  bl #0x3156b10
0x06AD1A00: 04000014  b #0x6ad1a10
0x06AD1A04: 490180b9  ldrsw x9, [x10]
0x06AD1A08: 0811098b  add x8, x8, x9, lsl #4
0x06AD1A0C: 00e10491  add x0, x8, #0x138
0x06AD1A10: 080440a9  ldp x8, x1, [x0]
0x06AD1A14: e00313aa  mov x0, x19
0x06AD1A18: 00013fd6  blr x8
0x06AD1A1C: 140b00b4  cbz x20, #0x6ad1b7c
0x06AD1A20: 880240f9  ldr x8, [x20]
0x06AD1A24: c10240f9  ldr x1, [x22]
0x06AD1A28: f50300aa  mov x21, x0
0x06AD1A2C: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD1A30: 290100b4  cbz x9, #0x6ad1a54
0x06AD1A34: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD1A38: 4a210091  add x10, x10, #8
0x06AD1A3C: 4b815ff8  ldur x11, [x10, #-8]
0x06AD1A40: 7f0101eb  cmp x11, x1
0x06AD1A44: 00010054  b.eq #0x6ad1a64
0x06AD1A48: 290500f1  subs x9, x9, #1
0x06AD1A4C: 4a410091  add x10, x10, #0x10
0x06AD1A50: 61ffff54  b.ne #0x6ad1a3c
0x06AD1A54: 82008052  movz w2, #0x4
0x06AD1A58: e00314aa  mov x0, x20
0x06AD1A5C: 2d141a97  bl #0x3156b10
0x06AD1A60: 05000014  b #0x6ad1a74
0x06AD1A64: 490140b9  ldr w9, [x10]
0x06AD1A68: 29110011  add w9, w9, #4
0x06AD1A6C: 08d1298b  add x8, x8, w9, sxtw #4
0x06AD1A70: 00e10491  add x0, x8, #0x138
0x06AD1A74: 080840a9  ldp x8, x2, [x0]
0x06AD1A78: e00314aa  mov x0, x20
0x06AD1A7C: e10315aa  mov x1, x21
0x06AD1A80: 00013fd6  blr x8
0x06AD1A84: 6a5d00b0  adrp x10, #0x767e000
0x06AD1A88: 680240f9  ldr x8, [x19]
0x06AD1A8C: 4aa542f9  ldr x10, [x10, #0x548]
0x06AD1A90: f40300aa  mov x20, x0
0x06AD1A94: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD1A98: 410140f9  ldr x1, [x10]
0x06AD1A9C: 290100b4  cbz x9, #0x6ad1ac0
0x06AD1AA0: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD1AA4: 4a210091  add x10, x10, #8
0x06AD1AA8: 4b815ff8  ldur x11, [x10, #-8]
0x06AD1AAC: 7f0101eb  cmp x11, x1
0x06AD1AB0: 00010054  b.eq #0x6ad1ad0
0x06AD1AB4: 290500f1  subs x9, x9, #1
0x06AD1AB8: 4a410091  add x10, x10, #0x10
0x06AD1ABC: 61ffff54  b.ne #0x6ad1aa8
0x06AD1AC0: e00313aa  mov x0, x19
0x06AD1AC4: e2031f2a  mov w2, wzr
0x06AD1AC8: 12141a97  bl #0x3156b10
0x06AD1ACC: 04000014  b #0x6ad1adc
0x06AD1AD0: 490180b9  ldrsw x9, [x10]
0x06AD1AD4: 0811098b  add x8, x8, x9, lsl #4
0x06AD1AD8: 00e10491  add x0, x8, #0x138
0x06AD1ADC: 080440a9  ldp x8, x1, [x0]
0x06AD1AE0: e00313aa  mov x0, x19
0x06AD1AE4: 00013fd6  blr x8
0x06AD1AE8: a00400b4  cbz x0, #0x6ad1b7c
0x06AD1AEC: b40200b4  cbz x20, #0x6ad1b40
0x06AD1AF0: 08404039  ldrb w8, [x0, #0x10]
0x06AD1AF4: 68020034  cbz w8, #0x6ad1b40
0x06AD1AF8: 4a5d00f0  adrp x10, #0x767c000
0x06AD1AFC: 880240f9  ldr x8, [x20]
0x06AD1B00: 4a2541f9  ldr x10, [x10, #0x248]
0x06AD1B04: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD1B08: 410140f9  ldr x1, [x10]
0x06AD1B0C: 290100b4  cbz x9, #0x6ad1b30
0x06AD1B10: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD1B14: 4a210091  add x10, x10, #8
0x06AD1B18: 4b815ff8  ldur x11, [x10, #-8]
0x06AD1B1C: 7f0101eb  cmp x11, x1
0x06AD1B20: a0010054  b.eq #0x6ad1b54
0x06AD1B24: 290500f1  subs x9, x9, #1
0x06AD1B28: 4a410091  add x10, x10, #0x10
0x06AD1B2C: 61ffff54  b.ne #0x6ad1b18
0x06AD1B30: 82008052  movz w2, #0x4
0x06AD1B34: e00314aa  mov x0, x20
0x06AD1B38: f6131a97  bl #0x3156b10
0x06AD1B3C: 0a000014  b #0x6ad1b64
0x06AD1B40: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06AD1B44: f65741a9  ldp x22, x21, [sp, #0x10]
0x06AD1B48: e0031f2a  mov w0, wzr
0x06AD1B4C: fe0743f8  ldr x30, [sp], #0x30
0x06AD1B50: c0035fd6  ret
0x06AD1B54: 490140b9  ldr w9, [x10]
0x06AD1B58: 29110011  add w9, w9, #4
0x06AD1B5C: 08d1298b  add x8, x8, w9, sxtw #4
0x06AD1B60: 00e10491  add x0, x8, #0x138
0x06AD1B64: 020440a9  ldp x2, x1, [x0]
0x06AD1B68: e00314aa  mov x0, x20
0x06AD1B6C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06AD1B70: f65741a9  ldp x22, x21, [sp, #0x10]
0x06AD1B74: fe0743f8  ldr x30, [sp], #0x30
0x06AD1B78: 40001fd6  br x2
0x06AD1B7C: 4cbc1a97  bl #0x3180cac

; RVA 0x6AD1B80 | public IEnumerable<int> GetPlayableBoosts() { }
; bytes=164 sha256=41cac73a8837bab00482c037a2665f90fdd1cc4440dcd89e0fb919f40f463979 status=arm64_complete_bound indexed_start=True
0x06AD1B80: fe0f1ef8  str x30, [sp, #-0x20]!
0x06AD1B84: f44f01a9  stp x20, x19, [sp, #0x10]
0x06AD1B88: d49200b0  adrp x20, #0x7d2a000
0x06AD1B8C: 884a6a39  ldrb w8, [x20, #0xa92]
0x06AD1B90: f30300aa  mov x19, x0
0x06AD1B94: c8000037  tbnz w8, #0, #0x6ad1bac
0x06AD1B98: 006300d0  adrp x0, #0x7733000
0x06AD1B9C: 006847f9  ldr x0, [x0, #0xed0]
0x06AD1BA0: 9ebb1a97  bl #0x3180a18
0x06AD1BA4: 28008052  movz w8, #0x1
0x06AD1BA8: 884a2a39  strb w8, [x20, #0xa92]
0x06AD1BAC: 731240f9  ldr x19, [x19, #0x20]
0x06AD1BB0: 930300b4  cbz x19, #0x6ad1c20
0x06AD1BB4: 0a6300d0  adrp x10, #0x7733000
0x06AD1BB8: 680240f9  ldr x8, [x19]
0x06AD1BBC: 4a6947f9  ldr x10, [x10, #0xed0]
0x06AD1BC0: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD1BC4: 410140f9  ldr x1, [x10]
0x06AD1BC8: 290100b4  cbz x9, #0x6ad1bec
0x06AD1BCC: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD1BD0: 4a210091  add x10, x10, #8
0x06AD1BD4: 4b815ff8  ldur x11, [x10, #-8]
0x06AD1BD8: 7f0101eb  cmp x11, x1
0x06AD1BDC: 00010054  b.eq #0x6ad1bfc
0x06AD1BE0: 290500f1  subs x9, x9, #1
0x06AD1BE4: 4a410091  add x10, x10, #0x10
0x06AD1BE8: 61ffff54  b.ne #0x6ad1bd4
0x06AD1BEC: 22018052  movz w2, #0x9
0x06AD1BF0: e00313aa  mov x0, x19
0x06AD1BF4: c7131a97  bl #0x3156b10
0x06AD1BF8: 05000014  b #0x6ad1c0c
0x06AD1BFC: 490140b9  ldr w9, [x10]
0x06AD1C00: 29250011  add w9, w9, #9
0x06AD1C04: 08d1298b  add x8, x8, w9, sxtw #4
0x06AD1C08: 00e10491  add x0, x8, #0x138
0x06AD1C0C: 020440a9  ldp x2, x1, [x0]
0x06AD1C10: e00313aa  mov x0, x19
0x06AD1C14: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06AD1C18: fe0742f8  ldr x30, [sp], #0x20
0x06AD1C1C: 40001fd6  br x2
0x06AD1C20: 23bc1a97  bl #0x3180cac

; RVA 0x6AD1C24 | public void .ctor() { }
; bytes=8 sha256=f832895820ab2e4bb81d62b68b0654e4abf2bd0c135be8c721841be80e52d05b status=arm64_complete_bound indexed_start=True
0x06AD1C24: e1031faa  mov x1, xzr
0x06AD1C28: 7522b017  b #0x56da5fc

