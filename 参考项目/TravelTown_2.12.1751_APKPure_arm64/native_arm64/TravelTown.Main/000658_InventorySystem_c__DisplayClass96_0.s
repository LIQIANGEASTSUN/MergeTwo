; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 658 .InventorySystem.<>c__DisplayClass96_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6288B00 | public void .ctor() { }
; bytes=8 sha256=46e7f00d524c4d9f1900242dfb55fa744baa0aeb1d6082c6000c327bc453087c status=arm64_complete_bound indexed_start=True
0x06288B00: e1031faa  mov x1, xzr
0x06288B04: be46d117  b #0x56da5fc

; RVA 0x628AB08 | internal bool <FindCircularExpends>b__0(IMergeItem item) { }
; bytes=100 sha256=b2b5af5af025542e4ca66707cc90f8b3cbc68e50935ce8d38a47db490b95b02d status=arm64_complete_bound indexed_start=True
0x0628AB08: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0628AB0C: f44f01a9  stp x20, x19, [sp, #0x10]
0x0628AB10: d5d400f0  adrp x21, #0x7d25000
0x0628AB14: a8f65339  ldrb w8, [x21, #0x4fd]
0x0628AB18: f30301aa  mov x19, x1
0x0628AB1C: f40300aa  mov x20, x0
0x0628AB20: c8000037  tbnz w8, #0, #0x628ab38
0x0628AB24: 809f00d0  adrp x0, #0x767c000
0x0628AB28: 002841f9  ldr x0, [x0, #0x250]
0x0628AB2C: bbd73b97  bl #0x3180a18
0x0628AB30: 28008052  movz w8, #0x1
0x0628AB34: a8f61339  strb w8, [x21, #0x4fd]
0x0628AB38: 800a40f9  ldr x0, [x20, #0x10]
0x0628AB3C: 600100b4  cbz x0, #0x628ab68
0x0628AB40: 889f00d0  adrp x8, #0x767c000
0x0628AB44: 082941f9  ldr x8, [x8, #0x250]
0x0628AB48: e10313aa  mov x1, x19
0x0628AB4C: 020140f9  ldr x2, [x8]
0x0628AB50: 2be77697  bl #0x40447fc
0x0628AB54: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0628AB58: e803202a  mvn w8, w0
0x0628AB5C: 00010012  and w0, w8, #1
0x0628AB60: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0628AB64: c0035fd6  ret
0x0628AB68: 51d83b97  bl #0x3180cac

