; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 233 MergeEngine.Signal.Items.MergeItemDiscoveredSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x5FF3BA8 | public void .ctor(IMergeItem item) { }
; bytes=48 sha256=459e0646e413111ccc23e6d002d37cdecdd55f444e83663a445227d9b335e967 status=arm64_complete_bound indexed_start=True
0x05FF3BA8: fe0f1ef8  str x30, [sp, #-0x20]!
0x05FF3BAC: f44f01a9  stp x20, x19, [sp, #0x10]
0x05FF3BB0: f30301aa  mov x19, x1
0x05FF3BB4: e1031faa  mov x1, xzr
0x05FF3BB8: f40300aa  mov x20, x0
0x05FF3BBC: 909adb97  bl #0x56da5fc
0x05FF3BC0: 930e01f8  str x19, [x20, #0x10]!
0x05FF3BC4: e00314aa  mov x0, x20
0x05FF3BC8: e10313aa  mov x1, x19
0x05FF3BCC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x05FF3BD0: fe0742f8  ldr x30, [sp], #0x20
0x05FF3BD4: 7c334617  b #0x31809c4

