; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25793 Merger.MergeBoard.Signals.MergeBoardItemLandedSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A7A958 | public Entity get_ItemEntity() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06A7A958: 000840f9  ldr x0, [x0, #0x10]
0x06A7A95C: c0035fd6  ret

; RVA 0x6A7A960 | public Entity get_SourceEntity() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x06A7A960: 000c40f9  ldr x0, [x0, #0x18]
0x06A7A964: c0035fd6  ret

; RVA 0x6A7A968 | public IBoardItemView get_ItemView() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x06A7A968: 001040f9  ldr x0, [x0, #0x20]
0x06A7A96C: c0035fd6  ret

; RVA 0x6A7A970 | public ItemCreatedSource get_ItemCreatedSource() { }
; bytes=8 sha256=ba269e200604d0dd95f57e6bd974cfb4fb4a15db1799161315f4b00aef67931c status=arm64_complete_bound indexed_start=True
0x06A7A970: 002840b9  ldr w0, [x0, #0x28]
0x06A7A974: c0035fd6  ret

; RVA 0x6A7A978 | public void .ctor(Entity sourceEntity, Entity itemEntity, IBoardItemView itemView, ItemCreatedSource spawnedItemCreatedBy) { }
; bytes=108 sha256=7b22260597606c9d623a381866c520df5b4fa793e61fc96328df135311ddc5fc status=arm64_complete_bound indexed_start=True
0x06A7A978: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x06A7A97C: f65701a9  stp x22, x21, [sp, #0x10]
0x06A7A980: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A7A984: f60301aa  mov x22, x1
0x06A7A988: e1031faa  mov x1, xzr
0x06A7A98C: f303042a  mov w19, w4
0x06A7A990: f40303aa  mov x20, x3
0x06A7A994: f50302aa  mov x21, x2
0x06A7A998: f70300aa  mov x23, x0
0x06A7A99C: 187fb197  bl #0x56da5fc
0x06A7A9A0: e00317aa  mov x0, x23
0x06A7A9A4: 150c01f8  str x21, [x0, #0x10]!
0x06A7A9A8: e10315aa  mov x1, x21
0x06A7A9AC: 06181c97  bl #0x31809c4
0x06A7A9B0: e00317aa  mov x0, x23
0x06A7A9B4: 168c01f8  str x22, [x0, #0x18]!
0x06A7A9B8: e10316aa  mov x1, x22
0x06A7A9BC: 02181c97  bl #0x31809c4
0x06A7A9C0: f40e02f8  str x20, [x23, #0x20]!
0x06A7A9C4: e00317aa  mov x0, x23
0x06A7A9C8: e10314aa  mov x1, x20
0x06A7A9CC: fe171c97  bl #0x31809c4
0x06A7A9D0: f30a00b9  str w19, [x23, #8]
0x06A7A9D4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A7A9D8: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A7A9DC: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x06A7A9E0: c0035fd6  ret

