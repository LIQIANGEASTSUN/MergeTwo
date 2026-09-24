; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 9873 Merger.Services.Backend.Sync.Data.Payloads.BoardStructure
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x67C9974 | public void .ctor() { }
; bytes=388 sha256=4ceefb3c9bb69be230bebfb653b3d6ad7adefb5bfae5c4b3f4f465c9bbbacab2 status=arm64_complete_bound indexed_start=True
0x067C9974: fe0f1af8  str x30, [sp, #-0x60]!
0x067C9978: fc6f01a9  stp x28, x27, [sp, #0x10]
0x067C997C: fa6702a9  stp x26, x25, [sp, #0x20]
0x067C9980: f85f03a9  stp x24, x23, [sp, #0x30]
0x067C9984: f65704a9  stp x22, x21, [sp, #0x40]
0x067C9988: f44f05a9  stp x20, x19, [sp, #0x50]
0x067C998C: fcaa00f0  adrp x28, #0x7d28000
0x067C9990: 5b7a00b0  adrp x27, #0x7712000
0x067C9994: 547a00b0  adrp x20, #0x7712000
0x067C9998: 5a7a00b0  adrp x26, #0x7712000
0x067C999C: 597a00b0  adrp x25, #0x7712000
0x067C99A0: 587a00b0  adrp x24, #0x7712000
0x067C99A4: 577a00b0  adrp x23, #0x7712000
0x067C99A8: 567a00b0  adrp x22, #0x7712000
0x067C99AC: 557a00b0  adrp x21, #0x7712000
0x067C99B0: 7ba741f9  ldr x27, [x27, #0x348]
0x067C99B4: 94aa41f9  ldr x20, [x20, #0x350]
0x067C99B8: 5aaf41f9  ldr x26, [x26, #0x358]
0x067C99BC: 88d37e39  ldrb w8, [x28, #0xfb4]
0x067C99C0: 39b341f9  ldr x25, [x25, #0x360]
0x067C99C4: 18b741f9  ldr x24, [x24, #0x368]
0x067C99C8: f7ba41f9  ldr x23, [x23, #0x370]
0x067C99CC: d6be41f9  ldr x22, [x22, #0x378]
0x067C99D0: b5c241f9  ldr x21, [x21, #0x380]
0x067C99D4: f30300aa  mov x19, x0
0x067C99D8: 68030037  tbnz w8, #0, #0x67c9a44
0x067C99DC: 407a00b0  adrp x0, #0x7712000
0x067C99E0: 00b841f9  ldr x0, [x0, #0x370]
0x067C99E4: 0ddc2697  bl #0x3180a18
0x067C99E8: 407a00b0  adrp x0, #0x7712000
0x067C99EC: 00c041f9  ldr x0, [x0, #0x380]
0x067C99F0: 0adc2697  bl #0x3180a18
0x067C99F4: 407a00b0  adrp x0, #0x7712000
0x067C99F8: 00a841f9  ldr x0, [x0, #0x350]
0x067C99FC: 07dc2697  bl #0x3180a18
0x067C9A00: 407a00b0  adrp x0, #0x7712000
0x067C9A04: 00b041f9  ldr x0, [x0, #0x360]
0x067C9A08: 04dc2697  bl #0x3180a18
0x067C9A0C: 407a00b0  adrp x0, #0x7712000
0x067C9A10: 00bc41f9  ldr x0, [x0, #0x378]
0x067C9A14: 01dc2697  bl #0x3180a18
0x067C9A18: 407a00b0  adrp x0, #0x7712000
0x067C9A1C: 00ac41f9  ldr x0, [x0, #0x358]
0x067C9A20: fedb2697  bl #0x3180a18
0x067C9A24: 407a00b0  adrp x0, #0x7712000
0x067C9A28: 00b441f9  ldr x0, [x0, #0x368]
0x067C9A2C: fbdb2697  bl #0x3180a18
0x067C9A30: 407a00b0  adrp x0, #0x7712000
0x067C9A34: 00a441f9  ldr x0, [x0, #0x348]
0x067C9A38: f8db2697  bl #0x3180a18
0x067C9A3C: 28008052  movz w8, #0x1
0x067C9A40: 88d33e39  strb w8, [x28, #0xfb4]
0x067C9A44: e00313aa  mov x0, x19
0x067C9A48: e1031faa  mov x1, xzr
0x067C9A4C: ec42bc97  bl #0x56da5fc
0x067C9A50: 600340f9  ldr x0, [x27]
0x067C9A54: 93dc2697  bl #0x3180ca0
0x067C9A58: 810240f9  ldr x1, [x20]
0x067C9A5C: f40300aa  mov x20, x0
0x067C9A60: 76e86197  bl #0x4043c38
0x067C9A64: e00313aa  mov x0, x19
0x067C9A68: 140c02f8  str x20, [x0, #0x20]!
0x067C9A6C: e10314aa  mov x1, x20
0x067C9A70: d5db2697  bl #0x31809c4
0x067C9A74: 400340f9  ldr x0, [x26]
0x067C9A78: 8adc2697  bl #0x3180ca0
0x067C9A7C: 210340f9  ldr x1, [x25]
0x067C9A80: f40300aa  mov x20, x0
0x067C9A84: 6de86197  bl #0x4043c38
0x067C9A88: e00313aa  mov x0, x19
0x067C9A8C: 148c02f8  str x20, [x0, #0x28]!
0x067C9A90: e10314aa  mov x1, x20
0x067C9A94: ccdb2697  bl #0x31809c4
0x067C9A98: 000340f9  ldr x0, [x24]
0x067C9A9C: 81dc2697  bl #0x3180ca0
0x067C9AA0: e10240f9  ldr x1, [x23]
0x067C9AA4: f40300aa  mov x20, x0
0x067C9AA8: 64e86197  bl #0x4043c38
0x067C9AAC: e00313aa  mov x0, x19
0x067C9AB0: 148c03f8  str x20, [x0, #0x38]!
0x067C9AB4: e10314aa  mov x1, x20
0x067C9AB8: c3db2697  bl #0x31809c4
0x067C9ABC: c00240f9  ldr x0, [x22]
0x067C9AC0: 78dc2697  bl #0x3180ca0
0x067C9AC4: a10240f9  ldr x1, [x21]
0x067C9AC8: f40300aa  mov x20, x0
0x067C9ACC: 5be86197  bl #0x4043c38
0x067C9AD0: 740e03f8  str x20, [x19, #0x30]!
0x067C9AD4: e00313aa  mov x0, x19
0x067C9AD8: e10314aa  mov x1, x20
0x067C9ADC: f44f45a9  ldp x20, x19, [sp, #0x50]
0x067C9AE0: f65744a9  ldp x22, x21, [sp, #0x40]
0x067C9AE4: f85f43a9  ldp x24, x23, [sp, #0x30]
0x067C9AE8: fa6742a9  ldp x26, x25, [sp, #0x20]
0x067C9AEC: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x067C9AF0: fe0746f8  ldr x30, [sp], #0x60
0x067C9AF4: b4db2617  b #0x31809c4

