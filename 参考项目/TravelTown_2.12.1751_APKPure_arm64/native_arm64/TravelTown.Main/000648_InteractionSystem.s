; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 648 MergeEngine.ECS.Systems.InteractionSystem
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x627F170 | public override SystemPriorities get_Priority() { }
; bytes=8 sha256=d5b79016b9fb751da31585e8fe24a684680be6bc5e71460e2422f620bbe78195 status=arm64_complete_bound indexed_start=True
0x0627F170: 00018052  movz w0, #0x8
0x0627F174: c0035fd6  ret

; RVA 0x627F178 | public void add_ItemInteracted(Action<IMergeItem, BoardItemPosition, InteractionType, List<ItemMultiple>> value) { }
; bytes=176 sha256=1f590260bf4f1fb5ff59439e73e047865b7858c3c948abc009c3c55ae34a2746 status=arm64_complete_bound indexed_start=True
0x0627F178: fe0f1cf8  str x30, [sp, #-0x40]!
0x0627F17C: f85f01a9  stp x24, x23, [sp, #0x10]
0x0627F180: f65702a9  stp x22, x21, [sp, #0x20]
0x0627F184: f44f03a9  stp x20, x19, [sp, #0x30]
0x0627F188: 35d500d0  adrp x21, #0x7d25000
0x0627F18C: a8c25239  ldrb w8, [x21, #0x4b0]
0x0627F190: f30301aa  mov x19, x1
0x0627F194: f40300aa  mov x20, x0
0x0627F198: c8000037  tbnz w8, #0, #0x627f1b0
0x0627F19C: 20a300f0  adrp x0, #0x76e6000
0x0627F1A0: 003447f9  ldr x0, [x0, #0xe68]
0x0627F1A4: 1d063c97  bl #0x3180a18
0x0627F1A8: 28008052  movz w8, #0x1
0x0627F1AC: a8c21239  strb w8, [x21, #0x4b0]
0x0627F1B0: 38a300f0  adrp x24, #0x76e6000
0x0627F1B4: 958e48f8  ldr x21, [x20, #0x88]!
0x0627F1B8: 183747f9  ldr x24, [x24, #0xe68]
0x0627F1BC: e00315aa  mov x0, x21
0x0627F1C0: e10313aa  mov x1, x19
0x0627F1C4: e2031faa  mov x2, xzr
0x0627F1C8: 567ad197  bl #0x56ddb20
0x0627F1CC: 000100b4  cbz x0, #0x627f1ec
0x0627F1D0: 170340f9  ldr x23, [x24]
0x0627F1D4: f60300aa  mov x22, x0
0x0627F1D8: e10317aa  mov x1, x23
0x0627F1DC: 6d063c97  bl #0x3180b90
0x0627F1E0: e10300aa  mov x1, x0
0x0627F1E4: 600000b5  cbnz x0, #0x627f1f0
0x0627F1E8: 0d000014  b #0x627f21c
0x0627F1EC: e1031faa  mov x1, xzr
0x0627F1F0: e00314aa  mov x0, x20
0x0627F1F4: e20315aa  mov x2, x21
0x0627F1F8: d2773d97  bl #0x31dd140
0x0627F1FC: bf0200eb  cmp x21, x0
0x0627F200: f50300aa  mov x21, x0
0x0627F204: c1fdff54  b.ne #0x627f1bc
0x0627F208: f44f43a9  ldp x20, x19, [sp, #0x30]
0x0627F20C: f65742a9  ldp x22, x21, [sp, #0x20]
0x0627F210: f85f41a9  ldp x24, x23, [sp, #0x10]
0x0627F214: fe0744f8  ldr x30, [sp], #0x40
0x0627F218: c0035fd6  ret
0x0627F21C: e00316aa  mov x0, x22
0x0627F220: e10317aa  mov x1, x23
0x0627F224: 89073c97  bl #0x3181048

; RVA 0x627F228 | public void remove_ItemInteracted(Action<IMergeItem, BoardItemPosition, InteractionType, List<ItemMultiple>> value) { }
; bytes=176 sha256=f49e377db43817d9761c923a0d84c2a08f3f75b4e2ca16bed8078f78c6406cb5 status=arm64_complete_bound indexed_start=True
0x0627F228: fe0f1cf8  str x30, [sp, #-0x40]!
0x0627F22C: f85f01a9  stp x24, x23, [sp, #0x10]
0x0627F230: f65702a9  stp x22, x21, [sp, #0x20]
0x0627F234: f44f03a9  stp x20, x19, [sp, #0x30]
0x0627F238: 35d500d0  adrp x21, #0x7d25000
0x0627F23C: a8c65239  ldrb w8, [x21, #0x4b1]
0x0627F240: f30301aa  mov x19, x1
0x0627F244: f40300aa  mov x20, x0
0x0627F248: c8000037  tbnz w8, #0, #0x627f260
0x0627F24C: 20a300f0  adrp x0, #0x76e6000
0x0627F250: 003447f9  ldr x0, [x0, #0xe68]
0x0627F254: f1053c97  bl #0x3180a18
0x0627F258: 28008052  movz w8, #0x1
0x0627F25C: a8c61239  strb w8, [x21, #0x4b1]
0x0627F260: 38a300f0  adrp x24, #0x76e6000
0x0627F264: 958e48f8  ldr x21, [x20, #0x88]!
0x0627F268: 183747f9  ldr x24, [x24, #0xe68]
0x0627F26C: e00315aa  mov x0, x21
0x0627F270: e10313aa  mov x1, x19
0x0627F274: e2031faa  mov x2, xzr
0x0627F278: a87ad197  bl #0x56ddd18
0x0627F27C: 000100b4  cbz x0, #0x627f29c
0x0627F280: 170340f9  ldr x23, [x24]
0x0627F284: f60300aa  mov x22, x0
0x0627F288: e10317aa  mov x1, x23
0x0627F28C: 41063c97  bl #0x3180b90
0x0627F290: e10300aa  mov x1, x0
0x0627F294: 600000b5  cbnz x0, #0x627f2a0
0x0627F298: 0d000014  b #0x627f2cc
0x0627F29C: e1031faa  mov x1, xzr
0x0627F2A0: e00314aa  mov x0, x20
0x0627F2A4: e20315aa  mov x2, x21
0x0627F2A8: a6773d97  bl #0x31dd140
0x0627F2AC: bf0200eb  cmp x21, x0
0x0627F2B0: f50300aa  mov x21, x0
0x0627F2B4: c1fdff54  b.ne #0x627f26c
0x0627F2B8: f44f43a9  ldp x20, x19, [sp, #0x30]
0x0627F2BC: f65742a9  ldp x22, x21, [sp, #0x20]
0x0627F2C0: f85f41a9  ldp x24, x23, [sp, #0x10]
0x0627F2C4: fe0744f8  ldr x30, [sp], #0x40
0x0627F2C8: c0035fd6  ret
0x0627F2CC: e00316aa  mov x0, x22
0x0627F2D0: e10317aa  mov x1, x23
0x0627F2D4: 5d073c97  bl #0x3181048

; RVA 0x627F2D8 | protected override void ProcessComponents(ReadOnlyCollection<InteractionComponent> components) { }
; bytes=1124 sha256=82c204419ffc3f533d058f68fe3a69319a2ada446875d38eeed74c5b7fcc16cd status=arm64_complete_bound indexed_start=True
0x0627F2D8: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x0627F2DC: fc6f01a9  stp x28, x27, [sp, #0x10]
0x0627F2E0: fa6702a9  stp x26, x25, [sp, #0x20]
0x0627F2E4: f85f03a9  stp x24, x23, [sp, #0x30]
0x0627F2E8: f65704a9  stp x22, x21, [sp, #0x40]
0x0627F2EC: f44f05a9  stp x20, x19, [sp, #0x50]
0x0627F2F0: 35d500d0  adrp x21, #0x7d25000
0x0627F2F4: a8ca5239  ldrb w8, [x21, #0x4b2]
0x0627F2F8: f30301aa  mov x19, x1
0x0627F2FC: f40300aa  mov x20, x0
0x0627F300: 68030037  tbnz w8, #0, #0x627f36c
0x0627F304: c0a20090  adrp x0, #0x76d7000
0x0627F308: 00dc42f9  ldr x0, [x0, #0x5b8]
0x0627F30C: c3053c97  bl #0x3180a18
0x0627F310: 609e00f0  adrp x0, #0x764e000
0x0627F314: 006444f9  ldr x0, [x0, #0x8c8]
0x0627F318: c0053c97  bl #0x3180a18
0x0627F31C: 20a300f0  adrp x0, #0x76e6000
0x0627F320: 003847f9  ldr x0, [x0, #0xe70]
0x0627F324: bd053c97  bl #0x3180a18
0x0627F328: 609e00f0  adrp x0, #0x764e000
0x0627F32C: 007044f9  ldr x0, [x0, #0x8e0]
0x0627F330: ba053c97  bl #0x3180a18
0x0627F334: c09f00f0  adrp x0, #0x767a000
0x0627F338: 004c42f9  ldr x0, [x0, #0x498]
0x0627F33C: b7053c97  bl #0x3180a18
0x0627F340: 20a300f0  adrp x0, #0x76e6000
0x0627F344: 003c47f9  ldr x0, [x0, #0xe78]
0x0627F348: b4053c97  bl #0x3180a18
0x0627F34C: 20a300f0  adrp x0, #0x76e6000
0x0627F350: 004047f9  ldr x0, [x0, #0xe80]
0x0627F354: b1053c97  bl #0x3180a18
0x0627F358: 20a300f0  adrp x0, #0x76e6000
0x0627F35C: 004447f9  ldr x0, [x0, #0xe88]
0x0627F360: ae053c97  bl #0x3180a18
0x0627F364: 28008052  movz w8, #0x1
0x0627F368: a8ca1239  strb w8, [x21, #0x4b2]
0x0627F36C: 131700b4  cbz x19, #0x627f64c
0x0627F370: 28a300f0  adrp x8, #0x76e6000
0x0627F374: 083d47f9  ldr x8, [x8, #0xe78]
0x0627F378: e00313aa  mov x0, x19
0x0627F37C: 010140f9  ldr x1, [x8]
0x0627F380: 121a8797  bl #0x4445bc8
0x0627F384: f30300aa  mov x19, x0
0x0627F388: 401600b4  cbz x0, #0x627f650
0x0627F38C: 7b9e00f0  adrp x27, #0x764e000
0x0627F390: 3ca300f0  adrp x28, #0x76e6000
0x0627F394: 3da300f0  adrp x29, #0x76e6000
0x0627F398: 3aa300f0  adrp x26, #0x76e6000
0x0627F39C: 7b7344f9  ldr x27, [x27, #0x8e0]
0x0627F3A0: 9c3b47f9  ldr x28, [x28, #0xe70]
0x0627F3A4: bd4747f9  ldr x29, [x29, #0xe88]
0x0627F3A8: 5a4347f9  ldr x26, [x26, #0xe80]
0x0627F3AC: 680240f9  ldr x8, [x19]
0x0627F3B0: 610340f9  ldr x1, [x27]
0x0627F3B4: 095d4279  ldrh w9, [x8, #0x12e]
0x0627F3B8: 290100b4  cbz x9, #0x627f3dc
0x0627F3BC: 0a5940f9  ldr x10, [x8, #0xb0]
0x0627F3C0: 4a210091  add x10, x10, #8
0x0627F3C4: 4b815ff8  ldur x11, [x10, #-8]
0x0627F3C8: 7f0101eb  cmp x11, x1
0x0627F3CC: 00010054  b.eq #0x627f3ec
0x0627F3D0: 290500f1  subs x9, x9, #1
0x0627F3D4: 4a410091  add x10, x10, #0x10
0x0627F3D8: 61ffff54  b.ne #0x627f3c4
0x0627F3DC: e00313aa  mov x0, x19
0x0627F3E0: e2031f2a  mov w2, wzr
0x0627F3E4: cb5d3b97  bl #0x3156b10
0x0627F3E8: 04000014  b #0x627f3f8
0x0627F3EC: 490180b9  ldrsw x9, [x10]
0x0627F3F0: 0811098b  add x8, x8, x9, lsl #4
0x0627F3F4: 00e10491  add x0, x8, #0x138
0x0627F3F8: 080440a9  ldp x8, x1, [x0]
0x0627F3FC: e00313aa  mov x0, x19
0x0627F400: 00013fd6  blr x8
0x0627F404: 800d0036  tbz w0, #0, #0x627f5b4
0x0627F408: 680240f9  ldr x8, [x19]
0x0627F40C: 810340f9  ldr x1, [x28]
0x0627F410: 095d4279  ldrh w9, [x8, #0x12e]
0x0627F414: 290100b4  cbz x9, #0x627f438
0x0627F418: 0a5940f9  ldr x10, [x8, #0xb0]
0x0627F41C: 4a210091  add x10, x10, #8
0x0627F420: 4b815ff8  ldur x11, [x10, #-8]
0x0627F424: 7f0101eb  cmp x11, x1
0x0627F428: 00010054  b.eq #0x627f448
0x0627F42C: 290500f1  subs x9, x9, #1
0x0627F430: 4a410091  add x10, x10, #0x10
0x0627F434: 61ffff54  b.ne #0x627f420
0x0627F438: e00313aa  mov x0, x19
0x0627F43C: e2031f2a  mov w2, wzr
0x0627F440: b45d3b97  bl #0x3156b10
0x0627F444: 04000014  b #0x627f454
0x0627F448: 490180b9  ldrsw x9, [x10]
0x0627F44C: 0811098b  add x8, x8, x9, lsl #4
0x0627F450: 00e10491  add x0, x8, #0x138
0x0627F454: 080440a9  ldp x8, x1, [x0]
0x0627F458: e00313aa  mov x0, x19
0x0627F45C: 00013fd6  blr x8
0x0627F460: f50300aa  mov x21, x0
0x0627F464: c00e00b4  cbz x0, #0x627f63c
0x0627F468: a8c64039  ldrb w8, [x21, #0x31]
0x0627F46C: a8060034  cbz w8, #0x627f540
0x0627F470: a8c24039  ldrb w8, [x21, #0x30]
0x0627F474: 68060034  cbz w8, #0x627f540
0x0627F478: c8a20090  adrp x8, #0x76d7000
0x0627F47C: 08dd42f9  ldr x8, [x8, #0x5b8]
0x0627F480: 010140f9  ldr x1, [x8]
0x0627F484: e00315aa  mov x0, x21
0x0627F488: e5b86597  bl #0x3bed81c
0x0627F48C: 982240f9  ldr x24, [x20, #0x40]
0x0627F490: b80d00b4  cbz x24, #0x627f644
0x0627F494: 080340f9  ldr x8, [x24]
0x0627F498: ca9f00f0  adrp x10, #0x767a000
0x0627F49C: 961640f9  ldr x22, [x20, #0x28]
0x0627F4A0: f70300aa  mov x23, x0
0x0627F4A4: 095d4279  ldrh w9, [x8, #0x12e]
0x0627F4A8: 4a4d42f9  ldr x10, [x10, #0x498]
0x0627F4AC: 410140f9  ldr x1, [x10]
0x0627F4B0: 290100b4  cbz x9, #0x627f4d4
0x0627F4B4: 0a5940f9  ldr x10, [x8, #0xb0]
0x0627F4B8: 4a210091  add x10, x10, #8
0x0627F4BC: 4b815ff8  ldur x11, [x10, #-8]
0x0627F4C0: 7f0101eb  cmp x11, x1
0x0627F4C4: 00010054  b.eq #0x627f4e4
0x0627F4C8: 290500f1  subs x9, x9, #1
0x0627F4CC: 4a410091  add x10, x10, #0x10
0x0627F4D0: 61ffff54  b.ne #0x627f4bc
0x0627F4D4: 82028052  movz w2, #0x14
0x0627F4D8: e00318aa  mov x0, x24
0x0627F4DC: 8d5d3b97  bl #0x3156b10
0x0627F4E0: 05000014  b #0x627f4f4
0x0627F4E4: 490140b9  ldr w9, [x10]
0x0627F4E8: 29510011  add w9, w9, #0x14
0x0627F4EC: 08d1298b  add x8, x8, w9, sxtw #4
0x0627F4F0: 00e10491  add x0, x8, #0x138
0x0627F4F4: 080840a9  ldp x8, x2, [x0]
0x0627F4F8: e00318aa  mov x0, x24
0x0627F4FC: e10315aa  mov x1, x21
0x0627F500: 00013fd6  blr x8
0x0627F504: 370a00b4  cbz x23, #0x627f648
0x0627F508: f80300aa  mov x24, x0
0x0627F50C: f91a40f9  ldr x25, [x23, #0x30]
0x0627F510: a00340f9  ldr x0, [x29]
0x0627F514: e3053c97  bl #0x3180ca0
0x0627F518: f70300aa  mov x23, x0
0x0627F51C: e10318aa  mov x1, x24
0x0627F520: e20319aa  mov x2, x25
0x0627F524: e3031faa  mov x3, xzr
0x0627F528: 83cff597  bl #0x5ff3334
0x0627F52C: b60800b4  cbz x22, #0x627f640
0x0627F530: 420340f9  ldr x2, [x26]
0x0627F534: e00316aa  mov x0, x22
0x0627F538: e10317aa  mov x1, x23
0x0627F53C: 0c966c97  bl #0x3da4d6c
0x0627F540: bf620079  strh wzr, [x21, #0x30]
0x0627F544: e00315aa  mov x0, x21
0x0627F548: e1031f2a  mov w1, wzr
0x0627F54C: e2031faa  mov x2, xzr
0x0627F550: 3ef51994  bl #0x68fca48
0x0627F554: e00315aa  mov x0, x21
0x0627F558: 1f8c03f8  str xzr, [x0, #0x38]!
0x0627F55C: 1f5000b9  str wzr, [x0, #0x50]
0x0627F560: 1fb01f38  sturb wzr, [x0, #-5]
0x0627F564: e1031faa  mov x1, xzr
0x0627F568: 17053c97  bl #0x31809c4
0x0627F56C: e00315aa  mov x0, x21
0x0627F570: 1f8c02f8  str xzr, [x0, #0x28]!
0x0627F574: e1031faa  mov x1, xzr
0x0627F578: 13053c97  bl #0x31809c4
0x0627F57C: a80e44f8  ldr x8, [x21, #0x40]!
0x0627F580: 68f1ffb4  cbz x8, #0x627f3ac
0x0627F584: 002140f9  ldr x0, [x8, #0x40]
0x0627F588: 090d40f9  ldr x9, [x8, #0x18]
0x0627F58C: 041540f9  ldr x4, [x8, #0x28]
0x0627F590: e1031f2a  mov w1, wzr
0x0627F594: e2031f2a  mov w2, wzr
0x0627F598: e3031f2a  mov w3, wzr
0x0627F59C: 20013fd6  blr x9
0x0627F5A0: bf0200f9  str xzr, [x21]
0x0627F5A4: e00315aa  mov x0, x21
0x0627F5A8: e1031faa  mov x1, xzr
0x0627F5AC: 06053c97  bl #0x31809c4
0x0627F5B0: 7fffff17  b #0x627f3ac
0x0627F5B4: f5031faa  mov x21, xzr
0x0627F5B8: 330300b4  cbz x19, #0x627f61c
0x0627F5BC: 680240f9  ldr x8, [x19]
0x0627F5C0: 6a9e00f0  adrp x10, #0x764e000
0x0627F5C4: 095d4279  ldrh w9, [x8, #0x12e]
0x0627F5C8: 4a6544f9  ldr x10, [x10, #0x8c8]
0x0627F5CC: 410140f9  ldr x1, [x10]
0x0627F5D0: 290100b4  cbz x9, #0x627f5f4
0x0627F5D4: 0a5940f9  ldr x10, [x8, #0xb0]
0x0627F5D8: 4a210091  add x10, x10, #8
0x0627F5DC: 4b815ff8  ldur x11, [x10, #-8]
0x0627F5E0: 7f0101eb  cmp x11, x1
0x0627F5E4: 00010054  b.eq #0x627f604
0x0627F5E8: 290500f1  subs x9, x9, #1
0x0627F5EC: 4a410091  add x10, x10, #0x10
0x0627F5F0: 61ffff54  b.ne #0x627f5dc
0x0627F5F4: e00313aa  mov x0, x19
0x0627F5F8: e2031f2a  mov w2, wzr
0x0627F5FC: 455d3b97  bl #0x3156b10
0x0627F600: 04000014  b #0x627f610
0x0627F604: 490180b9  ldrsw x9, [x10]
0x0627F608: 0811098b  add x8, x8, x9, lsl #4
0x0627F60C: 00e10491  add x0, x8, #0x138
0x0627F610: 080440a9  ldp x8, x1, [x0]
0x0627F614: e00313aa  mov x0, x19
0x0627F618: 00013fd6  blr x8
0x0627F61C: d50100b5  cbnz x21, #0x627f654
0x0627F620: f44f45a9  ldp x20, x19, [sp, #0x50]
0x0627F624: f65744a9  ldp x22, x21, [sp, #0x40]
0x0627F628: f85f43a9  ldp x24, x23, [sp, #0x30]
0x0627F62C: fa6742a9  ldp x26, x25, [sp, #0x20]
0x0627F630: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x0627F634: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x0627F638: c0035fd6  ret
0x0627F63C: 9c053c97  bl #0x3180cac
0x0627F640: 9b053c97  bl #0x3180cac
0x0627F644: 9a053c97  bl #0x3180cac
0x0627F648: 99053c97  bl #0x3180cac
0x0627F64C: 98053c97  bl #0x3180cac
0x0627F650: 97053c97  bl #0x3180cac
0x0627F654: e00315aa  mov x0, x21
0x0627F658: 93053c97  bl #0x3180ca4
0x0627F65C: 0e000014  b #0x627f694
0x0627F660: 0d000014  b #0x627f694
0x0627F664: 0c000014  b #0x627f694
0x0627F668: 0b000014  b #0x627f694
0x0627F66C: 0a000014  b #0x627f694
0x0627F670: 09000014  b #0x627f694
0x0627F674: 08000014  b #0x627f694
0x0627F678: 07000014  b #0x627f694
0x0627F67C: 06000014  b #0x627f694
0x0627F680: 05000014  b #0x627f694
0x0627F684: 04000014  b #0x627f694
0x0627F688: 03000014  b #0x627f694
0x0627F68C: 02000014  b #0x627f694
0x0627F690: 01000014  b #0x627f694
0x0627F694: f40300aa  mov x20, x0
0x0627F698: 3f040071  cmp w1, #1
0x0627F69C: c1000054  b.ne #0x627f6b4
0x0627F6A0: e00314aa  mov x0, x20
0x0627F6A4: 9b3c3d94  bl #0x71ce910
0x0627F6A8: 150040f9  ldr x21, [x0]
0x0627F6AC: 9d3c3d94  bl #0x71ce920
0x0627F6B0: c2ffff17  b #0x627f5b8
0x0627F6B4: f5031faa  mov x21, xzr
0x0627F6B8: 02000014  b #0x627f6c0
0x0627F6BC: f40300aa  mov x20, x0
0x0627F6C0: 330300b4  cbz x19, #0x627f724
0x0627F6C4: 680240f9  ldr x8, [x19]
0x0627F6C8: 6a9e00f0  adrp x10, #0x764e000
0x0627F6CC: 095d4279  ldrh w9, [x8, #0x12e]
0x0627F6D0: 4a6544f9  ldr x10, [x10, #0x8c8]
0x0627F6D4: 410140f9  ldr x1, [x10]
0x0627F6D8: 290100b4  cbz x9, #0x627f6fc
0x0627F6DC: 0a5940f9  ldr x10, [x8, #0xb0]
0x0627F6E0: 4a210091  add x10, x10, #8
0x0627F6E4: 4b815ff8  ldur x11, [x10, #-8]
0x0627F6E8: 7f0101eb  cmp x11, x1
0x0627F6EC: 00010054  b.eq #0x627f70c
0x0627F6F0: 290500f1  subs x9, x9, #1
0x0627F6F4: 4a410091  add x10, x10, #0x10
0x0627F6F8: 61ffff54  b.ne #0x627f6e4
0x0627F6FC: e00313aa  mov x0, x19
0x0627F700: e2031f2a  mov w2, wzr
0x0627F704: 035d3b97  bl #0x3156b10
0x0627F708: 04000014  b #0x627f718
0x0627F70C: 490180b9  ldrsw x9, [x10]
0x0627F710: 0811098b  add x8, x8, x9, lsl #4
0x0627F714: 00e10491  add x0, x8, #0x138
0x0627F718: 080440a9  ldp x8, x1, [x0]
0x0627F71C: e00313aa  mov x0, x19
0x0627F720: 00013fd6  blr x8
0x0627F724: 750000b5  cbnz x21, #0x627f730
0x0627F728: e00314aa  mov x0, x20
0x0627F72C: 8b983f97  bl #0x3265958
0x0627F730: e00315aa  mov x0, x21
0x0627F734: 5c053c97  bl #0x3180ca4
0x0627F738: 77272e97  bl #0x2e09514

; RVA 0x627F73C | public bool TryConsumeInteractionCost(InteractionComponent interactionComponent, bool notifyPlayer = True, OperationContext context, CombiningComponent combiningComponent) { }
; bytes=464 sha256=50a7b72fe26fd82065e9fdf62b6b1c4f00632bb3028cf738e8403c3457c38476 status=arm64_complete_bound indexed_start=True
0x0627F73C: ff4301d1  sub sp, sp, #0x50
0x0627F740: fe0b00f9  str x30, [sp, #0x10]
0x0627F744: f85f02a9  stp x24, x23, [sp, #0x20]
0x0627F748: f65703a9  stp x22, x21, [sp, #0x30]
0x0627F74C: f44f04a9  stp x20, x19, [sp, #0x40]
0x0627F750: 38d500d0  adrp x24, #0x7d25000
0x0627F754: 08cf5239  ldrb w8, [x24, #0x4b3]
0x0627F758: f50304aa  mov x21, x4
0x0627F75C: f60303aa  mov x22, x3
0x0627F760: f703022a  mov w23, w2
0x0627F764: f40301aa  mov x20, x1
0x0627F768: f30300aa  mov x19, x0
0x0627F76C: 28010037  tbnz w8, #0, #0x627f790
0x0627F770: c09f00f0  adrp x0, #0x767a000
0x0627F774: 00a044f9  ldr x0, [x0, #0x940]
0x0627F778: a8043c97  bl #0x3180a18
0x0627F77C: c09f00f0  adrp x0, #0x767a000
0x0627F780: 004c42f9  ldr x0, [x0, #0x498]
0x0627F784: a5043c97  bl #0x3180a18
0x0627F788: 28008052  movz w8, #0x1
0x0627F78C: 08cf1239  strb w8, [x24, #0x4b3]
0x0627F790: ff1f00b9  str wzr, [sp, #0x1c]
0x0627F794: ff0700f9  str xzr, [sp, #8]
0x0627F798: 940b00b4  cbz x20, #0x627f908
0x0627F79C: 88ca4039  ldrb w8, [x20, #0x32]
0x0627F7A0: 68010034  cbz w8, #0x627f7cc
0x0627F7A4: 888a40b9  ldr w8, [x20, #0x88]
0x0627F7A8: 280a0035  cbnz w8, #0x627f8ec
0x0627F7AC: e0031faa  mov x0, xzr
0x0627F7B0: e1f41994  bl #0x68fcb34
0x0627F7B4: e103002a  mov w1, w0
0x0627F7B8: 808a00b9  str w0, [x20, #0x88]
0x0627F7BC: e00314aa  mov x0, x20
0x0627F7C0: e2031faa  mov x2, xzr
0x0627F7C4: 56f61994  bl #0x68fd11c
0x0627F7C8: 49000014  b #0x627f8ec
0x0627F7CC: 88524139  ldrb w8, [x20, #0x54]
0x0627F7D0: 68000035  cbnz w8, #0x627f7dc
0x0627F7D4: 88564139  ldrb w8, [x20, #0x55]
0x0627F7D8: 68feff34  cbz w8, #0x627f7a4
0x0627F7DC: e2020012  and w2, w23, #1
0x0627F7E0: e00313aa  mov x0, x19
0x0627F7E4: e10314aa  mov x1, x20
0x0627F7E8: 49000094  bl #0x627f90c
0x0627F7EC: 60040036  tbz w0, #0, #0x627f878
0x0627F7F0: e0031faa  mov x0, xzr
0x0627F7F4: d0f41994  bl #0x68fcb34
0x0627F7F8: 808a00b9  str w0, [x20, #0x88]
0x0627F7FC: e4730091  add x4, sp, #0x1c
0x0627F800: e5230091  add x5, sp, #8
0x0627F804: e00313aa  mov x0, x19
0x0627F808: e10314aa  mov x1, x20
0x0627F80C: e20316aa  mov x2, x22
0x0627F810: e30315aa  mov x3, x21
0x0627F814: 79010094  bl #0x627fdf8
0x0627F818: 21008052  movz w1, #0x1
0x0627F81C: e00314aa  mov x0, x20
0x0627F820: e2031faa  mov x2, xzr
0x0627F824: 89f41994  bl #0x68fca48
0x0627F828: 752240f9  ldr x21, [x19, #0x40]
0x0627F82C: f50600b4  cbz x21, #0x627f908
0x0627F830: ca9f00f0  adrp x10, #0x767a000
0x0627F834: a80240f9  ldr x8, [x21]
0x0627F838: 4a4d42f9  ldr x10, [x10, #0x498]
0x0627F83C: 095d4279  ldrh w9, [x8, #0x12e]
0x0627F840: 410140f9  ldr x1, [x10]
0x0627F844: 290100b4  cbz x9, #0x627f868
0x0627F848: 0a5940f9  ldr x10, [x8, #0xb0]
0x0627F84C: 4a210091  add x10, x10, #8
0x0627F850: 4b815ff8  ldur x11, [x10, #-8]
0x0627F854: 7f0101eb  cmp x11, x1
0x0627F858: 40010054  b.eq #0x627f880
0x0627F85C: 290500f1  subs x9, x9, #1
0x0627F860: 4a410091  add x10, x10, #0x10
0x0627F864: 61ffff54  b.ne #0x627f850
0x0627F868: 82028052  movz w2, #0x14
0x0627F86C: e00315aa  mov x0, x21
0x0627F870: a85c3b97  bl #0x3156b10
0x0627F874: 07000014  b #0x627f890
0x0627F878: e0031f2a  mov w0, wzr
0x0627F87C: 1d000014  b #0x627f8f0
0x0627F880: 490140b9  ldr w9, [x10]
0x0627F884: 29510011  add w9, w9, #0x14
0x0627F888: 08d1298b  add x8, x8, w9, sxtw #4
0x0627F88C: 00e10491  add x0, x8, #0x138
0x0627F890: 080840a9  ldp x8, x2, [x0]
0x0627F894: e00315aa  mov x0, x21
0x0627F898: e10314aa  mov x1, x20
0x0627F89C: 00013fd6  blr x8
0x0627F8A0: 880a40f9  ldr x8, [x20, #0x10]
0x0627F8A4: 280300b4  cbz x8, #0x627f908
0x0627F8A8: c99f00f0  adrp x9, #0x767a000
0x0627F8AC: 29a144f9  ldr x9, [x9, #0x940]
0x0627F8B0: f40300aa  mov x20, x0
0x0627F8B4: e00308aa  mov x0, x8
0x0627F8B8: 210140f9  ldr x1, [x9]
0x0627F8BC: 32856697  bl #0x3c20d84
0x0627F8C0: 400200b4  cbz x0, #0x627f908
0x0627F8C4: 684640f9  ldr x8, [x19, #0x88]
0x0627F8C8: 080200b4  cbz x8, #0x627f908
0x0627F8CC: e40740f9  ldr x4, [sp, #8]
0x0627F8D0: e31f40b9  ldr w3, [sp, #0x1c]
0x0627F8D4: 021840f9  ldr x2, [x0, #0x30]
0x0627F8D8: 090d40f9  ldr x9, [x8, #0x18]
0x0627F8DC: 002140f9  ldr x0, [x8, #0x40]
0x0627F8E0: 051540f9  ldr x5, [x8, #0x28]
0x0627F8E4: e10314aa  mov x1, x20
0x0627F8E8: 20013fd6  blr x9
0x0627F8EC: 20008052  movz w0, #0x1
0x0627F8F0: f44f44a9  ldp x20, x19, [sp, #0x40]
0x0627F8F4: f65743a9  ldp x22, x21, [sp, #0x30]
0x0627F8F8: f85f42a9  ldp x24, x23, [sp, #0x20]
0x0627F8FC: fe0b40f9  ldr x30, [sp, #0x10]
0x0627F900: ff430191  add sp, sp, #0x50
0x0627F904: c0035fd6  ret
0x0627F908: e9043c97  bl #0x3180cac

; RVA 0x627F90C | public bool CanAffordInteractionCost(InteractionComponent interactionComponent, bool notifyPlayer) { }
; bytes=1260 sha256=a6d6aaefbb7b16efc44cba6e58d0e461f0a689e2bc1764b51d06ac40101ea0b8 status=arm64_complete_bound indexed_start=True
0x0627F90C: fe0f1bf8  str x30, [sp, #-0x50]!
0x0627F910: fa6701a9  stp x26, x25, [sp, #0x10]
0x0627F914: f85f02a9  stp x24, x23, [sp, #0x20]
0x0627F918: f65703a9  stp x22, x21, [sp, #0x30]
0x0627F91C: f44f04a9  stp x20, x19, [sp, #0x40]
0x0627F920: 33d500d0  adrp x19, #0x7d25000
0x0627F924: 68d25239  ldrb w8, [x19, #0x4b4]
0x0627F928: f703022a  mov w23, w2
0x0627F92C: f50301aa  mov x21, x1
0x0627F930: f60300aa  mov x22, x0
0x0627F934: 08060037  tbnz w8, #0, #0x627f9f4
0x0627F938: 609e00f0  adrp x0, #0x764e000
0x0627F93C: 00f442f9  ldr x0, [x0, #0x5e8]
0x0627F940: 36043c97  bl #0x3180a18
0x0627F944: 20a300f0  adrp x0, #0x76e6000
0x0627F948: 004847f9  ldr x0, [x0, #0xe90]
0x0627F94C: 33043c97  bl #0x3180a18
0x0627F950: e09f00b0  adrp x0, #0x767c000
0x0627F954: 004441f9  ldr x0, [x0, #0x288]
0x0627F958: 30043c97  bl #0x3180a18
0x0627F95C: e09f00f0  adrp x0, #0x767e000
0x0627F960: 008042f9  ldr x0, [x0, #0x500]
0x0627F964: 2d043c97  bl #0x3180a18
0x0627F968: 20a300f0  adrp x0, #0x76e6000
0x0627F96C: 00ac43f9  ldr x0, [x0, #0x758]
0x0627F970: 2a043c97  bl #0x3180a18
0x0627F974: c0a20090  adrp x0, #0x76d7000
0x0627F978: 00dc42f9  ldr x0, [x0, #0x5b8]
0x0627F97C: 27043c97  bl #0x3180a18
0x0627F980: e09f00d0  adrp x0, #0x767d000
0x0627F984: 009845f9  ldr x0, [x0, #0xb30]
0x0627F988: 24043c97  bl #0x3180a18
0x0627F98C: c09f00f0  adrp x0, #0x767a000
0x0627F990: 004c42f9  ldr x0, [x0, #0x498]
0x0627F994: 21043c97  bl #0x3180a18
0x0627F998: e09f00b0  adrp x0, #0x767c000
0x0627F99C: 00ec47f9  ldr x0, [x0, #0xfd8]
0x0627F9A0: 1e043c97  bl #0x3180a18
0x0627F9A4: 20a300f0  adrp x0, #0x76e6000
0x0627F9A8: 004c47f9  ldr x0, [x0, #0xe98]
0x0627F9AC: 1b043c97  bl #0x3180a18
0x0627F9B0: 20a300f0  adrp x0, #0x76e6000
0x0627F9B4: 005047f9  ldr x0, [x0, #0xea0]
0x0627F9B8: 18043c97  bl #0x3180a18
0x0627F9BC: e09f00b0  adrp x0, #0x767c000
0x0627F9C0: 004841f9  ldr x0, [x0, #0x290]
0x0627F9C4: 15043c97  bl #0x3180a18
0x0627F9C8: 20a300f0  adrp x0, #0x76e6000
0x0627F9CC: 005447f9  ldr x0, [x0, #0xea8]
0x0627F9D0: 12043c97  bl #0x3180a18
0x0627F9D4: 809e0090  adrp x0, #0x764f000
0x0627F9D8: 00ac40f9  ldr x0, [x0, #0x158]
0x0627F9DC: 0f043c97  bl #0x3180a18
0x0627F9E0: e09f00f0  adrp x0, #0x767e000
0x0627F9E4: 000043f9  ldr x0, [x0, #0x600]
0x0627F9E8: 0c043c97  bl #0x3180a18
0x0627F9EC: 28008052  movz w8, #0x1
0x0627F9F0: 68d21239  strb w8, [x19, #0x4b4]
0x0627F9F4: c12a40f9  ldr x1, [x22, #0x50]
0x0627F9F8: e00315aa  mov x0, x21
0x0627F9FC: 07e3ff97  bl #0x6278618
0x0627FA00: c83640f9  ldr x8, [x22, #0x68]
0x0627FA04: 681f00b4  cbz x8, #0x627fdf0
0x0627FA08: f303002a  mov w19, w0
0x0627FA0C: e00308aa  mov x0, x8
0x0627FA10: e10315aa  mov x1, x21
0x0627FA14: 59010094  bl #0x627ff78
0x0627FA18: f403002a  mov w20, w0
0x0627FA1C: 770b0036  tbz w23, #0, #0x627fb88
0x0627FA20: 951e00b4  cbz x21, #0x627fdf0
0x0627FA24: a8ce4039  ldrb w8, [x21, #0x33]
0x0627FA28: 080b0035  cbnz w8, #0x627fb88
0x0627FA2C: c8a20090  adrp x8, #0x76d7000
0x0627FA30: 08dd42f9  ldr x8, [x8, #0x5b8]
0x0627FA34: e00315aa  mov x0, x21
0x0627FA38: 010140f9  ldr x1, [x8]
0x0627FA3C: 78b76597  bl #0x3bed81c
0x0627FA40: f70300aa  mov x23, x0
0x0627FA44: 53030036  tbz w19, #0, #0x627faac
0x0627FA48: 140a0037  tbnz w20, #0, #0x627fb88
0x0627FA4C: c13e40f9  ldr x1, [x22, #0x78]
0x0627FA50: e00315aa  mov x0, x21
0x0627FA54: c9e0ff97  bl #0x6277d78
0x0627FA58: a86e40b9  ldr w8, [x21, #0x6c]
0x0627FA5C: f80300aa  mov x24, x0
0x0627FA60: 1f050071  cmp w8, #1
0x0627FA64: 210a0054  b.ne #0x627fba8
0x0627FA68: 28a300f0  adrp x8, #0x76e6000
0x0627FA6C: 08ad43f9  ldr x8, [x8, #0x758]
0x0627FA70: e00315aa  mov x0, x21
0x0627FA74: 010140f9  ldr x1, [x8]
0x0627FA78: 69b76597  bl #0x3bed81c
0x0627FA7C: a01b00b4  cbz x0, #0x627fdf0
0x0627FA80: e1031f2a  mov w1, wzr
0x0627FA84: e2031faa  mov x2, xzr
0x0627FA88: fa0300aa  mov x26, x0
0x0627FA8C: f6dd1994  bl #0x68f7264
0x0627FA90: f903002a  mov w25, w0
0x0627FA94: e0031aaa  mov x0, x26
0x0627FA98: e1031f2a  mov w1, wzr
0x0627FA9C: e2031faa  mov x2, xzr
0x0627FAA0: aadd1994  bl #0x68f7148
0x0627FAA4: a86e40b9  ldr w8, [x21, #0x6c]
0x0627FAA8: 41000014  b #0x627fbac
0x0627FAAC: b84a40b9  ldr w24, [x21, #0x48]
0x0627FAB0: 08031e32  orr w8, w24, #4
0x0627FAB4: 1f150071  cmp w8, #5
0x0627FAB8: 41020054  b.ne #0x627fb00
0x0627FABC: 28a300f0  adrp x8, #0x76e6000
0x0627FAC0: d61640f9  ldr x22, [x22, #0x28]
0x0627FAC4: 084d47f9  ldr x8, [x8, #0xe98]
0x0627FAC8: 000140f9  ldr x0, [x8]
0x0627FACC: 75043c97  bl #0x3180ca0
0x0627FAD0: e89f00f0  adrp x8, #0x767e000
0x0627FAD4: 080143f9  ldr x8, [x8, #0x600]
0x0627FAD8: 23008052  movz w3, #0x1
0x0627FADC: e103182a  mov w1, w24
0x0627FAE0: e4031faa  mov x4, xzr
0x0627FAE4: 020140f9  ldr x2, [x8]
0x0627FAE8: f70300aa  mov x23, x0
0x0627FAEC: e5b01394  bl #0x676be80
0x0627FAF0: 161800b4  cbz x22, #0x627fdf0
0x0627FAF4: 28a300f0  adrp x8, #0x76e6000
0x0627FAF8: 085547f9  ldr x8, [x8, #0xea8]
0x0627FAFC: 1d000014  b #0x627fb70
0x0627FB00: e89f00d0  adrp x8, #0x767d000
0x0627FB04: 089945f9  ldr x8, [x8, #0xb30]
0x0627FB08: 000140f9  ldr x0, [x8]
0x0627FB0C: 65043c97  bl #0x3180ca0
0x0627FB10: e1031faa  mov x1, xzr
0x0627FB14: f80300aa  mov x24, x0
0x0627FB18: 2d481294  bl #0x6711bcc
0x0627FB1C: b81600b4  cbz x24, #0x627fdf0
0x0627FB20: a02640fd  ldr d0, [x21, #0x48]
0x0627FB24: 001700fd  str d0, [x24, #0x28]
0x0627FB28: 571600b4  cbz x23, #0x627fdf0
0x0627FB2C: e89f00b0  adrp x8, #0x767c000
0x0627FB30: d61640f9  ldr x22, [x22, #0x28]
0x0627FB34: f91a40f9  ldr x25, [x23, #0x30]
0x0627FB38: 084541f9  ldr x8, [x8, #0x288]
0x0627FB3C: 000140f9  ldr x0, [x8]
0x0627FB40: 58043c97  bl #0x3180ca0
0x0627FB44: 42018052  movz w2, #0xa
0x0627FB48: e10319aa  mov x1, x25
0x0627FB4C: e30318aa  mov x3, x24
0x0627FB50: e4031f2a  mov w4, wzr
0x0627FB54: e5031f2a  mov w5, wzr
0x0627FB58: e6031faa  mov x6, xzr
0x0627FB5C: f70300aa  mov x23, x0
0x0627FB60: b2ab1394  bl #0x676aa28
0x0627FB64: 761400b4  cbz x22, #0x627fdf0
0x0627FB68: e89f00b0  adrp x8, #0x767c000
0x0627FB6C: 084941f9  ldr x8, [x8, #0x290]
0x0627FB70: 020140f9  ldr x2, [x8]
0x0627FB74: e00316aa  mov x0, x22
0x0627FB78: e10317aa  mov x1, x23
0x0627FB7C: 7c946c97  bl #0x3da4d6c
0x0627FB80: 28008052  movz w8, #0x1
0x0627FB84: a8ce0039  strb w8, [x21, #0x33]
0x0627FB88: 6802140a  and w8, w19, w20
0x0627FB8C: f44f44a9  ldp x20, x19, [sp, #0x40]
0x0627FB90: f65743a9  ldp x22, x21, [sp, #0x30]
0x0627FB94: f85f42a9  ldp x24, x23, [sp, #0x20]
0x0627FB98: fa6741a9  ldp x26, x25, [sp, #0x10]
0x0627FB9C: 00010012  and w0, w8, #1
0x0627FBA0: fe0745f8  ldr x30, [sp], #0x50
0x0627FBA4: c0035fd6  ret
0x0627FBA8: f9031f2a  mov w25, wzr
0x0627FBAC: 1f0d0071  cmp w8, #3
0x0627FBB0: a1020054  b.ne #0x627fc04
0x0627FBB4: d52240f9  ldr x21, [x22, #0x40]
0x0627FBB8: d51100b4  cbz x21, #0x627fdf0
0x0627FBBC: ca9f00f0  adrp x10, #0x767a000
0x0627FBC0: a80240f9  ldr x8, [x21]
0x0627FBC4: 4a4d42f9  ldr x10, [x10, #0x498]
0x0627FBC8: 095d4279  ldrh w9, [x8, #0x12e]
0x0627FBCC: 410140f9  ldr x1, [x10]
0x0627FBD0: 290100b4  cbz x9, #0x627fbf4
0x0627FBD4: 0a5940f9  ldr x10, [x8, #0xb0]
0x0627FBD8: 4a210091  add x10, x10, #8
0x0627FBDC: 4b815ff8  ldur x11, [x10, #-8]
0x0627FBE0: 7f0101eb  cmp x11, x1
0x0627FBE4: 000b0054  b.eq #0x627fd44
0x0627FBE8: 290500f1  subs x9, x9, #1
0x0627FBEC: 4a410091  add x10, x10, #0x10
0x0627FBF0: 61ffff54  b.ne #0x627fbdc
0x0627FBF4: 82028052  movz w2, #0x14
0x0627FBF8: e00315aa  mov x0, x21
0x0627FBFC: c55b3b97  bl #0x3156b10
0x0627FC00: 55000014  b #0x627fd54
0x0627FC04: 780f00b4  cbz x24, #0x627fdf0
0x0627FC08: 091b40b9  ldr w9, [x24, #0x18]
0x0627FC0C: 280fc91a  sdiv w8, w25, w9
0x0627FC10: 08e5091b  msub w8, w8, w9, w25
0x0627FC14: 1f01096b  cmp w8, w9
0x0627FC18: e20e0054  b.hs #0x627fdf4
0x0627FC1C: 699e00f0  adrp x9, #0x764e000
0x0627FC20: 29f542f9  ldr x9, [x9, #0x5e8]
0x0627FC24: 390140f9  ldr x25, [x9]
0x0627FC28: 09cf288b  add x9, x24, w8, sxtw #3
0x0627FC2C: 381140f9  ldr x24, [x9, #0x20]
0x0627FC30: 281f40f9  ldr x8, [x25, #0x38]
0x0627FC34: 880000b5  cbnz x8, #0x627fc44
0x0627FC38: e00319aa  mov x0, x25
0x0627FC3C: 0f5b3b97  bl #0x3156878
0x0627FC40: 281f40f9  ldr x8, [x25, #0x38]
0x0627FC44: 000940f9  ldr x0, [x8, #0x10]
0x0627FC48: 08d44439  ldrb w8, [x0, #0x135]
0x0627FC4C: 48000037  tbnz w8, #0, #0x627fc54
0x0627FC50: f35a3b97  bl #0x315681c
0x0627FC54: 08e040b9  ldr w8, [x0, #0xe0]
0x0627FC58: 48000035  cbnz w8, #0x627fc60
0x0627FC5C: cc033c97  bl #0x3180b8c
0x0627FC60: 281f40f9  ldr x8, [x25, #0x38]
0x0627FC64: 000940f9  ldr x0, [x8, #0x10]
0x0627FC68: 08d44439  ldrb w8, [x0, #0x135]
0x0627FC6C: 48000037  tbnz w8, #0, #0x627fc74
0x0627FC70: eb5a3b97  bl #0x315681c
0x0627FC74: e89f00b0  adrp x8, #0x767c000
0x0627FC78: 08ed47f9  ldr x8, [x8, #0xfd8]
0x0627FC7C: 095c40f9  ldr x9, [x0, #0xb8]
0x0627FC80: 080140f9  ldr x8, [x8]
0x0627FC84: 390140f9  ldr x25, [x9]
0x0627FC88: 0ae140b9  ldr w10, [x8, #0xe0]
0x0627FC8C: 6a000035  cbnz w10, #0x627fc98
0x0627FC90: e00308aa  mov x0, x8
0x0627FC94: be033c97  bl #0x3180b8c
0x0627FC98: 889e0090  adrp x8, #0x764f000
0x0627FC9C: 08ad40f9  ldr x8, [x8, #0x158]
0x0627FCA0: 21008052  movz w1, #0x1
0x0627FCA4: e00318aa  mov x0, x24
0x0627FCA8: e30319aa  mov x3, x25
0x0627FCAC: 020140f9  ldr x2, [x8]
0x0627FCB0: e4031faa  mov x4, xzr
0x0627FCB4: d7a31894  bl #0x68a8c10
0x0627FCB8: d70900b4  cbz x23, #0x627fdf0
0x0627FCBC: e89f00d0  adrp x8, #0x767d000
0x0627FCC0: d61640f9  ldr x22, [x22, #0x28]
0x0627FCC4: f71a40f9  ldr x23, [x23, #0x30]
0x0627FCC8: 089945f9  ldr x8, [x8, #0xb30]
0x0627FCCC: f90300aa  mov x25, x0
0x0627FCD0: 000140f9  ldr x0, [x8]
0x0627FCD4: f3033c97  bl #0x3180ca0
0x0627FCD8: e1031faa  mov x1, xzr
0x0627FCDC: f80300aa  mov x24, x0
0x0627FCE0: bb471294  bl #0x6711bcc
0x0627FCE4: 780800b4  cbz x24, #0x627fdf0
0x0627FCE8: e00318aa  mov x0, x24
0x0627FCEC: 198c01f8  str x25, [x0, #0x18]!
0x0627FCF0: e10319aa  mov x1, x25
0x0627FCF4: 34033c97  bl #0x31809c4
0x0627FCF8: e89f00b0  adrp x8, #0x767c000
0x0627FCFC: 084541f9  ldr x8, [x8, #0x288]
0x0627FD00: 000140f9  ldr x0, [x8]
0x0627FD04: e7033c97  bl #0x3180ca0
0x0627FD08: 42018052  movz w2, #0xa
0x0627FD0C: e10317aa  mov x1, x23
0x0627FD10: e30318aa  mov x3, x24
0x0627FD14: e4031f2a  mov w4, wzr
0x0627FD18: e5031f2a  mov w5, wzr
0x0627FD1C: e6031faa  mov x6, xzr
0x0627FD20: f90300aa  mov x25, x0
0x0627FD24: 41ab1394  bl #0x676aa28
0x0627FD28: 560600b4  cbz x22, #0x627fdf0
0x0627FD2C: e89f00b0  adrp x8, #0x767c000
0x0627FD30: 084941f9  ldr x8, [x8, #0x290]
0x0627FD34: e00316aa  mov x0, x22
0x0627FD38: e10319aa  mov x1, x25
0x0627FD3C: 020140f9  ldr x2, [x8]
0x0627FD40: 8fffff17  b #0x627fb7c
0x0627FD44: 490140b9  ldr w9, [x10]
0x0627FD48: 29510011  add w9, w9, #0x14
0x0627FD4C: 08d1298b  add x8, x8, w9, sxtw #4
0x0627FD50: 00e10491  add x0, x8, #0x138
0x0627FD54: 080840a9  ldp x8, x2, [x0]
0x0627FD58: e00315aa  mov x0, x21
0x0627FD5C: e10317aa  mov x1, x23
0x0627FD60: 00013fd6  blr x8
0x0627FD64: 770400b4  cbz x23, #0x627fdf0
0x0627FD68: f99f00f0  adrp x25, #0x767e000
0x0627FD6C: 398342f9  ldr x25, [x25, #0x500]
0x0627FD70: f50300aa  mov x21, x0
0x0627FD74: e00317aa  mov x0, x23
0x0627FD78: 210340f9  ldr x1, [x25]
0x0627FD7C: a8b66597  bl #0x3bed81c
0x0627FD80: 02c2ff97  bl #0x6270588
0x0627FD84: 210340f9  ldr x1, [x25]
0x0627FD88: d61640f9  ldr x22, [x22, #0x28]
0x0627FD8C: f81a40f9  ldr x24, [x23, #0x30]
0x0627FD90: f90300aa  mov x25, x0
0x0627FD94: e00317aa  mov x0, x23
0x0627FD98: a1b66597  bl #0x3bed81c
0x0627FD9C: 28a300f0  adrp x8, #0x76e6000
0x0627FDA0: 084947f9  ldr x8, [x8, #0xe90]
0x0627FDA4: fa0300aa  mov x26, x0
0x0627FDA8: 080140f9  ldr x8, [x8]
0x0627FDAC: e00308aa  mov x0, x8
0x0627FDB0: bc033c97  bl #0x3180ca0
0x0627FDB4: e10318aa  mov x1, x24
0x0627FDB8: e2031aaa  mov x2, x26
0x0627FDBC: e30319aa  mov x3, x25
0x0627FDC0: e40315aa  mov x4, x21
0x0627FDC4: e5031faa  mov x5, xzr
0x0627FDC8: f70300aa  mov x23, x0
0x0627FDCC: c8aa1394  bl #0x676a8ec
0x0627FDD0: 160100b4  cbz x22, #0x627fdf0
0x0627FDD4: 28a300f0  adrp x8, #0x76e6000
0x0627FDD8: 085147f9  ldr x8, [x8, #0xea0]
0x0627FDDC: e00316aa  mov x0, x22
0x0627FDE0: e10317aa  mov x1, x23
0x0627FDE4: 020140f9  ldr x2, [x8]
0x0627FDE8: e1936c97  bl #0x3da4d6c
0x0627FDEC: 67ffff17  b #0x627fb88
0x0627FDF0: af033c97  bl #0x3180cac
0x0627FDF4: b0033c97  bl #0x3180cb4

; RVA 0x627FF50 | public bool CanAffordResourceInteractionCost(InteractionComponent interactionComponent) { }
; bytes=16 sha256=a92224cc02bbcc78c7c6deb309b4bd78d0d0b4fcc57535dfff9a2cb7f61c575c status=arm64_complete_bound indexed_start=True
0x0627FF50: 082840f9  ldr x8, [x0, #0x50]
0x0627FF54: e00301aa  mov x0, x1
0x0627FF58: e10308aa  mov x1, x8
0x0627FF5C: afe1ff17  b #0x6278618

; RVA 0x627FF60 | public bool CanAffordItemInteractionCost(InteractionComponent interactionComponent) { }
; bytes=24 sha256=c3e6594fc3610df73114ebd867a9628160adc28d63f8a6e7c13e045ddf38fa35 status=arm64_complete_bound indexed_start=True
0x0627FF60: fe0f1ff8  str x30, [sp, #-0x10]!
0x0627FF64: 003440f9  ldr x0, [x0, #0x68]
0x0627FF68: 600000b4  cbz x0, #0x627ff74
0x0627FF6C: fe0741f8  ldr x30, [sp], #0x10
0x0627FF70: 02000014  b #0x627ff78
0x0627FF74: 4e033c97  bl #0x3180cac

; RVA 0x627FDF8 | private void ConsumeInteractionCost(InteractionComponent interactionComponent, OperationContext context, CombiningComponent combiningComponent, out InteractionType interactionType, out List<ItemMultiple> consumed) { }
; bytes=344 sha256=9b22b546ae487d99a107a796978432a5de73e4ebce37fd1b5d11a1281bcd05e3 status=arm64_complete_bound indexed_start=True
0x0627FDF8: ff4301d1  sub sp, sp, #0x50
0x0627FDFC: fe6701a9  stp x30, x25, [sp, #0x10]
0x0627FE00: f85f02a9  stp x24, x23, [sp, #0x20]
0x0627FE04: f65703a9  stp x22, x21, [sp, #0x30]
0x0627FE08: f44f04a9  stp x20, x19, [sp, #0x40]
0x0627FE0C: 39d500d0  adrp x25, #0x7d25000
0x0627FE10: 28d75239  ldrb w8, [x25, #0x4b5]
0x0627FE14: f30305aa  mov x19, x5
0x0627FE18: f40304aa  mov x20, x4
0x0627FE1C: f70303aa  mov x23, x3
0x0627FE20: f60302aa  mov x22, x2
0x0627FE24: f50301aa  mov x21, x1
0x0627FE28: f80300aa  mov x24, x0
0x0627FE2C: 28010037  tbnz w8, #0, #0x627fe50
0x0627FE30: a09f0090  adrp x0, #0x7673000
0x0627FE34: 001440f9  ldr x0, [x0, #0x28]
0x0627FE38: f8023c97  bl #0x3180a18
0x0627FE3C: 20a300f0  adrp x0, #0x76e6000
0x0627FE40: 005847f9  ldr x0, [x0, #0xeb0]
0x0627FE44: f5023c97  bl #0x3180a18
0x0627FE48: 28008052  movz w8, #0x1
0x0627FE4C: 28d71239  strb w8, [x25, #0x4b5]
0x0627FE50: e00313aa  mov x0, x19
0x0627FE54: e1031faa  mov x1, xzr
0x0627FE58: 7f0200f9  str xzr, [x19]
0x0627FE5C: da023c97  bl #0x31809c4
0x0627FE60: 9f0200b9  str wzr, [x20]
0x0627FE64: 550700b4  cbz x21, #0x627ff4c
0x0627FE68: a8524139  ldrb w8, [x21, #0x54]
0x0627FE6C: a8010034  cbz w8, #0x627fea0
0x0627FE70: 002b40f9  ldr x0, [x24, #0x50]
0x0627FE74: c00600b4  cbz x0, #0x627ff4c
0x0627FE78: a10a4929  ldp w1, w2, [x21, #0x48]
0x0627FE7C: 44028052  movz w4, #0x12
0x0627FE80: 27008052  movz w7, #0x1
0x0627FE84: e3031f2a  mov w3, wzr
0x0627FE88: e5031faa  mov x5, xzr
0x0627FE8C: e6031faa  mov x6, xzr
0x0627FE90: ff0300f9  str xzr, [sp]
0x0627FE94: 39008052  movz w25, #0x1
0x0627FE98: 111f0a94  bl #0x6507adc
0x0627FE9C: 990200b9  str w25, [x20]
0x0627FEA0: ff0700f9  str xzr, [sp, #8]
0x0627FEA4: b70000b4  cbz x23, #0x627feb8
0x0627FEA8: e8024139  ldrb w8, [x23, #0x40]
0x0627FEAC: 68000034  cbz w8, #0x627feb8
0x0627FEB0: e1031faa  mov x1, xzr
0x0627FEB4: 16000014  b #0x627ff0c
0x0627FEB8: a89f0090  adrp x8, #0x7673000
0x0627FEBC: 081540f9  ldr x8, [x8, #0x28]
0x0627FEC0: 173740f9  ldr x23, [x24, #0x68]
0x0627FEC4: 38a300f0  adrp x24, #0x76e6000
0x0627FEC8: 000140f9  ldr x0, [x8]
0x0627FECC: 185b47f9  ldr x24, [x24, #0xeb0]
0x0627FED0: 74033c97  bl #0x3180ca0
0x0627FED4: 020340f9  ldr x2, [x24]
0x0627FED8: e10315aa  mov x1, x21
0x0627FEDC: e3031faa  mov x3, xzr
0x0627FEE0: f80300aa  mov x24, x0
0x0627FEE4: f682c297  bl #0x5320abc
0x0627FEE8: 370300b4  cbz x23, #0x627ff4c
0x0627FEEC: e4230091  add x4, sp, #8
0x0627FEF0: e00317aa  mov x0, x23
0x0627FEF4: e10315aa  mov x1, x21
0x0627FEF8: e20316aa  mov x2, x22
0x0627FEFC: e30318aa  mov x3, x24
0x0627FF00: a1000094  bl #0x6280184
0x0627FF04: 00010036  tbz w0, #0, #0x627ff24
0x0627FF08: e10740f9  ldr x1, [sp, #8]
0x0627FF0C: 48008052  movz w8, #0x2
0x0627FF10: e00313aa  mov x0, x19
0x0627FF14: 880200b9  str w8, [x20]
0x0627FF18: 610200f9  str x1, [x19]
0x0627FF1C: aa023c97  bl #0x31809c4
0x0627FF20: 05000014  b #0x627ff34
0x0627FF24: a18a40b9  ldr w1, [x21, #0x88]
0x0627FF28: e00315aa  mov x0, x21
0x0627FF2C: e2031faa  mov x2, xzr
0x0627FF30: 7bf41994  bl #0x68fd11c
0x0627FF34: f44f44a9  ldp x20, x19, [sp, #0x40]
0x0627FF38: f65743a9  ldp x22, x21, [sp, #0x30]
0x0627FF3C: f85f42a9  ldp x24, x23, [sp, #0x20]
0x0627FF40: fe6741a9  ldp x30, x25, [sp, #0x10]
0x0627FF44: ff430191  add sp, sp, #0x50
0x0627FF48: c0035fd6  ret
0x0627FF4C: 58033c97  bl #0x3180cac

; RVA 0x628065C | public bool CanCombineItems(PositionComponent firstItem, PositionComponent secondItem) { }
; bytes=556 sha256=30717b165818e74ed25bf49fc873182a220185f5ea5b0acdce6726d3a10a6652 status=arm64_complete_bound indexed_start=True
0x0628065C: fe0f1cf8  str x30, [sp, #-0x40]!
0x06280660: f85f01a9  stp x24, x23, [sp, #0x10]
0x06280664: f65702a9  stp x22, x21, [sp, #0x20]
0x06280668: f44f03a9  stp x20, x19, [sp, #0x30]
0x0628066C: 34d500b0  adrp x20, #0x7d25000
0x06280670: 37a300d0  adrp x23, #0x76e6000
0x06280674: 88da5239  ldrb w8, [x20, #0x4b6]
0x06280678: f79e47f9  ldr x23, [x23, #0xf38]
0x0628067C: f60302aa  mov x22, x2
0x06280680: f30301aa  mov x19, x1
0x06280684: f50300aa  mov x21, x0
0x06280688: 08030037  tbnz w8, #0, #0x62806e8
0x0628068C: 20a300d0  adrp x0, #0x76e6000
0x06280690: 00b043f9  ldr x0, [x0, #0x760]
0x06280694: e1003c97  bl #0x3180a18
0x06280698: e09f00d0  adrp x0, #0x767e000
0x0628069C: 001c43f9  ldr x0, [x0, #0x638]
0x062806A0: de003c97  bl #0x3180a18
0x062806A4: 60a200b0  adrp x0, #0x76cd000
0x062806A8: 00a045f9  ldr x0, [x0, #0xb40]
0x062806AC: db003c97  bl #0x3180a18
0x062806B0: 60a200b0  adrp x0, #0x76cd000
0x062806B4: 00a445f9  ldr x0, [x0, #0xb48]
0x062806B8: d8003c97  bl #0x3180a18
0x062806BC: c09f00d0  adrp x0, #0x767a000
0x062806C0: 004c42f9  ldr x0, [x0, #0x498]
0x062806C4: d5003c97  bl #0x3180a18
0x062806C8: 20a300d0  adrp x0, #0x76e6000
0x062806CC: 00a047f9  ldr x0, [x0, #0xf40]
0x062806D0: d2003c97  bl #0x3180a18
0x062806D4: 20a300d0  adrp x0, #0x76e6000
0x062806D8: 009c47f9  ldr x0, [x0, #0xf38]
0x062806DC: cf003c97  bl #0x3180a18
0x062806E0: 28008052  movz w8, #0x1
0x062806E4: 88da1239  strb w8, [x20, #0x4b6]
0x062806E8: e00240f9  ldr x0, [x23]
0x062806EC: 6d013c97  bl #0x3180ca0
0x062806F0: e1031faa  mov x1, xzr
0x062806F4: f40300aa  mov x20, x0
0x062806F8: c167d197  bl #0x56da5fc
0x062806FC: 530c00b4  cbz x19, #0x6280884
0x06280700: f89f00d0  adrp x24, #0x767e000
0x06280704: 181f43f9  ldr x24, [x24, #0x638]
0x06280708: e00313aa  mov x0, x19
0x0628070C: 010340f9  ldr x1, [x24]
0x06280710: 43b46597  bl #0x3bed81c
0x06280714: 960b00b4  cbz x22, #0x6280884
0x06280718: 010340f9  ldr x1, [x24]
0x0628071C: f70300aa  mov x23, x0
0x06280720: e00316aa  mov x0, x22
0x06280724: 3eb46597  bl #0x3bed81c
0x06280728: 800000b4  cbz x0, #0x6280738
0x0628072C: e1031faa  mov x1, xzr
0x06280730: f9f31994  bl #0x68fd714
0x06280734: 80050037  tbnz w0, #0, #0x62807e4
0x06280738: b70000b4  cbz x23, #0x628074c
0x0628073C: e00317aa  mov x0, x23
0x06280740: e1031faa  mov x1, xzr
0x06280744: f4f31994  bl #0x68fd714
0x06280748: e0040037  tbnz w0, #0, #0x62807e4
0x0628074C: 28a300d0  adrp x8, #0x76e6000
0x06280750: 08b143f9  ldr x8, [x8, #0x760]
0x06280754: e00316aa  mov x0, x22
0x06280758: 010140f9  ldr x1, [x8]
0x0628075C: 30b46597  bl #0x3bed81c
0x06280760: 400400b4  cbz x0, #0x62807e8
0x06280764: 082c40f9  ldr x8, [x0, #0x58]
0x06280768: f60300aa  mov x22, x0
0x0628076C: c80300b4  cbz x8, #0x62807e4
0x06280770: 080d40f9  ldr x8, [x8, #0x18]
0x06280774: 880300b4  cbz x8, #0x62807e4
0x06280778: e00315aa  mov x0, x21
0x0628077C: e10316aa  mov x1, x22
0x06280780: e2031f2a  mov w2, wzr
0x06280784: 62fcff97  bl #0x627f90c
0x06280788: e803002a  mov w8, w0
0x0628078C: e0031f2a  mov w0, wzr
0x06280790: c8020036  tbz w8, #0, #0x62807e8
0x06280794: b52240f9  ldr x21, [x21, #0x40]
0x06280798: 750700b4  cbz x21, #0x6280884
0x0628079C: ca9f00d0  adrp x10, #0x767a000
0x062807A0: a80240f9  ldr x8, [x21]
0x062807A4: 4a4d42f9  ldr x10, [x10, #0x498]
0x062807A8: 095d4279  ldrh w9, [x8, #0x12e]
0x062807AC: 410140f9  ldr x1, [x10]
0x062807B0: 290100b4  cbz x9, #0x62807d4
0x062807B4: 0a5940f9  ldr x10, [x8, #0xb0]
0x062807B8: 4a210091  add x10, x10, #8
0x062807BC: 4b815ff8  ldur x11, [x10, #-8]
0x062807C0: 7f0101eb  cmp x11, x1
0x062807C4: c0010054  b.eq #0x62807fc
0x062807C8: 290500f1  subs x9, x9, #1
0x062807CC: 4a410091  add x10, x10, #0x10
0x062807D0: 61ffff54  b.ne #0x62807bc
0x062807D4: 82028052  movz w2, #0x14
0x062807D8: e00315aa  mov x0, x21
0x062807DC: cd583b97  bl #0x3156b10
0x062807E0: 0b000014  b #0x628080c
0x062807E4: e0031f2a  mov w0, wzr
0x062807E8: f44f43a9  ldp x20, x19, [sp, #0x30]
0x062807EC: f65742a9  ldp x22, x21, [sp, #0x20]
0x062807F0: f85f41a9  ldp x24, x23, [sp, #0x10]
0x062807F4: fe0744f8  ldr x30, [sp], #0x40
0x062807F8: c0035fd6  ret
0x062807FC: 490140b9  ldr w9, [x10]
0x06280800: 29510011  add w9, w9, #0x14
0x06280804: 08d1298b  add x8, x8, w9, sxtw #4
0x06280808: 00e10491  add x0, x8, #0x138
0x0628080C: 080840a9  ldp x8, x2, [x0]
0x06280810: e00315aa  mov x0, x21
0x06280814: e10313aa  mov x1, x19
0x06280818: 00013fd6  blr x8
0x0628081C: 540300b4  cbz x20, #0x6280884
0x06280820: e10300aa  mov x1, x0
0x06280824: e00314aa  mov x0, x20
0x06280828: 010c01f8  str x1, [x0, #0x10]!
0x0628082C: 66003c97  bl #0x31809c4
0x06280830: 68a200b0  adrp x8, #0x76cd000
0x06280834: d32e40f9  ldr x19, [x22, #0x58]
0x06280838: 08a545f9  ldr x8, [x8, #0xb48]
0x0628083C: 000140f9  ldr x0, [x8]
0x06280840: 18013c97  bl #0x3180ca0
0x06280844: 28a300d0  adrp x8, #0x76e6000
0x06280848: 08a147f9  ldr x8, [x8, #0xf40]
0x0628084C: e10314aa  mov x1, x20
0x06280850: e3031faa  mov x3, xzr
0x06280854: f50300aa  mov x21, x0
0x06280858: 020140f9  ldr x2, [x8]
0x0628085C: d855bf97  bl #0x5255fbc
0x06280860: 68a200b0  adrp x8, #0x76cd000
0x06280864: 08a145f9  ldr x8, [x8, #0xb40]
0x06280868: e00313aa  mov x0, x19
0x0628086C: e10315aa  mov x1, x21
0x06280870: 020140f9  ldr x2, [x8]
0x06280874: 2f126797  bl #0x3c45130
0x06280878: 1f0000f1  cmp x0, #0
0x0628087C: e0079f1a  cset w0, ne
0x06280880: daffff17  b #0x62807e8
0x06280884: 0a013c97  bl #0x3180cac

; RVA 0x6280890 | public bool TryCombineItems(PositionComponent firstItem, PositionComponent secondItem, IItemsCombiner.OnItemsCombined callback) { }
; bytes=328 sha256=3dd105af5a05f547e38c01c9c93e28560838af66e28e5f797dba645deb8f9535 status=arm64_complete_bound indexed_start=True
0x06280890: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x06280894: f65701a9  stp x22, x21, [sp, #0x10]
0x06280898: f44f02a9  stp x20, x19, [sp, #0x20]
0x0628089C: 35d500b0  adrp x21, #0x7d25000
0x062808A0: a8de5239  ldrb w8, [x21, #0x4b7]
0x062808A4: f60303aa  mov x22, x3
0x062808A8: f70302aa  mov x23, x2
0x062808AC: f30301aa  mov x19, x1
0x062808B0: f40300aa  mov x20, x0
0x062808B4: e8010037  tbnz w8, #0, #0x62808f0
0x062808B8: 20a300d0  adrp x0, #0x76e6000
0x062808BC: 00a447f9  ldr x0, [x0, #0xf48]
0x062808C0: 56003c97  bl #0x3180a18
0x062808C4: 20a300d0  adrp x0, #0x76e6000
0x062808C8: 00b043f9  ldr x0, [x0, #0x760]
0x062808CC: 53003c97  bl #0x3180a18
0x062808D0: a0a200f0  adrp x0, #0x76d7000
0x062808D4: 00c442f9  ldr x0, [x0, #0x588]
0x062808D8: 50003c97  bl #0x3180a18
0x062808DC: 20a300d0  adrp x0, #0x76e6000
0x062808E0: 00a847f9  ldr x0, [x0, #0xf50]
0x062808E4: 4d003c97  bl #0x3180a18
0x062808E8: 28008052  movz w8, #0x1
0x062808EC: a8de1239  strb w8, [x21, #0x4b7]
0x062808F0: e00314aa  mov x0, x20
0x062808F4: e10313aa  mov x1, x19
0x062808F8: e20317aa  mov x2, x23
0x062808FC: 58ffff97  bl #0x628065c
0x06280900: f503002a  mov w21, w0
0x06280904: e0050036  tbz w0, #0, #0x62809c0
0x06280908: 770600b4  cbz x23, #0x62809d4
0x0628090C: 28a300d0  adrp x8, #0x76e6000
0x06280910: 08b143f9  ldr x8, [x8, #0x760]
0x06280914: e00317aa  mov x0, x23
0x06280918: 010140f9  ldr x1, [x8]
0x0628091C: c0b36597  bl #0x3bed81c
0x06280920: a00500b4  cbz x0, #0x62809d4
0x06280924: 28008052  movz w8, #0x1
0x06280928: f70300aa  mov x23, x0
0x0628092C: 08c00039  strb w8, [x0, #0x30]
0x06280930: 138c03f8  str x19, [x0, #0x38]!
0x06280934: e10313aa  mov x1, x19
0x06280938: 23003c97  bl #0x31809c4
0x0628093C: e00317aa  mov x0, x23
0x06280940: 160c04f8  str x22, [x0, #0x40]!
0x06280944: e10316aa  mov x1, x22
0x06280948: 1f003c97  bl #0x31809c4
0x0628094C: 28a300d0  adrp x8, #0x76e6000
0x06280950: 08a547f9  ldr x8, [x8, #0xf48]
0x06280954: 000140f9  ldr x0, [x8]
0x06280958: d2003c97  bl #0x3180ca0
0x0628095C: 28a300d0  adrp x8, #0x76e6000
0x06280960: 08a947f9  ldr x8, [x8, #0xf50]
0x06280964: e10314aa  mov x1, x20
0x06280968: e3031faa  mov x3, xzr
0x0628096C: f60300aa  mov x22, x0
0x06280970: 020140f9  ldr x2, [x8]
0x06280974: 1886c297  bl #0x53221d4
0x06280978: f68e02f8  str x22, [x23, #0x28]!
0x0628097C: e00317aa  mov x0, x23
0x06280980: e10316aa  mov x1, x22
0x06280984: 10003c97  bl #0x31809c4
0x06280988: 884240f9  ldr x8, [x20, #0x80]
0x0628098C: 480200b4  cbz x8, #0x62809d4
0x06280990: 081940f9  ldr x8, [x8, #0x30]
0x06280994: 080200b4  cbz x8, #0x62809d4
0x06280998: 29008052  movz w9, #0x1
0x0628099C: 09010239  strb w9, [x8, #0x80]
0x062809A0: b30100b4  cbz x19, #0x62809d4
0x062809A4: a8a200f0  adrp x8, #0x76d7000
0x062809A8: 08c542f9  ldr x8, [x8, #0x588]
0x062809AC: e00313aa  mov x0, x19
0x062809B0: 010140f9  ldr x1, [x8]
0x062809B4: 9ab36597  bl #0x3bed81c
0x062809B8: e00000b4  cbz x0, #0x62809d4
0x062809BC: 1fb40039  strb wzr, [x0, #0x2d]
0x062809C0: a0020012  and w0, w21, #1
0x062809C4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x062809C8: f65741a9  ldp x22, x21, [sp, #0x10]
0x062809CC: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x062809D0: c0035fd6  ret
0x062809D4: b6003c97  bl #0x3180cac

; RVA 0x62809D8 | public void ResetCombine() { }
; bytes=4 sha256=110f46b5b35c069160560c6ad6786f647dd44e8760a52a46fc22dbbcd7630b91 status=arm64_complete_bound indexed_start=True
0x062809D8: c0035fd6  ret

; RVA 0x62809DC | private void OnItemsConsumed(InteractionComponent interactionComponent) { }
; bytes=96 sha256=da38900097f78c2cc9465d772d13787f547439ffa7a14544400671ee45d60bcf status=arm64_complete_bound indexed_start=True
0x062809DC: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x062809E0: c10200b4  cbz x1, #0x6280a38
0x062809E4: e00301aa  mov x0, x1
0x062809E8: f30301aa  mov x19, x1
0x062809EC: 1f8c02f8  str xzr, [x0, #0x28]!
0x062809F0: e1031faa  mov x1, xzr
0x062809F4: f4ff3b97  bl #0x31809c4
0x062809F8: 680e44f8  ldr x8, [x19, #0x40]!
0x062809FC: a80100b4  cbz x8, #0x6280a30
0x06280A00: 090d40f9  ldr x9, [x8, #0x18]
0x06280A04: 002140f9  ldr x0, [x8, #0x40]
0x06280A08: 041540f9  ldr x4, [x8, #0x28]
0x06280A0C: 21008052  movz w1, #0x1
0x06280A10: 22008052  movz w2, #0x1
0x06280A14: e3031f2a  mov w3, wzr
0x06280A18: 20013fd6  blr x9
0x06280A1C: 7f0200f9  str xzr, [x19]
0x06280A20: e00313aa  mov x0, x19
0x06280A24: e1031faa  mov x1, xzr
0x06280A28: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x06280A2C: e6ff3b17  b #0x31809c4
0x06280A30: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x06280A34: c0035fd6  ret
0x06280A38: 9d003c97  bl #0x3180cac

; RVA 0x6280A3C | public void .ctor() { }
; bytes=72 sha256=a9fe34a1d6fd2cfa256d8c30970d54cba7c2b77c89a70efba4d24923e1502568 status=arm64_complete_bound indexed_start=True
0x06280A3C: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06280A40: f44f01a9  stp x20, x19, [sp, #0x10]
0x06280A44: 34d500b0  adrp x20, #0x7d25000
0x06280A48: 35a300d0  adrp x21, #0x76e6000
0x06280A4C: 88e25239  ldrb w8, [x20, #0x4b8]
0x06280A50: b5ae47f9  ldr x21, [x21, #0xf58]
0x06280A54: f30300aa  mov x19, x0
0x06280A58: c8000037  tbnz w8, #0, #0x6280a70
0x06280A5C: 20a300d0  adrp x0, #0x76e6000
0x06280A60: 00ac47f9  ldr x0, [x0, #0xf58]
0x06280A64: edff3b97  bl #0x3180a18
0x06280A68: 28008052  movz w8, #0x1
0x06280A6C: 88e21239  strb w8, [x20, #0x4b8]
0x06280A70: a10240f9  ldr x1, [x21]
0x06280A74: e00313aa  mov x0, x19
0x06280A78: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06280A7C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06280A80: 69be8d17  b #0x45f0424

