; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25957 Merger.MergeBoard.Data.TickResultArgs.ItemCreatedForFirstTime
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9A7B4 | public IMergeItem get_Item() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06A9A7B4: 000840f9  ldr x0, [x0, #0x10]
0x06A9A7B8: c0035fd6  ret

; RVA 0x6A9A7BC | public Entity get_Entity() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x06A9A7BC: 000c40f9  ldr x0, [x0, #0x18]
0x06A9A7C0: c0035fd6  ret

; RVA 0x6A9A7C4 | public void .ctor(IMergeItem item, Entity entity) { }
; bytes=68 sha256=b2c2ee93d5ed8683ec4bfc7c4989da644bd98026d76de9ccf8ee8ccee65424fe status=arm64_complete_bound indexed_start=True
0x06A9A7C4: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A9A7C8: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A9A7CC: f40301aa  mov x20, x1
0x06A9A7D0: e1031faa  mov x1, xzr
0x06A9A7D4: f30302aa  mov x19, x2
0x06A9A7D8: f50300aa  mov x21, x0
0x06A9A7DC: 88ffb097  bl #0x56da5fc
0x06A9A7E0: e00315aa  mov x0, x21
0x06A9A7E4: 140c01f8  str x20, [x0, #0x10]!
0x06A9A7E8: e10314aa  mov x1, x20
0x06A9A7EC: 76981b97  bl #0x31809c4
0x06A9A7F0: b38e01f8  str x19, [x21, #0x18]!
0x06A9A7F4: e10313aa  mov x1, x19
0x06A9A7F8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A9A7FC: e00315aa  mov x0, x21
0x06A9A800: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A9A804: 70981b17  b #0x31809c4

