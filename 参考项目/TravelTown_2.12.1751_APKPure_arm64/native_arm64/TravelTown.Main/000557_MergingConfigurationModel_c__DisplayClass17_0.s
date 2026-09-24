; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 557 .MergingConfigurationModel.<>c__DisplayClass17_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x613DDE0 | public void .ctor() { }
; bytes=8 sha256=7a504db9320585fcaadf435918a6ff149bde7f56538fabff5a4ba0904737b459 status=arm64_complete_bound indexed_start=True
0x0613DDE0: e1031faa  mov x1, xzr
0x0613DDE4: 0672d617  b #0x56da5fc

; RVA 0x61413CC | internal bool <IsItemInProducerChain>b__0(IMergeItem spawnableItem) { }
; bytes=276 sha256=2085704fb0da68e9dc66a2386d6c95a13d1d3f0c0e51e056662e1ef7cd058a4d status=arm64_complete_bound indexed_start=True
0x061413CC: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x061413D0: f44f01a9  stp x20, x19, [sp, #0x10]
0x061413D4: 15df00f0  adrp x21, #0x7d24000
0x061413D8: a8365739  ldrb w8, [x21, #0x5cd]
0x061413DC: f40301aa  mov x20, x1
0x061413E0: f30300aa  mov x19, x0
0x061413E4: c8000037  tbnz w8, #0, #0x61413fc
0x061413E8: c0a90090  adrp x0, #0x7679000
0x061413EC: 001044f9  ldr x0, [x0, #0x820]
0x061413F0: 8afd4097  bl #0x3180a18
0x061413F4: 28008052  movz w8, #0x1
0x061413F8: a8361739  strb w8, [x21, #0x5cd]
0x061413FC: 140700b4  cbz x20, #0x61414dc
0x06141400: d5a90090  adrp x21, #0x7679000
0x06141404: 880240f9  ldr x8, [x20]
0x06141408: b51244f9  ldr x21, [x21, #0x820]
0x0614140C: 095d4279  ldrh w9, [x8, #0x12e]
0x06141410: a10240f9  ldr x1, [x21]
0x06141414: 290100b4  cbz x9, #0x6141438
0x06141418: 0a5940f9  ldr x10, [x8, #0xb0]
0x0614141C: 4a210091  add x10, x10, #8
0x06141420: 4b815ff8  ldur x11, [x10, #-8]
0x06141424: 7f0101eb  cmp x11, x1
0x06141428: 00010054  b.eq #0x6141448
0x0614142C: 290500f1  subs x9, x9, #1
0x06141430: 4a410091  add x10, x10, #0x10
0x06141434: 61ffff54  b.ne #0x6141420
0x06141438: e00314aa  mov x0, x20
0x0614143C: e2031f2a  mov w2, wzr
0x06141440: b4554097  bl #0x3156b10
0x06141444: 04000014  b #0x6141454
0x06141448: 490180b9  ldrsw x9, [x10]
0x0614144C: 0811098b  add x8, x8, x9, lsl #4
0x06141450: 00e10491  add x0, x8, #0x138
0x06141454: 080440a9  ldp x8, x1, [x0]
0x06141458: e00314aa  mov x0, x20
0x0614145C: 00013fd6  blr x8
0x06141460: 740a40f9  ldr x20, [x19, #0x10]
0x06141464: d40300b4  cbz x20, #0x61414dc
0x06141468: 880240f9  ldr x8, [x20]
0x0614146C: a10240f9  ldr x1, [x21]
0x06141470: f30300aa  mov x19, x0
0x06141474: 095d4279  ldrh w9, [x8, #0x12e]
0x06141478: 290100b4  cbz x9, #0x614149c
0x0614147C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06141480: 4a210091  add x10, x10, #8
0x06141484: 4b815ff8  ldur x11, [x10, #-8]
0x06141488: 7f0101eb  cmp x11, x1
0x0614148C: 00010054  b.eq #0x61414ac
0x06141490: 290500f1  subs x9, x9, #1
0x06141494: 4a410091  add x10, x10, #0x10
0x06141498: 61ffff54  b.ne #0x6141484
0x0614149C: e00314aa  mov x0, x20
0x061414A0: e2031f2a  mov w2, wzr
0x061414A4: 9b554097  bl #0x3156b10
0x061414A8: 04000014  b #0x61414b8
0x061414AC: 490180b9  ldrsw x9, [x10]
0x061414B0: 0811098b  add x8, x8, x9, lsl #4
0x061414B4: 00e10491  add x0, x8, #0x138
0x061414B8: 080440a9  ldp x8, x1, [x0]
0x061414BC: e00314aa  mov x0, x20
0x061414C0: 00013fd6  blr x8
0x061414C4: e10300aa  mov x1, x0
0x061414C8: e00313aa  mov x0, x19
0x061414CC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x061414D0: e2031faa  mov x2, xzr
0x061414D4: fe57c2a8  ldp x30, x21, [sp], #0x20
0x061414D8: e6a4ce17  b #0x54ea870
0x061414DC: f4fd4097  bl #0x3180cac

