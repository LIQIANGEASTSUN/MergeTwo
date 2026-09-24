; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1114 .InteractionTrackingComponent.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6901A10 | private static void .cctor() { }
; bytes=104 sha256=8e8a71386ce94d84212d190a26b10dad0fdc1c93dddb3550e6f8a2208c61bd37 status=arm64_complete_bound indexed_start=True
0x06901A10: fe0f1ef8  str x30, [sp, #-0x20]!
0x06901A14: f44f01a9  stp x20, x19, [sp, #0x10]
0x06901A18: 53a10090  adrp x19, #0x7d29000
0x06901A1C: 347100b0  adrp x20, #0x7726000
0x06901A20: 68c66339  ldrb w8, [x19, #0x8f1]
0x06901A24: 944a44f9  ldr x20, [x20, #0x890]
0x06901A28: c8000037  tbnz w8, #0, #0x6901a40
0x06901A2C: 207100b0  adrp x0, #0x7726000
0x06901A30: 004844f9  ldr x0, [x0, #0x890]
0x06901A34: f9fb2197  bl #0x3180a18
0x06901A38: 28008052  movz w8, #0x1
0x06901A3C: 68c62339  strb w8, [x19, #0x8f1]
0x06901A40: 800240f9  ldr x0, [x20]
0x06901A44: 97fc2197  bl #0x3180ca0
0x06901A48: e1031faa  mov x1, xzr
0x06901A4C: f30300aa  mov x19, x0
0x06901A50: eb62b797  bl #0x56da5fc
0x06901A54: 880240f9  ldr x8, [x20]
0x06901A58: e10313aa  mov x1, x19
0x06901A5C: 085d40f9  ldr x8, [x8, #0xb8]
0x06901A60: 130100f9  str x19, [x8]
0x06901A64: 880240f9  ldr x8, [x20]
0x06901A68: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06901A6C: 005d40f9  ldr x0, [x8, #0xb8]
0x06901A70: fe0742f8  ldr x30, [sp], #0x20
0x06901A74: d4fb2117  b #0x31809c4

; RVA 0x6901A78 | public void .ctor() { }
; bytes=8 sha256=44733ba18bb009bf754bf3fed153890e0be6fcc6ee804526e89303a82269fc11 status=arm64_complete_bound indexed_start=True
0x06901A78: e1031faa  mov x1, xzr
0x06901A7C: e062b717  b #0x56da5fc

; RVA 0x6901A80 | internal string <PrepareData>b__4_0(ItemMultiple items) { }
; bytes=80 sha256=c25aebd534a28a25f4ba5091c2f6e26c17e76052d27e93fe76a5b0a3bc332c7c status=arm64_complete_bound indexed_start=True
0x06901A80: fe0f1ef8  str x30, [sp, #-0x20]!
0x06901A84: f44f01a9  stp x20, x19, [sp, #0x10]
0x06901A88: 54a10090  adrp x20, #0x7d29000
0x06901A8C: 88ca6339  ldrb w8, [x20, #0x8f2]
0x06901A90: f30301aa  mov x19, x1
0x06901A94: c8000037  tbnz w8, #0, #0x6901aac
0x06901A98: 406e00f0  adrp x0, #0x76cc000
0x06901A9C: 00d442f9  ldr x0, [x0, #0x5a8]
0x06901AA0: defb2197  bl #0x3180a18
0x06901AA4: 28008052  movz w8, #0x1
0x06901AA8: 88ca2339  strb w8, [x20, #0x8f2]
0x06901AAC: 130100b4  cbz x19, #0x6901acc
0x06901AB0: 486e00f0  adrp x8, #0x76cc000
0x06901AB4: 08d542f9  ldr x8, [x8, #0x5a8]
0x06901AB8: e00313aa  mov x0, x19
0x06901ABC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06901AC0: 010140f9  ldr x1, [x8]
0x06901AC4: fe0742f8  ldr x30, [sp], #0x20
0x06901AC8: 7443aa17  b #0x5392898
0x06901ACC: 78fc2197  bl #0x3180cac

; RVA 0x6901AD0 | internal string <PrepareData>b__4_3(MergeItemWeakReference items) { }
; bytes=36 sha256=ee395093df958e48344067d2e96b4ec481570600fd9d6290774cd972a5ea9e00 status=arm64_complete_bound indexed_start=True
0x06901AD0: fe0f1ff8  str x30, [sp, #-0x10]!
0x06901AD4: e10000b4  cbz x1, #0x6901af0
0x06901AD8: 280040f9  ldr x8, [x1]
0x06901ADC: e00301aa  mov x0, x1
0x06901AE0: 02a15ca9  ldp x2, x8, [x8, #0x1c8]
0x06901AE4: e10308aa  mov x1, x8
0x06901AE8: fe0741f8  ldr x30, [sp], #0x10
0x06901AEC: 40001fd6  br x2
0x06901AF0: 6ffc2197  bl #0x3180cac

