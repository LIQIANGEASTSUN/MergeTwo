; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 244 MergeEngine.Signal.Inventory.ItemAmountInventoryBaseSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x5FF3FB4 | public void .ctor(int availableSlots, int inventoryCapacity, int freeTilesOnBoard, InventorySlotType type, int numNewProducerSlots) { }
; bytes=80 sha256=5265a37755cbb34cf83f30394fa8c87283b8858828de2a0a936e27238eb18bb6 status=arm64_complete_bound indexed_start=True
0x05FF3FB4: fe0f1cf8  str x30, [sp, #-0x40]!
0x05FF3FB8: f85f01a9  stp x24, x23, [sp, #0x10]
0x05FF3FBC: f65702a9  stp x22, x21, [sp, #0x20]
0x05FF3FC0: f44f03a9  stp x20, x19, [sp, #0x30]
0x05FF3FC4: f703012a  mov w23, w1
0x05FF3FC8: e1031faa  mov x1, xzr
0x05FF3FCC: f303052a  mov w19, w5
0x05FF3FD0: f403042a  mov w20, w4
0x05FF3FD4: f503032a  mov w21, w3
0x05FF3FD8: f603022a  mov w22, w2
0x05FF3FDC: f80300aa  mov x24, x0
0x05FF3FE0: 8799db97  bl #0x56da5fc
0x05FF3FE4: 175b0229  stp w23, w22, [x24, #0x10]
0x05FF3FE8: 15530329  stp w21, w20, [x24, #0x18]
0x05FF3FEC: 132300b9  str w19, [x24, #0x20]
0x05FF3FF0: f44f43a9  ldp x20, x19, [sp, #0x30]
0x05FF3FF4: f65742a9  ldp x22, x21, [sp, #0x20]
0x05FF3FF8: f85f41a9  ldp x24, x23, [sp, #0x10]
0x05FF3FFC: fe0744f8  ldr x30, [sp], #0x40
0x05FF4000: c0035fd6  ret

