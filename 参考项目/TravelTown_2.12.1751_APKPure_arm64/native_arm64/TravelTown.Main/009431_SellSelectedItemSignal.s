; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 9431 Merger.Game.Signal.SellSelectedItemSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x676C8C4 | public SelectedBoardItem get_Item() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x0676C8C4: 000840f9  ldr x0, [x0, #0x10]
0x0676C8C8: c0035fd6  ret

; RVA 0x676C8CC | public Entity get_Entity() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x0676C8CC: 000c40f9  ldr x0, [x0, #0x18]
0x0676C8D0: c0035fd6  ret

; RVA 0x676C8D4 | public void .ctor(SelectedBoardItem item, Entity entityToSell) { }
; bytes=68 sha256=1cd5f4b4f5cb34561fe15d723bfbf153896882c10bce9be36322ed83245b2875 status=arm64_complete_bound indexed_start=True
0x0676C8D4: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0676C8D8: f44f01a9  stp x20, x19, [sp, #0x10]
0x0676C8DC: f40301aa  mov x20, x1
0x0676C8E0: e1031faa  mov x1, xzr
0x0676C8E4: f30302aa  mov x19, x2
0x0676C8E8: f50300aa  mov x21, x0
0x0676C8EC: 44b7bd97  bl #0x56da5fc
0x0676C8F0: e00315aa  mov x0, x21
0x0676C8F4: 140c01f8  str x20, [x0, #0x10]!
0x0676C8F8: e10314aa  mov x1, x20
0x0676C8FC: 32502897  bl #0x31809c4
0x0676C900: b38e01f8  str x19, [x21, #0x18]!
0x0676C904: e10313aa  mov x1, x19
0x0676C908: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0676C90C: e00315aa  mov x0, x21
0x0676C910: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0676C914: 2c502817  b #0x31809c4

