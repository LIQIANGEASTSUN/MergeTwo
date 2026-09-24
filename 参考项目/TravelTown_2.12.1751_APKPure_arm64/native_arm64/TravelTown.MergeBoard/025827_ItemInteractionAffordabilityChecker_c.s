; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25827 .ItemInteractionAffordabilityChecker.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A81730 | private static void .cctor() { }
; bytes=104 sha256=fed963a0f91e92610ee6ce41f8d60d287aab1a4ef3ef8368f3261d0a7e8d189e status=arm64_complete_bound indexed_start=True
0x06A81730: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A81734: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A81738: 539500b0  adrp x19, #0x7d2a000
0x06A8173C: 94650090  adrp x20, #0x7731000
0x06A81740: 68965d39  ldrb w8, [x19, #0x765]
0x06A81744: 948645f9  ldr x20, [x20, #0xb08]
0x06A81748: c8000037  tbnz w8, #0, #0x6a81760
0x06A8174C: 80650090  adrp x0, #0x7731000
0x06A81750: 008445f9  ldr x0, [x0, #0xb08]
0x06A81754: b1fc1b97  bl #0x3180a18
0x06A81758: 28008052  movz w8, #0x1
0x06A8175C: 68961d39  strb w8, [x19, #0x765]
0x06A81760: 800240f9  ldr x0, [x20]
0x06A81764: 4ffd1b97  bl #0x3180ca0
0x06A81768: e1031faa  mov x1, xzr
0x06A8176C: f30300aa  mov x19, x0
0x06A81770: a363b197  bl #0x56da5fc
0x06A81774: 880240f9  ldr x8, [x20]
0x06A81778: e10313aa  mov x1, x19
0x06A8177C: 085d40f9  ldr x8, [x8, #0xb8]
0x06A81780: 130100f9  str x19, [x8]
0x06A81784: 880240f9  ldr x8, [x20]
0x06A81788: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A8178C: 005d40f9  ldr x0, [x8, #0xb8]
0x06A81790: fe0742f8  ldr x30, [sp], #0x20
0x06A81794: 8cfc1b17  b #0x31809c4

; RVA 0x6A81798 | public void .ctor() { }
; bytes=8 sha256=416728553159b953cf319ef4c4149a2cf4f90a150fb35b97c6c9c1434b98f3a0 status=arm64_complete_bound indexed_start=True
0x06A81798: e1031faa  mov x1, xzr
0x06A8179C: 9863b117  b #0x56da5fc

; RVA 0x6A817A0 | internal bool <CanAffordItemInteractionCost>b__5_0(Entity iteratedEntity) { }
; bytes=32 sha256=e22bb578d5deef9b88ec23841bbb3d72d8de18db7e841b21012ce825167d0682 status=arm64_complete_bound indexed_start=True
0x06A817A0: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A817A4: e00301aa  mov x0, x1
0x06A817A8: e1031faa  mov x1, xzr
0x06A817AC: 4e140094  bl #0x6a868e4
0x06A817B0: e803202a  mvn w8, w0
0x06A817B4: 00010012  and w0, w8, #1
0x06A817B8: fe0741f8  ldr x30, [sp], #0x10
0x06A817BC: c0035fd6  ret

; RVA 0x6A817C0 | internal string <CanAffordItemInteractionCost>b__5_1(Entity iteratedEntity) { }
; bytes=100 sha256=b6bb457a675ebe11b4444a1273da48047d9a736d61e6b08b32f7d32f5b686187 status=arm64_complete_bound indexed_start=True
0x06A817C0: ff4301d1  sub sp, sp, #0x50
0x06A817C4: fe1b00f9  str x30, [sp, #0x30]
0x06A817C8: f44f04a9  stp x20, x19, [sp, #0x40]
0x06A817CC: 549500b0  adrp x20, #0x7d2a000
0x06A817D0: 889a5d39  ldrb w8, [x20, #0x766]
0x06A817D4: f30301aa  mov x19, x1
0x06A817D8: c8000037  tbnz w8, #0, #0x6a817f0
0x06A817DC: c05f00b0  adrp x0, #0x767a000
0x06A817E0: 004442f9  ldr x0, [x0, #0x488]
0x06A817E4: 8dfc1b97  bl #0x3180a18
0x06A817E8: 28008052  movz w8, #0x1
0x06A817EC: 889a1d39  strb w8, [x20, #0x766]
0x06A817F0: 930100b4  cbz x19, #0x6a81820
0x06A817F4: c85f00b0  adrp x8, #0x767a000
0x06A817F8: 084542f9  ldr x8, [x8, #0x488]
0x06A817FC: e00313aa  mov x0, x19
0x06A81800: 010140f9  ldr x1, [x8]
0x06A81804: e8030091  mov x8, sp
0x06A81808: 92664697  bl #0x3c1b250
0x06A8180C: e00340f9  ldr x0, [sp]
0x06A81810: f44f44a9  ldp x20, x19, [sp, #0x40]
0x06A81814: fe1b40f9  ldr x30, [sp, #0x30]
0x06A81818: ff430191  add sp, sp, #0x50
0x06A8181C: c0035fd6  ret
0x06A81820: 23fd1b97  bl #0x3180cac

