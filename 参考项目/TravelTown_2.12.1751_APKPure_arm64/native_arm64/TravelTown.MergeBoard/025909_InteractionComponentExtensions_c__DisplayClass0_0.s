; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25909 .InteractionComponentExtensions.<>c__DisplayClass0_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A98684 | public void .ctor() { }
; bytes=8 sha256=fae8a5075b39149930102c48d63962518e3c27ae61cf90c491ca0f1b1f458e82 status=arm64_complete_bound indexed_start=True
0x06A98684: e1031faa  mov x1, xzr
0x06A98688: dd07b117  b #0x56da5fc

; RVA 0x6A98A9C | internal bool <FindReadyItemToConsume>b__0(ItemMultiple item) { }
; bytes=128 sha256=5c0cc3b24231b412448ee16c3bd8e536c94475b07b0574ef5bcaa12b987c7c39 status=arm64_complete_bound indexed_start=True
0x06A98A9C: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A98AA0: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A98AA4: 959400d0  adrp x21, #0x7d2a000
0x06A98AA8: a89e6039  ldrb w8, [x21, #0x827]
0x06A98AAC: f30301aa  mov x19, x1
0x06A98AB0: f40300aa  mov x20, x0
0x06A98AB4: 28010037  tbnz w8, #0, #0x6a98ad8
0x06A98AB8: a0610090  adrp x0, #0x76cc000
0x06A98ABC: 00d442f9  ldr x0, [x0, #0x5a8]
0x06A98AC0: d69f1b97  bl #0x3180a18
0x06A98AC4: 405e00f0  adrp x0, #0x7663000
0x06A98AC8: 00f446f9  ldr x0, [x0, #0xde8]
0x06A98ACC: d39f1b97  bl #0x3180a18
0x06A98AD0: 28008052  movz w8, #0x1
0x06A98AD4: a89e2039  strb w8, [x21, #0x827]
0x06A98AD8: 130200b4  cbz x19, #0x6a98b18
0x06A98ADC: a8610090  adrp x8, #0x76cc000
0x06A98AE0: 08d542f9  ldr x8, [x8, #0x5a8]
0x06A98AE4: 940a40f9  ldr x20, [x20, #0x10]
0x06A98AE8: e00313aa  mov x0, x19
0x06A98AEC: 010140f9  ldr x1, [x8]
0x06A98AF0: 6ae7a397  bl #0x5392898
0x06A98AF4: 340100b4  cbz x20, #0x6a98b18
0x06A98AF8: 485e00f0  adrp x8, #0x7663000
0x06A98AFC: 08f546f9  ldr x8, [x8, #0xde8]
0x06A98B00: e10300aa  mov x1, x0
0x06A98B04: e00314aa  mov x0, x20
0x06A98B08: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A98B0C: 020140f9  ldr x2, [x8]
0x06A98B10: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A98B14: 3aaf5617  b #0x40447fc
0x06A98B18: 65a01b97  bl #0x3180cac

