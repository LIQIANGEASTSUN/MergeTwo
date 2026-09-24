; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25728 Merger.MergeBoard.Systems.CollectItemSystem
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A656BC | public void Tick(TickContext context) { }
; bytes=800 sha256=8b7a15868d21ab4fcd81bf31441445d98a3cca2c20c73ddaf3a74b4f73ffe15b status=arm64_complete_bound indexed_start=True
0x06A656BC: ff4307d1  sub sp, sp, #0x1d0
0x06A656C0: fdc300f9  str x29, [sp, #0x180]
0x06A656C4: fe6719a9  stp x30, x25, [sp, #0x190]
0x06A656C8: f85f1aa9  stp x24, x23, [sp, #0x1a0]
0x06A656CC: f6571ba9  stp x22, x21, [sp, #0x1b0]
0x06A656D0: f44f1ca9  stp x20, x19, [sp, #0x1c0]
0x06A656D4: 379600b0  adrp x23, #0x7d2a000
0x06A656D8: 596600f0  adrp x25, #0x7730000
0x06A656DC: 546600d0  adrp x20, #0x772f000
0x06A656E0: 556600d0  adrp x21, #0x772f000
0x06A656E4: 586600f0  adrp x24, #0x7730000
0x06A656E8: 566600f0  adrp x22, #0x7730000
0x06A656EC: e87a5a39  ldrb w8, [x23, #0x69e]
0x06A656F0: 392f45f9  ldr x25, [x25, #0xa58]
0x06A656F4: 943647f9  ldr x20, [x20, #0xe68]
0x06A656F8: b52647f9  ldr x21, [x21, #0xe48]
0x06A656FC: 183345f9  ldr x24, [x24, #0xa60]
0x06A65700: d63645f9  ldr x22, [x22, #0xa68]
0x06A65704: f30301aa  mov x19, x1
0x06A65708: 28040037  tbnz w8, #0, #0x6a6578c
0x06A6570C: 406600d0  adrp x0, #0x772f000
0x06A65710: 002447f9  ldr x0, [x0, #0xe48]
0x06A65714: c16c1c97  bl #0x3180a18
0x06A65718: 406600f0  adrp x0, #0x7730000
0x06A6571C: 002c45f9  ldr x0, [x0, #0xa58]
0x06A65720: be6c1c97  bl #0x3180a18
0x06A65724: 406600d0  adrp x0, #0x772f000
0x06A65728: 003447f9  ldr x0, [x0, #0xe68]
0x06A6572C: bb6c1c97  bl #0x3180a18
0x06A65730: 406600f0  adrp x0, #0x7730000
0x06A65734: 003845f9  ldr x0, [x0, #0xa70]
0x06A65738: b86c1c97  bl #0x3180a18
0x06A6573C: 406600f0  adrp x0, #0x7730000
0x06A65740: 003c45f9  ldr x0, [x0, #0xa78]
0x06A65744: b56c1c97  bl #0x3180a18
0x06A65748: 406600f0  adrp x0, #0x7730000
0x06A6574C: 003445f9  ldr x0, [x0, #0xa68]
0x06A65750: b26c1c97  bl #0x3180a18
0x06A65754: 406600f0  adrp x0, #0x7730000
0x06A65758: 003045f9  ldr x0, [x0, #0xa60]
0x06A6575C: af6c1c97  bl #0x3180a18
0x06A65760: 406600f0  adrp x0, #0x7730000
0x06A65764: 004045f9  ldr x0, [x0, #0xa80]
0x06A65768: ac6c1c97  bl #0x3180a18
0x06A6576C: 406600f0  adrp x0, #0x7730000
0x06A65770: 004445f9  ldr x0, [x0, #0xa88]
0x06A65774: a96c1c97  bl #0x3180a18
0x06A65778: 406600f0  adrp x0, #0x7730000
0x06A6577C: 004845f9  ldr x0, [x0, #0xa90]
0x06A65780: a66c1c97  bl #0x3180a18
0x06A65784: 28008052  movz w8, #0x1
0x06A65788: e87a1a39  strb w8, [x23, #0x69e]
0x06A6578C: 00e4006f  movi v0.2d, #0000000000000000
0x06A65790: e0030191  add x0, sp, #0x40
0x06A65794: 02128052  movz w2, #0x90
0x06A65798: e1031f2a  mov w1, wzr
0x06A6579C: e08306ad  stp q0, q0, [sp, #0xd0]
0x06A657A0: f7030191  add x23, sp, #0x40
0x06A657A4: 7fa41d94  bl #0x71ce9a0
0x06A657A8: 600640ad  ldp q0, q1, [x19]
0x06A657AC: 200340f9  ldr x0, [x25]
0x06A657B0: e00701ad  stp q0, q1, [sp, #0x20]
0x06A657B4: e3d44697  bl #0x3c1ab40
0x06A657B8: 880240f9  ldr x8, [x20]
0x06A657BC: f40300aa  mov x20, x0
0x06A657C0: e00308aa  mov x0, x8
0x06A657C4: 376d1c97  bl #0x3180ca0
0x06A657C8: a20240f9  ldr x2, [x21]
0x06A657CC: e1031faa  mov x1, xzr
0x06A657D0: e3031faa  mov x3, xzr
0x06A657D4: f50300aa  mov x21, x0
0x06A657D8: 4cc1d297  bl #0x5f15d08
0x06A657DC: e00741ad  ldp q0, q1, [sp, #0x20]
0x06A657E0: 030340f9  ldr x3, [x24]
0x06A657E4: e8430391  add x8, sp, #0xd0
0x06A657E8: e0c30391  add x0, sp, #0xf0
0x06A657EC: e10314aa  mov x1, x20
0x06A657F0: e20315aa  mov x2, x21
0x06A657F4: e08707ad  stp q0, q1, [sp, #0xf0]
0x06A657F8: 03034c97  bl #0x3d66404
0x06A657FC: c20240f9  ldr x2, [x22]
0x06A65800: e0430391  add x0, sp, #0xd0
0x06A65804: e1030191  add x1, sp, #0x40
0x06A65808: cec26497  bl #0x4396340
0x06A6580C: 800d0036  tbz w0, #0, #0x6a659bc
0x06A65810: e8874139  ldrb w8, [sp, #0x61]
0x06A65814: 480d0035  cbnz w8, #0x6a659bc
0x06A65818: e9030191  add x9, sp, #0x40
0x06A6581C: 28008052  movz w8, #0x1
0x06A65820: 20610191  add x0, x9, #0x58
0x06A65824: e1031faa  mov x1, xzr
0x06A65828: e8870139  strb w8, [sp, #0x61]
0x06A6582C: 9eda0094  bl #0x6a9c2a4
0x06A65830: 486600f0  adrp x8, #0x7730000
0x06A65834: 084945f9  ldr x8, [x8, #0xa90]
0x06A65838: e0c30391  add x0, sp, #0xf0
0x06A6583C: e1030191  add x1, sp, #0x40
0x06A65840: 02128052  movz w2, #0x90
0x06A65844: 140140f9  ldr x20, [x8]
0x06A65848: 4aa41d94  bl #0x71ce970
0x06A6584C: e0c30391  add x0, sp, #0xf0
0x06A65850: e10314aa  mov x1, x20
0x06A65854: 64854d97  bl #0x3dc6de4
0x06A65858: 610240ad  ldp q1, q0, [x19]
0x06A6585C: e12340f9  ldr x1, [sp, #0x40]
0x06A65860: e0030091  mov x0, sp
0x06A65864: e2031faa  mov x2, xzr
0x06A65868: e10300ad  stp q1, q0, [sp]
0x06A6586C: c0cd0094  bl #0x6a98f6c
0x06A65870: e82f40f9  ldr x8, [sp, #0x58]
0x06A65874: 880400b4  cbz x8, #0x6a65904
0x06A65878: 486600f0  adrp x8, #0x7730000
0x06A6587C: 740a40f9  ldr x20, [x19, #0x10]
0x06A65880: 083d45f9  ldr x8, [x8, #0xa78]
0x06A65884: 000140f9  ldr x0, [x8]
0x06A65888: 066d1c97  bl #0x3180ca0
0x06A6588C: e1031faa  mov x1, xzr
0x06A65890: f50300aa  mov x21, x0
0x06A65894: 2cd40094  bl #0x6a9a944
0x06A65898: 150a00b4  cbz x21, #0x6a659d8
0x06A6589C: e12340f9  ldr x1, [sp, #0x40]
0x06A658A0: e00315aa  mov x0, x21
0x06A658A4: 010c01f8  str x1, [x0, #0x10]!
0x06A658A8: 476c1c97  bl #0x31809c4
0x06A658AC: e13740f9  ldr x1, [sp, #0x68]
0x06A658B0: e00315aa  mov x0, x21
0x06A658B4: 010c02f8  str x1, [x0, #0x20]!
0x06A658B8: 436c1c97  bl #0x31809c4
0x06A658BC: e13b40f9  ldr x1, [sp, #0x70]
0x06A658C0: f60315aa  mov x22, x21
0x06A658C4: c18e01f8  str x1, [x22, #0x18]!
0x06A658C8: e00316aa  mov x0, x22
0x06A658CC: 3e6c1c97  bl #0x31809c4
0x06A658D0: e84b40b9  ldr w8, [sp, #0x48]
0x06A658D4: c81200b9  str w8, [x22, #0x10]
0x06A658D8: e82f40f9  ldr x8, [sp, #0x58]
0x06A658DC: e80700b4  cbz x8, #0x6a659d8
0x06A658E0: 000940fd  ldr d0, [x8, #0x10]
0x06A658E4: a0c202fc  stur d0, [x21, #0x2c]
0x06A658E8: 940700b4  cbz x20, #0x6a659d8
0x06A658EC: 486600f0  adrp x8, #0x7730000
0x06A658F0: 084545f9  ldr x8, [x8, #0xa88]
0x06A658F4: e00314aa  mov x0, x20
0x06A658F8: e10315aa  mov x1, x21
0x06A658FC: 020140f9  ldr x2, [x8]
0x06A65900: b9764d97  bl #0x3dc33e4
0x06A65904: e82b40f9  ldr x8, [sp, #0x50]
0x06A65908: a80500b4  cbz x8, #0x6a659bc
0x06A6590C: 486600f0  adrp x8, #0x7730000
0x06A65910: 730a40f9  ldr x19, [x19, #0x10]
0x06A65914: 083945f9  ldr x8, [x8, #0xa70]
0x06A65918: 000140f9  ldr x0, [x8]
0x06A6591C: e16c1c97  bl #0x3180ca0
0x06A65920: e1031faa  mov x1, xzr
0x06A65924: f40300aa  mov x20, x0
0x06A65928: 8fd30094  bl #0x6a9a764
0x06A6592C: 740500b4  cbz x20, #0x6a659d8
0x06A65930: e12340f9  ldr x1, [sp, #0x40]
0x06A65934: e00314aa  mov x0, x20
0x06A65938: 010c01f8  str x1, [x0, #0x10]!
0x06A6593C: 226c1c97  bl #0x31809c4
0x06A65940: e13740f9  ldr x1, [sp, #0x68]
0x06A65944: e00314aa  mov x0, x20
0x06A65948: 010c02f8  str x1, [x0, #0x20]!
0x06A6594C: 1e6c1c97  bl #0x31809c4
0x06A65950: e13b40f9  ldr x1, [sp, #0x70]
0x06A65954: f50314aa  mov x21, x20
0x06A65958: a18e01f8  str x1, [x21, #0x18]!
0x06A6595C: e00315aa  mov x0, x21
0x06A65960: 196c1c97  bl #0x31809c4
0x06A65964: e84b40b9  ldr w8, [sp, #0x48]
0x06A65968: a81200b9  str w8, [x21, #0x10]
0x06A6596C: e82b40f9  ldr x8, [sp, #0x50]
0x06A65970: 480300b4  cbz x8, #0x6a659d8
0x06A65974: 010d40f9  ldr x1, [x8, #0x18]
0x06A65978: f60314aa  mov x22, x20
0x06A6597C: f5420091  add x21, x23, #0x10
0x06A65980: c10e03f8  str x1, [x22, #0x30]!
0x06A65984: e00316aa  mov x0, x22
0x06A65988: 0f6c1c97  bl #0x31809c4
0x06A6598C: e00315aa  mov x0, x21
0x06A65990: e1031faa  mov x1, xzr
0x06A65994: dfd80094  bl #0x6a9bd10
0x06A65998: 08000012  and w8, w0, #1
0x06A6599C: c8220039  strb w8, [x22, #8]
0x06A659A0: d30100b4  cbz x19, #0x6a659d8
0x06A659A4: 486600f0  adrp x8, #0x7730000
0x06A659A8: 084145f9  ldr x8, [x8, #0xa80]
0x06A659AC: e00313aa  mov x0, x19
0x06A659B0: e10314aa  mov x1, x20
0x06A659B4: 020140f9  ldr x2, [x8]
0x06A659B8: 8b764d97  bl #0x3dc33e4
0x06A659BC: f44f5ca9  ldp x20, x19, [sp, #0x1c0]
0x06A659C0: f6575ba9  ldp x22, x21, [sp, #0x1b0]
0x06A659C4: f85f5aa9  ldp x24, x23, [sp, #0x1a0]
0x06A659C8: fe6759a9  ldp x30, x25, [sp, #0x190]
0x06A659CC: fdc340f9  ldr x29, [sp, #0x180]
0x06A659D0: ff430791  add sp, sp, #0x1d0
0x06A659D4: c0035fd6  ret
0x06A659D8: b56c1c97  bl #0x3180cac

; RVA 0x6A659DC | public void .ctor() { }
; bytes=8 sha256=0f42635fc4c2876b1ace48feaf2854bda8a7df95dc43ff9fdcbb5996aee65fe3 status=arm64_complete_bound indexed_start=True
0x06A659DC: e1031faa  mov x1, xzr
0x06A659E0: 07d3b117  b #0x56da5fc

