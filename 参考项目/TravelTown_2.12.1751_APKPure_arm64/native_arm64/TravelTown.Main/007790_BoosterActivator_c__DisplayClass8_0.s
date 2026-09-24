; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 7790 .BoosterActivator.<>c__DisplayClass8_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x65C82D0 | public void .ctor() { }
; bytes=8 sha256=cca409d4c4eb279c8972e08125aa9f551d9fb54af81d6bcdcf7a33da3fc5fdb8 status=arm64_complete_bound indexed_start=True
0x065C82D0: e1031faa  mov x1, xzr
0x065C82D4: ca48c417  b #0x56da5fc

; RVA 0x65C8FD8 | internal bool <CanActivateBooster>b__0(RemoteBoosterData activeBooster) { }
; bytes=68 sha256=6d64af60634a291b7728acae6dc7d6380358aa51e7ff969f29f5c61a294ce37e status=arm64_complete_bound indexed_start=True
0x065C8FD8: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x065C8FDC: e10100b4  cbz x1, #0x65c9018
0x065C8FE0: 281840f9  ldr x8, [x1, #0x30]
0x065C8FE4: f30301aa  mov x19, x1
0x065C8FE8: 010840f9  ldr x1, [x0, #0x10]
0x065C8FEC: e2031faa  mov x2, xzr
0x065C8FF0: e00308aa  mov x0, x8
0x065C8FF4: 1f86bc97  bl #0x54ea870
0x065C8FF8: a0000036  tbz w0, #0, #0x65c900c
0x065C8FFC: 681240b9  ldr w8, [x19, #0x10]
0x065C9000: 1f090071  cmp w8, #2
0x065C9004: e0179f1a  cset w0, eq
0x065C9008: 02000014  b #0x65c9010
0x065C900C: e0031f2a  mov w0, wzr
0x065C9010: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x065C9014: c0035fd6  ret
0x065C9018: 25df2e97  bl #0x3180cac

; RVA 0x65C901C | internal IBoosterItem <CanActivateBooster>b__1(BoosterIdComponent boosterId) { }
; bytes=216 sha256=5e6e47f474185da1308512cc23674f1b33490ffb415f99a236a996fea4508126 status=arm64_complete_bound indexed_start=True
0x065C901C: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x065C9020: f44f01a9  stp x20, x19, [sp, #0x10]
0x065C9024: f5ba00d0  adrp x21, #0x7d27000
0x065C9028: a8ce6539  ldrb w8, [x21, #0x973]
0x065C902C: f40301aa  mov x20, x1
0x065C9030: f30300aa  mov x19, x0
0x065C9034: 28010037  tbnz w8, #0, #0x65c9058
0x065C9038: 008900b0  adrp x0, #0x76ea000
0x065C903C: 00e844f9  ldr x0, [x0, #0x9d0]
0x065C9040: 76de2e97  bl #0x3180a18
0x065C9044: 808500b0  adrp x0, #0x767a000
0x065C9048: 005445f9  ldr x0, [x0, #0xaa8]
0x065C904C: 73de2e97  bl #0x3180a18
0x065C9050: 28008052  movz w8, #0x1
0x065C9054: a8ce2539  strb w8, [x21, #0x973]
0x065C9058: 680e40f9  ldr x8, [x19, #0x18]
0x065C905C: a80400b4  cbz x8, #0x65c90f0
0x065C9060: 940400b4  cbz x20, #0x65c90f0
0x065C9064: 098900b0  adrp x9, #0x76ea000
0x065C9068: 29e944f9  ldr x9, [x9, #0x9d0]
0x065C906C: 130940f9  ldr x19, [x8, #0x10]
0x065C9070: e00314aa  mov x0, x20
0x065C9074: 210140f9  ldr x1, [x9]
0x065C9078: 338c9897  bl #0x4bec144
0x065C907C: b30300b4  cbz x19, #0x65c90f0
0x065C9080: 8a8500b0  adrp x10, #0x767a000
0x065C9084: 680240f9  ldr x8, [x19]
0x065C9088: 4a5545f9  ldr x10, [x10, #0xaa8]
0x065C908C: f40300aa  mov x20, x0
0x065C9090: 095d4279  ldrh w9, [x8, #0x12e]
0x065C9094: 410140f9  ldr x1, [x10]
0x065C9098: 290100b4  cbz x9, #0x65c90bc
0x065C909C: 0a5940f9  ldr x10, [x8, #0xb0]
0x065C90A0: 4a210091  add x10, x10, #8
0x065C90A4: 4b815ff8  ldur x11, [x10, #-8]
0x065C90A8: 7f0101eb  cmp x11, x1
0x065C90AC: 00010054  b.eq #0x65c90cc
0x065C90B0: 290500f1  subs x9, x9, #1
0x065C90B4: 4a410091  add x10, x10, #0x10
0x065C90B8: 61ffff54  b.ne #0x65c90a4
0x065C90BC: e00313aa  mov x0, x19
0x065C90C0: e2031f2a  mov w2, wzr
0x065C90C4: 93362e97  bl #0x3156b10
0x065C90C8: 04000014  b #0x65c90d8
0x065C90CC: 490180b9  ldrsw x9, [x10]
0x065C90D0: 0811098b  add x8, x8, x9, lsl #4
0x065C90D4: 00e10491  add x0, x8, #0x138
0x065C90D8: 030840a9  ldp x3, x2, [x0]
0x065C90DC: e00313aa  mov x0, x19
0x065C90E0: e10314aa  mov x1, x20
0x065C90E4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x065C90E8: fe57c2a8  ldp x30, x21, [sp], #0x20
0x065C90EC: 60001fd6  br x3
0x065C90F0: efde2e97  bl #0x3180cac

