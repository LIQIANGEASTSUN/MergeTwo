; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 32791 Merger.MergeBoard.PowerBoost.Services.PowerBoostModesCalculator
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6ACE868 | private BindableProperty<int> get_EnergyResource() { }
; bytes=212 sha256=dbd556e3adeee11349900131aab27aa824607963168593e32365f1d5b286f545 status=arm64_complete_bound indexed_start=True
0x06ACE868: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06ACE86C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06ACE870: f5920090  adrp x21, #0x7d2a000
0x06ACE874: 345d00b0  adrp x20, #0x7673000
0x06ACE878: a8b66939  ldrb w8, [x21, #0xa6d]
0x06ACE87C: 945e40f9  ldr x20, [x20, #0xb8]
0x06ACE880: f30300aa  mov x19, x0
0x06ACE884: 28010037  tbnz w8, #0, #0x6ace8a8
0x06ACE888: 205d00b0  adrp x0, #0x7673000
0x06ACE88C: 004443f9  ldr x0, [x0, #0x688]
0x06ACE890: 62c81a97  bl #0x3180a18
0x06ACE894: 205d00b0  adrp x0, #0x7673000
0x06ACE898: 005c40f9  ldr x0, [x0, #0xb8]
0x06ACE89C: 5fc81a97  bl #0x3180a18
0x06ACE8A0: 28008052  movz w8, #0x1
0x06ACE8A4: a8b62939  strb w8, [x21, #0xa6d]
0x06ACE8A8: 800240f9  ldr x0, [x20]
0x06ACE8AC: 731240f9  ldr x19, [x19, #0x20]
0x06ACE8B0: 08e040b9  ldr w8, [x0, #0xe0]
0x06ACE8B4: 68000035  cbnz w8, #0x6ace8c0
0x06ACE8B8: b5c81a97  bl #0x3180b8c
0x06ACE8BC: 800240f9  ldr x0, [x20]
0x06ACE8C0: d30300b4  cbz x19, #0x6ace938
0x06ACE8C4: 2a5d00b0  adrp x10, #0x7673000
0x06ACE8C8: 095c40f9  ldr x9, [x0, #0xb8]
0x06ACE8CC: 680240f9  ldr x8, [x19]
0x06ACE8D0: 4a4543f9  ldr x10, [x10, #0x688]
0x06ACE8D4: 345540f9  ldr x20, [x9, #0xa8]
0x06ACE8D8: 095d4279  ldrh w9, [x8, #0x12e]
0x06ACE8DC: 410140f9  ldr x1, [x10]
0x06ACE8E0: 290100b4  cbz x9, #0x6ace904
0x06ACE8E4: 0a5940f9  ldr x10, [x8, #0xb0]
0x06ACE8E8: 4a210091  add x10, x10, #8
0x06ACE8EC: 4b815ff8  ldur x11, [x10, #-8]
0x06ACE8F0: 7f0101eb  cmp x11, x1
0x06ACE8F4: 00010054  b.eq #0x6ace914
0x06ACE8F8: 290500f1  subs x9, x9, #1
0x06ACE8FC: 4a410091  add x10, x10, #0x10
0x06ACE900: 61ffff54  b.ne #0x6ace8ec
0x06ACE904: e00313aa  mov x0, x19
0x06ACE908: e2031f2a  mov w2, wzr
0x06ACE90C: 81201a97  bl #0x3156b10
0x06ACE910: 04000014  b #0x6ace920
0x06ACE914: 490180b9  ldrsw x9, [x10]
0x06ACE918: 0811098b  add x8, x8, x9, lsl #4
0x06ACE91C: 00e10491  add x0, x8, #0x138
0x06ACE920: 030840a9  ldp x3, x2, [x0]
0x06ACE924: e00313aa  mov x0, x19
0x06ACE928: e10314aa  mov x1, x20
0x06ACE92C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06ACE930: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06ACE934: 60001fd6  br x3
0x06ACE938: ddc81a97  bl #0x3180cac

; RVA 0x6ACE93C | public int get_MaxAvailableBoost() { }
; bytes=220 sha256=76d72e983aac4c20476d030f1045e4bfedf7ace8e8be67f63ef53773012f79cd status=arm64_complete_bound indexed_start=True
0x06ACE93C: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06ACE940: f44f01a9  stp x20, x19, [sp, #0x10]
0x06ACE944: f5920090  adrp x21, #0x7d2a000
0x06ACE948: 146300b0  adrp x20, #0x772f000
0x06ACE94C: a8ba6939  ldrb w8, [x21, #0xa6e]
0x06ACE950: 946a43f9  ldr x20, [x20, #0x6d0]
0x06ACE954: f30300aa  mov x19, x0
0x06ACE958: 28010037  tbnz w8, #0, #0x6ace97c
0x06ACE95C: 006300b0  adrp x0, #0x772f000
0x06ACE960: 006843f9  ldr x0, [x0, #0x6d0]
0x06ACE964: 2dc81a97  bl #0x3180a18
0x06ACE968: 206300b0  adrp x0, #0x7733000
0x06ACE96C: 001047f9  ldr x0, [x0, #0xe20]
0x06ACE970: 2ac81a97  bl #0x3180a18
0x06ACE974: 28008052  movz w8, #0x1
0x06ACE978: a8ba2939  strb w8, [x21, #0xa6e]
0x06ACE97C: 601a40f9  ldr x0, [x19, #0x30]
0x06ACE980: 810240f9  ldr x1, [x20]
0x06ACE984: 63654597  bl #0x3c27f10
0x06ACE988: c0000036  tbz w0, #0, #0x6ace9a0
0x06ACE98C: 601a40f9  ldr x0, [x19, #0x30]
0x06ACE990: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06ACE994: e1031faa  mov x1, xzr
0x06ACE998: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06ACE99C: f9e5bb17  b #0x59c8180
0x06ACE9A0: 730e40f9  ldr x19, [x19, #0x18]
0x06ACE9A4: 930300b4  cbz x19, #0x6acea14
0x06ACE9A8: 2a6300b0  adrp x10, #0x7733000
0x06ACE9AC: 680240f9  ldr x8, [x19]
0x06ACE9B0: 4a1147f9  ldr x10, [x10, #0xe20]
0x06ACE9B4: 095d4279  ldrh w9, [x8, #0x12e]
0x06ACE9B8: 410140f9  ldr x1, [x10]
0x06ACE9BC: 290100b4  cbz x9, #0x6ace9e0
0x06ACE9C0: 0a5940f9  ldr x10, [x8, #0xb0]
0x06ACE9C4: 4a210091  add x10, x10, #8
0x06ACE9C8: 4b815ff8  ldur x11, [x10, #-8]
0x06ACE9CC: 7f0101eb  cmp x11, x1
0x06ACE9D0: 00010054  b.eq #0x6ace9f0
0x06ACE9D4: 290500f1  subs x9, x9, #1
0x06ACE9D8: 4a410091  add x10, x10, #0x10
0x06ACE9DC: 61ffff54  b.ne #0x6ace9c8
0x06ACE9E0: 22008052  movz w2, #0x1
0x06ACE9E4: e00313aa  mov x0, x19
0x06ACE9E8: 4a201a97  bl #0x3156b10
0x06ACE9EC: 05000014  b #0x6acea00
0x06ACE9F0: 490140b9  ldr w9, [x10]
0x06ACE9F4: 29050011  add w9, w9, #1
0x06ACE9F8: 08d1298b  add x8, x8, w9, sxtw #4
0x06ACE9FC: 00e10491  add x0, x8, #0x138
0x06ACEA00: 020440a9  ldp x2, x1, [x0]
0x06ACEA04: e00313aa  mov x0, x19
0x06ACEA08: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06ACEA0C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06ACEA10: 40001fd6  br x2
0x06ACEA14: a6c81a97  bl #0x3180cac

; RVA 0x6ACEA18 | public void Setup(string id) { }
; bytes=212 sha256=cab150d8ac5e04d45df512e2b22c2d1a68906d9f852139494da6914be0b0b4c9 status=arm64_complete_bound indexed_start=True
0x06ACEA18: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x06ACEA1C: f65701a9  stp x22, x21, [sp, #0x10]
0x06ACEA20: f44f02a9  stp x20, x19, [sp, #0x20]
0x06ACEA24: f7920090  adrp x23, #0x7d2a000
0x06ACEA28: 165c0090  adrp x22, #0x764e000
0x06ACEA2C: 356300d0  adrp x21, #0x7734000
0x06ACEA30: e8be6939  ldrb w8, [x23, #0xa6f]
0x06ACEA34: d6ae43f9  ldr x22, [x22, #0x758]
0x06ACEA38: b58240f9  ldr x21, [x21, #0x100]
0x06ACEA3C: f40301aa  mov x20, x1
0x06ACEA40: f30300aa  mov x19, x0
0x06ACEA44: 88010037  tbnz w8, #0, #0x6acea74
0x06ACEA48: 005c0090  adrp x0, #0x764e000
0x06ACEA4C: 00ac43f9  ldr x0, [x0, #0x758]
0x06ACEA50: f2c71a97  bl #0x3180a18
0x06ACEA54: 006000f0  adrp x0, #0x76d1000
0x06ACEA58: 003446f9  ldr x0, [x0, #0xc68]
0x06ACEA5C: efc71a97  bl #0x3180a18
0x06ACEA60: 206300d0  adrp x0, #0x7734000
0x06ACEA64: 008040f9  ldr x0, [x0, #0x100]
0x06ACEA68: ecc71a97  bl #0x3180a18
0x06ACEA6C: 28008052  movz w8, #0x1
0x06ACEA70: e8be2939  strb w8, [x23, #0xa6f]
0x06ACEA74: e00313aa  mov x0, x19
0x06ACEA78: 140c04f8  str x20, [x0, #0x40]!
0x06ACEA7C: e10314aa  mov x1, x20
0x06ACEA80: d1c71a97  bl #0x31809c4
0x06ACEA84: e00313aa  mov x0, x19
0x06ACEA88: 4b000094  bl #0x6acebb4
0x06ACEA8C: e00313aa  mov x0, x19
0x06ACEA90: 0b010094  bl #0x6aceebc
0x06ACEA94: e00313aa  mov x0, x19
0x06ACEA98: 74ffff97  bl #0x6ace868
0x06ACEA9C: c80240f9  ldr x8, [x22]
0x06ACEAA0: f40300aa  mov x20, x0
0x06ACEAA4: e00308aa  mov x0, x8
0x06ACEAA8: 7ec81a97  bl #0x3180ca0
0x06ACEAAC: a20240f9  ldr x2, [x21]
0x06ACEAB0: e10313aa  mov x1, x19
0x06ACEAB4: e3031faa  mov x3, xzr
0x06ACEAB8: f50300aa  mov x21, x0
0x06ACEABC: 1d7bac97  bl #0x55ed730
0x06ACEAC0: 540100b4  cbz x20, #0x6aceae8
0x06ACEAC4: 086000f0  adrp x8, #0x76d1000
0x06ACEAC8: 083546f9  ldr x8, [x8, #0xc68]
0x06ACEACC: e00314aa  mov x0, x20
0x06ACEAD0: e10315aa  mov x1, x21
0x06ACEAD4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06ACEAD8: 020140f9  ldr x2, [x8]
0x06ACEADC: f65741a9  ldp x22, x21, [sp, #0x10]
0x06ACEAE0: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x06ACEAE4: e9fe8417  b #0x4c0e688
0x06ACEAE8: 71c81a97  bl #0x3180cac

; RVA 0x6ACEB04 | private void System.IDisposable.Dispose() { }
; bytes=176 sha256=e34610366e09d660fa6578d18b0a52d235d2d5350d0118a642293b093d79a103 status=arm64_complete_bound indexed_start=True
0x06ACEB04: fe0f1df8  str x30, [sp, #-0x30]!
0x06ACEB08: f65701a9  stp x22, x21, [sp, #0x10]
0x06ACEB0C: f44f02a9  stp x20, x19, [sp, #0x20]
0x06ACEB10: f6920090  adrp x22, #0x7d2a000
0x06ACEB14: 145c0090  adrp x20, #0x764e000
0x06ACEB18: 356300d0  adrp x21, #0x7734000
0x06ACEB1C: c8c26939  ldrb w8, [x22, #0xa70]
0x06ACEB20: 94ae43f9  ldr x20, [x20, #0x758]
0x06ACEB24: b58240f9  ldr x21, [x21, #0x100]
0x06ACEB28: f30300aa  mov x19, x0
0x06ACEB2C: 88010037  tbnz w8, #0, #0x6aceb5c
0x06ACEB30: 005c0090  adrp x0, #0x764e000
0x06ACEB34: 00ac43f9  ldr x0, [x0, #0x758]
0x06ACEB38: b8c71a97  bl #0x3180a18
0x06ACEB3C: 006000f0  adrp x0, #0x76d1000
0x06ACEB40: 009046f9  ldr x0, [x0, #0xd20]
0x06ACEB44: b5c71a97  bl #0x3180a18
0x06ACEB48: 206300d0  adrp x0, #0x7734000
0x06ACEB4C: 008040f9  ldr x0, [x0, #0x100]
0x06ACEB50: b2c71a97  bl #0x3180a18
0x06ACEB54: 28008052  movz w8, #0x1
0x06ACEB58: c8c22939  strb w8, [x22, #0xa70]
0x06ACEB5C: e00313aa  mov x0, x19
0x06ACEB60: 42ffff97  bl #0x6ace868
0x06ACEB64: 880240f9  ldr x8, [x20]
0x06ACEB68: f40300aa  mov x20, x0
0x06ACEB6C: e00308aa  mov x0, x8
0x06ACEB70: 4cc81a97  bl #0x3180ca0
0x06ACEB74: a20240f9  ldr x2, [x21]
0x06ACEB78: e10313aa  mov x1, x19
0x06ACEB7C: e3031faa  mov x3, xzr
0x06ACEB80: f50300aa  mov x21, x0
0x06ACEB84: eb7aac97  bl #0x55ed730
0x06ACEB88: 540100b4  cbz x20, #0x6acebb0
0x06ACEB8C: 086000f0  adrp x8, #0x76d1000
0x06ACEB90: 089146f9  ldr x8, [x8, #0xd20]
0x06ACEB94: e00314aa  mov x0, x20
0x06ACEB98: e10315aa  mov x1, x21
0x06ACEB9C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06ACEBA0: 020140f9  ldr x2, [x8]
0x06ACEBA4: f65741a9  ldp x22, x21, [sp, #0x10]
0x06ACEBA8: fe0743f8  ldr x30, [sp], #0x30
0x06ACEBAC: defe8417  b #0x4c0e724
0x06ACEBB0: 3fc81a97  bl #0x3180cac

; RVA 0x6ACEAEC | public void RebuildBoosts() { }
; bytes=24 sha256=ad6d26362f2210bed24334cbbf39dfec133198b07f14e218ebcd9617f8b724e0 status=arm64_complete_bound indexed_start=True
0x06ACEAEC: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x06ACEAF0: f30300aa  mov x19, x0
0x06ACEAF4: 30000094  bl #0x6acebb4
0x06ACEAF8: e00313aa  mov x0, x19
0x06ACEAFC: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x06ACEB00: ef000014  b #0x6aceebc

; RVA 0x6ACF2D4 | public bool CalculateUnlockableBoost(out int unlockableBoost) { }
; bytes=588 sha256=ade239418715b9512dfcb04b6efb083f6460cfcdf8a1e73beff7eca9497cb184 status=arm64_complete_bound indexed_start=True
0x06ACF2D4: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x06ACF2D8: f65701a9  stp x22, x21, [sp, #0x10]
0x06ACF2DC: f44f02a9  stp x20, x19, [sp, #0x20]
0x06ACF2E0: d59200f0  adrp x21, #0x7d2a000
0x06ACF2E4: a8c66939  ldrb w8, [x21, #0xa71]
0x06ACF2E8: f30301aa  mov x19, x1
0x06ACF2EC: f40300aa  mov x20, x0
0x06ACF2F0: 28010037  tbnz w8, #0, #0x6acf314
0x06ACF2F4: 00630090  adrp x0, #0x772f000
0x06ACF2F8: 006843f9  ldr x0, [x0, #0x6d0]
0x06ACF2FC: c7c51a97  bl #0x3180a18
0x06ACF300: 20630090  adrp x0, #0x7733000
0x06ACF304: 001047f9  ldr x0, [x0, #0xe20]
0x06ACF308: c4c51a97  bl #0x3180a18
0x06ACF30C: 28008052  movz w8, #0x1
0x06ACF310: a8c62939  strb w8, [x21, #0xa71]
0x06ACF314: 950e40f9  ldr x21, [x20, #0x18]
0x06ACF318: 351000b4  cbz x21, #0x6acf51c
0x06ACF31C: 36630090  adrp x22, #0x7733000
0x06ACF320: a80240f9  ldr x8, [x21]
0x06ACF324: d61247f9  ldr x22, [x22, #0xe20]
0x06ACF328: 095d4279  ldrh w9, [x8, #0x12e]
0x06ACF32C: c10240f9  ldr x1, [x22]
0x06ACF330: 290100b4  cbz x9, #0x6acf354
0x06ACF334: 0a5940f9  ldr x10, [x8, #0xb0]
0x06ACF338: 4a210091  add x10, x10, #8
0x06ACF33C: 4b815ff8  ldur x11, [x10, #-8]
0x06ACF340: 7f0101eb  cmp x11, x1
0x06ACF344: 00010054  b.eq #0x6acf364
0x06ACF348: 290500f1  subs x9, x9, #1
0x06ACF34C: 4a410091  add x10, x10, #0x10
0x06ACF350: 61ffff54  b.ne #0x6acf33c
0x06ACF354: a2008052  movz w2, #0x5
0x06ACF358: e00315aa  mov x0, x21
0x06ACF35C: ed1d1a97  bl #0x3156b10
0x06ACF360: 05000014  b #0x6acf374
0x06ACF364: 490140b9  ldr w9, [x10]
0x06ACF368: 29150011  add w9, w9, #5
0x06ACF36C: 08d1298b  add x8, x8, w9, sxtw #4
0x06ACF370: 00e10491  add x0, x8, #0x138
0x06ACF374: 080440a9  ldp x8, x1, [x0]
0x06ACF378: e00315aa  mov x0, x21
0x06ACF37C: 00013fd6  blr x8
0x06ACF380: 00020036  tbz w0, #0, #0x6acf3c0
0x06ACF384: e00314aa  mov x0, x20
0x06ACF388: 66000094  bl #0x6acf520
0x06ACF38C: 08630090  adrp x8, #0x772f000
0x06ACF390: 086943f9  ldr x8, [x8, #0x6d0]
0x06ACF394: f50300aa  mov x21, x0
0x06ACF398: 010140f9  ldr x1, [x8]
0x06ACF39C: dd624597  bl #0x3c27f10
0x06ACF3A0: 08000072  ands w8, w0, #1
0x06ACF3A4: f713939a  csel x23, xzr, x19, ne
0x06ACF3A8: 08030034  cbz w8, #0x6acf408
0x06ACF3AC: e00315aa  mov x0, x21
0x06ACF3B0: e1031faa  mov x1, xzr
0x06ACF3B4: 73e3bb97  bl #0x59c8180
0x06ACF3B8: f70313aa  mov x23, x19
0x06ACF3BC: 37000014  b #0x6acf498
0x06ACF3C0: 940e40f9  ldr x20, [x20, #0x18]
0x06ACF3C4: d40a00b4  cbz x20, #0x6acf51c
0x06ACF3C8: 880240f9  ldr x8, [x20]
0x06ACF3CC: c10240f9  ldr x1, [x22]
0x06ACF3D0: 095d4279  ldrh w9, [x8, #0x12e]
0x06ACF3D4: 290100b4  cbz x9, #0x6acf3f8
0x06ACF3D8: 0a5940f9  ldr x10, [x8, #0xb0]
0x06ACF3DC: 4a210091  add x10, x10, #8
0x06ACF3E0: 4b815ff8  ldur x11, [x10, #-8]
0x06ACF3E4: 7f0101eb  cmp x11, x1
0x06ACF3E8: 40030054  b.eq #0x6acf450
0x06ACF3EC: 290500f1  subs x9, x9, #1
0x06ACF3F0: 4a410091  add x10, x10, #0x10
0x06ACF3F4: 61ffff54  b.ne #0x6acf3e0
0x06ACF3F8: 22008052  movz w2, #0x1
0x06ACF3FC: e00314aa  mov x0, x20
0x06ACF400: c41d1a97  bl #0x3156b10
0x06ACF404: 17000014  b #0x6acf460
0x06ACF408: 950e40f9  ldr x21, [x20, #0x18]
0x06ACF40C: 950800b4  cbz x21, #0x6acf51c
0x06ACF410: a80240f9  ldr x8, [x21]
0x06ACF414: c10240f9  ldr x1, [x22]
0x06ACF418: 095d4279  ldrh w9, [x8, #0x12e]
0x06ACF41C: 290100b4  cbz x9, #0x6acf440
0x06ACF420: 0a5940f9  ldr x10, [x8, #0xb0]
0x06ACF424: 4a210091  add x10, x10, #8
0x06ACF428: 4b815ff8  ldur x11, [x10, #-8]
0x06ACF42C: 7f0101eb  cmp x11, x1
0x06ACF430: 60020054  b.eq #0x6acf47c
0x06ACF434: 290500f1  subs x9, x9, #1
0x06ACF438: 4a410091  add x10, x10, #0x10
0x06ACF43C: 61ffff54  b.ne #0x6acf428
0x06ACF440: 22008052  movz w2, #0x1
0x06ACF444: e00315aa  mov x0, x21
0x06ACF448: b21d1a97  bl #0x3156b10
0x06ACF44C: 10000014  b #0x6acf48c
0x06ACF450: 490140b9  ldr w9, [x10]
0x06ACF454: 29050011  add w9, w9, #1
0x06ACF458: 08d1298b  add x8, x8, w9, sxtw #4
0x06ACF45C: 00e10491  add x0, x8, #0x138
0x06ACF460: 080440a9  ldp x8, x1, [x0]
0x06ACF464: e00314aa  mov x0, x20
0x06ACF468: 00013fd6  blr x8
0x06ACF46C: e803002a  mov w8, w0
0x06ACF470: e0031f2a  mov w0, wzr
0x06ACF474: 680200b9  str w8, [x19]
0x06ACF478: 25000014  b #0x6acf50c
0x06ACF47C: 490140b9  ldr w9, [x10]
0x06ACF480: 29050011  add w9, w9, #1
0x06ACF484: 08d1298b  add x8, x8, w9, sxtw #4
0x06ACF488: 00e10491  add x0, x8, #0x138
0x06ACF48C: 080440a9  ldp x8, x1, [x0]
0x06ACF490: e00315aa  mov x0, x21
0x06ACF494: 00013fd6  blr x8
0x06ACF498: e00200b9  str w0, [x23]
0x06ACF49C: 940e40f9  ldr x20, [x20, #0x18]
0x06ACF4A0: f40300b4  cbz x20, #0x6acf51c
0x06ACF4A4: 880240f9  ldr x8, [x20]
0x06ACF4A8: 730240b9  ldr w19, [x19]
0x06ACF4AC: c10240f9  ldr x1, [x22]
0x06ACF4B0: 095d4279  ldrh w9, [x8, #0x12e]
0x06ACF4B4: 290100b4  cbz x9, #0x6acf4d8
0x06ACF4B8: 0a5940f9  ldr x10, [x8, #0xb0]
0x06ACF4BC: 4a210091  add x10, x10, #8
0x06ACF4C0: 4b815ff8  ldur x11, [x10, #-8]
0x06ACF4C4: 7f0101eb  cmp x11, x1
0x06ACF4C8: 00010054  b.eq #0x6acf4e8
0x06ACF4CC: 290500f1  subs x9, x9, #1
0x06ACF4D0: 4a410091  add x10, x10, #0x10
0x06ACF4D4: 61ffff54  b.ne #0x6acf4c0
0x06ACF4D8: 42008052  movz w2, #0x2
0x06ACF4DC: e00314aa  mov x0, x20
0x06ACF4E0: 8c1d1a97  bl #0x3156b10
0x06ACF4E4: 05000014  b #0x6acf4f8
0x06ACF4E8: 490140b9  ldr w9, [x10]
0x06ACF4EC: 29090011  add w9, w9, #2
0x06ACF4F0: 08d1298b  add x8, x8, w9, sxtw #4
0x06ACF4F4: 00e10491  add x0, x8, #0x138
0x06ACF4F8: 080440a9  ldp x8, x1, [x0]
0x06ACF4FC: e00314aa  mov x0, x20
0x06ACF500: 00013fd6  blr x8
0x06ACF504: 7f02006b  cmp w19, w0
0x06ACF508: e0b79f1a  cset w0, ge
0x06ACF50C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06ACF510: f65741a9  ldp x22, x21, [sp, #0x10]
0x06ACF514: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x06ACF518: c0035fd6  ret
0x06ACF51C: e4c51a97  bl #0x3180cac

; RVA 0x6ACF520 | public IReadOnlyList<int> GetUnlockableBoosts() { }
; bytes=380 sha256=b564966ff29098e00942faba05468fda31ea1d274d3caacc9712e07239c0d726 status=arm64_complete_bound indexed_start=True
0x06ACF520: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06ACF524: f44f01a9  stp x20, x19, [sp, #0x10]
0x06ACF528: d49200f0  adrp x20, #0x7d2a000
0x06ACF52C: 88ca6939  ldrb w8, [x20, #0xa72]
0x06ACF530: f30300aa  mov x19, x0
0x06ACF534: 08030037  tbnz w8, #0, #0x6acf594
0x06ACF538: 805f00d0  adrp x0, #0x76c1000
0x06ACF53C: 007c46f9  ldr x0, [x0, #0xcf8]
0x06ACF540: 36c51a97  bl #0x3180a18
0x06ACF544: a06000d0  adrp x0, #0x76e5000
0x06ACF548: 00c842f9  ldr x0, [x0, #0x590]
0x06ACF54C: 33c51a97  bl #0x3180a18
0x06ACF550: a05e0090  adrp x0, #0x76a3000
0x06ACF554: 00c844f9  ldr x0, [x0, #0x990]
0x06ACF558: 30c51a97  bl #0x3180a18
0x06ACF55C: 20630090  adrp x0, #0x7733000
0x06ACF560: 001047f9  ldr x0, [x0, #0xe20]
0x06ACF564: 2dc51a97  bl #0x3180a18
0x06ACF568: 405c00d0  adrp x0, #0x7659000
0x06ACF56C: 000c45f9  ldr x0, [x0, #0xa18]
0x06ACF570: 2ac51a97  bl #0x3180a18
0x06ACF574: 405c00d0  adrp x0, #0x7659000
0x06ACF578: 000845f9  ldr x0, [x0, #0xa10]
0x06ACF57C: 27c51a97  bl #0x3180a18
0x06ACF580: 206300b0  adrp x0, #0x7734000
0x06ACF584: 00a840f9  ldr x0, [x0, #0x150]
0x06ACF588: 24c51a97  bl #0x3180a18
0x06ACF58C: 28008052  movz w8, #0x1
0x06ACF590: 88ca2939  strb w8, [x20, #0xa72]
0x06ACF594: 740e40f9  ldr x20, [x19, #0x18]
0x06ACF598: 140800b4  cbz x20, #0x6acf698
0x06ACF59C: 2a630090  adrp x10, #0x7733000
0x06ACF5A0: 880240f9  ldr x8, [x20]
0x06ACF5A4: 4a1147f9  ldr x10, [x10, #0xe20]
0x06ACF5A8: 095d4279  ldrh w9, [x8, #0x12e]
0x06ACF5AC: 410140f9  ldr x1, [x10]
0x06ACF5B0: 290100b4  cbz x9, #0x6acf5d4
0x06ACF5B4: 0a5940f9  ldr x10, [x8, #0xb0]
0x06ACF5B8: 4a210091  add x10, x10, #8
0x06ACF5BC: 4b815ff8  ldur x11, [x10, #-8]
0x06ACF5C0: 7f0101eb  cmp x11, x1
0x06ACF5C4: 00010054  b.eq #0x6acf5e4
0x06ACF5C8: 290500f1  subs x9, x9, #1
0x06ACF5CC: 4a410091  add x10, x10, #0x10
0x06ACF5D0: 61ffff54  b.ne #0x6acf5bc
0x06ACF5D4: c2008052  movz w2, #0x6
0x06ACF5D8: e00314aa  mov x0, x20
0x06ACF5DC: 4d1d1a97  bl #0x3156b10
0x06ACF5E0: 05000014  b #0x6acf5f4
0x06ACF5E4: 490140b9  ldr w9, [x10]
0x06ACF5E8: 29190011  add w9, w9, #6
0x06ACF5EC: 08d1298b  add x8, x8, w9, sxtw #4
0x06ACF5F0: 00e10491  add x0, x8, #0x138
0x06ACF5F4: 080440a9  ldp x8, x1, [x0]
0x06ACF5F8: e00314aa  mov x0, x20
0x06ACF5FC: 00013fd6  blr x8
0x06ACF600: 20030036  tbz w0, #0, #0x6acf664
0x06ACF604: a85e0090  adrp x8, #0x76a3000
0x06ACF608: 741e40f9  ldr x20, [x19, #0x38]
0x06ACF60C: 08c944f9  ldr x8, [x8, #0x990]
0x06ACF610: 000140f9  ldr x0, [x8]
0x06ACF614: a3c51a97  bl #0x3180ca0
0x06ACF618: 286300b0  adrp x8, #0x7734000
0x06ACF61C: 08a940f9  ldr x8, [x8, #0x150]
0x06ACF620: e10313aa  mov x1, x19
0x06ACF624: e3031faa  mov x3, xzr
0x06ACF628: f50300aa  mov x21, x0
0x06ACF62C: 020140f9  ldr x2, [x8]
0x06ACF630: bd119e97  bl #0x5253d24
0x06ACF634: a86000d0  adrp x8, #0x76e5000
0x06ACF638: 08c942f9  ldr x8, [x8, #0x590]
0x06ACF63C: e00314aa  mov x0, x20
0x06ACF640: e10315aa  mov x1, x21
0x06ACF644: 020140f9  ldr x2, [x8]
0x06ACF648: aedd4697  bl #0x3c86d00
0x06ACF64C: 885f00d0  adrp x8, #0x76c1000
0x06ACF650: 087d46f9  ldr x8, [x8, #0xcf8]
0x06ACF654: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06ACF658: 010140f9  ldr x1, [x8]
0x06ACF65C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06ACF660: e0414617  b #0x3c5fde0
0x06ACF664: 485c00d0  adrp x8, #0x7659000
0x06ACF668: 080945f9  ldr x8, [x8, #0xa10]
0x06ACF66C: 000140f9  ldr x0, [x8]
0x06ACF670: 8cc51a97  bl #0x3180ca0
0x06ACF674: 485c00d0  adrp x8, #0x7659000
0x06ACF678: 080d45f9  ldr x8, [x8, #0xa18]
0x06ACF67C: f30300aa  mov x19, x0
0x06ACF680: 010140f9  ldr x1, [x8]
0x06ACF684: 70275597  bl #0x4019444
0x06ACF688: e00313aa  mov x0, x19
0x06ACF68C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06ACF690: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06ACF694: c0035fd6  ret
0x06ACF698: 85c51a97  bl #0x3180cac

; RVA 0x6ACF69C | public IReadOnlyList<int> GetPlayablePowerBoosts() { }
; bytes=8 sha256=6b819324b4a3bc2d390c83c7fe02ea41a1f57ae5d4f2a9b0c9256341a5b8d37f status=arm64_complete_bound indexed_start=True
0x06ACF69C: 001840f9  ldr x0, [x0, #0x30]
0x06ACF6A0: c0035fd6  ret

; RVA 0x6ACF6A4 | public void OnConfigurationUpdated() { }
; bytes=504 sha256=62e012bd099afe77d65ad2a086daf1177936d5607952e0fd9992029576171b26 status=arm64_complete_bound indexed_start=True
0x06ACF6A4: fe0f1df8  str x30, [sp, #-0x30]!
0x06ACF6A8: f65701a9  stp x22, x21, [sp, #0x10]
0x06ACF6AC: f44f02a9  stp x20, x19, [sp, #0x20]
0x06ACF6B0: d49200f0  adrp x20, #0x7d2a000
0x06ACF6B4: 88ce6939  ldrb w8, [x20, #0xa73]
0x06ACF6B8: f30300aa  mov x19, x0
0x06ACF6BC: 88010037  tbnz w8, #0, #0x6acf6ec
0x06ACF6C0: 005d0090  adrp x0, #0x766f000
0x06ACF6C4: 00f844f9  ldr x0, [x0, #0x9f0]
0x06ACF6C8: d4c41a97  bl #0x3180a18
0x06ACF6CC: 20630090  adrp x0, #0x7733000
0x06ACF6D0: 001047f9  ldr x0, [x0, #0xe20]
0x06ACF6D4: d1c41a97  bl #0x3180a18
0x06ACF6D8: 605e0090  adrp x0, #0x769b000
0x06ACF6DC: 000c46f9  ldr x0, [x0, #0xc18]
0x06ACF6E0: cec41a97  bl #0x3180a18
0x06ACF6E4: 28008052  movz w8, #0x1
0x06ACF6E8: 88ce2939  strb w8, [x20, #0xa73]
0x06ACF6EC: e00313aa  mov x0, x19
0x06ACF6F0: 31fdff97  bl #0x6acebb4
0x06ACF6F4: e00313aa  mov x0, x19
0x06ACF6F8: f1fdff97  bl #0x6aceebc
0x06ACF6FC: 740e40f9  ldr x20, [x19, #0x18]
0x06ACF700: d40c00b4  cbz x20, #0x6acf898
0x06ACF704: 36630090  adrp x22, #0x7733000
0x06ACF708: 880240f9  ldr x8, [x20]
0x06ACF70C: d61247f9  ldr x22, [x22, #0xe20]
0x06ACF710: 095d4279  ldrh w9, [x8, #0x12e]
0x06ACF714: c10240f9  ldr x1, [x22]
0x06ACF718: 290100b4  cbz x9, #0x6acf73c
0x06ACF71C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06ACF720: 4a210091  add x10, x10, #8
0x06ACF724: 4b815ff8  ldur x11, [x10, #-8]
0x06ACF728: 7f0101eb  cmp x11, x1
0x06ACF72C: 00010054  b.eq #0x6acf74c
0x06ACF730: 290500f1  subs x9, x9, #1
0x06ACF734: 4a410091  add x10, x10, #0x10
0x06ACF738: 61ffff54  b.ne #0x6acf724
0x06ACF73C: c2008052  movz w2, #0x6
0x06ACF740: e00314aa  mov x0, x20
0x06ACF744: f31c1a97  bl #0x3156b10
0x06ACF748: 05000014  b #0x6acf75c
0x06ACF74C: 490140b9  ldr w9, [x10]
0x06ACF750: 29190011  add w9, w9, #6
0x06ACF754: 08d1298b  add x8, x8, w9, sxtw #4
0x06ACF758: 00e10491  add x0, x8, #0x138
0x06ACF75C: 080440a9  ldp x8, x1, [x0]
0x06ACF760: e00314aa  mov x0, x20
0x06ACF764: 00013fd6  blr x8
0x06ACF768: 60020036  tbz w0, #0, #0x6acf7b4
0x06ACF76C: 740e40f9  ldr x20, [x19, #0x18]
0x06ACF770: 540900b4  cbz x20, #0x6acf898
0x06ACF774: 880240f9  ldr x8, [x20]
0x06ACF778: c10240f9  ldr x1, [x22]
0x06ACF77C: 095d4279  ldrh w9, [x8, #0x12e]
0x06ACF780: 290100b4  cbz x9, #0x6acf7a4
0x06ACF784: 0a5940f9  ldr x10, [x8, #0xb0]
0x06ACF788: 4a210091  add x10, x10, #8
0x06ACF78C: 4b815ff8  ldur x11, [x10, #-8]
0x06ACF790: 7f0101eb  cmp x11, x1
0x06ACF794: a0010054  b.eq #0x6acf7c8
0x06ACF798: 290500f1  subs x9, x9, #1
0x06ACF79C: 4a410091  add x10, x10, #0x10
0x06ACF7A0: 61ffff54  b.ne #0x6acf78c
0x06ACF7A4: e00314aa  mov x0, x20
0x06ACF7A8: e2031f2a  mov w2, wzr
0x06ACF7AC: d91c1a97  bl #0x3156b10
0x06ACF7B0: 09000014  b #0x6acf7d4
0x06ACF7B4: e00313aa  mov x0, x19
0x06ACF7B8: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06ACF7BC: f65741a9  ldp x22, x21, [sp, #0x10]
0x06ACF7C0: fe0743f8  ldr x30, [sp], #0x30
0x06ACF7C4: 36000014  b #0x6acf89c
0x06ACF7C8: 490180b9  ldrsw x9, [x10]
0x06ACF7CC: 0811098b  add x8, x8, x9, lsl #4
0x06ACF7D0: 00e10491  add x0, x8, #0x138
0x06ACF7D4: 080440a9  ldp x8, x1, [x0]
0x06ACF7D8: e00314aa  mov x0, x20
0x06ACF7DC: 00013fd6  blr x8
0x06ACF7E0: c00500b4  cbz x0, #0x6acf898
0x06ACF7E4: 750e40f9  ldr x21, [x19, #0x18]
0x06ACF7E8: 950500b4  cbz x21, #0x6acf898
0x06ACF7EC: a80240f9  ldr x8, [x21]
0x06ACF7F0: 142040b9  ldr w20, [x0, #0x20]
0x06ACF7F4: c10240f9  ldr x1, [x22]
0x06ACF7F8: 095d4279  ldrh w9, [x8, #0x12e]
0x06ACF7FC: 290100b4  cbz x9, #0x6acf820
0x06ACF800: 0a5940f9  ldr x10, [x8, #0xb0]
0x06ACF804: 4a210091  add x10, x10, #8
0x06ACF808: 4b815ff8  ldur x11, [x10, #-8]
0x06ACF80C: 7f0101eb  cmp x11, x1
0x06ACF810: 00010054  b.eq #0x6acf830
0x06ACF814: 290500f1  subs x9, x9, #1
0x06ACF818: 4a410091  add x10, x10, #0x10
0x06ACF81C: 61ffff54  b.ne #0x6acf808
0x06ACF820: 22008052  movz w2, #0x1
0x06ACF824: e00315aa  mov x0, x21
0x06ACF828: ba1c1a97  bl #0x3156b10
0x06ACF82C: 05000014  b #0x6acf840
0x06ACF830: 490140b9  ldr w9, [x10]
0x06ACF834: 29050011  add w9, w9, #1
0x06ACF838: 08d1298b  add x8, x8, w9, sxtw #4
0x06ACF83C: 00e10491  add x0, x8, #0x138
0x06ACF840: 080440a9  ldp x8, x1, [x0]
0x06ACF844: e00315aa  mov x0, x21
0x06ACF848: 00013fd6  blr x8
0x06ACF84C: 9f02006b  cmp w20, w0
0x06ACF850: 2d010054  b.le #0x6acf874
0x06ACF854: 601e40f9  ldr x0, [x19, #0x38]
0x06ACF858: 000200b4  cbz x0, #0x6acf898
0x06ACF85C: 685e0090  adrp x8, #0x769b000
0x06ACF860: 080d46f9  ldr x8, [x8, #0xc18]
0x06ACF864: e103142a  mov w1, w20
0x06ACF868: 020140f9  ldr x2, [x8]
0x06ACF86C: e9295597  bl #0x401a010
0x06ACF870: a0000036  tbz w0, #0, #0x6acf884
0x06ACF874: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06ACF878: f65741a9  ldp x22, x21, [sp, #0x10]
0x06ACF87C: fe0743f8  ldr x30, [sp], #0x30
0x06ACF880: c0035fd6  ret
0x06ACF884: e00313aa  mov x0, x19
0x06ACF888: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06ACF88C: f65741a9  ldp x22, x21, [sp, #0x10]
0x06ACF890: fe0743f8  ldr x30, [sp], #0x30
0x06ACF894: 44000014  b #0x6acf9a4
0x06ACF898: 05c51a97  bl #0x3180cac

; RVA 0x6ACFBF8 | public void SwitchBoost() { }
; bytes=440 sha256=dde4e03ed728ea3424e28370239e3f7c81f56371e519805fe68768b14f59487b status=arm64_complete_bound indexed_start=True
0x06ACFBF8: fe0f1df8  str x30, [sp, #-0x30]!
0x06ACFBFC: f65701a9  stp x22, x21, [sp, #0x10]
0x06ACFC00: f44f02a9  stp x20, x19, [sp, #0x20]
0x06ACFC04: d39200f0  adrp x19, #0x7d2a000
0x06ACFC08: 68d26939  ldrb w8, [x19, #0xa74]
0x06ACFC0C: f40300aa  mov x20, x0
0x06ACFC10: 88010037  tbnz w8, #0, #0x6acfc40
0x06ACFC14: 20630090  adrp x0, #0x7733000
0x06ACFC18: 001047f9  ldr x0, [x0, #0xe20]
0x06ACFC1C: 7fc31a97  bl #0x3180a18
0x06ACFC20: 605e0090  adrp x0, #0x769b000
0x06ACFC24: 000c46f9  ldr x0, [x0, #0xc18]
0x06ACFC28: 7cc31a97  bl #0x3180a18
0x06ACFC2C: 405c00d0  adrp x0, #0x7659000
0x06ACFC30: 005c45f9  ldr x0, [x0, #0xab8]
0x06ACFC34: 79c31a97  bl #0x3180a18
0x06ACFC38: 28008052  movz w8, #0x1
0x06ACFC3C: 68d22939  strb w8, [x19, #0xa74]
0x06ACFC40: e00314aa  mov x0, x20
0x06ACFC44: 5b000094  bl #0x6acfdb0
0x06ACFC48: 950e40f9  ldr x21, [x20, #0x18]
0x06ACFC4C: 150b00b4  cbz x21, #0x6acfdac
0x06ACFC50: 36630090  adrp x22, #0x7733000
0x06ACFC54: a80240f9  ldr x8, [x21]
0x06ACFC58: d61247f9  ldr x22, [x22, #0xe20]
0x06ACFC5C: f303002a  mov w19, w0
0x06ACFC60: 095d4279  ldrh w9, [x8, #0x12e]
0x06ACFC64: c10240f9  ldr x1, [x22]
0x06ACFC68: 290100b4  cbz x9, #0x6acfc8c
0x06ACFC6C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06ACFC70: 4a210091  add x10, x10, #8
0x06ACFC74: 4b815ff8  ldur x11, [x10, #-8]
0x06ACFC78: 7f0101eb  cmp x11, x1
0x06ACFC7C: 00010054  b.eq #0x6acfc9c
0x06ACFC80: 290500f1  subs x9, x9, #1
0x06ACFC84: 4a410091  add x10, x10, #0x10
0x06ACFC88: 61ffff54  b.ne #0x6acfc74
0x06ACFC8C: 22008052  movz w2, #0x1
0x06ACFC90: e00315aa  mov x0, x21
0x06ACFC94: 9f1b1a97  bl #0x3156b10
0x06ACFC98: 05000014  b #0x6acfcac
0x06ACFC9C: 490140b9  ldr w9, [x10]
0x06ACFCA0: 29050011  add w9, w9, #1
0x06ACFCA4: 08d1298b  add x8, x8, w9, sxtw #4
0x06ACFCA8: 00e10491  add x0, x8, #0x138
0x06ACFCAC: 080440a9  ldp x8, x1, [x0]
0x06ACFCB0: e00315aa  mov x0, x21
0x06ACFCB4: 00013fd6  blr x8
0x06ACFCB8: 7f02006b  cmp w19, w0
0x06ACFCBC: 81030054  b.ne #0x6acfd2c
0x06ACFCC0: 801a40f9  ldr x0, [x20, #0x30]
0x06ACFCC4: 400700b4  cbz x0, #0x6acfdac
0x06ACFCC8: 081840b9  ldr w8, [x0, #0x18]
0x06ACFCCC: 1f050071  cmp w8, #1
0x06ACFCD0: e1020054  b.ne #0x6acfd2c
0x06ACFCD4: 685e0090  adrp x8, #0x769b000
0x06ACFCD8: 080d46f9  ldr x8, [x8, #0xc18]
0x06ACFCDC: e103132a  mov w1, w19
0x06ACFCE0: 020140f9  ldr x2, [x8]
0x06ACFCE4: cb285597  bl #0x401a010
0x06ACFCE8: 20020036  tbz w0, #0, #0x6acfd2c
0x06ACFCEC: 940e40f9  ldr x20, [x20, #0x18]
0x06ACFCF0: f40500b4  cbz x20, #0x6acfdac
0x06ACFCF4: 880240f9  ldr x8, [x20]
0x06ACFCF8: c10240f9  ldr x1, [x22]
0x06ACFCFC: 095d4279  ldrh w9, [x8, #0x12e]
0x06ACFD00: 290100b4  cbz x9, #0x6acfd24
0x06ACFD04: 0a5940f9  ldr x10, [x8, #0xb0]
0x06ACFD08: 4a210091  add x10, x10, #8
0x06ACFD0C: 4b815ff8  ldur x11, [x10, #-8]
0x06ACFD10: 7f0101eb  cmp x11, x1
0x06ACFD14: 60040054  b.eq #0x6acfda0
0x06ACFD18: 290500f1  subs x9, x9, #1
0x06ACFD1C: 4a410091  add x10, x10, #0x10
0x06ACFD20: 61ffff54  b.ne #0x6acfd0c
0x06ACFD24: c2018052  movz w2, #0xe
0x06ACFD28: 10000014  b #0x6acfd68
0x06ACFD2C: 940e40f9  ldr x20, [x20, #0x18]
0x06ACFD30: f40300b4  cbz x20, #0x6acfdac
0x06ACFD34: 880240f9  ldr x8, [x20]
0x06ACFD38: c10240f9  ldr x1, [x22]
0x06ACFD3C: 095d4279  ldrh w9, [x8, #0x12e]
0x06ACFD40: 290100b4  cbz x9, #0x6acfd64
0x06ACFD44: 0a5940f9  ldr x10, [x8, #0xb0]
0x06ACFD48: 4a210091  add x10, x10, #8
0x06ACFD4C: 4b815ff8  ldur x11, [x10, #-8]
0x06ACFD50: 7f0101eb  cmp x11, x1
0x06ACFD54: 00010054  b.eq #0x6acfd74
0x06ACFD58: 290500f1  subs x9, x9, #1
0x06ACFD5C: 4a410091  add x10, x10, #0x10
0x06ACFD60: 61ffff54  b.ne #0x6acfd4c
0x06ACFD64: a2018052  movz w2, #0xd
0x06ACFD68: e00314aa  mov x0, x20
0x06ACFD6C: 691b1a97  bl #0x3156b10
0x06ACFD70: 05000014  b #0x6acfd84
0x06ACFD74: 490140b9  ldr w9, [x10]
0x06ACFD78: 29350011  add w9, w9, #0xd
0x06ACFD7C: 08d1298b  add x8, x8, w9, sxtw #4
0x06ACFD80: 00e10491  add x0, x8, #0x138
0x06ACFD84: 030840a9  ldp x3, x2, [x0]
0x06ACFD88: e00314aa  mov x0, x20
0x06ACFD8C: e103132a  mov w1, w19
0x06ACFD90: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06ACFD94: f65741a9  ldp x22, x21, [sp, #0x10]
0x06ACFD98: fe0743f8  ldr x30, [sp], #0x30
0x06ACFD9C: 60001fd6  br x3
0x06ACFDA0: 490140b9  ldr w9, [x10]
0x06ACFDA4: 29390011  add w9, w9, #0xe
0x06ACFDA8: f5ffff17  b #0x6acfd7c
0x06ACFDAC: c0c31a97  bl #0x3180cac

; RVA 0x6ACFDB0 | public int CalculateNextBoost() { }
; bytes=596 sha256=3940323be9f6a97681a2f5b8ade6f189283ce9e96e765fe666022d3d90dcb72e status=arm64_complete_bound indexed_start=True
0x06ACFDB0: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x06ACFDB4: f65701a9  stp x22, x21, [sp, #0x10]
0x06ACFDB8: f44f02a9  stp x20, x19, [sp, #0x20]
0x06ACFDBC: d49200f0  adrp x20, #0x7d2a000
0x06ACFDC0: 88d66939  ldrb w8, [x20, #0xa75]
0x06ACFDC4: f30300aa  mov x19, x0
0x06ACFDC8: 08030037  tbnz w8, #0, #0x6acfe28
0x06ACFDCC: 005d0090  adrp x0, #0x766f000
0x06ACFDD0: 00f844f9  ldr x0, [x0, #0x9f0]
0x06ACFDD4: 11c31a97  bl #0x3180a18
0x06ACFDD8: 00630090  adrp x0, #0x772f000
0x06ACFDDC: 006843f9  ldr x0, [x0, #0x6d0]
0x06ACFDE0: 0ec31a97  bl #0x3180a18
0x06ACFDE4: 805f00d0  adrp x0, #0x76c1000
0x06ACFDE8: 007c46f9  ldr x0, [x0, #0xcf8]
0x06ACFDEC: 0bc31a97  bl #0x3180a18
0x06ACFDF0: 20630090  adrp x0, #0x7733000
0x06ACFDF4: 001047f9  ldr x0, [x0, #0xe20]
0x06ACFDF8: 08c31a97  bl #0x3180a18
0x06ACFDFC: 205e00d0  adrp x0, #0x7695000
0x06ACFE00: 007041f9  ldr x0, [x0, #0x2e0]
0x06ACFE04: 05c31a97  bl #0x3180a18
0x06ACFE08: 405c00d0  adrp x0, #0x7659000
0x06ACFE0C: 005c45f9  ldr x0, [x0, #0xab8]
0x06ACFE10: 02c31a97  bl #0x3180a18
0x06ACFE14: 405c00d0  adrp x0, #0x7659000
0x06ACFE18: 006045f9  ldr x0, [x0, #0xac0]
0x06ACFE1C: ffc21a97  bl #0x3180a18
0x06ACFE20: 28008052  movz w8, #0x1
0x06ACFE24: 88d62939  strb w8, [x20, #0xa75]
0x06ACFE28: 740e40f9  ldr x20, [x19, #0x18]
0x06ACFE2C: b40e00b4  cbz x20, #0x6ad0000
0x06ACFE30: 37630090  adrp x23, #0x7733000
0x06ACFE34: 880240f9  ldr x8, [x20]
0x06ACFE38: f71247f9  ldr x23, [x23, #0xe20]
0x06ACFE3C: 095d4279  ldrh w9, [x8, #0x12e]
0x06ACFE40: e10240f9  ldr x1, [x23]
0x06ACFE44: 290100b4  cbz x9, #0x6acfe68
0x06ACFE48: 0a5940f9  ldr x10, [x8, #0xb0]
0x06ACFE4C: 4a210091  add x10, x10, #8
0x06ACFE50: 4b815ff8  ldur x11, [x10, #-8]
0x06ACFE54: 7f0101eb  cmp x11, x1
0x06ACFE58: 00010054  b.eq #0x6acfe78
0x06ACFE5C: 290500f1  subs x9, x9, #1
0x06ACFE60: 4a410091  add x10, x10, #0x10
0x06ACFE64: 61ffff54  b.ne #0x6acfe50
0x06ACFE68: e00314aa  mov x0, x20
0x06ACFE6C: e2031f2a  mov w2, wzr
0x06ACFE70: 281b1a97  bl #0x3156b10
0x06ACFE74: 04000014  b #0x6acfe84
0x06ACFE78: 490180b9  ldrsw x9, [x10]
0x06ACFE7C: 0811098b  add x8, x8, x9, lsl #4
0x06ACFE80: 00e10491  add x0, x8, #0x138
0x06ACFE84: 080440a9  ldp x8, x1, [x0]
0x06ACFE88: e00314aa  mov x0, x20
0x06ACFE8C: 00013fd6  blr x8
0x06ACFE90: 800b00b4  cbz x0, #0x6ad0000
0x06ACFE94: 885f00d0  adrp x8, #0x76c1000
0x06ACFE98: 087d46f9  ldr x8, [x8, #0xcf8]
0x06ACFE9C: 152040b9  ldr w21, [x0, #0x20]
0x06ACFEA0: 601a40f9  ldr x0, [x19, #0x30]
0x06ACFEA4: 010140f9  ldr x1, [x8]
0x06ACFEA8: ce3f4697  bl #0x3c5fde0
0x06ACFEAC: 760e40f9  ldr x22, [x19, #0x18]
0x06ACFEB0: 960a00b4  cbz x22, #0x6ad0000
0x06ACFEB4: c80240f9  ldr x8, [x22]
0x06ACFEB8: e10240f9  ldr x1, [x23]
0x06ACFEBC: f40300aa  mov x20, x0
0x06ACFEC0: 095d4279  ldrh w9, [x8, #0x12e]
0x06ACFEC4: 290100b4  cbz x9, #0x6acfee8
0x06ACFEC8: 0a5940f9  ldr x10, [x8, #0xb0]
0x06ACFECC: 4a210091  add x10, x10, #8
0x06ACFED0: 4b815ff8  ldur x11, [x10, #-8]
0x06ACFED4: 7f0101eb  cmp x11, x1
0x06ACFED8: 00010054  b.eq #0x6acfef8
0x06ACFEDC: 290500f1  subs x9, x9, #1
0x06ACFEE0: 4a410091  add x10, x10, #0x10
0x06ACFEE4: 61ffff54  b.ne #0x6acfed0
0x06ACFEE8: 22008052  movz w2, #0x1
0x06ACFEEC: e00316aa  mov x0, x22
0x06ACFEF0: 081b1a97  bl #0x3156b10
0x06ACFEF4: 05000014  b #0x6acff08
0x06ACFEF8: 490140b9  ldr w9, [x10]
0x06ACFEFC: 29050011  add w9, w9, #1
0x06ACFF00: 08d1298b  add x8, x8, w9, sxtw #4
0x06ACFF04: 00e10491  add x0, x8, #0x138
0x06ACFF08: 080440a9  ldp x8, x1, [x0]
0x06ACFF0C: e00316aa  mov x0, x22
0x06ACFF10: 00013fd6  blr x8
0x06ACFF14: 760e40f9  ldr x22, [x19, #0x18]
0x06ACFF18: 560700b4  cbz x22, #0x6ad0000
0x06ACFF1C: c80240f9  ldr x8, [x22]
0x06ACFF20: e10240f9  ldr x1, [x23]
0x06ACFF24: f303002a  mov w19, w0
0x06ACFF28: 095d4279  ldrh w9, [x8, #0x12e]
0x06ACFF2C: 290100b4  cbz x9, #0x6acff50
0x06ACFF30: 0a5940f9  ldr x10, [x8, #0xb0]
0x06ACFF34: 4a210091  add x10, x10, #8
0x06ACFF38: 4b815ff8  ldur x11, [x10, #-8]
0x06ACFF3C: 7f0101eb  cmp x11, x1
0x06ACFF40: 00010054  b.eq #0x6acff60
0x06ACFF44: 290500f1  subs x9, x9, #1
0x06ACFF48: 4a410091  add x10, x10, #0x10
0x06ACFF4C: 61ffff54  b.ne #0x6acff38
0x06ACFF50: c2008052  movz w2, #0x6
0x06ACFF54: e00316aa  mov x0, x22
0x06ACFF58: ee1a1a97  bl #0x3156b10
0x06ACFF5C: 05000014  b #0x6acff70
0x06ACFF60: 490140b9  ldr w9, [x10]
0x06ACFF64: 29190011  add w9, w9, #6
0x06ACFF68: 08d1298b  add x8, x8, w9, sxtw #4
0x06ACFF6C: 00e10491  add x0, x8, #0x138
0x06ACFF70: 080440a9  ldp x8, x1, [x0]
0x06ACFF74: e00316aa  mov x0, x22
0x06ACFF78: 00013fd6  blr x8
0x06ACFF7C: 80030036  tbz w0, #0, #0x6acffec
0x06ACFF80: 08630090  adrp x8, #0x772f000
0x06ACFF84: 086943f9  ldr x8, [x8, #0x6d0]
0x06ACFF88: e00314aa  mov x0, x20
0x06ACFF8C: 010140f9  ldr x1, [x8]
0x06ACFF90: e05f4597  bl #0x3c27f10
0x06ACFF94: c0020036  tbz w0, #0, #0x6acffec
0x06ACFF98: 540300b4  cbz x20, #0x6ad0000
0x06ACFF9C: 285e00d0  adrp x8, #0x7695000
0x06ACFFA0: 087141f9  ldr x8, [x8, #0x2e0]
0x06ACFFA4: e00314aa  mov x0, x20
0x06ACFFA8: e103152a  mov w1, w21
0x06ACFFAC: 020140f9  ldr x2, [x8]
0x06ACFFB0: 9a2a5597  bl #0x401aa18
0x06ACFFB4: c001f837  tbnz w0, #0x1f, #0x6acffec
0x06ACFFB8: 881a40b9  ldr w8, [x20, #0x18]
0x06ACFFBC: 08050051  sub w8, w8, #1
0x06ACFFC0: 1f00086b  cmp w0, w8
0x06ACFFC4: 4a010054  b.ge #0x6acffec
0x06ACFFC8: 485c00d0  adrp x8, #0x7659000
0x06ACFFCC: 086145f9  ldr x8, [x8, #0xac0]
0x06ACFFD0: 01040011  add w1, w0, #1
0x06ACFFD4: e00314aa  mov x0, x20
0x06ACFFD8: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06ACFFDC: 020140f9  ldr x2, [x8]
0x06ACFFE0: f65741a9  ldp x22, x21, [sp, #0x10]
0x06ACFFE4: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x06ACFFE8: 70265517  b #0x40199a8
0x06ACFFEC: e003132a  mov w0, w19
0x06ACFFF0: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06ACFFF4: f65741a9  ldp x22, x21, [sp, #0x10]
0x06ACFFF8: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x06ACFFFC: c0035fd6  ret
0x06AD0000: 2bc31a97  bl #0x3180cac

; RVA 0x6ACF89C | public void ResetCurrentPowerBoost() { }
; bytes=264 sha256=38d36cd9ae6f3746934043725b75eacba1c56ad8ecdf847f0749762ec048945b status=arm64_complete_bound indexed_start=True
0x06ACF89C: fe0f1ef8  str x30, [sp, #-0x20]!
0x06ACF8A0: f44f01a9  stp x20, x19, [sp, #0x10]
0x06ACF8A4: d49200f0  adrp x20, #0x7d2a000
0x06ACF8A8: 88da6939  ldrb w8, [x20, #0xa76]
0x06ACF8AC: f30300aa  mov x19, x0
0x06ACF8B0: c8000037  tbnz w8, #0, #0x6acf8c8
0x06ACF8B4: 20630090  adrp x0, #0x7733000
0x06ACF8B8: 001047f9  ldr x0, [x0, #0xe20]
0x06ACF8BC: 57c41a97  bl #0x3180a18
0x06ACF8C0: 28008052  movz w8, #0x1
0x06ACF8C4: 88da2939  strb w8, [x20, #0xa76]
0x06ACF8C8: 730e40f9  ldr x19, [x19, #0x18]
0x06ACF8CC: b30600b4  cbz x19, #0x6acf9a0
0x06ACF8D0: 34630090  adrp x20, #0x7733000
0x06ACF8D4: 680240f9  ldr x8, [x19]
0x06ACF8D8: 941247f9  ldr x20, [x20, #0xe20]
0x06ACF8DC: 095d4279  ldrh w9, [x8, #0x12e]
0x06ACF8E0: 810240f9  ldr x1, [x20]
0x06ACF8E4: 290100b4  cbz x9, #0x6acf908
0x06ACF8E8: 0a5940f9  ldr x10, [x8, #0xb0]
0x06ACF8EC: 4a210091  add x10, x10, #8
0x06ACF8F0: 4b815ff8  ldur x11, [x10, #-8]
0x06ACF8F4: 7f0101eb  cmp x11, x1
0x06ACF8F8: 00010054  b.eq #0x6acf918
0x06ACF8FC: 290500f1  subs x9, x9, #1
0x06ACF900: 4a410091  add x10, x10, #0x10
0x06ACF904: 61ffff54  b.ne #0x6acf8f0
0x06ACF908: 22008052  movz w2, #0x1
0x06ACF90C: e00313aa  mov x0, x19
0x06ACF910: 801c1a97  bl #0x3156b10
0x06ACF914: 05000014  b #0x6acf928
0x06ACF918: 490140b9  ldr w9, [x10]
0x06ACF91C: 29050011  add w9, w9, #1
0x06ACF920: 08d1298b  add x8, x8, w9, sxtw #4
0x06ACF924: 00e10491  add x0, x8, #0x138
0x06ACF928: 080440a9  ldp x8, x1, [x0]
0x06ACF92C: e00313aa  mov x0, x19
0x06ACF930: 00013fd6  blr x8
0x06ACF934: 680240f9  ldr x8, [x19]
0x06ACF938: 810240f9  ldr x1, [x20]
0x06ACF93C: f403002a  mov w20, w0
0x06ACF940: 095d4279  ldrh w9, [x8, #0x12e]
0x06ACF944: 290100b4  cbz x9, #0x6acf968
0x06ACF948: 0a5940f9  ldr x10, [x8, #0xb0]
0x06ACF94C: 4a210091  add x10, x10, #8
0x06ACF950: 4b815ff8  ldur x11, [x10, #-8]
0x06ACF954: 7f0101eb  cmp x11, x1
0x06ACF958: 00010054  b.eq #0x6acf978
0x06ACF95C: 290500f1  subs x9, x9, #1
0x06ACF960: 4a410091  add x10, x10, #0x10
0x06ACF964: 61ffff54  b.ne #0x6acf950
0x06ACF968: a2018052  movz w2, #0xd
0x06ACF96C: e00313aa  mov x0, x19
0x06ACF970: 681c1a97  bl #0x3156b10
0x06ACF974: 05000014  b #0x6acf988
0x06ACF978: 490140b9  ldr w9, [x10]
0x06ACF97C: 29350011  add w9, w9, #0xd
0x06ACF980: 08d1298b  add x8, x8, w9, sxtw #4
0x06ACF984: 00e10491  add x0, x8, #0x138
0x06ACF988: 030840a9  ldp x3, x2, [x0]
0x06ACF98C: e00313aa  mov x0, x19
0x06ACF990: e103142a  mov w1, w20
0x06ACF994: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06ACF998: fe0742f8  ldr x30, [sp], #0x20
0x06ACF99C: 60001fd6  br x3
0x06ACF9A0: c3c41a97  bl #0x3180cac

; RVA 0x6ACF9A4 | public void ResetToMaxAvailableBoost() { }
; bytes=596 sha256=e970e9d784b1f1ef1095e1b9b1f3524b6275dc8480a66c6f1b61f522cbf7e5c2 status=arm64_complete_bound indexed_start=True
0x06ACF9A4: fe0f1df8  str x30, [sp, #-0x30]!
0x06ACF9A8: f65701a9  stp x22, x21, [sp, #0x10]
0x06ACF9AC: f44f02a9  stp x20, x19, [sp, #0x20]
0x06ACF9B0: d49200f0  adrp x20, #0x7d2a000
0x06ACF9B4: 88de6939  ldrb w8, [x20, #0xa77]
0x06ACF9B8: f30300aa  mov x19, x0
0x06ACF9BC: 88010037  tbnz w8, #0, #0x6acf9ec
0x06ACF9C0: 005d0090  adrp x0, #0x766f000
0x06ACF9C4: 00f844f9  ldr x0, [x0, #0x9f0]
0x06ACF9C8: 14c41a97  bl #0x3180a18
0x06ACF9CC: 20630090  adrp x0, #0x7733000
0x06ACF9D0: 001047f9  ldr x0, [x0, #0xe20]
0x06ACF9D4: 11c41a97  bl #0x3180a18
0x06ACF9D8: 605e0090  adrp x0, #0x769b000
0x06ACF9DC: 000c46f9  ldr x0, [x0, #0xc18]
0x06ACF9E0: 0ec41a97  bl #0x3180a18
0x06ACF9E4: 28008052  movz w8, #0x1
0x06ACF9E8: 88de2939  strb w8, [x20, #0xa77]
0x06ACF9EC: 740e40f9  ldr x20, [x19, #0x18]
0x06ACF9F0: 341000b4  cbz x20, #0x6acfbf4
0x06ACF9F4: 36630090  adrp x22, #0x7733000
0x06ACF9F8: 880240f9  ldr x8, [x20]
0x06ACF9FC: d61247f9  ldr x22, [x22, #0xe20]
0x06ACFA00: 095d4279  ldrh w9, [x8, #0x12e]
0x06ACFA04: c10240f9  ldr x1, [x22]
0x06ACFA08: 290100b4  cbz x9, #0x6acfa2c
0x06ACFA0C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06ACFA10: 4a210091  add x10, x10, #8
0x06ACFA14: 4b815ff8  ldur x11, [x10, #-8]
0x06ACFA18: 7f0101eb  cmp x11, x1
0x06ACFA1C: 00010054  b.eq #0x6acfa3c
0x06ACFA20: 290500f1  subs x9, x9, #1
0x06ACFA24: 4a410091  add x10, x10, #0x10
0x06ACFA28: 61ffff54  b.ne #0x6acfa14
0x06ACFA2C: c2008052  movz w2, #0x6
0x06ACFA30: e00314aa  mov x0, x20
0x06ACFA34: 371c1a97  bl #0x3156b10
0x06ACFA38: 05000014  b #0x6acfa4c
0x06ACFA3C: 490140b9  ldr w9, [x10]
0x06ACFA40: 29190011  add w9, w9, #6
0x06ACFA44: 08d1298b  add x8, x8, w9, sxtw #4
0x06ACFA48: 00e10491  add x0, x8, #0x138
0x06ACFA4C: 080440a9  ldp x8, x1, [x0]
0x06ACFA50: e00314aa  mov x0, x20
0x06ACFA54: 00013fd6  blr x8
0x06ACFA58: 60020036  tbz w0, #0, #0x6acfaa4
0x06ACFA5C: 740e40f9  ldr x20, [x19, #0x18]
0x06ACFA60: b40c00b4  cbz x20, #0x6acfbf4
0x06ACFA64: 880240f9  ldr x8, [x20]
0x06ACFA68: c10240f9  ldr x1, [x22]
0x06ACFA6C: 095d4279  ldrh w9, [x8, #0x12e]
0x06ACFA70: 290100b4  cbz x9, #0x6acfa94
0x06ACFA74: 0a5940f9  ldr x10, [x8, #0xb0]
0x06ACFA78: 4a210091  add x10, x10, #8
0x06ACFA7C: 4b815ff8  ldur x11, [x10, #-8]
0x06ACFA80: 7f0101eb  cmp x11, x1
0x06ACFA84: a0010054  b.eq #0x6acfab8
0x06ACFA88: 290500f1  subs x9, x9, #1
0x06ACFA8C: 4a410091  add x10, x10, #0x10
0x06ACFA90: 61ffff54  b.ne #0x6acfa7c
0x06ACFA94: e00314aa  mov x0, x20
0x06ACFA98: e2031f2a  mov w2, wzr
0x06ACFA9C: 1d1c1a97  bl #0x3156b10
0x06ACFAA0: 09000014  b #0x6acfac4
0x06ACFAA4: e00313aa  mov x0, x19
0x06ACFAA8: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06ACFAAC: f65741a9  ldp x22, x21, [sp, #0x10]
0x06ACFAB0: fe0743f8  ldr x30, [sp], #0x30
0x06ACFAB4: 7affff17  b #0x6acf89c
0x06ACFAB8: 490180b9  ldrsw x9, [x10]
0x06ACFABC: 0811098b  add x8, x8, x9, lsl #4
0x06ACFAC0: 00e10491  add x0, x8, #0x138
0x06ACFAC4: 080440a9  ldp x8, x1, [x0]
0x06ACFAC8: e00314aa  mov x0, x20
0x06ACFACC: 00013fd6  blr x8
0x06ACFAD0: 200900b4  cbz x0, #0x6acfbf4
0x06ACFAD4: 750e40f9  ldr x21, [x19, #0x18]
0x06ACFAD8: f50800b4  cbz x21, #0x6acfbf4
0x06ACFADC: a80240f9  ldr x8, [x21]
0x06ACFAE0: 142040b9  ldr w20, [x0, #0x20]
0x06ACFAE4: c10240f9  ldr x1, [x22]
0x06ACFAE8: 095d4279  ldrh w9, [x8, #0x12e]
0x06ACFAEC: 290100b4  cbz x9, #0x6acfb10
0x06ACFAF0: 0a5940f9  ldr x10, [x8, #0xb0]
0x06ACFAF4: 4a210091  add x10, x10, #8
0x06ACFAF8: 4b815ff8  ldur x11, [x10, #-8]
0x06ACFAFC: 7f0101eb  cmp x11, x1
0x06ACFB00: 00010054  b.eq #0x6acfb20
0x06ACFB04: 290500f1  subs x9, x9, #1
0x06ACFB08: 4a410091  add x10, x10, #0x10
0x06ACFB0C: 61ffff54  b.ne #0x6acfaf8
0x06ACFB10: 22008052  movz w2, #0x1
0x06ACFB14: e00315aa  mov x0, x21
0x06ACFB18: fe1b1a97  bl #0x3156b10
0x06ACFB1C: 05000014  b #0x6acfb30
0x06ACFB20: 490140b9  ldr w9, [x10]
0x06ACFB24: 29050011  add w9, w9, #1
0x06ACFB28: 08d1298b  add x8, x8, w9, sxtw #4
0x06ACFB2C: 00e10491  add x0, x8, #0x138
0x06ACFB30: 080440a9  ldp x8, x1, [x0]
0x06ACFB34: e00315aa  mov x0, x21
0x06ACFB38: 00013fd6  blr x8
0x06ACFB3C: 9f02006b  cmp w20, w0
0x06ACFB40: 2d010054  b.le #0x6acfb64
0x06ACFB44: 601a40f9  ldr x0, [x19, #0x30]
0x06ACFB48: 600500b4  cbz x0, #0x6acfbf4
0x06ACFB4C: 685e0090  adrp x8, #0x769b000
0x06ACFB50: 080d46f9  ldr x8, [x8, #0xc18]
0x06ACFB54: e103142a  mov w1, w20
0x06ACFB58: 020140f9  ldr x2, [x8]
0x06ACFB5C: 2d295597  bl #0x401a010
0x06ACFB60: a0000036  tbz w0, #0, #0x6acfb74
0x06ACFB64: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06ACFB68: f65741a9  ldp x22, x21, [sp, #0x10]
0x06ACFB6C: fe0743f8  ldr x30, [sp], #0x30
0x06ACFB70: c0035fd6  ret
0x06ACFB74: 740e40f9  ldr x20, [x19, #0x18]
0x06ACFB78: e00313aa  mov x0, x19
0x06ACFB7C: 70fbff97  bl #0x6ace93c
0x06ACFB80: b40300b4  cbz x20, #0x6acfbf4
0x06ACFB84: 880240f9  ldr x8, [x20]
0x06ACFB88: c10240f9  ldr x1, [x22]
0x06ACFB8C: f303002a  mov w19, w0
0x06ACFB90: 095d4279  ldrh w9, [x8, #0x12e]
0x06ACFB94: 290100b4  cbz x9, #0x6acfbb8
0x06ACFB98: 0a5940f9  ldr x10, [x8, #0xb0]
0x06ACFB9C: 4a210091  add x10, x10, #8
0x06ACFBA0: 4b815ff8  ldur x11, [x10, #-8]
0x06ACFBA4: 7f0101eb  cmp x11, x1
0x06ACFBA8: 00010054  b.eq #0x6acfbc8
0x06ACFBAC: 290500f1  subs x9, x9, #1
0x06ACFBB0: 4a410091  add x10, x10, #0x10
0x06ACFBB4: 61ffff54  b.ne #0x6acfba0
0x06ACFBB8: a2018052  movz w2, #0xd
0x06ACFBBC: e00314aa  mov x0, x20
0x06ACFBC0: d41b1a97  bl #0x3156b10
0x06ACFBC4: 05000014  b #0x6acfbd8
0x06ACFBC8: 490140b9  ldr w9, [x10]
0x06ACFBCC: 29350011  add w9, w9, #0xd
0x06ACFBD0: 08d1298b  add x8, x8, w9, sxtw #4
0x06ACFBD4: 00e10491  add x0, x8, #0x138
0x06ACFBD8: 030840a9  ldp x3, x2, [x0]
0x06ACFBDC: e00314aa  mov x0, x20
0x06ACFBE0: e103132a  mov w1, w19
0x06ACFBE4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06ACFBE8: f65741a9  ldp x22, x21, [sp, #0x10]
0x06ACFBEC: fe0743f8  ldr x30, [sp], #0x30
0x06ACFBF0: 60001fd6  br x3
0x06ACFBF4: 2ec41a97  bl #0x3180cac

; RVA 0x6AD0004 | private void OnEnergyChanged() { }
; bytes=188 sha256=9e17c5beaed02cdbbb3304516b1dc992ac6b6bc4af03931f3264dea2af357857 status=arm64_complete_bound indexed_start=True
0x06AD0004: fe0f1ef8  str x30, [sp, #-0x20]!
0x06AD0008: f44f01a9  stp x20, x19, [sp, #0x10]
0x06AD000C: d49200d0  adrp x20, #0x7d2a000
0x06AD0010: 88e26939  ldrb w8, [x20, #0xa78]
0x06AD0014: f30300aa  mov x19, x0
0x06AD0018: c8000037  tbnz w8, #0, #0x6ad0030
0x06AD001C: 006300f0  adrp x0, #0x7733000
0x06AD0020: 001047f9  ldr x0, [x0, #0xe20]
0x06AD0024: 7dc21a97  bl #0x3180a18
0x06AD0028: 28008052  movz w8, #0x1
0x06AD002C: 88e22939  strb w8, [x20, #0xa78]
0x06AD0030: 740e40f9  ldr x20, [x19, #0x18]
0x06AD0034: 540400b4  cbz x20, #0x6ad00bc
0x06AD0038: 0a6300f0  adrp x10, #0x7733000
0x06AD003C: 880240f9  ldr x8, [x20]
0x06AD0040: 4a1147f9  ldr x10, [x10, #0xe20]
0x06AD0044: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD0048: 410140f9  ldr x1, [x10]
0x06AD004C: 290100b4  cbz x9, #0x6ad0070
0x06AD0050: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD0054: 4a210091  add x10, x10, #8
0x06AD0058: 4b815ff8  ldur x11, [x10, #-8]
0x06AD005C: 7f0101eb  cmp x11, x1
0x06AD0060: 00010054  b.eq #0x6ad0080
0x06AD0064: 290500f1  subs x9, x9, #1
0x06AD0068: 4a410091  add x10, x10, #0x10
0x06AD006C: 61ffff54  b.ne #0x6ad0058
0x06AD0070: a2008052  movz w2, #0x5
0x06AD0074: e00314aa  mov x0, x20
0x06AD0078: a61a1a97  bl #0x3156b10
0x06AD007C: 05000014  b #0x6ad0090
0x06AD0080: 490140b9  ldr w9, [x10]
0x06AD0084: 29150011  add w9, w9, #5
0x06AD0088: 08d1298b  add x8, x8, w9, sxtw #4
0x06AD008C: 00e10491  add x0, x8, #0x138
0x06AD0090: 080440a9  ldp x8, x1, [x0]
0x06AD0094: e00314aa  mov x0, x20
0x06AD0098: 00013fd6  blr x8
0x06AD009C: a0000036  tbz w0, #0, #0x6ad00b0
0x06AD00A0: e00313aa  mov x0, x19
0x06AD00A4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06AD00A8: fe0742f8  ldr x30, [sp], #0x20
0x06AD00AC: 84fbff17  b #0x6aceebc
0x06AD00B0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06AD00B4: fe0742f8  ldr x30, [sp], #0x20
0x06AD00B8: c0035fd6  ret
0x06AD00BC: fcc21a97  bl #0x3180cac

; RVA 0x6ACEEBC | private void CalculatePlayableBoosts() { }
; bytes=1048 sha256=9dbfc373f6a04bd28678664e0dcbb20c03db10d40defe7fc64811391153712c6 status=arm64_complete_bound indexed_start=True
0x06ACEEBC: fe0f1bf8  str x30, [sp, #-0x50]!
0x06ACEEC0: fa6701a9  stp x26, x25, [sp, #0x10]
0x06ACEEC4: f85f02a9  stp x24, x23, [sp, #0x20]
0x06ACEEC8: f65703a9  stp x22, x21, [sp, #0x30]
0x06ACEECC: f44f04a9  stp x20, x19, [sp, #0x40]
0x06ACEED0: f4920090  adrp x20, #0x7d2a000
0x06ACEED4: 356300d0  adrp x21, #0x7734000
0x06ACEED8: 88e66939  ldrb w8, [x20, #0xa79]
0x06ACEEDC: b59640f9  ldr x21, [x21, #0x128]
0x06ACEEE0: f30300aa  mov x19, x0
0x06ACEEE4: 28070037  tbnz w8, #0, #0x6acefc8
0x06ACEEE8: 005d00b0  adrp x0, #0x766f000
0x06ACEEEC: 00f844f9  ldr x0, [x0, #0x9f0]
0x06ACEEF0: cac61a97  bl #0x3180a18
0x06ACEEF4: e05c0090  adrp x0, #0x766a000
0x06ACEEF8: 00a445f9  ldr x0, [x0, #0xb48]
0x06ACEEFC: c7c61a97  bl #0x3180a18
0x06ACEF00: 805d00f0  adrp x0, #0x7681000
0x06ACEF04: 004044f9  ldr x0, [x0, #0x880]
0x06ACEF08: c4c61a97  bl #0x3180a18
0x06ACEF0C: 206300d0  adrp x0, #0x7734000
0x06ACEF10: 008840f9  ldr x0, [x0, #0x110]
0x06ACEF14: c1c61a97  bl #0x3180a18
0x06ACEF18: 806000b0  adrp x0, #0x76df000
0x06ACEF1C: 009442f9  ldr x0, [x0, #0x528]
0x06ACEF20: bec61a97  bl #0x3180a18
0x06ACEF24: 805f00f0  adrp x0, #0x76c1000
0x06ACEF28: 007c46f9  ldr x0, [x0, #0xcf8]
0x06ACEF2C: bbc61a97  bl #0x3180a18
0x06ACEF30: 806000b0  adrp x0, #0x76df000
0x06ACEF34: 00b842f9  ldr x0, [x0, #0x570]
0x06ACEF38: b8c61a97  bl #0x3180a18
0x06ACEF3C: c05e0090  adrp x0, #0x76a6000
0x06ACEF40: 004047f9  ldr x0, [x0, #0xe80]
0x06ACEF44: b5c61a97  bl #0x3180a18
0x06ACEF48: 806000b0  adrp x0, #0x76df000
0x06ACEF4C: 00bc42f9  ldr x0, [x0, #0x578]
0x06ACEF50: b2c61a97  bl #0x3180a18
0x06ACEF54: 806000b0  adrp x0, #0x76df000
0x06ACEF58: 009842f9  ldr x0, [x0, #0x530]
0x06ACEF5C: afc61a97  bl #0x3180a18
0x06ACEF60: 206300b0  adrp x0, #0x7733000
0x06ACEF64: 001047f9  ldr x0, [x0, #0xe20]
0x06ACEF68: acc61a97  bl #0x3180a18
0x06ACEF6C: 205c00d0  adrp x0, #0x7654000
0x06ACEF70: 001042f9  ldr x0, [x0, #0x420]
0x06ACEF74: a9c61a97  bl #0x3180a18
0x06ACEF78: 206300d0  adrp x0, #0x7734000
0x06ACEF7C: 009840f9  ldr x0, [x0, #0x130]
0x06ACEF80: a6c61a97  bl #0x3180a18
0x06ACEF84: 206300d0  adrp x0, #0x7734000
0x06ACEF88: 009c40f9  ldr x0, [x0, #0x138]
0x06ACEF8C: a3c61a97  bl #0x3180a18
0x06ACEF90: 206300d0  adrp x0, #0x7734000
0x06ACEF94: 00a040f9  ldr x0, [x0, #0x140]
0x06ACEF98: a0c61a97  bl #0x3180a18
0x06ACEF9C: 206300d0  adrp x0, #0x7734000
0x06ACEFA0: 00a440f9  ldr x0, [x0, #0x148]
0x06ACEFA4: 9dc61a97  bl #0x3180a18
0x06ACEFA8: 206300d0  adrp x0, #0x7734000
0x06ACEFAC: 009440f9  ldr x0, [x0, #0x128]
0x06ACEFB0: 9ac61a97  bl #0x3180a18
0x06ACEFB4: 206300d0  adrp x0, #0x7734000
0x06ACEFB8: 008440f9  ldr x0, [x0, #0x108]
0x06ACEFBC: 97c61a97  bl #0x3180a18
0x06ACEFC0: 28008052  movz w8, #0x1
0x06ACEFC4: 88e62939  strb w8, [x20, #0xa79]
0x06ACEFC8: a00240f9  ldr x0, [x21]
0x06ACEFCC: 35c71a97  bl #0x3180ca0
0x06ACEFD0: e1031faa  mov x1, xzr
0x06ACEFD4: f40300aa  mov x20, x0
0x06ACEFD8: 892db097  bl #0x56da5fc
0x06ACEFDC: 941700b4  cbz x20, #0x6acf2cc
0x06ACEFE0: 976000b0  adrp x23, #0x76df000
0x06ACEFE4: 366300d0  adrp x22, #0x7734000
0x06ACEFE8: 986000b0  adrp x24, #0x76df000
0x06ACEFEC: f7be42f9  ldr x23, [x23, #0x578]
0x06ACEFF0: d6a240f9  ldr x22, [x22, #0x140]
0x06ACEFF4: 18bb42f9  ldr x24, [x24, #0x570]
0x06ACEFF8: e00314aa  mov x0, x20
0x06ACEFFC: 130c01f8  str x19, [x0, #0x10]!
0x06ACF000: e10313aa  mov x1, x19
0x06ACF004: 70c61a97  bl #0x31809c4
0x06ACF008: e00313aa  mov x0, x19
0x06ACF00C: 2f040094  bl #0x6ad00c8
0x06ACF010: e80240f9  ldr x8, [x23]
0x06ACF014: f50300aa  mov x21, x0
0x06ACF018: e00308aa  mov x0, x8
0x06ACF01C: 21c71a97  bl #0x3180ca0
0x06ACF020: c20240f9  ldr x2, [x22]
0x06ACF024: e10314aa  mov x1, x20
0x06ACF028: e3031faa  mov x3, xzr
0x06ACF02C: f60300aa  mov x22, x0
0x06ACF030: e31b9e97  bl #0x5255fbc
0x06ACF034: 020340f9  ldr x2, [x24]
0x06ACF038: e00315aa  mov x0, x21
0x06ACF03C: e10316aa  mov x1, x22
0x06ACF040: 9ae04697  bl #0x3c872a8
0x06ACF044: f50300aa  mov x21, x0
0x06ACF048: e00313aa  mov x0, x19
0x06ACF04C: 07feff97  bl #0x6ace868
0x06ACF050: e01300b4  cbz x0, #0x6acf2cc
0x06ACF054: 082040b9  ldr w8, [x0, #0x20]
0x06ACF058: 366300b0  adrp x22, #0x7734000
0x06ACF05C: 881a00b9  str w8, [x20, #0x18]
0x06ACF060: e00240f9  ldr x0, [x23]
0x06ACF064: 376300b0  adrp x23, #0x7734000
0x06ACF068: d6a640f9  ldr x22, [x22, #0x148]
0x06ACF06C: f78640f9  ldr x23, [x23, #0x108]
0x06ACF070: 0cc71a97  bl #0x3180ca0
0x06ACF074: c20240f9  ldr x2, [x22]
0x06ACF078: e10314aa  mov x1, x20
0x06ACF07C: e3031faa  mov x3, xzr
0x06ACF080: f60300aa  mov x22, x0
0x06ACF084: ce1b9e97  bl #0x5255fbc
0x06ACF088: 020340f9  ldr x2, [x24]
0x06ACF08C: e00315aa  mov x0, x21
0x06ACF090: e10316aa  mov x1, x22
0x06ACF094: 85e04697  bl #0x3c872a8
0x06ACF098: e80240f9  ldr x8, [x23]
0x06ACF09C: f40300aa  mov x20, x0
0x06ACF0A0: 09e140b9  ldr w9, [x8, #0xe0]
0x06ACF0A4: 89000035  cbnz w9, #0x6acf0b4
0x06ACF0A8: e00308aa  mov x0, x8
0x06ACF0AC: b8c61a97  bl #0x3180b8c
0x06ACF0B0: e80240f9  ldr x8, [x23]
0x06ACF0B4: 095d40f9  ldr x9, [x8, #0xb8]
0x06ACF0B8: 9a600090  adrp x26, #0x76df000
0x06ACF0BC: 995d00d0  adrp x25, #0x7681000
0x06ACF0C0: 385c00b0  adrp x24, #0x7654000
0x06ACF0C4: 350540f9  ldr x21, [x9, #8]
0x06ACF0C8: 5a9742f9  ldr x26, [x26, #0x528]
0x06ACF0CC: 394344f9  ldr x25, [x25, #0x880]
0x06ACF0D0: 181342f9  ldr x24, [x24, #0x420]
0x06ACF0D4: 150300b5  cbnz x21, #0x6acf134
0x06ACF0D8: 09e140b9  ldr w9, [x8, #0xe0]
0x06ACF0DC: 89000035  cbnz w9, #0x6acf0ec
0x06ACF0E0: e00308aa  mov x0, x8
0x06ACF0E4: aac61a97  bl #0x3180b8c
0x06ACF0E8: e80240f9  ldr x8, [x23]
0x06ACF0EC: 89600090  adrp x9, #0x76df000
0x06ACF0F0: 085d40f9  ldr x8, [x8, #0xb8]
0x06ACF0F4: 299942f9  ldr x9, [x9, #0x530]
0x06ACF0F8: 160140f9  ldr x22, [x8]
0x06ACF0FC: 200140f9  ldr x0, [x9]
0x06ACF100: e8c61a97  bl #0x3180ca0
0x06ACF104: 286300b0  adrp x8, #0x7734000
0x06ACF108: 089940f9  ldr x8, [x8, #0x130]
0x06ACF10C: e10316aa  mov x1, x22
0x06ACF110: e3031faa  mov x3, xzr
0x06ACF114: f50300aa  mov x21, x0
0x06ACF118: 020140f9  ldr x2, [x8]
0x06ACF11C: 521d9e97  bl #0x5256664
0x06ACF120: e80240f9  ldr x8, [x23]
0x06ACF124: e10315aa  mov x1, x21
0x06ACF128: 005d40f9  ldr x0, [x8, #0xb8]
0x06ACF12C: 158c00f8  str x21, [x0, #8]!
0x06ACF130: 25c61a97  bl #0x31809c4
0x06ACF134: 420340f9  ldr x2, [x26]
0x06ACF138: e00314aa  mov x0, x20
0x06ACF13C: e10315aa  mov x1, x21
0x06ACF140: db044697  bl #0x3c504ac
0x06ACF144: 210340f9  ldr x1, [x25]
0x06ACF148: 15b54597  bl #0x3c3c59c
0x06ACF14C: 080340f9  ldr x8, [x24]
0x06ACF150: f40300aa  mov x20, x0
0x06ACF154: 21008052  movz w1, #0x1
0x06ACF158: e00308aa  mov x0, x8
0x06ACF15C: 68c61a97  bl #0x3180afc
0x06ACF160: 760e40f9  ldr x22, [x19, #0x18]
0x06ACF164: 560b00b4  cbz x22, #0x6acf2cc
0x06ACF168: 2a630090  adrp x10, #0x7733000
0x06ACF16C: c80240f9  ldr x8, [x22]
0x06ACF170: 4a1147f9  ldr x10, [x10, #0xe20]
0x06ACF174: f50300aa  mov x21, x0
0x06ACF178: 095d4279  ldrh w9, [x8, #0x12e]
0x06ACF17C: 410140f9  ldr x1, [x10]
0x06ACF180: 290100b4  cbz x9, #0x6acf1a4
0x06ACF184: 0a5940f9  ldr x10, [x8, #0xb0]
0x06ACF188: 4a210091  add x10, x10, #8
0x06ACF18C: 4b815ff8  ldur x11, [x10, #-8]
0x06ACF190: 7f0101eb  cmp x11, x1
0x06ACF194: 00010054  b.eq #0x6acf1b4
0x06ACF198: 290500f1  subs x9, x9, #1
0x06ACF19C: 4a410091  add x10, x10, #0x10
0x06ACF1A0: 61ffff54  b.ne #0x6acf18c
0x06ACF1A4: 22008052  movz w2, #0x1
0x06ACF1A8: e00316aa  mov x0, x22
0x06ACF1AC: 591e1a97  bl #0x3156b10
0x06ACF1B0: 05000014  b #0x6acf1c4
0x06ACF1B4: 490140b9  ldr w9, [x10]
0x06ACF1B8: 29050011  add w9, w9, #1
0x06ACF1BC: 08d1298b  add x8, x8, w9, sxtw #4
0x06ACF1C0: 00e10491  add x0, x8, #0x138
0x06ACF1C4: 080440a9  ldp x8, x1, [x0]
0x06ACF1C8: e00316aa  mov x0, x22
0x06ACF1CC: 00013fd6  blr x8
0x06ACF1D0: f50700b4  cbz x21, #0x6acf2cc
0x06ACF1D4: a81a40b9  ldr w8, [x21, #0x18]
0x06ACF1D8: c8070034  cbz w8, #0x6acf2d0
0x06ACF1DC: c85c00f0  adrp x8, #0x766a000
0x06ACF1E0: 08a545f9  ldr x8, [x8, #0xb48]
0x06ACF1E4: a02200b9  str w0, [x21, #0x20]
0x06ACF1E8: e00315aa  mov x0, x21
0x06ACF1EC: e10314aa  mov x1, x20
0x06ACF1F0: 020140f9  ldr x2, [x8]
0x06ACF1F4: d19f4597  bl #0x3c37138
0x06ACF1F8: e80240f9  ldr x8, [x23]
0x06ACF1FC: f40300aa  mov x20, x0
0x06ACF200: 09e140b9  ldr w9, [x8, #0xe0]
0x06ACF204: 89000035  cbnz w9, #0x6acf214
0x06ACF208: e00308aa  mov x0, x8
0x06ACF20C: 60c61a97  bl #0x3180b8c
0x06ACF210: e80240f9  ldr x8, [x23]
0x06ACF214: 095d40f9  ldr x9, [x8, #0xb8]
0x06ACF218: 396300b0  adrp x25, #0x7734000
0x06ACF21C: 985f00d0  adrp x24, #0x76c1000
0x06ACF220: 350940f9  ldr x21, [x9, #0x10]
0x06ACF224: 398b40f9  ldr x25, [x25, #0x110]
0x06ACF228: 187f46f9  ldr x24, [x24, #0xcf8]
0x06ACF22C: 150300b5  cbnz x21, #0x6acf28c
0x06ACF230: 09e140b9  ldr w9, [x8, #0xe0]
0x06ACF234: 89000035  cbnz w9, #0x6acf244
0x06ACF238: e00308aa  mov x0, x8
0x06ACF23C: 54c61a97  bl #0x3180b8c
0x06ACF240: e80240f9  ldr x8, [x23]
0x06ACF244: a95e00f0  adrp x9, #0x76a6000
0x06ACF248: 085d40f9  ldr x8, [x8, #0xb8]
0x06ACF24C: 294147f9  ldr x9, [x9, #0xe80]
0x06ACF250: 160140f9  ldr x22, [x8]
0x06ACF254: 200140f9  ldr x0, [x9]
0x06ACF258: 92c61a97  bl #0x3180ca0
0x06ACF25C: 286300b0  adrp x8, #0x7734000
0x06ACF260: 089d40f9  ldr x8, [x8, #0x138]
0x06ACF264: e10316aa  mov x1, x22
0x06ACF268: e3031faa  mov x3, xzr
0x06ACF26C: f50300aa  mov x21, x0
0x06ACF270: 020140f9  ldr x2, [x8]
0x06ACF274: 06139e97  bl #0x5253e8c
0x06ACF278: e80240f9  ldr x8, [x23]
0x06ACF27C: e10315aa  mov x1, x21
0x06ACF280: 005d40f9  ldr x0, [x8, #0xb8]
0x06ACF284: 150c01f8  str x21, [x0, #0x10]!
0x06ACF288: cfc51a97  bl #0x31809c4
0x06ACF28C: 220340f9  ldr x2, [x25]
0x06ACF290: e00314aa  mov x0, x20
0x06ACF294: e10315aa  mov x1, x21
0x06ACF298: 12ef4597  bl #0x3c4aee0
0x06ACF29C: 010340f9  ldr x1, [x24]
0x06ACF2A0: d0424697  bl #0x3c5fde0
0x06ACF2A4: 530100b4  cbz x19, #0x6acf2cc
0x06ACF2A8: 600e03f8  str x0, [x19, #0x30]!
0x06ACF2AC: e10300aa  mov x1, x0
0x06ACF2B0: e00313aa  mov x0, x19
0x06ACF2B4: f44f44a9  ldp x20, x19, [sp, #0x40]
0x06ACF2B8: f65743a9  ldp x22, x21, [sp, #0x30]
0x06ACF2BC: f85f42a9  ldp x24, x23, [sp, #0x20]
0x06ACF2C0: fa6741a9  ldp x26, x25, [sp, #0x10]
0x06ACF2C4: fe0745f8  ldr x30, [sp], #0x50
0x06ACF2C8: bfc51a17  b #0x31809c4
0x06ACF2CC: 78c61a97  bl #0x3180cac
0x06ACF2D0: 79c61a97  bl #0x3180cb4

; RVA 0x6ACEBB4 | private void CalculateAvailableBoostsByLevel() { }
; bytes=776 sha256=57f62a0c8271d9af57753aefa732550e5960f03e4087098e81b136adc64e5238 status=arm64_complete_bound indexed_start=True
0x06ACEBB4: fe0f1bf8  str x30, [sp, #-0x50]!
0x06ACEBB8: fa6701a9  stp x26, x25, [sp, #0x10]
0x06ACEBBC: f85f02a9  stp x24, x23, [sp, #0x20]
0x06ACEBC0: f65703a9  stp x22, x21, [sp, #0x30]
0x06ACEBC4: f44f04a9  stp x20, x19, [sp, #0x40]
0x06ACEBC8: f4920090  adrp x20, #0x7d2a000
0x06ACEBCC: 376300d0  adrp x23, #0x7734000
0x06ACEBD0: 88ea6939  ldrb w8, [x20, #0xa7a]
0x06ACEBD4: f78640f9  ldr x23, [x23, #0x108]
0x06ACEBD8: f30300aa  mov x19, x0
0x06ACEBDC: e8040037  tbnz w8, #0, #0x6acec78
0x06ACEBE0: e05c0090  adrp x0, #0x766a000
0x06ACEBE4: 00a445f9  ldr x0, [x0, #0xb48]
0x06ACEBE8: 8cc71a97  bl #0x3180a18
0x06ACEBEC: 805d00f0  adrp x0, #0x7681000
0x06ACEBF0: 004044f9  ldr x0, [x0, #0x880]
0x06ACEBF4: 89c71a97  bl #0x3180a18
0x06ACEBF8: 206300d0  adrp x0, #0x7734000
0x06ACEBFC: 008840f9  ldr x0, [x0, #0x110]
0x06ACEC00: 86c71a97  bl #0x3180a18
0x06ACEC04: 806000b0  adrp x0, #0x76df000
0x06ACEC08: 009442f9  ldr x0, [x0, #0x528]
0x06ACEC0C: 83c71a97  bl #0x3180a18
0x06ACEC10: 805f00f0  adrp x0, #0x76c1000
0x06ACEC14: 007c46f9  ldr x0, [x0, #0xcf8]
0x06ACEC18: 80c71a97  bl #0x3180a18
0x06ACEC1C: c05e0090  adrp x0, #0x76a6000
0x06ACEC20: 004047f9  ldr x0, [x0, #0xe80]
0x06ACEC24: 7dc71a97  bl #0x3180a18
0x06ACEC28: 806000b0  adrp x0, #0x76df000
0x06ACEC2C: 009842f9  ldr x0, [x0, #0x530]
0x06ACEC30: 7ac71a97  bl #0x3180a18
0x06ACEC34: 206300b0  adrp x0, #0x7733000
0x06ACEC38: 001047f9  ldr x0, [x0, #0xe20]
0x06ACEC3C: 77c71a97  bl #0x3180a18
0x06ACEC40: 205c00d0  adrp x0, #0x7654000
0x06ACEC44: 001042f9  ldr x0, [x0, #0x420]
0x06ACEC48: 74c71a97  bl #0x3180a18
0x06ACEC4C: 206300d0  adrp x0, #0x7734000
0x06ACEC50: 008c40f9  ldr x0, [x0, #0x118]
0x06ACEC54: 71c71a97  bl #0x3180a18
0x06ACEC58: 206300d0  adrp x0, #0x7734000
0x06ACEC5C: 009040f9  ldr x0, [x0, #0x120]
0x06ACEC60: 6ec71a97  bl #0x3180a18
0x06ACEC64: 206300d0  adrp x0, #0x7734000
0x06ACEC68: 008440f9  ldr x0, [x0, #0x108]
0x06ACEC6C: 6bc71a97  bl #0x3180a18
0x06ACEC70: 28008052  movz w8, #0x1
0x06ACEC74: 88ea2939  strb w8, [x20, #0xa7a]
0x06ACEC78: e00313aa  mov x0, x19
0x06ACEC7C: 13050094  bl #0x6ad00c8
0x06ACEC80: e80240f9  ldr x8, [x23]
0x06ACEC84: f40300aa  mov x20, x0
0x06ACEC88: 09e140b9  ldr w9, [x8, #0xe0]
0x06ACEC8C: 89000035  cbnz w9, #0x6acec9c
0x06ACEC90: e00308aa  mov x0, x8
0x06ACEC94: bec71a97  bl #0x3180b8c
0x06ACEC98: e80240f9  ldr x8, [x23]
0x06ACEC9C: 095d40f9  ldr x9, [x8, #0xb8]
0x06ACECA0: 9a6000b0  adrp x26, #0x76df000
0x06ACECA4: 995d00f0  adrp x25, #0x7681000
0x06ACECA8: 385c00d0  adrp x24, #0x7654000
0x06ACECAC: 350d40f9  ldr x21, [x9, #0x18]
0x06ACECB0: 5a9742f9  ldr x26, [x26, #0x528]
0x06ACECB4: 394344f9  ldr x25, [x25, #0x880]
0x06ACECB8: 181342f9  ldr x24, [x24, #0x420]
0x06ACECBC: 150300b5  cbnz x21, #0x6aced1c
0x06ACECC0: 09e140b9  ldr w9, [x8, #0xe0]
0x06ACECC4: 89000035  cbnz w9, #0x6acecd4
0x06ACECC8: e00308aa  mov x0, x8
0x06ACECCC: b0c71a97  bl #0x3180b8c
0x06ACECD0: e80240f9  ldr x8, [x23]
0x06ACECD4: 896000b0  adrp x9, #0x76df000
0x06ACECD8: 085d40f9  ldr x8, [x8, #0xb8]
0x06ACECDC: 299942f9  ldr x9, [x9, #0x530]
0x06ACECE0: 160140f9  ldr x22, [x8]
0x06ACECE4: 200140f9  ldr x0, [x9]
0x06ACECE8: eec71a97  bl #0x3180ca0
0x06ACECEC: 286300d0  adrp x8, #0x7734000
0x06ACECF0: 088d40f9  ldr x8, [x8, #0x118]
0x06ACECF4: e10316aa  mov x1, x22
0x06ACECF8: e3031faa  mov x3, xzr
0x06ACECFC: f50300aa  mov x21, x0
0x06ACED00: 020140f9  ldr x2, [x8]
0x06ACED04: 581e9e97  bl #0x5256664
0x06ACED08: e80240f9  ldr x8, [x23]
0x06ACED0C: e10315aa  mov x1, x21
0x06ACED10: 005d40f9  ldr x0, [x8, #0xb8]
0x06ACED14: 158c01f8  str x21, [x0, #0x18]!
0x06ACED18: 2bc71a97  bl #0x31809c4
0x06ACED1C: 420340f9  ldr x2, [x26]
0x06ACED20: e00314aa  mov x0, x20
0x06ACED24: e10315aa  mov x1, x21
0x06ACED28: e1054697  bl #0x3c504ac
0x06ACED2C: 210340f9  ldr x1, [x25]
0x06ACED30: 1bb64597  bl #0x3c3c59c
0x06ACED34: 080340f9  ldr x8, [x24]
0x06ACED38: f40300aa  mov x20, x0
0x06ACED3C: 21008052  movz w1, #0x1
0x06ACED40: e00308aa  mov x0, x8
0x06ACED44: 6ec71a97  bl #0x3180afc
0x06ACED48: 760e40f9  ldr x22, [x19, #0x18]
0x06ACED4C: 560b00b4  cbz x22, #0x6aceeb4
0x06ACED50: 2a6300b0  adrp x10, #0x7733000
0x06ACED54: c80240f9  ldr x8, [x22]
0x06ACED58: 4a1147f9  ldr x10, [x10, #0xe20]
0x06ACED5C: f50300aa  mov x21, x0
0x06ACED60: 095d4279  ldrh w9, [x8, #0x12e]
0x06ACED64: 410140f9  ldr x1, [x10]
0x06ACED68: 290100b4  cbz x9, #0x6aced8c
0x06ACED6C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06ACED70: 4a210091  add x10, x10, #8
0x06ACED74: 4b815ff8  ldur x11, [x10, #-8]
0x06ACED78: 7f0101eb  cmp x11, x1
0x06ACED7C: 00010054  b.eq #0x6aced9c
0x06ACED80: 290500f1  subs x9, x9, #1
0x06ACED84: 4a410091  add x10, x10, #0x10
0x06ACED88: 61ffff54  b.ne #0x6aced74
0x06ACED8C: 22008052  movz w2, #0x1
0x06ACED90: e00316aa  mov x0, x22
0x06ACED94: 5f1f1a97  bl #0x3156b10
0x06ACED98: 05000014  b #0x6acedac
0x06ACED9C: 490140b9  ldr w9, [x10]
0x06ACEDA0: 29050011  add w9, w9, #1
0x06ACEDA4: 08d1298b  add x8, x8, w9, sxtw #4
0x06ACEDA8: 00e10491  add x0, x8, #0x138
0x06ACEDAC: 080440a9  ldp x8, x1, [x0]
0x06ACEDB0: e00316aa  mov x0, x22
0x06ACEDB4: 00013fd6  blr x8
0x06ACEDB8: f50700b4  cbz x21, #0x6aceeb4
0x06ACEDBC: a81a40b9  ldr w8, [x21, #0x18]
0x06ACEDC0: c8070034  cbz w8, #0x6aceeb8
0x06ACEDC4: e85c0090  adrp x8, #0x766a000
0x06ACEDC8: 08a545f9  ldr x8, [x8, #0xb48]
0x06ACEDCC: a02200b9  str w0, [x21, #0x20]
0x06ACEDD0: e00315aa  mov x0, x21
0x06ACEDD4: e10314aa  mov x1, x20
0x06ACEDD8: 020140f9  ldr x2, [x8]
0x06ACEDDC: d7a04597  bl #0x3c37138
0x06ACEDE0: e80240f9  ldr x8, [x23]
0x06ACEDE4: f40300aa  mov x20, x0
0x06ACEDE8: 09e140b9  ldr w9, [x8, #0xe0]
0x06ACEDEC: 89000035  cbnz w9, #0x6acedfc
0x06ACEDF0: e00308aa  mov x0, x8
0x06ACEDF4: 66c71a97  bl #0x3180b8c
0x06ACEDF8: e80240f9  ldr x8, [x23]
0x06ACEDFC: 095d40f9  ldr x9, [x8, #0xb8]
0x06ACEE00: 396300d0  adrp x25, #0x7734000
0x06ACEE04: 985f00f0  adrp x24, #0x76c1000
0x06ACEE08: 351140f9  ldr x21, [x9, #0x20]
0x06ACEE0C: 398b40f9  ldr x25, [x25, #0x110]
0x06ACEE10: 187f46f9  ldr x24, [x24, #0xcf8]
0x06ACEE14: 150300b5  cbnz x21, #0x6acee74
0x06ACEE18: 09e140b9  ldr w9, [x8, #0xe0]
0x06ACEE1C: 89000035  cbnz w9, #0x6acee2c
0x06ACEE20: e00308aa  mov x0, x8
0x06ACEE24: 5ac71a97  bl #0x3180b8c
0x06ACEE28: e80240f9  ldr x8, [x23]
0x06ACEE2C: c95e0090  adrp x9, #0x76a6000
0x06ACEE30: 085d40f9  ldr x8, [x8, #0xb8]
0x06ACEE34: 294147f9  ldr x9, [x9, #0xe80]
0x06ACEE38: 160140f9  ldr x22, [x8]
0x06ACEE3C: 200140f9  ldr x0, [x9]
0x06ACEE40: 98c71a97  bl #0x3180ca0
0x06ACEE44: 286300d0  adrp x8, #0x7734000
0x06ACEE48: 089140f9  ldr x8, [x8, #0x120]
0x06ACEE4C: e10316aa  mov x1, x22
0x06ACEE50: e3031faa  mov x3, xzr
0x06ACEE54: f50300aa  mov x21, x0
0x06ACEE58: 020140f9  ldr x2, [x8]
0x06ACEE5C: 0c149e97  bl #0x5253e8c
0x06ACEE60: e80240f9  ldr x8, [x23]
0x06ACEE64: e10315aa  mov x1, x21
0x06ACEE68: 005d40f9  ldr x0, [x8, #0xb8]
0x06ACEE6C: 150c02f8  str x21, [x0, #0x20]!
0x06ACEE70: d5c61a97  bl #0x31809c4
0x06ACEE74: 220340f9  ldr x2, [x25]
0x06ACEE78: e00314aa  mov x0, x20
0x06ACEE7C: e10315aa  mov x1, x21
0x06ACEE80: 18f04597  bl #0x3c4aee0
0x06ACEE84: 010340f9  ldr x1, [x24]
0x06ACEE88: d6434697  bl #0x3c5fde0
0x06ACEE8C: 530100b4  cbz x19, #0x6aceeb4
0x06ACEE90: 608e03f8  str x0, [x19, #0x38]!
0x06ACEE94: e10300aa  mov x1, x0
0x06ACEE98: e00313aa  mov x0, x19
0x06ACEE9C: f44f44a9  ldp x20, x19, [sp, #0x40]
0x06ACEEA0: f65743a9  ldp x22, x21, [sp, #0x30]
0x06ACEEA4: f85f42a9  ldp x24, x23, [sp, #0x20]
0x06ACEEA8: fa6741a9  ldp x26, x25, [sp, #0x10]
0x06ACEEAC: fe0745f8  ldr x30, [sp], #0x50
0x06ACEEB0: c5c61a17  b #0x31809c4
0x06ACEEB4: 7ec71a97  bl #0x3180cac
0x06ACEEB8: 7fc71a97  bl #0x3180cb4

; RVA 0x6AD02AC | private bool IsUnlockableBoost(int boost, List<int> playableBoosts) { }
; bytes=484 sha256=1626c0522575e5e855e294a10cef8895e8c51b6d4896ae2a7baa11e5c359eb4c status=arm64_complete_bound indexed_start=True
0x06AD02AC: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x06AD02B0: f65701a9  stp x22, x21, [sp, #0x10]
0x06AD02B4: f44f02a9  stp x20, x19, [sp, #0x20]
0x06AD02B8: d69200d0  adrp x22, #0x7d2a000
0x06AD02BC: c8ee6939  ldrb w8, [x22, #0xa7b]
0x06AD02C0: f40302aa  mov x20, x2
0x06AD02C4: f303012a  mov w19, w1
0x06AD02C8: f50300aa  mov x21, x0
0x06AD02CC: 88010037  tbnz w8, #0, #0x6ad02fc
0x06AD02D0: 006300f0  adrp x0, #0x7733000
0x06AD02D4: 001047f9  ldr x0, [x0, #0xe20]
0x06AD02D8: d0c11a97  bl #0x3180a18
0x06AD02DC: 006300f0  adrp x0, #0x7733000
0x06AD02E0: 006c47f9  ldr x0, [x0, #0xed8]
0x06AD02E4: cdc11a97  bl #0x3180a18
0x06AD02E8: 405e00f0  adrp x0, #0x769b000
0x06AD02EC: 000c46f9  ldr x0, [x0, #0xc18]
0x06AD02F0: cac11a97  bl #0x3180a18
0x06AD02F4: 28008052  movz w8, #0x1
0x06AD02F8: c8ee2939  strb w8, [x22, #0xa7b]
0x06AD02FC: b60e40f9  ldr x22, [x21, #0x18]
0x06AD0300: 760c00b4  cbz x22, #0x6ad048c
0x06AD0304: 176300f0  adrp x23, #0x7733000
0x06AD0308: c80240f9  ldr x8, [x22]
0x06AD030C: f71247f9  ldr x23, [x23, #0xe20]
0x06AD0310: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD0314: e10240f9  ldr x1, [x23]
0x06AD0318: 290100b4  cbz x9, #0x6ad033c
0x06AD031C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD0320: 4a210091  add x10, x10, #8
0x06AD0324: 4b815ff8  ldur x11, [x10, #-8]
0x06AD0328: 7f0101eb  cmp x11, x1
0x06AD032C: 00010054  b.eq #0x6ad034c
0x06AD0330: 290500f1  subs x9, x9, #1
0x06AD0334: 4a410091  add x10, x10, #0x10
0x06AD0338: 61ffff54  b.ne #0x6ad0324
0x06AD033C: 22008052  movz w2, #0x1
0x06AD0340: e00316aa  mov x0, x22
0x06AD0344: f3191a97  bl #0x3156b10
0x06AD0348: 05000014  b #0x6ad035c
0x06AD034C: 490140b9  ldr w9, [x10]
0x06AD0350: 29050011  add w9, w9, #1
0x06AD0354: 08d1298b  add x8, x8, w9, sxtw #4
0x06AD0358: 00e10491  add x0, x8, #0x138
0x06AD035C: 080440a9  ldp x8, x1, [x0]
0x06AD0360: e00316aa  mov x0, x22
0x06AD0364: 00013fd6  blr x8
0x06AD0368: 1f00136b  cmp w0, w19
0x06AD036C: 2a070054  b.ge #0x6ad0450
0x06AD0370: b61640f9  ldr x22, [x21, #0x28]
0x06AD0374: d60800b4  cbz x22, #0x6ad048c
0x06AD0378: 0a6300f0  adrp x10, #0x7733000
0x06AD037C: c80240f9  ldr x8, [x22]
0x06AD0380: 4a6d47f9  ldr x10, [x10, #0xed8]
0x06AD0384: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD0388: 410140f9  ldr x1, [x10]
0x06AD038C: 290100b4  cbz x9, #0x6ad03b0
0x06AD0390: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD0394: 4a210091  add x10, x10, #8
0x06AD0398: 4b815ff8  ldur x11, [x10, #-8]
0x06AD039C: 7f0101eb  cmp x11, x1
0x06AD03A0: 00010054  b.eq #0x6ad03c0
0x06AD03A4: 290500f1  subs x9, x9, #1
0x06AD03A8: 4a410091  add x10, x10, #0x10
0x06AD03AC: 61ffff54  b.ne #0x6ad0398
0x06AD03B0: 22008052  movz w2, #0x1
0x06AD03B4: e00316aa  mov x0, x22
0x06AD03B8: d6191a97  bl #0x3156b10
0x06AD03BC: 05000014  b #0x6ad03d0
0x06AD03C0: 490140b9  ldr w9, [x10]
0x06AD03C4: 29050011  add w9, w9, #1
0x06AD03C8: 08d1298b  add x8, x8, w9, sxtw #4
0x06AD03CC: 00e10491  add x0, x8, #0x138
0x06AD03D0: 080840a9  ldp x8, x2, [x0]
0x06AD03D4: e00316aa  mov x0, x22
0x06AD03D8: e103132a  mov w1, w19
0x06AD03DC: 00013fd6  blr x8
0x06AD03E0: 80030037  tbnz w0, #0, #0x6ad0450
0x06AD03E4: b50e40f9  ldr x21, [x21, #0x18]
0x06AD03E8: 350500b4  cbz x21, #0x6ad048c
0x06AD03EC: a80240f9  ldr x8, [x21]
0x06AD03F0: e10240f9  ldr x1, [x23]
0x06AD03F4: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD03F8: 290100b4  cbz x9, #0x6ad041c
0x06AD03FC: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD0400: 4a210091  add x10, x10, #8
0x06AD0404: 4b815ff8  ldur x11, [x10, #-8]
0x06AD0408: 7f0101eb  cmp x11, x1
0x06AD040C: 00010054  b.eq #0x6ad042c
0x06AD0410: 290500f1  subs x9, x9, #1
0x06AD0414: 4a410091  add x10, x10, #0x10
0x06AD0418: 61ffff54  b.ne #0x6ad0404
0x06AD041C: e2008052  movz w2, #0x7
0x06AD0420: e00315aa  mov x0, x21
0x06AD0424: bb191a97  bl #0x3156b10
0x06AD0428: 05000014  b #0x6ad043c
0x06AD042C: 490140b9  ldr w9, [x10]
0x06AD0430: 291d0011  add w9, w9, #7
0x06AD0434: 08d1298b  add x8, x8, w9, sxtw #4
0x06AD0438: 00e10491  add x0, x8, #0x138
0x06AD043C: 080440a9  ldp x8, x1, [x0]
0x06AD0440: e00315aa  mov x0, x21
0x06AD0444: 00013fd6  blr x8
0x06AD0448: 1f00136b  cmp w0, w19
0x06AD044C: ea000054  b.ge #0x6ad0468
0x06AD0450: e8031f2a  mov w8, wzr
0x06AD0454: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06AD0458: f65741a9  ldp x22, x21, [sp, #0x10]
0x06AD045C: 00010012  and w0, w8, #1
0x06AD0460: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x06AD0464: c0035fd6  ret
0x06AD0468: 340100b4  cbz x20, #0x6ad048c
0x06AD046C: 485e00f0  adrp x8, #0x769b000
0x06AD0470: 080d46f9  ldr x8, [x8, #0xc18]
0x06AD0474: e00314aa  mov x0, x20
0x06AD0478: e103132a  mov w1, w19
0x06AD047C: 020140f9  ldr x2, [x8]
0x06AD0480: e4265597  bl #0x401a010
0x06AD0484: 08000052  eor w8, w0, #1
0x06AD0488: f3ffff17  b #0x6ad0454
0x06AD048C: 08c21a97  bl #0x3180cac

; RVA 0x6AD00C8 | private List<BoostModeConfig> GetBoostConfigsForLevel() { }
; bytes=484 sha256=5112d9dae5c91ed8a100b67c42c5c290e04b41df233377715a0ba8b3f72baa49 status=arm64_complete_bound indexed_start=True
0x06AD00C8: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06AD00CC: f44f01a9  stp x20, x19, [sp, #0x10]
0x06AD00D0: d49200d0  adrp x20, #0x7d2a000
0x06AD00D4: 88f26939  ldrb w8, [x20, #0xa7c]
0x06AD00D8: f30300aa  mov x19, x0
0x06AD00DC: 08030037  tbnz w8, #0, #0x6ad013c
0x06AD00E0: 20630090  adrp x0, #0x7734000
0x06AD00E4: 00ac40f9  ldr x0, [x0, #0x158]
0x06AD00E8: 4cc21a97  bl #0x3180a18
0x06AD00EC: 606000f0  adrp x0, #0x76df000
0x06AD00F0: 00b842f9  ldr x0, [x0, #0x570]
0x06AD00F4: 49c21a97  bl #0x3180a18
0x06AD00F8: 606000f0  adrp x0, #0x76df000
0x06AD00FC: 00bc42f9  ldr x0, [x0, #0x578]
0x06AD0100: 46c21a97  bl #0x3180a18
0x06AD0104: 006300f0  adrp x0, #0x7733000
0x06AD0108: 001047f9  ldr x0, [x0, #0xe20]
0x06AD010C: 43c21a97  bl #0x3180a18
0x06AD0110: 606000f0  adrp x0, #0x76df000
0x06AD0114: 00d043f9  ldr x0, [x0, #0x7a0]
0x06AD0118: 40c21a97  bl #0x3180a18
0x06AD011C: 606000f0  adrp x0, #0x76df000
0x06AD0120: 00d443f9  ldr x0, [x0, #0x7a8]
0x06AD0124: 3dc21a97  bl #0x3180a18
0x06AD0128: 20630090  adrp x0, #0x7734000
0x06AD012C: 00b040f9  ldr x0, [x0, #0x160]
0x06AD0130: 3ac21a97  bl #0x3180a18
0x06AD0134: 28008052  movz w8, #0x1
0x06AD0138: 88f22939  strb w8, [x20, #0xa7c]
0x06AD013C: 740e40f9  ldr x20, [x19, #0x18]
0x06AD0140: 540b00b4  cbz x20, #0x6ad02a8
0x06AD0144: 156300f0  adrp x21, #0x7733000
0x06AD0148: 880240f9  ldr x8, [x20]
0x06AD014C: b51247f9  ldr x21, [x21, #0xe20]
0x06AD0150: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD0154: a10240f9  ldr x1, [x21]
0x06AD0158: 290100b4  cbz x9, #0x6ad017c
0x06AD015C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD0160: 4a210091  add x10, x10, #8
0x06AD0164: 4b815ff8  ldur x11, [x10, #-8]
0x06AD0168: 7f0101eb  cmp x11, x1
0x06AD016C: 00010054  b.eq #0x6ad018c
0x06AD0170: 290500f1  subs x9, x9, #1
0x06AD0174: 4a410091  add x10, x10, #0x10
0x06AD0178: 61ffff54  b.ne #0x6ad0164
0x06AD017C: c2008052  movz w2, #0x6
0x06AD0180: e00314aa  mov x0, x20
0x06AD0184: 631a1a97  bl #0x3156b10
0x06AD0188: 05000014  b #0x6ad019c
0x06AD018C: 490140b9  ldr w9, [x10]
0x06AD0190: 29190011  add w9, w9, #6
0x06AD0194: 08d1298b  add x8, x8, w9, sxtw #4
0x06AD0198: 00e10491  add x0, x8, #0x138
0x06AD019C: 080440a9  ldp x8, x1, [x0]
0x06AD01A0: e00314aa  mov x0, x20
0x06AD01A4: 00013fd6  blr x8
0x06AD01A8: 60020036  tbz w0, #0, #0x6ad01f4
0x06AD01AC: 740e40f9  ldr x20, [x19, #0x18]
0x06AD01B0: d40700b4  cbz x20, #0x6ad02a8
0x06AD01B4: 880240f9  ldr x8, [x20]
0x06AD01B8: a10240f9  ldr x1, [x21]
0x06AD01BC: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD01C0: 290100b4  cbz x9, #0x6ad01e4
0x06AD01C4: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD01C8: 4a210091  add x10, x10, #8
0x06AD01CC: 4b815ff8  ldur x11, [x10, #-8]
0x06AD01D0: 7f0101eb  cmp x11, x1
0x06AD01D4: a0020054  b.eq #0x6ad0228
0x06AD01D8: 290500f1  subs x9, x9, #1
0x06AD01DC: 4a410091  add x10, x10, #0x10
0x06AD01E0: 61ffff54  b.ne #0x6ad01cc
0x06AD01E4: 82008052  movz w2, #0x4
0x06AD01E8: e00314aa  mov x0, x20
0x06AD01EC: 491a1a97  bl #0x3156b10
0x06AD01F0: 12000014  b #0x6ad0238
0x06AD01F4: 686000f0  adrp x8, #0x76df000
0x06AD01F8: 08d543f9  ldr x8, [x8, #0x7a8]
0x06AD01FC: 000140f9  ldr x0, [x8]
0x06AD0200: a8c21a97  bl #0x3180ca0
0x06AD0204: 686000f0  adrp x8, #0x76df000
0x06AD0208: 08d143f9  ldr x8, [x8, #0x7a0]
0x06AD020C: f30300aa  mov x19, x0
0x06AD0210: 010140f9  ldr x1, [x8]
0x06AD0214: 89ce5597  bl #0x4043c38
0x06AD0218: e00313aa  mov x0, x19
0x06AD021C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06AD0220: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06AD0224: c0035fd6  ret
0x06AD0228: 490140b9  ldr w9, [x10]
0x06AD022C: 29110011  add w9, w9, #4
0x06AD0230: 08d1298b  add x8, x8, w9, sxtw #4
0x06AD0234: 00e10491  add x0, x8, #0x138
0x06AD0238: 080440a9  ldp x8, x1, [x0]
0x06AD023C: e00314aa  mov x0, x20
0x06AD0240: 00013fd6  blr x8
0x06AD0244: 200300b4  cbz x0, #0x6ad02a8
0x06AD0248: 686000f0  adrp x8, #0x76df000
0x06AD024C: 141440f9  ldr x20, [x0, #0x28]
0x06AD0250: 08bd42f9  ldr x8, [x8, #0x578]
0x06AD0254: 000140f9  ldr x0, [x8]
0x06AD0258: 92c21a97  bl #0x3180ca0
0x06AD025C: 28630090  adrp x8, #0x7734000
0x06AD0260: 08b140f9  ldr x8, [x8, #0x160]
0x06AD0264: e10313aa  mov x1, x19
0x06AD0268: e3031faa  mov x3, xzr
0x06AD026C: f50300aa  mov x21, x0
0x06AD0270: 020140f9  ldr x2, [x8]
0x06AD0274: 52179e97  bl #0x5255fbc
0x06AD0278: 686000f0  adrp x8, #0x76df000
0x06AD027C: 08b942f9  ldr x8, [x8, #0x570]
0x06AD0280: e00314aa  mov x0, x20
0x06AD0284: e10315aa  mov x1, x21
0x06AD0288: 020140f9  ldr x2, [x8]
0x06AD028C: 07dc4697  bl #0x3c872a8
0x06AD0290: 28630090  adrp x8, #0x7734000
0x06AD0294: 08ad40f9  ldr x8, [x8, #0x158]
0x06AD0298: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06AD029C: 010140f9  ldr x1, [x8]
0x06AD02A0: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06AD02A4: 4b3f4617  b #0x3c5ffd0
0x06AD02A8: 81c21a97  bl #0x3180cac

; RVA 0x6AD0490 | public void .ctor() { }
; bytes=172 sha256=d6074577f4f1532b1e8235da48d5bea32c3180f5d335459ac1156b1cb9df0641 status=arm64_complete_bound indexed_start=True
0x06AD0490: fe0f1df8  str x30, [sp, #-0x30]!
0x06AD0494: f65701a9  stp x22, x21, [sp, #0x10]
0x06AD0498: f44f02a9  stp x20, x19, [sp, #0x20]
0x06AD049C: d49200d0  adrp x20, #0x7d2a000
0x06AD04A0: 565c00b0  adrp x22, #0x7659000
0x06AD04A4: 555c00b0  adrp x21, #0x7659000
0x06AD04A8: 88f66939  ldrb w8, [x20, #0xa7d]
0x06AD04AC: d60a45f9  ldr x22, [x22, #0xa10]
0x06AD04B0: b50e45f9  ldr x21, [x21, #0xa18]
0x06AD04B4: f30300aa  mov x19, x0
0x06AD04B8: 28010037  tbnz w8, #0, #0x6ad04dc
0x06AD04BC: 405c00b0  adrp x0, #0x7659000
0x06AD04C0: 000c45f9  ldr x0, [x0, #0xa18]
0x06AD04C4: 55c11a97  bl #0x3180a18
0x06AD04C8: 405c00b0  adrp x0, #0x7659000
0x06AD04CC: 000845f9  ldr x0, [x0, #0xa10]
0x06AD04D0: 52c11a97  bl #0x3180a18
0x06AD04D4: 28008052  movz w8, #0x1
0x06AD04D8: 88f62939  strb w8, [x20, #0xa7d]
0x06AD04DC: c00240f9  ldr x0, [x22]
0x06AD04E0: f0c11a97  bl #0x3180ca0
0x06AD04E4: a10240f9  ldr x1, [x21]
0x06AD04E8: f40300aa  mov x20, x0
0x06AD04EC: d6235597  bl #0x4019444
0x06AD04F0: e00313aa  mov x0, x19
0x06AD04F4: 140c03f8  str x20, [x0, #0x30]!
0x06AD04F8: e10314aa  mov x1, x20
0x06AD04FC: 32c11a97  bl #0x31809c4
0x06AD0500: c00240f9  ldr x0, [x22]
0x06AD0504: e7c11a97  bl #0x3180ca0
0x06AD0508: a10240f9  ldr x1, [x21]
0x06AD050C: f40300aa  mov x20, x0
0x06AD0510: cd235597  bl #0x4019444
0x06AD0514: e00313aa  mov x0, x19
0x06AD0518: 148c03f8  str x20, [x0, #0x38]!
0x06AD051C: e10314aa  mov x1, x20
0x06AD0520: 29c11a97  bl #0x31809c4
0x06AD0524: e00313aa  mov x0, x19
0x06AD0528: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06AD052C: f65741a9  ldp x22, x21, [sp, #0x10]
0x06AD0530: e1031faa  mov x1, xzr
0x06AD0534: fe0743f8  ldr x30, [sp], #0x30
0x06AD0538: 3128b017  b #0x56da5fc

; RVA 0x6AD053C | private bool <GetUnlockableBoosts>b__16_0(int boost) { }
; bytes=8 sha256=ff417fbc6277d9cc73c0d8d8b02213b57f75e26840435b1c33dcf7f0adf5d34e status=arm64_complete_bound indexed_start=True
0x06AD053C: 021840f9  ldr x2, [x0, #0x30]
0x06AD0540: 5bffff17  b #0x6ad02ac

; RVA 0x6AD0544 | private bool <GetBoostConfigsForLevel>b__27_0(BoostModeConfig boostConfig) { }
; bytes=188 sha256=d8276aff3cf1dfcf133e99d285fc97a3cc2c54c37b1b56aaa4727f450d272f77 status=arm64_complete_bound indexed_start=True
0x06AD0544: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06AD0548: f44f01a9  stp x20, x19, [sp, #0x10]
0x06AD054C: d59200d0  adrp x21, #0x7d2a000
0x06AD0550: a8fa6939  ldrb w8, [x21, #0xa7e]
0x06AD0554: f30301aa  mov x19, x1
0x06AD0558: f40300aa  mov x20, x0
0x06AD055C: c8000037  tbnz w8, #0, #0x6ad0574
0x06AD0560: 006300f0  adrp x0, #0x7733000
0x06AD0564: 001047f9  ldr x0, [x0, #0xe20]
0x06AD0568: 2cc11a97  bl #0x3180a18
0x06AD056C: 28008052  movz w8, #0x1
0x06AD0570: a8fa2939  strb w8, [x21, #0xa7e]
0x06AD0574: 940e40f9  ldr x20, [x20, #0x18]
0x06AD0578: 340400b4  cbz x20, #0x6ad05fc
0x06AD057C: 0a6300f0  adrp x10, #0x7733000
0x06AD0580: 880240f9  ldr x8, [x20]
0x06AD0584: 4a1147f9  ldr x10, [x10, #0xe20]
0x06AD0588: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD058C: 410140f9  ldr x1, [x10]
0x06AD0590: 290100b4  cbz x9, #0x6ad05b4
0x06AD0594: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD0598: 4a210091  add x10, x10, #8
0x06AD059C: 4b815ff8  ldur x11, [x10, #-8]
0x06AD05A0: 7f0101eb  cmp x11, x1
0x06AD05A4: 00010054  b.eq #0x6ad05c4
0x06AD05A8: 290500f1  subs x9, x9, #1
0x06AD05AC: 4a410091  add x10, x10, #0x10
0x06AD05B0: 61ffff54  b.ne #0x6ad059c
0x06AD05B4: 42018052  movz w2, #0xa
0x06AD05B8: e00314aa  mov x0, x20
0x06AD05BC: 55191a97  bl #0x3156b10
0x06AD05C0: 05000014  b #0x6ad05d4
0x06AD05C4: 490140b9  ldr w9, [x10]
0x06AD05C8: 29290011  add w9, w9, #0xa
0x06AD05CC: 08d1298b  add x8, x8, w9, sxtw #4
0x06AD05D0: 00e10491  add x0, x8, #0x138
0x06AD05D4: 080440a9  ldp x8, x1, [x0]
0x06AD05D8: e00314aa  mov x0, x20
0x06AD05DC: 00013fd6  blr x8
0x06AD05E0: f30000b4  cbz x19, #0x6ad05fc
0x06AD05E4: 681240b9  ldr w8, [x19, #0x10]
0x06AD05E8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06AD05EC: 1f00086b  cmp w0, w8
0x06AD05F0: e0b79f1a  cset w0, ge
0x06AD05F4: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06AD05F8: c0035fd6  ret
0x06AD05FC: acc11a97  bl #0x3180cac

