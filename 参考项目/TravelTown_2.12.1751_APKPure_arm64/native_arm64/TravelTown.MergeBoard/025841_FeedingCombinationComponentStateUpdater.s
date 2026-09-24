; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25841 Merger.MergeBoard.Logic.State.Updaters.FeedingCombinationComponentStateUpdater
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A85300 | protected override void UpdateFromState(ref FeedingCombinationComponent component, ItemPayloadBase itemState) { }
; bytes=608 sha256=38d79bfe80b3d5cd2ecd892bd1033a35f893307adf975fd4dad73296d82badfd status=arm64_complete_bound indexed_start=True
0x06A85300: ff8301d1  sub sp, sp, #0x60
0x06A85304: fe6702a9  stp x30, x25, [sp, #0x20]
0x06A85308: f85f03a9  stp x24, x23, [sp, #0x30]
0x06A8530C: f65704a9  stp x22, x21, [sp, #0x40]
0x06A85310: f44f05a9  stp x20, x19, [sp, #0x50]
0x06A85314: 359500b0  adrp x21, #0x7d2a000
0x06A85318: a8325e39  ldrb w8, [x21, #0x78c]
0x06A8531C: f40302aa  mov x20, x2
0x06A85320: f30301aa  mov x19, x1
0x06A85324: 68030037  tbnz w8, #0, #0x6a85390
0x06A85328: 006300b0  adrp x0, #0x76e6000
0x06A8532C: 009442f9  ldr x0, [x0, #0x528]
0x06A85330: baed1b97  bl #0x3180a18
0x06A85334: 006300b0  adrp x0, #0x76e6000
0x06A85338: 009842f9  ldr x0, [x0, #0x530]
0x06A8533C: b7ed1b97  bl #0x3180a18
0x06A85340: 006300b0  adrp x0, #0x76e6000
0x06A85344: 009c42f9  ldr x0, [x0, #0x538]
0x06A85348: b4ed1b97  bl #0x3180a18
0x06A8534C: 60650090  adrp x0, #0x7731000
0x06A85350: 004846f9  ldr x0, [x0, #0xc90]
0x06A85354: b1ed1b97  bl #0x3180a18
0x06A85358: 406500f0  adrp x0, #0x7730000
0x06A8535C: 00d046f9  ldr x0, [x0, #0xda0]
0x06A85360: aeed1b97  bl #0x3180a18
0x06A85364: 006300b0  adrp x0, #0x76e6000
0x06A85368: 00a442f9  ldr x0, [x0, #0x548]
0x06A8536C: abed1b97  bl #0x3180a18
0x06A85370: 60650090  adrp x0, #0x7731000
0x06A85374: 004c46f9  ldr x0, [x0, #0xc98]
0x06A85378: a8ed1b97  bl #0x3180a18
0x06A8537C: 60650090  adrp x0, #0x7731000
0x06A85380: 005046f9  ldr x0, [x0, #0xca0]
0x06A85384: a5ed1b97  bl #0x3180a18
0x06A85388: 28008052  movz w8, #0x1
0x06A8538C: a8321e39  strb w8, [x21, #0x78c]
0x06A85390: ffff00a9  stp xzr, xzr, [sp, #8]
0x06A85394: ff0f00f9  str xzr, [sp, #0x18]
0x06A85398: 540900b4  cbz x20, #0x6a854c0
0x06A8539C: 884e40f9  ldr x8, [x20, #0x98]
0x06A853A0: 080900b4  cbz x8, #0x6a854c0
0x06A853A4: 68650090  adrp x8, #0x7731000
0x06A853A8: 085146f9  ldr x8, [x8, #0xca0]
0x06A853AC: 000140f9  ldr x0, [x8]
0x06A853B0: 3cee1b97  bl #0x3180ca0
0x06A853B4: 68650090  adrp x8, #0x7731000
0x06A853B8: 084d46f9  ldr x8, [x8, #0xc98]
0x06A853BC: f50300aa  mov x21, x0
0x06A853C0: 010140f9  ldr x1, [x8]
0x06A853C4: 1dfa5697  bl #0x4043c38
0x06A853C8: e00313aa  mov x0, x19
0x06A853CC: e10315aa  mov x1, x21
0x06A853D0: 750200f9  str x21, [x19]
0x06A853D4: 7ced1b97  bl #0x31809c4
0x06A853D8: 804e40f9  ldr x0, [x20, #0x98]
0x06A853DC: 200800b4  cbz x0, #0x6a854e0
0x06A853E0: 086300b0  adrp x8, #0x76e6000
0x06A853E4: 08a542f9  ldr x8, [x8, #0x548]
0x06A853E8: 010140f9  ldr x1, [x8]
0x06A853EC: e8230091  add x8, sp, #8
0x06A853F0: 1eff5697  bl #0x4045068
0x06A853F4: 176300b0  adrp x23, #0x76e6000
0x06A853F8: 78650090  adrp x24, #0x7731000
0x06A853FC: 596500f0  adrp x25, #0x7730000
0x06A85400: f79a42f9  ldr x23, [x23, #0x530]
0x06A85404: 184b46f9  ldr x24, [x24, #0xc90]
0x06A85408: 39d346f9  ldr x25, [x25, #0xda0]
0x06A8540C: e10240f9  ldr x1, [x23]
0x06A85410: e0230091  add x0, sp, #8
0x06A85414: 68419697  bl #0x50159b4
0x06A85418: a0040036  tbz w0, #0, #0x6a854ac
0x06A8541C: f60f40f9  ldr x22, [sp, #0x18]
0x06A85420: 740240f9  ldr x20, [x19]
0x06A85424: 000340f9  ldr x0, [x24]
0x06A85428: 1eee1b97  bl #0x3180ca0
0x06A8542C: f50300aa  mov x21, x0
0x06A85430: e1031faa  mov x1, xzr
0x06A85434: 7254b197  bl #0x56da5fc
0x06A85438: e00315aa  mov x0, x21
0x06A8543C: 160c01f8  str x22, [x0, #0x10]!
0x06A85440: e10316aa  mov x1, x22
0x06A85444: 60ed1b97  bl #0x31809c4
0x06A85448: 940400b4  cbz x20, #0x6a854d8
0x06A8544C: 8a1e40b9  ldr w10, [x20, #0x1c]
0x06A85450: 880a40f9  ldr x8, [x20, #0x10]
0x06A85454: 290340f9  ldr x9, [x25]
0x06A85458: 4a050011  add w10, w10, #1
0x06A8545C: 8a1e00b9  str w10, [x20, #0x1c]
0x06A85460: e80300b4  cbz x8, #0x6a854dc
0x06A85464: 8a1a80b9  ldrsw x10, [x20, #0x18]
0x06A85468: 0b1940b9  ldr w11, [x8, #0x18]
0x06A8546C: 5f010b6b  cmp w10, w11
0x06A85470: 02010054  b.hs #0x6a85490
0x06A85474: 49050011  add w9, w10, #1
0x06A85478: 000d0a8b  add x0, x8, x10, lsl #3
0x06A8547C: 891a00b9  str w9, [x20, #0x18]
0x06A85480: 150c02f8  str x21, [x0, #0x20]!
0x06A85484: e10315aa  mov x1, x21
0x06A85488: 4fed1b97  bl #0x31809c4
0x06A8548C: e0ffff17  b #0x6a8540c
0x06A85490: 281140f9  ldr x8, [x9, #0x20]
0x06A85494: 086140f9  ldr x8, [x8, #0xc0]
0x06A85498: 023940f9  ldr x2, [x8, #0x70]
0x06A8549C: e00314aa  mov x0, x20
0x06A854A0: e10315aa  mov x1, x21
0x06A854A4: f2fb5697  bl #0x404446c
0x06A854A8: d9ffff17  b #0x6a8540c
0x06A854AC: 086300b0  adrp x8, #0x76e6000
0x06A854B0: 089542f9  ldr x8, [x8, #0x528]
0x06A854B4: e0230091  add x0, sp, #8
0x06A854B8: 010140f9  ldr x1, [x8]
0x06A854BC: 3d419697  bl #0x50159b0
0x06A854C0: f44f45a9  ldp x20, x19, [sp, #0x50]
0x06A854C4: f65744a9  ldp x22, x21, [sp, #0x40]
0x06A854C8: f85f43a9  ldp x24, x23, [sp, #0x30]
0x06A854CC: fe6742a9  ldp x30, x25, [sp, #0x20]
0x06A854D0: ff830191  add sp, sp, #0x60
0x06A854D4: c0035fd6  ret
0x06A854D8: f5ed1b97  bl #0x3180cac
0x06A854DC: f4ed1b97  bl #0x3180cac
0x06A854E0: f3ed1b97  bl #0x3180cac
0x06A854E4: 02000014  b #0x6a854ec
0x06A854E8: 01000014  b #0x6a854ec
0x06A854EC: f30300aa  mov x19, x0
0x06A854F0: 3f040071  cmp w1, #1
0x06A854F4: a1010054  b.ne #0x6a85528
0x06A854F8: e00313aa  mov x0, x19
0x06A854FC: 05251d94  bl #0x71ce910
0x06A85500: 140040f9  ldr x20, [x0]
0x06A85504: 07251d94  bl #0x71ce920
0x06A85508: 086300b0  adrp x8, #0x76e6000
0x06A8550C: 089542f9  ldr x8, [x8, #0x528]
0x06A85510: e0230091  add x0, sp, #8
0x06A85514: 010140f9  ldr x1, [x8]
0x06A85518: 26419697  bl #0x50159b0
0x06A8551C: 34fdffb4  cbz x20, #0x6a854c0
0x06A85520: e00314aa  mov x0, x20
0x06A85524: e0ed1b97  bl #0x3180ca4
0x06A85528: f4031faa  mov x20, xzr
0x06A8552C: 02000014  b #0x6a85534
0x06A85530: f30300aa  mov x19, x0
0x06A85534: 086300b0  adrp x8, #0x76e6000
0x06A85538: 089542f9  ldr x8, [x8, #0x528]
0x06A8553C: 010140f9  ldr x1, [x8]
0x06A85540: e0230091  add x0, sp, #8
0x06A85544: 1b419697  bl #0x50159b0
0x06A85548: 740000b5  cbnz x20, #0x6a85554
0x06A8554C: e00313aa  mov x0, x19
0x06A85550: 02811f97  bl #0x3265958
0x06A85554: e00314aa  mov x0, x20
0x06A85558: d3ed1b97  bl #0x3180ca4
0x06A8555C: ee0f0e97  bl #0x2e09514

; RVA 0x6A85590 | public void .ctor() { }
; bytes=72 sha256=3ad6773bc326df60c1164db9d6d90fa921dabfa3507c5c772d8fb8bd7bb61c16 status=arm64_complete_bound indexed_start=True
0x06A85590: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A85594: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A85598: 349500b0  adrp x20, #0x7d2a000
0x06A8559C: 75650090  adrp x21, #0x7731000
0x06A855A0: 88365e39  ldrb w8, [x20, #0x78d]
0x06A855A4: b55646f9  ldr x21, [x21, #0xca8]
0x06A855A8: f30300aa  mov x19, x0
0x06A855AC: c8000037  tbnz w8, #0, #0x6a855c4
0x06A855B0: 60650090  adrp x0, #0x7731000
0x06A855B4: 005446f9  ldr x0, [x0, #0xca8]
0x06A855B8: 18ed1b97  bl #0x3180a18
0x06A855BC: 28008052  movz w8, #0x1
0x06A855C0: 88361e39  strb w8, [x20, #0x78d]
0x06A855C4: a10240f9  ldr x1, [x21]
0x06A855C8: e00313aa  mov x0, x19
0x06A855CC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A855D0: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A855D4: 486b8b17  b #0x4d602f4

