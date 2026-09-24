; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 33299 .BoardQueueModel.<>c__DisplayClass23_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A58F4C | public void .ctor() { }
; bytes=8 sha256=871112983f3e662d7c7358860e7154cfe7beb81f35712924b5df032180d45f04 status=arm64_complete_bound indexed_start=True
0x06A58F4C: e1031faa  mov x1, xzr
0x06A58F50: ab05b217  b #0x56da5fc

; RVA 0x6A59A34 | internal bool <FindNewestInQueue>b__0(QueuedItem item) { }
; bytes=188 sha256=fd58bbf54b3f97bc1e57b651abd14626d2f6fd37cdb4eb7dd0c974305d7a71b5 status=arm64_complete_bound indexed_start=True
0x06A59A34: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A59A38: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A59A3C: 959600b0  adrp x21, #0x7d2a000
0x06A59A40: a86e5839  ldrb w8, [x21, #0x61b]
0x06A59A44: f40301aa  mov x20, x1
0x06A59A48: f30300aa  mov x19, x0
0x06A59A4C: c8000037  tbnz w8, #0, #0x6a59a64
0x06A59A50: 00610090  adrp x0, #0x7679000
0x06A59A54: 001044f9  ldr x0, [x0, #0x820]
0x06A59A58: f09b1c97  bl #0x3180a18
0x06A59A5C: 28008052  movz w8, #0x1
0x06A59A60: a86e1839  strb w8, [x21, #0x61b]
0x06A59A64: 540400b4  cbz x20, #0x6a59aec
0x06A59A68: 940a40f9  ldr x20, [x20, #0x10]
0x06A59A6C: 740200b4  cbz x20, #0x6a59ab8
0x06A59A70: 0a610090  adrp x10, #0x7679000
0x06A59A74: 880240f9  ldr x8, [x20]
0x06A59A78: 4a1144f9  ldr x10, [x10, #0x820]
0x06A59A7C: 095d4279  ldrh w9, [x8, #0x12e]
0x06A59A80: 410140f9  ldr x1, [x10]
0x06A59A84: 290100b4  cbz x9, #0x6a59aa8
0x06A59A88: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A59A8C: 4a210091  add x10, x10, #8
0x06A59A90: 4b815ff8  ldur x11, [x10, #-8]
0x06A59A94: 7f0101eb  cmp x11, x1
0x06A59A98: 40010054  b.eq #0x6a59ac0
0x06A59A9C: 290500f1  subs x9, x9, #1
0x06A59AA0: 4a410091  add x10, x10, #0x10
0x06A59AA4: 61ffff54  b.ne #0x6a59a90
0x06A59AA8: e00314aa  mov x0, x20
0x06A59AAC: e2031f2a  mov w2, wzr
0x06A59AB0: 18f41b97  bl #0x3156b10
0x06A59AB4: 06000014  b #0x6a59acc
0x06A59AB8: e0031faa  mov x0, xzr
0x06A59ABC: 07000014  b #0x6a59ad8
0x06A59AC0: 490180b9  ldrsw x9, [x10]
0x06A59AC4: 0811098b  add x8, x8, x9, lsl #4
0x06A59AC8: 00e10491  add x0, x8, #0x138
0x06A59ACC: 080440a9  ldp x8, x1, [x0]
0x06A59AD0: e00314aa  mov x0, x20
0x06A59AD4: 00013fd6  blr x8
0x06A59AD8: 610a40f9  ldr x1, [x19, #0x10]
0x06A59ADC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A59AE0: e2031faa  mov x2, xzr
0x06A59AE4: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A59AE8: 6243aa17  b #0x54ea870
0x06A59AEC: 709c1c97  bl #0x3180cac

