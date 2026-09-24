; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 8293 Merger.Game.ViewModel.ItemViewModelBase
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x662CD48 | public IMergeGraphItem GetGraphFor(IMergeItem mergeItem) { }
; bytes=288 sha256=6a452e8666a02cb50e25a54100977c716fc4d054f73d1bf575a9db19b68fd9e3 status=arm64_complete_bound indexed_start=True
0x0662CD48: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0662CD4C: f44f01a9  stp x20, x19, [sp, #0x10]
0x0662CD50: d5b700f0  adrp x21, #0x7d27000
0x0662CD54: a8327939  ldrb w8, [x21, #0xe4c]
0x0662CD58: f40301aa  mov x20, x1
0x0662CD5C: f30300aa  mov x19, x0
0x0662CD60: 28010037  tbnz w8, #0, #0x662cd84
0x0662CD64: 608200d0  adrp x0, #0x767a000
0x0662CD68: 004c42f9  ldr x0, [x0, #0x498]
0x0662CD6C: 2b4f2d97  bl #0x3180a18
0x0662CD70: 608200b0  adrp x0, #0x7679000
0x0662CD74: 001044f9  ldr x0, [x0, #0x820]
0x0662CD78: 284f2d97  bl #0x3180a18
0x0662CD7C: 28008052  movz w8, #0x1
0x0662CD80: a8323939  strb w8, [x21, #0xe4c]
0x0662CD84: 140700b4  cbz x20, #0x662ce64
0x0662CD88: 6a8200b0  adrp x10, #0x7679000
0x0662CD8C: 880240f9  ldr x8, [x20]
0x0662CD90: 4a1144f9  ldr x10, [x10, #0x820]
0x0662CD94: 736a40f9  ldr x19, [x19, #0xd0]
0x0662CD98: 095d4279  ldrh w9, [x8, #0x12e]
0x0662CD9C: 410140f9  ldr x1, [x10]
0x0662CDA0: 290100b4  cbz x9, #0x662cdc4
0x0662CDA4: 0a5940f9  ldr x10, [x8, #0xb0]
0x0662CDA8: 4a210091  add x10, x10, #8
0x0662CDAC: 4b815ff8  ldur x11, [x10, #-8]
0x0662CDB0: 7f0101eb  cmp x11, x1
0x0662CDB4: 00010054  b.eq #0x662cdd4
0x0662CDB8: 290500f1  subs x9, x9, #1
0x0662CDBC: 4a410091  add x10, x10, #0x10
0x0662CDC0: 61ffff54  b.ne #0x662cdac
0x0662CDC4: e00314aa  mov x0, x20
0x0662CDC8: e2031f2a  mov w2, wzr
0x0662CDCC: 51a72c97  bl #0x3156b10
0x0662CDD0: 04000014  b #0x662cde0
0x0662CDD4: 490180b9  ldrsw x9, [x10]
0x0662CDD8: 0811098b  add x8, x8, x9, lsl #4
0x0662CDDC: 00e10491  add x0, x8, #0x138
0x0662CDE0: 080440a9  ldp x8, x1, [x0]
0x0662CDE4: e00314aa  mov x0, x20
0x0662CDE8: 00013fd6  blr x8
0x0662CDEC: d30300b4  cbz x19, #0x662ce64
0x0662CDF0: 6a8200d0  adrp x10, #0x767a000
0x0662CDF4: 680240f9  ldr x8, [x19]
0x0662CDF8: 4a4d42f9  ldr x10, [x10, #0x498]
0x0662CDFC: f40300aa  mov x20, x0
0x0662CE00: 095d4279  ldrh w9, [x8, #0x12e]
0x0662CE04: 410140f9  ldr x1, [x10]
0x0662CE08: 290100b4  cbz x9, #0x662ce2c
0x0662CE0C: 0a5940f9  ldr x10, [x8, #0xb0]
0x0662CE10: 4a210091  add x10, x10, #8
0x0662CE14: 4b815ff8  ldur x11, [x10, #-8]
0x0662CE18: 7f0101eb  cmp x11, x1
0x0662CE1C: 00010054  b.eq #0x662ce3c
0x0662CE20: 290500f1  subs x9, x9, #1
0x0662CE24: 4a410091  add x10, x10, #0x10
0x0662CE28: 61ffff54  b.ne #0x662ce14
0x0662CE2C: 82008052  movz w2, #0x4
0x0662CE30: e00313aa  mov x0, x19
0x0662CE34: 37a72c97  bl #0x3156b10
0x0662CE38: 05000014  b #0x662ce4c
0x0662CE3C: 490140b9  ldr w9, [x10]
0x0662CE40: 29110011  add w9, w9, #4
0x0662CE44: 08d1298b  add x8, x8, w9, sxtw #4
0x0662CE48: 00e10491  add x0, x8, #0x138
0x0662CE4C: 030840a9  ldp x3, x2, [x0]
0x0662CE50: e00313aa  mov x0, x19
0x0662CE54: e10314aa  mov x1, x20
0x0662CE58: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0662CE5C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0662CE60: 60001fd6  br x3
0x0662CE64: 924f2d97  bl #0x3180cac

; RVA 0x662CE68 | public int GetItemIndex(IMergeItem mergeItem) { }
; bytes=172 sha256=fd7af29be6bd16a3da7e3a95a8a90c4524f8a8a6c51a3d8e01472e1699a511c8 status=arm64_complete_bound indexed_start=True
0x0662CE68: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0662CE6C: f44f01a9  stp x20, x19, [sp, #0x10]
0x0662CE70: d5b700f0  adrp x21, #0x7d27000
0x0662CE74: a8367939  ldrb w8, [x21, #0xe4d]
0x0662CE78: f30301aa  mov x19, x1
0x0662CE7C: f40300aa  mov x20, x0
0x0662CE80: c8000037  tbnz w8, #0, #0x662ce98
0x0662CE84: 608200d0  adrp x0, #0x767a000
0x0662CE88: 004c42f9  ldr x0, [x0, #0x498]
0x0662CE8C: e34e2d97  bl #0x3180a18
0x0662CE90: 28008052  movz w8, #0x1
0x0662CE94: a8363939  strb w8, [x21, #0xe4d]
0x0662CE98: 946a40f9  ldr x20, [x20, #0xd0]
0x0662CE9C: b40300b4  cbz x20, #0x662cf10
0x0662CEA0: 6a8200d0  adrp x10, #0x767a000
0x0662CEA4: 880240f9  ldr x8, [x20]
0x0662CEA8: 4a4d42f9  ldr x10, [x10, #0x498]
0x0662CEAC: 095d4279  ldrh w9, [x8, #0x12e]
0x0662CEB0: 410140f9  ldr x1, [x10]
0x0662CEB4: 290100b4  cbz x9, #0x662ced8
0x0662CEB8: 0a5940f9  ldr x10, [x8, #0xb0]
0x0662CEBC: 4a210091  add x10, x10, #8
0x0662CEC0: 4b815ff8  ldur x11, [x10, #-8]
0x0662CEC4: 7f0101eb  cmp x11, x1
0x0662CEC8: 00010054  b.eq #0x662cee8
0x0662CECC: 290500f1  subs x9, x9, #1
0x0662CED0: 4a410091  add x10, x10, #0x10
0x0662CED4: 61ffff54  b.ne #0x662cec0
0x0662CED8: 62028052  movz w2, #0x13
0x0662CEDC: e00314aa  mov x0, x20
0x0662CEE0: 0ca72c97  bl #0x3156b10
0x0662CEE4: 05000014  b #0x662cef8
0x0662CEE8: 490140b9  ldr w9, [x10]
0x0662CEEC: 294d0011  add w9, w9, #0x13
0x0662CEF0: 08d1298b  add x8, x8, w9, sxtw #4
0x0662CEF4: 00e10491  add x0, x8, #0x138
0x0662CEF8: 030840a9  ldp x3, x2, [x0]
0x0662CEFC: e00314aa  mov x0, x20
0x0662CF00: e10313aa  mov x1, x19
0x0662CF04: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0662CF08: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0662CF0C: 60001fd6  br x3
0x0662CF10: 674f2d97  bl #0x3180cac

; RVA 0x662CF14 | public int GetItemLevel(IMergeItem item) { }
; bytes=288 sha256=eb2559a2bc401189fd06f564847fcc7dc0c8f1150948dbc6f11233b1d9747664 status=arm64_complete_bound indexed_start=True
0x0662CF14: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0662CF18: f44f01a9  stp x20, x19, [sp, #0x10]
0x0662CF1C: d5b700f0  adrp x21, #0x7d27000
0x0662CF20: a83a7939  ldrb w8, [x21, #0xe4e]
0x0662CF24: f40301aa  mov x20, x1
0x0662CF28: f30300aa  mov x19, x0
0x0662CF2C: 28010037  tbnz w8, #0, #0x662cf50
0x0662CF30: 608200d0  adrp x0, #0x767a000
0x0662CF34: 004c42f9  ldr x0, [x0, #0x498]
0x0662CF38: b84e2d97  bl #0x3180a18
0x0662CF3C: 608200b0  adrp x0, #0x7679000
0x0662CF40: 001044f9  ldr x0, [x0, #0x820]
0x0662CF44: b54e2d97  bl #0x3180a18
0x0662CF48: 28008052  movz w8, #0x1
0x0662CF4C: a83a3939  strb w8, [x21, #0xe4e]
0x0662CF50: 140700b4  cbz x20, #0x662d030
0x0662CF54: 6a8200b0  adrp x10, #0x7679000
0x0662CF58: 880240f9  ldr x8, [x20]
0x0662CF5C: 4a1144f9  ldr x10, [x10, #0x820]
0x0662CF60: 736a40f9  ldr x19, [x19, #0xd0]
0x0662CF64: 095d4279  ldrh w9, [x8, #0x12e]
0x0662CF68: 410140f9  ldr x1, [x10]
0x0662CF6C: 290100b4  cbz x9, #0x662cf90
0x0662CF70: 0a5940f9  ldr x10, [x8, #0xb0]
0x0662CF74: 4a210091  add x10, x10, #8
0x0662CF78: 4b815ff8  ldur x11, [x10, #-8]
0x0662CF7C: 7f0101eb  cmp x11, x1
0x0662CF80: 00010054  b.eq #0x662cfa0
0x0662CF84: 290500f1  subs x9, x9, #1
0x0662CF88: 4a410091  add x10, x10, #0x10
0x0662CF8C: 61ffff54  b.ne #0x662cf78
0x0662CF90: e00314aa  mov x0, x20
0x0662CF94: e2031f2a  mov w2, wzr
0x0662CF98: dea62c97  bl #0x3156b10
0x0662CF9C: 04000014  b #0x662cfac
0x0662CFA0: 490180b9  ldrsw x9, [x10]
0x0662CFA4: 0811098b  add x8, x8, x9, lsl #4
0x0662CFA8: 00e10491  add x0, x8, #0x138
0x0662CFAC: 080440a9  ldp x8, x1, [x0]
0x0662CFB0: e00314aa  mov x0, x20
0x0662CFB4: 00013fd6  blr x8
0x0662CFB8: d30300b4  cbz x19, #0x662d030
0x0662CFBC: 6a8200d0  adrp x10, #0x767a000
0x0662CFC0: 680240f9  ldr x8, [x19]
0x0662CFC4: 4a4d42f9  ldr x10, [x10, #0x498]
0x0662CFC8: f40300aa  mov x20, x0
0x0662CFCC: 095d4279  ldrh w9, [x8, #0x12e]
0x0662CFD0: 410140f9  ldr x1, [x10]
0x0662CFD4: 290100b4  cbz x9, #0x662cff8
0x0662CFD8: 0a5940f9  ldr x10, [x8, #0xb0]
0x0662CFDC: 4a210091  add x10, x10, #8
0x0662CFE0: 4b815ff8  ldur x11, [x10, #-8]
0x0662CFE4: 7f0101eb  cmp x11, x1
0x0662CFE8: 00010054  b.eq #0x662d008
0x0662CFEC: 290500f1  subs x9, x9, #1
0x0662CFF0: 4a410091  add x10, x10, #0x10
0x0662CFF4: 61ffff54  b.ne #0x662cfe0
0x0662CFF8: 22038052  movz w2, #0x19
0x0662CFFC: e00313aa  mov x0, x19
0x0662D000: c4a62c97  bl #0x3156b10
0x0662D004: 05000014  b #0x662d018
0x0662D008: 490140b9  ldr w9, [x10]
0x0662D00C: 29650011  add w9, w9, #0x19
0x0662D010: 08d1298b  add x8, x8, w9, sxtw #4
0x0662D014: 00e10491  add x0, x8, #0x138
0x0662D018: 030840a9  ldp x3, x2, [x0]
0x0662D01C: e00313aa  mov x0, x19
0x0662D020: e10314aa  mov x1, x20
0x0662D024: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0662D028: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0662D02C: 60001fd6  br x3
0x0662D030: 1f4f2d97  bl #0x3180cac

; RVA 0x662A660 | public IMergeItem GetNextItem(IMergeItem item) { }
; bytes=288 sha256=e5fdfcaa069ace88fb5ae6ebfd1bd6267613c41b7c4c0fce4ffb1053bd1ee922 status=arm64_complete_bound indexed_start=True
0x0662A660: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0662A664: f44f01a9  stp x20, x19, [sp, #0x10]
0x0662A668: f5b700b0  adrp x21, #0x7d27000
0x0662A66C: a83e7939  ldrb w8, [x21, #0xe4f]
0x0662A670: f40301aa  mov x20, x1
0x0662A674: f30300aa  mov x19, x0
0x0662A678: 28010037  tbnz w8, #0, #0x662a69c
0x0662A67C: 80820090  adrp x0, #0x767a000
0x0662A680: 004c42f9  ldr x0, [x0, #0x498]
0x0662A684: e5582d97  bl #0x3180a18
0x0662A688: 608200f0  adrp x0, #0x7679000
0x0662A68C: 001044f9  ldr x0, [x0, #0x820]
0x0662A690: e2582d97  bl #0x3180a18
0x0662A694: 28008052  movz w8, #0x1
0x0662A698: a83e3939  strb w8, [x21, #0xe4f]
0x0662A69C: 140700b4  cbz x20, #0x662a77c
0x0662A6A0: 6a8200f0  adrp x10, #0x7679000
0x0662A6A4: 880240f9  ldr x8, [x20]
0x0662A6A8: 4a1144f9  ldr x10, [x10, #0x820]
0x0662A6AC: 736a40f9  ldr x19, [x19, #0xd0]
0x0662A6B0: 095d4279  ldrh w9, [x8, #0x12e]
0x0662A6B4: 410140f9  ldr x1, [x10]
0x0662A6B8: 290100b4  cbz x9, #0x662a6dc
0x0662A6BC: 0a5940f9  ldr x10, [x8, #0xb0]
0x0662A6C0: 4a210091  add x10, x10, #8
0x0662A6C4: 4b815ff8  ldur x11, [x10, #-8]
0x0662A6C8: 7f0101eb  cmp x11, x1
0x0662A6CC: 00010054  b.eq #0x662a6ec
0x0662A6D0: 290500f1  subs x9, x9, #1
0x0662A6D4: 4a410091  add x10, x10, #0x10
0x0662A6D8: 61ffff54  b.ne #0x662a6c4
0x0662A6DC: e00314aa  mov x0, x20
0x0662A6E0: e2031f2a  mov w2, wzr
0x0662A6E4: 0bb12c97  bl #0x3156b10
0x0662A6E8: 04000014  b #0x662a6f8
0x0662A6EC: 490180b9  ldrsw x9, [x10]
0x0662A6F0: 0811098b  add x8, x8, x9, lsl #4
0x0662A6F4: 00e10491  add x0, x8, #0x138
0x0662A6F8: 080440a9  ldp x8, x1, [x0]
0x0662A6FC: e00314aa  mov x0, x20
0x0662A700: 00013fd6  blr x8
0x0662A704: d30300b4  cbz x19, #0x662a77c
0x0662A708: 8a820090  adrp x10, #0x767a000
0x0662A70C: 680240f9  ldr x8, [x19]
0x0662A710: 4a4d42f9  ldr x10, [x10, #0x498]
0x0662A714: f40300aa  mov x20, x0
0x0662A718: 095d4279  ldrh w9, [x8, #0x12e]
0x0662A71C: 410140f9  ldr x1, [x10]
0x0662A720: 290100b4  cbz x9, #0x662a744
0x0662A724: 0a5940f9  ldr x10, [x8, #0xb0]
0x0662A728: 4a210091  add x10, x10, #8
0x0662A72C: 4b815ff8  ldur x11, [x10, #-8]
0x0662A730: 7f0101eb  cmp x11, x1
0x0662A734: 00010054  b.eq #0x662a754
0x0662A738: 290500f1  subs x9, x9, #1
0x0662A73C: 4a410091  add x10, x10, #0x10
0x0662A740: 61ffff54  b.ne #0x662a72c
0x0662A744: a2018052  movz w2, #0xd
0x0662A748: e00313aa  mov x0, x19
0x0662A74C: f1b02c97  bl #0x3156b10
0x0662A750: 05000014  b #0x662a764
0x0662A754: 490140b9  ldr w9, [x10]
0x0662A758: 29350011  add w9, w9, #0xd
0x0662A75C: 08d1298b  add x8, x8, w9, sxtw #4
0x0662A760: 00e10491  add x0, x8, #0x138
0x0662A764: 030840a9  ldp x3, x2, [x0]
0x0662A768: e00313aa  mov x0, x19
0x0662A76C: e10314aa  mov x1, x20
0x0662A770: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0662A774: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0662A778: 60001fd6  br x3
0x0662A77C: 4c592d97  bl #0x3180cac

; RVA 0x662D034 | public IMergeItem GetItemFromComponent(IComponentBase component) { }
; bytes=172 sha256=5b961c129ba81017d53d3e02ac6e320c35d2553626b722601e3dfee6e4edb201 status=arm64_complete_bound indexed_start=True
0x0662D034: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0662D038: f44f01a9  stp x20, x19, [sp, #0x10]
0x0662D03C: d5b700d0  adrp x21, #0x7d27000
0x0662D040: a8427939  ldrb w8, [x21, #0xe50]
0x0662D044: f30301aa  mov x19, x1
0x0662D048: f40300aa  mov x20, x0
0x0662D04C: c8000037  tbnz w8, #0, #0x662d064
0x0662D050: 608200b0  adrp x0, #0x767a000
0x0662D054: 004c42f9  ldr x0, [x0, #0x498]
0x0662D058: 704e2d97  bl #0x3180a18
0x0662D05C: 28008052  movz w8, #0x1
0x0662D060: a8423939  strb w8, [x21, #0xe50]
0x0662D064: 946a40f9  ldr x20, [x20, #0xd0]
0x0662D068: b40300b4  cbz x20, #0x662d0dc
0x0662D06C: 6a8200b0  adrp x10, #0x767a000
0x0662D070: 880240f9  ldr x8, [x20]
0x0662D074: 4a4d42f9  ldr x10, [x10, #0x498]
0x0662D078: 095d4279  ldrh w9, [x8, #0x12e]
0x0662D07C: 410140f9  ldr x1, [x10]
0x0662D080: 290100b4  cbz x9, #0x662d0a4
0x0662D084: 0a5940f9  ldr x10, [x8, #0xb0]
0x0662D088: 4a210091  add x10, x10, #8
0x0662D08C: 4b815ff8  ldur x11, [x10, #-8]
0x0662D090: 7f0101eb  cmp x11, x1
0x0662D094: 00010054  b.eq #0x662d0b4
0x0662D098: 290500f1  subs x9, x9, #1
0x0662D09C: 4a410091  add x10, x10, #0x10
0x0662D0A0: 61ffff54  b.ne #0x662d08c
0x0662D0A4: 82028052  movz w2, #0x14
0x0662D0A8: e00314aa  mov x0, x20
0x0662D0AC: 99a62c97  bl #0x3156b10
0x0662D0B0: 05000014  b #0x662d0c4
0x0662D0B4: 490140b9  ldr w9, [x10]
0x0662D0B8: 29510011  add w9, w9, #0x14
0x0662D0BC: 08d1298b  add x8, x8, w9, sxtw #4
0x0662D0C0: 00e10491  add x0, x8, #0x138
0x0662D0C4: 030840a9  ldp x3, x2, [x0]
0x0662D0C8: e00314aa  mov x0, x20
0x0662D0CC: e10313aa  mov x1, x19
0x0662D0D0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0662D0D4: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0662D0D8: 60001fd6  br x3
0x0662D0DC: f44e2d97  bl #0x3180cac

; RVA 0x662D0E0 | public string GetResourceName(PlayerResourceEnum resource) { }
; bytes=232 sha256=53e006ae84582ef42b9547bc53b13228c05708954b9b23952d9ff295de99ae52 status=arm64_complete_bound indexed_start=True
0x0662D0E0: fe0f1df8  str x30, [sp, #-0x30]!
0x0662D0E4: f65701a9  stp x22, x21, [sp, #0x10]
0x0662D0E8: f44f02a9  stp x20, x19, [sp, #0x20]
0x0662D0EC: d6b700d0  adrp x22, #0x7d27000
0x0662D0F0: 358200d0  adrp x21, #0x7673000
0x0662D0F4: c8467939  ldrb w8, [x22, #0xe51]
0x0662D0F8: b55e40f9  ldr x21, [x21, #0xb8]
0x0662D0FC: f403012a  mov w20, w1
0x0662D100: f30300aa  mov x19, x0
0x0662D104: 28010037  tbnz w8, #0, #0x662d128
0x0662D108: 808400b0  adrp x0, #0x76be000
0x0662D10C: 005446f9  ldr x0, [x0, #0xca8]
0x0662D110: 424e2d97  bl #0x3180a18
0x0662D114: 208200d0  adrp x0, #0x7673000
0x0662D118: 005c40f9  ldr x0, [x0, #0xb8]
0x0662D11C: 3f4e2d97  bl #0x3180a18
0x0662D120: 28008052  movz w8, #0x1
0x0662D124: c8463939  strb w8, [x22, #0xe51]
0x0662D128: a00240f9  ldr x0, [x21]
0x0662D12C: 736240f9  ldr x19, [x19, #0xc0]
0x0662D130: 08e040b9  ldr w8, [x0, #0xe0]
0x0662D134: 48000035  cbnz w8, #0x662d13c
0x0662D138: 954e2d97  bl #0x3180b8c
0x0662D13C: e003142a  mov w0, w20
0x0662D140: e1031faa  mov x1, xzr
0x0662D144: 777eec97  bl #0x614cb20
0x0662D148: f30300b4  cbz x19, #0x662d1c4
0x0662D14C: 8a8400b0  adrp x10, #0x76be000
0x0662D150: 680240f9  ldr x8, [x19]
0x0662D154: 4a5546f9  ldr x10, [x10, #0xca8]
0x0662D158: f40300aa  mov x20, x0
0x0662D15C: 095d4279  ldrh w9, [x8, #0x12e]
0x0662D160: 410140f9  ldr x1, [x10]
0x0662D164: 290100b4  cbz x9, #0x662d188
0x0662D168: 0a5940f9  ldr x10, [x8, #0xb0]
0x0662D16C: 4a210091  add x10, x10, #8
0x0662D170: 4b815ff8  ldur x11, [x10, #-8]
0x0662D174: 7f0101eb  cmp x11, x1
0x0662D178: 00010054  b.eq #0x662d198
0x0662D17C: 290500f1  subs x9, x9, #1
0x0662D180: 4a410091  add x10, x10, #0x10
0x0662D184: 61ffff54  b.ne #0x662d170
0x0662D188: 22008052  movz w2, #0x1
0x0662D18C: e00313aa  mov x0, x19
0x0662D190: 60a62c97  bl #0x3156b10
0x0662D194: 05000014  b #0x662d1a8
0x0662D198: 490140b9  ldr w9, [x10]
0x0662D19C: 29050011  add w9, w9, #1
0x0662D1A0: 08d1298b  add x8, x8, w9, sxtw #4
0x0662D1A4: 00e10491  add x0, x8, #0x138
0x0662D1A8: 030840a9  ldp x3, x2, [x0]
0x0662D1AC: e00313aa  mov x0, x19
0x0662D1B0: e10314aa  mov x1, x20
0x0662D1B4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0662D1B8: f65741a9  ldp x22, x21, [sp, #0x10]
0x0662D1BC: fe0743f8  ldr x30, [sp], #0x30
0x0662D1C0: 60001fd6  br x3
0x0662D1C4: ba4e2d97  bl #0x3180cac

; RVA 0x662D1C8 | public string GetResourceSpriteTag(PlayerResourceEnum resource) { }
; bytes=232 sha256=d0eb52b111114af32aec5ac4a611da79860c6fd40bde1ab1be0db60d3375ae54 status=arm64_complete_bound indexed_start=True
0x0662D1C8: fe0f1df8  str x30, [sp, #-0x30]!
0x0662D1CC: f65701a9  stp x22, x21, [sp, #0x10]
0x0662D1D0: f44f02a9  stp x20, x19, [sp, #0x20]
0x0662D1D4: d6b700d0  adrp x22, #0x7d27000
0x0662D1D8: 358200d0  adrp x21, #0x7673000
0x0662D1DC: c84a7939  ldrb w8, [x22, #0xe52]
0x0662D1E0: b55e40f9  ldr x21, [x21, #0xb8]
0x0662D1E4: f403012a  mov w20, w1
0x0662D1E8: f30300aa  mov x19, x0
0x0662D1EC: 28010037  tbnz w8, #0, #0x662d210
0x0662D1F0: 808400b0  adrp x0, #0x76be000
0x0662D1F4: 005446f9  ldr x0, [x0, #0xca8]
0x0662D1F8: 084e2d97  bl #0x3180a18
0x0662D1FC: 208200d0  adrp x0, #0x7673000
0x0662D200: 005c40f9  ldr x0, [x0, #0xb8]
0x0662D204: 054e2d97  bl #0x3180a18
0x0662D208: 28008052  movz w8, #0x1
0x0662D20C: c84a3939  strb w8, [x22, #0xe52]
0x0662D210: a00240f9  ldr x0, [x21]
0x0662D214: 736240f9  ldr x19, [x19, #0xc0]
0x0662D218: 08e040b9  ldr w8, [x0, #0xe0]
0x0662D21C: 48000035  cbnz w8, #0x662d224
0x0662D220: 5b4e2d97  bl #0x3180b8c
0x0662D224: e003142a  mov w0, w20
0x0662D228: e1031faa  mov x1, xzr
0x0662D22C: 3d7eec97  bl #0x614cb20
0x0662D230: f30300b4  cbz x19, #0x662d2ac
0x0662D234: 8a8400b0  adrp x10, #0x76be000
0x0662D238: 680240f9  ldr x8, [x19]
0x0662D23C: 4a5546f9  ldr x10, [x10, #0xca8]
0x0662D240: f40300aa  mov x20, x0
0x0662D244: 095d4279  ldrh w9, [x8, #0x12e]
0x0662D248: 410140f9  ldr x1, [x10]
0x0662D24C: 290100b4  cbz x9, #0x662d270
0x0662D250: 0a5940f9  ldr x10, [x8, #0xb0]
0x0662D254: 4a210091  add x10, x10, #8
0x0662D258: 4b815ff8  ldur x11, [x10, #-8]
0x0662D25C: 7f0101eb  cmp x11, x1
0x0662D260: 00010054  b.eq #0x662d280
0x0662D264: 290500f1  subs x9, x9, #1
0x0662D268: 4a410091  add x10, x10, #0x10
0x0662D26C: 61ffff54  b.ne #0x662d258
0x0662D270: 42008052  movz w2, #0x2
0x0662D274: e00313aa  mov x0, x19
0x0662D278: 26a62c97  bl #0x3156b10
0x0662D27C: 05000014  b #0x662d290
0x0662D280: 490140b9  ldr w9, [x10]
0x0662D284: 29090011  add w9, w9, #2
0x0662D288: 08d1298b  add x8, x8, w9, sxtw #4
0x0662D28C: 00e10491  add x0, x8, #0x138
0x0662D290: 030840a9  ldp x3, x2, [x0]
0x0662D294: e00313aa  mov x0, x19
0x0662D298: e10314aa  mov x1, x20
0x0662D29C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0662D2A0: f65741a9  ldp x22, x21, [sp, #0x10]
0x0662D2A4: fe0743f8  ldr x30, [sp], #0x30
0x0662D2A8: 60001fd6  br x3
0x0662D2AC: 804e2d97  bl #0x3180cac

; RVA 0x662D2B0 | public bool IsCollected(IMergeItem mergeItem) { }
; bytes=284 sha256=92178d6d9af55a075f297215c0dcb9d820c1d60ba9d0e654351d494b1028d61a status=arm64_complete_bound indexed_start=True
0x0662D2B0: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0662D2B4: f44f01a9  stp x20, x19, [sp, #0x10]
0x0662D2B8: d5b700d0  adrp x21, #0x7d27000
0x0662D2BC: a84e7939  ldrb w8, [x21, #0xe53]
0x0662D2C0: f40301aa  mov x20, x1
0x0662D2C4: f30300aa  mov x19, x0
0x0662D2C8: 28010037  tbnz w8, #0, #0x662d2ec
0x0662D2CC: 408500f0  adrp x0, #0x76d8000
0x0662D2D0: 00bc47f9  ldr x0, [x0, #0xf78]
0x0662D2D4: d14d2d97  bl #0x3180a18
0x0662D2D8: 60820090  adrp x0, #0x7679000
0x0662D2DC: 001044f9  ldr x0, [x0, #0x820]
0x0662D2E0: ce4d2d97  bl #0x3180a18
0x0662D2E4: 28008052  movz w8, #0x1
0x0662D2E8: a84e3939  strb w8, [x21, #0xe53]
0x0662D2EC: f40600b4  cbz x20, #0x662d3c8
0x0662D2F0: 6a820090  adrp x10, #0x7679000
0x0662D2F4: 880240f9  ldr x8, [x20]
0x0662D2F8: 4a1144f9  ldr x10, [x10, #0x820]
0x0662D2FC: 736e40f9  ldr x19, [x19, #0xd8]
0x0662D300: 095d4279  ldrh w9, [x8, #0x12e]
0x0662D304: 410140f9  ldr x1, [x10]
0x0662D308: 290100b4  cbz x9, #0x662d32c
0x0662D30C: 0a5940f9  ldr x10, [x8, #0xb0]
0x0662D310: 4a210091  add x10, x10, #8
0x0662D314: 4b815ff8  ldur x11, [x10, #-8]
0x0662D318: 7f0101eb  cmp x11, x1
0x0662D31C: 00010054  b.eq #0x662d33c
0x0662D320: 290500f1  subs x9, x9, #1
0x0662D324: 4a410091  add x10, x10, #0x10
0x0662D328: 61ffff54  b.ne #0x662d314
0x0662D32C: e00314aa  mov x0, x20
0x0662D330: e2031f2a  mov w2, wzr
0x0662D334: f7a52c97  bl #0x3156b10
0x0662D338: 04000014  b #0x662d348
0x0662D33C: 490180b9  ldrsw x9, [x10]
0x0662D340: 0811098b  add x8, x8, x9, lsl #4
0x0662D344: 00e10491  add x0, x8, #0x138
0x0662D348: 080440a9  ldp x8, x1, [x0]
0x0662D34C: e00314aa  mov x0, x20
0x0662D350: 00013fd6  blr x8
0x0662D354: b30300b4  cbz x19, #0x662d3c8
0x0662D358: 4a8500f0  adrp x10, #0x76d8000
0x0662D35C: 680240f9  ldr x8, [x19]
0x0662D360: 4abd47f9  ldr x10, [x10, #0xf78]
0x0662D364: f40300aa  mov x20, x0
0x0662D368: 095d4279  ldrh w9, [x8, #0x12e]
0x0662D36C: 410140f9  ldr x1, [x10]
0x0662D370: 290100b4  cbz x9, #0x662d394
0x0662D374: 0a5940f9  ldr x10, [x8, #0xb0]
0x0662D378: 4a210091  add x10, x10, #8
0x0662D37C: 4b815ff8  ldur x11, [x10, #-8]
0x0662D380: 7f0101eb  cmp x11, x1
0x0662D384: 00010054  b.eq #0x662d3a4
0x0662D388: 290500f1  subs x9, x9, #1
0x0662D38C: 4a410091  add x10, x10, #0x10
0x0662D390: 61ffff54  b.ne #0x662d37c
0x0662D394: e00313aa  mov x0, x19
0x0662D398: e2031f2a  mov w2, wzr
0x0662D39C: dda52c97  bl #0x3156b10
0x0662D3A0: 04000014  b #0x662d3b0
0x0662D3A4: 490180b9  ldrsw x9, [x10]
0x0662D3A8: 0811098b  add x8, x8, x9, lsl #4
0x0662D3AC: 00e10491  add x0, x8, #0x138
0x0662D3B0: 030840a9  ldp x3, x2, [x0]
0x0662D3B4: e00313aa  mov x0, x19
0x0662D3B8: e10314aa  mov x1, x20
0x0662D3BC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0662D3C0: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0662D3C4: 60001fd6  br x3
0x0662D3C8: 394e2d97  bl #0x3180cac

; RVA 0x662AA38 | public void .ctor() { }
; bytes=8 sha256=cdda4fa834c806b27227a2f9b50f9c0548339e44d16b94f0792bb5c4e2ef3cc0 status=arm64_complete_bound indexed_start=True
0x0662AA38: e1031faa  mov x1, xzr
0x0662AA3C: 9ea1eb17  b #0x61130b4

