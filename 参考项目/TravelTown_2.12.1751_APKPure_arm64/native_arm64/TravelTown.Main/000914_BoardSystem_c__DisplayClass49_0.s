; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 914 .BoardSystem.<>c__DisplayClass49_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x666B7AC | public void .ctor() { }
; bytes=8 sha256=7076a70fece0b004f7f23b4bdc0a8f3c556dc77bff5dcaab4b41ebeff81009ee status=arm64_complete_bound indexed_start=True
0x0666B7AC: e1031faa  mov x1, xzr
0x0666B7B0: 93bbc117  b #0x56da5fc

; RVA 0x666BC30 | internal void <CreateBoardDistanceLookup>b__2(BoardItemPosition position2) { }
; bytes=212 sha256=05b91df6291539bb2eb638ee2e6251cc93119d28836fa1c3884c54c2b6a72a30 status=arm64_complete_bound indexed_start=True
0x0666BC30: e923bc6d  stp d9, d8, [sp, #-0x40]!
0x0666BC34: fe0b00f9  str x30, [sp, #0x10]
0x0666BC38: f65702a9  stp x22, x21, [sp, #0x20]
0x0666BC3C: f44f03a9  stp x20, x19, [sp, #0x30]
0x0666BC40: 14400091  add x20, x0, #0x10
0x0666BC44: f50300aa  mov x21, x0
0x0666BC48: e00314aa  mov x0, x20
0x0666BC4C: e2031faa  mov x2, xzr
0x0666BC50: f30301aa  mov x19, x1
0x0666BC54: a2640a94  bl #0x6904edc
0x0666BC58: 56b50090  adrp x22, #0x7d13000
0x0666BC5C: c85e5b39  ldrb w8, [x22, #0x6d7]
0x0666BC60: 081ca04e  mov v8.16b, v0.16b
0x0666BC64: 0990241e  fmov s9, #10.00000000
0x0666BC68: c8000035  cbnz w8, #0x666bc80
0x0666BC6C: 007f00f0  adrp x0, #0x764e000
0x0666BC70: 000447f9  ldr x0, [x0, #0xe08]
0x0666BC74: 69532c97  bl #0x3180a18
0x0666BC78: 28008052  movz w8, #0x1
0x0666BC7C: c85e1b39  strb w8, [x22, #0x6d7]
0x0666BC80: 087f00f0  adrp x8, #0x764e000
0x0666BC84: 080547f9  ldr x8, [x8, #0xe08]
0x0666BC88: 0809291e  fmul s8, s8, s9
0x0666BC8C: 000140f9  ldr x0, [x8]
0x0666BC90: 08e040b9  ldr w8, [x0, #0xe0]
0x0666BC94: 48000035  cbnz w8, #0x666bc9c
0x0666BC98: bd532c97  bl #0x3180b8c
0x0666BC9C: 08f0af52  movz w8, #0x7f80, lsl #16
0x0666BCA0: 0041251e  frintm s0, s8
0x0666BCA4: 0101271e  fmov s1, w8
0x0666BCA8: 0901301e  fcvtms w9, s8
0x0666BCAC: 0020211e  fcmp s0, s1
0x0666BCB0: 0800b052  movz w8, #0x8000, lsl #16
0x0666BCB4: 0801891a  csel w8, w8, w9, eq
0x0666BCB8: e81b00b9  str w8, [sp, #0x18]
0x0666BCBC: a00e40f9  ldr x0, [x21, #0x18]
0x0666BCC0: 000200b4  cbz x0, #0x666bd00
0x0666BCC4: a10a40f9  ldr x1, [x21, #0x10]
0x0666BCC8: e3630091  add x3, sp, #0x18
0x0666BCCC: e20313aa  mov x2, x19
0x0666BCD0: b9feff97  bl #0x666b7b4
0x0666BCD4: a00e40f9  ldr x0, [x21, #0x18]
0x0666BCD8: 400100b4  cbz x0, #0x666bd00
0x0666BCDC: 820240f9  ldr x2, [x20]
0x0666BCE0: e3630091  add x3, sp, #0x18
0x0666BCE4: e10313aa  mov x1, x19
0x0666BCE8: b3feff97  bl #0x666b7b4
0x0666BCEC: f44f43a9  ldp x20, x19, [sp, #0x30]
0x0666BCF0: f65742a9  ldp x22, x21, [sp, #0x20]
0x0666BCF4: fe0b40f9  ldr x30, [sp, #0x10]
0x0666BCF8: e923c46c  ldp d9, d8, [sp], #0x40
0x0666BCFC: c0035fd6  ret
0x0666BD00: eb532c97  bl #0x3180cac

