; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25974 Merger.MergeBoard.Data.TickResultArgs.UndoSellFailedResult
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9AD08 | public Entity get_Entity() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06A9AD08: 000840f9  ldr x0, [x0, #0x10]
0x06A9AD0C: c0035fd6  ret

; RVA 0x6A9AD10 | public void set_Entity(Entity value) { }
; bytes=8 sha256=4471601892dbf7e3aa0e5cb9be7bd92adceefa8261c08cfa0f3ececb60a25c3e status=arm64_complete_bound indexed_start=True
0x06A9AD10: 010c01f8  str x1, [x0, #0x10]!
0x06A9AD14: 2c971b17  b #0x31809c4

; RVA 0x6A9AD18 | public string get_Reason() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x06A9AD18: 000c40f9  ldr x0, [x0, #0x18]
0x06A9AD1C: c0035fd6  ret

; RVA 0x6A9AD20 | public void set_Reason(string value) { }
; bytes=8 sha256=ef0c7a6d5fc0c7afa9772c5fde069aabc71f6cda61ce537950573f625abc066e status=arm64_complete_bound indexed_start=True
0x06A9AD20: 018c01f8  str x1, [x0, #0x18]!
0x06A9AD24: 28971b17  b #0x31809c4

; RVA 0x6A9AD28 | public IMergeItem get_MergeItem() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x06A9AD28: 001040f9  ldr x0, [x0, #0x20]
0x06A9AD2C: c0035fd6  ret

; RVA 0x6A9AD30 | public void set_MergeItem(IMergeItem value) { }
; bytes=8 sha256=b2d82be4834b577d951df8b685660385c4c31f444d5874f1ac7efefdb861f949 status=arm64_complete_bound indexed_start=True
0x06A9AD30: 010c02f8  str x1, [x0, #0x20]!
0x06A9AD34: 24971b17  b #0x31809c4

; RVA 0x6A9AD38 | public string get_ItemId() { }
; bytes=8 sha256=c0b9896d6c3d8aacf384c0d0cf5d897e84f621efe31cc89c980be348eb9c6614 status=arm64_complete_bound indexed_start=True
0x06A9AD38: 001440f9  ldr x0, [x0, #0x28]
0x06A9AD3C: c0035fd6  ret

; RVA 0x6A9AD40 | public void set_ItemId(string value) { }
; bytes=8 sha256=b005d876ff91cfb88b246581938fbb8a502f5bf5c27369787301d8cf1ecedc79 status=arm64_complete_bound indexed_start=True
0x06A9AD40: 018c02f8  str x1, [x0, #0x28]!
0x06A9AD44: 20971b17  b #0x31809c4

; RVA 0x6A9AD48 | public PlayerResourceEnum get_Resource() { }
; bytes=8 sha256=615cc4d4d19713a7b9ea6b3843c274d040126c740088a3e2d95ffe19ba04c269 status=arm64_complete_bound indexed_start=True
0x06A9AD48: 003040b9  ldr w0, [x0, #0x30]
0x06A9AD4C: c0035fd6  ret

; RVA 0x6A9AD50 | public void set_Resource(PlayerResourceEnum value) { }
; bytes=8 sha256=cf12beb067ccf5c6df7e40da315453fc1f32701c58dd6675efbcc48d42b6ae96 status=arm64_complete_bound indexed_start=True
0x06A9AD50: 013000b9  str w1, [x0, #0x30]
0x06A9AD54: c0035fd6  ret

; RVA 0x6A9AD58 | public int get_Amount() { }
; bytes=8 sha256=96907067fcf1f0f92a64ad5b4f6ac39cae65f2312486c4abdf79e771a70fbafe status=arm64_complete_bound indexed_start=True
0x06A9AD58: 003440b9  ldr w0, [x0, #0x34]
0x06A9AD5C: c0035fd6  ret

; RVA 0x6A9AD60 | public void set_Amount(int value) { }
; bytes=8 sha256=bec88c0b626323e3656f327f9dbd2aef67c785ce4650404cbbf20ffdd9b27c95 status=arm64_complete_bound indexed_start=True
0x06A9AD60: 013400b9  str w1, [x0, #0x34]
0x06A9AD64: c0035fd6  ret

; RVA 0x6A9AD68 | public void .ctor(Entity entity, string reason, IMergeItem mergeItem, string itemId, PlayerResourceEnum resource, int amount) { }
; bytes=140 sha256=cf6b0327339fbb0d0481be4da237b99255883fcaa5e750f414216fa6760b0669 status=arm64_complete_bound indexed_start=True
0x06A9AD68: fe67bca9  stp x30, x25, [sp, #-0x40]!
0x06A9AD6C: f85f01a9  stp x24, x23, [sp, #0x10]
0x06A9AD70: f65702a9  stp x22, x21, [sp, #0x20]
0x06A9AD74: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A9AD78: f80301aa  mov x24, x1
0x06A9AD7C: e1031faa  mov x1, xzr
0x06A9AD80: f303062a  mov w19, w6
0x06A9AD84: f403052a  mov w20, w5
0x06A9AD88: f50304aa  mov x21, x4
0x06A9AD8C: f60303aa  mov x22, x3
0x06A9AD90: f70302aa  mov x23, x2
0x06A9AD94: f90300aa  mov x25, x0
0x06A9AD98: 19feb097  bl #0x56da5fc
0x06A9AD9C: e00319aa  mov x0, x25
0x06A9ADA0: 180c01f8  str x24, [x0, #0x10]!
0x06A9ADA4: e10318aa  mov x1, x24
0x06A9ADA8: 07971b97  bl #0x31809c4
0x06A9ADAC: e00319aa  mov x0, x25
0x06A9ADB0: 178c01f8  str x23, [x0, #0x18]!
0x06A9ADB4: e10317aa  mov x1, x23
0x06A9ADB8: 03971b97  bl #0x31809c4
0x06A9ADBC: e00319aa  mov x0, x25
0x06A9ADC0: 160c02f8  str x22, [x0, #0x20]!
0x06A9ADC4: e10316aa  mov x1, x22
0x06A9ADC8: ff961b97  bl #0x31809c4
0x06A9ADCC: 358f02f8  str x21, [x25, #0x28]!
0x06A9ADD0: e00319aa  mov x0, x25
0x06A9ADD4: e10315aa  mov x1, x21
0x06A9ADD8: fb961b97  bl #0x31809c4
0x06A9ADDC: 344f0129  stp w20, w19, [x25, #8]
0x06A9ADE0: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A9ADE4: f65742a9  ldp x22, x21, [sp, #0x20]
0x06A9ADE8: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06A9ADEC: fe67c4a8  ldp x30, x25, [sp], #0x40
0x06A9ADF0: c0035fd6  ret

