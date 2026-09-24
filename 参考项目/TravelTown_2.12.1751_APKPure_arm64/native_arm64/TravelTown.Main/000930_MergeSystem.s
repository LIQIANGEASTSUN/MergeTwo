; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 930 MergeEngine.ECS.Systems.Board.MergeSystem
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6658184 | public void add_ItemMerged(Action<IMergeItem, BoardItemPosition, IMergeItem, IMergeItem> value) { }
; bytes=176 sha256=3bf063e93cac86a84b84f5020f320b938d286e33399caf54b5fd5f4f6114356f status=arm64_complete_bound indexed_start=True
0x06658184: fe0f1cf8  str x30, [sp, #-0x40]!
0x06658188: f85f01a9  stp x24, x23, [sp, #0x10]
0x0665818C: f65702a9  stp x22, x21, [sp, #0x20]
0x06658190: f44f03a9  stp x20, x19, [sp, #0x30]
0x06658194: 95b60090  adrp x21, #0x7d28000
0x06658198: a82e4439  ldrb w8, [x21, #0x10b]
0x0665819C: f30301aa  mov x19, x1
0x066581A0: f40300aa  mov x20, x0
0x066581A4: c8000037  tbnz w8, #0, #0x66581bc
0x066581A8: c08400b0  adrp x0, #0x76f1000
0x066581AC: 008c42f9  ldr x0, [x0, #0x518]
0x066581B0: 1aa22c97  bl #0x3180a18
0x066581B4: 28008052  movz w8, #0x1
0x066581B8: a82e0439  strb w8, [x21, #0x10b]
0x066581BC: d88400b0  adrp x24, #0x76f1000
0x066581C0: 950e48f8  ldr x21, [x20, #0x80]!
0x066581C4: 188f42f9  ldr x24, [x24, #0x518]
0x066581C8: e00315aa  mov x0, x21
0x066581CC: e10313aa  mov x1, x19
0x066581D0: e2031faa  mov x2, xzr
0x066581D4: 5316c297  bl #0x56ddb20
0x066581D8: 000100b4  cbz x0, #0x66581f8
0x066581DC: 170340f9  ldr x23, [x24]
0x066581E0: f60300aa  mov x22, x0
0x066581E4: e10317aa  mov x1, x23
0x066581E8: 6aa22c97  bl #0x3180b90
0x066581EC: e10300aa  mov x1, x0
0x066581F0: 600000b5  cbnz x0, #0x66581fc
0x066581F4: 0d000014  b #0x6658228
0x066581F8: e1031faa  mov x1, xzr
0x066581FC: e00314aa  mov x0, x20
0x06658200: e20315aa  mov x2, x21
0x06658204: cf132e97  bl #0x31dd140
0x06658208: bf0200eb  cmp x21, x0
0x0665820C: f50300aa  mov x21, x0
0x06658210: c1fdff54  b.ne #0x66581c8
0x06658214: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06658218: f65742a9  ldp x22, x21, [sp, #0x20]
0x0665821C: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06658220: fe0744f8  ldr x30, [sp], #0x40
0x06658224: c0035fd6  ret
0x06658228: e00316aa  mov x0, x22
0x0665822C: e10317aa  mov x1, x23
0x06658230: 86a32c97  bl #0x3181048

; RVA 0x6658BB8 | public void remove_ItemMerged(Action<IMergeItem, BoardItemPosition, IMergeItem, IMergeItem> value) { }
; bytes=176 sha256=f8f07c94aaf1f854939227b05e1a71d06ada436cdd990dcc06fb566991247cc4 status=arm64_complete_bound indexed_start=True
0x06658BB8: fe0f1cf8  str x30, [sp, #-0x40]!
0x06658BBC: f85f01a9  stp x24, x23, [sp, #0x10]
0x06658BC0: f65702a9  stp x22, x21, [sp, #0x20]
0x06658BC4: f44f03a9  stp x20, x19, [sp, #0x30]
0x06658BC8: 95b60090  adrp x21, #0x7d28000
0x06658BCC: a8324439  ldrb w8, [x21, #0x10c]
0x06658BD0: f30301aa  mov x19, x1
0x06658BD4: f40300aa  mov x20, x0
0x06658BD8: c8000037  tbnz w8, #0, #0x6658bf0
0x06658BDC: c08400b0  adrp x0, #0x76f1000
0x06658BE0: 008c42f9  ldr x0, [x0, #0x518]
0x06658BE4: 8d9f2c97  bl #0x3180a18
0x06658BE8: 28008052  movz w8, #0x1
0x06658BEC: a8320439  strb w8, [x21, #0x10c]
0x06658BF0: d88400b0  adrp x24, #0x76f1000
0x06658BF4: 950e48f8  ldr x21, [x20, #0x80]!
0x06658BF8: 188f42f9  ldr x24, [x24, #0x518]
0x06658BFC: e00315aa  mov x0, x21
0x06658C00: e10313aa  mov x1, x19
0x06658C04: e2031faa  mov x2, xzr
0x06658C08: 4414c297  bl #0x56ddd18
0x06658C0C: 000100b4  cbz x0, #0x6658c2c
0x06658C10: 170340f9  ldr x23, [x24]
0x06658C14: f60300aa  mov x22, x0
0x06658C18: e10317aa  mov x1, x23
0x06658C1C: dd9f2c97  bl #0x3180b90
0x06658C20: e10300aa  mov x1, x0
0x06658C24: 600000b5  cbnz x0, #0x6658c30
0x06658C28: 0d000014  b #0x6658c5c
0x06658C2C: e1031faa  mov x1, xzr
0x06658C30: e00314aa  mov x0, x20
0x06658C34: e20315aa  mov x2, x21
0x06658C38: 42112e97  bl #0x31dd140
0x06658C3C: bf0200eb  cmp x21, x0
0x06658C40: f50300aa  mov x21, x0
0x06658C44: c1fdff54  b.ne #0x6658bfc
0x06658C48: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06658C4C: f65742a9  ldp x22, x21, [sp, #0x20]
0x06658C50: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06658C54: fe0744f8  ldr x30, [sp], #0x40
0x06658C58: c0035fd6  ret
0x06658C5C: e00316aa  mov x0, x22
0x06658C60: e10317aa  mov x1, x23
0x06658C64: f9a02c97  bl #0x3181048

; RVA 0x666D8B8 | protected override void InitializeSystem() { }
; bytes=248 sha256=04f78ab34d9354fdf8a7031a78f0cffd8a3cd783a7f21916ea974e398a2ddb5a status=arm64_complete_bound indexed_start=True
0x0666D8B8: fe0f1cf8  str x30, [sp, #-0x40]!
0x0666D8BC: f85f01a9  stp x24, x23, [sp, #0x10]
0x0666D8C0: f65702a9  stp x22, x21, [sp, #0x20]
0x0666D8C4: f44f03a9  stp x20, x19, [sp, #0x30]
0x0666D8C8: d7b500f0  adrp x23, #0x7d28000
0x0666D8CC: d88400f0  adrp x24, #0x7708000
0x0666D8D0: d68400f0  adrp x22, #0x7708000
0x0666D8D4: d58400f0  adrp x21, #0x7708000
0x0666D8D8: d48400f0  adrp x20, #0x7708000
0x0666D8DC: e8364439  ldrb w8, [x23, #0x10d]
0x0666D8E0: 185b40f9  ldr x24, [x24, #0xb0]
0x0666D8E4: d65e40f9  ldr x22, [x22, #0xb8]
0x0666D8E8: b56240f9  ldr x21, [x21, #0xc0]
0x0666D8EC: 946640f9  ldr x20, [x20, #0xc8]
0x0666D8F0: f30300aa  mov x19, x0
0x0666D8F4: e8010037  tbnz w8, #0, #0x666d930
0x0666D8F8: c08400f0  adrp x0, #0x7708000
0x0666D8FC: 005c40f9  ldr x0, [x0, #0xb8]
0x0666D900: 464c2c97  bl #0x3180a18
0x0666D904: c08400f0  adrp x0, #0x7708000
0x0666D908: 006440f9  ldr x0, [x0, #0xc8]
0x0666D90C: 434c2c97  bl #0x3180a18
0x0666D910: c08400f0  adrp x0, #0x7708000
0x0666D914: 005840f9  ldr x0, [x0, #0xb0]
0x0666D918: 404c2c97  bl #0x3180a18
0x0666D91C: c08400f0  adrp x0, #0x7708000
0x0666D920: 006040f9  ldr x0, [x0, #0xc0]
0x0666D924: 3d4c2c97  bl #0x3180a18
0x0666D928: 28008052  movz w8, #0x1
0x0666D92C: e8360439  strb w8, [x23, #0x10d]
0x0666D930: 010340f9  ldr x1, [x24]
0x0666D934: e00313aa  mov x0, x19
0x0666D938: b8245d97  bl #0x3db6c18
0x0666D93C: e10300aa  mov x1, x0
0x0666D940: e00313aa  mov x0, x19
0x0666D944: 018c08f8  str x1, [x0, #0x88]!
0x0666D948: 1f4c2c97  bl #0x31809c4
0x0666D94C: c10240f9  ldr x1, [x22]
0x0666D950: e00313aa  mov x0, x19
0x0666D954: b1245d97  bl #0x3db6c18
0x0666D958: e10300aa  mov x1, x0
0x0666D95C: e00313aa  mov x0, x19
0x0666D960: 010c09f8  str x1, [x0, #0x90]!
0x0666D964: 184c2c97  bl #0x31809c4
0x0666D968: a10240f9  ldr x1, [x21]
0x0666D96C: e00313aa  mov x0, x19
0x0666D970: aa245d97  bl #0x3db6c18
0x0666D974: e10300aa  mov x1, x0
0x0666D978: e00313aa  mov x0, x19
0x0666D97C: 018c09f8  str x1, [x0, #0x98]!
0x0666D980: 114c2c97  bl #0x31809c4
0x0666D984: 810240f9  ldr x1, [x20]
0x0666D988: e00313aa  mov x0, x19
0x0666D98C: a3245d97  bl #0x3db6c18
0x0666D990: 600e0af8  str x0, [x19, #0xa0]!
0x0666D994: e10300aa  mov x1, x0
0x0666D998: e00313aa  mov x0, x19
0x0666D99C: f44f43a9  ldp x20, x19, [sp, #0x30]
0x0666D9A0: f65742a9  ldp x22, x21, [sp, #0x20]
0x0666D9A4: f85f41a9  ldp x24, x23, [sp, #0x10]
0x0666D9A8: fe0744f8  ldr x30, [sp], #0x40
0x0666D9AC: 064c2c17  b #0x31809c4

; RVA 0x666D9B0 | public bool CanCombineItems(PositionComponent firstItem, PositionComponent secondItem) { }
; bytes=132 sha256=2983347be0e350590f523c238c6770990ee914281a04020d88d5b85e727ccc09 status=arm64_complete_bound indexed_start=True
0x0666D9B0: fe0f1df8  str x30, [sp, #-0x30]!
0x0666D9B4: f65701a9  stp x22, x21, [sp, #0x10]
0x0666D9B8: f44f02a9  stp x20, x19, [sp, #0x20]
0x0666D9BC: d6b500f0  adrp x22, #0x7d28000
0x0666D9C0: c83a4439  ldrb w8, [x22, #0x10e]
0x0666D9C4: f40302aa  mov x20, x2
0x0666D9C8: f50301aa  mov x21, x1
0x0666D9CC: f30300aa  mov x19, x0
0x0666D9D0: c8000037  tbnz w8, #0, #0x666d9e8
0x0666D9D4: c08300b0  adrp x0, #0x76e6000
0x0666D9D8: 004444f9  ldr x0, [x0, #0x888]
0x0666D9DC: 0f4c2c97  bl #0x3180a18
0x0666D9E0: 28008052  movz w8, #0x1
0x0666D9E4: c83a0439  strb w8, [x22, #0x10e]
0x0666D9E8: 550200b4  cbz x21, #0x666da30
0x0666D9EC: d68300b0  adrp x22, #0x76e6000
0x0666D9F0: d64644f9  ldr x22, [x22, #0x888]
0x0666D9F4: e00315aa  mov x0, x21
0x0666D9F8: c10240f9  ldr x1, [x22]
0x0666D9FC: 88ff5597  bl #0x3bed81c
0x0666DA00: 940100b4  cbz x20, #0x666da30
0x0666DA04: c10240f9  ldr x1, [x22]
0x0666DA08: f50300aa  mov x21, x0
0x0666DA0C: e00314aa  mov x0, x20
0x0666DA10: 83ff5597  bl #0x3bed81c
0x0666DA14: e20300aa  mov x2, x0
0x0666DA18: e00313aa  mov x0, x19
0x0666DA1C: e10315aa  mov x1, x21
0x0666DA20: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0666DA24: f65741a9  ldp x22, x21, [sp, #0x10]
0x0666DA28: fe0743f8  ldr x30, [sp], #0x30
0x0666DA2C: 02000014  b #0x666da34
0x0666DA30: 9f4c2c97  bl #0x3180cac

; RVA 0x666DAE0 | public bool TryCombineItems(PositionComponent firstItem, PositionComponent secondItem, IItemsCombiner.OnItemsCombined callback) { }
; bytes=268 sha256=e980b59ff93eb6777150f8bbca2427500d825298a30e198ca2a6254553174e1b status=arm64_complete_bound indexed_start=True
0x0666DAE0: fe0f1cf8  str x30, [sp, #-0x40]!
0x0666DAE4: f85f01a9  stp x24, x23, [sp, #0x10]
0x0666DAE8: f65702a9  stp x22, x21, [sp, #0x20]
0x0666DAEC: f44f03a9  stp x20, x19, [sp, #0x30]
0x0666DAF0: d7b500f0  adrp x23, #0x7d28000
0x0666DAF4: e83e4439  ldrb w8, [x23, #0x10f]
0x0666DAF8: f60303aa  mov x22, x3
0x0666DAFC: f30302aa  mov x19, x2
0x0666DB00: f40301aa  mov x20, x1
0x0666DB04: f50300aa  mov x21, x0
0x0666DB08: c8000037  tbnz w8, #0, #0x666db20
0x0666DB0C: c08300b0  adrp x0, #0x76e6000
0x0666DB10: 004444f9  ldr x0, [x0, #0x888]
0x0666DB14: c14b2c97  bl #0x3180a18
0x0666DB18: 28008052  movz w8, #0x1
0x0666DB1C: e83e0439  strb w8, [x23, #0x10f]
0x0666DB20: 540600b4  cbz x20, #0x666dbe8
0x0666DB24: d88300b0  adrp x24, #0x76e6000
0x0666DB28: 184744f9  ldr x24, [x24, #0x888]
0x0666DB2C: e00314aa  mov x0, x20
0x0666DB30: 010340f9  ldr x1, [x24]
0x0666DB34: 3aff5597  bl #0x3bed81c
0x0666DB38: 930500b4  cbz x19, #0x666dbe8
0x0666DB3C: 010340f9  ldr x1, [x24]
0x0666DB40: f70300aa  mov x23, x0
0x0666DB44: e00313aa  mov x0, x19
0x0666DB48: 35ff5597  bl #0x3bed81c
0x0666DB4C: e20300aa  mov x2, x0
0x0666DB50: e00315aa  mov x0, x21
0x0666DB54: e10317aa  mov x1, x23
0x0666DB58: b7ffff97  bl #0x666da34
0x0666DB5C: 80020036  tbz w0, #0, #0x666dbac
0x0666DB60: e00315aa  mov x0, x21
0x0666DB64: e10314aa  mov x1, x20
0x0666DB68: e20313aa  mov x2, x19
0x0666DB6C: 20000094  bl #0x666dbec
0x0666DB70: a0020036  tbz w0, #0, #0x666dbc4
0x0666DB74: 160100b4  cbz x22, #0x666db94
0x0666DB78: c80e40f9  ldr x8, [x22, #0x18]
0x0666DB7C: c02240f9  ldr x0, [x22, #0x40]
0x0666DB80: c41640f9  ldr x4, [x22, #0x28]
0x0666DB84: 22008052  movz w2, #0x1
0x0666DB88: 23008052  movz w3, #0x1
0x0666DB8C: e1031f2a  mov w1, wzr
0x0666DB90: 00013fd6  blr x8
0x0666DB94: e00315aa  mov x0, x21
0x0666DB98: e10314aa  mov x1, x20
0x0666DB9C: e20313aa  mov x2, x19
0x0666DBA0: 8c000094  bl #0x666ddd0
0x0666DBA4: 20008052  movz w0, #0x1
0x0666DBA8: 02000014  b #0x666dbb0
0x0666DBAC: e0031f2a  mov w0, wzr
0x0666DBB0: f44f43a9  ldp x20, x19, [sp, #0x30]
0x0666DBB4: f65742a9  ldp x22, x21, [sp, #0x20]
0x0666DBB8: f85f41a9  ldp x24, x23, [sp, #0x10]
0x0666DBBC: fe0744f8  ldr x30, [sp], #0x40
0x0666DBC0: c0035fd6  ret
0x0666DBC4: e00315aa  mov x0, x21
0x0666DBC8: e10314aa  mov x1, x20
0x0666DBCC: e20313aa  mov x2, x19
0x0666DBD0: e30316aa  mov x3, x22
0x0666DBD4: f44f43a9  ldp x20, x19, [sp, #0x30]
0x0666DBD8: f65742a9  ldp x22, x21, [sp, #0x20]
0x0666DBDC: f85f41a9  ldp x24, x23, [sp, #0x10]
0x0666DBE0: fe0744f8  ldr x30, [sp], #0x40
0x0666DBE4: 0f010014  b #0x666e020
0x0666DBE8: 314c2c97  bl #0x3180cac

; RVA 0x666DBEC | private bool ShouldVerifyMerge(PositionComponent firstItem, PositionComponent secondItem) { }
; bytes=484 sha256=61c0ba2016561c172aa54b3731b288d17e902384e922ad499406551ad8c50241 status=arm64_complete_bound indexed_start=True
0x0666DBEC: fe0f1cf8  str x30, [sp, #-0x40]!
0x0666DBF0: f85f01a9  stp x24, x23, [sp, #0x10]
0x0666DBF4: f65702a9  stp x22, x21, [sp, #0x20]
0x0666DBF8: f44f03a9  stp x20, x19, [sp, #0x30]
0x0666DBFC: d6b500f0  adrp x22, #0x7d28000
0x0666DC00: c8424439  ldrb w8, [x22, #0x110]
0x0666DC04: f30302aa  mov x19, x2
0x0666DC08: f50301aa  mov x21, x1
0x0666DC0C: f40300aa  mov x20, x0
0x0666DC10: 28010037  tbnz w8, #0, #0x666dc34
0x0666DC14: 608000b0  adrp x0, #0x767a000
0x0666DC18: 004c42f9  ldr x0, [x0, #0x498]
0x0666DC1C: 7f4b2c97  bl #0x3180a18
0x0666DC20: 608000b0  adrp x0, #0x767a000
0x0666DC24: 00a843f9  ldr x0, [x0, #0x750]
0x0666DC28: 7c4b2c97  bl #0x3180a18
0x0666DC2C: 28008052  movz w8, #0x1
0x0666DC30: c8420439  strb w8, [x22, #0x110]
0x0666DC34: 962e40f9  ldr x22, [x20, #0x58]
0x0666DC38: b60c00b4  cbz x22, #0x666ddcc
0x0666DC3C: 6a8000b0  adrp x10, #0x767a000
0x0666DC40: c80240f9  ldr x8, [x22]
0x0666DC44: 4aa943f9  ldr x10, [x10, #0x750]
0x0666DC48: 095d4279  ldrh w9, [x8, #0x12e]
0x0666DC4C: 410140f9  ldr x1, [x10]
0x0666DC50: 290100b4  cbz x9, #0x666dc74
0x0666DC54: 0a5940f9  ldr x10, [x8, #0xb0]
0x0666DC58: 4a210091  add x10, x10, #8
0x0666DC5C: 4b815ff8  ldur x11, [x10, #-8]
0x0666DC60: 7f0101eb  cmp x11, x1
0x0666DC64: 00010054  b.eq #0x666dc84
0x0666DC68: 290500f1  subs x9, x9, #1
0x0666DC6C: 4a410091  add x10, x10, #0x10
0x0666DC70: 61ffff54  b.ne #0x666dc5c
0x0666DC74: 42048052  movz w2, #0x22
0x0666DC78: e00316aa  mov x0, x22
0x0666DC7C: a5a32b97  bl #0x3156b10
0x0666DC80: 05000014  b #0x666dc94
0x0666DC84: 490140b9  ldr w9, [x10]
0x0666DC88: 29890011  add w9, w9, #0x22
0x0666DC8C: 08d1298b  add x8, x8, w9, sxtw #4
0x0666DC90: 00e10491  add x0, x8, #0x138
0x0666DC94: 080440a9  ldp x8, x1, [x0]
0x0666DC98: e00316aa  mov x0, x22
0x0666DC9C: 00013fd6  blr x8
0x0666DCA0: f603002a  mov w22, w0
0x0666DCA4: a0070036  tbz w0, #0, #0x666dd98
0x0666DCA8: 972240f9  ldr x23, [x20, #0x40]
0x0666DCAC: 170900b4  cbz x23, #0x666ddcc
0x0666DCB0: 788000b0  adrp x24, #0x767a000
0x0666DCB4: e80240f9  ldr x8, [x23]
0x0666DCB8: 184f42f9  ldr x24, [x24, #0x498]
0x0666DCBC: 095d4279  ldrh w9, [x8, #0x12e]
0x0666DCC0: 010340f9  ldr x1, [x24]
0x0666DCC4: 290100b4  cbz x9, #0x666dce8
0x0666DCC8: 0a5940f9  ldr x10, [x8, #0xb0]
0x0666DCCC: 4a210091  add x10, x10, #8
0x0666DCD0: 4b815ff8  ldur x11, [x10, #-8]
0x0666DCD4: 7f0101eb  cmp x11, x1
0x0666DCD8: 00010054  b.eq #0x666dcf8
0x0666DCDC: 290500f1  subs x9, x9, #1
0x0666DCE0: 4a410091  add x10, x10, #0x10
0x0666DCE4: 61ffff54  b.ne #0x666dcd0
0x0666DCE8: 82028052  movz w2, #0x14
0x0666DCEC: e00317aa  mov x0, x23
0x0666DCF0: 88a32b97  bl #0x3156b10
0x0666DCF4: 05000014  b #0x666dd08
0x0666DCF8: 490140b9  ldr w9, [x10]
0x0666DCFC: 29510011  add w9, w9, #0x14
0x0666DD00: 08d1298b  add x8, x8, w9, sxtw #4
0x0666DD04: 00e10491  add x0, x8, #0x138
0x0666DD08: 080840a9  ldp x8, x2, [x0]
0x0666DD0C: e00317aa  mov x0, x23
0x0666DD10: e10315aa  mov x1, x21
0x0666DD14: 00013fd6  blr x8
0x0666DD18: 952240f9  ldr x21, [x20, #0x40]
0x0666DD1C: 950500b4  cbz x21, #0x666ddcc
0x0666DD20: a80240f9  ldr x8, [x21]
0x0666DD24: 010340f9  ldr x1, [x24]
0x0666DD28: f40300aa  mov x20, x0
0x0666DD2C: 095d4279  ldrh w9, [x8, #0x12e]
0x0666DD30: 290100b4  cbz x9, #0x666dd54
0x0666DD34: 0a5940f9  ldr x10, [x8, #0xb0]
0x0666DD38: 4a210091  add x10, x10, #8
0x0666DD3C: 4b815ff8  ldur x11, [x10, #-8]
0x0666DD40: 7f0101eb  cmp x11, x1
0x0666DD44: 00010054  b.eq #0x666dd64
0x0666DD48: 290500f1  subs x9, x9, #1
0x0666DD4C: 4a410091  add x10, x10, #0x10
0x0666DD50: 61ffff54  b.ne #0x666dd3c
0x0666DD54: 82028052  movz w2, #0x14
0x0666DD58: e00315aa  mov x0, x21
0x0666DD5C: 6da32b97  bl #0x3156b10
0x0666DD60: 05000014  b #0x666dd74
0x0666DD64: 490140b9  ldr w9, [x10]
0x0666DD68: 29510011  add w9, w9, #0x14
0x0666DD6C: 08d1298b  add x8, x8, w9, sxtw #4
0x0666DD70: 00e10491  add x0, x8, #0x138
0x0666DD74: 080840a9  ldp x8, x2, [x0]
0x0666DD78: e00315aa  mov x0, x21
0x0666DD7C: e10313aa  mov x1, x19
0x0666DD80: 00013fd6  blr x8
0x0666DD84: f30300aa  mov x19, x0
0x0666DD88: e00314aa  mov x0, x20
0x0666DD8C: e1031faa  mov x1, xzr
0x0666DD90: e0be0e94  bl #0x6a1d910
0x0666DD94: e0000036  tbz w0, #0, #0x666ddb0
0x0666DD98: c0020012  and w0, w22, #1
0x0666DD9C: f44f43a9  ldp x20, x19, [sp, #0x30]
0x0666DDA0: f65742a9  ldp x22, x21, [sp, #0x20]
0x0666DDA4: f85f41a9  ldp x24, x23, [sp, #0x10]
0x0666DDA8: fe0744f8  ldr x30, [sp], #0x40
0x0666DDAC: c0035fd6  ret
0x0666DDB0: e00313aa  mov x0, x19
0x0666DDB4: f44f43a9  ldp x20, x19, [sp, #0x30]
0x0666DDB8: f65742a9  ldp x22, x21, [sp, #0x20]
0x0666DDBC: f85f41a9  ldp x24, x23, [sp, #0x10]
0x0666DDC0: e1031faa  mov x1, xzr
0x0666DDC4: fe0744f8  ldr x30, [sp], #0x40
0x0666DDC8: d2be0e14  b #0x6a1d910
0x0666DDCC: b84b2c97  bl #0x3180cac

; RVA 0x666DDD0 | private void VerifyMerge(PositionComponent firstItem, PositionComponent secondItem) { }
; bytes=592 sha256=03ce609628b06b666d1f24124b06fb7aec44018f26124a80b13c91b6ab43dd96 status=arm64_complete_bound indexed_start=True
0x0666DDD0: ffc301d1  sub sp, sp, #0x70
0x0666DDD4: fe0b00f9  str x30, [sp, #0x10]
0x0666DDD8: fc6f02a9  stp x28, x27, [sp, #0x20]
0x0666DDDC: fa6703a9  stp x26, x25, [sp, #0x30]
0x0666DDE0: f85f04a9  stp x24, x23, [sp, #0x40]
0x0666DDE4: f65705a9  stp x22, x21, [sp, #0x50]
0x0666DDE8: f44f06a9  stp x20, x19, [sp, #0x60]
0x0666DDEC: d6b500f0  adrp x22, #0x7d28000
0x0666DDF0: c8464439  ldrb w8, [x22, #0x111]
0x0666DDF4: f30302aa  mov x19, x2
0x0666DDF8: f40301aa  mov x20, x1
0x0666DDFC: f50300aa  mov x21, x0
0x0666DE00: a8020037  tbnz w8, #0, #0x666de54
0x0666DE04: 20840090  adrp x0, #0x76f1000
0x0666DE08: 008842f9  ldr x0, [x0, #0x510]
0x0666DE0C: 034b2c97  bl #0x3180a18
0x0666DE10: c08300b0  adrp x0, #0x76e6000
0x0666DE14: 004444f9  ldr x0, [x0, #0x888]
0x0666DE18: 004b2c97  bl #0x3180a18
0x0666DE1C: 608000b0  adrp x0, #0x767a000
0x0666DE20: 004c42f9  ldr x0, [x0, #0x498]
0x0666DE24: fd4a2c97  bl #0x3180a18
0x0666DE28: c08400f0  adrp x0, #0x7708000
0x0666DE2C: 006840f9  ldr x0, [x0, #0xd0]
0x0666DE30: fa4a2c97  bl #0x3180a18
0x0666DE34: c08400f0  adrp x0, #0x7708000
0x0666DE38: 006c40f9  ldr x0, [x0, #0xd8]
0x0666DE3C: f74a2c97  bl #0x3180a18
0x0666DE40: c08400f0  adrp x0, #0x7708000
0x0666DE44: 007040f9  ldr x0, [x0, #0xe0]
0x0666DE48: f44a2c97  bl #0x3180a18
0x0666DE4C: 28008052  movz w8, #0x1
0x0666DE50: c8460439  strb w8, [x22, #0x111]
0x0666DE54: 540e00b4  cbz x20, #0x666e01c
0x0666DE58: d78300b0  adrp x23, #0x76e6000
0x0666DE5C: f74644f9  ldr x23, [x23, #0x888]
0x0666DE60: e00314aa  mov x0, x20
0x0666DE64: e10240f9  ldr x1, [x23]
0x0666DE68: 6dfe5597  bl #0x3bed81c
0x0666DE6C: 930d00b4  cbz x19, #0x666e01c
0x0666DE70: e10240f9  ldr x1, [x23]
0x0666DE74: f60300aa  mov x22, x0
0x0666DE78: e00313aa  mov x0, x19
0x0666DE7C: 68fe5597  bl #0x3bed81c
0x0666DE80: b82240f9  ldr x24, [x21, #0x40]
0x0666DE84: d80c00b4  cbz x24, #0x666e01c
0x0666DE88: 7a8000b0  adrp x26, #0x767a000
0x0666DE8C: 080340f9  ldr x8, [x24]
0x0666DE90: 5a4f42f9  ldr x26, [x26, #0x498]
0x0666DE94: f70300aa  mov x23, x0
0x0666DE98: 095d4279  ldrh w9, [x8, #0x12e]
0x0666DE9C: 410340f9  ldr x1, [x26]
0x0666DEA0: 290100b4  cbz x9, #0x666dec4
0x0666DEA4: 0a5940f9  ldr x10, [x8, #0xb0]
0x0666DEA8: 4a210091  add x10, x10, #8
0x0666DEAC: 4b815ff8  ldur x11, [x10, #-8]
0x0666DEB0: 7f0101eb  cmp x11, x1
0x0666DEB4: 00010054  b.eq #0x666ded4
0x0666DEB8: 290500f1  subs x9, x9, #1
0x0666DEBC: 4a410091  add x10, x10, #0x10
0x0666DEC0: 61ffff54  b.ne #0x666deac
0x0666DEC4: 82028052  movz w2, #0x14
0x0666DEC8: e00318aa  mov x0, x24
0x0666DECC: 11a32b97  bl #0x3156b10
0x0666DED0: 05000014  b #0x666dee4
0x0666DED4: 490140b9  ldr w9, [x10]
0x0666DED8: 29510011  add w9, w9, #0x14
0x0666DEDC: 08d1298b  add x8, x8, w9, sxtw #4
0x0666DEE0: 00e10491  add x0, x8, #0x138
0x0666DEE4: 080840a9  ldp x8, x2, [x0]
0x0666DEE8: e00318aa  mov x0, x24
0x0666DEEC: e10314aa  mov x1, x20
0x0666DEF0: 00013fd6  blr x8
0x0666DEF4: b92240f9  ldr x25, [x21, #0x40]
0x0666DEF8: 390900b4  cbz x25, #0x666e01c
0x0666DEFC: 280340f9  ldr x8, [x25]
0x0666DF00: 410340f9  ldr x1, [x26]
0x0666DF04: 3c840090  adrp x28, #0x76f1000
0x0666DF08: da8400f0  adrp x26, #0x7708000
0x0666DF0C: db8400f0  adrp x27, #0x7708000
0x0666DF10: 095d4279  ldrh w9, [x8, #0x12e]
0x0666DF14: 9c8b42f9  ldr x28, [x28, #0x510]
0x0666DF18: 5a6b40f9  ldr x26, [x26, #0xd0]
0x0666DF1C: 7b7340f9  ldr x27, [x27, #0xe0]
0x0666DF20: f80300aa  mov x24, x0
0x0666DF24: 290100b4  cbz x9, #0x666df48
0x0666DF28: 0a5940f9  ldr x10, [x8, #0xb0]
0x0666DF2C: 4a210091  add x10, x10, #8
0x0666DF30: 4b815ff8  ldur x11, [x10, #-8]
0x0666DF34: 7f0101eb  cmp x11, x1
0x0666DF38: 00010054  b.eq #0x666df58
0x0666DF3C: 290500f1  subs x9, x9, #1
0x0666DF40: 4a410091  add x10, x10, #0x10
0x0666DF44: 61ffff54  b.ne #0x666df30
0x0666DF48: 82028052  movz w2, #0x14
0x0666DF4C: e00319aa  mov x0, x25
0x0666DF50: f0a22b97  bl #0x3156b10
0x0666DF54: 05000014  b #0x666df68
0x0666DF58: 490140b9  ldr w9, [x10]
0x0666DF5C: 29510011  add w9, w9, #0x14
0x0666DF60: 08d1298b  add x8, x8, w9, sxtw #4
0x0666DF64: 00e10491  add x0, x8, #0x138
0x0666DF68: 080840a9  ldp x8, x2, [x0]
0x0666DF6C: e00319aa  mov x0, x25
0x0666DF70: e10313aa  mov x1, x19
0x0666DF74: 00013fd6  blr x8
0x0666DF78: f90300aa  mov x25, x0
0x0666DF7C: e00315aa  mov x0, x21
0x0666DF80: e10316aa  mov x1, x22
0x0666DF84: e20317aa  mov x2, x23
0x0666DF88: 59000094  bl #0x666e0ec
0x0666DF8C: 880340f9  ldr x8, [x28]
0x0666DF90: b61640f9  ldr x22, [x21, #0x28]
0x0666DF94: f70300aa  mov x23, x0
0x0666DF98: e00308aa  mov x0, x8
0x0666DF9C: 414b2c97  bl #0x3180ca0
0x0666DFA0: 420340f9  ldr x2, [x26]
0x0666DFA4: e10315aa  mov x1, x21
0x0666DFA8: e3031faa  mov x3, xzr
0x0666DFAC: fa0300aa  mov x26, x0
0x0666DFB0: 17feb297  bl #0x532d80c
0x0666DFB4: 600340f9  ldr x0, [x27]
0x0666DFB8: 3a4b2c97  bl #0x3180ca0
0x0666DFBC: e1031f2a  mov w1, wzr
0x0666DFC0: e20314aa  mov x2, x20
0x0666DFC4: e30313aa  mov x3, x19
0x0666DFC8: e40318aa  mov x4, x24
0x0666DFCC: e50319aa  mov x5, x25
0x0666DFD0: e60317aa  mov x6, x23
0x0666DFD4: e7031aaa  mov x7, x26
0x0666DFD8: f50300aa  mov x21, x0
0x0666DFDC: ff7f00a9  stp xzr, xzr, [sp]
0x0666DFE0: 7efc0394  bl #0x676d1d8
0x0666DFE4: d60100b4  cbz x22, #0x666e01c
0x0666DFE8: c88400f0  adrp x8, #0x7708000
0x0666DFEC: 086d40f9  ldr x8, [x8, #0xd8]
0x0666DFF0: e00316aa  mov x0, x22
0x0666DFF4: e10315aa  mov x1, x21
0x0666DFF8: f44f46a9  ldp x20, x19, [sp, #0x60]
0x0666DFFC: 020140f9  ldr x2, [x8]
0x0666E000: f65745a9  ldp x22, x21, [sp, #0x50]
0x0666E004: f85f44a9  ldp x24, x23, [sp, #0x40]
0x0666E008: fa6743a9  ldp x26, x25, [sp, #0x30]
0x0666E00C: fc6f42a9  ldp x28, x27, [sp, #0x20]
0x0666E010: fe0b40f9  ldr x30, [sp, #0x10]
0x0666E014: ffc30191  add sp, sp, #0x70
0x0666E018: 55db5c17  b #0x3da4d6c
0x0666E01C: 244b2c97  bl #0x3180cac

; RVA 0x666E140 | private void OnVerifyMergeConfirmed(BoardItemPosition firstItemPosition, BoardItemPosition secondItemPosition) { }
; bytes=104 sha256=1fe4249c4f7722ec1ce27dbe92ae31d5b5d47527d9329e74b4be8db21168aad5 status=arm64_complete_bound indexed_start=True
0x0666E140: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0666E144: f44f01a9  stp x20, x19, [sp, #0x10]
0x0666E148: 083440f9  ldr x8, [x0, #0x68]
0x0666E14C: c80200b4  cbz x8, #0x666e1a4
0x0666E150: f30300aa  mov x19, x0
0x0666E154: 004540f9  ldr x0, [x8, #0x88]
0x0666E158: 600200b4  cbz x0, #0x666e1a4
0x0666E15C: f40302aa  mov x20, x2
0x0666E160: e2031faa  mov x2, xzr
0x0666E164: b8500a94  bl #0x6902444
0x0666E168: 683640f9  ldr x8, [x19, #0x68]
0x0666E16C: c80100b4  cbz x8, #0x666e1a4
0x0666E170: f50300aa  mov x21, x0
0x0666E174: 004540f9  ldr x0, [x8, #0x88]
0x0666E178: 600100b4  cbz x0, #0x666e1a4
0x0666E17C: e10314aa  mov x1, x20
0x0666E180: e2031faa  mov x2, xzr
0x0666E184: b0500a94  bl #0x6902444
0x0666E188: e20300aa  mov x2, x0
0x0666E18C: e00313aa  mov x0, x19
0x0666E190: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0666E194: e10315aa  mov x1, x21
0x0666E198: e3031faa  mov x3, xzr
0x0666E19C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0666E1A0: a0ffff17  b #0x666e020
0x0666E1A4: c24a2c97  bl #0x3180cac

; RVA 0x666E020 | private bool PerformTryCombineItems(PositionComponent firstItem, PositionComponent secondItem, IItemsCombiner.OnItemsCombined callback) { }
; bytes=204 sha256=659df295f42b3aa5a668d32749dd310e09abc5aebec742b35bdfab1b3d1e8557 status=arm64_complete_bound indexed_start=True
0x0666E020: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x0666E024: f65701a9  stp x22, x21, [sp, #0x10]
0x0666E028: f44f02a9  stp x20, x19, [sp, #0x20]
0x0666E02C: d7b500d0  adrp x23, #0x7d28000
0x0666E030: e84a4439  ldrb w8, [x23, #0x112]
0x0666E034: f30303aa  mov x19, x3
0x0666E038: f40302aa  mov x20, x2
0x0666E03C: f60301aa  mov x22, x1
0x0666E040: f50300aa  mov x21, x0
0x0666E044: c8000037  tbnz w8, #0, #0x666e05c
0x0666E048: c0830090  adrp x0, #0x76e6000
0x0666E04C: 004444f9  ldr x0, [x0, #0x888]
0x0666E050: 724a2c97  bl #0x3180a18
0x0666E054: 28008052  movz w8, #0x1
0x0666E058: e84a0439  strb w8, [x23, #0x112]
0x0666E05C: 760400b4  cbz x22, #0x666e0e8
0x0666E060: d7830090  adrp x23, #0x76e6000
0x0666E064: f74644f9  ldr x23, [x23, #0x888]
0x0666E068: e00316aa  mov x0, x22
0x0666E06C: e10240f9  ldr x1, [x23]
0x0666E070: ebfd5597  bl #0x3bed81c
0x0666E074: b40300b4  cbz x20, #0x666e0e8
0x0666E078: e10240f9  ldr x1, [x23]
0x0666E07C: f60300aa  mov x22, x0
0x0666E080: e00314aa  mov x0, x20
0x0666E084: e6fd5597  bl #0x3bed81c
0x0666E088: 831a40f9  ldr x3, [x20, #0x30]
0x0666E08C: e20300aa  mov x2, x0
0x0666E090: e00315aa  mov x0, x21
0x0666E094: e10316aa  mov x1, x22
0x0666E098: 44000094  bl #0x666e1a8
0x0666E09C: 60010036  tbz w0, #0, #0x666e0c8
0x0666E0A0: 930100b4  cbz x19, #0x666e0d0
0x0666E0A4: 680e40f9  ldr x8, [x19, #0x18]
0x0666E0A8: 602240f9  ldr x0, [x19, #0x40]
0x0666E0AC: 641640f9  ldr x4, [x19, #0x28]
0x0666E0B0: 21008052  movz w1, #0x1
0x0666E0B4: 22008052  movz w2, #0x1
0x0666E0B8: e3031f2a  mov w3, wzr
0x0666E0BC: 33008052  movz w19, #0x1
0x0666E0C0: 00013fd6  blr x8
0x0666E0C4: 04000014  b #0x666e0d4
0x0666E0C8: f3031f2a  mov w19, wzr
0x0666E0CC: 02000014  b #0x666e0d4
0x0666E0D0: 33008052  movz w19, #0x1
0x0666E0D4: e003132a  mov w0, w19
0x0666E0D8: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0666E0DC: f65741a9  ldp x22, x21, [sp, #0x10]
0x0666E0E0: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x0666E0E4: c0035fd6  ret
0x0666E0E8: f14a2c97  bl #0x3180cac

; RVA 0x666E204 | public void ResetCombine() { }
; bytes=4 sha256=110f46b5b35c069160560c6ad6786f647dd44e8760a52a46fc22dbbcd7630b91 status=arm64_complete_bound indexed_start=True
0x0666E204: c0035fd6  ret

; RVA 0x666E1A8 | public bool TryMergeItems(MergeComponent firstItem, MergeComponent secondItem, BoardItemPosition newPosition) { }
; bytes=92 sha256=29c9c8ac5a1e970d5e3b4a6a88d955fc03181d73ac62f646e6b2f7df69c69614 status=arm64_complete_bound indexed_start=True
0x0666E1A8: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x0666E1AC: f65701a9  stp x22, x21, [sp, #0x10]
0x0666E1B0: f44f02a9  stp x20, x19, [sp, #0x20]
0x0666E1B4: f30303aa  mov x19, x3
0x0666E1B8: f40302aa  mov x20, x2
0x0666E1BC: f60301aa  mov x22, x1
0x0666E1C0: f70300aa  mov x23, x0
0x0666E1C4: caffff97  bl #0x666e0ec
0x0666E1C8: f50300aa  mov x21, x0
0x0666E1CC: 000100b4  cbz x0, #0x666e1ec
0x0666E1D0: e00317aa  mov x0, x23
0x0666E1D4: e10316aa  mov x1, x22
0x0666E1D8: e20314aa  mov x2, x20
0x0666E1DC: e30313aa  mov x3, x19
0x0666E1E0: e40315aa  mov x4, x21
0x0666E1E4: e5031f2a  mov w5, wzr
0x0666E1E8: 08000094  bl #0x666e208
0x0666E1EC: bf0200f1  cmp x21, #0
0x0666E1F0: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0666E1F4: f65741a9  ldp x22, x21, [sp, #0x10]
0x0666E1F8: e0079f1a  cset w0, ne
0x0666E1FC: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x0666E200: c0035fd6  ret

; RVA 0x666E208 | private void Merge(MergeComponent firstItem, MergeComponent secondItem, BoardItemPosition newPosition, IMergeItem newItem, bool isSpecificMerge = False) { }
; bytes=5140 sha256=6bbb3787190587b163bc38037a7fda947d64d39291ee3dd5c60e5e527a07867f status=arm64_complete_bound indexed_start=True
0x0666E208: ffc304d1  sub sp, sp, #0x130
0x0666E20C: fd7b0da9  stp x29, x30, [sp, #0xd0]
0x0666E210: fc6f0ea9  stp x28, x27, [sp, #0xe0]
0x0666E214: fa670fa9  stp x26, x25, [sp, #0xf0]
0x0666E218: f85f10a9  stp x24, x23, [sp, #0x100]
0x0666E21C: f65711a9  stp x22, x21, [sp, #0x110]
0x0666E220: f44f12a9  stp x20, x19, [sp, #0x120]
0x0666E224: d4b500d0  adrp x20, #0x7d28000
0x0666E228: 884e4439  ldrb w8, [x20, #0x113]
0x0666E22C: fd03052a  mov w29, w5
0x0666E230: fc0304aa  mov x28, x4
0x0666E234: f80302aa  mov x24, x2
0x0666E238: f90301aa  mov x25, x1
0x0666E23C: f30300aa  mov x19, x0
0x0666E240: e36700f9  str x3, [sp, #0xc8]
0x0666E244: e80d0037  tbnz w8, #0, #0x666e400
0x0666E248: 80800090  adrp x0, #0x767e000
0x0666E24C: 001c43f9  ldr x0, [x0, #0x638]
0x0666E250: f2492c97  bl #0x3180a18
0x0666E254: 408300b0  adrp x0, #0x76d7000
0x0666E258: 00dc42f9  ldr x0, [x0, #0x5b8]
0x0666E25C: ef492c97  bl #0x3180a18
0x0666E260: 408300b0  adrp x0, #0x76d7000
0x0666E264: 00c442f9  ldr x0, [x0, #0x588]
0x0666E268: ec492c97  bl #0x3180a18
0x0666E26C: 60800090  adrp x0, #0x767a000
0x0666E270: 009044f9  ldr x0, [x0, #0x920]
0x0666E274: e9492c97  bl #0x3180a18
0x0666E278: 60800090  adrp x0, #0x767a000
0x0666E27C: 00a044f9  ldr x0, [x0, #0x940]
0x0666E280: e6492c97  bl #0x3180a18
0x0666E284: 60800090  adrp x0, #0x767a000
0x0666E288: 00ac44f9  ldr x0, [x0, #0x958]
0x0666E28C: e3492c97  bl #0x3180a18
0x0666E290: 80800090  adrp x0, #0x767e000
0x0666E294: 00d042f9  ldr x0, [x0, #0x5a0]
0x0666E298: e0492c97  bl #0x3180a18
0x0666E29C: 80800090  adrp x0, #0x767e000
0x0666E2A0: 00dc42f9  ldr x0, [x0, #0x5b8]
0x0666E2A4: dd492c97  bl #0x3180a18
0x0666E2A8: 80800090  adrp x0, #0x767e000
0x0666E2AC: 00e042f9  ldr x0, [x0, #0x5c0]
0x0666E2B0: da492c97  bl #0x3180a18
0x0666E2B4: 608000d0  adrp x0, #0x767c000
0x0666E2B8: 002441f9  ldr x0, [x0, #0x248]
0x0666E2BC: d7492c97  bl #0x3180a18
0x0666E2C0: 60800090  adrp x0, #0x767a000
0x0666E2C4: 004c42f9  ldr x0, [x0, #0x498]
0x0666E2C8: d4492c97  bl #0x3180a18
0x0666E2CC: c08400d0  adrp x0, #0x7708000
0x0666E2D0: 007440f9  ldr x0, [x0, #0xe8]
0x0666E2D4: d1492c97  bl #0x3180a18
0x0666E2D8: 80800090  adrp x0, #0x767e000
0x0666E2DC: 005042f9  ldr x0, [x0, #0x4a0]
0x0666E2E0: ce492c97  bl #0x3180a18
0x0666E2E4: 408000f0  adrp x0, #0x7679000
0x0666E2E8: 001044f9  ldr x0, [x0, #0x820]
0x0666E2EC: cb492c97  bl #0x3180a18
0x0666E2F0: c08400d0  adrp x0, #0x7708000
0x0666E2F4: 007840f9  ldr x0, [x0, #0xf0]
0x0666E2F8: c8492c97  bl #0x3180a18
0x0666E2FC: 80800090  adrp x0, #0x767e000
0x0666E300: 005442f9  ldr x0, [x0, #0x4a8]
0x0666E304: c5492c97  bl #0x3180a18
0x0666E308: e08200d0  adrp x0, #0x76cc000
0x0666E30C: 008c44f9  ldr x0, [x0, #0x918]
0x0666E310: c2492c97  bl #0x3180a18
0x0666E314: e08200d0  adrp x0, #0x76cc000
0x0666E318: 008844f9  ldr x0, [x0, #0x910]
0x0666E31C: bf492c97  bl #0x3180a18
0x0666E320: c08400d0  adrp x0, #0x7708000
0x0666E324: 007c40f9  ldr x0, [x0, #0xf8]
0x0666E328: bc492c97  bl #0x3180a18
0x0666E32C: c08400d0  adrp x0, #0x7708000
0x0666E330: 008040f9  ldr x0, [x0, #0x100]
0x0666E334: b9492c97  bl #0x3180a18
0x0666E338: 80800090  adrp x0, #0x767e000
0x0666E33C: 00e842f9  ldr x0, [x0, #0x5d0]
0x0666E340: b6492c97  bl #0x3180a18
0x0666E344: c08400d0  adrp x0, #0x7708000
0x0666E348: 008440f9  ldr x0, [x0, #0x108]
0x0666E34C: b3492c97  bl #0x3180a18
0x0666E350: c08400d0  adrp x0, #0x7708000
0x0666E354: 008840f9  ldr x0, [x0, #0x110]
0x0666E358: b0492c97  bl #0x3180a18
0x0666E35C: c08400b0  adrp x0, #0x7707000
0x0666E360: 00dc44f9  ldr x0, [x0, #0x9b8]
0x0666E364: ad492c97  bl #0x3180a18
0x0666E368: c08400d0  adrp x0, #0x7708000
0x0666E36C: 008c40f9  ldr x0, [x0, #0x118]
0x0666E370: aa492c97  bl #0x3180a18
0x0666E374: c08400d0  adrp x0, #0x7708000
0x0666E378: 009040f9  ldr x0, [x0, #0x120]
0x0666E37C: a7492c97  bl #0x3180a18
0x0666E380: 808400d0  adrp x0, #0x7700000
0x0666E384: 004c45f9  ldr x0, [x0, #0xa98]
0x0666E388: a4492c97  bl #0x3180a18
0x0666E38C: 808400d0  adrp x0, #0x7700000
0x0666E390: 005045f9  ldr x0, [x0, #0xaa0]
0x0666E394: a1492c97  bl #0x3180a18
0x0666E398: 80800090  adrp x0, #0x767e000
0x0666E39C: 00f842f9  ldr x0, [x0, #0x5f0]
0x0666E3A0: 9e492c97  bl #0x3180a18
0x0666E3A4: 80800090  adrp x0, #0x767e000
0x0666E3A8: 00fc42f9  ldr x0, [x0, #0x5f8]
0x0666E3AC: 9b492c97  bl #0x3180a18
0x0666E3B0: c08400d0  adrp x0, #0x7708000
0x0666E3B4: 009440f9  ldr x0, [x0, #0x128]
0x0666E3B8: 98492c97  bl #0x3180a18
0x0666E3BC: c08400d0  adrp x0, #0x7708000
0x0666E3C0: 009840f9  ldr x0, [x0, #0x130]
0x0666E3C4: 95492c97  bl #0x3180a18
0x0666E3C8: c08400d0  adrp x0, #0x7708000
0x0666E3CC: 009c40f9  ldr x0, [x0, #0x138]
0x0666E3D0: 92492c97  bl #0x3180a18
0x0666E3D4: c08400d0  adrp x0, #0x7708000
0x0666E3D8: 00a040f9  ldr x0, [x0, #0x140]
0x0666E3DC: 8f492c97  bl #0x3180a18
0x0666E3E0: c08400d0  adrp x0, #0x7708000
0x0666E3E4: 00a440f9  ldr x0, [x0, #0x148]
0x0666E3E8: 8c492c97  bl #0x3180a18
0x0666E3EC: e07f00b0  adrp x0, #0x766b000
0x0666E3F0: 00b040f9  ldr x0, [x0, #0x160]
0x0666E3F4: 89492c97  bl #0x3180a18
0x0666E3F8: 28008052  movz w8, #0x1
0x0666E3FC: 884e0439  strb w8, [x20, #0x113]
0x0666E400: ffff0ba9  stp xzr, xzr, [sp, #0xb8]
0x0666E404: ffff0aa9  stp xzr, xzr, [sp, #0xa8]
0x0666E408: ff5300f9  str xzr, [sp, #0xa0]
0x0666E40C: 742240f9  ldr x20, [x19, #0x40]
0x0666E410: 549000b4  cbz x20, #0x666f618
0x0666E414: 7b800090  adrp x27, #0x767a000
0x0666E418: 880240f9  ldr x8, [x20]
0x0666E41C: 7b4f42f9  ldr x27, [x27, #0x498]
0x0666E420: 095d4279  ldrh w9, [x8, #0x12e]
0x0666E424: 610340f9  ldr x1, [x27]
0x0666E428: 290100b4  cbz x9, #0x666e44c
0x0666E42C: 0a5940f9  ldr x10, [x8, #0xb0]
0x0666E430: 4a210091  add x10, x10, #8
0x0666E434: 4b815ff8  ldur x11, [x10, #-8]
0x0666E438: 7f0101eb  cmp x11, x1
0x0666E43C: 00010054  b.eq #0x666e45c
0x0666E440: 290500f1  subs x9, x9, #1
0x0666E444: 4a410091  add x10, x10, #0x10
0x0666E448: 61ffff54  b.ne #0x666e434
0x0666E44C: 82028052  movz w2, #0x14
0x0666E450: e00314aa  mov x0, x20
0x0666E454: afa12b97  bl #0x3156b10
0x0666E458: 05000014  b #0x666e46c
0x0666E45C: 490140b9  ldr w9, [x10]
0x0666E460: 29510011  add w9, w9, #0x14
0x0666E464: 08d1298b  add x8, x8, w9, sxtw #4
0x0666E468: 00e10491  add x0, x8, #0x138
0x0666E46C: 080840a9  ldp x8, x2, [x0]
0x0666E470: e00314aa  mov x0, x20
0x0666E474: e10319aa  mov x1, x25
0x0666E478: 00013fd6  blr x8
0x0666E47C: 742240f9  ldr x20, [x19, #0x40]
0x0666E480: d48c00b4  cbz x20, #0x666f618
0x0666E484: 880240f9  ldr x8, [x20]
0x0666E488: 610340f9  ldr x1, [x27]
0x0666E48C: fa0300aa  mov x26, x0
0x0666E490: 095d4279  ldrh w9, [x8, #0x12e]
0x0666E494: 290100b4  cbz x9, #0x666e4b8
0x0666E498: 0a5940f9  ldr x10, [x8, #0xb0]
0x0666E49C: 4a210091  add x10, x10, #8
0x0666E4A0: 4b815ff8  ldur x11, [x10, #-8]
0x0666E4A4: 7f0101eb  cmp x11, x1
0x0666E4A8: 00010054  b.eq #0x666e4c8
0x0666E4AC: 290500f1  subs x9, x9, #1
0x0666E4B0: 4a410091  add x10, x10, #0x10
0x0666E4B4: 61ffff54  b.ne #0x666e4a0
0x0666E4B8: 82028052  movz w2, #0x14
0x0666E4BC: e00314aa  mov x0, x20
0x0666E4C0: 94a12b97  bl #0x3156b10
0x0666E4C4: 05000014  b #0x666e4d8
0x0666E4C8: 490140b9  ldr w9, [x10]
0x0666E4CC: 29510011  add w9, w9, #0x14
0x0666E4D0: 08d1298b  add x8, x8, w9, sxtw #4
0x0666E4D4: 00e10491  add x0, x8, #0x138
0x0666E4D8: 080840a9  ldp x8, x2, [x0]
0x0666E4DC: e00314aa  mov x0, x20
0x0666E4E0: e10318aa  mov x1, x24
0x0666E4E4: 00013fd6  blr x8
0x0666E4E8: 9a8900b4  cbz x26, #0x666f618
0x0666E4EC: 568000f0  adrp x22, #0x7679000
0x0666E4F0: 480340f9  ldr x8, [x26]
0x0666E4F4: d61244f9  ldr x22, [x22, #0x820]
0x0666E4F8: 742240f9  ldr x20, [x19, #0x40]
0x0666E4FC: f70300aa  mov x23, x0
0x0666E500: 095d4279  ldrh w9, [x8, #0x12e]
0x0666E504: c10240f9  ldr x1, [x22]
0x0666E508: 290100b4  cbz x9, #0x666e52c
0x0666E50C: 0a5940f9  ldr x10, [x8, #0xb0]
0x0666E510: 4a210091  add x10, x10, #8
0x0666E514: 4b815ff8  ldur x11, [x10, #-8]
0x0666E518: 7f0101eb  cmp x11, x1
0x0666E51C: 00010054  b.eq #0x666e53c
0x0666E520: 290500f1  subs x9, x9, #1
0x0666E524: 4a410091  add x10, x10, #0x10
0x0666E528: 61ffff54  b.ne #0x666e514
0x0666E52C: e0031aaa  mov x0, x26
0x0666E530: e2031f2a  mov w2, wzr
0x0666E534: 77a12b97  bl #0x3156b10
0x0666E538: 04000014  b #0x666e548
0x0666E53C: 490180b9  ldrsw x9, [x10]
0x0666E540: 0811098b  add x8, x8, x9, lsl #4
0x0666E544: 00e10491  add x0, x8, #0x138
0x0666E548: 080440a9  ldp x8, x1, [x0]
0x0666E54C: e0031aaa  mov x0, x26
0x0666E550: 00013fd6  blr x8
0x0666E554: 348600b4  cbz x20, #0x666f618
0x0666E558: 880240f9  ldr x8, [x20]
0x0666E55C: 610340f9  ldr x1, [x27]
0x0666E560: f50300aa  mov x21, x0
0x0666E564: 095d4279  ldrh w9, [x8, #0x12e]
0x0666E568: 290100b4  cbz x9, #0x666e58c
0x0666E56C: 0a5940f9  ldr x10, [x8, #0xb0]
0x0666E570: 4a210091  add x10, x10, #8
0x0666E574: 4b815ff8  ldur x11, [x10, #-8]
0x0666E578: 7f0101eb  cmp x11, x1
0x0666E57C: 00010054  b.eq #0x666e59c
0x0666E580: 290500f1  subs x9, x9, #1
0x0666E584: 4a410091  add x10, x10, #0x10
0x0666E588: 61ffff54  b.ne #0x666e574
0x0666E58C: 82008052  movz w2, #0x4
0x0666E590: e00314aa  mov x0, x20
0x0666E594: 5fa12b97  bl #0x3156b10
0x0666E598: 05000014  b #0x666e5ac
0x0666E59C: 490140b9  ldr w9, [x10]
0x0666E5A0: 29110011  add w9, w9, #4
0x0666E5A4: 08d1298b  add x8, x8, w9, sxtw #4
0x0666E5A8: 00e10491  add x0, x8, #0x138
0x0666E5AC: 080840a9  ldp x8, x2, [x0]
0x0666E5B0: e00314aa  mov x0, x20
0x0666E5B4: e10315aa  mov x1, x21
0x0666E5B8: 00013fd6  blr x8
0x0666E5BC: e02f00f9  str x0, [sp, #0x58]
0x0666E5C0: d78200b4  cbz x23, #0x666f618
0x0666E5C4: e80240f9  ldr x8, [x23]
0x0666E5C8: 742240f9  ldr x20, [x19, #0x40]
0x0666E5CC: c10240f9  ldr x1, [x22]
0x0666E5D0: 095d4279  ldrh w9, [x8, #0x12e]
0x0666E5D4: 290100b4  cbz x9, #0x666e5f8
0x0666E5D8: 0a5940f9  ldr x10, [x8, #0xb0]
0x0666E5DC: 4a210091  add x10, x10, #8
0x0666E5E0: 4b815ff8  ldur x11, [x10, #-8]
0x0666E5E4: 7f0101eb  cmp x11, x1
0x0666E5E8: 00010054  b.eq #0x666e608
0x0666E5EC: 290500f1  subs x9, x9, #1
0x0666E5F0: 4a410091  add x10, x10, #0x10
0x0666E5F4: 61ffff54  b.ne #0x666e5e0
0x0666E5F8: e00317aa  mov x0, x23
0x0666E5FC: e2031f2a  mov w2, wzr
0x0666E600: 44a12b97  bl #0x3156b10
0x0666E604: 04000014  b #0x666e614
0x0666E608: 490180b9  ldrsw x9, [x10]
0x0666E60C: 0811098b  add x8, x8, x9, lsl #4
0x0666E610: 00e10491  add x0, x8, #0x138
0x0666E614: 080440a9  ldp x8, x1, [x0]
0x0666E618: e00317aa  mov x0, x23
0x0666E61C: 00013fd6  blr x8
0x0666E620: d47f00b4  cbz x20, #0x666f618
0x0666E624: 880240f9  ldr x8, [x20]
0x0666E628: 610340f9  ldr x1, [x27]
0x0666E62C: f50300aa  mov x21, x0
0x0666E630: 095d4279  ldrh w9, [x8, #0x12e]
0x0666E634: 290100b4  cbz x9, #0x666e658
0x0666E638: 0a5940f9  ldr x10, [x8, #0xb0]
0x0666E63C: 4a210091  add x10, x10, #8
0x0666E640: 4b815ff8  ldur x11, [x10, #-8]
0x0666E644: 7f0101eb  cmp x11, x1
0x0666E648: 00010054  b.eq #0x666e668
0x0666E64C: 290500f1  subs x9, x9, #1
0x0666E650: 4a410091  add x10, x10, #0x10
0x0666E654: 61ffff54  b.ne #0x666e640
0x0666E658: 82008052  movz w2, #0x4
0x0666E65C: e00314aa  mov x0, x20
0x0666E660: 2ca12b97  bl #0x3156b10
0x0666E664: 05000014  b #0x666e678
0x0666E668: 490140b9  ldr w9, [x10]
0x0666E66C: 29110011  add w9, w9, #4
0x0666E670: 08d1298b  add x8, x8, w9, sxtw #4
0x0666E674: 00e10491  add x0, x8, #0x138
0x0666E678: 080840a9  ldp x8, x2, [x0]
0x0666E67C: e00314aa  mov x0, x20
0x0666E680: e10315aa  mov x1, x21
0x0666E684: 00013fd6  blr x8
0x0666E688: e02b00f9  str x0, [sp, #0x50]
0x0666E68C: 797c00b4  cbz x25, #0x666f618
0x0666E690: 95800090  adrp x21, #0x767e000
0x0666E694: b51e43f9  ldr x21, [x21, #0x638]
0x0666E698: e00319aa  mov x0, x25
0x0666E69C: a10240f9  ldr x1, [x21]
0x0666E6A0: 5ffc5597  bl #0x3bed81c
0x0666E6A4: a07b00b4  cbz x0, #0x666f618
0x0666E6A8: 08c04039  ldrb w8, [x0, #0x30]
0x0666E6AC: 68000034  cbz w8, #0x666e6b8
0x0666E6B0: 28008052  movz w8, #0x1
0x0666E6B4: 07000014  b #0x666e6d0
0x0666E6B8: 187b00b4  cbz x24, #0x666f618
0x0666E6BC: a10240f9  ldr x1, [x21]
0x0666E6C0: e00318aa  mov x0, x24
0x0666E6C4: 56fc5597  bl #0x3bed81c
0x0666E6C8: 807a00b4  cbz x0, #0x666f618
0x0666E6CC: 08c04039  ldrb w8, [x0, #0x30]
0x0666E6D0: 742240f9  ldr x20, [x19, #0x40]
0x0666E6D4: e86f00b9  str w8, [sp, #0x6c]
0x0666E6D8: 147a00b4  cbz x20, #0x666f618
0x0666E6DC: 880240f9  ldr x8, [x20]
0x0666E6E0: 610340f9  ldr x1, [x27]
0x0666E6E4: 095d4279  ldrh w9, [x8, #0x12e]
0x0666E6E8: 290100b4  cbz x9, #0x666e70c
0x0666E6EC: 0a5940f9  ldr x10, [x8, #0xb0]
0x0666E6F0: 4a210091  add x10, x10, #8
0x0666E6F4: 4b815ff8  ldur x11, [x10, #-8]
0x0666E6F8: 7f0101eb  cmp x11, x1
0x0666E6FC: 00010054  b.eq #0x666e71c
0x0666E700: 290500f1  subs x9, x9, #1
0x0666E704: 4a410091  add x10, x10, #0x10
0x0666E708: 61ffff54  b.ne #0x666e6f4
0x0666E70C: 62028052  movz w2, #0x13
0x0666E710: e00314aa  mov x0, x20
0x0666E714: ffa02b97  bl #0x3156b10
0x0666E718: 05000014  b #0x666e72c
0x0666E71C: 490140b9  ldr w9, [x10]
0x0666E720: 294d0011  add w9, w9, #0x13
0x0666E724: 08d1298b  add x8, x8, w9, sxtw #4
0x0666E728: 00e10491  add x0, x8, #0x138
0x0666E72C: 080840a9  ldp x8, x2, [x0]
0x0666E730: e00314aa  mov x0, x20
0x0666E734: e1031aaa  mov x1, x26
0x0666E738: 00013fd6  blr x8
0x0666E73C: e06b00b9  str w0, [sp, #0x68]
0x0666E740: e0031faa  mov x0, xzr
0x0666E744: d97ec097  bl #0x568e2a8
0x0666E748: e0070aa9  stp x0, x1, [sp, #0xa0]
0x0666E74C: e0830291  add x0, sp, #0xa0
0x0666E750: e1031faa  mov x1, xzr
0x0666E754: 3a87c097  bl #0x569043c
0x0666E758: a10240f9  ldr x1, [x21]
0x0666E75C: f40300aa  mov x20, x0
0x0666E760: e00319aa  mov x0, x25
0x0666E764: 2efc5597  bl #0x3bed81c
0x0666E768: 807500b4  cbz x0, #0x666f618
0x0666E76C: 787500b4  cbz x24, #0x666f618
0x0666E770: a10240f9  ldr x1, [x21]
0x0666E774: f74300f9  str x23, [sp, #0x80]
0x0666E778: 17c84039  ldrb w23, [x0, #0x32]
0x0666E77C: e00318aa  mov x0, x24
0x0666E780: f42700f9  str x20, [sp, #0x48]
0x0666E784: 26fc5597  bl #0x3bed81c
0x0666E788: 807400b4  cbz x0, #0x666f618
0x0666E78C: 488300b0  adrp x8, #0x76d7000
0x0666E790: 1bc84039  ldrb w27, [x0, #0x32]
0x0666E794: 08c542f9  ldr x8, [x8, #0x588]
0x0666E798: 97000034  cbz w23, #0x666e7a8
0x0666E79C: 010140f9  ldr x1, [x8]
0x0666E7A0: e00319aa  mov x0, x25
0x0666E7A4: 04000014  b #0x666e7b4
0x0666E7A8: fb000034  cbz w27, #0x666e7c4
0x0666E7AC: 010140f9  ldr x1, [x8]
0x0666E7B0: e00318aa  mov x0, x24
0x0666E7B4: 1afc5597  bl #0x3bed81c
0x0666E7B8: 007300b4  cbz x0, #0x666f618
0x0666E7BC: 28008052  movz w8, #0x1
0x0666E7C0: 08480539  strb w8, [x0, #0x152]
0x0666E7C4: e44340f9  ldr x4, [sp, #0x80]
0x0666E7C8: e8230291  add x8, sp, #0x88
0x0666E7CC: e5230391  add x5, sp, #0xc8
0x0666E7D0: e00313aa  mov x0, x19
0x0666E7D4: e10319aa  mov x1, x25
0x0666E7D8: e2031aaa  mov x2, x26
0x0666E7DC: e30318aa  mov x3, x24
0x0666E7E0: 8f030094  bl #0x666f61c
0x0666E7E4: e84740f9  ldr x8, [sp, #0x88]
0x0666E7E8: fa3f00f9  str x26, [sp, #0x78]
0x0666E7EC: 68070037  tbnz w8, #0, #0x666e8d8
0x0666E7F0: 558300b0  adrp x21, #0x76d7000
0x0666E7F4: 743640f9  ldr x20, [x19, #0x68]
0x0666E7F8: b5de42f9  ldr x21, [x21, #0x5b8]
0x0666E7FC: e00319aa  mov x0, x25
0x0666E800: a10240f9  ldr x1, [x21]
0x0666E804: 06fc5597  bl #0x3bed81c
0x0666E808: 947000b4  cbz x20, #0x666f618
0x0666E80C: c98400d0  adrp x9, #0x7708000
0x0666E810: 880240f9  ldr x8, [x20]
0x0666E814: 299940f9  ldr x9, [x9, #0x130]
0x0666E818: e10300aa  mov x1, x0
0x0666E81C: 23008052  movz w3, #0x1
0x0666E820: 051141f9  ldr x5, [x8, #0x220]
0x0666E824: 220140f9  ldr x2, [x9]
0x0666E828: 090d41f9  ldr x9, [x8, #0x218]
0x0666E82C: 24008052  movz w4, #0x1
0x0666E830: e00314aa  mov x0, x20
0x0666E834: 20013fd6  blr x9
0x0666E838: a10240f9  ldr x1, [x21]
0x0666E83C: 743640f9  ldr x20, [x19, #0x68]
0x0666E840: e00318aa  mov x0, x24
0x0666E844: f6fb5597  bl #0x3bed81c
0x0666E848: 946e00b4  cbz x20, #0x666f618
0x0666E84C: c98400d0  adrp x9, #0x7708000
0x0666E850: 880240f9  ldr x8, [x20]
0x0666E854: 299540f9  ldr x9, [x9, #0x128]
0x0666E858: e10300aa  mov x1, x0
0x0666E85C: 23008052  movz w3, #0x1
0x0666E860: 051141f9  ldr x5, [x8, #0x220]
0x0666E864: 220140f9  ldr x2, [x9]
0x0666E868: 090d41f9  ldr x9, [x8, #0x218]
0x0666E86C: 24008052  movz w4, #0x1
0x0666E870: e00314aa  mov x0, x20
0x0666E874: 20013fd6  blr x9
0x0666E878: 742a40f9  ldr x20, [x19, #0x50]
0x0666E87C: f46c00b4  cbz x20, #0x666f618
0x0666E880: 89800090  adrp x9, #0x767e000
0x0666E884: 880240f9  ldr x8, [x20]
0x0666E888: 350b40f9  ldr x21, [x25, #0x10]
0x0666E88C: 295142f9  ldr x9, [x9, #0x4a0]
0x0666E890: fa7f00b0  adrp x26, #0x766b000
0x0666E894: 210140f9  ldr x1, [x9]
0x0666E898: 5ab340f9  ldr x26, [x26, #0x160]
0x0666E89C: 095d4279  ldrh w9, [x8, #0x12e]
0x0666E8A0: 560340f9  ldr x22, [x26]
0x0666E8A4: 290100b4  cbz x9, #0x666e8c8
0x0666E8A8: 0a5940f9  ldr x10, [x8, #0xb0]
0x0666E8AC: 4a210091  add x10, x10, #8
0x0666E8B0: 4b815ff8  ldur x11, [x10, #-8]
0x0666E8B4: 7f0101eb  cmp x11, x1
0x0666E8B8: 40020054  b.eq #0x666e900
0x0666E8BC: 290500f1  subs x9, x9, #1
0x0666E8C0: 4a410091  add x10, x10, #0x10
0x0666E8C4: 61ffff54  b.ne #0x666e8b0
0x0666E8C8: e00314aa  mov x0, x20
0x0666E8CC: e2031f2a  mov w2, wzr
0x0666E8D0: 90a02b97  bl #0x3156b10
0x0666E8D4: 0e000014  b #0x666e90c
0x0666E8D8: 601640f9  ldr x0, [x19, #0x28]
0x0666E8DC: e06900b4  cbz x0, #0x666f618
0x0666E8E0: e94b40f9  ldr x9, [sp, #0x90]
0x0666E8E4: e84f40f9  ldr x8, [sp, #0x98]
0x0666E8E8: e82703a9  stp x8, x9, [sp, #0x30]
0x0666E8EC: c88400b0  adrp x8, #0x7707000
0x0666E8F0: 08dd44f9  ldr x8, [x8, #0x9b8]
0x0666E8F4: 010140f9  ldr x1, [x8]
0x0666E8F8: fed85c97  bl #0x3da4cf0
0x0666E8FC: 2d000014  b #0x666e9b0
0x0666E900: 490180b9  ldrsw x9, [x10]
0x0666E904: 0811098b  add x8, x8, x9, lsl #4
0x0666E908: 00e10491  add x0, x8, #0x138
0x0666E90C: 081440a9  ldp x8, x5, [x0]
0x0666E910: e23f40f9  ldr x2, [sp, #0x78]
0x0666E914: e00314aa  mov x0, x20
0x0666E918: e10316aa  mov x1, x22
0x0666E91C: e30315aa  mov x3, x21
0x0666E920: e4031faa  mov x4, xzr
0x0666E924: 00013fd6  blr x8
0x0666E928: 742a40f9  ldr x20, [x19, #0x50]
0x0666E92C: 746700b4  cbz x20, #0x666f618
0x0666E930: 89800090  adrp x9, #0x767e000
0x0666E934: 880240f9  ldr x8, [x20]
0x0666E938: 150b40f9  ldr x21, [x24, #0x10]
0x0666E93C: 295142f9  ldr x9, [x9, #0x4a0]
0x0666E940: 560340f9  ldr x22, [x26]
0x0666E944: e01f00f9  str x0, [sp, #0x38]
0x0666E948: 210140f9  ldr x1, [x9]
0x0666E94C: 095d4279  ldrh w9, [x8, #0x12e]
0x0666E950: 290100b4  cbz x9, #0x666e974
0x0666E954: 0a5940f9  ldr x10, [x8, #0xb0]
0x0666E958: 4a210091  add x10, x10, #8
0x0666E95C: 4b815ff8  ldur x11, [x10, #-8]
0x0666E960: 7f0101eb  cmp x11, x1
0x0666E964: 00010054  b.eq #0x666e984
0x0666E968: 290500f1  subs x9, x9, #1
0x0666E96C: 4a410091  add x10, x10, #0x10
0x0666E970: 61ffff54  b.ne #0x666e95c
0x0666E974: e00314aa  mov x0, x20
0x0666E978: e2031f2a  mov w2, wzr
0x0666E97C: 65a02b97  bl #0x3156b10
0x0666E980: 04000014  b #0x666e990
0x0666E984: 490180b9  ldrsw x9, [x10]
0x0666E988: 0811098b  add x8, x8, x9, lsl #4
0x0666E98C: 00e10491  add x0, x8, #0x138
0x0666E990: 081440a9  ldp x8, x5, [x0]
0x0666E994: e24340f9  ldr x2, [sp, #0x80]
0x0666E998: e00314aa  mov x0, x20
0x0666E99C: e10316aa  mov x1, x22
0x0666E9A0: e30315aa  mov x3, x21
0x0666E9A4: e4031faa  mov x4, xzr
0x0666E9A8: 00013fd6  blr x8
0x0666E9AC: e01b00f9  str x0, [sp, #0x30]
0x0666E9B0: 88800090  adrp x8, #0x767e000
0x0666E9B4: 08e942f9  ldr x8, [x8, #0x5d0]
0x0666E9B8: f66740f9  ldr x22, [sp, #0xc8]
0x0666E9BC: e0230291  add x0, sp, #0x88
0x0666E9C0: 41008052  movz w1, #0x2
0x0666E9C4: 020140f9  ldr x2, [x8]
0x0666E9C8: ff4700f9  str xzr, [sp, #0x88]
0x0666E9CC: 34347097  bl #0x427ba9c
0x0666E9D0: e14740f9  ldr x1, [sp, #0x88]
0x0666E9D4: e00316aa  mov x0, x22
0x0666E9D8: e2031faa  mov x2, xzr
0x0666E9DC: e3031faa  mov x3, xzr
0x0666E9E0: e4031faa  mov x4, xzr
0x0666E9E4: 79940a94  bl #0x6913bc8
0x0666E9E8: 750e40f9  ldr x21, [x19, #0x18]
0x0666E9EC: 756100b4  cbz x21, #0x666f618
0x0666E9F0: 8a800090  adrp x10, #0x767e000
0x0666E9F4: a80240f9  ldr x8, [x21]
0x0666E9F8: 4add42f9  ldr x10, [x10, #0x5b8]
0x0666E9FC: f40300aa  mov x20, x0
0x0666EA00: f61700f9  str x22, [sp, #0x28]
0x0666EA04: 095d4279  ldrh w9, [x8, #0x12e]
0x0666EA08: 410140f9  ldr x1, [x10]
0x0666EA0C: 290100b4  cbz x9, #0x666ea30
0x0666EA10: 0a5940f9  ldr x10, [x8, #0xb0]
0x0666EA14: 4a210091  add x10, x10, #8
0x0666EA18: 4b815ff8  ldur x11, [x10, #-8]
0x0666EA1C: 7f0101eb  cmp x11, x1
0x0666EA20: 00010054  b.eq #0x666ea40
0x0666EA24: 290500f1  subs x9, x9, #1
0x0666EA28: 4a410091  add x10, x10, #0x10
0x0666EA2C: 61ffff54  b.ne #0x666ea18
0x0666EA30: e00315aa  mov x0, x21
0x0666EA34: e2031f2a  mov w2, wzr
0x0666EA38: 36a02b97  bl #0x3156b10
0x0666EA3C: 04000014  b #0x666ea4c
0x0666EA40: 490180b9  ldrsw x9, [x10]
0x0666EA44: 0811098b  add x8, x8, x9, lsl #4
0x0666EA48: 00e10491  add x0, x8, #0x138
0x0666EA4C: 080c40a9  ldp x8, x3, [x0]
0x0666EA50: e00315aa  mov x0, x21
0x0666EA54: e1031caa  mov x1, x28
0x0666EA58: e20314aa  mov x2, x20
0x0666EA5C: 00013fd6  blr x8
0x0666EA60: c05d00b4  cbz x0, #0x666f618
0x0666EA64: 68800090  adrp x8, #0x767a000
0x0666EA68: 08ad44f9  ldr x8, [x8, #0x958]
0x0666EA6C: fa0300aa  mov x26, x0
0x0666EA70: 010140f9  ldr x1, [x8]
0x0666EA74: c4c85697  bl #0x3c20d84
0x0666EA78: 800300b4  cbz x0, #0x666eae8
0x0666EA7C: 88800090  adrp x8, #0x767e000
0x0666EA80: 08f942f9  ldr x8, [x8, #0x5f0]
0x0666EA84: f40300aa  mov x20, x0
0x0666EA88: 000140f9  ldr x0, [x8]
0x0666EA8C: 85482c97  bl #0x3180ca0
0x0666EA90: e1031faa  mov x1, xzr
0x0666EA94: f50300aa  mov x21, x0
0x0666EA98: 933d0a94  bl #0x68fe0e4
0x0666EA9C: f55b00b4  cbz x21, #0x666f618
0x0666EAA0: d68400d0  adrp x22, #0x7708000
0x0666EAA4: d6a640f9  ldr x22, [x22, #0x148]
0x0666EAA8: e13f40f9  ldr x1, [sp, #0x78]
0x0666EAAC: e00315aa  mov x0, x21
0x0666EAB0: 010c01f8  str x1, [x0, #0x10]!
0x0666EAB4: c4472c97  bl #0x31809c4
0x0666EAB8: e14340f9  ldr x1, [sp, #0x80]
0x0666EABC: e00315aa  mov x0, x21
0x0666EAC0: 018c01f8  str x1, [x0, #0x18]!
0x0666EAC4: c0472c97  bl #0x31809c4
0x0666EAC8: c10240f9  ldr x1, [x22]
0x0666EACC: e00315aa  mov x0, x21
0x0666EAD0: 018c02f8  str x1, [x0, #0x28]!
0x0666EAD4: bc472c97  bl #0x31809c4
0x0666EAD8: 958e04f8  str x21, [x20, #0x48]!
0x0666EADC: e00314aa  mov x0, x20
0x0666EAE0: e10315aa  mov x1, x21
0x0666EAE4: b8472c97  bl #0x31809c4
0x0666EAE8: fd4700b9  str w29, [sp, #0x44]
0x0666EAEC: fc3300f9  str x28, [sp, #0x60]
0x0666EAF0: 9d800090  adrp x29, #0x767e000
0x0666EAF4: 7403172a  orr w20, w27, w23
0x0666EAF8: bdd342f9  ldr x29, [x29, #0x5a0]
0x0666EAFC: fb4340f9  ldr x27, [sp, #0x80]
0x0666EB00: 94010034  cbz w20, #0x666eb30
0x0666EB04: a10340f9  ldr x1, [x29]
0x0666EB08: e0031aaa  mov x0, x26
0x0666EB0C: 9ec85697  bl #0x3c20d84
0x0666EB10: 405800b4  cbz x0, #0x666f618
0x0666EB14: c88400d0  adrp x8, #0x7708000
0x0666EB18: 089d40f9  ldr x8, [x8, #0x138]
0x0666EB1C: 010140f9  ldr x1, [x8]
0x0666EB20: 08000591  add x8, x0, #0x140
0x0666EB24: 01a000f9  str x1, [x0, #0x140]
0x0666EB28: e00308aa  mov x0, x8
0x0666EB2C: a6472c97  bl #0x31809c4
0x0666EB30: f44300b9  str w20, [sp, #0x40]
0x0666EB34: 68800090  adrp x8, #0x767a000
0x0666EB38: 08a144f9  ldr x8, [x8, #0x940]
0x0666EB3C: f48200d0  adrp x20, #0x76cc000
0x0666EB40: f58200d0  adrp x21, #0x76cc000
0x0666EB44: e0031aaa  mov x0, x26
0x0666EB48: 010140f9  ldr x1, [x8]
0x0666EB4C: 948a44f9  ldr x20, [x20, #0x910]
0x0666EB50: b58e44f9  ldr x21, [x21, #0x918]
0x0666EB54: 8cc85697  bl #0x3c20d84
0x0666EB58: 880240f9  ldr x8, [x20]
0x0666EB5C: fc0300aa  mov x28, x0
0x0666EB60: e00308aa  mov x0, x8
0x0666EB64: 4f482c97  bl #0x3180ca0
0x0666EB68: a10240f9  ldr x1, [x21]
0x0666EB6C: f50300aa  mov x21, x0
0x0666EB70: 32546797  bl #0x4043c38
0x0666EB74: 743240f9  ldr x20, [x19, #0x60]
0x0666EB78: 145500b4  cbz x20, #0x666f618
0x0666EB7C: ca8400d0  adrp x10, #0x7708000
0x0666EB80: 880240f9  ldr x8, [x20]
0x0666EB84: 4a7540f9  ldr x10, [x10, #0xe8]
0x0666EB88: 095d4279  ldrh w9, [x8, #0x12e]
0x0666EB8C: 410140f9  ldr x1, [x10]
0x0666EB90: 290100b4  cbz x9, #0x666ebb4
0x0666EB94: 0a5940f9  ldr x10, [x8, #0xb0]
0x0666EB98: 4a210091  add x10, x10, #8
0x0666EB9C: 4b815ff8  ldur x11, [x10, #-8]
0x0666EBA0: 7f0101eb  cmp x11, x1
0x0666EBA4: 00010054  b.eq #0x666ebc4
0x0666EBA8: 290500f1  subs x9, x9, #1
0x0666EBAC: 4a410091  add x10, x10, #0x10
0x0666EBB0: 61ffff54  b.ne #0x666eb9c
0x0666EBB4: e00314aa  mov x0, x20
0x0666EBB8: e2031f2a  mov w2, wzr
0x0666EBBC: d59f2b97  bl #0x3156b10
0x0666EBC0: 04000014  b #0x666ebd0
0x0666EBC4: 490180b9  ldrsw x9, [x10]
0x0666EBC8: 0811098b  add x8, x8, x9, lsl #4
0x0666EBCC: 00e10491  add x0, x8, #0x138
0x0666EBD0: 081840a9  ldp x8, x6, [x0]
0x0666EBD4: e5030391  add x5, sp, #0xc0
0x0666EBD8: e00314aa  mov x0, x20
0x0666EBDC: e1031caa  mov x1, x28
0x0666EBE0: e20319aa  mov x2, x25
0x0666EBE4: e30318aa  mov x3, x24
0x0666EBE8: e4031aaa  mov x4, x26
0x0666EBEC: 00013fd6  blr x8
0x0666EBF0: 800d0036  tbz w0, #0, #0x666eda0
0x0666EBF4: e06340f9  ldr x0, [sp, #0xc0]
0x0666EBF8: 005100b4  cbz x0, #0x666f618
0x0666EBFC: 68800090  adrp x8, #0x767a000
0x0666EC00: 742240f9  ldr x20, [x19, #0x40]
0x0666EC04: 089144f9  ldr x8, [x8, #0x920]
0x0666EC08: 010140f9  ldr x1, [x8]
0x0666EC0C: 5ec85697  bl #0x3c20d84
0x0666EC10: 6a800090  adrp x10, #0x767a000
0x0666EC14: 4a4d42f9  ldr x10, [x10, #0x498]
0x0666EC18: 145000b4  cbz x20, #0x666f618
0x0666EC1C: 880240f9  ldr x8, [x20]
0x0666EC20: 410140f9  ldr x1, [x10]
0x0666EC24: f70300aa  mov x23, x0
0x0666EC28: 095d4279  ldrh w9, [x8, #0x12e]
0x0666EC2C: 290100b4  cbz x9, #0x666ec50
0x0666EC30: 0a5940f9  ldr x10, [x8, #0xb0]
0x0666EC34: 4a210091  add x10, x10, #8
0x0666EC38: 4b815ff8  ldur x11, [x10, #-8]
0x0666EC3C: 7f0101eb  cmp x11, x1
0x0666EC40: 00010054  b.eq #0x666ec60
0x0666EC44: 290500f1  subs x9, x9, #1
0x0666EC48: 4a410091  add x10, x10, #0x10
0x0666EC4C: 61ffff54  b.ne #0x666ec38
0x0666EC50: 82028052  movz w2, #0x14
0x0666EC54: e00314aa  mov x0, x20
0x0666EC58: ae9f2b97  bl #0x3156b10
0x0666EC5C: 05000014  b #0x666ec70
0x0666EC60: 490140b9  ldr w9, [x10]
0x0666EC64: 29510011  add w9, w9, #0x14
0x0666EC68: 08d1298b  add x8, x8, w9, sxtw #4
0x0666EC6C: 00e10491  add x0, x8, #0x138
0x0666EC70: 080840a9  ldp x8, x2, [x0]
0x0666EC74: e00314aa  mov x0, x20
0x0666EC78: e10317aa  mov x1, x23
0x0666EC7C: 00013fd6  blr x8
0x0666EC80: 7b2a40f9  ldr x27, [x19, #0x50]
0x0666EC84: bb4c00b4  cbz x27, #0x666f618
0x0666EC88: 89800090  adrp x9, #0x767e000
0x0666EC8C: 680340f9  ldr x8, [x27]
0x0666EC90: f76340f9  ldr x23, [sp, #0xc0]
0x0666EC94: 295142f9  ldr x9, [x9, #0x4a0]
0x0666EC98: 8a800090  adrp x10, #0x767e000
0x0666EC9C: f40300aa  mov x20, x0
0x0666ECA0: 210140f9  ldr x1, [x9]
0x0666ECA4: 095d4279  ldrh w9, [x8, #0x12e]
0x0666ECA8: 4afd42f9  ldr x10, [x10, #0x5f8]
0x0666ECAC: 560140f9  ldr x22, [x10]
0x0666ECB0: 290100b4  cbz x9, #0x666ecd4
0x0666ECB4: 0a5940f9  ldr x10, [x8, #0xb0]
0x0666ECB8: 4a210091  add x10, x10, #8
0x0666ECBC: 4b815ff8  ldur x11, [x10, #-8]
0x0666ECC0: 7f0101eb  cmp x11, x1
0x0666ECC4: 00010054  b.eq #0x666ece4
0x0666ECC8: 290500f1  subs x9, x9, #1
0x0666ECCC: 4a410091  add x10, x10, #0x10
0x0666ECD0: 61ffff54  b.ne #0x666ecbc
0x0666ECD4: e0031baa  mov x0, x27
0x0666ECD8: e2031f2a  mov w2, wzr
0x0666ECDC: 8d9f2b97  bl #0x3156b10
0x0666ECE0: 04000014  b #0x666ecf0
0x0666ECE4: 490180b9  ldrsw x9, [x10]
0x0666ECE8: 0811098b  add x8, x8, x9, lsl #4
0x0666ECEC: 00e10491  add x0, x8, #0x138
0x0666ECF0: 081440a9  ldp x8, x5, [x0]
0x0666ECF4: e0031baa  mov x0, x27
0x0666ECF8: e10316aa  mov x1, x22
0x0666ECFC: e20314aa  mov x2, x20
0x0666ED00: e30317aa  mov x3, x23
0x0666ED04: e4031faa  mov x4, xzr
0x0666ED08: 00013fd6  blr x8
0x0666ED0C: 754800b4  cbz x21, #0x666f618
0x0666ED10: 89800090  adrp x9, #0x767e000
0x0666ED14: aa1e40b9  ldr w10, [x21, #0x1c]
0x0666ED18: a80a40f9  ldr x8, [x21, #0x10]
0x0666ED1C: 295542f9  ldr x9, [x9, #0x4a8]
0x0666ED20: fb4340f9  ldr x27, [sp, #0x80]
0x0666ED24: 4a050011  add w10, w10, #1
0x0666ED28: 290140f9  ldr x9, [x9]
0x0666ED2C: aa1e00b9  str w10, [x21, #0x1c]
0x0666ED30: 484700b4  cbz x8, #0x666f618
0x0666ED34: aa1a80b9  ldrsw x10, [x21, #0x18]
0x0666ED38: 0b1940b9  ldr w11, [x8, #0x18]
0x0666ED3C: e10300aa  mov x1, x0
0x0666ED40: 5f010b6b  cmp w10, w11
0x0666ED44: e2000054  b.hs #0x666ed60
0x0666ED48: 49050011  add w9, w10, #1
0x0666ED4C: 000d0a8b  add x0, x8, x10, lsl #3
0x0666ED50: a91a00b9  str w9, [x21, #0x18]
0x0666ED54: 010c02f8  str x1, [x0, #0x20]!
0x0666ED58: 1b472c97  bl #0x31809c4
0x0666ED5C: 06000014  b #0x666ed74
0x0666ED60: 281140f9  ldr x8, [x9, #0x20]
0x0666ED64: e00315aa  mov x0, x21
0x0666ED68: 086140f9  ldr x8, [x8, #0xc0]
0x0666ED6C: 023940f9  ldr x2, [x8, #0x70]
0x0666ED70: bf556797  bl #0x404446c
0x0666ED74: a10340f9  ldr x1, [x29]
0x0666ED78: e0031aaa  mov x0, x26
0x0666ED7C: 02c85697  bl #0x3c20d84
0x0666ED80: c04400b4  cbz x0, #0x666f618
0x0666ED84: c88400d0  adrp x8, #0x7708000
0x0666ED88: 08a140f9  ldr x8, [x8, #0x140]
0x0666ED8C: 010140f9  ldr x1, [x8]
0x0666ED90: 08000591  add x8, x0, #0x140
0x0666ED94: 01a000f9  str x1, [x0, #0x140]
0x0666ED98: e00308aa  mov x0, x8
0x0666ED9C: 0a472c97  bl #0x31809c4
0x0666EDA0: 740a40f9  ldr x20, [x19, #0x10]
0x0666EDA4: b44300b4  cbz x20, #0x666f618
0x0666EDA8: 8a800090  adrp x10, #0x767e000
0x0666EDAC: 880240f9  ldr x8, [x20]
0x0666EDB0: 4ae142f9  ldr x10, [x10, #0x5c0]
0x0666EDB4: d78400d0  adrp x23, #0x7708000
0x0666EDB8: d68400d0  adrp x22, #0x7708000
0x0666EDBC: 095d4279  ldrh w9, [x8, #0x12e]
0x0666EDC0: 410140f9  ldr x1, [x10]
0x0666EDC4: f77e40f9  ldr x23, [x23, #0xf8]
0x0666EDC8: d68240f9  ldr x22, [x22, #0x100]
0x0666EDCC: fd3340f9  ldr x29, [sp, #0x60]
0x0666EDD0: 290100b4  cbz x9, #0x666edf4
0x0666EDD4: 0a5940f9  ldr x10, [x8, #0xb0]
0x0666EDD8: 4a210091  add x10, x10, #8
0x0666EDDC: 4b815ff8  ldur x11, [x10, #-8]
0x0666EDE0: 7f0101eb  cmp x11, x1
0x0666EDE4: 00010054  b.eq #0x666ee04
0x0666EDE8: 290500f1  subs x9, x9, #1
0x0666EDEC: 4a410091  add x10, x10, #0x10
0x0666EDF0: 61ffff54  b.ne #0x666eddc
0x0666EDF4: a2008052  movz w2, #0x5
0x0666EDF8: e00314aa  mov x0, x20
0x0666EDFC: 459f2b97  bl #0x3156b10
0x0666EE00: 05000014  b #0x666ee14
0x0666EE04: 490140b9  ldr w9, [x10]
0x0666EE08: 29150011  add w9, w9, #5
0x0666EE0C: 08d1298b  add x8, x8, w9, sxtw #4
0x0666EE10: 00e10491  add x0, x8, #0x138
0x0666EE14: 080840a9  ldp x8, x2, [x0]
0x0666EE18: e00314aa  mov x0, x20
0x0666EE1C: e1031aaa  mov x1, x26
0x0666EE20: 00013fd6  blr x8
0x0666EE24: 210b40f9  ldr x1, [x25, #0x10]
0x0666EE28: 020b40f9  ldr x2, [x24, #0x10]
0x0666EE2C: e40240f9  ldr x4, [x23]
0x0666EE30: e00313aa  mov x0, x19
0x0666EE34: e3031aaa  mov x3, x26
0x0666EE38: f5ca5a97  bl #0x3d21a0c
0x0666EE3C: 210b40f9  ldr x1, [x25, #0x10]
0x0666EE40: 020b40f9  ldr x2, [x24, #0x10]
0x0666EE44: c40240f9  ldr x4, [x22]
0x0666EE48: e00313aa  mov x0, x19
0x0666EE4C: e3031aaa  mov x3, x26
0x0666EE50: efca5a97  bl #0x3d21a0c
0x0666EE54: e2e30291  add x2, sp, #0xb8
0x0666EE58: e00313aa  mov x0, x19
0x0666EE5C: e1031caa  mov x1, x28
0x0666EE60: cb020094  bl #0x666f98c
0x0666EE64: e03b00f9  str x0, [sp, #0x70]
0x0666EE68: 800700b4  cbz x0, #0x666ef58
0x0666EE6C: 742a40f9  ldr x20, [x19, #0x50]
0x0666EE70: 543d00b4  cbz x20, #0x666f618
0x0666EE74: 89800090  adrp x9, #0x767e000
0x0666EE78: 880240f9  ldr x8, [x20]
0x0666EE7C: f75f40f9  ldr x23, [sp, #0xb8]
0x0666EE80: 295142f9  ldr x9, [x9, #0x4a0]
0x0666EE84: 8a800090  adrp x10, #0x767e000
0x0666EE88: 210140f9  ldr x1, [x9]
0x0666EE8C: 095d4279  ldrh w9, [x8, #0x12e]
0x0666EE90: 4afd42f9  ldr x10, [x10, #0x5f8]
0x0666EE94: 560140f9  ldr x22, [x10]
0x0666EE98: 290100b4  cbz x9, #0x666eebc
0x0666EE9C: 0a5940f9  ldr x10, [x8, #0xb0]
0x0666EEA0: 4a210091  add x10, x10, #8
0x0666EEA4: 4b815ff8  ldur x11, [x10, #-8]
0x0666EEA8: 7f0101eb  cmp x11, x1
0x0666EEAC: 00010054  b.eq #0x666eecc
0x0666EEB0: 290500f1  subs x9, x9, #1
0x0666EEB4: 4a410091  add x10, x10, #0x10
0x0666EEB8: 61ffff54  b.ne #0x666eea4
0x0666EEBC: e00314aa  mov x0, x20
0x0666EEC0: e2031f2a  mov w2, wzr
0x0666EEC4: 139f2b97  bl #0x3156b10
0x0666EEC8: 04000014  b #0x666eed8
0x0666EECC: 490180b9  ldrsw x9, [x10]
0x0666EED0: 0811098b  add x8, x8, x9, lsl #4
0x0666EED4: 00e10491  add x0, x8, #0x138
0x0666EED8: 081440a9  ldp x8, x5, [x0]
0x0666EEDC: e23b40f9  ldr x2, [sp, #0x70]
0x0666EEE0: e00314aa  mov x0, x20
0x0666EEE4: e10316aa  mov x1, x22
0x0666EEE8: e30317aa  mov x3, x23
0x0666EEEC: e4031faa  mov x4, xzr
0x0666EEF0: 00013fd6  blr x8
0x0666EEF4: 353900b4  cbz x21, #0x666f618
0x0666EEF8: 89800090  adrp x9, #0x767e000
0x0666EEFC: aa1e40b9  ldr w10, [x21, #0x1c]
0x0666EF00: a80a40f9  ldr x8, [x21, #0x10]
0x0666EF04: 295542f9  ldr x9, [x9, #0x4a8]
0x0666EF08: 4a050011  add w10, w10, #1
0x0666EF0C: 290140f9  ldr x9, [x9]
0x0666EF10: aa1e00b9  str w10, [x21, #0x1c]
0x0666EF14: 283800b4  cbz x8, #0x666f618
0x0666EF18: aa1a80b9  ldrsw x10, [x21, #0x18]
0x0666EF1C: 0b1940b9  ldr w11, [x8, #0x18]
0x0666EF20: e10300aa  mov x1, x0
0x0666EF24: 5f010b6b  cmp w10, w11
0x0666EF28: e2000054  b.hs #0x666ef44
0x0666EF2C: 49050011  add w9, w10, #1
0x0666EF30: 000d0a8b  add x0, x8, x10, lsl #3
0x0666EF34: a91a00b9  str w9, [x21, #0x18]
0x0666EF38: 010c02f8  str x1, [x0, #0x20]!
0x0666EF3C: a2462c97  bl #0x31809c4
0x0666EF40: 06000014  b #0x666ef58
0x0666EF44: 281140f9  ldr x8, [x9, #0x20]
0x0666EF48: e00315aa  mov x0, x21
0x0666EF4C: 086140f9  ldr x8, [x8, #0xc0]
0x0666EF50: 023940f9  ldr x2, [x8, #0x70]
0x0666EF54: 46556797  bl #0x404446c
0x0666EF58: 604a40f9  ldr x0, [x19, #0x90]
0x0666EF5C: e03500b4  cbz x0, #0x666f618
0x0666EF60: e2c30291  add x2, sp, #0xb0
0x0666EF64: e1031caa  mov x1, x28
0x0666EF68: e3031faa  mov x3, xzr
0x0666EF6C: 6d59fc97  bl #0x6585520
0x0666EF70: f403002a  mov w20, w0
0x0666EF74: 600b0036  tbz w0, #0, #0x666f0e0
0x0666EF78: 772240f9  ldr x23, [x19, #0x40]
0x0666EF7C: f73400b4  cbz x23, #0x666f618
0x0666EF80: e80240f9  ldr x8, [x23]
0x0666EF84: 6a800090  adrp x10, #0x767a000
0x0666EF88: 095d4279  ldrh w9, [x8, #0x12e]
0x0666EF8C: 4a4d42f9  ldr x10, [x10, #0x498]
0x0666EF90: 410140f9  ldr x1, [x10]
0x0666EF94: 290100b4  cbz x9, #0x666efb8
0x0666EF98: 0a5940f9  ldr x10, [x8, #0xb0]
0x0666EF9C: 4a210091  add x10, x10, #8
0x0666EFA0: 4b815ff8  ldur x11, [x10, #-8]
0x0666EFA4: 7f0101eb  cmp x11, x1
0x0666EFA8: 00010054  b.eq #0x666efc8
0x0666EFAC: 290500f1  subs x9, x9, #1
0x0666EFB0: 4a410091  add x10, x10, #0x10
0x0666EFB4: 61ffff54  b.ne #0x666efa0
0x0666EFB8: 82028052  movz w2, #0x14
0x0666EFBC: e00317aa  mov x0, x23
0x0666EFC0: d49e2b97  bl #0x3156b10
0x0666EFC4: 05000014  b #0x666efd8
0x0666EFC8: 490140b9  ldr w9, [x10]
0x0666EFCC: 29510011  add w9, w9, #0x14
0x0666EFD0: 08d1298b  add x8, x8, w9, sxtw #4
0x0666EFD4: 00e10491  add x0, x8, #0x138
0x0666EFD8: 080840a9  ldp x8, x2, [x0]
0x0666EFDC: e00317aa  mov x0, x23
0x0666EFE0: e1031caa  mov x1, x28
0x0666EFE4: 00013fd6  blr x8
0x0666EFE8: 772a40f9  ldr x23, [x19, #0x50]
0x0666EFEC: 773100b4  cbz x23, #0x666f618
0x0666EFF0: 89800090  adrp x9, #0x767e000
0x0666EFF4: e80240f9  ldr x8, [x23]
0x0666EFF8: f65b40f9  ldr x22, [sp, #0xb0]
0x0666EFFC: 295142f9  ldr x9, [x9, #0x4a0]
0x0666F000: 6a8000f0  adrp x10, #0x767e000
0x0666F004: fb0300aa  mov x27, x0
0x0666F008: 210140f9  ldr x1, [x9]
0x0666F00C: 095d4279  ldrh w9, [x8, #0x12e]
0x0666F010: 4afd42f9  ldr x10, [x10, #0x5f8]
0x0666F014: 5d0140f9  ldr x29, [x10]
0x0666F018: 290100b4  cbz x9, #0x666f03c
0x0666F01C: 0a5940f9  ldr x10, [x8, #0xb0]
0x0666F020: 4a210091  add x10, x10, #8
0x0666F024: 4b815ff8  ldur x11, [x10, #-8]
0x0666F028: 7f0101eb  cmp x11, x1
0x0666F02C: 00010054  b.eq #0x666f04c
0x0666F030: 290500f1  subs x9, x9, #1
0x0666F034: 4a410091  add x10, x10, #0x10
0x0666F038: 61ffff54  b.ne #0x666f024
0x0666F03C: e00317aa  mov x0, x23
0x0666F040: e2031f2a  mov w2, wzr
0x0666F044: b39e2b97  bl #0x3156b10
0x0666F048: 04000014  b #0x666f058
0x0666F04C: 490180b9  ldrsw x9, [x10]
0x0666F050: 0811098b  add x8, x8, x9, lsl #4
0x0666F054: 00e10491  add x0, x8, #0x138
0x0666F058: 081440a9  ldp x8, x5, [x0]
0x0666F05C: e00317aa  mov x0, x23
0x0666F060: e1031daa  mov x1, x29
0x0666F064: e2031baa  mov x2, x27
0x0666F068: e30316aa  mov x3, x22
0x0666F06C: e4031faa  mov x4, xzr
0x0666F070: 00013fd6  blr x8
0x0666F074: 352d00b4  cbz x21, #0x666f618
0x0666F078: 698000f0  adrp x9, #0x767e000
0x0666F07C: aa1e40b9  ldr w10, [x21, #0x1c]
0x0666F080: a80a40f9  ldr x8, [x21, #0x10]
0x0666F084: 295542f9  ldr x9, [x9, #0x4a8]
0x0666F088: fd3340f9  ldr x29, [sp, #0x60]
0x0666F08C: fb4340f9  ldr x27, [sp, #0x80]
0x0666F090: 4a050011  add w10, w10, #1
0x0666F094: 290140f9  ldr x9, [x9]
0x0666F098: aa1e00b9  str w10, [x21, #0x1c]
0x0666F09C: e82b00b4  cbz x8, #0x666f618
0x0666F0A0: aa1a80b9  ldrsw x10, [x21, #0x18]
0x0666F0A4: 0b1940b9  ldr w11, [x8, #0x18]
0x0666F0A8: e10300aa  mov x1, x0
0x0666F0AC: 5f010b6b  cmp w10, w11
0x0666F0B0: e2000054  b.hs #0x666f0cc
0x0666F0B4: 49050011  add w9, w10, #1
0x0666F0B8: 000d0a8b  add x0, x8, x10, lsl #3
0x0666F0BC: a91a00b9  str w9, [x21, #0x18]
0x0666F0C0: 010c02f8  str x1, [x0, #0x20]!
0x0666F0C4: 40462c97  bl #0x31809c4
0x0666F0C8: 06000014  b #0x666f0e0
0x0666F0CC: 281140f9  ldr x8, [x9, #0x20]
0x0666F0D0: e00315aa  mov x0, x21
0x0666F0D4: 086140f9  ldr x8, [x8, #0xc0]
0x0666F0D8: 023940f9  ldr x2, [x8, #0x70]
0x0666F0DC: e4546797  bl #0x404446c
0x0666F0E0: e10319aa  mov x1, x25
0x0666F0E4: e20318aa  mov x2, x24
0x0666F0E8: e3031aaa  mov x3, x26
0x0666F0EC: 76020094  bl #0x666fac4
0x0666F0F0: 684240f9  ldr x8, [x19, #0x80]
0x0666F0F4: 280100b4  cbz x8, #0x666f118
0x0666F0F8: 090d40f9  ldr x9, [x8, #0x18]
0x0666F0FC: 002140f9  ldr x0, [x8, #0x40]
0x0666F100: 051540f9  ldr x5, [x8, #0x28]
0x0666F104: e21740f9  ldr x2, [sp, #0x28]
0x0666F108: e33f40f9  ldr x3, [sp, #0x78]
0x0666F10C: e1031daa  mov x1, x29
0x0666F110: e4031baa  mov x4, x27
0x0666F114: 20013fd6  blr x9
0x0666F118: f85f45a9  ldp x24, x23, [sp, #0x50]
0x0666F11C: f72700b4  cbz x23, #0x666f618
0x0666F120: 768000b0  adrp x22, #0x767c000
0x0666F124: e80240f9  ldr x8, [x23]
0x0666F128: d62641f9  ldr x22, [x22, #0x248]
0x0666F12C: 095d4279  ldrh w9, [x8, #0x12e]
0x0666F130: c10240f9  ldr x1, [x22]
0x0666F134: 290100b4  cbz x9, #0x666f158
0x0666F138: 0a5940f9  ldr x10, [x8, #0xb0]
0x0666F13C: 4a210091  add x10, x10, #8
0x0666F140: 4b815ff8  ldur x11, [x10, #-8]
0x0666F144: 7f0101eb  cmp x11, x1
0x0666F148: 00010054  b.eq #0x666f168
0x0666F14C: 290500f1  subs x9, x9, #1
0x0666F150: 4a410091  add x10, x10, #0x10
0x0666F154: 61ffff54  b.ne #0x666f140
0x0666F158: e2018052  movz w2, #0xf
0x0666F15C: e00317aa  mov x0, x23
0x0666F160: 6c9e2b97  bl #0x3156b10
0x0666F164: 05000014  b #0x666f178
0x0666F168: 490140b9  ldr w9, [x10]
0x0666F16C: 293d0011  add w9, w9, #0xf
0x0666F170: 08d1298b  add x8, x8, w9, sxtw #4
0x0666F174: 00e10491  add x0, x8, #0x138
0x0666F178: 080440a9  ldp x8, x1, [x0]
0x0666F17C: e00317aa  mov x0, x23
0x0666F180: 00013fd6  blr x8
0x0666F184: 1f100071  cmp w0, #4
0x0666F188: a1030054  b.ne #0x666f1fc
0x0666F18C: 782400b4  cbz x24, #0x666f618
0x0666F190: 080340f9  ldr x8, [x24]
0x0666F194: c10240f9  ldr x1, [x22]
0x0666F198: 095d4279  ldrh w9, [x8, #0x12e]
0x0666F19C: 290100b4  cbz x9, #0x666f1c0
0x0666F1A0: 0a5940f9  ldr x10, [x8, #0xb0]
0x0666F1A4: 4a210091  add x10, x10, #8
0x0666F1A8: 4b815ff8  ldur x11, [x10, #-8]
0x0666F1AC: 7f0101eb  cmp x11, x1
0x0666F1B0: 00010054  b.eq #0x666f1d0
0x0666F1B4: 290500f1  subs x9, x9, #1
0x0666F1B8: 4a410091  add x10, x10, #0x10
0x0666F1BC: 61ffff54  b.ne #0x666f1a8
0x0666F1C0: e2018052  movz w2, #0xf
0x0666F1C4: e00318aa  mov x0, x24
0x0666F1C8: 529e2b97  bl #0x3156b10
0x0666F1CC: 05000014  b #0x666f1e0
0x0666F1D0: 490140b9  ldr w9, [x10]
0x0666F1D4: 293d0011  add w9, w9, #0xf
0x0666F1D8: 08d1298b  add x8, x8, w9, sxtw #4
0x0666F1DC: 00e10491  add x0, x8, #0x138
0x0666F1E0: 080440a9  ldp x8, x1, [x0]
0x0666F1E4: e00318aa  mov x0, x24
0x0666F1E8: 00013fd6  blr x8
0x0666F1EC: 1f100071  cmp w0, #4
0x0666F1F0: 61000054  b.ne #0x666f1fc
0x0666F1F4: 28008052  movz w8, #0x1
0x0666F1F8: 36000014  b #0x666f2d0
0x0666F1FC: e80240f9  ldr x8, [x23]
0x0666F200: c10240f9  ldr x1, [x22]
0x0666F204: 095d4279  ldrh w9, [x8, #0x12e]
0x0666F208: 290100b4  cbz x9, #0x666f22c
0x0666F20C: 0a5940f9  ldr x10, [x8, #0xb0]
0x0666F210: 4a210091  add x10, x10, #8
0x0666F214: 4b815ff8  ldur x11, [x10, #-8]
0x0666F218: 7f0101eb  cmp x11, x1
0x0666F21C: 00010054  b.eq #0x666f23c
0x0666F220: 290500f1  subs x9, x9, #1
0x0666F224: 4a410091  add x10, x10, #0x10
0x0666F228: 61ffff54  b.ne #0x666f214
0x0666F22C: e2018052  movz w2, #0xf
0x0666F230: e00317aa  mov x0, x23
0x0666F234: 379e2b97  bl #0x3156b10
0x0666F238: 05000014  b #0x666f24c
0x0666F23C: 490140b9  ldr w9, [x10]
0x0666F240: 293d0011  add w9, w9, #0xf
0x0666F244: 08d1298b  add x8, x8, w9, sxtw #4
0x0666F248: 00e10491  add x0, x8, #0x138
0x0666F24C: 080440a9  ldp x8, x1, [x0]
0x0666F250: e00317aa  mov x0, x23
0x0666F254: 00013fd6  blr x8
0x0666F258: 1f200071  cmp w0, #8
0x0666F25C: 41020054  b.ne #0x666f2a4
0x0666F260: d81d00b4  cbz x24, #0x666f618
0x0666F264: 080340f9  ldr x8, [x24]
0x0666F268: c10240f9  ldr x1, [x22]
0x0666F26C: 095d4279  ldrh w9, [x8, #0x12e]
0x0666F270: 290100b4  cbz x9, #0x666f294
0x0666F274: 0a5940f9  ldr x10, [x8, #0xb0]
0x0666F278: 4a210091  add x10, x10, #8
0x0666F27C: 4b815ff8  ldur x11, [x10, #-8]
0x0666F280: 7f0101eb  cmp x11, x1
0x0666F284: 40010054  b.eq #0x666f2ac
0x0666F288: 290500f1  subs x9, x9, #1
0x0666F28C: 4a410091  add x10, x10, #0x10
0x0666F290: 61ffff54  b.ne #0x666f27c
0x0666F294: e2018052  movz w2, #0xf
0x0666F298: e00318aa  mov x0, x24
0x0666F29C: 1d9e2b97  bl #0x3156b10
0x0666F2A0: 07000014  b #0x666f2bc
0x0666F2A4: e8031f2a  mov w8, wzr
0x0666F2A8: 0a000014  b #0x666f2d0
0x0666F2AC: 490140b9  ldr w9, [x10]
0x0666F2B0: 293d0011  add w9, w9, #0xf
0x0666F2B4: 08d1298b  add x8, x8, w9, sxtw #4
0x0666F2B8: 00e10491  add x0, x8, #0x138
0x0666F2BC: 080440a9  ldp x8, x1, [x0]
0x0666F2C0: e00318aa  mov x0, x24
0x0666F2C4: 00013fd6  blr x8
0x0666F2C8: 1f200071  cmp w0, #8
0x0666F2CC: e8179f1a  cset w8, eq
0x0666F2D0: e94740b9  ldr w9, [sp, #0x44]
0x0666F2D4: 29010012  and w9, w9, #1
0x0666F2D8: 0801092a  orr w8, w8, w9
0x0666F2DC: e8030034  cbz w8, #0x666f358
0x0666F2E0: 603640f9  ldr x0, [x19, #0x68]
0x0666F2E4: a01900b4  cbz x0, #0x666f618
0x0666F2E8: d78400b0  adrp x23, #0x7708000
0x0666F2EC: 761640f9  ldr x22, [x19, #0x28]
0x0666F2F0: f78a40f9  ldr x23, [x23, #0x110]
0x0666F2F4: e86f40b9  ldr w8, [sp, #0x6c]
0x0666F2F8: 1f010071  cmp w8, #0
0x0666F2FC: f8079f1a  cset w24, ne
0x0666F300: bce0ff97  bl #0x66675f0
0x0666F304: e80240f9  ldr x8, [x23]
0x0666F308: f903002a  mov w25, w0
0x0666F30C: e00308aa  mov x0, x8
0x0666F310: 64462c97  bl #0x3180ca0
0x0666F314: e40747a9  ldp x4, x1, [sp, #0x70]
0x0666F318: e76b40b9  ldr w7, [sp, #0x68]
0x0666F31C: 85020012  and w5, w20, #1
0x0666F320: e2031baa  mov x2, x27
0x0666F324: e3031daa  mov x3, x29
0x0666F328: e603182a  mov w6, w24
0x0666F32C: f70300aa  mov x23, x0
0x0666F330: ff0700f9  str xzr, [sp, #8]
0x0666F334: f90300b9  str w25, [sp]
0x0666F338: 10f40394  bl #0x676c378
0x0666F33C: f61600b4  cbz x22, #0x666f618
0x0666F340: c88400b0  adrp x8, #0x7708000
0x0666F344: 089140f9  ldr x8, [x8, #0x120]
0x0666F348: e00316aa  mov x0, x22
0x0666F34C: e10317aa  mov x1, x23
0x0666F350: 020140f9  ldr x2, [x8]
0x0666F354: 86d65c97  bl #0x3da4d6c
0x0666F358: e84340b9  ldr w8, [sp, #0x40]
0x0666F35C: 88020035  cbnz w8, #0x666f3ac
0x0666F360: dc1500b4  cbz x28, #0x666f618
0x0666F364: 888400b0  adrp x8, #0x7700000
0x0666F368: 761640f9  ldr x22, [x19, #0x28]
0x0666F36C: 981b40f9  ldr x24, [x28, #0x30]
0x0666F370: 085145f9  ldr x8, [x8, #0xaa0]
0x0666F374: 000140f9  ldr x0, [x8]
0x0666F378: 4a462c97  bl #0x3180ca0
0x0666F37C: 21008052  movz w1, #0x1
0x0666F380: e20318aa  mov x2, x24
0x0666F384: e3031faa  mov x3, xzr
0x0666F388: f70300aa  mov x23, x0
0x0666F38C: 40f60394  bl #0x676cc8c
0x0666F390: 561400b4  cbz x22, #0x666f618
0x0666F394: 888400b0  adrp x8, #0x7700000
0x0666F398: 084d45f9  ldr x8, [x8, #0xa98]
0x0666F39C: e00316aa  mov x0, x22
0x0666F3A0: e10317aa  mov x1, x23
0x0666F3A4: 020140f9  ldr x2, [x8]
0x0666F3A8: 71d65c97  bl #0x3da4d6c
0x0666F3AC: 603640f9  ldr x0, [x19, #0x68]
0x0666F3B0: 401300b4  cbz x0, #0x666f618
0x0666F3B4: 761640f9  ldr x22, [x19, #0x28]
0x0666F3B8: 8ee0ff97  bl #0x66675f0
0x0666F3BC: fc1200b4  cbz x28, #0x666f618
0x0666F3C0: c88400b0  adrp x8, #0x7708000
0x0666F3C4: 087940f9  ldr x8, [x8, #0xf0]
0x0666F3C8: f803002a  mov w24, w0
0x0666F3CC: 9b1b40f9  ldr x27, [x28, #0x30]
0x0666F3D0: 000140f9  ldr x0, [x8]
0x0666F3D4: e86f40b9  ldr w8, [sp, #0x6c]
0x0666F3D8: 1f010071  cmp w8, #0
0x0666F3DC: f9079f1a  cset w25, ne
0x0666F3E0: 30462c97  bl #0x3180ca0
0x0666F3E4: fb7f01a9  stp x27, xzr, [sp, #0x10]
0x0666F3E8: fb2740f9  ldr x27, [sp, #0x48]
0x0666F3EC: e18b47a9  ldp x1, x2, [sp, #0x78]
0x0666F3F0: e43b40f9  ldr x4, [sp, #0x70]
0x0666F3F4: e76b40b9  ldr w7, [sp, #0x68]
0x0666F3F8: 85020012  and w5, w20, #1
0x0666F3FC: e3031daa  mov x3, x29
0x0666F400: e603192a  mov w6, w25
0x0666F404: f70300aa  mov x23, x0
0x0666F408: fb0700f9  str x27, [sp, #8]
0x0666F40C: f80300b9  str w24, [sp]
0x0666F410: 9df10394  bl #0x676ba84
0x0666F414: 361000b4  cbz x22, #0x666f618
0x0666F418: c88400b0  adrp x8, #0x7708000
0x0666F41C: 088d40f9  ldr x8, [x8, #0x118]
0x0666F420: e00316aa  mov x0, x22
0x0666F424: e10317aa  mov x1, x23
0x0666F428: 020140f9  ldr x2, [x8]
0x0666F42C: 50d65c97  bl #0x3da4d6c
0x0666F430: 742a40f9  ldr x20, [x19, #0x50]
0x0666F434: 340f00b4  cbz x20, #0x666f618
0x0666F438: 698000f0  adrp x9, #0x767e000
0x0666F43C: 880240f9  ldr x8, [x20]
0x0666F440: 295142f9  ldr x9, [x9, #0x4a0]
0x0666F444: 6a8000f0  adrp x10, #0x767e000
0x0666F448: 210140f9  ldr x1, [x9]
0x0666F44C: 095d4279  ldrh w9, [x8, #0x12e]
0x0666F450: 4afd42f9  ldr x10, [x10, #0x5f8]
0x0666F454: 560140f9  ldr x22, [x10]
0x0666F458: 290100b4  cbz x9, #0x666f47c
0x0666F45C: 0a5940f9  ldr x10, [x8, #0xb0]
0x0666F460: 4a210091  add x10, x10, #8
0x0666F464: 4b815ff8  ldur x11, [x10, #-8]
0x0666F468: 7f0101eb  cmp x11, x1
0x0666F46C: 00010054  b.eq #0x666f48c
0x0666F470: 290500f1  subs x9, x9, #1
0x0666F474: 4a410091  add x10, x10, #0x10
0x0666F478: 61ffff54  b.ne #0x666f464
0x0666F47C: e00314aa  mov x0, x20
0x0666F480: e2031f2a  mov w2, wzr
0x0666F484: a39d2b97  bl #0x3156b10
0x0666F488: 04000014  b #0x666f498
0x0666F48C: 490180b9  ldrsw x9, [x10]
0x0666F490: 0811098b  add x8, x8, x9, lsl #4
0x0666F494: 00e10491  add x0, x8, #0x138
0x0666F498: 081440a9  ldp x8, x5, [x0]
0x0666F49C: e00314aa  mov x0, x20
0x0666F4A0: e10316aa  mov x1, x22
0x0666F4A4: e2031daa  mov x2, x29
0x0666F4A8: e3031aaa  mov x3, x26
0x0666F4AC: e4031faa  mov x4, xzr
0x0666F4B0: 00013fd6  blr x8
0x0666F4B4: 350b00b4  cbz x21, #0x666f618
0x0666F4B8: 768000f0  adrp x22, #0x767e000
0x0666F4BC: aa1e40b9  ldr w10, [x21, #0x1c]
0x0666F4C0: a80a40f9  ldr x8, [x21, #0x10]
0x0666F4C4: d65642f9  ldr x22, [x22, #0x4a8]
0x0666F4C8: 4a050011  add w10, w10, #1
0x0666F4CC: c90240f9  ldr x9, [x22]
0x0666F4D0: aa1e00b9  str w10, [x21, #0x1c]
0x0666F4D4: 280a00b4  cbz x8, #0x666f618
0x0666F4D8: aa1a80b9  ldrsw x10, [x21, #0x18]
0x0666F4DC: 0b1940b9  ldr w11, [x8, #0x18]
0x0666F4E0: f40300aa  mov x20, x0
0x0666F4E4: 5f010b6b  cmp w10, w11
0x0666F4E8: 02010054  b.hs #0x666f508
0x0666F4EC: e11f40f9  ldr x1, [sp, #0x38]
0x0666F4F0: 49050011  add w9, w10, #1
0x0666F4F4: 000d0a8b  add x0, x8, x10, lsl #3
0x0666F4F8: a91a00b9  str w9, [x21, #0x18]
0x0666F4FC: 010c02f8  str x1, [x0, #0x20]!
0x0666F500: 31452c97  bl #0x31809c4
0x0666F504: 07000014  b #0x666f520
0x0666F508: 281140f9  ldr x8, [x9, #0x20]
0x0666F50C: e11f40f9  ldr x1, [sp, #0x38]
0x0666F510: e00315aa  mov x0, x21
0x0666F514: 086140f9  ldr x8, [x8, #0xc0]
0x0666F518: 023940f9  ldr x2, [x8, #0x70]
0x0666F51C: d4536797  bl #0x404446c
0x0666F520: aa1e40b9  ldr w10, [x21, #0x1c]
0x0666F524: a80a40f9  ldr x8, [x21, #0x10]
0x0666F528: c90240f9  ldr x9, [x22]
0x0666F52C: 4a050011  add w10, w10, #1
0x0666F530: aa1e00b9  str w10, [x21, #0x1c]
0x0666F534: 280700b4  cbz x8, #0x666f618
0x0666F538: aa1a80b9  ldrsw x10, [x21, #0x18]
0x0666F53C: 0b1940b9  ldr w11, [x8, #0x18]
0x0666F540: 5f010b6b  cmp w10, w11
0x0666F544: 02010054  b.hs #0x666f564
0x0666F548: e11b40f9  ldr x1, [sp, #0x30]
0x0666F54C: 49050011  add w9, w10, #1
0x0666F550: 000d0a8b  add x0, x8, x10, lsl #3
0x0666F554: a91a00b9  str w9, [x21, #0x18]
0x0666F558: 010c02f8  str x1, [x0, #0x20]!
0x0666F55C: 1a452c97  bl #0x31809c4
0x0666F560: 07000014  b #0x666f57c
0x0666F564: 281140f9  ldr x8, [x9, #0x20]
0x0666F568: e11b40f9  ldr x1, [sp, #0x30]
0x0666F56C: e00315aa  mov x0, x21
0x0666F570: 086140f9  ldr x8, [x8, #0xc0]
0x0666F574: 023940f9  ldr x2, [x8, #0x70]
0x0666F578: bd536797  bl #0x404446c
0x0666F57C: aa1e40b9  ldr w10, [x21, #0x1c]
0x0666F580: a80a40f9  ldr x8, [x21, #0x10]
0x0666F584: c90240f9  ldr x9, [x22]
0x0666F588: 4a050011  add w10, w10, #1
0x0666F58C: aa1e00b9  str w10, [x21, #0x1c]
0x0666F590: 480400b4  cbz x8, #0x666f618
0x0666F594: aa1a80b9  ldrsw x10, [x21, #0x18]
0x0666F598: 0b1940b9  ldr w11, [x8, #0x18]
0x0666F59C: 5f010b6b  cmp w10, w11
0x0666F5A0: 02010054  b.hs #0x666f5c0
0x0666F5A4: 49050011  add w9, w10, #1
0x0666F5A8: 000d0a8b  add x0, x8, x10, lsl #3
0x0666F5AC: a91a00b9  str w9, [x21, #0x18]
0x0666F5B0: 140c02f8  str x20, [x0, #0x20]!
0x0666F5B4: e10314aa  mov x1, x20
0x0666F5B8: 03452c97  bl #0x31809c4
0x0666F5BC: 07000014  b #0x666f5d8
0x0666F5C0: 281140f9  ldr x8, [x9, #0x20]
0x0666F5C4: e00315aa  mov x0, x21
0x0666F5C8: e10314aa  mov x1, x20
0x0666F5CC: 086140f9  ldr x8, [x8, #0xc0]
0x0666F5D0: 023940f9  ldr x2, [x8, #0x70]
0x0666F5D4: a6536797  bl #0x404446c
0x0666F5D8: 603a40f9  ldr x0, [x19, #0x70]
0x0666F5DC: e00100b4  cbz x0, #0x666f618
0x0666F5E0: c88400b0  adrp x8, #0x7708000
0x0666F5E4: 088540f9  ldr x8, [x8, #0x108]
0x0666F5E8: e10315aa  mov x1, x21
0x0666F5EC: e2031baa  mov x2, x27
0x0666F5F0: 030140f9  ldr x3, [x8]
0x0666F5F4: 70455b97  bl #0x3d40bb4
0x0666F5F8: f44f52a9  ldp x20, x19, [sp, #0x120]
0x0666F5FC: f65751a9  ldp x22, x21, [sp, #0x110]
0x0666F600: f85f50a9  ldp x24, x23, [sp, #0x100]
0x0666F604: fa674fa9  ldp x26, x25, [sp, #0xf0]
0x0666F608: fc6f4ea9  ldp x28, x27, [sp, #0xe0]
0x0666F60C: fd7b4da9  ldp x29, x30, [sp, #0xd0]
0x0666F610: ffc30491  add sp, sp, #0x130
0x0666F614: c0035fd6  ret
0x0666F618: a5452c97  bl #0x3180cac

; RVA 0x666F61C | private ValueTuple<bool, ItemNotificationData, ItemNotificationData> HandleStackingJokers(MergeComponent firstItem, IMergeItem firstMergeItem, MergeComponent secondItem, IMergeItem secondMergeItem, ref BoardItemPosition boardItemPosition) { }
; bytes=880 sha256=36e218c7869756130c2db493b936ddb6c53bab6205ff2844e6776d144ce6246b status=arm64_complete_bound indexed_start=True
0x0666F61C: ffc301d1  sub sp, sp, #0x70
0x0666F620: fd7b01a9  stp x29, x30, [sp, #0x10]
0x0666F624: fc6f02a9  stp x28, x27, [sp, #0x20]
0x0666F628: fa6703a9  stp x26, x25, [sp, #0x30]
0x0666F62C: f85f04a9  stp x24, x23, [sp, #0x40]
0x0666F630: f65705a9  stp x22, x21, [sp, #0x50]
0x0666F634: f44f06a9  stp x20, x19, [sp, #0x60]
0x0666F638: d4b500b0  adrp x20, #0x7d28000
0x0666F63C: 89524439  ldrb w9, [x20, #0x114]
0x0666F640: fa0305aa  mov x26, x5
0x0666F644: f90304aa  mov x25, x4
0x0666F648: f50303aa  mov x21, x3
0x0666F64C: f70302aa  mov x23, x2
0x0666F650: f80301aa  mov x24, x1
0x0666F654: f60300aa  mov x22, x0
0x0666F658: f30308aa  mov x19, x8
0x0666F65C: 09030037  tbnz w9, #0, #0x666f6bc
0x0666F660: 40830090  adrp x0, #0x76d7000
0x0666F664: 00dc42f9  ldr x0, [x0, #0x5b8]
0x0666F668: ec442c97  bl #0x3180a18
0x0666F66C: a08300f0  adrp x0, #0x76e6000
0x0666F670: 00e444f9  ldr x0, [x0, #0x9c8]
0x0666F674: e9442c97  bl #0x3180a18
0x0666F678: 608000f0  adrp x0, #0x767e000
0x0666F67C: 005042f9  ldr x0, [x0, #0x4a0]
0x0666F680: e6442c97  bl #0x3180a18
0x0666F684: c08400b0  adrp x0, #0x7708000
0x0666F688: 00a840f9  ldr x0, [x0, #0x150]
0x0666F68C: e3442c97  bl #0x3180a18
0x0666F690: c08400b0  adrp x0, #0x7708000
0x0666F694: 00ac40f9  ldr x0, [x0, #0x158]
0x0666F698: e0442c97  bl #0x3180a18
0x0666F69C: 408000b0  adrp x0, #0x7678000
0x0666F6A0: 00d047f9  ldr x0, [x0, #0xfa0]
0x0666F6A4: dd442c97  bl #0x3180a18
0x0666F6A8: e07f0090  adrp x0, #0x766b000
0x0666F6AC: 00b040f9  ldr x0, [x0, #0x160]
0x0666F6B0: da442c97  bl #0x3180a18
0x0666F6B4: 28008052  movz w8, #0x1
0x0666F6B8: 88520439  strb w8, [x20, #0x114]
0x0666F6BC: 781600b4  cbz x24, #0x666f988
0x0666F6C0: b48300f0  adrp x20, #0x76e6000
0x0666F6C4: 94e644f9  ldr x20, [x20, #0x9c8]
0x0666F6C8: e00318aa  mov x0, x24
0x0666F6CC: 810240f9  ldr x1, [x20]
0x0666F6D0: 53f85597  bl #0x3bed81c
0x0666F6D4: b51500b4  cbz x21, #0x666f988
0x0666F6D8: 810240f9  ldr x1, [x20]
0x0666F6DC: fc0300aa  mov x28, x0
0x0666F6E0: e00315aa  mov x0, x21
0x0666F6E4: 4ef85597  bl #0x3bed81c
0x0666F6E8: fb0300aa  mov x27, x0
0x0666F6EC: 5c0100b4  cbz x28, #0x666f714
0x0666F6F0: e00317aa  mov x0, x23
0x0666F6F4: e1031faa  mov x1, xzr
0x0666F6F8: 86b80e94  bl #0x6a1d910
0x0666F6FC: c0000036  tbz w0, #0, #0x666f714
0x0666F700: e0031caa  mov x0, x28
0x0666F704: e1031faa  mov x1, xzr
0x0666F708: f3390a94  bl #0x68fded4
0x0666F70C: 1d000012  and w29, w0, #1
0x0666F710: 02000014  b #0x666f718
0x0666F714: fd031f2a  mov w29, wzr
0x0666F718: f90700f9  str x25, [sp, #8]
0x0666F71C: 3b0100b4  cbz x27, #0x666f740
0x0666F720: e00319aa  mov x0, x25
0x0666F724: e1031faa  mov x1, xzr
0x0666F728: 7ab80e94  bl #0x6a1d910
0x0666F72C: a0000036  tbz w0, #0, #0x666f740
0x0666F730: e0031baa  mov x0, x27
0x0666F734: e1031faa  mov x1, xzr
0x0666F738: e7390a94  bl #0x68fded4
0x0666F73C: 02000014  b #0x666f744
0x0666F740: e0031f2a  mov w0, wzr
0x0666F744: 59830090  adrp x25, #0x76d7000
0x0666F748: d48400b0  adrp x20, #0x7708000
0x0666F74C: 39df42f9  ldr x25, [x25, #0x5b8]
0x0666F750: 94ae40f9  ldr x20, [x20, #0x158]
0x0666F754: e00700b9  str w0, [sp, #4]
0x0666F758: 1d030034  cbz w29, #0x666f7b8
0x0666F75C: 7c1100b4  cbz x28, #0x666f988
0x0666F760: 21008052  movz w1, #0x1
0x0666F764: e0031caa  mov x0, x28
0x0666F768: e2031faa  mov x2, xzr
0x0666F76C: d7390a94  bl #0x68fdec8
0x0666F770: 210340f9  ldr x1, [x25]
0x0666F774: da3640f9  ldr x26, [x22, #0x68]
0x0666F778: e00315aa  mov x0, x21
0x0666F77C: 28f85597  bl #0x3bed81c
0x0666F780: 5a1000b4  cbz x26, #0x666f988
0x0666F784: 480340f9  ldr x8, [x26]
0x0666F788: 820240f9  ldr x2, [x20]
0x0666F78C: e10300aa  mov x1, x0
0x0666F790: 23008052  movz w3, #0x1
0x0666F794: 090d41f9  ldr x9, [x8, #0x218]
0x0666F798: 051141f9  ldr x5, [x8, #0x220]
0x0666F79C: 24008052  movz w4, #0x1
0x0666F7A0: e0031aaa  mov x0, x26
0x0666F7A4: 3c008052  movz w28, #0x1
0x0666F7A8: 20013fd6  blr x9
0x0666F7AC: 488000b0  adrp x8, #0x7678000
0x0666F7B0: 08d147f9  ldr x8, [x8, #0xfa0]
0x0666F7B4: 1e000014  b #0x666f82c
0x0666F7B8: 40030036  tbz w0, #0, #0x666f820
0x0666F7BC: 210340f9  ldr x1, [x25]
0x0666F7C0: e00318aa  mov x0, x24
0x0666F7C4: 16f85597  bl #0x3bed81c
0x0666F7C8: 000e00b4  cbz x0, #0x666f988
0x0666F7CC: 081840f9  ldr x8, [x0, #0x30]
0x0666F7D0: 480300f9  str x8, [x26]
0x0666F7D4: bb0d00b4  cbz x27, #0x666f988
0x0666F7D8: 21008052  movz w1, #0x1
0x0666F7DC: e0031baa  mov x0, x27
0x0666F7E0: e2031faa  mov x2, xzr
0x0666F7E4: b9390a94  bl #0x68fdec8
0x0666F7E8: 210340f9  ldr x1, [x25]
0x0666F7EC: da3640f9  ldr x26, [x22, #0x68]
0x0666F7F0: e00318aa  mov x0, x24
0x0666F7F4: 0af85597  bl #0x3bed81c
0x0666F7F8: 9a0c00b4  cbz x26, #0x666f988
0x0666F7FC: 480340f9  ldr x8, [x26]
0x0666F800: 820240f9  ldr x2, [x20]
0x0666F804: e10300aa  mov x1, x0
0x0666F808: 23008052  movz w3, #0x1
0x0666F80C: 090d41f9  ldr x9, [x8, #0x218]
0x0666F810: 051141f9  ldr x5, [x8, #0x220]
0x0666F814: 24008052  movz w4, #0x1
0x0666F818: e0031aaa  mov x0, x26
0x0666F81C: 20013fd6  blr x9
0x0666F820: e87f0090  adrp x8, #0x766b000
0x0666F824: 08b140f9  ldr x8, [x8, #0x160]
0x0666F828: fc031f2a  mov w28, wzr
0x0666F82C: da2a40f9  ldr x26, [x22, #0x50]
0x0666F830: da0a00b4  cbz x26, #0x666f988
0x0666F834: 498000b0  adrp x9, #0x7678000
0x0666F838: ea7f0090  adrp x10, #0x766b000
0x0666F83C: 798000f0  adrp x25, #0x767e000
0x0666F840: 29d147f9  ldr x9, [x9, #0xfa0]
0x0666F844: 4ab140f9  ldr x10, [x10, #0x160]
0x0666F848: 395342f9  ldr x25, [x25, #0x4a0]
0x0666F84C: 1b0140f9  ldr x27, [x8]
0x0666F850: 480340f9  ldr x8, [x26]
0x0666F854: 3d0140f9  ldr x29, [x9]
0x0666F858: 540140f9  ldr x20, [x10]
0x0666F85C: 180b40f9  ldr x24, [x24, #0x10]
0x0666F860: 095d4279  ldrh w9, [x8, #0x12e]
0x0666F864: 210340f9  ldr x1, [x25]
0x0666F868: 290100b4  cbz x9, #0x666f88c
0x0666F86C: 0a5940f9  ldr x10, [x8, #0xb0]
0x0666F870: 4a210091  add x10, x10, #8
0x0666F874: 4b815ff8  ldur x11, [x10, #-8]
0x0666F878: 7f0101eb  cmp x11, x1
0x0666F87C: 00010054  b.eq #0x666f89c
0x0666F880: 290500f1  subs x9, x9, #1
0x0666F884: 4a410091  add x10, x10, #0x10
0x0666F888: 61ffff54  b.ne #0x666f874
0x0666F88C: e0031aaa  mov x0, x26
0x0666F890: e2031f2a  mov w2, wzr
0x0666F894: 9f9c2b97  bl #0x3156b10
0x0666F898: 04000014  b #0x666f8a8
0x0666F89C: 490180b9  ldrsw x9, [x10]
0x0666F8A0: 0811098b  add x8, x8, x9, lsl #4
0x0666F8A4: 00e10491  add x0, x8, #0x138
0x0666F8A8: 081440a9  ldp x8, x5, [x0]
0x0666F8AC: e0031aaa  mov x0, x26
0x0666F8B0: e1031baa  mov x1, x27
0x0666F8B4: e20317aa  mov x2, x23
0x0666F8B8: e30318aa  mov x3, x24
0x0666F8BC: e4031faa  mov x4, xzr
0x0666F8C0: 00013fd6  blr x8
0x0666F8C4: d72a40f9  ldr x23, [x22, #0x50]
0x0666F8C8: 170600b4  cbz x23, #0x666f988
0x0666F8CC: e80240f9  ldr x8, [x23]
0x0666F8D0: d88400b0  adrp x24, #0x7708000
0x0666F8D4: b50a40f9  ldr x21, [x21, #0x10]
0x0666F8D8: 210340f9  ldr x1, [x25]
0x0666F8DC: 095d4279  ldrh w9, [x8, #0x12e]
0x0666F8E0: 18ab40f9  ldr x24, [x24, #0x150]
0x0666F8E4: f60300aa  mov x22, x0
0x0666F8E8: 290100b4  cbz x9, #0x666f90c
0x0666F8EC: 0a5940f9  ldr x10, [x8, #0xb0]
0x0666F8F0: 4a210091  add x10, x10, #8
0x0666F8F4: 4b815ff8  ldur x11, [x10, #-8]
0x0666F8F8: 7f0101eb  cmp x11, x1
0x0666F8FC: 00010054  b.eq #0x666f91c
0x0666F900: 290500f1  subs x9, x9, #1
0x0666F904: 4a410091  add x10, x10, #0x10
0x0666F908: 61ffff54  b.ne #0x666f8f4
0x0666F90C: e00317aa  mov x0, x23
0x0666F910: e2031f2a  mov w2, wzr
0x0666F914: 7f9c2b97  bl #0x3156b10
0x0666F918: 04000014  b #0x666f928
0x0666F91C: 490180b9  ldrsw x9, [x10]
0x0666F920: 0811098b  add x8, x8, x9, lsl #4
0x0666F924: 00e10491  add x0, x8, #0x138
0x0666F928: e90740b9  ldr w9, [sp, #4]
0x0666F92C: 081440a9  ldp x8, x5, [x0]
0x0666F930: e20740f9  ldr x2, [sp, #8]
0x0666F934: e00317aa  mov x0, x23
0x0666F938: 39010072  ands w25, w9, #1
0x0666F93C: a113949a  csel x1, x29, x20, ne
0x0666F940: e30315aa  mov x3, x21
0x0666F944: e4031faa  mov x4, xzr
0x0666F948: 00013fd6  blr x8
0x0666F94C: e30300aa  mov x3, x0
0x0666F950: 040340f9  ldr x4, [x24]
0x0666F954: 7ffe00a9  stp xzr, xzr, [x19, #8]
0x0666F958: 8103192a  orr w1, w28, w25
0x0666F95C: 7f0200f9  str xzr, [x19]
0x0666F960: e00313aa  mov x0, x19
0x0666F964: e20316aa  mov x2, x22
0x0666F968: f44f46a9  ldp x20, x19, [sp, #0x60]
0x0666F96C: f65745a9  ldp x22, x21, [sp, #0x50]
0x0666F970: f85f44a9  ldp x24, x23, [sp, #0x40]
0x0666F974: fa6743a9  ldp x26, x25, [sp, #0x30]
0x0666F978: fc6f42a9  ldp x28, x27, [sp, #0x20]
0x0666F97C: fd7b41a9  ldp x29, x30, [sp, #0x10]
0x0666F980: ffc30191  add sp, sp, #0x70
0x0666F984: 30a38517  b #0x47d8644
0x0666F988: c9442c97  bl #0x3180cac

; RVA 0x666F98C | private IMergeItem TrySpawnConsumable(PositionComponent mergedItemPosition, out Entity consumableEntity) { }
; bytes=312 sha256=ef6e9b284a8c39bb972b3313014c906db451909444bda11d3c26b63b4b0005c9 status=arm64_complete_bound indexed_start=True
0x0666F98C: ff0301d1  sub sp, sp, #0x40
0x0666F990: fe5f01a9  stp x30, x23, [sp, #0x10]
0x0666F994: f65702a9  stp x22, x21, [sp, #0x20]
0x0666F998: f44f03a9  stp x20, x19, [sp, #0x30]
0x0666F99C: d5b500b0  adrp x21, #0x7d28000
0x0666F9A0: a8564439  ldrb w8, [x21, #0x115]
0x0666F9A4: f60302aa  mov x22, x2
0x0666F9A8: f30301aa  mov x19, x1
0x0666F9AC: f40300aa  mov x20, x0
0x0666F9B0: c8000037  tbnz w8, #0, #0x666f9c8
0x0666F9B4: 408000f0  adrp x0, #0x767a000
0x0666F9B8: 004c42f9  ldr x0, [x0, #0x498]
0x0666F9BC: 17442c97  bl #0x3180a18
0x0666F9C0: 28008052  movz w8, #0x1
0x0666F9C4: a8560439  strb w8, [x21, #0x115]
0x0666F9C8: e00316aa  mov x0, x22
0x0666F9CC: e1031faa  mov x1, xzr
0x0666F9D0: ff0700f9  str xzr, [sp, #8]
0x0666F9D4: df0200f9  str xzr, [x22]
0x0666F9D8: fb432c97  bl #0x31809c4
0x0666F9DC: 330700b4  cbz x19, #0x666fac0
0x0666F9E0: 804640f9  ldr x0, [x20, #0x88]
0x0666F9E4: e00600b4  cbz x0, #0x666fac0
0x0666F9E8: 610a40f9  ldr x1, [x19, #0x10]
0x0666F9EC: e2230091  add x2, sp, #8
0x0666F9F0: e3031faa  mov x3, xzr
0x0666F9F4: 3c730494  bl #0x678c6e4
0x0666F9F8: e10740f9  ldr x1, [sp, #8]
0x0666F9FC: f50300aa  mov x21, x0
0x0666FA00: e00316aa  mov x0, x22
0x0666FA04: c10200f9  str x1, [x22]
0x0666FA08: ef432c97  bl #0x31809c4
0x0666FA0C: 972240f9  ldr x23, [x20, #0x40]
0x0666FA10: 970500b4  cbz x23, #0x666fac0
0x0666FA14: 4a8000f0  adrp x10, #0x767a000
0x0666FA18: e80240f9  ldr x8, [x23]
0x0666FA1C: 4a4d42f9  ldr x10, [x10, #0x498]
0x0666FA20: 965240f9  ldr x22, [x20, #0xa0]
0x0666FA24: 095d4279  ldrh w9, [x8, #0x12e]
0x0666FA28: 410140f9  ldr x1, [x10]
0x0666FA2C: 290100b4  cbz x9, #0x666fa50
0x0666FA30: 0a5940f9  ldr x10, [x8, #0xb0]
0x0666FA34: 4a210091  add x10, x10, #8
0x0666FA38: 4b815ff8  ldur x11, [x10, #-8]
0x0666FA3C: 7f0101eb  cmp x11, x1
0x0666FA40: 00010054  b.eq #0x666fa60
0x0666FA44: 290500f1  subs x9, x9, #1
0x0666FA48: 4a410091  add x10, x10, #0x10
0x0666FA4C: 61ffff54  b.ne #0x666fa38
0x0666FA50: 82028052  movz w2, #0x14
0x0666FA54: e00317aa  mov x0, x23
0x0666FA58: 2e9c2b97  bl #0x3156b10
0x0666FA5C: 05000014  b #0x666fa70
0x0666FA60: 490140b9  ldr w9, [x10]
0x0666FA64: 29510011  add w9, w9, #0x14
0x0666FA68: 08d1298b  add x8, x8, w9, sxtw #4
0x0666FA6C: 00e10491  add x0, x8, #0x138
0x0666FA70: 080840a9  ldp x8, x2, [x0]
0x0666FA74: e00317aa  mov x0, x23
0x0666FA78: e10313aa  mov x1, x19
0x0666FA7C: 00013fd6  blr x8
0x0666FA80: 160200b4  cbz x22, #0x666fac0
0x0666FA84: e10300aa  mov x1, x0
0x0666FA88: e00316aa  mov x0, x22
0x0666FA8C: e2031faa  mov x2, xzr
0x0666FA90: ca2cf097  bl #0x627adb8
0x0666FA94: b50000b4  cbz x21, #0x666faa8
0x0666FA98: 80000037  tbnz w0, #0, #0x666faa8
0x0666FA9C: 611a40f9  ldr x1, [x19, #0x30]
0x0666FAA0: e00314aa  mov x0, x20
0x0666FAA4: 53000094  bl #0x666fbf0
0x0666FAA8: e00315aa  mov x0, x21
0x0666FAAC: f44f43a9  ldp x20, x19, [sp, #0x30]
0x0666FAB0: f65742a9  ldp x22, x21, [sp, #0x20]
0x0666FAB4: fe5f41a9  ldp x30, x23, [sp, #0x10]
0x0666FAB8: ff030191  add sp, sp, #0x40
0x0666FABC: c0035fd6  ret
0x0666FAC0: 7b442c97  bl #0x3180cac

; RVA 0x666FBF0 | private void HandleFireMergedFloatingText(BoardItemPosition position) { }
; bytes=304 sha256=2d194d004fd1f9811b9e90e131025c8d70ac225a601735a8a099437259cf3474 status=arm64_complete_bound indexed_start=True
0x0666FBF0: fe0f1df8  str x30, [sp, #-0x30]!
0x0666FBF4: f65701a9  stp x22, x21, [sp, #0x10]
0x0666FBF8: f44f02a9  stp x20, x19, [sp, #0x20]
0x0666FBFC: d5b500b0  adrp x21, #0x7d28000
0x0666FC00: a85a4439  ldrb w8, [x21, #0x116]
0x0666FC04: f30301aa  mov x19, x1
0x0666FC08: f40300aa  mov x20, x0
0x0666FC0C: 88010037  tbnz w8, #0, #0x666fc3c
0x0666FC10: 608000b0  adrp x0, #0x767c000
0x0666FC14: 004441f9  ldr x0, [x0, #0x288]
0x0666FC18: 80432c97  bl #0x3180a18
0x0666FC1C: 808000b0  adrp x0, #0x7680000
0x0666FC20: 006840f9  ldr x0, [x0, #0xd0]
0x0666FC24: 7d432c97  bl #0x3180a18
0x0666FC28: 608000b0  adrp x0, #0x767c000
0x0666FC2C: 004841f9  ldr x0, [x0, #0x290]
0x0666FC30: 7a432c97  bl #0x3180a18
0x0666FC34: 28008052  movz w8, #0x1
0x0666FC38: a85a0439  strb w8, [x21, #0x116]
0x0666FC3C: 952640f9  ldr x21, [x20, #0x48]
0x0666FC40: f50600b4  cbz x21, #0x666fd1c
0x0666FC44: 8a8000b0  adrp x10, #0x7680000
0x0666FC48: a80240f9  ldr x8, [x21]
0x0666FC4C: 4a6940f9  ldr x10, [x10, #0xd0]
0x0666FC50: 768000b0  adrp x22, #0x767c000
0x0666FC54: 941640f9  ldr x20, [x20, #0x28]
0x0666FC58: 095d4279  ldrh w9, [x8, #0x12e]
0x0666FC5C: 410140f9  ldr x1, [x10]
0x0666FC60: d64641f9  ldr x22, [x22, #0x288]
0x0666FC64: 290100b4  cbz x9, #0x666fc88
0x0666FC68: 0a5940f9  ldr x10, [x8, #0xb0]
0x0666FC6C: 4a210091  add x10, x10, #8
0x0666FC70: 4b815ff8  ldur x11, [x10, #-8]
0x0666FC74: 7f0101eb  cmp x11, x1
0x0666FC78: 00010054  b.eq #0x666fc98
0x0666FC7C: 290500f1  subs x9, x9, #1
0x0666FC80: 4a410091  add x10, x10, #0x10
0x0666FC84: 61ffff54  b.ne #0x666fc70
0x0666FC88: 62008052  movz w2, #0x3
0x0666FC8C: e00315aa  mov x0, x21
0x0666FC90: a09b2b97  bl #0x3156b10
0x0666FC94: 05000014  b #0x666fca8
0x0666FC98: 490140b9  ldr w9, [x10]
0x0666FC9C: 290d0011  add w9, w9, #3
0x0666FCA0: 08d1298b  add x8, x8, w9, sxtw #4
0x0666FCA4: 00e10491  add x0, x8, #0x138
0x0666FCA8: 080c40a9  ldp x8, x3, [x0]
0x0666FCAC: 42008052  movz w2, #0x2
0x0666FCB0: e00315aa  mov x0, x21
0x0666FCB4: e1031f2a  mov w1, wzr
0x0666FCB8: 00013fd6  blr x8
0x0666FCBC: c80240f9  ldr x8, [x22]
0x0666FCC0: 1f000071  cmp w0, #0
0x0666FCC4: 69008052  movz w9, #0x3
0x0666FCC8: 3615891a  cinc w22, w9, eq
0x0666FCCC: e00308aa  mov x0, x8
0x0666FCD0: f4432c97  bl #0x3180ca0
0x0666FCD4: e10313aa  mov x1, x19
0x0666FCD8: e203162a  mov w2, w22
0x0666FCDC: e3031faa  mov x3, xzr
0x0666FCE0: e4031f2a  mov w4, wzr
0x0666FCE4: e5031f2a  mov w5, wzr
0x0666FCE8: e6031faa  mov x6, xzr
0x0666FCEC: f50300aa  mov x21, x0
0x0666FCF0: 4eeb0394  bl #0x676aa28
0x0666FCF4: 540100b4  cbz x20, #0x666fd1c
0x0666FCF8: 688000b0  adrp x8, #0x767c000
0x0666FCFC: 084941f9  ldr x8, [x8, #0x290]
0x0666FD00: e00314aa  mov x0, x20
0x0666FD04: e10315aa  mov x1, x21
0x0666FD08: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0666FD0C: 020140f9  ldr x2, [x8]
0x0666FD10: f65741a9  ldp x22, x21, [sp, #0x10]
0x0666FD14: fe0743f8  ldr x30, [sp], #0x30
0x0666FD18: 15d45c17  b #0x3da4d6c
0x0666FD1C: e4432c97  bl #0x3180cac

; RVA 0x666FD20 | private bool CanMergeSame(MergeComponent item1, MergeComponent item2) { }
; bytes=324 sha256=e949c5085b2fc67889ac39dfb0fb3d503705358fb94454aec9d2289b5c769741 status=arm64_complete_bound indexed_start=True
0x0666FD20: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x0666FD24: f65701a9  stp x22, x21, [sp, #0x10]
0x0666FD28: f44f02a9  stp x20, x19, [sp, #0x20]
0x0666FD2C: d6b500b0  adrp x22, #0x7d28000
0x0666FD30: c85e4439  ldrb w8, [x22, #0x117]
0x0666FD34: f50302aa  mov x21, x2
0x0666FD38: f40301aa  mov x20, x1
0x0666FD3C: f30300aa  mov x19, x0
0x0666FD40: 28010037  tbnz w8, #0, #0x666fd64
0x0666FD44: 60800090  adrp x0, #0x767b000
0x0666FD48: 00cc47f9  ldr x0, [x0, #0xf98]
0x0666FD4C: 33432c97  bl #0x3180a18
0x0666FD50: 408000f0  adrp x0, #0x767a000
0x0666FD54: 004c42f9  ldr x0, [x0, #0x498]
0x0666FD58: 30432c97  bl #0x3180a18
0x0666FD5C: 28008052  movz w8, #0x1
0x0666FD60: c85e0439  strb w8, [x22, #0x117]
0x0666FD64: f40700b4  cbz x20, #0x666fe60
0x0666FD68: 882a40b9  ldr w8, [x20, #0x28]
0x0666FD6C: a8050035  cbnz w8, #0x666fe20
0x0666FD70: 950700b4  cbz x21, #0x666fe60
0x0666FD74: a82a40b9  ldr w8, [x21, #0x28]
0x0666FD78: 48050035  cbnz w8, #0x666fe20
0x0666FD7C: 77800090  adrp x23, #0x767b000
0x0666FD80: f7ce47f9  ldr x23, [x23, #0xf98]
0x0666FD84: e00314aa  mov x0, x20
0x0666FD88: e10240f9  ldr x1, [x23]
0x0666FD8C: a4f65597  bl #0x3bed81c
0x0666FD90: 800600b4  cbz x0, #0x666fe60
0x0666FD94: e10240f9  ldr x1, [x23]
0x0666FD98: 161840f9  ldr x22, [x0, #0x30]
0x0666FD9C: e00315aa  mov x0, x21
0x0666FDA0: 9ff65597  bl #0x3bed81c
0x0666FDA4: e00500b4  cbz x0, #0x666fe60
0x0666FDA8: 011840f9  ldr x1, [x0, #0x30]
0x0666FDAC: e00316aa  mov x0, x22
0x0666FDB0: e2031faa  mov x2, xzr
0x0666FDB4: afeab997  bl #0x54ea870
0x0666FDB8: 40030036  tbz w0, #0, #0x666fe20
0x0666FDBC: e10240f9  ldr x1, [x23]
0x0666FDC0: 732240f9  ldr x19, [x19, #0x40]
0x0666FDC4: e00314aa  mov x0, x20
0x0666FDC8: 95f65597  bl #0x3bed81c
0x0666FDCC: a00400b4  cbz x0, #0x666fe60
0x0666FDD0: 930400b4  cbz x19, #0x666fe60
0x0666FDD4: 4a8000f0  adrp x10, #0x767a000
0x0666FDD8: 680240f9  ldr x8, [x19]
0x0666FDDC: 141840f9  ldr x20, [x0, #0x30]
0x0666FDE0: 4a4d42f9  ldr x10, [x10, #0x498]
0x0666FDE4: 095d4279  ldrh w9, [x8, #0x12e]
0x0666FDE8: 410140f9  ldr x1, [x10]
0x0666FDEC: 290100b4  cbz x9, #0x666fe10
0x0666FDF0: 0a5940f9  ldr x10, [x8, #0xb0]
0x0666FDF4: 4a210091  add x10, x10, #8
0x0666FDF8: 4b815ff8  ldur x11, [x10, #-8]
0x0666FDFC: 7f0101eb  cmp x11, x1
0x0666FE00: a0010054  b.eq #0x666fe34
0x0666FE04: 290500f1  subs x9, x9, #1
0x0666FE08: 4a410091  add x10, x10, #0x10
0x0666FE0C: 61ffff54  b.ne #0x666fdf8
0x0666FE10: a2018052  movz w2, #0xd
0x0666FE14: e00313aa  mov x0, x19
0x0666FE18: 3e9b2b97  bl #0x3156b10
0x0666FE1C: 0a000014  b #0x666fe44
0x0666FE20: e0031f2a  mov w0, wzr
0x0666FE24: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0666FE28: f65741a9  ldp x22, x21, [sp, #0x10]
0x0666FE2C: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x0666FE30: c0035fd6  ret
0x0666FE34: 490140b9  ldr w9, [x10]
0x0666FE38: 29350011  add w9, w9, #0xd
0x0666FE3C: 08d1298b  add x8, x8, w9, sxtw #4
0x0666FE40: 00e10491  add x0, x8, #0x138
0x0666FE44: 080840a9  ldp x8, x2, [x0]
0x0666FE48: e00313aa  mov x0, x19
0x0666FE4C: e10314aa  mov x1, x20
0x0666FE50: 00013fd6  blr x8
0x0666FE54: 1f0000f1  cmp x0, #0
0x0666FE58: e0079f1a  cset w0, ne
0x0666FE5C: f2ffff17  b #0x666fe24
0x0666FE60: 93432c97  bl #0x3180cac

; RVA 0x666DA34 | public bool CanMerge(MergeComponent item1, MergeComponent item2) { }
; bytes=172 sha256=e0115f185b135a62e57116856eb7e07df9bb6b0e164c56704f8ee085a67c3274 status=arm64_complete_bound indexed_start=True
0x0666DA34: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0666DA38: f44f01a9  stp x20, x19, [sp, #0x10]
0x0666DA3C: f30302aa  mov x19, x2
0x0666DA40: f40301aa  mov x20, x1
0x0666DA44: f50300aa  mov x21, x0
0x0666DA48: e10300b4  cbz x1, #0x666dac4
0x0666DA4C: d30300b4  cbz x19, #0x666dac4
0x0666DA50: e10314aa  mov x1, x20
0x0666DA54: e20313aa  mov x2, x19
0x0666DA58: 03090094  bl #0x666fe64
0x0666DA5C: 40030036  tbz w0, #0, #0x666dac4
0x0666DA60: e00315aa  mov x0, x21
0x0666DA64: e10314aa  mov x1, x20
0x0666DA68: e20313aa  mov x2, x19
0x0666DA6C: 23090094  bl #0x666fef8
0x0666DA70: a0020036  tbz w0, #0, #0x666dac4
0x0666DA74: e00315aa  mov x0, x21
0x0666DA78: e10313aa  mov x1, x19
0x0666DA7C: e20314aa  mov x2, x20
0x0666DA80: 1e090094  bl #0x666fef8
0x0666DA84: 00020036  tbz w0, #0, #0x666dac4
0x0666DA88: e00315aa  mov x0, x21
0x0666DA8C: e10314aa  mov x1, x20
0x0666DA90: e20313aa  mov x2, x19
0x0666DA94: a3080094  bl #0x666fd20
0x0666DA98: e0000037  tbnz w0, #0, #0x666dab4
0x0666DA9C: a22240f9  ldr x2, [x21, #0x40]
0x0666DAA0: e00314aa  mov x0, x20
0x0666DAA4: e10313aa  mov x1, x19
0x0666DAA8: e3031faa  mov x3, xzr
0x0666DAAC: 4905f097  bl #0x626efd0
0x0666DAB0: a0000036  tbz w0, #0, #0x666dac4
0x0666DAB4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0666DAB8: 20008052  movz w0, #0x1
0x0666DABC: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0666DAC0: c0035fd6  ret
0x0666DAC4: a22240f9  ldr x2, [x21, #0x40]
0x0666DAC8: e00314aa  mov x0, x20
0x0666DACC: e10313aa  mov x1, x19
0x0666DAD0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0666DAD4: e3031faa  mov x3, xzr
0x0666DAD8: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0666DADC: 1606f017  b #0x626f334

; RVA 0x666FE64 | private bool ItemsNotMergeLocked(MergeComponent item1, MergeComponent item2) { }
; bytes=148 sha256=176b815ce1891002223bb7ddbab20664ae5f28675b33af59eb5054407a9be639 status=arm64_complete_bound indexed_start=True
0x0666FE64: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0666FE68: f44f01a9  stp x20, x19, [sp, #0x10]
0x0666FE6C: d5b500b0  adrp x21, #0x7d28000
0x0666FE70: a8624439  ldrb w8, [x21, #0x118]
0x0666FE74: f30302aa  mov x19, x2
0x0666FE78: f40301aa  mov x20, x1
0x0666FE7C: c8000037  tbnz w8, #0, #0x666fe94
0x0666FE80: 608000f0  adrp x0, #0x767e000
0x0666FE84: 001c43f9  ldr x0, [x0, #0x638]
0x0666FE88: e4422c97  bl #0x3180a18
0x0666FE8C: 28008052  movz w8, #0x1
0x0666FE90: a8620439  strb w8, [x21, #0x118]
0x0666FE94: 140300b4  cbz x20, #0x666fef4
0x0666FE98: 758000f0  adrp x21, #0x767e000
0x0666FE9C: b51e43f9  ldr x21, [x21, #0x638]
0x0666FEA0: e00314aa  mov x0, x20
0x0666FEA4: a10240f9  ldr x1, [x21]
0x0666FEA8: 5df65597  bl #0x3bed81c
0x0666FEAC: 400200b4  cbz x0, #0x666fef4
0x0666FEB0: e1031faa  mov x1, xzr
0x0666FEB4: 3e360a94  bl #0x68fd7ac
0x0666FEB8: 60000036  tbz w0, #0, #0x666fec4
0x0666FEBC: e8031f2a  mov w8, wzr
0x0666FEC0: 09000014  b #0x666fee4
0x0666FEC4: 930100b4  cbz x19, #0x666fef4
0x0666FEC8: a10240f9  ldr x1, [x21]
0x0666FECC: e00313aa  mov x0, x19
0x0666FED0: 53f65597  bl #0x3bed81c
0x0666FED4: 000100b4  cbz x0, #0x666fef4
0x0666FED8: e1031faa  mov x1, xzr
0x0666FEDC: 34360a94  bl #0x68fd7ac
0x0666FEE0: 08000052  eor w8, w0, #1
0x0666FEE4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0666FEE8: 00010012  and w0, w8, #1
0x0666FEEC: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0666FEF0: c0035fd6  ret
0x0666FEF4: 6e432c97  bl #0x3180cac

; RVA 0x666FEF8 | private bool ItemsNotMeteorLocked(MergeComponent item1, MergeComponent item2) { }
; bytes=284 sha256=621e3727fe03da5ee682e378ffbd1025707584464c35a95a3c4378bf25331467 status=arm64_complete_bound indexed_start=True
0x0666FEF8: fe0f1df8  str x30, [sp, #-0x30]!
0x0666FEFC: f65701a9  stp x22, x21, [sp, #0x10]
0x0666FF00: f44f02a9  stp x20, x19, [sp, #0x20]
0x0666FF04: d6b500b0  adrp x22, #0x7d28000
0x0666FF08: c8664439  ldrb w8, [x22, #0x119]
0x0666FF0C: f40302aa  mov x20, x2
0x0666FF10: f30301aa  mov x19, x1
0x0666FF14: f50300aa  mov x21, x0
0x0666FF18: 28010037  tbnz w8, #0, #0x666ff3c
0x0666FF1C: 608000f0  adrp x0, #0x767e000
0x0666FF20: 001c43f9  ldr x0, [x0, #0x638]
0x0666FF24: bd422c97  bl #0x3180a18
0x0666FF28: 408000f0  adrp x0, #0x767a000
0x0666FF2C: 004c42f9  ldr x0, [x0, #0x498]
0x0666FF30: ba422c97  bl #0x3180a18
0x0666FF34: 28008052  movz w8, #0x1
0x0666FF38: c8660439  strb w8, [x22, #0x119]
0x0666FF3C: b52240f9  ldr x21, [x21, #0x40]
0x0666FF40: 950600b4  cbz x21, #0x6670010
0x0666FF44: 4a8000f0  adrp x10, #0x767a000
0x0666FF48: a80240f9  ldr x8, [x21]
0x0666FF4C: 4a4d42f9  ldr x10, [x10, #0x498]
0x0666FF50: 095d4279  ldrh w9, [x8, #0x12e]
0x0666FF54: 410140f9  ldr x1, [x10]
0x0666FF58: 290100b4  cbz x9, #0x666ff7c
0x0666FF5C: 0a5940f9  ldr x10, [x8, #0xb0]
0x0666FF60: 4a210091  add x10, x10, #8
0x0666FF64: 4b815ff8  ldur x11, [x10, #-8]
0x0666FF68: 7f0101eb  cmp x11, x1
0x0666FF6C: 00010054  b.eq #0x666ff8c
0x0666FF70: 290500f1  subs x9, x9, #1
0x0666FF74: 4a410091  add x10, x10, #0x10
0x0666FF78: 61ffff54  b.ne #0x666ff64
0x0666FF7C: 82028052  movz w2, #0x14
0x0666FF80: e00315aa  mov x0, x21
0x0666FF84: e39a2b97  bl #0x3156b10
0x0666FF88: 05000014  b #0x666ff9c
0x0666FF8C: 490140b9  ldr w9, [x10]
0x0666FF90: 29510011  add w9, w9, #0x14
0x0666FF94: 08d1298b  add x8, x8, w9, sxtw #4
0x0666FF98: 00e10491  add x0, x8, #0x138
0x0666FF9C: 080840a9  ldp x8, x2, [x0]
0x0666FFA0: e00315aa  mov x0, x21
0x0666FFA4: e10314aa  mov x1, x20
0x0666FFA8: 00013fd6  blr x8
0x0666FFAC: 330300b4  cbz x19, #0x6670010
0x0666FFB0: 688000f0  adrp x8, #0x767e000
0x0666FFB4: 081d43f9  ldr x8, [x8, #0x638]
0x0666FFB8: f40300aa  mov x20, x0
0x0666FFBC: e00313aa  mov x0, x19
0x0666FFC0: 010140f9  ldr x1, [x8]
0x0666FFC4: 16f65597  bl #0x3bed81c
0x0666FFC8: 400200b4  cbz x0, #0x6670010
0x0666FFCC: 08c84039  ldrb w8, [x0, #0x32]
0x0666FFD0: 68010034  cbz w8, #0x666fffc
0x0666FFD4: e00314aa  mov x0, x20
0x0666FFD8: e1031faa  mov x1, xzr
0x0666FFDC: 4db60e94  bl #0x6a1d910
0x0666FFE0: a0000037  tbnz w0, #0, #0x666fff4
0x0666FFE4: e00314aa  mov x0, x20
0x0666FFE8: e1031faa  mov x1, xzr
0x0666FFEC: 76b60e94  bl #0x6a1d9c4
0x0666FFF0: 60000036  tbz w0, #0, #0x666fffc
0x0666FFF4: e0031f2a  mov w0, wzr
0x0666FFF8: 02000014  b #0x6670000
0x0666FFFC: 20008052  movz w0, #0x1
0x06670000: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06670004: f65741a9  ldp x22, x21, [sp, #0x10]
0x06670008: fe0743f8  ldr x30, [sp], #0x30
0x0667000C: c0035fd6  ret
0x06670010: 27432c97  bl #0x3180cac

; RVA 0x666FAC4 | private void UpdateItemTimestamps(MergeComponent firstItem, MergeComponent secondItem, Entity mergedItemEntity) { }
; bytes=300 sha256=c1de1bbcdd44e7219ab262f86026ee3ce3ec6478c4cb148535c2486f732354fc status=arm64_complete_bound indexed_start=True
0x0666FAC4: fe0f1cf8  str x30, [sp, #-0x40]!
0x0666FAC8: f85f01a9  stp x24, x23, [sp, #0x10]
0x0666FACC: f65702a9  stp x22, x21, [sp, #0x20]
0x0666FAD0: f44f03a9  stp x20, x19, [sp, #0x30]
0x0666FAD4: d6b500b0  adrp x22, #0x7d28000
0x0666FAD8: c86a4439  ldrb w8, [x22, #0x11a]
0x0666FADC: f50303aa  mov x21, x3
0x0666FAE0: f30302aa  mov x19, x2
0x0666FAE4: f40301aa  mov x20, x1
0x0666FAE8: 88010037  tbnz w8, #0, #0x666fb18
0x0666FAEC: 60800090  adrp x0, #0x767b000
0x0666FAF0: 00cc47f9  ldr x0, [x0, #0xf98]
0x0666FAF4: c9432c97  bl #0x3180a18
0x0666FAF8: 408000f0  adrp x0, #0x767a000
0x0666FAFC: 009044f9  ldr x0, [x0, #0x920]
0x0666FB00: c6432c97  bl #0x3180a18
0x0666FB04: e07e00f0  adrp x0, #0x764e000
0x0666FB08: 000447f9  ldr x0, [x0, #0xe08]
0x0666FB0C: c3432c97  bl #0x3180a18
0x0666FB10: 28008052  movz w8, #0x1
0x0666FB14: c86a0439  strb w8, [x22, #0x11a]
0x0666FB18: b50600b4  cbz x21, #0x666fbec
0x0666FB1C: 488000f0  adrp x8, #0x767a000
0x0666FB20: 089144f9  ldr x8, [x8, #0x920]
0x0666FB24: e00315aa  mov x0, x21
0x0666FB28: 010140f9  ldr x1, [x8]
0x0666FB2C: 96c45697  bl #0x3c20d84
0x0666FB30: f40500b4  cbz x20, #0x666fbec
0x0666FB34: 78800090  adrp x24, #0x767b000
0x0666FB38: 18cf47f9  ldr x24, [x24, #0xf98]
0x0666FB3C: f50300aa  mov x21, x0
0x0666FB40: e00314aa  mov x0, x20
0x0666FB44: 010340f9  ldr x1, [x24]
0x0666FB48: 35f75597  bl #0x3bed81c
0x0666FB4C: 000500b4  cbz x0, #0x666fbec
0x0666FB50: f30400b4  cbz x19, #0x666fbec
0x0666FB54: 010340f9  ldr x1, [x24]
0x0666FB58: 162440f9  ldr x22, [x0, #0x48]
0x0666FB5C: e00313aa  mov x0, x19
0x0666FB60: 2ff75597  bl #0x3bed81c
0x0666FB64: 400400b4  cbz x0, #0x666fbec
0x0666FB68: e87e00f0  adrp x8, #0x764e000
0x0666FB6C: 080547f9  ldr x8, [x8, #0xe08]
0x0666FB70: 172440f9  ldr x23, [x0, #0x48]
0x0666FB74: 080140f9  ldr x8, [x8]
0x0666FB78: 09e140b9  ldr w9, [x8, #0xe0]
0x0666FB7C: 69000035  cbnz w9, #0x666fb88
0x0666FB80: e00308aa  mov x0, x8
0x0666FB84: 02442c97  bl #0x3180b8c
0x0666FB88: e00316aa  mov x0, x22
0x0666FB8C: e10317aa  mov x1, x23
0x0666FB90: e2031faa  mov x2, xzr
0x0666FB94: 7e9ec097  bl #0x569758c
0x0666FB98: b50200b4  cbz x21, #0x666fbec
0x0666FB9C: a02600f9  str x0, [x21, #0x48]
0x0666FBA0: 010340f9  ldr x1, [x24]
0x0666FBA4: e00314aa  mov x0, x20
0x0666FBA8: 1df75597  bl #0x3bed81c
0x0666FBAC: 000200b4  cbz x0, #0x666fbec
0x0666FBB0: 010340f9  ldr x1, [x24]
0x0666FBB4: 142840f9  ldr x20, [x0, #0x50]
0x0666FBB8: e00313aa  mov x0, x19
0x0666FBBC: 18f75597  bl #0x3bed81c
0x0666FBC0: 600100b4  cbz x0, #0x666fbec
0x0666FBC4: 012840f9  ldr x1, [x0, #0x50]
0x0666FBC8: e00314aa  mov x0, x20
0x0666FBCC: e2031faa  mov x2, xzr
0x0666FBD0: 6f9ec097  bl #0x569758c
0x0666FBD4: a02a00f9  str x0, [x21, #0x50]
0x0666FBD8: f44f43a9  ldp x20, x19, [sp, #0x30]
0x0666FBDC: f65742a9  ldp x22, x21, [sp, #0x20]
0x0666FBE0: f85f41a9  ldp x24, x23, [sp, #0x10]
0x0666FBE4: fe0744f8  ldr x30, [sp], #0x40
0x0666FBE8: c0035fd6  ret
0x0666FBEC: 30442c97  bl #0x3180cac

; RVA 0x666E0EC | private IMergeItem GetResultItem(MergeComponent firstMergeItem, MergeComponent secondMergeItem) { }
; bytes=84 sha256=392c022b5311c148196eb9fae9feb94b2010b9cce0ccde88634db56a165583fe status=arm64_complete_bound indexed_start=True
0x0666E0EC: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0666E0F0: f44f01a9  stp x20, x19, [sp, #0x10]
0x0666E0F4: f30302aa  mov x19, x2
0x0666E0F8: f40301aa  mov x20, x1
0x0666E0FC: f50300aa  mov x21, x0
0x0666E100: c5070094  bl #0x6670014
0x0666E104: c00000b5  cbnz x0, #0x666e11c
0x0666E108: e00315aa  mov x0, x21
0x0666E10C: e10314aa  mov x1, x20
0x0666E110: e20313aa  mov x2, x19
0x0666E114: 05080094  bl #0x6670128
0x0666E118: 800000b4  cbz x0, #0x666e128
0x0666E11C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0666E120: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0666E124: c0035fd6  ret
0x0666E128: e10314aa  mov x1, x20
0x0666E12C: e20313aa  mov x2, x19
0x0666E130: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0666E134: e00315aa  mov x0, x21
0x0666E138: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0666E13C: 43080014  b #0x6670248

; RVA 0x6670014 | private IMergeItem GetAnyItemOnlyResult(MergeComponent firstItem, MergeComponent secondItem) { }
; bytes=276 sha256=9c0cd3efc08bda2901c4e847c1611b7fa90a09affcd6474e47f54f4eb38f53c5 status=arm64_complete_bound indexed_start=True
0x06670014: fe0f1df8  str x30, [sp, #-0x30]!
0x06670018: f65701a9  stp x22, x21, [sp, #0x10]
0x0667001C: f44f02a9  stp x20, x19, [sp, #0x20]
0x06670020: d6b50090  adrp x22, #0x7d28000
0x06670024: c86e4439  ldrb w8, [x22, #0x11b]
0x06670028: f40302aa  mov x20, x2
0x0667002C: f50301aa  mov x21, x1
0x06670030: f30300aa  mov x19, x0
0x06670034: 28010037  tbnz w8, #0, #0x6670058
0x06670038: 408000f0  adrp x0, #0x767b000
0x0667003C: 00cc47f9  ldr x0, [x0, #0xf98]
0x06670040: 76422c97  bl #0x3180a18
0x06670044: 408000d0  adrp x0, #0x767a000
0x06670048: 004c42f9  ldr x0, [x0, #0x498]
0x0667004C: 73422c97  bl #0x3180a18
0x06670050: 28008052  movz w8, #0x1
0x06670054: c86e0439  strb w8, [x22, #0x11b]
0x06670058: 622240f9  ldr x2, [x19, #0x40]
0x0667005C: e00315aa  mov x0, x21
0x06670060: e10314aa  mov x1, x20
0x06670064: e3031faa  mov x3, xzr
0x06670068: dafbef97  bl #0x626efd0
0x0667006C: 20050036  tbz w0, #0, #0x6670110
0x06670070: b50500b4  cbz x21, #0x6670124
0x06670074: a82a40b9  ldr w8, [x21, #0x28]
0x06670078: 1f010071  cmp w8, #0
0x0667007C: a002949a  csel x0, x21, x20, eq
0x06670080: 200500b4  cbz x0, #0x6670124
0x06670084: 488000f0  adrp x8, #0x767b000
0x06670088: 08cd47f9  ldr x8, [x8, #0xf98]
0x0667008C: 010140f9  ldr x1, [x8]
0x06670090: e3f55597  bl #0x3bed81c
0x06670094: 800400b4  cbz x0, #0x6670124
0x06670098: 732240f9  ldr x19, [x19, #0x40]
0x0667009C: 530400b4  cbz x19, #0x6670124
0x066700A0: 4a8000d0  adrp x10, #0x767a000
0x066700A4: 680240f9  ldr x8, [x19]
0x066700A8: 141840f9  ldr x20, [x0, #0x30]
0x066700AC: 4a4d42f9  ldr x10, [x10, #0x498]
0x066700B0: 095d4279  ldrh w9, [x8, #0x12e]
0x066700B4: 410140f9  ldr x1, [x10]
0x066700B8: 290100b4  cbz x9, #0x66700dc
0x066700BC: 0a5940f9  ldr x10, [x8, #0xb0]
0x066700C0: 4a210091  add x10, x10, #8
0x066700C4: 4b815ff8  ldur x11, [x10, #-8]
0x066700C8: 7f0101eb  cmp x11, x1
0x066700CC: 00010054  b.eq #0x66700ec
0x066700D0: 290500f1  subs x9, x9, #1
0x066700D4: 4a410091  add x10, x10, #0x10
0x066700D8: 61ffff54  b.ne #0x66700c4
0x066700DC: a2018052  movz w2, #0xd
0x066700E0: e00313aa  mov x0, x19
0x066700E4: 8b9a2b97  bl #0x3156b10
0x066700E8: 05000014  b #0x66700fc
0x066700EC: 490140b9  ldr w9, [x10]
0x066700F0: 29350011  add w9, w9, #0xd
0x066700F4: 08d1298b  add x8, x8, w9, sxtw #4
0x066700F8: 00e10491  add x0, x8, #0x138
0x066700FC: 080840a9  ldp x8, x2, [x0]
0x06670100: e00313aa  mov x0, x19
0x06670104: e10314aa  mov x1, x20
0x06670108: 00013fd6  blr x8
0x0667010C: 400000b5  cbnz x0, #0x6670114
0x06670110: e0031faa  mov x0, xzr
0x06670114: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06670118: f65741a9  ldp x22, x21, [sp, #0x10]
0x0667011C: fe0743f8  ldr x30, [sp], #0x30
0x06670120: c0035fd6  ret
0x06670124: e2422c97  bl #0x3180cac

; RVA 0x6670128 | private IMergeItem GetSameItemResult(MergeComponent firstItem, MergeComponent secondItem) { }
; bytes=288 sha256=3159aee799ec1aaf22bf14b59491a6749b35e996976a4e453e210799d14fcbcd status=arm64_complete_bound indexed_start=True
0x06670128: fe0f1df8  str x30, [sp, #-0x30]!
0x0667012C: f65701a9  stp x22, x21, [sp, #0x10]
0x06670130: f44f02a9  stp x20, x19, [sp, #0x20]
0x06670134: d6b50090  adrp x22, #0x7d28000
0x06670138: c8724439  ldrb w8, [x22, #0x11c]
0x0667013C: f40302aa  mov x20, x2
0x06670140: f50301aa  mov x21, x1
0x06670144: f30300aa  mov x19, x0
0x06670148: 28010037  tbnz w8, #0, #0x667016c
0x0667014C: 408000f0  adrp x0, #0x767b000
0x06670150: 00cc47f9  ldr x0, [x0, #0xf98]
0x06670154: 31422c97  bl #0x3180a18
0x06670158: 408000d0  adrp x0, #0x767a000
0x0667015C: 004c42f9  ldr x0, [x0, #0x498]
0x06670160: 2e422c97  bl #0x3180a18
0x06670164: 28008052  movz w8, #0x1
0x06670168: c8720439  strb w8, [x22, #0x11c]
0x0667016C: d50600b4  cbz x21, #0x6670244
0x06670170: a82a40b9  ldr w8, [x21, #0x28]
0x06670174: 1f090071  cmp w8, #2
0x06670178: c1000054  b.ne #0x6670190
0x0667017C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06670180: f65741a9  ldp x22, x21, [sp, #0x10]
0x06670184: e0031faa  mov x0, xzr
0x06670188: fe0743f8  ldr x30, [sp], #0x30
0x0667018C: c0035fd6  ret
0x06670190: b40500b4  cbz x20, #0x6670244
0x06670194: 1f0d0071  cmp w8, #3
0x06670198: 20ffff54  b.eq #0x667017c
0x0667019C: 882a40b9  ldr w8, [x20, #0x28]
0x066701A0: 08791f12  and w8, w8, #0xfffffffe
0x066701A4: 1f090071  cmp w8, #2
0x066701A8: a0feff54  b.eq #0x667017c
0x066701AC: 488000f0  adrp x8, #0x767b000
0x066701B0: 732240f9  ldr x19, [x19, #0x40]
0x066701B4: 08cd47f9  ldr x8, [x8, #0xf98]
0x066701B8: e00314aa  mov x0, x20
0x066701BC: 010140f9  ldr x1, [x8]
0x066701C0: 97f55597  bl #0x3bed81c
0x066701C4: 000400b4  cbz x0, #0x6670244
0x066701C8: f30300b4  cbz x19, #0x6670244
0x066701CC: 4a8000d0  adrp x10, #0x767a000
0x066701D0: 680240f9  ldr x8, [x19]
0x066701D4: 141840f9  ldr x20, [x0, #0x30]
0x066701D8: 4a4d42f9  ldr x10, [x10, #0x498]
0x066701DC: 095d4279  ldrh w9, [x8, #0x12e]
0x066701E0: 410140f9  ldr x1, [x10]
0x066701E4: 290100b4  cbz x9, #0x6670208
0x066701E8: 0a5940f9  ldr x10, [x8, #0xb0]
0x066701EC: 4a210091  add x10, x10, #8
0x066701F0: 4b815ff8  ldur x11, [x10, #-8]
0x066701F4: 7f0101eb  cmp x11, x1
0x066701F8: 00010054  b.eq #0x6670218
0x066701FC: 290500f1  subs x9, x9, #1
0x06670200: 4a410091  add x10, x10, #0x10
0x06670204: 61ffff54  b.ne #0x66701f0
0x06670208: a2018052  movz w2, #0xd
0x0667020C: e00313aa  mov x0, x19
0x06670210: 409a2b97  bl #0x3156b10
0x06670214: 05000014  b #0x6670228
0x06670218: 490140b9  ldr w9, [x10]
0x0667021C: 29350011  add w9, w9, #0xd
0x06670220: 08d1298b  add x8, x8, w9, sxtw #4
0x06670224: 00e10491  add x0, x8, #0x138
0x06670228: 030840a9  ldp x3, x2, [x0]
0x0667022C: e00313aa  mov x0, x19
0x06670230: e10314aa  mov x1, x20
0x06670234: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06670238: f65741a9  ldp x22, x21, [sp, #0x10]
0x0667023C: fe0743f8  ldr x30, [sp], #0x30
0x06670240: 60001fd6  br x3
0x06670244: 9a422c97  bl #0x3180cac

; RVA 0x6670248 | private IMergeItem GetSpecificItemResult(MergeComponent firstItem, MergeComponent secondItem) { }
; bytes=316 sha256=b56561f1c2745e06149a5847165a05a2741faf7f3433140d55b33b72680bf3ea status=arm64_complete_bound indexed_start=True
0x06670248: fe0f1df8  str x30, [sp, #-0x30]!
0x0667024C: f65701a9  stp x22, x21, [sp, #0x10]
0x06670250: f44f02a9  stp x20, x19, [sp, #0x20]
0x06670254: d6b50090  adrp x22, #0x7d28000
0x06670258: c8764439  ldrb w8, [x22, #0x11d]
0x0667025C: f30302aa  mov x19, x2
0x06670260: f50301aa  mov x21, x1
0x06670264: f40300aa  mov x20, x0
0x06670268: 28010037  tbnz w8, #0, #0x667028c
0x0667026C: 408000f0  adrp x0, #0x767b000
0x06670270: 00cc47f9  ldr x0, [x0, #0xf98]
0x06670274: e9412c97  bl #0x3180a18
0x06670278: 408000d0  adrp x0, #0x767a000
0x0667027C: 004c42f9  ldr x0, [x0, #0x498]
0x06670280: e6412c97  bl #0x3180a18
0x06670284: 28008052  movz w8, #0x1
0x06670288: c8760439  strb w8, [x22, #0x11d]
0x0667028C: 822240f9  ldr x2, [x20, #0x40]
0x06670290: e00315aa  mov x0, x21
0x06670294: e10313aa  mov x1, x19
0x06670298: e3031faa  mov x3, xzr
0x0667029C: 26fcef97  bl #0x626f334
0x066702A0: 40060036  tbz w0, #0, #0x6670368
0x066702A4: f50600b4  cbz x21, #0x6670380
0x066702A8: a82a40b9  ldr w8, [x21, #0x28]
0x066702AC: 1f0d0071  cmp w8, #3
0x066702B0: 6002959a  csel x0, x19, x21, eq
0x066702B4: b602939a  csel x22, x21, x19, eq
0x066702B8: 400600b4  cbz x0, #0x6670380
0x066702BC: 488000f0  adrp x8, #0x767b000
0x066702C0: 08cd47f9  ldr x8, [x8, #0xf98]
0x066702C4: 010140f9  ldr x1, [x8]
0x066702C8: 55f55597  bl #0x3bed81c
0x066702CC: a00500b4  cbz x0, #0x6670380
0x066702D0: 942240f9  ldr x20, [x20, #0x40]
0x066702D4: 740500b4  cbz x20, #0x6670380
0x066702D8: 4a8000d0  adrp x10, #0x767a000
0x066702DC: 880240f9  ldr x8, [x20]
0x066702E0: 151840f9  ldr x21, [x0, #0x30]
0x066702E4: 4a4d42f9  ldr x10, [x10, #0x498]
0x066702E8: f30300aa  mov x19, x0
0x066702EC: 095d4279  ldrh w9, [x8, #0x12e]
0x066702F0: 410140f9  ldr x1, [x10]
0x066702F4: 290100b4  cbz x9, #0x6670318
0x066702F8: 0a5940f9  ldr x10, [x8, #0xb0]
0x066702FC: 4a210091  add x10, x10, #8
0x06670300: 4b815ff8  ldur x11, [x10, #-8]
0x06670304: 7f0101eb  cmp x11, x1
0x06670308: 00010054  b.eq #0x6670328
0x0667030C: 290500f1  subs x9, x9, #1
0x06670310: 4a410091  add x10, x10, #0x10
0x06670314: 61ffff54  b.ne #0x6670300
0x06670318: a2018052  movz w2, #0xd
0x0667031C: e00314aa  mov x0, x20
0x06670320: fc992b97  bl #0x3156b10
0x06670324: 05000014  b #0x6670338
0x06670328: 490140b9  ldr w9, [x10]
0x0667032C: 29350011  add w9, w9, #0xd
0x06670330: 08d1298b  add x8, x8, w9, sxtw #4
0x06670334: 00e10491  add x0, x8, #0x138
0x06670338: 080840a9  ldp x8, x2, [x0]
0x0667033C: e00314aa  mov x0, x20
0x06670340: e10315aa  mov x1, x21
0x06670344: 00013fd6  blr x8
0x06670348: d60100b4  cbz x22, #0x6670380
0x0667034C: f40300aa  mov x20, x0
0x06670350: 601a40f9  ldr x0, [x19, #0x30]
0x06670354: c11a40f9  ldr x1, [x22, #0x30]
0x06670358: e2031faa  mov x2, xzr
0x0667035C: 45e9b997  bl #0x54ea870
0x06670360: 540000b4  cbz x20, #0x6670368
0x06670364: 40000037  tbnz w0, #0, #0x667036c
0x06670368: f4031faa  mov x20, xzr
0x0667036C: e00314aa  mov x0, x20
0x06670370: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06670374: f65741a9  ldp x22, x21, [sp, #0x10]
0x06670378: fe0743f8  ldr x30, [sp], #0x30
0x0667037C: c0035fd6  ret
0x06670380: 4b422c97  bl #0x3180cac

; RVA 0x6670384 | public void .ctor() { }
; bytes=8 sha256=8630d585a130cc884f20c7b4a5ca23a97c98ede8ece2aea5e94eea5cd7df74e4 status=arm64_complete_bound indexed_start=True
0x06670384: e1031faa  mov x1, xzr
0x06670388: 6edcf417  b #0x63a7540

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D21A0C | MergeEngine.ECS.Systems.Board.MergeSystem$$HandleMergeItemCapacity<object>
; native signature: void MergeEngine_ECS_Systems_Board_MergeSystem__HandleMergeItemCapacity_object_ (MergeEngine_ECS_Systems_Board_MergeSystem_o* __this, MergeEngine_ECS_Entity_o* firstMerged, MergeEngine_ECS_Entity_o* secondMerged, MergeEngine_ECS_Entity_o* newEntity, const MethodInfo_3D21A0C* method);
; bytes=960 sha256=bfa5538c5f6bb9b6e40d560c7aa823e13bedd52eafcfdcd2e36e41c7fb5179f0 status=arm64_complete_bound indexed_start=True
0x03D21A0C: fe0f1df8  str x30, [sp, #-0x30]!
0x03D21A10: f65701a9  stp x22, x21, [sp, #0x10]
0x03D21A14: f44f02a9  stp x20, x19, [sp, #0x20]
0x03D21A18: 881c40f9  ldr x8, [x4, #0x38]
0x03D21A1C: f60304aa  mov x22, x4
0x03D21A20: f30303aa  mov x19, x3
0x03D21A24: f40302aa  mov x20, x2
0x03D21A28: f50301aa  mov x21, x1
0x03D21A2C: 080100b5  cbnz x8, #0x3d21a4c
0x03D21A30: c0ca01b0  adrp x0, #0x767a000
0x03D21A34: 000043f9  ldr x0, [x0, #0x600]
0x03D21A38: f87bd197  bl #0x3180a18
0x03D21A3C: c81e40f9  ldr x8, [x22, #0x38]
0x03D21A40: 680000b5  cbnz x8, #0x3d21a4c
0x03D21A44: e00316aa  mov x0, x22
0x03D21A48: 8cd3d097  bl #0x3156878
0x03D21A4C: f51b00b4  cbz x21, #0x3d21dc8
0x03D21A50: c81e40f9  ldr x8, [x22, #0x38]
0x03D21A54: e00315aa  mov x0, x21
0x03D21A58: 010140f9  ldr x1, [x8]
0x03D21A5C: cafcfb97  bl #0x3c20d84
0x03D21A60: 541b00b4  cbz x20, #0x3d21dc8
0x03D21A64: c81e40f9  ldr x8, [x22, #0x38]
0x03D21A68: f50300aa  mov x21, x0
0x03D21A6C: e00314aa  mov x0, x20
0x03D21A70: 010140f9  ldr x1, [x8]
0x03D21A74: c4fcfb97  bl #0x3c20d84
0x03D21A78: 931a00b4  cbz x19, #0x3d21dc8
0x03D21A7C: c81e40f9  ldr x8, [x22, #0x38]
0x03D21A80: f40300aa  mov x20, x0
0x03D21A84: e00313aa  mov x0, x19
0x03D21A88: 010140f9  ldr x1, [x8]
0x03D21A8C: befcfb97  bl #0x3c20d84
0x03D21A90: d50200b4  cbz x21, #0x3d21ae8
0x03D21A94: b40200b4  cbz x20, #0x3d21ae8
0x03D21A98: f30300aa  mov x19, x0
0x03D21A9C: 600200b4  cbz x0, #0x3d21ae8
0x03D21AA0: d6ca01b0  adrp x22, #0x767a000
0x03D21AA4: a80240f9  ldr x8, [x21]
0x03D21AA8: d60243f9  ldr x22, [x22, #0x600]
0x03D21AAC: 095d4279  ldrh w9, [x8, #0x12e]
0x03D21AB0: c10240f9  ldr x1, [x22]
0x03D21AB4: 290100b4  cbz x9, #0x3d21ad8
0x03D21AB8: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D21ABC: 4a210091  add x10, x10, #8
0x03D21AC0: 4b815ff8  ldur x11, [x10, #-8]
0x03D21AC4: 7f0101eb  cmp x11, x1
0x03D21AC8: 80010054  b.eq #0x3d21af8
0x03D21ACC: 290500f1  subs x9, x9, #1
0x03D21AD0: 4a410091  add x10, x10, #0x10
0x03D21AD4: 61ffff54  b.ne #0x3d21ac0
0x03D21AD8: 42018052  movz w2, #0xa
0x03D21ADC: e00315aa  mov x0, x21
0x03D21AE0: 0cd4d097  bl #0x3156b10
0x03D21AE4: 09000014  b #0x3d21b08
0x03D21AE8: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03D21AEC: f65741a9  ldp x22, x21, [sp, #0x10]
0x03D21AF0: fe0743f8  ldr x30, [sp], #0x30
0x03D21AF4: c0035fd6  ret
0x03D21AF8: 490140b9  ldr w9, [x10]
0x03D21AFC: 29290011  add w9, w9, #0xa
0x03D21B00: 08d1298b  add x8, x8, w9, sxtw #4
0x03D21B04: 00e10491  add x0, x8, #0x138
0x03D21B08: 080440a9  ldp x8, x1, [x0]
0x03D21B0C: e00315aa  mov x0, x21
0x03D21B10: 00013fd6  blr x8
0x03D21B14: 880240f9  ldr x8, [x20]
0x03D21B18: c10240f9  ldr x1, [x22]
0x03D21B1C: f503002a  mov w21, w0
0x03D21B20: 095d4279  ldrh w9, [x8, #0x12e]
0x03D21B24: 290100b4  cbz x9, #0x3d21b48
0x03D21B28: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D21B2C: 4a210091  add x10, x10, #8
0x03D21B30: 4b815ff8  ldur x11, [x10, #-8]
0x03D21B34: 7f0101eb  cmp x11, x1
0x03D21B38: 00010054  b.eq #0x3d21b58
0x03D21B3C: 290500f1  subs x9, x9, #1
0x03D21B40: 4a410091  add x10, x10, #0x10
0x03D21B44: 61ffff54  b.ne #0x3d21b30
0x03D21B48: 42018052  movz w2, #0xa
0x03D21B4C: e00314aa  mov x0, x20
0x03D21B50: f0d3d097  bl #0x3156b10
0x03D21B54: 05000014  b #0x3d21b68
0x03D21B58: 490140b9  ldr w9, [x10]
0x03D21B5C: 29290011  add w9, w9, #0xa
0x03D21B60: 08d1298b  add x8, x8, w9, sxtw #4
0x03D21B64: 00e10491  add x0, x8, #0x138
0x03D21B68: 080440a9  ldp x8, x1, [x0]
0x03D21B6C: e00314aa  mov x0, x20
0x03D21B70: 00013fd6  blr x8
0x03D21B74: 680240f9  ldr x8, [x19]
0x03D21B78: c10240f9  ldr x1, [x22]
0x03D21B7C: 1400150b  add w20, w0, w21
0x03D21B80: 095d4279  ldrh w9, [x8, #0x12e]
0x03D21B84: 290100b4  cbz x9, #0x3d21ba8
0x03D21B88: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D21B8C: 4a210091  add x10, x10, #8
0x03D21B90: 4b815ff8  ldur x11, [x10, #-8]
0x03D21B94: 7f0101eb  cmp x11, x1
0x03D21B98: 00010054  b.eq #0x3d21bb8
0x03D21B9C: 290500f1  subs x9, x9, #1
0x03D21BA0: 4a410091  add x10, x10, #0x10
0x03D21BA4: 61ffff54  b.ne #0x3d21b90
0x03D21BA8: 62018052  movz w2, #0xb
0x03D21BAC: e00313aa  mov x0, x19
0x03D21BB0: d8d3d097  bl #0x3156b10
0x03D21BB4: 05000014  b #0x3d21bc8
0x03D21BB8: 490140b9  ldr w9, [x10]
0x03D21BBC: 292d0011  add w9, w9, #0xb
0x03D21BC0: 08d1298b  add x8, x8, w9, sxtw #4
0x03D21BC4: 00e10491  add x0, x8, #0x138
0x03D21BC8: 080840a9  ldp x8, x2, [x0]
0x03D21BCC: e00313aa  mov x0, x19
0x03D21BD0: e103142a  mov w1, w20
0x03D21BD4: 00013fd6  blr x8
0x03D21BD8: 680240f9  ldr x8, [x19]
0x03D21BDC: c10240f9  ldr x1, [x22]
0x03D21BE0: 095d4279  ldrh w9, [x8, #0x12e]
0x03D21BE4: 290100b4  cbz x9, #0x3d21c08
0x03D21BE8: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D21BEC: 4a210091  add x10, x10, #8
0x03D21BF0: 4b815ff8  ldur x11, [x10, #-8]
0x03D21BF4: 7f0101eb  cmp x11, x1
0x03D21BF8: 00010054  b.eq #0x3d21c18
0x03D21BFC: 290500f1  subs x9, x9, #1
0x03D21C00: 4a410091  add x10, x10, #0x10
0x03D21C04: 61ffff54  b.ne #0x3d21bf0
0x03D21C08: 42018052  movz w2, #0xa
0x03D21C0C: e00313aa  mov x0, x19
0x03D21C10: c0d3d097  bl #0x3156b10
0x03D21C14: 05000014  b #0x3d21c28
0x03D21C18: 490140b9  ldr w9, [x10]
0x03D21C1C: 29290011  add w9, w9, #0xa
0x03D21C20: 08d1298b  add x8, x8, w9, sxtw #4
0x03D21C24: 00e10491  add x0, x8, #0x138
0x03D21C28: 080440a9  ldp x8, x1, [x0]
0x03D21C2C: e00313aa  mov x0, x19
0x03D21C30: 00013fd6  blr x8
0x03D21C34: 680240f9  ldr x8, [x19]
0x03D21C38: c10240f9  ldr x1, [x22]
0x03D21C3C: f403002a  mov w20, w0
0x03D21C40: 095d4279  ldrh w9, [x8, #0x12e]
0x03D21C44: 290100b4  cbz x9, #0x3d21c68
0x03D21C48: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D21C4C: 4a210091  add x10, x10, #8
0x03D21C50: 4b815ff8  ldur x11, [x10, #-8]
0x03D21C54: 7f0101eb  cmp x11, x1
0x03D21C58: 00010054  b.eq #0x3d21c78
0x03D21C5C: 290500f1  subs x9, x9, #1
0x03D21C60: 4a410091  add x10, x10, #0x10
0x03D21C64: 61ffff54  b.ne #0x3d21c50
0x03D21C68: c2018052  movz w2, #0xe
0x03D21C6C: e00313aa  mov x0, x19
0x03D21C70: a8d3d097  bl #0x3156b10
0x03D21C74: 05000014  b #0x3d21c88
0x03D21C78: 490140b9  ldr w9, [x10]
0x03D21C7C: 29390011  add w9, w9, #0xe
0x03D21C80: 08d1298b  add x8, x8, w9, sxtw #4
0x03D21C84: 00e10491  add x0, x8, #0x138
0x03D21C88: 080440a9  ldp x8, x1, [x0]
0x03D21C8C: e00313aa  mov x0, x19
0x03D21C90: 00013fd6  blr x8
0x03D21C94: 9f02006b  cmp w20, w0
0x03D21C98: 2b030054  b.lt #0x3d21cfc
0x03D21C9C: 680240f9  ldr x8, [x19]
0x03D21CA0: c10240f9  ldr x1, [x22]
0x03D21CA4: 095d4279  ldrh w9, [x8, #0x12e]
0x03D21CA8: 290100b4  cbz x9, #0x3d21ccc
0x03D21CAC: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D21CB0: 4a210091  add x10, x10, #8
0x03D21CB4: 4b815ff8  ldur x11, [x10, #-8]
0x03D21CB8: 7f0101eb  cmp x11, x1
0x03D21CBC: 00010054  b.eq #0x3d21cdc
0x03D21CC0: 290500f1  subs x9, x9, #1
0x03D21CC4: 4a410091  add x10, x10, #0x10
0x03D21CC8: 61ffff54  b.ne #0x3d21cb4
0x03D21CCC: 02028052  movz w2, #0x10
0x03D21CD0: e00313aa  mov x0, x19
0x03D21CD4: 8fd3d097  bl #0x3156b10
0x03D21CD8: 05000014  b #0x3d21cec
0x03D21CDC: 490140b9  ldr w9, [x10]
0x03D21CE0: 29410011  add w9, w9, #0x10
0x03D21CE4: 08d1298b  add x8, x8, w9, sxtw #4
0x03D21CE8: 00e10491  add x0, x8, #0x138
0x03D21CEC: 080840a9  ldp x8, x2, [x0]
0x03D21CF0: 61008052  movz w1, #0x3
0x03D21CF4: e00313aa  mov x0, x19
0x03D21CF8: 00013fd6  blr x8
0x03D21CFC: 680240f9  ldr x8, [x19]
0x03D21D00: c10240f9  ldr x1, [x22]
0x03D21D04: 095d4279  ldrh w9, [x8, #0x12e]
0x03D21D08: 290100b4  cbz x9, #0x3d21d2c
0x03D21D0C: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D21D10: 4a210091  add x10, x10, #8
0x03D21D14: 4b815ff8  ldur x11, [x10, #-8]
0x03D21D18: 7f0101eb  cmp x11, x1
0x03D21D1C: 00010054  b.eq #0x3d21d3c
0x03D21D20: 290500f1  subs x9, x9, #1
0x03D21D24: 4a410091  add x10, x10, #0x10
0x03D21D28: 61ffff54  b.ne #0x3d21d14
0x03D21D2C: a2008052  movz w2, #0x5
0x03D21D30: e00313aa  mov x0, x19
0x03D21D34: 77d3d097  bl #0x3156b10
0x03D21D38: 05000014  b #0x3d21d4c
0x03D21D3C: 490140b9  ldr w9, [x10]
0x03D21D40: 29150011  add w9, w9, #5
0x03D21D44: 08d1298b  add x8, x8, w9, sxtw #4
0x03D21D48: 00e10491  add x0, x8, #0x138
0x03D21D4C: 080440a9  ldp x8, x1, [x0]
0x03D21D50: e003679e  fmov d0, xzr
0x03D21D54: e00313aa  mov x0, x19
0x03D21D58: 00013fd6  blr x8
0x03D21D5C: 680240f9  ldr x8, [x19]
0x03D21D60: c10240f9  ldr x1, [x22]
0x03D21D64: 095d4279  ldrh w9, [x8, #0x12e]
0x03D21D68: 290100b4  cbz x9, #0x3d21d8c
0x03D21D6C: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D21D70: 4a210091  add x10, x10, #8
0x03D21D74: 4b815ff8  ldur x11, [x10, #-8]
0x03D21D78: 7f0101eb  cmp x11, x1
0x03D21D7C: 00010054  b.eq #0x3d21d9c
0x03D21D80: 290500f1  subs x9, x9, #1
0x03D21D84: 4a410091  add x10, x10, #0x10
0x03D21D88: 61ffff54  b.ne #0x3d21d74
0x03D21D8C: e2008052  movz w2, #0x7
0x03D21D90: e00313aa  mov x0, x19
0x03D21D94: 5fd3d097  bl #0x3156b10
0x03D21D98: 05000014  b #0x3d21dac
0x03D21D9C: 490140b9  ldr w9, [x10]
0x03D21DA0: 291d0011  add w9, w9, #7
0x03D21DA4: 08d1298b  add x8, x8, w9, sxtw #4
0x03D21DA8: 00e10491  add x0, x8, #0x138
0x03D21DAC: 020440a9  ldp x2, x1, [x0]
0x03D21DB0: e00313aa  mov x0, x19
0x03D21DB4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03D21DB8: f65741a9  ldp x22, x21, [sp, #0x10]
0x03D21DBC: e003679e  fmov d0, xzr
0x03D21DC0: fe0743f8  ldr x30, [sp], #0x30
0x03D21DC4: 40001fd6  br x2
0x03D21DC8: b97bd197  bl #0x3180cac

