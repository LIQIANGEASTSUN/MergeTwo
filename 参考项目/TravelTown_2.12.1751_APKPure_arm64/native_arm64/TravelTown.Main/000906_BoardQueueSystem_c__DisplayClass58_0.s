; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 906 .BoardQueueSystem.<>c__DisplayClass58_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x66669FC | public void .ctor() { }
; bytes=8 sha256=c68d367de5adca6b0108f8e2bc02ebe2e4448f1a02b6801643ec3e86da5a86ed status=arm64_complete_bound indexed_start=True
0x066669FC: e1031faa  mov x1, xzr
0x06666A00: ffcec117  b #0x56da5fc

; RVA 0x6666D84 | internal bool <HasItemWithUniqueId>b__0(QueuedItem queuedItem) { }
; bytes=180 sha256=909818814449f56f60a4f0261e695dab259704b8fbb10a856c78b660c1d342aa status=arm64_complete_bound indexed_start=True
0x06666D84: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06666D88: f44f01a9  stp x20, x19, [sp, #0x10]
0x06666D8C: 15b600d0  adrp x21, #0x7d28000
0x06666D90: a8024339  ldrb w8, [x21, #0xc0]
0x06666D94: f40301aa  mov x20, x1
0x06666D98: f30300aa  mov x19, x0
0x06666D9C: c8000037  tbnz w8, #0, #0x6666db4
0x06666DA0: 808000f0  adrp x0, #0x7679000
0x06666DA4: 001044f9  ldr x0, [x0, #0x820]
0x06666DA8: 1c672c97  bl #0x3180a18
0x06666DAC: 28008052  movz w8, #0x1
0x06666DB0: a8020339  strb w8, [x21, #0xc0]
0x06666DB4: 140400b4  cbz x20, #0x6666e34
0x06666DB8: 940a40f9  ldr x20, [x20, #0x10]
0x06666DBC: d40300b4  cbz x20, #0x6666e34
0x06666DC0: 8a8000f0  adrp x10, #0x7679000
0x06666DC4: 880240f9  ldr x8, [x20]
0x06666DC8: 4a1144f9  ldr x10, [x10, #0x820]
0x06666DCC: 095d4279  ldrh w9, [x8, #0x12e]
0x06666DD0: 410140f9  ldr x1, [x10]
0x06666DD4: 290100b4  cbz x9, #0x6666df8
0x06666DD8: 0a5940f9  ldr x10, [x8, #0xb0]
0x06666DDC: 4a210091  add x10, x10, #8
0x06666DE0: 4b815ff8  ldur x11, [x10, #-8]
0x06666DE4: 7f0101eb  cmp x11, x1
0x06666DE8: 00010054  b.eq #0x6666e08
0x06666DEC: 290500f1  subs x9, x9, #1
0x06666DF0: 4a410091  add x10, x10, #0x10
0x06666DF4: 61ffff54  b.ne #0x6666de0
0x06666DF8: e00314aa  mov x0, x20
0x06666DFC: e2031f2a  mov w2, wzr
0x06666E00: 44bf2b97  bl #0x3156b10
0x06666E04: 04000014  b #0x6666e14
0x06666E08: 490180b9  ldrsw x9, [x10]
0x06666E0C: 0811098b  add x8, x8, x9, lsl #4
0x06666E10: 00e10491  add x0, x8, #0x138
0x06666E14: 080440a9  ldp x8, x1, [x0]
0x06666E18: e00314aa  mov x0, x20
0x06666E1C: 00013fd6  blr x8
0x06666E20: 610a40f9  ldr x1, [x19, #0x10]
0x06666E24: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06666E28: e2031faa  mov x2, xzr
0x06666E2C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06666E30: 900eba17  b #0x54ea870
0x06666E34: 9e672c97  bl #0x3180cac

