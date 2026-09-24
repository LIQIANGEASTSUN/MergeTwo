; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25888 .CollectableItemsGrantProcessor.<>c__DisplayClass9_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9250C | public void .ctor() { }
; bytes=8 sha256=05dfa1dee8b14d81e542cd506ba361f42e65c3da7de67c49e9445cdb94c1ea07 status=arm64_complete_bound indexed_start=True
0x06A9250C: e1031faa  mov x1, xzr
0x06A92510: 3b20b117  b #0x56da5fc

; RVA 0x6A92734 | internal void <PlayResourceGrantAnimation>g__OnFlyRewardAnimationCompleted|0(RewardFlyIconAnimationFinishedSignal signal) { }
; bytes=220 sha256=ecaf766f4c398a72cd9c54928a5a6baf003cb27422379513be196cf845435d51 status=arm64_complete_bound indexed_start=True
0x06A92734: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A92738: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A9273C: d5940090  adrp x21, #0x7d2a000
0x06A92740: a8d65f39  ldrb w8, [x21, #0x7f5]
0x06A92744: f40301aa  mov x20, x1
0x06A92748: f30300aa  mov x19, x0
0x06A9274C: 88010037  tbnz w8, #0, #0x6a9277c
0x06A92750: 005f0090  adrp x0, #0x7672000
0x06A92754: 00a445f9  ldr x0, [x0, #0xb48]
0x06A92758: b0b81b97  bl #0x3180a18
0x06A9275C: 005f0090  adrp x0, #0x7672000
0x06A92760: 00b445f9  ldr x0, [x0, #0xb68]
0x06A92764: adb81b97  bl #0x3180a18
0x06A92768: 00650090  adrp x0, #0x7732000
0x06A9276C: 002c41f9  ldr x0, [x0, #0x258]
0x06A92770: aab81b97  bl #0x3180a18
0x06A92774: 28008052  movz w8, #0x1
0x06A92778: a8d61f39  strb w8, [x21, #0x7f5]
0x06A9277C: 940400b4  cbz x20, #0x6a9280c
0x06A92780: 800e40f9  ldr x0, [x20, #0x18]
0x06A92784: 610a40f9  ldr x1, [x19, #0x10]
0x06A92788: e2031faa  mov x2, xzr
0x06A9278C: 3960a997  bl #0x54ea870
0x06A92790: 80030036  tbz w0, #0, #0x6a92800
0x06A92794: 085f0090  adrp x8, #0x7672000
0x06A92798: 740e40f9  ldr x20, [x19, #0x18]
0x06A9279C: 08a545f9  ldr x8, [x8, #0xb48]
0x06A927A0: 000140f9  ldr x0, [x8]
0x06A927A4: 3fb91b97  bl #0x3180ca0
0x06A927A8: 08650090  adrp x8, #0x7732000
0x06A927AC: 082d41f9  ldr x8, [x8, #0x258]
0x06A927B0: e10313aa  mov x1, x19
0x06A927B4: e3031faa  mov x3, xzr
0x06A927B8: f50300aa  mov x21, x0
0x06A927BC: 020140f9  ldr x2, [x8]
0x06A927C0: 853ea297  bl #0x53221d4
0x06A927C4: 540200b4  cbz x20, #0x6a9280c
0x06A927C8: 085f0090  adrp x8, #0x7672000
0x06A927CC: 08b545f9  ldr x8, [x8, #0xb68]
0x06A927D0: e00314aa  mov x0, x20
0x06A927D4: e10315aa  mov x1, x21
0x06A927D8: 020140f9  ldr x2, [x8]
0x06A927DC: 3ad34497  bl #0x3bc74c4
0x06A927E0: 681240f9  ldr x8, [x19, #0x20]
0x06A927E4: e80000b4  cbz x8, #0x6a92800
0x06A927E8: 020d40f9  ldr x2, [x8, #0x18]
0x06A927EC: 002140f9  ldr x0, [x8, #0x40]
0x06A927F0: 011540f9  ldr x1, [x8, #0x28]
0x06A927F4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A927F8: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A927FC: 40001fd6  br x2
0x06A92800: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A92804: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A92808: c0035fd6  ret
0x06A9280C: 28b91b97  bl #0x3180cac

