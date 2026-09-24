; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 596 .BoardItemUtil.<>c__DisplayClass1_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x626EFC8 | public void .ctor() { }
; bytes=8 sha256=f9799592f877b1642377fc4a267352edf42b79b073e8a1b2c42c2ff837e6b02a status=arm64_complete_bound indexed_start=True
0x0626EFC8: e1031faa  mov x1, xzr
0x0626EFCC: 8cadd117  b #0x56da5fc

; RVA 0x626F598 | internal bool <GetPositionItemClosestToInventory>b__0(PositionComponent component) { }
; bytes=400 sha256=b9963b7db5799de8b86c8c9b02d421aaf91c25813ead867c22881d5e03ba7173 status=arm64_complete_bound indexed_start=True
0x0626F598: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0626F59C: f44f01a9  stp x20, x19, [sp, #0x10]
0x0626F5A0: b5d500d0  adrp x21, #0x7d25000
0x0626F5A4: a86e5039  ldrb w8, [x21, #0x41b]
0x0626F5A8: f30301aa  mov x19, x1
0x0626F5AC: f40300aa  mov x20, x0
0x0626F5B0: e8010037  tbnz w8, #0, #0x626f5ec
0x0626F5B4: a0a300f0  adrp x0, #0x76e6000
0x0626F5B8: 008042f9  ldr x0, [x0, #0x500]
0x0626F5BC: 17453c97  bl #0x3180a18
0x0626F5C0: 60a000f0  adrp x0, #0x767e000
0x0626F5C4: 001c43f9  ldr x0, [x0, #0x638]
0x0626F5C8: 14453c97  bl #0x3180a18
0x0626F5CC: 60a000b0  adrp x0, #0x767c000
0x0626F5D0: 002441f9  ldr x0, [x0, #0x248]
0x0626F5D4: 11453c97  bl #0x3180a18
0x0626F5D8: 40a000f0  adrp x0, #0x767a000
0x0626F5DC: 004c42f9  ldr x0, [x0, #0x498]
0x0626F5E0: 0e453c97  bl #0x3180a18
0x0626F5E4: 28008052  movz w8, #0x1
0x0626F5E8: a86e1039  strb w8, [x21, #0x41b]
0x0626F5EC: d30900b4  cbz x19, #0x626f724
0x0626F5F0: 68a000f0  adrp x8, #0x767e000
0x0626F5F4: 081d43f9  ldr x8, [x8, #0x638]
0x0626F5F8: e00313aa  mov x0, x19
0x0626F5FC: 010140f9  ldr x1, [x8]
0x0626F600: 87f86597  bl #0x3bed81c
0x0626F604: 000900b4  cbz x0, #0x626f724
0x0626F608: e1031faa  mov x1, xzr
0x0626F60C: 42381a94  bl #0x68fd714
0x0626F610: e0000037  tbnz w0, #0, #0x626f62c
0x0626F614: a8a300f0  adrp x8, #0x76e6000
0x0626F618: 088142f9  ldr x8, [x8, #0x500]
0x0626F61C: e00313aa  mov x0, x19
0x0626F620: 010140f9  ldr x1, [x8]
0x0626F624: 7ef86597  bl #0x3bed81c
0x0626F628: c00000b4  cbz x0, #0x626f640
0x0626F62C: e8031f2a  mov w8, wzr
0x0626F630: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0626F634: 00010012  and w0, w8, #1
0x0626F638: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0626F63C: c0035fd6  ret
0x0626F640: 940a40f9  ldr x20, [x20, #0x10]
0x0626F644: 140700b4  cbz x20, #0x626f724
0x0626F648: 4aa000f0  adrp x10, #0x767a000
0x0626F64C: 880240f9  ldr x8, [x20]
0x0626F650: 4a4d42f9  ldr x10, [x10, #0x498]
0x0626F654: 095d4279  ldrh w9, [x8, #0x12e]
0x0626F658: 410140f9  ldr x1, [x10]
0x0626F65C: 290100b4  cbz x9, #0x626f680
0x0626F660: 0a5940f9  ldr x10, [x8, #0xb0]
0x0626F664: 4a210091  add x10, x10, #8
0x0626F668: 4b815ff8  ldur x11, [x10, #-8]
0x0626F66C: 7f0101eb  cmp x11, x1
0x0626F670: 00010054  b.eq #0x626f690
0x0626F674: 290500f1  subs x9, x9, #1
0x0626F678: 4a410091  add x10, x10, #0x10
0x0626F67C: 61ffff54  b.ne #0x626f668
0x0626F680: e2028052  movz w2, #0x17
0x0626F684: e00314aa  mov x0, x20
0x0626F688: 229d3b97  bl #0x3156b10
0x0626F68C: 05000014  b #0x626f6a0
0x0626F690: 490140b9  ldr w9, [x10]
0x0626F694: 295d0011  add w9, w9, #0x17
0x0626F698: 08d1298b  add x8, x8, w9, sxtw #4
0x0626F69C: 00e10491  add x0, x8, #0x138
0x0626F6A0: 080840a9  ldp x8, x2, [x0]
0x0626F6A4: e00314aa  mov x0, x20
0x0626F6A8: e10313aa  mov x1, x19
0x0626F6AC: 00013fd6  blr x8
0x0626F6B0: a00300b4  cbz x0, #0x626f724
0x0626F6B4: 6aa000b0  adrp x10, #0x767c000
0x0626F6B8: 080040f9  ldr x8, [x0]
0x0626F6BC: 4a2541f9  ldr x10, [x10, #0x248]
0x0626F6C0: f30300aa  mov x19, x0
0x0626F6C4: 095d4279  ldrh w9, [x8, #0x12e]
0x0626F6C8: 410140f9  ldr x1, [x10]
0x0626F6CC: 290100b4  cbz x9, #0x626f6f0
0x0626F6D0: 0a5940f9  ldr x10, [x8, #0xb0]
0x0626F6D4: 4a210091  add x10, x10, #8
0x0626F6D8: 4b815ff8  ldur x11, [x10, #-8]
0x0626F6DC: 7f0101eb  cmp x11, x1
0x0626F6E0: 00010054  b.eq #0x626f700
0x0626F6E4: 290500f1  subs x9, x9, #1
0x0626F6E8: 4a410091  add x10, x10, #0x10
0x0626F6EC: 61ffff54  b.ne #0x626f6d8
0x0626F6F0: a2028052  movz w2, #0x15
0x0626F6F4: e00313aa  mov x0, x19
0x0626F6F8: 069d3b97  bl #0x3156b10
0x0626F6FC: 05000014  b #0x626f710
0x0626F700: 490140b9  ldr w9, [x10]
0x0626F704: 29550011  add w9, w9, #0x15
0x0626F708: 08d1298b  add x8, x8, w9, sxtw #4
0x0626F70C: 00e10491  add x0, x8, #0x138
0x0626F710: 080440a9  ldp x8, x1, [x0]
0x0626F714: e00313aa  mov x0, x19
0x0626F718: 00013fd6  blr x8
0x0626F71C: 08000052  eor w8, w0, #1
0x0626F720: c4ffff17  b #0x626f630
0x0626F724: 62453c97  bl #0x3180cac

; RVA 0x626F728 | internal float <GetPositionItemClosestToInventory>b__2(PositionComponent item) { }
; bytes=36 sha256=2f93ac3a7a82b67f24996744115566adbb97a4263eb6ac4f8570059054215209 status=arm64_complete_bound indexed_start=True
0x0626F728: fe0f1ff8  str x30, [sp, #-0x10]!
0x0626F72C: e10000b4  cbz x1, #0x626f748
0x0626F730: 080c40f9  ldr x8, [x0, #0x18]
0x0626F734: 20c00091  add x0, x1, #0x30
0x0626F738: e2031faa  mov x2, xzr
0x0626F73C: e10308aa  mov x1, x8
0x0626F740: fe0741f8  ldr x30, [sp], #0x10
0x0626F744: e6551a14  b #0x6904edc
0x0626F748: 59453c97  bl #0x3180cac

