; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 33881 Merger.MergeBoardSkipCooldownCapability.Decorators.SkipCooldownSystemDecorator
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A641EC | public void DecorateSystems(SystemsBuilder systemsBuilder) { }
; bytes=192 sha256=7f2d786ad45abff3df87e32d85ae0a48fb3037df824ef656e3aed37ee8007b6b status=arm64_complete_bound indexed_start=True
0x06A641EC: ff0301d1  sub sp, sp, #0x40
0x06A641F0: fe5f01a9  stp x30, x23, [sp, #0x10]
0x06A641F4: f65702a9  stp x22, x21, [sp, #0x20]
0x06A641F8: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A641FC: 379600d0  adrp x23, #0x7d2a000
0x06A64200: 76660090  adrp x22, #0x7730000
0x06A64204: 75660090  adrp x21, #0x7730000
0x06A64208: e8325a39  ldrb w8, [x23, #0x68c]
0x06A6420C: d6be44f9  ldr x22, [x22, #0x978]
0x06A64210: b5c244f9  ldr x21, [x21, #0x980]
0x06A64214: f30301aa  mov x19, x1
0x06A64218: f40300aa  mov x20, x0
0x06A6421C: 28010037  tbnz w8, #0, #0x6a64240
0x06A64220: 60660090  adrp x0, #0x7730000
0x06A64224: 00bc44f9  ldr x0, [x0, #0x978]
0x06A64228: fc711c97  bl #0x3180a18
0x06A6422C: 60660090  adrp x0, #0x7730000
0x06A64230: 00c044f9  ldr x0, [x0, #0x980]
0x06A64234: f9711c97  bl #0x3180a18
0x06A64238: 28008052  movz w8, #0x1
0x06A6423C: e8321a39  strb w8, [x23, #0x68c]
0x06A64240: 810a40f9  ldr x1, [x20, #0x10]
0x06A64244: e00313aa  mov x0, x19
0x06A64248: e2031faa  mov x2, xzr
0x06A6424C: c9480094  bl #0x6a76570
0x06A64250: c80240f9  ldr x8, [x22]
0x06A64254: e00700a9  stp x0, x1, [sp]
0x06A64258: e0030091  mov x0, sp
0x06A6425C: e10308aa  mov x1, x8
0x06A64260: bbcb4f97  bl #0x3e5714c
0x06A64264: e1031faa  mov x1, xzr
0x06A64268: 29c4d297  bl #0x5f1530c
0x06A6426C: 810a40f9  ldr x1, [x20, #0x10]
0x06A64270: e00313aa  mov x0, x19
0x06A64274: e2031faa  mov x2, xzr
0x06A64278: be480094  bl #0x6a76570
0x06A6427C: a80240f9  ldr x8, [x21]
0x06A64280: e00700a9  stp x0, x1, [sp]
0x06A64284: e0030091  mov x0, sp
0x06A64288: e10308aa  mov x1, x8
0x06A6428C: b0cb4f97  bl #0x3e5714c
0x06A64290: e1031faa  mov x1, xzr
0x06A64294: 1ec4d297  bl #0x5f1530c
0x06A64298: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A6429C: f65742a9  ldp x22, x21, [sp, #0x20]
0x06A642A0: fe5f41a9  ldp x30, x23, [sp, #0x10]
0x06A642A4: ff030191  add sp, sp, #0x40
0x06A642A8: c0035fd6  ret

; RVA 0x6A642AC | public void .ctor() { }
; bytes=8 sha256=db11bf4b602d910438bc36151b635f103418f68c7953e8626c2cda375b041216 status=arm64_complete_bound indexed_start=True
0x06A642AC: e1031faa  mov x1, xzr
0x06A642B0: d3d8b117  b #0x56da5fc

