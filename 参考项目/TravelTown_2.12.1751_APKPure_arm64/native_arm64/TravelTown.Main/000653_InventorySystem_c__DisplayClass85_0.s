; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 653 .InventorySystem.<>c__DisplayClass85_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6286B38 | public void .ctor() { }
; bytes=8 sha256=36267811b4cc62bfd7ad59e0da1c26642653d2fc438c9c71a98ff2fafaf600d6 status=arm64_complete_bound indexed_start=True
0x06286B38: e1031faa  mov x1, xzr
0x06286B3C: b04ed117  b #0x56da5fc

; RVA 0x628A64C | internal bool <UnlockedInventorySlotAtLevel>b__0(IMergeItem item) { }
; bytes=276 sha256=d5e4befec5938194349f23b0b392a7ffdd9d3e22088f3c8702a18232b1c59fa9 status=arm64_complete_bound indexed_start=True
0x0628A64C: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0628A650: f44f01a9  stp x20, x19, [sp, #0x10]
0x0628A654: d5d400f0  adrp x21, #0x7d25000
0x0628A658: a8de5339  ldrb w8, [x21, #0x4f7]
0x0628A65C: f40301aa  mov x20, x1
0x0628A660: f30300aa  mov x19, x0
0x0628A664: c8000037  tbnz w8, #0, #0x628a67c
0x0628A668: 609f00f0  adrp x0, #0x7679000
0x0628A66C: 001044f9  ldr x0, [x0, #0x820]
0x0628A670: ead83b97  bl #0x3180a18
0x0628A674: 28008052  movz w8, #0x1
0x0628A678: a8de1339  strb w8, [x21, #0x4f7]
0x0628A67C: 140700b4  cbz x20, #0x628a75c
0x0628A680: 759f00f0  adrp x21, #0x7679000
0x0628A684: 880240f9  ldr x8, [x20]
0x0628A688: b51244f9  ldr x21, [x21, #0x820]
0x0628A68C: 095d4279  ldrh w9, [x8, #0x12e]
0x0628A690: a10240f9  ldr x1, [x21]
0x0628A694: 290100b4  cbz x9, #0x628a6b8
0x0628A698: 0a5940f9  ldr x10, [x8, #0xb0]
0x0628A69C: 4a210091  add x10, x10, #8
0x0628A6A0: 4b815ff8  ldur x11, [x10, #-8]
0x0628A6A4: 7f0101eb  cmp x11, x1
0x0628A6A8: 00010054  b.eq #0x628a6c8
0x0628A6AC: 290500f1  subs x9, x9, #1
0x0628A6B0: 4a410091  add x10, x10, #0x10
0x0628A6B4: 61ffff54  b.ne #0x628a6a0
0x0628A6B8: e00314aa  mov x0, x20
0x0628A6BC: e2031f2a  mov w2, wzr
0x0628A6C0: 14313b97  bl #0x3156b10
0x0628A6C4: 04000014  b #0x628a6d4
0x0628A6C8: 490180b9  ldrsw x9, [x10]
0x0628A6CC: 0811098b  add x8, x8, x9, lsl #4
0x0628A6D0: 00e10491  add x0, x8, #0x138
0x0628A6D4: 080440a9  ldp x8, x1, [x0]
0x0628A6D8: e00314aa  mov x0, x20
0x0628A6DC: 00013fd6  blr x8
0x0628A6E0: 740a40f9  ldr x20, [x19, #0x10]
0x0628A6E4: d40300b4  cbz x20, #0x628a75c
0x0628A6E8: 880240f9  ldr x8, [x20]
0x0628A6EC: a10240f9  ldr x1, [x21]
0x0628A6F0: f30300aa  mov x19, x0
0x0628A6F4: 095d4279  ldrh w9, [x8, #0x12e]
0x0628A6F8: 290100b4  cbz x9, #0x628a71c
0x0628A6FC: 0a5940f9  ldr x10, [x8, #0xb0]
0x0628A700: 4a210091  add x10, x10, #8
0x0628A704: 4b815ff8  ldur x11, [x10, #-8]
0x0628A708: 7f0101eb  cmp x11, x1
0x0628A70C: 00010054  b.eq #0x628a72c
0x0628A710: 290500f1  subs x9, x9, #1
0x0628A714: 4a410091  add x10, x10, #0x10
0x0628A718: 61ffff54  b.ne #0x628a704
0x0628A71C: e00314aa  mov x0, x20
0x0628A720: e2031f2a  mov w2, wzr
0x0628A724: fb303b97  bl #0x3156b10
0x0628A728: 04000014  b #0x628a738
0x0628A72C: 490180b9  ldrsw x9, [x10]
0x0628A730: 0811098b  add x8, x8, x9, lsl #4
0x0628A734: 00e10491  add x0, x8, #0x138
0x0628A738: 080440a9  ldp x8, x1, [x0]
0x0628A73C: e00314aa  mov x0, x20
0x0628A740: 00013fd6  blr x8
0x0628A744: e10300aa  mov x1, x0
0x0628A748: e00313aa  mov x0, x19
0x0628A74C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0628A750: e2031faa  mov x2, xzr
0x0628A754: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0628A758: 4680c917  b #0x54ea870
0x0628A75C: 54d93b97  bl #0x3180cac

