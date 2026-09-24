; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25956 Merger.MergeBoard.Data.TickResultArgs.ItemConsumedResult
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9A76C | public Entity get_ConsumerEntity() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06A9A76C: 000840f9  ldr x0, [x0, #0x10]
0x06A9A770: c0035fd6  ret

; RVA 0x6A9A774 | public void set_ConsumerEntity(Entity value) { }
; bytes=8 sha256=fa0f14d59f332a02a77306aee8a138a23f2f6ded8adf3356aa9a8d24299c023b status=arm64_complete_bound indexed_start=True
0x06A9A774: 010c01f8  str x1, [x0, #0x10]!
0x06A9A778: 93981b17  b #0x31809c4

; RVA 0x6A9A77C | public Entity get_ConsumedEntity() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x06A9A77C: 000c40f9  ldr x0, [x0, #0x18]
0x06A9A780: c0035fd6  ret

; RVA 0x6A9A784 | public void set_ConsumedEntity(Entity value) { }
; bytes=8 sha256=06585895d49f9ce0a3cc9689c64dc0d81c963cdb0d862e13667ca8f729df8e8b status=arm64_complete_bound indexed_start=True
0x06A9A784: 018c01f8  str x1, [x0, #0x18]!
0x06A9A788: 8f981b17  b #0x31809c4

; RVA 0x6A9A78C | public int get_TargetPosition() { }
; bytes=8 sha256=1f31d5ff0e22c7c2e3b958e4e0186cb71a2e67a614d53dd8d744824fcd4b1d53 status=arm64_complete_bound indexed_start=True
0x06A9A78C: 002040b9  ldr w0, [x0, #0x20]
0x06A9A790: c0035fd6  ret

; RVA 0x6A9A794 | public void set_TargetPosition(int value) { }
; bytes=8 sha256=f5044c26609fdbec3c7736771b22cfdf72c42bcc825f0051ef500d8f88aaa62e status=arm64_complete_bound indexed_start=True
0x06A9A794: 012000b9  str w1, [x0, #0x20]
0x06A9A798: c0035fd6  ret

; RVA 0x6A9A79C | public int get_SourcePosition() { }
; bytes=8 sha256=a2e28d6b3f73d0b0251bc7d259573fb064536ce8240cdf9c1eb3c614e9c5fd54 status=arm64_complete_bound indexed_start=True
0x06A9A79C: 002440b9  ldr w0, [x0, #0x24]
0x06A9A7A0: c0035fd6  ret

; RVA 0x6A9A7A4 | public void set_SourcePosition(int value) { }
; bytes=8 sha256=789d7b57c17b823d5e5cd288cb3fa3ae4d22145bd1e8a59998e7d459d1ce427b status=arm64_complete_bound indexed_start=True
0x06A9A7A4: 012400b9  str w1, [x0, #0x24]
0x06A9A7A8: c0035fd6  ret

; RVA 0x6A9A7AC | public void .ctor() { }
; bytes=8 sha256=bdec31228019976c087fac399556b16d6ea60668be1b13da574f7ba47c3b4f6a status=arm64_complete_bound indexed_start=True
0x06A9A7AC: e1031faa  mov x1, xzr
0x06A9A7B0: 93ffb017  b #0x56da5fc

