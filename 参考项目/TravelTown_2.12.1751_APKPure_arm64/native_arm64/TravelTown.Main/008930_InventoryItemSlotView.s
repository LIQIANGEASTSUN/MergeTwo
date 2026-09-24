; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 8930 Merger.Game.Views.Inventory.InventoryItemSlotView
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6707170 | public void add_TryRemove(Action<int> value) { }
; bytes=176 sha256=75772002b6cfb457b018b7776d387ddda366bee741b74f984fe8027e1fbb71db status=arm64_complete_bound indexed_start=True
0x06707170: fe0f1cf8  str x30, [sp, #-0x40]!
0x06707174: f85f01a9  stp x24, x23, [sp, #0x10]
0x06707178: f65702a9  stp x22, x21, [sp, #0x20]
0x0670717C: f44f03a9  stp x20, x19, [sp, #0x30]
0x06707180: 15b100b0  adrp x21, #0x7d28000
0x06707184: a88e5e39  ldrb w8, [x21, #0x7a3]
0x06707188: f30301aa  mov x19, x1
0x0670718C: f40300aa  mov x20, x0
0x06707190: c8000037  tbnz w8, #0, #0x67071a8
0x06707194: 607b0090  adrp x0, #0x7673000
0x06707198: 001440f9  ldr x0, [x0, #0x28]
0x0670719C: 1fe62997  bl #0x3180a18
0x067071A0: 28008052  movz w8, #0x1
0x067071A4: a88e1e39  strb w8, [x21, #0x7a3]
0x067071A8: 787b0090  adrp x24, #0x7673000
0x067071AC: 950e45f8  ldr x21, [x20, #0x50]!
0x067071B0: 181740f9  ldr x24, [x24, #0x28]
0x067071B4: e00315aa  mov x0, x21
0x067071B8: e10313aa  mov x1, x19
0x067071BC: e2031faa  mov x2, xzr
0x067071C0: 585abf97  bl #0x56ddb20
0x067071C4: 000100b4  cbz x0, #0x67071e4
0x067071C8: 170340f9  ldr x23, [x24]
0x067071CC: f60300aa  mov x22, x0
0x067071D0: e10317aa  mov x1, x23
0x067071D4: 6fe62997  bl #0x3180b90
0x067071D8: e10300aa  mov x1, x0
0x067071DC: 600000b5  cbnz x0, #0x67071e8
0x067071E0: 0d000014  b #0x6707214
0x067071E4: e1031faa  mov x1, xzr
0x067071E8: e00314aa  mov x0, x20
0x067071EC: e20315aa  mov x2, x21
0x067071F0: d4572b97  bl #0x31dd140
0x067071F4: bf0200eb  cmp x21, x0
0x067071F8: f50300aa  mov x21, x0
0x067071FC: c1fdff54  b.ne #0x67071b4
0x06707200: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06707204: f65742a9  ldp x22, x21, [sp, #0x20]
0x06707208: f85f41a9  ldp x24, x23, [sp, #0x10]
0x0670720C: fe0744f8  ldr x30, [sp], #0x40
0x06707210: c0035fd6  ret
0x06707214: e00316aa  mov x0, x22
0x06707218: e10317aa  mov x1, x23
0x0670721C: 8be72997  bl #0x3181048

; RVA 0x6707220 | public void remove_TryRemove(Action<int> value) { }
; bytes=176 sha256=42c19a67a0c0f2a450235de0626ed4a6aa5f6af4ab3d812510b0092c11612471 status=arm64_complete_bound indexed_start=True
0x06707220: fe0f1cf8  str x30, [sp, #-0x40]!
0x06707224: f85f01a9  stp x24, x23, [sp, #0x10]
0x06707228: f65702a9  stp x22, x21, [sp, #0x20]
0x0670722C: f44f03a9  stp x20, x19, [sp, #0x30]
0x06707230: 15b100b0  adrp x21, #0x7d28000
0x06707234: a8925e39  ldrb w8, [x21, #0x7a4]
0x06707238: f30301aa  mov x19, x1
0x0670723C: f40300aa  mov x20, x0
0x06707240: c8000037  tbnz w8, #0, #0x6707258
0x06707244: 607b0090  adrp x0, #0x7673000
0x06707248: 001440f9  ldr x0, [x0, #0x28]
0x0670724C: f3e52997  bl #0x3180a18
0x06707250: 28008052  movz w8, #0x1
0x06707254: a8921e39  strb w8, [x21, #0x7a4]
0x06707258: 787b0090  adrp x24, #0x7673000
0x0670725C: 950e45f8  ldr x21, [x20, #0x50]!
0x06707260: 181740f9  ldr x24, [x24, #0x28]
0x06707264: e00315aa  mov x0, x21
0x06707268: e10313aa  mov x1, x19
0x0670726C: e2031faa  mov x2, xzr
0x06707270: aa5abf97  bl #0x56ddd18
0x06707274: 000100b4  cbz x0, #0x6707294
0x06707278: 170340f9  ldr x23, [x24]
0x0670727C: f60300aa  mov x22, x0
0x06707280: e10317aa  mov x1, x23
0x06707284: 43e62997  bl #0x3180b90
0x06707288: e10300aa  mov x1, x0
0x0670728C: 600000b5  cbnz x0, #0x6707298
0x06707290: 0d000014  b #0x67072c4
0x06707294: e1031faa  mov x1, xzr
0x06707298: e00314aa  mov x0, x20
0x0670729C: e20315aa  mov x2, x21
0x067072A0: a8572b97  bl #0x31dd140
0x067072A4: bf0200eb  cmp x21, x0
0x067072A8: f50300aa  mov x21, x0
0x067072AC: c1fdff54  b.ne #0x6707264
0x067072B0: f44f43a9  ldp x20, x19, [sp, #0x30]
0x067072B4: f65742a9  ldp x22, x21, [sp, #0x20]
0x067072B8: f85f41a9  ldp x24, x23, [sp, #0x10]
0x067072BC: fe0744f8  ldr x30, [sp], #0x40
0x067072C0: c0035fd6  ret
0x067072C4: e00316aa  mov x0, x22
0x067072C8: e10317aa  mov x1, x23
0x067072CC: 5fe72997  bl #0x3181048

; RVA 0x67072D0 | public void add_InfoRequested(Action<IMergeItem, string> value) { }
; bytes=176 sha256=0ff916aaece9055af0b99aee35c7ab32768c7a28a4d59139f1df84a7459600bf status=arm64_complete_bound indexed_start=True
0x067072D0: fe0f1cf8  str x30, [sp, #-0x40]!
0x067072D4: f85f01a9  stp x24, x23, [sp, #0x10]
0x067072D8: f65702a9  stp x22, x21, [sp, #0x20]
0x067072DC: f44f03a9  stp x20, x19, [sp, #0x30]
0x067072E0: 15b100b0  adrp x21, #0x7d28000
0x067072E4: a8965e39  ldrb w8, [x21, #0x7a5]
0x067072E8: f30301aa  mov x19, x1
0x067072EC: f40300aa  mov x20, x0
0x067072F0: c8000037  tbnz w8, #0, #0x6707308
0x067072F4: 20800090  adrp x0, #0x770b000
0x067072F8: 008042f9  ldr x0, [x0, #0x500]
0x067072FC: c7e52997  bl #0x3180a18
0x06707300: 28008052  movz w8, #0x1
0x06707304: a8961e39  strb w8, [x21, #0x7a5]
0x06707308: 38800090  adrp x24, #0x770b000
0x0670730C: 958e45f8  ldr x21, [x20, #0x58]!
0x06707310: 188342f9  ldr x24, [x24, #0x500]
0x06707314: e00315aa  mov x0, x21
0x06707318: e10313aa  mov x1, x19
0x0670731C: e2031faa  mov x2, xzr
0x06707320: 005abf97  bl #0x56ddb20
0x06707324: 000100b4  cbz x0, #0x6707344
0x06707328: 170340f9  ldr x23, [x24]
0x0670732C: f60300aa  mov x22, x0
0x06707330: e10317aa  mov x1, x23
0x06707334: 17e62997  bl #0x3180b90
0x06707338: e10300aa  mov x1, x0
0x0670733C: 600000b5  cbnz x0, #0x6707348
0x06707340: 0d000014  b #0x6707374
0x06707344: e1031faa  mov x1, xzr
0x06707348: e00314aa  mov x0, x20
0x0670734C: e20315aa  mov x2, x21
0x06707350: 7c572b97  bl #0x31dd140
0x06707354: bf0200eb  cmp x21, x0
0x06707358: f50300aa  mov x21, x0
0x0670735C: c1fdff54  b.ne #0x6707314
0x06707360: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06707364: f65742a9  ldp x22, x21, [sp, #0x20]
0x06707368: f85f41a9  ldp x24, x23, [sp, #0x10]
0x0670736C: fe0744f8  ldr x30, [sp], #0x40
0x06707370: c0035fd6  ret
0x06707374: e00316aa  mov x0, x22
0x06707378: e10317aa  mov x1, x23
0x0670737C: 33e72997  bl #0x3181048

; RVA 0x6707380 | public void remove_InfoRequested(Action<IMergeItem, string> value) { }
; bytes=176 sha256=98860cd678b6246b6de8c7034dba1c2256d1ac2ba4f0c6a0c63c6b8c9cc59491 status=arm64_complete_bound indexed_start=True
0x06707380: fe0f1cf8  str x30, [sp, #-0x40]!
0x06707384: f85f01a9  stp x24, x23, [sp, #0x10]
0x06707388: f65702a9  stp x22, x21, [sp, #0x20]
0x0670738C: f44f03a9  stp x20, x19, [sp, #0x30]
0x06707390: 15b100b0  adrp x21, #0x7d28000
0x06707394: a89a5e39  ldrb w8, [x21, #0x7a6]
0x06707398: f30301aa  mov x19, x1
0x0670739C: f40300aa  mov x20, x0
0x067073A0: c8000037  tbnz w8, #0, #0x67073b8
0x067073A4: 20800090  adrp x0, #0x770b000
0x067073A8: 008042f9  ldr x0, [x0, #0x500]
0x067073AC: 9be52997  bl #0x3180a18
0x067073B0: 28008052  movz w8, #0x1
0x067073B4: a89a1e39  strb w8, [x21, #0x7a6]
0x067073B8: 38800090  adrp x24, #0x770b000
0x067073BC: 958e45f8  ldr x21, [x20, #0x58]!
0x067073C0: 188342f9  ldr x24, [x24, #0x500]
0x067073C4: e00315aa  mov x0, x21
0x067073C8: e10313aa  mov x1, x19
0x067073CC: e2031faa  mov x2, xzr
0x067073D0: 525abf97  bl #0x56ddd18
0x067073D4: 000100b4  cbz x0, #0x67073f4
0x067073D8: 170340f9  ldr x23, [x24]
0x067073DC: f60300aa  mov x22, x0
0x067073E0: e10317aa  mov x1, x23
0x067073E4: ebe52997  bl #0x3180b90
0x067073E8: e10300aa  mov x1, x0
0x067073EC: 600000b5  cbnz x0, #0x67073f8
0x067073F0: 0d000014  b #0x6707424
0x067073F4: e1031faa  mov x1, xzr
0x067073F8: e00314aa  mov x0, x20
0x067073FC: e20315aa  mov x2, x21
0x06707400: 50572b97  bl #0x31dd140
0x06707404: bf0200eb  cmp x21, x0
0x06707408: f50300aa  mov x21, x0
0x0670740C: c1fdff54  b.ne #0x67073c4
0x06707410: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06707414: f65742a9  ldp x22, x21, [sp, #0x20]
0x06707418: f85f41a9  ldp x24, x23, [sp, #0x10]
0x0670741C: fe0744f8  ldr x30, [sp], #0x40
0x06707420: c0035fd6  ret
0x06707424: e00316aa  mov x0, x22
0x06707428: e10317aa  mov x1, x23
0x0670742C: 07e72997  bl #0x3181048

; RVA 0x6707430 | public override void set_MergeItem(IMergeItem value) { }
; bytes=116 sha256=ada93fad8c9bef2eb45dedf73fc6655ab957fbed1a5b7b2497a09aeb6069ceda status=arm64_complete_bound indexed_start=True
0x06707430: fe0f1ef8  str x30, [sp, #-0x20]!
0x06707434: f44f01a9  stp x20, x19, [sp, #0x10]
0x06707438: f30301aa  mov x19, x1
0x0670743C: f40300aa  mov x20, x0
0x06707440: a10000b5  cbnz x1, #0x6707454
0x06707444: 801a40f9  ldr x0, [x20, #0x30]
0x06707448: c00200b4  cbz x0, #0x67074a0
0x0670744C: e1031faa  mov x1, xzr
0x06707450: 13bc0694  bl #0x68b649c
0x06707454: e00314aa  mov x0, x20
0x06707458: e10313aa  mov x1, x19
0x0670745C: e2031faa  mov x2, xzr
0x06707460: 8c4b0094  bl #0x671a290
0x06707464: 930e07f8  str x19, [x20, #0x70]!
0x06707468: e00314aa  mov x0, x20
0x0670746C: e10313aa  mov x1, x19
0x06707470: 55e52997  bl #0x31809c4
0x06707474: 80025ff8  ldur x0, [x20, #-0x10]
0x06707478: 400100b4  cbz x0, #0x67074a0
0x0670747C: e1031faa  mov x1, xzr
0x06707480: 94521f94  bl #0x6edbed0
0x06707484: e00000b4  cbz x0, #0x67074a0
0x06707488: 7f0200f1  cmp x19, #0
0x0670748C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06707490: e1079f1a  cset w1, ne
0x06707494: e2031faa  mov x2, xzr
0x06707498: fe0742f8  ldr x30, [sp], #0x20
0x0670749C: 745f1f14  b #0x6edf26c
0x067074A0: 03e62997  bl #0x3180cac

; RVA 0x67074A4 | public void set_Asset(AssetReferenceT<Sprite> value) { }
; bytes=40 sha256=2edd60cc5bc66d89c0889a64e65e0b1759ade511916809828040ca1687ecc613 status=arm64_complete_bound indexed_start=True
0x067074A4: fe0f1ff8  str x30, [sp, #-0x10]!
0x067074A8: 001840f9  ldr x0, [x0, #0x30]
0x067074AC: e00000b4  cbz x0, #0x67074c8
0x067074B0: 810000b4  cbz x1, #0x67074c0
0x067074B4: e2031faa  mov x2, xzr
0x067074B8: fe0741f8  ldr x30, [sp], #0x10
0x067074BC: 8f960614  b #0x68acef8
0x067074C0: fe0741f8  ldr x30, [sp], #0x10
0x067074C4: f6bb0614  b #0x68b649c
0x067074C8: f9e52997  bl #0x3180cac

; RVA 0x67074CC | public int get_SlotIndex() { }
; bytes=8 sha256=ba575986dc1ab7330916797e2bd959021721fa4f384983e31b268900023397a8 status=arm64_complete_bound indexed_start=True
0x067074CC: 007840b9  ldr w0, [x0, #0x78]
0x067074D0: c0035fd6  ret

; RVA 0x67074D4 | public void set_SlotIndex(int value) { }
; bytes=8 sha256=55a8f8d182b035356eb3f8907161a2472f50eece176b5c83052ade897cedc65d status=arm64_complete_bound indexed_start=True
0x067074D4: 017800b9  str w1, [x0, #0x78]
0x067074D8: c0035fd6  ret

; RVA 0x67074DC | public string get_ItemUUID() { }
; bytes=8 sha256=509d712a0d747485a74d3684f00fd4941c9c210d3f084bf792b1b75c5e6c3652 status=arm64_complete_bound indexed_start=True
0x067074DC: 004040f9  ldr x0, [x0, #0x80]
0x067074E0: c0035fd6  ret

; RVA 0x67074E4 | public void set_ItemUUID(string value) { }
; bytes=8 sha256=b2ba12fc2c4aef607bfc67ed8d4706ca1f0de04615ea06aec688d83ebec22cfa status=arm64_complete_bound indexed_start=True
0x067074E4: 010c08f8  str x1, [x0, #0x80]!
0x067074E8: 37e52917  b #0x31809c4

; RVA 0x67074EC | private void Awake() { }
; bytes=216 sha256=5d3cab78b13da7aa4755bfa80e3d823f51d74a988e5170c003515034cdfedfaf status=arm64_complete_bound indexed_start=True
0x067074EC: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x067074F0: f65701a9  stp x22, x21, [sp, #0x10]
0x067074F4: f44f02a9  stp x20, x19, [sp, #0x20]
0x067074F8: 14b100b0  adrp x20, #0x7d28000
0x067074FC: 367a00f0  adrp x22, #0x764e000
0x06707500: 358000b0  adrp x21, #0x770c000
0x06707504: 889e5e39  ldrb w8, [x20, #0x7a7]
0x06707508: d6ae43f9  ldr x22, [x22, #0x758]
0x0670750C: b58a42f9  ldr x21, [x21, #0x510]
0x06707510: f30300aa  mov x19, x0
0x06707514: 88010037  tbnz w8, #0, #0x6707544
0x06707518: 207a00f0  adrp x0, #0x764e000
0x0670751C: 00ac43f9  ldr x0, [x0, #0x758]
0x06707520: 3ee52997  bl #0x3180a18
0x06707524: 208000b0  adrp x0, #0x770c000
0x06707528: 008842f9  ldr x0, [x0, #0x510]
0x0670752C: 3be52997  bl #0x3180a18
0x06707530: 208000b0  adrp x0, #0x770c000
0x06707534: 008c42f9  ldr x0, [x0, #0x518]
0x06707538: 38e52997  bl #0x3180a18
0x0670753C: 28008052  movz w8, #0x1
0x06707540: 889e1e39  strb w8, [x20, #0x7a7]
0x06707544: c00240f9  ldr x0, [x22]
0x06707548: 743640f9  ldr x20, [x19, #0x68]
0x0670754C: d5e52997  bl #0x3180ca0
0x06707550: a20240f9  ldr x2, [x21]
0x06707554: e10313aa  mov x1, x19
0x06707558: e3031faa  mov x3, xzr
0x0670755C: f50300aa  mov x21, x0
0x06707560: 7498bb97  bl #0x55ed730
0x06707564: f40200b4  cbz x20, #0x67075c0
0x06707568: 378000b0  adrp x23, #0x770c000
0x0670756C: f78e42f9  ldr x23, [x23, #0x518]
0x06707570: e00314aa  mov x0, x20
0x06707574: e10315aa  mov x1, x21
0x06707578: e2031faa  mov x2, xzr
0x0670757C: 40cd0694  bl #0x68baa7c
0x06707580: c00240f9  ldr x0, [x22]
0x06707584: 743240f9  ldr x20, [x19, #0x60]
0x06707588: c6e52997  bl #0x3180ca0
0x0670758C: e20240f9  ldr x2, [x23]
0x06707590: e10313aa  mov x1, x19
0x06707594: e3031faa  mov x3, xzr
0x06707598: f50300aa  mov x21, x0
0x0670759C: 6598bb97  bl #0x55ed730
0x067075A0: 140100b4  cbz x20, #0x67075c0
0x067075A4: e00314aa  mov x0, x20
0x067075A8: e10315aa  mov x1, x21
0x067075AC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x067075B0: f65741a9  ldp x22, x21, [sp, #0x10]
0x067075B4: e2031faa  mov x2, xzr
0x067075B8: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x067075BC: 30cd0614  b #0x68baa7c
0x067075C0: bbe52997  bl #0x3180cac

; RVA 0x67075C4 | private void ShowMergeGraphPopup() { }
; bytes=36 sha256=7c77e42f4c0d02787d5359e40e93e45a72273b171d7f00aa3ba6ffab85877535 status=arm64_complete_bound indexed_start=True
0x067075C4: 082c40f9  ldr x8, [x0, #0x58]
0x067075C8: e80000b4  cbz x8, #0x67075e4
0x067075CC: 024040f9  ldr x2, [x0, #0x80]
0x067075D0: 013840f9  ldr x1, [x0, #0x70]
0x067075D4: 040d40f9  ldr x4, [x8, #0x18]
0x067075D8: 002140f9  ldr x0, [x8, #0x40]
0x067075DC: 031540f9  ldr x3, [x8, #0x28]
0x067075E0: 80001fd6  br x4
0x067075E4: c0035fd6  ret

; RVA 0x67075E8 | private void RemoveFromInventory() { }
; bytes=40 sha256=7ad057a0dc2398b283ef272832937c0fbc7b154a669985f1fcd4ff99f716c7c6 status=arm64_complete_bound indexed_start=True
0x067075E8: 083840f9  ldr x8, [x0, #0x70]
0x067075EC: 080100b4  cbz x8, #0x670760c
0x067075F0: 082840f9  ldr x8, [x0, #0x50]
0x067075F4: c80000b4  cbz x8, #0x670760c
0x067075F8: 017840b9  ldr w1, [x0, #0x78]
0x067075FC: 030d40f9  ldr x3, [x8, #0x18]
0x06707600: 002140f9  ldr x0, [x8, #0x40]
0x06707604: 021540f9  ldr x2, [x8, #0x28]
0x06707608: 60001fd6  br x3
0x0670760C: c0035fd6  ret

; RVA 0x6707610 | public void .ctor() { }
; bytes=8 sha256=96c20d89480a600b71abd5b5ffc15a3b7f752b2852d1af75260b656868c8d378 status=arm64_complete_bound indexed_start=True
0x06707610: e1031faa  mov x1, xzr
0x06707614: 704b0014  b #0x671a3d4

