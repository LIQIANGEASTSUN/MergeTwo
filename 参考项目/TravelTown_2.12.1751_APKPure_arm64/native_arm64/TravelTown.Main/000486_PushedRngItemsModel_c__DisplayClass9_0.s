; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 486 .PushedRngItemsModel.<>c__DisplayClass9_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x612F5AC | public void .ctor() { }
; bytes=8 sha256=de96cdb2a3b3de54cde749da6229426c2348cf7804c332841ef55ca6fd8d3ae6 status=arm64_complete_bound indexed_start=True
0x0612F5AC: e1031faa  mov x1, xzr
0x0612F5B0: 13acd617  b #0x56da5fc

; RVA 0x612FB80 | internal bool <ClearCache>b__0(PushedRngItem e) { }
; bytes=36 sha256=e04d51da2564693db73814bf3cbd4db0baa41006266f4761cfae54933e3e7558 status=arm64_complete_bound indexed_start=True
0x0612FB80: fe0f1ff8  str x30, [sp, #-0x10]!
0x0612FB84: e10000b4  cbz x1, #0x612fba0
0x0612FB88: 281040f9  ldr x8, [x1, #0x20]
0x0612FB8C: 010840f9  ldr x1, [x0, #0x10]
0x0612FB90: e2031faa  mov x2, xzr
0x0612FB94: e00308aa  mov x0, x8
0x0612FB98: fe0741f8  ldr x30, [sp], #0x10
0x0612FB9C: 35ebce17  b #0x54ea870
0x0612FBA0: 43444197  bl #0x3180cac

