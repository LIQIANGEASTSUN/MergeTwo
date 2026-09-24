; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 8556 Merger.Game.Command.UpdateBoardResourcesStateOnConfigUpdatedCommand
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x668AB90 | public override void Execute(FetchBackendUpdatesSignal signal) { }
; bytes=108 sha256=4a4af7b285dc6009594dbae424b996f44508b34a7b8c5763e4db501cd70266a9 status=arm64_complete_bound indexed_start=True
0x0668AB90: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0668AB94: f44f01a9  stp x20, x19, [sp, #0x10]
0x0668AB98: f5b400d0  adrp x21, #0x7d28000
0x0668AB9C: a8664939  ldrb w8, [x21, #0x259]
0x0668ABA0: f30301aa  mov x19, x1
0x0668ABA4: f40300aa  mov x20, x0
0x0668ABA8: c8000037  tbnz w8, #0, #0x668abc0
0x0668ABAC: e08300d0  adrp x0, #0x7708000
0x0668ABB0: 00a847f9  ldr x0, [x0, #0xf50]
0x0668ABB4: 99d72b97  bl #0x3180a18
0x0668ABB8: 28008052  movz w8, #0x1
0x0668ABBC: a8660939  strb w8, [x21, #0x259]
0x0668ABC0: d30100b4  cbz x19, #0x668abf8
0x0668ABC4: 68424039  ldrb w8, [x19, #0x10]
0x0668ABC8: 28010034  cbz w8, #0x668abec
0x0668ABCC: e88300d0  adrp x8, #0x7708000
0x0668ABD0: 08a947f9  ldr x8, [x8, #0xf50]
0x0668ABD4: e00314aa  mov x0, x20
0x0668ABD8: e10313aa  mov x1, x19
0x0668ABDC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0668ABE0: 020140f9  ldr x2, [x8]
0x0668ABE4: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0668ABE8: bfde8017  b #0x46c26e4
0x0668ABEC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0668ABF0: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0668ABF4: c0035fd6  ret
0x0668ABF8: 2dd82b97  bl #0x3180cac

; RVA 0x668ABFC | public void .ctor() { }
; bytes=72 sha256=c887437558166258024928f341a87a3906d1341e77c72d5b9ddddb2daaa3ef33 status=arm64_complete_bound indexed_start=True
0x0668ABFC: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0668AC00: f44f01a9  stp x20, x19, [sp, #0x10]
0x0668AC04: f4b400d0  adrp x20, #0x7d28000
0x0668AC08: f58300d0  adrp x21, #0x7708000
0x0668AC0C: 886a4939  ldrb w8, [x20, #0x25a]
0x0668AC10: b5ae47f9  ldr x21, [x21, #0xf58]
0x0668AC14: f30300aa  mov x19, x0
0x0668AC18: c8000037  tbnz w8, #0, #0x668ac30
0x0668AC1C: e08300d0  adrp x0, #0x7708000
0x0668AC20: 00ac47f9  ldr x0, [x0, #0xf58]
0x0668AC24: 7dd72b97  bl #0x3180a18
0x0668AC28: 28008052  movz w8, #0x1
0x0668AC2C: 886a0939  strb w8, [x20, #0x25a]
0x0668AC30: a10240f9  ldr x1, [x21]
0x0668AC34: e00313aa  mov x0, x19
0x0668AC38: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0668AC3C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0668AC40: 2bdf8017  b #0x46c28ec

