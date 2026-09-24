; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 32790 .PowerBoostModesCalculator.<>c__DisplayClass24_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6AD00C0 | public void .ctor() { }
; bytes=8 sha256=d690ddbf9a8b56b1d1be6eeee801c18ad0cbffc81a649c60d24915ec8ad21275 status=arm64_complete_bound indexed_start=True
0x06AD00C0: e1031faa  mov x1, xzr
0x06AD00C4: 4e29b017  b #0x56da5fc

; RVA 0x6AD06B0 | internal bool <CalculatePlayableBoosts>b__0(BoostModeConfig boost) { }
; bytes=212 sha256=3833fb55e5fc0b417ff971a818d0c8dfaa52f31b070d362d0bf927c8c360ad91 status=arm64_complete_bound indexed_start=True
0x06AD06B0: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06AD06B4: f44f01a9  stp x20, x19, [sp, #0x10]
0x06AD06B8: d59200d0  adrp x21, #0x7d2a000
0x06AD06BC: a8026a39  ldrb w8, [x21, #0xa80]
0x06AD06C0: f30301aa  mov x19, x1
0x06AD06C4: f40300aa  mov x20, x0
0x06AD06C8: c8000037  tbnz w8, #0, #0x6ad06e0
0x06AD06CC: 006300f0  adrp x0, #0x7733000
0x06AD06D0: 006c47f9  ldr x0, [x0, #0xed8]
0x06AD06D4: d1c01a97  bl #0x3180a18
0x06AD06D8: 28008052  movz w8, #0x1
0x06AD06DC: a8022a39  strb w8, [x21, #0xa80]
0x06AD06E0: 130500b4  cbz x19, #0x6ad0780
0x06AD06E4: 731640b9  ldr w19, [x19, #0x14]
0x06AD06E8: 7f0a0071  cmp w19, #2
0x06AD06EC: aa000054  b.ge #0x6ad0700
0x06AD06F0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06AD06F4: e0031f2a  mov w0, wzr
0x06AD06F8: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06AD06FC: c0035fd6  ret
0x06AD0700: 880a40f9  ldr x8, [x20, #0x10]
0x06AD0704: e80300b4  cbz x8, #0x6ad0780
0x06AD0708: 141540f9  ldr x20, [x8, #0x28]
0x06AD070C: b40300b4  cbz x20, #0x6ad0780
0x06AD0710: 0a6300f0  adrp x10, #0x7733000
0x06AD0714: 880240f9  ldr x8, [x20]
0x06AD0718: 4a6d47f9  ldr x10, [x10, #0xed8]
0x06AD071C: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD0720: 410140f9  ldr x1, [x10]
0x06AD0724: 290100b4  cbz x9, #0x6ad0748
0x06AD0728: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD072C: 4a210091  add x10, x10, #8
0x06AD0730: 4b815ff8  ldur x11, [x10, #-8]
0x06AD0734: 7f0101eb  cmp x11, x1
0x06AD0738: 00010054  b.eq #0x6ad0758
0x06AD073C: 290500f1  subs x9, x9, #1
0x06AD0740: 4a410091  add x10, x10, #0x10
0x06AD0744: 61ffff54  b.ne #0x6ad0730
0x06AD0748: 22008052  movz w2, #0x1
0x06AD074C: e00314aa  mov x0, x20
0x06AD0750: f0181a97  bl #0x3156b10
0x06AD0754: 05000014  b #0x6ad0768
0x06AD0758: 490140b9  ldr w9, [x10]
0x06AD075C: 29050011  add w9, w9, #1
0x06AD0760: 08d1298b  add x8, x8, w9, sxtw #4
0x06AD0764: 00e10491  add x0, x8, #0x138
0x06AD0768: 030840a9  ldp x3, x2, [x0]
0x06AD076C: e00314aa  mov x0, x20
0x06AD0770: e103132a  mov w1, w19
0x06AD0774: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06AD0778: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06AD077C: 60001fd6  br x3
0x06AD0780: 4bc11a97  bl #0x3180cac

; RVA 0x6AD0784 | internal bool <CalculatePlayableBoosts>b__1(BoostModeConfig boostConfig) { }
; bytes=36 sha256=a7da0666a8de1be44a726c5e89c66857b7cc180f56c33a77c7a30df905b703a5 status=arm64_complete_bound indexed_start=True
0x06AD0784: fe0f1ff8  str x30, [sp, #-0x10]!
0x06AD0788: e10000b4  cbz x1, #0x6ad07a4
0x06AD078C: 081840b9  ldr w8, [x0, #0x18]
0x06AD0790: 291840b9  ldr w9, [x1, #0x18]
0x06AD0794: 1f01096b  cmp w8, w9
0x06AD0798: e0b79f1a  cset w0, ge
0x06AD079C: fe0741f8  ldr x30, [sp], #0x10
0x06AD07A0: c0035fd6  ret
0x06AD07A4: 42c11a97  bl #0x3180cac

