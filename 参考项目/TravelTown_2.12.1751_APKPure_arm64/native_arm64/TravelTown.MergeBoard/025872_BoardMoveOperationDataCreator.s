; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25872 Merger.MergeBoard.Logic.BoardOperations.BoardMoveOperationDataCreator
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A8DB70 | public override string get_OperationType() { }
; bytes=64 sha256=cf94b601022a06cd586b37bfc39861fce1259c3a43eb77c88132e8d29ff2a6c0 status=arm64_complete_bound indexed_start=True
0x06A8DB70: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A8DB74: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A8DB78: f39400b0  adrp x19, #0x7d2a000
0x06A8DB7C: 745f00b0  adrp x20, #0x767a000
0x06A8DB80: 681e5f39  ldrb w8, [x19, #0x7c7]
0x06A8DB84: 949a45f9  ldr x20, [x20, #0xb30]
0x06A8DB88: c8000037  tbnz w8, #0, #0x6a8dba0
0x06A8DB8C: 605f00b0  adrp x0, #0x767a000
0x06A8DB90: 009845f9  ldr x0, [x0, #0xb30]
0x06A8DB94: a1cb1b97  bl #0x3180a18
0x06A8DB98: 28008052  movz w8, #0x1
0x06A8DB9C: 681e1f39  strb w8, [x19, #0x7c7]
0x06A8DBA0: 800240f9  ldr x0, [x20]
0x06A8DBA4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A8DBA8: fe0742f8  ldr x30, [sp], #0x20
0x06A8DBAC: c0035fd6  ret

; RVA 0x6A8DBB0 | public override List<MergeBoardItemNotificationData> CreateOperationData(TickArgs tickArgs) { }
; bytes=1196 sha256=e4a0915919d891bce01f6c4904bba48ce130a30b00bf6597bf2f054bbbfefb51 status=arm64_complete_bound indexed_start=True
0x06A8DBB0: fe67bca9  stp x30, x25, [sp, #-0x40]!
0x06A8DBB4: f85f01a9  stp x24, x23, [sp, #0x10]
0x06A8DBB8: f65702a9  stp x22, x21, [sp, #0x20]
0x06A8DBBC: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A8DBC0: f59400b0  adrp x21, #0x7d2a000
0x06A8DBC4: a8225f39  ldrb w8, [x21, #0x7c8]
0x06A8DBC8: f40301aa  mov x20, x1
0x06A8DBCC: f30300aa  mov x19, x0
0x06A8DBD0: 28040037  tbnz w8, #0, #0x6a8dc54
0x06A8DBD4: 006500f0  adrp x0, #0x7730000
0x06A8DBD8: 005842f9  ldr x0, [x0, #0x4b0]
0x06A8DBDC: 8fcb1b97  bl #0x3180a18
0x06A8DBE0: 005e00b0  adrp x0, #0x764e000
0x06A8DBE4: 006444f9  ldr x0, [x0, #0x8c8]
0x06A8DBE8: 8ccb1b97  bl #0x3180a18
0x06A8DBEC: 006500d0  adrp x0, #0x772f000
0x06A8DBF0: 004446f9  ldr x0, [x0, #0xc88]
0x06A8DBF4: 89cb1b97  bl #0x3180a18
0x06A8DBF8: 006500d0  adrp x0, #0x772f000
0x06A8DBFC: 004846f9  ldr x0, [x0, #0xc90]
0x06A8DC00: 86cb1b97  bl #0x3180a18
0x06A8DC04: 005e00b0  adrp x0, #0x764e000
0x06A8DC08: 007044f9  ldr x0, [x0, #0x8e0]
0x06A8DC0C: 83cb1b97  bl #0x3180a18
0x06A8DC10: a0610090  adrp x0, #0x76c1000
0x06A8DC14: 00fc46f9  ldr x0, [x0, #0xdf8]
0x06A8DC18: 80cb1b97  bl #0x3180a18
0x06A8DC1C: a0610090  adrp x0, #0x76c1000
0x06A8DC20: 000047f9  ldr x0, [x0, #0xe00]
0x06A8DC24: 7dcb1b97  bl #0x3180a18
0x06A8DC28: 006500d0  adrp x0, #0x772f000
0x06A8DC2C: 004c46f9  ldr x0, [x0, #0xc98]
0x06A8DC30: 7acb1b97  bl #0x3180a18
0x06A8DC34: 006500d0  adrp x0, #0x772f000
0x06A8DC38: 000846f9  ldr x0, [x0, #0xc10]
0x06A8DC3C: 77cb1b97  bl #0x3180a18
0x06A8DC40: 006500d0  adrp x0, #0x772f000
0x06A8DC44: 000c46f9  ldr x0, [x0, #0xc18]
0x06A8DC48: 74cb1b97  bl #0x3180a18
0x06A8DC4C: 28008052  movz w8, #0x1
0x06A8DC50: a8221f39  strb w8, [x21, #0x7c8]
0x06A8DC54: b41900b4  cbz x20, #0x6a8df88
0x06A8DC58: 086500d0  adrp x8, #0x772f000
0x06A8DC5C: 080d46f9  ldr x8, [x8, #0xc18]
0x06A8DC60: e00314aa  mov x0, x20
0x06A8DC64: 010140f9  ldr x1, [x8]
0x06A8DC68: d5da4c97  bl #0x3dc47bc
0x06A8DC6C: e0000037  tbnz w0, #0, #0x6a8dc88
0x06A8DC70: 086500d0  adrp x8, #0x772f000
0x06A8DC74: 080946f9  ldr x8, [x8, #0xc10]
0x06A8DC78: e00314aa  mov x0, x20
0x06A8DC7C: 010140f9  ldr x1, [x8]
0x06A8DC80: cfda4c97  bl #0x3dc47bc
0x06A8DC84: 00020036  tbz w0, #0, #0x6a8dcc4
0x06A8DC88: a8610090  adrp x8, #0x76c1000
0x06A8DC8C: 080147f9  ldr x8, [x8, #0xe00]
0x06A8DC90: b3610090  adrp x19, #0x76c1000
0x06A8DC94: 000140f9  ldr x0, [x8]
0x06A8DC98: 73fe46f9  ldr x19, [x19, #0xdf8]
0x06A8DC9C: 01cc1b97  bl #0x3180ca0
0x06A8DCA0: 610240f9  ldr x1, [x19]
0x06A8DCA4: f40300aa  mov x20, x0
0x06A8DCA8: e4d75697  bl #0x4043c38
0x06A8DCAC: e00314aa  mov x0, x20
0x06A8DCB0: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A8DCB4: f65742a9  ldp x22, x21, [sp, #0x20]
0x06A8DCB8: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06A8DCBC: fe67c4a8  ldp x30, x25, [sp], #0x40
0x06A8DCC0: c0035fd6  ret
0x06A8DCC4: 086500d0  adrp x8, #0x772f000
0x06A8DCC8: 084d46f9  ldr x8, [x8, #0xc98]
0x06A8DCCC: e00314aa  mov x0, x20
0x06A8DCD0: 010140f9  ldr x1, [x8]
0x06A8DCD4: cbd94c97  bl #0x3dc4400
0x06A8DCD8: 801500b4  cbz x0, #0x6a8df88
0x06A8DCDC: 0a6500d0  adrp x10, #0x772f000
0x06A8DCE0: 080040f9  ldr x8, [x0]
0x06A8DCE4: 4a4546f9  ldr x10, [x10, #0xc88]
0x06A8DCE8: f40300aa  mov x20, x0
0x06A8DCEC: 095d4279  ldrh w9, [x8, #0x12e]
0x06A8DCF0: 410140f9  ldr x1, [x10]
0x06A8DCF4: 290100b4  cbz x9, #0x6a8dd18
0x06A8DCF8: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A8DCFC: 4a210091  add x10, x10, #8
0x06A8DD00: 4b815ff8  ldur x11, [x10, #-8]
0x06A8DD04: 7f0101eb  cmp x11, x1
0x06A8DD08: 00010054  b.eq #0x6a8dd28
0x06A8DD0C: 290500f1  subs x9, x9, #1
0x06A8DD10: 4a410091  add x10, x10, #0x10
0x06A8DD14: 61ffff54  b.ne #0x6a8dd00
0x06A8DD18: e00314aa  mov x0, x20
0x06A8DD1C: e2031f2a  mov w2, wzr
0x06A8DD20: 7c231b97  bl #0x3156b10
0x06A8DD24: 04000014  b #0x6a8dd34
0x06A8DD28: 490180b9  ldrsw x9, [x10]
0x06A8DD2C: 0811098b  add x8, x8, x9, lsl #4
0x06A8DD30: 00e10491  add x0, x8, #0x138
0x06A8DD34: 080440a9  ldp x8, x1, [x0]
0x06A8DD38: e00314aa  mov x0, x20
0x06A8DD3C: 00013fd6  blr x8
0x06A8DD40: f40300aa  mov x20, x0
0x06A8DD44: 401200b4  cbz x0, #0x6a8df8c
0x06A8DD48: 175e00b0  adrp x23, #0x764e000
0x06A8DD4C: 186500d0  adrp x24, #0x772f000
0x06A8DD50: 196500f0  adrp x25, #0x7730000
0x06A8DD54: f77244f9  ldr x23, [x23, #0x8e0]
0x06A8DD58: 184b46f9  ldr x24, [x24, #0xc90]
0x06A8DD5C: 395b42f9  ldr x25, [x25, #0x4b0]
0x06A8DD60: 880240f9  ldr x8, [x20]
0x06A8DD64: e10240f9  ldr x1, [x23]
0x06A8DD68: 095d4279  ldrh w9, [x8, #0x12e]
0x06A8DD6C: 290100b4  cbz x9, #0x6a8dd90
0x06A8DD70: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A8DD74: 4a210091  add x10, x10, #8
0x06A8DD78: 4b815ff8  ldur x11, [x10, #-8]
0x06A8DD7C: 7f0101eb  cmp x11, x1
0x06A8DD80: 00010054  b.eq #0x6a8dda0
0x06A8DD84: 290500f1  subs x9, x9, #1
0x06A8DD88: 4a410091  add x10, x10, #0x10
0x06A8DD8C: 61ffff54  b.ne #0x6a8dd78
0x06A8DD90: e00314aa  mov x0, x20
0x06A8DD94: e2031f2a  mov w2, wzr
0x06A8DD98: 5e231b97  bl #0x3156b10
0x06A8DD9C: 04000014  b #0x6a8ddac
0x06A8DDA0: 490180b9  ldrsw x9, [x10]
0x06A8DDA4: 0811098b  add x8, x8, x9, lsl #4
0x06A8DDA8: 00e10491  add x0, x8, #0x138
0x06A8DDAC: 080440a9  ldp x8, x1, [x0]
0x06A8DDB0: e00314aa  mov x0, x20
0x06A8DDB4: 00013fd6  blr x8
0x06A8DDB8: 80060036  tbz w0, #0, #0x6a8de88
0x06A8DDBC: 880240f9  ldr x8, [x20]
0x06A8DDC0: 010340f9  ldr x1, [x24]
0x06A8DDC4: 095d4279  ldrh w9, [x8, #0x12e]
0x06A8DDC8: 290100b4  cbz x9, #0x6a8ddec
0x06A8DDCC: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A8DDD0: 4a210091  add x10, x10, #8
0x06A8DDD4: 4b815ff8  ldur x11, [x10, #-8]
0x06A8DDD8: 7f0101eb  cmp x11, x1
0x06A8DDDC: 00010054  b.eq #0x6a8ddfc
0x06A8DDE0: 290500f1  subs x9, x9, #1
0x06A8DDE4: 4a410091  add x10, x10, #0x10
0x06A8DDE8: 61ffff54  b.ne #0x6a8ddd4
0x06A8DDEC: e00314aa  mov x0, x20
0x06A8DDF0: e2031f2a  mov w2, wzr
0x06A8DDF4: 47231b97  bl #0x3156b10
0x06A8DDF8: 04000014  b #0x6a8de08
0x06A8DDFC: 490180b9  ldrsw x9, [x10]
0x06A8DE00: 0811098b  add x8, x8, x9, lsl #4
0x06A8DE04: 00e10491  add x0, x8, #0x138
0x06A8DE08: 080440a9  ldp x8, x1, [x0]
0x06A8DE0C: e00314aa  mov x0, x20
0x06A8DE10: 00013fd6  blr x8
0x06A8DE14: 600b00b4  cbz x0, #0x6a8df80
0x06A8DE18: 750a40f9  ldr x21, [x19, #0x10]
0x06A8DE1C: 550b00b4  cbz x21, #0x6a8df84
0x06A8DE20: a80240f9  ldr x8, [x21]
0x06A8DE24: 160840f9  ldr x22, [x0, #0x10]
0x06A8DE28: 210340f9  ldr x1, [x25]
0x06A8DE2C: 095d4279  ldrh w9, [x8, #0x12e]
0x06A8DE30: 290100b4  cbz x9, #0x6a8de54
0x06A8DE34: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A8DE38: 4a210091  add x10, x10, #8
0x06A8DE3C: 4b815ff8  ldur x11, [x10, #-8]
0x06A8DE40: 7f0101eb  cmp x11, x1
0x06A8DE44: 00010054  b.eq #0x6a8de64
0x06A8DE48: 290500f1  subs x9, x9, #1
0x06A8DE4C: 4a410091  add x10, x10, #0x10
0x06A8DE50: 61ffff54  b.ne #0x6a8de3c
0x06A8DE54: e00315aa  mov x0, x21
0x06A8DE58: e2031f2a  mov w2, wzr
0x06A8DE5C: 2d231b97  bl #0x3156b10
0x06A8DE60: 04000014  b #0x6a8de70
0x06A8DE64: 490180b9  ldrsw x9, [x10]
0x06A8DE68: 0811098b  add x8, x8, x9, lsl #4
0x06A8DE6C: 00e10491  add x0, x8, #0x138
0x06A8DE70: 080c40a9  ldp x8, x3, [x0]
0x06A8DE74: e00315aa  mov x0, x21
0x06A8DE78: e10316aa  mov x1, x22
0x06A8DE7C: e2031faa  mov x2, xzr
0x06A8DE80: 00013fd6  blr x8
0x06A8DE84: b7ffff17  b #0x6a8dd60
0x06A8DE88: f5031faa  mov x21, xzr
0x06A8DE8C: d6008052  movz w22, #0x6
0x06A8DE90: 340300b4  cbz x20, #0x6a8def4
0x06A8DE94: 0a5e00b0  adrp x10, #0x764e000
0x06A8DE98: 880240f9  ldr x8, [x20]
0x06A8DE9C: 4a6544f9  ldr x10, [x10, #0x8c8]
0x06A8DEA0: 095d4279  ldrh w9, [x8, #0x12e]
0x06A8DEA4: 410140f9  ldr x1, [x10]
0x06A8DEA8: 290100b4  cbz x9, #0x6a8decc
0x06A8DEAC: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A8DEB0: 4a210091  add x10, x10, #8
0x06A8DEB4: 4b815ff8  ldur x11, [x10, #-8]
0x06A8DEB8: 7f0101eb  cmp x11, x1
0x06A8DEBC: 00010054  b.eq #0x6a8dedc
0x06A8DEC0: 290500f1  subs x9, x9, #1
0x06A8DEC4: 4a410091  add x10, x10, #0x10
0x06A8DEC8: 61ffff54  b.ne #0x6a8deb4
0x06A8DECC: e00314aa  mov x0, x20
0x06A8DED0: e2031f2a  mov w2, wzr
0x06A8DED4: 0f231b97  bl #0x3156b10
0x06A8DED8: 04000014  b #0x6a8dee8
0x06A8DEDC: 490180b9  ldrsw x9, [x10]
0x06A8DEE0: 0811098b  add x8, x8, x9, lsl #4
0x06A8DEE4: 00e10491  add x0, x8, #0x138
0x06A8DEE8: 080440a9  ldp x8, x1, [x0]
0x06A8DEEC: e00314aa  mov x0, x20
0x06A8DEF0: 00013fd6  blr x8
0x06A8DEF4: f50400b5  cbnz x21, #0x6a8df90
0x06A8DEF8: df1a0071  cmp w22, #6
0x06A8DEFC: 40000054  b.eq #0x6a8df04
0x06A8DF00: 76edff35  cbnz w22, #0x6a8dcac
0x06A8DF04: 730a40f9  ldr x19, [x19, #0x10]
0x06A8DF08: 130400b4  cbz x19, #0x6a8df88
0x06A8DF0C: 0a6500f0  adrp x10, #0x7730000
0x06A8DF10: 680240f9  ldr x8, [x19]
0x06A8DF14: 4a5942f9  ldr x10, [x10, #0x4b0]
0x06A8DF18: 095d4279  ldrh w9, [x8, #0x12e]
0x06A8DF1C: 410140f9  ldr x1, [x10]
0x06A8DF20: 290100b4  cbz x9, #0x6a8df44
0x06A8DF24: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A8DF28: 4a210091  add x10, x10, #8
0x06A8DF2C: 4b815ff8  ldur x11, [x10, #-8]
0x06A8DF30: 7f0101eb  cmp x11, x1
0x06A8DF34: 00010054  b.eq #0x6a8df54
0x06A8DF38: 290500f1  subs x9, x9, #1
0x06A8DF3C: 4a410091  add x10, x10, #0x10
0x06A8DF40: 61ffff54  b.ne #0x6a8df2c
0x06A8DF44: 82008052  movz w2, #0x4
0x06A8DF48: e00313aa  mov x0, x19
0x06A8DF4C: f1221b97  bl #0x3156b10
0x06A8DF50: 05000014  b #0x6a8df64
0x06A8DF54: 490140b9  ldr w9, [x10]
0x06A8DF58: 29110011  add w9, w9, #4
0x06A8DF5C: 08d1298b  add x8, x8, w9, sxtw #4
0x06A8DF60: 00e10491  add x0, x8, #0x138
0x06A8DF64: 020440a9  ldp x2, x1, [x0]
0x06A8DF68: e00313aa  mov x0, x19
0x06A8DF6C: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A8DF70: f65742a9  ldp x22, x21, [sp, #0x20]
0x06A8DF74: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06A8DF78: fe67c4a8  ldp x30, x25, [sp], #0x40
0x06A8DF7C: 40001fd6  br x2
0x06A8DF80: 4bcb1b97  bl #0x3180cac
0x06A8DF84: 4acb1b97  bl #0x3180cac
0x06A8DF88: 49cb1b97  bl #0x3180cac
0x06A8DF8C: 48cb1b97  bl #0x3180cac
0x06A8DF90: e00315aa  mov x0, x21
0x06A8DF94: 44cb1b97  bl #0x3180ca4
0x06A8DF98: 05000014  b #0x6a8dfac
0x06A8DF9C: 04000014  b #0x6a8dfac
0x06A8DFA0: 03000014  b #0x6a8dfac
0x06A8DFA4: 02000014  b #0x6a8dfac
0x06A8DFA8: 01000014  b #0x6a8dfac
0x06A8DFAC: f60300aa  mov x22, x0
0x06A8DFB0: 3f040071  cmp w1, #1
0x06A8DFB4: 01010054  b.ne #0x6a8dfd4
0x06A8DFB8: e00316aa  mov x0, x22
0x06A8DFBC: 55021d94  bl #0x71ce910
0x06A8DFC0: 150040f9  ldr x21, [x0]
0x06A8DFC4: 57021d94  bl #0x71ce920
0x06A8DFC8: f6031f2a  mov w22, wzr
0x06A8DFCC: 54f6ffb5  cbnz x20, #0x6a8de94
0x06A8DFD0: c9ffff17  b #0x6a8def4
0x06A8DFD4: f5031faa  mov x21, xzr
0x06A8DFD8: 02000014  b #0x6a8dfe0
0x06A8DFDC: f60300aa  mov x22, x0
0x06A8DFE0: 340300b4  cbz x20, #0x6a8e044
0x06A8DFE4: 0a5e00b0  adrp x10, #0x764e000
0x06A8DFE8: 880240f9  ldr x8, [x20]
0x06A8DFEC: 4a6544f9  ldr x10, [x10, #0x8c8]
0x06A8DFF0: 095d4279  ldrh w9, [x8, #0x12e]
0x06A8DFF4: 410140f9  ldr x1, [x10]
0x06A8DFF8: 290100b4  cbz x9, #0x6a8e01c
0x06A8DFFC: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A8E000: 4a210091  add x10, x10, #8
0x06A8E004: 4b815ff8  ldur x11, [x10, #-8]
0x06A8E008: 7f0101eb  cmp x11, x1
0x06A8E00C: 00010054  b.eq #0x6a8e02c
0x06A8E010: 290500f1  subs x9, x9, #1
0x06A8E014: 4a410091  add x10, x10, #0x10
0x06A8E018: 61ffff54  b.ne #0x6a8e004
0x06A8E01C: e00314aa  mov x0, x20
0x06A8E020: e2031f2a  mov w2, wzr
0x06A8E024: bb221b97  bl #0x3156b10
0x06A8E028: 04000014  b #0x6a8e038
0x06A8E02C: 490180b9  ldrsw x9, [x10]
0x06A8E030: 0811098b  add x8, x8, x9, lsl #4
0x06A8E034: 00e10491  add x0, x8, #0x138
0x06A8E038: 080440a9  ldp x8, x1, [x0]
0x06A8E03C: e00314aa  mov x0, x20
0x06A8E040: 00013fd6  blr x8
0x06A8E044: 750000b5  cbnz x21, #0x6a8e050
0x06A8E048: e00316aa  mov x0, x22
0x06A8E04C: 435e1f97  bl #0x3265958
0x06A8E050: e00315aa  mov x0, x21
0x06A8E054: 14cb1b97  bl #0x3180ca4
0x06A8E058: 2fed0d97  bl #0x2e09514

; RVA 0x6A8E05C | public void .ctor() { }
; bytes=8 sha256=d2aee236947c2f7d080bbbb7bf685b05f9324807c59e28e381d227293b6e3583 status=arm64_complete_bound indexed_start=True
0x06A8E05C: e1031faa  mov x1, xzr
0x06A8E060: 6731b117  b #0x56da5fc

