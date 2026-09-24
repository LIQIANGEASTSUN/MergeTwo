; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 9872 Merger.Services.Backend.Sync.Data.Payloads.SyncBoardPayload
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x67C9734 | public void .ctor() { }
; bytes=136 sha256=1595847127e20662b683c7df49bed34e99416f201c1328f227f087841068f301 status=arm64_complete_bound indexed_start=True
0x067C9734: fe0f1df8  str x30, [sp, #-0x30]!
0x067C9738: f65701a9  stp x22, x21, [sp, #0x10]
0x067C973C: f44f02a9  stp x20, x19, [sp, #0x20]
0x067C9740: f6aa00f0  adrp x22, #0x7d28000
0x067C9744: 557a00b0  adrp x21, #0x7712000
0x067C9748: 547a00b0  adrp x20, #0x7712000
0x067C974C: c8ce7e39  ldrb w8, [x22, #0xfb3]
0x067C9750: b58e41f9  ldr x21, [x21, #0x318]
0x067C9754: 949241f9  ldr x20, [x20, #0x320]
0x067C9758: f30300aa  mov x19, x0
0x067C975C: 28010037  tbnz w8, #0, #0x67c9780
0x067C9760: 407a00b0  adrp x0, #0x7712000
0x067C9764: 009041f9  ldr x0, [x0, #0x320]
0x067C9768: acdc2697  bl #0x3180a18
0x067C976C: 407a00b0  adrp x0, #0x7712000
0x067C9770: 008c41f9  ldr x0, [x0, #0x318]
0x067C9774: a9dc2697  bl #0x3180a18
0x067C9778: 28008052  movz w8, #0x1
0x067C977C: c8ce3e39  strb w8, [x22, #0xfb3]
0x067C9780: e00313aa  mov x0, x19
0x067C9784: e1031faa  mov x1, xzr
0x067C9788: 9d43bc97  bl #0x56da5fc
0x067C978C: a00240f9  ldr x0, [x21]
0x067C9790: 44dd2697  bl #0x3180ca0
0x067C9794: 810240f9  ldr x1, [x20]
0x067C9798: f40300aa  mov x20, x0
0x067C979C: 27e96197  bl #0x4043c38
0x067C97A0: 740e01f8  str x20, [x19, #0x10]!
0x067C97A4: e00313aa  mov x0, x19
0x067C97A8: e10314aa  mov x1, x20
0x067C97AC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x067C97B0: f65741a9  ldp x22, x21, [sp, #0x10]
0x067C97B4: fe0743f8  ldr x30, [sp], #0x30
0x067C97B8: 83dc2617  b #0x31809c4

