; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25755 .ItemUnboxingSystem.<>c__DisplayClass10_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A706D0 | public void .ctor() { }
; bytes=8 sha256=732e46a449a8510bd889dbb9e9fe962b5ba9f0a3f311481c6131c04d0004aa4d status=arm64_complete_bound indexed_start=True
0x06A706D0: e1031faa  mov x1, xzr
0x06A706D4: caa7b117  b #0x56da5fc

; RVA 0x6A70928 | internal bool <TryGetBoxedEntity>b__0(ValueTuple<Entity, BoardTilePositionComponent, BoxComponent> found) { }
; bytes=40 sha256=47d470e4cb2b255f1a30b5f43f379165aa24416f756809974fb45d7fc63a1923 status=arm64_complete_bound indexed_start=True
0x06A70928: 280840b9  ldr w8, [x1, #8]
0x06A7092C: 091040b9  ldr w9, [x0, #0x10]
0x06A70930: 1f01096b  cmp w8, w9
0x06A70934: a1000054  b.ne #0x6a70948
0x06A70938: 28304039  ldrb w8, [x1, #0xc]
0x06A7093C: 1f010071  cmp w8, #0
0x06A70940: e0079f1a  cset w0, ne
0x06A70944: c0035fd6  ret
0x06A70948: e0031f2a  mov w0, wzr
0x06A7094C: c0035fd6  ret

