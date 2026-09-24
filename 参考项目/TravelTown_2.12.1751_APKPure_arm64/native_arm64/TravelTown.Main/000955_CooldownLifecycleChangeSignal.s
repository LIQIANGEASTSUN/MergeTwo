; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 955 MergeEngine.ECS.Systems.Items.CooldownLifecycleChangeSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x678CF40 | public void .ctor(bool alive) { }
; bytes=136 sha256=cbb718c3a992897e724b7eaddd8a89ad882a03ad6f16042ad5d6fa2689d2a6c5 status=arm64_complete_bound indexed_start=True
0x0678CF40: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x0678CF44: f65701a9  stp x22, x21, [sp, #0x10]
0x0678CF48: f44f02a9  stp x20, x19, [sp, #0x20]
0x0678CF4C: f7ac0090  adrp x23, #0x7d28000
0x0678CF50: 357900b0  adrp x21, #0x76b1000
0x0678CF54: b67900f0  adrp x22, #0x76c3000
0x0678CF58: e83a7539  ldrb w8, [x23, #0xd4e]
0x0678CF5C: b5c243f9  ldr x21, [x21, #0x780]
0x0678CF60: d67e43f9  ldr x22, [x22, #0x6f8]
0x0678CF64: f403012a  mov w20, w1
0x0678CF68: f30300aa  mov x19, x0
0x0678CF6C: 28010037  tbnz w8, #0, #0x678cf90
0x0678CF70: 207900b0  adrp x0, #0x76b1000
0x0678CF74: 00c043f9  ldr x0, [x0, #0x780]
0x0678CF78: a8ce2797  bl #0x3180a18
0x0678CF7C: a07900f0  adrp x0, #0x76c3000
0x0678CF80: 007c43f9  ldr x0, [x0, #0x6f8]
0x0678CF84: a5ce2797  bl #0x3180a18
0x0678CF88: 28008052  movz w8, #0x1
0x0678CF8C: e83a3539  strb w8, [x23, #0xd4e]
0x0678CF90: e00313aa  mov x0, x19
0x0678CF94: e1031faa  mov x1, xzr
0x0678CF98: 9935bd97  bl #0x56da5fc
0x0678CF9C: 9f020072  tst w20, #1
0x0678CFA0: a812969a  csel x8, x21, x22, ne
0x0678CFA4: 130100b4  cbz x19, #0x678cfc4
0x0678CFA8: 010140f9  ldr x1, [x8]
0x0678CFAC: f65741a9  ldp x22, x21, [sp, #0x10]
0x0678CFB0: 610e01f8  str x1, [x19, #0x10]!
0x0678CFB4: e00313aa  mov x0, x19
0x0678CFB8: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0678CFBC: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x0678CFC0: 81ce2717  b #0x31809c4
0x0678CFC4: 3acf2797  bl #0x3180cac

; RVA 0x678CFC8 | public SoundArguments GetSoundArguments() { }
; bytes=44 sha256=0ce50aa48a2e04582b53631c804c52b59c2c806d8e7cf9b5df4b10c6ee1ff71c status=arm64_complete_bound indexed_start=True
0x0678CFC8: ff8300d1  sub sp, sp, #0x20
0x0678CFCC: fffb00a9  stp xzr, x30, [sp, #8]
0x0678CFD0: 010840f9  ldr x1, [x0, #0x10]
0x0678CFD4: e0030091  mov x0, sp
0x0678CFD8: e2031faa  mov x2, xzr
0x0678CFDC: ff0300f9  str xzr, [sp]
0x0678CFE0: 0f23f997  bl #0x65d5c1c
0x0678CFE4: e00740a9  ldp x0, x1, [sp]
0x0678CFE8: fe0b40f9  ldr x30, [sp, #0x10]
0x0678CFEC: ff830091  add sp, sp, #0x20
0x0678CFF0: c0035fd6  ret

