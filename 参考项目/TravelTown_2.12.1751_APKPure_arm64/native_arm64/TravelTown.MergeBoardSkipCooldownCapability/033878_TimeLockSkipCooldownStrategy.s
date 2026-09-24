; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 33878 Merger.MergeBoardSkipCooldownCapability.Logic.TimeLockSkipCooldownStrategy
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A630C4 | public bool IsOnCooldown(Entity entity) { }
; bytes=124 sha256=22418a96dcec3f39e06c7006bcc1dba351063a100f800eb05ebab89888291d26 status=arm64_complete_bound indexed_start=True
0x06A630C4: ff4301d1  sub sp, sp, #0x50
0x06A630C8: fe1b00f9  str x30, [sp, #0x30]
0x06A630CC: f44f04a9  stp x20, x19, [sp, #0x40]
0x06A630D0: 349600f0  adrp x20, #0x7d2a000
0x06A630D4: 881e5a39  ldrb w8, [x20, #0x687]
0x06A630D8: f30301aa  mov x19, x1
0x06A630DC: c8000037  tbnz w8, #0, #0x6a630f4
0x06A630E0: a06000f0  adrp x0, #0x767a000
0x06A630E4: 00b842f9  ldr x0, [x0, #0x570]
0x06A630E8: 4c761c97  bl #0x3180a18
0x06A630EC: 28008052  movz w8, #0x1
0x06A630F0: 881e1a39  strb w8, [x20, #0x687]
0x06A630F4: 00e4006f  movi v0.2d, #0000000000000000
0x06A630F8: ff1300f9  str xzr, [sp, #0x20]
0x06A630FC: e00300ad  stp q0, q0, [sp]
0x06A63100: f30100b4  cbz x19, #0x6a6313c
0x06A63104: a86000f0  adrp x8, #0x767a000
0x06A63108: 08b942f9  ldr x8, [x8, #0x570]
0x06A6310C: e1030091  mov x1, sp
0x06A63110: e00313aa  mov x0, x19
0x06A63114: 020140f9  ldr x2, [x8]
0x06A63118: 8bf34697  bl #0x3c1ff44
0x06A6311C: e8634039  ldrb w8, [sp, #0x18]
0x06A63120: f44f44a9  ldp x20, x19, [sp, #0x40]
0x06A63124: fe1b40f9  ldr x30, [sp, #0x30]
0x06A63128: 1f010071  cmp w8, #0
0x06A6312C: e8079f1a  cset w8, ne
0x06A63130: 0000080a  and w0, w0, w8
0x06A63134: ff430191  add sp, sp, #0x50
0x06A63138: c0035fd6  ret
0x06A6313C: dc761c97  bl #0x3180cac

; RVA 0x6A63A30 | public double GetTimeLeft(Entity entity) { }
; bytes=124 sha256=c83153067b0b58e674fc4ecdbad4ce80c5669181772429c6cdb2f1ab515ceb70 status=arm64_complete_bound indexed_start=True
0x06A63A30: ff4301d1  sub sp, sp, #0x50
0x06A63A34: fe1b00f9  str x30, [sp, #0x30]
0x06A63A38: f44f04a9  stp x20, x19, [sp, #0x40]
0x06A63A3C: 349600f0  adrp x20, #0x7d2a000
0x06A63A40: 88225a39  ldrb w8, [x20, #0x688]
0x06A63A44: f30301aa  mov x19, x1
0x06A63A48: c8000037  tbnz w8, #0, #0x6a63a60
0x06A63A4C: a06000f0  adrp x0, #0x767a000
0x06A63A50: 00b842f9  ldr x0, [x0, #0x570]
0x06A63A54: f1731c97  bl #0x3180a18
0x06A63A58: 28008052  movz w8, #0x1
0x06A63A5C: 88221a39  strb w8, [x20, #0x688]
0x06A63A60: 00e4006f  movi v0.2d, #0000000000000000
0x06A63A64: ff1300f9  str xzr, [sp, #0x20]
0x06A63A68: e00300ad  stp q0, q0, [sp]
0x06A63A6C: f30100b4  cbz x19, #0x6a63aa8
0x06A63A70: a86000f0  adrp x8, #0x767a000
0x06A63A74: 08b942f9  ldr x8, [x8, #0x570]
0x06A63A78: e1030091  mov x1, sp
0x06A63A7C: e00313aa  mov x0, x19
0x06A63A80: 020140f9  ldr x2, [x8]
0x06A63A84: 30f14697  bl #0x3c1ff44
0x06A63A88: e00340fd  ldr d0, [sp]
0x06A63A8C: f44f44a9  ldp x20, x19, [sp, #0x40]
0x06A63A90: fe1b40f9  ldr x30, [sp, #0x30]
0x06A63A94: 1f000072  tst w0, #1
0x06A63A98: e103679e  fmov d1, xzr
0x06A63A9C: 001c611e  fcsel d0, d0, d1, ne
0x06A63AA0: ff430191  add sp, sp, #0x50
0x06A63AA4: c0035fd6  ret
0x06A63AA8: 81741c97  bl #0x3180cac

; RVA 0x6A63AAC | public void .ctor() { }
; bytes=8 sha256=440855ee81a0274a56f3c9d94aacb696412bfe85b8ac011e7e605ece19ba8324 status=arm64_complete_bound indexed_start=True
0x06A63AAC: e1031faa  mov x1, xzr
0x06A63AB0: d3dab117  b #0x56da5fc

