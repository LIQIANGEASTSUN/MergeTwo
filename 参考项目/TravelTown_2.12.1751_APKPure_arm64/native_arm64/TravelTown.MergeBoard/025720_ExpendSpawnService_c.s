; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25720 .ExpendSpawnService.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A4E7E4 | private static void .cctor() { }
; bytes=104 sha256=75e2cfca5c5291a3b7b672bf49a10908de1325b6d23c64d1c47d0423c477759f status=arm64_complete_bound indexed_start=True
0x06A4E7E4: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A4E7E8: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A4E7EC: f3960090  adrp x19, #0x7d2a000
0x06A4E7F0: 146700b0  adrp x20, #0x772f000
0x06A4E7F4: 68a65639  ldrb w8, [x19, #0x5a9]
0x06A4E7F8: 946247f9  ldr x20, [x20, #0xec0]
0x06A4E7FC: c8000037  tbnz w8, #0, #0x6a4e814
0x06A4E800: 006700b0  adrp x0, #0x772f000
0x06A4E804: 006047f9  ldr x0, [x0, #0xec0]
0x06A4E808: 84c81c97  bl #0x3180a18
0x06A4E80C: 28008052  movz w8, #0x1
0x06A4E810: 68a61639  strb w8, [x19, #0x5a9]
0x06A4E814: 800240f9  ldr x0, [x20]
0x06A4E818: 22c91c97  bl #0x3180ca0
0x06A4E81C: e1031faa  mov x1, xzr
0x06A4E820: f30300aa  mov x19, x0
0x06A4E824: 762fb297  bl #0x56da5fc
0x06A4E828: 880240f9  ldr x8, [x20]
0x06A4E82C: e10313aa  mov x1, x19
0x06A4E830: 085d40f9  ldr x8, [x8, #0xb8]
0x06A4E834: 130100f9  str x19, [x8]
0x06A4E838: 880240f9  ldr x8, [x20]
0x06A4E83C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A4E840: 005d40f9  ldr x0, [x8, #0xb8]
0x06A4E844: fe0742f8  ldr x30, [sp], #0x20
0x06A4E848: 5fc81c17  b #0x31809c4

; RVA 0x6A4E84C | public void .ctor() { }
; bytes=8 sha256=99755b32843f7717bc51e315feb573d967b79735eb3451c72549fc00b6ef7cd1 status=arm64_complete_bound indexed_start=True
0x06A4E84C: e1031faa  mov x1, xzr
0x06A4E850: 6b2fb217  b #0x56da5fc

; RVA 0x6A4E854 | internal int <TrySpawnExpendedItems>b__2_0(ValueTuple<Entity, BoardTilePositionComponent> e) { }
; bytes=8 sha256=c284374dd3c4e6853c28106ef7a9bed989c1c15635d14fc3131dabe43632d003 status=arm64_complete_bound indexed_start=True
0x06A4E854: e00302aa  mov x0, x2
0x06A4E858: c0035fd6  ret

; RVA 0x6A4E85C | internal int <SelectWeightedItem>b__5_0(WeightedItemSpawnable item) { }
; bytes=24 sha256=3453f30a27ecf142beb8743d2d5a487d83f03e4236a2f220b9c646d188903605 status=arm64_complete_bound indexed_start=True
0x06A4E85C: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A4E860: 810000b4  cbz x1, #0x6a4e870
0x06A4E864: 202440b9  ldr w0, [x1, #0x24]
0x06A4E868: fe0741f8  ldr x30, [sp], #0x10
0x06A4E86C: c0035fd6  ret
0x06A4E870: 0fc91c97  bl #0x3180cac

