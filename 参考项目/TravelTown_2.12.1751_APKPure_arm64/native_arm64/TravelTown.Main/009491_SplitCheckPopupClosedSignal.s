; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 9491 Merger.Game.Signal.Combinations.SplitCheckPopupClosedSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x676E4B0 | public string get_UserAnswer() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x0676E4B0: 000840f9  ldr x0, [x0, #0x10]
0x0676E4B4: c0035fd6  ret

; RVA 0x676E4B8 | public void set_UserAnswer(string value) { }
; bytes=8 sha256=9638a6498b5fb006ea84497bc3e414b724e24f8cff4e29d11aeedf8e6d4d12cb status=arm64_complete_bound indexed_start=True
0x0676E4B8: 010c01f8  str x1, [x0, #0x10]!
0x0676E4BC: 42492817  b #0x31809c4

; RVA 0x676E4C0 | public void .ctor(string userAnswer) { }
; bytes=48 sha256=1880215be6b194dec54c3bb6484ba90f3a2a6d8ac9c2a64984ffcfdd31b59c2a status=arm64_complete_bound indexed_start=True
0x0676E4C0: fe0f1ef8  str x30, [sp, #-0x20]!
0x0676E4C4: f44f01a9  stp x20, x19, [sp, #0x10]
0x0676E4C8: f30301aa  mov x19, x1
0x0676E4CC: e1031faa  mov x1, xzr
0x0676E4D0: f40300aa  mov x20, x0
0x0676E4D4: 4ab0bd97  bl #0x56da5fc
0x0676E4D8: 930e01f8  str x19, [x20, #0x10]!
0x0676E4DC: e00314aa  mov x0, x20
0x0676E4E0: e10313aa  mov x1, x19
0x0676E4E4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0676E4E8: fe0742f8  ldr x30, [sp], #0x20
0x0676E4EC: 36492817  b #0x31809c4

