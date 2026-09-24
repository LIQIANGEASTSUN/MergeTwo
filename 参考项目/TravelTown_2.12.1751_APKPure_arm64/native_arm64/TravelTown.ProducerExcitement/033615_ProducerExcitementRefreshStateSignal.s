; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 33615 Merger.ProducerExcitement.Signals.ProducerExcitementRefreshStateSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6AD4EB4 | public ProducerExcitementCycleDataResponse get_CycleData() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06AD4EB4: 000840f9  ldr x0, [x0, #0x10]
0x06AD4EB8: c0035fd6  ret

; RVA 0x6AD4EBC | public void .ctor() { }
; bytes=8 sha256=42625c3f97ffb962dd500ed5ec71852b0e3cc404b8a183a7d53d023922af299c status=arm64_complete_bound indexed_start=True
0x06AD4EBC: e1031faa  mov x1, xzr
0x06AD4EC0: cf15b017  b #0x56da5fc

; RVA 0x6AD4EC4 | public void .ctor(ProducerExcitementCycleDataResponse cycleData) { }
; bytes=48 sha256=bb0ad4cc71698f83b8721b484552eb3d5aa11d4c3784d571c40f4198e96d0326 status=arm64_complete_bound indexed_start=True
0x06AD4EC4: fe0f1ef8  str x30, [sp, #-0x20]!
0x06AD4EC8: f44f01a9  stp x20, x19, [sp, #0x10]
0x06AD4ECC: f30301aa  mov x19, x1
0x06AD4ED0: e1031faa  mov x1, xzr
0x06AD4ED4: f40300aa  mov x20, x0
0x06AD4ED8: c915b097  bl #0x56da5fc
0x06AD4EDC: 930e01f8  str x19, [x20, #0x10]!
0x06AD4EE0: e00314aa  mov x0, x20
0x06AD4EE4: e10313aa  mov x1, x19
0x06AD4EE8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06AD4EEC: fe0742f8  ldr x30, [sp], #0x20
0x06AD4EF0: b5ae1a17  b #0x31809c4

