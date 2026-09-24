; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 913 .BoardSystem.<>c__DisplayClass48_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6669A8C | public void .ctor() { }
; bytes=8 sha256=61c424428c6ca306e3ffd353482719c253c9ee68795ae86aea2454d7bfa1aed5 status=arm64_complete_bound indexed_start=True
0x06669A8C: e1031faa  mov x1, xzr
0x06669A90: dbc2c117  b #0x56da5fc

; RVA 0x666BC04 | internal bool <MoveDuplicatePositionedItemsToItemQueue>b__0(PositionComponent first) { }
; bytes=44 sha256=2fcce4491a49405f3297f0484cfce4c2b3ea17f855b972de6850264371746798 status=arm64_complete_bound indexed_start=True
0x0666BC04: fe0f1ff8  str x30, [sp, #-0x10]!
0x0666BC08: 210100b4  cbz x1, #0x666bc2c
0x0666BC0C: 080840f9  ldr x8, [x0, #0x10]
0x0666BC10: e80000b4  cbz x8, #0x666bc2c
0x0666BC14: 081940f9  ldr x8, [x8, #0x30]
0x0666BC18: 20c00091  add x0, x1, #0x30
0x0666BC1C: e2031faa  mov x2, xzr
0x0666BC20: e10308aa  mov x1, x8
0x0666BC24: fe0741f8  ldr x30, [sp], #0x10
0x0666BC28: b6640a14  b #0x6904f00
0x0666BC2C: 20542c97  bl #0x3180cac

