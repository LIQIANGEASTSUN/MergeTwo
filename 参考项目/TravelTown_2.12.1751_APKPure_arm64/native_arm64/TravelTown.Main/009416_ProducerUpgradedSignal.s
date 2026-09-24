; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 9416 Merger.Game.Signal.ProducerUpgradedSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x676C338 | public IMergeItem get_Item() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x0676C338: 000840f9  ldr x0, [x0, #0x10]
0x0676C33C: c0035fd6  ret

; RVA 0x676C340 | public IMergeItem get_SecondItem() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x0676C340: 000c40f9  ldr x0, [x0, #0x18]
0x0676C344: c0035fd6  ret

; RVA 0x676C348 | public IMergeItem get_CreatedItem() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x0676C348: 001040f9  ldr x0, [x0, #0x20]
0x0676C34C: c0035fd6  ret

; RVA 0x676C350 | public IMergeItem get_SpawnedResource() { }
; bytes=8 sha256=c0b9896d6c3d8aacf384c0d0cf5d897e84f621efe31cc89c980be348eb9c6614 status=arm64_complete_bound indexed_start=True
0x0676C350: 001440f9  ldr x0, [x0, #0x28]
0x0676C354: c0035fd6  ret

; RVA 0x676C358 | public bool get_WasBubbleCreated() { }
; bytes=8 sha256=b5f756a94e2a4fd04c581b81886364460d3cd7c165e6a51d5f3195a9439a10c4 status=arm64_complete_bound indexed_start=True
0x0676C358: 00c04039  ldrb w0, [x0, #0x30]
0x0676C35C: c0035fd6  ret

; RVA 0x676C360 | public bool get_AnyItemLocked() { }
; bytes=8 sha256=6a3cb8c4f92b5961effe3a4ee16cd73e98d1d0f94c954c6b45545a35177d46d8 status=arm64_complete_bound indexed_start=True
0x0676C360: 00c44039  ldrb w0, [x0, #0x31]
0x0676C364: c0035fd6  ret

; RVA 0x676C368 | public int get_Level() { }
; bytes=8 sha256=96907067fcf1f0f92a64ad5b4f6ac39cae65f2312486c4abdf79e771a70fbafe status=arm64_complete_bound indexed_start=True
0x0676C368: 003440b9  ldr w0, [x0, #0x34]
0x0676C36C: c0035fd6  ret

; RVA 0x676C370 | public int get_FreeTiles() { }
; bytes=8 sha256=70b6226cdde2aa2e19c7cef1812dc4f3cd14b63d0b93bca2e70ec7210fcf097f status=arm64_complete_bound indexed_start=True
0x0676C370: 003840b9  ldr w0, [x0, #0x38]
0x0676C374: c0035fd6  ret

; RVA 0x676C378 | public void .ctor(IMergeItem item, IMergeItem secondMergeItem, IMergeItem createdItem, IMergeItem spawnedResource, bool wasBubbleCreated, bool anyItemLocked, int level, int freeTiles) { }
; bytes=164 sha256=7f71c3a4e40d1c06bc705a6dbd4242b79ebfdb44c921cb9547f2df0a2c93c638 status=arm64_complete_bound indexed_start=True
0x0676C378: fe6fbba9  stp x30, x27, [sp, #-0x50]!
0x0676C37C: fa6701a9  stp x26, x25, [sp, #0x10]
0x0676C380: f85f02a9  stp x24, x23, [sp, #0x20]
0x0676C384: f65703a9  stp x22, x21, [sp, #0x30]
0x0676C388: f44f04a9  stp x20, x19, [sp, #0x40]
0x0676C38C: f95340b9  ldr w25, [sp, #0x50]
0x0676C390: f70301aa  mov x23, x1
0x0676C394: e1031faa  mov x1, xzr
0x0676C398: f303072a  mov w19, w7
0x0676C39C: f40304aa  mov x20, x4
0x0676C3A0: f50303aa  mov x21, x3
0x0676C3A4: f60302aa  mov x22, x2
0x0676C3A8: f80300aa  mov x24, x0
0x0676C3AC: ba000012  and w26, w5, #1
0x0676C3B0: db000012  and w27, w6, #1
0x0676C3B4: 92b8bd97  bl #0x56da5fc
0x0676C3B8: e00318aa  mov x0, x24
0x0676C3BC: 170c01f8  str x23, [x0, #0x10]!
0x0676C3C0: e10317aa  mov x1, x23
0x0676C3C4: 80512897  bl #0x31809c4
0x0676C3C8: e00318aa  mov x0, x24
0x0676C3CC: 168c01f8  str x22, [x0, #0x18]!
0x0676C3D0: e10316aa  mov x1, x22
0x0676C3D4: 7c512897  bl #0x31809c4
0x0676C3D8: e00318aa  mov x0, x24
0x0676C3DC: 150c02f8  str x21, [x0, #0x20]!
0x0676C3E0: e10315aa  mov x1, x21
0x0676C3E4: 78512897  bl #0x31809c4
0x0676C3E8: 148f02f8  str x20, [x24, #0x28]!
0x0676C3EC: e00318aa  mov x0, x24
0x0676C3F0: e10314aa  mov x1, x20
0x0676C3F4: 74512897  bl #0x31809c4
0x0676C3F8: 1b270039  strb w27, [x24, #9]
0x0676C3FC: 1a230039  strb w26, [x24, #8]
0x0676C400: 13e70129  stp w19, w25, [x24, #0xc]
0x0676C404: f44f44a9  ldp x20, x19, [sp, #0x40]
0x0676C408: f65743a9  ldp x22, x21, [sp, #0x30]
0x0676C40C: f85f42a9  ldp x24, x23, [sp, #0x20]
0x0676C410: fa6741a9  ldp x26, x25, [sp, #0x10]
0x0676C414: fe6fc5a8  ldp x30, x27, [sp], #0x50
0x0676C418: c0035fd6  ret

