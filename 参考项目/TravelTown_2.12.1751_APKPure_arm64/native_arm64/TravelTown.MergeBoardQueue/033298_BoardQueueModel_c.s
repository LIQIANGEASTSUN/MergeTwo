; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 33298 .BoardQueueModel.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A599AC | private static void .cctor() { }
; bytes=104 sha256=42fbf041220f1765e003a6c39062fc7c2884254a9949029fbfc5ead03dc4cc1b status=arm64_complete_bound indexed_start=True
0x06A599AC: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A599B0: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A599B4: 939600b0  adrp x19, #0x7d2a000
0x06A599B8: b46600f0  adrp x20, #0x7730000
0x06A599BC: 686a5839  ldrb w8, [x19, #0x61a]
0x06A599C0: 94ee41f9  ldr x20, [x20, #0x3d8]
0x06A599C4: c8000037  tbnz w8, #0, #0x6a599dc
0x06A599C8: a06600f0  adrp x0, #0x7730000
0x06A599CC: 00ec41f9  ldr x0, [x0, #0x3d8]
0x06A599D0: 129c1c97  bl #0x3180a18
0x06A599D4: 28008052  movz w8, #0x1
0x06A599D8: 686a1839  strb w8, [x19, #0x61a]
0x06A599DC: 800240f9  ldr x0, [x20]
0x06A599E0: b09c1c97  bl #0x3180ca0
0x06A599E4: e1031faa  mov x1, xzr
0x06A599E8: f30300aa  mov x19, x0
0x06A599EC: 0403b297  bl #0x56da5fc
0x06A599F0: 880240f9  ldr x8, [x20]
0x06A599F4: e10313aa  mov x1, x19
0x06A599F8: 085d40f9  ldr x8, [x8, #0xb8]
0x06A599FC: 130100f9  str x19, [x8]
0x06A59A00: 880240f9  ldr x8, [x20]
0x06A59A04: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A59A08: 005d40f9  ldr x0, [x8, #0xb8]
0x06A59A0C: fe0742f8  ldr x30, [sp], #0x20
0x06A59A10: ed9b1c17  b #0x31809c4

; RVA 0x6A59A14 | public void .ctor() { }
; bytes=8 sha256=a26fa32bf089ea52af2edae5f41f4fe09d19f28cc7af8f8ee36ecdc8559ed313 status=arm64_complete_bound indexed_start=True
0x06A59A14: e1031faa  mov x1, xzr
0x06A59A18: f902b217  b #0x56da5fc

; RVA 0x6A59A1C | internal long <FindNewestInQueue>b__23_1(QueuedItem item) { }
; bytes=24 sha256=f4bc1a1fea791902504502b0c399cd28c49b510dafd15e69b2015544dad3e2f3 status=arm64_complete_bound indexed_start=True
0x06A59A1C: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A59A20: 810000b4  cbz x1, #0x6a59a30
0x06A59A24: 201440f9  ldr x0, [x1, #0x28]
0x06A59A28: fe0741f8  ldr x30, [sp], #0x10
0x06A59A2C: c0035fd6  ret
0x06A59A30: 9f9c1c97  bl #0x3180cac

