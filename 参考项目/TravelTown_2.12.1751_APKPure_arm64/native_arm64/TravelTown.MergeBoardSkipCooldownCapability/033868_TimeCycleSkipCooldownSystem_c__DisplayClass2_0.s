; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 33868 .TimeCycleSkipCooldownSystem.<>c__DisplayClass2_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A62CBC | public void .ctor() { }
; bytes=8 sha256=7611afd8f1dd323b2561aa53390227efa86edcb0b15b732d2cd68cfdb5db0114 status=arm64_complete_bound indexed_start=True
0x06A62CBC: e1031faa  mov x1, xzr
0x06A62CC0: 4fdeb117  b #0x56da5fc

; RVA 0x6A62CD4 | internal bool <Tick>b__0(ValueTuple<Entity, BoardTilePositionComponent, TimeCycleComponent> query) { }
; bytes=72 sha256=26d367e2a9950b5908a21237da6c0f0fbd2f87f8346f647e8f2848322b845345 status=arm64_complete_bound indexed_start=True
0x06A62CD4: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A62CD8: 080840f9  ldr x8, [x0, #0x10]
0x06A62CDC: e80100b4  cbz x8, #0x6a62d18
0x06A62CE0: 290840b9  ldr w9, [x1, #8]
0x06A62CE4: 081940b9  ldr w8, [x8, #0x18]
0x06A62CE8: 3f01086b  cmp w9, w8
0x06A62CEC: 01010054  b.ne #0x6a62d0c
0x06A62CF0: 080c40f9  ldr x8, [x0, #0x18]
0x06A62CF4: 280100b4  cbz x8, #0x6a62d18
0x06A62CF8: 080940f9  ldr x8, [x8, #0x10]
0x06A62CFC: e80000b4  cbz x8, #0x6a62d18
0x06A62D00: 210040f9  ldr x1, [x1]
0x06A62D04: fe0741f8  ldr x30, [sp], #0x10
0x06A62D08: 05000014  b #0x6a62d1c
0x06A62D0C: e0031f2a  mov w0, wzr
0x06A62D10: fe0741f8  ldr x30, [sp], #0x10
0x06A62D14: c0035fd6  ret
0x06A62D18: e5771c97  bl #0x3180cac

