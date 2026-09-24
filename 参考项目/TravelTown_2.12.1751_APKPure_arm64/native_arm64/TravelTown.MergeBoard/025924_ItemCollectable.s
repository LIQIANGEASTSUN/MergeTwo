; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25924 Merger.MergeBoard.Data.ItemCollectable
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9A0B8 | public AfterCollectAnimation get_AfterCollectAnimation() { }
; bytes=8 sha256=6f1929ee2376e6ada94db6d2aafe012dfc8382613e73b99aea0c7dea270fac13 status=arm64_complete_bound indexed_start=True
0x06A9A0B8: 001040b9  ldr w0, [x0, #0x10]
0x06A9A0BC: c0035fd6  ret

; RVA 0x6A9A0C0 | public void set_AfterCollectAnimation(AfterCollectAnimation value) { }
; bytes=8 sha256=4f1731a5a3d5539e5c40e4019b837526eaa31ef7b03eb65ceaee7084e15a198b status=arm64_complete_bound indexed_start=True
0x06A9A0C0: 011000b9  str w1, [x0, #0x10]
0x06A9A0C4: c0035fd6  ret

; RVA 0x6A9A0C8 | public Reward get_Reward() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x06A9A0C8: 000c40f9  ldr x0, [x0, #0x18]
0x06A9A0CC: c0035fd6  ret

; RVA 0x6A9A0D0 | public void set_Reward(Reward value) { }
; bytes=8 sha256=401f05e1932e2044c116a669f6c68ce04a6d681a452249b381a01e1c705de04b status=arm64_complete_bound indexed_start=True
0x06A9A0D0: 018c01f8  str x1, [x0, #0x18]!
0x06A9A0D4: 3c9a1b17  b #0x31809c4

; RVA 0x6A9A0D8 | public CollectableType get_CollectableType() { }
; bytes=8 sha256=1f31d5ff0e22c7c2e3b958e4e0186cb71a2e67a614d53dd8d744824fcd4b1d53 status=arm64_complete_bound indexed_start=True
0x06A9A0D8: 002040b9  ldr w0, [x0, #0x20]
0x06A9A0DC: c0035fd6  ret

; RVA 0x6A9A0E0 | public void set_CollectableType(CollectableType value) { }
; bytes=8 sha256=f5044c26609fdbec3c7736771b22cfdf72c42bcc825f0051ef500d8f88aaa62e status=arm64_complete_bound indexed_start=True
0x06A9A0E0: 012000b9  str w1, [x0, #0x20]
0x06A9A0E4: c0035fd6  ret

; RVA 0x6A977A8 | public void .ctor() { }
; bytes=8 sha256=067c89add150872478a22d6844c0fb0ea3b8af21607b391039d9fe4348d74ca1 status=arm64_complete_bound indexed_start=True
0x06A977A8: e1031faa  mov x1, xzr
0x06A977AC: 940bb117  b #0x56da5fc

