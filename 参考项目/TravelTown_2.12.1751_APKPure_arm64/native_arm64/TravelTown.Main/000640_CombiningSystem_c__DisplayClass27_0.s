; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 640 .CombiningSystem.<>c__DisplayClass27_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x627E1B0 | public void .ctor() { }
; bytes=8 sha256=d04b73fec85b99f3e7067a2ffdd736663218376a48b748f981767ea4bb28f8bb status=arm64_complete_bound indexed_start=True
0x0627E1B0: e1031faa  mov x1, xzr
0x0627E1B4: 1271d117  b #0x56da5fc

; RVA 0x627E8F8 | internal void <OnItemSpawned>b__0() { }
; bytes=72 sha256=bb121e14df62adfdfba671820682260680a159e18ef43d719819bb95581bf34c status=arm64_complete_bound indexed_start=True
0x0627E8F8: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x0627E8FC: f30300aa  mov x19, x0
0x0627E900: 000840f9  ldr x0, [x0, #0x10]
0x0627E904: c00100b4  cbz x0, #0x627e93c
0x0627E908: 21008052  movz w1, #0x1
0x0627E90C: e2031faa  mov x2, xzr
0x0627E910: 4ef81994  bl #0x68fca48
0x0627E914: 600a40f9  ldr x0, [x19, #0x10]
0x0627E918: 200100b4  cbz x0, #0x627e93c
0x0627E91C: 611a40b9  ldr w1, [x19, #0x18]
0x0627E920: e2031faa  mov x2, xzr
0x0627E924: fef91994  bl #0x68fd11c
0x0627E928: 680a40f9  ldr x8, [x19, #0x10]
0x0627E92C: 880000b4  cbz x8, #0x627e93c
0x0627E930: 1fc10039  strb wzr, [x8, #0x30]
0x0627E934: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x0627E938: c0035fd6  ret
0x0627E93C: dc083c97  bl #0x3180cac

