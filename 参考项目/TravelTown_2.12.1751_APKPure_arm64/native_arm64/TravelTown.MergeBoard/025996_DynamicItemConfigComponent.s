; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25996 Merger.MergeBoard.Components.DynamicItemConfigComponent
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9BD6C | public string get_DynamicMergeItemId() { }
; bytes=8 sha256=4197ad96213c98161e13fbfd6185a724b5570ba296d316558cbd5cc5c1842369 status=arm64_complete_bound indexed_start=True
0x06A9BD6C: 000040f9  ldr x0, [x0]
0x06A9BD70: c0035fd6  ret

; RVA 0x6A9BD74 | public DynamicMergeItemInfoPopup get_InfoPopup() { }
; bytes=8 sha256=19647f57f48e23c8730ecfc85bdce80bf67ce4eae56e82f97661432fa2018025 status=arm64_complete_bound indexed_start=True
0x06A9BD74: 000440f9  ldr x0, [x0, #8]
0x06A9BD78: c0035fd6  ret

; RVA 0x6A9BD7C | public bool get_IsItemSelectionBox() { }
; bytes=8 sha256=0e6de766d449fe554507239b6a7ad2c85106a33b67dea05075aa7cbb025dafb1 status=arm64_complete_bound indexed_start=True
0x06A9BD7C: 00404039  ldrb w0, [x0, #0x10]
0x06A9BD80: c0035fd6  ret

; RVA 0x6A85194 | public void .ctor(DynamicMergeItemConfig dynamicItemConfig) { }
; bytes=196 sha256=b1c9af94032bd2219c0ca905f7b8e127fea1cc35d3ceb9b1550850634bb4a2ae status=arm64_complete_bound indexed_start=True
0x06A85194: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x06A85198: f65701a9  stp x22, x21, [sp, #0x10]
0x06A8519C: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A851A0: 359500b0  adrp x21, #0x7d2a000
0x06A851A4: a81a6139  ldrb w8, [x21, #0x846]
0x06A851A8: f40301aa  mov x20, x1
0x06A851AC: f30300aa  mov x19, x0
0x06A851B0: c8000037  tbnz w8, #0, #0x6a851c8
0x06A851B4: a06200f0  adrp x0, #0x76dc000
0x06A851B8: 00c840f9  ldr x0, [x0, #0x190]
0x06A851BC: 17ee1b97  bl #0x3180a18
0x06A851C0: 28008052  movz w8, #0x1
0x06A851C4: a81a2139  strb w8, [x21, #0x846]
0x06A851C8: b76200f0  adrp x23, #0x76dc000
0x06A851CC: f7ca40f9  ldr x23, [x23, #0x190]
0x06A851D0: 9f0200f1  cmp x20, #0
0x06A851D4: 75029f9a  csel x21, x19, xzr, eq
0x06A851D8: f603939a  csel x22, xzr, x19, eq
0x06A851DC: b40100b4  cbz x20, #0x6a85210
0x06A851E0: 811640f9  ldr x1, [x20, #0x28]
0x06A851E4: e00316aa  mov x0, x22
0x06A851E8: 018c00f8  str x1, [x0, #8]!
0x06A851EC: f6ed1b97  bl #0x31809c4
0x06A851F0: 810a40f9  ldr x1, [x20, #0x10]
0x06A851F4: e00316aa  mov x0, x22
0x06A851F8: c10200f9  str x1, [x22]
0x06A851FC: f2ed1b97  bl #0x31809c4
0x06A85200: 881640f9  ldr x8, [x20, #0x28]
0x06A85204: 680100b4  cbz x8, #0x6a85230
0x06A85208: 000940f9  ldr x0, [x8, #0x10]
0x06A8520C: 0a000014  b #0x6a85234
0x06A85210: e00315aa  mov x0, x21
0x06A85214: 1f8c00f8  str xzr, [x0, #8]!
0x06A85218: e1031faa  mov x1, xzr
0x06A8521C: eaed1b97  bl #0x31809c4
0x06A85220: e00315aa  mov x0, x21
0x06A85224: e1031faa  mov x1, xzr
0x06A85228: bf0200f9  str xzr, [x21]
0x06A8522C: e6ed1b97  bl #0x31809c4
0x06A85230: e0031faa  mov x0, xzr
0x06A85234: e10240f9  ldr x1, [x23]
0x06A85238: e2031faa  mov x2, xzr
0x06A8523C: 8d95a997  bl #0x54ea870
0x06A85240: 08000012  and w8, w0, #1
0x06A85244: 68420039  strb w8, [x19, #0x10]
0x06A85248: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A8524C: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A85250: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x06A85254: c0035fd6  ret

