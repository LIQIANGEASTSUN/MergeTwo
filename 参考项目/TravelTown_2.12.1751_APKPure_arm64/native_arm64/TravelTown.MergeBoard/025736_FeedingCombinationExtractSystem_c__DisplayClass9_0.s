; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25736 .FeedingCombinationExtractSystem.<>c__DisplayClass9_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A68370 | public void .ctor() { }
; bytes=8 sha256=21ddd1b17f4cd03f74eb3f93ebea5f690cad35d370ef5d026c9fd02b51e9cd3b status=arm64_complete_bound indexed_start=True
0x06A68370: e1031faa  mov x1, xzr
0x06A68374: a2c8b117  b #0x56da5fc

; RVA 0x6A68440 | internal bool <FindConsumedItemSnapshot>b__0(FeedingCombinationConsumedItemSnapshot item) { }
; bytes=44 sha256=1e0754c8c7ea44ab6567ff4000688f2a4361a3b9322fcd35d971d4020648f3be status=arm64_complete_bound indexed_start=True
0x06A68440: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A68444: 210100b4  cbz x1, #0x6a68468
0x06A68448: 280840f9  ldr x8, [x1, #0x10]
0x06A6844C: e80000b4  cbz x8, #0x6a68468
0x06A68450: 080940f9  ldr x8, [x8, #0x10]
0x06A68454: 010840f9  ldr x1, [x0, #0x10]
0x06A68458: e2031faa  mov x2, xzr
0x06A6845C: e00308aa  mov x0, x8
0x06A68460: fe0741f8  ldr x30, [sp], #0x10
0x06A68464: 0309aa17  b #0x54ea870
0x06A68468: 11621c97  bl #0x3180cac

