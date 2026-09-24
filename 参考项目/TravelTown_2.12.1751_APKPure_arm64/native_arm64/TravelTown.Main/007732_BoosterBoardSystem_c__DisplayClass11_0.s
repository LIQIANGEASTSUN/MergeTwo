; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 7732 .BoosterBoardSystem.<>c__DisplayClass11_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x65BC58C | public void .ctor() { }
; bytes=8 sha256=26b1059ab6e1803154216a5c826070f864e2b51adce0e8f7ac709b6fc75c8e57 status=arm64_complete_bound indexed_start=True
0x065BC58C: e1031faa  mov x1, xzr
0x065BC590: 1b78c417  b #0x56da5fc

; RVA 0x65BCA74 | internal bool <CreateBoosterItemEntity>b__0(BoosterIdComponent c) { }
; bytes=96 sha256=3f6f8b4c6bbd2ed1af0a975c4e30a250cabb934fdb7e3906ab846628ca1ddc72 status=arm64_complete_bound indexed_start=True
0x065BCA74: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x065BCA78: f44f01a9  stp x20, x19, [sp, #0x10]
0x065BCA7C: 55bb00f0  adrp x21, #0x7d27000
0x065BCA80: a8da6339  ldrb w8, [x21, #0x8f6]
0x065BCA84: f40301aa  mov x20, x1
0x065BCA88: f30300aa  mov x19, x0
0x065BCA8C: c8000037  tbnz w8, #0, #0x65bcaa4
0x065BCA90: 008600f0  adrp x0, #0x767f000
0x065BCA94: 00e843f9  ldr x0, [x0, #0x7d0]
0x065BCA98: e00f2f97  bl #0x3180a18
0x065BCA9C: 28008052  movz w8, #0x1
0x065BCAA0: a8da2339  strb w8, [x21, #0x8f6]
0x065BCAA4: 740100b4  cbz x20, #0x65bcad0
0x065BCAA8: 088600f0  adrp x8, #0x767f000
0x065BCAAC: 08e943f9  ldr x8, [x8, #0x7d0]
0x065BCAB0: e00314aa  mov x0, x20
0x065BCAB4: 010140f9  ldr x1, [x8]
0x065BCAB8: abbd9897  bl #0x4bec164
0x065BCABC: 610a40f9  ldr x1, [x19, #0x10]
0x065BCAC0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x065BCAC4: e2031faa  mov x2, xzr
0x065BCAC8: fe57c2a8  ldp x30, x21, [sp], #0x20
0x065BCACC: 69b7bc17  b #0x54ea870
0x065BCAD0: 77102f97  bl #0x3180cac

