; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1028 MergeEngine.ECS.Components.UndoComponent
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x68F8E2C | public MutableBindableProperty<IMergeItem> get_SoldMergeItem() { }
; bytes=8 sha256=c0b9896d6c3d8aacf384c0d0cf5d897e84f621efe31cc89c980be348eb9c6614 status=arm64_complete_bound indexed_start=True
0x068F8E2C: 001440f9  ldr x0, [x0, #0x28]
0x068F8E30: c0035fd6  ret

; RVA 0x68F8E34 | public void .ctor(Entity entity) { }
; bytes=160 sha256=a6604b34111497d17a2d912927a016f80c51000a75168ce12fc6bf242471189b status=arm64_complete_bound indexed_start=True
0x068F8E34: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x068F8E38: f65701a9  stp x22, x21, [sp, #0x10]
0x068F8E3C: f44f02a9  stp x20, x19, [sp, #0x20]
0x068F8E40: 96a100b0  adrp x22, #0x7d29000
0x068F8E44: d7700090  adrp x23, #0x7710000
0x068F8E48: d5700090  adrp x21, #0x7710000
0x068F8E4C: c8766139  ldrb w8, [x22, #0x85d]
0x068F8E50: f71644f9  ldr x23, [x23, #0x828]
0x068F8E54: b51a44f9  ldr x21, [x21, #0x830]
0x068F8E58: f30301aa  mov x19, x1
0x068F8E5C: f40300aa  mov x20, x0
0x068F8E60: 28010037  tbnz w8, #0, #0x68f8e84
0x068F8E64: c0700090  adrp x0, #0x7710000
0x068F8E68: 001844f9  ldr x0, [x0, #0x830]
0x068F8E6C: eb1e2297  bl #0x3180a18
0x068F8E70: c0700090  adrp x0, #0x7710000
0x068F8E74: 001444f9  ldr x0, [x0, #0x828]
0x068F8E78: e81e2297  bl #0x3180a18
0x068F8E7C: 28008052  movz w8, #0x1
0x068F8E80: c8762139  strb w8, [x22, #0x85d]
0x068F8E84: e00240f9  ldr x0, [x23]
0x068F8E88: 861f2297  bl #0x3180ca0
0x068F8E8C: a20240f9  ldr x2, [x21]
0x068F8E90: e1031faa  mov x1, xzr
0x068F8E94: f50300aa  mov x21, x0
0x068F8E98: bfa26497  bl #0x4221994
0x068F8E9C: e00314aa  mov x0, x20
0x068F8EA0: 158c02f8  str x21, [x0, #0x28]!
0x068F8EA4: e10315aa  mov x1, x21
0x068F8EA8: c71e2297  bl #0x31809c4
0x068F8EAC: e00314aa  mov x0, x20
0x068F8EB0: e1031faa  mov x1, xzr
0x068F8EB4: d285b797  bl #0x56da5fc
0x068F8EB8: 930e01f8  str x19, [x20, #0x10]!
0x068F8EBC: e00314aa  mov x0, x20
0x068F8EC0: e10313aa  mov x1, x19
0x068F8EC4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x068F8EC8: f65741a9  ldp x22, x21, [sp, #0x10]
0x068F8ECC: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x068F8ED0: bd1e2217  b #0x31809c4

; RVA 0x68F8ED4 | private void MergeEngine.ECS.Components.IWipeableComponent.Wipe() { }
; bytes=100 sha256=2a4fb43d270e6393f3c3d61afce06c48a646df6a3cd3c4c8f61623f75a0d8764 status=arm64_complete_bound indexed_start=True
0x068F8ED4: fe0f1ef8  str x30, [sp, #-0x20]!
0x068F8ED8: f44f01a9  stp x20, x19, [sp, #0x10]
0x068F8EDC: 94a100b0  adrp x20, #0x7d29000
0x068F8EE0: 887a6139  ldrb w8, [x20, #0x85e]
0x068F8EE4: f30300aa  mov x19, x0
0x068F8EE8: c8000037  tbnz w8, #0, #0x68f8f00
0x068F8EEC: c0700090  adrp x0, #0x7710000
0x068F8EF0: 000c44f9  ldr x0, [x0, #0x818]
0x068F8EF4: c91e2297  bl #0x3180a18
0x068F8EF8: 28008052  movz w8, #0x1
0x068F8EFC: 887a2139  strb w8, [x20, #0x85e]
0x068F8F00: 7f0e02f8  str xzr, [x19, #0x20]!
0x068F8F04: e00313aa  mov x0, x19
0x068F8F08: e1031faa  mov x1, xzr
0x068F8F0C: ae1e2297  bl #0x31809c4
0x068F8F10: 600640f9  ldr x0, [x19, #8]
0x068F8F14: 000100b4  cbz x0, #0x68f8f34
0x068F8F18: c8700090  adrp x8, #0x7710000
0x068F8F1C: 080d44f9  ldr x8, [x8, #0x818]
0x068F8F20: f44f41a9  ldp x20, x19, [sp, #0x10]
0x068F8F24: e1031faa  mov x1, xzr
0x068F8F28: 020140f9  ldr x2, [x8]
0x068F8F2C: fe0742f8  ldr x30, [sp], #0x20
0x068F8F30: 9fa26417  b #0x42219ac
0x068F8F34: 5e1f2297  bl #0x3180cac

