; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 33874 .SkipCooldownProvider.<>c__DisplayClass6_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A632CC | public void .ctor() { }
; bytes=8 sha256=739b2e4ded8676751b2462c495b8b0f246c3ba109edadbd7d2f013c61c5912f1 status=arm64_complete_bound indexed_start=True
0x06A632CC: e1031faa  mov x1, xzr
0x06A632D0: cbdcb117  b #0x56da5fc

; RVA 0x6A63854 | internal bool <CanSkipCooldown>b__0(ISkipCooldownStrategy strategy) { }
; bytes=168 sha256=8a4a71fcf7b694e5d170de7531d7662d5ce26dcea69941e38382471236dda8bd status=arm64_complete_bound indexed_start=True
0x06A63854: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A63858: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A6385C: 359600f0  adrp x21, #0x7d2a000
0x06A63860: a80e5a39  ldrb w8, [x21, #0x683]
0x06A63864: f30301aa  mov x19, x1
0x06A63868: f40300aa  mov x20, x0
0x06A6386C: c8000037  tbnz w8, #0, #0x6a63884
0x06A63870: 606600b0  adrp x0, #0x7730000
0x06A63874: 008044f9  ldr x0, [x0, #0x900]
0x06A63878: 68741c97  bl #0x3180a18
0x06A6387C: 28008052  movz w8, #0x1
0x06A63880: a80e1a39  strb w8, [x21, #0x683]
0x06A63884: b30300b4  cbz x19, #0x6a638f8
0x06A63888: 6a6600b0  adrp x10, #0x7730000
0x06A6388C: 680240f9  ldr x8, [x19]
0x06A63890: 4a8144f9  ldr x10, [x10, #0x900]
0x06A63894: 940a40f9  ldr x20, [x20, #0x10]
0x06A63898: 095d4279  ldrh w9, [x8, #0x12e]
0x06A6389C: 410140f9  ldr x1, [x10]
0x06A638A0: 290100b4  cbz x9, #0x6a638c4
0x06A638A4: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A638A8: 4a210091  add x10, x10, #8
0x06A638AC: 4b815ff8  ldur x11, [x10, #-8]
0x06A638B0: 7f0101eb  cmp x11, x1
0x06A638B4: 00010054  b.eq #0x6a638d4
0x06A638B8: 290500f1  subs x9, x9, #1
0x06A638BC: 4a410091  add x10, x10, #0x10
0x06A638C0: 61ffff54  b.ne #0x6a638ac
0x06A638C4: e00313aa  mov x0, x19
0x06A638C8: e2031f2a  mov w2, wzr
0x06A638CC: 91cc1b97  bl #0x3156b10
0x06A638D0: 04000014  b #0x6a638e0
0x06A638D4: 490180b9  ldrsw x9, [x10]
0x06A638D8: 0811098b  add x8, x8, x9, lsl #4
0x06A638DC: 00e10491  add x0, x8, #0x138
0x06A638E0: 030840a9  ldp x3, x2, [x0]
0x06A638E4: e00313aa  mov x0, x19
0x06A638E8: e10314aa  mov x1, x20
0x06A638EC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A638F0: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A638F4: 60001fd6  br x3
0x06A638F8: ed741c97  bl #0x3180cac

