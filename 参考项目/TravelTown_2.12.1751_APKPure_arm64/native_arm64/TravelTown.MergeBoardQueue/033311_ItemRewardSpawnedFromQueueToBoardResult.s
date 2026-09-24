; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 33311 Merger.MergeBoardQueue.Data.TickResultArgs.ItemRewardSpawnedFromQueueToBoardResult
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A5BAC4 | public Entity get_Entity() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06A5BAC4: 000840f9  ldr x0, [x0, #0x10]
0x06A5BAC8: c0035fd6  ret

; RVA 0x6A5BACC | private void set_Entity(Entity value) { }
; bytes=8 sha256=c8c53eb91da0a2f579c488ffae4b48fa8e2fd57637760a0f0aef5901e8b17ce5 status=arm64_complete_bound indexed_start=True
0x06A5BACC: 010c01f8  str x1, [x0, #0x10]!
0x06A5BAD0: bd931c17  b #0x31809c4

; RVA 0x6A5BAD4 | public ItemAnalyticsData get_AnalyticsData() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x06A5BAD4: 000c40f9  ldr x0, [x0, #0x18]
0x06A5BAD8: c0035fd6  ret

; RVA 0x6A5BADC | private void set_AnalyticsData(ItemAnalyticsData value) { }
; bytes=8 sha256=a8b51c516329973444d512dc7b8eb09365a048c871a4274d828220ce14089ed5 status=arm64_complete_bound indexed_start=True
0x06A5BADC: 018c01f8  str x1, [x0, #0x18]!
0x06A5BAE0: b9931c17  b #0x31809c4

; RVA 0x6A5BAE4 | public QueuedItem get_DequeuedItem() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x06A5BAE4: 001040f9  ldr x0, [x0, #0x20]
0x06A5BAE8: c0035fd6  ret

; RVA 0x6A5BAEC | private void set_DequeuedItem(QueuedItem value) { }
; bytes=8 sha256=3bbd9f7ec10e6bb4e440a20d55e8b4c416628b5ec8cec6275be2b0e099fff23f status=arm64_complete_bound indexed_start=True
0x06A5BAEC: 010c02f8  str x1, [x0, #0x20]!
0x06A5BAF0: b5931c17  b #0x31809c4

; RVA 0x6A5BAF4 | public int get_DestinationPosition() { }
; bytes=8 sha256=ba269e200604d0dd95f57e6bd974cfb4fb4a15db1799161315f4b00aef67931c status=arm64_complete_bound indexed_start=True
0x06A5BAF4: 002840b9  ldr w0, [x0, #0x28]
0x06A5BAF8: c0035fd6  ret

; RVA 0x6A5BAFC | private void set_DestinationPosition(int value) { }
; bytes=8 sha256=9e40c154908b27c28daea725a2a8b301cdb33ac03bba4f1283b986b2c7c65080 status=arm64_complete_bound indexed_start=True
0x06A5BAFC: 012800b9  str w1, [x0, #0x28]
0x06A5BB00: c0035fd6  ret

; RVA 0x6A572A0 | public void .ctor(Entity entity, ItemAnalyticsData analyticsData, QueuedItem dequeuedItem, int destinationPosition) { }
; bytes=108 sha256=15b5a1f1af7d344659987ca9190ff1d3955940322b1896f20f23838300daf82a status=arm64_complete_bound indexed_start=True
0x06A572A0: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x06A572A4: f65701a9  stp x22, x21, [sp, #0x10]
0x06A572A8: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A572AC: f60301aa  mov x22, x1
0x06A572B0: e1031faa  mov x1, xzr
0x06A572B4: f303042a  mov w19, w4
0x06A572B8: f40303aa  mov x20, x3
0x06A572BC: f50302aa  mov x21, x2
0x06A572C0: f70300aa  mov x23, x0
0x06A572C4: ce0cb297  bl #0x56da5fc
0x06A572C8: e00317aa  mov x0, x23
0x06A572CC: 160c01f8  str x22, [x0, #0x10]!
0x06A572D0: e10316aa  mov x1, x22
0x06A572D4: bca51c97  bl #0x31809c4
0x06A572D8: e00317aa  mov x0, x23
0x06A572DC: 158c01f8  str x21, [x0, #0x18]!
0x06A572E0: e10315aa  mov x1, x21
0x06A572E4: b8a51c97  bl #0x31809c4
0x06A572E8: f40e02f8  str x20, [x23, #0x20]!
0x06A572EC: e00317aa  mov x0, x23
0x06A572F0: e10314aa  mov x1, x20
0x06A572F4: b4a51c97  bl #0x31809c4
0x06A572F8: f30a00b9  str w19, [x23, #8]
0x06A572FC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A57300: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A57304: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x06A57308: c0035fd6  ret

