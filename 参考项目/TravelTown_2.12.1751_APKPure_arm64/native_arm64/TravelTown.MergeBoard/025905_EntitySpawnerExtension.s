; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25905 Merger.MergeBoard.Extensions.EntitySpawnerExtension
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9811C | public static bool IsSpawner(Entity entity) { }
; bytes=168 sha256=c651ddb9a369a7267eb5147018decdcd358049a0c9b2e23136c77c74c7d2cd85 status=arm64_complete_bound indexed_start=True
0x06A9811C: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A98120: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A98124: 949400d0  adrp x20, #0x7d2a000
0x06A98128: 88826039  ldrb w8, [x20, #0x820]
0x06A9812C: f30300aa  mov x19, x0
0x06A98130: 88010037  tbnz w8, #0, #0x6a98160
0x06A98134: c06400b0  adrp x0, #0x7731000
0x06A98138: 001440f9  ldr x0, [x0, #0x28]
0x06A9813C: 37a21b97  bl #0x3180a18
0x06A98140: c06400b0  adrp x0, #0x7731000
0x06A98144: 001840f9  ldr x0, [x0, #0x30]
0x06A98148: 34a21b97  bl #0x3180a18
0x06A9814C: c06400d0  adrp x0, #0x7732000
0x06A98150: 00c442f9  ldr x0, [x0, #0x588]
0x06A98154: 31a21b97  bl #0x3180a18
0x06A98158: 28008052  movz w8, #0x1
0x06A9815C: 88822039  strb w8, [x20, #0x820]
0x06A98160: 130300b4  cbz x19, #0x6a981c0
0x06A98164: c86400b0  adrp x8, #0x7731000
0x06A98168: 081540f9  ldr x8, [x8, #0x28]
0x06A9816C: e00313aa  mov x0, x19
0x06A98170: 010140f9  ldr x1, [x8]
0x06A98174: 2f0f4697  bl #0x3c1be30
0x06A98178: e0000037  tbnz w0, #0, #0x6a98194
0x06A9817C: c86400b0  adrp x8, #0x7731000
0x06A98180: 081940f9  ldr x8, [x8, #0x30]
0x06A98184: e00313aa  mov x0, x19
0x06A98188: 010140f9  ldr x1, [x8]
0x06A9818C: 4f0f4697  bl #0x3c1bec8
0x06A98190: a0000036  tbz w0, #0, #0x6a981a4
0x06A98194: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A98198: 20008052  movz w0, #0x1
0x06A9819C: fe0742f8  ldr x30, [sp], #0x20
0x06A981A0: c0035fd6  ret
0x06A981A4: c86400d0  adrp x8, #0x7732000
0x06A981A8: 08c542f9  ldr x8, [x8, #0x588]
0x06A981AC: e00313aa  mov x0, x19
0x06A981B0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A981B4: 010140f9  ldr x1, [x8]
0x06A981B8: fe0742f8  ldr x30, [sp], #0x20
0x06A981BC: db0f4617  b #0x3c1c128
0x06A981C0: bba21b97  bl #0x3180cac

