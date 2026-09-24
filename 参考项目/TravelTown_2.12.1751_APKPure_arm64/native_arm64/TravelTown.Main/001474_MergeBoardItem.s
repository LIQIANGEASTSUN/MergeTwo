; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1474 MergeEngine.Configuration.Board.MergeBoardItem
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x601210C | public IMergeItem get_Item() { }
; bytes=24 sha256=f5c2c7e74903e45746dee5668fe89218e4e0376d5a034e9e9f53cce153ba75cd status=arm64_complete_bound indexed_start=True
0x0601210C: 001040f9  ldr x0, [x0, #0x20]
0x06012110: 800000b4  cbz x0, #0x6012120
0x06012114: 080040f9  ldr x8, [x0]
0x06012118: 02855ea9  ldp x2, x1, [x8, #0x1e8]
0x0601211C: 40001fd6  br x2
0x06012120: c0035fd6  ret

; RVA 0x6012124 | public MergeItemWeakReference get_ItemReference() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x06012124: 001040f9  ldr x0, [x0, #0x20]
0x06012128: c0035fd6  ret

; RVA 0x601212C | public void set_ItemReference(MergeItemWeakReference value) { }
; bytes=8 sha256=00d3ef8cea69c718313ae304f9e7db65592e8162ae4b8ac70dd1ac81fdb2d85c status=arm64_complete_bound indexed_start=True
0x0601212C: 010c02f8  str x1, [x0, #0x20]!
0x06012130: 25ba4517  b #0x31809c4

; RVA 0x6012134 | public void .ctor() { }
; bytes=8 sha256=3607317d116a29c61892ef6e12b7c91806262eddc52f1f14239a58205524e7bb status=arm64_complete_bound indexed_start=True
0x06012134: e1031faa  mov x1, xzr
0x06012138: 3121db17  b #0x56da5fc

