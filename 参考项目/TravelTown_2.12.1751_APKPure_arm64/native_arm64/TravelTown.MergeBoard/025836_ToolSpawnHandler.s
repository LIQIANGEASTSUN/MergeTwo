; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25836 Merger.MergeBoard.Logic.ToolSpawnHandler
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A8328C | private float get_ToolsRequiredByMetagameBooster() { }
; bytes=308 sha256=9d8fc7a5c89a3023001c37080c566c2a05c50a220fdaa20b805f928cc5941a9a status=arm64_complete_bound indexed_start=True
0x06A8328C: e80f1efc  str d8, [sp, #-0x20]!
0x06A83290: fe0700f9  str x30, [sp, #8]
0x06A83294: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A83298: 349500f0  adrp x20, #0x7d2a000
0x06A8329C: 88c25d39  ldrb w8, [x20, #0x770]
0x06A832A0: f30300aa  mov x19, x0
0x06A832A4: 28010037  tbnz w8, #0, #0x6a832c8
0x06A832A8: e05f0090  adrp x0, #0x767f000
0x06A832AC: 00a847f9  ldr x0, [x0, #0xf50]
0x06A832B0: daf51b97  bl #0x3180a18
0x06A832B4: 206200b0  adrp x0, #0x76c8000
0x06A832B8: 003c47f9  ldr x0, [x0, #0xe78]
0x06A832BC: d7f51b97  bl #0x3180a18
0x06A832C0: 28008052  movz w8, #0x1
0x06A832C4: 88c21d39  strb w8, [x20, #0x770]
0x06A832C8: 742a40f9  ldr x20, [x19, #0x50]
0x06A832CC: 940700b4  cbz x20, #0x6a833bc
0x06A832D0: ea5f0090  adrp x10, #0x767f000
0x06A832D4: 880240f9  ldr x8, [x20]
0x06A832D8: 4aa947f9  ldr x10, [x10, #0xf50]
0x06A832DC: 095d4279  ldrh w9, [x8, #0x12e]
0x06A832E0: 410140f9  ldr x1, [x10]
0x06A832E4: 290100b4  cbz x9, #0x6a83308
0x06A832E8: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A832EC: 4a210091  add x10, x10, #8
0x06A832F0: 4b815ff8  ldur x11, [x10, #-8]
0x06A832F4: 7f0101eb  cmp x11, x1
0x06A832F8: 00010054  b.eq #0x6a83318
0x06A832FC: 290500f1  subs x9, x9, #1
0x06A83300: 4a410091  add x10, x10, #0x10
0x06A83304: 61ffff54  b.ne #0x6a832f0
0x06A83308: 42018052  movz w2, #0xa
0x06A8330C: e00314aa  mov x0, x20
0x06A83310: 004e1b97  bl #0x3156b10
0x06A83314: 05000014  b #0x6a83328
0x06A83318: 490140b9  ldr w9, [x10]
0x06A8331C: 29290011  add w9, w9, #0xa
0x06A83320: 08d1298b  add x8, x8, w9, sxtw #4
0x06A83324: 00e10491  add x0, x8, #0x138
0x06A83328: 080440a9  ldp x8, x1, [x0]
0x06A8332C: e00314aa  mov x0, x20
0x06A83330: 00013fd6  blr x8
0x06A83334: 400400b4  cbz x0, #0x6a833bc
0x06A83338: 732e40f9  ldr x19, [x19, #0x58]
0x06A8333C: 130400b4  cbz x19, #0x6a833bc
0x06A83340: 2a6200b0  adrp x10, #0x76c8000
0x06A83344: 680240f9  ldr x8, [x19]
0x06A83348: 4a3d47f9  ldr x10, [x10, #0xe78]
0x06A8334C: 08f040bd  ldr s8, [x0, #0xf0]
0x06A83350: 095d4279  ldrh w9, [x8, #0x12e]
0x06A83354: 410140f9  ldr x1, [x10]
0x06A83358: 290100b4  cbz x9, #0x6a8337c
0x06A8335C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A83360: 4a210091  add x10, x10, #8
0x06A83364: 4b815ff8  ldur x11, [x10, #-8]
0x06A83368: 7f0101eb  cmp x11, x1
0x06A8336C: 00010054  b.eq #0x6a8338c
0x06A83370: 290500f1  subs x9, x9, #1
0x06A83374: 4a410091  add x10, x10, #0x10
0x06A83378: 61ffff54  b.ne #0x6a83364
0x06A8337C: 02028052  movz w2, #0x10
0x06A83380: e00313aa  mov x0, x19
0x06A83384: e34d1b97  bl #0x3156b10
0x06A83388: 05000014  b #0x6a8339c
0x06A8338C: 490140b9  ldr w9, [x10]
0x06A83390: 29410011  add w9, w9, #0x10
0x06A83394: 08d1298b  add x8, x8, w9, sxtw #4
0x06A83398: 00e10491  add x0, x8, #0x138
0x06A8339C: 080440a9  ldp x8, x1, [x0]
0x06A833A0: e00313aa  mov x0, x19
0x06A833A4: 00013fd6  blr x8
0x06A833A8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A833AC: fe0740f9  ldr x30, [sp, #8]
0x06A833B0: 0009201e  fmul s0, s8, s0
0x06A833B4: e80742fc  ldr d8, [sp], #0x20
0x06A833B8: c0035fd6  ret
0x06A833BC: 3cf61b97  bl #0x3180cac

; RVA 0x6A833C0 | public PlayerResourceEnum GraphToResource(IMergeGraphItem graph) { }
; bytes=88 sha256=84fee78ebac00df589e9bc5cd417afc6ebdb4afda30266fa072a539eeff45633 status=arm64_complete_bound indexed_start=True
0x06A833C0: fe0f1df8  str x30, [sp, #-0x30]!
0x06A833C4: f65701a9  stp x22, x21, [sp, #0x10]
0x06A833C8: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A833CC: 369500f0  adrp x22, #0x7d2a000
0x06A833D0: 756500d0  adrp x21, #0x7731000
0x06A833D4: c8c65d39  ldrb w8, [x22, #0x771]
0x06A833D8: b5aa45f9  ldr x21, [x21, #0xb50]
0x06A833DC: f30301aa  mov x19, x1
0x06A833E0: f40300aa  mov x20, x0
0x06A833E4: c8000037  tbnz w8, #0, #0x6a833fc
0x06A833E8: 606500d0  adrp x0, #0x7731000
0x06A833EC: 00a845f9  ldr x0, [x0, #0xb50]
0x06A833F0: 8af51b97  bl #0x3180a18
0x06A833F4: 28008052  movz w8, #0x1
0x06A833F8: c8c61d39  strb w8, [x22, #0x771]
0x06A833FC: 803a40f9  ldr x0, [x20, #0x70]
0x06A83400: a20240f9  ldr x2, [x21]
0x06A83404: e10313aa  mov x1, x19
0x06A83408: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A8340C: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A83410: fe0743f8  ldr x30, [sp], #0x30
0x06A83414: 707b4517  b #0x3be21d4

; RVA 0x6A83418 | public IMergeGraphItem ResourceToGraph(PlayerResourceEnum resource) { }
; bytes=88 sha256=916ff0f54808ad9528304d5f33f6ae037250a817b1b5b4555c5da5903dd66705 status=arm64_complete_bound indexed_start=True
0x06A83418: fe0f1df8  str x30, [sp, #-0x30]!
0x06A8341C: f65701a9  stp x22, x21, [sp, #0x10]
0x06A83420: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A83424: 369500f0  adrp x22, #0x7d2a000
0x06A83428: 756500d0  adrp x21, #0x7731000
0x06A8342C: c8ca5d39  ldrb w8, [x22, #0x772]
0x06A83430: b5ae45f9  ldr x21, [x21, #0xb58]
0x06A83434: f303012a  mov w19, w1
0x06A83438: f40300aa  mov x20, x0
0x06A8343C: c8000037  tbnz w8, #0, #0x6a83454
0x06A83440: 606500d0  adrp x0, #0x7731000
0x06A83444: 00ac45f9  ldr x0, [x0, #0xb58]
0x06A83448: 74f51b97  bl #0x3180a18
0x06A8344C: 28008052  movz w8, #0x1
0x06A83450: c8ca1d39  strb w8, [x22, #0x772]
0x06A83454: 803e40f9  ldr x0, [x20, #0x78]
0x06A83458: a20240f9  ldr x2, [x21]
0x06A8345C: e103132a  mov w1, w19
0x06A83460: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A83464: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A83468: fe0743f8  ldr x30, [sp], #0x30
0x06A8346C: 387b4517  b #0x3be214c

; RVA 0x6A83470 | public void Initialize() { }
; bytes=572 sha256=5d21e07da754aae004f369d2003451677997748c35e9ff0bf76c3a0ae7b83d2c status=arm64_complete_bound indexed_start=True
0x06A83470: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x06A83474: fc6f01a9  stp x28, x27, [sp, #0x10]
0x06A83478: fa6702a9  stp x26, x25, [sp, #0x20]
0x06A8347C: f85f03a9  stp x24, x23, [sp, #0x30]
0x06A83480: f65704a9  stp x22, x21, [sp, #0x40]
0x06A83484: f44f05a9  stp x20, x19, [sp, #0x50]
0x06A83488: 359500f0  adrp x21, #0x7d2a000
0x06A8348C: f4610090  adrp x20, #0x76bf000
0x06A83490: a8ce5d39  ldrb w8, [x21, #0x773]
0x06A83494: 944644f9  ldr x20, [x20, #0x888]
0x06A83498: f30300aa  mov x19, x0
0x06A8349C: a8020037  tbnz w8, #0, #0x6a834f0
0x06A834A0: e05f0090  adrp x0, #0x767f000
0x06A834A4: 00ac47f9  ldr x0, [x0, #0xf58]
0x06A834A8: 5cf51b97  bl #0x3180a18
0x06A834AC: e05f0090  adrp x0, #0x767f000
0x06A834B0: 00b047f9  ldr x0, [x0, #0xf60]
0x06A834B4: 59f51b97  bl #0x3180a18
0x06A834B8: 805f0090  adrp x0, #0x7673000
0x06A834BC: 007c40f9  ldr x0, [x0, #0xf8]
0x06A834C0: 56f51b97  bl #0x3180a18
0x06A834C4: a05f00d0  adrp x0, #0x7679000
0x06A834C8: 000c44f9  ldr x0, [x0, #0x818]
0x06A834CC: 53f51b97  bl #0x3180a18
0x06A834D0: e0610090  adrp x0, #0x76bf000
0x06A834D4: 004444f9  ldr x0, [x0, #0x888]
0x06A834D8: 50f51b97  bl #0x3180a18
0x06A834DC: 805f0090  adrp x0, #0x7673000
0x06A834E0: 005c40f9  ldr x0, [x0, #0xb8]
0x06A834E4: 4df51b97  bl #0x3180a18
0x06A834E8: 28008052  movz w8, #0x1
0x06A834EC: a8ce1d39  strb w8, [x21, #0x773]
0x06A834F0: 800240f9  ldr x0, [x20]
0x06A834F4: 08e040b9  ldr w8, [x0, #0xe0]
0x06A834F8: 68000035  cbnz w8, #0x6a83504
0x06A834FC: a4f51b97  bl #0x3180b8c
0x06A83500: 800240f9  ldr x0, [x20]
0x06A83504: 085c40f9  ldr x8, [x0, #0xb8]
0x06A83508: 170140f9  ldr x23, [x8]
0x06A8350C: d70c00b4  cbz x23, #0x6a836a4
0x06A83510: e80e40f9  ldr x8, [x23, #0x18]
0x06A83514: 1f050071  cmp w8, #1
0x06A83518: 8b0b0054  b.lt #0x6a83688
0x06A8351C: 995f0090  adrp x25, #0x7673000
0x06A83520: ba5f00d0  adrp x26, #0x7679000
0x06A83524: 9b5f0090  adrp x27, #0x7673000
0x06A83528: fc5f0090  adrp x28, #0x767f000
0x06A8352C: fd5f0090  adrp x29, #0x767f000
0x06A83530: 395f40f9  ldr x25, [x25, #0xb8]
0x06A83534: 5a0f44f9  ldr x26, [x26, #0x818]
0x06A83538: 7b7f40f9  ldr x27, [x27, #0xf8]
0x06A8353C: 9caf47f9  ldr x28, [x28, #0xf58]
0x06A83540: bdb347f9  ldr x29, [x29, #0xf60]
0x06A83544: f8031faa  mov x24, xzr
0x06A83548: 087d4092  and x8, x8, #0xffffffff
0x06A8354C: 1f4328eb  cmp x24, w8, uxtw
0x06A83550: c20a0054  b.hs #0x6a836a8
0x06A83554: 200340f9  ldr x0, [x25]
0x06A83558: e80a188b  add x8, x23, x24, lsl #2
0x06A8355C: 142140b9  ldr w20, [x8, #0x20]
0x06A83560: 751640f9  ldr x21, [x19, #0x28]
0x06A83564: 08e040b9  ldr w8, [x0, #0xe0]
0x06A83568: 48000035  cbnz w8, #0x6a83570
0x06A8356C: 88f51b97  bl #0x3180b8c
0x06A83570: e003142a  mov w0, w20
0x06A83574: e1031faa  mov x1, xzr
0x06A83578: 6a25db97  bl #0x614cb20
0x06A8357C: 400900b4  cbz x0, #0x6a836a4
0x06A83580: 080040f9  ldr x8, [x0]
0x06A83584: 410340f9  ldr x1, [x26]
0x06A83588: f60300aa  mov x22, x0
0x06A8358C: 095d4279  ldrh w9, [x8, #0x12e]
0x06A83590: 290100b4  cbz x9, #0x6a835b4
0x06A83594: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A83598: 4a210091  add x10, x10, #8
0x06A8359C: 4b815ff8  ldur x11, [x10, #-8]
0x06A835A0: 7f0101eb  cmp x11, x1
0x06A835A4: 00010054  b.eq #0x6a835c4
0x06A835A8: 290500f1  subs x9, x9, #1
0x06A835AC: 4a410091  add x10, x10, #0x10
0x06A835B0: 61ffff54  b.ne #0x6a8359c
0x06A835B4: e00316aa  mov x0, x22
0x06A835B8: e2031f2a  mov w2, wzr
0x06A835BC: 554d1b97  bl #0x3156b10
0x06A835C0: 04000014  b #0x6a835d0
0x06A835C4: 490180b9  ldrsw x9, [x10]
0x06A835C8: 0811098b  add x8, x8, x9, lsl #4
0x06A835CC: 00e10491  add x0, x8, #0x138
0x06A835D0: 080440a9  ldp x8, x1, [x0]
0x06A835D4: e00316aa  mov x0, x22
0x06A835D8: 00013fd6  blr x8
0x06A835DC: 550600b4  cbz x21, #0x6a836a4
0x06A835E0: a80240f9  ldr x8, [x21]
0x06A835E4: 610340f9  ldr x1, [x27]
0x06A835E8: f60300aa  mov x22, x0
0x06A835EC: 095d4279  ldrh w9, [x8, #0x12e]
0x06A835F0: 290100b4  cbz x9, #0x6a83614
0x06A835F4: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A835F8: 4a210091  add x10, x10, #8
0x06A835FC: 4b815ff8  ldur x11, [x10, #-8]
0x06A83600: 7f0101eb  cmp x11, x1
0x06A83604: 00010054  b.eq #0x6a83624
0x06A83608: 290500f1  subs x9, x9, #1
0x06A8360C: 4a410091  add x10, x10, #0x10
0x06A83610: 61ffff54  b.ne #0x6a835fc
0x06A83614: e00315aa  mov x0, x21
0x06A83618: e2031f2a  mov w2, wzr
0x06A8361C: 3d4d1b97  bl #0x3156b10
0x06A83620: 04000014  b #0x6a83630
0x06A83624: 490180b9  ldrsw x9, [x10]
0x06A83628: 0811098b  add x8, x8, x9, lsl #4
0x06A8362C: 00e10491  add x0, x8, #0x138
0x06A83630: 080840a9  ldp x8, x2, [x0]
0x06A83634: e00315aa  mov x0, x21
0x06A83638: e10316aa  mov x1, x22
0x06A8363C: 00013fd6  blr x8
0x06A83640: 683a40f9  ldr x8, [x19, #0x70]
0x06A83644: 080300b4  cbz x8, #0x6a836a4
0x06A83648: 830340f9  ldr x3, [x28]
0x06A8364C: f50300aa  mov x21, x0
0x06A83650: e00308aa  mov x0, x8
0x06A83654: e10315aa  mov x1, x21
0x06A83658: e203142a  mov w2, w20
0x06A8365C: 7fc99097  bl #0x4eb5c58
0x06A83660: 603e40f9  ldr x0, [x19, #0x78]
0x06A83664: 000200b4  cbz x0, #0x6a836a4
0x06A83668: a30340f9  ldr x3, [x29]
0x06A8366C: e103142a  mov w1, w20
0x06A83670: e20315aa  mov x2, x21
0x06A83674: 0c7a8f97  bl #0x4e61ea4
0x06A83678: e81a40b9  ldr w8, [x23, #0x18]
0x06A8367C: 18070091  add x24, x24, #1
0x06A83680: 1fc328eb  cmp x24, w8, sxtw
0x06A83684: 4bf6ff54  b.lt #0x6a8354c
0x06A83688: f44f45a9  ldp x20, x19, [sp, #0x50]
0x06A8368C: f65744a9  ldp x22, x21, [sp, #0x40]
0x06A83690: f85f43a9  ldp x24, x23, [sp, #0x30]
0x06A83694: fa6742a9  ldp x26, x25, [sp, #0x20]
0x06A83698: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x06A8369C: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x06A836A0: c0035fd6  ret
0x06A836A4: 82f51b97  bl #0x3180cac
0x06A836A8: 83f51b97  bl #0x3180cb4

; RVA 0x6A836AC | public Dictionary<PlayerResourceEnum, ToolProgressionData> GetToolProgressionData(IEnumerable<string> unlockedItemsOnBoard) { }
; bytes=576 sha256=763548d845e08f7a76e06ce1683f8032b31943e9113f87ace0cc4ce4267684eb status=arm64_complete_bound indexed_start=True
0x06A836AC: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x06A836B0: fc6f01a9  stp x28, x27, [sp, #0x10]
0x06A836B4: fa6702a9  stp x26, x25, [sp, #0x20]
0x06A836B8: f85f03a9  stp x24, x23, [sp, #0x30]
0x06A836BC: f65704a9  stp x22, x21, [sp, #0x40]
0x06A836C0: f44f05a9  stp x20, x19, [sp, #0x50]
0x06A836C4: 379500f0  adrp x23, #0x7d2a000
0x06A836C8: 786500d0  adrp x24, #0x7731000
0x06A836CC: 756500d0  adrp x21, #0x7731000
0x06A836D0: f6610090  adrp x22, #0x76bf000
0x06A836D4: e8d25d39  ldrb w8, [x23, #0x774]
0x06A836D8: 18b345f9  ldr x24, [x24, #0xb60]
0x06A836DC: b5b645f9  ldr x21, [x21, #0xb68]
0x06A836E0: d64644f9  ldr x22, [x22, #0x888]
0x06A836E4: f30301aa  mov x19, x1
0x06A836E8: f40300aa  mov x20, x0
0x06A836EC: 08030037  tbnz w8, #0, #0x6a8374c
0x06A836F0: 606500d0  adrp x0, #0x7731000
0x06A836F4: 00b445f9  ldr x0, [x0, #0xb68]
0x06A836F8: c8f41b97  bl #0x3180a18
0x06A836FC: 606400b0  adrp x0, #0x7710000
0x06A83700: 009043f9  ldr x0, [x0, #0x720]
0x06A83704: c5f41b97  bl #0x3180a18
0x06A83708: 606500d0  adrp x0, #0x7731000
0x06A8370C: 00b845f9  ldr x0, [x0, #0xb70]
0x06A83710: c2f41b97  bl #0x3180a18
0x06A83714: 606500d0  adrp x0, #0x7731000
0x06A83718: 00b045f9  ldr x0, [x0, #0xb60]
0x06A8371C: bff41b97  bl #0x3180a18
0x06A83720: 006400f0  adrp x0, #0x7706000
0x06A83724: 004c44f9  ldr x0, [x0, #0x898]
0x06A83728: bcf41b97  bl #0x3180a18
0x06A8372C: e0610090  adrp x0, #0x76bf000
0x06A83730: 004444f9  ldr x0, [x0, #0x888]
0x06A83734: b9f41b97  bl #0x3180a18
0x06A83738: 606500d0  adrp x0, #0x7731000
0x06A8373C: 00bc45f9  ldr x0, [x0, #0xb78]
0x06A83740: b6f41b97  bl #0x3180a18
0x06A83744: 28008052  movz w8, #0x1
0x06A83748: e8d21d39  strb w8, [x23, #0x774]
0x06A8374C: 000340f9  ldr x0, [x24]
0x06A83750: 54f51b97  bl #0x3180ca0
0x06A83754: a10240f9  ldr x1, [x21]
0x06A83758: f50300aa  mov x21, x0
0x06A8375C: 53768f97  bl #0x4e610a8
0x06A83760: c00240f9  ldr x0, [x22]
0x06A83764: 08e040b9  ldr w8, [x0, #0xe0]
0x06A83768: 68000035  cbnz w8, #0x6a83774
0x06A8376C: 08f51b97  bl #0x3180b8c
0x06A83770: c00240f9  ldr x0, [x22]
0x06A83774: 085c40f9  ldr x8, [x0, #0xb8]
0x06A83778: 1b0140f9  ldr x27, [x8]
0x06A8377C: 5b0b00b4  cbz x27, #0x6a838e4
0x06A83780: 680f40f9  ldr x8, [x27, #0x18]
0x06A83784: 1f050071  cmp w8, #1
0x06A83788: eb090054  b.lt #0x6a838c4
0x06A8378C: 7d6500d0  adrp x29, #0x7731000
0x06A83790: bdbb45f9  ldr x29, [x29, #0xb70]
0x06A83794: fc031faa  mov x28, xzr
0x06A83798: 087d4092  and x8, x8, #0xffffffff
0x06A8379C: 9f4328eb  cmp x28, w8, uxtw
0x06A837A0: 420a0054  b.hs #0x6a838e8
0x06A837A4: 803e40f9  ldr x0, [x20, #0x78]
0x06A837A8: e00900b4  cbz x0, #0x6a838e4
0x06A837AC: 680b1c8b  add x8, x27, x28, lsl #2
0x06A837B0: 162140b9  ldr w22, [x8, #0x20]
0x06A837B4: 686400b0  adrp x8, #0x7710000
0x06A837B8: 089143f9  ldr x8, [x8, #0x720]
0x06A837BC: e103162a  mov w1, w22
0x06A837C0: 020140f9  ldr x2, [x8]
0x06A837C4: 90798f97  bl #0x4e61e04
0x06A837C8: f90300aa  mov x25, x0
0x06A837CC: e00314aa  mov x0, x20
0x06A837D0: e10319aa  mov x1, x25
0x06A837D4: 46000094  bl #0x6a838ec
0x06A837D8: f703002a  mov w23, w0
0x06A837DC: e00314aa  mov x0, x20
0x06A837E0: e10319aa  mov x1, x25
0x06A837E4: e20313aa  mov x2, x19
0x06A837E8: 71000094  bl #0x6a839ac
0x06A837EC: 9a3240f9  ldr x26, [x20, #0x60]
0x06A837F0: ba0700b4  cbz x26, #0x6a838e4
0x06A837F4: 480340f9  ldr x8, [x26]
0x06A837F8: 0a6400f0  adrp x10, #0x7706000
0x06A837FC: f803002a  mov w24, w0
0x06A83800: 095d4279  ldrh w9, [x8, #0x12e]
0x06A83804: 4a4d44f9  ldr x10, [x10, #0x898]
0x06A83808: 410140f9  ldr x1, [x10]
0x06A8380C: 290100b4  cbz x9, #0x6a83830
0x06A83810: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A83814: 4a210091  add x10, x10, #8
0x06A83818: 4b815ff8  ldur x11, [x10, #-8]
0x06A8381C: 7f0101eb  cmp x11, x1
0x06A83820: 00010054  b.eq #0x6a83840
0x06A83824: 290500f1  subs x9, x9, #1
0x06A83828: 4a410091  add x10, x10, #0x10
0x06A8382C: 61ffff54  b.ne #0x6a83818
0x06A83830: 22008052  movz w2, #0x1
0x06A83834: e0031aaa  mov x0, x26
0x06A83838: b64c1b97  bl #0x3156b10
0x06A8383C: 05000014  b #0x6a83850
0x06A83840: 490140b9  ldr w9, [x10]
0x06A83844: 29050011  add w9, w9, #1
0x06A83848: 08d1298b  add x8, x8, w9, sxtw #4
0x06A8384C: 00e10491  add x0, x8, #0x138
0x06A83850: 080840a9  ldp x8, x2, [x0]
0x06A83854: e0031aaa  mov x0, x26
0x06A83858: e103162a  mov w1, w22
0x06A8385C: 00013fd6  blr x8
0x06A83860: e00319aa  mov x0, x25
0x06A83864: e1031faa  mov x1, xzr
0x06A83868: 82d6df97  bl #0x6279270
0x06A8386C: 686500d0  adrp x8, #0x7731000
0x06A83870: 08bd45f9  ldr x8, [x8, #0xb78]
0x06A83874: fa03002a  mov w26, w0
0x06A83878: 080140f9  ldr x8, [x8]
0x06A8387C: e00308aa  mov x0, x8
0x06A83880: 08f51b97  bl #0x3180ca0
0x06A83884: e1031faa  mov x1, xzr
0x06A83888: f90300aa  mov x25, x0
0x06A8388C: 3d5a0094  bl #0x6a9a180
0x06A83890: b90200b4  cbz x25, #0x6a838e4
0x06A83894: 4803180b  add w8, w26, w24
0x06A83898: 285f0229  stp w8, w23, [x25, #0x10]
0x06A8389C: 550200b4  cbz x21, #0x6a838e4
0x06A838A0: a30340f9  ldr x3, [x29]
0x06A838A4: e00315aa  mov x0, x21
0x06A838A8: e103162a  mov w1, w22
0x06A838AC: e20319aa  mov x2, x25
0x06A838B0: 78798f97  bl #0x4e61e90
0x06A838B4: 681b40b9  ldr w8, [x27, #0x18]
0x06A838B8: 9c070091  add x28, x28, #1
0x06A838BC: 9fc328eb  cmp x28, w8, sxtw
0x06A838C0: ebf6ff54  b.lt #0x6a8379c
0x06A838C4: e00315aa  mov x0, x21
0x06A838C8: f44f45a9  ldp x20, x19, [sp, #0x50]
0x06A838CC: f65744a9  ldp x22, x21, [sp, #0x40]
0x06A838D0: f85f43a9  ldp x24, x23, [sp, #0x30]
0x06A838D4: fa6742a9  ldp x26, x25, [sp, #0x20]
0x06A838D8: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x06A838DC: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x06A838E0: c0035fd6  ret
0x06A838E4: f2f41b97  bl #0x3180cac
0x06A838E8: f3f41b97  bl #0x3180cb4

; RVA 0x6A83BE0 | public IMergeItem GetToolToSpawn(Dictionary<PlayerResourceEnum, ToolProgressionData> toolsProgressionData, List<WeightedTool> availableToolsToSpawn, List<WeightedToolLevel> toolLevelWeights) { }
; bytes=252 sha256=af0afc23d0fae06a4ecd675f11d74af1b23e089a39b8a27724deda93ec241b1a status=arm64_complete_bound indexed_start=True
0x06A83BE0: ff0301d1  sub sp, sp, #0x40
0x06A83BE4: fe5f01a9  stp x30, x23, [sp, #0x10]
0x06A83BE8: f65702a9  stp x22, x21, [sp, #0x20]
0x06A83BEC: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A83BF0: 379500f0  adrp x23, #0x7d2a000
0x06A83BF4: e8d65d39  ldrb w8, [x23, #0x775]
0x06A83BF8: f30303aa  mov x19, x3
0x06A83BFC: f60302aa  mov x22, x2
0x06A83C00: f50301aa  mov x21, x1
0x06A83C04: f40300aa  mov x20, x0
0x06A83C08: 28010037  tbnz w8, #0, #0x6a83c2c
0x06A83C0C: 606500d0  adrp x0, #0x7731000
0x06A83C10: 00d445f9  ldr x0, [x0, #0xba8]
0x06A83C14: 81f31b97  bl #0x3180a18
0x06A83C18: 606400b0  adrp x0, #0x7710000
0x06A83C1C: 009043f9  ldr x0, [x0, #0x720]
0x06A83C20: 7ef31b97  bl #0x3180a18
0x06A83C24: 28008052  movz w8, #0x1
0x06A83C28: e8d61d39  strb w8, [x23, #0x775]
0x06A83C2C: e00314aa  mov x0, x20
0x06A83C30: e10316aa  mov x1, x22
0x06A83C34: e20315aa  mov x2, x21
0x06A83C38: ff0700f9  str xzr, [sp, #8]
0x06A83C3C: 28000094  bl #0x6a83cdc
0x06A83C40: 883e40f9  ldr x8, [x20, #0x78]
0x06A83C44: a80400b4  cbz x8, #0x6a83cd8
0x06A83C48: 696400b0  adrp x9, #0x7710000
0x06A83C4C: 299143f9  ldr x9, [x9, #0x720]
0x06A83C50: f703002a  mov w23, w0
0x06A83C54: e00308aa  mov x0, x8
0x06A83C58: e103172a  mov w1, w23
0x06A83C5C: 220140f9  ldr x2, [x9]
0x06A83C60: 69788f97  bl #0x4e61e04
0x06A83C64: b50300b4  cbz x21, #0x6a83cd8
0x06A83C68: 686500d0  adrp x8, #0x7731000
0x06A83C6C: 08d545f9  ldr x8, [x8, #0xba8]
0x06A83C70: f60300aa  mov x22, x0
0x06A83C74: e2230091  add x2, sp, #8
0x06A83C78: e00315aa  mov x0, x21
0x06A83C7C: 030140f9  ldr x3, [x8]
0x06A83C80: e103172a  mov w1, w23
0x06A83C84: 2c7f8f97  bl #0x4e63934
0x06A83C88: e00740f9  ldr x0, [sp, #8]
0x06A83C8C: 400100b4  cbz x0, #0x6a83cb4
0x06A83C90: e1031faa  mov x1, xzr
0x06A83C94: 37040094  bl #0x6a84d70
0x06A83C98: 1f040071  cmp w0, #1
0x06A83C9C: cb000054  b.lt #0x6a83cb4
0x06A83CA0: e20740f9  ldr x2, [sp, #8]
0x06A83CA4: e00314aa  mov x0, x20
0x06A83CA8: e10313aa  mov x1, x19
0x06A83CAC: a8000094  bl #0x6a83f4c
0x06A83CB0: f30300aa  mov x19, x0
0x06A83CB4: e00314aa  mov x0, x20
0x06A83CB8: e10313aa  mov x1, x19
0x06A83CBC: e20316aa  mov x2, x22
0x06A83CC0: ea000094  bl #0x6a84068
0x06A83CC4: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A83CC8: f65742a9  ldp x22, x21, [sp, #0x20]
0x06A83CCC: fe5f41a9  ldp x30, x23, [sp, #0x10]
0x06A83CD0: ff030191  add sp, sp, #0x40
0x06A83CD4: c0035fd6  ret
0x06A83CD8: f5f31b97  bl #0x3180cac

; RVA 0x6A8433C | public int CalculateMergeValue(int itemLevel) { }
; bytes=16 sha256=7e902c4a8d15d3645b5656193b494f7290b22d329c8f29081b6ff445f67b2a02 status=arm64_complete_bound indexed_start=True
0x06A8433C: 28040051  sub w8, w1, #1
0x06A84340: 29008052  movz w9, #0x1
0x06A84344: 2021c81a  lsl w0, w9, w8
0x06A84348: c0035fd6  ret

; RVA 0x6A83CDC | private PlayerResourceEnum SelectRandomWeightedTool(List<WeightedTool> availableToolsToSpawn, Dictionary<PlayerResourceEnum, ToolProgressionData> toolsProgressionOnBoard) { }
; bytes=624 sha256=8ede874cd7a23da412ee65772cbf75654ce621f0954178119ece14530df19fca status=arm64_complete_bound indexed_start=True
0x06A83CDC: fe67bca9  stp x30, x25, [sp, #-0x40]!
0x06A83CE0: f85f01a9  stp x24, x23, [sp, #0x10]
0x06A83CE4: f65702a9  stp x22, x21, [sp, #0x20]
0x06A83CE8: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A83CEC: 369500f0  adrp x22, #0x7d2a000
0x06A83CF0: 786500d0  adrp x24, #0x7731000
0x06A83CF4: c8da5d39  ldrb w8, [x22, #0x776]
0x06A83CF8: 18db45f9  ldr x24, [x24, #0xbb0]
0x06A83CFC: f50302aa  mov x21, x2
0x06A83D00: f40301aa  mov x20, x1
0x06A83D04: f30300aa  mov x19, x0
0x06A83D08: 68030037  tbnz w8, #0, #0x6a83d74
0x06A83D0C: e05f00b0  adrp x0, #0x7680000
0x06A83D10: 006040f9  ldr x0, [x0, #0xc0]
0x06A83D14: 41f31b97  bl #0x3180a18
0x06A83D18: e05f00b0  adrp x0, #0x7680000
0x06A83D1C: 006440f9  ldr x0, [x0, #0xc8]
0x06A83D20: 3ef31b97  bl #0x3180a18
0x06A83D24: e05f00b0  adrp x0, #0x7680000
0x06A83D28: 006840f9  ldr x0, [x0, #0xd0]
0x06A83D2C: 3bf31b97  bl #0x3180a18
0x06A83D30: 606500d0  adrp x0, #0x7731000
0x06A83D34: 00dc45f9  ldr x0, [x0, #0xbb8]
0x06A83D38: 38f31b97  bl #0x3180a18
0x06A83D3C: 606500d0  adrp x0, #0x7731000
0x06A83D40: 00e045f9  ldr x0, [x0, #0xbc0]
0x06A83D44: 35f31b97  bl #0x3180a18
0x06A83D48: 606500d0  adrp x0, #0x7731000
0x06A83D4C: 00d845f9  ldr x0, [x0, #0xbb0]
0x06A83D50: 32f31b97  bl #0x3180a18
0x06A83D54: e05f00b0  adrp x0, #0x7680000
0x06A83D58: 006c40f9  ldr x0, [x0, #0xd8]
0x06A83D5C: 2ff31b97  bl #0x3180a18
0x06A83D60: e05f00b0  adrp x0, #0x7680000
0x06A83D64: 007040f9  ldr x0, [x0, #0xe0]
0x06A83D68: 2cf31b97  bl #0x3180a18
0x06A83D6C: 28008052  movz w8, #0x1
0x06A83D70: c8da1d39  strb w8, [x22, #0x776]
0x06A83D74: e00313aa  mov x0, x19
0x06A83D78: e10314aa  mov x1, x20
0x06A83D7C: e20315aa  mov x2, x21
0x06A83D80: 73010094  bl #0x6a8434c
0x06A83D84: f40300aa  mov x20, x0
0x06A83D88: e00313aa  mov x0, x19
0x06A83D8C: e10315aa  mov x1, x21
0x06A83D90: 9b010094  bl #0x6a843fc
0x06A83D94: e20300aa  mov x2, x0
0x06A83D98: e00313aa  mov x0, x19
0x06A83D9C: e10314aa  mov x1, x20
0x06A83DA0: 35020094  bl #0x6a84674
0x06A83DA4: 000340f9  ldr x0, [x24]
0x06A83DA8: 08e040b9  ldr w8, [x0, #0xe0]
0x06A83DAC: 68000035  cbnz w8, #0x6a83db8
0x06A83DB0: 77f31b97  bl #0x3180b8c
0x06A83DB4: 000340f9  ldr x0, [x24]
0x06A83DB8: 085c40f9  ldr x8, [x0, #0xb8]
0x06A83DBC: 150540f9  ldr x21, [x8, #8]
0x06A83DC0: 150300b5  cbnz x21, #0x6a83e20
0x06A83DC4: 08e040b9  ldr w8, [x0, #0xe0]
0x06A83DC8: 68000035  cbnz w8, #0x6a83dd4
0x06A83DCC: 70f31b97  bl #0x3180b8c
0x06A83DD0: 000340f9  ldr x0, [x24]
0x06A83DD4: e95f00b0  adrp x9, #0x7680000
0x06A83DD8: 085c40f9  ldr x8, [x0, #0xb8]
0x06A83DDC: 296140f9  ldr x9, [x9, #0xc0]
0x06A83DE0: 160140f9  ldr x22, [x8]
0x06A83DE4: 200140f9  ldr x0, [x9]
0x06A83DE8: aef31b97  bl #0x3180ca0
0x06A83DEC: 686500d0  adrp x8, #0x7731000
0x06A83DF0: 08dd45f9  ldr x8, [x8, #0xbb8]
0x06A83DF4: e10316aa  mov x1, x22
0x06A83DF8: e3031faa  mov x3, xzr
0x06A83DFC: f50300aa  mov x21, x0
0x06A83E00: 020140f9  ldr x2, [x8]
0x06A83E04: 525b9f97  bl #0x525ab4c
0x06A83E08: 080340f9  ldr x8, [x24]
0x06A83E0C: e10315aa  mov x1, x21
0x06A83E10: 005d40f9  ldr x0, [x8, #0xb8]
0x06A83E14: 158c00f8  str x21, [x0, #8]!
0x06A83E18: ebf21b97  bl #0x31809c4
0x06A83E1C: 000340f9  ldr x0, [x24]
0x06A83E20: 08e040b9  ldr w8, [x0, #0xe0]
0x06A83E24: 68000035  cbnz w8, #0x6a83e30
0x06A83E28: 59f31b97  bl #0x3180b8c
0x06A83E2C: 000340f9  ldr x0, [x24]
0x06A83E30: 085c40f9  ldr x8, [x0, #0xb8]
0x06A83E34: f95f00b0  adrp x25, #0x7680000
0x06A83E38: 160940f9  ldr x22, [x8, #0x10]
0x06A83E3C: 397340f9  ldr x25, [x25, #0xe0]
0x06A83E40: f60200b5  cbnz x22, #0x6a83e9c
0x06A83E44: 08e040b9  ldr w8, [x0, #0xe0]
0x06A83E48: 68000035  cbnz w8, #0x6a83e54
0x06A83E4C: 50f31b97  bl #0x3180b8c
0x06A83E50: 000340f9  ldr x0, [x24]
0x06A83E54: e95f00b0  adrp x9, #0x7680000
0x06A83E58: 085c40f9  ldr x8, [x0, #0xb8]
0x06A83E5C: 296540f9  ldr x9, [x9, #0xc8]
0x06A83E60: 170140f9  ldr x23, [x8]
0x06A83E64: 200140f9  ldr x0, [x9]
0x06A83E68: 8ef31b97  bl #0x3180ca0
0x06A83E6C: 686500d0  adrp x8, #0x7731000
0x06A83E70: 08e145f9  ldr x8, [x8, #0xbc0]
0x06A83E74: e10317aa  mov x1, x23
0x06A83E78: e3031faa  mov x3, xzr
0x06A83E7C: f60300aa  mov x22, x0
0x06A83E80: 020140f9  ldr x2, [x8]
0x06A83E84: 5f5b9f97  bl #0x525ac00
0x06A83E88: 080340f9  ldr x8, [x24]
0x06A83E8C: e10316aa  mov x1, x22
0x06A83E90: 005d40f9  ldr x0, [x8, #0xb8]
0x06A83E94: 160c01f8  str x22, [x0, #0x10]!
0x06A83E98: cbf21b97  bl #0x31809c4
0x06A83E9C: 230340f9  ldr x3, [x25]
0x06A83EA0: e00314aa  mov x0, x20
0x06A83EA4: e10315aa  mov x1, x21
0x06A83EA8: e20316aa  mov x2, x22
0x06A83EAC: f7cb4e97  bl #0x3e36e88
0x06A83EB0: 741e40f9  ldr x20, [x19, #0x38]
0x06A83EB4: b40400b4  cbz x20, #0x6a83f48
0x06A83EB8: ea5f00b0  adrp x10, #0x7680000
0x06A83EBC: 880240f9  ldr x8, [x20]
0x06A83EC0: 4a6940f9  ldr x10, [x10, #0xd0]
0x06A83EC4: f30300aa  mov x19, x0
0x06A83EC8: 095d4279  ldrh w9, [x8, #0x12e]
0x06A83ECC: 410140f9  ldr x1, [x10]
0x06A83ED0: 290100b4  cbz x9, #0x6a83ef4
0x06A83ED4: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A83ED8: 4a210091  add x10, x10, #8
0x06A83EDC: 4b815ff8  ldur x11, [x10, #-8]
0x06A83EE0: 7f0101eb  cmp x11, x1
0x06A83EE4: 00010054  b.eq #0x6a83f04
0x06A83EE8: 290500f1  subs x9, x9, #1
0x06A83EEC: 4a410091  add x10, x10, #0x10
0x06A83EF0: 61ffff54  b.ne #0x6a83edc
0x06A83EF4: e00314aa  mov x0, x20
0x06A83EF8: e2031f2a  mov w2, wzr
0x06A83EFC: 054b1b97  bl #0x3156b10
0x06A83F00: 04000014  b #0x6a83f10
0x06A83F04: 490180b9  ldrsw x9, [x10]
0x06A83F08: 0811098b  add x8, x8, x9, lsl #4
0x06A83F0C: 00e10491  add x0, x8, #0x138
0x06A83F10: 080440a9  ldp x8, x1, [x0]
0x06A83F14: e00314aa  mov x0, x20
0x06A83F18: 00013fd6  blr x8
0x06A83F1C: 730100b4  cbz x19, #0x6a83f48
0x06A83F20: e85f00b0  adrp x8, #0x7680000
0x06A83F24: 086d40f9  ldr x8, [x8, #0xd8]
0x06A83F28: e10300aa  mov x1, x0
0x06A83F2C: e00313aa  mov x0, x19
0x06A83F30: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A83F34: 020140f9  ldr x2, [x8]
0x06A83F38: f65742a9  ldp x22, x21, [sp, #0x20]
0x06A83F3C: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06A83F40: fe67c4a8  ldp x30, x25, [sp], #0x40
0x06A83F44: bd027b17  b #0x4944a38
0x06A83F48: 59f31b97  bl #0x3180cac

; RVA 0x6A84068 | private IMergeItem GenerateRandomToolItemFromWeights(List<WeightedToolLevel> toolLevelWeights, IMergeGraphItem toolGraph) { }
; bytes=724 sha256=24d0390db5bc739078c5894594edc72493db4dc6ed4c5ba8e6d3ae25912c9d20 status=arm64_complete_bound indexed_start=True
0x06A84068: fe0f1bf8  str x30, [sp, #-0x50]!
0x06A8406C: fa6701a9  stp x26, x25, [sp, #0x10]
0x06A84070: f85f02a9  stp x24, x23, [sp, #0x20]
0x06A84074: f65703a9  stp x22, x21, [sp, #0x30]
0x06A84078: f44f04a9  stp x20, x19, [sp, #0x40]
0x06A8407C: 369500d0  adrp x22, #0x7d2a000
0x06A84080: 796500b0  adrp x25, #0x7731000
0x06A84084: c8de5d39  ldrb w8, [x22, #0x777]
0x06A84088: 39db45f9  ldr x25, [x25, #0xbb0]
0x06A8408C: f30302aa  mov x19, x2
0x06A84090: f50301aa  mov x21, x1
0x06A84094: f40300aa  mov x20, x0
0x06A84098: c8030037  tbnz w8, #0, #0x6a84110
0x06A8409C: e05f0090  adrp x0, #0x7680000
0x06A840A0: 007440f9  ldr x0, [x0, #0xe8]
0x06A840A4: 5df21b97  bl #0x3180a18
0x06A840A8: c05f0090  adrp x0, #0x767c000
0x06A840AC: 002441f9  ldr x0, [x0, #0x248]
0x06A840B0: 5af21b97  bl #0x3180a18
0x06A840B4: e05f0090  adrp x0, #0x7680000
0x06A840B8: 006840f9  ldr x0, [x0, #0xd0]
0x06A840BC: 57f21b97  bl #0x3180a18
0x06A840C0: c05f00d0  adrp x0, #0x767e000
0x06A840C4: 008842f9  ldr x0, [x0, #0x510]
0x06A840C8: 54f21b97  bl #0x3180a18
0x06A840CC: 606500b0  adrp x0, #0x7731000
0x06A840D0: 00ec45f9  ldr x0, [x0, #0xbd8]
0x06A840D4: 51f21b97  bl #0x3180a18
0x06A840D8: 606500b0  adrp x0, #0x7731000
0x06A840DC: 00f045f9  ldr x0, [x0, #0xbe0]
0x06A840E0: 4ef21b97  bl #0x3180a18
0x06A840E4: 606500b0  adrp x0, #0x7731000
0x06A840E8: 00d845f9  ldr x0, [x0, #0xbb0]
0x06A840EC: 4bf21b97  bl #0x3180a18
0x06A840F0: e05f0090  adrp x0, #0x7680000
0x06A840F4: 007c40f9  ldr x0, [x0, #0xf8]
0x06A840F8: 48f21b97  bl #0x3180a18
0x06A840FC: e05f0090  adrp x0, #0x7680000
0x06A84100: 008040f9  ldr x0, [x0, #0x100]
0x06A84104: 45f21b97  bl #0x3180a18
0x06A84108: 28008052  movz w8, #0x1
0x06A8410C: c8de1d39  strb w8, [x22, #0x777]
0x06A84110: 200340f9  ldr x0, [x25]
0x06A84114: 08e040b9  ldr w8, [x0, #0xe0]
0x06A84118: 68000035  cbnz w8, #0x6a84124
0x06A8411C: 9cf21b97  bl #0x3180b8c
0x06A84120: 200340f9  ldr x0, [x25]
0x06A84124: 085c40f9  ldr x8, [x0, #0xb8]
0x06A84128: 160d40f9  ldr x22, [x8, #0x18]
0x06A8412C: 160300b5  cbnz x22, #0x6a8418c
0x06A84130: 08e040b9  ldr w8, [x0, #0xe0]
0x06A84134: 68000035  cbnz w8, #0x6a84140
0x06A84138: 95f21b97  bl #0x3180b8c
0x06A8413C: 200340f9  ldr x0, [x25]
0x06A84140: e95f0090  adrp x9, #0x7680000
0x06A84144: 085c40f9  ldr x8, [x0, #0xb8]
0x06A84148: 297540f9  ldr x9, [x9, #0xe8]
0x06A8414C: 170140f9  ldr x23, [x8]
0x06A84150: 200140f9  ldr x0, [x9]
0x06A84154: d3f21b97  bl #0x3180ca0
0x06A84158: 686500b0  adrp x8, #0x7731000
0x06A8415C: 08ed45f9  ldr x8, [x8, #0xbd8]
0x06A84160: e10317aa  mov x1, x23
0x06A84164: e3031faa  mov x3, xzr
0x06A84168: f60300aa  mov x22, x0
0x06A8416C: 020140f9  ldr x2, [x8]
0x06A84170: fe5a9f97  bl #0x525ad68
0x06A84174: 280340f9  ldr x8, [x25]
0x06A84178: e10316aa  mov x1, x22
0x06A8417C: 005d40f9  ldr x0, [x8, #0xb8]
0x06A84180: 168c01f8  str x22, [x0, #0x18]!
0x06A84184: 10f21b97  bl #0x31809c4
0x06A84188: 200340f9  ldr x0, [x25]
0x06A8418C: 08e040b9  ldr w8, [x0, #0xe0]
0x06A84190: 68000035  cbnz w8, #0x6a8419c
0x06A84194: 7ef21b97  bl #0x3180b8c
0x06A84198: 200340f9  ldr x0, [x25]
0x06A8419C: 085c40f9  ldr x8, [x0, #0xb8]
0x06A841A0: fa5f0090  adrp x26, #0x7680000
0x06A841A4: 171140f9  ldr x23, [x8, #0x20]
0x06A841A8: 5a8340f9  ldr x26, [x26, #0x100]
0x06A841AC: f70200b5  cbnz x23, #0x6a84208
0x06A841B0: 08e040b9  ldr w8, [x0, #0xe0]
0x06A841B4: 68000035  cbnz w8, #0x6a841c0
0x06A841B8: 75f21b97  bl #0x3180b8c
0x06A841BC: 200340f9  ldr x0, [x25]
0x06A841C0: e95f0090  adrp x9, #0x7680000
0x06A841C4: 085c40f9  ldr x8, [x0, #0xb8]
0x06A841C8: 297540f9  ldr x9, [x9, #0xe8]
0x06A841CC: 180140f9  ldr x24, [x8]
0x06A841D0: 200140f9  ldr x0, [x9]
0x06A841D4: b3f21b97  bl #0x3180ca0
0x06A841D8: 686500b0  adrp x8, #0x7731000
0x06A841DC: 08f145f9  ldr x8, [x8, #0xbe0]
0x06A841E0: e10318aa  mov x1, x24
0x06A841E4: e3031faa  mov x3, xzr
0x06A841E8: f70300aa  mov x23, x0
0x06A841EC: 020140f9  ldr x2, [x8]
0x06A841F0: de5a9f97  bl #0x525ad68
0x06A841F4: 280340f9  ldr x8, [x25]
0x06A841F8: e10317aa  mov x1, x23
0x06A841FC: 005d40f9  ldr x0, [x8, #0xb8]
0x06A84200: 170c02f8  str x23, [x0, #0x20]!
0x06A84204: f0f11b97  bl #0x31809c4
0x06A84208: 430340f9  ldr x3, [x26]
0x06A8420C: e00315aa  mov x0, x21
0x06A84210: e10316aa  mov x1, x22
0x06A84214: e20317aa  mov x2, x23
0x06A84218: 33cc4e97  bl #0x3e372e4
0x06A8421C: 951e40f9  ldr x21, [x20, #0x38]
0x06A84220: d50800b4  cbz x21, #0x6a84338
0x06A84224: ea5f0090  adrp x10, #0x7680000
0x06A84228: a80240f9  ldr x8, [x21]
0x06A8422C: 4a6940f9  ldr x10, [x10, #0xd0]
0x06A84230: f40300aa  mov x20, x0
0x06A84234: 095d4279  ldrh w9, [x8, #0x12e]
0x06A84238: 410140f9  ldr x1, [x10]
0x06A8423C: 290100b4  cbz x9, #0x6a84260
0x06A84240: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A84244: 4a210091  add x10, x10, #8
0x06A84248: 4b815ff8  ldur x11, [x10, #-8]
0x06A8424C: 7f0101eb  cmp x11, x1
0x06A84250: 00010054  b.eq #0x6a84270
0x06A84254: 290500f1  subs x9, x9, #1
0x06A84258: 4a410091  add x10, x10, #0x10
0x06A8425C: 61ffff54  b.ne #0x6a84248
0x06A84260: e00315aa  mov x0, x21
0x06A84264: e2031f2a  mov w2, wzr
0x06A84268: 2a4a1b97  bl #0x3156b10
0x06A8426C: 04000014  b #0x6a8427c
0x06A84270: 490180b9  ldrsw x9, [x10]
0x06A84274: 0811098b  add x8, x8, x9, lsl #4
0x06A84278: 00e10491  add x0, x8, #0x138
0x06A8427C: 080440a9  ldp x8, x1, [x0]
0x06A84280: e00315aa  mov x0, x21
0x06A84284: 00013fd6  blr x8
0x06A84288: 940500b4  cbz x20, #0x6a84338
0x06A8428C: e85f0090  adrp x8, #0x7680000
0x06A84290: 087d40f9  ldr x8, [x8, #0xf8]
0x06A84294: e10300aa  mov x1, x0
0x06A84298: e00314aa  mov x0, x20
0x06A8429C: 020140f9  ldr x2, [x8]
0x06A842A0: ed007b97  bl #0x4944654
0x06A842A4: b30400b4  cbz x19, #0x6a84338
0x06A842A8: ca5f0090  adrp x10, #0x767c000
0x06A842AC: 680240f9  ldr x8, [x19]
0x06A842B0: 4a2541f9  ldr x10, [x10, #0x248]
0x06A842B4: f403002a  mov w20, w0
0x06A842B8: 095d4279  ldrh w9, [x8, #0x12e]
0x06A842BC: 410140f9  ldr x1, [x10]
0x06A842C0: 290100b4  cbz x9, #0x6a842e4
0x06A842C4: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A842C8: 4a210091  add x10, x10, #8
0x06A842CC: 4b815ff8  ldur x11, [x10, #-8]
0x06A842D0: 7f0101eb  cmp x11, x1
0x06A842D4: 00010054  b.eq #0x6a842f4
0x06A842D8: 290500f1  subs x9, x9, #1
0x06A842DC: 4a410091  add x10, x10, #0x10
0x06A842E0: 61ffff54  b.ne #0x6a842cc
0x06A842E4: e00313aa  mov x0, x19
0x06A842E8: e2031f2a  mov w2, wzr
0x06A842EC: 094a1b97  bl #0x3156b10
0x06A842F0: 04000014  b #0x6a84300
0x06A842F4: 490180b9  ldrsw x9, [x10]
0x06A842F8: 0811098b  add x8, x8, x9, lsl #4
0x06A842FC: 00e10491  add x0, x8, #0x138
0x06A84300: 080440a9  ldp x8, x1, [x0]
0x06A84304: e00313aa  mov x0, x19
0x06A84308: 00013fd6  blr x8
0x06A8430C: 600100b4  cbz x0, #0x6a84338
0x06A84310: c85f00d0  adrp x8, #0x767e000
0x06A84314: 088942f9  ldr x8, [x8, #0x510]
0x06A84318: 81060051  sub w1, w20, #1
0x06A8431C: f44f44a9  ldp x20, x19, [sp, #0x40]
0x06A84320: f65743a9  ldp x22, x21, [sp, #0x30]
0x06A84324: 020140f9  ldr x2, [x8]
0x06A84328: f85f42a9  ldp x24, x23, [sp, #0x20]
0x06A8432C: fa6741a9  ldp x26, x25, [sp, #0x10]
0x06A84330: fe0745f8  ldr x30, [sp], #0x50
0x06A84334: 9aff5617  b #0x404419c
0x06A84338: 5df21b97  bl #0x3180cac

; RVA 0x6A83F4C | private List<WeightedToolLevel> FilterToolLevelsByProgressionOnBoard(List<WeightedToolLevel> toolLevelWeights, ToolProgressionData toolProgressionData) { }
; bytes=284 sha256=e8b60129c3759380dff00f3667861b695d3f534ff68d1f22a3502e0682acd359 status=arm64_complete_bound indexed_start=True
0x06A83F4C: fe0f1bf8  str x30, [sp, #-0x50]!
0x06A83F50: fa6701a9  stp x26, x25, [sp, #0x10]
0x06A83F54: f85f02a9  stp x24, x23, [sp, #0x20]
0x06A83F58: f65703a9  stp x22, x21, [sp, #0x30]
0x06A83F5C: f44f04a9  stp x20, x19, [sp, #0x40]
0x06A83F60: 369500f0  adrp x22, #0x7d2a000
0x06A83F64: 776500d0  adrp x23, #0x7731000
0x06A83F68: c8e25d39  ldrb w8, [x22, #0x778]
0x06A83F6C: f7e645f9  ldr x23, [x23, #0xbc8]
0x06A83F70: f40302aa  mov x20, x2
0x06A83F74: f30301aa  mov x19, x1
0x06A83F78: f50300aa  mov x21, x0
0x06A83F7C: 48020037  tbnz w8, #0, #0x6a83fc4
0x06A83F80: e05f00b0  adrp x0, #0x7680000
0x06A83F84: 004040f9  ldr x0, [x0, #0x80]
0x06A83F88: a4f21b97  bl #0x3180a18
0x06A83F8C: e05f00b0  adrp x0, #0x7680000
0x06A83F90: 004440f9  ldr x0, [x0, #0x88]
0x06A83F94: a1f21b97  bl #0x3180a18
0x06A83F98: e05f00b0  adrp x0, #0x7680000
0x06A83F9C: 004840f9  ldr x0, [x0, #0x90]
0x06A83FA0: 9ef21b97  bl #0x3180a18
0x06A83FA4: 606500d0  adrp x0, #0x7731000
0x06A83FA8: 00e845f9  ldr x0, [x0, #0xbd0]
0x06A83FAC: 9bf21b97  bl #0x3180a18
0x06A83FB0: 606500d0  adrp x0, #0x7731000
0x06A83FB4: 00e445f9  ldr x0, [x0, #0xbc8]
0x06A83FB8: 98f21b97  bl #0x3180a18
0x06A83FBC: 28008052  movz w8, #0x1
0x06A83FC0: c8e21d39  strb w8, [x22, #0x778]
0x06A83FC4: e00240f9  ldr x0, [x23]
0x06A83FC8: 36f31b97  bl #0x3180ca0
0x06A83FCC: e1031faa  mov x1, xzr
0x06A83FD0: f60300aa  mov x22, x0
0x06A83FD4: 7a030094  bl #0x6a84dbc
0x06A83FD8: 760400b4  cbz x22, #0x6a84064
0x06A83FDC: f75f00b0  adrp x23, #0x7680000
0x06A83FE0: 786500d0  adrp x24, #0x7731000
0x06A83FE4: f95f00b0  adrp x25, #0x7680000
0x06A83FE8: fa5f00b0  adrp x26, #0x7680000
0x06A83FEC: f74a40f9  ldr x23, [x23, #0x90]
0x06A83FF0: 18eb45f9  ldr x24, [x24, #0xbd0]
0x06A83FF4: 394740f9  ldr x25, [x25, #0x88]
0x06A83FF8: 5a4340f9  ldr x26, [x26, #0x80]
0x06A83FFC: e00316aa  mov x0, x22
0x06A84000: 150c01f8  str x21, [x0, #0x10]!
0x06A84004: e10315aa  mov x1, x21
0x06A84008: 6ff21b97  bl #0x31809c4
0x06A8400C: e00316aa  mov x0, x22
0x06A84010: 148c01f8  str x20, [x0, #0x18]!
0x06A84014: e10314aa  mov x1, x20
0x06A84018: 6bf21b97  bl #0x31809c4
0x06A8401C: e00240f9  ldr x0, [x23]
0x06A84020: 20f31b97  bl #0x3180ca0
0x06A84024: 020340f9  ldr x2, [x24]
0x06A84028: e10316aa  mov x1, x22
0x06A8402C: e3031faa  mov x3, xzr
0x06A84030: f40300aa  mov x20, x0
0x06A84034: 205b9f97  bl #0x525acb4
0x06A84038: 220340f9  ldr x2, [x25]
0x06A8403C: e00313aa  mov x0, x19
0x06A84040: e10314aa  mov x1, x20
0x06A84044: 890f4897  bl #0x3c87e68
0x06A84048: 410340f9  ldr x1, [x26]
0x06A8404C: f44f44a9  ldp x20, x19, [sp, #0x40]
0x06A84050: f65743a9  ldp x22, x21, [sp, #0x30]
0x06A84054: f85f42a9  ldp x24, x23, [sp, #0x20]
0x06A84058: fa6741a9  ldp x26, x25, [sp, #0x10]
0x06A8405C: fe0745f8  ldr x30, [sp], #0x50
0x06A84060: 77704717  b #0x3c6023c
0x06A84064: 12f31b97  bl #0x3180cac

; RVA 0x6A84674 | private void ApplyMetagameWeightBoosts(List<WeightedTool> availableToolsToSpawn, Dictionary<PlayerResourceEnum, int> currentToolAmounts) { }
; bytes=268 sha256=8bd465efc495bb9db3637138a12f9aa9311092fda8bc6fcd0ad2d8c3d52ef52d status=arm64_complete_bound indexed_start=True
0x06A84674: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x06A84678: f65701a9  stp x22, x21, [sp, #0x10]
0x06A8467C: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A84680: 369500d0  adrp x22, #0x7d2a000
0x06A84684: c8e65d39  ldrb w8, [x22, #0x779]
0x06A84688: f50302aa  mov x21, x2
0x06A8468C: f30301aa  mov x19, x1
0x06A84690: f40300aa  mov x20, x0
0x06A84694: 28010037  tbnz w8, #0, #0x6a846b8
0x06A84698: e05f0090  adrp x0, #0x7680000
0x06A8469C: 004c40f9  ldr x0, [x0, #0x98]
0x06A846A0: def01b97  bl #0x3180a18
0x06A846A4: 40630090  adrp x0, #0x76ec000
0x06A846A8: 004c40f9  ldr x0, [x0, #0x98]
0x06A846AC: dbf01b97  bl #0x3180a18
0x06A846B0: 28008052  movz w8, #0x1
0x06A846B4: c8e61d39  strb w8, [x22, #0x779]
0x06A846B8: 971a40f9  ldr x23, [x20, #0x30]
0x06A846BC: 170600b4  cbz x23, #0x6a8477c
0x06A846C0: 4a630090  adrp x10, #0x76ec000
0x06A846C4: e80240f9  ldr x8, [x23]
0x06A846C8: 4a4d40f9  ldr x10, [x10, #0x98]
0x06A846CC: 963640f9  ldr x22, [x20, #0x68]
0x06A846D0: 095d4279  ldrh w9, [x8, #0x12e]
0x06A846D4: 410140f9  ldr x1, [x10]
0x06A846D8: 290100b4  cbz x9, #0x6a846fc
0x06A846DC: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A846E0: 4a210091  add x10, x10, #8
0x06A846E4: 4b815ff8  ldur x11, [x10, #-8]
0x06A846E8: 7f0101eb  cmp x11, x1
0x06A846EC: 00010054  b.eq #0x6a8470c
0x06A846F0: 290500f1  subs x9, x9, #1
0x06A846F4: 4a410091  add x10, x10, #0x10
0x06A846F8: 61ffff54  b.ne #0x6a846e4
0x06A846FC: 42018052  movz w2, #0xa
0x06A84700: e00317aa  mov x0, x23
0x06A84704: 03491b97  bl #0x3156b10
0x06A84708: 05000014  b #0x6a8471c
0x06A8470C: 490140b9  ldr w9, [x10]
0x06A84710: 29290011  add w9, w9, #0xa
0x06A84714: 08d1298b  add x8, x8, w9, sxtw #4
0x06A84718: 00e10491  add x0, x8, #0x138
0x06A8471C: 080440a9  ldp x8, x1, [x0]
0x06A84720: e00317aa  mov x0, x23
0x06A84724: 00013fd6  blr x8
0x06A84728: b60200b4  cbz x22, #0x6a8477c
0x06A8472C: e10300aa  mov x1, x0
0x06A84730: e00316aa  mov x0, x22
0x06A84734: e20315aa  mov x2, x21
0x06A84738: e3031faa  mov x3, xzr
0x06A8473C: cd4df497  bl #0x6797e70
0x06A84740: 600100b4  cbz x0, #0x6a8476c
0x06A84744: 082040b9  ldr w8, [x0, #0x20]
0x06A84748: e20300aa  mov x2, x0
0x06A8474C: 1f050071  cmp w8, #1
0x06A84750: eb000054  b.lt #0x6a8476c
0x06A84754: e00314aa  mov x0, x20
0x06A84758: e10313aa  mov x1, x19
0x06A8475C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A84760: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A84764: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x06A84768: 06000014  b #0x6a84780
0x06A8476C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A84770: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A84774: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x06A84778: c0035fd6  ret
0x06A8477C: 4cf11b97  bl #0x3180cac

; RVA 0x6A843FC | private Dictionary<PlayerResourceEnum, int> CalculateCurrentToolAmounts(Dictionary<PlayerResourceEnum, ToolProgressionData> toolsProgressionOnBoard) { }
; bytes=632 sha256=b6b95457d00a4f0aa664b61fdb17f7922722ebe6aec6f905d2de20ae5c612d4c status=arm64_complete_bound indexed_start=True
0x06A843FC: ffc301d1  sub sp, sp, #0x70
0x06A84400: fd7b01a9  stp x29, x30, [sp, #0x10]
0x06A84404: fc6f02a9  stp x28, x27, [sp, #0x20]
0x06A84408: fa6703a9  stp x26, x25, [sp, #0x30]
0x06A8440C: f85f04a9  stp x24, x23, [sp, #0x40]
0x06A84410: f65705a9  stp x22, x21, [sp, #0x50]
0x06A84414: f44f06a9  stp x20, x19, [sp, #0x60]
0x06A84418: 389500d0  adrp x24, #0x7d2a000
0x06A8441C: d75f00f0  adrp x23, #0x767f000
0x06A84420: d55f00f0  adrp x21, #0x767f000
0x06A84424: d66100f0  adrp x22, #0x76bf000
0x06A84428: 08eb5d39  ldrb w8, [x24, #0x77a]
0x06A8442C: f7b647f9  ldr x23, [x23, #0xf68]
0x06A84430: b5ba47f9  ldr x21, [x21, #0xf70]
0x06A84434: d64644f9  ldr x22, [x22, #0x888]
0x06A84438: f30301aa  mov x19, x1
0x06A8443C: f40300aa  mov x20, x0
0x06A84440: c8030037  tbnz w8, #0, #0x6a844b8
0x06A84444: 405f00f0  adrp x0, #0x766f000
0x06A84448: 00f844f9  ldr x0, [x0, #0x9f0]
0x06A8444C: 73f11b97  bl #0x3180a18
0x06A84450: 606500b0  adrp x0, #0x7731000
0x06A84454: 00d445f9  ldr x0, [x0, #0xba8]
0x06A84458: 70f11b97  bl #0x3180a18
0x06A8445C: c05f00f0  adrp x0, #0x767f000
0x06A84460: 00b847f9  ldr x0, [x0, #0xf70]
0x06A84464: 6df11b97  bl #0x3180a18
0x06A84468: e05f0090  adrp x0, #0x7680000
0x06A8446C: 003840f9  ldr x0, [x0, #0x70]
0x06A84470: 6af11b97  bl #0x3180a18
0x06A84474: e05f0090  adrp x0, #0x7680000
0x06A84478: 003c40f9  ldr x0, [x0, #0x78]
0x06A8447C: 67f11b97  bl #0x3180a18
0x06A84480: c05f00f0  adrp x0, #0x767f000
0x06A84484: 00b447f9  ldr x0, [x0, #0xf68]
0x06A84488: 64f11b97  bl #0x3180a18
0x06A8448C: 605f00f0  adrp x0, #0x7673000
0x06A84490: 004443f9  ldr x0, [x0, #0x688]
0x06A84494: 61f11b97  bl #0x3180a18
0x06A84498: c06100f0  adrp x0, #0x76bf000
0x06A8449C: 004444f9  ldr x0, [x0, #0x888]
0x06A844A0: 5ef11b97  bl #0x3180a18
0x06A844A4: 605f00f0  adrp x0, #0x7673000
0x06A844A8: 005c40f9  ldr x0, [x0, #0xb8]
0x06A844AC: 5bf11b97  bl #0x3180a18
0x06A844B0: 28008052  movz w8, #0x1
0x06A844B4: 08eb1d39  strb w8, [x24, #0x77a]
0x06A844B8: e00240f9  ldr x0, [x23]
0x06A844BC: ff0700f9  str xzr, [sp, #8]
0x06A844C0: f8f11b97  bl #0x3180ca0
0x06A844C4: a10240f9  ldr x1, [x21]
0x06A844C8: f50300aa  mov x21, x0
0x06A844CC: 7b588f97  bl #0x4e5a6b8
0x06A844D0: c00240f9  ldr x0, [x22]
0x06A844D4: 08e040b9  ldr w8, [x0, #0xe0]
0x06A844D8: 68000035  cbnz w8, #0x6a844e4
0x06A844DC: acf11b97  bl #0x3180b8c
0x06A844E0: c00240f9  ldr x0, [x22]
0x06A844E4: 085c40f9  ldr x8, [x0, #0xb8]
0x06A844E8: 190140f9  ldr x25, [x8]
0x06A844EC: 190c00b4  cbz x25, #0x6a8466c
0x06A844F0: 280f40f9  ldr x8, [x25, #0x18]
0x06A844F4: 1f050071  cmp w8, #1
0x06A844F8: 8b0a0054  b.lt #0x6a84648
0x06A844FC: 7c5f00f0  adrp x28, #0x7673000
0x06A84500: fd5f0090  adrp x29, #0x7680000
0x06A84504: 7b6500b0  adrp x27, #0x7731000
0x06A84508: 9c4743f9  ldr x28, [x28, #0x688]
0x06A8450C: bd3f40f9  ldr x29, [x29, #0x78]
0x06A84510: 7bd745f9  ldr x27, [x27, #0xba8]
0x06A84514: fa031faa  mov x26, xzr
0x06A84518: 087d4092  and x8, x8, #0xffffffff
0x06A8451C: 5f4328eb  cmp x26, w8, uxtw
0x06A84520: 820a0054  b.hs #0x6a84670
0x06A84524: 685f00f0  adrp x8, #0x7673000
0x06A84528: 085d40f9  ldr x8, [x8, #0xb8]
0x06A8452C: 972240f9  ldr x23, [x20, #0x40]
0x06A84530: 000140f9  ldr x0, [x8]
0x06A84534: 280b1a8b  add x8, x25, x26, lsl #2
0x06A84538: 162140b9  ldr w22, [x8, #0x20]
0x06A8453C: 08e040b9  ldr w8, [x0, #0xe0]
0x06A84540: 48000035  cbnz w8, #0x6a84548
0x06A84544: 92f11b97  bl #0x3180b8c
0x06A84548: e003162a  mov w0, w22
0x06A8454C: e1031faa  mov x1, xzr
0x06A84550: 7421db97  bl #0x614cb20
0x06A84554: d70800b4  cbz x23, #0x6a8466c
0x06A84558: e80240f9  ldr x8, [x23]
0x06A8455C: 810340f9  ldr x1, [x28]
0x06A84560: f80300aa  mov x24, x0
0x06A84564: 095d4279  ldrh w9, [x8, #0x12e]
0x06A84568: 290100b4  cbz x9, #0x6a8458c
0x06A8456C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A84570: 4a210091  add x10, x10, #8
0x06A84574: 4b815ff8  ldur x11, [x10, #-8]
0x06A84578: 7f0101eb  cmp x11, x1
0x06A8457C: 00010054  b.eq #0x6a8459c
0x06A84580: 290500f1  subs x9, x9, #1
0x06A84584: 4a410091  add x10, x10, #0x10
0x06A84588: 61ffff54  b.ne #0x6a84574
0x06A8458C: 22008052  movz w2, #0x1
0x06A84590: e00317aa  mov x0, x23
0x06A84594: 5f491b97  bl #0x3156b10
0x06A84598: 05000014  b #0x6a845ac
0x06A8459C: 490140b9  ldr w9, [x10]
0x06A845A0: 29050011  add w9, w9, #1
0x06A845A4: 08d1298b  add x8, x8, w9, sxtw #4
0x06A845A8: 00e10491  add x0, x8, #0x138
0x06A845AC: 080840a9  ldp x8, x2, [x0]
0x06A845B0: e00317aa  mov x0, x23
0x06A845B4: e10318aa  mov x1, x24
0x06A845B8: 00013fd6  blr x8
0x06A845BC: 800500b4  cbz x0, #0x6a8466c
0x06A845C0: 750500b4  cbz x21, #0x6a8466c
0x06A845C4: 022040b9  ldr w2, [x0, #0x20]
0x06A845C8: a30340f9  ldr x3, [x29]
0x06A845CC: e00315aa  mov x0, x21
0x06A845D0: e103162a  mov w1, w22
0x06A845D4: ad5b8f97  bl #0x4e5b488
0x06A845D8: b30400b4  cbz x19, #0x6a8466c
0x06A845DC: 630340f9  ldr x3, [x27]
0x06A845E0: e2230091  add x2, sp, #8
0x06A845E4: e00313aa  mov x0, x19
0x06A845E8: e103162a  mov w1, w22
0x06A845EC: d27c8f97  bl #0x4e63934
0x06A845F0: 40020036  tbz w0, #0, #0x6a84638
0x06A845F4: e85f0090  adrp x8, #0x7680000
0x06A845F8: 083940f9  ldr x8, [x8, #0x70]
0x06A845FC: e00315aa  mov x0, x21
0x06A84600: e103162a  mov w1, w22
0x06A84604: 020140f9  ldr x2, [x8]
0x06A84608: 7e5b8f97  bl #0x4e5b400
0x06A8460C: e80740f9  ldr x8, [sp, #8]
0x06A84610: e80200b4  cbz x8, #0x6a8466c
0x06A84614: f703002a  mov w23, w0
0x06A84618: e00308aa  mov x0, x8
0x06A8461C: e1031faa  mov x1, xzr
0x06A84620: d5560094  bl #0x6a9a174
0x06A84624: a30340f9  ldr x3, [x29]
0x06A84628: 0200170b  add w2, w0, w23
0x06A8462C: e00315aa  mov x0, x21
0x06A84630: e103162a  mov w1, w22
0x06A84634: 955b8f97  bl #0x4e5b488
0x06A84638: 281b40b9  ldr w8, [x25, #0x18]
0x06A8463C: 5a070091  add x26, x26, #1
0x06A84640: 5fc328eb  cmp x26, w8, sxtw
0x06A84644: cbf6ff54  b.lt #0x6a8451c
0x06A84648: e00315aa  mov x0, x21
0x06A8464C: f44f46a9  ldp x20, x19, [sp, #0x60]
0x06A84650: f65745a9  ldp x22, x21, [sp, #0x50]
0x06A84654: f85f44a9  ldp x24, x23, [sp, #0x40]
0x06A84658: fa6743a9  ldp x26, x25, [sp, #0x30]
0x06A8465C: fc6f42a9  ldp x28, x27, [sp, #0x20]
0x06A84660: fd7b41a9  ldp x29, x30, [sp, #0x10]
0x06A84664: ffc30191  add sp, sp, #0x70
0x06A84668: c0035fd6  ret
0x06A8466C: 90f11b97  bl #0x3180cac
0x06A84670: 91f11b97  bl #0x3180cb4

; RVA 0x6A84780 | private void BoostRequiredToolWeights(List<WeightedTool> toolWeights, HashSet<PlayerResourceEnum> requiredTools) { }
; bytes=344 sha256=edcd606dbf0ec7b0db626678f8502edc6c3ca1c165002a210b818c6ff8d36ea0 status=arm64_complete_bound indexed_start=True
0x06A84780: e80f1afc  str d8, [sp, #-0x60]!
0x06A84784: fe0700f9  str x30, [sp, #8]
0x06A84788: fc6f01a9  stp x28, x27, [sp, #0x10]
0x06A8478C: fa6702a9  stp x26, x25, [sp, #0x20]
0x06A84790: f85f03a9  stp x24, x23, [sp, #0x30]
0x06A84794: f65704a9  stp x22, x21, [sp, #0x40]
0x06A84798: f44f05a9  stp x20, x19, [sp, #0x50]
0x06A8479C: 369500d0  adrp x22, #0x7d2a000
0x06A847A0: c8ee5d39  ldrb w8, [x22, #0x77b]
0x06A847A4: f30302aa  mov x19, x2
0x06A847A8: f40301aa  mov x20, x1
0x06A847AC: f50300aa  mov x21, x0
0x06A847B0: e8010037  tbnz w8, #0, #0x6a847ec
0x06A847B4: e05f0090  adrp x0, #0x7680000
0x06A847B8: 008440f9  ldr x0, [x0, #0x108]
0x06A847BC: 97f01b97  bl #0x3180a18
0x06A847C0: e05f0090  adrp x0, #0x7680000
0x06A847C4: 005840f9  ldr x0, [x0, #0xb0]
0x06A847C8: 94f01b97  bl #0x3180a18
0x06A847CC: e05f0090  adrp x0, #0x7680000
0x06A847D0: 008840f9  ldr x0, [x0, #0x110]
0x06A847D4: 91f01b97  bl #0x3180a18
0x06A847D8: e05f0090  adrp x0, #0x7680000
0x06A847DC: 008c40f9  ldr x0, [x0, #0x118]
0x06A847E0: 8ef01b97  bl #0x3180a18
0x06A847E4: 28008052  movz w8, #0x1
0x06A847E8: c8ee1d39  strb w8, [x22, #0x77b]
0x06A847EC: 540700b4  cbz x20, #0x6a848d4
0x06A847F0: 881a40b9  ldr w8, [x20, #0x18]
0x06A847F4: 1f050071  cmp w8, #1
0x06A847F8: eb050054  b.lt #0x6a848b4
0x06A847FC: f75f0090  adrp x23, #0x7680000
0x06A84800: f85f0090  adrp x24, #0x7680000
0x06A84804: f95f0090  adrp x25, #0x7680000
0x06A84808: f78a40f9  ldr x23, [x23, #0x110]
0x06A8480C: 188740f9  ldr x24, [x24, #0x108]
0x06A84810: 398f40f9  ldr x25, [x25, #0x118]
0x06A84814: f6031f2a  mov w22, wzr
0x06A84818: 1af0af52  movz w26, #0x7f80, lsl #16
0x06A8481C: 1b00b052  movz w27, #0x8000, lsl #16
0x06A84820: e20240f9  ldr x2, [x23]
0x06A84824: e00314aa  mov x0, x20
0x06A84828: e103162a  mov w1, w22
0x06A8482C: 63875997  bl #0x40e65b8
0x06A84830: 330500b4  cbz x19, #0x6a848d4
0x06A84834: 020340f9  ldr x2, [x24]
0x06A84838: 01fc60d3  lsr x1, x0, #0x20
0x06A8483C: e00313aa  mov x0, x19
0x06A84840: cedda097  bl #0x52bbf78
0x06A84844: 00030036  tbz w0, #0, #0x6a848a4
0x06A84848: e00315aa  mov x0, x21
0x06A8484C: 90faff97  bl #0x6a8328c
0x06A84850: e20240f9  ldr x2, [x23]
0x06A84854: e00314aa  mov x0, x20
0x06A84858: e103162a  mov w1, w22
0x06A8485C: 081ca04e  mov v8.16b, v0.16b
0x06A84860: 56875997  bl #0x40e65b8
0x06A84864: e20240f9  ldr x2, [x23]
0x06A84868: 0000221e  scvtf s0, w0
0x06A8486C: 0809201e  fmul s8, s8, s0
0x06A84870: e00314aa  mov x0, x20
0x06A84874: e103162a  mov w1, w22
0x06A84878: 1c01381e  fcvtzs w28, s8
0x06A8487C: 4f875997  bl #0x40e65b8
0x06A84880: 4003271e  fmov s0, w26
0x06A84884: 230340f9  ldr x3, [x25]
0x06A84888: 0021201e  fcmp s8, s0
0x06A8488C: 087c6092  and x8, x0, #0xffffffff00000000
0x06A84890: 69039c9a  csel x9, x27, x28, eq
0x06A84894: 220108aa  orr x2, x9, x8
0x06A84898: e00314aa  mov x0, x20
0x06A8489C: e103162a  mov w1, w22
0x06A848A0: 5b875997  bl #0x40e660c
0x06A848A4: 881a40b9  ldr w8, [x20, #0x18]
0x06A848A8: d6060011  add w22, w22, #1
0x06A848AC: df02086b  cmp w22, w8
0x06A848B0: 8bfbff54  b.lt #0x6a84820
0x06A848B4: f44f45a9  ldp x20, x19, [sp, #0x50]
0x06A848B8: f65744a9  ldp x22, x21, [sp, #0x40]
0x06A848BC: f85f43a9  ldp x24, x23, [sp, #0x30]
0x06A848C0: fa6742a9  ldp x26, x25, [sp, #0x20]
0x06A848C4: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x06A848C8: fe0740f9  ldr x30, [sp, #8]
0x06A848CC: e80746fc  ldr d8, [sp], #0x60
0x06A848D0: c0035fd6  ret
0x06A848D4: f6f01b97  bl #0x3180cac

; RVA 0x6A839AC | private int SumItemsMergeValue(IMergeGraphItem toolGraph, IEnumerable<string> boardItemIds) { }
; bytes=564 sha256=991d22f0f1236e4e57072111ea80d6fbdc14707b2e19347fcb69374e6f6547f0 status=arm64_complete_bound indexed_start=True
0x06A839AC: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x06A839B0: fc6f01a9  stp x28, x27, [sp, #0x10]
0x06A839B4: fa6702a9  stp x26, x25, [sp, #0x20]
0x06A839B8: f85f03a9  stp x24, x23, [sp, #0x30]
0x06A839BC: f65704a9  stp x22, x21, [sp, #0x40]
0x06A839C0: f44f05a9  stp x20, x19, [sp, #0x50]
0x06A839C4: 369500f0  adrp x22, #0x7d2a000
0x06A839C8: 776500d0  adrp x23, #0x7731000
0x06A839CC: c8f25d39  ldrb w8, [x22, #0x77c]
0x06A839D0: f7c245f9  ldr x23, [x23, #0xb80]
0x06A839D4: f40302aa  mov x20, x2
0x06A839D8: f50301aa  mov x21, x1
0x06A839DC: f30300aa  mov x19, x0
0x06A839E0: 88040037  tbnz w8, #0, #0x6a83a70
0x06A839E4: 606500d0  adrp x0, #0x7731000
0x06A839E8: 00c445f9  ldr x0, [x0, #0xb88]
0x06A839EC: 0bf41b97  bl #0x3180a18
0x06A839F0: 006000d0  adrp x0, #0x7685000
0x06A839F4: 008446f9  ldr x0, [x0, #0xd08]
0x06A839F8: 08f41b97  bl #0x3180a18
0x06A839FC: 606500d0  adrp x0, #0x7731000
0x06A83A00: 00c845f9  ldr x0, [x0, #0xb90]
0x06A83A04: 05f41b97  bl #0x3180a18
0x06A83A08: 006000d0  adrp x0, #0x7685000
0x06A83A0C: 008846f9  ldr x0, [x0, #0xd10]
0x06A83A10: 02f41b97  bl #0x3180a18
0x06A83A14: 405f00f0  adrp x0, #0x766e000
0x06A83A18: 00c842f9  ldr x0, [x0, #0x590]
0x06A83A1C: fff31b97  bl #0x3180a18
0x06A83A20: 006100f0  adrp x0, #0x76a6000
0x06A83A24: 004047f9  ldr x0, [x0, #0xe80]
0x06A83A28: fcf31b97  bl #0x3180a18
0x06A83A2C: 405f00f0  adrp x0, #0x766e000
0x06A83A30: 00d442f9  ldr x0, [x0, #0x5a8]
0x06A83A34: f9f31b97  bl #0x3180a18
0x06A83A38: 006000d0  adrp x0, #0x7685000
0x06A83A3C: 008c46f9  ldr x0, [x0, #0xd18]
0x06A83A40: f6f31b97  bl #0x3180a18
0x06A83A44: 606500d0  adrp x0, #0x7731000
0x06A83A48: 00cc45f9  ldr x0, [x0, #0xb98]
0x06A83A4C: f3f31b97  bl #0x3180a18
0x06A83A50: 606500d0  adrp x0, #0x7731000
0x06A83A54: 00d045f9  ldr x0, [x0, #0xba0]
0x06A83A58: f0f31b97  bl #0x3180a18
0x06A83A5C: 606500d0  adrp x0, #0x7731000
0x06A83A60: 00c045f9  ldr x0, [x0, #0xb80]
0x06A83A64: edf31b97  bl #0x3180a18
0x06A83A68: 28008052  movz w8, #0x1
0x06A83A6C: c8f21d39  strb w8, [x22, #0x77c]
0x06A83A70: e00240f9  ldr x0, [x23]
0x06A83A74: 8bf41b97  bl #0x3180ca0
0x06A83A78: e1031faa  mov x1, xzr
0x06A83A7C: f60300aa  mov x22, x0
0x06A83A80: ea040094  bl #0x6a84e28
0x06A83A84: d60a00b4  cbz x22, #0x6a83bdc
0x06A83A88: 585f00f0  adrp x24, #0x766e000
0x06A83A8C: 796500d0  adrp x25, #0x7731000
0x06A83A90: 5a5f00f0  adrp x26, #0x766e000
0x06A83A94: 1b6000d0  adrp x27, #0x7685000
0x06A83A98: 7c6500d0  adrp x28, #0x7731000
0x06A83A9C: 1d6000d0  adrp x29, #0x7685000
0x06A83AA0: 176000d0  adrp x23, #0x7685000
0x06A83AA4: 18d742f9  ldr x24, [x24, #0x5a8]
0x06A83AA8: 39cf45f9  ldr x25, [x25, #0xb98]
0x06A83AAC: 5acb42f9  ldr x26, [x26, #0x590]
0x06A83AB0: 7b8f46f9  ldr x27, [x27, #0xd18]
0x06A83AB4: 9cd345f9  ldr x28, [x28, #0xba0]
0x06A83AB8: bd8746f9  ldr x29, [x29, #0xd08]
0x06A83ABC: f78a46f9  ldr x23, [x23, #0xd10]
0x06A83AC0: e00316aa  mov x0, x22
0x06A83AC4: 150c01f8  str x21, [x0, #0x10]!
0x06A83AC8: e10315aa  mov x1, x21
0x06A83ACC: bef31b97  bl #0x31809c4
0x06A83AD0: e00316aa  mov x0, x22
0x06A83AD4: 138c01f8  str x19, [x0, #0x18]!
0x06A83AD8: e10313aa  mov x1, x19
0x06A83ADC: baf31b97  bl #0x31809c4
0x06A83AE0: 000340f9  ldr x0, [x24]
0x06A83AE4: 6ff41b97  bl #0x3180ca0
0x06A83AE8: 220340f9  ldr x2, [x25]
0x06A83AEC: e10316aa  mov x1, x22
0x06A83AF0: e3031faa  mov x3, xzr
0x06A83AF4: f50300aa  mov x21, x0
0x06A83AF8: 31499f97  bl #0x5255fbc
0x06A83AFC: 420340f9  ldr x2, [x26]
0x06A83B00: e00314aa  mov x0, x20
0x06A83B04: e10315aa  mov x1, x21
0x06A83B08: e80d4897  bl #0x3c872a8
0x06A83B0C: 680340f9  ldr x8, [x27]
0x06A83B10: f40300aa  mov x20, x0
0x06A83B14: e00308aa  mov x0, x8
0x06A83B18: 62f41b97  bl #0x3180ca0
0x06A83B1C: 820340f9  ldr x2, [x28]
0x06A83B20: e10316aa  mov x1, x22
0x06A83B24: e3031faa  mov x3, xzr
0x06A83B28: f50300aa  mov x21, x0
0x06A83B2C: ce4a9f97  bl #0x5256664
0x06A83B30: a20340f9  ldr x2, [x29]
0x06A83B34: e00314aa  mov x0, x20
0x06A83B38: e10315aa  mov x1, x21
0x06A83B3C: 5c324797  bl #0x3c504ac
0x06A83B40: e10240f9  ldr x1, [x23]
0x06A83B44: 215f4797  bl #0x3c5b7c8
0x06A83B48: 686500d0  adrp x8, #0x7731000
0x06A83B4C: 08c545f9  ldr x8, [x8, #0xb88]
0x06A83B50: f40300aa  mov x20, x0
0x06A83B54: 010140f9  ldr x1, [x8]
0x06A83B58: d2904597  bl #0x3be7ea0
0x06A83B5C: 20010036  tbz w0, #0, #0x6a83b80
0x06A83B60: f44f45a9  ldp x20, x19, [sp, #0x50]
0x06A83B64: f65744a9  ldp x22, x21, [sp, #0x40]
0x06A83B68: f85f43a9  ldp x24, x23, [sp, #0x30]
0x06A83B6C: fa6742a9  ldp x26, x25, [sp, #0x20]
0x06A83B70: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x06A83B74: e0031f2a  mov w0, wzr
0x06A83B78: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x06A83B7C: c0035fd6  ret
0x06A83B80: 086100f0  adrp x8, #0x76a6000
0x06A83B84: 084147f9  ldr x8, [x8, #0xe80]
0x06A83B88: 000140f9  ldr x0, [x8]
0x06A83B8C: 45f41b97  bl #0x3180ca0
0x06A83B90: 730200b4  cbz x19, #0x6a83bdc
0x06A83B94: 680240f9  ldr x8, [x19]
0x06A83B98: e10313aa  mov x1, x19
0x06A83B9C: e3031faa  mov x3, xzr
0x06A83BA0: f50300aa  mov x21, x0
0x06A83BA4: 024141f9  ldr x2, [x8, #0x280]
0x06A83BA8: b9409f97  bl #0x5253e8c
0x06A83BAC: 686500d0  adrp x8, #0x7731000
0x06A83BB0: 08c945f9  ldr x8, [x8, #0xb90]
0x06A83BB4: e00314aa  mov x0, x20
0x06A83BB8: e10315aa  mov x1, x21
0x06A83BBC: f44f45a9  ldp x20, x19, [sp, #0x50]
0x06A83BC0: 020140f9  ldr x2, [x8]
0x06A83BC4: f65744a9  ldp x22, x21, [sp, #0x40]
0x06A83BC8: f85f43a9  ldp x24, x23, [sp, #0x30]
0x06A83BCC: fa6742a9  ldp x26, x25, [sp, #0x20]
0x06A83BD0: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x06A83BD4: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x06A83BD8: 2c574717  b #0x3c59888
0x06A83BDC: 34f41b97  bl #0x3180cac

; RVA 0x6A838EC | private int GetMaxItemMergeValue(IMergeGraphItem toolGraph) { }
; bytes=192 sha256=22351241e7733a607d53d2e4e0f0c17655e1b2aed67e936a0b702a438d020eba status=arm64_complete_bound indexed_start=True
0x06A838EC: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A838F0: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A838F4: 349500f0  adrp x20, #0x7d2a000
0x06A838F8: 88f65d39  ldrb w8, [x20, #0x77d]
0x06A838FC: f30301aa  mov x19, x1
0x06A83900: 28010037  tbnz w8, #0, #0x6a83924
0x06A83904: c05f00b0  adrp x0, #0x767c000
0x06A83908: 002441f9  ldr x0, [x0, #0x248]
0x06A8390C: 43f41b97  bl #0x3180a18
0x06A83910: c05f00f0  adrp x0, #0x767e000
0x06A83914: 008442f9  ldr x0, [x0, #0x508]
0x06A83918: 40f41b97  bl #0x3180a18
0x06A8391C: 28008052  movz w8, #0x1
0x06A83920: 88f61d39  strb w8, [x20, #0x77d]
0x06A83924: 330400b4  cbz x19, #0x6a839a8
0x06A83928: ca5f00b0  adrp x10, #0x767c000
0x06A8392C: 680240f9  ldr x8, [x19]
0x06A83930: 4a2541f9  ldr x10, [x10, #0x248]
0x06A83934: 095d4279  ldrh w9, [x8, #0x12e]
0x06A83938: 410140f9  ldr x1, [x10]
0x06A8393C: 290100b4  cbz x9, #0x6a83960
0x06A83940: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A83944: 4a210091  add x10, x10, #8
0x06A83948: 4b815ff8  ldur x11, [x10, #-8]
0x06A8394C: 7f0101eb  cmp x11, x1
0x06A83950: 00010054  b.eq #0x6a83970
0x06A83954: 290500f1  subs x9, x9, #1
0x06A83958: 4a410091  add x10, x10, #0x10
0x06A8395C: 61ffff54  b.ne #0x6a83948
0x06A83960: e00313aa  mov x0, x19
0x06A83964: e2031f2a  mov w2, wzr
0x06A83968: 6a4c1b97  bl #0x3156b10
0x06A8396C: 04000014  b #0x6a8397c
0x06A83970: 490180b9  ldrsw x9, [x10]
0x06A83974: 0811098b  add x8, x8, x9, lsl #4
0x06A83978: 00e10491  add x0, x8, #0x138
0x06A8397C: 080440a9  ldp x8, x1, [x0]
0x06A83980: e00313aa  mov x0, x19
0x06A83984: 00013fd6  blr x8
0x06A83988: 000100b4  cbz x0, #0x6a839a8
0x06A8398C: 081840b9  ldr w8, [x0, #0x18]
0x06A83990: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A83994: 29008052  movz w9, #0x1
0x06A83998: 08050051  sub w8, w8, #1
0x06A8399C: 2021c81a  lsl w0, w9, w8
0x06A839A0: fe0742f8  ldr x30, [sp], #0x20
0x06A839A4: c0035fd6  ret
0x06A839A8: c1f41b97  bl #0x3180cac

; RVA 0x6A8434C | private List<WeightedTool> GetFilteredTools(List<WeightedTool> availableToolsToSpawn, Dictionary<PlayerResourceEnum, ToolProgressionData> toolsProgressionOnBoard) { }
; bytes=176 sha256=c7818dde26ad09f3d700614c14323c11ef5ff87cb10bbc2ac7dbf3883d25c3d4 status=arm64_complete_bound indexed_start=True
0x06A8434C: fe0f1cf8  str x30, [sp, #-0x40]!
0x06A84350: f85f01a9  stp x24, x23, [sp, #0x10]
0x06A84354: f65702a9  stp x22, x21, [sp, #0x20]
0x06A84358: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A8435C: 389500d0  adrp x24, #0x7d2a000
0x06A84360: f75f0090  adrp x23, #0x7680000
0x06A84364: f65f0090  adrp x22, #0x7680000
0x06A84368: 756500b0  adrp x21, #0x7731000
0x06A8436C: 08fb5d39  ldrb w8, [x24, #0x77e]
0x06A84370: f75240f9  ldr x23, [x23, #0xa0]
0x06A84374: d65640f9  ldr x22, [x22, #0xa8]
0x06A84378: b5f645f9  ldr x21, [x21, #0xbe8]
0x06A8437C: f40302aa  mov x20, x2
0x06A84380: f30301aa  mov x19, x1
0x06A84384: 88010037  tbnz w8, #0, #0x6a843b4
0x06A84388: 606500b0  adrp x0, #0x7731000
0x06A8438C: 00f445f9  ldr x0, [x0, #0xbe8]
0x06A84390: a2f11b97  bl #0x3180a18
0x06A84394: e05f0090  adrp x0, #0x7680000
0x06A84398: 005440f9  ldr x0, [x0, #0xa8]
0x06A8439C: 9ff11b97  bl #0x3180a18
0x06A843A0: e05f0090  adrp x0, #0x7680000
0x06A843A4: 005040f9  ldr x0, [x0, #0xa0]
0x06A843A8: 9cf11b97  bl #0x3180a18
0x06A843AC: 28008052  movz w8, #0x1
0x06A843B0: 08fb1d39  strb w8, [x24, #0x77e]
0x06A843B4: e10314aa  mov x1, x20
0x06A843B8: 48010094  bl #0x6a848d8
0x06A843BC: e20240f9  ldr x2, [x23]
0x06A843C0: e10300aa  mov x1, x0
0x06A843C4: e00313aa  mov x0, x19
0x06A843C8: f30d4897  bl #0x3c87b94
0x06A843CC: c10240f9  ldr x1, [x22]
0x06A843D0: 7c6f4797  bl #0x3c601c0
0x06A843D4: a10240f9  ldr x1, [x21]
0x06A843D8: f40300aa  mov x20, x0
0x06A843DC: 51904597  bl #0x3be8520
0x06A843E0: 1f000072  tst w0, #1
0x06A843E4: 6012949a  csel x0, x19, x20, ne
0x06A843E8: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A843EC: f65742a9  ldp x22, x21, [sp, #0x20]
0x06A843F0: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06A843F4: fe0744f8  ldr x30, [sp], #0x40
0x06A843F8: c0035fd6  ret

; RVA 0x6A848D8 | private Func<WeightedTool, bool> GetToolSpawnPriorityStrategy(Dictionary<PlayerResourceEnum, ToolProgressionData> toolsProgressionOnBoard) { }
; bytes=672 sha256=a4d7b47c184e9b829080c67fd7767cb939a4ca78b6a03d037564d9884f4cf75c status=arm64_complete_bound indexed_start=True
0x06A848D8: fe67bca9  stp x30, x25, [sp, #-0x40]!
0x06A848DC: f85f01a9  stp x24, x23, [sp, #0x10]
0x06A848E0: f65702a9  stp x22, x21, [sp, #0x20]
0x06A848E4: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A848E8: 339500d0  adrp x19, #0x7d2a000
0x06A848EC: 756500b0  adrp x21, #0x7731000
0x06A848F0: 776500b0  adrp x23, #0x7731000
0x06A848F4: 68fe5d39  ldrb w8, [x19, #0x77f]
0x06A848F8: b5fa45f9  ldr x21, [x21, #0xbf0]
0x06A848FC: f7da45f9  ldr x23, [x23, #0xbb0]
0x06A84900: f40301aa  mov x20, x1
0x06A84904: 48050037  tbnz w8, #0, #0x6a849ac
0x06A84908: 606500b0  adrp x0, #0x7731000
0x06A8490C: 00fc45f9  ldr x0, [x0, #0xbf8]
0x06A84910: 42f01b97  bl #0x3180a18
0x06A84914: 80640090  adrp x0, #0x7714000
0x06A84918: 00f444f9  ldr x0, [x0, #0x9e8]
0x06A8491C: 3ff01b97  bl #0x3180a18
0x06A84920: 606500b0  adrp x0, #0x7731000
0x06A84924: 000046f9  ldr x0, [x0, #0xc00]
0x06A84928: 3cf01b97  bl #0x3180a18
0x06A8492C: 606500b0  adrp x0, #0x7731000
0x06A84930: 000446f9  ldr x0, [x0, #0xc08]
0x06A84934: 39f01b97  bl #0x3180a18
0x06A84938: e05f0090  adrp x0, #0x7680000
0x06A8493C: 005c40f9  ldr x0, [x0, #0xb8]
0x06A84940: 36f01b97  bl #0x3180a18
0x06A84944: 606500b0  adrp x0, #0x7731000
0x06A84948: 000846f9  ldr x0, [x0, #0xc10]
0x06A8494C: 33f01b97  bl #0x3180a18
0x06A84950: c05f0090  adrp x0, #0x767c000
0x06A84954: 007041f9  ldr x0, [x0, #0x2e0]
0x06A84958: 30f01b97  bl #0x3180a18
0x06A8495C: 606500b0  adrp x0, #0x7731000
0x06A84960: 000c46f9  ldr x0, [x0, #0xc18]
0x06A84964: 2df01b97  bl #0x3180a18
0x06A84968: 606500b0  adrp x0, #0x7731000
0x06A8496C: 001046f9  ldr x0, [x0, #0xc20]
0x06A84970: 2af01b97  bl #0x3180a18
0x06A84974: 606500b0  adrp x0, #0x7731000
0x06A84978: 001446f9  ldr x0, [x0, #0xc28]
0x06A8497C: 27f01b97  bl #0x3180a18
0x06A84980: 606500b0  adrp x0, #0x7731000
0x06A84984: 001846f9  ldr x0, [x0, #0xc30]
0x06A84988: 24f01b97  bl #0x3180a18
0x06A8498C: 606500b0  adrp x0, #0x7731000
0x06A84990: 00f845f9  ldr x0, [x0, #0xbf0]
0x06A84994: 21f01b97  bl #0x3180a18
0x06A84998: 606500b0  adrp x0, #0x7731000
0x06A8499C: 00d845f9  ldr x0, [x0, #0xbb0]
0x06A849A0: 1ef01b97  bl #0x3180a18
0x06A849A4: 28008052  movz w8, #0x1
0x06A849A8: 68fe1d39  strb w8, [x19, #0x77f]
0x06A849AC: a00240f9  ldr x0, [x21]
0x06A849B0: bcf01b97  bl #0x3180ca0
0x06A849B4: e1031faa  mov x1, xzr
0x06A849B8: f30300aa  mov x19, x0
0x06A849BC: 7d010094  bl #0x6a84fb0
0x06A849C0: e00240f9  ldr x0, [x23]
0x06A849C4: 08e040b9  ldr w8, [x0, #0xe0]
0x06A849C8: 68000035  cbnz w8, #0x6a849d4
0x06A849CC: 70f01b97  bl #0x3180b8c
0x06A849D0: e00240f9  ldr x0, [x23]
0x06A849D4: 085c40f9  ldr x8, [x0, #0xb8]
0x06A849D8: 786500b0  adrp x24, #0x7731000
0x06A849DC: 151540f9  ldr x21, [x8, #0x28]
0x06A849E0: 180346f9  ldr x24, [x24, #0xc00]
0x06A849E4: f50200b5  cbnz x21, #0x6a84a40
0x06A849E8: 08e040b9  ldr w8, [x0, #0xe0]
0x06A849EC: 68000035  cbnz w8, #0x6a849f8
0x06A849F0: 67f01b97  bl #0x3180b8c
0x06A849F4: e00240f9  ldr x0, [x23]
0x06A849F8: 696500b0  adrp x9, #0x7731000
0x06A849FC: 085c40f9  ldr x8, [x0, #0xb8]
0x06A84A00: 290946f9  ldr x9, [x9, #0xc10]
0x06A84A04: 160140f9  ldr x22, [x8]
0x06A84A08: 200140f9  ldr x0, [x9]
0x06A84A0C: a5f01b97  bl #0x3180ca0
0x06A84A10: 686500b0  adrp x8, #0x7731000
0x06A84A14: 080d46f9  ldr x8, [x8, #0xc18]
0x06A84A18: e10316aa  mov x1, x22
0x06A84A1C: e3031faa  mov x3, xzr
0x06A84A20: f50300aa  mov x21, x0
0x06A84A24: 020140f9  ldr x2, [x8]
0x06A84A28: ac1c9f97  bl #0x524bcd8
0x06A84A2C: e80240f9  ldr x8, [x23]
0x06A84A30: e10315aa  mov x1, x21
0x06A84A34: 005d40f9  ldr x0, [x8, #0xb8]
0x06A84A38: 158c02f8  str x21, [x0, #0x28]!
0x06A84A3C: e2ef1b97  bl #0x31809c4
0x06A84A40: 020340f9  ldr x2, [x24]
0x06A84A44: e00314aa  mov x0, x20
0x06A84A48: e10315aa  mov x1, x21
0x06A84A4C: 05034897  bl #0x3c85660
0x06A84A50: e80240f9  ldr x8, [x23]
0x06A84A54: f40300aa  mov x20, x0
0x06A84A58: 09e140b9  ldr w9, [x8, #0xe0]
0x06A84A5C: 89000035  cbnz w9, #0x6a84a6c
0x06A84A60: e00308aa  mov x0, x8
0x06A84A64: 4af01b97  bl #0x3180b8c
0x06A84A68: e80240f9  ldr x8, [x23]
0x06A84A6C: 095d40f9  ldr x9, [x8, #0xb8]
0x06A84A70: 796500b0  adrp x25, #0x7731000
0x06A84A74: 98640090  adrp x24, #0x7714000
0x06A84A78: 351940f9  ldr x21, [x9, #0x30]
0x06A84A7C: 39ff45f9  ldr x25, [x25, #0xbf8]
0x06A84A80: 18f744f9  ldr x24, [x24, #0x9e8]
0x06A84A84: 150300b5  cbnz x21, #0x6a84ae4
0x06A84A88: 09e140b9  ldr w9, [x8, #0xe0]
0x06A84A8C: 89000035  cbnz w9, #0x6a84a9c
0x06A84A90: e00308aa  mov x0, x8
0x06A84A94: 3ef01b97  bl #0x3180b8c
0x06A84A98: e80240f9  ldr x8, [x23]
0x06A84A9C: 696500b0  adrp x9, #0x7731000
0x06A84AA0: 085d40f9  ldr x8, [x8, #0xb8]
0x06A84AA4: 290546f9  ldr x9, [x9, #0xc08]
0x06A84AA8: 160140f9  ldr x22, [x8]
0x06A84AAC: 200140f9  ldr x0, [x9]
0x06A84AB0: 7cf01b97  bl #0x3180ca0
0x06A84AB4: 686500b0  adrp x8, #0x7731000
0x06A84AB8: 081146f9  ldr x8, [x8, #0xc20]
0x06A84ABC: e10316aa  mov x1, x22
0x06A84AC0: e3031faa  mov x3, xzr
0x06A84AC4: f50300aa  mov x21, x0
0x06A84AC8: 020140f9  ldr x2, [x8]
0x06A84ACC: 0a1d9f97  bl #0x524bef4
0x06A84AD0: e80240f9  ldr x8, [x23]
0x06A84AD4: e10315aa  mov x1, x21
0x06A84AD8: 005d40f9  ldr x0, [x8, #0xb8]
0x06A84ADC: 150c03f8  str x21, [x0, #0x30]!
0x06A84AE0: b9ef1b97  bl #0x31809c4
0x06A84AE4: 220340f9  ldr x2, [x25]
0x06A84AE8: e00314aa  mov x0, x20
0x06A84AEC: e10315aa  mov x1, x21
0x06A84AF0: b61e4797  bl #0x3c4c5c8
0x06A84AF4: 010340f9  ldr x1, [x24]
0x06A84AF8: d96c4797  bl #0x3c5fe5c
0x06A84AFC: d30300b4  cbz x19, #0x6a84b74
0x06A84B00: f40313aa  mov x20, x19
0x06A84B04: 800e01f8  str x0, [x20, #0x10]!
0x06A84B08: e10300aa  mov x1, x0
0x06A84B0C: e00314aa  mov x0, x20
0x06A84B10: adef1b97  bl #0x31809c4
0x06A84B14: 880240f9  ldr x8, [x20]
0x06A84B18: e80200b4  cbz x8, #0x6a84b74
0x06A84B1C: e95f0090  adrp x9, #0x7680000
0x06A84B20: 295d40f9  ldr x9, [x9, #0xb8]
0x06A84B24: 756500b0  adrp x21, #0x7731000
0x06A84B28: 766500b0  adrp x22, #0x7731000
0x06A84B2C: 141940b9  ldr w20, [x8, #0x18]
0x06A84B30: 200140f9  ldr x0, [x9]
0x06A84B34: b51646f9  ldr x21, [x21, #0xc28]
0x06A84B38: d61a46f9  ldr x22, [x22, #0xc30]
0x06A84B3C: 59f01b97  bl #0x3180ca0
0x06A84B40: 9f0a0071  cmp w20, #2
0x06A84B44: a8b2969a  csel x8, x21, x22, lt
0x06A84B48: 020140f9  ldr x2, [x8]
0x06A84B4C: e10313aa  mov x1, x19
0x06A84B50: e3031faa  mov x3, xzr
0x06A84B54: f40300aa  mov x20, x0
0x06A84B58: d0579f97  bl #0x525aa98
0x06A84B5C: e00314aa  mov x0, x20
0x06A84B60: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A84B64: f65742a9  ldp x22, x21, [sp, #0x20]
0x06A84B68: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06A84B6C: fe67c4a8  ldp x30, x25, [sp], #0x40
0x06A84B70: c0035fd6  ret
0x06A84B74: 4ef01b97  bl #0x3180cac

; RVA 0x6A84B78 | public void .ctor() { }
; bytes=276 sha256=acd6d33e2b35844eb95fc23a9045328f479e244d35654dc8e7fc9171f0beff35 status=arm64_complete_bound indexed_start=True
0x06A84B78: fe67bca9  stp x30, x25, [sp, #-0x40]!
0x06A84B7C: f85f01a9  stp x24, x23, [sp, #0x10]
0x06A84B80: f65702a9  stp x22, x21, [sp, #0x20]
0x06A84B84: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A84B88: 349500d0  adrp x20, #0x7d2a000
0x06A84B8C: f95f0090  adrp x25, #0x7680000
0x06A84B90: f85f0090  adrp x24, #0x7680000
0x06A84B94: f75f0090  adrp x23, #0x7680000
0x06A84B98: f65f0090  adrp x22, #0x7680000
0x06A84B9C: f55f0090  adrp x21, #0x7680000
0x06A84BA0: 88025e39  ldrb w8, [x20, #0x780]
0x06A84BA4: 39a340f9  ldr x25, [x25, #0x140]
0x06A84BA8: 189340f9  ldr x24, [x24, #0x120]
0x06A84BAC: f79640f9  ldr x23, [x23, #0x128]
0x06A84BB0: d69a40f9  ldr x22, [x22, #0x130]
0x06A84BB4: b59e40f9  ldr x21, [x21, #0x138]
0x06A84BB8: f30300aa  mov x19, x0
0x06A84BBC: 48020037  tbnz w8, #0, #0x6a84c04
0x06A84BC0: e05f0090  adrp x0, #0x7680000
0x06A84BC4: 009440f9  ldr x0, [x0, #0x128]
0x06A84BC8: 94ef1b97  bl #0x3180a18
0x06A84BCC: e05f0090  adrp x0, #0x7680000
0x06A84BD0: 009c40f9  ldr x0, [x0, #0x138]
0x06A84BD4: 91ef1b97  bl #0x3180a18
0x06A84BD8: e05f0090  adrp x0, #0x7680000
0x06A84BDC: 009840f9  ldr x0, [x0, #0x130]
0x06A84BE0: 8eef1b97  bl #0x3180a18
0x06A84BE4: e05f0090  adrp x0, #0x7680000
0x06A84BE8: 009040f9  ldr x0, [x0, #0x120]
0x06A84BEC: 8bef1b97  bl #0x3180a18
0x06A84BF0: e05f0090  adrp x0, #0x7680000
0x06A84BF4: 00a040f9  ldr x0, [x0, #0x140]
0x06A84BF8: 88ef1b97  bl #0x3180a18
0x06A84BFC: 28008052  movz w8, #0x1
0x06A84C00: 88021e39  strb w8, [x20, #0x780]
0x06A84C04: 200340f9  ldr x0, [x25]
0x06A84C08: 26f01b97  bl #0x3180ca0
0x06A84C0C: e1031faa  mov x1, xzr
0x06A84C10: f40300aa  mov x20, x0
0x06A84C14: 954ff497  bl #0x6798a68
0x06A84C18: e00313aa  mov x0, x19
0x06A84C1C: 148c06f8  str x20, [x0, #0x68]!
0x06A84C20: e10314aa  mov x1, x20
0x06A84C24: 68ef1b97  bl #0x31809c4
0x06A84C28: 000340f9  ldr x0, [x24]
0x06A84C2C: 1df01b97  bl #0x3180ca0
0x06A84C30: e10240f9  ldr x1, [x23]
0x06A84C34: f40300aa  mov x20, x0
0x06A84C38: 91c09097  bl #0x4eb4e7c
0x06A84C3C: e00313aa  mov x0, x19
0x06A84C40: 140c07f8  str x20, [x0, #0x70]!
0x06A84C44: e10314aa  mov x1, x20
0x06A84C48: 5fef1b97  bl #0x31809c4
0x06A84C4C: c00240f9  ldr x0, [x22]
0x06A84C50: 14f01b97  bl #0x3180ca0
0x06A84C54: a10240f9  ldr x1, [x21]
0x06A84C58: f40300aa  mov x20, x0
0x06A84C5C: 13718f97  bl #0x4e610a8
0x06A84C60: e00313aa  mov x0, x19
0x06A84C64: 148c07f8  str x20, [x0, #0x78]!
0x06A84C68: e10314aa  mov x1, x20
0x06A84C6C: 56ef1b97  bl #0x31809c4
0x06A84C70: e00313aa  mov x0, x19
0x06A84C74: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A84C78: f65742a9  ldp x22, x21, [sp, #0x20]
0x06A84C7C: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06A84C80: e1031faa  mov x1, xzr
0x06A84C84: fe67c4a8  ldp x30, x25, [sp], #0x40
0x06A84C88: 9db8f817  b #0x68b2efc

