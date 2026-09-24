; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25700 Merger.MergeBoard.View.Layout.FreeformMergeBoardLayout
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A3F934 | public override int get_GetPositionsCount() { }
; bytes=80 sha256=30d1a5e590ae308f8b45c5726a917d35ee2df2412906c24a15b55e46ae4dfc92 status=arm64_complete_bound indexed_start=True
0x06A3F934: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A3F938: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A3F93C: 549700f0  adrp x20, #0x7d2a000
0x06A3F940: 88aa5439  ldrb w8, [x20, #0x52a]
0x06A3F944: f30300aa  mov x19, x0
0x06A3F948: c8000037  tbnz w8, #0, #0x6a3f960
0x06A3F94C: 80670090  adrp x0, #0x772f000
0x06A3F950: 00b843f9  ldr x0, [x0, #0x770]
0x06A3F954: 31041d97  bl #0x3180a18
0x06A3F958: 28008052  movz w8, #0x1
0x06A3F95C: 88aa1439  strb w8, [x20, #0x52a]
0x06A3F960: 601a40f9  ldr x0, [x19, #0x30]
0x06A3F964: e00000b4  cbz x0, #0x6a3f980
0x06A3F968: 88670090  adrp x8, #0x772f000
0x06A3F96C: 08b943f9  ldr x8, [x8, #0x770]
0x06A3F970: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A3F974: 010140f9  ldr x1, [x8]
0x06A3F978: fe0742f8  ldr x30, [sp], #0x20
0x06A3F97C: a3d78f17  b #0x4e35808
0x06A3F980: cb041d97  bl #0x3180cac

; RVA 0x6A3F984 | private void OnValidate() { }
; bytes=348 sha256=20670ff6195dfb30ebf4cd6b06dab28842518c2523a39e1b242bdf6b4bb032f1 status=arm64_complete_bound indexed_start=True
0x06A3F984: fe0f1cf8  str x30, [sp, #-0x40]!
0x06A3F988: f85f01a9  stp x24, x23, [sp, #0x10]
0x06A3F98C: f65702a9  stp x22, x21, [sp, #0x20]
0x06A3F990: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A3F994: 559700f0  adrp x21, #0x7d2a000
0x06A3F998: 746400b0  adrp x20, #0x76cc000
0x06A3F99C: a8ae5439  ldrb w8, [x21, #0x52b]
0x06A3F9A0: 949642f9  ldr x20, [x20, #0x528]
0x06A3F9A4: f30300aa  mov x19, x0
0x06A3F9A8: a8020037  tbnz w8, #0, #0x6a3f9fc
0x06A3F9AC: 606400b0  adrp x0, #0x76cc000
0x06A3F9B0: 009442f9  ldr x0, [x0, #0x528]
0x06A3F9B4: 19041d97  bl #0x3180a18
0x06A3F9B8: 80670090  adrp x0, #0x772f000
0x06A3F9BC: 00e043f9  ldr x0, [x0, #0x7c0]
0x06A3F9C0: 16041d97  bl #0x3180a18
0x06A3F9C4: 006400b0  adrp x0, #0x76c0000
0x06A3F9C8: 004444f9  ldr x0, [x0, #0x888]
0x06A3F9CC: 13041d97  bl #0x3180a18
0x06A3F9D0: 806000d0  adrp x0, #0x7651000
0x06A3F9D4: 00c842f9  ldr x0, [x0, #0x590]
0x06A3F9D8: 10041d97  bl #0x3180a18
0x06A3F9DC: 806000d0  adrp x0, #0x7651000
0x06A3F9E0: 00cc42f9  ldr x0, [x0, #0x598]
0x06A3F9E4: 0d041d97  bl #0x3180a18
0x06A3F9E8: 606000f0  adrp x0, #0x764e000
0x06A3F9EC: 007042f9  ldr x0, [x0, #0x4e0]
0x06A3F9F0: 0a041d97  bl #0x3180a18
0x06A3F9F4: 28008052  movz w8, #0x1
0x06A3F9F8: a8ae1439  strb w8, [x21, #0x52b]
0x06A3F9FC: 601e40f9  ldr x0, [x19, #0x38]
0x06A3FA00: 810240f9  ldr x1, [x20]
0x06A3FA04: 42a24697  bl #0x3be830c
0x06A3FA08: c0000036  tbz w0, #0, #0x6a3fa20
0x06A3FA0C: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A3FA10: f65742a9  ldp x22, x21, [sp, #0x20]
0x06A3FA14: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06A3FA18: fe0744f8  ldr x30, [sp], #0x40
0x06A3FA1C: c0035fd6  ret
0x06A3FA20: 601a40f9  ldr x0, [x19, #0x30]
0x06A3FA24: c00500b4  cbz x0, #0x6a3fadc
0x06A3FA28: 88670090  adrp x8, #0x772f000
0x06A3FA2C: 08e143f9  ldr x8, [x8, #0x7c0]
0x06A3FA30: 010140f9  ldr x1, [x8]
0x06A3FA34: abd88f97  bl #0x4e35ce0
0x06A3FA38: 601e40f9  ldr x0, [x19, #0x38]
0x06A3FA3C: 000500b4  cbz x0, #0x6a3fadc
0x06A3FA40: 966000d0  adrp x22, #0x7651000
0x06A3FA44: 776000f0  adrp x23, #0x764e000
0x06A3FA48: 186400b0  adrp x24, #0x76c0000
0x06A3FA4C: d6ce42f9  ldr x22, [x22, #0x598]
0x06A3FA50: f77242f9  ldr x23, [x23, #0x4e0]
0x06A3FA54: 184744f9  ldr x24, [x24, #0x888]
0x06A3FA58: f4031f2a  mov w20, wzr
0x06A3FA5C: 081840b9  ldr w8, [x0, #0x18]
0x06A3FA60: 9f02086b  cmp w20, w8
0x06A3FA64: 4afdff54  b.ge #0x6a3fa0c
0x06A3FA68: c20240f9  ldr x2, [x22]
0x06A3FA6C: e103142a  mov w1, w20
0x06A3FA70: cb115897  bl #0x404419c
0x06A3FA74: e80240f9  ldr x8, [x23]
0x06A3FA78: f50300aa  mov x21, x0
0x06A3FA7C: 09e140b9  ldr w9, [x8, #0xe0]
0x06A3FA80: 69000035  cbnz w9, #0x6a3fa8c
0x06A3FA84: e00308aa  mov x0, x8
0x06A3FA88: 41041d97  bl #0x3180b8c
0x06A3FA8C: e00315aa  mov x0, x21
0x06A3FA90: e1031faa  mov x1, xzr
0x06A3FA94: e2031faa  mov x2, xzr
0x06A3FA98: 377c1294  bl #0x6edeb74
0x06A3FA9C: a0010036  tbz w0, #0, #0x6a3fad0
0x06A3FAA0: 601e40f9  ldr x0, [x19, #0x38]
0x06A3FAA4: c00100b4  cbz x0, #0x6a3fadc
0x06A3FAA8: c20240f9  ldr x2, [x22]
0x06A3FAAC: 751a40f9  ldr x21, [x19, #0x30]
0x06A3FAB0: e103142a  mov w1, w20
0x06A3FAB4: ba115897  bl #0x404419c
0x06A3FAB8: 350100b4  cbz x21, #0x6a3fadc
0x06A3FABC: 030340f9  ldr x3, [x24]
0x06A3FAC0: e20300aa  mov x2, x0
0x06A3FAC4: e00315aa  mov x0, x21
0x06A3FAC8: e103142a  mov w1, w20
0x06A3FACC: 1ed88f97  bl #0x4e35b44
0x06A3FAD0: 601e40f9  ldr x0, [x19, #0x38]
0x06A3FAD4: 94060011  add w20, w20, #1
0x06A3FAD8: 20fcffb5  cbnz x0, #0x6a3fa5c
0x06A3FADC: 74041d97  bl #0x3180cac

; RVA 0x6A3FAE0 | public override bool TryGetEmptyPosition(IEnumerable<int> occupiedPositions, out int position) { }
; bytes=500 sha256=24b4910dc232e6d53ebb641e66726bfec44cc19bfccb02d4416adc642a573575 status=arm64_complete_bound indexed_start=True
0x06A3FAE0: ff8301d1  sub sp, sp, #0x60
0x06A3FAE4: fe1300f9  str x30, [sp, #0x20]
0x06A3FAE8: f85f03a9  stp x24, x23, [sp, #0x30]
0x06A3FAEC: f65704a9  stp x22, x21, [sp, #0x40]
0x06A3FAF0: f44f05a9  stp x20, x19, [sp, #0x50]
0x06A3FAF4: 589700f0  adrp x24, #0x7d2a000
0x06A3FAF8: 776000f0  adrp x23, #0x764e000
0x06A3FAFC: 146400d0  adrp x20, #0x76c1000
0x06A3FB00: 08b35439  ldrb w8, [x24, #0x52c]
0x06A3FB04: f78a44f9  ldr x23, [x23, #0x910]
0x06A3FB08: 945642f9  ldr x20, [x20, #0x4a8]
0x06A3FB0C: f30302aa  mov x19, x2
0x06A3FB10: f60301aa  mov x22, x1
0x06A3FB14: f50300aa  mov x21, x0
0x06A3FB18: 68030037  tbnz w8, #0, #0x6a3fb84
0x06A3FB1C: 80670090  adrp x0, #0x772f000
0x06A3FB20: 00bc44f9  ldr x0, [x0, #0x978]
0x06A3FB24: bd031d97  bl #0x3180a18
0x06A3FB28: 80670090  adrp x0, #0x772f000
0x06A3FB2C: 00c044f9  ldr x0, [x0, #0x980]
0x06A3FB30: ba031d97  bl #0x3180a18
0x06A3FB34: 80670090  adrp x0, #0x772f000
0x06A3FB38: 00c444f9  ldr x0, [x0, #0x988]
0x06A3FB3C: b7031d97  bl #0x3180a18
0x06A3FB40: 80670090  adrp x0, #0x772f000
0x06A3FB44: 00c844f9  ldr x0, [x0, #0x990]
0x06A3FB48: b4031d97  bl #0x3180a18
0x06A3FB4C: 606000f0  adrp x0, #0x764e000
0x06A3FB50: 006044f9  ldr x0, [x0, #0x8c0]
0x06A3FB54: b1031d97  bl #0x3180a18
0x06A3FB58: 006400d0  adrp x0, #0x76c1000
0x06A3FB5C: 005442f9  ldr x0, [x0, #0x4a8]
0x06A3FB60: ae031d97  bl #0x3180a18
0x06A3FB64: 606000f0  adrp x0, #0x764e000
0x06A3FB68: 008844f9  ldr x0, [x0, #0x910]
0x06A3FB6C: ab031d97  bl #0x3180a18
0x06A3FB70: 80670090  adrp x0, #0x772f000
0x06A3FB74: 00cc44f9  ldr x0, [x0, #0x998]
0x06A3FB78: a8031d97  bl #0x3180a18
0x06A3FB7C: 28008052  movz w8, #0x1
0x06A3FB80: 08b31439  strb w8, [x24, #0x52c]
0x06A3FB84: e00240f9  ldr x0, [x23]
0x06A3FB88: ffff00a9  stp xzr, xzr, [sp, #8]
0x06A3FB8C: ff0f00f9  str xzr, [sp, #0x18]
0x06A3FB90: 44041d97  bl #0x3180ca0
0x06A3FB94: 820240f9  ldr x2, [x20]
0x06A3FB98: e10316aa  mov x1, x22
0x06A3FB9C: f40300aa  mov x20, x0
0x06A3FBA0: 06dea197  bl #0x52b73b8
0x06A3FBA4: a01a40f9  ldr x0, [x21, #0x30]
0x06A3FBA8: e00500b4  cbz x0, #0x6a3fc64
0x06A3FBAC: 88670090  adrp x8, #0x772f000
0x06A3FBB0: 08bd44f9  ldr x8, [x8, #0x978]
0x06A3FBB4: 010140f9  ldr x1, [x8]
0x06A3FBB8: 18d78f97  bl #0x4e35818
0x06A3FBBC: 400500b4  cbz x0, #0x6a3fc64
0x06A3FBC0: 88670090  adrp x8, #0x772f000
0x06A3FBC4: 08cd44f9  ldr x8, [x8, #0x998]
0x06A3FBC8: 97670090  adrp x23, #0x772f000
0x06A3FBCC: 786000f0  adrp x24, #0x764e000
0x06A3FBD0: 96670090  adrp x22, #0x772f000
0x06A3FBD4: 010140f9  ldr x1, [x8]
0x06A3FBD8: f7c644f9  ldr x23, [x23, #0x988]
0x06A3FBDC: 186344f9  ldr x24, [x24, #0x8c0]
0x06A3FBE0: d6c244f9  ldr x22, [x22, #0x980]
0x06A3FBE4: e8230091  add x8, sp, #8
0x06A3FBE8: 48cba597  bl #0x53b2908
0x06A3FBEC: e10240f9  ldr x1, [x23]
0x06A3FBF0: e0230091  add x0, sp, #8
0x06A3FBF4: e8239897  bl #0x5048b94
0x06A3FBF8: c0010036  tbz w0, #0, #0x6a3fc30
0x06A3FBFC: 340300b4  cbz x20, #0x6a3fc60
0x06A3FC00: f51b40b9  ldr w21, [sp, #0x18]
0x06A3FC04: 020340f9  ldr x2, [x24]
0x06A3FC08: e00314aa  mov x0, x20
0x06A3FC0C: e103152a  mov w1, w21
0x06A3FC10: 6bdfa197  bl #0x52b79bc
0x06A3FC14: c0fe0737  tbnz w0, #0, #0x6a3fbec
0x06A3FC18: 750200b9  str w21, [x19]
0x06A3FC1C: c10240f9  ldr x1, [x22]
0x06A3FC20: e0230091  add x0, sp, #8
0x06A3FC24: db239897  bl #0x5048b90
0x06A3FC28: 20008052  movz w0, #0x1
0x06A3FC2C: 07000014  b #0x6a3fc48
0x06A3FC30: c10240f9  ldr x1, [x22]
0x06A3FC34: e0230091  add x0, sp, #8
0x06A3FC38: d6239897  bl #0x5048b90
0x06A3FC3C: 08008012  movn w8, #0
0x06A3FC40: e0031f2a  mov w0, wzr
0x06A3FC44: 680200b9  str w8, [x19]
0x06A3FC48: f44f45a9  ldp x20, x19, [sp, #0x50]
0x06A3FC4C: f65744a9  ldp x22, x21, [sp, #0x40]
0x06A3FC50: f85f43a9  ldp x24, x23, [sp, #0x30]
0x06A3FC54: fe1340f9  ldr x30, [sp, #0x20]
0x06A3FC58: ff830191  add sp, sp, #0x60
0x06A3FC5C: c0035fd6  ret
0x06A3FC60: 13041d97  bl #0x3180cac
0x06A3FC64: 12041d97  bl #0x3180cac
0x06A3FC68: 02000014  b #0x6a3fc70
0x06A3FC6C: 01000014  b #0x6a3fc70
0x06A3FC70: f40300aa  mov x20, x0
0x06A3FC74: 3f040071  cmp w1, #1
0x06A3FC78: 61010054  b.ne #0x6a3fca4
0x06A3FC7C: e00314aa  mov x0, x20
0x06A3FC80: 243b1e94  bl #0x71ce910
0x06A3FC84: 150040f9  ldr x21, [x0]
0x06A3FC88: 263b1e94  bl #0x71ce920
0x06A3FC8C: c10240f9  ldr x1, [x22]
0x06A3FC90: e0230091  add x0, sp, #8
0x06A3FC94: bf239897  bl #0x5048b90
0x06A3FC98: 35fdffb4  cbz x21, #0x6a3fc3c
0x06A3FC9C: e00315aa  mov x0, x21
0x06A3FCA0: 01041d97  bl #0x3180ca4
0x06A3FCA4: f5031faa  mov x21, xzr
0x06A3FCA8: 02000014  b #0x6a3fcb0
0x06A3FCAC: f40300aa  mov x20, x0
0x06A3FCB0: c10240f9  ldr x1, [x22]
0x06A3FCB4: e0230091  add x0, sp, #8
0x06A3FCB8: b6239897  bl #0x5048b90
0x06A3FCBC: 750000b5  cbnz x21, #0x6a3fcc8
0x06A3FCC0: e00314aa  mov x0, x20
0x06A3FCC4: 25972097  bl #0x3265958
0x06A3FCC8: e00315aa  mov x0, x21
0x06A3FCCC: f6031d97  bl #0x3180ca4
0x06A3FCD0: 11260f97  bl #0x2e09514

; RVA 0x6A3FCD4 | public override bool TryGetClosestEmptyPosition(IEnumerable<int> occupiedPositions, int refPosition, out int position) { }
; bytes=1064 sha256=1f5c9b12f9907d2468ce0ad95624d3f85447d3935e269955b3996d3aea06dafa status=arm64_complete_bound indexed_start=True
0x06A3FCD4: ec0f18fc  str d12, [sp, #-0x80]!
0x06A3FCD8: ebab006d  stp d11, d10, [sp, #8]
0x06A3FCDC: e9a3016d  stp d9, d8, [sp, #0x18]
0x06A3FCE0: fe1700f9  str x30, [sp, #0x28]
0x06A3FCE4: fc6f03a9  stp x28, x27, [sp, #0x30]
0x06A3FCE8: fa6704a9  stp x26, x25, [sp, #0x40]
0x06A3FCEC: f85f05a9  stp x24, x23, [sp, #0x50]
0x06A3FCF0: f65706a9  stp x22, x21, [sp, #0x60]
0x06A3FCF4: f44f07a9  stp x20, x19, [sp, #0x70]
0x06A3FCF8: 579700f0  adrp x23, #0x7d2a000
0x06A3FCFC: e8b65439  ldrb w8, [x23, #0x52d]
0x06A3FD00: f30303aa  mov x19, x3
0x06A3FD04: f603022a  mov w22, w2
0x06A3FD08: f40301aa  mov x20, x1
0x06A3FD0C: f50300aa  mov x21, x0
0x06A3FD10: e8010037  tbnz w8, #0, #0x6a3fd4c
0x06A3FD14: 606000f0  adrp x0, #0x764e000
0x06A3FD18: 006444f9  ldr x0, [x0, #0x8c8]
0x06A3FD1C: 3f031d97  bl #0x3180a18
0x06A3FD20: 006100d0  adrp x0, #0x7661000
0x06A3FD24: 00f843f9  ldr x0, [x0, #0x7f0]
0x06A3FD28: 3c031d97  bl #0x3180a18
0x06A3FD2C: 006100d0  adrp x0, #0x7661000
0x06A3FD30: 00fc43f9  ldr x0, [x0, #0x7f8]
0x06A3FD34: 39031d97  bl #0x3180a18
0x06A3FD38: 606000f0  adrp x0, #0x764e000
0x06A3FD3C: 007044f9  ldr x0, [x0, #0x8e0]
0x06A3FD40: 36031d97  bl #0x3180a18
0x06A3FD44: 28008052  movz w8, #0x1
0x06A3FD48: e8b61439  strb w8, [x23, #0x52d]
0x06A3FD4C: e00315aa  mov x0, x21
0x06A3FD50: e103162a  mov w1, w22
0x06A3FD54: ea000094  bl #0x6a400fc
0x06A3FD58: 60040036  tbz w0, #0, #0x6a3fde4
0x06A3FD5C: e00315aa  mov x0, x21
0x06A3FD60: e103162a  mov w1, w22
0x06A3FD64: fc000094  bl #0x6a40154
0x06A3FD68: c01500b4  cbz x0, #0x6a40020
0x06A3FD6C: e1031faa  mov x1, xzr
0x06A3FD70: 5fa71294  bl #0x6ee9aec
0x06A3FD74: a80240f9  ldr x8, [x21]
0x06A3FD78: e00315aa  mov x0, x21
0x06A3FD7C: e10314aa  mov x1, x20
0x06A3FD80: 081ca04e  mov v8.16b, v0.16b
0x06A3FD84: 093541f9  ldr x9, [x8, #0x268]
0x06A3FD88: 023941f9  ldr x2, [x8, #0x270]
0x06A3FD8C: 291ca14e  mov v9.16b, v1.16b
0x06A3FD90: 20013fd6  blr x9
0x06A3FD94: 601400b4  cbz x0, #0x6a40020
0x06A3FD98: 0a6100d0  adrp x10, #0x7661000
0x06A3FD9C: 080040f9  ldr x8, [x0]
0x06A3FDA0: 4af943f9  ldr x10, [x10, #0x7f0]
0x06A3FDA4: f40300aa  mov x20, x0
0x06A3FDA8: 095d4279  ldrh w9, [x8, #0x12e]
0x06A3FDAC: 410140f9  ldr x1, [x10]
0x06A3FDB0: 290100b4  cbz x9, #0x6a3fdd4
0x06A3FDB4: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A3FDB8: 4a210091  add x10, x10, #8
0x06A3FDBC: 4b815ff8  ldur x11, [x10, #-8]
0x06A3FDC0: 7f0101eb  cmp x11, x1
0x06A3FDC4: 60010054  b.eq #0x6a3fdf0
0x06A3FDC8: 290500f1  subs x9, x9, #1
0x06A3FDCC: 4a410091  add x10, x10, #0x10
0x06A3FDD0: 61ffff54  b.ne #0x6a3fdbc
0x06A3FDD4: e00314aa  mov x0, x20
0x06A3FDD8: e2031f2a  mov w2, wzr
0x06A3FDDC: 4d5b1c97  bl #0x3156b10
0x06A3FDE0: 07000014  b #0x6a3fdfc
0x06A3FDE4: e8031f2a  mov w8, wzr
0x06A3FDE8: 18008012  movn w24, #0
0x06A3FDEC: 7f000014  b #0x6a3ffe8
0x06A3FDF0: 490180b9  ldrsw x9, [x10]
0x06A3FDF4: 0811098b  add x8, x8, x9, lsl #4
0x06A3FDF8: 00e10491  add x0, x8, #0x138
0x06A3FDFC: 080440a9  ldp x8, x1, [x0]
0x06A3FE00: e00314aa  mov x0, x20
0x06A3FE04: 00013fd6  blr x8
0x06A3FE08: 796000f0  adrp x25, #0x764e000
0x06A3FE0C: 1a6100d0  adrp x26, #0x7661000
0x06A3FE10: 766000f0  adrp x22, #0x764e000
0x06A3FE14: 397344f9  ldr x25, [x25, #0x8e0]
0x06A3FE18: 5aff43f9  ldr x26, [x26, #0x7f8]
0x06A3FE1C: d60647f9  ldr x22, [x22, #0xe08]
0x06A3FE20: 0810b012  movn w8, #0x8080, lsl #16
0x06A3FE24: f40300aa  mov x20, x0
0x06A3FE28: 17008012  movn w23, #0
0x06A3FE2C: bb960090  adrp x27, #0x7d13000
0x06A3FE30: 0001271e  fmov s0, w8
0x06A3FE34: 3c008052  movz w28, #0x1
0x06A3FE38: f803172a  mov w24, w23
0x06A3FE3C: 0c1ca04e  mov v12.16b, v0.16b
0x06A3FE40: d40e00b4  cbz x20, #0x6a40018
0x06A3FE44: 880240f9  ldr x8, [x20]
0x06A3FE48: 210340f9  ldr x1, [x25]
0x06A3FE4C: 095d4279  ldrh w9, [x8, #0x12e]
0x06A3FE50: 290100b4  cbz x9, #0x6a3fe74
0x06A3FE54: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A3FE58: 4a210091  add x10, x10, #8
0x06A3FE5C: 4b815ff8  ldur x11, [x10, #-8]
0x06A3FE60: 7f0101eb  cmp x11, x1
0x06A3FE64: 00010054  b.eq #0x6a3fe84
0x06A3FE68: 290500f1  subs x9, x9, #1
0x06A3FE6C: 4a410091  add x10, x10, #0x10
0x06A3FE70: 61ffff54  b.ne #0x6a3fe5c
0x06A3FE74: e00314aa  mov x0, x20
0x06A3FE78: e2031f2a  mov w2, wzr
0x06A3FE7C: 255b1c97  bl #0x3156b10
0x06A3FE80: 04000014  b #0x6a3fe90
0x06A3FE84: 490180b9  ldrsw x9, [x10]
0x06A3FE88: 0811098b  add x8, x8, x9, lsl #4
0x06A3FE8C: 00e10491  add x0, x8, #0x138
0x06A3FE90: 080440a9  ldp x8, x1, [x0]
0x06A3FE94: e00314aa  mov x0, x20
0x06A3FE98: 00013fd6  blr x8
0x06A3FE9C: 40060036  tbz w0, #0, #0x6a3ff64
0x06A3FEA0: 880240f9  ldr x8, [x20]
0x06A3FEA4: 410340f9  ldr x1, [x26]
0x06A3FEA8: 095d4279  ldrh w9, [x8, #0x12e]
0x06A3FEAC: 290100b4  cbz x9, #0x6a3fed0
0x06A3FEB0: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A3FEB4: 4a210091  add x10, x10, #8
0x06A3FEB8: 4b815ff8  ldur x11, [x10, #-8]
0x06A3FEBC: 7f0101eb  cmp x11, x1
0x06A3FEC0: 00010054  b.eq #0x6a3fee0
0x06A3FEC4: 290500f1  subs x9, x9, #1
0x06A3FEC8: 4a410091  add x10, x10, #0x10
0x06A3FECC: 61ffff54  b.ne #0x6a3feb8
0x06A3FED0: e00314aa  mov x0, x20
0x06A3FED4: e2031f2a  mov w2, wzr
0x06A3FED8: 0e5b1c97  bl #0x3156b10
0x06A3FEDC: 04000014  b #0x6a3feec
0x06A3FEE0: 490180b9  ldrsw x9, [x10]
0x06A3FEE4: 0811098b  add x8, x8, x9, lsl #4
0x06A3FEE8: 00e10491  add x0, x8, #0x138
0x06A3FEEC: 080440a9  ldp x8, x1, [x0]
0x06A3FEF0: e00314aa  mov x0, x20
0x06A3FEF4: 00013fd6  blr x8
0x06A3FEF8: f703002a  mov w23, w0
0x06A3FEFC: e00315aa  mov x0, x21
0x06A3FF00: e103172a  mov w1, w23
0x06A3FF04: 94000094  bl #0x6a40154
0x06A3FF08: a00800b4  cbz x0, #0x6a4001c
0x06A3FF0C: e1031faa  mov x1, xzr
0x06A3FF10: f7a61294  bl #0x6ee9aec
0x06A3FF14: 686b5b39  ldrb w8, [x27, #0x6da]
0x06A3FF18: 0a1ca04e  mov v10.16b, v0.16b
0x06A3FF1C: 2b1ca14e  mov v11.16b, v1.16b
0x06A3FF20: 88000035  cbnz w8, #0x6a3ff30
0x06A3FF24: e00316aa  mov x0, x22
0x06A3FF28: bc021d97  bl #0x3180a18
0x06A3FF2C: 7c6b1b39  strb w28, [x27, #0x6da]
0x06A3FF30: c00240f9  ldr x0, [x22]
0x06A3FF34: 08e040b9  ldr w8, [x0, #0xe0]
0x06A3FF38: 48000035  cbnz w8, #0x6a3ff40
0x06A3FF3C: 14031d97  bl #0x3180b8c
0x06A3FF40: 00392a1e  fsub s0, s8, s10
0x06A3FF44: 21392b1e  fsub s1, s9, s11
0x06A3FF48: 0008201e  fmul s0, s0, s0
0x06A3FF4C: 2108211e  fmul s1, s1, s1
0x06A3FF50: 0028211e  fadd s0, s0, s1
0x06A3FF54: 00c0211e  fsqrt s0, s0
0x06A3FF58: 00202c1e  fcmp s0, s12
0x06A3FF5C: 25f7ff54  b.pl #0x6a3fe40
0x06A3FF60: b6ffff17  b #0x6a3fe38
0x06A3FF64: f5031faa  mov x21, xzr
0x06A3FF68: b6008052  movz w22, #0x5
0x06A3FF6C: 340300b4  cbz x20, #0x6a3ffd0
0x06A3FF70: 6a6000f0  adrp x10, #0x764e000
0x06A3FF74: 880240f9  ldr x8, [x20]
0x06A3FF78: 4a6544f9  ldr x10, [x10, #0x8c8]
0x06A3FF7C: 095d4279  ldrh w9, [x8, #0x12e]
0x06A3FF80: 410140f9  ldr x1, [x10]
0x06A3FF84: 290100b4  cbz x9, #0x6a3ffa8
0x06A3FF88: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A3FF8C: 4a210091  add x10, x10, #8
0x06A3FF90: 4b815ff8  ldur x11, [x10, #-8]
0x06A3FF94: 7f0101eb  cmp x11, x1
0x06A3FF98: 00010054  b.eq #0x6a3ffb8
0x06A3FF9C: 290500f1  subs x9, x9, #1
0x06A3FFA0: 4a410091  add x10, x10, #0x10
0x06A3FFA4: 61ffff54  b.ne #0x6a3ff90
0x06A3FFA8: e00314aa  mov x0, x20
0x06A3FFAC: e2031f2a  mov w2, wzr
0x06A3FFB0: d85a1c97  bl #0x3156b10
0x06A3FFB4: 04000014  b #0x6a3ffc4
0x06A3FFB8: 490180b9  ldrsw x9, [x10]
0x06A3FFBC: 0811098b  add x8, x8, x9, lsl #4
0x06A3FFC0: 00e10491  add x0, x8, #0x138
0x06A3FFC4: 080440a9  ldp x8, x1, [x0]
0x06A3FFC8: e00314aa  mov x0, x20
0x06A3FFCC: 00013fd6  blr x8
0x06A3FFD0: b50200b5  cbnz x21, #0x6a40024
0x06A3FFD4: df160071  cmp w22, #5
0x06A3FFD8: 40000054  b.eq #0x6a3ffe0
0x06A3FFDC: 96000035  cbnz w22, #0x6a3ffec
0x06A3FFE0: 1f070031  cmn w24, #1
0x06A3FFE4: e8079f1a  cset w8, ne
0x06A3FFE8: 780200b9  str w24, [x19]
0x06A3FFEC: f44f47a9  ldp x20, x19, [sp, #0x70]
0x06A3FFF0: f65746a9  ldp x22, x21, [sp, #0x60]
0x06A3FFF4: f85f45a9  ldp x24, x23, [sp, #0x50]
0x06A3FFF8: fa6744a9  ldp x26, x25, [sp, #0x40]
0x06A3FFFC: fc6f43a9  ldp x28, x27, [sp, #0x30]
0x06A40000: fe1740f9  ldr x30, [sp, #0x28]
0x06A40004: e9a3416d  ldp d9, d8, [sp, #0x18]
0x06A40008: ebab406d  ldp d11, d10, [sp, #8]
0x06A4000C: 00010012  and w0, w8, #1
0x06A40010: ec0748fc  ldr d12, [sp], #0x80
0x06A40014: c0035fd6  ret
0x06A40018: 25031d97  bl #0x3180cac
0x06A4001C: 24031d97  bl #0x3180cac
0x06A40020: 23031d97  bl #0x3180cac
0x06A40024: e00315aa  mov x0, x21
0x06A40028: 1f031d97  bl #0x3180ca4
0x06A4002C: 08000014  b #0x6a4004c
0x06A40030: 07000014  b #0x6a4004c
0x06A40034: 06000014  b #0x6a4004c
0x06A40038: 05000014  b #0x6a4004c
0x06A4003C: f60300aa  mov x22, x0
0x06A40040: 18008012  movn w24, #0
0x06A40044: 03000014  b #0x6a40050
0x06A40048: 01000014  b #0x6a4004c
0x06A4004C: f60300aa  mov x22, x0
0x06A40050: 3f040071  cmp w1, #1
0x06A40054: 01010054  b.ne #0x6a40074
0x06A40058: e00316aa  mov x0, x22
0x06A4005C: 2d3a1e94  bl #0x71ce910
0x06A40060: 150040f9  ldr x21, [x0]
0x06A40064: 2f3a1e94  bl #0x71ce920
0x06A40068: f6031f2a  mov w22, wzr
0x06A4006C: 34f8ffb5  cbnz x20, #0x6a3ff70
0x06A40070: d8ffff17  b #0x6a3ffd0
0x06A40074: f5031faa  mov x21, xzr
0x06A40078: 02000014  b #0x6a40080
0x06A4007C: f60300aa  mov x22, x0
0x06A40080: 340300b4  cbz x20, #0x6a400e4
0x06A40084: 6a6000d0  adrp x10, #0x764e000
0x06A40088: 880240f9  ldr x8, [x20]
0x06A4008C: 4a6544f9  ldr x10, [x10, #0x8c8]
0x06A40090: 095d4279  ldrh w9, [x8, #0x12e]
0x06A40094: 410140f9  ldr x1, [x10]
0x06A40098: 290100b4  cbz x9, #0x6a400bc
0x06A4009C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A400A0: 4a210091  add x10, x10, #8
0x06A400A4: 4b815ff8  ldur x11, [x10, #-8]
0x06A400A8: 7f0101eb  cmp x11, x1
0x06A400AC: 00010054  b.eq #0x6a400cc
0x06A400B0: 290500f1  subs x9, x9, #1
0x06A400B4: 4a410091  add x10, x10, #0x10
0x06A400B8: 61ffff54  b.ne #0x6a400a4
0x06A400BC: e00314aa  mov x0, x20
0x06A400C0: e2031f2a  mov w2, wzr
0x06A400C4: 935a1c97  bl #0x3156b10
0x06A400C8: 04000014  b #0x6a400d8
0x06A400CC: 490180b9  ldrsw x9, [x10]
0x06A400D0: 0811098b  add x8, x8, x9, lsl #4
0x06A400D4: 00e10491  add x0, x8, #0x138
0x06A400D8: 080440a9  ldp x8, x1, [x0]
0x06A400DC: e00314aa  mov x0, x20
0x06A400E0: 00013fd6  blr x8
0x06A400E4: 750000b5  cbnz x21, #0x6a400f0
0x06A400E8: e00316aa  mov x0, x22
0x06A400EC: 1b962097  bl #0x3265958
0x06A400F0: e00315aa  mov x0, x21
0x06A400F4: ec021d97  bl #0x3180ca4
0x06A400F8: 07250f97  bl #0x2e09514

; RVA 0x6A401AC | public override IEnumerable<int> GetAllEmptyPositions(IEnumerable<int> occupiedPositions) { }
; bytes=152 sha256=d0d0c9147626bf43e104b0eef6e5223f19c93e8b59cf5a169fa162713d6b300b status=arm64_complete_bound indexed_start=True
0x06A401AC: fe0f1df8  str x30, [sp, #-0x30]!
0x06A401B0: f65701a9  stp x22, x21, [sp, #0x10]
0x06A401B4: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A401B8: 559700d0  adrp x21, #0x7d2a000
0x06A401BC: 766700f0  adrp x22, #0x772f000
0x06A401C0: a8ba5439  ldrb w8, [x21, #0x52e]
0x06A401C4: d6d244f9  ldr x22, [x22, #0x9a0]
0x06A401C8: f30301aa  mov x19, x1
0x06A401CC: f40300aa  mov x20, x0
0x06A401D0: c8000037  tbnz w8, #0, #0x6a401e8
0x06A401D4: 606700f0  adrp x0, #0x772f000
0x06A401D8: 00d044f9  ldr x0, [x0, #0x9a0]
0x06A401DC: 0f021d97  bl #0x3180a18
0x06A401E0: 28008052  movz w8, #0x1
0x06A401E4: a8ba1439  strb w8, [x21, #0x52e]
0x06A401E8: c00240f9  ldr x0, [x22]
0x06A401EC: ad021d97  bl #0x3180ca0
0x06A401F0: e1031faa  mov x1, xzr
0x06A401F4: f50300aa  mov x21, x0
0x06A401F8: 0169b297  bl #0x56da5fc
0x06A401FC: 28008012  movn w8, #0x1
0x06A40200: e0031faa  mov x0, xzr
0x06A40204: a81200b9  str w8, [x21, #0x10]
0x06A40208: b078b297  bl #0x56de4c8
0x06A4020C: a01a00b9  str w0, [x21, #0x18]
0x06A40210: e00315aa  mov x0, x21
0x06A40214: 140c03f8  str x20, [x0, #0x30]!
0x06A40218: e10314aa  mov x1, x20
0x06A4021C: ea011d97  bl #0x31809c4
0x06A40220: e00315aa  mov x0, x21
0x06A40224: 138c02f8  str x19, [x0, #0x28]!
0x06A40228: e10313aa  mov x1, x19
0x06A4022C: e6011d97  bl #0x31809c4
0x06A40230: e00315aa  mov x0, x21
0x06A40234: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A40238: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A4023C: fe0743f8  ldr x30, [sp], #0x30
0x06A40240: c0035fd6  ret

; RVA 0x6A40278 | public override IEnumerable<int> GetAdjacentPositions(int position) { }
; bytes=8 sha256=84e2a6ea9e7b161e674b67b330dd26744acb224af7d16b539426474736b878ba status=arm64_complete_bound indexed_start=True
0x06A40278: 004040bd  ldr s0, [x0, #0x40]
0x06A4027C: 01000014  b #0x6a40280

; RVA 0x6A4031C | public override IEnumerable<int> GetHorizontalVerticalAdjacentPositions(int position) { }
; bytes=8 sha256=84e2a6ea9e7b161e674b67b330dd26744acb224af7d16b539426474736b878ba status=arm64_complete_bound indexed_start=True
0x06A4031C: 004040bd  ldr s0, [x0, #0x40]
0x06A40320: 01000014  b #0x6a40324

; RVA 0x6A403C0 | public override float GetMaxDistanceFromNeighbors() { }
; bytes=8 sha256=3ba343bc33e590ee94e2ff0636eef3b8a89f9575f1a26c566cb6385254238abd status=arm64_complete_bound indexed_start=True
0x06A403C0: 004040bd  ldr s0, [x0, #0x40]
0x06A403C4: c0035fd6  ret

; RVA 0x6A403C8 | public void ShowAdjacentPositions(int position) { }
; bytes=464 sha256=1e6b72fbd9d9ad26237bc2b2cb5c5977276954308f833344959efe829d998b7e status=arm64_complete_bound indexed_start=True
0x06A403C8: ffc300d1  sub sp, sp, #0x30
0x06A403CC: fe5701a9  stp x30, x21, [sp, #0x10]
0x06A403D0: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A403D4: 559700d0  adrp x21, #0x7d2a000
0x06A403D8: a8be5439  ldrb w8, [x21, #0x52f]
0x06A403DC: f303012a  mov w19, w1
0x06A403E0: f40300aa  mov x20, x0
0x06A403E4: c8030037  tbnz w8, #0, #0x6a4045c
0x06A403E8: 606000d0  adrp x0, #0x764e000
0x06A403EC: 00cc42f9  ldr x0, [x0, #0x598]
0x06A403F0: 8a011d97  bl #0x3180a18
0x06A403F4: 006400b0  adrp x0, #0x76c1000
0x06A403F8: 007c46f9  ldr x0, [x0, #0xcf8]
0x06A403FC: 87011d97  bl #0x3180a18
0x06A40400: 606000d0  adrp x0, #0x764e000
0x06A40404: 005843f9  ldr x0, [x0, #0x6b0]
0x06A40408: 84011d97  bl #0x3180a18
0x06A4040C: c06000b0  adrp x0, #0x7659000
0x06A40410: 005c45f9  ldr x0, [x0, #0xab8]
0x06A40414: 81011d97  bl #0x3180a18
0x06A40418: 406100d0  adrp x0, #0x766a000
0x06A4041C: 00f847f9  ldr x0, [x0, #0xff0]
0x06A40420: 7e011d97  bl #0x3180a18
0x06A40424: 606700f0  adrp x0, #0x772f000
0x06A40428: 00dc44f9  ldr x0, [x0, #0x9b8]
0x06A4042C: 7b011d97  bl #0x3180a18
0x06A40430: 606700f0  adrp x0, #0x772f000
0x06A40434: 00e044f9  ldr x0, [x0, #0x9c0]
0x06A40438: 78011d97  bl #0x3180a18
0x06A4043C: 606000d0  adrp x0, #0x764e000
0x06A40440: 005847f9  ldr x0, [x0, #0xeb0]
0x06A40444: 75011d97  bl #0x3180a18
0x06A40448: 606700f0  adrp x0, #0x772f000
0x06A4044C: 00e444f9  ldr x0, [x0, #0x9c8]
0x06A40450: 72011d97  bl #0x3180a18
0x06A40454: 28008052  movz w8, #0x1
0x06A40458: a8be1439  strb w8, [x21, #0x52f]
0x06A4045C: e00314aa  mov x0, x20
0x06A40460: e103132a  mov w1, w19
0x06A40464: 26ffff97  bl #0x6a400fc
0x06A40468: c0040036  tbz w0, #0, #0x6a40500
0x06A4046C: 880240f9  ldr x8, [x20]
0x06A40470: e00314aa  mov x0, x20
0x06A40474: e103132a  mov w1, w19
0x06A40478: 093d41f9  ldr x9, [x8, #0x278]
0x06A4047C: 024141f9  ldr x2, [x8, #0x280]
0x06A40480: 20013fd6  blr x9
0x06A40484: 086400b0  adrp x8, #0x76c1000
0x06A40488: 087d46f9  ldr x8, [x8, #0xcf8]
0x06A4048C: 010140f9  ldr x1, [x8]
0x06A40490: 547e4897  bl #0x3c5fde0
0x06A40494: 000800b4  cbz x0, #0x6a40594
0x06A40498: 081840b9  ldr w8, [x0, #0x18]
0x06A4049C: e10300aa  mov x1, x0
0x06A404A0: 28040034  cbz w8, #0x6a40524
0x06A404A4: 686000d0  adrp x8, #0x764e000
0x06A404A8: 496100d0  adrp x9, #0x766a000
0x06A404AC: 085947f9  ldr x8, [x8, #0xeb0]
0x06A404B0: 29f947f9  ldr x9, [x9, #0xff0]
0x06A404B4: 000140f9  ldr x0, [x8]
0x06A404B8: 220140f9  ldr x2, [x9]
0x06A404BC: 38b04d97  bl #0x3dac59c
0x06A404C0: 686000d0  adrp x8, #0x764e000
0x06A404C4: 085943f9  ldr x8, [x8, #0x6b0]
0x06A404C8: f40300aa  mov x20, x0
0x06A404CC: e1130091  add x1, sp, #4
0x06A404D0: f30700b9  str w19, [sp, #4]
0x06A404D4: 000140f9  ldr x0, [x8]
0x06A404D8: af011d97  bl #0x3180b94
0x06A404DC: 686700f0  adrp x8, #0x772f000
0x06A404E0: 08dd44f9  ldr x8, [x8, #0x9b8]
0x06A404E4: e10300aa  mov x1, x0
0x06A404E8: e20314aa  mov x2, x20
0x06A404EC: e3031faa  mov x3, xzr
0x06A404F0: 080140f9  ldr x8, [x8]
0x06A404F4: e00308aa  mov x0, x8
0x06A404F8: 79deaa97  bl #0x54f7edc
0x06A404FC: 17000014  b #0x6a40558
0x06A40500: 686000d0  adrp x8, #0x764e000
0x06A40504: 085943f9  ldr x8, [x8, #0x6b0]
0x06A40508: e1330091  add x1, sp, #0xc
0x06A4050C: f30f00b9  str w19, [sp, #0xc]
0x06A40510: 000140f9  ldr x0, [x8]
0x06A40514: a0011d97  bl #0x3180b94
0x06A40518: 686700f0  adrp x8, #0x772f000
0x06A4051C: 08e544f9  ldr x8, [x8, #0x9c8]
0x06A40520: 09000014  b #0x6a40544
0x06A40524: 686000d0  adrp x8, #0x764e000
0x06A40528: 085943f9  ldr x8, [x8, #0x6b0]
0x06A4052C: e1230091  add x1, sp, #8
0x06A40530: f30b00b9  str w19, [sp, #8]
0x06A40534: 000140f9  ldr x0, [x8]
0x06A40538: 97011d97  bl #0x3180b94
0x06A4053C: 686700f0  adrp x8, #0x772f000
0x06A40540: 08e144f9  ldr x8, [x8, #0x9c0]
0x06A40544: 080140f9  ldr x8, [x8]
0x06A40548: e10300aa  mov x1, x0
0x06A4054C: e2031faa  mov x2, xzr
0x06A40550: e00308aa  mov x0, x8
0x06A40554: 5bb8aa97  bl #0x54ee6c0
0x06A40558: 686000d0  adrp x8, #0x764e000
0x06A4055C: 08cd42f9  ldr x8, [x8, #0x598]
0x06A40560: f30300aa  mov x19, x0
0x06A40564: 080140f9  ldr x8, [x8]
0x06A40568: 09e140b9  ldr w9, [x8, #0xe0]
0x06A4056C: 69000035  cbnz w9, #0x6a40578
0x06A40570: e00308aa  mov x0, x8
0x06A40574: 86011d97  bl #0x3180b8c
0x06A40578: e00313aa  mov x0, x19
0x06A4057C: e1031faa  mov x1, xzr
0x06A40580: bea61194  bl #0x6eaa078
0x06A40584: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A40588: fe5741a9  ldp x30, x21, [sp, #0x10]
0x06A4058C: ffc30091  add sp, sp, #0x30
0x06A40590: c0035fd6  ret
0x06A40594: c6011d97  bl #0x3180cac

; RVA 0x6A40598 | protected override void PrepareBoard(IEnumerable<int> configuredTiles) { }
; bytes=504 sha256=45de330da59d8ed477b8e3a4e7c4a85389e823e5de6c796742f10a0ed4cb3ffb status=arm64_complete_bound indexed_start=True
0x06A40598: fe0f1bf8  str x30, [sp, #-0x50]!
0x06A4059C: fa6701a9  stp x26, x25, [sp, #0x10]
0x06A405A0: f85f02a9  stp x24, x23, [sp, #0x20]
0x06A405A4: f65703a9  stp x22, x21, [sp, #0x30]
0x06A405A8: f44f04a9  stp x20, x19, [sp, #0x40]
0x06A405AC: 559700d0  adrp x21, #0x7d2a000
0x06A405B0: a8c25439  ldrb w8, [x21, #0x530]
0x06A405B4: f40301aa  mov x20, x1
0x06A405B8: f30300aa  mov x19, x0
0x06A405BC: 68030037  tbnz w8, #0, #0x6a40628
0x06A405C0: 606700f0  adrp x0, #0x772f000
0x06A405C4: 00e844f9  ldr x0, [x0, #0x9d0]
0x06A405C8: 14011d97  bl #0x3180a18
0x06A405CC: 00640090  adrp x0, #0x76c0000
0x06A405D0: 004444f9  ldr x0, [x0, #0x888]
0x06A405D4: 11011d97  bl #0x3180a18
0x06A405D8: 606700f0  adrp x0, #0x772f000
0x06A405DC: 00ec44f9  ldr x0, [x0, #0x9d8]
0x06A405E0: 0e011d97  bl #0x3180a18
0x06A405E4: 606000d0  adrp x0, #0x764e000
0x06A405E8: 006044f9  ldr x0, [x0, #0x8c0]
0x06A405EC: 0b011d97  bl #0x3180a18
0x06A405F0: 606000d0  adrp x0, #0x764e000
0x06A405F4: 008c44f9  ldr x0, [x0, #0x918]
0x06A405F8: 08011d97  bl #0x3180a18
0x06A405FC: 606000d0  adrp x0, #0x764e000
0x06A40600: 008844f9  ldr x0, [x0, #0x910]
0x06A40604: 05011d97  bl #0x3180a18
0x06A40608: 806000b0  adrp x0, #0x7651000
0x06A4060C: 00c842f9  ldr x0, [x0, #0x590]
0x06A40610: 02011d97  bl #0x3180a18
0x06A40614: 806000b0  adrp x0, #0x7651000
0x06A40618: 00cc42f9  ldr x0, [x0, #0x598]
0x06A4061C: ff001d97  bl #0x3180a18
0x06A40620: 28008052  movz w8, #0x1
0x06A40624: a8c21439  strb w8, [x21, #0x530]
0x06A40628: 140100b4  cbz x20, #0x6a40648
0x06A4062C: 686700f0  adrp x8, #0x772f000
0x06A40630: 08ed44f9  ldr x8, [x8, #0x9d8]
0x06A40634: e00314aa  mov x0, x20
0x06A40638: 010140f9  ldr x1, [x8]
0x06A4063C: 407c4897  bl #0x3c5f73c
0x06A40640: f40300aa  mov x20, x0
0x06A40644: 400100b5  cbnz x0, #0x6a4066c
0x06A40648: 686000d0  adrp x8, #0x764e000
0x06A4064C: 088944f9  ldr x8, [x8, #0x910]
0x06A40650: 746000d0  adrp x20, #0x764e000
0x06A40654: 000140f9  ldr x0, [x8]
0x06A40658: 948e44f9  ldr x20, [x20, #0x918]
0x06A4065C: 91011d97  bl #0x3180ca0
0x06A40660: 810240f9  ldr x1, [x20]
0x06A40664: f40300aa  mov x20, x0
0x06A40668: 18dba197  bl #0x52b72c8
0x06A4066C: 681e40f9  ldr x8, [x19, #0x38]
0x06A40670: 280800b4  cbz x8, #0x6a40774
0x06A40674: 776000d0  adrp x23, #0x764e000
0x06A40678: 986000b0  adrp x24, #0x7651000
0x06A4067C: 19640090  adrp x25, #0x76c0000
0x06A40680: 7a6700f0  adrp x26, #0x772f000
0x06A40684: f76244f9  ldr x23, [x23, #0x8c0]
0x06A40688: 18cf42f9  ldr x24, [x24, #0x598]
0x06A4068C: 394744f9  ldr x25, [x25, #0x888]
0x06A40690: 5aeb44f9  ldr x26, [x26, #0x9d0]
0x06A40694: f5031f2a  mov w21, wzr
0x06A40698: 081940b9  ldr w8, [x8, #0x18]
0x06A4069C: bf02086b  cmp w21, w8
0x06A406A0: ca060054  b.ge #0x6a40778
0x06A406A4: 940600b4  cbz x20, #0x6a40774
0x06A406A8: e20240f9  ldr x2, [x23]
0x06A406AC: e00314aa  mov x0, x20
0x06A406B0: e103152a  mov w1, w21
0x06A406B4: c2dca197  bl #0x52b79bc
0x06A406B8: 681e40f9  ldr x8, [x19, #0x38]
0x06A406BC: c80500b4  cbz x8, #0x6a40774
0x06A406C0: 020340f9  ldr x2, [x24]
0x06A406C4: f603002a  mov w22, w0
0x06A406C8: e00308aa  mov x0, x8
0x06A406CC: e103152a  mov w1, w21
0x06A406D0: b30e5897  bl #0x404419c
0x06A406D4: 000500b4  cbz x0, #0x6a40774
0x06A406D8: e1031faa  mov x1, xzr
0x06A406DC: fd6d1294  bl #0x6edbed0
0x06A406E0: a00400b4  cbz x0, #0x6a40774
0x06A406E4: 36030036  tbz w22, #0, #0x6a40748
0x06A406E8: 21008052  movz w1, #0x1
0x06A406EC: e2031faa  mov x2, xzr
0x06A406F0: df7a1294  bl #0x6edf26c
0x06A406F4: 601e40f9  ldr x0, [x19, #0x38]
0x06A406F8: e00300b4  cbz x0, #0x6a40774
0x06A406FC: 020340f9  ldr x2, [x24]
0x06A40700: e103152a  mov w1, w21
0x06A40704: a60e5897  bl #0x404419c
0x06A40708: 600300b4  cbz x0, #0x6a40774
0x06A4070C: 6006452d  ldp s0, s1, [x19, #0x28]
0x06A40710: e1031faa  mov x1, xzr
0x06A40714: f60300aa  mov x22, x0
0x06A40718: 7ea41294  bl #0x6ee9910
0x06A4071C: 601a40f9  ldr x0, [x19, #0x30]
0x06A40720: a00200b4  cbz x0, #0x6a40774
0x06A40724: 230340f9  ldr x3, [x25]
0x06A40728: e103152a  mov w1, w21
0x06A4072C: e20316aa  mov x2, x22
0x06A40730: 05d58f97  bl #0x4e35b44
0x06A40734: e10316aa  mov x1, x22
0x06A40738: e203152a  mov w2, w21
0x06A4073C: e3031f2a  mov w3, wzr
0x06A40740: 14000094  bl #0x6a40790
0x06A40744: 09000014  b #0x6a40768
0x06A40748: e1031f2a  mov w1, wzr
0x06A4074C: e2031faa  mov x2, xzr
0x06A40750: c77a1294  bl #0x6edf26c
0x06A40754: 601a40f9  ldr x0, [x19, #0x30]
0x06A40758: e00000b4  cbz x0, #0x6a40774
0x06A4075C: 420340f9  ldr x2, [x26]
0x06A40760: e103152a  mov w1, w21
0x06A40764: 1fda8f97  bl #0x4e36fe0
0x06A40768: 681e40f9  ldr x8, [x19, #0x38]
0x06A4076C: b5060011  add w21, w21, #1
0x06A40770: 48f9ffb5  cbnz x8, #0x6a40698
0x06A40774: 4e011d97  bl #0x3180cac
0x06A40778: f44f44a9  ldp x20, x19, [sp, #0x40]
0x06A4077C: f65743a9  ldp x22, x21, [sp, #0x30]
0x06A40780: f85f42a9  ldp x24, x23, [sp, #0x20]
0x06A40784: fa6741a9  ldp x26, x25, [sp, #0x10]
0x06A40788: fe0745f8  ldr x30, [sp], #0x50
0x06A4078C: c0035fd6  ret

; RVA 0x6A40790 | private void SetIndexText(Transform tile, int index, bool isActive) { }
; bytes=248 sha256=47ed689e163d71b422a6f0886416fc6a1846c03fefd43e62a4fb843d07df2535 status=arm64_complete_bound indexed_start=True
0x06A40790: ffc300d1  sub sp, sp, #0x30
0x06A40794: fe5701a9  stp x30, x21, [sp, #0x10]
0x06A40798: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A4079C: 559700d0  adrp x21, #0x7d2a000
0x06A407A0: a8c65439  ldrb w8, [x21, #0x531]
0x06A407A4: f303032a  mov w19, w3
0x06A407A8: f40301aa  mov x20, x1
0x06A407AC: e20f00b9  str w2, [sp, #0xc]
0x06A407B0: 28010037  tbnz w8, #0, #0x6a407d4
0x06A407B4: 606700f0  adrp x0, #0x772f000
0x06A407B8: 00f044f9  ldr x0, [x0, #0x9e0]
0x06A407BC: 97001d97  bl #0x3180a18
0x06A407C0: 606000d0  adrp x0, #0x764e000
0x06A407C4: 007042f9  ldr x0, [x0, #0x4e0]
0x06A407C8: 94001d97  bl #0x3180a18
0x06A407CC: 28008052  movz w8, #0x1
0x06A407D0: a8c61439  strb w8, [x21, #0x531]
0x06A407D4: 940500b4  cbz x20, #0x6a40884
0x06A407D8: e00314aa  mov x0, x20
0x06A407DC: e1031faa  mov x1, xzr
0x06A407E0: bc6d1294  bl #0x6edbed0
0x06A407E4: 000500b4  cbz x0, #0x6a40884
0x06A407E8: 686700f0  adrp x8, #0x772f000
0x06A407EC: 08f144f9  ldr x8, [x8, #0x9e0]
0x06A407F0: 746000d0  adrp x20, #0x764e000
0x06A407F4: 21008052  movz w1, #0x1
0x06A407F8: 020140f9  ldr x2, [x8]
0x06A407FC: 947242f9  ldr x20, [x20, #0x4e0]
0x06A40800: 6f244a97  bl #0x3cc99bc
0x06A40804: 880240f9  ldr x8, [x20]
0x06A40808: f40300aa  mov x20, x0
0x06A4080C: 09e140b9  ldr w9, [x8, #0xe0]
0x06A40810: 69000035  cbnz w9, #0x6a4081c
0x06A40814: e00308aa  mov x0, x8
0x06A40818: dd001d97  bl #0x3180b8c
0x06A4081C: e00314aa  mov x0, x20
0x06A40820: e1031faa  mov x1, xzr
0x06A40824: e2031faa  mov x2, xzr
0x06A40828: d3781294  bl #0x6edeb74
0x06A4082C: 40020036  tbz w0, #0, #0x6a40874
0x06A40830: b40200b4  cbz x20, #0x6a40884
0x06A40834: e00314aa  mov x0, x20
0x06A40838: e1031faa  mov x1, xzr
0x06A4083C: a56d1294  bl #0x6edbed0
0x06A40840: 200200b4  cbz x0, #0x6a40884
0x06A40844: 61020012  and w1, w19, #1
0x06A40848: e2031faa  mov x2, xzr
0x06A4084C: 887a1294  bl #0x6edf26c
0x06A40850: e0330091  add x0, sp, #0xc
0x06A40854: e1031faa  mov x1, xzr
0x06A40858: bd4cb197  bl #0x5693b4c
0x06A4085C: 880240f9  ldr x8, [x20]
0x06A40860: e10300aa  mov x1, x0
0x06A40864: e00314aa  mov x0, x20
0x06A40868: 09ad42f9  ldr x9, [x8, #0x558]
0x06A4086C: 02b142f9  ldr x2, [x8, #0x560]
0x06A40870: 20013fd6  blr x9
0x06A40874: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A40878: fe5741a9  ldp x30, x21, [sp, #0x10]
0x06A4087C: ffc30091  add sp, sp, #0x30
0x06A40880: c0035fd6  ret
0x06A40884: 0a011d97  bl #0x3180cac

; RVA 0x6A400FC | private bool IsValidPosition(int position) { }
; bytes=88 sha256=d2237dfb6d1ac66a88051875142b5e1c84b58c49aa53876d190f136082caf065 status=arm64_complete_bound indexed_start=True
0x06A400FC: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A40100: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A40104: 559700d0  adrp x21, #0x7d2a000
0x06A40108: a8ca5439  ldrb w8, [x21, #0x532]
0x06A4010C: f303012a  mov w19, w1
0x06A40110: f40300aa  mov x20, x0
0x06A40114: c8000037  tbnz w8, #0, #0x6a4012c
0x06A40118: 606700f0  adrp x0, #0x772f000
0x06A4011C: 008843f9  ldr x0, [x0, #0x710]
0x06A40120: 3e021d97  bl #0x3180a18
0x06A40124: 28008052  movz w8, #0x1
0x06A40128: a8ca1439  strb w8, [x21, #0x532]
0x06A4012C: 801a40f9  ldr x0, [x20, #0x30]
0x06A40130: 000100b4  cbz x0, #0x6a40150
0x06A40134: 686700f0  adrp x8, #0x772f000
0x06A40138: 088943f9  ldr x8, [x8, #0x710]
0x06A4013C: e103132a  mov w1, w19
0x06A40140: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A40144: 020140f9  ldr x2, [x8]
0x06A40148: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A4014C: 00d78f17  b #0x4e35d4c
0x06A40150: d7021d97  bl #0x3180cac

; RVA 0x6A40154 | private RectTransform GetTile(int position) { }
; bytes=88 sha256=20c6a704407d619b2d6403a1971ac06675dbac0c85f99d416ffefcec76432b01 status=arm64_complete_bound indexed_start=True
0x06A40154: fe0f1df8  str x30, [sp, #-0x30]!
0x06A40158: f65701a9  stp x22, x21, [sp, #0x10]
0x06A4015C: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A40160: 569700d0  adrp x22, #0x7d2a000
0x06A40164: 756700f0  adrp x21, #0x772f000
0x06A40168: c8ce5439  ldrb w8, [x22, #0x533]
0x06A4016C: b5c642f9  ldr x21, [x21, #0x588]
0x06A40170: f303012a  mov w19, w1
0x06A40174: f40300aa  mov x20, x0
0x06A40178: c8000037  tbnz w8, #0, #0x6a40190
0x06A4017C: 606700f0  adrp x0, #0x772f000
0x06A40180: 00c442f9  ldr x0, [x0, #0x588]
0x06A40184: 25021d97  bl #0x3180a18
0x06A40188: 28008052  movz w8, #0x1
0x06A4018C: c8ce1439  strb w8, [x22, #0x533]
0x06A40190: 801a40f9  ldr x0, [x20, #0x30]
0x06A40194: a20240f9  ldr x2, [x21]
0x06A40198: e103132a  mov w1, w19
0x06A4019C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A401A0: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A401A4: fe0743f8  ldr x30, [sp], #0x30
0x06A401A8: d8874617  b #0x3be2108

; RVA 0x6A40280 | private IEnumerable<int> GetTouchingTiles(int position, float maxDistance) { }
; bytes=156 sha256=14c2e3714141dd483db429053ef7220b18e2d205ebbffd3ca8b5e9f3f47684a4 status=arm64_complete_bound indexed_start=True
0x06A40280: e80f1dfc  str d8, [sp, #-0x30]!
0x06A40284: fe0700f9  str x30, [sp, #8]
0x06A40288: f65701a9  stp x22, x21, [sp, #0x10]
0x06A4028C: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A40290: 559700d0  adrp x21, #0x7d2a000
0x06A40294: 766700f0  adrp x22, #0x772f000
0x06A40298: a8d25439  ldrb w8, [x21, #0x534]
0x06A4029C: d6d644f9  ldr x22, [x22, #0x9a8]
0x06A402A0: 081ca04e  mov v8.16b, v0.16b
0x06A402A4: f303012a  mov w19, w1
0x06A402A8: f40300aa  mov x20, x0
0x06A402AC: c8000037  tbnz w8, #0, #0x6a402c4
0x06A402B0: 606700f0  adrp x0, #0x772f000
0x06A402B4: 00d444f9  ldr x0, [x0, #0x9a8]
0x06A402B8: d8011d97  bl #0x3180a18
0x06A402BC: 28008052  movz w8, #0x1
0x06A402C0: a8d21439  strb w8, [x21, #0x534]
0x06A402C4: c00240f9  ldr x0, [x22]
0x06A402C8: 76021d97  bl #0x3180ca0
0x06A402CC: e1031faa  mov x1, xzr
0x06A402D0: f50300aa  mov x21, x0
0x06A402D4: ca68b297  bl #0x56da5fc
0x06A402D8: 28008012  movn w8, #0x1
0x06A402DC: e0031faa  mov x0, xzr
0x06A402E0: a81200b9  str w8, [x21, #0x10]
0x06A402E4: 7978b297  bl #0x56de4c8
0x06A402E8: a01a00b9  str w0, [x21, #0x18]
0x06A402EC: e00315aa  mov x0, x21
0x06A402F0: 140c02f8  str x20, [x0, #0x20]!
0x06A402F4: e10314aa  mov x1, x20
0x06A402F8: b3011d97  bl #0x31809c4
0x06A402FC: b32e00b9  str w19, [x21, #0x2c]
0x06A40300: a83600bd  str s8, [x21, #0x34]
0x06A40304: e00315aa  mov x0, x21
0x06A40308: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A4030C: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A40310: fe0740f9  ldr x30, [sp, #8]
0x06A40314: e80743fc  ldr d8, [sp], #0x30
0x06A40318: c0035fd6  ret

; RVA 0x6A40324 | private IEnumerable<int> GetHorizontalVerticalTouchingTiles(int position, float maxDistance) { }
; bytes=156 sha256=98b7fa28c5530d43063f3d02821beca294afaa36f9f847b275f959a209442478 status=arm64_complete_bound indexed_start=True
0x06A40324: e80f1dfc  str d8, [sp, #-0x30]!
0x06A40328: fe0700f9  str x30, [sp, #8]
0x06A4032C: f65701a9  stp x22, x21, [sp, #0x10]
0x06A40330: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A40334: 559700d0  adrp x21, #0x7d2a000
0x06A40338: 766700f0  adrp x22, #0x772f000
0x06A4033C: a8d65439  ldrb w8, [x21, #0x535]
0x06A40340: d6da44f9  ldr x22, [x22, #0x9b0]
0x06A40344: 081ca04e  mov v8.16b, v0.16b
0x06A40348: f303012a  mov w19, w1
0x06A4034C: f40300aa  mov x20, x0
0x06A40350: c8000037  tbnz w8, #0, #0x6a40368
0x06A40354: 606700f0  adrp x0, #0x772f000
0x06A40358: 00d844f9  ldr x0, [x0, #0x9b0]
0x06A4035C: af011d97  bl #0x3180a18
0x06A40360: 28008052  movz w8, #0x1
0x06A40364: a8d61439  strb w8, [x21, #0x535]
0x06A40368: c00240f9  ldr x0, [x22]
0x06A4036C: 4d021d97  bl #0x3180ca0
0x06A40370: e1031faa  mov x1, xzr
0x06A40374: f50300aa  mov x21, x0
0x06A40378: a168b297  bl #0x56da5fc
0x06A4037C: 28008012  movn w8, #0x1
0x06A40380: e0031faa  mov x0, xzr
0x06A40384: a81200b9  str w8, [x21, #0x10]
0x06A40388: 5078b297  bl #0x56de4c8
0x06A4038C: a01a00b9  str w0, [x21, #0x18]
0x06A40390: e00315aa  mov x0, x21
0x06A40394: 140c02f8  str x20, [x0, #0x20]!
0x06A40398: e10314aa  mov x1, x20
0x06A4039C: 8a011d97  bl #0x31809c4
0x06A403A0: b32e00b9  str w19, [x21, #0x2c]
0x06A403A4: a83600bd  str s8, [x21, #0x34]
0x06A403A8: e00315aa  mov x0, x21
0x06A403AC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A403B0: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A403B4: fe0740f9  ldr x30, [sp, #8]
0x06A403B8: e80743fc  ldr d8, [sp], #0x30
0x06A403BC: c0035fd6  ret

; RVA 0x6A408F0 | private Rect GetTileBounds(RectTransform tile) { }
; bytes=92 sha256=c06141ba5f72f14a55f0f0e8650bb9b90acbb58d4d38a43170e3e01ada50507a status=arm64_complete_bound indexed_start=True
0x06A408F0: e923be6d  stp d9, d8, [sp, #-0x20]!
0x06A408F4: fe4f01a9  stp x30, x19, [sp, #0x10]
0x06A408F8: 810200b4  cbz x1, #0x6a40948
0x06A408FC: f30301aa  mov x19, x1
0x06A40900: e00301aa  mov x0, x1
0x06A40904: e1031faa  mov x1, xzr
0x06A40908: 79a41294  bl #0x6ee9aec
0x06A4090C: e00313aa  mov x0, x19
0x06A40910: e1031faa  mov x1, xzr
0x06A40914: 081ca04e  mov v8.16b, v0.16b
0x06A40918: 291ca14e  mov v9.16b, v1.16b
0x06A4091C: d9a31294  bl #0x6ee9880
0x06A40920: fe4f41a9  ldp x30, x19, [sp, #0x10]
0x06A40924: 021ca04e  mov v2.16b, v0.16b
0x06A40928: 231ca14e  mov v3.16b, v1.16b
0x06A4092C: 00102c1e  fmov s0, #0.50000000
0x06A40930: 4108201e  fmul s1, s2, s0
0x06A40934: 6408201e  fmul s4, s3, s0
0x06A40938: 0039211e  fsub s0, s8, s1
0x06A4093C: 2139241e  fsub s1, s9, s4
0x06A40940: e923c26c  ldp d9, d8, [sp], #0x20
0x06A40944: c0035fd6  ret
0x06A40948: d9001d97  bl #0x3180cac

; RVA 0x6A4094C | public void .ctor() { }
; bytes=140 sha256=44db6da17e0ffd4ef874fafba53b2c6a7c47fc5d55769dc8cbf60f8c41b43464 status=arm64_complete_bound indexed_start=True
0x06A4094C: fe0f1df8  str x30, [sp, #-0x30]!
0x06A40950: f65701a9  stp x22, x21, [sp, #0x10]
0x06A40954: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A40958: 559700d0  adrp x21, #0x7d2a000
0x06A4095C: f66100d0  adrp x22, #0x767e000
0x06A40960: f46100d0  adrp x20, #0x767e000
0x06A40964: a8da5439  ldrb w8, [x21, #0x536]
0x06A40968: d61e41f9  ldr x22, [x22, #0x238]
0x06A4096C: 941a41f9  ldr x20, [x20, #0x230]
0x06A40970: f30300aa  mov x19, x0
0x06A40974: 28010037  tbnz w8, #0, #0x6a40998
0x06A40978: e06100d0  adrp x0, #0x767e000
0x06A4097C: 001841f9  ldr x0, [x0, #0x230]
0x06A40980: 26001d97  bl #0x3180a18
0x06A40984: e06100d0  adrp x0, #0x767e000
0x06A40988: 001c41f9  ldr x0, [x0, #0x238]
0x06A4098C: 23001d97  bl #0x3180a18
0x06A40990: 28008052  movz w8, #0x1
0x06A40994: a8da1439  strb w8, [x21, #0x536]
0x06A40998: c00240f9  ldr x0, [x22]
0x06A4099C: c1001d97  bl #0x3180ca0
0x06A409A0: 810240f9  ldr x1, [x20]
0x06A409A4: f40300aa  mov x20, x0
0x06A409A8: a40c5897  bl #0x4043c38
0x06A409AC: e00313aa  mov x0, x19
0x06A409B0: 148c03f8  str x20, [x0, #0x38]!
0x06A409B4: e10314aa  mov x1, x20
0x06A409B8: 03001d97  bl #0x31809c4
0x06A409BC: 0824a852  movz w8, #0x4120, lsl #16
0x06A409C0: 684200b9  str w8, [x19, #0x40]
0x06A409C4: e00313aa  mov x0, x19
0x06A409C8: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A409CC: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A409D0: fe0743f8  ldr x30, [sp], #0x30
0x06A409D4: 01000014  b #0x6a409d8

