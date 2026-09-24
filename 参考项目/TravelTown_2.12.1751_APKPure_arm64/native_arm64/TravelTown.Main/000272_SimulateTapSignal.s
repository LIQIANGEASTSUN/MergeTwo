; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 272 MergeEngine.Signal.Board.SimulateTapSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x5FF4C18 | public PositionComponent get_PositionComponent() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x05FF4C18: 000840f9  ldr x0, [x0, #0x10]
0x05FF4C1C: c0035fd6  ret

; RVA 0x5FF4C20 | public void .ctor(PositionComponent positionComponent) { }
; bytes=48 sha256=a2364f2b317f8a877f90e6b968924880992db11eed71ac7b70f2874d19ddaa02 status=arm64_complete_bound indexed_start=True
0x05FF4C20: fe0f1ef8  str x30, [sp, #-0x20]!
0x05FF4C24: f44f01a9  stp x20, x19, [sp, #0x10]
0x05FF4C28: f30301aa  mov x19, x1
0x05FF4C2C: e1031faa  mov x1, xzr
0x05FF4C30: f40300aa  mov x20, x0
0x05FF4C34: 7296db97  bl #0x56da5fc
0x05FF4C38: 930e01f8  str x19, [x20, #0x10]!
0x05FF4C3C: e00314aa  mov x0, x20
0x05FF4C40: e10313aa  mov x1, x19
0x05FF4C44: f44f41a9  ldp x20, x19, [sp, #0x10]
0x05FF4C48: fe0742f8  ldr x30, [sp], #0x20
0x05FF4C4C: 5e2f4617  b #0x31809c4

