; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 231 MergeEngine.Signal.Items.ItemUnlockStartedSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x5FF3AF0 | public void .ctor(IMergeItem item, int level) { }
; bytes=60 sha256=b7f99d28750754ff39c7c4589611d57714d83027e1ce13077571136abab9064c status=arm64_complete_bound indexed_start=True
0x05FF3AF0: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x05FF3AF4: f44f01a9  stp x20, x19, [sp, #0x10]
0x05FF3AF8: f40301aa  mov x20, x1
0x05FF3AFC: e1031faa  mov x1, xzr
0x05FF3B00: f303022a  mov w19, w2
0x05FF3B04: f50300aa  mov x21, x0
0x05FF3B08: bd9adb97  bl #0x56da5fc
0x05FF3B0C: b40e01f8  str x20, [x21, #0x10]!
0x05FF3B10: e00315aa  mov x0, x21
0x05FF3B14: e10314aa  mov x1, x20
0x05FF3B18: ab334697  bl #0x31809c4
0x05FF3B1C: b30a00b9  str w19, [x21, #8]
0x05FF3B20: f44f41a9  ldp x20, x19, [sp, #0x10]
0x05FF3B24: fe57c2a8  ldp x30, x21, [sp], #0x20
0x05FF3B28: c0035fd6  ret

