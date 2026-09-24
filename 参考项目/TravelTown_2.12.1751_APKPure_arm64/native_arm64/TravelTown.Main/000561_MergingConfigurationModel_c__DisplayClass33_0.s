; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 561 .MergingConfigurationModel.<>c__DisplayClass33_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x613EC9C | public void .ctor() { }
; bytes=8 sha256=8eb4c44fa60be7f1ca696cc602bbf0843c65db829b422ed48674a8ce4454d0b6 status=arm64_complete_bound indexed_start=True
0x0613EC9C: e1031faa  mov x1, xzr
0x0613ECA0: 576ed617  b #0x56da5fc

; RVA 0x61416EC | internal bool <GetItemIndexInGraph>b__0(IMergeItem item) { }
; bytes=172 sha256=24d2f7fdd18ca441e77ecc7117184828b2be4113fea5fd8ef3ca0b812e34f993 status=arm64_complete_bound indexed_start=True
0x061416EC: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x061416F0: f44f01a9  stp x20, x19, [sp, #0x10]
0x061416F4: 15df00f0  adrp x21, #0x7d24000
0x061416F8: a8465739  ldrb w8, [x21, #0x5d1]
0x061416FC: f40301aa  mov x20, x1
0x06141700: f30300aa  mov x19, x0
0x06141704: c8000037  tbnz w8, #0, #0x614171c
0x06141708: c0a90090  adrp x0, #0x7679000
0x0614170C: 001044f9  ldr x0, [x0, #0x820]
0x06141710: c2fc4097  bl #0x3180a18
0x06141714: 28008052  movz w8, #0x1
0x06141718: a8461739  strb w8, [x21, #0x5d1]
0x0614171C: d40300b4  cbz x20, #0x6141794
0x06141720: caa90090  adrp x10, #0x7679000
0x06141724: 880240f9  ldr x8, [x20]
0x06141728: 4a1144f9  ldr x10, [x10, #0x820]
0x0614172C: 095d4279  ldrh w9, [x8, #0x12e]
0x06141730: 410140f9  ldr x1, [x10]
0x06141734: 290100b4  cbz x9, #0x6141758
0x06141738: 0a5940f9  ldr x10, [x8, #0xb0]
0x0614173C: 4a210091  add x10, x10, #8
0x06141740: 4b815ff8  ldur x11, [x10, #-8]
0x06141744: 7f0101eb  cmp x11, x1
0x06141748: 00010054  b.eq #0x6141768
0x0614174C: 290500f1  subs x9, x9, #1
0x06141750: 4a410091  add x10, x10, #0x10
0x06141754: 61ffff54  b.ne #0x6141740
0x06141758: e00314aa  mov x0, x20
0x0614175C: e2031f2a  mov w2, wzr
0x06141760: ec544097  bl #0x3156b10
0x06141764: 04000014  b #0x6141774
0x06141768: 490180b9  ldrsw x9, [x10]
0x0614176C: 0811098b  add x8, x8, x9, lsl #4
0x06141770: 00e10491  add x0, x8, #0x138
0x06141774: 080440a9  ldp x8, x1, [x0]
0x06141778: e00314aa  mov x0, x20
0x0614177C: 00013fd6  blr x8
0x06141780: 610a40f9  ldr x1, [x19, #0x10]
0x06141784: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06141788: e2031faa  mov x2, xzr
0x0614178C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06141790: 38a4ce17  b #0x54ea870
0x06141794: 46fd4097  bl #0x3180cac

