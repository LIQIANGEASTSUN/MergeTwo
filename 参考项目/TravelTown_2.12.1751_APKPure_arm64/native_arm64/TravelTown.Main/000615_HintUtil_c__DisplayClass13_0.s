; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 615 .HintUtil.<>c__DisplayClass13_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x627657C | public void .ctor() { }
; bytes=8 sha256=821b6bb8fdc68f66ee072844a89e791cfa8c1c3529cee217d27b6147267552ff status=arm64_complete_bound indexed_start=True
0x0627657C: e1031faa  mov x1, xzr
0x06276580: 1f90d117  b #0x56da5fc

; RVA 0x6277108 | internal bool <CountFeeds>b__1(ItemMultiple itemMultiple) { }
; bytes=136 sha256=7867eefbca896c11b6abbcd8bd2d8eb88e72df89d065935ebd98a7f3aa95384c status=arm64_complete_bound indexed_start=True
0x06277108: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0627710C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06277110: 75d500d0  adrp x21, #0x7d25000
0x06277114: a8625139  ldrb w8, [x21, #0x458]
0x06277118: f30301aa  mov x19, x1
0x0627711C: f40300aa  mov x20, x0
0x06277120: c8000037  tbnz w8, #0, #0x6277138
0x06277124: 00a000f0  adrp x0, #0x767a000
0x06277128: 00f443f9  ldr x0, [x0, #0x7e8]
0x0627712C: 3b263c97  bl #0x3180a18
0x06277130: 28008052  movz w8, #0x1
0x06277134: a8621139  strb w8, [x21, #0x458]
0x06277138: b30200b4  cbz x19, #0x627718c
0x0627713C: 08a000f0  adrp x8, #0x767a000
0x06277140: 08f543f9  ldr x8, [x8, #0x7e8]
0x06277144: 940a40f9  ldr x20, [x20, #0x10]
0x06277148: e00313aa  mov x0, x19
0x0627714C: 010140f9  ldr x1, [x8]
0x06277150: 326cc497  bl #0x5392218
0x06277154: d40100b4  cbz x20, #0x627718c
0x06277158: e10300aa  mov x1, x0
0x0627715C: e00314aa  mov x0, x20
0x06277160: e2031faa  mov x2, xzr
0x06277164: 47301a94  bl #0x6903280
0x06277168: f403002a  mov w20, w0
0x0627716C: e00313aa  mov x0, x19
0x06277170: e1031faa  mov x1, xzr
0x06277174: 629ff697  bl #0x601eefc
0x06277178: 9f02006b  cmp w20, w0
0x0627717C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06277180: e0b79f1a  cset w0, ge
0x06277184: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06277188: c0035fd6  ret
0x0627718C: c8263c97  bl #0x3180cac

