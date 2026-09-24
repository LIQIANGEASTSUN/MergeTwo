; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 10889 Framework.Core.Services.Backend.Signal.FetchBackendUpdatesSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x691DC30 | public void .ctor(bool profileChanged) { }
; bytes=40 sha256=5a81354e5d629755061793aeda33f4ac1cd7bf825ca614e5480a779c80df96d6 status=arm64_complete_bound indexed_start=True
0x0691DC30: fe0f1ef8  str x30, [sp, #-0x20]!
0x0691DC34: f44f01a9  stp x20, x19, [sp, #0x10]
0x0691DC38: 34000012  and w20, w1, #1
0x0691DC3C: e1031faa  mov x1, xzr
0x0691DC40: f30300aa  mov x19, x0
0x0691DC44: 6ef2b697  bl #0x56da5fc
0x0691DC48: 74420039  strb w20, [x19, #0x10]
0x0691DC4C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0691DC50: fe0742f8  ldr x30, [sp], #0x20
0x0691DC54: c0035fd6  ret

