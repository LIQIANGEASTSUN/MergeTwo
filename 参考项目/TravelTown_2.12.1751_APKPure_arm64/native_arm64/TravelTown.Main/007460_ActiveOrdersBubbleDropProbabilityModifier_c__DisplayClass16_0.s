; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 7460 .ActiveOrdersBubbleDropProbabilityModifier.<>c__DisplayClass16_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x657C774 | public void .ctor() { }
; bytes=8 sha256=38af646d77c4664b7f2da6ebcbe5dbc9c27c084dff27d5ba10922c8c3d5beaf0 status=arm64_complete_bound indexed_start=True
0x0657C774: e1031faa  mov x1, xzr
0x0657C778: a177c517  b #0x56da5fc

; RVA 0x657D1C0 | internal bool <TryModifyProbability>b__0(ChainData chainData) { }
; bytes=216 sha256=d5fa8585ecd69c88e10fedd30aa5ebeed53e0008f997dfa0856f21ee9d0e7b6c status=arm64_complete_bound indexed_start=True
0x0657D1C0: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0657D1C4: f44f01a9  stp x20, x19, [sp, #0x10]
0x0657D1C8: 55bd00d0  adrp x21, #0x7d27000
0x0657D1CC: a85e5939  ldrb w8, [x21, #0x657]
0x0657D1D0: f30301aa  mov x19, x1
0x0657D1D4: f40300aa  mov x20, x0
0x0657D1D8: 28010037  tbnz w8, #0, #0x657d1fc
0x0657D1DC: e08a00b0  adrp x0, #0x76da000
0x0657D1E0: 005845f9  ldr x0, [x0, #0xab0]
0x0657D1E4: 0d0e3097  bl #0x3180a18
0x0657D1E8: 008800b0  adrp x0, #0x767e000
0x0657D1EC: 00a442f9  ldr x0, [x0, #0x548]
0x0657D1F0: 0a0e3097  bl #0x3180a18
0x0657D1F4: 28008052  movz w8, #0x1
0x0657D1F8: a85e1939  strb w8, [x21, #0x657]
0x0657D1FC: d30400b4  cbz x19, #0x657d294
0x0657D200: 940a40f9  ldr x20, [x20, #0x10]
0x0657D204: 940400b4  cbz x20, #0x657d294
0x0657D208: 0a8800b0  adrp x10, #0x767e000
0x0657D20C: 880240f9  ldr x8, [x20]
0x0657D210: 4aa542f9  ldr x10, [x10, #0x548]
0x0657D214: 730e40f9  ldr x19, [x19, #0x18]
0x0657D218: 095d4279  ldrh w9, [x8, #0x12e]
0x0657D21C: 410140f9  ldr x1, [x10]
0x0657D220: 290100b4  cbz x9, #0x657d244
0x0657D224: 0a5940f9  ldr x10, [x8, #0xb0]
0x0657D228: 4a210091  add x10, x10, #8
0x0657D22C: 4b815ff8  ldur x11, [x10, #-8]
0x0657D230: 7f0101eb  cmp x11, x1
0x0657D234: 00010054  b.eq #0x657d254
0x0657D238: 290500f1  subs x9, x9, #1
0x0657D23C: 4a410091  add x10, x10, #0x10
0x0657D240: 61ffff54  b.ne #0x657d22c
0x0657D244: 62038052  movz w2, #0x1b
0x0657D248: e00314aa  mov x0, x20
0x0657D24C: 31662f97  bl #0x3156b10
0x0657D250: 05000014  b #0x657d264
0x0657D254: 490140b9  ldr w9, [x10]
0x0657D258: 296d0011  add w9, w9, #0x1b
0x0657D25C: 08d1298b  add x8, x8, w9, sxtw #4
0x0657D260: 00e10491  add x0, x8, #0x138
0x0657D264: 080440a9  ldp x8, x1, [x0]
0x0657D268: e00314aa  mov x0, x20
0x0657D26C: 00013fd6  blr x8
0x0657D270: 330100b4  cbz x19, #0x657d294
0x0657D274: e88a00b0  adrp x8, #0x76da000
0x0657D278: 085945f9  ldr x8, [x8, #0xab0]
0x0657D27C: e10300aa  mov x1, x0
0x0657D280: e00313aa  mov x0, x19
0x0657D284: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0657D288: 020140f9  ldr x2, [x8]
0x0657D28C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0657D290: a90cb517  b #0x52c0534
0x0657D294: 860e3097  bl #0x3180cac

