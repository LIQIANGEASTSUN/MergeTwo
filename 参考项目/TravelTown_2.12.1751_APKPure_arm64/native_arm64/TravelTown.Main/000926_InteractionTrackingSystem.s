; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 926 MergeEngine.ECS.Systems.Board.InteractionTrackingSystem
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x666CD6C | public override SystemPriorities get_Priority() { }
; bytes=8 sha256=2b59db05426e0f313d72b30f3398c65721de2562a59dc46ceeba224f98d0b876 status=arm64_complete_bound indexed_start=True
0x0666CD6C: e0031f2a  mov w0, wzr
0x0666CD70: c0035fd6  ret

; RVA 0x666CD74 | protected override void ProcessComponents(ReadOnlyCollection<InteractionTrackingComponent> components) { }
; bytes=4 sha256=788f1512f26f87f558ccda89030f23036527961be061f31e047ad5b93b8aafe2 status=arm64_complete_bound indexed_start=True
0x0666CD74: 01000014  b #0x666cd78

; RVA 0x666CD78 | private void TryToSendEvent() { }
; bytes=328 sha256=da23988d79fc45e8397c7ae1f3d0dba1d2fcb67897492b70e7d32674b9f09d28 status=arm64_complete_bound indexed_start=True
0x0666CD78: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x0666CD7C: f65701a9  stp x22, x21, [sp, #0x10]
0x0666CD80: f44f02a9  stp x20, x19, [sp, #0x20]
0x0666CD84: f4b50090  adrp x20, #0x7d28000
0x0666CD88: f7840090  adrp x23, #0x7708000
0x0666CD8C: f5840090  adrp x21, #0x7708000
0x0666CD90: 88f64339  ldrb w8, [x20, #0xfd]
0x0666CD94: f71e40f9  ldr x23, [x23, #0x38]
0x0666CD98: b52240f9  ldr x21, [x21, #0x40]
0x0666CD9C: f30300aa  mov x19, x0
0x0666CDA0: e8010037  tbnz w8, #0, #0x666cddc
0x0666CDA4: e0840090  adrp x0, #0x7708000
0x0666CDA8: 001c40f9  ldr x0, [x0, #0x38]
0x0666CDAC: 1b4f2c97  bl #0x3180a18
0x0666CDB0: e0840090  adrp x0, #0x7708000
0x0666CDB4: 002440f9  ldr x0, [x0, #0x48]
0x0666CDB8: 184f2c97  bl #0x3180a18
0x0666CDBC: e0840090  adrp x0, #0x7708000
0x0666CDC0: 002040f9  ldr x0, [x0, #0x40]
0x0666CDC4: 154f2c97  bl #0x3180a18
0x0666CDC8: e0840090  adrp x0, #0x7708000
0x0666CDCC: 002840f9  ldr x0, [x0, #0x50]
0x0666CDD0: 124f2c97  bl #0x3180a18
0x0666CDD4: 28008052  movz w8, #0x1
0x0666CDD8: 88f60339  strb w8, [x20, #0xfd]
0x0666CDDC: e00240f9  ldr x0, [x23]
0x0666CDE0: 745a44a9  ldp x20, x22, [x19, #0x40]
0x0666CDE4: af4f2c97  bl #0x3180ca0
0x0666CDE8: a20240f9  ldr x2, [x21]
0x0666CDEC: e10316aa  mov x1, x22
0x0666CDF0: e3031faa  mov x3, xzr
0x0666CDF4: f50300aa  mov x21, x0
0x0666CDF8: 08c2af97  bl #0x525d618
0x0666CDFC: 140600b4  cbz x20, #0x666cebc
0x0666CE00: e00314aa  mov x0, x20
0x0666CE04: e10315aa  mov x1, x21
0x0666CE08: e2031faa  mov x2, xzr
0x0666CE0C: 1c4e0a94  bl #0x690067c
0x0666CE10: e0040036  tbz w0, #0, #0x666ceac
0x0666CE14: 682240f9  ldr x8, [x19, #0x40]
0x0666CE18: 280500b4  cbz x8, #0x666cebc
0x0666CE1C: 602640f9  ldr x0, [x19, #0x48]
0x0666CE20: e00400b4  cbz x0, #0x666cebc
0x0666CE24: 141940f9  ldr x20, [x8, #0x30]
0x0666CE28: e1031faa  mov x1, xzr
0x0666CE2C: fd14ed97  bl #0x61b2220
0x0666CE30: 740400b4  cbz x20, #0x666cebc
0x0666CE34: 808e07f8  str x0, [x20, #0x78]!
0x0666CE38: e10300aa  mov x1, x0
0x0666CE3C: e00314aa  mov x0, x20
0x0666CE40: e14e2c97  bl #0x31809c4
0x0666CE44: 682240f9  ldr x8, [x19, #0x40]
0x0666CE48: a80300b4  cbz x8, #0x666cebc
0x0666CE4C: 161940f9  ldr x22, [x8, #0x30]
0x0666CE50: e8840090  adrp x8, #0x7708000
0x0666CE54: 741640f9  ldr x20, [x19, #0x28]
0x0666CE58: 082540f9  ldr x8, [x8, #0x48]
0x0666CE5C: 000140f9  ldr x0, [x8]
0x0666CE60: 904f2c97  bl #0x3180ca0
0x0666CE64: e10316aa  mov x1, x22
0x0666CE68: e2031faa  mov x2, xzr
0x0666CE6C: f50300aa  mov x21, x0
0x0666CE70: 1a1ae697  bl #0x5ff36d8
0x0666CE74: 540200b4  cbz x20, #0x666cebc
0x0666CE78: e8840090  adrp x8, #0x7708000
0x0666CE7C: 082940f9  ldr x8, [x8, #0x50]
0x0666CE80: e00314aa  mov x0, x20
0x0666CE84: e10315aa  mov x1, x21
0x0666CE88: 020140f9  ldr x2, [x8]
0x0666CE8C: b8df5c97  bl #0x3da4d6c
0x0666CE90: 602240f9  ldr x0, [x19, #0x40]
0x0666CE94: 400100b4  cbz x0, #0x666cebc
0x0666CE98: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0666CE9C: f65741a9  ldp x22, x21, [sp, #0x10]
0x0666CEA0: e1031faa  mov x1, xzr
0x0666CEA4: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x0666CEA8: ed510a14  b #0x690165c
0x0666CEAC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0666CEB0: f65741a9  ldp x22, x21, [sp, #0x10]
0x0666CEB4: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x0666CEB8: c0035fd6  ret
0x0666CEBC: 7c4f2c97  bl #0x3180cac

; RVA 0x666CEC0 | public void .ctor() { }
; bytes=72 sha256=da702cd653b27581925a49bf60550b26ef2e52bfd1a94aa0fe576734bcbb69c1 status=arm64_complete_bound indexed_start=True
0x0666CEC0: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0666CEC4: f44f01a9  stp x20, x19, [sp, #0x10]
0x0666CEC8: f4b50090  adrp x20, #0x7d28000
0x0666CECC: f5840090  adrp x21, #0x7708000
0x0666CED0: 88fa4339  ldrb w8, [x20, #0xfe]
0x0666CED4: b52e40f9  ldr x21, [x21, #0x58]
0x0666CED8: f30300aa  mov x19, x0
0x0666CEDC: c8000037  tbnz w8, #0, #0x666cef4
0x0666CEE0: e0840090  adrp x0, #0x7708000
0x0666CEE4: 002c40f9  ldr x0, [x0, #0x58]
0x0666CEE8: cc4e2c97  bl #0x3180a18
0x0666CEEC: 28008052  movz w8, #0x1
0x0666CEF0: 88fa0339  strb w8, [x20, #0xfe]
0x0666CEF4: a10240f9  ldr x1, [x21]
0x0666CEF8: e00313aa  mov x0, x19
0x0666CEFC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0666CF00: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0666CF04: 480d7e17  b #0x45f0424

