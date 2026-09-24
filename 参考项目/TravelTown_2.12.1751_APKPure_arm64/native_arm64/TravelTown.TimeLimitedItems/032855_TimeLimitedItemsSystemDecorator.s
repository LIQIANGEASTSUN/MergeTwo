; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 32855 Merger.TimeLimitedItems.Decorators.TimeLimitedItemsSystemDecorator
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6B4DD40 | public void DecorateSystems(SystemsBuilder systemsBuilder) { }
; bytes=128 sha256=d5777dc655d0e9b25cc6b84b429a43d255ed83a2ab1f3f1935e9ba401720df15 status=arm64_complete_bound indexed_start=True
0x06B4DD40: ff0301d1  sub sp, sp, #0x40
0x06B4DD44: fe0b00f9  str x30, [sp, #0x10]
0x06B4DD48: f65702a9  stp x22, x21, [sp, #0x20]
0x06B4DD4C: f44f03a9  stp x20, x19, [sp, #0x30]
0x06B4DD50: f68e00d0  adrp x22, #0x7d2b000
0x06B4DD54: 555f00f0  adrp x21, #0x7738000
0x06B4DD58: c8c64039  ldrb w8, [x22, #0x31]
0x06B4DD5C: b54644f9  ldr x21, [x21, #0x888]
0x06B4DD60: f30301aa  mov x19, x1
0x06B4DD64: f40300aa  mov x20, x0
0x06B4DD68: c8000037  tbnz w8, #0, #0x6b4dd80
0x06B4DD6C: 405f00f0  adrp x0, #0x7738000
0x06B4DD70: 004444f9  ldr x0, [x0, #0x888]
0x06B4DD74: 29cb1897  bl #0x3180a18
0x06B4DD78: 28008052  movz w8, #0x1
0x06B4DD7C: c8c60039  strb w8, [x22, #0x31]
0x06B4DD80: 810a40f9  ldr x1, [x20, #0x10]
0x06B4DD84: e00313aa  mov x0, x19
0x06B4DD88: e2031faa  mov x2, xzr
0x06B4DD8C: f9a1fc97  bl #0x6a76570
0x06B4DD90: a80240f9  ldr x8, [x21]
0x06B4DD94: e00700a9  stp x0, x1, [sp]
0x06B4DD98: e0030091  mov x0, sp
0x06B4DD9C: e10308aa  mov x1, x8
0x06B4DDA0: eb244c97  bl #0x3e5714c
0x06B4DDA4: e1031faa  mov x1, xzr
0x06B4DDA8: 591dcf97  bl #0x5f1530c
0x06B4DDAC: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06B4DDB0: f65742a9  ldp x22, x21, [sp, #0x20]
0x06B4DDB4: fe0b40f9  ldr x30, [sp, #0x10]
0x06B4DDB8: ff030191  add sp, sp, #0x40
0x06B4DDBC: c0035fd6  ret

; RVA 0x6B4DDC0 | public void .ctor() { }
; bytes=8 sha256=098cd80de89ad63e626d83660d63561c2a08a403b088d4755112747bb8e3528f status=arm64_complete_bound indexed_start=True
0x06B4DDC0: e1031faa  mov x1, xzr
0x06B4DDC4: 0e32ae17  b #0x56da5fc

