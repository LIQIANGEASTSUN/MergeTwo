; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25779 Merger.MergeBoard.Systems.SystemsZenjectExtension
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A76570 | public static SystemsZenjectExtension.SystemsBuilderWithContext WithContext(SystemsBuilder builder, DiContainer container) { }
; bytes=72 sha256=4005df1e0bfca4214845924f90d74de315472173d1aec8d1a77595ebaf040ff5 status=arm64_complete_bound indexed_start=True
0x06A76570: ffc300d1  sub sp, sp, #0x30
0x06A76574: fffb00a9  stp xzr, x30, [sp, #8]
0x06A76578: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A7657C: f30300aa  mov x19, x0
0x06A76580: e8030091  mov x8, sp
0x06A76584: e0030091  mov x0, sp
0x06A76588: 14210091  add x20, x8, #8
0x06A7658C: e10300f9  str x1, [sp]
0x06A76590: 0d291c97  bl #0x31809c4
0x06A76594: e00314aa  mov x0, x20
0x06A76598: e10313aa  mov x1, x19
0x06A7659C: f30700f9  str x19, [sp, #8]
0x06A765A0: 09291c97  bl #0x31809c4
0x06A765A4: e00740a9  ldp x0, x1, [sp]
0x06A765A8: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A765AC: fe0b40f9  ldr x30, [sp, #0x10]
0x06A765B0: ffc30091  add sp, sp, #0x30
0x06A765B4: c0035fd6  ret

