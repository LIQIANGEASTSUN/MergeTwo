; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 26009 Merger.MergeBoard.Components.LockAdapter
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9C084 | public bool get_AnyLock() { }
; bytes=8 sha256=8d8aa00324b8cb8219ad680ec8e81b0c0b20c0ef290ee8922bbbb90fd68cd14a status=arm64_complete_bound indexed_start=True
0x06A9C084: 000840f9  ldr x0, [x0, #0x10]
0x06A9C088: 17aaff17  b #0x6a868e4

; RVA 0x6A9C08C | public bool get_OnlyLock() { }
; bytes=8 sha256=3fb674b388646aadea8829e3f4dff5f2b7b2ceb39089a1554921fd2539eca4a7 status=arm64_complete_bound indexed_start=True
0x06A9C08C: 000840f9  ldr x0, [x0, #0x10]
0x06A9C090: dbefff17  b #0x6a97ffc

; RVA 0x6A9C094 | public bool get_DragLocked() { }
; bytes=8 sha256=85b061927ecd540991df26d9b5ed814ab8ab9eb05e0ebccc1fe62451f7184c84 status=arm64_complete_bound indexed_start=True
0x06A9C094: 000840f9  ldr x0, [x0, #0x10]
0x06A9C098: 07f0ff17  b #0x6a980b4

; RVA 0x6A9C09C | public bool get_Locked() { }
; bytes=24 sha256=aac96223a2bc607e6b93eca16395b204c73e323b7107013203a6a93a4a930799 status=arm64_complete_bound indexed_start=True
0x06A9C09C: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A9C0A0: 05000094  bl #0x6a9c0b4
0x06A9C0A4: 1f1c0072  tst w0, #0xff
0x06A9C0A8: e0079f1a  cset w0, ne
0x06A9C0AC: fe0741f8  ldr x30, [sp], #0x10
0x06A9C0B0: c0035fd6  ret

; RVA 0x6A9C10C | public bool get_Boxed() { }
; bytes=40 sha256=5d3d61b51f9f8054835b9b9826bb46171bf2bdbeb2a59a02177c4b944779389d status=arm64_complete_bound indexed_start=True
0x06A9C10C: ffc300d1  sub sp, sp, #0x30
0x06A9C110: fe1300f9  str x30, [sp, #0x20]
0x06A9C114: e8230091  add x8, sp, #8
0x06A9C118: 07000094  bl #0x6a9c134
0x06A9C11C: e8234039  ldrb w8, [sp, #8]
0x06A9C120: fe1340f9  ldr x30, [sp, #0x20]
0x06A9C124: 1f010071  cmp w8, #0
0x06A9C128: e0079f1a  cset w0, ne
0x06A9C12C: ffc30091  add sp, sp, #0x30
0x06A9C130: c0035fd6  ret

; RVA 0x6A9C0B4 | private LockComponent get_LockComponent() { }
; bytes=88 sha256=2c062c52bf7426e4dd4591456dbfedf8e4ea19475c475a8e03a0e0c897e82d2f status=arm64_complete_bound indexed_start=True
0x06A9C0B4: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A9C0B8: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A9C0BC: 749400d0  adrp x20, #0x7d2a000
0x06A9C0C0: 88566139  ldrb w8, [x20, #0x855]
0x06A9C0C4: f30300aa  mov x19, x0
0x06A9C0C8: c8000037  tbnz w8, #0, #0x6a9c0e0
0x06A9C0CC: a06400d0  adrp x0, #0x7732000
0x06A9C0D0: 00d443f9  ldr x0, [x0, #0x7a8]
0x06A9C0D4: 51921b97  bl #0x3180a18
0x06A9C0D8: 28008052  movz w8, #0x1
0x06A9C0DC: 88562139  strb w8, [x20, #0x855]
0x06A9C0E0: 600a40f9  ldr x0, [x19, #0x10]
0x06A9C0E4: 200100b4  cbz x0, #0x6a9c108
0x06A9C0E8: a86400d0  adrp x8, #0x7732000
0x06A9C0EC: 08d543f9  ldr x8, [x8, #0x7a8]
0x06A9C0F0: 010140f9  ldr x1, [x8]
0x06A9C0F4: d5fc4597  bl #0x3c1b448
0x06A9C0F8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A9C0FC: 001c4092  and x0, x0, #0xff
0x06A9C100: fe0742f8  ldr x30, [sp], #0x20
0x06A9C104: c0035fd6  ret
0x06A9C108: e9921b97  bl #0x3180cac

; RVA 0x6A9C134 | private BoxComponent get_BoxComponent() { }
; bytes=116 sha256=ac01cb7a3414f6eb596af9dcb81f4efe50c6eb203013ea5a37cc853df1fd4fe8 status=arm64_complete_bound indexed_start=True
0x06A9C134: ff0301d1  sub sp, sp, #0x40
0x06A9C138: fe5702a9  stp x30, x21, [sp, #0x20]
0x06A9C13C: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A9C140: 759400d0  adrp x21, #0x7d2a000
0x06A9C144: a95a6139  ldrb w9, [x21, #0x856]
0x06A9C148: f40300aa  mov x20, x0
0x06A9C14C: f30308aa  mov x19, x8
0x06A9C150: c9000037  tbnz w9, #0, #0x6a9c168
0x06A9C154: a06400b0  adrp x0, #0x7731000
0x06A9C158: 009c40f9  ldr x0, [x0, #0x138]
0x06A9C15C: 2f921b97  bl #0x3180a18
0x06A9C160: 28008052  movz w8, #0x1
0x06A9C164: a85a2139  strb w8, [x21, #0x856]
0x06A9C168: 800a40f9  ldr x0, [x20, #0x10]
0x06A9C16C: c00100b4  cbz x0, #0x6a9c1a4
0x06A9C170: a86400b0  adrp x8, #0x7731000
0x06A9C174: 089d40f9  ldr x8, [x8, #0x138]
0x06A9C178: 010140f9  ldr x1, [x8]
0x06A9C17C: e8230091  add x8, sp, #8
0x06A9C180: 7dfb4597  bl #0x3c1af74
0x06A9C184: e81b40b9  ldr w8, [sp, #0x18]
0x06A9C188: e083c03c  ldur q0, [sp, #8]
0x06A9C18C: fe5742a9  ldp x30, x21, [sp, #0x20]
0x06A9C190: 681200b9  str w8, [x19, #0x10]
0x06A9C194: 6002803d  str q0, [x19]
0x06A9C198: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A9C19C: ff030191  add sp, sp, #0x40
0x06A9C1A0: c0035fd6  ret
0x06A9C1A4: c2921b97  bl #0x3180cac

; RVA 0x6A9C1A8 | public void .ctor(Entity entity) { }
; bytes=48 sha256=512e5de9a3f032471298e3136c85cac403e839854cc7082012ea9f1c689d7ac5 status=arm64_complete_bound indexed_start=True
0x06A9C1A8: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A9C1AC: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A9C1B0: f30301aa  mov x19, x1
0x06A9C1B4: e1031faa  mov x1, xzr
0x06A9C1B8: f40300aa  mov x20, x0
0x06A9C1BC: 10f9b097  bl #0x56da5fc
0x06A9C1C0: 930e01f8  str x19, [x20, #0x10]!
0x06A9C1C4: e00314aa  mov x0, x20
0x06A9C1C8: e10313aa  mov x1, x19
0x06A9C1CC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A9C1D0: fe0742f8  ldr x30, [sp], #0x20
0x06A9C1D4: fc911b17  b #0x31809c4

; RVA 0x6A9C1D8 | public bool get_Bubbled() { }
; bytes=8 sha256=e4c1a301829bf7e242097004cb25fc213af6f8bee45f49527b010f07bce68f54 status=arm64_complete_bound indexed_start=True
0x06A9C1D8: 00604039  ldrb w0, [x0, #0x18]
0x06A9C1DC: c0035fd6  ret

; RVA 0x6A9C1E0 | public void set_Bubbled(bool value) { }
; bytes=12 sha256=44e17fb1eb8f8ff9cdde629de5faf61cf17316e0f5f154eccbf27e368f8511ec status=arm64_complete_bound indexed_start=True
0x06A9C1E0: 28000012  and w8, w1, #1
0x06A9C1E4: 08600039  strb w8, [x0, #0x18]
0x06A9C1E8: c0035fd6  ret

; RVA 0x6A9C1EC | public bool get_Meteor() { }
; bytes=8 sha256=2b59db05426e0f313d72b30f3398c65721de2562a59dc46ceeba224f98d0b876 status=arm64_complete_bound indexed_start=True
0x06A9C1EC: e0031f2a  mov w0, wzr
0x06A9C1F0: c0035fd6  ret

; RVA 0x6A9C1F4 | public long get_MeteorEndTime() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x06A9C1F4: 001040f9  ldr x0, [x0, #0x20]
0x06A9C1F8: c0035fd6  ret

; RVA 0x6A9C1FC | public void set_MeteorEndTime(long value) { }
; bytes=8 sha256=e2049e634203975b3ab577fcedd5fcebf7eb16547f254b69f38a7efd4d28f8c7 status=arm64_complete_bound indexed_start=True
0x06A9C1FC: 011000f9  str x1, [x0, #0x20]
0x06A9C200: c0035fd6  ret

; RVA 0x6A9C204 | public long get_MeteorDuration() { }
; bytes=8 sha256=c0b9896d6c3d8aacf384c0d0cf5d897e84f621efe31cc89c980be348eb9c6614 status=arm64_complete_bound indexed_start=True
0x06A9C204: 001440f9  ldr x0, [x0, #0x28]
0x06A9C208: c0035fd6  ret

; RVA 0x6A9C20C | public void set_MeteorDuration(long value) { }
; bytes=8 sha256=fb47a7abf4cba0cd5311b8b425d77a409859dd7b4fd92dbf5d99d451f425b80c status=arm64_complete_bound indexed_start=True
0x06A9C20C: 011400f9  str x1, [x0, #0x28]
0x06A9C210: c0035fd6  ret

; RVA 0x6A9C214 | public string get_MeteorCycleId() { }
; bytes=8 sha256=6b819324b4a3bc2d390c83c7fe02ea41a1f57ae5d4f2a9b0c9256341a5b8d37f status=arm64_complete_bound indexed_start=True
0x06A9C214: 001840f9  ldr x0, [x0, #0x30]
0x06A9C218: c0035fd6  ret

; RVA 0x6A9C21C | public void set_MeteorCycleId(string value) { }
; bytes=8 sha256=9b8892f8accf23d66e412127cd0bc08047a5c778d79e08f79687ab722aab4c07 status=arm64_complete_bound indexed_start=True
0x06A9C21C: 010c03f8  str x1, [x0, #0x30]!
0x06A9C220: e9911b17  b #0x31809c4

; RVA 0x6A9C224 | public int get_MeteorLocationItemIndex() { }
; bytes=8 sha256=70b6226cdde2aa2e19c7cef1812dc4f3cd14b63d0b93bca2e70ec7210fcf097f status=arm64_complete_bound indexed_start=True
0x06A9C224: 003840b9  ldr w0, [x0, #0x38]
0x06A9C228: c0035fd6  ret

; RVA 0x6A9C22C | public void set_MeteorLocationItemIndex(int value) { }
; bytes=8 sha256=23e2a2078bd41e84b46906ac0e13db3743cb4f934a32dac307e79ba21bc620b5 status=arm64_complete_bound indexed_start=True
0x06A9C22C: 013800b9  str w1, [x0, #0x38]
0x06A9C230: c0035fd6  ret

; RVA 0x6A9C234 | public bool get_LockedByLevel() { }
; bytes=8 sha256=34022679393051aa5f37ac6aa6d2c8fd0d27144e12264aa2081080691ae62a6e status=arm64_complete_bound indexed_start=True
0x06A9C234: 00f04039  ldrb w0, [x0, #0x3c]
0x06A9C238: c0035fd6  ret

; RVA 0x6A9C23C | public void set_LockedByLevel(bool value) { }
; bytes=12 sha256=57f536e6d1ad43ebcd1a12b09995966627e376e08af167013fca2b63412b2454 status=arm64_complete_bound indexed_start=True
0x06A9C23C: 28000012  and w8, w1, #1
0x06A9C240: 08f00039  strb w8, [x0, #0x3c]
0x06A9C244: c0035fd6  ret

; RVA 0x6A9C248 | public int get_LevelLock() { }
; bytes=8 sha256=2794764ead4f4e46816d67d9f7faad262cb54d7a0b7a39d555c30024db08d1e8 status=arm64_complete_bound indexed_start=True
0x06A9C248: 004040b9  ldr w0, [x0, #0x40]
0x06A9C24C: c0035fd6  ret

; RVA 0x6A9C250 | public void set_LevelLock(int value) { }
; bytes=8 sha256=99126ca7b87d662b9b483045ef27bde13b4525b29d199b0dd709fac17bf71da4 status=arm64_complete_bound indexed_start=True
0x06A9C250: 014000b9  str w1, [x0, #0x40]
0x06A9C254: c0035fd6  ret

; RVA 0x6A9C258 | public double get_BubbleTimeLeft() { }
; bytes=8 sha256=bda39139aa78bf4e0c0325de647994bccd7e6a3a7ba5f34c027bfc0f3066e098 status=arm64_complete_bound indexed_start=True
0x06A9C258: 002440fd  ldr d0, [x0, #0x48]
0x06A9C25C: c0035fd6  ret

; RVA 0x6A9C260 | public void set_BubbleTimeLeft(double value) { }
; bytes=8 sha256=b3f53c3b2822a566ec59cfcd23cd6db6600283e9acaad9720b0f28d3c1f4e591 status=arm64_complete_bound indexed_start=True
0x06A9C260: 002400fd  str d0, [x0, #0x48]
0x06A9C264: c0035fd6  ret

; RVA 0x6A9C268 | public bool get_LockedByInteraction() { }
; bytes=8 sha256=eaa8f5bab95d1713110a3774aeaebf65c0af3605085769e01b2fdfa404ba8cfd status=arm64_complete_bound indexed_start=True
0x06A9C268: 00404139  ldrb w0, [x0, #0x50]
0x06A9C26C: c0035fd6  ret

; RVA 0x6A9C270 | public void set_LockedByInteraction(bool value) { }
; bytes=12 sha256=c5177acf6df3d1e45a8c58677795df0e04c5bd5fa7037d9fc82cedc5cbbeccdc status=arm64_complete_bound indexed_start=True
0x06A9C270: 28000012  and w8, w1, #1
0x06A9C274: 08400139  strb w8, [x0, #0x50]
0x06A9C278: c0035fd6  ret

; RVA 0x6A9C27C | public bool get_LockedByFlyingAnimation() { }
; bytes=8 sha256=ba8e74d89bf338ce7f44cd67c102589f5b60c0c01750e8f2f91877dbb0c0d801 status=arm64_complete_bound indexed_start=True
0x06A9C27C: 00444139  ldrb w0, [x0, #0x51]
0x06A9C280: c0035fd6  ret

; RVA 0x6A9C284 | public void set_LockedByFlyingAnimation(bool value) { }
; bytes=12 sha256=0f9bd1e0d68ffcdcf8c8614840f1067021e384bbd03a57f76a867252f5c62992 status=arm64_complete_bound indexed_start=True
0x06A9C284: 28000012  and w8, w1, #1
0x06A9C288: 08440139  strb w8, [x0, #0x51]
0x06A9C28C: c0035fd6  ret

