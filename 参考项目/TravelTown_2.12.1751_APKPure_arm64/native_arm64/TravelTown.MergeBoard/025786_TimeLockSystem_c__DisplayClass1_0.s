; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25786 .TimeLockSystem.<>c__DisplayClass1_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A782FC | public void .ctor() { }
; bytes=8 sha256=a656e54943c3c09177960e2fe73e4f6d896b37f1ae9f9e05a3c3b1be99ad34d1 status=arm64_complete_bound indexed_start=True
0x06A782FC: e1031faa  mov x1, xzr
0x06A78300: bf88b117  b #0x56da5fc

; RVA 0x6A78FA8 | internal bool <HandleTapAction>b__0(ValueTuple<Entity, TimeLockComponent, BoardTilePositionComponent, IdComponent> e) { }
; bytes=40 sha256=343ad7411021186428c02c07870fc7953114cfe298c8178feafeccbebb902b74 status=arm64_complete_bound indexed_start=True
0x06A78FA8: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A78FAC: 080840f9  ldr x8, [x0, #0x10]
0x06A78FB0: e80000b4  cbz x8, #0x6a78fcc
0x06A78FB4: 293040b9  ldr w9, [x1, #0x30]
0x06A78FB8: 081140b9  ldr w8, [x8, #0x10]
0x06A78FBC: 3f01086b  cmp w9, w8
0x06A78FC0: e0179f1a  cset w0, eq
0x06A78FC4: fe0741f8  ldr x30, [sp], #0x10
0x06A78FC8: c0035fd6  ret
0x06A78FCC: 381f1c97  bl #0x3180cac

