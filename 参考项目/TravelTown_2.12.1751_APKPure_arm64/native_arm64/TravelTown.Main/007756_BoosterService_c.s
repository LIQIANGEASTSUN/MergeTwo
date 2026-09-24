; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 7756 .BoosterService.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x65C45E8 | private static void .cctor() { }
; bytes=104 sha256=0a44eb635435e5195e5d2d287080d8c2f1462b4316cd2e1a07a47611b22f5e7a status=arm64_complete_bound indexed_start=True
0x065C45E8: fe0f1ef8  str x30, [sp, #-0x20]!
0x065C45EC: f44f01a9  stp x20, x19, [sp, #0x10]
0x065C45F0: 13bb00f0  adrp x19, #0x7d27000
0x065C45F4: f48900f0  adrp x20, #0x7703000
0x065C45F8: 68e66439  ldrb w8, [x19, #0x939]
0x065C45FC: 946241f9  ldr x20, [x20, #0x2c0]
0x065C4600: c8000037  tbnz w8, #0, #0x65c4618
0x065C4604: e08900f0  adrp x0, #0x7703000
0x065C4608: 006041f9  ldr x0, [x0, #0x2c0]
0x065C460C: 03f12e97  bl #0x3180a18
0x065C4610: 28008052  movz w8, #0x1
0x065C4614: 68e62439  strb w8, [x19, #0x939]
0x065C4618: 800240f9  ldr x0, [x20]
0x065C461C: a1f12e97  bl #0x3180ca0
0x065C4620: e1031faa  mov x1, xzr
0x065C4624: f30300aa  mov x19, x0
0x065C4628: f557c497  bl #0x56da5fc
0x065C462C: 880240f9  ldr x8, [x20]
0x065C4630: e10313aa  mov x1, x19
0x065C4634: 085d40f9  ldr x8, [x8, #0xb8]
0x065C4638: 130100f9  str x19, [x8]
0x065C463C: 880240f9  ldr x8, [x20]
0x065C4640: f44f41a9  ldp x20, x19, [sp, #0x10]
0x065C4644: 005d40f9  ldr x0, [x8, #0xb8]
0x065C4648: fe0742f8  ldr x30, [sp], #0x20
0x065C464C: def02e17  b #0x31809c4

; RVA 0x65C4650 | public void .ctor() { }
; bytes=8 sha256=419e22c344e7e0b337079a3648b8d1c9a1549f29eebdc7bff98282df46759475 status=arm64_complete_bound indexed_start=True
0x065C4650: e1031faa  mov x1, xzr
0x065C4654: ea57c417  b #0x56da5fc

; RVA 0x65C4658 | internal int <GetActiveBoosters>b__36_2(RemoteBoosterData x, RemoteBoosterData y) { }
; bytes=48 sha256=4e7fd9ee63550c35b5cad26a24b357804c2d7ed85a53c1f47856834f6fc017d3 status=arm64_complete_bound indexed_start=True
0x065C4658: fe0f1ff8  str x30, [sp, #-0x10]!
0x065C465C: 410100b4  cbz x1, #0x65c4684
0x065C4660: 282840f9  ldr x8, [x1, #0x50]
0x065C4664: e80700f9  str x8, [sp, #8]
0x065C4668: e20000b4  cbz x2, #0x65c4684
0x065C466C: 412840f9  ldr x1, [x2, #0x50]
0x065C4670: e0230091  add x0, sp, #8
0x065C4674: e2031faa  mov x2, xzr
0x065C4678: 4b41c397  bl #0x5694ba4
0x065C467C: fe0741f8  ldr x30, [sp], #0x10
0x065C4680: c0035fd6  ret
0x065C4684: 8af12e97  bl #0x3180cac

