; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1127 .BoardQueueComponent.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6904CE8 | private static void .cctor() { }
; bytes=104 sha256=afd478f39cf0818d0f6fe13849362478ca28040846ca3283fe43d26e17fad90c status=arm64_complete_bound indexed_start=True
0x06904CE8: fe0f1ef8  str x30, [sp, #-0x20]!
0x06904CEC: f44f01a9  stp x20, x19, [sp, #0x10]
0x06904CF0: 33a100b0  adrp x19, #0x7d29000
0x06904CF4: 147100d0  adrp x20, #0x7726000
0x06904CF8: 68966439  ldrb w8, [x19, #0x925]
0x06904CFC: 94ea44f9  ldr x20, [x20, #0x9d0]
0x06904D00: c8000037  tbnz w8, #0, #0x6904d18
0x06904D04: 007100d0  adrp x0, #0x7726000
0x06904D08: 00e844f9  ldr x0, [x0, #0x9d0]
0x06904D0C: 43ef2197  bl #0x3180a18
0x06904D10: 28008052  movz w8, #0x1
0x06904D14: 68962439  strb w8, [x19, #0x925]
0x06904D18: 800240f9  ldr x0, [x20]
0x06904D1C: e1ef2197  bl #0x3180ca0
0x06904D20: e1031faa  mov x1, xzr
0x06904D24: f30300aa  mov x19, x0
0x06904D28: 3556b797  bl #0x56da5fc
0x06904D2C: 880240f9  ldr x8, [x20]
0x06904D30: e10313aa  mov x1, x19
0x06904D34: 085d40f9  ldr x8, [x8, #0xb8]
0x06904D38: 130100f9  str x19, [x8]
0x06904D3C: 880240f9  ldr x8, [x20]
0x06904D40: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06904D44: 005d40f9  ldr x0, [x8, #0xb8]
0x06904D48: fe0742f8  ldr x30, [sp], #0x20
0x06904D4C: 1eef2117  b #0x31809c4

; RVA 0x6904D50 | public void .ctor() { }
; bytes=8 sha256=ad20a54325911201bb2a180ea15140d7fccdc38c0744f08fed3b8d48df3143c4 status=arm64_complete_bound indexed_start=True
0x06904D50: e1031faa  mov x1, xzr
0x06904D54: 2a56b717  b #0x56da5fc

; RVA 0x6904D58 | internal bool <CollectIds>b__35_0(QueuedItem item) { }
; bytes=32 sha256=5cc33f64188e8cce2e775bd250c37e16e6ab1cb4bfb05fa55f1ba05bff0ffe3f status=arm64_complete_bound indexed_start=True
0x06904D58: fe0f1ff8  str x30, [sp, #-0x10]!
0x06904D5C: c10000b4  cbz x1, #0x6904d74
0x06904D60: 281040f9  ldr x8, [x1, #0x20]
0x06904D64: 1f0100f1  cmp x8, #0
0x06904D68: e0079f1a  cset w0, ne
0x06904D6C: fe0741f8  ldr x30, [sp], #0x10
0x06904D70: c0035fd6  ret
0x06904D74: ceef2197  bl #0x3180cac

