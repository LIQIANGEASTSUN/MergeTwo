; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 7733 .BoosterBoardSystem.<>c__DisplayClass13_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x65BC824 | public void .ctor() { }
; bytes=8 sha256=29f1eeeeb7bb6a62be278ae178ac6e1898469f1b123085c3bc9a7d9e1303282e status=arm64_complete_bound indexed_start=True
0x065BC824: e1031faa  mov x1, xzr
0x065BC828: 7577c417  b #0x56da5fc

; RVA 0x65BCAD4 | internal bool <TryLinkBoosterWithMergeItem>b__0(BoosterIdComponent b) { }
; bytes=96 sha256=692897347ecf5c96980e9f82e0c495a89e5e9d84c74baf49744775650b59f6a0 status=arm64_complete_bound indexed_start=True
0x065BCAD4: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x065BCAD8: f44f01a9  stp x20, x19, [sp, #0x10]
0x065BCADC: 55bb00f0  adrp x21, #0x7d27000
0x065BCAE0: a8de6339  ldrb w8, [x21, #0x8f7]
0x065BCAE4: f40301aa  mov x20, x1
0x065BCAE8: f30300aa  mov x19, x0
0x065BCAEC: c8000037  tbnz w8, #0, #0x65bcb04
0x065BCAF0: 008600f0  adrp x0, #0x767f000
0x065BCAF4: 00e843f9  ldr x0, [x0, #0x7d0]
0x065BCAF8: c80f2f97  bl #0x3180a18
0x065BCAFC: 28008052  movz w8, #0x1
0x065BCB00: a8de2339  strb w8, [x21, #0x8f7]
0x065BCB04: 740100b4  cbz x20, #0x65bcb30
0x065BCB08: 088600f0  adrp x8, #0x767f000
0x065BCB0C: 08e943f9  ldr x8, [x8, #0x7d0]
0x065BCB10: e00314aa  mov x0, x20
0x065BCB14: 010140f9  ldr x1, [x8]
0x065BCB18: 93bd9897  bl #0x4bec164
0x065BCB1C: 610a40f9  ldr x1, [x19, #0x10]
0x065BCB20: f44f41a9  ldp x20, x19, [sp, #0x10]
0x065BCB24: e2031faa  mov x2, xzr
0x065BCB28: fe57c2a8  ldp x30, x21, [sp], #0x20
0x065BCB2C: 51b7bc17  b #0x54ea870
0x065BCB30: 5f102f97  bl #0x3180cac

