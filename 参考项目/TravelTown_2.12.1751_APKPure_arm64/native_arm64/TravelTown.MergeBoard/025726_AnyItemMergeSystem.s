; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25726 Merger.MergeBoard.Systems.AnyItemMergeSystem
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A64B6C | public void Tick(TickContext context) { }
; bytes=1220 sha256=0168b9b70c95d36c705229e9d58190d294143d7dac8333bfe2c6e0ee4e974091 status=arm64_complete_bound indexed_start=True
0x06A64B6C: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x06A64B70: fc6f01a9  stp x28, x27, [sp, #0x10]
0x06A64B74: fa6702a9  stp x26, x25, [sp, #0x20]
0x06A64B78: f85f03a9  stp x24, x23, [sp, #0x30]
0x06A64B7C: f65704a9  stp x22, x21, [sp, #0x40]
0x06A64B80: f44f05a9  stp x20, x19, [sp, #0x50]
0x06A64B84: ff030ad1  sub sp, sp, #0x280
0x06A64B88: 48d03bd5  mrs x8, tpidr_el0
0x06A64B8C: e80700f9  str x8, [sp, #8]
0x06A64B90: 081540f9  ldr x8, [x8, #0x28]
0x06A64B94: 3a9600d0  adrp x26, #0x7d2a000
0x06A64B98: 79660090  adrp x25, #0x7730000
0x06A64B9C: 536600f0  adrp x19, #0x772f000
0x06A64BA0: e83f01f9  str x8, [sp, #0x278]
0x06A64BA4: 76660090  adrp x22, #0x7730000
0x06A64BA8: 78660090  adrp x24, #0x7730000
0x06A64BAC: 77660090  adrp x23, #0x7730000
0x06A64BB0: 486b5a39  ldrb w8, [x26, #0x69a]
0x06A64BB4: 39ef44f9  ldr x25, [x25, #0x9d8]
0x06A64BB8: 733647f9  ldr x19, [x19, #0xe68]
0x06A64BBC: d6f244f9  ldr x22, [x22, #0x9e0]
0x06A64BC0: 18f744f9  ldr x24, [x24, #0x9e8]
0x06A64BC4: f7fa44f9  ldr x23, [x23, #0x9f0]
0x06A64BC8: f40301aa  mov x20, x1
0x06A64BCC: f50300aa  mov x21, x0
0x06A64BD0: c8030037  tbnz w8, #0, #0x6a64c48
0x06A64BD4: 60660090  adrp x0, #0x7730000
0x06A64BD8: 00f044f9  ldr x0, [x0, #0x9e0]
0x06A64BDC: 8f6f1c97  bl #0x3180a18
0x06A64BE0: 60660090  adrp x0, #0x7730000
0x06A64BE4: 00ec44f9  ldr x0, [x0, #0x9d8]
0x06A64BE8: 8c6f1c97  bl #0x3180a18
0x06A64BEC: 406600f0  adrp x0, #0x772f000
0x06A64BF0: 003447f9  ldr x0, [x0, #0xe68]
0x06A64BF4: 896f1c97  bl #0x3180a18
0x06A64BF8: 405f00d0  adrp x0, #0x764e000
0x06A64BFC: 006444f9  ldr x0, [x0, #0x8c8]
0x06A64C00: 866f1c97  bl #0x3180a18
0x06A64C04: 60660090  adrp x0, #0x7730000
0x06A64C08: 00fc44f9  ldr x0, [x0, #0x9f8]
0x06A64C0C: 836f1c97  bl #0x3180a18
0x06A64C10: 60660090  adrp x0, #0x7730000
0x06A64C14: 000045f9  ldr x0, [x0, #0xa00]
0x06A64C18: 806f1c97  bl #0x3180a18
0x06A64C1C: 405f00d0  adrp x0, #0x764e000
0x06A64C20: 007044f9  ldr x0, [x0, #0x8e0]
0x06A64C24: 7d6f1c97  bl #0x3180a18
0x06A64C28: 60660090  adrp x0, #0x7730000
0x06A64C2C: 00f844f9  ldr x0, [x0, #0x9f0]
0x06A64C30: 7a6f1c97  bl #0x3180a18
0x06A64C34: 60660090  adrp x0, #0x7730000
0x06A64C38: 00f444f9  ldr x0, [x0, #0x9e8]
0x06A64C3C: 776f1c97  bl #0x3180a18
0x06A64C40: 28008052  movz w8, #0x1
0x06A64C44: 486b1a39  strb w8, [x26, #0x69a]
0x06A64C48: 00e4006f  movi v0.2d, #0000000000000000
0x06A64C4C: ff7302b9  str wzr, [sp, #0x270]
0x06A64C50: ff2302b9  str wzr, [sp, #0x220]
0x06A64C54: e0030ead  stp q0, q0, [sp, #0x1c0]
0x06A64C58: e08311ad  stp q0, q0, [sp, #0x230]
0x06A64C5C: e08312ad  stp q0, q0, [sp, #0x250]
0x06A64C60: e0030fad  stp q0, q0, [sp, #0x1e0]
0x06A64C64: e00310ad  stp q0, q0, [sp, #0x200]
0x06A64C68: 810240ad  ldp q1, q0, [x20]
0x06A64C6C: 200340f9  ldr x0, [x25]
0x06A64C70: e1030cad  stp q1, q0, [sp, #0x180]
0x06A64C74: b9d54697  bl #0x3c1a358
0x06A64C78: 680240f9  ldr x8, [x19]
0x06A64C7C: f30300aa  mov x19, x0
0x06A64C80: e00308aa  mov x0, x8
0x06A64C84: 07701c97  bl #0x3180ca0
0x06A64C88: c20240f9  ldr x2, [x22]
0x06A64C8C: e1031faa  mov x1, xzr
0x06A64C90: e3031faa  mov x3, xzr
0x06A64C94: f60300aa  mov x22, x0
0x06A64C98: 1cc4d297  bl #0x5f15d08
0x06A64C9C: e0074cad  ldp q0, q1, [sp, #0x180]
0x06A64CA0: 030340f9  ldr x3, [x24]
0x06A64CA4: e8830691  add x8, sp, #0x1a0
0x06A64CA8: e0830391  add x0, sp, #0xe0
0x06A64CAC: e10313aa  mov x1, x19
0x06A64CB0: e20316aa  mov x2, x22
0x06A64CB4: e00707ad  stp q0, q1, [sp, #0xe0]
0x06A64CB8: 63024c97  bl #0x3d65644
0x06A64CBC: e0074dad  ldp q0, q1, [sp, #0x1a0]
0x06A64CC0: e10240f9  ldr x1, [x23]
0x06A64CC4: e0030791  add x0, sp, #0x1c0
0x06A64CC8: e0070ead  stp q0, q1, [sp, #0x1c0]
0x06A64CCC: f4a16497  bl #0x438d49c
0x06A64CD0: a01400b4  cbz x0, #0x6a64f64
0x06A64CD4: 6a660090  adrp x10, #0x7730000
0x06A64CD8: 080040f9  ldr x8, [x0]
0x06A64CDC: 4afd44f9  ldr x10, [x10, #0x9f8]
0x06A64CE0: f30300aa  mov x19, x0
0x06A64CE4: 095d4279  ldrh w9, [x8, #0x12e]
0x06A64CE8: 410140f9  ldr x1, [x10]
0x06A64CEC: 290100b4  cbz x9, #0x6a64d10
0x06A64CF0: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A64CF4: 4a210091  add x10, x10, #8
0x06A64CF8: 4b815ff8  ldur x11, [x10, #-8]
0x06A64CFC: 7f0101eb  cmp x11, x1
0x06A64D00: 00010054  b.eq #0x6a64d20
0x06A64D04: 290500f1  subs x9, x9, #1
0x06A64D08: 4a410091  add x10, x10, #0x10
0x06A64D0C: 61ffff54  b.ne #0x6a64cf8
0x06A64D10: e00313aa  mov x0, x19
0x06A64D14: e2031f2a  mov w2, wzr
0x06A64D18: 7ec71b97  bl #0x3156b10
0x06A64D1C: 04000014  b #0x6a64d2c
0x06A64D20: 490180b9  ldrsw x9, [x10]
0x06A64D24: 0811098b  add x8, x8, x9, lsl #4
0x06A64D28: 00e10491  add x0, x8, #0x138
0x06A64D2C: 080440a9  ldp x8, x1, [x0]
0x06A64D30: e00313aa  mov x0, x19
0x06A64D34: 00013fd6  blr x8
0x06A64D38: f30300aa  mov x19, x0
0x06A64D3C: 601100b4  cbz x0, #0x6a64f68
0x06A64D40: 5d5f00d0  adrp x29, #0x764e000
0x06A64D44: 7c660090  adrp x28, #0x7730000
0x06A64D48: bd7344f9  ldr x29, [x29, #0x8e0]
0x06A64D4C: 9c0345f9  ldr x28, [x28, #0xa00]
0x06A64D50: e8830391  add x8, sp, #0xe0
0x06A64D54: e9430291  add x9, sp, #0x90
0x06A64D58: ea030191  add x10, sp, #0x40
0x06A64D5C: 16310091  add x22, x8, #0xc
0x06A64D60: 17710191  add x23, x8, #0x5c
0x06A64D64: 2b310091  add x11, x9, #0xc
0x06A64D68: 48310091  add x8, x10, #0xc
0x06A64D6C: e82f01a9  stp x8, x11, [sp, #0x10]
0x06A64D70: 680240f9  ldr x8, [x19]
0x06A64D74: a10340f9  ldr x1, [x29]
0x06A64D78: 095d4279  ldrh w9, [x8, #0x12e]
0x06A64D7C: 290100b4  cbz x9, #0x6a64da0
0x06A64D80: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A64D84: 4a210091  add x10, x10, #8
0x06A64D88: 4b815ff8  ldur x11, [x10, #-8]
0x06A64D8C: 7f0101eb  cmp x11, x1
0x06A64D90: 00010054  b.eq #0x6a64db0
0x06A64D94: 290500f1  subs x9, x9, #1
0x06A64D98: 4a410091  add x10, x10, #0x10
0x06A64D9C: 61ffff54  b.ne #0x6a64d88
0x06A64DA0: e00313aa  mov x0, x19
0x06A64DA4: e2031f2a  mov w2, wzr
0x06A64DA8: 5ac71b97  bl #0x3156b10
0x06A64DAC: 04000014  b #0x6a64dbc
0x06A64DB0: 490180b9  ldrsw x9, [x10]
0x06A64DB4: 0811098b  add x8, x8, x9, lsl #4
0x06A64DB8: 00e10491  add x0, x8, #0x138
0x06A64DBC: 080440a9  ldp x8, x1, [x0]
0x06A64DC0: e00313aa  mov x0, x19
0x06A64DC4: 00013fd6  blr x8
0x06A64DC8: e0070036  tbz w0, #0, #0x6a64ec4
0x06A64DCC: 680240f9  ldr x8, [x19]
0x06A64DD0: 810340f9  ldr x1, [x28]
0x06A64DD4: 095d4279  ldrh w9, [x8, #0x12e]
0x06A64DD8: 290100b4  cbz x9, #0x6a64dfc
0x06A64DDC: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A64DE0: 4a210091  add x10, x10, #8
0x06A64DE4: 4b815ff8  ldur x11, [x10, #-8]
0x06A64DE8: 7f0101eb  cmp x11, x1
0x06A64DEC: 00010054  b.eq #0x6a64e0c
0x06A64DF0: 290500f1  subs x9, x9, #1
0x06A64DF4: 4a410091  add x10, x10, #0x10
0x06A64DF8: 61ffff54  b.ne #0x6a64de4
0x06A64DFC: e00313aa  mov x0, x19
0x06A64E00: e2031f2a  mov w2, wzr
0x06A64E04: 43c71b97  bl #0x3156b10
0x06A64E08: 04000014  b #0x6a64e18
0x06A64E0C: 490180b9  ldrsw x9, [x10]
0x06A64E10: 0811098b  add x8, x8, x9, lsl #4
0x06A64E14: 00e10491  add x0, x8, #0x138
0x06A64E18: 090440a9  ldp x9, x1, [x0]
0x06A64E1C: e8830391  add x8, sp, #0xe0
0x06A64E20: e00313aa  mov x0, x19
0x06A64E24: 20013fd6  blr x9
0x06A64E28: fa7340f9  ldr x26, [sp, #0xe0]
0x06A64E2C: f8eb40b9  ldr w24, [sp, #0xe8]
0x06A64E30: e0c30891  add x0, sp, #0x230
0x06A64E34: 82088052  movz w2, #0x44
0x06A64E38: e10316aa  mov x1, x22
0x06A64E3C: cda61d94  bl #0x71ce970
0x06A64E40: fb9b40f9  ldr x27, [sp, #0x130]
0x06A64E44: f93b41b9  ldr w25, [sp, #0x138]
0x06A64E48: e0830791  add x0, sp, #0x1e0
0x06A64E4C: 82088052  movz w2, #0x44
0x06A64E50: e10317aa  mov x1, x23
0x06A64E54: c7a61d94  bl #0x71ce970
0x06A64E58: 1f03196b  cmp w24, w25
0x06A64E5C: a1f8ff54  b.ne #0x6a64d70
0x06A64E60: e00315aa  mov x0, x21
0x06A64E64: e1031aaa  mov x1, x26
0x06A64E68: e2031baa  mov x2, x27
0x06A64E6C: 71000094  bl #0x6a65030
0x06A64E70: 00f80736  tbz w0, #0, #0x6a64d70
0x06A64E74: e00f40f9  ldr x0, [sp, #0x18]
0x06A64E78: e1c30891  add x1, sp, #0x230
0x06A64E7C: 82088052  movz w2, #0x44
0x06A64E80: bca61d94  bl #0x71ce970
0x06A64E84: e00b40f9  ldr x0, [sp, #0x10]
0x06A64E88: e1830791  add x1, sp, #0x1e0
0x06A64E8C: 82088052  movz w2, #0x44
0x06A64E90: b8a61d94  bl #0x71ce970
0x06A64E94: 810240ad  ldp q1, q0, [x20]
0x06A64E98: fa4b00f9  str x26, [sp, #0x90]
0x06A64E9C: f89b00b9  str w24, [sp, #0x98]
0x06A64EA0: fb2300f9  str x27, [sp, #0x40]
0x06A64EA4: e10301ad  stp q1, q0, [sp, #0x20]
0x06A64EA8: f84b00b9  str w24, [sp, #0x48]
0x06A64EAC: e1430291  add x1, sp, #0x90
0x06A64EB0: e2030191  add x2, sp, #0x40
0x06A64EB4: e3830091  add x3, sp, #0x20
0x06A64EB8: e00315aa  mov x0, x21
0x06A64EBC: 8f000094  bl #0x6a650f8
0x06A64EC0: acffff17  b #0x6a64d70
0x06A64EC4: f4031faa  mov x20, xzr
0x06A64EC8: 330300b4  cbz x19, #0x6a64f2c
0x06A64ECC: 680240f9  ldr x8, [x19]
0x06A64ED0: 4a5f00d0  adrp x10, #0x764e000
0x06A64ED4: 095d4279  ldrh w9, [x8, #0x12e]
0x06A64ED8: 4a6544f9  ldr x10, [x10, #0x8c8]
0x06A64EDC: 410140f9  ldr x1, [x10]
0x06A64EE0: 290100b4  cbz x9, #0x6a64f04
0x06A64EE4: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A64EE8: 4a210091  add x10, x10, #8
0x06A64EEC: 4b815ff8  ldur x11, [x10, #-8]
0x06A64EF0: 7f0101eb  cmp x11, x1
0x06A64EF4: 00010054  b.eq #0x6a64f14
0x06A64EF8: 290500f1  subs x9, x9, #1
0x06A64EFC: 4a410091  add x10, x10, #0x10
0x06A64F00: 61ffff54  b.ne #0x6a64eec
0x06A64F04: e00313aa  mov x0, x19
0x06A64F08: e2031f2a  mov w2, wzr
0x06A64F0C: 01c71b97  bl #0x3156b10
0x06A64F10: 04000014  b #0x6a64f20
0x06A64F14: 490180b9  ldrsw x9, [x10]
0x06A64F18: 0811098b  add x8, x8, x9, lsl #4
0x06A64F1C: 00e10491  add x0, x8, #0x138
0x06A64F20: 080440a9  ldp x8, x1, [x0]
0x06A64F24: e00313aa  mov x0, x19
0x06A64F28: 00013fd6  blr x8
0x06A64F2C: 140200b5  cbnz x20, #0x6a64f6c
0x06A64F30: e80740f9  ldr x8, [sp, #8]
0x06A64F34: 081540f9  ldr x8, [x8, #0x28]
0x06A64F38: e93f41f9  ldr x9, [sp, #0x278]
0x06A64F3C: 1f0109eb  cmp x8, x9
0x06A64F40: a1010054  b.ne #0x6a64f74
0x06A64F44: ff030a91  add sp, sp, #0x280
0x06A64F48: f44f45a9  ldp x20, x19, [sp, #0x50]
0x06A64F4C: f65744a9  ldp x22, x21, [sp, #0x40]
0x06A64F50: f85f43a9  ldp x24, x23, [sp, #0x30]
0x06A64F54: fa6742a9  ldp x26, x25, [sp, #0x20]
0x06A64F58: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x06A64F5C: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x06A64F60: c0035fd6  ret
0x06A64F64: 526f1c97  bl #0x3180cac
0x06A64F68: 516f1c97  bl #0x3180cac
0x06A64F6C: e00314aa  mov x0, x20
0x06A64F70: 4d6f1c97  bl #0x3180ca4
0x06A64F74: 87a61d94  bl #0x71ce990
0x06A64F78: 04000014  b #0x6a64f88
0x06A64F7C: 03000014  b #0x6a64f88
0x06A64F80: 02000014  b #0x6a64f88
0x06A64F84: 01000014  b #0x6a64f88
0x06A64F88: f50300aa  mov x21, x0
0x06A64F8C: 3f040071  cmp w1, #1
0x06A64F90: c1000054  b.ne #0x6a64fa8
0x06A64F94: e00315aa  mov x0, x21
0x06A64F98: 5ea61d94  bl #0x71ce910
0x06A64F9C: 140040f9  ldr x20, [x0]
0x06A64FA0: 60a61d94  bl #0x71ce920
0x06A64FA4: c9ffff17  b #0x6a64ec8
0x06A64FA8: f4031faa  mov x20, xzr
0x06A64FAC: 02000014  b #0x6a64fb4
0x06A64FB0: f50300aa  mov x21, x0
0x06A64FB4: 330300b4  cbz x19, #0x6a65018
0x06A64FB8: 680240f9  ldr x8, [x19]
0x06A64FBC: 4a5f00d0  adrp x10, #0x764e000
0x06A64FC0: 095d4279  ldrh w9, [x8, #0x12e]
0x06A64FC4: 4a6544f9  ldr x10, [x10, #0x8c8]
0x06A64FC8: 410140f9  ldr x1, [x10]
0x06A64FCC: 290100b4  cbz x9, #0x6a64ff0
0x06A64FD0: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A64FD4: 4a210091  add x10, x10, #8
0x06A64FD8: 4b815ff8  ldur x11, [x10, #-8]
0x06A64FDC: 7f0101eb  cmp x11, x1
0x06A64FE0: 00010054  b.eq #0x6a65000
0x06A64FE4: 290500f1  subs x9, x9, #1
0x06A64FE8: 4a410091  add x10, x10, #0x10
0x06A64FEC: 61ffff54  b.ne #0x6a64fd8
0x06A64FF0: e00313aa  mov x0, x19
0x06A64FF4: e2031f2a  mov w2, wzr
0x06A64FF8: c6c61b97  bl #0x3156b10
0x06A64FFC: 04000014  b #0x6a6500c
0x06A65000: 490180b9  ldrsw x9, [x10]
0x06A65004: 0811098b  add x8, x8, x9, lsl #4
0x06A65008: 00e10491  add x0, x8, #0x138
0x06A6500C: 080440a9  ldp x8, x1, [x0]
0x06A65010: e00313aa  mov x0, x19
0x06A65014: 00013fd6  blr x8
0x06A65018: 740000b5  cbnz x20, #0x6a65024
0x06A6501C: e00315aa  mov x0, x21
0x06A65020: 4e022097  bl #0x3265958
0x06A65024: e00314aa  mov x0, x20
0x06A65028: 1f6f1c97  bl #0x3180ca4
0x06A6502C: 3a910e97  bl #0x2e09514

; RVA 0x6A65030 | private bool CanPerformMerge(Entity firstEntity, Entity secondEntity) { }
; bytes=200 sha256=3bef598d4158b67fc0ae40b600d6c397f5187f39cd358480e9f0440e35cca601 status=arm64_complete_bound indexed_start=True
0x06A65030: ff0301d1  sub sp, sp, #0x40
0x06A65034: fe0b00f9  str x30, [sp, #0x10]
0x06A65038: f65702a9  stp x22, x21, [sp, #0x20]
0x06A6503C: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A65040: 369600b0  adrp x22, #0x7d2a000
0x06A65044: c86e5a39  ldrb w8, [x22, #0x69b]
0x06A65048: f30302aa  mov x19, x2
0x06A6504C: f40301aa  mov x20, x1
0x06A65050: f50300aa  mov x21, x0
0x06A65054: c8000037  tbnz w8, #0, #0x6a6506c
0x06A65058: 406600f0  adrp x0, #0x7730000
0x06A6505C: 000445f9  ldr x0, [x0, #0xa08]
0x06A65060: 6e6e1c97  bl #0x3180a18
0x06A65064: 28008052  movz w8, #0x1
0x06A65068: c86e1a39  strb w8, [x22, #0x69b]
0x06A6506C: ff1b00b9  str wzr, [sp, #0x18]
0x06A65070: ff0b00b9  str wzr, [sp, #8]
0x06A65074: 140400b4  cbz x20, #0x6a650f4
0x06A65078: 566600f0  adrp x22, #0x7730000
0x06A6507C: d60645f9  ldr x22, [x22, #0xa08]
0x06A65080: e1630091  add x1, sp, #0x18
0x06A65084: e00314aa  mov x0, x20
0x06A65088: c20240f9  ldr x2, [x22]
0x06A6508C: f1e54697  bl #0x3c1e850
0x06A65090: 60010036  tbz w0, #0, #0x6a650bc
0x06A65094: 130300b4  cbz x19, #0x6a650f4
0x06A65098: c20240f9  ldr x2, [x22]
0x06A6509C: e1230091  add x1, sp, #8
0x06A650A0: e00313aa  mov x0, x19
0x06A650A4: ebe54697  bl #0x3c1e850
0x06A650A8: a0000036  tbz w0, #0, #0x6a650bc
0x06A650AC: e81b40b9  ldr w8, [sp, #0x18]
0x06A650B0: 48010034  cbz w8, #0x6a650d8
0x06A650B4: e80b40b9  ldr w8, [sp, #8]
0x06A650B8: 08010034  cbz w8, #0x6a650d8
0x06A650BC: e0031f2a  mov w0, wzr
0x06A650C0: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A650C4: f65742a9  ldp x22, x21, [sp, #0x20]
0x06A650C8: fe0b40f9  ldr x30, [sp, #0x10]
0x06A650CC: 00000012  and w0, w0, #1
0x06A650D0: ff030191  add sp, sp, #0x40
0x06A650D4: c0035fd6  ret
0x06A650D8: a01240f9  ldr x0, [x21, #0x20]
0x06A650DC: c00000b4  cbz x0, #0x6a650f4
0x06A650E0: e10314aa  mov x1, x20
0x06A650E4: e20313aa  mov x2, x19
0x06A650E8: e3031faa  mov x3, xzr
0x06A650EC: fa830094  bl #0x6a860d4
0x06A650F0: f4ffff17  b #0x6a650c0
0x06A650F4: ee6e1c97  bl #0x3180cac

; RVA 0x6A650F8 | private void PerformMerge(ValueTuple<Entity, BoardTilePositionComponent, MergeComponent, IdComponent> entity, ValueTuple<Entity, BoardTilePositionComponent, MergeComponent, IdComponent> otherEntity, TickContext context) { }
; bytes=864 sha256=82ebab67684074c334fb8b460c02da50d2de2aaea27c014095158a43388a5d7e status=arm64_complete_bound indexed_start=True
0x06A650F8: ff4304d1  sub sp, sp, #0x110
0x06A650FC: fd5b00f9  str x29, [sp, #0xb0]
0x06A65100: fe6f0ca9  stp x30, x27, [sp, #0xc0]
0x06A65104: fa670da9  stp x26, x25, [sp, #0xd0]
0x06A65108: f85f0ea9  stp x24, x23, [sp, #0xe0]
0x06A6510C: f6570fa9  stp x22, x21, [sp, #0xf0]
0x06A65110: f44f10a9  stp x20, x19, [sp, #0x100]
0x06A65114: 379600b0  adrp x23, #0x7d2a000
0x06A65118: e8725a39  ldrb w8, [x23, #0x69c]
0x06A6511C: f30303aa  mov x19, x3
0x06A65120: f60302aa  mov x22, x2
0x06A65124: f50301aa  mov x21, x1
0x06A65128: f40300aa  mov x20, x0
0x06A6512C: 68030037  tbnz w8, #0, #0x6a65198
0x06A65130: e0620090  adrp x0, #0x76c1000
0x06A65134: 005843f9  ldr x0, [x0, #0x6b0]
0x06A65138: 386e1c97  bl #0x3180a18
0x06A6513C: a0600090  adrp x0, #0x7679000
0x06A65140: 001044f9  ldr x0, [x0, #0x820]
0x06A65144: 356e1c97  bl #0x3180a18
0x06A65148: 406600d0  adrp x0, #0x772f000
0x06A6514C: 003c47f9  ldr x0, [x0, #0xe78]
0x06A65150: 326e1c97  bl #0x3180a18
0x06A65154: 406600f0  adrp x0, #0x7730000
0x06A65158: 000845f9  ldr x0, [x0, #0xa10]
0x06A6515C: 2f6e1c97  bl #0x3180a18
0x06A65160: 406600d0  adrp x0, #0x772f000
0x06A65164: 005447f9  ldr x0, [x0, #0xea8]
0x06A65168: 2c6e1c97  bl #0x3180a18
0x06A6516C: 406600f0  adrp x0, #0x7730000
0x06A65170: 000c45f9  ldr x0, [x0, #0xa18]
0x06A65174: 296e1c97  bl #0x3180a18
0x06A65178: 406600f0  adrp x0, #0x7730000
0x06A6517C: 001045f9  ldr x0, [x0, #0xa20]
0x06A65180: 266e1c97  bl #0x3180a18
0x06A65184: 405f00d0  adrp x0, #0x764f000
0x06A65188: 00ac40f9  ldr x0, [x0, #0x158]
0x06A6518C: 236e1c97  bl #0x3180a18
0x06A65190: 28008052  movz w8, #0x1
0x06A65194: e8721a39  strb w8, [x23, #0x69c]
0x06A65198: ff7f08a9  stp xzr, xzr, [sp, #0x80]
0x06A6519C: 801240f9  ldr x0, [x20, #0x20]
0x06A651A0: a01500b4  cbz x0, #0x6a65454
0x06A651A4: c20240f9  ldr x2, [x22]
0x06A651A8: a10240f9  ldr x1, [x21]
0x06A651AC: e3031faa  mov x3, xzr
0x06A651B0: 3e850094  bl #0x6a866a8
0x06A651B4: f70300aa  mov x23, x0
0x06A651B8: 400300b4  cbz x0, #0x6a65220
0x06A651BC: aa600090  adrp x10, #0x7679000
0x06A651C0: e80240f9  ldr x8, [x23]
0x06A651C4: 4a1144f9  ldr x10, [x10, #0x820]
0x06A651C8: 095d4279  ldrh w9, [x8, #0x12e]
0x06A651CC: 410140f9  ldr x1, [x10]
0x06A651D0: 290100b4  cbz x9, #0x6a651f4
0x06A651D4: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A651D8: 4a210091  add x10, x10, #8
0x06A651DC: 4b815ff8  ldur x11, [x10, #-8]
0x06A651E0: 7f0101eb  cmp x11, x1
0x06A651E4: 00010054  b.eq #0x6a65204
0x06A651E8: 290500f1  subs x9, x9, #1
0x06A651EC: 4a410091  add x10, x10, #0x10
0x06A651F0: 61ffff54  b.ne #0x6a651dc
0x06A651F4: e00317aa  mov x0, x23
0x06A651F8: e2031f2a  mov w2, wzr
0x06A651FC: 45c61b97  bl #0x3156b10
0x06A65200: 04000014  b #0x6a65210
0x06A65204: 490180b9  ldrsw x9, [x10]
0x06A65208: 0811098b  add x8, x8, x9, lsl #4
0x06A6520C: 00e10491  add x0, x8, #0x138
0x06A65210: 080440a9  ldp x8, x1, [x0]
0x06A65214: e00317aa  mov x0, x23
0x06A65218: 00013fd6  blr x8
0x06A6521C: f70300aa  mov x23, x0
0x06A65220: 980e40f9  ldr x24, [x20, #0x18]
0x06A65224: 981100b4  cbz x24, #0x6a65454
0x06A65228: ea620090  adrp x10, #0x76c1000
0x06A6522C: 080340f9  ldr x8, [x24]
0x06A65230: 4a5943f9  ldr x10, [x10, #0x6b0]
0x06A65234: 5b6600f0  adrp x27, #0x7730000
0x06A65238: 5a6600f0  adrp x26, #0x7730000
0x06A6523C: b90a40b9  ldr w25, [x21, #8]
0x06A65240: 095d4279  ldrh w9, [x8, #0x12e]
0x06A65244: 410140f9  ldr x1, [x10]
0x06A65248: 7b1345f9  ldr x27, [x27, #0xa20]
0x06A6524C: 5a0b45f9  ldr x26, [x26, #0xa10]
0x06A65250: 290100b4  cbz x9, #0x6a65274
0x06A65254: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A65258: 4a210091  add x10, x10, #8
0x06A6525C: 4b815ff8  ldur x11, [x10, #-8]
0x06A65260: 7f0101eb  cmp x11, x1
0x06A65264: 00010054  b.eq #0x6a65284
0x06A65268: 290500f1  subs x9, x9, #1
0x06A6526C: 4a410091  add x10, x10, #0x10
0x06A65270: 61ffff54  b.ne #0x6a6525c
0x06A65274: 22008052  movz w2, #0x1
0x06A65278: e00318aa  mov x0, x24
0x06A6527C: 25c61b97  bl #0x3156b10
0x06A65280: 05000014  b #0x6a65294
0x06A65284: 490140b9  ldr w9, [x10]
0x06A65288: 29050011  add w9, w9, #1
0x06A6528C: 08d1298b  add x8, x8, w9, sxtw #4
0x06A65290: 00e10491  add x0, x8, #0x138
0x06A65294: 081840a9  ldp x8, x6, [x0]
0x06A65298: 43008052  movz w3, #0x2
0x06A6529C: e00318aa  mov x0, x24
0x06A652A0: e10317aa  mov x1, x23
0x06A652A4: e203192a  mov w2, w25
0x06A652A8: e4031f2a  mov w4, wzr
0x06A652AC: e5031faa  mov x5, xzr
0x06A652B0: 00013fd6  blr x8
0x06A652B4: 610240ad  ldp q1, q0, [x19]
0x06A652B8: 630340f9  ldr x3, [x27]
0x06A652BC: f70300aa  mov x23, x0
0x06A652C0: e0430291  add x0, sp, #0x90
0x06A652C4: e10303ad  stp q1, q0, [sp, #0x60]
0x06A652C8: e00743ad  ldp q0, q1, [sp, #0x60]
0x06A652CC: e10317aa  mov x1, x23
0x06A652D0: e2031faa  mov x2, xzr
0x06A652D4: e08704ad  stp q0, q1, [sp, #0x90]
0x06A652D8: ee804d97  bl #0x3dc5690
0x06A652DC: 610240ad  ldp q1, q0, [x19]
0x06A652E0: e0030191  add x0, sp, #0x40
0x06A652E4: e10317aa  mov x1, x23
0x06A652E8: e2031faa  mov x2, xzr
0x06A652EC: e3031faa  mov x3, xzr
0x06A652F0: e10302ad  stp q1, q0, [sp, #0x40]
0x06A652F4: dbce0094  bl #0x6a98e60
0x06A652F8: 610240ad  ldp q1, q0, [x19]
0x06A652FC: e0830091  add x0, sp, #0x20
0x06A65300: e2031faa  mov x2, xzr
0x06A65304: e10301ad  stp q1, q0, [sp, #0x20]
0x06A65308: a10240f9  ldr x1, [x21]
0x06A6530C: 18cf0094  bl #0x6a98f6c
0x06A65310: 610240ad  ldp q1, q0, [x19]
0x06A65314: e0030091  mov x0, sp
0x06A65318: e2031faa  mov x2, xzr
0x06A6531C: e10300ad  stp q1, q0, [sp]
0x06A65320: c10240f9  ldr x1, [x22]
0x06A65324: 12cf0094  bl #0x6a98f6c
0x06A65328: 400340f9  ldr x0, [x26]
0x06A6532C: 780a40f9  ldr x24, [x19, #0x10]
0x06A65330: 5c6e1c97  bl #0x3180ca0
0x06A65334: e1031faa  mov x1, xzr
0x06A65338: f90300aa  mov x25, x0
0x06A6533C: a8d50094  bl #0x6a9a9dc
0x06A65340: e0031faa  mov x0, xzr
0x06A65344: d9a3b097  bl #0x568e2a8
0x06A65348: e00708a9  stp x0, x1, [sp, #0x80]
0x06A6534C: e0030291  add x0, sp, #0x80
0x06A65350: e1031faa  mov x1, xzr
0x06A65354: 3aacb097  bl #0x569043c
0x06A65358: f90700b4  cbz x25, #0x6a65454
0x06A6535C: e10300aa  mov x1, x0
0x06A65360: e00319aa  mov x0, x25
0x06A65364: 010c01f8  str x1, [x0, #0x10]!
0x06A65368: 976d1c97  bl #0x31809c4
0x06A6536C: a10240f9  ldr x1, [x21]
0x06A65370: e00319aa  mov x0, x25
0x06A65374: 018c01f8  str x1, [x0, #0x18]!
0x06A65378: 936d1c97  bl #0x31809c4
0x06A6537C: c10240f9  ldr x1, [x22]
0x06A65380: e00319aa  mov x0, x25
0x06A65384: 010c02f8  str x1, [x0, #0x20]!
0x06A65388: 8f6d1c97  bl #0x31809c4
0x06A6538C: f60319aa  mov x22, x25
0x06A65390: d78e02f8  str x23, [x22, #0x28]!
0x06A65394: e00316aa  mov x0, x22
0x06A65398: e10317aa  mov x1, x23
0x06A6539C: 8a6d1c97  bl #0x31809c4
0x06A653A0: a80a40b9  ldr w8, [x21, #8]
0x06A653A4: c80a00b9  str w8, [x22, #8]
0x06A653A8: 780500b4  cbz x24, #0x6a65454
0x06A653AC: 486600f0  adrp x8, #0x7730000
0x06A653B0: 080d45f9  ldr x8, [x8, #0xa18]
0x06A653B4: 555f00d0  adrp x21, #0x764f000
0x06A653B8: 566600d0  adrp x22, #0x772f000
0x06A653BC: e00318aa  mov x0, x24
0x06A653C0: 020140f9  ldr x2, [x8]
0x06A653C4: b5ae40f9  ldr x21, [x21, #0x158]
0x06A653C8: d63e47f9  ldr x22, [x22, #0xe78]
0x06A653CC: e10319aa  mov x1, x25
0x06A653D0: 05784d97  bl #0x3dc33e4
0x06A653D4: a20240f9  ldr x2, [x21]
0x06A653D8: 810a40f9  ldr x1, [x20, #0x10]
0x06A653DC: 730a40f9  ldr x19, [x19, #0x10]
0x06A653E0: e00317aa  mov x0, x23
0x06A653E4: e30302aa  mov x3, x2
0x06A653E8: e40302aa  mov x4, x2
0x06A653EC: e5031faa  mov x5, xzr
0x06A653F0: 51f70094  bl #0x6aa3134
0x06A653F4: c80240f9  ldr x8, [x22]
0x06A653F8: f50300aa  mov x21, x0
0x06A653FC: e00308aa  mov x0, x8
0x06A65400: 286e1c97  bl #0x3180ca0
0x06A65404: e10317aa  mov x1, x23
0x06A65408: e20315aa  mov x2, x21
0x06A6540C: e3031faa  mov x3, xzr
0x06A65410: f40300aa  mov x20, x0
0x06A65414: 05d50094  bl #0x6a9a828
0x06A65418: f30100b4  cbz x19, #0x6a65454
0x06A6541C: 486600d0  adrp x8, #0x772f000
0x06A65420: 085547f9  ldr x8, [x8, #0xea8]
0x06A65424: e00313aa  mov x0, x19
0x06A65428: e10314aa  mov x1, x20
0x06A6542C: 020140f9  ldr x2, [x8]
0x06A65430: ed774d97  bl #0x3dc33e4
0x06A65434: f44f50a9  ldp x20, x19, [sp, #0x100]
0x06A65438: f6574fa9  ldp x22, x21, [sp, #0xf0]
0x06A6543C: f85f4ea9  ldp x24, x23, [sp, #0xe0]
0x06A65440: fa674da9  ldp x26, x25, [sp, #0xd0]
0x06A65444: fe6f4ca9  ldp x30, x27, [sp, #0xc0]
0x06A65448: fd5b40f9  ldr x29, [sp, #0xb0]
0x06A6544C: ff430491  add sp, sp, #0x110
0x06A65450: c0035fd6  ret
0x06A65454: 166e1c97  bl #0x3180cac

; RVA 0x6A65458 | public void .ctor() { }
; bytes=8 sha256=81f8a0c9b42db4ae933d1f808db94456958fb5d18a612cdfee5b392396ed05d2 status=arm64_complete_bound indexed_start=True
0x06A65458: e1031faa  mov x1, xzr
0x06A6545C: 68d4b117  b #0x56da5fc

