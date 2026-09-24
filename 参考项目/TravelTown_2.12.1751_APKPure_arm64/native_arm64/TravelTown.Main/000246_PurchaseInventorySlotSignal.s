; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 246 MergeEngine.Signal.Inventory.PurchaseInventorySlotSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x5FF40A8 | public void .ctor(int availableSlots, int inventoryCapacity, int resourceAmountHc, int freeTilesOnBoard, InventorySlotType type) { }
; bytes=80 sha256=da9c4bb6f2d3d7746c6216505aa73d04dcdf82111d5d7c9f298b1b996b3d0816 status=arm64_complete_bound indexed_start=True
0x05FF40A8: fe0f1cf8  str x30, [sp, #-0x40]!
0x05FF40AC: f85f01a9  stp x24, x23, [sp, #0x10]
0x05FF40B0: f65702a9  stp x22, x21, [sp, #0x20]
0x05FF40B4: f44f03a9  stp x20, x19, [sp, #0x30]
0x05FF40B8: f703012a  mov w23, w1
0x05FF40BC: e1031faa  mov x1, xzr
0x05FF40C0: f303052a  mov w19, w5
0x05FF40C4: f403042a  mov w20, w4
0x05FF40C8: f503032a  mov w21, w3
0x05FF40CC: f603022a  mov w22, w2
0x05FF40D0: f80300aa  mov x24, x0
0x05FF40D4: 4a99db97  bl #0x56da5fc
0x05FF40D8: 175b0229  stp w23, w22, [x24, #0x10]
0x05FF40DC: 144f0329  stp w20, w19, [x24, #0x18]
0x05FF40E0: 152300b9  str w21, [x24, #0x20]
0x05FF40E4: f44f43a9  ldp x20, x19, [sp, #0x30]
0x05FF40E8: f65742a9  ldp x22, x21, [sp, #0x20]
0x05FF40EC: f85f41a9  ldp x24, x23, [sp, #0x10]
0x05FF40F0: fe0744f8  ldr x30, [sp], #0x40
0x05FF40F4: c0035fd6  ret

