; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 32803 Merger.MergeBoard.PowerBoost.Data.LocalPlayerPersistentPowerBoostData
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6AD0FCC | public void .ctor() { }
; bytes=136 sha256=22d384e140d59609548b5737a066d2d7468ece3672f9b89a3dd54e0cf017e9b1 status=arm64_complete_bound indexed_start=True
0x06AD0FCC: fe0f1df8  str x30, [sp, #-0x30]!
0x06AD0FD0: f65701a9  stp x22, x21, [sp, #0x10]
0x06AD0FD4: f44f02a9  stp x20, x19, [sp, #0x20]
0x06AD0FD8: d59200d0  adrp x21, #0x7d2a000
0x06AD0FDC: 565c00b0  adrp x22, #0x7659000
0x06AD0FE0: 545c00b0  adrp x20, #0x7659000
0x06AD0FE4: a8e26a39  ldrb w8, [x21, #0xab8]
0x06AD0FE8: d60a45f9  ldr x22, [x22, #0xa10]
0x06AD0FEC: 940e45f9  ldr x20, [x20, #0xa18]
0x06AD0FF0: f30300aa  mov x19, x0
0x06AD0FF4: 28010037  tbnz w8, #0, #0x6ad1018
0x06AD0FF8: 405c00b0  adrp x0, #0x7659000
0x06AD0FFC: 000c45f9  ldr x0, [x0, #0xa18]
0x06AD1000: 86be1a97  bl #0x3180a18
0x06AD1004: 405c0090  adrp x0, #0x7659000
0x06AD1008: 000845f9  ldr x0, [x0, #0xa10]
0x06AD100C: 83be1a97  bl #0x3180a18
0x06AD1010: 28008052  movz w8, #0x1
0x06AD1014: a8e22a39  strb w8, [x21, #0xab8]
0x06AD1018: c00240f9  ldr x0, [x22]
0x06AD101C: 21bf1a97  bl #0x3180ca0
0x06AD1020: 810240f9  ldr x1, [x20]
0x06AD1024: f40300aa  mov x20, x0
0x06AD1028: 07215597  bl #0x4019444
0x06AD102C: e00313aa  mov x0, x19
0x06AD1030: 148c01f8  str x20, [x0, #0x18]!
0x06AD1034: e10314aa  mov x1, x20
0x06AD1038: 63be1a97  bl #0x31809c4
0x06AD103C: e00313aa  mov x0, x19
0x06AD1040: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06AD1044: f65741a9  ldp x22, x21, [sp, #0x10]
0x06AD1048: e1031faa  mov x1, xzr
0x06AD104C: fe0743f8  ldr x30, [sp], #0x30
0x06AD1050: 6b25b017  b #0x56da5fc

