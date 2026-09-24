; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 7739 .BoosterSystem.<>c__DisplayClass27_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x65BEDF0 | public void .ctor() { }
; bytes=8 sha256=7e657f30be25930f561219c69910a5062836413c362d30efc0166c3d58b2f79e status=arm64_complete_bound indexed_start=True
0x065BEDF0: e1031faa  mov x1, xzr
0x065BEDF4: 026ec417  b #0x56da5fc

; RVA 0x65BEF9C | internal bool <GetLinkedMergeItemIdComponent>b__0(MergeItemBoosterComponent idComponent) { }
; bytes=36 sha256=cc71671769040b61ae5ccc7fa5091fd0bb4180f390883b3cb641d0eae7676deb status=arm64_complete_bound indexed_start=True
0x065BEF9C: fe0f1ff8  str x30, [sp, #-0x10]!
0x065BEFA0: e10000b4  cbz x1, #0x65befbc
0x065BEFA4: 281040f9  ldr x8, [x1, #0x20]
0x065BEFA8: 010840f9  ldr x1, [x0, #0x10]
0x065BEFAC: e2031faa  mov x2, xzr
0x065BEFB0: e00308aa  mov x0, x8
0x065BEFB4: fe0741f8  ldr x30, [sp], #0x10
0x065BEFB8: 2eaebc17  b #0x54ea870
0x065BEFBC: 3c072f97  bl #0x3180cac

