; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25948 Merger.MergeBoard.Data.TickResultArgs.ExtractFailedResult
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9A4C0 | public Entity get_Entity() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06A9A4C0: 000840f9  ldr x0, [x0, #0x10]
0x06A9A4C4: c0035fd6  ret

; RVA 0x6A9A4C8 | public void set_Entity(Entity value) { }
; bytes=8 sha256=6db8f8d117ac130322e0b7f4a36381edbe2e4ccbbc13a550fb846ece96c8c256 status=arm64_complete_bound indexed_start=True
0x06A9A4C8: 010c01f8  str x1, [x0, #0x10]!
0x06A9A4CC: 3e991b17  b #0x31809c4

; RVA 0x6A9A4D0 | public string get_Reason() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x06A9A4D0: 000c40f9  ldr x0, [x0, #0x18]
0x06A9A4D4: c0035fd6  ret

; RVA 0x6A9A4D8 | public void set_Reason(string value) { }
; bytes=8 sha256=ee400abfc06783e4a24ec0302ed635fb0c8663467961e7018c6d25615a3d9a4a status=arm64_complete_bound indexed_start=True
0x06A9A4D8: 018c01f8  str x1, [x0, #0x18]!
0x06A9A4DC: 3a991b17  b #0x31809c4

; RVA 0x6A9A4E0 | public IMergeItem get_MergeItem() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x06A9A4E0: 001040f9  ldr x0, [x0, #0x20]
0x06A9A4E4: c0035fd6  ret

; RVA 0x6A9A4E8 | public void set_MergeItem(IMergeItem value) { }
; bytes=8 sha256=5bfadc6b834cd9f7389c64774e0da7e5a5c5890da584b8a6805fa00e5c1894d8 status=arm64_complete_bound indexed_start=True
0x06A9A4E8: 010c02f8  str x1, [x0, #0x20]!
0x06A9A4EC: 36991b17  b #0x31809c4

; RVA 0x6A9A4F0 | public void .ctor(Entity entity, string reason, IMergeItem mergeItem) { }
; bytes=96 sha256=62cc5565f68b57f791217fb7894f1191050118a963c3fadf9e4567420246c018 status=arm64_complete_bound indexed_start=True
0x06A9A4F0: fe0f1df8  str x30, [sp, #-0x30]!
0x06A9A4F4: f65701a9  stp x22, x21, [sp, #0x10]
0x06A9A4F8: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A9A4FC: f50301aa  mov x21, x1
0x06A9A500: e1031faa  mov x1, xzr
0x06A9A504: f30303aa  mov x19, x3
0x06A9A508: f40302aa  mov x20, x2
0x06A9A50C: f60300aa  mov x22, x0
0x06A9A510: 3b00b197  bl #0x56da5fc
0x06A9A514: e00316aa  mov x0, x22
0x06A9A518: 150c01f8  str x21, [x0, #0x10]!
0x06A9A51C: e10315aa  mov x1, x21
0x06A9A520: 29991b97  bl #0x31809c4
0x06A9A524: e00316aa  mov x0, x22
0x06A9A528: 148c01f8  str x20, [x0, #0x18]!
0x06A9A52C: e10314aa  mov x1, x20
0x06A9A530: 25991b97  bl #0x31809c4
0x06A9A534: d30e02f8  str x19, [x22, #0x20]!
0x06A9A538: e00316aa  mov x0, x22
0x06A9A53C: e10313aa  mov x1, x19
0x06A9A540: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A9A544: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A9A548: fe0743f8  ldr x30, [sp], #0x30
0x06A9A54C: 1e991b17  b #0x31809c4

