; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 33691 ContextualizedECS.Systems.SystemsBuilder
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x5F153A8 | internal void RegisterSystem(SystemInfo systemInfo) { }
; bytes=172 sha256=c85109721be253169545ac7d2a5631e444799ad9a7399313bb3a5c7be6dd23a1 status=arm64_complete_bound indexed_start=True
0x05F153A8: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x05F153AC: f44f01a9  stp x20, x19, [sp, #0x10]
0x05F153B0: 75f000b0  adrp x21, #0x7d22000
0x05F153B4: a86a7139  ldrb w8, [x21, #0xc5a]
0x05F153B8: f30301aa  mov x19, x1
0x05F153BC: f40300aa  mov x20, x0
0x05F153C0: c8000037  tbnz w8, #0, #0x5f153d8
0x05F153C4: 60bd00d0  adrp x0, #0x76c3000
0x05F153C8: 005045f9  ldr x0, [x0, #0xaa0]
0x05F153CC: 93ad4997  bl #0x3180a18
0x05F153D0: 28008052  movz w8, #0x1
0x05F153D4: a86a3139  strb w8, [x21, #0xc5a]
0x05F153D8: 800a40f9  ldr x0, [x20, #0x10]
0x05F153DC: a00300b4  cbz x0, #0x5f15450
0x05F153E0: 69bd00d0  adrp x9, #0x76c3000
0x05F153E4: 295145f9  ldr x9, [x9, #0xaa0]
0x05F153E8: 0a1c40b9  ldr w10, [x0, #0x1c]
0x05F153EC: 080840f9  ldr x8, [x0, #0x10]
0x05F153F0: 290140f9  ldr x9, [x9]
0x05F153F4: 4a050011  add w10, w10, #1
0x05F153F8: 0a1c00b9  str w10, [x0, #0x1c]
0x05F153FC: a80200b4  cbz x8, #0x5f15450
0x05F15400: 0a1880b9  ldrsw x10, [x0, #0x18]
0x05F15404: 0b1940b9  ldr w11, [x8, #0x18]
0x05F15408: 5f010b6b  cmp w10, w11
0x05F1540C: 42010054  b.hs #0x5f15434
0x05F15410: 49050011  add w9, w10, #1
0x05F15414: 080d0a8b  add x8, x8, x10, lsl #3
0x05F15418: 091800b9  str w9, [x0, #0x18]
0x05F1541C: 130d02f8  str x19, [x8, #0x20]!
0x05F15420: e10313aa  mov x1, x19
0x05F15424: f44f41a9  ldp x20, x19, [sp, #0x10]
0x05F15428: e00308aa  mov x0, x8
0x05F1542C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x05F15430: 65ad4917  b #0x31809c4
0x05F15434: 281140f9  ldr x8, [x9, #0x20]
0x05F15438: e10313aa  mov x1, x19
0x05F1543C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x05F15440: 086140f9  ldr x8, [x8, #0xc0]
0x05F15444: 023940f9  ldr x2, [x8, #0x70]
0x05F15448: fe57c2a8  ldp x30, x21, [sp], #0x20
0x05F1544C: 08bc8417  b #0x404446c
0x05F15450: 17ae4997  bl #0x3180cac

; RVA 0x5F15454 | public SystemsManager Build() { }
; bytes=532 sha256=ee199cbe930b1c13bbe04f1c939f58b10fb6205abd58d0276f2478a2bdced60e status=arm64_complete_bound indexed_start=True
0x05F15454: fe67bca9  stp x30, x25, [sp, #-0x40]!
0x05F15458: f85f01a9  stp x24, x23, [sp, #0x10]
0x05F1545C: f65702a9  stp x22, x21, [sp, #0x20]
0x05F15460: f44f03a9  stp x20, x19, [sp, #0x30]
0x05F15464: 75f000b0  adrp x21, #0x7d22000
0x05F15468: 77bd00d0  adrp x23, #0x76c3000
0x05F1546C: 73bd00d0  adrp x19, #0x76c3000
0x05F15470: 76bd00d0  adrp x22, #0x76c3000
0x05F15474: a86e7139  ldrb w8, [x21, #0xc5b]
0x05F15478: f75645f9  ldr x23, [x23, #0xaa8]
0x05F1547C: 735a45f9  ldr x19, [x19, #0xab0]
0x05F15480: d65e45f9  ldr x22, [x22, #0xab8]
0x05F15484: f40300aa  mov x20, x0
0x05F15488: 68030037  tbnz w8, #0, #0x5f154f4
0x05F1548C: 60bd00d0  adrp x0, #0x76c3000
0x05F15490: 006045f9  ldr x0, [x0, #0xac0]
0x05F15494: 61ad4997  bl #0x3180a18
0x05F15498: 60bd00d0  adrp x0, #0x76c3000
0x05F1549C: 006445f9  ldr x0, [x0, #0xac8]
0x05F154A0: 5ead4997  bl #0x3180a18
0x05F154A4: 60bd00d0  adrp x0, #0x76c3000
0x05F154A8: 005c45f9  ldr x0, [x0, #0xab8]
0x05F154AC: 5bad4997  bl #0x3180a18
0x05F154B0: 60bd00d0  adrp x0, #0x76c3000
0x05F154B4: 005845f9  ldr x0, [x0, #0xab0]
0x05F154B8: 58ad4997  bl #0x3180a18
0x05F154BC: 60bd00d0  adrp x0, #0x76c3000
0x05F154C0: 006845f9  ldr x0, [x0, #0xad0]
0x05F154C4: 55ad4997  bl #0x3180a18
0x05F154C8: 60bd00d0  adrp x0, #0x76c3000
0x05F154CC: 006c45f9  ldr x0, [x0, #0xad8]
0x05F154D0: 52ad4997  bl #0x3180a18
0x05F154D4: 60bd00d0  adrp x0, #0x76c3000
0x05F154D8: 005445f9  ldr x0, [x0, #0xaa8]
0x05F154DC: 4fad4997  bl #0x3180a18
0x05F154E0: 60bd00d0  adrp x0, #0x76c3000
0x05F154E4: 007045f9  ldr x0, [x0, #0xae0]
0x05F154E8: 4cad4997  bl #0x3180a18
0x05F154EC: 28008052  movz w8, #0x1
0x05F154F0: a86e3139  strb w8, [x21, #0xc5b]
0x05F154F4: e00240f9  ldr x0, [x23]
0x05F154F8: eaad4997  bl #0x3180ca0
0x05F154FC: 610240f9  ldr x1, [x19]
0x05F15500: f30300aa  mov x19, x0
0x05F15504: cdb98497  bl #0x4043c38
0x05F15508: e00240f9  ldr x0, [x23]
0x05F1550C: 950a40f9  ldr x21, [x20, #0x10]
0x05F15510: e4ad4997  bl #0x3180ca0
0x05F15514: c20240f9  ldr x2, [x22]
0x05F15518: e10315aa  mov x1, x21
0x05F1551C: f40300aa  mov x20, x0
0x05F15520: 10ba8497  bl #0x4043d60
0x05F15524: 140a00b4  cbz x20, #0x5f15664
0x05F15528: 881a40b9  ldr w8, [x20, #0x18]
0x05F1552C: 1f050071  cmp w8, #1
0x05F15530: 8b070054  b.lt #0x5f15620
0x05F15534: 77bd00d0  adrp x23, #0x76c3000
0x05F15538: 78bd00d0  adrp x24, #0x76c3000
0x05F1553C: 79bd00d0  adrp x25, #0x76c3000
0x05F15540: f76e45f9  ldr x23, [x23, #0xad8]
0x05F15544: 186345f9  ldr x24, [x24, #0xac0]
0x05F15548: 396745f9  ldr x25, [x25, #0xac8]
0x05F1554C: f5031f2a  mov w21, wzr
0x05F15550: e20240f9  ldr x2, [x23]
0x05F15554: e00314aa  mov x0, x20
0x05F15558: e103152a  mov w1, w21
0x05F1555C: 10bb8497  bl #0x404419c
0x05F15560: 200800b4  cbz x0, #0x5f15664
0x05F15564: 081040f9  ldr x8, [x0, #0x20]
0x05F15568: f60300aa  mov x22, x0
0x05F1556C: c80700b4  cbz x8, #0x5f15664
0x05F15570: 090d40f9  ldr x9, [x8, #0x18]
0x05F15574: 002140f9  ldr x0, [x8, #0x40]
0x05F15578: 021540f9  ldr x2, [x8, #0x28]
0x05F1557C: e10313aa  mov x1, x19
0x05F15580: 20013fd6  blr x9
0x05F15584: 1f040031  cmn w0, #1
0x05F15588: 00020054  b.eq #0x5f155c8
0x05F1558C: d30600b4  cbz x19, #0x5f15664
0x05F15590: 030340f9  ldr x3, [x24]
0x05F15594: e103002a  mov w1, w0
0x05F15598: e00313aa  mov x0, x19
0x05F1559C: e20316aa  mov x2, x22
0x05F155A0: 78bf8497  bl #0x4045380
0x05F155A4: 220340f9  ldr x2, [x25]
0x05F155A8: e00314aa  mov x0, x20
0x05F155AC: e103152a  mov w1, w21
0x05F155B0: fdc18497  bl #0x4045da4
0x05F155B4: 881a40b9  ldr w8, [x20, #0x18]
0x05F155B8: f5031f2a  mov w21, wzr
0x05F155BC: 1f010071  cmp w8, #0
0x05F155C0: 8cfcff54  b.gt #0x5f15550
0x05F155C4: 17000014  b #0x5f15620
0x05F155C8: 881a40b9  ldr w8, [x20, #0x18]
0x05F155CC: b5060011  add w21, w21, #1
0x05F155D0: bf02086b  cmp w21, w8
0x05F155D4: ebfbff54  b.lt #0x5f15550
0x05F155D8: c0b900b0  adrp x0, #0x764e000
0x05F155DC: 006c42f9  ldr x0, [x0, #0x4d8]
0x05F155E0: 13ad4997  bl #0x3180a2c
0x05F155E4: afad4997  bl #0x3180ca0
0x05F155E8: f30300aa  mov x19, x0
0x05F155EC: 60bd00d0  adrp x0, #0x76c3000
0x05F155F0: 007445f9  ldr x0, [x0, #0xae8]
0x05F155F4: 0ead4997  bl #0x3180a2c
0x05F155F8: e10300aa  mov x1, x0
0x05F155FC: e00313aa  mov x0, x19
0x05F15600: e2031faa  mov x2, xzr
0x05F15604: dde5de97  bl #0x56ced78
0x05F15608: 60bd00d0  adrp x0, #0x76c3000
0x05F1560C: 007845f9  ldr x0, [x0, #0xaf0]
0x05F15610: 07ad4997  bl #0x3180a2c
0x05F15614: e10300aa  mov x1, x0
0x05F15618: e00313aa  mov x0, x19
0x05F1561C: 58ad4997  bl #0x3180b7c
0x05F15620: 68bd00d0  adrp x8, #0x76c3000
0x05F15624: 087145f9  ldr x8, [x8, #0xae0]
0x05F15628: 000140f9  ldr x0, [x8]
0x05F1562C: 9dad4997  bl #0x3180ca0
0x05F15630: e1031faa  mov x1, xzr
0x05F15634: f40300aa  mov x20, x0
0x05F15638: f113df97  bl #0x56da5fc
0x05F1563C: e00314aa  mov x0, x20
0x05F15640: 130c01f8  str x19, [x0, #0x10]!
0x05F15644: e10313aa  mov x1, x19
0x05F15648: dfac4997  bl #0x31809c4
0x05F1564C: e00314aa  mov x0, x20
0x05F15650: f44f43a9  ldp x20, x19, [sp, #0x30]
0x05F15654: f65742a9  ldp x22, x21, [sp, #0x20]
0x05F15658: f85f41a9  ldp x24, x23, [sp, #0x10]
0x05F1565C: fe67c4a8  ldp x30, x25, [sp], #0x40
0x05F15660: c0035fd6  ret
0x05F15664: 92ad4997  bl #0x3180cac

; RVA 0x5F15698 | public void .ctor() { }
; bytes=136 sha256=24a42db5213030d7323b4e174f1ae3e713209c0a13e333d86edc9758bee70e0d status=arm64_complete_bound indexed_start=True
0x05F15698: fe0f1df8  str x30, [sp, #-0x30]!
0x05F1569C: f65701a9  stp x22, x21, [sp, #0x10]
0x05F156A0: f44f02a9  stp x20, x19, [sp, #0x20]
0x05F156A4: 75f000b0  adrp x21, #0x7d22000
0x05F156A8: 76bd00d0  adrp x22, #0x76c3000
0x05F156AC: 74bd00d0  adrp x20, #0x76c3000
0x05F156B0: a8727139  ldrb w8, [x21, #0xc5c]
0x05F156B4: d65645f9  ldr x22, [x22, #0xaa8]
0x05F156B8: 945a45f9  ldr x20, [x20, #0xab0]
0x05F156BC: f30300aa  mov x19, x0
0x05F156C0: 28010037  tbnz w8, #0, #0x5f156e4
0x05F156C4: 60bd00d0  adrp x0, #0x76c3000
0x05F156C8: 005845f9  ldr x0, [x0, #0xab0]
0x05F156CC: d3ac4997  bl #0x3180a18
0x05F156D0: 60bd00d0  adrp x0, #0x76c3000
0x05F156D4: 005445f9  ldr x0, [x0, #0xaa8]
0x05F156D8: d0ac4997  bl #0x3180a18
0x05F156DC: 28008052  movz w8, #0x1
0x05F156E0: a8723139  strb w8, [x21, #0xc5c]
0x05F156E4: c00240f9  ldr x0, [x22]
0x05F156E8: 6ead4997  bl #0x3180ca0
0x05F156EC: 810240f9  ldr x1, [x20]
0x05F156F0: f40300aa  mov x20, x0
0x05F156F4: 51b98497  bl #0x4043c38
0x05F156F8: e00313aa  mov x0, x19
0x05F156FC: 140c01f8  str x20, [x0, #0x10]!
0x05F15700: e10314aa  mov x1, x20
0x05F15704: b0ac4997  bl #0x31809c4
0x05F15708: e00313aa  mov x0, x19
0x05F1570C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x05F15710: f65741a9  ldp x22, x21, [sp, #0x10]
0x05F15714: e1031faa  mov x1, xzr
0x05F15718: fe0743f8  ldr x30, [sp], #0x30
0x05F1571C: b813df17  b #0x56da5fc

