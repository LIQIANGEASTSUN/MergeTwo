; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 33296 Merger.MergeBoardQueue.Services.MergeBoardItemRewardDequeueStrategyRegistrar
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A57A04 | public void Initialize() { }
; bytes=168 sha256=b09ec43878a85ab20a136c07abc339751479f3954b794eb1fa5fdd799a0bcc23 status=arm64_complete_bound indexed_start=True
0x06A57A04: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A57A08: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A57A0C: 939600f0  adrp x19, #0x7d2a000
0x06A57A10: 680a5839  ldrb w8, [x19, #0x602]
0x06A57A14: f40300aa  mov x20, x0
0x06A57A18: c8000037  tbnz w8, #0, #0x6a57a30
0x06A57A1C: 006400d0  adrp x0, #0x76d9000
0x06A57A20: 007844f9  ldr x0, [x0, #0x8f0]
0x06A57A24: fda31c97  bl #0x3180a18
0x06A57A28: 28008052  movz w8, #0x1
0x06A57A2C: 680a1839  strb w8, [x19, #0x602]
0x06A57A30: 930a40f9  ldr x19, [x20, #0x10]
0x06A57A34: b30300b4  cbz x19, #0x6a57aa8
0x06A57A38: 0a6400d0  adrp x10, #0x76d9000
0x06A57A3C: 680240f9  ldr x8, [x19]
0x06A57A40: 4a7944f9  ldr x10, [x10, #0x8f0]
0x06A57A44: 940e40f9  ldr x20, [x20, #0x18]
0x06A57A48: 095d4279  ldrh w9, [x8, #0x12e]
0x06A57A4C: 410140f9  ldr x1, [x10]
0x06A57A50: 290100b4  cbz x9, #0x6a57a74
0x06A57A54: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A57A58: 4a210091  add x10, x10, #8
0x06A57A5C: 4b815ff8  ldur x11, [x10, #-8]
0x06A57A60: 7f0101eb  cmp x11, x1
0x06A57A64: 00010054  b.eq #0x6a57a84
0x06A57A68: 290500f1  subs x9, x9, #1
0x06A57A6C: 4a410091  add x10, x10, #0x10
0x06A57A70: 61ffff54  b.ne #0x6a57a5c
0x06A57A74: e00313aa  mov x0, x19
0x06A57A78: e2031f2a  mov w2, wzr
0x06A57A7C: 25fc1b97  bl #0x3156b10
0x06A57A80: 04000014  b #0x6a57a90
0x06A57A84: 490180b9  ldrsw x9, [x10]
0x06A57A88: 0811098b  add x8, x8, x9, lsl #4
0x06A57A8C: 00e10491  add x0, x8, #0x138
0x06A57A90: 030840a9  ldp x3, x2, [x0]
0x06A57A94: e00313aa  mov x0, x19
0x06A57A98: e10314aa  mov x1, x20
0x06A57A9C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A57AA0: fe0742f8  ldr x30, [sp], #0x20
0x06A57AA4: 60001fd6  br x3
0x06A57AA8: 81a41c97  bl #0x3180cac

; RVA 0x6A57AAC | public void Dispose() { }
; bytes=172 sha256=52a39484a84b36979915ed7dd0b32685c30af4b031beb920a659d58b366ffa27 status=arm64_complete_bound indexed_start=True
0x06A57AAC: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A57AB0: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A57AB4: 939600f0  adrp x19, #0x7d2a000
0x06A57AB8: 680e5839  ldrb w8, [x19, #0x603]
0x06A57ABC: f40300aa  mov x20, x0
0x06A57AC0: c8000037  tbnz w8, #0, #0x6a57ad8
0x06A57AC4: 006400d0  adrp x0, #0x76d9000
0x06A57AC8: 007844f9  ldr x0, [x0, #0x8f0]
0x06A57ACC: d3a31c97  bl #0x3180a18
0x06A57AD0: 28008052  movz w8, #0x1
0x06A57AD4: 680e1839  strb w8, [x19, #0x603]
0x06A57AD8: 930a40f9  ldr x19, [x20, #0x10]
0x06A57ADC: d30300b4  cbz x19, #0x6a57b54
0x06A57AE0: 0a6400d0  adrp x10, #0x76d9000
0x06A57AE4: 680240f9  ldr x8, [x19]
0x06A57AE8: 4a7944f9  ldr x10, [x10, #0x8f0]
0x06A57AEC: 940e40f9  ldr x20, [x20, #0x18]
0x06A57AF0: 095d4279  ldrh w9, [x8, #0x12e]
0x06A57AF4: 410140f9  ldr x1, [x10]
0x06A57AF8: 290100b4  cbz x9, #0x6a57b1c
0x06A57AFC: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A57B00: 4a210091  add x10, x10, #8
0x06A57B04: 4b815ff8  ldur x11, [x10, #-8]
0x06A57B08: 7f0101eb  cmp x11, x1
0x06A57B0C: 00010054  b.eq #0x6a57b2c
0x06A57B10: 290500f1  subs x9, x9, #1
0x06A57B14: 4a410091  add x10, x10, #0x10
0x06A57B18: 61ffff54  b.ne #0x6a57b04
0x06A57B1C: 22008052  movz w2, #0x1
0x06A57B20: e00313aa  mov x0, x19
0x06A57B24: fbfb1b97  bl #0x3156b10
0x06A57B28: 05000014  b #0x6a57b3c
0x06A57B2C: 490140b9  ldr w9, [x10]
0x06A57B30: 29050011  add w9, w9, #1
0x06A57B34: 08d1298b  add x8, x8, w9, sxtw #4
0x06A57B38: 00e10491  add x0, x8, #0x138
0x06A57B3C: 030840a9  ldp x3, x2, [x0]
0x06A57B40: e00313aa  mov x0, x19
0x06A57B44: e10314aa  mov x1, x20
0x06A57B48: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A57B4C: fe0742f8  ldr x30, [sp], #0x20
0x06A57B50: 60001fd6  br x3
0x06A57B54: 56a41c97  bl #0x3180cac

; RVA 0x6A57B58 | public void .ctor() { }
; bytes=8 sha256=ea9e045a1333085fc295241347ef494b62e13161176adfce7b3f11683fade715 status=arm64_complete_bound indexed_start=True
0x06A57B58: e1031faa  mov x1, xzr
0x06A57B5C: a80ab217  b #0x56da5fc

