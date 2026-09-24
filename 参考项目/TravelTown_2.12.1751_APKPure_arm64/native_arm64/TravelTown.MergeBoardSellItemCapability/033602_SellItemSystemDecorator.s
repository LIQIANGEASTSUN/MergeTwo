; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 33602 Merger.MergeBoardSellItemCapability.Decorators.SellItemSystemDecorator
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A61264 | public void DecorateSystems(SystemsBuilder systemsBuilder) { }
; bytes=192 sha256=6be67816b8ee4f40185371d6ac85a3da9dc8cc4e7fbdce6afabdb7b3d587a1cd status=arm64_complete_bound indexed_start=True
0x06A61264: ff0301d1  sub sp, sp, #0x40
0x06A61268: fe5f01a9  stp x30, x23, [sp, #0x10]
0x06A6126C: f65702a9  stp x22, x21, [sp, #0x20]
0x06A61270: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A61274: 579600b0  adrp x23, #0x7d2a000
0x06A61278: 766600f0  adrp x22, #0x7730000
0x06A6127C: 756600f0  adrp x21, #0x7730000
0x06A61280: e89e5939  ldrb w8, [x23, #0x667]
0x06A61284: d6d643f9  ldr x22, [x22, #0x7a8]
0x06A61288: b5da43f9  ldr x21, [x21, #0x7b0]
0x06A6128C: f30301aa  mov x19, x1
0x06A61290: f40300aa  mov x20, x0
0x06A61294: 28010037  tbnz w8, #0, #0x6a612b8
0x06A61298: 606600f0  adrp x0, #0x7730000
0x06A6129C: 00d443f9  ldr x0, [x0, #0x7a8]
0x06A612A0: de7d1c97  bl #0x3180a18
0x06A612A4: 606600f0  adrp x0, #0x7730000
0x06A612A8: 00d843f9  ldr x0, [x0, #0x7b0]
0x06A612AC: db7d1c97  bl #0x3180a18
0x06A612B0: 28008052  movz w8, #0x1
0x06A612B4: e89e1939  strb w8, [x23, #0x667]
0x06A612B8: 810a40f9  ldr x1, [x20, #0x10]
0x06A612BC: e00313aa  mov x0, x19
0x06A612C0: e2031faa  mov x2, xzr
0x06A612C4: ab540094  bl #0x6a76570
0x06A612C8: c80240f9  ldr x8, [x22]
0x06A612CC: e00700a9  stp x0, x1, [sp]
0x06A612D0: e0030091  mov x0, sp
0x06A612D4: e10308aa  mov x1, x8
0x06A612D8: 9dd74f97  bl #0x3e5714c
0x06A612DC: e1031faa  mov x1, xzr
0x06A612E0: 0bd0d297  bl #0x5f1530c
0x06A612E4: 810a40f9  ldr x1, [x20, #0x10]
0x06A612E8: e00313aa  mov x0, x19
0x06A612EC: e2031faa  mov x2, xzr
0x06A612F0: a0540094  bl #0x6a76570
0x06A612F4: a80240f9  ldr x8, [x21]
0x06A612F8: e00700a9  stp x0, x1, [sp]
0x06A612FC: e0030091  mov x0, sp
0x06A61300: e10308aa  mov x1, x8
0x06A61304: 92d74f97  bl #0x3e5714c
0x06A61308: e1031faa  mov x1, xzr
0x06A6130C: 00d0d297  bl #0x5f1530c
0x06A61310: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A61314: f65742a9  ldp x22, x21, [sp, #0x20]
0x06A61318: fe5f41a9  ldp x30, x23, [sp, #0x10]
0x06A6131C: ff030191  add sp, sp, #0x40
0x06A61320: c0035fd6  ret

; RVA 0x6A61324 | public void .ctor() { }
; bytes=8 sha256=fd0e1a3e36000d680a297fa6ad52c0dc86009db112c46564d28d49cd699a7c95 status=arm64_complete_bound indexed_start=True
0x06A61324: e1031faa  mov x1, xzr
0x06A61328: b5e4b117  b #0x56da5fc

