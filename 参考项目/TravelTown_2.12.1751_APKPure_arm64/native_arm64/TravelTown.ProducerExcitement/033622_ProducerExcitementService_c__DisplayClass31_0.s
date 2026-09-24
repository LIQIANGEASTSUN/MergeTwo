; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 33622 .ProducerExcitementService.<>c__DisplayClass31_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6AD80B8 | public void .ctor() { }
; bytes=8 sha256=7fed3450e2b8d47c8b72e320224045255c2186b4df1ac6408828ef8b09bacdba status=arm64_complete_bound indexed_start=True
0x06AD80B8: e1031faa  mov x1, xzr
0x06AD80BC: 5009b017  b #0x56da5fc

; RVA 0x6AD8994 | internal bool <TryGetExcitementPosition>b__0(BoardItemPosition position) { }
; bytes=100 sha256=3792d8061195616b241ac5a18b6bd24f8853935a2c555e271d987e9c83a68477 status=arm64_complete_bound indexed_start=True
0x06AD8994: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06AD8998: f44f01a9  stp x20, x19, [sp, #0x10]
0x06AD899C: 959200d0  adrp x21, #0x7d2a000
0x06AD89A0: a89a6b39  ldrb w8, [x21, #0xae6]
0x06AD89A4: f30301aa  mov x19, x1
0x06AD89A8: f40300aa  mov x20, x0
0x06AD89AC: c8000037  tbnz w8, #0, #0x6ad89c4
0x06AD89B0: 205d00d0  adrp x0, #0x767e000
0x06AD89B4: 007446f9  ldr x0, [x0, #0xce8]
0x06AD89B8: 18a01a97  bl #0x3180a18
0x06AD89BC: 28008052  movz w8, #0x1
0x06AD89C0: a89a2b39  strb w8, [x21, #0xae6]
0x06AD89C4: 800a40f9  ldr x0, [x20, #0x10]
0x06AD89C8: 600100b4  cbz x0, #0x6ad89f4
0x06AD89CC: 285d00d0  adrp x8, #0x767e000
0x06AD89D0: 087546f9  ldr x8, [x8, #0xce8]
0x06AD89D4: e10313aa  mov x1, x19
0x06AD89D8: 020140f9  ldr x2, [x8]
0x06AD89DC: 71d95397  bl #0x3fcefa0
0x06AD89E0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06AD89E4: e803202a  mvn w8, w0
0x06AD89E8: 00010012  and w0, w8, #1
0x06AD89EC: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06AD89F0: c0035fd6  ret
0x06AD89F4: aea01a97  bl #0x3180cac

