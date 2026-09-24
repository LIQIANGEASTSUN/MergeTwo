; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 918 .BoardSystem.<>c__DisplayClass73_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x666B030 | public void .ctor() { }
; bytes=8 sha256=0b5f658d4cc6e7be35255fd873b603a04562b6f8070474fdb5c0b874cd721692 status=arm64_complete_bound indexed_start=True
0x0666B030: e1031faa  mov x1, xzr
0x0666B034: 72bdc117  b #0x56da5fc

; RVA 0x666BE64 | internal bool <GetUnlockedItemById>b__0(PositionComponent position) { }
; bytes=172 sha256=450b02c0ed7cda4a63f10f33d44420a6fa7d1702e3444849e5b7e5f08834c642 status=arm64_complete_bound indexed_start=True
0x0666BE64: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0666BE68: f44f01a9  stp x20, x19, [sp, #0x10]
0x0666BE6C: f5b500b0  adrp x21, #0x7d28000
0x0666BE70: a8b24339  ldrb w8, [x21, #0xec]
0x0666BE74: f30301aa  mov x19, x1
0x0666BE78: f40300aa  mov x20, x0
0x0666BE7C: 28010037  tbnz w8, #0, #0x666bea0
0x0666BE80: 80800090  adrp x0, #0x767b000
0x0666BE84: 00cc47f9  ldr x0, [x0, #0xf98]
0x0666BE88: e4522c97  bl #0x3180a18
0x0666BE8C: 808000f0  adrp x0, #0x767e000
0x0666BE90: 001c43f9  ldr x0, [x0, #0x638]
0x0666BE94: e1522c97  bl #0x3180a18
0x0666BE98: 28008052  movz w8, #0x1
0x0666BE9C: a8b20339  strb w8, [x21, #0xec]
0x0666BEA0: 730300b4  cbz x19, #0x666bf0c
0x0666BEA4: 88800090  adrp x8, #0x767b000
0x0666BEA8: 08cd47f9  ldr x8, [x8, #0xf98]
0x0666BEAC: e00313aa  mov x0, x19
0x0666BEB0: 010140f9  ldr x1, [x8]
0x0666BEB4: 5a065697  bl #0x3bed81c
0x0666BEB8: a00200b4  cbz x0, #0x666bf0c
0x0666BEBC: 001840f9  ldr x0, [x0, #0x30]
0x0666BEC0: 810a40f9  ldr x1, [x20, #0x10]
0x0666BEC4: e2031faa  mov x2, xzr
0x0666BEC8: 6afab997  bl #0x54ea870
0x0666BECC: 60010036  tbz w0, #0, #0x666bef8
0x0666BED0: 888000f0  adrp x8, #0x767e000
0x0666BED4: 081d43f9  ldr x8, [x8, #0x638]
0x0666BED8: e00313aa  mov x0, x19
0x0666BEDC: 010140f9  ldr x1, [x8]
0x0666BEE0: 4f065697  bl #0x3bed81c
0x0666BEE4: 400100b4  cbz x0, #0x666bf0c
0x0666BEE8: e1031faa  mov x1, xzr
0x0666BEEC: 0a460a94  bl #0x68fd714
0x0666BEF0: 08000052  eor w8, w0, #1
0x0666BEF4: 02000014  b #0x666befc
0x0666BEF8: e8031f2a  mov w8, wzr
0x0666BEFC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0666BF00: 00010012  and w0, w8, #1
0x0666BF04: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0666BF08: c0035fd6  ret
0x0666BF0C: 68532c97  bl #0x3180cac

