; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25907 .FeedingCombinationComponentExtensions.<>c__DisplayClass1_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A98508 | public void .ctor() { }
; bytes=8 sha256=cba7a6b53f87c05c70b9066ec10428544bec9e7ae96bf6504b1d6a644a490d64 status=arm64_complete_bound indexed_start=True
0x06A98508: e1031faa  mov x1, xzr
0x06A9850C: 3c08b117  b #0x56da5fc

; RVA 0x6A98538 | internal bool <GetCombinationsInProgress>b__0(string consumedItemId) { }
; bytes=100 sha256=3f3ed3d8af2a03c128b7e2d0c3b4740941c28d919f1a2ee7cc004cfcc78fbab8 status=arm64_complete_bound indexed_start=True
0x06A98538: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A9853C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A98540: 959400d0  adrp x21, #0x7d2a000
0x06A98544: a88e6039  ldrb w8, [x21, #0x823]
0x06A98548: f30301aa  mov x19, x1
0x06A9854C: f40300aa  mov x20, x0
0x06A98550: c8000037  tbnz w8, #0, #0x6a98568
0x06A98554: 405e00f0  adrp x0, #0x7663000
0x06A98558: 00f446f9  ldr x0, [x0, #0xde8]
0x06A9855C: 2fa11b97  bl #0x3180a18
0x06A98560: 28008052  movz w8, #0x1
0x06A98564: a88e2039  strb w8, [x21, #0x823]
0x06A98568: 800a40f9  ldr x0, [x20, #0x10]
0x06A9856C: 600100b4  cbz x0, #0x6a98598
0x06A98570: e1031faa  mov x1, xzr
0x06A98574: cc3ffe97  bl #0x6a284a4
0x06A98578: 000100b4  cbz x0, #0x6a98598
0x06A9857C: 485e00f0  adrp x8, #0x7663000
0x06A98580: 08f546f9  ldr x8, [x8, #0xde8]
0x06A98584: e10313aa  mov x1, x19
0x06A98588: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A9858C: 020140f9  ldr x2, [x8]
0x06A98590: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A98594: 9ab05617  b #0x40447fc
0x06A98598: c5a11b97  bl #0x3180cac

