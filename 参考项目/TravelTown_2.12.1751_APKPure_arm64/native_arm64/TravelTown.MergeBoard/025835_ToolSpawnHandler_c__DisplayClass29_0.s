; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25835 .ToolSpawnHandler.<>c__DisplayClass29_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A84FB0 | public void .ctor() { }
; bytes=8 sha256=d499a45f6a5e4d0522e80c6d0d337f9e0befc3464031bc4b2560f0fbb4486fa1 status=arm64_complete_bound indexed_start=True
0x06A84FB0: e1031faa  mov x1, xzr
0x06A84FB4: 9255b117  b #0x56da5fc

; RVA 0x6A84FB8 | internal bool <GetToolSpawnPriorityStrategy>b__2(WeightedTool tool) { }
; bytes=100 sha256=e1cd474f82b2eb16a1be3e3e71a372d96088ebb2ddf22a168ac122de986efa7b status=arm64_complete_bound indexed_start=True
0x06A84FB8: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A84FBC: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A84FC0: 359500d0  adrp x21, #0x7d2a000
0x06A84FC4: a81a5e39  ldrb w8, [x21, #0x786]
0x06A84FC8: f30301aa  mov x19, x1
0x06A84FCC: f40300aa  mov x20, x0
0x06A84FD0: c8000037  tbnz w8, #0, #0x6a84fe8
0x06A84FD4: c05f0090  adrp x0, #0x767c000
0x06A84FD8: 006c41f9  ldr x0, [x0, #0x2d8]
0x06A84FDC: 8fee1b97  bl #0x3180a18
0x06A84FE0: 28008052  movz w8, #0x1
0x06A84FE4: a81a1e39  strb w8, [x21, #0x786]
0x06A84FE8: 800a40f9  ldr x0, [x20, #0x10]
0x06A84FEC: 600100b4  cbz x0, #0x6a85018
0x06A84FF0: c85f0090  adrp x8, #0x767c000
0x06A84FF4: 086d41f9  ldr x8, [x8, #0x2d8]
0x06A84FF8: 61fe60d3  lsr x1, x19, #0x20
0x06A84FFC: 020140f9  ldr x2, [x8]
0x06A85000: 8c5e5697  bl #0x401ca30
0x06A85004: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A85008: e803202a  mvn w8, w0
0x06A8500C: 00010012  and w0, w8, #1
0x06A85010: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A85014: c0035fd6  ret
0x06A85018: 25ef1b97  bl #0x3180cac

; RVA 0x6A8501C | internal bool <GetToolSpawnPriorityStrategy>b__3(WeightedTool tool) { }
; bytes=88 sha256=bb7c9c84d2cddd4e33d1331134ce9a7722f9775462aa0a3fff0409bd7cfe761d status=arm64_complete_bound indexed_start=True
0x06A8501C: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A85020: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A85024: 359500b0  adrp x21, #0x7d2a000
0x06A85028: a81e5e39  ldrb w8, [x21, #0x787]
0x06A8502C: f30301aa  mov x19, x1
0x06A85030: f40300aa  mov x20, x0
0x06A85034: c8000037  tbnz w8, #0, #0x6a8504c
0x06A85038: a05f00f0  adrp x0, #0x767c000
0x06A8503C: 006c41f9  ldr x0, [x0, #0x2d8]
0x06A85040: 76ee1b97  bl #0x3180a18
0x06A85044: 28008052  movz w8, #0x1
0x06A85048: a81e1e39  strb w8, [x21, #0x787]
0x06A8504C: 800a40f9  ldr x0, [x20, #0x10]
0x06A85050: 000100b4  cbz x0, #0x6a85070
0x06A85054: a85f00f0  adrp x8, #0x767c000
0x06A85058: 086d41f9  ldr x8, [x8, #0x2d8]
0x06A8505C: 61fe60d3  lsr x1, x19, #0x20
0x06A85060: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A85064: 020140f9  ldr x2, [x8]
0x06A85068: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A8506C: 715e5617  b #0x401ca30
0x06A85070: 0fef1b97  bl #0x3180cac

