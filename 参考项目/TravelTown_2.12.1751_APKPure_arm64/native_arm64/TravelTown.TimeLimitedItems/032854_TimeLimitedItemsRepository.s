; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 32854 Merger.TimeLimitedItems.Handlers.TimeLimitedItemsRepository
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6B4D92C | public IPromise RequestCleanup(string eventId, OperationNotificationData[] boardOperations) { }
; bytes=796 sha256=8045e2fa3417014389e64835524092cb425c9f82cecf3cd7f84a9149227b4294 status=arm64_complete_bound indexed_start=True
0x06B4D92C: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x06B4D930: fc6f01a9  stp x28, x27, [sp, #0x10]
0x06B4D934: fa6702a9  stp x26, x25, [sp, #0x20]
0x06B4D938: f85f03a9  stp x24, x23, [sp, #0x30]
0x06B4D93C: f65704a9  stp x22, x21, [sp, #0x40]
0x06B4D940: f44f05a9  stp x20, x19, [sp, #0x50]
0x06B4D944: f78e00d0  adrp x23, #0x7d2b000
0x06B4D948: 585f00f0  adrp x24, #0x7738000
0x06B4D94C: 135900d0  adrp x19, #0x766f000
0x06B4D950: e8be4039  ldrb w8, [x23, #0x2f]
0x06B4D954: 183744f9  ldr x24, [x24, #0x868]
0x06B4D958: 737244f9  ldr x19, [x19, #0x8e0]
0x06B4D95C: f50302aa  mov x21, x2
0x06B4D960: f60301aa  mov x22, x1
0x06B4D964: f40300aa  mov x20, x0
0x06B4D968: 88040037  tbnz w8, #0, #0x6b4d9f8
0x06B4D96C: a05b00d0  adrp x0, #0x76c3000
0x06B4D970: 00c041f9  ldr x0, [x0, #0x380]
0x06B4D974: 29cc1897  bl #0x3180a18
0x06B4D978: 005900d0  adrp x0, #0x766f000
0x06B4D97C: 002041f9  ldr x0, [x0, #0x240]
0x06B4D980: 26cc1897  bl #0x3180a18
0x06B4D984: 005900d0  adrp x0, #0x766f000
0x06B4D988: 002441f9  ldr x0, [x0, #0x248]
0x06B4D98C: 23cc1897  bl #0x3180a18
0x06B4D990: a05b00d0  adrp x0, #0x76c3000
0x06B4D994: 00c841f9  ldr x0, [x0, #0x390]
0x06B4D998: 20cc1897  bl #0x3180a18
0x06B4D99C: 005900d0  adrp x0, #0x766f000
0x06B4D9A0: 007044f9  ldr x0, [x0, #0x8e0]
0x06B4D9A4: 1dcc1897  bl #0x3180a18
0x06B4D9A8: c05e00d0  adrp x0, #0x7727000
0x06B4D9AC: 006c42f9  ldr x0, [x0, #0x4d8]
0x06B4D9B0: 1acc1897  bl #0x3180a18
0x06B4D9B4: 405f00f0  adrp x0, #0x7738000
0x06B4D9B8: 003844f9  ldr x0, [x0, #0x870]
0x06B4D9BC: 17cc1897  bl #0x3180a18
0x06B4D9C0: 405f00f0  adrp x0, #0x7738000
0x06B4D9C4: 003c44f9  ldr x0, [x0, #0x878]
0x06B4D9C8: 14cc1897  bl #0x3180a18
0x06B4D9CC: 405f00f0  adrp x0, #0x7738000
0x06B4D9D0: 003444f9  ldr x0, [x0, #0x868]
0x06B4D9D4: 11cc1897  bl #0x3180a18
0x06B4D9D8: 405c00d0  adrp x0, #0x76d7000
0x06B4D9DC: 00f841f9  ldr x0, [x0, #0x3f0]
0x06B4D9E0: 0ecc1897  bl #0x3180a18
0x06B4D9E4: 405f00f0  adrp x0, #0x7738000
0x06B4D9E8: 004044f9  ldr x0, [x0, #0x880]
0x06B4D9EC: 0bcc1897  bl #0x3180a18
0x06B4D9F0: 28008052  movz w8, #0x1
0x06B4D9F4: e8be0039  strb w8, [x23, #0x2f]
0x06B4D9F8: 000340f9  ldr x0, [x24]
0x06B4D9FC: a9cc1897  bl #0x3180ca0
0x06B4DA00: e1031faa  mov x1, xzr
0x06B4DA04: f70300aa  mov x23, x0
0x06B4DA08: fd32ae97  bl #0x56da5fc
0x06B4DA0C: 600240f9  ldr x0, [x19]
0x06B4DA10: a4cc1897  bl #0x3180ca0
0x06B4DA14: e1031faa  mov x1, xzr
0x06B4DA18: f80300aa  mov x24, x0
0x06B4DA1C: a8cdb997  bl #0x59c10bc
0x06B4DA20: 371100b4  cbz x23, #0x6b4dc44
0x06B4DA24: 595f00f0  adrp x25, #0x7738000
0x06B4DA28: 5a5f00f0  adrp x26, #0x7738000
0x06B4DA2C: 5b5c00d0  adrp x27, #0x76d7000
0x06B4DA30: dc5e00d0  adrp x28, #0x7727000
0x06B4DA34: bd5b00d0  adrp x29, #0x76c3000
0x06B4DA38: 393b44f9  ldr x25, [x25, #0x870]
0x06B4DA3C: 5a4344f9  ldr x26, [x26, #0x880]
0x06B4DA40: 7bfb41f9  ldr x27, [x27, #0x3f0]
0x06B4DA44: 9c6f42f9  ldr x28, [x28, #0x4d8]
0x06B4DA48: bdc341f9  ldr x29, [x29, #0x380]
0x06B4DA4C: f30317aa  mov x19, x23
0x06B4DA50: 780e01f8  str x24, [x19, #0x10]!
0x06B4DA54: e00313aa  mov x0, x19
0x06B4DA58: e10318aa  mov x1, x24
0x06B4DA5C: dacb1897  bl #0x31809c4
0x06B4DA60: 200340f9  ldr x0, [x25]
0x06B4DA64: 8fcc1897  bl #0x3180ca0
0x06B4DA68: e10316aa  mov x1, x22
0x06B4DA6C: e20315aa  mov x2, x21
0x06B4DA70: f80300aa  mov x24, x0
0x06B4DA74: 77000094  bl #0x6b4dc50
0x06B4DA78: 410340f9  ldr x1, [x26]
0x06B4DA7C: 620340f9  ldr x2, [x27]
0x06B4DA80: 870340f9  ldr x7, [x28]
0x06B4DA84: c4038052  movz w4, #0x1e
0x06B4DA88: e00314aa  mov x0, x20
0x06B4DA8C: e30318aa  mov x3, x24
0x06B4DA90: e5031f2a  mov w5, wzr
0x06B4DA94: e6031faa  mov x6, xzr
0x06B4DA98: bb984897  bl #0x3d73d84
0x06B4DA9C: a80340f9  ldr x8, [x29]
0x06B4DAA0: f40300aa  mov x20, x0
0x06B4DAA4: e00308aa  mov x0, x8
0x06B4DAA8: 7ecc1897  bl #0x3180ca0
0x06B4DAAC: 485f00f0  adrp x8, #0x7738000
0x06B4DAB0: 083d44f9  ldr x8, [x8, #0x878]
0x06B4DAB4: e10317aa  mov x1, x23
0x06B4DAB8: e3031faa  mov x3, xzr
0x06B4DABC: f50300aa  mov x21, x0
0x06B4DAC0: 020140f9  ldr x2, [x8]
0x06B4DAC4: c4519f97  bl #0x53221d4
0x06B4DAC8: f40b00b4  cbz x20, #0x6b4dc44
0x06B4DACC: aa5b00d0  adrp x10, #0x76c3000
0x06B4DAD0: 880240f9  ldr x8, [x20]
0x06B4DAD4: 4ac941f9  ldr x10, [x10, #0x390]
0x06B4DAD8: 175900d0  adrp x23, #0x766f000
0x06B4DADC: 095d4279  ldrh w9, [x8, #0x12e]
0x06B4DAE0: 410140f9  ldr x1, [x10]
0x06B4DAE4: f72241f9  ldr x23, [x23, #0x240]
0x06B4DAE8: 290100b4  cbz x9, #0x6b4db0c
0x06B4DAEC: 0a5940f9  ldr x10, [x8, #0xb0]
0x06B4DAF0: 4a210091  add x10, x10, #8
0x06B4DAF4: 4b815ff8  ldur x11, [x10, #-8]
0x06B4DAF8: 7f0101eb  cmp x11, x1
0x06B4DAFC: 00010054  b.eq #0x6b4db1c
0x06B4DB00: 290500f1  subs x9, x9, #1
0x06B4DB04: 4a410091  add x10, x10, #0x10
0x06B4DB08: 61ffff54  b.ne #0x6b4daf4
0x06B4DB0C: e00314aa  mov x0, x20
0x06B4DB10: e2031f2a  mov w2, wzr
0x06B4DB14: ff231897  bl #0x3156b10
0x06B4DB18: 04000014  b #0x6b4db28
0x06B4DB1C: 490180b9  ldrsw x9, [x10]
0x06B4DB20: 0811098b  add x8, x8, x9, lsl #4
0x06B4DB24: 00e10491  add x0, x8, #0x138
0x06B4DB28: 080840a9  ldp x8, x2, [x0]
0x06B4DB2C: e00314aa  mov x0, x20
0x06B4DB30: e10315aa  mov x1, x21
0x06B4DB34: 00013fd6  blr x8
0x06B4DB38: e80240f9  ldr x8, [x23]
0x06B4DB3C: 760240f9  ldr x22, [x19]
0x06B4DB40: f40300aa  mov x20, x0
0x06B4DB44: e00308aa  mov x0, x8
0x06B4DB48: 56cc1897  bl #0x3180ca0
0x06B4DB4C: d60700b4  cbz x22, #0x6b4dc44
0x06B4DB50: 175900d0  adrp x23, #0x766f000
0x06B4DB54: c80240f9  ldr x8, [x22]
0x06B4DB58: f72641f9  ldr x23, [x23, #0x248]
0x06B4DB5C: f50300aa  mov x21, x0
0x06B4DB60: 095d4279  ldrh w9, [x8, #0x12e]
0x06B4DB64: e10240f9  ldr x1, [x23]
0x06B4DB68: 290100b4  cbz x9, #0x6b4db8c
0x06B4DB6C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06B4DB70: 4a210091  add x10, x10, #8
0x06B4DB74: 4b815ff8  ldur x11, [x10, #-8]
0x06B4DB78: 7f0101eb  cmp x11, x1
0x06B4DB7C: 00010054  b.eq #0x6b4db9c
0x06B4DB80: 290500f1  subs x9, x9, #1
0x06B4DB84: 4a410091  add x10, x10, #0x10
0x06B4DB88: 61ffff54  b.ne #0x6b4db74
0x06B4DB8C: 82008052  movz w2, #0x4
0x06B4DB90: e00316aa  mov x0, x22
0x06B4DB94: df231897  bl #0x3156b10
0x06B4DB98: 05000014  b #0x6b4dbac
0x06B4DB9C: 490140b9  ldr w9, [x10]
0x06B4DBA0: 29110011  add w9, w9, #4
0x06B4DBA4: 08d1298b  add x8, x8, w9, sxtw #4
0x06B4DBA8: 00e10491  add x0, x8, #0x138
0x06B4DBAC: 020440f9  ldr x2, [x0, #8]
0x06B4DBB0: e00315aa  mov x0, x21
0x06B4DBB4: e10316aa  mov x1, x22
0x06B4DBB8: e3031faa  mov x3, xzr
0x06B4DBBC: 86519f97  bl #0x53221d4
0x06B4DBC0: 340400b4  cbz x20, #0x6b4dc44
0x06B4DBC4: 880240f9  ldr x8, [x20]
0x06B4DBC8: e10240f9  ldr x1, [x23]
0x06B4DBCC: 095d4279  ldrh w9, [x8, #0x12e]
0x06B4DBD0: 290100b4  cbz x9, #0x6b4dbf4
0x06B4DBD4: 0a5940f9  ldr x10, [x8, #0xb0]
0x06B4DBD8: 4a210091  add x10, x10, #8
0x06B4DBDC: 4b815ff8  ldur x11, [x10, #-8]
0x06B4DBE0: 7f0101eb  cmp x11, x1
0x06B4DBE4: 00010054  b.eq #0x6b4dc04
0x06B4DBE8: 290500f1  subs x9, x9, #1
0x06B4DBEC: 4a410091  add x10, x10, #0x10
0x06B4DBF0: 61ffff54  b.ne #0x6b4dbdc
0x06B4DBF4: 22008052  movz w2, #0x1
0x06B4DBF8: e00314aa  mov x0, x20
0x06B4DBFC: c5231897  bl #0x3156b10
0x06B4DC00: 05000014  b #0x6b4dc14
0x06B4DC04: 490140b9  ldr w9, [x10]
0x06B4DC08: 29050011  add w9, w9, #1
0x06B4DC0C: 08d1298b  add x8, x8, w9, sxtw #4
0x06B4DC10: 00e10491  add x0, x8, #0x138
0x06B4DC14: 080840a9  ldp x8, x2, [x0]
0x06B4DC18: e00314aa  mov x0, x20
0x06B4DC1C: e10315aa  mov x1, x21
0x06B4DC20: 00013fd6  blr x8
0x06B4DC24: 600240f9  ldr x0, [x19]
0x06B4DC28: f44f45a9  ldp x20, x19, [sp, #0x50]
0x06B4DC2C: f65744a9  ldp x22, x21, [sp, #0x40]
0x06B4DC30: f85f43a9  ldp x24, x23, [sp, #0x30]
0x06B4DC34: fa6742a9  ldp x26, x25, [sp, #0x20]
0x06B4DC38: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x06B4DC3C: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x06B4DC40: c0035fd6  ret
0x06B4DC44: 1acc1897  bl #0x3180cac

; RVA 0x6B4DC94 | public void .ctor() { }
; bytes=8 sha256=0edcbcd0b298b05fcd33d88aadbccbd9c4d13dff649d4b3b770f25fdec6c1a32 status=arm64_complete_bound indexed_start=True
0x06B4DC94: e1031faa  mov x1, xzr
0x06B4DC98: 5a3ff717  b #0x691da00

