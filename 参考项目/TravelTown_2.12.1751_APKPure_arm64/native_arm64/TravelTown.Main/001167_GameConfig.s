; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1167 MergeEngine.Configuration.GameConfig
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x690A20C | public ReadOnlyCollection<IMergeItem> get_RatePopupTriggerItems2() { }
; bytes=324 sha256=1a858e8c15e60ae690c16f949f1eeae27e91be48beceec098d316aae06dda937 status=arm64_complete_bound indexed_start=True
0x0690A20C: fe0f1cf8  str x30, [sp, #-0x40]!
0x0690A210: f85f01a9  stp x24, x23, [sp, #0x10]
0x0690A214: f65702a9  stp x22, x21, [sp, #0x20]
0x0690A218: f44f03a9  stp x20, x19, [sp, #0x30]
0x0690A21C: f4a000f0  adrp x20, #0x7d29000
0x0690A220: f6700090  adrp x22, #0x7726000
0x0690A224: 88e66539  ldrb w8, [x20, #0x979]
0x0690A228: d6ea45f9  ldr x22, [x22, #0xbd0]
0x0690A22C: f30300aa  mov x19, x0
0x0690A230: a8020037  tbnz w8, #0, #0x690a284
0x0690A234: 207000d0  adrp x0, #0x7710000
0x0690A238: 000046f9  ldr x0, [x0, #0xc00]
0x0690A23C: f7d92197  bl #0x3180a18
0x0690A240: a06b00b0  adrp x0, #0x767f000
0x0690A244: 00f447f9  ldr x0, [x0, #0xfe8]
0x0690A248: f4d92197  bl #0x3180a18
0x0690A24C: 207000d0  adrp x0, #0x7710000
0x0690A250: 000446f9  ldr x0, [x0, #0xc08]
0x0690A254: f1d92197  bl #0x3180a18
0x0690A258: 806e00b0  adrp x0, #0x76db000
0x0690A25C: 002c42f9  ldr x0, [x0, #0x458]
0x0690A260: eed92197  bl #0x3180a18
0x0690A264: e0700090  adrp x0, #0x7726000
0x0690A268: 00ec45f9  ldr x0, [x0, #0xbd8]
0x0690A26C: ebd92197  bl #0x3180a18
0x0690A270: e0700090  adrp x0, #0x7726000
0x0690A274: 00e845f9  ldr x0, [x0, #0xbd0]
0x0690A278: e8d92197  bl #0x3180a18
0x0690A27C: 28008052  movz w8, #0x1
0x0690A280: 88e62539  strb w8, [x20, #0x979]
0x0690A284: c00240f9  ldr x0, [x22]
0x0690A288: 733640f9  ldr x19, [x19, #0x68]
0x0690A28C: 08e040b9  ldr w8, [x0, #0xe0]
0x0690A290: 68000035  cbnz w8, #0x690a29c
0x0690A294: 3eda2197  bl #0x3180b8c
0x0690A298: c00240f9  ldr x0, [x22]
0x0690A29C: 085c40f9  ldr x8, [x0, #0xb8]
0x0690A2A0: 387000d0  adrp x24, #0x7710000
0x0690A2A4: b76b00b0  adrp x23, #0x767f000
0x0690A2A8: 140540f9  ldr x20, [x8, #8]
0x0690A2AC: 180346f9  ldr x24, [x24, #0xc00]
0x0690A2B0: f7f647f9  ldr x23, [x23, #0xfe8]
0x0690A2B4: f40200b5  cbnz x20, #0x690a310
0x0690A2B8: 08e040b9  ldr w8, [x0, #0xe0]
0x0690A2BC: 68000035  cbnz w8, #0x690a2c8
0x0690A2C0: 33da2197  bl #0x3180b8c
0x0690A2C4: c00240f9  ldr x0, [x22]
0x0690A2C8: 297000d0  adrp x9, #0x7710000
0x0690A2CC: 085c40f9  ldr x8, [x0, #0xb8]
0x0690A2D0: 290546f9  ldr x9, [x9, #0xc08]
0x0690A2D4: 150140f9  ldr x21, [x8]
0x0690A2D8: 200140f9  ldr x0, [x9]
0x0690A2DC: 71da2197  bl #0x3180ca0
0x0690A2E0: e8700090  adrp x8, #0x7726000
0x0690A2E4: 08ed45f9  ldr x8, [x8, #0xbd8]
0x0690A2E8: e10315aa  mov x1, x21
0x0690A2EC: e3031faa  mov x3, xzr
0x0690A2F0: f40300aa  mov x20, x0
0x0690A2F4: 020140f9  ldr x2, [x8]
0x0690A2F8: b031a597  bl #0x52569b8
0x0690A2FC: c80240f9  ldr x8, [x22]
0x0690A300: e10314aa  mov x1, x20
0x0690A304: 005d40f9  ldr x0, [x8, #0xb8]
0x0690A308: 148c00f8  str x20, [x0, #8]!
0x0690A30C: aed92197  bl #0x31809c4
0x0690A310: 020340f9  ldr x2, [x24]
0x0690A314: e00313aa  mov x0, x19
0x0690A318: e10314aa  mov x1, x20
0x0690A31C: de194d97  bl #0x3c50a94
0x0690A320: e10240f9  ldr x1, [x23]
0x0690A324: 2b574d97  bl #0x3c5ffd0
0x0690A328: 200100b4  cbz x0, #0x690a34c
0x0690A32C: 886e00b0  adrp x8, #0x76db000
0x0690A330: 082d42f9  ldr x8, [x8, #0x458]
0x0690A334: f44f43a9  ldp x20, x19, [sp, #0x30]
0x0690A338: f65742a9  ldp x22, x21, [sp, #0x20]
0x0690A33C: f85f41a9  ldp x24, x23, [sp, #0x10]
0x0690A340: 010140f9  ldr x1, [x8]
0x0690A344: fe0744f8  ldr x30, [sp], #0x40
0x0690A348: d3e85c17  b #0x4044694
0x0690A34C: 58da2197  bl #0x3180cac

; RVA 0x690A350 | public string get_FacebookPageUrl() { }
; bytes=8 sha256=45a13198be27f66faf32b29adb14177df99ed6c53d631569cf044b97c22b3e7d status=arm64_complete_bound indexed_start=True
0x0690A350: 009840f9  ldr x0, [x0, #0x130]
0x0690A354: c0035fd6  ret

; RVA 0x690A358 | public void set_FacebookPageUrl(string value) { }
; bytes=16 sha256=dd79b5ace157ebb465776ac73c3902bc2d297626e839958fac9ea1b49f13dcce status=arm64_complete_bound indexed_start=True
0x0690A358: 08c00491  add x8, x0, #0x130
0x0690A35C: 019800f9  str x1, [x0, #0x130]
0x0690A360: e00308aa  mov x0, x8
0x0690A364: 98d92117  b #0x31809c4

; RVA 0x690A368 | public string get_FacebookGroupUrl() { }
; bytes=8 sha256=c062c070bb445006bd7e87d35358178a0e1484a8ed36d2f4e2e1769a376551a9 status=arm64_complete_bound indexed_start=True
0x0690A368: 009c40f9  ldr x0, [x0, #0x138]
0x0690A36C: c0035fd6  ret

; RVA 0x690A370 | public void set_FacebookGroupUrl(string value) { }
; bytes=16 sha256=95d7907a5d51e984130803760edf6bf9f38fee94d0cbd5bf010e537f69170205 status=arm64_complete_bound indexed_start=True
0x0690A370: 08e00491  add x8, x0, #0x138
0x0690A374: 019c00f9  str x1, [x0, #0x138]
0x0690A378: e00308aa  mov x0, x8
0x0690A37C: 92d92117  b #0x31809c4

; RVA 0x690A380 | public string get_TwitterPageUrl() { }
; bytes=8 sha256=0db55bb49096519e96c48d629ec248bab3a7078312f5bfab8126683d2ad723a0 status=arm64_complete_bound indexed_start=True
0x0690A380: 00a040f9  ldr x0, [x0, #0x140]
0x0690A384: c0035fd6  ret

; RVA 0x690A388 | public void set_TwitterPageUrl(string value) { }
; bytes=16 sha256=2da57b49c86c11a3f601b8d4636937f6247c6904d1fbbae92853b977364a2ba3 status=arm64_complete_bound indexed_start=True
0x0690A388: 08000591  add x8, x0, #0x140
0x0690A38C: 01a000f9  str x1, [x0, #0x140]
0x0690A390: e00308aa  mov x0, x8
0x0690A394: 8cd92117  b #0x31809c4

; RVA 0x690A398 | public string get_InstagramPageUrl() { }
; bytes=8 sha256=953c57623b1a6c3113b825a80bfb71ef19f1f810675f8ef6217a3d64c2cd5f1b status=arm64_complete_bound indexed_start=True
0x0690A398: 00a440f9  ldr x0, [x0, #0x148]
0x0690A39C: c0035fd6  ret

; RVA 0x690A3A0 | public void set_InstagramPageUrl(string value) { }
; bytes=16 sha256=3d499f921e633fbb010627f842b9c258ac5d1cfc848e548deb0bf79a91062b37 status=arm64_complete_bound indexed_start=True
0x0690A3A0: 08200591  add x8, x0, #0x148
0x0690A3A4: 01a400f9  str x1, [x0, #0x148]
0x0690A3A8: e00308aa  mov x0, x8
0x0690A3AC: 86d92117  b #0x31809c4

; RVA 0x690A3B0 | private bool InventoryValid(InventoryCapability inventory) { }
; bytes=56 sha256=a164e18244e8685c0fa6e9cca3d7bcbe3fd4f1d2669e50ae2a355050855846e8 status=arm64_complete_bound indexed_start=True
0x0690A3B0: fe0f1ff8  str x30, [sp, #-0x10]!
0x0690A3B4: 810100b4  cbz x1, #0x690a3e4
0x0690A3B8: 28244229  ldp w8, w9, [x1, #0x10]
0x0690A3BC: 1f01096b  cmp w8, w9
0x0690A3C0: eaa79f1a  cset w10, lt
0x0690A3C4: 1f010071  cmp w8, #0
0x0690A3C8: e8d79f1a  cset w8, gt
0x0690A3CC: 3f010071  cmp w9, #0
0x0690A3D0: e9d79f1a  cset w9, gt
0x0690A3D4: 08010a0a  and w8, w8, w10
0x0690A3D8: 2001080a  and w0, w9, w8
0x0690A3DC: fe0741f8  ldr x30, [sp], #0x10
0x0690A3E0: c0035fd6  ret
0x0690A3E4: 32da2197  bl #0x3180cac

; RVA 0x690A3E8 | public void .ctor() { }
; bytes=52 sha256=49d81e1fe3303aa17b8fc3a84b47a27ba5fa7f382200becf3295a037f004e6ad status=arm64_complete_bound indexed_start=True
0x0690A3E8: a96bfdd0  adrp x9, #0x1680000
0x0690A3EC: 20a545fd  ldr d0, [x9, #0xb48]
0x0690A3F0: a8999952  movz w8, #0xcccd
0x0690A3F4: 6a668652  movz w10, #0x3333
0x0690A3F8: 88c9a772  movk w8, #0x3e4c, lsl #16
0x0690A3FC: 6af6a772  movk w10, #0x3fb3, lsl #16
0x0690A400: 89008052  movz w9, #0x4
0x0690A404: e1031faa  mov x1, xzr
0x0690A408: 089000b9  str w8, [x0, #0x90]
0x0690A40C: 0af000b9  str w10, [x0, #0xf0]
0x0690A410: 007400fd  str d0, [x0, #0xe8]
0x0690A414: 090401b9  str w9, [x0, #0x104]
0x0690A418: da81bf17  b #0x58eab80

