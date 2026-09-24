; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 657 .InventorySystem.<>c__DisplayClass92_2
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x628A998 | public void .ctor() { }
; bytes=8 sha256=e241aa7ab641eebbb75da22ea94d388f3a81ed60085753584bc5c583b9b1535c status=arm64_complete_bound indexed_start=True
0x0628A998: e1031faa  mov x1, xzr
0x0628A99C: 183fd117  b #0x56da5fc

; RVA 0x628AA60 | internal bool <SortBackendSlotsToConfig>b__2(Tuple<ProducerInventoryItem, int> tuple) { }
; bytes=84 sha256=8a659bfcc926e9d1b72f2323f5d82ed8122865e69148fee01e8bbf3209f09516 status=arm64_complete_bound indexed_start=True
0x0628AA60: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0628AA64: f44f01a9  stp x20, x19, [sp, #0x10]
0x0628AA68: d5d400f0  adrp x21, #0x7d25000
0x0628AA6C: a8ee5339  ldrb w8, [x21, #0x4fb]
0x0628AA70: f30301aa  mov x19, x1
0x0628AA74: f40300aa  mov x20, x0
0x0628AA78: c8000037  tbnz w8, #0, #0x628aa90
0x0628AA7C: e0a200b0  adrp x0, #0x76e7000
0x0628AA80: 00ac42f9  ldr x0, [x0, #0x558]
0x0628AA84: e5d73b97  bl #0x3180a18
0x0628AA88: 28008052  movz w8, #0x1
0x0628AA8C: a8ee1339  strb w8, [x21, #0x4fb]
0x0628AA90: 130100b4  cbz x19, #0x628aab0
0x0628AA94: 680a40f9  ldr x8, [x19, #0x10]
0x0628AA98: 890a40f9  ldr x9, [x20, #0x10]
0x0628AA9C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0628AAA0: 1f0109eb  cmp x8, x9
0x0628AAA4: e0179f1a  cset w0, eq
0x0628AAA8: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0628AAAC: c0035fd6  ret
0x0628AAB0: 7fd83b97  bl #0x3180cac

; RVA 0x628AAB4 | internal bool <SortBackendSlotsToConfig>b__3(Tuple<ProducerInventoryItem, int> tuple) { }
; bytes=84 sha256=f7ed6e591f03f793f44572cb4493634fb7e596f5b3f5586caf8f14e1ac54f15b status=arm64_complete_bound indexed_start=True
0x0628AAB4: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0628AAB8: f44f01a9  stp x20, x19, [sp, #0x10]
0x0628AABC: d5d400f0  adrp x21, #0x7d25000
0x0628AAC0: a8f25339  ldrb w8, [x21, #0x4fc]
0x0628AAC4: f30301aa  mov x19, x1
0x0628AAC8: f40300aa  mov x20, x0
0x0628AACC: c8000037  tbnz w8, #0, #0x628aae4
0x0628AAD0: e0a200b0  adrp x0, #0x76e7000
0x0628AAD4: 00ac42f9  ldr x0, [x0, #0x558]
0x0628AAD8: d0d73b97  bl #0x3180a18
0x0628AADC: 28008052  movz w8, #0x1
0x0628AAE0: a8f21339  strb w8, [x21, #0x4fc]
0x0628AAE4: 130100b4  cbz x19, #0x628ab04
0x0628AAE8: 680a40f9  ldr x8, [x19, #0x10]
0x0628AAEC: 890e40f9  ldr x9, [x20, #0x18]
0x0628AAF0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0628AAF4: 1f0109eb  cmp x8, x9
0x0628AAF8: e0179f1a  cset w0, eq
0x0628AAFC: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0628AB00: c0035fd6  ret
0x0628AB04: 6ad83b97  bl #0x3180cac

