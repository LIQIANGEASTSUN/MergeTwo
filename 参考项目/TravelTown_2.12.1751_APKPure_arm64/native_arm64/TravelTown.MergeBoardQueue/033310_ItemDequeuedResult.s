; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 33310 Merger.MergeBoardQueue.Data.TickResultArgs.ItemDequeuedResult
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A5BA84 | public Entity get_Entity() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06A5BA84: 000840f9  ldr x0, [x0, #0x10]
0x06A5BA88: c0035fd6  ret

; RVA 0x6A5BA8C | private void set_Entity(Entity value) { }
; bytes=8 sha256=b5bdbe51a1dd07b252f2b8823918d71ba006fee9c570b465f84c3b0f53aea61b status=arm64_complete_bound indexed_start=True
0x06A5BA8C: 010c01f8  str x1, [x0, #0x10]!
0x06A5BA90: cd931c17  b #0x31809c4

; RVA 0x6A5BA94 | public ItemAnalyticsData get_AnalyticsData() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x06A5BA94: 000c40f9  ldr x0, [x0, #0x18]
0x06A5BA98: c0035fd6  ret

; RVA 0x6A5BA9C | private void set_AnalyticsData(ItemAnalyticsData value) { }
; bytes=8 sha256=57912cbdeb0cec06c950b4076553787c133008107f9a822feb75c2b634915830 status=arm64_complete_bound indexed_start=True
0x06A5BA9C: 018c01f8  str x1, [x0, #0x18]!
0x06A5BAA0: c9931c17  b #0x31809c4

; RVA 0x6A5BAA4 | public QueuedItem get_Item() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x06A5BAA4: 001040f9  ldr x0, [x0, #0x20]
0x06A5BAA8: c0035fd6  ret

; RVA 0x6A5BAAC | private void set_Item(QueuedItem value) { }
; bytes=8 sha256=77f4676564034d976a895303afbe9566225471f30e3e74361b9f8b03b068576a status=arm64_complete_bound indexed_start=True
0x06A5BAAC: 010c02f8  str x1, [x0, #0x20]!
0x06A5BAB0: c5931c17  b #0x31809c4

; RVA 0x6A5BAB4 | public int get_DestinationPosition() { }
; bytes=8 sha256=ba269e200604d0dd95f57e6bd974cfb4fb4a15db1799161315f4b00aef67931c status=arm64_complete_bound indexed_start=True
0x06A5BAB4: 002840b9  ldr w0, [x0, #0x28]
0x06A5BAB8: c0035fd6  ret

; RVA 0x6A5BABC | private void set_DestinationPosition(int value) { }
; bytes=8 sha256=9e40c154908b27c28daea725a2a8b301cdb33ac03bba4f1283b986b2c7c65080 status=arm64_complete_bound indexed_start=True
0x06A5BABC: 012800b9  str w1, [x0, #0x28]
0x06A5BAC0: c0035fd6  ret

; RVA 0x6A57234 | public void .ctor(Entity entity, ItemAnalyticsData itemAnalyticsData, QueuedItem item, int destinationPosition) { }
; bytes=108 sha256=725a6b2bc56b4403d55d5ac712a390b0fdb8e9bd65dcc177cdb38d10f4827295 status=arm64_complete_bound indexed_start=True
0x06A57234: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x06A57238: f65701a9  stp x22, x21, [sp, #0x10]
0x06A5723C: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A57240: f60301aa  mov x22, x1
0x06A57244: e1031faa  mov x1, xzr
0x06A57248: f303042a  mov w19, w4
0x06A5724C: f40303aa  mov x20, x3
0x06A57250: f50302aa  mov x21, x2
0x06A57254: f70300aa  mov x23, x0
0x06A57258: e90cb297  bl #0x56da5fc
0x06A5725C: e00317aa  mov x0, x23
0x06A57260: 160c01f8  str x22, [x0, #0x10]!
0x06A57264: e10316aa  mov x1, x22
0x06A57268: d7a51c97  bl #0x31809c4
0x06A5726C: e00317aa  mov x0, x23
0x06A57270: 158c01f8  str x21, [x0, #0x18]!
0x06A57274: e10315aa  mov x1, x21
0x06A57278: d3a51c97  bl #0x31809c4
0x06A5727C: f40e02f8  str x20, [x23, #0x20]!
0x06A57280: e00317aa  mov x0, x23
0x06A57284: e10314aa  mov x1, x20
0x06A57288: cfa51c97  bl #0x31809c4
0x06A5728C: f30a00b9  str w19, [x23, #8]
0x06A57290: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A57294: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A57298: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x06A5729C: c0035fd6  ret

