; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 775 .BoardProducerInventoryStateSystem.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x64EA9D4 | private static void .cctor() { }
; bytes=104 sha256=be808befbb50e1913007f48baaee0eccd45a8a68bca11bc72b34db75511c05f6 status=arm64_complete_bound indexed_start=True
0x064EA9D4: fe0f1ef8  str x30, [sp, #-0x20]!
0x064EA9D8: f44f01a9  stp x20, x19, [sp, #0x10]
0x064EA9DC: f3c100b0  adrp x19, #0x7d27000
0x064EA9E0: 949000b0  adrp x20, #0x76fb000
0x064EA9E4: 681e4139  ldrb w8, [x19, #0x47]
0x064EA9E8: 94ea44f9  ldr x20, [x20, #0x9d0]
0x064EA9EC: c8000037  tbnz w8, #0, #0x64eaa04
0x064EA9F0: 809000b0  adrp x0, #0x76fb000
0x064EA9F4: 00e844f9  ldr x0, [x0, #0x9d0]
0x064EA9F8: 08583297  bl #0x3180a18
0x064EA9FC: 28008052  movz w8, #0x1
0x064EAA00: 681e0139  strb w8, [x19, #0x47]
0x064EAA04: 800240f9  ldr x0, [x20]
0x064EAA08: a6583297  bl #0x3180ca0
0x064EAA0C: e1031faa  mov x1, xzr
0x064EAA10: f30300aa  mov x19, x0
0x064EAA14: fabec797  bl #0x56da5fc
0x064EAA18: 880240f9  ldr x8, [x20]
0x064EAA1C: e10313aa  mov x1, x19
0x064EAA20: 085d40f9  ldr x8, [x8, #0xb8]
0x064EAA24: 130100f9  str x19, [x8]
0x064EAA28: 880240f9  ldr x8, [x20]
0x064EAA2C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x064EAA30: 005d40f9  ldr x0, [x8, #0xb8]
0x064EAA34: fe0742f8  ldr x30, [sp], #0x20
0x064EAA38: e3573217  b #0x31809c4

; RVA 0x64EAA3C | public void .ctor() { }
; bytes=8 sha256=895aef98c2344396fcd15304d16516f655596e8474b1d529162d39516204424a status=arm64_complete_bound indexed_start=True
0x064EAA3C: e1031faa  mov x1, xzr
0x064EAA40: efbec717  b #0x56da5fc

; RVA 0x64EAA44 | internal InventoryItem <ProcessItems>b__2_0(ProducerInventoryItem i) { }
; bytes=24 sha256=631b0ee854477d10a8b052e5255267686a40aa556555e8d3ec0f72db7087bca5 status=arm64_complete_bound indexed_start=True
0x064EAA44: fe0f1ff8  str x30, [sp, #-0x10]!
0x064EAA48: 810000b4  cbz x1, #0x64eaa58
0x064EAA4C: 201040f9  ldr x0, [x1, #0x20]
0x064EAA50: fe0741f8  ldr x30, [sp], #0x10
0x064EAA54: c0035fd6  ret
0x064EAA58: 95583297  bl #0x3180cac

; RVA 0x64EAA5C | internal bool <GetExistingEntityIds>b__5_0(InventorySlotComponent item) { }
; bytes=32 sha256=0dce3c9e2a922999b94cb949fa1b17fd81cd968daa4cb45a914286308a468c7b status=arm64_complete_bound indexed_start=True
0x064EAA5C: fe0f1ff8  str x30, [sp, #-0x10]!
0x064EAA60: c10000b4  cbz x1, #0x64eaa78
0x064EAA64: 282c40b9  ldr w8, [x1, #0x2c]
0x064EAA68: 1f050071  cmp w8, #1
0x064EAA6C: e0179f1a  cset w0, eq
0x064EAA70: fe0741f8  ldr x30, [sp], #0x10
0x064EAA74: c0035fd6  ret
0x064EAA78: 8d583297  bl #0x3180cac

; RVA 0x64EAA7C | internal IdComponent <GetExistingEntityIds>b__5_1(InventorySlotComponent items) { }
; bytes=80 sha256=38ac30f9f267cd0f948ec55e1392f04ca9eccb3f77639fb6a7c4ca03bf9f6cdb status=arm64_complete_bound indexed_start=True
0x064EAA7C: fe0f1ef8  str x30, [sp, #-0x20]!
0x064EAA80: f44f01a9  stp x20, x19, [sp, #0x10]
0x064EAA84: f4c100b0  adrp x20, #0x7d27000
0x064EAA88: 88224139  ldrb w8, [x20, #0x48]
0x064EAA8C: f30301aa  mov x19, x1
0x064EAA90: c8000037  tbnz w8, #0, #0x64eaaa8
0x064EAA94: 808c00b0  adrp x0, #0x767b000
0x064EAA98: 00cc47f9  ldr x0, [x0, #0xf98]
0x064EAA9C: df573297  bl #0x3180a18
0x064EAAA0: 28008052  movz w8, #0x1
0x064EAAA4: 88220139  strb w8, [x20, #0x48]
0x064EAAA8: 130100b4  cbz x19, #0x64eaac8
0x064EAAAC: 888c00b0  adrp x8, #0x767b000
0x064EAAB0: 08cd47f9  ldr x8, [x8, #0xf98]
0x064EAAB4: e00313aa  mov x0, x19
0x064EAAB8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x064EAABC: 010140f9  ldr x1, [x8]
0x064EAAC0: fe0742f8  ldr x30, [sp], #0x20
0x064EAAC4: 560b5c17  b #0x3bed81c
0x064EAAC8: 79583297  bl #0x3180cac

