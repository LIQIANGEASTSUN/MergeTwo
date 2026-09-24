; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25813 Merger.MergeBoard.Models.MergeBoardSelectedItemModel
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A7DA88 | public BindableProperty<ValueTuple<Entity, IMergeItem>> get_SelectedItem() { }
; bytes=8 sha256=c0b9896d6c3d8aacf384c0d0cf5d897e84f621efe31cc89c980be348eb9c6614 status=arm64_complete_bound indexed_start=True
0x06A7DA88: 001440f9  ldr x0, [x0, #0x28]
0x06A7DA8C: c0035fd6  ret

; RVA 0x6A7DA90 | public void SetSelectedItem(Entity entity, IMergeItem mergeItem) { }
; bytes=160 sha256=e57cf1c71ea7db6e3d56e91334145d88ee22c4d4d7eb46e26cddce31515bc3ba status=arm64_complete_bound indexed_start=True
0x06A7DA90: ff0301d1  sub sp, sp, #0x40
0x06A7DA94: fe5f01a9  stp x30, x23, [sp, #0x10]
0x06A7DA98: f65702a9  stp x22, x21, [sp, #0x20]
0x06A7DA9C: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A7DAA0: 779500b0  adrp x23, #0x7d2a000
0x06A7DAA4: b6650090  adrp x22, #0x7731000
0x06A7DAA8: e8125d39  ldrb w8, [x23, #0x744]
0x06A7DAAC: d6ca44f9  ldr x22, [x22, #0x990]
0x06A7DAB0: f30302aa  mov x19, x2
0x06A7DAB4: f40301aa  mov x20, x1
0x06A7DAB8: f50300aa  mov x21, x0
0x06A7DABC: 28010037  tbnz w8, #0, #0x6a7dae0
0x06A7DAC0: a0650090  adrp x0, #0x7731000
0x06A7DAC4: 00cc44f9  ldr x0, [x0, #0x998]
0x06A7DAC8: d40b1c97  bl #0x3180a18
0x06A7DACC: a0650090  adrp x0, #0x7731000
0x06A7DAD0: 00c844f9  ldr x0, [x0, #0x990]
0x06A7DAD4: d10b1c97  bl #0x3180a18
0x06A7DAD8: 28008052  movz w8, #0x1
0x06A7DADC: e8121d39  strb w8, [x23, #0x744]
0x06A7DAE0: c30240f9  ldr x3, [x22]
0x06A7DAE4: b51640f9  ldr x21, [x21, #0x28]
0x06A7DAE8: e0030091  mov x0, sp
0x06A7DAEC: e10314aa  mov x1, x20
0x06A7DAF0: e20313aa  mov x2, x19
0x06A7DAF4: ff7f00a9  stp xzr, xzr, [sp]
0x06A7DAF8: 0c397597  bl #0x47cbf28
0x06A7DAFC: 950100b4  cbz x21, #0x6a7db2c
0x06A7DB00: a8650090  adrp x8, #0x7731000
0x06A7DB04: 08cd44f9  ldr x8, [x8, #0x998]
0x06A7DB08: e10b40a9  ldp x1, x2, [sp]
0x06A7DB0C: e00315aa  mov x0, x21
0x06A7DB10: 030140f9  ldr x3, [x8]
0x06A7DB14: 8e8e5e97  bl #0x422154c
0x06A7DB18: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A7DB1C: f65742a9  ldp x22, x21, [sp, #0x20]
0x06A7DB20: fe5f41a9  ldp x30, x23, [sp, #0x10]
0x06A7DB24: ff030191  add sp, sp, #0x40
0x06A7DB28: c0035fd6  ret
0x06A7DB2C: 600c1c97  bl #0x3180cac

; RVA 0x6A7DB30 | public void ClearSelectedItem() { }
; bytes=144 sha256=4bbd2f89acb0c63c37c7b7249f5d7aeb513465739657f9a668d0969097759bce status=arm64_complete_bound indexed_start=True
0x06A7DB30: ffc300d1  sub sp, sp, #0x30
0x06A7DB34: fe5701a9  stp x30, x21, [sp, #0x10]
0x06A7DB38: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A7DB3C: 759500b0  adrp x21, #0x7d2a000
0x06A7DB40: b4650090  adrp x20, #0x7731000
0x06A7DB44: a8165d39  ldrb w8, [x21, #0x745]
0x06A7DB48: 94ca44f9  ldr x20, [x20, #0x990]
0x06A7DB4C: f30300aa  mov x19, x0
0x06A7DB50: 28010037  tbnz w8, #0, #0x6a7db74
0x06A7DB54: a0650090  adrp x0, #0x7731000
0x06A7DB58: 00cc44f9  ldr x0, [x0, #0x998]
0x06A7DB5C: af0b1c97  bl #0x3180a18
0x06A7DB60: a0650090  adrp x0, #0x7731000
0x06A7DB64: 00c844f9  ldr x0, [x0, #0x990]
0x06A7DB68: ac0b1c97  bl #0x3180a18
0x06A7DB6C: 28008052  movz w8, #0x1
0x06A7DB70: a8161d39  strb w8, [x21, #0x745]
0x06A7DB74: 830240f9  ldr x3, [x20]
0x06A7DB78: 731640f9  ldr x19, [x19, #0x28]
0x06A7DB7C: e0030091  mov x0, sp
0x06A7DB80: e1031faa  mov x1, xzr
0x06A7DB84: e2031faa  mov x2, xzr
0x06A7DB88: ff7f00a9  stp xzr, xzr, [sp]
0x06A7DB8C: e7387597  bl #0x47cbf28
0x06A7DB90: 730100b4  cbz x19, #0x6a7dbbc
0x06A7DB94: a8650090  adrp x8, #0x7731000
0x06A7DB98: 08cd44f9  ldr x8, [x8, #0x998]
0x06A7DB9C: e10b40a9  ldp x1, x2, [sp]
0x06A7DBA0: e00313aa  mov x0, x19
0x06A7DBA4: 030140f9  ldr x3, [x8]
0x06A7DBA8: 698e5e97  bl #0x422154c
0x06A7DBAC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A7DBB0: fe5741a9  ldp x30, x21, [sp, #0x10]
0x06A7DBB4: ffc30091  add sp, sp, #0x30
0x06A7DBB8: c0035fd6  ret
0x06A7DBBC: 3c0c1c97  bl #0x3180cac

; RVA 0x6A7DBC0 | public void .ctor() { }
; bytes=144 sha256=8709cada0665686c4aa15c9f4f947fcce0b3dbb89313e5ba78787953056f76a5 status=arm64_complete_bound indexed_start=True
0x06A7DBC0: fe0f1df8  str x30, [sp, #-0x30]!
0x06A7DBC4: f65701a9  stp x22, x21, [sp, #0x10]
0x06A7DBC8: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A7DBCC: 759500b0  adrp x21, #0x7d2a000
0x06A7DBD0: b6650090  adrp x22, #0x7731000
0x06A7DBD4: b4650090  adrp x20, #0x7731000
0x06A7DBD8: a81a5d39  ldrb w8, [x21, #0x746]
0x06A7DBDC: d6d244f9  ldr x22, [x22, #0x9a0]
0x06A7DBE0: 94d644f9  ldr x20, [x20, #0x9a8]
0x06A7DBE4: f30300aa  mov x19, x0
0x06A7DBE8: 28010037  tbnz w8, #0, #0x6a7dc0c
0x06A7DBEC: a0650090  adrp x0, #0x7731000
0x06A7DBF0: 00d444f9  ldr x0, [x0, #0x9a8]
0x06A7DBF4: 890b1c97  bl #0x3180a18
0x06A7DBF8: a0650090  adrp x0, #0x7731000
0x06A7DBFC: 00d044f9  ldr x0, [x0, #0x9a0]
0x06A7DC00: 860b1c97  bl #0x3180a18
0x06A7DC04: 28008052  movz w8, #0x1
0x06A7DC08: a81a1d39  strb w8, [x21, #0x746]
0x06A7DC0C: c00240f9  ldr x0, [x22]
0x06A7DC10: 240c1c97  bl #0x3180ca0
0x06A7DC14: 830240f9  ldr x3, [x20]
0x06A7DC18: e1031faa  mov x1, xzr
0x06A7DC1C: e2031faa  mov x2, xzr
0x06A7DC20: f40300aa  mov x20, x0
0x06A7DC24: 438e5e97  bl #0x4221530
0x06A7DC28: e00313aa  mov x0, x19
0x06A7DC2C: 148c02f8  str x20, [x0, #0x28]!
0x06A7DC30: e10314aa  mov x1, x20
0x06A7DC34: 640b1c97  bl #0x31809c4
0x06A7DC38: e00313aa  mov x0, x19
0x06A7DC3C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A7DC40: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A7DC44: e1031faa  mov x1, xzr
0x06A7DC48: fe0743f8  ldr x30, [sp], #0x30
0x06A7DC4C: c338fb17  b #0x694bf58

