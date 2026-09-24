; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 931 .SplitSystem.SplitContext
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6786D24 | public SplitComponent get_SplitItem() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06786D24: 000840f9  ldr x0, [x0, #0x10]
0x06786D28: c0035fd6  ret

; RVA 0x6786D2C | public void set_SplitItem(SplitComponent value) { }
; bytes=8 sha256=aeae90903bd88560885f7aeb9ca51d14cb2203e305fd8c6b4802467ca8494e34 status=arm64_complete_bound indexed_start=True
0x06786D2C: 010c01f8  str x1, [x0, #0x10]!
0x06786D30: 25e72717  b #0x31809c4

; RVA 0x6786D34 | public PositionComponent get_SplitTarget() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x06786D34: 000c40f9  ldr x0, [x0, #0x18]
0x06786D38: c0035fd6  ret

; RVA 0x6786D3C | public void set_SplitTarget(PositionComponent value) { }
; bytes=8 sha256=9a358624fd4632f189e7f9a53e94f84fc3f5b20eb3a1f8d9c29011bc50f01dab status=arm64_complete_bound indexed_start=True
0x06786D3C: 018c01f8  str x1, [x0, #0x18]!
0x06786D40: 21e72717  b #0x31809c4

; RVA 0x6786D44 | public BoardItemPosition get_From() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x06786D44: 001040f9  ldr x0, [x0, #0x20]
0x06786D48: c0035fd6  ret

; RVA 0x6786D4C | public void set_From(BoardItemPosition value) { }
; bytes=8 sha256=e2049e634203975b3ab577fcedd5fcebf7eb16547f254b69f38a7efd4d28f8c7 status=arm64_complete_bound indexed_start=True
0x06786D4C: 011000f9  str x1, [x0, #0x20]
0x06786D50: c0035fd6  ret

; RVA 0x6786D54 | public BoardItemPosition get_To() { }
; bytes=8 sha256=c0b9896d6c3d8aacf384c0d0cf5d897e84f621efe31cc89c980be348eb9c6614 status=arm64_complete_bound indexed_start=True
0x06786D54: 001440f9  ldr x0, [x0, #0x28]
0x06786D58: c0035fd6  ret

; RVA 0x6786D5C | public void set_To(BoardItemPosition value) { }
; bytes=8 sha256=fb47a7abf4cba0cd5311b8b425d77a409859dd7b4fd92dbf5d99d451f425b80c status=arm64_complete_bound indexed_start=True
0x06786D5C: 011400f9  str x1, [x0, #0x28]
0x06786D60: c0035fd6  ret

; RVA 0x6786D64 | public BoardItemPosition get_SplitterPosition() { }
; bytes=8 sha256=6b819324b4a3bc2d390c83c7fe02ea41a1f57ae5d4f2a9b0c9256341a5b8d37f status=arm64_complete_bound indexed_start=True
0x06786D64: 001840f9  ldr x0, [x0, #0x30]
0x06786D68: c0035fd6  ret

; RVA 0x6786D6C | public void set_SplitterPosition(BoardItemPosition value) { }
; bytes=8 sha256=6215e1bbd3c8ac0311d5a5d6e67e46e033efc47a193976238e4ff03101d8acf6 status=arm64_complete_bound indexed_start=True
0x06786D6C: 011800f9  str x1, [x0, #0x30]
0x06786D70: c0035fd6  ret

; RVA 0x6786D74 | public IMergeItem get_TargetItem() { }
; bytes=8 sha256=095bb56e13b6dfde16ade0b592279392884c282a7c7810cb58472b839de552de status=arm64_complete_bound indexed_start=True
0x06786D74: 001c40f9  ldr x0, [x0, #0x38]
0x06786D78: c0035fd6  ret

; RVA 0x6786D7C | public void set_TargetItem(IMergeItem value) { }
; bytes=8 sha256=eaaeb0928404dbd48673a1aa9bf87eb6e7680f76daa2feea90efc293c903dae6 status=arm64_complete_bound indexed_start=True
0x06786D7C: 018c03f8  str x1, [x0, #0x38]!
0x06786D80: 11e72717  b #0x31809c4

; RVA 0x6786D84 | public IMergeItem get_PreviousItem() { }
; bytes=8 sha256=ac1915dbf8ae56825a9e0c79c21190a655d4b32b9c10f299546aad7c9ecadc66 status=arm64_complete_bound indexed_start=True
0x06786D84: 002040f9  ldr x0, [x0, #0x40]
0x06786D88: c0035fd6  ret

; RVA 0x6786D8C | public void set_PreviousItem(IMergeItem value) { }
; bytes=8 sha256=e8e7f1495ed0afafb467f109b11922a9270ed0b6cea574784aa8730197ab4516 status=arm64_complete_bound indexed_start=True
0x06786D8C: 010c04f8  str x1, [x0, #0x40]!
0x06786D90: 0de72717  b #0x31809c4

; RVA 0x6786D94 | public IMergeItem get_SplitterMergeItem() { }
; bytes=8 sha256=62c64bd585db7a91917843362bb75aa8dd20b002bce4874891b0b3ec8fd242b9 status=arm64_complete_bound indexed_start=True
0x06786D94: 002440f9  ldr x0, [x0, #0x48]
0x06786D98: c0035fd6  ret

; RVA 0x6786D9C | public void set_SplitterMergeItem(IMergeItem value) { }
; bytes=8 sha256=2bb1fafa88727ae17367917774e1ed88d9785f2919e63bc6f95209ff7b6c3bf2 status=arm64_complete_bound indexed_start=True
0x06786D9C: 018c04f8  str x1, [x0, #0x48]!
0x06786DA0: 09e72717  b #0x31809c4

; RVA 0x6786DA4 | public StackingComponent get_SplitterStacking() { }
; bytes=8 sha256=989bb1a041c93e09fa2954014eaba1a46b19128664c6bbb210694e0989f09532 status=arm64_complete_bound indexed_start=True
0x06786DA4: 002840f9  ldr x0, [x0, #0x50]
0x06786DA8: c0035fd6  ret

; RVA 0x6786DAC | public void set_SplitterStacking(StackingComponent value) { }
; bytes=8 sha256=ddd173f72114412e30cd8e1601d222401b69270ac7ade7c6cd4aaee62fb46296 status=arm64_complete_bound indexed_start=True
0x06786DAC: 010c05f8  str x1, [x0, #0x50]!
0x06786DB0: 05e72717  b #0x31809c4

; RVA 0x6786DB4 | public bool get_IsBoardFull() { }
; bytes=8 sha256=20c3cf3b61eb3d69a1f0bdcc870fb1ff285f3f542948523ae405f8f151895ec9 status=arm64_complete_bound indexed_start=True
0x06786DB4: 00604139  ldrb w0, [x0, #0x58]
0x06786DB8: c0035fd6  ret

; RVA 0x6786DBC | public void set_IsBoardFull(bool value) { }
; bytes=12 sha256=d8ea7f6f998535c9482570601b6a993f93209dc1c5dd73a78b627b7e309daaaf status=arm64_complete_bound indexed_start=True
0x06786DBC: 28000012  and w8, w1, #1
0x06786DC0: 08600139  strb w8, [x0, #0x58]
0x06786DC4: c0035fd6  ret

; RVA 0x6786DC8 | public bool get_IntoSplitter() { }
; bytes=8 sha256=cb271f82095329043860f0548cf7f0c9dad3a1d609a5848427ac3fb2d7d4b48f status=arm64_complete_bound indexed_start=True
0x06786DC8: 00644139  ldrb w0, [x0, #0x59]
0x06786DCC: c0035fd6  ret

; RVA 0x6786DD0 | public void set_IntoSplitter(bool value) { }
; bytes=12 sha256=e7ac7e7127325acb7b51cd4828f4def74ed66cc886344938227fef02b51f0e8a status=arm64_complete_bound indexed_start=True
0x06786DD0: 28000012  and w8, w1, #1
0x06786DD4: 08640139  strb w8, [x0, #0x59]
0x06786DD8: c0035fd6  ret

; RVA 0x6786518 | public void .ctor() { }
; bytes=8 sha256=b0397d05890f85a8cf67982ff6ece3d6bbe00440c6c8b5763fab9f3a71ac986c status=arm64_complete_bound indexed_start=True
0x06786518: e1031faa  mov x1, xzr
0x0678651C: 3850bd17  b #0x56da5fc

