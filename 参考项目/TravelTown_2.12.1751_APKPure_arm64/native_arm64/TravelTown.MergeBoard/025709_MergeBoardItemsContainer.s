; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25709 Merger.MergeBoard.View.Items.MergeBoardItemsContainer
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A33FC4 | public void add_ItemAdded(Action<IBoardItemView> value) { }
; bytes=176 sha256=324889918a113b89dea3b476e5aee53f6e4b1cb1bf9dda18f6756ad27d71824c status=arm64_complete_bound indexed_start=True
0x06A33FC4: fe0f1cf8  str x30, [sp, #-0x40]!
0x06A33FC8: f85f01a9  stp x24, x23, [sp, #0x10]
0x06A33FCC: f65702a9  stp x22, x21, [sp, #0x20]
0x06A33FD0: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A33FD4: b59700f0  adrp x21, #0x7d2a000
0x06A33FD8: a86a5539  ldrb w8, [x21, #0x55a]
0x06A33FDC: f30301aa  mov x19, x1
0x06A33FE0: f40300aa  mov x20, x0
0x06A33FE4: c8000037  tbnz w8, #0, #0x6a33ffc
0x06A33FE8: a06600d0  adrp x0, #0x7709000
0x06A33FEC: 009040f9  ldr x0, [x0, #0x120]
0x06A33FF0: 8a321d97  bl #0x3180a18
0x06A33FF4: 28008052  movz w8, #0x1
0x06A33FF8: a86a1539  strb w8, [x21, #0x55a]
0x06A33FFC: b86600d0  adrp x24, #0x7709000
0x06A34000: 958e45f8  ldr x21, [x20, #0x58]!
0x06A34004: d4691e14  b #0x71ce754
0x06A34008: e00315aa  mov x0, x21
0x06A3400C: e10313aa  mov x1, x19
0x06A34010: e2031faa  mov x2, xzr
0x06A34014: c3a6b297  bl #0x56ddb20
0x06A34018: 000100b4  cbz x0, #0x6a34038
0x06A3401C: 170340f9  ldr x23, [x24]
0x06A34020: f60300aa  mov x22, x0
0x06A34024: e10317aa  mov x1, x23
0x06A34028: da321d97  bl #0x3180b90
0x06A3402C: e10300aa  mov x1, x0
0x06A34030: 600000b5  cbnz x0, #0x6a3403c
0x06A34034: 0d000014  b #0x6a34068
0x06A34038: e1031faa  mov x1, xzr
0x06A3403C: e00314aa  mov x0, x20
0x06A34040: e20315aa  mov x2, x21
0x06A34044: 3fa41e97  bl #0x31dd140
0x06A34048: bf0200eb  cmp x21, x0
0x06A3404C: f50300aa  mov x21, x0
0x06A34050: c1fdff54  b.ne #0x6a34008
0x06A34054: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A34058: f65742a9  ldp x22, x21, [sp, #0x20]
0x06A3405C: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06A34060: fe0744f8  ldr x30, [sp], #0x40
0x06A34064: c0035fd6  ret
0x06A34068: e00316aa  mov x0, x22
0x06A3406C: e10317aa  mov x1, x23
0x06A34070: f6331d97  bl #0x3181048

; RVA 0x6A341F4 | public void remove_ItemAdded(Action<IBoardItemView> value) { }
; bytes=176 sha256=c2f112a6267ad44176a6848180a65b2cb4e4ce9c36e37a5064cf80690108f465 status=arm64_complete_bound indexed_start=True
0x06A341F4: fe0f1cf8  str x30, [sp, #-0x40]!
0x06A341F8: f85f01a9  stp x24, x23, [sp, #0x10]
0x06A341FC: f65702a9  stp x22, x21, [sp, #0x20]
0x06A34200: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A34204: b59700d0  adrp x21, #0x7d2a000
0x06A34208: a86e5539  ldrb w8, [x21, #0x55b]
0x06A3420C: f30301aa  mov x19, x1
0x06A34210: f40300aa  mov x20, x0
0x06A34214: c8000037  tbnz w8, #0, #0x6a3422c
0x06A34218: a06600b0  adrp x0, #0x7709000
0x06A3421C: 009040f9  ldr x0, [x0, #0x120]
0x06A34220: fe311d97  bl #0x3180a18
0x06A34224: 28008052  movz w8, #0x1
0x06A34228: a86e1539  strb w8, [x21, #0x55b]
0x06A3422C: b86600b0  adrp x24, #0x7709000
0x06A34230: 958e45f8  ldr x21, [x20, #0x58]!
0x06A34234: 189340f9  ldr x24, [x24, #0x120]
0x06A34238: e00315aa  mov x0, x21
0x06A3423C: e10313aa  mov x1, x19
0x06A34240: e2031faa  mov x2, xzr
0x06A34244: b5a6b297  bl #0x56ddd18
0x06A34248: 000100b4  cbz x0, #0x6a34268
0x06A3424C: 170340f9  ldr x23, [x24]
0x06A34250: f60300aa  mov x22, x0
0x06A34254: e10317aa  mov x1, x23
0x06A34258: 4e321d97  bl #0x3180b90
0x06A3425C: e10300aa  mov x1, x0
0x06A34260: 600000b5  cbnz x0, #0x6a3426c
0x06A34264: 0d000014  b #0x6a34298
0x06A34268: e1031faa  mov x1, xzr
0x06A3426C: e00314aa  mov x0, x20
0x06A34270: e20315aa  mov x2, x21
0x06A34274: b3a31e97  bl #0x31dd140
0x06A34278: bf0200eb  cmp x21, x0
0x06A3427C: f50300aa  mov x21, x0
0x06A34280: c1fdff54  b.ne #0x6a34238
0x06A34284: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A34288: f65742a9  ldp x22, x21, [sp, #0x20]
0x06A3428C: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06A34290: fe0744f8  ldr x30, [sp], #0x40
0x06A34294: c0035fd6  ret
0x06A34298: e00316aa  mov x0, x22
0x06A3429C: e10317aa  mov x1, x23
0x06A342A0: 6a331d97  bl #0x3181048

; RVA 0x6A34074 | public void add_ItemRemoved(Action<IBoardItemView> value) { }
; bytes=176 sha256=7132efb5fe51c33716e172ff1a578825aac34ffe76e25bfa4b274bd0bf2f2ec1 status=arm64_complete_bound indexed_start=True
0x06A34074: fe0f1cf8  str x30, [sp, #-0x40]!
0x06A34078: f85f01a9  stp x24, x23, [sp, #0x10]
0x06A3407C: f65702a9  stp x22, x21, [sp, #0x20]
0x06A34080: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A34084: b59700d0  adrp x21, #0x7d2a000
0x06A34088: a8725539  ldrb w8, [x21, #0x55c]
0x06A3408C: f30301aa  mov x19, x1
0x06A34090: f40300aa  mov x20, x0
0x06A34094: c8000037  tbnz w8, #0, #0x6a340ac
0x06A34098: a06600b0  adrp x0, #0x7709000
0x06A3409C: 009040f9  ldr x0, [x0, #0x120]
0x06A340A0: 5e321d97  bl #0x3180a18
0x06A340A4: 28008052  movz w8, #0x1
0x06A340A8: a8721539  strb w8, [x21, #0x55c]
0x06A340AC: b86600b0  adrp x24, #0x7709000
0x06A340B0: 950e46f8  ldr x21, [x20, #0x60]!
0x06A340B4: 189340f9  ldr x24, [x24, #0x120]
0x06A340B8: e00315aa  mov x0, x21
0x06A340BC: e10313aa  mov x1, x19
0x06A340C0: e2031faa  mov x2, xzr
0x06A340C4: 97a6b297  bl #0x56ddb20
0x06A340C8: 000100b4  cbz x0, #0x6a340e8
0x06A340CC: 170340f9  ldr x23, [x24]
0x06A340D0: f60300aa  mov x22, x0
0x06A340D4: e10317aa  mov x1, x23
0x06A340D8: ae321d97  bl #0x3180b90
0x06A340DC: e10300aa  mov x1, x0
0x06A340E0: 600000b5  cbnz x0, #0x6a340ec
0x06A340E4: 0d000014  b #0x6a34118
0x06A340E8: e1031faa  mov x1, xzr
0x06A340EC: e00314aa  mov x0, x20
0x06A340F0: e20315aa  mov x2, x21
0x06A340F4: 13a41e97  bl #0x31dd140
0x06A340F8: bf0200eb  cmp x21, x0
0x06A340FC: f50300aa  mov x21, x0
0x06A34100: c1fdff54  b.ne #0x6a340b8
0x06A34104: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A34108: f65742a9  ldp x22, x21, [sp, #0x20]
0x06A3410C: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06A34110: fe0744f8  ldr x30, [sp], #0x40
0x06A34114: c0035fd6  ret
0x06A34118: e00316aa  mov x0, x22
0x06A3411C: e10317aa  mov x1, x23
0x06A34120: ca331d97  bl #0x3181048

; RVA 0x6A342A4 | public void remove_ItemRemoved(Action<IBoardItemView> value) { }
; bytes=176 sha256=30afcc9636d3e1315a964cef06eb1665b880db3c15a867dabcf8c14d8e198525 status=arm64_complete_bound indexed_start=True
0x06A342A4: fe0f1cf8  str x30, [sp, #-0x40]!
0x06A342A8: f85f01a9  stp x24, x23, [sp, #0x10]
0x06A342AC: f65702a9  stp x22, x21, [sp, #0x20]
0x06A342B0: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A342B4: b59700d0  adrp x21, #0x7d2a000
0x06A342B8: a8765539  ldrb w8, [x21, #0x55d]
0x06A342BC: f30301aa  mov x19, x1
0x06A342C0: f40300aa  mov x20, x0
0x06A342C4: c8000037  tbnz w8, #0, #0x6a342dc
0x06A342C8: a06600b0  adrp x0, #0x7709000
0x06A342CC: 009040f9  ldr x0, [x0, #0x120]
0x06A342D0: d2311d97  bl #0x3180a18
0x06A342D4: 28008052  movz w8, #0x1
0x06A342D8: a8761539  strb w8, [x21, #0x55d]
0x06A342DC: b86600b0  adrp x24, #0x7709000
0x06A342E0: 950e46f8  ldr x21, [x20, #0x60]!
0x06A342E4: 189340f9  ldr x24, [x24, #0x120]
0x06A342E8: e00315aa  mov x0, x21
0x06A342EC: e10313aa  mov x1, x19
0x06A342F0: e2031faa  mov x2, xzr
0x06A342F4: 89a6b297  bl #0x56ddd18
0x06A342F8: 000100b4  cbz x0, #0x6a34318
0x06A342FC: 170340f9  ldr x23, [x24]
0x06A34300: f60300aa  mov x22, x0
0x06A34304: e10317aa  mov x1, x23
0x06A34308: 22321d97  bl #0x3180b90
0x06A3430C: e10300aa  mov x1, x0
0x06A34310: 600000b5  cbnz x0, #0x6a3431c
0x06A34314: 0d000014  b #0x6a34348
0x06A34318: e1031faa  mov x1, xzr
0x06A3431C: e00314aa  mov x0, x20
0x06A34320: e20315aa  mov x2, x21
0x06A34324: 87a31e97  bl #0x31dd140
0x06A34328: bf0200eb  cmp x21, x0
0x06A3432C: f50300aa  mov x21, x0
0x06A34330: c1fdff54  b.ne #0x6a342e8
0x06A34334: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A34338: f65742a9  ldp x22, x21, [sp, #0x20]
0x06A3433C: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06A34340: fe0744f8  ldr x30, [sp], #0x40
0x06A34344: c0035fd6  ret
0x06A34348: e00316aa  mov x0, x22
0x06A3434C: e10317aa  mov x1, x23
0x06A34350: 3e331d97  bl #0x3181048

; RVA 0x6A38260 | public void Initialize() { }
; bytes=48 sha256=f29049afd7e6e44121f7f11aa7874a445d2f80de5755e8e928adae63cef52137 status=arm64_complete_bound indexed_start=True
0x06A38260: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x06A38264: 08404139  ldrb w8, [x0, #0x50]
0x06A38268: f30300aa  mov x19, x0
0x06A3826C: 88000035  cbnz w8, #0x6a3827c
0x06A38270: 601e40f9  ldr x0, [x19, #0x38]
0x06A38274: c00000b4  cbz x0, #0x6a3828c
0x06A38278: 62310094  bl #0x6a44800
0x06A3827C: 28008052  movz w8, #0x1
0x06A38280: 68420139  strb w8, [x19, #0x50]
0x06A38284: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x06A38288: c0035fd6  ret
0x06A3828C: 88221d97  bl #0x3180cac

; RVA 0x6A3A948 | public IBoardItemView AddBoardItem(int index, Entity entity) { }
; bytes=448 sha256=f9d122157ad3f146df4b61108aae39410c2942322b76405b0c64ea494f827d31 status=arm64_complete_bound indexed_start=True
0x06A3A948: fe67bca9  stp x30, x25, [sp, #-0x40]!
0x06A3A94C: f85f01a9  stp x24, x23, [sp, #0x10]
0x06A3A950: f65702a9  stp x22, x21, [sp, #0x20]
0x06A3A954: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A3A958: 96970090  adrp x22, #0x7d2a000
0x06A3A95C: c87a5539  ldrb w8, [x22, #0x55e]
0x06A3A960: f50302aa  mov x21, x2
0x06A3A964: f303012a  mov w19, w1
0x06A3A968: f40300aa  mov x20, x0
0x06A3A96C: 88010037  tbnz w8, #0, #0x6a3a99c
0x06A3A970: 606600f0  adrp x0, #0x7709000
0x06A3A974: 007042f9  ldr x0, [x0, #0x4e0]
0x06A3A978: 28181d97  bl #0x3180a18
0x06A3A97C: 206400d0  adrp x0, #0x76c0000
0x06A3A980: 002c44f9  ldr x0, [x0, #0x858]
0x06A3A984: 25181d97  bl #0x3180a18
0x06A3A988: a06700b0  adrp x0, #0x772f000
0x06A3A98C: 00b043f9  ldr x0, [x0, #0x760]
0x06A3A990: 22181d97  bl #0x3180a18
0x06A3A994: 28008052  movz w8, #0x1
0x06A3A998: c87a1539  strb w8, [x22, #0x55e]
0x06A3A99C: 801a40f9  ldr x0, [x20, #0x30]
0x06A3A9A0: 200b00b4  cbz x0, #0x6a3ab04
0x06A3A9A4: 21008052  movz w1, #0x1
0x06A3A9A8: e2031faa  mov x2, xzr
0x06A3A9AC: d473f897  bl #0x68578fc
0x06A3A9B0: a00a00b4  cbz x0, #0x6a3ab04
0x06A3A9B4: 686600f0  adrp x8, #0x7709000
0x06A3A9B8: 087142f9  ldr x8, [x8, #0x4e0]
0x06A3A9BC: f70300aa  mov x23, x0
0x06A3A9C0: 010140f9  ldr x1, [x8]
0x06A3A9C4: d53a4a97  bl #0x3cc9518
0x06A3A9C8: f60300aa  mov x22, x0
0x06A3A9CC: e00317aa  mov x0, x23
0x06A3A9D0: e1031faa  mov x1, xzr
0x06A3A9D4: d7911294  bl #0x6edf130
0x06A3A9D8: 881640f9  ldr x8, [x20, #0x28]
0x06A3A9DC: 480900b4  cbz x8, #0x6a3ab04
0x06A3A9E0: f70300aa  mov x23, x0
0x06A3A9E4: e00308aa  mov x0, x8
0x06A3A9E8: e103132a  mov w1, w19
0x06A3A9EC: 3fdcff97  bl #0x6a31ae8
0x06A3A9F0: a00800b4  cbz x0, #0x6a3ab04
0x06A3A9F4: e1031faa  mov x1, xzr
0x06A3A9F8: ccbf1294  bl #0x6eea928
0x06A3A9FC: 570800b4  cbz x23, #0x6a3ab04
0x06A3AA00: e00317aa  mov x0, x23
0x06A3AA04: e1031faa  mov x1, xzr
0x06A3AA08: f0bf1294  bl #0x6eea9c8
0x06A3AA0C: 801640f9  ldr x0, [x20, #0x28]
0x06A3AA10: a00700b4  cbz x0, #0x6a3ab04
0x06A3AA14: e10315aa  mov x1, x21
0x06A3AA18: 0adcff97  bl #0x6a31a40
0x06A3AA1C: 881e40f9  ldr x8, [x20, #0x38]
0x06A3AA20: 280700b4  cbz x8, #0x6a3ab04
0x06A3AA24: f70300aa  mov x23, x0
0x06A3AA28: e00308aa  mov x0, x8
0x06A3AA2C: 1b270094  bl #0x6a44698
0x06A3AA30: 881e40f9  ldr x8, [x20, #0x38]
0x06A3AA34: 880600b4  cbz x8, #0x6a3ab04
0x06A3AA38: f80300aa  mov x24, x0
0x06A3AA3C: e00308aa  mov x0, x8
0x06A3AA40: 32270094  bl #0x6a44708
0x06A3AA44: 160600b4  cbz x22, #0x6a3ab04
0x06A3AA48: 2a6400d0  adrp x10, #0x76c0000
0x06A3AA4C: c80240f9  ldr x8, [x22]
0x06A3AA50: 4a2d44f9  ldr x10, [x10, #0x858]
0x06A3AA54: f90300aa  mov x25, x0
0x06A3AA58: 095d4279  ldrh w9, [x8, #0x12e]
0x06A3AA5C: 410140f9  ldr x1, [x10]
0x06A3AA60: 290100b4  cbz x9, #0x6a3aa84
0x06A3AA64: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A3AA68: 4a210091  add x10, x10, #8
0x06A3AA6C: 4b815ff8  ldur x11, [x10, #-8]
0x06A3AA70: 7f0101eb  cmp x11, x1
0x06A3AA74: 00010054  b.eq #0x6a3aa94
0x06A3AA78: 290500f1  subs x9, x9, #1
0x06A3AA7C: 4a410091  add x10, x10, #0x10
0x06A3AA80: 61ffff54  b.ne #0x6a3aa6c
0x06A3AA84: 82028052  movz w2, #0x14
0x06A3AA88: e00316aa  mov x0, x22
0x06A3AA8C: 21701c97  bl #0x3156b10
0x06A3AA90: 05000014  b #0x6a3aaa4
0x06A3AA94: 490140b9  ldr w9, [x10]
0x06A3AA98: 29510011  add w9, w9, #0x14
0x06A3AA9C: 08d1298b  add x8, x8, w9, sxtw #4
0x06A3AAA0: 00e10491  add x0, x8, #0x138
0x06A3AAA4: 081040a9  ldp x8, x4, [x0]
0x06A3AAA8: e00316aa  mov x0, x22
0x06A3AAAC: e10317aa  mov x1, x23
0x06A3AAB0: e20318aa  mov x2, x24
0x06A3AAB4: e30319aa  mov x3, x25
0x06A3AAB8: 00013fd6  blr x8
0x06A3AABC: 801e40f9  ldr x0, [x20, #0x38]
0x06A3AAC0: 200200b4  cbz x0, #0x6a3ab04
0x06A3AAC4: e10316aa  mov x1, x22
0x06A3AAC8: 22270094  bl #0x6a44750
0x06A3AACC: e00314aa  mov x0, x20
0x06A3AAD0: e10315aa  mov x1, x21
0x06A3AAD4: e20316aa  mov x2, x22
0x06A3AAD8: b1270094  bl #0x6a4499c
0x06A3AADC: e00314aa  mov x0, x20
0x06A3AAE0: e103132a  mov w1, w19
0x06A3AAE4: e20316aa  mov x2, x22
0x06A3AAE8: d3270094  bl #0x6a44a34
0x06A3AAEC: e00316aa  mov x0, x22
0x06A3AAF0: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A3AAF4: f65742a9  ldp x22, x21, [sp, #0x20]
0x06A3AAF8: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06A3AAFC: fe67c4a8  ldp x30, x25, [sp], #0x40
0x06A3AB00: c0035fd6  ret
0x06A3AB04: 6a181d97  bl #0x3180cac

; RVA 0x6A39214 | public bool IsItemExists(Entity entity) { }
; bytes=88 sha256=4d39ddbfde2cb3694aec482e92d5eb3262b6b18a1a57a231caa013ae56aab5b4 status=arm64_complete_bound indexed_start=True
0x06A39214: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A39218: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A3921C: 959700b0  adrp x21, #0x7d2a000
0x06A39220: a87e5539  ldrb w8, [x21, #0x55f]
0x06A39224: f30301aa  mov x19, x1
0x06A39228: f40300aa  mov x20, x0
0x06A3922C: c8000037  tbnz w8, #0, #0x6a39244
0x06A39230: a06700d0  adrp x0, #0x772f000
0x06A39234: 008443f9  ldr x0, [x0, #0x708]
0x06A39238: f81d1d97  bl #0x3180a18
0x06A3923C: 28008052  movz w8, #0x1
0x06A39240: a87e1539  strb w8, [x21, #0x55f]
0x06A39244: 802640f9  ldr x0, [x20, #0x48]
0x06A39248: 000100b4  cbz x0, #0x6a39268
0x06A3924C: a86700d0  adrp x8, #0x772f000
0x06A39250: 088543f9  ldr x8, [x8, #0x708]
0x06A39254: e10313aa  mov x1, x19
0x06A39258: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A3925C: 020140f9  ldr x2, [x8]
0x06A39260: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A39264: 43a79217  b #0x4ee2f70
0x06A39268: 911e1d97  bl #0x3180cac

; RVA 0x6A36FA4 | public IBoardItemView GetItemView(Entity entity) { }
; bytes=88 sha256=7bf3c94ad9dfe9bf63d59b9367c6285621edf21e571adf4612dbfe59ecea9593 status=arm64_complete_bound indexed_start=True
0x06A36FA4: fe0f1df8  str x30, [sp, #-0x30]!
0x06A36FA8: f65701a9  stp x22, x21, [sp, #0x10]
0x06A36FAC: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A36FB0: b6970090  adrp x22, #0x7d2a000
0x06A36FB4: d56700b0  adrp x21, #0x772f000
0x06A36FB8: c8825539  ldrb w8, [x22, #0x560]
0x06A36FBC: b50a43f9  ldr x21, [x21, #0x610]
0x06A36FC0: f30301aa  mov x19, x1
0x06A36FC4: f40300aa  mov x20, x0
0x06A36FC8: c8000037  tbnz w8, #0, #0x6a36fe0
0x06A36FCC: c06700b0  adrp x0, #0x772f000
0x06A36FD0: 000843f9  ldr x0, [x0, #0x610]
0x06A36FD4: 91261d97  bl #0x3180a18
0x06A36FD8: 28008052  movz w8, #0x1
0x06A36FDC: c8821539  strb w8, [x22, #0x560]
0x06A36FE0: 802640f9  ldr x0, [x20, #0x48]
0x06A36FE4: a20240f9  ldr x2, [x21]
0x06A36FE8: e10313aa  mov x1, x19
0x06A36FEC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A36FF0: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A36FF4: fe0743f8  ldr x30, [sp], #0x30
0x06A36FF8: 88ac4617  b #0x3be2218

; RVA 0x6A3A8B0 | public bool RemoveItem(Entity entity) { }
; bytes=152 sha256=66e07a39599cb31e9dac5396b2f0d3962e930778e70712c6b72965f25986b3a4 status=arm64_complete_bound indexed_start=True
0x06A3A8B0: ffc300d1  sub sp, sp, #0x30
0x06A3A8B4: fe5701a9  stp x30, x21, [sp, #0x10]
0x06A3A8B8: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A3A8BC: 95970090  adrp x21, #0x7d2a000
0x06A3A8C0: a8865539  ldrb w8, [x21, #0x561]
0x06A3A8C4: f40301aa  mov x20, x1
0x06A3A8C8: f30300aa  mov x19, x0
0x06A3A8CC: c8000037  tbnz w8, #0, #0x6a3a8e4
0x06A3A8D0: a06700b0  adrp x0, #0x772f000
0x06A3A8D4: 00ac43f9  ldr x0, [x0, #0x758]
0x06A3A8D8: 50181d97  bl #0x3180a18
0x06A3A8DC: 28008052  movz w8, #0x1
0x06A3A8E0: a8861539  strb w8, [x21, #0x561]
0x06A3A8E4: ff0700f9  str xzr, [sp, #8]
0x06A3A8E8: 602640f9  ldr x0, [x19, #0x48]
0x06A3A8EC: c00200b4  cbz x0, #0x6a3a944
0x06A3A8F0: a86700b0  adrp x8, #0x772f000
0x06A3A8F4: 08ad43f9  ldr x8, [x8, #0x758]
0x06A3A8F8: e2230091  add x2, sp, #8
0x06A3A8FC: e10314aa  mov x1, x20
0x06A3A900: 030140f9  ldr x3, [x8]
0x06A3A904: 21a79297  bl #0x4ee4588
0x06A3A908: 40010036  tbz w0, #0, #0x6a3a930
0x06A3A90C: 683240f9  ldr x8, [x19, #0x60]
0x06A3A910: c80000b4  cbz x8, #0x6a3a928
0x06A3A914: e10740f9  ldr x1, [sp, #8]
0x06A3A918: 090d40f9  ldr x9, [x8, #0x18]
0x06A3A91C: 002140f9  ldr x0, [x8, #0x40]
0x06A3A920: 021540f9  ldr x2, [x8, #0x28]
0x06A3A924: 20013fd6  blr x9
0x06A3A928: 20008052  movz w0, #0x1
0x06A3A92C: 02000014  b #0x6a3a934
0x06A3A930: e0031f2a  mov w0, wzr
0x06A3A934: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A3A938: fe5741a9  ldp x30, x21, [sp, #0x10]
0x06A3A93C: ffc30091  add sp, sp, #0x30
0x06A3A940: c0035fd6  ret
0x06A3A944: da181d97  bl #0x3180cac

; RVA 0x6A34628 | public IEnumerable<IBoardItemView> GetAllItemViews() { }
; bytes=80 sha256=02b52e5601408076c2ef801c8e70a322f1345e0e9a8fdd1922dd95ab7f2ef441 status=arm64_complete_bound indexed_start=True
0x06A34628: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A3462C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A34630: b49700d0  adrp x20, #0x7d2a000
0x06A34634: 888a5539  ldrb w8, [x20, #0x562]
0x06A34638: f30300aa  mov x19, x0
0x06A3463C: c8000037  tbnz w8, #0, #0x6a34654
0x06A34640: c06700f0  adrp x0, #0x772f000
0x06A34644: 005442f9  ldr x0, [x0, #0x4a8]
0x06A34648: f4301d97  bl #0x3180a18
0x06A3464C: 28008052  movz w8, #0x1
0x06A34650: 888a1539  strb w8, [x20, #0x562]
0x06A34654: 602640f9  ldr x0, [x19, #0x48]
0x06A34658: e00000b4  cbz x0, #0x6a34674
0x06A3465C: c86700f0  adrp x8, #0x772f000
0x06A34660: 085542f9  ldr x8, [x8, #0x4a8]
0x06A34664: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A34668: 010140f9  ldr x1, [x8]
0x06A3466C: fe0742f8  ldr x30, [sp], #0x20
0x06A34670: 4fb99217  b #0x4ee2bac
0x06A34674: 8e311d97  bl #0x3180cac

; RVA 0x6A44BC8 | public IEnumerable<KeyValuePair<Entity, IBoardItemView>> GetAllItems() { }
; bytes=8 sha256=62c64bd585db7a91917843362bb75aa8dd20b002bce4874891b0b3ec8fd242b9 status=arm64_complete_bound indexed_start=True
0x06A44BC8: 002440f9  ldr x0, [x0, #0x48]
0x06A44BCC: c0035fd6  ret

; RVA 0x6A34678 | public Entity GetEntityForItemView(IBoardItemView itemView) { }
; bytes=344 sha256=85cbd4020b8c19c57efceea32bf0ed93763674399917adb6f1f2cd7d663b57ff status=arm64_complete_bound indexed_start=True
0x06A34678: ff4301d1  sub sp, sp, #0x50
0x06A3467C: fe5703a9  stp x30, x21, [sp, #0x30]
0x06A34680: f44f04a9  stp x20, x19, [sp, #0x40]
0x06A34684: b59700d0  adrp x21, #0x7d2a000
0x06A34688: a88e5539  ldrb w8, [x21, #0x563]
0x06A3468C: f30301aa  mov x19, x1
0x06A34690: f40300aa  mov x20, x0
0x06A34694: a8020037  tbnz w8, #0, #0x6a346e8
0x06A34698: c06700f0  adrp x0, #0x772f000
0x06A3469C: 005842f9  ldr x0, [x0, #0x4b0]
0x06A346A0: de301d97  bl #0x3180a18
0x06A346A4: c06700f0  adrp x0, #0x772f000
0x06A346A8: 005c42f9  ldr x0, [x0, #0x4b8]
0x06A346AC: db301d97  bl #0x3180a18
0x06A346B0: c06700f0  adrp x0, #0x772f000
0x06A346B4: 006042f9  ldr x0, [x0, #0x4c0]
0x06A346B8: d8301d97  bl #0x3180a18
0x06A346BC: c06700f0  adrp x0, #0x772f000
0x06A346C0: 006442f9  ldr x0, [x0, #0x4c8]
0x06A346C4: d5301d97  bl #0x3180a18
0x06A346C8: 60640090  adrp x0, #0x76c0000
0x06A346CC: 005044f9  ldr x0, [x0, #0x8a0]
0x06A346D0: d2301d97  bl #0x3180a18
0x06A346D4: 60640090  adrp x0, #0x76c0000
0x06A346D8: 005444f9  ldr x0, [x0, #0x8a8]
0x06A346DC: cf301d97  bl #0x3180a18
0x06A346E0: 28008052  movz w8, #0x1
0x06A346E4: a88e1539  strb w8, [x21, #0x563]
0x06A346E8: 00e4006f  movi v0.2d, #0000000000000000
0x06A346EC: ff1300f9  str xzr, [sp, #0x20]
0x06A346F0: e00300ad  stp q0, q0, [sp]
0x06A346F4: 802640f9  ldr x0, [x20, #0x48]
0x06A346F8: 800300b4  cbz x0, #0x6a34768
0x06A346FC: c86700f0  adrp x8, #0x772f000
0x06A34700: 085942f9  ldr x8, [x8, #0x4b0]
0x06A34704: d46700f0  adrp x20, #0x772f000
0x06A34708: d56700f0  adrp x21, #0x772f000
0x06A3470C: 010140f9  ldr x1, [x8]
0x06A34710: 946242f9  ldr x20, [x20, #0x4c0]
0x06A34714: b55e42f9  ldr x21, [x21, #0x4b8]
0x06A34718: e8030091  mov x8, sp
0x06A3471C: a4ba9297  bl #0x4ee31ac
0x06A34720: 810240f9  ldr x1, [x20]
0x06A34724: e0030091  mov x0, sp
0x06A34728: 2aad9897  bl #0x505fbd0
0x06A3472C: c0000036  tbz w0, #0, #0x6a34744
0x06A34730: e80f40f9  ldr x8, [sp, #0x18]
0x06A34734: 1f0113eb  cmp x8, x19
0x06A34738: 41ffff54  b.ne #0x6a34720
0x06A3473C: f30b40f9  ldr x19, [sp, #0x10]
0x06A34740: 02000014  b #0x6a34748
0x06A34744: f3031faa  mov x19, xzr
0x06A34748: a10240f9  ldr x1, [x21]
0x06A3474C: e0030091  mov x0, sp
0x06A34750: 68ad9897  bl #0x505fcf0
0x06A34754: e00313aa  mov x0, x19
0x06A34758: f44f44a9  ldp x20, x19, [sp, #0x40]
0x06A3475C: fe5743a9  ldp x30, x21, [sp, #0x30]
0x06A34760: ff430191  add sp, sp, #0x50
0x06A34764: c0035fd6  ret
0x06A34768: 51311d97  bl #0x3180cac
0x06A3476C: 3f040071  cmp w1, #1
0x06A34770: f40300aa  mov x20, x0
0x06A34774: 61010054  b.ne #0x6a347a0
0x06A34778: e00314aa  mov x0, x20
0x06A3477C: 65681e94  bl #0x71ce910
0x06A34780: 130040f9  ldr x19, [x0]
0x06A34784: 67681e94  bl #0x71ce920
0x06A34788: a10240f9  ldr x1, [x21]
0x06A3478C: e0030091  mov x0, sp
0x06A34790: 58ad9897  bl #0x505fcf0
0x06A34794: 13feffb4  cbz x19, #0x6a34754
0x06A34798: e00313aa  mov x0, x19
0x06A3479C: 42311d97  bl #0x3180ca4
0x06A347A0: f3031faa  mov x19, xzr
0x06A347A4: 02000014  b #0x6a347ac
0x06A347A8: f40300aa  mov x20, x0
0x06A347AC: a10240f9  ldr x1, [x21]
0x06A347B0: e0030091  mov x0, sp
0x06A347B4: 4fad9897  bl #0x505fcf0
0x06A347B8: 730000b5  cbnz x19, #0x6a347c4
0x06A347BC: e00314aa  mov x0, x20
0x06A347C0: 66c42097  bl #0x3265958
0x06A347C4: e00313aa  mov x0, x19
0x06A347C8: 37311d97  bl #0x3180ca4
0x06A347CC: 52530f97  bl #0x2e09514

; RVA 0x6A4499C | private void AddItemView(Entity entity, IBoardItemView itemView) { }
; bytes=152 sha256=4f7e612f0b7e01f75bc06dc82d520fc444fcaaa49df0af52d2a07bde35a01d71 status=arm64_complete_bound indexed_start=True
0x06A4499C: fe0f1df8  str x30, [sp, #-0x30]!
0x06A449A0: f65701a9  stp x22, x21, [sp, #0x10]
0x06A449A4: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A449A8: 369700d0  adrp x22, #0x7d2a000
0x06A449AC: c8925539  ldrb w8, [x22, #0x564]
0x06A449B0: f30302aa  mov x19, x2
0x06A449B4: f50301aa  mov x21, x1
0x06A449B8: f40300aa  mov x20, x0
0x06A449BC: c8000037  tbnz w8, #0, #0x6a449d4
0x06A449C0: 406700f0  adrp x0, #0x772f000
0x06A449C4: 003045f9  ldr x0, [x0, #0xa60]
0x06A449C8: 14f01c97  bl #0x3180a18
0x06A449CC: 28008052  movz w8, #0x1
0x06A449D0: c8921539  strb w8, [x22, #0x564]
0x06A449D4: 730200b4  cbz x19, #0x6a44a20
0x06A449D8: 802640f9  ldr x0, [x20, #0x48]
0x06A449DC: a00200b4  cbz x0, #0x6a44a30
0x06A449E0: 486700f0  adrp x8, #0x772f000
0x06A449E4: 083145f9  ldr x8, [x8, #0xa60]
0x06A449E8: e10315aa  mov x1, x21
0x06A449EC: e20313aa  mov x2, x19
0x06A449F0: 030140f9  ldr x3, [x8]
0x06A449F4: dd789297  bl #0x4ee2d68
0x06A449F8: 882e40f9  ldr x8, [x20, #0x58]
0x06A449FC: 280100b4  cbz x8, #0x6a44a20
0x06A44A00: 030d40f9  ldr x3, [x8, #0x18]
0x06A44A04: 002140f9  ldr x0, [x8, #0x40]
0x06A44A08: 021540f9  ldr x2, [x8, #0x28]
0x06A44A0C: e10313aa  mov x1, x19
0x06A44A10: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A44A14: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A44A18: fe0743f8  ldr x30, [sp], #0x30
0x06A44A1C: 60001fd6  br x3
0x06A44A20: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A44A24: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A44A28: fe0743f8  ldr x30, [sp], #0x30
0x06A44A2C: c0035fd6  ret
0x06A44A30: 9ff01c97  bl #0x3180cac

; RVA 0x6A44A34 | private void CreateBlockerView(int index, IBoardItemView boardItemView) { }
; bytes=404 sha256=407a43368cd3c55be7318019da945308b8a29f533be17aef004111cf26637344 status=arm64_complete_bound indexed_start=True
0x06A44A34: fe0f1df8  str x30, [sp, #-0x30]!
0x06A44A38: f65701a9  stp x22, x21, [sp, #0x10]
0x06A44A3C: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A44A40: 369700d0  adrp x22, #0x7d2a000
0x06A44A44: c8965539  ldrb w8, [x22, #0x565]
0x06A44A48: f30302aa  mov x19, x2
0x06A44A4C: f503012a  mov w21, w1
0x06A44A50: f40300aa  mov x20, x0
0x06A44A54: 88010037  tbnz w8, #0, #0x6a44a84
0x06A44A58: 206600b0  adrp x0, #0x7709000
0x06A44A5C: 009c42f9  ldr x0, [x0, #0x538]
0x06A44A60: eeef1c97  bl #0x3180a18
0x06A44A64: 406000d0  adrp x0, #0x764e000
0x06A44A68: 007042f9  ldr x0, [x0, #0x4e0]
0x06A44A6C: ebef1c97  bl #0x3180a18
0x06A44A70: 406700f0  adrp x0, #0x772f000
0x06A44A74: 00b043f9  ldr x0, [x0, #0x760]
0x06A44A78: e8ef1c97  bl #0x3180a18
0x06A44A7C: 28008052  movz w8, #0x1
0x06A44A80: c8961539  strb w8, [x22, #0x565]
0x06A44A84: 801640f9  ldr x0, [x20, #0x28]
0x06A44A88: e00900b4  cbz x0, #0x6a44bc4
0x06A44A8C: e103152a  mov w1, w21
0x06A44A90: 40b4ff97  bl #0x6a31b90
0x06A44A94: 00090036  tbz w0, #0, #0x6a44bb4
0x06A44A98: 801640f9  ldr x0, [x20, #0x28]
0x06A44A9C: 400900b4  cbz x0, #0x6a44bc4
0x06A44AA0: e103152a  mov w1, w21
0x06A44AA4: 66b4ff97  bl #0x6a31c3c
0x06A44AA8: e00800b4  cbz x0, #0x6a44bc4
0x06A44AAC: 882240f9  ldr x8, [x20, #0x40]
0x06A44AB0: a80800b4  cbz x8, #0x6a44bc4
0x06A44AB4: 011040f9  ldr x1, [x0, #0x20]
0x06A44AB8: e00308aa  mov x0, x8
0x06A44ABC: 56bbff97  bl #0x6a33814
0x06A44AC0: 566000d0  adrp x22, #0x764e000
0x06A44AC4: d67242f9  ldr x22, [x22, #0x4e0]
0x06A44AC8: f40300aa  mov x20, x0
0x06A44ACC: c80240f9  ldr x8, [x22]
0x06A44AD0: 09e140b9  ldr w9, [x8, #0xe0]
0x06A44AD4: 69000035  cbnz w9, #0x6a44ae0
0x06A44AD8: e00308aa  mov x0, x8
0x06A44ADC: 2cf01c97  bl #0x3180b8c
0x06A44AE0: e00314aa  mov x0, x20
0x06A44AE4: e1031faa  mov x1, xzr
0x06A44AE8: 8d7a1294  bl #0x6ee351c
0x06A44AEC: 40060036  tbz w0, #0, #0x6a44bb4
0x06A44AF0: b30600b4  cbz x19, #0x6a44bc4
0x06A44AF4: 296600b0  adrp x9, #0x7709000
0x06A44AF8: 299d42f9  ldr x9, [x9, #0x538]
0x06A44AFC: 680240f9  ldr x8, [x19]
0x06A44B00: 350140f9  ldr x21, [x9]
0x06A44B04: 095d4279  ldrh w9, [x8, #0x12e]
0x06A44B08: a11240f9  ldr x1, [x21, #0x20]
0x06A44B0C: a2a24079  ldrh w2, [x21, #0x50]
0x06A44B10: 290100b4  cbz x9, #0x6a44b34
0x06A44B14: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A44B18: 4a210091  add x10, x10, #8
0x06A44B1C: 4b815ff8  ldur x11, [x10, #-8]
0x06A44B20: 7f0101eb  cmp x11, x1
0x06A44B24: e0000054  b.eq #0x6a44b40
0x06A44B28: 290500f1  subs x9, x9, #1
0x06A44B2C: 4a410091  add x10, x10, #0x10
0x06A44B30: 61ffff54  b.ne #0x6a44b1c
0x06A44B34: e00313aa  mov x0, x19
0x06A44B38: f6471c97  bl #0x3156b10
0x06A44B3C: 05000014  b #0x6a44b50
0x06A44B40: 490140b9  ldr w9, [x10]
0x06A44B44: 2901020b  add w9, w9, w2
0x06A44B48: 08d1298b  add x8, x8, w9, sxtw #4
0x06A44B4C: 00e10491  add x0, x8, #0x138
0x06A44B50: 000440f9  ldr x0, [x0, #8]
0x06A44B54: e10315aa  mov x1, x21
0x06A44B58: 0cf01c97  bl #0x3180b88
0x06A44B5C: 080440f9  ldr x8, [x0, #8]
0x06A44B60: e10300aa  mov x1, x0
0x06A44B64: e00313aa  mov x0, x19
0x06A44B68: 00013fd6  blr x8
0x06A44B6C: c80240f9  ldr x8, [x22]
0x06A44B70: f30300aa  mov x19, x0
0x06A44B74: 09e140b9  ldr w9, [x8, #0xe0]
0x06A44B78: 69000035  cbnz w9, #0x6a44b84
0x06A44B7C: e00308aa  mov x0, x8
0x06A44B80: 03f01c97  bl #0x3180b8c
0x06A44B84: e00313aa  mov x0, x19
0x06A44B88: e1031faa  mov x1, xzr
0x06A44B8C: 647a1294  bl #0x6ee351c
0x06A44B90: 20010036  tbz w0, #0, #0x6a44bb4
0x06A44B94: 930100b4  cbz x19, #0x6a44bc4
0x06A44B98: e00313aa  mov x0, x19
0x06A44B9C: e10314aa  mov x1, x20
0x06A44BA0: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A44BA4: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A44BA8: e2031faa  mov x2, xzr
0x06A44BAC: fe0743f8  ldr x30, [sp], #0x30
0x06A44BB0: c3d1f317  b #0x67392bc
0x06A44BB4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A44BB8: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A44BBC: fe0743f8  ldr x30, [sp], #0x30
0x06A44BC0: c0035fd6  ret
0x06A44BC4: 3af01c97  bl #0x3180cac

; RVA 0x6A44BD0 | public void .ctor() { }
; bytes=156 sha256=ce08b93362321c068e71b1ae7acdbbe96fa841045c62ac10b64883f3df0e3866 status=arm64_complete_bound indexed_start=True
0x06A44BD0: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x06A44BD4: f65701a9  stp x22, x21, [sp, #0x10]
0x06A44BD8: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A44BDC: 369700d0  adrp x22, #0x7d2a000
0x06A44BE0: 576700f0  adrp x23, #0x772f000
0x06A44BE4: 546700f0  adrp x20, #0x772f000
0x06A44BE8: 556700f0  adrp x21, #0x772f000
0x06A44BEC: c89a5539  ldrb w8, [x22, #0x566]
0x06A44BF0: f73645f9  ldr x23, [x23, #0xa68]
0x06A44BF4: 943a45f9  ldr x20, [x20, #0xa70]
0x06A44BF8: b53e45f9  ldr x21, [x21, #0xa78]
0x06A44BFC: f30300aa  mov x19, x0
0x06A44C00: 88010037  tbnz w8, #0, #0x6a44c30
0x06A44C04: 406700f0  adrp x0, #0x772f000
0x06A44C08: 003845f9  ldr x0, [x0, #0xa70]
0x06A44C0C: 83ef1c97  bl #0x3180a18
0x06A44C10: 406700f0  adrp x0, #0x772f000
0x06A44C14: 003445f9  ldr x0, [x0, #0xa68]
0x06A44C18: 80ef1c97  bl #0x3180a18
0x06A44C1C: 406700f0  adrp x0, #0x772f000
0x06A44C20: 003c45f9  ldr x0, [x0, #0xa78]
0x06A44C24: 7def1c97  bl #0x3180a18
0x06A44C28: 28008052  movz w8, #0x1
0x06A44C2C: c89a1539  strb w8, [x22, #0x566]
0x06A44C30: e00240f9  ldr x0, [x23]
0x06A44C34: 1bf01c97  bl #0x3180ca0
0x06A44C38: 810240f9  ldr x1, [x20]
0x06A44C3C: f40300aa  mov x20, x0
0x06A44C40: d9749297  bl #0x4ee1fa4
0x06A44C44: e00313aa  mov x0, x19
0x06A44C48: 148c04f8  str x20, [x0, #0x48]!
0x06A44C4C: e10314aa  mov x1, x20
0x06A44C50: 5def1c97  bl #0x31809c4
0x06A44C54: a10240f9  ldr x1, [x21]
0x06A44C58: e00313aa  mov x0, x19
0x06A44C5C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A44C60: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A44C64: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x06A44C68: 45b47b17  b #0x4931d7c

