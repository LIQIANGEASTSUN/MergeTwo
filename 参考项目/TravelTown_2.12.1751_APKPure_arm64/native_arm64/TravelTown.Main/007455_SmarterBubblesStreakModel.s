; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 7455 Merger.Bubbles.SmarterBubblesStreakModel
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x657B5F8 | public SmarterBubblesStreakData get_StreakData() { }
; bytes=308 sha256=2575d177e75344cdbeb2f18e29d01f573031fef17b601bb4ee5463d8378202c5 status=arm64_complete_bound indexed_start=True
0x0657B5F8: fe0f1ef8  str x30, [sp, #-0x20]!
0x0657B5FC: f44f01a9  stp x20, x19, [sp, #0x10]
0x0657B600: 74bd0090  adrp x20, #0x7d27000
0x0657B604: 88165939  ldrb w8, [x20, #0x645]
0x0657B608: f30300aa  mov x19, x0
0x0657B60C: 88010037  tbnz w8, #0, #0x657b63c
0x0657B610: a08700f0  adrp x0, #0x7672000
0x0657B614: 006043f9  ldr x0, [x0, #0x6c0]
0x0657B618: 00153097  bl #0x3180a18
0x0657B61C: 208c00b0  adrp x0, #0x7700000
0x0657B620: 000042f9  ldr x0, [x0, #0x400]
0x0657B624: fd143097  bl #0x3180a18
0x0657B628: 008800f0  adrp x0, #0x767e000
0x0657B62C: 00e047f9  ldr x0, [x0, #0xfc0]
0x0657B630: fa143097  bl #0x3180a18
0x0657B634: 28008052  movz w8, #0x1
0x0657B638: 88161939  strb w8, [x20, #0x645]
0x0657B63C: 740a40f9  ldr x20, [x19, #0x10]
0x0657B640: 540700b4  cbz x20, #0x657b728
0x0657B644: aa8700f0  adrp x10, #0x7672000
0x0657B648: 880240f9  ldr x8, [x20]
0x0657B64C: 4a6143f9  ldr x10, [x10, #0x6c0]
0x0657B650: 730e40f9  ldr x19, [x19, #0x18]
0x0657B654: 095d4279  ldrh w9, [x8, #0x12e]
0x0657B658: 410140f9  ldr x1, [x10]
0x0657B65C: 290100b4  cbz x9, #0x657b680
0x0657B660: 0a5940f9  ldr x10, [x8, #0xb0]
0x0657B664: 4a210091  add x10, x10, #8
0x0657B668: 4b815ff8  ldur x11, [x10, #-8]
0x0657B66C: 7f0101eb  cmp x11, x1
0x0657B670: 00010054  b.eq #0x657b690
0x0657B674: 290500f1  subs x9, x9, #1
0x0657B678: 4a410091  add x10, x10, #0x10
0x0657B67C: 61ffff54  b.ne #0x657b668
0x0657B680: a2008052  movz w2, #0x5
0x0657B684: e00314aa  mov x0, x20
0x0657B688: 226d2f97  bl #0x3156b10
0x0657B68C: 05000014  b #0x657b6a0
0x0657B690: 490140b9  ldr w9, [x10]
0x0657B694: 29150011  add w9, w9, #5
0x0657B698: 08d1298b  add x8, x8, w9, sxtw #4
0x0657B69C: 00e10491  add x0, x8, #0x138
0x0657B6A0: 080440a9  ldp x8, x1, [x0]
0x0657B6A4: e00314aa  mov x0, x20
0x0657B6A8: 00013fd6  blr x8
0x0657B6AC: e00300b4  cbz x0, #0x657b728
0x0657B6B0: d30300b4  cbz x19, #0x657b728
0x0657B6B4: 2a8c00b0  adrp x10, #0x7700000
0x0657B6B8: 680240f9  ldr x8, [x19]
0x0657B6BC: 4a0142f9  ldr x10, [x10, #0x400]
0x0657B6C0: 142040b9  ldr w20, [x0, #0x20]
0x0657B6C4: 095d4279  ldrh w9, [x8, #0x12e]
0x0657B6C8: 410140f9  ldr x1, [x10]
0x0657B6CC: 290100b4  cbz x9, #0x657b6f0
0x0657B6D0: 0a5940f9  ldr x10, [x8, #0xb0]
0x0657B6D4: 4a210091  add x10, x10, #8
0x0657B6D8: 4b815ff8  ldur x11, [x10, #-8]
0x0657B6DC: 7f0101eb  cmp x11, x1
0x0657B6E0: 00010054  b.eq #0x657b700
0x0657B6E4: 290500f1  subs x9, x9, #1
0x0657B6E8: 4a410091  add x10, x10, #0x10
0x0657B6EC: 61ffff54  b.ne #0x657b6d8
0x0657B6F0: 42008052  movz w2, #0x2
0x0657B6F4: e00313aa  mov x0, x19
0x0657B6F8: 066d2f97  bl #0x3156b10
0x0657B6FC: 05000014  b #0x657b710
0x0657B700: 490140b9  ldr w9, [x10]
0x0657B704: 29090011  add w9, w9, #2
0x0657B708: 08d1298b  add x8, x8, w9, sxtw #4
0x0657B70C: 00e10491  add x0, x8, #0x138
0x0657B710: 030840a9  ldp x3, x2, [x0]
0x0657B714: e00313aa  mov x0, x19
0x0657B718: e103142a  mov w1, w20
0x0657B71C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0657B720: fe0742f8  ldr x30, [sp], #0x20
0x0657B724: 60001fd6  br x3
0x0657B728: 61153097  bl #0x3180cac

; RVA 0x657B72C | public IReadOnlyDictionary<CurrentBoardType, SmarterBubblesStreakData> get_StreakBoardData() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x0657B72C: 000c40f9  ldr x0, [x0, #0x18]
0x0657B730: c0035fd6  ret

; RVA 0x657B734 | public void TryAdd(IMergeGraphItem mergeGraphItem) { }
; bytes=108 sha256=3918b58f0e9c23f5efc7fb4e7731531fadee35a07aa8f563f793874090170f6b status=arm64_complete_bound indexed_start=True
0x0657B734: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0657B738: f44f01a9  stp x20, x19, [sp, #0x10]
0x0657B73C: f40301aa  mov x20, x1
0x0657B740: f30300aa  mov x19, x0
0x0657B744: adffff97  bl #0x657b5f8
0x0657B748: a00200b4  cbz x0, #0x657b79c
0x0657B74C: 150c40f9  ldr x21, [x0, #0x18]
0x0657B750: e00313aa  mov x0, x19
0x0657B754: a9ffff97  bl #0x657b5f8
0x0657B758: 200200b4  cbz x0, #0x657b79c
0x0657B75C: bf0214eb  cmp x21, x20
0x0657B760: 20010054  b.eq #0x657b784
0x0657B764: 148c01f8  str x20, [x0, #0x18]!
0x0657B768: e10314aa  mov x1, x20
0x0657B76C: 96143097  bl #0x31809c4
0x0657B770: e00313aa  mov x0, x19
0x0657B774: a1ffff97  bl #0x657b5f8
0x0657B778: 200100b4  cbz x0, #0x657b79c
0x0657B77C: 28008052  movz w8, #0x1
0x0657B780: 03000014  b #0x657b78c
0x0657B784: 081040b9  ldr w8, [x0, #0x10]
0x0657B788: 08050011  add w8, w8, #1
0x0657B78C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0657B790: 081000b9  str w8, [x0, #0x10]
0x0657B794: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0657B798: c0035fd6  ret
0x0657B79C: 44153097  bl #0x3180cac

; RVA 0x657B7A0 | public void .ctor() { }
; bytes=264 sha256=e28a36ce32006dae02caeddb4acaccd462404285b9acc5dea936a2a350106928 status=arm64_complete_bound indexed_start=True
0x0657B7A0: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x0657B7A4: f65701a9  stp x22, x21, [sp, #0x10]
0x0657B7A8: f44f02a9  stp x20, x19, [sp, #0x20]
0x0657B7AC: 75bd0090  adrp x21, #0x7d27000
0x0657B7B0: 378c00b0  adrp x23, #0x7700000
0x0657B7B4: 348c00b0  adrp x20, #0x7700000
0x0657B7B8: 368c00b0  adrp x22, #0x7700000
0x0657B7BC: a81a5939  ldrb w8, [x21, #0x646]
0x0657B7C0: f76242f9  ldr x23, [x23, #0x4c0]
0x0657B7C4: 946642f9  ldr x20, [x20, #0x4c8]
0x0657B7C8: d66a42f9  ldr x22, [x22, #0x4d0]
0x0657B7CC: f30300aa  mov x19, x0
0x0657B7D0: e8010037  tbnz w8, #0, #0x657b80c
0x0657B7D4: 208c00b0  adrp x0, #0x7700000
0x0657B7D8: 006c42f9  ldr x0, [x0, #0x4d8]
0x0657B7DC: 8f143097  bl #0x3180a18
0x0657B7E0: 208c00b0  adrp x0, #0x7700000
0x0657B7E4: 006442f9  ldr x0, [x0, #0x4c8]
0x0657B7E8: 8c143097  bl #0x3180a18
0x0657B7EC: 208c00b0  adrp x0, #0x7700000
0x0657B7F0: 006042f9  ldr x0, [x0, #0x4c0]
0x0657B7F4: 89143097  bl #0x3180a18
0x0657B7F8: 208c00b0  adrp x0, #0x7700000
0x0657B7FC: 006842f9  ldr x0, [x0, #0x4d0]
0x0657B800: 86143097  bl #0x3180a18
0x0657B804: 28008052  movz w8, #0x1
0x0657B808: a81a1939  strb w8, [x21, #0x646]
0x0657B80C: e00240f9  ldr x0, [x23]
0x0657B810: 24153097  bl #0x3180ca0
0x0657B814: 810240f9  ldr x1, [x20]
0x0657B818: f40300aa  mov x20, x0
0x0657B81C: 2396a397  bl #0x4e610a8
0x0657B820: c00240f9  ldr x0, [x22]
0x0657B824: 1f153097  bl #0x3180ca0
0x0657B828: e1031faa  mov x1, xzr
0x0657B82C: f50300aa  mov x21, x0
0x0657B830: 737bc597  bl #0x56da5fc
0x0657B834: 940300b4  cbz x20, #0x657b8a4
0x0657B838: 378c00b0  adrp x23, #0x7700000
0x0657B83C: f76e42f9  ldr x23, [x23, #0x4d8]
0x0657B840: e00314aa  mov x0, x20
0x0657B844: e1031f2a  mov w1, wzr
0x0657B848: e20315aa  mov x2, x21
0x0657B84C: e30240f9  ldr x3, [x23]
0x0657B850: 9599a397  bl #0x4e61ea4
0x0657B854: c00240f9  ldr x0, [x22]
0x0657B858: 12153097  bl #0x3180ca0
0x0657B85C: e1031faa  mov x1, xzr
0x0657B860: f50300aa  mov x21, x0
0x0657B864: 667bc597  bl #0x56da5fc
0x0657B868: e30240f9  ldr x3, [x23]
0x0657B86C: 21008052  movz w1, #0x1
0x0657B870: e00314aa  mov x0, x20
0x0657B874: e20315aa  mov x2, x21
0x0657B878: 8b99a397  bl #0x4e61ea4
0x0657B87C: e00313aa  mov x0, x19
0x0657B880: 148c01f8  str x20, [x0, #0x18]!
0x0657B884: e10314aa  mov x1, x20
0x0657B888: 4f143097  bl #0x31809c4
0x0657B88C: e00313aa  mov x0, x19
0x0657B890: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0657B894: f65741a9  ldp x22, x21, [sp, #0x10]
0x0657B898: e1031faa  mov x1, xzr
0x0657B89C: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x0657B8A0: 577bc517  b #0x56da5fc
0x0657B8A4: 02153097  bl #0x3180cac

