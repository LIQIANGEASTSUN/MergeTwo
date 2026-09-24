; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 928 .ItemCountSystem.<>c__DisplayClass15_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x666D72C | public void .ctor() { }
; bytes=8 sha256=df776a1fb54280c6d0376040a7d809a28df359ef31eb655361e3814467e50467 status=arm64_complete_bound indexed_start=True
0x0666D72C: e1031faa  mov x1, xzr
0x0666D730: b3b3c117  b #0x56da5fc

; RVA 0x666D800 | internal bool <GetItemCountById>b__0(KeyValuePair<IMergeItem, int> data) { }
; bytes=184 sha256=76cb26236d7fcaa3664ee74763653eabe7c0a593f5fb25684c389c2e6f8894b0 status=arm64_complete_bound indexed_start=True
0x0666D800: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0666D804: f44f01a9  stp x20, x19, [sp, #0x10]
0x0666D808: d5b500f0  adrp x21, #0x7d28000
0x0666D80C: a82a4439  ldrb w8, [x21, #0x10a]
0x0666D810: f40301aa  mov x20, x1
0x0666D814: f30300aa  mov x19, x0
0x0666D818: 28010037  tbnz w8, #0, #0x666d83c
0x0666D81C: 60800090  adrp x0, #0x7679000
0x0666D820: 001044f9  ldr x0, [x0, #0x820]
0x0666D824: 7d4c2c97  bl #0x3180a18
0x0666D828: c08400f0  adrp x0, #0x7708000
0x0666D82C: 005440f9  ldr x0, [x0, #0xa8]
0x0666D830: 7a4c2c97  bl #0x3180a18
0x0666D834: 28008052  movz w8, #0x1
0x0666D838: a82a0439  strb w8, [x21, #0x10a]
0x0666D83C: d40300b4  cbz x20, #0x666d8b4
0x0666D840: 6a800090  adrp x10, #0x7679000
0x0666D844: 880240f9  ldr x8, [x20]
0x0666D848: 4a1144f9  ldr x10, [x10, #0x820]
0x0666D84C: 095d4279  ldrh w9, [x8, #0x12e]
0x0666D850: 410140f9  ldr x1, [x10]
0x0666D854: 290100b4  cbz x9, #0x666d878
0x0666D858: 0a5940f9  ldr x10, [x8, #0xb0]
0x0666D85C: 4a210091  add x10, x10, #8
0x0666D860: 4b815ff8  ldur x11, [x10, #-8]
0x0666D864: 7f0101eb  cmp x11, x1
0x0666D868: 00010054  b.eq #0x666d888
0x0666D86C: 290500f1  subs x9, x9, #1
0x0666D870: 4a410091  add x10, x10, #0x10
0x0666D874: 61ffff54  b.ne #0x666d860
0x0666D878: e00314aa  mov x0, x20
0x0666D87C: e2031f2a  mov w2, wzr
0x0666D880: a4a42b97  bl #0x3156b10
0x0666D884: 04000014  b #0x666d894
0x0666D888: 490180b9  ldrsw x9, [x10]
0x0666D88C: 0811098b  add x8, x8, x9, lsl #4
0x0666D890: 00e10491  add x0, x8, #0x138
0x0666D894: 080440a9  ldp x8, x1, [x0]
0x0666D898: e00314aa  mov x0, x20
0x0666D89C: 00013fd6  blr x8
0x0666D8A0: 610a40f9  ldr x1, [x19, #0x10]
0x0666D8A4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0666D8A8: e2031faa  mov x2, xzr
0x0666D8AC: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0666D8B0: f0f3b917  b #0x54ea870
0x0666D8B4: fe4c2c97  bl #0x3180cac

