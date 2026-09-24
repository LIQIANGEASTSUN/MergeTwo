; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 9382 Merger.Game.Signal.ItemsMergedSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x676BA34 | public IMergeItem get_Item() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x0676BA34: 000840f9  ldr x0, [x0, #0x10]
0x0676BA38: c0035fd6  ret

; RVA 0x676BA3C | public IMergeItem get_SecondItem() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x0676BA3C: 000c40f9  ldr x0, [x0, #0x18]
0x0676BA40: c0035fd6  ret

; RVA 0x676BA44 | public IMergeItem get_CreatedItem() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x0676BA44: 001040f9  ldr x0, [x0, #0x20]
0x0676BA48: c0035fd6  ret

; RVA 0x676BA4C | public IMergeItem get_SpawnedResource() { }
; bytes=8 sha256=c0b9896d6c3d8aacf384c0d0cf5d897e84f621efe31cc89c980be348eb9c6614 status=arm64_complete_bound indexed_start=True
0x0676BA4C: 001440f9  ldr x0, [x0, #0x28]
0x0676BA50: c0035fd6  ret

; RVA 0x676BA54 | public bool get_WasBubbleCreated() { }
; bytes=8 sha256=b5f756a94e2a4fd04c581b81886364460d3cd7c165e6a51d5f3195a9439a10c4 status=arm64_complete_bound indexed_start=True
0x0676BA54: 00c04039  ldrb w0, [x0, #0x30]
0x0676BA58: c0035fd6  ret

; RVA 0x676BA5C | public bool get_AnyItemLocked() { }
; bytes=8 sha256=6a3cb8c4f92b5961effe3a4ee16cd73e98d1d0f94c954c6b45545a35177d46d8 status=arm64_complete_bound indexed_start=True
0x0676BA5C: 00c44039  ldrb w0, [x0, #0x31]
0x0676BA60: c0035fd6  ret

; RVA 0x676BA64 | public int get_Level() { }
; bytes=8 sha256=96907067fcf1f0f92a64ad5b4f6ac39cae65f2312486c4abdf79e771a70fbafe status=arm64_complete_bound indexed_start=True
0x0676BA64: 003440b9  ldr w0, [x0, #0x34]
0x0676BA68: c0035fd6  ret

; RVA 0x676BA6C | public int get_FreeTiles() { }
; bytes=8 sha256=70b6226cdde2aa2e19c7cef1812dc4f3cd14b63d0b93bca2e70ec7210fcf097f status=arm64_complete_bound indexed_start=True
0x0676BA6C: 003840b9  ldr w0, [x0, #0x38]
0x0676BA70: c0035fd6  ret

; RVA 0x676BA74 | public string get_ActionId() { }
; bytes=8 sha256=ac1915dbf8ae56825a9e0c79c21190a655d4b32b9c10f299546aad7c9ecadc66 status=arm64_complete_bound indexed_start=True
0x0676BA74: 002040f9  ldr x0, [x0, #0x40]
0x0676BA78: c0035fd6  ret

; RVA 0x676BA7C | public BoardItemPosition get_CreatedItemPosition() { }
; bytes=8 sha256=62c64bd585db7a91917843362bb75aa8dd20b002bce4874891b0b3ec8fd242b9 status=arm64_complete_bound indexed_start=True
0x0676BA7C: 002440f9  ldr x0, [x0, #0x48]
0x0676BA80: c0035fd6  ret

; RVA 0x676BA84 | public void .ctor(IMergeItem item, IMergeItem secondMergeItem, IMergeItem createdItem, IMergeItem spawnedResource, bool wasBubbleCreated, bool anyItemLocked, int level, int freeTiles, string actionId, BoardItemPosition createdItemPosition) { }
; bytes=196 sha256=2854b569dba138bdcf6cf4a0fe7d0ea0885f473be21fd14191b7463d74f46cf0 status=arm64_complete_bound indexed_start=True
0x0676BA84: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x0676BA88: fc6f01a9  stp x28, x27, [sp, #0x10]
0x0676BA8C: fa6702a9  stp x26, x25, [sp, #0x20]
0x0676BA90: f85f03a9  stp x24, x23, [sp, #0x30]
0x0676BA94: f65704a9  stp x22, x21, [sp, #0x40]
0x0676BA98: f44f05a9  stp x20, x19, [sp, #0x50]
0x0676BA9C: fa6340b9  ldr w26, [sp, #0x60]
0x0676BAA0: f9ef46a9  ldp x25, x27, [sp, #0x68]
0x0676BAA4: f70301aa  mov x23, x1
0x0676BAA8: e1031faa  mov x1, xzr
0x0676BAAC: f303072a  mov w19, w7
0x0676BAB0: f40304aa  mov x20, x4
0x0676BAB4: f50303aa  mov x21, x3
0x0676BAB8: f60302aa  mov x22, x2
0x0676BABC: f80300aa  mov x24, x0
0x0676BAC0: bc000012  and w28, w5, #1
0x0676BAC4: dd000012  and w29, w6, #1
0x0676BAC8: cdbabd97  bl #0x56da5fc
0x0676BACC: e00318aa  mov x0, x24
0x0676BAD0: 170c01f8  str x23, [x0, #0x10]!
0x0676BAD4: e10317aa  mov x1, x23
0x0676BAD8: bb532897  bl #0x31809c4
0x0676BADC: e00318aa  mov x0, x24
0x0676BAE0: 168c01f8  str x22, [x0, #0x18]!
0x0676BAE4: e10316aa  mov x1, x22
0x0676BAE8: b7532897  bl #0x31809c4
0x0676BAEC: e00318aa  mov x0, x24
0x0676BAF0: 150c02f8  str x21, [x0, #0x20]!
0x0676BAF4: e10315aa  mov x1, x21
0x0676BAF8: b3532897  bl #0x31809c4
0x0676BAFC: e00318aa  mov x0, x24
0x0676BB00: 148c02f8  str x20, [x0, #0x28]!
0x0676BB04: e10314aa  mov x1, x20
0x0676BB08: af532897  bl #0x31809c4
0x0676BB0C: 190f04f8  str x25, [x24, #0x40]!
0x0676BB10: e00318aa  mov x0, x24
0x0676BB14: e10319aa  mov x1, x25
0x0676BB18: 1d131f38  sturb w29, [x24, #-0xf]
0x0676BB1C: 1c031f38  sturb w28, [x24, #-0x10]
0x0676BB20: 13eb3e29  stp w19, w26, [x24, #-0xc]
0x0676BB24: a8532897  bl #0x31809c4
0x0676BB28: 1b0700f9  str x27, [x24, #8]
0x0676BB2C: f44f45a9  ldp x20, x19, [sp, #0x50]
0x0676BB30: f65744a9  ldp x22, x21, [sp, #0x40]
0x0676BB34: f85f43a9  ldp x24, x23, [sp, #0x30]
0x0676BB38: fa6742a9  ldp x26, x25, [sp, #0x20]
0x0676BB3C: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x0676BB40: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x0676BB44: c0035fd6  ret

; RVA 0x676BB48 | public SoundArguments GetSoundArguments() { }
; bytes=64 sha256=d711b98a56dfdeec7004ba44ee15afbffb4f2a207c0bb7475449510f9b2e6c00 status=arm64_complete_bound indexed_start=True
0x0676BB48: ff8300d1  sub sp, sp, #0x20
0x0676BB4C: fe0b00f9  str x30, [sp, #0x10]
0x0676BB50: 083440b9  ldr w8, [x0, #0x34]
0x0676BB54: e0730091  add x0, sp, #0x1c
0x0676BB58: e1031faa  mov x1, xzr
0x0676BB5C: e81f00b9  str w8, [sp, #0x1c]
0x0676BB60: fb9fbc97  bl #0x5693b4c
0x0676BB64: e10300aa  mov x1, x0
0x0676BB68: e0030091  mov x0, sp
0x0676BB6C: e2031faa  mov x2, xzr
0x0676BB70: ff7f00a9  stp xzr, xzr, [sp]
0x0676BB74: 2aa8f997  bl #0x65d5c1c
0x0676BB78: e00740a9  ldp x0, x1, [sp]
0x0676BB7C: fe0b40f9  ldr x30, [sp, #0x10]
0x0676BB80: ff830091  add sp, sp, #0x20
0x0676BB84: c0035fd6  ret

