; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25977 Merger.MergeBoard.Data.TickInputActions.ItemsCombinationConfirmationAction
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9AE04 | public bool get_IsConfirmed() { }
; bytes=8 sha256=0e6de766d449fe554507239b6a7ad2c85106a33b67dea05075aa7cbb025dafb1 status=arm64_complete_bound indexed_start=True
0x06A9AE04: 00404039  ldrb w0, [x0, #0x10]
0x06A9AE08: c0035fd6  ret

; RVA 0x6A9AE0C | public void set_IsConfirmed(bool value) { }
; bytes=12 sha256=9906fb0bb75f2a4f1e046af27730d9706441c14db85d4c11511dbf71d58892f3 status=arm64_complete_bound indexed_start=True
0x06A9AE0C: 28000012  and w8, w1, #1
0x06A9AE10: 08400039  strb w8, [x0, #0x10]
0x06A9AE14: c0035fd6  ret

; RVA 0x6A9AE18 | public Entity get_FirstItem() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x06A9AE18: 000c40f9  ldr x0, [x0, #0x18]
0x06A9AE1C: c0035fd6  ret

; RVA 0x6A9AE20 | public void set_FirstItem(Entity value) { }
; bytes=8 sha256=d95abd272a42296bc645409ed23739f2be023e2ce63b5930269d558d9c75272f status=arm64_complete_bound indexed_start=True
0x06A9AE20: 018c01f8  str x1, [x0, #0x18]!
0x06A9AE24: e8961b17  b #0x31809c4

; RVA 0x6A9AE28 | public Entity get_SecondItem() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x06A9AE28: 001040f9  ldr x0, [x0, #0x20]
0x06A9AE2C: c0035fd6  ret

; RVA 0x6A9AE30 | public void set_SecondItem(Entity value) { }
; bytes=8 sha256=bfc109e69d9c07cead605d6e0364f7feb29f1b4d00bb6102f43e9c14ea34a4df status=arm64_complete_bound indexed_start=True
0x06A9AE30: 010c02f8  str x1, [x0, #0x20]!
0x06A9AE34: e4961b17  b #0x31809c4

; RVA 0x6A9AE38 | public MergeCheckItemType get_MergeCheckItemType() { }
; bytes=8 sha256=ba269e200604d0dd95f57e6bd974cfb4fb4a15db1799161315f4b00aef67931c status=arm64_complete_bound indexed_start=True
0x06A9AE38: 002840b9  ldr w0, [x0, #0x28]
0x06A9AE3C: c0035fd6  ret

; RVA 0x6A9AE40 | public void set_MergeCheckItemType(MergeCheckItemType value) { }
; bytes=8 sha256=9e40c154908b27c28daea725a2a8b301cdb33ac03bba4f1283b986b2c7c65080 status=arm64_complete_bound indexed_start=True
0x06A9AE40: 012800b9  str w1, [x0, #0x28]
0x06A9AE44: c0035fd6  ret

; RVA 0x6A9AE48 | public void .ctor() { }
; bytes=8 sha256=b75609ca2b33f1112003263151bd657132fabc7bb55619c71e8868e05f0daffa status=arm64_complete_bound indexed_start=True
0x06A9AE48: e1031faa  mov x1, xzr
0x06A9AE4C: ecfdb017  b #0x56da5fc

