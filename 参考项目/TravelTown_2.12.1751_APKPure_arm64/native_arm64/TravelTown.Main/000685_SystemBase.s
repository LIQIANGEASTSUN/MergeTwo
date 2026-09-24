; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 685 MergeEngine.ECS.Systems.SystemBase
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x63A6C78 | protected bool get_Initialized() { }
; bytes=8 sha256=b5f756a94e2a4fd04c581b81886364460d3cd7c165e6a51d5f3195a9439a10c4 status=arm64_complete_bound indexed_start=True
0x063A6C78: 00c04039  ldrb w0, [x0, #0x30]
0x063A6C7C: c0035fd6  ret

; RVA 0x63A6C80 | protected bool get_GameStarted() { }
; bytes=8 sha256=6a3cb8c4f92b5961effe3a4ee16cd73e98d1d0f94c954c6b45545a35177d46d8 status=arm64_complete_bound indexed_start=True
0x063A6C80: 00c44039  ldrb w0, [x0, #0x31]
0x063A6C84: c0035fd6  ret

; RVA 0x63A6C88 | protected bool get_HasStoredSession() { }
; bytes=28 sha256=89c9442eb9737f426cf3f8ffde0f63db6b7dd7f0ae1db1d5f945ee5a2df18efd status=arm64_complete_bound indexed_start=True
0x063A6C88: fe0f1ff8  str x30, [sp, #-0x10]!
0x063A6C8C: 001c40f9  ldr x0, [x0, #0x38]
0x063A6C90: 800000b4  cbz x0, #0x63a6ca0
0x063A6C94: e1031faa  mov x1, xzr
0x063A6C98: fe0741f8  ldr x30, [sp], #0x10
0x063A6C9C: dc92fb17  b #0x628b80c
0x063A6CA0: 03683797  bl #0x3180cac

; RVA 0x63A6CA4 | protected IEntityManager get_EntityManager() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x063A6CA4: 000840f9  ldr x0, [x0, #0x10]
0x063A6CA8: c0035fd6  ret

; RVA 0x63A6CAC | protected IEntityFactory get_EntityFactory() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x063A6CAC: 000c40f9  ldr x0, [x0, #0x18]
0x063A6CB0: c0035fd6  ret

; RVA 0x63A6CB4 | protected ISystemManager get_SystemManager() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x063A6CB4: 001040f9  ldr x0, [x0, #0x20]
0x063A6CB8: c0035fd6  ret

; RVA 0x63A6CBC | protected SignalBus get_SignalBus() { }
; bytes=8 sha256=c0b9896d6c3d8aacf384c0d0cf5d897e84f621efe31cc89c980be348eb9c6614 status=arm64_complete_bound indexed_start=True
0x063A6CBC: 001440f9  ldr x0, [x0, #0x28]
0x063A6CC0: c0035fd6  ret

; RVA 0x63A6CC4 | protected void add_AllSystemsInitialized(Action value) { }
; bytes=168 sha256=e75d17088becf26a23dad3e3b94a7e2d71dcda961c25a6bb1055af14acffe673 status=arm64_complete_bound indexed_start=True
0x063A6CC4: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x063A6CC8: f44f01a9  stp x20, x19, [sp, #0x10]
0x063A6CCC: 15cc0090  adrp x21, #0x7d26000
0x063A6CD0: a89e4539  ldrb w8, [x21, #0x167]
0x063A6CD4: f30301aa  mov x19, x1
0x063A6CD8: f40300aa  mov x20, x0
0x063A6CDC: c8000037  tbnz w8, #0, #0x63a6cf4
0x063A6CE0: 809600f0  adrp x0, #0x7679000
0x063A6CE4: 001045f9  ldr x0, [x0, #0xa20]
0x063A6CE8: 4c673797  bl #0x3180a18
0x063A6CEC: 28008052  movz w8, #0x1
0x063A6CF0: a89e0539  strb w8, [x21, #0x167]
0x063A6CF4: 941240f9  ldr x20, [x20, #0x20]
0x063A6CF8: 940300b4  cbz x20, #0x63a6d68
0x063A6CFC: 8a9600f0  adrp x10, #0x7679000
0x063A6D00: 880240f9  ldr x8, [x20]
0x063A6D04: 4a1145f9  ldr x10, [x10, #0xa20]
0x063A6D08: 095d4279  ldrh w9, [x8, #0x12e]
0x063A6D0C: 410140f9  ldr x1, [x10]
0x063A6D10: 290100b4  cbz x9, #0x63a6d34
0x063A6D14: 0a5940f9  ldr x10, [x8, #0xb0]
0x063A6D18: 4a210091  add x10, x10, #8
0x063A6D1C: 4b815ff8  ldur x11, [x10, #-8]
0x063A6D20: 7f0101eb  cmp x11, x1
0x063A6D24: 00010054  b.eq #0x63a6d44
0x063A6D28: 290500f1  subs x9, x9, #1
0x063A6D2C: 4a410091  add x10, x10, #0x10
0x063A6D30: 61ffff54  b.ne #0x63a6d1c
0x063A6D34: e00314aa  mov x0, x20
0x063A6D38: e2031f2a  mov w2, wzr
0x063A6D3C: 75bf3697  bl #0x3156b10
0x063A6D40: 04000014  b #0x63a6d50
0x063A6D44: 490180b9  ldrsw x9, [x10]
0x063A6D48: 0811098b  add x8, x8, x9, lsl #4
0x063A6D4C: 00e10491  add x0, x8, #0x138
0x063A6D50: 030840a9  ldp x3, x2, [x0]
0x063A6D54: e00314aa  mov x0, x20
0x063A6D58: e10313aa  mov x1, x19
0x063A6D5C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x063A6D60: fe57c2a8  ldp x30, x21, [sp], #0x20
0x063A6D64: 60001fd6  br x3
0x063A6D68: d1673797  bl #0x3180cac

; RVA 0x63A6D6C | protected void remove_AllSystemsInitialized(Action value) { }
; bytes=172 sha256=3af633427aaa7f2a6deb00dbd3ffb8c561471523c8db2d0606307d3be36872cd status=arm64_complete_bound indexed_start=True
0x063A6D6C: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x063A6D70: f44f01a9  stp x20, x19, [sp, #0x10]
0x063A6D74: 15cc0090  adrp x21, #0x7d26000
0x063A6D78: a8a24539  ldrb w8, [x21, #0x168]
0x063A6D7C: f30301aa  mov x19, x1
0x063A6D80: f40300aa  mov x20, x0
0x063A6D84: c8000037  tbnz w8, #0, #0x63a6d9c
0x063A6D88: 809600f0  adrp x0, #0x7679000
0x063A6D8C: 001045f9  ldr x0, [x0, #0xa20]
0x063A6D90: 22673797  bl #0x3180a18
0x063A6D94: 28008052  movz w8, #0x1
0x063A6D98: a8a20539  strb w8, [x21, #0x168]
0x063A6D9C: 941240f9  ldr x20, [x20, #0x20]
0x063A6DA0: b40300b4  cbz x20, #0x63a6e14
0x063A6DA4: 8a9600f0  adrp x10, #0x7679000
0x063A6DA8: 880240f9  ldr x8, [x20]
0x063A6DAC: 4a1145f9  ldr x10, [x10, #0xa20]
0x063A6DB0: 095d4279  ldrh w9, [x8, #0x12e]
0x063A6DB4: 410140f9  ldr x1, [x10]
0x063A6DB8: 290100b4  cbz x9, #0x63a6ddc
0x063A6DBC: 0a5940f9  ldr x10, [x8, #0xb0]
0x063A6DC0: 4a210091  add x10, x10, #8
0x063A6DC4: 4b815ff8  ldur x11, [x10, #-8]
0x063A6DC8: 7f0101eb  cmp x11, x1
0x063A6DCC: 00010054  b.eq #0x63a6dec
0x063A6DD0: 290500f1  subs x9, x9, #1
0x063A6DD4: 4a410091  add x10, x10, #0x10
0x063A6DD8: 61ffff54  b.ne #0x63a6dc4
0x063A6DDC: 22008052  movz w2, #0x1
0x063A6DE0: e00314aa  mov x0, x20
0x063A6DE4: 4bbf3697  bl #0x3156b10
0x063A6DE8: 05000014  b #0x63a6dfc
0x063A6DEC: 490140b9  ldr w9, [x10]
0x063A6DF0: 29050011  add w9, w9, #1
0x063A6DF4: 08d1298b  add x8, x8, w9, sxtw #4
0x063A6DF8: 00e10491  add x0, x8, #0x138
0x063A6DFC: 030840a9  ldp x3, x2, [x0]
0x063A6E00: e00314aa  mov x0, x20
0x063A6E04: e10313aa  mov x1, x19
0x063A6E08: f44f41a9  ldp x20, x19, [sp, #0x10]
0x063A6E0C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x063A6E10: 60001fd6  br x3
0x063A6E14: a6673797  bl #0x3180cac

; RVA 0x63A6E18 | public void Initialize() { }
; bytes=884 sha256=461ec3f76fe4e62b195bacc3c14fbcc5f3ebfbe0573cfbd47f64390d999f5942 status=arm64_complete_bound indexed_start=True
0x063A6E18: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x063A6E1C: f65701a9  stp x22, x21, [sp, #0x10]
0x063A6E20: f44f02a9  stp x20, x19, [sp, #0x20]
0x063A6E24: 14cc0090  adrp x20, #0x7d26000
0x063A6E28: 88a64539  ldrb w8, [x20, #0x169]
0x063A6E2C: f30300aa  mov x19, x0
0x063A6E30: 28040037  tbnz w8, #0, #0x63a6eb4
0x063A6E34: 409900f0  adrp x0, #0x76d1000
0x063A6E38: 00f441f9  ldr x0, [x0, #0x3e8]
0x063A6E3C: f7663797  bl #0x3180a18
0x063A6E40: a09900b0  adrp x0, #0x76db000
0x063A6E44: 00b044f9  ldr x0, [x0, #0x960]
0x063A6E48: f4663797  bl #0x3180a18
0x063A6E4C: 40950090  adrp x0, #0x764e000
0x063A6E50: 00ac43f9  ldr x0, [x0, #0x758]
0x063A6E54: f1663797  bl #0x3180a18
0x063A6E58: 20990090  adrp x0, #0x76ca000
0x063A6E5C: 007447f9  ldr x0, [x0, #0xee8]
0x063A6E60: ee663797  bl #0x3180a18
0x063A6E64: c0960090  adrp x0, #0x767e000
0x063A6E68: 00e042f9  ldr x0, [x0, #0x5c0]
0x063A6E6C: eb663797  bl #0x3180a18
0x063A6E70: 409a00f0  adrp x0, #0x76f1000
0x063A6E74: 002440f9  ldr x0, [x0, #0x48]
0x063A6E78: e8663797  bl #0x3180a18
0x063A6E7C: 409900f0  adrp x0, #0x76d1000
0x063A6E80: 00f841f9  ldr x0, [x0, #0x3f0]
0x063A6E84: e5663797  bl #0x3180a18
0x063A6E88: 409a00f0  adrp x0, #0x76f1000
0x063A6E8C: 002840f9  ldr x0, [x0, #0x50]
0x063A6E90: e2663797  bl #0x3180a18
0x063A6E94: 409a00f0  adrp x0, #0x76f1000
0x063A6E98: 002c40f9  ldr x0, [x0, #0x58]
0x063A6E9C: df663797  bl #0x3180a18
0x063A6EA0: 409a00f0  adrp x0, #0x76f1000
0x063A6EA4: 003040f9  ldr x0, [x0, #0x60]
0x063A6EA8: dc663797  bl #0x3180a18
0x063A6EAC: 28008052  movz w8, #0x1
0x063A6EB0: 88a60539  strb w8, [x20, #0x169]
0x063A6EB4: 68c24039  ldrb w8, [x19, #0x30]
0x063A6EB8: 08160035  cbnz w8, #0x63a7178
0x063A6EBC: b69900b0  adrp x22, #0x76db000
0x063A6EC0: 740a40f9  ldr x20, [x19, #0x10]
0x063A6EC4: d6b244f9  ldr x22, [x22, #0x960]
0x063A6EC8: c00240f9  ldr x0, [x22]
0x063A6ECC: 75673797  bl #0x3180ca0
0x063A6ED0: 680240f9  ldr x8, [x19]
0x063A6ED4: e10313aa  mov x1, x19
0x063A6ED8: e3031faa  mov x3, xzr
0x063A6EDC: f50300aa  mov x21, x0
0x063A6EE0: 02f940f9  ldr x2, [x8, #0x1f0]
0x063A6EE4: bcecbd97  bl #0x53221d4
0x063A6EE8: 141500b4  cbz x20, #0x63a7188
0x063A6EEC: d7960090  adrp x23, #0x767e000
0x063A6EF0: 880240f9  ldr x8, [x20]
0x063A6EF4: f7e242f9  ldr x23, [x23, #0x5c0]
0x063A6EF8: 095d4279  ldrh w9, [x8, #0x12e]
0x063A6EFC: e10240f9  ldr x1, [x23]
0x063A6F00: 290100b4  cbz x9, #0x63a6f24
0x063A6F04: 0a5940f9  ldr x10, [x8, #0xb0]
0x063A6F08: 4a210091  add x10, x10, #8
0x063A6F0C: 4b815ff8  ldur x11, [x10, #-8]
0x063A6F10: 7f0101eb  cmp x11, x1
0x063A6F14: 00010054  b.eq #0x63a6f34
0x063A6F18: 290500f1  subs x9, x9, #1
0x063A6F1C: 4a410091  add x10, x10, #0x10
0x063A6F20: 61ffff54  b.ne #0x63a6f0c
0x063A6F24: e00314aa  mov x0, x20
0x063A6F28: e2031f2a  mov w2, wzr
0x063A6F2C: f9be3697  bl #0x3156b10
0x063A6F30: 04000014  b #0x63a6f40
0x063A6F34: 490180b9  ldrsw x9, [x10]
0x063A6F38: 0811098b  add x8, x8, x9, lsl #4
0x063A6F3C: 00e10491  add x0, x8, #0x138
0x063A6F40: 080840a9  ldp x8, x2, [x0]
0x063A6F44: e00314aa  mov x0, x20
0x063A6F48: e10315aa  mov x1, x21
0x063A6F4C: 00013fd6  blr x8
0x063A6F50: c00240f9  ldr x0, [x22]
0x063A6F54: 740a40f9  ldr x20, [x19, #0x10]
0x063A6F58: 52673797  bl #0x3180ca0
0x063A6F5C: 680240f9  ldr x8, [x19]
0x063A6F60: e10313aa  mov x1, x19
0x063A6F64: e3031faa  mov x3, xzr
0x063A6F68: f50300aa  mov x21, x0
0x063A6F6C: 020141f9  ldr x2, [x8, #0x200]
0x063A6F70: 99ecbd97  bl #0x53221d4
0x063A6F74: b41000b4  cbz x20, #0x63a7188
0x063A6F78: 880240f9  ldr x8, [x20]
0x063A6F7C: e10240f9  ldr x1, [x23]
0x063A6F80: 095d4279  ldrh w9, [x8, #0x12e]
0x063A6F84: 290100b4  cbz x9, #0x63a6fa8
0x063A6F88: 0a5940f9  ldr x10, [x8, #0xb0]
0x063A6F8C: 4a210091  add x10, x10, #8
0x063A6F90: 4b815ff8  ldur x11, [x10, #-8]
0x063A6F94: 7f0101eb  cmp x11, x1
0x063A6F98: 00010054  b.eq #0x63a6fb8
0x063A6F9C: 290500f1  subs x9, x9, #1
0x063A6FA0: 4a410091  add x10, x10, #0x10
0x063A6FA4: 61ffff54  b.ne #0x63a6f90
0x063A6FA8: 42008052  movz w2, #0x2
0x063A6FAC: e00314aa  mov x0, x20
0x063A6FB0: d8be3697  bl #0x3156b10
0x063A6FB4: 05000014  b #0x63a6fc8
0x063A6FB8: 490140b9  ldr w9, [x10]
0x063A6FBC: 29090011  add w9, w9, #2
0x063A6FC0: 08d1298b  add x8, x8, w9, sxtw #4
0x063A6FC4: 00e10491  add x0, x8, #0x138
0x063A6FC8: 080840a9  ldp x8, x2, [x0]
0x063A6FCC: e00314aa  mov x0, x20
0x063A6FD0: e10315aa  mov x1, x21
0x063A6FD4: 00013fd6  blr x8
0x063A6FD8: 489a00f0  adrp x8, #0x76f1000
0x063A6FDC: 082d40f9  ldr x8, [x8, #0x58]
0x063A6FE0: e00313aa  mov x0, x19
0x063A6FE4: 010140f9  ldr x1, [x8]
0x063A6FE8: 0c3f6897  bl #0x3db6c18
0x063A6FEC: e10300aa  mov x1, x0
0x063A6FF0: e00313aa  mov x0, x19
0x063A6FF4: 018c03f8  str x1, [x0, #0x38]!
0x063A6FF8: 73663797  bl #0x31809c4
0x063A6FFC: 48950090  adrp x8, #0x764e000
0x063A7000: 08ad43f9  ldr x8, [x8, #0x758]
0x063A7004: 000140f9  ldr x0, [x8]
0x063A7008: 26673797  bl #0x3180ca0
0x063A700C: 489a00d0  adrp x8, #0x76f1000
0x063A7010: 083140f9  ldr x8, [x8, #0x60]
0x063A7014: e10313aa  mov x1, x19
0x063A7018: e3031faa  mov x3, xzr
0x063A701C: f40300aa  mov x20, x0
0x063A7020: 020140f9  ldr x2, [x8]
0x063A7024: c319c997  bl #0x55ed730
0x063A7028: e00313aa  mov x0, x19
0x063A702C: e10314aa  mov x1, x20
0x063A7030: 25ffff97  bl #0x63a6cc4
0x063A7034: 089900f0  adrp x8, #0x76ca000
0x063A7038: 087547f9  ldr x8, [x8, #0xee8]
0x063A703C: 740a40f9  ldr x20, [x19, #0x10]
0x063A7040: 000140f9  ldr x0, [x8]
0x063A7044: 08e040b9  ldr w8, [x0, #0xe0]
0x063A7048: 48000035  cbnz w8, #0x63a7050
0x063A704C: d0663797  bl #0x3180b8c
0x063A7050: e00313aa  mov x0, x19
0x063A7054: e10314aa  mov x1, x20
0x063A7058: e2031faa  mov x2, xzr
0x063A705C: 2429fb97  bl #0x62714ec
0x063A7060: 611240f9  ldr x1, [x19, #0x20]
0x063A7064: e00313aa  mov x0, x19
0x063A7068: e2031faa  mov x2, xzr
0x063A706C: ae29fb97  bl #0x6271724
0x063A7070: 740a40f9  ldr x20, [x19, #0x10]
0x063A7074: b40800b4  cbz x20, #0x63a7188
0x063A7078: 880240f9  ldr x8, [x20]
0x063A707C: e10240f9  ldr x1, [x23]
0x063A7080: 095d4279  ldrh w9, [x8, #0x12e]
0x063A7084: 290100b4  cbz x9, #0x63a70a8
0x063A7088: 0a5940f9  ldr x10, [x8, #0xb0]
0x063A708C: 4a210091  add x10, x10, #8
0x063A7090: 4b815ff8  ldur x11, [x10, #-8]
0x063A7094: 7f0101eb  cmp x11, x1
0x063A7098: 00010054  b.eq #0x63a70b8
0x063A709C: 290500f1  subs x9, x9, #1
0x063A70A0: 4a410091  add x10, x10, #0x10
0x063A70A4: 61ffff54  b.ne #0x63a7090
0x063A70A8: 82008052  movz w2, #0x4
0x063A70AC: e00314aa  mov x0, x20
0x063A70B0: 98be3697  bl #0x3156b10
0x063A70B4: 05000014  b #0x63a70c8
0x063A70B8: 490140b9  ldr w9, [x10]
0x063A70BC: 29110011  add w9, w9, #4
0x063A70C0: 08d1298b  add x8, x8, w9, sxtw #4
0x063A70C4: 00e10491  add x0, x8, #0x138
0x063A70C8: 080440a9  ldp x8, x1, [x0]
0x063A70CC: e00314aa  mov x0, x20
0x063A70D0: 00013fd6  blr x8
0x063A70D4: c80240f9  ldr x8, [x22]
0x063A70D8: f40300aa  mov x20, x0
0x063A70DC: e00308aa  mov x0, x8
0x063A70E0: f0663797  bl #0x3180ca0
0x063A70E4: 680240f9  ldr x8, [x19]
0x063A70E8: e10313aa  mov x1, x19
0x063A70EC: e3031faa  mov x3, xzr
0x063A70F0: f50300aa  mov x21, x0
0x063A70F4: 02f940f9  ldr x2, [x8, #0x1f0]
0x063A70F8: 37ecbd97  bl #0x53221d4
0x063A70FC: 489a00d0  adrp x8, #0x76f1000
0x063A7100: 082540f9  ldr x8, [x8, #0x48]
0x063A7104: e00314aa  mov x0, x20
0x063A7108: e10315aa  mov x1, x21
0x063A710C: 020140f9  ldr x2, [x8]
0x063A7110: d29f6597  bl #0x3d0f058
0x063A7114: 489900d0  adrp x8, #0x76d1000
0x063A7118: 741640f9  ldr x20, [x19, #0x28]
0x063A711C: 08f541f9  ldr x8, [x8, #0x3e8]
0x063A7120: 000140f9  ldr x0, [x8]
0x063A7124: df663797  bl #0x3180ca0
0x063A7128: 489a00d0  adrp x8, #0x76f1000
0x063A712C: 082940f9  ldr x8, [x8, #0x50]
0x063A7130: e10313aa  mov x1, x19
0x063A7134: e3031faa  mov x3, xzr
0x063A7138: f50300aa  mov x21, x0
0x063A713C: 020140f9  ldr x2, [x8]
0x063A7140: 25ecbd97  bl #0x53221d4
0x063A7144: 340200b4  cbz x20, #0x63a7188
0x063A7148: 489900d0  adrp x8, #0x76d1000
0x063A714C: 08f941f9  ldr x8, [x8, #0x3f0]
0x063A7150: e00314aa  mov x0, x20
0x063A7154: e10315aa  mov x1, x21
0x063A7158: 020140f9  ldr x2, [x8]
0x063A715C: 6af86797  bl #0x3da5304
0x063A7160: 680240f9  ldr x8, [x19]
0x063A7164: e00313aa  mov x0, x19
0x063A7168: 098559a9  ldp x9, x1, [x8, #0x198]
0x063A716C: 20013fd6  blr x9
0x063A7170: 28008052  movz w8, #0x1
0x063A7174: 68c20039  strb w8, [x19, #0x30]
0x063A7178: f44f42a9  ldp x20, x19, [sp, #0x20]
0x063A717C: f65741a9  ldp x22, x21, [sp, #0x10]
0x063A7180: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x063A7184: c0035fd6  ret
0x063A7188: c9663797  bl #0x3180cac

; RVA 0x63A718C | public void Dispose() { }
; bytes=396 sha256=f23db1927b8eb59f575776513bc90b37c2606b24d7b3e55dd6ed619b623521ea status=arm64_complete_bound indexed_start=True
0x063A718C: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x063A7190: f65701a9  stp x22, x21, [sp, #0x10]
0x063A7194: f44f02a9  stp x20, x19, [sp, #0x20]
0x063A7198: f4cb00f0  adrp x20, #0x7d26000
0x063A719C: 88aa4539  ldrb w8, [x20, #0x16a]
0x063A71A0: f30300aa  mov x19, x0
0x063A71A4: 28010037  tbnz w8, #0, #0x63a71c8
0x063A71A8: a0990090  adrp x0, #0x76db000
0x063A71AC: 00b044f9  ldr x0, [x0, #0x960]
0x063A71B0: 1a663797  bl #0x3180a18
0x063A71B4: a09600f0  adrp x0, #0x767e000
0x063A71B8: 00e042f9  ldr x0, [x0, #0x5c0]
0x063A71BC: 17663797  bl #0x3180a18
0x063A71C0: 28008052  movz w8, #0x1
0x063A71C4: 88aa0539  strb w8, [x20, #0x16a]
0x063A71C8: 68c24039  ldrb w8, [x19, #0x30]
0x063A71CC: c8090034  cbz w8, #0x63a7304
0x063A71D0: 680240f9  ldr x8, [x19]
0x063A71D4: b6990090  adrp x22, #0x76db000
0x063A71D8: e00313aa  mov x0, x19
0x063A71DC: 09855aa9  ldp x9, x1, [x8, #0x1a8]
0x063A71E0: d6b244f9  ldr x22, [x22, #0x960]
0x063A71E4: 20013fd6  blr x9
0x063A71E8: c00240f9  ldr x0, [x22]
0x063A71EC: 740a40f9  ldr x20, [x19, #0x10]
0x063A71F0: ac663797  bl #0x3180ca0
0x063A71F4: 680240f9  ldr x8, [x19]
0x063A71F8: e10313aa  mov x1, x19
0x063A71FC: e3031faa  mov x3, xzr
0x063A7200: f50300aa  mov x21, x0
0x063A7204: 02f940f9  ldr x2, [x8, #0x1f0]
0x063A7208: f3ebbd97  bl #0x53221d4
0x063A720C: 540800b4  cbz x20, #0x63a7314
0x063A7210: b79600f0  adrp x23, #0x767e000
0x063A7214: 880240f9  ldr x8, [x20]
0x063A7218: f7e242f9  ldr x23, [x23, #0x5c0]
0x063A721C: 095d4279  ldrh w9, [x8, #0x12e]
0x063A7220: e10240f9  ldr x1, [x23]
0x063A7224: 290100b4  cbz x9, #0x63a7248
0x063A7228: 0a5940f9  ldr x10, [x8, #0xb0]
0x063A722C: 4a210091  add x10, x10, #8
0x063A7230: 4b815ff8  ldur x11, [x10, #-8]
0x063A7234: 7f0101eb  cmp x11, x1
0x063A7238: 00010054  b.eq #0x63a7258
0x063A723C: 290500f1  subs x9, x9, #1
0x063A7240: 4a410091  add x10, x10, #0x10
0x063A7244: 61ffff54  b.ne #0x63a7230
0x063A7248: 22008052  movz w2, #0x1
0x063A724C: e00314aa  mov x0, x20
0x063A7250: 30be3697  bl #0x3156b10
0x063A7254: 05000014  b #0x63a7268
0x063A7258: 490140b9  ldr w9, [x10]
0x063A725C: 29050011  add w9, w9, #1
0x063A7260: 08d1298b  add x8, x8, w9, sxtw #4
0x063A7264: 00e10491  add x0, x8, #0x138
0x063A7268: 080840a9  ldp x8, x2, [x0]
0x063A726C: e00314aa  mov x0, x20
0x063A7270: e10315aa  mov x1, x21
0x063A7274: 00013fd6  blr x8
0x063A7278: c00240f9  ldr x0, [x22]
0x063A727C: 740a40f9  ldr x20, [x19, #0x10]
0x063A7280: 88663797  bl #0x3180ca0
0x063A7284: 680240f9  ldr x8, [x19]
0x063A7288: e10313aa  mov x1, x19
0x063A728C: e3031faa  mov x3, xzr
0x063A7290: f50300aa  mov x21, x0
0x063A7294: 020141f9  ldr x2, [x8, #0x200]
0x063A7298: cfebbd97  bl #0x53221d4
0x063A729C: d40300b4  cbz x20, #0x63a7314
0x063A72A0: 880240f9  ldr x8, [x20]
0x063A72A4: e10240f9  ldr x1, [x23]
0x063A72A8: 095d4279  ldrh w9, [x8, #0x12e]
0x063A72AC: 290100b4  cbz x9, #0x63a72d0
0x063A72B0: 0a5940f9  ldr x10, [x8, #0xb0]
0x063A72B4: 4a210091  add x10, x10, #8
0x063A72B8: 4b815ff8  ldur x11, [x10, #-8]
0x063A72BC: 7f0101eb  cmp x11, x1
0x063A72C0: 00010054  b.eq #0x63a72e0
0x063A72C4: 290500f1  subs x9, x9, #1
0x063A72C8: 4a410091  add x10, x10, #0x10
0x063A72CC: 61ffff54  b.ne #0x63a72b8
0x063A72D0: 62008052  movz w2, #0x3
0x063A72D4: e00314aa  mov x0, x20
0x063A72D8: 0ebe3697  bl #0x3156b10
0x063A72DC: 05000014  b #0x63a72f0
0x063A72E0: 490140b9  ldr w9, [x10]
0x063A72E4: 290d0011  add w9, w9, #3
0x063A72E8: 08d1298b  add x8, x8, w9, sxtw #4
0x063A72EC: 00e10491  add x0, x8, #0x138
0x063A72F0: 080840a9  ldp x8, x2, [x0]
0x063A72F4: e00314aa  mov x0, x20
0x063A72F8: e10315aa  mov x1, x21
0x063A72FC: 00013fd6  blr x8
0x063A7300: 7fc20039  strb wzr, [x19, #0x30]
0x063A7304: f44f42a9  ldp x20, x19, [sp, #0x20]
0x063A7308: f65741a9  ldp x22, x21, [sp, #0x10]
0x063A730C: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x063A7310: c0035fd6  ret
0x063A7314: 66663797  bl #0x3180cac

; RVA 0x63A7318 | protected virtual void InitializeSystem() { }
; bytes=4 sha256=110f46b5b35c069160560c6ad6786f647dd44e8760a52a46fc22dbbcd7630b91 status=arm64_complete_bound indexed_start=True
0x063A7318: c0035fd6  ret

; RVA 0x63A731C | protected virtual void DisposeSystem() { }
; bytes=4 sha256=110f46b5b35c069160560c6ad6786f647dd44e8760a52a46fc22dbbcd7630b91 status=arm64_complete_bound indexed_start=True
0x063A731C: c0035fd6  ret

; RVA 0x63A7320 | protected virtual void OnGameStarted() { }
; bytes=4 sha256=110f46b5b35c069160560c6ad6786f647dd44e8760a52a46fc22dbbcd7630b91 status=arm64_complete_bound indexed_start=True
0x063A7320: c0035fd6  ret

; RVA 0x63A7324 | protected virtual void GamePaused() { }
; bytes=4 sha256=110f46b5b35c069160560c6ad6786f647dd44e8760a52a46fc22dbbcd7630b91 status=arm64_complete_bound indexed_start=True
0x063A7324: c0035fd6  ret

; RVA 0x63A7328 | protected virtual void GameResumed() { }
; bytes=4 sha256=110f46b5b35c069160560c6ad6786f647dd44e8760a52a46fc22dbbcd7630b91 status=arm64_complete_bound indexed_start=True
0x063A7328: c0035fd6  ret

; RVA 0x63A732C | protected virtual void EntityCreated(Entity entity) { }
; bytes=4 sha256=110f46b5b35c069160560c6ad6786f647dd44e8760a52a46fc22dbbcd7630b91 status=arm64_complete_bound indexed_start=True
0x063A732C: c0035fd6  ret

; RVA 0x63A7330 | protected virtual void EntityRemoved(Entity entity) { }
; bytes=4 sha256=110f46b5b35c069160560c6ad6786f647dd44e8760a52a46fc22dbbcd7630b91 status=arm64_complete_bound indexed_start=True
0x063A7330: c0035fd6  ret

; RVA 0x63A7334 | private bool IsCooldownBlocked(Entity entity, out CooldownBlockComponent cooldownBlockComponent) { }
; bytes=168 sha256=201ade5240dd40d8796368de6a9c3648aa671e69643bfd81cd80f27e340320b7 status=arm64_complete_bound indexed_start=True
0x063A7334: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x063A7338: f44f01a9  stp x20, x19, [sp, #0x10]
0x063A733C: f5cb00f0  adrp x21, #0x7d26000
0x063A7340: a8ae4539  ldrb w8, [x21, #0x16b]
0x063A7344: f40302aa  mov x20, x2
0x063A7348: f30301aa  mov x19, x1
0x063A734C: 28010037  tbnz w8, #0, #0x63a7370
0x063A7350: 409a00d0  adrp x0, #0x76f1000
0x063A7354: 003440f9  ldr x0, [x0, #0x68]
0x063A7358: b0653797  bl #0x3180a18
0x063A735C: a09600f0  adrp x0, #0x767e000
0x063A7360: 00d042f9  ldr x0, [x0, #0x5a0]
0x063A7364: ad653797  bl #0x3180a18
0x063A7368: 28008052  movz w8, #0x1
0x063A736C: a8ae0539  strb w8, [x21, #0x16b]
0x063A7370: 530300b4  cbz x19, #0x63a73d8
0x063A7374: 489a00d0  adrp x8, #0x76f1000
0x063A7378: 083540f9  ldr x8, [x8, #0x68]
0x063A737C: e00313aa  mov x0, x19
0x063A7380: 010140f9  ldr x1, [x8]
0x063A7384: 80e66197  bl #0x3c20d84
0x063A7388: e10300aa  mov x1, x0
0x063A738C: 800200f9  str x0, [x20]
0x063A7390: e00314aa  mov x0, x20
0x063A7394: 8c653797  bl #0x31809c4
0x063A7398: 880240f9  ldr x8, [x20]
0x063A739C: 680000b4  cbz x8, #0x63a73a8
0x063A73A0: 20008052  movz w0, #0x1
0x063A73A4: 0a000014  b #0x63a73cc
0x063A73A8: a89600f0  adrp x8, #0x767e000
0x063A73AC: 08d142f9  ldr x8, [x8, #0x5a0]
0x063A73B0: e00313aa  mov x0, x19
0x063A73B4: 010140f9  ldr x1, [x8]
0x063A73B8: 73e66197  bl #0x3c20d84
0x063A73BC: 800000b4  cbz x0, #0x63a73cc
0x063A73C0: 08e84039  ldrb w8, [x0, #0x3a]
0x063A73C4: 1f010071  cmp w8, #0
0x063A73C8: e0079f1a  cset w0, ne
0x063A73CC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x063A73D0: fe57c2a8  ldp x30, x21, [sp], #0x20
0x063A73D4: c0035fd6  ret
0x063A73D8: 35663797  bl #0x3180cac

; RVA 0x63A73DC | protected bool IsCooldownBlocked(Entity entity) { }
; bytes=28 sha256=de0e291f2b7fe18d8c30caae0f818db806834bf37f40ac3ce1ed3a1a4f8b5051 status=arm64_complete_bound indexed_start=True
0x063A73DC: fe0f1ff8  str x30, [sp, #-0x10]!
0x063A73E0: e2230091  add x2, sp, #8
0x063A73E4: ff0700f9  str xzr, [sp, #8]
0x063A73E8: d3ffff97  bl #0x63a7334
0x063A73EC: 00000012  and w0, w0, #1
0x063A73F0: fe0741f8  ldr x30, [sp], #0x10
0x063A73F4: c0035fd6  ret

; RVA 0x63A73F8 | protected bool IsCooldownBlocked(ComponentBase component) { }
; bytes=40 sha256=51b2df8901993716465df94618e888808e0bd32b2385f96745e01b15eb6aa9a6 status=arm64_complete_bound indexed_start=True
0x063A73F8: fe0f1ff8  str x30, [sp, #-0x10]!
0x063A73FC: ff0700f9  str xzr, [sp, #8]
0x063A7400: e10000b4  cbz x1, #0x63a741c
0x063A7404: 210840f9  ldr x1, [x1, #0x10]
0x063A7408: e2230091  add x2, sp, #8
0x063A740C: caffff97  bl #0x63a7334
0x063A7410: 00000012  and w0, w0, #1
0x063A7414: fe0741f8  ldr x30, [sp], #0x10
0x063A7418: c0035fd6  ret
0x063A741C: 24663797  bl #0x3180cac

; RVA 0x63A7420 | protected bool IsCooldownBlocked(ComponentBase component, out CooldownBlockComponent cooldownBlockComponent) { }
; bytes=24 sha256=304915af81bb0f8ccc61943c78715f2ec4713464a89371763dafa975e3e3e648 status=arm64_complete_bound indexed_start=True
0x063A7420: fe0f1ff8  str x30, [sp, #-0x10]!
0x063A7424: 810000b4  cbz x1, #0x63a7434
0x063A7428: 210840f9  ldr x1, [x1, #0x10]
0x063A742C: fe0741f8  ldr x30, [sp], #0x10
0x063A7430: c1ffff17  b #0x63a7334
0x063A7434: 1e663797  bl #0x3180cac

; RVA 0x63A7438 | protected bool IsUnlockBlocked(ComponentBase component) { }
; bytes=68 sha256=7a8b52dfeebd30742ffcdb5436d8aad3feea71bf21dc2a0ef9c11bbb6c67f349 status=arm64_complete_bound indexed_start=True
0x063A7438: fe0f1ff8  str x30, [sp, #-0x10]!
0x063A743C: ff0700f9  str xzr, [sp, #8]
0x063A7440: c10100b4  cbz x1, #0x63a7478
0x063A7444: 210840f9  ldr x1, [x1, #0x10]
0x063A7448: e2230091  add x2, sp, #8
0x063A744C: baffff97  bl #0x63a7334
0x063A7450: e0000036  tbz w0, #0, #0x63a746c
0x063A7454: e80740f9  ldr x8, [sp, #8]
0x063A7458: a80000b4  cbz x8, #0x63a746c
0x063A745C: 08814039  ldrb w8, [x8, #0x20]
0x063A7460: 1f010071  cmp w8, #0
0x063A7464: e0079f1a  cset w0, ne
0x063A7468: 02000014  b #0x63a7470
0x063A746C: e0031f2a  mov w0, wzr
0x063A7470: fe0741f8  ldr x30, [sp], #0x10
0x063A7474: c0035fd6  ret
0x063A7478: 0d663797  bl #0x3180cac

; RVA 0x63A747C | private void GamePausedSignalFired(GamePauseSignal signal) { }
; bytes=44 sha256=e9f3483677d5f3631dcc460887a0b018ea833dac7424308e793d0ecef09dcc41 status=arm64_complete_bound indexed_start=True
0x063A747C: fe0f1ff8  str x30, [sp, #-0x10]!
0x063A7480: 210100b4  cbz x1, #0x63a74a4
0x063A7484: 29404039  ldrb w9, [x1, #0x10]
0x063A7488: 080040f9  ldr x8, [x0]
0x063A748C: 69000034  cbz w9, #0x63a7498
0x063A7490: 02855ca9  ldp x2, x1, [x8, #0x1c8]
0x063A7494: 02000014  b #0x63a749c
0x063A7498: 02855da9  ldp x2, x1, [x8, #0x1d8]
0x063A749C: fe0741f8  ldr x30, [sp], #0x10
0x063A74A0: 40001fd6  br x2
0x063A74A4: 02663797  bl #0x3180cac

; RVA 0x63A74A8 | private void OnAllSystemsInitialized() { }
; bytes=152 sha256=24e6e5d38426ba49a2ee8e0208939bb36555a332fc5adc48834c984f1eee0a59 status=arm64_complete_bound indexed_start=True
0x063A74A8: fe0f1df8  str x30, [sp, #-0x30]!
0x063A74AC: f65701a9  stp x22, x21, [sp, #0x10]
0x063A74B0: f44f02a9  stp x20, x19, [sp, #0x20]
0x063A74B4: f5cb00f0  adrp x21, #0x7d26000
0x063A74B8: 369500f0  adrp x22, #0x764e000
0x063A74BC: 549a00d0  adrp x20, #0x76f1000
0x063A74C0: a8b24539  ldrb w8, [x21, #0x16c]
0x063A74C4: d6ae43f9  ldr x22, [x22, #0x758]
0x063A74C8: 943240f9  ldr x20, [x20, #0x60]
0x063A74CC: f30300aa  mov x19, x0
0x063A74D0: 28010037  tbnz w8, #0, #0x63a74f4
0x063A74D4: 209500f0  adrp x0, #0x764e000
0x063A74D8: 00ac43f9  ldr x0, [x0, #0x758]
0x063A74DC: 4f653797  bl #0x3180a18
0x063A74E0: 409a00d0  adrp x0, #0x76f1000
0x063A74E4: 003040f9  ldr x0, [x0, #0x60]
0x063A74E8: 4c653797  bl #0x3180a18
0x063A74EC: 28008052  movz w8, #0x1
0x063A74F0: a8b20539  strb w8, [x21, #0x16c]
0x063A74F4: c00240f9  ldr x0, [x22]
0x063A74F8: ea653797  bl #0x3180ca0
0x063A74FC: 820240f9  ldr x2, [x20]
0x063A7500: e10313aa  mov x1, x19
0x063A7504: e3031faa  mov x3, xzr
0x063A7508: f40300aa  mov x20, x0
0x063A750C: 8918c997  bl #0x55ed730
0x063A7510: e00313aa  mov x0, x19
0x063A7514: e10314aa  mov x1, x20
0x063A7518: 15feff97  bl #0x63a6d6c
0x063A751C: 680240f9  ldr x8, [x19]
0x063A7520: 29008052  movz w9, #0x1
0x063A7524: 69c60039  strb w9, [x19, #0x31]
0x063A7528: e00313aa  mov x0, x19
0x063A752C: 02855ba9  ldp x2, x1, [x8, #0x1b8]
0x063A7530: f44f42a9  ldp x20, x19, [sp, #0x20]
0x063A7534: f65741a9  ldp x22, x21, [sp, #0x10]
0x063A7538: fe0743f8  ldr x30, [sp], #0x30
0x063A753C: 40001fd6  br x2

; RVA 0x63A7540 | protected void .ctor() { }
; bytes=8 sha256=41f364cba857f25caee6a47c538b3ad07eec7bbe419103f84b4cf83c1c9c36f1 status=arm64_complete_bound indexed_start=True
0x063A7540: e1031faa  mov x1, xzr
0x063A7544: 2ecccc17  b #0x56da5fc

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DB6C18 | MergeEngine.ECS.Systems.SystemBase$$GetSystem<object>
; native signature: Il2CppObject* MergeEngine_ECS_Systems_SystemBase__GetSystem_object_ (MergeEngine_ECS_Systems_SystemBase_o* __this, const MethodInfo_3DB6C18* method);
; bytes=168 sha256=9705d1e81052151d7f1dbdc28f93786607fb37e4edce1b603435ef39304de7c2 status=arm64_complete_bound indexed_start=True
0x03DB6C18: fe0f1ef8  str x30, [sp, #-0x20]!
0x03DB6C1C: f44f01a9  stp x20, x19, [sp, #0x10]
0x03DB6C20: 281c40f9  ldr x8, [x1, #0x38]
0x03DB6C24: f40301aa  mov x20, x1
0x03DB6C28: f30300aa  mov x19, x0
0x03DB6C2C: 680000b5  cbnz x8, #0x3db6c38
0x03DB6C30: e00314aa  mov x0, x20
0x03DB6C34: 117fce97  bl #0x3156878
0x03DB6C38: 731240f9  ldr x19, [x19, #0x20]
0x03DB6C3C: 130400b4  cbz x19, #0x3db6cbc
0x03DB6C40: 891e40f9  ldr x9, [x20, #0x38]
0x03DB6C44: 680240f9  ldr x8, [x19]
0x03DB6C48: 340140f9  ldr x20, [x9]
0x03DB6C4C: 095d4279  ldrh w9, [x8, #0x12e]
0x03DB6C50: 811240f9  ldr x1, [x20, #0x20]
0x03DB6C54: 82a24079  ldrh w2, [x20, #0x50]
0x03DB6C58: 290100b4  cbz x9, #0x3db6c7c
0x03DB6C5C: 0a5940f9  ldr x10, [x8, #0xb0]
0x03DB6C60: 4a210091  add x10, x10, #8
0x03DB6C64: 4b815ff8  ldur x11, [x10, #-8]
0x03DB6C68: 7f0101eb  cmp x11, x1
0x03DB6C6C: e0000054  b.eq #0x3db6c88
0x03DB6C70: 290500f1  subs x9, x9, #1
0x03DB6C74: 4a410091  add x10, x10, #0x10
0x03DB6C78: 61ffff54  b.ne #0x3db6c64
0x03DB6C7C: e00313aa  mov x0, x19
0x03DB6C80: a47fce97  bl #0x3156b10
0x03DB6C84: 05000014  b #0x3db6c98
0x03DB6C88: 490140b9  ldr w9, [x10]
0x03DB6C8C: 2901020b  add w9, w9, w2
0x03DB6C90: 08d1298b  add x8, x8, w9, sxtw #4
0x03DB6C94: 00e10491  add x0, x8, #0x138
0x03DB6C98: 000440f9  ldr x0, [x0, #8]
0x03DB6C9C: e10314aa  mov x1, x20
0x03DB6CA0: ba27cf97  bl #0x3180b88
0x03DB6CA4: e10300aa  mov x1, x0
0x03DB6CA8: 020440f9  ldr x2, [x0, #8]
0x03DB6CAC: e00313aa  mov x0, x19
0x03DB6CB0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03DB6CB4: fe0742f8  ldr x30, [sp], #0x20
0x03DB6CB8: 40001fd6  br x2
0x03DB6CBC: fc27cf97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DB6CC0 | MergeEngine.ECS.Systems.SystemBase$$RemoveSystem<object>
; native signature: bool MergeEngine_ECS_Systems_SystemBase__RemoveSystem_object_ (MergeEngine_ECS_Systems_SystemBase_o* __this, const MethodInfo_3DB6CC0* method);
; bytes=168 sha256=04bdc8acc481afb3f7cde21ba29ff5ec57d50cc36a2188ea8d4931c888a32181 status=arm64_complete_bound indexed_start=True
0x03DB6CC0: fe0f1ef8  str x30, [sp, #-0x20]!
0x03DB6CC4: f44f01a9  stp x20, x19, [sp, #0x10]
0x03DB6CC8: 281c40f9  ldr x8, [x1, #0x38]
0x03DB6CCC: f40301aa  mov x20, x1
0x03DB6CD0: f30300aa  mov x19, x0
0x03DB6CD4: 680000b5  cbnz x8, #0x3db6ce0
0x03DB6CD8: e00314aa  mov x0, x20
0x03DB6CDC: e77ece97  bl #0x3156878
0x03DB6CE0: 731240f9  ldr x19, [x19, #0x20]
0x03DB6CE4: 130400b4  cbz x19, #0x3db6d64
0x03DB6CE8: 891e40f9  ldr x9, [x20, #0x38]
0x03DB6CEC: 680240f9  ldr x8, [x19]
0x03DB6CF0: 340140f9  ldr x20, [x9]
0x03DB6CF4: 095d4279  ldrh w9, [x8, #0x12e]
0x03DB6CF8: 811240f9  ldr x1, [x20, #0x20]
0x03DB6CFC: 82a24079  ldrh w2, [x20, #0x50]
0x03DB6D00: 290100b4  cbz x9, #0x3db6d24
0x03DB6D04: 0a5940f9  ldr x10, [x8, #0xb0]
0x03DB6D08: 4a210091  add x10, x10, #8
0x03DB6D0C: 4b815ff8  ldur x11, [x10, #-8]
0x03DB6D10: 7f0101eb  cmp x11, x1
0x03DB6D14: e0000054  b.eq #0x3db6d30
0x03DB6D18: 290500f1  subs x9, x9, #1
0x03DB6D1C: 4a410091  add x10, x10, #0x10
0x03DB6D20: 61ffff54  b.ne #0x3db6d0c
0x03DB6D24: e00313aa  mov x0, x19
0x03DB6D28: 7a7fce97  bl #0x3156b10
0x03DB6D2C: 05000014  b #0x3db6d40
0x03DB6D30: 490140b9  ldr w9, [x10]
0x03DB6D34: 2901020b  add w9, w9, w2
0x03DB6D38: 08d1298b  add x8, x8, w9, sxtw #4
0x03DB6D3C: 00e10491  add x0, x8, #0x138
0x03DB6D40: 000440f9  ldr x0, [x0, #8]
0x03DB6D44: e10314aa  mov x1, x20
0x03DB6D48: 9027cf97  bl #0x3180b88
0x03DB6D4C: e10300aa  mov x1, x0
0x03DB6D50: 020440f9  ldr x2, [x0, #8]
0x03DB6D54: e00313aa  mov x0, x19
0x03DB6D58: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03DB6D5C: fe0742f8  ldr x30, [sp], #0x20
0x03DB6D60: 40001fd6  br x2
0x03DB6D64: d227cf97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DB68FC | MergeEngine.ECS.Systems.SystemBase$$GetComponent<object>
; native signature: Il2CppObject* MergeEngine_ECS_Systems_SystemBase__GetComponent_object_ (MergeEngine_ECS_Systems_SystemBase_o* __this, const MethodInfo_3DB68FC* method);
; bytes=168 sha256=3b177639103530d28df326c89b38c4a1d1eccdd455fd99a456d4eb064be67d74 status=arm64_complete_bound indexed_start=True
0x03DB68FC: fe0f1ef8  str x30, [sp, #-0x20]!
0x03DB6900: f44f01a9  stp x20, x19, [sp, #0x10]
0x03DB6904: 281c40f9  ldr x8, [x1, #0x38]
0x03DB6908: f40301aa  mov x20, x1
0x03DB690C: f30300aa  mov x19, x0
0x03DB6910: 680000b5  cbnz x8, #0x3db691c
0x03DB6914: e00314aa  mov x0, x20
0x03DB6918: d87fce97  bl #0x3156878
0x03DB691C: 730a40f9  ldr x19, [x19, #0x10]
0x03DB6920: 130400b4  cbz x19, #0x3db69a0
0x03DB6924: 891e40f9  ldr x9, [x20, #0x38]
0x03DB6928: 680240f9  ldr x8, [x19]
0x03DB692C: 340140f9  ldr x20, [x9]
0x03DB6930: 095d4279  ldrh w9, [x8, #0x12e]
0x03DB6934: 811240f9  ldr x1, [x20, #0x20]
0x03DB6938: 82a24079  ldrh w2, [x20, #0x50]
0x03DB693C: 290100b4  cbz x9, #0x3db6960
0x03DB6940: 0a5940f9  ldr x10, [x8, #0xb0]
0x03DB6944: 4a210091  add x10, x10, #8
0x03DB6948: 4b815ff8  ldur x11, [x10, #-8]
0x03DB694C: 7f0101eb  cmp x11, x1
0x03DB6950: e0000054  b.eq #0x3db696c
0x03DB6954: 290500f1  subs x9, x9, #1
0x03DB6958: 4a410091  add x10, x10, #0x10
0x03DB695C: 61ffff54  b.ne #0x3db6948
0x03DB6960: e00313aa  mov x0, x19
0x03DB6964: 6b80ce97  bl #0x3156b10
0x03DB6968: 05000014  b #0x3db697c
0x03DB696C: 490140b9  ldr w9, [x10]
0x03DB6970: 2901020b  add w9, w9, w2
0x03DB6974: 08d1298b  add x8, x8, w9, sxtw #4
0x03DB6978: 00e10491  add x0, x8, #0x138
0x03DB697C: 000440f9  ldr x0, [x0, #8]
0x03DB6980: e10314aa  mov x1, x20
0x03DB6984: 8128cf97  bl #0x3180b88
0x03DB6988: e10300aa  mov x1, x0
0x03DB698C: 020440f9  ldr x2, [x0, #8]
0x03DB6990: e00313aa  mov x0, x19
0x03DB6994: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03DB6998: fe0742f8  ldr x30, [sp], #0x20
0x03DB699C: 40001fd6  br x2
0x03DB69A0: c328cf97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DB69A4 | MergeEngine.ECS.Systems.SystemBase$$GetComponent<__Il2CppFullySharedGenericType>
; native signature: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o MergeEngine_ECS_Systems_SystemBase__GetComponent___Il2CppFullySharedGenericType_ (MergeEngine_ECS_Systems_SystemBase_o* __this, const MethodInfo_3DB69A4* method);
; bytes=292 sha256=183dde035b8bd94005383ac329f9b50ab30a408d920dcf1ad8ddfd7aa17aaa7b status=arm64_complete_bound indexed_start=True
0x03DB69A4: fd7bbca9  stp x29, x30, [sp, #-0x40]!
0x03DB69A8: f85f01a9  stp x24, x23, [sp, #0x10]
0x03DB69AC: f65702a9  stp x22, x21, [sp, #0x20]
0x03DB69B0: f44f03a9  stp x20, x19, [sp, #0x30]
0x03DB69B4: fd030091  mov x29, sp
0x03DB69B8: ff4300d1  sub sp, sp, #0x10
0x03DB69BC: 58d03bd5  mrs x24, tpidr_el0
0x03DB69C0: 081740f9  ldr x8, [x24, #0x28]
0x03DB69C4: f30301aa  mov x19, x1
0x03DB69C8: f60300aa  mov x22, x0
0x03DB69CC: a8831ff8  stur x8, [x29, #-8]
0x03DB69D0: 481c40f9  ldr x8, [x2, #0x38]
0x03DB69D4: a80000b5  cbnz x8, #0x3db69e8
0x03DB69D8: e00302aa  mov x0, x2
0x03DB69DC: f40302aa  mov x20, x2
0x03DB69E0: a67fce97  bl #0x3156878
0x03DB69E4: 881e40f9  ldr x8, [x20, #0x38]
0x03DB69E8: 090540f9  ldr x9, [x8, #8]
0x03DB69EC: 34fd40b9  ldr w20, [x9, #0xfc]
0x03DB69F0: e9030091  mov x9, sp
0x03DB69F4: 8a3e0091  add x10, x20, #0xf
0x03DB69F8: 4a717c92  and x10, x10, #0x1fffffff0
0x03DB69FC: 35010acb  sub x21, x9, x10
0x03DB6A00: bf020091  mov sp, x21
0x03DB6A04: d60a40f9  ldr x22, [x22, #0x10]
0x03DB6A08: d60500b4  cbz x22, #0x3db6ac0
0x03DB6A0C: 170140f9  ldr x23, [x8]
0x03DB6A10: c80240f9  ldr x8, [x22]
0x03DB6A14: e11240f9  ldr x1, [x23, #0x20]
0x03DB6A18: 095d4279  ldrh w9, [x8, #0x12e]
0x03DB6A1C: e2a24079  ldrh w2, [x23, #0x50]
0x03DB6A20: 290100b4  cbz x9, #0x3db6a44
0x03DB6A24: 0a5940f9  ldr x10, [x8, #0xb0]
0x03DB6A28: 4a210091  add x10, x10, #8
0x03DB6A2C: 4b815ff8  ldur x11, [x10, #-8]
0x03DB6A30: 7f0101eb  cmp x11, x1
0x03DB6A34: e0000054  b.eq #0x3db6a50
0x03DB6A38: 290500f1  subs x9, x9, #1
0x03DB6A3C: 4a410091  add x10, x10, #0x10
0x03DB6A40: 61ffff54  b.ne #0x3db6a2c
0x03DB6A44: e00316aa  mov x0, x22
0x03DB6A48: 3280ce97  bl #0x3156b10
0x03DB6A4C: 05000014  b #0x3db6a60
0x03DB6A50: 490140b9  ldr w9, [x10]
0x03DB6A54: 2901020b  add w9, w9, w2
0x03DB6A58: 08d1298b  add x8, x8, w9, sxtw #4
0x03DB6A5C: 00e10491  add x0, x8, #0x138
0x03DB6A60: 000440f9  ldr x0, [x0, #8]
0x03DB6A64: e10317aa  mov x1, x23
0x03DB6A68: 4828cf97  bl #0x3180b88
0x03DB6A6C: b5031ff8  stur x21, [x29, #-0x10]
0x03DB6A70: e10300aa  mov x1, x0
0x03DB6A74: 00a040a9  ldp x0, x8, [x0, #8]
0x03DB6A78: a34300d1  sub x3, x29, #0x10
0x03DB6A7C: e20316aa  mov x2, x22
0x03DB6A80: e40315aa  mov x4, x21
0x03DB6A84: 00013fd6  blr x8
0x03DB6A88: e00313aa  mov x0, x19
0x03DB6A8C: e10315aa  mov x1, x21
0x03DB6A90: e20314aa  mov x2, x20
0x03DB6A94: b75fd094  bl #0x71ce970
0x03DB6A98: 081740f9  ldr x8, [x24, #0x28]
0x03DB6A9C: a9835ff8  ldur x9, [x29, #-8]
0x03DB6AA0: 1f0109eb  cmp x8, x9
0x03DB6AA4: 01010054  b.ne #0x3db6ac4
0x03DB6AA8: bf030091  mov sp, x29
0x03DB6AAC: f44f43a9  ldp x20, x19, [sp, #0x30]
0x03DB6AB0: f65742a9  ldp x22, x21, [sp, #0x20]
0x03DB6AB4: f85f41a9  ldp x24, x23, [sp, #0x10]
0x03DB6AB8: fd7bc4a8  ldp x29, x30, [sp], #0x40
0x03DB6ABC: c0035fd6  ret
0x03DB6AC0: 7b28cf97  bl #0x3180cac
0x03DB6AC4: b35fd094  bl #0x71ce990

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DB6AC8 | MergeEngine.ECS.Systems.SystemBase$$GetComponents<object>
; native signature: System_Collections_ObjectModel_ReadOnlyCollection_TComponent__o* MergeEngine_ECS_Systems_SystemBase__GetComponents_object_ (MergeEngine_ECS_Systems_SystemBase_o* __this, const MethodInfo_3DB6AC8* method);
; bytes=168 sha256=de642deef7378e141730c9aa2a62ee567aab1586c767ff9d60177de41034242d status=arm64_complete_bound indexed_start=True
0x03DB6AC8: fe0f1ef8  str x30, [sp, #-0x20]!
0x03DB6ACC: f44f01a9  stp x20, x19, [sp, #0x10]
0x03DB6AD0: 281c40f9  ldr x8, [x1, #0x38]
0x03DB6AD4: f40301aa  mov x20, x1
0x03DB6AD8: f30300aa  mov x19, x0
0x03DB6ADC: 680000b5  cbnz x8, #0x3db6ae8
0x03DB6AE0: e00314aa  mov x0, x20
0x03DB6AE4: 657fce97  bl #0x3156878
0x03DB6AE8: 730a40f9  ldr x19, [x19, #0x10]
0x03DB6AEC: 130400b4  cbz x19, #0x3db6b6c
0x03DB6AF0: 891e40f9  ldr x9, [x20, #0x38]
0x03DB6AF4: 680240f9  ldr x8, [x19]
0x03DB6AF8: 340140f9  ldr x20, [x9]
0x03DB6AFC: 095d4279  ldrh w9, [x8, #0x12e]
0x03DB6B00: 811240f9  ldr x1, [x20, #0x20]
0x03DB6B04: 82a24079  ldrh w2, [x20, #0x50]
0x03DB6B08: 290100b4  cbz x9, #0x3db6b2c
0x03DB6B0C: 0a5940f9  ldr x10, [x8, #0xb0]
0x03DB6B10: 4a210091  add x10, x10, #8
0x03DB6B14: 4b815ff8  ldur x11, [x10, #-8]
0x03DB6B18: 7f0101eb  cmp x11, x1
0x03DB6B1C: e0000054  b.eq #0x3db6b38
0x03DB6B20: 290500f1  subs x9, x9, #1
0x03DB6B24: 4a410091  add x10, x10, #0x10
0x03DB6B28: 61ffff54  b.ne #0x3db6b14
0x03DB6B2C: e00313aa  mov x0, x19
0x03DB6B30: f87fce97  bl #0x3156b10
0x03DB6B34: 05000014  b #0x3db6b48
0x03DB6B38: 490140b9  ldr w9, [x10]
0x03DB6B3C: 2901020b  add w9, w9, w2
0x03DB6B40: 08d1298b  add x8, x8, w9, sxtw #4
0x03DB6B44: 00e10491  add x0, x8, #0x138
0x03DB6B48: 000440f9  ldr x0, [x0, #8]
0x03DB6B4C: e10314aa  mov x1, x20
0x03DB6B50: 0e28cf97  bl #0x3180b88
0x03DB6B54: e10300aa  mov x1, x0
0x03DB6B58: 020440f9  ldr x2, [x0, #8]
0x03DB6B5C: e00313aa  mov x0, x19
0x03DB6B60: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03DB6B64: fe0742f8  ldr x30, [sp], #0x20
0x03DB6B68: 40001fd6  br x2
0x03DB6B6C: 5028cf97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DB6B70 | MergeEngine.ECS.Systems.SystemBase$$GetComponents<__Il2CppFullySharedGenericType>
; native signature: System_Collections_ObjectModel_ReadOnlyCollection_TComponent__o* MergeEngine_ECS_Systems_SystemBase__GetComponents___Il2CppFullySharedGenericType_ (MergeEngine_ECS_Systems_SystemBase_o* __this, const MethodInfo_3DB6B70* method);
; bytes=168 sha256=083573c3d961fdf80567ab738062d68e951526220e465f19dc998dbf10963d80 status=arm64_complete_bound indexed_start=True
0x03DB6B70: fe0f1ef8  str x30, [sp, #-0x20]!
0x03DB6B74: f44f01a9  stp x20, x19, [sp, #0x10]
0x03DB6B78: 281c40f9  ldr x8, [x1, #0x38]
0x03DB6B7C: f40301aa  mov x20, x1
0x03DB6B80: f30300aa  mov x19, x0
0x03DB6B84: 680000b5  cbnz x8, #0x3db6b90
0x03DB6B88: e00314aa  mov x0, x20
0x03DB6B8C: 3b7fce97  bl #0x3156878
0x03DB6B90: 730a40f9  ldr x19, [x19, #0x10]
0x03DB6B94: 130400b4  cbz x19, #0x3db6c14
0x03DB6B98: 891e40f9  ldr x9, [x20, #0x38]
0x03DB6B9C: 680240f9  ldr x8, [x19]
0x03DB6BA0: 340140f9  ldr x20, [x9]
0x03DB6BA4: 095d4279  ldrh w9, [x8, #0x12e]
0x03DB6BA8: 811240f9  ldr x1, [x20, #0x20]
0x03DB6BAC: 82a24079  ldrh w2, [x20, #0x50]
0x03DB6BB0: 290100b4  cbz x9, #0x3db6bd4
0x03DB6BB4: 0a5940f9  ldr x10, [x8, #0xb0]
0x03DB6BB8: 4a210091  add x10, x10, #8
0x03DB6BBC: 4b815ff8  ldur x11, [x10, #-8]
0x03DB6BC0: 7f0101eb  cmp x11, x1
0x03DB6BC4: e0000054  b.eq #0x3db6be0
0x03DB6BC8: 290500f1  subs x9, x9, #1
0x03DB6BCC: 4a410091  add x10, x10, #0x10
0x03DB6BD0: 61ffff54  b.ne #0x3db6bbc
0x03DB6BD4: e00313aa  mov x0, x19
0x03DB6BD8: ce7fce97  bl #0x3156b10
0x03DB6BDC: 05000014  b #0x3db6bf0
0x03DB6BE0: 490140b9  ldr w9, [x10]
0x03DB6BE4: 2901020b  add w9, w9, w2
0x03DB6BE8: 08d1298b  add x8, x8, w9, sxtw #4
0x03DB6BEC: 00e10491  add x0, x8, #0x138
0x03DB6BF0: 000440f9  ldr x0, [x0, #8]
0x03DB6BF4: e10314aa  mov x1, x20
0x03DB6BF8: e427cf97  bl #0x3180b88
0x03DB6BFC: e10300aa  mov x1, x0
0x03DB6C00: 020440f9  ldr x2, [x0, #8]
0x03DB6C04: e00313aa  mov x0, x19
0x03DB6C08: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03DB6C0C: fe0742f8  ldr x30, [sp], #0x20
0x03DB6C10: 40001fd6  br x2
0x03DB6C14: 2628cf97  bl #0x3180cac

