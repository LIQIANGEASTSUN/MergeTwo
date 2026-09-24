; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25838 Merger.MergeBoard.Logic.State.Updaters.ChargeableComponentStateUpdater
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A850E8 | protected override void UpdateFromState(ref ChargeableComponent component, ItemPayloadBase itemState) { }
; bytes=24 sha256=47819509017f3c2e8235533dc582f59730435a985af9474f7333fc3c3c4f7399 status=arm64_complete_bound indexed_start=True
0x06A850E8: a20000b4  cbz x2, #0x6a850fc
0x06A850EC: 484040f9  ldr x8, [x2, #0x80]
0x06A850F0: 680000b4  cbz x8, #0x6a850fc
0x06A850F4: 081140b9  ldr w8, [x8, #0x10]
0x06A850F8: 280400b9  str w8, [x1, #4]
0x06A850FC: c0035fd6  ret

; RVA 0x6A85100 | public void .ctor() { }
; bytes=72 sha256=19e1baccb3ef02612c79f82acd8dca1c84c643349f6744d8d77ef96f9408979d status=arm64_complete_bound indexed_start=True
0x06A85100: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A85104: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A85108: 349500b0  adrp x20, #0x7d2a000
0x06A8510C: 75650090  adrp x21, #0x7731000
0x06A85110: 88265e39  ldrb w8, [x20, #0x789]
0x06A85114: b53e46f9  ldr x21, [x21, #0xc78]
0x06A85118: f30300aa  mov x19, x0
0x06A8511C: c8000037  tbnz w8, #0, #0x6a85134
0x06A85120: 60650090  adrp x0, #0x7731000
0x06A85124: 003c46f9  ldr x0, [x0, #0xc78]
0x06A85128: 3cee1b97  bl #0x3180a18
0x06A8512C: 28008052  movz w8, #0x1
0x06A85130: 88261e39  strb w8, [x20, #0x789]
0x06A85134: a10240f9  ldr x1, [x21]
0x06A85138: e00313aa  mov x0, x19
0x06A8513C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A85140: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A85144: f06b8b17  b #0x4d60104

