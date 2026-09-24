; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25866 Merger.MergeBoard.Logic.BoardOperations.BoardFeedingExtractOperationDataCreator
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A8B7A0 | public override string get_OperationType() { }
; bytes=64 sha256=85fb56ed546516002315b7d79e3e3893dad0b37ca724a2485b78d33055358d6f status=arm64_complete_bound indexed_start=True
0x06A8B7A0: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A8B7A4: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A8B7A8: f39400f0  adrp x19, #0x7d2a000
0x06A8B7AC: 745f00f0  adrp x20, #0x767a000
0x06A8B7B0: 68f25e39  ldrb w8, [x19, #0x7bc]
0x06A8B7B4: 946a45f9  ldr x20, [x20, #0xad0]
0x06A8B7B8: c8000037  tbnz w8, #0, #0x6a8b7d0
0x06A8B7BC: 605f00f0  adrp x0, #0x767a000
0x06A8B7C0: 006845f9  ldr x0, [x0, #0xad0]
0x06A8B7C4: 95d41b97  bl #0x3180a18
0x06A8B7C8: 28008052  movz w8, #0x1
0x06A8B7CC: 68f21e39  strb w8, [x19, #0x7bc]
0x06A8B7D0: 800240f9  ldr x0, [x20]
0x06A8B7D4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A8B7D8: fe0742f8  ldr x30, [sp], #0x20
0x06A8B7DC: c0035fd6  ret

; RVA 0x6A8B7E0 | public override List<MergeBoardItemNotificationData> CreateOperationData(TickArgs tickArgs) { }
; bytes=1132 sha256=8dbef39559e45da82b3d67a48ad4d95997cc473ae2cf6586915f957b7038df6d status=arm64_complete_bound indexed_start=True
0x06A8B7E0: fe6fbba9  stp x30, x27, [sp, #-0x50]!
0x06A8B7E4: fa6701a9  stp x26, x25, [sp, #0x10]
0x06A8B7E8: f85f02a9  stp x24, x23, [sp, #0x20]
0x06A8B7EC: f65703a9  stp x22, x21, [sp, #0x30]
0x06A8B7F0: f44f04a9  stp x20, x19, [sp, #0x40]
0x06A8B7F4: f59400f0  adrp x21, #0x7d2a000
0x06A8B7F8: a8f65e39  ldrb w8, [x21, #0x7bd]
0x06A8B7FC: f40301aa  mov x20, x1
0x06A8B800: f30300aa  mov x19, x0
0x06A8B804: a8020037  tbnz w8, #0, #0x6a8b858
0x06A8B808: 206500b0  adrp x0, #0x7730000
0x06A8B80C: 005842f9  ldr x0, [x0, #0x4b0]
0x06A8B810: 82d41b97  bl #0x3180a18
0x06A8B814: 005e00f0  adrp x0, #0x764e000
0x06A8B818: 006444f9  ldr x0, [x0, #0x8c8]
0x06A8B81C: 7fd41b97  bl #0x3180a18
0x06A8B820: 20650090  adrp x0, #0x772f000
0x06A8B824: 008c46f9  ldr x0, [x0, #0xd18]
0x06A8B828: 7cd41b97  bl #0x3180a18
0x06A8B82C: 20650090  adrp x0, #0x772f000
0x06A8B830: 009046f9  ldr x0, [x0, #0xd20]
0x06A8B834: 79d41b97  bl #0x3180a18
0x06A8B838: 005e00f0  adrp x0, #0x764e000
0x06A8B83C: 007044f9  ldr x0, [x0, #0x8e0]
0x06A8B840: 76d41b97  bl #0x3180a18
0x06A8B844: 20650090  adrp x0, #0x772f000
0x06A8B848: 009446f9  ldr x0, [x0, #0xd28]
0x06A8B84C: 73d41b97  bl #0x3180a18
0x06A8B850: 28008052  movz w8, #0x1
0x06A8B854: a8f61e39  strb w8, [x21, #0x7bd]
0x06A8B858: 741900b4  cbz x20, #0x6a8bb84
0x06A8B85C: 28650090  adrp x8, #0x772f000
0x06A8B860: 089546f9  ldr x8, [x8, #0xd28]
0x06A8B864: e00314aa  mov x0, x20
0x06A8B868: 010140f9  ldr x1, [x8]
0x06A8B86C: e5e24c97  bl #0x3dc4400
0x06A8B870: a01800b4  cbz x0, #0x6a8bb84
0x06A8B874: 2a650090  adrp x10, #0x772f000
0x06A8B878: 080040f9  ldr x8, [x0]
0x06A8B87C: 4a8d46f9  ldr x10, [x10, #0xd18]
0x06A8B880: f40300aa  mov x20, x0
0x06A8B884: 095d4279  ldrh w9, [x8, #0x12e]
0x06A8B888: 410140f9  ldr x1, [x10]
0x06A8B88C: 290100b4  cbz x9, #0x6a8b8b0
0x06A8B890: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A8B894: 4a210091  add x10, x10, #8
0x06A8B898: 4b815ff8  ldur x11, [x10, #-8]
0x06A8B89C: 7f0101eb  cmp x11, x1
0x06A8B8A0: 00010054  b.eq #0x6a8b8c0
0x06A8B8A4: 290500f1  subs x9, x9, #1
0x06A8B8A8: 4a410091  add x10, x10, #0x10
0x06A8B8AC: 61ffff54  b.ne #0x6a8b898
0x06A8B8B0: e00314aa  mov x0, x20
0x06A8B8B4: e2031f2a  mov w2, wzr
0x06A8B8B8: 962c1b97  bl #0x3156b10
0x06A8B8BC: 04000014  b #0x6a8b8cc
0x06A8B8C0: 490180b9  ldrsw x9, [x10]
0x06A8B8C4: 0811098b  add x8, x8, x9, lsl #4
0x06A8B8C8: 00e10491  add x0, x8, #0x138
0x06A8B8CC: 080440a9  ldp x8, x1, [x0]
0x06A8B8D0: 195e00f0  adrp x25, #0x764e000
0x06A8B8D4: 386500b0  adrp x24, #0x7730000
0x06A8B8D8: 396744f9  ldr x25, [x25, #0x8c8]
0x06A8B8DC: 185b42f9  ldr x24, [x24, #0x4b0]
0x06A8B8E0: e00314aa  mov x0, x20
0x06A8B8E4: 00013fd6  blr x8
0x06A8B8E8: f40300aa  mov x20, x0
0x06A8B8EC: e01400b4  cbz x0, #0x6a8bb88
0x06A8B8F0: 1a5e00f0  adrp x26, #0x764e000
0x06A8B8F4: 3b650090  adrp x27, #0x772f000
0x06A8B8F8: 5a7344f9  ldr x26, [x26, #0x8e0]
0x06A8B8FC: 7b9346f9  ldr x27, [x27, #0xd20]
0x06A8B900: 880240f9  ldr x8, [x20]
0x06A8B904: 410340f9  ldr x1, [x26]
0x06A8B908: 095d4279  ldrh w9, [x8, #0x12e]
0x06A8B90C: 290100b4  cbz x9, #0x6a8b930
0x06A8B910: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A8B914: 4a210091  add x10, x10, #8
0x06A8B918: 4b815ff8  ldur x11, [x10, #-8]
0x06A8B91C: 7f0101eb  cmp x11, x1
0x06A8B920: 00010054  b.eq #0x6a8b940
0x06A8B924: 290500f1  subs x9, x9, #1
0x06A8B928: 4a410091  add x10, x10, #0x10
0x06A8B92C: 61ffff54  b.ne #0x6a8b918
0x06A8B930: e00314aa  mov x0, x20
0x06A8B934: e2031f2a  mov w2, wzr
0x06A8B938: 762c1b97  bl #0x3156b10
0x06A8B93C: 04000014  b #0x6a8b94c
0x06A8B940: 490180b9  ldrsw x9, [x10]
0x06A8B944: 0811098b  add x8, x8, x9, lsl #4
0x06A8B948: 00e10491  add x0, x8, #0x138
0x06A8B94C: 080440a9  ldp x8, x1, [x0]
0x06A8B950: e00314aa  mov x0, x20
0x06A8B954: 00013fd6  blr x8
0x06A8B958: 200a0036  tbz w0, #0, #0x6a8ba9c
0x06A8B95C: 880240f9  ldr x8, [x20]
0x06A8B960: 610340f9  ldr x1, [x27]
0x06A8B964: 095d4279  ldrh w9, [x8, #0x12e]
0x06A8B968: 290100b4  cbz x9, #0x6a8b98c
0x06A8B96C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A8B970: 4a210091  add x10, x10, #8
0x06A8B974: 4b815ff8  ldur x11, [x10, #-8]
0x06A8B978: 7f0101eb  cmp x11, x1
0x06A8B97C: 00010054  b.eq #0x6a8b99c
0x06A8B980: 290500f1  subs x9, x9, #1
0x06A8B984: 4a410091  add x10, x10, #0x10
0x06A8B988: 61ffff54  b.ne #0x6a8b974
0x06A8B98C: e00314aa  mov x0, x20
0x06A8B990: e2031f2a  mov w2, wzr
0x06A8B994: 5f2c1b97  bl #0x3156b10
0x06A8B998: 04000014  b #0x6a8b9a8
0x06A8B99C: 490180b9  ldrsw x9, [x10]
0x06A8B9A0: 0811098b  add x8, x8, x9, lsl #4
0x06A8B9A4: 00e10491  add x0, x8, #0x138
0x06A8B9A8: 080440a9  ldp x8, x1, [x0]
0x06A8B9AC: e00314aa  mov x0, x20
0x06A8B9B0: 00013fd6  blr x8
0x06A8B9B4: f50300aa  mov x21, x0
0x06A8B9B8: 200e00b4  cbz x0, #0x6a8bb7c
0x06A8B9BC: 760a40f9  ldr x22, [x19, #0x10]
0x06A8B9C0: 160e00b4  cbz x22, #0x6a8bb80
0x06A8B9C4: c80240f9  ldr x8, [x22]
0x06A8B9C8: b70a40f9  ldr x23, [x21, #0x10]
0x06A8B9CC: 010340f9  ldr x1, [x24]
0x06A8B9D0: 095d4279  ldrh w9, [x8, #0x12e]
0x06A8B9D4: 290100b4  cbz x9, #0x6a8b9f8
0x06A8B9D8: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A8B9DC: 4a210091  add x10, x10, #8
0x06A8B9E0: 4b815ff8  ldur x11, [x10, #-8]
0x06A8B9E4: 7f0101eb  cmp x11, x1
0x06A8B9E8: 00010054  b.eq #0x6a8ba08
0x06A8B9EC: 290500f1  subs x9, x9, #1
0x06A8B9F0: 4a410091  add x10, x10, #0x10
0x06A8B9F4: 61ffff54  b.ne #0x6a8b9e0
0x06A8B9F8: 42008052  movz w2, #0x2
0x06A8B9FC: e00316aa  mov x0, x22
0x06A8BA00: 442c1b97  bl #0x3156b10
0x06A8BA04: 05000014  b #0x6a8ba18
0x06A8BA08: 490140b9  ldr w9, [x10]
0x06A8BA0C: 29090011  add w9, w9, #2
0x06A8BA10: 08d1298b  add x8, x8, w9, sxtw #4
0x06A8BA14: 00e10491  add x0, x8, #0x138
0x06A8BA18: 080c40a9  ldp x8, x3, [x0]
0x06A8BA1C: e00316aa  mov x0, x22
0x06A8BA20: e10317aa  mov x1, x23
0x06A8BA24: e2031faa  mov x2, xzr
0x06A8BA28: 00013fd6  blr x8
0x06A8BA2C: f60300aa  mov x22, x0
0x06A8BA30: 400a00b4  cbz x0, #0x6a8bb78
0x06A8BA34: c80240f9  ldr x8, [x22]
0x06A8BA38: b50e40f9  ldr x21, [x21, #0x18]
0x06A8BA3C: 010340f9  ldr x1, [x24]
0x06A8BA40: 095d4279  ldrh w9, [x8, #0x12e]
0x06A8BA44: 290100b4  cbz x9, #0x6a8ba68
0x06A8BA48: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A8BA4C: 4a210091  add x10, x10, #8
0x06A8BA50: 4b815ff8  ldur x11, [x10, #-8]
0x06A8BA54: 7f0101eb  cmp x11, x1
0x06A8BA58: 00010054  b.eq #0x6a8ba78
0x06A8BA5C: 290500f1  subs x9, x9, #1
0x06A8BA60: 4a410091  add x10, x10, #0x10
0x06A8BA64: 61ffff54  b.ne #0x6a8ba50
0x06A8BA68: e00316aa  mov x0, x22
0x06A8BA6C: e2031f2a  mov w2, wzr
0x06A8BA70: 282c1b97  bl #0x3156b10
0x06A8BA74: 04000014  b #0x6a8ba84
0x06A8BA78: 490180b9  ldrsw x9, [x10]
0x06A8BA7C: 0811098b  add x8, x8, x9, lsl #4
0x06A8BA80: 00e10491  add x0, x8, #0x138
0x06A8BA84: 080c40a9  ldp x8, x3, [x0]
0x06A8BA88: e00316aa  mov x0, x22
0x06A8BA8C: e10315aa  mov x1, x21
0x06A8BA90: e2031faa  mov x2, xzr
0x06A8BA94: 00013fd6  blr x8
0x06A8BA98: 9affff17  b #0x6a8b900
0x06A8BA9C: f5031faa  mov x21, xzr
0x06A8BAA0: f40200b4  cbz x20, #0x6a8bafc
0x06A8BAA4: 880240f9  ldr x8, [x20]
0x06A8BAA8: 210340f9  ldr x1, [x25]
0x06A8BAAC: 095d4279  ldrh w9, [x8, #0x12e]
0x06A8BAB0: 290100b4  cbz x9, #0x6a8bad4
0x06A8BAB4: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A8BAB8: 4a210091  add x10, x10, #8
0x06A8BABC: 4b815ff8  ldur x11, [x10, #-8]
0x06A8BAC0: 7f0101eb  cmp x11, x1
0x06A8BAC4: 00010054  b.eq #0x6a8bae4
0x06A8BAC8: 290500f1  subs x9, x9, #1
0x06A8BACC: 4a410091  add x10, x10, #0x10
0x06A8BAD0: 61ffff54  b.ne #0x6a8babc
0x06A8BAD4: e00314aa  mov x0, x20
0x06A8BAD8: e2031f2a  mov w2, wzr
0x06A8BADC: 0d2c1b97  bl #0x3156b10
0x06A8BAE0: 04000014  b #0x6a8baf0
0x06A8BAE4: 490180b9  ldrsw x9, [x10]
0x06A8BAE8: 0811098b  add x8, x8, x9, lsl #4
0x06A8BAEC: 00e10491  add x0, x8, #0x138
0x06A8BAF0: 080440a9  ldp x8, x1, [x0]
0x06A8BAF4: e00314aa  mov x0, x20
0x06A8BAF8: 00013fd6  blr x8
0x06A8BAFC: 950400b5  cbnz x21, #0x6a8bb8c
0x06A8BB00: 730a40f9  ldr x19, [x19, #0x10]
0x06A8BB04: 130400b4  cbz x19, #0x6a8bb84
0x06A8BB08: 680240f9  ldr x8, [x19]
0x06A8BB0C: 010340f9  ldr x1, [x24]
0x06A8BB10: 095d4279  ldrh w9, [x8, #0x12e]
0x06A8BB14: 290100b4  cbz x9, #0x6a8bb38
0x06A8BB18: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A8BB1C: 4a210091  add x10, x10, #8
0x06A8BB20: 4b815ff8  ldur x11, [x10, #-8]
0x06A8BB24: 7f0101eb  cmp x11, x1
0x06A8BB28: 00010054  b.eq #0x6a8bb48
0x06A8BB2C: 290500f1  subs x9, x9, #1
0x06A8BB30: 4a410091  add x10, x10, #0x10
0x06A8BB34: 61ffff54  b.ne #0x6a8bb20
0x06A8BB38: 82008052  movz w2, #0x4
0x06A8BB3C: e00313aa  mov x0, x19
0x06A8BB40: f42b1b97  bl #0x3156b10
0x06A8BB44: 05000014  b #0x6a8bb58
0x06A8BB48: 490140b9  ldr w9, [x10]
0x06A8BB4C: 29110011  add w9, w9, #4
0x06A8BB50: 08d1298b  add x8, x8, w9, sxtw #4
0x06A8BB54: 00e10491  add x0, x8, #0x138
0x06A8BB58: 020440a9  ldp x2, x1, [x0]
0x06A8BB5C: e00313aa  mov x0, x19
0x06A8BB60: f44f44a9  ldp x20, x19, [sp, #0x40]
0x06A8BB64: f65743a9  ldp x22, x21, [sp, #0x30]
0x06A8BB68: f85f42a9  ldp x24, x23, [sp, #0x20]
0x06A8BB6C: fa6741a9  ldp x26, x25, [sp, #0x10]
0x06A8BB70: fe6fc5a8  ldp x30, x27, [sp], #0x50
0x06A8BB74: 40001fd6  br x2
0x06A8BB78: 4dd41b97  bl #0x3180cac
0x06A8BB7C: 4cd41b97  bl #0x3180cac
0x06A8BB80: 4bd41b97  bl #0x3180cac
0x06A8BB84: 4ad41b97  bl #0x3180cac
0x06A8BB88: 49d41b97  bl #0x3180cac
0x06A8BB8C: e00315aa  mov x0, x21
0x06A8BB90: 45d41b97  bl #0x3180ca4
0x06A8BB94: 07000014  b #0x6a8bbb0
0x06A8BB98: 06000014  b #0x6a8bbb0
0x06A8BB9C: 05000014  b #0x6a8bbb0
0x06A8BBA0: 04000014  b #0x6a8bbb0
0x06A8BBA4: 03000014  b #0x6a8bbb0
0x06A8BBA8: 02000014  b #0x6a8bbb0
0x06A8BBAC: 01000014  b #0x6a8bbb0
0x06A8BBB0: 3f040071  cmp w1, #1
0x06A8BBB4: a1000054  b.ne #0x6a8bbc8
0x06A8BBB8: 560b1d94  bl #0x71ce910
0x06A8BBBC: 150040f9  ldr x21, [x0]
0x06A8BBC0: 580b1d94  bl #0x71ce920
0x06A8BBC4: b7ffff17  b #0x6a8baa0
0x06A8BBC8: f30300aa  mov x19, x0
0x06A8BBCC: f5031faa  mov x21, xzr
0x06A8BBD0: 02000014  b #0x6a8bbd8
0x06A8BBD4: f30300aa  mov x19, x0
0x06A8BBD8: f40200b4  cbz x20, #0x6a8bc34
0x06A8BBDC: 880240f9  ldr x8, [x20]
0x06A8BBE0: 210340f9  ldr x1, [x25]
0x06A8BBE4: 095d4279  ldrh w9, [x8, #0x12e]
0x06A8BBE8: 290100b4  cbz x9, #0x6a8bc0c
0x06A8BBEC: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A8BBF0: 4a210091  add x10, x10, #8
0x06A8BBF4: 4b815ff8  ldur x11, [x10, #-8]
0x06A8BBF8: 7f0101eb  cmp x11, x1
0x06A8BBFC: 00010054  b.eq #0x6a8bc1c
0x06A8BC00: 290500f1  subs x9, x9, #1
0x06A8BC04: 4a410091  add x10, x10, #0x10
0x06A8BC08: 61ffff54  b.ne #0x6a8bbf4
0x06A8BC0C: e00314aa  mov x0, x20
0x06A8BC10: e2031f2a  mov w2, wzr
0x06A8BC14: bf2b1b97  bl #0x3156b10
0x06A8BC18: 04000014  b #0x6a8bc28
0x06A8BC1C: 490180b9  ldrsw x9, [x10]
0x06A8BC20: 0811098b  add x8, x8, x9, lsl #4
0x06A8BC24: 00e10491  add x0, x8, #0x138
0x06A8BC28: 080440a9  ldp x8, x1, [x0]
0x06A8BC2C: e00314aa  mov x0, x20
0x06A8BC30: 00013fd6  blr x8
0x06A8BC34: 750000b5  cbnz x21, #0x6a8bc40
0x06A8BC38: e00313aa  mov x0, x19
0x06A8BC3C: 47671f97  bl #0x3265958
0x06A8BC40: e00315aa  mov x0, x21
0x06A8BC44: 18d41b97  bl #0x3180ca4
0x06A8BC48: 33f60d97  bl #0x2e09514

; RVA 0x6A8BC4C | public void .ctor() { }
; bytes=8 sha256=3a594b77efdf71f81686b48f35ff4c7ed415d9428e660aa082bb318004004533 status=arm64_complete_bound indexed_start=True
0x06A8BC4C: e1031faa  mov x1, xzr
0x06A8BC50: 6b3ab117  b #0x56da5fc

