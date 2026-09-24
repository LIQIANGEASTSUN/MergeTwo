; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 7734 .BoosterBoardSystem.<>c__DisplayClass18_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x65BCA64 | public void .ctor() { }
; bytes=8 sha256=f334522612d0d987766772c7b0ca8341d22f229d7d703dd2e277848d768a4d56 status=arm64_complete_bound indexed_start=True
0x065BCA64: e1031faa  mov x1, xzr
0x065BCA68: e576c417  b #0x56da5fc

; RVA 0x65BCB34 | internal bool <GetLinkedMergeItemIdComponent>b__0(MergeItemBoosterComponent idComponent) { }
; bytes=36 sha256=c776096a8784dbac8d8e109811e0b05fa5bbc676355a74a1a3512201251fbde4 status=arm64_complete_bound indexed_start=True
0x065BCB34: fe0f1ff8  str x30, [sp, #-0x10]!
0x065BCB38: e10000b4  cbz x1, #0x65bcb54
0x065BCB3C: 281040f9  ldr x8, [x1, #0x20]
0x065BCB40: 010840f9  ldr x1, [x0, #0x10]
0x065BCB44: e2031faa  mov x2, xzr
0x065BCB48: e00308aa  mov x0, x8
0x065BCB4C: fe0741f8  ldr x30, [sp], #0x10
0x065BCB50: 48b7bc17  b #0x54ea870
0x065BCB54: 56102f97  bl #0x3180cac

