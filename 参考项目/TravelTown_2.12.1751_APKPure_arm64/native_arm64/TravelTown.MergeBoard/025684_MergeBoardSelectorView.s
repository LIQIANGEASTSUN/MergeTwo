; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25684 Merger.MergeBoard.View.MergeBoardSelectorView
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A37A68 | public bool IsItemSelected(IBoardItemView itemView) { }
; bytes=16 sha256=02e16965d39e6646b7b6072e418396b771e2b56cc7f00cb9bf033f69a3abeb43 status=arm64_complete_bound indexed_start=True
0x06A37A68: 082040f9  ldr x8, [x0, #0x40]
0x06A37A6C: 1f0101eb  cmp x8, x1
0x06A37A70: e0179f1a  cset w0, eq
0x06A37A74: c0035fd6  ret

; RVA 0x6A37A78 | public void Show() { }
; bytes=128 sha256=1e2318fca560a8b0ddcd82d24d472a5f3ba1261fdd9cac4f22b254b24a9b2c7f status=arm64_complete_bound indexed_start=True
0x06A37A78: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A37A7C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A37A80: 949700f0  adrp x20, #0x7d2a000
0x06A37A84: 886e5339  ldrb w8, [x20, #0x4db]
0x06A37A88: f30300aa  mov x19, x0
0x06A37A8C: c8000037  tbnz w8, #0, #0x6a37aa4
0x06A37A90: c0670090  adrp x0, #0x772f000
0x06A37A94: 003c43f9  ldr x0, [x0, #0x678]
0x06A37A98: e0231d97  bl #0x3180a18
0x06A37A9C: 28008052  movz w8, #0x1
0x06A37AA0: 886e1339  strb w8, [x20, #0x4db]
0x06A37AA4: 612240f9  ldr x1, [x19, #0x40]
0x06A37AA8: 010200b4  cbz x1, #0x6a37ae8
0x06A37AAC: 601640f9  ldr x0, [x19, #0x28]
0x06A37AB0: 200200b4  cbz x0, #0x6a37af4
0x06A37AB4: e0eaff97  bl #0x6a32634
0x06A37AB8: 681640f9  ldr x8, [x19, #0x28]
0x06A37ABC: c80100b4  cbz x8, #0x6a37af4
0x06A37AC0: 742240f9  ldr x20, [x19, #0x40]
0x06A37AC4: e103002a  mov w1, w0
0x06A37AC8: e00308aa  mov x0, x8
0x06A37ACC: b0eaff97  bl #0x6a3258c
0x06A37AD0: e20300aa  mov x2, x0
0x06A37AD4: e00313aa  mov x0, x19
0x06A37AD8: e10314aa  mov x1, x20
0x06A37ADC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A37AE0: fe0742f8  ldr x30, [sp], #0x20
0x06A37AE4: 05000014  b #0x6a37af8
0x06A37AE8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A37AEC: fe0742f8  ldr x30, [sp], #0x20
0x06A37AF0: c0035fd6  ret
0x06A37AF4: 6e241d97  bl #0x3180cac

; RVA 0x6A37C6C | public void Hide() { }
; bytes=108 sha256=a239a50443b2d4b7fb983b2d06ebe701b111c3c29d54ab30f86edbd60356d8ea status=arm64_complete_bound indexed_start=True
0x06A37C6C: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A37C70: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A37C74: f30300aa  mov x19, x0
0x06A37C78: 001840f9  ldr x0, [x0, #0x30]
0x06A37C7C: c00200b4  cbz x0, #0x6a37cd4
0x06A37C80: e1031f2a  mov w1, wzr
0x06A37C84: e2031faa  mov x2, xzr
0x06A37C88: 1e8ef397  bl #0x671b500
0x06A37C8C: 601a40f9  ldr x0, [x19, #0x30]
0x06A37C90: 200200b4  cbz x0, #0x6a37cd4
0x06A37C94: e1031faa  mov x1, xzr
0x06A37C98: 7f901294  bl #0x6edbe94
0x06A37C9C: f40300aa  mov x20, x0
0x06A37CA0: e00313aa  mov x0, x19
0x06A37CA4: e1031faa  mov x1, xzr
0x06A37CA8: 8a901294  bl #0x6edbed0
0x06A37CAC: 400100b4  cbz x0, #0x6a37cd4
0x06A37CB0: e1031faa  mov x1, xzr
0x06A37CB4: 1f9d1294  bl #0x6edf130
0x06A37CB8: f40000b4  cbz x20, #0x6a37cd4
0x06A37CBC: e10300aa  mov x1, x0
0x06A37CC0: e00314aa  mov x0, x20
0x06A37CC4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A37CC8: e2031faa  mov x2, xzr
0x06A37CCC: fe0742f8  ldr x30, [sp], #0x20
0x06A37CD0: 67ce1214  b #0x6eeb66c
0x06A37CD4: f6231d97  bl #0x3180cac

; RVA 0x6A37CD8 | public void SetSelectedItem(IBoardItemView itemView) { }
; bytes=316 sha256=7d0bd885277574dc5823104ea82d439ec715fa694e09791030282c12a4906304 status=arm64_complete_bound indexed_start=True
0x06A37CD8: fe0f1df8  str x30, [sp, #-0x30]!
0x06A37CDC: f65701a9  stp x22, x21, [sp, #0x10]
0x06A37CE0: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A37CE4: 959700f0  adrp x21, #0x7d2a000
0x06A37CE8: a8725339  ldrb w8, [x21, #0x4dc]
0x06A37CEC: f30301aa  mov x19, x1
0x06A37CF0: f40300aa  mov x20, x0
0x06A37CF4: 28010037  tbnz w8, #0, #0x6a37d18
0x06A37CF8: 406400b0  adrp x0, #0x76c0000
0x06A37CFC: 002c44f9  ldr x0, [x0, #0x858]
0x06A37D00: 46231d97  bl #0x3180a18
0x06A37D04: c0670090  adrp x0, #0x772f000
0x06A37D08: 003c43f9  ldr x0, [x0, #0x678]
0x06A37D0C: 43231d97  bl #0x3180a18
0x06A37D10: 28008052  movz w8, #0x1
0x06A37D14: a8721339  strb w8, [x21, #0x4dc]
0x06A37D18: f50314aa  mov x21, x20
0x06A37D1C: a80e44f8  ldr x8, [x21, #0x40]!
0x06A37D20: 1f0113eb  cmp x8, x19
0x06A37D24: 60030054  b.eq #0x6a37d90
0x06A37D28: e00315aa  mov x0, x21
0x06A37D2C: e10313aa  mov x1, x19
0x06A37D30: b30200f9  str x19, [x21]
0x06A37D34: 24231d97  bl #0x31809c4
0x06A37D38: a80240f9  ldr x8, [x21]
0x06A37D3C: 280500b4  cbz x8, #0x6a37de0
0x06A37D40: 930600b4  cbz x19, #0x6a37e10
0x06A37D44: 4a6400b0  adrp x10, #0x76c0000
0x06A37D48: 680240f9  ldr x8, [x19]
0x06A37D4C: 96d642a9  ldp x22, x21, [x20, #0x28]
0x06A37D50: 4a2d44f9  ldr x10, [x10, #0x858]
0x06A37D54: 095d4279  ldrh w9, [x8, #0x12e]
0x06A37D58: 410140f9  ldr x1, [x10]
0x06A37D5C: 290100b4  cbz x9, #0x6a37d80
0x06A37D60: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A37D64: 4a210091  add x10, x10, #8
0x06A37D68: 4b815ff8  ldur x11, [x10, #-8]
0x06A37D6C: 7f0101eb  cmp x11, x1
0x06A37D70: 80010054  b.eq #0x6a37da0
0x06A37D74: 290500f1  subs x9, x9, #1
0x06A37D78: 4a410091  add x10, x10, #0x10
0x06A37D7C: 61ffff54  b.ne #0x6a37d68
0x06A37D80: 62008052  movz w2, #0x3
0x06A37D84: e00313aa  mov x0, x19
0x06A37D88: 627b1c97  bl #0x3156b10
0x06A37D8C: 09000014  b #0x6a37db0
0x06A37D90: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A37D94: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A37D98: fe0743f8  ldr x30, [sp], #0x30
0x06A37D9C: c0035fd6  ret
0x06A37DA0: 490140b9  ldr w9, [x10]
0x06A37DA4: 290d0011  add w9, w9, #3
0x06A37DA8: 08d1298b  add x8, x8, w9, sxtw #4
0x06A37DAC: 00e10491  add x0, x8, #0x138
0x06A37DB0: 080440a9  ldp x8, x1, [x0]
0x06A37DB4: e00313aa  mov x0, x19
0x06A37DB8: 00013fd6  blr x8
0x06A37DBC: b60200b4  cbz x22, #0x6a37e10
0x06A37DC0: e10300aa  mov x1, x0
0x06A37DC4: e00316aa  mov x0, x22
0x06A37DC8: 40e9ff97  bl #0x6a322c8
0x06A37DCC: 350200b4  cbz x21, #0x6a37e10
0x06A37DD0: e103002a  mov w1, w0
0x06A37DD4: e00315aa  mov x0, x21
0x06A37DD8: e2031faa  mov x2, xzr
0x06A37DDC: 578df397  bl #0x671b338
0x06A37DE0: 801e40f9  ldr x0, [x20, #0x38]
0x06A37DE4: 600100b4  cbz x0, #0x6a37e10
0x06A37DE8: 941640f9  ldr x20, [x20, #0x28]
0x06A37DEC: e10313aa  mov x1, x19
0x06A37DF0: 22f2ff97  bl #0x6a34678
0x06A37DF4: f40000b4  cbz x20, #0x6a37e10
0x06A37DF8: e10300aa  mov x1, x0
0x06A37DFC: e00314aa  mov x0, x20
0x06A37E00: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A37E04: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A37E08: fe0743f8  ldr x30, [sp], #0x30
0x06A37E0C: 7be8ff17  b #0x6a31ff8
0x06A37E10: a7231d97  bl #0x3180cac

; RVA 0x6A37E14 | public void SetSelectedItem(int position) { }
; bytes=120 sha256=eb19314a75ae13e190623b6b9d3eeee88d61f55a03533e2e58436b8b4fe3bfc0 status=arm64_complete_bound indexed_start=True
0x06A37E14: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A37E18: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A37E1C: 959700f0  adrp x21, #0x7d2a000
0x06A37E20: a8765339  ldrb w8, [x21, #0x4dd]
0x06A37E24: f403012a  mov w20, w1
0x06A37E28: f30300aa  mov x19, x0
0x06A37E2C: c8000037  tbnz w8, #0, #0x6a37e44
0x06A37E30: c0670090  adrp x0, #0x772f000
0x06A37E34: 003c43f9  ldr x0, [x0, #0x678]
0x06A37E38: f8221d97  bl #0x3180a18
0x06A37E3C: 28008052  movz w8, #0x1
0x06A37E40: a8761339  strb w8, [x21, #0x4dd]
0x06A37E44: 601640f9  ldr x0, [x19, #0x28]
0x06A37E48: 000200b4  cbz x0, #0x6a37e88
0x06A37E4C: e103142a  mov w1, w20
0x06A37E50: a2e9ff97  bl #0x6a324d8
0x06A37E54: 400100b4  cbz x0, #0x6a37e7c
0x06A37E58: e10300aa  mov x1, x0
0x06A37E5C: 601e40f9  ldr x0, [x19, #0x38]
0x06A37E60: 400100b4  cbz x0, #0x6a37e88
0x06A37E64: 50fcff97  bl #0x6a36fa4
0x06A37E68: e10300aa  mov x1, x0
0x06A37E6C: e00313aa  mov x0, x19
0x06A37E70: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A37E74: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A37E78: 98ffff17  b #0x6a37cd8
0x06A37E7C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A37E80: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A37E84: c0035fd6  ret
0x06A37E88: 89231d97  bl #0x3180cac

; RVA 0x6A37E8C | public void ClearSelection() { }
; bytes=84 sha256=a28e9e3e532c895bfbfe05e391a8cc2c750bdefbafcd6ee38215dca0410ac8ad status=arm64_complete_bound indexed_start=True
0x06A37E8C: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A37E90: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A37E94: 949700f0  adrp x20, #0x7d2a000
0x06A37E98: 887a5339  ldrb w8, [x20, #0x4de]
0x06A37E9C: f30300aa  mov x19, x0
0x06A37EA0: c8000037  tbnz w8, #0, #0x6a37eb8
0x06A37EA4: c0670090  adrp x0, #0x772f000
0x06A37EA8: 003c43f9  ldr x0, [x0, #0x678]
0x06A37EAC: db221d97  bl #0x3180a18
0x06A37EB0: 28008052  movz w8, #0x1
0x06A37EB4: 887a1339  strb w8, [x20, #0x4de]
0x06A37EB8: 7f0e04f8  str xzr, [x19, #0x40]!
0x06A37EBC: e00313aa  mov x0, x19
0x06A37EC0: e1031faa  mov x1, xzr
0x06A37EC4: c0221d97  bl #0x31809c4
0x06A37EC8: 60825ef8  ldur x0, [x19, #-0x18]
0x06A37ECC: 800000b4  cbz x0, #0x6a37edc
0x06A37ED0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A37ED4: fe0742f8  ldr x30, [sp], #0x20
0x06A37ED8: 1fe8ff17  b #0x6a31f54
0x06A37EDC: 74231d97  bl #0x3180cac

; RVA 0x6A37EE0 | public void RemoveSelectorFromItem(IBoardItemView itemToRemove) { }
; bytes=92 sha256=ee58c157a463b44f4f86e0d078b152edd0de18cde684bd0eed4dcd150eba805a status=arm64_complete_bound indexed_start=True
0x06A37EE0: ff8300d1  sub sp, sp, #0x20
0x06A37EE4: fe4f01a9  stp x30, x19, [sp, #0x10]
0x06A37EE8: ff0700f9  str xzr, [sp, #8]
0x06A37EEC: 082040f9  ldr x8, [x0, #0x40]
0x06A37EF0: 1f0101eb  cmp x8, x1
0x06A37EF4: e1010054  b.ne #0x6a37f30
0x06A37EF8: e2230091  add x2, sp, #8
0x06A37EFC: f30300aa  mov x19, x0
0x06A37F00: 0f000094  bl #0x6a37f3c
0x06A37F04: e0000036  tbz w0, #0, #0x6a37f20
0x06A37F08: e10740f9  ldr x1, [sp, #8]
0x06A37F0C: e00313aa  mov x0, x19
0x06A37F10: 72ffff97  bl #0x6a37cd8
0x06A37F14: e00313aa  mov x0, x19
0x06A37F18: d8feff97  bl #0x6a37a78
0x06A37F1C: 05000014  b #0x6a37f30
0x06A37F20: e00313aa  mov x0, x19
0x06A37F24: daffff97  bl #0x6a37e8c
0x06A37F28: e00313aa  mov x0, x19
0x06A37F2C: 50ffff97  bl #0x6a37c6c
0x06A37F30: fe4f41a9  ldp x30, x19, [sp, #0x10]
0x06A37F34: ff830091  add sp, sp, #0x20
0x06A37F38: c0035fd6  ret

; RVA 0x6A37F3C | private bool TryGetItemViewOnSamePosition(IBoardItemView removedItemView, out IBoardItemView boardItemView) { }
; bytes=176 sha256=bff418a8c506e04b00ec1187a990f418819e76618d38889c837b1977a8085f66 status=arm64_complete_bound indexed_start=True
0x06A37F3C: fe0f1df8  str x30, [sp, #-0x30]!
0x06A37F40: f65701a9  stp x22, x21, [sp, #0x10]
0x06A37F44: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A37F48: 969700f0  adrp x22, #0x7d2a000
0x06A37F4C: c87e5339  ldrb w8, [x22, #0x4df]
0x06A37F50: f30302aa  mov x19, x2
0x06A37F54: f50301aa  mov x21, x1
0x06A37F58: f40300aa  mov x20, x0
0x06A37F5C: c8000037  tbnz w8, #0, #0x6a37f74
0x06A37F60: c0670090  adrp x0, #0x772f000
0x06A37F64: 003c43f9  ldr x0, [x0, #0x678]
0x06A37F68: ac221d97  bl #0x3180a18
0x06A37F6C: 28008052  movz w8, #0x1
0x06A37F70: c87e1339  strb w8, [x22, #0x4df]
0x06A37F74: 801640f9  ldr x0, [x20, #0x28]
0x06A37F78: 800300b4  cbz x0, #0x6a37fe8
0x06A37F7C: e10315aa  mov x1, x21
0x06A37F80: ade9ff97  bl #0x6a32634
0x06A37F84: 881640f9  ldr x8, [x20, #0x28]
0x06A37F88: 080300b4  cbz x8, #0x6a37fe8
0x06A37F8C: e103002a  mov w1, w0
0x06A37F90: e00308aa  mov x0, x8
0x06A37F94: 51e9ff97  bl #0x6a324d8
0x06A37F98: f50300aa  mov x21, x0
0x06A37F9C: 200100b4  cbz x0, #0x6a37fc0
0x06A37FA0: 801e40f9  ldr x0, [x20, #0x38]
0x06A37FA4: 200200b4  cbz x0, #0x6a37fe8
0x06A37FA8: e10315aa  mov x1, x21
0x06A37FAC: fefbff97  bl #0x6a36fa4
0x06A37FB0: e10300aa  mov x1, x0
0x06A37FB4: 600200f9  str x0, [x19]
0x06A37FB8: e00313aa  mov x0, x19
0x06A37FBC: 04000014  b #0x6a37fcc
0x06A37FC0: 7f0200f9  str xzr, [x19]
0x06A37FC4: e00313aa  mov x0, x19
0x06A37FC8: e1031faa  mov x1, xzr
0x06A37FCC: 7e221d97  bl #0x31809c4
0x06A37FD0: bf0200f1  cmp x21, #0
0x06A37FD4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A37FD8: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A37FDC: e0079f1a  cset w0, ne
0x06A37FE0: fe0743f8  ldr x30, [sp], #0x30
0x06A37FE4: c0035fd6  ret
0x06A37FE8: 31231d97  bl #0x3180cac

; RVA 0x6A37AF8 | private void ShowSelectorAt(IBoardItemView boardItem, RectTransform tileTransform) { }
; bytes=372 sha256=afdaf175fe6b4d607bfc786a7f09f317efa431f79c1afb6f098f4d07d98e4e51 status=arm64_complete_bound indexed_start=True
0x06A37AF8: ea0f1cfc  str d10, [sp, #-0x40]!
0x06A37AFC: e9a3006d  stp d9, d8, [sp, #8]
0x06A37B00: fe0f00f9  str x30, [sp, #0x18]
0x06A37B04: f65702a9  stp x22, x21, [sp, #0x20]
0x06A37B08: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A37B0C: 969700f0  adrp x22, #0x7d2a000
0x06A37B10: c8825339  ldrb w8, [x22, #0x4e0]
0x06A37B14: f40302aa  mov x20, x2
0x06A37B18: f50301aa  mov x21, x1
0x06A37B1C: f30300aa  mov x19, x0
0x06A37B20: c8000037  tbnz w8, #0, #0x6a37b38
0x06A37B24: a06000f0  adrp x0, #0x764e000
0x06A37B28: 007042f9  ldr x0, [x0, #0x4e0]
0x06A37B2C: bb231d97  bl #0x3180a18
0x06A37B30: 28008052  movz w8, #0x1
0x06A37B34: c8821339  strb w8, [x22, #0x4e0]
0x06A37B38: d50800b4  cbz x21, #0x6a37c50
0x06A37B3C: a86000f0  adrp x8, #0x764e000
0x06A37B40: 087142f9  ldr x8, [x8, #0x4e0]
0x06A37B44: 000140f9  ldr x0, [x8]
0x06A37B48: 08e040b9  ldr w8, [x0, #0xe0]
0x06A37B4C: 48000035  cbnz w8, #0x6a37b54
0x06A37B50: 0f241d97  bl #0x3180b8c
0x06A37B54: e00314aa  mov x0, x20
0x06A37B58: e1031faa  mov x1, xzr
0x06A37B5C: 70ae1294  bl #0x6ee351c
0x06A37B60: 80070036  tbz w0, #0, #0x6a37c50
0x06A37B64: 601a40f9  ldr x0, [x19, #0x30]
0x06A37B68: 000800b4  cbz x0, #0x6a37c68
0x06A37B6C: 21008052  movz w1, #0x1
0x06A37B70: e2031faa  mov x2, xzr
0x06A37B74: 638ef397  bl #0x671b500
0x06A37B78: 601a40f9  ldr x0, [x19, #0x30]
0x06A37B7C: 600700b4  cbz x0, #0x6a37c68
0x06A37B80: e1031faa  mov x1, xzr
0x06A37B84: e9ccf997  bl #0x68aaf28
0x06A37B88: 140700b4  cbz x20, #0x6a37c68
0x06A37B8C: f50300aa  mov x21, x0
0x06A37B90: e00314aa  mov x0, x20
0x06A37B94: e1031faa  mov x1, xzr
0x06A37B98: 3ac71294  bl #0x6ee9880
0x06A37B9C: 750600b4  cbz x21, #0x6a37c68
0x06A37BA0: 2864fdf0  adrp x8, #0x16be000
0x06A37BA4: 029d46bd  ldr s2, [x8, #0x69c]
0x06A37BA8: e00315aa  mov x0, x21
0x06A37BAC: e1031faa  mov x1, xzr
0x06A37BB0: 2108221e  fmul s1, s1, s2
0x06A37BB4: 0008221e  fmul s0, s0, s2
0x06A37BB8: 56c71294  bl #0x6ee9910
0x06A37BBC: e00314aa  mov x0, x20
0x06A37BC0: e1031faa  mov x1, xzr
0x06A37BC4: 33c61294  bl #0x6ee9490
0x06A37BC8: 04102c1e  fmov s4, #0.50000000
0x06A37BCC: 4208241e  fmul s2, s2, s4
0x06A37BD0: 6308241e  fmul s3, s3, s4
0x06A37BD4: 0028221e  fadd s0, s0, s2
0x06A37BD8: 2128231e  fadd s1, s1, s3
0x06A37BDC: e203271e  fmov s2, wzr
0x06A37BE0: e00314aa  mov x0, x20
0x06A37BE4: e1031faa  mov x1, xzr
0x06A37BE8: c2d41294  bl #0x6eecef0
0x06A37BEC: 601a40f9  ldr x0, [x19, #0x30]
0x06A37BF0: c00300b4  cbz x0, #0x6a37c68
0x06A37BF4: e1031faa  mov x1, xzr
0x06A37BF8: 081ca04e  mov v8.16b, v0.16b
0x06A37BFC: 291ca14e  mov v9.16b, v1.16b
0x06A37C00: 4a1ca24e  mov v10.16b, v2.16b
0x06A37C04: c9ccf997  bl #0x68aaf28
0x06A37C08: 000300b4  cbz x0, #0x6a37c68
0x06A37C0C: 001da84e  mov v0.16b, v8.16b
0x06A37C10: 211da94e  mov v1.16b, v9.16b
0x06A37C14: 421daa4e  mov v2.16b, v10.16b
0x06A37C18: e1031faa  mov x1, xzr
0x06A37C1C: 6bcb1294  bl #0x6eea9c8
0x06A37C20: 601a40f9  ldr x0, [x19, #0x30]
0x06A37C24: 200200b4  cbz x0, #0x6a37c68
0x06A37C28: e1031faa  mov x1, xzr
0x06A37C2C: 9a901294  bl #0x6edbe94
0x06A37C30: c00100b4  cbz x0, #0x6a37c68
0x06A37C34: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A37C38: f65742a9  ldp x22, x21, [sp, #0x20]
0x06A37C3C: fe0f40f9  ldr x30, [sp, #0x18]
0x06A37C40: e9a3406d  ldp d9, d8, [sp, #8]
0x06A37C44: e1031faa  mov x1, xzr
0x06A37C48: ea0744fc  ldr d10, [sp], #0x40
0x06A37C4C: 6ad61214  b #0x6eed5f4
0x06A37C50: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A37C54: f65742a9  ldp x22, x21, [sp, #0x20]
0x06A37C58: fe0f40f9  ldr x30, [sp, #0x18]
0x06A37C5C: e9a3406d  ldp d9, d8, [sp, #8]
0x06A37C60: ea0744fc  ldr d10, [sp], #0x40
0x06A37C64: c0035fd6  ret
0x06A37C68: 11241d97  bl #0x3180cac

; RVA 0x6A37FEC | public void .ctor() { }
; bytes=72 sha256=bc2f809ca23cc58f0b352e80dc75115074af733f9c505ef957db2a1661834926 status=arm64_complete_bound indexed_start=True
0x06A37FEC: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A37FF0: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A37FF4: 949700f0  adrp x20, #0x7d2a000
0x06A37FF8: d5670090  adrp x21, #0x772f000
0x06A37FFC: 88865339  ldrb w8, [x20, #0x4e1]
0x06A38000: d7591e14  b #0x71ce75c
0x06A38004: f30300aa  mov x19, x0
0x06A38008: c8000037  tbnz w8, #0, #0x6a38020
0x06A3800C: a06700f0  adrp x0, #0x772f000
0x06A38010: 004043f9  ldr x0, [x0, #0x680]
0x06A38014: 81221d97  bl #0x3180a18
0x06A38018: 28008052  movz w8, #0x1
0x06A3801C: 88861339  strb w8, [x20, #0x4e1]
0x06A38020: a10240f9  ldr x1, [x21]
0x06A38024: e00313aa  mov x0, x19
0x06A38028: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A3802C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A38030: 53e77b17  b #0x4931d7c

