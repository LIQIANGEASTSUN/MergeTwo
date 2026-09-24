; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25990 Merger.MergeBoard.Components.BoxComponent
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9BC20 | public bool get_Boxed() { }
; bytes=8 sha256=cb54949d467f73d9dcbdbcb28d5a644a4eec1b14f07f76f0b273836bd51115b8 status=arm64_complete_bound indexed_start=True
0x06A9BC20: 00004039  ldrb w0, [x0]
0x06A9BC24: c0035fd6  ret

; RVA 0x6A9BC28 | public void set_Boxed(bool value) { }
; bytes=12 sha256=d8d6a87b79c22068a5113851b854309321a6207b1869be17774095726f18ae6c status=arm64_complete_bound indexed_start=True
0x06A9BC28: 28000012  and w8, w1, #1
0x06A9BC2C: 08000039  strb w8, [x0]
0x06A9BC30: c0035fd6  ret

; RVA 0x6A9BC34 | public int get_InteractionAmount() { }
; bytes=8 sha256=c40709113e97cec9c72bfbb7a6f1892a5b54d7906ca60d6c400c2e268577b883 status=arm64_complete_bound indexed_start=True
0x06A9BC34: 000440b9  ldr w0, [x0, #4]
0x06A9BC38: c0035fd6  ret

; RVA 0x6A9BC3C | public void set_InteractionAmount(int value) { }
; bytes=8 sha256=f54c46fefcd0a3e901200e617c5502b21e0b3e0b280a7fb3bd27a3f31621fc08 status=arm64_complete_bound indexed_start=True
0x06A9BC3C: 010400b9  str w1, [x0, #4]
0x06A9BC40: c0035fd6  ret

; RVA 0x6A9BC44 | public int get_TotalInteractionAmount() { }
; bytes=8 sha256=2f3b6f6686fd51e88030785bd4646403cb57ac71a5cbf077e500a85bdf0afab3 status=arm64_complete_bound indexed_start=True
0x06A9BC44: 000840b9  ldr w0, [x0, #8]
0x06A9BC48: c0035fd6  ret

; RVA 0x6A9BC4C | public void set_TotalInteractionAmount(int value) { }
; bytes=8 sha256=7fffd60dad9e0c0cfbc80048d686fb13fc5d2edac9e8e4b9e040a64fe96070b5 status=arm64_complete_bound indexed_start=True
0x06A9BC4C: 010800b9  str w1, [x0, #8]
0x06A9BC50: c0035fd6  ret

; RVA 0x6A9BC54 | public UnboxingType get_UnboxingType() { }
; bytes=8 sha256=3bd3b1d8b6ab2c04c0413bebd37e2e8ad1ccbe0b9ecfaf21d58d998e01648454 status=arm64_complete_bound indexed_start=True
0x06A9BC54: 000c40b9  ldr w0, [x0, #0xc]
0x06A9BC58: c0035fd6  ret

; RVA 0x6A9BC5C | public void set_UnboxingType(UnboxingType value) { }
; bytes=8 sha256=a5200317e3a877767038a611935f53526230362e33853a166017ee7706ac3d51 status=arm64_complete_bound indexed_start=True
0x06A9BC5C: 010c00b9  str w1, [x0, #0xc]
0x06A9BC60: c0035fd6  ret

; RVA 0x6A9BC64 | public PlayerResourceEnum get_InteractionResource() { }
; bytes=8 sha256=6f1929ee2376e6ada94db6d2aafe012dfc8382613e73b99aea0c7dea270fac13 status=arm64_complete_bound indexed_start=True
0x06A9BC64: 001040b9  ldr w0, [x0, #0x10]
0x06A9BC68: c0035fd6  ret

; RVA 0x6A9BC6C | public void set_InteractionResource(PlayerResourceEnum value) { }
; bytes=8 sha256=4f1731a5a3d5539e5c40e4019b837526eaa31ef7b03eb65ceaee7084e15a198b status=arm64_complete_bound indexed_start=True
0x06A9BC6C: 011000b9  str w1, [x0, #0x10]
0x06A9BC70: c0035fd6  ret

