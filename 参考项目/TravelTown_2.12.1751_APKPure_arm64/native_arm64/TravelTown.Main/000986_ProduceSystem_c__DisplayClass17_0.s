; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 986 .ProduceSystem.<>c__DisplayClass17_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x679BFCC | public void .ctor() { }
; bytes=8 sha256=977aa30e1399af01715cf9fee2c84f5ee3edc461c70ceeab03d9be396017b44a status=arm64_complete_bound indexed_start=True
0x0679BFCC: e1031faa  mov x1, xzr
0x0679BFD0: 8bf9bc17  b #0x56da5fc

; RVA 0x679C19C | internal IEnumerable<IMergeItem> <CanCompleteOrder>b__0(IMergeItem questItem) { }
; bytes=296 sha256=db13d70e8b18bb057ea688c5b08cdcd9e32676cd7853cf0d51477d936ff13c50 status=arm64_complete_bound indexed_start=True
0x0679C19C: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0679C1A0: f44f01a9  stp x20, x19, [sp, #0x10]
0x0679C1A4: 75ac0090  adrp x21, #0x7d28000
0x0679C1A8: a8ea7639  ldrb w8, [x21, #0xdba]
0x0679C1AC: f40301aa  mov x20, x1
0x0679C1B0: f30300aa  mov x19, x0
0x0679C1B4: 28010037  tbnz w8, #0, #0x679c1d8
0x0679C1B8: e07600d0  adrp x0, #0x767a000
0x0679C1BC: 004c42f9  ldr x0, [x0, #0x498]
0x0679C1C0: 16922797  bl #0x3180a18
0x0679C1C4: e07600b0  adrp x0, #0x7679000
0x0679C1C8: 001044f9  ldr x0, [x0, #0x820]
0x0679C1CC: 13922797  bl #0x3180a18
0x0679C1D0: 28008052  movz w8, #0x1
0x0679C1D4: a8ea3639  strb w8, [x21, #0xdba]
0x0679C1D8: 690a40f9  ldr x9, [x19, #0x10]
0x0679C1DC: 290700b4  cbz x9, #0x679c2c0
0x0679C1E0: 140700b4  cbz x20, #0x679c2c0
0x0679C1E4: ea7600b0  adrp x10, #0x7679000
0x0679C1E8: 880240f9  ldr x8, [x20]
0x0679C1EC: 4a1144f9  ldr x10, [x10, #0x820]
0x0679C1F0: 335140f9  ldr x19, [x9, #0xa0]
0x0679C1F4: 095d4279  ldrh w9, [x8, #0x12e]
0x0679C1F8: 410140f9  ldr x1, [x10]
0x0679C1FC: 290100b4  cbz x9, #0x679c220
0x0679C200: 0a5940f9  ldr x10, [x8, #0xb0]
0x0679C204: 4a210091  add x10, x10, #8
0x0679C208: 4b815ff8  ldur x11, [x10, #-8]
0x0679C20C: 7f0101eb  cmp x11, x1
0x0679C210: 00010054  b.eq #0x679c230
0x0679C214: 290500f1  subs x9, x9, #1
0x0679C218: 4a410091  add x10, x10, #0x10
0x0679C21C: 61ffff54  b.ne #0x679c208
0x0679C220: e00314aa  mov x0, x20
0x0679C224: e2031f2a  mov w2, wzr
0x0679C228: 3aea2697  bl #0x3156b10
0x0679C22C: 04000014  b #0x679c23c
0x0679C230: 490180b9  ldrsw x9, [x10]
0x0679C234: 0811098b  add x8, x8, x9, lsl #4
0x0679C238: 00e10491  add x0, x8, #0x138
0x0679C23C: 080440a9  ldp x8, x1, [x0]
0x0679C240: e00314aa  mov x0, x20
0x0679C244: 00013fd6  blr x8
0x0679C248: d30300b4  cbz x19, #0x679c2c0
0x0679C24C: ea7600d0  adrp x10, #0x767a000
0x0679C250: 680240f9  ldr x8, [x19]
0x0679C254: 4a4d42f9  ldr x10, [x10, #0x498]
0x0679C258: f40300aa  mov x20, x0
0x0679C25C: 095d4279  ldrh w9, [x8, #0x12e]
0x0679C260: 410140f9  ldr x1, [x10]
0x0679C264: 290100b4  cbz x9, #0x679c288
0x0679C268: 0a5940f9  ldr x10, [x8, #0xb0]
0x0679C26C: 4a210091  add x10, x10, #8
0x0679C270: 4b815ff8  ldur x11, [x10, #-8]
0x0679C274: 7f0101eb  cmp x11, x1
0x0679C278: 00010054  b.eq #0x679c298
0x0679C27C: 290500f1  subs x9, x9, #1
0x0679C280: 4a410091  add x10, x10, #0x10
0x0679C284: 61ffff54  b.ne #0x679c270
0x0679C288: 42028052  movz w2, #0x12
0x0679C28C: e00313aa  mov x0, x19
0x0679C290: 20ea2697  bl #0x3156b10
0x0679C294: 05000014  b #0x679c2a8
0x0679C298: 490140b9  ldr w9, [x10]
0x0679C29C: 29490011  add w9, w9, #0x12
0x0679C2A0: 08d1298b  add x8, x8, w9, sxtw #4
0x0679C2A4: 00e10491  add x0, x8, #0x138
0x0679C2A8: 030840a9  ldp x3, x2, [x0]
0x0679C2AC: e00313aa  mov x0, x19
0x0679C2B0: e10314aa  mov x1, x20
0x0679C2B4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0679C2B8: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0679C2BC: 60001fd6  br x3
0x0679C2C0: 7b922797  bl #0x3180cac

; RVA 0x679C2C4 | internal bool <CanCompleteOrder>b__1(IMergeItem item) { }
; bytes=88 sha256=fe422691e01f63ffa40a5ef2c4c2c09f3e04db3d4f6ce2bd5391ed506d7905e0 status=arm64_complete_bound indexed_start=True
0x0679C2C4: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0679C2C8: f44f01a9  stp x20, x19, [sp, #0x10]
0x0679C2CC: 75ac0090  adrp x21, #0x7d28000
0x0679C2D0: a8ee7639  ldrb w8, [x21, #0xdbb]
0x0679C2D4: f30301aa  mov x19, x1
0x0679C2D8: f40300aa  mov x20, x0
0x0679C2DC: c8000037  tbnz w8, #0, #0x679c2f4
0x0679C2E0: a07b0090  adrp x0, #0x7710000
0x0679C2E4: 00a444f9  ldr x0, [x0, #0x948]
0x0679C2E8: cc912797  bl #0x3180a18
0x0679C2EC: 28008052  movz w8, #0x1
0x0679C2F0: a8ee3639  strb w8, [x21, #0xdbb]
0x0679C2F4: 880e40f9  ldr x8, [x20, #0x18]
0x0679C2F8: 080100b4  cbz x8, #0x679c318
0x0679C2FC: 004140f9  ldr x0, [x8, #0x80]
0x0679C300: c00000b4  cbz x0, #0x679c318
0x0679C304: e10313aa  mov x1, x19
0x0679C308: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0679C30C: e2031faa  mov x2, xzr
0x0679C310: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0679C314: df38e117  b #0x5fea690
0x0679C318: 65922797  bl #0x3180cac

