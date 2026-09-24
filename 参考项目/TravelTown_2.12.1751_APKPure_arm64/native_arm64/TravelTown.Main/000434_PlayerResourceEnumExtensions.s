; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 434 MergeEngine.Model.PlayerResourceEnumExtensions
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x61253C0 | public static bool IsTool(PlayerResourceEnum resource) { }
; bytes=16 sha256=8a5a1b9a21151cf81a36820d46412d047e3b1632db68e8fa5a289e464a881579 status=arm64_complete_bound indexed_start=True
0x061253C0: 081c0051  sub w8, w0, #7
0x061253C4: 1f290071  cmp w8, #0xa
0x061253C8: e0279f1a  cset w0, lo
0x061253CC: c0035fd6  ret

; RVA 0x61253D0 | public static string ConvertToString(PlayerResourceEnum resource) { }
; bytes=380 sha256=e8c9a45913fb52809a3cbdde587f49089ee143d75dc8c7f4fc9e1fff47369eef status=arm64_complete_bound indexed_start=True
0x061253D0: ff0301d1  sub sp, sp, #0x40
0x061253D4: fe1300f9  str x30, [sp, #0x20]
0x061253D8: f44f03a9  stp x20, x19, [sp, #0x30]
0x061253DC: f4df00f0  adrp x20, #0x7d24000
0x061253E0: 881e5239  ldrb w8, [x20, #0x487]
0x061253E4: f303002a  mov w19, w0
0x061253E8: 88040037  tbnz w8, #0, #0x6125478
0x061253EC: a0aa00b0  adrp x0, #0x767a000
0x061253F0: 003843f9  ldr x0, [x0, #0x670]
0x061253F4: 896d4197  bl #0x3180a18
0x061253F8: a0ad00b0  adrp x0, #0x76da000
0x061253FC: 001840f9  ldr x0, [x0, #0x30]
0x06125400: 866d4197  bl #0x3180a18
0x06125404: a0ad00b0  adrp x0, #0x76da000
0x06125408: 001c40f9  ldr x0, [x0, #0x38]
0x0612540C: 836d4197  bl #0x3180a18
0x06125410: a0ad00b0  adrp x0, #0x76da000
0x06125414: 002040f9  ldr x0, [x0, #0x40]
0x06125418: 806d4197  bl #0x3180a18
0x0612541C: a0ad00b0  adrp x0, #0x76da000
0x06125420: 002440f9  ldr x0, [x0, #0x48]
0x06125424: 7d6d4197  bl #0x3180a18
0x06125428: a0ad00b0  adrp x0, #0x76da000
0x0612542C: 002840f9  ldr x0, [x0, #0x50]
0x06125430: 7a6d4197  bl #0x3180a18
0x06125434: a0ad00b0  adrp x0, #0x76da000
0x06125438: 002c40f9  ldr x0, [x0, #0x58]
0x0612543C: 776d4197  bl #0x3180a18
0x06125440: a0ad00b0  adrp x0, #0x76da000
0x06125444: 003040f9  ldr x0, [x0, #0x60]
0x06125448: 746d4197  bl #0x3180a18
0x0612544C: a0ad00b0  adrp x0, #0x76da000
0x06125450: 003440f9  ldr x0, [x0, #0x68]
0x06125454: 716d4197  bl #0x3180a18
0x06125458: a0ad00b0  adrp x0, #0x76da000
0x0612545C: 003840f9  ldr x0, [x0, #0x70]
0x06125460: 6e6d4197  bl #0x3180a18
0x06125464: a0ad00b0  adrp x0, #0x76da000
0x06125468: 003c40f9  ldr x0, [x0, #0x78]
0x0612546C: 6b6d4197  bl #0x3180a18
0x06125470: 28008052  movz w8, #0x1
0x06125474: 881e1239  strb w8, [x20, #0x487]
0x06125478: 681e0051  sub w8, w19, #7
0x0612547C: 1f250071  cmp w8, #9
0x06125480: 48010054  b.hi #0x61254a8
0x06125484: 29b5fdf0  adrp x9, #0x17cc000
0x06125488: 29752b91  add x9, x9, #0xadd
0x0612548C: 8a000010  adr x10, #0x612549c
0x06125490: 2b696838  ldrb w11, [x9, x8]
0x06125494: 4a090b8b  add x10, x10, x11, lsl #2
0x06125498: 40011fd6  br x10
0x0612549C: a8ad00b0  adrp x8, #0x76da000
0x061254A0: 083d40f9  ldr x8, [x8, #0x78]
0x061254A4: 25000014  b #0x6125538
0x061254A8: a8aa00b0  adrp x8, #0x767a000
0x061254AC: 083943f9  ldr x8, [x8, #0x670]
0x061254B0: 09008092  movn x9, #0
0x061254B4: e0230091  add x0, sp, #8
0x061254B8: e1031faa  mov x1, xzr
0x061254BC: 080140f9  ldr x8, [x8]
0x061254C0: f31b00b9  str w19, [sp, #0x18]
0x061254C4: e8a700a9  stp x8, x9, [sp, #8]
0x061254C8: 87a0d697  bl #0x56cd6e4
0x061254CC: 1c000014  b #0x612553c
0x061254D0: a8ad00b0  adrp x8, #0x76da000
0x061254D4: 083940f9  ldr x8, [x8, #0x70]
0x061254D8: 18000014  b #0x6125538
0x061254DC: a8ad00b0  adrp x8, #0x76da000
0x061254E0: 081940f9  ldr x8, [x8, #0x30]
0x061254E4: 15000014  b #0x6125538
0x061254E8: a8ad00b0  adrp x8, #0x76da000
0x061254EC: 082940f9  ldr x8, [x8, #0x50]
0x061254F0: 12000014  b #0x6125538
0x061254F4: a8ad00b0  adrp x8, #0x76da000
0x061254F8: 082d40f9  ldr x8, [x8, #0x58]
0x061254FC: 0f000014  b #0x6125538
0x06125500: a8ad00b0  adrp x8, #0x76da000
0x06125504: 083540f9  ldr x8, [x8, #0x68]
0x06125508: 0c000014  b #0x6125538
0x0612550C: a8ad00b0  adrp x8, #0x76da000
0x06125510: 081d40f9  ldr x8, [x8, #0x38]
0x06125514: 09000014  b #0x6125538
0x06125518: a8ad00b0  adrp x8, #0x76da000
0x0612551C: 082540f9  ldr x8, [x8, #0x48]
0x06125520: 06000014  b #0x6125538
0x06125524: a8ad00b0  adrp x8, #0x76da000
0x06125528: 083140f9  ldr x8, [x8, #0x60]
0x0612552C: 03000014  b #0x6125538
0x06125530: a8ad00b0  adrp x8, #0x76da000
0x06125534: 082140f9  ldr x8, [x8, #0x40]
0x06125538: 000140f9  ldr x0, [x8]
0x0612553C: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06125540: fe1340f9  ldr x30, [sp, #0x20]
0x06125544: ff030191  add sp, sp, #0x40
0x06125548: c0035fd6  ret

; RVA 0x612554C | public static bool IsEnergy(PlayerResourceEnum resource) { }
; bytes=16 sha256=09c7dd4904b5249ff60ccbb21e6006229cf2b70b80ab085a4d1e255d76f4cd78 status=arm64_complete_bound indexed_start=True
0x0612554C: 08781d12  and w8, w0, #0xfffffffb
0x06125550: 1f050071  cmp w8, #1
0x06125554: e0179f1a  cset w0, eq
0x06125558: c0035fd6  ret

; RVA 0x612555C | public static ShopCategoryItemType GetShopCategoryType(PlayerResourceEnum resource) { }
; bytes=36 sha256=dcc59768824114e59a2c4047c843ea3583ba0c2c157ab853724d0d5ec64fb415 status=arm64_complete_bound indexed_start=True
0x0612555C: 08040051  sub w8, w0, #1
0x06125560: 1f110071  cmp w8, #4
0x06125564: a8000054  b.hi #0x6125578
0x06125568: 29b5fdf0  adrp x9, #0x17cc000
0x0612556C: 29d12b91  add x9, x9, #0xaf4
0x06125570: 20d968b8  ldr w0, [x9, w8, sxtw #2]
0x06125574: c0035fd6  ret
0x06125578: e0031f2a  mov w0, wzr
0x0612557C: c0035fd6  ret

; RVA 0x6125580 | public static string GetSpriteName(PlayerResourceEnum resource) { }
; bytes=100 sha256=2354dba9194fe967a5ef1d8f2f2840ba0904057c241f5cf0390ea144c63e76d2 status=arm64_complete_bound indexed_start=True
0x06125580: ff0301d1  sub sp, sp, #0x40
0x06125584: fe5702a9  stp x30, x21, [sp, #0x20]
0x06125588: f44f03a9  stp x20, x19, [sp, #0x30]
0x0612558C: f4df00f0  adrp x20, #0x7d24000
0x06125590: b5aa00b0  adrp x21, #0x767a000
0x06125594: 88225239  ldrb w8, [x20, #0x488]
0x06125598: b53a43f9  ldr x21, [x21, #0x670]
0x0612559C: f303002a  mov w19, w0
0x061255A0: c8000037  tbnz w8, #0, #0x61255b8
0x061255A4: a0aa00b0  adrp x0, #0x767a000
0x061255A8: 003843f9  ldr x0, [x0, #0x670]
0x061255AC: 1b6d4197  bl #0x3180a18
0x061255B0: 28008052  movz w8, #0x1
0x061255B4: 88221239  strb w8, [x20, #0x488]
0x061255B8: a80240f9  ldr x8, [x21]
0x061255BC: 09008092  movn x9, #0
0x061255C0: e0230091  add x0, sp, #8
0x061255C4: e1031faa  mov x1, xzr
0x061255C8: e8a700a9  stp x8, x9, [sp, #8]
0x061255CC: f31b00b9  str w19, [sp, #0x18]
0x061255D0: 45a0d697  bl #0x56cd6e4
0x061255D4: f44f43a9  ldp x20, x19, [sp, #0x30]
0x061255D8: fe5742a9  ldp x30, x21, [sp, #0x20]
0x061255DC: ff030191  add sp, sp, #0x40
0x061255E0: c0035fd6  ret

; RVA 0x61255E4 | public static bool IsBoardEventResource(PlayerResourceEnum resource) { }
; bytes=16 sha256=bba6cb8abd2dbe5496790e5bb45ad43da2a136d720e11b44c3ab8d24d9b5714b status=arm64_complete_bound indexed_start=True
0x061255E4: 08781f12  and w8, w0, #0xfffffffe
0x061255E8: 1f110071  cmp w8, #4
0x061255EC: e0179f1a  cset w0, eq
0x061255F0: c0035fd6  ret

; RVA 0x61255F4 | private static void .cctor() { }
; bytes=160 sha256=125a6a52514bf9e3d96cd01da37ec44a53f961762122bfe89605edffb1cbc965 status=arm64_complete_bound indexed_start=True
0x061255F4: fe0f1df8  str x30, [sp, #-0x30]!
0x061255F8: f65701a9  stp x22, x21, [sp, #0x10]
0x061255FC: f44f02a9  stp x20, x19, [sp, #0x20]
0x06125600: f5df00f0  adrp x21, #0x7d24000
0x06125604: b6aa00b0  adrp x22, #0x767a000
0x06125608: b3ad00b0  adrp x19, #0x76da000
0x0612560C: d4ac00d0  adrp x20, #0x76bf000
0x06125610: a8265239  ldrb w8, [x21, #0x489]
0x06125614: d63243f9  ldr x22, [x22, #0x660]
0x06125618: 734240f9  ldr x19, [x19, #0x80]
0x0612561C: 944644f9  ldr x20, [x20, #0x888]
0x06125620: 88010037  tbnz w8, #0, #0x6125650
0x06125624: c0ac00d0  adrp x0, #0x76bf000
0x06125628: 004444f9  ldr x0, [x0, #0x888]
0x0612562C: fb6c4197  bl #0x3180a18
0x06125630: a0aa00b0  adrp x0, #0x767a000
0x06125634: 003043f9  ldr x0, [x0, #0x660]
0x06125638: f86c4197  bl #0x3180a18
0x0612563C: a0ad00b0  adrp x0, #0x76da000
0x06125640: 004040f9  ldr x0, [x0, #0x80]
0x06125644: f56c4197  bl #0x3180a18
0x06125648: 28008052  movz w8, #0x1
0x0612564C: a8261239  strb w8, [x21, #0x489]
0x06125650: c00240f9  ldr x0, [x22]
0x06125654: 81008052  movz w1, #0x4
0x06125658: 296d4197  bl #0x3180afc
0x0612565C: 610240f9  ldr x1, [x19]
0x06125660: e2031faa  mov x2, xzr
0x06125664: f30300aa  mov x19, x0
0x06125668: 0733d297  bl #0x55b2284
0x0612566C: 880240f9  ldr x8, [x20]
0x06125670: e10313aa  mov x1, x19
0x06125674: f65741a9  ldp x22, x21, [sp, #0x10]
0x06125678: 085d40f9  ldr x8, [x8, #0xb8]
0x0612567C: 130100f9  str x19, [x8]
0x06125680: 880240f9  ldr x8, [x20]
0x06125684: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06125688: 005d40f9  ldr x0, [x8, #0xb8]
0x0612568C: fe0743f8  ldr x30, [sp], #0x30
0x06125690: cd6c4117  b #0x31809c4

