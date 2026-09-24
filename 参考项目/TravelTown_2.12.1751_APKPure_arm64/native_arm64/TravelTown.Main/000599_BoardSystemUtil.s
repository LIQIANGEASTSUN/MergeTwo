; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 599 MergeEngine.ECS.Util.BoardSystemUtil
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x626F74C | public static void SlideItemInOnInteractionCostDeducted(BoardSystem boardSystem, BoardItemPosition position, BoardItemPosition fromPosition, InteractionComponent interactionComponent) { }
; bytes=412 sha256=ee9e0d72493f2cf3f73807e5b195b1dd4c94977285780781538a1b21e57ab4c6 status=arm64_complete_bound indexed_start=True
0x0626F74C: fe0f1cf8  str x30, [sp, #-0x40]!
0x0626F750: f85f01a9  stp x24, x23, [sp, #0x10]
0x0626F754: f65702a9  stp x22, x21, [sp, #0x20]
0x0626F758: f44f03a9  stp x20, x19, [sp, #0x30]
0x0626F75C: b4d500d0  adrp x20, #0x7d25000
0x0626F760: b8a300f0  adrp x24, #0x76e6000
0x0626F764: 88725039  ldrb w8, [x20, #0x41c]
0x0626F768: 188742f9  ldr x24, [x24, #0x508]
0x0626F76C: f30303aa  mov x19, x3
0x0626F770: f60302aa  mov x22, x2
0x0626F774: f50301aa  mov x21, x1
0x0626F778: f70300aa  mov x23, x0
0x0626F77C: e8010037  tbnz w8, #0, #0x626f7b8
0x0626F780: e09e00f0  adrp x0, #0x764e000
0x0626F784: 00ac43f9  ldr x0, [x0, #0x758]
0x0626F788: a4443c97  bl #0x3180a18
0x0626F78C: e0a200b0  adrp x0, #0x76cc000
0x0626F790: 003c43f9  ldr x0, [x0, #0x678]
0x0626F794: a1443c97  bl #0x3180a18
0x0626F798: a0a300f0  adrp x0, #0x76e6000
0x0626F79C: 008842f9  ldr x0, [x0, #0x510]
0x0626F7A0: 9e443c97  bl #0x3180a18
0x0626F7A4: a0a300f0  adrp x0, #0x76e6000
0x0626F7A8: 008442f9  ldr x0, [x0, #0x508]
0x0626F7AC: 9b443c97  bl #0x3180a18
0x0626F7B0: 28008052  movz w8, #0x1
0x0626F7B4: 88721039  strb w8, [x20, #0x41c]
0x0626F7B8: 000340f9  ldr x0, [x24]
0x0626F7BC: 39453c97  bl #0x3180ca0
0x0626F7C0: e1031faa  mov x1, xzr
0x0626F7C4: f40300aa  mov x20, x0
0x0626F7C8: 8dabd197  bl #0x56da5fc
0x0626F7CC: d40800b4  cbz x20, #0x626f8e4
0x0626F7D0: f80314aa  mov x24, x20
0x0626F7D4: 170f01f8  str x23, [x24, #0x10]!
0x0626F7D8: e00318aa  mov x0, x24
0x0626F7DC: e10317aa  mov x1, x23
0x0626F7E0: 79443c97  bl #0x31809c4
0x0626F7E4: 080340f9  ldr x8, [x24]
0x0626F7E8: 15db00a9  stp x21, x22, [x24, #8]
0x0626F7EC: c80700b4  cbz x8, #0x626f8e4
0x0626F7F0: 00e540bd  ldr s0, [x8, #0xe4]
0x0626F7F4: e00316aa  mov x0, x22
0x0626F7F8: e10315aa  mov x1, x21
0x0626F7FC: e2031faa  mov x2, xzr
0x0626F800: 361b1194  bl #0x66b64d8
0x0626F804: 800a40f9  ldr x0, [x20, #0x10]
0x0626F808: 802a00bd  str s0, [x20, #0x28]
0x0626F80C: c00600b4  cbz x0, #0x626f8e4
0x0626F810: 080040f9  ldr x8, [x0]
0x0626F814: 090541f9  ldr x9, [x8, #0x208]
0x0626F818: 010941f9  ldr x1, [x8, #0x210]
0x0626F81C: 20013fd6  blr x9
0x0626F820: 200600b4  cbz x0, #0x626f8e4
0x0626F824: eaa200b0  adrp x10, #0x76cc000
0x0626F828: 080040f9  ldr x8, [x0]
0x0626F82C: 4a3d43f9  ldr x10, [x10, #0x678]
0x0626F830: f89e00f0  adrp x24, #0x764e000
0x0626F834: b7a300f0  adrp x23, #0x76e6000
0x0626F838: 960e40f9  ldr x22, [x20, #0x18]
0x0626F83C: 095d4279  ldrh w9, [x8, #0x12e]
0x0626F840: 410140f9  ldr x1, [x10]
0x0626F844: 18af43f9  ldr x24, [x24, #0x758]
0x0626F848: f78a42f9  ldr x23, [x23, #0x510]
0x0626F84C: f50300aa  mov x21, x0
0x0626F850: 290100b4  cbz x9, #0x626f874
0x0626F854: 0a5940f9  ldr x10, [x8, #0xb0]
0x0626F858: 4a210091  add x10, x10, #8
0x0626F85C: 4b815ff8  ldur x11, [x10, #-8]
0x0626F860: 7f0101eb  cmp x11, x1
0x0626F864: 00010054  b.eq #0x626f884
0x0626F868: 290500f1  subs x9, x9, #1
0x0626F86C: 4a410091  add x10, x10, #0x10
0x0626F870: 61ffff54  b.ne #0x626f85c
0x0626F874: c2048052  movz w2, #0x26
0x0626F878: e00315aa  mov x0, x21
0x0626F87C: a59c3b97  bl #0x3156b10
0x0626F880: 05000014  b #0x626f894
0x0626F884: 490140b9  ldr w9, [x10]
0x0626F888: 29990011  add w9, w9, #0x26
0x0626F88C: 08d1298b  add x8, x8, w9, sxtw #4
0x0626F890: 00e10491  add x0, x8, #0x138
0x0626F894: 080840a9  ldp x8, x2, [x0]
0x0626F898: e00315aa  mov x0, x21
0x0626F89C: e10316aa  mov x1, x22
0x0626F8A0: 00013fd6  blr x8
0x0626F8A4: 000340f9  ldr x0, [x24]
0x0626F8A8: fe443c97  bl #0x3180ca0
0x0626F8AC: e20240f9  ldr x2, [x23]
0x0626F8B0: e10314aa  mov x1, x20
0x0626F8B4: e3031faa  mov x3, xzr
0x0626F8B8: f50300aa  mov x21, x0
0x0626F8BC: 9df7cd97  bl #0x55ed730
0x0626F8C0: 330100b4  cbz x19, #0x626f8e4
0x0626F8C4: e00313aa  mov x0, x19
0x0626F8C8: e10315aa  mov x1, x21
0x0626F8CC: f44f43a9  ldp x20, x19, [sp, #0x30]
0x0626F8D0: f65742a9  ldp x22, x21, [sp, #0x20]
0x0626F8D4: f85f41a9  ldp x24, x23, [sp, #0x10]
0x0626F8D8: e2031faa  mov x2, xzr
0x0626F8DC: fe0744f8  ldr x30, [sp], #0x40
0x0626F8E0: a9351a14  b #0x68fcf84
0x0626F8E4: f2443c97  bl #0x3180cac

