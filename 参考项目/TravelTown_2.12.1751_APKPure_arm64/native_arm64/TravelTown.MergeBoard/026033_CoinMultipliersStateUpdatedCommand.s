; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 26033 Merger.MergeBoard.CoinMultipliers.Commands.CoinMultipliersStateUpdatedCommand
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9F818 | public override void Execute(CoinMultipliersStateUpdatedSignal signal) { }
; bytes=128 sha256=ef6c9a285baf62aeee7d2f9e9af98fb60b2bfd25f87e6c05aa4ccb06475a9310 status=arm64_complete_bound indexed_start=True
0x06A9F818: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A9F81C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A9F820: 559400f0  adrp x21, #0x7d2a000
0x06A9F824: 946400f0  adrp x20, #0x7732000
0x06A9F828: a81e6239  ldrb w8, [x21, #0x887]
0x06A9F82C: 945644f9  ldr x20, [x20, #0x8a8]
0x06A9F830: f30300aa  mov x19, x0
0x06A9F834: 28010037  tbnz w8, #0, #0x6a9f858
0x06A9F838: 806400f0  adrp x0, #0x7732000
0x06A9F83C: 005844f9  ldr x0, [x0, #0x8b0]
0x06A9F840: 76841b97  bl #0x3180a18
0x06A9F844: 806400f0  adrp x0, #0x7732000
0x06A9F848: 005444f9  ldr x0, [x0, #0x8a8]
0x06A9F84C: 73841b97  bl #0x3180a18
0x06A9F850: 28008052  movz w8, #0x1
0x06A9F854: a81e2239  strb w8, [x21, #0x887]
0x06A9F858: 800240f9  ldr x0, [x20]
0x06A9F85C: 731a40f9  ldr x19, [x19, #0x30]
0x06A9F860: 10851b97  bl #0x3180ca0
0x06A9F864: e1031faa  mov x1, xzr
0x06A9F868: f40300aa  mov x20, x0
0x06A9F86C: 64ebb097  bl #0x56da5fc
0x06A9F870: 330100b4  cbz x19, #0x6a9f894
0x06A9F874: 886400f0  adrp x8, #0x7732000
0x06A9F878: 085944f9  ldr x8, [x8, #0x8b0]
0x06A9F87C: e00313aa  mov x0, x19
0x06A9F880: e10314aa  mov x1, x20
0x06A9F884: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A9F888: 020140f9  ldr x2, [x8]
0x06A9F88C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A9F890: d0e74417  b #0x3bd97d0
0x06A9F894: 06851b97  bl #0x3180cac

; RVA 0x6A9F898 | public void .ctor() { }
; bytes=72 sha256=dd236b29db7318adf5c8546a5b6009741f337b0b8d6ab922493b54594d360167 status=arm64_complete_bound indexed_start=True
0x06A9F898: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A9F89C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A9F8A0: 549400f0  adrp x20, #0x7d2a000
0x06A9F8A4: f56200d0  adrp x21, #0x76fd000
0x06A9F8A8: 88226239  ldrb w8, [x20, #0x888]
0x06A9F8AC: b5be43f9  ldr x21, [x21, #0x778]
0x06A9F8B0: f30300aa  mov x19, x0
0x06A9F8B4: c8000037  tbnz w8, #0, #0x6a9f8cc
0x06A9F8B8: e06200d0  adrp x0, #0x76fd000
0x06A9F8BC: 00bc43f9  ldr x0, [x0, #0x778]
0x06A9F8C0: 56841b97  bl #0x3180a18
0x06A9F8C4: 28008052  movz w8, #0x1
0x06A9F8C8: 88222239  strb w8, [x20, #0x888]
0x06A9F8CC: a10240f9  ldr x1, [x21]
0x06A9F8D0: e00313aa  mov x0, x19
0x06A9F8D4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A9F8D8: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A9F8DC: 530b8817  b #0x4ca2628

