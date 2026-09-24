; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25959 Merger.MergeBoard.Data.TickResultArgs.ItemDiscoveredForFirstTime
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9A86C | public IMergeItem get_Item() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06A9A86C: 000840f9  ldr x0, [x0, #0x10]
0x06A9A870: c0035fd6  ret

; RVA 0x6A9A874 | public void .ctor(IMergeItem item) { }
; bytes=48 sha256=91251ece8cf647ef337cb7d09b357942f5fd5e3e7c15bbee38586f40ab6f762e status=arm64_complete_bound indexed_start=True
0x06A9A874: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A9A878: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A9A87C: f30301aa  mov x19, x1
0x06A9A880: e1031faa  mov x1, xzr
0x06A9A884: f40300aa  mov x20, x0
0x06A9A888: 5dffb097  bl #0x56da5fc
0x06A9A88C: 930e01f8  str x19, [x20, #0x10]!
0x06A9A890: e00314aa  mov x0, x20
0x06A9A894: e10313aa  mov x1, x19
0x06A9A898: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A9A89C: fe0742f8  ldr x30, [sp], #0x20
0x06A9A8A0: 49981b17  b #0x31809c4

