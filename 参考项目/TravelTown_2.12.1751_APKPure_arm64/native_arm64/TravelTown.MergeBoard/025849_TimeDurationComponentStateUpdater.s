; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25849 Merger.MergeBoard.Logic.State.Updaters.TimeDurationComponentStateUpdater
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A85E6C | public void .ctor(IServerTimeService serverTimeService) { }
; bytes=100 sha256=830d317ef8932d35fd2216ebf2ad0a7a22ada3b973b8527d341ea19372248cca status=arm64_complete_bound indexed_start=True
0x06A85E6C: fe0f1df8  str x30, [sp, #-0x30]!
0x06A85E70: f65701a9  stp x22, x21, [sp, #0x10]
0x06A85E74: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A85E78: 359500b0  adrp x21, #0x7d2a000
0x06A85E7C: 76650090  adrp x22, #0x7731000
0x06A85E80: a8665e39  ldrb w8, [x21, #0x799]
0x06A85E84: d67a46f9  ldr x22, [x22, #0xcf0]
0x06A85E88: f30301aa  mov x19, x1
0x06A85E8C: f40300aa  mov x20, x0
0x06A85E90: c8000037  tbnz w8, #0, #0x6a85ea8
0x06A85E94: 60650090  adrp x0, #0x7731000
0x06A85E98: 007846f9  ldr x0, [x0, #0xcf0]
0x06A85E9C: dfea1b97  bl #0x3180a18
0x06A85EA0: 28008052  movz w8, #0x1
0x06A85EA4: a8661e39  strb w8, [x21, #0x799]
0x06A85EA8: c10240f9  ldr x1, [x22]
0x06A85EAC: e00314aa  mov x0, x20
0x06A85EB0: 106a8b97  bl #0x4d606f0
0x06A85EB4: 930e01f8  str x19, [x20, #0x10]!
0x06A85EB8: e00314aa  mov x0, x20
0x06A85EBC: e10313aa  mov x1, x19
0x06A85EC0: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A85EC4: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A85EC8: fe0743f8  ldr x30, [sp], #0x30
0x06A85ECC: beea1b17  b #0x31809c4

; RVA 0x6A85ED0 | private long get_CurrentServerTimeMS() { }
; bytes=160 sha256=83f8487c7d9c421943151f38c7f8a0a75e1424330d41608dac932a99ec540233 status=arm64_complete_bound indexed_start=True
0x06A85ED0: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A85ED4: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A85ED8: 349500b0  adrp x20, #0x7d2a000
0x06A85EDC: 886a5e39  ldrb w8, [x20, #0x79a]
0x06A85EE0: f30300aa  mov x19, x0
0x06A85EE4: c8000037  tbnz w8, #0, #0x6a85efc
0x06A85EE8: 605f00d0  adrp x0, #0x7673000
0x06A85EEC: 006c46f9  ldr x0, [x0, #0xcd8]
0x06A85EF0: caea1b97  bl #0x3180a18
0x06A85EF4: 28008052  movz w8, #0x1
0x06A85EF8: 886a1e39  strb w8, [x20, #0x79a]
0x06A85EFC: 730a40f9  ldr x19, [x19, #0x10]
0x06A85F00: 730300b4  cbz x19, #0x6a85f6c
0x06A85F04: 6a5f00d0  adrp x10, #0x7673000
0x06A85F08: 680240f9  ldr x8, [x19]
0x06A85F0C: 4a6d46f9  ldr x10, [x10, #0xcd8]
0x06A85F10: 095d4279  ldrh w9, [x8, #0x12e]
0x06A85F14: 410140f9  ldr x1, [x10]
0x06A85F18: 290100b4  cbz x9, #0x6a85f3c
0x06A85F1C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A85F20: 4a210091  add x10, x10, #8
0x06A85F24: 4b815ff8  ldur x11, [x10, #-8]
0x06A85F28: 7f0101eb  cmp x11, x1
0x06A85F2C: 00010054  b.eq #0x6a85f4c
0x06A85F30: 290500f1  subs x9, x9, #1
0x06A85F34: 4a410091  add x10, x10, #0x10
0x06A85F38: 61ffff54  b.ne #0x6a85f24
0x06A85F3C: e00313aa  mov x0, x19
0x06A85F40: e2031f2a  mov w2, wzr
0x06A85F44: f3421b97  bl #0x3156b10
0x06A85F48: 04000014  b #0x6a85f58
0x06A85F4C: 490180b9  ldrsw x9, [x10]
0x06A85F50: 0811098b  add x8, x8, x9, lsl #4
0x06A85F54: 00e10491  add x0, x8, #0x138
0x06A85F58: 020440a9  ldp x2, x1, [x0]
0x06A85F5C: e00313aa  mov x0, x19
0x06A85F60: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A85F64: fe0742f8  ldr x30, [sp], #0x20
0x06A85F68: 40001fd6  br x2
0x06A85F6C: 50eb1b97  bl #0x3180cac

; RVA 0x6A85F70 | protected override void UpdateFromState(ref TimeDurationComponent component, ItemPayloadBase itemState) { }
; bytes=132 sha256=103aa6b453cb40b69dd45aad709e940d8d53e1f88b12860614459aad965377aa status=arm64_complete_bound indexed_start=True
0x06A85F70: fe0f1df8  str x30, [sp, #-0x30]!
0x06A85F74: f65701a9  stp x22, x21, [sp, #0x10]
0x06A85F78: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A85F7C: 420300b4  cbz x2, #0x6a85fe4
0x06A85F80: 562040f9  ldr x22, [x2, #0x40]
0x06A85F84: f50302aa  mov x21, x2
0x06A85F88: f60200b4  cbz x22, #0x6a85fe4
0x06A85F8C: f30301aa  mov x19, x1
0x06A85F90: f40300aa  mov x20, x0
0x06A85F94: cfffff97  bl #0x6a85ed0
0x06A85F98: df0200eb  cmp x22, x0
0x06A85F9C: e003679e  fmov d0, xzr
0x06A85FA0: ad010054  b.le #0x6a85fd4
0x06A85FA4: b52240f9  ldr x21, [x21, #0x40]
0x06A85FA8: e00314aa  mov x0, x20
0x06A85FAC: c9ffff97  bl #0x6a85ed0
0x06A85FB0: e9f99ed2  movz x9, #0xf7cf
0x06A85FB4: 696abcf2  movk x9, #0xe353, lsl #16
0x06A85FB8: a974d3f2  movk x9, #0x9ba5, lsl #32
0x06A85FBC: a80200cb  sub x8, x21, x0
0x06A85FC0: 8918e4f2  movk x9, #0x20c4, lsl #48
0x06A85FC4: 087d499b  smulh x8, x8, x9
0x06A85FC8: 09fd4793  asr x9, x8, #7
0x06A85FCC: 28fd488b  add x8, x9, x8, lsr #63
0x06A85FD0: 0001629e  scvtf d0, x8
0x06A85FD4: 28008052  movz w8, #0x1
0x06A85FD8: 600200fd  str d0, [x19]
0x06A85FDC: 68620039  strb w8, [x19, #0x18]
0x06A85FE0: 68220039  strb w8, [x19, #8]
0x06A85FE4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A85FE8: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A85FEC: fe0743f8  ldr x30, [sp], #0x30
0x06A85FF0: c0035fd6  ret

