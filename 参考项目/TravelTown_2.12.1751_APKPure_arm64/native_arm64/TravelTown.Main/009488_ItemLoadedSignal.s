; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 9488 Merger.Game.Signal.Combinations.ItemLoadedSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x676E358 | public void .ctor(IMergeItem comboProducer, TimeCycleComponentAnalytics timeCycleComponentAnalytics, int expendUsesLeft, string consumedItems, IEnumerable<int> energyCostOptions) { }
; bytes=136 sha256=137c1597f5a61504f27702a93a34b0a0d6341882a9c7d036922a0aa8529c3fa6 status=arm64_complete_bound indexed_start=True
0x0676E358: fe0f1cf8  str x30, [sp, #-0x40]!
0x0676E35C: f85f01a9  stp x24, x23, [sp, #0x10]
0x0676E360: f65702a9  stp x22, x21, [sp, #0x20]
0x0676E364: f44f03a9  stp x20, x19, [sp, #0x30]
0x0676E368: f70301aa  mov x23, x1
0x0676E36C: e1031faa  mov x1, xzr
0x0676E370: f30305aa  mov x19, x5
0x0676E374: f40304aa  mov x20, x4
0x0676E378: f503032a  mov w21, w3
0x0676E37C: f60302aa  mov x22, x2
0x0676E380: f80300aa  mov x24, x0
0x0676E384: 9eb0bd97  bl #0x56da5fc
0x0676E388: e00318aa  mov x0, x24
0x0676E38C: 170c01f8  str x23, [x0, #0x10]!
0x0676E390: e10317aa  mov x1, x23
0x0676E394: 8c492897  bl #0x31809c4
0x0676E398: c81240f9  ldr x8, [x22, #0x20]
0x0676E39C: c10240ad  ldp q1, q0, [x22]
0x0676E3A0: e00318aa  mov x0, x24
0x0676E3A4: 154300b9  str w21, [x24, #0x40]
0x0676E3A8: 081f00f9  str x8, [x24, #0x38]
0x0676E3AC: 0083823c  stur q0, [x24, #0x28]
0x0676E3B0: 0183813c  stur q1, [x24, #0x18]
0x0676E3B4: 148c04f8  str x20, [x0, #0x48]!
0x0676E3B8: e10314aa  mov x1, x20
0x0676E3BC: 82492897  bl #0x31809c4
0x0676E3C0: 130f05f8  str x19, [x24, #0x50]!
0x0676E3C4: e00318aa  mov x0, x24
0x0676E3C8: e10313aa  mov x1, x19
0x0676E3CC: f44f43a9  ldp x20, x19, [sp, #0x30]
0x0676E3D0: f65742a9  ldp x22, x21, [sp, #0x20]
0x0676E3D4: f85f41a9  ldp x24, x23, [sp, #0x10]
0x0676E3D8: fe0744f8  ldr x30, [sp], #0x40
0x0676E3DC: 7a492817  b #0x31809c4

