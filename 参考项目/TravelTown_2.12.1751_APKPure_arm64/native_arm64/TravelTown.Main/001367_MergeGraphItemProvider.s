; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1367 MergeEngine.Configuration.Definitions.WeakReferences.Providers.MergeGraphItemProvider
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x60050E4 | protected override IMergeGraphItem ProvideInstance(WeakReference<IMergeGraphItem, string> reference) { }
; bytes=196 sha256=7ec93bab7aec3c37aa5486ecaedddcf60ce1a57d264c52715ddc4fb6bb098eda status=arm64_complete_bound indexed_start=True
0x060050E4: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x060050E8: f44f01a9  stp x20, x19, [sp, #0x10]
0x060050EC: f5e800d0  adrp x21, #0x7d23000
0x060050F0: a8225d39  ldrb w8, [x21, #0x748]
0x060050F4: f40301aa  mov x20, x1
0x060050F8: f30300aa  mov x19, x0
0x060050FC: c8000037  tbnz w8, #0, #0x6005114
0x06005100: a0b300b0  adrp x0, #0x767a000
0x06005104: 004c42f9  ldr x0, [x0, #0x498]
0x06005108: 44ee4597  bl #0x3180a18
0x0600510C: 28008052  movz w8, #0x1
0x06005110: a8221d39  strb w8, [x21, #0x748]
0x06005114: 940400b4  cbz x20, #0x60051a4
0x06005118: 880240f9  ldr x8, [x20]
0x0600511C: 730a40f9  ldr x19, [x19, #0x10]
0x06005120: e00314aa  mov x0, x20
0x06005124: 09855ca9  ldp x9, x1, [x8, #0x1c8]
0x06005128: 20013fd6  blr x9
0x0600512C: d30300b4  cbz x19, #0x60051a4
0x06005130: aab300b0  adrp x10, #0x767a000
0x06005134: 680240f9  ldr x8, [x19]
0x06005138: 4a4d42f9  ldr x10, [x10, #0x498]
0x0600513C: f40300aa  mov x20, x0
0x06005140: 095d4279  ldrh w9, [x8, #0x12e]
0x06005144: 410140f9  ldr x1, [x10]
0x06005148: 290100b4  cbz x9, #0x600516c
0x0600514C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06005150: 4a210091  add x10, x10, #8
0x06005154: 4b815ff8  ldur x11, [x10, #-8]
0x06005158: 7f0101eb  cmp x11, x1
0x0600515C: 00010054  b.eq #0x600517c
0x06005160: 290500f1  subs x9, x9, #1
0x06005164: 4a410091  add x10, x10, #0x10
0x06005168: 61ffff54  b.ne #0x6005154
0x0600516C: a2008052  movz w2, #0x5
0x06005170: e00313aa  mov x0, x19
0x06005174: 67464597  bl #0x3156b10
0x06005178: 05000014  b #0x600518c
0x0600517C: 490140b9  ldr w9, [x10]
0x06005180: 29150011  add w9, w9, #5
0x06005184: 08d1298b  add x8, x8, w9, sxtw #4
0x06005188: 00e10491  add x0, x8, #0x138
0x0600518C: 030840a9  ldp x3, x2, [x0]
0x06005190: e00313aa  mov x0, x19
0x06005194: e10314aa  mov x1, x20
0x06005198: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0600519C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x060051A0: 60001fd6  br x3
0x060051A4: c2ee4597  bl #0x3180cac

; RVA 0x600421C | public void .ctor() { }
; bytes=72 sha256=42212448c052661688c58de53e21dac00e192843bb5c1fd72ea8bf129a4aa096 status=arm64_complete_bound indexed_start=True
0x0600421C: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06004220: f44f01a9  stp x20, x19, [sp, #0x10]
0x06004224: f4e800f0  adrp x20, #0x7d23000
0x06004228: 55b600d0  adrp x21, #0x76ce000
0x0600422C: 88265d39  ldrb w8, [x20, #0x749]
0x06004230: b56646f9  ldr x21, [x21, #0xcc8]
0x06004234: f30300aa  mov x19, x0
0x06004238: c8000037  tbnz w8, #0, #0x6004250
0x0600423C: 40b600d0  adrp x0, #0x76ce000
0x06004240: 006446f9  ldr x0, [x0, #0xcc8]
0x06004244: f5f14597  bl #0x3180a18
0x06004248: 28008052  movz w8, #0x1
0x0600424C: 88261d39  strb w8, [x20, #0x749]
0x06004250: a10240f9  ldr x1, [x21]
0x06004254: e00313aa  mov x0, x19
0x06004258: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0600425C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06004260: 66f6a417  b #0x4941bf8

