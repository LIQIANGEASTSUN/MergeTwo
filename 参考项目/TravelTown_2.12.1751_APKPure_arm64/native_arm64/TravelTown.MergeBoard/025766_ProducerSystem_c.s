; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25766 .ProducerSystem.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A73990 | private static void .cctor() { }
; bytes=104 sha256=79c1e675a207b0c9802fafbdfdaa41646a70c8c0d227252a89059f59b922aca4 status=arm64_complete_bound indexed_start=True
0x06A73990: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A73994: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A73998: b39500f0  adrp x19, #0x7d2a000
0x06A7399C: f46500d0  adrp x20, #0x7731000
0x06A739A0: 68d25b39  ldrb w8, [x19, #0x6f4]
0x06A739A4: 94f241f9  ldr x20, [x20, #0x3e0]
0x06A739A8: c8000037  tbnz w8, #0, #0x6a739c0
0x06A739AC: e06500d0  adrp x0, #0x7731000
0x06A739B0: 00f041f9  ldr x0, [x0, #0x3e0]
0x06A739B4: 19341c97  bl #0x3180a18
0x06A739B8: 28008052  movz w8, #0x1
0x06A739BC: 68d21b39  strb w8, [x19, #0x6f4]
0x06A739C0: 800240f9  ldr x0, [x20]
0x06A739C4: b7341c97  bl #0x3180ca0
0x06A739C8: e1031faa  mov x1, xzr
0x06A739CC: f30300aa  mov x19, x0
0x06A739D0: 0b9bb197  bl #0x56da5fc
0x06A739D4: 880240f9  ldr x8, [x20]
0x06A739D8: e10313aa  mov x1, x19
0x06A739DC: 085d40f9  ldr x8, [x8, #0xb8]
0x06A739E0: 130100f9  str x19, [x8]
0x06A739E4: 880240f9  ldr x8, [x20]
0x06A739E8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A739EC: 005d40f9  ldr x0, [x8, #0xb8]
0x06A739F0: fe0742f8  ldr x30, [sp], #0x20
0x06A739F4: f4331c17  b #0x31809c4

; RVA 0x6A739F8 | public void .ctor() { }
; bytes=8 sha256=0a4571a9e29c28efd66f7de3c115fc901e71bca2f000ea3560d7bc70861ee268 status=arm64_complete_bound indexed_start=True
0x06A739F8: e1031faa  mov x1, xzr
0x06A739FC: 009bb117  b #0x56da5fc

; RVA 0x6A73A00 | internal int <ProduceItemOnInteract>b__5_1(ValueTuple<Entity, BoardTilePositionComponent> e) { }
; bytes=8 sha256=c284374dd3c4e6853c28106ef7a9bed989c1c15635d14fc3131dabe43632d003 status=arm64_complete_bound indexed_start=True
0x06A73A00: e00302aa  mov x0, x2
0x06A73A04: c0035fd6  ret

; RVA 0x6A73A08 | internal bool <ProduceItemIfReady>b__6_0(ValueTuple<Entity, BoardTilePositionComponent, ProducerComponent, TimeCycleComponent, InteractionComponent> producerQuery) { }
; bytes=8 sha256=47a74cc5b58b0db2f88268c70dc1147d4fa83ff1acc0cc097c2fee72570bc14a status=arm64_complete_bound indexed_start=True
0x06A73A08: 20a04039  ldrb w0, [x1, #0x28]
0x06A73A0C: c0035fd6  ret

