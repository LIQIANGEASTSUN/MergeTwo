; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 10944 Framework.Core.Services.Backend.Remote.Payloads.BackendStates
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x69167A0 | public void .ctor() { }
; bytes=136 sha256=a782b13f1e598adc8517c1de9eb3b6f598264fd4b137aad51cbbf635f676747c status=arm64_complete_bound indexed_start=True
0x069167A0: fe0f1df8  str x30, [sp, #-0x30]!
0x069167A4: f65701a9  stp x22, x21, [sp, #0x10]
0x069167A8: f44f02a9  stp x20, x19, [sp, #0x20]
0x069167AC: 95a000f0  adrp x21, #0x7d29000
0x069167B0: 166c00f0  adrp x22, #0x7699000
0x069167B4: 546d00f0  adrp x20, #0x76c1000
0x069167B8: a8ee6a39  ldrb w8, [x21, #0xabb]
0x069167BC: d6f241f9  ldr x22, [x22, #0x3e0]
0x069167C0: 94aa47f9  ldr x20, [x20, #0xf50]
0x069167C4: f30300aa  mov x19, x0
0x069167C8: 28010037  tbnz w8, #0, #0x69167ec
0x069167CC: 406d00f0  adrp x0, #0x76c1000
0x069167D0: 00a847f9  ldr x0, [x0, #0xf50]
0x069167D4: 91a82197  bl #0x3180a18
0x069167D8: 006c00f0  adrp x0, #0x7699000
0x069167DC: 00f041f9  ldr x0, [x0, #0x3e0]
0x069167E0: 8ea82197  bl #0x3180a18
0x069167E4: 28008052  movz w8, #0x1
0x069167E8: a8ee2a39  strb w8, [x21, #0xabb]
0x069167EC: c00240f9  ldr x0, [x22]
0x069167F0: 2ca92197  bl #0x3180ca0
0x069167F4: 810240f9  ldr x1, [x20]
0x069167F8: f40300aa  mov x20, x0
0x069167FC: ea2d9797  bl #0x4ee1fa4
0x06916800: e00313aa  mov x0, x19
0x06916804: 148c01f8  str x20, [x0, #0x18]!
0x06916808: e10314aa  mov x1, x20
0x0691680C: 6ea82197  bl #0x31809c4
0x06916810: e00313aa  mov x0, x19
0x06916814: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06916818: f65741a9  ldp x22, x21, [sp, #0x10]
0x0691681C: e1031faa  mov x1, xzr
0x06916820: fe0743f8  ldr x30, [sp], #0x30
0x06916824: 760fb717  b #0x56da5fc

