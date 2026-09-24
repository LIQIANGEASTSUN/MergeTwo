; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25660 Merger.MergeBoard.ViewModel.ImmediateToolsGrantViewModel
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A31330 | public void UpdateToolProgress(IMergeItem tool, PlayerResourceEnum toolResource) { }
; bytes=216 sha256=29598c4f5f859dfd5ef88065222f500e6cd235650dc11d1c674e38e9d9a6f921 status=arm64_complete_bound indexed_start=True
0x06A31330: e80f1dfc  str d8, [sp, #-0x30]!
0x06A31334: fe0700f9  str x30, [sp, #8]
0x06A31338: f65701a9  stp x22, x21, [sp, #0x10]
0x06A3133C: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A31340: d69700b0  adrp x22, #0x7d2a000
0x06A31344: c83a5239  ldrb w8, [x22, #0x48e]
0x06A31348: f303022a  mov w19, w2
0x06A3134C: f50301aa  mov x21, x1
0x06A31350: f40300aa  mov x20, x0
0x06A31354: c8000037  tbnz w8, #0, #0x6a3136c
0x06A31358: a06600b0  adrp x0, #0x7706000
0x06A3135C: 004c44f9  ldr x0, [x0, #0x898]
0x06A31360: ae3d1d97  bl #0x3180a18
0x06A31364: 28008052  movz w8, #0x1
0x06A31368: c83a1239  strb w8, [x22, #0x48e]
0x06A3136C: 813640f9  ldr x1, [x20, #0x68]
0x06A31370: e00315aa  mov x0, x21
0x06A31374: e2031faa  mov x2, xzr
0x06A31378: ae1de197  bl #0x6278a30
0x06A3137C: 943a40f9  ldr x20, [x20, #0x70]
0x06A31380: 340400b4  cbz x20, #0x6a31404
0x06A31384: aa6600b0  adrp x10, #0x7706000
0x06A31388: 880240f9  ldr x8, [x20]
0x06A3138C: 4a4d44f9  ldr x10, [x10, #0x898]
0x06A31390: 081ca04e  mov v8.16b, v0.16b
0x06A31394: 095d4279  ldrh w9, [x8, #0x12e]
0x06A31398: 410140f9  ldr x1, [x10]
0x06A3139C: 290100b4  cbz x9, #0x6a313c0
0x06A313A0: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A313A4: 4a210091  add x10, x10, #8
0x06A313A8: 4b815ff8  ldur x11, [x10, #-8]
0x06A313AC: 7f0101eb  cmp x11, x1
0x06A313B0: 00010054  b.eq #0x6a313d0
0x06A313B4: 290500f1  subs x9, x9, #1
0x06A313B8: 4a410091  add x10, x10, #0x10
0x06A313BC: 61ffff54  b.ne #0x6a313a8
0x06A313C0: 42018052  movz w2, #0xa
0x06A313C4: e00314aa  mov x0, x20
0x06A313C8: d2951c97  bl #0x3156b10
0x06A313CC: 05000014  b #0x6a313e0
0x06A313D0: 490140b9  ldr w9, [x10]
0x06A313D4: 29290011  add w9, w9, #0xa
0x06A313D8: 08d1298b  add x8, x8, w9, sxtw #4
0x06A313DC: 00e10491  add x0, x8, #0x138
0x06A313E0: 030840a9  ldp x3, x2, [x0]
0x06A313E4: e00314aa  mov x0, x20
0x06A313E8: e103132a  mov w1, w19
0x06A313EC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A313F0: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A313F4: fe0740f9  ldr x30, [sp, #8]
0x06A313F8: 001da84e  mov v0.16b, v8.16b
0x06A313FC: e80743fc  ldr d8, [sp], #0x30
0x06A31400: 60001fd6  br x3
0x06A31404: 2a3e1d97  bl #0x3180cac

; RVA 0x6A31408 | public PlayerResourceEnum GetToolResource(string toolUniqueId) { }
; bytes=296 sha256=f077bbd8bb18e7faf5c85e413c1444b7e704e9492ff39f2f19a1cc1db8cacb65 status=arm64_complete_bound indexed_start=True
0x06A31408: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A3140C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A31410: d59700b0  adrp x21, #0x7d2a000
0x06A31414: a83e5239  ldrb w8, [x21, #0x48f]
0x06A31418: f40301aa  mov x20, x1
0x06A3141C: f30300aa  mov x19, x0
0x06A31420: 28010037  tbnz w8, #0, #0x6a31444
0x06A31424: 406200b0  adrp x0, #0x767a000
0x06A31428: 004c42f9  ldr x0, [x0, #0x498]
0x06A3142C: 7b3d1d97  bl #0x3180a18
0x06A31430: e06700d0  adrp x0, #0x772f000
0x06A31434: 00ec41f9  ldr x0, [x0, #0x3d8]
0x06A31438: 783d1d97  bl #0x3180a18
0x06A3143C: 28008052  movz w8, #0x1
0x06A31440: a83e1239  strb w8, [x21, #0x48f]
0x06A31444: 753640f9  ldr x21, [x19, #0x68]
0x06A31448: 350700b4  cbz x21, #0x6a3152c
0x06A3144C: 4a6200b0  adrp x10, #0x767a000
0x06A31450: a80240f9  ldr x8, [x21]
0x06A31454: 4a4d42f9  ldr x10, [x10, #0x498]
0x06A31458: 095d4279  ldrh w9, [x8, #0x12e]
0x06A3145C: 410140f9  ldr x1, [x10]
0x06A31460: 290100b4  cbz x9, #0x6a31484
0x06A31464: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A31468: 4a210091  add x10, x10, #8
0x06A3146C: 4b815ff8  ldur x11, [x10, #-8]
0x06A31470: 7f0101eb  cmp x11, x1
0x06A31474: 00010054  b.eq #0x6a31494
0x06A31478: 290500f1  subs x9, x9, #1
0x06A3147C: 4a410091  add x10, x10, #0x10
0x06A31480: 61ffff54  b.ne #0x6a3146c
0x06A31484: 82008052  movz w2, #0x4
0x06A31488: e00315aa  mov x0, x21
0x06A3148C: a1951c97  bl #0x3156b10
0x06A31490: 05000014  b #0x6a314a4
0x06A31494: 490140b9  ldr w9, [x10]
0x06A31498: 29110011  add w9, w9, #4
0x06A3149C: 08d1298b  add x8, x8, w9, sxtw #4
0x06A314A0: 00e10491  add x0, x8, #0x138
0x06A314A4: 080840a9  ldp x8, x2, [x0]
0x06A314A8: e00315aa  mov x0, x21
0x06A314AC: e10314aa  mov x1, x20
0x06A314B0: 00013fd6  blr x8
0x06A314B4: 743e40f9  ldr x20, [x19, #0x78]
0x06A314B8: b40300b4  cbz x20, #0x6a3152c
0x06A314BC: ea6700d0  adrp x10, #0x772f000
0x06A314C0: 880240f9  ldr x8, [x20]
0x06A314C4: 4aed41f9  ldr x10, [x10, #0x3d8]
0x06A314C8: f30300aa  mov x19, x0
0x06A314CC: 095d4279  ldrh w9, [x8, #0x12e]
0x06A314D0: 410140f9  ldr x1, [x10]
0x06A314D4: 290100b4  cbz x9, #0x6a314f8
0x06A314D8: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A314DC: 4a210091  add x10, x10, #8
0x06A314E0: 4b815ff8  ldur x11, [x10, #-8]
0x06A314E4: 7f0101eb  cmp x11, x1
0x06A314E8: 00010054  b.eq #0x6a31508
0x06A314EC: 290500f1  subs x9, x9, #1
0x06A314F0: 4a410091  add x10, x10, #0x10
0x06A314F4: 61ffff54  b.ne #0x6a314e0
0x06A314F8: e00314aa  mov x0, x20
0x06A314FC: e2031f2a  mov w2, wzr
0x06A31500: 84951c97  bl #0x3156b10
0x06A31504: 04000014  b #0x6a31514
0x06A31508: 490180b9  ldrsw x9, [x10]
0x06A3150C: 0811098b  add x8, x8, x9, lsl #4
0x06A31510: 00e10491  add x0, x8, #0x138
0x06A31514: 030840a9  ldp x3, x2, [x0]
0x06A31518: e00314aa  mov x0, x20
0x06A3151C: e10313aa  mov x1, x19
0x06A31520: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A31524: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A31528: 60001fd6  br x3
0x06A3152C: e03d1d97  bl #0x3180cac

; RVA 0x6A31530 | public float GetToolProgressPercentage(PlayerResourceEnum toolResource) { }
; bytes=172 sha256=20af9446935e6f54e0ed257813867d90b0a83999e90063b698ca576ec56c7ba8 status=arm64_complete_bound indexed_start=True
0x06A31530: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A31534: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A31538: d59700b0  adrp x21, #0x7d2a000
0x06A3153C: a8425239  ldrb w8, [x21, #0x490]
0x06A31540: f303012a  mov w19, w1
0x06A31544: f40300aa  mov x20, x0
0x06A31548: c8000037  tbnz w8, #0, #0x6a31560
0x06A3154C: a06600b0  adrp x0, #0x7706000
0x06A31550: 004c44f9  ldr x0, [x0, #0x898]
0x06A31554: 313d1d97  bl #0x3180a18
0x06A31558: 28008052  movz w8, #0x1
0x06A3155C: a8421239  strb w8, [x21, #0x490]
0x06A31560: 943a40f9  ldr x20, [x20, #0x70]
0x06A31564: b40300b4  cbz x20, #0x6a315d8
0x06A31568: aa6600b0  adrp x10, #0x7706000
0x06A3156C: 880240f9  ldr x8, [x20]
0x06A31570: 4a4d44f9  ldr x10, [x10, #0x898]
0x06A31574: 095d4279  ldrh w9, [x8, #0x12e]
0x06A31578: 410140f9  ldr x1, [x10]
0x06A3157C: 290100b4  cbz x9, #0x6a315a0
0x06A31580: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A31584: 4a210091  add x10, x10, #8
0x06A31588: 4b815ff8  ldur x11, [x10, #-8]
0x06A3158C: 7f0101eb  cmp x11, x1
0x06A31590: 00010054  b.eq #0x6a315b0
0x06A31594: 290500f1  subs x9, x9, #1
0x06A31598: 4a410091  add x10, x10, #0x10
0x06A3159C: 61ffff54  b.ne #0x6a31588
0x06A315A0: 22008052  movz w2, #0x1
0x06A315A4: e00314aa  mov x0, x20
0x06A315A8: 5a951c97  bl #0x3156b10
0x06A315AC: 05000014  b #0x6a315c0
0x06A315B0: 490140b9  ldr w9, [x10]
0x06A315B4: 29050011  add w9, w9, #1
0x06A315B8: 08d1298b  add x8, x8, w9, sxtw #4
0x06A315BC: 00e10491  add x0, x8, #0x138
0x06A315C0: 030840a9  ldp x3, x2, [x0]
0x06A315C4: e00314aa  mov x0, x20
0x06A315C8: e103132a  mov w1, w19
0x06A315CC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A315D0: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A315D4: 60001fd6  br x3
0x06A315D8: b53d1d97  bl #0x3180cac

; RVA 0x6A315DC | public void GrantResource(IRewardType rewardType, int amount, bool delay, ResourceSource resourceSource, bool shouldChangeRealValue) { }
; bytes=224 sha256=666e342d78ab7228a5790bc17fd17e0b86e06874dde6305267cf326de9412ef8 status=arm64_complete_bound indexed_start=True
0x06A315DC: fe67bca9  stp x30, x25, [sp, #-0x40]!
0x06A315E0: f85f01a9  stp x24, x23, [sp, #0x10]
0x06A315E4: f65702a9  stp x22, x21, [sp, #0x20]
0x06A315E8: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A315EC: d99700b0  adrp x25, #0x7d2a000
0x06A315F0: 28475239  ldrb w8, [x25, #0x491]
0x06A315F4: f503052a  mov w21, w5
0x06A315F8: f303042a  mov w19, w4
0x06A315FC: f703032a  mov w23, w3
0x06A31600: f403022a  mov w20, w2
0x06A31604: f60301aa  mov x22, x1
0x06A31608: f80300aa  mov x24, x0
0x06A3160C: c8000037  tbnz w8, #0, #0x6a31624
0x06A31610: 006200d0  adrp x0, #0x7673000
0x06A31614: 004443f9  ldr x0, [x0, #0x688]
0x06A31618: 003d1d97  bl #0x3180a18
0x06A3161C: 28008052  movz w8, #0x1
0x06A31620: 28471239  strb w8, [x25, #0x491]
0x06A31624: 184340f9  ldr x24, [x24, #0x80]
0x06A31628: 980400b4  cbz x24, #0x6a316b8
0x06A3162C: 0a6200d0  adrp x10, #0x7673000
0x06A31630: 080340f9  ldr x8, [x24]
0x06A31634: 4a4543f9  ldr x10, [x10, #0x688]
0x06A31638: 095d4279  ldrh w9, [x8, #0x12e]
0x06A3163C: 410140f9  ldr x1, [x10]
0x06A31640: 290100b4  cbz x9, #0x6a31664
0x06A31644: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A31648: 4a210091  add x10, x10, #8
0x06A3164C: 4b815ff8  ldur x11, [x10, #-8]
0x06A31650: 7f0101eb  cmp x11, x1
0x06A31654: 00010054  b.eq #0x6a31674
0x06A31658: 290500f1  subs x9, x9, #1
0x06A3165C: 4a410091  add x10, x10, #0x10
0x06A31660: 61ffff54  b.ne #0x6a3164c
0x06A31664: 62008052  movz w2, #0x3
0x06A31668: e00318aa  mov x0, x24
0x06A3166C: 29951c97  bl #0x3156b10
0x06A31670: 05000014  b #0x6a31684
0x06A31674: 490140b9  ldr w9, [x10]
0x06A31678: 290d0011  add w9, w9, #3
0x06A3167C: 08d1298b  add x8, x8, w9, sxtw #4
0x06A31680: 00e10491  add x0, x8, #0x138
0x06A31684: 081c40a9  ldp x8, x7, [x0]
0x06A31688: e3020012  and w3, w23, #1
0x06A3168C: a6020012  and w6, w21, #1
0x06A31690: e00318aa  mov x0, x24
0x06A31694: e10316aa  mov x1, x22
0x06A31698: e203142a  mov w2, w20
0x06A3169C: e403132a  mov w4, w19
0x06A316A0: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A316A4: f65742a9  ldp x22, x21, [sp, #0x20]
0x06A316A8: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06A316AC: e5031faa  mov x5, xzr
0x06A316B0: fe67c4a8  ldp x30, x25, [sp], #0x40
0x06A316B4: 00011fd6  br x8
0x06A316B8: 7d3d1d97  bl #0x3180cac

; RVA 0x6A316BC | public void SetToolProgress(PlayerResourceEnum toolResource, float currentProgress) { }
; bytes=188 sha256=93f1d0ad7258c5560d5b56f214571a06816191f1d8207631b7483f05625cdecd status=arm64_complete_bound indexed_start=True
0x06A316BC: e80f1dfc  str d8, [sp, #-0x30]!
0x06A316C0: fe5701a9  stp x30, x21, [sp, #0x10]
0x06A316C4: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A316C8: d59700b0  adrp x21, #0x7d2a000
0x06A316CC: a84a5239  ldrb w8, [x21, #0x492]
0x06A316D0: 081ca04e  mov v8.16b, v0.16b
0x06A316D4: f303012a  mov w19, w1
0x06A316D8: f40300aa  mov x20, x0
0x06A316DC: c8000037  tbnz w8, #0, #0x6a316f4
0x06A316E0: a06600b0  adrp x0, #0x7706000
0x06A316E4: 004c44f9  ldr x0, [x0, #0x898]
0x06A316E8: cc3c1d97  bl #0x3180a18
0x06A316EC: 28008052  movz w8, #0x1
0x06A316F0: a84a1239  strb w8, [x21, #0x492]
0x06A316F4: 943a40f9  ldr x20, [x20, #0x70]
0x06A316F8: f40300b4  cbz x20, #0x6a31774
0x06A316FC: aa6600b0  adrp x10, #0x7706000
0x06A31700: 880240f9  ldr x8, [x20]
0x06A31704: 4a4d44f9  ldr x10, [x10, #0x898]
0x06A31708: 095d4279  ldrh w9, [x8, #0x12e]
0x06A3170C: 410140f9  ldr x1, [x10]
0x06A31710: 290100b4  cbz x9, #0x6a31734
0x06A31714: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A31718: 4a210091  add x10, x10, #8
0x06A3171C: 4b815ff8  ldur x11, [x10, #-8]
0x06A31720: 7f0101eb  cmp x11, x1
0x06A31724: 00010054  b.eq #0x6a31744
0x06A31728: 290500f1  subs x9, x9, #1
0x06A3172C: 4a410091  add x10, x10, #0x10
0x06A31730: 61ffff54  b.ne #0x6a3171c
0x06A31734: 22018052  movz w2, #0x9
0x06A31738: e00314aa  mov x0, x20
0x06A3173C: f5941c97  bl #0x3156b10
0x06A31740: 05000014  b #0x6a31754
0x06A31744: 490140b9  ldr w9, [x10]
0x06A31748: 29250011  add w9, w9, #9
0x06A3174C: 08d1298b  add x8, x8, w9, sxtw #4
0x06A31750: 00e10491  add x0, x8, #0x138
0x06A31754: 030840a9  ldp x3, x2, [x0]
0x06A31758: e00314aa  mov x0, x20
0x06A3175C: e103132a  mov w1, w19
0x06A31760: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A31764: fe5741a9  ldp x30, x21, [sp, #0x10]
0x06A31768: 001da84e  mov v0.16b, v8.16b
0x06A3176C: e80743fc  ldr d8, [sp], #0x30
0x06A31770: 60001fd6  br x3
0x06A31774: 4e3d1d97  bl #0x3180cac

; RVA 0x6A31778 | public void .ctor() { }
; bytes=8 sha256=da7ba93a07c05b3110a1081d975be39dd595418909cffe8df1a6d3d1d6478023 status=arm64_complete_bound indexed_start=True
0x06A31778: e1031faa  mov x1, xzr
0x06A3177C: 2d67fc17  b #0x694b430

