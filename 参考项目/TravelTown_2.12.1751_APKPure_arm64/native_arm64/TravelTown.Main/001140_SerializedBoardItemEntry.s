; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1140 MergeEngine.Data.SerializedBoardItemEntry
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x69053A8 | public void .ctor(int col, int row, int id) { }
; bytes=56 sha256=69031d0b3bbd479f5ff57a2f71cfc683d8ed4ea2078409af13d6904d92bb6a42 status=arm64_complete_bound indexed_start=True
0x069053A8: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x069053AC: 406a00d0  adrp x0, #0x764f000
0x069053B0: 009c41f9  ldr x0, [x0, #0x338]
0x069053B4: 9eed2197  bl #0x3180a2c
0x069053B8: 3aee2197  bl #0x3180ca0
0x069053BC: e1031faa  mov x1, xzr
0x069053C0: f30300aa  mov x19, x0
0x069053C4: b54db697  bl #0x5698a98
0x069053C8: 007100b0  adrp x0, #0x7726000
0x069053CC: 000c45f9  ldr x0, [x0, #0xa18]
0x069053D0: 97ed2197  bl #0x3180a2c
0x069053D4: e10300aa  mov x1, x0
0x069053D8: e00313aa  mov x0, x19
0x069053DC: e8ed2197  bl #0x3180b7c

