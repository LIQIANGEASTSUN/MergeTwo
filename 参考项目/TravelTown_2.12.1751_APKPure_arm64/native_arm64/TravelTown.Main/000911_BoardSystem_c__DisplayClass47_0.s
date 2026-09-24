; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 911 .BoardSystem.<>c__DisplayClass47_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6668F7C | public void .ctor() { }
; bytes=8 sha256=c78257f56815d189a879344979e3b9c5db54c752bc193da98c2968f57a8c50f1 status=arm64_complete_bound indexed_start=True
0x06668F7C: e1031faa  mov x1, xzr
0x06668F80: 9fc5c117  b #0x56da5fc

; RVA 0x666BAC8 | internal bool <OnGameStarted>b__0(PositionComponent item) { }
; bytes=244 sha256=da15e66566ded1823200990f36bc4b896283816c73b45ab5dcd625dc445a1b87 status=arm64_complete_bound indexed_start=True
0x0666BAC8: fe0f1cf8  str x30, [sp, #-0x40]!
0x0666BACC: f85f01a9  stp x24, x23, [sp, #0x10]
0x0666BAD0: f65702a9  stp x22, x21, [sp, #0x20]
0x0666BAD4: f44f03a9  stp x20, x19, [sp, #0x30]
0x0666BAD8: f5b500b0  adrp x21, #0x7d28000
0x0666BADC: f6840090  adrp x22, #0x7707000
0x0666BAE0: a8a64339  ldrb w8, [x21, #0xe9]
0x0666BAE4: d6ba47f9  ldr x22, [x22, #0xf70]
0x0666BAE8: f40301aa  mov x20, x1
0x0666BAEC: f30300aa  mov x19, x0
0x0666BAF0: e8010037  tbnz w8, #0, #0x666bb2c
0x0666BAF4: a0800090  adrp x0, #0x767f000
0x0666BAF8: 008444f9  ldr x0, [x0, #0x908]
0x0666BAFC: c7532c97  bl #0x3180a18
0x0666BB00: a0800090  adrp x0, #0x767f000
0x0666BB04: 008844f9  ldr x0, [x0, #0x910]
0x0666BB08: c4532c97  bl #0x3180a18
0x0666BB0C: e0840090  adrp x0, #0x7707000
0x0666BB10: 00bc47f9  ldr x0, [x0, #0xf78]
0x0666BB14: c1532c97  bl #0x3180a18
0x0666BB18: e0840090  adrp x0, #0x7707000
0x0666BB1C: 00b847f9  ldr x0, [x0, #0xf70]
0x0666BB20: be532c97  bl #0x3180a18
0x0666BB24: 28008052  movz w8, #0x1
0x0666BB28: a8a60339  strb w8, [x21, #0xe9]
0x0666BB2C: c00240f9  ldr x0, [x22]
0x0666BB30: 5c542c97  bl #0x3180ca0
0x0666BB34: e1031faa  mov x1, xzr
0x0666BB38: f50300aa  mov x21, x0
0x0666BB3C: b0bac197  bl #0x56da5fc
0x0666BB40: d50300b4  cbz x21, #0x666bbb8
0x0666BB44: b6800090  adrp x22, #0x767f000
0x0666BB48: f7840090  adrp x23, #0x7707000
0x0666BB4C: b8800090  adrp x24, #0x767f000
0x0666BB50: d68a44f9  ldr x22, [x22, #0x910]
0x0666BB54: f7be47f9  ldr x23, [x23, #0xf78]
0x0666BB58: 188744f9  ldr x24, [x24, #0x908]
0x0666BB5C: e00315aa  mov x0, x21
0x0666BB60: 140c01f8  str x20, [x0, #0x10]!
0x0666BB64: e10314aa  mov x1, x20
0x0666BB68: 97532c97  bl #0x31809c4
0x0666BB6C: c00240f9  ldr x0, [x22]
0x0666BB70: 730a40f9  ldr x19, [x19, #0x10]
0x0666BB74: 4b542c97  bl #0x3180ca0
0x0666BB78: e20240f9  ldr x2, [x23]
0x0666BB7C: e10315aa  mov x1, x21
0x0666BB80: e3031faa  mov x3, xzr
0x0666BB84: f40300aa  mov x20, x0
0x0666BB88: 0da9af97  bl #0x5255fbc
0x0666BB8C: 020340f9  ldr x2, [x24]
0x0666BB90: e00313aa  mov x0, x19
0x0666BB94: e10314aa  mov x1, x20
0x0666BB98: 66655797  bl #0x3c45130
0x0666BB9C: f44f43a9  ldp x20, x19, [sp, #0x30]
0x0666BBA0: f65742a9  ldp x22, x21, [sp, #0x20]
0x0666BBA4: f85f41a9  ldp x24, x23, [sp, #0x10]
0x0666BBA8: 1f0000f1  cmp x0, #0
0x0666BBAC: e0079f1a  cset w0, ne
0x0666BBB0: fe0744f8  ldr x30, [sp], #0x40
0x0666BBB4: c0035fd6  ret
0x0666BBB8: 3d542c97  bl #0x3180cac

