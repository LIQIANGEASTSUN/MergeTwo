; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 10428 Framework.Core.View.ViewComponent
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x68AAF28 | public RectTransform get_RectTransform() { }
; bytes=176 sha256=27e39067dc9ffe09cb5146f72f1093387bab61fc726472c878a871a27be0f19d status=arm64_complete_bound indexed_start=True
0x068AAF28: fe0f1df8  str x30, [sp, #-0x30]!
0x068AAF2C: f65701a9  stp x22, x21, [sp, #0x10]
0x068AAF30: f44f02a9  stp x20, x19, [sp, #0x20]
0x068AAF34: f4a300f0  adrp x20, #0x7d29000
0x068AAF38: 366d0090  adrp x22, #0x764e000
0x068AAF3C: 88c65539  ldrb w8, [x20, #0x571]
0x068AAF40: d67242f9  ldr x22, [x22, #0x4e0]
0x068AAF44: f30300aa  mov x19, x0
0x068AAF48: 28010037  tbnz w8, #0, #0x68aaf6c
0x068AAF4C: 206d0090  adrp x0, #0x764e000
0x068AAF50: 009844f9  ldr x0, [x0, #0x930]
0x068AAF54: b1562397  bl #0x3180a18
0x068AAF58: 206d0090  adrp x0, #0x764e000
0x068AAF5C: 007042f9  ldr x0, [x0, #0x4e0]
0x068AAF60: ae562397  bl #0x3180a18
0x068AAF64: 28008052  movz w8, #0x1
0x068AAF68: 88c61539  strb w8, [x20, #0x571]
0x068AAF6C: f40313aa  mov x20, x19
0x068AAF70: 950e42f8  ldr x21, [x20, #0x20]!
0x068AAF74: c00240f9  ldr x0, [x22]
0x068AAF78: 08e040b9  ldr w8, [x0, #0xe0]
0x068AAF7C: 48000035  cbnz w8, #0x68aaf84
0x068AAF80: 03572397  bl #0x3180b8c
0x068AAF84: e00315aa  mov x0, x21
0x068AAF88: e1031faa  mov x1, xzr
0x068AAF8C: 64e11894  bl #0x6ee351c
0x068AAF90: 60000036  tbz w0, #0, #0x68aaf9c
0x068AAF94: 950240f9  ldr x21, [x20]
0x068AAF98: 0b000014  b #0x68aafc4
0x068AAF9C: 286d0090  adrp x8, #0x764e000
0x068AAFA0: 089944f9  ldr x8, [x8, #0x930]
0x068AAFA4: e00313aa  mov x0, x19
0x068AAFA8: 010140f9  ldr x1, [x8]
0x068AAFAC: 42064d97  bl #0x3bec8b4
0x068AAFB0: f50300aa  mov x21, x0
0x068AAFB4: 601200f9  str x0, [x19, #0x20]
0x068AAFB8: e00314aa  mov x0, x20
0x068AAFBC: e10315aa  mov x1, x21
0x068AAFC0: 81562397  bl #0x31809c4
0x068AAFC4: e00315aa  mov x0, x21
0x068AAFC8: f44f42a9  ldp x20, x19, [sp, #0x20]
0x068AAFCC: f65741a9  ldp x22, x21, [sp, #0x10]
0x068AAFD0: fe0743f8  ldr x30, [sp], #0x30
0x068AAFD4: c0035fd6  ret

; RVA 0x68B48E8 | public virtual void Dispose() { }
; bytes=4 sha256=110f46b5b35c069160560c6ad6786f647dd44e8760a52a46fc22dbbcd7630b91 status=arm64_complete_bound indexed_start=True
0x068B48E8: c0035fd6  ret

; RVA 0x68A2BC0 | public void .ctor() { }
; bytes=8 sha256=573213c0ba180470371ef4f74b0ee1c4db22f764c2a5805e05d1e8e39bdd7b95 status=arm64_complete_bound indexed_start=True
0x068A2BC0: e1031faa  mov x1, xzr
0x068A2BC4: 44f91814  b #0x6ee10d4

; RVA 0x68B48EC | private GameObject Framework.Core.View.IViewComponent.get_gameObject() { }
; bytes=8 sha256=dbc4af21cf579940c17b36f2e612e309ef7e171fbb4169ff09298b4afac53128 status=arm64_complete_bound indexed_start=True
0x068B48EC: e1031faa  mov x1, xzr
0x068B48F0: 789d1814  b #0x6edbed0

