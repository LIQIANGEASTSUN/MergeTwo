; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25837 Merger.MergeBoard.Logic.State.Updaters.BoxComponentStateUpdater
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A85074 | protected override void UpdateFromState(ref BoxComponent component, ItemPayloadBase itemState) { }
; bytes=44 sha256=6c0ad41fc5e71198009a4f656f53de872af7e6c73c6abebfe051427991370635 status=arm64_complete_bound indexed_start=True
0x06A85074: 420100b4  cbz x2, #0x6a8509c
0x06A85078: 483040f9  ldr x8, [x2, #0x60]
0x06A8507C: 080100b4  cbz x8, #0x6a8509c
0x06A85080: 09414039  ldrb w9, [x8, #0x10]
0x06A85084: 29000039  strb w9, [x1]
0x06A85088: 00c1c43c  ldur q0, [x8, #0x4c]
0x06A8508C: 0140006e  ext v1.16b, v0.16b, v0.16b, #8
0x06A85090: 0078814e  zip2 v0.4s, v0.4s, v1.4s
0x06A85094: 0060006e  ext v0.16b, v0.16b, v0.16b, #0xc
0x06A85098: 2040803c  stur q0, [x1, #4]
0x06A8509C: c0035fd6  ret

; RVA 0x6A850A0 | public void .ctor() { }
; bytes=72 sha256=5cb2ff7f0ddaf253bec5ebed7156de01f4c793f7e2fc41a84433ced864c31cb8 status=arm64_complete_bound indexed_start=True
0x06A850A0: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A850A4: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A850A8: 349500b0  adrp x20, #0x7d2a000
0x06A850AC: 75650090  adrp x21, #0x7731000
0x06A850B0: 88225e39  ldrb w8, [x20, #0x788]
0x06A850B4: b53a46f9  ldr x21, [x21, #0xc70]
0x06A850B8: f30300aa  mov x19, x0
0x06A850BC: c8000037  tbnz w8, #0, #0x6a850d4
0x06A850C0: 60650090  adrp x0, #0x7731000
0x06A850C4: 003846f9  ldr x0, [x0, #0xc70]
0x06A850C8: 54ee1b97  bl #0x3180a18
0x06A850CC: 28008052  movz w8, #0x1
0x06A850D0: 88221e39  strb w8, [x20, #0x788]
0x06A850D4: a10240f9  ldr x1, [x21]
0x06A850D8: e00313aa  mov x0, x19
0x06A850DC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A850E0: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A850E4: e56b8b17  b #0x4d60078

