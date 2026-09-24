; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25953 Merger.MergeBoard.Data.TickResultArgs.ImmediateToolFragmentCollectedResult
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9A664 | public Entity get_Entity() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06A9A664: 000840f9  ldr x0, [x0, #0x10]
0x06A9A668: c0035fd6  ret

; RVA 0x6A9A66C | private void set_Entity(Entity value) { }
; bytes=8 sha256=e8d8970bbe19e188eaf56c938c4d7868e865e6a5351d7a61b9d177a39f6b836d status=arm64_complete_bound indexed_start=True
0x06A9A66C: 010c01f8  str x1, [x0, #0x10]!
0x06A9A670: d5981b17  b #0x31809c4

; RVA 0x6A9A674 | public int get_Position() { }
; bytes=8 sha256=50abf56e70bf4ffd353b0c6ed3c4e4880c6169bcd84263b80a4680f2ca7fb9ab status=arm64_complete_bound indexed_start=True
0x06A9A674: 001840b9  ldr w0, [x0, #0x18]
0x06A9A678: c0035fd6  ret

; RVA 0x6A9A67C | private void set_Position(int value) { }
; bytes=8 sha256=6e9ff5dd14743d62b4c65ceed8cc7444a06b1f6a6df852c7ffa011f059b9080f status=arm64_complete_bound indexed_start=True
0x06A9A67C: 011800b9  str w1, [x0, #0x18]
0x06A9A680: c0035fd6  ret

; RVA 0x6A9A684 | public IMergeItem get_CollectedTool() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x06A9A684: 001040f9  ldr x0, [x0, #0x20]
0x06A9A688: c0035fd6  ret

; RVA 0x6A9A68C | private void set_CollectedTool(IMergeItem value) { }
; bytes=8 sha256=3157d0c2f046694182e08f364c8eac471cecf7fb19e4f3126aea3525d1f53c41 status=arm64_complete_bound indexed_start=True
0x06A9A68C: 010c02f8  str x1, [x0, #0x20]!
0x06A9A690: cd981b17  b #0x31809c4

; RVA 0x6A9A694 | public void .ctor(Entity entity, int position, IMergeItem collectedTool) { }
; bytes=84 sha256=50ba1ed8f9a2586a091c0eb439e200fc94ef5dc62d40de5b5f38320b6f9bead7 status=arm64_complete_bound indexed_start=True
0x06A9A694: fe0f1df8  str x30, [sp, #-0x30]!
0x06A9A698: f65701a9  stp x22, x21, [sp, #0x10]
0x06A9A69C: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A9A6A0: f50301aa  mov x21, x1
0x06A9A6A4: e1031faa  mov x1, xzr
0x06A9A6A8: f30303aa  mov x19, x3
0x06A9A6AC: f403022a  mov w20, w2
0x06A9A6B0: f60300aa  mov x22, x0
0x06A9A6B4: d2ffb097  bl #0x56da5fc
0x06A9A6B8: e00316aa  mov x0, x22
0x06A9A6BC: 150c01f8  str x21, [x0, #0x10]!
0x06A9A6C0: e10315aa  mov x1, x21
0x06A9A6C4: c0981b97  bl #0x31809c4
0x06A9A6C8: d30e02f8  str x19, [x22, #0x20]!
0x06A9A6CC: d4821fb8  stur w20, [x22, #-8]
0x06A9A6D0: e00316aa  mov x0, x22
0x06A9A6D4: e10313aa  mov x1, x19
0x06A9A6D8: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A9A6DC: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A9A6E0: fe0743f8  ldr x30, [sp], #0x30
0x06A9A6E4: b8981b17  b #0x31809c4

