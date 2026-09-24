; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25963 Merger.MergeBoard.Data.TickResultArgs.ItemSelectionBoxPendingPickResult
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9A94C | public string get_Uuid() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06A9A94C: 000840f9  ldr x0, [x0, #0x10]
0x06A9A950: c0035fd6  ret

; RVA 0x6A9A954 | public void set_Uuid(string value) { }
; bytes=8 sha256=999df3708a3b0ac62dea2fb25fd57f8dcbcf0a4c4d253d07bb0288a362cf1943 status=arm64_complete_bound indexed_start=True
0x06A9A954: 010c01f8  str x1, [x0, #0x10]!
0x06A9A958: 1b981b17  b #0x31809c4

; RVA 0x6A9A95C | public int get_BoardPosition() { }
; bytes=8 sha256=50abf56e70bf4ffd353b0c6ed3c4e4880c6169bcd84263b80a4680f2ca7fb9ab status=arm64_complete_bound indexed_start=True
0x06A9A95C: 001840b9  ldr w0, [x0, #0x18]
0x06A9A960: c0035fd6  ret

; RVA 0x6A9A964 | public void set_BoardPosition(int value) { }
; bytes=8 sha256=6e9ff5dd14743d62b4c65ceed8cc7444a06b1f6a6df852c7ffa011f059b9080f status=arm64_complete_bound indexed_start=True
0x06A9A964: 011800b9  str w1, [x0, #0x18]
0x06A9A968: c0035fd6  ret

; RVA 0x6A9A96C | public IMergeItem get_MergeItem() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x06A9A96C: 001040f9  ldr x0, [x0, #0x20]
0x06A9A970: c0035fd6  ret

; RVA 0x6A9A974 | public void set_MergeItem(IMergeItem value) { }
; bytes=8 sha256=2d12d17660309ae429cb5049bd7fbc1b9b2e1abafaea01ef1e35747cdf77ce0c status=arm64_complete_bound indexed_start=True
0x06A9A974: 010c02f8  str x1, [x0, #0x20]!
0x06A9A978: 13981b17  b #0x31809c4

; RVA 0x6A9A97C | public Entity get_Entity() { }
; bytes=8 sha256=c0b9896d6c3d8aacf384c0d0cf5d897e84f621efe31cc89c980be348eb9c6614 status=arm64_complete_bound indexed_start=True
0x06A9A97C: 001440f9  ldr x0, [x0, #0x28]
0x06A9A980: c0035fd6  ret

; RVA 0x6A9A984 | public void set_Entity(Entity value) { }
; bytes=8 sha256=1a76197a66c612f7c634acb2e659b5b09fe211f8ee7344b16037533695c721ed status=arm64_complete_bound indexed_start=True
0x06A9A984: 018c02f8  str x1, [x0, #0x28]!
0x06A9A988: 0f981b17  b #0x31809c4

; RVA 0x6A9A98C | public void .ctor() { }
; bytes=8 sha256=c3bda5806099d5bf3c513defc190e98d9d7df5984e6bad14bc0b0f2a47d8a68c status=arm64_complete_bound indexed_start=True
0x06A9A98C: e1031faa  mov x1, xzr
0x06A9A990: 1bffb017  b #0x56da5fc

