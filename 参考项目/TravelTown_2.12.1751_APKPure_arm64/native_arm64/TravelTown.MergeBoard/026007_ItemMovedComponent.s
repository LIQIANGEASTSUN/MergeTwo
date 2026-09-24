; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 26007 Merger.MergeBoard.Components.ItemMovedComponent
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9C064 | public int get_FromPosition() { }
; bytes=8 sha256=9bb31e50c9e4b1e6d3afbc308de8dce185c4ece3c405e5fc1e3b97b52d26c6a0 status=arm64_complete_bound indexed_start=True
0x06A9C064: 000040b9  ldr w0, [x0]
0x06A9C068: c0035fd6  ret

; RVA 0x6A9C06C | public void set_FromPosition(int value) { }
; bytes=8 sha256=41db1d28e3bf3479aa3a49646ee0e016ae0de9b295533fb5d61e0bd1a5751bde status=arm64_complete_bound indexed_start=True
0x06A9C06C: 010000b9  str w1, [x0]
0x06A9C070: c0035fd6  ret

; RVA 0x6A9C074 | public int get_ToPosition() { }
; bytes=8 sha256=c40709113e97cec9c72bfbb7a6f1892a5b54d7906ca60d6c400c2e268577b883 status=arm64_complete_bound indexed_start=True
0x06A9C074: 000440b9  ldr w0, [x0, #4]
0x06A9C078: c0035fd6  ret

; RVA 0x6A9C07C | public void set_ToPosition(int value) { }
; bytes=8 sha256=f54c46fefcd0a3e901200e617c5502b21e0b3e0b280a7fb3bd27a3f31621fc08 status=arm64_complete_bound indexed_start=True
0x06A9C07C: 010400b9  str w1, [x0, #4]
0x06A9C080: c0035fd6  ret

