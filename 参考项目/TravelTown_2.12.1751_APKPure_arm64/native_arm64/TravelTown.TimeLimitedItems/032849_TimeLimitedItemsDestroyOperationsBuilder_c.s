; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 32849 .TimeLimitedItemsDestroyOperationsBuilder.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6B4CD24 | private static void .cctor() { }
; bytes=104 sha256=215f7112f06a3e7154544a767ae0868cfc1142861e4d3c2d8cdf93cab038c5cb status=arm64_complete_bound indexed_start=True
0x06B4CD24: fe0f1ef8  str x30, [sp, #-0x20]!
0x06B4CD28: f44f01a9  stp x20, x19, [sp, #0x10]
0x06B4CD2C: f38e00f0  adrp x19, #0x7d2b000
0x06B4CD30: 745f0090  adrp x20, #0x7738000
0x06B4CD34: 68a64039  ldrb w8, [x19, #0x29]
0x06B4CD38: 941e44f9  ldr x20, [x20, #0x838]
0x06B4CD3C: c8000037  tbnz w8, #0, #0x6b4cd54
0x06B4CD40: 605f0090  adrp x0, #0x7738000
0x06B4CD44: 001c44f9  ldr x0, [x0, #0x838]
0x06B4CD48: 34cf1897  bl #0x3180a18
0x06B4CD4C: 28008052  movz w8, #0x1
0x06B4CD50: 68a60039  strb w8, [x19, #0x29]
0x06B4CD54: 800240f9  ldr x0, [x20]
0x06B4CD58: d2cf1897  bl #0x3180ca0
0x06B4CD5C: e1031faa  mov x1, xzr
0x06B4CD60: f30300aa  mov x19, x0
0x06B4CD64: 2636ae97  bl #0x56da5fc
0x06B4CD68: 880240f9  ldr x8, [x20]
0x06B4CD6C: e10313aa  mov x1, x19
0x06B4CD70: 085d40f9  ldr x8, [x8, #0xb8]
0x06B4CD74: 130100f9  str x19, [x8]
0x06B4CD78: 880240f9  ldr x8, [x20]
0x06B4CD7C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06B4CD80: 005d40f9  ldr x0, [x8, #0xb8]
0x06B4CD84: fe0742f8  ldr x30, [sp], #0x20
0x06B4CD88: 0fcf1817  b #0x31809c4

; RVA 0x6B4CD8C | public void .ctor() { }
; bytes=8 sha256=9b66b378981d7380e880033ef78c72c00cd62bc88138ec3878c2437f9fe8f149 status=arm64_complete_bound indexed_start=True
0x06B4CD8C: e1031faa  mov x1, xzr
0x06B4CD90: 1b36ae17  b #0x56da5fc

; RVA 0x6B4CD94 | internal MergeBoardItemNotificationData <BuildQueueItemNotificationData>b__4_0(QueuedItem queuedItem) { }
; bytes=456 sha256=9d7c34a67a8607828e877ab20155b509b47a3bc4df975aa33e220b0ae7a1d798 status=arm64_complete_bound indexed_start=True
0x06B4CD94: ff0301d1  sub sp, sp, #0x40
0x06B4CD98: fe0b00f9  str x30, [sp, #0x10]
0x06B4CD9C: f65702a9  stp x22, x21, [sp, #0x20]
0x06B4CDA0: f44f03a9  stp x20, x19, [sp, #0x30]
0x06B4CDA4: f58e00f0  adrp x21, #0x7d2b000
0x06B4CDA8: 345f0090  adrp x20, #0x7730000
0x06B4CDAC: a8aa4039  ldrb w8, [x21, #0x2a]
0x06B4CDB0: 948241f9  ldr x20, [x20, #0x300]
0x06B4CDB4: f30301aa  mov x19, x1
0x06B4CDB8: 48020037  tbnz w8, #0, #0x6b4ce00
0x06B4CDBC: 605900d0  adrp x0, #0x767a000
0x06B4CDC0: 004c45f9  ldr x0, [x0, #0xa98]
0x06B4CDC4: 15cf1897  bl #0x3180a18
0x06B4CDC8: 605900b0  adrp x0, #0x7679000
0x06B4CDCC: 001044f9  ldr x0, [x0, #0x820]
0x06B4CDD0: 12cf1897  bl #0x3180a18
0x06B4CDD4: 205f0090  adrp x0, #0x7730000
0x06B4CDD8: 008041f9  ldr x0, [x0, #0x300]
0x06B4CDDC: 0fcf1897  bl #0x3180a18
0x06B4CDE0: a05b00b0  adrp x0, #0x76c1000
0x06B4CDE4: 000c47f9  ldr x0, [x0, #0xe18]
0x06B4CDE8: 0ccf1897  bl #0x3180a18
0x06B4CDEC: e05800f0  adrp x0, #0x766b000
0x06B4CDF0: 00b040f9  ldr x0, [x0, #0x160]
0x06B4CDF4: 09cf1897  bl #0x3180a18
0x06B4CDF8: 28008052  movz w8, #0x1
0x06B4CDFC: a8aa0039  strb w8, [x21, #0x2a]
0x06B4CE00: 800240f9  ldr x0, [x20]
0x06B4CE04: ff7f00a9  stp xzr, xzr, [sp]
0x06B4CE08: a6cf1897  bl #0x3180ca0
0x06B4CE0C: e1031faa  mov x1, xzr
0x06B4CE10: f40300aa  mov x20, x0
0x06B4CE14: 2e38fd97  bl #0x6a9aecc
0x06B4CE18: 140a00b4  cbz x20, #0x6b4cf58
0x06B4CE1C: e85800f0  adrp x8, #0x766b000
0x06B4CE20: 08b140f9  ldr x8, [x8, #0x160]
0x06B4CE24: b55b00b0  adrp x21, #0x76c1000
0x06B4CE28: e00314aa  mov x0, x20
0x06B4CE2C: 010140f9  ldr x1, [x8]
0x06B4CE30: b50e47f9  ldr x21, [x21, #0xe18]
0x06B4CE34: 010c01f8  str x1, [x0, #0x10]!
0x06B4CE38: e3ce1897  bl #0x31809c4
0x06B4CE3C: a10240f9  ldr x1, [x21]
0x06B4CE40: e00314aa  mov x0, x20
0x06B4CE44: 018c01f8  str x1, [x0, #0x18]!
0x06B4CE48: dfce1897  bl #0x31809c4
0x06B4CE4C: 730800b4  cbz x19, #0x6b4cf58
0x06B4CE50: 750a40f9  ldr x21, [x19, #0x10]
0x06B4CE54: 350800b4  cbz x21, #0x6b4cf58
0x06B4CE58: 6a5900b0  adrp x10, #0x7679000
0x06B4CE5C: a80240f9  ldr x8, [x21]
0x06B4CE60: 4a1144f9  ldr x10, [x10, #0x820]
0x06B4CE64: 095d4279  ldrh w9, [x8, #0x12e]
0x06B4CE68: 410140f9  ldr x1, [x10]
0x06B4CE6C: 290100b4  cbz x9, #0x6b4ce90
0x06B4CE70: 0a5940f9  ldr x10, [x8, #0xb0]
0x06B4CE74: 4a210091  add x10, x10, #8
0x06B4CE78: 4b815ff8  ldur x11, [x10, #-8]
0x06B4CE7C: 7f0101eb  cmp x11, x1
0x06B4CE80: 00010054  b.eq #0x6b4cea0
0x06B4CE84: 290500f1  subs x9, x9, #1
0x06B4CE88: 4a410091  add x10, x10, #0x10
0x06B4CE8C: 61ffff54  b.ne #0x6b4ce78
0x06B4CE90: e00315aa  mov x0, x21
0x06B4CE94: e2031f2a  mov w2, wzr
0x06B4CE98: 1e271897  bl #0x3156b10
0x06B4CE9C: 04000014  b #0x6b4ceac
0x06B4CEA0: 490180b9  ldrsw x9, [x10]
0x06B4CEA4: 0811098b  add x8, x8, x9, lsl #4
0x06B4CEA8: 00e10491  add x0, x8, #0x138
0x06B4CEAC: 080440a9  ldp x8, x1, [x0]
0x06B4CEB0: 765900d0  adrp x22, #0x767a000
0x06B4CEB4: d64e45f9  ldr x22, [x22, #0xa98]
0x06B4CEB8: e00315aa  mov x0, x21
0x06B4CEBC: 00013fd6  blr x8
0x06B4CEC0: e10300aa  mov x1, x0
0x06B4CEC4: e00314aa  mov x0, x20
0x06B4CEC8: 018c02f8  str x1, [x0, #0x28]!
0x06B4CECC: bece1897  bl #0x31809c4
0x06B4CED0: 680e40f9  ldr x8, [x19, #0x18]
0x06B4CED4: 680000b4  cbz x8, #0x6b4cee0
0x06B4CED8: 010d40f9  ldr x1, [x8, #0x18]
0x06B4CEDC: 010100b5  cbnz x1, #0x6b4cefc
0x06B4CEE0: e0031faa  mov x0, xzr
0x06B4CEE4: f104ad97  bl #0x568e2a8
0x06B4CEE8: e00700a9  stp x0, x1, [sp]
0x06B4CEEC: e0030091  mov x0, sp
0x06B4CEF0: e1031faa  mov x1, xzr
0x06B4CEF4: 520dad97  bl #0x569043c
0x06B4CEF8: e10300aa  mov x1, x0
0x06B4CEFC: e00314aa  mov x0, x20
0x06B4CF00: 010c03f8  str x1, [x0, #0x30]!
0x06B4CF04: b0ce1897  bl #0x31809c4
0x06B4CF08: c00240f9  ldr x0, [x22]
0x06B4CF0C: 65cf1897  bl #0x3180ca0
0x06B4CF10: e1031faa  mov x1, xzr
0x06B4CF14: f50300aa  mov x21, x0
0x06B4CF18: b78ff797  bl #0x6930df4
0x06B4CF1C: f50100b4  cbz x21, #0x6b4cf58
0x06B4CF20: 611240f9  ldr x1, [x19, #0x20]
0x06B4CF24: e00315aa  mov x0, x21
0x06B4CF28: 010c03f8  str x1, [x0, #0x30]!
0x06B4CF2C: a6ce1897  bl #0x31809c4
0x06B4CF30: e00314aa  mov x0, x20
0x06B4CF34: 150c02f8  str x21, [x0, #0x20]!
0x06B4CF38: e10315aa  mov x1, x21
0x06B4CF3C: a2ce1897  bl #0x31809c4
0x06B4CF40: e00314aa  mov x0, x20
0x06B4CF44: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06B4CF48: f65742a9  ldp x22, x21, [sp, #0x20]
0x06B4CF4C: fe0b40f9  ldr x30, [sp, #0x10]
0x06B4CF50: ff030191  add sp, sp, #0x40
0x06B4CF54: c0035fd6  ret
0x06B4CF58: 55cf1897  bl #0x3180cac

