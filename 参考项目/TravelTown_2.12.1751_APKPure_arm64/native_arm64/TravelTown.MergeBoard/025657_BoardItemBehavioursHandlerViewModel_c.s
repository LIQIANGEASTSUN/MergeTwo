; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25657 .BoardItemBehavioursHandlerViewModel.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A311D0 | private static void .cctor() { }
; bytes=104 sha256=4391c3c7621b82d0c5d647ec81f524f06905a64e68f4df7ffd6c20bd53213ee5 status=arm64_complete_bound indexed_start=True
0x06A311D0: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A311D4: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A311D8: d39700b0  adrp x19, #0x7d2a000
0x06A311DC: f46700d0  adrp x20, #0x772f000
0x06A311E0: 68325239  ldrb w8, [x19, #0x48c]
0x06A311E4: 94be41f9  ldr x20, [x20, #0x378]
0x06A311E8: c8000037  tbnz w8, #0, #0x6a31200
0x06A311EC: e06700d0  adrp x0, #0x772f000
0x06A311F0: 00bc41f9  ldr x0, [x0, #0x378]
0x06A311F4: 093e1d97  bl #0x3180a18
0x06A311F8: 28008052  movz w8, #0x1
0x06A311FC: 68321239  strb w8, [x19, #0x48c]
0x06A31200: 800240f9  ldr x0, [x20]
0x06A31204: a73e1d97  bl #0x3180ca0
0x06A31208: e1031faa  mov x1, xzr
0x06A3120C: f30300aa  mov x19, x0
0x06A31210: fba4b297  bl #0x56da5fc
0x06A31214: 880240f9  ldr x8, [x20]
0x06A31218: e10313aa  mov x1, x19
0x06A3121C: 085d40f9  ldr x8, [x8, #0xb8]
0x06A31220: 130100f9  str x19, [x8]
0x06A31224: 880240f9  ldr x8, [x20]
0x06A31228: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A3122C: 005d40f9  ldr x0, [x8, #0xb8]
0x06A31230: fe0742f8  ldr x30, [sp], #0x20
0x06A31234: e43d1d17  b #0x31809c4

; RVA 0x6A31238 | public void .ctor() { }
; bytes=8 sha256=eef052a7b80550545268020f4a7b6ddc03a2b4f290e5f06ff425f41798d9fe25 status=arm64_complete_bound indexed_start=True
0x06A31238: e1031faa  mov x1, xzr
0x06A3123C: f0a4b217  b #0x56da5fc

; RVA 0x6A31240 | internal string <GetCombinedBehaviourConfig>b__7_0(BehaviourPrefabData data) { }
; bytes=24 sha256=f49924b8e9b2d753a50829b3d37e755a9cfc8b29c3dc9871f1fe979b43d1a46d status=arm64_complete_bound indexed_start=True
0x06A31240: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A31244: 810000b4  cbz x1, #0x6a31254
0x06A31248: 200840f9  ldr x0, [x1, #0x10]
0x06A3124C: fe0741f8  ldr x30, [sp], #0x10
0x06A31250: c0035fd6  ret
0x06A31254: 963e1d97  bl #0x3180cac

; RVA 0x6A31258 | internal BehaviourPrefabData <GetCombinedBehaviourConfig>b__7_1(BehaviourPrefabData data) { }
; bytes=8 sha256=50ddf39453988ba55a1b7d9bbba7f1ae7c5c5c3f7414c859acf17118fa4886b8 status=arm64_complete_bound indexed_start=True
0x06A31258: e00301aa  mov x0, x1
0x06A3125C: c0035fd6  ret

