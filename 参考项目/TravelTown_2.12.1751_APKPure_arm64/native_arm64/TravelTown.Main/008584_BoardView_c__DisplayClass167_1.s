; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 8584 .BoardView.<>c__DisplayClass167_1
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x669A878 | public void .ctor() { }
; bytes=8 sha256=46ff30000829bf42ccdb6663b1bf600580e5a47e3e45b5769a5baf3d40af9005 status=arm64_complete_bound indexed_start=True
0x0669A878: e1031faa  mov x1, xzr
0x0669A87C: 60ffc017  b #0x56da5fc

; RVA 0x669A880 | internal void <PlayStackingAnimation>b__1() { }
; bytes=92 sha256=807b6e656c6c78917dc03f44f0c876483fec509f893d8d2ba56643d5905c55af status=arm64_complete_bound indexed_start=True
0x0669A880: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0669A884: f44f01a9  stp x20, x19, [sp, #0x10]
0x0669A888: 75b400d0  adrp x21, #0x7d28000
0x0669A88C: b47d0090  adrp x20, #0x764e000
0x0669A890: a8ea4b39  ldrb w8, [x21, #0x2fa]
0x0669A894: 947242f9  ldr x20, [x20, #0x4e0]
0x0669A898: f30300aa  mov x19, x0
0x0669A89C: c8000037  tbnz w8, #0, #0x669a8b4
0x0669A8A0: a07d0090  adrp x0, #0x764e000
0x0669A8A4: 007042f9  ldr x0, [x0, #0x4e0]
0x0669A8A8: 5c982b97  bl #0x3180a18
0x0669A8AC: 28008052  movz w8, #0x1
0x0669A8B0: a8ea0b39  strb w8, [x21, #0x2fa]
0x0669A8B4: 800240f9  ldr x0, [x20]
0x0669A8B8: 730a40f9  ldr x19, [x19, #0x10]
0x0669A8BC: 08e040b9  ldr w8, [x0, #0xe0]
0x0669A8C0: 48000035  cbnz w8, #0x669a8c8
0x0669A8C4: b2982b97  bl #0x3180b8c
0x0669A8C8: e00313aa  mov x0, x19
0x0669A8CC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0669A8D0: e1031faa  mov x1, xzr
0x0669A8D4: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0669A8D8: 3c262114  b #0x6ee41c8

