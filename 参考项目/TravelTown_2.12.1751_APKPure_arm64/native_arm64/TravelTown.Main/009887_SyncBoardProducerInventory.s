; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 9887 Merger.Services.Backend.Sync.Data.Payloads.Board.SyncBoardProducerInventory
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x67CCB60 | public void .ctor() { }
; bytes=136 sha256=611acd66d62ec40083591ae181c11efabbcd427b36c555a5f99757b3d266f4fe status=arm64_complete_bound indexed_start=True
0x067CCB60: fe0f1df8  str x30, [sp, #-0x30]!
0x067CCB64: f65701a9  stp x22, x21, [sp, #0x10]
0x067CCB68: f44f02a9  stp x20, x19, [sp, #0x20]
0x067CCB6C: f5aa0090  adrp x21, #0x7d28000
0x067CCB70: 367a00d0  adrp x22, #0x7712000
0x067CCB74: 347a00d0  adrp x20, #0x7712000
0x067CCB78: a8de7e39  ldrb w8, [x21, #0xfb7]
0x067CCB7C: d6da42f9  ldr x22, [x22, #0x5b0]
0x067CCB80: 94de42f9  ldr x20, [x20, #0x5b8]
0x067CCB84: f30300aa  mov x19, x0
0x067CCB88: 28010037  tbnz w8, #0, #0x67ccbac
0x067CCB8C: 207a00d0  adrp x0, #0x7712000
0x067CCB90: 00dc42f9  ldr x0, [x0, #0x5b8]
0x067CCB94: a1cf2697  bl #0x3180a18
0x067CCB98: 207a00d0  adrp x0, #0x7712000
0x067CCB9C: 00d842f9  ldr x0, [x0, #0x5b0]
0x067CCBA0: 9ecf2697  bl #0x3180a18
0x067CCBA4: 28008052  movz w8, #0x1
0x067CCBA8: a8de3e39  strb w8, [x21, #0xfb7]
0x067CCBAC: c00240f9  ldr x0, [x22]
0x067CCBB0: 3cd02697  bl #0x3180ca0
0x067CCBB4: 810240f9  ldr x1, [x20]
0x067CCBB8: f40300aa  mov x20, x0
0x067CCBBC: 1fdc6197  bl #0x4043c38
0x067CCBC0: e00313aa  mov x0, x19
0x067CCBC4: 140c01f8  str x20, [x0, #0x10]!
0x067CCBC8: e10314aa  mov x1, x20
0x067CCBCC: 7ecf2697  bl #0x31809c4
0x067CCBD0: e00313aa  mov x0, x19
0x067CCBD4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x067CCBD8: f65741a9  ldp x22, x21, [sp, #0x10]
0x067CCBDC: e1031faa  mov x1, xzr
0x067CCBE0: fe0743f8  ldr x30, [sp], #0x30
0x067CCBE4: 8636bc17  b #0x56da5fc

