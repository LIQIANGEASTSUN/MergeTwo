; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 597 MergeEngine.ECS.Util.BoardItemUtil
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x626ECD4 | public static Nullable<int> GetBoardItemIndex(PositionComponent positionComponent) { }
; bytes=116 sha256=335a71aa15626e017203eca092da13a0852d3299c5c4d4133d28cc1f7958b049 status=arm64_complete_bound indexed_start=True
0x0626ECD4: fe0f1ef8  str x30, [sp, #-0x20]!
0x0626ECD8: f44f01a9  stp x20, x19, [sp, #0x10]
0x0626ECDC: b4d500f0  adrp x20, #0x7d25000
0x0626ECE0: 88565039  ldrb w8, [x20, #0x415]
0x0626ECE4: f30300aa  mov x19, x0
0x0626ECE8: c8000037  tbnz w8, #0, #0x626ed00
0x0626ECEC: 009f00d0  adrp x0, #0x7650000
0x0626ECF0: 00d046f9  ldr x0, [x0, #0xda0]
0x0626ECF4: 49473c97  bl #0x3180a18
0x0626ECF8: 28008052  movz w8, #0x1
0x0626ECFC: 88561039  strb w8, [x20, #0x415]
0x0626ED00: b30100b4  cbz x19, #0x626ed34
0x0626ED04: 089f00d0  adrp x8, #0x7650000
0x0626ED08: 08d146f9  ldr x8, [x8, #0xda0]
0x0626ED0C: 6a264629  ldp w10, w9, [x19, #0x30]
0x0626ED10: e0230091  add x0, sp, #8
0x0626ED14: ff0700f9  str xzr, [sp, #8]
0x0626ED18: 020140f9  ldr x2, [x8]
0x0626ED1C: 28711d53  lsl w8, w9, #3
0x0626ED20: 0801094b  sub w8, w8, w9
0x0626ED24: 4101080b  add w1, w10, w8
0x0626ED28: 6e328097  bl #0x427b6e0
0x0626ED2C: e00740f9  ldr x0, [sp, #8]
0x0626ED30: 03000014  b #0x626ed3c
0x0626ED34: e0031faa  mov x0, xzr
0x0626ED38: ff0700f9  str xzr, [sp, #8]
0x0626ED3C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0626ED40: fe0742f8  ldr x30, [sp], #0x20
0x0626ED44: c0035fd6  ret

; RVA 0x626ED48 | public static PositionComponent GetPositionItemClosestToInventory(ReadOnlyCollection<PositionComponent> boardItems, IMergingConfigurationModel mergingConfigurationModel) { }
; bytes=640 sha256=81b60d88c6849fb994023f5adbcb61b48ed5a156ce6a009b03aa90f9eded1b9b status=arm64_complete_bound indexed_start=True
0x0626ED48: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x0626ED4C: fc6f01a9  stp x28, x27, [sp, #0x10]
0x0626ED50: fa6702a9  stp x26, x25, [sp, #0x20]
0x0626ED54: f85f03a9  stp x24, x23, [sp, #0x30]
0x0626ED58: f65704a9  stp x22, x21, [sp, #0x40]
0x0626ED5C: f44f05a9  stp x20, x19, [sp, #0x50]
0x0626ED60: b3d500f0  adrp x19, #0x7d25000
0x0626ED64: d6a30090  adrp x22, #0x76e6000
0x0626ED68: 685a5039  ldrb w8, [x19, #0x416]
0x0626ED6C: d65642f9  ldr x22, [x22, #0x4a8]
0x0626ED70: f50301aa  mov x21, x1
0x0626ED74: f40300aa  mov x20, x0
0x0626ED78: e8040037  tbnz w8, #0, #0x626ee14
0x0626ED7C: c0a30090  adrp x0, #0x76e6000
0x0626ED80: 005842f9  ldr x0, [x0, #0x4b0]
0x0626ED84: 25473c97  bl #0x3180a18
0x0626ED88: c0a30090  adrp x0, #0x76e6000
0x0626ED8C: 005c42f9  ldr x0, [x0, #0x4b8]
0x0626ED90: 22473c97  bl #0x3180a18
0x0626ED94: c0a30090  adrp x0, #0x76e6000
0x0626ED98: 006042f9  ldr x0, [x0, #0x4c0]
0x0626ED9C: 1f473c97  bl #0x3180a18
0x0626EDA0: c0a30090  adrp x0, #0x76e6000
0x0626EDA4: 006442f9  ldr x0, [x0, #0x4c8]
0x0626EDA8: 1c473c97  bl #0x3180a18
0x0626EDAC: 80a000d0  adrp x0, #0x7680000
0x0626EDB0: 002c42f9  ldr x0, [x0, #0x458]
0x0626EDB4: 19473c97  bl #0x3180a18
0x0626EDB8: 80a000b0  adrp x0, #0x767f000
0x0626EDBC: 008844f9  ldr x0, [x0, #0x910]
0x0626EDC0: 16473c97  bl #0x3180a18
0x0626EDC4: c0a30090  adrp x0, #0x76e6000
0x0626EDC8: 006842f9  ldr x0, [x0, #0x4d0]
0x0626EDCC: 13473c97  bl #0x3180a18
0x0626EDD0: c0a30090  adrp x0, #0x76e6000
0x0626EDD4: 006c42f9  ldr x0, [x0, #0x4d8]
0x0626EDD8: 10473c97  bl #0x3180a18
0x0626EDDC: c0a30090  adrp x0, #0x76e6000
0x0626EDE0: 007042f9  ldr x0, [x0, #0x4e0]
0x0626EDE4: 0d473c97  bl #0x3180a18
0x0626EDE8: c0a30090  adrp x0, #0x76e6000
0x0626EDEC: 007442f9  ldr x0, [x0, #0x4e8]
0x0626EDF0: 0a473c97  bl #0x3180a18
0x0626EDF4: c0a30090  adrp x0, #0x76e6000
0x0626EDF8: 005442f9  ldr x0, [x0, #0x4a8]
0x0626EDFC: 07473c97  bl #0x3180a18
0x0626EE00: c0a30090  adrp x0, #0x76e6000
0x0626EE04: 007842f9  ldr x0, [x0, #0x4f0]
0x0626EE08: 04473c97  bl #0x3180a18
0x0626EE0C: 28008052  movz w8, #0x1
0x0626EE10: 685a1039  strb w8, [x19, #0x416]
0x0626EE14: c00240f9  ldr x0, [x22]
0x0626EE18: a2473c97  bl #0x3180ca0
0x0626EE1C: e1031faa  mov x1, xzr
0x0626EE20: f30300aa  mov x19, x0
0x0626EE24: f6add197  bl #0x56da5fc
0x0626EE28: f30c00b4  cbz x19, #0x626efc4
0x0626EE2C: 98a000b0  adrp x24, #0x767f000
0x0626EE30: d6a30090  adrp x22, #0x76e6000
0x0626EE34: 99a000d0  adrp x25, #0x7680000
0x0626EE38: d7a30090  adrp x23, #0x76e6000
0x0626EE3C: 188b44f9  ldr x24, [x24, #0x910]
0x0626EE40: d67242f9  ldr x22, [x22, #0x4e0]
0x0626EE44: 392f42f9  ldr x25, [x25, #0x458]
0x0626EE48: f77a42f9  ldr x23, [x23, #0x4f0]
0x0626EE4C: e00313aa  mov x0, x19
0x0626EE50: 150c01f8  str x21, [x0, #0x10]!
0x0626EE54: e10315aa  mov x1, x21
0x0626EE58: db463c97  bl #0x31809c4
0x0626EE5C: e0031faa  mov x0, xzr
0x0626EE60: 88581a94  bl #0x6905080
0x0626EE64: 600e00f9  str x0, [x19, #0x18]
0x0626EE68: 000340f9  ldr x0, [x24]
0x0626EE6C: 8d473c97  bl #0x3180ca0
0x0626EE70: c20240f9  ldr x2, [x22]
0x0626EE74: e10313aa  mov x1, x19
0x0626EE78: e3031faa  mov x3, xzr
0x0626EE7C: f50300aa  mov x21, x0
0x0626EE80: 4f9cbf97  bl #0x5255fbc
0x0626EE84: 220340f9  ldr x2, [x25]
0x0626EE88: e00314aa  mov x0, x20
0x0626EE8C: e10315aa  mov x1, x21
0x0626EE90: 06616897  bl #0x3c872a8
0x0626EE94: e80240f9  ldr x8, [x23]
0x0626EE98: f40300aa  mov x20, x0
0x0626EE9C: 09e140b9  ldr w9, [x8, #0xe0]
0x0626EEA0: 89000035  cbnz w9, #0x626eeb0
0x0626EEA4: e00308aa  mov x0, x8
0x0626EEA8: 39473c97  bl #0x3180b8c
0x0626EEAC: e80240f9  ldr x8, [x23]
0x0626EEB0: 095d40f9  ldr x9, [x8, #0xb8]
0x0626EEB4: d9a30090  adrp x25, #0x76e6000
0x0626EEB8: dda30090  adrp x29, #0x76e6000
0x0626EEBC: dca30090  adrp x28, #0x76e6000
0x0626EEC0: dba30090  adrp x27, #0x76e6000
0x0626EEC4: daa30090  adrp x26, #0x76e6000
0x0626EEC8: d6a30090  adrp x22, #0x76e6000
0x0626EECC: 395f42f9  ldr x25, [x25, #0x4b8]
0x0626EED0: bd6b42f9  ldr x29, [x29, #0x4d0]
0x0626EED4: 350540f9  ldr x21, [x9, #8]
0x0626EED8: 9c7742f9  ldr x28, [x28, #0x4e8]
0x0626EEDC: 7b6342f9  ldr x27, [x27, #0x4c0]
0x0626EEE0: 5a6742f9  ldr x26, [x26, #0x4c8]
0x0626EEE4: d65a42f9  ldr x22, [x22, #0x4b0]
0x0626EEE8: 950300b5  cbnz x21, #0x626ef58
0x0626EEEC: 09e140b9  ldr w9, [x8, #0xe0]
0x0626EEF0: 69000034  cbz w9, #0x626eefc
0x0626EEF4: fa0316aa  mov x26, x22
0x0626EEF8: 05000014  b #0x626ef0c
0x0626EEFC: e00308aa  mov x0, x8
0x0626EF00: fa0316aa  mov x26, x22
0x0626EF04: 22473c97  bl #0x3180b8c
0x0626EF08: e80240f9  ldr x8, [x23]
0x0626EF0C: 085d40f9  ldr x8, [x8, #0xb8]
0x0626EF10: 000340f9  ldr x0, [x24]
0x0626EF14: 160140f9  ldr x22, [x8]
0x0626EF18: 62473c97  bl #0x3180ca0
0x0626EF1C: c8a30090  adrp x8, #0x76e6000
0x0626EF20: 086d42f9  ldr x8, [x8, #0x4d8]
0x0626EF24: e10316aa  mov x1, x22
0x0626EF28: e3031faa  mov x3, xzr
0x0626EF2C: f50300aa  mov x21, x0
0x0626EF30: 020140f9  ldr x2, [x8]
0x0626EF34: 229cbf97  bl #0x5255fbc
0x0626EF38: e80240f9  ldr x8, [x23]
0x0626EF3C: e10315aa  mov x1, x21
0x0626EF40: 005d40f9  ldr x0, [x8, #0xb8]
0x0626EF44: 158c00f8  str x21, [x0, #8]!
0x0626EF48: 9f463c97  bl #0x31809c4
0x0626EF4C: f6031aaa  mov x22, x26
0x0626EF50: daa30090  adrp x26, #0x76e6000
0x0626EF54: 5a6742f9  ldr x26, [x26, #0x4c8]
0x0626EF58: 220340f9  ldr x2, [x25]
0x0626EF5C: e00314aa  mov x0, x20
0x0626EF60: e10315aa  mov x1, x21
0x0626EF64: 30706797  bl #0x3c4b024
0x0626EF68: a80340f9  ldr x8, [x29]
0x0626EF6C: f40300aa  mov x20, x0
0x0626EF70: e00308aa  mov x0, x8
0x0626EF74: 4b473c97  bl #0x3180ca0
0x0626EF78: 820340f9  ldr x2, [x28]
0x0626EF7C: e10313aa  mov x1, x19
0x0626EF80: e3031faa  mov x3, xzr
0x0626EF84: f50300aa  mov x21, x0
0x0626EF88: 619fbf97  bl #0x5256d0c
0x0626EF8C: 620340f9  ldr x2, [x27]
0x0626EF90: e00314aa  mov x0, x20
0x0626EF94: e10315aa  mov x1, x21
0x0626EF98: 6dae6797  bl #0x3c5a94c
0x0626EF9C: 410340f9  ldr x1, [x26]
0x0626EFA0: 0cc46797  bl #0x3c5ffd0
0x0626EFA4: c10240f9  ldr x1, [x22]
0x0626EFA8: f44f45a9  ldp x20, x19, [sp, #0x50]
0x0626EFAC: f65744a9  ldp x22, x21, [sp, #0x40]
0x0626EFB0: f85f43a9  ldp x24, x23, [sp, #0x30]
0x0626EFB4: fa6742a9  ldp x26, x25, [sp, #0x20]
0x0626EFB8: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x0626EFBC: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x0626EFC0: 71516717  b #0x3c43584
0x0626EFC4: 3a473c97  bl #0x3180cac

; RVA 0x626EFD0 | public static bool CanMergeAnyItemOnly(MergeComponent firstMerge, MergeComponent secondMerge, IMergingConfigurationModel _mergingConfigurationModel) { }
; bytes=868 sha256=bdbbb103071dd46f204f2ac094fb33c8f731cd7bde3b1a3141dd73422a283e28 status=arm64_complete_bound indexed_start=True
0x0626EFD0: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x0626EFD4: f65701a9  stp x22, x21, [sp, #0x10]
0x0626EFD8: f44f02a9  stp x20, x19, [sp, #0x20]
0x0626EFDC: b6d500f0  adrp x22, #0x7d25000
0x0626EFE0: c85e5039  ldrb w8, [x22, #0x417]
0x0626EFE4: f30302aa  mov x19, x2
0x0626EFE8: f40301aa  mov x20, x1
0x0626EFEC: f50300aa  mov x21, x0
0x0626EFF0: a8020037  tbnz w8, #0, #0x626f044
0x0626EFF4: 60a000b0  adrp x0, #0x767b000
0x0626EFF8: 00cc47f9  ldr x0, [x0, #0xf98]
0x0626EFFC: 87463c97  bl #0x3180a18
0x0626F000: 60a000f0  adrp x0, #0x767e000
0x0626F004: 001c43f9  ldr x0, [x0, #0x638]
0x0626F008: 84463c97  bl #0x3180a18
0x0626F00C: a0a300f0  adrp x0, #0x76e6000
0x0626F010: 007c42f9  ldr x0, [x0, #0x4f8]
0x0626F014: 81463c97  bl #0x3180a18
0x0626F018: 60a000b0  adrp x0, #0x767c000
0x0626F01C: 002441f9  ldr x0, [x0, #0x248]
0x0626F020: 7e463c97  bl #0x3180a18
0x0626F024: 60a000f0  adrp x0, #0x767e000
0x0626F028: 00a442f9  ldr x0, [x0, #0x548]
0x0626F02C: 7b463c97  bl #0x3180a18
0x0626F030: 40a000f0  adrp x0, #0x767a000
0x0626F034: 004c42f9  ldr x0, [x0, #0x498]
0x0626F038: 78463c97  bl #0x3180a18
0x0626F03C: 28008052  movz w8, #0x1
0x0626F040: c85e1039  strb w8, [x22, #0x417]
0x0626F044: e8031f2a  mov w8, wzr
0x0626F048: 950c00b4  cbz x21, #0x626f1d8
0x0626F04C: 740c00b4  cbz x20, #0x626f1d8
0x0626F050: aa2a40b9  ldr w10, [x21, #0x28]
0x0626F054: 892a40b9  ldr w9, [x20, #0x28]
0x0626F058: 5f050071  cmp w10, #1
0x0626F05C: 61000054  b.ne #0x626f068
0x0626F060: a90b0035  cbnz w9, #0x626f1d4
0x0626F064: 05000014  b #0x626f078
0x0626F068: e8031f2a  mov w8, wzr
0x0626F06C: 6a0b0035  cbnz w10, #0x626f1d8
0x0626F070: 3f050071  cmp w9, #1
0x0626F074: 210b0054  b.ne #0x626f1d8
0x0626F078: 76a000f0  adrp x22, #0x767e000
0x0626F07C: d61e43f9  ldr x22, [x22, #0x638]
0x0626F080: e00315aa  mov x0, x21
0x0626F084: c10240f9  ldr x1, [x22]
0x0626F088: e5f96597  bl #0x3bed81c
0x0626F08C: c10240f9  ldr x1, [x22]
0x0626F090: f60300aa  mov x22, x0
0x0626F094: e00314aa  mov x0, x20
0x0626F098: e1f96597  bl #0x3bed81c
0x0626F09C: 760000b4  cbz x22, #0x626f0a8
0x0626F0A0: c8ca4039  ldrb w8, [x22, #0x32]
0x0626F0A4: 88090035  cbnz w8, #0x626f1d4
0x0626F0A8: 600000b4  cbz x0, #0x626f0b4
0x0626F0AC: 08c84039  ldrb w8, [x0, #0x32]
0x0626F0B0: 28090035  cbnz w8, #0x626f1d4
0x0626F0B4: 69a00090  adrp x9, #0x767b000
0x0626F0B8: a82a40b9  ldr w8, [x21, #0x28]
0x0626F0BC: 29cd47f9  ldr x9, [x9, #0xf98]
0x0626F0C0: 1f010071  cmp w8, #0
0x0626F0C4: 210140f9  ldr x1, [x9]
0x0626F0C8: b502949a  csel x21, x21, x20, eq
0x0626F0CC: e00315aa  mov x0, x21
0x0626F0D0: d3f96597  bl #0x3bed81c
0x0626F0D4: f31200b4  cbz x19, #0x626f330
0x0626F0D8: 57a000f0  adrp x23, #0x767a000
0x0626F0DC: 680240f9  ldr x8, [x19]
0x0626F0E0: f74e42f9  ldr x23, [x23, #0x498]
0x0626F0E4: f40300aa  mov x20, x0
0x0626F0E8: 095d4279  ldrh w9, [x8, #0x12e]
0x0626F0EC: e10240f9  ldr x1, [x23]
0x0626F0F0: 290100b4  cbz x9, #0x626f114
0x0626F0F4: 0a5940f9  ldr x10, [x8, #0xb0]
0x0626F0F8: 4a210091  add x10, x10, #8
0x0626F0FC: 4b815ff8  ldur x11, [x10, #-8]
0x0626F100: 7f0101eb  cmp x11, x1
0x0626F104: 00010054  b.eq #0x626f124
0x0626F108: 290500f1  subs x9, x9, #1
0x0626F10C: 4a410091  add x10, x10, #0x10
0x0626F110: 61ffff54  b.ne #0x626f0fc
0x0626F114: 82028052  movz w2, #0x14
0x0626F118: e00313aa  mov x0, x19
0x0626F11C: 7d9e3b97  bl #0x3156b10
0x0626F120: 05000014  b #0x626f134
0x0626F124: 490140b9  ldr w9, [x10]
0x0626F128: 29510011  add w9, w9, #0x14
0x0626F12C: 08d1298b  add x8, x8, w9, sxtw #4
0x0626F130: 00e10491  add x0, x8, #0x138
0x0626F134: 080840a9  ldp x8, x2, [x0]
0x0626F138: e00313aa  mov x0, x19
0x0626F13C: e10315aa  mov x1, x21
0x0626F140: 00013fd6  blr x8
0x0626F144: 600f00b4  cbz x0, #0x626f330
0x0626F148: 6aa000f0  adrp x10, #0x767e000
0x0626F14C: 080040f9  ldr x8, [x0]
0x0626F150: 4aa542f9  ldr x10, [x10, #0x548]
0x0626F154: f60300aa  mov x22, x0
0x0626F158: 095d4279  ldrh w9, [x8, #0x12e]
0x0626F15C: 410140f9  ldr x1, [x10]
0x0626F160: 290100b4  cbz x9, #0x626f184
0x0626F164: 0a5940f9  ldr x10, [x8, #0xb0]
0x0626F168: 4a210091  add x10, x10, #8
0x0626F16C: 4b815ff8  ldur x11, [x10, #-8]
0x0626F170: 7f0101eb  cmp x11, x1
0x0626F174: 00010054  b.eq #0x626f194
0x0626F178: 290500f1  subs x9, x9, #1
0x0626F17C: 4a410091  add x10, x10, #0x10
0x0626F180: 61ffff54  b.ne #0x626f16c
0x0626F184: 82028052  movz w2, #0x14
0x0626F188: e00316aa  mov x0, x22
0x0626F18C: 619e3b97  bl #0x3156b10
0x0626F190: 05000014  b #0x626f1a4
0x0626F194: 490140b9  ldr w9, [x10]
0x0626F198: 29510011  add w9, w9, #0x14
0x0626F19C: 08d1298b  add x8, x8, w9, sxtw #4
0x0626F1A0: 00e10491  add x0, x8, #0x138
0x0626F1A4: 080440a9  ldp x8, x1, [x0]
0x0626F1A8: e00316aa  mov x0, x22
0x0626F1AC: 00013fd6  blr x8
0x0626F1B0: 60000036  tbz w0, #0, #0x626f1bc
0x0626F1B4: 28008052  movz w8, #0x1
0x0626F1B8: 08000014  b #0x626f1d8
0x0626F1BC: a8a300f0  adrp x8, #0x76e6000
0x0626F1C0: 087d42f9  ldr x8, [x8, #0x4f8]
0x0626F1C4: e00315aa  mov x0, x21
0x0626F1C8: 010140f9  ldr x1, [x8]
0x0626F1CC: a4f96597  bl #0x3bed85c
0x0626F1D0: e00000b4  cbz x0, #0x626f1ec
0x0626F1D4: e8031f2a  mov w8, wzr
0x0626F1D8: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0626F1DC: f65741a9  ldp x22, x21, [sp, #0x10]
0x0626F1E0: 00010012  and w0, w8, #1
0x0626F1E4: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x0626F1E8: c0035fd6  ret
0x0626F1EC: 340a00b4  cbz x20, #0x626f330
0x0626F1F0: 680240f9  ldr x8, [x19]
0x0626F1F4: 951a40f9  ldr x21, [x20, #0x30]
0x0626F1F8: e10240f9  ldr x1, [x23]
0x0626F1FC: 095d4279  ldrh w9, [x8, #0x12e]
0x0626F200: 290100b4  cbz x9, #0x626f224
0x0626F204: 0a5940f9  ldr x10, [x8, #0xb0]
0x0626F208: 4a210091  add x10, x10, #8
0x0626F20C: 4b815ff8  ldur x11, [x10, #-8]
0x0626F210: 7f0101eb  cmp x11, x1
0x0626F214: 00010054  b.eq #0x626f234
0x0626F218: 290500f1  subs x9, x9, #1
0x0626F21C: 4a410091  add x10, x10, #0x10
0x0626F220: 61ffff54  b.ne #0x626f20c
0x0626F224: a2018052  movz w2, #0xd
0x0626F228: e00313aa  mov x0, x19
0x0626F22C: 399e3b97  bl #0x3156b10
0x0626F230: 05000014  b #0x626f244
0x0626F234: 490140b9  ldr w9, [x10]
0x0626F238: 29350011  add w9, w9, #0xd
0x0626F23C: 08d1298b  add x8, x8, w9, sxtw #4
0x0626F240: 00e10491  add x0, x8, #0x138
0x0626F244: 080840a9  ldp x8, x2, [x0]
0x0626F248: e00313aa  mov x0, x19
0x0626F24C: e10315aa  mov x1, x21
0x0626F250: 00013fd6  blr x8
0x0626F254: 00fcffb4  cbz x0, #0x626f1d4
0x0626F258: 680240f9  ldr x8, [x19]
0x0626F25C: 941a40f9  ldr x20, [x20, #0x30]
0x0626F260: e10240f9  ldr x1, [x23]
0x0626F264: 095d4279  ldrh w9, [x8, #0x12e]
0x0626F268: 290100b4  cbz x9, #0x626f28c
0x0626F26C: 0a5940f9  ldr x10, [x8, #0xb0]
0x0626F270: 4a210091  add x10, x10, #8
0x0626F274: 4b815ff8  ldur x11, [x10, #-8]
0x0626F278: 7f0101eb  cmp x11, x1
0x0626F27C: 00010054  b.eq #0x626f29c
0x0626F280: 290500f1  subs x9, x9, #1
0x0626F284: 4a410091  add x10, x10, #0x10
0x0626F288: 61ffff54  b.ne #0x626f274
0x0626F28C: 82008052  movz w2, #0x4
0x0626F290: e00313aa  mov x0, x19
0x0626F294: 1f9e3b97  bl #0x3156b10
0x0626F298: 05000014  b #0x626f2ac
0x0626F29C: 490140b9  ldr w9, [x10]
0x0626F2A0: 29110011  add w9, w9, #4
0x0626F2A4: 08d1298b  add x8, x8, w9, sxtw #4
0x0626F2A8: 00e10491  add x0, x8, #0x138
0x0626F2AC: 080840a9  ldp x8, x2, [x0]
0x0626F2B0: e00313aa  mov x0, x19
0x0626F2B4: e10314aa  mov x1, x20
0x0626F2B8: 00013fd6  blr x8
0x0626F2BC: a00300b4  cbz x0, #0x626f330
0x0626F2C0: 6aa000b0  adrp x10, #0x767c000
0x0626F2C4: 080040f9  ldr x8, [x0]
0x0626F2C8: 4a2541f9  ldr x10, [x10, #0x248]
0x0626F2CC: f30300aa  mov x19, x0
0x0626F2D0: 095d4279  ldrh w9, [x8, #0x12e]
0x0626F2D4: 410140f9  ldr x1, [x10]
0x0626F2D8: 290100b4  cbz x9, #0x626f2fc
0x0626F2DC: 0a5940f9  ldr x10, [x8, #0xb0]
0x0626F2E0: 4a210091  add x10, x10, #8
0x0626F2E4: 4b815ff8  ldur x11, [x10, #-8]
0x0626F2E8: 7f0101eb  cmp x11, x1
0x0626F2EC: 00010054  b.eq #0x626f30c
0x0626F2F0: 290500f1  subs x9, x9, #1
0x0626F2F4: 4a410091  add x10, x10, #0x10
0x0626F2F8: 61ffff54  b.ne #0x626f2e4
0x0626F2FC: 62018052  movz w2, #0xb
0x0626F300: e00313aa  mov x0, x19
0x0626F304: 039e3b97  bl #0x3156b10
0x0626F308: 05000014  b #0x626f31c
0x0626F30C: 490140b9  ldr w9, [x10]
0x0626F310: 292d0011  add w9, w9, #0xb
0x0626F314: 08d1298b  add x8, x8, w9, sxtw #4
0x0626F318: 00e10491  add x0, x8, #0x138
0x0626F31C: 080440a9  ldp x8, x1, [x0]
0x0626F320: e00313aa  mov x0, x19
0x0626F324: 00013fd6  blr x8
0x0626F328: 08000052  eor w8, w0, #1
0x0626F32C: abffff17  b #0x626f1d8
0x0626F330: 5f463c97  bl #0x3180cac

; RVA 0x626F334 | public static bool CanMergeSpecificItem(MergeComponent firstMerge, MergeComponent secondMerge, IMergingConfigurationModel _mergingConfigurationModel) { }
; bytes=408 sha256=8b6b521ca5c2bd3ed516d9b7058b407a14797e498aa7529ebfe7454c1d13f038 status=arm64_complete_bound indexed_start=True
0x0626F334: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x0626F338: f65701a9  stp x22, x21, [sp, #0x10]
0x0626F33C: f44f02a9  stp x20, x19, [sp, #0x20]
0x0626F340: b6d500d0  adrp x22, #0x7d25000
0x0626F344: c8625039  ldrb w8, [x22, #0x418]
0x0626F348: f30302aa  mov x19, x2
0x0626F34C: f40301aa  mov x20, x1
0x0626F350: f50300aa  mov x21, x0
0x0626F354: 88010037  tbnz w8, #0, #0x626f384
0x0626F358: 60a00090  adrp x0, #0x767b000
0x0626F35C: 00cc47f9  ldr x0, [x0, #0xf98]
0x0626F360: ae453c97  bl #0x3180a18
0x0626F364: 60a000f0  adrp x0, #0x767e000
0x0626F368: 001c43f9  ldr x0, [x0, #0x638]
0x0626F36C: ab453c97  bl #0x3180a18
0x0626F370: 40a000f0  adrp x0, #0x767a000
0x0626F374: 004c42f9  ldr x0, [x0, #0x498]
0x0626F378: a8453c97  bl #0x3180a18
0x0626F37C: 28008052  movz w8, #0x1
0x0626F380: c8621039  strb w8, [x22, #0x418]
0x0626F384: e0031f2a  mov w0, wzr
0x0626F388: 350800b4  cbz x21, #0x626f48c
0x0626F38C: 140800b4  cbz x20, #0x626f48c
0x0626F390: a82a40b9  ldr w8, [x21, #0x28]
0x0626F394: 1f0d0071  cmp w8, #3
0x0626F398: 80000054  b.eq #0x626f3a8
0x0626F39C: 882a40b9  ldr w8, [x20, #0x28]
0x0626F3A0: 1f0d0071  cmp w8, #3
0x0626F3A4: 21070054  b.ne #0x626f488
0x0626F3A8: 76a000f0  adrp x22, #0x767e000
0x0626F3AC: d61e43f9  ldr x22, [x22, #0x638]
0x0626F3B0: e00315aa  mov x0, x21
0x0626F3B4: c10240f9  ldr x1, [x22]
0x0626F3B8: 19f96597  bl #0x3bed81c
0x0626F3BC: c10240f9  ldr x1, [x22]
0x0626F3C0: f70300aa  mov x23, x0
0x0626F3C4: e00314aa  mov x0, x20
0x0626F3C8: 15f96597  bl #0x3bed81c
0x0626F3CC: f60300aa  mov x22, x0
0x0626F3D0: b70000b4  cbz x23, #0x626f3e4
0x0626F3D4: e00317aa  mov x0, x23
0x0626F3D8: e1031faa  mov x1, xzr
0x0626F3DC: ce381a94  bl #0x68fd714
0x0626F3E0: 40050037  tbnz w0, #0, #0x626f488
0x0626F3E4: b60000b4  cbz x22, #0x626f3f8
0x0626F3E8: e00316aa  mov x0, x22
0x0626F3EC: e1031faa  mov x1, xzr
0x0626F3F0: c9381a94  bl #0x68fd714
0x0626F3F4: a0040037  tbnz w0, #0, #0x626f488
0x0626F3F8: 68a00090  adrp x8, #0x767b000
0x0626F3FC: b72a40b9  ldr w23, [x21, #0x28]
0x0626F400: 08cd47f9  ldr x8, [x8, #0xf98]
0x0626F404: ff0e0071  cmp w23, #3
0x0626F408: 010140f9  ldr x1, [x8]
0x0626F40C: 8002959a  csel x0, x20, x21, eq
0x0626F410: 03f96597  bl #0x3bed81c
0x0626F414: a00500b4  cbz x0, #0x626f4c8
0x0626F418: ff0e0071  cmp w23, #3
0x0626F41C: a802949a  csel x8, x21, x20, eq
0x0626F420: f60300aa  mov x22, x0
0x0626F424: 001840f9  ldr x0, [x0, #0x30]
0x0626F428: 011940f9  ldr x1, [x8, #0x30]
0x0626F42C: e2031faa  mov x2, xzr
0x0626F430: 10edc997  bl #0x54ea870
0x0626F434: a0020036  tbz w0, #0, #0x626f488
0x0626F438: 930400b4  cbz x19, #0x626f4c8
0x0626F43C: 4aa000f0  adrp x10, #0x767a000
0x0626F440: 680240f9  ldr x8, [x19]
0x0626F444: d41a40f9  ldr x20, [x22, #0x30]
0x0626F448: 4a4d42f9  ldr x10, [x10, #0x498]
0x0626F44C: 095d4279  ldrh w9, [x8, #0x12e]
0x0626F450: 410140f9  ldr x1, [x10]
0x0626F454: 290100b4  cbz x9, #0x626f478
0x0626F458: 0a5940f9  ldr x10, [x8, #0xb0]
0x0626F45C: 4a210091  add x10, x10, #8
0x0626F460: 4b815ff8  ldur x11, [x10, #-8]
0x0626F464: 7f0101eb  cmp x11, x1
0x0626F468: a0010054  b.eq #0x626f49c
0x0626F46C: 290500f1  subs x9, x9, #1
0x0626F470: 4a410091  add x10, x10, #0x10
0x0626F474: 61ffff54  b.ne #0x626f460
0x0626F478: a2018052  movz w2, #0xd
0x0626F47C: e00313aa  mov x0, x19
0x0626F480: a49d3b97  bl #0x3156b10
0x0626F484: 0a000014  b #0x626f4ac
0x0626F488: e0031f2a  mov w0, wzr
0x0626F48C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0626F490: f65741a9  ldp x22, x21, [sp, #0x10]
0x0626F494: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x0626F498: c0035fd6  ret
0x0626F49C: 490140b9  ldr w9, [x10]
0x0626F4A0: 29350011  add w9, w9, #0xd
0x0626F4A4: 08d1298b  add x8, x8, w9, sxtw #4
0x0626F4A8: 00e10491  add x0, x8, #0x138
0x0626F4AC: 080840a9  ldp x8, x2, [x0]
0x0626F4B0: e00313aa  mov x0, x19
0x0626F4B4: e10314aa  mov x1, x20
0x0626F4B8: 00013fd6  blr x8
0x0626F4BC: 1f0000f1  cmp x0, #0
0x0626F4C0: e0079f1a  cset w0, ne
0x0626F4C4: f2ffff17  b #0x626f48c
0x0626F4C8: f9453c97  bl #0x3180cac

