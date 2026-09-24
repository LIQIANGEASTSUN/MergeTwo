; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 630 .InteractionUtil.<>c__DisplayClass1_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6278138 | public void .ctor() { }
; bytes=8 sha256=1bd70400699bfdd58fbd242832bf2f0aa11fec6b33475b803ae79426874fccb5 status=arm64_complete_bound indexed_start=True
0x06278138: e1031faa  mov x1, xzr
0x0627813C: 3089d117  b #0x56da5fc

; RVA 0x62789A8 | internal bool <GetConsumedItems>b__0(ItemMultiple itemMultiple) { }
; bytes=136 sha256=c5ef40acf4f7d0784a18fbd3ce144e23f2d1c4066b59d9c001fa8754b85f0b66 status=arm64_complete_bound indexed_start=True
0x062789A8: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x062789AC: f44f01a9  stp x20, x19, [sp, #0x10]
0x062789B0: 75d500b0  adrp x21, #0x7d25000
0x062789B4: a8d25139  ldrb w8, [x21, #0x474]
0x062789B8: f30301aa  mov x19, x1
0x062789BC: f40300aa  mov x20, x0
0x062789C0: c8000037  tbnz w8, #0, #0x62789d8
0x062789C4: 00a000d0  adrp x0, #0x767a000
0x062789C8: 00f443f9  ldr x0, [x0, #0x7e8]
0x062789CC: 13203c97  bl #0x3180a18
0x062789D0: 28008052  movz w8, #0x1
0x062789D4: a8d21139  strb w8, [x21, #0x474]
0x062789D8: b30200b4  cbz x19, #0x6278a2c
0x062789DC: 08a000d0  adrp x8, #0x767a000
0x062789E0: 08f543f9  ldr x8, [x8, #0x7e8]
0x062789E4: 940a40f9  ldr x20, [x20, #0x10]
0x062789E8: e00313aa  mov x0, x19
0x062789EC: 010140f9  ldr x1, [x8]
0x062789F0: 0a66c497  bl #0x5392218
0x062789F4: d40100b4  cbz x20, #0x6278a2c
0x062789F8: e10300aa  mov x1, x0
0x062789FC: e00314aa  mov x0, x20
0x06278A00: e2031faa  mov x2, xzr
0x06278A04: 1f2a1a94  bl #0x6903280
0x06278A08: f403002a  mov w20, w0
0x06278A0C: e00313aa  mov x0, x19
0x06278A10: e1031faa  mov x1, xzr
0x06278A14: 3a99f697  bl #0x601eefc
0x06278A18: 9f02006b  cmp w20, w0
0x06278A1C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06278A20: e0b79f1a  cset w0, ge
0x06278A24: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06278A28: c0035fd6  ret
0x06278A2C: a0203c97  bl #0x3180cac

