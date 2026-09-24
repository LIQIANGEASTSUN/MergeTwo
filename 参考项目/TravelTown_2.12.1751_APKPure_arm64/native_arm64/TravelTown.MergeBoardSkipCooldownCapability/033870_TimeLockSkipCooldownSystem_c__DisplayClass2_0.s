; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 33870 .TimeLockSkipCooldownSystem.<>c__DisplayClass2_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A6306C | public void .ctor() { }
; bytes=8 sha256=40c57b655c67d1b35d32c26298eb74f03b90a6ae987a206bf34dd97844fd1c79 status=arm64_complete_bound indexed_start=True
0x06A6306C: e1031faa  mov x1, xzr
0x06A63070: 63ddb117  b #0x56da5fc

; RVA 0x6A6307C | internal bool <Tick>b__0(ValueTuple<Entity, BoardTilePositionComponent, TimeLockComponent> query) { }
; bytes=72 sha256=2d8492735eb3b56cd695f72549c67cc990c56c00fcb78dc74cc2f09bc2b4bdfb status=arm64_complete_bound indexed_start=True
0x06A6307C: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A63080: 080840f9  ldr x8, [x0, #0x10]
0x06A63084: e80100b4  cbz x8, #0x6a630c0
0x06A63088: 290840b9  ldr w9, [x1, #8]
0x06A6308C: 081940b9  ldr w8, [x8, #0x18]
0x06A63090: 3f01086b  cmp w9, w8
0x06A63094: 01010054  b.ne #0x6a630b4
0x06A63098: 080c40f9  ldr x8, [x0, #0x18]
0x06A6309C: 280100b4  cbz x8, #0x6a630c0
0x06A630A0: 080940f9  ldr x8, [x8, #0x10]
0x06A630A4: e80000b4  cbz x8, #0x6a630c0
0x06A630A8: 210040f9  ldr x1, [x1]
0x06A630AC: fe0741f8  ldr x30, [sp], #0x10
0x06A630B0: 05000014  b #0x6a630c4
0x06A630B4: e0031f2a  mov w0, wzr
0x06A630B8: fe0741f8  ldr x30, [sp], #0x10
0x06A630BC: c0035fd6  ret
0x06A630C0: fb761c97  bl #0x3180cac

