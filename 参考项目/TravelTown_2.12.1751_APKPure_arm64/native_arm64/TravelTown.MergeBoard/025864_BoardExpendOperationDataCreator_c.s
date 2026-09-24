; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25864 .BoardExpendOperationDataCreator.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A8B6B8 | private static void .cctor() { }
; bytes=104 sha256=deb346d1e4edb9ef3a0a2cae929c20148498d6a16920e873f3b93231eb9c96ff status=arm64_complete_bound indexed_start=True
0x06A8B6B8: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A8B6BC: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A8B6C0: f39400f0  adrp x19, #0x7d2a000
0x06A8B6C4: 346500d0  adrp x20, #0x7731000
0x06A8B6C8: 68ea5e39  ldrb w8, [x19, #0x7ba]
0x06A8B6CC: 944247f9  ldr x20, [x20, #0xe80]
0x06A8B6D0: c8000037  tbnz w8, #0, #0x6a8b6e8
0x06A8B6D4: 206500d0  adrp x0, #0x7731000
0x06A8B6D8: 004047f9  ldr x0, [x0, #0xe80]
0x06A8B6DC: cfd41b97  bl #0x3180a18
0x06A8B6E0: 28008052  movz w8, #0x1
0x06A8B6E4: 68ea1e39  strb w8, [x19, #0x7ba]
0x06A8B6E8: 800240f9  ldr x0, [x20]
0x06A8B6EC: 6dd51b97  bl #0x3180ca0
0x06A8B6F0: e1031faa  mov x1, xzr
0x06A8B6F4: f30300aa  mov x19, x0
0x06A8B6F8: c13bb197  bl #0x56da5fc
0x06A8B6FC: 880240f9  ldr x8, [x20]
0x06A8B700: e10313aa  mov x1, x19
0x06A8B704: 085d40f9  ldr x8, [x8, #0xb8]
0x06A8B708: 130100f9  str x19, [x8]
0x06A8B70C: 880240f9  ldr x8, [x20]
0x06A8B710: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A8B714: 005d40f9  ldr x0, [x8, #0xb8]
0x06A8B718: fe0742f8  ldr x30, [sp], #0x20
0x06A8B71C: aad41b17  b #0x31809c4

; RVA 0x6A8B720 | public void .ctor() { }
; bytes=8 sha256=085600b3942a1b743a47eaa14e5a0181789fab2efaa203663928e7ec895550e5 status=arm64_complete_bound indexed_start=True
0x06A8B720: e1031faa  mov x1, xzr
0x06A8B724: b63bb117  b #0x56da5fc

; RVA 0x6A8B728 | internal bool <CreateOperationData>b__2_0(TimeDurationEndedResult item) { }
; bytes=84 sha256=6f569e21cca24b7958c2d34ba877102711e2085a169a8d54e1f84a92bf87a0f4 status=arm64_complete_bound indexed_start=True
0x06A8B728: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A8B72C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A8B730: f49400f0  adrp x20, #0x7d2a000
0x06A8B734: 88ee5e39  ldrb w8, [x20, #0x7bb]
0x06A8B738: f30301aa  mov x19, x1
0x06A8B73C: c8000037  tbnz w8, #0, #0x6a8b754
0x06A8B740: 206500d0  adrp x0, #0x7731000
0x06A8B744: 004447f9  ldr x0, [x0, #0xe88]
0x06A8B748: b4d41b97  bl #0x3180a18
0x06A8B74C: 28008052  movz w8, #0x1
0x06A8B750: 88ee1e39  strb w8, [x20, #0x7bb]
0x06A8B754: 330100b4  cbz x19, #0x6a8b778
0x06A8B758: 600a40f9  ldr x0, [x19, #0x10]
0x06A8B75C: e00000b4  cbz x0, #0x6a8b778
0x06A8B760: 286500d0  adrp x8, #0x7731000
0x06A8B764: 084547f9  ldr x8, [x8, #0xe88]
0x06A8B768: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A8B76C: 010140f9  ldr x1, [x8]
0x06A8B770: fe0742f8  ldr x30, [sp], #0x20
0x06A8B774: 7f404617  b #0x3c1b970
0x06A8B778: 4dd51b97  bl #0x3180cac

; RVA 0x6A8B77C | internal bool <CreateOperationData>b__2_1(ItemSpawnedResult item) { }
; bytes=36 sha256=6454298ed9a79b8a0c40e1d4eb4694d25124863b3a021828f5984b2481b4425e status=arm64_complete_bound indexed_start=True
0x06A8B77C: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A8B780: e10000b4  cbz x1, #0x6a8b79c
0x06A8B784: 282840b9  ldr w8, [x1, #0x28]
0x06A8B788: 08791f12  and w8, w8, #0xfffffffe
0x06A8B78C: 1f090071  cmp w8, #2
0x06A8B790: e0179f1a  cset w0, eq
0x06A8B794: fe0741f8  ldr x30, [sp], #0x10
0x06A8B798: c0035fd6  ret
0x06A8B79C: 44d51b97  bl #0x3180cac

