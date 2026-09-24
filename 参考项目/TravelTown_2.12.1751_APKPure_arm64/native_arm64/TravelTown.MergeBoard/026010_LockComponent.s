; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 26010 Merger.MergeBoard.Components.LockComponent
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9C290 | public bool get_Locked() { }
; bytes=8 sha256=cb54949d467f73d9dcbdbcb28d5a644a4eec1b14f07f76f0b273836bd51115b8 status=arm64_complete_bound indexed_start=True
0x06A9C290: 00004039  ldrb w0, [x0]
0x06A9C294: c0035fd6  ret

; RVA 0x6A9C298 | public void set_Locked(bool value) { }
; bytes=12 sha256=d8d6a87b79c22068a5113851b854309321a6207b1869be17774095726f18ae6c status=arm64_complete_bound indexed_start=True
0x06A9C298: 28000012  and w8, w1, #1
0x06A9C29C: 08000039  strb w8, [x0]
0x06A9C2A0: c0035fd6  ret

