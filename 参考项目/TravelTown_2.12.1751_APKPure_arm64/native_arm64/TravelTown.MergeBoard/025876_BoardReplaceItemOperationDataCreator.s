; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25876 Merger.MergeBoard.Logic.BoardOperations.BoardReplaceItemOperationDataCreator
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A8E91C | public override string get_OperationType() { }
; bytes=64 sha256=1dd9443c0c7244bdc10c82526cf16b938a897040f358abfaf0632d8d920efb2b status=arm64_complete_bound indexed_start=True
0x06A8E91C: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A8E920: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A8E924: f3940090  adrp x19, #0x7d2a000
0x06A8E928: 146400f0  adrp x20, #0x7711000
0x06A8E92C: 68465f39  ldrb w8, [x19, #0x7d1]
0x06A8E930: 944e44f9  ldr x20, [x20, #0x898]
0x06A8E934: c8000037  tbnz w8, #0, #0x6a8e94c
0x06A8E938: 006400f0  adrp x0, #0x7711000
0x06A8E93C: 004c44f9  ldr x0, [x0, #0x898]
0x06A8E940: 36c81b97  bl #0x3180a18
0x06A8E944: 28008052  movz w8, #0x1
0x06A8E948: 68461f39  strb w8, [x19, #0x7d1]
0x06A8E94C: 800240f9  ldr x0, [x20]
0x06A8E950: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A8E954: fe0742f8  ldr x30, [sp], #0x20
0x06A8E958: c0035fd6  ret

; RVA 0x6A8E95C | public override List<MergeBoardItemNotificationData> CreateOperationData(TickArgs tickArgs) { }
; bytes=1132 sha256=ca733b8dbb4924d68a217d97c62077930744d0691483b5074822a9ccd0adfac9 status=arm64_complete_bound indexed_start=True
0x06A8E95C: fe6fbba9  stp x30, x27, [sp, #-0x50]!
0x06A8E960: fa6701a9  stp x26, x25, [sp, #0x10]
0x06A8E964: f85f02a9  stp x24, x23, [sp, #0x20]
0x06A8E968: f65703a9  stp x22, x21, [sp, #0x30]
0x06A8E96C: f44f04a9  stp x20, x19, [sp, #0x40]
0x06A8E970: f5940090  adrp x21, #0x7d2a000
0x06A8E974: a84a5f39  ldrb w8, [x21, #0x7d2]
0x06A8E978: f40301aa  mov x20, x1
0x06A8E97C: f30300aa  mov x19, x0
0x06A8E980: a8020037  tbnz w8, #0, #0x6a8e9d4
0x06A8E984: 006500d0  adrp x0, #0x7730000
0x06A8E988: 005842f9  ldr x0, [x0, #0x4b0]
0x06A8E98C: 23c81b97  bl #0x3180a18
0x06A8E990: 005e0090  adrp x0, #0x764e000
0x06A8E994: 006444f9  ldr x0, [x0, #0x8c8]
0x06A8E998: 20c81b97  bl #0x3180a18
0x06A8E99C: 006500b0  adrp x0, #0x772f000
0x06A8E9A0: 008046f9  ldr x0, [x0, #0xd00]
0x06A8E9A4: 1dc81b97  bl #0x3180a18
0x06A8E9A8: 006500b0  adrp x0, #0x772f000
0x06A8E9AC: 008446f9  ldr x0, [x0, #0xd08]
0x06A8E9B0: 1ac81b97  bl #0x3180a18
0x06A8E9B4: 005e0090  adrp x0, #0x764e000
0x06A8E9B8: 007044f9  ldr x0, [x0, #0x8e0]
0x06A8E9BC: 17c81b97  bl #0x3180a18
0x06A8E9C0: 006500b0  adrp x0, #0x772f000
0x06A8E9C4: 008846f9  ldr x0, [x0, #0xd10]
0x06A8E9C8: 14c81b97  bl #0x3180a18
0x06A8E9CC: 28008052  movz w8, #0x1
0x06A8E9D0: a84a1f39  strb w8, [x21, #0x7d2]
0x06A8E9D4: 741900b4  cbz x20, #0x6a8ed00
0x06A8E9D8: 086500b0  adrp x8, #0x772f000
0x06A8E9DC: 088946f9  ldr x8, [x8, #0xd10]
0x06A8E9E0: e00314aa  mov x0, x20
0x06A8E9E4: 010140f9  ldr x1, [x8]
0x06A8E9E8: 86d64c97  bl #0x3dc4400
0x06A8E9EC: a01800b4  cbz x0, #0x6a8ed00
0x06A8E9F0: 0a6500b0  adrp x10, #0x772f000
0x06A8E9F4: 080040f9  ldr x8, [x0]
0x06A8E9F8: 4a8146f9  ldr x10, [x10, #0xd00]
0x06A8E9FC: f40300aa  mov x20, x0
0x06A8EA00: 095d4279  ldrh w9, [x8, #0x12e]
0x06A8EA04: 410140f9  ldr x1, [x10]
0x06A8EA08: 290100b4  cbz x9, #0x6a8ea2c
0x06A8EA0C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A8EA10: 4a210091  add x10, x10, #8
0x06A8EA14: 4b815ff8  ldur x11, [x10, #-8]
0x06A8EA18: 7f0101eb  cmp x11, x1
0x06A8EA1C: 00010054  b.eq #0x6a8ea3c
0x06A8EA20: 290500f1  subs x9, x9, #1
0x06A8EA24: 4a410091  add x10, x10, #0x10
0x06A8EA28: 61ffff54  b.ne #0x6a8ea14
0x06A8EA2C: e00314aa  mov x0, x20
0x06A8EA30: e2031f2a  mov w2, wzr
0x06A8EA34: 37201b97  bl #0x3156b10
0x06A8EA38: 04000014  b #0x6a8ea48
0x06A8EA3C: 490180b9  ldrsw x9, [x10]
0x06A8EA40: 0811098b  add x8, x8, x9, lsl #4
0x06A8EA44: 00e10491  add x0, x8, #0x138
0x06A8EA48: 080440a9  ldp x8, x1, [x0]
0x06A8EA4C: 195e0090  adrp x25, #0x764e000
0x06A8EA50: 186500d0  adrp x24, #0x7730000
0x06A8EA54: 396744f9  ldr x25, [x25, #0x8c8]
0x06A8EA58: 185b42f9  ldr x24, [x24, #0x4b0]
0x06A8EA5C: e00314aa  mov x0, x20
0x06A8EA60: 00013fd6  blr x8
0x06A8EA64: f40300aa  mov x20, x0
0x06A8EA68: e01400b4  cbz x0, #0x6a8ed04
0x06A8EA6C: 1a5e0090  adrp x26, #0x764e000
0x06A8EA70: 1b6500b0  adrp x27, #0x772f000
0x06A8EA74: 5a7344f9  ldr x26, [x26, #0x8e0]
0x06A8EA78: 7b8746f9  ldr x27, [x27, #0xd08]
0x06A8EA7C: 880240f9  ldr x8, [x20]
0x06A8EA80: 410340f9  ldr x1, [x26]
0x06A8EA84: 095d4279  ldrh w9, [x8, #0x12e]
0x06A8EA88: 290100b4  cbz x9, #0x6a8eaac
0x06A8EA8C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A8EA90: 4a210091  add x10, x10, #8
0x06A8EA94: 4b815ff8  ldur x11, [x10, #-8]
0x06A8EA98: 7f0101eb  cmp x11, x1
0x06A8EA9C: 00010054  b.eq #0x6a8eabc
0x06A8EAA0: 290500f1  subs x9, x9, #1
0x06A8EAA4: 4a410091  add x10, x10, #0x10
0x06A8EAA8: 61ffff54  b.ne #0x6a8ea94
0x06A8EAAC: e00314aa  mov x0, x20
0x06A8EAB0: e2031f2a  mov w2, wzr
0x06A8EAB4: 17201b97  bl #0x3156b10
0x06A8EAB8: 04000014  b #0x6a8eac8
0x06A8EABC: 490180b9  ldrsw x9, [x10]
0x06A8EAC0: 0811098b  add x8, x8, x9, lsl #4
0x06A8EAC4: 00e10491  add x0, x8, #0x138
0x06A8EAC8: 080440a9  ldp x8, x1, [x0]
0x06A8EACC: e00314aa  mov x0, x20
0x06A8EAD0: 00013fd6  blr x8
0x06A8EAD4: 200a0036  tbz w0, #0, #0x6a8ec18
0x06A8EAD8: 880240f9  ldr x8, [x20]
0x06A8EADC: 610340f9  ldr x1, [x27]
0x06A8EAE0: 095d4279  ldrh w9, [x8, #0x12e]
0x06A8EAE4: 290100b4  cbz x9, #0x6a8eb08
0x06A8EAE8: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A8EAEC: 4a210091  add x10, x10, #8
0x06A8EAF0: 4b815ff8  ldur x11, [x10, #-8]
0x06A8EAF4: 7f0101eb  cmp x11, x1
0x06A8EAF8: 00010054  b.eq #0x6a8eb18
0x06A8EAFC: 290500f1  subs x9, x9, #1
0x06A8EB00: 4a410091  add x10, x10, #0x10
0x06A8EB04: 61ffff54  b.ne #0x6a8eaf0
0x06A8EB08: e00314aa  mov x0, x20
0x06A8EB0C: e2031f2a  mov w2, wzr
0x06A8EB10: 00201b97  bl #0x3156b10
0x06A8EB14: 04000014  b #0x6a8eb24
0x06A8EB18: 490180b9  ldrsw x9, [x10]
0x06A8EB1C: 0811098b  add x8, x8, x9, lsl #4
0x06A8EB20: 00e10491  add x0, x8, #0x138
0x06A8EB24: 080440a9  ldp x8, x1, [x0]
0x06A8EB28: e00314aa  mov x0, x20
0x06A8EB2C: 00013fd6  blr x8
0x06A8EB30: f50300aa  mov x21, x0
0x06A8EB34: 200e00b4  cbz x0, #0x6a8ecf8
0x06A8EB38: 760a40f9  ldr x22, [x19, #0x10]
0x06A8EB3C: 160e00b4  cbz x22, #0x6a8ecfc
0x06A8EB40: c80240f9  ldr x8, [x22]
0x06A8EB44: b71640f9  ldr x23, [x21, #0x28]
0x06A8EB48: 010340f9  ldr x1, [x24]
0x06A8EB4C: 095d4279  ldrh w9, [x8, #0x12e]
0x06A8EB50: 290100b4  cbz x9, #0x6a8eb74
0x06A8EB54: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A8EB58: 4a210091  add x10, x10, #8
0x06A8EB5C: 4b815ff8  ldur x11, [x10, #-8]
0x06A8EB60: 7f0101eb  cmp x11, x1
0x06A8EB64: 00010054  b.eq #0x6a8eb84
0x06A8EB68: 290500f1  subs x9, x9, #1
0x06A8EB6C: 4a410091  add x10, x10, #0x10
0x06A8EB70: 61ffff54  b.ne #0x6a8eb5c
0x06A8EB74: 22008052  movz w2, #0x1
0x06A8EB78: e00316aa  mov x0, x22
0x06A8EB7C: e51f1b97  bl #0x3156b10
0x06A8EB80: 05000014  b #0x6a8eb94
0x06A8EB84: 490140b9  ldr w9, [x10]
0x06A8EB88: 29050011  add w9, w9, #1
0x06A8EB8C: 08d1298b  add x8, x8, w9, sxtw #4
0x06A8EB90: 00e10491  add x0, x8, #0x138
0x06A8EB94: 080c40a9  ldp x8, x3, [x0]
0x06A8EB98: e00316aa  mov x0, x22
0x06A8EB9C: e10317aa  mov x1, x23
0x06A8EBA0: e2031faa  mov x2, xzr
0x06A8EBA4: 00013fd6  blr x8
0x06A8EBA8: f60300aa  mov x22, x0
0x06A8EBAC: 400a00b4  cbz x0, #0x6a8ecf4
0x06A8EBB0: c80240f9  ldr x8, [x22]
0x06A8EBB4: b51240f9  ldr x21, [x21, #0x20]
0x06A8EBB8: 010340f9  ldr x1, [x24]
0x06A8EBBC: 095d4279  ldrh w9, [x8, #0x12e]
0x06A8EBC0: 290100b4  cbz x9, #0x6a8ebe4
0x06A8EBC4: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A8EBC8: 4a210091  add x10, x10, #8
0x06A8EBCC: 4b815ff8  ldur x11, [x10, #-8]
0x06A8EBD0: 7f0101eb  cmp x11, x1
0x06A8EBD4: 00010054  b.eq #0x6a8ebf4
0x06A8EBD8: 290500f1  subs x9, x9, #1
0x06A8EBDC: 4a410091  add x10, x10, #0x10
0x06A8EBE0: 61ffff54  b.ne #0x6a8ebcc
0x06A8EBE4: e00316aa  mov x0, x22
0x06A8EBE8: e2031f2a  mov w2, wzr
0x06A8EBEC: c91f1b97  bl #0x3156b10
0x06A8EBF0: 04000014  b #0x6a8ec00
0x06A8EBF4: 490180b9  ldrsw x9, [x10]
0x06A8EBF8: 0811098b  add x8, x8, x9, lsl #4
0x06A8EBFC: 00e10491  add x0, x8, #0x138
0x06A8EC00: 080c40a9  ldp x8, x3, [x0]
0x06A8EC04: e00316aa  mov x0, x22
0x06A8EC08: e10315aa  mov x1, x21
0x06A8EC0C: e2031faa  mov x2, xzr
0x06A8EC10: 00013fd6  blr x8
0x06A8EC14: 9affff17  b #0x6a8ea7c
0x06A8EC18: f5031faa  mov x21, xzr
0x06A8EC1C: f40200b4  cbz x20, #0x6a8ec78
0x06A8EC20: 880240f9  ldr x8, [x20]
0x06A8EC24: 210340f9  ldr x1, [x25]
0x06A8EC28: 095d4279  ldrh w9, [x8, #0x12e]
0x06A8EC2C: 290100b4  cbz x9, #0x6a8ec50
0x06A8EC30: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A8EC34: 4a210091  add x10, x10, #8
0x06A8EC38: 4b815ff8  ldur x11, [x10, #-8]
0x06A8EC3C: 7f0101eb  cmp x11, x1
0x06A8EC40: 00010054  b.eq #0x6a8ec60
0x06A8EC44: 290500f1  subs x9, x9, #1
0x06A8EC48: 4a410091  add x10, x10, #0x10
0x06A8EC4C: 61ffff54  b.ne #0x6a8ec38
0x06A8EC50: e00314aa  mov x0, x20
0x06A8EC54: e2031f2a  mov w2, wzr
0x06A8EC58: ae1f1b97  bl #0x3156b10
0x06A8EC5C: 04000014  b #0x6a8ec6c
0x06A8EC60: 490180b9  ldrsw x9, [x10]
0x06A8EC64: 0811098b  add x8, x8, x9, lsl #4
0x06A8EC68: 00e10491  add x0, x8, #0x138
0x06A8EC6C: 080440a9  ldp x8, x1, [x0]
0x06A8EC70: e00314aa  mov x0, x20
0x06A8EC74: 00013fd6  blr x8
0x06A8EC78: 950400b5  cbnz x21, #0x6a8ed08
0x06A8EC7C: 730a40f9  ldr x19, [x19, #0x10]
0x06A8EC80: 130400b4  cbz x19, #0x6a8ed00
0x06A8EC84: 680240f9  ldr x8, [x19]
0x06A8EC88: 010340f9  ldr x1, [x24]
0x06A8EC8C: 095d4279  ldrh w9, [x8, #0x12e]
0x06A8EC90: 290100b4  cbz x9, #0x6a8ecb4
0x06A8EC94: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A8EC98: 4a210091  add x10, x10, #8
0x06A8EC9C: 4b815ff8  ldur x11, [x10, #-8]
0x06A8ECA0: 7f0101eb  cmp x11, x1
0x06A8ECA4: 00010054  b.eq #0x6a8ecc4
0x06A8ECA8: 290500f1  subs x9, x9, #1
0x06A8ECAC: 4a410091  add x10, x10, #0x10
0x06A8ECB0: 61ffff54  b.ne #0x6a8ec9c
0x06A8ECB4: 82008052  movz w2, #0x4
0x06A8ECB8: e00313aa  mov x0, x19
0x06A8ECBC: 951f1b97  bl #0x3156b10
0x06A8ECC0: 05000014  b #0x6a8ecd4
0x06A8ECC4: 490140b9  ldr w9, [x10]
0x06A8ECC8: 29110011  add w9, w9, #4
0x06A8ECCC: 08d1298b  add x8, x8, w9, sxtw #4
0x06A8ECD0: 00e10491  add x0, x8, #0x138
0x06A8ECD4: 020440a9  ldp x2, x1, [x0]
0x06A8ECD8: e00313aa  mov x0, x19
0x06A8ECDC: f44f44a9  ldp x20, x19, [sp, #0x40]
0x06A8ECE0: f65743a9  ldp x22, x21, [sp, #0x30]
0x06A8ECE4: f85f42a9  ldp x24, x23, [sp, #0x20]
0x06A8ECE8: fa6741a9  ldp x26, x25, [sp, #0x10]
0x06A8ECEC: fe6fc5a8  ldp x30, x27, [sp], #0x50
0x06A8ECF0: 40001fd6  br x2
0x06A8ECF4: eec71b97  bl #0x3180cac
0x06A8ECF8: edc71b97  bl #0x3180cac
0x06A8ECFC: ecc71b97  bl #0x3180cac
0x06A8ED00: ebc71b97  bl #0x3180cac
0x06A8ED04: eac71b97  bl #0x3180cac
0x06A8ED08: e00315aa  mov x0, x21
0x06A8ED0C: e6c71b97  bl #0x3180ca4
0x06A8ED10: 07000014  b #0x6a8ed2c
0x06A8ED14: 06000014  b #0x6a8ed2c
0x06A8ED18: 05000014  b #0x6a8ed2c
0x06A8ED1C: 04000014  b #0x6a8ed2c
0x06A8ED20: 03000014  b #0x6a8ed2c
0x06A8ED24: 02000014  b #0x6a8ed2c
0x06A8ED28: 01000014  b #0x6a8ed2c
0x06A8ED2C: 3f040071  cmp w1, #1
0x06A8ED30: a1000054  b.ne #0x6a8ed44
0x06A8ED34: f7fe1c94  bl #0x71ce910
0x06A8ED38: 150040f9  ldr x21, [x0]
0x06A8ED3C: f9fe1c94  bl #0x71ce920
0x06A8ED40: b7ffff17  b #0x6a8ec1c
0x06A8ED44: f30300aa  mov x19, x0
0x06A8ED48: f5031faa  mov x21, xzr
0x06A8ED4C: 02000014  b #0x6a8ed54
0x06A8ED50: f30300aa  mov x19, x0
0x06A8ED54: f40200b4  cbz x20, #0x6a8edb0
0x06A8ED58: 880240f9  ldr x8, [x20]
0x06A8ED5C: 210340f9  ldr x1, [x25]
0x06A8ED60: 095d4279  ldrh w9, [x8, #0x12e]
0x06A8ED64: 290100b4  cbz x9, #0x6a8ed88
0x06A8ED68: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A8ED6C: 4a210091  add x10, x10, #8
0x06A8ED70: 4b815ff8  ldur x11, [x10, #-8]
0x06A8ED74: 7f0101eb  cmp x11, x1
0x06A8ED78: 00010054  b.eq #0x6a8ed98
0x06A8ED7C: 290500f1  subs x9, x9, #1
0x06A8ED80: 4a410091  add x10, x10, #0x10
0x06A8ED84: 61ffff54  b.ne #0x6a8ed70
0x06A8ED88: e00314aa  mov x0, x20
0x06A8ED8C: e2031f2a  mov w2, wzr
0x06A8ED90: 601f1b97  bl #0x3156b10
0x06A8ED94: 04000014  b #0x6a8eda4
0x06A8ED98: 490180b9  ldrsw x9, [x10]
0x06A8ED9C: 0811098b  add x8, x8, x9, lsl #4
0x06A8EDA0: 00e10491  add x0, x8, #0x138
0x06A8EDA4: 080440a9  ldp x8, x1, [x0]
0x06A8EDA8: e00314aa  mov x0, x20
0x06A8EDAC: 00013fd6  blr x8
0x06A8EDB0: 750000b5  cbnz x21, #0x6a8edbc
0x06A8EDB4: e00313aa  mov x0, x19
0x06A8EDB8: e85a1f97  bl #0x3265958
0x06A8EDBC: e00315aa  mov x0, x21
0x06A8EDC0: b9c71b97  bl #0x3180ca4
0x06A8EDC4: d4e90d97  bl #0x2e09514

; RVA 0x6A8EDC8 | public void .ctor() { }
; bytes=8 sha256=2a922f43074104fbf190fcba68467edc6dd12c6b7b6ef4af367ee2ccf1c17c6c status=arm64_complete_bound indexed_start=True
0x06A8EDC8: e1031faa  mov x1, xzr
0x06A8EDCC: 0c2eb117  b #0x56da5fc

