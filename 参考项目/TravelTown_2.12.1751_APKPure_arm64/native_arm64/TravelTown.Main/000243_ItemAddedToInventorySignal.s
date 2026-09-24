; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 243 MergeEngine.Signal.Inventory.ItemAddedToInventorySignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x5FF3F10 | public int get_SlotIndex() { }
; bytes=8 sha256=615cc4d4d19713a7b9ea6b3843c274d040126c740088a3e2d95ffe19ba04c269 status=arm64_complete_bound indexed_start=True
0x05FF3F10: 003040b9  ldr w0, [x0, #0x30]
0x05FF3F14: c0035fd6  ret

; RVA 0x5FF3F18 | public Nullable<int> get_BoardItemIndex() { }
; bytes=8 sha256=541b4add2f26a66d5d754944cfdd16e9c910020f30bd82d5566f035c5ea381b7 status=arm64_complete_bound indexed_start=True
0x05FF3F18: 004043f8  ldur x0, [x0, #0x34]
0x05FF3F1C: c0035fd6  ret

; RVA 0x5FF3F20 | public Nullable<int> get_StackSize() { }
; bytes=8 sha256=5c24e42db02651ea1cbb7b8462032e48bd3d07883efd9b6a381321411bb2363a status=arm64_complete_bound indexed_start=True
0x05FF3F20: 00c043f8  ldur x0, [x0, #0x3c]
0x05FF3F24: c0035fd6  ret

; RVA 0x5FF3F28 | public void .ctor(string itemId, Nullable<int> boardItemIndex, int slotIndex, int availableSlots, int inventoryCapacity, int freeTilesOnBoard, InventorySlotType type, int numNewProducers, Nullable<int> stackSize) { }
; bytes=140 sha256=9cb5250ae27de4c9da1eecc8010d29ebb04d1f1e45f2fbbcb6b9cc14fb77e53c status=arm64_complete_bound indexed_start=True
0x05FF3F28: fe0f1af8  str x30, [sp, #-0x60]!
0x05FF3F2C: fc6f01a9  stp x28, x27, [sp, #0x10]
0x05FF3F30: fa6702a9  stp x26, x25, [sp, #0x20]
0x05FF3F34: f85f03a9  stp x24, x23, [sp, #0x30]
0x05FF3F38: f65704a9  stp x22, x21, [sp, #0x40]
0x05FF3F3C: f44f05a9  stp x20, x19, [sp, #0x50]
0x05FF3F40: fb3740f9  ldr x27, [sp, #0x68]
0x05FF3F44: fc6340b9  ldr w28, [sp, #0x60]
0x05FF3F48: f90301aa  mov x25, x1
0x05FF3F4C: e1031faa  mov x1, xzr
0x05FF3F50: f303072a  mov w19, w7
0x05FF3F54: f403062a  mov w20, w6
0x05FF3F58: f503052a  mov w21, w5
0x05FF3F5C: f603042a  mov w22, w4
0x05FF3F60: f703032a  mov w23, w3
0x05FF3F64: f80302aa  mov x24, x2
0x05FF3F68: fa0300aa  mov x26, x0
0x05FF3F6C: a499db97  bl #0x56da5fc
0x05FF3F70: 598f02f8  str x25, [x26, #0x28]!
0x05FF3F74: e0031aaa  mov x0, x26
0x05FF3F78: e10319aa  mov x1, x25
0x05FF3F7C: 56573d29  stp w22, w21, [x26, #-0x18]
0x05FF3F80: 544f3e29  stp w20, w19, [x26, #-0x10]
0x05FF3F84: 5c831fb8  stur w28, [x26, #-8]
0x05FF3F88: 8f324697  bl #0x31809c4
0x05FF3F8C: 58c300f8  stur x24, [x26, #0xc]
0x05FF3F90: 570b00b9  str w23, [x26, #8]
0x05FF3F94: 5b4301f8  stur x27, [x26, #0x14]
0x05FF3F98: f44f45a9  ldp x20, x19, [sp, #0x50]
0x05FF3F9C: f65744a9  ldp x22, x21, [sp, #0x40]
0x05FF3FA0: f85f43a9  ldp x24, x23, [sp, #0x30]
0x05FF3FA4: fa6742a9  ldp x26, x25, [sp, #0x20]
0x05FF3FA8: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x05FF3FAC: fe0746f8  ldr x30, [sp], #0x60
0x05FF3FB0: c0035fd6  ret

