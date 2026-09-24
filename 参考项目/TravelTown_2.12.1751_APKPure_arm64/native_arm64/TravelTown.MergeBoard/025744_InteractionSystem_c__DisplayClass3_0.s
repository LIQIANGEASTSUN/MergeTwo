; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25744 .InteractionSystem.<>c__DisplayClass3_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A6B9A4 | public void .ctor() { }
; bytes=8 sha256=59b453fde0f54ee179144447539b1e6c4acd6350b5b25301aab11e8ee4c018b0 status=arm64_complete_bound indexed_start=True
0x06A6B9A4: e1031faa  mov x1, xzr
0x06A6B9A8: 15bbb117  b #0x56da5fc

; RVA 0x6A6BC94 | internal bool <HandleInteractByTap>b__0(ValueTuple<Entity, InteractionComponent, BoardTilePositionComponent> e) { }
; bytes=40 sha256=a8f0ff19f32035bc646e69a7f926020836e3bd30e54c4a02e810aab0029f3684 status=arm64_complete_bound indexed_start=True
0x06A6BC94: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A6BC98: 080840f9  ldr x8, [x0, #0x10]
0x06A6BC9C: e80000b4  cbz x8, #0x6a6bcb8
0x06A6BCA0: 293040b9  ldr w9, [x1, #0x30]
0x06A6BCA4: 081140b9  ldr w8, [x8, #0x10]
0x06A6BCA8: 3f01086b  cmp w9, w8
0x06A6BCAC: e0179f1a  cset w0, eq
0x06A6BCB0: fe0741f8  ldr x30, [sp], #0x10
0x06A6BCB4: c0035fd6  ret
0x06A6BCB8: fd531c97  bl #0x3180cac

