; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25745 .InteractionSystem.<>c__DisplayClass4_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A6BBBC | public void .ctor() { }
; bytes=8 sha256=a32824fe56da76e6f96c7d3f2324553ed95c068fb74bacb902546fafad34b0cb status=arm64_complete_bound indexed_start=True
0x06A6BBBC: e1031faa  mov x1, xzr
0x06A6BBC0: 8fbab117  b #0x56da5fc

; RVA 0x6A6BCBC | internal bool <HandleInteractForConsumableItem>b__0(ValueTuple<Entity, BoardTilePositionComponent, IdComponent, InteractionComponent> a) { }
; bytes=20 sha256=645753a150435cc6af98a972270ae7fddb8ca7c025a335a6e22e8c9320702fe2 status=arm64_complete_bound indexed_start=True
0x06A6BCBC: 280840b9  ldr w8, [x1, #8]
0x06A6BCC0: 091840b9  ldr w9, [x0, #0x18]
0x06A6BCC4: 1f01096b  cmp w8, w9
0x06A6BCC8: e0179f1a  cset w0, eq
0x06A6BCCC: c0035fd6  ret

