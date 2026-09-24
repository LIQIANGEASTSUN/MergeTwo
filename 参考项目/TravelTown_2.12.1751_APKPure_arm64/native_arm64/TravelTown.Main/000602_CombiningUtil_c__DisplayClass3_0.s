; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 602 .CombiningUtil.<>c__DisplayClass3_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6270580 | public void .ctor() { }
; bytes=8 sha256=a78f8b47d67ef7f297ada5d4f92daa45998e93a9f431cbf91f423f7310f92545 status=arm64_complete_bound indexed_start=True
0x06270580: e1031faa  mov x1, xzr
0x06270584: 1ea8d117  b #0x56da5fc

; RVA 0x62709FC | internal bool <GetCombinationsInProgressWithItem>b__0(MergeItemWeakReference i) { }
; bytes=60 sha256=f297709806f326f087f6f94574c8d54ee8a6cd5ef873d6370646224f7a4f76f9 status=arm64_complete_bound indexed_start=True
0x062709FC: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x06270A00: a10100b4  cbz x1, #0x6270a34
0x06270A04: 280040f9  ldr x8, [x1]
0x06270A08: f30300aa  mov x19, x0
0x06270A0C: e00301aa  mov x0, x1
0x06270A10: 09a15ca9  ldp x9, x8, [x8, #0x1c8]
0x06270A14: e10308aa  mov x1, x8
0x06270A18: 20013fd6  blr x9
0x06270A1C: 680a40f9  ldr x8, [x19, #0x10]
0x06270A20: a80000b4  cbz x8, #0x6270a34
0x06270A24: 011940f9  ldr x1, [x8, #0x30]
0x06270A28: e2031faa  mov x2, xzr
0x06270A2C: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x06270A30: 90e7c917  b #0x54ea870
0x06270A34: 9e403c97  bl #0x3180cac

; RVA 0x6270A38 | internal bool <GetCombinationsInProgressWithItem>b__1(ItemPayloadBase i) { }
; bytes=40 sha256=2a68f9fd71dfc77a6cacb960c3929bec3a88462006179b8487947fba05e768bf status=arm64_complete_bound indexed_start=True
0x06270A38: fe0f1ff8  str x30, [sp, #-0x10]!
0x06270A3C: 010100b4  cbz x1, #0x6270a5c
0x06270A40: 080840f9  ldr x8, [x0, #0x10]
0x06270A44: c80000b4  cbz x8, #0x6270a5c
0x06270A48: 200840f9  ldr x0, [x1, #0x10]
0x06270A4C: 011940f9  ldr x1, [x8, #0x30]
0x06270A50: e2031faa  mov x2, xzr
0x06270A54: fe0741f8  ldr x30, [sp], #0x10
0x06270A58: 86e7c917  b #0x54ea870
0x06270A5C: 94403c97  bl #0x3180cac

