; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 8571 Merger.Game.Views.BoardItemViewBase
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x668E168 | public bool get_IsFlyingToBoard() { }
; bytes=8 sha256=6a4f1a962f868613e6936806601aa97f462be4272d6039e73d901c7f9868c768 status=arm64_complete_bound indexed_start=True
0x0668E168: 00004139  ldrb w0, [x0, #0x40]
0x0668E16C: c0035fd6  ret

; RVA 0x668E170 | public void set_IsFlyingToBoard(bool value) { }
; bytes=12 sha256=501d7d5905288072269f6b4c4b92bbb856126869e31af66d1d507a7ad60889a3 status=arm64_complete_bound indexed_start=True
0x0668E170: 28000012  and w8, w1, #1
0x0668E174: 08000139  strb w8, [x0, #0x40]
0x0668E178: c0035fd6  ret

; RVA 0x668E17C | public virtual void add_Tapped(Action<IBoardItemView> value) { }
; bytes=176 sha256=db8e9bbc524f194aa068a233bacb7134dd9eea8464fb836ce218c5484c0cc4ad status=arm64_complete_bound indexed_start=True
0x0668E17C: fe0f1cf8  str x30, [sp, #-0x40]!
0x0668E180: f85f01a9  stp x24, x23, [sp, #0x10]
0x0668E184: f65702a9  stp x22, x21, [sp, #0x20]
0x0668E188: f44f03a9  stp x20, x19, [sp, #0x30]
0x0668E18C: d5b400d0  adrp x21, #0x7d28000
0x0668E190: a8de4939  ldrb w8, [x21, #0x277]
0x0668E194: f30301aa  mov x19, x1
0x0668E198: f40300aa  mov x20, x0
0x0668E19C: c8000037  tbnz w8, #0, #0x668e1b4
0x0668E1A0: c08300f0  adrp x0, #0x7709000
0x0668E1A4: 009040f9  ldr x0, [x0, #0x120]
0x0668E1A8: 1cca2b97  bl #0x3180a18
0x0668E1AC: 28008052  movz w8, #0x1
0x0668E1B0: a8de0939  strb w8, [x21, #0x277]
0x0668E1B4: d88300f0  adrp x24, #0x7709000
0x0668E1B8: 958e44f8  ldr x21, [x20, #0x48]!
0x0668E1BC: 189340f9  ldr x24, [x24, #0x120]
0x0668E1C0: e00315aa  mov x0, x21
0x0668E1C4: e10313aa  mov x1, x19
0x0668E1C8: e2031faa  mov x2, xzr
0x0668E1CC: 553ec197  bl #0x56ddb20
0x0668E1D0: 000100b4  cbz x0, #0x668e1f0
0x0668E1D4: 170340f9  ldr x23, [x24]
0x0668E1D8: f60300aa  mov x22, x0
0x0668E1DC: e10317aa  mov x1, x23
0x0668E1E0: 6cca2b97  bl #0x3180b90
0x0668E1E4: e10300aa  mov x1, x0
0x0668E1E8: 600000b5  cbnz x0, #0x668e1f4
0x0668E1EC: 0d000014  b #0x668e220
0x0668E1F0: e1031faa  mov x1, xzr
0x0668E1F4: e00314aa  mov x0, x20
0x0668E1F8: e20315aa  mov x2, x21
0x0668E1FC: d13b2d97  bl #0x31dd140
0x0668E200: bf0200eb  cmp x21, x0
0x0668E204: f50300aa  mov x21, x0
0x0668E208: c1fdff54  b.ne #0x668e1c0
0x0668E20C: f44f43a9  ldp x20, x19, [sp, #0x30]
0x0668E210: f65742a9  ldp x22, x21, [sp, #0x20]
0x0668E214: f85f41a9  ldp x24, x23, [sp, #0x10]
0x0668E218: fe0744f8  ldr x30, [sp], #0x40
0x0668E21C: c0035fd6  ret
0x0668E220: e00316aa  mov x0, x22
0x0668E224: e10317aa  mov x1, x23
0x0668E228: 88cb2b97  bl #0x3181048

; RVA 0x668E22C | public virtual void remove_Tapped(Action<IBoardItemView> value) { }
; bytes=176 sha256=e68359b0957ae995c49cef4a952373ef30721f229a4cd852209c55ed7330cae2 status=arm64_complete_bound indexed_start=True
0x0668E22C: fe0f1cf8  str x30, [sp, #-0x40]!
0x0668E230: f85f01a9  stp x24, x23, [sp, #0x10]
0x0668E234: f65702a9  stp x22, x21, [sp, #0x20]
0x0668E238: f44f03a9  stp x20, x19, [sp, #0x30]
0x0668E23C: d5b400d0  adrp x21, #0x7d28000
0x0668E240: a8e24939  ldrb w8, [x21, #0x278]
0x0668E244: f30301aa  mov x19, x1
0x0668E248: f40300aa  mov x20, x0
0x0668E24C: c8000037  tbnz w8, #0, #0x668e264
0x0668E250: c08300f0  adrp x0, #0x7709000
0x0668E254: 009040f9  ldr x0, [x0, #0x120]
0x0668E258: f0c92b97  bl #0x3180a18
0x0668E25C: 28008052  movz w8, #0x1
0x0668E260: a8e20939  strb w8, [x21, #0x278]
0x0668E264: d88300f0  adrp x24, #0x7709000
0x0668E268: 958e44f8  ldr x21, [x20, #0x48]!
0x0668E26C: 189340f9  ldr x24, [x24, #0x120]
0x0668E270: e00315aa  mov x0, x21
0x0668E274: e10313aa  mov x1, x19
0x0668E278: e2031faa  mov x2, xzr
0x0668E27C: a73ec197  bl #0x56ddd18
0x0668E280: 000100b4  cbz x0, #0x668e2a0
0x0668E284: 170340f9  ldr x23, [x24]
0x0668E288: f60300aa  mov x22, x0
0x0668E28C: e10317aa  mov x1, x23
0x0668E290: 40ca2b97  bl #0x3180b90
0x0668E294: e10300aa  mov x1, x0
0x0668E298: 600000b5  cbnz x0, #0x668e2a4
0x0668E29C: 0d000014  b #0x668e2d0
0x0668E2A0: e1031faa  mov x1, xzr
0x0668E2A4: e00314aa  mov x0, x20
0x0668E2A8: e20315aa  mov x2, x21
0x0668E2AC: a53b2d97  bl #0x31dd140
0x0668E2B0: bf0200eb  cmp x21, x0
0x0668E2B4: f50300aa  mov x21, x0
0x0668E2B8: c1fdff54  b.ne #0x668e270
0x0668E2BC: f44f43a9  ldp x20, x19, [sp, #0x30]
0x0668E2C0: f65742a9  ldp x22, x21, [sp, #0x20]
0x0668E2C4: f85f41a9  ldp x24, x23, [sp, #0x10]
0x0668E2C8: fe0744f8  ldr x30, [sp], #0x40
0x0668E2CC: c0035fd6  ret
0x0668E2D0: e00316aa  mov x0, x22
0x0668E2D4: e10317aa  mov x1, x23
0x0668E2D8: 5ccb2b97  bl #0x3181048

; RVA 0x668E2DC | public virtual void add_Dragging(Action<IBoardItemView, PointerEventData> value) { }
; bytes=168 sha256=1588d8050dfea385e74654e4fc90dfca1666560d76a02510b5b692f6f11f28bf status=arm64_complete_bound indexed_start=True
0x0668E2DC: fe0f1df8  str x30, [sp, #-0x30]!
0x0668E2E0: f65701a9  stp x22, x21, [sp, #0x10]
0x0668E2E4: f44f02a9  stp x20, x19, [sp, #0x20]
0x0668E2E8: d5b400d0  adrp x21, #0x7d28000
0x0668E2EC: a8e64939  ldrb w8, [x21, #0x279]
0x0668E2F0: f40301aa  mov x20, x1
0x0668E2F4: f30300aa  mov x19, x0
0x0668E2F8: c8000037  tbnz w8, #0, #0x668e310
0x0668E2FC: c08300f0  adrp x0, #0x7709000
0x0668E300: 009440f9  ldr x0, [x0, #0x128]
0x0668E304: c5c92b97  bl #0x3180a18
0x0668E308: 28008052  movz w8, #0x1
0x0668E30C: a8e60939  strb w8, [x21, #0x279]
0x0668E310: 608e43f8  ldr x0, [x19, #0x38]!
0x0668E314: e10314aa  mov x1, x20
0x0668E318: e2031faa  mov x2, xzr
0x0668E31C: 013ec197  bl #0x56ddb20
0x0668E320: 400200b4  cbz x0, #0x668e368
0x0668E324: d68300f0  adrp x22, #0x7709000
0x0668E328: d69640f9  ldr x22, [x22, #0x128]
0x0668E32C: f40300aa  mov x20, x0
0x0668E330: d50240f9  ldr x21, [x22]
0x0668E334: e10315aa  mov x1, x21
0x0668E338: 16ca2b97  bl #0x3180b90
0x0668E33C: 000100b4  cbz x0, #0x668e35c
0x0668E340: 600200f9  str x0, [x19]
0x0668E344: d50240f9  ldr x21, [x22]
0x0668E348: e00314aa  mov x0, x20
0x0668E34C: e10315aa  mov x1, x21
0x0668E350: 10ca2b97  bl #0x3180b90
0x0668E354: e10300aa  mov x1, x0
0x0668E358: c00000b5  cbnz x0, #0x668e370
0x0668E35C: e00314aa  mov x0, x20
0x0668E360: e10315aa  mov x1, x21
0x0668E364: 39cb2b97  bl #0x3181048
0x0668E368: e1031faa  mov x1, xzr
0x0668E36C: 7f0200f9  str xzr, [x19]
0x0668E370: e00313aa  mov x0, x19
0x0668E374: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0668E378: f65741a9  ldp x22, x21, [sp, #0x10]
0x0668E37C: fe0743f8  ldr x30, [sp], #0x30
0x0668E380: 91c92b17  b #0x31809c4

; RVA 0x668E384 | public virtual void remove_Dragging(Action<IBoardItemView, PointerEventData> value) { }
; bytes=168 sha256=fba093a2c9617a8440bcce3d281ca05808b59fc1c847436f2800494edb084a15 status=arm64_complete_bound indexed_start=True
0x0668E384: fe0f1df8  str x30, [sp, #-0x30]!
0x0668E388: f65701a9  stp x22, x21, [sp, #0x10]
0x0668E38C: f44f02a9  stp x20, x19, [sp, #0x20]
0x0668E390: d5b400d0  adrp x21, #0x7d28000
0x0668E394: a8ea4939  ldrb w8, [x21, #0x27a]
0x0668E398: f40301aa  mov x20, x1
0x0668E39C: f30300aa  mov x19, x0
0x0668E3A0: c8000037  tbnz w8, #0, #0x668e3b8
0x0668E3A4: c08300f0  adrp x0, #0x7709000
0x0668E3A8: 009440f9  ldr x0, [x0, #0x128]
0x0668E3AC: 9bc92b97  bl #0x3180a18
0x0668E3B0: 28008052  movz w8, #0x1
0x0668E3B4: a8ea0939  strb w8, [x21, #0x27a]
0x0668E3B8: 608e43f8  ldr x0, [x19, #0x38]!
0x0668E3BC: e10314aa  mov x1, x20
0x0668E3C0: e2031faa  mov x2, xzr
0x0668E3C4: 553ec197  bl #0x56ddd18
0x0668E3C8: 400200b4  cbz x0, #0x668e410
0x0668E3CC: d68300f0  adrp x22, #0x7709000
0x0668E3D0: d69640f9  ldr x22, [x22, #0x128]
0x0668E3D4: f40300aa  mov x20, x0
0x0668E3D8: d50240f9  ldr x21, [x22]
0x0668E3DC: e10315aa  mov x1, x21
0x0668E3E0: ecc92b97  bl #0x3180b90
0x0668E3E4: 000100b4  cbz x0, #0x668e404
0x0668E3E8: 600200f9  str x0, [x19]
0x0668E3EC: d50240f9  ldr x21, [x22]
0x0668E3F0: e00314aa  mov x0, x20
0x0668E3F4: e10315aa  mov x1, x21
0x0668E3F8: e6c92b97  bl #0x3180b90
0x0668E3FC: e10300aa  mov x1, x0
0x0668E400: c00000b5  cbnz x0, #0x668e418
0x0668E404: e00314aa  mov x0, x20
0x0668E408: e10315aa  mov x1, x21
0x0668E40C: 0fcb2b97  bl #0x3181048
0x0668E410: e1031faa  mov x1, xzr
0x0668E414: 7f0200f9  str xzr, [x19]
0x0668E418: e00313aa  mov x0, x19
0x0668E41C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0668E420: f65741a9  ldp x22, x21, [sp, #0x10]
0x0668E424: fe0743f8  ldr x30, [sp], #0x30
0x0668E428: 67c92b17  b #0x31809c4

; RVA 0x668E42C | public virtual void add_DragEnded(Action<IBoardItemView, PointerEventData> value) { }
; bytes=176 sha256=1f83a0342982c1b47ef2a2b411b8bc7e45d067cf3a903de3dcd81f9fe9a89e8e status=arm64_complete_bound indexed_start=True
0x0668E42C: fe0f1cf8  str x30, [sp, #-0x40]!
0x0668E430: f85f01a9  stp x24, x23, [sp, #0x10]
0x0668E434: f65702a9  stp x22, x21, [sp, #0x20]
0x0668E438: f44f03a9  stp x20, x19, [sp, #0x30]
0x0668E43C: d5b400d0  adrp x21, #0x7d28000
0x0668E440: a8ee4939  ldrb w8, [x21, #0x27b]
0x0668E444: f30301aa  mov x19, x1
0x0668E448: f40300aa  mov x20, x0
0x0668E44C: c8000037  tbnz w8, #0, #0x668e464
0x0668E450: c08300f0  adrp x0, #0x7709000
0x0668E454: 009440f9  ldr x0, [x0, #0x128]
0x0668E458: 70c92b97  bl #0x3180a18
0x0668E45C: 28008052  movz w8, #0x1
0x0668E460: a8ee0939  strb w8, [x21, #0x27b]
0x0668E464: d88300f0  adrp x24, #0x7709000
0x0668E468: 950e45f8  ldr x21, [x20, #0x50]!
0x0668E46C: 189740f9  ldr x24, [x24, #0x128]
0x0668E470: e00315aa  mov x0, x21
0x0668E474: e10313aa  mov x1, x19
0x0668E478: e2031faa  mov x2, xzr
0x0668E47C: a93dc197  bl #0x56ddb20
0x0668E480: 000100b4  cbz x0, #0x668e4a0
0x0668E484: 170340f9  ldr x23, [x24]
0x0668E488: f60300aa  mov x22, x0
0x0668E48C: e10317aa  mov x1, x23
0x0668E490: c0c92b97  bl #0x3180b90
0x0668E494: e10300aa  mov x1, x0
0x0668E498: 600000b5  cbnz x0, #0x668e4a4
0x0668E49C: 0d000014  b #0x668e4d0
0x0668E4A0: e1031faa  mov x1, xzr
0x0668E4A4: e00314aa  mov x0, x20
0x0668E4A8: e20315aa  mov x2, x21
0x0668E4AC: 253b2d97  bl #0x31dd140
0x0668E4B0: bf0200eb  cmp x21, x0
0x0668E4B4: f50300aa  mov x21, x0
0x0668E4B8: c1fdff54  b.ne #0x668e470
0x0668E4BC: f44f43a9  ldp x20, x19, [sp, #0x30]
0x0668E4C0: f65742a9  ldp x22, x21, [sp, #0x20]
0x0668E4C4: f85f41a9  ldp x24, x23, [sp, #0x10]
0x0668E4C8: fe0744f8  ldr x30, [sp], #0x40
0x0668E4CC: c0035fd6  ret
0x0668E4D0: e00316aa  mov x0, x22
0x0668E4D4: e10317aa  mov x1, x23
0x0668E4D8: dcca2b97  bl #0x3181048

; RVA 0x668E4DC | public virtual void remove_DragEnded(Action<IBoardItemView, PointerEventData> value) { }
; bytes=176 sha256=3a2608a2c09c6c510f34fbabb98ac23f24c55962ae46b9608e5a9e4f2312c578 status=arm64_complete_bound indexed_start=True
0x0668E4DC: fe0f1cf8  str x30, [sp, #-0x40]!
0x0668E4E0: f85f01a9  stp x24, x23, [sp, #0x10]
0x0668E4E4: f65702a9  stp x22, x21, [sp, #0x20]
0x0668E4E8: f44f03a9  stp x20, x19, [sp, #0x30]
0x0668E4EC: d5b400d0  adrp x21, #0x7d28000
0x0668E4F0: a8f24939  ldrb w8, [x21, #0x27c]
0x0668E4F4: f30301aa  mov x19, x1
0x0668E4F8: f40300aa  mov x20, x0
0x0668E4FC: c8000037  tbnz w8, #0, #0x668e514
0x0668E500: c08300f0  adrp x0, #0x7709000
0x0668E504: 009440f9  ldr x0, [x0, #0x128]
0x0668E508: 44c92b97  bl #0x3180a18
0x0668E50C: 28008052  movz w8, #0x1
0x0668E510: a8f20939  strb w8, [x21, #0x27c]
0x0668E514: d88300f0  adrp x24, #0x7709000
0x0668E518: 950e45f8  ldr x21, [x20, #0x50]!
0x0668E51C: 189740f9  ldr x24, [x24, #0x128]
0x0668E520: e00315aa  mov x0, x21
0x0668E524: e10313aa  mov x1, x19
0x0668E528: e2031faa  mov x2, xzr
0x0668E52C: fb3dc197  bl #0x56ddd18
0x0668E530: 000100b4  cbz x0, #0x668e550
0x0668E534: 170340f9  ldr x23, [x24]
0x0668E538: f60300aa  mov x22, x0
0x0668E53C: e10317aa  mov x1, x23
0x0668E540: 94c92b97  bl #0x3180b90
0x0668E544: e10300aa  mov x1, x0
0x0668E548: 600000b5  cbnz x0, #0x668e554
0x0668E54C: 0d000014  b #0x668e580
0x0668E550: e1031faa  mov x1, xzr
0x0668E554: e00314aa  mov x0, x20
0x0668E558: e20315aa  mov x2, x21
0x0668E55C: f93a2d97  bl #0x31dd140
0x0668E560: bf0200eb  cmp x21, x0
0x0668E564: f50300aa  mov x21, x0
0x0668E568: c1fdff54  b.ne #0x668e520
0x0668E56C: f44f43a9  ldp x20, x19, [sp, #0x30]
0x0668E570: f65742a9  ldp x22, x21, [sp, #0x20]
0x0668E574: f85f41a9  ldp x24, x23, [sp, #0x10]
0x0668E578: fe0744f8  ldr x30, [sp], #0x40
0x0668E57C: c0035fd6  ret
0x0668E580: e00316aa  mov x0, x22
0x0668E584: e10317aa  mov x1, x23
0x0668E588: b0ca2b97  bl #0x3181048

; RVA 0x668E58C | public virtual void add_DragCancelled(Action<IBoardItemView> value) { }
; bytes=176 sha256=893a6919c01ae029928ae69d9500a3bde0031c6684dfbf170cf458cc443f34fc status=arm64_complete_bound indexed_start=True
0x0668E58C: fe0f1cf8  str x30, [sp, #-0x40]!
0x0668E590: f85f01a9  stp x24, x23, [sp, #0x10]
0x0668E594: f65702a9  stp x22, x21, [sp, #0x20]
0x0668E598: f44f03a9  stp x20, x19, [sp, #0x30]
0x0668E59C: d5b400d0  adrp x21, #0x7d28000
0x0668E5A0: a8f64939  ldrb w8, [x21, #0x27d]
0x0668E5A4: f30301aa  mov x19, x1
0x0668E5A8: f40300aa  mov x20, x0
0x0668E5AC: c8000037  tbnz w8, #0, #0x668e5c4
0x0668E5B0: c08300f0  adrp x0, #0x7709000
0x0668E5B4: 009040f9  ldr x0, [x0, #0x120]
0x0668E5B8: 18c92b97  bl #0x3180a18
0x0668E5BC: 28008052  movz w8, #0x1
0x0668E5C0: a8f60939  strb w8, [x21, #0x27d]
0x0668E5C4: d88300f0  adrp x24, #0x7709000
0x0668E5C8: 958e45f8  ldr x21, [x20, #0x58]!
0x0668E5CC: 189340f9  ldr x24, [x24, #0x120]
0x0668E5D0: e00315aa  mov x0, x21
0x0668E5D4: e10313aa  mov x1, x19
0x0668E5D8: e2031faa  mov x2, xzr
0x0668E5DC: 513dc197  bl #0x56ddb20
0x0668E5E0: 000100b4  cbz x0, #0x668e600
0x0668E5E4: 170340f9  ldr x23, [x24]
0x0668E5E8: f60300aa  mov x22, x0
0x0668E5EC: e10317aa  mov x1, x23
0x0668E5F0: 68c92b97  bl #0x3180b90
0x0668E5F4: e10300aa  mov x1, x0
0x0668E5F8: 600000b5  cbnz x0, #0x668e604
0x0668E5FC: 0d000014  b #0x668e630
0x0668E600: e1031faa  mov x1, xzr
0x0668E604: e00314aa  mov x0, x20
0x0668E608: e20315aa  mov x2, x21
0x0668E60C: cd3a2d97  bl #0x31dd140
0x0668E610: bf0200eb  cmp x21, x0
0x0668E614: f50300aa  mov x21, x0
0x0668E618: c1fdff54  b.ne #0x668e5d0
0x0668E61C: f44f43a9  ldp x20, x19, [sp, #0x30]
0x0668E620: f65742a9  ldp x22, x21, [sp, #0x20]
0x0668E624: f85f41a9  ldp x24, x23, [sp, #0x10]
0x0668E628: fe0744f8  ldr x30, [sp], #0x40
0x0668E62C: c0035fd6  ret
0x0668E630: e00316aa  mov x0, x22
0x0668E634: e10317aa  mov x1, x23
0x0668E638: 84ca2b97  bl #0x3181048

; RVA 0x668E63C | public virtual void remove_DragCancelled(Action<IBoardItemView> value) { }
; bytes=176 sha256=8314aa96cd2dd715c2827c5d1e45a2f5d333ba9f64f34dcf07df9d4dfade9b0e status=arm64_complete_bound indexed_start=True
0x0668E63C: fe0f1cf8  str x30, [sp, #-0x40]!
0x0668E640: f85f01a9  stp x24, x23, [sp, #0x10]
0x0668E644: f65702a9  stp x22, x21, [sp, #0x20]
0x0668E648: f44f03a9  stp x20, x19, [sp, #0x30]
0x0668E64C: d5b400d0  adrp x21, #0x7d28000
0x0668E650: a8fa4939  ldrb w8, [x21, #0x27e]
0x0668E654: f30301aa  mov x19, x1
0x0668E658: f40300aa  mov x20, x0
0x0668E65C: c8000037  tbnz w8, #0, #0x668e674
0x0668E660: c08300f0  adrp x0, #0x7709000
0x0668E664: 009040f9  ldr x0, [x0, #0x120]
0x0668E668: ecc82b97  bl #0x3180a18
0x0668E66C: 28008052  movz w8, #0x1
0x0668E670: a8fa0939  strb w8, [x21, #0x27e]
0x0668E674: d88300f0  adrp x24, #0x7709000
0x0668E678: 958e45f8  ldr x21, [x20, #0x58]!
0x0668E67C: 189340f9  ldr x24, [x24, #0x120]
0x0668E680: e00315aa  mov x0, x21
0x0668E684: e10313aa  mov x1, x19
0x0668E688: e2031faa  mov x2, xzr
0x0668E68C: a33dc197  bl #0x56ddd18
0x0668E690: 000100b4  cbz x0, #0x668e6b0
0x0668E694: 170340f9  ldr x23, [x24]
0x0668E698: f60300aa  mov x22, x0
0x0668E69C: e10317aa  mov x1, x23
0x0668E6A0: 3cc92b97  bl #0x3180b90
0x0668E6A4: e10300aa  mov x1, x0
0x0668E6A8: 600000b5  cbnz x0, #0x668e6b4
0x0668E6AC: 0d000014  b #0x668e6e0
0x0668E6B0: e1031faa  mov x1, xzr
0x0668E6B4: e00314aa  mov x0, x20
0x0668E6B8: e20315aa  mov x2, x21
0x0668E6BC: a13a2d97  bl #0x31dd140
0x0668E6C0: bf0200eb  cmp x21, x0
0x0668E6C4: f50300aa  mov x21, x0
0x0668E6C8: c1fdff54  b.ne #0x668e680
0x0668E6CC: f44f43a9  ldp x20, x19, [sp, #0x30]
0x0668E6D0: f65742a9  ldp x22, x21, [sp, #0x20]
0x0668E6D4: f85f41a9  ldp x24, x23, [sp, #0x10]
0x0668E6D8: fe0744f8  ldr x30, [sp], #0x40
0x0668E6DC: c0035fd6  ret
0x0668E6E0: e00316aa  mov x0, x22
0x0668E6E4: e10317aa  mov x1, x23
0x0668E6E8: 58ca2b97  bl #0x3181048

; RVA 0x668E6EC | public Tween get_SlideItemTween() { }
; bytes=8 sha256=dc0647a8f63aacbe9d6b7a7bf9b54950de74e29f82066e71731415b61d501071 status=arm64_complete_bound indexed_start=True
0x0668E6EC: 003040f9  ldr x0, [x0, #0x60]
0x0668E6F0: c0035fd6  ret

; RVA 0x668E6F4 | public void set_SlideItemTween(Tween value) { }
; bytes=8 sha256=3073c09600e28153937f8c67c3771b654b9bdda565a5a9ba9f7cd4d5d585a7c7 status=arm64_complete_bound indexed_start=True
0x0668E6F4: 010c06f8  str x1, [x0, #0x60]!
0x0668E6F8: b3c82b17  b #0x31809c4

; RVA 0x668E6FC | public BoardItemPosition get_Position() { }
; bytes=8 sha256=f637e07b3820a82a5634a0174c92391b8ec5194fafa5b124fa3a73d3007ae512 status=arm64_complete_bound indexed_start=True
0x0668E6FC: 003440f9  ldr x0, [x0, #0x68]
0x0668E700: c0035fd6  ret

; RVA 0x668E704 | public void set_Position(BoardItemPosition value) { }
; bytes=8 sha256=ced4dad293bbebf53e5e1e4b331a1a11060b63a076cbfbf7cf018c8c59839c6c status=arm64_complete_bound indexed_start=True
0x0668E704: 013400f9  str x1, [x0, #0x68]
0x0668E708: c0035fd6  ret

; RVA 0x668E70C | public IVisualComponent get_VisualComponent() { }
; bytes=8 sha256=6b819324b4a3bc2d390c83c7fe02ea41a1f57ae5d4f2a9b0c9256341a5b8d37f status=arm64_complete_bound indexed_start=True
0x0668E70C: 001840f9  ldr x0, [x0, #0x30]
0x0668E710: c0035fd6  ret

; RVA 0x668E714 | protected ILockedComponent get_LockedComponent() { }
; bytes=204 sha256=77ee0968c267449e52fb96c170bf91caa0a53b070792ffec95b81db50130261d status=arm64_complete_bound indexed_start=True
0x0668E714: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0668E718: f44f01a9  stp x20, x19, [sp, #0x10]
0x0668E71C: d3b400d0  adrp x19, #0x7d28000
0x0668E720: 68fe4939  ldrb w8, [x19, #0x27f]
0x0668E724: f40300aa  mov x20, x0
0x0668E728: c8000037  tbnz w8, #0, #0x668e740
0x0668E72C: 808100f0  adrp x0, #0x76c1000
0x0668E730: 00c446f9  ldr x0, [x0, #0xd88]
0x0668E734: b9c82b97  bl #0x3180a18
0x0668E738: 28008052  movz w8, #0x1
0x0668E73C: 68fe0939  strb w8, [x19, #0x27f]
0x0668E740: f30314aa  mov x19, x20
0x0668E744: 758e47f8  ldr x21, [x19, #0x78]!
0x0668E748: 350400b5  cbnz x21, #0x668e7cc
0x0668E74C: 941a40f9  ldr x20, [x20, #0x30]
0x0668E750: 740400b4  cbz x20, #0x668e7dc
0x0668E754: 8a8100f0  adrp x10, #0x76c1000
0x0668E758: 880240f9  ldr x8, [x20]
0x0668E75C: 4ac546f9  ldr x10, [x10, #0xd88]
0x0668E760: 095d4279  ldrh w9, [x8, #0x12e]
0x0668E764: 410140f9  ldr x1, [x10]
0x0668E768: 290100b4  cbz x9, #0x668e78c
0x0668E76C: 0a5940f9  ldr x10, [x8, #0xb0]
0x0668E770: 4a210091  add x10, x10, #8
0x0668E774: 4b815ff8  ldur x11, [x10, #-8]
0x0668E778: 7f0101eb  cmp x11, x1
0x0668E77C: 00010054  b.eq #0x668e79c
0x0668E780: 290500f1  subs x9, x9, #1
0x0668E784: 4a410091  add x10, x10, #0x10
0x0668E788: 61ffff54  b.ne #0x668e774
0x0668E78C: 820d8052  movz w2, #0x6c
0x0668E790: e00314aa  mov x0, x20
0x0668E794: df202b97  bl #0x3156b10
0x0668E798: 05000014  b #0x668e7ac
0x0668E79C: 490140b9  ldr w9, [x10]
0x0668E7A0: 29b10111  add w9, w9, #0x6c
0x0668E7A4: 08d1298b  add x8, x8, w9, sxtw #4
0x0668E7A8: 00e10491  add x0, x8, #0x138
0x0668E7AC: 080440a9  ldp x8, x1, [x0]
0x0668E7B0: e00314aa  mov x0, x20
0x0668E7B4: 00013fd6  blr x8
0x0668E7B8: f50300aa  mov x21, x0
0x0668E7BC: 600200f9  str x0, [x19]
0x0668E7C0: e00313aa  mov x0, x19
0x0668E7C4: e10315aa  mov x1, x21
0x0668E7C8: 7fc82b97  bl #0x31809c4
0x0668E7CC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0668E7D0: e00315aa  mov x0, x21
0x0668E7D4: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0668E7D8: c0035fd6  ret
0x0668E7DC: 34c92b97  bl #0x3180cac

; RVA 0x668E7E0 | protected bool get_IsDragging() { }
; bytes=8 sha256=0c35e0c47c28785ddf5a0707514243d02ae8a312115dde20e75546488e5beb33 status=arm64_complete_bound indexed_start=True
0x0668E7E0: 00c04139  ldrb w0, [x0, #0x70]
0x0668E7E4: c0035fd6  ret

; RVA 0x668E7E8 | private void set_IsDragging(bool value) { }
; bytes=12 sha256=3a5df5e27b3d1441d8286043fde8019cb3be0ae7c039360d3b7da504d631a9d3 status=arm64_complete_bound indexed_start=True
0x0668E7E8: 28000012  and w8, w1, #1
0x0668E7EC: 08c00139  strb w8, [x0, #0x70]
0x0668E7F0: c0035fd6  ret

; RVA 0x668E7F4 | protected EmptyGraphic get_ClickableArea() { }
; bytes=8 sha256=c0b9896d6c3d8aacf384c0d0cf5d897e84f621efe31cc89c980be348eb9c6614 status=arm64_complete_bound indexed_start=True
0x0668E7F4: 001440f9  ldr x0, [x0, #0x28]
0x0668E7F8: c0035fd6  ret

; RVA 0x668E7FC | public bool get_IsTweened() { }
; bytes=164 sha256=8b35b33692c88b94e6708590e3c9a21aed00a278af2011cc9b66333ce95e3be5 status=arm64_complete_bound indexed_start=True
0x0668E7FC: fe0f1ef8  str x30, [sp, #-0x20]!
0x0668E800: f44f01a9  stp x20, x19, [sp, #0x10]
0x0668E804: d4b400d0  adrp x20, #0x7d28000
0x0668E808: 88024a39  ldrb w8, [x20, #0x280]
0x0668E80C: f30300aa  mov x19, x0
0x0668E810: c8000037  tbnz w8, #0, #0x668e828
0x0668E814: 808100f0  adrp x0, #0x76c1000
0x0668E818: 00c446f9  ldr x0, [x0, #0xd88]
0x0668E81C: 7fc82b97  bl #0x3180a18
0x0668E820: 28008052  movz w8, #0x1
0x0668E824: 88020a39  strb w8, [x20, #0x280]
0x0668E828: 731a40f9  ldr x19, [x19, #0x30]
0x0668E82C: 930300b4  cbz x19, #0x668e89c
0x0668E830: 8a8100f0  adrp x10, #0x76c1000
0x0668E834: 680240f9  ldr x8, [x19]
0x0668E838: 4ac546f9  ldr x10, [x10, #0xd88]
0x0668E83C: 095d4279  ldrh w9, [x8, #0x12e]
0x0668E840: 410140f9  ldr x1, [x10]
0x0668E844: 290100b4  cbz x9, #0x668e868
0x0668E848: 0a5940f9  ldr x10, [x8, #0xb0]
0x0668E84C: 4a210091  add x10, x10, #8
0x0668E850: 4b815ff8  ldur x11, [x10, #-8]
0x0668E854: 7f0101eb  cmp x11, x1
0x0668E858: 00010054  b.eq #0x668e878
0x0668E85C: 290500f1  subs x9, x9, #1
0x0668E860: 4a410091  add x10, x10, #0x10
0x0668E864: 61ffff54  b.ne #0x668e850
0x0668E868: 820c8052  movz w2, #0x64
0x0668E86C: e00313aa  mov x0, x19
0x0668E870: a8202b97  bl #0x3156b10
0x0668E874: 05000014  b #0x668e888
0x0668E878: 490140b9  ldr w9, [x10]
0x0668E87C: 29910111  add w9, w9, #0x64
0x0668E880: 08d1298b  add x8, x8, w9, sxtw #4
0x0668E884: 00e10491  add x0, x8, #0x138
0x0668E888: 020440a9  ldp x2, x1, [x0]
0x0668E88C: e00313aa  mov x0, x19
0x0668E890: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0668E894: fe0742f8  ldr x30, [sp], #0x20
0x0668E898: 40001fd6  br x2
0x0668E89C: 04c92b97  bl #0x3180cac

; RVA 0x668E8A0 | public void set_IsTweened(bool value) { }
; bytes=204 sha256=54eb83944330ee3bc888fae6e182c07b7e08909b3c145afb300649234d07dfef status=arm64_complete_bound indexed_start=True
0x0668E8A0: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0668E8A4: f44f01a9  stp x20, x19, [sp, #0x10]
0x0668E8A8: d5b400d0  adrp x21, #0x7d28000
0x0668E8AC: a8064a39  ldrb w8, [x21, #0x281]
0x0668E8B0: f303012a  mov w19, w1
0x0668E8B4: f40300aa  mov x20, x0
0x0668E8B8: c8000037  tbnz w8, #0, #0x668e8d0
0x0668E8BC: 808100f0  adrp x0, #0x76c1000
0x0668E8C0: 00c446f9  ldr x0, [x0, #0xd88]
0x0668E8C4: 55c82b97  bl #0x3180a18
0x0668E8C8: 28008052  movz w8, #0x1
0x0668E8CC: a8060a39  strb w8, [x21, #0x281]
0x0668E8D0: 951a40f9  ldr x21, [x20, #0x30]
0x0668E8D4: b50400b4  cbz x21, #0x668e968
0x0668E8D8: 8a8100f0  adrp x10, #0x76c1000
0x0668E8DC: a80240f9  ldr x8, [x21]
0x0668E8E0: 4ac546f9  ldr x10, [x10, #0xd88]
0x0668E8E4: 095d4279  ldrh w9, [x8, #0x12e]
0x0668E8E8: 410140f9  ldr x1, [x10]
0x0668E8EC: 290100b4  cbz x9, #0x668e910
0x0668E8F0: 0a5940f9  ldr x10, [x8, #0xb0]
0x0668E8F4: 4a210091  add x10, x10, #8
0x0668E8F8: 4b815ff8  ldur x11, [x10, #-8]
0x0668E8FC: 7f0101eb  cmp x11, x1
0x0668E900: 00010054  b.eq #0x668e920
0x0668E904: 290500f1  subs x9, x9, #1
0x0668E908: 4a410091  add x10, x10, #0x10
0x0668E90C: 61ffff54  b.ne #0x668e8f8
0x0668E910: a20c8052  movz w2, #0x65
0x0668E914: e00315aa  mov x0, x21
0x0668E918: 7e202b97  bl #0x3156b10
0x0668E91C: 05000014  b #0x668e930
0x0668E920: 490140b9  ldr w9, [x10]
0x0668E924: 29950111  add w9, w9, #0x65
0x0668E928: 08d1298b  add x8, x8, w9, sxtw #4
0x0668E92C: 00e10491  add x0, x8, #0x138
0x0668E930: 080840a9  ldp x8, x2, [x0]
0x0668E934: 61020012  and w1, w19, #1
0x0668E938: e00315aa  mov x0, x21
0x0668E93C: 00013fd6  blr x8
0x0668E940: 801640f9  ldr x0, [x20, #0x28]
0x0668E944: 200100b4  cbz x0, #0x668e968
0x0668E948: 080040f9  ldr x8, [x0]
0x0668E94C: 036541f9  ldr x3, [x8, #0x2c8]
0x0668E950: 026941f9  ldr x2, [x8, #0x2d0]
0x0668E954: e803332a  mvn w8, w19
0x0668E958: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0668E95C: 01010012  and w1, w8, #1
0x0668E960: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0668E964: 60001fd6  br x3
0x0668E968: d1c82b97  bl #0x3180cac

; RVA 0x668E96C | public bool get_IsLockedByFlyingAnimation() { }
; bytes=172 sha256=7fc60c606bafc0d341f6b5d4ab816e2ce380eaabf8b7ade956cad103038ae77a status=arm64_complete_bound indexed_start=True
0x0668E96C: fe0f1ef8  str x30, [sp, #-0x20]!
0x0668E970: f44f01a9  stp x20, x19, [sp, #0x10]
0x0668E974: d4b400d0  adrp x20, #0x7d28000
0x0668E978: 880a4a39  ldrb w8, [x20, #0x282]
0x0668E97C: f30300aa  mov x19, x0
0x0668E980: c8000037  tbnz w8, #0, #0x668e998
0x0668E984: c08300f0  adrp x0, #0x7709000
0x0668E988: 009840f9  ldr x0, [x0, #0x130]
0x0668E98C: 23c82b97  bl #0x3180a18
0x0668E990: 28008052  movz w8, #0x1
0x0668E994: 880a0a39  strb w8, [x20, #0x282]
0x0668E998: e00313aa  mov x0, x19
0x0668E99C: 5effff97  bl #0x668e714
0x0668E9A0: a00300b4  cbz x0, #0x668ea14
0x0668E9A4: ca8300f0  adrp x10, #0x7709000
0x0668E9A8: 080040f9  ldr x8, [x0]
0x0668E9AC: 4a9940f9  ldr x10, [x10, #0x130]
0x0668E9B0: f30300aa  mov x19, x0
0x0668E9B4: 095d4279  ldrh w9, [x8, #0x12e]
0x0668E9B8: 410140f9  ldr x1, [x10]
0x0668E9BC: 290100b4  cbz x9, #0x668e9e0
0x0668E9C0: 0a5940f9  ldr x10, [x8, #0xb0]
0x0668E9C4: 4a210091  add x10, x10, #8
0x0668E9C8: 4b815ff8  ldur x11, [x10, #-8]
0x0668E9CC: 7f0101eb  cmp x11, x1
0x0668E9D0: 00010054  b.eq #0x668e9f0
0x0668E9D4: 290500f1  subs x9, x9, #1
0x0668E9D8: 4a410091  add x10, x10, #0x10
0x0668E9DC: 61ffff54  b.ne #0x668e9c8
0x0668E9E0: e2008052  movz w2, #0x7
0x0668E9E4: e00313aa  mov x0, x19
0x0668E9E8: 4a202b97  bl #0x3156b10
0x0668E9EC: 05000014  b #0x668ea00
0x0668E9F0: 490140b9  ldr w9, [x10]
0x0668E9F4: 291d0011  add w9, w9, #7
0x0668E9F8: 08d1298b  add x8, x8, w9, sxtw #4
0x0668E9FC: 00e10491  add x0, x8, #0x138
0x0668EA00: 020440a9  ldp x2, x1, [x0]
0x0668EA04: e00313aa  mov x0, x19
0x0668EA08: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0668EA0C: fe0742f8  ldr x30, [sp], #0x20
0x0668EA10: 40001fd6  br x2
0x0668EA14: a6c82b97  bl #0x3180cac

; RVA 0x668EA18 | public void set_IsLockedByFlyingAnimation(bool value) { }
; bytes=180 sha256=439270018aa945dfde46b5fb1b16b2232ff34c80d5e219bfa76529747e5d12d0 status=arm64_complete_bound indexed_start=True
0x0668EA18: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0668EA1C: f44f01a9  stp x20, x19, [sp, #0x10]
0x0668EA20: d5b400d0  adrp x21, #0x7d28000
0x0668EA24: a80e4a39  ldrb w8, [x21, #0x283]
0x0668EA28: f303012a  mov w19, w1
0x0668EA2C: f40300aa  mov x20, x0
0x0668EA30: c8000037  tbnz w8, #0, #0x668ea48
0x0668EA34: c08300f0  adrp x0, #0x7709000
0x0668EA38: 009840f9  ldr x0, [x0, #0x130]
0x0668EA3C: f7c72b97  bl #0x3180a18
0x0668EA40: 28008052  movz w8, #0x1
0x0668EA44: a80e0a39  strb w8, [x21, #0x283]
0x0668EA48: e00314aa  mov x0, x20
0x0668EA4C: 32ffff97  bl #0x668e714
0x0668EA50: c00300b4  cbz x0, #0x668eac8
0x0668EA54: ca8300f0  adrp x10, #0x7709000
0x0668EA58: 080040f9  ldr x8, [x0]
0x0668EA5C: 4a9940f9  ldr x10, [x10, #0x130]
0x0668EA60: f40300aa  mov x20, x0
0x0668EA64: 095d4279  ldrh w9, [x8, #0x12e]
0x0668EA68: 410140f9  ldr x1, [x10]
0x0668EA6C: 290100b4  cbz x9, #0x668ea90
0x0668EA70: 0a5940f9  ldr x10, [x8, #0xb0]
0x0668EA74: 4a210091  add x10, x10, #8
0x0668EA78: 4b815ff8  ldur x11, [x10, #-8]
0x0668EA7C: 7f0101eb  cmp x11, x1
0x0668EA80: 00010054  b.eq #0x668eaa0
0x0668EA84: 290500f1  subs x9, x9, #1
0x0668EA88: 4a410091  add x10, x10, #0x10
0x0668EA8C: 61ffff54  b.ne #0x668ea78
0x0668EA90: 02018052  movz w2, #0x8
0x0668EA94: e00314aa  mov x0, x20
0x0668EA98: 1e202b97  bl #0x3156b10
0x0668EA9C: 05000014  b #0x668eab0
0x0668EAA0: 490140b9  ldr w9, [x10]
0x0668EAA4: 29210011  add w9, w9, #8
0x0668EAA8: 08d1298b  add x8, x8, w9, sxtw #4
0x0668EAAC: 00e10491  add x0, x8, #0x138
0x0668EAB0: 030840a9  ldp x3, x2, [x0]
0x0668EAB4: 61020012  and w1, w19, #1
0x0668EAB8: e00314aa  mov x0, x20
0x0668EABC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0668EAC0: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0668EAC4: 60001fd6  br x3
0x0668EAC8: 79c82b97  bl #0x3180cac

; RVA 0x668EACC | protected virtual void OnEnable() { }
; bytes=304 sha256=1a76b2f3e1f8370574fbd40c406fa29ff4795396ee574eb3ceeba083ca126a76 status=arm64_complete_bound indexed_start=True
0x0668EACC: fe0f1df8  str x30, [sp, #-0x30]!
0x0668EAD0: f65701a9  stp x22, x21, [sp, #0x10]
0x0668EAD4: f44f02a9  stp x20, x19, [sp, #0x20]
0x0668EAD8: d4b400d0  adrp x20, #0x7d28000
0x0668EADC: 88124a39  ldrb w8, [x20, #0x284]
0x0668EAE0: f30300aa  mov x19, x0
0x0668EAE4: 28010037  tbnz w8, #0, #0x668eb08
0x0668EAE8: c08300f0  adrp x0, #0x7709000
0x0668EAEC: 009c40f9  ldr x0, [x0, #0x138]
0x0668EAF0: cac72b97  bl #0x3180a18
0x0668EAF4: c08300f0  adrp x0, #0x7709000
0x0668EAF8: 00a040f9  ldr x0, [x0, #0x140]
0x0668EAFC: c7c72b97  bl #0x3180a18
0x0668EB00: 28008052  movz w8, #0x1
0x0668EB04: 88120a39  strb w8, [x20, #0x284]
0x0668EB08: e00313aa  mov x0, x19
0x0668EB0C: e1031faa  mov x1, xzr
0x0668EB10: 06710894  bl #0x68aaf28
0x0668EB14: 35b400b0  adrp x21, #0x7d13000
0x0668EB18: a8725b39  ldrb w8, [x21, #0x6dc]
0x0668EB1C: f40300aa  mov x20, x0
0x0668EB20: c8000035  cbnz w8, #0x668eb38
0x0668EB24: 007e00d0  adrp x0, #0x7650000
0x0668EB28: 007440f9  ldr x0, [x0, #0xe8]
0x0668EB2C: bbc72b97  bl #0x3180a18
0x0668EB30: 28008052  movz w8, #0x1
0x0668EB34: a8721b39  strb w8, [x21, #0x6dc]
0x0668EB38: 140600b4  cbz x20, #0x668ebf8
0x0668EB3C: 087e00d0  adrp x8, #0x7650000
0x0668EB40: 087540f9  ldr x8, [x8, #0xe8]
0x0668EB44: d58300f0  adrp x21, #0x7709000
0x0668EB48: d68300f0  adrp x22, #0x7709000
0x0668EB4C: e00314aa  mov x0, x20
0x0668EB50: 080140f9  ldr x8, [x8]
0x0668EB54: e1031faa  mov x1, xzr
0x0668EB58: 085d40f9  ldr x8, [x8, #0xb8]
0x0668EB5C: 0005402d  ldp s0, s1, [x8]
0x0668EB60: b5a240f9  ldr x21, [x21, #0x140]
0x0668EB64: d69e40f9  ldr x22, [x22, #0x138]
0x0668EB68: 236b2194  bl #0x6ee97f4
0x0668EB6C: e00313aa  mov x0, x19
0x0668EB70: e1031faa  mov x1, xzr
0x0668EB74: d7342194  bl #0x6edbed0
0x0668EB78: a10240f9  ldr x1, [x21]
0x0668EB7C: 63055c97  bl #0x3d90108
0x0668EB80: e00313aa  mov x0, x19
0x0668EB84: e1031faa  mov x1, xzr
0x0668EB88: d2342194  bl #0x6edbed0
0x0668EB8C: c10240f9  ldr x1, [x22]
0x0668EB90: 5e055c97  bl #0x3d90108
0x0668EB94: e00313aa  mov x0, x19
0x0668EB98: e1031faa  mov x1, xzr
0x0668EB9C: be342194  bl #0x6edbe94
0x0668EBA0: 54b40090  adrp x20, #0x7d16000
0x0668EBA4: 88a64039  ldrb w8, [x20, #0x29]
0x0668EBA8: f30300aa  mov x19, x0
0x0668EBAC: c8000035  cbnz w8, #0x668ebc4
0x0668EBB0: 007e00b0  adrp x0, #0x764f000
0x0668EBB4: 00b046f9  ldr x0, [x0, #0xd60]
0x0668EBB8: 98c72b97  bl #0x3180a18
0x0668EBBC: 28008052  movz w8, #0x1
0x0668EBC0: 88a60039  strb w8, [x20, #0x29]
0x0668EBC4: b30100b4  cbz x19, #0x668ebf8
0x0668EBC8: 087e00b0  adrp x8, #0x764f000
0x0668EBCC: 08b146f9  ldr x8, [x8, #0xd60]
0x0668EBD0: e00313aa  mov x0, x19
0x0668EBD4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0668EBD8: f65741a9  ldp x22, x21, [sp, #0x10]
0x0668EBDC: 080140f9  ldr x8, [x8]
0x0668EBE0: e1031faa  mov x1, xzr
0x0668EBE4: 085d40f9  ldr x8, [x8, #0xb8]
0x0668EBE8: 0109422d  ldp s1, s2, [x8, #0x10]
0x0668EBEC: 000d40bd  ldr s0, [x8, #0xc]
0x0668EBF0: fe0743f8  ldr x30, [sp], #0x30
0x0668EBF4: 15722114  b #0x6eeb448
0x0668EBF8: 2dc82b97  bl #0x3180cac

; RVA 0x668EBFC | protected virtual void PointerClicked() { }
; bytes=88 sha256=da45e854a6810e69fac6b1726c2c2c4ea7706c5afde9a059a4b9da972f9865d3 status=arm64_complete_bound indexed_start=True
0x0668EBFC: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x0668EC00: 08c04139  ldrb w8, [x0, #0x70]
0x0668EC04: 28020035  cbnz w8, #0x668ec48
0x0668EC08: f30300aa  mov x19, x0
0x0668EC0C: 001440f9  ldr x0, [x0, #0x28]
0x0668EC10: 000200b4  cbz x0, #0x668ec50
0x0668EC14: 080040f9  ldr x8, [x0]
0x0668EC18: 095d41f9  ldr x9, [x8, #0x2b8]
0x0668EC1C: 016141f9  ldr x1, [x8, #0x2c0]
0x0668EC20: 20013fd6  blr x9
0x0668EC24: 20010036  tbz w0, #0, #0x668ec48
0x0668EC28: 682640f9  ldr x8, [x19, #0x48]
0x0668EC2C: e80000b4  cbz x8, #0x668ec48
0x0668EC30: 030d40f9  ldr x3, [x8, #0x18]
0x0668EC34: 002140f9  ldr x0, [x8, #0x40]
0x0668EC38: 021540f9  ldr x2, [x8, #0x28]
0x0668EC3C: e10313aa  mov x1, x19
0x0668EC40: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x0668EC44: 60001fd6  br x3
0x0668EC48: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x0668EC4C: c0035fd6  ret
0x0668EC50: 17c82b97  bl #0x3180cac

; RVA 0x668EC74 | private void UnityEngine.EventSystems.IPointerDownHandler.OnPointerDown(PointerEventData eventData) { }
; bytes=4 sha256=110f46b5b35c069160560c6ad6786f647dd44e8760a52a46fc22dbbcd7630b91 status=arm64_complete_bound indexed_start=True
0x0668EC74: c0035fd6  ret

; RVA 0x668EC78 | private void UnityEngine.EventSystems.IPointerUpHandler.OnPointerUp(PointerEventData eventData) { }
; bytes=4 sha256=110f46b5b35c069160560c6ad6786f647dd44e8760a52a46fc22dbbcd7630b91 status=arm64_complete_bound indexed_start=True
0x0668EC78: c0035fd6  ret

; RVA 0x668EC7C | private void UnityEngine.EventSystems.IPointerClickHandler.OnPointerClick(PointerEventData eventData) { }
; bytes=16 sha256=dbd78df7761d447dad0e6b9df736c665df22dcdd6f3bfa9123aa84e7c073dcf3 status=arm64_complete_bound indexed_start=True
0x0668EC7C: 080040f9  ldr x8, [x0]
0x0668EC80: 022542f9  ldr x2, [x8, #0x448]
0x0668EC84: 012942f9  ldr x1, [x8, #0x450]
0x0668EC88: 40001fd6  br x2

; RVA 0x668EC8C | private void UnityEngine.EventSystems.IDragHandler.OnDrag(PointerEventData eventData) { }
; bytes=44 sha256=13f8f067e28dc1e80df9d5278c237ffa423c4376e080bb2cb6cf69c2f63fbeed status=arm64_complete_bound indexed_start=True
0x0668EC8C: 081c40f9  ldr x8, [x0, #0x38]
0x0668EC90: 29008052  movz w9, #0x1
0x0668EC94: 09c00139  strb w9, [x0, #0x70]
0x0668EC98: e80000b4  cbz x8, #0x668ecb4
0x0668EC9C: e20301aa  mov x2, x1
0x0668ECA0: e10300aa  mov x1, x0
0x0668ECA4: 040d40f9  ldr x4, [x8, #0x18]
0x0668ECA8: 002140f9  ldr x0, [x8, #0x40]
0x0668ECAC: 031540f9  ldr x3, [x8, #0x28]
0x0668ECB0: 80001fd6  br x4
0x0668ECB4: c0035fd6  ret

; RVA 0x668ECB8 | private void UnityEngine.EventSystems.IEndDragHandler.OnEndDrag(PointerEventData eventData) { }
; bytes=184 sha256=03042362383b733ae07bbf8d32be14a24172ed25c879f42f8131bdb53c523b5d status=arm64_complete_bound indexed_start=True
0x0668ECB8: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x0668ECBC: f65701a9  stp x22, x21, [sp, #0x10]
0x0668ECC0: f44f02a9  stp x20, x19, [sp, #0x20]
0x0668ECC4: d7b400d0  adrp x23, #0x7d28000
0x0668ECC8: d68300f0  adrp x22, #0x7709000
0x0668ECCC: d58300f0  adrp x21, #0x7709000
0x0668ECD0: e8164a39  ldrb w8, [x23, #0x285]
0x0668ECD4: d6a240f9  ldr x22, [x22, #0x140]
0x0668ECD8: b59e40f9  ldr x21, [x21, #0x138]
0x0668ECDC: f30301aa  mov x19, x1
0x0668ECE0: f40300aa  mov x20, x0
0x0668ECE4: 28010037  tbnz w8, #0, #0x668ed08
0x0668ECE8: c08300f0  adrp x0, #0x7709000
0x0668ECEC: 009c40f9  ldr x0, [x0, #0x138]
0x0668ECF0: 4ac72b97  bl #0x3180a18
0x0668ECF4: c08300f0  adrp x0, #0x7709000
0x0668ECF8: 00a040f9  ldr x0, [x0, #0x140]
0x0668ECFC: 47c72b97  bl #0x3180a18
0x0668ED00: 28008052  movz w8, #0x1
0x0668ED04: e8160a39  strb w8, [x23, #0x285]
0x0668ED08: e00314aa  mov x0, x20
0x0668ED0C: e1031faa  mov x1, xzr
0x0668ED10: 9fc20139  strb wzr, [x20, #0x70]
0x0668ED14: 6f342194  bl #0x6edbed0
0x0668ED18: c10240f9  ldr x1, [x22]
0x0668ED1C: fb045c97  bl #0x3d90108
0x0668ED20: e00314aa  mov x0, x20
0x0668ED24: e1031faa  mov x1, xzr
0x0668ED28: 6a342194  bl #0x6edbed0
0x0668ED2C: a10240f9  ldr x1, [x21]
0x0668ED30: f6045c97  bl #0x3d90108
0x0668ED34: 882a40f9  ldr x8, [x20, #0x50]
0x0668ED38: 480100b4  cbz x8, #0x668ed60
0x0668ED3C: 040d40f9  ldr x4, [x8, #0x18]
0x0668ED40: 002140f9  ldr x0, [x8, #0x40]
0x0668ED44: 031540f9  ldr x3, [x8, #0x28]
0x0668ED48: e10314aa  mov x1, x20
0x0668ED4C: e20313aa  mov x2, x19
0x0668ED50: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0668ED54: f65741a9  ldp x22, x21, [sp, #0x10]
0x0668ED58: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x0668ED5C: 80001fd6  br x4
0x0668ED60: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0668ED64: f65741a9  ldp x22, x21, [sp, #0x10]
0x0668ED68: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x0668ED6C: c0035fd6  ret

; RVA 0x668ED70 | private void Framework.Util.Pooling.IPoolable.Initialize() { }
; bytes=4 sha256=110f46b5b35c069160560c6ad6786f647dd44e8760a52a46fc22dbbcd7630b91 status=arm64_complete_bound indexed_start=True
0x0668ED70: c0035fd6  ret

; RVA 0x668ED74 | private void Framework.Util.Pooling.IPoolable.Deactivated() { }
; bytes=12 sha256=7de696bb71822c32d38f536e0959a0352c46bfe11db8e520a4365c118bde92b7 status=arm64_complete_bound indexed_start=True
0x0668ED74: 080040f9  ldr x8, [x0]
0x0668ED78: 028559a9  ldp x2, x1, [x8, #0x198]
0x0668ED7C: 40001fd6  br x2

; RVA 0x668EC54 | protected void InvokeTapped() { }
; bytes=32 sha256=4a9abdfc4cc638f1df0efe610db685879b54389d1defbec66562cafb5900758d status=arm64_complete_bound indexed_start=True
0x0668EC54: 082440f9  ldr x8, [x0, #0x48]
0x0668EC58: c80000b4  cbz x8, #0x668ec70
0x0668EC5C: e10300aa  mov x1, x0
0x0668EC60: 030d40f9  ldr x3, [x8, #0x18]
0x0668EC64: 002140f9  ldr x0, [x8, #0x40]
0x0668EC68: 021540f9  ldr x2, [x8, #0x28]
0x0668EC6C: 60001fd6  br x3
0x0668EC70: c0035fd6  ret

; RVA 0x668ED80 | public void CancelDrag() { }
; bytes=176 sha256=f6107a0753c26b5bfb43de316dcf7a75b353cd99056503375d0f6c0484129fc4 status=arm64_complete_bound indexed_start=True
0x0668ED80: fe0f1df8  str x30, [sp, #-0x30]!
0x0668ED84: f65701a9  stp x22, x21, [sp, #0x10]
0x0668ED88: f44f02a9  stp x20, x19, [sp, #0x20]
0x0668ED8C: d6b400d0  adrp x22, #0x7d28000
0x0668ED90: d58300f0  adrp x21, #0x7709000
0x0668ED94: d48300f0  adrp x20, #0x7709000
0x0668ED98: c81a4a39  ldrb w8, [x22, #0x286]
0x0668ED9C: b5a240f9  ldr x21, [x21, #0x140]
0x0668EDA0: 949e40f9  ldr x20, [x20, #0x138]
0x0668EDA4: f30300aa  mov x19, x0
0x0668EDA8: 28010037  tbnz w8, #0, #0x668edcc
0x0668EDAC: c08300f0  adrp x0, #0x7709000
0x0668EDB0: 009c40f9  ldr x0, [x0, #0x138]
0x0668EDB4: 19c72b97  bl #0x3180a18
0x0668EDB8: c08300f0  adrp x0, #0x7709000
0x0668EDBC: 00a040f9  ldr x0, [x0, #0x140]
0x0668EDC0: 16c72b97  bl #0x3180a18
0x0668EDC4: 28008052  movz w8, #0x1
0x0668EDC8: c81a0a39  strb w8, [x22, #0x286]
0x0668EDCC: e00313aa  mov x0, x19
0x0668EDD0: e1031faa  mov x1, xzr
0x0668EDD4: 7fc20139  strb wzr, [x19, #0x70]
0x0668EDD8: 3e342194  bl #0x6edbed0
0x0668EDDC: a10240f9  ldr x1, [x21]
0x0668EDE0: ca045c97  bl #0x3d90108
0x0668EDE4: e00313aa  mov x0, x19
0x0668EDE8: e1031faa  mov x1, xzr
0x0668EDEC: 39342194  bl #0x6edbed0
0x0668EDF0: 810240f9  ldr x1, [x20]
0x0668EDF4: c5045c97  bl #0x3d90108
0x0668EDF8: 682e40f9  ldr x8, [x19, #0x58]
0x0668EDFC: 280100b4  cbz x8, #0x668ee20
0x0668EE00: 030d40f9  ldr x3, [x8, #0x18]
0x0668EE04: 002140f9  ldr x0, [x8, #0x40]
0x0668EE08: 021540f9  ldr x2, [x8, #0x28]
0x0668EE0C: e10313aa  mov x1, x19
0x0668EE10: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0668EE14: f65741a9  ldp x22, x21, [sp, #0x10]
0x0668EE18: fe0743f8  ldr x30, [sp], #0x30
0x0668EE1C: 60001fd6  br x3
0x0668EE20: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0668EE24: f65741a9  ldp x22, x21, [sp, #0x10]
0x0668EE28: fe0743f8  ldr x30, [sp], #0x30
0x0668EE2C: c0035fd6  ret

; RVA 0x668EE30 | protected void .ctor() { }
; bytes=8 sha256=404d9fc0561cb50d34d82df3af6931fb91ad8778ba10626ca49ed81b884c1026 status=arm64_complete_bound indexed_start=True
0x0668EE30: e1031faa  mov x1, xzr
0x0668EE34: 634f0814  b #0x68a2bc0

; RVA 0x668EE38 | private GameObject Merger.Game.Views.IBoardItemView.get_gameObject() { }
; bytes=8 sha256=cdcd868c9f7c5c314d0bde50d7362a865547ec8052343a07d0bd0eb0dc06459d status=arm64_complete_bound indexed_start=True
0x0668EE38: e1031faa  mov x1, xzr
0x0668EE3C: 25342114  b #0x6edbed0

