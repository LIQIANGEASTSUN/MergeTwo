; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25851 Merger.MergeBoard.Logic.State.Updaters.TimeLockComponentStateUpdater
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A8605C | protected override void UpdateFromState(ref TimeLockComponent component, ItemPayloadBase itemState) { }
; bytes=48 sha256=34cd2955eb13c6f5cfb04df1d85ecb1057d2e59a3b88d94c15716d8b8fd85683 status=arm64_complete_bound indexed_start=True
0x06A8605C: 620100b4  cbz x2, #0x6a86088
0x06A86060: 483c40f9  ldr x8, [x2, #0x78]
0x06A86064: 280100b4  cbz x8, #0x6a86088
0x06A86068: 000940fd  ldr d0, [x8, #0x10]
0x06A8606C: 200000fd  str d0, [x1]
0x06A86070: 09614039  ldrb w9, [x8, #0x18]
0x06A86074: 29600039  strb w9, [x1, #0x18]
0x06A86078: 08654039  ldrb w8, [x8, #0x19]
0x06A8607C: 29008052  movz w9, #0x1
0x06A86080: 29800039  strb w9, [x1, #0x20]
0x06A86084: 28400039  strb w8, [x1, #0x10]
0x06A86088: c0035fd6  ret

; RVA 0x6A8608C | public void .ctor() { }
; bytes=72 sha256=4c166e426ffd91a2d743c0e1a83fb669a05d7975025f5c2715d35540aa320c7c status=arm64_complete_bound indexed_start=True
0x06A8608C: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A86090: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A86094: 34950090  adrp x20, #0x7d2a000
0x06A86098: 556500f0  adrp x21, #0x7731000
0x06A8609C: 88725e39  ldrb w8, [x20, #0x79c]
0x06A860A0: b58246f9  ldr x21, [x21, #0xd00]
0x06A860A4: f30300aa  mov x19, x0
0x06A860A8: c8000037  tbnz w8, #0, #0x6a860c0
0x06A860AC: 406500f0  adrp x0, #0x7731000
0x06A860B0: 008046f9  ldr x0, [x0, #0xd00]
0x06A860B4: 59ea1b97  bl #0x3180a18
0x06A860B8: 28008052  movz w8, #0x1
0x06A860BC: 88721e39  strb w8, [x20, #0x79c]
0x06A860C0: a10240f9  ldr x1, [x21]
0x06A860C4: e00313aa  mov x0, x19
0x06A860C8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A860CC: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A860D0: de698b17  b #0x4d60848

