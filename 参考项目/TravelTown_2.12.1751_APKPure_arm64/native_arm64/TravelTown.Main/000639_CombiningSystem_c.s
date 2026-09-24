; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 639 .CombiningSystem.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x627E870 | private static void .cctor() { }
; bytes=104 sha256=19230713e0eb06bd09a25a97d679956747b406c1187f7105d006753f3cd185ce status=arm64_complete_bound indexed_start=True
0x0627E870: fe0f1ef8  str x30, [sp, #-0x20]!
0x0627E874: f44f01a9  stp x20, x19, [sp, #0x10]
0x0627E878: 33d500f0  adrp x19, #0x7d25000
0x0627E87C: 54a30090  adrp x20, #0x76e6000
0x0627E880: 68aa5239  ldrb w8, [x19, #0x4aa]
0x0627E884: 940647f9  ldr x20, [x20, #0xe08]
0x0627E888: c8000037  tbnz w8, #0, #0x627e8a0
0x0627E88C: 40a30090  adrp x0, #0x76e6000
0x0627E890: 000447f9  ldr x0, [x0, #0xe08]
0x0627E894: 61083c97  bl #0x3180a18
0x0627E898: 28008052  movz w8, #0x1
0x0627E89C: 68aa1239  strb w8, [x19, #0x4aa]
0x0627E8A0: 800240f9  ldr x0, [x20]
0x0627E8A4: ff083c97  bl #0x3180ca0
0x0627E8A8: e1031faa  mov x1, xzr
0x0627E8AC: f30300aa  mov x19, x0
0x0627E8B0: 536fd197  bl #0x56da5fc
0x0627E8B4: 880240f9  ldr x8, [x20]
0x0627E8B8: e10313aa  mov x1, x19
0x0627E8BC: 085d40f9  ldr x8, [x8, #0xb8]
0x0627E8C0: 130100f9  str x19, [x8]
0x0627E8C4: 880240f9  ldr x8, [x20]
0x0627E8C8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0627E8CC: 005d40f9  ldr x0, [x8, #0xb8]
0x0627E8D0: fe0742f8  ldr x30, [sp], #0x20
0x0627E8D4: 3c083c17  b #0x31809c4

; RVA 0x627E8D8 | public void .ctor() { }
; bytes=8 sha256=17bd8a80eeba4aba4aa00ef10b6f268c7632d83c42e0af503182b262ac2ba6c0 status=arm64_complete_bound indexed_start=True
0x0627E8D8: e1031faa  mov x1, xzr
0x0627E8DC: 486fd117  b #0x56da5fc

; RVA 0x627E8E0 | internal string <PrepareAnalyticsData>b__31_0(ItemPayloadBase item) { }
; bytes=24 sha256=f4b482a08cb1a617fc93df520a266bc9cdf511ec60686eb781726869eceac189 status=arm64_complete_bound indexed_start=True
0x0627E8E0: fe0f1ff8  str x30, [sp, #-0x10]!
0x0627E8E4: 810000b4  cbz x1, #0x627e8f4
0x0627E8E8: 200840f9  ldr x0, [x1, #0x10]
0x0627E8EC: fe0741f8  ldr x30, [sp], #0x10
0x0627E8F0: c0035fd6  ret
0x0627E8F4: ee083c97  bl #0x3180cac

