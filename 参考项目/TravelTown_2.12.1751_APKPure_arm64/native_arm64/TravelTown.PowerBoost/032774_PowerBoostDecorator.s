; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 32774 Merger.MergeBoard.PowerBoost.Systems.PowerBoostDecorator
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6ACCCA8 | public void DecorateSystems(SystemsBuilder systemsBuilder) { }
; bytes=128 sha256=aee6692c29ae4ed62ac01d66fbd0bbb44155b70528645ffbd2be59d60047645f status=arm64_complete_bound indexed_start=True
0x06ACCCA8: ff0301d1  sub sp, sp, #0x40
0x06ACCCAC: fe0b00f9  str x30, [sp, #0x10]
0x06ACCCB0: f65702a9  stp x22, x21, [sp, #0x20]
0x06ACCCB4: f44f03a9  stp x20, x19, [sp, #0x30]
0x06ACCCB8: f69200d0  adrp x22, #0x7d2a000
0x06ACCCBC: 356300f0  adrp x21, #0x7733000
0x06ACCCC0: c8726939  ldrb w8, [x22, #0xa5c]
0x06ACCCC4: b5f247f9  ldr x21, [x21, #0xfe0]
0x06ACCCC8: f30301aa  mov x19, x1
0x06ACCCCC: f40300aa  mov x20, x0
0x06ACCCD0: c8000037  tbnz w8, #0, #0x6accce8
0x06ACCCD4: 206300f0  adrp x0, #0x7733000
0x06ACCCD8: 00f047f9  ldr x0, [x0, #0xfe0]
0x06ACCCDC: 4fcf1a97  bl #0x3180a18
0x06ACCCE0: 28008052  movz w8, #0x1
0x06ACCCE4: c8722939  strb w8, [x22, #0xa5c]
0x06ACCCE8: 810a40f9  ldr x1, [x20, #0x10]
0x06ACCCEC: e00313aa  mov x0, x19
0x06ACCCF0: e2031faa  mov x2, xzr
0x06ACCCF4: 1fa6fe97  bl #0x6a76570
0x06ACCCF8: a80240f9  ldr x8, [x21]
0x06ACCCFC: e00700a9  stp x0, x1, [sp]
0x06ACCD00: e0030091  mov x0, sp
0x06ACCD04: e10308aa  mov x1, x8
0x06ACCD08: 11294e97  bl #0x3e5714c
0x06ACCD0C: e1031faa  mov x1, xzr
0x06ACCD10: 7f21d197  bl #0x5f1530c
0x06ACCD14: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06ACCD18: f65742a9  ldp x22, x21, [sp, #0x20]
0x06ACCD1C: fe0b40f9  ldr x30, [sp, #0x10]
0x06ACCD20: ff030191  add sp, sp, #0x40
0x06ACCD24: c0035fd6  ret

; RVA 0x6ACCD28 | public void .ctor() { }
; bytes=8 sha256=0a4962f544ae1d6744fb7c8808045e29dad34cbe113f988d320ee0e2320900b7 status=arm64_complete_bound indexed_start=True
0x06ACCD28: e1031faa  mov x1, xzr
0x06ACCD2C: 3436b017  b #0x56da5fc

