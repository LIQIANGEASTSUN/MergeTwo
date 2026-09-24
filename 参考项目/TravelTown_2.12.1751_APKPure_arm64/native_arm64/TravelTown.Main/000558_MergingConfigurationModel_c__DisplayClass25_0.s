; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 558 .MergingConfigurationModel.<>c__DisplayClass25_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x613E050 | public void .ctor() { }
; bytes=8 sha256=74c85019330c4860a171b200a11972512a051ba97c138692fe1afe8744f6e700 status=arm64_complete_bound indexed_start=True
0x0613E050: e1031faa  mov x1, xzr
0x0613E054: 6a71d617  b #0x56da5fc

; RVA 0x61414E0 | internal bool <GetGraphsByType>b__0(IMergeGraphItem x) { }
; bytes=180 sha256=9650afe727c4551df7fa86fa2c37e7deb60c7eaebba1e786ff1e482cca852c05 status=arm64_complete_bound indexed_start=True
0x061414E0: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x061414E4: f44f01a9  stp x20, x19, [sp, #0x10]
0x061414E8: 15df00f0  adrp x21, #0x7d24000
0x061414EC: a83a5739  ldrb w8, [x21, #0x5ce]
0x061414F0: f40301aa  mov x20, x1
0x061414F4: f30300aa  mov x19, x0
0x061414F8: c8000037  tbnz w8, #0, #0x6141510
0x061414FC: c0a900f0  adrp x0, #0x767c000
0x06141500: 002441f9  ldr x0, [x0, #0x248]
0x06141504: 45fd4097  bl #0x3180a18
0x06141508: 28008052  movz w8, #0x1
0x0614150C: a83a1739  strb w8, [x21, #0x5ce]
0x06141510: 140400b4  cbz x20, #0x6141590
0x06141514: caa900f0  adrp x10, #0x767c000
0x06141518: 880240f9  ldr x8, [x20]
0x0614151C: 4a2541f9  ldr x10, [x10, #0x248]
0x06141520: 095d4279  ldrh w9, [x8, #0x12e]
0x06141524: 410140f9  ldr x1, [x10]
0x06141528: 290100b4  cbz x9, #0x614154c
0x0614152C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06141530: 4a210091  add x10, x10, #8
0x06141534: 4b815ff8  ldur x11, [x10, #-8]
0x06141538: 7f0101eb  cmp x11, x1
0x0614153C: 00010054  b.eq #0x614155c
0x06141540: 290500f1  subs x9, x9, #1
0x06141544: 4a410091  add x10, x10, #0x10
0x06141548: 61ffff54  b.ne #0x6141534
0x0614154C: e2018052  movz w2, #0xf
0x06141550: e00314aa  mov x0, x20
0x06141554: 6f554097  bl #0x3156b10
0x06141558: 05000014  b #0x614156c
0x0614155C: 490140b9  ldr w9, [x10]
0x06141560: 293d0011  add w9, w9, #0xf
0x06141564: 08d1298b  add x8, x8, w9, sxtw #4
0x06141568: 00e10491  add x0, x8, #0x138
0x0614156C: 080440a9  ldp x8, x1, [x0]
0x06141570: e00314aa  mov x0, x20
0x06141574: 00013fd6  blr x8
0x06141578: 681240b9  ldr w8, [x19, #0x10]
0x0614157C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06141580: 1f00086b  cmp w0, w8
0x06141584: e0179f1a  cset w0, eq
0x06141588: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0614158C: c0035fd6  ret
0x06141590: c7fd4097  bl #0x3180cac

