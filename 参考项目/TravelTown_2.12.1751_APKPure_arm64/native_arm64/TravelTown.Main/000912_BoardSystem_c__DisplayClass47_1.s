; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 912 .BoardSystem.<>c__DisplayClass47_1
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x666BBBC | public void .ctor() { }
; bytes=8 sha256=b95e5d25bb9242631bfe91f2d9571ef0921d7fba780cbcee2c4c081b17e7877b status=arm64_complete_bound indexed_start=True
0x0666BBBC: e1031faa  mov x1, xzr
0x0666BBC0: 8fbac117  b #0x56da5fc

; RVA 0x666BBC4 | internal bool <OnGameStarted>b__1(PositionComponent positionedItem) { }
; bytes=64 sha256=1ad195e4e25f09b8418beaadad686aae9739a551e390d5e3195d3e1438b137b5 status=arm64_complete_bound indexed_start=True
0x0666BBC4: fe0f1ff8  str x30, [sp, #-0x10]!
0x0666BBC8: 080840f9  ldr x8, [x0, #0x10]
0x0666BBCC: 3f0008eb  cmp x1, x8
0x0666BBD0: 20010054  b.eq #0x666bbf4
0x0666BBD4: 610100b4  cbz x1, #0x666bc00
0x0666BBD8: 480100b4  cbz x8, #0x666bc00
0x0666BBDC: 081940f9  ldr x8, [x8, #0x30]
0x0666BBE0: 20c00091  add x0, x1, #0x30
0x0666BBE4: e2031faa  mov x2, xzr
0x0666BBE8: e10308aa  mov x1, x8
0x0666BBEC: fe0741f8  ldr x30, [sp], #0x10
0x0666BBF0: c4640a14  b #0x6904f00
0x0666BBF4: e0031f2a  mov w0, wzr
0x0666BBF8: fe0741f8  ldr x30, [sp], #0x10
0x0666BBFC: c0035fd6  ret
0x0666BC00: 2b542c97  bl #0x3180cac

