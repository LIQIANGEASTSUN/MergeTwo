; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 26004 Merger.MergeBoard.Components.InteractionComponent
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A8751C | public string[] get_ItemsToConsumeIds() { }
; bytes=288 sha256=fff4c778138100b396613e3c126d2981225d690086ad17ebaa40ca0912872d74 status=arm64_complete_bound indexed_start=True
0x06A8751C: fe0f1cf8  str x30, [sp, #-0x40]!
0x06A87520: f85f01a9  stp x24, x23, [sp, #0x10]
0x06A87524: f65702a9  stp x22, x21, [sp, #0x20]
0x06A87528: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A8752C: 149500f0  adrp x20, #0x7d2a000
0x06A87530: 566500d0  adrp x22, #0x7731000
0x06A87534: 884a6139  ldrb w8, [x20, #0x852]
0x06A87538: d6ae46f9  ldr x22, [x22, #0xd58]
0x06A8753C: f30300aa  mov x19, x0
0x06A87540: 48020037  tbnz w8, #0, #0x6a87588
0x06A87544: e06200f0  adrp x0, #0x76e6000
0x06A87548: 00ec44f9  ldr x0, [x0, #0x9d8]
0x06A8754C: 33e51b97  bl #0x3180a18
0x06A87550: 205e00f0  adrp x0, #0x764e000
0x06A87554: 005845f9  ldr x0, [x0, #0xab0]
0x06A87558: 30e51b97  bl #0x3180a18
0x06A8755C: e06200f0  adrp x0, #0x76e6000
0x06A87560: 00f044f9  ldr x0, [x0, #0x9e0]
0x06A87564: 2de51b97  bl #0x3180a18
0x06A87568: 406500d0  adrp x0, #0x7731000
0x06A8756C: 00b046f9  ldr x0, [x0, #0xd60]
0x06A87570: 2ae51b97  bl #0x3180a18
0x06A87574: 406500d0  adrp x0, #0x7731000
0x06A87578: 00ac46f9  ldr x0, [x0, #0xd58]
0x06A8757C: 27e51b97  bl #0x3180a18
0x06A87580: 28008052  movz w8, #0x1
0x06A87584: 884a2139  strb w8, [x20, #0x852]
0x06A87588: c00240f9  ldr x0, [x22]
0x06A8758C: 731240f9  ldr x19, [x19, #0x20]
0x06A87590: 08e040b9  ldr w8, [x0, #0xe0]
0x06A87594: 68000035  cbnz w8, #0x6a875a0
0x06A87598: 7de51b97  bl #0x3180b8c
0x06A8759C: c00240f9  ldr x0, [x22]
0x06A875A0: 085c40f9  ldr x8, [x0, #0xb8]
0x06A875A4: f86200f0  adrp x24, #0x76e6000
0x06A875A8: 375e00f0  adrp x23, #0x764e000
0x06A875AC: 140540f9  ldr x20, [x8, #8]
0x06A875B0: 18ef44f9  ldr x24, [x24, #0x9d8]
0x06A875B4: f75a45f9  ldr x23, [x23, #0xab0]
0x06A875B8: f40200b5  cbnz x20, #0x6a87614
0x06A875BC: 08e040b9  ldr w8, [x0, #0xe0]
0x06A875C0: 68000035  cbnz w8, #0x6a875cc
0x06A875C4: 72e51b97  bl #0x3180b8c
0x06A875C8: c00240f9  ldr x0, [x22]
0x06A875CC: e96200f0  adrp x9, #0x76e6000
0x06A875D0: 085c40f9  ldr x8, [x0, #0xb8]
0x06A875D4: 29f144f9  ldr x9, [x9, #0x9e0]
0x06A875D8: 150140f9  ldr x21, [x8]
0x06A875DC: 200140f9  ldr x0, [x9]
0x06A875E0: b0e51b97  bl #0x3180ca0
0x06A875E4: 486500d0  adrp x8, #0x7731000
0x06A875E8: 08b146f9  ldr x8, [x8, #0xd60]
0x06A875EC: e10315aa  mov x1, x21
0x06A875F0: e3031faa  mov x3, xzr
0x06A875F4: f40300aa  mov x20, x0
0x06A875F8: 020140f9  ldr x2, [x8]
0x06A875FC: ef3c9f97  bl #0x52569b8
0x06A87600: c80240f9  ldr x8, [x22]
0x06A87604: e10314aa  mov x1, x20
0x06A87608: 005d40f9  ldr x0, [x8, #0xb8]
0x06A8760C: 148c00f8  str x20, [x0, #8]!
0x06A87610: ede41b97  bl #0x31809c4
0x06A87614: 020340f9  ldr x2, [x24]
0x06A87618: e00313aa  mov x0, x19
0x06A8761C: e10314aa  mov x1, x20
0x06A87620: 1d254797  bl #0x3c50a94
0x06A87624: e10240f9  ldr x1, [x23]
0x06A87628: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A8762C: f65742a9  ldp x22, x21, [sp, #0x20]
0x06A87630: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06A87634: fe0744f8  ldr x30, [sp], #0x40
0x06A87638: a8504717  b #0x3c5b8d8

