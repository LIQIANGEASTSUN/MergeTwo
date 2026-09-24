; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 786 MergeEngine.ECS.Systems.State.Board.Event.EventBoardRefillingStateSystem
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x64EAF28 | protected override void LoadState(EventBoardResourcesRefilling newState) { }
; bytes=744 sha256=8c3a9a9b8193c2e43650a14fd41b187693e78661ac1cc33c413d4dbe57b2b091 status=arm64_complete_bound indexed_start=True
0x064EAF28: ff8302d1  sub sp, sp, #0xa0
0x064EAF2C: fe2300f9  str x30, [sp, #0x40]
0x064EAF30: fc6f05a9  stp x28, x27, [sp, #0x50]
0x064EAF34: fa6706a9  stp x26, x25, [sp, #0x60]
0x064EAF38: f85f07a9  stp x24, x23, [sp, #0x70]
0x064EAF3C: f65708a9  stp x22, x21, [sp, #0x80]
0x064EAF40: f44f09a9  stp x20, x19, [sp, #0x90]
0x064EAF44: f4c100b0  adrp x20, #0x7d27000
0x064EAF48: 88464139  ldrb w8, [x20, #0x51]
0x064EAF4C: f30300aa  mov x19, x0
0x064EAF50: 48050037  tbnz w8, #0, #0x64eaff8
0x064EAF54: 809000b0  adrp x0, #0x76fb000
0x064EAF58: 005045f9  ldr x0, [x0, #0xaa0]
0x064EAF5C: af563297  bl #0x3180a18
0x064EAF60: 208b0090  adrp x0, #0x764e000
0x064EAF64: 00cc42f9  ldr x0, [x0, #0x598]
0x064EAF68: ac563297  bl #0x3180a18
0x064EAF6C: a08e00b0  adrp x0, #0x76bf000
0x064EAF70: 00c444f9  ldr x0, [x0, #0x988]
0x064EAF74: a9563297  bl #0x3180a18
0x064EAF78: 208b00b0  adrp x0, #0x764f000
0x064EAF7C: 00ac43f9  ldr x0, [x0, #0x758]
0x064EAF80: a6563297  bl #0x3180a18
0x064EAF84: 809000b0  adrp x0, #0x76fb000
0x064EAF88: 005445f9  ldr x0, [x0, #0xaa8]
0x064EAF8C: a3563297  bl #0x3180a18
0x064EAF90: 809000b0  adrp x0, #0x76fb000
0x064EAF94: 005845f9  ldr x0, [x0, #0xab0]
0x064EAF98: a0563297  bl #0x3180a18
0x064EAF9C: 809000b0  adrp x0, #0x76fb000
0x064EAFA0: 005c45f9  ldr x0, [x0, #0xab8]
0x064EAFA4: 9d563297  bl #0x3180a18
0x064EAFA8: 809000b0  adrp x0, #0x76fb000
0x064EAFAC: 006045f9  ldr x0, [x0, #0xac0]
0x064EAFB0: 9a563297  bl #0x3180a18
0x064EAFB4: 408c00b0  adrp x0, #0x7673000
0x064EAFB8: 005c40f9  ldr x0, [x0, #0xb8]
0x064EAFBC: 97563297  bl #0x3180a18
0x064EAFC0: 809000b0  adrp x0, #0x76fb000
0x064EAFC4: 006445f9  ldr x0, [x0, #0xac8]
0x064EAFC8: 94563297  bl #0x3180a18
0x064EAFCC: 809000b0  adrp x0, #0x76fb000
0x064EAFD0: 006845f9  ldr x0, [x0, #0xad0]
0x064EAFD4: 91563297  bl #0x3180a18
0x064EAFD8: 809000b0  adrp x0, #0x76fb000
0x064EAFDC: 006c45f9  ldr x0, [x0, #0xad8]
0x064EAFE0: 8e563297  bl #0x3180a18
0x064EAFE4: 809000b0  adrp x0, #0x76fb000
0x064EAFE8: 007045f9  ldr x0, [x0, #0xae0]
0x064EAFEC: 8b563297  bl #0x3180a18
0x064EAFF0: 28008052  movz w8, #0x1
0x064EAFF4: 88460139  strb w8, [x20, #0x51]
0x064EAFF8: ff7f02a9  stp xzr, xzr, [sp, #0x20]
0x064EAFFC: ff1b00f9  str xzr, [sp, #0x30]
0x064EB000: ff4f00b9  str wzr, [sp, #0x4c]
0x064EB004: 682240f9  ldr x8, [x19, #0x40]
0x064EB008: 280c00b4  cbz x8, #0x64eb18c
0x064EB00C: 081140f9  ldr x8, [x8, #0x20]
0x064EB010: e80b00b4  cbz x8, #0x64eb18c
0x064EB014: 178b00f0  adrp x23, #0x764e000
0x064EB018: 081140f9  ldr x8, [x8, #0x20]
0x064EB01C: 708b3314  b #0x71cdddc
0x064EB020: 280900b4  cbz x8, #0x64eb144
0x064EB024: 000d40f9  ldr x0, [x8, #0x18]
0x064EB028: 200b00b4  cbz x0, #0x64eb18c
0x064EB02C: 88900090  adrp x8, #0x76fb000
0x064EB030: 086145f9  ldr x8, [x8, #0xac0]
0x064EB034: 98900090  adrp x24, #0x76fb000
0x064EB038: 398b0090  adrp x25, #0x764f000
0x064EB03C: ba8e0090  adrp x26, #0x76bf000
0x064EB040: 185b45f9  ldr x24, [x24, #0xab0]
0x064EB044: 39af43f9  ldr x25, [x25, #0x758]
0x064EB048: 5ac744f9  ldr x26, [x26, #0x988]
0x064EB04C: 010140f9  ldr x1, [x8]
0x064EB050: 5b8c0090  adrp x27, #0x7673000
0x064EB054: 9c900090  adrp x28, #0x76fb000
0x064EB058: 96900090  adrp x22, #0x76fb000
0x064EB05C: 7b5f40f9  ldr x27, [x27, #0xb8]
0x064EB060: 9c7345f9  ldr x28, [x28, #0xae0]
0x064EB064: d65645f9  ldr x22, [x22, #0xaa8]
0x064EB068: e8230091  add x8, sp, #8
0x064EB06C: ff676d97  bl #0x4045068
0x064EB070: e083c03c  ldur q0, [sp, #8]
0x064EB074: e80f40f9  ldr x8, [sp, #0x18]
0x064EB078: e00b803d  str q0, [sp, #0x20]
0x064EB07C: e81b00f9  str x8, [sp, #0x30]
0x064EB080: 010340f9  ldr x1, [x24]
0x064EB084: e0830091  add x0, sp, #0x20
0x064EB088: 4baaac97  bl #0x50159b4
0x064EB08C: 40050036  tbz w0, #0, #0x64eb134
0x064EB090: f41b40f9  ldr x20, [sp, #0x30]
0x064EB094: b40700b4  cbz x20, #0x64eb188
0x064EB098: 200340f9  ldr x0, [x25]
0x064EB09C: 950a40f9  ldr x21, [x20, #0x10]
0x064EB0A0: 08e040b9  ldr w8, [x0, #0xe0]
0x064EB0A4: 48000035  cbnz w8, #0x64eb0ac
0x064EB0A8: b9563297  bl #0x3180b8c
0x064EB0AC: 430340f9  ldr x3, [x26]
0x064EB0B0: e2330191  add x2, sp, #0x4c
0x064EB0B4: 21008052  movz w1, #0x1
0x064EB0B8: e00315aa  mov x0, x21
0x064EB0BC: 84df5c97  bl #0x3c22ecc
0x064EB0C0: 00020036  tbz w0, #0, #0x64eb100
0x064EB0C4: e84f40b9  ldr w8, [sp, #0x4c]
0x064EB0C8: 1f050071  cmp w8, #1
0x064EB0CC: a1fdff54  b.ne #0x64eb080
0x064EB0D0: 600340f9  ldr x0, [x27]
0x064EB0D4: 08e040b9  ldr w8, [x0, #0xe0]
0x064EB0D8: 48000035  cbnz w8, #0x64eb0e0
0x064EB0DC: ac563297  bl #0x3180b8c
0x064EB0E0: a0008052  movz w0, #0x5
0x064EB0E4: e1031faa  mov x1, xzr
0x064EB0E8: 8e86f197  bl #0x614cb20
0x064EB0EC: e10300aa  mov x1, x0
0x064EB0F0: e00313aa  mov x0, x19
0x064EB0F4: e20314aa  mov x2, x20
0x064EB0F8: 46000094  bl #0x64eb210
0x064EB0FC: e1ffff17  b #0x64eb080
0x064EB100: 810a40f9  ldr x1, [x20, #0x10]
0x064EB104: 800340f9  ldr x0, [x28]
0x064EB108: e2031faa  mov x2, xzr
0x064EB10C: a5fdbf97  bl #0x54ea7a0
0x064EB110: f40300aa  mov x20, x0
0x064EB114: e00240f9  ldr x0, [x23]
0x064EB118: 08e040b9  ldr w8, [x0, #0xe0]
0x064EB11C: 48000035  cbnz w8, #0x64eb124
0x064EB120: 9b563297  bl #0x3180b8c
0x064EB124: e00314aa  mov x0, x20
0x064EB128: e1031faa  mov x1, xzr
0x064EB12C: d3fb2694  bl #0x6eaa078
0x064EB130: d4ffff17  b #0x64eb080
0x064EB134: c10240f9  ldr x1, [x22]
0x064EB138: e0830091  add x0, sp, #0x20
0x064EB13C: 1daaac97  bl #0x50159b0
0x064EB140: 0a000014  b #0x64eb168
0x064EB144: e00240f9  ldr x0, [x23]
0x064EB148: 08e040b9  ldr w8, [x0, #0xe0]
0x064EB14C: 48000035  cbnz w8, #0x64eb154
0x064EB150: 8f563297  bl #0x3180b8c
0x064EB154: 88900090  adrp x8, #0x76fb000
0x064EB158: 086d45f9  ldr x8, [x8, #0xad8]
0x064EB15C: e1031faa  mov x1, xzr
0x064EB160: 000140f9  ldr x0, [x8]
0x064EB164: c5fb2694  bl #0x6eaa078
0x064EB168: f44f49a9  ldp x20, x19, [sp, #0x90]
0x064EB16C: f65748a9  ldp x22, x21, [sp, #0x80]
0x064EB170: f85f47a9  ldp x24, x23, [sp, #0x70]
0x064EB174: fa6746a9  ldp x26, x25, [sp, #0x60]
0x064EB178: fc6f45a9  ldp x28, x27, [sp, #0x50]
0x064EB17C: fe2340f9  ldr x30, [sp, #0x40]
0x064EB180: ff830291  add sp, sp, #0xa0
0x064EB184: c0035fd6  ret
0x064EB188: c9563297  bl #0x3180cac
0x064EB18C: c8563297  bl #0x3180cac
0x064EB190: 07000014  b #0x64eb1ac
0x064EB194: 06000014  b #0x64eb1ac
0x064EB198: 05000014  b #0x64eb1ac
0x064EB19C: 04000014  b #0x64eb1ac
0x064EB1A0: 03000014  b #0x64eb1ac
0x064EB1A4: 02000014  b #0x64eb1ac
0x064EB1A8: 01000014  b #0x64eb1ac
0x064EB1AC: f30300aa  mov x19, x0
0x064EB1B0: 3f040071  cmp w1, #1
0x064EB1B4: 61010054  b.ne #0x64eb1e0
0x064EB1B8: e00313aa  mov x0, x19
0x064EB1BC: d58d3394  bl #0x71ce910
0x064EB1C0: 140040f9  ldr x20, [x0]
0x064EB1C4: d78d3394  bl #0x71ce920
0x064EB1C8: c10240f9  ldr x1, [x22]
0x064EB1CC: e0830091  add x0, sp, #0x20
0x064EB1D0: f8a9ac97  bl #0x50159b0
0x064EB1D4: b4fcffb4  cbz x20, #0x64eb168
0x064EB1D8: e00314aa  mov x0, x20
0x064EB1DC: b2563297  bl #0x3180ca4
0x064EB1E0: f4031faa  mov x20, xzr
0x064EB1E4: 02000014  b #0x64eb1ec
0x064EB1E8: f30300aa  mov x19, x0
0x064EB1EC: c10240f9  ldr x1, [x22]
0x064EB1F0: e0830091  add x0, sp, #0x20
0x064EB1F4: efa9ac97  bl #0x50159b0
0x064EB1F8: 740000b5  cbnz x20, #0x64eb204
0x064EB1FC: e00313aa  mov x0, x19
0x064EB200: d6e93597  bl #0x3265958
0x064EB204: e00314aa  mov x0, x20
0x064EB208: a7563297  bl #0x3180ca4
0x064EB20C: c2782497  bl #0x2e09514

; RVA 0x64EB210 | private void UpdateResourceRefill(IRewardType rewardType, BoardResourceRefill refillState) { }
; bytes=376 sha256=0609c5f8aa6e75620c37078f88f887244d2b1a53ae65e373d35e462e27434b36 status=arm64_complete_bound indexed_start=True
0x064EB210: e80f1cfc  str d8, [sp, #-0x40]!
0x064EB214: fe0700f9  str x30, [sp, #8]
0x064EB218: f85f01a9  stp x24, x23, [sp, #0x10]
0x064EB21C: f65702a9  stp x22, x21, [sp, #0x20]
0x064EB220: f44f03a9  stp x20, x19, [sp, #0x30]
0x064EB224: f6c10090  adrp x22, #0x7d27000
0x064EB228: c84a4139  ldrb w8, [x22, #0x52]
0x064EB22C: f40302aa  mov x20, x2
0x064EB230: f30301aa  mov x19, x1
0x064EB234: f50300aa  mov x21, x0
0x064EB238: 28010037  tbnz w8, #0, #0x64eb25c
0x064EB23C: 008f00f0  adrp x0, #0x76ce000
0x064EB240: 002445f9  ldr x0, [x0, #0xa48]
0x064EB244: f5553297  bl #0x3180a18
0x064EB248: 808c00b0  adrp x0, #0x767c000
0x064EB24C: 00e047f9  ldr x0, [x0, #0xfc0]
0x064EB250: f2553297  bl #0x3180a18
0x064EB254: 28008052  movz w8, #0x1
0x064EB258: c84a0139  strb w8, [x22, #0x52]
0x064EB25C: b62a40f9  ldr x22, [x21, #0x50]
0x064EB260: 360900b4  cbz x22, #0x64eb384
0x064EB264: 0a8f00f0  adrp x10, #0x76ce000
0x064EB268: c80240f9  ldr x8, [x22]
0x064EB26C: 4a2545f9  ldr x10, [x10, #0xa48]
0x064EB270: 095d4279  ldrh w9, [x8, #0x12e]
0x064EB274: 410140f9  ldr x1, [x10]
0x064EB278: 290100b4  cbz x9, #0x64eb29c
0x064EB27C: 0a5940f9  ldr x10, [x8, #0xb0]
0x064EB280: 4a210091  add x10, x10, #8
0x064EB284: 4b815ff8  ldur x11, [x10, #-8]
0x064EB288: 7f0101eb  cmp x11, x1
0x064EB28C: 00010054  b.eq #0x64eb2ac
0x064EB290: 290500f1  subs x9, x9, #1
0x064EB294: 4a410091  add x10, x10, #0x10
0x064EB298: 61ffff54  b.ne #0x64eb284
0x064EB29C: e00316aa  mov x0, x22
0x064EB2A0: e2031f2a  mov w2, wzr
0x064EB2A4: 1bae3197  bl #0x3156b10
0x064EB2A8: 04000014  b #0x64eb2b8
0x064EB2AC: 490180b9  ldrsw x9, [x10]
0x064EB2B0: 0811098b  add x8, x8, x9, lsl #4
0x064EB2B4: 00e10491  add x0, x8, #0x138
0x064EB2B8: 080840a9  ldp x8, x2, [x0]
0x064EB2BC: e00316aa  mov x0, x22
0x064EB2C0: e10313aa  mov x1, x19
0x064EB2C4: 00013fd6  blr x8
0x064EB2C8: f40500b4  cbz x20, #0x64eb384
0x064EB2CC: f60300aa  mov x22, x0
0x064EB2D0: a00500b4  cbz x0, #0x64eb384
0x064EB2D4: 8a8c00b0  adrp x10, #0x767c000
0x064EB2D8: 4ae147f9  ldr x10, [x10, #0xfc0]
0x064EB2DC: c80240f9  ldr x8, [x22]
0x064EB2E0: 8b2240b9  ldr w11, [x20, #0x20]
0x064EB2E4: a98cfdb0  adrp x9, #0x1680000
0x064EB2E8: 207943fd  ldr d0, [x9, #0x6f0]
0x064EB2EC: 98de4429  ldp w24, w23, [x20, #0x24]
0x064EB2F0: 095d4279  ldrh w9, [x8, #0x12e]
0x064EB2F4: 410140f9  ldr x1, [x10]
0x064EB2F8: 6101621e  scvtf d1, w11
0x064EB2FC: 2818601e  fdiv d8, d1, d0
0x064EB300: 290100b4  cbz x9, #0x64eb324
0x064EB304: 0a5940f9  ldr x10, [x8, #0xb0]
0x064EB308: 4a210091  add x10, x10, #8
0x064EB30C: 4b815ff8  ldur x11, [x10, #-8]
0x064EB310: 7f0101eb  cmp x11, x1
0x064EB314: 00010054  b.eq #0x64eb334
0x064EB318: 290500f1  subs x9, x9, #1
0x064EB31C: 4a410091  add x10, x10, #0x10
0x064EB320: 61ffff54  b.ne #0x64eb30c
0x064EB324: 82008052  movz w2, #0x4
0x064EB328: e00316aa  mov x0, x22
0x064EB32C: f9ad3197  bl #0x3156b10
0x064EB330: 05000014  b #0x64eb344
0x064EB334: 490140b9  ldr w9, [x10]
0x064EB338: 29110011  add w9, w9, #4
0x064EB33C: 08d1298b  add x8, x8, w9, sxtw #4
0x064EB340: 00e10491  add x0, x8, #0x138
0x064EB344: 080c40a9  ldp x8, x3, [x0]
0x064EB348: e00316aa  mov x0, x22
0x064EB34C: e103172a  mov w1, w23
0x064EB350: e203182a  mov w2, w24
0x064EB354: 001da84e  mov v0.16b, v8.16b
0x064EB358: 00013fd6  blr x8
0x064EB35C: a02640f9  ldr x0, [x21, #0x48]
0x064EB360: 200100b4  cbz x0, #0x64eb384
0x064EB364: 820e40f9  ldr x2, [x20, #0x18]
0x064EB368: e10313aa  mov x1, x19
0x064EB36C: f44f43a9  ldp x20, x19, [sp, #0x30]
0x064EB370: f65742a9  ldp x22, x21, [sp, #0x20]
0x064EB374: f85f41a9  ldp x24, x23, [sp, #0x10]
0x064EB378: fe0740f9  ldr x30, [sp, #8]
0x064EB37C: e80744fc  ldr d8, [sp], #0x40
0x064EB380: 02000014  b #0x64eb388
0x064EB384: 4a563297  bl #0x3180cac

; RVA 0x64EB488 | public void .ctor() { }
; bytes=72 sha256=9136dbf258c7b6c6032a6325307ce421b000e8969dfc0f44a7da3fa9c4228f38 status=arm64_complete_bound indexed_start=True
0x064EB488: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x064EB48C: f44f01a9  stp x20, x19, [sp, #0x10]
0x064EB490: f4c10090  adrp x20, #0x7d27000
0x064EB494: 95900090  adrp x21, #0x76fb000
0x064EB498: 884e4139  ldrb w8, [x20, #0x53]
0x064EB49C: b57645f9  ldr x21, [x21, #0xae8]
0x064EB4A0: f30300aa  mov x19, x0
0x064EB4A4: c8000037  tbnz w8, #0, #0x64eb4bc
0x064EB4A8: 80900090  adrp x0, #0x76fb000
0x064EB4AC: 007445f9  ldr x0, [x0, #0xae8]
0x064EB4B0: 5a553297  bl #0x3180a18
0x064EB4B4: 28008052  movz w8, #0x1
0x064EB4B8: 884e0139  strb w8, [x20, #0x53]
0x064EB4BC: a10240f9  ldr x1, [x21]
0x064EB4C0: e00313aa  mov x0, x19
0x064EB4C4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x064EB4C8: fe57c2a8  ldp x30, x21, [sp], #0x20
0x064EB4CC: 33678117  b #0x4545198

