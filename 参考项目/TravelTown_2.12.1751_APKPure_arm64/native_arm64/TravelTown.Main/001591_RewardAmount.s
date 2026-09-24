; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1591 GameCore.Configuration.Definitions.RewardAmount
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x601FADC | public RewardAmountType get_Type() { }
; bytes=8 sha256=6f1929ee2376e6ada94db6d2aafe012dfc8382613e73b99aea0c7dea270fac13 status=arm64_complete_bound indexed_start=True
0x0601FADC: 001040b9  ldr w0, [x0, #0x10]
0x0601FAE0: c0035fd6  ret

; RVA 0x601EFD4 | public int get_Amount() { }
; bytes=96 sha256=60e09f4f680f5e8792340d0d0c87dbb7fe7a527969a1de1698cd776ad1845a9d status=arm64_complete_bound indexed_start=True
0x0601EFD4: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x0601EFD8: 081040b9  ldr w8, [x0, #0x10]
0x0601EFDC: 88000035  cbnz w8, #0x601efec
0x0601EFE0: 001440b9  ldr w0, [x0, #0x14]
0x0601EFE4: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x0601EFE8: c0035fd6  ret
0x0601EFEC: 80b10090  adrp x0, #0x764e000
0x0601EFF0: 006c42f9  ldr x0, [x0, #0x4d8]
0x0601EFF4: 8e864597  bl #0x3180a2c
0x0601EFF8: 2a874597  bl #0x3180ca0
0x0601EFFC: f30300aa  mov x19, x0
0x0601F000: 80b500b0  adrp x0, #0x76d0000
0x0601F004: 009040f9  ldr x0, [x0, #0x120]
0x0601F008: 89864597  bl #0x3180a2c
0x0601F00C: e10300aa  mov x1, x0
0x0601F010: e00313aa  mov x0, x19
0x0601F014: e2031faa  mov x2, xzr
0x0601F018: 58bfda97  bl #0x56ced78
0x0601F01C: 80b500b0  adrp x0, #0x76d0000
0x0601F020: 009440f9  ldr x0, [x0, #0x128]
0x0601F024: 82864597  bl #0x3180a2c
0x0601F028: e10300aa  mov x1, x0
0x0601F02C: e00313aa  mov x0, x19
0x0601F030: d3864597  bl #0x3180b7c

; RVA 0x601F10C | public void set_Amount(int value) { }
; bytes=96 sha256=f7c4feb8405f75e31857b17bf2bdf257a93c64ba409411d126f6f4bc76c1dbeb status=arm64_complete_bound indexed_start=True
0x0601F10C: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x0601F110: 081040b9  ldr w8, [x0, #0x10]
0x0601F114: 88000035  cbnz w8, #0x601f124
0x0601F118: 011400b9  str w1, [x0, #0x14]
0x0601F11C: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x0601F120: c0035fd6  ret
0x0601F124: 60b100f0  adrp x0, #0x764e000
0x0601F128: 006c42f9  ldr x0, [x0, #0x4d8]
0x0601F12C: 40864597  bl #0x3180a2c
0x0601F130: dc864597  bl #0x3180ca0
0x0601F134: f30300aa  mov x19, x0
0x0601F138: 80b500b0  adrp x0, #0x76d0000
0x0601F13C: 009840f9  ldr x0, [x0, #0x130]
0x0601F140: 3b864597  bl #0x3180a2c
0x0601F144: e10300aa  mov x1, x0
0x0601F148: e00313aa  mov x0, x19
0x0601F14C: e2031faa  mov x2, xzr
0x0601F150: 0abfda97  bl #0x56ced78
0x0601F154: 80b500b0  adrp x0, #0x76d0000
0x0601F158: 00a040f9  ldr x0, [x0, #0x140]
0x0601F15C: 34864597  bl #0x3180a2c
0x0601F160: e10300aa  mov x1, x0
0x0601F164: e00313aa  mov x0, x19
0x0601F168: 85864597  bl #0x3180b7c

; RVA 0x601FAE4 | public int get_Min() { }
; bytes=100 sha256=34c05f2c45c60480651a0b64d75982af15fc5b09066c78154c35a0e24a6f0e88 status=arm64_complete_bound indexed_start=True
0x0601FAE4: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x0601FAE8: 081040b9  ldr w8, [x0, #0x10]
0x0601FAEC: 1f050071  cmp w8, #1
0x0601FAF0: 81000054  b.ne #0x601fb00
0x0601FAF4: 001840b9  ldr w0, [x0, #0x18]
0x0601FAF8: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x0601FAFC: c0035fd6  ret
0x0601FB00: 60b100f0  adrp x0, #0x764e000
0x0601FB04: 006c42f9  ldr x0, [x0, #0x4d8]
0x0601FB08: c9834597  bl #0x3180a2c
0x0601FB0C: 65844597  bl #0x3180ca0
0x0601FB10: f30300aa  mov x19, x0
0x0601FB14: 80b500b0  adrp x0, #0x76d0000
0x0601FB18: 00ac40f9  ldr x0, [x0, #0x158]
0x0601FB1C: c4834597  bl #0x3180a2c
0x0601FB20: e10300aa  mov x1, x0
0x0601FB24: e00313aa  mov x0, x19
0x0601FB28: e2031faa  mov x2, xzr
0x0601FB2C: 93bcda97  bl #0x56ced78
0x0601FB30: 80b500b0  adrp x0, #0x76d0000
0x0601FB34: 00b040f9  ldr x0, [x0, #0x160]
0x0601FB38: bd834597  bl #0x3180a2c
0x0601FB3C: e10300aa  mov x1, x0
0x0601FB40: e00313aa  mov x0, x19
0x0601FB44: 0e844597  bl #0x3180b7c

; RVA 0x601FB48 | public int get_Max() { }
; bytes=100 sha256=facad137533955432e036c89ca2020504a2ae405423f180afe929c749cc2effd status=arm64_complete_bound indexed_start=True
0x0601FB48: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x0601FB4C: 081040b9  ldr w8, [x0, #0x10]
0x0601FB50: 1f050071  cmp w8, #1
0x0601FB54: 81000054  b.ne #0x601fb64
0x0601FB58: 001c40b9  ldr w0, [x0, #0x1c]
0x0601FB5C: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x0601FB60: c0035fd6  ret
0x0601FB64: 60b100f0  adrp x0, #0x764e000
0x0601FB68: 006c42f9  ldr x0, [x0, #0x4d8]
0x0601FB6C: b0834597  bl #0x3180a2c
0x0601FB70: 4c844597  bl #0x3180ca0
0x0601FB74: f30300aa  mov x19, x0
0x0601FB78: 80b500b0  adrp x0, #0x76d0000
0x0601FB7C: 00b440f9  ldr x0, [x0, #0x168]
0x0601FB80: ab834597  bl #0x3180a2c
0x0601FB84: e10300aa  mov x1, x0
0x0601FB88: e00313aa  mov x0, x19
0x0601FB8C: e2031faa  mov x2, xzr
0x0601FB90: 7abcda97  bl #0x56ced78
0x0601FB94: 80b500b0  adrp x0, #0x76d0000
0x0601FB98: 00b840f9  ldr x0, [x0, #0x170]
0x0601FB9C: a4834597  bl #0x3180a2c
0x0601FBA0: e10300aa  mov x1, x0
0x0601FBA4: e00313aa  mov x0, x19
0x0601FBA8: f5834597  bl #0x3180b7c

; RVA 0x601FBAC | public int get_OutOf() { }
; bytes=100 sha256=42ed920560b3c06a5c22c5cbd7095cb1633b877ebd4f14f5a471918a9516e53c status=arm64_complete_bound indexed_start=True
0x0601FBAC: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x0601FBB0: 081040b9  ldr w8, [x0, #0x10]
0x0601FBB4: 1f090071  cmp w8, #2
0x0601FBB8: 81000054  b.ne #0x601fbc8
0x0601FBBC: 002040b9  ldr w0, [x0, #0x20]
0x0601FBC0: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x0601FBC4: c0035fd6  ret
0x0601FBC8: 60b100f0  adrp x0, #0x764e000
0x0601FBCC: 006c42f9  ldr x0, [x0, #0x4d8]
0x0601FBD0: 97834597  bl #0x3180a2c
0x0601FBD4: 33844597  bl #0x3180ca0
0x0601FBD8: f30300aa  mov x19, x0
0x0601FBDC: 80b500b0  adrp x0, #0x76d0000
0x0601FBE0: 00bc40f9  ldr x0, [x0, #0x178]
0x0601FBE4: 92834597  bl #0x3180a2c
0x0601FBE8: e10300aa  mov x1, x0
0x0601FBEC: e00313aa  mov x0, x19
0x0601FBF0: e2031faa  mov x2, xzr
0x0601FBF4: 61bcda97  bl #0x56ced78
0x0601FBF8: 80b500b0  adrp x0, #0x76d0000
0x0601FBFC: 00c040f9  ldr x0, [x0, #0x180]
0x0601FC00: 8b834597  bl #0x3180a2c
0x0601FC04: e10300aa  mov x1, x0
0x0601FC08: e00313aa  mov x0, x19
0x0601FC0C: dc834597  bl #0x3180b7c

; RVA 0x601EF84 | public void .ctor(RewardAmountType type, int amount, int min = 0, int max = 0, int outOf = 0) { }
; bytes=80 sha256=32435b1c75c17843c8bd7ec358c545de2292510451fa6acdf5ce53766cbe62bd status=arm64_complete_bound indexed_start=True
0x0601EF84: fe0f1cf8  str x30, [sp, #-0x40]!
0x0601EF88: f85f01a9  stp x24, x23, [sp, #0x10]
0x0601EF8C: f65702a9  stp x22, x21, [sp, #0x20]
0x0601EF90: f44f03a9  stp x20, x19, [sp, #0x30]
0x0601EF94: f703012a  mov w23, w1
0x0601EF98: e1031faa  mov x1, xzr
0x0601EF9C: f303052a  mov w19, w5
0x0601EFA0: f403042a  mov w20, w4
0x0601EFA4: f503032a  mov w21, w3
0x0601EFA8: f603022a  mov w22, w2
0x0601EFAC: f80300aa  mov x24, x0
0x0601EFB0: 93edda97  bl #0x56da5fc
0x0601EFB4: 175b0229  stp w23, w22, [x24, #0x10]
0x0601EFB8: 15530329  stp w21, w20, [x24, #0x18]
0x0601EFBC: 132300b9  str w19, [x24, #0x20]
0x0601EFC0: f44f43a9  ldp x20, x19, [sp, #0x30]
0x0601EFC4: f65742a9  ldp x22, x21, [sp, #0x20]
0x0601EFC8: f85f41a9  ldp x24, x23, [sp, #0x10]
0x0601EFCC: fe0744f8  ldr x30, [sp], #0x40
0x0601EFD0: c0035fd6  ret

; RVA 0x601FC10 | public static RewardAmount op_Implicit(int amount) { }
; bytes=92 sha256=bfcc56095ff3cb2f16e297de5247fdb592394583b67fc9ee8fe3adb7c5b4bd6b status=arm64_complete_bound indexed_start=True
0x0601FC10: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0601FC14: f44f01a9  stp x20, x19, [sp, #0x10]
0x0601FC18: 34e80090  adrp x20, #0x7d23000
0x0601FC1C: b5b20090  adrp x21, #0x7673000
0x0601FC20: 88926139  ldrb w8, [x20, #0x864]
0x0601FC24: b5c640f9  ldr x21, [x21, #0x188]
0x0601FC28: f303002a  mov w19, w0
0x0601FC2C: c8000037  tbnz w8, #0, #0x601fc44
0x0601FC30: a0b20090  adrp x0, #0x7673000
0x0601FC34: 00c440f9  ldr x0, [x0, #0x188]
0x0601FC38: 78834597  bl #0x3180a18
0x0601FC3C: 28008052  movz w8, #0x1
0x0601FC40: 88922139  strb w8, [x20, #0x864]
0x0601FC44: a00240f9  ldr x0, [x21]
0x0601FC48: 16844597  bl #0x3180ca0
0x0601FC4C: e1031faa  mov x1, xzr
0x0601FC50: f40300aa  mov x20, x0
0x0601FC54: 6aeada97  bl #0x56da5fc
0x0601FC58: 9f4e0229  stp wzr, w19, [x20, #0x10]
0x0601FC5C: e00314aa  mov x0, x20
0x0601FC60: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0601FC64: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0601FC68: c0035fd6  ret

; RVA 0x601FC6C | public void .ctor(int amount) { }
; bytes=40 sha256=4994857b4b4d45513b4a07a45eae792de40dc27f404a2bd8b41bd79226c57c96 status=arm64_complete_bound indexed_start=True
0x0601FC6C: fe0f1ef8  str x30, [sp, #-0x20]!
0x0601FC70: f44f01a9  stp x20, x19, [sp, #0x10]
0x0601FC74: f303012a  mov w19, w1
0x0601FC78: e1031faa  mov x1, xzr
0x0601FC7C: f40300aa  mov x20, x0
0x0601FC80: 5feada97  bl #0x56da5fc
0x0601FC84: 9f4e0229  stp wzr, w19, [x20, #0x10]
0x0601FC88: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0601FC8C: fe0742f8  ldr x30, [sp], #0x20
0x0601FC90: c0035fd6  ret

; RVA 0x601FC94 | public void .ctor(RewardAmount other) { }
; bytes=180 sha256=27b48be652816dc0f7426207f3e195724dc7d957728d7d8b98bec2da5d68caea status=arm64_complete_bound indexed_start=True
0x0601FC94: fe0f1ef8  str x30, [sp, #-0x20]!
0x0601FC98: f44f01a9  stp x20, x19, [sp, #0x10]
0x0601FC9C: f40301aa  mov x20, x1
0x0601FCA0: e1031faa  mov x1, xzr
0x0601FCA4: f30300aa  mov x19, x0
0x0601FCA8: 55eada97  bl #0x56da5fc
0x0601FCAC: 340300b4  cbz x20, #0x601fd10
0x0601FCB0: 881240b9  ldr w8, [x20, #0x10]
0x0601FCB4: 1f090071  cmp w8, #2
0x0601FCB8: 681200b9  str w8, [x19, #0x10]
0x0601FCBC: 00010054  b.eq #0x601fcdc
0x0601FCC0: 1f050071  cmp w8, #1
0x0601FCC4: 40010054  b.eq #0x601fcec
0x0601FCC8: 68020035  cbnz w8, #0x601fd14
0x0601FCCC: e00314aa  mov x0, x20
0x0601FCD0: c1fcff97  bl #0x601efd4
0x0601FCD4: 601600b9  str w0, [x19, #0x14]
0x0601FCD8: 0b000014  b #0x601fd04
0x0601FCDC: e00314aa  mov x0, x20
0x0601FCE0: b3ffff97  bl #0x601fbac
0x0601FCE4: 602200b9  str w0, [x19, #0x20]
0x0601FCE8: 07000014  b #0x601fd04
0x0601FCEC: e00314aa  mov x0, x20
0x0601FCF0: 7dffff97  bl #0x601fae4
0x0601FCF4: 601a00b9  str w0, [x19, #0x18]
0x0601FCF8: e00314aa  mov x0, x20
0x0601FCFC: 93ffff97  bl #0x601fb48
0x0601FD00: 601e00b9  str w0, [x19, #0x1c]
0x0601FD04: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0601FD08: fe0742f8  ldr x30, [sp], #0x20
0x0601FD0C: c0035fd6  ret
0x0601FD10: e7834597  bl #0x3180cac
0x0601FD14: 80b100d0  adrp x0, #0x7651000
0x0601FD18: 00f443f9  ldr x0, [x0, #0x7e8]
0x0601FD1C: 44834597  bl #0x3180a2c
0x0601FD20: e0834597  bl #0x3180ca0
0x0601FD24: e1031faa  mov x1, xzr
0x0601FD28: f30300aa  mov x19, x0
0x0601FD2C: df3dd797  bl #0x55ef4a8
0x0601FD30: 80b500b0  adrp x0, #0x76d0000
0x0601FD34: 00c440f9  ldr x0, [x0, #0x188]
0x0601FD38: 3d834597  bl #0x3180a2c
0x0601FD3C: e10300aa  mov x1, x0
0x0601FD40: e00313aa  mov x0, x19
0x0601FD44: 8e834597  bl #0x3180b7c

; RVA 0x601FD48 | public int CompareTo(RewardAmount other) { }
; bytes=312 sha256=da1d604bbad75d5547b105ca6d34b9450aa9cdff6427561af46e488181fc9090 status=arm64_complete_bound indexed_start=True
0x0601FD48: ff4301d1  sub sp, sp, #0x50
0x0601FD4C: fe1300f9  str x30, [sp, #0x20]
0x0601FD50: f65703a9  stp x22, x21, [sp, #0x30]
0x0601FD54: f44f04a9  stp x20, x19, [sp, #0x40]
0x0601FD58: 35e80090  adrp x21, #0x7d23000
0x0601FD5C: a8966139  ldrb w8, [x21, #0x865]
0x0601FD60: f30301aa  mov x19, x1
0x0601FD64: f40300aa  mov x20, x0
0x0601FD68: c8000037  tbnz w8, #0, #0x601fd80
0x0601FD6C: 80b500b0  adrp x0, #0x76d0000
0x0601FD70: 00a840f9  ldr x0, [x0, #0x150]
0x0601FD74: 29834597  bl #0x3180a18
0x0601FD78: 28008052  movz w8, #0x1
0x0601FD7C: a8962139  strb w8, [x21, #0x865]
0x0601FD80: ff2f00b9  str wzr, [sp, #0x2c]
0x0601FD84: d30700b4  cbz x19, #0x601fe7c
0x0601FD88: 95b500b0  adrp x21, #0x76d0000
0x0601FD8C: b5aa40f9  ldr x21, [x21, #0x150]
0x0601FD90: 681240b9  ldr w8, [x19, #0x10]
0x0601FD94: 961240b9  ldr w22, [x20, #0x10]
0x0601FD98: e1a30091  add x1, sp, #0x28
0x0601FD9C: a00240f9  ldr x0, [x21]
0x0601FDA0: e82b00b9  str w8, [sp, #0x28]
0x0601FDA4: 7c834597  bl #0x3180b94
0x0601FDA8: a80240f9  ldr x8, [x21]
0x0601FDAC: e10300aa  mov x1, x0
0x0601FDB0: 09008092  movn x9, #0
0x0601FDB4: e0230091  add x0, sp, #8
0x0601FDB8: e2031faa  mov x2, xzr
0x0601FDBC: e8a700a9  stp x8, x9, [sp, #8]
0x0601FDC0: f61b00b9  str w22, [sp, #0x18]
0x0601FDC4: 10b7da97  bl #0x56cda04
0x0601FDC8: 00050035  cbnz w0, #0x601fe68
0x0601FDCC: 881240b9  ldr w8, [x20, #0x10]
0x0601FDD0: 1f090071  cmp w8, #2
0x0601FDD4: 40010054  b.eq #0x601fdfc
0x0601FDD8: 1f050071  cmp w8, #1
0x0601FDDC: c0010054  b.eq #0x601fe14
0x0601FDE0: 28040035  cbnz w8, #0x601fe64
0x0601FDE4: e00314aa  mov x0, x20
0x0601FDE8: 7bfcff97  bl #0x601efd4
0x0601FDEC: e02f00b9  str w0, [sp, #0x2c]
0x0601FDF0: e00313aa  mov x0, x19
0x0601FDF4: 78fcff97  bl #0x601efd4
0x0601FDF8: 16000014  b #0x601fe50
0x0601FDFC: e00314aa  mov x0, x20
0x0601FE00: 6bffff97  bl #0x601fbac
0x0601FE04: e02f00b9  str w0, [sp, #0x2c]
0x0601FE08: e00313aa  mov x0, x19
0x0601FE0C: 68ffff97  bl #0x601fbac
0x0601FE10: 10000014  b #0x601fe50
0x0601FE14: e00314aa  mov x0, x20
0x0601FE18: 33ffff97  bl #0x601fae4
0x0601FE1C: e02f00b9  str w0, [sp, #0x2c]
0x0601FE20: e00313aa  mov x0, x19
0x0601FE24: 30ffff97  bl #0x601fae4
0x0601FE28: e103002a  mov w1, w0
0x0601FE2C: e0b30091  add x0, sp, #0x2c
0x0601FE30: e2031faa  mov x2, xzr
0x0601FE34: 1bcfd997  bl #0x5693aa0
0x0601FE38: 80010035  cbnz w0, #0x601fe68
0x0601FE3C: e00314aa  mov x0, x20
0x0601FE40: 42ffff97  bl #0x601fb48
0x0601FE44: e02f00b9  str w0, [sp, #0x2c]
0x0601FE48: e00313aa  mov x0, x19
0x0601FE4C: 3fffff97  bl #0x601fb48
0x0601FE50: e103002a  mov w1, w0
0x0601FE54: e0b30091  add x0, sp, #0x2c
0x0601FE58: e2031faa  mov x2, xzr
0x0601FE5C: 11cfd997  bl #0x5693aa0
0x0601FE60: 02000014  b #0x601fe68
0x0601FE64: e0031f2a  mov w0, wzr
0x0601FE68: f44f44a9  ldp x20, x19, [sp, #0x40]
0x0601FE6C: f65743a9  ldp x22, x21, [sp, #0x30]
0x0601FE70: fe1340f9  ldr x30, [sp, #0x20]
0x0601FE74: ff430191  add sp, sp, #0x50
0x0601FE78: c0035fd6  ret
0x0601FE7C: 8c834597  bl #0x3180cac

; RVA 0x601F748 | public bool Equals(RewardAmount other) { }
; bytes=312 sha256=99346fbf5b9d4689d5d2449c555914eb04e62d8a29da93073afa97716aec656a status=arm64_complete_bound indexed_start=True
0x0601F748: ff4301d1  sub sp, sp, #0x50
0x0601F74C: fe1300f9  str x30, [sp, #0x20]
0x0601F750: f65703a9  stp x22, x21, [sp, #0x30]
0x0601F754: f44f04a9  stp x20, x19, [sp, #0x40]
0x0601F758: 35e80090  adrp x21, #0x7d23000
0x0601F75C: a89a6139  ldrb w8, [x21, #0x866]
0x0601F760: f30301aa  mov x19, x1
0x0601F764: f40300aa  mov x20, x0
0x0601F768: c8000037  tbnz w8, #0, #0x601f780
0x0601F76C: 80b500b0  adrp x0, #0x76d0000
0x0601F770: 00a840f9  ldr x0, [x0, #0x150]
0x0601F774: a9844597  bl #0x3180a18
0x0601F778: 28008052  movz w8, #0x1
0x0601F77C: a89a2139  strb w8, [x21, #0x866]
0x0601F780: ff2f00b9  str wzr, [sp, #0x2c]
0x0601F784: 130700b4  cbz x19, #0x601f864
0x0601F788: 95b500b0  adrp x21, #0x76d0000
0x0601F78C: b5aa40f9  ldr x21, [x21, #0x150]
0x0601F790: 681240b9  ldr w8, [x19, #0x10]
0x0601F794: 961240b9  ldr w22, [x20, #0x10]
0x0601F798: e1a30091  add x1, sp, #0x28
0x0601F79C: a00240f9  ldr x0, [x21]
0x0601F7A0: e82b00b9  str w8, [sp, #0x28]
0x0601F7A4: fc844597  bl #0x3180b94
0x0601F7A8: a80240f9  ldr x8, [x21]
0x0601F7AC: e10300aa  mov x1, x0
0x0601F7B0: 09008092  movn x9, #0
0x0601F7B4: e0230091  add x0, sp, #8
0x0601F7B8: e2031faa  mov x2, xzr
0x0601F7BC: e8a700a9  stp x8, x9, [sp, #8]
0x0601F7C0: f61b00b9  str w22, [sp, #0x18]
0x0601F7C4: c5b7da97  bl #0x56cd6d8
0x0601F7C8: e0040036  tbz w0, #0, #0x601f864
0x0601F7CC: 881240b9  ldr w8, [x20, #0x10]
0x0601F7D0: 1f090071  cmp w8, #2
0x0601F7D4: 40010054  b.eq #0x601f7fc
0x0601F7D8: 1f050071  cmp w8, #1
0x0601F7DC: c0010054  b.eq #0x601f814
0x0601F7E0: 28040035  cbnz w8, #0x601f864
0x0601F7E4: e00314aa  mov x0, x20
0x0601F7E8: fbfdff97  bl #0x601efd4
0x0601F7EC: e02f00b9  str w0, [sp, #0x2c]
0x0601F7F0: e00313aa  mov x0, x19
0x0601F7F4: f8fdff97  bl #0x601efd4
0x0601F7F8: 16000014  b #0x601f850
0x0601F7FC: e00314aa  mov x0, x20
0x0601F800: eb000094  bl #0x601fbac
0x0601F804: e02f00b9  str w0, [sp, #0x2c]
0x0601F808: e00313aa  mov x0, x19
0x0601F80C: e8000094  bl #0x601fbac
0x0601F810: 10000014  b #0x601f850
0x0601F814: e00314aa  mov x0, x20
0x0601F818: cc000094  bl #0x601fb48
0x0601F81C: e02f00b9  str w0, [sp, #0x2c]
0x0601F820: e00313aa  mov x0, x19
0x0601F824: c9000094  bl #0x601fb48
0x0601F828: e103002a  mov w1, w0
0x0601F82C: e0b30091  add x0, sp, #0x2c
0x0601F830: e2031faa  mov x2, xzr
0x0601F834: c0d0d997  bl #0x5693b34
0x0601F838: 60010036  tbz w0, #0, #0x601f864
0x0601F83C: e00314aa  mov x0, x20
0x0601F840: a9000094  bl #0x601fae4
0x0601F844: e02f00b9  str w0, [sp, #0x2c]
0x0601F848: e00313aa  mov x0, x19
0x0601F84C: a6000094  bl #0x601fae4
0x0601F850: e103002a  mov w1, w0
0x0601F854: e0b30091  add x0, sp, #0x2c
0x0601F858: e2031faa  mov x2, xzr
0x0601F85C: b6d0d997  bl #0x5693b34
0x0601F860: 02000014  b #0x601f868
0x0601F864: e0031f2a  mov w0, wzr
0x0601F868: f44f44a9  ldp x20, x19, [sp, #0x40]
0x0601F86C: f65743a9  ldp x22, x21, [sp, #0x30]
0x0601F870: fe1340f9  ldr x30, [sp, #0x20]
0x0601F874: 00000012  and w0, w0, #1
0x0601F878: ff430191  add sp, sp, #0x50
0x0601F87C: c0035fd6  ret

; RVA 0x601FE80 | public override int GetHashCode() { }
; bytes=376 sha256=99379ee4f233b7c242bae1744b031590187b3f769953a16fad146f0ca07aa672 status=arm64_complete_bound indexed_start=True
0x0601FE80: ffc300d1  sub sp, sp, #0x30
0x0601FE84: fe5701a9  stp x30, x21, [sp, #0x10]
0x0601FE88: f44f02a9  stp x20, x19, [sp, #0x20]
0x0601FE8C: 34e80090  adrp x20, #0x7d23000
0x0601FE90: 889e6139  ldrb w8, [x20, #0x867]
0x0601FE94: f30300aa  mov x19, x0
0x0601FE98: 88010037  tbnz w8, #0, #0x601fec8
0x0601FE9C: 40b500b0  adrp x0, #0x76c8000
0x0601FEA0: 003443f9  ldr x0, [x0, #0x668]
0x0601FEA4: dd824597  bl #0x3180a18
0x0601FEA8: e0b200b0  adrp x0, #0x767c000
0x0601FEAC: 000040f9  ldr x0, [x0]
0x0601FEB0: da824597  bl #0x3180a18
0x0601FEB4: 60b200f0  adrp x0, #0x766e000
0x0601FEB8: 002042f9  ldr x0, [x0, #0x440]
0x0601FEBC: d7824597  bl #0x3180a18
0x0601FEC0: 28008052  movz w8, #0x1
0x0601FEC4: 889e2139  strb w8, [x20, #0x867]
0x0601FEC8: 681240b9  ldr w8, [x19, #0x10]
0x0601FECC: 1f090071  cmp w8, #2
0x0601FED0: 80010054  b.eq #0x601ff00
0x0601FED4: 1f050071  cmp w8, #1
0x0601FED8: c0030054  b.eq #0x601ff50
0x0601FEDC: a8060035  cbnz w8, #0x601ffb0
0x0601FEE0: e0330091  add x0, sp, #0xc
0x0601FEE4: e1031faa  mov x1, xzr
0x0601FEE8: ff0f00b9  str wzr, [sp, #0xc]
0x0601FEEC: 16cfd997  bl #0x5693b44
0x0601FEF0: 68b200f0  adrp x8, #0x766e000
0x0601FEF4: 082142f9  ldr x8, [x8, #0x440]
0x0601FEF8: 731640b9  ldr w19, [x19, #0x14]
0x0601FEFC: 08000014  b #0x601ff1c
0x0601FF00: e0330091  add x0, sp, #0xc
0x0601FF04: e1031faa  mov x1, xzr
0x0601FF08: e80f00b9  str w8, [sp, #0xc]
0x0601FF0C: 0ecfd997  bl #0x5693b44
0x0601FF10: 68b200f0  adrp x8, #0x766e000
0x0601FF14: 082142f9  ldr x8, [x8, #0x440]
0x0601FF18: 732240b9  ldr w19, [x19, #0x20]
0x0601FF1C: 080140f9  ldr x8, [x8]
0x0601FF20: 09e140b9  ldr w9, [x8, #0xe0]
0x0601FF24: f403002a  mov w20, w0
0x0601FF28: 69000035  cbnz w9, #0x601ff34
0x0601FF2C: e00308aa  mov x0, x8
0x0601FF30: 17834597  bl #0x3180b8c
0x0601FF34: e8b200b0  adrp x8, #0x767c000
0x0601FF38: 080140f9  ldr x8, [x8]
0x0601FF3C: e003142a  mov w0, w20
0x0601FF40: e103132a  mov w1, w19
0x0601FF44: 020140f9  ldr x2, [x8]
0x0601FF48: 5dba7297  bl #0x3cce8bc
0x0601FF4C: 15000014  b #0x601ffa0
0x0601FF50: e0330091  add x0, sp, #0xc
0x0601FF54: e1031faa  mov x1, xzr
0x0601FF58: e80f00b9  str w8, [sp, #0xc]
0x0601FF5C: faced997  bl #0x5693b44
0x0601FF60: 68b200f0  adrp x8, #0x766e000
0x0601FF64: 082142f9  ldr x8, [x8, #0x440]
0x0601FF68: 744e4329  ldp w20, w19, [x19, #0x18]
0x0601FF6C: f503002a  mov w21, w0
0x0601FF70: 080140f9  ldr x8, [x8]
0x0601FF74: 09e140b9  ldr w9, [x8, #0xe0]
0x0601FF78: 69000035  cbnz w9, #0x601ff84
0x0601FF7C: e00308aa  mov x0, x8
0x0601FF80: 03834597  bl #0x3180b8c
0x0601FF84: 48b500b0  adrp x8, #0x76c8000
0x0601FF88: 083543f9  ldr x8, [x8, #0x668]
0x0601FF8C: e003152a  mov w0, w21
0x0601FF90: e103142a  mov w1, w20
0x0601FF94: e203132a  mov w2, w19
0x0601FF98: 030140f9  ldr x3, [x8]
0x0601FF9C: 60bc7297  bl #0x3ccf11c
0x0601FFA0: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0601FFA4: fe5741a9  ldp x30, x21, [sp, #0x10]
0x0601FFA8: ffc30091  add sp, sp, #0x30
0x0601FFAC: c0035fd6  ret
0x0601FFB0: 60b100f0  adrp x0, #0x764e000
0x0601FFB4: 006c42f9  ldr x0, [x0, #0x4d8]
0x0601FFB8: 9d824597  bl #0x3180a2c
0x0601FFBC: 39834597  bl #0x3180ca0
0x0601FFC0: f30300aa  mov x19, x0
0x0601FFC4: 80b500b0  adrp x0, #0x76d0000
0x0601FFC8: 00c840f9  ldr x0, [x0, #0x190]
0x0601FFCC: 98824597  bl #0x3180a2c
0x0601FFD0: e10300aa  mov x1, x0
0x0601FFD4: e00313aa  mov x0, x19
0x0601FFD8: e2031faa  mov x2, xzr
0x0601FFDC: 67bbda97  bl #0x56ced78
0x0601FFE0: 80b500b0  adrp x0, #0x76d0000
0x0601FFE4: 00cc40f9  ldr x0, [x0, #0x198]
0x0601FFE8: 91824597  bl #0x3180a2c
0x0601FFEC: e10300aa  mov x1, x0
0x0601FFF0: e00313aa  mov x0, x19
0x0601FFF4: e2824597  bl #0x3180b7c

; RVA 0x601FFF8 | public bool get_IsPlural() { }
; bytes=88 sha256=51f25d888256801de8ef32f00a9e3057f97ff191cca1a5c25e6f3e54317c89ef status=arm64_complete_bound indexed_start=True
0x0601FFF8: 081040b9  ldr w8, [x0, #0x10]
0x0601FFFC: 1f090071  cmp w8, #2
0x06020000: c0000054  b.eq #0x6020018
0x06020004: 1f050071  cmp w8, #1
0x06020008: 20010054  b.eq #0x602002c
0x0602000C: c8000035  cbnz w8, #0x6020024
0x06020010: 081440b9  ldr w8, [x0, #0x14]
0x06020014: 02000014  b #0x602001c
0x06020018: 082040b9  ldr w8, [x0, #0x20]
0x0602001C: 1f050071  cmp w8, #1
0x06020020: cc000054  b.gt #0x6020038
0x06020024: e0031f2a  mov w0, wzr
0x06020028: c0035fd6  ret
0x0602002C: 081840b9  ldr w8, [x0, #0x18]
0x06020030: 1f050071  cmp w8, #1
0x06020034: 6d000054  b.le #0x6020040
0x06020038: 20008052  movz w0, #0x1
0x0602003C: c0035fd6  ret
0x06020040: 081c40b9  ldr w8, [x0, #0x1c]
0x06020044: 1f050071  cmp w8, #1
0x06020048: e0d79f1a  cset w0, gt
0x0602004C: c0035fd6  ret

; RVA 0x6020050 | public static RewardAmount CreateFromSerialised(SerializedJsonReward rewardData) { }
; bytes=244 sha256=274cfc907f52af5789b9a5370a6b1c2696fe83e18e31872c79ecbd55af912b27 status=arm64_complete_bound indexed_start=True
0x06020050: fe0f1cf8  str x30, [sp, #-0x40]!
0x06020054: f85f01a9  stp x24, x23, [sp, #0x10]
0x06020058: f65702a9  stp x22, x21, [sp, #0x20]
0x0602005C: f44f03a9  stp x20, x19, [sp, #0x30]
0x06020060: 14e800f0  adrp x20, #0x7d23000
0x06020064: 88a26139  ldrb w8, [x20, #0x868]
0x06020068: f30300aa  mov x19, x0
0x0602006C: c8000037  tbnz w8, #0, #0x6020084
0x06020070: 80b200f0  adrp x0, #0x7673000
0x06020074: 00c440f9  ldr x0, [x0, #0x188]
0x06020078: 68824597  bl #0x3180a18
0x0602007C: 28008052  movz w8, #0x1
0x06020080: 88a22139  strb w8, [x20, #0x868]
0x06020084: f30500b4  cbz x19, #0x6020140
0x06020088: 97b200f0  adrp x23, #0x7673000
0x0602008C: f7c640f9  ldr x23, [x23, #0x188]
0x06020090: e00313aa  mov x0, x19
0x06020094: e1031faa  mov x1, xzr
0x06020098: b8172894  bl #0x6a25f78
0x0602009C: 1f000071  cmp w0, #0
0x060200A0: 6d000054  b.le #0x60200ac
0x060200A4: 38008052  movz w24, #0x1
0x060200A8: 07000014  b #0x60200c4
0x060200AC: e00313aa  mov x0, x19
0x060200B0: e1031faa  mov x1, xzr
0x060200B4: bb172894  bl #0x6a25fa0
0x060200B8: 1f000071  cmp w0, #0
0x060200BC: e8d79f1a  cset w8, gt
0x060200C0: 18791f53  lsl w24, w8, #1
0x060200C4: e00313aa  mov x0, x19
0x060200C8: e1031faa  mov x1, xzr
0x060200CC: 83172894  bl #0x6a25ed8
0x060200D0: f403002a  mov w20, w0
0x060200D4: e00313aa  mov x0, x19
0x060200D8: e1031faa  mov x1, xzr
0x060200DC: 9d172894  bl #0x6a25f50
0x060200E0: f503002a  mov w21, w0
0x060200E4: e00313aa  mov x0, x19
0x060200E8: e1031faa  mov x1, xzr
0x060200EC: a3172894  bl #0x6a25f78
0x060200F0: f603002a  mov w22, w0
0x060200F4: e00313aa  mov x0, x19
0x060200F8: e1031faa  mov x1, xzr
0x060200FC: a9172894  bl #0x6a25fa0
0x06020100: e80240f9  ldr x8, [x23]
0x06020104: f303002a  mov w19, w0
0x06020108: e00308aa  mov x0, x8
0x0602010C: e5824597  bl #0x3180ca0
0x06020110: e1031faa  mov x1, xzr
0x06020114: f70300aa  mov x23, x0
0x06020118: 39e9da97  bl #0x56da5fc
0x0602011C: f8520229  stp w24, w20, [x23, #0x10]
0x06020120: f55a0329  stp w21, w22, [x23, #0x18]
0x06020124: f32200b9  str w19, [x23, #0x20]
0x06020128: e00317aa  mov x0, x23
0x0602012C: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06020130: f65742a9  ldp x22, x21, [sp, #0x20]
0x06020134: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06020138: fe0744f8  ldr x30, [sp], #0x40
0x0602013C: c0035fd6  ret
0x06020140: db824597  bl #0x3180cac

; RVA 0x6020144 | public RewardAmount Clone() { }
; bytes=88 sha256=6ee87fd10f8ac3bba494ccb3178987b9de35955fc906b7158fb7207d173611c0 status=arm64_complete_bound indexed_start=True
0x06020144: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06020148: f44f01a9  stp x20, x19, [sp, #0x10]
0x0602014C: 14e800f0  adrp x20, #0x7d23000
0x06020150: 95b200f0  adrp x21, #0x7673000
0x06020154: 88a66139  ldrb w8, [x20, #0x869]
0x06020158: b5c640f9  ldr x21, [x21, #0x188]
0x0602015C: f30300aa  mov x19, x0
0x06020160: c8000037  tbnz w8, #0, #0x6020178
0x06020164: 80b200f0  adrp x0, #0x7673000
0x06020168: 00c440f9  ldr x0, [x0, #0x188]
0x0602016C: 2b824597  bl #0x3180a18
0x06020170: 28008052  movz w8, #0x1
0x06020174: 88a62139  strb w8, [x20, #0x869]
0x06020178: a00240f9  ldr x0, [x21]
0x0602017C: c9824597  bl #0x3180ca0
0x06020180: e10313aa  mov x1, x19
0x06020184: f40300aa  mov x20, x0
0x06020188: c3feff97  bl #0x601fc94
0x0602018C: e00314aa  mov x0, x20
0x06020190: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06020194: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06020198: c0035fd6  ret

; RVA 0x602019C | public int GetAmountOrZero() { }
; bytes=20 sha256=46e085bb1f2cbd423678587089e1c5a8f1f1d74b4492f029ac67b96ed5769a6e status=arm64_complete_bound indexed_start=True
0x0602019C: 081040b9  ldr w8, [x0, #0x10]
0x060201A0: 68000034  cbz w8, #0x60201ac
0x060201A4: e0031f2a  mov w0, wzr
0x060201A8: c0035fd6  ret
0x060201AC: 8afbff17  b #0x601efd4

