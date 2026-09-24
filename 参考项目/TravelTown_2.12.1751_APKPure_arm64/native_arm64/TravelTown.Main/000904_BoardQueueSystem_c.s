; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 904 .BoardQueueSystem.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6666BB4 | private static void .cctor() { }
; bytes=104 sha256=108215b3ef7c07a2188157c23493a85a1ad591f16deac79289b9635885ea9590 status=arm64_complete_bound indexed_start=True
0x06666BB4: fe0f1ef8  str x30, [sp, #-0x20]!
0x06666BB8: f44f01a9  stp x20, x19, [sp, #0x10]
0x06666BBC: 13b600d0  adrp x19, #0x7d28000
0x06666BC0: 148500b0  adrp x20, #0x7707000
0x06666BC4: 68fa4239  ldrb w8, [x19, #0xbe]
0x06666BC8: 944646f9  ldr x20, [x20, #0xc88]
0x06666BCC: c8000037  tbnz w8, #0, #0x6666be4
0x06666BD0: 008500b0  adrp x0, #0x7707000
0x06666BD4: 004446f9  ldr x0, [x0, #0xc88]
0x06666BD8: 90672c97  bl #0x3180a18
0x06666BDC: 28008052  movz w8, #0x1
0x06666BE0: 68fa0239  strb w8, [x19, #0xbe]
0x06666BE4: 800240f9  ldr x0, [x20]
0x06666BE8: 2e682c97  bl #0x3180ca0
0x06666BEC: e1031faa  mov x1, xzr
0x06666BF0: f30300aa  mov x19, x0
0x06666BF4: 82cec197  bl #0x56da5fc
0x06666BF8: 880240f9  ldr x8, [x20]
0x06666BFC: e10313aa  mov x1, x19
0x06666C00: 085d40f9  ldr x8, [x8, #0xb8]
0x06666C04: 130100f9  str x19, [x8]
0x06666C08: 880240f9  ldr x8, [x20]
0x06666C0C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06666C10: 005d40f9  ldr x0, [x8, #0xb8]
0x06666C14: fe0742f8  ldr x30, [sp], #0x20
0x06666C18: 6b672c17  b #0x31809c4

; RVA 0x6666C1C | public void .ctor() { }
; bytes=8 sha256=ee64f099673ce4db482c3a6905023d1ffa79f70a92c3cb7365fb0a214bea1f97 status=arm64_complete_bound indexed_start=True
0x06666C1C: e1031faa  mov x1, xzr
0x06666C20: 77cec117  b #0x56da5fc

; RVA 0x6666C24 | internal long <TryDequeueRewardItem>b__41_1(QueuedItem x) { }
; bytes=24 sha256=84230c1a702433fb5c37319d85f2d4ee0a2080b933bb38ad5a21a2abcac308a8 status=arm64_complete_bound indexed_start=True
0x06666C24: fe0f1ff8  str x30, [sp, #-0x10]!
0x06666C28: 810000b4  cbz x1, #0x6666c38
0x06666C2C: 201840f9  ldr x0, [x1, #0x30]
0x06666C30: fe0741f8  ldr x30, [sp], #0x10
0x06666C34: c0035fd6  ret
0x06666C38: 1d682c97  bl #0x3180cac

; RVA 0x6666C3C | internal string <TrackBoosterDequeueOperation>b__53_0(QueuedItem x) { }
; bytes=24 sha256=204061c80c56b9c96389892ab49c925554938db8d93682ac900d277d9cfc6d4c status=arm64_complete_bound indexed_start=True
0x06666C3C: fe0f1ff8  str x30, [sp, #-0x10]!
0x06666C40: 810000b4  cbz x1, #0x6666c50
0x06666C44: 201440f9  ldr x0, [x1, #0x28]
0x06666C48: fe0741f8  ldr x30, [sp], #0x10
0x06666C4C: c0035fd6  ret
0x06666C50: 17682c97  bl #0x3180cac

