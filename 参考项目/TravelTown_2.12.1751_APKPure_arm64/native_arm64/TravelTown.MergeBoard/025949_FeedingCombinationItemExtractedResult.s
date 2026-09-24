; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25949 Merger.MergeBoard.Data.TickResultArgs.FeedingCombinationItemExtractedResult
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9A550 | public Entity get_FeedingEntity() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06A9A550: 000840f9  ldr x0, [x0, #0x10]
0x06A9A554: c0035fd6  ret

; RVA 0x6A9A558 | public void set_FeedingEntity(Entity value) { }
; bytes=8 sha256=a438c5d30d7e8f936474c6441a772e5668a52b7900ee374263bb1124e72dce2d status=arm64_complete_bound indexed_start=True
0x06A9A558: 010c01f8  str x1, [x0, #0x10]!
0x06A9A55C: 1a991b17  b #0x31809c4

; RVA 0x6A9A560 | public Entity get_ExtractedEntity() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x06A9A560: 000c40f9  ldr x0, [x0, #0x18]
0x06A9A564: c0035fd6  ret

; RVA 0x6A9A568 | public void set_ExtractedEntity(Entity value) { }
; bytes=8 sha256=b8aaec0ed7219e8e760e134e6a71fc8905ae4cefc980521c642b6568715b0838 status=arm64_complete_bound indexed_start=True
0x06A9A568: 018c01f8  str x1, [x0, #0x18]!
0x06A9A56C: 16991b17  b #0x31809c4

; RVA 0x6A9A570 | public int get_SourcePosition() { }
; bytes=8 sha256=1f31d5ff0e22c7c2e3b958e4e0186cb71a2e67a614d53dd8d744824fcd4b1d53 status=arm64_complete_bound indexed_start=True
0x06A9A570: 002040b9  ldr w0, [x0, #0x20]
0x06A9A574: c0035fd6  ret

; RVA 0x6A9A578 | public void set_SourcePosition(int value) { }
; bytes=8 sha256=f5044c26609fdbec3c7736771b22cfdf72c42bcc825f0051ef500d8f88aaa62e status=arm64_complete_bound indexed_start=True
0x06A9A578: 012000b9  str w1, [x0, #0x20]
0x06A9A57C: c0035fd6  ret

; RVA 0x6A9A580 | public int get_TargetPosition() { }
; bytes=8 sha256=a2e28d6b3f73d0b0251bc7d259573fb064536ce8240cdf9c1eb3c614e9c5fd54 status=arm64_complete_bound indexed_start=True
0x06A9A580: 002440b9  ldr w0, [x0, #0x24]
0x06A9A584: c0035fd6  ret

; RVA 0x6A9A588 | public void set_TargetPosition(int value) { }
; bytes=8 sha256=789d7b57c17b823d5e5cd288cb3fa3ae4d22145bd1e8a59998e7d459d1ce427b status=arm64_complete_bound indexed_start=True
0x06A9A588: 012400b9  str w1, [x0, #0x24]
0x06A9A58C: c0035fd6  ret

; RVA 0x6A9A590 | public ItemAnalyticsData get_AnalyticsData() { }
; bytes=8 sha256=c0b9896d6c3d8aacf384c0d0cf5d897e84f621efe31cc89c980be348eb9c6614 status=arm64_complete_bound indexed_start=True
0x06A9A590: 001440f9  ldr x0, [x0, #0x28]
0x06A9A594: c0035fd6  ret

; RVA 0x6A9A598 | public void set_AnalyticsData(ItemAnalyticsData value) { }
; bytes=8 sha256=7127fa48fd1392a91a18765d1b2ecd0633c61d1d13dd4904d8b72b15af0a5f84 status=arm64_complete_bound indexed_start=True
0x06A9A598: 018c02f8  str x1, [x0, #0x28]!
0x06A9A59C: 0a991b17  b #0x31809c4

; RVA 0x6A9A5A0 | public void .ctor() { }
; bytes=8 sha256=561f51fe60b7c120a180f1cc7ea7d812cb0576c20ecfd2675eb78802161c5e24 status=arm64_complete_bound indexed_start=True
0x06A9A5A0: e1031faa  mov x1, xzr
0x06A9A5A4: 1600b117  b #0x56da5fc

