; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 8306 Merger.Game.ViewModel.ProducerInventorySlotViewData
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x663385C | public IMergeItem get_Item() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x0663385C: 000840f9  ldr x0, [x0, #0x10]
0x06633860: c0035fd6  ret

; RVA 0x6633864 | public void set_Item(IMergeItem value) { }
; bytes=8 sha256=3d224c1018373c9ad598cc8b169d06986a9543760b12b410710ca31ff9c1877c status=arm64_complete_bound indexed_start=True
0x06633864: 010c01f8  str x1, [x0, #0x10]!
0x06633868: 57342d17  b #0x31809c4

; RVA 0x663386C | public int get_UnlocksAt() { }
; bytes=8 sha256=50abf56e70bf4ffd353b0c6ed3c4e4880c6169bcd84263b80a4680f2ca7fb9ab status=arm64_complete_bound indexed_start=True
0x0663386C: 001840b9  ldr w0, [x0, #0x18]
0x06633870: c0035fd6  ret

; RVA 0x6633874 | public void set_UnlocksAt(int value) { }
; bytes=8 sha256=6e9ff5dd14743d62b4c65ceed8cc7444a06b1f6a6df852c7ffa011f059b9080f status=arm64_complete_bound indexed_start=True
0x06633874: 011800b9  str w1, [x0, #0x18]
0x06633878: c0035fd6  ret

; RVA 0x662C1EC | public void .ctor() { }
; bytes=8 sha256=1e2f55593cc8c0d9c68652e2782074f00ad00a29c43b6ce5323121af0affe997 status=arm64_complete_bound indexed_start=True
0x0662C1EC: e1031faa  mov x1, xzr
0x0662C1F0: 03b9c217  b #0x56da5fc

