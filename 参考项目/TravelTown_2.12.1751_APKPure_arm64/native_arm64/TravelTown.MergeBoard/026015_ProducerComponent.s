; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 26015 Merger.MergeBoard.Components.ProducerComponent
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9C2B8 | public ItemSpawningQueue get_ItemsQueue() { }
; bytes=8 sha256=4197ad96213c98161e13fbfd6185a724b5570ba296d316558cbd5cc5c1842369 status=arm64_complete_bound indexed_start=True
0x06A9C2B8: 000040f9  ldr x0, [x0]
0x06A9C2BC: c0035fd6  ret

; RVA 0x6A9C2C0 | public void set_ItemsQueue(ItemSpawningQueue value) { }
; bytes=8 sha256=8f0bc82f0944d2aa0463af61b74ba2e5c5afc61908f63997563bcff1660cf72a status=arm64_complete_bound indexed_start=True
0x06A9C2C0: 010000f9  str x1, [x0]
0x06A9C2C4: c0911b17  b #0x31809c4

; RVA 0x6A9C2C8 | public int get_Seed() { }
; bytes=8 sha256=2f3b6f6686fd51e88030785bd4646403cb57ac71a5cbf077e500a85bdf0afab3 status=arm64_complete_bound indexed_start=True
0x06A9C2C8: 000840b9  ldr w0, [x0, #8]
0x06A9C2CC: c0035fd6  ret

; RVA 0x6A9C2D0 | public void set_Seed(int value) { }
; bytes=8 sha256=7fffd60dad9e0c0cfbc80048d686fb13fc5d2edac9e8e4b9e040a64fe96070b5 status=arm64_complete_bound indexed_start=True
0x06A9C2D0: 010800b9  str w1, [x0, #8]
0x06A9C2D4: c0035fd6  ret

; RVA 0x6A9C2D8 | public ProduceCapability get_Capability() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06A9C2D8: 000840f9  ldr x0, [x0, #0x10]
0x06A9C2DC: c0035fd6  ret

; RVA 0x6A9C2E0 | public void set_Capability(ProduceCapability value) { }
; bytes=8 sha256=9358b6b2d8d1d6a10041a7187748c75e61383104538fa2e5dacd14be67aed4ae status=arm64_complete_bound indexed_start=True
0x06A9C2E0: 010c01f8  str x1, [x0, #0x10]!
0x06A9C2E4: b8911b17  b #0x31809c4

; RVA 0x6A9C2E8 | public bool get_ReadyToProduce() { }
; bytes=8 sha256=e4c1a301829bf7e242097004cb25fc213af6f8bee45f49527b010f07bce68f54 status=arm64_complete_bound indexed_start=True
0x06A9C2E8: 00604039  ldrb w0, [x0, #0x18]
0x06A9C2EC: c0035fd6  ret

; RVA 0x6A9C2F0 | public void set_ReadyToProduce(bool value) { }
; bytes=12 sha256=44e17fb1eb8f8ff9cdde629de5faf61cf17316e0f5f154eccbf27e368f8511ec status=arm64_complete_bound indexed_start=True
0x06A9C2F0: 28000012  and w8, w1, #1
0x06A9C2F4: 08600039  strb w8, [x0, #0x18]
0x06A9C2F8: c0035fd6  ret

