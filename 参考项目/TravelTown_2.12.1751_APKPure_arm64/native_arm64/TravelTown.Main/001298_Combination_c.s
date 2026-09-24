; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1298 .Combination.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A289A4 | private static void .cctor() { }
; bytes=104 sha256=a395b1a465142b3e53185e3d37b6eb0954c64209665aca5ac2b4c148e63ea755 status=arm64_complete_bound indexed_start=True
0x06A289A4: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A289A8: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A289AC: 139800d0  adrp x19, #0x7d2a000
0x06A289B0: 346800f0  adrp x20, #0x772f000
0x06A289B4: 68365039  ldrb w8, [x19, #0x40d]
0x06A289B8: 944640f9  ldr x20, [x20, #0x88]
0x06A289BC: c8000037  tbnz w8, #0, #0x6a289d4
0x06A289C0: 206800f0  adrp x0, #0x772f000
0x06A289C4: 004440f9  ldr x0, [x0, #0x88]
0x06A289C8: 14601d97  bl #0x3180a18
0x06A289CC: 28008052  movz w8, #0x1
0x06A289D0: 68361039  strb w8, [x19, #0x40d]
0x06A289D4: 800240f9  ldr x0, [x20]
0x06A289D8: b2601d97  bl #0x3180ca0
0x06A289DC: e1031faa  mov x1, xzr
0x06A289E0: f30300aa  mov x19, x0
0x06A289E4: 06c7b297  bl #0x56da5fc
0x06A289E8: 880240f9  ldr x8, [x20]
0x06A289EC: e10313aa  mov x1, x19
0x06A289F0: 085d40f9  ldr x8, [x8, #0xb8]
0x06A289F4: 130100f9  str x19, [x8]
0x06A289F8: 880240f9  ldr x8, [x20]
0x06A289FC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A28A00: 005d40f9  ldr x0, [x8, #0xb8]
0x06A28A04: fe0742f8  ldr x30, [sp], #0x20
0x06A28A08: ef5f1d17  b #0x31809c4

; RVA 0x6A28A0C | public void .ctor() { }
; bytes=8 sha256=4e18205ef942251ac1f0abe012ffda42cf4d58fc22b57edb1580a5e25652970c status=arm64_complete_bound indexed_start=True
0x06A28A0C: e1031faa  mov x1, xzr
0x06A28A10: fbc6b217  b #0x56da5fc

; RVA 0x6A28A14 | internal string <get_ItemsToConsumeIDs>b__5_0(MergeItemWeakReference item) { }
; bytes=36 sha256=f54577c49eba736b0de5ec838a1cdac5aefa6021394d2eace3d144b5ddc8cf61 status=arm64_complete_bound indexed_start=True
0x06A28A14: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A28A18: e10000b4  cbz x1, #0x6a28a34
0x06A28A1C: 280040f9  ldr x8, [x1]
0x06A28A20: e00301aa  mov x0, x1
0x06A28A24: 02a15ca9  ldp x2, x8, [x8, #0x1c8]
0x06A28A28: e10308aa  mov x1, x8
0x06A28A2C: fe0741f8  ldr x30, [sp], #0x10
0x06A28A30: 40001fd6  br x2
0x06A28A34: 9e601d97  bl #0x3180cac

