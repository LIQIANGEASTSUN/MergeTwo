; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 32850 Merger.TimeLimitedItems.Handlers.TimeLimitedItemsDestroyOperationsBuilder
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6B4C72C | public OperationNotificationData[] Build(List<Entity> entitiesToDestroy, List<QueuedItem> queuedItemsToDestroy) { }
; bytes=636 sha256=251cb6a1e7d6bb85025ce9134545ee79ddcb50502524b8dc73fd309851bbedac status=arm64_complete_bound indexed_start=True
0x06B4C72C: fe0f1cf8  str x30, [sp, #-0x40]!
0x06B4C730: f85f01a9  stp x24, x23, [sp, #0x10]
0x06B4C734: f65702a9  stp x22, x21, [sp, #0x20]
0x06B4C738: f44f03a9  stp x20, x19, [sp, #0x30]
0x06B4C73C: f78e00f0  adrp x23, #0x7d2b000
0x06B4C740: b85b00b0  adrp x24, #0x76c1000
0x06B4C744: b35b00b0  adrp x19, #0x76c1000
0x06B4C748: e89a4039  ldrb w8, [x23, #0x26]
0x06B4C74C: 180347f9  ldr x24, [x24, #0xe00]
0x06B4C750: 73fe46f9  ldr x19, [x19, #0xdf8]
0x06B4C754: f50302aa  mov x21, x2
0x06B4C758: f60301aa  mov x22, x1
0x06B4C75C: f40300aa  mov x20, x0
0x06B4C760: 68030037  tbnz w8, #0, #0x6b4c7cc
0x06B4C764: 605f0090  adrp x0, #0x7738000
0x06B4C768: 001044f9  ldr x0, [x0, #0x820]
0x06B4C76C: abd01897  bl #0x3180a18
0x06B4C770: 205f00b0  adrp x0, #0x7731000
0x06B4C774: 008047f9  ldr x0, [x0, #0xf00]
0x06B4C778: a8d01897  bl #0x3180a18
0x06B4C77C: a05b00b0  adrp x0, #0x76c1000
0x06B4C780: 00ec46f9  ldr x0, [x0, #0xdd8]
0x06B4C784: a5d01897  bl #0x3180a18
0x06B4C788: 605f0090  adrp x0, #0x7738000
0x06B4C78C: 001444f9  ldr x0, [x0, #0x828]
0x06B4C790: a2d01897  bl #0x3180a18
0x06B4C794: a05b00b0  adrp x0, #0x76c1000
0x06B4C798: 00fc46f9  ldr x0, [x0, #0xdf8]
0x06B4C79C: 9fd01897  bl #0x3180a18
0x06B4C7A0: a05b00b0  adrp x0, #0x76c1000
0x06B4C7A4: 000047f9  ldr x0, [x0, #0xe00]
0x06B4C7A8: 9cd01897  bl #0x3180a18
0x06B4C7AC: 605f0090  adrp x0, #0x7738000
0x06B4C7B0: 001844f9  ldr x0, [x0, #0x830]
0x06B4C7B4: 99d01897  bl #0x3180a18
0x06B4C7B8: 405c00f0  adrp x0, #0x76d7000
0x06B4C7BC: 008842f9  ldr x0, [x0, #0x510]
0x06B4C7C0: 96d01897  bl #0x3180a18
0x06B4C7C4: 28008052  movz w8, #0x1
0x06B4C7C8: e89a0039  strb w8, [x23, #0x26]
0x06B4C7CC: 000340f9  ldr x0, [x24]
0x06B4C7D0: 34d11897  bl #0x3180ca0
0x06B4C7D4: 610240f9  ldr x1, [x19]
0x06B4C7D8: f30300aa  mov x19, x0
0x06B4C7DC: 17dd5397  bl #0x4043c38
0x06B4C7E0: e00314aa  mov x0, x20
0x06B4C7E4: e10316aa  mov x1, x22
0x06B4C7E8: 70000094  bl #0x6b4c9a8
0x06B4C7EC: 530d00b4  cbz x19, #0x6b4c994
0x06B4C7F0: 765f0090  adrp x22, #0x7738000
0x06B4C7F4: d61644f9  ldr x22, [x22, #0x828]
0x06B4C7F8: 375f00b0  adrp x23, #0x7731000
0x06B4C7FC: e10300aa  mov x1, x0
0x06B4C800: e00313aa  mov x0, x19
0x06B4C804: c20240f9  ldr x2, [x22]
0x06B4C808: f78247f9  ldr x23, [x23, #0xf00]
0x06B4C80C: 9bdf5397  bl #0x4044678
0x06B4C810: e10315aa  mov x1, x21
0x06B4C814: fb000094  bl #0x6b4cc00
0x06B4C818: c20240f9  ldr x2, [x22]
0x06B4C81C: e10300aa  mov x1, x0
0x06B4C820: e00313aa  mov x0, x19
0x06B4C824: 95df5397  bl #0x4044678
0x06B4C828: e10240f9  ldr x1, [x23]
0x06B4C82C: e00313aa  mov x0, x19
0x06B4C830: b76e4297  bl #0x3be830c
0x06B4C834: 00030036  tbz w0, #0, #0x6b4c894
0x06B4C838: 685f0090  adrp x8, #0x7738000
0x06B4C83C: 081144f9  ldr x8, [x8, #0x820]
0x06B4C840: 130140f9  ldr x19, [x8]
0x06B4C844: 681e40f9  ldr x8, [x19, #0x38]
0x06B4C848: 880000b5  cbnz x8, #0x6b4c858
0x06B4C84C: e00313aa  mov x0, x19
0x06B4C850: 0a281897  bl #0x3156878
0x06B4C854: 681e40f9  ldr x8, [x19, #0x38]
0x06B4C858: 000940f9  ldr x0, [x8, #0x10]
0x06B4C85C: 08d44439  ldrb w8, [x0, #0x135]
0x06B4C860: 48000037  tbnz w8, #0, #0x6b4c868
0x06B4C864: ee271897  bl #0x315681c
0x06B4C868: 08e040b9  ldr w8, [x0, #0xe0]
0x06B4C86C: 48000035  cbnz w8, #0x6b4c874
0x06B4C870: c7d01897  bl #0x3180b8c
0x06B4C874: 681e40f9  ldr x8, [x19, #0x38]
0x06B4C878: 000940f9  ldr x0, [x8, #0x10]
0x06B4C87C: 08d44439  ldrb w8, [x0, #0x135]
0x06B4C880: 48000037  tbnz w8, #0, #0x6b4c888
0x06B4C884: e6271897  bl #0x315681c
0x06B4C888: 085c40f9  ldr x8, [x0, #0xb8]
0x06B4C88C: 140140f9  ldr x20, [x8]
0x06B4C890: 3b000014  b #0x6b4c97c
0x06B4C894: 685f0090  adrp x8, #0x7738000
0x06B4C898: 081944f9  ldr x8, [x8, #0x830]
0x06B4C89C: 21008052  movz w1, #0x1
0x06B4C8A0: 000140f9  ldr x0, [x8]
0x06B4C8A4: 96d01897  bl #0x3180afc
0x06B4C8A8: 950e40f9  ldr x21, [x20, #0x18]
0x06B4C8AC: 550700b4  cbz x21, #0x6b4c994
0x06B4C8B0: a95b00b0  adrp x9, #0x76c1000
0x06B4C8B4: 29ed46f9  ldr x9, [x9, #0xdd8]
0x06B4C8B8: a80240f9  ldr x8, [x21]
0x06B4C8BC: f40300aa  mov x20, x0
0x06B4C8C0: 370140f9  ldr x23, [x9]
0x06B4C8C4: 495c00f0  adrp x9, #0x76d7000
0x06B4C8C8: 298942f9  ldr x9, [x9, #0x510]
0x06B4C8CC: e11240f9  ldr x1, [x23, #0x20]
0x06B4C8D0: e2a24079  ldrh w2, [x23, #0x50]
0x06B4C8D4: 360140f9  ldr x22, [x9]
0x06B4C8D8: 095d4279  ldrh w9, [x8, #0x12e]
0x06B4C8DC: 290100b4  cbz x9, #0x6b4c900
0x06B4C8E0: 0a5940f9  ldr x10, [x8, #0xb0]
0x06B4C8E4: 4a210091  add x10, x10, #8
0x06B4C8E8: 4b815ff8  ldur x11, [x10, #-8]
0x06B4C8EC: 7f0101eb  cmp x11, x1
0x06B4C8F0: e0000054  b.eq #0x6b4c90c
0x06B4C8F4: 290500f1  subs x9, x9, #1
0x06B4C8F8: 4a410091  add x10, x10, #0x10
0x06B4C8FC: 61ffff54  b.ne #0x6b4c8e8
0x06B4C900: e00315aa  mov x0, x21
0x06B4C904: 83281897  bl #0x3156b10
0x06B4C908: 05000014  b #0x6b4c91c
0x06B4C90C: 490140b9  ldr w9, [x10]
0x06B4C910: 2901020b  add w9, w9, w2
0x06B4C914: 08d1298b  add x8, x8, w9, sxtw #4
0x06B4C918: 00e10491  add x0, x8, #0x138
0x06B4C91C: 000440f9  ldr x0, [x0, #8]
0x06B4C920: e10317aa  mov x1, x23
0x06B4C924: 99d01897  bl #0x3180b88
0x06B4C928: 080440f9  ldr x8, [x0, #8]
0x06B4C92C: e40300aa  mov x4, x0
0x06B4C930: e00315aa  mov x0, x21
0x06B4C934: e10316aa  mov x1, x22
0x06B4C938: e20313aa  mov x2, x19
0x06B4C93C: e3031faa  mov x3, xzr
0x06B4C940: 00013fd6  blr x8
0x06B4C944: 940200b4  cbz x20, #0x6b4c994
0x06B4C948: f30300aa  mov x19, x0
0x06B4C94C: c00000b4  cbz x0, #0x6b4c964
0x06B4C950: 880240f9  ldr x8, [x20]
0x06B4C954: e00313aa  mov x0, x19
0x06B4C958: 012140f9  ldr x1, [x8, #0x40]
0x06B4C95C: 8dd01897  bl #0x3180b90
0x06B4C960: e00100b4  cbz x0, #0x6b4c99c
0x06B4C964: 881a40b9  ldr w8, [x20, #0x18]
0x06B4C968: 88010034  cbz w8, #0x6b4c998
0x06B4C96C: e00314aa  mov x0, x20
0x06B4C970: 130c02f8  str x19, [x0, #0x20]!
0x06B4C974: e10313aa  mov x1, x19
0x06B4C978: 13d01897  bl #0x31809c4
0x06B4C97C: e00314aa  mov x0, x20
0x06B4C980: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06B4C984: f65742a9  ldp x22, x21, [sp, #0x20]
0x06B4C988: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06B4C98C: fe0744f8  ldr x30, [sp], #0x40
0x06B4C990: c0035fd6  ret
0x06B4C994: c6d01897  bl #0x3180cac
0x06B4C998: c7d01897  bl #0x3180cb4
0x06B4C99C: cdd01897  bl #0x3180cd0
0x06B4C9A0: e1031faa  mov x1, xzr
0x06B4C9A4: 76d01897  bl #0x3180b7c

; RVA 0x6B4C9A8 | private List<MergeBoardItemNotificationData> BuildBoardItemNotificationData(List<Entity> entities) { }
; bytes=600 sha256=728d4905dd87e7f66a09388803d0c78013666523ac1e826582a0b4ccf9dc0871 status=arm64_complete_bound indexed_start=True
0x06B4C9A8: ff4302d1  sub sp, sp, #0x90
0x06B4C9AC: fe2300f9  str x30, [sp, #0x40]
0x06B4C9B0: fa6705a9  stp x26, x25, [sp, #0x50]
0x06B4C9B4: f85f06a9  stp x24, x23, [sp, #0x60]
0x06B4C9B8: f65707a9  stp x22, x21, [sp, #0x70]
0x06B4C9BC: f44f08a9  stp x20, x19, [sp, #0x80]
0x06B4C9C0: f58e00f0  adrp x21, #0x7d2b000
0x06B4C9C4: a89e4039  ldrb w8, [x21, #0x27]
0x06B4C9C8: f40301aa  mov x20, x1
0x06B4C9CC: f30300aa  mov x19, x0
0x06B4C9D0: a8020037  tbnz w8, #0, #0x6b4ca24
0x06B4C9D4: a05b0090  adrp x0, #0x76c0000
0x06B4C9D8: 00a847f9  ldr x0, [x0, #0xf50]
0x06B4C9DC: 0fd01897  bl #0x3180a18
0x06B4C9E0: a05b0090  adrp x0, #0x76c0000
0x06B4C9E4: 00ac47f9  ldr x0, [x0, #0xf58]
0x06B4C9E8: 0cd01897  bl #0x3180a18
0x06B4C9EC: a05b0090  adrp x0, #0x76c0000
0x06B4C9F0: 00b047f9  ldr x0, [x0, #0xf60]
0x06B4C9F4: 09d01897  bl #0x3180a18
0x06B4C9F8: 205f0090  adrp x0, #0x7730000
0x06B4C9FC: 005842f9  ldr x0, [x0, #0x4b0]
0x06B4CA00: 06d01897  bl #0x3180a18
0x06B4CA04: a05b0090  adrp x0, #0x76c0000
0x06B4CA08: 00b447f9  ldr x0, [x0, #0xf68]
0x06B4CA0C: 03d01897  bl #0x3180a18
0x06B4CA10: 005c00d0  adrp x0, #0x76ce000
0x06B4CA14: 00bc44f9  ldr x0, [x0, #0x978]
0x06B4CA18: 00d01897  bl #0x3180a18
0x06B4CA1C: 28008052  movz w8, #0x1
0x06B4CA20: a89e0039  strb w8, [x21, #0x27]
0x06B4CA24: ff7f02a9  stp xzr, xzr, [sp, #0x20]
0x06B4CA28: ff1b00f9  str xzr, [sp, #0x30]
0x06B4CA2C: 340b00b4  cbz x20, #0x6b4cb90
0x06B4CA30: a85b0090  adrp x8, #0x76c0000
0x06B4CA34: 08b547f9  ldr x8, [x8, #0xf68]
0x06B4CA38: b95b0090  adrp x25, #0x76c0000
0x06B4CA3C: 39af47f9  ldr x25, [x25, #0xf58]
0x06B4CA40: 375f0090  adrp x23, #0x7730000
0x06B4CA44: 010140f9  ldr x1, [x8]
0x06B4CA48: 1a5c00d0  adrp x26, #0x76ce000
0x06B4CA4C: b85b0090  adrp x24, #0x76c0000
0x06B4CA50: f75a42f9  ldr x23, [x23, #0x4b0]
0x06B4CA54: 5abf44f9  ldr x26, [x26, #0x978]
0x06B4CA58: 18ab47f9  ldr x24, [x24, #0xf50]
0x06B4CA5C: e8230091  add x8, sp, #8
0x06B4CA60: e00314aa  mov x0, x20
0x06B4CA64: 81e15397  bl #0x4045068
0x06B4CA68: e083c03c  ldur q0, [sp, #8]
0x06B4CA6C: e80f40f9  ldr x8, [sp, #0x18]
0x06B4CA70: e00b803d  str q0, [sp, #0x20]
0x06B4CA74: e81b00f9  str x8, [sp, #0x30]
0x06B4CA78: 210340f9  ldr x1, [x25]
0x06B4CA7C: e0830091  add x0, sp, #0x20
0x06B4CA80: cd239397  bl #0x50159b4
0x06B4CA84: e0030036  tbz w0, #0, #0x6b4cb00
0x06B4CA88: 740a40f9  ldr x20, [x19, #0x10]
0x06B4CA8C: 140800b4  cbz x20, #0x6b4cb8c
0x06B4CA90: 880240f9  ldr x8, [x20]
0x06B4CA94: f51b40f9  ldr x21, [sp, #0x30]
0x06B4CA98: e10240f9  ldr x1, [x23]
0x06B4CA9C: 560340f9  ldr x22, [x26]
0x06B4CAA0: 095d4279  ldrh w9, [x8, #0x12e]
0x06B4CAA4: 290100b4  cbz x9, #0x6b4cac8
0x06B4CAA8: 0a5940f9  ldr x10, [x8, #0xb0]
0x06B4CAAC: 4a210091  add x10, x10, #8
0x06B4CAB0: 4b815ff8  ldur x11, [x10, #-8]
0x06B4CAB4: 7f0101eb  cmp x11, x1
0x06B4CAB8: 00010054  b.eq #0x6b4cad8
0x06B4CABC: 290500f1  subs x9, x9, #1
0x06B4CAC0: 4a410091  add x10, x10, #0x10
0x06B4CAC4: 61ffff54  b.ne #0x6b4cab0
0x06B4CAC8: 22008052  movz w2, #0x1
0x06B4CACC: e00314aa  mov x0, x20
0x06B4CAD0: 10281897  bl #0x3156b10
0x06B4CAD4: 05000014  b #0x6b4cae8
0x06B4CAD8: 490140b9  ldr w9, [x10]
0x06B4CADC: 29050011  add w9, w9, #1
0x06B4CAE0: 08d1298b  add x8, x8, w9, sxtw #4
0x06B4CAE4: 00e10491  add x0, x8, #0x138
0x06B4CAE8: 080c40a9  ldp x8, x3, [x0]
0x06B4CAEC: e00314aa  mov x0, x20
0x06B4CAF0: e10315aa  mov x1, x21
0x06B4CAF4: e20316aa  mov x2, x22
0x06B4CAF8: 00013fd6  blr x8
0x06B4CAFC: dfffff17  b #0x6b4ca78
0x06B4CB00: 010340f9  ldr x1, [x24]
0x06B4CB04: e0830091  add x0, sp, #0x20
0x06B4CB08: aa239397  bl #0x50159b0
0x06B4CB0C: 730a40f9  ldr x19, [x19, #0x10]
0x06B4CB10: 130400b4  cbz x19, #0x6b4cb90
0x06B4CB14: 680240f9  ldr x8, [x19]
0x06B4CB18: e10240f9  ldr x1, [x23]
0x06B4CB1C: 095d4279  ldrh w9, [x8, #0x12e]
0x06B4CB20: 290100b4  cbz x9, #0x6b4cb44
0x06B4CB24: 0a5940f9  ldr x10, [x8, #0xb0]
0x06B4CB28: 4a210091  add x10, x10, #8
0x06B4CB2C: 4b815ff8  ldur x11, [x10, #-8]
0x06B4CB30: 7f0101eb  cmp x11, x1
0x06B4CB34: 00010054  b.eq #0x6b4cb54
0x06B4CB38: 290500f1  subs x9, x9, #1
0x06B4CB3C: 4a410091  add x10, x10, #0x10
0x06B4CB40: 61ffff54  b.ne #0x6b4cb2c
0x06B4CB44: 82008052  movz w2, #0x4
0x06B4CB48: e00313aa  mov x0, x19
0x06B4CB4C: f1271897  bl #0x3156b10
0x06B4CB50: 05000014  b #0x6b4cb64
0x06B4CB54: 490140b9  ldr w9, [x10]
0x06B4CB58: 29110011  add w9, w9, #4
0x06B4CB5C: 08d1298b  add x8, x8, w9, sxtw #4
0x06B4CB60: 00e10491  add x0, x8, #0x138
0x06B4CB64: 080440a9  ldp x8, x1, [x0]
0x06B4CB68: e00313aa  mov x0, x19
0x06B4CB6C: 00013fd6  blr x8
0x06B4CB70: f44f48a9  ldp x20, x19, [sp, #0x80]
0x06B4CB74: f65747a9  ldp x22, x21, [sp, #0x70]
0x06B4CB78: f85f46a9  ldp x24, x23, [sp, #0x60]
0x06B4CB7C: fa6745a9  ldp x26, x25, [sp, #0x50]
0x06B4CB80: fe2340f9  ldr x30, [sp, #0x40]
0x06B4CB84: ff430291  add sp, sp, #0x90
0x06B4CB88: c0035fd6  ret
0x06B4CB8C: 48d01897  bl #0x3180cac
0x06B4CB90: 47d01897  bl #0x3180cac
0x06B4CB94: 02000014  b #0x6b4cb9c
0x06B4CB98: 01000014  b #0x6b4cb9c
0x06B4CB9C: f40300aa  mov x20, x0
0x06B4CBA0: 3f040071  cmp w1, #1
0x06B4CBA4: 61010054  b.ne #0x6b4cbd0
0x06B4CBA8: e00314aa  mov x0, x20
0x06B4CBAC: 59071a94  bl #0x71ce910
0x06B4CBB0: 150040f9  ldr x21, [x0]
0x06B4CBB4: 5b071a94  bl #0x71ce920
0x06B4CBB8: 010340f9  ldr x1, [x24]
0x06B4CBBC: e0830091  add x0, sp, #0x20
0x06B4CBC0: 7c239397  bl #0x50159b0
0x06B4CBC4: 55faffb4  cbz x21, #0x6b4cb0c
0x06B4CBC8: e00315aa  mov x0, x21
0x06B4CBCC: 36d01897  bl #0x3180ca4
0x06B4CBD0: f5031faa  mov x21, xzr
0x06B4CBD4: 02000014  b #0x6b4cbdc
0x06B4CBD8: f40300aa  mov x20, x0
0x06B4CBDC: 010340f9  ldr x1, [x24]
0x06B4CBE0: e0830091  add x0, sp, #0x20
0x06B4CBE4: 73239397  bl #0x50159b0
0x06B4CBE8: 750000b5  cbnz x21, #0x6b4cbf4
0x06B4CBEC: e00314aa  mov x0, x20
0x06B4CBF0: 5a631c97  bl #0x3265958
0x06B4CBF4: e00315aa  mov x0, x21
0x06B4CBF8: 2bd01897  bl #0x3180ca4
0x06B4CBFC: 46f20a97  bl #0x2e09514

; RVA 0x6B4CC00 | private List<MergeBoardItemNotificationData> BuildQueueItemNotificationData(List<QueuedItem> queuedItems) { }
; bytes=284 sha256=c9a0b347553b2b6fa71b5dd723d5041417ed0f952ef4e20410c2a4473dff1c2f status=arm64_complete_bound indexed_start=True
0x06B4CC00: fe0f1cf8  str x30, [sp, #-0x40]!
0x06B4CC04: f85f01a9  stp x24, x23, [sp, #0x10]
0x06B4CC08: f65702a9  stp x22, x21, [sp, #0x20]
0x06B4CC0C: f44f03a9  stp x20, x19, [sp, #0x30]
0x06B4CC10: f48e00f0  adrp x20, #0x7d2b000
0x06B4CC14: 765f0090  adrp x22, #0x7738000
0x06B4CC18: 88a24039  ldrb w8, [x20, #0x28]
0x06B4CC1C: d61e44f9  ldr x22, [x22, #0x838]
0x06B4CC20: f30301aa  mov x19, x1
0x06B4CC24: 48020037  tbnz w8, #0, #0x6b4cc6c
0x06B4CC28: 605f0090  adrp x0, #0x7738000
0x06B4CC2C: 002044f9  ldr x0, [x0, #0x840]
0x06B4CC30: 7acf1897  bl #0x3180a18
0x06B4CC34: 605f0090  adrp x0, #0x7738000
0x06B4CC38: 002444f9  ldr x0, [x0, #0x848]
0x06B4CC3C: 77cf1897  bl #0x3180a18
0x06B4CC40: 605f0090  adrp x0, #0x7738000
0x06B4CC44: 002844f9  ldr x0, [x0, #0x850]
0x06B4CC48: 74cf1897  bl #0x3180a18
0x06B4CC4C: 605f0090  adrp x0, #0x7738000
0x06B4CC50: 002c44f9  ldr x0, [x0, #0x858]
0x06B4CC54: 71cf1897  bl #0x3180a18
0x06B4CC58: 605f0090  adrp x0, #0x7738000
0x06B4CC5C: 001c44f9  ldr x0, [x0, #0x838]
0x06B4CC60: 6ecf1897  bl #0x3180a18
0x06B4CC64: 28008052  movz w8, #0x1
0x06B4CC68: 88a20039  strb w8, [x20, #0x28]
0x06B4CC6C: c00240f9  ldr x0, [x22]
0x06B4CC70: 08e040b9  ldr w8, [x0, #0xe0]
0x06B4CC74: 68000035  cbnz w8, #0x6b4cc80
0x06B4CC78: c5cf1897  bl #0x3180b8c
0x06B4CC7C: c00240f9  ldr x0, [x22]
0x06B4CC80: 085c40f9  ldr x8, [x0, #0xb8]
0x06B4CC84: 785f0090  adrp x24, #0x7738000
0x06B4CC88: 775f0090  adrp x23, #0x7738000
0x06B4CC8C: 140540f9  ldr x20, [x8, #8]
0x06B4CC90: 182344f9  ldr x24, [x24, #0x840]
0x06B4CC94: f72644f9  ldr x23, [x23, #0x848]
0x06B4CC98: f40200b5  cbnz x20, #0x6b4ccf4
0x06B4CC9C: 08e040b9  ldr w8, [x0, #0xe0]
0x06B4CCA0: 68000035  cbnz w8, #0x6b4ccac
0x06B4CCA4: bacf1897  bl #0x3180b8c
0x06B4CCA8: c00240f9  ldr x0, [x22]
0x06B4CCAC: 695f0090  adrp x9, #0x7738000
0x06B4CCB0: 085c40f9  ldr x8, [x0, #0xb8]
0x06B4CCB4: 292944f9  ldr x9, [x9, #0x850]
0x06B4CCB8: 150140f9  ldr x21, [x8]
0x06B4CCBC: 200140f9  ldr x0, [x9]
0x06B4CCC0: f8cf1897  bl #0x3180ca0
0x06B4CCC4: 685f0090  adrp x8, #0x7738000
0x06B4CCC8: 082d44f9  ldr x8, [x8, #0x858]
0x06B4CCCC: e10315aa  mov x1, x21
0x06B4CCD0: e3031faa  mov x3, xzr
0x06B4CCD4: f40300aa  mov x20, x0
0x06B4CCD8: 020140f9  ldr x2, [x8]
0x06B4CCDC: 37279c97  bl #0x52569b8
0x06B4CCE0: c80240f9  ldr x8, [x22]
0x06B4CCE4: e10314aa  mov x1, x20
0x06B4CCE8: 005d40f9  ldr x0, [x8, #0xb8]
0x06B4CCEC: 148c00f8  str x20, [x0, #8]!
0x06B4CCF0: 35cf1897  bl #0x31809c4
0x06B4CCF4: 020340f9  ldr x2, [x24]
0x06B4CCF8: e00313aa  mov x0, x19
0x06B4CCFC: e10314aa  mov x1, x20
0x06B4CD00: 650f4497  bl #0x3c50a94
0x06B4CD04: e10240f9  ldr x1, [x23]
0x06B4CD08: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06B4CD0C: f65742a9  ldp x22, x21, [sp, #0x20]
0x06B4CD10: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06B4CD14: fe0744f8  ldr x30, [sp], #0x40
0x06B4CD18: ae4c4417  b #0x3c5ffd0

; RVA 0x6B4CD1C | public void .ctor() { }
; bytes=8 sha256=8ac85d1946c10987528824b64654ce7154eb23c818e729a443ac017e709cde2c status=arm64_complete_bound indexed_start=True
0x06B4CD1C: e1031faa  mov x1, xzr
0x06B4CD20: 3736ae17  b #0x56da5fc

