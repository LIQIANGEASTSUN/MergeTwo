; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25952 Merger.MergeBoard.Data.TickResultArgs.ImmediateToolBoxCollectedResult
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9A5E0 | public Entity get_Entity() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06A9A5E0: 000840f9  ldr x0, [x0, #0x10]
0x06A9A5E4: c0035fd6  ret

; RVA 0x6A9A5E8 | private void set_Entity(Entity value) { }
; bytes=8 sha256=2890562bc0879d38b9a788c54abad49b7e6e055c1e3f2e34f60184b37178d442 status=arm64_complete_bound indexed_start=True
0x06A9A5E8: 010c01f8  str x1, [x0, #0x10]!
0x06A9A5EC: f6981b17  b #0x31809c4

; RVA 0x6A9A5F0 | public int get_Position() { }
; bytes=8 sha256=50abf56e70bf4ffd353b0c6ed3c4e4880c6169bcd84263b80a4680f2ca7fb9ab status=arm64_complete_bound indexed_start=True
0x06A9A5F0: 001840b9  ldr w0, [x0, #0x18]
0x06A9A5F4: c0035fd6  ret

; RVA 0x6A9A5F8 | private void set_Position(int value) { }
; bytes=8 sha256=6e9ff5dd14743d62b4c65ceed8cc7444a06b1f6a6df852c7ffa011f059b9080f status=arm64_complete_bound indexed_start=True
0x06A9A5F8: 011800b9  str w1, [x0, #0x18]
0x06A9A5FC: c0035fd6  ret

; RVA 0x6A9A600 | public IList<IMergeItem> get_CollectedTools() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x06A9A600: 001040f9  ldr x0, [x0, #0x20]
0x06A9A604: c0035fd6  ret

; RVA 0x6A9A608 | private void set_CollectedTools(IList<IMergeItem> value) { }
; bytes=8 sha256=3f40ac2f770884988226c9bd10e15ed55f71df1ea8a8f1de51785a556e8c719e status=arm64_complete_bound indexed_start=True
0x06A9A608: 010c02f8  str x1, [x0, #0x20]!
0x06A9A60C: ee981b17  b #0x31809c4

; RVA 0x6A9A610 | public void .ctor(Entity entity, int position, IList<IMergeItem> collectedTools) { }
; bytes=84 sha256=6138c09ddb52799a71c94a5b53dd597b92dde64af26db9edb45d6fefa960a618 status=arm64_complete_bound indexed_start=True
0x06A9A610: fe0f1df8  str x30, [sp, #-0x30]!
0x06A9A614: f65701a9  stp x22, x21, [sp, #0x10]
0x06A9A618: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A9A61C: f50301aa  mov x21, x1
0x06A9A620: e1031faa  mov x1, xzr
0x06A9A624: f30303aa  mov x19, x3
0x06A9A628: f403022a  mov w20, w2
0x06A9A62C: f60300aa  mov x22, x0
0x06A9A630: f3ffb097  bl #0x56da5fc
0x06A9A634: e00316aa  mov x0, x22
0x06A9A638: 150c01f8  str x21, [x0, #0x10]!
0x06A9A63C: e10315aa  mov x1, x21
0x06A9A640: e1981b97  bl #0x31809c4
0x06A9A644: d30e02f8  str x19, [x22, #0x20]!
0x06A9A648: d4821fb8  stur w20, [x22, #-8]
0x06A9A64C: e00316aa  mov x0, x22
0x06A9A650: e10313aa  mov x1, x19
0x06A9A654: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A9A658: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A9A65C: fe0743f8  ldr x30, [sp], #0x30
0x06A9A660: d9981b17  b #0x31809c4

