; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 33702 ContextualizedECS.Context.TickArgs
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x5F16478 | public bool ContainsArgType(Type type) { }
; bytes=152 sha256=65b35ad1e4c668e60c16f7de89b9eccc2893e2b3fab89e194b04da82edcee4fc status=arm64_complete_bound indexed_start=True
0x05F16478: ffc300d1  sub sp, sp, #0x30
0x05F1647C: fe5701a9  stp x30, x21, [sp, #0x10]
0x05F16480: f44f02a9  stp x20, x19, [sp, #0x20]
0x05F16484: 75f00090  adrp x21, #0x7d22000
0x05F16488: a8a67139  ldrb w8, [x21, #0xc69]
0x05F1648C: f30301aa  mov x19, x1
0x05F16490: f40300aa  mov x20, x0
0x05F16494: 28010037  tbnz w8, #0, #0x5f164b8
0x05F16498: 20bb00b0  adrp x0, #0x767b000
0x05F1649C: 009843f9  ldr x0, [x0, #0x730]
0x05F164A0: 5ea94997  bl #0x3180a18
0x05F164A4: a0ba00f0  adrp x0, #0x766d000
0x05F164A8: 004c45f9  ldr x0, [x0, #0xa98]
0x05F164AC: 5ba94997  bl #0x3180a18
0x05F164B0: 28008052  movz w8, #0x1
0x05F164B4: a8a63139  strb w8, [x21, #0xc69]
0x05F164B8: ff0700f9  str xzr, [sp, #8]
0x05F164BC: 800a40f9  ldr x0, [x20, #0x10]
0x05F164C0: 600200b4  cbz x0, #0x5f1650c
0x05F164C4: 28bb00b0  adrp x8, #0x767b000
0x05F164C8: 089943f9  ldr x8, [x8, #0x730]
0x05F164CC: e2230091  add x2, sp, #8
0x05F164D0: e10313aa  mov x1, x19
0x05F164D4: 030140f9  ldr x3, [x8]
0x05F164D8: f638bf97  bl #0x4ee48b0
0x05F164DC: e0000036  tbz w0, #0, #0x5f164f8
0x05F164E0: e80740f9  ldr x8, [sp, #8]
0x05F164E4: 480100b4  cbz x8, #0x5f1650c
0x05F164E8: 081940b9  ldr w8, [x8, #0x18]
0x05F164EC: 1f010071  cmp w8, #0
0x05F164F0: e0d79f1a  cset w0, gt
0x05F164F4: 02000014  b #0x5f164fc
0x05F164F8: e0031f2a  mov w0, wzr
0x05F164FC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x05F16500: fe5741a9  ldp x30, x21, [sp, #0x10]
0x05F16504: ffc30091  add sp, sp, #0x30
0x05F16508: c0035fd6  ret
0x05F1650C: e8a94997  bl #0x3180cac

; RVA 0x5F16510 | public bool ClearArgumentsOfType(Type type) { }
; bytes=196 sha256=a018a164ba23821a6a4a4b9488ae6b0dd2271a417a2c634a1f544e2d172c085e status=arm64_complete_bound indexed_start=True
0x05F16510: ffc300d1  sub sp, sp, #0x30
0x05F16514: fe5701a9  stp x30, x21, [sp, #0x10]
0x05F16518: f44f02a9  stp x20, x19, [sp, #0x20]
0x05F1651C: 75f00090  adrp x21, #0x7d22000
0x05F16520: a8aa7139  ldrb w8, [x21, #0xc6a]
0x05F16524: f30301aa  mov x19, x1
0x05F16528: f40300aa  mov x20, x0
0x05F1652C: 88010037  tbnz w8, #0, #0x5f1655c
0x05F16530: 20bb00b0  adrp x0, #0x767b000
0x05F16534: 009843f9  ldr x0, [x0, #0x730]
0x05F16538: 38a94997  bl #0x3180a18
0x05F1653C: 20bb00b0  adrp x0, #0x767b000
0x05F16540: 00a043f9  ldr x0, [x0, #0x740]
0x05F16544: 35a94997  bl #0x3180a18
0x05F16548: a0ba00f0  adrp x0, #0x766d000
0x05F1654C: 004c45f9  ldr x0, [x0, #0xa98]
0x05F16550: 32a94997  bl #0x3180a18
0x05F16554: 28008052  movz w8, #0x1
0x05F16558: a8aa3139  strb w8, [x21, #0xc6a]
0x05F1655C: ff0700f9  str xzr, [sp, #8]
0x05F16560: 800a40f9  ldr x0, [x20, #0x10]
0x05F16564: 600300b4  cbz x0, #0x5f165d0
0x05F16568: 28bb00b0  adrp x8, #0x767b000
0x05F1656C: 089943f9  ldr x8, [x8, #0x730]
0x05F16570: e2230091  add x2, sp, #8
0x05F16574: e10313aa  mov x1, x19
0x05F16578: 030140f9  ldr x3, [x8]
0x05F1657C: cd38bf97  bl #0x4ee48b0
0x05F16580: e0010036  tbz w0, #0, #0x5f165bc
0x05F16584: e80740f9  ldr x8, [sp, #8]
0x05F16588: 480200b4  cbz x8, #0x5f165d0
0x05F1658C: 021940b9  ldr w2, [x8, #0x18]
0x05F16590: 5f040071  cmp w2, #1
0x05F16594: 4b010054  b.lt #0x5f165bc
0x05F16598: 091d40b9  ldr w9, [x8, #0x1c]
0x05F1659C: 000940f9  ldr x0, [x8, #0x10]
0x05F165A0: e1031f2a  mov w1, wzr
0x05F165A4: e3031faa  mov x3, xzr
0x05F165A8: 29050011  add w9, w9, #1
0x05F165AC: 1f250329  stp wzr, w9, [x8, #0x18]
0x05F165B0: b38dde97  bl #0x56b9c7c
0x05F165B4: 20008052  movz w0, #0x1
0x05F165B8: 02000014  b #0x5f165c0
0x05F165BC: e0031f2a  mov w0, wzr
0x05F165C0: f44f42a9  ldp x20, x19, [sp, #0x20]
0x05F165C4: fe5741a9  ldp x30, x21, [sp, #0x10]
0x05F165C8: ffc30091  add sp, sp, #0x30
0x05F165CC: c0035fd6  ret
0x05F165D0: b7a94997  bl #0x3180cac

; RVA 0x5F165D4 | public void ClearAll() { }
; bytes=80 sha256=a6480c75e9f2c6422a50b924850ca822c1720d4e6ebd03fc3d7bed395de9346d status=arm64_complete_bound indexed_start=True
0x05F165D4: fe0f1ef8  str x30, [sp, #-0x20]!
0x05F165D8: f44f01a9  stp x20, x19, [sp, #0x10]
0x05F165DC: 74f00090  adrp x20, #0x7d22000
0x05F165E0: 88ae7139  ldrb w8, [x20, #0xc6b]
0x05F165E4: f30300aa  mov x19, x0
0x05F165E8: c8000037  tbnz w8, #0, #0x5f16600
0x05F165EC: 60bd00b0  adrp x0, #0x76c3000
0x05F165F0: 00bc45f9  ldr x0, [x0, #0xb78]
0x05F165F4: 09a94997  bl #0x3180a18
0x05F165F8: 28008052  movz w8, #0x1
0x05F165FC: 88ae3139  strb w8, [x20, #0xc6b]
0x05F16600: 600a40f9  ldr x0, [x19, #0x10]
0x05F16604: e00000b4  cbz x0, #0x5f16620
0x05F16608: 68bd00b0  adrp x8, #0x76c3000
0x05F1660C: 08bd45f9  ldr x8, [x8, #0xb78]
0x05F16610: f44f41a9  ldp x20, x19, [sp, #0x10]
0x05F16614: 010140f9  ldr x1, [x8]
0x05F16618: fe0742f8  ldr x30, [sp], #0x20
0x05F1661C: 3a32bf17  b #0x4ee2f04
0x05F16620: a3a94997  bl #0x3180cac

; RVA 0x5F16624 | public bool HasArguments() { }
; bytes=92 sha256=e550e2ea677e9e1fadf8ef43bf57afdfa8915d4c95d7e6b0eb0fa14f13970905 status=arm64_complete_bound indexed_start=True
0x05F16624: fe0f1ef8  str x30, [sp, #-0x20]!
0x05F16628: f44f01a9  stp x20, x19, [sp, #0x10]
0x05F1662C: 74f00090  adrp x20, #0x7d22000
0x05F16630: 88b27139  ldrb w8, [x20, #0xc6c]
0x05F16634: f30300aa  mov x19, x0
0x05F16638: c8000037  tbnz w8, #0, #0x5f16650
0x05F1663C: 60bd00b0  adrp x0, #0x76c3000
0x05F16640: 00c045f9  ldr x0, [x0, #0xb80]
0x05F16644: f5a84997  bl #0x3180a18
0x05F16648: 28008052  movz w8, #0x1
0x05F1664C: 88b23139  strb w8, [x20, #0xc6c]
0x05F16650: 600a40f9  ldr x0, [x19, #0x10]
0x05F16654: 400100b4  cbz x0, #0x5f1667c
0x05F16658: 68bd00b0  adrp x8, #0x76c3000
0x05F1665C: 08c145f9  ldr x8, [x8, #0xb80]
0x05F16660: 010140f9  ldr x1, [x8]
0x05F16664: fa30bf97  bl #0x4ee2a4c
0x05F16668: f44f41a9  ldp x20, x19, [sp, #0x10]
0x05F1666C: 1f000071  cmp w0, #0
0x05F16670: e0d79f1a  cset w0, gt
0x05F16674: fe0742f8  ldr x30, [sp], #0x20
0x05F16678: c0035fd6  ret
0x05F1667C: 8ca94997  bl #0x3180cac

; RVA 0x5F157BC | public void .ctor() { }
; bytes=136 sha256=186b99b3614dea2ce4a2b0c2c50b3dc28e058ae70804db76a907f2e5dc3cd298 status=arm64_complete_bound indexed_start=True
0x05F157BC: fe0f1df8  str x30, [sp, #-0x30]!
0x05F157C0: f65701a9  stp x22, x21, [sp, #0x10]
0x05F157C4: f44f02a9  stp x20, x19, [sp, #0x20]
0x05F157C8: 75f000b0  adrp x21, #0x7d22000
0x05F157CC: 76bd00d0  adrp x22, #0x76c3000
0x05F157D0: 74bd00d0  adrp x20, #0x76c3000
0x05F157D4: a8b67139  ldrb w8, [x21, #0xc6d]
0x05F157D8: d67e45f9  ldr x22, [x22, #0xaf8]
0x05F157DC: 948245f9  ldr x20, [x20, #0xb00]
0x05F157E0: f30300aa  mov x19, x0
0x05F157E4: 28010037  tbnz w8, #0, #0x5f15808
0x05F157E8: 60bd00d0  adrp x0, #0x76c3000
0x05F157EC: 008045f9  ldr x0, [x0, #0xb00]
0x05F157F0: 8aac4997  bl #0x3180a18
0x05F157F4: 60bd00d0  adrp x0, #0x76c3000
0x05F157F8: 007c45f9  ldr x0, [x0, #0xaf8]
0x05F157FC: 87ac4997  bl #0x3180a18
0x05F15800: 28008052  movz w8, #0x1
0x05F15804: a8b63139  strb w8, [x21, #0xc6d]
0x05F15808: c00240f9  ldr x0, [x22]
0x05F1580C: 25ad4997  bl #0x3180ca0
0x05F15810: 810240f9  ldr x1, [x20]
0x05F15814: f40300aa  mov x20, x0
0x05F15818: e331bf97  bl #0x4ee1fa4
0x05F1581C: e00313aa  mov x0, x19
0x05F15820: 140c01f8  str x20, [x0, #0x10]!
0x05F15824: e10314aa  mov x1, x20
0x05F15828: 67ac4997  bl #0x31809c4
0x05F1582C: e00313aa  mov x0, x19
0x05F15830: f44f42a9  ldp x20, x19, [sp, #0x20]
0x05F15834: f65741a9  ldp x22, x21, [sp, #0x10]
0x05F15838: e1031faa  mov x1, xzr
0x05F1583C: fe0743f8  ldr x30, [sp], #0x30
0x05F15840: 6f13df17  b #0x56da5fc

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DC49C0 | ContextualizedECS.Context.TickArgs$$FirstOrDefault<__Il2CppFullySharedGenericType>
; native signature: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o ContextualizedECS_Context_TickArgs__FirstOrDefault___Il2CppFullySharedGenericType_ (ContextualizedECS_Context_TickArgs_o* __this, const MethodInfo_3DC49C0* method);
; bytes=464 sha256=de9c2608c8d0d3b04eafdb8d671ea2080cb35cda5c46d83c260bfd99b835c05f status=arm64_complete_bound indexed_start=True
0x03DC49C0: fd7bbba9  stp x29, x30, [sp, #-0x50]!
0x03DC49C4: fa6701a9  stp x26, x25, [sp, #0x10]
0x03DC49C8: f85f02a9  stp x24, x23, [sp, #0x20]
0x03DC49CC: f65703a9  stp x22, x21, [sp, #0x30]
0x03DC49D0: f44f04a9  stp x20, x19, [sp, #0x40]
0x03DC49D4: fd030091  mov x29, sp
0x03DC49D8: ff4300d1  sub sp, sp, #0x10
0x03DC49DC: 5ad03bd5  mrs x26, tpidr_el0
0x03DC49E0: 481740f9  ldr x8, [x26, #0x28]
0x03DC49E4: f40302aa  mov x20, x2
0x03DC49E8: f30301aa  mov x19, x1
0x03DC49EC: f70300aa  mov x23, x0
0x03DC49F0: a8831ff8  stur x8, [x29, #-8]
0x03DC49F4: 591c40f9  ldr x25, [x2, #0x38]
0x03DC49F8: 590200b5  cbnz x25, #0x3dc4a40
0x03DC49FC: a0c501f0  adrp x0, #0x767b000
0x03DC4A00: 009843f9  ldr x0, [x0, #0x730]
0x03DC4A04: 05f0ce97  bl #0x3180a18
0x03DC4A08: 40c501b0  adrp x0, #0x766d000
0x03DC4A0C: 004c45f9  ldr x0, [x0, #0xa98]
0x03DC4A10: 02f0ce97  bl #0x3180a18
0x03DC4A14: 40c501b0  adrp x0, #0x766d000
0x03DC4A18: 005045f9  ldr x0, [x0, #0xaa0]
0x03DC4A1C: ffefce97  bl #0x3180a18
0x03DC4A20: 40c401d0  adrp x0, #0x764e000
0x03DC4A24: 00ac42f9  ldr x0, [x0, #0x558]
0x03DC4A28: fcefce97  bl #0x3180a18
0x03DC4A2C: 991e40f9  ldr x25, [x20, #0x38]
0x03DC4A30: 990000b5  cbnz x25, #0x3dc4a40
0x03DC4A34: e00314aa  mov x0, x20
0x03DC4A38: 9047ce97  bl #0x3156878
0x03DC4A3C: 991e40f9  ldr x25, [x20, #0x38]
0x03DC4A40: 280740f9  ldr x8, [x25, #8]
0x03DC4A44: 15fd40b9  ldr w21, [x8, #0xfc]
0x03DC4A48: e8030091  mov x8, sp
0x03DC4A4C: a93e0091  add x9, x21, #0xf
0x03DC4A50: 29717c92  and x9, x9, #0x1fffffff0
0x03DC4A54: 160109cb  sub x22, x8, x9
0x03DC4A58: df020091  mov sp, x22
0x03DC4A5C: e8030091  mov x8, sp
0x03DC4A60: 180109cb  sub x24, x8, x9
0x03DC4A64: bf031ff8  stur xzr, [x29, #-0x10]
0x03DC4A68: 1f030091  mov sp, x24
0x03DC4A6C: e00318aa  mov x0, x24
0x03DC4A70: e1031f2a  mov w1, wzr
0x03DC4A74: e20315aa  mov x2, x21
0x03DC4A78: ca27d094  bl #0x71ce9a0
0x03DC4A7C: 48c401d0  adrp x8, #0x764e000
0x03DC4A80: 08ad42f9  ldr x8, [x8, #0x558]
0x03DC4A84: 390340f9  ldr x25, [x25]
0x03DC4A88: 000140f9  ldr x0, [x8]
0x03DC4A8C: 08e040b9  ldr w8, [x0, #0xe0]
0x03DC4A90: 48000035  cbnz w8, #0x3dc4a98
0x03DC4A94: 3ef0ce97  bl #0x3180b8c
0x03DC4A98: e00319aa  mov x0, x25
0x03DC4A9C: e1031faa  mov x1, xzr
0x03DC4AA0: c9816394  bl #0x56a51c4
0x03DC4AA4: e80a40f9  ldr x8, [x23, #0x10]
0x03DC4AA8: 080700b4  cbz x8, #0x3dc4b88
0x03DC4AAC: a9c501f0  adrp x9, #0x767b000
0x03DC4AB0: 299943f9  ldr x9, [x9, #0x730]
0x03DC4AB4: e10300aa  mov x1, x0
0x03DC4AB8: a24300d1  sub x2, x29, #0x10
0x03DC4ABC: e00308aa  mov x0, x8
0x03DC4AC0: 230140f9  ldr x3, [x9]
0x03DC4AC4: 7b7f4494  bl #0x4ee48b0
0x03DC4AC8: 20030036  tbz w0, #0, #0x3dc4b2c
0x03DC4ACC: a0035ff8  ldur x0, [x29, #-0x10]
0x03DC4AD0: c00500b4  cbz x0, #0x3dc4b88
0x03DC4AD4: 081840b9  ldr w8, [x0, #0x18]
0x03DC4AD8: 1f050071  cmp w8, #1
0x03DC4ADC: 8b020054  b.lt #0x3dc4b2c
0x03DC4AE0: 48c501b0  adrp x8, #0x766d000
0x03DC4AE4: 085145f9  ldr x8, [x8, #0xaa0]
0x03DC4AE8: e1031f2a  mov w1, wzr
0x03DC4AEC: 020140f9  ldr x2, [x8]
0x03DC4AF0: abfd0994  bl #0x404419c
0x03DC4AF4: 881e40f9  ldr x8, [x20, #0x38]
0x03DC4AF8: f40300aa  mov x20, x0
0x03DC4AFC: 010540f9  ldr x1, [x8, #8]
0x03DC4B00: 28d44439  ldrb w8, [x1, #0x135]
0x03DC4B04: 88000037  tbnz w8, #0, #0x3dc4b14
0x03DC4B08: e00301aa  mov x0, x1
0x03DC4B0C: 4447ce97  bl #0x315681c
0x03DC4B10: e10300aa  mov x1, x0
0x03DC4B14: e00314aa  mov x0, x20
0x03DC4B18: e20316aa  mov x2, x22
0x03DC4B1C: 21f0ce97  bl #0x3180ba0
0x03DC4B20: e10300aa  mov x1, x0
0x03DC4B24: e00313aa  mov x0, x19
0x03DC4B28: 0b000014  b #0x3dc4b54
0x03DC4B2C: e00318aa  mov x0, x24
0x03DC4B30: e1031f2a  mov w1, wzr
0x03DC4B34: e20315aa  mov x2, x21
0x03DC4B38: 9a27d094  bl #0x71ce9a0
0x03DC4B3C: e00316aa  mov x0, x22
0x03DC4B40: e10318aa  mov x1, x24
0x03DC4B44: e20315aa  mov x2, x21
0x03DC4B48: 8a27d094  bl #0x71ce970
0x03DC4B4C: e00313aa  mov x0, x19
0x03DC4B50: e10316aa  mov x1, x22
0x03DC4B54: e20315aa  mov x2, x21
0x03DC4B58: 8627d094  bl #0x71ce970
0x03DC4B5C: 481740f9  ldr x8, [x26, #0x28]
0x03DC4B60: a9835ff8  ldur x9, [x29, #-8]
0x03DC4B64: 1f0109eb  cmp x8, x9
0x03DC4B68: 21010054  b.ne #0x3dc4b8c
0x03DC4B6C: bf030091  mov sp, x29
0x03DC4B70: f44f44a9  ldp x20, x19, [sp, #0x40]
0x03DC4B74: f65743a9  ldp x22, x21, [sp, #0x30]
0x03DC4B78: f85f42a9  ldp x24, x23, [sp, #0x20]
0x03DC4B7C: fa6741a9  ldp x26, x25, [sp, #0x10]
0x03DC4B80: fd7bc5a8  ldp x29, x30, [sp], #0x50
0x03DC4B84: c0035fd6  ret
0x03DC4B88: 49f0ce97  bl #0x3180cac
0x03DC4B8C: 8127d094  bl #0x71ce990

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DC4B90 | ContextualizedECS.Context.TickArgs$$LastOrDefault<__Il2CppFullySharedGenericType>
; native signature: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o ContextualizedECS_Context_TickArgs__LastOrDefault___Il2CppFullySharedGenericType_ (ContextualizedECS_Context_TickArgs_o* __this, const MethodInfo_3DC4B90* method);
; bytes=460 sha256=94d682cbd82f56587e44aace25482526d3f9a5e781291d3c385d86be4b786e2f status=arm64_complete_bound indexed_start=True
0x03DC4B90: fd7bbba9  stp x29, x30, [sp, #-0x50]!
0x03DC4B94: fa6701a9  stp x26, x25, [sp, #0x10]
0x03DC4B98: f85f02a9  stp x24, x23, [sp, #0x20]
0x03DC4B9C: f65703a9  stp x22, x21, [sp, #0x30]
0x03DC4BA0: f44f04a9  stp x20, x19, [sp, #0x40]
0x03DC4BA4: fd030091  mov x29, sp
0x03DC4BA8: ff4300d1  sub sp, sp, #0x10
0x03DC4BAC: 5ad03bd5  mrs x26, tpidr_el0
0x03DC4BB0: 481740f9  ldr x8, [x26, #0x28]
0x03DC4BB4: f40302aa  mov x20, x2
0x03DC4BB8: f30301aa  mov x19, x1
0x03DC4BBC: f70300aa  mov x23, x0
0x03DC4BC0: a8831ff8  stur x8, [x29, #-8]
0x03DC4BC4: 591c40f9  ldr x25, [x2, #0x38]
0x03DC4BC8: 590200b5  cbnz x25, #0x3dc4c10
0x03DC4BCC: a0c501f0  adrp x0, #0x767b000
0x03DC4BD0: 009843f9  ldr x0, [x0, #0x730]
0x03DC4BD4: 91efce97  bl #0x3180a18
0x03DC4BD8: 40c501b0  adrp x0, #0x766d000
0x03DC4BDC: 004c45f9  ldr x0, [x0, #0xa98]
0x03DC4BE0: 8eefce97  bl #0x3180a18
0x03DC4BE4: 40c501b0  adrp x0, #0x766d000
0x03DC4BE8: 005045f9  ldr x0, [x0, #0xaa0]
0x03DC4BEC: 8befce97  bl #0x3180a18
0x03DC4BF0: 40c401d0  adrp x0, #0x764e000
0x03DC4BF4: 00ac42f9  ldr x0, [x0, #0x558]
0x03DC4BF8: 88efce97  bl #0x3180a18
0x03DC4BFC: 991e40f9  ldr x25, [x20, #0x38]
0x03DC4C00: 990000b5  cbnz x25, #0x3dc4c10
0x03DC4C04: e00314aa  mov x0, x20
0x03DC4C08: 1c47ce97  bl #0x3156878
0x03DC4C0C: 991e40f9  ldr x25, [x20, #0x38]
0x03DC4C10: 280740f9  ldr x8, [x25, #8]
0x03DC4C14: 15fd40b9  ldr w21, [x8, #0xfc]
0x03DC4C18: e8030091  mov x8, sp
0x03DC4C1C: a93e0091  add x9, x21, #0xf
0x03DC4C20: 29717c92  and x9, x9, #0x1fffffff0
0x03DC4C24: 160109cb  sub x22, x8, x9
0x03DC4C28: df020091  mov sp, x22
0x03DC4C2C: e8030091  mov x8, sp
0x03DC4C30: 180109cb  sub x24, x8, x9
0x03DC4C34: bf031ff8  stur xzr, [x29, #-0x10]
0x03DC4C38: 1f030091  mov sp, x24
0x03DC4C3C: e00318aa  mov x0, x24
0x03DC4C40: e1031f2a  mov w1, wzr
0x03DC4C44: e20315aa  mov x2, x21
0x03DC4C48: 5627d094  bl #0x71ce9a0
0x03DC4C4C: 48c401d0  adrp x8, #0x764e000
0x03DC4C50: 08ad42f9  ldr x8, [x8, #0x558]
0x03DC4C54: 390340f9  ldr x25, [x25]
0x03DC4C58: 000140f9  ldr x0, [x8]
0x03DC4C5C: 08e040b9  ldr w8, [x0, #0xe0]
0x03DC4C60: 48000035  cbnz w8, #0x3dc4c68
0x03DC4C64: caefce97  bl #0x3180b8c
0x03DC4C68: e00319aa  mov x0, x25
0x03DC4C6C: e1031faa  mov x1, xzr
0x03DC4C70: 55816394  bl #0x56a51c4
0x03DC4C74: e80a40f9  ldr x8, [x23, #0x10]
0x03DC4C78: e80600b4  cbz x8, #0x3dc4d54
0x03DC4C7C: a9c501f0  adrp x9, #0x767b000
0x03DC4C80: 299943f9  ldr x9, [x9, #0x730]
0x03DC4C84: e10300aa  mov x1, x0
0x03DC4C88: a24300d1  sub x2, x29, #0x10
0x03DC4C8C: e00308aa  mov x0, x8
0x03DC4C90: 230140f9  ldr x3, [x9]
0x03DC4C94: 077f4494  bl #0x4ee48b0
0x03DC4C98: 00030036  tbz w0, #0, #0x3dc4cf8
0x03DC4C9C: a0035ff8  ldur x0, [x29, #-0x10]
0x03DC4CA0: a00500b4  cbz x0, #0x3dc4d54
0x03DC4CA4: 081840b9  ldr w8, [x0, #0x18]
0x03DC4CA8: 01050071  subs w1, w8, #1
0x03DC4CAC: 6b020054  b.lt #0x3dc4cf8
0x03DC4CB0: 48c501b0  adrp x8, #0x766d000
0x03DC4CB4: 085145f9  ldr x8, [x8, #0xaa0]
0x03DC4CB8: 020140f9  ldr x2, [x8]
0x03DC4CBC: 38fd0994  bl #0x404419c
0x03DC4CC0: 881e40f9  ldr x8, [x20, #0x38]
0x03DC4CC4: f40300aa  mov x20, x0
0x03DC4CC8: 010540f9  ldr x1, [x8, #8]
0x03DC4CCC: 28d44439  ldrb w8, [x1, #0x135]
0x03DC4CD0: 88000037  tbnz w8, #0, #0x3dc4ce0
0x03DC4CD4: e00301aa  mov x0, x1
0x03DC4CD8: d146ce97  bl #0x315681c
0x03DC4CDC: e10300aa  mov x1, x0
0x03DC4CE0: e00314aa  mov x0, x20
0x03DC4CE4: e20316aa  mov x2, x22
0x03DC4CE8: aeefce97  bl #0x3180ba0
0x03DC4CEC: e10300aa  mov x1, x0
0x03DC4CF0: e00313aa  mov x0, x19
0x03DC4CF4: 0b000014  b #0x3dc4d20
0x03DC4CF8: e00318aa  mov x0, x24
0x03DC4CFC: e1031f2a  mov w1, wzr
0x03DC4D00: e20315aa  mov x2, x21
0x03DC4D04: 2727d094  bl #0x71ce9a0
0x03DC4D08: e00316aa  mov x0, x22
0x03DC4D0C: e10318aa  mov x1, x24
0x03DC4D10: e20315aa  mov x2, x21
0x03DC4D14: 1727d094  bl #0x71ce970
0x03DC4D18: e00313aa  mov x0, x19
0x03DC4D1C: e10316aa  mov x1, x22
0x03DC4D20: e20315aa  mov x2, x21
0x03DC4D24: 1327d094  bl #0x71ce970
0x03DC4D28: 481740f9  ldr x8, [x26, #0x28]
0x03DC4D2C: a9835ff8  ldur x9, [x29, #-8]
0x03DC4D30: 1f0109eb  cmp x8, x9
0x03DC4D34: 21010054  b.ne #0x3dc4d58
0x03DC4D38: bf030091  mov sp, x29
0x03DC4D3C: f44f44a9  ldp x20, x19, [sp, #0x40]
0x03DC4D40: f65743a9  ldp x22, x21, [sp, #0x30]
0x03DC4D44: f85f42a9  ldp x24, x23, [sp, #0x20]
0x03DC4D48: fa6741a9  ldp x26, x25, [sp, #0x10]
0x03DC4D4C: fd7bc5a8  ldp x29, x30, [sp], #0x50
0x03DC4D50: c0035fd6  ret
0x03DC4D54: d6efce97  bl #0x3180cac
0x03DC4D58: 0e27d094  bl #0x71ce990

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DC4ED4 | ContextualizedECS.Context.TickArgs$$TryGet<IntervalTick>
; native signature: bool ContextualizedECS_Context_TickArgs__TryGet_IntervalTick_ (ContextualizedECS_Context_TickArgs_o* __this, Merger_MergeBoard_View_IntervalTick_o* value, const MethodInfo_3DC4ED4* method);
; bytes=332 sha256=a285673ea99c004ddd3479267ede540a229747dab59d32449c5bbc40f503bc88 status=arm64_complete_bound indexed_start=True
0x03DC4ED4: fe0f1df8  str x30, [sp, #-0x30]!
0x03DC4ED8: f65701a9  stp x22, x21, [sp, #0x10]
0x03DC4EDC: f44f02a9  stp x20, x19, [sp, #0x20]
0x03DC4EE0: 481c40f9  ldr x8, [x2, #0x38]
0x03DC4EE4: f40302aa  mov x20, x2
0x03DC4EE8: f30301aa  mov x19, x1
0x03DC4EEC: f50300aa  mov x21, x0
0x03DC4EF0: 480200b5  cbnz x8, #0x3dc4f38
0x03DC4EF4: a0c501f0  adrp x0, #0x767b000
0x03DC4EF8: 009843f9  ldr x0, [x0, #0x730]
0x03DC4EFC: c7eece97  bl #0x3180a18
0x03DC4F00: 40c501b0  adrp x0, #0x766d000
0x03DC4F04: 004c45f9  ldr x0, [x0, #0xa98]
0x03DC4F08: c4eece97  bl #0x3180a18
0x03DC4F0C: 40c501b0  adrp x0, #0x766d000
0x03DC4F10: 005045f9  ldr x0, [x0, #0xaa0]
0x03DC4F14: c1eece97  bl #0x3180a18
0x03DC4F18: 40c401d0  adrp x0, #0x764e000
0x03DC4F1C: 00ac42f9  ldr x0, [x0, #0x558]
0x03DC4F20: beeece97  bl #0x3180a18
0x03DC4F24: 881e40f9  ldr x8, [x20, #0x38]
0x03DC4F28: 880000b5  cbnz x8, #0x3dc4f38
0x03DC4F2C: e00314aa  mov x0, x20
0x03DC4F30: 5246ce97  bl #0x3156878
0x03DC4F34: 881e40f9  ldr x8, [x20, #0x38]
0x03DC4F38: 49c401d0  adrp x9, #0x764e000
0x03DC4F3C: 29ad42f9  ldr x9, [x9, #0x558]
0x03DC4F40: ff0700f9  str xzr, [sp, #8]
0x03DC4F44: 160140f9  ldr x22, [x8]
0x03DC4F48: 200140f9  ldr x0, [x9]
0x03DC4F4C: 09e040b9  ldr w9, [x0, #0xe0]
0x03DC4F50: 49000035  cbnz w9, #0x3dc4f58
0x03DC4F54: 0eefce97  bl #0x3180b8c
0x03DC4F58: e00316aa  mov x0, x22
0x03DC4F5C: e1031faa  mov x1, xzr
0x03DC4F60: 99806394  bl #0x56a51c4
0x03DC4F64: 7f0200b9  str wzr, [x19]
0x03DC4F68: a80a40f9  ldr x8, [x21, #0x10]
0x03DC4F6C: 680500b4  cbz x8, #0x3dc5018
0x03DC4F70: a9c501f0  adrp x9, #0x767b000
0x03DC4F74: 299943f9  ldr x9, [x9, #0x730]
0x03DC4F78: e10300aa  mov x1, x0
0x03DC4F7C: e2230091  add x2, sp, #8
0x03DC4F80: e00308aa  mov x0, x8
0x03DC4F84: 230140f9  ldr x3, [x9]
0x03DC4F88: 4a7e4494  bl #0x4ee48b0
0x03DC4F8C: c0030036  tbz w0, #0, #0x3dc5004
0x03DC4F90: e00740f9  ldr x0, [sp, #8]
0x03DC4F94: 200400b4  cbz x0, #0x3dc5018
0x03DC4F98: 081840b9  ldr w8, [x0, #0x18]
0x03DC4F9C: 01050071  subs w1, w8, #1
0x03DC4FA0: 2b030054  b.lt #0x3dc5004
0x03DC4FA4: 48c501b0  adrp x8, #0x766d000
0x03DC4FA8: 085145f9  ldr x8, [x8, #0xaa0]
0x03DC4FAC: 020140f9  ldr x2, [x8]
0x03DC4FB0: 7bfc0994  bl #0x404419c
0x03DC4FB4: 881e40f9  ldr x8, [x20, #0x38]
0x03DC4FB8: f40300aa  mov x20, x0
0x03DC4FBC: 010940f9  ldr x1, [x8, #0x10]
0x03DC4FC0: 28d44439  ldrb w8, [x1, #0x135]
0x03DC4FC4: 88000037  tbnz w8, #0, #0x3dc4fd4
0x03DC4FC8: e00301aa  mov x0, x1
0x03DC4FCC: 1446ce97  bl #0x315681c
0x03DC4FD0: e10300aa  mov x1, x0
0x03DC4FD4: 340200b4  cbz x20, #0x3dc5018
0x03DC4FD8: 880240f9  ldr x8, [x20]
0x03DC4FDC: 292040f9  ldr x9, [x1, #0x40]
0x03DC4FE0: e00314aa  mov x0, x20
0x03DC4FE4: 082140f9  ldr x8, [x8, #0x40]
0x03DC4FE8: 1f0109eb  cmp x8, x9
0x03DC4FEC: 81010054  b.ne #0x3dc501c
0x03DC4FF0: eaeece97  bl #0x3180b98
0x03DC4FF4: 080040b9  ldr w8, [x0]
0x03DC4FF8: 20008052  movz w0, #0x1
0x03DC4FFC: 680200b9  str w8, [x19]
0x03DC5000: 02000014  b #0x3dc5008
0x03DC5004: e0031f2a  mov w0, wzr
0x03DC5008: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03DC500C: f65741a9  ldp x22, x21, [sp, #0x10]
0x03DC5010: fe0743f8  ldr x30, [sp], #0x30
0x03DC5014: c0035fd6  ret
0x03DC5018: 25efce97  bl #0x3180cac
0x03DC501C: 0bf0ce97  bl #0x3181048

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DC5020 | ContextualizedECS.Context.TickArgs$$TryGet<object>
; native signature: bool ContextualizedECS_Context_TickArgs__TryGet_object_ (ContextualizedECS_Context_TickArgs_o* __this, Il2CppObject** value, const MethodInfo_3DC5020* method);
; bytes=404 sha256=2b099e2026d7a55516bf57bc3ff948550c4b193b0676d575059d9687a31779f8 status=arm64_complete_bound indexed_start=True
0x03DC5020: fe0f1df8  str x30, [sp, #-0x30]!
0x03DC5024: f65701a9  stp x22, x21, [sp, #0x10]
0x03DC5028: f44f02a9  stp x20, x19, [sp, #0x20]
0x03DC502C: 481c40f9  ldr x8, [x2, #0x38]
0x03DC5030: f40302aa  mov x20, x2
0x03DC5034: f30301aa  mov x19, x1
0x03DC5038: f50300aa  mov x21, x0
0x03DC503C: 480200b5  cbnz x8, #0x3dc5084
0x03DC5040: a0c501d0  adrp x0, #0x767b000
0x03DC5044: 009843f9  ldr x0, [x0, #0x730]
0x03DC5048: 74eece97  bl #0x3180a18
0x03DC504C: 40c50190  adrp x0, #0x766d000
0x03DC5050: 004c45f9  ldr x0, [x0, #0xa98]
0x03DC5054: 71eece97  bl #0x3180a18
0x03DC5058: 40c50190  adrp x0, #0x766d000
0x03DC505C: 005045f9  ldr x0, [x0, #0xaa0]
0x03DC5060: 6eeece97  bl #0x3180a18
0x03DC5064: 40c401b0  adrp x0, #0x764e000
0x03DC5068: 00ac42f9  ldr x0, [x0, #0x558]
0x03DC506C: 6beece97  bl #0x3180a18
0x03DC5070: 881e40f9  ldr x8, [x20, #0x38]
0x03DC5074: 880000b5  cbnz x8, #0x3dc5084
0x03DC5078: e00314aa  mov x0, x20
0x03DC507C: ff45ce97  bl #0x3156878
0x03DC5080: 881e40f9  ldr x8, [x20, #0x38]
0x03DC5084: 49c401b0  adrp x9, #0x764e000
0x03DC5088: 29ad42f9  ldr x9, [x9, #0x558]
0x03DC508C: ff0700f9  str xzr, [sp, #8]
0x03DC5090: 160140f9  ldr x22, [x8]
0x03DC5094: 200140f9  ldr x0, [x9]
0x03DC5098: 09e040b9  ldr w9, [x0, #0xe0]
0x03DC509C: 49000035  cbnz w9, #0x3dc50a4
0x03DC50A0: bbeece97  bl #0x3180b8c
0x03DC50A4: e00316aa  mov x0, x22
0x03DC50A8: e1031faa  mov x1, xzr
0x03DC50AC: 46806394  bl #0x56a51c4
0x03DC50B0: 7f0200f9  str xzr, [x19]
0x03DC50B4: a80a40f9  ldr x8, [x21, #0x10]
0x03DC50B8: c80700b4  cbz x8, #0x3dc51b0
0x03DC50BC: a9c501d0  adrp x9, #0x767b000
0x03DC50C0: 299943f9  ldr x9, [x9, #0x730]
0x03DC50C4: e10300aa  mov x1, x0
0x03DC50C8: e2230091  add x2, sp, #8
0x03DC50CC: e00308aa  mov x0, x8
0x03DC50D0: 230140f9  ldr x3, [x9]
0x03DC50D4: f77d4494  bl #0x4ee48b0
0x03DC50D8: 40030036  tbz w0, #0, #0x3dc5140
0x03DC50DC: e00740f9  ldr x0, [sp, #8]
0x03DC50E0: 800600b4  cbz x0, #0x3dc51b0
0x03DC50E4: 081840b9  ldr w8, [x0, #0x18]
0x03DC50E8: 01050071  subs w1, w8, #1
0x03DC50EC: ab020054  b.lt #0x3dc5140
0x03DC50F0: 48c50190  adrp x8, #0x766d000
0x03DC50F4: 085145f9  ldr x8, [x8, #0xaa0]
0x03DC50F8: 020140f9  ldr x2, [x8]
0x03DC50FC: 28fc0994  bl #0x404419c
0x03DC5100: 881e40f9  ldr x8, [x20, #0x38]
0x03DC5104: f50300aa  mov x21, x0
0x03DC5108: 160940f9  ldr x22, [x8, #0x10]
0x03DC510C: c8d64439  ldrb w8, [x22, #0x135]
0x03DC5110: 88000037  tbnz w8, #0, #0x3dc5120
0x03DC5114: e00316aa  mov x0, x22
0x03DC5118: c145ce97  bl #0x315681c
0x03DC511C: f60300aa  mov x22, x0
0x03DC5120: 550100b4  cbz x21, #0x3dc5148
0x03DC5124: e00315aa  mov x0, x21
0x03DC5128: e10316aa  mov x1, x22
0x03DC512C: 99eece97  bl #0x3180b90
0x03DC5130: e00000b5  cbnz x0, #0x3dc514c
0x03DC5134: e00315aa  mov x0, x21
0x03DC5138: e10316aa  mov x1, x22
0x03DC513C: c3efce97  bl #0x3181048
0x03DC5140: e0031f2a  mov w0, wzr
0x03DC5144: 17000014  b #0x3dc51a0
0x03DC5148: e0031faa  mov x0, xzr
0x03DC514C: 600200f9  str x0, [x19]
0x03DC5150: 881e40f9  ldr x8, [x20, #0x38]
0x03DC5154: 140940f9  ldr x20, [x8, #0x10]
0x03DC5158: 88d64439  ldrb w8, [x20, #0x135]
0x03DC515C: 88000037  tbnz w8, #0, #0x3dc516c
0x03DC5160: e00314aa  mov x0, x20
0x03DC5164: ae45ce97  bl #0x315681c
0x03DC5168: f40300aa  mov x20, x0
0x03DC516C: 350100b4  cbz x21, #0x3dc5190
0x03DC5170: e00315aa  mov x0, x21
0x03DC5174: e10314aa  mov x1, x20
0x03DC5178: 86eece97  bl #0x3180b90
0x03DC517C: e10300aa  mov x1, x0
0x03DC5180: a00000b5  cbnz x0, #0x3dc5194
0x03DC5184: e00315aa  mov x0, x21
0x03DC5188: e10314aa  mov x1, x20
0x03DC518C: afefce97  bl #0x3181048
0x03DC5190: e1031faa  mov x1, xzr
0x03DC5194: e00313aa  mov x0, x19
0x03DC5198: 0beece97  bl #0x31809c4
0x03DC519C: 20008052  movz w0, #0x1
0x03DC51A0: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03DC51A4: f65741a9  ldp x22, x21, [sp, #0x10]
0x03DC51A8: fe0743f8  ldr x30, [sp], #0x30
0x03DC51AC: c0035fd6  ret
0x03DC51B0: bfeece97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DC51B4 | ContextualizedECS.Context.TickArgs$$TryGet<__Il2CppFullySharedGenericType>
; native signature: bool ContextualizedECS_Context_TickArgs__TryGet___Il2CppFullySharedGenericType_ (ContextualizedECS_Context_TickArgs_o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o* value, const MethodInfo_3DC51B4* method);
; bytes=452 sha256=46ebc91b43a3ae968c42f5c4aad163b7da9a4f2b71b85f92679d0e9d516a038b status=arm64_complete_bound indexed_start=True
0x03DC51B4: fd7bbba9  stp x29, x30, [sp, #-0x50]!
0x03DC51B8: f90b00f9  str x25, [sp, #0x10]
0x03DC51BC: f85f02a9  stp x24, x23, [sp, #0x20]
0x03DC51C0: f65703a9  stp x22, x21, [sp, #0x30]
0x03DC51C4: f44f04a9  stp x20, x19, [sp, #0x40]
0x03DC51C8: fd030091  mov x29, sp
0x03DC51CC: ff4300d1  sub sp, sp, #0x10
0x03DC51D0: 59d03bd5  mrs x25, tpidr_el0
0x03DC51D4: 281740f9  ldr x8, [x25, #0x28]
0x03DC51D8: f40302aa  mov x20, x2
0x03DC51DC: f30301aa  mov x19, x1
0x03DC51E0: f70300aa  mov x23, x0
0x03DC51E4: a8831ff8  stur x8, [x29, #-8]
0x03DC51E8: 481c40f9  ldr x8, [x2, #0x38]
0x03DC51EC: 480200b5  cbnz x8, #0x3dc5234
0x03DC51F0: a0c501d0  adrp x0, #0x767b000
0x03DC51F4: 009843f9  ldr x0, [x0, #0x730]
0x03DC51F8: 08eece97  bl #0x3180a18
0x03DC51FC: 40c50190  adrp x0, #0x766d000
0x03DC5200: 004c45f9  ldr x0, [x0, #0xa98]
0x03DC5204: 05eece97  bl #0x3180a18
0x03DC5208: 40c50190  adrp x0, #0x766d000
0x03DC520C: 005045f9  ldr x0, [x0, #0xaa0]
0x03DC5210: 02eece97  bl #0x3180a18
0x03DC5214: 40c401b0  adrp x0, #0x764e000
0x03DC5218: 00ac42f9  ldr x0, [x0, #0x558]
0x03DC521C: ffedce97  bl #0x3180a18
0x03DC5220: 881e40f9  ldr x8, [x20, #0x38]
0x03DC5224: 880000b5  cbnz x8, #0x3dc5234
0x03DC5228: e00314aa  mov x0, x20
0x03DC522C: 9345ce97  bl #0x3156878
0x03DC5230: 881e40f9  ldr x8, [x20, #0x38]
0x03DC5234: 090940f9  ldr x9, [x8, #0x10]
0x03DC5238: 35fd40b9  ldr w21, [x9, #0xfc]
0x03DC523C: e9030091  mov x9, sp
0x03DC5240: aa3e0091  add x10, x21, #0xf
0x03DC5244: 4a717c92  and x10, x10, #0x1fffffff0
0x03DC5248: 36010acb  sub x22, x9, x10
0x03DC524C: df020091  mov sp, x22
0x03DC5250: 49c401b0  adrp x9, #0x764e000
0x03DC5254: 29ad42f9  ldr x9, [x9, #0x558]
0x03DC5258: bf031ff8  stur xzr, [x29, #-0x10]
0x03DC525C: 180140f9  ldr x24, [x8]
0x03DC5260: 200140f9  ldr x0, [x9]
0x03DC5264: 09e040b9  ldr w9, [x0, #0xe0]
0x03DC5268: 49000035  cbnz w9, #0x3dc5270
0x03DC526C: 48eece97  bl #0x3180b8c
0x03DC5270: e00318aa  mov x0, x24
0x03DC5274: e1031faa  mov x1, xzr
0x03DC5278: d37f6394  bl #0x56a51c4
0x03DC527C: f80300aa  mov x24, x0
0x03DC5280: e00313aa  mov x0, x19
0x03DC5284: e1031f2a  mov w1, wzr
0x03DC5288: e20315aa  mov x2, x21
0x03DC528C: c525d094  bl #0x71ce9a0
0x03DC5290: e00a40f9  ldr x0, [x23, #0x10]
0x03DC5294: e00600b4  cbz x0, #0x3dc5370
0x03DC5298: a8c501d0  adrp x8, #0x767b000
0x03DC529C: 089943f9  ldr x8, [x8, #0x730]
0x03DC52A0: a24300d1  sub x2, x29, #0x10
0x03DC52A4: e10318aa  mov x1, x24
0x03DC52A8: 030140f9  ldr x3, [x8]
0x03DC52AC: 817d4494  bl #0x4ee48b0
0x03DC52B0: 80040036  tbz w0, #0, #0x3dc5340
0x03DC52B4: a0035ff8  ldur x0, [x29, #-0x10]
0x03DC52B8: c00500b4  cbz x0, #0x3dc5370
0x03DC52BC: 081840b9  ldr w8, [x0, #0x18]
0x03DC52C0: 01050071  subs w1, w8, #1
0x03DC52C4: eb030054  b.lt #0x3dc5340
0x03DC52C8: 48c50190  adrp x8, #0x766d000
0x03DC52CC: 085145f9  ldr x8, [x8, #0xaa0]
0x03DC52D0: 020140f9  ldr x2, [x8]
0x03DC52D4: b2fb0994  bl #0x404419c
0x03DC52D8: 881e40f9  ldr x8, [x20, #0x38]
0x03DC52DC: f70300aa  mov x23, x0
0x03DC52E0: 010940f9  ldr x1, [x8, #0x10]
0x03DC52E4: 28d44439  ldrb w8, [x1, #0x135]
0x03DC52E8: 88000037  tbnz w8, #0, #0x3dc52f8
0x03DC52EC: e00301aa  mov x0, x1
0x03DC52F0: 4b45ce97  bl #0x315681c
0x03DC52F4: e10300aa  mov x1, x0
0x03DC52F8: e00317aa  mov x0, x23
0x03DC52FC: e20316aa  mov x2, x22
0x03DC5300: 28eece97  bl #0x3180ba0
0x03DC5304: f60300aa  mov x22, x0
0x03DC5308: e00313aa  mov x0, x19
0x03DC530C: e10316aa  mov x1, x22
0x03DC5310: e20315aa  mov x2, x21
0x03DC5314: 9725d094  bl #0x71ce970
0x03DC5318: 881e40f9  ldr x8, [x20, #0x38]
0x03DC531C: 000940f9  ldr x0, [x8, #0x10]
0x03DC5320: 08d44439  ldrb w8, [x0, #0x135]
0x03DC5324: 48000037  tbnz w8, #0, #0x3dc532c
0x03DC5328: 3d45ce97  bl #0x315681c
0x03DC532C: e10313aa  mov x1, x19
0x03DC5330: e20316aa  mov x2, x22
0x03DC5334: a5edce97  bl #0x31809c8
0x03DC5338: 20008052  movz w0, #0x1
0x03DC533C: 02000014  b #0x3dc5344
0x03DC5340: e0031f2a  mov w0, wzr
0x03DC5344: 281740f9  ldr x8, [x25, #0x28]
0x03DC5348: a9835ff8  ldur x9, [x29, #-8]
0x03DC534C: 1f0109eb  cmp x8, x9
0x03DC5350: 21010054  b.ne #0x3dc5374
0x03DC5354: bf030091  mov sp, x29
0x03DC5358: f44f44a9  ldp x20, x19, [sp, #0x40]
0x03DC535C: f65743a9  ldp x22, x21, [sp, #0x30]
0x03DC5360: f85f42a9  ldp x24, x23, [sp, #0x20]
0x03DC5364: f90b40f9  ldr x25, [sp, #0x10]
0x03DC5368: fd7bc5a8  ldp x29, x30, [sp], #0x50
0x03DC536C: c0035fd6  ret
0x03DC5370: 4feece97  bl #0x3180cac
0x03DC5374: 8725d094  bl #0x71ce990

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DC495C | ContextualizedECS.Context.TickArgs$$ContainsEither<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>
; native signature: bool ContextualizedECS_Context_TickArgs__ContainsEither___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_ (ContextualizedECS_Context_TickArgs_o* __this, const MethodInfo_3DC495C* method);
; bytes=100 sha256=398b16c3035144a0d68fc29b0dbaa71d8eddf01957ccc232a60d0d6f0d5a6aec status=arm64_complete_bound indexed_start=True
0x03DC495C: fe0f1ef8  str x30, [sp, #-0x20]!
0x03DC4960: f44f01a9  stp x20, x19, [sp, #0x10]
0x03DC4964: 281c40f9  ldr x8, [x1, #0x38]
0x03DC4968: f40301aa  mov x20, x1
0x03DC496C: f30300aa  mov x19, x0
0x03DC4970: 880000b5  cbnz x8, #0x3dc4980
0x03DC4974: e00314aa  mov x0, x20
0x03DC4978: c047ce97  bl #0x3156878
0x03DC497C: 881e40f9  ldr x8, [x20, #0x38]
0x03DC4980: 010140f9  ldr x1, [x8]
0x03DC4984: e00313aa  mov x0, x19
0x03DC4988: 280040f9  ldr x8, [x1]
0x03DC498C: 00013fd6  blr x8
0x03DC4990: a0000036  tbz w0, #0, #0x3dc49a4
0x03DC4994: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03DC4998: 20008052  movz w0, #0x1
0x03DC499C: fe0742f8  ldr x30, [sp], #0x20
0x03DC49A0: c0035fd6  ret
0x03DC49A4: 881e40f9  ldr x8, [x20, #0x38]
0x03DC49A8: e00313aa  mov x0, x19
0x03DC49AC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03DC49B0: 010540f9  ldr x1, [x8, #8]
0x03DC49B4: 220040f9  ldr x2, [x1]
0x03DC49B8: fe0742f8  ldr x30, [sp], #0x20
0x03DC49BC: 40001fd6  br x2

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DC4400 | ContextualizedECS.Context.TickArgs$$All<object>
; native signature: System_Collections_Generic_IEnumerable_T__o* ContextualizedECS_Context_TickArgs__All_object_ (ContextualizedECS_Context_TickArgs_o* __this, const MethodInfo_3DC4400* method);
; bytes=280 sha256=61565b7b43580e0c6975f29fdc15a6647a3b8e554d3f7525b7e8e63d5cd21018 status=arm64_complete_bound indexed_start=True
0x03DC4400: ffc300d1  sub sp, sp, #0x30
0x03DC4404: fe5701a9  stp x30, x21, [sp, #0x10]
0x03DC4408: f44f02a9  stp x20, x19, [sp, #0x20]
0x03DC440C: 281c40f9  ldr x8, [x1, #0x38]
0x03DC4410: f30301aa  mov x19, x1
0x03DC4414: f40300aa  mov x20, x0
0x03DC4418: 880100b5  cbnz x8, #0x3dc4448
0x03DC441C: a0c501f0  adrp x0, #0x767b000
0x03DC4420: 009843f9  ldr x0, [x0, #0x730]
0x03DC4424: 7df1ce97  bl #0x3180a18
0x03DC4428: 40c401d0  adrp x0, #0x764e000
0x03DC442C: 00ac42f9  ldr x0, [x0, #0x558]
0x03DC4430: 7af1ce97  bl #0x3180a18
0x03DC4434: 681e40f9  ldr x8, [x19, #0x38]
0x03DC4438: 880000b5  cbnz x8, #0x3dc4448
0x03DC443C: e00313aa  mov x0, x19
0x03DC4440: 0e49ce97  bl #0x3156878
0x03DC4444: 681e40f9  ldr x8, [x19, #0x38]
0x03DC4448: 49c401d0  adrp x9, #0x764e000
0x03DC444C: 29ad42f9  ldr x9, [x9, #0x558]
0x03DC4450: ff0700f9  str xzr, [sp, #8]
0x03DC4454: 150140f9  ldr x21, [x8]
0x03DC4458: 200140f9  ldr x0, [x9]
0x03DC445C: 09e040b9  ldr w9, [x0, #0xe0]
0x03DC4460: 49000035  cbnz w9, #0x3dc4468
0x03DC4464: caf1ce97  bl #0x3180b8c
0x03DC4468: e00315aa  mov x0, x21
0x03DC446C: e1031faa  mov x1, xzr
0x03DC4470: 55836394  bl #0x56a51c4
0x03DC4474: 880a40f9  ldr x8, [x20, #0x10]
0x03DC4478: e80400b4  cbz x8, #0x3dc4514
0x03DC447C: a9c501f0  adrp x9, #0x767b000
0x03DC4480: 299943f9  ldr x9, [x9, #0x730]
0x03DC4484: e10300aa  mov x1, x0
0x03DC4488: e2230091  add x2, sp, #8
0x03DC448C: e00308aa  mov x0, x8
0x03DC4490: 230140f9  ldr x3, [x9]
0x03DC4494: 07814494  bl #0x4ee48b0
0x03DC4498: c0000036  tbz w0, #0, #0x3dc44b0
0x03DC449C: 681e40f9  ldr x8, [x19, #0x38]
0x03DC44A0: e00740f9  ldr x0, [sp, #8]
0x03DC44A4: 010d40f9  ldr x1, [x8, #0x18]
0x03DC44A8: 80a0f997  bl #0x3c2c6a8
0x03DC44AC: 16000014  b #0x3dc4504
0x03DC44B0: 681e40f9  ldr x8, [x19, #0x38]
0x03DC44B4: 130540f9  ldr x19, [x8, #8]
0x03DC44B8: 681e40f9  ldr x8, [x19, #0x38]
0x03DC44BC: 880000b5  cbnz x8, #0x3dc44cc
0x03DC44C0: e00313aa  mov x0, x19
0x03DC44C4: ed48ce97  bl #0x3156878
0x03DC44C8: 681e40f9  ldr x8, [x19, #0x38]
0x03DC44CC: 000940f9  ldr x0, [x8, #0x10]
0x03DC44D0: 08d44439  ldrb w8, [x0, #0x135]
0x03DC44D4: 48000037  tbnz w8, #0, #0x3dc44dc
0x03DC44D8: d148ce97  bl #0x315681c
0x03DC44DC: 08e040b9  ldr w8, [x0, #0xe0]
0x03DC44E0: 48000035  cbnz w8, #0x3dc44e8
0x03DC44E4: aaf1ce97  bl #0x3180b8c
0x03DC44E8: 681e40f9  ldr x8, [x19, #0x38]
0x03DC44EC: 000940f9  ldr x0, [x8, #0x10]
0x03DC44F0: 08d44439  ldrb w8, [x0, #0x135]
0x03DC44F4: 48000037  tbnz w8, #0, #0x3dc44fc
0x03DC44F8: c948ce97  bl #0x315681c
0x03DC44FC: 085c40f9  ldr x8, [x0, #0xb8]
0x03DC4500: 000140f9  ldr x0, [x8]
0x03DC4504: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03DC4508: fe5741a9  ldp x30, x21, [sp, #0x10]
0x03DC450C: ffc30091  add sp, sp, #0x30
0x03DC4510: c0035fd6  ret
0x03DC4514: e6f1ce97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DC4518 | ContextualizedECS.Context.TickArgs$$All<__Il2CppFullySharedGenericType>
; native signature: System_Collections_Generic_IEnumerable_T__o* ContextualizedECS_Context_TickArgs__All___Il2CppFullySharedGenericType_ (ContextualizedECS_Context_TickArgs_o* __this, const MethodInfo_3DC4518* method);
; bytes=216 sha256=261977796b6110f8f6f2a61c3f3b63178436474d6de507c9829eb4aade0d0fad status=arm64_complete_bound indexed_start=True
0x03DC4518: ffc300d1  sub sp, sp, #0x30
0x03DC451C: fe5701a9  stp x30, x21, [sp, #0x10]
0x03DC4520: f44f02a9  stp x20, x19, [sp, #0x20]
0x03DC4524: 281c40f9  ldr x8, [x1, #0x38]
0x03DC4528: f30301aa  mov x19, x1
0x03DC452C: f40300aa  mov x20, x0
0x03DC4530: 880100b5  cbnz x8, #0x3dc4560
0x03DC4534: a0c501f0  adrp x0, #0x767b000
0x03DC4538: 009843f9  ldr x0, [x0, #0x730]
0x03DC453C: 37f1ce97  bl #0x3180a18
0x03DC4540: 40c401d0  adrp x0, #0x764e000
0x03DC4544: 00ac42f9  ldr x0, [x0, #0x558]
0x03DC4548: 34f1ce97  bl #0x3180a18
0x03DC454C: 681e40f9  ldr x8, [x19, #0x38]
0x03DC4550: 880000b5  cbnz x8, #0x3dc4560
0x03DC4554: e00313aa  mov x0, x19
0x03DC4558: c848ce97  bl #0x3156878
0x03DC455C: 681e40f9  ldr x8, [x19, #0x38]
0x03DC4560: 49c401d0  adrp x9, #0x764e000
0x03DC4564: 29ad42f9  ldr x9, [x9, #0x558]
0x03DC4568: ff0700f9  str xzr, [sp, #8]
0x03DC456C: 150140f9  ldr x21, [x8]
0x03DC4570: 200140f9  ldr x0, [x9]
0x03DC4574: 09e040b9  ldr w9, [x0, #0xe0]
0x03DC4578: 49000035  cbnz w9, #0x3dc4580
0x03DC457C: 84f1ce97  bl #0x3180b8c
0x03DC4580: e00315aa  mov x0, x21
0x03DC4584: e1031faa  mov x1, xzr
0x03DC4588: 0f836394  bl #0x56a51c4
0x03DC458C: 880a40f9  ldr x8, [x20, #0x10]
0x03DC4590: e80200b4  cbz x8, #0x3dc45ec
0x03DC4594: a9c501f0  adrp x9, #0x767b000
0x03DC4598: 299943f9  ldr x9, [x9, #0x730]
0x03DC459C: e10300aa  mov x1, x0
0x03DC45A0: e2230091  add x2, sp, #8
0x03DC45A4: e00308aa  mov x0, x8
0x03DC45A8: 230140f9  ldr x3, [x9]
0x03DC45AC: c1804494  bl #0x4ee48b0
0x03DC45B0: e0000036  tbz w0, #0, #0x3dc45cc
0x03DC45B4: 681e40f9  ldr x8, [x19, #0x38]
0x03DC45B8: e00740f9  ldr x0, [sp, #8]
0x03DC45BC: 010d40f9  ldr x1, [x8, #0x18]
0x03DC45C0: 280040f9  ldr x8, [x1]
0x03DC45C4: 00013fd6  blr x8
0x03DC45C8: 05000014  b #0x3dc45dc
0x03DC45CC: 681e40f9  ldr x8, [x19, #0x38]
0x03DC45D0: 000540f9  ldr x0, [x8, #8]
0x03DC45D4: 080040f9  ldr x8, [x0]
0x03DC45D8: 00013fd6  blr x8
0x03DC45DC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03DC45E0: fe5741a9  ldp x30, x21, [sp, #0x10]
0x03DC45E4: ffc30091  add sp, sp, #0x30
0x03DC45E8: c0035fd6  ret
0x03DC45EC: b0f1ce97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DC46EC | ContextualizedECS.Context.TickArgs$$ContainsArgType<IntervalTick>
; native signature: bool ContextualizedECS_Context_TickArgs__ContainsArgType_IntervalTick_ (ContextualizedECS_Context_TickArgs_o* __this, const MethodInfo_3DC46EC* method);
; bytes=208 sha256=f54a1c1477420a5dbf9b4542c2e11a45d6d9405663c263005bff241b7a598760 status=arm64_complete_bound indexed_start=True
0x03DC46EC: fe0f1ef8  str x30, [sp, #-0x20]!
0x03DC46F0: f44f01a9  stp x20, x19, [sp, #0x10]
0x03DC46F4: 281c40f9  ldr x8, [x1, #0x38]
0x03DC46F8: f30300aa  mov x19, x0
0x03DC46FC: 080200b5  cbnz x8, #0x3dc473c
0x03DC4700: a0c501f0  adrp x0, #0x767b000
0x03DC4704: 009843f9  ldr x0, [x0, #0x730]
0x03DC4708: f40301aa  mov x20, x1
0x03DC470C: c3f0ce97  bl #0x3180a18
0x03DC4710: 40c501b0  adrp x0, #0x766d000
0x03DC4714: 004c45f9  ldr x0, [x0, #0xa98]
0x03DC4718: c0f0ce97  bl #0x3180a18
0x03DC471C: 40c401d0  adrp x0, #0x764e000
0x03DC4720: 00ac42f9  ldr x0, [x0, #0x558]
0x03DC4724: bdf0ce97  bl #0x3180a18
0x03DC4728: 881e40f9  ldr x8, [x20, #0x38]
0x03DC472C: 880000b5  cbnz x8, #0x3dc473c
0x03DC4730: e00314aa  mov x0, x20
0x03DC4734: 5148ce97  bl #0x3156878
0x03DC4738: 881e40f9  ldr x8, [x20, #0x38]
0x03DC473C: 49c401d0  adrp x9, #0x764e000
0x03DC4740: 29ad42f9  ldr x9, [x9, #0x558]
0x03DC4744: ff0700f9  str xzr, [sp, #8]
0x03DC4748: 140140f9  ldr x20, [x8]
0x03DC474C: 200140f9  ldr x0, [x9]
0x03DC4750: 09e040b9  ldr w9, [x0, #0xe0]
0x03DC4754: 49000035  cbnz w9, #0x3dc475c
0x03DC4758: 0df1ce97  bl #0x3180b8c
0x03DC475C: e00314aa  mov x0, x20
0x03DC4760: e1031faa  mov x1, xzr
0x03DC4764: 98826394  bl #0x56a51c4
0x03DC4768: 680a40f9  ldr x8, [x19, #0x10]
0x03DC476C: 680200b4  cbz x8, #0x3dc47b8
0x03DC4770: a9c501f0  adrp x9, #0x767b000
0x03DC4774: 299943f9  ldr x9, [x9, #0x730]
0x03DC4778: e10300aa  mov x1, x0
0x03DC477C: e2230091  add x2, sp, #8
0x03DC4780: e00308aa  mov x0, x8
0x03DC4784: 230140f9  ldr x3, [x9]
0x03DC4788: 4a804494  bl #0x4ee48b0
0x03DC478C: e0000036  tbz w0, #0, #0x3dc47a8
0x03DC4790: e80740f9  ldr x8, [sp, #8]
0x03DC4794: 280100b4  cbz x8, #0x3dc47b8
0x03DC4798: 081940b9  ldr w8, [x8, #0x18]
0x03DC479C: 1f010071  cmp w8, #0
0x03DC47A0: e0d79f1a  cset w0, gt
0x03DC47A4: 02000014  b #0x3dc47ac
0x03DC47A8: e0031f2a  mov w0, wzr
0x03DC47AC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03DC47B0: fe0742f8  ldr x30, [sp], #0x20
0x03DC47B4: c0035fd6  ret
0x03DC47B8: 3df1ce97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DC47BC | ContextualizedECS.Context.TickArgs$$ContainsArgType<object>
; native signature: bool ContextualizedECS_Context_TickArgs__ContainsArgType_object_ (ContextualizedECS_Context_TickArgs_o* __this, const MethodInfo_3DC47BC* method);
; bytes=208 sha256=08cb4ec5231240749af1e46732331f1bf69d7745476829dbdf8c114c226a0dd8 status=arm64_complete_bound indexed_start=True
0x03DC47BC: fe0f1ef8  str x30, [sp, #-0x20]!
0x03DC47C0: f44f01a9  stp x20, x19, [sp, #0x10]
0x03DC47C4: 281c40f9  ldr x8, [x1, #0x38]
0x03DC47C8: f30300aa  mov x19, x0
0x03DC47CC: 080200b5  cbnz x8, #0x3dc480c
0x03DC47D0: a0c501f0  adrp x0, #0x767b000
0x03DC47D4: 009843f9  ldr x0, [x0, #0x730]
0x03DC47D8: f40301aa  mov x20, x1
0x03DC47DC: 8ff0ce97  bl #0x3180a18
0x03DC47E0: 40c501b0  adrp x0, #0x766d000
0x03DC47E4: 004c45f9  ldr x0, [x0, #0xa98]
0x03DC47E8: 8cf0ce97  bl #0x3180a18
0x03DC47EC: 40c401d0  adrp x0, #0x764e000
0x03DC47F0: 00ac42f9  ldr x0, [x0, #0x558]
0x03DC47F4: 89f0ce97  bl #0x3180a18
0x03DC47F8: 881e40f9  ldr x8, [x20, #0x38]
0x03DC47FC: 880000b5  cbnz x8, #0x3dc480c
0x03DC4800: e00314aa  mov x0, x20
0x03DC4804: 1d48ce97  bl #0x3156878
0x03DC4808: 881e40f9  ldr x8, [x20, #0x38]
0x03DC480C: 49c401d0  adrp x9, #0x764e000
0x03DC4810: 29ad42f9  ldr x9, [x9, #0x558]
0x03DC4814: ff0700f9  str xzr, [sp, #8]
0x03DC4818: 140140f9  ldr x20, [x8]
0x03DC481C: 200140f9  ldr x0, [x9]
0x03DC4820: 09e040b9  ldr w9, [x0, #0xe0]
0x03DC4824: 49000035  cbnz w9, #0x3dc482c
0x03DC4828: d9f0ce97  bl #0x3180b8c
0x03DC482C: e00314aa  mov x0, x20
0x03DC4830: e1031faa  mov x1, xzr
0x03DC4834: 64826394  bl #0x56a51c4
0x03DC4838: 680a40f9  ldr x8, [x19, #0x10]
0x03DC483C: 680200b4  cbz x8, #0x3dc4888
0x03DC4840: a9c501f0  adrp x9, #0x767b000
0x03DC4844: 299943f9  ldr x9, [x9, #0x730]
0x03DC4848: e10300aa  mov x1, x0
0x03DC484C: e2230091  add x2, sp, #8
0x03DC4850: e00308aa  mov x0, x8
0x03DC4854: 230140f9  ldr x3, [x9]
0x03DC4858: 16804494  bl #0x4ee48b0
0x03DC485C: e0000036  tbz w0, #0, #0x3dc4878
0x03DC4860: e80740f9  ldr x8, [sp, #8]
0x03DC4864: 280100b4  cbz x8, #0x3dc4888
0x03DC4868: 081940b9  ldr w8, [x8, #0x18]
0x03DC486C: 1f010071  cmp w8, #0
0x03DC4870: e0d79f1a  cset w0, gt
0x03DC4874: 02000014  b #0x3dc487c
0x03DC4878: e0031f2a  mov w0, wzr
0x03DC487C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03DC4880: fe0742f8  ldr x30, [sp], #0x20
0x03DC4884: c0035fd6  ret
0x03DC4888: 09f1ce97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DC488C | ContextualizedECS.Context.TickArgs$$ContainsArgType<__Il2CppFullySharedGenericType>
; native signature: bool ContextualizedECS_Context_TickArgs__ContainsArgType___Il2CppFullySharedGenericType_ (ContextualizedECS_Context_TickArgs_o* __this, const MethodInfo_3DC488C* method);
; bytes=208 sha256=486f3e17bfaea0a650813256a6514e74bc674ff8b3540c25b1bfb8e6dd774d08 status=arm64_complete_bound indexed_start=True
0x03DC488C: fe0f1ef8  str x30, [sp, #-0x20]!
0x03DC4890: f44f01a9  stp x20, x19, [sp, #0x10]
0x03DC4894: 281c40f9  ldr x8, [x1, #0x38]
0x03DC4898: f30300aa  mov x19, x0
0x03DC489C: 080200b5  cbnz x8, #0x3dc48dc
0x03DC48A0: a0c501f0  adrp x0, #0x767b000
0x03DC48A4: 009843f9  ldr x0, [x0, #0x730]
0x03DC48A8: f40301aa  mov x20, x1
0x03DC48AC: 5bf0ce97  bl #0x3180a18
0x03DC48B0: 40c501b0  adrp x0, #0x766d000
0x03DC48B4: 004c45f9  ldr x0, [x0, #0xa98]
0x03DC48B8: 58f0ce97  bl #0x3180a18
0x03DC48BC: 40c401d0  adrp x0, #0x764e000
0x03DC48C0: 00ac42f9  ldr x0, [x0, #0x558]
0x03DC48C4: 55f0ce97  bl #0x3180a18
0x03DC48C8: 881e40f9  ldr x8, [x20, #0x38]
0x03DC48CC: 880000b5  cbnz x8, #0x3dc48dc
0x03DC48D0: e00314aa  mov x0, x20
0x03DC48D4: e947ce97  bl #0x3156878
0x03DC48D8: 881e40f9  ldr x8, [x20, #0x38]
0x03DC48DC: 49c401d0  adrp x9, #0x764e000
0x03DC48E0: 29ad42f9  ldr x9, [x9, #0x558]
0x03DC48E4: ff0700f9  str xzr, [sp, #8]
0x03DC48E8: 140140f9  ldr x20, [x8]
0x03DC48EC: 200140f9  ldr x0, [x9]
0x03DC48F0: 09e040b9  ldr w9, [x0, #0xe0]
0x03DC48F4: 49000035  cbnz w9, #0x3dc48fc
0x03DC48F8: a5f0ce97  bl #0x3180b8c
0x03DC48FC: e00314aa  mov x0, x20
0x03DC4900: e1031faa  mov x1, xzr
0x03DC4904: 30826394  bl #0x56a51c4
0x03DC4908: 680a40f9  ldr x8, [x19, #0x10]
0x03DC490C: 680200b4  cbz x8, #0x3dc4958
0x03DC4910: a9c501f0  adrp x9, #0x767b000
0x03DC4914: 299943f9  ldr x9, [x9, #0x730]
0x03DC4918: e10300aa  mov x1, x0
0x03DC491C: e2230091  add x2, sp, #8
0x03DC4920: e00308aa  mov x0, x8
0x03DC4924: 230140f9  ldr x3, [x9]
0x03DC4928: e27f4494  bl #0x4ee48b0
0x03DC492C: e0000036  tbz w0, #0, #0x3dc4948
0x03DC4930: e80740f9  ldr x8, [sp, #8]
0x03DC4934: 280100b4  cbz x8, #0x3dc4958
0x03DC4938: 081940b9  ldr w8, [x8, #0x18]
0x03DC493C: 1f010071  cmp w8, #0
0x03DC4940: e0d79f1a  cset w0, gt
0x03DC4944: 02000014  b #0x3dc494c
0x03DC4948: e0031f2a  mov w0, wzr
0x03DC494C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03DC4950: fe0742f8  ldr x30, [sp], #0x20
0x03DC4954: c0035fd6  ret
0x03DC4958: d5f0ce97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DC31A8 | ContextualizedECS.Context.TickArgs$$AddArgument<IntervalTick>
; native signature: ContextualizedECS_Context_TickArgs_o* ContextualizedECS_Context_TickArgs__AddArgument_IntervalTick_ (ContextualizedECS_Context_TickArgs_o* __this, Merger_MergeBoard_View_IntervalTick_o argument, const MethodInfo_3DC31A8* method);
; bytes=572 sha256=ab4174027f474600a231ad6ff21c1fb05f7cc812f4fec58a60985b722f912da9 status=arm64_complete_bound indexed_start=True
0x03DC31A8: ff4301d1  sub sp, sp, #0x50
0x03DC31AC: e80b00fd  str d8, [sp, #0x10]
0x03DC31B0: fe5f02a9  stp x30, x23, [sp, #0x20]
0x03DC31B4: f65703a9  stp x22, x21, [sp, #0x30]
0x03DC31B8: f44f04a9  stp x20, x19, [sp, #0x40]
0x03DC31BC: 281c40f9  ldr x8, [x1, #0x38]
0x03DC31C0: f40301aa  mov x20, x1
0x03DC31C4: 081ca04e  mov v8.16b, v0.16b
0x03DC31C8: f30300aa  mov x19, x0
0x03DC31CC: 080300b5  cbnz x8, #0x3dc322c
0x03DC31D0: c0c50190  adrp x0, #0x767b000
0x03DC31D4: 009843f9  ldr x0, [x0, #0x730]
0x03DC31D8: 10f6ce97  bl #0x3180a18
0x03DC31DC: c0c50190  adrp x0, #0x767b000
0x03DC31E0: 009c43f9  ldr x0, [x0, #0x738]
0x03DC31E4: 0df6ce97  bl #0x3180a18
0x03DC31E8: 60c401d0  adrp x0, #0x7651000
0x03DC31EC: 001c40f9  ldr x0, [x0, #0x38]
0x03DC31F0: 0af6ce97  bl #0x3180a18
0x03DC31F4: 60c401d0  adrp x0, #0x7651000
0x03DC31F8: 001840f9  ldr x0, [x0, #0x30]
0x03DC31FC: 07f6ce97  bl #0x3180a18
0x03DC3200: 60c401d0  adrp x0, #0x7651000
0x03DC3204: 001440f9  ldr x0, [x0, #0x28]
0x03DC3208: 04f6ce97  bl #0x3180a18
0x03DC320C: 40c401f0  adrp x0, #0x764e000
0x03DC3210: 00ac42f9  ldr x0, [x0, #0x558]
0x03DC3214: 01f6ce97  bl #0x3180a18
0x03DC3218: 881e40f9  ldr x8, [x20, #0x38]
0x03DC321C: 880000b5  cbnz x8, #0x3dc322c
0x03DC3220: e00314aa  mov x0, x20
0x03DC3224: 954dce97  bl #0x3156878
0x03DC3228: 881e40f9  ldr x8, [x20, #0x38]
0x03DC322C: 49c401f0  adrp x9, #0x764e000
0x03DC3230: 29ad42f9  ldr x9, [x9, #0x558]
0x03DC3234: ff0f00f9  str xzr, [sp, #0x18]
0x03DC3238: 150140f9  ldr x21, [x8]
0x03DC323C: 200140f9  ldr x0, [x9]
0x03DC3240: 09e040b9  ldr w9, [x0, #0xe0]
0x03DC3244: 49000035  cbnz w9, #0x3dc324c
0x03DC3248: 51f6ce97  bl #0x3180b8c
0x03DC324C: e00315aa  mov x0, x21
0x03DC3250: e1031faa  mov x1, xzr
0x03DC3254: dc876394  bl #0x56a51c4
0x03DC3258: 680a40f9  ldr x8, [x19, #0x10]
0x03DC325C: 280c00b4  cbz x8, #0x3dc33e0
0x03DC3260: c9c50190  adrp x9, #0x767b000
0x03DC3264: 299943f9  ldr x9, [x9, #0x730]
0x03DC3268: f50300aa  mov x21, x0
0x03DC326C: e2630091  add x2, sp, #0x18
0x03DC3270: e00308aa  mov x0, x8
0x03DC3274: 230140f9  ldr x3, [x9]
0x03DC3278: e10315aa  mov x1, x21
0x03DC327C: 8d854494  bl #0x4ee48b0
0x03DC3280: 60030036  tbz w0, #0, #0x3dc32ec
0x03DC3284: e80b00bd  str s8, [sp, #8]
0x03DC3288: 881e40f9  ldr x8, [x20, #0x38]
0x03DC328C: f40f40f9  ldr x20, [sp, #0x18]
0x03DC3290: e1230091  add x1, sp, #8
0x03DC3294: 000540f9  ldr x0, [x8, #8]
0x03DC3298: 3ff6ce97  bl #0x3180b94
0x03DC329C: 340a00b4  cbz x20, #0x3dc33e0
0x03DC32A0: 69c401d0  adrp x9, #0x7651000
0x03DC32A4: 291d40f9  ldr x9, [x9, #0x38]
0x03DC32A8: 8a1e40b9  ldr w10, [x20, #0x1c]
0x03DC32AC: 880a40f9  ldr x8, [x20, #0x10]
0x03DC32B0: 290140f9  ldr x9, [x9]
0x03DC32B4: 4a050011  add w10, w10, #1
0x03DC32B8: 8a1e00b9  str w10, [x20, #0x1c]
0x03DC32BC: 280900b4  cbz x8, #0x3dc33e0
0x03DC32C0: 8a1a80b9  ldrsw x10, [x20, #0x18]
0x03DC32C4: 0b1940b9  ldr w11, [x8, #0x18]
0x03DC32C8: e10300aa  mov x1, x0
0x03DC32CC: 5f010b6b  cmp w10, w11
0x03DC32D0: 42050054  b.hs #0x3dc3378
0x03DC32D4: 49050011  add w9, w10, #1
0x03DC32D8: 000d0a8b  add x0, x8, x10, lsl #3
0x03DC32DC: 891a00b9  str w9, [x20, #0x18]
0x03DC32E0: 010c02f8  str x1, [x0, #0x20]!
0x03DC32E4: b8f5ce97  bl #0x31809c4
0x03DC32E8: 37000014  b #0x3dc33c4
0x03DC32EC: 68c401d0  adrp x8, #0x7651000
0x03DC32F0: 760a40f9  ldr x22, [x19, #0x10]
0x03DC32F4: 081540f9  ldr x8, [x8, #0x28]
0x03DC32F8: 000140f9  ldr x0, [x8]
0x03DC32FC: 69f6ce97  bl #0x3180ca0
0x03DC3300: 68c401d0  adrp x8, #0x7651000
0x03DC3304: 081940f9  ldr x8, [x8, #0x30]
0x03DC3308: f70300aa  mov x23, x0
0x03DC330C: 010140f9  ldr x1, [x8]
0x03DC3310: 4a020a94  bl #0x4043c38
0x03DC3314: e80b00bd  str s8, [sp, #8]
0x03DC3318: 881e40f9  ldr x8, [x20, #0x38]
0x03DC331C: e1230091  add x1, sp, #8
0x03DC3320: 000540f9  ldr x0, [x8, #8]
0x03DC3324: 1cf6ce97  bl #0x3180b94
0x03DC3328: d70500b4  cbz x23, #0x3dc33e0
0x03DC332C: 69c401d0  adrp x9, #0x7651000
0x03DC3330: 291d40f9  ldr x9, [x9, #0x38]
0x03DC3334: ea1e40b9  ldr w10, [x23, #0x1c]
0x03DC3338: e80a40f9  ldr x8, [x23, #0x10]
0x03DC333C: 290140f9  ldr x9, [x9]
0x03DC3340: 4a050011  add w10, w10, #1
0x03DC3344: ea1e00b9  str w10, [x23, #0x1c]
0x03DC3348: c80400b4  cbz x8, #0x3dc33e0
0x03DC334C: ea1a80b9  ldrsw x10, [x23, #0x18]
0x03DC3350: 0b1940b9  ldr w11, [x8, #0x18]
0x03DC3354: e10300aa  mov x1, x0
0x03DC3358: 5f010b6b  cmp w10, w11
0x03DC335C: a2010054  b.hs #0x3dc3390
0x03DC3360: 49050011  add w9, w10, #1
0x03DC3364: 000d0a8b  add x0, x8, x10, lsl #3
0x03DC3368: e91a00b9  str w9, [x23, #0x18]
0x03DC336C: 010c02f8  str x1, [x0, #0x20]!
0x03DC3370: 95f5ce97  bl #0x31809c4
0x03DC3374: 0c000014  b #0x3dc33a4
0x03DC3378: 281140f9  ldr x8, [x9, #0x20]
0x03DC337C: e00314aa  mov x0, x20
0x03DC3380: 086140f9  ldr x8, [x8, #0xc0]
0x03DC3384: 023940f9  ldr x2, [x8, #0x70]
0x03DC3388: 39040a94  bl #0x404446c
0x03DC338C: 0e000014  b #0x3dc33c4
0x03DC3390: 281140f9  ldr x8, [x9, #0x20]
0x03DC3394: e00317aa  mov x0, x23
0x03DC3398: 086140f9  ldr x8, [x8, #0xc0]
0x03DC339C: 023940f9  ldr x2, [x8, #0x70]
0x03DC33A0: 33040a94  bl #0x404446c
0x03DC33A4: f60100b4  cbz x22, #0x3dc33e0
0x03DC33A8: c8c50190  adrp x8, #0x767b000
0x03DC33AC: 089d43f9  ldr x8, [x8, #0x738]
0x03DC33B0: e00316aa  mov x0, x22
0x03DC33B4: e10315aa  mov x1, x21
0x03DC33B8: e20317aa  mov x2, x23
0x03DC33BC: 030140f9  ldr x3, [x8]
0x03DC33C0: 6a7e4494  bl #0x4ee2d68
0x03DC33C4: e00313aa  mov x0, x19
0x03DC33C8: f44f44a9  ldp x20, x19, [sp, #0x40]
0x03DC33CC: f65743a9  ldp x22, x21, [sp, #0x30]
0x03DC33D0: fe5f42a9  ldp x30, x23, [sp, #0x20]
0x03DC33D4: e80b40fd  ldr d8, [sp, #0x10]
0x03DC33D8: ff430191  add sp, sp, #0x50
0x03DC33DC: c0035fd6  ret
0x03DC33E0: 33f6ce97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DC33E4 | ContextualizedECS.Context.TickArgs$$AddArgument<object>
; native signature: ContextualizedECS_Context_TickArgs_o* ContextualizedECS_Context_TickArgs__AddArgument_object_ (ContextualizedECS_Context_TickArgs_o* __this, Il2CppObject* argument, const MethodInfo_3DC33E4* method);
; bytes=532 sha256=a5ac7c7ee6b6d3d947f330d0df2c04e397e55a6034dc44cdb58371a581592d2c status=arm64_complete_bound indexed_start=True
0x03DC33E4: ff0301d1  sub sp, sp, #0x40
0x03DC33E8: fe5f01a9  stp x30, x23, [sp, #0x10]
0x03DC33EC: f65702a9  stp x22, x21, [sp, #0x20]
0x03DC33F0: f44f03a9  stp x20, x19, [sp, #0x30]
0x03DC33F4: 481c40f9  ldr x8, [x2, #0x38]
0x03DC33F8: f40301aa  mov x20, x1
0x03DC33FC: f30300aa  mov x19, x0
0x03DC3400: 280300b5  cbnz x8, #0x3dc3464
0x03DC3404: c0c50190  adrp x0, #0x767b000
0x03DC3408: 009843f9  ldr x0, [x0, #0x730]
0x03DC340C: f50302aa  mov x21, x2
0x03DC3410: 82f5ce97  bl #0x3180a18
0x03DC3414: c0c50190  adrp x0, #0x767b000
0x03DC3418: 009c43f9  ldr x0, [x0, #0x738]
0x03DC341C: 7ff5ce97  bl #0x3180a18
0x03DC3420: 60c401d0  adrp x0, #0x7651000
0x03DC3424: 001c40f9  ldr x0, [x0, #0x38]
0x03DC3428: 7cf5ce97  bl #0x3180a18
0x03DC342C: 60c401d0  adrp x0, #0x7651000
0x03DC3430: 001840f9  ldr x0, [x0, #0x30]
0x03DC3434: 79f5ce97  bl #0x3180a18
0x03DC3438: 60c401d0  adrp x0, #0x7651000
0x03DC343C: 001440f9  ldr x0, [x0, #0x28]
0x03DC3440: 76f5ce97  bl #0x3180a18
0x03DC3444: 40c401f0  adrp x0, #0x764e000
0x03DC3448: 00ac42f9  ldr x0, [x0, #0x558]
0x03DC344C: 73f5ce97  bl #0x3180a18
0x03DC3450: a81e40f9  ldr x8, [x21, #0x38]
0x03DC3454: 880000b5  cbnz x8, #0x3dc3464
0x03DC3458: e00315aa  mov x0, x21
0x03DC345C: 074dce97  bl #0x3156878
0x03DC3460: a81e40f9  ldr x8, [x21, #0x38]
0x03DC3464: 49c401f0  adrp x9, #0x764e000
0x03DC3468: 29ad42f9  ldr x9, [x9, #0x558]
0x03DC346C: ff0700f9  str xzr, [sp, #8]
0x03DC3470: 150140f9  ldr x21, [x8]
0x03DC3474: 200140f9  ldr x0, [x9]
0x03DC3478: 09e040b9  ldr w9, [x0, #0xe0]
0x03DC347C: 49000035  cbnz w9, #0x3dc3484
0x03DC3480: c3f5ce97  bl #0x3180b8c
0x03DC3484: e00315aa  mov x0, x21
0x03DC3488: e1031faa  mov x1, xzr
0x03DC348C: 4e876394  bl #0x56a51c4
0x03DC3490: 680a40f9  ldr x8, [x19, #0x10]
0x03DC3494: 080b00b4  cbz x8, #0x3dc35f4
0x03DC3498: c9c50190  adrp x9, #0x767b000
0x03DC349C: 299943f9  ldr x9, [x9, #0x730]
0x03DC34A0: f50300aa  mov x21, x0
0x03DC34A4: e2230091  add x2, sp, #8
0x03DC34A8: e00308aa  mov x0, x8
0x03DC34AC: 230140f9  ldr x3, [x9]
0x03DC34B0: e10315aa  mov x1, x21
0x03DC34B4: ff844494  bl #0x4ee48b0
0x03DC34B8: e0020036  tbz w0, #0, #0x3dc3514
0x03DC34BC: e00740f9  ldr x0, [sp, #8]
0x03DC34C0: a00900b4  cbz x0, #0x3dc35f4
0x03DC34C4: 69c401d0  adrp x9, #0x7651000
0x03DC34C8: 291d40f9  ldr x9, [x9, #0x38]
0x03DC34CC: 0a1c40b9  ldr w10, [x0, #0x1c]
0x03DC34D0: 080840f9  ldr x8, [x0, #0x10]
0x03DC34D4: 290140f9  ldr x9, [x9]
0x03DC34D8: 4a050011  add w10, w10, #1
0x03DC34DC: 0a1c00b9  str w10, [x0, #0x1c]
0x03DC34E0: a80800b4  cbz x8, #0x3dc35f4
0x03DC34E4: 0a1880b9  ldrsw x10, [x0, #0x18]
0x03DC34E8: 0b1940b9  ldr w11, [x8, #0x18]
0x03DC34EC: 5f010b6b  cmp w10, w11
0x03DC34F0: e2040054  b.hs #0x3dc358c
0x03DC34F4: 49050011  add w9, w10, #1
0x03DC34F8: 080d0a8b  add x8, x8, x10, lsl #3
0x03DC34FC: 091800b9  str w9, [x0, #0x18]
0x03DC3500: 140d02f8  str x20, [x8, #0x20]!
0x03DC3504: e00308aa  mov x0, x8
0x03DC3508: e10314aa  mov x1, x20
0x03DC350C: 2ef5ce97  bl #0x31809c4
0x03DC3510: 33000014  b #0x3dc35dc
0x03DC3514: 68c401d0  adrp x8, #0x7651000
0x03DC3518: 760a40f9  ldr x22, [x19, #0x10]
0x03DC351C: 081540f9  ldr x8, [x8, #0x28]
0x03DC3520: 000140f9  ldr x0, [x8]
0x03DC3524: dff5ce97  bl #0x3180ca0
0x03DC3528: 68c401d0  adrp x8, #0x7651000
0x03DC352C: 081940f9  ldr x8, [x8, #0x30]
0x03DC3530: f70300aa  mov x23, x0
0x03DC3534: 010140f9  ldr x1, [x8]
0x03DC3538: c0010a94  bl #0x4043c38
0x03DC353C: d70500b4  cbz x23, #0x3dc35f4
0x03DC3540: 69c401d0  adrp x9, #0x7651000
0x03DC3544: 291d40f9  ldr x9, [x9, #0x38]
0x03DC3548: ea1e40b9  ldr w10, [x23, #0x1c]
0x03DC354C: e80a40f9  ldr x8, [x23, #0x10]
0x03DC3550: 290140f9  ldr x9, [x9]
0x03DC3554: 4a050011  add w10, w10, #1
0x03DC3558: ea1e00b9  str w10, [x23, #0x1c]
0x03DC355C: c80400b4  cbz x8, #0x3dc35f4
0x03DC3560: ea1a80b9  ldrsw x10, [x23, #0x18]
0x03DC3564: 0b1940b9  ldr w11, [x8, #0x18]
0x03DC3568: 5f010b6b  cmp w10, w11
0x03DC356C: c2010054  b.hs #0x3dc35a4
0x03DC3570: 49050011  add w9, w10, #1
0x03DC3574: 000d0a8b  add x0, x8, x10, lsl #3
0x03DC3578: e91a00b9  str w9, [x23, #0x18]
0x03DC357C: 140c02f8  str x20, [x0, #0x20]!
0x03DC3580: e10314aa  mov x1, x20
0x03DC3584: 10f5ce97  bl #0x31809c4
0x03DC3588: 0d000014  b #0x3dc35bc
0x03DC358C: 281140f9  ldr x8, [x9, #0x20]
0x03DC3590: e10314aa  mov x1, x20
0x03DC3594: 086140f9  ldr x8, [x8, #0xc0]
0x03DC3598: 023940f9  ldr x2, [x8, #0x70]
0x03DC359C: b4030a94  bl #0x404446c
0x03DC35A0: 0f000014  b #0x3dc35dc
0x03DC35A4: 281140f9  ldr x8, [x9, #0x20]
0x03DC35A8: e00317aa  mov x0, x23
0x03DC35AC: e10314aa  mov x1, x20
0x03DC35B0: 086140f9  ldr x8, [x8, #0xc0]
0x03DC35B4: 023940f9  ldr x2, [x8, #0x70]
0x03DC35B8: ad030a94  bl #0x404446c
0x03DC35BC: d60100b4  cbz x22, #0x3dc35f4
0x03DC35C0: c8c50190  adrp x8, #0x767b000
0x03DC35C4: 089d43f9  ldr x8, [x8, #0x738]
0x03DC35C8: e00316aa  mov x0, x22
0x03DC35CC: e10315aa  mov x1, x21
0x03DC35D0: e20317aa  mov x2, x23
0x03DC35D4: 030140f9  ldr x3, [x8]
0x03DC35D8: e47d4494  bl #0x4ee2d68
0x03DC35DC: e00313aa  mov x0, x19
0x03DC35E0: f44f43a9  ldp x20, x19, [sp, #0x30]
0x03DC35E4: f65742a9  ldp x22, x21, [sp, #0x20]
0x03DC35E8: fe5f41a9  ldp x30, x23, [sp, #0x10]
0x03DC35EC: ff030191  add sp, sp, #0x40
0x03DC35F0: c0035fd6  ret
0x03DC35F4: aef5ce97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DC35F8 | ContextualizedECS.Context.TickArgs$$AddArgument<__Il2CppFullySharedGenericType>
; native signature: ContextualizedECS_Context_TickArgs_o* ContextualizedECS_Context_TickArgs__AddArgument___Il2CppFullySharedGenericType_ (ContextualizedECS_Context_TickArgs_o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o argument, const MethodInfo_3DC35F8* method);
; bytes=2616 sha256=10a500e023c3a2394af0c5e18609ca770e7d4b901b798935ad4e11802455b765 status=arm64_complete_bound indexed_start=True
0x03DC35F8: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x03DC35FC: fb0b00f9  str x27, [sp, #0x10]
0x03DC3600: fa6702a9  stp x26, x25, [sp, #0x20]
0x03DC3604: f85f03a9  stp x24, x23, [sp, #0x30]
0x03DC3608: f65704a9  stp x22, x21, [sp, #0x40]
0x03DC360C: f44f05a9  stp x20, x19, [sp, #0x50]
0x03DC3610: fd030091  mov x29, sp
0x03DC3614: ff8300d1  sub sp, sp, #0x20
0x03DC3618: 5bd03bd5  mrs x27, tpidr_el0
0x03DC361C: 681740f9  ldr x8, [x27, #0x28]
0x03DC3620: f50302aa  mov x21, x2
0x03DC3624: f40301aa  mov x20, x1
0x03DC3628: f30300aa  mov x19, x0
0x03DC362C: a8831ff8  stur x8, [x29, #-8]
0x03DC3630: a1031ff8  stur x1, [x29, #-0x10]
0x03DC3634: 481c40f9  ldr x8, [x2, #0x38]
0x03DC3638: 080300b5  cbnz x8, #0x3dc3698
0x03DC363C: c0c50190  adrp x0, #0x767b000
0x03DC3640: 009843f9  ldr x0, [x0, #0x730]
0x03DC3644: f5f4ce97  bl #0x3180a18
0x03DC3648: c0c50190  adrp x0, #0x767b000
0x03DC364C: 009c43f9  ldr x0, [x0, #0x738]
0x03DC3650: f2f4ce97  bl #0x3180a18
0x03DC3654: 60c401d0  adrp x0, #0x7651000
0x03DC3658: 001c40f9  ldr x0, [x0, #0x38]
0x03DC365C: eff4ce97  bl #0x3180a18
0x03DC3660: 60c401d0  adrp x0, #0x7651000
0x03DC3664: 001840f9  ldr x0, [x0, #0x30]
0x03DC3668: ecf4ce97  bl #0x3180a18
0x03DC366C: 60c401d0  adrp x0, #0x7651000
0x03DC3670: 001440f9  ldr x0, [x0, #0x28]
0x03DC3674: e9f4ce97  bl #0x3180a18
0x03DC3678: 40c401f0  adrp x0, #0x764e000
0x03DC367C: 00ac42f9  ldr x0, [x0, #0x558]
0x03DC3680: e6f4ce97  bl #0x3180a18
0x03DC3684: a81e40f9  ldr x8, [x21, #0x38]
0x03DC3688: 880000b5  cbnz x8, #0x3dc3698
0x03DC368C: e00315aa  mov x0, x21
0x03DC3690: 7a4cce97  bl #0x3156878
0x03DC3694: a81e40f9  ldr x8, [x21, #0x38]
0x03DC3698: 090540f9  ldr x9, [x8, #8]
0x03DC369C: 38fd40b9  ldr w24, [x9, #0xfc]
0x03DC36A0: e9030091  mov x9, sp
0x03DC36A4: 0a3f0091  add x10, x24, #0xf
0x03DC36A8: 4a717c92  and x10, x10, #0x1fffffff0
0x03DC36AC: 37010acb  sub x23, x9, x10
0x03DC36B0: ff020091  mov sp, x23
0x03DC36B4: 49c401f0  adrp x9, #0x764e000
0x03DC36B8: 29ad42f9  ldr x9, [x9, #0x558]
0x03DC36BC: bf831ef8  stur xzr, [x29, #-0x18]
0x03DC36C0: 160140f9  ldr x22, [x8]
0x03DC36C4: 200140f9  ldr x0, [x9]
0x03DC36C8: 09e040b9  ldr w9, [x0, #0xe0]
0x03DC36CC: 49000035  cbnz w9, #0x3dc36d4
0x03DC36D0: 2ff5ce97  bl #0x3180b8c
0x03DC36D4: e00316aa  mov x0, x22
0x03DC36D8: e1031faa  mov x1, xzr
0x03DC36DC: ba866394  bl #0x56a51c4
0x03DC36E0: 680a40f9  ldr x8, [x19, #0x10]
0x03DC36E4: a80e00b4  cbz x8, #0x3dc38b8
0x03DC36E8: c9c50190  adrp x9, #0x767b000
0x03DC36EC: 299943f9  ldr x9, [x9, #0x730]
0x03DC36F0: f60300aa  mov x22, x0
0x03DC36F4: a26300d1  sub x2, x29, #0x18
0x03DC36F8: e00308aa  mov x0, x8
0x03DC36FC: 230140f9  ldr x3, [x9]
0x03DC3700: e10316aa  mov x1, x22
0x03DC3704: 6b844494  bl #0x4ee48b0
0x03DC3708: 40040036  tbz w0, #0, #0x3dc3790
0x03DC370C: b61e40f9  ldr x22, [x21, #0x38]
0x03DC3710: b5835ef8  ldur x21, [x29, #-0x18]
0x03DC3714: e00317aa  mov x0, x23
0x03DC3718: e20318aa  mov x2, x24
0x03DC371C: c80640f9  ldr x8, [x22, #8]
0x03DC3720: 082940b9  ldr w8, [x8, #0x28]
0x03DC3724: 1f010071  cmp w8, #0
0x03DC3728: a84300d1  sub x8, x29, #0x10
0x03DC372C: 81b2889a  csel x1, x20, x8, lt
0x03DC3730: 902cd094  bl #0x71ce970
0x03DC3734: c00640f9  ldr x0, [x22, #8]
0x03DC3738: e10317aa  mov x1, x23
0x03DC373C: 16f5ce97  bl #0x3180b94
0x03DC3740: d50b00b4  cbz x21, #0x3dc38b8
0x03DC3744: 69c401d0  adrp x9, #0x7651000
0x03DC3748: 291d40f9  ldr x9, [x9, #0x38]
0x03DC374C: aa1e40b9  ldr w10, [x21, #0x1c]
0x03DC3750: a80a40f9  ldr x8, [x21, #0x10]
0x03DC3754: 290140f9  ldr x9, [x9]
0x03DC3758: 4a050011  add w10, w10, #1
0x03DC375C: aa1e00b9  str w10, [x21, #0x1c]
0x03DC3760: c80a00b4  cbz x8, #0x3dc38b8
0x03DC3764: aa1a80b9  ldrsw x10, [x21, #0x18]
0x03DC3768: 0b1940b9  ldr w11, [x8, #0x18]
0x03DC376C: e10300aa  mov x1, x0
0x03DC3770: 5f010b6b  cmp w10, w11
0x03DC3774: 22060054  b.hs #0x3dc3838
0x03DC3778: 49050011  add w9, w10, #1
0x03DC377C: 000d0a8b  add x0, x8, x10, lsl #3
0x03DC3780: a91a00b9  str w9, [x21, #0x18]
0x03DC3784: 010c02f8  str x1, [x0, #0x20]!
0x03DC3788: 8ff4ce97  bl #0x31809c4
0x03DC378C: 3e000014  b #0x3dc3884
0x03DC3790: 68c401d0  adrp x8, #0x7651000
0x03DC3794: 790a40f9  ldr x25, [x19, #0x10]
0x03DC3798: 081540f9  ldr x8, [x8, #0x28]
0x03DC379C: 000140f9  ldr x0, [x8]
0x03DC37A0: 40f5ce97  bl #0x3180ca0
0x03DC37A4: 68c401d0  adrp x8, #0x7651000
0x03DC37A8: 081940f9  ldr x8, [x8, #0x30]
0x03DC37AC: fa0300aa  mov x26, x0
0x03DC37B0: 010140f9  ldr x1, [x8]
0x03DC37B4: 21010a94  bl #0x4043c38
0x03DC37B8: b51e40f9  ldr x21, [x21, #0x38]
0x03DC37BC: e00317aa  mov x0, x23
0x03DC37C0: e20318aa  mov x2, x24
0x03DC37C4: a80640f9  ldr x8, [x21, #8]
0x03DC37C8: 082940b9  ldr w8, [x8, #0x28]
0x03DC37CC: 1f010071  cmp w8, #0
0x03DC37D0: a84300d1  sub x8, x29, #0x10
0x03DC37D4: 81b2889a  csel x1, x20, x8, lt
0x03DC37D8: 662cd094  bl #0x71ce970
0x03DC37DC: a00640f9  ldr x0, [x21, #8]
0x03DC37E0: e10317aa  mov x1, x23
0x03DC37E4: ecf4ce97  bl #0x3180b94
0x03DC37E8: 9a0600b4  cbz x26, #0x3dc38b8
0x03DC37EC: 69c401d0  adrp x9, #0x7651000
0x03DC37F0: 291d40f9  ldr x9, [x9, #0x38]
0x03DC37F4: 4a1f40b9  ldr w10, [x26, #0x1c]
0x03DC37F8: 480b40f9  ldr x8, [x26, #0x10]
0x03DC37FC: 290140f9  ldr x9, [x9]
0x03DC3800: 4a050011  add w10, w10, #1
0x03DC3804: 4a1f00b9  str w10, [x26, #0x1c]
0x03DC3808: 880500b4  cbz x8, #0x3dc38b8
0x03DC380C: 4a1b80b9  ldrsw x10, [x26, #0x18]
0x03DC3810: 0b1940b9  ldr w11, [x8, #0x18]
0x03DC3814: e10300aa  mov x1, x0
0x03DC3818: 5f010b6b  cmp w10, w11
0x03DC381C: a2010054  b.hs #0x3dc3850
0x03DC3820: 49050011  add w9, w10, #1
0x03DC3824: 000d0a8b  add x0, x8, x10, lsl #3
0x03DC3828: 491b00b9  str w9, [x26, #0x18]
0x03DC382C: 010c02f8  str x1, [x0, #0x20]!
0x03DC3830: 65f4ce97  bl #0x31809c4
0x03DC3834: 0c000014  b #0x3dc3864
0x03DC3838: 281140f9  ldr x8, [x9, #0x20]
0x03DC383C: e00315aa  mov x0, x21
0x03DC3840: 086140f9  ldr x8, [x8, #0xc0]
0x03DC3844: 023940f9  ldr x2, [x8, #0x70]
0x03DC3848: 09030a94  bl #0x404446c
0x03DC384C: 0e000014  b #0x3dc3884
0x03DC3850: 281140f9  ldr x8, [x9, #0x20]
0x03DC3854: e0031aaa  mov x0, x26
0x03DC3858: 086140f9  ldr x8, [x8, #0xc0]
0x03DC385C: 023940f9  ldr x2, [x8, #0x70]
0x03DC3860: 03030a94  bl #0x404446c
0x03DC3864: b90200b4  cbz x25, #0x3dc38b8
0x03DC3868: c8c50190  adrp x8, #0x767b000
0x03DC386C: 089d43f9  ldr x8, [x8, #0x738]
0x03DC3870: e00319aa  mov x0, x25
0x03DC3874: e10316aa  mov x1, x22
0x03DC3878: e2031aaa  mov x2, x26
0x03DC387C: 030140f9  ldr x3, [x8]
0x03DC3880: 3a7d4494  bl #0x4ee2d68
0x03DC3884: 681740f9  ldr x8, [x27, #0x28]
0x03DC3888: a9835ff8  ldur x9, [x29, #-8]
0x03DC388C: 1f0109eb  cmp x8, x9
0x03DC3890: 61010054  b.ne #0x3dc38bc
0x03DC3894: e00313aa  mov x0, x19
0x03DC3898: bf030091  mov sp, x29
0x03DC389C: f44f45a9  ldp x20, x19, [sp, #0x50]
0x03DC38A0: f65744a9  ldp x22, x21, [sp, #0x40]
0x03DC38A4: f85f43a9  ldp x24, x23, [sp, #0x30]
0x03DC38A8: fa6742a9  ldp x26, x25, [sp, #0x20]
0x03DC38AC: fb0b40f9  ldr x27, [sp, #0x10]
0x03DC38B0: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x03DC38B4: c0035fd6  ret
0x03DC38B8: fdf4ce97  bl #0x3180cac
0x03DC38BC: 352cd094  bl #0x71ce990
0x03DC38C0: fe0f1df8  str x30, [sp, #-0x30]!
0x03DC38C4: f65701a9  stp x22, x21, [sp, #0x10]
0x03DC38C8: f44f02a9  stp x20, x19, [sp, #0x20]
0x03DC38CC: ff0700f9  str xzr, [sp, #8]
0x03DC38D0: 481040f9  ldr x8, [x2, #0x20]
0x03DC38D4: f50302aa  mov x21, x2
0x03DC38D8: f30301aa  mov x19, x1
0x03DC38DC: f40300aa  mov x20, x0
0x03DC38E0: 09d54439  ldrb w9, [x8, #0x135]
0x03DC38E4: 89000037  tbnz w9, #0, #0x3dc38f4
0x03DC38E8: e00308aa  mov x0, x8
0x03DC38EC: cc4bce97  bl #0x315681c
0x03DC38F0: e80300aa  mov x8, x0
0x03DC38F4: 086140f9  ldr x8, [x8, #0xc0]
0x03DC38F8: 000940f9  ldr x0, [x8, #0x10]
0x03DC38FC: 08d44439  ldrb w8, [x0, #0x135]
0x03DC3900: 48000037  tbnz w8, #0, #0x3dc3908
0x03DC3904: c64bce97  bl #0x315681c
0x03DC3908: 08e040b9  ldr w8, [x0, #0xe0]
0x03DC390C: 48000035  cbnz w8, #0x3dc3914
0x03DC3910: 9ff4ce97  bl #0x3180b8c
0x03DC3914: a01240f9  ldr x0, [x21, #0x20]
0x03DC3918: 08d44439  ldrb w8, [x0, #0x135]
0x03DC391C: 48000037  tbnz w8, #0, #0x3dc3924
0x03DC3920: bf4bce97  bl #0x315681c
0x03DC3924: 086040f9  ldr x8, [x0, #0xc0]
0x03DC3928: 000940f9  ldr x0, [x8, #0x10]
0x03DC392C: 08d44439  ldrb w8, [x0, #0x135]
0x03DC3930: 48000037  tbnz w8, #0, #0x3dc3938
0x03DC3934: ba4bce97  bl #0x315681c
0x03DC3938: 085c40f9  ldr x8, [x0, #0xb8]
0x03DC393C: 160140f9  ldr x22, [x8]
0x03DC3940: 760600b4  cbz x22, #0x3dc3a0c
0x03DC3944: a01240f9  ldr x0, [x21, #0x20]
0x03DC3948: 08d44439  ldrb w8, [x0, #0x135]
0x03DC394C: 48000037  tbnz w8, #0, #0x3dc3954
0x03DC3950: b34bce97  bl #0x315681c
0x03DC3954: 086040f9  ldr x8, [x0, #0xc0]
0x03DC3958: e1230091  add x1, sp, #8
0x03DC395C: e00316aa  mov x0, x22
0x03DC3960: 020d40f9  ldr x2, [x8, #0x18]
0x03DC3964: 08f73e94  bl #0x4d81584
0x03DC3968: 20010036  tbz w0, #0, #0x3dc398c
0x03DC396C: e00740f9  ldr x0, [sp, #8]
0x03DC3970: e00400b4  cbz x0, #0x3dc3a0c
0x03DC3974: 140c01f8  str x20, [x0, #0x10]!
0x03DC3978: e1031faa  mov x1, xzr
0x03DC397C: 130400f9  str x19, [x0, #8]
0x03DC3980: 11f4ce97  bl #0x31809c4
0x03DC3984: f50740f9  ldr x21, [sp, #8]
0x03DC3988: 1c000014  b #0x3dc39f8
0x03DC398C: a01240f9  ldr x0, [x21, #0x20]
0x03DC3990: 08d44439  ldrb w8, [x0, #0x135]
0x03DC3994: 48000037  tbnz w8, #0, #0x3dc399c
0x03DC3998: a14bce97  bl #0x315681c
0x03DC399C: 086040f9  ldr x8, [x0, #0xc0]
0x03DC39A0: 001940f9  ldr x0, [x8, #0x30]
0x03DC39A4: 08d44439  ldrb w8, [x0, #0x135]
0x03DC39A8: 48000037  tbnz w8, #0, #0x3dc39b0
0x03DC39AC: 9c4bce97  bl #0x315681c
0x03DC39B0: bcf4ce97  bl #0x3180ca0
0x03DC39B4: a81240f9  ldr x8, [x21, #0x20]
0x03DC39B8: f50300aa  mov x21, x0
0x03DC39BC: 09d54439  ldrb w9, [x8, #0x135]
0x03DC39C0: 89000037  tbnz w9, #0, #0x3dc39d0
0x03DC39C4: e00308aa  mov x0, x8
0x03DC39C8: 954bce97  bl #0x315681c
0x03DC39CC: e80300aa  mov x8, x0
0x03DC39D0: 086140f9  ldr x8, [x8, #0xc0]
0x03DC39D4: e00315aa  mov x0, x21
0x03DC39D8: 011d40f9  ldr x1, [x8, #0x38]
0x03DC39DC: 59061e94  bl #0x4545340
0x03DC39E0: 750100b4  cbz x21, #0x3dc3a0c
0x03DC39E4: e00315aa  mov x0, x21
0x03DC39E8: 140c01f8  str x20, [x0, #0x10]!
0x03DC39EC: e1031faa  mov x1, xzr
0x03DC39F0: b30e00f9  str x19, [x21, #0x18]
0x03DC39F4: f4f3ce97  bl #0x31809c4
0x03DC39F8: e00315aa  mov x0, x21
0x03DC39FC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03DC3A00: f65741a9  ldp x22, x21, [sp, #0x10]
0x03DC3A04: fe0743f8  ldr x30, [sp], #0x30
0x03DC3A08: c0035fd6  ret
0x03DC3A0C: a8f4ce97  bl #0x3180cac
0x03DC3A10: ff0301d1  sub sp, sp, #0x40
0x03DC3A14: fe5f01a9  stp x30, x23, [sp, #0x10]
0x03DC3A18: f65702a9  stp x22, x21, [sp, #0x20]
0x03DC3A1C: f44f03a9  stp x20, x19, [sp, #0x30]
0x03DC3A20: ff0700f9  str xzr, [sp, #8]
0x03DC3A24: 681040f9  ldr x8, [x3, #0x20]
0x03DC3A28: f60303aa  mov x22, x3
0x03DC3A2C: f30302aa  mov x19, x2
0x03DC3A30: f40301aa  mov x20, x1
0x03DC3A34: 09d54439  ldrb w9, [x8, #0x135]
0x03DC3A38: f50300aa  mov x21, x0
0x03DC3A3C: 89000037  tbnz w9, #0, #0x3dc3a4c
0x03DC3A40: e00308aa  mov x0, x8
0x03DC3A44: 764bce97  bl #0x315681c
0x03DC3A48: e80300aa  mov x8, x0
0x03DC3A4C: 086140f9  ldr x8, [x8, #0xc0]
0x03DC3A50: 000940f9  ldr x0, [x8, #0x10]
0x03DC3A54: 08d44439  ldrb w8, [x0, #0x135]
0x03DC3A58: 48000037  tbnz w8, #0, #0x3dc3a60
0x03DC3A5C: 704bce97  bl #0x315681c
0x03DC3A60: 08e040b9  ldr w8, [x0, #0xe0]
0x03DC3A64: 48000035  cbnz w8, #0x3dc3a6c
0x03DC3A68: 49f4ce97  bl #0x3180b8c
0x03DC3A6C: c01240f9  ldr x0, [x22, #0x20]
0x03DC3A70: 08d44439  ldrb w8, [x0, #0x135]
0x03DC3A74: 48000037  tbnz w8, #0, #0x3dc3a7c
0x03DC3A78: 694bce97  bl #0x315681c
0x03DC3A7C: 086040f9  ldr x8, [x0, #0xc0]
0x03DC3A80: 000940f9  ldr x0, [x8, #0x10]
0x03DC3A84: 08d44439  ldrb w8, [x0, #0x135]
0x03DC3A88: 48000037  tbnz w8, #0, #0x3dc3a90
0x03DC3A8C: 644bce97  bl #0x315681c
0x03DC3A90: 085c40f9  ldr x8, [x0, #0xb8]
0x03DC3A94: 170140f9  ldr x23, [x8]
0x03DC3A98: b70700b4  cbz x23, #0x3dc3b8c
0x03DC3A9C: c01240f9  ldr x0, [x22, #0x20]
0x03DC3AA0: 08d44439  ldrb w8, [x0, #0x135]
0x03DC3AA4: 48000037  tbnz w8, #0, #0x3dc3aac
0x03DC3AA8: 5d4bce97  bl #0x315681c
0x03DC3AAC: 086040f9  ldr x8, [x0, #0xc0]
0x03DC3AB0: e1230091  add x1, sp, #8
0x03DC3AB4: e00317aa  mov x0, x23
0x03DC3AB8: 020d40f9  ldr x2, [x8, #0x18]
0x03DC3ABC: b2f63e94  bl #0x4d81584
0x03DC3AC0: c0010036  tbz w0, #0, #0x3dc3af8
0x03DC3AC4: e00740f9  ldr x0, [sp, #8]
0x03DC3AC8: 200600b4  cbz x0, #0x3dc3b8c
0x03DC3ACC: 150c01f8  str x21, [x0, #0x10]!
0x03DC3AD0: e10315aa  mov x1, x21
0x03DC3AD4: bcf3ce97  bl #0x31809c4
0x03DC3AD8: e00740f9  ldr x0, [sp, #8]
0x03DC3ADC: 800500b4  cbz x0, #0x3dc3b8c
0x03DC3AE0: 148c01f8  str x20, [x0, #0x18]!
0x03DC3AE4: e1031faa  mov x1, xzr
0x03DC3AE8: 130400f9  str x19, [x0, #8]
0x03DC3AEC: b6f3ce97  bl #0x31809c4
0x03DC3AF0: f60740f9  ldr x22, [sp, #8]
0x03DC3AF4: 20000014  b #0x3dc3b74
0x03DC3AF8: c01240f9  ldr x0, [x22, #0x20]
0x03DC3AFC: 08d44439  ldrb w8, [x0, #0x135]
0x03DC3B00: 48000037  tbnz w8, #0, #0x3dc3b08
0x03DC3B04: 464bce97  bl #0x315681c
0x03DC3B08: 086040f9  ldr x8, [x0, #0xc0]
0x03DC3B0C: 001940f9  ldr x0, [x8, #0x30]
0x03DC3B10: 08d44439  ldrb w8, [x0, #0x135]
0x03DC3B14: 48000037  tbnz w8, #0, #0x3dc3b1c
0x03DC3B18: 414bce97  bl #0x315681c
0x03DC3B1C: 61f4ce97  bl #0x3180ca0
0x03DC3B20: c81240f9  ldr x8, [x22, #0x20]
0x03DC3B24: f60300aa  mov x22, x0
0x03DC3B28: 09d54439  ldrb w9, [x8, #0x135]
0x03DC3B2C: 89000037  tbnz w9, #0, #0x3dc3b3c
0x03DC3B30: e00308aa  mov x0, x8
0x03DC3B34: 3a4bce97  bl #0x315681c
0x03DC3B38: e80300aa  mov x8, x0
0x03DC3B3C: 086140f9  ldr x8, [x8, #0xc0]
0x03DC3B40: e00316aa  mov x0, x22
0x03DC3B44: 012140f9  ldr x1, [x8, #0x40]
0x03DC3B48: 27061e94  bl #0x45453e4
0x03DC3B4C: 160200b4  cbz x22, #0x3dc3b8c
0x03DC3B50: e00316aa  mov x0, x22
0x03DC3B54: 150c01f8  str x21, [x0, #0x10]!
0x03DC3B58: e10315aa  mov x1, x21
0x03DC3B5C: 9af3ce97  bl #0x31809c4
0x03DC3B60: e00316aa  mov x0, x22
0x03DC3B64: 148c01f8  str x20, [x0, #0x18]!
0x03DC3B68: e1031faa  mov x1, xzr
0x03DC3B6C: d31200f9  str x19, [x22, #0x20]
0x03DC3B70: 95f3ce97  bl #0x31809c4
0x03DC3B74: e00316aa  mov x0, x22
0x03DC3B78: f44f43a9  ldp x20, x19, [sp, #0x30]
0x03DC3B7C: f65742a9  ldp x22, x21, [sp, #0x20]
0x03DC3B80: fe5f41a9  ldp x30, x23, [sp, #0x10]
0x03DC3B84: ff030191  add sp, sp, #0x40
0x03DC3B88: c0035fd6  ret
0x03DC3B8C: 48f4ce97  bl #0x3180cac
0x03DC3B90: ff0301d1  sub sp, sp, #0x40
0x03DC3B94: fe5f01a9  stp x30, x23, [sp, #0x10]
0x03DC3B98: f65702a9  stp x22, x21, [sp, #0x20]
0x03DC3B9C: f44f03a9  stp x20, x19, [sp, #0x30]
0x03DC3BA0: ff0700f9  str xzr, [sp, #8]
0x03DC3BA4: 681040f9  ldr x8, [x3, #0x20]
0x03DC3BA8: f60303aa  mov x22, x3
0x03DC3BAC: f30302aa  mov x19, x2
0x03DC3BB0: f40301aa  mov x20, x1
0x03DC3BB4: 09d54439  ldrb w9, [x8, #0x135]
0x03DC3BB8: f50300aa  mov x21, x0
0x03DC3BBC: 89000037  tbnz w9, #0, #0x3dc3bcc
0x03DC3BC0: e00308aa  mov x0, x8
0x03DC3BC4: 164bce97  bl #0x315681c
0x03DC3BC8: e80300aa  mov x8, x0
0x03DC3BCC: 086140f9  ldr x8, [x8, #0xc0]
0x03DC3BD0: 000940f9  ldr x0, [x8, #0x10]
0x03DC3BD4: 08d44439  ldrb w8, [x0, #0x135]
0x03DC3BD8: 48000037  tbnz w8, #0, #0x3dc3be0
0x03DC3BDC: 104bce97  bl #0x315681c
0x03DC3BE0: 08e040b9  ldr w8, [x0, #0xe0]
0x03DC3BE4: 48000035  cbnz w8, #0x3dc3bec
0x03DC3BE8: e9f3ce97  bl #0x3180b8c
0x03DC3BEC: c01240f9  ldr x0, [x22, #0x20]
0x03DC3BF0: 08d44439  ldrb w8, [x0, #0x135]
0x03DC3BF4: 48000037  tbnz w8, #0, #0x3dc3bfc
0x03DC3BF8: 094bce97  bl #0x315681c
0x03DC3BFC: 086040f9  ldr x8, [x0, #0xc0]
0x03DC3C00: 000940f9  ldr x0, [x8, #0x10]
0x03DC3C04: 08d44439  ldrb w8, [x0, #0x135]
0x03DC3C08: 48000037  tbnz w8, #0, #0x3dc3c10
0x03DC3C0C: 044bce97  bl #0x315681c
0x03DC3C10: 085c40f9  ldr x8, [x0, #0xb8]
0x03DC3C14: 170140f9  ldr x23, [x8]
0x03DC3C18: b70700b4  cbz x23, #0x3dc3d0c
0x03DC3C1C: c01240f9  ldr x0, [x22, #0x20]
0x03DC3C20: 08d44439  ldrb w8, [x0, #0x135]
0x03DC3C24: 48000037  tbnz w8, #0, #0x3dc3c2c
0x03DC3C28: fd4ace97  bl #0x315681c
0x03DC3C2C: 086040f9  ldr x8, [x0, #0xc0]
0x03DC3C30: e1230091  add x1, sp, #8
0x03DC3C34: e00317aa  mov x0, x23
0x03DC3C38: 020d40f9  ldr x2, [x8, #0x18]
0x03DC3C3C: 52f63e94  bl #0x4d81584
0x03DC3C40: c0010036  tbz w0, #0, #0x3dc3c78
0x03DC3C44: e00740f9  ldr x0, [sp, #8]
0x03DC3C48: 200600b4  cbz x0, #0x3dc3d0c
0x03DC3C4C: 150c01f8  str x21, [x0, #0x10]!
0x03DC3C50: e10315aa  mov x1, x21
0x03DC3C54: 5cf3ce97  bl #0x31809c4
0x03DC3C58: e00740f9  ldr x0, [sp, #8]
0x03DC3C5C: 800500b4  cbz x0, #0x3dc3d0c
0x03DC3C60: 148c01f8  str x20, [x0, #0x18]!
0x03DC3C64: e1031faa  mov x1, xzr
0x03DC3C68: 130400f9  str x19, [x0, #8]
0x03DC3C6C: 56f3ce97  bl #0x31809c4
0x03DC3C70: f60740f9  ldr x22, [sp, #8]
0x03DC3C74: 20000014  b #0x3dc3cf4
0x03DC3C78: c01240f9  ldr x0, [x22, #0x20]
0x03DC3C7C: 08d44439  ldrb w8, [x0, #0x135]
0x03DC3C80: 48000037  tbnz w8, #0, #0x3dc3c88
0x03DC3C84: e64ace97  bl #0x315681c
0x03DC3C88: 086040f9  ldr x8, [x0, #0xc0]
0x03DC3C8C: 001940f9  ldr x0, [x8, #0x30]
0x03DC3C90: 08d44439  ldrb w8, [x0, #0x135]
0x03DC3C94: 48000037  tbnz w8, #0, #0x3dc3c9c
0x03DC3C98: e14ace97  bl #0x315681c
0x03DC3C9C: 01f4ce97  bl #0x3180ca0
0x03DC3CA0: c81240f9  ldr x8, [x22, #0x20]
0x03DC3CA4: f60300aa  mov x22, x0
0x03DC3CA8: 09d54439  ldrb w9, [x8, #0x135]
0x03DC3CAC: 89000037  tbnz w9, #0, #0x3dc3cbc
0x03DC3CB0: e00308aa  mov x0, x8
0x03DC3CB4: da4ace97  bl #0x315681c
0x03DC3CB8: e80300aa  mov x8, x0
0x03DC3CBC: 086140f9  ldr x8, [x8, #0xc0]
0x03DC3CC0: e00316aa  mov x0, x22
0x03DC3CC4: 012140f9  ldr x1, [x8, #0x40]
0x03DC3CC8: f0051e94  bl #0x4545488
0x03DC3CCC: 160200b4  cbz x22, #0x3dc3d0c
0x03DC3CD0: e00316aa  mov x0, x22
0x03DC3CD4: 150c01f8  str x21, [x0, #0x10]!
0x03DC3CD8: e10315aa  mov x1, x21
0x03DC3CDC: 3af3ce97  bl #0x31809c4
0x03DC3CE0: e00316aa  mov x0, x22
0x03DC3CE4: 148c01f8  str x20, [x0, #0x18]!
0x03DC3CE8: e1031faa  mov x1, xzr
0x03DC3CEC: d31200f9  str x19, [x22, #0x20]
0x03DC3CF0: 35f3ce97  bl #0x31809c4
0x03DC3CF4: e00316aa  mov x0, x22
0x03DC3CF8: f44f43a9  ldp x20, x19, [sp, #0x30]
0x03DC3CFC: f65742a9  ldp x22, x21, [sp, #0x20]
0x03DC3D00: fe5f41a9  ldp x30, x23, [sp, #0x10]
0x03DC3D04: ff030191  add sp, sp, #0x40
0x03DC3D08: c0035fd6  ret
0x03DC3D0C: e8f3ce97  bl #0x3180cac
0x03DC3D10: fe0f1cf8  str x30, [sp, #-0x40]!
0x03DC3D14: f85f01a9  stp x24, x23, [sp, #0x10]
0x03DC3D18: f65702a9  stp x22, x21, [sp, #0x20]
0x03DC3D1C: f44f03a9  stp x20, x19, [sp, #0x30]
0x03DC3D20: ff0700f9  str xzr, [sp, #8]
0x03DC3D24: 881040f9  ldr x8, [x4, #0x20]
0x03DC3D28: f70304aa  mov x23, x4
0x03DC3D2C: f303032a  mov w19, w3
0x03DC3D30: f40302aa  mov x20, x2
0x03DC3D34: 09d54439  ldrb w9, [x8, #0x135]
0x03DC3D38: f50301aa  mov x21, x1
0x03DC3D3C: f60300aa  mov x22, x0
0x03DC3D40: 89000037  tbnz w9, #0, #0x3dc3d50
0x03DC3D44: e00308aa  mov x0, x8
0x03DC3D48: b54ace97  bl #0x315681c
0x03DC3D4C: e80300aa  mov x8, x0
0x03DC3D50: 086140f9  ldr x8, [x8, #0xc0]
0x03DC3D54: 000940f9  ldr x0, [x8, #0x10]
0x03DC3D58: 08d44439  ldrb w8, [x0, #0x135]
0x03DC3D5C: 48000037  tbnz w8, #0, #0x3dc3d64
0x03DC3D60: af4ace97  bl #0x315681c
0x03DC3D64: 08e040b9  ldr w8, [x0, #0xe0]
0x03DC3D68: 48000035  cbnz w8, #0x3dc3d70
0x03DC3D6C: 88f3ce97  bl #0x3180b8c
0x03DC3D70: e01240f9  ldr x0, [x23, #0x20]
0x03DC3D74: 08d44439  ldrb w8, [x0, #0x135]
0x03DC3D78: 48000037  tbnz w8, #0, #0x3dc3d80
0x03DC3D7C: a84ace97  bl #0x315681c
0x03DC3D80: 086040f9  ldr x8, [x0, #0xc0]
0x03DC3D84: 000940f9  ldr x0, [x8, #0x10]
0x03DC3D88: 08d44439  ldrb w8, [x0, #0x135]
0x03DC3D8C: 48000037  tbnz w8, #0, #0x3dc3d94
0x03DC3D90: a34ace97  bl #0x315681c
0x03DC3D94: 085c40f9  ldr x8, [x0, #0xb8]
0x03DC3D98: 180140f9  ldr x24, [x8]
0x03DC3D9C: 180800b4  cbz x24, #0x3dc3e9c
0x03DC3DA0: e01240f9  ldr x0, [x23, #0x20]
0x03DC3DA4: 08d44439  ldrb w8, [x0, #0x135]
0x03DC3DA8: 48000037  tbnz w8, #0, #0x3dc3db0
0x03DC3DAC: 9c4ace97  bl #0x315681c
0x03DC3DB0: 086040f9  ldr x8, [x0, #0xc0]
0x03DC3DB4: e1230091  add x1, sp, #8
0x03DC3DB8: e00318aa  mov x0, x24
0x03DC3DBC: 020d40f9  ldr x2, [x8, #0x18]
0x03DC3DC0: f1f53e94  bl #0x4d81584
0x03DC3DC4: e0010036  tbz w0, #0, #0x3dc3e00
0x03DC3DC8: e00740f9  ldr x0, [sp, #8]
0x03DC3DCC: 800600b4  cbz x0, #0x3dc3e9c
0x03DC3DD0: 160c01f8  str x22, [x0, #0x10]!
0x03DC3DD4: e10316aa  mov x1, x22
0x03DC3DD8: fbf2ce97  bl #0x31809c4
0x03DC3DDC: e00740f9  ldr x0, [sp, #8]
0x03DC3DE0: e00500b4  cbz x0, #0x3dc3e9c
0x03DC3DE4: 158c01f8  str x21, [x0, #0x18]!
0x03DC3DE8: e1031faa  mov x1, xzr
0x03DC3DEC: 140400f9  str x20, [x0, #8]
0x03DC3DF0: f5f2ce97  bl #0x31809c4
0x03DC3DF4: f70740f9  ldr x23, [sp, #8]
0x03DC3DF8: 370400b5  cbnz x23, #0x3dc3e7c
0x03DC3DFC: 28000014  b #0x3dc3e9c
0x03DC3E00: e01240f9  ldr x0, [x23, #0x20]
0x03DC3E04: 08d44439  ldrb w8, [x0, #0x135]
0x03DC3E08: 48000037  tbnz w8, #0, #0x3dc3e10
0x03DC3E0C: 844ace97  bl #0x315681c
0x03DC3E10: 086040f9  ldr x8, [x0, #0xc0]
0x03DC3E14: 001940f9  ldr x0, [x8, #0x30]
0x03DC3E18: 08d44439  ldrb w8, [x0, #0x135]
0x03DC3E1C: 48000037  tbnz w8, #0, #0x3dc3e24
0x03DC3E20: 7f4ace97  bl #0x315681c
0x03DC3E24: 9ff3ce97  bl #0x3180ca0
0x03DC3E28: e81240f9  ldr x8, [x23, #0x20]
0x03DC3E2C: f70300aa  mov x23, x0
0x03DC3E30: 09d54439  ldrb w9, [x8, #0x135]
0x03DC3E34: 89000037  tbnz w9, #0, #0x3dc3e44
0x03DC3E38: e00308aa  mov x0, x8
0x03DC3E3C: 784ace97  bl #0x315681c
0x03DC3E40: e80300aa  mov x8, x0
0x03DC3E44: 086140f9  ldr x8, [x8, #0xc0]
0x03DC3E48: e00317aa  mov x0, x23
0x03DC3E4C: 012540f9  ldr x1, [x8, #0x48]
0x03DC3E50: 2d061e94  bl #0x4545704
0x03DC3E54: 570200b4  cbz x23, #0x3dc3e9c
0x03DC3E58: e00317aa  mov x0, x23
0x03DC3E5C: 160c01f8  str x22, [x0, #0x10]!
0x03DC3E60: e10316aa  mov x1, x22
0x03DC3E64: d8f2ce97  bl #0x31809c4
0x03DC3E68: e00317aa  mov x0, x23
0x03DC3E6C: 158c01f8  str x21, [x0, #0x18]!
0x03DC3E70: e1031faa  mov x1, xzr
0x03DC3E74: f41200f9  str x20, [x23, #0x20]
0x03DC3E78: d3f2ce97  bl #0x31809c4
0x03DC3E7C: e8a20091  add x8, x23, #0x28
0x03DC3E80: 130100b9  str w19, [x8]
0x03DC3E84: e00317aa  mov x0, x23
0x03DC3E88: f44f43a9  ldp x20, x19, [sp, #0x30]
0x03DC3E8C: f65742a9  ldp x22, x21, [sp, #0x20]
0x03DC3E90: f85f41a9  ldp x24, x23, [sp, #0x10]
0x03DC3E94: fe0744f8  ldr x30, [sp], #0x40
0x03DC3E98: c0035fd6  ret
0x03DC3E9C: 84f3ce97  bl #0x3180cac
0x03DC3EA0: fe0f1cf8  str x30, [sp, #-0x40]!
0x03DC3EA4: f85f01a9  stp x24, x23, [sp, #0x10]
0x03DC3EA8: f65702a9  stp x22, x21, [sp, #0x20]
0x03DC3EAC: f44f03a9  stp x20, x19, [sp, #0x30]
0x03DC3EB0: ff0700f9  str xzr, [sp, #8]
0x03DC3EB4: 881040f9  ldr x8, [x4, #0x20]
0x03DC3EB8: f70304aa  mov x23, x4
0x03DC3EBC: f303032a  mov w19, w3
0x03DC3EC0: f40302aa  mov x20, x2
0x03DC3EC4: 09d54439  ldrb w9, [x8, #0x135]
0x03DC3EC8: f50301aa  mov x21, x1
0x03DC3ECC: f60300aa  mov x22, x0
0x03DC3ED0: 89000037  tbnz w9, #0, #0x3dc3ee0
0x03DC3ED4: e00308aa  mov x0, x8
0x03DC3ED8: 514ace97  bl #0x315681c
0x03DC3EDC: e80300aa  mov x8, x0
0x03DC3EE0: 086140f9  ldr x8, [x8, #0xc0]
0x03DC3EE4: 000940f9  ldr x0, [x8, #0x10]
0x03DC3EE8: 08d44439  ldrb w8, [x0, #0x135]
0x03DC3EEC: 48000037  tbnz w8, #0, #0x3dc3ef4
0x03DC3EF0: 4b4ace97  bl #0x315681c
0x03DC3EF4: 08e040b9  ldr w8, [x0, #0xe0]
0x03DC3EF8: 48000035  cbnz w8, #0x3dc3f00
0x03DC3EFC: 24f3ce97  bl #0x3180b8c
0x03DC3F00: e01240f9  ldr x0, [x23, #0x20]
0x03DC3F04: 08d44439  ldrb w8, [x0, #0x135]
0x03DC3F08: 48000037  tbnz w8, #0, #0x3dc3f10
0x03DC3F0C: 444ace97  bl #0x315681c
0x03DC3F10: 086040f9  ldr x8, [x0, #0xc0]
0x03DC3F14: 000940f9  ldr x0, [x8, #0x10]
0x03DC3F18: 08d44439  ldrb w8, [x0, #0x135]
0x03DC3F1C: 48000037  tbnz w8, #0, #0x3dc3f24
0x03DC3F20: 3f4ace97  bl #0x315681c
0x03DC3F24: 085c40f9  ldr x8, [x0, #0xb8]
0x03DC3F28: 180140f9  ldr x24, [x8]
0x03DC3F2C: 180800b4  cbz x24, #0x3dc402c
0x03DC3F30: e01240f9  ldr x0, [x23, #0x20]
0x03DC3F34: 08d44439  ldrb w8, [x0, #0x135]
0x03DC3F38: 48000037  tbnz w8, #0, #0x3dc3f40
0x03DC3F3C: 384ace97  bl #0x315681c
0x03DC3F40: 086040f9  ldr x8, [x0, #0xc0]
0x03DC3F44: e1230091  add x1, sp, #8
0x03DC3F48: e00318aa  mov x0, x24
0x03DC3F4C: 020d40f9  ldr x2, [x8, #0x18]
0x03DC3F50: 8df53e94  bl #0x4d81584
0x03DC3F54: e0010036  tbz w0, #0, #0x3dc3f90
0x03DC3F58: e00740f9  ldr x0, [sp, #8]
0x03DC3F5C: 800600b4  cbz x0, #0x3dc402c
0x03DC3F60: 160c01f8  str x22, [x0, #0x10]!
0x03DC3F64: e10316aa  mov x1, x22
0x03DC3F68: 97f2ce97  bl #0x31809c4
0x03DC3F6C: e00740f9  ldr x0, [sp, #8]
0x03DC3F70: e00500b4  cbz x0, #0x3dc402c
0x03DC3F74: 158c01f8  str x21, [x0, #0x18]!
0x03DC3F78: e1031faa  mov x1, xzr
0x03DC3F7C: 140400f9  str x20, [x0, #8]
0x03DC3F80: 91f2ce97  bl #0x31809c4
0x03DC3F84: f70740f9  ldr x23, [sp, #8]
0x03DC3F88: 370400b5  cbnz x23, #0x3dc400c
0x03DC3F8C: 28000014  b #0x3dc402c
0x03DC3F90: e01240f9  ldr x0, [x23, #0x20]
0x03DC3F94: 08d44439  ldrb w8, [x0, #0x135]
0x03DC3F98: 48000037  tbnz w8, #0, #0x3dc3fa0
0x03DC3F9C: 204ace97  bl #0x315681c
0x03DC3FA0: 086040f9  ldr x8, [x0, #0xc0]
0x03DC3FA4: 001940f9  ldr x0, [x8, #0x30]
0x03DC3FA8: 08d44439  ldrb w8, [x0, #0x135]
0x03DC3FAC: 48000037  tbnz w8, #0, #0x3dc3fb4
0x03DC3FB0: 1b4ace97  bl #0x315681c
0x03DC3FB4: 3bf3ce97  bl #0x3180ca0
0x03DC3FB8: e81240f9  ldr x8, [x23, #0x20]
0x03DC3FBC: f70300aa  mov x23, x0
0x03DC3FC0: 09d54439  ldrb w9, [x8, #0x135]
0x03DC3FC4: 89000037  tbnz w9, #0, #0x3dc3fd4
0x03DC3FC8: e00308aa  mov x0, x8
0x03DC3FCC: 144ace97  bl #0x315681c
0x03DC3FD0: e80300aa  mov x8, x0
0x03DC3FD4: 086140f9  ldr x8, [x8, #0xc0]
0x03DC3FD8: e00317aa  mov x0, x23
0x03DC3FDC: 012540f9  ldr x1, [x8, #0x48]
0x03DC3FE0: f6051e94  bl #0x45457b8
0x03DC3FE4: 570200b4  cbz x23, #0x3dc402c
0x03DC3FE8: e00317aa  mov x0, x23
0x03DC3FEC: 160c01f8  str x22, [x0, #0x10]!
0x03DC3FF0: e10316aa  mov x1, x22
0x03DC3FF4: 74f2ce97  bl #0x31809c4
0x03DC3FF8: e00317aa  mov x0, x23
0x03DC3FFC: 158c01f8  str x21, [x0, #0x18]!
0x03DC4000: e1031faa  mov x1, xzr
0x03DC4004: f41200f9  str x20, [x23, #0x20]
0x03DC4008: 6ff2ce97  bl #0x31809c4
0x03DC400C: e8a20091  add x8, x23, #0x28
0x03DC4010: 130100b9  str w19, [x8]
0x03DC4014: e00317aa  mov x0, x23
0x03DC4018: f44f43a9  ldp x20, x19, [sp, #0x30]
0x03DC401C: f65742a9  ldp x22, x21, [sp, #0x20]
0x03DC4020: f85f41a9  ldp x24, x23, [sp, #0x10]
0x03DC4024: fe0744f8  ldr x30, [sp], #0x40
0x03DC4028: c0035fd6  ret
0x03DC402C: 20f3ce97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DC4030 | ContextualizedECS.Context.TickArgs$$AddArguments<__Il2CppFullySharedGenericType>
; native signature: ContextualizedECS_Context_TickArgs_o* ContextualizedECS_Context_TickArgs__AddArguments___Il2CppFullySharedGenericType_ (ContextualizedECS_Context_TickArgs_o* __this, System_Collections_Generic_IEnumerable_T__o* arguments, const MethodInfo_3DC4030* method);
; bytes=976 sha256=8116f1babdd83be4a38ac46132e890ed568c0bd06c01c50ea765cdadc54927a8 status=arm64_complete_bound indexed_start=True
0x03DC4030: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x03DC4034: fb0b00f9  str x27, [sp, #0x10]
0x03DC4038: fa6702a9  stp x26, x25, [sp, #0x20]
0x03DC403C: f85f03a9  stp x24, x23, [sp, #0x30]
0x03DC4040: f65704a9  stp x22, x21, [sp, #0x40]
0x03DC4044: f44f05a9  stp x20, x19, [sp, #0x50]
0x03DC4048: fd030091  mov x29, sp
0x03DC404C: ff8300d1  sub sp, sp, #0x20
0x03DC4050: 5ad03bd5  mrs x26, tpidr_el0
0x03DC4054: 481740f9  ldr x8, [x26, #0x28]
0x03DC4058: f50302aa  mov x21, x2
0x03DC405C: f40301aa  mov x20, x1
0x03DC4060: f30300aa  mov x19, x0
0x03DC4064: a8831ff8  stur x8, [x29, #-8]
0x03DC4068: 5b1c40f9  ldr x27, [x2, #0x38]
0x03DC406C: 9b0100b5  cbnz x27, #0x3dc409c
0x03DC4070: 40c401d0  adrp x0, #0x764e000
0x03DC4074: 006444f9  ldr x0, [x0, #0x8c8]
0x03DC4078: 68f2ce97  bl #0x3180a18
0x03DC407C: 40c401d0  adrp x0, #0x764e000
0x03DC4080: 007044f9  ldr x0, [x0, #0x8e0]
0x03DC4084: 65f2ce97  bl #0x3180a18
0x03DC4088: bb1e40f9  ldr x27, [x21, #0x38]
0x03DC408C: 9b0000b5  cbnz x27, #0x3dc409c
0x03DC4090: e00315aa  mov x0, x21
0x03DC4094: f949ce97  bl #0x3156878
0x03DC4098: bb1e40f9  ldr x27, [x21, #0x38]
0x03DC409C: 681340f9  ldr x8, [x27, #0x20]
0x03DC40A0: 16fd40b9  ldr w22, [x8, #0xfc]
0x03DC40A4: e8030091  mov x8, sp
0x03DC40A8: c93e0091  add x9, x22, #0xf
0x03DC40AC: 29717c92  and x9, x9, #0x1fffffff0
0x03DC40B0: 170109cb  sub x23, x8, x9
0x03DC40B4: ff020091  mov sp, x23
0x03DC40B8: e8030091  mov x8, sp
0x03DC40BC: 180109cb  sub x24, x8, x9
0x03DC40C0: 1f030091  mov sp, x24
0x03DC40C4: e8030091  mov x8, sp
0x03DC40C8: 190109cb  sub x25, x8, x9
0x03DC40CC: 3f030091  mov sp, x25
0x03DC40D0: e00319aa  mov x0, x25
0x03DC40D4: e1031f2a  mov w1, wzr
0x03DC40D8: e20316aa  mov x2, x22
0x03DC40DC: 312ad094  bl #0x71ce9a0
0x03DC40E0: d41200b4  cbz x20, #0x3dc4338
0x03DC40E4: 610340f9  ldr x1, [x27]
0x03DC40E8: 28d44439  ldrb w8, [x1, #0x135]
0x03DC40EC: 88000037  tbnz w8, #0, #0x3dc40fc
0x03DC40F0: e00301aa  mov x0, x1
0x03DC40F4: ca49ce97  bl #0x315681c
0x03DC40F8: e10300aa  mov x1, x0
0x03DC40FC: 880240f9  ldr x8, [x20]
0x03DC4100: 095d4279  ldrh w9, [x8, #0x12e]
0x03DC4104: 290100b4  cbz x9, #0x3dc4128
0x03DC4108: 0a5940f9  ldr x10, [x8, #0xb0]
0x03DC410C: 4a210091  add x10, x10, #8
0x03DC4110: 4b815ff8  ldur x11, [x10, #-8]
0x03DC4114: 7f0101eb  cmp x11, x1
0x03DC4118: 00010054  b.eq #0x3dc4138
0x03DC411C: 290500f1  subs x9, x9, #1
0x03DC4120: 4a410091  add x10, x10, #0x10
0x03DC4124: 61ffff54  b.ne #0x3dc4110
0x03DC4128: e00314aa  mov x0, x20
0x03DC412C: e2031f2a  mov w2, wzr
0x03DC4130: 784ace97  bl #0x3156b10
0x03DC4134: 04000014  b #0x3dc4144
0x03DC4138: 490180b9  ldrsw x9, [x10]
0x03DC413C: 0811098b  add x8, x8, x9, lsl #4
0x03DC4140: 00e10491  add x0, x8, #0x138
0x03DC4144: 080440a9  ldp x8, x1, [x0]
0x03DC4148: e00314aa  mov x0, x20
0x03DC414C: 00013fd6  blr x8
0x03DC4150: f40300aa  mov x20, x0
0x03DC4154: 400f00b4  cbz x0, #0x3dc433c
0x03DC4158: 5bc401d0  adrp x27, #0x764e000
0x03DC415C: 7b7344f9  ldr x27, [x27, #0x8e0]
0x03DC4160: 880240f9  ldr x8, [x20]
0x03DC4164: 610340f9  ldr x1, [x27]
0x03DC4168: 095d4279  ldrh w9, [x8, #0x12e]
0x03DC416C: 290100b4  cbz x9, #0x3dc4190
0x03DC4170: 0a5940f9  ldr x10, [x8, #0xb0]
0x03DC4174: 4a210091  add x10, x10, #8
0x03DC4178: 4b815ff8  ldur x11, [x10, #-8]
0x03DC417C: 7f0101eb  cmp x11, x1
0x03DC4180: 00010054  b.eq #0x3dc41a0
0x03DC4184: 290500f1  subs x9, x9, #1
0x03DC4188: 4a410091  add x10, x10, #0x10
0x03DC418C: 61ffff54  b.ne #0x3dc4178
0x03DC4190: e00314aa  mov x0, x20
0x03DC4194: e2031f2a  mov w2, wzr
0x03DC4198: 5e4ace97  bl #0x3156b10
0x03DC419C: 04000014  b #0x3dc41ac
0x03DC41A0: 490180b9  ldrsw x9, [x10]
0x03DC41A4: 0811098b  add x8, x8, x9, lsl #4
0x03DC41A8: 00e10491  add x0, x8, #0x138
0x03DC41AC: 080440a9  ldp x8, x1, [x0]
0x03DC41B0: e00314aa  mov x0, x20
0x03DC41B4: 00013fd6  blr x8
0x03DC41B8: 00070036  tbz w0, #0, #0x3dc4298
0x03DC41BC: a81e40f9  ldr x8, [x21, #0x38]
0x03DC41C0: 010940f9  ldr x1, [x8, #0x10]
0x03DC41C4: 28d44439  ldrb w8, [x1, #0x135]
0x03DC41C8: 88000037  tbnz w8, #0, #0x3dc41d8
0x03DC41CC: e00301aa  mov x0, x1
0x03DC41D0: 9349ce97  bl #0x315681c
0x03DC41D4: e10300aa  mov x1, x0
0x03DC41D8: 880240f9  ldr x8, [x20]
0x03DC41DC: 095d4279  ldrh w9, [x8, #0x12e]
0x03DC41E0: 290100b4  cbz x9, #0x3dc4204
0x03DC41E4: 0a5940f9  ldr x10, [x8, #0xb0]
0x03DC41E8: 4a210091  add x10, x10, #8
0x03DC41EC: 4b815ff8  ldur x11, [x10, #-8]
0x03DC41F0: 7f0101eb  cmp x11, x1
0x03DC41F4: 00010054  b.eq #0x3dc4214
0x03DC41F8: 290500f1  subs x9, x9, #1
0x03DC41FC: 4a410091  add x10, x10, #0x10
0x03DC4200: 61ffff54  b.ne #0x3dc41ec
0x03DC4204: e00314aa  mov x0, x20
0x03DC4208: e2031f2a  mov w2, wzr
0x03DC420C: 414ace97  bl #0x3156b10
0x03DC4210: 04000014  b #0x3dc4220
0x03DC4214: 490180b9  ldrsw x9, [x10]
0x03DC4218: 0811098b  add x8, x8, x9, lsl #4
0x03DC421C: 00e10491  add x0, x8, #0x138
0x03DC4220: b7831ef8  stur x23, [x29, #-0x18]
0x03DC4224: 010440f9  ldr x1, [x0, #8]
0x03DC4228: 20a040a9  ldp x0, x8, [x1, #8]
0x03DC422C: a36300d1  sub x3, x29, #0x18
0x03DC4230: e20314aa  mov x2, x20
0x03DC4234: e40317aa  mov x4, x23
0x03DC4238: 00013fd6  blr x8
0x03DC423C: e00319aa  mov x0, x25
0x03DC4240: e10317aa  mov x1, x23
0x03DC4244: e20316aa  mov x2, x22
0x03DC4248: ca29d094  bl #0x71ce970
0x03DC424C: e00318aa  mov x0, x24
0x03DC4250: e10319aa  mov x1, x25
0x03DC4254: e20316aa  mov x2, x22
0x03DC4258: c629d094  bl #0x71ce970
0x03DC425C: a81e40f9  ldr x8, [x21, #0x38]
0x03DC4260: 091140f9  ldr x9, [x8, #0x20]
0x03DC4264: 2a2940b9  ldr w10, [x9, #0x28]
0x03DC4268: e90318aa  mov x9, x24
0x03DC426C: 4a00f837  tbnz w10, #0x1f, #0x3dc4274
0x03DC4270: 090340f9  ldr x9, [x24]
0x03DC4274: 011540f9  ldr x1, [x8, #0x28]
0x03DC4278: 200040f9  ldr x0, [x1]
0x03DC427C: a9831ef8  stur x9, [x29, #-0x18]
0x03DC4280: 280840f9  ldr x8, [x1, #0x10]
0x03DC4284: a36300d1  sub x3, x29, #0x18
0x03DC4288: a44300d1  sub x4, x29, #0x10
0x03DC428C: e20313aa  mov x2, x19
0x03DC4290: 00013fd6  blr x8
0x03DC4294: b3ffff17  b #0x3dc4160
0x03DC4298: f5031faa  mov x21, xzr
0x03DC429C: 340300b4  cbz x20, #0x3dc4300
0x03DC42A0: 4ac401d0  adrp x10, #0x764e000
0x03DC42A4: 880240f9  ldr x8, [x20]
0x03DC42A8: 4a6544f9  ldr x10, [x10, #0x8c8]
0x03DC42AC: 095d4279  ldrh w9, [x8, #0x12e]
0x03DC42B0: 410140f9  ldr x1, [x10]
0x03DC42B4: 290100b4  cbz x9, #0x3dc42d8
0x03DC42B8: 0a5940f9  ldr x10, [x8, #0xb0]
0x03DC42BC: 4a210091  add x10, x10, #8
0x03DC42C0: 4b815ff8  ldur x11, [x10, #-8]
0x03DC42C4: 7f0101eb  cmp x11, x1
0x03DC42C8: 00010054  b.eq #0x3dc42e8
0x03DC42CC: 290500f1  subs x9, x9, #1
0x03DC42D0: 4a410091  add x10, x10, #0x10
0x03DC42D4: 61ffff54  b.ne #0x3dc42c0
0x03DC42D8: e00314aa  mov x0, x20
0x03DC42DC: e2031f2a  mov w2, wzr
0x03DC42E0: 0c4ace97  bl #0x3156b10
0x03DC42E4: 04000014  b #0x3dc42f4
0x03DC42E8: 490180b9  ldrsw x9, [x10]
0x03DC42EC: 0811098b  add x8, x8, x9, lsl #4
0x03DC42F0: 00e10491  add x0, x8, #0x138
0x03DC42F4: 080440a9  ldp x8, x1, [x0]
0x03DC42F8: e00314aa  mov x0, x20
0x03DC42FC: 00013fd6  blr x8
0x03DC4300: 150200b5  cbnz x21, #0x3dc4340
0x03DC4304: 481740f9  ldr x8, [x26, #0x28]
0x03DC4308: a9835ff8  ldur x9, [x29, #-8]
0x03DC430C: 1f0109eb  cmp x8, x9
0x03DC4310: c1010054  b.ne #0x3dc4348
0x03DC4314: e00313aa  mov x0, x19
0x03DC4318: bf030091  mov sp, x29
0x03DC431C: f44f45a9  ldp x20, x19, [sp, #0x50]
0x03DC4320: f65744a9  ldp x22, x21, [sp, #0x40]
0x03DC4324: f85f43a9  ldp x24, x23, [sp, #0x30]
0x03DC4328: fa6742a9  ldp x26, x25, [sp, #0x20]
0x03DC432C: fb0b40f9  ldr x27, [sp, #0x10]
0x03DC4330: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x03DC4334: c0035fd6  ret
0x03DC4338: 5df2ce97  bl #0x3180cac
0x03DC433C: 5cf2ce97  bl #0x3180cac
0x03DC4340: e00315aa  mov x0, x21
0x03DC4344: 58f2ce97  bl #0x3180ca4
0x03DC4348: 9229d094  bl #0x71ce990
0x03DC434C: 03000014  b #0x3dc4358
0x03DC4350: 02000014  b #0x3dc4358
0x03DC4354: 01000014  b #0x3dc4358
0x03DC4358: f60300aa  mov x22, x0
0x03DC435C: 3f040071  cmp w1, #1
0x03DC4360: c1000054  b.ne #0x3dc4378
0x03DC4364: e00316aa  mov x0, x22
0x03DC4368: 6a29d094  bl #0x71ce910
0x03DC436C: 150040f9  ldr x21, [x0]
0x03DC4370: 6c29d094  bl #0x71ce920
0x03DC4374: caffff17  b #0x3dc429c
0x03DC4378: f5031faa  mov x21, xzr
0x03DC437C: 02000014  b #0x3dc4384
0x03DC4380: f60300aa  mov x22, x0
0x03DC4384: 340300b4  cbz x20, #0x3dc43e8
0x03DC4388: 4ac401d0  adrp x10, #0x764e000
0x03DC438C: 880240f9  ldr x8, [x20]
0x03DC4390: 4a6544f9  ldr x10, [x10, #0x8c8]
0x03DC4394: 095d4279  ldrh w9, [x8, #0x12e]
0x03DC4398: 410140f9  ldr x1, [x10]
0x03DC439C: 290100b4  cbz x9, #0x3dc43c0
0x03DC43A0: 0a5940f9  ldr x10, [x8, #0xb0]
0x03DC43A4: 4a210091  add x10, x10, #8
0x03DC43A8: 4b815ff8  ldur x11, [x10, #-8]
0x03DC43AC: 7f0101eb  cmp x11, x1
0x03DC43B0: 00010054  b.eq #0x3dc43d0
0x03DC43B4: 290500f1  subs x9, x9, #1
0x03DC43B8: 4a410091  add x10, x10, #0x10
0x03DC43BC: 61ffff54  b.ne #0x3dc43a8
0x03DC43C0: e00314aa  mov x0, x20
0x03DC43C4: e2031f2a  mov w2, wzr
0x03DC43C8: d249ce97  bl #0x3156b10
0x03DC43CC: 04000014  b #0x3dc43dc
0x03DC43D0: 490180b9  ldrsw x9, [x10]
0x03DC43D4: 0811098b  add x8, x8, x9, lsl #4
0x03DC43D8: 00e10491  add x0, x8, #0x138
0x03DC43DC: 080440a9  ldp x8, x1, [x0]
0x03DC43E0: e00314aa  mov x0, x20
0x03DC43E4: 00013fd6  blr x8
0x03DC43E8: 750000b5  cbnz x21, #0x3dc43f4
0x03DC43EC: e00316aa  mov x0, x22
0x03DC43F0: 5a85d297  bl #0x3265958
0x03DC43F4: e00315aa  mov x0, x21
0x03DC43F8: 2bf2ce97  bl #0x3180ca4
0x03DC43FC: 4614c197  bl #0x2e09514

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DC45F0 | ContextualizedECS.Context.TickArgs$$ClearArgumentsOfType<__Il2CppFullySharedGenericType>
; native signature: bool ContextualizedECS_Context_TickArgs__ClearArgumentsOfType___Il2CppFullySharedGenericType_ (ContextualizedECS_Context_TickArgs_o* __this, const MethodInfo_3DC45F0* method);
; bytes=252 sha256=d6c3a172ea0bd0d8779687d7ce481a7c68acbb19c65f855680fa81ea3ef6cc25 status=arm64_complete_bound indexed_start=True
0x03DC45F0: fe0f1ef8  str x30, [sp, #-0x20]!
0x03DC45F4: f44f01a9  stp x20, x19, [sp, #0x10]
0x03DC45F8: 281c40f9  ldr x8, [x1, #0x38]
0x03DC45FC: f30300aa  mov x19, x0
0x03DC4600: 680200b5  cbnz x8, #0x3dc464c
0x03DC4604: a0c501f0  adrp x0, #0x767b000
0x03DC4608: 009843f9  ldr x0, [x0, #0x730]
0x03DC460C: f40301aa  mov x20, x1
0x03DC4610: 02f1ce97  bl #0x3180a18
0x03DC4614: a0c501f0  adrp x0, #0x767b000
0x03DC4618: 00a043f9  ldr x0, [x0, #0x740]
0x03DC461C: fff0ce97  bl #0x3180a18
0x03DC4620: 40c501b0  adrp x0, #0x766d000
0x03DC4624: 004c45f9  ldr x0, [x0, #0xa98]
0x03DC4628: fcf0ce97  bl #0x3180a18
0x03DC462C: 40c401d0  adrp x0, #0x764e000
0x03DC4630: 00ac42f9  ldr x0, [x0, #0x558]
0x03DC4634: f9f0ce97  bl #0x3180a18
0x03DC4638: 881e40f9  ldr x8, [x20, #0x38]
0x03DC463C: 880000b5  cbnz x8, #0x3dc464c
0x03DC4640: e00314aa  mov x0, x20
0x03DC4644: 8d48ce97  bl #0x3156878
0x03DC4648: 881e40f9  ldr x8, [x20, #0x38]
0x03DC464C: 49c401d0  adrp x9, #0x764e000
0x03DC4650: 29ad42f9  ldr x9, [x9, #0x558]
0x03DC4654: ff0700f9  str xzr, [sp, #8]
0x03DC4658: 140140f9  ldr x20, [x8]
0x03DC465C: 200140f9  ldr x0, [x9]
0x03DC4660: 09e040b9  ldr w9, [x0, #0xe0]
0x03DC4664: 49000035  cbnz w9, #0x3dc466c
0x03DC4668: 49f1ce97  bl #0x3180b8c
0x03DC466C: e00314aa  mov x0, x20
0x03DC4670: e1031faa  mov x1, xzr
0x03DC4674: d4826394  bl #0x56a51c4
0x03DC4678: 680a40f9  ldr x8, [x19, #0x10]
0x03DC467C: 680300b4  cbz x8, #0x3dc46e8
0x03DC4680: a9c501f0  adrp x9, #0x767b000
0x03DC4684: 299943f9  ldr x9, [x9, #0x730]
0x03DC4688: e10300aa  mov x1, x0
0x03DC468C: e2230091  add x2, sp, #8
0x03DC4690: e00308aa  mov x0, x8
0x03DC4694: 230140f9  ldr x3, [x9]
0x03DC4698: 86804494  bl #0x4ee48b0
0x03DC469C: e0010036  tbz w0, #0, #0x3dc46d8
0x03DC46A0: e80740f9  ldr x8, [sp, #8]
0x03DC46A4: 280200b4  cbz x8, #0x3dc46e8
0x03DC46A8: 021940b9  ldr w2, [x8, #0x18]
0x03DC46AC: 5f040071  cmp w2, #1
0x03DC46B0: 4b010054  b.lt #0x3dc46d8
0x03DC46B4: 091d40b9  ldr w9, [x8, #0x1c]
0x03DC46B8: 000940f9  ldr x0, [x8, #0x10]
0x03DC46BC: e1031f2a  mov w1, wzr
0x03DC46C0: e3031faa  mov x3, xzr
0x03DC46C4: 29050011  add w9, w9, #1
0x03DC46C8: 1f250329  stp wzr, w9, [x8, #0x18]
0x03DC46CC: 6cd56394  bl #0x56b9c7c
0x03DC46D0: 20008052  movz w0, #0x1
0x03DC46D4: 02000014  b #0x3dc46dc
0x03DC46D8: e0031f2a  mov w0, wzr
0x03DC46DC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03DC46E0: fe0742f8  ldr x30, [sp], #0x20
0x03DC46E4: c0035fd6  ret
0x03DC46E8: 71f1ce97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DC4D5C | ContextualizedECS.Context.TickArgs$$RemoveSpecificArgument<__Il2CppFullySharedGenericType>
; native signature: bool ContextualizedECS_Context_TickArgs__RemoveSpecificArgument___Il2CppFullySharedGenericType_ (ContextualizedECS_Context_TickArgs_o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o argument, const MethodInfo_3DC4D5C* method);
; bytes=376 sha256=779154a517c50db2e945a3e3ffc3e2c4df85043c1d94150badb8b3fc4b33f4bd status=arm64_complete_bound indexed_start=True
0x03DC4D5C: fd7bbba9  stp x29, x30, [sp, #-0x50]!
0x03DC4D60: f90b00f9  str x25, [sp, #0x10]
0x03DC4D64: f85f02a9  stp x24, x23, [sp, #0x20]
0x03DC4D68: f65703a9  stp x22, x21, [sp, #0x30]
0x03DC4D6C: f44f04a9  stp x20, x19, [sp, #0x40]
0x03DC4D70: fd030091  mov x29, sp
0x03DC4D74: ff8300d1  sub sp, sp, #0x20
0x03DC4D78: 59d03bd5  mrs x25, tpidr_el0
0x03DC4D7C: 281740f9  ldr x8, [x25, #0x28]
0x03DC4D80: f40302aa  mov x20, x2
0x03DC4D84: f30301aa  mov x19, x1
0x03DC4D88: f50300aa  mov x21, x0
0x03DC4D8C: a8831ff8  stur x8, [x29, #-8]
0x03DC4D90: a1031ff8  stur x1, [x29, #-0x10]
0x03DC4D94: 481c40f9  ldr x8, [x2, #0x38]
0x03DC4D98: e80100b5  cbnz x8, #0x3dc4dd4
0x03DC4D9C: a0c501f0  adrp x0, #0x767b000
0x03DC4DA0: 009843f9  ldr x0, [x0, #0x730]
0x03DC4DA4: 1defce97  bl #0x3180a18
0x03DC4DA8: a0c501f0  adrp x0, #0x767b000
0x03DC4DAC: 00a443f9  ldr x0, [x0, #0x748]
0x03DC4DB0: 1aefce97  bl #0x3180a18
0x03DC4DB4: 40c401d0  adrp x0, #0x764e000
0x03DC4DB8: 00ac42f9  ldr x0, [x0, #0x558]
0x03DC4DBC: 17efce97  bl #0x3180a18
0x03DC4DC0: 881e40f9  ldr x8, [x20, #0x38]
0x03DC4DC4: 880000b5  cbnz x8, #0x3dc4dd4
0x03DC4DC8: e00314aa  mov x0, x20
0x03DC4DCC: ab46ce97  bl #0x3156878
0x03DC4DD0: 881e40f9  ldr x8, [x20, #0x38]
0x03DC4DD4: 090540f9  ldr x9, [x8, #8]
0x03DC4DD8: 36fd40b9  ldr w22, [x9, #0xfc]
0x03DC4DDC: e9030091  mov x9, sp
0x03DC4DE0: ca3e0091  add x10, x22, #0xf
0x03DC4DE4: 4a717c92  and x10, x10, #0x1fffffff0
0x03DC4DE8: 37010acb  sub x23, x9, x10
0x03DC4DEC: ff020091  mov sp, x23
0x03DC4DF0: 49c401d0  adrp x9, #0x764e000
0x03DC4DF4: 29ad42f9  ldr x9, [x9, #0x558]
0x03DC4DF8: bf831ef8  stur xzr, [x29, #-0x18]
0x03DC4DFC: 180140f9  ldr x24, [x8]
0x03DC4E00: 200140f9  ldr x0, [x9]
0x03DC4E04: 09e040b9  ldr w9, [x0, #0xe0]
0x03DC4E08: 49000035  cbnz w9, #0x3dc4e10
0x03DC4E0C: 60efce97  bl #0x3180b8c
0x03DC4E10: e00318aa  mov x0, x24
0x03DC4E14: e1031faa  mov x1, xzr
0x03DC4E18: eb806394  bl #0x56a51c4
0x03DC4E1C: a80a40f9  ldr x8, [x21, #0x10]
0x03DC4E20: 680500b4  cbz x8, #0x3dc4ecc
0x03DC4E24: a9c501f0  adrp x9, #0x767b000
0x03DC4E28: 299943f9  ldr x9, [x9, #0x730]
0x03DC4E2C: e10300aa  mov x1, x0
0x03DC4E30: a26300d1  sub x2, x29, #0x18
0x03DC4E34: e00308aa  mov x0, x8
0x03DC4E38: 230140f9  ldr x3, [x9]
0x03DC4E3C: 9d7e4494  bl #0x4ee48b0
0x03DC4E40: c0020036  tbz w0, #0, #0x3dc4e98
0x03DC4E44: 951e40f9  ldr x21, [x20, #0x38]
0x03DC4E48: b4835ef8  ldur x20, [x29, #-0x18]
0x03DC4E4C: e00317aa  mov x0, x23
0x03DC4E50: e20316aa  mov x2, x22
0x03DC4E54: a80640f9  ldr x8, [x21, #8]
0x03DC4E58: 082940b9  ldr w8, [x8, #0x28]
0x03DC4E5C: 1f010071  cmp w8, #0
0x03DC4E60: a84300d1  sub x8, x29, #0x10
0x03DC4E64: 61b2889a  csel x1, x19, x8, lt
0x03DC4E68: c226d094  bl #0x71ce970
0x03DC4E6C: a00640f9  ldr x0, [x21, #8]
0x03DC4E70: e10317aa  mov x1, x23
0x03DC4E74: 48efce97  bl #0x3180b94
0x03DC4E78: b40200b4  cbz x20, #0x3dc4ecc
0x03DC4E7C: a8c501f0  adrp x8, #0x767b000
0x03DC4E80: 08a543f9  ldr x8, [x8, #0x748]
0x03DC4E84: e10300aa  mov x1, x0
0x03DC4E88: e00314aa  mov x0, x20
0x03DC4E8C: 020140f9  ldr x2, [x8]
0x03DC4E90: 1a030a94  bl #0x4045af8
0x03DC4E94: 02000014  b #0x3dc4e9c
0x03DC4E98: e0031f2a  mov w0, wzr
0x03DC4E9C: 281740f9  ldr x8, [x25, #0x28]
0x03DC4EA0: a9835ff8  ldur x9, [x29, #-8]
0x03DC4EA4: 1f0109eb  cmp x8, x9
0x03DC4EA8: 41010054  b.ne #0x3dc4ed0
0x03DC4EAC: 00000012  and w0, w0, #1
0x03DC4EB0: bf030091  mov sp, x29
0x03DC4EB4: f44f44a9  ldp x20, x19, [sp, #0x40]
0x03DC4EB8: f65743a9  ldp x22, x21, [sp, #0x30]
0x03DC4EBC: f85f42a9  ldp x24, x23, [sp, #0x20]
0x03DC4EC0: f90b40f9  ldr x25, [sp, #0x10]
0x03DC4EC4: fd7bc5a8  ldp x29, x30, [sp], #0x50
0x03DC4EC8: c0035fd6  ret
0x03DC4ECC: 78efce97  bl #0x3180cac
0x03DC4ED0: b026d094  bl #0x71ce990

