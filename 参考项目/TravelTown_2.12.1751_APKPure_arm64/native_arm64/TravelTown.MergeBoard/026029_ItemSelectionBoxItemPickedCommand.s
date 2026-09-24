; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 26029 Merger.MergeBoard.Commands.ItemSelectionBoxItemPickedCommand
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9E918 | public override void Execute(ItemSelectionBoxItemSelectedSignal signal) { }
; bytes=676 sha256=591386ac2be60ee7c4a8bd438a31279ae3982592def9d17739d1627802a59f0a status=arm64_complete_bound indexed_start=True
0x06A9E918: fe0f1cf8  str x30, [sp, #-0x40]!
0x06A9E91C: f85f01a9  stp x24, x23, [sp, #0x10]
0x06A9E920: f65702a9  stp x22, x21, [sp, #0x20]
0x06A9E924: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A9E928: 75940090  adrp x21, #0x7d2a000
0x06A9E92C: a8066239  ldrb w8, [x21, #0x881]
0x06A9E930: f40301aa  mov x20, x1
0x06A9E934: f30300aa  mov x19, x0
0x06A9E938: a8020037  tbnz w8, #0, #0x6a9e98c
0x06A9E93C: a05e0090  adrp x0, #0x7672000
0x06A9E940: 006043f9  ldr x0, [x0, #0x6c0]
0x06A9E944: 35881b97  bl #0x3180a18
0x06A9E948: e05e0090  adrp x0, #0x767a000
0x06A9E94C: 004c42f9  ldr x0, [x0, #0x498]
0x06A9E950: 32881b97  bl #0x3180a18
0x06A9E954: a0640090  adrp x0, #0x7732000
0x06A9E958: 000044f9  ldr x0, [x0, #0x800]
0x06A9E95C: 2f881b97  bl #0x3180a18
0x06A9E960: a05e00d0  adrp x0, #0x7674000
0x06A9E964: 004841f9  ldr x0, [x0, #0x290]
0x06A9E968: 2c881b97  bl #0x3180a18
0x06A9E96C: a0640090  adrp x0, #0x7732000
0x06A9E970: 000444f9  ldr x0, [x0, #0x808]
0x06A9E974: 29881b97  bl #0x3180a18
0x06A9E978: c05e00f0  adrp x0, #0x7679000
0x06A9E97C: 008843f9  ldr x0, [x0, #0x710]
0x06A9E980: 26881b97  bl #0x3180a18
0x06A9E984: 28008052  movz w8, #0x1
0x06A9E988: a8062239  strb w8, [x21, #0x881]
0x06A9E98C: 751a40f9  ldr x21, [x19, #0x30]
0x06A9E990: 551100b4  cbz x21, #0x6a9ebb8
0x06A9E994: aa5e0090  adrp x10, #0x7672000
0x06A9E998: a80240f9  ldr x8, [x21]
0x06A9E99C: 4a6143f9  ldr x10, [x10, #0x6c0]
0x06A9E9A0: 095d4279  ldrh w9, [x8, #0x12e]
0x06A9E9A4: 410140f9  ldr x1, [x10]
0x06A9E9A8: 290100b4  cbz x9, #0x6a9e9cc
0x06A9E9AC: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A9E9B0: 4a210091  add x10, x10, #8
0x06A9E9B4: 4b815ff8  ldur x11, [x10, #-8]
0x06A9E9B8: 7f0101eb  cmp x11, x1
0x06A9E9BC: 00010054  b.eq #0x6a9e9dc
0x06A9E9C0: 290500f1  subs x9, x9, #1
0x06A9E9C4: 4a410091  add x10, x10, #0x10
0x06A9E9C8: 61ffff54  b.ne #0x6a9e9b4
0x06A9E9CC: 62008052  movz w2, #0x3
0x06A9E9D0: e00315aa  mov x0, x21
0x06A9E9D4: 4fe01a97  bl #0x3156b10
0x06A9E9D8: 05000014  b #0x6a9e9ec
0x06A9E9DC: 490140b9  ldr w9, [x10]
0x06A9E9E0: 290d0011  add w9, w9, #3
0x06A9E9E4: 08d1298b  add x8, x8, w9, sxtw #4
0x06A9E9E8: 00e10491  add x0, x8, #0x138
0x06A9E9EC: 080440a9  ldp x8, x1, [x0]
0x06A9E9F0: e00315aa  mov x0, x21
0x06A9E9F4: 00013fd6  blr x8
0x06A9E9F8: 000e00b4  cbz x0, #0x6a9ebb8
0x06A9E9FC: 082040b9  ldr w8, [x0, #0x20]
0x06A9EA00: 1f150071  cmp w8, #5
0x06A9EA04: e1020054  b.ne #0x6a9ea60
0x06A9EA08: 940d00b4  cbz x20, #0x6a9ebb8
0x06A9EA0C: 751e40f9  ldr x21, [x19, #0x38]
0x06A9EA10: 550d00b4  cbz x21, #0x6a9ebb8
0x06A9EA14: f85e0090  adrp x24, #0x767a000
0x06A9EA18: a80240f9  ldr x8, [x21]
0x06A9EA1C: 960a40f9  ldr x22, [x20, #0x10]
0x06A9EA20: 184f42f9  ldr x24, [x24, #0x498]
0x06A9EA24: 095d4279  ldrh w9, [x8, #0x12e]
0x06A9EA28: 010340f9  ldr x1, [x24]
0x06A9EA2C: 290100b4  cbz x9, #0x6a9ea50
0x06A9EA30: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A9EA34: 4a210091  add x10, x10, #8
0x06A9EA38: 4b815ff8  ldur x11, [x10, #-8]
0x06A9EA3C: 7f0101eb  cmp x11, x1
0x06A9EA40: a0010054  b.eq #0x6a9ea74
0x06A9EA44: 290500f1  subs x9, x9, #1
0x06A9EA48: 4a410091  add x10, x10, #0x10
0x06A9EA4C: 61ffff54  b.ne #0x6a9ea38
0x06A9EA50: 22018052  movz w2, #0x9
0x06A9EA54: e00315aa  mov x0, x21
0x06A9EA58: 2ee01a97  bl #0x3156b10
0x06A9EA5C: 0a000014  b #0x6a9ea84
0x06A9EA60: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A9EA64: f65742a9  ldp x22, x21, [sp, #0x20]
0x06A9EA68: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06A9EA6C: fe0744f8  ldr x30, [sp], #0x40
0x06A9EA70: c0035fd6  ret
0x06A9EA74: 490140b9  ldr w9, [x10]
0x06A9EA78: 29250011  add w9, w9, #9
0x06A9EA7C: 08d1298b  add x8, x8, w9, sxtw #4
0x06A9EA80: 00e10491  add x0, x8, #0x138
0x06A9EA84: 080840a9  ldp x8, x2, [x0]
0x06A9EA88: e00315aa  mov x0, x21
0x06A9EA8C: e10316aa  mov x1, x22
0x06A9EA90: 00013fd6  blr x8
0x06A9EA94: 761e40f9  ldr x22, [x19, #0x38]
0x06A9EA98: 160900b4  cbz x22, #0x6a9ebb8
0x06A9EA9C: c80240f9  ldr x8, [x22]
0x06A9EAA0: 970e40f9  ldr x23, [x20, #0x18]
0x06A9EAA4: 010340f9  ldr x1, [x24]
0x06A9EAA8: f50300aa  mov x21, x0
0x06A9EAAC: 095d4279  ldrh w9, [x8, #0x12e]
0x06A9EAB0: 290100b4  cbz x9, #0x6a9ead4
0x06A9EAB4: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A9EAB8: 4a210091  add x10, x10, #8
0x06A9EABC: 4b815ff8  ldur x11, [x10, #-8]
0x06A9EAC0: 7f0101eb  cmp x11, x1
0x06A9EAC4: 00010054  b.eq #0x6a9eae4
0x06A9EAC8: 290500f1  subs x9, x9, #1
0x06A9EACC: 4a410091  add x10, x10, #0x10
0x06A9EAD0: 61ffff54  b.ne #0x6a9eabc
0x06A9EAD4: 22018052  movz w2, #0x9
0x06A9EAD8: e00316aa  mov x0, x22
0x06A9EADC: 0de01a97  bl #0x3156b10
0x06A9EAE0: 05000014  b #0x6a9eaf4
0x06A9EAE4: 490140b9  ldr w9, [x10]
0x06A9EAE8: 29250011  add w9, w9, #9
0x06A9EAEC: 08d1298b  add x8, x8, w9, sxtw #4
0x06A9EAF0: 00e10491  add x0, x8, #0x138
0x06A9EAF4: 080840a9  ldp x8, x2, [x0]
0x06A9EAF8: e00316aa  mov x0, x22
0x06A9EAFC: e10317aa  mov x1, x23
0x06A9EB00: 00013fd6  blr x8
0x06A9EB04: a8640090  adrp x8, #0x7732000
0x06A9EB08: 080144f9  ldr x8, [x8, #0x800]
0x06A9EB0C: f70300aa  mov x23, x0
0x06A9EB10: 080140f9  ldr x8, [x8]
0x06A9EB14: e00308aa  mov x0, x8
0x06A9EB18: 62881b97  bl #0x3180ca0
0x06A9EB1C: e1031faa  mov x1, xzr
0x06A9EB20: f60300aa  mov x22, x0
0x06A9EB24: b6eeb097  bl #0x56da5fc
0x06A9EB28: 960400b4  cbz x22, #0x6a9ebb8
0x06A9EB2C: e00316aa  mov x0, x22
0x06A9EB30: 150c01f8  str x21, [x0, #0x10]!
0x06A9EB34: e10315aa  mov x1, x21
0x06A9EB38: a3871b97  bl #0x31809c4
0x06A9EB3C: e00316aa  mov x0, x22
0x06A9EB40: 178c01f8  str x23, [x0, #0x18]!
0x06A9EB44: e10317aa  mov x1, x23
0x06A9EB48: 9f871b97  bl #0x31809c4
0x06A9EB4C: c85e00f0  adrp x8, #0x7679000
0x06A9EB50: 088943f9  ldr x8, [x8, #0x710]
0x06A9EB54: 000140f9  ldr x0, [x8]
0x06A9EB58: 52881b97  bl #0x3180ca0
0x06A9EB5C: e1031faa  mov x1, xzr
0x06A9EB60: f50300aa  mov x21, x0
0x06A9EB64: 16dbd197  bl #0x5f157bc
0x06A9EB68: 950200b4  cbz x21, #0x6a9ebb8
0x06A9EB6C: a8640090  adrp x8, #0x7732000
0x06A9EB70: 080544f9  ldr x8, [x8, #0x808]
0x06A9EB74: e00315aa  mov x0, x21
0x06A9EB78: e10316aa  mov x1, x22
0x06A9EB7C: 020140f9  ldr x2, [x8]
0x06A9EB80: 19924c97  bl #0x3dc33e4
0x06A9EB84: 602640f9  ldr x0, [x19, #0x48]
0x06A9EB88: 811240f9  ldr x1, [x20, #0x20]
0x06A9EB8C: ade9ff97  bl #0x6a99240
0x06A9EB90: 682240f9  ldr x8, [x19, #0x40]
0x06A9EB94: 280100b4  cbz x8, #0x6a9ebb8
0x06A9EB98: e20315aa  mov x2, x21
0x06A9EB9C: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A9EBA0: f65742a9  ldp x22, x21, [sp, #0x20]
0x06A9EBA4: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06A9EBA8: e103002a  mov w1, w0
0x06A9EBAC: e00308aa  mov x0, x8
0x06A9EBB0: fe0744f8  ldr x30, [sp], #0x40
0x06A9EBB4: e1f2ff17  b #0x6a9b738
0x06A9EBB8: 3d881b97  bl #0x3180cac

; RVA 0x6A9EBBC | public void .ctor() { }
; bytes=72 sha256=007e9fa75b9521c5c0b92ac002f322806fd0ea2e484b80f16e5247d2735494cb status=arm64_complete_bound indexed_start=True
0x06A9EBBC: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A9EBC0: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A9EBC4: 74940090  adrp x20, #0x7d2a000
0x06A9EBC8: b56200b0  adrp x21, #0x76f3000
0x06A9EBCC: 880a6239  ldrb w8, [x20, #0x882]
0x06A9EBD0: b56e45f9  ldr x21, [x21, #0xad8]
0x06A9EBD4: f30300aa  mov x19, x0
0x06A9EBD8: c8000037  tbnz w8, #0, #0x6a9ebf0
0x06A9EBDC: a06200b0  adrp x0, #0x76f3000
0x06A9EBE0: 006c45f9  ldr x0, [x0, #0xad8]
0x06A9EBE4: 8d871b97  bl #0x3180a18
0x06A9EBE8: 28008052  movz w8, #0x1
0x06A9EBEC: 880a2239  strb w8, [x20, #0x882]
0x06A9EBF0: a10240f9  ldr x1, [x21]
0x06A9EBF4: e00313aa  mov x0, x19
0x06A9EBF8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A9EBFC: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A9EC00: 8a0e8817  b #0x4ca2628

