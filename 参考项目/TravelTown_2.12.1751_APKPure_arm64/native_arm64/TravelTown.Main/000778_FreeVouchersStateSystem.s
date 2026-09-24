; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 778 MergeEngine.ECS.Systems.State.Board.FreeVouchersStateSystem
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x64EAACC | protected override void LoadState(CoreBoardFreeVouchers newState) { }
; bytes=404 sha256=127ed408efa16743f4c53978a7ab726edcdf98d03efd003e1931048d7ac82a93 status=arm64_complete_bound indexed_start=True
0x064EAACC: ff4301d1  sub sp, sp, #0x50
0x064EAAD0: fe5f02a9  stp x30, x23, [sp, #0x20]
0x064EAAD4: f65703a9  stp x22, x21, [sp, #0x30]
0x064EAAD8: f44f04a9  stp x20, x19, [sp, #0x40]
0x064EAADC: f5c100b0  adrp x21, #0x7d27000
0x064EAAE0: a8264139  ldrb w8, [x21, #0x49]
0x064EAAE4: f40301aa  mov x20, x1
0x064EAAE8: f30300aa  mov x19, x0
0x064EAAEC: 48020037  tbnz w8, #0, #0x64eab34
0x064EAAF0: 809000b0  adrp x0, #0x76fb000
0x064EAAF4: 002445f9  ldr x0, [x0, #0xa48]
0x064EAAF8: c8573297  bl #0x3180a18
0x064EAAFC: 809000b0  adrp x0, #0x76fb000
0x064EAB00: 002845f9  ldr x0, [x0, #0xa50]
0x064EAB04: c5573297  bl #0x3180a18
0x064EAB08: 809000b0  adrp x0, #0x76fb000
0x064EAB0C: 002c45f9  ldr x0, [x0, #0xa58]
0x064EAB10: c2573297  bl #0x3180a18
0x064EAB14: 809000b0  adrp x0, #0x76fb000
0x064EAB18: 003045f9  ldr x0, [x0, #0xa60]
0x064EAB1C: bf573297  bl #0x3180a18
0x064EAB20: 809000b0  adrp x0, #0x76fb000
0x064EAB24: 003445f9  ldr x0, [x0, #0xa68]
0x064EAB28: bc573297  bl #0x3180a18
0x064EAB2C: 28008052  movz w8, #0x1
0x064EAB30: a8260139  strb w8, [x21, #0x49]
0x064EAB34: ffff00a9  stp xzr, xzr, [sp, #8]
0x064EAB38: ff0f00f9  str xzr, [sp, #0x18]
0x064EAB3C: 340400b4  cbz x20, #0x64eabc0
0x064EAB40: 800e40f9  ldr x0, [x20, #0x18]
0x064EAB44: c00400b4  cbz x0, #0x64eabdc
0x064EAB48: 889000b0  adrp x8, #0x76fb000
0x064EAB4C: 083145f9  ldr x8, [x8, #0xa60]
0x064EAB50: 959000b0  adrp x21, #0x76fb000
0x064EAB54: 969000b0  adrp x22, #0x76fb000
0x064EAB58: 949000b0  adrp x20, #0x76fb000
0x064EAB5C: 010140f9  ldr x1, [x8]
0x064EAB60: b52a45f9  ldr x21, [x21, #0xa50]
0x064EAB64: d63645f9  ldr x22, [x22, #0xa68]
0x064EAB68: 942645f9  ldr x20, [x20, #0xa48]
0x064EAB6C: e8230091  add x8, sp, #8
0x064EAB70: 3e696d97  bl #0x4045068
0x064EAB74: a10240f9  ldr x1, [x21]
0x064EAB78: e0230091  add x0, sp, #8
0x064EAB7C: 8eabac97  bl #0x50159b4
0x064EAB80: a0010036  tbz w0, #0, #0x64eabb4
0x064EAB84: f70f40f9  ldr x23, [sp, #0x18]
0x064EAB88: 770200b4  cbz x23, #0x64eabd4
0x064EAB8C: e00a40f9  ldr x0, [x23, #0x10]
0x064EAB90: c10240f9  ldr x1, [x22]
0x064EAB94: e2031faa  mov x2, xzr
0x064EAB98: 36ffbf97  bl #0x54ea870
0x064EAB9C: c0fe0736  tbz w0, #0, #0x64eab74
0x064EABA0: 682a40f9  ldr x8, [x19, #0x50]
0x064EABA4: a80100b4  cbz x8, #0x64eabd8
0x064EABA8: e91a40b9  ldr w9, [x23, #0x18]
0x064EABAC: 095901b9  str w9, [x8, #0x158]
0x064EABB0: f1ffff17  b #0x64eab74
0x064EABB4: 810240f9  ldr x1, [x20]
0x064EABB8: e0230091  add x0, sp, #8
0x064EABBC: 7dabac97  bl #0x50159b0
0x064EABC0: f44f44a9  ldp x20, x19, [sp, #0x40]
0x064EABC4: f65743a9  ldp x22, x21, [sp, #0x30]
0x064EABC8: fe5f42a9  ldp x30, x23, [sp, #0x20]
0x064EABCC: ff430191  add sp, sp, #0x50
0x064EABD0: c0035fd6  ret
0x064EABD4: 36583297  bl #0x3180cac
0x064EABD8: 35583297  bl #0x3180cac
0x064EABDC: 34583297  bl #0x3180cac
0x064EABE0: 03000014  b #0x64eabec
0x064EABE4: 02000014  b #0x64eabec
0x064EABE8: 01000014  b #0x64eabec
0x064EABEC: f30300aa  mov x19, x0
0x064EABF0: 3f040071  cmp w1, #1
0x064EABF4: a1010054  b.ne #0x64eac28
0x064EABF8: e00313aa  mov x0, x19
0x064EABFC: 458f3394  bl #0x71ce910
0x064EAC00: 140040f9  ldr x20, [x0]
0x064EAC04: 478f3394  bl #0x71ce920
0x064EAC08: 889000b0  adrp x8, #0x76fb000
0x064EAC0C: 082545f9  ldr x8, [x8, #0xa48]
0x064EAC10: e0230091  add x0, sp, #8
0x064EAC14: 010140f9  ldr x1, [x8]
0x064EAC18: 66abac97  bl #0x50159b0
0x064EAC1C: 34fdffb4  cbz x20, #0x64eabc0
0x064EAC20: e00314aa  mov x0, x20
0x064EAC24: 20583297  bl #0x3180ca4
0x064EAC28: f4031faa  mov x20, xzr
0x064EAC2C: 02000014  b #0x64eac34
0x064EAC30: f30300aa  mov x19, x0
0x064EAC34: 889000b0  adrp x8, #0x76fb000
0x064EAC38: 082545f9  ldr x8, [x8, #0xa48]
0x064EAC3C: 010140f9  ldr x1, [x8]
0x064EAC40: e0230091  add x0, sp, #8
0x064EAC44: 5babac97  bl #0x50159b0
0x064EAC48: 740000b5  cbnz x20, #0x64eac54
0x064EAC4C: e00313aa  mov x0, x19
0x064EAC50: 42eb3597  bl #0x3265958
0x064EAC54: e00314aa  mov x0, x20
0x064EAC58: 13583297  bl #0x3180ca4
0x064EAC5C: 2e7a2497  bl #0x2e09514

; RVA 0x64EAC60 | private void UpdateFreeBurst(int value) { }
; bytes=28 sha256=4a03c4124366cb760a7711e32a7a2256f55a13424a7d87ac9d6420085c5cd89e status=arm64_complete_bound indexed_start=True
0x064EAC60: fe0f1ff8  str x30, [sp, #-0x10]!
0x064EAC64: 082840f9  ldr x8, [x0, #0x50]
0x064EAC68: 880000b4  cbz x8, #0x64eac78
0x064EAC6C: 015901b9  str w1, [x8, #0x158]
0x064EAC70: fe0741f8  ldr x30, [sp], #0x10
0x064EAC74: c0035fd6  ret
0x064EAC78: 0d583297  bl #0x3180cac

; RVA 0x64EAC7C | public void .ctor() { }
; bytes=72 sha256=3c2e69a256f4d1badcefd9e5f41ca0f2d2bc61a826a9bcbc5d9399cce7a83e15 status=arm64_complete_bound indexed_start=True
0x064EAC7C: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x064EAC80: f44f01a9  stp x20, x19, [sp, #0x10]
0x064EAC84: f4c100b0  adrp x20, #0x7d27000
0x064EAC88: 959000b0  adrp x21, #0x76fb000
0x064EAC8C: 882a4139  ldrb w8, [x20, #0x4a]
0x064EAC90: b53a45f9  ldr x21, [x21, #0xa70]
0x064EAC94: f30300aa  mov x19, x0
0x064EAC98: c8000037  tbnz w8, #0, #0x64eacb0
0x064EAC9C: 809000b0  adrp x0, #0x76fb000
0x064EACA0: 003845f9  ldr x0, [x0, #0xa70]
0x064EACA4: 5d573297  bl #0x3180a18
0x064EACA8: 28008052  movz w8, #0x1
0x064EACAC: 882a0139  strb w8, [x20, #0x4a]
0x064EACB0: a10240f9  ldr x1, [x21]
0x064EACB4: e00313aa  mov x0, x19
0x064EACB8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x064EACBC: fe57c2a8  ldp x30, x21, [sp], #0x20
0x064EACC0: 36698117  b #0x4545198

