; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 247 MergeEngine.Signal.Inventory.TryRemoveInventoryItemSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x5FF40F8 | public int get_SlotIndex() { }
; bytes=8 sha256=6f1929ee2376e6ada94db6d2aafe012dfc8382613e73b99aea0c7dea270fac13 status=arm64_complete_bound indexed_start=True
0x05FF40F8: 001040b9  ldr w0, [x0, #0x10]
0x05FF40FC: c0035fd6  ret

; RVA 0x5FF4100 | public InventorySlotType get_SlotType() { }
; bytes=8 sha256=ca9be5891608b757b7bc8d84905b452237de4af4115e73ad7cd6348b92859bf1 status=arm64_complete_bound indexed_start=True
0x05FF4100: 001440b9  ldr w0, [x0, #0x14]
0x05FF4104: c0035fd6  ret

; RVA 0x5FF4108 | public void .ctor(int slotIndex, InventorySlotType slotType) { }
; bytes=44 sha256=7f0d3a40ba21e71f19596a902f49bec12eea0735c31df96ed566a0c77ebb581b status=arm64_complete_bound indexed_start=True
0x05FF4108: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x05FF410C: f44f01a9  stp x20, x19, [sp, #0x10]
0x05FF4110: f403012a  mov w20, w1
0x05FF4114: e1031faa  mov x1, xzr
0x05FF4118: f303022a  mov w19, w2
0x05FF411C: f50300aa  mov x21, x0
0x05FF4120: 3799db97  bl #0x56da5fc
0x05FF4124: b44e0229  stp w20, w19, [x21, #0x10]
0x05FF4128: f44f41a9  ldp x20, x19, [sp, #0x10]
0x05FF412C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x05FF4130: c0035fd6  ret

