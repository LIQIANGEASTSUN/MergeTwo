; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 629 .InteractionUtil.<>c__DisplayClass0_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6277F54 | public void .ctor() { }
; bytes=8 sha256=81b2ccd6dff0858474165c1383a73ecd52381ce74ac8543e1f3f04798f93fe70 status=arm64_complete_bound indexed_start=True
0x06277F54: e1031faa  mov x1, xzr
0x06277F58: a989d117  b #0x56da5fc

; RVA 0x6278920 | internal bool <GetMissingItemsNames>b__0(ItemMultiple itemMultiple) { }
; bytes=136 sha256=45a28b276cdaf10ecc4dcd3f1eaf0992d8ee0e384dc2ecec591b98c9f058a6b6 status=arm64_complete_bound indexed_start=True
0x06278920: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06278924: f44f01a9  stp x20, x19, [sp, #0x10]
0x06278928: 75d500b0  adrp x21, #0x7d25000
0x0627892C: a8ce5139  ldrb w8, [x21, #0x473]
0x06278930: f30301aa  mov x19, x1
0x06278934: f40300aa  mov x20, x0
0x06278938: c8000037  tbnz w8, #0, #0x6278950
0x0627893C: 00a000d0  adrp x0, #0x767a000
0x06278940: 00f443f9  ldr x0, [x0, #0x7e8]
0x06278944: 35203c97  bl #0x3180a18
0x06278948: 28008052  movz w8, #0x1
0x0627894C: a8ce1139  strb w8, [x21, #0x473]
0x06278950: b30200b4  cbz x19, #0x62789a4
0x06278954: 08a000d0  adrp x8, #0x767a000
0x06278958: 08f543f9  ldr x8, [x8, #0x7e8]
0x0627895C: 940a40f9  ldr x20, [x20, #0x10]
0x06278960: e00313aa  mov x0, x19
0x06278964: 010140f9  ldr x1, [x8]
0x06278968: 2c66c497  bl #0x5392218
0x0627896C: d40100b4  cbz x20, #0x62789a4
0x06278970: e10300aa  mov x1, x0
0x06278974: e00314aa  mov x0, x20
0x06278978: e2031faa  mov x2, xzr
0x0627897C: 412a1a94  bl #0x6903280
0x06278980: f403002a  mov w20, w0
0x06278984: e00313aa  mov x0, x19
0x06278988: e1031faa  mov x1, xzr
0x0627898C: 5c99f697  bl #0x601eefc
0x06278990: 9f02006b  cmp w20, w0
0x06278994: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06278998: e0a79f1a  cset w0, lt
0x0627899C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x062789A0: c0035fd6  ret
0x062789A4: c2203c97  bl #0x3180cac

