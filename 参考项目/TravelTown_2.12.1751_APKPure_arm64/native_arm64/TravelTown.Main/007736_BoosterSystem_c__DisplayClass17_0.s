; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 7736 .BoosterSystem.<>c__DisplayClass17_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x65BDBA4 | public void .ctor() { }
; bytes=8 sha256=9be14ff5fd5762f81d5362cc65e39da05d67bce9a32a6fdf38d0b87b61ba0739 status=arm64_complete_bound indexed_start=True
0x065BDBA4: e1031faa  mov x1, xzr
0x065BDBA8: 9572c417  b #0x56da5fc

; RVA 0x65BEE88 | internal bool <DestroyMergeItemsOfExpiredBoosters>b__0(RemoteBoosterData b) { }
; bytes=40 sha256=8cc02cd98056be5db2ee4ab3be08965cde4c73475653dcc99b6106dacdf1e35b status=arm64_complete_bound indexed_start=True
0x065BEE88: fe0f1ff8  str x30, [sp, #-0x10]!
0x065BEE8C: 010100b4  cbz x1, #0x65beeac
0x065BEE90: 080840f9  ldr x8, [x0, #0x10]
0x065BEE94: c80000b4  cbz x8, #0x65beeac
0x065BEE98: 201840f9  ldr x0, [x1, #0x30]
0x065BEE9C: 011140f9  ldr x1, [x8, #0x20]
0x065BEEA0: e2031faa  mov x2, xzr
0x065BEEA4: fe0741f8  ldr x30, [sp], #0x10
0x065BEEA8: 72aebc17  b #0x54ea870
0x065BEEAC: 80072f97  bl #0x3180cac

