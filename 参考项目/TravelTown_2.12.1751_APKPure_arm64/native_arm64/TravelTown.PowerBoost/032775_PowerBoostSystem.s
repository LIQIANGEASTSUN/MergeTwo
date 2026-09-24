; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 32775 Merger.MergeBoard.PowerBoost.Systems.PowerBoostSystem
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6ACCD30 | public void Tick(TickContext context) { }
; bytes=1316 sha256=f432b6fd514d8b4f933303fcfd0816531ee23f7a7010dc777301582b16322572 status=arm64_complete_bound indexed_start=True
0x06ACCD30: ff8306d1  sub sp, sp, #0x1a0
0x06ACCD34: fd7b15a9  stp x29, x30, [sp, #0x150]
0x06ACCD38: fa6716a9  stp x26, x25, [sp, #0x160]
0x06ACCD3C: f85f17a9  stp x24, x23, [sp, #0x170]
0x06ACCD40: f65718a9  stp x22, x21, [sp, #0x180]
0x06ACCD44: f44f19a9  stp x20, x19, [sp, #0x190]
0x06ACCD48: 56d03bd5  mrs x22, tpidr_el0
0x06ACCD4C: c81640f9  ldr x8, [x22, #0x28]
0x06ACCD50: f59200d0  adrp x21, #0x7d2a000
0x06ACCD54: f40301aa  mov x20, x1
0x06ACCD58: f30300aa  mov x19, x0
0x06ACCD5C: e8a700f9  str x8, [sp, #0x148]
0x06ACCD60: a8766939  ldrb w8, [x21, #0xa5d]
0x06ACCD64: a8050037  tbnz w8, #0, #0x6acce18
0x06ACCD68: 006300f0  adrp x0, #0x772f000
0x06ACCD6C: 002447f9  ldr x0, [x0, #0xe48]
0x06ACCD70: 2acf1a97  bl #0x3180a18
0x06ACCD74: 206300f0  adrp x0, #0x7733000
0x06ACCD78: 00f447f9  ldr x0, [x0, #0xfe8]
0x06ACCD7C: 27cf1a97  bl #0x3180a18
0x06ACCD80: 206300d0  adrp x0, #0x7732000
0x06ACCD84: 00cc41f9  ldr x0, [x0, #0x398]
0x06ACCD88: 24cf1a97  bl #0x3180a18
0x06ACCD8C: 006300f0  adrp x0, #0x772f000
0x06ACCD90: 003447f9  ldr x0, [x0, #0xe68]
0x06ACCD94: 21cf1a97  bl #0x3180a18
0x06ACCD98: 206300f0  adrp x0, #0x7733000
0x06ACCD9C: 00f847f9  ldr x0, [x0, #0xff0]
0x06ACCDA0: 1ecf1a97  bl #0x3180a18
0x06ACCDA4: 005c00d0  adrp x0, #0x764e000
0x06ACCDA8: 006444f9  ldr x0, [x0, #0x8c8]
0x06ACCDAC: 1bcf1a97  bl #0x3180a18
0x06ACCDB0: 206300f0  adrp x0, #0x7733000
0x06ACCDB4: 00fc47f9  ldr x0, [x0, #0xff8]
0x06ACCDB8: 18cf1a97  bl #0x3180a18
0x06ACCDBC: 40630090  adrp x0, #0x7734000
0x06ACCDC0: 000040f9  ldr x0, [x0]
0x06ACCDC4: 15cf1a97  bl #0x3180a18
0x06ACCDC8: 005c00d0  adrp x0, #0x764e000
0x06ACCDCC: 007044f9  ldr x0, [x0, #0x8e0]
0x06ACCDD0: 12cf1a97  bl #0x3180a18
0x06ACCDD4: 40630090  adrp x0, #0x7734000
0x06ACCDD8: 000440f9  ldr x0, [x0, #8]
0x06ACCDDC: 0fcf1a97  bl #0x3180a18
0x06ACCDE0: 40630090  adrp x0, #0x7734000
0x06ACCDE4: 000840f9  ldr x0, [x0, #0x10]
0x06ACCDE8: 0ccf1a97  bl #0x3180a18
0x06ACCDEC: 40630090  adrp x0, #0x7734000
0x06ACCDF0: 000c40f9  ldr x0, [x0, #0x18]
0x06ACCDF4: 09cf1a97  bl #0x3180a18
0x06ACCDF8: 40630090  adrp x0, #0x7734000
0x06ACCDFC: 001040f9  ldr x0, [x0, #0x20]
0x06ACCE00: 06cf1a97  bl #0x3180a18
0x06ACCE04: 40630090  adrp x0, #0x7734000
0x06ACCE08: 001440f9  ldr x0, [x0, #0x28]
0x06ACCE0C: 03cf1a97  bl #0x3180a18
0x06ACCE10: 28008052  movz w8, #0x1
0x06ACCE14: a8762939  strb w8, [x21, #0xa5d]
0x06ACCE18: 00e4006f  movi v0.2d, #0000000000000000
0x06ACCE1C: ff6f00f9  str xzr, [sp, #0xd8]
0x06ACCE20: e08305ad  stp q0, q0, [sp, #0xb0]
0x06ACCE24: 800640f9  ldr x0, [x20, #8]
0x06ACCE28: e01a00b4  cbz x0, #0x6acd184
0x06ACCE2C: 48630090  adrp x8, #0x7734000
0x06ACCE30: 081540f9  ldr x8, [x8, #0x28]
0x06ACCE34: e1630391  add x1, sp, #0xd8
0x06ACCE38: 020140f9  ldr x2, [x8]
0x06ACCE3C: 79e04b97  bl #0x3dc5020
0x06ACCE40: 80180036  tbz w0, #0, #0x6acd150
0x06ACCE44: 286300f0  adrp x8, #0x7733000
0x06ACCE48: 800640ad  ldp q0, q1, [x20]
0x06ACCE4C: 08f547f9  ldr x8, [x8, #0xfe8]
0x06ACCE50: e08704ad  stp q0, q1, [sp, #0x90]
0x06ACCE54: 000140f9  ldr x0, [x8]
0x06ACCE58: 0f374597  bl #0x3c1aa94
0x06ACCE5C: 086300f0  adrp x8, #0x772f000
0x06ACCE60: 083547f9  ldr x8, [x8, #0xe68]
0x06ACCE64: f40300aa  mov x20, x0
0x06ACCE68: 080140f9  ldr x8, [x8]
0x06ACCE6C: e00308aa  mov x0, x8
0x06ACCE70: 8ccf1a97  bl #0x3180ca0
0x06ACCE74: 086300f0  adrp x8, #0x772f000
0x06ACCE78: 082547f9  ldr x8, [x8, #0xe48]
0x06ACCE7C: e1031faa  mov x1, xzr
0x06ACCE80: e3031faa  mov x3, xzr
0x06ACCE84: f50300aa  mov x21, x0
0x06ACCE88: 020140f9  ldr x2, [x8]
0x06ACCE8C: 9f23d197  bl #0x5f15d08
0x06ACCE90: 48630090  adrp x8, #0x7734000
0x06ACCE94: 081140f9  ldr x8, [x8, #0x20]
0x06ACCE98: e08744ad  ldp q0, q1, [sp, #0x90]
0x06ACCE9C: e0030091  mov x0, sp
0x06ACCEA0: e10314aa  mov x1, x20
0x06ACCEA4: 030140f9  ldr x3, [x8]
0x06ACCEA8: e8030491  add x8, sp, #0x100
0x06ACCEAC: e20315aa  mov x2, x21
0x06ACCEB0: e00700ad  stp q0, q1, [sp]
0x06ACCEB4: 2c654a97  bl #0x3d66364
0x06ACCEB8: 286300f0  adrp x8, #0x7733000
0x06ACCEBC: e00748ad  ldp q0, q1, [sp, #0x100]
0x06ACCEC0: 08f947f9  ldr x8, [x8, #0xff0]
0x06ACCEC4: e08705ad  stp q0, q1, [sp, #0xb0]
0x06ACCEC8: 000140f9  ldr x0, [x8]
0x06ACCECC: 75cf1a97  bl #0x3180ca0
0x06ACCED0: 48630090  adrp x8, #0x7734000
0x06ACCED4: 080540f9  ldr x8, [x8, #8]
0x06ACCED8: e10313aa  mov x1, x19
0x06ACCEDC: e3031faa  mov x3, xzr
0x06ACCEE0: f40300aa  mov x20, x0
0x06ACCEE4: 020140f9  ldr x2, [x8]
0x06ACCEE8: 90139e97  bl #0x5251d28
0x06ACCEEC: 48630090  adrp x8, #0x7734000
0x06ACCEF0: 080d40f9  ldr x8, [x8, #0x18]
0x06ACCEF4: e0c30291  add x0, sp, #0xb0
0x06ACCEF8: e10314aa  mov x1, x20
0x06ACCEFC: 020140f9  ldr x2, [x8]
0x06ACCF00: e8030091  mov x8, sp
0x06ACCF04: 03236397  bl #0x4395b10
0x06ACCF08: 48630090  adrp x8, #0x7734000
0x06ACCF0C: e00740ad  ldp q0, q1, [sp]
0x06ACCF10: 080940f9  ldr x8, [x8, #0x10]
0x06ACCF14: e0c30291  add x0, sp, #0xb0
0x06ACCF18: e08705ad  stp q0, q1, [sp, #0xb0]
0x06ACCF1C: 010140f9  ldr x1, [x8]
0x06ACCF20: 12236397  bl #0x4395b68
0x06ACCF24: 001300b4  cbz x0, #0x6acd184
0x06ACCF28: 2a6300f0  adrp x10, #0x7733000
0x06ACCF2C: 080040f9  ldr x8, [x0]
0x06ACCF30: 4afd47f9  ldr x10, [x10, #0xff8]
0x06ACCF34: f30300aa  mov x19, x0
0x06ACCF38: 095d4279  ldrh w9, [x8, #0x12e]
0x06ACCF3C: 410140f9  ldr x1, [x10]
0x06ACCF40: 290100b4  cbz x9, #0x6accf64
0x06ACCF44: 0a5940f9  ldr x10, [x8, #0xb0]
0x06ACCF48: 4a210091  add x10, x10, #8
0x06ACCF4C: 4b815ff8  ldur x11, [x10, #-8]
0x06ACCF50: 7f0101eb  cmp x11, x1
0x06ACCF54: 00010054  b.eq #0x6accf74
0x06ACCF58: 290500f1  subs x9, x9, #1
0x06ACCF5C: 4a410091  add x10, x10, #0x10
0x06ACCF60: 61ffff54  b.ne #0x6accf4c
0x06ACCF64: e00313aa  mov x0, x19
0x06ACCF68: e2031f2a  mov w2, wzr
0x06ACCF6C: e9261a97  bl #0x3156b10
0x06ACCF70: 04000014  b #0x6accf80
0x06ACCF74: 490180b9  ldrsw x9, [x10]
0x06ACCF78: 0811098b  add x8, x8, x9, lsl #4
0x06ACCF7C: 00e10491  add x0, x8, #0x138
0x06ACCF80: 080440a9  ldp x8, x1, [x0]
0x06ACCF84: e00313aa  mov x0, x19
0x06ACCF88: 00013fd6  blr x8
0x06ACCF8C: f30300aa  mov x19, x0
0x06ACCF90: c00f00b4  cbz x0, #0x6acd188
0x06ACCF94: 155c00d0  adrp x21, #0x764e000
0x06ACCF98: 57630090  adrp x23, #0x7734000
0x06ACCF9C: 3a6300d0  adrp x26, #0x7732000
0x06ACCFA0: b57244f9  ldr x21, [x21, #0x8e0]
0x06ACCFA4: f70240f9  ldr x23, [x23]
0x06ACCFA8: 5acf41f9  ldr x26, [x26, #0x398]
0x06ACCFAC: e8030091  mov x8, sp
0x06ACCFB0: f4830391  add x20, sp, #0xe0
0x06ACCFB4: 18110191  add x24, x8, #0x44
0x06ACCFB8: 19310091  add x25, x8, #0xc
0x06ACCFBC: 680240f9  ldr x8, [x19]
0x06ACCFC0: a10240f9  ldr x1, [x21]
0x06ACCFC4: 095d4279  ldrh w9, [x8, #0x12e]
0x06ACCFC8: 290100b4  cbz x9, #0x6accfec
0x06ACCFCC: 0a5940f9  ldr x10, [x8, #0xb0]
0x06ACCFD0: 4a210091  add x10, x10, #8
0x06ACCFD4: 4b815ff8  ldur x11, [x10, #-8]
0x06ACCFD8: 7f0101eb  cmp x11, x1
0x06ACCFDC: 00010054  b.eq #0x6accffc
0x06ACCFE0: 290500f1  subs x9, x9, #1
0x06ACCFE4: 4a410091  add x10, x10, #0x10
0x06ACCFE8: 61ffff54  b.ne #0x6accfd4
0x06ACCFEC: e00313aa  mov x0, x19
0x06ACCFF0: e2031f2a  mov w2, wzr
0x06ACCFF4: c7261a97  bl #0x3156b10
0x06ACCFF8: 04000014  b #0x6acd008
0x06ACCFFC: 490180b9  ldrsw x9, [x10]
0x06ACD000: 0811098b  add x8, x8, x9, lsl #4
0x06ACD004: 00e10491  add x0, x8, #0x138
0x06ACD008: 080440a9  ldp x8, x1, [x0]
0x06ACD00C: e00313aa  mov x0, x19
0x06ACD010: 00013fd6  blr x8
0x06ACD014: 80060036  tbz w0, #0, #0x6acd0e4
0x06ACD018: 680240f9  ldr x8, [x19]
0x06ACD01C: e10240f9  ldr x1, [x23]
0x06ACD020: 095d4279  ldrh w9, [x8, #0x12e]
0x06ACD024: 290100b4  cbz x9, #0x6acd048
0x06ACD028: 0a5940f9  ldr x10, [x8, #0xb0]
0x06ACD02C: 4a210091  add x10, x10, #8
0x06ACD030: 4b815ff8  ldur x11, [x10, #-8]
0x06ACD034: 7f0101eb  cmp x11, x1
0x06ACD038: 00010054  b.eq #0x6acd058
0x06ACD03C: 290500f1  subs x9, x9, #1
0x06ACD040: 4a410091  add x10, x10, #0x10
0x06ACD044: 61ffff54  b.ne #0x6acd030
0x06ACD048: e00313aa  mov x0, x19
0x06ACD04C: e2031f2a  mov w2, wzr
0x06ACD050: b0261a97  bl #0x3156b10
0x06ACD054: 04000014  b #0x6acd064
0x06ACD058: 490180b9  ldrsw x9, [x10]
0x06ACD05C: 0811098b  add x8, x8, x9, lsl #4
0x06ACD060: 00e10491  add x0, x8, #0x138
0x06ACD064: 090440a9  ldp x9, x1, [x0]
0x06ACD068: e8030091  mov x8, sp
0x06ACD06C: e00313aa  mov x0, x19
0x06ACD070: 20013fd6  blr x9
0x06ACD074: 0003c03d  ldr q0, [x24]
0x06ACD078: 01c3c03c  ldur q1, [x24, #0xc]
0x06ACD07C: e96f40f9  ldr x9, [sp, #0xd8]
0x06ACD080: e00340f9  ldr x0, [sp]
0x06ACD084: e043803d  str q0, [sp, #0x100]
0x06ACD088: 81c2823c  stur q1, [x20, #0x2c]
0x06ACD08C: e043c03d  ldr q0, [sp, #0x100]
0x06ACD090: 81c2c23c  ldur q1, [x20, #0x2c]
0x06ACD094: e81f40f9  ldr x8, [sp, #0x38]
0x06ACD098: e04b803d  str q0, [sp, #0x120]
0x06ACD09C: 81c2843c  stur q1, [x20, #0x4c]
0x06ACD0A0: e90600b4  cbz x9, #0x6acd17c
0x06ACD0A4: e04bc03d  ldr q0, [sp, #0x120]
0x06ACD0A8: 81c2c43c  ldur q1, [x20, #0x4c]
0x06ACD0AC: 291140b9  ldr w9, [x9, #0x10]
0x06ACD0B0: e03b803d  str q0, [sp, #0xe0]
0x06ACD0B4: 81c2803c  stur q1, [x20, #0xc]
0x06ACD0B8: 400600b4  cbz x0, #0x6acd180
0x06ACD0BC: 80c2c03c  ldur q0, [x20, #0xc]
0x06ACD0C0: e13bc03d  ldr q1, [sp, #0xe0]
0x06ACD0C4: 420340f9  ldr x2, [x26]
0x06ACD0C8: e80300f9  str x8, [sp]
0x06ACD0CC: e90b00b9  str w9, [sp, #8]
0x06ACD0D0: 20c3803c  stur q0, [x25, #0xc]
0x06ACD0D4: 2103803d  str q1, [x25]
0x06ACD0D8: e1030091  mov x1, sp
0x06ACD0DC: 29404597  bl #0x3c1d180
0x06ACD0E0: b7ffff17  b #0x6accfbc
0x06ACD0E4: f4031faa  mov x20, xzr
0x06ACD0E8: 330300b4  cbz x19, #0x6acd14c
0x06ACD0EC: 0a5c00b0  adrp x10, #0x764e000
0x06ACD0F0: 680240f9  ldr x8, [x19]
0x06ACD0F4: 4a6544f9  ldr x10, [x10, #0x8c8]
0x06ACD0F8: 095d4279  ldrh w9, [x8, #0x12e]
0x06ACD0FC: 410140f9  ldr x1, [x10]
0x06ACD100: 290100b4  cbz x9, #0x6acd124
0x06ACD104: 0a5940f9  ldr x10, [x8, #0xb0]
0x06ACD108: 4a210091  add x10, x10, #8
0x06ACD10C: 4b815ff8  ldur x11, [x10, #-8]
0x06ACD110: 7f0101eb  cmp x11, x1
0x06ACD114: 00010054  b.eq #0x6acd134
0x06ACD118: 290500f1  subs x9, x9, #1
0x06ACD11C: 4a410091  add x10, x10, #0x10
0x06ACD120: 61ffff54  b.ne #0x6acd10c
0x06ACD124: e00313aa  mov x0, x19
0x06ACD128: e2031f2a  mov w2, wzr
0x06ACD12C: 79261a97  bl #0x3156b10
0x06ACD130: 04000014  b #0x6acd140
0x06ACD134: 490180b9  ldrsw x9, [x10]
0x06ACD138: 0811098b  add x8, x8, x9, lsl #4
0x06ACD13C: 00e10491  add x0, x8, #0x138
0x06ACD140: 080440a9  ldp x8, x1, [x0]
0x06ACD144: e00313aa  mov x0, x19
0x06ACD148: 00013fd6  blr x8
0x06ACD14C: 140200b5  cbnz x20, #0x6acd18c
0x06ACD150: c81640f9  ldr x8, [x22, #0x28]
0x06ACD154: e9a740f9  ldr x9, [sp, #0x148]
0x06ACD158: 1f0109eb  cmp x8, x9
0x06ACD15C: c1010054  b.ne #0x6acd194
0x06ACD160: f44f59a9  ldp x20, x19, [sp, #0x190]
0x06ACD164: f65758a9  ldp x22, x21, [sp, #0x180]
0x06ACD168: f85f57a9  ldp x24, x23, [sp, #0x170]
0x06ACD16C: fa6756a9  ldp x26, x25, [sp, #0x160]
0x06ACD170: fd7b55a9  ldp x29, x30, [sp, #0x150]
0x06ACD174: ff830691  add sp, sp, #0x1a0
0x06ACD178: c0035fd6  ret
0x06ACD17C: ccce1a97  bl #0x3180cac
0x06ACD180: cbce1a97  bl #0x3180cac
0x06ACD184: cace1a97  bl #0x3180cac
0x06ACD188: c9ce1a97  bl #0x3180cac
0x06ACD18C: e00314aa  mov x0, x20
0x06ACD190: c5ce1a97  bl #0x3180ca4
0x06ACD194: ff051c94  bl #0x71ce990
0x06ACD198: 05000014  b #0x6acd1ac
0x06ACD19C: 04000014  b #0x6acd1ac
0x06ACD1A0: 03000014  b #0x6acd1ac
0x06ACD1A4: 02000014  b #0x6acd1ac
0x06ACD1A8: 01000014  b #0x6acd1ac
0x06ACD1AC: f50300aa  mov x21, x0
0x06ACD1B0: 3f040071  cmp w1, #1
0x06ACD1B4: c1000054  b.ne #0x6acd1cc
0x06ACD1B8: e00315aa  mov x0, x21
0x06ACD1BC: d5051c94  bl #0x71ce910
0x06ACD1C0: 140040f9  ldr x20, [x0]
0x06ACD1C4: d7051c94  bl #0x71ce920
0x06ACD1C8: c8ffff17  b #0x6acd0e8
0x06ACD1CC: f4031faa  mov x20, xzr
0x06ACD1D0: 02000014  b #0x6acd1d8
0x06ACD1D4: f50300aa  mov x21, x0
0x06ACD1D8: 330300b4  cbz x19, #0x6acd23c
0x06ACD1DC: 0a5c00b0  adrp x10, #0x764e000
0x06ACD1E0: 680240f9  ldr x8, [x19]
0x06ACD1E4: 4a6544f9  ldr x10, [x10, #0x8c8]
0x06ACD1E8: 095d4279  ldrh w9, [x8, #0x12e]
0x06ACD1EC: 410140f9  ldr x1, [x10]
0x06ACD1F0: 290100b4  cbz x9, #0x6acd214
0x06ACD1F4: 0a5940f9  ldr x10, [x8, #0xb0]
0x06ACD1F8: 4a210091  add x10, x10, #8
0x06ACD1FC: 4b815ff8  ldur x11, [x10, #-8]
0x06ACD200: 7f0101eb  cmp x11, x1
0x06ACD204: 00010054  b.eq #0x6acd224
0x06ACD208: 290500f1  subs x9, x9, #1
0x06ACD20C: 4a410091  add x10, x10, #0x10
0x06ACD210: 61ffff54  b.ne #0x6acd1fc
0x06ACD214: e00313aa  mov x0, x19
0x06ACD218: e2031f2a  mov w2, wzr
0x06ACD21C: 3d261a97  bl #0x3156b10
0x06ACD220: 04000014  b #0x6acd230
0x06ACD224: 490180b9  ldrsw x9, [x10]
0x06ACD228: 0811098b  add x8, x8, x9, lsl #4
0x06ACD22C: 00e10491  add x0, x8, #0x138
0x06ACD230: 080440a9  ldp x8, x1, [x0]
0x06ACD234: e00313aa  mov x0, x19
0x06ACD238: 00013fd6  blr x8
0x06ACD23C: 740000b5  cbnz x20, #0x6acd248
0x06ACD240: e00315aa  mov x0, x21
0x06ACD244: c5611e97  bl #0x3265958
0x06ACD248: e00314aa  mov x0, x20
0x06ACD24C: 96ce1a97  bl #0x3180ca4
0x06ACD250: b1f00c97  bl #0x2e09514

; RVA 0x6ACD254 | public void .ctor() { }
; bytes=8 sha256=733dda8786bce6ede471435b2c1a15e2613700fa6ec7e1780a3355e1752ab13f status=arm64_complete_bound indexed_start=True
0x06ACD254: e1031faa  mov x1, xzr
0x06ACD258: e934b017  b #0x56da5fc

; RVA 0x6ACD25C | private bool <Tick>b__1_0(ValueTuple<Entity, IdComponent, InteractionComponent, BoardTilePositionComponent, ProducerComponent> entity) { }
; bytes=176 sha256=b9190301667048edd995bb1a0505d2c1efddeeab60f6f0ce97685a4b5997caf5 status=arm64_complete_bound indexed_start=True
0x06ACD25C: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06ACD260: f44f01a9  stp x20, x19, [sp, #0x10]
0x06ACD264: f59200b0  adrp x21, #0x7d2a000
0x06ACD268: a87a6939  ldrb w8, [x21, #0xa5e]
0x06ACD26C: f40301aa  mov x20, x1
0x06ACD270: f30300aa  mov x19, x0
0x06ACD274: c8000037  tbnz w8, #0, #0x6acd28c
0x06ACD278: 605d00b0  adrp x0, #0x767a000
0x06ACD27C: 00c842f9  ldr x0, [x0, #0x590]
0x06ACD280: e6cd1a97  bl #0x3180a18
0x06ACD284: 28008052  movz w8, #0x1
0x06ACD288: a87a2939  strb w8, [x21, #0xa5e]
0x06ACD28C: 730a40f9  ldr x19, [x19, #0x10]
0x06ACD290: d30300b4  cbz x19, #0x6acd308
0x06ACD294: 6a5d00b0  adrp x10, #0x767a000
0x06ACD298: 680240f9  ldr x8, [x19]
0x06ACD29C: 4ac942f9  ldr x10, [x10, #0x590]
0x06ACD2A0: 940640f9  ldr x20, [x20, #8]
0x06ACD2A4: 095d4279  ldrh w9, [x8, #0x12e]
0x06ACD2A8: 410140f9  ldr x1, [x10]
0x06ACD2AC: 290100b4  cbz x9, #0x6acd2d0
0x06ACD2B0: 0a5940f9  ldr x10, [x8, #0xb0]
0x06ACD2B4: 4a210091  add x10, x10, #8
0x06ACD2B8: 4b815ff8  ldur x11, [x10, #-8]
0x06ACD2BC: 7f0101eb  cmp x11, x1
0x06ACD2C0: 00010054  b.eq #0x6acd2e0
0x06ACD2C4: 290500f1  subs x9, x9, #1
0x06ACD2C8: 4a410091  add x10, x10, #0x10
0x06ACD2CC: 61ffff54  b.ne #0x6acd2b8
0x06ACD2D0: a2008052  movz w2, #0x5
0x06ACD2D4: e00313aa  mov x0, x19
0x06ACD2D8: 0e261a97  bl #0x3156b10
0x06ACD2DC: 05000014  b #0x6acd2f0
0x06ACD2E0: 490140b9  ldr w9, [x10]
0x06ACD2E4: 29150011  add w9, w9, #5
0x06ACD2E8: 08d1298b  add x8, x8, w9, sxtw #4
0x06ACD2EC: 00e10491  add x0, x8, #0x138
0x06ACD2F0: 030840a9  ldp x3, x2, [x0]
0x06ACD2F4: e00313aa  mov x0, x19
0x06ACD2F8: e10314aa  mov x1, x20
0x06ACD2FC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06ACD300: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06ACD304: 60001fd6  br x3
0x06ACD308: 69ce1a97  bl #0x3180cac

