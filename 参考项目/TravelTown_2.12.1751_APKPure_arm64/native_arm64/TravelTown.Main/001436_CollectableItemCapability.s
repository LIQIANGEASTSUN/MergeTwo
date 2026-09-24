; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1436 MergeEngine.Configuration.Capabilities.CollectableItemCapability
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x600FD24 | public void .ctor(CollectCapability itemConfigurationCollect, CollectResourceCapability itemConfigurationCollectResource) { }
; bytes=136 sha256=346cd2834ee855dc6e42bcb78c62559fb5060920ca7682d8a601b11811576d67 status=arm64_complete_bound indexed_start=True
0x0600FD24: fe0f1df8  str x30, [sp, #-0x30]!
0x0600FD28: f65701a9  stp x22, x21, [sp, #0x10]
0x0600FD2C: f44f02a9  stp x20, x19, [sp, #0x20]
0x0600FD30: f40301aa  mov x20, x1
0x0600FD34: e1031faa  mov x1, xzr
0x0600FD38: f50302aa  mov x21, x2
0x0600FD3C: f30300aa  mov x19, x0
0x0600FD40: 2f2adb97  bl #0x56da5fc
0x0600FD44: f60313aa  mov x22, x19
0x0600FD48: d48e01f8  str x20, [x22, #0x18]!
0x0600FD4C: e00316aa  mov x0, x22
0x0600FD50: e10314aa  mov x1, x20
0x0600FD54: 1cc34597  bl #0x31809c4
0x0600FD58: f40313aa  mov x20, x19
0x0600FD5C: 950e02f8  str x21, [x20, #0x20]!
0x0600FD60: e00314aa  mov x0, x20
0x0600FD64: e10315aa  mov x1, x21
0x0600FD68: 17c34597  bl #0x31809c4
0x0600FD6C: c80240f9  ldr x8, [x22]
0x0600FD70: a80000b4  cbz x8, #0x600fd84
0x0600FD74: 08414039  ldrb w8, [x8, #0x10]
0x0600FD78: 68000034  cbz w8, #0x600fd84
0x0600FD7C: 28008052  movz w8, #0x1
0x0600FD80: 06000014  b #0x600fd98
0x0600FD84: 880240f9  ldr x8, [x20]
0x0600FD88: 880000b4  cbz x8, #0x600fd98
0x0600FD8C: 08414039  ldrb w8, [x8, #0x10]
0x0600FD90: 1f010071  cmp w8, #0
0x0600FD94: e8079f1a  cset w8, ne
0x0600FD98: 68420039  strb w8, [x19, #0x10]
0x0600FD9C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0600FDA0: f65741a9  ldp x22, x21, [sp, #0x10]
0x0600FDA4: fe0743f8  ldr x30, [sp], #0x30
0x0600FDA8: c0035fd6  ret

