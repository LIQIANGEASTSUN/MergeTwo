; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 921 .ChargableSystem.<>c__DisplayClass11_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x666C438 | public void .ctor() { }
; bytes=8 sha256=425e6359bc62b3828bd859c8d0aeb5f3db94b519bc5c798acce038b1016064e1 status=arm64_complete_bound indexed_start=True
0x0666C438: e1031faa  mov x1, xzr
0x0666C43C: 70b8c117  b #0x56da5fc

; RVA 0x666C70C | internal void <ProcessComponent>b__0() { }
; bytes=28 sha256=fbab6c37eeb5ebd000c1c410a5ea7c1b1a79c2a8c7d475a80aadc40a0c07b77b status=arm64_complete_bound indexed_start=True
0x0666C70C: fe0f1ff8  str x30, [sp, #-0x10]!
0x0666C710: 080840f9  ldr x8, [x0, #0x10]
0x0666C714: 880000b4  cbz x8, #0x666c724
0x0666C718: 010c40f9  ldr x1, [x0, #0x18]
0x0666C71C: fe0741f8  ldr x30, [sp], #0x10
0x0666C720: 8effff17  b #0x666c558
0x0666C724: 62512c97  bl #0x3180cac

