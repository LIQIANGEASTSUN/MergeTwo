; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25761 .MoveSystem.<>c__DisplayClass0_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A71E24 | public void .ctor() { }
; bytes=8 sha256=f13c762a56e4d6644acde14ce8165706c11c6f73507ba2c5254e330448fa3df8 status=arm64_complete_bound indexed_start=True
0x06A71E24: e1031faa  mov x1, xzr
0x06A71E28: f5a1b117  b #0x56da5fc

; RVA 0x6A71E34 | internal bool <Tick>b__0(ValueTuple<Entity, BoardTilePositionComponent> entity) { }
; bytes=36 sha256=f4c0c04c96e1ddfec44cec08625870a4710893d93415485eb05b70af880c11e5 status=arm64_complete_bound indexed_start=True
0x06A71E34: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A71E38: 080840f9  ldr x8, [x0, #0x10]
0x06A71E3C: c80000b4  cbz x8, #0x6a71e54
0x06A71E40: 081140b9  ldr w8, [x8, #0x10]
0x06A71E44: 1f01026b  cmp w8, w2
0x06A71E48: e0179f1a  cset w0, eq
0x06A71E4C: fe0741f8  ldr x30, [sp], #0x10
0x06A71E50: c0035fd6  ret
0x06A71E54: 963b1c97  bl #0x3180cac

