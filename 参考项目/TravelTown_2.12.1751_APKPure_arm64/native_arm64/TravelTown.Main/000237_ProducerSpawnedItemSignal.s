; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 237 MergeEngine.Signal.Items.ProducerSpawnedItemSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x5FF3C84 | public ProducerComponent get_Producer() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x05FF3C84: 000840f9  ldr x0, [x0, #0x10]
0x05FF3C88: c0035fd6  ret

; RVA 0x5FF3C8C | public BoardItemPosition get_Position() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x05FF3C8C: 000c40f9  ldr x0, [x0, #0x18]
0x05FF3C90: c0035fd6  ret

; RVA 0x5FF3C94 | public void .ctor(ProducerComponent producer, BoardItemPosition position) { }
; bytes=60 sha256=4c088a6170500718e9054cf3e3ebbd0a9bcebc729039e32b872381a414e49c81 status=arm64_complete_bound indexed_start=True
0x05FF3C94: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x05FF3C98: f44f01a9  stp x20, x19, [sp, #0x10]
0x05FF3C9C: f40301aa  mov x20, x1
0x05FF3CA0: e1031faa  mov x1, xzr
0x05FF3CA4: f30302aa  mov x19, x2
0x05FF3CA8: f50300aa  mov x21, x0
0x05FF3CAC: 549adb97  bl #0x56da5fc
0x05FF3CB0: b40e01f8  str x20, [x21, #0x10]!
0x05FF3CB4: e00315aa  mov x0, x21
0x05FF3CB8: e10314aa  mov x1, x20
0x05FF3CBC: 42334697  bl #0x31809c4
0x05FF3CC0: b30600f9  str x19, [x21, #8]
0x05FF3CC4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x05FF3CC8: fe57c2a8  ldp x30, x21, [sp], #0x20
0x05FF3CCC: c0035fd6  ret

