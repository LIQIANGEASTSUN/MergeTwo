; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 26003 .InteractionComponent.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9BF84 | private static void .cctor() { }
; bytes=104 sha256=68191fd10fea4d12264d7b3b4ab1d40406305f55002540165e2cd041c14fc21d status=arm64_complete_bound indexed_start=True
0x06A9BF84: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A9BF88: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A9BF8C: 739400f0  adrp x19, #0x7d2a000
0x06A9BF90: b46400d0  adrp x20, #0x7731000
0x06A9BF94: 684e6139  ldrb w8, [x19, #0x853]
0x06A9BF98: 94ae46f9  ldr x20, [x20, #0xd58]
0x06A9BF9C: c8000037  tbnz w8, #0, #0x6a9bfb4
0x06A9BFA0: a06400d0  adrp x0, #0x7731000
0x06A9BFA4: 00ac46f9  ldr x0, [x0, #0xd58]
0x06A9BFA8: 9c921b97  bl #0x3180a18
0x06A9BFAC: 28008052  movz w8, #0x1
0x06A9BFB0: 684e2139  strb w8, [x19, #0x853]
0x06A9BFB4: 800240f9  ldr x0, [x20]
0x06A9BFB8: 3a931b97  bl #0x3180ca0
0x06A9BFBC: e1031faa  mov x1, xzr
0x06A9BFC0: f30300aa  mov x19, x0
0x06A9BFC4: 8ef9b097  bl #0x56da5fc
0x06A9BFC8: 880240f9  ldr x8, [x20]
0x06A9BFCC: e10313aa  mov x1, x19
0x06A9BFD0: 085d40f9  ldr x8, [x8, #0xb8]
0x06A9BFD4: 130100f9  str x19, [x8]
0x06A9BFD8: 880240f9  ldr x8, [x20]
0x06A9BFDC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A9BFE0: 005d40f9  ldr x0, [x8, #0xb8]
0x06A9BFE4: fe0742f8  ldr x30, [sp], #0x20
0x06A9BFE8: 77921b17  b #0x31809c4

; RVA 0x6A9BFEC | public void .ctor() { }
; bytes=8 sha256=4a6f2116b19606e31de2a8355f2f5516190845ac2f03a198afe0d69e88cc518e status=arm64_complete_bound indexed_start=True
0x06A9BFEC: e1031faa  mov x1, xzr
0x06A9BFF0: 83f9b017  b #0x56da5fc

; RVA 0x6A9BFF4 | internal string <get_ItemsToConsumeIds>b__7_0(ItemMultiple item) { }
; bytes=80 sha256=abbe2c8064c07b4564af82840c6f4067e21c5e72c6c297b93c259b8a9aa52056 status=arm64_complete_bound indexed_start=True
0x06A9BFF4: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A9BFF8: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A9BFFC: 749400f0  adrp x20, #0x7d2a000
0x06A9C000: 88526139  ldrb w8, [x20, #0x854]
0x06A9C004: f30301aa  mov x19, x1
0x06A9C008: c8000037  tbnz w8, #0, #0x6a9c020
0x06A9C00C: 80610090  adrp x0, #0x76cc000
0x06A9C010: 00d442f9  ldr x0, [x0, #0x5a8]
0x06A9C014: 81921b97  bl #0x3180a18
0x06A9C018: 28008052  movz w8, #0x1
0x06A9C01C: 88522139  strb w8, [x20, #0x854]
0x06A9C020: 130100b4  cbz x19, #0x6a9c040
0x06A9C024: 88610090  adrp x8, #0x76cc000
0x06A9C028: 08d542f9  ldr x8, [x8, #0x5a8]
0x06A9C02C: e00313aa  mov x0, x19
0x06A9C030: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A9C034: 010140f9  ldr x1, [x8]
0x06A9C038: fe0742f8  ldr x30, [sp], #0x20
0x06A9C03C: 17daa317  b #0x5392898
0x06A9C040: 1b931b97  bl #0x3180cac

