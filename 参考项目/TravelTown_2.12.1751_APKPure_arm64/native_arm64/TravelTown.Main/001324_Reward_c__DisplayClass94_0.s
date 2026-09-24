; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1324 .Reward.<>c__DisplayClass94_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A2D374 | public void .ctor() { }
; bytes=8 sha256=e9d27e8a0aba1baebe0aba89b38a6a72ea7c473c8975891a9dd7d69598aeccc3 status=arm64_complete_bound indexed_start=True
0x06A2D374: e1031faa  mov x1, xzr
0x06A2D378: a1b4b217  b #0x56da5fc

; RVA 0x6A2E810 | internal bool <AreItemBoxesRefsEqual>b__0(DynamicMergeItemWeakReference x) { }
; bytes=60 sha256=9588b9cf5452835fb0fa1f432a048adcca5e2741826d8c8b56969d45bc7758bb status=arm64_complete_bound indexed_start=True
0x06A2E810: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A2E814: a10100b4  cbz x1, #0x6a2e848
0x06A2E818: 281040f9  ldr x8, [x1, #0x20]
0x06A2E81C: 680100b4  cbz x8, #0x6a2e848
0x06A2E820: 090840f9  ldr x9, [x0, #0x10]
0x06A2E824: 290100b4  cbz x9, #0x6a2e848
0x06A2E828: 291140f9  ldr x9, [x9, #0x20]
0x06A2E82C: e90000b4  cbz x9, #0x6a2e848
0x06A2E830: 000940f9  ldr x0, [x8, #0x10]
0x06A2E834: a00000b4  cbz x0, #0x6a2e848
0x06A2E838: 210940f9  ldr x1, [x9, #0x10]
0x06A2E83C: e2031faa  mov x2, xzr
0x06A2E840: fe0741f8  ldr x30, [sp], #0x10
0x06A2E844: 7d20ab17  b #0x54f6a38
0x06A2E848: 19491d97  bl #0x3180cac

