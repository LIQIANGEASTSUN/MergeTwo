; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 7776 .BoosterModel.<>c__DisplayClass48_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x65C65B8 | public void .ctor() { }
; bytes=8 sha256=f846dd83e0991f9201901b638aa203a770be6d8a1d65c6ca0b58d02630205b79 status=arm64_complete_bound indexed_start=True
0x065C65B8: e1031faa  mov x1, xzr
0x065C65BC: 1050c417  b #0x56da5fc

; RVA 0x65C6B50 | internal bool <GetRemoteActiveBoosterByUuid>b__0(RemoteBoosterData activeBooster) { }
; bytes=36 sha256=18256eb5c6344418ac973756adff1c2febf8379b2cd55dc769cccd94519aef94 status=arm64_complete_bound indexed_start=True
0x065C6B50: fe0f1ff8  str x30, [sp, #-0x10]!
0x065C6B54: e10000b4  cbz x1, #0x65c6b70
0x065C6B58: 281840f9  ldr x8, [x1, #0x30]
0x065C6B5C: 010840f9  ldr x1, [x0, #0x10]
0x065C6B60: e2031faa  mov x2, xzr
0x065C6B64: e00308aa  mov x0, x8
0x065C6B68: fe0741f8  ldr x30, [sp], #0x10
0x065C6B6C: 418fbc17  b #0x54ea870
0x065C6B70: 4fe82e97  bl #0x3180cac

