; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25678 Merger.MergeBoard.View.IntervalTicker
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A361CC | private long get_CurrentServerTimeMS() { }
; bytes=160 sha256=9ff58c0db1990942a2b869d63090557450d1c614f939be4113846a28b06c8d6d status=arm64_complete_bound indexed_start=True
0x06A361CC: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A361D0: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A361D4: b4970090  adrp x20, #0x7d2a000
0x06A361D8: 882e5339  ldrb w8, [x20, #0x4cb]
0x06A361DC: f30300aa  mov x19, x0
0x06A361E0: c8000037  tbnz w8, #0, #0x6a361f8
0x06A361E4: e06100b0  adrp x0, #0x7673000
0x06A361E8: 006c46f9  ldr x0, [x0, #0xcd8]
0x06A361EC: 0b2a1d97  bl #0x3180a18
0x06A361F0: 28008052  movz w8, #0x1
0x06A361F4: 882e1339  strb w8, [x20, #0x4cb]
0x06A361F8: 731640f9  ldr x19, [x19, #0x28]
0x06A361FC: 730300b4  cbz x19, #0x6a36268
0x06A36200: ea6100b0  adrp x10, #0x7673000
0x06A36204: 680240f9  ldr x8, [x19]
0x06A36208: 4a6d46f9  ldr x10, [x10, #0xcd8]
0x06A3620C: 095d4279  ldrh w9, [x8, #0x12e]
0x06A36210: 410140f9  ldr x1, [x10]
0x06A36214: 290100b4  cbz x9, #0x6a36238
0x06A36218: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A3621C: 4a210091  add x10, x10, #8
0x06A36220: 4b815ff8  ldur x11, [x10, #-8]
0x06A36224: 7f0101eb  cmp x11, x1
0x06A36228: 00010054  b.eq #0x6a36248
0x06A3622C: 290500f1  subs x9, x9, #1
0x06A36230: 4a410091  add x10, x10, #0x10
0x06A36234: 61ffff54  b.ne #0x6a36220
0x06A36238: e00313aa  mov x0, x19
0x06A3623C: e2031f2a  mov w2, wzr
0x06A36240: 34821c97  bl #0x3156b10
0x06A36244: 04000014  b #0x6a36254
0x06A36248: 490180b9  ldrsw x9, [x10]
0x06A3624C: 0811098b  add x8, x8, x9, lsl #4
0x06A36250: 00e10491  add x0, x8, #0x138
0x06A36254: 020440a9  ldp x2, x1, [x0]
0x06A36258: e00313aa  mov x0, x19
0x06A3625C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A36260: fe0742f8  ldr x30, [sp], #0x20
0x06A36264: 40001fd6  br x2
0x06A36268: 912a1d97  bl #0x3180cac

; RVA 0x6A3626C | private void Start() { }
; bytes=316 sha256=123b2783f136c86c6e66289cc5bee0309bba0058326380672650eb83c8188640 status=arm64_complete_bound indexed_start=True
0x06A3626C: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A36270: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A36274: b3970090  adrp x19, #0x7d2a000
0x06A36278: 68325339  ldrb w8, [x19, #0x4cc]
0x06A3627C: f40300aa  mov x20, x0
0x06A36280: 28010037  tbnz w8, #0, #0x6a362a4
0x06A36284: 406400d0  adrp x0, #0x76c0000
0x06A36288: 00dc43f9  ldr x0, [x0, #0x7b8]
0x06A3628C: e3291d97  bl #0x3180a18
0x06A36290: c06700b0  adrp x0, #0x772f000
0x06A36294: 00cc42f9  ldr x0, [x0, #0x598]
0x06A36298: e0291d97  bl #0x3180a18
0x06A3629C: 28008052  movz w8, #0x1
0x06A362A0: 68321339  strb w8, [x19, #0x4cc]
0x06A362A4: e00314aa  mov x0, x20
0x06A362A8: c9ffff97  bl #0x6a361cc
0x06A362AC: 951a40f9  ldr x21, [x20, #0x30]
0x06A362B0: b50700b4  cbz x21, #0x6a363a4
0x06A362B4: 4a6400d0  adrp x10, #0x76c0000
0x06A362B8: a80240f9  ldr x8, [x21]
0x06A362BC: 4add43f9  ldr x10, [x10, #0x7b8]
0x06A362C0: f30300aa  mov x19, x0
0x06A362C4: 095d4279  ldrh w9, [x8, #0x12e]
0x06A362C8: 410140f9  ldr x1, [x10]
0x06A362CC: 290100b4  cbz x9, #0x6a362f0
0x06A362D0: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A362D4: 4a210091  add x10, x10, #8
0x06A362D8: 4b815ff8  ldur x11, [x10, #-8]
0x06A362DC: 7f0101eb  cmp x11, x1
0x06A362E0: 00010054  b.eq #0x6a36300
0x06A362E4: 290500f1  subs x9, x9, #1
0x06A362E8: 4a410091  add x10, x10, #0x10
0x06A362EC: 61ffff54  b.ne #0x6a362d8
0x06A362F0: 82008052  movz w2, #0x4
0x06A362F4: e00315aa  mov x0, x21
0x06A362F8: 06821c97  bl #0x3156b10
0x06A362FC: 05000014  b #0x6a36310
0x06A36300: 490140b9  ldr w9, [x10]
0x06A36304: 29110011  add w9, w9, #4
0x06A36308: 08d1298b  add x8, x8, w9, sxtw #4
0x06A3630C: 00e10491  add x0, x8, #0x138
0x06A36310: 080440a9  ldp x8, x1, [x0]
0x06A36314: e00315aa  mov x0, x21
0x06A36318: 00013fd6  blr x8
0x06A3631C: 941240f9  ldr x20, [x20, #0x20]
0x06A36320: 340400b4  cbz x20, #0x6a363a4
0x06A36324: ca6700b0  adrp x10, #0x772f000
0x06A36328: 880240f9  ldr x8, [x20]
0x06A3632C: 4acd42f9  ldr x10, [x10, #0x598]
0x06A36330: f50300aa  mov x21, x0
0x06A36334: 095d4279  ldrh w9, [x8, #0x12e]
0x06A36338: 410140f9  ldr x1, [x10]
0x06A3633C: 290100b4  cbz x9, #0x6a36360
0x06A36340: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A36344: 4a210091  add x10, x10, #8
0x06A36348: 4b815ff8  ldur x11, [x10, #-8]
0x06A3634C: 7f0101eb  cmp x11, x1
0x06A36350: 00010054  b.eq #0x6a36370
0x06A36354: 290500f1  subs x9, x9, #1
0x06A36358: 4a410091  add x10, x10, #0x10
0x06A3635C: 61ffff54  b.ne #0x6a36348
0x06A36360: e00314aa  mov x0, x20
0x06A36364: e2031f2a  mov w2, wzr
0x06A36368: ea811c97  bl #0x3156b10
0x06A3636C: 04000014  b #0x6a3637c
0x06A36370: 490180b9  ldrsw x9, [x10]
0x06A36374: 0811098b  add x8, x8, x9, lsl #4
0x06A36378: 00e10491  add x0, x8, #0x138
0x06A3637C: 680215cb  sub x8, x19, x21
0x06A36380: 020440a9  ldp x2, x1, [x0]
0x06A36384: e00314aa  mov x0, x20
0x06A36388: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A3638C: 498fa852  movz w9, #0x447a, lsl #16
0x06A36390: 0001229e  scvtf s0, x8
0x06A36394: 2101271e  fmov s1, w9
0x06A36398: 0018211e  fdiv s0, s0, s1
0x06A3639C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A363A0: 40001fd6  br x2
0x06A363A4: 422a1d97  bl #0x3180cac

; RVA 0x6A363A8 | private void Update() { }
; bytes=372 sha256=e887f36a14cab9dfb84ff182c49f94dcc9333d236e317e61a13e92f9289af94d status=arm64_complete_bound indexed_start=True
0x06A363A8: e80f1efc  str d8, [sp, #-0x20]!
0x06A363AC: fe0700f9  str x30, [sp, #8]
0x06A363B0: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A363B4: b4970090  adrp x20, #0x7d2a000
0x06A363B8: 88365339  ldrb w8, [x20, #0x4cd]
0x06A363BC: f30300aa  mov x19, x0
0x06A363C0: 28010037  tbnz w8, #0, #0x6a363e4
0x06A363C4: 406400d0  adrp x0, #0x76c0000
0x06A363C8: 00dc43f9  ldr x0, [x0, #0x7b8]
0x06A363CC: 93291d97  bl #0x3180a18
0x06A363D0: c06700b0  adrp x0, #0x772f000
0x06A363D4: 00cc42f9  ldr x0, [x0, #0x598]
0x06A363D8: 90291d97  bl #0x3180a18
0x06A363DC: 28008052  movz w8, #0x1
0x06A363E0: 88361339  strb w8, [x20, #0x4cd]
0x06A363E4: 603a40bd  ldr s0, [x19, #0x38]
0x06A363E8: 0820201e  fcmp s0, #0.0
0x06A363EC: c4030054  b.mi #0x6a36464
0x06A363F0: 683e40bd  ldr s8, [x19, #0x3c]
0x06A363F4: e0031faa  mov x0, xzr
0x06A363F8: d3c61294  bl #0x6ee7f44
0x06A363FC: 613a40bd  ldr s1, [x19, #0x38]
0x06A36400: 0829201e  fadd s8, s8, s0
0x06A36404: 683e00bd  str s8, [x19, #0x3c]
0x06A36408: 0021211e  fcmp s8, s1
0x06A3640C: c4020054  b.mi #0x6a36464
0x06A36410: 741240f9  ldr x20, [x19, #0x20]
0x06A36414: 7f3e00b9  str wzr, [x19, #0x3c]
0x06A36418: 140800b4  cbz x20, #0x6a36518
0x06A3641C: ca6700b0  adrp x10, #0x772f000
0x06A36420: 880240f9  ldr x8, [x20]
0x06A36424: 4acd42f9  ldr x10, [x10, #0x598]
0x06A36428: 095d4279  ldrh w9, [x8, #0x12e]
0x06A3642C: 410140f9  ldr x1, [x10]
0x06A36430: 290100b4  cbz x9, #0x6a36454
0x06A36434: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A36438: 4a210091  add x10, x10, #8
0x06A3643C: 4b815ff8  ldur x11, [x10, #-8]
0x06A36440: 7f0101eb  cmp x11, x1
0x06A36444: 80010054  b.eq #0x6a36474
0x06A36448: 290500f1  subs x9, x9, #1
0x06A3644C: 4a410091  add x10, x10, #0x10
0x06A36450: 61ffff54  b.ne #0x6a3643c
0x06A36454: e00314aa  mov x0, x20
0x06A36458: e2031f2a  mov w2, wzr
0x06A3645C: ad811c97  bl #0x3156b10
0x06A36460: 08000014  b #0x6a36480
0x06A36464: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A36468: fe0740f9  ldr x30, [sp, #8]
0x06A3646C: e80742fc  ldr d8, [sp], #0x20
0x06A36470: c0035fd6  ret
0x06A36474: 490180b9  ldrsw x9, [x10]
0x06A36478: 0811098b  add x8, x8, x9, lsl #4
0x06A3647C: 00e10491  add x0, x8, #0x138
0x06A36480: 080440a9  ldp x8, x1, [x0]
0x06A36484: e00314aa  mov x0, x20
0x06A36488: 001da84e  mov v0.16b, v8.16b
0x06A3648C: 00013fd6  blr x8
0x06A36490: 741a40f9  ldr x20, [x19, #0x30]
0x06A36494: e00313aa  mov x0, x19
0x06A36498: 4dffff97  bl #0x6a361cc
0x06A3649C: f40300b4  cbz x20, #0x6a36518
0x06A364A0: 4a6400d0  adrp x10, #0x76c0000
0x06A364A4: 880240f9  ldr x8, [x20]
0x06A364A8: 4add43f9  ldr x10, [x10, #0x7b8]
0x06A364AC: f30300aa  mov x19, x0
0x06A364B0: 095d4279  ldrh w9, [x8, #0x12e]
0x06A364B4: 410140f9  ldr x1, [x10]
0x06A364B8: 290100b4  cbz x9, #0x6a364dc
0x06A364BC: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A364C0: 4a210091  add x10, x10, #8
0x06A364C4: 4b815ff8  ldur x11, [x10, #-8]
0x06A364C8: 7f0101eb  cmp x11, x1
0x06A364CC: 00010054  b.eq #0x6a364ec
0x06A364D0: 290500f1  subs x9, x9, #1
0x06A364D4: 4a410091  add x10, x10, #0x10
0x06A364D8: 61ffff54  b.ne #0x6a364c4
0x06A364DC: a2008052  movz w2, #0x5
0x06A364E0: e00314aa  mov x0, x20
0x06A364E4: 8b811c97  bl #0x3156b10
0x06A364E8: 05000014  b #0x6a364fc
0x06A364EC: 490140b9  ldr w9, [x10]
0x06A364F0: 29150011  add w9, w9, #5
0x06A364F4: 08d1298b  add x8, x8, w9, sxtw #4
0x06A364F8: 00e10491  add x0, x8, #0x138
0x06A364FC: 030840a9  ldp x3, x2, [x0]
0x06A36500: e00314aa  mov x0, x20
0x06A36504: e10313aa  mov x1, x19
0x06A36508: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A3650C: fe0740f9  ldr x30, [sp, #8]
0x06A36510: e80742fc  ldr d8, [sp], #0x20
0x06A36514: 60001fd6  br x3
0x06A36518: e5291d97  bl #0x3180cac

; RVA 0x6A3651C | public void .ctor() { }
; bytes=8 sha256=655e427fb8b092c9988cbda66477eabb935c64df24ab58085c64f63fd9e414e9 status=arm64_complete_bound indexed_start=True
0x06A3651C: e1031faa  mov x1, xzr
0x06A36520: edaa1214  b #0x6ee10d4

