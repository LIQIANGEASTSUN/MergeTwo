; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25840 Merger.MergeBoard.Logic.State.Updaters.ExpendableComponentStateUpdater
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A852A0 | protected override void UpdateFromState(ref ExpendableComponent component, ItemPayloadBase itemState) { }
; bytes=24 sha256=6e69c0961a572a74edfa1f92c0ac511d2e258d10dda40e7f929410f61f5af811 status=arm64_complete_bound indexed_start=True
0x06A852A0: a20000b4  cbz x2, #0x6a852b4
0x06A852A4: 483440f9  ldr x8, [x2, #0x68]
0x06A852A8: 680000b4  cbz x8, #0x6a852b4
0x06A852AC: 081140b9  ldr w8, [x8, #0x10]
0x06A852B0: 280000b9  str w8, [x1]
0x06A852B4: c0035fd6  ret

; RVA 0x6A852B8 | public void .ctor() { }
; bytes=72 sha256=769ff575e3dfb6afa7860235bcd0ea85502158d30a1ddbe6fa8c86d2f390df2d status=arm64_complete_bound indexed_start=True
0x06A852B8: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A852BC: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A852C0: 349500b0  adrp x20, #0x7d2a000
0x06A852C4: 75650090  adrp x21, #0x7731000
0x06A852C8: 882e5e39  ldrb w8, [x20, #0x78b]
0x06A852CC: b54646f9  ldr x21, [x21, #0xc88]
0x06A852D0: f30300aa  mov x19, x0
0x06A852D4: c8000037  tbnz w8, #0, #0x6a852ec
0x06A852D8: 60650090  adrp x0, #0x7731000
0x06A852DC: 004446f9  ldr x0, [x0, #0xc88]
0x06A852E0: ceed1b97  bl #0x3180a18
0x06A852E4: 28008052  movz w8, #0x1
0x06A852E8: 882e1e39  strb w8, [x20, #0x78b]
0x06A852EC: a10240f9  ldr x1, [x21]
0x06A852F0: e00313aa  mov x0, x19
0x06A852F4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A852F8: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A852FC: db6b8b17  b #0x4d60268

