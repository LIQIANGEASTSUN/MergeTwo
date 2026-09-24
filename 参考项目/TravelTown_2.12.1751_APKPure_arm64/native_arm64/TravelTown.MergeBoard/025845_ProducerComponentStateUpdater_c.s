; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25845 .ProducerComponentStateUpdater.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A85B50 | private static void .cctor() { }
; bytes=104 sha256=9c93f9b5ba512928a11df6aa14b9312ec7d4844acf0596793766bf75775a41fe status=arm64_complete_bound indexed_start=True
0x06A85B50: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A85B54: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A85B58: 339500b0  adrp x19, #0x7d2a000
0x06A85B5C: 74650090  adrp x20, #0x7731000
0x06A85B60: 684e5e39  ldrb w8, [x19, #0x793]
0x06A85B64: 946a46f9  ldr x20, [x20, #0xcd0]
0x06A85B68: c8000037  tbnz w8, #0, #0x6a85b80
0x06A85B6C: 60650090  adrp x0, #0x7731000
0x06A85B70: 006846f9  ldr x0, [x0, #0xcd0]
0x06A85B74: a9eb1b97  bl #0x3180a18
0x06A85B78: 28008052  movz w8, #0x1
0x06A85B7C: 684e1e39  strb w8, [x19, #0x793]
0x06A85B80: 800240f9  ldr x0, [x20]
0x06A85B84: 47ec1b97  bl #0x3180ca0
0x06A85B88: e1031faa  mov x1, xzr
0x06A85B8C: f30300aa  mov x19, x0
0x06A85B90: 9b52b197  bl #0x56da5fc
0x06A85B94: 880240f9  ldr x8, [x20]
0x06A85B98: e10313aa  mov x1, x19
0x06A85B9C: 085d40f9  ldr x8, [x8, #0xb8]
0x06A85BA0: 130100f9  str x19, [x8]
0x06A85BA4: 880240f9  ldr x8, [x20]
0x06A85BA8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A85BAC: 005d40f9  ldr x0, [x8, #0xb8]
0x06A85BB0: fe0742f8  ldr x30, [sp], #0x20
0x06A85BB4: 84eb1b17  b #0x31809c4

; RVA 0x6A85BB8 | public void .ctor() { }
; bytes=8 sha256=bdd5e8ecb3c8e70b78f9aaa459080451c86c396a61d09410bf3101699a3e207b status=arm64_complete_bound indexed_start=True
0x06A85BB8: e1031faa  mov x1, xzr
0x06A85BBC: 9052b117  b #0x56da5fc

; RVA 0x6A85BC0 | internal IEnumerable<WeightedItem> <UpdateFromState>b__0_0(Combination interactionCostItem) { }
; bytes=24 sha256=a74909999ab33f6c776da8f41a4148338d5cea11788a29c8130a456cf1284523 status=arm64_complete_bound indexed_start=True
0x06A85BC0: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A85BC4: 810000b4  cbz x1, #0x6a85bd4
0x06A85BC8: 201440f9  ldr x0, [x1, #0x28]
0x06A85BCC: fe0741f8  ldr x30, [sp], #0x10
0x06A85BD0: c0035fd6  ret
0x06A85BD4: 36ec1b97  bl #0x3180cac

; RVA 0x6A85BD8 | internal WeightedItemSpawnable <UpdateFromState>b__0_1(WeightedItem i) { }
; bytes=124 sha256=28d249b85aea1558ea6b7d60ae3f7fa7d9a3f7b899d587562ef494fdc79768c6 status=arm64_complete_bound indexed_start=True
0x06A85BD8: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A85BDC: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A85BE0: 349500b0  adrp x20, #0x7d2a000
0x06A85BE4: d55f00b0  adrp x21, #0x767e000
0x06A85BE8: 88525e39  ldrb w8, [x20, #0x794]
0x06A85BEC: b5aa42f9  ldr x21, [x21, #0x550]
0x06A85BF0: f30301aa  mov x19, x1
0x06A85BF4: c8000037  tbnz w8, #0, #0x6a85c0c
0x06A85BF8: c05f00b0  adrp x0, #0x767e000
0x06A85BFC: 00a842f9  ldr x0, [x0, #0x550]
0x06A85C00: 86eb1b97  bl #0x3180a18
0x06A85C04: 28008052  movz w8, #0x1
0x06A85C08: 88521e39  strb w8, [x20, #0x794]
0x06A85C0C: a00240f9  ldr x0, [x21]
0x06A85C10: 24ec1b97  bl #0x3180ca0
0x06A85C14: e1031faa  mov x1, xzr
0x06A85C18: f40300aa  mov x20, x0
0x06A85C1C: 9a8ffe97  bl #0x6a29a84
0x06A85C20: 930100b4  cbz x19, #0x6a85c50
0x06A85C24: 740100b4  cbz x20, #0x6a85c50
0x06A85C28: 610e40f9  ldr x1, [x19, #0x18]
0x06A85C2C: e00314aa  mov x0, x20
0x06A85C30: 010c01f8  str x1, [x0, #0x10]!
0x06A85C34: 64eb1b97  bl #0x31809c4
0x06A85C38: 681240b9  ldr w8, [x19, #0x10]
0x06A85C3C: e00314aa  mov x0, x20
0x06A85C40: 882600b9  str w8, [x20, #0x24]
0x06A85C44: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A85C48: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A85C4C: c0035fd6  ret
0x06A85C50: 17ec1b97  bl #0x3180cac

