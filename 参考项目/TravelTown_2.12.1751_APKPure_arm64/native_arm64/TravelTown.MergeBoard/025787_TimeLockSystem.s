; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25787 Merger.MergeBoard.Systems.TimeLockSystem
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A77B70 | public void Tick(TickContext context) { }
; bytes=208 sha256=01cfbda709e5b025327052a679d84c712387aa9f557cb85eb2be4efd4df7b3d6 status=arm64_complete_bound indexed_start=True
0x06A77B70: ffc301d1  sub sp, sp, #0x70
0x06A77B74: fe5705a9  stp x30, x21, [sp, #0x50]
0x06A77B78: f44f06a9  stp x20, x19, [sp, #0x60]
0x06A77B7C: 959500f0  adrp x21, #0x7d2a000
0x06A77B80: a83e5c39  ldrb w8, [x21, #0x70f]
0x06A77B84: f40301aa  mov x20, x1
0x06A77B88: f30300aa  mov x19, x0
0x06A77B8C: 28010037  tbnz w8, #0, #0x6a77bb0
0x06A77B90: c06500d0  adrp x0, #0x7731000
0x06A77B94: 00dc42f9  ldr x0, [x0, #0x5b8]
0x06A77B98: a0231c97  bl #0x3180a18
0x06A77B9C: c06500b0  adrp x0, #0x7730000
0x06A77BA0: 008847f9  ldr x0, [x0, #0xf10]
0x06A77BA4: 9d231c97  bl #0x3180a18
0x06A77BA8: 28008052  movz w8, #0x1
0x06A77BAC: a83e1c39  strb w8, [x21, #0x70f]
0x06A77BB0: ff2700f9  str xzr, [sp, #0x48]
0x06A77BB4: ff4300b9  str wzr, [sp, #0x40]
0x06A77BB8: 800640f9  ldr x0, [x20, #8]
0x06A77BBC: 000400b4  cbz x0, #0x6a77c3c
0x06A77BC0: c86500b0  adrp x8, #0x7730000
0x06A77BC4: 088947f9  ldr x8, [x8, #0xf10]
0x06A77BC8: e1230191  add x1, sp, #0x48
0x06A77BCC: 020140f9  ldr x2, [x8]
0x06A77BD0: 14354d97  bl #0x3dc5020
0x06A77BD4: 00010036  tbz w0, #0, #0x6a77bf4
0x06A77BD8: 810240ad  ldp q1, q0, [x20]
0x06A77BDC: e22740f9  ldr x2, [sp, #0x48]
0x06A77BE0: e1830091  add x1, sp, #0x20
0x06A77BE4: e00313aa  mov x0, x19
0x06A77BE8: e10301ad  stp q1, q0, [sp, #0x20]
0x06A77BEC: 15000094  bl #0x6a77c40
0x06A77BF0: 0f000014  b #0x6a77c2c
0x06A77BF4: 800640f9  ldr x0, [x20, #8]
0x06A77BF8: 200200b4  cbz x0, #0x6a77c3c
0x06A77BFC: c86500d0  adrp x8, #0x7731000
0x06A77C00: 08dd42f9  ldr x8, [x8, #0x5b8]
0x06A77C04: e1030191  add x1, sp, #0x40
0x06A77C08: 020140f9  ldr x2, [x8]
0x06A77C0C: b2344d97  bl #0x3dc4ed4
0x06A77C10: e0000036  tbz w0, #0, #0x6a77c2c
0x06A77C14: 820640ad  ldp q2, q1, [x20]
0x06A77C18: e04340bd  ldr s0, [sp, #0x40]
0x06A77C1C: e1030091  mov x1, sp
0x06A77C20: e00313aa  mov x0, x19
0x06A77C24: e20700ad  stp q2, q1, [sp]
0x06A77C28: 98000094  bl #0x6a77e88
0x06A77C2C: f44f46a9  ldp x20, x19, [sp, #0x60]
0x06A77C30: fe5745a9  ldp x30, x21, [sp, #0x50]
0x06A77C34: ffc30191  add sp, sp, #0x70
0x06A77C38: c0035fd6  ret
0x06A77C3C: 1c241c97  bl #0x3180cac

; RVA 0x6A77C40 | private void HandleTapAction(TickContext context, TapAction tapAction) { }
; bytes=584 sha256=7099648020af906ef7d99baba495f2ea8206e2131783ce3c08c754e0e6fd0bd7 status=arm64_complete_bound indexed_start=True
0x06A77C40: ff8306d1  sub sp, sp, #0x1a0
0x06A77C44: fd7b14a9  stp x29, x30, [sp, #0x140]
0x06A77C48: fc6f15a9  stp x28, x27, [sp, #0x150]
0x06A77C4C: fa6716a9  stp x26, x25, [sp, #0x160]
0x06A77C50: f85f17a9  stp x24, x23, [sp, #0x170]
0x06A77C54: f65718a9  stp x22, x21, [sp, #0x180]
0x06A77C58: f44f19a9  stp x20, x19, [sp, #0x190]
0x06A77C5C: 969500f0  adrp x22, #0x7d2a000
0x06A77C60: d56500d0  adrp x21, #0x7731000
0x06A77C64: c8425c39  ldrb w8, [x22, #0x710]
0x06A77C68: b52643f9  ldr x21, [x21, #0x648]
0x06A77C6C: f40302aa  mov x20, x2
0x06A77C70: f30301aa  mov x19, x1
0x06A77C74: c8030037  tbnz w8, #0, #0x6a77cec
0x06A77C78: c06500b0  adrp x0, #0x7730000
0x06A77C7C: 009447f9  ldr x0, [x0, #0xf28]
0x06A77C80: 66231c97  bl #0x3180a18
0x06A77C84: c06500d0  adrp x0, #0x7731000
0x06A77C88: 002843f9  ldr x0, [x0, #0x650]
0x06A77C8C: 63231c97  bl #0x3180a18
0x06A77C90: c0650090  adrp x0, #0x772f000
0x06A77C94: 003447f9  ldr x0, [x0, #0xe68]
0x06A77C98: 60231c97  bl #0x3180a18
0x06A77C9C: c06500d0  adrp x0, #0x7731000
0x06A77CA0: 002c43f9  ldr x0, [x0, #0x658]
0x06A77CA4: 5d231c97  bl #0x3180a18
0x06A77CA8: c06500d0  adrp x0, #0x7731000
0x06A77CAC: 003043f9  ldr x0, [x0, #0x660]
0x06A77CB0: 5a231c97  bl #0x3180a18
0x06A77CB4: c06500d0  adrp x0, #0x7731000
0x06A77CB8: 003443f9  ldr x0, [x0, #0x668]
0x06A77CBC: 57231c97  bl #0x3180a18
0x06A77CC0: c06500d0  adrp x0, #0x7731000
0x06A77CC4: 003843f9  ldr x0, [x0, #0x670]
0x06A77CC8: 54231c97  bl #0x3180a18
0x06A77CCC: c06500d0  adrp x0, #0x7731000
0x06A77CD0: 003c43f9  ldr x0, [x0, #0x678]
0x06A77CD4: 51231c97  bl #0x3180a18
0x06A77CD8: c06500d0  adrp x0, #0x7731000
0x06A77CDC: 002443f9  ldr x0, [x0, #0x648]
0x06A77CE0: 4e231c97  bl #0x3180a18
0x06A77CE4: 28008052  movz w8, #0x1
0x06A77CE8: c8421c39  strb w8, [x22, #0x710]
0x06A77CEC: a00240f9  ldr x0, [x21]
0x06A77CF0: 00e4006f  movi v0.2d, #0000000000000000
0x06A77CF4: ff7b00f9  str xzr, [sp, #0xf0]
0x06A77CF8: e00308ad  stp q0, q0, [sp, #0x100]
0x06A77CFC: e08306ad  stp q0, q0, [sp, #0xd0]
0x06A77D00: e08305ad  stp q0, q0, [sp, #0xb0]
0x06A77D04: e08304ad  stp q0, q0, [sp, #0x90]
0x06A77D08: e08303ad  stp q0, q0, [sp, #0x70]
0x06A77D0C: e5231c97  bl #0x3180ca0
0x06A77D10: e1031faa  mov x1, xzr
0x06A77D14: f50300aa  mov x21, x0
0x06A77D18: 398ab197  bl #0x56da5fc
0x06A77D1C: 550b00b4  cbz x21, #0x6a77e84
0x06A77D20: d66500d0  adrp x22, #0x7731000
0x06A77D24: d9650090  adrp x25, #0x772f000
0x06A77D28: da6500b0  adrp x26, #0x7730000
0x06A77D2C: db6500d0  adrp x27, #0x7731000
0x06A77D30: dc6500d0  adrp x28, #0x7731000
0x06A77D34: dd6500d0  adrp x29, #0x7731000
0x06A77D38: d86500d0  adrp x24, #0x7731000
0x06A77D3C: d76500d0  adrp x23, #0x7731000
0x06A77D40: d62a43f9  ldr x22, [x22, #0x650]
0x06A77D44: 393747f9  ldr x25, [x25, #0xe68]
0x06A77D48: 5a9747f9  ldr x26, [x26, #0xf28]
0x06A77D4C: 7b3b43f9  ldr x27, [x27, #0x670]
0x06A77D50: 9c2f43f9  ldr x28, [x28, #0x658]
0x06A77D54: bd3f43f9  ldr x29, [x29, #0x678]
0x06A77D58: 183743f9  ldr x24, [x24, #0x668]
0x06A77D5C: f73243f9  ldr x23, [x23, #0x660]
0x06A77D60: e00315aa  mov x0, x21
0x06A77D64: 140c01f8  str x20, [x0, #0x10]!
0x06A77D68: e10314aa  mov x1, x20
0x06A77D6C: 16231c97  bl #0x31809c4
0x06A77D70: 610240ad  ldp q1, q0, [x19]
0x06A77D74: c00240f9  ldr x0, [x22]
0x06A77D78: e18302ad  stp q1, q0, [sp, #0x50]
0x06A77D7C: 498a4697  bl #0x3c1a6a0
0x06A77D80: 280340f9  ldr x8, [x25]
0x06A77D84: f40300aa  mov x20, x0
0x06A77D88: e00308aa  mov x0, x8
0x06A77D8C: c5231c97  bl #0x3180ca0
0x06A77D90: 420340f9  ldr x2, [x26]
0x06A77D94: e1031faa  mov x1, xzr
0x06A77D98: e3031faa  mov x3, xzr
0x06A77D9C: f60300aa  mov x22, x0
0x06A77DA0: da77d297  bl #0x5f15d08
0x06A77DA4: e08742ad  ldp q0, q1, [sp, #0x50]
0x06A77DA8: 630340f9  ldr x3, [x27]
0x06A77DAC: e8c30191  add x8, sp, #0x70
0x06A77DB0: e0830491  add x0, sp, #0x120
0x06A77DB4: e10314aa  mov x1, x20
0x06A77DB8: e20316aa  mov x2, x22
0x06A77DBC: e00709ad  stp q0, q1, [sp, #0x120]
0x06A77DC0: b1b74b97  bl #0x3d65c84
0x06A77DC4: 800340f9  ldr x0, [x28]
0x06A77DC8: b6231c97  bl #0x3180ca0
0x06A77DCC: a20340f9  ldr x2, [x29]
0x06A77DD0: e10315aa  mov x1, x21
0x06A77DD4: e3031faa  mov x3, xzr
0x06A77DD8: f40300aa  mov x20, x0
0x06A77DDC: e3649f97  bl #0x5251168
0x06A77DE0: 020340f9  ldr x2, [x24]
0x06A77DE4: e8030491  add x8, sp, #0x100
0x06A77DE8: e0c30191  add x0, sp, #0x70
0x06A77DEC: e10314aa  mov x1, x20
0x06A77DF0: 74656497  bl #0x43913c0
0x06A77DF4: e20240f9  ldr x2, [x23]
0x06A77DF8: e0030491  add x0, sp, #0x100
0x06A77DFC: e1430291  add x1, sp, #0x90
0x06A77E00: dd656497  bl #0x4391574
0x06A77E04: 00030036  tbz w0, #0, #0x6a77e64
0x06A77E08: e04b40f9  ldr x0, [sp, #0x90]
0x06A77E0C: e1031faa  mov x1, xzr
0x06A77E10: b53a0094  bl #0x6a868e4
0x06A77E14: 80020037  tbnz w0, #0, #0x6a77e64
0x06A77E18: e04f40fd  ldr d0, [sp, #0x98]
0x06A77E1C: 0820601e  fcmp d0, #0.0
0x06A77E20: 2d020054  b.le #0x6a77e64
0x06A77E24: e8c74239  ldrb w8, [sp, #0xb1]
0x06A77E28: e8010034  cbz w8, #0x6a77e64
0x06A77E2C: 600640ad  ldp q0, q1, [x19]
0x06A77E30: e24b40f9  ldr x2, [sp, #0x90]
0x06A77E34: e3af40b9  ldr w3, [sp, #0xac]
0x06A77E38: e1c30091  add x1, sp, #0x30
0x06A77E3C: e08701ad  stp q0, q1, [sp, #0x30]
0x06A77E40: 3a010094  bl #0x6a78328
0x06A77E44: 00010037  tbnz w0, #0, #0x6a77e64
0x06A77E48: 600640ad  ldp q0, q1, [x19]
0x06A77E4C: e24b40f9  ldr x2, [sp, #0x90]
0x06A77E50: e8430291  add x8, sp, #0x90
0x06A77E54: 03017db2  orr x3, x8, #8
0x06A77E58: e1430091  add x1, sp, #0x10
0x06A77E5C: e08700ad  stp q0, q1, [sp, #0x10]
0x06A77E60: aa010094  bl #0x6a78508
0x06A77E64: f44f59a9  ldp x20, x19, [sp, #0x190]
0x06A77E68: f65758a9  ldp x22, x21, [sp, #0x180]
0x06A77E6C: f85f57a9  ldp x24, x23, [sp, #0x170]
0x06A77E70: fa6756a9  ldp x26, x25, [sp, #0x160]
0x06A77E74: fc6f55a9  ldp x28, x27, [sp, #0x150]
0x06A77E78: fd7b54a9  ldp x29, x30, [sp, #0x140]
0x06A77E7C: ff830691  add sp, sp, #0x1a0
0x06A77E80: c0035fd6  ret
0x06A77E84: 8a231c97  bl #0x3180cac

; RVA 0x6A77E88 | private void ProcessIntervalTick(TickContext context, IntervalTick intervalTick) { }
; bytes=1140 sha256=54817b7d13d83c5bdbe7d74c668c612e61727f185a2be38f6923169873852084 status=arm64_complete_bound indexed_start=True
0x06A77E88: e80f19fc  str d8, [sp, #-0x70]!
0x06A77E8C: fd7b01a9  stp x29, x30, [sp, #0x10]
0x06A77E90: fc6f02a9  stp x28, x27, [sp, #0x20]
0x06A77E94: fa6703a9  stp x26, x25, [sp, #0x30]
0x06A77E98: f85f04a9  stp x24, x23, [sp, #0x40]
0x06A77E9C: f65705a9  stp x22, x21, [sp, #0x50]
0x06A77EA0: f44f06a9  stp x20, x19, [sp, #0x60]
0x06A77EA4: ff8306d1  sub sp, sp, #0x1a0
0x06A77EA8: 9c9500f0  adrp x28, #0x7d2a000
0x06A77EAC: db6500d0  adrp x27, #0x7731000
0x06A77EB0: d5650090  adrp x21, #0x772f000
0x06A77EB4: d66500d0  adrp x22, #0x7731000
0x06A77EB8: da6500d0  adrp x26, #0x7731000
0x06A77EBC: d86500d0  adrp x24, #0x7731000
0x06A77EC0: d76500d0  adrp x23, #0x7731000
0x06A77EC4: d96500d0  adrp x25, #0x7731000
0x06A77EC8: 7b2b43f9  ldr x27, [x27, #0x650]
0x06A77ECC: b53647f9  ldr x21, [x21, #0xe68]
0x06A77ED0: 88475c39  ldrb w8, [x28, #0x711]
0x06A77ED4: d64243f9  ldr x22, [x22, #0x680]
0x06A77ED8: 5a3b43f9  ldr x26, [x26, #0x670]
0x06A77EDC: 184743f9  ldr x24, [x24, #0x688]
0x06A77EE0: f74a43f9  ldr x23, [x23, #0x690]
0x06A77EE4: 394f43f9  ldr x25, [x25, #0x698]
0x06A77EE8: 081ca04e  mov v8.16b, v0.16b
0x06A77EEC: f30301aa  mov x19, x1
0x06A77EF0: f40300aa  mov x20, x0
0x06A77EF4: 68060037  tbnz w8, #0, #0x6a77fc0
0x06A77EF8: c06500d0  adrp x0, #0x7731000
0x06A77EFC: 004043f9  ldr x0, [x0, #0x680]
0x06A77F00: c6221c97  bl #0x3180a18
0x06A77F04: c06500d0  adrp x0, #0x7731000
0x06A77F08: 002843f9  ldr x0, [x0, #0x650]
0x06A77F0C: c3221c97  bl #0x3180a18
0x06A77F10: c06500d0  adrp x0, #0x7731000
0x06A77F14: 005043f9  ldr x0, [x0, #0x6a0]
0x06A77F18: c0221c97  bl #0x3180a18
0x06A77F1C: c06500d0  adrp x0, #0x7731000
0x06A77F20: 005443f9  ldr x0, [x0, #0x6a8]
0x06A77F24: bd221c97  bl #0x3180a18
0x06A77F28: c06500d0  adrp x0, #0x7731000
0x06A77F2C: 004843f9  ldr x0, [x0, #0x690]
0x06A77F30: ba221c97  bl #0x3180a18
0x06A77F34: c06500d0  adrp x0, #0x7731000
0x06A77F38: 005843f9  ldr x0, [x0, #0x6b0]
0x06A77F3C: b7221c97  bl #0x3180a18
0x06A77F40: c0650090  adrp x0, #0x772f000
0x06A77F44: 003447f9  ldr x0, [x0, #0xe68]
0x06A77F48: b4221c97  bl #0x3180a18
0x06A77F4C: c06500d0  adrp x0, #0x7731000
0x06A77F50: 002c43f9  ldr x0, [x0, #0x658]
0x06A77F54: b1221c97  bl #0x3180a18
0x06A77F58: c06500d0  adrp x0, #0x7731000
0x06A77F5C: 005c43f9  ldr x0, [x0, #0x6b8]
0x06A77F60: ae221c97  bl #0x3180a18
0x06A77F64: c06500d0  adrp x0, #0x7731000
0x06A77F68: 006043f9  ldr x0, [x0, #0x6c0]
0x06A77F6C: ab221c97  bl #0x3180a18
0x06A77F70: c06500d0  adrp x0, #0x7731000
0x06A77F74: 006443f9  ldr x0, [x0, #0x6c8]
0x06A77F78: a8221c97  bl #0x3180a18
0x06A77F7C: c06500d0  adrp x0, #0x7731000
0x06A77F80: 004443f9  ldr x0, [x0, #0x688]
0x06A77F84: a5221c97  bl #0x3180a18
0x06A77F88: c06500d0  adrp x0, #0x7731000
0x06A77F8C: 003843f9  ldr x0, [x0, #0x670]
0x06A77F90: a2221c97  bl #0x3180a18
0x06A77F94: c06500d0  adrp x0, #0x7731000
0x06A77F98: 006843f9  ldr x0, [x0, #0x6d0]
0x06A77F9C: 9f221c97  bl #0x3180a18
0x06A77FA0: c06500d0  adrp x0, #0x7731000
0x06A77FA4: 006c43f9  ldr x0, [x0, #0x6d8]
0x06A77FA8: 9c221c97  bl #0x3180a18
0x06A77FAC: c06500d0  adrp x0, #0x7731000
0x06A77FB0: 004c43f9  ldr x0, [x0, #0x698]
0x06A77FB4: 99221c97  bl #0x3180a18
0x06A77FB8: 28008052  movz w8, #0x1
0x06A77FBC: 88471c39  strb w8, [x28, #0x711]
0x06A77FC0: 00e4006f  movi v0.2d, #0000000000000000
0x06A77FC4: ffa300f9  str xzr, [sp, #0x140]
0x06A77FC8: e0830aad  stp q0, q0, [sp, #0x150]
0x06A77FCC: e00309ad  stp q0, q0, [sp, #0x120]
0x06A77FD0: 610240ad  ldp q1, q0, [x19]
0x06A77FD4: 600340f9  ldr x0, [x27]
0x06A77FD8: e10308ad  stp q1, q0, [sp, #0x100]
0x06A77FDC: b1894697  bl #0x3c1a6a0
0x06A77FE0: a80240f9  ldr x8, [x21]
0x06A77FE4: f50300aa  mov x21, x0
0x06A77FE8: e00308aa  mov x0, x8
0x06A77FEC: 2d231c97  bl #0x3180ca0
0x06A77FF0: c20240f9  ldr x2, [x22]
0x06A77FF4: e1031faa  mov x1, xzr
0x06A77FF8: e3031faa  mov x3, xzr
0x06A77FFC: f60300aa  mov x22, x0
0x06A78000: 4277d297  bl #0x5f15d08
0x06A78004: e00748ad  ldp q0, q1, [sp, #0x100]
0x06A78008: 430340f9  ldr x3, [x26]
0x06A7800C: e8430591  add x8, sp, #0x150
0x06A78010: e0830291  add x0, sp, #0xa0
0x06A78014: e10315aa  mov x1, x21
0x06A78018: e20316aa  mov x2, x22
0x06A7801C: e00705ad  stp q0, q1, [sp, #0xa0]
0x06A78020: 19b74b97  bl #0x3d65c84
0x06A78024: 010340f9  ldr x1, [x24]
0x06A78028: e0430591  add x0, sp, #0x150
0x06A7802C: fb646497  bl #0x4391418
0x06A78030: e10240f9  ldr x1, [x23]
0x06A78034: b38c4797  bl #0x3c5b300
0x06A78038: 280340f9  ldr x8, [x25]
0x06A7803C: f50300aa  mov x21, x0
0x06A78040: 09e140b9  ldr w9, [x8, #0xe0]
0x06A78044: 89000035  cbnz w9, #0x6a78054
0x06A78048: e00308aa  mov x0, x8
0x06A7804C: d0221c97  bl #0x3180b8c
0x06A78050: 280340f9  ldr x8, [x25]
0x06A78054: 095d40f9  ldr x9, [x8, #0xb8]
0x06A78058: d86500b0  adrp x24, #0x7731000
0x06A7805C: 360540f9  ldr x22, [x9, #8]
0x06A78060: 185b43f9  ldr x24, [x24, #0x6b0]
0x06A78064: 160300b5  cbnz x22, #0x6a780c4
0x06A78068: 09e140b9  ldr w9, [x8, #0xe0]
0x06A7806C: 89000035  cbnz w9, #0x6a7807c
0x06A78070: e00308aa  mov x0, x8
0x06A78074: c6221c97  bl #0x3180b8c
0x06A78078: 280340f9  ldr x8, [x25]
0x06A7807C: c96500b0  adrp x9, #0x7731000
0x06A78080: 085d40f9  ldr x8, [x8, #0xb8]
0x06A78084: 292d43f9  ldr x9, [x9, #0x658]
0x06A78088: 170140f9  ldr x23, [x8]
0x06A7808C: 200140f9  ldr x0, [x9]
0x06A78090: 04231c97  bl #0x3180ca0
0x06A78094: c86500b0  adrp x8, #0x7731000
0x06A78098: 086943f9  ldr x8, [x8, #0x6d0]
0x06A7809C: e10317aa  mov x1, x23
0x06A780A0: e3031faa  mov x3, xzr
0x06A780A4: f60300aa  mov x22, x0
0x06A780A8: 020140f9  ldr x2, [x8]
0x06A780AC: 2f649f97  bl #0x5251168
0x06A780B0: 280340f9  ldr x8, [x25]
0x06A780B4: e10316aa  mov x1, x22
0x06A780B8: 005d40f9  ldr x0, [x8, #0xb8]
0x06A780BC: 168c00f8  str x22, [x0, #8]!
0x06A780C0: 41221c97  bl #0x31809c4
0x06A780C4: 020340f9  ldr x2, [x24]
0x06A780C8: e00315aa  mov x0, x21
0x06A780CC: e10316aa  mov x1, x22
0x06A780D0: a2394897  bl #0x3c86758
0x06A780D4: 280340f9  ldr x8, [x25]
0x06A780D8: f60300aa  mov x22, x0
0x06A780DC: 09e140b9  ldr w9, [x8, #0xe0]
0x06A780E0: 89000035  cbnz w9, #0x6a780f0
0x06A780E4: e00308aa  mov x0, x8
0x06A780E8: a9221c97  bl #0x3180b8c
0x06A780EC: 280340f9  ldr x8, [x25]
0x06A780F0: 095d40f9  ldr x9, [x8, #0xb8]
0x06A780F4: dc6500b0  adrp x28, #0x7731000
0x06A780F8: db6500b0  adrp x27, #0x7731000
0x06A780FC: da6500b0  adrp x26, #0x7731000
0x06A78100: 370940f9  ldr x23, [x9, #0x10]
0x06A78104: 9c5743f9  ldr x28, [x28, #0x6a8]
0x06A78108: 7b6743f9  ldr x27, [x27, #0x6c8]
0x06A7810C: 5a6343f9  ldr x26, [x26, #0x6c0]
0x06A78110: 170300b5  cbnz x23, #0x6a78170
0x06A78114: 09e140b9  ldr w9, [x8, #0xe0]
0x06A78118: 89000035  cbnz w9, #0x6a78128
0x06A7811C: e00308aa  mov x0, x8
0x06A78120: 9b221c97  bl #0x3180b8c
0x06A78124: 280340f9  ldr x8, [x25]
0x06A78128: c96500b0  adrp x9, #0x7731000
0x06A7812C: 085d40f9  ldr x8, [x8, #0xb8]
0x06A78130: 295d43f9  ldr x9, [x9, #0x6b8]
0x06A78134: 180140f9  ldr x24, [x8]
0x06A78138: 200140f9  ldr x0, [x9]
0x06A7813C: d9221c97  bl #0x3180ca0
0x06A78140: c86500b0  adrp x8, #0x7731000
0x06A78144: 086d43f9  ldr x8, [x8, #0x6d8]
0x06A78148: e10318aa  mov x1, x24
0x06A7814C: e3031faa  mov x3, xzr
0x06A78150: f70300aa  mov x23, x0
0x06A78154: 020140f9  ldr x2, [x8]
0x06A78158: 3e649f97  bl #0x5251250
0x06A7815C: 280340f9  ldr x8, [x25]
0x06A78160: e10317aa  mov x1, x23
0x06A78164: 005d40f9  ldr x0, [x8, #0xb8]
0x06A78168: 170c01f8  str x23, [x0, #0x10]!
0x06A7816C: 16221c97  bl #0x31809c4
0x06A78170: 820340f9  ldr x2, [x28]
0x06A78174: e00316aa  mov x0, x22
0x06A78178: e10317aa  mov x1, x23
0x06A7817C: 75584797  bl #0x3c4e350
0x06A78180: 680340f9  ldr x8, [x27]
0x06A78184: f70300aa  mov x23, x0
0x06A78188: e00308aa  mov x0, x8
0x06A7818C: c5221c97  bl #0x3180ca0
0x06A78190: 420340f9  ldr x2, [x26]
0x06A78194: e10317aa  mov x1, x23
0x06A78198: f60300aa  mov x22, x0
0x06A7819C: f60da197  bl #0x52bb974
0x06A781A0: d50a00b4  cbz x21, #0x6a782f8
0x06A781A4: a81a40b9  ldr w8, [x21, #0x18]
0x06A781A8: 1f050071  cmp w8, #1
0x06A781AC: ab080054  b.lt #0x6a782c0
0x06A781B0: d96500b0  adrp x25, #0x7731000
0x06A781B4: 395343f9  ldr x25, [x25, #0x6a0]
0x06A781B8: e9830291  add x9, sp, #0xa0
0x06A781BC: f8031f2a  mov w24, wzr
0x06A781C0: 08c1221e  fcvt d8, s8
0x06A781C4: 3ac10091  add x26, x9, #0x30
0x06A781C8: 1b0d8052  movz w27, #0x68
0x06A781CC: 1f03086b  cmp w24, w8
0x06A781D0: 22090054  b.hs #0x6a782f4
0x06A781D4: 1c573b9b  smaddl x28, w24, w27, x21
0x06A781D8: 971340f9  ldr x23, [x28, #0x20]
0x06A781DC: 81a30091  add x1, x28, #0x28
0x06A781E0: e0830291  add x0, sp, #0xa0
0x06A781E4: 020c8052  movz w2, #0x60
0x06A781E8: e2591d94  bl #0x71ce970
0x06A781EC: 882740f9  ldr x8, [x28, #0x48]
0x06A781F0: 8083c23c  ldur q0, [x28, #0x28]
0x06A781F4: 8183c33c  ldur q1, [x28, #0x38]
0x06A781F8: 430b40ad  ldp q3, q2, [x26]
0x06A781FC: e8a300f9  str x8, [sp, #0x140]
0x06A78200: 440bc03d  ldr q4, [x26, #0x20]
0x06A78204: e00709ad  stp q0, q1, [sp, #0x120]
0x06A78208: 610240ad  ldp q1, q0, [x19]
0x06A7820C: e1030291  add x1, sp, #0x80
0x06A78210: e3830491  add x3, sp, #0x120
0x06A78214: e4430191  add x4, sp, #0x50
0x06A78218: e00314aa  mov x0, x20
0x06A7821C: e20317aa  mov x2, x23
0x06A78220: e50316aa  mov x5, x22
0x06A78224: e38b02ad  stp q3, q2, [sp, #0x50]
0x06A78228: e10304ad  stp q1, q0, [sp, #0x80]
0x06A7822C: e41f803d  str q4, [sp, #0x70]
0x06A78230: 06010094  bl #0x6a78648
0x06A78234: e1830491  add x1, sp, #0x120
0x06A78238: e20316aa  mov x2, x22
0x06A7823C: 46010094  bl #0x6a78754
0x06A78240: e8e34439  ldrb w8, [sp, #0x138]
0x06A78244: 08010034  cbz w8, #0x6a78264
0x06A78248: e09340fd  ldr d0, [sp, #0x120]
0x06A7824C: 0038681e  fsub d0, d0, d8
0x06A78250: 0820601e  fcmp d0, #0.0
0x06A78254: e09300fd  str d0, [sp, #0x120]
0x06A78258: 68000054  b.hi #0x6a78264
0x06A7825C: ff9300f9  str xzr, [sp, #0x120]
0x06A78260: ffe30439  strb wzr, [sp, #0x138]
0x06A78264: e2830491  add x2, sp, #0x120
0x06A78268: e10317aa  mov x1, x23
0x06A7826C: 65010094  bl #0x6a78800
0x06A78270: e2830491  add x2, sp, #0x120
0x06A78274: e10317aa  mov x1, x23
0x06A78278: 98010094  bl #0x6a788d8
0x06A7827C: e00749ad  ldp q0, q1, [sp, #0x120]
0x06A78280: e8a340f9  ldr x8, [sp, #0x140]
0x06A78284: e00701ad  stp q0, q1, [sp, #0x20]
0x06A78288: e82300f9  str x8, [sp, #0x40]
0x06A7828C: 770300b4  cbz x23, #0x6a782f8
0x06A78290: e00741ad  ldp q0, q1, [sp, #0x20]
0x06A78294: e82340f9  ldr x8, [sp, #0x40]
0x06A78298: 220340f9  ldr x2, [x25]
0x06A7829C: e1c30591  add x1, sp, #0x170
0x06A782A0: e00317aa  mov x0, x23
0x06A782A4: e0870bad  stp q0, q1, [sp, #0x170]
0x06A782A8: e8cb00f9  str x8, [sp, #0x190]
0x06A782AC: 59974697  bl #0x3c1e010
0x06A782B0: a81a40b9  ldr w8, [x21, #0x18]
0x06A782B4: 18070011  add w24, w24, #1
0x06A782B8: 1f03086b  cmp w24, w8
0x06A782BC: 8bf8ff54  b.lt #0x6a781cc
0x06A782C0: 610240ad  ldp q1, q0, [x19]
0x06A782C4: e1030091  mov x1, sp
0x06A782C8: e10300ad  stp q1, q0, [sp]
0x06A782CC: c2010094  bl #0x6a789d4
0x06A782D0: ff830691  add sp, sp, #0x1a0
0x06A782D4: f44f46a9  ldp x20, x19, [sp, #0x60]
0x06A782D8: f65745a9  ldp x22, x21, [sp, #0x50]
0x06A782DC: f85f44a9  ldp x24, x23, [sp, #0x40]
0x06A782E0: fa6743a9  ldp x26, x25, [sp, #0x30]
0x06A782E4: fc6f42a9  ldp x28, x27, [sp, #0x20]
0x06A782E8: fd7b41a9  ldp x29, x30, [sp, #0x10]
0x06A782EC: e80747fc  ldr d8, [sp], #0x70
0x06A782F0: c0035fd6  ret
0x06A782F4: 70221c97  bl #0x3180cb4
0x06A782F8: 6d221c97  bl #0x3180cac

; RVA 0x6A78648 | private void ProcessInteractionLockGroup(TickContext context, Entity entity, ref TimeLockComponent timeLock, IdComponent id, HashSet<TimeLockGroup> groupsBeingUnlocked) { }
; bytes=268 sha256=9ee30fda53b03692accbecac8478de8bb9730af5efd84df237d91251818b8c22 status=arm64_complete_bound indexed_start=True
0x06A78648: ff8301d1  sub sp, sp, #0x60
0x06A7864C: fe1300f9  str x30, [sp, #0x20]
0x06A78650: f85f03a9  stp x24, x23, [sp, #0x30]
0x06A78654: f65704a9  stp x22, x21, [sp, #0x40]
0x06A78658: f44f05a9  stp x20, x19, [sp, #0x50]
0x06A7865C: 989500d0  adrp x24, #0x7d2a000
0x06A78660: 084b5c39  ldrb w8, [x24, #0x712]
0x06A78664: f60305aa  mov x22, x5
0x06A78668: f70304aa  mov x23, x4
0x06A7866C: f30303aa  mov x19, x3
0x06A78670: f40302aa  mov x20, x2
0x06A78674: f50301aa  mov x21, x1
0x06A78678: 28010037  tbnz w8, #0, #0x6a7869c
0x06A7867C: c06500b0  adrp x0, #0x7731000
0x06A78680: 00a043f9  ldr x0, [x0, #0x740]
0x06A78684: e5201c97  bl #0x3180a18
0x06A78688: c06500b0  adrp x0, #0x7731000
0x06A7868C: 00a443f9  ldr x0, [x0, #0x748]
0x06A78690: e2201c97  bl #0x3180a18
0x06A78694: 28008052  movz w8, #0x1
0x06A78698: 084b1c39  strb w8, [x24, #0x712]
0x06A7869C: 681640b9  ldr w8, [x19, #0x14]
0x06A786A0: 1f050071  cmp w8, #1
0x06A786A4: a1040054  b.ne #0x6a78738
0x06A786A8: e00313aa  mov x0, x19
0x06A786AC: e1031faa  mov x1, xzr
0x06A786B0: dd8f0094  bl #0x6a9c624
0x06A786B4: 20040036  tbz w0, #0, #0x6a78738
0x06A786B8: 68624039  ldrb w8, [x19, #0x18]
0x06A786BC: e8030035  cbnz w8, #0x6a78738
0x06A786C0: 681e40b9  ldr w8, [x19, #0x1c]
0x06A786C4: e92240b9  ldr w9, [x23, #0x20]
0x06A786C8: 3f01286a  bics wzr, w9, w8
0x06A786CC: 21030054  b.ne #0x6a78730
0x06A786D0: 160400b4  cbz x22, #0x6a78750
0x06A786D4: c86500b0  adrp x8, #0x7731000
0x06A786D8: 611640b9  ldr w1, [x19, #0x14]
0x06A786DC: 08a543f9  ldr x8, [x8, #0x748]
0x06A786E0: e00316aa  mov x0, x22
0x06A786E4: 020140f9  ldr x2, [x8]
0x06A786E8: 240ea197  bl #0x52bbf78
0x06A786EC: 60020037  tbnz w0, #0, #0x6a78738
0x06A786F0: 600240fd  ldr d0, [x19]
0x06A786F4: 0820601e  fcmp d0, #0.0
0x06A786F8: 0d020054  b.le #0x6a78738
0x06A786FC: c86500b0  adrp x8, #0x7731000
0x06A78700: 611640b9  ldr w1, [x19, #0x14]
0x06A78704: 08a143f9  ldr x8, [x8, #0x740]
0x06A78708: e00316aa  mov x0, x22
0x06A7870C: 020140f9  ldr x2, [x8]
0x06A78710: de10a197  bl #0x52bca88
0x06A78714: a00640ad  ldp q0, q1, [x21]
0x06A78718: e1030091  mov x1, sp
0x06A7871C: e20314aa  mov x2, x20
0x06A78720: e30313aa  mov x3, x19
0x06A78724: e00700ad  stp q0, q1, [sp]
0x06A78728: 78ffff97  bl #0x6a78508
0x06A7872C: 03000014  b #0x6a78738
0x06A78730: 7f0200f9  str xzr, [x19]
0x06A78734: 7f620039  strb wzr, [x19, #0x18]
0x06A78738: f44f45a9  ldp x20, x19, [sp, #0x50]
0x06A7873C: f65744a9  ldp x22, x21, [sp, #0x40]
0x06A78740: f85f43a9  ldp x24, x23, [sp, #0x30]
0x06A78744: fe1340f9  ldr x30, [sp, #0x20]
0x06A78748: ff830191  add sp, sp, #0x60
0x06A7874C: c0035fd6  ret
0x06A78750: 57211c97  bl #0x3180cac

; RVA 0x6A78754 | private void UpdateCanBeUnlockedFlag(ref TimeLockComponent timeLock, HashSet<TimeLockGroup> groupsBeingUnlocked) { }
; bytes=128 sha256=26782e12414097f03b44c635bb4499b52f9cea0aa5554740b47c79e8f4a08223 status=arm64_complete_bound indexed_start=True
0x06A78754: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A78758: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A7875C: 959500d0  adrp x21, #0x7d2a000
0x06A78760: a84e5c39  ldrb w8, [x21, #0x713]
0x06A78764: f40302aa  mov x20, x2
0x06A78768: f30301aa  mov x19, x1
0x06A7876C: c8000037  tbnz w8, #0, #0x6a78784
0x06A78770: c06500b0  adrp x0, #0x7731000
0x06A78774: 00a443f9  ldr x0, [x0, #0x748]
0x06A78778: a8201c97  bl #0x3180a18
0x06A7877C: 28008052  movz w8, #0x1
0x06A78780: a84e1c39  strb w8, [x21, #0x713]
0x06A78784: 740200b4  cbz x20, #0x6a787d0
0x06A78788: c86500b0  adrp x8, #0x7731000
0x06A7878C: 08a543f9  ldr x8, [x8, #0x748]
0x06A78790: 611640b9  ldr w1, [x19, #0x14]
0x06A78794: e00314aa  mov x0, x20
0x06A78798: 020140f9  ldr x2, [x8]
0x06A7879C: f70da197  bl #0x52bbf78
0x06A787A0: 60000037  tbnz w0, #0, #0x6a787ac
0x06A787A4: 68624039  ldrb w8, [x19, #0x18]
0x06A787A8: c8000034  cbz w8, #0x6a787c0
0x06A787AC: e8031f2a  mov w8, wzr
0x06A787B0: 68660039  strb w8, [x19, #0x19]
0x06A787B4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A787B8: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A787BC: c0035fd6  ret
0x06A787C0: 600240fd  ldr d0, [x19]
0x06A787C4: 0820601e  fcmp d0, #0.0
0x06A787C8: e8d79f1a  cset w8, gt
0x06A787CC: f9ffff17  b #0x6a787b0
0x06A787D0: 37211c97  bl #0x3180cac

; RVA 0x6A787D4 | private void ProcessTime(ref TimeLockComponent timeLock, float deltaTime) { }
; bytes=44 sha256=fe2dcc07e297acce086032051f4d158158756c11f736a53dd246ab1b0d8f57fd status=arm64_complete_bound indexed_start=True
0x06A787D4: 28604039  ldrb w8, [x1, #0x18]
0x06A787D8: 28010034  cbz w8, #0x6a787fc
0x06A787DC: 210040fd  ldr d1, [x1]
0x06A787E0: 00c0221e  fcvt d0, s0
0x06A787E4: 2038601e  fsub d0, d1, d0
0x06A787E8: 0820601e  fcmp d0, #0.0
0x06A787EC: 200000fd  str d0, [x1]
0x06A787F0: 68000054  b.hi #0x6a787fc
0x06A787F4: 3f0000f9  str xzr, [x1]
0x06A787F8: 3f600039  strb wzr, [x1, #0x18]
0x06A787FC: c0035fd6  ret

; RVA 0x6A78800 | private void UpdateTimeLockBlockComponent(Entity entity, in TimeLockComponent timeLock) { }
; bytes=216 sha256=81f3f3814beb3a9e40eb0525c4b502fd9c11ba57ff23e0f112fa9d9cf55cc6ae status=arm64_complete_bound indexed_start=True
0x06A78800: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A78804: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A78808: 959500d0  adrp x21, #0x7d2a000
0x06A7880C: a8525c39  ldrb w8, [x21, #0x714]
0x06A78810: f40302aa  mov x20, x2
0x06A78814: f30301aa  mov x19, x1
0x06A78818: 88010037  tbnz w8, #0, #0x6a78848
0x06A7881C: c06500b0  adrp x0, #0x7731000
0x06A78820: 009043f9  ldr x0, [x0, #0x720]
0x06A78824: 7d201c97  bl #0x3180a18
0x06A78828: c06500b0  adrp x0, #0x7731000
0x06A7882C: 00a843f9  ldr x0, [x0, #0x750]
0x06A78830: 7a201c97  bl #0x3180a18
0x06A78834: c06500b0  adrp x0, #0x7731000
0x06A78838: 009443f9  ldr x0, [x0, #0x728]
0x06A7883C: 77201c97  bl #0x3180a18
0x06A78840: 28008052  movz w8, #0x1
0x06A78844: a8521c39  strb w8, [x21, #0x714]
0x06A78848: 730400b4  cbz x19, #0x6a788d4
0x06A7884C: c86500b0  adrp x8, #0x7731000
0x06A78850: 089143f9  ldr x8, [x8, #0x720]
0x06A78854: e00313aa  mov x0, x19
0x06A78858: 010140f9  ldr x1, [x8]
0x06A7885C: 0d8e4697  bl #0x3c1c090
0x06A78860: 88624039  ldrb w8, [x20, #0x18]
0x06A78864: c8010034  cbz w8, #0x6a7889c
0x06A78868: 800240fd  ldr d0, [x20]
0x06A7886C: 0820601e  fcmp d0, #0.0
0x06A78870: e8c79f1a  cset w8, le
0x06A78874: 0900082a  orr w9, w0, w8
0x06A78878: 49010037  tbnz w9, #0, #0x6a788a0
0x06A7887C: c86500b0  adrp x8, #0x7731000
0x06A78880: 089543f9  ldr x8, [x8, #0x728]
0x06A78884: e00313aa  mov x0, x19
0x06A78888: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A7888C: e1031faa  mov x1, xzr
0x06A78890: 020140f9  ldr x2, [x8]
0x06A78894: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A78898: ac954617  b #0x3c1df48
0x06A7889C: 28008052  movz w8, #0x1
0x06A788A0: 0800080a  and w8, w0, w8
0x06A788A4: 1f050071  cmp w8, #1
0x06A788A8: 01010054  b.ne #0x6a788c8
0x06A788AC: c86500b0  adrp x8, #0x7731000
0x06A788B0: 08a943f9  ldr x8, [x8, #0x750]
0x06A788B4: e00313aa  mov x0, x19
0x06A788B8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A788BC: 010140f9  ldr x1, [x8]
0x06A788C0: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A788C4: fb8e4617  b #0x3c1c4b0
0x06A788C8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A788CC: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A788D0: c0035fd6  ret
0x06A788D4: f6201c97  bl #0x3180cac

; RVA 0x6A789D4 | private void ApplyGroupLockBlock(TickContext context) { }
; bytes=1076 sha256=63a8094aa247851bb956d7e04b5c271e327ee2470ca898cf6c9f438b6422b9f9 status=arm64_complete_bound indexed_start=True
0x06A789D4: ffc303d1  sub sp, sp, #0xf0
0x06A789D8: fe4b00f9  str x30, [sp, #0x90]
0x06A789DC: fc6f0aa9  stp x28, x27, [sp, #0xa0]
0x06A789E0: fa670ba9  stp x26, x25, [sp, #0xb0]
0x06A789E4: f85f0ca9  stp x24, x23, [sp, #0xc0]
0x06A789E8: f6570da9  stp x22, x21, [sp, #0xd0]
0x06A789EC: f44f0ea9  stp x20, x19, [sp, #0xe0]
0x06A789F0: 9b9500d0  adrp x27, #0x7d2a000
0x06A789F4: da6500b0  adrp x26, #0x7731000
0x06A789F8: b96500f0  adrp x25, #0x772f000
0x06A789FC: b46500f0  adrp x20, #0x772f000
0x06A78A00: d86500b0  adrp x24, #0x7731000
0x06A78A04: d66500b0  adrp x22, #0x7731000
0x06A78A08: d56500b0  adrp x21, #0x7731000
0x06A78A0C: d76500b0  adrp x23, #0x7731000
0x06A78A10: 5a7743f9  ldr x26, [x26, #0x6e8]
0x06A78A14: 393747f9  ldr x25, [x25, #0xe68]
0x06A78A18: 68575c39  ldrb w8, [x27, #0x715]
0x06A78A1C: 942647f9  ldr x20, [x20, #0xe48]
0x06A78A20: 188743f9  ldr x24, [x24, #0x708]
0x06A78A24: d68243f9  ldr x22, [x22, #0x700]
0x06A78A28: b5b243f9  ldr x21, [x21, #0x760]
0x06A78A2C: f74e43f9  ldr x23, [x23, #0x698]
0x06A78A30: f30301aa  mov x19, x1
0x06A78A34: 88070037  tbnz w8, #0, #0x6a78b24
0x06A78A38: a06500f0  adrp x0, #0x772f000
0x06A78A3C: 002447f9  ldr x0, [x0, #0xe48]
0x06A78A40: f61f1c97  bl #0x3180a18
0x06A78A44: c06500b0  adrp x0, #0x7731000
0x06A78A48: 007443f9  ldr x0, [x0, #0x6e8]
0x06A78A4C: f31f1c97  bl #0x3180a18
0x06A78A50: c06500b0  adrp x0, #0x7731000
0x06A78A54: 009043f9  ldr x0, [x0, #0x720]
0x06A78A58: f01f1c97  bl #0x3180a18
0x06A78A5C: c06500b0  adrp x0, #0x7731000
0x06A78A60: 00a843f9  ldr x0, [x0, #0x750]
0x06A78A64: ed1f1c97  bl #0x3180a18
0x06A78A68: c06500b0  adrp x0, #0x7731000
0x06A78A6C: 009443f9  ldr x0, [x0, #0x728]
0x06A78A70: ea1f1c97  bl #0x3180a18
0x06A78A74: c06500b0  adrp x0, #0x7731000
0x06A78A78: 00b443f9  ldr x0, [x0, #0x768]
0x06A78A7C: e71f1c97  bl #0x3180a18
0x06A78A80: c06500b0  adrp x0, #0x7731000
0x06A78A84: 00b043f9  ldr x0, [x0, #0x760]
0x06A78A88: e41f1c97  bl #0x3180a18
0x06A78A8C: c06500b0  adrp x0, #0x7731000
0x06A78A90: 00b843f9  ldr x0, [x0, #0x770]
0x06A78A94: e11f1c97  bl #0x3180a18
0x06A78A98: a06500f0  adrp x0, #0x772f000
0x06A78A9C: 003447f9  ldr x0, [x0, #0xe68]
0x06A78AA0: de1f1c97  bl #0x3180a18
0x06A78AA4: c06500b0  adrp x0, #0x7731000
0x06A78AA8: 00bc43f9  ldr x0, [x0, #0x778]
0x06A78AAC: db1f1c97  bl #0x3180a18
0x06A78AB0: c06500b0  adrp x0, #0x7731000
0x06A78AB4: 007c43f9  ldr x0, [x0, #0x6f8]
0x06A78AB8: d81f1c97  bl #0x3180a18
0x06A78ABC: c06500b0  adrp x0, #0x7731000
0x06A78AC0: 00a443f9  ldr x0, [x0, #0x748]
0x06A78AC4: d51f1c97  bl #0x3180a18
0x06A78AC8: c06500b0  adrp x0, #0x7731000
0x06A78ACC: 006043f9  ldr x0, [x0, #0x6c0]
0x06A78AD0: d21f1c97  bl #0x3180a18
0x06A78AD4: c06500b0  adrp x0, #0x7731000
0x06A78AD8: 006443f9  ldr x0, [x0, #0x6c8]
0x06A78ADC: cf1f1c97  bl #0x3180a18
0x06A78AE0: c06500b0  adrp x0, #0x7731000
0x06A78AE4: 008043f9  ldr x0, [x0, #0x700]
0x06A78AE8: cc1f1c97  bl #0x3180a18
0x06A78AEC: c06500b0  adrp x0, #0x7731000
0x06A78AF0: 008443f9  ldr x0, [x0, #0x708]
0x06A78AF4: c91f1c97  bl #0x3180a18
0x06A78AF8: c06500b0  adrp x0, #0x7731000
0x06A78AFC: 00c043f9  ldr x0, [x0, #0x780]
0x06A78B00: c61f1c97  bl #0x3180a18
0x06A78B04: c06500b0  adrp x0, #0x7731000
0x06A78B08: 00c443f9  ldr x0, [x0, #0x788]
0x06A78B0C: c31f1c97  bl #0x3180a18
0x06A78B10: c06500b0  adrp x0, #0x7731000
0x06A78B14: 004c43f9  ldr x0, [x0, #0x698]
0x06A78B18: c01f1c97  bl #0x3180a18
0x06A78B1C: 28008052  movz w8, #0x1
0x06A78B20: 68571c39  strb w8, [x27, #0x715]
0x06A78B24: 00e4006f  movi v0.2d, #0000000000000000
0x06A78B28: ff2300f9  str xzr, [sp, #0x40]
0x06A78B2C: e08302ad  stp q0, q0, [sp, #0x50]
0x06A78B30: e00301ad  stp q0, q0, [sp, #0x20]
0x06A78B34: 610240ad  ldp q1, q0, [x19]
0x06A78B38: 400340f9  ldr x0, [x26]
0x06A78B3C: e10300ad  stp q1, q0, [sp]
0x06A78B40: c9844697  bl #0x3c19e64
0x06A78B44: 280340f9  ldr x8, [x25]
0x06A78B48: f30300aa  mov x19, x0
0x06A78B4C: e00308aa  mov x0, x8
0x06A78B50: 54201c97  bl #0x3180ca0
0x06A78B54: 820240f9  ldr x2, [x20]
0x06A78B58: e1031faa  mov x1, xzr
0x06A78B5C: e3031faa  mov x3, xzr
0x06A78B60: f40300aa  mov x20, x0
0x06A78B64: 6974d297  bl #0x5f15d08
0x06A78B68: e00740ad  ldp q0, q1, [sp]
0x06A78B6C: 030340f9  ldr x3, [x24]
0x06A78B70: e8430191  add x8, sp, #0x50
0x06A78B74: e0c30191  add x0, sp, #0x70
0x06A78B78: e10313aa  mov x1, x19
0x06A78B7C: e20314aa  mov x2, x20
0x06A78B80: e08703ad  stp q0, q1, [sp, #0x70]
0x06A78B84: a8b04b97  bl #0x3d64e24
0x06A78B88: c10240f9  ldr x1, [x22]
0x06A78B8C: e0430191  add x0, sp, #0x50
0x06A78B90: 613d6497  bl #0x4388114
0x06A78B94: a10240f9  ldr x1, [x21]
0x06A78B98: 52894797  bl #0x3c5b0e0
0x06A78B9C: e80240f9  ldr x8, [x23]
0x06A78BA0: f30300aa  mov x19, x0
0x06A78BA4: 09e140b9  ldr w9, [x8, #0xe0]
0x06A78BA8: 89000035  cbnz w9, #0x6a78bb8
0x06A78BAC: e00308aa  mov x0, x8
0x06A78BB0: f71f1c97  bl #0x3180b8c
0x06A78BB4: e80240f9  ldr x8, [x23]
0x06A78BB8: 095d40f9  ldr x9, [x8, #0xb8]
0x06A78BBC: d66500b0  adrp x22, #0x7731000
0x06A78BC0: 340d40f9  ldr x20, [x9, #0x18]
0x06A78BC4: d6ba43f9  ldr x22, [x22, #0x770]
0x06A78BC8: 140300b5  cbnz x20, #0x6a78c28
0x06A78BCC: 09e140b9  ldr w9, [x8, #0xe0]
0x06A78BD0: 89000035  cbnz w9, #0x6a78be0
0x06A78BD4: e00308aa  mov x0, x8
0x06A78BD8: ed1f1c97  bl #0x3180b8c
0x06A78BDC: e80240f9  ldr x8, [x23]
0x06A78BE0: c96500b0  adrp x9, #0x7731000
0x06A78BE4: 085d40f9  ldr x8, [x8, #0xb8]
0x06A78BE8: 297d43f9  ldr x9, [x9, #0x6f8]
0x06A78BEC: 150140f9  ldr x21, [x8]
0x06A78BF0: 200140f9  ldr x0, [x9]
0x06A78BF4: 2b201c97  bl #0x3180ca0
0x06A78BF8: c86500b0  adrp x8, #0x7731000
0x06A78BFC: 08c143f9  ldr x8, [x8, #0x780]
0x06A78C00: e10315aa  mov x1, x21
0x06A78C04: e3031faa  mov x3, xzr
0x06A78C08: f40300aa  mov x20, x0
0x06A78C0C: 020140f9  ldr x2, [x8]
0x06A78C10: f95a9f97  bl #0x524f7f4
0x06A78C14: e80240f9  ldr x8, [x23]
0x06A78C18: e10314aa  mov x1, x20
0x06A78C1C: 005d40f9  ldr x0, [x8, #0xb8]
0x06A78C20: 148c01f8  str x20, [x0, #0x18]!
0x06A78C24: 681f1c97  bl #0x31809c4
0x06A78C28: c20240f9  ldr x2, [x22]
0x06A78C2C: e00313aa  mov x0, x19
0x06A78C30: e10314aa  mov x1, x20
0x06A78C34: 14364897  bl #0x3c86484
0x06A78C38: e80240f9  ldr x8, [x23]
0x06A78C3C: f40300aa  mov x20, x0
0x06A78C40: 09e140b9  ldr w9, [x8, #0xe0]
0x06A78C44: 89000035  cbnz w9, #0x6a78c54
0x06A78C48: e00308aa  mov x0, x8
0x06A78C4C: d01f1c97  bl #0x3180b8c
0x06A78C50: e80240f9  ldr x8, [x23]
0x06A78C54: 095d40f9  ldr x9, [x8, #0xb8]
0x06A78C58: da6500b0  adrp x26, #0x7731000
0x06A78C5C: d96500b0  adrp x25, #0x7731000
0x06A78C60: d86500b0  adrp x24, #0x7731000
0x06A78C64: 351140f9  ldr x21, [x9, #0x20]
0x06A78C68: 5ab743f9  ldr x26, [x26, #0x768]
0x06A78C6C: 396743f9  ldr x25, [x25, #0x6c8]
0x06A78C70: 186343f9  ldr x24, [x24, #0x6c0]
0x06A78C74: 150300b5  cbnz x21, #0x6a78cd4
0x06A78C78: 09e140b9  ldr w9, [x8, #0xe0]
0x06A78C7C: 89000035  cbnz w9, #0x6a78c8c
0x06A78C80: e00308aa  mov x0, x8
0x06A78C84: c21f1c97  bl #0x3180b8c
0x06A78C88: e80240f9  ldr x8, [x23]
0x06A78C8C: c96500b0  adrp x9, #0x7731000
0x06A78C90: 085d40f9  ldr x8, [x8, #0xb8]
0x06A78C94: 29bd43f9  ldr x9, [x9, #0x778]
0x06A78C98: 160140f9  ldr x22, [x8]
0x06A78C9C: 200140f9  ldr x0, [x9]
0x06A78CA0: 00201c97  bl #0x3180ca0
0x06A78CA4: c86500b0  adrp x8, #0x7731000
0x06A78CA8: 08c543f9  ldr x8, [x8, #0x788]
0x06A78CAC: e10316aa  mov x1, x22
0x06A78CB0: e3031faa  mov x3, xzr
0x06A78CB4: f50300aa  mov x21, x0
0x06A78CB8: 020140f9  ldr x2, [x8]
0x06A78CBC: 065b9f97  bl #0x524f8d4
0x06A78CC0: e80240f9  ldr x8, [x23]
0x06A78CC4: e10315aa  mov x1, x21
0x06A78CC8: 005d40f9  ldr x0, [x8, #0xb8]
0x06A78CCC: 150c02f8  str x21, [x0, #0x20]!
0x06A78CD0: 3d1f1c97  bl #0x31809c4
0x06A78CD4: 420340f9  ldr x2, [x26]
0x06A78CD8: e00314aa  mov x0, x20
0x06A78CDC: e10315aa  mov x1, x21
0x06A78CE0: 22544797  bl #0x3c4dd68
0x06A78CE4: 280340f9  ldr x8, [x25]
0x06A78CE8: f50300aa  mov x21, x0
0x06A78CEC: e00308aa  mov x0, x8
0x06A78CF0: ec1f1c97  bl #0x3180ca0
0x06A78CF4: 020340f9  ldr x2, [x24]
0x06A78CF8: e10315aa  mov x1, x21
0x06A78CFC: f40300aa  mov x20, x0
0x06A78D00: 1d0ba197  bl #0x52bb974
0x06A78D04: f30700b4  cbz x19, #0x6a78e00
0x06A78D08: 681a40b9  ldr w8, [x19, #0x18]
0x06A78D0C: 1f050071  cmp w8, #1
0x06A78D10: 8b060054  b.lt #0x6a78de0
0x06A78D14: d76500b0  adrp x23, #0x7731000
0x06A78D18: d86500b0  adrp x24, #0x7731000
0x06A78D1C: d96500b0  adrp x25, #0x7731000
0x06A78D20: da6500b0  adrp x26, #0x7731000
0x06A78D24: f7a643f9  ldr x23, [x23, #0x748]
0x06A78D28: 189343f9  ldr x24, [x24, #0x720]
0x06A78D2C: 39ab43f9  ldr x25, [x25, #0x750]
0x06A78D30: 5a9743f9  ldr x26, [x26, #0x728]
0x06A78D34: f6031f2a  mov w22, wzr
0x06A78D38: 1b068052  movz w27, #0x30
0x06A78D3C: df02086b  cmp w22, w8
0x06A78D40: 22060054  b.hs #0x6a78e04
0x06A78D44: c84e3b9b  smaddl x8, w22, w27, x19
0x06A78D48: 092540f9  ldr x9, [x8, #0x48]
0x06A78D4C: 0081c33c  ldur q0, [x8, #0x38]
0x06A78D50: 0181c23c  ldur q1, [x8, #0x28]
0x06A78D54: 151140f9  ldr x21, [x8, #0x20]
0x06A78D58: e92300f9  str x9, [sp, #0x40]
0x06A78D5C: e10301ad  stp q1, q0, [sp, #0x20]
0x06A78D60: 140500b4  cbz x20, #0x6a78e00
0x06A78D64: e13740b9  ldr w1, [sp, #0x34]
0x06A78D68: e20240f9  ldr x2, [x23]
0x06A78D6C: e00314aa  mov x0, x20
0x06A78D70: 820ca197  bl #0x52bbf78
0x06A78D74: c0000036  tbz w0, #0, #0x6a78d8c
0x06A78D78: e0830091  add x0, sp, #0x20
0x06A78D7C: e1031faa  mov x1, xzr
0x06A78D80: 298e0094  bl #0x6a9c624
0x06A78D84: 1c000012  and w28, w0, #1
0x06A78D88: 02000014  b #0x6a78d90
0x06A78D8C: fc031f2a  mov w28, wzr
0x06A78D90: 950300b4  cbz x21, #0x6a78e00
0x06A78D94: 010340f9  ldr x1, [x24]
0x06A78D98: e00315aa  mov x0, x21
0x06A78D9C: bd8c4697  bl #0x3c1c090
0x06A78DA0: fc000034  cbz w28, #0x6a78dbc
0x06A78DA4: c0000037  tbnz w0, #0, #0x6a78dbc
0x06A78DA8: 420340f9  ldr x2, [x26]
0x06A78DAC: e00315aa  mov x0, x21
0x06A78DB0: e1031faa  mov x1, xzr
0x06A78DB4: 65944697  bl #0x3c1df48
0x06A78DB8: 06000014  b #0x6a78dd0
0x06A78DBC: 08003c0a  bic w8, w0, w28
0x06A78DC0: 88000036  tbz w8, #0, #0x6a78dd0
0x06A78DC4: 210340f9  ldr x1, [x25]
0x06A78DC8: e00315aa  mov x0, x21
0x06A78DCC: b98d4697  bl #0x3c1c4b0
0x06A78DD0: 681a40b9  ldr w8, [x19, #0x18]
0x06A78DD4: d6060011  add w22, w22, #1
0x06A78DD8: df02086b  cmp w22, w8
0x06A78DDC: 0bfbff54  b.lt #0x6a78d3c
0x06A78DE0: f44f4ea9  ldp x20, x19, [sp, #0xe0]
0x06A78DE4: f6574da9  ldp x22, x21, [sp, #0xd0]
0x06A78DE8: f85f4ca9  ldp x24, x23, [sp, #0xc0]
0x06A78DEC: fa674ba9  ldp x26, x25, [sp, #0xb0]
0x06A78DF0: fc6f4aa9  ldp x28, x27, [sp, #0xa0]
0x06A78DF4: fe4b40f9  ldr x30, [sp, #0x90]
0x06A78DF8: ffc30391  add sp, sp, #0xf0
0x06A78DFC: c0035fd6  ret
0x06A78E00: ab1f1c97  bl #0x3180cac
0x06A78E04: ac1f1c97  bl #0x3180cb4

; RVA 0x6A78E08 | private bool ShouldStartUnlockOnInteraction(TimeLockComponent timeLock, IdComponent id) { }
; bytes=20 sha256=4d18d8598c6028d95a5cdd48d927e55e84ed7fee9888e21741249cc5fab8ef71 status=arm64_complete_bound indexed_start=True
0x06A78E08: 281c40b9  ldr w8, [x1, #0x1c]
0x06A78E0C: 492040b9  ldr w9, [x2, #0x20]
0x06A78E10: 3f01286a  bics wzr, w9, w8
0x06A78E14: e0179f1a  cset w0, eq
0x06A78E18: c0035fd6  ret

; RVA 0x6A78304 | private bool CanStartUnlocking(TimeLockComponent timeLock) { }
; bytes=36 sha256=a8c41ded38edecd9810dc8959a0c013062ef8e229b59dd1970ac746b31e7d481 status=arm64_complete_bound indexed_start=True
0x06A78304: 200040fd  ldr d0, [x1]
0x06A78308: 0820601e  fcmp d0, #0.0
0x06A7830C: ad000054  b.le #0x6a78320
0x06A78310: 28644039  ldrb w8, [x1, #0x19]
0x06A78314: 1f010071  cmp w8, #0
0x06A78318: e0079f1a  cset w0, ne
0x06A7831C: c0035fd6  ret
0x06A78320: e0031f2a  mov w0, wzr
0x06A78324: c0035fd6  ret

; RVA 0x6A78328 | private bool HasOtherUnlockInProgress(TickContext context, Entity currentEntity, TimeLockGroup lockGroup) { }
; bytes=480 sha256=9a8bebf7b10daa18e056314c094dafeecd91fdaca1c60a0cc340e9e38c57bf65 status=arm64_complete_bound indexed_start=True
0x06A78328: ff0303d1  sub sp, sp, #0xc0
0x06A7832C: fd7b06a9  stp x29, x30, [sp, #0x60]
0x06A78330: fc6f07a9  stp x28, x27, [sp, #0x70]
0x06A78334: fa6708a9  stp x26, x25, [sp, #0x80]
0x06A78338: f85f09a9  stp x24, x23, [sp, #0x90]
0x06A7833C: f6570aa9  stp x22, x21, [sp, #0xa0]
0x06A78340: f44f0ba9  stp x20, x19, [sp, #0xb0]
0x06A78344: 979500d0  adrp x23, #0x7d2a000
0x06A78348: d66500b0  adrp x22, #0x7731000
0x06A7834C: e85a5c39  ldrb w8, [x23, #0x716]
0x06A78350: d67243f9  ldr x22, [x22, #0x6e0]
0x06A78354: f403032a  mov w20, w3
0x06A78358: f50302aa  mov x21, x2
0x06A7835C: f30301aa  mov x19, x1
0x06A78360: c8030037  tbnz w8, #0, #0x6a783d8
0x06A78364: a06500f0  adrp x0, #0x772f000
0x06A78368: 002447f9  ldr x0, [x0, #0xe48]
0x06A7836C: ab211c97  bl #0x3180a18
0x06A78370: c06500b0  adrp x0, #0x7731000
0x06A78374: 007443f9  ldr x0, [x0, #0x6e8]
0x06A78378: a8211c97  bl #0x3180a18
0x06A7837C: c06500b0  adrp x0, #0x7731000
0x06A78380: 007843f9  ldr x0, [x0, #0x6f0]
0x06A78384: a5211c97  bl #0x3180a18
0x06A78388: a06500f0  adrp x0, #0x772f000
0x06A7838C: 003447f9  ldr x0, [x0, #0xe68]
0x06A78390: a2211c97  bl #0x3180a18
0x06A78394: c06500b0  adrp x0, #0x7731000
0x06A78398: 007c43f9  ldr x0, [x0, #0x6f8]
0x06A7839C: 9f211c97  bl #0x3180a18
0x06A783A0: c06500b0  adrp x0, #0x7731000
0x06A783A4: 008043f9  ldr x0, [x0, #0x700]
0x06A783A8: 9c211c97  bl #0x3180a18
0x06A783AC: c06500b0  adrp x0, #0x7731000
0x06A783B0: 008443f9  ldr x0, [x0, #0x708]
0x06A783B4: 99211c97  bl #0x3180a18
0x06A783B8: c06500b0  adrp x0, #0x7731000
0x06A783BC: 008843f9  ldr x0, [x0, #0x710]
0x06A783C0: 96211c97  bl #0x3180a18
0x06A783C4: c06500b0  adrp x0, #0x7731000
0x06A783C8: 007043f9  ldr x0, [x0, #0x6e0]
0x06A783CC: 93211c97  bl #0x3180a18
0x06A783D0: 28008052  movz w8, #0x1
0x06A783D4: e85a1c39  strb w8, [x23, #0x716]
0x06A783D8: c00240f9  ldr x0, [x22]
0x06A783DC: 00e4006f  movi v0.2d, #0000000000000000
0x06A783E0: e00301ad  stp q0, q0, [sp, #0x20]
0x06A783E4: 2f221c97  bl #0x3180ca0
0x06A783E8: e1031faa  mov x1, xzr
0x06A783EC: f60300aa  mov x22, x0
0x06A783F0: 8388b197  bl #0x56da5fc
0x06A783F4: 960800b4  cbz x22, #0x6a78504
0x06A783F8: d96500b0  adrp x25, #0x7731000
0x06A783FC: ba6500f0  adrp x26, #0x772f000
0x06A78400: bb6500f0  adrp x27, #0x772f000
0x06A78404: dc6500b0  adrp x28, #0x7731000
0x06A78408: dd6500b0  adrp x29, #0x7731000
0x06A7840C: d76500b0  adrp x23, #0x7731000
0x06A78410: d86500b0  adrp x24, #0x7731000
0x06A78414: 397743f9  ldr x25, [x25, #0x6e8]
0x06A78418: 5a3747f9  ldr x26, [x26, #0xe68]
0x06A7841C: 7b2747f9  ldr x27, [x27, #0xe48]
0x06A78420: 9c8743f9  ldr x28, [x28, #0x708]
0x06A78424: bd8343f9  ldr x29, [x29, #0x700]
0x06A78428: f77e43f9  ldr x23, [x23, #0x6f8]
0x06A7842C: 188b43f9  ldr x24, [x24, #0x710]
0x06A78430: e00316aa  mov x0, x22
0x06A78434: 150c01f8  str x21, [x0, #0x10]!
0x06A78438: e10315aa  mov x1, x21
0x06A7843C: 62211c97  bl #0x31809c4
0x06A78440: d41a00b9  str w20, [x22, #0x18]
0x06A78444: 610240ad  ldp q1, q0, [x19]
0x06A78448: 200340f9  ldr x0, [x25]
0x06A7844C: e10300ad  stp q1, q0, [sp]
0x06A78450: 85864697  bl #0x3c19e64
0x06A78454: 480340f9  ldr x8, [x26]
0x06A78458: f30300aa  mov x19, x0
0x06A7845C: e00308aa  mov x0, x8
0x06A78460: 10221c97  bl #0x3180ca0
0x06A78464: 620340f9  ldr x2, [x27]
0x06A78468: e1031faa  mov x1, xzr
0x06A7846C: e3031faa  mov x3, xzr
0x06A78470: f40300aa  mov x20, x0
0x06A78474: 2576d297  bl #0x5f15d08
0x06A78478: e00740ad  ldp q0, q1, [sp]
0x06A7847C: 830340f9  ldr x3, [x28]
0x06A78480: e8830091  add x8, sp, #0x20
0x06A78484: e0030191  add x0, sp, #0x40
0x06A78488: e10313aa  mov x1, x19
0x06A7848C: e20314aa  mov x2, x20
0x06A78490: e00702ad  stp q0, q1, [sp, #0x40]
0x06A78494: 64b24b97  bl #0x3d64e24
0x06A78498: a10340f9  ldr x1, [x29]
0x06A7849C: e0830091  add x0, sp, #0x20
0x06A784A0: 1d3f6497  bl #0x4388114
0x06A784A4: e80240f9  ldr x8, [x23]
0x06A784A8: f30300aa  mov x19, x0
0x06A784AC: e00308aa  mov x0, x8
0x06A784B0: fc211c97  bl #0x3180ca0
0x06A784B4: 020340f9  ldr x2, [x24]
0x06A784B8: e10316aa  mov x1, x22
0x06A784BC: e3031faa  mov x3, xzr
0x06A784C0: f40300aa  mov x20, x0
0x06A784C4: cc5c9f97  bl #0x524f7f4
0x06A784C8: c86500b0  adrp x8, #0x7731000
0x06A784CC: 087943f9  ldr x8, [x8, #0x6f0]
0x06A784D0: e00313aa  mov x0, x19
0x06A784D4: e10314aa  mov x1, x20
0x06A784D8: 020140f9  ldr x2, [x8]
0x06A784DC: f9c64697  bl #0x3c2a0c0
0x06A784E0: f44f4ba9  ldp x20, x19, [sp, #0xb0]
0x06A784E4: f6574aa9  ldp x22, x21, [sp, #0xa0]
0x06A784E8: f85f49a9  ldp x24, x23, [sp, #0x90]
0x06A784EC: fa6748a9  ldp x26, x25, [sp, #0x80]
0x06A784F0: fc6f47a9  ldp x28, x27, [sp, #0x70]
0x06A784F4: fd7b46a9  ldp x29, x30, [sp, #0x60]
0x06A784F8: 00000012  and w0, w0, #1
0x06A784FC: ff030391  add sp, sp, #0xc0
0x06A78500: c0035fd6  ret
0x06A78504: ea211c97  bl #0x3180cac

; RVA 0x6A78508 | private void StartUnlocking(TickContext context, Entity entity, ref TimeLockComponent timeLock) { }
; bytes=320 sha256=7a0862d0b2b52826a62e7cfd830da28f08064b3584fdbdd6755b62204dd6ed78 status=arm64_complete_bound indexed_start=True
0x06A78508: ff4302d1  sub sp, sp, #0x90
0x06A7850C: fe5f06a9  stp x30, x23, [sp, #0x60]
0x06A78510: f65707a9  stp x22, x21, [sp, #0x70]
0x06A78514: f44f08a9  stp x20, x19, [sp, #0x80]
0x06A78518: 979500d0  adrp x23, #0x7d2a000
0x06A7851C: d66500b0  adrp x22, #0x7731000
0x06A78520: e85e5c39  ldrb w8, [x23, #0x717]
0x06A78524: d68e43f9  ldr x22, [x22, #0x718]
0x06A78528: f50303aa  mov x21, x3
0x06A7852C: f30302aa  mov x19, x2
0x06A78530: f40301aa  mov x20, x1
0x06A78534: 48020037  tbnz w8, #0, #0x6a7857c
0x06A78538: c06500b0  adrp x0, #0x7731000
0x06A7853C: 009043f9  ldr x0, [x0, #0x720]
0x06A78540: 36211c97  bl #0x3180a18
0x06A78544: c06500b0  adrp x0, #0x7731000
0x06A78548: 009443f9  ldr x0, [x0, #0x728]
0x06A7854C: 33211c97  bl #0x3180a18
0x06A78550: c06500b0  adrp x0, #0x7731000
0x06A78554: 009843f9  ldr x0, [x0, #0x730]
0x06A78558: 30211c97  bl #0x3180a18
0x06A7855C: c06500b0  adrp x0, #0x7731000
0x06A78560: 009c43f9  ldr x0, [x0, #0x738]
0x06A78564: 2d211c97  bl #0x3180a18
0x06A78568: c06500b0  adrp x0, #0x7731000
0x06A7856C: 008c43f9  ldr x0, [x0, #0x718]
0x06A78570: 2a211c97  bl #0x3180a18
0x06A78574: 28008052  movz w8, #0x1
0x06A78578: e85e1c39  strb w8, [x23, #0x717]
0x06A7857C: 28008052  movz w8, #0x1
0x06A78580: a8620039  strb w8, [x21, #0x18]
0x06A78584: a91240f9  ldr x9, [x21, #0x20]
0x06A78588: a10240ad  ldp q1, q0, [x21]
0x06A7858C: c20240f9  ldr x2, [x22]
0x06A78590: e0c30091  add x0, sp, #0x30
0x06A78594: e10313aa  mov x1, x19
0x06A78598: e91300f9  str x9, [sp, #0x20]
0x06A7859C: e10300ad  stp q1, q0, [sp]
0x06A785A0: e18301ad  stp q1, q0, [sp, #0x30]
0x06A785A4: e92b00f9  str x9, [sp, #0x50]
0x06A785A8: 24414d97  bl #0x3dc8a38
0x06A785AC: d30400b4  cbz x19, #0x6a78644
0x06A785B0: c86500b0  adrp x8, #0x7731000
0x06A785B4: 089143f9  ldr x8, [x8, #0x720]
0x06A785B8: d56500b0  adrp x21, #0x7731000
0x06A785BC: e00313aa  mov x0, x19
0x06A785C0: 010140f9  ldr x1, [x8]
0x06A785C4: b59a43f9  ldr x21, [x21, #0x730]
0x06A785C8: b28e4697  bl #0x3c1c090
0x06A785CC: e0000037  tbnz w0, #0, #0x6a785e8
0x06A785D0: c86500b0  adrp x8, #0x7731000
0x06A785D4: 089543f9  ldr x8, [x8, #0x728]
0x06A785D8: e00313aa  mov x0, x19
0x06A785DC: e1031faa  mov x1, xzr
0x06A785E0: 020140f9  ldr x2, [x8]
0x06A785E4: 59964697  bl #0x3c1df48
0x06A785E8: a00240f9  ldr x0, [x21]
0x06A785EC: 940a40f9  ldr x20, [x20, #0x10]
0x06A785F0: ac211c97  bl #0x3180ca0
0x06A785F4: e1031faa  mov x1, xzr
0x06A785F8: f50300aa  mov x21, x0
0x06A785FC: 3f880094  bl #0x6a9a6f8
0x06A78600: 350200b4  cbz x21, #0x6a78644
0x06A78604: e00315aa  mov x0, x21
0x06A78608: 130c01f8  str x19, [x0, #0x10]!
0x06A7860C: e10313aa  mov x1, x19
0x06A78610: ed201c97  bl #0x31809c4
0x06A78614: 940100b4  cbz x20, #0x6a78644
0x06A78618: c86500b0  adrp x8, #0x7731000
0x06A7861C: 089d43f9  ldr x8, [x8, #0x738]
0x06A78620: e00314aa  mov x0, x20
0x06A78624: e10315aa  mov x1, x21
0x06A78628: 020140f9  ldr x2, [x8]
0x06A7862C: 6e2b4d97  bl #0x3dc33e4
0x06A78630: f44f48a9  ldp x20, x19, [sp, #0x80]
0x06A78634: f65747a9  ldp x22, x21, [sp, #0x70]
0x06A78638: fe5f46a9  ldp x30, x23, [sp, #0x60]
0x06A7863C: ff430291  add sp, sp, #0x90
0x06A78640: c0035fd6  ret
0x06A78644: 9a211c97  bl #0x3180cac

; RVA 0x6A788D8 | private void BlockMergeComponentIfUsed(Entity entity, ref TimeLockComponent modifiedTimeLock) { }
; bytes=252 sha256=098d4d971c4f24a7b86a95da8f5467bb916f4b2f05912a9fb6bfbcf7ad9a7b41 status=arm64_complete_bound indexed_start=True
0x06A788D8: ff0302d1  sub sp, sp, #0x80
0x06A788DC: fe5706a9  stp x30, x21, [sp, #0x60]
0x06A788E0: f44f07a9  stp x20, x19, [sp, #0x70]
0x06A788E4: 959500d0  adrp x21, #0x7d2a000
0x06A788E8: a8625c39  ldrb w8, [x21, #0x718]
0x06A788EC: f30302aa  mov x19, x2
0x06A788F0: f40301aa  mov x20, x1
0x06A788F4: 88010037  tbnz w8, #0, #0x6a78924
0x06A788F8: c0650090  adrp x0, #0x7730000
0x06A788FC: 000047f9  ldr x0, [x0, #0xe00]
0x06A78900: 46201c97  bl #0x3180a18
0x06A78904: c06500b0  adrp x0, #0x7731000
0x06A78908: 00ac43f9  ldr x0, [x0, #0x758]
0x06A7890C: 43201c97  bl #0x3180a18
0x06A78910: 006000d0  adrp x0, #0x767a000
0x06A78914: 00a442f9  ldr x0, [x0, #0x548]
0x06A78918: 40201c97  bl #0x3180a18
0x06A7891C: 28008052  movz w8, #0x1
0x06A78920: a8621c39  strb w8, [x21, #0x718]
0x06A78924: 00e4006f  movi v0.2d, #0000000000000000
0x06A78928: e00302ad  stp q0, q0, [sp, #0x40]
0x06A7892C: e00301ad  stp q0, q0, [sp, #0x20]
0x06A78930: e007803d  str q0, [sp, #0x10]
0x06A78934: ff7f00a9  stp xzr, xzr, [sp]
0x06A78938: 600240fd  ldr d0, [x19]
0x06A7893C: 0820601e  fcmp d0, #0.0
0x06A78940: 0c040054  b.gt #0x6a789c0
0x06A78944: 740400b4  cbz x20, #0x6a789d0
0x06A78948: 086000d0  adrp x8, #0x767a000
0x06A7894C: 08a542f9  ldr x8, [x8, #0x548]
0x06A78950: e1430091  add x1, sp, #0x10
0x06A78954: e00314aa  mov x0, x20
0x06A78958: 020140f9  ldr x2, [x8]
0x06A7895C: aa9c4697  bl #0x3c1fc04
0x06A78960: 00030036  tbz w0, #0, #0x6a789c0
0x06A78964: e84f40b9  ldr w8, [sp, #0x4c]
0x06A78968: 1f0d0071  cmp w8, #3
0x06A7896C: a0020054  b.eq #0x6a789c0
0x06A78970: c86500b0  adrp x8, #0x7731000
0x06A78974: 08ad43f9  ldr x8, [x8, #0x758]
0x06A78978: e1030091  mov x1, sp
0x06A7897C: e00314aa  mov x0, x20
0x06A78980: 020140f9  ldr x2, [x8]
0x06A78984: fe9a4697  bl #0x3c1f57c
0x06A78988: c0010036  tbz w0, #0, #0x6a789c0
0x06A7898C: e80340b9  ldr w8, [sp]
0x06A78990: 1f090071  cmp w8, #2
0x06A78994: 60010054  b.eq #0x6a789c0
0x06A78998: ca650090  adrp x10, #0x7730000
0x06A7899C: 4a0147f9  ldr x10, [x10, #0xe00]
0x06A789A0: 48008052  movz w8, #0x2
0x06A789A4: 29008052  movz w9, #0x1
0x06A789A8: e80300b9  str w8, [sp]
0x06A789AC: 69860039  strb w9, [x19, #0x21]
0x06A789B0: e10b40a9  ldp x1, x2, [sp]
0x06A789B4: 430140f9  ldr x3, [x10]
0x06A789B8: e00314aa  mov x0, x20
0x06A789BC: 25934697  bl #0x3c1d650
0x06A789C0: f44f47a9  ldp x20, x19, [sp, #0x70]
0x06A789C4: fe5746a9  ldp x30, x21, [sp, #0x60]
0x06A789C8: ff030291  add sp, sp, #0x80
0x06A789CC: c0035fd6  ret
0x06A789D0: b7201c97  bl #0x3180cac

; RVA 0x6A78E24 | public void .ctor() { }
; bytes=8 sha256=9100841490fe751ef96ec4e7ddf15a283984fe744e7617a47d45c7784d9dfa48 status=arm64_complete_bound indexed_start=True
0x06A78E24: e1031faa  mov x1, xzr
0x06A78E28: f585b117  b #0x56da5fc

