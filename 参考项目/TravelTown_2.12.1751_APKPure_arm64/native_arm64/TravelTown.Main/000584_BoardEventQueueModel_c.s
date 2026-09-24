; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 584 .BoardEventQueueModel.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6143E14 | private static void .cctor() { }
; bytes=104 sha256=f3da3972d4746b1f1ad46c87f8c11759b1c3a911e8dcf5e5cafc18ed8976f3d7 status=arm64_complete_bound indexed_start=True
0x06143E14: fe0f1ef8  str x30, [sp, #-0x20]!
0x06143E18: f44f01a9  stp x20, x19, [sp, #0x10]
0x06143E1C: 13df00b0  adrp x19, #0x7d24000
0x06143E20: d4ac0090  adrp x20, #0x76db000
0x06143E24: 68fe5739  ldrb w8, [x19, #0x5ff]
0x06143E28: 948243f9  ldr x20, [x20, #0x700]
0x06143E2C: c8000037  tbnz w8, #0, #0x6143e44
0x06143E30: c0ac0090  adrp x0, #0x76db000
0x06143E34: 008043f9  ldr x0, [x0, #0x700]
0x06143E38: f8f24097  bl #0x3180a18
0x06143E3C: 28008052  movz w8, #0x1
0x06143E40: 68fe1739  strb w8, [x19, #0x5ff]
0x06143E44: 800240f9  ldr x0, [x20]
0x06143E48: 96f34097  bl #0x3180ca0
0x06143E4C: e1031faa  mov x1, xzr
0x06143E50: f30300aa  mov x19, x0
0x06143E54: ea59d697  bl #0x56da5fc
0x06143E58: 880240f9  ldr x8, [x20]
0x06143E5C: e10313aa  mov x1, x19
0x06143E60: 085d40f9  ldr x8, [x8, #0xb8]
0x06143E64: 130100f9  str x19, [x8]
0x06143E68: 880240f9  ldr x8, [x20]
0x06143E6C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06143E70: 005d40f9  ldr x0, [x8, #0xb8]
0x06143E74: fe0742f8  ldr x30, [sp], #0x20
0x06143E78: d3f24017  b #0x31809c4

; RVA 0x6143E7C | public void .ctor() { }
; bytes=8 sha256=5fa1b2be109d77e37db5b276e0ad7f67862e78f5fae41ca1eed4d24ecc746d34 status=arm64_complete_bound indexed_start=True
0x06143E7C: e1031faa  mov x1, xzr
0x06143E80: df59d617  b #0x56da5fc

; RVA 0x6143E84 | internal bool <SetBoardEventQueue>b__10_0(BackendBoardQueueItem item) { }
; bytes=12 sha256=cb8c1dcdae94f2721210b893a4e9fd212770445fd068ece19c82938f1ca81ac0 status=arm64_complete_bound indexed_start=True
0x06143E84: 3f0000f1  cmp x1, #0
0x06143E88: e0079f1a  cset w0, ne
0x06143E8C: c0035fd6  ret

