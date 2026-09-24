; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 117 MergeEngine.Util.TwoDArray<T>
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; Generic instantiation from Il2CppDumper script.json | RVA 0x4653ED0 | MergeEngine.Util.TwoDArray<object>$$get_IsFull
; native signature: bool MergeEngine_Util_TwoDArray_object___get_IsFull (MergeEngine_Util_TwoDArray_T__o* __this, const MethodInfo_4653ED0* method);
; bytes=80 sha256=d47917f2eac77ecebd5dfa8ba889d61642d7409afea30b66737717cf9d8a8e4e status=arm64_complete_bound indexed_start=True
0x04653ED0: fe0f1ef8  str x30, [sp, #-0x20]!
0x04653ED4: f44f01a9  stp x20, x19, [sp, #0x10]
0x04653ED8: 34b601d0  adrp x20, #0x7d19000
0x04653EDC: 885e5b39  ldrb w8, [x20, #0x6d7]
0x04653EE0: f30300aa  mov x19, x0
0x04653EE4: c8000037  tbnz w8, #0, #0x4653efc
0x04653EE8: 408101f0  adrp x0, #0x767e000
0x04653EEC: 005c46f9  ldr x0, [x0, #0xcb8]
0x04653EF0: cab2ac97  bl #0x3180a18
0x04653EF4: 28008052  movz w8, #0x1
0x04653EF8: 885e1b39  strb w8, [x20, #0x6d7]
0x04653EFC: 681240f9  ldr x8, [x19, #0x20]
0x04653F00: e80000b4  cbz x8, #0x4653f1c
0x04653F04: 081940b9  ldr w8, [x8, #0x18]
0x04653F08: f44f41a9  ldp x20, x19, [sp, #0x10]
0x04653F0C: 1f010071  cmp w8, #0
0x04653F10: e0179f1a  cset w0, eq
0x04653F14: fe0742f8  ldr x30, [sp], #0x20
0x04653F18: c0035fd6  ret
0x04653F1C: 64b3ac97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4653F20 | MergeEngine.Util.TwoDArray<object>$$get_EmptyPositions
; native signature: System_Collections_ObjectModel_ReadOnlyCollection_BoardItemPosition__o* MergeEngine_Util_TwoDArray_object___get_EmptyPositions (MergeEngine_Util_TwoDArray_T__o* __this, const MethodInfo_4653F20* method);
; bytes=80 sha256=e1340a6de8bb4b79e0831fc0d20e9371d5cf880c30edbd8a6de09e8240b8a8c7 status=arm64_complete_bound indexed_start=True
0x04653F20: fe0f1ef8  str x30, [sp, #-0x20]!
0x04653F24: f44f01a9  stp x20, x19, [sp, #0x10]
0x04653F28: 34b601d0  adrp x20, #0x7d19000
0x04653F2C: 88625b39  ldrb w8, [x20, #0x6d8]
0x04653F30: f30300aa  mov x19, x0
0x04653F34: c8000037  tbnz w8, #0, #0x4653f4c
0x04653F38: 408101f0  adrp x0, #0x767e000
0x04653F3C: 006046f9  ldr x0, [x0, #0xcc0]
0x04653F40: b6b2ac97  bl #0x3180a18
0x04653F44: 28008052  movz w8, #0x1
0x04653F48: 88621b39  strb w8, [x20, #0x6d8]
0x04653F4C: 601240f9  ldr x0, [x19, #0x20]
0x04653F50: e00000b4  cbz x0, #0x4653f6c
0x04653F54: 488101f0  adrp x8, #0x767e000
0x04653F58: 086146f9  ldr x8, [x8, #0xcc0]
0x04653F5C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x04653F60: 010140f9  ldr x1, [x8]
0x04653F64: fe0742f8  ldr x30, [sp], #0x20
0x04653F68: baebe517  b #0x3fcee50
0x04653F6C: 50b3ac97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4653F70 | MergeEngine.Util.TwoDArray<object>$$.ctor
; native signature: void MergeEngine_Util_TwoDArray_object____ctor (MergeEngine_Util_TwoDArray_T__o* __this, int32_t cols, int32_t rows, const MethodInfo_4653F70* method);
; bytes=828 sha256=80df81b2f42091507f5e85230e2c1b32e3b7446ed75de51196e24e95969bff75 status=arm64_complete_bound indexed_start=True
0x04653F70: ffc302d1  sub sp, sp, #0xb0
0x04653F74: fe3300f9  str x30, [sp, #0x60]
0x04653F78: fa6707a9  stp x26, x25, [sp, #0x70]
0x04653F7C: f85f08a9  stp x24, x23, [sp, #0x80]
0x04653F80: f65709a9  stp x22, x21, [sp, #0x90]
0x04653F84: f44f0aa9  stp x20, x19, [sp, #0xa0]
0x04653F88: 39b601d0  adrp x25, #0x7d19000
0x04653F8C: 5a8101f0  adrp x26, #0x767e000
0x04653F90: 578101f0  adrp x23, #0x767e000
0x04653F94: 588101f0  adrp x24, #0x767e000
0x04653F98: 28675b39  ldrb w8, [x25, #0x6d9]
0x04653F9C: 5a6746f9  ldr x26, [x26, #0xcc8]
0x04653FA0: f76a46f9  ldr x23, [x23, #0xcd0]
0x04653FA4: 186f46f9  ldr x24, [x24, #0xcd8]
0x04653FA8: f40303aa  mov x20, x3
0x04653FAC: f503022a  mov w21, w2
0x04653FB0: f603012a  mov w22, w1
0x04653FB4: f30300aa  mov x19, x0
0x04653FB8: 88010037  tbnz w8, #0, #0x4653fe8
0x04653FBC: 408101f0  adrp x0, #0x767e000
0x04653FC0: 006c46f9  ldr x0, [x0, #0xcd8]
0x04653FC4: 95b2ac97  bl #0x3180a18
0x04653FC8: 408101f0  adrp x0, #0x767e000
0x04653FCC: 006846f9  ldr x0, [x0, #0xcd0]
0x04653FD0: 92b2ac97  bl #0x3180a18
0x04653FD4: 408101f0  adrp x0, #0x767e000
0x04653FD8: 006446f9  ldr x0, [x0, #0xcc8]
0x04653FDC: 8fb2ac97  bl #0x3180a18
0x04653FE0: 28008052  movz w8, #0x1
0x04653FE4: 28671b39  strb w8, [x25, #0x6d9]
0x04653FE8: 400340f9  ldr x0, [x26]
0x04653FEC: 2db3ac97  bl #0x3180ca0
0x04653FF0: e10240f9  ldr x1, [x23]
0x04653FF4: f70300aa  mov x23, x0
0x04653FF8: f7e8e597  bl #0x3fce3d4
0x04653FFC: e00313aa  mov x0, x19
0x04654000: 170c02f8  str x23, [x0, #0x20]!
0x04654004: e10317aa  mov x1, x23
0x04654008: 6fb2ac97  bl #0x31809c4
0x0465400C: 000340f9  ldr x0, [x24]
0x04654010: 81008052  movz w1, #0x4
0x04654014: bab2ac97  bl #0x3180afc
0x04654018: f70300aa  mov x23, x0
0x0465401C: e0a30191  add x0, sp, #0x68
0x04654020: 01008012  movn w1, #0
0x04654024: e2031f2a  mov w2, wzr
0x04654028: e3031faa  mov x3, xzr
0x0465402C: ff3700f9  str xzr, [sp, #0x68]
0x04654030: 19a78a94  bl #0x68fdc94
0x04654034: b71300b4  cbz x23, #0x46542a8
0x04654038: e81a40b9  ldr w8, [x23, #0x18]
0x0465403C: 48130034  cbz w8, #0x46542a4
0x04654040: e83740f9  ldr x8, [sp, #0x68]
0x04654044: e0630191  add x0, sp, #0x58
0x04654048: 21008052  movz w1, #0x1
0x0465404C: e2031f2a  mov w2, wzr
0x04654050: e3031faa  mov x3, xzr
0x04654054: e81200f9  str x8, [x23, #0x20]
0x04654058: ff2f00f9  str xzr, [sp, #0x58]
0x0465405C: 0ea78a94  bl #0x68fdc94
0x04654060: e81a40b9  ldr w8, [x23, #0x18]
0x04654064: 1f050071  cmp w8, #1
0x04654068: e9110054  b.ls #0x46542a4
0x0465406C: e82f40f9  ldr x8, [sp, #0x58]
0x04654070: e0430191  add x0, sp, #0x50
0x04654074: 02008012  movn w2, #0
0x04654078: e1031f2a  mov w1, wzr
0x0465407C: e3031faa  mov x3, xzr
0x04654080: e81600f9  str x8, [x23, #0x28]
0x04654084: ff2b00f9  str xzr, [sp, #0x50]
0x04654088: 03a78a94  bl #0x68fdc94
0x0465408C: e81a40b9  ldr w8, [x23, #0x18]
0x04654090: 1f090071  cmp w8, #2
0x04654094: 89100054  b.ls #0x46542a4
0x04654098: e82b40f9  ldr x8, [sp, #0x50]
0x0465409C: e0230191  add x0, sp, #0x48
0x046540A0: 22008052  movz w2, #0x1
0x046540A4: e1031f2a  mov w1, wzr
0x046540A8: e3031faa  mov x3, xzr
0x046540AC: e81a00f9  str x8, [x23, #0x30]
0x046540B0: ff2700f9  str xzr, [sp, #0x48]
0x046540B4: f8a68a94  bl #0x68fdc94
0x046540B8: e81a40b9  ldr w8, [x23, #0x18]
0x046540BC: 1f0d0071  cmp w8, #3
0x046540C0: 290f0054  b.ls #0x46542a4
0x046540C4: e82740f9  ldr x8, [sp, #0x48]
0x046540C8: e00313aa  mov x0, x19
0x046540CC: e10317aa  mov x1, x23
0x046540D0: e81e00f9  str x8, [x23, #0x38]
0x046540D4: 178c02f8  str x23, [x0, #0x28]!
0x046540D8: 3bb2ac97  bl #0x31809c4
0x046540DC: 000340f9  ldr x0, [x24]
0x046540E0: 01018052  movz w1, #0x8
0x046540E4: 86b2ac97  bl #0x3180afc
0x046540E8: f70300aa  mov x23, x0
0x046540EC: e0030191  add x0, sp, #0x40
0x046540F0: 01008012  movn w1, #0
0x046540F4: e2031f2a  mov w2, wzr
0x046540F8: e3031faa  mov x3, xzr
0x046540FC: ff2300f9  str xzr, [sp, #0x40]
0x04654100: e5a68a94  bl #0x68fdc94
0x04654104: 370d00b4  cbz x23, #0x46542a8
0x04654108: e81a40b9  ldr w8, [x23, #0x18]
0x0465410C: c80c0034  cbz w8, #0x46542a4
0x04654110: e82340f9  ldr x8, [sp, #0x40]
0x04654114: e0e30091  add x0, sp, #0x38
0x04654118: 21008052  movz w1, #0x1
0x0465411C: e2031f2a  mov w2, wzr
0x04654120: e3031faa  mov x3, xzr
0x04654124: e81200f9  str x8, [x23, #0x20]
0x04654128: ff1f00f9  str xzr, [sp, #0x38]
0x0465412C: daa68a94  bl #0x68fdc94
0x04654130: e81a40b9  ldr w8, [x23, #0x18]
0x04654134: 1f050071  cmp w8, #1
0x04654138: 690b0054  b.ls #0x46542a4
0x0465413C: e81f40f9  ldr x8, [sp, #0x38]
0x04654140: e0c30091  add x0, sp, #0x30
0x04654144: 02008012  movn w2, #0
0x04654148: e1031f2a  mov w1, wzr
0x0465414C: e3031faa  mov x3, xzr
0x04654150: e81600f9  str x8, [x23, #0x28]
0x04654154: ff1b00f9  str xzr, [sp, #0x30]
0x04654158: cfa68a94  bl #0x68fdc94
0x0465415C: e81a40b9  ldr w8, [x23, #0x18]
0x04654160: 1f090071  cmp w8, #2
0x04654164: 090a0054  b.ls #0x46542a4
0x04654168: e81b40f9  ldr x8, [sp, #0x30]
0x0465416C: e0a30091  add x0, sp, #0x28
0x04654170: 22008052  movz w2, #0x1
0x04654174: e1031f2a  mov w1, wzr
0x04654178: e3031faa  mov x3, xzr
0x0465417C: e81a00f9  str x8, [x23, #0x30]
0x04654180: ff1700f9  str xzr, [sp, #0x28]
0x04654184: c4a68a94  bl #0x68fdc94
0x04654188: e81a40b9  ldr w8, [x23, #0x18]
0x0465418C: 1f0d0071  cmp w8, #3
0x04654190: a9080054  b.ls #0x46542a4
0x04654194: e81740f9  ldr x8, [sp, #0x28]
0x04654198: e0830091  add x0, sp, #0x20
0x0465419C: 01008012  movn w1, #0
0x046541A0: 02008012  movn w2, #0
0x046541A4: e3031faa  mov x3, xzr
0x046541A8: e81e00f9  str x8, [x23, #0x38]
0x046541AC: ff1300f9  str xzr, [sp, #0x20]
0x046541B0: b9a68a94  bl #0x68fdc94
0x046541B4: e81a40b9  ldr w8, [x23, #0x18]
0x046541B8: 1f110071  cmp w8, #4
0x046541BC: 49070054  b.ls #0x46542a4
0x046541C0: e81340f9  ldr x8, [sp, #0x20]
0x046541C4: e0630091  add x0, sp, #0x18
0x046541C8: 01008012  movn w1, #0
0x046541CC: 22008052  movz w2, #0x1
0x046541D0: e3031faa  mov x3, xzr
0x046541D4: e82200f9  str x8, [x23, #0x40]
0x046541D8: ff0f00f9  str xzr, [sp, #0x18]
0x046541DC: aea68a94  bl #0x68fdc94
0x046541E0: e81a40b9  ldr w8, [x23, #0x18]
0x046541E4: 1f150071  cmp w8, #5
0x046541E8: e9050054  b.ls #0x46542a4
0x046541EC: e80f40f9  ldr x8, [sp, #0x18]
0x046541F0: e0430091  add x0, sp, #0x10
0x046541F4: 21008052  movz w1, #0x1
0x046541F8: 22008052  movz w2, #0x1
0x046541FC: e3031faa  mov x3, xzr
0x04654200: e82600f9  str x8, [x23, #0x48]
0x04654204: ff0b00f9  str xzr, [sp, #0x10]
0x04654208: a3a68a94  bl #0x68fdc94
0x0465420C: e81a40b9  ldr w8, [x23, #0x18]
0x04654210: 1f190071  cmp w8, #6
0x04654214: 89040054  b.ls #0x46542a4
0x04654218: e80b40f9  ldr x8, [sp, #0x10]
0x0465421C: e0230091  add x0, sp, #8
0x04654220: 21008052  movz w1, #0x1
0x04654224: 02008012  movn w2, #0
0x04654228: e3031faa  mov x3, xzr
0x0465422C: e82a00f9  str x8, [x23, #0x50]
0x04654230: ff0700f9  str xzr, [sp, #8]
0x04654234: 98a68a94  bl #0x68fdc94
0x04654238: e81a40b9  ldr w8, [x23, #0x18]
0x0465423C: 1f1d0071  cmp w8, #7
0x04654240: 29030054  b.ls #0x46542a4
0x04654244: e80740f9  ldr x8, [sp, #8]
0x04654248: e00313aa  mov x0, x19
0x0465424C: e10317aa  mov x1, x23
0x04654250: e82e00f9  str x8, [x23, #0x58]
0x04654254: 170c03f8  str x23, [x0, #0x30]!
0x04654258: dbb1ac97  bl #0x31809c4
0x0465425C: e00313aa  mov x0, x19
0x04654260: e1031faa  mov x1, xzr
0x04654264: e6184294  bl #0x56da5fc
0x04654268: 76560229  stp w22, w21, [x19, #0x10]
0x0465426C: 881240f9  ldr x8, [x20, #0x20]
0x04654270: e00313aa  mov x0, x19
0x04654274: 086140f9  ldr x8, [x8, #0xc0]
0x04654278: 010540f9  ldr x1, [x8, #8]
0x0465427C: 4e000094  bl #0x46543b4
0x04654280: e00313aa  mov x0, x19
0x04654284: 0a000094  bl #0x46542ac
0x04654288: f44f4aa9  ldp x20, x19, [sp, #0xa0]
0x0465428C: f65749a9  ldp x22, x21, [sp, #0x90]
0x04654290: f85f48a9  ldp x24, x23, [sp, #0x80]
0x04654294: fa6747a9  ldp x26, x25, [sp, #0x70]
0x04654298: fe3340f9  ldr x30, [sp, #0x60]
0x0465429C: ffc30291  add sp, sp, #0xb0
0x046542A0: c0035fd6  ret
0x046542A4: 84b2ac97  bl #0x3180cb4
0x046542A8: 81b2ac97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x46542AC | MergeEngine.Util.TwoDArray<object>$$FillEmptyPositions
; native signature: void MergeEngine_Util_TwoDArray_object___FillEmptyPositions (MergeEngine_Util_TwoDArray_T__o* __this, const MethodInfo_46542AC* method);
; bytes=264 sha256=7a065a1c5c8d27095c94e1674c1813de4792f8e1fc1135a27e50c4e19ce06a26 status=arm64_complete_bound indexed_start=True
0x046542AC: ff0301d1  sub sp, sp, #0x40
0x046542B0: fe5f01a9  stp x30, x23, [sp, #0x10]
0x046542B4: f65702a9  stp x22, x21, [sp, #0x20]
0x046542B8: f44f03a9  stp x20, x19, [sp, #0x30]
0x046542BC: 34b601b0  adrp x20, #0x7d19000
0x046542C0: 886a5b39  ldrb w8, [x20, #0x6da]
0x046542C4: f30300aa  mov x19, x0
0x046542C8: c8000037  tbnz w8, #0, #0x46542e0
0x046542CC: 408101d0  adrp x0, #0x767e000
0x046542D0: 007046f9  ldr x0, [x0, #0xce0]
0x046542D4: d1b1ac97  bl #0x3180a18
0x046542D8: 28008052  movz w8, #0x1
0x046542DC: 886a1b39  strb w8, [x20, #0x6da]
0x046542E0: 681640b9  ldr w8, [x19, #0x14]
0x046542E4: 1f050071  cmp w8, #1
0x046542E8: ab050054  b.lt #0x465439c
0x046542EC: 578101d0  adrp x23, #0x767e000
0x046542F0: 691240b9  ldr w9, [x19, #0x10]
0x046542F4: f77246f9  ldr x23, [x23, #0xce0]
0x046542F8: f4031f2a  mov w20, wzr
0x046542FC: 3f050071  cmp w9, #1
0x04654300: 8b040054  b.lt #0x4654390
0x04654304: f5031f2a  mov w21, wzr
0x04654308: 761240f9  ldr x22, [x19, #0x20]
0x0465430C: e0230091  add x0, sp, #8
0x04654310: e103152a  mov w1, w21
0x04654314: e203142a  mov w2, w20
0x04654318: e3031faa  mov x3, xzr
0x0465431C: ff0700f9  str xzr, [sp, #8]
0x04654320: 5da68a94  bl #0x68fdc94
0x04654324: 760400b4  cbz x22, #0x46543b0
0x04654328: ca1e40b9  ldr w10, [x22, #0x1c]
0x0465432C: e10740f9  ldr x1, [sp, #8]
0x04654330: c80a40f9  ldr x8, [x22, #0x10]
0x04654334: e90240f9  ldr x9, [x23]
0x04654338: 4a050011  add w10, w10, #1
0x0465433C: ca1e00b9  str w10, [x22, #0x1c]
0x04654340: 880300b4  cbz x8, #0x46543b0
0x04654344: ca1a80b9  ldrsw x10, [x22, #0x18]
0x04654348: 0b1940b9  ldr w11, [x8, #0x18]
0x0465434C: 5f010b6b  cmp w10, w11
0x04654350: c2000054  b.hs #0x4654368
0x04654354: 49050011  add w9, w10, #1
0x04654358: 080d0a8b  add x8, x8, x10, lsl #3
0x0465435C: c91a00b9  str w9, [x22, #0x18]
0x04654360: 011100f9  str x1, [x8, #0x20]
0x04654364: 06000014  b #0x465437c
0x04654368: 281140f9  ldr x8, [x9, #0x20]
0x0465436C: e00316aa  mov x0, x22
0x04654370: 086140f9  ldr x8, [x8, #0xc0]
0x04654374: 023940f9  ldr x2, [x8, #0x70]
0x04654378: 2ceae597  bl #0x3fcec28
0x0465437C: 691240b9  ldr w9, [x19, #0x10]
0x04654380: b5060011  add w21, w21, #1
0x04654384: bf02096b  cmp w21, w9
0x04654388: 0bfcff54  b.lt #0x4654308
0x0465438C: 681640b9  ldr w8, [x19, #0x14]
0x04654390: 94060011  add w20, w20, #1
0x04654394: 9f02086b  cmp w20, w8
0x04654398: 2bfbff54  b.lt #0x46542fc
0x0465439C: f44f43a9  ldp x20, x19, [sp, #0x30]
0x046543A0: f65742a9  ldp x22, x21, [sp, #0x20]
0x046543A4: fe5f41a9  ldp x30, x23, [sp, #0x10]
0x046543A8: ff030191  add sp, sp, #0x40
0x046543AC: c0035fd6  ret
0x046543B0: 3fb2ac97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x46543B4 | MergeEngine.Util.TwoDArray<object>$$CreateArray
; native signature: void MergeEngine_Util_TwoDArray_object___CreateArray (MergeEngine_Util_TwoDArray_T__o* __this, const MethodInfo_46543B4* method);
; bytes=260 sha256=52db7a22ecbfe70d5d05bd5249707fcb6629a005bc20d4d40d4dbfd7dc31b363 status=arm64_complete_bound indexed_start=True
0x046543B4: fe0f1cf8  str x30, [sp, #-0x40]!
0x046543B8: f85f01a9  stp x24, x23, [sp, #0x10]
0x046543BC: f65702a9  stp x22, x21, [sp, #0x20]
0x046543C0: f44f03a9  stp x20, x19, [sp, #0x30]
0x046543C4: 281040f9  ldr x8, [x1, #0x20]
0x046543C8: f40300aa  mov x20, x0
0x046543CC: 951640b9  ldr w21, [x20, #0x14]
0x046543D0: f30301aa  mov x19, x1
0x046543D4: 086140f9  ldr x8, [x8, #0xc0]
0x046543D8: 000d40f9  ldr x0, [x8, #0x18]
0x046543DC: 08d44439  ldrb w8, [x0, #0x135]
0x046543E0: 48000037  tbnz w8, #0, #0x46543e8
0x046543E4: 0e09ac97  bl #0x315681c
0x046543E8: e103152a  mov w1, w21
0x046543EC: c4b1ac97  bl #0x3180afc
0x046543F0: e10300aa  mov x1, x0
0x046543F4: f50314aa  mov x21, x20
0x046543F8: a18e01f8  str x1, [x21, #0x18]!
0x046543FC: e00315aa  mov x0, x21
0x04654400: 71b1ac97  bl #0x31809c4
0x04654404: a8c25fb8  ldur w8, [x21, #-4]
0x04654408: 1f050071  cmp w8, #1
0x0465440C: 2b040054  b.lt #0x4654490
0x04654410: f6031faa  mov x22, xzr
0x04654414: 17048052  movz w23, #0x20
0x04654418: 681240f9  ldr x8, [x19, #0x20]
0x0465441C: 980e40f9  ldr x24, [x20, #0x18]
0x04654420: 951240b9  ldr w21, [x20, #0x10]
0x04654424: 086140f9  ldr x8, [x8, #0xc0]
0x04654428: 001540f9  ldr x0, [x8, #0x28]
0x0465442C: 08d44439  ldrb w8, [x0, #0x135]
0x04654430: 48000037  tbnz w8, #0, #0x4654438
0x04654434: fa08ac97  bl #0x315681c
0x04654438: e103152a  mov w1, w21
0x0465443C: b0b1ac97  bl #0x3180afc
0x04654440: 380300b4  cbz x24, #0x46544a4
0x04654444: f50300aa  mov x21, x0
0x04654448: c00000b4  cbz x0, #0x4654460
0x0465444C: 080340f9  ldr x8, [x24]
0x04654450: e00315aa  mov x0, x21
0x04654454: 012140f9  ldr x1, [x8, #0x40]
0x04654458: ceb1ac97  bl #0x3180b90
0x0465445C: 800200b4  cbz x0, #0x46544ac
0x04654460: 081b40b9  ldr w8, [x24, #0x18]
0x04654464: df0208eb  cmp x22, x8
0x04654468: 02020054  b.hs #0x46544a8
0x0465446C: 0003178b  add x0, x24, x23
0x04654470: e10315aa  mov x1, x21
0x04654474: 150000f9  str x21, [x0]
0x04654478: 53b1ac97  bl #0x31809c4
0x0465447C: 881680b9  ldrsw x8, [x20, #0x14]
0x04654480: d6060091  add x22, x22, #1
0x04654484: f7220091  add x23, x23, #8
0x04654488: df0208eb  cmp x22, x8
0x0465448C: 6bfcff54  b.lt #0x4654418
0x04654490: f44f43a9  ldp x20, x19, [sp, #0x30]
0x04654494: f65742a9  ldp x22, x21, [sp, #0x20]
0x04654498: f85f41a9  ldp x24, x23, [sp, #0x10]
0x0465449C: fe0744f8  ldr x30, [sp], #0x40
0x046544A0: c0035fd6  ret
0x046544A4: 02b2ac97  bl #0x3180cac
0x046544A8: 03b2ac97  bl #0x3180cb4
0x046544AC: 09b2ac97  bl #0x3180cd0
0x046544B0: e1031faa  mov x1, xzr
0x046544B4: b2b1ac97  bl #0x3180b7c

; Generic instantiation from Il2CppDumper script.json | RVA 0x46544B8 | MergeEngine.Util.TwoDArray<object>$$GetItem
; native signature: Il2CppObject* MergeEngine_Util_TwoDArray_object___GetItem (MergeEngine_Util_TwoDArray_T__o* __this, MergeEngine_Data_BoardItemPosition_o position, const MethodInfo_46544B8* method);
; bytes=84 sha256=ff67399cedb5e56c2e16476971220506ed2aa825d56b13c38baaf77da3542b87 status=arm64_complete_bound indexed_start=True
0x046544B8: fe0f1ff8  str x30, [sp, #-0x10]!
0x046544BC: 080c40f9  ldr x8, [x0, #0x18]
0x046544C0: 280200b4  cbz x8, #0x4654504
0x046544C4: 091940b9  ldr w9, [x8, #0x18]
0x046544C8: 2afc60d3  lsr x10, x1, #0x20
0x046544CC: 5f01096b  cmp w10, w9
0x046544D0: c2010054  b.hs #0x4654508
0x046544D4: 29fc6093  asr x9, x1, #0x20
0x046544D8: 080d098b  add x8, x8, x9, lsl #3
0x046544DC: 081140f9  ldr x8, [x8, #0x20]
0x046544E0: 280100b4  cbz x8, #0x4654504
0x046544E4: 091940b9  ldr w9, [x8, #0x18]
0x046544E8: 3f00096b  cmp w1, w9
0x046544EC: e2000054  b.hs #0x4654508
0x046544F0: 297c60d3  lsl x9, x1, #0x20
0x046544F4: 0875898b  add x8, x8, x9, asr #29
0x046544F8: 001140f9  ldr x0, [x8, #0x20]
0x046544FC: fe0741f8  ldr x30, [sp], #0x10
0x04654500: c0035fd6  ret
0x04654504: eab1ac97  bl #0x3180cac
0x04654508: ebb1ac97  bl #0x3180cb4

; Generic instantiation from Il2CppDumper script.json | RVA 0x465450C | MergeEngine.Util.TwoDArray<object>$$SetItem
; native signature: bool MergeEngine_Util_TwoDArray_object___SetItem (MergeEngine_Util_TwoDArray_T__o* __this, MergeEngine_Data_BoardItemPosition_o position, Il2CppObject* item, const MethodInfo_465450C* method);
; bytes=344 sha256=6b105791684651e7cb1110d8004a97a653d13c446738b62f9fcced71bc32f6dd status=arm64_complete_bound indexed_start=True
0x0465450C: fe0f1df8  str x30, [sp, #-0x30]!
0x04654510: f65701a9  stp x22, x21, [sp, #0x10]
0x04654514: f44f02a9  stp x20, x19, [sp, #0x20]
0x04654518: 36b601b0  adrp x22, #0x7d19000
0x0465451C: c86e5b39  ldrb w8, [x22, #0x6db]
0x04654520: f50302aa  mov x21, x2
0x04654524: f30301aa  mov x19, x1
0x04654528: f40300aa  mov x20, x0
0x0465452C: 88010037  tbnz w8, #0, #0x465455c
0x04654530: 408101d0  adrp x0, #0x767e000
0x04654534: 007046f9  ldr x0, [x0, #0xce0]
0x04654538: 38b1ac97  bl #0x3180a18
0x0465453C: 408101d0  adrp x0, #0x767e000
0x04654540: 007446f9  ldr x0, [x0, #0xce8]
0x04654544: 35b1ac97  bl #0x3180a18
0x04654548: 408101d0  adrp x0, #0x767e000
0x0465454C: 007846f9  ldr x0, [x0, #0xcf0]
0x04654550: 32b1ac97  bl #0x3180a18
0x04654554: 28008052  movz w8, #0x1
0x04654558: c86e1b39  strb w8, [x22, #0x6db]
0x0465455C: 880e40f9  ldr x8, [x20, #0x18]
0x04654560: e80700b4  cbz x8, #0x465465c
0x04654564: 091940b9  ldr w9, [x8, #0x18]
0x04654568: 6afe60d3  lsr x10, x19, #0x20
0x0465456C: 5f01096b  cmp w10, w9
0x04654570: 82070054  b.hs #0x4654660
0x04654574: 69fe6093  asr x9, x19, #0x20
0x04654578: 080d098b  add x8, x8, x9, lsl #3
0x0465457C: 081140f9  ldr x8, [x8, #0x20]
0x04654580: e80600b4  cbz x8, #0x465465c
0x04654584: 091940b9  ldr w9, [x8, #0x18]
0x04654588: 7f02096b  cmp w19, w9
0x0465458C: a2060054  b.hs #0x4654660
0x04654590: 697e60d3  lsl x9, x19, #0x20
0x04654594: 0075898b  add x0, x8, x9, asr #29
0x04654598: 150c02f8  str x21, [x0, #0x20]!
0x0465459C: e10315aa  mov x1, x21
0x046545A0: 09b1ac97  bl #0x31809c4
0x046545A4: 801240f9  ldr x0, [x20, #0x20]
0x046545A8: a00500b4  cbz x0, #0x465465c
0x046545AC: 750100b4  cbz x21, #0x46545d8
0x046545B0: 488101d0  adrp x8, #0x767e000
0x046545B4: 087946f9  ldr x8, [x8, #0xcf0]
0x046545B8: e10313aa  mov x1, x19
0x046545BC: 020140f9  ldr x2, [x8]
0x046545C0: 33efe597  bl #0x3fd028c
0x046545C4: 20008052  movz w0, #0x1
0x046545C8: f44f42a9  ldp x20, x19, [sp, #0x20]
0x046545CC: f65741a9  ldp x22, x21, [sp, #0x10]
0x046545D0: fe0743f8  ldr x30, [sp], #0x30
0x046545D4: c0035fd6  ret
0x046545D8: 488101d0  adrp x8, #0x767e000
0x046545DC: 087546f9  ldr x8, [x8, #0xce8]
0x046545E0: e10313aa  mov x1, x19
0x046545E4: 020140f9  ldr x2, [x8]
0x046545E8: 6eeae597  bl #0x3fcefa0
0x046545EC: 60000036  tbz w0, #0, #0x46545f8
0x046545F0: e0031f2a  mov w0, wzr
0x046545F4: f5ffff17  b #0x46545c8
0x046545F8: 801240f9  ldr x0, [x20, #0x20]
0x046545FC: 000300b4  cbz x0, #0x465465c
0x04654600: 498101d0  adrp x9, #0x767e000
0x04654604: 297146f9  ldr x9, [x9, #0xce0]
0x04654608: 0a1c40b9  ldr w10, [x0, #0x1c]
0x0465460C: 080840f9  ldr x8, [x0, #0x10]
0x04654610: 290140f9  ldr x9, [x9]
0x04654614: 4a050011  add w10, w10, #1
0x04654618: 0a1c00b9  str w10, [x0, #0x1c]
0x0465461C: 080200b4  cbz x8, #0x465465c
0x04654620: 0a1880b9  ldrsw x10, [x0, #0x18]
0x04654624: 0b1940b9  ldr w11, [x8, #0x18]
0x04654628: 5f010b6b  cmp w10, w11
0x0465462C: c2000054  b.hs #0x4654644
0x04654630: 49050011  add w9, w10, #1
0x04654634: 080d0a8b  add x8, x8, x10, lsl #3
0x04654638: 091800b9  str w9, [x0, #0x18]
0x0465463C: 131100f9  str x19, [x8, #0x20]
0x04654640: e1ffff17  b #0x46545c4
0x04654644: 281140f9  ldr x8, [x9, #0x20]
0x04654648: e10313aa  mov x1, x19
0x0465464C: 086140f9  ldr x8, [x8, #0xc0]
0x04654650: 023940f9  ldr x2, [x8, #0x70]
0x04654654: 75e9e597  bl #0x3fcec28
0x04654658: dbffff17  b #0x46545c4
0x0465465C: 94b1ac97  bl #0x3180cac
0x04654660: 95b1ac97  bl #0x3180cb4

; Generic instantiation from Il2CppDumper script.json | RVA 0x4654664 | MergeEngine.Util.TwoDArray<object>$$GetAdjacentPositions
; native signature: System_Collections_Generic_List_BoardItemPosition__o* MergeEngine_Util_TwoDArray_object___GetAdjacentPositions (MergeEngine_Util_TwoDArray_T__o* __this, MergeEngine_Data_BoardItemPosition_o position, bool includeDiagonal, const MethodInfo_4654664* method);
; bytes=400 sha256=277bfc7c2c6000f1e2f1d1e324b4cacb54328db893f29e09588318cafe0ba749 status=arm64_complete_bound indexed_start=True
0x04654664: fe0f1bf8  str x30, [sp, #-0x50]!
0x04654668: fa6701a9  stp x26, x25, [sp, #0x10]
0x0465466C: f85f02a9  stp x24, x23, [sp, #0x20]
0x04654670: f65703a9  stp x22, x21, [sp, #0x30]
0x04654674: f44f04a9  stp x20, x19, [sp, #0x40]
0x04654678: 38b601b0  adrp x24, #0x7d19000
0x0465467C: 578101d0  adrp x23, #0x767e000
0x04654680: 558101d0  adrp x21, #0x767e000
0x04654684: 08735b39  ldrb w8, [x24, #0x6dc]
0x04654688: f76646f9  ldr x23, [x23, #0xcc8]
0x0465468C: b56a46f9  ldr x21, [x21, #0xcd0]
0x04654690: f603022a  mov w22, w2
0x04654694: f30301aa  mov x19, x1
0x04654698: f40300aa  mov x20, x0
0x0465469C: 88010037  tbnz w8, #0, #0x46546cc
0x046546A0: 408101d0  adrp x0, #0x767e000
0x046546A4: 007046f9  ldr x0, [x0, #0xce0]
0x046546A8: dcb0ac97  bl #0x3180a18
0x046546AC: 408101d0  adrp x0, #0x767e000
0x046546B0: 006846f9  ldr x0, [x0, #0xcd0]
0x046546B4: d9b0ac97  bl #0x3180a18
0x046546B8: 408101d0  adrp x0, #0x767e000
0x046546BC: 006446f9  ldr x0, [x0, #0xcc8]
0x046546C0: d6b0ac97  bl #0x3180a18
0x046546C4: 28008052  movz w8, #0x1
0x046546C8: 08731b39  strb w8, [x24, #0x6dc]
0x046546CC: e00240f9  ldr x0, [x23]
0x046546D0: ff0700f9  str xzr, [sp, #8]
0x046546D4: 73b1ac97  bl #0x3180ca0
0x046546D8: a10240f9  ldr x1, [x21]
0x046546DC: f50300aa  mov x21, x0
0x046546E0: 3de7e597  bl #0x3fce3d4
0x046546E4: df020072  tst w22, #1
0x046546E8: 08058052  movz w8, #0x28
0x046546EC: 09068052  movz w9, #0x30
0x046546F0: 2811889a  csel x8, x9, x8, ne
0x046546F4: 966a68f8  ldr x22, [x20, x8]
0x046546F8: d60700b4  cbz x22, #0x46547f0
0x046546FC: c80e40f9  ldr x8, [x22, #0x18]
0x04654700: 1f050071  cmp w8, #1
0x04654704: 6b060054  b.lt #0x46547d0
0x04654708: 598101d0  adrp x25, #0x767e000
0x0465470C: 397346f9  ldr x25, [x25, #0xce0]
0x04654710: f7031faa  mov x23, xzr
0x04654714: 78fe60d3  lsr x24, x19, #0x20
0x04654718: 087d4092  and x8, x8, #0xffffffff
0x0465471C: da820091  add x26, x22, #0x20
0x04654720: ff4228eb  cmp x23, w8, uxtw
0x04654724: 42060054  b.hs #0x46547ec
0x04654728: 480f178b  add x8, x26, x23, lsl #3
0x0465472C: 09214029  ldp w9, w8, [x8]
0x04654730: e0230091  add x0, sp, #8
0x04654734: e3031faa  mov x3, xzr
0x04654738: 2101130b  add w1, w9, w19
0x0465473C: 0201180b  add w2, w8, w24
0x04654740: 55a58a94  bl #0x68fdc94
0x04654744: e10740f9  ldr x1, [sp, #8]
0x04654748: c103f837  tbnz w1, #0x1f, #0x46547c0
0x0465474C: 28fc60d3  lsr x8, x1, #0x20
0x04654750: 8803f837  tbnz w8, #0x1f, #0x46547c0
0x04654754: 891240b9  ldr w9, [x20, #0x10]
0x04654758: 3f01016b  cmp w9, w1
0x0465475C: 2d030054  b.le #0x46547c0
0x04654760: 891640b9  ldr w9, [x20, #0x14]
0x04654764: 3f01086b  cmp w9, w8
0x04654768: cd020054  b.le #0x46547c0
0x0465476C: 350400b4  cbz x21, #0x46547f0
0x04654770: aa1e40b9  ldr w10, [x21, #0x1c]
0x04654774: a80a40f9  ldr x8, [x21, #0x10]
0x04654778: 290340f9  ldr x9, [x25]
0x0465477C: 4a050011  add w10, w10, #1
0x04654780: aa1e00b9  str w10, [x21, #0x1c]
0x04654784: 680300b4  cbz x8, #0x46547f0
0x04654788: aa1a80b9  ldrsw x10, [x21, #0x18]
0x0465478C: 0b1940b9  ldr w11, [x8, #0x18]
0x04654790: 5f010b6b  cmp w10, w11
0x04654794: c2000054  b.hs #0x46547ac
0x04654798: 49050011  add w9, w10, #1
0x0465479C: 080d0a8b  add x8, x8, x10, lsl #3
0x046547A0: a91a00b9  str w9, [x21, #0x18]
0x046547A4: 011100f9  str x1, [x8, #0x20]
0x046547A8: 06000014  b #0x46547c0
0x046547AC: 281140f9  ldr x8, [x9, #0x20]
0x046547B0: e00315aa  mov x0, x21
0x046547B4: 086140f9  ldr x8, [x8, #0xc0]
0x046547B8: 023940f9  ldr x2, [x8, #0x70]
0x046547BC: 1be9e597  bl #0x3fcec28
0x046547C0: c81a40b9  ldr w8, [x22, #0x18]
0x046547C4: f7060091  add x23, x23, #1
0x046547C8: ffc228eb  cmp x23, w8, sxtw
0x046547CC: abfaff54  b.lt #0x4654720
0x046547D0: e00315aa  mov x0, x21
0x046547D4: f44f44a9  ldp x20, x19, [sp, #0x40]
0x046547D8: f65743a9  ldp x22, x21, [sp, #0x30]
0x046547DC: f85f42a9  ldp x24, x23, [sp, #0x20]
0x046547E0: fa6741a9  ldp x26, x25, [sp, #0x10]
0x046547E4: fe0745f8  ldr x30, [sp], #0x50
0x046547E8: c0035fd6  ret
0x046547EC: 32b1ac97  bl #0x3180cb4
0x046547F0: 2fb1ac97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x46547F4 | MergeEngine.Util.TwoDArray<object>$$IsInBounds
; native signature: bool MergeEngine_Util_TwoDArray_object___IsInBounds (MergeEngine_Util_TwoDArray_T__o* __this, MergeEngine_Data_BoardItemPosition_o boardItemPosition, const MethodInfo_46547F4* method);
; bytes=56 sha256=a192b46097817427a456fa3e0f3f7f3ff5bb9a1d35f3c5d3152ba1ffd69915d2 status=arm64_complete_bound indexed_start=True
0x046547F4: 8101f837  tbnz w1, #0x1f, #0x4654824
0x046547F8: e80300aa  mov x8, x0
0x046547FC: 29fc60d3  lsr x9, x1, #0x20
0x04654800: e0031f2a  mov w0, wzr
0x04654804: e900f837  tbnz w9, #0x1f, #0x4654820
0x04654808: 0a1140b9  ldr w10, [x8, #0x10]
0x0465480C: 5f01016b  cmp w10, w1
0x04654810: 8d000054  b.le #0x4654820
0x04654814: 081540b9  ldr w8, [x8, #0x14]
0x04654818: 1f01096b  cmp w8, w9
0x0465481C: e0d79f1a  cset w0, gt
0x04654820: c0035fd6  ret
0x04654824: e0031f2a  mov w0, wzr
0x04654828: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x465482C | MergeEngine.Util.TwoDArray<object>$$ForEach
; native signature: void MergeEngine_Util_TwoDArray_object___ForEach (MergeEngine_Util_TwoDArray_T__o* __this, System_Action_T__o* action, const MethodInfo_465482C* method);
; bytes=204 sha256=30b77646398f7af40d140702217e53f6d2ad203a388990c732371742e5bb33fb status=arm64_complete_bound indexed_start=True
0x0465482C: fe0f1df8  str x30, [sp, #-0x30]!
0x04654830: f65701a9  stp x22, x21, [sp, #0x10]
0x04654834: f44f02a9  stp x20, x19, [sp, #0x20]
0x04654838: 481040f9  ldr x8, [x2, #0x20]
0x0465483C: f30302aa  mov x19, x2
0x04654840: f60301aa  mov x22, x1
0x04654844: f50300aa  mov x21, x0
0x04654848: 086140f9  ldr x8, [x8, #0xc0]
0x0465484C: 082140f9  ldr x8, [x8, #0x40]
0x04654850: 09d54439  ldrb w9, [x8, #0x135]
0x04654854: 89000037  tbnz w9, #0, #0x4654864
0x04654858: e00308aa  mov x0, x8
0x0465485C: f007ac97  bl #0x315681c
0x04654860: e80300aa  mov x8, x0
0x04654864: e00308aa  mov x0, x8
0x04654868: 0eb1ac97  bl #0x3180ca0
0x0465486C: 681240f9  ldr x8, [x19, #0x20]
0x04654870: f40300aa  mov x20, x0
0x04654874: 086140f9  ldr x8, [x8, #0xc0]
0x04654878: 012540f9  ldr x1, [x8, #0x48]
0x0465487C: c9abe397  bl #0x3f3f7a0
0x04654880: b40300b4  cbz x20, #0x46548f4
0x04654884: e00314aa  mov x0, x20
0x04654888: 160c01f8  str x22, [x0, #0x10]!
0x0465488C: e10316aa  mov x1, x22
0x04654890: 4db0ac97  bl #0x31809c4
0x04654894: 681240f9  ldr x8, [x19, #0x20]
0x04654898: b50e40f9  ldr x21, [x21, #0x18]
0x0465489C: 086140f9  ldr x8, [x8, #0xc0]
0x046548A0: 003140f9  ldr x0, [x8, #0x60]
0x046548A4: 08d44439  ldrb w8, [x0, #0x135]
0x046548A8: 48000037  tbnz w8, #0, #0x46548b0
0x046548AC: dc07ac97  bl #0x315681c
0x046548B0: fcb0ac97  bl #0x3180ca0
0x046548B4: 681240f9  ldr x8, [x19, #0x20]
0x046548B8: e10314aa  mov x1, x20
0x046548BC: f60300aa  mov x22, x0
0x046548C0: 086140f9  ldr x8, [x8, #0xc0]
0x046548C4: 022d40f9  ldr x2, [x8, #0x58]
0x046548C8: 033540f9  ldr x3, [x8, #0x68]
0x046548CC: 42363394  bl #0x53221d4
0x046548D0: 681240f9  ldr x8, [x19, #0x20]
0x046548D4: e00315aa  mov x0, x21
0x046548D8: e10316aa  mov x1, x22
0x046548DC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x046548E0: 086140f9  ldr x8, [x8, #0xc0]
0x046548E4: f65741a9  ldp x22, x21, [sp, #0x10]
0x046548E8: 023940f9  ldr x2, [x8, #0x70]
0x046548EC: fe0743f8  ldr x30, [sp], #0x30
0x046548F0: dae9da17  b #0x3d0f058
0x046548F4: eeb0ac97  bl #0x3180cac

