; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 33290 Merger.MergeBoardQueue.Utils.QueuedItemsComparer
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A56BB8 | public bool Equals(QueuedItem leftQueuedItem, QueuedItem rightQueuedItem) { }
; bytes=36 sha256=2acb2ed4b20a5c477e3107958bf8da0c53927d0fb4243082c3a7976999531c8d status=arm64_complete_bound indexed_start=True
0x06A56BB8: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A56BBC: e10000b4  cbz x1, #0x6a56bd8
0x06A56BC0: c20000b4  cbz x2, #0x6a56bd8
0x06A56BC4: 201040f9  ldr x0, [x1, #0x20]
0x06A56BC8: 411040f9  ldr x1, [x2, #0x20]
0x06A56BCC: e2031faa  mov x2, xzr
0x06A56BD0: fe0741f8  ldr x30, [sp], #0x10
0x06A56BD4: 274faa17  b #0x54ea870
0x06A56BD8: 35a81c97  bl #0x3180cac

; RVA 0x6A56BDC | public int GetHashCode(QueuedItem obj) { }
; bytes=36 sha256=b5085f393da82b1933682f49d0e2ed6a473e2fcd3ee908db65c35f681d48c7bc status=arm64_complete_bound indexed_start=True
0x06A56BDC: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A56BE0: e10000b4  cbz x1, #0x6a56bfc
0x06A56BE4: 201040f9  ldr x0, [x1, #0x20]
0x06A56BE8: a00000b4  cbz x0, #0x6a56bfc
0x06A56BEC: 080040f9  ldr x8, [x0]
0x06A56BF0: 028555a9  ldp x2, x1, [x8, #0x158]
0x06A56BF4: fe0741f8  ldr x30, [sp], #0x10
0x06A56BF8: 40001fd6  br x2
0x06A56BFC: 2ca81c97  bl #0x3180cac

; RVA 0x6A56C00 | public void .ctor() { }
; bytes=8 sha256=9b57d39bed387582a83d1cc6a38cc5808c2ef0d25b1d92db6386ad0b0432bb10 status=arm64_complete_bound indexed_start=True
0x06A56C00: e1031faa  mov x1, xzr
0x06A56C04: 7e0eb217  b #0x56da5fc

