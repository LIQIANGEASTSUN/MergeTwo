; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 32845 .TimeLimitedItemsBoardMiniGameCleanUpHandler.<>c__DisplayClass5_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6B4B68C | public void .ctor() { }
; bytes=8 sha256=f0295e81c0082d1f41ef00ce1e084fd85ba2e290185e39c68a9e8df12abf325f status=arm64_complete_bound indexed_start=True
0x06B4B68C: e1031faa  mov x1, xzr
0x06B4B690: db3bae17  b #0x56da5fc

; RVA 0x6B4B8E4 | internal void <CleanUp>b__0() { }
; bytes=172 sha256=0beb6a234cf635aef2130333d3843eb8e77addca6879b132328f61df429771c6 status=arm64_complete_bound indexed_start=True
0x06B4B8E4: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06B4B8E8: f44f01a9  stp x20, x19, [sp, #0x10]
0x06B4B8EC: 148f0090  adrp x20, #0x7d2b000
0x06B4B8F0: 886a4039  ldrb w8, [x20, #0x1a]
0x06B4B8F4: f30300aa  mov x19, x0
0x06B4B8F8: 28010037  tbnz w8, #0, #0x6b4b91c
0x06B4B8FC: 605f00b0  adrp x0, #0x7738000
0x06B4B900: 00dc43f9  ldr x0, [x0, #0x7b8]
0x06B4B904: 45d41897  bl #0x3180a18
0x06B4B908: 605f00b0  adrp x0, #0x7738000
0x06B4B90C: 00e043f9  ldr x0, [x0, #0x7c0]
0x06B4B910: 42d41897  bl #0x3180a18
0x06B4B914: 28008052  movz w8, #0x1
0x06B4B918: 886a0039  strb w8, [x20, #0x1a]
0x06B4B91C: 600a40f9  ldr x0, [x19, #0x10]
0x06B4B920: 600300b4  cbz x0, #0x6b4b98c
0x06B4B924: 610e40f9  ldr x1, [x19, #0x18]
0x06B4B928: 5bffff97  bl #0x6b4b694
0x06B4B92C: 680a40f9  ldr x8, [x19, #0x10]
0x06B4B930: e80200b4  cbz x8, #0x6b4b98c
0x06B4B934: 695f00b0  adrp x9, #0x7738000
0x06B4B938: 29e143f9  ldr x9, [x9, #0x7c0]
0x06B4B93C: 142140f9  ldr x20, [x8, #0x40]
0x06B4B940: 751240f9  ldr x21, [x19, #0x20]
0x06B4B944: 200140f9  ldr x0, [x9]
0x06B4B948: d6d41897  bl #0x3180ca0
0x06B4B94C: e1031faa  mov x1, xzr
0x06B4B950: f30300aa  mov x19, x0
0x06B4B954: 2a3bae97  bl #0x56da5fc
0x06B4B958: e00313aa  mov x0, x19
0x06B4B95C: 150c01f8  str x21, [x0, #0x10]!
0x06B4B960: e10315aa  mov x1, x21
0x06B4B964: 18d41897  bl #0x31809c4
0x06B4B968: 340100b4  cbz x20, #0x6b4b98c
0x06B4B96C: 685f00b0  adrp x8, #0x7738000
0x06B4B970: 08dd43f9  ldr x8, [x8, #0x7b8]
0x06B4B974: e00314aa  mov x0, x20
0x06B4B978: e10313aa  mov x1, x19
0x06B4B97C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06B4B980: 020140f9  ldr x2, [x8]
0x06B4B984: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06B4B988: 92374217  b #0x3bd97d0
0x06B4B98C: c8d41897  bl #0x3180cac

; RVA 0x6B4B9C0 | internal void <CleanUp>b__1() { }
; bytes=88 sha256=d02f27fd1391a120ef2b226de48388c83af583b6924521918e346db2a651adce status=arm64_complete_bound indexed_start=True
0x06B4B9C0: fe0f1ef8  str x30, [sp, #-0x20]!
0x06B4B9C4: f44f01a9  stp x20, x19, [sp, #0x10]
0x06B4B9C8: 148f0090  adrp x20, #0x7d2b000
0x06B4B9CC: 886e4039  ldrb w8, [x20, #0x1b]
0x06B4B9D0: f30300aa  mov x19, x0
0x06B4B9D4: c8000037  tbnz w8, #0, #0x6b4b9ec
0x06B4B9D8: 605f00b0  adrp x0, #0x7738000
0x06B4B9DC: 00e443f9  ldr x0, [x0, #0x7c8]
0x06B4B9E0: 0ed41897  bl #0x3180a18
0x06B4B9E4: 28008052  movz w8, #0x1
0x06B4B9E8: 886e0039  strb w8, [x20, #0x1b]
0x06B4B9EC: 680a40f9  ldr x8, [x19, #0x10]
0x06B4B9F0: 280100b4  cbz x8, #0x6b4ba14
0x06B4B9F4: 001140f9  ldr x0, [x8, #0x20]
0x06B4B9F8: e00000b4  cbz x0, #0x6b4ba14
0x06B4B9FC: 685f00b0  adrp x8, #0x7738000
0x06B4BA00: 08e543f9  ldr x8, [x8, #0x7c8]
0x06B4BA04: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06B4BA08: 010140f9  ldr x1, [x8]
0x06B4BA0C: fe0742f8  ldr x30, [sp], #0x20
0x06B4BA10: 99674917  b #0x3da5874
0x06B4BA14: a6d41897  bl #0x3180cac

