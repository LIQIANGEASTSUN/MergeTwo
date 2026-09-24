; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 8577 .BoardView.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6699A80 | private static void .cctor() { }
; bytes=104 sha256=1fc4f897d83da97e043b8bff0618992c43d0313111fad94a621082cef153c07a status=arm64_complete_bound indexed_start=True
0x06699A80: fe0f1ef8  str x30, [sp, #-0x20]!
0x06699A84: f44f01a9  stp x20, x19, [sp, #0x10]
0x06699A88: 73b400f0  adrp x19, #0x7d28000
0x06699A8C: 94830090  adrp x20, #0x7709000
0x06699A90: 68ca4b39  ldrb w8, [x19, #0x2f2]
0x06699A94: 941a41f9  ldr x20, [x20, #0x230]
0x06699A98: c8000037  tbnz w8, #0, #0x6699ab0
0x06699A9C: 80830090  adrp x0, #0x7709000
0x06699AA0: 001841f9  ldr x0, [x0, #0x230]
0x06699AA4: dd9b2b97  bl #0x3180a18
0x06699AA8: 28008052  movz w8, #0x1
0x06699AAC: 68ca0b39  strb w8, [x19, #0x2f2]
0x06699AB0: 800240f9  ldr x0, [x20]
0x06699AB4: 7b9c2b97  bl #0x3180ca0
0x06699AB8: e1031faa  mov x1, xzr
0x06699ABC: f30300aa  mov x19, x0
0x06699AC0: cf02c197  bl #0x56da5fc
0x06699AC4: 880240f9  ldr x8, [x20]
0x06699AC8: e10313aa  mov x1, x19
0x06699ACC: 085d40f9  ldr x8, [x8, #0xb8]
0x06699AD0: 130100f9  str x19, [x8]
0x06699AD4: 880240f9  ldr x8, [x20]
0x06699AD8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06699ADC: 005d40f9  ldr x0, [x8, #0xb8]
0x06699AE0: fe0742f8  ldr x30, [sp], #0x20
0x06699AE4: b89b2b17  b #0x31809c4

; RVA 0x6699AE8 | public void .ctor() { }
; bytes=8 sha256=3e4ef6f1ad36c901cb14ddc353e598cdd322ab09d630741303608311f82d63f8 status=arm64_complete_bound indexed_start=True
0x06699AE8: e1031faa  mov x1, xzr
0x06699AEC: c402c117  b #0x56da5fc

; RVA 0x6699AF0 | internal string <GetCombinedBehaviourConfig>b__107_0(BehaviourPrefabData data) { }
; bytes=24 sha256=7b0cf12c79ab10306a4ce37013d85fe099de6c5ef41072b2d012f2b7f8a9647b status=arm64_complete_bound indexed_start=True
0x06699AF0: fe0f1ff8  str x30, [sp, #-0x10]!
0x06699AF4: 810000b4  cbz x1, #0x6699b04
0x06699AF8: 200840f9  ldr x0, [x1, #0x10]
0x06699AFC: fe0741f8  ldr x30, [sp], #0x10
0x06699B00: c0035fd6  ret
0x06699B04: 6a9c2b97  bl #0x3180cac

; RVA 0x6699B08 | internal BehaviourPrefabData <GetCombinedBehaviourConfig>b__107_1(BehaviourPrefabData data) { }
; bytes=8 sha256=50ddf39453988ba55a1b7d9bbba7f1ae7c5c5c3f7414c859acf17118fa4886b8 status=arm64_complete_bound indexed_start=True
0x06699B08: e00301aa  mov x0, x1
0x06699B0C: c0035fd6  ret

; RVA 0x6699B10 | internal void <Framework.UIFSM.Fsm.IExitStateHandler.HandleExitState>b__161_0(IBoardItemView item) { }
; bytes=188 sha256=734fa70364853256169c526fbe27a7531588a58e7abf0cca735743f144673c2f status=arm64_complete_bound indexed_start=True
0x06699B10: fe0f1ef8  str x30, [sp, #-0x20]!
0x06699B14: f44f01a9  stp x20, x19, [sp, #0x10]
0x06699B18: 74b400f0  adrp x20, #0x7d28000
0x06699B1C: 88ce4b39  ldrb w8, [x20, #0x2f3]
0x06699B20: f30301aa  mov x19, x1
0x06699B24: c8000037  tbnz w8, #0, #0x6699b3c
0x06699B28: 208100f0  adrp x0, #0x76c0000
0x06699B2C: 002c44f9  ldr x0, [x0, #0x858]
0x06699B30: ba9b2b97  bl #0x3180a18
0x06699B34: 28008052  movz w8, #0x1
0x06699B38: 88ce0b39  strb w8, [x20, #0x2f3]
0x06699B3C: 730400b4  cbz x19, #0x6699bc8
0x06699B40: 2a8100f0  adrp x10, #0x76c0000
0x06699B44: 680240f9  ldr x8, [x19]
0x06699B48: 4a2d44f9  ldr x10, [x10, #0x858]
0x06699B4C: 095d4279  ldrh w9, [x8, #0x12e]
0x06699B50: 410140f9  ldr x1, [x10]
0x06699B54: 290100b4  cbz x9, #0x6699b78
0x06699B58: 0a5940f9  ldr x10, [x8, #0xb0]
0x06699B5C: 4a210091  add x10, x10, #8
0x06699B60: 4b815ff8  ldur x11, [x10, #-8]
0x06699B64: 7f0101eb  cmp x11, x1
0x06699B68: 00010054  b.eq #0x6699b88
0x06699B6C: 290500f1  subs x9, x9, #1
0x06699B70: 4a410091  add x10, x10, #0x10
0x06699B74: 61ffff54  b.ne #0x6699b60
0x06699B78: 22018052  movz w2, #0x9
0x06699B7C: e00313aa  mov x0, x19
0x06699B80: e4f32a97  bl #0x3156b10
0x06699B84: 05000014  b #0x6699b98
0x06699B88: 490140b9  ldr w9, [x10]
0x06699B8C: 29250011  add w9, w9, #9
0x06699B90: 08d1298b  add x8, x8, w9, sxtw #4
0x06699B94: 00e10491  add x0, x8, #0x138
0x06699B98: 080440a9  ldp x8, x1, [x0]
0x06699B9C: e00313aa  mov x0, x19
0x06699BA0: 00013fd6  blr x8
0x06699BA4: c00000b4  cbz x0, #0x6699bbc
0x06699BA8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06699BAC: 21008052  movz w1, #0x1
0x06699BB0: e2031faa  mov x2, xzr
0x06699BB4: fe0742f8  ldr x30, [sp], #0x20
0x06699BB8: 8f544517  b #0x37eedf4
0x06699BBC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06699BC0: fe0742f8  ldr x30, [sp], #0x20
0x06699BC4: c0035fd6  ret
0x06699BC8: 399c2b97  bl #0x3180cac

