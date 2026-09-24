; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25756 .ItemUnboxingSystem.<>c__DisplayClass12_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A70918 | public void .ctor() { }
; bytes=8 sha256=65e01178216d6954121c25d4c67a9ec60dd2cb70e773fb26da3336bbe61d8332 status=arm64_complete_bound indexed_start=True
0x06A70918: e1031faa  mov x1, xzr
0x06A7091C: 38a7b117  b #0x56da5fc

; RVA 0x6A70950 | internal bool <GetSourcesForAnalytics>b__0(ValueTuple<Entity, IdComponent, DeadComponent, BoardTilePositionComponent> found) { }
; bytes=20 sha256=8353d7f7e039926311b0d88dff4a4e6d27ad4ebb2caf3c60120b3edd3670c73f status=arm64_complete_bound indexed_start=True
0x06A70950: 283c40b9  ldr w8, [x1, #0x3c]
0x06A70954: 091040b9  ldr w9, [x0, #0x10]
0x06A70958: 1f01096b  cmp w8, w9
0x06A7095C: e0179f1a  cset w0, eq
0x06A70960: c0035fd6  ret

