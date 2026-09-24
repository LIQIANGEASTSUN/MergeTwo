; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 9350 Merger.Game.Signal.BoardVisibilityChangedSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x676AC38 | public bool get_Visible() { }
; bytes=8 sha256=0e6de766d449fe554507239b6a7ad2c85106a33b67dea05075aa7cbb025dafb1 status=arm64_complete_bound indexed_start=True
0x0676AC38: 00404039  ldrb w0, [x0, #0x10]
0x0676AC3C: c0035fd6  ret

; RVA 0x676AC40 | public void .ctor(bool visible) { }
; bytes=40 sha256=8b8bc24922f3cf42413b115794022f8a800e897d7719bf951fd1d157a3119c0e status=arm64_complete_bound indexed_start=True
0x0676AC40: fe0f1ef8  str x30, [sp, #-0x20]!
0x0676AC44: f44f01a9  stp x20, x19, [sp, #0x10]
0x0676AC48: 34000012  and w20, w1, #1
0x0676AC4C: e1031faa  mov x1, xzr
0x0676AC50: f30300aa  mov x19, x0
0x0676AC54: 6abebd97  bl #0x56da5fc
0x0676AC58: 74420039  strb w20, [x19, #0x10]
0x0676AC5C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0676AC60: fe0742f8  ldr x30, [sp], #0x20
0x0676AC64: c0035fd6  ret

