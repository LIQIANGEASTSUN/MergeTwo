; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25776 .SwapSystem.<>c__DisplayClass0_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A76524 | public void .ctor() { }
; bytes=8 sha256=9329114d2de3681ac4c86b9daf78f90c2f3c9b7c45a2febdd0a8f0024158525d status=arm64_complete_bound indexed_start=True
0x06A76524: e1031faa  mov x1, xzr
0x06A76528: 3590b117  b #0x56da5fc

; RVA 0x6A76550 | internal bool <Tick>b__0(ValueTuple<Entity, BoardTilePositionComponent> destinationEntity) { }
; bytes=32 sha256=27bc07e6d344aaf1d689c298b840062dfd4f4cee072e532e9ea668f0ae3fe188 status=arm64_complete_bound indexed_start=True
0x06A76550: 080840f9  ldr x8, [x0, #0x10]
0x06A76554: 091c40b9  ldr w9, [x0, #0x1c]
0x06A76558: 3f0008eb  cmp x1, x8
0x06A7655C: e8079f1a  cset w8, ne
0x06A76560: 5f00096b  cmp w2, w9
0x06A76564: e9179f1a  cset w9, eq
0x06A76568: 0001090a  and w0, w8, w9
0x06A7656C: c0035fd6  ret

