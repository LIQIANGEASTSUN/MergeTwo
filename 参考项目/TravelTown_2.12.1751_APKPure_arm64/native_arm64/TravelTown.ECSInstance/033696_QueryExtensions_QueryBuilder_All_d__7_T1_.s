; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 33696 .QueryExtensions.QueryBuilder.<All>d__7<T1>
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C9FA38 | ContextualizedECS.Query.QueryExtensions.QueryBuilder.<All>d__7<__Il2CppFullySharedGenericType>$$.ctor
; native signature: void ContextualizedECS_Query_QueryExtensions_QueryBuilder__All_d__7___Il2CppFullySharedGenericType____ctor (ContextualizedECS_Query_QueryExtensions_QueryBuilder__All_d__7_T1__o* __this, int32_t __1__state, const MethodInfo_4C9FA38* method);
; bytes=104 sha256=bdbb92a9a7739d4f596affb1bf66e09b6b230d38f1f9433e2d1d341ee2aa7759 status=arm64_complete_bound indexed_start=True
0x04C9FA38: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x04C9FA3C: f44f01a9  stp x20, x19, [sp, #0x10]
0x04C9FA40: f403012a  mov w20, w1
0x04C9FA44: e1031faa  mov x1, xzr
0x04C9FA48: f30302aa  mov x19, x2
0x04C9FA4C: f50300aa  mov x21, x0
0x04C9FA50: ebea2894  bl #0x56da5fc
0x04C9FA54: 681240f9  ldr x8, [x19, #0x20]
0x04C9FA58: e00315aa  mov x0, x21
0x04C9FA5C: e203142a  mov w2, w20
0x04C9FA60: 086140f9  ldr x8, [x8, #0xc0]
0x04C9FA64: 080140f9  ldr x8, [x8]
0x04C9FA68: 014140f9  ldr x1, [x8, #0x80]
0x04C9FA6C: 21df8597  bl #0x2e176f0
0x04C9FA70: e0031faa  mov x0, xzr
0x04C9FA74: 95fa2894  bl #0x56de4c8
0x04C9FA78: 681240f9  ldr x8, [x19, #0x20]
0x04C9FA7C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x04C9FA80: e203002a  mov w2, w0
0x04C9FA84: e00315aa  mov x0, x21
0x04C9FA88: 086140f9  ldr x8, [x8, #0xc0]
0x04C9FA8C: 080140f9  ldr x8, [x8]
0x04C9FA90: 084140f9  ldr x8, [x8, #0x80]
0x04C9FA94: 01010191  add x1, x8, #0x40
0x04C9FA98: fe57c2a8  ldp x30, x21, [sp], #0x20
0x04C9FA9C: 15df8517  b #0x2e176f0

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C9FAA0 | ContextualizedECS.Query.QueryExtensions.QueryBuilder.<All>d__7<__Il2CppFullySharedGenericType>$$System.IDisposable.Dispose
; native signature: void ContextualizedECS_Query_QueryExtensions_QueryBuilder__All_d__7___Il2CppFullySharedGenericType___System_IDisposable_Dispose (ContextualizedECS_Query_QueryExtensions_QueryBuilder__All_d__7_T1__o* __this, const MethodInfo_4C9FAA0* method);
; bytes=96 sha256=b8b88e794f235ff6175dd2fa282020514670c5fe947262c880438a24f517d270 status=arm64_complete_bound indexed_start=True
0x04C9FAA0: fe0f1ef8  str x30, [sp, #-0x20]!
0x04C9FAA4: f44f01a9  stp x20, x19, [sp, #0x10]
0x04C9FAA8: 281040f9  ldr x8, [x1, #0x20]
0x04C9FAAC: f30301aa  mov x19, x1
0x04C9FAB0: f40300aa  mov x20, x0
0x04C9FAB4: 086140f9  ldr x8, [x8, #0xc0]
0x04C9FAB8: 080140f9  ldr x8, [x8]
0x04C9FABC: 014140f9  ldr x1, [x8, #0x80]
0x04C9FAC0: de839397  bl #0x3180a38
0x04C9FAC4: 080040b9  ldr w8, [x0]
0x04C9FAC8: 1f050071  cmp w8, #1
0x04C9FACC: 0419433a  ccmn w8, #3, #4, ne
0x04C9FAD0: 21010054  b.ne #0x4c9faf4
0x04C9FAD4: 681240f9  ldr x8, [x19, #0x20]
0x04C9FAD8: e00314aa  mov x0, x20
0x04C9FADC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x04C9FAE0: 086140f9  ldr x8, [x8, #0xc0]
0x04C9FAE4: 010540f9  ldr x1, [x8, #8]
0x04C9FAE8: 220040f9  ldr x2, [x1]
0x04C9FAEC: fe0742f8  ldr x30, [sp], #0x20
0x04C9FAF0: 40001fd6  br x2
0x04C9FAF4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x04C9FAF8: fe0742f8  ldr x30, [sp], #0x20
0x04C9FAFC: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C9FB00 | ContextualizedECS.Query.QueryExtensions.QueryBuilder.<All>d__7<__Il2CppFullySharedGenericType>$$MoveNext
; native signature: bool ContextualizedECS_Query_QueryExtensions_QueryBuilder__All_d__7___Il2CppFullySharedGenericType___MoveNext (ContextualizedECS_Query_QueryExtensions_QueryBuilder__All_d__7_T1__o* __this, const MethodInfo_4C9FB00* method);
; bytes=1420 sha256=798fa2645d7e7c0792b73171f2ca0d6fa7e21010d4c6bc03214a2a79af9d9bd8 status=arm64_complete_bound indexed_start=True
0x04C9FB00: fd7bbba9  stp x29, x30, [sp, #-0x50]!
0x04C9FB04: fa6701a9  stp x26, x25, [sp, #0x10]
0x04C9FB08: f85f02a9  stp x24, x23, [sp, #0x20]
0x04C9FB0C: f65703a9  stp x22, x21, [sp, #0x30]
0x04C9FB10: f44f04a9  stp x20, x19, [sp, #0x40]
0x04C9FB14: fd030091  mov x29, sp
0x04C9FB18: ff0301d1  sub sp, sp, #0x40
0x04C9FB1C: 58d03bd5  mrs x24, tpidr_el0
0x04C9FB20: 081740f9  ldr x8, [x24, #0x28]
0x04C9FB24: f4830190  adrp x20, #0x7d1b000
0x04C9FB28: f30301aa  mov x19, x1
0x04C9FB2C: f60300aa  mov x22, x0
0x04C9FB30: a8831ff8  stur x8, [x29, #-8]
0x04C9FB34: 88be4a39  ldrb w8, [x20, #0x2af]
0x04C9FB38: a1833da9  stp x1, x0, [x29, #-0x28]
0x04C9FB3C: 88010037  tbnz w8, #0, #0x4c9fb6c
0x04C9FB40: e04e01d0  adrp x0, #0x767d000
0x04C9FB44: 00f845f9  ldr x0, [x0, #0xbf0]
0x04C9FB48: b4839397  bl #0x3180a18
0x04C9FB4C: e04e01d0  adrp x0, #0x767d000
0x04C9FB50: 00fc45f9  ldr x0, [x0, #0xbf8]
0x04C9FB54: b1839397  bl #0x3180a18
0x04C9FB58: 604d01f0  adrp x0, #0x764e000
0x04C9FB5C: 007044f9  ldr x0, [x0, #0x8e0]
0x04C9FB60: ae839397  bl #0x3180a18
0x04C9FB64: 28008052  movz w8, #0x1
0x04C9FB68: 88be0a39  strb w8, [x20, #0x2af]
0x04C9FB6C: 771240f9  ldr x23, [x19, #0x20]
0x04C9FB70: e86240f9  ldr x8, [x23, #0xc0]
0x04C9FB74: 082140f9  ldr x8, [x8, #0x40]
0x04C9FB78: 13fd40b9  ldr w19, [x8, #0xfc]
0x04C9FB7C: e8030091  mov x8, sp
0x04C9FB80: 693e0091  add x9, x19, #0xf
0x04C9FB84: 29717c92  and x9, x9, #0x1fffffff0
0x04C9FB88: 140109cb  sub x20, x8, x9
0x04C9FB8C: 9f020091  mov sp, x20
0x04C9FB90: e8030091  mov x8, sp
0x04C9FB94: 150109cb  sub x21, x8, x9
0x04C9FB98: bf020091  mov sp, x21
0x04C9FB9C: e00315aa  mov x0, x21
0x04C9FBA0: e1031f2a  mov w1, wzr
0x04C9FBA4: e20313aa  mov x2, x19
0x04C9FBA8: 7ebb9494  bl #0x71ce9a0
0x04C9FBAC: a8a300d1  sub x8, x29, #0x28
0x04C9FBB0: a98300d1  sub x9, x29, #0x20
0x04C9FBB4: bf233ca9  stp xzr, x8, [x29, #-0x40]
0x04C9FBB8: a9031df8  stur x9, [x29, #-0x30]
0x04C9FBBC: e86240f9  ldr x8, [x23, #0xc0]
0x04C9FBC0: 080140f9  ldr x8, [x8]
0x04C9FBC4: 014140f9  ldr x1, [x8, #0x80]
0x04C9FBC8: e00316aa  mov x0, x22
0x04C9FBCC: 9b839397  bl #0x3180a38
0x04C9FBD0: 080040b9  ldr w8, [x0]
0x04C9FBD4: 68010034  cbz w8, #0x4c9fc00
0x04C9FBD8: 1f050071  cmp w8, #1
0x04C9FBDC: 211e0054  b.ne #0x4c9ffa0
0x04C9FBE0: a8837da9  ldp x8, x0, [x29, #-0x28]
0x04C9FBE4: 081140f9  ldr x8, [x8, #0x20]
0x04C9FBE8: 086140f9  ldr x8, [x8, #0xc0]
0x04C9FBEC: 080140f9  ldr x8, [x8]
0x04C9FBF0: 014140f9  ldr x1, [x8, #0x80]
0x04C9FBF4: 42008012  movn w2, #0x2
0x04C9FBF8: bede8597  bl #0x2e176f0
0x04C9FBFC: 38000014  b #0x4c9fcdc
0x04C9FC00: a8837da9  ldp x8, x0, [x29, #-0x28]
0x04C9FC04: 081140f9  ldr x8, [x8, #0x20]
0x04C9FC08: 086140f9  ldr x8, [x8, #0xc0]
0x04C9FC0C: 080140f9  ldr x8, [x8]
0x04C9FC10: 014140f9  ldr x1, [x8, #0x80]
0x04C9FC14: 02008012  movn w2, #0
0x04C9FC18: b6de8597  bl #0x2e176f0
0x04C9FC1C: a8837da9  ldp x8, x0, [x29, #-0x28]
0x04C9FC20: 081140f9  ldr x8, [x8, #0x20]
0x04C9FC24: 086140f9  ldr x8, [x8, #0xc0]
0x04C9FC28: 080140f9  ldr x8, [x8]
0x04C9FC2C: 084140f9  ldr x8, [x8, #0x80]
0x04C9FC30: 01810191  add x1, x8, #0x60
0x04C9FC34: 81839397  bl #0x3180a38
0x04C9FC38: 160040f9  ldr x22, [x0]
0x04C9FC3C: 561d00b4  cbz x22, #0x4c9ffe4
0x04C9FC40: ea4e01d0  adrp x10, #0x767d000
0x04C9FC44: c80240f9  ldr x8, [x22]
0x04C9FC48: 4af945f9  ldr x10, [x10, #0xbf0]
0x04C9FC4C: 095d4279  ldrh w9, [x8, #0x12e]
0x04C9FC50: 410140f9  ldr x1, [x10]
0x04C9FC54: 290100b4  cbz x9, #0x4c9fc78
0x04C9FC58: 0a5940f9  ldr x10, [x8, #0xb0]
0x04C9FC5C: 4a210091  add x10, x10, #8
0x04C9FC60: 4b815ff8  ldur x11, [x10, #-8]
0x04C9FC64: 7f0101eb  cmp x11, x1
0x04C9FC68: 00010054  b.eq #0x4c9fc88
0x04C9FC6C: 290500f1  subs x9, x9, #1
0x04C9FC70: 4a410091  add x10, x10, #0x10
0x04C9FC74: 61ffff54  b.ne #0x4c9fc60
0x04C9FC78: e00316aa  mov x0, x22
0x04C9FC7C: e2031f2a  mov w2, wzr
0x04C9FC80: a4db9297  bl #0x3156b10
0x04C9FC84: 04000014  b #0x4c9fc94
0x04C9FC88: 490180b9  ldrsw x9, [x10]
0x04C9FC8C: 0811098b  add x8, x8, x9, lsl #4
0x04C9FC90: 00e10491  add x0, x8, #0x138
0x04C9FC94: 080440a9  ldp x8, x1, [x0]
0x04C9FC98: e00316aa  mov x0, x22
0x04C9FC9C: 00013fd6  blr x8
0x04C9FCA0: e20300aa  mov x2, x0
0x04C9FCA4: a8837da9  ldp x8, x0, [x29, #-0x28]
0x04C9FCA8: 081140f9  ldr x8, [x8, #0x20]
0x04C9FCAC: 086140f9  ldr x8, [x8, #0xc0]
0x04C9FCB0: 080140f9  ldr x8, [x8]
0x04C9FCB4: 084140f9  ldr x8, [x8, #0x80]
0x04C9FCB8: 01810291  add x1, x8, #0xa0
0x04C9FCBC: 9fde8597  bl #0x2e17738
0x04C9FCC0: a8837da9  ldp x8, x0, [x29, #-0x28]
0x04C9FCC4: 081140f9  ldr x8, [x8, #0x20]
0x04C9FCC8: 086140f9  ldr x8, [x8, #0xc0]
0x04C9FCCC: 080140f9  ldr x8, [x8]
0x04C9FCD0: 014140f9  ldr x1, [x8, #0x80]
0x04C9FCD4: 42008012  movn w2, #0x2
0x04C9FCD8: 86de8597  bl #0x2e176f0
0x04C9FCDC: 794d01f0  adrp x25, #0x764e000
0x04C9FCE0: fa4e01d0  adrp x26, #0x767d000
0x04C9FCE4: 397344f9  ldr x25, [x25, #0x8e0]
0x04C9FCE8: 5aff45f9  ldr x26, [x26, #0xbf8]
0x04C9FCEC: a8837da9  ldp x8, x0, [x29, #-0x28]
0x04C9FCF0: 081140f9  ldr x8, [x8, #0x20]
0x04C9FCF4: 086140f9  ldr x8, [x8, #0xc0]
0x04C9FCF8: 080140f9  ldr x8, [x8]
0x04C9FCFC: 084140f9  ldr x8, [x8, #0x80]
0x04C9FD00: 01810291  add x1, x8, #0xa0
0x04C9FD04: 4d839397  bl #0x3180a38
0x04C9FD08: 160040f9  ldr x22, [x0]
0x04C9FD0C: 561600b4  cbz x22, #0x4c9ffd4
0x04C9FD10: c80240f9  ldr x8, [x22]
0x04C9FD14: 210340f9  ldr x1, [x25]
0x04C9FD18: 095d4279  ldrh w9, [x8, #0x12e]
0x04C9FD1C: 290100b4  cbz x9, #0x4c9fd40
0x04C9FD20: 0a5940f9  ldr x10, [x8, #0xb0]
0x04C9FD24: 4a210091  add x10, x10, #8
0x04C9FD28: 4b815ff8  ldur x11, [x10, #-8]
0x04C9FD2C: 7f0101eb  cmp x11, x1
0x04C9FD30: 00010054  b.eq #0x4c9fd50
0x04C9FD34: 290500f1  subs x9, x9, #1
0x04C9FD38: 4a410091  add x10, x10, #0x10
0x04C9FD3C: 61ffff54  b.ne #0x4c9fd28
0x04C9FD40: e00316aa  mov x0, x22
0x04C9FD44: e2031f2a  mov w2, wzr
0x04C9FD48: 72db9297  bl #0x3156b10
0x04C9FD4C: 04000014  b #0x4c9fd5c
0x04C9FD50: 490180b9  ldrsw x9, [x10]
0x04C9FD54: 0811098b  add x8, x8, x9, lsl #4
0x04C9FD58: 00e10491  add x0, x8, #0x138
0x04C9FD5C: 080440a9  ldp x8, x1, [x0]
0x04C9FD60: e00316aa  mov x0, x22
0x04C9FD64: 00013fd6  blr x8
0x04C9FD68: 00100036  tbz w0, #0, #0x4c9ff68
0x04C9FD6C: a8837da9  ldp x8, x0, [x29, #-0x28]
0x04C9FD70: 081140f9  ldr x8, [x8, #0x20]
0x04C9FD74: 086140f9  ldr x8, [x8, #0xc0]
0x04C9FD78: 080140f9  ldr x8, [x8]
0x04C9FD7C: 084140f9  ldr x8, [x8, #0x80]
0x04C9FD80: 01810291  add x1, x8, #0xa0
0x04C9FD84: 2d839397  bl #0x3180a38
0x04C9FD88: 160040f9  ldr x22, [x0]
0x04C9FD8C: 761200b4  cbz x22, #0x4c9ffd8
0x04C9FD90: c80240f9  ldr x8, [x22]
0x04C9FD94: 410340f9  ldr x1, [x26]
0x04C9FD98: 095d4279  ldrh w9, [x8, #0x12e]
0x04C9FD9C: 290100b4  cbz x9, #0x4c9fdc0
0x04C9FDA0: 0a5940f9  ldr x10, [x8, #0xb0]
0x04C9FDA4: 4a210091  add x10, x10, #8
0x04C9FDA8: 4b815ff8  ldur x11, [x10, #-8]
0x04C9FDAC: 7f0101eb  cmp x11, x1
0x04C9FDB0: 00010054  b.eq #0x4c9fdd0
0x04C9FDB4: 290500f1  subs x9, x9, #1
0x04C9FDB8: 4a410091  add x10, x10, #0x10
0x04C9FDBC: 61ffff54  b.ne #0x4c9fda8
0x04C9FDC0: e00316aa  mov x0, x22
0x04C9FDC4: e2031f2a  mov w2, wzr
0x04C9FDC8: 52db9297  bl #0x3156b10
0x04C9FDCC: 04000014  b #0x4c9fddc
0x04C9FDD0: 490180b9  ldrsw x9, [x10]
0x04C9FDD4: 0811098b  add x8, x8, x9, lsl #4
0x04C9FDD8: 00e10491  add x0, x8, #0x138
0x04C9FDDC: 080440a9  ldp x8, x1, [x0]
0x04C9FDE0: e00316aa  mov x0, x22
0x04C9FDE4: 00013fd6  blr x8
0x04C9FDE8: f60300aa  mov x22, x0
0x04C9FDEC: a8837da9  ldp x8, x0, [x29, #-0x28]
0x04C9FDF0: 081140f9  ldr x8, [x8, #0x20]
0x04C9FDF4: 086140f9  ldr x8, [x8, #0xc0]
0x04C9FDF8: 080140f9  ldr x8, [x8]
0x04C9FDFC: 084140f9  ldr x8, [x8, #0x80]
0x04C9FE00: 01810191  add x1, x8, #0x60
0x04C9FE04: 0d839397  bl #0x3180a38
0x04C9FE08: 080c40f9  ldr x8, [x0, #0x18]
0x04C9FE0C: 080200b4  cbz x8, #0x4c9fe4c
0x04C9FE10: a8837da9  ldp x8, x0, [x29, #-0x28]
0x04C9FE14: 081140f9  ldr x8, [x8, #0x20]
0x04C9FE18: 086140f9  ldr x8, [x8, #0xc0]
0x04C9FE1C: 080140f9  ldr x8, [x8]
0x04C9FE20: 084140f9  ldr x8, [x8, #0x80]
0x04C9FE24: 01810191  add x1, x8, #0x60
0x04C9FE28: 04839397  bl #0x3180a38
0x04C9FE2C: 080c40f9  ldr x8, [x0, #0x18]
0x04C9FE30: 880d00b4  cbz x8, #0x4c9ffe0
0x04C9FE34: 002140f9  ldr x0, [x8, #0x40]
0x04C9FE38: 090d40f9  ldr x9, [x8, #0x18]
0x04C9FE3C: 021540f9  ldr x2, [x8, #0x28]
0x04C9FE40: e10316aa  mov x1, x22
0x04C9FE44: 20013fd6  blr x9
0x04C9FE48: 20f50737  tbnz w0, #0, #0x4c9fcec
0x04C9FE4C: a8837da9  ldp x8, x0, [x29, #-0x28]
0x04C9FE50: 081140f9  ldr x8, [x8, #0x20]
0x04C9FE54: 086140f9  ldr x8, [x8, #0xc0]
0x04C9FE58: 080140f9  ldr x8, [x8]
0x04C9FE5C: 084140f9  ldr x8, [x8, #0x80]
0x04C9FE60: 01810191  add x1, x8, #0x60
0x04C9FE64: f5829397  bl #0x3180a38
0x04C9FE68: 000840f9  ldr x0, [x0, #0x10]
0x04C9FE6C: 800b00b4  cbz x0, #0x4c9ffdc
0x04C9FE70: a8835df8  ldur x8, [x29, #-0x28]
0x04C9FE74: 081140f9  ldr x8, [x8, #0x20]
0x04C9FE78: 086140f9  ldr x8, [x8, #0xc0]
0x04C9FE7C: 031140f9  ldr x3, [x8, #0x20]
0x04C9FE80: 680040f9  ldr x8, [x3]
0x04C9FE84: e10316aa  mov x1, x22
0x04C9FE88: e20315aa  mov x2, x21
0x04C9FE8C: 00013fd6  blr x8
0x04C9FE90: e0f20736  tbz w0, #0, #0x4c9fcec
0x04C9FE94: e00314aa  mov x0, x20
0x04C9FE98: e10315aa  mov x1, x21
0x04C9FE9C: e20313aa  mov x2, x19
0x04C9FEA0: b4ba9494  bl #0x71ce970
0x04C9FEA4: a8837da9  ldp x8, x0, [x29, #-0x28]
0x04C9FEA8: 081140f9  ldr x8, [x8, #0x20]
0x04C9FEAC: 086140f9  ldr x8, [x8, #0xc0]
0x04C9FEB0: 161940f9  ldr x22, [x8, #0x30]
0x04C9FEB4: 080140f9  ldr x8, [x8]
0x04C9FEB8: d70240f9  ldr x23, [x22]
0x04C9FEBC: 084140f9  ldr x8, [x8, #0x80]
0x04C9FEC0: 01810191  add x1, x8, #0x60
0x04C9FEC4: dd829397  bl #0x3180a38
0x04C9FEC8: a8835df8  ldur x8, [x29, #-0x28]
0x04C9FECC: e20300aa  mov x2, x0
0x04C9FED0: 081140f9  ldr x8, [x8, #0x20]
0x04C9FED4: 086140f9  ldr x8, [x8, #0xc0]
0x04C9FED8: 082140f9  ldr x8, [x8, #0x40]
0x04C9FEDC: 092940b9  ldr w9, [x8, #0x28]
0x04C9FEE0: e80314aa  mov x8, x20
0x04C9FEE4: 4900f837  tbnz w9, #0x1f, #0x4c9feec
0x04C9FEE8: 880240f9  ldr x8, [x20]
0x04C9FEEC: a8831ef8  stur x8, [x29, #-0x18]
0x04C9FEF0: c80a40f9  ldr x8, [x22, #0x10]
0x04C9FEF4: a36300d1  sub x3, x29, #0x18
0x04C9FEF8: a43300d1  sub x4, x29, #0xc
0x04C9FEFC: e00317aa  mov x0, x23
0x04C9FF00: e10316aa  mov x1, x22
0x04C9FF04: 00013fd6  blr x8
0x04C9FF08: a8435f38  ldurb w8, [x29, #-0xc]
0x04C9FF0C: 08efff34  cbz w8, #0x4c9fcec
0x04C9FF10: e00314aa  mov x0, x20
0x04C9FF14: e10315aa  mov x1, x21
0x04C9FF18: e20313aa  mov x2, x19
0x04C9FF1C: 95ba9494  bl #0x71ce970
0x04C9FF20: a8837da9  ldp x8, x0, [x29, #-0x28]
0x04C9FF24: 081140f9  ldr x8, [x8, #0x20]
0x04C9FF28: 086140f9  ldr x8, [x8, #0xc0]
0x04C9FF2C: 080140f9  ldr x8, [x8]
0x04C9FF30: 084140f9  ldr x8, [x8, #0x80]
0x04C9FF34: 01810091  add x1, x8, #0x20
0x04C9FF38: e20314aa  mov x2, x20
0x04C9FF3C: e303132a  mov w3, w19
0x04C9FF40: bf829397  bl #0x3180a3c
0x04C9FF44: a8837da9  ldp x8, x0, [x29, #-0x28]
0x04C9FF48: 33008052  movz w19, #0x1
0x04C9FF4C: 081140f9  ldr x8, [x8, #0x20]
0x04C9FF50: 086140f9  ldr x8, [x8, #0xc0]
0x04C9FF54: 080140f9  ldr x8, [x8]
0x04C9FF58: 014140f9  ldr x1, [x8, #0x80]
0x04C9FF5C: 22008052  movz w2, #0x1
0x04C9FF60: e4dd8597  bl #0x2e176f0
0x04C9FF64: 10000014  b #0x4c9ffa4
0x04C9FF68: a8837da9  ldp x8, x0, [x29, #-0x28]
0x04C9FF6C: 081140f9  ldr x8, [x8, #0x20]
0x04C9FF70: 086140f9  ldr x8, [x8, #0xc0]
0x04C9FF74: 010540f9  ldr x1, [x8, #8]
0x04C9FF78: 280040f9  ldr x8, [x1]
0x04C9FF7C: 00013fd6  blr x8
0x04C9FF80: a8837da9  ldp x8, x0, [x29, #-0x28]
0x04C9FF84: 081140f9  ldr x8, [x8, #0x20]
0x04C9FF88: 086140f9  ldr x8, [x8, #0xc0]
0x04C9FF8C: 080140f9  ldr x8, [x8]
0x04C9FF90: 084140f9  ldr x8, [x8, #0x80]
0x04C9FF94: 01810291  add x1, x8, #0xa0
0x04C9FF98: e2031faa  mov x2, xzr
0x04C9FF9C: e7dd8597  bl #0x2e17738
0x04C9FFA0: f3031f2a  mov w19, wzr
0x04C9FFA4: 081740f9  ldr x8, [x24, #0x28]
0x04C9FFA8: a9835ff8  ldur x9, [x29, #-8]
0x04C9FFAC: 1f0109eb  cmp x8, x9
0x04C9FFB0: c1010054  b.ne #0x4c9ffe8
0x04C9FFB4: e003132a  mov w0, w19
0x04C9FFB8: bf030091  mov sp, x29
0x04C9FFBC: f44f44a9  ldp x20, x19, [sp, #0x40]
0x04C9FFC0: f65743a9  ldp x22, x21, [sp, #0x30]
0x04C9FFC4: f85f42a9  ldp x24, x23, [sp, #0x20]
0x04C9FFC8: fa6741a9  ldp x26, x25, [sp, #0x10]
0x04C9FFCC: fd7bc5a8  ldp x29, x30, [sp], #0x50
0x04C9FFD0: c0035fd6  ret
0x04C9FFD4: 36839397  bl #0x3180cac
0x04C9FFD8: 35839397  bl #0x3180cac
0x04C9FFDC: 34839397  bl #0x3180cac
0x04C9FFE0: 33839397  bl #0x3180cac
0x04C9FFE4: 32839397  bl #0x3180cac
0x04C9FFE8: 6aba9494  bl #0x71ce990
0x04C9FFEC: 11000014  b #0x4ca0030
0x04C9FFF0: 10000014  b #0x4ca0030
0x04C9FFF4: 0f000014  b #0x4ca0030
0x04C9FFF8: 0e000014  b #0x4ca0030
0x04C9FFFC: 0d000014  b #0x4ca0030
0x04CA0000: 0c000014  b #0x4ca0030
0x04CA0004: 0b000014  b #0x4ca0030
0x04CA0008: 0a000014  b #0x4ca0030
0x04CA000C: 09000014  b #0x4ca0030
0x04CA0010: 08000014  b #0x4ca0030
0x04CA0014: 07000014  b #0x4ca0030
0x04CA0018: 06000014  b #0x4ca0030
0x04CA001C: 05000014  b #0x4ca0030
0x04CA0020: 04000014  b #0x4ca0030
0x04CA0024: 03000014  b #0x4ca0030
0x04CA0028: 02000014  b #0x4ca0030
0x04CA002C: 01000014  b #0x4ca0030
0x04CA0030: 3f040071  cmp w1, #1
0x04CA0034: 81010054  b.ne #0x4ca0064
0x04CA0038: 36ba9494  bl #0x71ce910
0x04CA003C: 130040f9  ldr x19, [x0]
0x04CA0040: b3031cf8  stur x19, [x29, #-0x40]
0x04CA0044: 37ba9494  bl #0x71ce920
0x04CA0048: f3faffb4  cbz x19, #0x4c9ffa4
0x04CA004C: a80301d1  sub x8, x29, #0x40
0x04CA0050: 00210091  add x0, x8, #8
0x04CA0054: 04598797  bl #0x2e76464
0x04CA0058: e00313aa  mov x0, x19
0x04CA005C: 12839397  bl #0x3180ca4
0x04CA0060: 530000b5  cbnz x19, #0x4ca0068
0x04CA0064: 3d169797  bl #0x3265958
0x04CA0068: a8837da9  ldp x8, x0, [x29, #-0x28]
0x04CA006C: 081140f9  ldr x8, [x8, #0x20]
0x04CA0070: 086140f9  ldr x8, [x8, #0xc0]
0x04CA0074: 012540f9  ldr x1, [x8, #0x48]
0x04CA0078: 280040f9  ldr x8, [x1]
0x04CA007C: 00013fd6  blr x8
0x04CA0080: e00313aa  mov x0, x19
0x04CA0084: 08839397  bl #0x3180ca4
0x04CA0088: 23a58597  bl #0x2e09514

; Generic instantiation from Il2CppDumper script.json | RVA 0x4CA008C | ContextualizedECS.Query.QueryExtensions.QueryBuilder.<All>d__7<__Il2CppFullySharedGenericType>$$<>m__Finally1
; native signature: void ContextualizedECS_Query_QueryExtensions_QueryBuilder__All_d__7___Il2CppFullySharedGenericType_____m__Finally1 (ContextualizedECS_Query_QueryExtensions_QueryBuilder__All_d__7_T1__o* __this, const MethodInfo_4CA008C* method);
; bytes=268 sha256=cef3baf716a962c25650953a1ca6fe34fd3b4e958ac8fa97893c203a545def69 status=arm64_complete_bound indexed_start=True
0x04CA008C: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x04CA0090: f44f01a9  stp x20, x19, [sp, #0x10]
0x04CA0094: d58301f0  adrp x21, #0x7d1b000
0x04CA0098: a8c24a39  ldrb w8, [x21, #0x2b0]
0x04CA009C: f40301aa  mov x20, x1
0x04CA00A0: f30300aa  mov x19, x0
0x04CA00A4: c8000037  tbnz w8, #0, #0x4ca00bc
0x04CA00A8: 604d01d0  adrp x0, #0x764e000
0x04CA00AC: 006444f9  ldr x0, [x0, #0x8c8]
0x04CA00B0: 5a829397  bl #0x3180a18
0x04CA00B4: 28008052  movz w8, #0x1
0x04CA00B8: a8c20a39  strb w8, [x21, #0x2b0]
0x04CA00BC: 881240f9  ldr x8, [x20, #0x20]
0x04CA00C0: 02008012  movn w2, #0
0x04CA00C4: e00313aa  mov x0, x19
0x04CA00C8: 086140f9  ldr x8, [x8, #0xc0]
0x04CA00CC: 080140f9  ldr x8, [x8]
0x04CA00D0: 014140f9  ldr x1, [x8, #0x80]
0x04CA00D4: 87dd8597  bl #0x2e176f0
0x04CA00D8: 881240f9  ldr x8, [x20, #0x20]
0x04CA00DC: e00313aa  mov x0, x19
0x04CA00E0: 086140f9  ldr x8, [x8, #0xc0]
0x04CA00E4: 080140f9  ldr x8, [x8]
0x04CA00E8: 084140f9  ldr x8, [x8, #0x80]
0x04CA00EC: 01810291  add x1, x8, #0xa0
0x04CA00F0: 52829397  bl #0x3180a38
0x04CA00F4: 080040f9  ldr x8, [x0]
0x04CA00F8: 880300b4  cbz x8, #0x4ca0168
0x04CA00FC: 881240f9  ldr x8, [x20, #0x20]
0x04CA0100: e00313aa  mov x0, x19
0x04CA0104: 086140f9  ldr x8, [x8, #0xc0]
0x04CA0108: 080140f9  ldr x8, [x8]
0x04CA010C: 084140f9  ldr x8, [x8, #0x80]
0x04CA0110: 01810291  add x1, x8, #0xa0
0x04CA0114: 49829397  bl #0x3180a38
0x04CA0118: 130040f9  ldr x19, [x0]
0x04CA011C: d30300b4  cbz x19, #0x4ca0194
0x04CA0120: 6a4d01d0  adrp x10, #0x764e000
0x04CA0124: 680240f9  ldr x8, [x19]
0x04CA0128: 4a6544f9  ldr x10, [x10, #0x8c8]
0x04CA012C: 095d4279  ldrh w9, [x8, #0x12e]
0x04CA0130: 410140f9  ldr x1, [x10]
0x04CA0134: 290100b4  cbz x9, #0x4ca0158
0x04CA0138: 0a5940f9  ldr x10, [x8, #0xb0]
0x04CA013C: 4a210091  add x10, x10, #8
0x04CA0140: 4b815ff8  ldur x11, [x10, #-8]
0x04CA0144: 7f0101eb  cmp x11, x1
0x04CA0148: 60010054  b.eq #0x4ca0174
0x04CA014C: 290500f1  subs x9, x9, #1
0x04CA0150: 4a410091  add x10, x10, #0x10
0x04CA0154: 61ffff54  b.ne #0x4ca0140
0x04CA0158: e00313aa  mov x0, x19
0x04CA015C: e2031f2a  mov w2, wzr
0x04CA0160: 6cda9297  bl #0x3156b10
0x04CA0164: 07000014  b #0x4ca0180
0x04CA0168: f44f41a9  ldp x20, x19, [sp, #0x10]
0x04CA016C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x04CA0170: c0035fd6  ret
0x04CA0174: 490180b9  ldrsw x9, [x10]
0x04CA0178: 0811098b  add x8, x8, x9, lsl #4
0x04CA017C: 00e10491  add x0, x8, #0x138
0x04CA0180: 020440a9  ldp x2, x1, [x0]
0x04CA0184: e00313aa  mov x0, x19
0x04CA0188: f44f41a9  ldp x20, x19, [sp, #0x10]
0x04CA018C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x04CA0190: 40001fd6  br x2
0x04CA0194: c6829397  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4CA0198 | ContextualizedECS.Query.QueryExtensions.QueryBuilder.<All>d__7<__Il2CppFullySharedGenericType>$$System.Collections.Generic.IEnumerator<T1>.get_Current
; native signature: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o ContextualizedECS_Query_QueryExtensions_QueryBuilder__All_d__7___Il2CppFullySharedGenericType___System_Collections_Generic_IEnumerator_T1__get_Current (ContextualizedECS_Query_QueryExtensions_QueryBuilder__All_d__7_T1__o* __this, const MethodInfo_4CA0198* method);
; bytes=160 sha256=1ff0299220a161ab4fb53fdb9a86a5b580d2240de8477d4517ad978f70d56eb3 status=arm64_complete_bound indexed_start=True
0x04CA0198: fd7bbda9  stp x29, x30, [sp, #-0x30]!
0x04CA019C: f65701a9  stp x22, x21, [sp, #0x10]
0x04CA01A0: f44f02a9  stp x20, x19, [sp, #0x20]
0x04CA01A4: fd030091  mov x29, sp
0x04CA01A8: ff4300d1  sub sp, sp, #0x10
0x04CA01AC: 56d03bd5  mrs x22, tpidr_el0
0x04CA01B0: c81640f9  ldr x8, [x22, #0x28]
0x04CA01B4: f30301aa  mov x19, x1
0x04CA01B8: a8831ff8  stur x8, [x29, #-8]
0x04CA01BC: 481040f9  ldr x8, [x2, #0x20]
0x04CA01C0: 086140f9  ldr x8, [x8, #0xc0]
0x04CA01C4: 092140f9  ldr x9, [x8, #0x40]
0x04CA01C8: 34fd40b9  ldr w20, [x9, #0xfc]
0x04CA01CC: e9030091  mov x9, sp
0x04CA01D0: 8a3e0091  add x10, x20, #0xf
0x04CA01D4: 4a717c92  and x10, x10, #0x1fffffff0
0x04CA01D8: 35010acb  sub x21, x9, x10
0x04CA01DC: bf020091  mov sp, x21
0x04CA01E0: 080140f9  ldr x8, [x8]
0x04CA01E4: 084140f9  ldr x8, [x8, #0x80]
0x04CA01E8: 01810091  add x1, x8, #0x20
0x04CA01EC: 13829397  bl #0x3180a38
0x04CA01F0: e10300aa  mov x1, x0
0x04CA01F4: e00315aa  mov x0, x21
0x04CA01F8: e20314aa  mov x2, x20
0x04CA01FC: ddb99494  bl #0x71ce970
0x04CA0200: e00313aa  mov x0, x19
0x04CA0204: e10315aa  mov x1, x21
0x04CA0208: e20314aa  mov x2, x20
0x04CA020C: d9b99494  bl #0x71ce970
0x04CA0210: c81640f9  ldr x8, [x22, #0x28]
0x04CA0214: a9835ff8  ldur x9, [x29, #-8]
0x04CA0218: 1f0109eb  cmp x8, x9
0x04CA021C: c1000054  b.ne #0x4ca0234
0x04CA0220: bf030091  mov sp, x29
0x04CA0224: f44f42a9  ldp x20, x19, [sp, #0x20]
0x04CA0228: f65741a9  ldp x22, x21, [sp, #0x10]
0x04CA022C: fd7bc3a8  ldp x29, x30, [sp], #0x30
0x04CA0230: c0035fd6  ret
0x04CA0234: d7b99494  bl #0x71ce990

; Generic instantiation from Il2CppDumper script.json | RVA 0x4CA0238 | ContextualizedECS.Query.QueryExtensions.QueryBuilder.<All>d__7<__Il2CppFullySharedGenericType>$$System.Collections.IEnumerator.Reset
; native signature: void ContextualizedECS_Query_QueryExtensions_QueryBuilder__All_d__7___Il2CppFullySharedGenericType___System_Collections_IEnumerator_Reset (ContextualizedECS_Query_QueryExtensions_QueryBuilder__All_d__7_T1__o* __this, const MethodInfo_4CA0238* method);
; bytes=52 sha256=8983ddafcf4e8e475ee3b67584efc5337c783f155557b76015b5b2b8439ebc87 status=arm64_complete_bound indexed_start=True
0x04CA0238: fe0f1ef8  str x30, [sp, #-0x20]!
0x04CA023C: f44f01a9  stp x20, x19, [sp, #0x10]
0x04CA0240: 604d01f0  adrp x0, #0x764f000
0x04CA0244: 00d043f9  ldr x0, [x0, #0x7a0]
0x04CA0248: f30301aa  mov x19, x1
0x04CA024C: f8819397  bl #0x3180a2c
0x04CA0250: 94829397  bl #0x3180ca0
0x04CA0254: e1031faa  mov x1, xzr
0x04CA0258: f40300aa  mov x20, x0
0x04CA025C: 31e22794  bl #0x5698b20
0x04CA0260: e00314aa  mov x0, x20
0x04CA0264: e10313aa  mov x1, x19
0x04CA0268: 45829397  bl #0x3180b7c

; Generic instantiation from Il2CppDumper script.json | RVA 0x4CA026C | ContextualizedECS.Query.QueryExtensions.QueryBuilder.<All>d__7<__Il2CppFullySharedGenericType>$$System.Collections.IEnumerator.get_Current
; native signature: Il2CppObject* ContextualizedECS_Query_QueryExtensions_QueryBuilder__All_d__7___Il2CppFullySharedGenericType___System_Collections_IEnumerator_get_Current (ContextualizedECS_Query_QueryExtensions_QueryBuilder__All_d__7_T1__o* __this, const MethodInfo_4CA026C* method);
; bytes=164 sha256=48f9a3e943c2184513ac06af2ef35309d1c7b969489e2c1ebf300defcc1f39bc status=arm64_complete_bound indexed_start=True
0x04CA026C: fd7bbda9  stp x29, x30, [sp, #-0x30]!
0x04CA0270: f65701a9  stp x22, x21, [sp, #0x10]
0x04CA0274: f44f02a9  stp x20, x19, [sp, #0x20]
0x04CA0278: fd030091  mov x29, sp
0x04CA027C: ff4300d1  sub sp, sp, #0x10
0x04CA0280: 56d03bd5  mrs x22, tpidr_el0
0x04CA0284: c81640f9  ldr x8, [x22, #0x28]
0x04CA0288: f30301aa  mov x19, x1
0x04CA028C: a8831ff8  stur x8, [x29, #-8]
0x04CA0290: 281040f9  ldr x8, [x1, #0x20]
0x04CA0294: 086140f9  ldr x8, [x8, #0xc0]
0x04CA0298: 092140f9  ldr x9, [x8, #0x40]
0x04CA029C: 34fd40b9  ldr w20, [x9, #0xfc]
0x04CA02A0: e9030091  mov x9, sp
0x04CA02A4: 8a3e0091  add x10, x20, #0xf
0x04CA02A8: 4a717c92  and x10, x10, #0x1fffffff0
0x04CA02AC: 35010acb  sub x21, x9, x10
0x04CA02B0: bf020091  mov sp, x21
0x04CA02B4: 080140f9  ldr x8, [x8]
0x04CA02B8: 084140f9  ldr x8, [x8, #0x80]
0x04CA02BC: 01810091  add x1, x8, #0x20
0x04CA02C0: de819397  bl #0x3180a38
0x04CA02C4: e10300aa  mov x1, x0
0x04CA02C8: e00315aa  mov x0, x21
0x04CA02CC: e20314aa  mov x2, x20
0x04CA02D0: a8b99494  bl #0x71ce970
0x04CA02D4: 681240f9  ldr x8, [x19, #0x20]
0x04CA02D8: e10315aa  mov x1, x21
0x04CA02DC: 086140f9  ldr x8, [x8, #0xc0]
0x04CA02E0: 002140f9  ldr x0, [x8, #0x40]
0x04CA02E4: 2c829397  bl #0x3180b94
0x04CA02E8: c81640f9  ldr x8, [x22, #0x28]
0x04CA02EC: a9835ff8  ldur x9, [x29, #-8]
0x04CA02F0: 1f0109eb  cmp x8, x9
0x04CA02F4: c1000054  b.ne #0x4ca030c
0x04CA02F8: bf030091  mov sp, x29
0x04CA02FC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x04CA0300: f65741a9  ldp x22, x21, [sp, #0x10]
0x04CA0304: fd7bc3a8  ldp x29, x30, [sp], #0x30
0x04CA0308: c0035fd6  ret
0x04CA030C: a1b99494  bl #0x71ce990

; Generic instantiation from Il2CppDumper script.json | RVA 0x4CA0310 | ContextualizedECS.Query.QueryExtensions.QueryBuilder.<All>d__7<__Il2CppFullySharedGenericType>$$System.Collections.Generic.IEnumerable<T1>.GetEnumerator
; native signature: System_Collections_Generic_IEnumerator_T1__o* ContextualizedECS_Query_QueryExtensions_QueryBuilder__All_d__7___Il2CppFullySharedGenericType___System_Collections_Generic_IEnumerable_T1__GetEnumerator (ContextualizedECS_Query_QueryExtensions_QueryBuilder__All_d__7_T1__o* __this, const MethodInfo_4CA0310* method);
; bytes=296 sha256=aa00e0fd985c8fb39ead91ce55824fc13e433a39112d0f9a0424d63ebfe5c4fd status=arm64_complete_bound indexed_start=True
0x04CA0310: ff8301d1  sub sp, sp, #0x60
0x04CA0314: fe5704a9  stp x30, x21, [sp, #0x40]
0x04CA0318: f44f05a9  stp x20, x19, [sp, #0x50]
0x04CA031C: 281040f9  ldr x8, [x1, #0x20]
0x04CA0320: f30301aa  mov x19, x1
0x04CA0324: f40300aa  mov x20, x0
0x04CA0328: 086140f9  ldr x8, [x8, #0xc0]
0x04CA032C: 080140f9  ldr x8, [x8]
0x04CA0330: 014140f9  ldr x1, [x8, #0x80]
0x04CA0334: c1819397  bl #0x3180a38
0x04CA0338: 080040b9  ldr w8, [x0]
0x04CA033C: 1f090031  cmn w8, #2
0x04CA0340: c1020054  b.ne #0x4ca0398
0x04CA0344: 681240f9  ldr x8, [x19, #0x20]
0x04CA0348: e00314aa  mov x0, x20
0x04CA034C: 086140f9  ldr x8, [x8, #0xc0]
0x04CA0350: 080140f9  ldr x8, [x8]
0x04CA0354: 084140f9  ldr x8, [x8, #0x80]
0x04CA0358: 01010191  add x1, x8, #0x40
0x04CA035C: b7819397  bl #0x3180a38
0x04CA0360: 150040b9  ldr w21, [x0]
0x04CA0364: e0031faa  mov x0, xzr
0x04CA0368: 58f82894  bl #0x56de4c8
0x04CA036C: bf02006b  cmp w21, w0
0x04CA0370: 41010054  b.ne #0x4ca0398
0x04CA0374: 681240f9  ldr x8, [x19, #0x20]
0x04CA0378: e00314aa  mov x0, x20
0x04CA037C: e2031f2a  mov w2, wzr
0x04CA0380: 086140f9  ldr x8, [x8, #0xc0]
0x04CA0384: 080140f9  ldr x8, [x8]
0x04CA0388: 014140f9  ldr x1, [x8, #0x80]
0x04CA038C: d9dc8597  bl #0x2e176f0
0x04CA0390: f50314aa  mov x21, x20
0x04CA0394: 0f000014  b #0x4ca03d0
0x04CA0398: 681240f9  ldr x8, [x19, #0x20]
0x04CA039C: 086140f9  ldr x8, [x8, #0xc0]
0x04CA03A0: 000140f9  ldr x0, [x8]
0x04CA03A4: 08d44439  ldrb w8, [x0, #0x135]
0x04CA03A8: 48000037  tbnz w8, #0, #0x4ca03b0
0x04CA03AC: 1cd99297  bl #0x315681c
0x04CA03B0: 3c829397  bl #0x3180ca0
0x04CA03B4: 681240f9  ldr x8, [x19, #0x20]
0x04CA03B8: e1031f2a  mov w1, wzr
0x04CA03BC: f50300aa  mov x21, x0
0x04CA03C0: 086140f9  ldr x8, [x8, #0xc0]
0x04CA03C4: 022940f9  ldr x2, [x8, #0x50]
0x04CA03C8: 480040f9  ldr x8, [x2]
0x04CA03CC: 00013fd6  blr x8
0x04CA03D0: 681240f9  ldr x8, [x19, #0x20]
0x04CA03D4: e00314aa  mov x0, x20
0x04CA03D8: 086140f9  ldr x8, [x8, #0xc0]
0x04CA03DC: 080140f9  ldr x8, [x8]
0x04CA03E0: 084140f9  ldr x8, [x8, #0x80]
0x04CA03E4: 01010291  add x1, x8, #0x80
0x04CA03E8: 94819397  bl #0x3180a38
0x04CA03EC: 000440ad  ldp q0, q1, [x0]
0x04CA03F0: e00701ad  stp q0, q1, [sp, #0x20]
0x04CA03F4: 150200b4  cbz x21, #0x4ca0434
0x04CA03F8: 681240f9  ldr x8, [x19, #0x20]
0x04CA03FC: e00741ad  ldp q0, q1, [sp, #0x20]
0x04CA0400: e2030091  mov x2, sp
0x04CA0404: e00315aa  mov x0, x21
0x04CA0408: 086140f9  ldr x8, [x8, #0xc0]
0x04CA040C: 080140f9  ldr x8, [x8]
0x04CA0410: 084140f9  ldr x8, [x8, #0x80]
0x04CA0414: e00700ad  stp q0, q1, [sp]
0x04CA0418: 01810191  add x1, x8, #0x60
0x04CA041C: c4808697  bl #0x2e4072c
0x04CA0420: e00315aa  mov x0, x21
0x04CA0424: f44f45a9  ldp x20, x19, [sp, #0x50]
0x04CA0428: fe5744a9  ldp x30, x21, [sp, #0x40]
0x04CA042C: ff830191  add sp, sp, #0x60
0x04CA0430: c0035fd6  ret
0x04CA0434: 1e829397  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4CA0438 | ContextualizedECS.Query.QueryExtensions.QueryBuilder.<All>d__7<__Il2CppFullySharedGenericType>$$System.Collections.IEnumerable.GetEnumerator
; native signature: System_Collections_IEnumerator_o* ContextualizedECS_Query_QueryExtensions_QueryBuilder__All_d__7___Il2CppFullySharedGenericType___System_Collections_IEnumerable_GetEnumerator (ContextualizedECS_Query_QueryExtensions_QueryBuilder__All_d__7_T1__o* __this, const MethodInfo_4CA0438* method);
; bytes=20 sha256=036f789b7f48dbb1c35f8f41eef230459e9f79c21fdf9db6f40068fec8ccb210 status=arm64_complete_bound indexed_start=True
0x04CA0438: 281040f9  ldr x8, [x1, #0x20]
0x04CA043C: 086140f9  ldr x8, [x8, #0xc0]
0x04CA0440: 013140f9  ldr x1, [x8, #0x60]
0x04CA0444: 220040f9  ldr x2, [x1]
0x04CA0448: 40001fd6  br x2

