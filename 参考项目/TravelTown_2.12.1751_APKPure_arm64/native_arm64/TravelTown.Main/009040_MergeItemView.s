; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 9040 Merger.Game.Views.Components.MergeItemView
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x671A194 | protected Sprite get_EmptyIconSprite() { }
; bytes=116 sha256=4ea5c4725ab5e6da85603e1bff292344c9204edf595339fa99f3f5a719b81ab4 status=arm64_complete_bound indexed_start=True
0x0671A194: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0671A198: f44f01a9  stp x20, x19, [sp, #0x10]
0x0671A19C: 75b000d0  adrp x21, #0x7d28000
0x0671A1A0: b4790090  adrp x20, #0x764e000
0x0671A1A4: a8566239  ldrb w8, [x21, #0x895]
0x0671A1A8: 947242f9  ldr x20, [x20, #0x4e0]
0x0671A1AC: f30300aa  mov x19, x0
0x0671A1B0: c8000037  tbnz w8, #0, #0x671a1c8
0x0671A1B4: a0790090  adrp x0, #0x764e000
0x0671A1B8: 007042f9  ldr x0, [x0, #0x4e0]
0x0671A1BC: 179a2997  bl #0x3180a18
0x0671A1C0: 28008052  movz w8, #0x1
0x0671A1C4: a8562239  strb w8, [x21, #0x895]
0x0671A1C8: 800240f9  ldr x0, [x20]
0x0671A1CC: 742640f9  ldr x20, [x19, #0x48]
0x0671A1D0: 08e040b9  ldr w8, [x0, #0xe0]
0x0671A1D4: 48000035  cbnz w8, #0x671a1dc
0x0671A1D8: 6d9a2997  bl #0x3180b8c
0x0671A1DC: e00314aa  mov x0, x20
0x0671A1E0: e1031faa  mov x1, xzr
0x0671A1E4: e2031faa  mov x2, xzr
0x0671A1E8: 63121f94  bl #0x6edeb74
0x0671A1EC: e803002a  mov w8, w0
0x0671A1F0: e0031faa  mov x0, xzr
0x0671A1F4: 48000036  tbz w8, #0, #0x671a1fc
0x0671A1F8: 602640f9  ldr x0, [x19, #0x48]
0x0671A1FC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0671A200: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0671A204: c0035fd6  ret

; RVA 0x671A208 | private void Awake() { }
; bytes=136 sha256=aa6039ad1a14c54d2004685206def24c24651804343f43691c7936bb1d50f37c status=arm64_complete_bound indexed_start=True
0x0671A208: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0671A20C: f44f01a9  stp x20, x19, [sp, #0x10]
0x0671A210: 151c40f9  ldr x21, [x0, #0x38]
0x0671A214: b50300b4  cbz x21, #0x671a288
0x0671A218: a80e40f9  ldr x8, [x21, #0x18]
0x0671A21C: 080300b4  cbz x8, #0x671a27c
0x0671A220: 131840f9  ldr x19, [x0, #0x30]
0x0671A224: e1031faa  mov x1, xzr
0x0671A228: f40300aa  mov x20, x0
0x0671A22C: 1a071f94  bl #0x6edbe94
0x0671A230: c00200b4  cbz x0, #0x671a288
0x0671A234: e1031faa  mov x1, xzr
0x0671A238: 244d1f94  bl #0x6eed6c8
0x0671A23C: 881e40f9  ldr x8, [x20, #0x38]
0x0671A240: 480200b4  cbz x8, #0x671a288
0x0671A244: 081940b9  ldr w8, [x8, #0x18]
0x0671A248: a91a40b9  ldr w9, [x21, #0x18]
0x0671A24C: 0a0cc81a  sdiv w10, w0, w8
0x0671A250: 4881081b  msub w8, w10, w8, w0
0x0671A254: 1f01096b  cmp w8, w9
0x0671A258: a2010054  b.hs #0x671a28c
0x0671A25C: 730100b4  cbz x19, #0x671a288
0x0671A260: a8ce288b  add x8, x21, w8, sxtw #3
0x0671A264: 011140f9  ldr x1, [x8, #0x20]
0x0671A268: e00313aa  mov x0, x19
0x0671A26C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0671A270: e2031faa  mov x2, xzr
0x0671A274: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0671A278: 34fe2214  b #0x6fd9b48
0x0671A27C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0671A280: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0671A284: c0035fd6  ret
0x0671A288: 899a2997  bl #0x3180cac
0x0671A28C: 8a9a2997  bl #0x3180cb4

; RVA 0x671A290 | public virtual void set_MergeItem(IMergeItem value) { }
; bytes=324 sha256=62b784a6a397ad3b5ca8e863f5309447d24edcf300ecfc99934c0db852439978 status=arm64_complete_bound indexed_start=True
0x0671A290: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0671A294: f44f01a9  stp x20, x19, [sp, #0x10]
0x0671A298: 74b000d0  adrp x20, #0x7d28000
0x0671A29C: 885a6239  ldrb w8, [x20, #0x896]
0x0671A2A0: f50301aa  mov x21, x1
0x0671A2A4: f30300aa  mov x19, x0
0x0671A2A8: c8000037  tbnz w8, #0, #0x671a2c0
0x0671A2AC: 207b00d0  adrp x0, #0x7680000
0x0671A2B0: 004843f9  ldr x0, [x0, #0x690]
0x0671A2B4: d9992997  bl #0x3180a18
0x0671A2B8: 28008052  movz w8, #0x1
0x0671A2BC: 885a2239  strb w8, [x20, #0x896]
0x0671A2C0: 741a40f9  ldr x20, [x19, #0x30]
0x0671A2C4: 750200b4  cbz x21, #0x671a310
0x0671A2C8: 2a7b00d0  adrp x10, #0x7680000
0x0671A2CC: a80240f9  ldr x8, [x21]
0x0671A2D0: 4a4943f9  ldr x10, [x10, #0x690]
0x0671A2D4: 095d4279  ldrh w9, [x8, #0x12e]
0x0671A2D8: 410140f9  ldr x1, [x10]
0x0671A2DC: 290100b4  cbz x9, #0x671a300
0x0671A2E0: 0a5940f9  ldr x10, [x8, #0xb0]
0x0671A2E4: 4a210091  add x10, x10, #8
0x0671A2E8: 4b815ff8  ldur x11, [x10, #-8]
0x0671A2EC: 7f0101eb  cmp x11, x1
0x0671A2F0: a0010054  b.eq #0x671a324
0x0671A2F4: 290500f1  subs x9, x9, #1
0x0671A2F8: 4a410091  add x10, x10, #0x10
0x0671A2FC: 61ffff54  b.ne #0x671a2e8
0x0671A300: 42008052  movz w2, #0x2
0x0671A304: e00315aa  mov x0, x21
0x0671A308: 02f22897  bl #0x3156b10
0x0671A30C: 0a000014  b #0x671a334
0x0671A310: e00313aa  mov x0, x19
0x0671A314: a0ffff97  bl #0x671a194
0x0671A318: b40500b4  cbz x20, #0x671a3cc
0x0671A31C: e10300aa  mov x1, x0
0x0671A320: 23000014  b #0x671a3ac
0x0671A324: 490140b9  ldr w9, [x10]
0x0671A328: 29090011  add w9, w9, #2
0x0671A32C: 08d1298b  add x8, x8, w9, sxtw #4
0x0671A330: 00e10491  add x0, x8, #0x138
0x0671A334: 080440a9  ldp x8, x1, [x0]
0x0671A338: e00315aa  mov x0, x21
0x0671A33C: 00013fd6  blr x8
0x0671A340: 740400b4  cbz x20, #0x671a3cc
0x0671A344: e10300aa  mov x1, x0
0x0671A348: e00314aa  mov x0, x20
0x0671A34C: e2031faa  mov x2, xzr
0x0671A350: ea4a0694  bl #0x68acef8
0x0671A354: 752240f9  ldr x21, [x19, #0x40]
0x0671A358: b50300b4  cbz x21, #0x671a3cc
0x0671A35C: a80e40f9  ldr x8, [x21, #0x18]
0x0671A360: 080300b4  cbz x8, #0x671a3c0
0x0671A364: 741640f9  ldr x20, [x19, #0x28]
0x0671A368: e00313aa  mov x0, x19
0x0671A36C: e1031faa  mov x1, xzr
0x0671A370: c9061f94  bl #0x6edbe94
0x0671A374: c00200b4  cbz x0, #0x671a3cc
0x0671A378: e1031faa  mov x1, xzr
0x0671A37C: d34c1f94  bl #0x6eed6c8
0x0671A380: 682240f9  ldr x8, [x19, #0x40]
0x0671A384: 480200b4  cbz x8, #0x671a3cc
0x0671A388: 081940b9  ldr w8, [x8, #0x18]
0x0671A38C: a91a40b9  ldr w9, [x21, #0x18]
0x0671A390: 0a0cc81a  sdiv w10, w0, w8
0x0671A394: 4881081b  msub w8, w10, w8, w0
0x0671A398: 1f01096b  cmp w8, w9
0x0671A39C: a2010054  b.hs #0x671a3d0
0x0671A3A0: 740100b4  cbz x20, #0x671a3cc
0x0671A3A4: a8ce288b  add x8, x21, w8, sxtw #3
0x0671A3A8: 011140f9  ldr x1, [x8, #0x20]
0x0671A3AC: e00314aa  mov x0, x20
0x0671A3B0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0671A3B4: e2031faa  mov x2, xzr
0x0671A3B8: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0671A3BC: e3fd2214  b #0x6fd9b48
0x0671A3C0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0671A3C4: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0671A3C8: c0035fd6  ret
0x0671A3CC: 389a2997  bl #0x3180cac
0x0671A3D0: 399a2997  bl #0x3180cb4

; RVA 0x671A3D4 | public void .ctor() { }
; bytes=8 sha256=3ac7eb6b3769071096aba67b3a8209b90a27d2a233ae4d66e740212b30bb946d status=arm64_complete_bound indexed_start=True
0x0671A3D4: e1031faa  mov x1, xzr
0x0671A3D8: fa210614  b #0x68a2bc0

