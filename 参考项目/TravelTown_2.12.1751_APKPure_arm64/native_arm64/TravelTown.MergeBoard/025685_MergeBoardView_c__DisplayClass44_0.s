; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25685 .MergeBoardView.<>c__DisplayClass44_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A3CE70 | public void .ctor() { }
; bytes=8 sha256=4bc7e33fcb665e8040c115f7037791be635986a8aa86c738d595eb27faa928da status=arm64_complete_bound indexed_start=True
0x06A3CE70: e1031faa  mov x1, xzr
0x06A3CE74: e275b217  b #0x56da5fc

; RVA 0x6A3CE78 | internal void <HandleBoardResult>b__0() { }
; bytes=32 sha256=d059c3446149891fb90ad88c9d7938d3deebd6a2a4cf4b32cdc70964d46920f6 status=arm64_complete_bound indexed_start=True
0x06A3CE78: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A3CE7C: 080840f9  ldr x8, [x0, #0x10]
0x06A3CE80: a80000b4  cbz x8, #0x6a3ce94
0x06A3CE84: 010c40f9  ldr x1, [x0, #0x18]
0x06A3CE88: e00308aa  mov x0, x8
0x06A3CE8C: fe0741f8  ldr x30, [sp], #0x10
0x06A3CE90: 72f5ff17  b #0x6a3a458
0x06A3CE94: 860f1d97  bl #0x3180cac

