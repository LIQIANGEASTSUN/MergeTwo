; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 8585 .BoardView.<>c__DisplayClass99_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6692878 | public void .ctor() { }
; bytes=8 sha256=7dce2ab8c3b9a39e1d3a7a3033178b9651f7e238cc7f30fd0c47d83f3f8931ba status=arm64_complete_bound indexed_start=True
0x06692878: e1031faa  mov x1, xzr
0x0669287C: 601fc117  b #0x56da5fc

; RVA 0x669A8DC | internal void <OnRewardsFlyAnimationFinishedSignal>b__0() { }
; bytes=400 sha256=4e1b7bcfe081cc565797c572caf336071f1a876b760b6ed0052bcb26e081938b status=arm64_complete_bound indexed_start=True
0x0669A8DC: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0669A8E0: f44f01a9  stp x20, x19, [sp, #0x10]
0x0669A8E4: 74b400d0  adrp x20, #0x7d28000
0x0669A8E8: 88ee4b39  ldrb w8, [x20, #0x2fb]
0x0669A8EC: f30300aa  mov x19, x0
0x0669A8F0: e8010037  tbnz w8, #0, #0x669a92c
0x0669A8F4: 608300f0  adrp x0, #0x7709000
0x0669A8F8: 006843f9  ldr x0, [x0, #0x6d0]
0x0669A8FC: 47982b97  bl #0x3180a18
0x0669A900: 608300f0  adrp x0, #0x7709000
0x0669A904: 006c43f9  ldr x0, [x0, #0x6d8]
0x0669A908: 44982b97  bl #0x3180a18
0x0669A90C: 208100d0  adrp x0, #0x76c0000
0x0669A910: 002c44f9  ldr x0, [x0, #0x858]
0x0669A914: 41982b97  bl #0x3180a18
0x0669A918: 608300f0  adrp x0, #0x7709000
0x0669A91C: 00b440f9  ldr x0, [x0, #0x168]
0x0669A920: 3e982b97  bl #0x3180a18
0x0669A924: 28008052  movz w8, #0x1
0x0669A928: 88ee0b39  strb w8, [x20, #0x2fb]
0x0669A92C: 740a40f9  ldr x20, [x19, #0x10]
0x0669A930: d40900b4  cbz x20, #0x669aa68
0x0669A934: 358100d0  adrp x21, #0x76c0000
0x0669A938: 880240f9  ldr x8, [x20]
0x0669A93C: b52e44f9  ldr x21, [x21, #0x858]
0x0669A940: 095d4279  ldrh w9, [x8, #0x12e]
0x0669A944: a10240f9  ldr x1, [x21]
0x0669A948: 290100b4  cbz x9, #0x669a96c
0x0669A94C: 0a5940f9  ldr x10, [x8, #0xb0]
0x0669A950: 4a210091  add x10, x10, #8
0x0669A954: 4b815ff8  ldur x11, [x10, #-8]
0x0669A958: 7f0101eb  cmp x11, x1
0x0669A95C: 00010054  b.eq #0x669a97c
0x0669A960: 290500f1  subs x9, x9, #1
0x0669A964: 4a410091  add x10, x10, #0x10
0x0669A968: 61ffff54  b.ne #0x669a954
0x0669A96C: e2008052  movz w2, #0x7
0x0669A970: e00314aa  mov x0, x20
0x0669A974: 67f02a97  bl #0x3156b10
0x0669A978: 05000014  b #0x669a98c
0x0669A97C: 490140b9  ldr w9, [x10]
0x0669A980: 291d0011  add w9, w9, #7
0x0669A984: 08d1298b  add x8, x8, w9, sxtw #4
0x0669A988: 00e10491  add x0, x8, #0x138
0x0669A98C: 080840a9  ldp x8, x2, [x0]
0x0669A990: e00314aa  mov x0, x20
0x0669A994: e1031f2a  mov w1, wzr
0x0669A998: 00013fd6  blr x8
0x0669A99C: 740a40f9  ldr x20, [x19, #0x10]
0x0669A9A0: 540600b4  cbz x20, #0x669aa68
0x0669A9A4: 880240f9  ldr x8, [x20]
0x0669A9A8: a10240f9  ldr x1, [x21]
0x0669A9AC: 095d4279  ldrh w9, [x8, #0x12e]
0x0669A9B0: 290100b4  cbz x9, #0x669a9d4
0x0669A9B4: 0a5940f9  ldr x10, [x8, #0xb0]
0x0669A9B8: 4a210091  add x10, x10, #8
0x0669A9BC: 4b815ff8  ldur x11, [x10, #-8]
0x0669A9C0: 7f0101eb  cmp x11, x1
0x0669A9C4: 00010054  b.eq #0x669a9e4
0x0669A9C8: 290500f1  subs x9, x9, #1
0x0669A9CC: 4a410091  add x10, x10, #0x10
0x0669A9D0: 61ffff54  b.ne #0x669a9bc
0x0669A9D4: a2008052  movz w2, #0x5
0x0669A9D8: e00314aa  mov x0, x20
0x0669A9DC: 4df02a97  bl #0x3156b10
0x0669A9E0: 05000014  b #0x669a9f4
0x0669A9E4: 490140b9  ldr w9, [x10]
0x0669A9E8: 29150011  add w9, w9, #5
0x0669A9EC: 08d1298b  add x8, x8, w9, sxtw #4
0x0669A9F0: 00e10491  add x0, x8, #0x138
0x0669A9F4: 080840a9  ldp x8, x2, [x0]
0x0669A9F8: e00314aa  mov x0, x20
0x0669A9FC: e1031f2a  mov w1, wzr
0x0669AA00: 00013fd6  blr x8
0x0669AA04: 680e40f9  ldr x8, [x19, #0x18]
0x0669AA08: 080300b4  cbz x8, #0x669aa68
0x0669AA0C: 610a40f9  ldr x1, [x19, #0x10]
0x0669AA10: 5febff97  bl #0x669578c
0x0669AA14: 680e40f9  ldr x8, [x19, #0x18]
0x0669AA18: 880200b4  cbz x8, #0x669aa68
0x0669AA1C: 698300f0  adrp x9, #0x7709000
0x0669AA20: 296d43f9  ldr x9, [x9, #0x6d8]
0x0669AA24: 141540f9  ldr x20, [x8, #0x28]
0x0669AA28: 750a40f9  ldr x21, [x19, #0x10]
0x0669AA2C: 200140f9  ldr x0, [x9]
0x0669AA30: 9c982b97  bl #0x3180ca0
0x0669AA34: e10315aa  mov x1, x21
0x0669AA38: e2031faa  mov x2, xzr
0x0669AA3C: f30300aa  mov x19, x0
0x0669AA40: 35e6e497  bl #0x5fd4314
0x0669AA44: 340100b4  cbz x20, #0x669aa68
0x0669AA48: 688300f0  adrp x8, #0x7709000
0x0669AA4C: 086943f9  ldr x8, [x8, #0x6d0]
0x0669AA50: e00314aa  mov x0, x20
0x0669AA54: e10313aa  mov x1, x19
0x0669AA58: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0669AA5C: 020140f9  ldr x2, [x8]
0x0669AA60: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0669AA64: 5cb05417  b #0x3bc6bd4
0x0669AA68: 91982b97  bl #0x3180cac

