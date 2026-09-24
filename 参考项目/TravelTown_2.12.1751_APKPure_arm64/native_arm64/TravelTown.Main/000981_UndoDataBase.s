; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 981 MergeEngine.ECS.Systems.Items.UndoDataBase
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6798FEC | public void .ctor(Entity entity, IMergeItem mergeItem) { }
; bytes=68 sha256=327d6c1d4a7254481399af0022a035d4d28157f6debd83996d222d28b65790d7 status=arm64_complete_bound indexed_start=True
0x06798FEC: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06798FF0: f44f01a9  stp x20, x19, [sp, #0x10]
0x06798FF4: f40301aa  mov x20, x1
0x06798FF8: e1031faa  mov x1, xzr
0x06798FFC: f30302aa  mov x19, x2
0x06799000: f50300aa  mov x21, x0
0x06799004: 7e05bd97  bl #0x56da5fc
0x06799008: e00315aa  mov x0, x21
0x0679900C: 140c01f8  str x20, [x0, #0x10]!
0x06799010: e10314aa  mov x1, x20
0x06799014: 6c9e2797  bl #0x31809c4
0x06799018: b38e01f8  str x19, [x21, #0x18]!
0x0679901C: e10313aa  mov x1, x19
0x06799020: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06799024: e00315aa  mov x0, x21
0x06799028: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0679902C: 669e2717  b #0x31809c4

; RVA 0x6799060 | public void PrepareItemForUndo(BoardItemPosition position, Entity entity) { }
; bytes=224 sha256=6cdc010cf9cf384d2a0f20e09f82cbbc3897a58acfddd657aa61c77283a5dbcf status=arm64_complete_bound indexed_start=True
0x06799060: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06799064: f44f01a9  stp x20, x19, [sp, #0x10]
0x06799068: 75ac00f0  adrp x21, #0x7d28000
0x0679906C: a88a7639  ldrb w8, [x21, #0xda2]
0x06799070: f30302aa  mov x19, x2
0x06799074: f40301aa  mov x20, x1
0x06799078: e8010037  tbnz w8, #0, #0x67990b4
0x0679907C: 607a00d0  adrp x0, #0x76e7000
0x06799080: 00a443f9  ldr x0, [x0, #0x748]
0x06799084: 659e2797  bl #0x3180a18
0x06799088: 007700b0  adrp x0, #0x767a000
0x0679908C: 00a044f9  ldr x0, [x0, #0x940]
0x06799090: 629e2797  bl #0x3180a18
0x06799094: 207700b0  adrp x0, #0x767e000
0x06799098: 00d042f9  ldr x0, [x0, #0x5a0]
0x0679909C: 5f9e2797  bl #0x3180a18
0x067990A0: a07b00f0  adrp x0, #0x7710000
0x067990A4: 00dc43f9  ldr x0, [x0, #0x7b8]
0x067990A8: 5c9e2797  bl #0x3180a18
0x067990AC: 28008052  movz w8, #0x1
0x067990B0: a88a3639  strb w8, [x21, #0xda2]
0x067990B4: 530400b4  cbz x19, #0x679913c
0x067990B8: 087700b0  adrp x8, #0x767a000
0x067990BC: 08a144f9  ldr x8, [x8, #0x940]
0x067990C0: e00313aa  mov x0, x19
0x067990C4: 010140f9  ldr x1, [x8]
0x067990C8: 2f1f5297  bl #0x3c20d84
0x067990CC: 800300b4  cbz x0, #0x679913c
0x067990D0: 287700b0  adrp x8, #0x767e000
0x067990D4: 08d142f9  ldr x8, [x8, #0x5a0]
0x067990D8: 141800f9  str x20, [x0, #0x30]
0x067990DC: e00313aa  mov x0, x19
0x067990E0: 010140f9  ldr x1, [x8]
0x067990E4: 281f5297  bl #0x3c20d84
0x067990E8: a00200b4  cbz x0, #0x679913c
0x067990EC: 687a00d0  adrp x8, #0x76e7000
0x067990F0: 08a543f9  ldr x8, [x8, #0x748]
0x067990F4: 1f600139  strb wzr, [x0, #0x58]
0x067990F8: 1f200139  strb wzr, [x0, #0x48]
0x067990FC: 1f9c0139  strb wzr, [x0, #0x67]
0x06799100: 1f580079  strh wzr, [x0, #0x2c]
0x06799104: 010140f9  ldr x1, [x8]
0x06799108: e00313aa  mov x0, x19
0x0679910C: 1e1f5297  bl #0x3c20d84
0x06799110: 000100b4  cbz x0, #0x6799130
0x06799114: a87b00f0  adrp x8, #0x7710000
0x06799118: 08dd43f9  ldr x8, [x8, #0x7b8]
0x0679911C: e00313aa  mov x0, x19
0x06799120: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06799124: 010140f9  ldr x1, [x8]
0x06799128: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0679912C: 75215217  b #0x3c21700
0x06799130: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06799134: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06799138: c0035fd6  ret
0x0679913C: dc9e2797  bl #0x3180cac

