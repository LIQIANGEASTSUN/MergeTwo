; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 32848 Merger.TimeLimitedItems.Handlers.TimeLimitedItemsControllerCleanupHandler
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6B4BA18 | private bool get_HasConnectedActiveBoardMiniGame() { }
; bytes=296 sha256=1b6b5ed40fae12909b6c9d370a1665973d897757e1790bc6f72ab13ecfdcb30c status=arm64_complete_bound indexed_start=True
0x06B4BA18: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x06B4BA1C: f65701a9  stp x22, x21, [sp, #0x10]
0x06B4BA20: f44f02a9  stp x20, x19, [sp, #0x20]
0x06B4BA24: 148f0090  adrp x20, #0x7d2b000
0x06B4BA28: 88724039  ldrb w8, [x20, #0x1c]
0x06B4BA2C: f30300aa  mov x19, x0
0x06B4BA30: e8010037  tbnz w8, #0, #0x6b4ba6c
0x06B4BA34: 605f00b0  adrp x0, #0x7738000
0x06B4BA38: 00e843f9  ldr x0, [x0, #0x7d0]
0x06B4BA3C: f7d31897  bl #0x3180a18
0x06B4BA40: a05b00d0  adrp x0, #0x76c1000
0x06B4BA44: 003842f9  ldr x0, [x0, #0x470]
0x06B4BA48: f4d31897  bl #0x3180a18
0x06B4BA4C: a05b00d0  adrp x0, #0x76c1000
0x06B4BA50: 003c42f9  ldr x0, [x0, #0x478]
0x06B4BA54: f1d31897  bl #0x3180a18
0x06B4BA58: 605f00b0  adrp x0, #0x7738000
0x06B4BA5C: 00ec43f9  ldr x0, [x0, #0x7d8]
0x06B4BA60: eed31897  bl #0x3180a18
0x06B4BA64: 28008052  movz w8, #0x1
0x06B4BA68: 88720039  strb w8, [x20, #0x1c]
0x06B4BA6C: 741e40f9  ldr x20, [x19, #0x38]
0x06B4BA70: 740600b4  cbz x20, #0x6b4bb3c
0x06B4BA74: aa5b00d0  adrp x10, #0x76c1000
0x06B4BA78: 880240f9  ldr x8, [x20]
0x06B4BA7C: 4a3d42f9  ldr x10, [x10, #0x478]
0x06B4BA80: b75b00d0  adrp x23, #0x76c1000
0x06B4BA84: 755f00b0  adrp x21, #0x7738000
0x06B4BA88: 765f00b0  adrp x22, #0x7738000
0x06B4BA8C: 095d4279  ldrh w9, [x8, #0x12e]
0x06B4BA90: 410140f9  ldr x1, [x10]
0x06B4BA94: f73a42f9  ldr x23, [x23, #0x470]
0x06B4BA98: b5ee43f9  ldr x21, [x21, #0x7d8]
0x06B4BA9C: d6ea43f9  ldr x22, [x22, #0x7d0]
0x06B4BAA0: 290100b4  cbz x9, #0x6b4bac4
0x06B4BAA4: 0a5940f9  ldr x10, [x8, #0xb0]
0x06B4BAA8: 4a210091  add x10, x10, #8
0x06B4BAAC: 4b815ff8  ldur x11, [x10, #-8]
0x06B4BAB0: 7f0101eb  cmp x11, x1
0x06B4BAB4: 00010054  b.eq #0x6b4bad4
0x06B4BAB8: 290500f1  subs x9, x9, #1
0x06B4BABC: 4a410091  add x10, x10, #0x10
0x06B4BAC0: 61ffff54  b.ne #0x6b4baac
0x06B4BAC4: 22008052  movz w2, #0x1
0x06B4BAC8: e00314aa  mov x0, x20
0x06B4BACC: 112c1897  bl #0x3156b10
0x06B4BAD0: 05000014  b #0x6b4bae4
0x06B4BAD4: 490140b9  ldr w9, [x10]
0x06B4BAD8: 29050011  add w9, w9, #1
0x06B4BADC: 08d1298b  add x8, x8, w9, sxtw #4
0x06B4BAE0: 00e10491  add x0, x8, #0x138
0x06B4BAE4: 080440a9  ldp x8, x1, [x0]
0x06B4BAE8: e00314aa  mov x0, x20
0x06B4BAEC: 00013fd6  blr x8
0x06B4BAF0: e80240f9  ldr x8, [x23]
0x06B4BAF4: f40300aa  mov x20, x0
0x06B4BAF8: e00308aa  mov x0, x8
0x06B4BAFC: 69d41897  bl #0x3180ca0
0x06B4BB00: a20240f9  ldr x2, [x21]
0x06B4BB04: e10313aa  mov x1, x19
0x06B4BB08: e3031faa  mov x3, xzr
0x06B4BB0C: f50300aa  mov x21, x0
0x06B4BB10: 2b299c97  bl #0x5255fbc
0x06B4BB14: c20240f9  ldr x2, [x22]
0x06B4BB18: e00314aa  mov x0, x20
0x06B4BB1C: e10315aa  mov x1, x21
0x06B4BB20: 84e54397  bl #0x3c45130
0x06B4BB24: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06B4BB28: f65741a9  ldp x22, x21, [sp, #0x10]
0x06B4BB2C: 1f0000f1  cmp x0, #0
0x06B4BB30: e0079f1a  cset w0, ne
0x06B4BB34: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x06B4BB38: c0035fd6  ret
0x06B4BB3C: 5cd41897  bl #0x3180cac

; RVA 0x6B4BB40 | private bool get_HasRelatedActivePendingBoardMiniGame() { }
; bytes=244 sha256=917cc4b50e017258c9be500d328a862c5419770088af5f081a63eb30817fdb0c status=arm64_complete_bound indexed_start=True
0x06B4BB40: ffc300d1  sub sp, sp, #0x30
0x06B4BB44: fe0b00f9  str x30, [sp, #0x10]
0x06B4BB48: f44f02a9  stp x20, x19, [sp, #0x20]
0x06B4BB4C: 148f0090  adrp x20, #0x7d2b000
0x06B4BB50: 88764039  ldrb w8, [x20, #0x1d]
0x06B4BB54: f30300aa  mov x19, x0
0x06B4BB58: c8000037  tbnz w8, #0, #0x6b4bb70
0x06B4BB5C: a05b00d0  adrp x0, #0x76c1000
0x06B4BB60: 003c42f9  ldr x0, [x0, #0x478]
0x06B4BB64: add31897  bl #0x3180a18
0x06B4BB68: 28008052  movz w8, #0x1
0x06B4BB6C: 88760039  strb w8, [x20, #0x1d]
0x06B4BB70: ff0f00f9  str xzr, [sp, #0x18]
0x06B4BB74: ff0700f9  str xzr, [sp, #8]
0x06B4BB78: 741e40f9  ldr x20, [x19, #0x38]
0x06B4BB7C: b40500b4  cbz x20, #0x6b4bc30
0x06B4BB80: aa5b00d0  adrp x10, #0x76c1000
0x06B4BB84: 880240f9  ldr x8, [x20]
0x06B4BB88: 4a3d42f9  ldr x10, [x10, #0x478]
0x06B4BB8C: 095d4279  ldrh w9, [x8, #0x12e]
0x06B4BB90: 410140f9  ldr x1, [x10]
0x06B4BB94: 290100b4  cbz x9, #0x6b4bbb8
0x06B4BB98: 0a5940f9  ldr x10, [x8, #0xb0]
0x06B4BB9C: 4a210091  add x10, x10, #8
0x06B4BBA0: 4b815ff8  ldur x11, [x10, #-8]
0x06B4BBA4: 7f0101eb  cmp x11, x1
0x06B4BBA8: 00010054  b.eq #0x6b4bbc8
0x06B4BBAC: 290500f1  subs x9, x9, #1
0x06B4BBB0: 4a410091  add x10, x10, #0x10
0x06B4BBB4: 61ffff54  b.ne #0x6b4bba0
0x06B4BBB8: a2008052  movz w2, #0x5
0x06B4BBBC: e00314aa  mov x0, x20
0x06B4BBC0: d42b1897  bl #0x3156b10
0x06B4BBC4: 05000014  b #0x6b4bbd8
0x06B4BBC8: 490140b9  ldr w9, [x10]
0x06B4BBCC: 29150011  add w9, w9, #5
0x06B4BBD0: 08d1298b  add x8, x8, w9, sxtw #4
0x06B4BBD4: 00e10491  add x0, x8, #0x138
0x06B4BBD8: 080c40a9  ldp x8, x3, [x0]
0x06B4BBDC: e1630091  add x1, sp, #0x18
0x06B4BBE0: e2230091  add x2, sp, #8
0x06B4BBE4: e00314aa  mov x0, x20
0x06B4BBE8: 00013fd6  blr x8
0x06B4BBEC: e0000036  tbz w0, #0, #0x6b4bc08
0x06B4BBF0: 682e40f9  ldr x8, [x19, #0x58]
0x06B4BBF4: e80100b4  cbz x8, #0x6b4bc30
0x06B4BBF8: 090d40f9  ldr x9, [x8, #0x18]
0x06B4BBFC: ea0740f9  ldr x10, [sp, #8]
0x06B4BC00: 3f010aeb  cmp x9, x10
0x06B4BC04: 6d000054  b.le #0x6b4bc10
0x06B4BC08: e0031f2a  mov w0, wzr
0x06B4BC0C: 05000014  b #0x6b4bc20
0x06B4BC10: 081140f9  ldr x8, [x8, #0x20]
0x06B4BC14: e90f40f9  ldr x9, [sp, #0x18]
0x06B4BC18: 1f0109eb  cmp x8, x9
0x06B4BC1C: e0b79f1a  cset w0, ge
0x06B4BC20: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06B4BC24: fe0b40f9  ldr x30, [sp, #0x10]
0x06B4BC28: ffc30091  add sp, sp, #0x30
0x06B4BC2C: c0035fd6  ret
0x06B4BC30: 1fd41897  bl #0x3180cac

; RVA 0x6B4BC34 | public void CleanUp(TimeLimitedItemsEventData eventData, Action onCompleted) { }
; bytes=84 sha256=fbbfee6eac554e6f113f3a77da84417d089dcdb8da59bff3a35f858546a9a79e status=arm64_complete_bound indexed_start=True
0x06B4BC34: fe0f1ef8  str x30, [sp, #-0x20]!
0x06B4BC38: f44f01a9  stp x20, x19, [sp, #0x10]
0x06B4BC3C: 084040b9  ldr w8, [x0, #0x40]
0x06B4BC40: 88000034  cbz w8, #0x6b4bc50
0x06B4BC44: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06B4BC48: fe0742f8  ldr x30, [sp], #0x20
0x06B4BC4C: c0035fd6  ret
0x06B4BC50: f30300aa  mov x19, x0
0x06B4BC54: 018c05f8  str x1, [x0, #0x58]!
0x06B4BC58: f40302aa  mov x20, x2
0x06B4BC5C: 5ad31897  bl #0x31809c4
0x06B4BC60: e00313aa  mov x0, x19
0x06B4BC64: 140c05f8  str x20, [x0, #0x50]!
0x06B4BC68: e10314aa  mov x1, x20
0x06B4BC6C: 56d31897  bl #0x31809c4
0x06B4BC70: 28008052  movz w8, #0x1
0x06B4BC74: 684200b9  str w8, [x19, #0x40]
0x06B4BC78: e00313aa  mov x0, x19
0x06B4BC7C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06B4BC80: fe0742f8  ldr x30, [sp], #0x20
0x06B4BC84: 01000014  b #0x6b4bc88

; RVA 0x6B4BD7C | protected override void SubscribeToSignals() { }
; bytes=176 sha256=5ff754a931f5c3a1f9c93aa0b06ce53578d565e85dd7862f127781a8e781da97 status=arm64_complete_bound indexed_start=True
0x06B4BD7C: fe0f1df8  str x30, [sp, #-0x30]!
0x06B4BD80: f65701a9  stp x22, x21, [sp, #0x10]
0x06B4BD84: f44f02a9  stp x20, x19, [sp, #0x20]
0x06B4BD88: 148f0090  adrp x20, #0x7d2b000
0x06B4BD8C: 165800f0  adrp x22, #0x764e000
0x06B4BD90: 755f00b0  adrp x21, #0x7738000
0x06B4BD94: 887a4039  ldrb w8, [x20, #0x1e]
0x06B4BD98: d6ae43f9  ldr x22, [x22, #0x758]
0x06B4BD9C: b5f643f9  ldr x21, [x21, #0x7e8]
0x06B4BDA0: f30300aa  mov x19, x0
0x06B4BDA4: 88010037  tbnz w8, #0, #0x6b4bdd4
0x06B4BDA8: 005800f0  adrp x0, #0x764e000
0x06B4BDAC: 00ac43f9  ldr x0, [x0, #0x758]
0x06B4BDB0: 1ad31897  bl #0x3180a18
0x06B4BDB4: 605f00b0  adrp x0, #0x7738000
0x06B4BDB8: 00f843f9  ldr x0, [x0, #0x7f0]
0x06B4BDBC: 17d31897  bl #0x3180a18
0x06B4BDC0: 605f00b0  adrp x0, #0x7738000
0x06B4BDC4: 00f443f9  ldr x0, [x0, #0x7e8]
0x06B4BDC8: 14d31897  bl #0x3180a18
0x06B4BDCC: 28008052  movz w8, #0x1
0x06B4BDD0: 887a0039  strb w8, [x20, #0x1e]
0x06B4BDD4: e00313aa  mov x0, x19
0x06B4BDD8: e1031faa  mov x1, xzr
0x06B4BDDC: 2d9cf597  bl #0x68b2e90
0x06B4BDE0: c00240f9  ldr x0, [x22]
0x06B4BDE4: 741240f9  ldr x20, [x19, #0x20]
0x06B4BDE8: aed31897  bl #0x3180ca0
0x06B4BDEC: a20240f9  ldr x2, [x21]
0x06B4BDF0: e10313aa  mov x1, x19
0x06B4BDF4: e3031faa  mov x3, xzr
0x06B4BDF8: f50300aa  mov x21, x0
0x06B4BDFC: 4d86aa97  bl #0x55ed730
0x06B4BE00: 540100b4  cbz x20, #0x6b4be28
0x06B4BE04: 685f00b0  adrp x8, #0x7738000
0x06B4BE08: 08f943f9  ldr x8, [x8, #0x7f0]
0x06B4BE0C: e00314aa  mov x0, x20
0x06B4BE10: e10315aa  mov x1, x21
0x06B4BE14: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06B4BE18: 020140f9  ldr x2, [x8]
0x06B4BE1C: f65741a9  ldp x22, x21, [sp, #0x10]
0x06B4BE20: fe0743f8  ldr x30, [sp], #0x30
0x06B4BE24: 49654917  b #0x3da5348
0x06B4BE28: a1d31897  bl #0x3180cac

; RVA 0x6B4BE2C | protected override void UnsubscribeFromSignals() { }
; bytes=388 sha256=64eef6e8e054eb35464baf69257465b6f5ca3abeb77f4daa44d85a59110edfa2 status=arm64_complete_bound indexed_start=True
0x06B4BE2C: fe0f1cf8  str x30, [sp, #-0x40]!
0x06B4BE30: f85f01a9  stp x24, x23, [sp, #0x10]
0x06B4BE34: f65702a9  stp x22, x21, [sp, #0x20]
0x06B4BE38: f44f03a9  stp x20, x19, [sp, #0x30]
0x06B4BE3C: 148f0090  adrp x20, #0x7d2b000
0x06B4BE40: 165800f0  adrp x22, #0x764e000
0x06B4BE44: 755f00b0  adrp x21, #0x7738000
0x06B4BE48: 887e4039  ldrb w8, [x20, #0x1f]
0x06B4BE4C: d6ae43f9  ldr x22, [x22, #0x758]
0x06B4BE50: b5f643f9  ldr x21, [x21, #0x7e8]
0x06B4BE54: f30300aa  mov x19, x0
0x06B4BE58: 68030037  tbnz w8, #0, #0x6b4bec4
0x06B4BE5C: a05900b0  adrp x0, #0x7680000
0x06B4BE60: 003c42f9  ldr x0, [x0, #0x478]
0x06B4BE64: edd21897  bl #0x3180a18
0x06B4BE68: 005800f0  adrp x0, #0x764e000
0x06B4BE6C: 00ac43f9  ldr x0, [x0, #0x758]
0x06B4BE70: ead21897  bl #0x3180a18
0x06B4BE74: 405d00d0  adrp x0, #0x76f5000
0x06B4BE78: 003c41f9  ldr x0, [x0, #0x278]
0x06B4BE7C: e7d21897  bl #0x3180a18
0x06B4BE80: a05900b0  adrp x0, #0x7680000
0x06B4BE84: 004842f9  ldr x0, [x0, #0x490]
0x06B4BE88: e4d21897  bl #0x3180a18
0x06B4BE8C: 605f00b0  adrp x0, #0x7738000
0x06B4BE90: 00fc43f9  ldr x0, [x0, #0x7f8]
0x06B4BE94: e1d21897  bl #0x3180a18
0x06B4BE98: 605f00b0  adrp x0, #0x7738000
0x06B4BE9C: 000044f9  ldr x0, [x0, #0x800]
0x06B4BEA0: ded21897  bl #0x3180a18
0x06B4BEA4: 605f00b0  adrp x0, #0x7738000
0x06B4BEA8: 00f043f9  ldr x0, [x0, #0x7e0]
0x06B4BEAC: dbd21897  bl #0x3180a18
0x06B4BEB0: 605f00b0  adrp x0, #0x7738000
0x06B4BEB4: 00f443f9  ldr x0, [x0, #0x7e8]
0x06B4BEB8: d8d21897  bl #0x3180a18
0x06B4BEBC: 28008052  movz w8, #0x1
0x06B4BEC0: 887e0039  strb w8, [x20, #0x1f]
0x06B4BEC4: c00240f9  ldr x0, [x22]
0x06B4BEC8: 741240f9  ldr x20, [x19, #0x20]
0x06B4BECC: 75d31897  bl #0x3180ca0
0x06B4BED0: a20240f9  ldr x2, [x21]
0x06B4BED4: e10313aa  mov x1, x19
0x06B4BED8: e3031faa  mov x3, xzr
0x06B4BEDC: f50300aa  mov x21, x0
0x06B4BEE0: 1486aa97  bl #0x55ed730
0x06B4BEE4: 540600b4  cbz x20, #0x6b4bfac
0x06B4BEE8: 685f00b0  adrp x8, #0x7738000
0x06B4BEEC: 08fd43f9  ldr x8, [x8, #0x7f8]
0x06B4BEF0: b75900b0  adrp x23, #0x7680000
0x06B4BEF4: 785f00b0  adrp x24, #0x7738000
0x06B4BEF8: e00314aa  mov x0, x20
0x06B4BEFC: 020140f9  ldr x2, [x8]
0x06B4BF00: f73e42f9  ldr x23, [x23, #0x478]
0x06B4BF04: 18f343f9  ldr x24, [x24, #0x7e0]
0x06B4BF08: e10315aa  mov x1, x21
0x06B4BF0C: d0684997  bl #0x3da624c
0x06B4BF10: e00240f9  ldr x0, [x23]
0x06B4BF14: 741240f9  ldr x20, [x19, #0x20]
0x06B4BF18: 62d31897  bl #0x3180ca0
0x06B4BF1C: 020340f9  ldr x2, [x24]
0x06B4BF20: e10313aa  mov x1, x19
0x06B4BF24: e3031faa  mov x3, xzr
0x06B4BF28: f50300aa  mov x21, x0
0x06B4BF2C: aa589f97  bl #0x53221d4
0x06B4BF30: f40300b4  cbz x20, #0x6b4bfac
0x06B4BF34: a85900b0  adrp x8, #0x7680000
0x06B4BF38: 084942f9  ldr x8, [x8, #0x490]
0x06B4BF3C: 775f00b0  adrp x23, #0x7738000
0x06B4BF40: e00314aa  mov x0, x20
0x06B4BF44: e10315aa  mov x1, x21
0x06B4BF48: 020140f9  ldr x2, [x8]
0x06B4BF4C: f70244f9  ldr x23, [x23, #0x800]
0x06B4BF50: d4674997  bl #0x3da5ea0
0x06B4BF54: c00240f9  ldr x0, [x22]
0x06B4BF58: 741240f9  ldr x20, [x19, #0x20]
0x06B4BF5C: 51d31897  bl #0x3180ca0
0x06B4BF60: e20240f9  ldr x2, [x23]
0x06B4BF64: e10313aa  mov x1, x19
0x06B4BF68: e3031faa  mov x3, xzr
0x06B4BF6C: f50300aa  mov x21, x0
0x06B4BF70: f085aa97  bl #0x55ed730
0x06B4BF74: d40100b4  cbz x20, #0x6b4bfac
0x06B4BF78: 485d00d0  adrp x8, #0x76f5000
0x06B4BF7C: 083d41f9  ldr x8, [x8, #0x278]
0x06B4BF80: e00314aa  mov x0, x20
0x06B4BF84: e10315aa  mov x1, x21
0x06B4BF88: 020140f9  ldr x2, [x8]
0x06B4BF8C: d6674997  bl #0x3da5ee4
0x06B4BF90: e00313aa  mov x0, x19
0x06B4BF94: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06B4BF98: f65742a9  ldp x22, x21, [sp, #0x20]
0x06B4BF9C: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06B4BFA0: e1031faa  mov x1, xzr
0x06B4BFA4: fe0744f8  ldr x30, [sp], #0x40
0x06B4BFA8: bb9bf517  b #0x68b2e94
0x06B4BFAC: 40d31897  bl #0x3180cac

; RVA 0x6B4BC88 | private void EvaluateCleanupInternal() { }
; bytes=244 sha256=1689ca4c7180a6cfef146c86ce73d4b1c6a484feae5f4c413c607e52785f4c77 status=arm64_complete_bound indexed_start=True
0x06B4BC88: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06B4BC8C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06B4BC90: 148f0090  adrp x20, #0x7d2b000
0x06B4BC94: 88824039  ldrb w8, [x20, #0x20]
0x06B4BC98: f30300aa  mov x19, x0
0x06B4BC9C: 88010037  tbnz w8, #0, #0x6b4bccc
0x06B4BCA0: a05900b0  adrp x0, #0x7680000
0x06B4BCA4: 003c42f9  ldr x0, [x0, #0x478]
0x06B4BCA8: 5cd31897  bl #0x3180a18
0x06B4BCAC: a05900b0  adrp x0, #0x7680000
0x06B4BCB0: 004042f9  ldr x0, [x0, #0x480]
0x06B4BCB4: 59d31897  bl #0x3180a18
0x06B4BCB8: 605f00b0  adrp x0, #0x7738000
0x06B4BCBC: 00f043f9  ldr x0, [x0, #0x7e0]
0x06B4BCC0: 56d31897  bl #0x3180a18
0x06B4BCC4: 28008052  movz w8, #0x1
0x06B4BCC8: 88820039  strb w8, [x20, #0x20]
0x06B4BCCC: 684240b9  ldr w8, [x19, #0x40]
0x06B4BCD0: 1f050071  cmp w8, #1
0x06B4BCD4: 01010054  b.ne #0x6b4bcf4
0x06B4BCD8: e00313aa  mov x0, x19
0x06B4BCDC: 4fffff97  bl #0x6b4ba18
0x06B4BCE0: 00010036  tbz w0, #0, #0x6b4bd00
0x06B4BCE4: e00313aa  mov x0, x19
0x06B4BCE8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06B4BCEC: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06B4BCF0: b0000014  b #0x6b4bfb0
0x06B4BCF4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06B4BCF8: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06B4BCFC: c0035fd6  ret
0x06B4BD00: e00313aa  mov x0, x19
0x06B4BD04: 8fffff97  bl #0x6b4bb40
0x06B4BD08: 00030036  tbz w0, #0, #0x6b4bd68
0x06B4BD0C: 48008052  movz w8, #0x2
0x06B4BD10: 684200b9  str w8, [x19, #0x40]
0x06B4BD14: a85900b0  adrp x8, #0x7680000
0x06B4BD18: 741240f9  ldr x20, [x19, #0x20]
0x06B4BD1C: 083d42f9  ldr x8, [x8, #0x478]
0x06B4BD20: 000140f9  ldr x0, [x8]
0x06B4BD24: dfd31897  bl #0x3180ca0
0x06B4BD28: 685f00b0  adrp x8, #0x7738000
0x06B4BD2C: 08f143f9  ldr x8, [x8, #0x7e0]
0x06B4BD30: e10313aa  mov x1, x19
0x06B4BD34: e3031faa  mov x3, xzr
0x06B4BD38: f50300aa  mov x21, x0
0x06B4BD3C: 020140f9  ldr x2, [x8]
0x06B4BD40: 25599f97  bl #0x53221d4
0x06B4BD44: b40100b4  cbz x20, #0x6b4bd78
0x06B4BD48: a85900b0  adrp x8, #0x7680000
0x06B4BD4C: 084142f9  ldr x8, [x8, #0x480]
0x06B4BD50: e00314aa  mov x0, x20
0x06B4BD54: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06B4BD58: e10315aa  mov x1, x21
0x06B4BD5C: 020140f9  ldr x2, [x8]
0x06B4BD60: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06B4BD64: 68654917  b #0x3da5304
0x06B4BD68: e00313aa  mov x0, x19
0x06B4BD6C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06B4BD70: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06B4BD74: 05010014  b #0x6b4c188
0x06B4BD78: cdd31897  bl #0x3180cac

; RVA 0x6B4BFB0 | private void StartGracefulCleanupWait() { }
; bytes=472 sha256=1908242e5f00b86dfc55e1dba5ac724367a0f5a63eb7ff0d84331872448cff44 status=arm64_complete_bound indexed_start=True
0x06B4BFB0: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x06B4BFB4: f65701a9  stp x22, x21, [sp, #0x10]
0x06B4BFB8: f44f02a9  stp x20, x19, [sp, #0x20]
0x06B4BFBC: 148f0090  adrp x20, #0x7d2b000
0x06B4BFC0: 165800f0  adrp x22, #0x764e000
0x06B4BFC4: 755f00b0  adrp x21, #0x7738000
0x06B4BFC8: 88864039  ldrb w8, [x20, #0x21]
0x06B4BFCC: d6ae43f9  ldr x22, [x22, #0x758]
0x06B4BFD0: b50244f9  ldr x21, [x21, #0x800]
0x06B4BFD4: f30300aa  mov x19, x0
0x06B4BFD8: a8020037  tbnz w8, #0, #0x6b4c02c
0x06B4BFDC: 005800f0  adrp x0, #0x764e000
0x06B4BFE0: 00ac43f9  ldr x0, [x0, #0x758]
0x06B4BFE4: 8dd21897  bl #0x3180a18
0x06B4BFE8: 005900f0  adrp x0, #0x766e000
0x06B4BFEC: 00dc42f9  ldr x0, [x0, #0x5b8]
0x06B4BFF0: 8ad21897  bl #0x3180a18
0x06B4BFF4: 405d00d0  adrp x0, #0x76f5000
0x06B4BFF8: 004841f9  ldr x0, [x0, #0x290]
0x06B4BFFC: 87d21897  bl #0x3180a18
0x06B4C000: 605f0090  adrp x0, #0x7738000
0x06B4C004: 000444f9  ldr x0, [x0, #0x808]
0x06B4C008: 84d21897  bl #0x3180a18
0x06B4C00C: 605f0090  adrp x0, #0x7738000
0x06B4C010: 000844f9  ldr x0, [x0, #0x810]
0x06B4C014: 81d21897  bl #0x3180a18
0x06B4C018: 605f0090  adrp x0, #0x7738000
0x06B4C01C: 000044f9  ldr x0, [x0, #0x800]
0x06B4C020: 7ed21897  bl #0x3180a18
0x06B4C024: 28008052  movz w8, #0x1
0x06B4C028: 88860039  strb w8, [x20, #0x21]
0x06B4C02C: 68008052  movz w8, #0x3
0x06B4C030: 684200b9  str w8, [x19, #0x40]
0x06B4C034: c00240f9  ldr x0, [x22]
0x06B4C038: 741240f9  ldr x20, [x19, #0x20]
0x06B4C03C: 19d31897  bl #0x3180ca0
0x06B4C040: a20240f9  ldr x2, [x21]
0x06B4C044: e10313aa  mov x1, x19
0x06B4C048: e3031faa  mov x3, xzr
0x06B4C04C: f50300aa  mov x21, x0
0x06B4C050: b885aa97  bl #0x55ed730
0x06B4C054: 940900b4  cbz x20, #0x6b4c184
0x06B4C058: 485d00b0  adrp x8, #0x76f5000
0x06B4C05C: 084941f9  ldr x8, [x8, #0x290]
0x06B4C060: e00314aa  mov x0, x20
0x06B4C064: e10315aa  mov x1, x21
0x06B4C068: 020140f9  ldr x2, [x8]
0x06B4C06C: b7644997  bl #0x3da5348
0x06B4C070: 682e40f9  ldr x8, [x19, #0x58]
0x06B4C074: 880800b4  cbz x8, #0x6b4c184
0x06B4C078: 152544a9  ldp x21, x9, [x8, #0x40]
0x06B4C07C: 161940f9  ldr x22, [x8, #0x30]
0x06B4C080: 685f0090  adrp x8, #0x7738000
0x06B4C084: 080544f9  ldr x8, [x8, #0x808]
0x06B4C088: 690000b4  cbz x9, #0x6b4c094
0x06B4C08C: 370940f9  ldr x23, [x9, #0x10]
0x06B4C090: 02000014  b #0x6b4c098
0x06B4C094: f7031faa  mov x23, xzr
0x06B4C098: 000140f9  ldr x0, [x8]
0x06B4C09C: 01d31897  bl #0x3180ca0
0x06B4C0A0: e10316aa  mov x1, x22
0x06B4C0A4: e20315aa  mov x2, x21
0x06B4C0A8: e30317aa  mov x3, x23
0x06B4C0AC: f40300aa  mov x20, x0
0x06B4C0B0: 98000094  bl #0x6b4c310
0x06B4C0B4: 682e40f9  ldr x8, [x19, #0x58]
0x06B4C0B8: 680600b4  cbz x8, #0x6b4c184
0x06B4C0BC: 695f0090  adrp x9, #0x7738000
0x06B4C0C0: 290944f9  ldr x9, [x9, #0x810]
0x06B4C0C4: 151940f9  ldr x21, [x8, #0x30]
0x06B4C0C8: 163940f9  ldr x22, [x8, #0x70]
0x06B4C0CC: 200140f9  ldr x0, [x9]
0x06B4C0D0: f4d21897  bl #0x3180ca0
0x06B4C0D4: e10315aa  mov x1, x21
0x06B4C0D8: e20316aa  mov x2, x22
0x06B4C0DC: e30314aa  mov x3, x20
0x06B4C0E0: f70300aa  mov x23, x0
0x06B4C0E4: a3000094  bl #0x6b4c370
0x06B4C0E8: 778e04f8  str x23, [x19, #0x48]!
0x06B4C0EC: e00313aa  mov x0, x19
0x06B4C0F0: e10317aa  mov x1, x23
0x06B4C0F4: 34d21897  bl #0x31809c4
0x06B4C0F8: 74025ef8  ldur x20, [x19, #-0x20]
0x06B4C0FC: 540400b4  cbz x20, #0x6b4c184
0x06B4C100: 0a5900d0  adrp x10, #0x766e000
0x06B4C104: 880240f9  ldr x8, [x20]
0x06B4C108: 4add42f9  ldr x10, [x10, #0x5b8]
0x06B4C10C: 730240f9  ldr x19, [x19]
0x06B4C110: 095d4279  ldrh w9, [x8, #0x12e]
0x06B4C114: 410140f9  ldr x1, [x10]
0x06B4C118: 290100b4  cbz x9, #0x6b4c13c
0x06B4C11C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06B4C120: 4a210091  add x10, x10, #8
0x06B4C124: 4b815ff8  ldur x11, [x10, #-8]
0x06B4C128: 7f0101eb  cmp x11, x1
0x06B4C12C: 00010054  b.eq #0x6b4c14c
0x06B4C130: 290500f1  subs x9, x9, #1
0x06B4C134: 4a410091  add x10, x10, #0x10
0x06B4C138: 61ffff54  b.ne #0x6b4c124
0x06B4C13C: 62008052  movz w2, #0x3
0x06B4C140: e00314aa  mov x0, x20
0x06B4C144: 732a1897  bl #0x3156b10
0x06B4C148: 05000014  b #0x6b4c15c
0x06B4C14C: 490140b9  ldr w9, [x10]
0x06B4C150: 290d0011  add w9, w9, #3
0x06B4C154: 08d1298b  add x8, x8, w9, sxtw #4
0x06B4C158: 00e10491  add x0, x8, #0x138
0x06B4C15C: 061440a9  ldp x6, x5, [x0]
0x06B4C160: e00314aa  mov x0, x20
0x06B4C164: e10313aa  mov x1, x19
0x06B4C168: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06B4C16C: f65741a9  ldp x22, x21, [sp, #0x10]
0x06B4C170: 02008152  movz w2, #0x800
0x06B4C174: 23008052  movz w3, #0x1
0x06B4C178: e4031faa  mov x4, xzr
0x06B4C17C: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x06B4C180: c0001fd6  br x6
0x06B4C184: cad21897  bl #0x3180cac

; RVA 0x6B4C3D0 | private void OnBoardMiniGameStarted(BoardMiniGameEventStartedSignal signal) { }
; bytes=180 sha256=117a1e0447274965fd8ef5d7b631090126f7eb321c807f0f01ac7d52c2ccf04a status=arm64_complete_bound indexed_start=True
0x06B4C3D0: fe0f1df8  str x30, [sp, #-0x30]!
0x06B4C3D4: f65701a9  stp x22, x21, [sp, #0x10]
0x06B4C3D8: f44f02a9  stp x20, x19, [sp, #0x20]
0x06B4C3DC: f48e00f0  adrp x20, #0x7d2b000
0x06B4C3E0: b6590090  adrp x22, #0x7680000
0x06B4C3E4: 755f0090  adrp x21, #0x7738000
0x06B4C3E8: 888a4039  ldrb w8, [x20, #0x22]
0x06B4C3EC: d63e42f9  ldr x22, [x22, #0x478]
0x06B4C3F0: b5f243f9  ldr x21, [x21, #0x7e0]
0x06B4C3F4: f30300aa  mov x19, x0
0x06B4C3F8: 88010037  tbnz w8, #0, #0x6b4c428
0x06B4C3FC: a0590090  adrp x0, #0x7680000
0x06B4C400: 003c42f9  ldr x0, [x0, #0x478]
0x06B4C404: 85d11897  bl #0x3180a18
0x06B4C408: a0590090  adrp x0, #0x7680000
0x06B4C40C: 004442f9  ldr x0, [x0, #0x488]
0x06B4C410: 82d11897  bl #0x3180a18
0x06B4C414: 605f0090  adrp x0, #0x7738000
0x06B4C418: 00f043f9  ldr x0, [x0, #0x7e0]
0x06B4C41C: 7fd11897  bl #0x3180a18
0x06B4C420: 28008052  movz w8, #0x1
0x06B4C424: 888a0039  strb w8, [x20, #0x22]
0x06B4C428: c00240f9  ldr x0, [x22]
0x06B4C42C: 741240f9  ldr x20, [x19, #0x20]
0x06B4C430: 1cd21897  bl #0x3180ca0
0x06B4C434: a20240f9  ldr x2, [x21]
0x06B4C438: e10313aa  mov x1, x19
0x06B4C43C: e3031faa  mov x3, xzr
0x06B4C440: f50300aa  mov x21, x0
0x06B4C444: 64579f97  bl #0x53221d4
0x06B4C448: d40100b4  cbz x20, #0x6b4c480
0x06B4C44C: a8590090  adrp x8, #0x7680000
0x06B4C450: 084542f9  ldr x8, [x8, #0x488]
0x06B4C454: e00314aa  mov x0, x20
0x06B4C458: e10315aa  mov x1, x21
0x06B4C45C: 020140f9  ldr x2, [x8]
0x06B4C460: 6a674997  bl #0x3da6208
0x06B4C464: 28008052  movz w8, #0x1
0x06B4C468: 684200b9  str w8, [x19, #0x40]
0x06B4C46C: e00313aa  mov x0, x19
0x06B4C470: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06B4C474: f65741a9  ldp x22, x21, [sp, #0x10]
0x06B4C478: fe0743f8  ldr x30, [sp], #0x30
0x06B4C47C: 03feff17  b #0x6b4bc88
0x06B4C480: 0bd21897  bl #0x3180cac

; RVA 0x6B4C484 | private void OnBoardMiniGameEnded() { }
; bytes=320 sha256=2705b04237afb389a09381da5a89037451167d04a3bccda71ee1df2a13e7191a status=arm64_complete_bound indexed_start=True
0x06B4C484: fe0f1df8  str x30, [sp, #-0x30]!
0x06B4C488: f65701a9  stp x22, x21, [sp, #0x10]
0x06B4C48C: f44f02a9  stp x20, x19, [sp, #0x20]
0x06B4C490: f48e00f0  adrp x20, #0x7d2b000
0x06B4C494: 165800d0  adrp x22, #0x764e000
0x06B4C498: 755f0090  adrp x21, #0x7738000
0x06B4C49C: 888e4039  ldrb w8, [x20, #0x23]
0x06B4C4A0: d6ae43f9  ldr x22, [x22, #0x758]
0x06B4C4A4: b50244f9  ldr x21, [x21, #0x800]
0x06B4C4A8: f30300aa  mov x19, x0
0x06B4C4AC: e8010037  tbnz w8, #0, #0x6b4c4e8
0x06B4C4B0: 005800d0  adrp x0, #0x764e000
0x06B4C4B4: 00ac43f9  ldr x0, [x0, #0x758]
0x06B4C4B8: 58d11897  bl #0x3180a18
0x06B4C4BC: 80590090  adrp x0, #0x767c000
0x06B4C4C0: 009441f9  ldr x0, [x0, #0x328]
0x06B4C4C4: 55d11897  bl #0x3180a18
0x06B4C4C8: 605f0090  adrp x0, #0x7738000
0x06B4C4CC: 000c44f9  ldr x0, [x0, #0x818]
0x06B4C4D0: 52d11897  bl #0x3180a18
0x06B4C4D4: 605f0090  adrp x0, #0x7738000
0x06B4C4D8: 000044f9  ldr x0, [x0, #0x800]
0x06B4C4DC: 4fd11897  bl #0x3180a18
0x06B4C4E0: 28008052  movz w8, #0x1
0x06B4C4E4: 888e0039  strb w8, [x20, #0x23]
0x06B4C4E8: c00240f9  ldr x0, [x22]
0x06B4C4EC: 741240f9  ldr x20, [x19, #0x20]
0x06B4C4F0: ecd11897  bl #0x3180ca0
0x06B4C4F4: a20240f9  ldr x2, [x21]
0x06B4C4F8: e10313aa  mov x1, x19
0x06B4C4FC: e3031faa  mov x3, xzr
0x06B4C500: f50300aa  mov x21, x0
0x06B4C504: 8b84aa97  bl #0x55ed730
0x06B4C508: d40500b4  cbz x20, #0x6b4c5c0
0x06B4C50C: 685f0090  adrp x8, #0x7738000
0x06B4C510: 080d44f9  ldr x8, [x8, #0x818]
0x06B4C514: e00314aa  mov x0, x20
0x06B4C518: e10315aa  mov x1, x21
0x06B4C51C: 020140f9  ldr x2, [x8]
0x06B4C520: 4b674997  bl #0x3da624c
0x06B4C524: 684240b9  ldr w8, [x19, #0x40]
0x06B4C528: 1f0d0071  cmp w8, #3
0x06B4C52C: a1020054  b.ne #0x6b4c580
0x06B4C530: 742640f9  ldr x20, [x19, #0x48]
0x06B4C534: d40300b4  cbz x20, #0x6b4c5ac
0x06B4C538: 8a590090  adrp x10, #0x767c000
0x06B4C53C: 880240f9  ldr x8, [x20]
0x06B4C540: 4a9541f9  ldr x10, [x10, #0x328]
0x06B4C544: 095d4279  ldrh w9, [x8, #0x12e]
0x06B4C548: 410140f9  ldr x1, [x10]
0x06B4C54C: 290100b4  cbz x9, #0x6b4c570
0x06B4C550: 0a5940f9  ldr x10, [x8, #0xb0]
0x06B4C554: 4a210091  add x10, x10, #8
0x06B4C558: 4b815ff8  ldur x11, [x10, #-8]
0x06B4C55C: 7f0101eb  cmp x11, x1
0x06B4C560: 80010054  b.eq #0x6b4c590
0x06B4C564: 290500f1  subs x9, x9, #1
0x06B4C568: 4a410091  add x10, x10, #0x10
0x06B4C56C: 61ffff54  b.ne #0x6b4c558
0x06B4C570: 22018052  movz w2, #0x9
0x06B4C574: e00314aa  mov x0, x20
0x06B4C578: 66291897  bl #0x3156b10
0x06B4C57C: 09000014  b #0x6b4c5a0
0x06B4C580: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06B4C584: f65741a9  ldp x22, x21, [sp, #0x10]
0x06B4C588: fe0743f8  ldr x30, [sp], #0x30
0x06B4C58C: c0035fd6  ret
0x06B4C590: 490140b9  ldr w9, [x10]
0x06B4C594: 29250011  add w9, w9, #9
0x06B4C598: 08d1298b  add x8, x8, w9, sxtw #4
0x06B4C59C: 00e10491  add x0, x8, #0x138
0x06B4C5A0: 080440a9  ldp x8, x1, [x0]
0x06B4C5A4: e00314aa  mov x0, x20
0x06B4C5A8: 00013fd6  blr x8
0x06B4C5AC: e00313aa  mov x0, x19
0x06B4C5B0: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06B4C5B4: f65741a9  ldp x22, x21, [sp, #0x10]
0x06B4C5B8: fe0743f8  ldr x30, [sp], #0x30
0x06B4C5BC: f3feff17  b #0x6b4c188
0x06B4C5C0: bbd11897  bl #0x3180cac

; RVA 0x6B4C188 | private void PerformImmediateCleanUp() { }
; bytes=392 sha256=38069c7b4be2ac8ceb40ea8959c87c16aeb8062aa3857db8b1f0dd5091d90685 status=arm64_complete_bound indexed_start=True
0x06B4C188: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x06B4C18C: f65701a9  stp x22, x21, [sp, #0x10]
0x06B4C190: f44f02a9  stp x20, x19, [sp, #0x20]
0x06B4C194: f48e00f0  adrp x20, #0x7d2b000
0x06B4C198: 88924039  ldrb w8, [x20, #0x24]
0x06B4C19C: f30300aa  mov x19, x0
0x06B4C1A0: e8010037  tbnz w8, #0, #0x6b4c1dc
0x06B4C1A4: 005800d0  adrp x0, #0x764e000
0x06B4C1A8: 00ac43f9  ldr x0, [x0, #0x758]
0x06B4C1AC: 1bd21897  bl #0x3180a18
0x06B4C1B0: 005900f0  adrp x0, #0x766f000
0x06B4C1B4: 002441f9  ldr x0, [x0, #0x248]
0x06B4C1B8: 18d21897  bl #0x3180a18
0x06B4C1BC: 605f0090  adrp x0, #0x7738000
0x06B4C1C0: 00c043f9  ldr x0, [x0, #0x780]
0x06B4C1C4: 15d21897  bl #0x3180a18
0x06B4C1C8: 605f0090  adrp x0, #0x7738000
0x06B4C1CC: 00f443f9  ldr x0, [x0, #0x7e8]
0x06B4C1D0: 12d21897  bl #0x3180a18
0x06B4C1D4: 28008052  movz w8, #0x1
0x06B4C1D8: 88920039  strb w8, [x20, #0x24]
0x06B4C1DC: 692e40f9  ldr x9, [x19, #0x58]
0x06B4C1E0: 88008052  movz w8, #0x4
0x06B4C1E4: 684200b9  str w8, [x19, #0x40]
0x06B4C1E8: 290900b4  cbz x9, #0x6b4c30c
0x06B4C1EC: 741a40f9  ldr x20, [x19, #0x30]
0x06B4C1F0: f40800b4  cbz x20, #0x6b4c30c
0x06B4C1F4: 6a5f0090  adrp x10, #0x7738000
0x06B4C1F8: 880240f9  ldr x8, [x20]
0x06B4C1FC: 4ac143f9  ldr x10, [x10, #0x780]
0x06B4C200: 175800d0  adrp x23, #0x764e000
0x06B4C204: 765f0090  adrp x22, #0x7738000
0x06B4C208: 351940f9  ldr x21, [x9, #0x30]
0x06B4C20C: 095d4279  ldrh w9, [x8, #0x12e]
0x06B4C210: 410140f9  ldr x1, [x10]
0x06B4C214: f7ae43f9  ldr x23, [x23, #0x758]
0x06B4C218: d6f643f9  ldr x22, [x22, #0x7e8]
0x06B4C21C: 290100b4  cbz x9, #0x6b4c240
0x06B4C220: 0a5940f9  ldr x10, [x8, #0xb0]
0x06B4C224: 4a210091  add x10, x10, #8
0x06B4C228: 4b815ff8  ldur x11, [x10, #-8]
0x06B4C22C: 7f0101eb  cmp x11, x1
0x06B4C230: 00010054  b.eq #0x6b4c250
0x06B4C234: 290500f1  subs x9, x9, #1
0x06B4C238: 4a410091  add x10, x10, #0x10
0x06B4C23C: 61ffff54  b.ne #0x6b4c228
0x06B4C240: e00314aa  mov x0, x20
0x06B4C244: e2031f2a  mov w2, wzr
0x06B4C248: 322a1897  bl #0x3156b10
0x06B4C24C: 04000014  b #0x6b4c25c
0x06B4C250: 490180b9  ldrsw x9, [x10]
0x06B4C254: 0811098b  add x8, x8, x9, lsl #4
0x06B4C258: 00e10491  add x0, x8, #0x138
0x06B4C25C: 080c40a9  ldp x8, x3, [x0]
0x06B4C260: e00314aa  mov x0, x20
0x06B4C264: e10315aa  mov x1, x21
0x06B4C268: e2031faa  mov x2, xzr
0x06B4C26C: 00013fd6  blr x8
0x06B4C270: e80240f9  ldr x8, [x23]
0x06B4C274: f40300aa  mov x20, x0
0x06B4C278: e00308aa  mov x0, x8
0x06B4C27C: 89d21897  bl #0x3180ca0
0x06B4C280: c20240f9  ldr x2, [x22]
0x06B4C284: e10313aa  mov x1, x19
0x06B4C288: e3031faa  mov x3, xzr
0x06B4C28C: f50300aa  mov x21, x0
0x06B4C290: 2885aa97  bl #0x55ed730
0x06B4C294: d40300b4  cbz x20, #0x6b4c30c
0x06B4C298: 0a5900f0  adrp x10, #0x766f000
0x06B4C29C: 880240f9  ldr x8, [x20]
0x06B4C2A0: 4a2541f9  ldr x10, [x10, #0x248]
0x06B4C2A4: 095d4279  ldrh w9, [x8, #0x12e]
0x06B4C2A8: 410140f9  ldr x1, [x10]
0x06B4C2AC: 290100b4  cbz x9, #0x6b4c2d0
0x06B4C2B0: 0a5940f9  ldr x10, [x8, #0xb0]
0x06B4C2B4: 4a210091  add x10, x10, #8
0x06B4C2B8: 4b815ff8  ldur x11, [x10, #-8]
0x06B4C2BC: 7f0101eb  cmp x11, x1
0x06B4C2C0: 00010054  b.eq #0x6b4c2e0
0x06B4C2C4: 290500f1  subs x9, x9, #1
0x06B4C2C8: 4a410091  add x10, x10, #0x10
0x06B4C2CC: 61ffff54  b.ne #0x6b4c2b8
0x06B4C2D0: 62008052  movz w2, #0x3
0x06B4C2D4: e00314aa  mov x0, x20
0x06B4C2D8: 0e2a1897  bl #0x3156b10
0x06B4C2DC: 05000014  b #0x6b4c2f0
0x06B4C2E0: 490140b9  ldr w9, [x10]
0x06B4C2E4: 290d0011  add w9, w9, #3
0x06B4C2E8: 08d1298b  add x8, x8, w9, sxtw #4
0x06B4C2EC: 00e10491  add x0, x8, #0x138
0x06B4C2F0: 030840a9  ldp x3, x2, [x0]
0x06B4C2F4: e00314aa  mov x0, x20
0x06B4C2F8: e10315aa  mov x1, x21
0x06B4C2FC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06B4C300: f65741a9  ldp x22, x21, [sp, #0x10]
0x06B4C304: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x06B4C308: 60001fd6  br x3
0x06B4C30C: 68d21897  bl #0x3180cac

; RVA 0x6B4C5C4 | private void OnCleanUpCompleted() { }
; bytes=36 sha256=2e938e3c19edca89cb8763d9508e27241a8fffe8bc1c1b6e825a7da1f3922f2e status=arm64_complete_bound indexed_start=True
0x06B4C5C4: 082840f9  ldr x8, [x0, #0x50]
0x06B4C5C8: a9008052  movz w9, #0x5
0x06B4C5CC: 094000b9  str w9, [x0, #0x40]
0x06B4C5D0: a80000b4  cbz x8, #0x6b4c5e4
0x06B4C5D4: 020d40f9  ldr x2, [x8, #0x18]
0x06B4C5D8: 002140f9  ldr x0, [x8, #0x40]
0x06B4C5DC: 011540f9  ldr x1, [x8, #0x28]
0x06B4C5E0: 40001fd6  br x2
0x06B4C5E4: c0035fd6  ret

; RVA 0x6B4C5E8 | public void .ctor() { }
; bytes=8 sha256=fd6c3c5d8d7b2aac1db03707a384bf7fb66ecac5299b7d0bb527b5639664f4de status=arm64_complete_bound indexed_start=True
0x06B4C5E8: e1031faa  mov x1, xzr
0x06B4C5EC: 449af517  b #0x68b2efc

; RVA 0x6B4C5F0 | private bool <get_HasConnectedActiveBoardMiniGame>b__9_0(IEventGlobalMetadata entry) { }
; bytes=316 sha256=a66b09192a6ba65e8e9bd353a908c4a41895636c796d170bdbd654a13ff14759 status=arm64_complete_bound indexed_start=True
0x06B4C5F0: fe0f1df8  str x30, [sp, #-0x30]!
0x06B4C5F4: f65701a9  stp x22, x21, [sp, #0x10]
0x06B4C5F8: f44f02a9  stp x20, x19, [sp, #0x20]
0x06B4C5FC: f58e00f0  adrp x21, #0x7d2b000
0x06B4C600: a8964039  ldrb w8, [x21, #0x25]
0x06B4C604: f30301aa  mov x19, x1
0x06B4C608: f40300aa  mov x20, x0
0x06B4C60C: c8000037  tbnz w8, #0, #0x6b4c624
0x06B4C610: 605900d0  adrp x0, #0x767a000
0x06B4C614: 00c442f9  ldr x0, [x0, #0x588]
0x06B4C618: 00d11897  bl #0x3180a18
0x06B4C61C: 28008052  movz w8, #0x1
0x06B4C620: a8960039  strb w8, [x21, #0x25]
0x06B4C624: 892e40f9  ldr x9, [x20, #0x58]
0x06B4C628: 090800b4  cbz x9, #0x6b4c728
0x06B4C62C: f30700b4  cbz x19, #0x6b4c728
0x06B4C630: 755900d0  adrp x21, #0x767a000
0x06B4C634: 680240f9  ldr x8, [x19]
0x06B4C638: b5c642f9  ldr x21, [x21, #0x588]
0x06B4C63C: 360d40f9  ldr x22, [x9, #0x18]
0x06B4C640: 095d4279  ldrh w9, [x8, #0x12e]
0x06B4C644: a10240f9  ldr x1, [x21]
0x06B4C648: 290100b4  cbz x9, #0x6b4c66c
0x06B4C64C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06B4C650: 4a210091  add x10, x10, #8
0x06B4C654: 4b815ff8  ldur x11, [x10, #-8]
0x06B4C658: 7f0101eb  cmp x11, x1
0x06B4C65C: 00010054  b.eq #0x6b4c67c
0x06B4C660: 290500f1  subs x9, x9, #1
0x06B4C664: 4a410091  add x10, x10, #0x10
0x06B4C668: 61ffff54  b.ne #0x6b4c654
0x06B4C66C: a2008052  movz w2, #0x5
0x06B4C670: e00313aa  mov x0, x19
0x06B4C674: 27291897  bl #0x3156b10
0x06B4C678: 05000014  b #0x6b4c68c
0x06B4C67C: 490140b9  ldr w9, [x10]
0x06B4C680: 29150011  add w9, w9, #5
0x06B4C684: 08d1298b  add x8, x8, w9, sxtw #4
0x06B4C688: 00e10491  add x0, x8, #0x138
0x06B4C68C: 080440a9  ldp x8, x1, [x0]
0x06B4C690: e00313aa  mov x0, x19
0x06B4C694: 00013fd6  blr x8
0x06B4C698: df0200eb  cmp x22, x0
0x06B4C69C: 6d000054  b.le #0x6b4c6a8
0x06B4C6A0: e0031f2a  mov w0, wzr
0x06B4C6A4: 1d000014  b #0x6b4c718
0x06B4C6A8: 892e40f9  ldr x9, [x20, #0x58]
0x06B4C6AC: e90300b4  cbz x9, #0x6b4c728
0x06B4C6B0: 680240f9  ldr x8, [x19]
0x06B4C6B4: 341140f9  ldr x20, [x9, #0x20]
0x06B4C6B8: a10240f9  ldr x1, [x21]
0x06B4C6BC: 095d4279  ldrh w9, [x8, #0x12e]
0x06B4C6C0: 290100b4  cbz x9, #0x6b4c6e4
0x06B4C6C4: 0a5940f9  ldr x10, [x8, #0xb0]
0x06B4C6C8: 4a210091  add x10, x10, #8
0x06B4C6CC: 4b815ff8  ldur x11, [x10, #-8]
0x06B4C6D0: 7f0101eb  cmp x11, x1
0x06B4C6D4: 00010054  b.eq #0x6b4c6f4
0x06B4C6D8: 290500f1  subs x9, x9, #1
0x06B4C6DC: 4a410091  add x10, x10, #0x10
0x06B4C6E0: 61ffff54  b.ne #0x6b4c6cc
0x06B4C6E4: 82008052  movz w2, #0x4
0x06B4C6E8: e00313aa  mov x0, x19
0x06B4C6EC: 09291897  bl #0x3156b10
0x06B4C6F0: 05000014  b #0x6b4c704
0x06B4C6F4: 490140b9  ldr w9, [x10]
0x06B4C6F8: 29110011  add w9, w9, #4
0x06B4C6FC: 08d1298b  add x8, x8, w9, sxtw #4
0x06B4C700: 00e10491  add x0, x8, #0x138
0x06B4C704: 080440a9  ldp x8, x1, [x0]
0x06B4C708: e00313aa  mov x0, x19
0x06B4C70C: 00013fd6  blr x8
0x06B4C710: 9f0200eb  cmp x20, x0
0x06B4C714: e0b79f1a  cset w0, ge
0x06B4C718: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06B4C71C: f65741a9  ldp x22, x21, [sp, #0x10]
0x06B4C720: fe0743f8  ldr x30, [sp], #0x30
0x06B4C724: c0035fd6  ret
0x06B4C728: 61d11897  bl #0x3180cac

