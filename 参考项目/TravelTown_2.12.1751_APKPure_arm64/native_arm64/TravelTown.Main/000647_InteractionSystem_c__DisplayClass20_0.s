; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 647 .InteractionSystem.<>c__DisplayClass20_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6280888 | public void .ctor() { }
; bytes=8 sha256=87e2a4a64fb24d63bc1bdec1629ad820061805dc30113563106e3b4153d9f15a status=arm64_complete_bound indexed_start=True
0x06280888: e1031faa  mov x1, xzr
0x0628088C: 5c67d117  b #0x56da5fc

; RVA 0x6280A84 | internal bool <CanCombineItems>b__0(ItemMultiple consumedItem) { }
; bytes=100 sha256=28d4df7d1231e2993f47e434860afab111c5b41862ef3df9e001343a88a8a328 status=arm64_complete_bound indexed_start=True
0x06280A84: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06280A88: f44f01a9  stp x20, x19, [sp, #0x10]
0x06280A8C: 35d500b0  adrp x21, #0x7d25000
0x06280A90: a8e65239  ldrb w8, [x21, #0x4b9]
0x06280A94: f40301aa  mov x20, x1
0x06280A98: f30300aa  mov x19, x0
0x06280A9C: c8000037  tbnz w8, #0, #0x6280ab4
0x06280AA0: c09f00d0  adrp x0, #0x767a000
0x06280AA4: 00f443f9  ldr x0, [x0, #0x7e8]
0x06280AA8: dcff3b97  bl #0x3180a18
0x06280AAC: 28008052  movz w8, #0x1
0x06280AB0: a8e61239  strb w8, [x21, #0x4b9]
0x06280AB4: 940100b4  cbz x20, #0x6280ae4
0x06280AB8: c89f00d0  adrp x8, #0x767a000
0x06280ABC: 08f543f9  ldr x8, [x8, #0x7e8]
0x06280AC0: e00314aa  mov x0, x20
0x06280AC4: 010140f9  ldr x1, [x8]
0x06280AC8: d445c497  bl #0x5392218
0x06280ACC: 680a40f9  ldr x8, [x19, #0x10]
0x06280AD0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06280AD4: 1f0008eb  cmp x0, x8
0x06280AD8: e0179f1a  cset w0, eq
0x06280ADC: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06280AE0: c0035fd6  ret
0x06280AE4: 72003c97  bl #0x3180cac

