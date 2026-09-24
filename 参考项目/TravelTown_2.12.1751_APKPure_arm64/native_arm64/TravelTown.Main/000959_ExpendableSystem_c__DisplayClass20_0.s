; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 959 .ExpendableSystem.<>c__DisplayClass20_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x678E6DC | public void .ctor() { }
; bytes=8 sha256=2e780a4fe53ca5c72e39e69d1a6b387b60d383e37ceb077886cffd715fef7600 status=arm64_complete_bound indexed_start=True
0x0678E6DC: e1031faa  mov x1, xzr
0x0678E6E0: c72fbd17  b #0x56da5fc

; RVA 0x679049C | internal void <TrySpawnParticles>b__0() { }
; bytes=176 sha256=9a9547d483b038221b053ab12aedaaccf75d6b1017bfeb78611231dee176f842 status=arm64_complete_bound indexed_start=True
0x0679049C: fe0f1df8  str x30, [sp, #-0x30]!
0x067904A0: f65701a9  stp x22, x21, [sp, #0x10]
0x067904A4: f44f02a9  stp x20, x19, [sp, #0x20]
0x067904A8: d4ac0090  adrp x20, #0x7d28000
0x067904AC: 888a7539  ldrb w8, [x20, #0xd62]
0x067904B0: f30300aa  mov x19, x0
0x067904B4: 28010037  tbnz w8, #0, #0x67904d8
0x067904B8: 807b0090  adrp x0, #0x7700000
0x067904BC: 004c45f9  ldr x0, [x0, #0xa98]
0x067904C0: 56c12797  bl #0x3180a18
0x067904C4: 807b0090  adrp x0, #0x7700000
0x067904C8: 005045f9  ldr x0, [x0, #0xaa0]
0x067904CC: 53c12797  bl #0x3180a18
0x067904D0: 28008052  movz w8, #0x1
0x067904D4: 888a3539  strb w8, [x20, #0xd62]
0x067904D8: 680a40f9  ldr x8, [x19, #0x10]
0x067904DC: 680300b4  cbz x8, #0x6790548
0x067904E0: 690e40f9  ldr x9, [x19, #0x18]
0x067904E4: 290300b4  cbz x9, #0x6790548
0x067904E8: 6a1240f9  ldr x10, [x19, #0x20]
0x067904EC: ea0200b4  cbz x10, #0x6790548
0x067904F0: 8b7b0090  adrp x11, #0x7700000
0x067904F4: 6b5145f9  ldr x11, [x11, #0xaa0]
0x067904F8: 131540f9  ldr x19, [x8, #0x28]
0x067904FC: 354540b9  ldr w21, [x9, #0x44]
0x06790500: 561940f9  ldr x22, [x10, #0x30]
0x06790504: 600140f9  ldr x0, [x11]
0x06790508: e6c12797  bl #0x3180ca0
0x0679050C: e103152a  mov w1, w21
0x06790510: e20316aa  mov x2, x22
0x06790514: e3031faa  mov x3, xzr
0x06790518: f40300aa  mov x20, x0
0x0679051C: dc71ff97  bl #0x676cc8c
0x06790520: 530100b4  cbz x19, #0x6790548
0x06790524: 887b0090  adrp x8, #0x7700000
0x06790528: 084d45f9  ldr x8, [x8, #0xa98]
0x0679052C: e00313aa  mov x0, x19
0x06790530: e10314aa  mov x1, x20
0x06790534: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06790538: 020140f9  ldr x2, [x8]
0x0679053C: f65741a9  ldp x22, x21, [sp, #0x10]
0x06790540: fe0743f8  ldr x30, [sp], #0x30
0x06790544: 0a525817  b #0x3da4d6c
0x06790548: d9c12797  bl #0x3180cac

