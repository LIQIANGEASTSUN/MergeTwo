; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25741 Merger.MergeBoard.Systems.ImmediateToolsSystem
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A69CD4 | public void Tick(TickContext context) { }
; bytes=492 sha256=84c7d89e5e6cd50b2f84737efa17ce90da350f66d2c9d224910c050ead869218 status=arm64_complete_bound indexed_start=True
0x06A69CD4: fd7bbba9  stp x29, x30, [sp, #-0x50]!
0x06A69CD8: fa6701a9  stp x26, x25, [sp, #0x10]
0x06A69CDC: f85f02a9  stp x24, x23, [sp, #0x20]
0x06A69CE0: f65703a9  stp x22, x21, [sp, #0x30]
0x06A69CE4: f44f04a9  stp x20, x19, [sp, #0x40]
0x06A69CE8: ffc306d1  sub sp, sp, #0x1b0
0x06A69CEC: 1a9600b0  adrp x26, #0x7d2a000
0x06A69CF0: 396600f0  adrp x25, #0x7730000
0x06A69CF4: 356600d0  adrp x21, #0x772f000
0x06A69CF8: 366600d0  adrp x22, #0x772f000
0x06A69CFC: 386600f0  adrp x24, #0x7730000
0x06A69D00: 376600f0  adrp x23, #0x7730000
0x06A69D04: 48f35a39  ldrb w8, [x26, #0x6bc]
0x06A69D08: 390f47f9  ldr x25, [x25, #0xe18]
0x06A69D0C: b53647f9  ldr x21, [x21, #0xe68]
0x06A69D10: d62647f9  ldr x22, [x22, #0xe48]
0x06A69D14: 181347f9  ldr x24, [x24, #0xe20]
0x06A69D18: f71647f9  ldr x23, [x23, #0xe28]
0x06A69D1C: f40301aa  mov x20, x1
0x06A69D20: f30300aa  mov x19, x0
0x06A69D24: 48020037  tbnz w8, #0, #0x6a69d6c
0x06A69D28: 206600d0  adrp x0, #0x772f000
0x06A69D2C: 002447f9  ldr x0, [x0, #0xe48]
0x06A69D30: 3a5b1c97  bl #0x3180a18
0x06A69D34: 206600f0  adrp x0, #0x7730000
0x06A69D38: 000c47f9  ldr x0, [x0, #0xe18]
0x06A69D3C: 375b1c97  bl #0x3180a18
0x06A69D40: 206600d0  adrp x0, #0x772f000
0x06A69D44: 003447f9  ldr x0, [x0, #0xe68]
0x06A69D48: 345b1c97  bl #0x3180a18
0x06A69D4C: 206600f0  adrp x0, #0x7730000
0x06A69D50: 001447f9  ldr x0, [x0, #0xe28]
0x06A69D54: 315b1c97  bl #0x3180a18
0x06A69D58: 206600f0  adrp x0, #0x7730000
0x06A69D5C: 001047f9  ldr x0, [x0, #0xe20]
0x06A69D60: 2e5b1c97  bl #0x3180a18
0x06A69D64: 28008052  movz w8, #0x1
0x06A69D68: 48f31a39  strb w8, [x26, #0x6bc]
0x06A69D6C: 00e4006f  movi v0.2d, #0000000000000000
0x06A69D70: ffc300f9  str xzr, [sp, #0x180]
0x06A69D74: e0830cad  stp q0, q0, [sp, #0x190]
0x06A69D78: e0030bad  stp q0, q0, [sp, #0x160]
0x06A69D7C: e0030aad  stp q0, q0, [sp, #0x140]
0x06A69D80: e00309ad  stp q0, q0, [sp, #0x120]
0x06A69D84: 810240ad  ldp q1, q0, [x20]
0x06A69D88: 200340f9  ldr x0, [x25]
0x06A69D8C: e10308ad  stp q1, q0, [sp, #0x100]
0x06A69D90: 2cc34697  bl #0x3c1aa40
0x06A69D94: a80240f9  ldr x8, [x21]
0x06A69D98: f50300aa  mov x21, x0
0x06A69D9C: e00308aa  mov x0, x8
0x06A69DA0: c05b1c97  bl #0x3180ca0
0x06A69DA4: c20240f9  ldr x2, [x22]
0x06A69DA8: e1031faa  mov x1, xzr
0x06A69DAC: e3031faa  mov x3, xzr
0x06A69DB0: f60300aa  mov x22, x0
0x06A69DB4: d5afd297  bl #0x5f15d08
0x06A69DB8: e00748ad  ldp q0, q1, [sp, #0x100]
0x06A69DBC: 030340f9  ldr x3, [x24]
0x06A69DC0: e8430691  add x8, sp, #0x190
0x06A69DC4: e0430291  add x0, sp, #0x90
0x06A69DC8: e10315aa  mov x1, x21
0x06A69DCC: e20316aa  mov x2, x22
0x06A69DD0: e08704ad  stp q0, q1, [sp, #0x90]
0x06A69DD4: 3cf14b97  bl #0x3d662c4
0x06A69DD8: e20240f9  ldr x2, [x23]
0x06A69DDC: e0430691  add x0, sp, #0x190
0x06A69DE0: e1830491  add x1, sp, #0x120
0x06A69DE4: f5830491  add x21, sp, #0x120
0x06A69DE8: 17ae6497  bl #0x4395644
0x06A69DEC: c0050036  tbz w0, #0, #0x6a69ea4
0x06A69DF0: a0020191  add x0, x21, #0x40
0x06A69DF4: e1031faa  mov x1, xzr
0x06A69DF8: 5fc80094  bl #0x6a9bf74
0x06A69DFC: a0020036  tbz w0, #0, #0x6a69e50
0x06A69E00: 800640ad  ldp q0, q1, [x20]
0x06A69E04: f49340f9  ldr x20, [sp, #0x120]
0x06A69E08: f5db57a9  ldp x21, x22, [sp, #0x178]
0x06A69E0C: e0430291  add x0, sp, #0x90
0x06A69E10: e1830491  add x1, sp, #0x120
0x06A69E14: 020d8052  movz w2, #0x68
0x06A69E18: e08703ad  stp q0, q1, [sp, #0x70]
0x06A69E1C: d5921d94  bl #0x71ce970
0x06A69E20: e037c03d  ldr q0, [sp, #0xd0]
0x06A69E24: e87340f9  ldr x8, [sp, #0xe0]
0x06A69E28: e1c30191  add x1, sp, #0x70
0x06A69E2C: e5430191  add x5, sp, #0x50
0x06A69E30: e00313aa  mov x0, x19
0x06A69E34: e20314aa  mov x2, x20
0x06A69E38: e30315aa  mov x3, x21
0x06A69E3C: e40316aa  mov x4, x22
0x06A69E40: e017803d  str q0, [sp, #0x50]
0x06A69E44: e83300f9  str x8, [sp, #0x60]
0x06A69E48: 1e000094  bl #0x6a69ec0
0x06A69E4C: 16000014  b #0x6a69ea4
0x06A69E50: 800640ad  ldp q0, q1, [x20]
0x06A69E54: f49340f9  ldr x20, [sp, #0x120]
0x06A69E58: f5db57a9  ldp x21, x22, [sp, #0x178]
0x06A69E5C: e0430291  add x0, sp, #0x90
0x06A69E60: e1830491  add x1, sp, #0x120
0x06A69E64: 020d8052  movz w2, #0x68
0x06A69E68: f7430291  add x23, sp, #0x90
0x06A69E6C: e08701ad  stp q0, q1, [sp, #0x30]
0x06A69E70: c0921d94  bl #0x71ce970
0x06A69E74: e082c03c  ldur q0, [x23, #8]
0x06A69E78: e182c13c  ldur q1, [x23, #0x18]
0x06A69E7C: e282c23c  ldur q2, [x23, #0x28]
0x06A69E80: e1c30091  add x1, sp, #0x30
0x06A69E84: e5030091  mov x5, sp
0x06A69E88: e00313aa  mov x0, x19
0x06A69E8C: e20314aa  mov x2, x20
0x06A69E90: e30315aa  mov x3, x21
0x06A69E94: e40316aa  mov x4, x22
0x06A69E98: e00700ad  stp q0, q1, [sp]
0x06A69E9C: e20b803d  str q2, [sp, #0x20]
0x06A69EA0: 6f010094  bl #0x6a6a45c
0x06A69EA4: ffc30691  add sp, sp, #0x1b0
0x06A69EA8: f44f44a9  ldp x20, x19, [sp, #0x40]
0x06A69EAC: f65743a9  ldp x22, x21, [sp, #0x30]
0x06A69EB0: f85f42a9  ldp x24, x23, [sp, #0x20]
0x06A69EB4: fa6741a9  ldp x26, x25, [sp, #0x10]
0x06A69EB8: fd7bc5a8  ldp x29, x30, [sp], #0x50
0x06A69EBC: c0035fd6  ret

; RVA 0x6A69EC0 | private void CollectToolBox(TickContext context, Entity entity, PendingInteractionComponent pendingInteraction, ImmediateToolComponent immediateToolComponent) { }
; bytes=1436 sha256=c55662ef9ffabc8edf5933039c327c63879fdd2e7e47d54404eb2b5518ac18af status=arm64_complete_bound indexed_start=True
0x06A69EC0: ffc304d1  sub sp, sp, #0x130
0x06A69EC4: fd7b0da9  stp x29, x30, [sp, #0xd0]
0x06A69EC8: fc6f0ea9  stp x28, x27, [sp, #0xe0]
0x06A69ECC: fa670fa9  stp x26, x25, [sp, #0xf0]
0x06A69ED0: f85f10a9  stp x24, x23, [sp, #0x100]
0x06A69ED4: f65711a9  stp x22, x21, [sp, #0x110]
0x06A69ED8: f44f12a9  stp x20, x19, [sp, #0x120]
0x06A69EDC: e20700f9  str x2, [sp, #8]
0x06A69EE0: e3130aa9  stp x3, x4, [sp, #0xa0]
0x06A69EE4: 199600b0  adrp x25, #0x7d2a000
0x06A69EE8: 386300d0  adrp x24, #0x76cf000
0x06A69EEC: 376300d0  adrp x23, #0x76cf000
0x06A69EF0: 3a6600f0  adrp x26, #0x7730000
0x06A69EF4: 336600d0  adrp x19, #0x772f000
0x06A69EF8: 3b6600d0  adrp x27, #0x772f000
0x06A69EFC: 3c6600f0  adrp x28, #0x7730000
0x06A69F00: 3d6600f0  adrp x29, #0x7730000
0x06A69F04: 186b42f9  ldr x24, [x24, #0x4d0]
0x06A69F08: f76642f9  ldr x23, [x23, #0x4c8]
0x06A69F0C: 28f75a39  ldrb w8, [x25, #0x6bd]
0x06A69F10: 5a1b47f9  ldr x26, [x26, #0xe30]
0x06A69F14: 733647f9  ldr x19, [x19, #0xe68]
0x06A69F18: 7b2747f9  ldr x27, [x27, #0xe48]
0x06A69F1C: 9c1f47f9  ldr x28, [x28, #0xe38]
0x06A69F20: bd2347f9  ldr x29, [x29, #0xe40]
0x06A69F24: f50305aa  mov x21, x5
0x06A69F28: f40301aa  mov x20, x1
0x06A69F2C: f60300aa  mov x22, x0
0x06A69F30: e8070037  tbnz w8, #0, #0x6a6a02c
0x06A69F34: 206600d0  adrp x0, #0x772f000
0x06A69F38: 002447f9  ldr x0, [x0, #0xe48]
0x06A69F3C: b75a1c97  bl #0x3180a18
0x06A69F40: 206600f0  adrp x0, #0x7730000
0x06A69F44: 001847f9  ldr x0, [x0, #0xe30]
0x06A69F48: b45a1c97  bl #0x3180a18
0x06A69F4C: a06200f0  adrp x0, #0x76c0000
0x06A69F50: 006447f9  ldr x0, [x0, #0xec8]
0x06A69F54: b15a1c97  bl #0x3180a18
0x06A69F58: 206600f0  adrp x0, #0x7730000
0x06A69F5C: 007445f9  ldr x0, [x0, #0xae8]
0x06A69F60: ae5a1c97  bl #0x3180a18
0x06A69F64: 206600f0  adrp x0, #0x7730000
0x06A69F68: 002447f9  ldr x0, [x0, #0xe48]
0x06A69F6C: ab5a1c97  bl #0x3180a18
0x06A69F70: 206600d0  adrp x0, #0x772f000
0x06A69F74: 003447f9  ldr x0, [x0, #0xe68]
0x06A69F78: a85a1c97  bl #0x3180a18
0x06A69F7C: 206600f0  adrp x0, #0x7730000
0x06A69F80: 002847f9  ldr x0, [x0, #0xe50]
0x06A69F84: a55a1c97  bl #0x3180a18
0x06A69F88: 206600f0  adrp x0, #0x7730000
0x06A69F8C: 002c47f9  ldr x0, [x0, #0xe58]
0x06A69F90: a25a1c97  bl #0x3180a18
0x06A69F94: 206600d0  adrp x0, #0x772f000
0x06A69F98: 00ec41f9  ldr x0, [x0, #0x3d8]
0x06A69F9C: 9f5a1c97  bl #0x3180a18
0x06A69FA0: 206600f0  adrp x0, #0x7730000
0x06A69FA4: 003047f9  ldr x0, [x0, #0xe60]
0x06A69FA8: 9c5a1c97  bl #0x3180a18
0x06A69FAC: 806300d0  adrp x0, #0x76db000
0x06A69FB0: 002842f9  ldr x0, [x0, #0x450]
0x06A69FB4: 995a1c97  bl #0x3180a18
0x06A69FB8: 206300d0  adrp x0, #0x76cf000
0x06A69FBC: 006442f9  ldr x0, [x0, #0x4c8]
0x06A69FC0: 965a1c97  bl #0x3180a18
0x06A69FC4: 206300d0  adrp x0, #0x76cf000
0x06A69FC8: 006842f9  ldr x0, [x0, #0x4d0]
0x06A69FCC: 935a1c97  bl #0x3180a18
0x06A69FD0: 206600f0  adrp x0, #0x7730000
0x06A69FD4: 003447f9  ldr x0, [x0, #0xe68]
0x06A69FD8: 905a1c97  bl #0x3180a18
0x06A69FDC: 206600f0  adrp x0, #0x7730000
0x06A69FE0: 003847f9  ldr x0, [x0, #0xe70]
0x06A69FE4: 8d5a1c97  bl #0x3180a18
0x06A69FE8: 206600f0  adrp x0, #0x7730000
0x06A69FEC: 001c47f9  ldr x0, [x0, #0xe38]
0x06A69FF0: 8a5a1c97  bl #0x3180a18
0x06A69FF4: 206600f0  adrp x0, #0x7730000
0x06A69FF8: 003c47f9  ldr x0, [x0, #0xe78]
0x06A69FFC: 875a1c97  bl #0x3180a18
0x06A6A000: 206600d0  adrp x0, #0x7730000
0x06A6A004: 004047f9  ldr x0, [x0, #0xe80]
0x06A6A008: 845a1c97  bl #0x3180a18
0x06A6A00C: 206600d0  adrp x0, #0x7730000
0x06A6A010: 004447f9  ldr x0, [x0, #0xe88]
0x06A6A014: 815a1c97  bl #0x3180a18
0x06A6A018: 206600d0  adrp x0, #0x7730000
0x06A6A01C: 002047f9  ldr x0, [x0, #0xe40]
0x06A6A020: 7e5a1c97  bl #0x3180a18
0x06A6A024: 28008052  movz w8, #0x1
0x06A6A028: 28f71a39  strb w8, [x25, #0x6bd]
0x06A6A02C: 000340f9  ldr x0, [x24]
0x06A6A030: 00e4006f  movi v0.2d, #0000000000000000
0x06A6A034: ff4f00f9  str xzr, [sp, #0x98]
0x06A6A038: e08303ad  stp q0, q0, [sp, #0x70]
0x06A6A03C: 195b1c97  bl #0x3180ca0
0x06A6A040: e10240f9  ldr x1, [x23]
0x06A6A044: f70300aa  mov x23, x0
0x06A6A048: fc665797  bl #0x4043c38
0x06A6A04C: 800640ad  ldp q0, q1, [x20]
0x06A6A050: 400340f9  ldr x0, [x26]
0x06A6A054: b86640a9  ldp x24, x25, [x21]
0x06A6A058: e08701ad  stp q0, q1, [sp, #0x30]
0x06A6A05C: 43bf4697  bl #0x3c19d68
0x06A6A060: 680240f9  ldr x8, [x19]
0x06A6A064: fa0300aa  mov x26, x0
0x06A6A068: e00308aa  mov x0, x8
0x06A6A06C: 0d5b1c97  bl #0x3180ca0
0x06A6A070: 620340f9  ldr x2, [x27]
0x06A6A074: e1031faa  mov x1, xzr
0x06A6A078: e3031faa  mov x3, xzr
0x06A6A07C: fb0300aa  mov x27, x0
0x06A6A080: 22afd297  bl #0x5f15d08
0x06A6A084: e08741ad  ldp q0, q1, [sp, #0x30]
0x06A6A088: 830340f9  ldr x3, [x28]
0x06A6A08C: e8430191  add x8, sp, #0x50
0x06A6A090: e0c30291  add x0, sp, #0xb0
0x06A6A094: e1031aaa  mov x1, x26
0x06A6A098: e2031baa  mov x2, x27
0x06A6A09C: e08705ad  stp q0, q1, [sp, #0xb0]
0x06A6A0A0: e9ea4b97  bl #0x3d64c44
0x06A6A0A4: e18342ad  ldp q1, q0, [sp, #0x50]
0x06A6A0A8: a00340f9  ldr x0, [x29]
0x06A6A0AC: e18303ad  stp q1, q0, [sp, #0x70]
0x06A6A0B0: 08e040b9  ldr w8, [x0, #0xe0]
0x06A6A0B4: 68000035  cbnz w8, #0x6a6a0c0
0x06A6A0B8: b55a1c97  bl #0x3180b8c
0x06A6A0BC: a00340f9  ldr x0, [x29]
0x06A6A0C0: 085c40f9  ldr x8, [x0, #0xb8]
0x06A6A0C4: 3c6600d0  adrp x28, #0x7730000
0x06A6A0C8: 336600d0  adrp x19, #0x7730000
0x06A6A0CC: 1a0540f9  ldr x26, [x8, #8]
0x06A6A0D0: 9c3b47f9  ldr x28, [x28, #0xe70]
0x06A6A0D4: 733647f9  ldr x19, [x19, #0xe68]
0x06A6A0D8: fa0200b5  cbnz x26, #0x6a6a134
0x06A6A0DC: 08e040b9  ldr w8, [x0, #0xe0]
0x06A6A0E0: 68000035  cbnz w8, #0x6a6a0ec
0x06A6A0E4: aa5a1c97  bl #0x3180b8c
0x06A6A0E8: a00340f9  ldr x0, [x29]
0x06A6A0EC: 296600d0  adrp x9, #0x7730000
0x06A6A0F0: 085c40f9  ldr x8, [x0, #0xb8]
0x06A6A0F4: 292d47f9  ldr x9, [x9, #0xe58]
0x06A6A0F8: 1b0140f9  ldr x27, [x8]
0x06A6A0FC: 200140f9  ldr x0, [x9]
0x06A6A100: e85a1c97  bl #0x3180ca0
0x06A6A104: 286600d0  adrp x8, #0x7730000
0x06A6A108: 084147f9  ldr x8, [x8, #0xe80]
0x06A6A10C: e1031baa  mov x1, x27
0x06A6A110: e3031faa  mov x3, xzr
0x06A6A114: fa0300aa  mov x26, x0
0x06A6A118: 020140f9  ldr x2, [x8]
0x06A6A11C: 04919f97  bl #0x524e52c
0x06A6A120: a80340f9  ldr x8, [x29]
0x06A6A124: e1031aaa  mov x1, x26
0x06A6A128: 005d40f9  ldr x0, [x8, #0xb8]
0x06A6A12C: 1a8c00f8  str x26, [x0, #8]!
0x06A6A130: 255a1c97  bl #0x31809c4
0x06A6A134: 820340f9  ldr x2, [x28]
0x06A6A138: e8c30291  add x8, sp, #0xb0
0x06A6A13C: e0c30191  add x0, sp, #0x70
0x06A6A140: e1031aaa  mov x1, x26
0x06A6A144: 17736497  bl #0x4386da0
0x06A6A148: e08745ad  ldp q0, q1, [sp, #0xb0]
0x06A6A14C: 610240f9  ldr x1, [x19]
0x06A6A150: e0c30191  add x0, sp, #0x70
0x06A6A154: e08703ad  stp q0, q1, [sp, #0x70]
0x06A6A158: 28736497  bl #0x4386df8
0x06A6A15C: a80340f9  ldr x8, [x29]
0x06A6A160: fa0300aa  mov x26, x0
0x06A6A164: 09e140b9  ldr w9, [x8, #0xe0]
0x06A6A168: 89000035  cbnz w9, #0x6a6a178
0x06A6A16C: e00308aa  mov x0, x8
0x06A6A170: 875a1c97  bl #0x3180b8c
0x06A6A174: a80340f9  ldr x8, [x29]
0x06A6A178: 095d40f9  ldr x9, [x8, #0xb8]
0x06A6A17C: 336600d0  adrp x19, #0x7730000
0x06A6A180: 3b0940f9  ldr x27, [x9, #0x10]
0x06A6A184: 732647f9  ldr x19, [x19, #0xe48]
0x06A6A188: 1b0300b5  cbnz x27, #0x6a6a1e8
0x06A6A18C: 09e140b9  ldr w9, [x8, #0xe0]
0x06A6A190: 89000035  cbnz w9, #0x6a6a1a0
0x06A6A194: e00308aa  mov x0, x8
0x06A6A198: 7d5a1c97  bl #0x3180b8c
0x06A6A19C: a80340f9  ldr x8, [x29]
0x06A6A1A0: 296600d0  adrp x9, #0x7730000
0x06A6A1A4: 085d40f9  ldr x8, [x8, #0xb8]
0x06A6A1A8: 292947f9  ldr x9, [x9, #0xe50]
0x06A6A1AC: 1c0140f9  ldr x28, [x8]
0x06A6A1B0: 200140f9  ldr x0, [x9]
0x06A6A1B4: bb5a1c97  bl #0x3180ca0
0x06A6A1B8: 286600d0  adrp x8, #0x7730000
0x06A6A1BC: 084547f9  ldr x8, [x8, #0xe88]
0x06A6A1C0: e1031caa  mov x1, x28
0x06A6A1C4: e3031faa  mov x3, xzr
0x06A6A1C8: fb0300aa  mov x27, x0
0x06A6A1CC: 020140f9  ldr x2, [x8]
0x06A6A1D0: bc919f97  bl #0x524e8c0
0x06A6A1D4: a80340f9  ldr x8, [x29]
0x06A6A1D8: e1031baa  mov x1, x27
0x06A6A1DC: 005d40f9  ldr x0, [x8, #0xb8]
0x06A6A1E0: 1b0c01f8  str x27, [x0, #0x10]!
0x06A6A1E4: f8591c97  bl #0x31809c4
0x06A6A1E8: 620240f9  ldr x2, [x19]
0x06A6A1EC: e0031aaa  mov x0, x26
0x06A6A1F0: e1031baa  mov x1, x27
0x06A6A1F4: 638d4797  bl #0x3c4d780
0x06A6A1F8: db0a40f9  ldr x27, [x22, #0x10]
0x06A6A1FC: fb1200b4  cbz x27, #0x6a6a458
0x06A6A200: 3c6600b0  adrp x28, #0x772f000
0x06A6A204: 680340f9  ldr x8, [x27]
0x06A6A208: 9cef41f9  ldr x28, [x28, #0x3d8]
0x06A6A20C: fa0300aa  mov x26, x0
0x06A6A210: 095d4279  ldrh w9, [x8, #0x12e]
0x06A6A214: 810340f9  ldr x1, [x28]
0x06A6A218: 290100b4  cbz x9, #0x6a6a23c
0x06A6A21C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A6A220: 4a210091  add x10, x10, #8
0x06A6A224: 4b815ff8  ldur x11, [x10, #-8]
0x06A6A228: 7f0101eb  cmp x11, x1
0x06A6A22C: 00010054  b.eq #0x6a6a24c
0x06A6A230: 290500f1  subs x9, x9, #1
0x06A6A234: 4a410091  add x10, x10, #0x10
0x06A6A238: 61ffff54  b.ne #0x6a6a224
0x06A6A23C: 62008052  movz w2, #0x3
0x06A6A240: e0031baa  mov x0, x27
0x06A6A244: 33b21b97  bl #0x3156b10
0x06A6A248: 05000014  b #0x6a6a25c
0x06A6A24C: 490140b9  ldr w9, [x10]
0x06A6A250: 290d0011  add w9, w9, #3
0x06A6A254: 08d1298b  add x8, x8, w9, sxtw #4
0x06A6A258: 00e10491  add x0, x8, #0x138
0x06A6A25C: 080840a9  ldp x8, x2, [x0]
0x06A6A260: e0031baa  mov x0, x27
0x06A6A264: e1031aaa  mov x1, x26
0x06A6A268: 00013fd6  blr x8
0x06A6A26C: e04f00f9  str x0, [sp, #0x98]
0x06A6A270: a81240b9  ldr w8, [x21, #0x10]
0x06A6A274: 1f050071  cmp w8, #1
0x06A6A278: 6b080054  b.lt #0x6a6a384
0x06A6A27C: 936300b0  adrp x19, #0x76db000
0x06A6A280: 732a42f9  ldr x19, [x19, #0x450]
0x06A6A284: fa0300aa  mov x26, x0
0x06A6A288: fd031f2a  mov w29, wzr
0x06A6A28C: db0a40f9  ldr x27, [x22, #0x10]
0x06A6A290: 5b0e00b4  cbz x27, #0x6a6a458
0x06A6A294: 680340f9  ldr x8, [x27]
0x06A6A298: 810340f9  ldr x1, [x28]
0x06A6A29C: 095d4279  ldrh w9, [x8, #0x12e]
0x06A6A2A0: 290100b4  cbz x9, #0x6a6a2c4
0x06A6A2A4: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A6A2A8: 4a210091  add x10, x10, #8
0x06A6A2AC: 4b815ff8  ldur x11, [x10, #-8]
0x06A6A2B0: 7f0101eb  cmp x11, x1
0x06A6A2B4: 00010054  b.eq #0x6a6a2d4
0x06A6A2B8: 290500f1  subs x9, x9, #1
0x06A6A2BC: 4a410091  add x10, x10, #0x10
0x06A6A2C0: 61ffff54  b.ne #0x6a6a2ac
0x06A6A2C4: 42008052  movz w2, #0x2
0x06A6A2C8: e0031baa  mov x0, x27
0x06A6A2CC: 11b21b97  bl #0x3156b10
0x06A6A2D0: 05000014  b #0x6a6a2e4
0x06A6A2D4: 490140b9  ldr w9, [x10]
0x06A6A2D8: 29090011  add w9, w9, #2
0x06A6A2DC: 08d1298b  add x8, x8, w9, sxtw #4
0x06A6A2E0: 00e10491  add x0, x8, #0x138
0x06A6A2E4: 081040a9  ldp x8, x4, [x0]
0x06A6A2E8: e0031baa  mov x0, x27
0x06A6A2EC: e1031aaa  mov x1, x26
0x06A6A2F0: e20318aa  mov x2, x24
0x06A6A2F4: e30319aa  mov x3, x25
0x06A6A2F8: 00013fd6  blr x8
0x06A6A2FC: c00300b4  cbz x0, #0x6a6a374
0x06A6A300: d70a00b4  cbz x23, #0x6a6a458
0x06A6A304: ea1e40b9  ldr w10, [x23, #0x1c]
0x06A6A308: e80a40f9  ldr x8, [x23, #0x10]
0x06A6A30C: 690240f9  ldr x9, [x19]
0x06A6A310: 4a050011  add w10, w10, #1
0x06A6A314: ea1e00b9  str w10, [x23, #0x1c]
0x06A6A318: 080a00b4  cbz x8, #0x6a6a458
0x06A6A31C: ea1a80b9  ldrsw x10, [x23, #0x18]
0x06A6A320: 0b1940b9  ldr w11, [x8, #0x18]
0x06A6A324: fb0300aa  mov x27, x0
0x06A6A328: 5f010b6b  cmp w10, w11
0x06A6A32C: 02010054  b.hs #0x6a6a34c
0x06A6A330: 49050011  add w9, w10, #1
0x06A6A334: 000d0a8b  add x0, x8, x10, lsl #3
0x06A6A338: e91a00b9  str w9, [x23, #0x18]
0x06A6A33C: 1b0c02f8  str x27, [x0, #0x20]!
0x06A6A340: e1031baa  mov x1, x27
0x06A6A344: a0591c97  bl #0x31809c4
0x06A6A348: 07000014  b #0x6a6a364
0x06A6A34C: 281140f9  ldr x8, [x9, #0x20]
0x06A6A350: e00317aa  mov x0, x23
0x06A6A354: e1031baa  mov x1, x27
0x06A6A358: 086140f9  ldr x8, [x8, #0xc0]
0x06A6A35C: 023940f9  ldr x2, [x8, #0x70]
0x06A6A360: 43685797  bl #0x404446c
0x06A6A364: e2630291  add x2, sp, #0x98
0x06A6A368: e00316aa  mov x0, x22
0x06A6A36C: e1031baa  mov x1, x27
0x06A6A370: a8000094  bl #0x6a6a610
0x06A6A374: a81240b9  ldr w8, [x21, #0x10]
0x06A6A378: bd070011  add w29, w29, #1
0x06A6A37C: bf03086b  cmp w29, w8
0x06A6A380: 6bf8ff54  b.lt #0x6a6a28c
0x06A6A384: e0830291  add x0, sp, #0xa0
0x06A6A388: e1031faa  mov x1, xzr
0x06A6A38C: c6c70094  bl #0x6a9c2a4
0x06A6A390: f80740f9  ldr x24, [sp, #8]
0x06A6A394: 380600b4  cbz x24, #0x6a6a458
0x06A6A398: 286600d0  adrp x8, #0x7730000
0x06A6A39C: 087545f9  ldr x8, [x8, #0xae8]
0x06A6A3A0: b36200d0  adrp x19, #0x76c0000
0x06A6A3A4: 356600d0  adrp x21, #0x7730000
0x06A6A3A8: e20300aa  mov x2, x0
0x06A6A3AC: 030140f9  ldr x3, [x8]
0x06A6A3B0: 736647f9  ldr x19, [x19, #0xec8]
0x06A6A3B4: b53247f9  ldr x21, [x21, #0xe60]
0x06A6A3B8: e40301aa  mov x4, x1
0x06A6A3BC: e00318aa  mov x0, x24
0x06A6A3C0: e10302aa  mov x1, x2
0x06A6A3C4: e20304aa  mov x2, x4
0x06A6A3C8: 09cd4697  bl #0x3c1d7ec
0x06A6A3CC: 810240ad  ldp q1, q0, [x20]
0x06A6A3D0: e0430091  add x0, sp, #0x10
0x06A6A3D4: e10318aa  mov x1, x24
0x06A6A3D8: e2031faa  mov x2, xzr
0x06A6A3DC: e18300ad  stp q1, q0, [sp, #0x10]
0x06A6A3E0: e3ba0094  bl #0x6a98f6c
0x06A6A3E4: 610240f9  ldr x1, [x19]
0x06A6A3E8: 940a40f9  ldr x20, [x20, #0x10]
0x06A6A3EC: e00318aa  mov x0, x24
0x06A6A3F0: a8c24697  bl #0x3c1ae90
0x06A6A3F4: a80240f9  ldr x8, [x21]
0x06A6A3F8: f60300aa  mov x22, x0
0x06A6A3FC: e00308aa  mov x0, x8
0x06A6A400: 285a1c97  bl #0x3180ca0
0x06A6A404: e10318aa  mov x1, x24
0x06A6A408: e203162a  mov w2, w22
0x06A6A40C: e30317aa  mov x3, x23
0x06A6A410: e4031faa  mov x4, xzr
0x06A6A414: f50300aa  mov x21, x0
0x06A6A418: 7ec00094  bl #0x6a9a610
0x06A6A41C: f40100b4  cbz x20, #0x6a6a458
0x06A6A420: 286600d0  adrp x8, #0x7730000
0x06A6A424: 083d47f9  ldr x8, [x8, #0xe78]
0x06A6A428: e00314aa  mov x0, x20
0x06A6A42C: e10315aa  mov x1, x21
0x06A6A430: 020140f9  ldr x2, [x8]
0x06A6A434: ec634d97  bl #0x3dc33e4
0x06A6A438: f44f52a9  ldp x20, x19, [sp, #0x120]
0x06A6A43C: f65751a9  ldp x22, x21, [sp, #0x110]
0x06A6A440: f85f50a9  ldp x24, x23, [sp, #0x100]
0x06A6A444: fa674fa9  ldp x26, x25, [sp, #0xf0]
0x06A6A448: fc6f4ea9  ldp x28, x27, [sp, #0xe0]
0x06A6A44C: fd7b4da9  ldp x29, x30, [sp, #0xd0]
0x06A6A450: ffc30491  add sp, sp, #0x130
0x06A6A454: c0035fd6  ret
0x06A6A458: 155a1c97  bl #0x3180cac

; RVA 0x6A6A45C | private void CollectSingleTool(TickContext context, Entity entity, PendingInteractionComponent pendingInteractionComponent, IdComponent idComponent) { }
; bytes=436 sha256=091a46037e879bfb5f530087540db0fdb89b56a2fbea58c8613968d02ae0dd61 status=arm64_complete_bound indexed_start=True
0x06A6A45C: ff8301d1  sub sp, sp, #0x60
0x06A6A460: fe5f03a9  stp x30, x23, [sp, #0x30]
0x06A6A464: f65704a9  stp x22, x21, [sp, #0x40]
0x06A6A468: f44f05a9  stp x20, x19, [sp, #0x50]
0x06A6A46C: 17960090  adrp x23, #0x7d2a000
0x06A6A470: e8fa5a39  ldrb w8, [x23, #0x6be]
0x06A6A474: f60305aa  mov x22, x5
0x06A6A478: f30302aa  mov x19, x2
0x06A6A47C: f40301aa  mov x20, x1
0x06A6A480: f50300aa  mov x21, x0
0x06A6A484: e31302a9  stp x3, x4, [sp, #0x20]
0x06A6A488: 48020037  tbnz w8, #0, #0x6a6a4d0
0x06A6A48C: a06200d0  adrp x0, #0x76c0000
0x06A6A490: 006447f9  ldr x0, [x0, #0xec8]
0x06A6A494: 61591c97  bl #0x3180a18
0x06A6A498: 206600d0  adrp x0, #0x7730000
0x06A6A49C: 007445f9  ldr x0, [x0, #0xae8]
0x06A6A4A0: 5e591c97  bl #0x3180a18
0x06A6A4A4: 80600090  adrp x0, #0x767a000
0x06A6A4A8: 004c42f9  ldr x0, [x0, #0x498]
0x06A6A4AC: 5b591c97  bl #0x3180a18
0x06A6A4B0: 206600d0  adrp x0, #0x7730000
0x06A6A4B4: 004847f9  ldr x0, [x0, #0xe90]
0x06A6A4B8: 58591c97  bl #0x3180a18
0x06A6A4BC: 206600d0  adrp x0, #0x7730000
0x06A6A4C0: 004c47f9  ldr x0, [x0, #0xe98]
0x06A6A4C4: 55591c97  bl #0x3180a18
0x06A6A4C8: 28008052  movz w8, #0x1
0x06A6A4CC: e8fa1a39  strb w8, [x23, #0x6be]
0x06A6A4D0: b50e40f9  ldr x21, [x21, #0x18]
0x06A6A4D4: d50900b4  cbz x21, #0x6a6a60c
0x06A6A4D8: 8a600090  adrp x10, #0x767a000
0x06A6A4DC: a80240f9  ldr x8, [x21]
0x06A6A4E0: 4a4d42f9  ldr x10, [x10, #0x498]
0x06A6A4E4: d60240f9  ldr x22, [x22]
0x06A6A4E8: 095d4279  ldrh w9, [x8, #0x12e]
0x06A6A4EC: 410140f9  ldr x1, [x10]
0x06A6A4F0: 290100b4  cbz x9, #0x6a6a514
0x06A6A4F4: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A6A4F8: 4a210091  add x10, x10, #8
0x06A6A4FC: 4b815ff8  ldur x11, [x10, #-8]
0x06A6A500: 7f0101eb  cmp x11, x1
0x06A6A504: 00010054  b.eq #0x6a6a524
0x06A6A508: 290500f1  subs x9, x9, #1
0x06A6A50C: 4a410091  add x10, x10, #0x10
0x06A6A510: 61ffff54  b.ne #0x6a6a4fc
0x06A6A514: 22018052  movz w2, #0x9
0x06A6A518: e00315aa  mov x0, x21
0x06A6A51C: 7db11b97  bl #0x3156b10
0x06A6A520: 05000014  b #0x6a6a534
0x06A6A524: 490140b9  ldr w9, [x10]
0x06A6A528: 29250011  add w9, w9, #9
0x06A6A52C: 08d1298b  add x8, x8, w9, sxtw #4
0x06A6A530: 00e10491  add x0, x8, #0x138
0x06A6A534: 080840a9  ldp x8, x2, [x0]
0x06A6A538: e00315aa  mov x0, x21
0x06A6A53C: e10316aa  mov x1, x22
0x06A6A540: 00013fd6  blr x8
0x06A6A544: f50300aa  mov x21, x0
0x06A6A548: e0830091  add x0, sp, #0x20
0x06A6A54C: e1031faa  mov x1, xzr
0x06A6A550: 55c70094  bl #0x6a9c2a4
0x06A6A554: d30500b4  cbz x19, #0x6a6a60c
0x06A6A558: 286600d0  adrp x8, #0x7730000
0x06A6A55C: 087545f9  ldr x8, [x8, #0xae8]
0x06A6A560: b66200d0  adrp x22, #0x76c0000
0x06A6A564: 376600d0  adrp x23, #0x7730000
0x06A6A568: e20300aa  mov x2, x0
0x06A6A56C: 030140f9  ldr x3, [x8]
0x06A6A570: d66647f9  ldr x22, [x22, #0xec8]
0x06A6A574: f74a47f9  ldr x23, [x23, #0xe90]
0x06A6A578: e40301aa  mov x4, x1
0x06A6A57C: e00313aa  mov x0, x19
0x06A6A580: e10302aa  mov x1, x2
0x06A6A584: e20304aa  mov x2, x4
0x06A6A588: 99cc4697  bl #0x3c1d7ec
0x06A6A58C: 810240ad  ldp q1, q0, [x20]
0x06A6A590: e0030091  mov x0, sp
0x06A6A594: e10313aa  mov x1, x19
0x06A6A598: e2031faa  mov x2, xzr
0x06A6A59C: e10300ad  stp q1, q0, [sp]
0x06A6A5A0: 73ba0094  bl #0x6a98f6c
0x06A6A5A4: c10240f9  ldr x1, [x22]
0x06A6A5A8: 940a40f9  ldr x20, [x20, #0x10]
0x06A6A5AC: e00313aa  mov x0, x19
0x06A6A5B0: 38c24697  bl #0x3c1ae90
0x06A6A5B4: e80240f9  ldr x8, [x23]
0x06A6A5B8: f70300aa  mov x23, x0
0x06A6A5BC: e00308aa  mov x0, x8
0x06A6A5C0: b8591c97  bl #0x3180ca0
0x06A6A5C4: e10313aa  mov x1, x19
0x06A6A5C8: e203172a  mov w2, w23
0x06A6A5CC: e30315aa  mov x3, x21
0x06A6A5D0: e4031faa  mov x4, xzr
0x06A6A5D4: f60300aa  mov x22, x0
0x06A6A5D8: 2fc00094  bl #0x6a9a694
0x06A6A5DC: 940100b4  cbz x20, #0x6a6a60c
0x06A6A5E0: 286600d0  adrp x8, #0x7730000
0x06A6A5E4: 084d47f9  ldr x8, [x8, #0xe98]
0x06A6A5E8: e00314aa  mov x0, x20
0x06A6A5EC: e10316aa  mov x1, x22
0x06A6A5F0: 020140f9  ldr x2, [x8]
0x06A6A5F4: 7c634d97  bl #0x3dc33e4
0x06A6A5F8: f44f45a9  ldp x20, x19, [sp, #0x50]
0x06A6A5FC: f65744a9  ldp x22, x21, [sp, #0x40]
0x06A6A600: fe5f43a9  ldp x30, x23, [sp, #0x30]
0x06A6A604: ff830191  add sp, sp, #0x60
0x06A6A608: c0035fd6  ret
0x06A6A60C: a8591c97  bl #0x3180cac

; RVA 0x6A6A610 | private void UpdateToolProgressionData(IMergeItem toolItem, ref Dictionary<PlayerResourceEnum, ToolProgressionData> toolsProgressionData) { }
; bytes=816 sha256=4abd9b403b3b873ea03c2ef9e734695e9b48a144ade648629efe14a6d7f6c652 status=arm64_complete_bound indexed_start=True
0x06A6A610: fe0f1bf8  str x30, [sp, #-0x50]!
0x06A6A614: fa6701a9  stp x26, x25, [sp, #0x10]
0x06A6A618: f85f02a9  stp x24, x23, [sp, #0x20]
0x06A6A61C: f65703a9  stp x22, x21, [sp, #0x30]
0x06A6A620: f44f04a9  stp x20, x19, [sp, #0x40]
0x06A6A624: 16960090  adrp x22, #0x7d2a000
0x06A6A628: c8fe5a39  ldrb w8, [x22, #0x6bf]
0x06A6A62C: f40302aa  mov x20, x2
0x06A6A630: f50301aa  mov x21, x1
0x06A6A634: f30300aa  mov x19, x0
0x06A6A638: e8010037  tbnz w8, #0, #0x6a6a674
0x06A6A63C: 206600d0  adrp x0, #0x7730000
0x06A6A640: 005047f9  ldr x0, [x0, #0xea0]
0x06A6A644: f5581c97  bl #0x3180a18
0x06A6A648: 80600090  adrp x0, #0x767a000
0x06A6A64C: 004c42f9  ldr x0, [x0, #0x498]
0x06A6A650: f2581c97  bl #0x3180a18
0x06A6A654: 206600b0  adrp x0, #0x772f000
0x06A6A658: 00ec41f9  ldr x0, [x0, #0x3d8]
0x06A6A65C: ef581c97  bl #0x3180a18
0x06A6A660: 606000f0  adrp x0, #0x7679000
0x06A6A664: 001044f9  ldr x0, [x0, #0x820]
0x06A6A668: ec581c97  bl #0x3180a18
0x06A6A66C: 28008052  movz w8, #0x1
0x06A6A670: c8fe1a39  strb w8, [x22, #0x6bf]
0x06A6A674: 551600b4  cbz x21, #0x6a6a93c
0x06A6A678: 796000f0  adrp x25, #0x7679000
0x06A6A67C: a80240f9  ldr x8, [x21]
0x06A6A680: 391344f9  ldr x25, [x25, #0x820]
0x06A6A684: 760e40f9  ldr x22, [x19, #0x18]
0x06A6A688: 095d4279  ldrh w9, [x8, #0x12e]
0x06A6A68C: 210340f9  ldr x1, [x25]
0x06A6A690: 290100b4  cbz x9, #0x6a6a6b4
0x06A6A694: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A6A698: 4a210091  add x10, x10, #8
0x06A6A69C: 4b815ff8  ldur x11, [x10, #-8]
0x06A6A6A0: 7f0101eb  cmp x11, x1
0x06A6A6A4: 00010054  b.eq #0x6a6a6c4
0x06A6A6A8: 290500f1  subs x9, x9, #1
0x06A6A6AC: 4a410091  add x10, x10, #0x10
0x06A6A6B0: 61ffff54  b.ne #0x6a6a69c
0x06A6A6B4: e00315aa  mov x0, x21
0x06A6A6B8: e2031f2a  mov w2, wzr
0x06A6A6BC: 15b11b97  bl #0x3156b10
0x06A6A6C0: 04000014  b #0x6a6a6d0
0x06A6A6C4: 490180b9  ldrsw x9, [x10]
0x06A6A6C8: 0811098b  add x8, x8, x9, lsl #4
0x06A6A6CC: 00e10491  add x0, x8, #0x138
0x06A6A6D0: 080440a9  ldp x8, x1, [x0]
0x06A6A6D4: e00315aa  mov x0, x21
0x06A6A6D8: 00013fd6  blr x8
0x06A6A6DC: 161300b4  cbz x22, #0x6a6a93c
0x06A6A6E0: 9a600090  adrp x26, #0x767a000
0x06A6A6E4: c80240f9  ldr x8, [x22]
0x06A6A6E8: 5a4f42f9  ldr x26, [x26, #0x498]
0x06A6A6EC: f70300aa  mov x23, x0
0x06A6A6F0: 095d4279  ldrh w9, [x8, #0x12e]
0x06A6A6F4: 410340f9  ldr x1, [x26]
0x06A6A6F8: 290100b4  cbz x9, #0x6a6a71c
0x06A6A6FC: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A6A700: 4a210091  add x10, x10, #8
0x06A6A704: 4b815ff8  ldur x11, [x10, #-8]
0x06A6A708: 7f0101eb  cmp x11, x1
0x06A6A70C: 00010054  b.eq #0x6a6a72c
0x06A6A710: 290500f1  subs x9, x9, #1
0x06A6A714: 4a410091  add x10, x10, #0x10
0x06A6A718: 61ffff54  b.ne #0x6a6a704
0x06A6A71C: 82008052  movz w2, #0x4
0x06A6A720: e00316aa  mov x0, x22
0x06A6A724: fbb01b97  bl #0x3156b10
0x06A6A728: 05000014  b #0x6a6a73c
0x06A6A72C: 490140b9  ldr w9, [x10]
0x06A6A730: 29110011  add w9, w9, #4
0x06A6A734: 08d1298b  add x8, x8, w9, sxtw #4
0x06A6A738: 00e10491  add x0, x8, #0x138
0x06A6A73C: 080840a9  ldp x8, x2, [x0]
0x06A6A740: e00316aa  mov x0, x22
0x06A6A744: e10317aa  mov x1, x23
0x06A6A748: 00013fd6  blr x8
0x06A6A74C: 770a40f9  ldr x23, [x19, #0x10]
0x06A6A750: 770f00b4  cbz x23, #0x6a6a93c
0x06A6A754: 386600b0  adrp x24, #0x772f000
0x06A6A758: e80240f9  ldr x8, [x23]
0x06A6A75C: 18ef41f9  ldr x24, [x24, #0x3d8]
0x06A6A760: f60300aa  mov x22, x0
0x06A6A764: 095d4279  ldrh w9, [x8, #0x12e]
0x06A6A768: 010340f9  ldr x1, [x24]
0x06A6A76C: 290100b4  cbz x9, #0x6a6a790
0x06A6A770: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A6A774: 4a210091  add x10, x10, #8
0x06A6A778: 4b815ff8  ldur x11, [x10, #-8]
0x06A6A77C: 7f0101eb  cmp x11, x1
0x06A6A780: 00010054  b.eq #0x6a6a7a0
0x06A6A784: 290500f1  subs x9, x9, #1
0x06A6A788: 4a410091  add x10, x10, #0x10
0x06A6A78C: 61ffff54  b.ne #0x6a6a778
0x06A6A790: e00317aa  mov x0, x23
0x06A6A794: e2031f2a  mov w2, wzr
0x06A6A798: deb01b97  bl #0x3156b10
0x06A6A79C: 04000014  b #0x6a6a7ac
0x06A6A7A0: 490180b9  ldrsw x9, [x10]
0x06A6A7A4: 0811098b  add x8, x8, x9, lsl #4
0x06A6A7A8: 00e10491  add x0, x8, #0x138
0x06A6A7AC: 080840a9  ldp x8, x2, [x0]
0x06A6A7B0: e00317aa  mov x0, x23
0x06A6A7B4: e10316aa  mov x1, x22
0x06A6A7B8: 00013fd6  blr x8
0x06A6A7BC: a80240f9  ldr x8, [x21]
0x06A6A7C0: 770e40f9  ldr x23, [x19, #0x18]
0x06A6A7C4: 210340f9  ldr x1, [x25]
0x06A6A7C8: f603002a  mov w22, w0
0x06A6A7CC: 095d4279  ldrh w9, [x8, #0x12e]
0x06A6A7D0: 290100b4  cbz x9, #0x6a6a7f4
0x06A6A7D4: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A6A7D8: 4a210091  add x10, x10, #8
0x06A6A7DC: 4b815ff8  ldur x11, [x10, #-8]
0x06A6A7E0: 7f0101eb  cmp x11, x1
0x06A6A7E4: 00010054  b.eq #0x6a6a804
0x06A6A7E8: 290500f1  subs x9, x9, #1
0x06A6A7EC: 4a410091  add x10, x10, #0x10
0x06A6A7F0: 61ffff54  b.ne #0x6a6a7dc
0x06A6A7F4: e00315aa  mov x0, x21
0x06A6A7F8: e2031f2a  mov w2, wzr
0x06A6A7FC: c5b01b97  bl #0x3156b10
0x06A6A800: 04000014  b #0x6a6a810
0x06A6A804: 490180b9  ldrsw x9, [x10]
0x06A6A808: 0811098b  add x8, x8, x9, lsl #4
0x06A6A80C: 00e10491  add x0, x8, #0x138
0x06A6A810: 080440a9  ldp x8, x1, [x0]
0x06A6A814: e00315aa  mov x0, x21
0x06A6A818: 00013fd6  blr x8
0x06A6A81C: 170900b4  cbz x23, #0x6a6a93c
0x06A6A820: e80240f9  ldr x8, [x23]
0x06A6A824: 410340f9  ldr x1, [x26]
0x06A6A828: f50300aa  mov x21, x0
0x06A6A82C: 095d4279  ldrh w9, [x8, #0x12e]
0x06A6A830: 290100b4  cbz x9, #0x6a6a854
0x06A6A834: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A6A838: 4a210091  add x10, x10, #8
0x06A6A83C: 4b815ff8  ldur x11, [x10, #-8]
0x06A6A840: 7f0101eb  cmp x11, x1
0x06A6A844: 00010054  b.eq #0x6a6a864
0x06A6A848: 290500f1  subs x9, x9, #1
0x06A6A84C: 4a410091  add x10, x10, #0x10
0x06A6A850: 61ffff54  b.ne #0x6a6a83c
0x06A6A854: 22038052  movz w2, #0x19
0x06A6A858: e00317aa  mov x0, x23
0x06A6A85C: adb01b97  bl #0x3156b10
0x06A6A860: 05000014  b #0x6a6a874
0x06A6A864: 490140b9  ldr w9, [x10]
0x06A6A868: 29650011  add w9, w9, #0x19
0x06A6A86C: 08d1298b  add x8, x8, w9, sxtw #4
0x06A6A870: 00e10491  add x0, x8, #0x138
0x06A6A874: 080840a9  ldp x8, x2, [x0]
0x06A6A878: e00317aa  mov x0, x23
0x06A6A87C: e10315aa  mov x1, x21
0x06A6A880: 00013fd6  blr x8
0x06A6A884: 880240f9  ldr x8, [x20]
0x06A6A888: a80500b4  cbz x8, #0x6a6a93c
0x06A6A88C: 296600d0  adrp x9, #0x7730000
0x06A6A890: 295147f9  ldr x9, [x9, #0xea0]
0x06A6A894: f403002a  mov w20, w0
0x06A6A898: e00308aa  mov x0, x8
0x06A6A89C: e103162a  mov w1, w22
0x06A6A8A0: 220140f9  ldr x2, [x9]
0x06A6A8A4: 58dd8f97  bl #0x4e61e04
0x06A6A8A8: a00400b4  cbz x0, #0x6a6a93c
0x06A6A8AC: 730a40f9  ldr x19, [x19, #0x10]
0x06A6A8B0: 730400b4  cbz x19, #0x6a6a93c
0x06A6A8B4: 680240f9  ldr x8, [x19]
0x06A6A8B8: 161040b9  ldr w22, [x0, #0x10]
0x06A6A8BC: 010340f9  ldr x1, [x24]
0x06A6A8C0: f50300aa  mov x21, x0
0x06A6A8C4: 095d4279  ldrh w9, [x8, #0x12e]
0x06A6A8C8: 290100b4  cbz x9, #0x6a6a8ec
0x06A6A8CC: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A6A8D0: 4a210091  add x10, x10, #8
0x06A6A8D4: 4b815ff8  ldur x11, [x10, #-8]
0x06A6A8D8: 7f0101eb  cmp x11, x1
0x06A6A8DC: 00010054  b.eq #0x6a6a8fc
0x06A6A8E0: 290500f1  subs x9, x9, #1
0x06A6A8E4: 4a410091  add x10, x10, #0x10
0x06A6A8E8: 61ffff54  b.ne #0x6a6a8d4
0x06A6A8EC: 82008052  movz w2, #0x4
0x06A6A8F0: e00313aa  mov x0, x19
0x06A6A8F4: 87b01b97  bl #0x3156b10
0x06A6A8F8: 05000014  b #0x6a6a90c
0x06A6A8FC: 490140b9  ldr w9, [x10]
0x06A6A900: 29110011  add w9, w9, #4
0x06A6A904: 08d1298b  add x8, x8, w9, sxtw #4
0x06A6A908: 00e10491  add x0, x8, #0x138
0x06A6A90C: 080840a9  ldp x8, x2, [x0]
0x06A6A910: e00313aa  mov x0, x19
0x06A6A914: e103142a  mov w1, w20
0x06A6A918: 00013fd6  blr x8
0x06A6A91C: 0800160b  add w8, w0, w22
0x06A6A920: a81200b9  str w8, [x21, #0x10]
0x06A6A924: f44f44a9  ldp x20, x19, [sp, #0x40]
0x06A6A928: f65743a9  ldp x22, x21, [sp, #0x30]
0x06A6A92C: f85f42a9  ldp x24, x23, [sp, #0x20]
0x06A6A930: fa6741a9  ldp x26, x25, [sp, #0x10]
0x06A6A934: fe0745f8  ldr x30, [sp], #0x50
0x06A6A938: c0035fd6  ret
0x06A6A93C: dc581c97  bl #0x3180cac

; RVA 0x6A6A940 | public void .ctor() { }
; bytes=8 sha256=18e91224f106964084686308921af7037f8b848b5b66b0a402d8731c3cffd355 status=arm64_complete_bound indexed_start=True
0x06A6A940: e1031faa  mov x1, xzr
0x06A6A944: 2ebfb117  b #0x56da5fc

