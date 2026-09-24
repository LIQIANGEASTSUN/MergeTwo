; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 32853 .TimeLimitedItemsRepository.<>c__DisplayClass2_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6B4DC48 | public void .ctor() { }
; bytes=8 sha256=738f9900a47cf6d0fa75d4506b0e798cc45b5ec56591d5c3bf45f0fab44ae685 status=arm64_complete_bound indexed_start=True
0x06B4DC48: e1031faa  mov x1, xzr
0x06B4DC4C: 6c32ae17  b #0x56da5fc

; RVA 0x6B4DC9C | internal void <RequestCleanup>b__0(BackendStates _) { }
; bytes=164 sha256=7d30da4b2bb8365e799953d26b044129177133190ca0fce09e13be9bfe16aabe status=arm64_complete_bound indexed_start=True
0x06B4DC9C: fe0f1ef8  str x30, [sp, #-0x20]!
0x06B4DCA0: f44f01a9  stp x20, x19, [sp, #0x10]
0x06B4DCA4: f48e00d0  adrp x20, #0x7d2b000
0x06B4DCA8: 88c24039  ldrb w8, [x20, #0x30]
0x06B4DCAC: f30300aa  mov x19, x0
0x06B4DCB0: c8000037  tbnz w8, #0, #0x6b4dcc8
0x06B4DCB4: 20590090  adrp x0, #0x7671000
0x06B4DCB8: 006047f9  ldr x0, [x0, #0xec0]
0x06B4DCBC: 57cb1897  bl #0x3180a18
0x06B4DCC0: 28008052  movz w8, #0x1
0x06B4DCC4: 88c20039  strb w8, [x20, #0x30]
0x06B4DCC8: 730a40f9  ldr x19, [x19, #0x10]
0x06B4DCCC: 930300b4  cbz x19, #0x6b4dd3c
0x06B4DCD0: 2a590090  adrp x10, #0x7671000
0x06B4DCD4: 680240f9  ldr x8, [x19]
0x06B4DCD8: 4a6147f9  ldr x10, [x10, #0xec0]
0x06B4DCDC: 095d4279  ldrh w9, [x8, #0x12e]
0x06B4DCE0: 410140f9  ldr x1, [x10]
0x06B4DCE4: 290100b4  cbz x9, #0x6b4dd08
0x06B4DCE8: 0a5940f9  ldr x10, [x8, #0xb0]
0x06B4DCEC: 4a210091  add x10, x10, #8
0x06B4DCF0: 4b815ff8  ldur x11, [x10, #-8]
0x06B4DCF4: 7f0101eb  cmp x11, x1
0x06B4DCF8: 00010054  b.eq #0x6b4dd18
0x06B4DCFC: 290500f1  subs x9, x9, #1
0x06B4DD00: 4a410091  add x10, x10, #0x10
0x06B4DD04: 61ffff54  b.ne #0x6b4dcf0
0x06B4DD08: 22008052  movz w2, #0x1
0x06B4DD0C: e00313aa  mov x0, x19
0x06B4DD10: 80231897  bl #0x3156b10
0x06B4DD14: 05000014  b #0x6b4dd28
0x06B4DD18: 490140b9  ldr w9, [x10]
0x06B4DD1C: 29050011  add w9, w9, #1
0x06B4DD20: 08d1298b  add x8, x8, w9, sxtw #4
0x06B4DD24: 00e10491  add x0, x8, #0x138
0x06B4DD28: 020440a9  ldp x2, x1, [x0]
0x06B4DD2C: e00313aa  mov x0, x19
0x06B4DD30: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06B4DD34: fe0742f8  ldr x30, [sp], #0x20
0x06B4DD38: 40001fd6  br x2
0x06B4DD3C: dccb1897  bl #0x3180cac

