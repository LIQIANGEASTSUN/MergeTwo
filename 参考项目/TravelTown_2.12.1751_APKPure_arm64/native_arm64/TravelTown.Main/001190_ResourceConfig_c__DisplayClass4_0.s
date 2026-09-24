; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1190 .ResourceConfig.<>c__DisplayClass4_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x69143B0 | public void .ctor() { }
; bytes=8 sha256=39a24c4d181f02ae65032986686029198e15831cffac56fb844c684076062d34 status=arm64_complete_bound indexed_start=True
0x069143B0: e1031faa  mov x1, xzr
0x069143B4: 9218b717  b #0x56da5fc

; RVA 0x6914934 | internal bool <GetDefinition>b__0(ResourceDefinition resourceDefinition) { }
; bytes=232 sha256=9eefaa7598fd6baffbab8766432bec447df8d3a8449d59d2065a27a68e05c898 status=arm64_complete_bound indexed_start=True
0x06914934: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06914938: f44f01a9  stp x20, x19, [sp, #0x10]
0x0691493C: b5a000b0  adrp x21, #0x7d29000
0x06914940: a8fe6739  ldrb w8, [x21, #0x9ff]
0x06914944: f40301aa  mov x20, x1
0x06914948: f30300aa  mov x19, x0
0x0691494C: 28010037  tbnz w8, #0, #0x6914970
0x06914950: 206b00b0  adrp x0, #0x7679000
0x06914954: 000c44f9  ldr x0, [x0, #0x818]
0x06914958: 30b02197  bl #0x3180a18
0x0691495C: e06a00f0  adrp x0, #0x7673000
0x06914960: 005c40f9  ldr x0, [x0, #0xb8]
0x06914964: 2db02197  bl #0x3180a18
0x06914968: 28008052  movz w8, #0x1
0x0691496C: a8fe2739  strb w8, [x21, #0x9ff]
0x06914970: 540500b4  cbz x20, #0x6914a18
0x06914974: e86a00f0  adrp x8, #0x7673000
0x06914978: 085d40f9  ldr x8, [x8, #0xb8]
0x0691497C: 941240b9  ldr w20, [x20, #0x10]
0x06914980: 000140f9  ldr x0, [x8]
0x06914984: 08e040b9  ldr w8, [x0, #0xe0]
0x06914988: 48000035  cbnz w8, #0x6914990
0x0691498C: 80b02197  bl #0x3180b8c
0x06914990: e003142a  mov w0, w20
0x06914994: e1031faa  mov x1, xzr
0x06914998: 62e0e097  bl #0x614cb20
0x0691499C: e00300b4  cbz x0, #0x6914a18
0x069149A0: 2a6b00b0  adrp x10, #0x7679000
0x069149A4: 080040f9  ldr x8, [x0]
0x069149A8: 4a0d44f9  ldr x10, [x10, #0x818]
0x069149AC: f40300aa  mov x20, x0
0x069149B0: 095d4279  ldrh w9, [x8, #0x12e]
0x069149B4: 410140f9  ldr x1, [x10]
0x069149B8: 290100b4  cbz x9, #0x69149dc
0x069149BC: 0a5940f9  ldr x10, [x8, #0xb0]
0x069149C0: 4a210091  add x10, x10, #8
0x069149C4: 4b815ff8  ldur x11, [x10, #-8]
0x069149C8: 7f0101eb  cmp x11, x1
0x069149CC: 00010054  b.eq #0x69149ec
0x069149D0: 290500f1  subs x9, x9, #1
0x069149D4: 4a410091  add x10, x10, #0x10
0x069149D8: 61ffff54  b.ne #0x69149c4
0x069149DC: e00314aa  mov x0, x20
0x069149E0: e2031f2a  mov w2, wzr
0x069149E4: 4b082197  bl #0x3156b10
0x069149E8: 04000014  b #0x69149f8
0x069149EC: 490180b9  ldrsw x9, [x10]
0x069149F0: 0811098b  add x8, x8, x9, lsl #4
0x069149F4: 00e10491  add x0, x8, #0x138
0x069149F8: 080440a9  ldp x8, x1, [x0]
0x069149FC: e00314aa  mov x0, x20
0x06914A00: 00013fd6  blr x8
0x06914A04: 610a40f9  ldr x1, [x19, #0x10]
0x06914A08: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06914A0C: e2031faa  mov x2, xzr
0x06914A10: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06914A14: 9757af17  b #0x54ea870
0x06914A18: a5b02197  bl #0x3180cac

