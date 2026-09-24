; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 8495 Merger.Game.Data.QueuedItem
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x667D004 | public IItem get_Item() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x0667D004: 000840f9  ldr x0, [x0, #0x10]
0x0667D008: c0035fd6  ret

; RVA 0x667D00C | public Entity get_Entity() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x0667D00C: 000c40f9  ldr x0, [x0, #0x18]
0x0667D010: c0035fd6  ret

; RVA 0x667D014 | public void set_Entity(Entity value) { }
; bytes=8 sha256=c77ae94d83e1faefdcf51d60194724f16e5f75d990903cc5d75cb7783f88e7ea status=arm64_complete_bound indexed_start=True
0x0667D014: 018c01f8  str x1, [x0, #0x18]!
0x0667D018: 6b0e2c17  b #0x31809c4

; RVA 0x667D01C | public string get_Id() { }
; bytes=160 sha256=398187a7bdbed179634df7cd6c545d3570546410004daaf90fb62490ae994852 status=arm64_complete_bound indexed_start=True
0x0667D01C: fe0f1ef8  str x30, [sp, #-0x20]!
0x0667D020: f44f01a9  stp x20, x19, [sp, #0x10]
0x0667D024: 54b500f0  adrp x20, #0x7d28000
0x0667D028: 883a4739  ldrb w8, [x20, #0x1ce]
0x0667D02C: f30300aa  mov x19, x0
0x0667D030: c8000037  tbnz w8, #0, #0x667d048
0x0667D034: e07f0090  adrp x0, #0x7679000
0x0667D038: 001044f9  ldr x0, [x0, #0x820]
0x0667D03C: 770e2c97  bl #0x3180a18
0x0667D040: 28008052  movz w8, #0x1
0x0667D044: 883a0739  strb w8, [x20, #0x1ce]
0x0667D048: 730a40f9  ldr x19, [x19, #0x10]
0x0667D04C: 730300b4  cbz x19, #0x667d0b8
0x0667D050: ea7f0090  adrp x10, #0x7679000
0x0667D054: 680240f9  ldr x8, [x19]
0x0667D058: 4a1144f9  ldr x10, [x10, #0x820]
0x0667D05C: 095d4279  ldrh w9, [x8, #0x12e]
0x0667D060: 410140f9  ldr x1, [x10]
0x0667D064: 290100b4  cbz x9, #0x667d088
0x0667D068: 0a5940f9  ldr x10, [x8, #0xb0]
0x0667D06C: 4a210091  add x10, x10, #8
0x0667D070: 4b815ff8  ldur x11, [x10, #-8]
0x0667D074: 7f0101eb  cmp x11, x1
0x0667D078: 00010054  b.eq #0x667d098
0x0667D07C: 290500f1  subs x9, x9, #1
0x0667D080: 4a410091  add x10, x10, #0x10
0x0667D084: 61ffff54  b.ne #0x667d070
0x0667D088: e00313aa  mov x0, x19
0x0667D08C: e2031f2a  mov w2, wzr
0x0667D090: a0662b97  bl #0x3156b10
0x0667D094: 04000014  b #0x667d0a4
0x0667D098: 490180b9  ldrsw x9, [x10]
0x0667D09C: 0811098b  add x8, x8, x9, lsl #4
0x0667D0A0: 00e10491  add x0, x8, #0x138
0x0667D0A4: 020440a9  ldp x2, x1, [x0]
0x0667D0A8: e00313aa  mov x0, x19
0x0667D0AC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0667D0B0: fe0742f8  ldr x30, [sp], #0x20
0x0667D0B4: 40001fd6  br x2
0x0667D0B8: fd0e2c97  bl #0x3180cac

; RVA 0x667D0BC | public string get_UUIDInBoardQueue() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x0667D0BC: 001040f9  ldr x0, [x0, #0x20]
0x0667D0C0: c0035fd6  ret

; RVA 0x667D0C4 | public string get_BoosterUUID() { }
; bytes=8 sha256=c0b9896d6c3d8aacf384c0d0cf5d897e84f621efe31cc89c980be348eb9c6614 status=arm64_complete_bound indexed_start=True
0x0667D0C4: 001440f9  ldr x0, [x0, #0x28]
0x0667D0C8: c0035fd6  ret

; RVA 0x667D0CC | public long get_EnqueueTimestamp() { }
; bytes=8 sha256=6b819324b4a3bc2d390c83c7fe02ea41a1f57ae5d4f2a9b0c9256341a5b8d37f status=arm64_complete_bound indexed_start=True
0x0667D0CC: 001840f9  ldr x0, [x0, #0x30]
0x0667D0D0: c0035fd6  ret

; RVA 0x667D0D4 | public string get_Reason() { }
; bytes=8 sha256=095bb56e13b6dfde16ade0b592279392884c282a7c7810cb58472b839de552de status=arm64_complete_bound indexed_start=True
0x0667D0D4: 001c40f9  ldr x0, [x0, #0x38]
0x0667D0D8: c0035fd6  ret

; RVA 0x667D0DC | public void set_Reason(string value) { }
; bytes=8 sha256=9040c419c8938c8aea8efff116ec660523be30285af5a2d6f297203dba13a7b2 status=arm64_complete_bound indexed_start=True
0x0667D0DC: 018c03f8  str x1, [x0, #0x38]!
0x0667D0E0: 390e2c17  b #0x31809c4

; RVA 0x667D0E4 | public BoardQueueOrder get_BoardQueueOrder() { }
; bytes=8 sha256=2794764ead4f4e46816d67d9f7faad262cb54d7a0b7a39d555c30024db08d1e8 status=arm64_complete_bound indexed_start=True
0x0667D0E4: 004040b9  ldr w0, [x0, #0x40]
0x0667D0E8: c0035fd6  ret

; RVA 0x667D0EC | public void .ctor(IItem item, long enqueueTimestamp, BoardQueueOrder boardQueueOrder, string uuidInBoardQueue, Entity entityData, string boosterUuid, string reason) { }
; bytes=172 sha256=06b8bd7b714c4c27b0d088939c5b50f1eb8477ee1b8329010a1a1aa323cb308b status=arm64_complete_bound indexed_start=True
0x0667D0EC: fe0f1bf8  str x30, [sp, #-0x50]!
0x0667D0F0: fa6701a9  stp x26, x25, [sp, #0x10]
0x0667D0F4: f85f02a9  stp x24, x23, [sp, #0x20]
0x0667D0F8: f65703a9  stp x22, x21, [sp, #0x30]
0x0667D0FC: f44f04a9  stp x20, x19, [sp, #0x40]
0x0667D100: f90301aa  mov x25, x1
0x0667D104: e1031faa  mov x1, xzr
0x0667D108: f30307aa  mov x19, x7
0x0667D10C: f40306aa  mov x20, x6
0x0667D110: f50305aa  mov x21, x5
0x0667D114: f60304aa  mov x22, x4
0x0667D118: f703032a  mov w23, w3
0x0667D11C: f80302aa  mov x24, x2
0x0667D120: fa0300aa  mov x26, x0
0x0667D124: 3675c197  bl #0x56da5fc
0x0667D128: e0031aaa  mov x0, x26
0x0667D12C: 190c01f8  str x25, [x0, #0x10]!
0x0667D130: e10319aa  mov x1, x25
0x0667D134: 240e2c97  bl #0x31809c4
0x0667D138: e0031aaa  mov x0, x26
0x0667D13C: 158c01f8  str x21, [x0, #0x18]!
0x0667D140: e10315aa  mov x1, x21
0x0667D144: 200e2c97  bl #0x31809c4
0x0667D148: e0031aaa  mov x0, x26
0x0667D14C: 160c02f8  str x22, [x0, #0x20]!
0x0667D150: e10316aa  mov x1, x22
0x0667D154: 1c0e2c97  bl #0x31809c4
0x0667D158: e0031aaa  mov x0, x26
0x0667D15C: 148c02f8  str x20, [x0, #0x28]!
0x0667D160: e10314aa  mov x1, x20
0x0667D164: 180e2c97  bl #0x31809c4
0x0667D168: 538f03f8  str x19, [x26, #0x38]!
0x0667D16C: e0031aaa  mov x0, x26
0x0667D170: e10313aa  mov x1, x19
0x0667D174: 58831ff8  stur x24, [x26, #-8]
0x0667D178: 130e2c97  bl #0x31809c4
0x0667D17C: 570b00b9  str w23, [x26, #8]
0x0667D180: f44f44a9  ldp x20, x19, [sp, #0x40]
0x0667D184: f65743a9  ldp x22, x21, [sp, #0x30]
0x0667D188: f85f42a9  ldp x24, x23, [sp, #0x20]
0x0667D18C: fa6741a9  ldp x26, x25, [sp, #0x10]
0x0667D190: fe0745f8  ldr x30, [sp], #0x50
0x0667D194: c0035fd6  ret

