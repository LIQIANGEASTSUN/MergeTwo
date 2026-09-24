; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 665 .ItemConsumeSystem.<>c__DisplayClass8_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x628B1E0 | public void .ctor() { }
; bytes=8 sha256=95e683718ddd380fde8382199bee3546fe061f5d743733cd88560b2839762ce7 status=arm64_complete_bound indexed_start=True
0x0628B1E0: e1031faa  mov x1, xzr
0x0628B1E4: 063dd117  b #0x56da5fc

; RVA 0x628B718 | internal bool <TryFindPreferredItemFromHint>b__1(VisualComponent item) { }
; bytes=236 sha256=c50f861663721a91d1b496a5034a675aed1629aa6ab19f60585d26b94b110e21 status=arm64_complete_bound indexed_start=True
0x0628B718: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0628B71C: f44f01a9  stp x20, x19, [sp, #0x10]
0x0628B720: d5d400d0  adrp x21, #0x7d25000
0x0628B724: a82a5439  ldrb w8, [x21, #0x50a]
0x0628B728: f40301aa  mov x20, x1
0x0628B72C: f30300aa  mov x19, x0
0x0628B730: 28010037  tbnz w8, #0, #0x628b754
0x0628B734: 609f00f0  adrp x0, #0x767a000
0x0628B738: 004c42f9  ldr x0, [x0, #0x498]
0x0628B73C: b7d43b97  bl #0x3180a18
0x0628B740: 609f00f0  adrp x0, #0x767a000
0x0628B744: 00f443f9  ldr x0, [x0, #0x7e8]
0x0628B748: b4d43b97  bl #0x3180a18
0x0628B74C: 28008052  movz w8, #0x1
0x0628B750: a82a1439  strb w8, [x21, #0x50a]
0x0628B754: 680e40f9  ldr x8, [x19, #0x18]
0x0628B758: 480500b4  cbz x8, #0x628b800
0x0628B75C: 152540f9  ldr x21, [x8, #0x48]
0x0628B760: 150500b4  cbz x21, #0x628b800
0x0628B764: 6a9f00f0  adrp x10, #0x767a000
0x0628B768: a80240f9  ldr x8, [x21]
0x0628B76C: 4a4d42f9  ldr x10, [x10, #0x498]
0x0628B770: 095d4279  ldrh w9, [x8, #0x12e]
0x0628B774: 410140f9  ldr x1, [x10]
0x0628B778: 290100b4  cbz x9, #0x628b79c
0x0628B77C: 0a5940f9  ldr x10, [x8, #0xb0]
0x0628B780: 4a210091  add x10, x10, #8
0x0628B784: 4b815ff8  ldur x11, [x10, #-8]
0x0628B788: 7f0101eb  cmp x11, x1
0x0628B78C: 00010054  b.eq #0x628b7ac
0x0628B790: 290500f1  subs x9, x9, #1
0x0628B794: 4a410091  add x10, x10, #0x10
0x0628B798: 61ffff54  b.ne #0x628b784
0x0628B79C: 82028052  movz w2, #0x14
0x0628B7A0: e00315aa  mov x0, x21
0x0628B7A4: db2c3b97  bl #0x3156b10
0x0628B7A8: 05000014  b #0x628b7bc
0x0628B7AC: 490140b9  ldr w9, [x10]
0x0628B7B0: 29510011  add w9, w9, #0x14
0x0628B7B4: 08d1298b  add x8, x8, w9, sxtw #4
0x0628B7B8: 00e10491  add x0, x8, #0x138
0x0628B7BC: 080840a9  ldp x8, x2, [x0]
0x0628B7C0: e00315aa  mov x0, x21
0x0628B7C4: e10314aa  mov x1, x20
0x0628B7C8: 00013fd6  blr x8
0x0628B7CC: 680a40f9  ldr x8, [x19, #0x10]
0x0628B7D0: 880100b4  cbz x8, #0x628b800
0x0628B7D4: 699f00f0  adrp x9, #0x767a000
0x0628B7D8: 29f543f9  ldr x9, [x9, #0x7e8]
0x0628B7DC: f30300aa  mov x19, x0
0x0628B7E0: e00308aa  mov x0, x8
0x0628B7E4: 210140f9  ldr x1, [x9]
0x0628B7E8: 8c1ac497  bl #0x5392218
0x0628B7EC: 7f0200eb  cmp x19, x0
0x0628B7F0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0628B7F4: e0179f1a  cset w0, eq
0x0628B7F8: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0628B7FC: c0035fd6  ret
0x0628B800: 2bd53b97  bl #0x3180cac

