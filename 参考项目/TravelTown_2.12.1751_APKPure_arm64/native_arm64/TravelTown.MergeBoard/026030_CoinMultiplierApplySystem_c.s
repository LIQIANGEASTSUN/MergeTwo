; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 26030 .CoinMultiplierApplySystem.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9F728 | private static void .cctor() { }
; bytes=104 sha256=32fad7f166e8c4737a1e715c2d725bcdb9821ddfd81d2439648f89ba6deae17f status=arm64_complete_bound indexed_start=True
0x06A9F728: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A9F72C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A9F730: 539400f0  adrp x19, #0x7d2a000
0x06A9F734: 946400f0  adrp x20, #0x7732000
0x06A9F738: 681a6239  ldrb w8, [x19, #0x886]
0x06A9F73C: 942e44f9  ldr x20, [x20, #0x858]
0x06A9F740: c8000037  tbnz w8, #0, #0x6a9f758
0x06A9F744: 806400f0  adrp x0, #0x7732000
0x06A9F748: 002c44f9  ldr x0, [x0, #0x858]
0x06A9F74C: b3841b97  bl #0x3180a18
0x06A9F750: 28008052  movz w8, #0x1
0x06A9F754: 681a2239  strb w8, [x19, #0x886]
0x06A9F758: 800240f9  ldr x0, [x20]
0x06A9F75C: 51851b97  bl #0x3180ca0
0x06A9F760: e1031faa  mov x1, xzr
0x06A9F764: f30300aa  mov x19, x0
0x06A9F768: a5ebb097  bl #0x56da5fc
0x06A9F76C: 880240f9  ldr x8, [x20]
0x06A9F770: e10313aa  mov x1, x19
0x06A9F774: 085d40f9  ldr x8, [x8, #0xb8]
0x06A9F778: 130100f9  str x19, [x8]
0x06A9F77C: 880240f9  ldr x8, [x20]
0x06A9F780: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A9F784: 005d40f9  ldr x0, [x8, #0xb8]
0x06A9F788: fe0742f8  ldr x30, [sp], #0x20
0x06A9F78C: 8e841b17  b #0x31809c4

; RVA 0x6A9F790 | public void .ctor() { }
; bytes=8 sha256=a3c323ab81bb5cc361aef6b8d85091078bbec4358810fc77c7195d7dd252151c status=arm64_complete_bound indexed_start=True
0x06A9F790: e1031faa  mov x1, xzr
0x06A9F794: 9aebb017  b #0x56da5fc

; RVA 0x6A9F798 | internal bool <Tick>b__1_0(ValueTuple<Entity, CollectableComponent, IdComponent, BornComponent> item) { }
; bytes=60 sha256=d625ad3312e85f77d1bf4a9ef83f5dd1fc67dbecee2fbc8e8ff0ccb239e393f9 status=arm64_complete_bound indexed_start=True
0x06A9F798: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x06A9F79C: 201040f9  ldr x0, [x1, #0x20]
0x06A9F7A0: f30301aa  mov x19, x1
0x06A9F7A4: e1031faa  mov x1, xzr
0x06A9F7A8: c160a997  bl #0x54f7aac
0x06A9F7AC: e0000037  tbnz w0, #0, #0x6a9f7c8
0x06A9F7B0: 680a40f9  ldr x8, [x19, #0x10]
0x06A9F7B4: a80000b4  cbz x8, #0x6a9f7c8
0x06A9F7B8: 081140b9  ldr w8, [x8, #0x10]
0x06A9F7BC: 1f190071  cmp w8, #6
0x06A9F7C0: e0179f1a  cset w0, eq
0x06A9F7C4: 02000014  b #0x6a9f7cc
0x06A9F7C8: e0031f2a  mov w0, wzr
0x06A9F7CC: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x06A9F7D0: c0035fd6  ret

; RVA 0x6A9F7D4 | internal bool <ProcessAllComponents>b__2_0(ValueTuple<Entity, CollectableComponent, IdComponent> item) { }
; bytes=60 sha256=92f8e20f24e6c031820e2b457e2c411c574005c0476b33dbcc67faeb990d1265 status=arm64_complete_bound indexed_start=True
0x06A9F7D4: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x06A9F7D8: 201040f9  ldr x0, [x1, #0x20]
0x06A9F7DC: f30301aa  mov x19, x1
0x06A9F7E0: e1031faa  mov x1, xzr
0x06A9F7E4: b260a997  bl #0x54f7aac
0x06A9F7E8: e0000037  tbnz w0, #0, #0x6a9f804
0x06A9F7EC: 680a40f9  ldr x8, [x19, #0x10]
0x06A9F7F0: a80000b4  cbz x8, #0x6a9f804
0x06A9F7F4: 081140b9  ldr w8, [x8, #0x10]
0x06A9F7F8: 1f190071  cmp w8, #6
0x06A9F7FC: e0179f1a  cset w0, eq
0x06A9F800: 02000014  b #0x6a9f808
0x06A9F804: e0031f2a  mov w0, wzr
0x06A9F808: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x06A9F80C: c0035fd6  ret

