; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 530 MergeEngine.Model.Configuration.GameConfigurationModel
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x613B9F0 | public InventoryCapability get_InventoryCapability() { }
; bytes=28 sha256=95a958a322c8c1c48c6fd14569b449cec4d7c3ac69cf79927bb45f5893a4cf60 status=arm64_complete_bound indexed_start=True
0x0613B9F0: fe0f1ff8  str x30, [sp, #-0x10]!
0x0613B9F4: 081840f9  ldr x8, [x0, #0x30]
0x0613B9F8: 880000b4  cbz x8, #0x613ba08
0x0613B9FC: 002d40f9  ldr x0, [x8, #0x58]
0x0613BA00: fe0741f8  ldr x30, [sp], #0x10
0x0613BA04: c0035fd6  ret
0x0613BA08: a9144197  bl #0x3180cac

; RVA 0x613BA0C | public ProducerInventoryCapability get_ProducerInventoryCapability() { }
; bytes=8 sha256=989bb1a041c93e09fa2954014eaba1a46b19128664c6bbb210694e0989f09532 status=arm64_complete_bound indexed_start=True
0x0613BA0C: 002840f9  ldr x0, [x0, #0x50]
0x0613BA10: c0035fd6  ret

; RVA 0x613BA14 | public ReadOnlyCollection<IMergeItem> get_RatePopupTriggerItems() { }
; bytes=28 sha256=1fed2d7b7f4cab618aa69acf2b80adee5ec6ab61c099803ba1e67a036bed33e5 status=arm64_complete_bound indexed_start=True
0x0613BA14: fe0f1ff8  str x30, [sp, #-0x10]!
0x0613BA18: 001840f9  ldr x0, [x0, #0x30]
0x0613BA1C: 800000b4  cbz x0, #0x613ba2c
0x0613BA20: e1031faa  mov x1, xzr
0x0613BA24: fe0741f8  ldr x30, [sp], #0x10
0x0613BA28: f9391f14  b #0x690a20c
0x0613BA2C: a0144197  bl #0x3180cac

; RVA 0x613BA30 | public BubbledItemsConfig get_BubbledItemsConfig() { }
; bytes=28 sha256=715e947537b29da3cf5b282cd2dd149ce0c0b5c9fa15d6754e34548265b0eb59 status=arm64_complete_bound indexed_start=True
0x0613BA30: fe0f1ff8  str x30, [sp, #-0x10]!
0x0613BA34: 081840f9  ldr x8, [x0, #0x30]
0x0613BA38: 880000b4  cbz x8, #0x613ba48
0x0613BA3C: 003940f9  ldr x0, [x8, #0x70]
0x0613BA40: fe0741f8  ldr x30, [sp], #0x10
0x0613BA44: c0035fd6  ret
0x0613BA48: 99144197  bl #0x3180cac

; RVA 0x613BA4C | public SkipCooldownConfig get_SkipCooldownConfigMainBoard() { }
; bytes=8 sha256=ac1915dbf8ae56825a9e0c79c21190a655d4b32b9c10f299546aad7c9ecadc66 status=arm64_complete_bound indexed_start=True
0x0613BA4C: 002040f9  ldr x0, [x0, #0x40]
0x0613BA50: c0035fd6  ret

; RVA 0x613BA54 | public SkipCooldownConfig get_SkipCooldownConfigLiveOpsBoard() { }
; bytes=8 sha256=62c64bd585db7a91917843362bb75aa8dd20b002bce4874891b0b3ec8fd242b9 status=arm64_complete_bound indexed_start=True
0x0613BA54: 002440f9  ldr x0, [x0, #0x48]
0x0613BA58: c0035fd6  ret

; RVA 0x613BA5C | public BindableProperty<int> get_BuildNumber() { }
; bytes=8 sha256=095bb56e13b6dfde16ade0b592279392884c282a7c7810cb58472b839de552de status=arm64_complete_bound indexed_start=True
0x0613BA5C: 001c40f9  ldr x0, [x0, #0x38]
0x0613BA60: c0035fd6  ret

; RVA 0x613BA64 | public string get_AppVersion() { }
; bytes=80 sha256=ca95e0b458d79b234f074aa6d9c3b89da510f57c4c7cbf1d451fd1a7f6e10e57 status=arm64_complete_bound indexed_start=True
0x0613BA64: fe0f1ef8  str x30, [sp, #-0x20]!
0x0613BA68: f44f01a9  stp x20, x19, [sp, #0x10]
0x0613BA6C: 53df00b0  adrp x19, #0x7d24000
0x0613BA70: 94a800f0  adrp x20, #0x764e000
0x0613BA74: 684a5639  ldrb w8, [x19, #0x592]
0x0613BA78: 945242f9  ldr x20, [x20, #0x4a0]
0x0613BA7C: c8000037  tbnz w8, #0, #0x613ba94
0x0613BA80: 80a800f0  adrp x0, #0x764e000
0x0613BA84: 005042f9  ldr x0, [x0, #0x4a0]
0x0613BA88: e4134197  bl #0x3180a18
0x0613BA8C: 28008052  movz w8, #0x1
0x0613BA90: 684a1639  strb w8, [x19, #0x592]
0x0613BA94: 800240f9  ldr x0, [x20]
0x0613BA98: 08e040b9  ldr w8, [x0, #0xe0]
0x0613BA9C: 48000035  cbnz w8, #0x613baa4
0x0613BAA0: 3b144197  bl #0x3180b8c
0x0613BAA4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0613BAA8: e0031faa  mov x0, xzr
0x0613BAAC: fe0742f8  ldr x30, [sp], #0x20
0x0613BAB0: a7933514  b #0x6ea094c

; RVA 0x613BAB4 | public int get_MinSupportedBuildNumber() { }
; bytes=28 sha256=fe64bf8d74c5bc8570ffc8f33747e1bf1c6e60a1e9ef2009c2bc2c7697f8d5d4 status=arm64_complete_bound indexed_start=True
0x0613BAB4: fe0f1ff8  str x30, [sp, #-0x10]!
0x0613BAB8: 081840f9  ldr x8, [x0, #0x30]
0x0613BABC: 880000b4  cbz x8, #0x613bacc
0x0613BAC0: 006540b9  ldr w0, [x8, #0x64]
0x0613BAC4: fe0741f8  ldr x30, [sp], #0x10
0x0613BAC8: c0035fd6  ret
0x0613BACC: 78144197  bl #0x3180cac

; RVA 0x613BAD0 | public string get_ChestInfoUrl() { }
; bytes=236 sha256=51c5a204723f04e01c64983b1accee0584b591bb4ca304e584e6d3b10c6d54a7 status=arm64_complete_bound indexed_start=True
0x0613BAD0: fe0f1df8  str x30, [sp, #-0x30]!
0x0613BAD4: f65701a9  stp x22, x21, [sp, #0x10]
0x0613BAD8: f44f02a9  stp x20, x19, [sp, #0x20]
0x0613BADC: 54df00b0  adrp x20, #0x7d24000
0x0613BAE0: 884e5639  ldrb w8, [x20, #0x593]
0x0613BAE4: f30300aa  mov x19, x0
0x0613BAE8: 28010037  tbnz w8, #0, #0x613bb0c
0x0613BAEC: e0ac00b0  adrp x0, #0x76d8000
0x0613BAF0: 007844f9  ldr x0, [x0, #0x8f0]
0x0613BAF4: c9134197  bl #0x3180a18
0x0613BAF8: 00ad0090  adrp x0, #0x76db000
0x0613BAFC: 00c040f9  ldr x0, [x0, #0x180]
0x0613BB00: c6134197  bl #0x3180a18
0x0613BB04: 28008052  movz w8, #0x1
0x0613BB08: 884e1639  strb w8, [x20, #0x593]
0x0613BB0C: 691a40f9  ldr x9, [x19, #0x30]
0x0613BB10: 490500b4  cbz x9, #0x613bbb8
0x0613BB14: 731640f9  ldr x19, [x19, #0x28]
0x0613BB18: 130500b4  cbz x19, #0x613bbb8
0x0613BB1C: eaac00b0  adrp x10, #0x76d8000
0x0613BB20: 4a7944f9  ldr x10, [x10, #0x8f0]
0x0613BB24: 0bad0090  adrp x11, #0x76db000
0x0613BB28: 6bc140f9  ldr x11, [x11, #0x180]
0x0613BB2C: 680240f9  ldr x8, [x19]
0x0613BB30: 560140f9  ldr x22, [x10]
0x0613BB34: 345140f9  ldr x20, [x9, #0xa0]
0x0613BB38: 750140f9  ldr x21, [x11]
0x0613BB3C: 095d4279  ldrh w9, [x8, #0x12e]
0x0613BB40: c11240f9  ldr x1, [x22, #0x20]
0x0613BB44: c2a24079  ldrh w2, [x22, #0x50]
0x0613BB48: 290100b4  cbz x9, #0x613bb6c
0x0613BB4C: 0a5940f9  ldr x10, [x8, #0xb0]
0x0613BB50: 4a210091  add x10, x10, #8
0x0613BB54: 4b815ff8  ldur x11, [x10, #-8]
0x0613BB58: 7f0101eb  cmp x11, x1
0x0613BB5C: e0000054  b.eq #0x613bb78
0x0613BB60: 290500f1  subs x9, x9, #1
0x0613BB64: 4a410091  add x10, x10, #0x10
0x0613BB68: 61ffff54  b.ne #0x613bb54
0x0613BB6C: e00313aa  mov x0, x19
0x0613BB70: e86b4097  bl #0x3156b10
0x0613BB74: 05000014  b #0x613bb88
0x0613BB78: 490140b9  ldr w9, [x10]
0x0613BB7C: 2901020b  add w9, w9, w2
0x0613BB80: 08d1298b  add x8, x8, w9, sxtw #4
0x0613BB84: 00e10491  add x0, x8, #0x138
0x0613BB88: 000440f9  ldr x0, [x0, #8]
0x0613BB8C: e10316aa  mov x1, x22
0x0613BB90: fe134197  bl #0x3180b88
0x0613BB94: e30300aa  mov x3, x0
0x0613BB98: 040440f9  ldr x4, [x0, #8]
0x0613BB9C: e00313aa  mov x0, x19
0x0613BBA0: e10315aa  mov x1, x21
0x0613BBA4: e20314aa  mov x2, x20
0x0613BBA8: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0613BBAC: f65741a9  ldp x22, x21, [sp, #0x10]
0x0613BBB0: fe0743f8  ldr x30, [sp], #0x30
0x0613BBB4: 80001fd6  br x4
0x0613BBB8: 3d144197  bl #0x3180cac

; RVA 0x613BBBC | public string get_PackInfoUrl() { }
; bytes=236 sha256=eacef9917d854386fbe7bfc0851a977ce72d5b01ad5565e505e6d832d3cae809 status=arm64_complete_bound indexed_start=True
0x0613BBBC: fe0f1df8  str x30, [sp, #-0x30]!
0x0613BBC0: f65701a9  stp x22, x21, [sp, #0x10]
0x0613BBC4: f44f02a9  stp x20, x19, [sp, #0x20]
0x0613BBC8: 54df00b0  adrp x20, #0x7d24000
0x0613BBCC: 88525639  ldrb w8, [x20, #0x594]
0x0613BBD0: f30300aa  mov x19, x0
0x0613BBD4: 28010037  tbnz w8, #0, #0x613bbf8
0x0613BBD8: e0ac00b0  adrp x0, #0x76d8000
0x0613BBDC: 007844f9  ldr x0, [x0, #0x8f0]
0x0613BBE0: 8e134197  bl #0x3180a18
0x0613BBE4: 00ad0090  adrp x0, #0x76db000
0x0613BBE8: 00c440f9  ldr x0, [x0, #0x188]
0x0613BBEC: 8b134197  bl #0x3180a18
0x0613BBF0: 28008052  movz w8, #0x1
0x0613BBF4: 88521639  strb w8, [x20, #0x594]
0x0613BBF8: 691a40f9  ldr x9, [x19, #0x30]
0x0613BBFC: 490500b4  cbz x9, #0x613bca4
0x0613BC00: 731640f9  ldr x19, [x19, #0x28]
0x0613BC04: 130500b4  cbz x19, #0x613bca4
0x0613BC08: eaac00b0  adrp x10, #0x76d8000
0x0613BC0C: 4a7944f9  ldr x10, [x10, #0x8f0]
0x0613BC10: 0bad0090  adrp x11, #0x76db000
0x0613BC14: 6bc540f9  ldr x11, [x11, #0x188]
0x0613BC18: 680240f9  ldr x8, [x19]
0x0613BC1C: 560140f9  ldr x22, [x10]
0x0613BC20: 345540f9  ldr x20, [x9, #0xa8]
0x0613BC24: 750140f9  ldr x21, [x11]
0x0613BC28: 095d4279  ldrh w9, [x8, #0x12e]
0x0613BC2C: c11240f9  ldr x1, [x22, #0x20]
0x0613BC30: c2a24079  ldrh w2, [x22, #0x50]
0x0613BC34: 290100b4  cbz x9, #0x613bc58
0x0613BC38: 0a5940f9  ldr x10, [x8, #0xb0]
0x0613BC3C: 4a210091  add x10, x10, #8
0x0613BC40: 4b815ff8  ldur x11, [x10, #-8]
0x0613BC44: 7f0101eb  cmp x11, x1
0x0613BC48: e0000054  b.eq #0x613bc64
0x0613BC4C: 290500f1  subs x9, x9, #1
0x0613BC50: 4a410091  add x10, x10, #0x10
0x0613BC54: 61ffff54  b.ne #0x613bc40
0x0613BC58: e00313aa  mov x0, x19
0x0613BC5C: ad6b4097  bl #0x3156b10
0x0613BC60: 05000014  b #0x613bc74
0x0613BC64: 490140b9  ldr w9, [x10]
0x0613BC68: 2901020b  add w9, w9, w2
0x0613BC6C: 08d1298b  add x8, x8, w9, sxtw #4
0x0613BC70: 00e10491  add x0, x8, #0x138
0x0613BC74: 000440f9  ldr x0, [x0, #8]
0x0613BC78: e10316aa  mov x1, x22
0x0613BC7C: c3134197  bl #0x3180b88
0x0613BC80: e30300aa  mov x3, x0
0x0613BC84: 040440f9  ldr x4, [x0, #8]
0x0613BC88: e00313aa  mov x0, x19
0x0613BC8C: e10315aa  mov x1, x21
0x0613BC90: e20314aa  mov x2, x20
0x0613BC94: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0613BC98: f65741a9  ldp x22, x21, [sp, #0x10]
0x0613BC9C: fe0743f8  ldr x30, [sp], #0x30
0x0613BCA0: 80001fd6  br x4
0x0613BCA4: 02144197  bl #0x3180cac

; RVA 0x613BCA8 | public string get_ItemSelectionBoxInfoUrl() { }
; bytes=236 sha256=3e0b082d99e510548b31c8d94397c30d1daf2b4af789b63aebae7a0925118189 status=arm64_complete_bound indexed_start=True
0x0613BCA8: fe0f1df8  str x30, [sp, #-0x30]!
0x0613BCAC: f65701a9  stp x22, x21, [sp, #0x10]
0x0613BCB0: f44f02a9  stp x20, x19, [sp, #0x20]
0x0613BCB4: 54df00b0  adrp x20, #0x7d24000
0x0613BCB8: 88565639  ldrb w8, [x20, #0x595]
0x0613BCBC: f30300aa  mov x19, x0
0x0613BCC0: 28010037  tbnz w8, #0, #0x613bce4
0x0613BCC4: e0ac00b0  adrp x0, #0x76d8000
0x0613BCC8: 007844f9  ldr x0, [x0, #0x8f0]
0x0613BCCC: 53134197  bl #0x3180a18
0x0613BCD0: 00ad0090  adrp x0, #0x76db000
0x0613BCD4: 00c840f9  ldr x0, [x0, #0x190]
0x0613BCD8: 50134197  bl #0x3180a18
0x0613BCDC: 28008052  movz w8, #0x1
0x0613BCE0: 88561639  strb w8, [x20, #0x595]
0x0613BCE4: 691a40f9  ldr x9, [x19, #0x30]
0x0613BCE8: 490500b4  cbz x9, #0x613bd90
0x0613BCEC: 731640f9  ldr x19, [x19, #0x28]
0x0613BCF0: 130500b4  cbz x19, #0x613bd90
0x0613BCF4: eaac00b0  adrp x10, #0x76d8000
0x0613BCF8: 4a7944f9  ldr x10, [x10, #0x8f0]
0x0613BCFC: 0bad0090  adrp x11, #0x76db000
0x0613BD00: 6bc940f9  ldr x11, [x11, #0x190]
0x0613BD04: 680240f9  ldr x8, [x19]
0x0613BD08: 560140f9  ldr x22, [x10]
0x0613BD0C: 345940f9  ldr x20, [x9, #0xb0]
0x0613BD10: 750140f9  ldr x21, [x11]
0x0613BD14: 095d4279  ldrh w9, [x8, #0x12e]
0x0613BD18: c11240f9  ldr x1, [x22, #0x20]
0x0613BD1C: c2a24079  ldrh w2, [x22, #0x50]
0x0613BD20: 290100b4  cbz x9, #0x613bd44
0x0613BD24: 0a5940f9  ldr x10, [x8, #0xb0]
0x0613BD28: 4a210091  add x10, x10, #8
0x0613BD2C: 4b815ff8  ldur x11, [x10, #-8]
0x0613BD30: 7f0101eb  cmp x11, x1
0x0613BD34: e0000054  b.eq #0x613bd50
0x0613BD38: 290500f1  subs x9, x9, #1
0x0613BD3C: 4a410091  add x10, x10, #0x10
0x0613BD40: 61ffff54  b.ne #0x613bd2c
0x0613BD44: e00313aa  mov x0, x19
0x0613BD48: 726b4097  bl #0x3156b10
0x0613BD4C: 05000014  b #0x613bd60
0x0613BD50: 490140b9  ldr w9, [x10]
0x0613BD54: 2901020b  add w9, w9, w2
0x0613BD58: 08d1298b  add x8, x8, w9, sxtw #4
0x0613BD5C: 00e10491  add x0, x8, #0x138
0x0613BD60: 000440f9  ldr x0, [x0, #8]
0x0613BD64: e10316aa  mov x1, x22
0x0613BD68: 88134197  bl #0x3180b88
0x0613BD6C: e30300aa  mov x3, x0
0x0613BD70: 040440f9  ldr x4, [x0, #8]
0x0613BD74: e00313aa  mov x0, x19
0x0613BD78: e10315aa  mov x1, x21
0x0613BD7C: e20314aa  mov x2, x20
0x0613BD80: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0613BD84: f65741a9  ldp x22, x21, [sp, #0x10]
0x0613BD88: fe0743f8  ldr x30, [sp], #0x30
0x0613BD8C: 80001fd6  br x4
0x0613BD90: c7134197  bl #0x3180cac

; RVA 0x613BD94 | public string get_FacebookMessengerUrl() { }
; bytes=28 sha256=7d9450ea59453829571fcb22168e84d3dc6859aa4c16822353fe582a74bc73f6 status=arm64_complete_bound indexed_start=True
0x0613BD94: fe0f1ff8  str x30, [sp, #-0x10]!
0x0613BD98: 081840f9  ldr x8, [x0, #0x30]
0x0613BD9C: 880000b4  cbz x8, #0x613bdac
0x0613BDA0: 005d40f9  ldr x0, [x8, #0xb8]
0x0613BDA4: fe0741f8  ldr x30, [sp], #0x10
0x0613BDA8: c0035fd6  ret
0x0613BDAC: c0134197  bl #0x3180cac

; RVA 0x613BDB0 | public string get_FacebookPageUrl() { }
; bytes=28 sha256=8613db916ec5fff676ec4d6a21ddf26887501e3020fbbd71a648dace684ab170 status=arm64_complete_bound indexed_start=True
0x0613BDB0: fe0f1ff8  str x30, [sp, #-0x10]!
0x0613BDB4: 081840f9  ldr x8, [x0, #0x30]
0x0613BDB8: 880000b4  cbz x8, #0x613bdc8
0x0613BDBC: 009940f9  ldr x0, [x8, #0x130]
0x0613BDC0: fe0741f8  ldr x30, [sp], #0x10
0x0613BDC4: c0035fd6  ret
0x0613BDC8: b9134197  bl #0x3180cac

; RVA 0x613BDCC | public string get_FacebookGroupUrl() { }
; bytes=28 sha256=e032ae02b783e3558f021c0ec7dedc98c31fc485ced1af72000417b8733609be status=arm64_complete_bound indexed_start=True
0x0613BDCC: fe0f1ff8  str x30, [sp, #-0x10]!
0x0613BDD0: 081840f9  ldr x8, [x0, #0x30]
0x0613BDD4: 880000b4  cbz x8, #0x613bde4
0x0613BDD8: 009d40f9  ldr x0, [x8, #0x138]
0x0613BDDC: fe0741f8  ldr x30, [sp], #0x10
0x0613BDE0: c0035fd6  ret
0x0613BDE4: b2134197  bl #0x3180cac

; RVA 0x613BDE8 | public string get_TwitterPageUrl() { }
; bytes=28 sha256=2917d00fa500db16e1fe82812cc2912777781e3d3815521bed76d31068b294ee status=arm64_complete_bound indexed_start=True
0x0613BDE8: fe0f1ff8  str x30, [sp, #-0x10]!
0x0613BDEC: 081840f9  ldr x8, [x0, #0x30]
0x0613BDF0: 880000b4  cbz x8, #0x613be00
0x0613BDF4: 00a140f9  ldr x0, [x8, #0x140]
0x0613BDF8: fe0741f8  ldr x30, [sp], #0x10
0x0613BDFC: c0035fd6  ret
0x0613BE00: ab134197  bl #0x3180cac

; RVA 0x613BE04 | public string get_InstagramPageUrl() { }
; bytes=28 sha256=2a0bdc3cd6c6f34760e402f234fd360226fbabe5631b9e1910614ff568b566a3 status=arm64_complete_bound indexed_start=True
0x0613BE04: fe0f1ff8  str x30, [sp, #-0x10]!
0x0613BE08: 081840f9  ldr x8, [x0, #0x30]
0x0613BE0C: 880000b4  cbz x8, #0x613be1c
0x0613BE10: 00a540f9  ldr x0, [x8, #0x148]
0x0613BE14: fe0741f8  ldr x30, [sp], #0x10
0x0613BE18: c0035fd6  ret
0x0613BE1C: a4134197  bl #0x3180cac

; RVA 0x613BE20 | public string get_ContactUsUrl() { }
; bytes=28 sha256=ed8b6a04d820ff9862433e3a3c1df77bbd195c61d5db5fe936182a064c0f7018 status=arm64_complete_bound indexed_start=True
0x0613BE20: fe0f1ff8  str x30, [sp, #-0x10]!
0x0613BE24: 081840f9  ldr x8, [x0, #0x30]
0x0613BE28: 880000b4  cbz x8, #0x613be38
0x0613BE2C: 006140f9  ldr x0, [x8, #0xc0]
0x0613BE30: fe0741f8  ldr x30, [sp], #0x10
0x0613BE34: c0035fd6  ret
0x0613BE38: 9d134197  bl #0x3180cac

; RVA 0x613BE3C | public string get_ContactUsUrlPath() { }
; bytes=28 sha256=6b5b4811987648ab90804da2adba36e4f97329785b6838cccf14251c63f38464 status=arm64_complete_bound indexed_start=True
0x0613BE3C: fe0f1ff8  str x30, [sp, #-0x10]!
0x0613BE40: 081840f9  ldr x8, [x0, #0x30]
0x0613BE44: 880000b4  cbz x8, #0x613be54
0x0613BE48: 006540f9  ldr x0, [x8, #0xc8]
0x0613BE4C: fe0741f8  ldr x30, [sp], #0x10
0x0613BE50: c0035fd6  ret
0x0613BE54: 96134197  bl #0x3180cac

; RVA 0x613BE58 | public string get_ContactUsUrlWithFormPath() { }
; bytes=28 sha256=09a50f9c32c8a3697eeaa198784becd73188e049e8633713efee96e3b07b2237 status=arm64_complete_bound indexed_start=True
0x0613BE58: fe0f1ff8  str x30, [sp, #-0x10]!
0x0613BE5C: 081840f9  ldr x8, [x0, #0x30]
0x0613BE60: 880000b4  cbz x8, #0x613be70
0x0613BE64: 006940f9  ldr x0, [x8, #0xd0]
0x0613BE68: fe0741f8  ldr x30, [sp], #0x10
0x0613BE6C: c0035fd6  ret
0x0613BE70: 8f134197  bl #0x3180cac

; RVA 0x613BE74 | public string get_DeleteAccountFormId() { }
; bytes=28 sha256=a691fe784830a8ee9be2f2d89a9bc66413f94a470b348264ab67f396bcd13286 status=arm64_complete_bound indexed_start=True
0x0613BE74: fe0f1ff8  str x30, [sp, #-0x10]!
0x0613BE78: 081840f9  ldr x8, [x0, #0x30]
0x0613BE7C: 880000b4  cbz x8, #0x613be8c
0x0613BE80: 006d40f9  ldr x0, [x8, #0xd8]
0x0613BE84: fe0741f8  ldr x30, [sp], #0x10
0x0613BE88: c0035fd6  ret
0x0613BE8C: 88134197  bl #0x3180cac

; RVA 0x613BE90 | public ZendeskLanguageMapping[] get_ZendeskLanguageMappings() { }
; bytes=28 sha256=c2ee86d58eb52355d3c304f3eb2dbab73ebb301bc99efa558e4d4526545f5ce9 status=arm64_complete_bound indexed_start=True
0x0613BE90: fe0f1ff8  str x30, [sp, #-0x10]!
0x0613BE94: 081840f9  ldr x8, [x0, #0x30]
0x0613BE98: 880000b4  cbz x8, #0x613bea8
0x0613BE9C: 007140f9  ldr x0, [x8, #0xe0]
0x0613BEA0: fe0741f8  ldr x30, [sp], #0x10
0x0613BEA4: c0035fd6  ret
0x0613BEA8: 81134197  bl #0x3180cac

; RVA 0x613BEAC | public float get_ItemShopHCPriceMultiplier() { }
; bytes=28 sha256=590e20a1a7ea2c105ed051870bff04ae1de35a7b129ee8c2fe9dc4e975a265ea status=arm64_complete_bound indexed_start=True
0x0613BEAC: fe0f1ff8  str x30, [sp, #-0x10]!
0x0613BEB0: 081840f9  ldr x8, [x0, #0x30]
0x0613BEB4: 880000b4  cbz x8, #0x613bec4
0x0613BEB8: 000141bd  ldr s0, [x8, #0x100]
0x0613BEBC: fe0741f8  ldr x30, [sp], #0x10
0x0613BEC0: c0035fd6  ret
0x0613BEC4: 7a134197  bl #0x3180cac

; RVA 0x613BEC8 | public int get_PreviousBuildNumber() { }
; bytes=8 sha256=d7f5f3095d77028926f25d8a842a6a2f7dac311346dbbc634a0b8fcc4543239b status=arm64_complete_bound indexed_start=True
0x0613BEC8: 005840b9  ldr w0, [x0, #0x58]
0x0613BECC: c0035fd6  ret

; RVA 0x613BED0 | public void set_PreviousBuildNumber(int value) { }
; bytes=8 sha256=e89331f9cf17ef8ae8c8a629699b6ccaff7d56b71ff1c0399d585974caf93375 status=arm64_complete_bound indexed_start=True
0x0613BED0: 015800b9  str w1, [x0, #0x58]
0x0613BED4: c0035fd6  ret

; RVA 0x613BED8 | public int get_SnapshotUploadLimitPerDay() { }
; bytes=28 sha256=e5c87668879abb4e937ac53700a7e9f617b352d93934b6bb7ddeb7089c18b43b status=arm64_complete_bound indexed_start=True
0x0613BED8: fe0f1ff8  str x30, [sp, #-0x10]!
0x0613BEDC: 081840f9  ldr x8, [x0, #0x30]
0x0613BEE0: 880000b4  cbz x8, #0x613bef0
0x0613BEE4: 000541b9  ldr w0, [x8, #0x104]
0x0613BEE8: fe0741f8  ldr x30, [sp], #0x10
0x0613BEEC: c0035fd6  ret
0x0613BEF0: 6f134197  bl #0x3180cac

; RVA 0x613BEF4 | public string get_StoreUrl() { }
; bytes=120 sha256=5dda3fe3e24697082b17dafa1a19fe69012209d21fb4689d7b81f32d3c4c0aa9 status=arm64_complete_bound indexed_start=True
0x0613BEF4: fe0f1ef8  str x30, [sp, #-0x20]!
0x0613BEF8: f44f01a9  stp x20, x19, [sp, #0x10]
0x0613BEFC: 54df00b0  adrp x20, #0x7d24000
0x0613BF00: 93a800f0  adrp x19, #0x764e000
0x0613BF04: 885a5639  ldrb w8, [x20, #0x596]
0x0613BF08: 735242f9  ldr x19, [x19, #0x4a0]
0x0613BF0C: 28010037  tbnz w8, #0, #0x613bf30
0x0613BF10: 80a800f0  adrp x0, #0x764e000
0x0613BF14: 005042f9  ldr x0, [x0, #0x4a0]
0x0613BF18: c0124197  bl #0x3180a18
0x0613BF1C: 00ad0090  adrp x0, #0x76db000
0x0613BF20: 00cc40f9  ldr x0, [x0, #0x198]
0x0613BF24: bd124197  bl #0x3180a18
0x0613BF28: 28008052  movz w8, #0x1
0x0613BF2C: 885a1639  strb w8, [x20, #0x596]
0x0613BF30: 600240f9  ldr x0, [x19]
0x0613BF34: 13ad0090  adrp x19, #0x76db000
0x0613BF38: 08e040b9  ldr w8, [x0, #0xe0]
0x0613BF3C: 73ce40f9  ldr x19, [x19, #0x198]
0x0613BF40: 48000035  cbnz w8, #0x613bf48
0x0613BF44: 12134197  bl #0x3180b8c
0x0613BF48: e0031faa  mov x0, xzr
0x0613BF4C: 94923594  bl #0x6ea099c
0x0613BF50: 680240f9  ldr x8, [x19]
0x0613BF54: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0613BF58: e10300aa  mov x1, x0
0x0613BF5C: e2031faa  mov x2, xzr
0x0613BF60: e00308aa  mov x0, x8
0x0613BF64: fe0742f8  ldr x30, [sp], #0x20
0x0613BF68: 0ebace17  b #0x54ea7a0

; RVA 0x613BF6C | public GameConfig get_GameConfig() { }
; bytes=8 sha256=6b819324b4a3bc2d390c83c7fe02ea41a1f57ae5d4f2a9b0c9256341a5b8d37f status=arm64_complete_bound indexed_start=True
0x0613BF6C: 001840f9  ldr x0, [x0, #0x30]
0x0613BF70: c0035fd6  ret

; RVA 0x613BF74 | protected override void HandleDataLoaded(GameConfig data) { }
; bytes=288 sha256=6593c770de380d8d5662314f8dabbf489feb07a6757640568eb582b2a0e4aed7 status=arm64_complete_bound indexed_start=True
0x0613BF74: fe0f1df8  str x30, [sp, #-0x30]!
0x0613BF78: f65701a9  stp x22, x21, [sp, #0x10]
0x0613BF7C: f44f02a9  stp x20, x19, [sp, #0x20]
0x0613BF80: 55df00b0  adrp x21, #0x7d24000
0x0613BF84: a85e5639  ldrb w8, [x21, #0x597]
0x0613BF88: f40301aa  mov x20, x1
0x0613BF8C: f30300aa  mov x19, x0
0x0613BF90: 28010037  tbnz w8, #0, #0x613bfb4
0x0613BF94: 00aa00d0  adrp x0, #0x767d000
0x0613BF98: 006442f9  ldr x0, [x0, #0x4c8]
0x0613BF9C: 9f124197  bl #0x3180a18
0x0613BFA0: a0ac0090  adrp x0, #0x76cf000
0x0613BFA4: 00e043f9  ldr x0, [x0, #0x7c0]
0x0613BFA8: 9c124197  bl #0x3180a18
0x0613BFAC: 28008052  movz w8, #0x1
0x0613BFB0: a85e1639  strb w8, [x21, #0x597]
0x0613BFB4: f50313aa  mov x21, x19
0x0613BFB8: b40e03f8  str x20, [x21, #0x30]!
0x0613BFBC: e00315aa  mov x0, x21
0x0613BFC0: e10314aa  mov x1, x20
0x0613BFC4: 80124197  bl #0x31809c4
0x0613BFC8: 540600b4  cbz x20, #0x613c090
0x0613BFCC: a00640f9  ldr x0, [x21, #8]
0x0613BFD0: 000600b4  cbz x0, #0x613c090
0x0613BFD4: 08aa00d0  adrp x8, #0x767d000
0x0613BFD8: 086542f9  ldr x8, [x8, #0x4c8]
0x0613BFDC: 816240b9  ldr w1, [x20, #0x60]
0x0613BFE0: b6ac0090  adrp x22, #0x76cf000
0x0613BFE4: 020140f9  ldr x2, [x8]
0x0613BFE8: d6e243f9  ldr x22, [x22, #0x7c0]
0x0613BFEC: f2958397  bl #0x42217b4
0x0613BFF0: c00240f9  ldr x0, [x22]
0x0613BFF4: 2b134197  bl #0x3180ca0
0x0613BFF8: e1031faa  mov x1, xzr
0x0613BFFC: f40300aa  mov x20, x0
0x0613C000: 995e2394  bl #0x6a13a64
0x0613C004: a80240f9  ldr x8, [x21]
0x0613C008: 480400b4  cbz x8, #0x613c090
0x0613C00C: 083d40f9  ldr x8, [x8, #0x78]
0x0613C010: 080400b4  cbz x8, #0x613c090
0x0613C014: f40300b4  cbz x20, #0x613c090
0x0613C018: 000940fd  ldr d0, [x8, #0x10]
0x0613C01C: f50313aa  mov x21, x19
0x0613C020: e10314aa  mov x1, x20
0x0613C024: 800a00fd  str d0, [x20, #0x10]
0x0613C028: 081940b9  ldr w8, [x8, #0x18]
0x0613C02C: 881a00b9  str w8, [x20, #0x18]
0x0613C030: b40e04f8  str x20, [x21, #0x40]!
0x0613C034: e00315aa  mov x0, x21
0x0613C038: 63124197  bl #0x31809c4
0x0613C03C: c00240f9  ldr x0, [x22]
0x0613C040: 18134197  bl #0x3180ca0
0x0613C044: e1031faa  mov x1, xzr
0x0613C048: f40300aa  mov x20, x0
0x0613C04C: 865e2394  bl #0x6a13a64
0x0613C050: a8025ff8  ldur x8, [x21, #-0x10]
0x0613C054: e80100b4  cbz x8, #0x613c090
0x0613C058: 084140f9  ldr x8, [x8, #0x80]
0x0613C05C: a80100b4  cbz x8, #0x613c090
0x0613C060: 940100b4  cbz x20, #0x613c090
0x0613C064: 000940fd  ldr d0, [x8, #0x10]
0x0613C068: e10314aa  mov x1, x20
0x0613C06C: f65741a9  ldp x22, x21, [sp, #0x10]
0x0613C070: 800a00fd  str d0, [x20, #0x10]
0x0613C074: 081940b9  ldr w8, [x8, #0x18]
0x0613C078: 881a00b9  str w8, [x20, #0x18]
0x0613C07C: 748e04f8  str x20, [x19, #0x48]!
0x0613C080: e00313aa  mov x0, x19
0x0613C084: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0613C088: fe0743f8  ldr x30, [sp], #0x30
0x0613C08C: 4e124117  b #0x31809c4
0x0613C090: 07134197  bl #0x3180cac

; RVA 0x613C094 | public void .ctor() { }
; bytes=224 sha256=8974b80902d6b1a72cbd7a9c04fb1593d54c30304d95e13bcb90736c5d1f2c91 status=arm64_complete_bound indexed_start=True
0x0613C094: fe0f1cf8  str x30, [sp, #-0x40]!
0x0613C098: f85f01a9  stp x24, x23, [sp, #0x10]
0x0613C09C: f65702a9  stp x22, x21, [sp, #0x20]
0x0613C0A0: f44f03a9  stp x20, x19, [sp, #0x30]
0x0613C0A4: 57df0090  adrp x23, #0x7d24000
0x0613C0A8: d8a90090  adrp x24, #0x7674000
0x0613C0AC: d4a90090  adrp x20, #0x7674000
0x0613C0B0: f6ac00f0  adrp x22, #0x76db000
0x0613C0B4: f5ac00d0  adrp x21, #0x76da000
0x0613C0B8: e8625639  ldrb w8, [x23, #0x598]
0x0613C0BC: 187b42f9  ldr x24, [x24, #0x4f0]
0x0613C0C0: 947e42f9  ldr x20, [x20, #0x4f8]
0x0613C0C4: d6d240f9  ldr x22, [x22, #0x1a0]
0x0613C0C8: b5a246f9  ldr x21, [x21, #0xd40]
0x0613C0CC: f30300aa  mov x19, x0
0x0613C0D0: e8010037  tbnz w8, #0, #0x613c10c
0x0613C0D4: e0ac00d0  adrp x0, #0x76da000
0x0613C0D8: 00a046f9  ldr x0, [x0, #0xd40]
0x0613C0DC: 4f124197  bl #0x3180a18
0x0613C0E0: c0a90090  adrp x0, #0x7674000
0x0613C0E4: 007c42f9  ldr x0, [x0, #0x4f8]
0x0613C0E8: 4c124197  bl #0x3180a18
0x0613C0EC: c0a90090  adrp x0, #0x7674000
0x0613C0F0: 007842f9  ldr x0, [x0, #0x4f0]
0x0613C0F4: 49124197  bl #0x3180a18
0x0613C0F8: e0ac00f0  adrp x0, #0x76db000
0x0613C0FC: 00d040f9  ldr x0, [x0, #0x1a0]
0x0613C100: 46124197  bl #0x3180a18
0x0613C104: 28008052  movz w8, #0x1
0x0613C108: e8621639  strb w8, [x23, #0x598]
0x0613C10C: 000340f9  ldr x0, [x24]
0x0613C110: e4124197  bl #0x3180ca0
0x0613C114: 820240f9  ldr x2, [x20]
0x0613C118: e1031f2a  mov w1, wzr
0x0613C11C: f40300aa  mov x20, x0
0x0613C120: 9f958397  bl #0x422179c
0x0613C124: e00313aa  mov x0, x19
0x0613C128: 148c03f8  str x20, [x0, #0x38]!
0x0613C12C: e10314aa  mov x1, x20
0x0613C130: 25124197  bl #0x31809c4
0x0613C134: c00240f9  ldr x0, [x22]
0x0613C138: da124197  bl #0x3180ca0
0x0613C13C: e1031faa  mov x1, xzr
0x0613C140: f40300aa  mov x20, x0
0x0613C144: d955fb97  bl #0x60118a8
0x0613C148: e00313aa  mov x0, x19
0x0613C14C: 140c05f8  str x20, [x0, #0x50]!
0x0613C150: e10314aa  mov x1, x20
0x0613C154: 1c124197  bl #0x31809c4
0x0613C158: a10240f9  ldr x1, [x21]
0x0613C15C: e00313aa  mov x0, x19
0x0613C160: f44f43a9  ldp x20, x19, [sp, #0x30]
0x0613C164: f65742a9  ldp x22, x21, [sp, #0x20]
0x0613C168: f85f41a9  ldp x24, x23, [sp, #0x10]
0x0613C16C: fe0744f8  ldr x30, [sp], #0x40
0x0613C170: 5356b117  b #0x4d91abc

