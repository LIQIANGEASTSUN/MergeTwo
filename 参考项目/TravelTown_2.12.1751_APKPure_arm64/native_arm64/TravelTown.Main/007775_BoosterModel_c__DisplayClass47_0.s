; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 7775 .BoosterModel.<>c__DisplayClass47_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x65C6434 | public void .ctor() { }
; bytes=8 sha256=801610ba6d0231890977a5da3a9d9e77db49a85eb5e44d6d7a4f7497a913085a status=arm64_complete_bound indexed_start=True
0x065C6434: e1031faa  mov x1, xzr
0x065C6438: 7150c417  b #0x56da5fc

; RVA 0x65C6B2C | internal bool <InjectDynamicTooltipContent>b__0(ClientAsset asset) { }
; bytes=36 sha256=47e9eae5004474229910b0eab27b4636345a216b11ec3c02aa248498bd10e7dd status=arm64_complete_bound indexed_start=True
0x065C6B2C: fe0f1ff8  str x30, [sp, #-0x10]!
0x065C6B30: e10000b4  cbz x1, #0x65c6b4c
0x065C6B34: 280840f9  ldr x8, [x1, #0x10]
0x065C6B38: 010840f9  ldr x1, [x0, #0x10]
0x065C6B3C: e2031faa  mov x2, xzr
0x065C6B40: e00308aa  mov x0, x8
0x065C6B44: fe0741f8  ldr x30, [sp], #0x10
0x065C6B48: 4a8fbc17  b #0x54ea870
0x065C6B4C: 58e82e97  bl #0x3180cac

