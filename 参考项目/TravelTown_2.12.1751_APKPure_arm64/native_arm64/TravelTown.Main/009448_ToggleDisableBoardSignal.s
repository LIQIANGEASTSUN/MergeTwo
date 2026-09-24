; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 9448 Merger.Game.Signal.ToggleDisableBoardSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x676CD00 | public void .ctor(bool enabled) { }
; bytes=40 sha256=ff7ce6583041f7e3e4573bc57552ae4151df68c10202bda02473843112486aa0 status=arm64_complete_bound indexed_start=True
0x0676CD00: fe0f1ef8  str x30, [sp, #-0x20]!
0x0676CD04: f44f01a9  stp x20, x19, [sp, #0x10]
0x0676CD08: 34000012  and w20, w1, #1
0x0676CD0C: e1031faa  mov x1, xzr
0x0676CD10: f30300aa  mov x19, x0
0x0676CD14: 3ab6bd97  bl #0x56da5fc
0x0676CD18: 74420039  strb w20, [x19, #0x10]
0x0676CD1C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0676CD20: fe0742f8  ldr x30, [sp], #0x20
0x0676CD24: c0035fd6  ret

