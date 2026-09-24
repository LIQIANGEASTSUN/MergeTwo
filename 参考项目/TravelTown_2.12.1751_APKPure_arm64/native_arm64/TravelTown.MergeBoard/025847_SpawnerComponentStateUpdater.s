; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25847 Merger.MergeBoard.Logic.State.Updaters.SpawnerComponentStateUpdater
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A85C54 | protected override void UpdateFromState(ref SpawnerComponent component, ItemPayloadBase itemState) { }
; bytes=172 sha256=8bdcf7c1ca708769c3ae5a246d8b68b7fd22062fc4a15cb91e71ef21dff2a173 status=arm64_complete_bound indexed_start=True
0x06A85C54: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x06A85C58: f65701a9  stp x22, x21, [sp, #0x10]
0x06A85C5C: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A85C60: 359500b0  adrp x21, #0x7d2a000
0x06A85C64: a8565e39  ldrb w8, [x21, #0x795]
0x06A85C68: f40302aa  mov x20, x2
0x06A85C6C: f30301aa  mov x19, x1
0x06A85C70: c8000037  tbnz w8, #0, #0x6a85c88
0x06A85C74: e05f00b0  adrp x0, #0x7682000
0x06A85C78: 009446f9  ldr x0, [x0, #0xd28]
0x06A85C7C: 67eb1b97  bl #0x3180a18
0x06A85C80: 28008052  movz w8, #0x1
0x06A85C84: a8561e39  strb w8, [x21, #0x795]
0x06A85C88: 540300b4  cbz x20, #0x6a85cf0
0x06A85C8C: 883a40f9  ldr x8, [x20, #0x70]
0x06A85C90: 080300b4  cbz x8, #0x6a85cf0
0x06A85C94: 094940b9  ldr w9, [x8, #0x48]
0x06A85C98: eb5f00b0  adrp x11, #0x7682000
0x06A85C9C: 0a3d40b9  ldr w10, [x8, #0x3c]
0x06A85CA0: 740a40f9  ldr x20, [x19, #0x10]
0x06A85CA4: 6b9546f9  ldr x11, [x11, #0xd28]
0x06A85CA8: 690a00b9  str w9, [x19, #8]
0x06A85CAC: 154d40b9  ldr w21, [x8, #0x4c]
0x06A85CB0: 5601090b  add w22, w10, w9
0x06A85CB4: 600140f9  ldr x0, [x11]
0x06A85CB8: faeb1b97  bl #0x3180ca0
0x06A85CBC: e10314aa  mov x1, x20
0x06A85CC0: e203162a  mov w2, w22
0x06A85CC4: e303152a  mov w3, w21
0x06A85CC8: e4031faa  mov x4, xzr
0x06A85CCC: f70300aa  mov x23, x0
0x06A85CD0: 3e8bd597  bl #0x5fe89c8
0x06A85CD4: 770200f9  str x23, [x19]
0x06A85CD8: e00313aa  mov x0, x19
0x06A85CDC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A85CE0: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A85CE4: e10317aa  mov x1, x23
0x06A85CE8: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x06A85CEC: 36eb1b17  b #0x31809c4
0x06A85CF0: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A85CF4: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A85CF8: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x06A85CFC: c0035fd6  ret

; RVA 0x6A85D00 | public void .ctor() { }
; bytes=72 sha256=e5d40ac5b3566a36f745c5a03219ff78fd563c3b4700e9bd455444264855a0a9 status=arm64_complete_bound indexed_start=True
0x06A85D00: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A85D04: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A85D08: 349500b0  adrp x20, #0x7d2a000
0x06A85D0C: 75650090  adrp x21, #0x7731000
0x06A85D10: 885a5e39  ldrb w8, [x20, #0x796]
0x06A85D14: b57246f9  ldr x21, [x21, #0xce0]
0x06A85D18: f30300aa  mov x19, x0
0x06A85D1C: c8000037  tbnz w8, #0, #0x6a85d34
0x06A85D20: 60650090  adrp x0, #0x7731000
0x06A85D24: 007046f9  ldr x0, [x0, #0xce0]
0x06A85D28: 3ceb1b97  bl #0x3180a18
0x06A85D2C: 28008052  movz w8, #0x1
0x06A85D30: 885a1e39  strb w8, [x20, #0x796]
0x06A85D34: a10240f9  ldr x1, [x21]
0x06A85D38: e00313aa  mov x0, x19
0x06A85D3C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A85D40: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A85D44: 116a8b17  b #0x4d60588

