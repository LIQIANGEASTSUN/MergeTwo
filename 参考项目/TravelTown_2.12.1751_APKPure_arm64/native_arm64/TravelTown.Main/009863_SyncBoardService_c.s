; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 9863 .SyncBoardService.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x67CB398 | private static void .cctor() { }
; bytes=104 sha256=ddf26d9b379fb4d8f5e5cbafdc2f4ac66d8c61033116dc5af97eca94fbacb174 status=arm64_complete_bound indexed_start=True
0x067CB398: fe0f1ef8  str x30, [sp, #-0x20]!
0x067CB39C: f44f01a9  stp x20, x19, [sp, #0x10]
0x067CB3A0: f3aa00b0  adrp x19, #0x7d28000
0x067CB3A4: 347a00f0  adrp x20, #0x7712000
0x067CB3A8: 68927e39  ldrb w8, [x19, #0xfa4]
0x067CB3AC: 944a42f9  ldr x20, [x20, #0x490]
0x067CB3B0: c8000037  tbnz w8, #0, #0x67cb3c8
0x067CB3B4: 207a00f0  adrp x0, #0x7712000
0x067CB3B8: 004842f9  ldr x0, [x0, #0x490]
0x067CB3BC: 97d52697  bl #0x3180a18
0x067CB3C0: 28008052  movz w8, #0x1
0x067CB3C4: 68923e39  strb w8, [x19, #0xfa4]
0x067CB3C8: 800240f9  ldr x0, [x20]
0x067CB3CC: 35d62697  bl #0x3180ca0
0x067CB3D0: e1031faa  mov x1, xzr
0x067CB3D4: f30300aa  mov x19, x0
0x067CB3D8: 893cbc97  bl #0x56da5fc
0x067CB3DC: 880240f9  ldr x8, [x20]
0x067CB3E0: e10313aa  mov x1, x19
0x067CB3E4: 085d40f9  ldr x8, [x8, #0xb8]
0x067CB3E8: 130100f9  str x19, [x8]
0x067CB3EC: 880240f9  ldr x8, [x20]
0x067CB3F0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x067CB3F4: 005d40f9  ldr x0, [x8, #0xb8]
0x067CB3F8: fe0742f8  ldr x30, [sp], #0x20
0x067CB3FC: 72d52617  b #0x31809c4

; RVA 0x67CB400 | public void .ctor() { }
; bytes=8 sha256=61b8c5f21d67c195f86a83ac6fe7ce013a5406c071eaf8991d8704e5057fd51e status=arm64_complete_bound indexed_start=True
0x067CB400: e1031faa  mov x1, xzr
0x067CB404: 7e3cbc17  b #0x56da5fc

; RVA 0x67CB408 | internal IdComponent <ConstructBoardItems>b__14_0(PositionComponent positionComponent) { }
; bytes=80 sha256=d8a3a272754ac1c92511deecee6a5d55075cd6770e6924b8b989d2c1e02841a2 status=arm64_complete_bound indexed_start=True
0x067CB408: fe0f1ef8  str x30, [sp, #-0x20]!
0x067CB40C: f44f01a9  stp x20, x19, [sp, #0x10]
0x067CB410: f4aa00b0  adrp x20, #0x7d28000
0x067CB414: 88967e39  ldrb w8, [x20, #0xfa5]
0x067CB418: f30301aa  mov x19, x1
0x067CB41C: c8000037  tbnz w8, #0, #0x67cb434
0x067CB420: 80750090  adrp x0, #0x767b000
0x067CB424: 00cc47f9  ldr x0, [x0, #0xf98]
0x067CB428: 7cd52697  bl #0x3180a18
0x067CB42C: 28008052  movz w8, #0x1
0x067CB430: 88963e39  strb w8, [x20, #0xfa5]
0x067CB434: 130100b4  cbz x19, #0x67cb454
0x067CB438: 88750090  adrp x8, #0x767b000
0x067CB43C: 08cd47f9  ldr x8, [x8, #0xf98]
0x067CB440: e00313aa  mov x0, x19
0x067CB444: f44f41a9  ldp x20, x19, [sp, #0x10]
0x067CB448: 010140f9  ldr x1, [x8]
0x067CB44C: fe0742f8  ldr x30, [sp], #0x20
0x067CB450: f3885017  b #0x3bed81c
0x067CB454: 16d62697  bl #0x3180cac

