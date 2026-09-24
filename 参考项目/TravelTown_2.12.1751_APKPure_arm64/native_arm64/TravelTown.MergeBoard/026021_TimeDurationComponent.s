; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 26021 Merger.MergeBoard.Components.TimeDurationComponent
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9C4F4 | public double get_Timeleft() { }
; bytes=8 sha256=1c5e73c85446f7f7b1aea752c4751ce39d32328c7d290dbc33e82e91f749e9e0 status=arm64_complete_bound indexed_start=True
0x06A9C4F4: 000040fd  ldr d0, [x0]
0x06A9C4F8: c0035fd6  ret

; RVA 0x6A9C4FC | public void set_Timeleft(double value) { }
; bytes=8 sha256=bfab8b3ca678dd2dcafaa7c2b96a24088bc0987e09cdce8161afd9f63af4b645 status=arm64_complete_bound indexed_start=True
0x06A9C4FC: 000000fd  str d0, [x0]
0x06A9C500: c0035fd6  ret

; RVA 0x6A9C504 | public bool get_Active() { }
; bytes=8 sha256=04d63990d737e9b1c54f43eb89304f2b27873d85e0b71a0f00dd4109dbb6e578 status=arm64_complete_bound indexed_start=True
0x06A9C504: 00204039  ldrb w0, [x0, #8]
0x06A9C508: c0035fd6  ret

; RVA 0x6A9C50C | public void set_Active(bool value) { }
; bytes=12 sha256=1a52b2ce3030e6bbaa34f05cd1456a71fee8ab8108434aad2f6883181b3ed3ff status=arm64_complete_bound indexed_start=True
0x06A9C50C: 28000012  and w8, w1, #1
0x06A9C510: 08200039  strb w8, [x0, #8]
0x06A9C514: c0035fd6  ret

; RVA 0x6A9C518 | public double get_Duration() { }
; bytes=8 sha256=746df51fc535a22786339edc5eca06ad9f3415878d9b4bd2727a1eb89186a6f9 status=arm64_complete_bound indexed_start=True
0x06A9C518: 000840fd  ldr d0, [x0, #0x10]
0x06A9C51C: c0035fd6  ret

; RVA 0x6A9C520 | public void set_Duration(double value) { }
; bytes=8 sha256=51fc0c2603f8a8f780a20c434e261e7218bdb1e2106f40a81873f3d14359a067 status=arm64_complete_bound indexed_start=True
0x06A9C520: 000800fd  str d0, [x0, #0x10]
0x06A9C524: c0035fd6  ret

; RVA 0x6A9C528 | public bool get_IgnoreBoardSecondsForThisTick() { }
; bytes=8 sha256=e4c1a301829bf7e242097004cb25fc213af6f8bee45f49527b010f07bce68f54 status=arm64_complete_bound indexed_start=True
0x06A9C528: 00604039  ldrb w0, [x0, #0x18]
0x06A9C52C: c0035fd6  ret

; RVA 0x6A9C530 | public void set_IgnoreBoardSecondsForThisTick(bool value) { }
; bytes=12 sha256=44e17fb1eb8f8ff9cdde629de5faf61cf17316e0f5f154eccbf27e368f8511ec status=arm64_complete_bound indexed_start=True
0x06A9C530: 28000012  and w8, w1, #1
0x06A9C534: 08600039  strb w8, [x0, #0x18]
0x06A9C538: c0035fd6  ret

