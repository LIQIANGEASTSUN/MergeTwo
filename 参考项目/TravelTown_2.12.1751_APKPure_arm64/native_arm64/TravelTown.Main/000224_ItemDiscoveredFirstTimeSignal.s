; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 224 MergeEngine.Signal.Items.ItemDiscoveredFirstTimeSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x5FF3828 | public void .ctor(IMergeItem item) { }
; bytes=48 sha256=a23447db1a73279ba174906bbc6729e7152d1d3afd0cbeba6e64c1258bf21172 status=arm64_complete_bound indexed_start=True
0x05FF3828: fe0f1ef8  str x30, [sp, #-0x20]!
0x05FF382C: f44f01a9  stp x20, x19, [sp, #0x10]
0x05FF3830: f30301aa  mov x19, x1
0x05FF3834: e1031faa  mov x1, xzr
0x05FF3838: f40300aa  mov x20, x0
0x05FF383C: 709bdb97  bl #0x56da5fc
0x05FF3840: 930e01f8  str x19, [x20, #0x10]!
0x05FF3844: e00314aa  mov x0, x20
0x05FF3848: e10313aa  mov x1, x19
0x05FF384C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x05FF3850: fe0742f8  ldr x30, [sp], #0x20
0x05FF3854: 5c344617  b #0x31809c4

