; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25790 .TransformSystem.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A7A86C | private static void .cctor() { }
; bytes=104 sha256=64bf3eff8c90cb5a5158d2cf36b7eff9cad34c27e64a860e6a302eb608963109 status=arm64_complete_bound indexed_start=True
0x06A7A86C: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A7A870: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A7A874: 93950090  adrp x19, #0x7d2a000
0x06A7A878: b46500f0  adrp x20, #0x7731000
0x06A7A87C: 688e5c39  ldrb w8, [x19, #0x723]
0x06A7A880: 941644f9  ldr x20, [x20, #0x828]
0x06A7A884: c8000037  tbnz w8, #0, #0x6a7a89c
0x06A7A888: a06500f0  adrp x0, #0x7731000
0x06A7A88C: 001444f9  ldr x0, [x0, #0x828]
0x06A7A890: 62181c97  bl #0x3180a18
0x06A7A894: 28008052  movz w8, #0x1
0x06A7A898: 688e1c39  strb w8, [x19, #0x723]
0x06A7A89C: 800240f9  ldr x0, [x20]
0x06A7A8A0: 00191c97  bl #0x3180ca0
0x06A7A8A4: e1031faa  mov x1, xzr
0x06A7A8A8: f30300aa  mov x19, x0
0x06A7A8AC: 547fb197  bl #0x56da5fc
0x06A7A8B0: 880240f9  ldr x8, [x20]
0x06A7A8B4: e10313aa  mov x1, x19
0x06A7A8B8: 085d40f9  ldr x8, [x8, #0xb8]
0x06A7A8BC: 130100f9  str x19, [x8]
0x06A7A8C0: 880240f9  ldr x8, [x20]
0x06A7A8C4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A7A8C8: 005d40f9  ldr x0, [x8, #0xb8]
0x06A7A8CC: fe0742f8  ldr x30, [sp], #0x20
0x06A7A8D0: 3d181c17  b #0x31809c4

; RVA 0x6A7A8D4 | public void .ctor() { }
; bytes=8 sha256=7c8e65429926b3595480f9c873d010ff58d521579ab3c43bd6cc967508943583 status=arm64_complete_bound indexed_start=True
0x06A7A8D4: e1031faa  mov x1, xzr
0x06A7A8D8: 497fb117  b #0x56da5fc

; RVA 0x6A7A8DC | internal bool <Tick>b__9_0(ValueTuple<Entity, ExpendableComponent, BoardTilePositionComponent, TimeDurationComponent, TimeLimitedActivationComponent> entity) { }
; bytes=32 sha256=07d3c86c3eca2a497823350bc0f54f8f6d821fa7a2f0cb4d0780548b7ee0f985 status=arm64_complete_bound indexed_start=True
0x06A7A8DC: 28204139  ldrb w8, [x1, #0x48]
0x06A7A8E0: 202040fd  ldr d0, [x1, #0x40]
0x06A7A8E4: 1f010071  cmp w8, #0
0x06A7A8E8: e8079f1a  cset w8, ne
0x06A7A8EC: 0820601e  fcmp d0, #0.0
0x06A7A8F0: e9879f1a  cset w9, ls
0x06A7A8F4: 2001080a  and w0, w9, w8
0x06A7A8F8: c0035fd6  ret

; RVA 0x6A7A8FC | internal bool <HandleTransformByInteract>b__10_0(WeightedItemSpawnable i) { }
; bytes=84 sha256=1584e2f235f906d1c9bc94f3f7b4345952ac16158e12a75b064b49c032063801 status=arm64_complete_bound indexed_start=True
0x06A7A8FC: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A7A900: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A7A904: 94950090  adrp x20, #0x7d2a000
0x06A7A908: 88925c39  ldrb w8, [x20, #0x724]
0x06A7A90C: f30301aa  mov x19, x1
0x06A7A910: c8000037  tbnz w8, #0, #0x6a7a928
0x06A7A914: 20600090  adrp x0, #0x767e000
0x06A7A918: 00ac44f9  ldr x0, [x0, #0x958]
0x06A7A91C: 3f181c97  bl #0x3180a18
0x06A7A920: 28008052  movz w8, #0x1
0x06A7A924: 88921c39  strb w8, [x20, #0x724]
0x06A7A928: 330100b4  cbz x19, #0x6a7a94c
0x06A7A92C: 28600090  adrp x8, #0x767e000
0x06A7A930: 08ad44f9  ldr x8, [x8, #0x958]
0x06A7A934: 600e40f9  ldr x0, [x19, #0x18]
0x06A7A938: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A7A93C: e2031faa  mov x2, xzr
0x06A7A940: 010140f9  ldr x1, [x8]
0x06A7A944: fe0742f8  ldr x30, [sp], #0x20
0x06A7A948: cabfa917  b #0x54ea870
0x06A7A94C: d8181c97  bl #0x3180cac

