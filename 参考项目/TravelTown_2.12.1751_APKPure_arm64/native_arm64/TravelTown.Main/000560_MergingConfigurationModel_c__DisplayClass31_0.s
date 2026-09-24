; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 560 .MergingConfigurationModel.<>c__DisplayClass31_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x613E8B0 | public void .ctor() { }
; bytes=8 sha256=76c169004cdc9b38162fb72f1c3289e8f869172845d31c99c45e03c038285ad9 status=arm64_complete_bound indexed_start=True
0x0613E8B0: e1031faa  mov x1, xzr
0x0613E8B4: 526fd617  b #0x56da5fc

; RVA 0x6141640 | internal bool <GetNextItemOnGraph>b__0(IMergeItem item) { }
; bytes=172 sha256=b754ca348ab3124264374c91476266fcc5b77b1e047e273a5d2daf57267938ee status=arm64_complete_bound indexed_start=True
0x06141640: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06141644: f44f01a9  stp x20, x19, [sp, #0x10]
0x06141648: 15df00f0  adrp x21, #0x7d24000
0x0614164C: a8425739  ldrb w8, [x21, #0x5d0]
0x06141650: f40301aa  mov x20, x1
0x06141654: f30300aa  mov x19, x0
0x06141658: c8000037  tbnz w8, #0, #0x6141670
0x0614165C: c0a90090  adrp x0, #0x7679000
0x06141660: 001044f9  ldr x0, [x0, #0x820]
0x06141664: edfc4097  bl #0x3180a18
0x06141668: 28008052  movz w8, #0x1
0x0614166C: a8421739  strb w8, [x21, #0x5d0]
0x06141670: d40300b4  cbz x20, #0x61416e8
0x06141674: caa90090  adrp x10, #0x7679000
0x06141678: 880240f9  ldr x8, [x20]
0x0614167C: 4a1144f9  ldr x10, [x10, #0x820]
0x06141680: 095d4279  ldrh w9, [x8, #0x12e]
0x06141684: 410140f9  ldr x1, [x10]
0x06141688: 290100b4  cbz x9, #0x61416ac
0x0614168C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06141690: 4a210091  add x10, x10, #8
0x06141694: 4b815ff8  ldur x11, [x10, #-8]
0x06141698: 7f0101eb  cmp x11, x1
0x0614169C: 00010054  b.eq #0x61416bc
0x061416A0: 290500f1  subs x9, x9, #1
0x061416A4: 4a410091  add x10, x10, #0x10
0x061416A8: 61ffff54  b.ne #0x6141694
0x061416AC: e00314aa  mov x0, x20
0x061416B0: e2031f2a  mov w2, wzr
0x061416B4: 17554097  bl #0x3156b10
0x061416B8: 04000014  b #0x61416c8
0x061416BC: 490180b9  ldrsw x9, [x10]
0x061416C0: 0811098b  add x8, x8, x9, lsl #4
0x061416C4: 00e10491  add x0, x8, #0x138
0x061416C8: 080440a9  ldp x8, x1, [x0]
0x061416CC: e00314aa  mov x0, x20
0x061416D0: 00013fd6  blr x8
0x061416D4: 610a40f9  ldr x1, [x19, #0x10]
0x061416D8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x061416DC: e2031faa  mov x2, xzr
0x061416E0: fe57c2a8  ldp x30, x21, [sp], #0x20
0x061416E4: 63a4ce17  b #0x54ea870
0x061416E8: 71fd4097  bl #0x3180cac

