; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 961 .ExpendableSystem.<>c__DisplayClass24_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x678F11C | public void .ctor() { }
; bytes=8 sha256=d2e38cdd95c6347616956bad2dc9c0754baae6e580d025856c5e9f643bc623f4 status=arm64_complete_bound indexed_start=True
0x0678F11C: e1031faa  mov x1, xzr
0x0678F120: 372dbd17  b #0x56da5fc

; RVA 0x6790570 | internal void <SpawnItem>g__CostConsumedCallback|0() { }
; bytes=204 sha256=7201f79e14756127e6ed1935b7d3a526c999c39d47314f2b46314c426bd116cc status=arm64_complete_bound indexed_start=True
0x06790570: fe0f1ef8  str x30, [sp, #-0x20]!
0x06790574: f44f01a9  stp x20, x19, [sp, #0x10]
0x06790578: d3ac0090  adrp x19, #0x7d28000
0x0679057C: 688e7539  ldrb w8, [x19, #0xd63]
0x06790580: f40300aa  mov x20, x0
0x06790584: c8000037  tbnz w8, #0, #0x679059c
0x06790588: e0790090  adrp x0, #0x76cc000
0x0679058C: 003c43f9  ldr x0, [x0, #0x678]
0x06790590: 22c12797  bl #0x3180a18
0x06790594: 28008052  movz w8, #0x1
0x06790598: 688e3539  strb w8, [x19, #0xd63]
0x0679059C: 880a40f9  ldr x8, [x20, #0x10]
0x067905A0: c80400b4  cbz x8, #0x6790638
0x067905A4: 002d40f9  ldr x0, [x8, #0x58]
0x067905A8: 800400b4  cbz x0, #0x6790638
0x067905AC: 080040f9  ldr x8, [x0]
0x067905B0: 090541f9  ldr x9, [x8, #0x208]
0x067905B4: 010941f9  ldr x1, [x8, #0x210]
0x067905B8: 20013fd6  blr x9
0x067905BC: e00300b4  cbz x0, #0x6790638
0x067905C0: ea790090  adrp x10, #0x76cc000
0x067905C4: 080040f9  ldr x8, [x0]
0x067905C8: 4a3d43f9  ldr x10, [x10, #0x678]
0x067905CC: 940e40f9  ldr x20, [x20, #0x18]
0x067905D0: f30300aa  mov x19, x0
0x067905D4: 095d4279  ldrh w9, [x8, #0x12e]
0x067905D8: 410140f9  ldr x1, [x10]
0x067905DC: 290100b4  cbz x9, #0x6790600
0x067905E0: 0a5940f9  ldr x10, [x8, #0xb0]
0x067905E4: 4a210091  add x10, x10, #8
0x067905E8: 4b815ff8  ldur x11, [x10, #-8]
0x067905EC: 7f0101eb  cmp x11, x1
0x067905F0: 00010054  b.eq #0x6790610
0x067905F4: 290500f1  subs x9, x9, #1
0x067905F8: 4a410091  add x10, x10, #0x10
0x067905FC: 61ffff54  b.ne #0x67905e8
0x06790600: e2048052  movz w2, #0x27
0x06790604: e00313aa  mov x0, x19
0x06790608: 42192797  bl #0x3156b10
0x0679060C: 05000014  b #0x6790620
0x06790610: 490140b9  ldr w9, [x10]
0x06790614: 299d0011  add w9, w9, #0x27
0x06790618: 08d1298b  add x8, x8, w9, sxtw #4
0x0679061C: 00e10491  add x0, x8, #0x138
0x06790620: 030840a9  ldp x3, x2, [x0]
0x06790624: e00313aa  mov x0, x19
0x06790628: e10314aa  mov x1, x20
0x0679062C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06790630: fe0742f8  ldr x30, [sp], #0x20
0x06790634: 60001fd6  br x3
0x06790638: 9dc12797  bl #0x3180cac

