; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 8406 .DisplayableBoardQueueModel.<>c__DisplayClass17_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6671E70 | public void .ctor() { }
; bytes=8 sha256=879c2fce3ba968b2e3af6c02281a027625c30fa14de01a139936c1bdec5f601b status=arm64_complete_bound indexed_start=True
0x06671E70: e1031faa  mov x1, xzr
0x06671E74: e2a1c117  b #0x56da5fc

; RVA 0x6671F5C | internal bool <Recalculate>b__0(QueuedItem x) { }
; bytes=104 sha256=40c3c4ac1e89aceb318969d9be2a715ecd0d94b0c179bb1967b0a7959f3d426b status=arm64_complete_bound indexed_start=True
0x06671F5C: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06671F60: f44f01a9  stp x20, x19, [sp, #0x10]
0x06671F64: b5b500f0  adrp x21, #0x7d28000
0x06671F68: a8ca4439  ldrb w8, [x21, #0x132]
0x06671F6C: f30301aa  mov x19, x1
0x06671F70: f40300aa  mov x20, x0
0x06671F74: c8000037  tbnz w8, #0, #0x6671f8c
0x06671F78: 207f00d0  adrp x0, #0x7657000
0x06671F7C: 002446f9  ldr x0, [x0, #0xc48]
0x06671F80: a63a2c97  bl #0x3180a18
0x06671F84: 28008052  movz w8, #0x1
0x06671F88: a8ca0439  strb w8, [x21, #0x132]
0x06671F8C: b30100b4  cbz x19, #0x6671fc0
0x06671F90: 800a40f9  ldr x0, [x20, #0x10]
0x06671F94: 600100b4  cbz x0, #0x6671fc0
0x06671F98: 287f00d0  adrp x8, #0x7657000
0x06671F9C: 082546f9  ldr x8, [x8, #0xc48]
0x06671FA0: 611240f9  ldr x1, [x19, #0x20]
0x06671FA4: 020140f9  ldr x2, [x8]
0x06671FA8: 6339b197  bl #0x52c0534
0x06671FAC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06671FB0: e803202a  mvn w8, w0
0x06671FB4: 00010012  and w0, w8, #1
0x06671FB8: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06671FBC: c0035fd6  ret
0x06671FC0: 3b3b2c97  bl #0x3180cac

; RVA 0x6671FC4 | internal bool <Recalculate>b__1(QueuedItem x) { }
; bytes=104 sha256=527486d1f142abb9d5406c8eb45f446f740ce4bb80c6f0839be80b0325e35e52 status=arm64_complete_bound indexed_start=True
0x06671FC4: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06671FC8: f44f01a9  stp x20, x19, [sp, #0x10]
0x06671FCC: b5b500f0  adrp x21, #0x7d28000
0x06671FD0: a8ce4439  ldrb w8, [x21, #0x133]
0x06671FD4: f30301aa  mov x19, x1
0x06671FD8: f40300aa  mov x20, x0
0x06671FDC: c8000037  tbnz w8, #0, #0x6671ff4
0x06671FE0: 207f00d0  adrp x0, #0x7657000
0x06671FE4: 002446f9  ldr x0, [x0, #0xc48]
0x06671FE8: 8c3a2c97  bl #0x3180a18
0x06671FEC: 28008052  movz w8, #0x1
0x06671FF0: a8ce0439  strb w8, [x21, #0x133]
0x06671FF4: b30100b4  cbz x19, #0x6672028
0x06671FF8: 800a40f9  ldr x0, [x20, #0x10]
0x06671FFC: 600100b4  cbz x0, #0x6672028
0x06672000: 287f00b0  adrp x8, #0x7657000
0x06672004: 082546f9  ldr x8, [x8, #0xc48]
0x06672008: 611240f9  ldr x1, [x19, #0x20]
0x0667200C: 020140f9  ldr x2, [x8]
0x06672010: 4939b197  bl #0x52c0534
0x06672014: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06672018: e803202a  mvn w8, w0
0x0667201C: 00010012  and w0, w8, #1
0x06672020: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06672024: c0035fd6  ret
0x06672028: 213b2c97  bl #0x3180cac

