; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25967 Merger.MergeBoard.Data.TickResultArgs.ItemSplitResult
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9AB58 | public Entity get_SplitterItem() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06A9AB58: 000840f9  ldr x0, [x0, #0x10]
0x06A9AB5C: c0035fd6  ret

; RVA 0x6A9AB60 | public void set_SplitterItem(Entity value) { }
; bytes=8 sha256=8b127b002cca35cb6578e78bdbd077109e9cf81092b6d81b03f48743cf930c7a status=arm64_complete_bound indexed_start=True
0x06A9AB60: 010c01f8  str x1, [x0, #0x10]!
0x06A9AB64: 98971b17  b #0x31809c4

; RVA 0x6A9AB68 | public Entity get_TargetItem() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x06A9AB68: 000c40f9  ldr x0, [x0, #0x18]
0x06A9AB6C: c0035fd6  ret

; RVA 0x6A9AB70 | public void set_TargetItem(Entity value) { }
; bytes=8 sha256=1b710a7e7a009bf9f27b7fde0cca9dc761c7a8d9b5696efd96355e9d2513d3bc status=arm64_complete_bound indexed_start=True
0x06A9AB70: 018c01f8  str x1, [x0, #0x18]!
0x06A9AB74: 94971b17  b #0x31809c4

; RVA 0x6A9AB78 | public Entity get_NewItem1() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x06A9AB78: 001040f9  ldr x0, [x0, #0x20]
0x06A9AB7C: c0035fd6  ret

; RVA 0x6A9AB80 | public void set_NewItem1(Entity value) { }
; bytes=8 sha256=9a849bd83b022c7d35147d9b4da75f82a448cb696e982f036146a2a356cc4b48 status=arm64_complete_bound indexed_start=True
0x06A9AB80: 010c02f8  str x1, [x0, #0x20]!
0x06A9AB84: 90971b17  b #0x31809c4

; RVA 0x6A9AB88 | public Entity get_NewItem2() { }
; bytes=8 sha256=c0b9896d6c3d8aacf384c0d0cf5d897e84f621efe31cc89c980be348eb9c6614 status=arm64_complete_bound indexed_start=True
0x06A9AB88: 001440f9  ldr x0, [x0, #0x28]
0x06A9AB8C: c0035fd6  ret

; RVA 0x6A9AB90 | public void set_NewItem2(Entity value) { }
; bytes=8 sha256=8c8b268d17e3245b5579d6de34be20f7f223f1406c1c70c1ccf01210d0974d99 status=arm64_complete_bound indexed_start=True
0x06A9AB90: 018c02f8  str x1, [x0, #0x28]!
0x06A9AB94: 8c971b17  b #0x31809c4

; RVA 0x6A9AB98 | public int get_SplitPosition() { }
; bytes=8 sha256=615cc4d4d19713a7b9ea6b3843c274d040126c740088a3e2d95ffe19ba04c269 status=arm64_complete_bound indexed_start=True
0x06A9AB98: 003040b9  ldr w0, [x0, #0x30]
0x06A9AB9C: c0035fd6  ret

; RVA 0x6A9ABA0 | public void set_SplitPosition(int value) { }
; bytes=8 sha256=cf12beb067ccf5c6df7e40da315453fc1f32701c58dd6675efbcc48d42b6ae96 status=arm64_complete_bound indexed_start=True
0x06A9ABA0: 013000b9  str w1, [x0, #0x30]
0x06A9ABA4: c0035fd6  ret

; RVA 0x6A9ABA8 | public void .ctor() { }
; bytes=8 sha256=7eb57e5a34b9197b57c8b88abbfbebede2aeec7d56c7159251f75152ce807651 status=arm64_complete_bound indexed_start=True
0x06A9ABA8: e1031faa  mov x1, xzr
0x06A9ABAC: 94feb017  b #0x56da5fc

