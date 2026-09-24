; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25839 Merger.MergeBoard.Logic.State.Updaters.DynamicItemConfigComponentStateUpdater
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A85148 | protected override void UpdateFromState(ref DynamicItemConfigComponent component, ItemPayloadBase itemState) { }
; bytes=76 sha256=1be7be689533d6c6ebbb7db483c1124dae64a5650e3239869d8673a9f96d402c status=arm64_complete_bound indexed_start=True
0x06A85148: 420200b4  cbz x2, #0x6a85190
0x06A8514C: ffc300d1  sub sp, sp, #0x30
0x06A85150: fe4f02a9  stp x30, x19, [sp, #0x20]
0x06A85154: f30301aa  mov x19, x1
0x06A85158: 414440f9  ldr x1, [x2, #0x88]
0x06A8515C: e0230091  add x0, sp, #8
0x06A85160: ffff00a9  stp xzr, xzr, [sp, #8]
0x06A85164: ff0f00f9  str xzr, [sp, #0x18]
0x06A85168: 0b000094  bl #0x6a85194
0x06A8516C: e80f40f9  ldr x8, [sp, #0x18]
0x06A85170: e083c03c  ldur q0, [sp, #8]
0x06A85174: e00313aa  mov x0, x19
0x06A85178: e1031faa  mov x1, xzr
0x06A8517C: 680a00f9  str x8, [x19, #0x10]
0x06A85180: 6002803d  str q0, [x19]
0x06A85184: 10ee1b97  bl #0x31809c4
0x06A85188: fe4f42a9  ldp x30, x19, [sp, #0x20]
0x06A8518C: ffc30091  add sp, sp, #0x30
0x06A85190: c0035fd6  ret

; RVA 0x6A85258 | public void .ctor() { }
; bytes=72 sha256=f4fd00ed3d5373ee97f1ac5e45659da835d737eacd606af619981d938df25a81 status=arm64_complete_bound indexed_start=True
0x06A85258: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A8525C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A85260: 349500b0  adrp x20, #0x7d2a000
0x06A85264: 75650090  adrp x21, #0x7731000
0x06A85268: 882a5e39  ldrb w8, [x20, #0x78a]
0x06A8526C: b54246f9  ldr x21, [x21, #0xc80]
0x06A85270: f30300aa  mov x19, x0
0x06A85274: c8000037  tbnz w8, #0, #0x6a8528c
0x06A85278: 60650090  adrp x0, #0x7731000
0x06A8527C: 004046f9  ldr x0, [x0, #0xc80]
0x06A85280: e6ed1b97  bl #0x3180a18
0x06A85284: 28008052  movz w8, #0x1
0x06A85288: 882a1e39  strb w8, [x20, #0x78a]
0x06A8528C: a10240f9  ldr x1, [x21]
0x06A85290: e00313aa  mov x0, x19
0x06A85294: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A85298: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A8529C: c66b8b17  b #0x4d601b4

