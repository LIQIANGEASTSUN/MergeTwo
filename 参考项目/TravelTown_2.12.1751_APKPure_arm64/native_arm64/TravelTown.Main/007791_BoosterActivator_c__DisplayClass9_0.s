; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 7791 .BoosterActivator.<>c__DisplayClass9_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x65C8548 | public void .ctor() { }
; bytes=8 sha256=59f26abcb00556ffd34e4825697e6c42afeac8cc60ebeb5add0f85b2e6409233 status=arm64_complete_bound indexed_start=True
0x065C8548: e1031faa  mov x1, xzr
0x065C854C: 2c48c417  b #0x56da5fc

; RVA 0x65C90F4 | internal void <ActivateBooster>b__0() { }
; bytes=32 sha256=3309553b45bf239e49cf2fe59edbec08377e5525d64362052762efd812f74dd1 status=arm64_complete_bound indexed_start=True
0x065C90F4: fe0f1ff8  str x30, [sp, #-0x10]!
0x065C90F8: 080840f9  ldr x8, [x0, #0x10]
0x065C90FC: a80000b4  cbz x8, #0x65c9110
0x065C9100: 018841a9  ldp x1, x2, [x0, #0x18]
0x065C9104: e00308aa  mov x0, x8
0x065C9108: fe0741f8  ldr x30, [sp], #0x10
0x065C910C: 11fdff17  b #0x65c8550
0x065C9110: e7de2e97  bl #0x3180cac

