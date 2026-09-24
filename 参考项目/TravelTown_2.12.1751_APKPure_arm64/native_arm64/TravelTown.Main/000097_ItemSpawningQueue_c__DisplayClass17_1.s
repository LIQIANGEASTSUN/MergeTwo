; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 97 .ItemSpawningQueue.<>c__DisplayClass17_1
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x5FEAE84 | public void .ctor() { }
; bytes=8 sha256=2027f0c58ddb37dc6b07e26543602a3124b0634f7b895654850276e86c4d00b2 status=arm64_complete_bound indexed_start=True
0x05FEAE84: e1031faa  mov x1, xzr
0x05FEAE88: ddbddb17  b #0x56da5fc

; RVA 0x5FEAF8C | internal bool <GetNextItems>b__2(ItemMultiple consumedItem) { }
; bytes=132 sha256=7622bbc15c9f829650a1c16836189b11faffd332180307feb1c9b3c74a8bb05b status=arm64_complete_bound indexed_start=True
0x05FEAF8C: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x05FEAF90: f44f01a9  stp x20, x19, [sp, #0x10]
0x05FEAF94: d5e900b0  adrp x21, #0x7d23000
0x05FEAF98: a8ce5839  ldrb w8, [x21, #0x633]
0x05FEAF9C: f30301aa  mov x19, x1
0x05FEAFA0: f40300aa  mov x20, x0
0x05FEAFA4: c8000037  tbnz w8, #0, #0x5feafbc
0x05FEAFA8: 00b700d0  adrp x0, #0x76cc000
0x05FEAFAC: 00d442f9  ldr x0, [x0, #0x5a8]
0x05FEAFB0: 9a564697  bl #0x3180a18
0x05FEAFB4: 28008052  movz w8, #0x1
0x05FEAFB8: a8ce1839  strb w8, [x21, #0x633]
0x05FEAFBC: 880a40f9  ldr x8, [x20, #0x10]
0x05FEAFC0: 680200b4  cbz x8, #0x5feb00c
0x05FEAFC4: 000940f9  ldr x0, [x8, #0x10]
0x05FEAFC8: 200200b4  cbz x0, #0x5feb00c
0x05FEAFCC: 080040f9  ldr x8, [x0]
0x05FEAFD0: 09855ca9  ldp x9, x1, [x8, #0x1c8]
0x05FEAFD4: 20013fd6  blr x9
0x05FEAFD8: b30100b4  cbz x19, #0x5feb00c
0x05FEAFDC: 08b700d0  adrp x8, #0x76cc000
0x05FEAFE0: 08d542f9  ldr x8, [x8, #0x5a8]
0x05FEAFE4: f40300aa  mov x20, x0
0x05FEAFE8: e00313aa  mov x0, x19
0x05FEAFEC: 010140f9  ldr x1, [x8]
0x05FEAFF0: 2a9ece97  bl #0x5392898
0x05FEAFF4: e10300aa  mov x1, x0
0x05FEAFF8: e00314aa  mov x0, x20
0x05FEAFFC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x05FEB000: e2031faa  mov x2, xzr
0x05FEB004: fe57c2a8  ldp x30, x21, [sp], #0x20
0x05FEB008: 1afed317  b #0x54ea870
0x05FEB00C: 28574697  bl #0x3180cac

