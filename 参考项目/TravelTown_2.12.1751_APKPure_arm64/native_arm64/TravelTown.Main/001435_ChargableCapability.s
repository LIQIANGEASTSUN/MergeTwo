; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1435 MergeEngine.Configuration.Capabilities.ChargableCapability
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x600FA34 | public RemoteSpriteLocation[] GetStateSpriteAssets() { }
; bytes=744 sha256=da02efe3fb6a48e20b75cbf2013c50c6e35ee212c9b35fa872d40c5163093f73 status=arm64_complete_bound indexed_start=True
0x0600FA34: ff0302d1  sub sp, sp, #0x80
0x0600FA38: fd7b02a9  stp x29, x30, [sp, #0x20]
0x0600FA3C: fc6f03a9  stp x28, x27, [sp, #0x30]
0x0600FA40: fa6704a9  stp x26, x25, [sp, #0x40]
0x0600FA44: f85f05a9  stp x24, x23, [sp, #0x50]
0x0600FA48: f65706a9  stp x22, x21, [sp, #0x60]
0x0600FA4C: f44f07a9  stp x20, x19, [sp, #0x70]
0x0600FA50: b4e80090  adrp x20, #0x7d23000
0x0600FA54: 884e5f39  ldrb w8, [x20, #0x7d3]
0x0600FA58: f30300aa  mov x19, x0
0x0600FA5C: 28040037  tbnz w8, #0, #0x600fae0
0x0600FA60: e0b200d0  adrp x0, #0x766d000
0x0600FA64: 006c46f9  ldr x0, [x0, #0xcd8]
0x0600FA68: ecc34597  bl #0x3180a18
0x0600FA6C: e0b100f0  adrp x0, #0x764e000
0x0600FA70: 005843f9  ldr x0, [x0, #0x6b0]
0x0600FA74: e9c34597  bl #0x3180a18
0x0600FA78: a0b500b0  adrp x0, #0x76c4000
0x0600FA7C: 008442f9  ldr x0, [x0, #0x508]
0x0600FA80: e6c34597  bl #0x3180a18
0x0600FA84: 00b60090  adrp x0, #0x76cf000
0x0600FA88: 000c42f9  ldr x0, [x0, #0x418]
0x0600FA8C: e3c34597  bl #0x3180a18
0x0600FA90: 40b300d0  adrp x0, #0x7679000
0x0600FA94: 007844f9  ldr x0, [x0, #0x8f0]
0x0600FA98: e0c34597  bl #0x3180a18
0x0600FA9C: 00b60090  adrp x0, #0x76cf000
0x0600FAA0: 001042f9  ldr x0, [x0, #0x420]
0x0600FAA4: ddc34597  bl #0x3180a18
0x0600FAA8: 00b60090  adrp x0, #0x76cf000
0x0600FAAC: 001442f9  ldr x0, [x0, #0x428]
0x0600FAB0: dac34597  bl #0x3180a18
0x0600FAB4: 00b60090  adrp x0, #0x76cf000
0x0600FAB8: 001842f9  ldr x0, [x0, #0x430]
0x0600FABC: d7c34597  bl #0x3180a18
0x0600FAC0: 00b60090  adrp x0, #0x76cf000
0x0600FAC4: 001c42f9  ldr x0, [x0, #0x438]
0x0600FAC8: d4c34597  bl #0x3180a18
0x0600FACC: 00b20090  adrp x0, #0x764f000
0x0600FAD0: 00b443f9  ldr x0, [x0, #0x768]
0x0600FAD4: d1c34597  bl #0x3180a18
0x0600FAD8: 28008052  movz w8, #0x1
0x0600FADC: 884e1f39  strb w8, [x20, #0x7d3]
0x0600FAE0: f40313aa  mov x20, x19
0x0600FAE4: 800e42f8  ldr x0, [x20, #0x20]!
0x0600FAE8: 201000b5  cbnz x0, #0x600fcec
0x0600FAEC: 680e40f9  ldr x8, [x19, #0x18]
0x0600FAF0: c80f00b4  cbz x8, #0x600fce8
0x0600FAF4: 09b60090  adrp x9, #0x76cf000
0x0600FAF8: 290d42f9  ldr x9, [x9, #0x418]
0x0600FAFC: 011940b9  ldr w1, [x8, #0x18]
0x0600FB00: 200140f9  ldr x0, [x9]
0x0600FB04: fec34597  bl #0x3180afc
0x0600FB08: e10300aa  mov x1, x0
0x0600FB0C: 601200f9  str x0, [x19, #0x20]
0x0600FB10: e00314aa  mov x0, x20
0x0600FB14: acc34597  bl #0x31809c4
0x0600FB18: 680e40f9  ldr x8, [x19, #0x18]
0x0600FB1C: 080e00b4  cbz x8, #0x600fcdc
0x0600FB20: fbb200d0  adrp x27, #0x766d000
0x0600FB24: 1cb60090  adrp x28, #0x76cf000
0x0600FB28: 1db60090  adrp x29, #0x76cf000
0x0600FB2C: b9b500b0  adrp x25, #0x76c4000
0x0600FB30: 7b6f46f9  ldr x27, [x27, #0xcd8]
0x0600FB34: 9c1f42f9  ldr x28, [x28, #0x438]
0x0600FB38: bd1742f9  ldr x29, [x29, #0x428]
0x0600FB3C: 398742f9  ldr x25, [x25, #0x508]
0x0600FB40: f7031faa  mov x23, xzr
0x0600FB44: 18048052  movz w24, #0x20
0x0600FB48: ba088052  movz w26, #0x45
0x0600FB4C: 091940b9  ldr w9, [x8, #0x18]
0x0600FB50: ffc229eb  cmp x23, w9, sxtw
0x0600FB54: 6a0c0054  b.ge #0x600fce0
0x0600FB58: ff0209eb  cmp x23, x9
0x0600FB5C: 820d0054  b.hs #0x600fd0c
0x0600FB60: 080d178b  add x8, x8, x23, lsl #3
0x0600FB64: 151140f9  ldr x21, [x8, #0x20]
0x0600FB68: e1031faa  mov x1, xzr
0x0600FB6C: e00315aa  mov x0, x21
0x0600FB70: cf9fd397  bl #0x54f7aac
0x0600FB74: c0060036  tbz w0, #0, #0x600fc4c
0x0600FB78: e8b100f0  adrp x8, #0x764e000
0x0600FB7C: 085943f9  ldr x8, [x8, #0x6b0]
0x0600FB80: e1730091  add x1, sp, #0x1c
0x0600FB84: f71f00b9  str w23, [sp, #0x1c]
0x0600FB88: 000140f9  ldr x0, [x8]
0x0600FB8C: 02c44597  bl #0x3180b94
0x0600FB90: 08b60090  adrp x8, #0x76cf000
0x0600FB94: 081142f9  ldr x8, [x8, #0x420]
0x0600FB98: e10300aa  mov x1, x0
0x0600FB9C: e2031faa  mov x2, xzr
0x0600FBA0: 080140f9  ldr x8, [x8]
0x0600FBA4: e00308aa  mov x0, x8
0x0600FBA8: c67ad397  bl #0x54ee6c0
0x0600FBAC: 08b20090  adrp x8, #0x764f000
0x0600FBB0: 610e40f9  ldr x1, [x19, #0x18]
0x0600FBB4: 08b543f9  ldr x8, [x8, #0x768]
0x0600FBB8: f50300aa  mov x21, x0
0x0600FBBC: e2031faa  mov x2, xzr
0x0600FBC0: 080140f9  ldr x8, [x8]
0x0600FBC4: e00308aa  mov x0, x8
0x0600FBC8: e0a2d397  bl #0x54f8748
0x0600FBCC: 08b60090  adrp x8, #0x76cf000
0x0600FBD0: 081942f9  ldr x8, [x8, #0x430]
0x0600FBD4: e20300aa  mov x2, x0
0x0600FBD8: e00315aa  mov x0, x21
0x0600FBDC: e3031faa  mov x3, xzr
0x0600FBE0: 010140f9  ldr x1, [x8]
0x0600FBE4: 559ed397  bl #0x54f7538
0x0600FBE8: 48b300d0  adrp x8, #0x7679000
0x0600FBEC: 087944f9  ldr x8, [x8, #0x8f0]
0x0600FBF0: f50300aa  mov x21, x0
0x0600FBF4: e0030091  mov x0, sp
0x0600FBF8: e1031faa  mov x1, xzr
0x0600FBFC: 090140f9  ldr x9, [x8]
0x0600FC00: 08008092  movn x8, #0
0x0600FC04: fa1300b9  str w26, [sp, #0x10]
0x0600FC08: e92300a9  stp x9, x8, [sp]
0x0600FC0C: b6f6da97  bl #0x56cd6e4
0x0600FC10: 680340f9  ldr x8, [x27]
0x0600FC14: f60300aa  mov x22, x0
0x0600FC18: 09e140b9  ldr w9, [x8, #0xe0]
0x0600FC1C: 69000035  cbnz w9, #0x600fc28
0x0600FC20: e00308aa  mov x0, x8
0x0600FC24: dac34597  bl #0x3180b8c
0x0600FC28: 830340f9  ldr x3, [x28]
0x0600FC2C: a40340f9  ldr x4, [x29]
0x0600FC30: e00315aa  mov x0, x21
0x0600FC34: e10316aa  mov x1, x22
0x0600FC38: e2031faa  mov x2, xzr
0x0600FC3C: e5031faa  mov x5, xzr
0x0600FC40: e6031faa  mov x6, xzr
0x0600FC44: fc71d197  bl #0x546c434
0x0600FC48: 21000014  b #0x600fccc
0x0600FC4C: 200340f9  ldr x0, [x25]
0x0600FC50: 960240f9  ldr x22, [x20]
0x0600FC54: 08e040b9  ldr w8, [x0, #0xe0]
0x0600FC58: 68000035  cbnz w8, #0x600fc64
0x0600FC5C: ccc34597  bl #0x3180b8c
0x0600FC60: 200340f9  ldr x0, [x25]
0x0600FC64: 085c40f9  ldr x8, [x0, #0xb8]
0x0600FC68: 000140f9  ldr x0, [x8]
0x0600FC6C: 800300b4  cbz x0, #0x600fcdc
0x0600FC70: 080040f9  ldr x8, [x0]
0x0600FC74: 095541f9  ldr x9, [x8, #0x2a8]
0x0600FC78: 015941f9  ldr x1, [x8, #0x2b0]
0x0600FC7C: 20013fd6  blr x9
0x0600FC80: e10300aa  mov x1, x0
0x0600FC84: e00315aa  mov x0, x21
0x0600FC88: e2031faa  mov x2, xzr
0x0600FC8C: c92be297  bl #0x589abb0
0x0600FC90: 760200b4  cbz x22, #0x600fcdc
0x0600FC94: f50300aa  mov x21, x0
0x0600FC98: c00000b4  cbz x0, #0x600fcb0
0x0600FC9C: c80240f9  ldr x8, [x22]
0x0600FCA0: e00315aa  mov x0, x21
0x0600FCA4: 012140f9  ldr x1, [x8, #0x40]
0x0600FCA8: bac34597  bl #0x3180b90
0x0600FCAC: 200300b4  cbz x0, #0x600fd10
0x0600FCB0: c81a40b9  ldr w8, [x22, #0x18]
0x0600FCB4: ff0208eb  cmp x23, x8
0x0600FCB8: a2020054  b.hs #0x600fd0c
0x0600FCBC: c002188b  add x0, x22, x24
0x0600FCC0: e10315aa  mov x1, x21
0x0600FCC4: 150000f9  str x21, [x0]
0x0600FCC8: 3fc34597  bl #0x31809c4
0x0600FCCC: 680e40f9  ldr x8, [x19, #0x18]
0x0600FCD0: f7060091  add x23, x23, #1
0x0600FCD4: 18230091  add x24, x24, #8
0x0600FCD8: a8f3ffb5  cbnz x8, #0x600fb4c
0x0600FCDC: f4c34597  bl #0x3180cac
0x0600FCE0: 800240f9  ldr x0, [x20]
0x0600FCE4: 02000014  b #0x600fcec
0x0600FCE8: e0031faa  mov x0, xzr
0x0600FCEC: f44f47a9  ldp x20, x19, [sp, #0x70]
0x0600FCF0: f65746a9  ldp x22, x21, [sp, #0x60]
0x0600FCF4: f85f45a9  ldp x24, x23, [sp, #0x50]
0x0600FCF8: fa6744a9  ldp x26, x25, [sp, #0x40]
0x0600FCFC: fc6f43a9  ldp x28, x27, [sp, #0x30]
0x0600FD00: fd7b42a9  ldp x29, x30, [sp, #0x20]
0x0600FD04: ff030291  add sp, sp, #0x80
0x0600FD08: c0035fd6  ret
0x0600FD0C: eac34597  bl #0x3180cb4
0x0600FD10: f0c34597  bl #0x3180cd0
0x0600FD14: e1031faa  mov x1, xzr
0x0600FD18: 99c34597  bl #0x3180b7c

; RVA 0x600FD1C | public void .ctor() { }
; bytes=8 sha256=5b5d25b46765d3e2af2f0a74a3133962299e73e922b3a3b5bc85ac4301a8d795 status=arm64_complete_bound indexed_start=True
0x0600FD1C: e1031faa  mov x1, xzr
0x0600FD20: 372adb17  b #0x56da5fc

