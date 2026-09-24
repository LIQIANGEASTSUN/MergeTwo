; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1151 MergeEngine.Configuration.Constants
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6905470 | public void .ctor() { }
; bytes=8 sha256=39439c18df1a5b1aa14b621af906fe087cb8297541ad439c9eb0f51c39c7aebf status=arm64_complete_bound indexed_start=True
0x06905470: e1031faa  mov x1, xzr
0x06905474: 6254b717  b #0x56da5fc

; RVA 0x6905478 | private static void .cctor() { }
; bytes=172 sha256=7a4efed3de8b35290b5f3f23918ed29440586970049cac8d0322f406826a9f4d status=arm64_complete_bound indexed_start=True
0x06905478: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0690547C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06905480: 34a10090  adrp x20, #0x7d29000
0x06905484: 536a00b0  adrp x19, #0x764e000
0x06905488: 88b26439  ldrb w8, [x20, #0x92c]
0x0690548C: 734e42f9  ldr x19, [x19, #0x498]
0x06905490: 88010037  tbnz w8, #0, #0x69054c0
0x06905494: 007100b0  adrp x0, #0x7726000
0x06905498: 001445f9  ldr x0, [x0, #0xa28]
0x0690549C: 5fed2197  bl #0x3180a18
0x069054A0: 406a00b0  adrp x0, #0x764e000
0x069054A4: 004c42f9  ldr x0, [x0, #0x498]
0x069054A8: 5ced2197  bl #0x3180a18
0x069054AC: e07000d0  adrp x0, #0x7723000
0x069054B0: 00d846f9  ldr x0, [x0, #0xdb0]
0x069054B4: 59ed2197  bl #0x3180a18
0x069054B8: 28008052  movz w8, #0x1
0x069054BC: 88b22439  strb w8, [x20, #0x92c]
0x069054C0: f57000d0  adrp x21, #0x7723000
0x069054C4: 147100b0  adrp x20, #0x7726000
0x069054C8: b5da46f9  ldr x21, [x21, #0xdb0]
0x069054CC: 941645f9  ldr x20, [x20, #0xa28]
0x069054D0: e0031faa  mov x0, xzr
0x069054D4: c504b497  bl #0x56067e8
0x069054D8: 680240f9  ldr x8, [x19]
0x069054DC: f30300aa  mov x19, x0
0x069054E0: 09e140b9  ldr w9, [x8, #0xe0]
0x069054E4: 69000035  cbnz w9, #0x69054f0
0x069054E8: e00308aa  mov x0, x8
0x069054EC: a8ed2197  bl #0x3180b8c
0x069054F0: a10240f9  ldr x1, [x21]
0x069054F4: e00313aa  mov x0, x19
0x069054F8: e2031faa  mov x2, xzr
0x069054FC: 2c74b497  bl #0x56225ac
0x06905500: 880240f9  ldr x8, [x20]
0x06905504: e10300aa  mov x1, x0
0x06905508: 085d40f9  ldr x8, [x8, #0xb8]
0x0690550C: 000100f9  str x0, [x8]
0x06905510: 880240f9  ldr x8, [x20]
0x06905514: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06905518: 005d40f9  ldr x0, [x8, #0xb8]
0x0690551C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06905520: 29ed2117  b #0x31809c4

