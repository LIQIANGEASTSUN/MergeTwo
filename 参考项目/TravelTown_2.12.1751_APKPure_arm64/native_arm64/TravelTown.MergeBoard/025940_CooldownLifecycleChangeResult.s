; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25940 Merger.MergeBoard.Data.TickResultArgs.CooldownLifecycleChangeResult
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9A2B0 | public bool get_CooldownStarted() { }
; bytes=8 sha256=0e6de766d449fe554507239b6a7ad2c85106a33b67dea05075aa7cbb025dafb1 status=arm64_complete_bound indexed_start=True
0x06A9A2B0: 00404039  ldrb w0, [x0, #0x10]
0x06A9A2B4: c0035fd6  ret

; RVA 0x6A9A2B8 | public void set_CooldownStarted(bool value) { }
; bytes=12 sha256=9906fb0bb75f2a4f1e046af27730d9706441c14db85d4c11511dbf71d58892f3 status=arm64_complete_bound indexed_start=True
0x06A9A2B8: 28000012  and w8, w1, #1
0x06A9A2BC: 08400039  strb w8, [x0, #0x10]
0x06A9A2C0: c0035fd6  ret

; RVA 0x6A9A2C4 | public void .ctor() { }
; bytes=8 sha256=f6ca89a36902cc1d658acf5b4f45ed5ea5e1fb7e14e2b9ba33beb4ec6fa2889e status=arm64_complete_bound indexed_start=True
0x06A9A2C4: e1031faa  mov x1, xzr
0x06A9A2C8: cd00b117  b #0x56da5fc

