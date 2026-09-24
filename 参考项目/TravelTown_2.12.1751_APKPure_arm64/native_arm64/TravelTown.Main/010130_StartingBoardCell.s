; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 10130 Merger.Services.User.Data.Profile.Game.StartingBoard.StartingBoardCell
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6841B00 | public MergeBoardItem ToMergeBoardItem() { }
; bytes=264 sha256=3a2a52ca84a3abccb198122aacc83ea349aebb1d8ff77fc50a042ce023be444f status=arm64_complete_bound indexed_start=True
0x06841B00: ff8301d1  sub sp, sp, #0x60
0x06841B04: fe6f01a9  stp x30, x27, [sp, #0x10]
0x06841B08: fa6702a9  stp x26, x25, [sp, #0x20]
0x06841B0C: f85f03a9  stp x24, x23, [sp, #0x30]
0x06841B10: f65704a9  stp x22, x21, [sp, #0x40]
0x06841B14: f44f05a9  stp x20, x19, [sp, #0x50]
0x06841B18: 54a70090  adrp x20, #0x7d29000
0x06841B1C: b57600b0  adrp x21, #0x7716000
0x06841B20: 885a4e39  ldrb w8, [x20, #0x396]
0x06841B24: b54647f9  ldr x21, [x21, #0xe88]
0x06841B28: f30300aa  mov x19, x0
0x06841B2C: 28010037  tbnz w8, #0, #0x6841b50
0x06841B30: e07100b0  adrp x0, #0x767e000
0x06841B34: 00e442f9  ldr x0, [x0, #0x5c8]
0x06841B38: b8fb2497  bl #0x3180a18
0x06841B3C: a07600b0  adrp x0, #0x7716000
0x06841B40: 004447f9  ldr x0, [x0, #0xe88]
0x06841B44: b5fb2497  bl #0x3180a18
0x06841B48: 28008052  movz w8, #0x1
0x06841B4C: 885a0e39  strb w8, [x20, #0x396]
0x06841B50: a00240f9  ldr x0, [x21]
0x06841B54: 53fc2497  bl #0x3180ca0
0x06841B58: e1031faa  mov x1, xzr
0x06841B5C: f40300aa  mov x20, x0
0x06841B60: 7541df97  bl #0x6012134
0x06841B64: 140500b4  cbz x20, #0x6841c04
0x06841B68: 610a40f9  ldr x1, [x19, #0x10]
0x06841B6C: fb7100b0  adrp x27, #0x767e000
0x06841B70: 7be742f9  ldr x27, [x27, #0x5c8]
0x06841B74: e00314aa  mov x0, x20
0x06841B78: 010c02f8  str x1, [x0, #0x20]!
0x06841B7C: 92fb2497  bl #0x31809c4
0x06841B80: 600340f9  ldr x0, [x27]
0x06841B84: 75624039  ldrb w21, [x19, #0x18]
0x06841B88: 76664039  ldrb w22, [x19, #0x19]
0x06841B8C: 771e40b9  ldr w23, [x19, #0x1c]
0x06841B90: 78664529  ldp w24, w25, [x19, #0x28]
0x06841B94: 7a3240b9  ldr w26, [x19, #0x30]
0x06841B98: 42fc2497  bl #0x3180ca0
0x06841B9C: e103152a  mov w1, w21
0x06841BA0: e203162a  mov w2, w22
0x06841BA4: e303172a  mov w3, w23
0x06841BA8: e4031f2a  mov w4, wzr
0x06841BAC: e503182a  mov w5, w24
0x06841BB0: e603192a  mov w6, w25
0x06841BB4: e7031a2a  mov w7, w26
0x06841BB8: fb0300aa  mov x27, x0
0x06841BBC: ff0300f9  str xzr, [sp]
0x06841BC0: 033fdf97  bl #0x60117cc
0x06841BC4: e00314aa  mov x0, x20
0x06841BC8: 1b0c01f8  str x27, [x0, #0x10]!
0x06841BCC: e1031baa  mov x1, x27
0x06841BD0: 7dfb2497  bl #0x31809c4
0x06841BD4: 611240f9  ldr x1, [x19, #0x20]
0x06841BD8: e00314aa  mov x0, x20
0x06841BDC: 018c01f8  str x1, [x0, #0x18]!
0x06841BE0: 79fb2497  bl #0x31809c4
0x06841BE4: e00314aa  mov x0, x20
0x06841BE8: f44f45a9  ldp x20, x19, [sp, #0x50]
0x06841BEC: f65744a9  ldp x22, x21, [sp, #0x40]
0x06841BF0: f85f43a9  ldp x24, x23, [sp, #0x30]
0x06841BF4: fa6742a9  ldp x26, x25, [sp, #0x20]
0x06841BF8: fe6f41a9  ldp x30, x27, [sp, #0x10]
0x06841BFC: ff830191  add sp, sp, #0x60
0x06841C00: c0035fd6  ret
0x06841C04: 2afc2497  bl #0x3180cac

; RVA 0x6841C08 | public void .ctor() { }
; bytes=8 sha256=a1fe7f9f96bdd0e5c49dac20064becbe05bffcf181370b4ca10a4ccc9b2e8be5 status=arm64_complete_bound indexed_start=True
0x06841C08: e1031faa  mov x1, xzr
0x06841C0C: 7c62ba17  b #0x56da5fc

