; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 946 MergeEngine.ECS.Systems.Items.BoardItemCooldownStartedSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x678989C | public void .ctor(IMergeItem item, string uuId, int numEmptyPositions, TimeCycleComponentAnalytics timeCycleComponentAnalytics, bool showTimeLeft, ResourceMultiple cooldownPrice) { }
; bytes=68 sha256=6c099457bc58e73e5cdae07da0ce0dc5ad0f63d2cbd8c7996eb9d81074bbedae status=arm64_complete_bound indexed_start=True
0x0678989C: ff0301d1  sub sp, sp, #0x40
0x067898A0: fe1b00f9  str x30, [sp, #0x30]
0x067898A4: 8a1040f9  ldr x10, [x4, #0x20]
0x067898A8: 810040ad  ldp q1, q0, [x4]
0x067898AC: e803032a  mov w8, w3
0x067898B0: e90302aa  mov x9, x2
0x067898B4: a5000012  and w5, w5, #1
0x067898B8: e3030091  mov x3, sp
0x067898BC: e203082a  mov w2, w8
0x067898C0: e40309aa  mov x4, x9
0x067898C4: e7031faa  mov x7, xzr
0x067898C8: ea1300f9  str x10, [sp, #0x20]
0x067898CC: e10300ad  stp q1, q0, [sp]
0x067898D0: c083ff97  bl #0x676a7d0
0x067898D4: fe1b40f9  ldr x30, [sp, #0x30]
0x067898D8: ff030191  add sp, sp, #0x40
0x067898DC: c0035fd6  ret

