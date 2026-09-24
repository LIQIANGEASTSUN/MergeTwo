; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 242 MergeEngine.Signal.Inventory.InventoryItemAddedSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x5FF3ED0 | public void .ctor(string itemId, int availableSlots, int inventoryCapacity, int freeTilesOnBoard, InventorySlotType type) { }
; bytes=64 sha256=7a4fe445a1eff6f58a4df8f791a73785305711be68781d747ed1ea0c3a426eb7 status=arm64_complete_bound indexed_start=True
0x05FF3ED0: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x05FF3ED4: f65701a9  stp x22, x21, [sp, #0x10]
0x05FF3ED8: f44f02a9  stp x20, x19, [sp, #0x20]
0x05FF3EDC: e1031faa  mov x1, xzr
0x05FF3EE0: f303052a  mov w19, w5
0x05FF3EE4: f403042a  mov w20, w4
0x05FF3EE8: f503032a  mov w21, w3
0x05FF3EEC: f603022a  mov w22, w2
0x05FF3EF0: f70300aa  mov x23, x0
0x05FF3EF4: c299db97  bl #0x56da5fc
0x05FF3EF8: f6560229  stp w22, w21, [x23, #0x10]
0x05FF3EFC: f44e0329  stp w20, w19, [x23, #0x18]
0x05FF3F00: f44f42a9  ldp x20, x19, [sp, #0x20]
0x05FF3F04: f65741a9  ldp x22, x21, [sp, #0x10]
0x05FF3F08: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x05FF3F0C: c0035fd6  ret

