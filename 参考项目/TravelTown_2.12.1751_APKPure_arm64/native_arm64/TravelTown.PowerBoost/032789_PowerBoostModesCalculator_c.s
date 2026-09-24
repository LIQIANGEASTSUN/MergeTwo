; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 32789 .PowerBoostModesCalculator.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6AD0600 | private static void .cctor() { }
; bytes=104 sha256=450aa7e42f7637fecc67646722f2b0590d756863b8dae68d566c43b0a3437f36 status=arm64_complete_bound indexed_start=True
0x06AD0600: fe0f1ef8  str x30, [sp, #-0x20]!
0x06AD0604: f44f01a9  stp x20, x19, [sp, #0x10]
0x06AD0608: d39200d0  adrp x19, #0x7d2a000
0x06AD060C: 34630090  adrp x20, #0x7734000
0x06AD0610: 68fe6939  ldrb w8, [x19, #0xa7f]
0x06AD0614: 948640f9  ldr x20, [x20, #0x108]
0x06AD0618: c8000037  tbnz w8, #0, #0x6ad0630
0x06AD061C: 20630090  adrp x0, #0x7734000
0x06AD0620: 008440f9  ldr x0, [x0, #0x108]
0x06AD0624: fdc01a97  bl #0x3180a18
0x06AD0628: 28008052  movz w8, #0x1
0x06AD062C: 68fe2939  strb w8, [x19, #0xa7f]
0x06AD0630: 800240f9  ldr x0, [x20]
0x06AD0634: 9bc11a97  bl #0x3180ca0
0x06AD0638: e1031faa  mov x1, xzr
0x06AD063C: f30300aa  mov x19, x0
0x06AD0640: ef27b097  bl #0x56da5fc
0x06AD0644: 880240f9  ldr x8, [x20]
0x06AD0648: e10313aa  mov x1, x19
0x06AD064C: 085d40f9  ldr x8, [x8, #0xb8]
0x06AD0650: 130100f9  str x19, [x8]
0x06AD0654: 880240f9  ldr x8, [x20]
0x06AD0658: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06AD065C: 005d40f9  ldr x0, [x8, #0xb8]
0x06AD0660: fe0742f8  ldr x30, [sp], #0x20
0x06AD0664: d8c01a17  b #0x31809c4

; RVA 0x6AD0668 | public void .ctor() { }
; bytes=8 sha256=4388197c95bb4a01021daaff695fac5710c7d5ac06878103e8644c79514d9920 status=arm64_complete_bound indexed_start=True
0x06AD0668: e1031faa  mov x1, xzr
0x06AD066C: e427b017  b #0x56da5fc

; RVA 0x6AD0670 | internal int <CalculatePlayableBoosts>b__24_2(BoostModeConfig availableBoosts) { }
; bytes=24 sha256=7014e56d1176b53c32c29146f7bc8b1f3f5f8d604ed35f90333039bc73b300a9 status=arm64_complete_bound indexed_start=True
0x06AD0670: fe0f1ff8  str x30, [sp, #-0x10]!
0x06AD0674: 810000b4  cbz x1, #0x6ad0684
0x06AD0678: 201440b9  ldr w0, [x1, #0x14]
0x06AD067C: fe0741f8  ldr x30, [sp], #0x10
0x06AD0680: c0035fd6  ret
0x06AD0684: 8ac11a97  bl #0x3180cac

; RVA 0x6AD0688 | internal int <CalculatePlayableBoosts>b__24_3(int x) { }
; bytes=8 sha256=3d788c1e82a1e93ef22cef7cb2ec59e7a3c2926840aab70d202ed69ab210c088 status=arm64_complete_bound indexed_start=True
0x06AD0688: e003012a  mov w0, w1
0x06AD068C: c0035fd6  ret

; RVA 0x6AD0690 | internal int <CalculateAvailableBoostsByLevel>b__25_0(BoostModeConfig availableBoosts) { }
; bytes=24 sha256=b7983b30d04cd755dd5d209ed2403c8977ed4e3aa4581495badc5032336cce0f status=arm64_complete_bound indexed_start=True
0x06AD0690: fe0f1ff8  str x30, [sp, #-0x10]!
0x06AD0694: 810000b4  cbz x1, #0x6ad06a4
0x06AD0698: 201440b9  ldr w0, [x1, #0x14]
0x06AD069C: fe0741f8  ldr x30, [sp], #0x10
0x06AD06A0: c0035fd6  ret
0x06AD06A4: 82c11a97  bl #0x3180cac

; RVA 0x6AD06A8 | internal int <CalculateAvailableBoostsByLevel>b__25_1(int x) { }
; bytes=8 sha256=3d788c1e82a1e93ef22cef7cb2ec59e7a3c2926840aab70d202ed69ab210c088 status=arm64_complete_bound indexed_start=True
0x06AD06A8: e003012a  mov w0, w1
0x06AD06AC: c0035fd6  ret

