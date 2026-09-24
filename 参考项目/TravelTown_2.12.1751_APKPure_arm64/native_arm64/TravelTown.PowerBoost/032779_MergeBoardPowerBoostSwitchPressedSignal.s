; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 32779 Merger.MergeBoard.PowerBoost.Signals.MergeBoardPowerBoostSwitchPressedSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6ACD41C | public int get_SelectedCost() { }
; bytes=8 sha256=6f1929ee2376e6ada94db6d2aafe012dfc8382613e73b99aea0c7dea270fac13 status=arm64_complete_bound indexed_start=True
0x06ACD41C: 001040b9  ldr w0, [x0, #0x10]
0x06ACD420: c0035fd6  ret

; RVA 0x6ACD424 | public bool get_IsOn() { }
; bytes=8 sha256=dc015cf50141a8ec0702ef7c90055049639e096a7cf9e03ab4b456a9a8de09a1 status=arm64_complete_bound indexed_start=True
0x06ACD424: 00504039  ldrb w0, [x0, #0x14]
0x06ACD428: c0035fd6  ret

; RVA 0x6ACC608 | public void .ctor(int selectedCost, bool isOn) { }
; bytes=48 sha256=b6b59bf91b1faa974a1b162dc9acfa32b3d62872d79ff9d646551b9256ad2aea status=arm64_complete_bound indexed_start=True
0x06ACC608: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06ACC60C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06ACC610: f303012a  mov w19, w1
0x06ACC614: e1031faa  mov x1, xzr
0x06ACC618: f40300aa  mov x20, x0
0x06ACC61C: 55000012  and w21, w2, #1
0x06ACC620: f737b097  bl #0x56da5fc
0x06ACC624: 931200b9  str w19, [x20, #0x10]
0x06ACC628: 95520039  strb w21, [x20, #0x14]
0x06ACC62C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06ACC630: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06ACC634: c0035fd6  ret

