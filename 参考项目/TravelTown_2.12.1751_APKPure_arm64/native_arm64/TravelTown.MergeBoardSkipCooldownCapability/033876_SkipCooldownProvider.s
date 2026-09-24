; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 33876 Merger.MergeBoardSkipCooldownCapability.Logic.SkipCooldownProvider
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A63140 | private SkipCooldownConfig get_SkipCooldownConfig() { }
; bytes=164 sha256=bb9d8ad5e7164b4d94a15c31213866e0c4a7bd64efff441ea8a2b76bae954032 status=arm64_complete_bound indexed_start=True
0x06A63140: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A63144: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A63148: 349600f0  adrp x20, #0x7d2a000
0x06A6314C: 88f65939  ldrb w8, [x20, #0x67d]
0x06A63150: f30300aa  mov x19, x0
0x06A63154: c8000037  tbnz w8, #0, #0x6a6316c
0x06A63158: e0600090  adrp x0, #0x767f000
0x06A6315C: 00a847f9  ldr x0, [x0, #0xf50]
0x06A63160: 2e761c97  bl #0x3180a18
0x06A63164: 28008052  movz w8, #0x1
0x06A63168: 88f61939  strb w8, [x20, #0x67d]
0x06A6316C: 731640f9  ldr x19, [x19, #0x28]
0x06A63170: 930300b4  cbz x19, #0x6a631e0
0x06A63174: ea600090  adrp x10, #0x767f000
0x06A63178: 680240f9  ldr x8, [x19]
0x06A6317C: 4aa947f9  ldr x10, [x10, #0xf50]
0x06A63180: 095d4279  ldrh w9, [x8, #0x12e]
0x06A63184: 410140f9  ldr x1, [x10]
0x06A63188: 290100b4  cbz x9, #0x6a631ac
0x06A6318C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A63190: 4a210091  add x10, x10, #8
0x06A63194: 4b815ff8  ldur x11, [x10, #-8]
0x06A63198: 7f0101eb  cmp x11, x1
0x06A6319C: 00010054  b.eq #0x6a631bc
0x06A631A0: 290500f1  subs x9, x9, #1
0x06A631A4: 4a410091  add x10, x10, #0x10
0x06A631A8: 61ffff54  b.ne #0x6a63194
0x06A631AC: a2008052  movz w2, #0x5
0x06A631B0: e00313aa  mov x0, x19
0x06A631B4: 57ce1b97  bl #0x3156b10
0x06A631B8: 05000014  b #0x6a631cc
0x06A631BC: 490140b9  ldr w9, [x10]
0x06A631C0: 29150011  add w9, w9, #5
0x06A631C4: 08d1298b  add x8, x8, w9, sxtw #4
0x06A631C8: 00e10491  add x0, x8, #0x138
0x06A631CC: 020440a9  ldp x2, x1, [x0]
0x06A631D0: e00313aa  mov x0, x19
0x06A631D4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A631D8: fe0742f8  ldr x30, [sp], #0x20
0x06A631DC: 40001fd6  br x2
0x06A631E0: b3761c97  bl #0x3180cac

; RVA 0x6A631E4 | public bool CanSkipCooldown(Entity entity) { }
; bytes=232 sha256=14cb9348dfa22dec93ef2629925d336ebc7d446d875c74842dc0acb4d4fe3d56 status=arm64_complete_bound indexed_start=True
0x06A631E4: fe0f1cf8  str x30, [sp, #-0x40]!
0x06A631E8: f85f01a9  stp x24, x23, [sp, #0x10]
0x06A631EC: f65702a9  stp x22, x21, [sp, #0x20]
0x06A631F0: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A631F4: 359600f0  adrp x21, #0x7d2a000
0x06A631F8: 766600b0  adrp x22, #0x7730000
0x06A631FC: a8fa5939  ldrb w8, [x21, #0x67e]
0x06A63200: d66a44f9  ldr x22, [x22, #0x8d0]
0x06A63204: f40301aa  mov x20, x1
0x06A63208: f30300aa  mov x19, x0
0x06A6320C: e8010037  tbnz w8, #0, #0x6a63248
0x06A63210: 606600b0  adrp x0, #0x7730000
0x06A63214: 006c44f9  ldr x0, [x0, #0x8d8]
0x06A63218: 00761c97  bl #0x3180a18
0x06A6321C: 606600b0  adrp x0, #0x7730000
0x06A63220: 007044f9  ldr x0, [x0, #0x8e0]
0x06A63224: fd751c97  bl #0x3180a18
0x06A63228: 606600b0  adrp x0, #0x7730000
0x06A6322C: 007444f9  ldr x0, [x0, #0x8e8]
0x06A63230: fa751c97  bl #0x3180a18
0x06A63234: 606600b0  adrp x0, #0x7730000
0x06A63238: 006844f9  ldr x0, [x0, #0x8d0]
0x06A6323C: f7751c97  bl #0x3180a18
0x06A63240: 28008052  movz w8, #0x1
0x06A63244: a8fa1939  strb w8, [x21, #0x67e]
0x06A63248: c00240f9  ldr x0, [x22]
0x06A6324C: 95761c97  bl #0x3180ca0
0x06A63250: e1031faa  mov x1, xzr
0x06A63254: f50300aa  mov x21, x0
0x06A63258: e9dcb197  bl #0x56da5fc
0x06A6325C: 750300b4  cbz x21, #0x6a632c8
0x06A63260: 766600b0  adrp x22, #0x7730000
0x06A63264: 776600b0  adrp x23, #0x7730000
0x06A63268: 786600b0  adrp x24, #0x7730000
0x06A6326C: d67244f9  ldr x22, [x22, #0x8e0]
0x06A63270: f77644f9  ldr x23, [x23, #0x8e8]
0x06A63274: 186f44f9  ldr x24, [x24, #0x8d8]
0x06A63278: e00315aa  mov x0, x21
0x06A6327C: 140c01f8  str x20, [x0, #0x10]!
0x06A63280: e10314aa  mov x1, x20
0x06A63284: d0751c97  bl #0x31809c4
0x06A63288: c00240f9  ldr x0, [x22]
0x06A6328C: 732240f9  ldr x19, [x19, #0x40]
0x06A63290: 84761c97  bl #0x3180ca0
0x06A63294: e20240f9  ldr x2, [x23]
0x06A63298: e10315aa  mov x1, x21
0x06A6329C: e3031faa  mov x3, xzr
0x06A632A0: f40300aa  mov x20, x0
0x06A632A4: 46cb9f97  bl #0x5255fbc
0x06A632A8: 020340f9  ldr x2, [x24]
0x06A632AC: e00313aa  mov x0, x19
0x06A632B0: e10314aa  mov x1, x20
0x06A632B4: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A632B8: f65742a9  ldp x22, x21, [sp, #0x20]
0x06A632BC: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06A632C0: fe0744f8  ldr x30, [sp], #0x40
0x06A632C4: 53204717  b #0x3c2b410
0x06A632C8: 79761c97  bl #0x3180cac

; RVA 0x6A632D4 | public double GetTimeLeft(Entity entity) { }
; bytes=388 sha256=0ed07e660aee86329d09b3ce13dc06bf1c7f1e231abb9892b73ac21d0dbc6a35 status=arm64_complete_bound indexed_start=True
0x06A632D4: fe67bca9  stp x30, x25, [sp, #-0x40]!
0x06A632D8: f85f01a9  stp x24, x23, [sp, #0x10]
0x06A632DC: f65702a9  stp x22, x21, [sp, #0x20]
0x06A632E0: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A632E4: 359600f0  adrp x21, #0x7d2a000
0x06A632E8: 766600b0  adrp x22, #0x7730000
0x06A632EC: a8fe5939  ldrb w8, [x21, #0x67f]
0x06A632F0: d67a44f9  ldr x22, [x22, #0x8f0]
0x06A632F4: f40301aa  mov x20, x1
0x06A632F8: f30300aa  mov x19, x0
0x06A632FC: 48020037  tbnz w8, #0, #0x6a63344
0x06A63300: 606600b0  adrp x0, #0x7730000
0x06A63304: 007c44f9  ldr x0, [x0, #0x8f8]
0x06A63308: c4751c97  bl #0x3180a18
0x06A6330C: 606600b0  adrp x0, #0x7730000
0x06A63310: 007044f9  ldr x0, [x0, #0x8e0]
0x06A63314: c1751c97  bl #0x3180a18
0x06A63318: 606600b0  adrp x0, #0x7730000
0x06A6331C: 008044f9  ldr x0, [x0, #0x900]
0x06A63320: be751c97  bl #0x3180a18
0x06A63324: 606600b0  adrp x0, #0x7730000
0x06A63328: 008444f9  ldr x0, [x0, #0x908]
0x06A6332C: bb751c97  bl #0x3180a18
0x06A63330: 606600b0  adrp x0, #0x7730000
0x06A63334: 007844f9  ldr x0, [x0, #0x8f0]
0x06A63338: b8751c97  bl #0x3180a18
0x06A6333C: 28008052  movz w8, #0x1
0x06A63340: a8fe1939  strb w8, [x21, #0x67f]
0x06A63344: c00240f9  ldr x0, [x22]
0x06A63348: 56761c97  bl #0x3180ca0
0x06A6334C: e1031faa  mov x1, xzr
0x06A63350: f60300aa  mov x22, x0
0x06A63354: aadcb197  bl #0x56da5fc
0x06A63358: f60700b4  cbz x22, #0x6a63454
0x06A6335C: 776600b0  adrp x23, #0x7730000
0x06A63360: 786600b0  adrp x24, #0x7730000
0x06A63364: 796600b0  adrp x25, #0x7730000
0x06A63368: f77244f9  ldr x23, [x23, #0x8e0]
0x06A6336C: 188744f9  ldr x24, [x24, #0x908]
0x06A63370: 397f44f9  ldr x25, [x25, #0x8f8]
0x06A63374: f50316aa  mov x21, x22
0x06A63378: b40e01f8  str x20, [x21, #0x10]!
0x06A6337C: e00315aa  mov x0, x21
0x06A63380: e10314aa  mov x1, x20
0x06A63384: 90751c97  bl #0x31809c4
0x06A63388: e00240f9  ldr x0, [x23]
0x06A6338C: 732240f9  ldr x19, [x19, #0x40]
0x06A63390: 44761c97  bl #0x3180ca0
0x06A63394: 020340f9  ldr x2, [x24]
0x06A63398: e10316aa  mov x1, x22
0x06A6339C: e3031faa  mov x3, xzr
0x06A633A0: f40300aa  mov x20, x0
0x06A633A4: 06cb9f97  bl #0x5255fbc
0x06A633A8: 220340f9  ldr x2, [x25]
0x06A633AC: e00313aa  mov x0, x19
0x06A633B0: e10314aa  mov x1, x20
0x06A633B4: 5f874797  bl #0x3c45130
0x06A633B8: a00200b4  cbz x0, #0x6a6340c
0x06A633BC: 6a6600b0  adrp x10, #0x7730000
0x06A633C0: 080040f9  ldr x8, [x0]
0x06A633C4: 4a8144f9  ldr x10, [x10, #0x900]
0x06A633C8: b40240f9  ldr x20, [x21]
0x06A633CC: f30300aa  mov x19, x0
0x06A633D0: 095d4279  ldrh w9, [x8, #0x12e]
0x06A633D4: 410140f9  ldr x1, [x10]
0x06A633D8: 290100b4  cbz x9, #0x6a633fc
0x06A633DC: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A633E0: 4a210091  add x10, x10, #8
0x06A633E4: 4b815ff8  ldur x11, [x10, #-8]
0x06A633E8: 7f0101eb  cmp x11, x1
0x06A633EC: c0010054  b.eq #0x6a63424
0x06A633F0: 290500f1  subs x9, x9, #1
0x06A633F4: 4a410091  add x10, x10, #0x10
0x06A633F8: 61ffff54  b.ne #0x6a633e4
0x06A633FC: 22008052  movz w2, #0x1
0x06A63400: e00313aa  mov x0, x19
0x06A63404: c3cd1b97  bl #0x3156b10
0x06A63408: 0b000014  b #0x6a63434
0x06A6340C: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A63410: f65742a9  ldp x22, x21, [sp, #0x20]
0x06A63414: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06A63418: e003679e  fmov d0, xzr
0x06A6341C: fe67c4a8  ldp x30, x25, [sp], #0x40
0x06A63420: c0035fd6  ret
0x06A63424: 490140b9  ldr w9, [x10]
0x06A63428: 29050011  add w9, w9, #1
0x06A6342C: 08d1298b  add x8, x8, w9, sxtw #4
0x06A63430: 00e10491  add x0, x8, #0x138
0x06A63434: 030840a9  ldp x3, x2, [x0]
0x06A63438: e00313aa  mov x0, x19
0x06A6343C: e10314aa  mov x1, x20
0x06A63440: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A63444: f65742a9  ldp x22, x21, [sp, #0x20]
0x06A63448: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06A6344C: fe67c4a8  ldp x30, x25, [sp], #0x40
0x06A63450: 60001fd6  br x3
0x06A63454: 16761c97  bl #0x3180cac

; RVA 0x6A63460 | public ResourceMultiple GetSkipCooldownPrice(Entity entity, IMergeItem mergeItem) { }
; bytes=384 sha256=0557d52b8a25715d0be14bc84f0a7e9599e64202e3002f6cadb9f6ba1cfaff43 status=arm64_complete_bound indexed_start=True
0x06A63460: e80f1dfc  str d8, [sp, #-0x30]!
0x06A63464: fe0700f9  str x30, [sp, #8]
0x06A63468: f65701a9  stp x22, x21, [sp, #0x10]
0x06A6346C: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A63470: 369600f0  adrp x22, #0x7d2a000
0x06A63474: c8025a39  ldrb w8, [x22, #0x680]
0x06A63478: f50302aa  mov x21, x2
0x06A6347C: f40301aa  mov x20, x1
0x06A63480: f30300aa  mov x19, x0
0x06A63484: 28010037  tbnz w8, #0, #0x6a634a8
0x06A63488: c06000f0  adrp x0, #0x767e000
0x06A6348C: 00a442f9  ldr x0, [x0, #0x548]
0x06A63490: 62751c97  bl #0x3180a18
0x06A63494: a06000f0  adrp x0, #0x767a000
0x06A63498: 00a843f9  ldr x0, [x0, #0x750]
0x06A6349C: 5f751c97  bl #0x3180a18
0x06A634A0: 28008052  movz w8, #0x1
0x06A634A4: c8021a39  strb w8, [x22, #0x680]
0x06A634A8: b50900b4  cbz x21, #0x6a635dc
0x06A634AC: ca6000f0  adrp x10, #0x767e000
0x06A634B0: a80240f9  ldr x8, [x21]
0x06A634B4: 4aa542f9  ldr x10, [x10, #0x548]
0x06A634B8: 095d4279  ldrh w9, [x8, #0x12e]
0x06A634BC: 410140f9  ldr x1, [x10]
0x06A634C0: 290100b4  cbz x9, #0x6a634e4
0x06A634C4: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A634C8: 4a210091  add x10, x10, #8
0x06A634CC: 4b815ff8  ldur x11, [x10, #-8]
0x06A634D0: 7f0101eb  cmp x11, x1
0x06A634D4: 00010054  b.eq #0x6a634f4
0x06A634D8: 290500f1  subs x9, x9, #1
0x06A634DC: 4a410091  add x10, x10, #0x10
0x06A634E0: 61ffff54  b.ne #0x6a634cc
0x06A634E4: 42038052  movz w2, #0x1a
0x06A634E8: e00315aa  mov x0, x21
0x06A634EC: 89cd1b97  bl #0x3156b10
0x06A634F0: 05000014  b #0x6a63504
0x06A634F4: 490140b9  ldr w9, [x10]
0x06A634F8: 29690011  add w9, w9, #0x1a
0x06A634FC: 08d1298b  add x8, x8, w9, sxtw #4
0x06A63500: 00e10491  add x0, x8, #0x138
0x06A63504: 080440a9  ldp x8, x1, [x0]
0x06A63508: e00315aa  mov x0, x21
0x06A6350C: 00013fd6  blr x8
0x06A63510: 600000b4  cbz x0, #0x6a6351c
0x06A63514: 153840f9  ldr x21, [x0, #0x70]
0x06A63518: 02000014  b #0x6a63520
0x06A6351C: f5031faa  mov x21, xzr
0x06A63520: e00313aa  mov x0, x19
0x06A63524: e10314aa  mov x1, x20
0x06A63528: 6bffff97  bl #0x6a632d4
0x06A6352C: 741e40f9  ldr x20, [x19, #0x38]
0x06A63530: 740500b4  cbz x20, #0x6a635dc
0x06A63534: aa6000f0  adrp x10, #0x767a000
0x06A63538: 880240f9  ldr x8, [x20]
0x06A6353C: 4aa943f9  ldr x10, [x10, #0x750]
0x06A63540: 081ca04e  mov v8.16b, v0.16b
0x06A63544: 095d4279  ldrh w9, [x8, #0x12e]
0x06A63548: 410140f9  ldr x1, [x10]
0x06A6354C: 290100b4  cbz x9, #0x6a63570
0x06A63550: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A63554: 4a210091  add x10, x10, #8
0x06A63558: 4b815ff8  ldur x11, [x10, #-8]
0x06A6355C: 7f0101eb  cmp x11, x1
0x06A63560: 00010054  b.eq #0x6a63580
0x06A63564: 290500f1  subs x9, x9, #1
0x06A63568: 4a410091  add x10, x10, #0x10
0x06A6356C: 61ffff54  b.ne #0x6a63558
0x06A63570: 62088052  movz w2, #0x43
0x06A63574: e00314aa  mov x0, x20
0x06A63578: 66cd1b97  bl #0x3156b10
0x06A6357C: 05000014  b #0x6a63590
0x06A63580: 490140b9  ldr w9, [x10]
0x06A63584: 290d0111  add w9, w9, #0x43
0x06A63588: 08d1298b  add x8, x8, w9, sxtw #4
0x06A6358C: 00e10491  add x0, x8, #0x138
0x06A63590: 080440a9  ldp x8, x1, [x0]
0x06A63594: e00314aa  mov x0, x20
0x06A63598: 00013fd6  blr x8
0x06A6359C: 350100b4  cbz x21, #0x6a635c0
0x06A635A0: 00010036  tbz w0, #0, #0x6a635c0
0x06A635A4: e10315aa  mov x1, x21
0x06A635A8: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A635AC: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A635B0: fe0740f9  ldr x30, [sp, #8]
0x06A635B4: 001da84e  mov v0.16b, v8.16b
0x06A635B8: e80743fc  ldr d8, [sp], #0x30
0x06A635BC: 09000014  b #0x6a635e0
0x06A635C0: e00313aa  mov x0, x19
0x06A635C4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A635C8: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A635CC: fe0740f9  ldr x30, [sp, #8]
0x06A635D0: 001da84e  mov v0.16b, v8.16b
0x06A635D4: e80743fc  ldr d8, [sp], #0x30
0x06A635D8: 40000014  b #0x6a636d8
0x06A635DC: b4751c97  bl #0x3180cac

; RVA 0x6A635E0 | private ResourceMultiple CalculatePriceWithSkipCooldownSettings(double timeLeft, SkipCooldownSettings skipCooldownSettings) { }
; bytes=248 sha256=874542dcb20b7e878bcd12ec884111621ed89c58c80da18d3e0bd72f36b66004 status=arm64_complete_bound indexed_start=True
0x06A635E0: e80f1dfc  str d8, [sp, #-0x30]!
0x06A635E4: fe5701a9  stp x30, x21, [sp, #0x10]
0x06A635E8: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A635EC: 349600f0  adrp x20, #0x7d2a000
0x06A635F0: 88065a39  ldrb w8, [x20, #0x681]
0x06A635F4: f30301aa  mov x19, x1
0x06A635F8: 081ca04e  mov v8.16b, v0.16b
0x06A635FC: c8000037  tbnz w8, #0, #0x6a63614
0x06A63600: 606000d0  adrp x0, #0x7671000
0x06A63604: 00a047f9  ldr x0, [x0, #0xf40]
0x06A63608: 04751c97  bl #0x3180a18
0x06A6360C: 28008052  movz w8, #0x1
0x06A63610: 88061a39  strb w8, [x20, #0x681]
0x06A63614: f30500b4  cbz x19, #0x6a636d0
0x06A63618: 690e40f9  ldr x9, [x19, #0x18]
0x06A6361C: a90500b4  cbz x9, #0x6a636d0
0x06A63620: 2a1940b9  ldr w10, [x9, #0x18]
0x06A63624: 686000d0  adrp x8, #0x7671000
0x06A63628: 08a147f9  ldr x8, [x8, #0xf40]
0x06A6362C: 5f050071  cmp w10, #1
0x06A63630: cb010054  b.lt #0x6a63668
0x06A63634: eb031f2a  mov w11, wzr
0x06A63638: 5f010b6b  cmp w10, w11
0x06A6363C: c0040054  b.eq #0x6a636d4
0x06A63640: 2ccd2b8b  add x12, x9, w11, sxtw #3
0x06A63644: 8c1140f9  ldr x12, [x12, #0x20]
0x06A63648: 4c0400b4  cbz x12, #0x6a636d0
0x06A6364C: 801140bd  ldr s0, [x12, #0x10]
0x06A63650: 00c0221e  fcvt d0, s0
0x06A63654: 0020681e  fcmp d0, d8
0x06A63658: c4010054  b.mi #0x6a63690
0x06A6365C: 6b050011  add w11, w11, #1
0x06A63660: 5f010b6b  cmp w10, w11
0x06A63664: a1feff54  b.ne #0x6a63638
0x06A63668: 000140f9  ldr x0, [x8]
0x06A6366C: 8d751c97  bl #0x3180ca0
0x06A63670: 41008052  movz w1, #0x2
0x06A63674: 22008052  movz w2, #0x1
0x06A63678: e3031f2a  mov w3, wzr
0x06A6367C: e4031faa  mov x4, xzr
0x06A63680: f30300aa  mov x19, x0
0x06A63684: 7bf8fe97  bl #0x6a21870
0x06A63688: e00313aa  mov x0, x19
0x06A6368C: 0d000014  b #0x6a636c0
0x06A63690: 890d40f9  ldr x9, [x12, #0x18]
0x06A63694: e90100b4  cbz x9, #0x6a636d0
0x06A63698: 000140f9  ldr x0, [x8]
0x06A6369C: 33514229  ldp w19, w20, [x9, #0x10]
0x06A636A0: 80751c97  bl #0x3180ca0
0x06A636A4: e103132a  mov w1, w19
0x06A636A8: e203142a  mov w2, w20
0x06A636AC: e3031f2a  mov w3, wzr
0x06A636B0: e4031faa  mov x4, xzr
0x06A636B4: f50300aa  mov x21, x0
0x06A636B8: 6ef8fe97  bl #0x6a21870
0x06A636BC: e00315aa  mov x0, x21
0x06A636C0: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A636C4: fe5741a9  ldp x30, x21, [sp, #0x10]
0x06A636C8: e80743fc  ldr d8, [sp], #0x30
0x06A636CC: c0035fd6  ret
0x06A636D0: 77751c97  bl #0x3180cac
0x06A636D4: 78751c97  bl #0x3180cb4

; RVA 0x6A636D8 | private ResourceMultiple CalculatePriceWithCoefficents(double timeleft) { }
; bytes=372 sha256=74ef21cdfde1f400166778e22f6f5f6a95cf5a9d2cf4af342ee1794d61b381aa status=arm64_complete_bound indexed_start=True
0x06A636D8: ea0f1cfc  str d10, [sp, #-0x40]!
0x06A636DC: e923016d  stp d9, d8, [sp, #0x10]
0x06A636E0: fe5702a9  stp x30, x21, [sp, #0x20]
0x06A636E4: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A636E8: 349600f0  adrp x20, #0x7d2a000
0x06A636EC: 880a5a39  ldrb w8, [x20, #0x682]
0x06A636F0: 081ca04e  mov v8.16b, v0.16b
0x06A636F4: f30300aa  mov x19, x0
0x06A636F8: 28010037  tbnz w8, #0, #0x6a6371c
0x06A636FC: 405f00f0  adrp x0, #0x764e000
0x06A63700: 000447f9  ldr x0, [x0, #0xe08]
0x06A63704: c5741c97  bl #0x3180a18
0x06A63708: 606000d0  adrp x0, #0x7671000
0x06A6370C: 00a047f9  ldr x0, [x0, #0xf40]
0x06A63710: c2741c97  bl #0x3180a18
0x06A63714: 28008052  movz w8, #0x1
0x06A63718: 880a1a39  strb w8, [x20, #0x682]
0x06A6371C: e00313aa  mov x0, x19
0x06A63720: 88feff97  bl #0x6a63140
0x06A63724: 200900b4  cbz x0, #0x6a63848
0x06A63728: 091040bd  ldr s9, [x0, #0x10]
0x06A6372C: e00313aa  mov x0, x19
0x06A63730: 84feff97  bl #0x6a63140
0x06A63734: a00800b4  cbz x0, #0x6a63848
0x06A63738: 485f00f0  adrp x8, #0x764e000
0x06A6373C: 080547f9  ldr x8, [x8, #0xe08]
0x06A63740: 0a1440bd  ldr s10, [x0, #0x14]
0x06A63744: 080140f9  ldr x8, [x8]
0x06A63748: 09e140b9  ldr w9, [x8, #0xe0]
0x06A6374C: 69000035  cbnz w9, #0x6a63758
0x06A63750: e00308aa  mov x0, x8
0x06A63754: 0e751c97  bl #0x3180b8c
0x06A63758: 41c1221e  fcvt d1, s10
0x06A6375C: 001da84e  mov v0.16b, v8.16b
0x06A63760: e0031faa  mov x0, xzr
0x06A63764: 25d1b097  bl #0x5697bf8
0x06A63768: 21c1221e  fcvt d1, s9
0x06A6376C: 0808611e  fmul d8, d0, d1
0x06A63770: e0230091  add x0, sp, #8
0x06A63774: 001da84e  mov v0.16b, v8.16b
0x06A63778: 92ac1d94  bl #0x71ce9c0
0x06A6377C: 0821601e  fcmp d8, #0.0
0x06A63780: ea000054  b.ge #0x6a6379c
0x06A63784: 01107c1e  fmov d1, #-0.50000000
0x06A63788: 0020611e  fcmp d0, d1
0x06A6378C: c1010054  b.ne #0x6a637c4
0x06A63790: e00740fd  ldr d0, [sp, #8]
0x06A63794: 01107e1e  fmov d1, #-1.00000000
0x06A63798: 06000014  b #0x6a637b0
0x06A6379C: 01106c1e  fmov d1, #0.50000000
0x06A637A0: 0020611e  fcmp d0, d1
0x06A637A4: 61010054  b.ne #0x6a637d0
0x06A637A8: e00740fd  ldr d0, [sp, #8]
0x06A637AC: 01106e1e  fmov d1, #1.00000000
0x06A637B0: 0800789e  fcvtzs x8, d0
0x06A637B4: 0128611e  fadd d1, d0, d1
0x06A637B8: 1f0140f2  tst x8, #1
0x06A637BC: 000c611e  fcsel d0, d0, d1, eq
0x06A637C0: 06000014  b #0x6a637d8
0x06A637C4: 0029611e  fadd d0, d8, d1
0x06A637C8: 00c0641e  frintp d0, d0
0x06A637CC: 03000014  b #0x6a637d8
0x06A637D0: 0029611e  fadd d0, d8, d1
0x06A637D4: 0040651e  frintm d0, d0
0x06A637D8: 08feefd2  movz x8, #0x7ff0, lsl #48
0x06A637DC: 0101679e  fmov d1, x8
0x06A637E0: 0900781e  fcvtzs w9, d0
0x06A637E4: 0020611e  fcmp d0, d1
0x06A637E8: 0800b052  movz w8, #0x8000, lsl #16
0x06A637EC: e00313aa  mov x0, x19
0x06A637F0: 1401891a  csel w20, w8, w9, eq
0x06A637F4: 53feff97  bl #0x6a63140
0x06A637F8: 800200b4  cbz x0, #0x6a63848
0x06A637FC: 686000d0  adrp x8, #0x7671000
0x06A63800: 08a147f9  ldr x8, [x8, #0xf40]
0x06A63804: 131840b9  ldr w19, [x0, #0x18]
0x06A63808: 9f060071  cmp w20, #1
0x06A6380C: 94c69f1a  csinc w20, w20, wzr, gt
0x06A63810: 000140f9  ldr x0, [x8]
0x06A63814: 23751c97  bl #0x3180ca0
0x06A63818: e103132a  mov w1, w19
0x06A6381C: e203142a  mov w2, w20
0x06A63820: e3031f2a  mov w3, wzr
0x06A63824: e4031faa  mov x4, xzr
0x06A63828: f50300aa  mov x21, x0
0x06A6382C: 11f8fe97  bl #0x6a21870
0x06A63830: e00315aa  mov x0, x21
0x06A63834: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A63838: fe5742a9  ldp x30, x21, [sp, #0x20]
0x06A6383C: e923416d  ldp d9, d8, [sp, #0x10]
0x06A63840: ea0744fc  ldr d10, [sp], #0x40
0x06A63844: c0035fd6  ret
0x06A63848: 19751c97  bl #0x3180cac

; RVA 0x6A6384C | public void .ctor() { }
; bytes=8 sha256=2b949e21b22dac42edd85fdb3af88e58136484ccaa5d9c8c39dbc2ecd242c634 status=arm64_complete_bound indexed_start=True
0x06A6384C: e1031faa  mov x1, xzr
0x06A63850: ab3df917  b #0x68b2efc

