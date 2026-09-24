; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 893 .BoardIdleHintSystem.<>c__DisplayClass56_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x665AF48 | public void .ctor() { }
; bytes=8 sha256=e3c4abd8d37c12f827408fea13dbacfbabe7e7ba1c34c02bb3ca955d3ee58ac7 status=arm64_complete_bound indexed_start=True
0x0665AF48: e1031faa  mov x1, xzr
0x0665AF4C: acfdc117  b #0x56da5fc

; RVA 0x665B4B0 | internal bool <PlayItemHintAnimation>b__0(IdComponent component) { }
; bytes=40 sha256=c2998feace5784ea1e41bc5d74ee8c75de8e022f504304d012de4ce77ee0b6fe status=arm64_complete_bound indexed_start=True
0x0665B4B0: fe0f1ff8  str x30, [sp, #-0x10]!
0x0665B4B4: 010100b4  cbz x1, #0x665b4d4
0x0665B4B8: 080840f9  ldr x8, [x0, #0x10]
0x0665B4BC: c80000b4  cbz x8, #0x665b4d4
0x0665B4C0: 201c40f9  ldr x0, [x1, #0x38]
0x0665B4C4: 010940f9  ldr x1, [x8, #0x10]
0x0665B4C8: e2031faa  mov x2, xzr
0x0665B4CC: fe0741f8  ldr x30, [sp], #0x10
0x0665B4D0: e83cba17  b #0x54ea870
0x0665B4D4: f6952c97  bl #0x3180cac

