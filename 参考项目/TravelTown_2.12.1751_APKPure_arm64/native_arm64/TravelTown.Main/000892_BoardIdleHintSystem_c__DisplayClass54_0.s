; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 892 .BoardIdleHintSystem.<>c__DisplayClass54_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x665AE00 | public void .ctor() { }
; bytes=8 sha256=2e9677c15a31ba42b8769572c48346817f5a3743002d59d2c0d94ffb0004950b status=arm64_complete_bound indexed_start=True
0x0665AE00: e1031faa  mov x1, xzr
0x0665AE04: fefdc117  b #0x56da5fc

; RVA 0x665B404 | internal bool <GetItemOnBoard>b__0(PositionComponent item) { }
; bytes=172 sha256=6b562b705cf512ed42598f6b7fbb368ce9bb9f41a4e219dd105fad90909a0735 status=arm64_complete_bound indexed_start=True
0x0665B404: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0665B408: f44f01a9  stp x20, x19, [sp, #0x10]
0x0665B40C: 75b600b0  adrp x21, #0x7d28000
0x0665B410: a8ae4139  ldrb w8, [x21, #0x6b]
0x0665B414: f30301aa  mov x19, x1
0x0665B418: f40300aa  mov x20, x0
0x0665B41C: 28010037  tbnz w8, #0, #0x665b440
0x0665B420: 00810090  adrp x0, #0x767b000
0x0665B424: 00cc47f9  ldr x0, [x0, #0xf98]
0x0665B428: 7c952c97  bl #0x3180a18
0x0665B42C: 008100f0  adrp x0, #0x767e000
0x0665B430: 001c43f9  ldr x0, [x0, #0x638]
0x0665B434: 79952c97  bl #0x3180a18
0x0665B438: 28008052  movz w8, #0x1
0x0665B43C: a8ae0139  strb w8, [x21, #0x6b]
0x0665B440: 730300b4  cbz x19, #0x665b4ac
0x0665B444: 08810090  adrp x8, #0x767b000
0x0665B448: 08cd47f9  ldr x8, [x8, #0xf98]
0x0665B44C: e00313aa  mov x0, x19
0x0665B450: 010140f9  ldr x1, [x8]
0x0665B454: f2485697  bl #0x3bed81c
0x0665B458: a00200b4  cbz x0, #0x665b4ac
0x0665B45C: 001840f9  ldr x0, [x0, #0x30]
0x0665B460: 810a40f9  ldr x1, [x20, #0x10]
0x0665B464: e2031faa  mov x2, xzr
0x0665B468: 023dba97  bl #0x54ea870
0x0665B46C: 60010036  tbz w0, #0, #0x665b498
0x0665B470: 088100f0  adrp x8, #0x767e000
0x0665B474: 081d43f9  ldr x8, [x8, #0x638]
0x0665B478: e00313aa  mov x0, x19
0x0665B47C: 010140f9  ldr x1, [x8]
0x0665B480: e7485697  bl #0x3bed81c
0x0665B484: 400100b4  cbz x0, #0x665b4ac
0x0665B488: e1031faa  mov x1, xzr
0x0665B48C: a2880a94  bl #0x68fd714
0x0665B490: 08000052  eor w8, w0, #1
0x0665B494: 02000014  b #0x665b49c
0x0665B498: e8031f2a  mov w8, wzr
0x0665B49C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0665B4A0: 00010012  and w0, w8, #1
0x0665B4A4: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0665B4A8: c0035fd6  ret
0x0665B4AC: 00962c97  bl #0x3180cac

