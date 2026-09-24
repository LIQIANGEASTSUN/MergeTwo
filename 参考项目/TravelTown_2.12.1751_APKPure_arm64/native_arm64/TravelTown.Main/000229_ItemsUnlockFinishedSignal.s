; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 229 MergeEngine.Signal.Items.ItemsUnlockFinishedSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x5FF3A7C | public void .ctor(IMergeItem item, int level) { }
; bytes=60 sha256=d0b30398c4e3e02bf540e8fae567acb853b0b883d7aa9c0751fdc8fd6bf21342 status=arm64_complete_bound indexed_start=True
0x05FF3A7C: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x05FF3A80: f44f01a9  stp x20, x19, [sp, #0x10]
0x05FF3A84: f40301aa  mov x20, x1
0x05FF3A88: e1031faa  mov x1, xzr
0x05FF3A8C: f303022a  mov w19, w2
0x05FF3A90: f50300aa  mov x21, x0
0x05FF3A94: da9adb97  bl #0x56da5fc
0x05FF3A98: b40e01f8  str x20, [x21, #0x10]!
0x05FF3A9C: e00315aa  mov x0, x21
0x05FF3AA0: e10314aa  mov x1, x20
0x05FF3AA4: c8334697  bl #0x31809c4
0x05FF3AA8: b30a00b9  str w19, [x21, #8]
0x05FF3AAC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x05FF3AB0: fe57c2a8  ldp x30, x21, [sp], #0x20
0x05FF3AB4: c0035fd6  ret

