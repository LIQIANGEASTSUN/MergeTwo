; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 33604 Merger.MergeBoardSellItemCapability.Data.TickResultArgs.ItemUndoSellResult
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A6138C | public Entity get_Entity() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06A6138C: 000840f9  ldr x0, [x0, #0x10]
0x06A61390: c0035fd6  ret

; RVA 0x6A61394 | public void set_Entity(Entity value) { }
; bytes=8 sha256=8d0fb3f0557e2026d1a1f9708904a44680fe00d7a518349583b12e38be4e955f status=arm64_complete_bound indexed_start=True
0x06A61394: 010c01f8  str x1, [x0, #0x10]!
0x06A61398: 8b7d1c17  b #0x31809c4

; RVA 0x6A6139C | public string get_EntityId() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x06A6139C: 000c40f9  ldr x0, [x0, #0x18]
0x06A613A0: c0035fd6  ret

; RVA 0x6A613A4 | public void set_EntityId(string value) { }
; bytes=8 sha256=72fef40035d26b4251147c2c8d3c9774a9d113fd11d0fe0db2dab43b0829b0ea status=arm64_complete_bound indexed_start=True
0x06A613A4: 018c01f8  str x1, [x0, #0x18]!
0x06A613A8: 877d1c17  b #0x31809c4

; RVA 0x6A613AC | public string get_ItemId() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x06A613AC: 001040f9  ldr x0, [x0, #0x20]
0x06A613B0: c0035fd6  ret

; RVA 0x6A613B4 | public void set_ItemId(string value) { }
; bytes=8 sha256=80643330079afb7116b92655be4a29cac10a799fb677a12caa2ffb544fd2a1cf status=arm64_complete_bound indexed_start=True
0x06A613B4: 010c02f8  str x1, [x0, #0x20]!
0x06A613B8: 837d1c17  b #0x31809c4

; RVA 0x6A613BC | public int get_TargetPosition() { }
; bytes=8 sha256=ba269e200604d0dd95f57e6bd974cfb4fb4a15db1799161315f4b00aef67931c status=arm64_complete_bound indexed_start=True
0x06A613BC: 002840b9  ldr w0, [x0, #0x28]
0x06A613C0: c0035fd6  ret

; RVA 0x6A613C4 | public void set_TargetPosition(int value) { }
; bytes=8 sha256=9e40c154908b27c28daea725a2a8b301cdb33ac03bba4f1283b986b2c7c65080 status=arm64_complete_bound indexed_start=True
0x06A613C4: 012800b9  str w1, [x0, #0x28]
0x06A613C8: c0035fd6  ret

; RVA 0x6A613CC | public int get_Amount() { }
; bytes=8 sha256=0471b33ab0983b843889248d4e9bd2f02e4d575679dc5668cc0ef6ea9dd367b5 status=arm64_complete_bound indexed_start=True
0x06A613CC: 002c40b9  ldr w0, [x0, #0x2c]
0x06A613D0: c0035fd6  ret

; RVA 0x6A613D4 | public void set_Amount(int value) { }
; bytes=8 sha256=be1cd3cf68b6845c50a7cdebc045928c7285382f2a3f88b683a811f7839cb645 status=arm64_complete_bound indexed_start=True
0x06A613D4: 012c00b9  str w1, [x0, #0x2c]
0x06A613D8: c0035fd6  ret

; RVA 0x6A613DC | public PlayerResourceEnum get_Resource() { }
; bytes=8 sha256=615cc4d4d19713a7b9ea6b3843c274d040126c740088a3e2d95ffe19ba04c269 status=arm64_complete_bound indexed_start=True
0x06A613DC: 003040b9  ldr w0, [x0, #0x30]
0x06A613E0: c0035fd6  ret

; RVA 0x6A613E4 | public void set_Resource(PlayerResourceEnum value) { }
; bytes=8 sha256=cf12beb067ccf5c6df7e40da315453fc1f32701c58dd6675efbcc48d42b6ae96 status=arm64_complete_bound indexed_start=True
0x06A613E4: 013000b9  str w1, [x0, #0x30]
0x06A613E8: c0035fd6  ret

; RVA 0x6A60420 | public void .ctor() { }
; bytes=8 sha256=e5428103cab9ba859449c00616b14775ba3eb280f6cd18d75a1708596fba6b36 status=arm64_complete_bound indexed_start=True
0x06A60420: e1031faa  mov x1, xzr
0x06A60424: 76e8b117  b #0x56da5fc

