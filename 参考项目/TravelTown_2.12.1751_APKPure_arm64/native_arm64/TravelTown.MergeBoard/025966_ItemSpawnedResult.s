; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25966 Merger.MergeBoard.Data.TickResultArgs.ItemSpawnedResult
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9A9E4 | public Entity get_SourceEntity() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06A9A9E4: 000840f9  ldr x0, [x0, #0x10]
0x06A9A9E8: c0035fd6  ret

; RVA 0x6A9A9EC | private void set_SourceEntity(Entity value) { }
; bytes=8 sha256=58f5993938ec33d2366494e56242b3e793e36297ca6af6bb24278f1c8e0117b7 status=arm64_complete_bound indexed_start=True
0x06A9A9EC: 010c01f8  str x1, [x0, #0x10]!
0x06A9A9F0: f5971b17  b #0x31809c4

; RVA 0x6A9A9F4 | public Entity get_NewEntity() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x06A9A9F4: 000c40f9  ldr x0, [x0, #0x18]
0x06A9A9F8: c0035fd6  ret

; RVA 0x6A9A9FC | private void set_NewEntity(Entity value) { }
; bytes=8 sha256=a082136d9fe036421cb9fb2dfcde87501a4f10efc8af79d5b220a17071139dc8 status=arm64_complete_bound indexed_start=True
0x06A9A9FC: 018c01f8  str x1, [x0, #0x18]!
0x06A9AA00: f1971b17  b #0x31809c4

; RVA 0x6A9AA04 | public int get_SourcePosition() { }
; bytes=8 sha256=1f31d5ff0e22c7c2e3b958e4e0186cb71a2e67a614d53dd8d744824fcd4b1d53 status=arm64_complete_bound indexed_start=True
0x06A9AA04: 002040b9  ldr w0, [x0, #0x20]
0x06A9AA08: c0035fd6  ret

; RVA 0x6A9AA0C | private void set_SourcePosition(int value) { }
; bytes=8 sha256=f5044c26609fdbec3c7736771b22cfdf72c42bcc825f0051ef500d8f88aaa62e status=arm64_complete_bound indexed_start=True
0x06A9AA0C: 012000b9  str w1, [x0, #0x20]
0x06A9AA10: c0035fd6  ret

; RVA 0x6A9AA14 | public int get_TargetPosition() { }
; bytes=8 sha256=a2e28d6b3f73d0b0251bc7d259573fb064536ce8240cdf9c1eb3c614e9c5fd54 status=arm64_complete_bound indexed_start=True
0x06A9AA14: 002440b9  ldr w0, [x0, #0x24]
0x06A9AA18: c0035fd6  ret

; RVA 0x6A9AA1C | private void set_TargetPosition(int value) { }
; bytes=8 sha256=789d7b57c17b823d5e5cd288cb3fa3ae4d22145bd1e8a59998e7d459d1ce427b status=arm64_complete_bound indexed_start=True
0x06A9AA1C: 012400b9  str w1, [x0, #0x24]
0x06A9AA20: c0035fd6  ret

; RVA 0x6A9AA24 | public ItemCreatedSource get_CreatedBy() { }
; bytes=8 sha256=ba269e200604d0dd95f57e6bd974cfb4fb4a15db1799161315f4b00aef67931c status=arm64_complete_bound indexed_start=True
0x06A9AA24: 002840b9  ldr w0, [x0, #0x28]
0x06A9AA28: c0035fd6  ret

; RVA 0x6A9AA2C | private void set_CreatedBy(ItemCreatedSource value) { }
; bytes=8 sha256=9e40c154908b27c28daea725a2a8b301cdb33ac03bba4f1283b986b2c7c65080 status=arm64_complete_bound indexed_start=True
0x06A9AA2C: 012800b9  str w1, [x0, #0x28]
0x06A9AA30: c0035fd6  ret

; RVA 0x6A9AA34 | public bool get_Rare() { }
; bytes=8 sha256=3cd77b542a8f1965476bdea8c21a73c2fb1e20ff99d64f405907bf1ea9d5e914 status=arm64_complete_bound indexed_start=True
0x06A9AA34: 00b04039  ldrb w0, [x0, #0x2c]
0x06A9AA38: c0035fd6  ret

; RVA 0x6A9AA3C | private void set_Rare(bool value) { }
; bytes=12 sha256=ce8d5d8afe972cd28069b4b4a58125409cd58277b9130e0dda4d655f89038168 status=arm64_complete_bound indexed_start=True
0x06A9AA3C: 28000012  and w8, w1, #1
0x06A9AA40: 08b00039  strb w8, [x0, #0x2c]
0x06A9AA44: c0035fd6  ret

; RVA 0x6A9AA48 | public bool get_Legendary() { }
; bytes=8 sha256=77d7f4e6437652cfb59e11ee459012a5929732696668f888a0aec3752aae7c9d status=arm64_complete_bound indexed_start=True
0x06A9AA48: 00b44039  ldrb w0, [x0, #0x2d]
0x06A9AA4C: c0035fd6  ret

; RVA 0x6A9AA50 | private void set_Legendary(bool value) { }
; bytes=12 sha256=723185dc934f472bb3deeb4cb6c66565fa4b0c48a90960c3ef4601c727eaf7ec status=arm64_complete_bound indexed_start=True
0x06A9AA50: 28000012  and w8, w1, #1
0x06A9AA54: 08b40039  strb w8, [x0, #0x2d]
0x06A9AA58: c0035fd6  ret

; RVA 0x6A9AA5C | public bool get_Boosted() { }
; bytes=8 sha256=06e10c0206009434a54b46873888628869d30cb0110a3616b832e1969ee5b0ff status=arm64_complete_bound indexed_start=True
0x06A9AA5C: 00b84039  ldrb w0, [x0, #0x2e]
0x06A9AA60: c0035fd6  ret

; RVA 0x6A9AA64 | private void set_Boosted(bool value) { }
; bytes=12 sha256=1b56e009561c7e3b453682975f5b1ce7ca9783131fe8c241e83c268794efff17 status=arm64_complete_bound indexed_start=True
0x06A9AA64: 28000012  and w8, w1, #1
0x06A9AA68: 08b80039  strb w8, [x0, #0x2e]
0x06A9AA6C: c0035fd6  ret

; RVA 0x6A9AA70 | public ItemAnalyticsData get_SourceEntityAnalyticsData() { }
; bytes=8 sha256=6b819324b4a3bc2d390c83c7fe02ea41a1f57ae5d4f2a9b0c9256341a5b8d37f status=arm64_complete_bound indexed_start=True
0x06A9AA70: 001840f9  ldr x0, [x0, #0x30]
0x06A9AA74: c0035fd6  ret

; RVA 0x6A9AA78 | private void set_SourceEntityAnalyticsData(ItemAnalyticsData value) { }
; bytes=8 sha256=727aea5eb84c060d34ddc7dffb24a0edde18f3d09bbb8cccaad1ca54e603de47 status=arm64_complete_bound indexed_start=True
0x06A9AA78: 010c03f8  str x1, [x0, #0x30]!
0x06A9AA7C: d2971b17  b #0x31809c4

; RVA 0x6A9AA80 | public ItemAnalyticsData get_NewEntityAnalyticsData() { }
; bytes=8 sha256=095bb56e13b6dfde16ade0b592279392884c282a7c7810cb58472b839de552de status=arm64_complete_bound indexed_start=True
0x06A9AA80: 001c40f9  ldr x0, [x0, #0x38]
0x06A9AA84: c0035fd6  ret

; RVA 0x6A9AA88 | private void set_NewEntityAnalyticsData(ItemAnalyticsData value) { }
; bytes=8 sha256=0cf804f77b2702a62cbf7096395911c88decaf09466a4cdd150b94f94d676082 status=arm64_complete_bound indexed_start=True
0x06A9AA88: 018c03f8  str x1, [x0, #0x38]!
0x06A9AA8C: ce971b17  b #0x31809c4

; RVA 0x6A9AA90 | public void .ctor(Entity sourceEntity, Entity newEntity, int sourcePosition, int targetPosition, ItemCreatedSource itemCreatedSource, ItemAnalyticsData sourceEntityAnalyticsData, ItemAnalyticsData newEntityAnalyticsData, bool rare = False, bool legendary = False, bool boosted = False) { }
; bytes=200 sha256=329e6c65c5424f69e427512680f776f7d88f2714e5cb61c1f6a1f056332ef64c status=arm64_complete_bound indexed_start=True
0x06A9AA90: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x06A9AA94: fc6f01a9  stp x28, x27, [sp, #0x10]
0x06A9AA98: fa6702a9  stp x26, x25, [sp, #0x20]
0x06A9AA9C: f85f03a9  stp x24, x23, [sp, #0x30]
0x06A9AAA0: f65704a9  stp x22, x21, [sp, #0x40]
0x06A9AAA4: f44f05a9  stp x20, x19, [sp, #0x50]
0x06A9AAA8: fbc34139  ldrb w27, [sp, #0x70]
0x06A9AAAC: fca34139  ldrb w28, [sp, #0x68]
0x06A9AAB0: fd834139  ldrb w29, [sp, #0x60]
0x06A9AAB4: f90301aa  mov x25, x1
0x06A9AAB8: e1031faa  mov x1, xzr
0x06A9AABC: f30307aa  mov x19, x7
0x06A9AAC0: f40306aa  mov x20, x6
0x06A9AAC4: f503052a  mov w21, w5
0x06A9AAC8: f603042a  mov w22, w4
0x06A9AACC: f703032a  mov w23, w3
0x06A9AAD0: f80302aa  mov x24, x2
0x06A9AAD4: fa0300aa  mov x26, x0
0x06A9AAD8: c9feb097  bl #0x56da5fc
0x06A9AADC: e0031aaa  mov x0, x26
0x06A9AAE0: 190c01f8  str x25, [x0, #0x10]!
0x06A9AAE4: e10319aa  mov x1, x25
0x06A9AAE8: b7971b97  bl #0x31809c4
0x06A9AAEC: e0031aaa  mov x0, x26
0x06A9AAF0: 188c01f8  str x24, [x0, #0x18]!
0x06A9AAF4: e10318aa  mov x1, x24
0x06A9AAF8: b3971b97  bl #0x31809c4
0x06A9AAFC: e0031aaa  mov x0, x26
0x06A9AB00: 575b0429  stp w23, w22, [x26, #0x20]
0x06A9AB04: 552b00b9  str w21, [x26, #0x28]
0x06A9AB08: 140c03f8  str x20, [x0, #0x30]!
0x06A9AB0C: e10314aa  mov x1, x20
0x06A9AB10: ad971b97  bl #0x31809c4
0x06A9AB14: 538f03f8  str x19, [x26, #0x38]!
0x06A9AB18: e0031aaa  mov x0, x26
0x06A9AB1C: e10313aa  mov x1, x19
0x06A9AB20: a9971b97  bl #0x31809c4
0x06A9AB24: a8030012  and w8, w29, #1
0x06A9AB28: 89030012  and w9, w28, #1
0x06A9AB2C: 6a030012  and w10, w27, #1
0x06A9AB30: 48431f38  sturb w8, [x26, #-0xc]
0x06A9AB34: 49531f38  sturb w9, [x26, #-0xb]
0x06A9AB38: 4a631f38  sturb w10, [x26, #-0xa]
0x06A9AB3C: f44f45a9  ldp x20, x19, [sp, #0x50]
0x06A9AB40: f65744a9  ldp x22, x21, [sp, #0x40]
0x06A9AB44: f85f43a9  ldp x24, x23, [sp, #0x30]
0x06A9AB48: fa6742a9  ldp x26, x25, [sp, #0x20]
0x06A9AB4C: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x06A9AB50: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x06A9AB54: c0035fd6  ret

