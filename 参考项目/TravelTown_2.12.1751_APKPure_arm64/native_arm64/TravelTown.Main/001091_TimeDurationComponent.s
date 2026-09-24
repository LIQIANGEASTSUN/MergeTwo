; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1091 MergeEngine.ECS.Components.Items.TimeDurationComponent
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x68FDEEC | public double get_Timeleft() { }
; bytes=8 sha256=1810fc3bb4089a333dd65759858abd05e3f4145e8cbb11e6bb1a392f80658059 status=arm64_complete_bound indexed_start=True
0x068FDEEC: 001440fd  ldr d0, [x0, #0x28]
0x068FDEF0: c0035fd6  ret

; RVA 0x68FDEF4 | public void set_Timeleft(double value) { }
; bytes=8 sha256=84cdf9593479510911ffd6bf3b37d5c8d9bd2b14091bd09ef19e7b62ae907003 status=arm64_complete_bound indexed_start=True
0x068FDEF4: 001400fd  str d0, [x0, #0x28]
0x068FDEF8: c0035fd6  ret

; RVA 0x68FDEFC | public bool get_Active() { }
; bytes=8 sha256=b5f756a94e2a4fd04c581b81886364460d3cd7c165e6a51d5f3195a9439a10c4 status=arm64_complete_bound indexed_start=True
0x068FDEFC: 00c04039  ldrb w0, [x0, #0x30]
0x068FDF00: c0035fd6  ret

; RVA 0x68FDF04 | public void set_Active(bool value) { }
; bytes=12 sha256=a249c3c061ec9da6b813e9f7669c4eee4712ae82443eca5c2d67c54d32999205 status=arm64_complete_bound indexed_start=True
0x068FDF04: 28000012  and w8, w1, #1
0x068FDF08: 08c00039  strb w8, [x0, #0x30]
0x068FDF0C: c0035fd6  ret

; RVA 0x68FDF10 | public bool get_IsActivating() { }
; bytes=8 sha256=6a3cb8c4f92b5961effe3a4ee16cd73e98d1d0f94c954c6b45545a35177d46d8 status=arm64_complete_bound indexed_start=True
0x068FDF10: 00c44039  ldrb w0, [x0, #0x31]
0x068FDF14: c0035fd6  ret

; RVA 0x68FDF18 | public void set_IsActivating(bool value) { }
; bytes=12 sha256=2399f9d12d43e9d2bcf21d8ce2492dc5f3414cbe7d9899b246726f7cfec62d53 status=arm64_complete_bound indexed_start=True
0x068FDF18: 28000012  and w8, w1, #1
0x068FDF1C: 08c40039  strb w8, [x0, #0x31]
0x068FDF20: c0035fd6  ret

; RVA 0x68FDF24 | public double get_Duration() { }
; bytes=8 sha256=c38937bcb2beb7c09e9c53044bde4b4117eb76bf52df427b991ba1432392624f status=arm64_complete_bound indexed_start=True
0x068FDF24: 001c40fd  ldr d0, [x0, #0x38]
0x068FDF28: c0035fd6  ret

; RVA 0x68FDF2C | public void set_Duration(double value) { }
; bytes=8 sha256=08f9975701e4448621e9c8e0aa112bfc8d7702d8cb52c37ad1f66ea5cac95cbc status=arm64_complete_bound indexed_start=True
0x068FDF2C: 001c00fd  str d0, [x0, #0x38]
0x068FDF30: c0035fd6  ret

; RVA 0x68FDF34 | public void .ctor(TimeDurationCapability capability, Entity entity) { }
; bytes=120 sha256=7fb2cf78f9537ac3a7da7b79db84ada619c129cd96bc07cf3aef66107f3cd62a status=arm64_complete_bound indexed_start=True
0x068FDF34: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x068FDF38: f65701a9  stp x22, x21, [sp, #0x10]
0x068FDF3C: f44f02a9  stp x20, x19, [sp, #0x20]
0x068FDF40: 76a10090  adrp x22, #0x7d29000
0x068FDF44: 577100b0  adrp x23, #0x7726000
0x068FDF48: c8fa6239  ldrb w8, [x22, #0x8be]
0x068FDF4C: f7e243f9  ldr x23, [x23, #0x7c0]
0x068FDF50: f50302aa  mov x21, x2
0x068FDF54: f40301aa  mov x20, x1
0x068FDF58: f30300aa  mov x19, x0
0x068FDF5C: c8000037  tbnz w8, #0, #0x68fdf74
0x068FDF60: 407100b0  adrp x0, #0x7726000
0x068FDF64: 00e043f9  ldr x0, [x0, #0x7c0]
0x068FDF68: ac0a2297  bl #0x3180a18
0x068FDF6C: 28008052  movz w8, #0x1
0x068FDF70: c8fa2239  strb w8, [x22, #0x8be]
0x068FDF74: e30240f9  ldr x3, [x23]
0x068FDF78: e00313aa  mov x0, x19
0x068FDF7C: e10314aa  mov x1, x20
0x068FDF80: e20315aa  mov x2, x21
0x068FDF84: f5849197  bl #0x4d5f358
0x068FDF88: 140100b4  cbz x20, #0x68fdfa8
0x068FDF8C: 800e40fd  ldr d0, [x20, #0x18]
0x068FDF90: f65741a9  ldp x22, x21, [sp, #0x10]
0x068FDF94: 601600fd  str d0, [x19, #0x28]
0x068FDF98: 601e00fd  str d0, [x19, #0x38]
0x068FDF9C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x068FDFA0: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x068FDFA4: c0035fd6  ret
0x068FDFA8: 410b2297  bl #0x3180cac

; RVA 0x68FDFAC | public bool get_IgnoreBoardSecondsForThisTick() { }
; bytes=8 sha256=6a4f1a962f868613e6936806601aa97f462be4272d6039e73d901c7f9868c768 status=arm64_complete_bound indexed_start=True
0x068FDFAC: 00004139  ldrb w0, [x0, #0x40]
0x068FDFB0: c0035fd6  ret

; RVA 0x68FDFB4 | public void set_IgnoreBoardSecondsForThisTick(bool value) { }
; bytes=12 sha256=501d7d5905288072269f6b4c4b92bbb856126869e31af66d1d507a7ad60889a3 status=arm64_complete_bound indexed_start=True
0x068FDFB4: 28000012  and w8, w1, #1
0x068FDFB8: 08000139  strb w8, [x0, #0x40]
0x068FDFBC: c0035fd6  ret

