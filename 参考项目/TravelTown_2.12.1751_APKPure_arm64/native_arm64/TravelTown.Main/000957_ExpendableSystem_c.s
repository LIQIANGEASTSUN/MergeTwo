; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 957 .ExpendableSystem.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x67902C0 | private static void .cctor() { }
; bytes=104 sha256=5d0fb7a8c57171c1b3e5053d74f1381fba8a9cb61ea41115dc0d1ad7b05a32da status=arm64_complete_bound indexed_start=True
0x067902C0: fe0f1ef8  str x30, [sp, #-0x20]!
0x067902C4: f44f01a9  stp x20, x19, [sp, #0x10]
0x067902C8: d3ac0090  adrp x19, #0x7d28000
0x067902CC: 147c0090  adrp x20, #0x7710000
0x067902D0: 68827539  ldrb w8, [x19, #0xd60]
0x067902D4: 94ae41f9  ldr x20, [x20, #0x358]
0x067902D8: c8000037  tbnz w8, #0, #0x67902f0
0x067902DC: 007c0090  adrp x0, #0x7710000
0x067902E0: 00ac41f9  ldr x0, [x0, #0x358]
0x067902E4: cdc12797  bl #0x3180a18
0x067902E8: 28008052  movz w8, #0x1
0x067902EC: 68823539  strb w8, [x19, #0xd60]
0x067902F0: 800240f9  ldr x0, [x20]
0x067902F4: 6bc22797  bl #0x3180ca0
0x067902F8: e1031faa  mov x1, xzr
0x067902FC: f30300aa  mov x19, x0
0x06790300: bf28bd97  bl #0x56da5fc
0x06790304: 880240f9  ldr x8, [x20]
0x06790308: e10313aa  mov x1, x19
0x0679030C: 085d40f9  ldr x8, [x8, #0xb8]
0x06790310: 130100f9  str x19, [x8]
0x06790314: 880240f9  ldr x8, [x20]
0x06790318: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0679031C: 005d40f9  ldr x0, [x8, #0xb8]
0x06790320: fe0742f8  ldr x30, [sp], #0x20
0x06790324: a8c12717  b #0x31809c4

; RVA 0x6790328 | public void .ctor() { }
; bytes=8 sha256=9849caa563da9eb63b147a1c8388e268becea09d32f8f760a3331f82b0ef9ef1 status=arm64_complete_bound indexed_start=True
0x06790328: e1031faa  mov x1, xzr
0x0679032C: b428bd17  b #0x56da5fc

; RVA 0x6790330 | internal bool <OnWillProcessComponents>b__17_0(ExpendableComponent expendable) { }
; bytes=152 sha256=2db16c8aa1c1edcfc516def0bcb6f0fe069275ac1299c1710f0571a5ef6e8ae3 status=arm64_complete_bound indexed_start=True
0x06790330: fe0f1ef8  str x30, [sp, #-0x20]!
0x06790334: f44f01a9  stp x20, x19, [sp, #0x10]
0x06790338: d4ac0090  adrp x20, #0x7d28000
0x0679033C: 88867539  ldrb w8, [x20, #0xd61]
0x06790340: f30301aa  mov x19, x1
0x06790344: 28010037  tbnz w8, #0, #0x6790368
0x06790348: a07a00d0  adrp x0, #0x76e6000
0x0679034C: 00b043f9  ldr x0, [x0, #0x760]
0x06790350: b2c12797  bl #0x3180a18
0x06790354: 207a00f0  adrp x0, #0x76d7000
0x06790358: 00dc42f9  ldr x0, [x0, #0x5b8]
0x0679035C: afc12797  bl #0x3180a18
0x06790360: 28008052  movz w8, #0x1
0x06790364: 88863539  strb w8, [x20, #0xd61]
0x06790368: f30200b4  cbz x19, #0x67903c4
0x0679036C: a87a00d0  adrp x8, #0x76e6000
0x06790370: 08b143f9  ldr x8, [x8, #0x760]
0x06790374: e00313aa  mov x0, x19
0x06790378: 010140f9  ldr x1, [x8]
0x0679037C: 28755197  bl #0x3bed81c
0x06790380: 200200b4  cbz x0, #0x67903c4
0x06790384: 08c04039  ldrb w8, [x0, #0x30]
0x06790388: 68000035  cbnz w8, #0x6790394
0x0679038C: 68824139  ldrb w8, [x19, #0x60]
0x06790390: 68010034  cbz w8, #0x67903bc
0x06790394: 287a00f0  adrp x8, #0x76d7000
0x06790398: 08dd42f9  ldr x8, [x8, #0x5b8]
0x0679039C: e00313aa  mov x0, x19
0x067903A0: 010140f9  ldr x1, [x8]
0x067903A4: 1e755197  bl #0x3bed81c
0x067903A8: 1f0000f1  cmp x0, #0
0x067903AC: e0079f1a  cset w0, ne
0x067903B0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x067903B4: fe0742f8  ldr x30, [sp], #0x20
0x067903B8: c0035fd6  ret
0x067903BC: e0031f2a  mov w0, wzr
0x067903C0: fcffff17  b #0x67903b0
0x067903C4: 3ac22797  bl #0x3180cac

; RVA 0x67903C8 | internal int <CanExpend>b__21_0(ItemMultiple itemMultiple) { }
; bytes=24 sha256=e9a84fdb4030f4ef5c6edda64b9e2da4ea7dfe0de14030d9bb2f3edc85489737 status=arm64_complete_bound indexed_start=True
0x067903C8: 810000b4  cbz x1, #0x67903d8
0x067903CC: e00301aa  mov x0, x1
0x067903D0: e1031faa  mov x1, xzr
0x067903D4: ca3ae217  b #0x601eefc
0x067903D8: fe0f1ff8  str x30, [sp, #-0x10]!
0x067903DC: 34c22797  bl #0x3180cac

; RVA 0x67903E0 | internal int <SpawnItems>b__22_0(WeightedItemSpawnable item1, WeightedItemSpawnable item2) { }
; bytes=36 sha256=e251ae4e3376035f747974d5509492c9a0f28a23e96a3b7a8b26c6b19d206957 status=arm64_complete_bound indexed_start=True
0x067903E0: fe0f1ff8  str x30, [sp, #-0x10]!
0x067903E4: e20000b4  cbz x2, #0x6790400
0x067903E8: c10000b4  cbz x1, #0x6790400
0x067903EC: 482440b9  ldr w8, [x2, #0x24]
0x067903F0: 292440b9  ldr w9, [x1, #0x24]
0x067903F4: 0001094b  sub w0, w8, w9
0x067903F8: fe0741f8  ldr x30, [sp], #0x10
0x067903FC: c0035fd6  ret
0x06790400: 2bc22797  bl #0x3180cac

; RVA 0x6790404 | internal int <SpawnItems>b__22_2(WeightedItemSpawnable item) { }
; bytes=24 sha256=0fa0eda4806148ad3cb5f33b8fba0d57e8cabd0a895d7ce4a914da9ea59a05ff status=arm64_complete_bound indexed_start=True
0x06790404: fe0f1ff8  str x30, [sp, #-0x10]!
0x06790408: 810000b4  cbz x1, #0x6790418
0x0679040C: 202440b9  ldr w0, [x1, #0x24]
0x06790410: fe0741f8  ldr x30, [sp], #0x10
0x06790414: c0035fd6  ret
0x06790418: 25c22797  bl #0x3180cac

; RVA 0x679041C | internal WeightedItemSpawnable <SpawnItems>b__22_3(WeightedItemSpawnable item) { }
; bytes=8 sha256=50ddf39453988ba55a1b7d9bbba7f1ae7c5c5c3f7414c859acf17118fa4886b8 status=arm64_complete_bound indexed_start=True
0x0679041C: e00301aa  mov x0, x1
0x06790420: c0035fd6  ret

; RVA 0x6790424 | internal int <SpawnItems>b__23_0(EmptiableWeightedItemSpawnable item1, EmptiableWeightedItemSpawnable item2) { }
; bytes=36 sha256=329026f3bc6f5d38e816113f1872b6650ef2587ef2b340c9e5f2b102b7d46239 status=arm64_complete_bound indexed_start=True
0x06790424: fe0f1ff8  str x30, [sp, #-0x10]!
0x06790428: e20000b4  cbz x2, #0x6790444
0x0679042C: c10000b4  cbz x1, #0x6790444
0x06790430: 482440b9  ldr w8, [x2, #0x24]
0x06790434: 292440b9  ldr w9, [x1, #0x24]
0x06790438: 0001094b  sub w0, w8, w9
0x0679043C: fe0741f8  ldr x30, [sp], #0x10
0x06790440: c0035fd6  ret
0x06790444: 1ac22797  bl #0x3180cac

; RVA 0x6790448 | internal int <SpawnItems>b__23_1(EmptiableWeightedItemSpawnable item) { }
; bytes=24 sha256=35aca146291de9f2b59cb344ce940ab4cb6979406613f50ccf20957ff5b18fb8 status=arm64_complete_bound indexed_start=True
0x06790448: fe0f1ff8  str x30, [sp, #-0x10]!
0x0679044C: 810000b4  cbz x1, #0x679045c
0x06790450: 202440b9  ldr w0, [x1, #0x24]
0x06790454: fe0741f8  ldr x30, [sp], #0x10
0x06790458: c0035fd6  ret
0x0679045C: 14c22797  bl #0x3180cac

; RVA 0x6790460 | internal EmptiableWeightedItemSpawnable <SpawnItems>b__23_2(EmptiableWeightedItemSpawnable item) { }
; bytes=8 sha256=50ddf39453988ba55a1b7d9bbba7f1ae7c5c5c3f7414c859acf17118fa4886b8 status=arm64_complete_bound indexed_start=True
0x06790460: e00301aa  mov x0, x1
0x06790464: c0035fd6  ret

