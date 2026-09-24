; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 33308 Merger.MergeBoardQueue.Decorators.BoardQueueSystemDecorator
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A5B9D4 | public void DecorateSystems(SystemsBuilder systemsBuilder) { }
; bytes=128 sha256=b719c73a75e9264d3f09dff0a4500e491d2a800a17443a936449791eb2ba4fce status=arm64_complete_bound indexed_start=True
0x06A5B9D4: ff0301d1  sub sp, sp, #0x40
0x06A5B9D8: fe0b00f9  str x30, [sp, #0x10]
0x06A5B9DC: f65702a9  stp x22, x21, [sp, #0x20]
0x06A5B9E0: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A5B9E4: 769600f0  adrp x22, #0x7d2a000
0x06A5B9E8: b56600b0  adrp x21, #0x7730000
0x06A5B9EC: c8a25839  ldrb w8, [x22, #0x628]
0x06A5B9F0: b58a42f9  ldr x21, [x21, #0x510]
0x06A5B9F4: f30301aa  mov x19, x1
0x06A5B9F8: f40300aa  mov x20, x0
0x06A5B9FC: c8000037  tbnz w8, #0, #0x6a5ba14
0x06A5BA00: a06600b0  adrp x0, #0x7730000
0x06A5BA04: 008842f9  ldr x0, [x0, #0x510]
0x06A5BA08: 04941c97  bl #0x3180a18
0x06A5BA0C: 28008052  movz w8, #0x1
0x06A5BA10: c8a21839  strb w8, [x22, #0x628]
0x06A5BA14: 810a40f9  ldr x1, [x20, #0x10]
0x06A5BA18: e00313aa  mov x0, x19
0x06A5BA1C: e2031faa  mov x2, xzr
0x06A5BA20: d46a0094  bl #0x6a76570
0x06A5BA24: a80240f9  ldr x8, [x21]
0x06A5BA28: e00700a9  stp x0, x1, [sp]
0x06A5BA2C: e0030091  mov x0, sp
0x06A5BA30: e10308aa  mov x1, x8
0x06A5BA34: c6ed4f97  bl #0x3e5714c
0x06A5BA38: e1031faa  mov x1, xzr
0x06A5BA3C: 34e6d297  bl #0x5f1530c
0x06A5BA40: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A5BA44: f65742a9  ldp x22, x21, [sp, #0x20]
0x06A5BA48: fe0b40f9  ldr x30, [sp, #0x10]
0x06A5BA4C: ff030191  add sp, sp, #0x40
0x06A5BA50: c0035fd6  ret

; RVA 0x6A5BA54 | public void .ctor() { }
; bytes=8 sha256=f18d09e82da0b0136bb1a18d703bbe0cf7ac8b7a10556631a11f838ae409f861 status=arm64_complete_bound indexed_start=True
0x06A5BA54: e1031faa  mov x1, xzr
0x06A5BA58: e9fab117  b #0x56da5fc

