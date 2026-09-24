; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25867 Merger.MergeBoard.Logic.BoardOperations.BoardFeedingInsertOperationDataCreator
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A8BC54 | public override string get_OperationType() { }
; bytes=64 sha256=e152072b1e635ff0025b7a134d23a4a812562cccd6db05b2b5bed15721a384a0 status=arm64_complete_bound indexed_start=True
0x06A8BC54: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A8BC58: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A8BC5C: f39400f0  adrp x19, #0x7d2a000
0x06A8BC60: 745f00f0  adrp x20, #0x767a000
0x06A8BC64: 68fa5e39  ldrb w8, [x19, #0x7be]
0x06A8BC68: 946e45f9  ldr x20, [x20, #0xad8]
0x06A8BC6C: c8000037  tbnz w8, #0, #0x6a8bc84
0x06A8BC70: 605f00f0  adrp x0, #0x767a000
0x06A8BC74: 006c45f9  ldr x0, [x0, #0xad8]
0x06A8BC78: 68d31b97  bl #0x3180a18
0x06A8BC7C: 28008052  movz w8, #0x1
0x06A8BC80: 68fa1e39  strb w8, [x19, #0x7be]
0x06A8BC84: 800240f9  ldr x0, [x20]
0x06A8BC88: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A8BC8C: fe0742f8  ldr x30, [sp], #0x20
0x06A8BC90: c0035fd6  ret

; RVA 0x6A8BC94 | public override List<MergeBoardItemNotificationData> CreateOperationData(TickArgs tickArgs) { }
; bytes=1136 sha256=e781fc7add9bbc7134d76f6e8d81bce9d093f4476a5b09d15106c9c0f2622d0c status=arm64_complete_bound indexed_start=True
0x06A8BC94: fe6fbba9  stp x30, x27, [sp, #-0x50]!
0x06A8BC98: fa6701a9  stp x26, x25, [sp, #0x10]
0x06A8BC9C: f85f02a9  stp x24, x23, [sp, #0x20]
0x06A8BCA0: f65703a9  stp x22, x21, [sp, #0x30]
0x06A8BCA4: f44f04a9  stp x20, x19, [sp, #0x40]
0x06A8BCA8: f59400f0  adrp x21, #0x7d2a000
0x06A8BCAC: a8fe5e39  ldrb w8, [x21, #0x7bf]
0x06A8BCB0: f40301aa  mov x20, x1
0x06A8BCB4: f30300aa  mov x19, x0
0x06A8BCB8: a8020037  tbnz w8, #0, #0x6a8bd0c
0x06A8BCBC: 206500b0  adrp x0, #0x7730000
0x06A8BCC0: 005842f9  ldr x0, [x0, #0x4b0]
0x06A8BCC4: 55d31b97  bl #0x3180a18
0x06A8BCC8: 005e00f0  adrp x0, #0x764e000
0x06A8BCCC: 006444f9  ldr x0, [x0, #0x8c8]
0x06A8BCD0: 52d31b97  bl #0x3180a18
0x06A8BCD4: 206500d0  adrp x0, #0x7731000
0x06A8BCD8: 004847f9  ldr x0, [x0, #0xe90]
0x06A8BCDC: 4fd31b97  bl #0x3180a18
0x06A8BCE0: 206500d0  adrp x0, #0x7731000
0x06A8BCE4: 004c47f9  ldr x0, [x0, #0xe98]
0x06A8BCE8: 4cd31b97  bl #0x3180a18
0x06A8BCEC: 005e00f0  adrp x0, #0x764e000
0x06A8BCF0: 007044f9  ldr x0, [x0, #0x8e0]
0x06A8BCF4: 49d31b97  bl #0x3180a18
0x06A8BCF8: 20650090  adrp x0, #0x772f000
0x06A8BCFC: 006846f9  ldr x0, [x0, #0xcd0]
0x06A8BD00: 46d31b97  bl #0x3180a18
0x06A8BD04: 28008052  movz w8, #0x1
0x06A8BD08: a8fe1e39  strb w8, [x21, #0x7bf]
0x06A8BD0C: 941900b4  cbz x20, #0x6a8c03c
0x06A8BD10: 28650090  adrp x8, #0x772f000
0x06A8BD14: 086946f9  ldr x8, [x8, #0xcd0]
0x06A8BD18: e00314aa  mov x0, x20
0x06A8BD1C: 010140f9  ldr x1, [x8]
0x06A8BD20: b8e14c97  bl #0x3dc4400
0x06A8BD24: c01800b4  cbz x0, #0x6a8c03c
0x06A8BD28: 2a6500d0  adrp x10, #0x7731000
0x06A8BD2C: 080040f9  ldr x8, [x0]
0x06A8BD30: 4a4947f9  ldr x10, [x10, #0xe90]
0x06A8BD34: f40300aa  mov x20, x0
0x06A8BD38: 095d4279  ldrh w9, [x8, #0x12e]
0x06A8BD3C: 410140f9  ldr x1, [x10]
0x06A8BD40: 290100b4  cbz x9, #0x6a8bd64
0x06A8BD44: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A8BD48: 4a210091  add x10, x10, #8
0x06A8BD4C: 4b815ff8  ldur x11, [x10, #-8]
0x06A8BD50: 7f0101eb  cmp x11, x1
0x06A8BD54: 00010054  b.eq #0x6a8bd74
0x06A8BD58: 290500f1  subs x9, x9, #1
0x06A8BD5C: 4a410091  add x10, x10, #0x10
0x06A8BD60: 61ffff54  b.ne #0x6a8bd4c
0x06A8BD64: e00314aa  mov x0, x20
0x06A8BD68: e2031f2a  mov w2, wzr
0x06A8BD6C: 692b1b97  bl #0x3156b10
0x06A8BD70: 04000014  b #0x6a8bd80
0x06A8BD74: 490180b9  ldrsw x9, [x10]
0x06A8BD78: 0811098b  add x8, x8, x9, lsl #4
0x06A8BD7C: 00e10491  add x0, x8, #0x138
0x06A8BD80: 080440a9  ldp x8, x1, [x0]
0x06A8BD84: 195e00f0  adrp x25, #0x764e000
0x06A8BD88: 386500b0  adrp x24, #0x7730000
0x06A8BD8C: 396744f9  ldr x25, [x25, #0x8c8]
0x06A8BD90: 185b42f9  ldr x24, [x24, #0x4b0]
0x06A8BD94: e00314aa  mov x0, x20
0x06A8BD98: 00013fd6  blr x8
0x06A8BD9C: f40300aa  mov x20, x0
0x06A8BDA0: 001500b4  cbz x0, #0x6a8c040
0x06A8BDA4: 1a5e00f0  adrp x26, #0x764e000
0x06A8BDA8: 3b6500d0  adrp x27, #0x7731000
0x06A8BDAC: 5a7344f9  ldr x26, [x26, #0x8e0]
0x06A8BDB0: 7b4f47f9  ldr x27, [x27, #0xe98]
0x06A8BDB4: 880240f9  ldr x8, [x20]
0x06A8BDB8: 410340f9  ldr x1, [x26]
0x06A8BDBC: 095d4279  ldrh w9, [x8, #0x12e]
0x06A8BDC0: 290100b4  cbz x9, #0x6a8bde4
0x06A8BDC4: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A8BDC8: 4a210091  add x10, x10, #8
0x06A8BDCC: 4b815ff8  ldur x11, [x10, #-8]
0x06A8BDD0: 7f0101eb  cmp x11, x1
0x06A8BDD4: 00010054  b.eq #0x6a8bdf4
0x06A8BDD8: 290500f1  subs x9, x9, #1
0x06A8BDDC: 4a410091  add x10, x10, #0x10
0x06A8BDE0: 61ffff54  b.ne #0x6a8bdcc
0x06A8BDE4: e00314aa  mov x0, x20
0x06A8BDE8: e2031f2a  mov w2, wzr
0x06A8BDEC: 492b1b97  bl #0x3156b10
0x06A8BDF0: 04000014  b #0x6a8be00
0x06A8BDF4: 490180b9  ldrsw x9, [x10]
0x06A8BDF8: 0811098b  add x8, x8, x9, lsl #4
0x06A8BDFC: 00e10491  add x0, x8, #0x138
0x06A8BE00: 080440a9  ldp x8, x1, [x0]
0x06A8BE04: e00314aa  mov x0, x20
0x06A8BE08: 00013fd6  blr x8
0x06A8BE0C: 400a0036  tbz w0, #0, #0x6a8bf54
0x06A8BE10: 880240f9  ldr x8, [x20]
0x06A8BE14: 610340f9  ldr x1, [x27]
0x06A8BE18: 095d4279  ldrh w9, [x8, #0x12e]
0x06A8BE1C: 290100b4  cbz x9, #0x6a8be40
0x06A8BE20: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A8BE24: 4a210091  add x10, x10, #8
0x06A8BE28: 4b815ff8  ldur x11, [x10, #-8]
0x06A8BE2C: 7f0101eb  cmp x11, x1
0x06A8BE30: 00010054  b.eq #0x6a8be50
0x06A8BE34: 290500f1  subs x9, x9, #1
0x06A8BE38: 4a410091  add x10, x10, #0x10
0x06A8BE3C: 61ffff54  b.ne #0x6a8be28
0x06A8BE40: e00314aa  mov x0, x20
0x06A8BE44: e2031f2a  mov w2, wzr
0x06A8BE48: 322b1b97  bl #0x3156b10
0x06A8BE4C: 04000014  b #0x6a8be5c
0x06A8BE50: 490180b9  ldrsw x9, [x10]
0x06A8BE54: 0811098b  add x8, x8, x9, lsl #4
0x06A8BE58: 00e10491  add x0, x8, #0x138
0x06A8BE5C: 080440a9  ldp x8, x1, [x0]
0x06A8BE60: e00314aa  mov x0, x20
0x06A8BE64: 00013fd6  blr x8
0x06A8BE68: f50300aa  mov x21, x0
0x06A8BE6C: 400e00b4  cbz x0, #0x6a8c034
0x06A8BE70: 760a40f9  ldr x22, [x19, #0x10]
0x06A8BE74: 360e00b4  cbz x22, #0x6a8c038
0x06A8BE78: c80240f9  ldr x8, [x22]
0x06A8BE7C: b70a40f9  ldr x23, [x21, #0x10]
0x06A8BE80: 010340f9  ldr x1, [x24]
0x06A8BE84: 095d4279  ldrh w9, [x8, #0x12e]
0x06A8BE88: 290100b4  cbz x9, #0x6a8beac
0x06A8BE8C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A8BE90: 4a210091  add x10, x10, #8
0x06A8BE94: 4b815ff8  ldur x11, [x10, #-8]
0x06A8BE98: 7f0101eb  cmp x11, x1
0x06A8BE9C: 00010054  b.eq #0x6a8bebc
0x06A8BEA0: 290500f1  subs x9, x9, #1
0x06A8BEA4: 4a410091  add x10, x10, #0x10
0x06A8BEA8: 61ffff54  b.ne #0x6a8be94
0x06A8BEAC: 42008052  movz w2, #0x2
0x06A8BEB0: e00316aa  mov x0, x22
0x06A8BEB4: 172b1b97  bl #0x3156b10
0x06A8BEB8: 05000014  b #0x6a8becc
0x06A8BEBC: 490140b9  ldr w9, [x10]
0x06A8BEC0: 29090011  add w9, w9, #2
0x06A8BEC4: 08d1298b  add x8, x8, w9, sxtw #4
0x06A8BEC8: 00e10491  add x0, x8, #0x138
0x06A8BECC: 080c40a9  ldp x8, x3, [x0]
0x06A8BED0: e00316aa  mov x0, x22
0x06A8BED4: e10317aa  mov x1, x23
0x06A8BED8: e2031faa  mov x2, xzr
0x06A8BEDC: 00013fd6  blr x8
0x06A8BEE0: f60300aa  mov x22, x0
0x06A8BEE4: 600a00b4  cbz x0, #0x6a8c030
0x06A8BEE8: c80240f9  ldr x8, [x22]
0x06A8BEEC: b50e40f9  ldr x21, [x21, #0x18]
0x06A8BEF0: 010340f9  ldr x1, [x24]
0x06A8BEF4: 095d4279  ldrh w9, [x8, #0x12e]
0x06A8BEF8: 290100b4  cbz x9, #0x6a8bf1c
0x06A8BEFC: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A8BF00: 4a210091  add x10, x10, #8
0x06A8BF04: 4b815ff8  ldur x11, [x10, #-8]
0x06A8BF08: 7f0101eb  cmp x11, x1
0x06A8BF0C: 00010054  b.eq #0x6a8bf2c
0x06A8BF10: 290500f1  subs x9, x9, #1
0x06A8BF14: 4a410091  add x10, x10, #0x10
0x06A8BF18: 61ffff54  b.ne #0x6a8bf04
0x06A8BF1C: 22008052  movz w2, #0x1
0x06A8BF20: e00316aa  mov x0, x22
0x06A8BF24: fb2a1b97  bl #0x3156b10
0x06A8BF28: 05000014  b #0x6a8bf3c
0x06A8BF2C: 490140b9  ldr w9, [x10]
0x06A8BF30: 29050011  add w9, w9, #1
0x06A8BF34: 08d1298b  add x8, x8, w9, sxtw #4
0x06A8BF38: 00e10491  add x0, x8, #0x138
0x06A8BF3C: 080c40a9  ldp x8, x3, [x0]
0x06A8BF40: e00316aa  mov x0, x22
0x06A8BF44: e10315aa  mov x1, x21
0x06A8BF48: e2031faa  mov x2, xzr
0x06A8BF4C: 00013fd6  blr x8
0x06A8BF50: 99ffff17  b #0x6a8bdb4
0x06A8BF54: f5031faa  mov x21, xzr
0x06A8BF58: f40200b4  cbz x20, #0x6a8bfb4
0x06A8BF5C: 880240f9  ldr x8, [x20]
0x06A8BF60: 210340f9  ldr x1, [x25]
0x06A8BF64: 095d4279  ldrh w9, [x8, #0x12e]
0x06A8BF68: 290100b4  cbz x9, #0x6a8bf8c
0x06A8BF6C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A8BF70: 4a210091  add x10, x10, #8
0x06A8BF74: 4b815ff8  ldur x11, [x10, #-8]
0x06A8BF78: 7f0101eb  cmp x11, x1
0x06A8BF7C: 00010054  b.eq #0x6a8bf9c
0x06A8BF80: 290500f1  subs x9, x9, #1
0x06A8BF84: 4a410091  add x10, x10, #0x10
0x06A8BF88: 61ffff54  b.ne #0x6a8bf74
0x06A8BF8C: e00314aa  mov x0, x20
0x06A8BF90: e2031f2a  mov w2, wzr
0x06A8BF94: df2a1b97  bl #0x3156b10
0x06A8BF98: 04000014  b #0x6a8bfa8
0x06A8BF9C: 490180b9  ldrsw x9, [x10]
0x06A8BFA0: 0811098b  add x8, x8, x9, lsl #4
0x06A8BFA4: 00e10491  add x0, x8, #0x138
0x06A8BFA8: 080440a9  ldp x8, x1, [x0]
0x06A8BFAC: e00314aa  mov x0, x20
0x06A8BFB0: 00013fd6  blr x8
0x06A8BFB4: 950400b5  cbnz x21, #0x6a8c044
0x06A8BFB8: 730a40f9  ldr x19, [x19, #0x10]
0x06A8BFBC: 130400b4  cbz x19, #0x6a8c03c
0x06A8BFC0: 680240f9  ldr x8, [x19]
0x06A8BFC4: 010340f9  ldr x1, [x24]
0x06A8BFC8: 095d4279  ldrh w9, [x8, #0x12e]
0x06A8BFCC: 290100b4  cbz x9, #0x6a8bff0
0x06A8BFD0: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A8BFD4: 4a210091  add x10, x10, #8
0x06A8BFD8: 4b815ff8  ldur x11, [x10, #-8]
0x06A8BFDC: 7f0101eb  cmp x11, x1
0x06A8BFE0: 00010054  b.eq #0x6a8c000
0x06A8BFE4: 290500f1  subs x9, x9, #1
0x06A8BFE8: 4a410091  add x10, x10, #0x10
0x06A8BFEC: 61ffff54  b.ne #0x6a8bfd8
0x06A8BFF0: 82008052  movz w2, #0x4
0x06A8BFF4: e00313aa  mov x0, x19
0x06A8BFF8: c62a1b97  bl #0x3156b10
0x06A8BFFC: 05000014  b #0x6a8c010
0x06A8C000: 490140b9  ldr w9, [x10]
0x06A8C004: 29110011  add w9, w9, #4
0x06A8C008: 08d1298b  add x8, x8, w9, sxtw #4
0x06A8C00C: 00e10491  add x0, x8, #0x138
0x06A8C010: 020440a9  ldp x2, x1, [x0]
0x06A8C014: e00313aa  mov x0, x19
0x06A8C018: f44f44a9  ldp x20, x19, [sp, #0x40]
0x06A8C01C: f65743a9  ldp x22, x21, [sp, #0x30]
0x06A8C020: f85f42a9  ldp x24, x23, [sp, #0x20]
0x06A8C024: fa6741a9  ldp x26, x25, [sp, #0x10]
0x06A8C028: fe6fc5a8  ldp x30, x27, [sp], #0x50
0x06A8C02C: 40001fd6  br x2
0x06A8C030: 1fd31b97  bl #0x3180cac
0x06A8C034: 1ed31b97  bl #0x3180cac
0x06A8C038: 1dd31b97  bl #0x3180cac
0x06A8C03C: 1cd31b97  bl #0x3180cac
0x06A8C040: 1bd31b97  bl #0x3180cac
0x06A8C044: e00315aa  mov x0, x21
0x06A8C048: 17d31b97  bl #0x3180ca4
0x06A8C04C: 07000014  b #0x6a8c068
0x06A8C050: 06000014  b #0x6a8c068
0x06A8C054: 05000014  b #0x6a8c068
0x06A8C058: 04000014  b #0x6a8c068
0x06A8C05C: 03000014  b #0x6a8c068
0x06A8C060: 02000014  b #0x6a8c068
0x06A8C064: 01000014  b #0x6a8c068
0x06A8C068: 3f040071  cmp w1, #1
0x06A8C06C: a1000054  b.ne #0x6a8c080
0x06A8C070: 280a1d94  bl #0x71ce910
0x06A8C074: 150040f9  ldr x21, [x0]
0x06A8C078: 2a0a1d94  bl #0x71ce920
0x06A8C07C: b7ffff17  b #0x6a8bf58
0x06A8C080: f30300aa  mov x19, x0
0x06A8C084: f5031faa  mov x21, xzr
0x06A8C088: 02000014  b #0x6a8c090
0x06A8C08C: f30300aa  mov x19, x0
0x06A8C090: f40200b4  cbz x20, #0x6a8c0ec
0x06A8C094: 880240f9  ldr x8, [x20]
0x06A8C098: 210340f9  ldr x1, [x25]
0x06A8C09C: 095d4279  ldrh w9, [x8, #0x12e]
0x06A8C0A0: 290100b4  cbz x9, #0x6a8c0c4
0x06A8C0A4: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A8C0A8: 4a210091  add x10, x10, #8
0x06A8C0AC: 4b815ff8  ldur x11, [x10, #-8]
0x06A8C0B0: 7f0101eb  cmp x11, x1
0x06A8C0B4: 00010054  b.eq #0x6a8c0d4
0x06A8C0B8: 290500f1  subs x9, x9, #1
0x06A8C0BC: 4a410091  add x10, x10, #0x10
0x06A8C0C0: 61ffff54  b.ne #0x6a8c0ac
0x06A8C0C4: e00314aa  mov x0, x20
0x06A8C0C8: e2031f2a  mov w2, wzr
0x06A8C0CC: 912a1b97  bl #0x3156b10
0x06A8C0D0: 04000014  b #0x6a8c0e0
0x06A8C0D4: 490180b9  ldrsw x9, [x10]
0x06A8C0D8: 0811098b  add x8, x8, x9, lsl #4
0x06A8C0DC: 00e10491  add x0, x8, #0x138
0x06A8C0E0: 080440a9  ldp x8, x1, [x0]
0x06A8C0E4: e00314aa  mov x0, x20
0x06A8C0E8: 00013fd6  blr x8
0x06A8C0EC: 750000b5  cbnz x21, #0x6a8c0f8
0x06A8C0F0: e00313aa  mov x0, x19
0x06A8C0F4: 19661f97  bl #0x3265958
0x06A8C0F8: e00315aa  mov x0, x21
0x06A8C0FC: ead21b97  bl #0x3180ca4
0x06A8C100: 05f50d97  bl #0x2e09514

; RVA 0x6A8C104 | public void .ctor() { }
; bytes=8 sha256=0a419c7d180f401810b27688e08c9597b3d2580e21f6e9730c9fe8090e2b18d5 status=arm64_complete_bound indexed_start=True
0x06A8C104: e1031faa  mov x1, xzr
0x06A8C108: 3d39b117  b #0x56da5fc

