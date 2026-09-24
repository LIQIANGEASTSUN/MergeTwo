; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 7484 Merger.Bubbles.Model.Data.BubbleData
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6582B74 | public void .ctor(int price, long timestamp, string uuid) { }
; bytes=72 sha256=8c4a3f72985e8e502dfe7d50deeb0c80e548b63a83cb96f34935cc77acb2fbf2 status=arm64_complete_bound indexed_start=True
0x06582B74: fe0f1df8  str x30, [sp, #-0x30]!
0x06582B78: f65701a9  stp x22, x21, [sp, #0x10]
0x06582B7C: f44f02a9  stp x20, x19, [sp, #0x20]
0x06582B80: f503012a  mov w21, w1
0x06582B84: e1031faa  mov x1, xzr
0x06582B88: f30303aa  mov x19, x3
0x06582B8C: f40302aa  mov x20, x2
0x06582B90: f60300aa  mov x22, x0
0x06582B94: 9a5ec597  bl #0x56da5fc
0x06582B98: d30e02f8  str x19, [x22, #0x20]!
0x06582B9C: d5021fb8  stur w21, [x22, #-0x10]
0x06582BA0: d4821ff8  stur x20, [x22, #-8]
0x06582BA4: e00316aa  mov x0, x22
0x06582BA8: e10313aa  mov x1, x19
0x06582BAC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06582BB0: f65741a9  ldp x22, x21, [sp, #0x10]
0x06582BB4: fe0743f8  ldr x30, [sp], #0x30
0x06582BB8: 83f72f17  b #0x31809c4

