; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 7474 .RareChainsBubbleDropProbabilityModifier.<>c__DisplayClass7_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x658178C | public void .ctor() { }
; bytes=8 sha256=3a5ba67f57a5c86633d43f84c486221d6f2e29e561f031c483da5aab2dee0434 status=arm64_complete_bound indexed_start=True
0x0658178C: e1031faa  mov x1, xzr
0x06581790: 9b63c517  b #0x56da5fc

; RVA 0x658179C | internal bool <TryModifyProbability>b__0(SmarterBubblesRareChainConfig r) { }
; bytes=308 sha256=23c52d0de3998709e5ce4790615f29c30326c36fc88a3c2aca682ffc252138a6 status=arm64_complete_bound indexed_start=True
0x0658179C: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x065817A0: f44f01a9  stp x20, x19, [sp, #0x10]
0x065817A4: 35bd00d0  adrp x21, #0x7d27000
0x065817A8: a8e65939  ldrb w8, [x21, #0x679]
0x065817AC: f30301aa  mov x19, x1
0x065817B0: f40300aa  mov x20, x0
0x065817B4: 28010037  tbnz w8, #0, #0x65817d8
0x065817B8: e08700b0  adrp x0, #0x767e000
0x065817BC: 00a442f9  ldr x0, [x0, #0x548]
0x065817C0: 96fc2f97  bl #0x3180a18
0x065817C4: c0870090  adrp x0, #0x7679000
0x065817C8: 001044f9  ldr x0, [x0, #0x820]
0x065817CC: 93fc2f97  bl #0x3180a18
0x065817D0: 28008052  movz w8, #0x1
0x065817D4: a8e61939  strb w8, [x21, #0x679]
0x065817D8: b30700b4  cbz x19, #0x65818cc
0x065817DC: 940a40f9  ldr x20, [x20, #0x10]
0x065817E0: 740700b4  cbz x20, #0x65818cc
0x065817E4: ea8700b0  adrp x10, #0x767e000
0x065817E8: 880240f9  ldr x8, [x20]
0x065817EC: 4aa542f9  ldr x10, [x10, #0x548]
0x065817F0: 730a40f9  ldr x19, [x19, #0x10]
0x065817F4: 095d4279  ldrh w9, [x8, #0x12e]
0x065817F8: 410140f9  ldr x1, [x10]
0x065817FC: 290100b4  cbz x9, #0x6581820
0x06581800: 0a5940f9  ldr x10, [x8, #0xb0]
0x06581804: 4a210091  add x10, x10, #8
0x06581808: 4b815ff8  ldur x11, [x10, #-8]
0x0658180C: 7f0101eb  cmp x11, x1
0x06581810: 00010054  b.eq #0x6581830
0x06581814: 290500f1  subs x9, x9, #1
0x06581818: 4a410091  add x10, x10, #0x10
0x0658181C: 61ffff54  b.ne #0x6581808
0x06581820: 62038052  movz w2, #0x1b
0x06581824: e00314aa  mov x0, x20
0x06581828: ba542f97  bl #0x3156b10
0x0658182C: 05000014  b #0x6581840
0x06581830: 490140b9  ldr w9, [x10]
0x06581834: 296d0011  add w9, w9, #0x1b
0x06581838: 08d1298b  add x8, x8, w9, sxtw #4
0x0658183C: 00e10491  add x0, x8, #0x138
0x06581840: 080440a9  ldp x8, x1, [x0]
0x06581844: e00314aa  mov x0, x20
0x06581848: 00013fd6  blr x8
0x0658184C: 000400b4  cbz x0, #0x65818cc
0x06581850: ca870090  adrp x10, #0x7679000
0x06581854: 080040f9  ldr x8, [x0]
0x06581858: 4a1144f9  ldr x10, [x10, #0x820]
0x0658185C: f40300aa  mov x20, x0
0x06581860: 095d4279  ldrh w9, [x8, #0x12e]
0x06581864: 410140f9  ldr x1, [x10]
0x06581868: 290100b4  cbz x9, #0x658188c
0x0658186C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06581870: 4a210091  add x10, x10, #8
0x06581874: 4b815ff8  ldur x11, [x10, #-8]
0x06581878: 7f0101eb  cmp x11, x1
0x0658187C: 00010054  b.eq #0x658189c
0x06581880: 290500f1  subs x9, x9, #1
0x06581884: 4a410091  add x10, x10, #0x10
0x06581888: 61ffff54  b.ne #0x6581874
0x0658188C: e00314aa  mov x0, x20
0x06581890: e2031f2a  mov w2, wzr
0x06581894: 9f542f97  bl #0x3156b10
0x06581898: 04000014  b #0x65818a8
0x0658189C: 490180b9  ldrsw x9, [x10]
0x065818A0: 0811098b  add x8, x8, x9, lsl #4
0x065818A4: 00e10491  add x0, x8, #0x138
0x065818A8: 080440a9  ldp x8, x1, [x0]
0x065818AC: e00314aa  mov x0, x20
0x065818B0: 00013fd6  blr x8
0x065818B4: e10300aa  mov x1, x0
0x065818B8: e00313aa  mov x0, x19
0x065818BC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x065818C0: e2031faa  mov x2, xzr
0x065818C4: fe57c2a8  ldp x30, x21, [sp], #0x20
0x065818C8: eaa3bd17  b #0x54ea870
0x065818CC: f8fc2f97  bl #0x3180cac

