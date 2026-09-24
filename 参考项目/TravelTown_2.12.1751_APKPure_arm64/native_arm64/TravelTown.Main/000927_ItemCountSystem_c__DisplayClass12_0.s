; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 927 .ItemCountSystem.<>c__DisplayClass12_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x666D4B8 | public void .ctor() { }
; bytes=8 sha256=5f74fa5b9ca1f9dbe7ed70e074de4c4ec3f5a8556c4a785d3ecd7736f922eaa7 status=arm64_complete_bound indexed_start=True
0x0666D4B8: e1031faa  mov x1, xzr
0x0666D4BC: 50b4c117  b #0x56da5fc

; RVA 0x666D7E0 | internal void <OnItemCountChanged>b__0() { }
; bytes=32 sha256=f61f4f1304d3a04bc47ec5786269e39369eac6a2a41bcff5aea23b3497e18e0c status=arm64_complete_bound indexed_start=True
0x0666D7E0: fe0f1ff8  str x30, [sp, #-0x10]!
0x0666D7E4: 080840f9  ldr x8, [x0, #0x10]
0x0666D7E8: a80000b4  cbz x8, #0x666d7fc
0x0666D7EC: 010c40f9  ldr x1, [x0, #0x18]
0x0666D7F0: e00308aa  mov x0, x8
0x0666D7F4: fe0741f8  ldr x30, [sp], #0x10
0x0666D7F8: 32ffff17  b #0x666d4c0
0x0666D7FC: 2c4d2c97  bl #0x3180cac

