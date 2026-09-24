; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25983 Merger.MergeBoard.Data.Payload.MergeBoardItemPositionNotificationData
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9AED4 | public void .ctor(int index) { }
; bytes=40 sha256=a3c2fd0d0b1616c7df4f5d33df985b0159964aae12e4a354a2064720c6ef65be status=arm64_complete_bound indexed_start=True
0x06A9AED4: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A9AED8: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A9AEDC: f303012a  mov w19, w1
0x06A9AEE0: e1031faa  mov x1, xzr
0x06A9AEE4: f40300aa  mov x20, x0
0x06A9AEE8: c5fdb097  bl #0x56da5fc
0x06A9AEEC: 931200b9  str w19, [x20, #0x10]
0x06A9AEF0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A9AEF4: fe0742f8  ldr x30, [sp], #0x20
0x06A9AEF8: c0035fd6  ret

