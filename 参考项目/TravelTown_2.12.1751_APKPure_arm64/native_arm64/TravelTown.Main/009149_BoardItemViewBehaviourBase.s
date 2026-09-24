; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 9149 Merger.Game.Views.BoardItem.ViewBehaviours.BoardItemViewBehaviourBase
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x67327C0 | protected void .ctor() { }
; bytes=72 sha256=b9142bd6bdccdeb46a3f5f7647af5b2b1cda2e6e7aae3e515a65ff7916c6ea3e status=arm64_complete_bound indexed_start=True
0x067327C0: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x067327C4: f44f01a9  stp x20, x19, [sp, #0x10]
0x067327C8: b4af00d0  adrp x20, #0x7d28000
0x067327CC: d57e00f0  adrp x21, #0x770d000
0x067327D0: 88a66639  ldrb w8, [x20, #0x9a9]
0x067327D4: b5d244f9  ldr x21, [x21, #0x9a0]
0x067327D8: f30300aa  mov x19, x0
0x067327DC: c8000037  tbnz w8, #0, #0x67327f4
0x067327E0: c07e00f0  adrp x0, #0x770d000
0x067327E4: 00d044f9  ldr x0, [x0, #0x9a0]
0x067327E8: 8c382997  bl #0x3180a18
0x067327EC: 28008052  movz w8, #0x1
0x067327F0: 88a62639  strb w8, [x20, #0x9a9]
0x067327F4: a10240f9  ldr x1, [x21]
0x067327F8: e00313aa  mov x0, x19
0x067327FC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06732800: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06732804: 76989317  b #0x4c189dc

