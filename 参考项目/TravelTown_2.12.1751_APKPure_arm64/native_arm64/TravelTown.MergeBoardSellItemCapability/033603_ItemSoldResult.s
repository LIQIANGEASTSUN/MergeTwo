; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 33603 Merger.MergeBoardSellItemCapability.Data.TickResultArgs.ItemSoldResult
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A6132C | public Entity get_Entity() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06A6132C: 000840f9  ldr x0, [x0, #0x10]
0x06A61330: c0035fd6  ret

; RVA 0x6A61334 | public void set_Entity(Entity value) { }
; bytes=8 sha256=76573e5f08f464a0159c9bb25e241a62950efdd434de05295278ee7ed00a8ac8 status=arm64_complete_bound indexed_start=True
0x06A61334: 010c01f8  str x1, [x0, #0x10]!
0x06A61338: a37d1c17  b #0x31809c4

; RVA 0x6A6133C | public string get_ItemId() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x06A6133C: 000c40f9  ldr x0, [x0, #0x18]
0x06A61340: c0035fd6  ret

; RVA 0x6A61344 | public void set_ItemId(string value) { }
; bytes=8 sha256=f84cd72c30f6e9e8baa6adaeb05f3e67618ffa9f091f546262f004522bb8b339 status=arm64_complete_bound indexed_start=True
0x06A61344: 018c01f8  str x1, [x0, #0x18]!
0x06A61348: 9f7d1c17  b #0x31809c4

; RVA 0x6A6134C | public string get_EntityId() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x06A6134C: 001040f9  ldr x0, [x0, #0x20]
0x06A61350: c0035fd6  ret

; RVA 0x6A61354 | public void set_EntityId(string value) { }
; bytes=8 sha256=4078007a52be5ed85974e846274067b925f9053ac5dd71371bda1f62c653ad35 status=arm64_complete_bound indexed_start=True
0x06A61354: 010c02f8  str x1, [x0, #0x20]!
0x06A61358: 9b7d1c17  b #0x31809c4

; RVA 0x6A6135C | public int get_SourcePosition() { }
; bytes=8 sha256=ba269e200604d0dd95f57e6bd974cfb4fb4a15db1799161315f4b00aef67931c status=arm64_complete_bound indexed_start=True
0x06A6135C: 002840b9  ldr w0, [x0, #0x28]
0x06A61360: c0035fd6  ret

; RVA 0x6A61364 | public void set_SourcePosition(int value) { }
; bytes=8 sha256=9e40c154908b27c28daea725a2a8b301cdb33ac03bba4f1283b986b2c7c65080 status=arm64_complete_bound indexed_start=True
0x06A61364: 012800b9  str w1, [x0, #0x28]
0x06A61368: c0035fd6  ret

; RVA 0x6A6136C | public PlayerResourceEnum get_Resource() { }
; bytes=8 sha256=0471b33ab0983b843889248d4e9bd2f02e4d575679dc5668cc0ef6ea9dd367b5 status=arm64_complete_bound indexed_start=True
0x06A6136C: 002c40b9  ldr w0, [x0, #0x2c]
0x06A61370: c0035fd6  ret

; RVA 0x6A61374 | public void set_Resource(PlayerResourceEnum value) { }
; bytes=8 sha256=be1cd3cf68b6845c50a7cdebc045928c7285382f2a3f88b683a811f7839cb645 status=arm64_complete_bound indexed_start=True
0x06A61374: 012c00b9  str w1, [x0, #0x2c]
0x06A61378: c0035fd6  ret

; RVA 0x6A6137C | public int get_Amount() { }
; bytes=8 sha256=615cc4d4d19713a7b9ea6b3843c274d040126c740088a3e2d95ffe19ba04c269 status=arm64_complete_bound indexed_start=True
0x06A6137C: 003040b9  ldr w0, [x0, #0x30]
0x06A61380: c0035fd6  ret

; RVA 0x6A61384 | public void set_Amount(int value) { }
; bytes=8 sha256=cf12beb067ccf5c6df7e40da315453fc1f32701c58dd6675efbcc48d42b6ae96 status=arm64_complete_bound indexed_start=True
0x06A61384: 013000b9  str w1, [x0, #0x30]
0x06A61388: c0035fd6  ret

; RVA 0x6A5FE38 | public void .ctor() { }
; bytes=8 sha256=823e061df6741b9646856cecdd73904c362833364f2d71c0fe961eab366580d4 status=arm64_complete_bound indexed_start=True
0x06A5FE38: e1031faa  mov x1, xzr
0x06A5FE3C: f0e9b117  b #0x56da5fc

