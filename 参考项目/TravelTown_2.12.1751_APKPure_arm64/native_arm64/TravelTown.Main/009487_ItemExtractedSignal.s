; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 9487 Merger.Game.Signal.Combinations.ItemExtractedSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x676E2BC | public void .ctor(IMergeItem comboProducer, TimeCycleComponentAnalytics timeCycleComponentAnalytics, int expendUsesLeft, string consumedItems, IEnumerable<int> energyCostOptions, string id) { }
; bytes=156 sha256=3606c148afec21bc305d3563f5f91bce09115b8b2e147340203d84124206b1b8 status=arm64_complete_bound indexed_start=True
0x0676E2BC: fe67bca9  stp x30, x25, [sp, #-0x40]!
0x0676E2C0: f85f01a9  stp x24, x23, [sp, #0x10]
0x0676E2C4: f65702a9  stp x22, x21, [sp, #0x20]
0x0676E2C8: f44f03a9  stp x20, x19, [sp, #0x30]
0x0676E2CC: f80301aa  mov x24, x1
0x0676E2D0: e1031faa  mov x1, xzr
0x0676E2D4: f30306aa  mov x19, x6
0x0676E2D8: f40305aa  mov x20, x5
0x0676E2DC: f50304aa  mov x21, x4
0x0676E2E0: f603032a  mov w22, w3
0x0676E2E4: f70302aa  mov x23, x2
0x0676E2E8: f90300aa  mov x25, x0
0x0676E2EC: c4b0bd97  bl #0x56da5fc
0x0676E2F0: e00319aa  mov x0, x25
0x0676E2F4: 180c01f8  str x24, [x0, #0x10]!
0x0676E2F8: e10318aa  mov x1, x24
0x0676E2FC: b2492897  bl #0x31809c4
0x0676E300: e81240f9  ldr x8, [x23, #0x20]
0x0676E304: e10240ad  ldp q1, q0, [x23]
0x0676E308: e00319aa  mov x0, x25
0x0676E30C: 364300b9  str w22, [x25, #0x40]
0x0676E310: 281f00f9  str x8, [x25, #0x38]
0x0676E314: 2083823c  stur q0, [x25, #0x28]
0x0676E318: 2183813c  stur q1, [x25, #0x18]
0x0676E31C: 158c04f8  str x21, [x0, #0x48]!
0x0676E320: e10315aa  mov x1, x21
0x0676E324: a8492897  bl #0x31809c4
0x0676E328: e00319aa  mov x0, x25
0x0676E32C: 140c05f8  str x20, [x0, #0x50]!
0x0676E330: e10314aa  mov x1, x20
0x0676E334: a4492897  bl #0x31809c4
0x0676E338: 338f05f8  str x19, [x25, #0x58]!
0x0676E33C: e10313aa  mov x1, x19
0x0676E340: f44f43a9  ldp x20, x19, [sp, #0x30]
0x0676E344: f65742a9  ldp x22, x21, [sp, #0x20]
0x0676E348: f85f41a9  ldp x24, x23, [sp, #0x10]
0x0676E34C: e00319aa  mov x0, x25
0x0676E350: fe67c4a8  ldp x30, x25, [sp], #0x40
0x0676E354: 9c492817  b #0x31809c4

