; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25955 Merger.MergeBoard.Data.TickResultArgs.ItemCollectedResult
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9A700 | public Entity get_Entity() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06A9A700: 000840f9  ldr x0, [x0, #0x10]
0x06A9A704: c0035fd6  ret

; RVA 0x6A9A708 | public void set_Entity(Entity value) { }
; bytes=8 sha256=cdb79f190f189779ac6e88e0c3112c8b563f2b0d55d0ad9a9241c36efc071b3b status=arm64_complete_bound indexed_start=True
0x06A9A708: 010c01f8  str x1, [x0, #0x10]!
0x06A9A70C: ae981b17  b #0x31809c4

; RVA 0x6A9A710 | public string get_EntityId() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x06A9A710: 000c40f9  ldr x0, [x0, #0x18]
0x06A9A714: c0035fd6  ret

; RVA 0x6A9A718 | public void set_EntityId(string value) { }
; bytes=8 sha256=2806455da51041a34255a44a8dc31e54560d6abf1813a43e26a9bd34fcb415f4 status=arm64_complete_bound indexed_start=True
0x06A9A718: 018c01f8  str x1, [x0, #0x18]!
0x06A9A71C: aa981b17  b #0x31809c4

; RVA 0x6A9A720 | public string get_ItemId() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x06A9A720: 001040f9  ldr x0, [x0, #0x20]
0x06A9A724: c0035fd6  ret

; RVA 0x6A9A728 | public void set_ItemId(string value) { }
; bytes=8 sha256=6bfe31f4f90f4c31777162b1c9cb4e4d17d298be3605dd58b8b4a40faa60dc74 status=arm64_complete_bound indexed_start=True
0x06A9A728: 010c02f8  str x1, [x0, #0x20]!
0x06A9A72C: a6981b17  b #0x31809c4

; RVA 0x6A9A730 | public int get_Position() { }
; bytes=8 sha256=ba269e200604d0dd95f57e6bd974cfb4fb4a15db1799161315f4b00aef67931c status=arm64_complete_bound indexed_start=True
0x06A9A730: 002840b9  ldr w0, [x0, #0x28]
0x06A9A734: c0035fd6  ret

; RVA 0x6A9A738 | public void set_Position(int value) { }
; bytes=8 sha256=9e40c154908b27c28daea725a2a8b301cdb33ac03bba4f1283b986b2c7c65080 status=arm64_complete_bound indexed_start=True
0x06A9A738: 012800b9  str w1, [x0, #0x28]
0x06A9A73C: c0035fd6  ret

; RVA 0x6A9A740 | public Reward get_Reward() { }
; bytes=8 sha256=6b819324b4a3bc2d390c83c7fe02ea41a1f57ae5d4f2a9b0c9256341a5b8d37f status=arm64_complete_bound indexed_start=True
0x06A9A740: 001840f9  ldr x0, [x0, #0x30]
0x06A9A744: c0035fd6  ret

; RVA 0x6A9A748 | public void set_Reward(Reward value) { }
; bytes=8 sha256=65f4743d44237676976f6d7224837dcd1a69529980c97df5c69b45ac58ce8066 status=arm64_complete_bound indexed_start=True
0x06A9A748: 010c03f8  str x1, [x0, #0x30]!
0x06A9A74C: 9e981b17  b #0x31809c4

; RVA 0x6A9A750 | public bool get_IsImmediateReward() { }
; bytes=8 sha256=6770a96f4998ce8df43beb8e497cf1a56ff280479bbf45eeb6d10b8b1fe08600 status=arm64_complete_bound indexed_start=True
0x06A9A750: 00e04039  ldrb w0, [x0, #0x38]
0x06A9A754: c0035fd6  ret

; RVA 0x6A9A758 | public void set_IsImmediateReward(bool value) { }
; bytes=12 sha256=ad4db97ee2c8b47615142569a0603a73f36cb9cd1a44e165cf1c86be0bdb34a9 status=arm64_complete_bound indexed_start=True
0x06A9A758: 28000012  and w8, w1, #1
0x06A9A75C: 08e00039  strb w8, [x0, #0x38]
0x06A9A760: c0035fd6  ret

; RVA 0x6A9A764 | public void .ctor() { }
; bytes=8 sha256=3d1b6aefd072bbf9b222aa7a9152c9896f21a41bbcdd644062691f8d798f5482 status=arm64_complete_bound indexed_start=True
0x06A9A764: e1031faa  mov x1, xzr
0x06A9A768: a5ffb017  b #0x56da5fc

