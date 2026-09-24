; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 245 MergeEngine.Signal.Inventory.ItemRemovedFromInventorySignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x5FF4004 | public int get_SlotIndex() { }
; bytes=8 sha256=a2e28d6b3f73d0b0251bc7d259573fb064536ce8240cdf9c1eb3c614e9c5fd54 status=arm64_complete_bound indexed_start=True
0x05FF4004: 002440b9  ldr w0, [x0, #0x24]
0x05FF4008: c0035fd6  ret

; RVA 0x5FF400C | public string get_ItemId() { }
; bytes=8 sha256=c0b9896d6c3d8aacf384c0d0cf5d897e84f621efe31cc89c980be348eb9c6614 status=arm64_complete_bound indexed_start=True
0x05FF400C: 001440f9  ldr x0, [x0, #0x28]
0x05FF4010: c0035fd6  ret

; RVA 0x5FF4014 | public Nullable<int> get_BoardItemIndex() { }
; bytes=8 sha256=6b819324b4a3bc2d390c83c7fe02ea41a1f57ae5d4f2a9b0c9256341a5b8d37f status=arm64_complete_bound indexed_start=True
0x05FF4014: 001840f9  ldr x0, [x0, #0x30]
0x05FF4018: c0035fd6  ret

; RVA 0x5FF401C | public Nullable<int> get_StackSize() { }
; bytes=8 sha256=095bb56e13b6dfde16ade0b592279392884c282a7c7810cb58472b839de552de status=arm64_complete_bound indexed_start=True
0x05FF401C: 001c40f9  ldr x0, [x0, #0x38]
0x05FF4020: c0035fd6  ret

; RVA 0x5FF4024 | public void .ctor(string itemId, Nullable<int> boardItemIndex, int slotIndex, int availableSlots, int inventoryCapacity, int freeTilesOnBoard, InventorySlotType type, int numNewProducersSlots, Nullable<int> stackSize) { }
; bytes=132 sha256=fcff849c4f04aab3f8438dbb14cfeb7c4f6bffadc5e6e56420a2244e952433bb status=arm64_complete_bound indexed_start=True
0x05FF4024: fe0f1af8  str x30, [sp, #-0x60]!
0x05FF4028: fc6f01a9  stp x28, x27, [sp, #0x10]
0x05FF402C: fa6702a9  stp x26, x25, [sp, #0x20]
0x05FF4030: f85f03a9  stp x24, x23, [sp, #0x30]
0x05FF4034: f65704a9  stp x22, x21, [sp, #0x40]
0x05FF4038: f44f05a9  stp x20, x19, [sp, #0x50]
0x05FF403C: fb3740f9  ldr x27, [sp, #0x68]
0x05FF4040: fc6340b9  ldr w28, [sp, #0x60]
0x05FF4044: f90301aa  mov x25, x1
0x05FF4048: e1031faa  mov x1, xzr
0x05FF404C: f303072a  mov w19, w7
0x05FF4050: f403062a  mov w20, w6
0x05FF4054: f503052a  mov w21, w5
0x05FF4058: f603042a  mov w22, w4
0x05FF405C: f703032a  mov w23, w3
0x05FF4060: f80302aa  mov x24, x2
0x05FF4064: fa0300aa  mov x26, x0
0x05FF4068: 6599db97  bl #0x56da5fc
0x05FF406C: 598f02f8  str x25, [x26, #0x28]!
0x05FF4070: e0031aaa  mov x0, x26
0x05FF4074: e10319aa  mov x1, x25
0x05FF4078: 56573d29  stp w22, w21, [x26, #-0x18]
0x05FF407C: 544f3e29  stp w20, w19, [x26, #-0x10]
0x05FF4080: 5c5f3f29  stp w28, w23, [x26, #-8]
0x05FF4084: 50324697  bl #0x31809c4
0x05FF4088: 58ef00a9  stp x24, x27, [x26, #8]
0x05FF408C: f44f45a9  ldp x20, x19, [sp, #0x50]
0x05FF4090: f65744a9  ldp x22, x21, [sp, #0x40]
0x05FF4094: f85f43a9  ldp x24, x23, [sp, #0x30]
0x05FF4098: fa6742a9  ldp x26, x25, [sp, #0x20]
0x05FF409C: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x05FF40A0: fe0746f8  ldr x30, [sp], #0x60
0x05FF40A4: c0035fd6  ret

