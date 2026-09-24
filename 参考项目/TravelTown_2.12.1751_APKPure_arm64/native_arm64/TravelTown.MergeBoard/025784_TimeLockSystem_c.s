; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25784 .TimeLockSystem.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A78E2C | private static void .cctor() { }
; bytes=104 sha256=5fd9149fdaccca997b5ec3953d6ed9cfbd1958e7d423ae5c7e6311b0ce916fb4 status=arm64_complete_bound indexed_start=True
0x06A78E2C: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A78E30: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A78E34: 939500d0  adrp x19, #0x7d2a000
0x06A78E38: d46500b0  adrp x20, #0x7731000
0x06A78E3C: 68665c39  ldrb w8, [x19, #0x719]
0x06A78E40: 944e43f9  ldr x20, [x20, #0x698]
0x06A78E44: c8000037  tbnz w8, #0, #0x6a78e5c
0x06A78E48: c06500b0  adrp x0, #0x7731000
0x06A78E4C: 004c43f9  ldr x0, [x0, #0x698]
0x06A78E50: f21e1c97  bl #0x3180a18
0x06A78E54: 28008052  movz w8, #0x1
0x06A78E58: 68661c39  strb w8, [x19, #0x719]
0x06A78E5C: 800240f9  ldr x0, [x20]
0x06A78E60: 901f1c97  bl #0x3180ca0
0x06A78E64: e1031faa  mov x1, xzr
0x06A78E68: f30300aa  mov x19, x0
0x06A78E6C: e485b197  bl #0x56da5fc
0x06A78E70: 880240f9  ldr x8, [x20]
0x06A78E74: e10313aa  mov x1, x19
0x06A78E78: 085d40f9  ldr x8, [x8, #0xb8]
0x06A78E7C: 130100f9  str x19, [x8]
0x06A78E80: 880240f9  ldr x8, [x20]
0x06A78E84: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A78E88: 005d40f9  ldr x0, [x8, #0xb8]
0x06A78E8C: fe0742f8  ldr x30, [sp], #0x20
0x06A78E90: cd1e1c17  b #0x31809c4

; RVA 0x6A78E94 | public void .ctor() { }
; bytes=8 sha256=10271b8f3c53f1daca7b63914563e9c2e12585530e27e01e24e1466200266ca7 status=arm64_complete_bound indexed_start=True
0x06A78E94: e1031faa  mov x1, xzr
0x06A78E98: d985b117  b #0x56da5fc

; RVA 0x6A78E9C | internal bool <ProcessIntervalTick>b__2_0(ValueTuple<Entity, TimeLockComponent, BoardTilePositionComponent, IdComponent> e) { }
; bytes=32 sha256=00c3e09e699d13766d5192a0a289939ea0526d3fe7a234eb549fe5b2cacb203d status=arm64_complete_bound indexed_start=True
0x06A78E9C: 28804039  ldrb w8, [x1, #0x20]
0x06A78EA0: 200440fd  ldr d0, [x1, #8]
0x06A78EA4: 1f010071  cmp w8, #0
0x06A78EA8: e8079f1a  cset w8, ne
0x06A78EAC: 0820601e  fcmp d0, #0.0
0x06A78EB0: e9d79f1a  cset w9, gt
0x06A78EB4: 2001080a  and w0, w9, w8
0x06A78EB8: c0035fd6  ret

; RVA 0x6A78EBC | internal TimeLockGroup <ProcessIntervalTick>b__2_1(ValueTuple<Entity, TimeLockComponent, BoardTilePositionComponent, IdComponent> e) { }
; bytes=8 sha256=ad9907410d1618b197c1a3ca2aa1a64eff0268270511fe9bb5c9749dc89b9b97 status=arm64_complete_bound indexed_start=True
0x06A78EBC: 201c40b9  ldr w0, [x1, #0x1c]
0x06A78EC0: c0035fd6  ret

; RVA 0x6A78EC4 | internal bool <ApplyGroupLockBlock>b__7_0(ValueTuple<Entity, TimeLockComponent> e) { }
; bytes=32 sha256=00c3e09e699d13766d5192a0a289939ea0526d3fe7a234eb549fe5b2cacb203d status=arm64_complete_bound indexed_start=True
0x06A78EC4: 28804039  ldrb w8, [x1, #0x20]
0x06A78EC8: 200440fd  ldr d0, [x1, #8]
0x06A78ECC: 1f010071  cmp w8, #0
0x06A78ED0: e8079f1a  cset w8, ne
0x06A78ED4: 0820601e  fcmp d0, #0.0
0x06A78ED8: e9d79f1a  cset w9, gt
0x06A78EDC: 2001080a  and w0, w9, w8
0x06A78EE0: c0035fd6  ret

; RVA 0x6A78EE4 | internal TimeLockGroup <ApplyGroupLockBlock>b__7_1(ValueTuple<Entity, TimeLockComponent> e) { }
; bytes=8 sha256=ad9907410d1618b197c1a3ca2aa1a64eff0268270511fe9bb5c9749dc89b9b97 status=arm64_complete_bound indexed_start=True
0x06A78EE4: 201c40b9  ldr w0, [x1, #0x1c]
0x06A78EE8: c0035fd6  ret

