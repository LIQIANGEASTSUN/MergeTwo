; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25749 .ItemDiscoverySystem.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A6D83C | private static void .cctor() { }
; bytes=104 sha256=1b24116cd5f42a30c359dd64752cdbd2a03e1e94a38228582405984825f7efa0 status=arm64_complete_bound indexed_start=True
0x06A6D83C: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A6D840: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A6D844: f39500b0  adrp x19, #0x7d2a000
0x06A6D848: 146600f0  adrp x20, #0x7730000
0x06A6D84C: 68565b39  ldrb w8, [x19, #0x6d5]
0x06A6D850: 94ee47f9  ldr x20, [x20, #0xfd8]
0x06A6D854: c8000037  tbnz w8, #0, #0x6a6d86c
0x06A6D858: 006600f0  adrp x0, #0x7730000
0x06A6D85C: 00ec47f9  ldr x0, [x0, #0xfd8]
0x06A6D860: 6e4c1c97  bl #0x3180a18
0x06A6D864: 28008052  movz w8, #0x1
0x06A6D868: 68561b39  strb w8, [x19, #0x6d5]
0x06A6D86C: 800240f9  ldr x0, [x20]
0x06A6D870: 0c4d1c97  bl #0x3180ca0
0x06A6D874: e1031faa  mov x1, xzr
0x06A6D878: f30300aa  mov x19, x0
0x06A6D87C: 60b3b197  bl #0x56da5fc
0x06A6D880: 880240f9  ldr x8, [x20]
0x06A6D884: e10313aa  mov x1, x19
0x06A6D888: 085d40f9  ldr x8, [x8, #0xb8]
0x06A6D88C: 130100f9  str x19, [x8]
0x06A6D890: 880240f9  ldr x8, [x20]
0x06A6D894: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A6D898: 005d40f9  ldr x0, [x8, #0xb8]
0x06A6D89C: fe0742f8  ldr x30, [sp], #0x20
0x06A6D8A0: 494c1c17  b #0x31809c4

; RVA 0x6A6D8A4 | public void .ctor() { }
; bytes=8 sha256=f0faeef4036eb54e42a47dfd98e49fa80c742edf0fb960c1d1abb48dbffa5335 status=arm64_complete_bound indexed_start=True
0x06A6D8A4: e1031faa  mov x1, xzr
0x06A6D8A8: 55b3b117  b #0x56da5fc

; RVA 0x6A6D8AC | internal bool <DiscoverNewCreatedItems>b__4_0(ValueTuple<Entity, IdComponent, LockComponent, BoxComponent> query) { }
; bytes=80 sha256=71ad15ffbd90b3efb44bd7e07b31a5f1c501be7ad6c73c8aeaf1cafcd62f72dd status=arm64_complete_bound indexed_start=True
0x06A6D8AC: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A6D8B0: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A6D8B4: f49500b0  adrp x20, #0x7d2a000
0x06A6D8B8: 885a5b39  ldrb w8, [x20, #0x6d6]
0x06A6D8BC: f30301aa  mov x19, x1
0x06A6D8C0: c8000037  tbnz w8, #0, #0x6a6d8d8
0x06A6D8C4: 20660090  adrp x0, #0x7731000
0x06A6D8C8: 003840f9  ldr x0, [x0, #0x70]
0x06A6D8CC: 534c1c97  bl #0x3180a18
0x06A6D8D0: 28008052  movz w8, #0x1
0x06A6D8D4: 885a1b39  strb w8, [x20, #0x6d6]
0x06A6D8D8: 600240f9  ldr x0, [x19]
0x06A6D8DC: e00000b4  cbz x0, #0x6a6d8f8
0x06A6D8E0: 28660090  adrp x8, #0x7731000
0x06A6D8E4: 083940f9  ldr x8, [x8, #0x70]
0x06A6D8E8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A6D8EC: 010140f9  ldr x1, [x8]
0x06A6D8F0: fe0742f8  ldr x30, [sp], #0x20
0x06A6D8F4: 87b74617  b #0x3c1b710
0x06A6D8F8: ed4c1c97  bl #0x3180cac

; RVA 0x6A6D8FC | internal bool <DiscoverUnboxedItems>b__5_0(ValueTuple<Entity, IdComponent, LockComponent, BoxComponent> query) { }
; bytes=80 sha256=5d71e2d287b2a87c2ac47663cb495709ec660ba5f9916aa6e7076fbc70f87c7e status=arm64_complete_bound indexed_start=True
0x06A6D8FC: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A6D900: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A6D904: f49500b0  adrp x20, #0x7d2a000
0x06A6D908: 885e5b39  ldrb w8, [x20, #0x6d7]
0x06A6D90C: f30301aa  mov x19, x1
0x06A6D910: c8000037  tbnz w8, #0, #0x6a6d928
0x06A6D914: 20660090  adrp x0, #0x7731000
0x06A6D918: 003c40f9  ldr x0, [x0, #0x78]
0x06A6D91C: 3f4c1c97  bl #0x3180a18
0x06A6D920: 28008052  movz w8, #0x1
0x06A6D924: 885e1b39  strb w8, [x20, #0x6d7]
0x06A6D928: 600240f9  ldr x0, [x19]
0x06A6D92C: e00000b4  cbz x0, #0x6a6d948
0x06A6D930: 28660090  adrp x8, #0x7731000
0x06A6D934: 083d40f9  ldr x8, [x8, #0x78]
0x06A6D938: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A6D93C: 010140f9  ldr x1, [x8]
0x06A6D940: fe0742f8  ldr x30, [sp], #0x20
0x06A6D944: c9b84617  b #0x3c1bc68
0x06A6D948: d94c1c97  bl #0x3180cac

