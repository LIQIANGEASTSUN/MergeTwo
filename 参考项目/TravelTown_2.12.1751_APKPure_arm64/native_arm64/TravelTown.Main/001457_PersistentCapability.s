; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1457 MergeEngine.Configuration.Capabilities.PersistentCapability
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6011858 | public string get_PersistentStoreKey() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06011858: 000840f9  ldr x0, [x0, #0x10]
0x0601185C: c0035fd6  ret

; RVA 0x6011860 | public bool get_UseLiveOpsPrefix() { }
; bytes=8 sha256=e4c1a301829bf7e242097004cb25fc213af6f8bee45f49527b010f07bce68f54 status=arm64_complete_bound indexed_start=True
0x06011860: 00604039  ldrb w0, [x0, #0x18]
0x06011864: c0035fd6  ret

; RVA 0x6011868 | public void .ctor(string persistentStoreKey, bool useLiveOpsPrefix = False) { }
; bytes=60 sha256=a58e2ee8064c4ac0f93ca9f2202a3acb3ec6480295ad5d7ac440263d9bcd25af status=arm64_complete_bound indexed_start=True
0x06011868: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0601186C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06011870: f30301aa  mov x19, x1
0x06011874: e1031faa  mov x1, xzr
0x06011878: f40300aa  mov x20, x0
0x0601187C: 55000012  and w21, w2, #1
0x06011880: 5f23db97  bl #0x56da5fc
0x06011884: 930e01f8  str x19, [x20, #0x10]!
0x06011888: e00314aa  mov x0, x20
0x0601188C: e10313aa  mov x1, x19
0x06011890: 4dbc4597  bl #0x31809c4
0x06011894: 95220039  strb w21, [x20, #8]
0x06011898: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0601189C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x060118A0: c0035fd6  ret

