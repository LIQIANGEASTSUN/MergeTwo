; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 980 MergeEngine.ECS.Systems.Items.SetUndoOperationSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6799030 | public void .ctor(IUndoOperation operation) { }
; bytes=48 sha256=e596d9d7a286e102e31f6947c709d98534013e75dcc04077eacff6ef8e0c943e status=arm64_complete_bound indexed_start=True
0x06799030: fe0f1ef8  str x30, [sp, #-0x20]!
0x06799034: f44f01a9  stp x20, x19, [sp, #0x10]
0x06799038: f30301aa  mov x19, x1
0x0679903C: e1031faa  mov x1, xzr
0x06799040: f40300aa  mov x20, x0
0x06799044: 6e05bd97  bl #0x56da5fc
0x06799048: 930e01f8  str x19, [x20, #0x10]!
0x0679904C: e00314aa  mov x0, x20
0x06799050: e10313aa  mov x1, x19
0x06799054: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06799058: fe0742f8  ldr x30, [sp], #0x20
0x0679905C: 5a9e2717  b #0x31809c4

