; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25743 Merger.MergeBoard.Systems.InteractionCostSystem
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A6A9E0 | public void Tick(TickContext context) { }
; bytes=1312 sha256=54eafcfe6663a196299b0c58c9ec34805414812e57c60585232ee45ab9c7a795 status=arm64_complete_bound indexed_start=True
0x06A6A9E0: ffc307d1  sub sp, sp, #0x1f0
0x06A6A9E4: fd7b19a9  stp x29, x30, [sp, #0x190]
0x06A6A9E8: fc6f1aa9  stp x28, x27, [sp, #0x1a0]
0x06A6A9EC: fa671ba9  stp x26, x25, [sp, #0x1b0]
0x06A6A9F0: f85f1ca9  stp x24, x23, [sp, #0x1c0]
0x06A6A9F4: f6571da9  stp x22, x21, [sp, #0x1d0]
0x06A6A9F8: f44f1ea9  stp x20, x19, [sp, #0x1e0]
0x06A6A9FC: 48d03bd5  mrs x8, tpidr_el0
0x06A6AA00: e88300a9  stp x8, x0, [sp, #8]
0x06A6AA04: 081540f9  ldr x8, [x8, #0x28]
0x06A6AA08: 17960090  adrp x23, #0x7d2a000
0x06A6AA0C: 366600d0  adrp x22, #0x7730000
0x06A6AA10: 356600d0  adrp x21, #0x7730000
0x06A6AA14: e8c700f9  str x8, [sp, #0x188]
0x06A6AA18: 336600d0  adrp x19, #0x7730000
0x06A6AA1C: e8065b39  ldrb w8, [x23, #0x6c1]
0x06A6AA20: d65647f9  ldr x22, [x22, #0xea8]
0x06A6AA24: b55a47f9  ldr x21, [x21, #0xeb0]
0x06A6AA28: 735e47f9  ldr x19, [x19, #0xeb8]
0x06A6AA2C: f40301aa  mov x20, x1
0x06A6AA30: fb030391  add x27, sp, #0xc0
0x06A6AA34: c8030037  tbnz w8, #0, #0x6a6aaac
0x06A6AA38: 206600d0  adrp x0, #0x7730000
0x06A6AA3C: 005447f9  ldr x0, [x0, #0xea8]
0x06A6AA40: f6571c97  bl #0x3180a18
0x06A6AA44: 205f0090  adrp x0, #0x764e000
0x06A6AA48: 006444f9  ldr x0, [x0, #0x8c8]
0x06A6AA4C: f3571c97  bl #0x3180a18
0x06A6AA50: 206600d0  adrp x0, #0x7730000
0x06A6AA54: 006047f9  ldr x0, [x0, #0xec0]
0x06A6AA58: f0571c97  bl #0x3180a18
0x06A6AA5C: 206600d0  adrp x0, #0x7730000
0x06A6AA60: 006447f9  ldr x0, [x0, #0xec8]
0x06A6AA64: ed571c97  bl #0x3180a18
0x06A6AA68: 205f0090  adrp x0, #0x764e000
0x06A6AA6C: 007044f9  ldr x0, [x0, #0x8e0]
0x06A6AA70: ea571c97  bl #0x3180a18
0x06A6AA74: 206600d0  adrp x0, #0x7730000
0x06A6AA78: 006847f9  ldr x0, [x0, #0xed0]
0x06A6AA7C: e7571c97  bl #0x3180a18
0x06A6AA80: 206600d0  adrp x0, #0x7730000
0x06A6AA84: 005c47f9  ldr x0, [x0, #0xeb8]
0x06A6AA88: e4571c97  bl #0x3180a18
0x06A6AA8C: 206600d0  adrp x0, #0x7730000
0x06A6AA90: 005847f9  ldr x0, [x0, #0xeb0]
0x06A6AA94: e1571c97  bl #0x3180a18
0x06A6AA98: 206600d0  adrp x0, #0x7730000
0x06A6AA9C: 006c47f9  ldr x0, [x0, #0xed8]
0x06A6AAA0: de571c97  bl #0x3180a18
0x06A6AAA4: 28008052  movz w8, #0x1
0x06A6AAA8: e8061b39  strb w8, [x23, #0x6c1]
0x06A6AAAC: 00e4006f  movi v0.2d, #0000000000000000
0x06A6AAB0: 7ff30bf8  stur xzr, [x27, #0xbf]
0x06A6AAB4: 600301ad  stp q0, q0, [x27, #0x20]
0x06A6AAB8: 600305ad  stp q0, q0, [x27, #0xa0]
0x06A6AABC: 810240ad  ldp q1, q0, [x20]
0x06A6AAC0: c00240f9  ldr x0, [x22]
0x06A6AAC4: 610300ad  stp q1, q0, [x27]
0x06A6AAC8: cfbd4697  bl #0x3c1a204
0x06A6AACC: 600740ad  ldp q0, q1, [x27]
0x06A6AAD0: a30240f9  ldr x3, [x21]
0x06A6AAD4: e10300aa  mov x1, x0
0x06A6AAD8: e8c30491  add x8, sp, #0x130
0x06A6AADC: e0030291  add x0, sp, #0x80
0x06A6AAE0: e2031faa  mov x2, xzr
0x06A6AAE4: e00704ad  stp q0, q1, [sp, #0x80]
0x06A6AAE8: 5fea4b97  bl #0x3d65464
0x06A6AAEC: 608743ad  ldp q0, q1, [x27, #0x70]
0x06A6AAF0: 610240f9  ldr x1, [x19]
0x06A6AAF4: e0830391  add x0, sp, #0xe0
0x06A6AAF8: 600701ad  stp q0, q1, [x27, #0x20]
0x06A6AAFC: 6a856497  bl #0x438c0a4
0x06A6AB00: 601900b4  cbz x0, #0x6a6ae2c
0x06A6AB04: 2a6600d0  adrp x10, #0x7730000
0x06A6AB08: 080040f9  ldr x8, [x0]
0x06A6AB0C: 4a6147f9  ldr x10, [x10, #0xec0]
0x06A6AB10: f30300aa  mov x19, x0
0x06A6AB14: 095d4279  ldrh w9, [x8, #0x12e]
0x06A6AB18: 410140f9  ldr x1, [x10]
0x06A6AB1C: 290100b4  cbz x9, #0x6a6ab40
0x06A6AB20: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A6AB24: 4a210091  add x10, x10, #8
0x06A6AB28: 4b815ff8  ldur x11, [x10, #-8]
0x06A6AB2C: 7f0101eb  cmp x11, x1
0x06A6AB30: 00010054  b.eq #0x6a6ab50
0x06A6AB34: 290500f1  subs x9, x9, #1
0x06A6AB38: 4a410091  add x10, x10, #0x10
0x06A6AB3C: 61ffff54  b.ne #0x6a6ab28
0x06A6AB40: e00313aa  mov x0, x19
0x06A6AB44: e2031f2a  mov w2, wzr
0x06A6AB48: f2af1b97  bl #0x3156b10
0x06A6AB4C: 04000014  b #0x6a6ab5c
0x06A6AB50: 490180b9  ldrsw x9, [x10]
0x06A6AB54: 0811098b  add x8, x8, x9, lsl #4
0x06A6AB58: 00e10491  add x0, x8, #0x138
0x06A6AB5C: 080440a9  ldp x8, x1, [x0]
0x06A6AB60: e00313aa  mov x0, x19
0x06A6AB64: 00013fd6  blr x8
0x06A6AB68: f30300aa  mov x19, x0
0x06A6AB6C: 201600b4  cbz x0, #0x6a6ae30
0x06A6AB70: e8030291  add x8, sp, #0x80
0x06A6AB74: e9630091  add x9, sp, #0x18
0x06A6AB78: 1a650091  add x26, x8, #0x19
0x06A6AB7C: 150140b2  orr x21, x8, #1
0x06A6AB80: 3c0140b2  orr x28, x9, #1
0x06A6AB84: 680240f9  ldr x8, [x19]
0x06A6AB88: 2a5f0090  adrp x10, #0x764e000
0x06A6AB8C: 095d4279  ldrh w9, [x8, #0x12e]
0x06A6AB90: 4a7144f9  ldr x10, [x10, #0x8e0]
0x06A6AB94: 410140f9  ldr x1, [x10]
0x06A6AB98: 290100b4  cbz x9, #0x6a6abbc
0x06A6AB9C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A6ABA0: 4a210091  add x10, x10, #8
0x06A6ABA4: 4b815ff8  ldur x11, [x10, #-8]
0x06A6ABA8: 7f0101eb  cmp x11, x1
0x06A6ABAC: 00010054  b.eq #0x6a6abcc
0x06A6ABB0: 290500f1  subs x9, x9, #1
0x06A6ABB4: 4a410091  add x10, x10, #0x10
0x06A6ABB8: 61ffff54  b.ne #0x6a6aba4
0x06A6ABBC: e00313aa  mov x0, x19
0x06A6ABC0: e2031f2a  mov w2, wzr
0x06A6ABC4: d3af1b97  bl #0x3156b10
0x06A6ABC8: 04000014  b #0x6a6abd8
0x06A6ABCC: 490180b9  ldrsw x9, [x10]
0x06A6ABD0: 0811098b  add x8, x8, x9, lsl #4
0x06A6ABD4: 00e10491  add x0, x8, #0x138
0x06A6ABD8: 080440a9  ldp x8, x1, [x0]
0x06A6ABDC: e00313aa  mov x0, x19
0x06A6ABE0: 00013fd6  blr x8
0x06A6ABE4: 200d0036  tbz w0, #0, #0x6a6ad88
0x06A6ABE8: 680240f9  ldr x8, [x19]
0x06A6ABEC: 2a6600d0  adrp x10, #0x7730000
0x06A6ABF0: 095d4279  ldrh w9, [x8, #0x12e]
0x06A6ABF4: 4a6547f9  ldr x10, [x10, #0xec8]
0x06A6ABF8: 410140f9  ldr x1, [x10]
0x06A6ABFC: 290100b4  cbz x9, #0x6a6ac20
0x06A6AC00: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A6AC04: 4a210091  add x10, x10, #8
0x06A6AC08: 4b815ff8  ldur x11, [x10, #-8]
0x06A6AC0C: 7f0101eb  cmp x11, x1
0x06A6AC10: 00010054  b.eq #0x6a6ac30
0x06A6AC14: 290500f1  subs x9, x9, #1
0x06A6AC18: 4a410091  add x10, x10, #0x10
0x06A6AC1C: 61ffff54  b.ne #0x6a6ac08
0x06A6AC20: e00313aa  mov x0, x19
0x06A6AC24: e2031f2a  mov w2, wzr
0x06A6AC28: baaf1b97  bl #0x3156b10
0x06A6AC2C: 04000014  b #0x6a6ac3c
0x06A6AC30: 490180b9  ldrsw x9, [x10]
0x06A6AC34: 0811098b  add x8, x8, x9, lsl #4
0x06A6AC38: 00e10491  add x0, x8, #0x138
0x06A6AC3C: 090440a9  ldp x9, x1, [x0]
0x06A6AC40: e8030291  add x8, sp, #0x80
0x06A6AC44: e00313aa  mov x0, x19
0x06A6AC48: 20013fd6  blr x9
0x06A6AC4C: 400740ad  ldp q0, q1, [x26]
0x06A6AC50: 48f341f8  ldur x8, [x26, #0x1f]
0x06A6AC54: f65f48a9  ldp x22, x23, [sp, #0x80]
0x06A6AC58: f84b40f9  ldr x24, [sp, #0x90]
0x06A6AC5C: 6123803d  str q1, [x27, #0x80]
0x06A6AC60: 68f308f8  stur x8, [x27, #0x8f]
0x06A6AC64: 6123c03d  ldr q1, [x27, #0x80]
0x06A6AC68: fd634239  ldrb w29, [sp, #0x98]
0x06A6AC6C: 68f30bf8  stur x8, [x27, #0xbf]
0x06A6AC70: 600705ad  stp q0, q1, [x27, #0xa0]
0x06A6AC74: 97f80736  tbz w23, #0, #0x6a6ab84
0x06A6AC78: dd060036  tbz w29, #0, #0x6a6ad50
0x06A6AC7C: e80b40f9  ldr x8, [sp, #0x10]
0x06A6AC80: 600745ad  ldp q0, q1, [x27, #0xa0]
0x06A6AC84: 190940f9  ldr x25, [x8, #0x10]
0x06A6AC88: 68f34bf8  ldur x8, [x27, #0xbf]
0x06A6AC8C: 608703ad  stp q0, q1, [x27, #0x70]
0x06A6AC90: 68f308f8  stur x8, [x27, #0x8f]
0x06A6AC94: b90c00b4  cbz x25, #0x6a6ae28
0x06A6AC98: 608743ad  ldp q0, q1, [x27, #0x70]
0x06A6AC9C: 68f348f8  ldur x8, [x27, #0x8f]
0x06A6ACA0: 2a6600d0  adrp x10, #0x7730000
0x06A6ACA4: 600702ad  stp q0, q1, [x27, #0x40]
0x06A6ACA8: 68f305f8  stur x8, [x27, #0x5f]
0x06A6ACAC: 280340f9  ldr x8, [x25]
0x06A6ACB0: 095d4279  ldrh w9, [x8, #0x12e]
0x06A6ACB4: 4a6947f9  ldr x10, [x10, #0xed0]
0x06A6ACB8: 410140f9  ldr x1, [x10]
0x06A6ACBC: 290100b4  cbz x9, #0x6a6ace0
0x06A6ACC0: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A6ACC4: 4a210091  add x10, x10, #8
0x06A6ACC8: 4b815ff8  ldur x11, [x10, #-8]
0x06A6ACCC: 7f0101eb  cmp x11, x1
0x06A6ACD0: 00010054  b.eq #0x6a6acf0
0x06A6ACD4: 290500f1  subs x9, x9, #1
0x06A6ACD8: 4a410091  add x10, x10, #0x10
0x06A6ACDC: 61ffff54  b.ne #0x6a6acc8
0x06A6ACE0: 22008052  movz w2, #0x1
0x06A6ACE4: e00319aa  mov x0, x25
0x06A6ACE8: 8aaf1b97  bl #0x3156b10
0x06A6ACEC: 05000014  b #0x6a6ad00
0x06A6ACF0: 490140b9  ldr w9, [x10]
0x06A6ACF4: 29050011  add w9, w9, #1
0x06A6ACF8: 08d1298b  add x8, x8, w9, sxtw #4
0x06A6ACFC: 00e10491  add x0, x8, #0x138
0x06A6AD00: 68f345f8  ldur x8, [x27, #0x5f]
0x06A6AD04: 600742ad  ldp q0, q1, [x27, #0x40]
0x06A6AD08: 090040f9  ldr x9, [x0]
0x06A6AD0C: fd030239  strb w29, [sp, #0x80]
0x06A6AD10: a8f201f8  stur x8, [x21, #0x1f]
0x06A6AD14: a00600ad  stp q0, q1, [x21]
0x06A6AD18: 020440f9  ldr x2, [x0, #8]
0x06A6AD1C: e1030291  add x1, sp, #0x80
0x06A6AD20: e00319aa  mov x0, x25
0x06A6AD24: 20013fd6  blr x9
0x06A6AD28: 286600d0  adrp x8, #0x7730000
0x06A6AD2C: 810240ad  ldp q1, q0, [x20]
0x06A6AD30: 086d47f9  ldr x8, [x8, #0xed8]
0x06A6AD34: e10303ad  stp q1, q0, [sp, #0x60]
0x06A6AD38: 030140f9  ldr x3, [x8]
0x06A6AD3C: e10304ad  stp q1, q0, [sp, #0x80]
0x06A6AD40: e0030291  add x0, sp, #0x80
0x06A6AD44: e10316aa  mov x1, x22
0x06A6AD48: e2031faa  mov x2, xzr
0x06A6AD4C: 426c4d97  bl #0x3dc5e54
0x06A6AD50: 800640ad  ldp q0, q1, [x20]
0x06A6AD54: 68f34bf8  ldur x8, [x27, #0xbf]
0x06A6AD58: 620f45ad  ldp q2, q3, [x27, #0xa0]
0x06A6AD5C: fd630039  strb w29, [sp, #0x18]
0x06A6AD60: e00702ad  stp q0, q1, [sp, #0x40]
0x06A6AD64: 88f301f8  stur x8, [x28, #0x1f]
0x06A6AD68: 820f00ad  stp q2, q3, [x28]
0x06A6AD6C: e1030191  add x1, sp, #0x40
0x06A6AD70: e5630091  add x5, sp, #0x18
0x06A6AD74: e20316aa  mov x2, x22
0x06A6AD78: e30317aa  mov x3, x23
0x06A6AD7C: e40318aa  mov x4, x24
0x06A6AD80: 60000094  bl #0x6a6af00
0x06A6AD84: 80ffff17  b #0x6a6ab84
0x06A6AD88: f4031faa  mov x20, xzr
0x06A6AD8C: 330300b4  cbz x19, #0x6a6adf0
0x06A6AD90: 680240f9  ldr x8, [x19]
0x06A6AD94: 2a5f0090  adrp x10, #0x764e000
0x06A6AD98: 095d4279  ldrh w9, [x8, #0x12e]
0x06A6AD9C: 4a6544f9  ldr x10, [x10, #0x8c8]
0x06A6ADA0: 410140f9  ldr x1, [x10]
0x06A6ADA4: 290100b4  cbz x9, #0x6a6adc8
0x06A6ADA8: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A6ADAC: 4a210091  add x10, x10, #8
0x06A6ADB0: 4b815ff8  ldur x11, [x10, #-8]
0x06A6ADB4: 7f0101eb  cmp x11, x1
0x06A6ADB8: 00010054  b.eq #0x6a6add8
0x06A6ADBC: 290500f1  subs x9, x9, #1
0x06A6ADC0: 4a410091  add x10, x10, #0x10
0x06A6ADC4: 61ffff54  b.ne #0x6a6adb0
0x06A6ADC8: e00313aa  mov x0, x19
0x06A6ADCC: e2031f2a  mov w2, wzr
0x06A6ADD0: 50af1b97  bl #0x3156b10
0x06A6ADD4: 04000014  b #0x6a6ade4
0x06A6ADD8: 490180b9  ldrsw x9, [x10]
0x06A6ADDC: 0811098b  add x8, x8, x9, lsl #4
0x06A6ADE0: 00e10491  add x0, x8, #0x138
0x06A6ADE4: 080440a9  ldp x8, x1, [x0]
0x06A6ADE8: e00313aa  mov x0, x19
0x06A6ADEC: 00013fd6  blr x8
0x06A6ADF0: 340200b5  cbnz x20, #0x6a6ae34
0x06A6ADF4: e80740f9  ldr x8, [sp, #8]
0x06A6ADF8: 081540f9  ldr x8, [x8, #0x28]
0x06A6ADFC: e9c740f9  ldr x9, [sp, #0x188]
0x06A6AE00: 1f0109eb  cmp x8, x9
0x06A6AE04: c1010054  b.ne #0x6a6ae3c
0x06A6AE08: f44f5ea9  ldp x20, x19, [sp, #0x1e0]
0x06A6AE0C: f6575da9  ldp x22, x21, [sp, #0x1d0]
0x06A6AE10: f85f5ca9  ldp x24, x23, [sp, #0x1c0]
0x06A6AE14: fa675ba9  ldp x26, x25, [sp, #0x1b0]
0x06A6AE18: fc6f5aa9  ldp x28, x27, [sp, #0x1a0]
0x06A6AE1C: fd7b59a9  ldp x29, x30, [sp, #0x190]
0x06A6AE20: ffc30791  add sp, sp, #0x1f0
0x06A6AE24: c0035fd6  ret
0x06A6AE28: a1571c97  bl #0x3180cac
0x06A6AE2C: a0571c97  bl #0x3180cac
0x06A6AE30: 9f571c97  bl #0x3180cac
0x06A6AE34: e00314aa  mov x0, x20
0x06A6AE38: 9b571c97  bl #0x3180ca4
0x06A6AE3C: d58e1d94  bl #0x71ce990
0x06A6AE40: 06000014  b #0x6a6ae58
0x06A6AE44: 05000014  b #0x6a6ae58
0x06A6AE48: 04000014  b #0x6a6ae58
0x06A6AE4C: 03000014  b #0x6a6ae58
0x06A6AE50: 02000014  b #0x6a6ae58
0x06A6AE54: 01000014  b #0x6a6ae58
0x06A6AE58: f50300aa  mov x21, x0
0x06A6AE5C: 3f040071  cmp w1, #1
0x06A6AE60: c1000054  b.ne #0x6a6ae78
0x06A6AE64: e00315aa  mov x0, x21
0x06A6AE68: aa8e1d94  bl #0x71ce910
0x06A6AE6C: 140040f9  ldr x20, [x0]
0x06A6AE70: ac8e1d94  bl #0x71ce920
0x06A6AE74: c6ffff17  b #0x6a6ad8c
0x06A6AE78: f4031faa  mov x20, xzr
0x06A6AE7C: 02000014  b #0x6a6ae84
0x06A6AE80: f50300aa  mov x21, x0
0x06A6AE84: 330300b4  cbz x19, #0x6a6aee8
0x06A6AE88: 680240f9  ldr x8, [x19]
0x06A6AE8C: 2a5f0090  adrp x10, #0x764e000
0x06A6AE90: 095d4279  ldrh w9, [x8, #0x12e]
0x06A6AE94: 4a6544f9  ldr x10, [x10, #0x8c8]
0x06A6AE98: 410140f9  ldr x1, [x10]
0x06A6AE9C: 290100b4  cbz x9, #0x6a6aec0
0x06A6AEA0: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A6AEA4: 4a210091  add x10, x10, #8
0x06A6AEA8: 4b815ff8  ldur x11, [x10, #-8]
0x06A6AEAC: 7f0101eb  cmp x11, x1
0x06A6AEB0: 00010054  b.eq #0x6a6aed0
0x06A6AEB4: 290500f1  subs x9, x9, #1
0x06A6AEB8: 4a410091  add x10, x10, #0x10
0x06A6AEBC: 61ffff54  b.ne #0x6a6aea8
0x06A6AEC0: e00313aa  mov x0, x19
0x06A6AEC4: e2031f2a  mov w2, wzr
0x06A6AEC8: 12af1b97  bl #0x3156b10
0x06A6AECC: 04000014  b #0x6a6aedc
0x06A6AED0: 490180b9  ldrsw x9, [x10]
0x06A6AED4: 0811098b  add x8, x8, x9, lsl #4
0x06A6AED8: 00e10491  add x0, x8, #0x138
0x06A6AEDC: 080440a9  ldp x8, x1, [x0]
0x06A6AEE0: e00313aa  mov x0, x19
0x06A6AEE4: 00013fd6  blr x8
0x06A6AEE8: 740000b5  cbnz x20, #0x6a6aef4
0x06A6AEEC: e00315aa  mov x0, x21
0x06A6AEF0: 9aea1f97  bl #0x3265958
0x06A6AEF4: e00314aa  mov x0, x20
0x06A6AEF8: 6b571c97  bl #0x3180ca4
0x06A6AEFC: 86790e97  bl #0x2e09514

; RVA 0x6A6AF00 | private void ConsumeItems(TickContext context, Entity interactedEntity, PendingInteractionComponent pendingInteractionComponent, InteractionComponent interactionComponent) { }
; bytes=624 sha256=5cf863687b55778d20c296ce1b7023ec1b980191853a3ee471b3a09300449628 status=arm64_complete_bound indexed_start=True
0x06A6AF00: ff8302d1  sub sp, sp, #0xa0
0x06A6AF04: fe6706a9  stp x30, x25, [sp, #0x60]
0x06A6AF08: f85f07a9  stp x24, x23, [sp, #0x70]
0x06A6AF0C: f65708a9  stp x22, x21, [sp, #0x80]
0x06A6AF10: f44f09a9  stp x20, x19, [sp, #0x90]
0x06A6AF14: 18960090  adrp x24, #0x7d2a000
0x06A6AF18: 396600d0  adrp x25, #0x7730000
0x06A6AF1C: 080b5b39  ldrb w8, [x24, #0x6c2]
0x06A6AF20: 397347f9  ldr x25, [x25, #0xee0]
0x06A6AF24: f50305aa  mov x21, x5
0x06A6AF28: f70304aa  mov x23, x4
0x06A6AF2C: f60303aa  mov x22, x3
0x06A6AF30: f30302aa  mov x19, x2
0x06A6AF34: f40301aa  mov x20, x1
0x06A6AF38: c8030037  tbnz w8, #0, #0x6a6afb0
0x06A6AF3C: a06200d0  adrp x0, #0x76c0000
0x06A6AF40: 006447f9  ldr x0, [x0, #0xec8]
0x06A6AF44: b5561c97  bl #0x3180a18
0x06A6AF48: 80600090  adrp x0, #0x767a000
0x06A6AF4C: 004442f9  ldr x0, [x0, #0x488]
0x06A6AF50: b2561c97  bl #0x3180a18
0x06A6AF54: 206600d0  adrp x0, #0x7730000
0x06A6AF58: 007447f9  ldr x0, [x0, #0xee8]
0x06A6AF5C: af561c97  bl #0x3180a18
0x06A6AF60: 206600d0  adrp x0, #0x7730000
0x06A6AF64: 007847f9  ldr x0, [x0, #0xef0]
0x06A6AF68: ac561c97  bl #0x3180a18
0x06A6AF6C: a06200f0  adrp x0, #0x76c1000
0x06A6AF70: 00a046f9  ldr x0, [x0, #0xd40]
0x06A6AF74: a9561c97  bl #0x3180a18
0x06A6AF78: 206600d0  adrp x0, #0x7730000
0x06A6AF7C: 007c47f9  ldr x0, [x0, #0xef8]
0x06A6AF80: a6561c97  bl #0x3180a18
0x06A6AF84: 206600d0  adrp x0, #0x7730000
0x06A6AF88: 008047f9  ldr x0, [x0, #0xf00]
0x06A6AF8C: a3561c97  bl #0x3180a18
0x06A6AF90: 206600d0  adrp x0, #0x7730000
0x06A6AF94: 008447f9  ldr x0, [x0, #0xf08]
0x06A6AF98: a0561c97  bl #0x3180a18
0x06A6AF9C: 206600d0  adrp x0, #0x7730000
0x06A6AFA0: 007047f9  ldr x0, [x0, #0xee0]
0x06A6AFA4: 9d561c97  bl #0x3180a18
0x06A6AFA8: 28008052  movz w8, #0x1
0x06A6AFAC: 080b1b39  strb w8, [x24, #0x6c2]
0x06A6AFB0: 200340f9  ldr x0, [x25]
0x06A6AFB4: 3b571c97  bl #0x3180ca0
0x06A6AFB8: e1031faa  mov x1, xzr
0x06A6AFBC: f80300aa  mov x24, x0
0x06A6AFC0: 8fbdb197  bl #0x56da5fc
0x06A6AFC4: 580d00b4  cbz x24, #0x6a6b16c
0x06A6AFC8: f90318aa  mov x25, x24
0x06A6AFCC: 378f01f8  str x23, [x25, #0x18]!
0x06A6AFD0: e00319aa  mov x0, x25
0x06A6AFD4: e1031faa  mov x1, xzr
0x06A6AFD8: 36831ff8  stur x22, [x25, #-8]
0x06A6AFDC: 7a561c97  bl #0x31809c4
0x06A6AFE0: a8624039  ldrb w8, [x21, #0x18]
0x06A6AFE4: 880b0036  tbz w8, #0, #0x6a6b154
0x06A6AFE8: 200340f9  ldr x0, [x25]
0x06A6AFEC: e1031faa  mov x1, xzr
0x06A6AFF0: 9fdaf897  bl #0x68a1a6c
0x06A6AFF4: 000b0037  tbnz w0, #0, #0x6a6b154
0x06A6AFF8: e00314aa  mov x0, x20
0x06A6AFFC: e1031faa  mov x1, xzr
0x06A6B000: a0add297  bl #0x5f16680
0x06A6B004: a86200d0  adrp x8, #0x76c1000
0x06A6B008: 08a146f9  ldr x8, [x8, #0xd40]
0x06A6B00C: f50300aa  mov x21, x0
0x06A6B010: 080140f9  ldr x8, [x8]
0x06A6B014: e00308aa  mov x0, x8
0x06A6B018: 22571c97  bl #0x3180ca0
0x06A6B01C: 286600b0  adrp x8, #0x7730000
0x06A6B020: 088547f9  ldr x8, [x8, #0xf08]
0x06A6B024: e10318aa  mov x1, x24
0x06A6B028: e3031faa  mov x3, xzr
0x06A6B02C: f60300aa  mov x22, x0
0x06A6B030: 020140f9  ldr x2, [x8]
0x06A6B034: e2ab9f97  bl #0x5255fbc
0x06A6B038: 286600b0  adrp x8, #0x7730000
0x06A6B03C: 087947f9  ldr x8, [x8, #0xef0]
0x06A6B040: e00315aa  mov x0, x21
0x06A6B044: e10316aa  mov x1, x22
0x06A6B048: 020140f9  ldr x2, [x8]
0x06A6B04C: 405e4797  bl #0x3c4294c
0x06A6B050: e00800b4  cbz x0, #0x6a6b16c
0x06A6B054: b76200b0  adrp x23, #0x76c0000
0x06A6B058: f76647f9  ldr x23, [x23, #0xec8]
0x06A6B05C: f50300aa  mov x21, x0
0x06A6B060: e10240f9  ldr x1, [x23]
0x06A6B064: 8bbf4697  bl #0x3c1ae90
0x06A6B068: 330800b4  cbz x19, #0x6a6b16c
0x06A6B06C: e10240f9  ldr x1, [x23]
0x06A6B070: f60300aa  mov x22, x0
0x06A6B074: e00313aa  mov x0, x19
0x06A6B078: 86bf4697  bl #0x3c1ae90
0x06A6B07C: ff7f05a9  stp xzr, xzr, [sp, #0x50]
0x06A6B080: 686000f0  adrp x8, #0x767a000
0x06A6B084: 084542f9  ldr x8, [x8, #0x488]
0x06A6B088: f70300aa  mov x23, x0
0x06A6B08C: e00313aa  mov x0, x19
0x06A6B090: f75300b9  str w23, [sp, #0x50]
0x06A6B094: 010140f9  ldr x1, [x8]
0x06A6B098: e8430191  add x8, sp, #0x50
0x06A6B09C: 18210091  add x24, x8, #8
0x06A6B0A0: e8830091  add x8, sp, #0x20
0x06A6B0A4: 6bc04697  bl #0x3c1b250
0x06A6B0A8: e11340f9  ldr x1, [sp, #0x20]
0x06A6B0AC: e00318aa  mov x0, x24
0x06A6B0B0: e12f00f9  str x1, [sp, #0x58]
0x06A6B0B4: 44561c97  bl #0x31809c4
0x06A6B0B8: 286600b0  adrp x8, #0x7730000
0x06A6B0BC: e10b45a9  ldp x1, x2, [sp, #0x50]
0x06A6B0C0: 087547f9  ldr x8, [x8, #0xee8]
0x06A6B0C4: e00315aa  mov x0, x21
0x06A6B0C8: 030140f9  ldr x3, [x8]
0x06A6B0CC: 64c84697  bl #0x3c1d25c
0x06A6B0D0: 810240ad  ldp q1, q0, [x20]
0x06A6B0D4: e0030091  mov x0, sp
0x06A6B0D8: e10315aa  mov x1, x21
0x06A6B0DC: e2031faa  mov x2, xzr
0x06A6B0E0: e10300ad  stp q1, q0, [sp]
0x06A6B0E4: a2b70094  bl #0x6a98f6c
0x06A6B0E8: 286600b0  adrp x8, #0x7730000
0x06A6B0EC: 940a40f9  ldr x20, [x20, #0x10]
0x06A6B0F0: 087d47f9  ldr x8, [x8, #0xef8]
0x06A6B0F4: 000140f9  ldr x0, [x8]
0x06A6B0F8: ea561c97  bl #0x3180ca0
0x06A6B0FC: e1031faa  mov x1, xzr
0x06A6B100: f80300aa  mov x24, x0
0x06A6B104: aabd0094  bl #0x6a9a7ac
0x06A6B108: 380300b4  cbz x24, #0x6a6b16c
0x06A6B10C: e00318aa  mov x0, x24
0x06A6B110: 130c01f8  str x19, [x0, #0x10]!
0x06A6B114: e10313aa  mov x1, x19
0x06A6B118: 2b561c97  bl #0x31809c4
0x06A6B11C: f30318aa  mov x19, x24
0x06A6B120: 758e01f8  str x21, [x19, #0x18]!
0x06A6B124: e00313aa  mov x0, x19
0x06A6B128: e10315aa  mov x1, x21
0x06A6B12C: 760e00b9  str w22, [x19, #0xc]
0x06A6B130: 25561c97  bl #0x31809c4
0x06A6B134: 770a00b9  str w23, [x19, #8]
0x06A6B138: b40100b4  cbz x20, #0x6a6b16c
0x06A6B13C: 286600b0  adrp x8, #0x7730000
0x06A6B140: 088147f9  ldr x8, [x8, #0xf00]
0x06A6B144: e00314aa  mov x0, x20
0x06A6B148: e10318aa  mov x1, x24
0x06A6B14C: 020140f9  ldr x2, [x8]
0x06A6B150: a5604d97  bl #0x3dc33e4
0x06A6B154: f44f49a9  ldp x20, x19, [sp, #0x90]
0x06A6B158: f65748a9  ldp x22, x21, [sp, #0x80]
0x06A6B15C: f85f47a9  ldp x24, x23, [sp, #0x70]
0x06A6B160: fe6746a9  ldp x30, x25, [sp, #0x60]
0x06A6B164: ff830291  add sp, sp, #0xa0
0x06A6B168: c0035fd6  ret
0x06A6B16C: d0561c97  bl #0x3180cac

; RVA 0x6A6B178 | public void .ctor() { }
; bytes=8 sha256=c555d422ceee17af09dedbd949e3e7dafc2b61fdb151ed50cd48391d614a26f2 status=arm64_complete_bound indexed_start=True
0x06A6B178: e1031faa  mov x1, xzr
0x06A6B17C: 20bdb117  b #0x56da5fc

