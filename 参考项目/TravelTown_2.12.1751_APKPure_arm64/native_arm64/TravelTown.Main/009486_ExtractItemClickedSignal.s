; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 9486 Merger.Game.Signal.Combinations.ExtractItemClickedSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x676E278 | public void .ctor(CombiningComponent dataCombiningComponent, string id) { }
; bytes=68 sha256=977ce55912728372e58a0769a37a6a9b7c1caf3d4a621e89db12fba4eec3c30f status=arm64_complete_bound indexed_start=True
0x0676E278: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0676E27C: f44f01a9  stp x20, x19, [sp, #0x10]
0x0676E280: f40301aa  mov x20, x1
0x0676E284: e1031faa  mov x1, xzr
0x0676E288: f30302aa  mov x19, x2
0x0676E28C: f50300aa  mov x21, x0
0x0676E290: dbb0bd97  bl #0x56da5fc
0x0676E294: e00315aa  mov x0, x21
0x0676E298: 140c01f8  str x20, [x0, #0x10]!
0x0676E29C: e10314aa  mov x1, x20
0x0676E2A0: c9492897  bl #0x31809c4
0x0676E2A4: b38e01f8  str x19, [x21, #0x18]!
0x0676E2A8: e10313aa  mov x1, x19
0x0676E2AC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0676E2B0: e00315aa  mov x0, x21
0x0676E2B4: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0676E2B8: c3492817  b #0x31809c4

