; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 564 .MergingConfigurationModel.<>c__DisplayClass55_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6140980 | public void .ctor() { }
; bytes=8 sha256=6531c2048293a5823cdb7856f7bb80cbf3277b41140413a655e4e89dcbcd7df2 status=arm64_complete_bound indexed_start=True
0x06140980: e1031faa  mov x1, xzr
0x06140984: 1e67d617  b #0x56da5fc

; RVA 0x6141AF0 | internal bool <IsProducedItemFromTooShortChain>b__0(IMergeItem item) { }
; bytes=204 sha256=d40cd1498a85df5178a74ecf69f4d597e66f7d080040ec78958451fe20c152d8 status=arm64_complete_bound indexed_start=True
0x06141AF0: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06141AF4: f44f01a9  stp x20, x19, [sp, #0x10]
0x06141AF8: 15df00f0  adrp x21, #0x7d24000
0x06141AFC: a8565739  ldrb w8, [x21, #0x5d5]
0x06141B00: f30301aa  mov x19, x1
0x06141B04: f40300aa  mov x20, x0
0x06141B08: 28010037  tbnz w8, #0, #0x6141b2c
0x06141B0C: c0a90090  adrp x0, #0x7679000
0x06141B10: 001044f9  ldr x0, [x0, #0x820]
0x06141B14: c1fb4097  bl #0x3180a18
0x06141B18: 00a900d0  adrp x0, #0x7663000
0x06141B1C: 00f446f9  ldr x0, [x0, #0xde8]
0x06141B20: befb4097  bl #0x3180a18
0x06141B24: 28008052  movz w8, #0x1
0x06141B28: a8561739  strb w8, [x21, #0x5d5]
0x06141B2C: 730400b4  cbz x19, #0x6141bb8
0x06141B30: caa90090  adrp x10, #0x7679000
0x06141B34: 680240f9  ldr x8, [x19]
0x06141B38: 4a1144f9  ldr x10, [x10, #0x820]
0x06141B3C: 940a40f9  ldr x20, [x20, #0x10]
0x06141B40: 095d4279  ldrh w9, [x8, #0x12e]
0x06141B44: 410140f9  ldr x1, [x10]
0x06141B48: 290100b4  cbz x9, #0x6141b6c
0x06141B4C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06141B50: 4a210091  add x10, x10, #8
0x06141B54: 4b815ff8  ldur x11, [x10, #-8]
0x06141B58: 7f0101eb  cmp x11, x1
0x06141B5C: 00010054  b.eq #0x6141b7c
0x06141B60: 290500f1  subs x9, x9, #1
0x06141B64: 4a410091  add x10, x10, #0x10
0x06141B68: 61ffff54  b.ne #0x6141b54
0x06141B6C: e00313aa  mov x0, x19
0x06141B70: e2031f2a  mov w2, wzr
0x06141B74: e7534097  bl #0x3156b10
0x06141B78: 04000014  b #0x6141b88
0x06141B7C: 490180b9  ldrsw x9, [x10]
0x06141B80: 0811098b  add x8, x8, x9, lsl #4
0x06141B84: 00e10491  add x0, x8, #0x138
0x06141B88: 080440a9  ldp x8, x1, [x0]
0x06141B8C: e00313aa  mov x0, x19
0x06141B90: 00013fd6  blr x8
0x06141B94: 340100b4  cbz x20, #0x6141bb8
0x06141B98: 08a900d0  adrp x8, #0x7663000
0x06141B9C: 08f546f9  ldr x8, [x8, #0xde8]
0x06141BA0: e10300aa  mov x1, x0
0x06141BA4: e00314aa  mov x0, x20
0x06141BA8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06141BAC: 020140f9  ldr x2, [x8]
0x06141BB0: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06141BB4: 120b7c17  b #0x40447fc
0x06141BB8: 3dfc4097  bl #0x3180cac

