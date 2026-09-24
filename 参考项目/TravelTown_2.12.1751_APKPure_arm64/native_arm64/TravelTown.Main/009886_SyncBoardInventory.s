; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 9886 Merger.Services.Backend.Sync.Data.Payloads.Board.SyncBoardInventory
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x67CCAD4 | public void .ctor() { }
; bytes=140 sha256=deb0616e2184e21a6d0167b38116ab12d1b574ffb3f6465353c1d51de7ae1e2c status=arm64_complete_bound indexed_start=True
0x067CCAD4: fe0f1df8  str x30, [sp, #-0x30]!
0x067CCAD8: f65701a9  stp x22, x21, [sp, #0x10]
0x067CCADC: f44f02a9  stp x20, x19, [sp, #0x20]
0x067CCAE0: f6aa0090  adrp x22, #0x7d28000
0x067CCAE4: 357a00d0  adrp x21, #0x7712000
0x067CCAE8: 347a00d0  adrp x20, #0x7712000
0x067CCAEC: c8da7e39  ldrb w8, [x22, #0xfb6]
0x067CCAF0: b5da42f9  ldr x21, [x21, #0x5b0]
0x067CCAF4: 94de42f9  ldr x20, [x20, #0x5b8]
0x067CCAF8: f30300aa  mov x19, x0
0x067CCAFC: 28010037  tbnz w8, #0, #0x67ccb20
0x067CCB00: 207a00d0  adrp x0, #0x7712000
0x067CCB04: 00dc42f9  ldr x0, [x0, #0x5b8]
0x067CCB08: c4cf2697  bl #0x3180a18
0x067CCB0C: 207a00d0  adrp x0, #0x7712000
0x067CCB10: 00d842f9  ldr x0, [x0, #0x5b0]
0x067CCB14: c1cf2697  bl #0x3180a18
0x067CCB18: 28008052  movz w8, #0x1
0x067CCB1C: c8da3e39  strb w8, [x22, #0xfb6]
0x067CCB20: e00313aa  mov x0, x19
0x067CCB24: e1031faa  mov x1, xzr
0x067CCB28: b536bc97  bl #0x56da5fc
0x067CCB2C: 7f1200b9  str wzr, [x19, #0x10]
0x067CCB30: a00240f9  ldr x0, [x21]
0x067CCB34: 5bd02697  bl #0x3180ca0
0x067CCB38: 810240f9  ldr x1, [x20]
0x067CCB3C: f40300aa  mov x20, x0
0x067CCB40: 3edc6197  bl #0x4043c38
0x067CCB44: 748e01f8  str x20, [x19, #0x18]!
0x067CCB48: e00313aa  mov x0, x19
0x067CCB4C: e10314aa  mov x1, x20
0x067CCB50: f44f42a9  ldp x20, x19, [sp, #0x20]
0x067CCB54: f65741a9  ldp x22, x21, [sp, #0x10]
0x067CCB58: fe0743f8  ldr x30, [sp], #0x30
0x067CCB5C: 9acf2617  b #0x31809c4

