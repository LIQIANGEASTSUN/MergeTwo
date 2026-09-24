; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 26005 Merger.MergeBoard.Components.ItemConsumedComponent
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9C044 | public int get_ConsumerPosition() { }
; bytes=8 sha256=9bb31e50c9e4b1e6d3afbc308de8dce185c4ece3c405e5fc1e3b97b52d26c6a0 status=arm64_complete_bound indexed_start=True
0x06A9C044: 000040b9  ldr w0, [x0]
0x06A9C048: c0035fd6  ret

; RVA 0x6A9C04C | public void set_ConsumerPosition(int value) { }
; bytes=8 sha256=41db1d28e3bf3479aa3a49646ee0e016ae0de9b295533fb5d61e0bd1a5751bde status=arm64_complete_bound indexed_start=True
0x06A9C04C: 010000b9  str w1, [x0]
0x06A9C050: c0035fd6  ret

; RVA 0x6A9C054 | public string get_ConsumerItemId() { }
; bytes=8 sha256=19647f57f48e23c8730ecfc85bdce80bf67ce4eae56e82f97661432fa2018025 status=arm64_complete_bound indexed_start=True
0x06A9C054: 000440f9  ldr x0, [x0, #8]
0x06A9C058: c0035fd6  ret

; RVA 0x6A9C05C | public void set_ConsumerItemId(string value) { }
; bytes=8 sha256=c5b25d8e5236a7f94d69cd5f7bc8a9430de9560a4b7634e3cac7ca3d3c88105c status=arm64_complete_bound indexed_start=True
0x06A9C05C: 018c00f8  str x1, [x0, #8]!
0x06A9C060: 59921b17  b #0x31809c4

