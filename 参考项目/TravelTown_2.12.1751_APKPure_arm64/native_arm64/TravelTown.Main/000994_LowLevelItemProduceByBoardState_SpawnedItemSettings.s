; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 994 .LowLevelItemProduceByBoardState.SpawnedItemSettings
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x679E4CC | public int get_BaseItemIndex() { }
; bytes=8 sha256=6f1929ee2376e6ada94db6d2aafe012dfc8382613e73b99aea0c7dea270fac13 status=arm64_complete_bound indexed_start=True
0x0679E4CC: 001040b9  ldr w0, [x0, #0x10]
0x0679E4D0: c0035fd6  ret

; RVA 0x679E4D4 | public int get_BoostedItemIndex() { }
; bytes=8 sha256=ca9be5891608b757b7bc8d84905b452237de4af4115e73ad7cd6348b92859bf1 status=arm64_complete_bound indexed_start=True
0x0679E4D4: 001440b9  ldr w0, [x0, #0x14]
0x0679E4D8: c0035fd6  ret

; RVA 0x679E4DC | public IMergeGraphItem get_ItemChain() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x0679E4DC: 000c40f9  ldr x0, [x0, #0x18]
0x0679E4E0: c0035fd6  ret

; RVA 0x679E2B8 | public void .ctor(int baseItemIndex, int boostedItemIndex, IMergeGraphItem itemChain) { }
; bytes=68 sha256=aa420370ebe863e96680be68914ae24fe44f2d8a348a146b757fe37b12b340cc status=arm64_complete_bound indexed_start=True
0x0679E2B8: fe0f1df8  str x30, [sp, #-0x30]!
0x0679E2BC: f65701a9  stp x22, x21, [sp, #0x10]
0x0679E2C0: f44f02a9  stp x20, x19, [sp, #0x20]
0x0679E2C4: f503012a  mov w21, w1
0x0679E2C8: e1031faa  mov x1, xzr
0x0679E2CC: f30303aa  mov x19, x3
0x0679E2D0: f403022a  mov w20, w2
0x0679E2D4: f60300aa  mov x22, x0
0x0679E2D8: c9f0bc97  bl #0x56da5fc
0x0679E2DC: d38e01f8  str x19, [x22, #0x18]!
0x0679E2E0: d5523f29  stp w21, w20, [x22, #-8]
0x0679E2E4: e00316aa  mov x0, x22
0x0679E2E8: e10313aa  mov x1, x19
0x0679E2EC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0679E2F0: f65741a9  ldp x22, x21, [sp, #0x10]
0x0679E2F4: fe0743f8  ldr x30, [sp], #0x30
0x0679E2F8: b3892717  b #0x31809c4

