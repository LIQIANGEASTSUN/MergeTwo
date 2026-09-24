; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25721 .ExpendSpawnService.<>c__DisplayClass3_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A4E7D4 | public void .ctor() { }
; bytes=8 sha256=39b9ced9cfd0635ebbc55952a84a845cb1b7bc643d07edde403755da439bd75a status=arm64_complete_bound indexed_start=True
0x06A4E7D4: e1031faa  mov x1, xzr
0x06A4E7D8: 892fb217  b #0x56da5fc

; RVA 0x6A4E874 | internal bool <TransformAtSamePosition>b__0(WeightedItemSpawnable i) { }
; bytes=36 sha256=db0886864548a3c0995bdc5b58b3768ad5b8515cf0556538c501aeb140358abe status=arm64_complete_bound indexed_start=True
0x06A4E874: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A4E878: e10000b4  cbz x1, #0x6a4e894
0x06A4E87C: 280c40f9  ldr x8, [x1, #0x18]
0x06A4E880: 010840f9  ldr x1, [x0, #0x10]
0x06A4E884: e2031faa  mov x2, xzr
0x06A4E888: e00308aa  mov x0, x8
0x06A4E88C: fe0741f8  ldr x30, [sp], #0x10
0x06A4E890: f86faa17  b #0x54ea870
0x06A4E894: 06c91c97  bl #0x3180cac

