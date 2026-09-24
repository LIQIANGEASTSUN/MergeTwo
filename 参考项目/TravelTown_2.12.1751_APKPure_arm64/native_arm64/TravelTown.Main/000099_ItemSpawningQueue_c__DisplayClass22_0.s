; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 99 .ItemSpawningQueue.<>c__DisplayClass22_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x5FEA940 | public void .ctor() { }
; bytes=8 sha256=3ff1e0c896f1a1db8efb43096dbe4da6029a7f14abc5f3b4bacb89896d4ea36c status=arm64_complete_bound indexed_start=True
0x05FEA940: e1031faa  mov x1, xzr
0x05FEA944: 2ebfdb17  b #0x56da5fc

; RVA 0x5FEB0B8 | internal bool <IsItemInQueue>b__1(IMergeItem i) { }
; bytes=276 sha256=c98040dca3e7c1ade77d6b480ca3a7eb23ac5175cc3aa506c5c4396d35ef11be status=arm64_complete_bound indexed_start=True
0x05FEB0B8: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x05FEB0BC: f44f01a9  stp x20, x19, [sp, #0x10]
0x05FEB0C0: d5e90090  adrp x21, #0x7d23000
0x05FEB0C4: a8d65839  ldrb w8, [x21, #0x635]
0x05FEB0C8: f40301aa  mov x20, x1
0x05FEB0CC: f30300aa  mov x19, x0
0x05FEB0D0: c8000037  tbnz w8, #0, #0x5feb0e8
0x05FEB0D4: 60b400d0  adrp x0, #0x7679000
0x05FEB0D8: 001044f9  ldr x0, [x0, #0x820]
0x05FEB0DC: 4f564697  bl #0x3180a18
0x05FEB0E0: 28008052  movz w8, #0x1
0x05FEB0E4: a8d61839  strb w8, [x21, #0x635]
0x05FEB0E8: 140700b4  cbz x20, #0x5feb1c8
0x05FEB0EC: 75b400d0  adrp x21, #0x7679000
0x05FEB0F0: 880240f9  ldr x8, [x20]
0x05FEB0F4: b51244f9  ldr x21, [x21, #0x820]
0x05FEB0F8: 095d4279  ldrh w9, [x8, #0x12e]
0x05FEB0FC: a10240f9  ldr x1, [x21]
0x05FEB100: 290100b4  cbz x9, #0x5feb124
0x05FEB104: 0a5940f9  ldr x10, [x8, #0xb0]
0x05FEB108: 4a210091  add x10, x10, #8
0x05FEB10C: 4b815ff8  ldur x11, [x10, #-8]
0x05FEB110: 7f0101eb  cmp x11, x1
0x05FEB114: 00010054  b.eq #0x5feb134
0x05FEB118: 290500f1  subs x9, x9, #1
0x05FEB11C: 4a410091  add x10, x10, #0x10
0x05FEB120: 61ffff54  b.ne #0x5feb10c
0x05FEB124: e00314aa  mov x0, x20
0x05FEB128: e2031f2a  mov w2, wzr
0x05FEB12C: 79ae4597  bl #0x3156b10
0x05FEB130: 04000014  b #0x5feb140
0x05FEB134: 490180b9  ldrsw x9, [x10]
0x05FEB138: 0811098b  add x8, x8, x9, lsl #4
0x05FEB13C: 00e10491  add x0, x8, #0x138
0x05FEB140: 080440a9  ldp x8, x1, [x0]
0x05FEB144: e00314aa  mov x0, x20
0x05FEB148: 00013fd6  blr x8
0x05FEB14C: 740a40f9  ldr x20, [x19, #0x10]
0x05FEB150: d40300b4  cbz x20, #0x5feb1c8
0x05FEB154: 880240f9  ldr x8, [x20]
0x05FEB158: a10240f9  ldr x1, [x21]
0x05FEB15C: f30300aa  mov x19, x0
0x05FEB160: 095d4279  ldrh w9, [x8, #0x12e]
0x05FEB164: 290100b4  cbz x9, #0x5feb188
0x05FEB168: 0a5940f9  ldr x10, [x8, #0xb0]
0x05FEB16C: 4a210091  add x10, x10, #8
0x05FEB170: 4b815ff8  ldur x11, [x10, #-8]
0x05FEB174: 7f0101eb  cmp x11, x1
0x05FEB178: 00010054  b.eq #0x5feb198
0x05FEB17C: 290500f1  subs x9, x9, #1
0x05FEB180: 4a410091  add x10, x10, #0x10
0x05FEB184: 61ffff54  b.ne #0x5feb170
0x05FEB188: e00314aa  mov x0, x20
0x05FEB18C: e2031f2a  mov w2, wzr
0x05FEB190: 60ae4597  bl #0x3156b10
0x05FEB194: 04000014  b #0x5feb1a4
0x05FEB198: 490180b9  ldrsw x9, [x10]
0x05FEB19C: 0811098b  add x8, x8, x9, lsl #4
0x05FEB1A0: 00e10491  add x0, x8, #0x138
0x05FEB1A4: 080440a9  ldp x8, x1, [x0]
0x05FEB1A8: e00314aa  mov x0, x20
0x05FEB1AC: 00013fd6  blr x8
0x05FEB1B0: e10300aa  mov x1, x0
0x05FEB1B4: e00313aa  mov x0, x19
0x05FEB1B8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x05FEB1BC: e2031faa  mov x2, xzr
0x05FEB1C0: fe57c2a8  ldp x30, x21, [sp], #0x20
0x05FEB1C4: abfdd317  b #0x54ea870
0x05FEB1C8: b9564697  bl #0x3180cac

; RVA 0x5FEB1CC | internal bool <IsItemInQueue>b__2(ConsumedItemToProducedItemMapping linkedItem) { }
; bytes=208 sha256=bf1a74f35f79e6b5714b9b3b96975f36283ad1329db1dfd5d8b4f152b89249ad status=arm64_complete_bound indexed_start=True
0x05FEB1CC: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x05FEB1D0: f44f01a9  stp x20, x19, [sp, #0x10]
0x05FEB1D4: d5e90090  adrp x21, #0x7d23000
0x05FEB1D8: a8da5839  ldrb w8, [x21, #0x636]
0x05FEB1DC: f40301aa  mov x20, x1
0x05FEB1E0: f30300aa  mov x19, x0
0x05FEB1E4: c8000037  tbnz w8, #0, #0x5feb1fc
0x05FEB1E8: 60b400d0  adrp x0, #0x7679000
0x05FEB1EC: 001044f9  ldr x0, [x0, #0x820]
0x05FEB1F0: 0a564697  bl #0x3180a18
0x05FEB1F4: 28008052  movz w8, #0x1
0x05FEB1F8: a8da1839  strb w8, [x21, #0x636]
0x05FEB1FC: f40400b4  cbz x20, #0x5feb298
0x05FEB200: 800e40f9  ldr x0, [x20, #0x18]
0x05FEB204: a00400b4  cbz x0, #0x5feb298
0x05FEB208: 080040f9  ldr x8, [x0]
0x05FEB20C: 09855ca9  ldp x9, x1, [x8, #0x1c8]
0x05FEB210: 20013fd6  blr x9
0x05FEB214: 740a40f9  ldr x20, [x19, #0x10]
0x05FEB218: 140400b4  cbz x20, #0x5feb298
0x05FEB21C: 6ab400d0  adrp x10, #0x7679000
0x05FEB220: 880240f9  ldr x8, [x20]
0x05FEB224: 4a1144f9  ldr x10, [x10, #0x820]
0x05FEB228: f30300aa  mov x19, x0
0x05FEB22C: 095d4279  ldrh w9, [x8, #0x12e]
0x05FEB230: 410140f9  ldr x1, [x10]
0x05FEB234: 290100b4  cbz x9, #0x5feb258
0x05FEB238: 0a5940f9  ldr x10, [x8, #0xb0]
0x05FEB23C: 4a210091  add x10, x10, #8
0x05FEB240: 4b815ff8  ldur x11, [x10, #-8]
0x05FEB244: 7f0101eb  cmp x11, x1
0x05FEB248: 00010054  b.eq #0x5feb268
0x05FEB24C: 290500f1  subs x9, x9, #1
0x05FEB250: 4a410091  add x10, x10, #0x10
0x05FEB254: 61ffff54  b.ne #0x5feb240
0x05FEB258: e00314aa  mov x0, x20
0x05FEB25C: e2031f2a  mov w2, wzr
0x05FEB260: 2cae4597  bl #0x3156b10
0x05FEB264: 04000014  b #0x5feb274
0x05FEB268: 490180b9  ldrsw x9, [x10]
0x05FEB26C: 0811098b  add x8, x8, x9, lsl #4
0x05FEB270: 00e10491  add x0, x8, #0x138
0x05FEB274: 080440a9  ldp x8, x1, [x0]
0x05FEB278: e00314aa  mov x0, x20
0x05FEB27C: 00013fd6  blr x8
0x05FEB280: e10300aa  mov x1, x0
0x05FEB284: e00313aa  mov x0, x19
0x05FEB288: f44f41a9  ldp x20, x19, [sp, #0x10]
0x05FEB28C: e2031faa  mov x2, xzr
0x05FEB290: fe57c2a8  ldp x30, x21, [sp], #0x20
0x05FEB294: 77fdd317  b #0x54ea870
0x05FEB298: 85564697  bl #0x3180cac

; RVA 0x5FEB29C | internal bool <IsItemInQueue>b__3(ItemSpawnable itemSpawnable) { }
; bytes=56 sha256=f1160657e085daa14616fafd3dcc1a97f0a3b5851dcaa52eb1b25b308b084ede status=arm64_complete_bound indexed_start=True
0x05FEB29C: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x05FEB2A0: 810100b4  cbz x1, #0x5feb2d0
0x05FEB2A4: f30300aa  mov x19, x0
0x05FEB2A8: 200840f9  ldr x0, [x1, #0x10]
0x05FEB2AC: 200100b4  cbz x0, #0x5feb2d0
0x05FEB2B0: 080040f9  ldr x8, [x0]
0x05FEB2B4: 09855ea9  ldp x9, x1, [x8, #0x1e8]
0x05FEB2B8: 20013fd6  blr x9
0x05FEB2BC: 680a40f9  ldr x8, [x19, #0x10]
0x05FEB2C0: 1f0008eb  cmp x0, x8
0x05FEB2C4: e0179f1a  cset w0, eq
0x05FEB2C8: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x05FEB2CC: c0035fd6  ret
0x05FEB2D0: 77564697  bl #0x3180cac

