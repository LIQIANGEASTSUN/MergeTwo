; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 241 MergeEngine.Signal.Inventory.InventoryBaseSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x5FF3E70 | public int get_AvailableSlots() { }
; bytes=8 sha256=6f1929ee2376e6ada94db6d2aafe012dfc8382613e73b99aea0c7dea270fac13 status=arm64_complete_bound indexed_start=True
0x05FF3E70: 001040b9  ldr w0, [x0, #0x10]
0x05FF3E74: c0035fd6  ret

; RVA 0x5FF3E78 | public int get_InventoryCapacity() { }
; bytes=8 sha256=ca9be5891608b757b7bc8d84905b452237de4af4115e73ad7cd6348b92859bf1 status=arm64_complete_bound indexed_start=True
0x05FF3E78: 001440b9  ldr w0, [x0, #0x14]
0x05FF3E7C: c0035fd6  ret

; RVA 0x5FF3E80 | public int get_FreeTilesOnBoard() { }
; bytes=8 sha256=50abf56e70bf4ffd353b0c6ed3c4e4880c6169bcd84263b80a4680f2ca7fb9ab status=arm64_complete_bound indexed_start=True
0x05FF3E80: 001840b9  ldr w0, [x0, #0x18]
0x05FF3E84: c0035fd6  ret

; RVA 0x5FF3E88 | public InventorySlotType get_Type() { }
; bytes=8 sha256=7a2c484f16193ad2c5617bbe6704b2ccbdcc31004cfa1370a3ba4533f12de7f9 status=arm64_complete_bound indexed_start=True
0x05FF3E88: 001c40b9  ldr w0, [x0, #0x1c]
0x05FF3E8C: c0035fd6  ret

; RVA 0x5FF3E90 | public void .ctor(int availableSlots, int inventoryCapacity, int freeTilesOnBoard, InventorySlotType type) { }
; bytes=64 sha256=ab49d33d01973186748f1c7ada56a77669820e12434e0b2734482b467f9a8d42 status=arm64_complete_bound indexed_start=True
0x05FF3E90: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x05FF3E94: f65701a9  stp x22, x21, [sp, #0x10]
0x05FF3E98: f44f02a9  stp x20, x19, [sp, #0x20]
0x05FF3E9C: f603012a  mov w22, w1
0x05FF3EA0: e1031faa  mov x1, xzr
0x05FF3EA4: f303042a  mov w19, w4
0x05FF3EA8: f403032a  mov w20, w3
0x05FF3EAC: f503022a  mov w21, w2
0x05FF3EB0: f70300aa  mov x23, x0
0x05FF3EB4: d299db97  bl #0x56da5fc
0x05FF3EB8: f6560229  stp w22, w21, [x23, #0x10]
0x05FF3EBC: f44e0329  stp w20, w19, [x23, #0x18]
0x05FF3EC0: f44f42a9  ldp x20, x19, [sp, #0x20]
0x05FF3EC4: f65741a9  ldp x22, x21, [sp, #0x10]
0x05FF3EC8: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x05FF3ECC: c0035fd6  ret

