; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 945 MergeEngine.ECS.Systems.Items.BoardItemCooldownEndedSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6789854 | public void .ctor(IMergeItem item, string uuId, int numEmptyPositions, TimeCycleComponentAnalytics timeCycleComponentAnalytics, bool showTimeLeft) { }
; bytes=72 sha256=51c739f6cf664741e54537ff811ebbda73b1eaef0addec1a6b6015b62b4b16fb status=arm64_complete_bound indexed_start=True
0x06789854: ff0301d1  sub sp, sp, #0x40
0x06789858: fe1b00f9  str x30, [sp, #0x30]
0x0678985C: 8a1040f9  ldr x10, [x4, #0x20]
0x06789860: 810040ad  ldp q1, q0, [x4]
0x06789864: e803032a  mov w8, w3
0x06789868: e90302aa  mov x9, x2
0x0678986C: a5000012  and w5, w5, #1
0x06789870: e3030091  mov x3, sp
0x06789874: e203082a  mov w2, w8
0x06789878: e40309aa  mov x4, x9
0x0678987C: e6031faa  mov x6, xzr
0x06789880: e7031faa  mov x7, xzr
0x06789884: ea1300f9  str x10, [sp, #0x20]
0x06789888: e10300ad  stp q1, q0, [sp]
0x0678988C: d183ff97  bl #0x676a7d0
0x06789890: fe1b40f9  ldr x30, [sp, #0x30]
0x06789894: ff030191  add sp, sp, #0x40
0x06789898: c0035fd6  ret

