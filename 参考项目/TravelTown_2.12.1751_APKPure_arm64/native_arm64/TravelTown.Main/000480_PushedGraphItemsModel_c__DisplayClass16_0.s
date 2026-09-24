; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 480 .PushedGraphItemsModel.<>c__DisplayClass16_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x612E964 | public void .ctor() { }
; bytes=8 sha256=ea70516ebb0fe55fc64a4678d6d03670b19473fc934a528f54d5fa259689dac3 status=arm64_complete_bound indexed_start=True
0x0612E964: e1031faa  mov x1, xzr
0x0612E968: 25afd617  b #0x56da5fc

; RVA 0x612EA48 | internal bool <FindGraphItemToPush>b__0(PushedGraphItemsModel.PushedGraphItem item) { }
; bytes=36 sha256=4e87ca669c97c4c7419588e890cf33e88bf97838176e064a66064c1833708587 status=arm64_complete_bound indexed_start=True
0x0612EA48: fe0f1ff8  str x30, [sp, #-0x10]!
0x0612EA4C: e10000b4  cbz x1, #0x612ea68
0x0612EA50: 081040b9  ldr w8, [x0, #0x10]
0x0612EA54: 292040b9  ldr w9, [x1, #0x20]
0x0612EA58: 1f01096b  cmp w8, w9
0x0612EA5C: e0b79f1a  cset w0, ge
0x0612EA60: fe0741f8  ldr x30, [sp], #0x10
0x0612EA64: c0035fd6  ret
0x0612EA68: 91484197  bl #0x3180cac

