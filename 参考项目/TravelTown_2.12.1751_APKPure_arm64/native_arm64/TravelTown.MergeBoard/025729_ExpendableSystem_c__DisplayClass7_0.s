; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25729 .ExpendableSystem.<>c__DisplayClass7_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A664CC | public void .ctor() { }
; bytes=8 sha256=1d25d1e218f254be4453d3cac88eefc7d01ff92e009f567c68c5f44816d5fe97 status=arm64_complete_bound indexed_start=True
0x06A664CC: e1031faa  mov x1, xzr
0x06A664D0: 4bd0b117  b #0x56da5fc

; RVA 0x6A664DC | internal bool <HasSpawnedAnItemThisTick>b__0(ValueTuple<Entity, BornComponent> newEntityQuery) { }
; bytes=16 sha256=a4ceda4a76b6acc0e2c4a95c57e3168be79950d2a2bb79e4e0217fe34e43f125 status=arm64_complete_bound indexed_start=True
0x06A664DC: 080840f9  ldr x8, [x0, #0x10]
0x06A664E0: 5f0008eb  cmp x2, x8
0x06A664E4: e0179f1a  cset w0, eq
0x06A664E8: c0035fd6  ret

