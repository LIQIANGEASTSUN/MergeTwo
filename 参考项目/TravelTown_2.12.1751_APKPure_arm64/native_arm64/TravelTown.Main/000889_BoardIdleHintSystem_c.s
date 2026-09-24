; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 889 .BoardIdleHintSystem.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x665B1E4 | private static void .cctor() { }
; bytes=104 sha256=d6f24bc64ac86d736258e34f949b397713548d9a28b42cd51edef19327de7e87 status=arm64_complete_bound indexed_start=True
0x0665B1E4: fe0f1ef8  str x30, [sp, #-0x20]!
0x0665B1E8: f44f01a9  stp x20, x19, [sp, #0x10]
0x0665B1EC: 73b600b0  adrp x19, #0x7d28000
0x0665B1F0: 74850090  adrp x20, #0x7707000
0x0665B1F4: 68a24139  ldrb w8, [x19, #0x68]
0x0665B1F8: 941644f9  ldr x20, [x20, #0x828]
0x0665B1FC: c8000037  tbnz w8, #0, #0x665b214
0x0665B200: 60850090  adrp x0, #0x7707000
0x0665B204: 001444f9  ldr x0, [x0, #0x828]
0x0665B208: 04962c97  bl #0x3180a18
0x0665B20C: 28008052  movz w8, #0x1
0x0665B210: 68a20139  strb w8, [x19, #0x68]
0x0665B214: 800240f9  ldr x0, [x20]
0x0665B218: a2962c97  bl #0x3180ca0
0x0665B21C: e1031faa  mov x1, xzr
0x0665B220: f30300aa  mov x19, x0
0x0665B224: f6fcc197  bl #0x56da5fc
0x0665B228: 880240f9  ldr x8, [x20]
0x0665B22C: e10313aa  mov x1, x19
0x0665B230: 085d40f9  ldr x8, [x8, #0xb8]
0x0665B234: 130100f9  str x19, [x8]
0x0665B238: 880240f9  ldr x8, [x20]
0x0665B23C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0665B240: 005d40f9  ldr x0, [x8, #0xb8]
0x0665B244: fe0742f8  ldr x30, [sp], #0x20
0x0665B248: df952c17  b #0x31809c4

; RVA 0x665B24C | public void .ctor() { }
; bytes=8 sha256=a29ba4a1230090293ae5f980654c896b36154858c0ec000f84443db95dee67d5 status=arm64_complete_bound indexed_start=True
0x0665B24C: e1031faa  mov x1, xzr
0x0665B250: ebfcc117  b #0x56da5fc

; RVA 0x665B254 | internal bool <CheckStillNeedHinting>b__41_0(VisualComponent visualComponent) { }
; bytes=24 sha256=96a55f09aee5d451fc6f69f594d7f5cf2c3fcc023d99b3f4818f98d1caabb9ee status=arm64_complete_bound indexed_start=True
0x0665B254: fe0f1ff8  str x30, [sp, #-0x10]!
0x0665B258: 810000b4  cbz x1, #0x665b268
0x0665B25C: 20604139  ldrb w0, [x1, #0x58]
0x0665B260: fe0741f8  ldr x30, [sp], #0x10
0x0665B264: c0035fd6  ret
0x0665B268: 91962c97  bl #0x3180cac

; RVA 0x665B26C | internal bool <GetFirstMergeableItemTuple>b__46_0(IComponentBase component) { }
; bytes=204 sha256=0829d32c4a697237ce05e5297a9177f2cb8173e3aa2ad2a5edd76840c18eae5b status=arm64_complete_bound indexed_start=True
0x0665B26C: fe0f1ef8  str x30, [sp, #-0x20]!
0x0665B270: f44f01a9  stp x20, x19, [sp, #0x10]
0x0665B274: 74b600b0  adrp x20, #0x7d28000
0x0665B278: 88a64139  ldrb w8, [x20, #0x69]
0x0665B27C: f30301aa  mov x19, x1
0x0665B280: c8000037  tbnz w8, #0, #0x665b298
0x0665B284: 408400f0  adrp x0, #0x76e6000
0x0665B288: 00f442f9  ldr x0, [x0, #0x5e8]
0x0665B28C: e3952c97  bl #0x3180a18
0x0665B290: 28008052  movz w8, #0x1
0x0665B294: 88a60139  strb w8, [x20, #0x69]
0x0665B298: f30400b4  cbz x19, #0x665b334
0x0665B29C: 498400f0  adrp x9, #0x76e6000
0x0665B2A0: 29f542f9  ldr x9, [x9, #0x5e8]
0x0665B2A4: 680240f9  ldr x8, [x19]
0x0665B2A8: 340140f9  ldr x20, [x9]
0x0665B2AC: 095d4279  ldrh w9, [x8, #0x12e]
0x0665B2B0: 811240f9  ldr x1, [x20, #0x20]
0x0665B2B4: 82a24079  ldrh w2, [x20, #0x50]
0x0665B2B8: 290100b4  cbz x9, #0x665b2dc
0x0665B2BC: 0a5940f9  ldr x10, [x8, #0xb0]
0x0665B2C0: 4a210091  add x10, x10, #8
0x0665B2C4: 4b815ff8  ldur x11, [x10, #-8]
0x0665B2C8: 7f0101eb  cmp x11, x1
0x0665B2CC: e0000054  b.eq #0x665b2e8
0x0665B2D0: 290500f1  subs x9, x9, #1
0x0665B2D4: 4a410091  add x10, x10, #0x10
0x0665B2D8: 61ffff54  b.ne #0x665b2c4
0x0665B2DC: e00313aa  mov x0, x19
0x0665B2E0: 0cee2b97  bl #0x3156b10
0x0665B2E4: 05000014  b #0x665b2f8
0x0665B2E8: 490140b9  ldr w9, [x10]
0x0665B2EC: 2901020b  add w9, w9, w2
0x0665B2F0: 08d1298b  add x8, x8, w9, sxtw #4
0x0665B2F4: 00e10491  add x0, x8, #0x138
0x0665B2F8: 000440f9  ldr x0, [x0, #8]
0x0665B2FC: e10314aa  mov x1, x20
0x0665B300: 22962c97  bl #0x3180b88
0x0665B304: 080440f9  ldr x8, [x0, #8]
0x0665B308: e10300aa  mov x1, x0
0x0665B30C: e00313aa  mov x0, x19
0x0665B310: 00013fd6  blr x8
0x0665B314: 000100b4  cbz x0, #0x665b334
0x0665B318: e1031faa  mov x1, xzr
0x0665B31C: 33890a94  bl #0x68fd7e8
0x0665B320: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0665B324: e803202a  mvn w8, w0
0x0665B328: 00010012  and w0, w8, #1
0x0665B32C: fe0742f8  ldr x30, [sp], #0x20
0x0665B330: c0035fd6  ret
0x0665B334: 5e962c97  bl #0x3180cac

; RVA 0x665B338 | internal string <GetExcludedItemIds>b__47_1(IMergeItem item) { }
; bytes=156 sha256=95dafff81a8e779797ed5802513e329e9c600e4d2dd3e32dbea069ffe2d40f3a status=arm64_complete_bound indexed_start=True
0x0665B338: fe0f1ef8  str x30, [sp, #-0x20]!
0x0665B33C: f44f01a9  stp x20, x19, [sp, #0x10]
0x0665B340: 74b600b0  adrp x20, #0x7d28000
0x0665B344: 88aa4139  ldrb w8, [x20, #0x6a]
0x0665B348: f30301aa  mov x19, x1
0x0665B34C: c8000037  tbnz w8, #0, #0x665b364
0x0665B350: e08000d0  adrp x0, #0x7679000
0x0665B354: 001044f9  ldr x0, [x0, #0x820]
0x0665B358: b0952c97  bl #0x3180a18
0x0665B35C: 28008052  movz w8, #0x1
0x0665B360: 88aa0139  strb w8, [x20, #0x6a]
0x0665B364: 730300b4  cbz x19, #0x665b3d0
0x0665B368: ea8000d0  adrp x10, #0x7679000
0x0665B36C: 680240f9  ldr x8, [x19]
0x0665B370: 4a1144f9  ldr x10, [x10, #0x820]
0x0665B374: 095d4279  ldrh w9, [x8, #0x12e]
0x0665B378: 410140f9  ldr x1, [x10]
0x0665B37C: 290100b4  cbz x9, #0x665b3a0
0x0665B380: 0a5940f9  ldr x10, [x8, #0xb0]
0x0665B384: 4a210091  add x10, x10, #8
0x0665B388: 4b815ff8  ldur x11, [x10, #-8]
0x0665B38C: 7f0101eb  cmp x11, x1
0x0665B390: 00010054  b.eq #0x665b3b0
0x0665B394: 290500f1  subs x9, x9, #1
0x0665B398: 4a410091  add x10, x10, #0x10
0x0665B39C: 61ffff54  b.ne #0x665b388
0x0665B3A0: e00313aa  mov x0, x19
0x0665B3A4: e2031f2a  mov w2, wzr
0x0665B3A8: daed2b97  bl #0x3156b10
0x0665B3AC: 04000014  b #0x665b3bc
0x0665B3B0: 490180b9  ldrsw x9, [x10]
0x0665B3B4: 0811098b  add x8, x8, x9, lsl #4
0x0665B3B8: 00e10491  add x0, x8, #0x138
0x0665B3BC: 020440a9  ldp x2, x1, [x0]
0x0665B3C0: e00313aa  mov x0, x19
0x0665B3C4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0665B3C8: fe0742f8  ldr x30, [sp], #0x20
0x0665B3CC: 40001fd6  br x2
0x0665B3D0: 37962c97  bl #0x3180cac

