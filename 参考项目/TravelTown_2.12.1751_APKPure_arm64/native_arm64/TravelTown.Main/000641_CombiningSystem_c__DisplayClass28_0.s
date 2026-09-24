; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 641 .CombiningSystem.<>c__DisplayClass28_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x627E2EC | public void .ctor() { }
; bytes=8 sha256=0680beef14fedd13f2cb2f8c78405e171082b9922eeb4f17bf277418f4357d3c status=arm64_complete_bound indexed_start=True
0x0627E2EC: e1031faa  mov x1, xzr
0x0627E2F0: c370d117  b #0x56da5fc

; RVA 0x627E940 | internal void <OnItemSlidedIn>b__0() { }
; bytes=92 sha256=d4789a881d45ca229e17c1d64da0f2db961253de89fbfb6e7c93476e8a41bee6 status=arm64_complete_bound indexed_start=True
0x0627E940: fe0f1ef8  str x30, [sp, #-0x20]!
0x0627E944: f44f01a9  stp x20, x19, [sp, #0x10]
0x0627E948: 34d500f0  adrp x20, #0x7d25000
0x0627E94C: 88ae5239  ldrb w8, [x20, #0x4ab]
0x0627E950: f30300aa  mov x19, x0
0x0627E954: c8000037  tbnz w8, #0, #0x627e96c
0x0627E958: a09f0090  adrp x0, #0x7672000
0x0627E95C: 007c44f9  ldr x0, [x0, #0x8f8]
0x0627E960: 2e083c97  bl #0x3180a18
0x0627E964: 28008052  movz w8, #0x1
0x0627E968: 88ae1239  strb w8, [x20, #0x4ab]
0x0627E96C: 680a40f9  ldr x8, [x19, #0x10]
0x0627E970: 480100b4  cbz x8, #0x627e998
0x0627E974: 001940f9  ldr x0, [x8, #0x30]
0x0627E978: 000100b4  cbz x0, #0x627e998
0x0627E97C: a89f0090  adrp x8, #0x7672000
0x0627E980: 087d44f9  ldr x8, [x8, #0x8f8]
0x0627E984: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0627E988: e1031f2a  mov w1, wzr
0x0627E98C: 020140f9  ldr x2, [x8]
0x0627E990: fe0742f8  ldr x30, [sp], #0x20
0x0627E994: 2e8b7e17  b #0x422164c
0x0627E998: c5083c97  bl #0x3180cac

