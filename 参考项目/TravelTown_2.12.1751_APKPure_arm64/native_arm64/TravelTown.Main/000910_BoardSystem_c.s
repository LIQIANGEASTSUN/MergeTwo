; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 910 .BoardSystem.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x666B918 | private static void .cctor() { }
; bytes=104 sha256=1c2f8cafefed50522fcb60e62a52c8fb1bcb191a034974c3577e61441c091fe1 status=arm64_complete_bound indexed_start=True
0x0666B918: fe0f1ef8  str x30, [sp, #-0x20]!
0x0666B91C: f44f01a9  stp x20, x19, [sp, #0x10]
0x0666B920: f3b500b0  adrp x19, #0x7d28000
0x0666B924: f4840090  adrp x20, #0x7707000
0x0666B928: 68964339  ldrb w8, [x19, #0xe5]
0x0666B92C: 94f646f9  ldr x20, [x20, #0xde8]
0x0666B930: c8000037  tbnz w8, #0, #0x666b948
0x0666B934: e0840090  adrp x0, #0x7707000
0x0666B938: 00f446f9  ldr x0, [x0, #0xde8]
0x0666B93C: 37542c97  bl #0x3180a18
0x0666B940: 28008052  movz w8, #0x1
0x0666B944: 68960339  strb w8, [x19, #0xe5]
0x0666B948: 800240f9  ldr x0, [x20]
0x0666B94C: d5542c97  bl #0x3180ca0
0x0666B950: e1031faa  mov x1, xzr
0x0666B954: f30300aa  mov x19, x0
0x0666B958: 29bbc197  bl #0x56da5fc
0x0666B95C: 880240f9  ldr x8, [x20]
0x0666B960: e10313aa  mov x1, x19
0x0666B964: 085d40f9  ldr x8, [x8, #0xb8]
0x0666B968: 130100f9  str x19, [x8]
0x0666B96C: 880240f9  ldr x8, [x20]
0x0666B970: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0666B974: 005d40f9  ldr x0, [x8, #0xb8]
0x0666B978: fe0742f8  ldr x30, [sp], #0x20
0x0666B97C: 12542c17  b #0x31809c4

; RVA 0x666B980 | public void .ctor() { }
; bytes=8 sha256=e3ba835bc874e7bda3dbf4b3f85e2d97f472918196735f712c22f2e4ce3baaf2 status=arm64_complete_bound indexed_start=True
0x0666B980: e1031faa  mov x1, xzr
0x0666B984: 1ebbc117  b #0x56da5fc

; RVA 0x666B988 | internal bool <OnGameStarted>b__47_2(PositionComponent item) { }
; bytes=92 sha256=6a92a587672ef135f500020e9fa327451072eee8d1526169126a68c0b3a75e26 status=arm64_complete_bound indexed_start=True
0x0666B988: fe0f1ef8  str x30, [sp, #-0x20]!
0x0666B98C: f44f01a9  stp x20, x19, [sp, #0x10]
0x0666B990: f4b500b0  adrp x20, #0x7d28000
0x0666B994: 889a4339  ldrb w8, [x20, #0xe6]
0x0666B998: f30301aa  mov x19, x1
0x0666B99C: c8000037  tbnz w8, #0, #0x666b9b4
0x0666B9A0: 80800090  adrp x0, #0x767b000
0x0666B9A4: 00d047f9  ldr x0, [x0, #0xfa0]
0x0666B9A8: 1c542c97  bl #0x3180a18
0x0666B9AC: 28008052  movz w8, #0x1
0x0666B9B0: 889a0339  strb w8, [x20, #0xe6]
0x0666B9B4: 730100b4  cbz x19, #0x666b9e0
0x0666B9B8: 88800090  adrp x8, #0x767b000
0x0666B9BC: 08d147f9  ldr x8, [x8, #0xfa0]
0x0666B9C0: e00313aa  mov x0, x19
0x0666B9C4: 010140f9  ldr x1, [x8]
0x0666B9C8: 95075697  bl #0x3bed81c
0x0666B9CC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0666B9D0: 1f0000f1  cmp x0, #0
0x0666B9D4: e0179f1a  cset w0, eq
0x0666B9D8: fe0742f8  ldr x30, [sp], #0x20
0x0666B9DC: c0035fd6  ret
0x0666B9E0: b3542c97  bl #0x3180cac

; RVA 0x666B9E4 | internal void <LockBoardItemsBeforeFirstTutorial>b__52_0(PositionComponent component) { }
; bytes=104 sha256=e62aa9f94690e9429d1caba4dc2f8dd41c732909a1a06c0e5f0f9d0852735452 status=arm64_complete_bound indexed_start=True
0x0666B9E4: fe0f1ef8  str x30, [sp, #-0x20]!
0x0666B9E8: f44f01a9  stp x20, x19, [sp, #0x10]
0x0666B9EC: f4b500b0  adrp x20, #0x7d28000
0x0666B9F0: 889e4339  ldrb w8, [x20, #0xe7]
0x0666B9F4: f30301aa  mov x19, x1
0x0666B9F8: c8000037  tbnz w8, #0, #0x666ba10
0x0666B9FC: 808000f0  adrp x0, #0x767e000
0x0666BA00: 001c43f9  ldr x0, [x0, #0x638]
0x0666BA04: 05542c97  bl #0x3180a18
0x0666BA08: 28008052  movz w8, #0x1
0x0666BA0C: 889e0339  strb w8, [x20, #0xe7]
0x0666BA10: d30100b4  cbz x19, #0x666ba48
0x0666BA14: 888000f0  adrp x8, #0x767e000
0x0666BA18: 081d43f9  ldr x8, [x8, #0x638]
0x0666BA1C: e00313aa  mov x0, x19
0x0666BA20: 010140f9  ldr x1, [x8]
0x0666BA24: 7e075697  bl #0x3bed81c
0x0666BA28: a00000b4  cbz x0, #0x666ba3c
0x0666BA2C: 28208052  movz w8, #0x101
0x0666BA30: 29008052  movz w9, #0x1
0x0666BA34: 08e80079  strh w8, [x0, #0x74]
0x0666BA38: 09d80139  strb w9, [x0, #0x76]
0x0666BA3C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0666BA40: fe0742f8  ldr x30, [sp], #0x20
0x0666BA44: c0035fd6  ret
0x0666BA48: 99542c97  bl #0x3180cac

; RVA 0x666BA4C | internal bool <IsItemInDrag>b__77_0(PositionComponent entity) { }
; bytes=124 sha256=333b29aff79eeec490b6fbc9215c8b179f0c510eabeb987abc4c03025282c6ca status=arm64_complete_bound indexed_start=True
0x0666BA4C: fe0f1ef8  str x30, [sp, #-0x20]!
0x0666BA50: f44f01a9  stp x20, x19, [sp, #0x10]
0x0666BA54: f4b500b0  adrp x20, #0x7d28000
0x0666BA58: 88a24339  ldrb w8, [x20, #0xe8]
0x0666BA5C: f30301aa  mov x19, x1
0x0666BA60: c8000037  tbnz w8, #0, #0x666ba78
0x0666BA64: 60830090  adrp x0, #0x76d7000
0x0666BA68: 00c442f9  ldr x0, [x0, #0x588]
0x0666BA6C: eb532c97  bl #0x3180a18
0x0666BA70: 28008052  movz w8, #0x1
0x0666BA74: 88a20339  strb w8, [x20, #0xe8]
0x0666BA78: f30100b4  cbz x19, #0x666bab4
0x0666BA7C: 74830090  adrp x20, #0x76d7000
0x0666BA80: 94c642f9  ldr x20, [x20, #0x588]
0x0666BA84: e00313aa  mov x0, x19
0x0666BA88: 810240f9  ldr x1, [x20]
0x0666BA8C: 64075697  bl #0x3bed81c
0x0666BA90: 400100b4  cbz x0, #0x666bab8
0x0666BA94: 810240f9  ldr x1, [x20]
0x0666BA98: e00313aa  mov x0, x19
0x0666BA9C: 60075697  bl #0x3bed81c
0x0666BAA0: 200100b4  cbz x0, #0x666bac4
0x0666BAA4: 089c4139  ldrb w8, [x0, #0x67]
0x0666BAA8: 1f010071  cmp w8, #0
0x0666BAAC: e0079f1a  cset w0, ne
0x0666BAB0: 02000014  b #0x666bab8
0x0666BAB4: e0031f2a  mov w0, wzr
0x0666BAB8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0666BABC: fe0742f8  ldr x30, [sp], #0x20
0x0666BAC0: c0035fd6  ret
0x0666BAC4: 7a542c97  bl #0x3180cac

