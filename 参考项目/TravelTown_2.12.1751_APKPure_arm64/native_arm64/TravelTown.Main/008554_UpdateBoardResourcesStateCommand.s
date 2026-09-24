; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 8554 Merger.Game.Command.UpdateBoardResourcesStateCommand
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x668AB48 | public void .ctor() { }
; bytes=72 sha256=4c1605f271c248edf79077bae655eb7dd1832edf86aaa39cd4e909fe0f1c4b78 status=arm64_complete_bound indexed_start=True
0x0668AB48: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0668AB4C: f44f01a9  stp x20, x19, [sp, #0x10]
0x0668AB50: f4b400d0  adrp x20, #0x7d28000
0x0668AB54: f58300d0  adrp x21, #0x7708000
0x0668AB58: 88624939  ldrb w8, [x20, #0x258]
0x0668AB5C: b5a647f9  ldr x21, [x21, #0xf48]
0x0668AB60: f30300aa  mov x19, x0
0x0668AB64: c8000037  tbnz w8, #0, #0x668ab7c
0x0668AB68: e08300d0  adrp x0, #0x7708000
0x0668AB6C: 00a447f9  ldr x0, [x0, #0xf48]
0x0668AB70: aad72b97  bl #0x3180a18
0x0668AB74: 28008052  movz w8, #0x1
0x0668AB78: 88620939  strb w8, [x20, #0x258]
0x0668AB7C: a10240f9  ldr x1, [x21]
0x0668AB80: e00313aa  mov x0, x19
0x0668AB84: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0668AB88: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0668AB8C: 58df8017  b #0x46c28ec

