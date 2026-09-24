; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 218 MergeEngine.Signal.Items.FailedToRemoveItemFromInventorySignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x5FF3600 | public int get_SlotIndex() { }
; bytes=8 sha256=6f1929ee2376e6ada94db6d2aafe012dfc8382613e73b99aea0c7dea270fac13 status=arm64_complete_bound indexed_start=True
0x05FF3600: 001040b9  ldr w0, [x0, #0x10]
0x05FF3604: c0035fd6  ret

; RVA 0x5FF3608 | public InventorySlotType get_SlotType() { }
; bytes=8 sha256=ca9be5891608b757b7bc8d84905b452237de4af4115e73ad7cd6348b92859bf1 status=arm64_complete_bound indexed_start=True
0x05FF3608: 001440b9  ldr w0, [x0, #0x14]
0x05FF360C: c0035fd6  ret

; RVA 0x5FF3610 | public FloatingTextType get_FloatingTextType() { }
; bytes=8 sha256=50abf56e70bf4ffd353b0c6ed3c4e4880c6169bcd84263b80a4680f2ca7fb9ab status=arm64_complete_bound indexed_start=True
0x05FF3610: 001840b9  ldr w0, [x0, #0x18]
0x05FF3614: c0035fd6  ret

; RVA 0x5FF3618 | public void .ctor(int slotIndex, InventorySlotType type, FloatingTextType floatingTextType) { }
; bytes=60 sha256=29681d15dd864913c9afb7ec4ebc778d05d7e2f6d29695dcd8ddd080ae2fda11 status=arm64_complete_bound indexed_start=True
0x05FF3618: fe0f1df8  str x30, [sp, #-0x30]!
0x05FF361C: f65701a9  stp x22, x21, [sp, #0x10]
0x05FF3620: f44f02a9  stp x20, x19, [sp, #0x20]
0x05FF3624: f503012a  mov w21, w1
0x05FF3628: e1031faa  mov x1, xzr
0x05FF362C: f303032a  mov w19, w3
0x05FF3630: f403022a  mov w20, w2
0x05FF3634: f60300aa  mov x22, x0
0x05FF3638: f19bdb97  bl #0x56da5fc
0x05FF363C: d4ce0229  stp w20, w19, [x22, #0x14]
0x05FF3640: d51200b9  str w21, [x22, #0x10]
0x05FF3644: f44f42a9  ldp x20, x19, [sp, #0x20]
0x05FF3648: f65741a9  ldp x22, x21, [sp, #0x10]
0x05FF364C: fe0743f8  ldr x30, [sp], #0x30
0x05FF3650: c0035fd6  ret

