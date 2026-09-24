; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 228 MergeEngine.Signal.Items.ItemSoldSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x5FF3A20 | public Reward get_RewardForSelling() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x05FF3A20: 001040f9  ldr x0, [x0, #0x20]
0x05FF3A24: c0035fd6  ret

; RVA 0x5FF3A28 | public void .ctor(IMergeItem item, int level, Reward reward) { }
; bytes=84 sha256=64b20507b14156e300eeb4611ba3a8ffed974380a337c9a263b1d7cc48e2f853 status=arm64_complete_bound indexed_start=True
0x05FF3A28: fe0f1df8  str x30, [sp, #-0x30]!
0x05FF3A2C: f65701a9  stp x22, x21, [sp, #0x10]
0x05FF3A30: f44f02a9  stp x20, x19, [sp, #0x20]
0x05FF3A34: f50301aa  mov x21, x1
0x05FF3A38: e1031faa  mov x1, xzr
0x05FF3A3C: f30303aa  mov x19, x3
0x05FF3A40: f403022a  mov w20, w2
0x05FF3A44: f60300aa  mov x22, x0
0x05FF3A48: ed9adb97  bl #0x56da5fc
0x05FF3A4C: e00316aa  mov x0, x22
0x05FF3A50: 150c01f8  str x21, [x0, #0x10]!
0x05FF3A54: e10315aa  mov x1, x21
0x05FF3A58: db334697  bl #0x31809c4
0x05FF3A5C: d30e02f8  str x19, [x22, #0x20]!
0x05FF3A60: d4821fb8  stur w20, [x22, #-8]
0x05FF3A64: e00316aa  mov x0, x22
0x05FF3A68: e10313aa  mov x1, x19
0x05FF3A6C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x05FF3A70: f65741a9  ldp x22, x21, [sp, #0x10]
0x05FF3A74: fe0743f8  ldr x30, [sp], #0x30
0x05FF3A78: d3334617  b #0x31809c4

