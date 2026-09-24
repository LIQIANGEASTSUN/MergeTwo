; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 7735 Merger.Boosters.Systems.BoosterBoardSystem
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x65BB20C | public void UpdateBoardQueuedBooster(RemoteBoosterData boosterData) { }
; bytes=632 sha256=34f9d374394477a1288153f6428da826c910e6277202fe8889b093f04d688c1e status=arm64_complete_bound indexed_start=True
0x065BB20C: fe0f1cf8  str x30, [sp, #-0x40]!
0x065BB210: f85f01a9  stp x24, x23, [sp, #0x10]
0x065BB214: f65702a9  stp x22, x21, [sp, #0x20]
0x065BB218: f44f03a9  stp x20, x19, [sp, #0x30]
0x065BB21C: 75bb0090  adrp x21, #0x7d27000
0x065BB220: a8aa6339  ldrb w8, [x21, #0x8ea]
0x065BB224: f30301aa  mov x19, x1
0x065BB228: f40300aa  mov x20, x0
0x065BB22C: 48020037  tbnz w8, #0, #0x65bb274
0x065BB230: 008600f0  adrp x0, #0x767e000
0x065BB234: 00d042f9  ldr x0, [x0, #0x5a0]
0x065BB238: f8152f97  bl #0x3180a18
0x065BB23C: 408900f0  adrp x0, #0x76e6000
0x065BB240: 004042f9  ldr x0, [x0, #0x480]
0x065BB244: f5152f97  bl #0x3180a18
0x065BB248: a08400f0  adrp x0, #0x7652000
0x065BB24C: 004046f9  ldr x0, [x0, #0xc80]
0x065BB250: f2152f97  bl #0x3180a18
0x065BB254: e08500d0  adrp x0, #0x7679000
0x065BB258: 00d443f9  ldr x0, [x0, #0x7a8]
0x065BB25C: ef152f97  bl #0x3180a18
0x065BB260: e08500f0  adrp x0, #0x767a000
0x065BB264: 005445f9  ldr x0, [x0, #0xaa8]
0x065BB268: ec152f97  bl #0x3180a18
0x065BB26C: 28008052  movz w8, #0x1
0x065BB270: a8aa2339  strb w8, [x21, #0x8ea]
0x065BB274: 731000b4  cbz x19, #0x65bb480
0x065BB278: 611a40f9  ldr x1, [x19, #0x30]
0x065BB27C: e00314aa  mov x0, x20
0x065BB280: 81000094  bl #0x65bb484
0x065BB284: e00200b4  cbz x0, #0x65bb2e0
0x065BB288: 962a40f9  ldr x22, [x20, #0x50]
0x065BB28C: b60f00b4  cbz x22, #0x65bb480
0x065BB290: f88500f0  adrp x24, #0x767a000
0x065BB294: c80240f9  ldr x8, [x22]
0x065BB298: 185745f9  ldr x24, [x24, #0xaa8]
0x065BB29C: 150840f9  ldr x21, [x0, #0x10]
0x065BB2A0: 772240f9  ldr x23, [x19, #0x40]
0x065BB2A4: 095d4279  ldrh w9, [x8, #0x12e]
0x065BB2A8: 010340f9  ldr x1, [x24]
0x065BB2AC: 290100b4  cbz x9, #0x65bb2d0
0x065BB2B0: 0a5940f9  ldr x10, [x8, #0xb0]
0x065BB2B4: 4a210091  add x10, x10, #8
0x065BB2B8: 4b815ff8  ldur x11, [x10, #-8]
0x065BB2BC: 7f0101eb  cmp x11, x1
0x065BB2C0: a0010054  b.eq #0x65bb2f4
0x065BB2C4: 290500f1  subs x9, x9, #1
0x065BB2C8: 4a410091  add x10, x10, #0x10
0x065BB2CC: 61ffff54  b.ne #0x65bb2b8
0x065BB2D0: e00316aa  mov x0, x22
0x065BB2D4: e2031f2a  mov w2, wzr
0x065BB2D8: 0e6e2e97  bl #0x3156b10
0x065BB2DC: 09000014  b #0x65bb300
0x065BB2E0: f44f43a9  ldp x20, x19, [sp, #0x30]
0x065BB2E4: f65742a9  ldp x22, x21, [sp, #0x20]
0x065BB2E8: f85f41a9  ldp x24, x23, [sp, #0x10]
0x065BB2EC: fe0744f8  ldr x30, [sp], #0x40
0x065BB2F0: c0035fd6  ret
0x065BB2F4: 490180b9  ldrsw x9, [x10]
0x065BB2F8: 0811098b  add x8, x8, x9, lsl #4
0x065BB2FC: 00e10491  add x0, x8, #0x138
0x065BB300: 080840a9  ldp x8, x2, [x0]
0x065BB304: e00316aa  mov x0, x22
0x065BB308: e10317aa  mov x1, x23
0x065BB30C: 00013fd6  blr x8
0x065BB310: 800b00b4  cbz x0, #0x65bb480
0x065BB314: ea8500d0  adrp x10, #0x7679000
0x065BB318: 080040f9  ldr x8, [x0]
0x065BB31C: 4ad543f9  ldr x10, [x10, #0x7a8]
0x065BB320: f60300aa  mov x22, x0
0x065BB324: 095d4279  ldrh w9, [x8, #0x12e]
0x065BB328: 410140f9  ldr x1, [x10]
0x065BB32C: 290100b4  cbz x9, #0x65bb350
0x065BB330: 0a5940f9  ldr x10, [x8, #0xb0]
0x065BB334: 4a210091  add x10, x10, #8
0x065BB338: 4b815ff8  ldur x11, [x10, #-8]
0x065BB33C: 7f0101eb  cmp x11, x1
0x065BB340: 00010054  b.eq #0x65bb360
0x065BB344: 290500f1  subs x9, x9, #1
0x065BB348: 4a410091  add x10, x10, #0x10
0x065BB34C: 61ffff54  b.ne #0x65bb338
0x065BB350: e00316aa  mov x0, x22
0x065BB354: e2031f2a  mov w2, wzr
0x065BB358: ee6d2e97  bl #0x3156b10
0x065BB35C: 04000014  b #0x65bb36c
0x065BB360: 490180b9  ldrsw x9, [x10]
0x065BB364: 0811098b  add x8, x8, x9, lsl #4
0x065BB368: 00e10491  add x0, x8, #0x138
0x065BB36C: 080440a9  ldp x8, x1, [x0]
0x065BB370: e00316aa  mov x0, x22
0x065BB374: 00013fd6  blr x8
0x065BB378: 550800b4  cbz x21, #0x65bb480
0x065BB37C: 488900f0  adrp x8, #0x76e6000
0x065BB380: 084142f9  ldr x8, [x8, #0x480]
0x065BB384: 168600f0  adrp x22, #0x767e000
0x065BB388: e10300aa  mov x1, x0
0x065BB38C: e00315aa  mov x0, x21
0x065BB390: 020140f9  ldr x2, [x8]
0x065BB394: d6d242f9  ldr x22, [x22, #0x5a0]
0x065BB398: f4995997  bl #0x3c21b68
0x065BB39C: c10240f9  ldr x1, [x22]
0x065BB3A0: f60300aa  mov x22, x0
0x065BB3A4: e00315aa  mov x0, x21
0x065BB3A8: 77965997  bl #0x3c20d84
0x065BB3AC: a00600b4  cbz x0, #0x65bb480
0x065BB3B0: f50300aa  mov x21, x0
0x065BB3B4: 28008052  movz w8, #0x1
0x065BB3B8: 00200491  add x0, x0, #0x108
0x065BB3BC: e10316aa  mov x1, x22
0x065BB3C0: a8f20039  strb w8, [x21, #0x3c]
0x065BB3C4: b68600f9  str x22, [x21, #0x108]
0x065BB3C8: 7f152f97  bl #0x31809c4
0x065BB3CC: 683a40b9  ldr w8, [x19, #0x38]
0x065BB3D0: a8aa00b9  str w8, [x21, #0xa8]
0x065BB3D4: 760500b4  cbz x22, #0x65bb480
0x065BB3D8: 602e40fd  ldr d0, [x19, #0x58]
0x065BB3DC: 2886fdb0  adrp x8, #0x1680000
0x065BB3E0: 017943fd  ldr d1, [x8, #0x6f0]
0x065BB3E4: dfc20039  strb wzr, [x22, #0x30]
0x065BB3E8: 00d8615e  scvtf d0, d0
0x065BB3EC: 0018611e  fdiv d0, d0, d1
0x065BB3F0: c01600fd  str d0, [x22, #0x28]
0x065BB3F4: 942a40f9  ldr x20, [x20, #0x50]
0x065BB3F8: 540400b4  cbz x20, #0x65bb480
0x065BB3FC: 880240f9  ldr x8, [x20]
0x065BB400: 010340f9  ldr x1, [x24]
0x065BB404: 095d4279  ldrh w9, [x8, #0x12e]
0x065BB408: 290100b4  cbz x9, #0x65bb42c
0x065BB40C: 0a5940f9  ldr x10, [x8, #0xb0]
0x065BB410: 4a210091  add x10, x10, #8
0x065BB414: 4b815ff8  ldur x11, [x10, #-8]
0x065BB418: 7f0101eb  cmp x11, x1
0x065BB41C: 00010054  b.eq #0x65bb43c
0x065BB420: 290500f1  subs x9, x9, #1
0x065BB424: 4a410091  add x10, x10, #0x10
0x065BB428: 61ffff54  b.ne #0x65bb414
0x065BB42C: 02018052  movz w2, #0x8
0x065BB430: e00314aa  mov x0, x20
0x065BB434: b76d2e97  bl #0x3156b10
0x065BB438: 05000014  b #0x65bb44c
0x065BB43C: 490140b9  ldr w9, [x10]
0x065BB440: 29210011  add w9, w9, #8
0x065BB444: 08d1298b  add x8, x8, w9, sxtw #4
0x065BB448: 00e10491  add x0, x8, #0x138
0x065BB44C: 080440a9  ldp x8, x1, [x0]
0x065BB450: e00314aa  mov x0, x20
0x065BB454: 00013fd6  blr x8
0x065BB458: 400100b4  cbz x0, #0x65bb480
0x065BB45C: a88400f0  adrp x8, #0x7652000
0x065BB460: 084146f9  ldr x8, [x8, #0xc80]
0x065BB464: 611a40f9  ldr x1, [x19, #0x30]
0x065BB468: f44f43a9  ldp x20, x19, [sp, #0x30]
0x065BB46C: f65742a9  ldp x22, x21, [sp, #0x20]
0x065BB470: 020140f9  ldr x2, [x8]
0x065BB474: f85f41a9  ldp x24, x23, [sp, #0x10]
0x065BB478: fe0744f8  ldr x30, [sp], #0x40
0x065BB47C: ea16b417  b #0x52c1024
0x065BB480: 0b162f97  bl #0x3180cac

; RVA 0x65BB630 | public void ApplyActiveBoardBooster(RemoteBoosterData boosterData) { }
; bytes=692 sha256=1439f3270913d228bb83cb93f191d37a55652f6a6ec71b1669b599bf6ca25220 status=arm64_complete_bound indexed_start=True
0x065BB630: ff4301d1  sub sp, sp, #0x50
0x065BB634: fe6701a9  stp x30, x25, [sp, #0x10]
0x065BB638: f85f02a9  stp x24, x23, [sp, #0x20]
0x065BB63C: f65703a9  stp x22, x21, [sp, #0x30]
0x065BB640: f44f04a9  stp x20, x19, [sp, #0x40]
0x065BB644: 75bb0090  adrp x21, #0x7d27000
0x065BB648: a8ae6339  ldrb w8, [x21, #0x8eb]
0x065BB64C: f30301aa  mov x19, x1
0x065BB650: f40300aa  mov x20, x0
0x065BB654: 08030037  tbnz w8, #0, #0x65bb6b4
0x065BB658: 208a00f0  adrp x0, #0x7702000
0x065BB65C: 004c47f9  ldr x0, [x0, #0xe98]
0x065BB660: ee142f97  bl #0x3180a18
0x065BB664: e0880090  adrp x0, #0x76d7000
0x065BB668: 00c442f9  ldr x0, [x0, #0x588]
0x065BB66C: eb142f97  bl #0x3180a18
0x065BB670: 208a00f0  adrp x0, #0x7702000
0x065BB674: 005047f9  ldr x0, [x0, #0xea0]
0x065BB678: e8142f97  bl #0x3180a18
0x065BB67C: e08500f0  adrp x0, #0x767a000
0x065BB680: 00a844f9  ldr x0, [x0, #0x950]
0x065BB684: e5142f97  bl #0x3180a18
0x065BB688: e08500f0  adrp x0, #0x767a000
0x065BB68C: 005445f9  ldr x0, [x0, #0xaa8]
0x065BB690: e2142f97  bl #0x3180a18
0x065BB694: c0850090  adrp x0, #0x7673000
0x065BB698: 006c46f9  ldr x0, [x0, #0xcd8]
0x065BB69C: df142f97  bl #0x3180a18
0x065BB6A0: 208a00f0  adrp x0, #0x7702000
0x065BB6A4: 005447f9  ldr x0, [x0, #0xea8]
0x065BB6A8: dc142f97  bl #0x3180a18
0x065BB6AC: 28008052  movz w8, #0x1
0x065BB6B0: a8ae2339  strb w8, [x21, #0x8eb]
0x065BB6B4: ff330039  strb wzr, [sp, #0xc]
0x065BB6B8: 531100b4  cbz x19, #0x65bb8e0
0x065BB6BC: 952a40f9  ldr x21, [x20, #0x50]
0x065BB6C0: 151100b4  cbz x21, #0x65bb8e0
0x065BB6C4: ea8500f0  adrp x10, #0x767a000
0x065BB6C8: a80240f9  ldr x8, [x21]
0x065BB6CC: 4a5545f9  ldr x10, [x10, #0xaa8]
0x065BB6D0: 762240f9  ldr x22, [x19, #0x40]
0x065BB6D4: 095d4279  ldrh w9, [x8, #0x12e]
0x065BB6D8: 410140f9  ldr x1, [x10]
0x065BB6DC: 290100b4  cbz x9, #0x65bb700
0x065BB6E0: 0a5940f9  ldr x10, [x8, #0xb0]
0x065BB6E4: 4a210091  add x10, x10, #8
0x065BB6E8: 4b815ff8  ldur x11, [x10, #-8]
0x065BB6EC: 7f0101eb  cmp x11, x1
0x065BB6F0: 00010054  b.eq #0x65bb710
0x065BB6F4: 290500f1  subs x9, x9, #1
0x065BB6F8: 4a410091  add x10, x10, #0x10
0x065BB6FC: 61ffff54  b.ne #0x65bb6e8
0x065BB700: e00315aa  mov x0, x21
0x065BB704: e2031f2a  mov w2, wzr
0x065BB708: 026d2e97  bl #0x3156b10
0x065BB70C: 04000014  b #0x65bb71c
0x065BB710: 490180b9  ldrsw x9, [x10]
0x065BB714: 0811098b  add x8, x8, x9, lsl #4
0x065BB718: 00e10491  add x0, x8, #0x138
0x065BB71C: 080840a9  ldp x8, x2, [x0]
0x065BB720: e00315aa  mov x0, x21
0x065BB724: e10316aa  mov x1, x22
0x065BB728: 00013fd6  blr x8
0x065BB72C: 621a40f9  ldr x2, [x19, #0x30]
0x065BB730: f60300aa  mov x22, x0
0x065BB734: e5330091  add x5, sp, #0xc
0x065BB738: e00314aa  mov x0, x20
0x065BB73C: e10316aa  mov x1, x22
0x065BB740: e3031faa  mov x3, xzr
0x065BB744: e4031f2a  mov w4, wzr
0x065BB748: 67000094  bl #0x65bb8e4
0x065BB74C: a00c00b4  cbz x0, #0x65bb8e0
0x065BB750: e88500f0  adrp x8, #0x767a000
0x065BB754: 08a944f9  ldr x8, [x8, #0x950]
0x065BB758: f50300aa  mov x21, x0
0x065BB75C: 010140f9  ldr x1, [x8]
0x065BB760: 89955997  bl #0x3c20d84
0x065BB764: 982e40f9  ldr x24, [x20, #0x58]
0x065BB768: d80b00b4  cbz x24, #0x65bb8e0
0x065BB76C: ca850090  adrp x10, #0x7673000
0x065BB770: 080340f9  ldr x8, [x24]
0x065BB774: 4a6d46f9  ldr x10, [x10, #0xcd8]
0x065BB778: 791240f9  ldr x25, [x19, #0x20]
0x065BB77C: f70300aa  mov x23, x0
0x065BB780: 095d4279  ldrh w9, [x8, #0x12e]
0x065BB784: 410140f9  ldr x1, [x10]
0x065BB788: 290100b4  cbz x9, #0x65bb7ac
0x065BB78C: 0a5940f9  ldr x10, [x8, #0xb0]
0x065BB790: 4a210091  add x10, x10, #8
0x065BB794: 4b815ff8  ldur x11, [x10, #-8]
0x065BB798: 7f0101eb  cmp x11, x1
0x065BB79C: 00010054  b.eq #0x65bb7bc
0x065BB7A0: 290500f1  subs x9, x9, #1
0x065BB7A4: 4a410091  add x10, x10, #0x10
0x065BB7A8: 61ffff54  b.ne #0x65bb794
0x065BB7AC: e00318aa  mov x0, x24
0x065BB7B0: e2031f2a  mov w2, wzr
0x065BB7B4: d76c2e97  bl #0x3156b10
0x065BB7B8: 04000014  b #0x65bb7c8
0x065BB7BC: 490180b9  ldrsw x9, [x10]
0x065BB7C0: 0811098b  add x8, x8, x9, lsl #4
0x065BB7C4: 00e10491  add x0, x8, #0x138
0x065BB7C8: 080440a9  ldp x8, x1, [x0]
0x065BB7CC: e00318aa  mov x0, x24
0x065BB7D0: 00013fd6  blr x8
0x065BB7D4: 770800b4  cbz x23, #0x65bb8e0
0x065BB7D8: e9f99ed2  movz x9, #0xf7cf
0x065BB7DC: 696abcf2  movk x9, #0xe353, lsl #16
0x065BB7E0: a974d3f2  movk x9, #0x9ba5, lsl #32
0x065BB7E4: 280300cb  sub x8, x25, x0
0x065BB7E8: 8918e4f2  movk x9, #0x20c4, lsl #48
0x065BB7EC: 087d499b  smulh x8, x8, x9
0x065BB7F0: 09fd4793  asr x9, x8, #7
0x065BB7F4: 28fd488b  add x8, x9, x8, lsr #63
0x065BB7F8: 0001629e  scvtf d0, x8
0x065BB7FC: e01600fd  str d0, [x23, #0x28]
0x065BB800: 611a40f9  ldr x1, [x19, #0x30]
0x065BB804: e00314aa  mov x0, x20
0x065BB808: 1fffff97  bl #0x65bb484
0x065BB80C: 000200b4  cbz x0, #0x65bb84c
0x065BB810: e8880090  adrp x8, #0x76d7000
0x065BB814: 08c542f9  ldr x8, [x8, #0x588]
0x065BB818: f80300aa  mov x24, x0
0x065BB81C: 010140f9  ldr x1, [x8]
0x065BB820: ffc75897  bl #0x3bed81c
0x065BB824: a00000b4  cbz x0, #0x65bb838
0x065BB828: 020b40f9  ldr x2, [x24, #0x10]
0x065BB82C: 23008052  movz w3, #0x1
0x065BB830: e10316aa  mov x1, x22
0x065BB834: ea000094  bl #0x65bbbdc
0x065BB838: 020b40f9  ldr x2, [x24, #0x10]
0x065BB83C: 23008052  movz w3, #0x1
0x065BB840: e10315aa  mov x1, x21
0x065BB844: 26010094  bl #0x65bbcdc
0x065BB848: 03000014  b #0x65bb854
0x065BB84C: 28008052  movz w8, #0x1
0x065BB850: e8c20039  strb w8, [x23, #0x30]
0x065BB854: e8334039  ldrb w8, [sp, #0xc]
0x065BB858: 88030035  cbnz w8, #0x65bb8c8
0x065BB85C: 288a00f0  adrp x8, #0x7702000
0x065BB860: 085147f9  ldr x8, [x8, #0xea0]
0x065BB864: e00315aa  mov x0, x21
0x065BB868: 010140f9  ldr x1, [x8]
0x065BB86C: 46955997  bl #0x3c20d84
0x065BB870: 288a00f0  adrp x8, #0x7702000
0x065BB874: 941640f9  ldr x20, [x20, #0x28]
0x065BB878: 751a40f9  ldr x21, [x19, #0x30]
0x065BB87C: 762240f9  ldr x22, [x19, #0x40]
0x065BB880: 084d47f9  ldr x8, [x8, #0xe98]
0x065BB884: f70300aa  mov x23, x0
0x065BB888: 080140f9  ldr x8, [x8]
0x065BB88C: e00308aa  mov x0, x8
0x065BB890: 04152f97  bl #0x3180ca0
0x065BB894: e10315aa  mov x1, x21
0x065BB898: e20316aa  mov x2, x22
0x065BB89C: e30317aa  mov x3, x23
0x065BB8A0: e4031faa  mov x4, xzr
0x065BB8A4: f30300aa  mov x19, x0
0x065BB8A8: 06cf0694  bl #0x676f4c0
0x065BB8AC: b40100b4  cbz x20, #0x65bb8e0
0x065BB8B0: 288a00f0  adrp x8, #0x7702000
0x065BB8B4: 085547f9  ldr x8, [x8, #0xea8]
0x065BB8B8: e00314aa  mov x0, x20
0x065BB8BC: e10313aa  mov x1, x19
0x065BB8C0: 020140f9  ldr x2, [x8]
0x065BB8C4: 2aa55f97  bl #0x3da4d6c
0x065BB8C8: f44f44a9  ldp x20, x19, [sp, #0x40]
0x065BB8CC: f65743a9  ldp x22, x21, [sp, #0x30]
0x065BB8D0: f85f42a9  ldp x24, x23, [sp, #0x20]
0x065BB8D4: fe6741a9  ldp x30, x25, [sp, #0x10]
0x065BB8D8: ff430191  add sp, sp, #0x50
0x065BB8DC: c0035fd6  ret
0x065BB8E0: f3142f97  bl #0x3180cac

; RVA 0x65BBDC8 | public void TryActivateEligibleBoardBooster(RemoteBoosterData boosterData) { }
; bytes=484 sha256=185ac331823796b5e92f2c5a378f65a846bedde670667df3517145df35993491 status=arm64_complete_bound indexed_start=True
0x065BBDC8: fe0f1cf8  str x30, [sp, #-0x40]!
0x065BBDCC: f85f01a9  stp x24, x23, [sp, #0x10]
0x065BBDD0: f65702a9  stp x22, x21, [sp, #0x20]
0x065BBDD4: f44f03a9  stp x20, x19, [sp, #0x30]
0x065BBDD8: 75bb0090  adrp x21, #0x7d27000
0x065BBDDC: a8b26339  ldrb w8, [x21, #0x8ec]
0x065BBDE0: f40301aa  mov x20, x1
0x065BBDE4: f30300aa  mov x19, x0
0x065BBDE8: e8010037  tbnz w8, #0, #0x65bbe24
0x065BBDEC: e0840090  adrp x0, #0x7657000
0x065BBDF0: 002446f9  ldr x0, [x0, #0xc48]
0x065BBDF4: 09132f97  bl #0x3180a18
0x065BBDF8: e08500f0  adrp x0, #0x767a000
0x065BBDFC: 005445f9  ldr x0, [x0, #0xaa8]
0x065BBE00: 06132f97  bl #0x3180a18
0x065BBE04: 208600b0  adrp x0, #0x7680000
0x065BBE08: 004844f9  ldr x0, [x0, #0x890]
0x065BBE0C: 03132f97  bl #0x3180a18
0x065BBE10: 208a00f0  adrp x0, #0x7702000
0x065BBE14: 006447f9  ldr x0, [x0, #0xec8]
0x065BBE18: 00132f97  bl #0x3180a18
0x065BBE1C: 28008052  movz w8, #0x1
0x065BBE20: a8b22339  strb w8, [x21, #0x8ec]
0x065BBE24: 340c00b4  cbz x20, #0x65bbfa8
0x065BBE28: 752a40f9  ldr x21, [x19, #0x50]
0x065BBE2C: f50b00b4  cbz x21, #0x65bbfa8
0x065BBE30: f88500f0  adrp x24, #0x767a000
0x065BBE34: a80240f9  ldr x8, [x21]
0x065BBE38: 185745f9  ldr x24, [x24, #0xaa8]
0x065BBE3C: 962240f9  ldr x22, [x20, #0x40]
0x065BBE40: 095d4279  ldrh w9, [x8, #0x12e]
0x065BBE44: 010340f9  ldr x1, [x24]
0x065BBE48: 290100b4  cbz x9, #0x65bbe6c
0x065BBE4C: 0a5940f9  ldr x10, [x8, #0xb0]
0x065BBE50: 4a210091  add x10, x10, #8
0x065BBE54: 4b815ff8  ldur x11, [x10, #-8]
0x065BBE58: 7f0101eb  cmp x11, x1
0x065BBE5C: 00010054  b.eq #0x65bbe7c
0x065BBE60: 290500f1  subs x9, x9, #1
0x065BBE64: 4a410091  add x10, x10, #0x10
0x065BBE68: 61ffff54  b.ne #0x65bbe54
0x065BBE6C: e00315aa  mov x0, x21
0x065BBE70: e2031f2a  mov w2, wzr
0x065BBE74: 276b2e97  bl #0x3156b10
0x065BBE78: 04000014  b #0x65bbe88
0x065BBE7C: 490180b9  ldrsw x9, [x10]
0x065BBE80: 0811098b  add x8, x8, x9, lsl #4
0x065BBE84: 00e10491  add x0, x8, #0x138
0x065BBE88: 080840a9  ldp x8, x2, [x0]
0x065BBE8C: e00315aa  mov x0, x21
0x065BBE90: e10316aa  mov x1, x22
0x065BBE94: 00013fd6  blr x8
0x065BBE98: 811a40f9  ldr x1, [x20, #0x30]
0x065BBE9C: f60300aa  mov x22, x0
0x065BBEA0: e00313aa  mov x0, x19
0x065BBEA4: 78fdff97  bl #0x65bb484
0x065BBEA8: 772a40f9  ldr x23, [x19, #0x50]
0x065BBEAC: f70700b4  cbz x23, #0x65bbfa8
0x065BBEB0: e80240f9  ldr x8, [x23]
0x065BBEB4: 010340f9  ldr x1, [x24]
0x065BBEB8: f50300aa  mov x21, x0
0x065BBEBC: 095d4279  ldrh w9, [x8, #0x12e]
0x065BBEC0: 290100b4  cbz x9, #0x65bbee4
0x065BBEC4: 0a5940f9  ldr x10, [x8, #0xb0]
0x065BBEC8: 4a210091  add x10, x10, #8
0x065BBECC: 4b815ff8  ldur x11, [x10, #-8]
0x065BBED0: 7f0101eb  cmp x11, x1
0x065BBED4: 00010054  b.eq #0x65bbef4
0x065BBED8: 290500f1  subs x9, x9, #1
0x065BBEDC: 4a410091  add x10, x10, #0x10
0x065BBEE0: 61ffff54  b.ne #0x65bbecc
0x065BBEE4: 02018052  movz w2, #0x8
0x065BBEE8: e00317aa  mov x0, x23
0x065BBEEC: 096b2e97  bl #0x3156b10
0x065BBEF0: 05000014  b #0x65bbf04
0x065BBEF4: 490140b9  ldr w9, [x10]
0x065BBEF8: 29210011  add w9, w9, #8
0x065BBEFC: 08d1298b  add x8, x8, w9, sxtw #4
0x065BBF00: 00e10491  add x0, x8, #0x138
0x065BBF04: 080440a9  ldp x8, x1, [x0]
0x065BBF08: e00317aa  mov x0, x23
0x065BBF0C: 00013fd6  blr x8
0x065BBF10: c00400b4  cbz x0, #0x65bbfa8
0x065BBF14: e8840090  adrp x8, #0x7657000
0x065BBF18: 082546f9  ldr x8, [x8, #0xc48]
0x065BBF1C: 811a40f9  ldr x1, [x20, #0x30]
0x065BBF20: 378600b0  adrp x23, #0x7680000
0x065BBF24: 388a00f0  adrp x24, #0x7702000
0x065BBF28: 020140f9  ldr x2, [x8]
0x065BBF2C: f74a44f9  ldr x23, [x23, #0x890]
0x065BBF30: 186747f9  ldr x24, [x24, #0xec8]
0x065BBF34: 8011b497  bl #0x52c0534
0x065BBF38: 1f000072  tst w0, #1
0x065BBF3C: e812989a  csel x8, x23, x24, ne
0x065BBF40: 150300b4  cbz x21, #0x65bbfa0
0x065BBF44: a50a40f9  ldr x5, [x21, #0x10]
0x065BBF48: 130300b4  cbz x19, #0x65bbfa8
0x065BBF4C: 030140f9  ldr x3, [x8]
0x065BBF50: 821a40f9  ldr x2, [x20, #0x30]
0x065BBF54: e00313aa  mov x0, x19
0x065BBF58: e10316aa  mov x1, x22
0x065BBF5C: e4031f2a  mov w4, wzr
0x065BBF60: 13000094  bl #0x65bbfac
0x065BBF64: 550100b4  cbz x21, #0x65bbf8c
0x065BBF68: 200100b4  cbz x0, #0x65bbf8c
0x065BBF6C: a20a40f9  ldr x2, [x21, #0x10]
0x065BBF70: f44f43a9  ldp x20, x19, [sp, #0x30]
0x065BBF74: f65742a9  ldp x22, x21, [sp, #0x20]
0x065BBF78: f85f41a9  ldp x24, x23, [sp, #0x10]
0x065BBF7C: 23008052  movz w3, #0x1
0x065BBF80: e10300aa  mov x1, x0
0x065BBF84: fe0744f8  ldr x30, [sp], #0x40
0x065BBF88: 55ffff17  b #0x65bbcdc
0x065BBF8C: f44f43a9  ldp x20, x19, [sp, #0x30]
0x065BBF90: f65742a9  ldp x22, x21, [sp, #0x20]
0x065BBF94: f85f41a9  ldp x24, x23, [sp, #0x10]
0x065BBF98: fe0744f8  ldr x30, [sp], #0x40
0x065BBF9C: c0035fd6  ret
0x065BBFA0: e5031faa  mov x5, xzr
0x065BBFA4: 53fdffb5  cbnz x19, #0x65bbf4c
0x065BBFA8: 41132f97  bl #0x3180cac

; RVA 0x65BBFAC | private Entity TryActivateBoosterBoardEntity(IBoosterItem booster, string uuId, string reason, ResourceSource source = 0, Entity boardItemEntity) { }
; bytes=572 sha256=23dc84754f55121620615e05ca4e1c875eb2ca0f1a462ecdc8f694a84d485eee status=arm64_complete_bound indexed_start=True
0x065BBFAC: ff4301d1  sub sp, sp, #0x50
0x065BBFB0: fe6701a9  stp x30, x25, [sp, #0x10]
0x065BBFB4: f85f02a9  stp x24, x23, [sp, #0x20]
0x065BBFB8: f65703a9  stp x22, x21, [sp, #0x30]
0x065BBFBC: f44f04a9  stp x20, x19, [sp, #0x40]
0x065BBFC0: 79bb0090  adrp x25, #0x7d27000
0x065BBFC4: 28b76339  ldrb w8, [x25, #0x8ed]
0x065BBFC8: f60305aa  mov x22, x5
0x065BBFCC: f703042a  mov w23, w4
0x065BBFD0: f80303aa  mov x24, x3
0x065BBFD4: f40302aa  mov x20, x2
0x065BBFD8: f50301aa  mov x21, x1
0x065BBFDC: f30300aa  mov x19, x0
0x065BBFE0: 48020037  tbnz w8, #0, #0x65bc028
0x065BBFE4: 208a00f0  adrp x0, #0x7702000
0x065BBFE8: 005047f9  ldr x0, [x0, #0xea0]
0x065BBFEC: 8b122f97  bl #0x3180a18
0x065BBFF0: c0890090  adrp x0, #0x76f3000
0x065BBFF4: 007841f9  ldr x0, [x0, #0x2f0]
0x065BBFF8: 88122f97  bl #0x3180a18
0x065BBFFC: e08500d0  adrp x0, #0x7679000
0x065BC000: 001044f9  ldr x0, [x0, #0x820]
0x065BC004: 85122f97  bl #0x3180a18
0x065BC008: 208a00d0  adrp x0, #0x7702000
0x065BC00C: 006847f9  ldr x0, [x0, #0xed0]
0x065BC010: 82122f97  bl #0x3180a18
0x065BC014: 208a00d0  adrp x0, #0x7702000
0x065BC018: 006c47f9  ldr x0, [x0, #0xed8]
0x065BC01C: 7f122f97  bl #0x3180a18
0x065BC020: 28008052  movz w8, #0x1
0x065BC024: 28b72339  strb w8, [x25, #0x8ed]
0x065BC028: ff330039  strb wzr, [sp, #0xc]
0x065BC02C: 793a40f9  ldr x25, [x19, #0x70]
0x065BC030: b90d00b4  cbz x25, #0x65bc1e4
0x065BC034: aa8900f0  adrp x10, #0x76f3000
0x065BC038: 280340f9  ldr x8, [x25]
0x065BC03C: 4a7941f9  ldr x10, [x10, #0x2f0]
0x065BC040: 095d4279  ldrh w9, [x8, #0x12e]
0x065BC044: 410140f9  ldr x1, [x10]
0x065BC048: 290100b4  cbz x9, #0x65bc06c
0x065BC04C: 0a5940f9  ldr x10, [x8, #0xb0]
0x065BC050: 4a210091  add x10, x10, #8
0x065BC054: 4b815ff8  ldur x11, [x10, #-8]
0x065BC058: 7f0101eb  cmp x11, x1
0x065BC05C: 00010054  b.eq #0x65bc07c
0x065BC060: 290500f1  subs x9, x9, #1
0x065BC064: 4a410091  add x10, x10, #0x10
0x065BC068: 61ffff54  b.ne #0x65bc054
0x065BC06C: e00319aa  mov x0, x25
0x065BC070: e2031f2a  mov w2, wzr
0x065BC074: a76a2e97  bl #0x3156b10
0x065BC078: 04000014  b #0x65bc088
0x065BC07C: 490180b9  ldrsw x9, [x10]
0x065BC080: 0811098b  add x8, x8, x9, lsl #4
0x065BC084: 00e10491  add x0, x8, #0x138
0x065BC088: 080c40a9  ldp x8, x3, [x0]
0x065BC08C: e00319aa  mov x0, x25
0x065BC090: e10315aa  mov x1, x21
0x065BC094: e20314aa  mov x2, x20
0x065BC098: 00013fd6  blr x8
0x065BC09C: 80050036  tbz w0, #0, #0x65bc14c
0x065BC0A0: e5330091  add x5, sp, #0xc
0x065BC0A4: e00313aa  mov x0, x19
0x065BC0A8: e10315aa  mov x1, x21
0x065BC0AC: e20314aa  mov x2, x20
0x065BC0B0: e30318aa  mov x3, x24
0x065BC0B4: e403172a  mov w4, w23
0x065BC0B8: 0bfeff97  bl #0x65bb8e4
0x065BC0BC: 400900b4  cbz x0, #0x65bc1e4
0x065BC0C0: 288a00d0  adrp x8, #0x7702000
0x065BC0C4: 085147f9  ldr x8, [x8, #0xea0]
0x065BC0C8: f70300aa  mov x23, x0
0x065BC0CC: 010140f9  ldr x1, [x8]
0x065BC0D0: 2d935997  bl #0x3c20d84
0x065BC0D4: e10315aa  mov x1, x21
0x065BC0D8: e20316aa  mov x2, x22
0x065BC0DC: e3031f2a  mov w3, wzr
0x065BC0E0: f80300aa  mov x24, x0
0x065BC0E4: befeff97  bl #0x65bbbdc
0x065BC0E8: e00313aa  mov x0, x19
0x065BC0EC: e10315aa  mov x1, x21
0x065BC0F0: e20314aa  mov x2, x20
0x065BC0F4: e30316aa  mov x3, x22
0x065BC0F8: 3c000094  bl #0x65bc1e8
0x065BC0FC: 550700b4  cbz x21, #0x65bc1e4
0x065BC100: ea8500b0  adrp x10, #0x7679000
0x065BC104: a80240f9  ldr x8, [x21]
0x065BC108: 761640f9  ldr x22, [x19, #0x28]
0x065BC10C: 4a1144f9  ldr x10, [x10, #0x820]
0x065BC110: 095d4279  ldrh w9, [x8, #0x12e]
0x065BC114: 410140f9  ldr x1, [x10]
0x065BC118: 290100b4  cbz x9, #0x65bc13c
0x065BC11C: 0a5940f9  ldr x10, [x8, #0xb0]
0x065BC120: 4a210091  add x10, x10, #8
0x065BC124: 4b815ff8  ldur x11, [x10, #-8]
0x065BC128: 7f0101eb  cmp x11, x1
0x065BC12C: 40010054  b.eq #0x65bc154
0x065BC130: 290500f1  subs x9, x9, #1
0x065BC134: 4a410091  add x10, x10, #0x10
0x065BC138: 61ffff54  b.ne #0x65bc124
0x065BC13C: e00315aa  mov x0, x21
0x065BC140: e2031f2a  mov w2, wzr
0x065BC144: 736a2e97  bl #0x3156b10
0x065BC148: 06000014  b #0x65bc160
0x065BC14C: f7031faa  mov x23, xzr
0x065BC150: 1e000014  b #0x65bc1c8
0x065BC154: 490180b9  ldrsw x9, [x10]
0x065BC158: 0811098b  add x8, x8, x9, lsl #4
0x065BC15C: 00e10491  add x0, x8, #0x138
0x065BC160: 080440a9  ldp x8, x1, [x0]
0x065BC164: e00315aa  mov x0, x21
0x065BC168: 00013fd6  blr x8
0x065BC16C: 288a00d0  adrp x8, #0x7702000
0x065BC170: 086947f9  ldr x8, [x8, #0xed0]
0x065BC174: f90300aa  mov x25, x0
0x065BC178: 080140f9  ldr x8, [x8]
0x065BC17C: e00308aa  mov x0, x8
0x065BC180: c8122f97  bl #0x3180ca0
0x065BC184: e10314aa  mov x1, x20
0x065BC188: e20319aa  mov x2, x25
0x065BC18C: e30318aa  mov x3, x24
0x065BC190: e40317aa  mov x4, x23
0x065BC194: e5031faa  mov x5, xzr
0x065BC198: f50300aa  mov x21, x0
0x065BC19C: efcc0694  bl #0x676f558
0x065BC1A0: 360200b4  cbz x22, #0x65bc1e4
0x065BC1A4: 288a00d0  adrp x8, #0x7702000
0x065BC1A8: 086d47f9  ldr x8, [x8, #0xed8]
0x065BC1AC: e00316aa  mov x0, x22
0x065BC1B0: e10315aa  mov x1, x21
0x065BC1B4: 020140f9  ldr x2, [x8]
0x065BC1B8: eda25f97  bl #0x3da4d6c
0x065BC1BC: e00313aa  mov x0, x19
0x065BC1C0: e10317aa  mov x1, x23
0x065BC1C4: a2000094  bl #0x65bc44c
0x065BC1C8: e00317aa  mov x0, x23
0x065BC1CC: f44f44a9  ldp x20, x19, [sp, #0x40]
0x065BC1D0: f65743a9  ldp x22, x21, [sp, #0x30]
0x065BC1D4: f85f42a9  ldp x24, x23, [sp, #0x20]
0x065BC1D8: fe6741a9  ldp x30, x25, [sp, #0x10]
0x065BC1DC: ff430191  add sp, sp, #0x50
0x065BC1E0: c0035fd6  ret
0x065BC1E4: b2122f97  bl #0x3180cac

; RVA 0x65BB8E4 | private Entity CreateBoosterItemEntity(IBoosterItem booster, string uuId, string reason, ResourceSource source, out bool alreadyExisted) { }
; bytes=760 sha256=4c496be9128b965899ecef3d9a20403f010cf765b33797e0c4f7ad8c5532ebb5 status=arm64_complete_bound indexed_start=True
0x065BB8E4: ffc301d1  sub sp, sp, #0x70
0x065BB8E8: fd7b01a9  stp x29, x30, [sp, #0x10]
0x065BB8EC: fc6f02a9  stp x28, x27, [sp, #0x20]
0x065BB8F0: fa6703a9  stp x26, x25, [sp, #0x30]
0x065BB8F4: f85f04a9  stp x24, x23, [sp, #0x40]
0x065BB8F8: f65705a9  stp x22, x21, [sp, #0x50]
0x065BB8FC: f44f06a9  stp x20, x19, [sp, #0x60]
0x065BB900: 75bb0090  adrp x21, #0x7d27000
0x065BB904: 388a00f0  adrp x24, #0x7702000
0x065BB908: a8ba6339  ldrb w8, [x21, #0x8ee]
0x065BB90C: 185b47f9  ldr x24, [x24, #0xeb0]
0x065BB910: f30305aa  mov x19, x5
0x065BB914: fb03042a  mov w27, w4
0x065BB918: f60303aa  mov x22, x3
0x065BB91C: fa0302aa  mov x26, x2
0x065BB920: f70301aa  mov x23, x1
0x065BB924: f40300aa  mov x20, x0
0x065BB928: 08030037  tbnz w8, #0, #0x65bb988
0x065BB92C: 20860090  adrp x0, #0x767f000
0x065BB930: 00dc43f9  ldr x0, [x0, #0x7b8]
0x065BB934: 39142f97  bl #0x3180a18
0x065BB938: 20860090  adrp x0, #0x767f000
0x065BB93C: 00e043f9  ldr x0, [x0, #0x7c0]
0x065BB940: 36142f97  bl #0x3180a18
0x065BB944: 008600f0  adrp x0, #0x767e000
0x065BB948: 00dc42f9  ldr x0, [x0, #0x5b8]
0x065BB94C: 33142f97  bl #0x3180a18
0x065BB950: 20860090  adrp x0, #0x767f000
0x065BB954: 00e443f9  ldr x0, [x0, #0x7c8]
0x065BB958: 30142f97  bl #0x3180a18
0x065BB95C: 008600f0  adrp x0, #0x767e000
0x065BB960: 00e042f9  ldr x0, [x0, #0x5c0]
0x065BB964: 2d142f97  bl #0x3180a18
0x065BB968: 208a00f0  adrp x0, #0x7702000
0x065BB96C: 005c47f9  ldr x0, [x0, #0xeb8]
0x065BB970: 2a142f97  bl #0x3180a18
0x065BB974: 208a00f0  adrp x0, #0x7702000
0x065BB978: 005847f9  ldr x0, [x0, #0xeb0]
0x065BB97C: 27142f97  bl #0x3180a18
0x065BB980: 28008052  movz w8, #0x1
0x065BB984: a8ba2339  strb w8, [x21, #0x8ee]
0x065BB988: 000340f9  ldr x0, [x24]
0x065BB98C: c5142f97  bl #0x3180ca0
0x065BB990: e1031faa  mov x1, xzr
0x065BB994: f90300aa  mov x25, x0
0x065BB998: 197bc497  bl #0x56da5fc
0x065BB99C: f91100b4  cbz x25, #0x65bbbd8
0x065BB9A0: f80319aa  mov x24, x25
0x065BB9A4: 1a0f01f8  str x26, [x24, #0x10]!
0x065BB9A8: e00318aa  mov x0, x24
0x065BB9AC: e1031aaa  mov x1, x26
0x065BB9B0: f70700f9  str x23, [sp, #8]
0x065BB9B4: f70316aa  mov x23, x22
0x065BB9B8: f6031b2a  mov w22, w27
0x065BB9BC: 02142f97  bl #0x31809c4
0x065BB9C0: 9a2640f9  ldr x26, [x20, #0x48]
0x065BB9C4: ba1000b4  cbz x26, #0x65bbbd8
0x065BB9C8: 29860090  adrp x9, #0x767f000
0x065BB9CC: 29e543f9  ldr x9, [x9, #0x7c8]
0x065BB9D0: 480340f9  ldr x8, [x26]
0x065BB9D4: 35860090  adrp x21, #0x767f000
0x065BB9D8: 3d8a00f0  adrp x29, #0x7702000
0x065BB9DC: 3b0140f9  ldr x27, [x9]
0x065BB9E0: 3c860090  adrp x28, #0x767f000
0x065BB9E4: 095d4279  ldrh w9, [x8, #0x12e]
0x065BB9E8: 611340f9  ldr x1, [x27, #0x20]
0x065BB9EC: 62a34079  ldrh w2, [x27, #0x50]
0x065BB9F0: b5e243f9  ldr x21, [x21, #0x7c0]
0x065BB9F4: bd5f47f9  ldr x29, [x29, #0xeb8]
0x065BB9F8: 9cdf43f9  ldr x28, [x28, #0x7b8]
0x065BB9FC: 290100b4  cbz x9, #0x65bba20
0x065BBA00: 0a5940f9  ldr x10, [x8, #0xb0]
0x065BBA04: 4a210091  add x10, x10, #8
0x065BBA08: 4b815ff8  ldur x11, [x10, #-8]
0x065BBA0C: 7f0101eb  cmp x11, x1
0x065BBA10: e0000054  b.eq #0x65bba2c
0x065BBA14: 290500f1  subs x9, x9, #1
0x065BBA18: 4a410091  add x10, x10, #0x10
0x065BBA1C: 61ffff54  b.ne #0x65bba08
0x065BBA20: e0031aaa  mov x0, x26
0x065BBA24: 3b6c2e97  bl #0x3156b10
0x065BBA28: 05000014  b #0x65bba3c
0x065BBA2C: 490140b9  ldr w9, [x10]
0x065BBA30: 2901020b  add w9, w9, w2
0x065BBA34: 08d1298b  add x8, x8, w9, sxtw #4
0x065BBA38: 00e10491  add x0, x8, #0x138
0x065BBA3C: 000440f9  ldr x0, [x0, #8]
0x065BBA40: e1031baa  mov x1, x27
0x065BBA44: 51142f97  bl #0x3180b88
0x065BBA48: 080440f9  ldr x8, [x0, #8]
0x065BBA4C: e10300aa  mov x1, x0
0x065BBA50: e0031aaa  mov x0, x26
0x065BBA54: 00013fd6  blr x8
0x065BBA58: a80240f9  ldr x8, [x21]
0x065BBA5C: fa0300aa  mov x26, x0
0x065BBA60: e00308aa  mov x0, x8
0x065BBA64: 8f142f97  bl #0x3180ca0
0x065BBA68: a20340f9  ldr x2, [x29]
0x065BBA6C: e10319aa  mov x1, x25
0x065BBA70: e3031faa  mov x3, xzr
0x065BBA74: fb0300aa  mov x27, x0
0x065BBA78: 5169b297  bl #0x5255fbc
0x065BBA7C: 820340f9  ldr x2, [x28]
0x065BBA80: e0031aaa  mov x0, x26
0x065BBA84: e1031baa  mov x1, x27
0x065BBA88: aa255a97  bl #0x3c45130
0x065BBA8C: a00000b4  cbz x0, #0x65bbaa0
0x065BBA90: 28008052  movz w8, #0x1
0x065BBA94: 68020039  strb w8, [x19]
0x065BBA98: 180840f9  ldr x24, [x0, #0x10]
0x065BBA9C: 46000014  b #0x65bbbb4
0x065BBAA0: 992240f9  ldr x25, [x20, #0x40]
0x065BBAA4: b90900b4  cbz x25, #0x65bbbd8
0x065BBAA8: 0a8600f0  adrp x10, #0x767e000
0x065BBAAC: 280340f9  ldr x8, [x25]
0x065BBAB0: 180340f9  ldr x24, [x24]
0x065BBAB4: 4add42f9  ldr x10, [x10, #0x5b8]
0x065BBAB8: fa0313aa  mov x26, x19
0x065BBABC: 095d4279  ldrh w9, [x8, #0x12e]
0x065BBAC0: f30740f9  ldr x19, [sp, #8]
0x065BBAC4: 410140f9  ldr x1, [x10]
0x065BBAC8: f503162a  mov w21, w22
0x065BBACC: 290100b4  cbz x9, #0x65bbaf0
0x065BBAD0: 0a5940f9  ldr x10, [x8, #0xb0]
0x065BBAD4: 4a210091  add x10, x10, #8
0x065BBAD8: 4b815ff8  ldur x11, [x10, #-8]
0x065BBADC: 7f0101eb  cmp x11, x1
0x065BBAE0: 00010054  b.eq #0x65bbb00
0x065BBAE4: 290500f1  subs x9, x9, #1
0x065BBAE8: 4a410091  add x10, x10, #0x10
0x065BBAEC: 61ffff54  b.ne #0x65bbad8
0x065BBAF0: e2008052  movz w2, #0x7
0x065BBAF4: e00319aa  mov x0, x25
0x065BBAF8: 066c2e97  bl #0x3156b10
0x065BBAFC: 05000014  b #0x65bbb10
0x065BBB00: 490140b9  ldr w9, [x10]
0x065BBB04: 291d0011  add w9, w9, #7
0x065BBB08: 08d1298b  add x8, x8, w9, sxtw #4
0x065BBB0C: 00e10491  add x0, x8, #0x138
0x065BBB10: 080c40a9  ldp x8, x3, [x0]
0x065BBB14: e00319aa  mov x0, x25
0x065BBB18: e10313aa  mov x1, x19
0x065BBB1C: e20318aa  mov x2, x24
0x065BBB20: 00013fd6  blr x8
0x065BBB24: f80300aa  mov x24, x0
0x065BBB28: e00314aa  mov x0, x20
0x065BBB2C: e10313aa  mov x1, x19
0x065BBB30: e20317aa  mov x2, x23
0x065BBB34: e303152a  mov w3, w21
0x065BBB38: e40318aa  mov x4, x24
0x065BBB3C: 96020094  bl #0x65bc594
0x065BBB40: 942640f9  ldr x20, [x20, #0x48]
0x065BBB44: b40400b4  cbz x20, #0x65bbbd8
0x065BBB48: 0a8600f0  adrp x10, #0x767e000
0x065BBB4C: 880240f9  ldr x8, [x20]
0x065BBB50: 4ae142f9  ldr x10, [x10, #0x5c0]
0x065BBB54: 095d4279  ldrh w9, [x8, #0x12e]
0x065BBB58: 410140f9  ldr x1, [x10]
0x065BBB5C: 290100b4  cbz x9, #0x65bbb80
0x065BBB60: 0a5940f9  ldr x10, [x8, #0xb0]
0x065BBB64: 4a210091  add x10, x10, #8
0x065BBB68: 4b815ff8  ldur x11, [x10, #-8]
0x065BBB6C: 7f0101eb  cmp x11, x1
0x065BBB70: 00010054  b.eq #0x65bbb90
0x065BBB74: 290500f1  subs x9, x9, #1
0x065BBB78: 4a410091  add x10, x10, #0x10
0x065BBB7C: 61ffff54  b.ne #0x65bbb68
0x065BBB80: a2008052  movz w2, #0x5
0x065BBB84: e00314aa  mov x0, x20
0x065BBB88: e26b2e97  bl #0x3156b10
0x065BBB8C: 05000014  b #0x65bbba0
0x065BBB90: 490140b9  ldr w9, [x10]
0x065BBB94: 29150011  add w9, w9, #5
0x065BBB98: 08d1298b  add x8, x8, w9, sxtw #4
0x065BBB9C: 00e10491  add x0, x8, #0x138
0x065BBBA0: 080840a9  ldp x8, x2, [x0]
0x065BBBA4: e00314aa  mov x0, x20
0x065BBBA8: e10318aa  mov x1, x24
0x065BBBAC: 00013fd6  blr x8
0x065BBBB0: 5f030039  strb wzr, [x26]
0x065BBBB4: e00318aa  mov x0, x24
0x065BBBB8: f44f46a9  ldp x20, x19, [sp, #0x60]
0x065BBBBC: f65745a9  ldp x22, x21, [sp, #0x50]
0x065BBBC0: f85f44a9  ldp x24, x23, [sp, #0x40]
0x065BBBC4: fa6743a9  ldp x26, x25, [sp, #0x30]
0x065BBBC8: fc6f42a9  ldp x28, x27, [sp, #0x20]
0x065BBBCC: fd7b41a9  ldp x29, x30, [sp, #0x10]
0x065BBBD0: ffc30191  add sp, sp, #0x70
0x065BBBD4: c0035fd6  ret
0x065BBBD8: 35142f97  bl #0x3180cac

; RVA 0x65BBBDC | private void SetupActiveBoosterVisuals(IBoosterItem booster, Entity boardItemEntity, bool activateSilently = False) { }
; bytes=256 sha256=2bd9c77f18d54e31cedea7b93d1a959b128f3cc9e89834c7292f532fc660426c status=arm64_complete_bound indexed_start=True
0x065BBBDC: fe0f1df8  str x30, [sp, #-0x30]!
0x065BBBE0: f65701a9  stp x22, x21, [sp, #0x10]
0x065BBBE4: f44f02a9  stp x20, x19, [sp, #0x20]
0x065BBBE8: 76bb0090  adrp x22, #0x7d27000
0x065BBBEC: c8be6339  ldrb w8, [x22, #0x8ef]
0x065BBBF0: f303032a  mov w19, w3
0x065BBBF4: f50302aa  mov x21, x2
0x065BBBF8: f40301aa  mov x20, x1
0x065BBBFC: 28010037  tbnz w8, #0, #0x65bbc20
0x065BBC00: 008600f0  adrp x0, #0x767e000
0x065BBC04: 00d042f9  ldr x0, [x0, #0x5a0]
0x065BBC08: 84132f97  bl #0x3180a18
0x065BBC0C: e08500d0  adrp x0, #0x7679000
0x065BBC10: 00d443f9  ldr x0, [x0, #0x7a8]
0x065BBC14: 81132f97  bl #0x3180a18
0x065BBC18: 28008052  movz w8, #0x1
0x065BBC1C: c8be2339  strb w8, [x22, #0x8ef]
0x065BBC20: 550500b4  cbz x21, #0x65bbcc8
0x065BBC24: 088600f0  adrp x8, #0x767e000
0x065BBC28: 08d142f9  ldr x8, [x8, #0x5a0]
0x065BBC2C: e00315aa  mov x0, x21
0x065BBC30: 010140f9  ldr x1, [x8]
0x065BBC34: 54945997  bl #0x3c20d84
0x065BBC38: 800400b4  cbz x0, #0x65bbcc8
0x065BBC3C: f40400b4  cbz x20, #0x65bbcd8
0x065BBC40: ea8500d0  adrp x10, #0x7679000
0x065BBC44: 880240f9  ldr x8, [x20]
0x065BBC48: 4ad543f9  ldr x10, [x10, #0x7a8]
0x065BBC4C: f50300aa  mov x21, x0
0x065BBC50: 095d4279  ldrh w9, [x8, #0x12e]
0x065BBC54: 410140f9  ldr x1, [x10]
0x065BBC58: 290100b4  cbz x9, #0x65bbc7c
0x065BBC5C: 0a5940f9  ldr x10, [x8, #0xb0]
0x065BBC60: 4a210091  add x10, x10, #8
0x065BBC64: 4b815ff8  ldur x11, [x10, #-8]
0x065BBC68: 7f0101eb  cmp x11, x1
0x065BBC6C: 00010054  b.eq #0x65bbc8c
0x065BBC70: 290500f1  subs x9, x9, #1
0x065BBC74: 4a410091  add x10, x10, #0x10
0x065BBC78: 61ffff54  b.ne #0x65bbc64
0x065BBC7C: 22008052  movz w2, #0x1
0x065BBC80: e00314aa  mov x0, x20
0x065BBC84: a36b2e97  bl #0x3156b10
0x065BBC88: 05000014  b #0x65bbc9c
0x065BBC8C: 490140b9  ldr w9, [x10]
0x065BBC90: 29050011  add w9, w9, #1
0x065BBC94: 08d1298b  add x8, x8, w9, sxtw #4
0x065BBC98: 00e10491  add x0, x8, #0x138
0x065BBC9C: 080440a9  ldp x8, x1, [x0]
0x065BBCA0: e00314aa  mov x0, x20
0x065BBCA4: 00013fd6  blr x8
0x065BBCA8: 800100b4  cbz x0, #0x65bbcd8
0x065BBCAC: 081440b9  ldr w8, [x0, #0x14]
0x065BBCB0: a8aa00b9  str w8, [x21, #0xa8]
0x065BBCB4: 28008052  movz w8, #0x1
0x065BBCB8: 73000036  tbz w19, #0, #0x65bbcc4
0x065BBCBC: a8060239  strb w8, [x21, #0x81]
0x065BBCC0: 02000014  b #0x65bbcc8
0x065BBCC4: a8020239  strb w8, [x21, #0x80]
0x065BBCC8: f44f42a9  ldp x20, x19, [sp, #0x20]
0x065BBCCC: f65741a9  ldp x22, x21, [sp, #0x10]
0x065BBCD0: fe0743f8  ldr x30, [sp], #0x30
0x065BBCD4: c0035fd6  ret
0x065BBCD8: f5132f97  bl #0x3180cac

; RVA 0x65BC1E8 | public void TryLinkBoosterWithMergeItem(IBoosterItem booster, string boosterUuId, Entity boardItemEntity) { }
; bytes=612 sha256=f7751a2fcf8b22d74e640df9808e39d9638962c5dd6853cbb106eec84b357547 status=arm64_complete_bound indexed_start=True
0x065BC1E8: fe0f1bf8  str x30, [sp, #-0x50]!
0x065BC1EC: fa6701a9  stp x26, x25, [sp, #0x10]
0x065BC1F0: f85f02a9  stp x24, x23, [sp, #0x20]
0x065BC1F4: f65703a9  stp x22, x21, [sp, #0x30]
0x065BC1F8: f44f04a9  stp x20, x19, [sp, #0x40]
0x065BC1FC: 55bb00f0  adrp x21, #0x7d27000
0x065BC200: 388a00d0  adrp x24, #0x7702000
0x065BC204: a8c26339  ldrb w8, [x21, #0x8f0]
0x065BC208: 187347f9  ldr x24, [x24, #0xee0]
0x065BC20C: f30303aa  mov x19, x3
0x065BC210: f70302aa  mov x23, x2
0x065BC214: f60301aa  mov x22, x1
0x065BC218: f40300aa  mov x20, x0
0x065BC21C: 08030037  tbnz w8, #0, #0x65bc27c
0x065BC220: e08500d0  adrp x0, #0x767a000
0x065BC224: 009c44f9  ldr x0, [x0, #0x938]
0x065BC228: fc112f97  bl #0x3180a18
0x065BC22C: 008600f0  adrp x0, #0x767f000
0x065BC230: 00dc43f9  ldr x0, [x0, #0x7b8]
0x065BC234: f9112f97  bl #0x3180a18
0x065BC238: 008600f0  adrp x0, #0x767f000
0x065BC23C: 00e043f9  ldr x0, [x0, #0x7c0]
0x065BC240: f6112f97  bl #0x3180a18
0x065BC244: 008600f0  adrp x0, #0x767f000
0x065BC248: 00e443f9  ldr x0, [x0, #0x7c8]
0x065BC24C: f3112f97  bl #0x3180a18
0x065BC250: e08500b0  adrp x0, #0x7679000
0x065BC254: 001044f9  ldr x0, [x0, #0x820]
0x065BC258: f0112f97  bl #0x3180a18
0x065BC25C: 208a00d0  adrp x0, #0x7702000
0x065BC260: 007447f9  ldr x0, [x0, #0xee8]
0x065BC264: ed112f97  bl #0x3180a18
0x065BC268: 208a00d0  adrp x0, #0x7702000
0x065BC26C: 007047f9  ldr x0, [x0, #0xee0]
0x065BC270: ea112f97  bl #0x3180a18
0x065BC274: 28008052  movz w8, #0x1
0x065BC278: a8c22339  strb w8, [x21, #0x8f0]
0x065BC27C: 000340f9  ldr x0, [x24]
0x065BC280: 88122f97  bl #0x3180ca0
0x065BC284: e1031faa  mov x1, xzr
0x065BC288: f50300aa  mov x21, x0
0x065BC28C: dc78c497  bl #0x56da5fc
0x065BC290: d50d00b4  cbz x21, #0x65bc448
0x065BC294: f80315aa  mov x24, x21
0x065BC298: 170f01f8  str x23, [x24, #0x10]!
0x065BC29C: e00318aa  mov x0, x24
0x065BC2A0: e10317aa  mov x1, x23
0x065BC2A4: c8112f97  bl #0x31809c4
0x065BC2A8: 130500b4  cbz x19, #0x65bc348
0x065BC2AC: e88500d0  adrp x8, #0x767a000
0x065BC2B0: 089d44f9  ldr x8, [x8, #0x938]
0x065BC2B4: e00313aa  mov x0, x19
0x065BC2B8: 010140f9  ldr x1, [x8]
0x065BC2BC: b2925997  bl #0x3c20d84
0x065BC2C0: 400c00b4  cbz x0, #0x65bc448
0x065BC2C4: 010340f9  ldr x1, [x24]
0x065BC2C8: f70300aa  mov x23, x0
0x065BC2CC: 010c02f8  str x1, [x0, #0x20]!
0x065BC2D0: bd112f97  bl #0x31809c4
0x065BC2D4: b60b00b4  cbz x22, #0x65bc448
0x065BC2D8: ea8500b0  adrp x10, #0x7679000
0x065BC2DC: c80240f9  ldr x8, [x22]
0x065BC2E0: 4a1144f9  ldr x10, [x10, #0x820]
0x065BC2E4: 095d4279  ldrh w9, [x8, #0x12e]
0x065BC2E8: 410140f9  ldr x1, [x10]
0x065BC2EC: 290100b4  cbz x9, #0x65bc310
0x065BC2F0: 0a5940f9  ldr x10, [x8, #0xb0]
0x065BC2F4: 4a210091  add x10, x10, #8
0x065BC2F8: 4b815ff8  ldur x11, [x10, #-8]
0x065BC2FC: 7f0101eb  cmp x11, x1
0x065BC300: 00010054  b.eq #0x65bc320
0x065BC304: 290500f1  subs x9, x9, #1
0x065BC308: 4a410091  add x10, x10, #0x10
0x065BC30C: 61ffff54  b.ne #0x65bc2f8
0x065BC310: e00316aa  mov x0, x22
0x065BC314: e2031f2a  mov w2, wzr
0x065BC318: fe692e97  bl #0x3156b10
0x065BC31C: 04000014  b #0x65bc32c
0x065BC320: 490180b9  ldrsw x9, [x10]
0x065BC324: 0811098b  add x8, x8, x9, lsl #4
0x065BC328: 00e10491  add x0, x8, #0x138
0x065BC32C: 080440a9  ldp x8, x1, [x0]
0x065BC330: e00316aa  mov x0, x22
0x065BC334: 00013fd6  blr x8
0x065BC338: e08e02f8  str x0, [x23, #0x28]!
0x065BC33C: e10300aa  mov x1, x0
0x065BC340: e00317aa  mov x0, x23
0x065BC344: a0112f97  bl #0x31809c4
0x065BC348: 962640f9  ldr x22, [x20, #0x48]
0x065BC34C: f60700b4  cbz x22, #0x65bc448
0x065BC350: 098600f0  adrp x9, #0x767f000
0x065BC354: 29e543f9  ldr x9, [x9, #0x7c8]
0x065BC358: c80240f9  ldr x8, [x22]
0x065BC35C: 1a8600f0  adrp x26, #0x767f000
0x065BC360: 398a00d0  adrp x25, #0x7702000
0x065BC364: 370140f9  ldr x23, [x9]
0x065BC368: 188600f0  adrp x24, #0x767f000
0x065BC36C: 095d4279  ldrh w9, [x8, #0x12e]
0x065BC370: e11240f9  ldr x1, [x23, #0x20]
0x065BC374: e2a24079  ldrh w2, [x23, #0x50]
0x065BC378: 5ae343f9  ldr x26, [x26, #0x7c0]
0x065BC37C: 397747f9  ldr x25, [x25, #0xee8]
0x065BC380: 18df43f9  ldr x24, [x24, #0x7b8]
0x065BC384: 290100b4  cbz x9, #0x65bc3a8
0x065BC388: 0a5940f9  ldr x10, [x8, #0xb0]
0x065BC38C: 4a210091  add x10, x10, #8
0x065BC390: 4b815ff8  ldur x11, [x10, #-8]
0x065BC394: 7f0101eb  cmp x11, x1
0x065BC398: e0000054  b.eq #0x65bc3b4
0x065BC39C: 290500f1  subs x9, x9, #1
0x065BC3A0: 4a410091  add x10, x10, #0x10
0x065BC3A4: 61ffff54  b.ne #0x65bc390
0x065BC3A8: e00316aa  mov x0, x22
0x065BC3AC: d9692e97  bl #0x3156b10
0x065BC3B0: 05000014  b #0x65bc3c4
0x065BC3B4: 490140b9  ldr w9, [x10]
0x065BC3B8: 2901020b  add w9, w9, w2
0x065BC3BC: 08d1298b  add x8, x8, w9, sxtw #4
0x065BC3C0: 00e10491  add x0, x8, #0x138
0x065BC3C4: 000440f9  ldr x0, [x0, #8]
0x065BC3C8: e10317aa  mov x1, x23
0x065BC3CC: ef112f97  bl #0x3180b88
0x065BC3D0: 080440f9  ldr x8, [x0, #8]
0x065BC3D4: e10300aa  mov x1, x0
0x065BC3D8: e00316aa  mov x0, x22
0x065BC3DC: 00013fd6  blr x8
0x065BC3E0: 480340f9  ldr x8, [x26]
0x065BC3E4: f60300aa  mov x22, x0
0x065BC3E8: e00308aa  mov x0, x8
0x065BC3EC: 2d122f97  bl #0x3180ca0
0x065BC3F0: 220340f9  ldr x2, [x25]
0x065BC3F4: e10315aa  mov x1, x21
0x065BC3F8: e3031faa  mov x3, xzr
0x065BC3FC: f70300aa  mov x23, x0
0x065BC400: ef66b297  bl #0x5255fbc
0x065BC404: 020340f9  ldr x2, [x24]
0x065BC408: e00316aa  mov x0, x22
0x065BC40C: e10317aa  mov x1, x23
0x065BC410: 48235a97  bl #0x3c45130
0x065BC414: 600100b4  cbz x0, #0x65bc440
0x065BC418: 010840f9  ldr x1, [x0, #0x10]
0x065BC41C: 740100b4  cbz x20, #0x65bc448
0x065BC420: e20313aa  mov x2, x19
0x065BC424: f44f44a9  ldp x20, x19, [sp, #0x40]
0x065BC428: f65743a9  ldp x22, x21, [sp, #0x30]
0x065BC42C: f85f42a9  ldp x24, x23, [sp, #0x20]
0x065BC430: fa6741a9  ldp x26, x25, [sp, #0x10]
0x065BC434: e3031f2a  mov w3, wzr
0x065BC438: fe0745f8  ldr x30, [sp], #0x50
0x065BC43C: 28feff17  b #0x65bbcdc
0x065BC440: e1031faa  mov x1, xzr
0x065BC444: f4feffb5  cbnz x20, #0x65bc420
0x065BC448: 19122f97  bl #0x3180cac

; RVA 0x65BBCDC | public void SyncBoosterAndMergeTimer(Entity activatedBooster, Entity boardItemEntity, bool activateTimer = False) { }
; bytes=228 sha256=dc88912c0173e51be5b7147fe93fe539c8f112fb958cda27781b623cd558b74f status=arm64_complete_bound indexed_start=True
0x065BBCDC: fe0f1df8  str x30, [sp, #-0x30]!
0x065BBCE0: f65701a9  stp x22, x21, [sp, #0x10]
0x065BBCE4: f44f02a9  stp x20, x19, [sp, #0x20]
0x065BBCE8: 76bb0090  adrp x22, #0x7d27000
0x065BBCEC: c8c66339  ldrb w8, [x22, #0x8f1]
0x065BBCF0: f403032a  mov w20, w3
0x065BBCF4: f30302aa  mov x19, x2
0x065BBCF8: f50301aa  mov x21, x1
0x065BBCFC: 88010037  tbnz w8, #0, #0x65bbd2c
0x065BBD00: e08500f0  adrp x0, #0x767a000
0x065BBD04: 00a844f9  ldr x0, [x0, #0x950]
0x065BBD08: 44132f97  bl #0x3180a18
0x065BBD0C: 008600f0  adrp x0, #0x767e000
0x065BBD10: 00d042f9  ldr x0, [x0, #0x5a0]
0x065BBD14: 41132f97  bl #0x3180a18
0x065BBD18: 208a00f0  adrp x0, #0x7702000
0x065BBD1C: 006047f9  ldr x0, [x0, #0xec0]
0x065BBD20: 3e132f97  bl #0x3180a18
0x065BBD24: 28008052  movz w8, #0x1
0x065BBD28: c8c62339  strb w8, [x22, #0x8f1]
0x065BBD2C: 150400b4  cbz x21, #0x65bbdac
0x065BBD30: e88500f0  adrp x8, #0x767a000
0x065BBD34: 08a944f9  ldr x8, [x8, #0x950]
0x065BBD38: e00315aa  mov x0, x21
0x065BBD3C: 010140f9  ldr x1, [x8]
0x065BBD40: 11945997  bl #0x3c20d84
0x065BBD44: c00300b4  cbz x0, #0x65bbdbc
0x065BBD48: f50300aa  mov x21, x0
0x065BBD4C: 88020012  and w8, w20, #1
0x065BBD50: 08c00039  strb w8, [x0, #0x30]
0x065BBD54: d30200b4  cbz x19, #0x65bbdac
0x065BBD58: 288a00f0  adrp x8, #0x7702000
0x065BBD5C: 086147f9  ldr x8, [x8, #0xec0]
0x065BBD60: e00313aa  mov x0, x19
0x065BBD64: 010140f9  ldr x1, [x8]
0x065BBD68: 66965997  bl #0x3c21700
0x065BBD6C: 088600f0  adrp x8, #0x767e000
0x065BBD70: 08d142f9  ldr x8, [x8, #0x5a0]
0x065BBD74: e00313aa  mov x0, x19
0x065BBD78: 010140f9  ldr x1, [x8]
0x065BBD7C: 02945997  bl #0x3c20d84
0x065BBD80: 600100b4  cbz x0, #0x65bbdac
0x065BBD84: 158400f9  str x21, [x0, #0x108]
0x065BBD88: e10315aa  mov x1, x21
0x065BBD8C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x065BBD90: f65741a9  ldp x22, x21, [sp, #0x10]
0x065BBD94: 29008052  movz w9, #0x1
0x065BBD98: 08200491  add x8, x0, #0x108
0x065BBD9C: 09f00039  strb w9, [x0, #0x3c]
0x065BBDA0: e00308aa  mov x0, x8
0x065BBDA4: fe0743f8  ldr x30, [sp], #0x30
0x065BBDA8: 07132f17  b #0x31809c4
0x065BBDAC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x065BBDB0: f65741a9  ldp x22, x21, [sp, #0x10]
0x065BBDB4: fe0743f8  ldr x30, [sp], #0x30
0x065BBDB8: c0035fd6  ret
0x065BBDBC: bc132f97  bl #0x3180cac

; RVA 0x65BC594 | private void AddAnalyticsData(IBoosterItem booster, string reason, ResourceSource source, Entity entity) { }
; bytes=656 sha256=fa95a446fda2d45c06970643a77b9a40519fd17537aa904f72f1c8520b13b9ec status=arm64_complete_bound indexed_start=True
0x065BC594: e80f1afc  str d8, [sp, #-0x60]!
0x065BC598: fe6f01a9  stp x30, x27, [sp, #0x10]
0x065BC59C: fa6702a9  stp x26, x25, [sp, #0x20]
0x065BC5A0: f85f03a9  stp x24, x23, [sp, #0x30]
0x065BC5A4: f65704a9  stp x22, x21, [sp, #0x40]
0x065BC5A8: f44f05a9  stp x20, x19, [sp, #0x50]
0x065BC5AC: 56bb00f0  adrp x22, #0x7d27000
0x065BC5B0: c8ca6339  ldrb w8, [x22, #0x8f2]
0x065BC5B4: f30304aa  mov x19, x4
0x065BC5B8: f403032a  mov w20, w3
0x065BC5BC: f50302aa  mov x21, x2
0x065BC5C0: f90301aa  mov x25, x1
0x065BC5C4: f70300aa  mov x23, x0
0x065BC5C8: 08030037  tbnz w8, #0, #0x65bc628
0x065BC5CC: e08500d0  adrp x0, #0x767a000
0x065BC5D0: 000443f9  ldr x0, [x0, #0x608]
0x065BC5D4: 11112f97  bl #0x3180a18
0x065BC5D8: 208a00d0  adrp x0, #0x7702000
0x065BC5DC: 008847f9  ldr x0, [x0, #0xf10]
0x065BC5E0: 0e112f97  bl #0x3180a18
0x065BC5E4: 208a00d0  adrp x0, #0x7702000
0x065BC5E8: 008c47f9  ldr x0, [x0, #0xf18]
0x065BC5EC: 0b112f97  bl #0x3180a18
0x065BC5F0: e08500d0  adrp x0, #0x767a000
0x065BC5F4: 00a844f9  ldr x0, [x0, #0x950]
0x065BC5F8: 08112f97  bl #0x3180a18
0x065BC5FC: e08500b0  adrp x0, #0x7679000
0x065BC600: 00d443f9  ldr x0, [x0, #0x7a8]
0x065BC604: 05112f97  bl #0x3180a18
0x065BC608: 008800b0  adrp x0, #0x76bd000
0x065BC60C: 00f841f9  ldr x0, [x0, #0x3f0]
0x065BC610: 02112f97  bl #0x3180a18
0x065BC614: a08500f0  adrp x0, #0x7673000
0x065BC618: 006c46f9  ldr x0, [x0, #0xcd8]
0x065BC61C: ff102f97  bl #0x3180a18
0x065BC620: 28008052  movz w8, #0x1
0x065BC624: c8ca2339  strb w8, [x22, #0x8f2]
0x065BC628: d30f00b4  cbz x19, #0x65bc820
0x065BC62C: e88500d0  adrp x8, #0x767a000
0x065BC630: 08a944f9  ldr x8, [x8, #0x950]
0x065BC634: e00313aa  mov x0, x19
0x065BC638: 010140f9  ldr x1, [x8]
0x065BC63C: d2915997  bl #0x3c20d84
0x065BC640: f82e40f9  ldr x24, [x23, #0x58]
0x065BC644: f80e00b4  cbz x24, #0x65bc820
0x065BC648: aa8500f0  adrp x10, #0x7673000
0x065BC64C: 080340f9  ldr x8, [x24]
0x065BC650: 4a6d46f9  ldr x10, [x10, #0xcd8]
0x065BC654: f60300aa  mov x22, x0
0x065BC658: 095d4279  ldrh w9, [x8, #0x12e]
0x065BC65C: 410140f9  ldr x1, [x10]
0x065BC660: 290100b4  cbz x9, #0x65bc684
0x065BC664: 0a5940f9  ldr x10, [x8, #0xb0]
0x065BC668: 4a210091  add x10, x10, #8
0x065BC66C: 4b815ff8  ldur x11, [x10, #-8]
0x065BC670: 7f0101eb  cmp x11, x1
0x065BC674: 00010054  b.eq #0x65bc694
0x065BC678: 290500f1  subs x9, x9, #1
0x065BC67C: 4a410091  add x10, x10, #0x10
0x065BC680: 61ffff54  b.ne #0x65bc66c
0x065BC684: e00318aa  mov x0, x24
0x065BC688: e2031f2a  mov w2, wzr
0x065BC68C: 21692e97  bl #0x3156b10
0x065BC690: 04000014  b #0x65bc6a0
0x065BC694: 490180b9  ldrsw x9, [x10]
0x065BC698: 0811098b  add x8, x8, x9, lsl #4
0x065BC69C: 00e10491  add x0, x8, #0x138
0x065BC6A0: 080440a9  ldp x8, x1, [x0]
0x065BC6A4: e00318aa  mov x0, x24
0x065BC6A8: 00013fd6  blr x8
0x065BC6AC: b90b00b4  cbz x25, #0x65bc820
0x065BC6B0: ea8500b0  adrp x10, #0x7679000
0x065BC6B4: 280340f9  ldr x8, [x25]
0x065BC6B8: 4ad543f9  ldr x10, [x10, #0x7a8]
0x065BC6BC: f80300aa  mov x24, x0
0x065BC6C0: 095d4279  ldrh w9, [x8, #0x12e]
0x065BC6C4: 410140f9  ldr x1, [x10]
0x065BC6C8: 290100b4  cbz x9, #0x65bc6ec
0x065BC6CC: 0a5940f9  ldr x10, [x8, #0xb0]
0x065BC6D0: 4a210091  add x10, x10, #8
0x065BC6D4: 4b815ff8  ldur x11, [x10, #-8]
0x065BC6D8: 7f0101eb  cmp x11, x1
0x065BC6DC: 00010054  b.eq #0x65bc6fc
0x065BC6E0: 290500f1  subs x9, x9, #1
0x065BC6E4: 4a410091  add x10, x10, #0x10
0x065BC6E8: 61ffff54  b.ne #0x65bc6d4
0x065BC6EC: e00319aa  mov x0, x25
0x065BC6F0: e2031f2a  mov w2, wzr
0x065BC6F4: 07692e97  bl #0x3156b10
0x065BC6F8: 04000014  b #0x65bc708
0x065BC6FC: 490180b9  ldrsw x9, [x10]
0x065BC700: 0811098b  add x8, x8, x9, lsl #4
0x065BC704: 00e10491  add x0, x8, #0x138
0x065BC708: 080440a9  ldp x8, x1, [x0]
0x065BC70C: e00319aa  mov x0, x25
0x065BC710: 00013fd6  blr x8
0x065BC714: 600800b4  cbz x0, #0x65bc820
0x065BC718: f73240f9  ldr x23, [x23, #0x60]
0x065BC71C: 370800b4  cbz x23, #0x65bc820
0x065BC720: 0a8800b0  adrp x10, #0x76bd000
0x065BC724: e80240f9  ldr x8, [x23]
0x065BC728: 4af941f9  ldr x10, [x10, #0x3f0]
0x065BC72C: 080c40fd  ldr d8, [x0, #0x18]
0x065BC730: 095d4279  ldrh w9, [x8, #0x12e]
0x065BC734: 410140f9  ldr x1, [x10]
0x065BC738: 290100b4  cbz x9, #0x65bc75c
0x065BC73C: 0a5940f9  ldr x10, [x8, #0xb0]
0x065BC740: 4a210091  add x10, x10, #8
0x065BC744: 4b815ff8  ldur x11, [x10, #-8]
0x065BC748: 7f0101eb  cmp x11, x1
0x065BC74C: 00010054  b.eq #0x65bc76c
0x065BC750: 290500f1  subs x9, x9, #1
0x065BC754: 4a410091  add x10, x10, #0x10
0x065BC758: 61ffff54  b.ne #0x65bc744
0x065BC75C: 62008052  movz w2, #0x3
0x065BC760: e00317aa  mov x0, x23
0x065BC764: eb682e97  bl #0x3156b10
0x065BC768: 05000014  b #0x65bc77c
0x065BC76C: 490140b9  ldr w9, [x10]
0x065BC770: 290d0011  add w9, w9, #3
0x065BC774: 08d1298b  add x8, x8, w9, sxtw #4
0x065BC778: 00e10491  add x0, x8, #0x138
0x065BC77C: 080440a9  ldp x8, x1, [x0]
0x065BC780: 398a00d0  adrp x25, #0x7702000
0x065BC784: 3b8a00d0  adrp x27, #0x7702000
0x065BC788: 398b47f9  ldr x25, [x25, #0xf10]
0x065BC78C: 7b8f47f9  ldr x27, [x27, #0xf18]
0x065BC790: e00317aa  mov x0, x23
0x065BC794: 00013fd6  blr x8
0x065BC798: e00000b4  cbz x0, #0x65bc7b4
0x065BC79C: 001040f9  ldr x0, [x0, #0x20]
0x065BC7A0: a00000b4  cbz x0, #0x65bc7b4
0x065BC7A4: e1031faa  mov x1, xzr
0x065BC7A8: b3d9f697  bl #0x6372e74
0x065BC7AC: f70300aa  mov x23, x0
0x065BC7B0: 02000014  b #0x65bc7b8
0x065BC7B4: f7031faa  mov x23, xzr
0x065BC7B8: 200340f9  ldr x0, [x25]
0x065BC7BC: 09feefd2  movz x9, #0x7ff0, lsl #48
0x065BC7C0: 2001679e  fmov d0, x9
0x065BC7C4: 0801789e  fcvtzs x8, d8
0x065BC7C8: 0021601e  fcmp d8, d0
0x065BC7CC: 0900f0d2  movz x9, #0x8000, lsl #48
0x065BC7D0: 3901889a  csel x25, x9, x8, eq
0x065BC7D4: 33112f97  bl #0x3180ca0
0x065BC7D8: e10316aa  mov x1, x22
0x065BC7DC: e20318aa  mov x2, x24
0x065BC7E0: e30319aa  mov x3, x25
0x065BC7E4: e40315aa  mov x4, x21
0x065BC7E8: e50317aa  mov x5, x23
0x065BC7EC: e603142a  mov w6, w20
0x065BC7F0: fa0300aa  mov x26, x0
0x065BC7F4: 0e000094  bl #0x65bc82c
0x065BC7F8: 620340f9  ldr x2, [x27]
0x065BC7FC: e00313aa  mov x0, x19
0x065BC800: e1031aaa  mov x1, x26
0x065BC804: f44f45a9  ldp x20, x19, [sp, #0x50]
0x065BC808: f65744a9  ldp x22, x21, [sp, #0x40]
0x065BC80C: f85f43a9  ldp x24, x23, [sp, #0x30]
0x065BC810: fa6742a9  ldp x26, x25, [sp, #0x20]
0x065BC814: fe6f41a9  ldp x30, x27, [sp, #0x10]
0x065BC818: e80746fc  ldr d8, [sp], #0x60
0x065BC81C: 07905917  b #0x3c20838
0x065BC820: 23112f97  bl #0x3180cac

; RVA 0x65BC44C | private void BoosterActivatedSendAnalytic(Entity entity) { }
; bytes=320 sha256=3617f2ba9a6bec890c3e59cce79f4b555df99a03d03d6811b4e03eec0a011d66 status=arm64_complete_bound indexed_start=True
0x065BC44C: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x065BC450: f65701a9  stp x22, x21, [sp, #0x10]
0x065BC454: f44f02a9  stp x20, x19, [sp, #0x20]
0x065BC458: 55bb00f0  adrp x21, #0x7d27000
0x065BC45C: a8ce6339  ldrb w8, [x21, #0x8f3]
0x065BC460: f40301aa  mov x20, x1
0x065BC464: f30300aa  mov x19, x0
0x065BC468: a8020037  tbnz w8, #0, #0x65bc4bc
0x065BC46C: 608900d0  adrp x0, #0x76ea000
0x065BC470: 00e844f9  ldr x0, [x0, #0x9d0]
0x065BC474: 69112f97  bl #0x3180a18
0x065BC478: 008600f0  adrp x0, #0x767f000
0x065BC47C: 00e843f9  ldr x0, [x0, #0x7d0]
0x065BC480: 66112f97  bl #0x3180a18
0x065BC484: 208a00d0  adrp x0, #0x7702000
0x065BC488: 007847f9  ldr x0, [x0, #0xef0]
0x065BC48C: 63112f97  bl #0x3180a18
0x065BC490: 208a00d0  adrp x0, #0x7702000
0x065BC494: 007c47f9  ldr x0, [x0, #0xef8]
0x065BC498: 60112f97  bl #0x3180a18
0x065BC49C: 208a00d0  adrp x0, #0x7702000
0x065BC4A0: 008047f9  ldr x0, [x0, #0xf00]
0x065BC4A4: 5d112f97  bl #0x3180a18
0x065BC4A8: 208a00d0  adrp x0, #0x7702000
0x065BC4AC: 008447f9  ldr x0, [x0, #0xf08]
0x065BC4B0: 5a112f97  bl #0x3180a18
0x065BC4B4: 28008052  movz w8, #0x1
0x065BC4B8: a8ce2339  strb w8, [x21, #0x8f3]
0x065BC4BC: 740600b4  cbz x20, #0x65bc588
0x065BC4C0: 288a00d0  adrp x8, #0x7702000
0x065BC4C4: 088147f9  ldr x8, [x8, #0xf00]
0x065BC4C8: e00314aa  mov x0, x20
0x065BC4CC: 010140f9  ldr x1, [x8]
0x065BC4D0: 2d925997  bl #0x3c20d84
0x065BC4D4: 200500b4  cbz x0, #0x65bc578
0x065BC4D8: 088600f0  adrp x8, #0x767f000
0x065BC4DC: 08e943f9  ldr x8, [x8, #0x7d0]
0x065BC4E0: 758900d0  adrp x21, #0x76ea000
0x065BC4E4: 368a00d0  adrp x22, #0x7702000
0x065BC4E8: 378a00d0  adrp x23, #0x7702000
0x065BC4EC: 010140f9  ldr x1, [x8]
0x065BC4F0: 731640f9  ldr x19, [x19, #0x28]
0x065BC4F4: b5ea44f9  ldr x21, [x21, #0x9d0]
0x065BC4F8: d67e47f9  ldr x22, [x22, #0xef8]
0x065BC4FC: f77a47f9  ldr x23, [x23, #0xef0]
0x065BC500: f40300aa  mov x20, x0
0x065BC504: 18bf9897  bl #0x4bec164
0x065BC508: a10240f9  ldr x1, [x21]
0x065BC50C: f50300aa  mov x21, x0
0x065BC510: e00314aa  mov x0, x20
0x065BC514: 0cbf9897  bl #0x4bec144
0x065BC518: c10240f9  ldr x1, [x22]
0x065BC51C: f60300aa  mov x22, x0
0x065BC520: e00314aa  mov x0, x20
0x065BC524: bec45897  bl #0x3bed81c
0x065BC528: e80240f9  ldr x8, [x23]
0x065BC52C: f70300aa  mov x23, x0
0x065BC530: e00308aa  mov x0, x8
0x065BC534: db112f97  bl #0x3180ca0
0x065BC538: e10315aa  mov x1, x21
0x065BC53C: e20316aa  mov x2, x22
0x065BC540: e30317aa  mov x3, x23
0x065BC544: e4031faa  mov x4, xzr
0x065BC548: f40300aa  mov x20, x0
0x065BC54C: ddcb0694  bl #0x676f4c0
0x065BC550: d30100b4  cbz x19, #0x65bc588
0x065BC554: 288a00d0  adrp x8, #0x7702000
0x065BC558: 088547f9  ldr x8, [x8, #0xf08]
0x065BC55C: e00313aa  mov x0, x19
0x065BC560: e10314aa  mov x1, x20
0x065BC564: f44f42a9  ldp x20, x19, [sp, #0x20]
0x065BC568: 020140f9  ldr x2, [x8]
0x065BC56C: f65741a9  ldp x22, x21, [sp, #0x10]
0x065BC570: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x065BC574: fea15f17  b #0x3da4d6c
0x065BC578: f44f42a9  ldp x20, x19, [sp, #0x20]
0x065BC57C: f65741a9  ldp x22, x21, [sp, #0x10]
0x065BC580: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x065BC584: c0035fd6  ret
0x065BC588: c9112f97  bl #0x3180cac

; RVA 0x65BC8B0 | protected override void EntityCreated(Entity entity) { }
; bytes=436 sha256=ba0294caa90b426de2e7aed6eaa668524c3ab28218584aad3872a2615f31312b status=arm64_complete_bound indexed_start=True
0x065BC8B0: fe0f1df8  str x30, [sp, #-0x30]!
0x065BC8B4: f65701a9  stp x22, x21, [sp, #0x10]
0x065BC8B8: f44f02a9  stp x20, x19, [sp, #0x20]
0x065BC8BC: 55bb00f0  adrp x21, #0x7d27000
0x065BC8C0: a8d26339  ldrb w8, [x21, #0x8f4]
0x065BC8C4: f30301aa  mov x19, x1
0x065BC8C8: f40300aa  mov x20, x0
0x065BC8CC: 48020037  tbnz w8, #0, #0x65bc914
0x065BC8D0: e08500f0  adrp x0, #0x767b000
0x065BC8D4: 00cc47f9  ldr x0, [x0, #0xf98]
0x065BC8D8: 50102f97  bl #0x3180a18
0x065BC8DC: c08800f0  adrp x0, #0x76d7000
0x065BC8E0: 00c442f9  ldr x0, [x0, #0x588]
0x065BC8E4: 4d102f97  bl #0x3180a18
0x065BC8E8: e08500d0  adrp x0, #0x767a000
0x065BC8EC: 009c44f9  ldr x0, [x0, #0x938]
0x065BC8F0: 4a102f97  bl #0x3180a18
0x065BC8F4: e08500b0  adrp x0, #0x7679000
0x065BC8F8: 00d443f9  ldr x0, [x0, #0x7a8]
0x065BC8FC: 47102f97  bl #0x3180a18
0x065BC900: e08500d0  adrp x0, #0x767a000
0x065BC904: 005445f9  ldr x0, [x0, #0xaa8]
0x065BC908: 44102f97  bl #0x3180a18
0x065BC90C: 28008052  movz w8, #0x1
0x065BC910: a8d22339  strb w8, [x21, #0x8f4]
0x065BC914: 730a00b4  cbz x19, #0x65bca60
0x065BC918: e88500d0  adrp x8, #0x767a000
0x065BC91C: 089d44f9  ldr x8, [x8, #0x938]
0x065BC920: e00313aa  mov x0, x19
0x065BC924: 010140f9  ldr x1, [x8]
0x065BC928: 17915997  bl #0x3c20d84
0x065BC92C: 200900b4  cbz x0, #0x65bca50
0x065BC930: e88500f0  adrp x8, #0x767b000
0x065BC934: 08cd47f9  ldr x8, [x8, #0xf98]
0x065BC938: f30300aa  mov x19, x0
0x065BC93C: 010140f9  ldr x1, [x8]
0x065BC940: b7c35897  bl #0x3bed81c
0x065BC944: e00800b4  cbz x0, #0x65bca60
0x065BC948: 942a40f9  ldr x20, [x20, #0x50]
0x065BC94C: b40800b4  cbz x20, #0x65bca60
0x065BC950: ea8500d0  adrp x10, #0x767a000
0x065BC954: 880240f9  ldr x8, [x20]
0x065BC958: 4a5545f9  ldr x10, [x10, #0xaa8]
0x065BC95C: d68800f0  adrp x22, #0x76d7000
0x065BC960: 151840f9  ldr x21, [x0, #0x30]
0x065BC964: 095d4279  ldrh w9, [x8, #0x12e]
0x065BC968: 410140f9  ldr x1, [x10]
0x065BC96C: d6c642f9  ldr x22, [x22, #0x588]
0x065BC970: 290100b4  cbz x9, #0x65bc994
0x065BC974: 0a5940f9  ldr x10, [x8, #0xb0]
0x065BC978: 4a210091  add x10, x10, #8
0x065BC97C: 4b815ff8  ldur x11, [x10, #-8]
0x065BC980: 7f0101eb  cmp x11, x1
0x065BC984: 00010054  b.eq #0x65bc9a4
0x065BC988: 290500f1  subs x9, x9, #1
0x065BC98C: 4a410091  add x10, x10, #0x10
0x065BC990: 61ffff54  b.ne #0x65bc97c
0x065BC994: 42008052  movz w2, #0x2
0x065BC998: e00314aa  mov x0, x20
0x065BC99C: 5d682e97  bl #0x3156b10
0x065BC9A0: 05000014  b #0x65bc9b4
0x065BC9A4: 490140b9  ldr w9, [x10]
0x065BC9A8: 29090011  add w9, w9, #2
0x065BC9AC: 08d1298b  add x8, x8, w9, sxtw #4
0x065BC9B0: 00e10491  add x0, x8, #0x138
0x065BC9B4: 080840a9  ldp x8, x2, [x0]
0x065BC9B8: e00314aa  mov x0, x20
0x065BC9BC: e10315aa  mov x1, x21
0x065BC9C0: 00013fd6  blr x8
0x065BC9C4: c10240f9  ldr x1, [x22]
0x065BC9C8: f40300aa  mov x20, x0
0x065BC9CC: e00313aa  mov x0, x19
0x065BC9D0: 93c35897  bl #0x3bed81c
0x065BC9D4: 740400b4  cbz x20, #0x65bca60
0x065BC9D8: ea8500b0  adrp x10, #0x7679000
0x065BC9DC: 880240f9  ldr x8, [x20]
0x065BC9E0: 4ad543f9  ldr x10, [x10, #0x7a8]
0x065BC9E4: f30300aa  mov x19, x0
0x065BC9E8: 095d4279  ldrh w9, [x8, #0x12e]
0x065BC9EC: 410140f9  ldr x1, [x10]
0x065BC9F0: 290100b4  cbz x9, #0x65bca14
0x065BC9F4: 0a5940f9  ldr x10, [x8, #0xb0]
0x065BC9F8: 4a210091  add x10, x10, #8
0x065BC9FC: 4b815ff8  ldur x11, [x10, #-8]
0x065BCA00: 7f0101eb  cmp x11, x1
0x065BCA04: 00010054  b.eq #0x65bca24
0x065BCA08: 290500f1  subs x9, x9, #1
0x065BCA0C: 4a410091  add x10, x10, #0x10
0x065BCA10: 61ffff54  b.ne #0x65bc9fc
0x065BCA14: 22008052  movz w2, #0x1
0x065BCA18: e00314aa  mov x0, x20
0x065BCA1C: 3d682e97  bl #0x3156b10
0x065BCA20: 05000014  b #0x65bca34
0x065BCA24: 490140b9  ldr w9, [x10]
0x065BCA28: 29050011  add w9, w9, #1
0x065BCA2C: 08d1298b  add x8, x8, w9, sxtw #4
0x065BCA30: 00e10491  add x0, x8, #0x138
0x065BCA34: 080440a9  ldp x8, x1, [x0]
0x065BCA38: e00314aa  mov x0, x20
0x065BCA3C: 00013fd6  blr x8
0x065BCA40: 000100b4  cbz x0, #0x65bca60
0x065BCA44: f30000b4  cbz x19, #0x65bca60
0x065BCA48: 081440b9  ldr w8, [x0, #0x14]
0x065BCA4C: 68aa00b9  str w8, [x19, #0xa8]
0x065BCA50: f44f42a9  ldp x20, x19, [sp, #0x20]
0x065BCA54: f65741a9  ldp x22, x21, [sp, #0x10]
0x065BCA58: fe0743f8  ldr x30, [sp], #0x30
0x065BCA5C: c0035fd6  ret
0x065BCA60: 93102f97  bl #0x3180cac

; RVA 0x65BB484 | private IdComponent GetLinkedMergeItemIdComponent(string uuid) { }
; bytes=428 sha256=f45fdceb83db70192f3eaa98aaf8c5ecd1f12683b6c5a50cf4423eef28f50d59 status=arm64_complete_bound indexed_start=True
0x065BB484: fe0f1cf8  str x30, [sp, #-0x40]!
0x065BB488: f85f01a9  stp x24, x23, [sp, #0x10]
0x065BB48C: f65702a9  stp x22, x21, [sp, #0x20]
0x065BB490: f44f03a9  stp x20, x19, [sp, #0x30]
0x065BB494: 73bb0090  adrp x19, #0x7d27000
0x065BB498: 368a00f0  adrp x22, #0x7702000
0x065BB49C: 68d66339  ldrb w8, [x19, #0x8f5]
0x065BB4A0: d63a47f9  ldr x22, [x22, #0xe70]
0x065BB4A4: f50301aa  mov x21, x1
0x065BB4A8: f40300aa  mov x20, x0
0x065BB4AC: a8020037  tbnz w8, #0, #0x65bb500
0x065BB4B0: 00860090  adrp x0, #0x767b000
0x065BB4B4: 00cc47f9  ldr x0, [x0, #0xf98]
0x065BB4B8: 58152f97  bl #0x3180a18
0x065BB4BC: 208a00f0  adrp x0, #0x7702000
0x065BB4C0: 003c47f9  ldr x0, [x0, #0xe78]
0x065BB4C4: 55152f97  bl #0x3180a18
0x065BB4C8: 208a00f0  adrp x0, #0x7702000
0x065BB4CC: 004047f9  ldr x0, [x0, #0xe80]
0x065BB4D0: 52152f97  bl #0x3180a18
0x065BB4D4: 208a00f0  adrp x0, #0x7702000
0x065BB4D8: 004447f9  ldr x0, [x0, #0xe88]
0x065BB4DC: 4f152f97  bl #0x3180a18
0x065BB4E0: 208a00f0  adrp x0, #0x7702000
0x065BB4E4: 004847f9  ldr x0, [x0, #0xe90]
0x065BB4E8: 4c152f97  bl #0x3180a18
0x065BB4EC: 208a00f0  adrp x0, #0x7702000
0x065BB4F0: 003847f9  ldr x0, [x0, #0xe70]
0x065BB4F4: 49152f97  bl #0x3180a18
0x065BB4F8: 28008052  movz w8, #0x1
0x065BB4FC: 68d62339  strb w8, [x19, #0x8f5]
0x065BB500: c00240f9  ldr x0, [x22]
0x065BB504: e7152f97  bl #0x3180ca0
0x065BB508: e1031faa  mov x1, xzr
0x065BB50C: f30300aa  mov x19, x0
0x065BB510: 3b7cc497  bl #0x56da5fc
0x065BB514: d30800b4  cbz x19, #0x65bb62c
0x065BB518: e00313aa  mov x0, x19
0x065BB51C: 150c01f8  str x21, [x0, #0x10]!
0x065BB520: e10315aa  mov x1, x21
0x065BB524: 28152f97  bl #0x31809c4
0x065BB528: 942640f9  ldr x20, [x20, #0x48]
0x065BB52C: 140800b4  cbz x20, #0x65bb62c
0x065BB530: 298a00f0  adrp x9, #0x7702000
0x065BB534: 294547f9  ldr x9, [x9, #0xe88]
0x065BB538: 880240f9  ldr x8, [x20]
0x065BB53C: 388a00f0  adrp x24, #0x7702000
0x065BB540: 378a00f0  adrp x23, #0x7702000
0x065BB544: 350140f9  ldr x21, [x9]
0x065BB548: 368a00f0  adrp x22, #0x7702000
0x065BB54C: 095d4279  ldrh w9, [x8, #0x12e]
0x065BB550: a11240f9  ldr x1, [x21, #0x20]
0x065BB554: a2a24079  ldrh w2, [x21, #0x50]
0x065BB558: 184347f9  ldr x24, [x24, #0xe80]
0x065BB55C: f74a47f9  ldr x23, [x23, #0xe90]
0x065BB560: d63e47f9  ldr x22, [x22, #0xe78]
0x065BB564: 290100b4  cbz x9, #0x65bb588
0x065BB568: 0a5940f9  ldr x10, [x8, #0xb0]
0x065BB56C: 4a210091  add x10, x10, #8
0x065BB570: 4b815ff8  ldur x11, [x10, #-8]
0x065BB574: 7f0101eb  cmp x11, x1
0x065BB578: e0000054  b.eq #0x65bb594
0x065BB57C: 290500f1  subs x9, x9, #1
0x065BB580: 4a410091  add x10, x10, #0x10
0x065BB584: 61ffff54  b.ne #0x65bb570
0x065BB588: e00314aa  mov x0, x20
0x065BB58C: 616d2e97  bl #0x3156b10
0x065BB590: 05000014  b #0x65bb5a4
0x065BB594: 490140b9  ldr w9, [x10]
0x065BB598: 2901020b  add w9, w9, w2
0x065BB59C: 08d1298b  add x8, x8, w9, sxtw #4
0x065BB5A0: 00e10491  add x0, x8, #0x138
0x065BB5A4: 000440f9  ldr x0, [x0, #8]
0x065BB5A8: e10315aa  mov x1, x21
0x065BB5AC: 77152f97  bl #0x3180b88
0x065BB5B0: 080440f9  ldr x8, [x0, #8]
0x065BB5B4: e10300aa  mov x1, x0
0x065BB5B8: e00314aa  mov x0, x20
0x065BB5BC: 00013fd6  blr x8
0x065BB5C0: 080340f9  ldr x8, [x24]
0x065BB5C4: f40300aa  mov x20, x0
0x065BB5C8: e00308aa  mov x0, x8
0x065BB5CC: b5152f97  bl #0x3180ca0
0x065BB5D0: e20240f9  ldr x2, [x23]
0x065BB5D4: e10313aa  mov x1, x19
0x065BB5D8: e3031faa  mov x3, xzr
0x065BB5DC: f50300aa  mov x21, x0
0x065BB5E0: 776ab297  bl #0x5255fbc
0x065BB5E4: c20240f9  ldr x2, [x22]
0x065BB5E8: e00314aa  mov x0, x20
0x065BB5EC: e10315aa  mov x1, x21
0x065BB5F0: d0265a97  bl #0x3c45130
0x065BB5F4: 200100b4  cbz x0, #0x65bb618
0x065BB5F8: 08860090  adrp x8, #0x767b000
0x065BB5FC: 08cd47f9  ldr x8, [x8, #0xf98]
0x065BB600: f44f43a9  ldp x20, x19, [sp, #0x30]
0x065BB604: f65742a9  ldp x22, x21, [sp, #0x20]
0x065BB608: f85f41a9  ldp x24, x23, [sp, #0x10]
0x065BB60C: 010140f9  ldr x1, [x8]
0x065BB610: fe0744f8  ldr x30, [sp], #0x40
0x065BB614: 82c85817  b #0x3bed81c
0x065BB618: f44f43a9  ldp x20, x19, [sp, #0x30]
0x065BB61C: f65742a9  ldp x22, x21, [sp, #0x20]
0x065BB620: f85f41a9  ldp x24, x23, [sp, #0x10]
0x065BB624: fe0744f8  ldr x30, [sp], #0x40
0x065BB628: c0035fd6  ret
0x065BB62C: a0152f97  bl #0x3180cac

; RVA 0x65BCA6C | public void .ctor() { }
; bytes=8 sha256=7c23bc14255a43f50827aad69cea295edfa93661e29f1cdaff675edd4bc8a549 status=arm64_complete_bound indexed_start=True
0x065BCA6C: e1031faa  mov x1, xzr
0x065BCA70: b4aaf717  b #0x63a7540

