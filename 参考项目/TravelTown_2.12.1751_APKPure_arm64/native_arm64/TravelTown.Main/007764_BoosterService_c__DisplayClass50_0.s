; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 7764 .BoosterService.<>c__DisplayClass50_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x65C3D34 | public void .ctor() { }
; bytes=8 sha256=c84eb796721ece717309356ea297382b88cd574abb9e0c24ea583a60e20b5170 status=arm64_complete_bound indexed_start=True
0x065C3D34: e1031faa  mov x1, xzr
0x065C3D38: 315ac417  b #0x56da5fc

; RVA 0x65C50C8 | internal bool <GetLinkedMergeItemIdComponent>b__0(MergeItemBoosterComponent idComponent) { }
; bytes=36 sha256=37a9f9b7c122df30680e3c79727734fa761902220615f275164cb3ab79ef3c9f status=arm64_complete_bound indexed_start=True
0x065C50C8: fe0f1ff8  str x30, [sp, #-0x10]!
0x065C50CC: e10000b4  cbz x1, #0x65c50e8
0x065C50D0: 281040f9  ldr x8, [x1, #0x20]
0x065C50D4: 010840f9  ldr x1, [x0, #0x10]
0x065C50D8: e2031faa  mov x2, xzr
0x065C50DC: e00308aa  mov x0, x8
0x065C50E0: fe0741f8  ldr x30, [sp], #0x10
0x065C50E4: e395bc17  b #0x54ea870
0x065C50E8: f1ee2e97  bl #0x3180cac

