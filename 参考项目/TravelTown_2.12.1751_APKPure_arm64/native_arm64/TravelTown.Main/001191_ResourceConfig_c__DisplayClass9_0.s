; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1191 .ResourceConfig.<>c__DisplayClass9_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A139B8 | public void .ctor() { }
; bytes=8 sha256=9eb05ad6c23f9ddf655d1e1edcf63c500ced4a54ac5432427c3df3564e067cc1 status=arm64_complete_bound indexed_start=True
0x06A139B8: e1031faa  mov x1, xzr
0x06A139BC: 101bb317  b #0x56da5fc

; RVA 0x6A139C0 | internal bool <IsResourceDefinitionsNotValid>b__0(ResourceDefinition x) { }
; bytes=92 sha256=3e02ec4f5abbc5f8766165414e9d3443540cad26901579a98344c3901ff99458 status=arm64_complete_bound indexed_start=True
0x06A139C0: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A139C4: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A139C8: b59800f0  adrp x21, #0x7d2a000
0x06A139CC: a8924c39  ldrb w8, [x21, #0x324]
0x06A139D0: f30301aa  mov x19, x1
0x06A139D4: f40300aa  mov x20, x0
0x06A139D8: c8000037  tbnz w8, #0, #0x6a139f0
0x06A139DC: 40660090  adrp x0, #0x76db000
0x06A139E0: 00a845f9  ldr x0, [x0, #0xb50]
0x06A139E4: 0db41d97  bl #0x3180a18
0x06A139E8: 28008052  movz w8, #0x1
0x06A139EC: a8920c39  strb w8, [x21, #0x324]
0x06A139F0: 530100b4  cbz x19, #0x6a13a18
0x06A139F4: 800a40f9  ldr x0, [x20, #0x10]
0x06A139F8: 000100b4  cbz x0, #0x6a13a18
0x06A139FC: 48660090  adrp x8, #0x76db000
0x06A13A00: 08a945f9  ldr x8, [x8, #0xb50]
0x06A13A04: 611240b9  ldr w1, [x19, #0x10]
0x06A13A08: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A13A0C: 020140f9  ldr x2, [x8]
0x06A13A10: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A13A14: 1da4a217  b #0x52bca88
0x06A13A18: a5b41d97  bl #0x3180cac

