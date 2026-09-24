; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 7761 .BoosterService.<>c__DisplayClass41_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x65C2DF8 | public void .ctor() { }
; bytes=8 sha256=7ff39fe26947a5bbe480bf5356c12c8c07225983e7d8823ac937c91a31fe90cd status=arm64_complete_bound indexed_start=True
0x065C2DF8: e1031faa  mov x1, xzr
0x065C2DFC: 005ec417  b #0x56da5fc

; RVA 0x65C4BF8 | internal bool <GetActiveBoosterAnalyticsData>b__0(BoosterIdComponent b) { }
; bytes=96 sha256=c9cc2317c57cbefca7dbb4f827a54bf1b33181c643108302e183e6ef40493fd9 status=arm64_complete_bound indexed_start=True
0x065C4BF8: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x065C4BFC: f44f01a9  stp x20, x19, [sp, #0x10]
0x065C4C00: 15bb00f0  adrp x21, #0x7d27000
0x065C4C04: a8fa6439  ldrb w8, [x21, #0x93e]
0x065C4C08: f40301aa  mov x20, x1
0x065C4C0C: f30300aa  mov x19, x0
0x065C4C10: c8000037  tbnz w8, #0, #0x65c4c28
0x065C4C14: 208900d0  adrp x0, #0x76ea000
0x065C4C18: 00e844f9  ldr x0, [x0, #0x9d0]
0x065C4C1C: 7fef2e97  bl #0x3180a18
0x065C4C20: 28008052  movz w8, #0x1
0x065C4C24: a8fa2439  strb w8, [x21, #0x93e]
0x065C4C28: 740100b4  cbz x20, #0x65c4c54
0x065C4C2C: 288900d0  adrp x8, #0x76ea000
0x065C4C30: 08e944f9  ldr x8, [x8, #0x9d0]
0x065C4C34: e00314aa  mov x0, x20
0x065C4C38: 010140f9  ldr x1, [x8]
0x065C4C3C: 429d9897  bl #0x4bec144
0x065C4C40: 610a40f9  ldr x1, [x19, #0x10]
0x065C4C44: f44f41a9  ldp x20, x19, [sp, #0x10]
0x065C4C48: e2031faa  mov x2, xzr
0x065C4C4C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x065C4C50: 0897bc17  b #0x54ea870
0x065C4C54: 16f02e97  bl #0x3180cac

