; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 905 .BoardQueueSystem.<>c__DisplayClass41_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6664878 | public void .ctor() { }
; bytes=8 sha256=ea439a554268ebe9d1bd896077c018ea6bee39a31e1e8a224d24bd235c1bfaa4 status=arm64_complete_bound indexed_start=True
0x06664878: e1031faa  mov x1, xzr
0x0666487C: 60d7c117  b #0x56da5fc

; RVA 0x6666C54 | internal bool <TryDequeueRewardItem>b__0(QueuedItem x) { }
; bytes=304 sha256=6a78b647af21e5e884509227f090a165ce042cd8995b01c02e4265f0a66b3891 status=arm64_complete_bound indexed_start=True
0x06666C54: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06666C58: f44f01a9  stp x20, x19, [sp, #0x10]
0x06666C5C: 15b600d0  adrp x21, #0x7d28000
0x06666C60: a8fe4239  ldrb w8, [x21, #0xbf]
0x06666C64: f40301aa  mov x20, x1
0x06666C68: f30300aa  mov x19, x0
0x06666C6C: 28010037  tbnz w8, #0, #0x6666c90
0x06666C70: 408000f0  adrp x0, #0x7671000
0x06666C74: 00c443f9  ldr x0, [x0, #0x788]
0x06666C78: 68672c97  bl #0x3180a18
0x06666C7C: 808000f0  adrp x0, #0x7679000
0x06666C80: 001044f9  ldr x0, [x0, #0x820]
0x06666C84: 65672c97  bl #0x3180a18
0x06666C88: 28008052  movz w8, #0x1
0x06666C8C: a8fe0239  strb w8, [x21, #0xbf]
0x06666C90: 940700b4  cbz x20, #0x6666d80
0x06666C94: 940a40f9  ldr x20, [x20, #0x10]
0x06666C98: 540700b4  cbz x20, #0x6666d80
0x06666C9C: 8a8000f0  adrp x10, #0x7679000
0x06666CA0: 880240f9  ldr x8, [x20]
0x06666CA4: 4a1144f9  ldr x10, [x10, #0x820]
0x06666CA8: 095d4279  ldrh w9, [x8, #0x12e]
0x06666CAC: 410140f9  ldr x1, [x10]
0x06666CB0: 290100b4  cbz x9, #0x6666cd4
0x06666CB4: 0a5940f9  ldr x10, [x8, #0xb0]
0x06666CB8: 4a210091  add x10, x10, #8
0x06666CBC: 4b815ff8  ldur x11, [x10, #-8]
0x06666CC0: 7f0101eb  cmp x11, x1
0x06666CC4: 00010054  b.eq #0x6666ce4
0x06666CC8: 290500f1  subs x9, x9, #1
0x06666CCC: 4a410091  add x10, x10, #0x10
0x06666CD0: 61ffff54  b.ne #0x6666cbc
0x06666CD4: e00314aa  mov x0, x20
0x06666CD8: e2031f2a  mov w2, wzr
0x06666CDC: 8dbf2b97  bl #0x3156b10
0x06666CE0: 04000014  b #0x6666cf0
0x06666CE4: 490180b9  ldrsw x9, [x10]
0x06666CE8: 0811098b  add x8, x8, x9, lsl #4
0x06666CEC: 00e10491  add x0, x8, #0x138
0x06666CF0: 080440a9  ldp x8, x1, [x0]
0x06666CF4: e00314aa  mov x0, x20
0x06666CF8: 00013fd6  blr x8
0x06666CFC: 740a40f9  ldr x20, [x19, #0x10]
0x06666D00: 140400b4  cbz x20, #0x6666d80
0x06666D04: 4a8000f0  adrp x10, #0x7671000
0x06666D08: 880240f9  ldr x8, [x20]
0x06666D0C: 4ac543f9  ldr x10, [x10, #0x788]
0x06666D10: f30300aa  mov x19, x0
0x06666D14: 095d4279  ldrh w9, [x8, #0x12e]
0x06666D18: 410140f9  ldr x1, [x10]
0x06666D1C: 290100b4  cbz x9, #0x6666d40
0x06666D20: 0a5940f9  ldr x10, [x8, #0xb0]
0x06666D24: 4a210091  add x10, x10, #8
0x06666D28: 4b815ff8  ldur x11, [x10, #-8]
0x06666D2C: 7f0101eb  cmp x11, x1
0x06666D30: 00010054  b.eq #0x6666d50
0x06666D34: 290500f1  subs x9, x9, #1
0x06666D38: 4a410091  add x10, x10, #0x10
0x06666D3C: 61ffff54  b.ne #0x6666d28
0x06666D40: e00314aa  mov x0, x20
0x06666D44: e2031f2a  mov w2, wzr
0x06666D48: 72bf2b97  bl #0x3156b10
0x06666D4C: 04000014  b #0x6666d5c
0x06666D50: 490180b9  ldrsw x9, [x10]
0x06666D54: 0811098b  add x8, x8, x9, lsl #4
0x06666D58: 00e10491  add x0, x8, #0x138
0x06666D5C: 080440a9  ldp x8, x1, [x0]
0x06666D60: e00314aa  mov x0, x20
0x06666D64: 00013fd6  blr x8
0x06666D68: e10300aa  mov x1, x0
0x06666D6C: e00313aa  mov x0, x19
0x06666D70: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06666D74: e2031faa  mov x2, xzr
0x06666D78: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06666D7C: bd0eba17  b #0x54ea870
0x06666D80: cb672c97  bl #0x3180cac

