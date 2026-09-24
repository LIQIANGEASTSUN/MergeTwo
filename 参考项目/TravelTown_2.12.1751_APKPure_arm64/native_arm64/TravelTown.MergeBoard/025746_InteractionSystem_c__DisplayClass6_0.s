; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25746 .InteractionSystem.<>c__DisplayClass6_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A6BBC4 | public void .ctor() { }
; bytes=8 sha256=e0447517368608ff0ca586b7f45963646277d16f3830857ccd34ed9742938aad status=arm64_complete_bound indexed_start=True
0x06A6BBC4: e1031faa  mov x1, xzr
0x06A6BBC8: 8dbab117  b #0x56da5fc

; RVA 0x6A6BCD0 | internal bool <GetDefaultEntityUuidToConsume>b__0(Entity entity) { }
; bytes=28 sha256=c21822110b0ebffbd910ca47979f991cdcd2dfe8fbcdbe120a1fa25ef6a12856 status=arm64_complete_bound indexed_start=True
0x06A6BCD0: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A6BCD4: 080840f9  ldr x8, [x0, #0x10]
0x06A6BCD8: 880000b4  cbz x8, #0x6a6bce8
0x06A6BCDC: 020c40f9  ldr x2, [x0, #0x18]
0x06A6BCE0: fe0741f8  ldr x30, [sp], #0x10
0x06A6BCE4: baffff17  b #0x6a6bbcc
0x06A6BCE8: f1531c97  bl #0x3180cac

