; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25772 .SpawnerSystem.<>c__DisplayClass5_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A75324 | public void .ctor() { }
; bytes=8 sha256=b7a8b59fdc925ac8370219d096866dfe70fd25e1c68e7c208012327f4d576d02 status=arm64_complete_bound indexed_start=True
0x06A75324: e1031faa  mov x1, xzr
0x06A75328: b594b117  b #0x56da5fc

; RVA 0x6A753EC | internal bool <HandleSpawnByTick>b__1(int pos) { }
; bytes=100 sha256=25a8c6652f6e938ca060735fb275353347841925bd0d51e44b559023e566e663 status=arm64_complete_bound indexed_start=True
0x06A753EC: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A753F0: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A753F4: b59500b0  adrp x21, #0x7d2a000
0x06A753F8: a8f65b39  ldrb w8, [x21, #0x6fd]
0x06A753FC: f303012a  mov w19, w1
0x06A75400: f40300aa  mov x20, x0
0x06A75404: c8000037  tbnz w8, #0, #0x6a7541c
0x06A75408: 206100d0  adrp x0, #0x769b000
0x06A7540C: 000c46f9  ldr x0, [x0, #0xc18]
0x06A75410: 822d1c97  bl #0x3180a18
0x06A75414: 28008052  movz w8, #0x1
0x06A75418: a8f61b39  strb w8, [x21, #0x6fd]
0x06A7541C: 800a40f9  ldr x0, [x20, #0x10]
0x06A75420: 600100b4  cbz x0, #0x6a7544c
0x06A75424: 286100d0  adrp x8, #0x769b000
0x06A75428: 080d46f9  ldr x8, [x8, #0xc18]
0x06A7542C: e103132a  mov w1, w19
0x06A75430: 020140f9  ldr x2, [x8]
0x06A75434: f7925697  bl #0x401a010
0x06A75438: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A7543C: e803202a  mvn w8, w0
0x06A75440: 00010012  and w0, w8, #1
0x06A75444: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A75448: c0035fd6  ret
0x06A7544C: 182e1c97  bl #0x3180cac

