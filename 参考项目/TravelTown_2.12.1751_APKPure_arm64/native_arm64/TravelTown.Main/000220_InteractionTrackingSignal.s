; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 220 MergeEngine.Signal.Items.InteractionTrackingSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x5FF36D0 | public InteractionTrackingData get_InteractionTrackingData() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x05FF36D0: 000840f9  ldr x0, [x0, #0x10]
0x05FF36D4: c0035fd6  ret

; RVA 0x5FF36D8 | public void .ctor(InteractionTrackingData interactionTrackingData) { }
; bytes=48 sha256=ed0d285ca0e198ddcb46b2357f6cba002c8e753b9628780b58cce50aed5b10fe status=arm64_complete_bound indexed_start=True
0x05FF36D8: fe0f1ef8  str x30, [sp, #-0x20]!
0x05FF36DC: f44f01a9  stp x20, x19, [sp, #0x10]
0x05FF36E0: f30301aa  mov x19, x1
0x05FF36E4: e1031faa  mov x1, xzr
0x05FF36E8: f40300aa  mov x20, x0
0x05FF36EC: c49bdb97  bl #0x56da5fc
0x05FF36F0: 930e01f8  str x19, [x20, #0x10]!
0x05FF36F4: e00314aa  mov x0, x20
0x05FF36F8: e10313aa  mov x1, x19
0x05FF36FC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x05FF3700: fe0742f8  ldr x30, [sp], #0x20
0x05FF3704: b0344617  b #0x31809c4

