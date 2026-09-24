; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25724 .SpawningItemsUtils.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A64A9C | private static void .cctor() { }
; bytes=104 sha256=e3fc2e6d9242be6d6d0257d929d99366a20035d7f1b09fd6bb2394ef4f0cbcd2 status=arm64_complete_bound indexed_start=True
0x06A64A9C: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A64AA0: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A64AA4: 339600d0  adrp x19, #0x7d2a000
0x06A64AA8: 546600f0  adrp x20, #0x772f000
0x06A64AAC: 68665a39  ldrb w8, [x19, #0x699]
0x06A64AB0: 94b647f9  ldr x20, [x20, #0xf68]
0x06A64AB4: c8000037  tbnz w8, #0, #0x6a64acc
0x06A64AB8: 406600f0  adrp x0, #0x772f000
0x06A64ABC: 00b447f9  ldr x0, [x0, #0xf68]
0x06A64AC0: d66f1c97  bl #0x3180a18
0x06A64AC4: 28008052  movz w8, #0x1
0x06A64AC8: 68661a39  strb w8, [x19, #0x699]
0x06A64ACC: 800240f9  ldr x0, [x20]
0x06A64AD0: 74701c97  bl #0x3180ca0
0x06A64AD4: e1031faa  mov x1, xzr
0x06A64AD8: f30300aa  mov x19, x0
0x06A64ADC: c8d6b197  bl #0x56da5fc
0x06A64AE0: 880240f9  ldr x8, [x20]
0x06A64AE4: e10313aa  mov x1, x19
0x06A64AE8: 085d40f9  ldr x8, [x8, #0xb8]
0x06A64AEC: 130100f9  str x19, [x8]
0x06A64AF0: 880240f9  ldr x8, [x20]
0x06A64AF4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A64AF8: 005d40f9  ldr x0, [x8, #0xb8]
0x06A64AFC: fe0742f8  ldr x30, [sp], #0x20
0x06A64B00: b16f1c17  b #0x31809c4

; RVA 0x6A64B04 | public void .ctor() { }
; bytes=8 sha256=39dffb54a419876989781bf50a3ddfb969a99c2abad2a1cc8f12005b34c31ab1 status=arm64_complete_bound indexed_start=True
0x06A64B04: e1031faa  mov x1, xzr
0x06A64B08: bdd6b117  b #0x56da5fc

; RVA 0x6A64B0C | internal ItemPayloadBase <GetItemToProduce>b__1_0(FeedingCombinationConsumedItemSnapshot consumedItem) { }
; bytes=24 sha256=028c46fa77d135685eea27c32f49db1cd018223f6f1e08d2082e811f5b058fd2 status=arm64_complete_bound indexed_start=True
0x06A64B0C: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A64B10: 810000b4  cbz x1, #0x6a64b20
0x06A64B14: 200840f9  ldr x0, [x1, #0x10]
0x06A64B18: fe0741f8  ldr x30, [sp], #0x10
0x06A64B1C: c0035fd6  ret
0x06A64B20: 63701c97  bl #0x3180cac

; RVA 0x6A64B24 | internal string <TryReplaceWithBoosted>b__4_0(FixedItemSpawnable spawnable) { }
; bytes=36 sha256=1917a9ebfab7c42c5f0c8bb18d4782ca1310fea4e3bc088fb0ef354d6f349a73 status=arm64_complete_bound indexed_start=True
0x06A64B24: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A64B28: e10000b4  cbz x1, #0x6a64b44
0x06A64B2C: 200840f9  ldr x0, [x1, #0x10]
0x06A64B30: a00000b4  cbz x0, #0x6a64b44
0x06A64B34: 080040f9  ldr x8, [x0]
0x06A64B38: 02855ca9  ldp x2, x1, [x8, #0x1c8]
0x06A64B3C: fe0741f8  ldr x30, [sp], #0x10
0x06A64B40: 40001fd6  br x2
0x06A64B44: 5a701c97  bl #0x3180cac

; RVA 0x6A64B48 | internal string <TryReplaceWithBoosted>b__4_1(WeightedItemSpawnable spawnable) { }
; bytes=36 sha256=b09cc76d4297f69924f33a73e283bb22319ca3c2aba48c2cb2639c935a1c35a8 status=arm64_complete_bound indexed_start=True
0x06A64B48: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A64B4C: e10000b4  cbz x1, #0x6a64b68
0x06A64B50: 200840f9  ldr x0, [x1, #0x10]
0x06A64B54: a00000b4  cbz x0, #0x6a64b68
0x06A64B58: 080040f9  ldr x8, [x0]
0x06A64B5C: 02855ca9  ldp x2, x1, [x8, #0x1c8]
0x06A64B60: fe0741f8  ldr x30, [sp], #0x10
0x06A64B64: 40001fd6  br x2
0x06A64B68: 51701c97  bl #0x3180cac

