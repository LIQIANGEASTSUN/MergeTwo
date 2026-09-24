; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 484 .PushedRngItemsModel.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x612FA90 | private static void .cctor() { }
; bytes=104 sha256=4c59656fc60152a9265c2a7ed386e3e34fed44cb4d501a0f1226e1e6c82e1ce2 status=arm64_complete_bound indexed_start=True
0x0612FA90: fe0f1ef8  str x30, [sp, #-0x20]!
0x0612FA94: f44f01a9  stp x20, x19, [sp, #0x10]
0x0612FA98: b3df00b0  adrp x19, #0x7d24000
0x0612FA9C: 54ad00f0  adrp x20, #0x76da000
0x0612FAA0: 681a5439  ldrb w8, [x19, #0x506]
0x0612FAA4: 94e643f9  ldr x20, [x20, #0x7c8]
0x0612FAA8: c8000037  tbnz w8, #0, #0x612fac0
0x0612FAAC: 40ad00f0  adrp x0, #0x76da000
0x0612FAB0: 00e443f9  ldr x0, [x0, #0x7c8]
0x0612FAB4: d9434197  bl #0x3180a18
0x0612FAB8: 28008052  movz w8, #0x1
0x0612FABC: 681a1439  strb w8, [x19, #0x506]
0x0612FAC0: 800240f9  ldr x0, [x20]
0x0612FAC4: 77444197  bl #0x3180ca0
0x0612FAC8: e1031faa  mov x1, xzr
0x0612FACC: f30300aa  mov x19, x0
0x0612FAD0: cbaad697  bl #0x56da5fc
0x0612FAD4: 880240f9  ldr x8, [x20]
0x0612FAD8: e10313aa  mov x1, x19
0x0612FADC: 085d40f9  ldr x8, [x8, #0xb8]
0x0612FAE0: 130100f9  str x19, [x8]
0x0612FAE4: 880240f9  ldr x8, [x20]
0x0612FAE8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0612FAEC: 005d40f9  ldr x0, [x8, #0xb8]
0x0612FAF0: fe0742f8  ldr x30, [sp], #0x20
0x0612FAF4: b4434117  b #0x31809c4

; RVA 0x612FAF8 | public void .ctor() { }
; bytes=8 sha256=f9e466d53261e667b546cad97cc1b9cf61044d7833c0f8e3adeebbdd6ce137a9 status=arm64_complete_bound indexed_start=True
0x0612FAF8: e1031faa  mov x1, xzr
0x0612FAFC: c0aad617  b #0x56da5fc

; RVA 0x612FB00 | internal bool <FindItem>b__11_0(PushedRngItem e) { }
; bytes=92 sha256=c6c93b0165b489071a7a07acdd64c29ad74cf0190263f566379bfa14dd97dbea status=arm64_complete_bound indexed_start=True
0x0612FB00: fe0f1ef8  str x30, [sp, #-0x20]!
0x0612FB04: f44f01a9  stp x20, x19, [sp, #0x10]
0x0612FB08: b4df00b0  adrp x20, #0x7d24000
0x0612FB0C: 881e5439  ldrb w8, [x20, #0x507]
0x0612FB10: f30301aa  mov x19, x1
0x0612FB14: c8000037  tbnz w8, #0, #0x612fb2c
0x0612FB18: e0a800f0  adrp x0, #0x764e000
0x0612FB1C: 00ec42f9  ldr x0, [x0, #0x5d8]
0x0612FB20: be434197  bl #0x3180a18
0x0612FB24: 28008052  movz w8, #0x1
0x0612FB28: 881e1439  strb w8, [x20, #0x507]
0x0612FB2C: 730100b4  cbz x19, #0x612fb58
0x0612FB30: e8a800f0  adrp x8, #0x764e000
0x0612FB34: 08ed42f9  ldr x8, [x8, #0x5d8]
0x0612FB38: 600e40f9  ldr x0, [x19, #0x18]
0x0612FB3C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0612FB40: e2031faa  mov x2, xzr
0x0612FB44: 080140f9  ldr x8, [x8]
0x0612FB48: 085d40f9  ldr x8, [x8, #0xb8]
0x0612FB4C: 010140f9  ldr x1, [x8]
0x0612FB50: fe0742f8  ldr x30, [sp], #0x20
0x0612FB54: 47ebce17  b #0x54ea870
0x0612FB58: 55444197  bl #0x3180cac

