; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1020 MergeEngine.ECS.Components.KillSystem
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x68F8274 | public override SystemPriorities get_Priority() { }
; bytes=8 sha256=008816324250c06e66ca174f257c933b0d3a7d05ae19334ddb101a72517eaadd status=arm64_complete_bound indexed_start=True
0x068F8274: 60008052  movz w0, #0x3
0x068F8278: c0035fd6  ret

; RVA 0x68F827C | protected override IEnumerable<KillComponent> OnWillProcessComponents(ReadOnlyCollection<KillComponent> components) { }
; bytes=72 sha256=235a9dbe99714523efb9821a7ef7307642e5b7dc4c3a3b30b8b368a03b2bc268 status=arm64_complete_bound indexed_start=True
0x068F827C: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x068F8280: f44f01a9  stp x20, x19, [sp, #0x10]
0x068F8284: 94a100b0  adrp x20, #0x7d29000
0x068F8288: 757100d0  adrp x21, #0x7726000
0x068F828C: 884a6139  ldrb w8, [x20, #0x852]
0x068F8290: b51a42f9  ldr x21, [x21, #0x430]
0x068F8294: f30301aa  mov x19, x1
0x068F8298: c8000037  tbnz w8, #0, #0x68f82b0
0x068F829C: 607100d0  adrp x0, #0x7726000
0x068F82A0: 001842f9  ldr x0, [x0, #0x430]
0x068F82A4: dd212297  bl #0x3180a18
0x068F82A8: 28008052  movz w8, #0x1
0x068F82AC: 884a2139  strb w8, [x20, #0x852]
0x068F82B0: a10240f9  ldr x1, [x21]
0x068F82B4: e00313aa  mov x0, x19
0x068F82B8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x068F82BC: fe57c2a8  ldp x30, x21, [sp], #0x20
0x068F82C0: 449f4d17  b #0x3c5ffd0

; RVA 0x68F82C4 | protected override void ProcessComponent(KillComponent component) { }
; bytes=180 sha256=4e7c352c47e887aafd381ee58f5bacb96965d62bcfc473b0706dd144f2a23102 status=arm64_complete_bound indexed_start=True
0x068F82C4: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x068F82C8: f44f01a9  stp x20, x19, [sp, #0x10]
0x068F82CC: 95a100b0  adrp x21, #0x7d29000
0x068F82D0: a84e6139  ldrb w8, [x21, #0x853]
0x068F82D4: f40301aa  mov x20, x1
0x068F82D8: f30300aa  mov x19, x0
0x068F82DC: c8000037  tbnz w8, #0, #0x68f82f4
0x068F82E0: 206c00d0  adrp x0, #0x767e000
0x068F82E4: 00e042f9  ldr x0, [x0, #0x5c0]
0x068F82E8: cc212297  bl #0x3180a18
0x068F82EC: 28008052  movz w8, #0x1
0x068F82F0: a84e2139  strb w8, [x21, #0x853]
0x068F82F4: 140400b4  cbz x20, #0x68f8374
0x068F82F8: 730a40f9  ldr x19, [x19, #0x10]
0x068F82FC: d30300b4  cbz x19, #0x68f8374
0x068F8300: 2a6c00d0  adrp x10, #0x767e000
0x068F8304: 680240f9  ldr x8, [x19]
0x068F8308: 4ae142f9  ldr x10, [x10, #0x5c0]
0x068F830C: 940a40f9  ldr x20, [x20, #0x10]
0x068F8310: 095d4279  ldrh w9, [x8, #0x12e]
0x068F8314: 410140f9  ldr x1, [x10]
0x068F8318: 290100b4  cbz x9, #0x68f833c
0x068F831C: 0a5940f9  ldr x10, [x8, #0xb0]
0x068F8320: 4a210091  add x10, x10, #8
0x068F8324: 4b815ff8  ldur x11, [x10, #-8]
0x068F8328: 7f0101eb  cmp x11, x1
0x068F832C: 00010054  b.eq #0x68f834c
0x068F8330: 290500f1  subs x9, x9, #1
0x068F8334: 4a410091  add x10, x10, #0x10
0x068F8338: 61ffff54  b.ne #0x68f8324
0x068F833C: c2008052  movz w2, #0x6
0x068F8340: e00313aa  mov x0, x19
0x068F8344: f3792197  bl #0x3156b10
0x068F8348: 05000014  b #0x68f835c
0x068F834C: 490140b9  ldr w9, [x10]
0x068F8350: 29190011  add w9, w9, #6
0x068F8354: 08d1298b  add x8, x8, w9, sxtw #4
0x068F8358: 00e10491  add x0, x8, #0x138
0x068F835C: 030840a9  ldp x3, x2, [x0]
0x068F8360: e00313aa  mov x0, x19
0x068F8364: e10314aa  mov x1, x20
0x068F8368: f44f41a9  ldp x20, x19, [sp, #0x10]
0x068F836C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x068F8370: 60001fd6  br x3
0x068F8374: 4e222297  bl #0x3180cac

; RVA 0x68F8378 | public void ForceKill() { }
; bytes=236 sha256=0103721f2432510d002772f9cecb763cfe1cd8b83168cfc631be56e44822ebb7 status=arm64_complete_bound indexed_start=True
0x068F8378: fe0f1cf8  str x30, [sp, #-0x40]!
0x068F837C: f85f01a9  stp x24, x23, [sp, #0x10]
0x068F8380: f65702a9  stp x22, x21, [sp, #0x20]
0x068F8384: f44f03a9  stp x20, x19, [sp, #0x30]
0x068F8388: 97a100b0  adrp x23, #0x7d29000
0x068F838C: 787100d0  adrp x24, #0x7726000
0x068F8390: 767100d0  adrp x22, #0x7726000
0x068F8394: 747100d0  adrp x20, #0x7726000
0x068F8398: 757100d0  adrp x21, #0x7726000
0x068F839C: e8526139  ldrb w8, [x23, #0x854]
0x068F83A0: 181f42f9  ldr x24, [x24, #0x438]
0x068F83A4: d61a42f9  ldr x22, [x22, #0x430]
0x068F83A8: 942242f9  ldr x20, [x20, #0x440]
0x068F83AC: b52642f9  ldr x21, [x21, #0x448]
0x068F83B0: f30300aa  mov x19, x0
0x068F83B4: 48020037  tbnz w8, #0, #0x68f83fc
0x068F83B8: 607100d0  adrp x0, #0x7726000
0x068F83BC: 002042f9  ldr x0, [x0, #0x440]
0x068F83C0: 96212297  bl #0x3180a18
0x068F83C4: 607100d0  adrp x0, #0x7726000
0x068F83C8: 001842f9  ldr x0, [x0, #0x430]
0x068F83CC: 93212297  bl #0x3180a18
0x068F83D0: 607100d0  adrp x0, #0x7726000
0x068F83D4: 002442f9  ldr x0, [x0, #0x448]
0x068F83D8: 90212297  bl #0x3180a18
0x068F83DC: 607100d0  adrp x0, #0x7726000
0x068F83E0: 002842f9  ldr x0, [x0, #0x450]
0x068F83E4: 8d212297  bl #0x3180a18
0x068F83E8: 607100d0  adrp x0, #0x7726000
0x068F83EC: 001c42f9  ldr x0, [x0, #0x438]
0x068F83F0: 8a212297  bl #0x3180a18
0x068F83F4: 28008052  movz w8, #0x1
0x068F83F8: e8522139  strb w8, [x23, #0x854]
0x068F83FC: 010340f9  ldr x1, [x24]
0x068F8400: e00313aa  mov x0, x19
0x068F8404: b1f95297  bl #0x3db6ac8
0x068F8408: c10240f9  ldr x1, [x22]
0x068F840C: f19e4d97  bl #0x3c5ffd0
0x068F8410: 880240f9  ldr x8, [x20]
0x068F8414: f40300aa  mov x20, x0
0x068F8418: e00308aa  mov x0, x8
0x068F841C: 21222297  bl #0x3180ca0
0x068F8420: a20240f9  ldr x2, [x21]
0x068F8424: e10313aa  mov x1, x19
0x068F8428: e3031faa  mov x3, xzr
0x068F842C: f50300aa  mov x21, x0
0x068F8430: 69a7a897  bl #0x53221d4
0x068F8434: 740100b4  cbz x20, #0x68f8460
0x068F8438: 687100d0  adrp x8, #0x7726000
0x068F843C: 082942f9  ldr x8, [x8, #0x450]
0x068F8440: e00314aa  mov x0, x20
0x068F8444: e10315aa  mov x1, x21
0x068F8448: f44f43a9  ldp x20, x19, [sp, #0x30]
0x068F844C: 020140f9  ldr x2, [x8]
0x068F8450: f65742a9  ldp x22, x21, [sp, #0x20]
0x068F8454: f85f41a9  ldp x24, x23, [sp, #0x10]
0x068F8458: fe0744f8  ldr x30, [sp], #0x40
0x068F845C: d5325d17  b #0x4044fb0
0x068F8460: 13222297  bl #0x3180cac

; RVA 0x68F8464 | public void .ctor() { }
; bytes=72 sha256=e1d11226961827bcccc817627cd836af12cc655298a3a62c3cf47e9a03224a31 status=arm64_complete_bound indexed_start=True
0x068F8464: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x068F8468: f44f01a9  stp x20, x19, [sp, #0x10]
0x068F846C: 94a100b0  adrp x20, #0x7d29000
0x068F8470: 757100d0  adrp x21, #0x7726000
0x068F8474: 88566139  ldrb w8, [x20, #0x855]
0x068F8478: b52e42f9  ldr x21, [x21, #0x458]
0x068F847C: f30300aa  mov x19, x0
0x068F8480: c8000037  tbnz w8, #0, #0x68f8498
0x068F8484: 607100d0  adrp x0, #0x7726000
0x068F8488: 002c42f9  ldr x0, [x0, #0x458]
0x068F848C: 63212297  bl #0x3180a18
0x068F8490: 28008052  movz w8, #0x1
0x068F8494: 88562139  strb w8, [x20, #0x855]
0x068F8498: a10240f9  ldr x1, [x21]
0x068F849C: e00313aa  mov x0, x19
0x068F84A0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x068F84A4: fe57c2a8  ldp x30, x21, [sp], #0x20
0x068F84A8: a2d08b17  b #0x4bec730

; RVA 0x68F84AC | private void <ForceKill>b__4_0(KillComponent killComponent) { }
; bytes=180 sha256=04c5e8bdaa80c7ecc8075e1c4a3d07e9f3f590a60900d2ae2d2c210aa815c3b3 status=arm64_complete_bound indexed_start=True
0x068F84AC: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x068F84B0: f44f01a9  stp x20, x19, [sp, #0x10]
0x068F84B4: 95a100b0  adrp x21, #0x7d29000
0x068F84B8: a85a6139  ldrb w8, [x21, #0x856]
0x068F84BC: f40301aa  mov x20, x1
0x068F84C0: f30300aa  mov x19, x0
0x068F84C4: c8000037  tbnz w8, #0, #0x68f84dc
0x068F84C8: 206c00d0  adrp x0, #0x767e000
0x068F84CC: 00e042f9  ldr x0, [x0, #0x5c0]
0x068F84D0: 52212297  bl #0x3180a18
0x068F84D4: 28008052  movz w8, #0x1
0x068F84D8: a85a2139  strb w8, [x21, #0x856]
0x068F84DC: 140400b4  cbz x20, #0x68f855c
0x068F84E0: 730a40f9  ldr x19, [x19, #0x10]
0x068F84E4: d30300b4  cbz x19, #0x68f855c
0x068F84E8: 2a6c00d0  adrp x10, #0x767e000
0x068F84EC: 680240f9  ldr x8, [x19]
0x068F84F0: 4ae142f9  ldr x10, [x10, #0x5c0]
0x068F84F4: 940a40f9  ldr x20, [x20, #0x10]
0x068F84F8: 095d4279  ldrh w9, [x8, #0x12e]
0x068F84FC: 410140f9  ldr x1, [x10]
0x068F8500: 290100b4  cbz x9, #0x68f8524
0x068F8504: 0a5940f9  ldr x10, [x8, #0xb0]
0x068F8508: 4a210091  add x10, x10, #8
0x068F850C: 4b815ff8  ldur x11, [x10, #-8]
0x068F8510: 7f0101eb  cmp x11, x1
0x068F8514: 00010054  b.eq #0x68f8534
0x068F8518: 290500f1  subs x9, x9, #1
0x068F851C: 4a410091  add x10, x10, #0x10
0x068F8520: 61ffff54  b.ne #0x68f850c
0x068F8524: c2008052  movz w2, #0x6
0x068F8528: e00313aa  mov x0, x19
0x068F852C: 79792197  bl #0x3156b10
0x068F8530: 05000014  b #0x68f8544
0x068F8534: 490140b9  ldr w9, [x10]
0x068F8538: 29190011  add w9, w9, #6
0x068F853C: 08d1298b  add x8, x8, w9, sxtw #4
0x068F8540: 00e10491  add x0, x8, #0x138
0x068F8544: 030840a9  ldp x3, x2, [x0]
0x068F8548: e00313aa  mov x0, x19
0x068F854C: e10314aa  mov x1, x20
0x068F8550: f44f41a9  ldp x20, x19, [sp, #0x10]
0x068F8554: fe57c2a8  ldp x30, x21, [sp], #0x20
0x068F8558: 60001fd6  br x3
0x068F855C: d4212297  bl #0x3180cac

