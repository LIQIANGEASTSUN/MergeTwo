; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25962 Merger.MergeBoard.Data.TickResultArgs.ItemResourceCollectedResult
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9A8E4 | public Entity get_Entity() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06A9A8E4: 000840f9  ldr x0, [x0, #0x10]
0x06A9A8E8: c0035fd6  ret

; RVA 0x6A9A8EC | public void set_Entity(Entity value) { }
; bytes=8 sha256=7a479f0f9db5a28837bf03bb338793e1896fb2309b0bace104fb8d0e82b7077d status=arm64_complete_bound indexed_start=True
0x06A9A8EC: 010c01f8  str x1, [x0, #0x10]!
0x06A9A8F0: 35981b17  b #0x31809c4

; RVA 0x6A9A8F4 | public string get_EntityId() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x06A9A8F4: 000c40f9  ldr x0, [x0, #0x18]
0x06A9A8F8: c0035fd6  ret

; RVA 0x6A9A8FC | public void set_EntityId(string value) { }
; bytes=8 sha256=5c1a7313faca88c835cd8a5406049bc917db06d48e93d7f509af3ad212ae8a12 status=arm64_complete_bound indexed_start=True
0x06A9A8FC: 018c01f8  str x1, [x0, #0x18]!
0x06A9A900: 31981b17  b #0x31809c4

; RVA 0x6A9A904 | public string get_ItemId() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x06A9A904: 001040f9  ldr x0, [x0, #0x20]
0x06A9A908: c0035fd6  ret

; RVA 0x6A9A90C | public void set_ItemId(string value) { }
; bytes=8 sha256=4ff1eece3cae950346ece254c1eb94d7b1a966e5d4362c7545339eeba151d1c0 status=arm64_complete_bound indexed_start=True
0x06A9A90C: 010c02f8  str x1, [x0, #0x20]!
0x06A9A910: 2d981b17  b #0x31809c4

; RVA 0x6A9A914 | public int get_Position() { }
; bytes=8 sha256=ba269e200604d0dd95f57e6bd974cfb4fb4a15db1799161315f4b00aef67931c status=arm64_complete_bound indexed_start=True
0x06A9A914: 002840b9  ldr w0, [x0, #0x28]
0x06A9A918: c0035fd6  ret

; RVA 0x6A9A91C | public void set_Position(int value) { }
; bytes=8 sha256=9e40c154908b27c28daea725a2a8b301cdb33ac03bba4f1283b986b2c7c65080 status=arm64_complete_bound indexed_start=True
0x06A9A91C: 012800b9  str w1, [x0, #0x28]
0x06A9A920: c0035fd6  ret

; RVA 0x6A9A924 | public PlayerResourceEnum get_Resource() { }
; bytes=8 sha256=0471b33ab0983b843889248d4e9bd2f02e4d575679dc5668cc0ef6ea9dd367b5 status=arm64_complete_bound indexed_start=True
0x06A9A924: 002c40b9  ldr w0, [x0, #0x2c]
0x06A9A928: c0035fd6  ret

; RVA 0x6A9A92C | public void set_Resource(PlayerResourceEnum value) { }
; bytes=8 sha256=be1cd3cf68b6845c50a7cdebc045928c7285382f2a3f88b683a811f7839cb645 status=arm64_complete_bound indexed_start=True
0x06A9A92C: 012c00b9  str w1, [x0, #0x2c]
0x06A9A930: c0035fd6  ret

; RVA 0x6A9A934 | public int get_Amount() { }
; bytes=8 sha256=615cc4d4d19713a7b9ea6b3843c274d040126c740088a3e2d95ffe19ba04c269 status=arm64_complete_bound indexed_start=True
0x06A9A934: 003040b9  ldr w0, [x0, #0x30]
0x06A9A938: c0035fd6  ret

; RVA 0x6A9A93C | public void set_Amount(int value) { }
; bytes=8 sha256=cf12beb067ccf5c6df7e40da315453fc1f32701c58dd6675efbcc48d42b6ae96 status=arm64_complete_bound indexed_start=True
0x06A9A93C: 013000b9  str w1, [x0, #0x30]
0x06A9A940: c0035fd6  ret

; RVA 0x6A9A944 | public void .ctor() { }
; bytes=8 sha256=b794a7648d731babe64361b29702c259cbda5cbba3fe53774e9e87312572fdcf status=arm64_complete_bound indexed_start=True
0x06A9A944: e1031faa  mov x1, xzr
0x06A9A948: 2dffb017  b #0x56da5fc

