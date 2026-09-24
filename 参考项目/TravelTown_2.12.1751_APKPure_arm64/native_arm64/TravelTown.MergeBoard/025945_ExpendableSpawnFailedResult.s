; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25945 Merger.MergeBoard.Data.TickResultArgs.ExpendableSpawnFailedResult
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9A3B4 | public Entity get_Entity() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06A9A3B4: 000840f9  ldr x0, [x0, #0x10]
0x06A9A3B8: c0035fd6  ret

; RVA 0x6A9A3BC | public string get_Reason() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x06A9A3BC: 000c40f9  ldr x0, [x0, #0x18]
0x06A9A3C0: c0035fd6  ret

; RVA 0x6A9A3C4 | public IMergeItem get_MergeItem() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x06A9A3C4: 001040f9  ldr x0, [x0, #0x20]
0x06A9A3C8: c0035fd6  ret

; RVA 0x6A9A3CC | public void .ctor(Entity entity, string reason, IMergeItem mergeItem) { }
; bytes=96 sha256=4481b80198b34814265eca5b61b6d89ef154a952edb6615706760bf639b4523d status=arm64_complete_bound indexed_start=True
0x06A9A3CC: fe0f1df8  str x30, [sp, #-0x30]!
0x06A9A3D0: f65701a9  stp x22, x21, [sp, #0x10]
0x06A9A3D4: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A9A3D8: f50301aa  mov x21, x1
0x06A9A3DC: e1031faa  mov x1, xzr
0x06A9A3E0: f30303aa  mov x19, x3
0x06A9A3E4: f40302aa  mov x20, x2
0x06A9A3E8: f60300aa  mov x22, x0
0x06A9A3EC: 8400b197  bl #0x56da5fc
0x06A9A3F0: e00316aa  mov x0, x22
0x06A9A3F4: 150c01f8  str x21, [x0, #0x10]!
0x06A9A3F8: e10315aa  mov x1, x21
0x06A9A3FC: 72991b97  bl #0x31809c4
0x06A9A400: e00316aa  mov x0, x22
0x06A9A404: 148c01f8  str x20, [x0, #0x18]!
0x06A9A408: e10314aa  mov x1, x20
0x06A9A40C: 6e991b97  bl #0x31809c4
0x06A9A410: d30e02f8  str x19, [x22, #0x20]!
0x06A9A414: e00316aa  mov x0, x22
0x06A9A418: e10313aa  mov x1, x19
0x06A9A41C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A9A420: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A9A424: fe0743f8  ldr x30, [sp], #0x30
0x06A9A428: 67991b17  b #0x31809c4

