; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25764 .PendingItemsCombinationSystem.<>c__DisplayClass6_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A72BF8 | public void .ctor() { }
; bytes=8 sha256=16294f6416c43f93a5aab341f206b7c8b9ceee951f07f87dad16d724b48ed1fa status=arm64_complete_bound indexed_start=True
0x06A72BF8: e1031faa  mov x1, xzr
0x06A72BFC: 809eb117  b #0x56da5fc

; RVA 0x6A72C1C | internal bool <FindPendingVerificationPairs>b__0(ValueTuple<ValueTuple<Entity, BoardTilePositionComponent, MergeComponent, IdComponent, PendingItemsCombinationComponent>, ValueTuple<Entity, BoardTilePositionComponent, MergeComponent, IdComponent, PendingItemsCombinationComponent>> pair) { }
; bytes=124 sha256=4f7d1ce1ab235fbe326fd16538306a734cd21160b5d808fd8c9a5c95b8c00a99 status=arm64_complete_bound indexed_start=True
0x06A72C1C: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A72C20: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A72C24: f30300aa  mov x19, x0
0x06A72C28: f40301aa  mov x20, x1
0x06A72C2C: 201440f9  ldr x0, [x1, #0x28]
0x06A72C30: 610a40f9  ldr x1, [x19, #0x10]
0x06A72C34: e2031faa  mov x2, xzr
0x06A72C38: 0edfa997  bl #0x54ea870
0x06A72C3C: 00010036  tbz w0, #0, #0x6a72c5c
0x06A72C40: 804240f9  ldr x0, [x20, #0x80]
0x06A72C44: 610e40f9  ldr x1, [x19, #0x18]
0x06A72C48: e2031faa  mov x2, xzr
0x06A72C4C: 09dfa997  bl #0x54ea870
0x06A72C50: 60000036  tbz w0, #0, #0x6a72c5c
0x06A72C54: 20008052  movz w0, #0x1
0x06A72C58: 0d000014  b #0x6a72c8c
0x06A72C5C: 801640f9  ldr x0, [x20, #0x28]
0x06A72C60: 610e40f9  ldr x1, [x19, #0x18]
0x06A72C64: e2031faa  mov x2, xzr
0x06A72C68: 02dfa997  bl #0x54ea870
0x06A72C6C: e0000036  tbz w0, #0, #0x6a72c88
0x06A72C70: 804240f9  ldr x0, [x20, #0x80]
0x06A72C74: 610a40f9  ldr x1, [x19, #0x10]
0x06A72C78: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A72C7C: e2031faa  mov x2, xzr
0x06A72C80: fe0742f8  ldr x30, [sp], #0x20
0x06A72C84: fbdea917  b #0x54ea870
0x06A72C88: e0031f2a  mov w0, wzr
0x06A72C8C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A72C90: fe0742f8  ldr x30, [sp], #0x20
0x06A72C94: c0035fd6  ret

