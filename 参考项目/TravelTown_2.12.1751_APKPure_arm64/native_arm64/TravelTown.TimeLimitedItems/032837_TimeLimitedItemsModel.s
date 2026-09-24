; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 32837 Merger.TimeLimitedItems.Models.TimeLimitedItemsModel
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6B4A240 | public string get_EventId() { }
; bytes=8 sha256=c0b9896d6c3d8aacf384c0d0cf5d897e84f621efe31cc89c980be348eb9c6614 status=arm64_complete_bound indexed_start=True
0x06B4A240: 001440f9  ldr x0, [x0, #0x28]
0x06B4A244: c0035fd6  ret

; RVA 0x6B4A248 | private void set_EventId(string value) { }
; bytes=8 sha256=f698ad05caf6223f0c49448d0699c669fe1c4c7305202789e55f5eaa7a867226 status=arm64_complete_bound indexed_start=True
0x06B4A248: 018c02f8  str x1, [x0, #0x28]!
0x06B4A24C: ded91817  b #0x31809c4

; RVA 0x6B4A250 | public string get_EventName() { }
; bytes=8 sha256=6b819324b4a3bc2d390c83c7fe02ea41a1f57ae5d4f2a9b0c9256341a5b8d37f status=arm64_complete_bound indexed_start=True
0x06B4A250: 001840f9  ldr x0, [x0, #0x30]
0x06B4A254: c0035fd6  ret

; RVA 0x6B4A258 | private void set_EventName(string value) { }
; bytes=8 sha256=a08522a513c0fbf42469567d4b69b60c91ced34e2a5f5e2a4293085aab0818b3 status=arm64_complete_bound indexed_start=True
0x06B4A258: 010c03f8  str x1, [x0, #0x30]!
0x06B4A25C: dad91817  b #0x31809c4

; RVA 0x6B4A260 | public string get_ThemeId() { }
; bytes=8 sha256=095bb56e13b6dfde16ade0b592279392884c282a7c7810cb58472b839de552de status=arm64_complete_bound indexed_start=True
0x06B4A260: 001c40f9  ldr x0, [x0, #0x38]
0x06B4A264: c0035fd6  ret

; RVA 0x6B4A268 | private void set_ThemeId(string value) { }
; bytes=8 sha256=6077903f9a4b37d4f760028bb37bd19e2b72e45c437a79e427c34481ec593097 status=arm64_complete_bound indexed_start=True
0x06B4A268: 018c03f8  str x1, [x0, #0x38]!
0x06B4A26C: d6d91817  b #0x31809c4

; RVA 0x6B4A270 | public BindableProperty<bool> get_EventIsActive() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x06B4A270: 001040f9  ldr x0, [x0, #0x20]
0x06B4A274: c0035fd6  ret

; RVA 0x6B4A278 | public BindableProperty<double> get_EventTimeLeft() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x06B4A278: 000c40f9  ldr x0, [x0, #0x18]
0x06B4A27C: c0035fd6  ret

; RVA 0x6B4A280 | public HashSet<string> get_GraphIds() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06B4A280: 000840f9  ldr x0, [x0, #0x10]
0x06B4A284: c0035fd6  ret

; RVA 0x6B4A288 | public void SetStartEventData(string eventId, TimeLimitedItemsEventData eventData, MutableBindableProperty<double> timeLeft) { }
; bytes=204 sha256=9234a353e6559842158e1a7904dafbe09678be3ba7605aeb03d3eb80d9d5bf3d status=arm64_complete_bound indexed_start=True
0x06B4A288: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x06B4A28C: f65701a9  stp x22, x21, [sp, #0x10]
0x06B4A290: f44f02a9  stp x20, x19, [sp, #0x20]
0x06B4A294: 178f00b0  adrp x23, #0x7d2b000
0x06B4A298: e82e4039  ldrb w8, [x23, #0xb]
0x06B4A29C: f30303aa  mov x19, x3
0x06B4A2A0: f50302aa  mov x21, x2
0x06B4A2A4: f60301aa  mov x22, x1
0x06B4A2A8: f40300aa  mov x20, x0
0x06B4A2AC: c8000037  tbnz w8, #0, #0x6b4a2c4
0x06B4A2B0: 40590090  adrp x0, #0x7672000
0x06B4A2B4: 007c44f9  ldr x0, [x0, #0x8f8]
0x06B4A2B8: d8d91897  bl #0x3180a18
0x06B4A2BC: 28008052  movz w8, #0x1
0x06B4A2C0: e82e0039  strb w8, [x23, #0xb]
0x06B4A2C4: e00314aa  mov x0, x20
0x06B4A2C8: 168c02f8  str x22, [x0, #0x28]!
0x06B4A2CC: e10316aa  mov x1, x22
0x06B4A2D0: bdd91897  bl #0x31809c4
0x06B4A2D4: f50300b4  cbz x21, #0x6b4a350
0x06B4A2D8: a12240f9  ldr x1, [x21, #0x40]
0x06B4A2DC: e00314aa  mov x0, x20
0x06B4A2E0: 010c03f8  str x1, [x0, #0x30]!
0x06B4A2E4: b8d91897  bl #0x31809c4
0x06B4A2E8: a82640f9  ldr x8, [x21, #0x48]
0x06B4A2EC: 680000b4  cbz x8, #0x6b4a2f8
0x06B4A2F0: 010940f9  ldr x1, [x8, #0x10]
0x06B4A2F4: 02000014  b #0x6b4a2fc
0x06B4A2F8: e1031faa  mov x1, xzr
0x06B4A2FC: e00314aa  mov x0, x20
0x06B4A300: 018c03f8  str x1, [x0, #0x38]!
0x06B4A304: b0d91897  bl #0x31809c4
0x06B4A308: a13a40f9  ldr x1, [x21, #0x70]
0x06B4A30C: e00314aa  mov x0, x20
0x06B4A310: 010c01f8  str x1, [x0, #0x10]!
0x06B4A314: acd91897  bl #0x31809c4
0x06B4A318: 938e01f8  str x19, [x20, #0x18]!
0x06B4A31C: e00314aa  mov x0, x20
0x06B4A320: e10313aa  mov x1, x19
0x06B4A324: a8d91897  bl #0x31809c4
0x06B4A328: 800640f9  ldr x0, [x20, #8]
0x06B4A32C: 200100b4  cbz x0, #0x6b4a350
0x06B4A330: 48590090  adrp x8, #0x7672000
0x06B4A334: 087d44f9  ldr x8, [x8, #0x8f8]
0x06B4A338: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06B4A33C: f65741a9  ldp x22, x21, [sp, #0x10]
0x06B4A340: 21008052  movz w1, #0x1
0x06B4A344: 020140f9  ldr x2, [x8]
0x06B4A348: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x06B4A34C: c05c5b17  b #0x422164c
0x06B4A350: 57da1897  bl #0x3180cac

; RVA 0x6B4A354 | public void UpdateEventData(TimeLimitedItemsEventData eventData) { }
; bytes=28 sha256=bc2dfef821ee76bf179dc4505ef4a590d412e88554c51c89c59ff526f9912491 status=arm64_complete_bound indexed_start=True
0x06B4A354: fe0f1ff8  str x30, [sp, #-0x10]!
0x06B4A358: a10000b4  cbz x1, #0x6b4a36c
0x06B4A35C: 213840f9  ldr x1, [x1, #0x70]
0x06B4A360: 010c01f8  str x1, [x0, #0x10]!
0x06B4A364: fe0741f8  ldr x30, [sp], #0x10
0x06B4A368: 97d91817  b #0x31809c4
0x06B4A36C: 50da1897  bl #0x3180cac

; RVA 0x6B4A370 | public void EndEvent() { }
; bytes=100 sha256=b4c4ad47880a17221860cc30ab7d391ef61490af277a7117609d5c83997ca082 status=arm64_complete_bound indexed_start=True
0x06B4A370: fe0f1ef8  str x30, [sp, #-0x20]!
0x06B4A374: f44f01a9  stp x20, x19, [sp, #0x10]
0x06B4A378: 148f00b0  adrp x20, #0x7d2b000
0x06B4A37C: 88324039  ldrb w8, [x20, #0xc]
0x06B4A380: f30300aa  mov x19, x0
0x06B4A384: c8000037  tbnz w8, #0, #0x6b4a39c
0x06B4A388: 40590090  adrp x0, #0x7672000
0x06B4A38C: 007c44f9  ldr x0, [x0, #0x8f8]
0x06B4A390: a2d91897  bl #0x3180a18
0x06B4A394: 28008052  movz w8, #0x1
0x06B4A398: 88320039  strb w8, [x20, #0xc]
0x06B4A39C: 601240f9  ldr x0, [x19, #0x20]
0x06B4A3A0: 800100b4  cbz x0, #0x6b4a3d0
0x06B4A3A4: 48590090  adrp x8, #0x7672000
0x06B4A3A8: 087d44f9  ldr x8, [x8, #0x8f8]
0x06B4A3AC: e1031f2a  mov w1, wzr
0x06B4A3B0: 020140f9  ldr x2, [x8]
0x06B4A3B4: a65c5b97  bl #0x422164c
0x06B4A3B8: 7f8e01f8  str xzr, [x19, #0x18]!
0x06B4A3BC: e00313aa  mov x0, x19
0x06B4A3C0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06B4A3C4: e1031faa  mov x1, xzr
0x06B4A3C8: fe0742f8  ldr x30, [sp], #0x20
0x06B4A3CC: 7ed91817  b #0x31809c4
0x06B4A3D0: 37da1897  bl #0x3180cac

; RVA 0x6B4A3D4 | public void .ctor() { }
; bytes=224 sha256=60bc02187e0bc8fa32e87d691f04512bb8d659089adb5296ae085df3836205f8 status=arm64_complete_bound indexed_start=True
0x06B4A3D4: fe0f1cf8  str x30, [sp, #-0x40]!
0x06B4A3D8: f85f01a9  stp x24, x23, [sp, #0x10]
0x06B4A3DC: f65702a9  stp x22, x21, [sp, #0x20]
0x06B4A3E0: f44f03a9  stp x20, x19, [sp, #0x30]
0x06B4A3E4: 178f00b0  adrp x23, #0x7d2b000
0x06B4A3E8: 58580090  adrp x24, #0x7652000
0x06B4A3EC: 54580090  adrp x20, #0x7652000
0x06B4A3F0: 565900b0  adrp x22, #0x7673000
0x06B4A3F4: 555900b0  adrp x21, #0x7673000
0x06B4A3F8: e8364039  ldrb w8, [x23, #0xd]
0x06B4A3FC: 184b46f9  ldr x24, [x24, #0xc90]
0x06B4A400: 944646f9  ldr x20, [x20, #0xc88]
0x06B4A404: d64e40f9  ldr x22, [x22, #0x98]
0x06B4A408: b55240f9  ldr x21, [x21, #0xa0]
0x06B4A40C: f30300aa  mov x19, x0
0x06B4A410: e8010037  tbnz w8, #0, #0x6b4a44c
0x06B4A414: 40580090  adrp x0, #0x7652000
0x06B4A418: 004446f9  ldr x0, [x0, #0xc88]
0x06B4A41C: 7fd91897  bl #0x3180a18
0x06B4A420: 40580090  adrp x0, #0x7652000
0x06B4A424: 004846f9  ldr x0, [x0, #0xc90]
0x06B4A428: 7cd91897  bl #0x3180a18
0x06B4A42C: 405900b0  adrp x0, #0x7673000
0x06B4A430: 005040f9  ldr x0, [x0, #0xa0]
0x06B4A434: 79d91897  bl #0x3180a18
0x06B4A438: 405900b0  adrp x0, #0x7673000
0x06B4A43C: 004c40f9  ldr x0, [x0, #0x98]
0x06B4A440: 76d91897  bl #0x3180a18
0x06B4A444: 28008052  movz w8, #0x1
0x06B4A448: e8360039  strb w8, [x23, #0xd]
0x06B4A44C: 000340f9  ldr x0, [x24]
0x06B4A450: 14da1897  bl #0x3180ca0
0x06B4A454: 810240f9  ldr x1, [x20]
0x06B4A458: f40300aa  mov x20, x0
0x06B4A45C: 79d69d97  bl #0x52bfe40
0x06B4A460: e00313aa  mov x0, x19
0x06B4A464: 140c01f8  str x20, [x0, #0x10]!
0x06B4A468: e10314aa  mov x1, x20
0x06B4A46C: 56d91897  bl #0x31809c4
0x06B4A470: c00240f9  ldr x0, [x22]
0x06B4A474: 0bda1897  bl #0x3180ca0
0x06B4A478: a20240f9  ldr x2, [x21]
0x06B4A47C: e1031f2a  mov w1, wzr
0x06B4A480: f40300aa  mov x20, x0
0x06B4A484: 6b5c5b97  bl #0x4221630
0x06B4A488: e00313aa  mov x0, x19
0x06B4A48C: 140c02f8  str x20, [x0, #0x20]!
0x06B4A490: e10314aa  mov x1, x20
0x06B4A494: 4cd91897  bl #0x31809c4
0x06B4A498: e00313aa  mov x0, x19
0x06B4A49C: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06B4A4A0: f65742a9  ldp x22, x21, [sp, #0x20]
0x06B4A4A4: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06B4A4A8: e1031faa  mov x1, xzr
0x06B4A4AC: fe0744f8  ldr x30, [sp], #0x40
0x06B4A4B0: 5340ae17  b #0x56da5fc

