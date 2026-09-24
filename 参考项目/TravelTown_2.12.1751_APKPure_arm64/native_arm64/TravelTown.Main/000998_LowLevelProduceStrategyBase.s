; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 998 MergeEngine.ECS.Systems.Items.Producers.LowLevelItemProduce.LowLevelProduceStrategyBase
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x679CE90 | protected PowerBoostSystem get_PowerBoostSystem() { }
; bytes=224 sha256=a9f3314301a8773665c37dd46497cc6fd9c70cbd72da68f919eebfd4d2788d67 status=arm64_complete_bound indexed_start=True
0x0679CE90: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0679CE94: f44f01a9  stp x20, x19, [sp, #0x10]
0x0679CE98: 73ac0090  adrp x19, #0x7d28000
0x0679CE9C: 68327739  ldrb w8, [x19, #0xdcc]
0x0679CEA0: f40300aa  mov x20, x0
0x0679CEA4: c8000037  tbnz w8, #0, #0x679cebc
0x0679CEA8: 407900f0  adrp x0, #0x76c7000
0x0679CEAC: 002c47f9  ldr x0, [x0, #0xe58]
0x0679CEB0: da8e2797  bl #0x3180a18
0x0679CEB4: 28008052  movz w8, #0x1
0x0679CEB8: 68323739  strb w8, [x19, #0xdcc]
0x0679CEBC: f30314aa  mov x19, x20
0x0679CEC0: 758e42f8  ldr x21, [x19, #0x28]!
0x0679CEC4: d50400b5  cbnz x21, #0x679cf5c
0x0679CEC8: 941240f9  ldr x20, [x20, #0x20]
0x0679CECC: 140500b4  cbz x20, #0x679cf6c
0x0679CED0: 497900f0  adrp x9, #0x76c7000
0x0679CED4: 292d47f9  ldr x9, [x9, #0xe58]
0x0679CED8: 880240f9  ldr x8, [x20]
0x0679CEDC: 350140f9  ldr x21, [x9]
0x0679CEE0: 095d4279  ldrh w9, [x8, #0x12e]
0x0679CEE4: a11240f9  ldr x1, [x21, #0x20]
0x0679CEE8: a2a24079  ldrh w2, [x21, #0x50]
0x0679CEEC: 290100b4  cbz x9, #0x679cf10
0x0679CEF0: 0a5940f9  ldr x10, [x8, #0xb0]
0x0679CEF4: 4a210091  add x10, x10, #8
0x0679CEF8: 4b815ff8  ldur x11, [x10, #-8]
0x0679CEFC: 7f0101eb  cmp x11, x1
0x0679CF00: e0000054  b.eq #0x679cf1c
0x0679CF04: 290500f1  subs x9, x9, #1
0x0679CF08: 4a410091  add x10, x10, #0x10
0x0679CF0C: 61ffff54  b.ne #0x679cef8
0x0679CF10: e00314aa  mov x0, x20
0x0679CF14: ffe62697  bl #0x3156b10
0x0679CF18: 05000014  b #0x679cf2c
0x0679CF1C: 490140b9  ldr w9, [x10]
0x0679CF20: 2901020b  add w9, w9, w2
0x0679CF24: 08d1298b  add x8, x8, w9, sxtw #4
0x0679CF28: 00e10491  add x0, x8, #0x138
0x0679CF2C: 000440f9  ldr x0, [x0, #8]
0x0679CF30: e10315aa  mov x1, x21
0x0679CF34: 158f2797  bl #0x3180b88
0x0679CF38: 080440f9  ldr x8, [x0, #8]
0x0679CF3C: e10300aa  mov x1, x0
0x0679CF40: e00314aa  mov x0, x20
0x0679CF44: 00013fd6  blr x8
0x0679CF48: f50300aa  mov x21, x0
0x0679CF4C: 600200f9  str x0, [x19]
0x0679CF50: e00313aa  mov x0, x19
0x0679CF54: e10315aa  mov x1, x21
0x0679CF58: 9b8e2797  bl #0x31809c4
0x0679CF5C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0679CF60: e00315aa  mov x0, x21
0x0679CF64: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0679CF68: c0035fd6  ret
0x0679CF6C: 508f2797  bl #0x3180cac

; RVA 0x679E2FC | protected BoardSystem get_BoardSystem() { }
; bytes=224 sha256=5a66226873c0554c7c3a9ae6d7ca7da411e3b7021c696820f8c6f8ce31e6d69f status=arm64_complete_bound indexed_start=True
0x0679E2FC: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0679E300: f44f01a9  stp x20, x19, [sp, #0x10]
0x0679E304: 53ac00d0  adrp x19, #0x7d28000
0x0679E308: 68367739  ldrb w8, [x19, #0xdcd]
0x0679E30C: f40300aa  mov x20, x0
0x0679E310: c8000037  tbnz w8, #0, #0x679e328
0x0679E314: 607900d0  adrp x0, #0x76cc000
0x0679E318: 003043f9  ldr x0, [x0, #0x660]
0x0679E31C: bf892797  bl #0x3180a18
0x0679E320: 28008052  movz w8, #0x1
0x0679E324: 68363739  strb w8, [x19, #0xdcd]
0x0679E328: f30314aa  mov x19, x20
0x0679E32C: 750e43f8  ldr x21, [x19, #0x30]!
0x0679E330: d50400b5  cbnz x21, #0x679e3c8
0x0679E334: 941240f9  ldr x20, [x20, #0x20]
0x0679E338: 140500b4  cbz x20, #0x679e3d8
0x0679E33C: 697900d0  adrp x9, #0x76cc000
0x0679E340: 293143f9  ldr x9, [x9, #0x660]
0x0679E344: 880240f9  ldr x8, [x20]
0x0679E348: 350140f9  ldr x21, [x9]
0x0679E34C: 095d4279  ldrh w9, [x8, #0x12e]
0x0679E350: a11240f9  ldr x1, [x21, #0x20]
0x0679E354: a2a24079  ldrh w2, [x21, #0x50]
0x0679E358: 290100b4  cbz x9, #0x679e37c
0x0679E35C: 0a5940f9  ldr x10, [x8, #0xb0]
0x0679E360: 4a210091  add x10, x10, #8
0x0679E364: 4b815ff8  ldur x11, [x10, #-8]
0x0679E368: 7f0101eb  cmp x11, x1
0x0679E36C: e0000054  b.eq #0x679e388
0x0679E370: 290500f1  subs x9, x9, #1
0x0679E374: 4a410091  add x10, x10, #0x10
0x0679E378: 61ffff54  b.ne #0x679e364
0x0679E37C: e00314aa  mov x0, x20
0x0679E380: e4e12697  bl #0x3156b10
0x0679E384: 05000014  b #0x679e398
0x0679E388: 490140b9  ldr w9, [x10]
0x0679E38C: 2901020b  add w9, w9, w2
0x0679E390: 08d1298b  add x8, x8, w9, sxtw #4
0x0679E394: 00e10491  add x0, x8, #0x138
0x0679E398: 000440f9  ldr x0, [x0, #8]
0x0679E39C: e10315aa  mov x1, x21
0x0679E3A0: fa892797  bl #0x3180b88
0x0679E3A4: 080440f9  ldr x8, [x0, #8]
0x0679E3A8: e10300aa  mov x1, x0
0x0679E3AC: e00314aa  mov x0, x20
0x0679E3B0: 00013fd6  blr x8
0x0679E3B4: f50300aa  mov x21, x0
0x0679E3B8: 600200f9  str x0, [x19]
0x0679E3BC: e00313aa  mov x0, x19
0x0679E3C0: e10315aa  mov x1, x21
0x0679E3C4: 80892797  bl #0x31809c4
0x0679E3C8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0679E3CC: e00315aa  mov x0, x21
0x0679E3D0: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0679E3D4: c0035fd6  ret
0x0679E3D8: 358a2797  bl #0x3180cac

; RVA 0x679E3DC | protected InventorySystem get_InventorySystem() { }
; bytes=224 sha256=4a1858365d2567ace4a4ea20de1d5b165fe0976220b65426019663d1366f127d status=arm64_complete_bound indexed_start=True
0x0679E3DC: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0679E3E0: f44f01a9  stp x20, x19, [sp, #0x10]
0x0679E3E4: 53ac00d0  adrp x19, #0x7d28000
0x0679E3E8: 683a7739  ldrb w8, [x19, #0xdce]
0x0679E3EC: f40300aa  mov x20, x0
0x0679E3F0: c8000037  tbnz w8, #0, #0x679e408
0x0679E3F4: 407b0090  adrp x0, #0x7706000
0x0679E3F8: 00e843f9  ldr x0, [x0, #0x7d0]
0x0679E3FC: 87892797  bl #0x3180a18
0x0679E400: 28008052  movz w8, #0x1
0x0679E404: 683a3739  strb w8, [x19, #0xdce]
0x0679E408: f30314aa  mov x19, x20
0x0679E40C: 758e43f8  ldr x21, [x19, #0x38]!
0x0679E410: d50400b5  cbnz x21, #0x679e4a8
0x0679E414: 941240f9  ldr x20, [x20, #0x20]
0x0679E418: 140500b4  cbz x20, #0x679e4b8
0x0679E41C: 497b0090  adrp x9, #0x7706000
0x0679E420: 29e943f9  ldr x9, [x9, #0x7d0]
0x0679E424: 880240f9  ldr x8, [x20]
0x0679E428: 350140f9  ldr x21, [x9]
0x0679E42C: 095d4279  ldrh w9, [x8, #0x12e]
0x0679E430: a11240f9  ldr x1, [x21, #0x20]
0x0679E434: a2a24079  ldrh w2, [x21, #0x50]
0x0679E438: 290100b4  cbz x9, #0x679e45c
0x0679E43C: 0a5940f9  ldr x10, [x8, #0xb0]
0x0679E440: 4a210091  add x10, x10, #8
0x0679E444: 4b815ff8  ldur x11, [x10, #-8]
0x0679E448: 7f0101eb  cmp x11, x1
0x0679E44C: e0000054  b.eq #0x679e468
0x0679E450: 290500f1  subs x9, x9, #1
0x0679E454: 4a410091  add x10, x10, #0x10
0x0679E458: 61ffff54  b.ne #0x679e444
0x0679E45C: e00314aa  mov x0, x20
0x0679E460: ace12697  bl #0x3156b10
0x0679E464: 05000014  b #0x679e478
0x0679E468: 490140b9  ldr w9, [x10]
0x0679E46C: 2901020b  add w9, w9, w2
0x0679E470: 08d1298b  add x8, x8, w9, sxtw #4
0x0679E474: 00e10491  add x0, x8, #0x138
0x0679E478: 000440f9  ldr x0, [x0, #8]
0x0679E47C: e10315aa  mov x1, x21
0x0679E480: c2892797  bl #0x3180b88
0x0679E484: 080440f9  ldr x8, [x0, #8]
0x0679E488: e10300aa  mov x1, x0
0x0679E48C: e00314aa  mov x0, x20
0x0679E490: 00013fd6  blr x8
0x0679E494: f50300aa  mov x21, x0
0x0679E498: 600200f9  str x0, [x19]
0x0679E49C: e00313aa  mov x0, x19
0x0679E4A0: e10315aa  mov x1, x21
0x0679E4A4: 48892797  bl #0x31809c4
0x0679E4A8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0679E4AC: e00315aa  mov x0, x21
0x0679E4B0: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0679E4B4: c0035fd6  ret
0x0679E4B8: fd892797  bl #0x3180cac

; RVA 0x679D1B8 | protected bool CanPowerBoostItemSpawn(IItemSpawningComponent itemSpawningComponent) { }
; bytes=592 sha256=0dfcb0d1bbcb2a17c86d2aa9027960f8fce3896d02662821f29258b7094a0e1c status=arm64_complete_bound indexed_start=True
0x0679D1B8: fe0f1df8  str x30, [sp, #-0x30]!
0x0679D1BC: f65701a9  stp x22, x21, [sp, #0x10]
0x0679D1C0: f44f02a9  stp x20, x19, [sp, #0x20]
0x0679D1C4: 55ac00f0  adrp x21, #0x7d28000
0x0679D1C8: a83e7739  ldrb w8, [x21, #0xdcf]
0x0679D1CC: f40301aa  mov x20, x1
0x0679D1D0: f30300aa  mov x19, x0
0x0679D1D4: 88010037  tbnz w8, #0, #0x679d204
0x0679D1D8: e07600f0  adrp x0, #0x767c000
0x0679D1DC: 002441f9  ldr x0, [x0, #0x248]
0x0679D1E0: 0e8e2797  bl #0x3180a18
0x0679D1E4: e07600b0  adrp x0, #0x767a000
0x0679D1E8: 004c42f9  ldr x0, [x0, #0x498]
0x0679D1EC: 0b8e2797  bl #0x3180a18
0x0679D1F0: e0760090  adrp x0, #0x7679000
0x0679D1F4: 001044f9  ldr x0, [x0, #0x820]
0x0679D1F8: 088e2797  bl #0x3180a18
0x0679D1FC: 28008052  movz w8, #0x1
0x0679D200: a83e3739  strb w8, [x21, #0xdcf]
0x0679D204: e00313aa  mov x0, x19
0x0679D208: 22ffff97  bl #0x679ce90
0x0679D20C: c00f00b4  cbz x0, #0x679d404
0x0679D210: e1031faa  mov x1, xzr
0x0679D214: 6851e897  bl #0x61b17b4
0x0679D218: 800d0036  tbz w0, #0, #0x679d3c8
0x0679D21C: e00313aa  mov x0, x19
0x0679D220: 1cffff97  bl #0x679ce90
0x0679D224: 000f00b4  cbz x0, #0x679d404
0x0679D228: e1031faa  mov x1, xzr
0x0679D22C: de53e897  bl #0x61b21a4
0x0679D230: c00c0036  tbz w0, #0, #0x679d3c8
0x0679D234: 750a40f9  ldr x21, [x19, #0x10]
0x0679D238: 750e00b4  cbz x21, #0x679d404
0x0679D23C: f67600b0  adrp x22, #0x767a000
0x0679D240: a80240f9  ldr x8, [x21]
0x0679D244: d64e42f9  ldr x22, [x22, #0x498]
0x0679D248: 095d4279  ldrh w9, [x8, #0x12e]
0x0679D24C: c10240f9  ldr x1, [x22]
0x0679D250: 290100b4  cbz x9, #0x679d274
0x0679D254: 0a5940f9  ldr x10, [x8, #0xb0]
0x0679D258: 4a210091  add x10, x10, #8
0x0679D25C: 4b815ff8  ldur x11, [x10, #-8]
0x0679D260: 7f0101eb  cmp x11, x1
0x0679D264: 00010054  b.eq #0x679d284
0x0679D268: 290500f1  subs x9, x9, #1
0x0679D26C: 4a410091  add x10, x10, #0x10
0x0679D270: 61ffff54  b.ne #0x679d25c
0x0679D274: 82028052  movz w2, #0x14
0x0679D278: e00315aa  mov x0, x21
0x0679D27C: 25e62697  bl #0x3156b10
0x0679D280: 05000014  b #0x679d294
0x0679D284: 490140b9  ldr w9, [x10]
0x0679D288: 29510011  add w9, w9, #0x14
0x0679D28C: 08d1298b  add x8, x8, w9, sxtw #4
0x0679D290: 00e10491  add x0, x8, #0x138
0x0679D294: 080840a9  ldp x8, x2, [x0]
0x0679D298: e00315aa  mov x0, x21
0x0679D29C: e10314aa  mov x1, x20
0x0679D2A0: 00013fd6  blr x8
0x0679D2A4: 000b00b4  cbz x0, #0x679d404
0x0679D2A8: ea760090  adrp x10, #0x7679000
0x0679D2AC: 080040f9  ldr x8, [x0]
0x0679D2B0: 730a40f9  ldr x19, [x19, #0x10]
0x0679D2B4: 4a1144f9  ldr x10, [x10, #0x820]
0x0679D2B8: f40300aa  mov x20, x0
0x0679D2BC: 095d4279  ldrh w9, [x8, #0x12e]
0x0679D2C0: 410140f9  ldr x1, [x10]
0x0679D2C4: 290100b4  cbz x9, #0x679d2e8
0x0679D2C8: 0a5940f9  ldr x10, [x8, #0xb0]
0x0679D2CC: 4a210091  add x10, x10, #8
0x0679D2D0: 4b815ff8  ldur x11, [x10, #-8]
0x0679D2D4: 7f0101eb  cmp x11, x1
0x0679D2D8: 00010054  b.eq #0x679d2f8
0x0679D2DC: 290500f1  subs x9, x9, #1
0x0679D2E0: 4a410091  add x10, x10, #0x10
0x0679D2E4: 61ffff54  b.ne #0x679d2d0
0x0679D2E8: e00314aa  mov x0, x20
0x0679D2EC: e2031f2a  mov w2, wzr
0x0679D2F0: 08e62697  bl #0x3156b10
0x0679D2F4: 04000014  b #0x679d304
0x0679D2F8: 490180b9  ldrsw x9, [x10]
0x0679D2FC: 0811098b  add x8, x8, x9, lsl #4
0x0679D300: 00e10491  add x0, x8, #0x138
0x0679D304: 080440a9  ldp x8, x1, [x0]
0x0679D308: e00314aa  mov x0, x20
0x0679D30C: 00013fd6  blr x8
0x0679D310: b30700b4  cbz x19, #0x679d404
0x0679D314: 680240f9  ldr x8, [x19]
0x0679D318: c10240f9  ldr x1, [x22]
0x0679D31C: f40300aa  mov x20, x0
0x0679D320: 095d4279  ldrh w9, [x8, #0x12e]
0x0679D324: 290100b4  cbz x9, #0x679d348
0x0679D328: 0a5940f9  ldr x10, [x8, #0xb0]
0x0679D32C: 4a210091  add x10, x10, #8
0x0679D330: 4b815ff8  ldur x11, [x10, #-8]
0x0679D334: 7f0101eb  cmp x11, x1
0x0679D338: 00010054  b.eq #0x679d358
0x0679D33C: 290500f1  subs x9, x9, #1
0x0679D340: 4a410091  add x10, x10, #0x10
0x0679D344: 61ffff54  b.ne #0x679d330
0x0679D348: 82008052  movz w2, #0x4
0x0679D34C: e00313aa  mov x0, x19
0x0679D350: f0e52697  bl #0x3156b10
0x0679D354: 05000014  b #0x679d368
0x0679D358: 490140b9  ldr w9, [x10]
0x0679D35C: 29110011  add w9, w9, #4
0x0679D360: 08d1298b  add x8, x8, w9, sxtw #4
0x0679D364: 00e10491  add x0, x8, #0x138
0x0679D368: 080840a9  ldp x8, x2, [x0]
0x0679D36C: e00313aa  mov x0, x19
0x0679D370: e10314aa  mov x1, x20
0x0679D374: 00013fd6  blr x8
0x0679D378: 800200b4  cbz x0, #0x679d3c8
0x0679D37C: ea7600f0  adrp x10, #0x767c000
0x0679D380: 080040f9  ldr x8, [x0]
0x0679D384: 4a2541f9  ldr x10, [x10, #0x248]
0x0679D388: f30300aa  mov x19, x0
0x0679D38C: 095d4279  ldrh w9, [x8, #0x12e]
0x0679D390: 410140f9  ldr x1, [x10]
0x0679D394: 290100b4  cbz x9, #0x679d3b8
0x0679D398: 0a5940f9  ldr x10, [x8, #0xb0]
0x0679D39C: 4a210091  add x10, x10, #8
0x0679D3A0: 4b815ff8  ldur x11, [x10, #-8]
0x0679D3A4: 7f0101eb  cmp x11, x1
0x0679D3A8: a0010054  b.eq #0x679d3dc
0x0679D3AC: 290500f1  subs x9, x9, #1
0x0679D3B0: 4a410091  add x10, x10, #0x10
0x0679D3B4: 61ffff54  b.ne #0x679d3a0
0x0679D3B8: 82008052  movz w2, #0x4
0x0679D3BC: e00313aa  mov x0, x19
0x0679D3C0: d4e52697  bl #0x3156b10
0x0679D3C4: 0a000014  b #0x679d3ec
0x0679D3C8: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0679D3CC: f65741a9  ldp x22, x21, [sp, #0x10]
0x0679D3D0: e0031f2a  mov w0, wzr
0x0679D3D4: fe0743f8  ldr x30, [sp], #0x30
0x0679D3D8: c0035fd6  ret
0x0679D3DC: 490140b9  ldr w9, [x10]
0x0679D3E0: 29110011  add w9, w9, #4
0x0679D3E4: 08d1298b  add x8, x8, w9, sxtw #4
0x0679D3E8: 00e10491  add x0, x8, #0x138
0x0679D3EC: 020440a9  ldp x2, x1, [x0]
0x0679D3F0: e00313aa  mov x0, x19
0x0679D3F4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0679D3F8: f65741a9  ldp x22, x21, [sp, #0x10]
0x0679D3FC: fe0743f8  ldr x30, [sp], #0x30
0x0679D400: 40001fd6  br x2
0x0679D404: 2a8e2797  bl #0x3180cac

; RVA 0x679E4C4 | protected void .ctor() { }
; bytes=8 sha256=7ac1938087c2763a2a310a9a268614c54757e194d5b51d95d869937b70330304 status=arm64_complete_bound indexed_start=True
0x0679E4C4: e1031faa  mov x1, xzr
0x0679E4C8: 4df0bc17  b #0x56da5fc

