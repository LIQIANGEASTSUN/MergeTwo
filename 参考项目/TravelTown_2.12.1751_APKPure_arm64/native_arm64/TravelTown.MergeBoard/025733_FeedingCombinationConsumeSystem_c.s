; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25733 .FeedingCombinationConsumeSystem.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A67898 | private static void .cctor() { }
; bytes=104 sha256=393151809bc4601df8c16e815d6124c08fbdef21c57cb6d3894d2ba331ddd337 status=arm64_complete_bound indexed_start=True
0x06A67898: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A6789C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A678A0: 139600f0  adrp x19, #0x7d2a000
0x06A678A4: 546600b0  adrp x20, #0x7730000
0x06A678A8: 68aa5a39  ldrb w8, [x19, #0x6aa]
0x06A678AC: 941a46f9  ldr x20, [x20, #0xc30]
0x06A678B0: c8000037  tbnz w8, #0, #0x6a678c8
0x06A678B4: 406600b0  adrp x0, #0x7730000
0x06A678B8: 001846f9  ldr x0, [x0, #0xc30]
0x06A678BC: 57641c97  bl #0x3180a18
0x06A678C0: 28008052  movz w8, #0x1
0x06A678C4: 68aa1a39  strb w8, [x19, #0x6aa]
0x06A678C8: 800240f9  ldr x0, [x20]
0x06A678CC: f5641c97  bl #0x3180ca0
0x06A678D0: e1031faa  mov x1, xzr
0x06A678D4: f30300aa  mov x19, x0
0x06A678D8: 49cbb197  bl #0x56da5fc
0x06A678DC: 880240f9  ldr x8, [x20]
0x06A678E0: e10313aa  mov x1, x19
0x06A678E4: 085d40f9  ldr x8, [x8, #0xb8]
0x06A678E8: 130100f9  str x19, [x8]
0x06A678EC: 880240f9  ldr x8, [x20]
0x06A678F0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A678F4: 005d40f9  ldr x0, [x8, #0xb8]
0x06A678F8: fe0742f8  ldr x30, [sp], #0x20
0x06A678FC: 32641c17  b #0x31809c4

; RVA 0x6A67900 | public void .ctor() { }
; bytes=8 sha256=3cafea0caf868f33f140453fd59b6d5ba60c349628d12e31bb4a293671c985aa status=arm64_complete_bound indexed_start=True
0x06A67900: e1031faa  mov x1, xzr
0x06A67904: 3ecbb117  b #0x56da5fc

; RVA 0x6A67908 | internal bool <Tick>b__0_0(ValueTuple<Entity, BornComponent, IdComponent> query) { }
; bytes=16 sha256=3a4db645ecf7ebc5d4566151eca4b6c13b3f2a4eba88a0dfcfd4e681b0607a8d status=arm64_complete_bound indexed_start=True
0x06A67908: 283040b9  ldr w8, [x1, #0x30]
0x06A6790C: 1f210071  cmp w8, #8
0x06A67910: e0179f1a  cset w0, eq
0x06A67914: c0035fd6  ret

