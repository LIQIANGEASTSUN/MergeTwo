; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 9499 Merger.Game.Signal.Bubbles.BubbleRemoveSignalBase
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x676E678 | public bool get_HasBurstPrice() { }
; bytes=8 sha256=d2625c08dab8a7ed6a0ec29ef5e0b21222fe8c8aa1243088ffebd3218ae29cdc status=arm64_complete_bound indexed_start=True
0x0676E678: 00a04039  ldrb w0, [x0, #0x28]
0x0676E67C: c0035fd6  ret

; RVA 0x676E680 | public void set_HasBurstPrice(bool value) { }
; bytes=12 sha256=43c2f4e1e6978384929aa893c7dbe539967ae11cb60a8af67ffd5877069acd5c status=arm64_complete_bound indexed_start=True
0x0676E680: 28000012  and w8, w1, #1
0x0676E684: 08a00039  strb w8, [x0, #0x28]
0x0676E688: c0035fd6  ret

; RVA 0x676E68C | public int get_BurstPrice() { }
; bytes=8 sha256=0471b33ab0983b843889248d4e9bd2f02e4d575679dc5668cc0ef6ea9dd367b5 status=arm64_complete_bound indexed_start=True
0x0676E68C: 002c40b9  ldr w0, [x0, #0x2c]
0x0676E690: c0035fd6  ret

; RVA 0x676E694 | public void set_BurstPrice(int value) { }
; bytes=8 sha256=be1cd3cf68b6845c50a7cdebc045928c7285382f2a3f88b683a811f7839cb645 status=arm64_complete_bound indexed_start=True
0x0676E694: 012c00b9  str w1, [x0, #0x2c]
0x0676E698: c0035fd6  ret

; RVA 0x676E69C | public PlayerResourceEnum get_BurstResourceType() { }
; bytes=8 sha256=615cc4d4d19713a7b9ea6b3843c274d040126c740088a3e2d95ffe19ba04c269 status=arm64_complete_bound indexed_start=True
0x0676E69C: 003040b9  ldr w0, [x0, #0x30]
0x0676E6A0: c0035fd6  ret

; RVA 0x676E6A4 | public void set_BurstResourceType(PlayerResourceEnum value) { }
; bytes=8 sha256=cf12beb067ccf5c6df7e40da315453fc1f32701c58dd6675efbcc48d42b6ae96 status=arm64_complete_bound indexed_start=True
0x0676E6A4: 013000b9  str w1, [x0, #0x30]
0x0676E6A8: c0035fd6  ret

; RVA 0x676E6AC | public double get_BubbleExpirationTimeInSeconds() { }
; bytes=8 sha256=c38937bcb2beb7c09e9c53044bde4b4117eb76bf52df427b991ba1432392624f status=arm64_complete_bound indexed_start=True
0x0676E6AC: 001c40fd  ldr d0, [x0, #0x38]
0x0676E6B0: c0035fd6  ret

; RVA 0x676E6B4 | public void set_BubbleExpirationTimeInSeconds(double value) { }
; bytes=8 sha256=08f9975701e4448621e9c8e0aa112bfc8d7702d8cb52c37ad1f66ea5cac95cbc status=arm64_complete_bound indexed_start=True
0x0676E6B4: 001c00fd  str d0, [x0, #0x38]
0x0676E6B8: c0035fd6  ret

; RVA 0x676E6BC | public int get_BubblesOnBoard() { }
; bytes=8 sha256=2794764ead4f4e46816d67d9f7faad262cb54d7a0b7a39d555c30024db08d1e8 status=arm64_complete_bound indexed_start=True
0x0676E6BC: 004040b9  ldr w0, [x0, #0x40]
0x0676E6C0: c0035fd6  ret

; RVA 0x676E6C4 | public void set_BubblesOnBoard(int value) { }
; bytes=8 sha256=99126ca7b87d662b9b483045ef27bde13b4525b29d199b0dd709fac17bf71da4 status=arm64_complete_bound indexed_start=True
0x0676E6C4: 014000b9  str w1, [x0, #0x40]
0x0676E6C8: c0035fd6  ret

; RVA 0x676E6CC | public bool get_HasOptionToBurstBubbleWithAd() { }
; bytes=8 sha256=52546c3f5a38886eb64ae30b8638274f49e1d29b236fb8eddd6bba8cb576c4fa status=arm64_complete_bound indexed_start=True
0x0676E6CC: 00104139  ldrb w0, [x0, #0x44]
0x0676E6D0: c0035fd6  ret

; RVA 0x676E6D4 | public void set_HasOptionToBurstBubbleWithAd(bool value) { }
; bytes=12 sha256=9943911d86e147bc24fa20c1e36ec7211a3044e90237cfcf0dc968d45bc593c8 status=arm64_complete_bound indexed_start=True
0x0676E6D4: 28000012  and w8, w1, #1
0x0676E6D8: 08100139  strb w8, [x0, #0x44]
0x0676E6DC: c0035fd6  ret

; RVA 0x676E6E0 | public BubbledItemExpiredSignal.Collectable get_SpawnedCollectable() { }
; bytes=8 sha256=62c64bd585db7a91917843362bb75aa8dd20b002bce4874891b0b3ec8fd242b9 status=arm64_complete_bound indexed_start=True
0x0676E6E0: 002440f9  ldr x0, [x0, #0x48]
0x0676E6E4: c0035fd6  ret

; RVA 0x676E6E8 | public void set_SpawnedCollectable(BubbledItemExpiredSignal.Collectable value) { }
; bytes=8 sha256=87939cb40fcbb9e767142c3dcd87b0115da86805f854d81d2c303019bc018b98 status=arm64_complete_bound indexed_start=True
0x0676E6E8: 018c04f8  str x1, [x0, #0x48]!
0x0676E6EC: b6482817  b #0x31809c4

; RVA 0x676E6F0 | protected void .ctor(IMergeItem item) { }
; bytes=8 sha256=79e6a438a0bd583ed24e01290d43cd02189bef8a47a8ac8848dad2c6d9a37ad4 status=arm64_complete_bound indexed_start=True
0x0676E6F0: e2031faa  mov x2, xzr
0x0676E6F4: 1215e217  b #0x5ff3b3c

; RVA 0x676E650 | protected void .ctor(IMergeItem item, int level) { }
; bytes=8 sha256=d2fb34f66fb2731428034fcfc6f7e0ac17af9e5d8ca2089a560afbcd2e565ff4 status=arm64_complete_bound indexed_start=True
0x0676E650: e3031faa  mov x3, xzr
0x0676E654: 4615e217  b #0x5ff3b6c

