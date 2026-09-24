; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 7778 .BoosterModel.<>c__DisplayClass52_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x65C6700 | public void .ctor() { }
; bytes=8 sha256=4b7258512c788f83db192b5c68e4ba82c56996b7f34f32dd44464793f10e4369 status=arm64_complete_bound indexed_start=True
0x065C6700: e1031faa  mov x1, xzr
0x065C6704: be4fc417  b #0x56da5fc

; RVA 0x65C6B74 | internal bool <HasAnyBoosterPendingForActivation>b__0(KeyValuePair<string, BoosterType> booster) { }
; bytes=72 sha256=7d1b4b0c4170e856a2d160c57ccea4bb0b8b826d45831ec4929650d8293082d3 status=arm64_complete_bound indexed_start=True
0x065C6B74: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x065C6B78: f44f01a9  stp x20, x19, [sp, #0x10]
0x065C6B7C: 15bb00b0  adrp x21, #0x7d27000
0x065C6B80: a86a6539  ldrb w8, [x21, #0x95a]
0x065C6B84: f30302aa  mov x19, x2
0x065C6B88: f40300aa  mov x20, x0
0x065C6B8C: c8000037  tbnz w8, #0, #0x65c6ba4
0x065C6B90: e08900b0  adrp x0, #0x7703000
0x065C6B94: 006042f9  ldr x0, [x0, #0x4c0]
0x065C6B98: a0e72e97  bl #0x3180a18
0x065C6B9C: 28008052  movz w8, #0x1
0x065C6BA0: a86a2539  strb w8, [x21, #0x95a]
0x065C6BA4: 881240b9  ldr w8, [x20, #0x10]
0x065C6BA8: 1f01136b  cmp w8, w19
0x065C6BAC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x065C6BB0: e0179f1a  cset w0, eq
0x065C6BB4: fe57c2a8  ldp x30, x21, [sp], #0x20
0x065C6BB8: c0035fd6  ret

