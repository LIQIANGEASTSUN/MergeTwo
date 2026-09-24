; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25742 .InteractionCostSystem.<>c__DisplayClass2_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A6B170 | public void .ctor() { }
; bytes=8 sha256=2a0709066f37172bcfbfa0f3ffc5144d4e66567deda2dbfaa61704377a460abc status=arm64_complete_bound indexed_start=True
0x06A6B170: e1031faa  mov x1, xzr
0x06A6B174: 22bdb117  b #0x56da5fc

; RVA 0x6A6B180 | internal bool <ConsumeItems>b__0(Entity entity) { }
; bytes=120 sha256=f87226061556e39aa737a44cb35299b4730786df901988fef3a0e06b24098c72 status=arm64_complete_bound indexed_start=True
0x06A6B180: ff4301d1  sub sp, sp, #0x50
0x06A6B184: fe5703a9  stp x30, x21, [sp, #0x30]
0x06A6B188: f44f04a9  stp x20, x19, [sp, #0x40]
0x06A6B18C: f59500f0  adrp x21, #0x7d2a000
0x06A6B190: a80e5b39  ldrb w8, [x21, #0x6c3]
0x06A6B194: f40301aa  mov x20, x1
0x06A6B198: f30300aa  mov x19, x0
0x06A6B19C: c8000037  tbnz w8, #0, #0x6a6b1b4
0x06A6B1A0: 606000f0  adrp x0, #0x767a000
0x06A6B1A4: 004442f9  ldr x0, [x0, #0x488]
0x06A6B1A8: 1c561c97  bl #0x3180a18
0x06A6B1AC: 28008052  movz w8, #0x1
0x06A6B1B0: a80e1b39  strb w8, [x21, #0x6c3]
0x06A6B1B4: 140200b4  cbz x20, #0x6a6b1f4
0x06A6B1B8: 686000f0  adrp x8, #0x767a000
0x06A6B1BC: 084542f9  ldr x8, [x8, #0x488]
0x06A6B1C0: e00314aa  mov x0, x20
0x06A6B1C4: 010140f9  ldr x1, [x8]
0x06A6B1C8: e8030091  mov x8, sp
0x06A6B1CC: 21c04697  bl #0x3c1b250
0x06A6B1D0: e00740f9  ldr x0, [sp, #8]
0x06A6B1D4: 610e40f9  ldr x1, [x19, #0x18]
0x06A6B1D8: e2031faa  mov x2, xzr
0x06A6B1DC: a5fda997  bl #0x54ea870
0x06A6B1E0: f44f44a9  ldp x20, x19, [sp, #0x40]
0x06A6B1E4: fe5743a9  ldp x30, x21, [sp, #0x30]
0x06A6B1E8: 00000012  and w0, w0, #1
0x06A6B1EC: ff430191  add sp, sp, #0x50
0x06A6B1F0: c0035fd6  ret
0x06A6B1F4: ae561c97  bl #0x3180cac

