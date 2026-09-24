; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 917 .BoardSystem.<>c__DisplayClass65_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x666AC94 | public void .ctor() { }
; bytes=8 sha256=38621a036982cd54dee63da150e0e0176cd383aa4ce1645aa6867b9250456355 status=arm64_complete_bound indexed_start=True
0x0666AC94: e1031faa  mov x1, xzr
0x0666AC98: 59bec117  b #0x56da5fc

; RVA 0x666BE40 | internal bool <GetAdjascentPositions>b__0(BoardItemPosition adjacentPosition) { }
; bytes=36 sha256=e7bd2885ef013870519fbd381d10024b3405da9aec64ef97178ec2085bcb208f status=arm64_complete_bound indexed_start=True
0x0666BE40: fe0f1ff8  str x30, [sp, #-0x10]!
0x0666BE44: 080840f9  ldr x8, [x0, #0x10]
0x0666BE48: c80000b4  cbz x8, #0x666be60
0x0666BE4C: 030d40f9  ldr x3, [x8, #0x18]
0x0666BE50: 002140f9  ldr x0, [x8, #0x40]
0x0666BE54: 021540f9  ldr x2, [x8, #0x28]
0x0666BE58: fe0741f8  ldr x30, [sp], #0x10
0x0666BE5C: 60001fd6  br x3
0x0666BE60: 93532c97  bl #0x3180cac

