; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 7454 Merger.Bubbles.SmarterBubblesStreakData
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x657B5D0 | public int get_StreakCount() { }
; bytes=8 sha256=6f1929ee2376e6ada94db6d2aafe012dfc8382613e73b99aea0c7dea270fac13 status=arm64_complete_bound indexed_start=True
0x0657B5D0: 001040b9  ldr w0, [x0, #0x10]
0x0657B5D4: c0035fd6  ret

; RVA 0x657B5D8 | public void set_StreakCount(int value) { }
; bytes=8 sha256=4f1731a5a3d5539e5c40e4019b837526eaa31ef7b03eb65ceaee7084e15a198b status=arm64_complete_bound indexed_start=True
0x0657B5D8: 011000b9  str w1, [x0, #0x10]
0x0657B5DC: c0035fd6  ret

; RVA 0x657B5E0 | public IMergeGraphItem get_StreakGraph() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x0657B5E0: 000c40f9  ldr x0, [x0, #0x18]
0x0657B5E4: c0035fd6  ret

; RVA 0x657B5E8 | public void set_StreakGraph(IMergeGraphItem value) { }
; bytes=8 sha256=705951ec2d9c1daf409442e9fe1992ca7997cea192d6e8e7e9e97c6dbcc6911d status=arm64_complete_bound indexed_start=True
0x0657B5E8: 018c01f8  str x1, [x0, #0x18]!
0x0657B5EC: f6143017  b #0x31809c4

; RVA 0x657B5F0 | public void .ctor() { }
; bytes=8 sha256=dee042107e65c09eff91baa650b50b0f4efb5d25607e5eb2c37c154fac752c0c status=arm64_complete_bound indexed_start=True
0x0657B5F0: e1031faa  mov x1, xzr
0x0657B5F4: 027cc517  b #0x56da5fc

