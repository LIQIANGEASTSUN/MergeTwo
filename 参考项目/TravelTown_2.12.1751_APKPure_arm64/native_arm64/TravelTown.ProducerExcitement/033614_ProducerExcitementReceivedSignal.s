; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 33614 Merger.ProducerExcitement.Signals.ProducerExcitementReceivedSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6AD4E74 | public ProducerExcitementDataResponse get_Response() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06AD4E74: 000840f9  ldr x0, [x0, #0x10]
0x06AD4E78: c0035fd6  ret

; RVA 0x6AD4E7C | public void .ctor() { }
; bytes=8 sha256=1220b96b2182e46f830595000b76575af7e166976ee0bcf91340718c2fe75523 status=arm64_complete_bound indexed_start=True
0x06AD4E7C: e1031faa  mov x1, xzr
0x06AD4E80: df15b017  b #0x56da5fc

; RVA 0x6AD4E84 | public void .ctor(ProducerExcitementDataResponse response) { }
; bytes=48 sha256=9d767975a98e9cd35519601a9df1b368fdf522e3b41ac384f5135ee7165a2f21 status=arm64_complete_bound indexed_start=True
0x06AD4E84: fe0f1ef8  str x30, [sp, #-0x20]!
0x06AD4E88: f44f01a9  stp x20, x19, [sp, #0x10]
0x06AD4E8C: f30301aa  mov x19, x1
0x06AD4E90: e1031faa  mov x1, xzr
0x06AD4E94: f40300aa  mov x20, x0
0x06AD4E98: d915b097  bl #0x56da5fc
0x06AD4E9C: 930e01f8  str x19, [x20, #0x10]!
0x06AD4EA0: e00314aa  mov x0, x20
0x06AD4EA4: e10313aa  mov x1, x19
0x06AD4EA8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06AD4EAC: fe0742f8  ldr x30, [sp], #0x20
0x06AD4EB0: c5ae1a17  b #0x31809c4

