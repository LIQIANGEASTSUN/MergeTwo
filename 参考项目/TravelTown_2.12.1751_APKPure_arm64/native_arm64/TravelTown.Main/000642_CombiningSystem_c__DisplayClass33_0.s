; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 642 .CombiningSystem.<>c__DisplayClass33_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x627E664 | public void .ctor() { }
; bytes=8 sha256=dc2a8087d118c389f6e48cbcf1eb25ad274f6a35c366aaf136ee3ac3f4b9d5b6 status=arm64_complete_bound indexed_start=True
0x0627E664: e1031faa  mov x1, xzr
0x0627E668: e56fd117  b #0x56da5fc

; RVA 0x627E99C | internal bool <ExtractItem>b__0(ItemPayloadBase item) { }
; bytes=36 sha256=0c6f779e052efd5f9199233bee2a4b3d0d3318b67a205e5660c69b3e529f1f7e status=arm64_complete_bound indexed_start=True
0x0627E99C: fe0f1ff8  str x30, [sp, #-0x10]!
0x0627E9A0: e10000b4  cbz x1, #0x627e9bc
0x0627E9A4: 280840f9  ldr x8, [x1, #0x10]
0x0627E9A8: 010840f9  ldr x1, [x0, #0x10]
0x0627E9AC: e2031faa  mov x2, xzr
0x0627E9B0: e00308aa  mov x0, x8
0x0627E9B4: fe0741f8  ldr x30, [sp], #0x10
0x0627E9B8: aeafc917  b #0x54ea870
0x0627E9BC: bc083c97  bl #0x3180cac

