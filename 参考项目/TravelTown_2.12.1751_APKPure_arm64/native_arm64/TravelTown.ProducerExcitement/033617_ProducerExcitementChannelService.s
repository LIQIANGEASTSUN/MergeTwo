; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 33617 Merger.ProducerExcitement.Services.ProducerExcitementChannelService
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6AD4EF4 | protected ProducerExcitementCreatedChannelListener get_ExcitementReceivedChannelListener() { }
; bytes=8 sha256=62c64bd585db7a91917843362bb75aa8dd20b002bce4874891b0b3ec8fd242b9 status=arm64_complete_bound indexed_start=True
0x06AD4EF4: 002440f9  ldr x0, [x0, #0x48]
0x06AD4EF8: c0035fd6  ret

; RVA 0x6AD4EFC | protected override void InitializeService() { }
; bytes=260 sha256=83c552b1cadc684d56def989ecd66c02bc399a5fe0e172ad28212f7b952a5867 status=arm64_complete_bound indexed_start=True
0x06AD4EFC: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x06AD4F00: f65701a9  stp x22, x21, [sp, #0x10]
0x06AD4F04: f44f02a9  stp x20, x19, [sp, #0x20]
0x06AD4F08: b39200d0  adrp x19, #0x7d2a000
0x06AD4F0C: 17630090  adrp x23, #0x7734000
0x06AD4F10: 68226b39  ldrb w8, [x19, #0xac8]
0x06AD4F14: f7a241f9  ldr x23, [x23, #0x340]
0x06AD4F18: f40300aa  mov x20, x0
0x06AD4F1C: 28010037  tbnz w8, #0, #0x6ad4f40
0x06AD4F20: 405d0090  adrp x0, #0x767c000
0x06AD4F24: 00a043f9  ldr x0, [x0, #0x740]
0x06AD4F28: bcae1a97  bl #0x3180a18
0x06AD4F2C: 00630090  adrp x0, #0x7734000
0x06AD4F30: 00a041f9  ldr x0, [x0, #0x340]
0x06AD4F34: b9ae1a97  bl #0x3180a18
0x06AD4F38: 28008052  movz w8, #0x1
0x06AD4F3C: 68222b39  strb w8, [x19, #0xac8]
0x06AD4F40: e00314aa  mov x0, x20
0x06AD4F44: e1031faa  mov x1, xzr
0x06AD4F48: 1dd2f797  bl #0x68c97bc
0x06AD4F4C: e00240f9  ldr x0, [x23]
0x06AD4F50: 954e43a9  ldp x21, x19, [x20, #0x30]
0x06AD4F54: 962240f9  ldr x22, [x20, #0x40]
0x06AD4F58: 52af1a97  bl #0x3180ca0
0x06AD4F5C: e10313aa  mov x1, x19
0x06AD4F60: e20315aa  mov x2, x21
0x06AD4F64: e30316aa  mov x3, x22
0x06AD4F68: f70300aa  mov x23, x0
0x06AD4F6C: 25000094  bl #0x6ad5000
0x06AD4F70: 978e04f8  str x23, [x20, #0x48]!
0x06AD4F74: e00314aa  mov x0, x20
0x06AD4F78: e10317aa  mov x1, x23
0x06AD4F7C: 92ae1a97  bl #0x31809c4
0x06AD4F80: 93025ef8  ldur x19, [x20, #-0x20]
0x06AD4F84: d30300b4  cbz x19, #0x6ad4ffc
0x06AD4F88: 4a5d0090  adrp x10, #0x767c000
0x06AD4F8C: 680240f9  ldr x8, [x19]
0x06AD4F90: 4aa143f9  ldr x10, [x10, #0x740]
0x06AD4F94: 940240f9  ldr x20, [x20]
0x06AD4F98: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD4F9C: 410140f9  ldr x1, [x10]
0x06AD4FA0: 290100b4  cbz x9, #0x6ad4fc4
0x06AD4FA4: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD4FA8: 4a210091  add x10, x10, #8
0x06AD4FAC: 4b815ff8  ldur x11, [x10, #-8]
0x06AD4FB0: 7f0101eb  cmp x11, x1
0x06AD4FB4: 00010054  b.eq #0x6ad4fd4
0x06AD4FB8: 290500f1  subs x9, x9, #1
0x06AD4FBC: 4a410091  add x10, x10, #0x10
0x06AD4FC0: 61ffff54  b.ne #0x6ad4fac
0x06AD4FC4: e00313aa  mov x0, x19
0x06AD4FC8: e2031f2a  mov w2, wzr
0x06AD4FCC: d1061a97  bl #0x3156b10
0x06AD4FD0: 04000014  b #0x6ad4fe0
0x06AD4FD4: 490180b9  ldrsw x9, [x10]
0x06AD4FD8: 0811098b  add x8, x8, x9, lsl #4
0x06AD4FDC: 00e10491  add x0, x8, #0x138
0x06AD4FE0: 030840a9  ldp x3, x2, [x0]
0x06AD4FE4: e00313aa  mov x0, x19
0x06AD4FE8: e10314aa  mov x1, x20
0x06AD4FEC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06AD4FF0: f65741a9  ldp x22, x21, [sp, #0x10]
0x06AD4FF4: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x06AD4FF8: 60001fd6  br x3
0x06AD4FFC: 2caf1a97  bl #0x3180cac

; RVA 0x6AD5060 | protected override void DisposeService() { }
; bytes=184 sha256=86b9f484535dd36ad1d56a0344cfd38697f7451759078ca06a522138ee1e22f3 status=arm64_complete_bound indexed_start=True
0x06AD5060: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06AD5064: f44f01a9  stp x20, x19, [sp, #0x10]
0x06AD5068: b49200b0  adrp x20, #0x7d2a000
0x06AD506C: 88266b39  ldrb w8, [x20, #0xac9]
0x06AD5070: f30300aa  mov x19, x0
0x06AD5074: c8000037  tbnz w8, #0, #0x6ad508c
0x06AD5078: 205d00f0  adrp x0, #0x767c000
0x06AD507C: 00a043f9  ldr x0, [x0, #0x740]
0x06AD5080: 66ae1a97  bl #0x3180a18
0x06AD5084: 28008052  movz w8, #0x1
0x06AD5088: 88262b39  strb w8, [x20, #0xac9]
0x06AD508C: 741640f9  ldr x20, [x19, #0x28]
0x06AD5090: 340400b4  cbz x20, #0x6ad5114
0x06AD5094: 2a5d00f0  adrp x10, #0x767c000
0x06AD5098: 880240f9  ldr x8, [x20]
0x06AD509C: 4aa143f9  ldr x10, [x10, #0x740]
0x06AD50A0: 752640f9  ldr x21, [x19, #0x48]
0x06AD50A4: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD50A8: 410140f9  ldr x1, [x10]
0x06AD50AC: 290100b4  cbz x9, #0x6ad50d0
0x06AD50B0: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD50B4: 4a210091  add x10, x10, #8
0x06AD50B8: 4b815ff8  ldur x11, [x10, #-8]
0x06AD50BC: 7f0101eb  cmp x11, x1
0x06AD50C0: 00010054  b.eq #0x6ad50e0
0x06AD50C4: 290500f1  subs x9, x9, #1
0x06AD50C8: 4a410091  add x10, x10, #0x10
0x06AD50CC: 61ffff54  b.ne #0x6ad50b8
0x06AD50D0: 22008052  movz w2, #0x1
0x06AD50D4: e00314aa  mov x0, x20
0x06AD50D8: 8e061a97  bl #0x3156b10
0x06AD50DC: 05000014  b #0x6ad50f0
0x06AD50E0: 490140b9  ldr w9, [x10]
0x06AD50E4: 29050011  add w9, w9, #1
0x06AD50E8: 08d1298b  add x8, x8, w9, sxtw #4
0x06AD50EC: 00e10491  add x0, x8, #0x138
0x06AD50F0: 080840a9  ldp x8, x2, [x0]
0x06AD50F4: e00314aa  mov x0, x20
0x06AD50F8: e10315aa  mov x1, x21
0x06AD50FC: 00013fd6  blr x8
0x06AD5100: e00313aa  mov x0, x19
0x06AD5104: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06AD5108: e1031faa  mov x1, xzr
0x06AD510C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06AD5110: acd1f717  b #0x68c97c0
0x06AD5114: e6ae1a97  bl #0x3180cac

; RVA 0x6AD5118 | public void .ctor() { }
; bytes=8 sha256=c4dc764bda02573f2e5d34f3f6a6a1a928bf4da40f94bfe2dddc472a83771ef8 status=arm64_complete_bound indexed_start=True
0x06AD5118: e1031faa  mov x1, xzr
0x06AD511C: aad1f717  b #0x68c97c4

