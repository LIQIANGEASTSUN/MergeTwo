; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 33695 ContextualizedECS.Query.Entities
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C14818 | ContextualizedECS.Query.Entities$$Exclude<DeadComponent>
; native signature: bool ContextualizedECS_Query_Entities__Exclude_DeadComponent_ (ContextualizedECS_Entity_o* entity, const MethodInfo_3C14818* method);
; bytes=64 sha256=b5328616caefed4d5d79b56ae839e99c59cf163b9608312cb43df2c627c74778 status=arm64_complete_bound indexed_start=True
0x03C14818: fe0f1ef8  str x30, [sp, #-0x20]!
0x03C1481C: f44f01a9  stp x20, x19, [sp, #0x10]
0x03C14820: 281c40f9  ldr x8, [x1, #0x38]
0x03C14824: f30301aa  mov x19, x1
0x03C14828: f40300aa  mov x20, x0
0x03C1482C: 680000b5  cbnz x8, #0x3c14838
0x03C14830: e00313aa  mov x0, x19
0x03C14834: 1108d597  bl #0x3156878
0x03C14838: f40000b4  cbz x20, #0x3c14854
0x03C1483C: 681e40f9  ldr x8, [x19, #0x38]
0x03C14840: e00314aa  mov x0, x20
0x03C14844: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03C14848: 010140f9  ldr x1, [x8]
0x03C1484C: fe0742f8  ldr x30, [sp], #0x20
0x03C14850: 221c0014  b #0x3c1b8d8
0x03C14854: 16b1d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C14858 | ContextualizedECS.Query.Entities$$Exclude<MoveBlockComponent>
; native signature: bool ContextualizedECS_Query_Entities__Exclude_MoveBlockComponent_ (ContextualizedECS_Entity_o* entity, const MethodInfo_3C14858* method);
; bytes=64 sha256=ffa612ac82cb41795c520f63dbd20fea2ef8f662145b0744b7b23a41084830e4 status=arm64_complete_bound indexed_start=True
0x03C14858: fe0f1ef8  str x30, [sp, #-0x20]!
0x03C1485C: f44f01a9  stp x20, x19, [sp, #0x10]
0x03C14860: 281c40f9  ldr x8, [x1, #0x38]
0x03C14864: f30301aa  mov x19, x1
0x03C14868: f40300aa  mov x20, x0
0x03C1486C: 680000b5  cbnz x8, #0x3c14878
0x03C14870: e00313aa  mov x0, x19
0x03C14874: 0108d597  bl #0x3156878
0x03C14878: f40000b4  cbz x20, #0x3c14894
0x03C1487C: 681e40f9  ldr x8, [x19, #0x38]
0x03C14880: e00314aa  mov x0, x20
0x03C14884: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03C14888: 010140f9  ldr x1, [x8]
0x03C1488C: fe0742f8  ldr x30, [sp], #0x20
0x03C14890: 1c1d0014  b #0x3c1bd00
0x03C14894: 06b1d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C14898 | ContextualizedECS.Query.Entities$$Exclude<__Il2CppFullySharedGenericStructType>
; native signature: bool ContextualizedECS_Query_Entities__Exclude___Il2CppFullySharedGenericStructType_ (ContextualizedECS_Entity_o* entity, const MethodInfo_3C14898* method);
; bytes=68 sha256=6b9e2a68b30a3659a21e3340a2be4faa5bac1a55165cfb18820a0ccc60d3fa71 status=arm64_complete_bound indexed_start=True
0x03C14898: fe0f1ef8  str x30, [sp, #-0x20]!
0x03C1489C: f44f01a9  stp x20, x19, [sp, #0x10]
0x03C148A0: 281c40f9  ldr x8, [x1, #0x38]
0x03C148A4: f40301aa  mov x20, x1
0x03C148A8: f30300aa  mov x19, x0
0x03C148AC: 680000b5  cbnz x8, #0x3c148b8
0x03C148B0: e00314aa  mov x0, x20
0x03C148B4: f107d597  bl #0x3156878
0x03C148B8: 130100b4  cbz x19, #0x3c148d8
0x03C148BC: 881e40f9  ldr x8, [x20, #0x38]
0x03C148C0: e00313aa  mov x0, x19
0x03C148C4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03C148C8: 010140f9  ldr x1, [x8]
0x03C148CC: 220040f9  ldr x2, [x1]
0x03C148D0: fe0742f8  ldr x30, [sp], #0x20
0x03C148D4: 40001fd6  br x2
0x03C148D8: f5b0d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C148DC | ContextualizedECS.Query.Entities$$Exclude<DeadComponent, CooldownBlockComponent>
; native signature: bool ContextualizedECS_Query_Entities__Exclude_DeadComponent__CooldownBlockComponent_ (ContextualizedECS_Entity_o* entity, const MethodInfo_3C148DC* method);
; bytes=100 sha256=386b06959faff34c211b65a0518bf009b1162c2e19e212bd47cfb73f558ecd3b status=arm64_complete_bound indexed_start=True
0x03C148DC: fe0f1ef8  str x30, [sp, #-0x20]!
0x03C148E0: f44f01a9  stp x20, x19, [sp, #0x10]
0x03C148E4: 281c40f9  ldr x8, [x1, #0x38]
0x03C148E8: f30301aa  mov x19, x1
0x03C148EC: f40300aa  mov x20, x0
0x03C148F0: 680000b5  cbnz x8, #0x3c148fc
0x03C148F4: e00313aa  mov x0, x19
0x03C148F8: e007d597  bl #0x3156878
0x03C148FC: 140200b4  cbz x20, #0x3c1493c
0x03C14900: 681e40f9  ldr x8, [x19, #0x38]
0x03C14904: e00314aa  mov x0, x20
0x03C14908: 010140f9  ldr x1, [x8]
0x03C1490C: f31b0094  bl #0x3c1b8d8
0x03C14910: a0000036  tbz w0, #0, #0x3c14924
0x03C14914: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03C14918: 20008052  movz w0, #0x1
0x03C1491C: fe0742f8  ldr x30, [sp], #0x20
0x03C14920: c0035fd6  ret
0x03C14924: 681e40f9  ldr x8, [x19, #0x38]
0x03C14928: e00314aa  mov x0, x20
0x03C1492C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03C14930: 010540f9  ldr x1, [x8, #8]
0x03C14934: fe0742f8  ldr x30, [sp], #0x20
0x03C14938: c21b0014  b #0x3c1b840
0x03C1493C: dcb0d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C14940 | ContextualizedECS.Query.Entities$$Exclude<DeadComponent, ItemMovedComponent>
; native signature: bool ContextualizedECS_Query_Entities__Exclude_DeadComponent__ItemMovedComponent_ (ContextualizedECS_Entity_o* entity, const MethodInfo_3C14940* method);
; bytes=100 sha256=9612529176a74ca1c4811b4adc3d146b4f32615a19190e42f9c0d46fb5b071e6 status=arm64_complete_bound indexed_start=True
0x03C14940: fe0f1ef8  str x30, [sp, #-0x20]!
0x03C14944: f44f01a9  stp x20, x19, [sp, #0x10]
0x03C14948: 281c40f9  ldr x8, [x1, #0x38]
0x03C1494C: f30301aa  mov x19, x1
0x03C14950: f40300aa  mov x20, x0
0x03C14954: 680000b5  cbnz x8, #0x3c14960
0x03C14958: e00313aa  mov x0, x19
0x03C1495C: c707d597  bl #0x3156878
0x03C14960: 140200b4  cbz x20, #0x3c149a0
0x03C14964: 681e40f9  ldr x8, [x19, #0x38]
0x03C14968: e00314aa  mov x0, x20
0x03C1496C: 010140f9  ldr x1, [x8]
0x03C14970: da1b0094  bl #0x3c1b8d8
0x03C14974: a0000036  tbz w0, #0, #0x3c14988
0x03C14978: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03C1497C: 20008052  movz w0, #0x1
0x03C14980: fe0742f8  ldr x30, [sp], #0x20
0x03C14984: c0035fd6  ret
0x03C14988: 681e40f9  ldr x8, [x19, #0x38]
0x03C1498C: e00314aa  mov x0, x20
0x03C14990: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03C14994: 010540f9  ldr x1, [x8, #8]
0x03C14998: fe0742f8  ldr x30, [sp], #0x20
0x03C1499C: 8d1c0014  b #0x3c1bbd0
0x03C149A0: c3b0d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C149A4 | ContextualizedECS.Query.Entities$$Exclude<DeadComponent, PendingItemsCombinationComponent>
; native signature: bool ContextualizedECS_Query_Entities__Exclude_DeadComponent__PendingItemsCombinationComponent_ (ContextualizedECS_Entity_o* entity, const MethodInfo_3C149A4* method);
; bytes=100 sha256=6dc5a4285e56a5d8637924a3ab960254797806e0f5d85a5e2f23cce3b8cbb698 status=arm64_complete_bound indexed_start=True
0x03C149A4: fe0f1ef8  str x30, [sp, #-0x20]!
0x03C149A8: f44f01a9  stp x20, x19, [sp, #0x10]
0x03C149AC: 281c40f9  ldr x8, [x1, #0x38]
0x03C149B0: f30301aa  mov x19, x1
0x03C149B4: f40300aa  mov x20, x0
0x03C149B8: 680000b5  cbnz x8, #0x3c149c4
0x03C149BC: e00313aa  mov x0, x19
0x03C149C0: ae07d597  bl #0x3156878
0x03C149C4: 140200b4  cbz x20, #0x3c14a04
0x03C149C8: 681e40f9  ldr x8, [x19, #0x38]
0x03C149CC: e00314aa  mov x0, x20
0x03C149D0: 010140f9  ldr x1, [x8]
0x03C149D4: c11b0094  bl #0x3c1b8d8
0x03C149D8: a0000036  tbz w0, #0, #0x3c149ec
0x03C149DC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03C149E0: 20008052  movz w0, #0x1
0x03C149E4: fe0742f8  ldr x30, [sp], #0x20
0x03C149E8: c0035fd6  ret
0x03C149EC: 681e40f9  ldr x8, [x19, #0x38]
0x03C149F0: e00314aa  mov x0, x20
0x03C149F4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03C149F8: 010540f9  ldr x1, [x8, #8]
0x03C149FC: fe0742f8  ldr x30, [sp], #0x20
0x03C14A00: e61c0014  b #0x3c1bd98
0x03C14A04: aab0d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C14A08 | ContextualizedECS.Query.Entities$$Exclude<DeadComponent, ProducerComponent>
; native signature: bool ContextualizedECS_Query_Entities__Exclude_DeadComponent__ProducerComponent_ (ContextualizedECS_Entity_o* entity, const MethodInfo_3C14A08* method);
; bytes=100 sha256=c8d7e0f8d1481faee20e5c13e631e66e174cbbf8a253c9bbe71230323a174930 status=arm64_complete_bound indexed_start=True
0x03C14A08: fe0f1ef8  str x30, [sp, #-0x20]!
0x03C14A0C: f44f01a9  stp x20, x19, [sp, #0x10]
0x03C14A10: 281c40f9  ldr x8, [x1, #0x38]
0x03C14A14: f30301aa  mov x19, x1
0x03C14A18: f40300aa  mov x20, x0
0x03C14A1C: 680000b5  cbnz x8, #0x3c14a28
0x03C14A20: e00313aa  mov x0, x19
0x03C14A24: 9507d597  bl #0x3156878
0x03C14A28: 140200b4  cbz x20, #0x3c14a68
0x03C14A2C: 681e40f9  ldr x8, [x19, #0x38]
0x03C14A30: e00314aa  mov x0, x20
0x03C14A34: 010140f9  ldr x1, [x8]
0x03C14A38: a81b0094  bl #0x3c1b8d8
0x03C14A3C: a0000036  tbz w0, #0, #0x3c14a50
0x03C14A40: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03C14A44: 20008052  movz w0, #0x1
0x03C14A48: fe0742f8  ldr x30, [sp], #0x20
0x03C14A4C: c0035fd6  ret
0x03C14A50: 681e40f9  ldr x8, [x19, #0x38]
0x03C14A54: e00314aa  mov x0, x20
0x03C14A58: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03C14A5C: 010540f9  ldr x1, [x8, #8]
0x03C14A60: fe0742f8  ldr x30, [sp], #0x20
0x03C14A64: f31c0014  b #0x3c1be30
0x03C14A68: 91b0d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C14A6C | ContextualizedECS.Query.Entities$$Exclude<DeadComponent, TimeLockBlockComponent>
; native signature: bool ContextualizedECS_Query_Entities__Exclude_DeadComponent__TimeLockBlockComponent_ (ContextualizedECS_Entity_o* entity, const MethodInfo_3C14A6C* method);
; bytes=100 sha256=383830cbae2db983dd7146d804e2345bba1bbdbe1d4257a27a7143d3d819a340 status=arm64_complete_bound indexed_start=True
0x03C14A6C: fe0f1ef8  str x30, [sp, #-0x20]!
0x03C14A70: f44f01a9  stp x20, x19, [sp, #0x10]
0x03C14A74: 281c40f9  ldr x8, [x1, #0x38]
0x03C14A78: f30301aa  mov x19, x1
0x03C14A7C: f40300aa  mov x20, x0
0x03C14A80: 680000b5  cbnz x8, #0x3c14a8c
0x03C14A84: e00313aa  mov x0, x19
0x03C14A88: 7c07d597  bl #0x3156878
0x03C14A8C: 140200b4  cbz x20, #0x3c14acc
0x03C14A90: 681e40f9  ldr x8, [x19, #0x38]
0x03C14A94: e00314aa  mov x0, x20
0x03C14A98: 010140f9  ldr x1, [x8]
0x03C14A9C: 8f1b0094  bl #0x3c1b8d8
0x03C14AA0: a0000036  tbz w0, #0, #0x3c14ab4
0x03C14AA4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03C14AA8: 20008052  movz w0, #0x1
0x03C14AAC: fe0742f8  ldr x30, [sp], #0x20
0x03C14AB0: c0035fd6  ret
0x03C14AB4: 681e40f9  ldr x8, [x19, #0x38]
0x03C14AB8: e00314aa  mov x0, x20
0x03C14ABC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03C14AC0: 010540f9  ldr x1, [x8, #8]
0x03C14AC4: fe0742f8  ldr x30, [sp], #0x20
0x03C14AC8: 721d0014  b #0x3c1c090
0x03C14ACC: 78b0d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C14AD0 | ContextualizedECS.Query.Entities$$Exclude<MoveBlockComponent, PendingItemsCombinationComponent>
; native signature: bool ContextualizedECS_Query_Entities__Exclude_MoveBlockComponent__PendingItemsCombinationComponent_ (ContextualizedECS_Entity_o* entity, const MethodInfo_3C14AD0* method);
; bytes=100 sha256=3e1552f86735015bc721bd4160ed335f5657cbdf6ee455ed1705d19b2f2f1249 status=arm64_complete_bound indexed_start=True
0x03C14AD0: fe0f1ef8  str x30, [sp, #-0x20]!
0x03C14AD4: f44f01a9  stp x20, x19, [sp, #0x10]
0x03C14AD8: 281c40f9  ldr x8, [x1, #0x38]
0x03C14ADC: f30301aa  mov x19, x1
0x03C14AE0: f40300aa  mov x20, x0
0x03C14AE4: 680000b5  cbnz x8, #0x3c14af0
0x03C14AE8: e00313aa  mov x0, x19
0x03C14AEC: 6307d597  bl #0x3156878
0x03C14AF0: 140200b4  cbz x20, #0x3c14b30
0x03C14AF4: 681e40f9  ldr x8, [x19, #0x38]
0x03C14AF8: e00314aa  mov x0, x20
0x03C14AFC: 010140f9  ldr x1, [x8]
0x03C14B00: 801c0094  bl #0x3c1bd00
0x03C14B04: a0000036  tbz w0, #0, #0x3c14b18
0x03C14B08: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03C14B0C: 20008052  movz w0, #0x1
0x03C14B10: fe0742f8  ldr x30, [sp], #0x20
0x03C14B14: c0035fd6  ret
0x03C14B18: 681e40f9  ldr x8, [x19, #0x38]
0x03C14B1C: e00314aa  mov x0, x20
0x03C14B20: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03C14B24: 010540f9  ldr x1, [x8, #8]
0x03C14B28: fe0742f8  ldr x30, [sp], #0x20
0x03C14B2C: 9b1c0014  b #0x3c1bd98
0x03C14B30: 5fb0d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C14B34 | ContextualizedECS.Query.Entities$$Exclude<ProducerComponent, DeadComponent>
; native signature: bool ContextualizedECS_Query_Entities__Exclude_ProducerComponent__DeadComponent_ (ContextualizedECS_Entity_o* entity, const MethodInfo_3C14B34* method);
; bytes=100 sha256=a445ab7315440eae923c4b0ec481229b991ed6c6c39c2e43c043b89671c62a4d status=arm64_complete_bound indexed_start=True
0x03C14B34: fe0f1ef8  str x30, [sp, #-0x20]!
0x03C14B38: f44f01a9  stp x20, x19, [sp, #0x10]
0x03C14B3C: 281c40f9  ldr x8, [x1, #0x38]
0x03C14B40: f30301aa  mov x19, x1
0x03C14B44: f40300aa  mov x20, x0
0x03C14B48: 680000b5  cbnz x8, #0x3c14b54
0x03C14B4C: e00313aa  mov x0, x19
0x03C14B50: 4a07d597  bl #0x3156878
0x03C14B54: 140200b4  cbz x20, #0x3c14b94
0x03C14B58: 681e40f9  ldr x8, [x19, #0x38]
0x03C14B5C: e00314aa  mov x0, x20
0x03C14B60: 010140f9  ldr x1, [x8]
0x03C14B64: b31c0094  bl #0x3c1be30
0x03C14B68: a0000036  tbz w0, #0, #0x3c14b7c
0x03C14B6C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03C14B70: 20008052  movz w0, #0x1
0x03C14B74: fe0742f8  ldr x30, [sp], #0x20
0x03C14B78: c0035fd6  ret
0x03C14B7C: 681e40f9  ldr x8, [x19, #0x38]
0x03C14B80: e00314aa  mov x0, x20
0x03C14B84: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03C14B88: 010540f9  ldr x1, [x8, #8]
0x03C14B8C: fe0742f8  ldr x30, [sp], #0x20
0x03C14B90: 521b0014  b #0x3c1b8d8
0x03C14B94: 46b0d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C14B98 | ContextualizedECS.Query.Entities$$Exclude<__Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType>
; native signature: bool ContextualizedECS_Query_Entities__Exclude___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType_ (ContextualizedECS_Entity_o* entity, const MethodInfo_3C14B98* method);
; bytes=108 sha256=78fed681ae78933e1fb846c94135e06724156a3b4071c814450b2d52a43101d6 status=arm64_complete_bound indexed_start=True
0x03C14B98: fe0f1ef8  str x30, [sp, #-0x20]!
0x03C14B9C: f44f01a9  stp x20, x19, [sp, #0x10]
0x03C14BA0: 281c40f9  ldr x8, [x1, #0x38]
0x03C14BA4: f40301aa  mov x20, x1
0x03C14BA8: f30300aa  mov x19, x0
0x03C14BAC: 680000b5  cbnz x8, #0x3c14bb8
0x03C14BB0: e00314aa  mov x0, x20
0x03C14BB4: 3107d597  bl #0x3156878
0x03C14BB8: 530200b4  cbz x19, #0x3c14c00
0x03C14BBC: 881e40f9  ldr x8, [x20, #0x38]
0x03C14BC0: e00313aa  mov x0, x19
0x03C14BC4: 010140f9  ldr x1, [x8]
0x03C14BC8: 280040f9  ldr x8, [x1]
0x03C14BCC: 00013fd6  blr x8
0x03C14BD0: a0000036  tbz w0, #0, #0x3c14be4
0x03C14BD4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03C14BD8: 20008052  movz w0, #0x1
0x03C14BDC: fe0742f8  ldr x30, [sp], #0x20
0x03C14BE0: c0035fd6  ret
0x03C14BE4: 881e40f9  ldr x8, [x20, #0x38]
0x03C14BE8: e00313aa  mov x0, x19
0x03C14BEC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03C14BF0: 010540f9  ldr x1, [x8, #8]
0x03C14BF4: 220040f9  ldr x2, [x1]
0x03C14BF8: fe0742f8  ldr x30, [sp], #0x20
0x03C14BFC: 40001fd6  br x2
0x03C14C00: 2bb0d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C14C04 | ContextualizedECS.Query.Entities$$Exclude<DeadComponent, CooldownBlockComponent, TimeLockBlockComponent>
; native signature: bool ContextualizedECS_Query_Entities__Exclude_DeadComponent__CooldownBlockComponent__TimeLockBlockComponent_ (ContextualizedECS_Entity_o* entity, const MethodInfo_3C14C04* method);
; bytes=120 sha256=fe7cf81cd12fe2087b4bfa119d892677ea26ba53d304f651f9f18a175116cb6d status=arm64_complete_bound indexed_start=True
0x03C14C04: fe0f1ef8  str x30, [sp, #-0x20]!
0x03C14C08: f44f01a9  stp x20, x19, [sp, #0x10]
0x03C14C0C: 281c40f9  ldr x8, [x1, #0x38]
0x03C14C10: f30301aa  mov x19, x1
0x03C14C14: f40300aa  mov x20, x0
0x03C14C18: 680000b5  cbnz x8, #0x3c14c24
0x03C14C1C: e00313aa  mov x0, x19
0x03C14C20: 1607d597  bl #0x3156878
0x03C14C24: b40200b4  cbz x20, #0x3c14c78
0x03C14C28: 681e40f9  ldr x8, [x19, #0x38]
0x03C14C2C: e00314aa  mov x0, x20
0x03C14C30: 010140f9  ldr x1, [x8]
0x03C14C34: 291b0094  bl #0x3c1b8d8
0x03C14C38: c0000037  tbnz w0, #0, #0x3c14c50
0x03C14C3C: 681e40f9  ldr x8, [x19, #0x38]
0x03C14C40: e00314aa  mov x0, x20
0x03C14C44: 010540f9  ldr x1, [x8, #8]
0x03C14C48: fe1a0094  bl #0x3c1b840
0x03C14C4C: a0000036  tbz w0, #0, #0x3c14c60
0x03C14C50: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03C14C54: 20008052  movz w0, #0x1
0x03C14C58: fe0742f8  ldr x30, [sp], #0x20
0x03C14C5C: c0035fd6  ret
0x03C14C60: 681e40f9  ldr x8, [x19, #0x38]
0x03C14C64: e00314aa  mov x0, x20
0x03C14C68: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03C14C6C: 010940f9  ldr x1, [x8, #0x10]
0x03C14C70: fe0742f8  ldr x30, [sp], #0x20
0x03C14C74: 071d0014  b #0x3c1c090
0x03C14C78: 0db0d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C14C7C | ContextualizedECS.Query.Entities$$Exclude<DeadComponent, MoveBlockComponent, PendingItemsCombinationComponent>
; native signature: bool ContextualizedECS_Query_Entities__Exclude_DeadComponent__MoveBlockComponent__PendingItemsCombinationComponent_ (ContextualizedECS_Entity_o* entity, const MethodInfo_3C14C7C* method);
; bytes=120 sha256=57d327d43796fa6f18b5a0c3c4eaa585eefd7c5c94ce2d16618a3658538d72a6 status=arm64_complete_bound indexed_start=True
0x03C14C7C: fe0f1ef8  str x30, [sp, #-0x20]!
0x03C14C80: f44f01a9  stp x20, x19, [sp, #0x10]
0x03C14C84: 281c40f9  ldr x8, [x1, #0x38]
0x03C14C88: f30301aa  mov x19, x1
0x03C14C8C: f40300aa  mov x20, x0
0x03C14C90: 680000b5  cbnz x8, #0x3c14c9c
0x03C14C94: e00313aa  mov x0, x19
0x03C14C98: f806d597  bl #0x3156878
0x03C14C9C: b40200b4  cbz x20, #0x3c14cf0
0x03C14CA0: 681e40f9  ldr x8, [x19, #0x38]
0x03C14CA4: e00314aa  mov x0, x20
0x03C14CA8: 010140f9  ldr x1, [x8]
0x03C14CAC: 0b1b0094  bl #0x3c1b8d8
0x03C14CB0: c0000037  tbnz w0, #0, #0x3c14cc8
0x03C14CB4: 681e40f9  ldr x8, [x19, #0x38]
0x03C14CB8: e00314aa  mov x0, x20
0x03C14CBC: 010540f9  ldr x1, [x8, #8]
0x03C14CC0: 101c0094  bl #0x3c1bd00
0x03C14CC4: a0000036  tbz w0, #0, #0x3c14cd8
0x03C14CC8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03C14CCC: 20008052  movz w0, #0x1
0x03C14CD0: fe0742f8  ldr x30, [sp], #0x20
0x03C14CD4: c0035fd6  ret
0x03C14CD8: 681e40f9  ldr x8, [x19, #0x38]
0x03C14CDC: e00314aa  mov x0, x20
0x03C14CE0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03C14CE4: 010940f9  ldr x1, [x8, #0x10]
0x03C14CE8: fe0742f8  ldr x30, [sp], #0x20
0x03C14CEC: 2b1c0014  b #0x3c1bd98
0x03C14CF0: efafd597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C14CF4 | ContextualizedECS.Query.Entities$$Exclude<__Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType>
; native signature: bool ContextualizedECS_Query_Entities__Exclude___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType_ (ContextualizedECS_Entity_o* entity, const MethodInfo_3C14CF4* method);
; bytes=132 sha256=34da43c7fc5e9beb68a76fab8dd46be92a2e4fda1aef2a74ec81f43bcd52ec0d status=arm64_complete_bound indexed_start=True
0x03C14CF4: fe0f1ef8  str x30, [sp, #-0x20]!
0x03C14CF8: f44f01a9  stp x20, x19, [sp, #0x10]
0x03C14CFC: 281c40f9  ldr x8, [x1, #0x38]
0x03C14D00: f40301aa  mov x20, x1
0x03C14D04: f30300aa  mov x19, x0
0x03C14D08: 680000b5  cbnz x8, #0x3c14d14
0x03C14D0C: e00314aa  mov x0, x20
0x03C14D10: da06d597  bl #0x3156878
0x03C14D14: 130300b4  cbz x19, #0x3c14d74
0x03C14D18: 881e40f9  ldr x8, [x20, #0x38]
0x03C14D1C: e00313aa  mov x0, x19
0x03C14D20: 010140f9  ldr x1, [x8]
0x03C14D24: 280040f9  ldr x8, [x1]
0x03C14D28: 00013fd6  blr x8
0x03C14D2C: e0000037  tbnz w0, #0, #0x3c14d48
0x03C14D30: 881e40f9  ldr x8, [x20, #0x38]
0x03C14D34: e00313aa  mov x0, x19
0x03C14D38: 010540f9  ldr x1, [x8, #8]
0x03C14D3C: 280040f9  ldr x8, [x1]
0x03C14D40: 00013fd6  blr x8
0x03C14D44: a0000036  tbz w0, #0, #0x3c14d58
0x03C14D48: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03C14D4C: 20008052  movz w0, #0x1
0x03C14D50: fe0742f8  ldr x30, [sp], #0x20
0x03C14D54: c0035fd6  ret
0x03C14D58: 881e40f9  ldr x8, [x20, #0x38]
0x03C14D5C: e00313aa  mov x0, x19
0x03C14D60: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03C14D64: 010940f9  ldr x1, [x8, #0x10]
0x03C14D68: 220040f9  ldr x2, [x1]
0x03C14D6C: fe0742f8  ldr x30, [sp], #0x20
0x03C14D70: 40001fd6  br x2
0x03C14D74: ceafd597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C19C6C | ContextualizedECS.Query.Entities$$With<BoardTilePositionComponent>
; native signature: ContextualizedECS_Query_Entities_MatchDelegate_ValueTuple_Entity__T1___o* ContextualizedECS_Query_Entities__With_BoardTilePositionComponent_ (const MethodInfo_3C19C6C* method);
; bytes=84 sha256=3ca9a90716a0f7cd948196b343913e948cee3c1c2a32a8b904a19714d0bec547 status=arm64_complete_bound indexed_start=True
0x03C19C6C: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x03C19C70: 081c40f9  ldr x8, [x0, #0x38]
0x03C19C74: f30300aa  mov x19, x0
0x03C19C78: 880000b5  cbnz x8, #0x3c19c88
0x03C19C7C: e00313aa  mov x0, x19
0x03C19C80: fef2d497  bl #0x3156878
0x03C19C84: 681e40f9  ldr x8, [x19, #0x38]
0x03C19C88: 000540f9  ldr x0, [x8, #8]
0x03C19C8C: 08d44439  ldrb w8, [x0, #0x135]
0x03C19C90: 48000037  tbnz w8, #0, #0x3c19c98
0x03C19C94: e2f2d497  bl #0x315681c
0x03C19C98: 029cd597  bl #0x3180ca0
0x03C19C9C: 681e40f9  ldr x8, [x19, #0x38]
0x03C19CA0: e1031faa  mov x1, xzr
0x03C19CA4: f30300aa  mov x19, x0
0x03C19CA8: 020140f9  ldr x2, [x8]
0x03C19CAC: 030940f9  ldr x3, [x8, #0x10]
0x03C19CB0: 93fc1694  bl #0x41d8efc
0x03C19CB4: e00313aa  mov x0, x19
0x03C19CB8: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x03C19CBC: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C19CC0 | ContextualizedECS.Query.Entities$$With<BornComponent>
; native signature: ContextualizedECS_Query_Entities_MatchDelegate_ValueTuple_Entity__T1___o* ContextualizedECS_Query_Entities__With_BornComponent_ (const MethodInfo_3C19CC0* method);
; bytes=84 sha256=814d87b7f3d998f11f5220a8abdcc9cd6d364015d13f4e67b842fa1647d57436 status=arm64_complete_bound indexed_start=True
0x03C19CC0: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x03C19CC4: 081c40f9  ldr x8, [x0, #0x38]
0x03C19CC8: f30300aa  mov x19, x0
0x03C19CCC: 880000b5  cbnz x8, #0x3c19cdc
0x03C19CD0: e00313aa  mov x0, x19
0x03C19CD4: e9f2d497  bl #0x3156878
0x03C19CD8: 681e40f9  ldr x8, [x19, #0x38]
0x03C19CDC: 000540f9  ldr x0, [x8, #8]
0x03C19CE0: 08d44439  ldrb w8, [x0, #0x135]
0x03C19CE4: 48000037  tbnz w8, #0, #0x3c19cec
0x03C19CE8: cdf2d497  bl #0x315681c
0x03C19CEC: ed9bd597  bl #0x3180ca0
0x03C19CF0: 681e40f9  ldr x8, [x19, #0x38]
0x03C19CF4: e1031faa  mov x1, xzr
0x03C19CF8: f30300aa  mov x19, x0
0x03C19CFC: 020140f9  ldr x2, [x8]
0x03C19D00: 030940f9  ldr x3, [x8, #0x10]
0x03C19D04: e0fc1694  bl #0x41d9084
0x03C19D08: e00313aa  mov x0, x19
0x03C19D0C: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x03C19D10: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C19D14 | ContextualizedECS.Query.Entities$$With<DeadComponent>
; native signature: ContextualizedECS_Query_Entities_MatchDelegate_ValueTuple_Entity__T1___o* ContextualizedECS_Query_Entities__With_DeadComponent_ (const MethodInfo_3C19D14* method);
; bytes=84 sha256=d6d72735ca39f4351e9d773d1db7c4134d93cec09743aecdb2fb19cbe2cb515a status=arm64_complete_bound indexed_start=True
0x03C19D14: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x03C19D18: 081c40f9  ldr x8, [x0, #0x38]
0x03C19D1C: f30300aa  mov x19, x0
0x03C19D20: 880000b5  cbnz x8, #0x3c19d30
0x03C19D24: e00313aa  mov x0, x19
0x03C19D28: d4f2d497  bl #0x3156878
0x03C19D2C: 681e40f9  ldr x8, [x19, #0x38]
0x03C19D30: 000540f9  ldr x0, [x8, #8]
0x03C19D34: 08d44439  ldrb w8, [x0, #0x135]
0x03C19D38: 48000037  tbnz w8, #0, #0x3c19d40
0x03C19D3C: b8f2d497  bl #0x315681c
0x03C19D40: d89bd597  bl #0x3180ca0
0x03C19D44: 681e40f9  ldr x8, [x19, #0x38]
0x03C19D48: e1031faa  mov x1, xzr
0x03C19D4C: f30300aa  mov x19, x0
0x03C19D50: 020140f9  ldr x2, [x8]
0x03C19D54: 030940f9  ldr x3, [x8, #0x10]
0x03C19D58: 2dfd1694  bl #0x41d920c
0x03C19D5C: e00313aa  mov x0, x19
0x03C19D60: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x03C19D64: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C19D68 | ContextualizedECS.Query.Entities$$With<IdComponent>
; native signature: ContextualizedECS_Query_Entities_MatchDelegate_ValueTuple_Entity__T1___o* ContextualizedECS_Query_Entities__With_IdComponent_ (const MethodInfo_3C19D68* method);
; bytes=84 sha256=10d9b24ae1c358c6d7f94c475c1030a4ee1e94cf142aaf28f7e77e6b7c0c2800 status=arm64_complete_bound indexed_start=True
0x03C19D68: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x03C19D6C: 081c40f9  ldr x8, [x0, #0x38]
0x03C19D70: f30300aa  mov x19, x0
0x03C19D74: 880000b5  cbnz x8, #0x3c19d84
0x03C19D78: e00313aa  mov x0, x19
0x03C19D7C: bff2d497  bl #0x3156878
0x03C19D80: 681e40f9  ldr x8, [x19, #0x38]
0x03C19D84: 000540f9  ldr x0, [x8, #8]
0x03C19D88: 08d44439  ldrb w8, [x0, #0x135]
0x03C19D8C: 48000037  tbnz w8, #0, #0x3c19d94
0x03C19D90: a3f2d497  bl #0x315681c
0x03C19D94: c39bd597  bl #0x3180ca0
0x03C19D98: 681e40f9  ldr x8, [x19, #0x38]
0x03C19D9C: e1031faa  mov x1, xzr
0x03C19DA0: f30300aa  mov x19, x0
0x03C19DA4: 020140f9  ldr x2, [x8]
0x03C19DA8: 030940f9  ldr x3, [x8, #0x10]
0x03C19DAC: 7afd1694  bl #0x41d9394
0x03C19DB0: e00313aa  mov x0, x19
0x03C19DB4: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x03C19DB8: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C19DBC | ContextualizedECS.Query.Entities$$With<ItemMovedComponent>
; native signature: ContextualizedECS_Query_Entities_MatchDelegate_ValueTuple_Entity__T1___o* ContextualizedECS_Query_Entities__With_ItemMovedComponent_ (const MethodInfo_3C19DBC* method);
; bytes=84 sha256=5a66e167bb03d2a50ad14f767b8efc705e07b4a8bcdfee2fa61fe02f5cb02bc0 status=arm64_complete_bound indexed_start=True
0x03C19DBC: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x03C19DC0: 081c40f9  ldr x8, [x0, #0x38]
0x03C19DC4: f30300aa  mov x19, x0
0x03C19DC8: 880000b5  cbnz x8, #0x3c19dd8
0x03C19DCC: e00313aa  mov x0, x19
0x03C19DD0: aaf2d497  bl #0x3156878
0x03C19DD4: 681e40f9  ldr x8, [x19, #0x38]
0x03C19DD8: 000540f9  ldr x0, [x8, #8]
0x03C19DDC: 08d44439  ldrb w8, [x0, #0x135]
0x03C19DE0: 48000037  tbnz w8, #0, #0x3c19de8
0x03C19DE4: 8ef2d497  bl #0x315681c
0x03C19DE8: ae9bd597  bl #0x3180ca0
0x03C19DEC: 681e40f9  ldr x8, [x19, #0x38]
0x03C19DF0: e1031faa  mov x1, xzr
0x03C19DF4: f30300aa  mov x19, x0
0x03C19DF8: 020140f9  ldr x2, [x8]
0x03C19DFC: 030940f9  ldr x3, [x8, #0x10]
0x03C19E00: c7fd1694  bl #0x41d951c
0x03C19E04: e00313aa  mov x0, x19
0x03C19E08: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x03C19E0C: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C19E10 | ContextualizedECS.Query.Entities$$With<TimeCycleComponent>
; native signature: ContextualizedECS_Query_Entities_MatchDelegate_ValueTuple_Entity__T1___o* ContextualizedECS_Query_Entities__With_TimeCycleComponent_ (const MethodInfo_3C19E10* method);
; bytes=84 sha256=118f014e9c7ee18a60c696145a89b42c5e22dd63d679767a417054d507f8c2da status=arm64_complete_bound indexed_start=True
0x03C19E10: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x03C19E14: 081c40f9  ldr x8, [x0, #0x38]
0x03C19E18: f30300aa  mov x19, x0
0x03C19E1C: 880000b5  cbnz x8, #0x3c19e2c
0x03C19E20: e00313aa  mov x0, x19
0x03C19E24: 95f2d497  bl #0x3156878
0x03C19E28: 681e40f9  ldr x8, [x19, #0x38]
0x03C19E2C: 000540f9  ldr x0, [x8, #8]
0x03C19E30: 08d44439  ldrb w8, [x0, #0x135]
0x03C19E34: 48000037  tbnz w8, #0, #0x3c19e3c
0x03C19E38: 79f2d497  bl #0x315681c
0x03C19E3C: 999bd597  bl #0x3180ca0
0x03C19E40: 681e40f9  ldr x8, [x19, #0x38]
0x03C19E44: e1031faa  mov x1, xzr
0x03C19E48: f30300aa  mov x19, x0
0x03C19E4C: 020140f9  ldr x2, [x8]
0x03C19E50: 030940f9  ldr x3, [x8, #0x10]
0x03C19E54: 14fe1694  bl #0x41d96a4
0x03C19E58: e00313aa  mov x0, x19
0x03C19E5C: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x03C19E60: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C19E64 | ContextualizedECS.Query.Entities$$With<TimeLockComponent>
; native signature: ContextualizedECS_Query_Entities_MatchDelegate_ValueTuple_Entity__T1___o* ContextualizedECS_Query_Entities__With_TimeLockComponent_ (const MethodInfo_3C19E64* method);
; bytes=84 sha256=5febcea234b1d0137bf928a33a56ae925aaecf6a855009a440a22f0d2255bf4b status=arm64_complete_bound indexed_start=True
0x03C19E64: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x03C19E68: 081c40f9  ldr x8, [x0, #0x38]
0x03C19E6C: f30300aa  mov x19, x0
0x03C19E70: 880000b5  cbnz x8, #0x3c19e80
0x03C19E74: e00313aa  mov x0, x19
0x03C19E78: 80f2d497  bl #0x3156878
0x03C19E7C: 681e40f9  ldr x8, [x19, #0x38]
0x03C19E80: 000540f9  ldr x0, [x8, #8]
0x03C19E84: 08d44439  ldrb w8, [x0, #0x135]
0x03C19E88: 48000037  tbnz w8, #0, #0x3c19e90
0x03C19E8C: 64f2d497  bl #0x315681c
0x03C19E90: 849bd597  bl #0x3180ca0
0x03C19E94: 681e40f9  ldr x8, [x19, #0x38]
0x03C19E98: e1031faa  mov x1, xzr
0x03C19E9C: f30300aa  mov x19, x0
0x03C19EA0: 020140f9  ldr x2, [x8]
0x03C19EA4: 030940f9  ldr x3, [x8, #0x10]
0x03C19EA8: 61fe1694  bl #0x41d982c
0x03C19EAC: e00313aa  mov x0, x19
0x03C19EB0: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x03C19EB4: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C19EB8 | ContextualizedECS.Query.Entities$$With<__Il2CppFullySharedGenericStructType>
; native signature: ContextualizedECS_Query_Entities_MatchDelegate_ValueTuple_Entity__T1___o* ContextualizedECS_Query_Entities__With___Il2CppFullySharedGenericStructType_ (const MethodInfo_3C19EB8* method);
; bytes=88 sha256=5bff03f766d5cf93273824287fd4d2f6f6549542825a98d7da314a669e5dbca1 status=arm64_complete_bound indexed_start=True
0x03C19EB8: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x03C19EBC: 081c40f9  ldr x8, [x0, #0x38]
0x03C19EC0: f30300aa  mov x19, x0
0x03C19EC4: 880000b5  cbnz x8, #0x3c19ed4
0x03C19EC8: e00313aa  mov x0, x19
0x03C19ECC: 6bf2d497  bl #0x3156878
0x03C19ED0: 681e40f9  ldr x8, [x19, #0x38]
0x03C19ED4: 000540f9  ldr x0, [x8, #8]
0x03C19ED8: 08d44439  ldrb w8, [x0, #0x135]
0x03C19EDC: 48000037  tbnz w8, #0, #0x3c19ee4
0x03C19EE0: 4ff2d497  bl #0x315681c
0x03C19EE4: 6f9bd597  bl #0x3180ca0
0x03C19EE8: 681e40f9  ldr x8, [x19, #0x38]
0x03C19EEC: e1031faa  mov x1, xzr
0x03C19EF0: f30300aa  mov x19, x0
0x03C19EF4: 030940f9  ldr x3, [x8, #0x10]
0x03C19EF8: 020140f9  ldr x2, [x8]
0x03C19EFC: 690040f9  ldr x9, [x3]
0x03C19F00: 20013fd6  blr x9
0x03C19F04: e00313aa  mov x0, x19
0x03C19F08: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x03C19F0C: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C14D78 | ContextualizedECS.Query.Entities$$MatchMethod<BoardTilePositionComponent>
; native signature: bool ContextualizedECS_Query_Entities__MatchMethod_BoardTilePositionComponent_ (ContextualizedECS_Entity_o* entity, System_ValueTuple_Entity__T1__o* result, const MethodInfo_3C14D78* method);
; bytes=160 sha256=821d3f86324f7df64b59f1e2e76efdbad807c0b717adbf1b4da9111281338325 status=arm64_complete_bound indexed_start=True
0x03C14D78: ff0301d1  sub sp, sp, #0x40
0x03C14D7C: fe0b00f9  str x30, [sp, #0x10]
0x03C14D80: f65702a9  stp x22, x21, [sp, #0x20]
0x03C14D84: f44f03a9  stp x20, x19, [sp, #0x30]
0x03C14D88: 481c40f9  ldr x8, [x2, #0x38]
0x03C14D8C: f50302aa  mov x21, x2
0x03C14D90: f30301aa  mov x19, x1
0x03C14D94: f40300aa  mov x20, x0
0x03C14D98: 680000b5  cbnz x8, #0x3c14da4
0x03C14D9C: e00315aa  mov x0, x21
0x03C14DA0: b606d597  bl #0x3156878
0x03C14DA4: ff1b00b9  str wzr, [sp, #0x18]
0x03C14DA8: 7f7e00a9  stp xzr, xzr, [x19]
0x03C14DAC: 540300b4  cbz x20, #0x3c14e14
0x03C14DB0: a81e40f9  ldr x8, [x21, #0x38]
0x03C14DB4: e1630091  add x1, sp, #0x18
0x03C14DB8: e00314aa  mov x0, x20
0x03C14DBC: 020940f9  ldr x2, [x8, #0x10]
0x03C14DC0: 49250094  bl #0x3c1e2e4
0x03C14DC4: f603002a  mov w22, w0
0x03C14DC8: a0010036  tbz w0, #0, #0x3c14dfc
0x03C14DCC: ff7f00a9  stp xzr, xzr, [sp]
0x03C14DD0: a81e40f9  ldr x8, [x21, #0x38]
0x03C14DD4: e21b40b9  ldr w2, [sp, #0x18]
0x03C14DD8: e0030091  mov x0, sp
0x03C14DDC: e10314aa  mov x1, x20
0x03C14DE0: 031140f9  ldr x3, [x8, #0x20]
0x03C14DE4: d7bf2e94  bl #0x47c4d40
0x03C14DE8: e003c03d  ldr q0, [sp]
0x03C14DEC: e00313aa  mov x0, x19
0x03C14DF0: e1031faa  mov x1, xzr
0x03C14DF4: 6002803d  str q0, [x19]
0x03C14DF8: f3aed597  bl #0x31809c4
0x03C14DFC: c0020012  and w0, w22, #1
0x03C14E00: f44f43a9  ldp x20, x19, [sp, #0x30]
0x03C14E04: f65742a9  ldp x22, x21, [sp, #0x20]
0x03C14E08: fe0b40f9  ldr x30, [sp, #0x10]
0x03C14E0C: ff030191  add sp, sp, #0x40
0x03C14E10: c0035fd6  ret
0x03C14E14: a6afd597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C14E18 | ContextualizedECS.Query.Entities$$MatchMethod<BornComponent>
; native signature: bool ContextualizedECS_Query_Entities__MatchMethod_BornComponent_ (ContextualizedECS_Entity_o* entity, System_ValueTuple_Entity__T1__o* result, const MethodInfo_3C14E18* method);
; bytes=160 sha256=a505fd38e6889de53e21be34c9531005433e1b43eb3b401470933ccd2085669c status=arm64_complete_bound indexed_start=True
0x03C14E18: ff0301d1  sub sp, sp, #0x40
0x03C14E1C: fe0b00f9  str x30, [sp, #0x10]
0x03C14E20: f65702a9  stp x22, x21, [sp, #0x20]
0x03C14E24: f44f03a9  stp x20, x19, [sp, #0x30]
0x03C14E28: 481c40f9  ldr x8, [x2, #0x38]
0x03C14E2C: f50302aa  mov x21, x2
0x03C14E30: f30301aa  mov x19, x1
0x03C14E34: f40300aa  mov x20, x0
0x03C14E38: 680000b5  cbnz x8, #0x3c14e44
0x03C14E3C: e00315aa  mov x0, x21
0x03C14E40: 8e06d597  bl #0x3156878
0x03C14E44: ff0f00f9  str xzr, [sp, #0x18]
0x03C14E48: 7f7e00a9  stp xzr, xzr, [x19]
0x03C14E4C: 540300b4  cbz x20, #0x3c14eb4
0x03C14E50: a81e40f9  ldr x8, [x21, #0x38]
0x03C14E54: e1630091  add x1, sp, #0x18
0x03C14E58: e00314aa  mov x0, x20
0x03C14E5C: 020940f9  ldr x2, [x8, #0x10]
0x03C14E60: 64250094  bl #0x3c1e3f0
0x03C14E64: f603002a  mov w22, w0
0x03C14E68: a0010036  tbz w0, #0, #0x3c14e9c
0x03C14E6C: ff7f00a9  stp xzr, xzr, [sp]
0x03C14E70: a81e40f9  ldr x8, [x21, #0x38]
0x03C14E74: e20f40f9  ldr x2, [sp, #0x18]
0x03C14E78: e0030091  mov x0, sp
0x03C14E7C: e10314aa  mov x1, x20
0x03C14E80: 031140f9  ldr x3, [x8, #0x20]
0x03C14E84: bfc62e94  bl #0x47c6980
0x03C14E88: e003c03d  ldr q0, [sp]
0x03C14E8C: e00313aa  mov x0, x19
0x03C14E90: e1031faa  mov x1, xzr
0x03C14E94: 6002803d  str q0, [x19]
0x03C14E98: cbaed597  bl #0x31809c4
0x03C14E9C: c0020012  and w0, w22, #1
0x03C14EA0: f44f43a9  ldp x20, x19, [sp, #0x30]
0x03C14EA4: f65742a9  ldp x22, x21, [sp, #0x20]
0x03C14EA8: fe0b40f9  ldr x30, [sp, #0x10]
0x03C14EAC: ff030191  add sp, sp, #0x40
0x03C14EB0: c0035fd6  ret
0x03C14EB4: 7eafd597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C14EB8 | ContextualizedECS.Query.Entities$$MatchMethod<DeadComponent>
; native signature: bool ContextualizedECS_Query_Entities__MatchMethod_DeadComponent_ (ContextualizedECS_Entity_o* entity, System_ValueTuple_Entity__T1__o* result, const MethodInfo_3C14EB8* method);
; bytes=160 sha256=dffbdea79ff697ddd9a5c85a735a15fd6dc9d94b5a2dc10d7bd6bac29467d76e status=arm64_complete_bound indexed_start=True
0x03C14EB8: ff0301d1  sub sp, sp, #0x40
0x03C14EBC: fe0b00f9  str x30, [sp, #0x10]
0x03C14EC0: f65702a9  stp x22, x21, [sp, #0x20]
0x03C14EC4: f44f03a9  stp x20, x19, [sp, #0x30]
0x03C14EC8: 481c40f9  ldr x8, [x2, #0x38]
0x03C14ECC: f50302aa  mov x21, x2
0x03C14ED0: f30301aa  mov x19, x1
0x03C14ED4: f40300aa  mov x20, x0
0x03C14ED8: 680000b5  cbnz x8, #0x3c14ee4
0x03C14EDC: e00315aa  mov x0, x21
0x03C14EE0: 6606d597  bl #0x3156878
0x03C14EE4: ff630039  strb wzr, [sp, #0x18]
0x03C14EE8: 7f7e00a9  stp xzr, xzr, [x19]
0x03C14EEC: 540300b4  cbz x20, #0x3c14f54
0x03C14EF0: a81e40f9  ldr x8, [x21, #0x38]
0x03C14EF4: e1630091  add x1, sp, #0x18
0x03C14EF8: e00314aa  mov x0, x20
0x03C14EFC: 020940f9  ldr x2, [x8, #0x10]
0x03C14F00: 97260094  bl #0x3c1e95c
0x03C14F04: f603002a  mov w22, w0
0x03C14F08: a0010036  tbz w0, #0, #0x3c14f3c
0x03C14F0C: ff7f00a9  stp xzr, xzr, [sp]
0x03C14F10: a81e40f9  ldr x8, [x21, #0x38]
0x03C14F14: e2634039  ldrb w2, [sp, #0x18]
0x03C14F18: e0030091  mov x0, sp
0x03C14F1C: e10314aa  mov x1, x20
0x03C14F20: 031140f9  ldr x3, [x8, #0x20]
0x03C14F24: 1fca2e94  bl #0x47c77a0
0x03C14F28: e003c03d  ldr q0, [sp]
0x03C14F2C: e00313aa  mov x0, x19
0x03C14F30: e1031faa  mov x1, xzr
0x03C14F34: 6002803d  str q0, [x19]
0x03C14F38: a3aed597  bl #0x31809c4
0x03C14F3C: c0020012  and w0, w22, #1
0x03C14F40: f44f43a9  ldp x20, x19, [sp, #0x30]
0x03C14F44: f65742a9  ldp x22, x21, [sp, #0x20]
0x03C14F48: fe0b40f9  ldr x30, [sp, #0x10]
0x03C14F4C: ff030191  add sp, sp, #0x40
0x03C14F50: c0035fd6  ret
0x03C14F54: 56afd597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C14F58 | ContextualizedECS.Query.Entities$$MatchMethod<IdComponent>
; native signature: bool ContextualizedECS_Query_Entities__MatchMethod_IdComponent_ (ContextualizedECS_Entity_o* entity, System_ValueTuple_Entity__T1__o* result, const MethodInfo_3C14F58* method);
; bytes=224 sha256=883168f4a751c2152f61a7bee179a006bb3337a2dd3acbc4df67a318d08fa49c status=arm64_complete_bound indexed_start=True
0x03C14F58: ff0304d1  sub sp, sp, #0x100
0x03C14F5C: fe6b00f9  str x30, [sp, #0xd0]
0x03C14F60: f6570ea9  stp x22, x21, [sp, #0xe0]
0x03C14F64: f44f0fa9  stp x20, x19, [sp, #0xf0]
0x03C14F68: 481c40f9  ldr x8, [x2, #0x38]
0x03C14F6C: f50302aa  mov x21, x2
0x03C14F70: f30301aa  mov x19, x1
0x03C14F74: f40300aa  mov x20, x0
0x03C14F78: 680000b5  cbnz x8, #0x3c14f84
0x03C14F7C: e00315aa  mov x0, x21
0x03C14F80: 3e06d597  bl #0x3156878
0x03C14F84: 00e4006f  movi v0.2d, #0000000000000000
0x03C14F88: e00304ad  stp q0, q0, [sp, #0x80]
0x03C14F8C: e01f803d  str q0, [sp, #0x70]
0x03C14F90: 7f1a00f9  str xzr, [x19, #0x30]
0x03C14F94: 608200ad  stp q0, q0, [x19, #0x10]
0x03C14F98: 6002803d  str q0, [x19]
0x03C14F9C: d40400b4  cbz x20, #0x3c15034
0x03C14FA0: a81e40f9  ldr x8, [x21, #0x38]
0x03C14FA4: e1c30191  add x1, sp, #0x70
0x03C14FA8: e00314aa  mov x0, x20
0x03C14FAC: 020940f9  ldr x2, [x8, #0x10]
0x03C14FB0: 87270094  bl #0x3c1edcc
0x03C14FB4: f603002a  mov w22, w0
0x03C14FB8: 20030036  tbz w0, #0, #0x3c1501c
0x03C14FBC: e08743ad  ldp q0, q1, [sp, #0x70]
0x03C14FC0: e227c03d  ldr q2, [sp, #0x90]
0x03C14FC4: 03e4006f  movi v3.2d, #0000000000000000
0x03C14FC8: ff3300f9  str xzr, [sp, #0x60]
0x03C14FCC: e30f02ad  stp q3, q3, [sp, #0x40]
0x03C14FD0: e00700ad  stp q0, q1, [sp]
0x03C14FD4: e20f01ad  stp q2, q3, [sp, #0x20]
0x03C14FD8: a81e40f9  ldr x8, [x21, #0x38]
0x03C14FDC: e0c30091  add x0, sp, #0x30
0x03C14FE0: e2830291  add x2, sp, #0xa0
0x03C14FE4: e10314aa  mov x1, x20
0x03C14FE8: 031140f9  ldr x3, [x8, #0x20]
0x03C14FEC: e00705ad  stp q0, q1, [sp, #0xa0]
0x03C14FF0: e233803d  str q2, [sp, #0xc0]
0x03C14FF4: 71cd2e94  bl #0x47c85b8
0x03C14FF8: e83340f9  ldr x8, [sp, #0x60]
0x03C14FFC: e10342ad  ldp q1, q0, [sp, #0x40]
0x03C15000: e20fc03d  ldr q2, [sp, #0x30]
0x03C15004: e00313aa  mov x0, x19
0x03C15008: e1031faa  mov x1, xzr
0x03C1500C: 681a00f9  str x8, [x19, #0x30]
0x03C15010: 618200ad  stp q1, q0, [x19, #0x10]
0x03C15014: 6202803d  str q2, [x19]
0x03C15018: 6baed597  bl #0x31809c4
0x03C1501C: c0020012  and w0, w22, #1
0x03C15020: f44f4fa9  ldp x20, x19, [sp, #0xf0]
0x03C15024: f6574ea9  ldp x22, x21, [sp, #0xe0]
0x03C15028: fe6b40f9  ldr x30, [sp, #0xd0]
0x03C1502C: ff030491  add sp, sp, #0x100
0x03C15030: c0035fd6  ret
0x03C15034: 1eafd597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C15038 | ContextualizedECS.Query.Entities$$MatchMethod<ItemMovedComponent>
; native signature: bool ContextualizedECS_Query_Entities__MatchMethod_ItemMovedComponent_ (ContextualizedECS_Entity_o* entity, System_ValueTuple_Entity__T1__o* result, const MethodInfo_3C15038* method);
; bytes=160 sha256=98c99d937ea670cc1d5916afea67a8c7c30e5fd699d56cb37de5c1a9f9e49678 status=arm64_complete_bound indexed_start=True
0x03C15038: ff0301d1  sub sp, sp, #0x40
0x03C1503C: fe0b00f9  str x30, [sp, #0x10]
0x03C15040: f65702a9  stp x22, x21, [sp, #0x20]
0x03C15044: f44f03a9  stp x20, x19, [sp, #0x30]
0x03C15048: 481c40f9  ldr x8, [x2, #0x38]
0x03C1504C: f50302aa  mov x21, x2
0x03C15050: f30301aa  mov x19, x1
0x03C15054: f40300aa  mov x20, x0
0x03C15058: 680000b5  cbnz x8, #0x3c15064
0x03C1505C: e00315aa  mov x0, x21
0x03C15060: 0606d597  bl #0x3156878
0x03C15064: ff0f00f9  str xzr, [sp, #0x18]
0x03C15068: 7f7e00a9  stp xzr, xzr, [x19]
0x03C1506C: 540300b4  cbz x20, #0x3c150d4
0x03C15070: a81e40f9  ldr x8, [x21, #0x38]
0x03C15074: e1630091  add x1, sp, #0x18
0x03C15078: e00314aa  mov x0, x20
0x03C1507C: 020940f9  ldr x2, [x8, #0x10]
0x03C15080: b9280094  bl #0x3c1f364
0x03C15084: f603002a  mov w22, w0
0x03C15088: a0010036  tbz w0, #0, #0x3c150bc
0x03C1508C: ff7f00a9  stp xzr, xzr, [sp]
0x03C15090: a81e40f9  ldr x8, [x21, #0x38]
0x03C15094: e20f40f9  ldr x2, [sp, #0x18]
0x03C15098: e0030091  mov x0, sp
0x03C1509C: e10314aa  mov x1, x20
0x03C150A0: 031140f9  ldr x3, [x8, #0x20]
0x03C150A4: 1bd82e94  bl #0x47cb110
0x03C150A8: e003c03d  ldr q0, [sp]
0x03C150AC: e00313aa  mov x0, x19
0x03C150B0: e1031faa  mov x1, xzr
0x03C150B4: 6002803d  str q0, [x19]
0x03C150B8: 43aed597  bl #0x31809c4
0x03C150BC: c0020012  and w0, w22, #1
0x03C150C0: f44f43a9  ldp x20, x19, [sp, #0x30]
0x03C150C4: f65742a9  ldp x22, x21, [sp, #0x20]
0x03C150C8: fe0b40f9  ldr x30, [sp, #0x10]
0x03C150CC: ff030191  add sp, sp, #0x40
0x03C150D0: c0035fd6  ret
0x03C150D4: f6aed597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C150D8 | ContextualizedECS.Query.Entities$$MatchMethod<TimeCycleComponent>
; native signature: bool ContextualizedECS_Query_Entities__MatchMethod_TimeCycleComponent_ (ContextualizedECS_Entity_o* entity, System_ValueTuple_Entity__T1__o* result, const MethodInfo_3C150D8* method);
; bytes=228 sha256=1f49e90a0d9ccf24ccd4c8099b0d9730116c4d0ee9092ffb80fd37b386d33c42 status=arm64_complete_bound indexed_start=True
0x03C150D8: ffc304d1  sub sp, sp, #0x130
0x03C150DC: fd7b10a9  stp x29, x30, [sp, #0x100]
0x03C150E0: f65711a9  stp x22, x21, [sp, #0x110]
0x03C150E4: f44f12a9  stp x20, x19, [sp, #0x120]
0x03C150E8: 481c40f9  ldr x8, [x2, #0x38]
0x03C150EC: f50302aa  mov x21, x2
0x03C150F0: f30301aa  mov x19, x1
0x03C150F4: f40300aa  mov x20, x0
0x03C150F8: 680000b5  cbnz x8, #0x3c15104
0x03C150FC: e00315aa  mov x0, x21
0x03C15100: de05d597  bl #0x3156878
0x03C15104: 00e4006f  movi v0.2d, #0000000000000000
0x03C15108: e08304ad  stp q0, q0, [sp, #0x90]
0x03C1510C: e08303ad  stp q0, q0, [sp, #0x70]
0x03C15110: e01b803d  str q0, [sp, #0x60]
0x03C15114: 7f2a00f9  str xzr, [x19, #0x50]
0x03C15118: 608201ad  stp q0, q0, [x19, #0x30]
0x03C1511C: 608200ad  stp q0, q0, [x19, #0x10]
0x03C15120: 6002803d  str q0, [x19]
0x03C15124: b40400b4  cbz x20, #0x3c151b8
0x03C15128: a81e40f9  ldr x8, [x21, #0x38]
0x03C1512C: e1830191  add x1, sp, #0x60
0x03C15130: e00314aa  mov x0, x20
0x03C15134: 020940f9  ldr x2, [x8, #0x10]
0x03C15138: b32a0094  bl #0x3c1fc04
0x03C1513C: f603002a  mov w22, w0
0x03C15140: 00030036  tbz w0, #0, #0x3c151a0
0x03C15144: 00e4006f  movi v0.2d, #0000000000000000
0x03C15148: ff2b00f9  str xzr, [sp, #0x50]
0x03C1514C: e08301ad  stp q0, q0, [sp, #0x30]
0x03C15150: e08300ad  stp q0, q0, [sp, #0x10]
0x03C15154: e003803d  str q0, [sp]
0x03C15158: a81e40f9  ldr x8, [x21, #0x38]
0x03C1515C: e0c30291  add x0, sp, #0xb0
0x03C15160: e1830191  add x1, sp, #0x60
0x03C15164: 020a8052  movz w2, #0x50
0x03C15168: 151140f9  ldr x21, [x8, #0x20]
0x03C1516C: 01e6d694  bl #0x71ce970
0x03C15170: e0030091  mov x0, sp
0x03C15174: e2c30291  add x2, sp, #0xb0
0x03C15178: e10314aa  mov x1, x20
0x03C1517C: e30315aa  mov x3, x21
0x03C15180: 98de2e94  bl #0x47ccbe0
0x03C15184: e1030091  mov x1, sp
0x03C15188: 020b8052  movz w2, #0x58
0x03C1518C: e00313aa  mov x0, x19
0x03C15190: f8e5d694  bl #0x71ce970
0x03C15194: e00313aa  mov x0, x19
0x03C15198: e1031faa  mov x1, xzr
0x03C1519C: 0aaed597  bl #0x31809c4
0x03C151A0: c0020012  and w0, w22, #1
0x03C151A4: f44f52a9  ldp x20, x19, [sp, #0x120]
0x03C151A8: f65751a9  ldp x22, x21, [sp, #0x110]
0x03C151AC: fd7b50a9  ldp x29, x30, [sp, #0x100]
0x03C151B0: ffc30491  add sp, sp, #0x130
0x03C151B4: c0035fd6  ret
0x03C151B8: bdaed597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C151BC | ContextualizedECS.Query.Entities$$MatchMethod<TimeLockComponent>
; native signature: bool ContextualizedECS_Query_Entities__MatchMethod_TimeLockComponent_ (ContextualizedECS_Entity_o* entity, System_ValueTuple_Entity__T1__o* result, const MethodInfo_3C151BC* method);
; bytes=204 sha256=ce16118edadcd36d503bce2427c621a0493c3107adbfd647db17e068a5751632 status=arm64_complete_bound indexed_start=True
0x03C151BC: ff0303d1  sub sp, sp, #0xc0
0x03C151C0: fe4b00f9  str x30, [sp, #0x90]
0x03C151C4: f6570aa9  stp x22, x21, [sp, #0xa0]
0x03C151C8: f44f0ba9  stp x20, x19, [sp, #0xb0]
0x03C151CC: 481c40f9  ldr x8, [x2, #0x38]
0x03C151D0: f50302aa  mov x21, x2
0x03C151D4: f30301aa  mov x19, x1
0x03C151D8: f40300aa  mov x20, x0
0x03C151DC: 680000b5  cbnz x8, #0x3c151e8
0x03C151E0: e00315aa  mov x0, x21
0x03C151E4: a505d597  bl #0x3156878
0x03C151E8: 00e4006f  movi v0.2d, #0000000000000000
0x03C151EC: ff2b00f9  str xzr, [sp, #0x50]
0x03C151F0: e08301ad  stp q0, q0, [sp, #0x30]
0x03C151F4: 608200ad  stp q0, q0, [x19, #0x10]
0x03C151F8: 6002803d  str q0, [x19]
0x03C151FC: 540400b4  cbz x20, #0x3c15284
0x03C15200: a81e40f9  ldr x8, [x21, #0x38]
0x03C15204: e1c30091  add x1, sp, #0x30
0x03C15208: e00314aa  mov x0, x20
0x03C1520C: 020940f9  ldr x2, [x8, #0x10]
0x03C15210: 4d2b0094  bl #0x3c1ff44
0x03C15214: f603002a  mov w22, w0
0x03C15218: a0020036  tbz w0, #0, #0x3c1526c
0x03C1521C: 00e4006f  movi v0.2d, #0000000000000000
0x03C15220: e08300ad  stp q0, q0, [sp, #0x10]
0x03C15224: e003803d  str q0, [sp]
0x03C15228: a81e40f9  ldr x8, [x21, #0x38]
0x03C1522C: e08741ad  ldp q0, q1, [sp, #0x30]
0x03C15230: e92b40f9  ldr x9, [sp, #0x50]
0x03C15234: e0030091  mov x0, sp
0x03C15238: 031140f9  ldr x3, [x8, #0x20]
0x03C1523C: e2830191  add x2, sp, #0x60
0x03C15240: e10314aa  mov x1, x20
0x03C15244: e00703ad  stp q0, q1, [sp, #0x60]
0x03C15248: e94300f9  str x9, [sp, #0x80]
0x03C1524C: 44e22e94  bl #0x47cdb5c
0x03C15250: e18340ad  ldp q1, q0, [sp, #0x10]
0x03C15254: e203c03d  ldr q2, [sp]
0x03C15258: e00313aa  mov x0, x19
0x03C1525C: e1031faa  mov x1, xzr
0x03C15260: 618200ad  stp q1, q0, [x19, #0x10]
0x03C15264: 6202803d  str q2, [x19]
0x03C15268: d7add597  bl #0x31809c4
0x03C1526C: c0020012  and w0, w22, #1
0x03C15270: f44f4ba9  ldp x20, x19, [sp, #0xb0]
0x03C15274: f6574aa9  ldp x22, x21, [sp, #0xa0]
0x03C15278: fe4b40f9  ldr x30, [sp, #0x90]
0x03C1527C: ff030391  add sp, sp, #0xc0
0x03C15280: c0035fd6  ret
0x03C15284: 8aaed597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C15288 | ContextualizedECS.Query.Entities$$MatchMethod<__Il2CppFullySharedGenericStructType>
; native signature: bool ContextualizedECS_Query_Entities__MatchMethod___Il2CppFullySharedGenericStructType_ (ContextualizedECS_Entity_o* entity, System_ValueTuple_Entity__T1__o* result, const MethodInfo_3C15288* method);
; bytes=412 sha256=0dddd3a4688d4e4b93dfbd6abb1e2c1d474f87a5a1ac928ecd617836c53fa294 status=arm64_complete_bound indexed_start=True
0x03C15288: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x03C1528C: fc6f01a9  stp x28, x27, [sp, #0x10]
0x03C15290: fa6702a9  stp x26, x25, [sp, #0x20]
0x03C15294: f85f03a9  stp x24, x23, [sp, #0x30]
0x03C15298: f65704a9  stp x22, x21, [sp, #0x40]
0x03C1529C: f44f05a9  stp x20, x19, [sp, #0x50]
0x03C152A0: fd030091  mov x29, sp
0x03C152A4: ff4300d1  sub sp, sp, #0x10
0x03C152A8: 48d03bd5  mrs x8, tpidr_el0
0x03C152AC: a8031ff8  stur x8, [x29, #-0x10]
0x03C152B0: 081540f9  ldr x8, [x8, #0x28]
0x03C152B4: f40302aa  mov x20, x2
0x03C152B8: f30301aa  mov x19, x1
0x03C152BC: f50300aa  mov x21, x0
0x03C152C0: a8831ff8  stur x8, [x29, #-8]
0x03C152C4: 481c40f9  ldr x8, [x2, #0x38]
0x03C152C8: 880000b5  cbnz x8, #0x3c152d8
0x03C152CC: e00314aa  mov x0, x20
0x03C152D0: 6a05d597  bl #0x3156878
0x03C152D4: 881e40f9  ldr x8, [x20, #0x38]
0x03C152D8: 091540f9  ldr x9, [x8, #0x28]
0x03C152DC: 080540f9  ldr x8, [x8, #8]
0x03C152E0: 38fd40b9  ldr w24, [x9, #0xfc]
0x03C152E4: 17fd40b9  ldr w23, [x8, #0xfc]
0x03C152E8: e8030091  mov x8, sp
0x03C152EC: 093f0091  add x9, x24, #0xf
0x03C152F0: 29717c92  and x9, x9, #0x1fffffff0
0x03C152F4: 1b0109cb  sub x27, x8, x9
0x03C152F8: 7f030091  mov sp, x27
0x03C152FC: e8030091  mov x8, sp
0x03C15300: 190109cb  sub x25, x8, x9
0x03C15304: 3f030091  mov sp, x25
0x03C15308: ea3e0091  add x10, x23, #0xf
0x03C1530C: e8030091  mov x8, sp
0x03C15310: 4a717c92  and x10, x10, #0x1fffffff0
0x03C15314: 16010acb  sub x22, x8, x10
0x03C15318: df020091  mov sp, x22
0x03C1531C: e8030091  mov x8, sp
0x03C15320: 1c0109cb  sub x28, x8, x9
0x03C15324: 9f030091  mov sp, x28
0x03C15328: e0031caa  mov x0, x28
0x03C1532C: e1031f2a  mov w1, wzr
0x03C15330: e20318aa  mov x2, x24
0x03C15334: 9be5d694  bl #0x71ce9a0
0x03C15338: e00313aa  mov x0, x19
0x03C1533C: e1031f2a  mov w1, wzr
0x03C15340: e20317aa  mov x2, x23
0x03C15344: 97e5d694  bl #0x71ce9a0
0x03C15348: b50600b4  cbz x21, #0x3c1541c
0x03C1534C: 881e40f9  ldr x8, [x20, #0x38]
0x03C15350: e00315aa  mov x0, x21
0x03C15354: e1031caa  mov x1, x28
0x03C15358: 020940f9  ldr x2, [x8, #0x10]
0x03C1535C: 480040f9  ldr x8, [x2]
0x03C15360: 00013fd6  blr x8
0x03C15364: fa03002a  mov w26, w0
0x03C15368: e0030036  tbz w0, #0, #0x3c153e4
0x03C1536C: e0031baa  mov x0, x27
0x03C15370: e1031caa  mov x1, x28
0x03C15374: e20318aa  mov x2, x24
0x03C15378: 7ee5d694  bl #0x71ce970
0x03C1537C: e00316aa  mov x0, x22
0x03C15380: e1031f2a  mov w1, wzr
0x03C15384: e20317aa  mov x2, x23
0x03C15388: 86e5d694  bl #0x71ce9a0
0x03C1538C: e00319aa  mov x0, x25
0x03C15390: e1031baa  mov x1, x27
0x03C15394: e20318aa  mov x2, x24
0x03C15398: 76e5d694  bl #0x71ce970
0x03C1539C: 881e40f9  ldr x8, [x20, #0x38]
0x03C153A0: e00316aa  mov x0, x22
0x03C153A4: e10315aa  mov x1, x21
0x03C153A8: e20319aa  mov x2, x25
0x03C153AC: 031140f9  ldr x3, [x8, #0x20]
0x03C153B0: 4e002f94  bl #0x47d54e8
0x03C153B4: e00313aa  mov x0, x19
0x03C153B8: e10316aa  mov x1, x22
0x03C153BC: e20317aa  mov x2, x23
0x03C153C0: 6ce5d694  bl #0x71ce970
0x03C153C4: 881e40f9  ldr x8, [x20, #0x38]
0x03C153C8: 000540f9  ldr x0, [x8, #8]
0x03C153CC: 08d44439  ldrb w8, [x0, #0x135]
0x03C153D0: 48000037  tbnz w8, #0, #0x3c153d8
0x03C153D4: 1205d597  bl #0x315681c
0x03C153D8: e10313aa  mov x1, x19
0x03C153DC: e20316aa  mov x2, x22
0x03C153E0: 7aadd597  bl #0x31809c8
0x03C153E4: a8035ff8  ldur x8, [x29, #-0x10]
0x03C153E8: 081540f9  ldr x8, [x8, #0x28]
0x03C153EC: a9835ff8  ldur x9, [x29, #-8]
0x03C153F0: 1f0109eb  cmp x8, x9
0x03C153F4: 61010054  b.ne #0x3c15420
0x03C153F8: 40030012  and w0, w26, #1
0x03C153FC: bf030091  mov sp, x29
0x03C15400: f44f45a9  ldp x20, x19, [sp, #0x50]
0x03C15404: f65744a9  ldp x22, x21, [sp, #0x40]
0x03C15408: f85f43a9  ldp x24, x23, [sp, #0x30]
0x03C1540C: fa6742a9  ldp x26, x25, [sp, #0x20]
0x03C15410: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x03C15414: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x03C15418: c0035fd6  ret
0x03C1541C: 24aed597  bl #0x3180cac
0x03C15420: 5ce5d694  bl #0x71ce990

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C19F10 | ContextualizedECS.Query.Entities$$With<BoardTilePositionComponent, BoxComponent>
; native signature: ContextualizedECS_Query_Entities_MatchDelegate_ValueTuple_Entity__T1__T2___o* ContextualizedECS_Query_Entities__With_BoardTilePositionComponent__BoxComponent_ (const MethodInfo_3C19F10* method);
; bytes=84 sha256=49ff7a9f2b1799c51bf11e2f4d6e556da39a48404bfdf38abcd84f447bceebf2 status=arm64_complete_bound indexed_start=True
0x03C19F10: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x03C19F14: 081c40f9  ldr x8, [x0, #0x38]
0x03C19F18: f30300aa  mov x19, x0
0x03C19F1C: 880000b5  cbnz x8, #0x3c19f2c
0x03C19F20: e00313aa  mov x0, x19
0x03C19F24: 55f2d497  bl #0x3156878
0x03C19F28: 681e40f9  ldr x8, [x19, #0x38]
0x03C19F2C: 000540f9  ldr x0, [x8, #8]
0x03C19F30: 08d44439  ldrb w8, [x0, #0x135]
0x03C19F34: 48000037  tbnz w8, #0, #0x3c19f3c
0x03C19F38: 39f2d497  bl #0x315681c
0x03C19F3C: 599bd597  bl #0x3180ca0
0x03C19F40: 681e40f9  ldr x8, [x19, #0x38]
0x03C19F44: e1031faa  mov x1, xzr
0x03C19F48: f30300aa  mov x19, x0
0x03C19F4C: 020140f9  ldr x2, [x8]
0x03C19F50: 030940f9  ldr x3, [x8, #0x10]
0x03C19F54: 98fe1694  bl #0x41d99b4
0x03C19F58: e00313aa  mov x0, x19
0x03C19F5C: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x03C19F60: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C19F64 | ContextualizedECS.Query.Entities$$With<BoardTilePositionComponent, IdComponent>
; native signature: ContextualizedECS_Query_Entities_MatchDelegate_ValueTuple_Entity__T1__T2___o* ContextualizedECS_Query_Entities__With_BoardTilePositionComponent__IdComponent_ (const MethodInfo_3C19F64* method);
; bytes=84 sha256=413a56647016a94bca1a424850b5ff30453cd2e62e03f5600e59e8629181456c status=arm64_complete_bound indexed_start=True
0x03C19F64: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x03C19F68: 081c40f9  ldr x8, [x0, #0x38]
0x03C19F6C: f30300aa  mov x19, x0
0x03C19F70: 880000b5  cbnz x8, #0x3c19f80
0x03C19F74: e00313aa  mov x0, x19
0x03C19F78: 40f2d497  bl #0x3156878
0x03C19F7C: 681e40f9  ldr x8, [x19, #0x38]
0x03C19F80: 000540f9  ldr x0, [x8, #8]
0x03C19F84: 08d44439  ldrb w8, [x0, #0x135]
0x03C19F88: 48000037  tbnz w8, #0, #0x3c19f90
0x03C19F8C: 24f2d497  bl #0x315681c
0x03C19F90: 449bd597  bl #0x3180ca0
0x03C19F94: 681e40f9  ldr x8, [x19, #0x38]
0x03C19F98: e1031faa  mov x1, xzr
0x03C19F9C: f30300aa  mov x19, x0
0x03C19FA0: 020140f9  ldr x2, [x8]
0x03C19FA4: 030940f9  ldr x3, [x8, #0x10]
0x03C19FA8: e5fe1694  bl #0x41d9b3c
0x03C19FAC: e00313aa  mov x0, x19
0x03C19FB0: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x03C19FB4: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C19FB8 | ContextualizedECS.Query.Entities$$With<BoardTilePositionComponent, MergeComponent>
; native signature: ContextualizedECS_Query_Entities_MatchDelegate_ValueTuple_Entity__T1__T2___o* ContextualizedECS_Query_Entities__With_BoardTilePositionComponent__MergeComponent_ (const MethodInfo_3C19FB8* method);
; bytes=84 sha256=e3e21fa6ac097a714f22797e6fa28165d50e7524101a3593a8e2a28eea560345 status=arm64_complete_bound indexed_start=True
0x03C19FB8: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x03C19FBC: 081c40f9  ldr x8, [x0, #0x38]
0x03C19FC0: f30300aa  mov x19, x0
0x03C19FC4: 880000b5  cbnz x8, #0x3c19fd4
0x03C19FC8: e00313aa  mov x0, x19
0x03C19FCC: 2bf2d497  bl #0x3156878
0x03C19FD0: 681e40f9  ldr x8, [x19, #0x38]
0x03C19FD4: 000540f9  ldr x0, [x8, #8]
0x03C19FD8: 08d44439  ldrb w8, [x0, #0x135]
0x03C19FDC: 48000037  tbnz w8, #0, #0x3c19fe4
0x03C19FE0: 0ff2d497  bl #0x315681c
0x03C19FE4: 2f9bd597  bl #0x3180ca0
0x03C19FE8: 681e40f9  ldr x8, [x19, #0x38]
0x03C19FEC: e1031faa  mov x1, xzr
0x03C19FF0: f30300aa  mov x19, x0
0x03C19FF4: 020140f9  ldr x2, [x8]
0x03C19FF8: 030940f9  ldr x3, [x8, #0x10]
0x03C19FFC: 32ff1694  bl #0x41d9cc4
0x03C1A000: e00313aa  mov x0, x19
0x03C1A004: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x03C1A008: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1A00C | ContextualizedECS.Query.Entities$$With<BoardTilePositionComponent, TimeCycleComponent>
; native signature: ContextualizedECS_Query_Entities_MatchDelegate_ValueTuple_Entity__T1__T2___o* ContextualizedECS_Query_Entities__With_BoardTilePositionComponent__TimeCycleComponent_ (const MethodInfo_3C1A00C* method);
; bytes=84 sha256=e0063a79ebee689601b18b22fc5365a1fc8c00f60a7907507afe269af0cd2b7d status=arm64_complete_bound indexed_start=True
0x03C1A00C: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x03C1A010: 081c40f9  ldr x8, [x0, #0x38]
0x03C1A014: f30300aa  mov x19, x0
0x03C1A018: 880000b5  cbnz x8, #0x3c1a028
0x03C1A01C: e00313aa  mov x0, x19
0x03C1A020: 16f2d497  bl #0x3156878
0x03C1A024: 681e40f9  ldr x8, [x19, #0x38]
0x03C1A028: 000540f9  ldr x0, [x8, #8]
0x03C1A02C: 08d44439  ldrb w8, [x0, #0x135]
0x03C1A030: 48000037  tbnz w8, #0, #0x3c1a038
0x03C1A034: faf1d497  bl #0x315681c
0x03C1A038: 1a9bd597  bl #0x3180ca0
0x03C1A03C: 681e40f9  ldr x8, [x19, #0x38]
0x03C1A040: e1031faa  mov x1, xzr
0x03C1A044: f30300aa  mov x19, x0
0x03C1A048: 020140f9  ldr x2, [x8]
0x03C1A04C: 030940f9  ldr x3, [x8, #0x10]
0x03C1A050: 7fff1694  bl #0x41d9e4c
0x03C1A054: e00313aa  mov x0, x19
0x03C1A058: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x03C1A05C: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1A060 | ContextualizedECS.Query.Entities$$With<BoardTilePositionComponent, TimeLockComponent>
; native signature: ContextualizedECS_Query_Entities_MatchDelegate_ValueTuple_Entity__T1__T2___o* ContextualizedECS_Query_Entities__With_BoardTilePositionComponent__TimeLockComponent_ (const MethodInfo_3C1A060* method);
; bytes=84 sha256=edd482a42bb706ef75dce9da8bb08d740b6db45406855fcdcd4e1e63db98847a status=arm64_complete_bound indexed_start=True
0x03C1A060: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x03C1A064: 081c40f9  ldr x8, [x0, #0x38]
0x03C1A068: f30300aa  mov x19, x0
0x03C1A06C: 880000b5  cbnz x8, #0x3c1a07c
0x03C1A070: e00313aa  mov x0, x19
0x03C1A074: 01f2d497  bl #0x3156878
0x03C1A078: 681e40f9  ldr x8, [x19, #0x38]
0x03C1A07C: 000540f9  ldr x0, [x8, #8]
0x03C1A080: 08d44439  ldrb w8, [x0, #0x135]
0x03C1A084: 48000037  tbnz w8, #0, #0x3c1a08c
0x03C1A088: e5f1d497  bl #0x315681c
0x03C1A08C: 059bd597  bl #0x3180ca0
0x03C1A090: 681e40f9  ldr x8, [x19, #0x38]
0x03C1A094: e1031faa  mov x1, xzr
0x03C1A098: f30300aa  mov x19, x0
0x03C1A09C: 020140f9  ldr x2, [x8]
0x03C1A0A0: 030940f9  ldr x3, [x8, #0x10]
0x03C1A0A4: ccff1694  bl #0x41d9fd4
0x03C1A0A8: e00313aa  mov x0, x19
0x03C1A0AC: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x03C1A0B0: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1A0B4 | ContextualizedECS.Query.Entities$$With<BornComponent, IdComponent>
; native signature: ContextualizedECS_Query_Entities_MatchDelegate_ValueTuple_Entity__T1__T2___o* ContextualizedECS_Query_Entities__With_BornComponent__IdComponent_ (const MethodInfo_3C1A0B4* method);
; bytes=84 sha256=91c59f7e0db893a0ef4c5d7e1ae2d74979f7c6f94c0296fc3a0a7356e56ea2af status=arm64_complete_bound indexed_start=True
0x03C1A0B4: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x03C1A0B8: 081c40f9  ldr x8, [x0, #0x38]
0x03C1A0BC: f30300aa  mov x19, x0
0x03C1A0C0: 880000b5  cbnz x8, #0x3c1a0d0
0x03C1A0C4: e00313aa  mov x0, x19
0x03C1A0C8: ecf1d497  bl #0x3156878
0x03C1A0CC: 681e40f9  ldr x8, [x19, #0x38]
0x03C1A0D0: 000540f9  ldr x0, [x8, #8]
0x03C1A0D4: 08d44439  ldrb w8, [x0, #0x135]
0x03C1A0D8: 48000037  tbnz w8, #0, #0x3c1a0e0
0x03C1A0DC: d0f1d497  bl #0x315681c
0x03C1A0E0: f09ad597  bl #0x3180ca0
0x03C1A0E4: 681e40f9  ldr x8, [x19, #0x38]
0x03C1A0E8: e1031faa  mov x1, xzr
0x03C1A0EC: f30300aa  mov x19, x0
0x03C1A0F0: 020140f9  ldr x2, [x8]
0x03C1A0F4: 030940f9  ldr x3, [x8, #0x10]
0x03C1A0F8: 19001794  bl #0x41da15c
0x03C1A0FC: e00313aa  mov x0, x19
0x03C1A100: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x03C1A104: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1A108 | ContextualizedECS.Query.Entities$$With<CollectableComponent, IdComponent>
; native signature: ContextualizedECS_Query_Entities_MatchDelegate_ValueTuple_Entity__T1__T2___o* ContextualizedECS_Query_Entities__With_CollectableComponent__IdComponent_ (const MethodInfo_3C1A108* method);
; bytes=84 sha256=03152aef00757cf7dd48b586647a2883690e996e874cb681dd6e07635aed601d status=arm64_complete_bound indexed_start=True
0x03C1A108: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x03C1A10C: 081c40f9  ldr x8, [x0, #0x38]
0x03C1A110: f30300aa  mov x19, x0
0x03C1A114: 880000b5  cbnz x8, #0x3c1a124
0x03C1A118: e00313aa  mov x0, x19
0x03C1A11C: d7f1d497  bl #0x3156878
0x03C1A120: 681e40f9  ldr x8, [x19, #0x38]
0x03C1A124: 000540f9  ldr x0, [x8, #8]
0x03C1A128: 08d44439  ldrb w8, [x0, #0x135]
0x03C1A12C: 48000037  tbnz w8, #0, #0x3c1a134
0x03C1A130: bbf1d497  bl #0x315681c
0x03C1A134: db9ad597  bl #0x3180ca0
0x03C1A138: 681e40f9  ldr x8, [x19, #0x38]
0x03C1A13C: e1031faa  mov x1, xzr
0x03C1A140: f30300aa  mov x19, x0
0x03C1A144: 020140f9  ldr x2, [x8]
0x03C1A148: 030940f9  ldr x3, [x8, #0x10]
0x03C1A14C: 66001794  bl #0x41da2e4
0x03C1A150: e00313aa  mov x0, x19
0x03C1A154: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x03C1A158: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1A15C | ContextualizedECS.Query.Entities$$With<IdComponent, BoardTilePositionComponent>
; native signature: ContextualizedECS_Query_Entities_MatchDelegate_ValueTuple_Entity__T1__T2___o* ContextualizedECS_Query_Entities__With_IdComponent__BoardTilePositionComponent_ (const MethodInfo_3C1A15C* method);
; bytes=84 sha256=c619e2c8a983db18cf54eb1e057a99421df9b958bb9dc748852b3196cbab5f69 status=arm64_complete_bound indexed_start=True
0x03C1A15C: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x03C1A160: 081c40f9  ldr x8, [x0, #0x38]
0x03C1A164: f30300aa  mov x19, x0
0x03C1A168: 880000b5  cbnz x8, #0x3c1a178
0x03C1A16C: e00313aa  mov x0, x19
0x03C1A170: c2f1d497  bl #0x3156878
0x03C1A174: 681e40f9  ldr x8, [x19, #0x38]
0x03C1A178: 000540f9  ldr x0, [x8, #8]
0x03C1A17C: 08d44439  ldrb w8, [x0, #0x135]
0x03C1A180: 48000037  tbnz w8, #0, #0x3c1a188
0x03C1A184: a6f1d497  bl #0x315681c
0x03C1A188: c69ad597  bl #0x3180ca0
0x03C1A18C: 681e40f9  ldr x8, [x19, #0x38]
0x03C1A190: e1031faa  mov x1, xzr
0x03C1A194: f30300aa  mov x19, x0
0x03C1A198: 020140f9  ldr x2, [x8]
0x03C1A19C: 030940f9  ldr x3, [x8, #0x10]
0x03C1A1A0: b3001794  bl #0x41da46c
0x03C1A1A4: e00313aa  mov x0, x19
0x03C1A1A8: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x03C1A1AC: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1A1B0 | ContextualizedECS.Query.Entities$$With<InteractionComponent, BoardTilePositionComponent>
; native signature: ContextualizedECS_Query_Entities_MatchDelegate_ValueTuple_Entity__T1__T2___o* ContextualizedECS_Query_Entities__With_InteractionComponent__BoardTilePositionComponent_ (const MethodInfo_3C1A1B0* method);
; bytes=84 sha256=fd6c937e508392a8104a91134e124b2cb0dfdd2775fd8889a3501232c854dae0 status=arm64_complete_bound indexed_start=True
0x03C1A1B0: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x03C1A1B4: 081c40f9  ldr x8, [x0, #0x38]
0x03C1A1B8: f30300aa  mov x19, x0
0x03C1A1BC: 880000b5  cbnz x8, #0x3c1a1cc
0x03C1A1C0: e00313aa  mov x0, x19
0x03C1A1C4: adf1d497  bl #0x3156878
0x03C1A1C8: 681e40f9  ldr x8, [x19, #0x38]
0x03C1A1CC: 000540f9  ldr x0, [x8, #8]
0x03C1A1D0: 08d44439  ldrb w8, [x0, #0x135]
0x03C1A1D4: 48000037  tbnz w8, #0, #0x3c1a1dc
0x03C1A1D8: 91f1d497  bl #0x315681c
0x03C1A1DC: b19ad597  bl #0x3180ca0
0x03C1A1E0: 681e40f9  ldr x8, [x19, #0x38]
0x03C1A1E4: e1031faa  mov x1, xzr
0x03C1A1E8: f30300aa  mov x19, x0
0x03C1A1EC: 020140f9  ldr x2, [x8]
0x03C1A1F0: 030940f9  ldr x3, [x8, #0x10]
0x03C1A1F4: 00011794  bl #0x41da5f4
0x03C1A1F8: e00313aa  mov x0, x19
0x03C1A1FC: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x03C1A200: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1A204 | ContextualizedECS.Query.Entities$$With<PendingInteractionComponent, InteractionComponent>
; native signature: ContextualizedECS_Query_Entities_MatchDelegate_ValueTuple_Entity__T1__T2___o* ContextualizedECS_Query_Entities__With_PendingInteractionComponent__InteractionComponent_ (const MethodInfo_3C1A204* method);
; bytes=84 sha256=ca970a00a7238664829c2f50b566214c45a64b625e54e532ba4c06d9558bcf12 status=arm64_complete_bound indexed_start=True
0x03C1A204: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x03C1A208: 081c40f9  ldr x8, [x0, #0x38]
0x03C1A20C: f30300aa  mov x19, x0
0x03C1A210: 880000b5  cbnz x8, #0x3c1a220
0x03C1A214: e00313aa  mov x0, x19
0x03C1A218: 98f1d497  bl #0x3156878
0x03C1A21C: 681e40f9  ldr x8, [x19, #0x38]
0x03C1A220: 000540f9  ldr x0, [x8, #8]
0x03C1A224: 08d44439  ldrb w8, [x0, #0x135]
0x03C1A228: 48000037  tbnz w8, #0, #0x3c1a230
0x03C1A22C: 7cf1d497  bl #0x315681c
0x03C1A230: 9c9ad597  bl #0x3180ca0
0x03C1A234: 681e40f9  ldr x8, [x19, #0x38]
0x03C1A238: e1031faa  mov x1, xzr
0x03C1A23C: f30300aa  mov x19, x0
0x03C1A240: 020140f9  ldr x2, [x8]
0x03C1A244: 030940f9  ldr x3, [x8, #0x10]
0x03C1A248: 4d011794  bl #0x41da77c
0x03C1A24C: e00313aa  mov x0, x19
0x03C1A250: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x03C1A254: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1A258 | ContextualizedECS.Query.Entities$$With<__Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType>
; native signature: ContextualizedECS_Query_Entities_MatchDelegate_ValueTuple_Entity__T1__T2___o* ContextualizedECS_Query_Entities__With___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType_ (const MethodInfo_3C1A258* method);
; bytes=88 sha256=efe96c638dea4376d1318d519450018e9c975303880bf26611aab8bd8d7db977 status=arm64_complete_bound indexed_start=True
0x03C1A258: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x03C1A25C: 081c40f9  ldr x8, [x0, #0x38]
0x03C1A260: f30300aa  mov x19, x0
0x03C1A264: 880000b5  cbnz x8, #0x3c1a274
0x03C1A268: e00313aa  mov x0, x19
0x03C1A26C: 83f1d497  bl #0x3156878
0x03C1A270: 681e40f9  ldr x8, [x19, #0x38]
0x03C1A274: 000540f9  ldr x0, [x8, #8]
0x03C1A278: 08d44439  ldrb w8, [x0, #0x135]
0x03C1A27C: 48000037  tbnz w8, #0, #0x3c1a284
0x03C1A280: 67f1d497  bl #0x315681c
0x03C1A284: 879ad597  bl #0x3180ca0
0x03C1A288: 681e40f9  ldr x8, [x19, #0x38]
0x03C1A28C: e1031faa  mov x1, xzr
0x03C1A290: f30300aa  mov x19, x0
0x03C1A294: 030940f9  ldr x3, [x8, #0x10]
0x03C1A298: 020140f9  ldr x2, [x8]
0x03C1A29C: 690040f9  ldr x9, [x3]
0x03C1A2A0: 20013fd6  blr x9
0x03C1A2A4: e00313aa  mov x0, x19
0x03C1A2A8: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x03C1A2AC: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C15424 | ContextualizedECS.Query.Entities$$MatchMethod<BoardTilePositionComponent, BoxComponent>
; native signature: bool ContextualizedECS_Query_Entities__MatchMethod_BoardTilePositionComponent__BoxComponent_ (ContextualizedECS_Entity_o* entity, System_ValueTuple_Entity__T1__T2__o* result, const MethodInfo_3C15424* method);
; bytes=216 sha256=feb4a496d0313c4b33fefa81e957164f9317cc79afa6625208d921cb52b99108 status=arm64_complete_bound indexed_start=True
0x03C15424: ff0302d1  sub sp, sp, #0x80
0x03C15428: fe5706a9  stp x30, x21, [sp, #0x60]
0x03C1542C: f44f07a9  stp x20, x19, [sp, #0x70]
0x03C15430: 481c40f9  ldr x8, [x2, #0x38]
0x03C15434: f50302aa  mov x21, x2
0x03C15438: f30301aa  mov x19, x1
0x03C1543C: f40300aa  mov x20, x0
0x03C15440: 680000b5  cbnz x8, #0x3c1544c
0x03C15444: e00315aa  mov x0, x21
0x03C15448: 0c05d597  bl #0x3156878
0x03C1544C: 00e4006f  movi v0.2d, #0000000000000000
0x03C15450: ff3b00b9  str wzr, [sp, #0x38]
0x03C15454: ff7f02a9  stp xzr, xzr, [sp, #0x20]
0x03C15458: ff3300b9  str wzr, [sp, #0x30]
0x03C1545C: 600200ad  stp q0, q0, [x19]
0x03C15460: d40400b4  cbz x20, #0x3c154f8
0x03C15464: a81e40f9  ldr x8, [x21, #0x38]
0x03C15468: e1e30091  add x1, sp, #0x38
0x03C1546C: e00314aa  mov x0, x20
0x03C15470: 020940f9  ldr x2, [x8, #0x10]
0x03C15474: 9c230094  bl #0x3c1e2e4
0x03C15478: 60030036  tbz w0, #0, #0x3c154e4
0x03C1547C: a81e40f9  ldr x8, [x21, #0x38]
0x03C15480: e1830091  add x1, sp, #0x20
0x03C15484: e00314aa  mov x0, x20
0x03C15488: 021140f9  ldr x2, [x8, #0x20]
0x03C1548C: 1f240094  bl #0x3c1e508
0x03C15490: a0020036  tbz w0, #0, #0x3c154e4
0x03C15494: 00e4006f  movi v0.2d, #0000000000000000
0x03C15498: e00300ad  stp q0, q0, [sp]
0x03C1549C: a81e40f9  ldr x8, [x21, #0x38]
0x03C154A0: e23b40b9  ldr w2, [sp, #0x38]
0x03C154A4: e00bc03d  ldr q0, [sp, #0x20]
0x03C154A8: e93340b9  ldr w9, [sp, #0x30]
0x03C154AC: 041940f9  ldr x4, [x8, #0x30]
0x03C154B0: e0030091  mov x0, sp
0x03C154B4: e3030191  add x3, sp, #0x40
0x03C154B8: e10314aa  mov x1, x20
0x03C154BC: e013803d  str q0, [sp, #0x40]
0x03C154C0: e95300b9  str w9, [sp, #0x50]
0x03C154C4: 62232f94  bl #0x47de24c
0x03C154C8: e10340ad  ldp q1, q0, [sp]
0x03C154CC: e00313aa  mov x0, x19
0x03C154D0: e1031faa  mov x1, xzr
0x03C154D4: 610200ad  stp q1, q0, [x19]
0x03C154D8: 3badd597  bl #0x31809c4
0x03C154DC: 20008052  movz w0, #0x1
0x03C154E0: 02000014  b #0x3c154e8
0x03C154E4: e0031f2a  mov w0, wzr
0x03C154E8: f44f47a9  ldp x20, x19, [sp, #0x70]
0x03C154EC: fe5746a9  ldp x30, x21, [sp, #0x60]
0x03C154F0: ff030291  add sp, sp, #0x80
0x03C154F4: c0035fd6  ret
0x03C154F8: edadd597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C154FC | ContextualizedECS.Query.Entities$$MatchMethod<BoardTilePositionComponent, IdComponent>
; native signature: bool ContextualizedECS_Query_Entities__MatchMethod_BoardTilePositionComponent__IdComponent_ (ContextualizedECS_Entity_o* entity, System_ValueTuple_Entity__T1__T2__o* result, const MethodInfo_3C154FC* method);
; bytes=248 sha256=64b235a7d44098d6f8eb5cc5b53960c0e8415898f6175a2615121d4f5042609b status=arm64_complete_bound indexed_start=True
0x03C154FC: ff0304d1  sub sp, sp, #0x100
0x03C15500: fd6b00f9  str x29, [sp, #0xd0]
0x03C15504: fe570ea9  stp x30, x21, [sp, #0xe0]
0x03C15508: f44f0fa9  stp x20, x19, [sp, #0xf0]
0x03C1550C: 481c40f9  ldr x8, [x2, #0x38]
0x03C15510: f50302aa  mov x21, x2
0x03C15514: f30301aa  mov x19, x1
0x03C15518: f40300aa  mov x20, x0
0x03C1551C: 680000b5  cbnz x8, #0x3c15528
0x03C15520: e00315aa  mov x0, x21
0x03C15524: d504d597  bl #0x3156878
0x03C15528: 00e4006f  movi v0.2d, #0000000000000000
0x03C1552C: ffdb00b9  str wzr, [sp, #0xd8]
0x03C15530: e00304ad  stp q0, q0, [sp, #0x80]
0x03C15534: e01f803d  str q0, [sp, #0x70]
0x03C15538: 600201ad  stp q0, q0, [x19, #0x20]
0x03C1553C: 600200ad  stp q0, q0, [x19]
0x03C15540: 940500b4  cbz x20, #0x3c155f0
0x03C15544: a81e40f9  ldr x8, [x21, #0x38]
0x03C15548: e1630391  add x1, sp, #0xd8
0x03C1554C: e00314aa  mov x0, x20
0x03C15550: 020940f9  ldr x2, [x8, #0x10]
0x03C15554: 64230094  bl #0x3c1e2e4
0x03C15558: 00040036  tbz w0, #0, #0x3c155d8
0x03C1555C: a81e40f9  ldr x8, [x21, #0x38]
0x03C15560: e1c30191  add x1, sp, #0x70
0x03C15564: e00314aa  mov x0, x20
0x03C15568: 021140f9  ldr x2, [x8, #0x20]
0x03C1556C: 18260094  bl #0x3c1edcc
0x03C15570: 40030036  tbz w0, #0, #0x3c155d8
0x03C15574: e08743ad  ldp q0, q1, [sp, #0x70]
0x03C15578: e227c03d  ldr q2, [sp, #0x90]
0x03C1557C: 03e4006f  movi v3.2d, #0000000000000000
0x03C15580: e38f02ad  stp q3, q3, [sp, #0x50]
0x03C15584: e00700ad  stp q0, q1, [sp]
0x03C15588: e20f01ad  stp q2, q3, [sp, #0x20]
0x03C1558C: e313803d  str q3, [sp, #0x40]
0x03C15590: a81e40f9  ldr x8, [x21, #0x38]
0x03C15594: e2db40b9  ldr w2, [sp, #0xd8]
0x03C15598: e0c30091  add x0, sp, #0x30
0x03C1559C: e3830291  add x3, sp, #0xa0
0x03C155A0: 041940f9  ldr x4, [x8, #0x30]
0x03C155A4: e10314aa  mov x1, x20
0x03C155A8: e00705ad  stp q0, q1, [sp, #0xa0]
0x03C155AC: e233803d  str q2, [sp, #0xc0]
0x03C155B0: 0a282f94  bl #0x47df5d8
0x03C155B4: e18342ad  ldp q1, q0, [sp, #0x50]
0x03C155B8: e38b41ad  ldp q3, q2, [sp, #0x30]
0x03C155BC: e00313aa  mov x0, x19
0x03C155C0: e1031faa  mov x1, xzr
0x03C155C4: 610201ad  stp q1, q0, [x19, #0x20]
0x03C155C8: 630a00ad  stp q3, q2, [x19]
0x03C155CC: feacd597  bl #0x31809c4
0x03C155D0: 20008052  movz w0, #0x1
0x03C155D4: 02000014  b #0x3c155dc
0x03C155D8: e0031f2a  mov w0, wzr
0x03C155DC: f44f4fa9  ldp x20, x19, [sp, #0xf0]
0x03C155E0: fe574ea9  ldp x30, x21, [sp, #0xe0]
0x03C155E4: fd6b40f9  ldr x29, [sp, #0xd0]
0x03C155E8: ff030491  add sp, sp, #0x100
0x03C155EC: c0035fd6  ret
0x03C155F0: afadd597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C155F4 | ContextualizedECS.Query.Entities$$MatchMethod<BoardTilePositionComponent, MergeComponent>
; native signature: bool ContextualizedECS_Query_Entities__MatchMethod_BoardTilePositionComponent__MergeComponent_ (ContextualizedECS_Entity_o* entity, System_ValueTuple_Entity__T1__T2__o* result, const MethodInfo_3C155F4* method);
; bytes=196 sha256=c69d7c54b4d1fde70731b478e77c430d772c7911920267081591b00dc0a9a07d status=arm64_complete_bound indexed_start=True
0x03C155F4: ff8301d1  sub sp, sp, #0x60
0x03C155F8: fe5704a9  stp x30, x21, [sp, #0x40]
0x03C155FC: f44f05a9  stp x20, x19, [sp, #0x50]
0x03C15600: 481c40f9  ldr x8, [x2, #0x38]
0x03C15604: f50302aa  mov x21, x2
0x03C15608: f30301aa  mov x19, x1
0x03C1560C: f40300aa  mov x20, x0
0x03C15610: 680000b5  cbnz x8, #0x3c1561c
0x03C15614: e00315aa  mov x0, x21
0x03C15618: 9804d597  bl #0x3156878
0x03C1561C: 00e4006f  movi v0.2d, #0000000000000000
0x03C15620: ff3b00b9  str wzr, [sp, #0x38]
0x03C15624: ffff02a9  stp xzr, xzr, [sp, #0x28]
0x03C15628: 600200ad  stp q0, q0, [x19]
0x03C1562C: 540400b4  cbz x20, #0x3c156b4
0x03C15630: a81e40f9  ldr x8, [x21, #0x38]
0x03C15634: e1e30091  add x1, sp, #0x38
0x03C15638: e00314aa  mov x0, x20
0x03C1563C: 020940f9  ldr x2, [x8, #0x10]
0x03C15640: 29230094  bl #0x3c1e2e4
0x03C15644: e0020036  tbz w0, #0, #0x3c156a0
0x03C15648: a81e40f9  ldr x8, [x21, #0x38]
0x03C1564C: e1a30091  add x1, sp, #0x28
0x03C15650: e00314aa  mov x0, x20
0x03C15654: 021140f9  ldr x2, [x8, #0x20]
0x03C15658: c9270094  bl #0x3c1f57c
0x03C1565C: 20020036  tbz w0, #0, #0x3c156a0
0x03C15660: 00e4006f  movi v0.2d, #0000000000000000
0x03C15664: e00300ad  stp q0, q0, [sp]
0x03C15668: a81e40f9  ldr x8, [x21, #0x38]
0x03C1566C: e23b40b9  ldr w2, [sp, #0x38]
0x03C15670: e39342a9  ldp x3, x4, [sp, #0x28]
0x03C15674: e0030091  mov x0, sp
0x03C15678: 051940f9  ldr x5, [x8, #0x30]
0x03C1567C: e10314aa  mov x1, x20
0x03C15680: f62c2f94  bl #0x47e0a58
0x03C15684: e10340ad  ldp q1, q0, [sp]
0x03C15688: e00313aa  mov x0, x19
0x03C1568C: e1031faa  mov x1, xzr
0x03C15690: 610200ad  stp q1, q0, [x19]
0x03C15694: ccacd597  bl #0x31809c4
0x03C15698: 20008052  movz w0, #0x1
0x03C1569C: 02000014  b #0x3c156a4
0x03C156A0: e0031f2a  mov w0, wzr
0x03C156A4: f44f45a9  ldp x20, x19, [sp, #0x50]
0x03C156A8: fe5744a9  ldp x30, x21, [sp, #0x40]
0x03C156AC: ff830191  add sp, sp, #0x60
0x03C156B0: c0035fd6  ret
0x03C156B4: 7eadd597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C156B8 | ContextualizedECS.Query.Entities$$MatchMethod<BoardTilePositionComponent, TimeCycleComponent>
; native signature: bool ContextualizedECS_Query_Entities__MatchMethod_BoardTilePositionComponent__TimeCycleComponent_ (ContextualizedECS_Entity_o* entity, System_ValueTuple_Entity__T1__T2__o* result, const MethodInfo_3C156B8* method);
; bytes=260 sha256=1ddf2179686151d0b0ad41dac3d250d32c6cce5fd8fa82da895fd83fc6a71979 status=arm64_complete_bound indexed_start=True
0x03C156B8: ff0305d1  sub sp, sp, #0x140
0x03C156BC: fd7b11a9  stp x29, x30, [sp, #0x110]
0x03C156C0: f65712a9  stp x22, x21, [sp, #0x120]
0x03C156C4: f44f13a9  stp x20, x19, [sp, #0x130]
0x03C156C8: 481c40f9  ldr x8, [x2, #0x38]
0x03C156CC: f50302aa  mov x21, x2
0x03C156D0: f30301aa  mov x19, x1
0x03C156D4: f40300aa  mov x20, x0
0x03C156D8: 680000b5  cbnz x8, #0x3c156e4
0x03C156DC: e00315aa  mov x0, x21
0x03C156E0: 6604d597  bl #0x3156878
0x03C156E4: 00e4006f  movi v0.2d, #0000000000000000
0x03C156E8: ffbb00b9  str wzr, [sp, #0xb8]
0x03C156EC: e08304ad  stp q0, q0, [sp, #0x90]
0x03C156F0: e08303ad  stp q0, q0, [sp, #0x70]
0x03C156F4: e01b803d  str q0, [sp, #0x60]
0x03C156F8: 600202ad  stp q0, q0, [x19, #0x40]
0x03C156FC: 600201ad  stp q0, q0, [x19, #0x20]
0x03C15700: 600200ad  stp q0, q0, [x19]
0x03C15704: b40500b4  cbz x20, #0x3c157b8
0x03C15708: a81e40f9  ldr x8, [x21, #0x38]
0x03C1570C: e1e30291  add x1, sp, #0xb8
0x03C15710: e00314aa  mov x0, x20
0x03C15714: 020940f9  ldr x2, [x8, #0x10]
0x03C15718: f3220094  bl #0x3c1e2e4
0x03C1571C: 20040036  tbz w0, #0, #0x3c157a0
0x03C15720: a81e40f9  ldr x8, [x21, #0x38]
0x03C15724: e1830191  add x1, sp, #0x60
0x03C15728: e00314aa  mov x0, x20
0x03C1572C: 021140f9  ldr x2, [x8, #0x20]
0x03C15730: 35290094  bl #0x3c1fc04
0x03C15734: 60030036  tbz w0, #0, #0x3c157a0
0x03C15738: 00e4006f  movi v0.2d, #0000000000000000
0x03C1573C: e00302ad  stp q0, q0, [sp, #0x40]
0x03C15740: e00301ad  stp q0, q0, [sp, #0x20]
0x03C15744: e00300ad  stp q0, q0, [sp]
0x03C15748: a81e40f9  ldr x8, [x21, #0x38]
0x03C1574C: f5bb40b9  ldr w21, [sp, #0xb8]
0x03C15750: e0030391  add x0, sp, #0xc0
0x03C15754: e1830191  add x1, sp, #0x60
0x03C15758: 161940f9  ldr x22, [x8, #0x30]
0x03C1575C: 020a8052  movz w2, #0x50
0x03C15760: 84e4d694  bl #0x71ce970
0x03C15764: e0030091  mov x0, sp
0x03C15768: e3030391  add x3, sp, #0xc0
0x03C1576C: e10314aa  mov x1, x20
0x03C15770: e20315aa  mov x2, x21
0x03C15774: e40316aa  mov x4, x22
0x03C15778: 84312f94  bl #0x47e1d88
0x03C1577C: e1030091  mov x1, sp
0x03C15780: 020c8052  movz w2, #0x60
0x03C15784: e00313aa  mov x0, x19
0x03C15788: 7ae4d694  bl #0x71ce970
0x03C1578C: e00313aa  mov x0, x19
0x03C15790: e1031faa  mov x1, xzr
0x03C15794: 8cacd597  bl #0x31809c4
0x03C15798: 20008052  movz w0, #0x1
0x03C1579C: 02000014  b #0x3c157a4
0x03C157A0: e0031f2a  mov w0, wzr
0x03C157A4: f44f53a9  ldp x20, x19, [sp, #0x130]
0x03C157A8: f65752a9  ldp x22, x21, [sp, #0x120]
0x03C157AC: fd7b51a9  ldp x29, x30, [sp, #0x110]
0x03C157B0: ff030591  add sp, sp, #0x140
0x03C157B4: c0035fd6  ret
0x03C157B8: 3dadd597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C157BC | ContextualizedECS.Query.Entities$$MatchMethod<BoardTilePositionComponent, TimeLockComponent>
; native signature: bool ContextualizedECS_Query_Entities__MatchMethod_BoardTilePositionComponent__TimeLockComponent_ (ContextualizedECS_Entity_o* entity, System_ValueTuple_Entity__T1__T2__o* result, const MethodInfo_3C157BC* method);
; bytes=248 sha256=4eca1b328784470535cdbb58e03ee68b79def514c14f65ba32e0980cda76fa32 status=arm64_complete_bound indexed_start=True
0x03C157BC: ff0303d1  sub sp, sp, #0xc0
0x03C157C0: fe570aa9  stp x30, x21, [sp, #0xa0]
0x03C157C4: f44f0ba9  stp x20, x19, [sp, #0xb0]
0x03C157C8: 481c40f9  ldr x8, [x2, #0x38]
0x03C157CC: f50302aa  mov x21, x2
0x03C157D0: f30301aa  mov x19, x1
0x03C157D4: f40300aa  mov x20, x0
0x03C157D8: 680000b5  cbnz x8, #0x3c157e4
0x03C157DC: e00315aa  mov x0, x21
0x03C157E0: 2604d597  bl #0x3156878
0x03C157E4: 00e4006f  movi v0.2d, #0000000000000000
0x03C157E8: ff6b00b9  str wzr, [sp, #0x68]
0x03C157EC: ff3300f9  str xzr, [sp, #0x60]
0x03C157F0: e00302ad  stp q0, q0, [sp, #0x40]
0x03C157F4: 7f1a00f9  str xzr, [x19, #0x30]
0x03C157F8: 608200ad  stp q0, q0, [x19, #0x10]
0x03C157FC: 6002803d  str q0, [x19]
0x03C15800: 940500b4  cbz x20, #0x3c158b0
0x03C15804: a81e40f9  ldr x8, [x21, #0x38]
0x03C15808: e1a30191  add x1, sp, #0x68
0x03C1580C: e00314aa  mov x0, x20
0x03C15810: 020940f9  ldr x2, [x8, #0x10]
0x03C15814: b4220094  bl #0x3c1e2e4
0x03C15818: 20040036  tbz w0, #0, #0x3c1589c
0x03C1581C: a81e40f9  ldr x8, [x21, #0x38]
0x03C15820: e1030191  add x1, sp, #0x40
0x03C15824: e00314aa  mov x0, x20
0x03C15828: 021140f9  ldr x2, [x8, #0x20]
0x03C1582C: c6290094  bl #0x3c1ff44
0x03C15830: 60030036  tbz w0, #0, #0x3c1589c
0x03C15834: 00e4006f  movi v0.2d, #0000000000000000
0x03C15838: ff1b00f9  str xzr, [sp, #0x30]
0x03C1583C: e08300ad  stp q0, q0, [sp, #0x10]
0x03C15840: e003803d  str q0, [sp]
0x03C15844: a81e40f9  ldr x8, [x21, #0x38]
0x03C15848: e26b40b9  ldr w2, [sp, #0x68]
0x03C1584C: e00742ad  ldp q0, q1, [sp, #0x40]
0x03C15850: e93340f9  ldr x9, [sp, #0x60]
0x03C15854: 041940f9  ldr x4, [x8, #0x30]
0x03C15858: e0030091  mov x0, sp
0x03C1585C: e3c30191  add x3, sp, #0x70
0x03C15860: e10314aa  mov x1, x20
0x03C15864: e08703ad  stp q0, q1, [sp, #0x70]
0x03C15868: e94b00f9  str x9, [sp, #0x90]
0x03C1586C: 63362f94  bl #0x47e31f8
0x03C15870: e81b40f9  ldr x8, [sp, #0x30]
0x03C15874: e18340ad  ldp q1, q0, [sp, #0x10]
0x03C15878: e203c03d  ldr q2, [sp]
0x03C1587C: e00313aa  mov x0, x19
0x03C15880: e1031faa  mov x1, xzr
0x03C15884: 681a00f9  str x8, [x19, #0x30]
0x03C15888: 618200ad  stp q1, q0, [x19, #0x10]
0x03C1588C: 6202803d  str q2, [x19]
0x03C15890: 4dacd597  bl #0x31809c4
0x03C15894: 20008052  movz w0, #0x1
0x03C15898: 02000014  b #0x3c158a0
0x03C1589C: e0031f2a  mov w0, wzr
0x03C158A0: f44f4ba9  ldp x20, x19, [sp, #0xb0]
0x03C158A4: fe574aa9  ldp x30, x21, [sp, #0xa0]
0x03C158A8: ff030391  add sp, sp, #0xc0
0x03C158AC: c0035fd6  ret
0x03C158B0: ffacd597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C158B4 | ContextualizedECS.Query.Entities$$MatchMethod<BornComponent, IdComponent>
; native signature: bool ContextualizedECS_Query_Entities__MatchMethod_BornComponent__IdComponent_ (ContextualizedECS_Entity_o* entity, System_ValueTuple_Entity__T1__T2__o* result, const MethodInfo_3C158B4* method);
; bytes=248 sha256=dae704f15c66e0bd533d6816abc7b1e05c87adc97a217273fa78095ad4ee3cd9 status=arm64_complete_bound indexed_start=True
0x03C158B4: ff0304d1  sub sp, sp, #0x100
0x03C158B8: fd6b00f9  str x29, [sp, #0xd0]
0x03C158BC: fe570ea9  stp x30, x21, [sp, #0xe0]
0x03C158C0: f44f0fa9  stp x20, x19, [sp, #0xf0]
0x03C158C4: 481c40f9  ldr x8, [x2, #0x38]
0x03C158C8: f50302aa  mov x21, x2
0x03C158CC: f30301aa  mov x19, x1
0x03C158D0: f40300aa  mov x20, x0
0x03C158D4: 680000b5  cbnz x8, #0x3c158e0
0x03C158D8: e00315aa  mov x0, x21
0x03C158DC: e703d597  bl #0x3156878
0x03C158E0: 00e4006f  movi v0.2d, #0000000000000000
0x03C158E4: ff6f00f9  str xzr, [sp, #0xd8]
0x03C158E8: e00304ad  stp q0, q0, [sp, #0x80]
0x03C158EC: e01f803d  str q0, [sp, #0x70]
0x03C158F0: 600201ad  stp q0, q0, [x19, #0x20]
0x03C158F4: 600200ad  stp q0, q0, [x19]
0x03C158F8: 940500b4  cbz x20, #0x3c159a8
0x03C158FC: a81e40f9  ldr x8, [x21, #0x38]
0x03C15900: e1630391  add x1, sp, #0xd8
0x03C15904: e00314aa  mov x0, x20
0x03C15908: 020940f9  ldr x2, [x8, #0x10]
0x03C1590C: b9220094  bl #0x3c1e3f0
0x03C15910: 00040036  tbz w0, #0, #0x3c15990
0x03C15914: a81e40f9  ldr x8, [x21, #0x38]
0x03C15918: e1c30191  add x1, sp, #0x70
0x03C1591C: e00314aa  mov x0, x20
0x03C15920: 021140f9  ldr x2, [x8, #0x20]
0x03C15924: 2a250094  bl #0x3c1edcc
0x03C15928: 40030036  tbz w0, #0, #0x3c15990
0x03C1592C: e08743ad  ldp q0, q1, [sp, #0x70]
0x03C15930: e227c03d  ldr q2, [sp, #0x90]
0x03C15934: 03e4006f  movi v3.2d, #0000000000000000
0x03C15938: e38f02ad  stp q3, q3, [sp, #0x50]
0x03C1593C: e00700ad  stp q0, q1, [sp]
0x03C15940: e20f01ad  stp q2, q3, [sp, #0x20]
0x03C15944: e313803d  str q3, [sp, #0x40]
0x03C15948: a81e40f9  ldr x8, [x21, #0x38]
0x03C1594C: e26f40f9  ldr x2, [sp, #0xd8]
0x03C15950: e0c30091  add x0, sp, #0x30
0x03C15954: e3830291  add x3, sp, #0xa0
0x03C15958: 041940f9  ldr x4, [x8, #0x30]
0x03C1595C: e10314aa  mov x1, x20
0x03C15960: e00705ad  stp q0, q1, [sp, #0xa0]
0x03C15964: e233803d  str q2, [sp, #0xc0]
0x03C15968: 513b2f94  bl #0x47e46ac
0x03C1596C: e18342ad  ldp q1, q0, [sp, #0x50]
0x03C15970: e38b41ad  ldp q3, q2, [sp, #0x30]
0x03C15974: e00313aa  mov x0, x19
0x03C15978: e1031faa  mov x1, xzr
0x03C1597C: 610201ad  stp q1, q0, [x19, #0x20]
0x03C15980: 630a00ad  stp q3, q2, [x19]
0x03C15984: 10acd597  bl #0x31809c4
0x03C15988: 20008052  movz w0, #0x1
0x03C1598C: 02000014  b #0x3c15994
0x03C15990: e0031f2a  mov w0, wzr
0x03C15994: f44f4fa9  ldp x20, x19, [sp, #0xf0]
0x03C15998: fe574ea9  ldp x30, x21, [sp, #0xe0]
0x03C1599C: fd6b40f9  ldr x29, [sp, #0xd0]
0x03C159A0: ff030491  add sp, sp, #0x100
0x03C159A4: c0035fd6  ret
0x03C159A8: c1acd597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C159AC | ContextualizedECS.Query.Entities$$MatchMethod<CollectableComponent, IdComponent>
; native signature: bool ContextualizedECS_Query_Entities__MatchMethod_CollectableComponent__IdComponent_ (ContextualizedECS_Entity_o* entity, System_ValueTuple_Entity__T1__T2__o* result, const MethodInfo_3C159AC* method);
; bytes=292 sha256=ebf62e973d9f939e7ef7d0ba36e2462b96935a69aad9324136754fd2b3ce7145 status=arm64_complete_bound indexed_start=True
0x03C159AC: ffc305d1  sub sp, sp, #0x170
0x03C159B0: fda300f9  str x29, [sp, #0x140]
0x03C159B4: fe5715a9  stp x30, x21, [sp, #0x150]
0x03C159B8: f44f16a9  stp x20, x19, [sp, #0x160]
0x03C159BC: 481c40f9  ldr x8, [x2, #0x38]
0x03C159C0: f50302aa  mov x21, x2
0x03C159C4: f30301aa  mov x19, x1
0x03C159C8: f40300aa  mov x20, x0
0x03C159CC: 680000b5  cbnz x8, #0x3c159d8
0x03C159D0: e00315aa  mov x0, x21
0x03C159D4: a903d597  bl #0x3156878
0x03C159D8: 00e4006f  movi v0.2d, #0000000000000000
0x03C159DC: ffff0da9  stp xzr, xzr, [sp, #0xd8]
0x03C159E0: ff7700f9  str xzr, [sp, #0xe8]
0x03C159E4: e08305ad  stp q0, q0, [sp, #0xb0]
0x03C159E8: e02b803d  str q0, [sp, #0xa0]
0x03C159EC: 608201ad  stp q0, q0, [x19, #0x30]
0x03C159F0: 608200ad  stp q0, q0, [x19, #0x10]
0x03C159F4: 6002803d  str q0, [x19]
0x03C159F8: b40600b4  cbz x20, #0x3c15acc
0x03C159FC: a81e40f9  ldr x8, [x21, #0x38]
0x03C15A00: e1630391  add x1, sp, #0xd8
0x03C15A04: e00314aa  mov x0, x20
0x03C15A08: 020940f9  ldr x2, [x8, #0x10]
0x03C15A0C: 48230094  bl #0x3c1e72c
0x03C15A10: 20050036  tbz w0, #0, #0x3c15ab4
0x03C15A14: a81e40f9  ldr x8, [x21, #0x38]
0x03C15A18: e1830291  add x1, sp, #0xa0
0x03C15A1C: e00314aa  mov x0, x20
0x03C15A20: 021140f9  ldr x2, [x8, #0x20]
0x03C15A24: ea240094  bl #0x3c1edcc
0x03C15A28: 60040036  tbz w0, #0, #0x3c15ab4
0x03C15A2C: 01e4006f  movi v1.2d, #0000000000000000
0x03C15A30: e383cd3c  ldur q3, [sp, #0xd8]
0x03C15A34: e87740f9  ldr x8, [sp, #0xe8]
0x03C15A38: e10704ad  stp q1, q1, [sp, #0x80]
0x03C15A3C: e10703ad  stp q1, q1, [sp, #0x60]
0x03C15A40: e117803d  str q1, [sp, #0x50]
0x03C15A44: e10b45ad  ldp q1, q2, [sp, #0xa0]
0x03C15A48: e033c03d  ldr q0, [sp, #0xc0]
0x03C15A4C: e82300f9  str x8, [sp, #0x40]
0x03C15A50: e92340f9  ldr x9, [sp, #0x40]
0x03C15A54: e10b00ad  stp q1, q2, [sp]
0x03C15A58: e00f01ad  stp q0, q3, [sp, #0x20]
0x03C15A5C: a81e40f9  ldr x8, [x21, #0x38]
0x03C15A60: e30fc03d  ldr q3, [sp, #0x30]
0x03C15A64: e10b40ad  ldp q1, q2, [sp]
0x03C15A68: e00bc03d  ldr q0, [sp, #0x20]
0x03C15A6C: 041940f9  ldr x4, [x8, #0x30]
0x03C15A70: e0430191  add x0, sp, #0x50
0x03C15A74: e2830491  add x2, sp, #0x120
0x03C15A78: e3c30391  add x3, sp, #0xf0
0x03C15A7C: e10314aa  mov x1, x20
0x03C15A80: e18b07ad  stp q1, q2, [sp, #0xf0]
0x03C15A84: e99b00f9  str x9, [sp, #0x130]
0x03C15A88: e08f08ad  stp q0, q3, [sp, #0x110]
0x03C15A8C: 02402f94  bl #0x47e5a94
0x03C15A90: e1430191  add x1, sp, #0x50
0x03C15A94: 020a8052  movz w2, #0x50
0x03C15A98: e00313aa  mov x0, x19
0x03C15A9C: b5e3d694  bl #0x71ce970
0x03C15AA0: e00313aa  mov x0, x19
0x03C15AA4: e1031faa  mov x1, xzr
0x03C15AA8: c7abd597  bl #0x31809c4
0x03C15AAC: 20008052  movz w0, #0x1
0x03C15AB0: 02000014  b #0x3c15ab8
0x03C15AB4: e0031f2a  mov w0, wzr
0x03C15AB8: f44f56a9  ldp x20, x19, [sp, #0x160]
0x03C15ABC: fe5755a9  ldp x30, x21, [sp, #0x150]
0x03C15AC0: fda340f9  ldr x29, [sp, #0x140]
0x03C15AC4: ffc30591  add sp, sp, #0x170
0x03C15AC8: c0035fd6  ret
0x03C15ACC: 78acd597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C15AD0 | ContextualizedECS.Query.Entities$$MatchMethod<IdComponent, BoardTilePositionComponent>
; native signature: bool ContextualizedECS_Query_Entities__MatchMethod_IdComponent__BoardTilePositionComponent_ (ContextualizedECS_Entity_o* entity, System_ValueTuple_Entity__T1__T2__o* result, const MethodInfo_3C15AD0* method);
; bytes=248 sha256=4f82dbdff5e57b0ca18a187ad7d5f39b0f6df90454032dc0026bcc3754bcc266 status=arm64_complete_bound indexed_start=True
0x03C15AD0: ff0304d1  sub sp, sp, #0x100
0x03C15AD4: fd6b00f9  str x29, [sp, #0xd0]
0x03C15AD8: fe570ea9  stp x30, x21, [sp, #0xe0]
0x03C15ADC: f44f0fa9  stp x20, x19, [sp, #0xf0]
0x03C15AE0: 481c40f9  ldr x8, [x2, #0x38]
0x03C15AE4: f50302aa  mov x21, x2
0x03C15AE8: f30301aa  mov x19, x1
0x03C15AEC: f40300aa  mov x20, x0
0x03C15AF0: 680000b5  cbnz x8, #0x3c15afc
0x03C15AF4: e00315aa  mov x0, x21
0x03C15AF8: 6003d597  bl #0x3156878
0x03C15AFC: 00e4006f  movi v0.2d, #0000000000000000
0x03C15B00: ffdb00b9  str wzr, [sp, #0xd8]
0x03C15B04: e00304ad  stp q0, q0, [sp, #0x80]
0x03C15B08: e01f803d  str q0, [sp, #0x70]
0x03C15B0C: 600201ad  stp q0, q0, [x19, #0x20]
0x03C15B10: 600200ad  stp q0, q0, [x19]
0x03C15B14: 940500b4  cbz x20, #0x3c15bc4
0x03C15B18: a81e40f9  ldr x8, [x21, #0x38]
0x03C15B1C: e1c30191  add x1, sp, #0x70
0x03C15B20: e00314aa  mov x0, x20
0x03C15B24: 020940f9  ldr x2, [x8, #0x10]
0x03C15B28: a9240094  bl #0x3c1edcc
0x03C15B2C: 00040036  tbz w0, #0, #0x3c15bac
0x03C15B30: a81e40f9  ldr x8, [x21, #0x38]
0x03C15B34: e1630391  add x1, sp, #0xd8
0x03C15B38: e00314aa  mov x0, x20
0x03C15B3C: 021140f9  ldr x2, [x8, #0x20]
0x03C15B40: e9210094  bl #0x3c1e2e4
0x03C15B44: 40030036  tbz w0, #0, #0x3c15bac
0x03C15B48: e08743ad  ldp q0, q1, [sp, #0x70]
0x03C15B4C: e227c03d  ldr q2, [sp, #0x90]
0x03C15B50: 03e4006f  movi v3.2d, #0000000000000000
0x03C15B54: e38f02ad  stp q3, q3, [sp, #0x50]
0x03C15B58: e00700ad  stp q0, q1, [sp]
0x03C15B5C: e20f01ad  stp q2, q3, [sp, #0x20]
0x03C15B60: e313803d  str q3, [sp, #0x40]
0x03C15B64: a81e40f9  ldr x8, [x21, #0x38]
0x03C15B68: e3db40b9  ldr w3, [sp, #0xd8]
0x03C15B6C: e0c30091  add x0, sp, #0x30
0x03C15B70: e2830291  add x2, sp, #0xa0
0x03C15B74: 041940f9  ldr x4, [x8, #0x30]
0x03C15B78: e10314aa  mov x1, x20
0x03C15B7C: e00705ad  stp q0, q1, [sp, #0xa0]
0x03C15B80: e233803d  str q2, [sp, #0xc0]
0x03C15B84: 15452f94  bl #0x47e6fd8
0x03C15B88: e18342ad  ldp q1, q0, [sp, #0x50]
0x03C15B8C: e38b41ad  ldp q3, q2, [sp, #0x30]
0x03C15B90: e00313aa  mov x0, x19
0x03C15B94: e1031faa  mov x1, xzr
0x03C15B98: 610201ad  stp q1, q0, [x19, #0x20]
0x03C15B9C: 630a00ad  stp q3, q2, [x19]
0x03C15BA0: 89abd597  bl #0x31809c4
0x03C15BA4: 20008052  movz w0, #0x1
0x03C15BA8: 02000014  b #0x3c15bb0
0x03C15BAC: e0031f2a  mov w0, wzr
0x03C15BB0: f44f4fa9  ldp x20, x19, [sp, #0xf0]
0x03C15BB4: fe574ea9  ldp x30, x21, [sp, #0xe0]
0x03C15BB8: fd6b40f9  ldr x29, [sp, #0xd0]
0x03C15BBC: ff030491  add sp, sp, #0x100
0x03C15BC0: c0035fd6  ret
0x03C15BC4: 3aacd597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C15BC8 | ContextualizedECS.Query.Entities$$MatchMethod<InteractionComponent, BoardTilePositionComponent>
; native signature: bool ContextualizedECS_Query_Entities__MatchMethod_InteractionComponent__BoardTilePositionComponent_ (ContextualizedECS_Entity_o* entity, System_ValueTuple_Entity__T1__T2__o* result, const MethodInfo_3C15BC8* method);
; bytes=256 sha256=e2be61c7e23228c236cb9d7c6d849fe2c7c9dc3420c54bcdc0188291db229c2d status=arm64_complete_bound indexed_start=True
0x03C15BC8: ffc303d1  sub sp, sp, #0xf0
0x03C15BCC: fe570da9  stp x30, x21, [sp, #0xd0]
0x03C15BD0: f44f0ea9  stp x20, x19, [sp, #0xe0]
0x03C15BD4: 481c40f9  ldr x8, [x2, #0x38]
0x03C15BD8: f50302aa  mov x21, x2
0x03C15BDC: f30301aa  mov x19, x1
0x03C15BE0: f40300aa  mov x20, x0
0x03C15BE4: 680000b5  cbnz x8, #0x3c15bf0
0x03C15BE8: e00315aa  mov x0, x21
0x03C15BEC: 2303d597  bl #0x3156878
0x03C15BF0: 00e4006f  movi v0.2d, #0000000000000000
0x03C15BF4: ff4b00f9  str xzr, [sp, #0x90]
0x03C15BF8: ff6b00b9  str wzr, [sp, #0x68]
0x03C15BFC: e08303ad  stp q0, q0, [sp, #0x70]
0x03C15C00: 7f1a00f9  str xzr, [x19, #0x30]
0x03C15C04: 608200ad  stp q0, q0, [x19, #0x10]
0x03C15C08: 6002803d  str q0, [x19]
0x03C15C0C: d40500b4  cbz x20, #0x3c15cc4
0x03C15C10: a81e40f9  ldr x8, [x21, #0x38]
0x03C15C14: e1c30191  add x1, sp, #0x70
0x03C15C18: e00314aa  mov x0, x20
0x03C15C1C: 020940f9  ldr x2, [x8, #0x10]
0x03C15C20: fe240094  bl #0x3c1f018
0x03C15C24: 60040036  tbz w0, #0, #0x3c15cb0
0x03C15C28: a81e40f9  ldr x8, [x21, #0x38]
0x03C15C2C: e1a30191  add x1, sp, #0x68
0x03C15C30: e00314aa  mov x0, x20
0x03C15C34: 021140f9  ldr x2, [x8, #0x20]
0x03C15C38: ab210094  bl #0x3c1e2e4
0x03C15C3C: a0030036  tbz w0, #0, #0x3c15cb0
0x03C15C40: e08743ad  ldp q0, q1, [sp, #0x70]
0x03C15C44: e84b40f9  ldr x8, [sp, #0x90]
0x03C15C48: 02e4006f  movi v2.2d, #0000000000000000
0x03C15C4C: ff3300f9  str xzr, [sp, #0x60]
0x03C15C50: e20b02ad  stp q2, q2, [sp, #0x40]
0x03C15C54: e00700ad  stp q0, q1, [sp]
0x03C15C58: e81300f9  str x8, [sp, #0x20]
0x03C15C5C: e20f803d  str q2, [sp, #0x30]
0x03C15C60: a91e40f9  ldr x9, [x21, #0x38]
0x03C15C64: e36b40b9  ldr w3, [sp, #0x68]
0x03C15C68: e0c30091  add x0, sp, #0x30
0x03C15C6C: e2830291  add x2, sp, #0xa0
0x03C15C70: 241940f9  ldr x4, [x9, #0x30]
0x03C15C74: e10314aa  mov x1, x20
0x03C15C78: e00705ad  stp q0, q1, [sp, #0xa0]
0x03C15C7C: e86300f9  str x8, [sp, #0xc0]
0x03C15C80: 554e2f94  bl #0x47e95d4
0x03C15C84: e83340f9  ldr x8, [sp, #0x60]
0x03C15C88: e10342ad  ldp q1, q0, [sp, #0x40]
0x03C15C8C: e20fc03d  ldr q2, [sp, #0x30]
0x03C15C90: e00313aa  mov x0, x19
0x03C15C94: e1031faa  mov x1, xzr
0x03C15C98: 681a00f9  str x8, [x19, #0x30]
0x03C15C9C: 618200ad  stp q1, q0, [x19, #0x10]
0x03C15CA0: 6202803d  str q2, [x19]
0x03C15CA4: 48abd597  bl #0x31809c4
0x03C15CA8: 20008052  movz w0, #0x1
0x03C15CAC: 02000014  b #0x3c15cb4
0x03C15CB0: e0031f2a  mov w0, wzr
0x03C15CB4: f44f4ea9  ldp x20, x19, [sp, #0xe0]
0x03C15CB8: fe574da9  ldp x30, x21, [sp, #0xd0]
0x03C15CBC: ffc30391  add sp, sp, #0xf0
0x03C15CC0: c0035fd6  ret
0x03C15CC4: faabd597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C15CC8 | ContextualizedECS.Query.Entities$$MatchMethod<PendingInteractionComponent, InteractionComponent>
; native signature: bool ContextualizedECS_Query_Entities__MatchMethod_PendingInteractionComponent__InteractionComponent_ (ContextualizedECS_Entity_o* entity, System_ValueTuple_Entity__T1__T2__o* result, const MethodInfo_3C15CC8* method);
; bytes=248 sha256=9d264de1eb6b9cedacabe6af0347f3f83f5a6ef066f1650fb32e40bb63b73448 status=arm64_complete_bound indexed_start=True
0x03C15CC8: ff4304d1  sub sp, sp, #0x110
0x03C15CCC: fd7300f9  str x29, [sp, #0xe0]
0x03C15CD0: fe570fa9  stp x30, x21, [sp, #0xf0]
0x03C15CD4: f44f10a9  stp x20, x19, [sp, #0x100]
0x03C15CD8: 481c40f9  ldr x8, [x2, #0x38]
0x03C15CDC: f50302aa  mov x21, x2
0x03C15CE0: f30301aa  mov x19, x1
0x03C15CE4: f40300aa  mov x20, x0
0x03C15CE8: 680000b5  cbnz x8, #0x3c15cf4
0x03C15CEC: e00315aa  mov x0, x21
0x03C15CF0: e202d597  bl #0x3156878
0x03C15CF4: 00e4006f  movi v0.2d, #0000000000000000
0x03C15CF8: ff7f0aa9  stp xzr, xzr, [sp, #0xa0]
0x03C15CFC: ff4b00f9  str xzr, [sp, #0x90]
0x03C15D00: e08303ad  stp q0, q0, [sp, #0x70]
0x03C15D04: 600201ad  stp q0, q0, [x19, #0x20]
0x03C15D08: 600200ad  stp q0, q0, [x19]
0x03C15D0C: 940500b4  cbz x20, #0x3c15dbc
0x03C15D10: a81e40f9  ldr x8, [x21, #0x38]
0x03C15D14: e1830291  add x1, sp, #0xa0
0x03C15D18: e00314aa  mov x0, x20
0x03C15D1C: 020940f9  ldr x2, [x8, #0x10]
0x03C15D20: 5d260094  bl #0x3c1f694
0x03C15D24: 00040036  tbz w0, #0, #0x3c15da4
0x03C15D28: a81e40f9  ldr x8, [x21, #0x38]
0x03C15D2C: e1c30191  add x1, sp, #0x70
0x03C15D30: e00314aa  mov x0, x20
0x03C15D34: 021140f9  ldr x2, [x8, #0x20]
0x03C15D38: b8240094  bl #0x3c1f018
0x03C15D3C: 40030036  tbz w0, #0, #0x3c15da4
0x03C15D40: e08743ad  ldp q0, q1, [sp, #0x70]
0x03C15D44: e84b40f9  ldr x8, [sp, #0x90]
0x03C15D48: 02e4006f  movi v2.2d, #0000000000000000
0x03C15D4C: e28b02ad  stp q2, q2, [sp, #0x50]
0x03C15D50: e00700ad  stp q0, q1, [sp]
0x03C15D54: e81300f9  str x8, [sp, #0x20]
0x03C15D58: e28b01ad  stp q2, q2, [sp, #0x30]
0x03C15D5C: a91e40f9  ldr x9, [x21, #0x38]
0x03C15D60: e20f4aa9  ldp x2, x3, [sp, #0xa0]
0x03C15D64: e0c30091  add x0, sp, #0x30
0x03C15D68: e4c30291  add x4, sp, #0xb0
0x03C15D6C: 251940f9  ldr x5, [x9, #0x30]
0x03C15D70: e10314aa  mov x1, x20
0x03C15D74: e08705ad  stp q0, q1, [sp, #0xb0]
0x03C15D78: e86b00f9  str x8, [sp, #0xd0]
0x03C15D7C: 865b2f94  bl #0x47ecb94
0x03C15D80: e18342ad  ldp q1, q0, [sp, #0x50]
0x03C15D84: e38b41ad  ldp q3, q2, [sp, #0x30]
0x03C15D88: e00313aa  mov x0, x19
0x03C15D8C: e1031faa  mov x1, xzr
0x03C15D90: 610201ad  stp q1, q0, [x19, #0x20]
0x03C15D94: 630a00ad  stp q3, q2, [x19]
0x03C15D98: 0babd597  bl #0x31809c4
0x03C15D9C: 20008052  movz w0, #0x1
0x03C15DA0: 02000014  b #0x3c15da8
0x03C15DA4: e0031f2a  mov w0, wzr
0x03C15DA8: f44f50a9  ldp x20, x19, [sp, #0x100]
0x03C15DAC: fe574fa9  ldp x30, x21, [sp, #0xf0]
0x03C15DB0: fd7340f9  ldr x29, [sp, #0xe0]
0x03C15DB4: ff430491  add sp, sp, #0x110
0x03C15DB8: c0035fd6  ret
0x03C15DBC: bcabd597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C15DC0 | ContextualizedECS.Query.Entities$$MatchMethod<__Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType>
; native signature: bool ContextualizedECS_Query_Entities__MatchMethod___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType_ (ContextualizedECS_Entity_o* entity, System_ValueTuple_Entity__T1__T2__o* result, const MethodInfo_3C15DC0* method);
; bytes=576 sha256=777702e3610beea435f47f9fe3d68defb3e9ac4f3c0d96ede8d6f57fd9658691 status=arm64_complete_bound indexed_start=True
0x03C15DC0: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x03C15DC4: fc6f01a9  stp x28, x27, [sp, #0x10]
0x03C15DC8: fa6702a9  stp x26, x25, [sp, #0x20]
0x03C15DCC: f85f03a9  stp x24, x23, [sp, #0x30]
0x03C15DD0: f65704a9  stp x22, x21, [sp, #0x40]
0x03C15DD4: f44f05a9  stp x20, x19, [sp, #0x50]
0x03C15DD8: fd030091  mov x29, sp
0x03C15DDC: ffc300d1  sub sp, sp, #0x30
0x03C15DE0: 48d03bd5  mrs x8, tpidr_el0
0x03C15DE4: a8031ff8  stur x8, [x29, #-0x10]
0x03C15DE8: 081540f9  ldr x8, [x8, #0x28]
0x03C15DEC: f40302aa  mov x20, x2
0x03C15DF0: fc0301aa  mov x28, x1
0x03C15DF4: f50300aa  mov x21, x0
0x03C15DF8: a8831ff8  stur x8, [x29, #-8]
0x03C15DFC: 481c40f9  ldr x8, [x2, #0x38]
0x03C15E00: 880000b5  cbnz x8, #0x3c15e10
0x03C15E04: e00314aa  mov x0, x20
0x03C15E08: 9c02d597  bl #0x3156878
0x03C15E0C: 881e40f9  ldr x8, [x20, #0x38]
0x03C15E10: 09a943a9  ldp x9, x10, [x8, #0x38]
0x03C15E14: 080540f9  ldr x8, [x8, #8]
0x03C15E18: 3afd40b9  ldr w26, [x9, #0xfc]
0x03C15E1C: 58fd40b9  ldr w24, [x10, #0xfc]
0x03C15E20: 16fd40b9  ldr w22, [x8, #0xfc]
0x03C15E24: e8030091  mov x8, sp
0x03C15E28: 493f0091  add x9, x26, #0xf
0x03C15E2C: 29717c92  and x9, x9, #0x1fffffff0
0x03C15E30: 080109cb  sub x8, x8, x9
0x03C15E34: a8831df8  stur x8, [x29, #-0x28]
0x03C15E38: 1f010091  mov sp, x8
0x03C15E3C: e8030091  mov x8, sp
0x03C15E40: 080109cb  sub x8, x8, x9
0x03C15E44: a8031ef8  stur x8, [x29, #-0x20]
0x03C15E48: 1f010091  mov sp, x8
0x03C15E4C: 0a3f0091  add x10, x24, #0xf
0x03C15E50: e8030091  mov x8, sp
0x03C15E54: 5b717c92  and x27, x10, #0x1fffffff0
0x03C15E58: 13011bcb  sub x19, x8, x27
0x03C15E5C: 7f020091  mov sp, x19
0x03C15E60: e8030091  mov x8, sp
0x03C15E64: 08011bcb  sub x8, x8, x27
0x03C15E68: a8031df8  stur x8, [x29, #-0x30]
0x03C15E6C: 1f010091  mov sp, x8
0x03C15E70: ca3e0091  add x10, x22, #0xf
0x03C15E74: e8030091  mov x8, sp
0x03C15E78: 4a717c92  and x10, x10, #0x1fffffff0
0x03C15E7C: 17010acb  sub x23, x8, x10
0x03C15E80: ff020091  mov sp, x23
0x03C15E84: e8030091  mov x8, sp
0x03C15E88: 190109cb  sub x25, x8, x9
0x03C15E8C: 3f030091  mov sp, x25
0x03C15E90: e00319aa  mov x0, x25
0x03C15E94: e1031f2a  mov w1, wzr
0x03C15E98: e2031aaa  mov x2, x26
0x03C15E9C: c1e2d694  bl #0x71ce9a0
0x03C15EA0: e8030091  mov x8, sp
0x03C15EA4: 1b011bcb  sub x27, x8, x27
0x03C15EA8: 7f030091  mov sp, x27
0x03C15EAC: e0031baa  mov x0, x27
0x03C15EB0: e1031f2a  mov w1, wzr
0x03C15EB4: e20318aa  mov x2, x24
0x03C15EB8: bae2d694  bl #0x71ce9a0
0x03C15EBC: e0031caa  mov x0, x28
0x03C15EC0: e1031f2a  mov w1, wzr
0x03C15EC4: e20316aa  mov x2, x22
0x03C15EC8: bc831ef8  stur x28, [x29, #-0x18]
0x03C15ECC: b5e2d694  bl #0x71ce9a0
0x03C15ED0: 550900b4  cbz x21, #0x3c15ff8
0x03C15ED4: 881e40f9  ldr x8, [x20, #0x38]
0x03C15ED8: e00315aa  mov x0, x21
0x03C15EDC: e10319aa  mov x1, x25
0x03C15EE0: 020940f9  ldr x2, [x8, #0x10]
0x03C15EE4: 480040f9  ldr x8, [x2]
0x03C15EE8: 00013fd6  blr x8
0x03C15EEC: a0060036  tbz w0, #0, #0x3c15fc0
0x03C15EF0: 881e40f9  ldr x8, [x20, #0x38]
0x03C15EF4: e00315aa  mov x0, x21
0x03C15EF8: e1031baa  mov x1, x27
0x03C15EFC: 021140f9  ldr x2, [x8, #0x20]
0x03C15F00: 480040f9  ldr x8, [x2]
0x03C15F04: 00013fd6  blr x8
0x03C15F08: c0050036  tbz w0, #0, #0x3c15fc0
0x03C15F0C: bc835df8  ldur x28, [x29, #-0x28]
0x03C15F10: e10319aa  mov x1, x25
0x03C15F14: e2031aaa  mov x2, x26
0x03C15F18: e0031caa  mov x0, x28
0x03C15F1C: 95e2d694  bl #0x71ce970
0x03C15F20: e00313aa  mov x0, x19
0x03C15F24: e1031baa  mov x1, x27
0x03C15F28: e20318aa  mov x2, x24
0x03C15F2C: 91e2d694  bl #0x71ce970
0x03C15F30: e00317aa  mov x0, x23
0x03C15F34: e1031f2a  mov w1, wzr
0x03C15F38: e20316aa  mov x2, x22
0x03C15F3C: 99e2d694  bl #0x71ce9a0
0x03C15F40: b9035ef8  ldur x25, [x29, #-0x20]
0x03C15F44: e1031caa  mov x1, x28
0x03C15F48: e2031aaa  mov x2, x26
0x03C15F4C: e00319aa  mov x0, x25
0x03C15F50: 88e2d694  bl #0x71ce970
0x03C15F54: ba035df8  ldur x26, [x29, #-0x30]
0x03C15F58: e10313aa  mov x1, x19
0x03C15F5C: e20318aa  mov x2, x24
0x03C15F60: e0031aaa  mov x0, x26
0x03C15F64: 83e2d694  bl #0x71ce970
0x03C15F68: 881e40f9  ldr x8, [x20, #0x38]
0x03C15F6C: e00317aa  mov x0, x23
0x03C15F70: e10315aa  mov x1, x21
0x03C15F74: e20319aa  mov x2, x25
0x03C15F78: 041940f9  ldr x4, [x8, #0x30]
0x03C15F7C: e3031aaa  mov x3, x26
0x03C15F80: d76e2f94  bl #0x47f1adc
0x03C15F84: b3835ef8  ldur x19, [x29, #-0x18]
0x03C15F88: e10317aa  mov x1, x23
0x03C15F8C: e20316aa  mov x2, x22
0x03C15F90: e00313aa  mov x0, x19
0x03C15F94: 77e2d694  bl #0x71ce970
0x03C15F98: 881e40f9  ldr x8, [x20, #0x38]
0x03C15F9C: 000540f9  ldr x0, [x8, #8]
0x03C15FA0: 08d44439  ldrb w8, [x0, #0x135]
0x03C15FA4: 48000037  tbnz w8, #0, #0x3c15fac
0x03C15FA8: 1d02d597  bl #0x315681c
0x03C15FAC: e10313aa  mov x1, x19
0x03C15FB0: e20317aa  mov x2, x23
0x03C15FB4: 85aad597  bl #0x31809c8
0x03C15FB8: 20008052  movz w0, #0x1
0x03C15FBC: 02000014  b #0x3c15fc4
0x03C15FC0: e0031f2a  mov w0, wzr
0x03C15FC4: a8035ff8  ldur x8, [x29, #-0x10]
0x03C15FC8: 081540f9  ldr x8, [x8, #0x28]
0x03C15FCC: a9835ff8  ldur x9, [x29, #-8]
0x03C15FD0: 1f0109eb  cmp x8, x9
0x03C15FD4: 41010054  b.ne #0x3c15ffc
0x03C15FD8: bf030091  mov sp, x29
0x03C15FDC: f44f45a9  ldp x20, x19, [sp, #0x50]
0x03C15FE0: f65744a9  ldp x22, x21, [sp, #0x40]
0x03C15FE4: f85f43a9  ldp x24, x23, [sp, #0x30]
0x03C15FE8: fa6742a9  ldp x26, x25, [sp, #0x20]
0x03C15FEC: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x03C15FF0: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x03C15FF4: c0035fd6  ret
0x03C15FF8: 2dabd597  bl #0x3180cac
0x03C15FFC: 65e2d694  bl #0x71ce990

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1A2B0 | ContextualizedECS.Query.Entities$$With<BoardTilePositionComponent, IdComponent, InteractionComponent>
; native signature: ContextualizedECS_Query_Entities_MatchDelegate_ValueTuple_Entity__T1__T2__T3___o* ContextualizedECS_Query_Entities__With_BoardTilePositionComponent__IdComponent__InteractionComponent_ (const MethodInfo_3C1A2B0* method);
; bytes=84 sha256=a8c08ddb94b39138026c80a26552c7a84881dc22a696d472ea857c12662341e2 status=arm64_complete_bound indexed_start=True
0x03C1A2B0: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x03C1A2B4: 081c40f9  ldr x8, [x0, #0x38]
0x03C1A2B8: f30300aa  mov x19, x0
0x03C1A2BC: 880000b5  cbnz x8, #0x3c1a2cc
0x03C1A2C0: e00313aa  mov x0, x19
0x03C1A2C4: 6df1d497  bl #0x3156878
0x03C1A2C8: 681e40f9  ldr x8, [x19, #0x38]
0x03C1A2CC: 000540f9  ldr x0, [x8, #8]
0x03C1A2D0: 08d44439  ldrb w8, [x0, #0x135]
0x03C1A2D4: 48000037  tbnz w8, #0, #0x3c1a2dc
0x03C1A2D8: 51f1d497  bl #0x315681c
0x03C1A2DC: 719ad597  bl #0x3180ca0
0x03C1A2E0: 681e40f9  ldr x8, [x19, #0x38]
0x03C1A2E4: e1031faa  mov x1, xzr
0x03C1A2E8: f30300aa  mov x19, x0
0x03C1A2EC: 020140f9  ldr x2, [x8]
0x03C1A2F0: 030940f9  ldr x3, [x8, #0x10]
0x03C1A2F4: 84011794  bl #0x41da904
0x03C1A2F8: e00313aa  mov x0, x19
0x03C1A2FC: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x03C1A300: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1A304 | ContextualizedECS.Query.Entities$$With<BoardTilePositionComponent, ItemMovedComponent, IdComponent>
; native signature: ContextualizedECS_Query_Entities_MatchDelegate_ValueTuple_Entity__T1__T2__T3___o* ContextualizedECS_Query_Entities__With_BoardTilePositionComponent__ItemMovedComponent__IdComponent_ (const MethodInfo_3C1A304* method);
; bytes=84 sha256=c83670fa90c4e6f984bc0587a6843d21e6be46f706a2f5fc9db8fe06f25fb16d status=arm64_complete_bound indexed_start=True
0x03C1A304: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x03C1A308: 081c40f9  ldr x8, [x0, #0x38]
0x03C1A30C: f30300aa  mov x19, x0
0x03C1A310: 880000b5  cbnz x8, #0x3c1a320
0x03C1A314: e00313aa  mov x0, x19
0x03C1A318: 58f1d497  bl #0x3156878
0x03C1A31C: 681e40f9  ldr x8, [x19, #0x38]
0x03C1A320: 000540f9  ldr x0, [x8, #8]
0x03C1A324: 08d44439  ldrb w8, [x0, #0x135]
0x03C1A328: 48000037  tbnz w8, #0, #0x3c1a330
0x03C1A32C: 3cf1d497  bl #0x315681c
0x03C1A330: 5c9ad597  bl #0x3180ca0
0x03C1A334: 681e40f9  ldr x8, [x19, #0x38]
0x03C1A338: e1031faa  mov x1, xzr
0x03C1A33C: f30300aa  mov x19, x0
0x03C1A340: 020140f9  ldr x2, [x8]
0x03C1A344: 030940f9  ldr x3, [x8, #0x10]
0x03C1A348: d1011794  bl #0x41daa8c
0x03C1A34C: e00313aa  mov x0, x19
0x03C1A350: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x03C1A354: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1A358 | ContextualizedECS.Query.Entities$$With<BoardTilePositionComponent, MergeComponent, IdComponent>
; native signature: ContextualizedECS_Query_Entities_MatchDelegate_ValueTuple_Entity__T1__T2__T3___o* ContextualizedECS_Query_Entities__With_BoardTilePositionComponent__MergeComponent__IdComponent_ (const MethodInfo_3C1A358* method);
; bytes=84 sha256=7fd769c043cb30de886ce6792ad3a7fe3e9749f0975c584e592ae9ab3e2c1562 status=arm64_complete_bound indexed_start=True
0x03C1A358: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x03C1A35C: 081c40f9  ldr x8, [x0, #0x38]
0x03C1A360: f30300aa  mov x19, x0
0x03C1A364: 880000b5  cbnz x8, #0x3c1a374
0x03C1A368: e00313aa  mov x0, x19
0x03C1A36C: 43f1d497  bl #0x3156878
0x03C1A370: 681e40f9  ldr x8, [x19, #0x38]
0x03C1A374: 000540f9  ldr x0, [x8, #8]
0x03C1A378: 08d44439  ldrb w8, [x0, #0x135]
0x03C1A37C: 48000037  tbnz w8, #0, #0x3c1a384
0x03C1A380: 27f1d497  bl #0x315681c
0x03C1A384: 479ad597  bl #0x3180ca0
0x03C1A388: 681e40f9  ldr x8, [x19, #0x38]
0x03C1A38C: e1031faa  mov x1, xzr
0x03C1A390: f30300aa  mov x19, x0
0x03C1A394: 020140f9  ldr x2, [x8]
0x03C1A398: 030940f9  ldr x3, [x8, #0x10]
0x03C1A39C: 1e021794  bl #0x41dac14
0x03C1A3A0: e00313aa  mov x0, x19
0x03C1A3A4: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x03C1A3A8: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1A3AC | ContextualizedECS.Query.Entities$$With<CollectableComponent, IdComponent, BornComponent>
; native signature: ContextualizedECS_Query_Entities_MatchDelegate_ValueTuple_Entity__T1__T2__T3___o* ContextualizedECS_Query_Entities__With_CollectableComponent__IdComponent__BornComponent_ (const MethodInfo_3C1A3AC* method);
; bytes=84 sha256=b95ac266cb482859ec2cec195038f42210c4f541f9c92c0a9117e5760adc1cb0 status=arm64_complete_bound indexed_start=True
0x03C1A3AC: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x03C1A3B0: 081c40f9  ldr x8, [x0, #0x38]
0x03C1A3B4: f30300aa  mov x19, x0
0x03C1A3B8: 880000b5  cbnz x8, #0x3c1a3c8
0x03C1A3BC: e00313aa  mov x0, x19
0x03C1A3C0: 2ef1d497  bl #0x3156878
0x03C1A3C4: 681e40f9  ldr x8, [x19, #0x38]
0x03C1A3C8: 000540f9  ldr x0, [x8, #8]
0x03C1A3CC: 08d44439  ldrb w8, [x0, #0x135]
0x03C1A3D0: 48000037  tbnz w8, #0, #0x3c1a3d8
0x03C1A3D4: 12f1d497  bl #0x315681c
0x03C1A3D8: 329ad597  bl #0x3180ca0
0x03C1A3DC: 681e40f9  ldr x8, [x19, #0x38]
0x03C1A3E0: e1031faa  mov x1, xzr
0x03C1A3E4: f30300aa  mov x19, x0
0x03C1A3E8: 020140f9  ldr x2, [x8]
0x03C1A3EC: 030940f9  ldr x3, [x8, #0x10]
0x03C1A3F0: 6b021794  bl #0x41dad9c
0x03C1A3F4: e00313aa  mov x0, x19
0x03C1A3F8: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x03C1A3FC: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1A400 | ContextualizedECS.Query.Entities$$With<DeadComponent, ItemConsumedComponent, IdComponent>
; native signature: ContextualizedECS_Query_Entities_MatchDelegate_ValueTuple_Entity__T1__T2__T3___o* ContextualizedECS_Query_Entities__With_DeadComponent__ItemConsumedComponent__IdComponent_ (const MethodInfo_3C1A400* method);
; bytes=84 sha256=517c84a7b4dd036d124cdf1c033d315180fd49843f2dc0d384afc1a6f2e44c2c status=arm64_complete_bound indexed_start=True
0x03C1A400: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x03C1A404: 081c40f9  ldr x8, [x0, #0x38]
0x03C1A408: f30300aa  mov x19, x0
0x03C1A40C: 880000b5  cbnz x8, #0x3c1a41c
0x03C1A410: e00313aa  mov x0, x19
0x03C1A414: 19f1d497  bl #0x3156878
0x03C1A418: 681e40f9  ldr x8, [x19, #0x38]
0x03C1A41C: 000540f9  ldr x0, [x8, #8]
0x03C1A420: 08d44439  ldrb w8, [x0, #0x135]
0x03C1A424: 48000037  tbnz w8, #0, #0x3c1a42c
0x03C1A428: fdf0d497  bl #0x315681c
0x03C1A42C: 1d9ad597  bl #0x3180ca0
0x03C1A430: 681e40f9  ldr x8, [x19, #0x38]
0x03C1A434: e1031faa  mov x1, xzr
0x03C1A438: f30300aa  mov x19, x0
0x03C1A43C: 020140f9  ldr x2, [x8]
0x03C1A440: 030940f9  ldr x3, [x8, #0x10]
0x03C1A444: b8021794  bl #0x41daf24
0x03C1A448: e00313aa  mov x0, x19
0x03C1A44C: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x03C1A450: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1A454 | ContextualizedECS.Query.Entities$$With<ExpendableComponent, BoardTilePositionComponent, DeadComponent>
; native signature: ContextualizedECS_Query_Entities_MatchDelegate_ValueTuple_Entity__T1__T2__T3___o* ContextualizedECS_Query_Entities__With_ExpendableComponent__BoardTilePositionComponent__DeadComponent_ (const MethodInfo_3C1A454* method);
; bytes=84 sha256=65a880fb5fffd6d66e9ebc70e5a6b93e737d9ba245c4ce0d58fdd63a8d807b9b status=arm64_complete_bound indexed_start=True
0x03C1A454: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x03C1A458: 081c40f9  ldr x8, [x0, #0x38]
0x03C1A45C: f30300aa  mov x19, x0
0x03C1A460: 880000b5  cbnz x8, #0x3c1a470
0x03C1A464: e00313aa  mov x0, x19
0x03C1A468: 04f1d497  bl #0x3156878
0x03C1A46C: 681e40f9  ldr x8, [x19, #0x38]
0x03C1A470: 000540f9  ldr x0, [x8, #8]
0x03C1A474: 08d44439  ldrb w8, [x0, #0x135]
0x03C1A478: 48000037  tbnz w8, #0, #0x3c1a480
0x03C1A47C: e8f0d497  bl #0x315681c
0x03C1A480: 089ad597  bl #0x3180ca0
0x03C1A484: 681e40f9  ldr x8, [x19, #0x38]
0x03C1A488: e1031faa  mov x1, xzr
0x03C1A48C: f30300aa  mov x19, x0
0x03C1A490: 020140f9  ldr x2, [x8]
0x03C1A494: 030940f9  ldr x3, [x8, #0x10]
0x03C1A498: 05031794  bl #0x41db0ac
0x03C1A49C: e00313aa  mov x0, x19
0x03C1A4A0: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x03C1A4A4: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1A4A8 | ContextualizedECS.Query.Entities$$With<ExpendableComponent, TimeLimitedActivationComponent, TimeDurationComponent>
; native signature: ContextualizedECS_Query_Entities_MatchDelegate_ValueTuple_Entity__T1__T2__T3___o* ContextualizedECS_Query_Entities__With_ExpendableComponent__TimeLimitedActivationComponent__TimeDurationComponent_ (const MethodInfo_3C1A4A8* method);
; bytes=84 sha256=5ea2b35efcbad8ccca5ad735d57823728aaaee391c4e2658c08870ca8a653428 status=arm64_complete_bound indexed_start=True
0x03C1A4A8: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x03C1A4AC: 081c40f9  ldr x8, [x0, #0x38]
0x03C1A4B0: f30300aa  mov x19, x0
0x03C1A4B4: 880000b5  cbnz x8, #0x3c1a4c4
0x03C1A4B8: e00313aa  mov x0, x19
0x03C1A4BC: eff0d497  bl #0x3156878
0x03C1A4C0: 681e40f9  ldr x8, [x19, #0x38]
0x03C1A4C4: 000540f9  ldr x0, [x8, #8]
0x03C1A4C8: 08d44439  ldrb w8, [x0, #0x135]
0x03C1A4CC: 48000037  tbnz w8, #0, #0x3c1a4d4
0x03C1A4D0: d3f0d497  bl #0x315681c
0x03C1A4D4: f399d597  bl #0x3180ca0
0x03C1A4D8: 681e40f9  ldr x8, [x19, #0x38]
0x03C1A4DC: e1031faa  mov x1, xzr
0x03C1A4E0: f30300aa  mov x19, x0
0x03C1A4E4: 020140f9  ldr x2, [x8]
0x03C1A4E8: 030940f9  ldr x3, [x8, #0x10]
0x03C1A4EC: 52031794  bl #0x41db234
0x03C1A4F0: e00313aa  mov x0, x19
0x03C1A4F4: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x03C1A4F8: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1A4FC | ContextualizedECS.Query.Entities$$With<FeedingCombinationComponent, DeadComponent, BoardTilePositionComponent>
; native signature: ContextualizedECS_Query_Entities_MatchDelegate_ValueTuple_Entity__T1__T2__T3___o* ContextualizedECS_Query_Entities__With_FeedingCombinationComponent__DeadComponent__BoardTilePositionComponent_ (const MethodInfo_3C1A4FC* method);
; bytes=84 sha256=ad0115f2fef3a2508d55bd6d89e2c4bec3a6c1f4a8618db81f745587a1d70b7c status=arm64_complete_bound indexed_start=True
0x03C1A4FC: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x03C1A500: 081c40f9  ldr x8, [x0, #0x38]
0x03C1A504: f30300aa  mov x19, x0
0x03C1A508: 880000b5  cbnz x8, #0x3c1a518
0x03C1A50C: e00313aa  mov x0, x19
0x03C1A510: daf0d497  bl #0x3156878
0x03C1A514: 681e40f9  ldr x8, [x19, #0x38]
0x03C1A518: 000540f9  ldr x0, [x8, #8]
0x03C1A51C: 08d44439  ldrb w8, [x0, #0x135]
0x03C1A520: 48000037  tbnz w8, #0, #0x3c1a528
0x03C1A524: bef0d497  bl #0x315681c
0x03C1A528: de99d597  bl #0x3180ca0
0x03C1A52C: 681e40f9  ldr x8, [x19, #0x38]
0x03C1A530: e1031faa  mov x1, xzr
0x03C1A534: f30300aa  mov x19, x0
0x03C1A538: 020140f9  ldr x2, [x8]
0x03C1A53C: 030940f9  ldr x3, [x8, #0x10]
0x03C1A540: 9f031794  bl #0x41db3bc
0x03C1A544: e00313aa  mov x0, x19
0x03C1A548: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x03C1A54C: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1A550 | ContextualizedECS.Query.Entities$$With<IdComponent, DeadComponent, BoardTilePositionComponent>
; native signature: ContextualizedECS_Query_Entities_MatchDelegate_ValueTuple_Entity__T1__T2__T3___o* ContextualizedECS_Query_Entities__With_IdComponent__DeadComponent__BoardTilePositionComponent_ (const MethodInfo_3C1A550* method);
; bytes=84 sha256=1183800422d589c8f81c2adbb88eca219014d506e0fe15dbe8f2dca202aaa516 status=arm64_complete_bound indexed_start=True
0x03C1A550: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x03C1A554: 081c40f9  ldr x8, [x0, #0x38]
0x03C1A558: f30300aa  mov x19, x0
0x03C1A55C: 880000b5  cbnz x8, #0x3c1a56c
0x03C1A560: e00313aa  mov x0, x19
0x03C1A564: c5f0d497  bl #0x3156878
0x03C1A568: 681e40f9  ldr x8, [x19, #0x38]
0x03C1A56C: 000540f9  ldr x0, [x8, #8]
0x03C1A570: 08d44439  ldrb w8, [x0, #0x135]
0x03C1A574: 48000037  tbnz w8, #0, #0x3c1a57c
0x03C1A578: a9f0d497  bl #0x315681c
0x03C1A57C: c999d597  bl #0x3180ca0
0x03C1A580: 681e40f9  ldr x8, [x19, #0x38]
0x03C1A584: e1031faa  mov x1, xzr
0x03C1A588: f30300aa  mov x19, x0
0x03C1A58C: 020140f9  ldr x2, [x8]
0x03C1A590: 030940f9  ldr x3, [x8, #0x10]
0x03C1A594: ec031794  bl #0x41db544
0x03C1A598: e00313aa  mov x0, x19
0x03C1A59C: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x03C1A5A0: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1A5A4 | ContextualizedECS.Query.Entities$$With<IdComponent, LockComponent, BoxComponent>
; native signature: ContextualizedECS_Query_Entities_MatchDelegate_ValueTuple_Entity__T1__T2__T3___o* ContextualizedECS_Query_Entities__With_IdComponent__LockComponent__BoxComponent_ (const MethodInfo_3C1A5A4* method);
; bytes=84 sha256=08acdea0f225288685e9a6b5c27c84367f5d0722be3462f9394ceb6e4293d670 status=arm64_complete_bound indexed_start=True
0x03C1A5A4: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x03C1A5A8: 081c40f9  ldr x8, [x0, #0x38]
0x03C1A5AC: f30300aa  mov x19, x0
0x03C1A5B0: 880000b5  cbnz x8, #0x3c1a5c0
0x03C1A5B4: e00313aa  mov x0, x19
0x03C1A5B8: b0f0d497  bl #0x3156878
0x03C1A5BC: 681e40f9  ldr x8, [x19, #0x38]
0x03C1A5C0: 000540f9  ldr x0, [x8, #8]
0x03C1A5C4: 08d44439  ldrb w8, [x0, #0x135]
0x03C1A5C8: 48000037  tbnz w8, #0, #0x3c1a5d0
0x03C1A5CC: 94f0d497  bl #0x315681c
0x03C1A5D0: b499d597  bl #0x3180ca0
0x03C1A5D4: 681e40f9  ldr x8, [x19, #0x38]
0x03C1A5D8: e1031faa  mov x1, xzr
0x03C1A5DC: f30300aa  mov x19, x0
0x03C1A5E0: 020140f9  ldr x2, [x8]
0x03C1A5E4: 030940f9  ldr x3, [x8, #0x10]
0x03C1A5E8: 39041794  bl #0x41db6cc
0x03C1A5EC: e00313aa  mov x0, x19
0x03C1A5F0: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x03C1A5F4: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1A5F8 | ContextualizedECS.Query.Entities$$With<ResourceConsumedComponent, InteractionComponent, BoardTilePositionComponent>
; native signature: ContextualizedECS_Query_Entities_MatchDelegate_ValueTuple_Entity__T1__T2__T3___o* ContextualizedECS_Query_Entities__With_ResourceConsumedComponent__InteractionComponent__BoardTilePositionComponent_ (const MethodInfo_3C1A5F8* method);
; bytes=84 sha256=d16bf8f4ab5e365f99b89a2757a8bcb04e5c0bcaf14c29cdbdf06d7b1f427bcc status=arm64_complete_bound indexed_start=True
0x03C1A5F8: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x03C1A5FC: 081c40f9  ldr x8, [x0, #0x38]
0x03C1A600: f30300aa  mov x19, x0
0x03C1A604: 880000b5  cbnz x8, #0x3c1a614
0x03C1A608: e00313aa  mov x0, x19
0x03C1A60C: 9bf0d497  bl #0x3156878
0x03C1A610: 681e40f9  ldr x8, [x19, #0x38]
0x03C1A614: 000540f9  ldr x0, [x8, #8]
0x03C1A618: 08d44439  ldrb w8, [x0, #0x135]
0x03C1A61C: 48000037  tbnz w8, #0, #0x3c1a624
0x03C1A620: 7ff0d497  bl #0x315681c
0x03C1A624: 9f99d597  bl #0x3180ca0
0x03C1A628: 681e40f9  ldr x8, [x19, #0x38]
0x03C1A62C: e1031faa  mov x1, xzr
0x03C1A630: f30300aa  mov x19, x0
0x03C1A634: 020140f9  ldr x2, [x8]
0x03C1A638: 030940f9  ldr x3, [x8, #0x10]
0x03C1A63C: 86041794  bl #0x41db854
0x03C1A640: e00313aa  mov x0, x19
0x03C1A644: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x03C1A648: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1A64C | ContextualizedECS.Query.Entities$$With<TimeDurationComponent, IdComponent, BoardTilePositionComponent>
; native signature: ContextualizedECS_Query_Entities_MatchDelegate_ValueTuple_Entity__T1__T2__T3___o* ContextualizedECS_Query_Entities__With_TimeDurationComponent__IdComponent__BoardTilePositionComponent_ (const MethodInfo_3C1A64C* method);
; bytes=84 sha256=6321d6cc659d376033e688a57148e5bec10620379f8e46adf0b468cb512a2b14 status=arm64_complete_bound indexed_start=True
0x03C1A64C: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x03C1A650: 081c40f9  ldr x8, [x0, #0x38]
0x03C1A654: f30300aa  mov x19, x0
0x03C1A658: 880000b5  cbnz x8, #0x3c1a668
0x03C1A65C: e00313aa  mov x0, x19
0x03C1A660: 86f0d497  bl #0x3156878
0x03C1A664: 681e40f9  ldr x8, [x19, #0x38]
0x03C1A668: 000540f9  ldr x0, [x8, #8]
0x03C1A66C: 08d44439  ldrb w8, [x0, #0x135]
0x03C1A670: 48000037  tbnz w8, #0, #0x3c1a678
0x03C1A674: 6af0d497  bl #0x315681c
0x03C1A678: 8a99d597  bl #0x3180ca0
0x03C1A67C: 681e40f9  ldr x8, [x19, #0x38]
0x03C1A680: e1031faa  mov x1, xzr
0x03C1A684: f30300aa  mov x19, x0
0x03C1A688: 020140f9  ldr x2, [x8]
0x03C1A68C: 030940f9  ldr x3, [x8, #0x10]
0x03C1A690: d3041794  bl #0x41db9dc
0x03C1A694: e00313aa  mov x0, x19
0x03C1A698: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x03C1A69C: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1A6A0 | ContextualizedECS.Query.Entities$$With<TimeLockComponent, BoardTilePositionComponent, IdComponent>
; native signature: ContextualizedECS_Query_Entities_MatchDelegate_ValueTuple_Entity__T1__T2__T3___o* ContextualizedECS_Query_Entities__With_TimeLockComponent__BoardTilePositionComponent__IdComponent_ (const MethodInfo_3C1A6A0* method);
; bytes=84 sha256=b25e21a3efd5e49b49bc2629edc776fc05ac9ba2cb32ae28da3d59e5160e1e03 status=arm64_complete_bound indexed_start=True
0x03C1A6A0: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x03C1A6A4: 081c40f9  ldr x8, [x0, #0x38]
0x03C1A6A8: f30300aa  mov x19, x0
0x03C1A6AC: 880000b5  cbnz x8, #0x3c1a6bc
0x03C1A6B0: e00313aa  mov x0, x19
0x03C1A6B4: 71f0d497  bl #0x3156878
0x03C1A6B8: 681e40f9  ldr x8, [x19, #0x38]
0x03C1A6BC: 000540f9  ldr x0, [x8, #8]
0x03C1A6C0: 08d44439  ldrb w8, [x0, #0x135]
0x03C1A6C4: 48000037  tbnz w8, #0, #0x3c1a6cc
0x03C1A6C8: 55f0d497  bl #0x315681c
0x03C1A6CC: 7599d597  bl #0x3180ca0
0x03C1A6D0: 681e40f9  ldr x8, [x19, #0x38]
0x03C1A6D4: e1031faa  mov x1, xzr
0x03C1A6D8: f30300aa  mov x19, x0
0x03C1A6DC: 020140f9  ldr x2, [x8]
0x03C1A6E0: 030940f9  ldr x3, [x8, #0x10]
0x03C1A6E4: 20051794  bl #0x41dbb64
0x03C1A6E8: e00313aa  mov x0, x19
0x03C1A6EC: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x03C1A6F0: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1A6F4 | ContextualizedECS.Query.Entities$$With<__Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType>
; native signature: ContextualizedECS_Query_Entities_MatchDelegate_ValueTuple_Entity__T1__T2__T3___o* ContextualizedECS_Query_Entities__With___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType_ (const MethodInfo_3C1A6F4* method);
; bytes=88 sha256=1f0be9eb1af6ef4943cf9cb07ef3af44dccbd760c5f3ed36725ad0225c3642a0 status=arm64_complete_bound indexed_start=True
0x03C1A6F4: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x03C1A6F8: 081c40f9  ldr x8, [x0, #0x38]
0x03C1A6FC: f30300aa  mov x19, x0
0x03C1A700: 880000b5  cbnz x8, #0x3c1a710
0x03C1A704: e00313aa  mov x0, x19
0x03C1A708: 5cf0d497  bl #0x3156878
0x03C1A70C: 681e40f9  ldr x8, [x19, #0x38]
0x03C1A710: 000540f9  ldr x0, [x8, #8]
0x03C1A714: 08d44439  ldrb w8, [x0, #0x135]
0x03C1A718: 48000037  tbnz w8, #0, #0x3c1a720
0x03C1A71C: 40f0d497  bl #0x315681c
0x03C1A720: 6099d597  bl #0x3180ca0
0x03C1A724: 681e40f9  ldr x8, [x19, #0x38]
0x03C1A728: e1031faa  mov x1, xzr
0x03C1A72C: f30300aa  mov x19, x0
0x03C1A730: 030940f9  ldr x3, [x8, #0x10]
0x03C1A734: 020140f9  ldr x2, [x8]
0x03C1A738: 690040f9  ldr x9, [x3]
0x03C1A73C: 20013fd6  blr x9
0x03C1A740: e00313aa  mov x0, x19
0x03C1A744: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x03C1A748: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C16000 | ContextualizedECS.Query.Entities$$MatchMethod<BoardTilePositionComponent, IdComponent, InteractionComponent>
; native signature: bool ContextualizedECS_Query_Entities__MatchMethod_BoardTilePositionComponent__IdComponent__InteractionComponent_ (ContextualizedECS_Entity_o* entity, System_ValueTuple_Entity__T1__T2__T3__o* result, const MethodInfo_3C16000* method);
; bytes=340 sha256=b9a664d8082abeedd298b129e67bd9807901af9552afac2c79572e735d792be8 status=arm64_complete_bound indexed_start=True
0x03C16000: ff0307d1  sub sp, sp, #0x1c0
0x03C16004: fdcb00f9  str x29, [sp, #0x190]
0x03C16008: fe571aa9  stp x30, x21, [sp, #0x1a0]
0x03C1600C: f44f1ba9  stp x20, x19, [sp, #0x1b0]
0x03C16010: 481c40f9  ldr x8, [x2, #0x38]
0x03C16014: f50302aa  mov x21, x2
0x03C16018: f30301aa  mov x19, x1
0x03C1601C: f40300aa  mov x20, x0
0x03C16020: 680000b5  cbnz x8, #0x3c1602c
0x03C16024: e00315aa  mov x0, x21
0x03C16028: 1402d597  bl #0x3156878
0x03C1602C: 00e4006f  movi v0.2d, #0000000000000000
0x03C16030: ff9b01b9  str wzr, [sp, #0x198]
0x03C16034: ff7b00f9  str xzr, [sp, #0xf0]
0x03C16038: e08308ad  stp q0, q0, [sp, #0x110]
0x03C1603C: e043803d  str q0, [sp, #0x100]
0x03C16040: e08306ad  stp q0, q0, [sp, #0xd0]
0x03C16044: 7f3200f9  str xzr, [x19, #0x60]
0x03C16048: 600202ad  stp q0, q0, [x19, #0x40]
0x03C1604C: 600201ad  stp q0, q0, [x19, #0x20]
0x03C16050: 600200ad  stp q0, q0, [x19]
0x03C16054: f40700b4  cbz x20, #0x3c16150
0x03C16058: a81e40f9  ldr x8, [x21, #0x38]
0x03C1605C: e1630691  add x1, sp, #0x198
0x03C16060: e00314aa  mov x0, x20
0x03C16064: 020940f9  ldr x2, [x8, #0x10]
0x03C16068: 9f200094  bl #0x3c1e2e4
0x03C1606C: 60060036  tbz w0, #0, #0x3c16138
0x03C16070: a81e40f9  ldr x8, [x21, #0x38]
0x03C16074: e1030491  add x1, sp, #0x100
0x03C16078: e00314aa  mov x0, x20
0x03C1607C: 021140f9  ldr x2, [x8, #0x20]
0x03C16080: 53230094  bl #0x3c1edcc
0x03C16084: a0050036  tbz w0, #0, #0x3c16138
0x03C16088: a81e40f9  ldr x8, [x21, #0x38]
0x03C1608C: e1430391  add x1, sp, #0xd0
0x03C16090: e00314aa  mov x0, x20
0x03C16094: 021940f9  ldr x2, [x8, #0x30]
0x03C16098: e0230094  bl #0x3c1f018
0x03C1609C: e0040036  tbz w0, #0, #0x3c16138
0x03C160A0: e00748ad  ldp q0, q1, [sp, #0x100]
0x03C160A4: 02e4006f  movi v2.2d, #0000000000000000
0x03C160A8: e20b05ad  stp q2, q2, [sp, #0xa0]
0x03C160AC: e20b04ad  stp q2, q2, [sp, #0x80]
0x03C160B0: e20b03ad  stp q2, q2, [sp, #0x60]
0x03C160B4: e24bc03d  ldr q2, [sp, #0x120]
0x03C160B8: e08701ad  stp q0, q1, [sp, #0x30]
0x03C160BC: e08746ad  ldp q0, q1, [sp, #0xd0]
0x03C160C0: e87b40f9  ldr x8, [sp, #0xf0]
0x03C160C4: ff6300f9  str xzr, [sp, #0xc0]
0x03C160C8: e217803d  str q2, [sp, #0x50]
0x03C160CC: e00700ad  stp q0, q1, [sp]
0x03C160D0: e81300f9  str x8, [sp, #0x20]
0x03C160D4: a81e40f9  ldr x8, [x21, #0x38]
0x03C160D8: e08741ad  ldp q0, q1, [sp, #0x30]
0x03C160DC: e217c03d  ldr q2, [sp, #0x50]
0x03C160E0: e29b41b9  ldr w2, [sp, #0x198]
0x03C160E4: 052140f9  ldr x5, [x8, #0x40]
0x03C160E8: e0070bad  stp q0, q1, [sp, #0x160]
0x03C160EC: e00740ad  ldp q0, q1, [sp]
0x03C160F0: e81340f9  ldr x8, [sp, #0x20]
0x03C160F4: e0830191  add x0, sp, #0x60
0x03C160F8: e3830591  add x3, sp, #0x160
0x03C160FC: e4c30491  add x4, sp, #0x130
0x03C16100: e10314aa  mov x1, x20
0x03C16104: e263803d  str q2, [sp, #0x180]
0x03C16108: e08709ad  stp q0, q1, [sp, #0x130]
0x03C1610C: e8ab00f9  str x8, [sp, #0x150]
0x03C16110: 62882f94  bl #0x47f8298
0x03C16114: e1830191  add x1, sp, #0x60
0x03C16118: 020d8052  movz w2, #0x68
0x03C1611C: e00313aa  mov x0, x19
0x03C16120: 14e2d694  bl #0x71ce970
0x03C16124: e00313aa  mov x0, x19
0x03C16128: e1031faa  mov x1, xzr
0x03C1612C: 26aad597  bl #0x31809c4
0x03C16130: 20008052  movz w0, #0x1
0x03C16134: 02000014  b #0x3c1613c
0x03C16138: e0031f2a  mov w0, wzr
0x03C1613C: f44f5ba9  ldp x20, x19, [sp, #0x1b0]
0x03C16140: fe575aa9  ldp x30, x21, [sp, #0x1a0]
0x03C16144: fdcb40f9  ldr x29, [sp, #0x190]
0x03C16148: ff030791  add sp, sp, #0x1c0
0x03C1614C: c0035fd6  ret
0x03C16150: d7aad597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C16154 | ContextualizedECS.Query.Entities$$MatchMethod<BoardTilePositionComponent, ItemMovedComponent, IdComponent>
; native signature: bool ContextualizedECS_Query_Entities__MatchMethod_BoardTilePositionComponent__ItemMovedComponent__IdComponent_ (ContextualizedECS_Entity_o* entity, System_ValueTuple_Entity__T1__T2__T3__o* result, const MethodInfo_3C16154* method);
; bytes=296 sha256=ba2bf7c6cf9ba83f86ec2077abcfd9b6b1d2cb08292c1d2d4ad0a92f425346b9 status=arm64_complete_bound indexed_start=True
0x03C16154: ff8304d1  sub sp, sp, #0x120
0x03C16158: fd7b00f9  str x29, [sp, #0xf0]
0x03C1615C: fe5710a9  stp x30, x21, [sp, #0x100]
0x03C16160: f44f11a9  stp x20, x19, [sp, #0x110]
0x03C16164: 481c40f9  ldr x8, [x2, #0x38]
0x03C16168: f50302aa  mov x21, x2
0x03C1616C: f30301aa  mov x19, x1
0x03C16170: f40300aa  mov x20, x0
0x03C16174: 680000b5  cbnz x8, #0x3c16180
0x03C16178: e00315aa  mov x0, x21
0x03C1617C: bf01d597  bl #0x3156878
0x03C16180: 00e4006f  movi v0.2d, #0000000000000000
0x03C16184: fffb00b9  str wzr, [sp, #0xf8]
0x03C16188: ff5f00f9  str xzr, [sp, #0xb8]
0x03C1618C: e08304ad  stp q0, q0, [sp, #0x90]
0x03C16190: e023803d  str q0, [sp, #0x80]
0x03C16194: 7f2200f9  str xzr, [x19, #0x40]
0x03C16198: 600201ad  stp q0, q0, [x19, #0x20]
0x03C1619C: 600200ad  stp q0, q0, [x19]
0x03C161A0: d40600b4  cbz x20, #0x3c16278
0x03C161A4: a81e40f9  ldr x8, [x21, #0x38]
0x03C161A8: e1e30391  add x1, sp, #0xf8
0x03C161AC: e00314aa  mov x0, x20
0x03C161B0: 020940f9  ldr x2, [x8, #0x10]
0x03C161B4: 4c200094  bl #0x3c1e2e4
0x03C161B8: 40050036  tbz w0, #0, #0x3c16260
0x03C161BC: a81e40f9  ldr x8, [x21, #0x38]
0x03C161C0: e1e30291  add x1, sp, #0xb8
0x03C161C4: e00314aa  mov x0, x20
0x03C161C8: 021140f9  ldr x2, [x8, #0x20]
0x03C161CC: 66240094  bl #0x3c1f364
0x03C161D0: 80040036  tbz w0, #0, #0x3c16260
0x03C161D4: a81e40f9  ldr x8, [x21, #0x38]
0x03C161D8: e1030291  add x1, sp, #0x80
0x03C161DC: e00314aa  mov x0, x20
0x03C161E0: 021940f9  ldr x2, [x8, #0x30]
0x03C161E4: fa220094  bl #0x3c1edcc
0x03C161E8: c0030036  tbz w0, #0, #0x3c16260
0x03C161EC: e00744ad  ldp q0, q1, [sp, #0x80]
0x03C161F0: e22bc03d  ldr q2, [sp, #0xa0]
0x03C161F4: 03e4006f  movi v3.2d, #0000000000000000
0x03C161F8: ff3b00f9  str xzr, [sp, #0x70]
0x03C161FC: e38f02ad  stp q3, q3, [sp, #0x50]
0x03C16200: e00700ad  stp q0, q1, [sp]
0x03C16204: e20f01ad  stp q2, q3, [sp, #0x20]
0x03C16208: e313803d  str q3, [sp, #0x40]
0x03C1620C: a81e40f9  ldr x8, [x21, #0x38]
0x03C16210: e2fb40b9  ldr w2, [sp, #0xf8]
0x03C16214: e35f40f9  ldr x3, [sp, #0xb8]
0x03C16218: e00740ad  ldp q0, q1, [sp]
0x03C1621C: e20bc03d  ldr q2, [sp, #0x20]
0x03C16220: 052140f9  ldr x5, [x8, #0x40]
0x03C16224: e0c30091  add x0, sp, #0x30
0x03C16228: e4030391  add x4, sp, #0xc0
0x03C1622C: e10314aa  mov x1, x20
0x03C16230: e00706ad  stp q0, q1, [sp, #0xc0]
0x03C16234: e23b803d  str q2, [sp, #0xe0]
0x03C16238: 878e2f94  bl #0x47f9c54
0x03C1623C: e1c30091  add x1, sp, #0x30
0x03C16240: 02098052  movz w2, #0x48
0x03C16244: e00313aa  mov x0, x19
0x03C16248: cae1d694  bl #0x71ce970
0x03C1624C: e00313aa  mov x0, x19
0x03C16250: e1031faa  mov x1, xzr
0x03C16254: dca9d597  bl #0x31809c4
0x03C16258: 20008052  movz w0, #0x1
0x03C1625C: 02000014  b #0x3c16264
0x03C16260: e0031f2a  mov w0, wzr
0x03C16264: f44f51a9  ldp x20, x19, [sp, #0x110]
0x03C16268: fe5750a9  ldp x30, x21, [sp, #0x100]
0x03C1626C: fd7b40f9  ldr x29, [sp, #0xf0]
0x03C16270: ff830491  add sp, sp, #0x120
0x03C16274: c0035fd6  ret
0x03C16278: 8daad597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1627C | ContextualizedECS.Query.Entities$$MatchMethod<BoardTilePositionComponent, MergeComponent, IdComponent>
; native signature: bool ContextualizedECS_Query_Entities__MatchMethod_BoardTilePositionComponent__MergeComponent__IdComponent_ (ContextualizedECS_Entity_o* entity, System_ValueTuple_Entity__T1__T2__T3__o* result, const MethodInfo_3C1627C* method);
; bytes=292 sha256=b97961503ad72ff2fcddb4f4f27da1338014780b5729542149fe4a883ebf0544 status=arm64_complete_bound indexed_start=True
0x03C1627C: ff8304d1  sub sp, sp, #0x120
0x03C16280: fd7b00f9  str x29, [sp, #0xf0]
0x03C16284: fe5710a9  stp x30, x21, [sp, #0x100]
0x03C16288: f44f11a9  stp x20, x19, [sp, #0x110]
0x03C1628C: 481c40f9  ldr x8, [x2, #0x38]
0x03C16290: f50302aa  mov x21, x2
0x03C16294: f30301aa  mov x19, x1
0x03C16298: f40300aa  mov x20, x0
0x03C1629C: 680000b5  cbnz x8, #0x3c162a8
0x03C162A0: e00315aa  mov x0, x21
0x03C162A4: 7501d597  bl #0x3156878
0x03C162A8: 00e4006f  movi v0.2d, #0000000000000000
0x03C162AC: fffb00b9  str wzr, [sp, #0xf8]
0x03C162B0: ff7f0ba9  stp xzr, xzr, [sp, #0xb0]
0x03C162B4: e08304ad  stp q0, q0, [sp, #0x90]
0x03C162B8: e023803d  str q0, [sp, #0x80]
0x03C162BC: 608201ad  stp q0, q0, [x19, #0x30]
0x03C162C0: 608200ad  stp q0, q0, [x19, #0x10]
0x03C162C4: 6002803d  str q0, [x19]
0x03C162C8: b40600b4  cbz x20, #0x3c1639c
0x03C162CC: a81e40f9  ldr x8, [x21, #0x38]
0x03C162D0: e1e30391  add x1, sp, #0xf8
0x03C162D4: e00314aa  mov x0, x20
0x03C162D8: 020940f9  ldr x2, [x8, #0x10]
0x03C162DC: 02200094  bl #0x3c1e2e4
0x03C162E0: 20050036  tbz w0, #0, #0x3c16384
0x03C162E4: a81e40f9  ldr x8, [x21, #0x38]
0x03C162E8: e1c30291  add x1, sp, #0xb0
0x03C162EC: e00314aa  mov x0, x20
0x03C162F0: 021140f9  ldr x2, [x8, #0x20]
0x03C162F4: a2240094  bl #0x3c1f57c
0x03C162F8: 60040036  tbz w0, #0, #0x3c16384
0x03C162FC: a81e40f9  ldr x8, [x21, #0x38]
0x03C16300: e1030291  add x1, sp, #0x80
0x03C16304: e00314aa  mov x0, x20
0x03C16308: 021940f9  ldr x2, [x8, #0x30]
0x03C1630C: b0220094  bl #0x3c1edcc
0x03C16310: a0030036  tbz w0, #0, #0x3c16384
0x03C16314: e00744ad  ldp q0, q1, [sp, #0x80]
0x03C16318: e22bc03d  ldr q2, [sp, #0xa0]
0x03C1631C: 03e4006f  movi v3.2d, #0000000000000000
0x03C16320: e30f03ad  stp q3, q3, [sp, #0x60]
0x03C16324: e30f02ad  stp q3, q3, [sp, #0x40]
0x03C16328: e00700ad  stp q0, q1, [sp]
0x03C1632C: e20f01ad  stp q2, q3, [sp, #0x20]
0x03C16330: a81e40f9  ldr x8, [x21, #0x38]
0x03C16334: e2fb40b9  ldr w2, [sp, #0xf8]
0x03C16338: e3134ba9  ldp x3, x4, [sp, #0xb0]
0x03C1633C: e00740ad  ldp q0, q1, [sp]
0x03C16340: e20bc03d  ldr q2, [sp, #0x20]
0x03C16344: 062140f9  ldr x6, [x8, #0x40]
0x03C16348: e0c30091  add x0, sp, #0x30
0x03C1634C: e5030391  add x5, sp, #0xc0
0x03C16350: e10314aa  mov x1, x20
0x03C16354: e00706ad  stp q0, q1, [sp, #0xc0]
0x03C16358: e23b803d  str q2, [sp, #0xe0]
0x03C1635C: 70942f94  bl #0x47fb51c
0x03C16360: e1c30091  add x1, sp, #0x30
0x03C16364: 020a8052  movz w2, #0x50
0x03C16368: e00313aa  mov x0, x19
0x03C1636C: 81e1d694  bl #0x71ce970
0x03C16370: e00313aa  mov x0, x19
0x03C16374: e1031faa  mov x1, xzr
0x03C16378: 93a9d597  bl #0x31809c4
0x03C1637C: 20008052  movz w0, #0x1
0x03C16380: 02000014  b #0x3c16388
0x03C16384: e0031f2a  mov w0, wzr
0x03C16388: f44f51a9  ldp x20, x19, [sp, #0x110]
0x03C1638C: fe5750a9  ldp x30, x21, [sp, #0x100]
0x03C16390: fd7b40f9  ldr x29, [sp, #0xf0]
0x03C16394: ff830491  add sp, sp, #0x120
0x03C16398: c0035fd6  ret
0x03C1639C: 44aad597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C163A0 | ContextualizedECS.Query.Entities$$MatchMethod<CollectableComponent, IdComponent, BornComponent>
; native signature: bool ContextualizedECS_Query_Entities__MatchMethod_CollectableComponent__IdComponent__BornComponent_ (ContextualizedECS_Entity_o* entity, System_ValueTuple_Entity__T1__T2__T3__o* result, const MethodInfo_3C163A0* method);
; bytes=332 sha256=9ccd9cc4bedd421c71da7dd31131c713bf1a7d1366ebb9d1e835650e5f5030dd status=arm64_complete_bound indexed_start=True
0x03C163A0: ff0306d1  sub sp, sp, #0x180
0x03C163A4: fdab00f9  str x29, [sp, #0x150]
0x03C163A8: fe5716a9  stp x30, x21, [sp, #0x160]
0x03C163AC: f44f17a9  stp x20, x19, [sp, #0x170]
0x03C163B0: 481c40f9  ldr x8, [x2, #0x38]
0x03C163B4: f50302aa  mov x21, x2
0x03C163B8: f30301aa  mov x19, x1
0x03C163BC: f40300aa  mov x20, x0
0x03C163C0: 680000b5  cbnz x8, #0x3c163cc
0x03C163C4: e00315aa  mov x0, x21
0x03C163C8: 2c01d597  bl #0x3156878
0x03C163CC: 00e4006f  movi v0.2d, #0000000000000000
0x03C163D0: ffff0ea9  stp xzr, xzr, [sp, #0xe8]
0x03C163D4: ff7f00f9  str xzr, [sp, #0xf8]
0x03C163D8: ffaf00f9  str xzr, [sp, #0x158]
0x03C163DC: e00306ad  stp q0, q0, [sp, #0xc0]
0x03C163E0: e02f803d  str q0, [sp, #0xb0]
0x03C163E4: 7f2a00f9  str xzr, [x19, #0x50]
0x03C163E8: 608201ad  stp q0, q0, [x19, #0x30]
0x03C163EC: 608200ad  stp q0, q0, [x19, #0x10]
0x03C163F0: 6002803d  str q0, [x19]
0x03C163F4: b40700b4  cbz x20, #0x3c164e8
0x03C163F8: a81e40f9  ldr x8, [x21, #0x38]
0x03C163FC: e1a30391  add x1, sp, #0xe8
0x03C16400: e00314aa  mov x0, x20
0x03C16404: 020940f9  ldr x2, [x8, #0x10]
0x03C16408: c9200094  bl #0x3c1e72c
0x03C1640C: 20060036  tbz w0, #0, #0x3c164d0
0x03C16410: a81e40f9  ldr x8, [x21, #0x38]
0x03C16414: e1c30291  add x1, sp, #0xb0
0x03C16418: e00314aa  mov x0, x20
0x03C1641C: 021140f9  ldr x2, [x8, #0x20]
0x03C16420: 6b220094  bl #0x3c1edcc
0x03C16424: 60050036  tbz w0, #0, #0x3c164d0
0x03C16428: a81e40f9  ldr x8, [x21, #0x38]
0x03C1642C: e1630591  add x1, sp, #0x158
0x03C16430: e00314aa  mov x0, x20
0x03C16434: 021940f9  ldr x2, [x8, #0x30]
0x03C16438: ee1f0094  bl #0x3c1e3f0
0x03C1643C: a0040036  tbz w0, #0, #0x3c164d0
0x03C16440: 01e4006f  movi v1.2d, #0000000000000000
0x03C16444: e383ce3c  ldur q3, [sp, #0xe8]
0x03C16448: e87f40f9  ldr x8, [sp, #0xf8]
0x03C1644C: e10704ad  stp q1, q1, [sp, #0x80]
0x03C16450: e10703ad  stp q1, q1, [sp, #0x60]
0x03C16454: e117803d  str q1, [sp, #0x50]
0x03C16458: e18b45ad  ldp q1, q2, [sp, #0xb0]
0x03C1645C: e037c03d  ldr q0, [sp, #0xd0]
0x03C16460: ff5300f9  str xzr, [sp, #0xa0]
0x03C16464: e82300f9  str x8, [sp, #0x40]
0x03C16468: e10b00ad  stp q1, q2, [sp]
0x03C1646C: e00f01ad  stp q0, q3, [sp, #0x20]
0x03C16470: a81e40f9  ldr x8, [x21, #0x38]
0x03C16474: e4af40f9  ldr x4, [sp, #0x158]
0x03C16478: e30fc03d  ldr q3, [sp, #0x30]
0x03C1647C: e92340f9  ldr x9, [sp, #0x40]
0x03C16480: e10b40ad  ldp q1, q2, [sp]
0x03C16484: 052140f9  ldr x5, [x8, #0x40]
0x03C16488: e00bc03d  ldr q0, [sp, #0x20]
0x03C1648C: e0430191  add x0, sp, #0x50
0x03C16490: e2c30491  add x2, sp, #0x130
0x03C16494: e3030491  add x3, sp, #0x100
0x03C16498: e10314aa  mov x1, x20
0x03C1649C: e10b08ad  stp q1, q2, [sp, #0x100]
0x03C164A0: e9a300f9  str x9, [sp, #0x140]
0x03C164A4: e00f09ad  stp q0, q3, [sp, #0x120]
0x03C164A8: 9f9f2f94  bl #0x47fe324
0x03C164AC: e1430191  add x1, sp, #0x50
0x03C164B0: 020b8052  movz w2, #0x58
0x03C164B4: e00313aa  mov x0, x19
0x03C164B8: 2ee1d694  bl #0x71ce970
0x03C164BC: e00313aa  mov x0, x19
0x03C164C0: e1031faa  mov x1, xzr
0x03C164C4: 40a9d597  bl #0x31809c4
0x03C164C8: 20008052  movz w0, #0x1
0x03C164CC: 02000014  b #0x3c164d4
0x03C164D0: e0031f2a  mov w0, wzr
0x03C164D4: f44f57a9  ldp x20, x19, [sp, #0x170]
0x03C164D8: fe5756a9  ldp x30, x21, [sp, #0x160]
0x03C164DC: fdab40f9  ldr x29, [sp, #0x150]
0x03C164E0: ff030691  add sp, sp, #0x180
0x03C164E4: c0035fd6  ret
0x03C164E8: f1a9d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C164EC | ContextualizedECS.Query.Entities$$MatchMethod<DeadComponent, ItemConsumedComponent, IdComponent>
; native signature: bool ContextualizedECS_Query_Entities__MatchMethod_DeadComponent__ItemConsumedComponent__IdComponent_ (ContextualizedECS_Entity_o* entity, System_ValueTuple_Entity__T1__T2__T3__o* result, const MethodInfo_3C164EC* method);
; bytes=292 sha256=ffcb7bd4994f77d4c3d7eba32793d700a988015b33ef04b12d3955a677e04dc3 status=arm64_complete_bound indexed_start=True
0x03C164EC: ff8304d1  sub sp, sp, #0x120
0x03C164F0: fd7b00f9  str x29, [sp, #0xf0]
0x03C164F4: fe5710a9  stp x30, x21, [sp, #0x100]
0x03C164F8: f44f11a9  stp x20, x19, [sp, #0x110]
0x03C164FC: 481c40f9  ldr x8, [x2, #0x38]
0x03C16500: f50302aa  mov x21, x2
0x03C16504: f30301aa  mov x19, x1
0x03C16508: f40300aa  mov x20, x0
0x03C1650C: 680000b5  cbnz x8, #0x3c16518
0x03C16510: e00315aa  mov x0, x21
0x03C16514: d900d597  bl #0x3156878
0x03C16518: 00e4006f  movi v0.2d, #0000000000000000
0x03C1651C: ffe30339  strb wzr, [sp, #0xf8]
0x03C16520: ff7f0ba9  stp xzr, xzr, [sp, #0xb0]
0x03C16524: e08304ad  stp q0, q0, [sp, #0x90]
0x03C16528: e023803d  str q0, [sp, #0x80]
0x03C1652C: 608201ad  stp q0, q0, [x19, #0x30]
0x03C16530: 608200ad  stp q0, q0, [x19, #0x10]
0x03C16534: 6002803d  str q0, [x19]
0x03C16538: b40600b4  cbz x20, #0x3c1660c
0x03C1653C: a81e40f9  ldr x8, [x21, #0x38]
0x03C16540: e1e30391  add x1, sp, #0xf8
0x03C16544: e00314aa  mov x0, x20
0x03C16548: 020940f9  ldr x2, [x8, #0x10]
0x03C1654C: 04210094  bl #0x3c1e95c
0x03C16550: 20050036  tbz w0, #0, #0x3c165f4
0x03C16554: a81e40f9  ldr x8, [x21, #0x38]
0x03C16558: e1c30291  add x1, sp, #0xb0
0x03C1655C: e00314aa  mov x0, x20
0x03C16560: 021140f9  ldr x2, [x8, #0x20]
0x03C16564: f7220094  bl #0x3c1f140
0x03C16568: 60040036  tbz w0, #0, #0x3c165f4
0x03C1656C: a81e40f9  ldr x8, [x21, #0x38]
0x03C16570: e1030291  add x1, sp, #0x80
0x03C16574: e00314aa  mov x0, x20
0x03C16578: 021940f9  ldr x2, [x8, #0x30]
0x03C1657C: 14220094  bl #0x3c1edcc
0x03C16580: a0030036  tbz w0, #0, #0x3c165f4
0x03C16584: e00744ad  ldp q0, q1, [sp, #0x80]
0x03C16588: e22bc03d  ldr q2, [sp, #0xa0]
0x03C1658C: 03e4006f  movi v3.2d, #0000000000000000
0x03C16590: e30f03ad  stp q3, q3, [sp, #0x60]
0x03C16594: e30f02ad  stp q3, q3, [sp, #0x40]
0x03C16598: e00700ad  stp q0, q1, [sp]
0x03C1659C: e20f01ad  stp q2, q3, [sp, #0x20]
0x03C165A0: a81e40f9  ldr x8, [x21, #0x38]
0x03C165A4: e2e34339  ldrb w2, [sp, #0xf8]
0x03C165A8: e3134ba9  ldp x3, x4, [sp, #0xb0]
0x03C165AC: e00740ad  ldp q0, q1, [sp]
0x03C165B0: e20bc03d  ldr q2, [sp, #0x20]
0x03C165B4: 062140f9  ldr x6, [x8, #0x40]
0x03C165B8: e0c30091  add x0, sp, #0x30
0x03C165BC: e5030391  add x5, sp, #0xc0
0x03C165C0: e10314aa  mov x1, x20
0x03C165C4: e00706ad  stp q0, q1, [sp, #0xc0]
0x03C165C8: e23b803d  str q2, [sp, #0xe0]
0x03C165CC: b4a52f94  bl #0x47ffc9c
0x03C165D0: e1c30091  add x1, sp, #0x30
0x03C165D4: 020a8052  movz w2, #0x50
0x03C165D8: e00313aa  mov x0, x19
0x03C165DC: e5e0d694  bl #0x71ce970
0x03C165E0: e00313aa  mov x0, x19
0x03C165E4: e1031faa  mov x1, xzr
0x03C165E8: f7a8d597  bl #0x31809c4
0x03C165EC: 20008052  movz w0, #0x1
0x03C165F0: 02000014  b #0x3c165f8
0x03C165F4: e0031f2a  mov w0, wzr
0x03C165F8: f44f51a9  ldp x20, x19, [sp, #0x110]
0x03C165FC: fe5750a9  ldp x30, x21, [sp, #0x100]
0x03C16600: fd7b40f9  ldr x29, [sp, #0xf0]
0x03C16604: ff830491  add sp, sp, #0x120
0x03C16608: c0035fd6  ret
0x03C1660C: a8a9d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C16610 | ContextualizedECS.Query.Entities$$MatchMethod<ExpendableComponent, BoardTilePositionComponent, DeadComponent>
; native signature: bool ContextualizedECS_Query_Entities__MatchMethod_ExpendableComponent__BoardTilePositionComponent__DeadComponent_ (ContextualizedECS_Entity_o* entity, System_ValueTuple_Entity__T1__T2__T3__o* result, const MethodInfo_3C16610* method);
; bytes=280 sha256=22d03c35f776c47938f660e675803539c3ba0a3ce9d7a6a291d3c24436e01f43 status=arm64_complete_bound indexed_start=True
0x03C16610: ff4304d1  sub sp, sp, #0x110
0x03C16614: fd7300f9  str x29, [sp, #0xe0]
0x03C16618: fe570fa9  stp x30, x21, [sp, #0xf0]
0x03C1661C: f44f10a9  stp x20, x19, [sp, #0x100]
0x03C16620: 481c40f9  ldr x8, [x2, #0x38]
0x03C16624: f50302aa  mov x21, x2
0x03C16628: f30301aa  mov x19, x1
0x03C1662C: f40300aa  mov x20, x0
0x03C16630: 680000b5  cbnz x8, #0x3c1663c
0x03C16634: e00315aa  mov x0, x21
0x03C16638: 9000d597  bl #0x3156878
0x03C1663C: 00e4006f  movi v0.2d, #0000000000000000
0x03C16640: ffeb00b9  str wzr, [sp, #0xe8]
0x03C16644: ffe30139  strb wzr, [sp, #0x78]
0x03C16648: e08304ad  stp q0, q0, [sp, #0x90]
0x03C1664C: e023803d  str q0, [sp, #0x80]
0x03C16650: 600201ad  stp q0, q0, [x19, #0x20]
0x03C16654: 600200ad  stp q0, q0, [x19]
0x03C16658: 740600b4  cbz x20, #0x3c16724
0x03C1665C: a81e40f9  ldr x8, [x21, #0x38]
0x03C16660: e1030291  add x1, sp, #0x80
0x03C16664: e00314aa  mov x0, x20
0x03C16668: 020940f9  ldr x2, [x8, #0x10]
0x03C1666C: 48210094  bl #0x3c1eb8c
0x03C16670: e0040036  tbz w0, #0, #0x3c1670c
0x03C16674: a81e40f9  ldr x8, [x21, #0x38]
0x03C16678: e1a30391  add x1, sp, #0xe8
0x03C1667C: e00314aa  mov x0, x20
0x03C16680: 021140f9  ldr x2, [x8, #0x20]
0x03C16684: 181f0094  bl #0x3c1e2e4
0x03C16688: 20040036  tbz w0, #0, #0x3c1670c
0x03C1668C: a81e40f9  ldr x8, [x21, #0x38]
0x03C16690: e1e30191  add x1, sp, #0x78
0x03C16694: e00314aa  mov x0, x20
0x03C16698: 021940f9  ldr x2, [x8, #0x30]
0x03C1669C: b0200094  bl #0x3c1e95c
0x03C166A0: 60030036  tbz w0, #0, #0x3c1670c
0x03C166A4: e00744ad  ldp q0, q1, [sp, #0x80]
0x03C166A8: e22bc03d  ldr q2, [sp, #0xa0]
0x03C166AC: 03e4006f  movi v3.2d, #0000000000000000
0x03C166B0: e38f02ad  stp q3, q3, [sp, #0x50]
0x03C166B4: e00700ad  stp q0, q1, [sp]
0x03C166B8: e20f01ad  stp q2, q3, [sp, #0x20]
0x03C166BC: e313803d  str q3, [sp, #0x40]
0x03C166C0: a81e40f9  ldr x8, [x21, #0x38]
0x03C166C4: e3eb40b9  ldr w3, [sp, #0xe8]
0x03C166C8: e4e34139  ldrb w4, [sp, #0x78]
0x03C166CC: e0c30091  add x0, sp, #0x30
0x03C166D0: 052140f9  ldr x5, [x8, #0x40]
0x03C166D4: e2c30291  add x2, sp, #0xb0
0x03C166D8: e10314aa  mov x1, x20
0x03C166DC: e08705ad  stp q0, q1, [sp, #0xb0]
0x03C166E0: e237803d  str q2, [sp, #0xd0]
0x03C166E4: 98ab2f94  bl #0x4801544
0x03C166E8: e18342ad  ldp q1, q0, [sp, #0x50]
0x03C166EC: e38b41ad  ldp q3, q2, [sp, #0x30]
0x03C166F0: e00313aa  mov x0, x19
0x03C166F4: e1031faa  mov x1, xzr
0x03C166F8: 610201ad  stp q1, q0, [x19, #0x20]
0x03C166FC: 630a00ad  stp q3, q2, [x19]
0x03C16700: b1a8d597  bl #0x31809c4
0x03C16704: 20008052  movz w0, #0x1
0x03C16708: 02000014  b #0x3c16710
0x03C1670C: e0031f2a  mov w0, wzr
0x03C16710: f44f50a9  ldp x20, x19, [sp, #0x100]
0x03C16714: fe574fa9  ldp x30, x21, [sp, #0xf0]
0x03C16718: fd7340f9  ldr x29, [sp, #0xe0]
0x03C1671C: ff430491  add sp, sp, #0x110
0x03C16720: c0035fd6  ret
0x03C16724: 62a9d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C16728 | ContextualizedECS.Query.Entities$$MatchMethod<ExpendableComponent, TimeLimitedActivationComponent, TimeDurationComponent>
; native signature: bool ContextualizedECS_Query_Entities__MatchMethod_ExpendableComponent__TimeLimitedActivationComponent__TimeDurationComponent_ (ContextualizedECS_Entity_o* entity, System_ValueTuple_Entity__T1__T2__T3__o* result, const MethodInfo_3C16728* method);
; bytes=324 sha256=91418e0a8994a5884cb4b4aa73bdcb279703b3db855f52339d1f9243da42f17b status=arm64_complete_bound indexed_start=True
0x03C16728: ff0307d1  sub sp, sp, #0x1c0
0x03C1672C: fdcb00f9  str x29, [sp, #0x190]
0x03C16730: fe571aa9  stp x30, x21, [sp, #0x1a0]
0x03C16734: f44f1ba9  stp x20, x19, [sp, #0x1b0]
0x03C16738: 481c40f9  ldr x8, [x2, #0x38]
0x03C1673C: f50302aa  mov x21, x2
0x03C16740: f30301aa  mov x19, x1
0x03C16744: f40300aa  mov x20, x0
0x03C16748: 680000b5  cbnz x8, #0x3c16754
0x03C1674C: e00315aa  mov x0, x21
0x03C16750: 4a00d597  bl #0x3156878
0x03C16754: 00e4006f  movi v0.2d, #0000000000000000
0x03C16758: e00308ad  stp q0, q0, [sp, #0x100]
0x03C1675C: e00307ad  stp q0, q0, [sp, #0xe0]
0x03C16760: e00306ad  stp q0, q0, [sp, #0xc0]
0x03C16764: e02f803d  str q0, [sp, #0xb0]
0x03C16768: 7f3a00f9  str xzr, [x19, #0x70]
0x03C1676C: 608202ad  stp q0, q0, [x19, #0x50]
0x03C16770: 608201ad  stp q0, q0, [x19, #0x30]
0x03C16774: 608200ad  stp q0, q0, [x19, #0x10]
0x03C16778: 6002803d  str q0, [x19]
0x03C1677C: 740700b4  cbz x20, #0x3c16868
0x03C16780: a81e40f9  ldr x8, [x21, #0x38]
0x03C16784: e1c30391  add x1, sp, #0xf0
0x03C16788: e00314aa  mov x0, x20
0x03C1678C: 020940f9  ldr x2, [x8, #0x10]
0x03C16790: ff200094  bl #0x3c1eb8c
0x03C16794: e0050036  tbz w0, #0, #0x3c16850
0x03C16798: a81e40f9  ldr x8, [x21, #0x38]
0x03C1679C: e1430391  add x1, sp, #0xd0
0x03C167A0: e00314aa  mov x0, x20
0x03C167A4: 021140f9  ldr x2, [x8, #0x20]
0x03C167A8: a3250094  bl #0x3c1fe34
0x03C167AC: 20050036  tbz w0, #0, #0x3c16850
0x03C167B0: a81e40f9  ldr x8, [x21, #0x38]
0x03C167B4: e1c30291  add x1, sp, #0xb0
0x03C167B8: e00314aa  mov x0, x20
0x03C167BC: 021940f9  ldr x2, [x8, #0x30]
0x03C167C0: 59250094  bl #0x3c1fd24
0x03C167C4: 60040036  tbz w0, #0, #0x3c16850
0x03C167C8: e08747ad  ldp q0, q1, [sp, #0xf0]
0x03C167CC: e247c03d  ldr q2, [sp, #0x110]
0x03C167D0: 03e4006f  movi v3.2d, #0000000000000000
0x03C167D4: ff5300f9  str xzr, [sp, #0xa0]
0x03C167D8: e30f04ad  stp q3, q3, [sp, #0x80]
0x03C167DC: e30f03ad  stp q3, q3, [sp, #0x60]
0x03C167E0: e30f02ad  stp q3, q3, [sp, #0x40]
0x03C167E4: e20f01ad  stp q2, q3, [sp, #0x20]
0x03C167E8: e00700ad  stp q0, q1, [sp]
0x03C167EC: a81e40f9  ldr x8, [x21, #0x38]
0x03C167F0: e00740ad  ldp q0, q1, [sp]
0x03C167F4: e39346ad  ldp q3, q4, [sp, #0xd0]
0x03C167F8: e20bc03d  ldr q2, [sp, #0x20]
0x03C167FC: 052140f9  ldr x5, [x8, #0x40]
0x03C16800: e0070bad  stp q0, q1, [sp, #0x160]
0x03C16804: e08745ad  ldp q0, q1, [sp, #0xb0]
0x03C16808: e0c30091  add x0, sp, #0x30
0x03C1680C: e2830591  add x2, sp, #0x160
0x03C16810: e3030591  add x3, sp, #0x140
0x03C16814: e4830491  add x4, sp, #0x120
0x03C16818: e10314aa  mov x1, x20
0x03C1681C: e263803d  str q2, [sp, #0x180]
0x03C16820: e3130aad  stp q3, q4, [sp, #0x140]
0x03C16824: e00709ad  stp q0, q1, [sp, #0x120]
0x03C16828: 4eb12f94  bl #0x4802d60
0x03C1682C: e1c30091  add x1, sp, #0x30
0x03C16830: 020f8052  movz w2, #0x78
0x03C16834: e00313aa  mov x0, x19
0x03C16838: 4ee0d694  bl #0x71ce970
0x03C1683C: e00313aa  mov x0, x19
0x03C16840: e1031faa  mov x1, xzr
0x03C16844: 60a8d597  bl #0x31809c4
0x03C16848: 20008052  movz w0, #0x1
0x03C1684C: 02000014  b #0x3c16854
0x03C16850: e0031f2a  mov w0, wzr
0x03C16854: f44f5ba9  ldp x20, x19, [sp, #0x1b0]
0x03C16858: fe575aa9  ldp x30, x21, [sp, #0x1a0]
0x03C1685C: fdcb40f9  ldr x29, [sp, #0x190]
0x03C16860: ff030791  add sp, sp, #0x1c0
0x03C16864: c0035fd6  ret
0x03C16868: 11a9d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1686C | ContextualizedECS.Query.Entities$$MatchMethod<FeedingCombinationComponent, DeadComponent, BoardTilePositionComponent>
; native signature: bool ContextualizedECS_Query_Entities__MatchMethod_FeedingCombinationComponent__DeadComponent__BoardTilePositionComponent_ (ContextualizedECS_Entity_o* entity, System_ValueTuple_Entity__T1__T2__T3__o* result, const MethodInfo_3C1686C* method);
; bytes=236 sha256=c70388d597bb1ea036c2e41cb12fdffa3c4358fbd013ce58be2a3929dffae908 status=arm64_complete_bound indexed_start=True
0x03C1686C: ff4301d1  sub sp, sp, #0x50
0x03C16870: fe5703a9  stp x30, x21, [sp, #0x30]
0x03C16874: f44f04a9  stp x20, x19, [sp, #0x40]
0x03C16878: 481c40f9  ldr x8, [x2, #0x38]
0x03C1687C: f50302aa  mov x21, x2
0x03C16880: f30301aa  mov x19, x1
0x03C16884: f40300aa  mov x20, x0
0x03C16888: 680000b5  cbnz x8, #0x3c16894
0x03C1688C: e00315aa  mov x0, x21
0x03C16890: faffd497  bl #0x3156878
0x03C16894: ff1700f9  str xzr, [sp, #0x28]
0x03C16898: ff830039  strb wzr, [sp, #0x20]
0x03C1689C: ff1b00b9  str wzr, [sp, #0x18]
0x03C168A0: 7f7e00a9  stp xzr, xzr, [x19]
0x03C168A4: 7f0a00f9  str xzr, [x19, #0x10]
0x03C168A8: 740500b4  cbz x20, #0x3c16954
0x03C168AC: a81e40f9  ldr x8, [x21, #0x38]
0x03C168B0: e1a30091  add x1, sp, #0x28
0x03C168B4: e00314aa  mov x0, x20
0x03C168B8: 020940f9  ldr x2, [x8, #0x10]
0x03C168BC: fe200094  bl #0x3c1ecb4
0x03C168C0: 00040036  tbz w0, #0, #0x3c16940
0x03C168C4: a81e40f9  ldr x8, [x21, #0x38]
0x03C168C8: e1830091  add x1, sp, #0x20
0x03C168CC: e00314aa  mov x0, x20
0x03C168D0: 021140f9  ldr x2, [x8, #0x20]
0x03C168D4: 22200094  bl #0x3c1e95c
0x03C168D8: 40030036  tbz w0, #0, #0x3c16940
0x03C168DC: a81e40f9  ldr x8, [x21, #0x38]
0x03C168E0: e1630091  add x1, sp, #0x18
0x03C168E4: e00314aa  mov x0, x20
0x03C168E8: 021940f9  ldr x2, [x8, #0x30]
0x03C168EC: 7e1e0094  bl #0x3c1e2e4
0x03C168F0: 80020036  tbz w0, #0, #0x3c16940
0x03C168F4: ff7f00a9  stp xzr, xzr, [sp]
0x03C168F8: ff0b00f9  str xzr, [sp, #0x10]
0x03C168FC: a81e40f9  ldr x8, [x21, #0x38]
0x03C16900: e21740f9  ldr x2, [sp, #0x28]
0x03C16904: e3834039  ldrb w3, [sp, #0x20]
0x03C16908: e41b40b9  ldr w4, [sp, #0x18]
0x03C1690C: 052140f9  ldr x5, [x8, #0x40]
0x03C16910: e0030091  mov x0, sp
0x03C16914: e10314aa  mov x1, x20
0x03C16918: 88b72f94  bl #0x4804738
0x03C1691C: e80b40f9  ldr x8, [sp, #0x10]
0x03C16920: e003c03d  ldr q0, [sp]
0x03C16924: e00313aa  mov x0, x19
0x03C16928: e1031faa  mov x1, xzr
0x03C1692C: 680a00f9  str x8, [x19, #0x10]
0x03C16930: 6002803d  str q0, [x19]
0x03C16934: 24a8d597  bl #0x31809c4
0x03C16938: 20008052  movz w0, #0x1
0x03C1693C: 02000014  b #0x3c16944
0x03C16940: e0031f2a  mov w0, wzr
0x03C16944: f44f44a9  ldp x20, x19, [sp, #0x40]
0x03C16948: fe5743a9  ldp x30, x21, [sp, #0x30]
0x03C1694C: ff430191  add sp, sp, #0x50
0x03C16950: c0035fd6  ret
0x03C16954: d6a8d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C16958 | ContextualizedECS.Query.Entities$$MatchMethod<IdComponent, DeadComponent, BoardTilePositionComponent>
; native signature: bool ContextualizedECS_Query_Entities__MatchMethod_IdComponent__DeadComponent__BoardTilePositionComponent_ (ContextualizedECS_Entity_o* entity, System_ValueTuple_Entity__T1__T2__T3__o* result, const MethodInfo_3C16958* method);
; bytes=280 sha256=3b3c7bcfde3bb2afd38a12967cd6ccad4c78110cc1164b441f0809671a749294 status=arm64_complete_bound indexed_start=True
0x03C16958: ff4304d1  sub sp, sp, #0x110
0x03C1695C: fd7300f9  str x29, [sp, #0xe0]
0x03C16960: fe570fa9  stp x30, x21, [sp, #0xf0]
0x03C16964: f44f10a9  stp x20, x19, [sp, #0x100]
0x03C16968: 481c40f9  ldr x8, [x2, #0x38]
0x03C1696C: f50302aa  mov x21, x2
0x03C16970: f30301aa  mov x19, x1
0x03C16974: f40300aa  mov x20, x0
0x03C16978: 680000b5  cbnz x8, #0x3c16984
0x03C1697C: e00315aa  mov x0, x21
0x03C16980: beffd497  bl #0x3156878
0x03C16984: 00e4006f  movi v0.2d, #0000000000000000
0x03C16988: ffa30339  strb wzr, [sp, #0xe8]
0x03C1698C: ff7b00b9  str wzr, [sp, #0x78]
0x03C16990: e08304ad  stp q0, q0, [sp, #0x90]
0x03C16994: e023803d  str q0, [sp, #0x80]
0x03C16998: 600201ad  stp q0, q0, [x19, #0x20]
0x03C1699C: 600200ad  stp q0, q0, [x19]
0x03C169A0: 740600b4  cbz x20, #0x3c16a6c
0x03C169A4: a81e40f9  ldr x8, [x21, #0x38]
0x03C169A8: e1030291  add x1, sp, #0x80
0x03C169AC: e00314aa  mov x0, x20
0x03C169B0: 020940f9  ldr x2, [x8, #0x10]
0x03C169B4: 06210094  bl #0x3c1edcc
0x03C169B8: e0040036  tbz w0, #0, #0x3c16a54
0x03C169BC: a81e40f9  ldr x8, [x21, #0x38]
0x03C169C0: e1a30391  add x1, sp, #0xe8
0x03C169C4: e00314aa  mov x0, x20
0x03C169C8: 021140f9  ldr x2, [x8, #0x20]
0x03C169CC: e41f0094  bl #0x3c1e95c
0x03C169D0: 20040036  tbz w0, #0, #0x3c16a54
0x03C169D4: a81e40f9  ldr x8, [x21, #0x38]
0x03C169D8: e1e30191  add x1, sp, #0x78
0x03C169DC: e00314aa  mov x0, x20
0x03C169E0: 021940f9  ldr x2, [x8, #0x30]
0x03C169E4: 401e0094  bl #0x3c1e2e4
0x03C169E8: 60030036  tbz w0, #0, #0x3c16a54
0x03C169EC: e00744ad  ldp q0, q1, [sp, #0x80]
0x03C169F0: e22bc03d  ldr q2, [sp, #0xa0]
0x03C169F4: 03e4006f  movi v3.2d, #0000000000000000
0x03C169F8: e38f02ad  stp q3, q3, [sp, #0x50]
0x03C169FC: e00700ad  stp q0, q1, [sp]
0x03C16A00: e20f01ad  stp q2, q3, [sp, #0x20]
0x03C16A04: e313803d  str q3, [sp, #0x40]
0x03C16A08: a81e40f9  ldr x8, [x21, #0x38]
0x03C16A0C: e3a34339  ldrb w3, [sp, #0xe8]
0x03C16A10: e47b40b9  ldr w4, [sp, #0x78]
0x03C16A14: e0c30091  add x0, sp, #0x30
0x03C16A18: 052140f9  ldr x5, [x8, #0x40]
0x03C16A1C: e2c30291  add x2, sp, #0xb0
0x03C16A20: e10314aa  mov x1, x20
0x03C16A24: e08705ad  stp q0, q1, [sp, #0xb0]
0x03C16A28: e237803d  str q2, [sp, #0xd0]
0x03C16A2C: f0bc2f94  bl #0x4805dec
0x03C16A30: e18342ad  ldp q1, q0, [sp, #0x50]
0x03C16A34: e38b41ad  ldp q3, q2, [sp, #0x30]
0x03C16A38: e00313aa  mov x0, x19
0x03C16A3C: e1031faa  mov x1, xzr
0x03C16A40: 610201ad  stp q1, q0, [x19, #0x20]
0x03C16A44: 630a00ad  stp q3, q2, [x19]
0x03C16A48: dfa7d597  bl #0x31809c4
0x03C16A4C: 20008052  movz w0, #0x1
0x03C16A50: 02000014  b #0x3c16a58
0x03C16A54: e0031f2a  mov w0, wzr
0x03C16A58: f44f50a9  ldp x20, x19, [sp, #0x100]
0x03C16A5C: fe574fa9  ldp x30, x21, [sp, #0xf0]
0x03C16A60: fd7340f9  ldr x29, [sp, #0xe0]
0x03C16A64: ff430491  add sp, sp, #0x110
0x03C16A68: c0035fd6  ret
0x03C16A6C: 90a8d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C16A70 | ContextualizedECS.Query.Entities$$MatchMethod<IdComponent, LockComponent, BoxComponent>
; native signature: bool ContextualizedECS_Query_Entities__MatchMethod_IdComponent__LockComponent__BoxComponent_ (ContextualizedECS_Entity_o* entity, System_ValueTuple_Entity__T1__T2__T3__o* result, const MethodInfo_3C16A70* method);
; bytes=312 sha256=3c2d06cc050c6df6db1745ac4feb87caf36e1fba8500f8db3235c91b50601fd8 status=arm64_complete_bound indexed_start=True
0x03C16A70: ff4305d1  sub sp, sp, #0x150
0x03C16A74: fd9300f9  str x29, [sp, #0x120]
0x03C16A78: fe5713a9  stp x30, x21, [sp, #0x130]
0x03C16A7C: f44f14a9  stp x20, x19, [sp, #0x140]
0x03C16A80: 481c40f9  ldr x8, [x2, #0x38]
0x03C16A84: f50302aa  mov x21, x2
0x03C16A88: f30301aa  mov x19, x1
0x03C16A8C: f40300aa  mov x20, x0
0x03C16A90: 680000b5  cbnz x8, #0x3c16a9c
0x03C16A94: e00315aa  mov x0, x21
0x03C16A98: 78ffd497  bl #0x3156878
0x03C16A9C: 00e4006f  movi v0.2d, #0000000000000000
0x03C16AA0: ffa30439  strb wzr, [sp, #0x128]
0x03C16AA4: ffff08a9  stp xzr, xzr, [sp, #0x88]
0x03C16AA8: ff9b00b9  str wzr, [sp, #0x98]
0x03C16AAC: e08305ad  stp q0, q0, [sp, #0xb0]
0x03C16AB0: e02b803d  str q0, [sp, #0xa0]
0x03C16AB4: 608201ad  stp q0, q0, [x19, #0x30]
0x03C16AB8: 608200ad  stp q0, q0, [x19, #0x10]
0x03C16ABC: 6002803d  str q0, [x19]
0x03C16AC0: 340700b4  cbz x20, #0x3c16ba4
0x03C16AC4: a81e40f9  ldr x8, [x21, #0x38]
0x03C16AC8: e1830291  add x1, sp, #0xa0
0x03C16ACC: e00314aa  mov x0, x20
0x03C16AD0: 020940f9  ldr x2, [x8, #0x10]
0x03C16AD4: be200094  bl #0x3c1edcc
0x03C16AD8: a0050036  tbz w0, #0, #0x3c16b8c
0x03C16ADC: a81e40f9  ldr x8, [x21, #0x38]
0x03C16AE0: e1a30491  add x1, sp, #0x128
0x03C16AE4: e00314aa  mov x0, x20
0x03C16AE8: 021140f9  ldr x2, [x8, #0x20]
0x03C16AEC: 61220094  bl #0x3c1f470
0x03C16AF0: e0040036  tbz w0, #0, #0x3c16b8c
0x03C16AF4: a81e40f9  ldr x8, [x21, #0x38]
0x03C16AF8: e1230291  add x1, sp, #0x88
0x03C16AFC: e00314aa  mov x0, x20
0x03C16B00: 021940f9  ldr x2, [x8, #0x30]
0x03C16B04: 811e0094  bl #0x3c1e508
0x03C16B08: 20040036  tbz w0, #0, #0x3c16b8c
0x03C16B0C: e00745ad  ldp q0, q1, [sp, #0xa0]
0x03C16B10: e233c03d  ldr q2, [sp, #0xc0]
0x03C16B14: 03e4006f  movi v3.2d, #0000000000000000
0x03C16B18: e30f03ad  stp q3, q3, [sp, #0x60]
0x03C16B1C: e30f02ad  stp q3, q3, [sp, #0x40]
0x03C16B20: e20f01ad  stp q2, q3, [sp, #0x20]
0x03C16B24: e00700ad  stp q0, q1, [sp]
0x03C16B28: a81e40f9  ldr x8, [x21, #0x38]
0x03C16B2C: e00740ad  ldp q0, q1, [sp]
0x03C16B30: e20bc03d  ldr q2, [sp, #0x20]
0x03C16B34: e3a34439  ldrb w3, [sp, #0x128]
0x03C16B38: 052140f9  ldr x5, [x8, #0x40]
0x03C16B3C: e08707ad  stp q0, q1, [sp, #0xf0]
0x03C16B40: e083c83c  ldur q0, [sp, #0x88]
0x03C16B44: e89b40b9  ldr w8, [sp, #0x98]
0x03C16B48: e0c30091  add x0, sp, #0x30
0x03C16B4C: e2c30391  add x2, sp, #0xf0
0x03C16B50: e4430391  add x4, sp, #0xd0
0x03C16B54: e10314aa  mov x1, x20
0x03C16B58: e247803d  str q2, [sp, #0x110]
0x03C16B5C: e037803d  str q0, [sp, #0xd0]
0x03C16B60: e8e300b9  str w8, [sp, #0xe0]
0x03C16B64: abc22f94  bl #0x4807610
0x03C16B68: e1c30091  add x1, sp, #0x30
0x03C16B6C: 020a8052  movz w2, #0x50
0x03C16B70: e00313aa  mov x0, x19
0x03C16B74: 7fdfd694  bl #0x71ce970
0x03C16B78: e00313aa  mov x0, x19
0x03C16B7C: e1031faa  mov x1, xzr
0x03C16B80: 91a7d597  bl #0x31809c4
0x03C16B84: 20008052  movz w0, #0x1
0x03C16B88: 02000014  b #0x3c16b90
0x03C16B8C: e0031f2a  mov w0, wzr
0x03C16B90: f44f54a9  ldp x20, x19, [sp, #0x140]
0x03C16B94: fe5753a9  ldp x30, x21, [sp, #0x130]
0x03C16B98: fd9340f9  ldr x29, [sp, #0x120]
0x03C16B9C: ff430591  add sp, sp, #0x150
0x03C16BA0: c0035fd6  ret
0x03C16BA4: 42a8d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C16BA8 | ContextualizedECS.Query.Entities$$MatchMethod<ResourceConsumedComponent, InteractionComponent, BoardTilePositionComponent>
; native signature: bool ContextualizedECS_Query_Entities__MatchMethod_ResourceConsumedComponent__InteractionComponent__BoardTilePositionComponent_ (ContextualizedECS_Entity_o* entity, System_ValueTuple_Entity__T1__T2__T3__o* result, const MethodInfo_3C16BA8* method);
; bytes=280 sha256=97b3e938cd8264272a8baf873bacb0b64fdb91e3fae1513729acc8af0df2bebe status=arm64_complete_bound indexed_start=True
0x03C16BA8: ff4304d1  sub sp, sp, #0x110
0x03C16BAC: fd7300f9  str x29, [sp, #0xe0]
0x03C16BB0: fe570fa9  stp x30, x21, [sp, #0xf0]
0x03C16BB4: f44f10a9  stp x20, x19, [sp, #0x100]
0x03C16BB8: 481c40f9  ldr x8, [x2, #0x38]
0x03C16BBC: f50302aa  mov x21, x2
0x03C16BC0: f30301aa  mov x19, x1
0x03C16BC4: f40300aa  mov x20, x0
0x03C16BC8: 680000b5  cbnz x8, #0x3c16bd4
0x03C16BCC: e00315aa  mov x0, x21
0x03C16BD0: 2affd497  bl #0x3156878
0x03C16BD4: 00e4006f  movi v0.2d, #0000000000000000
0x03C16BD8: ffa30339  strb wzr, [sp, #0xe8]
0x03C16BDC: ff5300f9  str xzr, [sp, #0xa0]
0x03C16BE0: ff7b00b9  str wzr, [sp, #0x78]
0x03C16BE4: e00304ad  stp q0, q0, [sp, #0x80]
0x03C16BE8: 600201ad  stp q0, q0, [x19, #0x20]
0x03C16BEC: 600200ad  stp q0, q0, [x19]
0x03C16BF0: 740600b4  cbz x20, #0x3c16cbc
0x03C16BF4: a81e40f9  ldr x8, [x21, #0x38]
0x03C16BF8: e1a30391  add x1, sp, #0xe8
0x03C16BFC: e00314aa  mov x0, x20
0x03C16C00: 020940f9  ldr x2, [x8, #0x10]
0x03C16C04: 74230094  bl #0x3c1f9d4
0x03C16C08: e0040036  tbz w0, #0, #0x3c16ca4
0x03C16C0C: a81e40f9  ldr x8, [x21, #0x38]
0x03C16C10: e1030291  add x1, sp, #0x80
0x03C16C14: e00314aa  mov x0, x20
0x03C16C18: 021140f9  ldr x2, [x8, #0x20]
0x03C16C1C: ff200094  bl #0x3c1f018
0x03C16C20: 20040036  tbz w0, #0, #0x3c16ca4
0x03C16C24: a81e40f9  ldr x8, [x21, #0x38]
0x03C16C28: e1e30191  add x1, sp, #0x78
0x03C16C2C: e00314aa  mov x0, x20
0x03C16C30: 021940f9  ldr x2, [x8, #0x30]
0x03C16C34: ac1d0094  bl #0x3c1e2e4
0x03C16C38: 60030036  tbz w0, #0, #0x3c16ca4
0x03C16C3C: e00744ad  ldp q0, q1, [sp, #0x80]
0x03C16C40: e85340f9  ldr x8, [sp, #0xa0]
0x03C16C44: 02e4006f  movi v2.2d, #0000000000000000
0x03C16C48: e28b02ad  stp q2, q2, [sp, #0x50]
0x03C16C4C: e00700ad  stp q0, q1, [sp]
0x03C16C50: e81300f9  str x8, [sp, #0x20]
0x03C16C54: e28b01ad  stp q2, q2, [sp, #0x30]
0x03C16C58: a91e40f9  ldr x9, [x21, #0x38]
0x03C16C5C: e2a34339  ldrb w2, [sp, #0xe8]
0x03C16C60: e47b40b9  ldr w4, [sp, #0x78]
0x03C16C64: e0c30091  add x0, sp, #0x30
0x03C16C68: 252140f9  ldr x5, [x9, #0x40]
0x03C16C6C: e3c30291  add x3, sp, #0xb0
0x03C16C70: e10314aa  mov x1, x20
0x03C16C74: e08705ad  stp q0, q1, [sp, #0xb0]
0x03C16C78: e86b00f9  str x8, [sp, #0xd0]
0x03C16C7C: 92d32f94  bl #0x480bac4
0x03C16C80: e18342ad  ldp q1, q0, [sp, #0x50]
0x03C16C84: e38b41ad  ldp q3, q2, [sp, #0x30]
0x03C16C88: e00313aa  mov x0, x19
0x03C16C8C: e1031faa  mov x1, xzr
0x03C16C90: 610201ad  stp q1, q0, [x19, #0x20]
0x03C16C94: 630a00ad  stp q3, q2, [x19]
0x03C16C98: 4ba7d597  bl #0x31809c4
0x03C16C9C: 20008052  movz w0, #0x1
0x03C16CA0: 02000014  b #0x3c16ca8
0x03C16CA4: e0031f2a  mov w0, wzr
0x03C16CA8: f44f50a9  ldp x20, x19, [sp, #0x100]
0x03C16CAC: fe574fa9  ldp x30, x21, [sp, #0xf0]
0x03C16CB0: fd7340f9  ldr x29, [sp, #0xe0]
0x03C16CB4: ff430491  add sp, sp, #0x110
0x03C16CB8: c0035fd6  ret
0x03C16CBC: fca7d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C16CC0 | ContextualizedECS.Query.Entities$$MatchMethod<TimeDurationComponent, IdComponent, BoardTilePositionComponent>
; native signature: bool ContextualizedECS_Query_Entities__MatchMethod_TimeDurationComponent__IdComponent__BoardTilePositionComponent_ (ContextualizedECS_Entity_o* entity, System_ValueTuple_Entity__T1__T2__T3__o* result, const MethodInfo_3C16CC0* method);
; bytes=304 sha256=007f115d4996df3cace94943ff1213ae7d3f742ac0804615d1922919780f0045 status=arm64_complete_bound indexed_start=True
0x03C16CC0: ff8305d1  sub sp, sp, #0x160
0x03C16CC4: fd9b00f9  str x29, [sp, #0x130]
0x03C16CC8: fe5714a9  stp x30, x21, [sp, #0x140]
0x03C16CCC: f44f15a9  stp x20, x19, [sp, #0x150]
0x03C16CD0: 481c40f9  ldr x8, [x2, #0x38]
0x03C16CD4: f50302aa  mov x21, x2
0x03C16CD8: f30301aa  mov x19, x1
0x03C16CDC: f40300aa  mov x20, x0
0x03C16CE0: 680000b5  cbnz x8, #0x3c16cec
0x03C16CE4: e00315aa  mov x0, x21
0x03C16CE8: e4fed497  bl #0x3156878
0x03C16CEC: 00e4006f  movi v0.2d, #0000000000000000
0x03C16CF0: ff3b01b9  str wzr, [sp, #0x138]
0x03C16CF4: e00306ad  stp q0, q0, [sp, #0xc0]
0x03C16CF8: e00305ad  stp q0, q0, [sp, #0xa0]
0x03C16CFC: e027803d  str q0, [sp, #0x90]
0x03C16D00: 600202ad  stp q0, q0, [x19, #0x40]
0x03C16D04: 600201ad  stp q0, q0, [x19, #0x20]
0x03C16D08: 600200ad  stp q0, q0, [x19]
0x03C16D0C: 140700b4  cbz x20, #0x3c16dec
0x03C16D10: a81e40f9  ldr x8, [x21, #0x38]
0x03C16D14: e1030391  add x1, sp, #0xc0
0x03C16D18: e00314aa  mov x0, x20
0x03C16D1C: 020940f9  ldr x2, [x8, #0x10]
0x03C16D20: 01240094  bl #0x3c1fd24
0x03C16D24: 80050036  tbz w0, #0, #0x3c16dd4
0x03C16D28: a81e40f9  ldr x8, [x21, #0x38]
0x03C16D2C: e1430291  add x1, sp, #0x90
0x03C16D30: e00314aa  mov x0, x20
0x03C16D34: 021140f9  ldr x2, [x8, #0x20]
0x03C16D38: 25200094  bl #0x3c1edcc
0x03C16D3C: c0040036  tbz w0, #0, #0x3c16dd4
0x03C16D40: a81e40f9  ldr x8, [x21, #0x38]
0x03C16D44: e1e30491  add x1, sp, #0x138
0x03C16D48: e00314aa  mov x0, x20
0x03C16D4C: 021940f9  ldr x2, [x8, #0x30]
0x03C16D50: 651d0094  bl #0x3c1e2e4
0x03C16D54: 00040036  tbz w0, #0, #0x3c16dd4
0x03C16D58: e08744ad  ldp q0, q1, [sp, #0x90]
0x03C16D5C: e22fc03d  ldr q2, [sp, #0xb0]
0x03C16D60: 03e4006f  movi v3.2d, #0000000000000000
0x03C16D64: e38f03ad  stp q3, q3, [sp, #0x70]
0x03C16D68: e38f02ad  stp q3, q3, [sp, #0x50]
0x03C16D6C: e38f01ad  stp q3, q3, [sp, #0x30]
0x03C16D70: e00700ad  stp q0, q1, [sp]
0x03C16D74: e20b803d  str q2, [sp, #0x20]
0x03C16D78: a81e40f9  ldr x8, [x21, #0x38]
0x03C16D7C: e00746ad  ldp q0, q1, [sp, #0xc0]
0x03C16D80: e20f40ad  ldp q2, q3, [sp]
0x03C16D84: e43b41b9  ldr w4, [sp, #0x138]
0x03C16D88: 052140f9  ldr x5, [x8, #0x40]
0x03C16D8C: e08708ad  stp q0, q1, [sp, #0x110]
0x03C16D90: e00bc03d  ldr q0, [sp, #0x20]
0x03C16D94: e0c30091  add x0, sp, #0x30
0x03C16D98: e2430491  add x2, sp, #0x110
0x03C16D9C: e3830391  add x3, sp, #0xe0
0x03C16DA0: e10314aa  mov x1, x20
0x03C16DA4: e20f07ad  stp q2, q3, [sp, #0xe0]
0x03C16DA8: e043803d  str q0, [sp, #0x100]
0x03C16DAC: 63d92f94  bl #0x480d338
0x03C16DB0: e1c30091  add x1, sp, #0x30
0x03C16DB4: 020c8052  movz w2, #0x60
0x03C16DB8: e00313aa  mov x0, x19
0x03C16DBC: edded694  bl #0x71ce970
0x03C16DC0: e00313aa  mov x0, x19
0x03C16DC4: e1031faa  mov x1, xzr
0x03C16DC8: ffa6d597  bl #0x31809c4
0x03C16DCC: 20008052  movz w0, #0x1
0x03C16DD0: 02000014  b #0x3c16dd8
0x03C16DD4: e0031f2a  mov w0, wzr
0x03C16DD8: f44f55a9  ldp x20, x19, [sp, #0x150]
0x03C16DDC: fe5754a9  ldp x30, x21, [sp, #0x140]
0x03C16DE0: fd9b40f9  ldr x29, [sp, #0x130]
0x03C16DE4: ff830591  add sp, sp, #0x160
0x03C16DE8: c0035fd6  ret
0x03C16DEC: b0a7d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C16DF0 | ContextualizedECS.Query.Entities$$MatchMethod<TimeLockComponent, BoardTilePositionComponent, IdComponent>
; native signature: bool ContextualizedECS_Query_Entities__MatchMethod_TimeLockComponent__BoardTilePositionComponent__IdComponent_ (ContextualizedECS_Entity_o* entity, System_ValueTuple_Entity__T1__T2__T3__o* result, const MethodInfo_3C16DF0* method);
; bytes=324 sha256=44ad0e1948b33c70274c163961e1831f8767fb948d59fe5b1d3bf6da9d734c00 status=arm64_complete_bound indexed_start=True
0x03C16DF0: ff4306d1  sub sp, sp, #0x190
0x03C16DF4: fdb300f9  str x29, [sp, #0x160]
0x03C16DF8: fe5717a9  stp x30, x21, [sp, #0x170]
0x03C16DFC: f44f18a9  stp x20, x19, [sp, #0x180]
0x03C16E00: 481c40f9  ldr x8, [x2, #0x38]
0x03C16E04: f50302aa  mov x21, x2
0x03C16E08: f30301aa  mov x19, x1
0x03C16E0C: f40300aa  mov x20, x0
0x03C16E10: 680000b5  cbnz x8, #0x3c16e1c
0x03C16E14: e00315aa  mov x0, x21
0x03C16E18: 98fed497  bl #0x3156878
0x03C16E1C: 00e4006f  movi v0.2d, #0000000000000000
0x03C16E20: ff7b00f9  str xzr, [sp, #0xf0]
0x03C16E24: ff6b01b9  str wzr, [sp, #0x168]
0x03C16E28: e08306ad  stp q0, q0, [sp, #0xd0]
0x03C16E2C: e08305ad  stp q0, q0, [sp, #0xb0]
0x03C16E30: e02b803d  str q0, [sp, #0xa0]
0x03C16E34: 7f3200f9  str xzr, [x19, #0x60]
0x03C16E38: 600202ad  stp q0, q0, [x19, #0x40]
0x03C16E3C: 600201ad  stp q0, q0, [x19, #0x20]
0x03C16E40: 600200ad  stp q0, q0, [x19]
0x03C16E44: 740700b4  cbz x20, #0x3c16f30
0x03C16E48: a81e40f9  ldr x8, [x21, #0x38]
0x03C16E4C: e1430391  add x1, sp, #0xd0
0x03C16E50: e00314aa  mov x0, x20
0x03C16E54: 020940f9  ldr x2, [x8, #0x10]
0x03C16E58: 3b240094  bl #0x3c1ff44
0x03C16E5C: e0050036  tbz w0, #0, #0x3c16f18
0x03C16E60: a81e40f9  ldr x8, [x21, #0x38]
0x03C16E64: e1a30591  add x1, sp, #0x168
0x03C16E68: e00314aa  mov x0, x20
0x03C16E6C: 021140f9  ldr x2, [x8, #0x20]
0x03C16E70: 1d1d0094  bl #0x3c1e2e4
0x03C16E74: 20050036  tbz w0, #0, #0x3c16f18
0x03C16E78: a81e40f9  ldr x8, [x21, #0x38]
0x03C16E7C: e1830291  add x1, sp, #0xa0
0x03C16E80: e00314aa  mov x0, x20
0x03C16E84: 021940f9  ldr x2, [x8, #0x30]
0x03C16E88: d11f0094  bl #0x3c1edcc
0x03C16E8C: 60040036  tbz w0, #0, #0x3c16f18
0x03C16E90: 03e4006f  movi v3.2d, #0000000000000000
0x03C16E94: e00745ad  ldp q0, q1, [sp, #0xa0]
0x03C16E98: e38f03ad  stp q3, q3, [sp, #0x70]
0x03C16E9C: e38f02ad  stp q3, q3, [sp, #0x50]
0x03C16EA0: e38f01ad  stp q3, q3, [sp, #0x30]
0x03C16EA4: e20f46ad  ldp q2, q3, [sp, #0xc0]
0x03C16EA8: ff4b00f9  str xzr, [sp, #0x90]
0x03C16EAC: e00700ad  stp q0, q1, [sp]
0x03C16EB0: e36b41b9  ldr w3, [sp, #0x168]
0x03C16EB4: e20b803d  str q2, [sp, #0x20]
0x03C16EB8: a81e40f9  ldr x8, [x21, #0x38]
0x03C16EBC: e43bc03d  ldr q4, [sp, #0xe0]
0x03C16EC0: e97b40f9  ldr x9, [sp, #0xf0]
0x03C16EC4: e00740ad  ldp q0, q1, [sp]
0x03C16EC8: 052140f9  ldr x5, [x8, #0x40]
0x03C16ECC: e20bc03d  ldr q2, [sp, #0x20]
0x03C16ED0: e0c30091  add x0, sp, #0x30
0x03C16ED4: e2c30491  add x2, sp, #0x130
0x03C16ED8: e4030491  add x4, sp, #0x100
0x03C16EDC: e10314aa  mov x1, x20
0x03C16EE0: e39309ad  stp q3, q4, [sp, #0x130]
0x03C16EE4: e00708ad  stp q0, q1, [sp, #0x100]
0x03C16EE8: e9ab00f9  str x9, [sp, #0x150]
0x03C16EEC: e24b803d  str q2, [sp, #0x120]
0x03C16EF0: 5adf2f94  bl #0x480ec58
0x03C16EF4: e1c30091  add x1, sp, #0x30
0x03C16EF8: 020d8052  movz w2, #0x68
0x03C16EFC: e00313aa  mov x0, x19
0x03C16F00: 9cded694  bl #0x71ce970
0x03C16F04: e00313aa  mov x0, x19
0x03C16F08: e1031faa  mov x1, xzr
0x03C16F0C: aea6d597  bl #0x31809c4
0x03C16F10: 20008052  movz w0, #0x1
0x03C16F14: 02000014  b #0x3c16f1c
0x03C16F18: e0031f2a  mov w0, wzr
0x03C16F1C: f44f58a9  ldp x20, x19, [sp, #0x180]
0x03C16F20: fe5757a9  ldp x30, x21, [sp, #0x170]
0x03C16F24: fdb340f9  ldr x29, [sp, #0x160]
0x03C16F28: ff430691  add sp, sp, #0x190
0x03C16F2C: c0035fd6  ret
0x03C16F30: 5fa7d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C16F34 | ContextualizedECS.Query.Entities$$MatchMethod<__Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType>
; native signature: bool ContextualizedECS_Query_Entities__MatchMethod___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType_ (ContextualizedECS_Entity_o* entity, System_ValueTuple_Entity__T1__T2__T3__o* result, const MethodInfo_3C16F34* method);
; bytes=732 sha256=512df10e4812a35b717198cbdc2f4fa7fa9ead7bc56f871b3e05bfe23511d853 status=arm64_complete_bound indexed_start=True
0x03C16F34: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x03C16F38: fc6f01a9  stp x28, x27, [sp, #0x10]
0x03C16F3C: fa6702a9  stp x26, x25, [sp, #0x20]
0x03C16F40: f85f03a9  stp x24, x23, [sp, #0x30]
0x03C16F44: f65704a9  stp x22, x21, [sp, #0x40]
0x03C16F48: f44f05a9  stp x20, x19, [sp, #0x50]
0x03C16F4C: fd030091  mov x29, sp
0x03C16F50: ff4301d1  sub sp, sp, #0x50
0x03C16F54: 48d03bd5  mrs x8, tpidr_el0
0x03C16F58: a8031ff8  stur x8, [x29, #-0x10]
0x03C16F5C: 081540f9  ldr x8, [x8, #0x28]
0x03C16F60: f40302aa  mov x20, x2
0x03C16F64: f30301aa  mov x19, x1
0x03C16F68: f50300aa  mov x21, x0
0x03C16F6C: a8831ff8  stur x8, [x29, #-8]
0x03C16F70: 481c40f9  ldr x8, [x2, #0x38]
0x03C16F74: 880000b5  cbnz x8, #0x3c16f84
0x03C16F78: e00314aa  mov x0, x20
0x03C16F7C: 3ffed497  bl #0x3156878
0x03C16F80: 881e40f9  ldr x8, [x20, #0x38]
0x03C16F84: 09a944a9  ldp x9, x10, [x8, #0x48]
0x03C16F88: 0b2d40f9  ldr x11, [x8, #0x58]
0x03C16F8C: 080540f9  ldr x8, [x8, #8]
0x03C16F90: 3bfd40b9  ldr w27, [x9, #0xfc]
0x03C16F94: 5afd40b9  ldr w26, [x10, #0xfc]
0x03C16F98: 77fd40b9  ldr w23, [x11, #0xfc]
0x03C16F9C: 16fd40b9  ldr w22, [x8, #0xfc]
0x03C16FA0: 693f0091  add x9, x27, #0xf
0x03C16FA4: e8030091  mov x8, sp
0x03C16FA8: 29717c92  and x9, x9, #0x1fffffff0
0x03C16FAC: 080109cb  sub x8, x8, x9
0x03C16FB0: a8831ef8  stur x8, [x29, #-0x18]
0x03C16FB4: 1f010091  mov sp, x8
0x03C16FB8: e8030091  mov x8, sp
0x03C16FBC: 080109cb  sub x8, x8, x9
0x03C16FC0: a8831cf8  stur x8, [x29, #-0x38]
0x03C16FC4: 1f010091  mov sp, x8
0x03C16FC8: 4a3f0091  add x10, x26, #0xf
0x03C16FCC: e8030091  mov x8, sp
0x03C16FD0: 59717c92  and x25, x10, #0x1fffffff0
0x03C16FD4: 080119cb  sub x8, x8, x25
0x03C16FD8: a8831bf8  stur x8, [x29, #-0x48]
0x03C16FDC: 1f010091  mov sp, x8
0x03C16FE0: e8030091  mov x8, sp
0x03C16FE4: 080119cb  sub x8, x8, x25
0x03C16FE8: a8031cf8  stur x8, [x29, #-0x40]
0x03C16FEC: 1f010091  mov sp, x8
0x03C16FF0: ea3e0091  add x10, x23, #0xf
0x03C16FF4: e8030091  mov x8, sp
0x03C16FF8: 5c717c92  and x28, x10, #0x1fffffff0
0x03C16FFC: 08011ccb  sub x8, x8, x28
0x03C17000: a8031ef8  stur x8, [x29, #-0x20]
0x03C17004: 1f010091  mov sp, x8
0x03C17008: e8030091  mov x8, sp
0x03C1700C: 08011ccb  sub x8, x8, x28
0x03C17010: a8031bf8  stur x8, [x29, #-0x50]
0x03C17014: 1f010091  mov sp, x8
0x03C17018: ca3e0091  add x10, x22, #0xf
0x03C1701C: e8030091  mov x8, sp
0x03C17020: 4a717c92  and x10, x10, #0x1fffffff0
0x03C17024: 08010acb  sub x8, x8, x10
0x03C17028: a8031df8  stur x8, [x29, #-0x30]
0x03C1702C: 1f010091  mov sp, x8
0x03C17030: e8030091  mov x8, sp
0x03C17034: 180109cb  sub x24, x8, x9
0x03C17038: 1f030091  mov sp, x24
0x03C1703C: e00318aa  mov x0, x24
0x03C17040: e1031f2a  mov w1, wzr
0x03C17044: e2031baa  mov x2, x27
0x03C17048: 56ded694  bl #0x71ce9a0
0x03C1704C: e8030091  mov x8, sp
0x03C17050: 190119cb  sub x25, x8, x25
0x03C17054: 3f030091  mov sp, x25
0x03C17058: e00319aa  mov x0, x25
0x03C1705C: e1031f2a  mov w1, wzr
0x03C17060: e2031aaa  mov x2, x26
0x03C17064: 4fded694  bl #0x71ce9a0
0x03C17068: e8030091  mov x8, sp
0x03C1706C: 1c011ccb  sub x28, x8, x28
0x03C17070: 9f030091  mov sp, x28
0x03C17074: e0031caa  mov x0, x28
0x03C17078: e1031f2a  mov w1, wzr
0x03C1707C: e20317aa  mov x2, x23
0x03C17080: 48ded694  bl #0x71ce9a0
0x03C17084: e00313aa  mov x0, x19
0x03C17088: e1031f2a  mov w1, wzr
0x03C1708C: e20316aa  mov x2, x22
0x03C17090: b3831df8  stur x19, [x29, #-0x28]
0x03C17094: 43ded694  bl #0x71ce9a0
0x03C17098: 950b00b4  cbz x21, #0x3c17208
0x03C1709C: 881e40f9  ldr x8, [x20, #0x38]
0x03C170A0: e00315aa  mov x0, x21
0x03C170A4: e10318aa  mov x1, x24
0x03C170A8: 020940f9  ldr x2, [x8, #0x10]
0x03C170AC: 480040f9  ldr x8, [x2]
0x03C170B0: 00013fd6  blr x8
0x03C170B4: e0080036  tbz w0, #0, #0x3c171d0
0x03C170B8: 881e40f9  ldr x8, [x20, #0x38]
0x03C170BC: e00315aa  mov x0, x21
0x03C170C0: e10319aa  mov x1, x25
0x03C170C4: 021140f9  ldr x2, [x8, #0x20]
0x03C170C8: 480040f9  ldr x8, [x2]
0x03C170CC: 00013fd6  blr x8
0x03C170D0: 00080036  tbz w0, #0, #0x3c171d0
0x03C170D4: 881e40f9  ldr x8, [x20, #0x38]
0x03C170D8: e00315aa  mov x0, x21
0x03C170DC: e1031caa  mov x1, x28
0x03C170E0: 021940f9  ldr x2, [x8, #0x30]
0x03C170E4: 480040f9  ldr x8, [x2]
0x03C170E8: 00013fd6  blr x8
0x03C170EC: 20070036  tbz w0, #0, #0x3c171d0
0x03C170F0: a0835ef8  ldur x0, [x29, #-0x18]
0x03C170F4: e10318aa  mov x1, x24
0x03C170F8: e2031baa  mov x2, x27
0x03C170FC: 1dded694  bl #0x71ce970
0x03C17100: b8835bf8  ldur x24, [x29, #-0x48]
0x03C17104: e10319aa  mov x1, x25
0x03C17108: e2031aaa  mov x2, x26
0x03C1710C: e00318aa  mov x0, x24
0x03C17110: 18ded694  bl #0x71ce970
0x03C17114: a0035ef8  ldur x0, [x29, #-0x20]
0x03C17118: e1031caa  mov x1, x28
0x03C1711C: e20317aa  mov x2, x23
0x03C17120: 14ded694  bl #0x71ce970
0x03C17124: bc035df8  ldur x28, [x29, #-0x30]
0x03C17128: e1031f2a  mov w1, wzr
0x03C1712C: e20316aa  mov x2, x22
0x03C17130: e0031caa  mov x0, x28
0x03C17134: 1bded694  bl #0x71ce9a0
0x03C17138: b3835cf8  ldur x19, [x29, #-0x38]
0x03C1713C: a1835ef8  ldur x1, [x29, #-0x18]
0x03C17140: e2031baa  mov x2, x27
0x03C17144: e00313aa  mov x0, x19
0x03C17148: 0aded694  bl #0x71ce970
0x03C1714C: b9035cf8  ldur x25, [x29, #-0x40]
0x03C17150: e10318aa  mov x1, x24
0x03C17154: e2031aaa  mov x2, x26
0x03C17158: e00319aa  mov x0, x25
0x03C1715C: 05ded694  bl #0x71ce970
0x03C17160: b8035bf8  ldur x24, [x29, #-0x50]
0x03C17164: a1035ef8  ldur x1, [x29, #-0x20]
0x03C17168: e20317aa  mov x2, x23
0x03C1716C: e00318aa  mov x0, x24
0x03C17170: 00ded694  bl #0x71ce970
0x03C17174: 881e40f9  ldr x8, [x20, #0x38]
0x03C17178: e0031caa  mov x0, x28
0x03C1717C: e10315aa  mov x1, x21
0x03C17180: e20313aa  mov x2, x19
0x03C17184: 052140f9  ldr x5, [x8, #0x40]
0x03C17188: e30319aa  mov x3, x25
0x03C1718C: e40318aa  mov x4, x24
0x03C17190: f1ec2f94  bl #0x4812554
0x03C17194: b3835df8  ldur x19, [x29, #-0x28]
0x03C17198: e1031caa  mov x1, x28
0x03C1719C: e20316aa  mov x2, x22
0x03C171A0: e00313aa  mov x0, x19
0x03C171A4: f3ddd694  bl #0x71ce970
0x03C171A8: 881e40f9  ldr x8, [x20, #0x38]
0x03C171AC: 000540f9  ldr x0, [x8, #8]
0x03C171B0: 08d44439  ldrb w8, [x0, #0x135]
0x03C171B4: 48000037  tbnz w8, #0, #0x3c171bc
0x03C171B8: 99fdd497  bl #0x315681c
0x03C171BC: e10313aa  mov x1, x19
0x03C171C0: e2031caa  mov x2, x28
0x03C171C4: 01a6d597  bl #0x31809c8
0x03C171C8: 20008052  movz w0, #0x1
0x03C171CC: 02000014  b #0x3c171d4
0x03C171D0: e0031f2a  mov w0, wzr
0x03C171D4: a8035ff8  ldur x8, [x29, #-0x10]
0x03C171D8: 081540f9  ldr x8, [x8, #0x28]
0x03C171DC: a9835ff8  ldur x9, [x29, #-8]
0x03C171E0: 1f0109eb  cmp x8, x9
0x03C171E4: 41010054  b.ne #0x3c1720c
0x03C171E8: bf030091  mov sp, x29
0x03C171EC: f44f45a9  ldp x20, x19, [sp, #0x50]
0x03C171F0: f65744a9  ldp x22, x21, [sp, #0x40]
0x03C171F4: f85f43a9  ldp x24, x23, [sp, #0x30]
0x03C171F8: fa6742a9  ldp x26, x25, [sp, #0x20]
0x03C171FC: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x03C17200: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x03C17204: c0035fd6  ret
0x03C17208: a9a6d597  bl #0x3180cac
0x03C1720C: e1ddd694  bl #0x71ce990

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1A74C | ContextualizedECS.Query.Entities$$With<BoardTilePositionComponent, BornComponent, IdComponent, ItemMergedComponent>
; native signature: ContextualizedECS_Query_Entities_MatchDelegate_ValueTuple_Entity__T1__T2__T3__T4___o* ContextualizedECS_Query_Entities__With_BoardTilePositionComponent__BornComponent__IdComponent__ItemMergedComponent_ (const MethodInfo_3C1A74C* method);
; bytes=84 sha256=38101da1573298e3fa9bd16120363c76aedc2f482bb0a1f7cc2c511f313083e0 status=arm64_complete_bound indexed_start=True
0x03C1A74C: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x03C1A750: 081c40f9  ldr x8, [x0, #0x38]
0x03C1A754: f30300aa  mov x19, x0
0x03C1A758: 880000b5  cbnz x8, #0x3c1a768
0x03C1A75C: e00313aa  mov x0, x19
0x03C1A760: 46f0d497  bl #0x3156878
0x03C1A764: 681e40f9  ldr x8, [x19, #0x38]
0x03C1A768: 000540f9  ldr x0, [x8, #8]
0x03C1A76C: 08d44439  ldrb w8, [x0, #0x135]
0x03C1A770: 48000037  tbnz w8, #0, #0x3c1a778
0x03C1A774: 2af0d497  bl #0x315681c
0x03C1A778: 4a99d597  bl #0x3180ca0
0x03C1A77C: 681e40f9  ldr x8, [x19, #0x38]
0x03C1A780: e1031faa  mov x1, xzr
0x03C1A784: f30300aa  mov x19, x0
0x03C1A788: 020140f9  ldr x2, [x8]
0x03C1A78C: 030940f9  ldr x3, [x8, #0x10]
0x03C1A790: 57051794  bl #0x41dbcec
0x03C1A794: e00313aa  mov x0, x19
0x03C1A798: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x03C1A79C: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1A7A0 | ContextualizedECS.Query.Entities$$With<BoardTilePositionComponent, IdComponent, BornComponent, ItemMergedComponent>
; native signature: ContextualizedECS_Query_Entities_MatchDelegate_ValueTuple_Entity__T1__T2__T3__T4___o* ContextualizedECS_Query_Entities__With_BoardTilePositionComponent__IdComponent__BornComponent__ItemMergedComponent_ (const MethodInfo_3C1A7A0* method);
; bytes=84 sha256=18549721b2b11b8f84c7e66cfadaf790960fc56252c30132ad3e6f5ac7eec7ed status=arm64_complete_bound indexed_start=True
0x03C1A7A0: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x03C1A7A4: 081c40f9  ldr x8, [x0, #0x38]
0x03C1A7A8: f30300aa  mov x19, x0
0x03C1A7AC: 880000b5  cbnz x8, #0x3c1a7bc
0x03C1A7B0: e00313aa  mov x0, x19
0x03C1A7B4: 31f0d497  bl #0x3156878
0x03C1A7B8: 681e40f9  ldr x8, [x19, #0x38]
0x03C1A7BC: 000540f9  ldr x0, [x8, #8]
0x03C1A7C0: 08d44439  ldrb w8, [x0, #0x135]
0x03C1A7C4: 48000037  tbnz w8, #0, #0x3c1a7cc
0x03C1A7C8: 15f0d497  bl #0x315681c
0x03C1A7CC: 3599d597  bl #0x3180ca0
0x03C1A7D0: 681e40f9  ldr x8, [x19, #0x38]
0x03C1A7D4: e1031faa  mov x1, xzr
0x03C1A7D8: f30300aa  mov x19, x0
0x03C1A7DC: 020140f9  ldr x2, [x8]
0x03C1A7E0: 030940f9  ldr x3, [x8, #0x10]
0x03C1A7E4: a4051794  bl #0x41dbe74
0x03C1A7E8: e00313aa  mov x0, x19
0x03C1A7EC: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x03C1A7F0: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1A7F4 | ContextualizedECS.Query.Entities$$With<BoardTilePositionComponent, IdComponent, DynamicItemConfigComponent, PendingInteractionComponent>
; native signature: ContextualizedECS_Query_Entities_MatchDelegate_ValueTuple_Entity__T1__T2__T3__T4___o* ContextualizedECS_Query_Entities__With_BoardTilePositionComponent__IdComponent__DynamicItemConfigComponent__PendingInteractionComponent_ (const MethodInfo_3C1A7F4* method);
; bytes=84 sha256=4bd38f056d9cd6f2f0e154c77cf2d7b44ea3e2e7817128954d298da14f5c127b status=arm64_complete_bound indexed_start=True
0x03C1A7F4: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x03C1A7F8: 081c40f9  ldr x8, [x0, #0x38]
0x03C1A7FC: f30300aa  mov x19, x0
0x03C1A800: 880000b5  cbnz x8, #0x3c1a810
0x03C1A804: e00313aa  mov x0, x19
0x03C1A808: 1cf0d497  bl #0x3156878
0x03C1A80C: 681e40f9  ldr x8, [x19, #0x38]
0x03C1A810: 000540f9  ldr x0, [x8, #8]
0x03C1A814: 08d44439  ldrb w8, [x0, #0x135]
0x03C1A818: 48000037  tbnz w8, #0, #0x3c1a820
0x03C1A81C: 00f0d497  bl #0x315681c
0x03C1A820: 2099d597  bl #0x3180ca0
0x03C1A824: 681e40f9  ldr x8, [x19, #0x38]
0x03C1A828: e1031faa  mov x1, xzr
0x03C1A82C: f30300aa  mov x19, x0
0x03C1A830: 020140f9  ldr x2, [x8]
0x03C1A834: 030940f9  ldr x3, [x8, #0x10]
0x03C1A838: f1051794  bl #0x41dbffc
0x03C1A83C: e00313aa  mov x0, x19
0x03C1A840: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x03C1A844: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1A848 | ContextualizedECS.Query.Entities$$With<BoardTilePositionComponent, MergeComponent, IdComponent, PendingItemsCombinationComponent>
; native signature: ContextualizedECS_Query_Entities_MatchDelegate_ValueTuple_Entity__T1__T2__T3__T4___o* ContextualizedECS_Query_Entities__With_BoardTilePositionComponent__MergeComponent__IdComponent__PendingItemsCombinationComponent_ (const MethodInfo_3C1A848* method);
; bytes=84 sha256=157976689dbec05d22a5916fbdfcc7876a72e7621638354d1ad979dd3bce3ee4 status=arm64_complete_bound indexed_start=True
0x03C1A848: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x03C1A84C: 081c40f9  ldr x8, [x0, #0x38]
0x03C1A850: f30300aa  mov x19, x0
0x03C1A854: 880000b5  cbnz x8, #0x3c1a864
0x03C1A858: e00313aa  mov x0, x19
0x03C1A85C: 07f0d497  bl #0x3156878
0x03C1A860: 681e40f9  ldr x8, [x19, #0x38]
0x03C1A864: 000540f9  ldr x0, [x8, #8]
0x03C1A868: 08d44439  ldrb w8, [x0, #0x135]
0x03C1A86C: 48000037  tbnz w8, #0, #0x3c1a874
0x03C1A870: ebefd497  bl #0x315681c
0x03C1A874: 0b99d597  bl #0x3180ca0
0x03C1A878: 681e40f9  ldr x8, [x19, #0x38]
0x03C1A87C: e1031faa  mov x1, xzr
0x03C1A880: f30300aa  mov x19, x0
0x03C1A884: 020140f9  ldr x2, [x8]
0x03C1A888: 030940f9  ldr x3, [x8, #0x10]
0x03C1A88C: 3e061794  bl #0x41dc184
0x03C1A890: e00313aa  mov x0, x19
0x03C1A894: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x03C1A898: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1A89C | ContextualizedECS.Query.Entities$$With<BoardTilePositionComponent, ProducerComponent, FeedingCombinationComponent, InteractionComponent>
; native signature: ContextualizedECS_Query_Entities_MatchDelegate_ValueTuple_Entity__T1__T2__T3__T4___o* ContextualizedECS_Query_Entities__With_BoardTilePositionComponent__ProducerComponent__FeedingCombinationComponent__InteractionComponent_ (const MethodInfo_3C1A89C* method);
; bytes=84 sha256=f447106b8823de74ed86d830f4f7c6b5153c6066e33ed3f0e8be0ccf896808a9 status=arm64_complete_bound indexed_start=True
0x03C1A89C: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x03C1A8A0: 081c40f9  ldr x8, [x0, #0x38]
0x03C1A8A4: f30300aa  mov x19, x0
0x03C1A8A8: 880000b5  cbnz x8, #0x3c1a8b8
0x03C1A8AC: e00313aa  mov x0, x19
0x03C1A8B0: f2efd497  bl #0x3156878
0x03C1A8B4: 681e40f9  ldr x8, [x19, #0x38]
0x03C1A8B8: 000540f9  ldr x0, [x8, #8]
0x03C1A8BC: 08d44439  ldrb w8, [x0, #0x135]
0x03C1A8C0: 48000037  tbnz w8, #0, #0x3c1a8c8
0x03C1A8C4: d6efd497  bl #0x315681c
0x03C1A8C8: f698d597  bl #0x3180ca0
0x03C1A8CC: 681e40f9  ldr x8, [x19, #0x38]
0x03C1A8D0: e1031faa  mov x1, xzr
0x03C1A8D4: f30300aa  mov x19, x0
0x03C1A8D8: 020140f9  ldr x2, [x8]
0x03C1A8DC: 030940f9  ldr x3, [x8, #0x10]
0x03C1A8E0: 8b061794  bl #0x41dc30c
0x03C1A8E4: e00313aa  mov x0, x19
0x03C1A8E8: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x03C1A8EC: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1A8F0 | ContextualizedECS.Query.Entities$$With<BoardTilePositionComponent, ProducerComponent, TimeCycleComponent, InteractionComponent>
; native signature: ContextualizedECS_Query_Entities_MatchDelegate_ValueTuple_Entity__T1__T2__T3__T4___o* ContextualizedECS_Query_Entities__With_BoardTilePositionComponent__ProducerComponent__TimeCycleComponent__InteractionComponent_ (const MethodInfo_3C1A8F0* method);
; bytes=84 sha256=8c449f307f35a2c593bb54b9c56a34de519afe8ee92e84029e0295531a0403b4 status=arm64_complete_bound indexed_start=True
0x03C1A8F0: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x03C1A8F4: 081c40f9  ldr x8, [x0, #0x38]
0x03C1A8F8: f30300aa  mov x19, x0
0x03C1A8FC: 880000b5  cbnz x8, #0x3c1a90c
0x03C1A900: e00313aa  mov x0, x19
0x03C1A904: ddefd497  bl #0x3156878
0x03C1A908: 681e40f9  ldr x8, [x19, #0x38]
0x03C1A90C: 000540f9  ldr x0, [x8, #8]
0x03C1A910: 08d44439  ldrb w8, [x0, #0x135]
0x03C1A914: 48000037  tbnz w8, #0, #0x3c1a91c
0x03C1A918: c1efd497  bl #0x315681c
0x03C1A91C: e198d597  bl #0x3180ca0
0x03C1A920: 681e40f9  ldr x8, [x19, #0x38]
0x03C1A924: e1031faa  mov x1, xzr
0x03C1A928: f30300aa  mov x19, x0
0x03C1A92C: 020140f9  ldr x2, [x8]
0x03C1A930: 030940f9  ldr x3, [x8, #0x10]
0x03C1A934: d8061794  bl #0x41dc494
0x03C1A938: e00313aa  mov x0, x19
0x03C1A93C: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x03C1A940: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1A944 | ContextualizedECS.Query.Entities$$With<BoardTilePositionComponent, ToolSpawningComponent, PendingInteractionComponent, InteractionComponent>
; native signature: ContextualizedECS_Query_Entities_MatchDelegate_ValueTuple_Entity__T1__T2__T3__T4___o* ContextualizedECS_Query_Entities__With_BoardTilePositionComponent__ToolSpawningComponent__PendingInteractionComponent__InteractionComponent_ (const MethodInfo_3C1A944* method);
; bytes=84 sha256=ab2eb759982bc3ef5e07566311bca0dce9444c64fc8669243be16083a4985047 status=arm64_complete_bound indexed_start=True
0x03C1A944: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x03C1A948: 081c40f9  ldr x8, [x0, #0x38]
0x03C1A94C: f30300aa  mov x19, x0
0x03C1A950: 880000b5  cbnz x8, #0x3c1a960
0x03C1A954: e00313aa  mov x0, x19
0x03C1A958: c8efd497  bl #0x3156878
0x03C1A95C: 681e40f9  ldr x8, [x19, #0x38]
0x03C1A960: 000540f9  ldr x0, [x8, #8]
0x03C1A964: 08d44439  ldrb w8, [x0, #0x135]
0x03C1A968: 48000037  tbnz w8, #0, #0x3c1a970
0x03C1A96C: acefd497  bl #0x315681c
0x03C1A970: cc98d597  bl #0x3180ca0
0x03C1A974: 681e40f9  ldr x8, [x19, #0x38]
0x03C1A978: e1031faa  mov x1, xzr
0x03C1A97C: f30300aa  mov x19, x0
0x03C1A980: 020140f9  ldr x2, [x8]
0x03C1A984: 030940f9  ldr x3, [x8, #0x10]
0x03C1A988: 59071794  bl #0x41dc6ec
0x03C1A98C: e00313aa  mov x0, x19
0x03C1A990: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x03C1A994: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1A998 | ContextualizedECS.Query.Entities$$With<ExpendableComponent, BoardTilePositionComponent, IdComponent, InteractionComponent>
; native signature: ContextualizedECS_Query_Entities_MatchDelegate_ValueTuple_Entity__T1__T2__T3__T4___o* ContextualizedECS_Query_Entities__With_ExpendableComponent__BoardTilePositionComponent__IdComponent__InteractionComponent_ (const MethodInfo_3C1A998* method);
; bytes=84 sha256=d9b71915f649db5a507a4848718770a2055cfeaf55b2961ff2a184b952b27db0 status=arm64_complete_bound indexed_start=True
0x03C1A998: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x03C1A99C: 081c40f9  ldr x8, [x0, #0x38]
0x03C1A9A0: f30300aa  mov x19, x0
0x03C1A9A4: 880000b5  cbnz x8, #0x3c1a9b4
0x03C1A9A8: e00313aa  mov x0, x19
0x03C1A9AC: b3efd497  bl #0x3156878
0x03C1A9B0: 681e40f9  ldr x8, [x19, #0x38]
0x03C1A9B4: 000540f9  ldr x0, [x8, #8]
0x03C1A9B8: 08d44439  ldrb w8, [x0, #0x135]
0x03C1A9BC: 48000037  tbnz w8, #0, #0x3c1a9c4
0x03C1A9C0: 97efd497  bl #0x315681c
0x03C1A9C4: b798d597  bl #0x3180ca0
0x03C1A9C8: 681e40f9  ldr x8, [x19, #0x38]
0x03C1A9CC: e1031faa  mov x1, xzr
0x03C1A9D0: f30300aa  mov x19, x0
0x03C1A9D4: 020140f9  ldr x2, [x8]
0x03C1A9D8: 030940f9  ldr x3, [x8, #0x10]
0x03C1A9DC: a6071794  bl #0x41dc874
0x03C1A9E0: e00313aa  mov x0, x19
0x03C1A9E4: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x03C1A9E8: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1A9EC | ContextualizedECS.Query.Entities$$With<ExpendableComponent, BoardTilePositionComponent, TimeDurationComponent, TimeLimitedActivationComponent>
; native signature: ContextualizedECS_Query_Entities_MatchDelegate_ValueTuple_Entity__T1__T2__T3__T4___o* ContextualizedECS_Query_Entities__With_ExpendableComponent__BoardTilePositionComponent__TimeDurationComponent__TimeLimitedActivationComponent_ (const MethodInfo_3C1A9EC* method);
; bytes=84 sha256=17581bb3d8af8813d5addc6165c310bc2d8e52fd1bad1ba1b59188730c692f3c status=arm64_complete_bound indexed_start=True
0x03C1A9EC: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x03C1A9F0: 081c40f9  ldr x8, [x0, #0x38]
0x03C1A9F4: f30300aa  mov x19, x0
0x03C1A9F8: 880000b5  cbnz x8, #0x3c1aa08
0x03C1A9FC: e00313aa  mov x0, x19
0x03C1AA00: 9eefd497  bl #0x3156878
0x03C1AA04: 681e40f9  ldr x8, [x19, #0x38]
0x03C1AA08: 000540f9  ldr x0, [x8, #8]
0x03C1AA0C: 08d44439  ldrb w8, [x0, #0x135]
0x03C1AA10: 48000037  tbnz w8, #0, #0x3c1aa18
0x03C1AA14: 82efd497  bl #0x315681c
0x03C1AA18: a298d597  bl #0x3180ca0
0x03C1AA1C: 681e40f9  ldr x8, [x19, #0x38]
0x03C1AA20: e1031faa  mov x1, xzr
0x03C1AA24: f30300aa  mov x19, x0
0x03C1AA28: 020140f9  ldr x2, [x8]
0x03C1AA2C: 030940f9  ldr x3, [x8, #0x10]
0x03C1AA30: f3071794  bl #0x41dc9fc
0x03C1AA34: e00313aa  mov x0, x19
0x03C1AA38: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x03C1AA3C: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1AA40 | ContextualizedECS.Query.Entities$$With<IdComponent, BoardTilePositionComponent, ImmediateToolComponent, PendingInteractionComponent>
; native signature: ContextualizedECS_Query_Entities_MatchDelegate_ValueTuple_Entity__T1__T2__T3__T4___o* ContextualizedECS_Query_Entities__With_IdComponent__BoardTilePositionComponent__ImmediateToolComponent__PendingInteractionComponent_ (const MethodInfo_3C1AA40* method);
; bytes=84 sha256=031a1049f5ab72c2867a4c1a15baf3cf5af3889bbbc7f8d5538d63bb2bed7508 status=arm64_complete_bound indexed_start=True
0x03C1AA40: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x03C1AA44: 081c40f9  ldr x8, [x0, #0x38]
0x03C1AA48: f30300aa  mov x19, x0
0x03C1AA4C: 880000b5  cbnz x8, #0x3c1aa5c
0x03C1AA50: e00313aa  mov x0, x19
0x03C1AA54: 89efd497  bl #0x3156878
0x03C1AA58: 681e40f9  ldr x8, [x19, #0x38]
0x03C1AA5C: 000540f9  ldr x0, [x8, #8]
0x03C1AA60: 08d44439  ldrb w8, [x0, #0x135]
0x03C1AA64: 48000037  tbnz w8, #0, #0x3c1aa6c
0x03C1AA68: 6defd497  bl #0x315681c
0x03C1AA6C: 8d98d597  bl #0x3180ca0
0x03C1AA70: 681e40f9  ldr x8, [x19, #0x38]
0x03C1AA74: e1031faa  mov x1, xzr
0x03C1AA78: f30300aa  mov x19, x0
0x03C1AA7C: 020140f9  ldr x2, [x8]
0x03C1AA80: 030940f9  ldr x3, [x8, #0x10]
0x03C1AA84: 40081794  bl #0x41dcb84
0x03C1AA88: e00313aa  mov x0, x19
0x03C1AA8C: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x03C1AA90: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1AA94 | ContextualizedECS.Query.Entities$$With<IdComponent, InteractionComponent, BoardTilePositionComponent, ProducerComponent>
; native signature: ContextualizedECS_Query_Entities_MatchDelegate_ValueTuple_Entity__T1__T2__T3__T4___o* ContextualizedECS_Query_Entities__With_IdComponent__InteractionComponent__BoardTilePositionComponent__ProducerComponent_ (const MethodInfo_3C1AA94* method);
; bytes=84 sha256=aff927058ab99635ec3adb5d19e8cae0dbfc5d101f85ea6337c10bed701be8bb status=arm64_complete_bound indexed_start=True
0x03C1AA94: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x03C1AA98: 081c40f9  ldr x8, [x0, #0x38]
0x03C1AA9C: f30300aa  mov x19, x0
0x03C1AAA0: 880000b5  cbnz x8, #0x3c1aab0
0x03C1AAA4: e00313aa  mov x0, x19
0x03C1AAA8: 74efd497  bl #0x3156878
0x03C1AAAC: 681e40f9  ldr x8, [x19, #0x38]
0x03C1AAB0: 000540f9  ldr x0, [x8, #8]
0x03C1AAB4: 08d44439  ldrb w8, [x0, #0x135]
0x03C1AAB8: 48000037  tbnz w8, #0, #0x3c1aac0
0x03C1AABC: 58efd497  bl #0x315681c
0x03C1AAC0: 7898d597  bl #0x3180ca0
0x03C1AAC4: 681e40f9  ldr x8, [x19, #0x38]
0x03C1AAC8: e1031faa  mov x1, xzr
0x03C1AACC: f30300aa  mov x19, x0
0x03C1AAD0: 020140f9  ldr x2, [x8]
0x03C1AAD4: 030940f9  ldr x3, [x8, #0x10]
0x03C1AAD8: 8d081794  bl #0x41dcd0c
0x03C1AADC: e00313aa  mov x0, x19
0x03C1AAE0: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x03C1AAE4: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1AAE8 | ContextualizedECS.Query.Entities$$With<__Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType>
; native signature: ContextualizedECS_Query_Entities_MatchDelegate_ValueTuple_Entity__T1__T2__T3__T4___o* ContextualizedECS_Query_Entities__With___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType_ (const MethodInfo_3C1AAE8* method);
; bytes=88 sha256=5456dbb1ac68eab0ca9295d29b7a2e5c48c224d0199678cc1f0097905cc27fe2 status=arm64_complete_bound indexed_start=True
0x03C1AAE8: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x03C1AAEC: 081c40f9  ldr x8, [x0, #0x38]
0x03C1AAF0: f30300aa  mov x19, x0
0x03C1AAF4: 880000b5  cbnz x8, #0x3c1ab04
0x03C1AAF8: e00313aa  mov x0, x19
0x03C1AAFC: 5fefd497  bl #0x3156878
0x03C1AB00: 681e40f9  ldr x8, [x19, #0x38]
0x03C1AB04: 000540f9  ldr x0, [x8, #8]
0x03C1AB08: 08d44439  ldrb w8, [x0, #0x135]
0x03C1AB0C: 48000037  tbnz w8, #0, #0x3c1ab14
0x03C1AB10: 43efd497  bl #0x315681c
0x03C1AB14: 6398d597  bl #0x3180ca0
0x03C1AB18: 681e40f9  ldr x8, [x19, #0x38]
0x03C1AB1C: e1031faa  mov x1, xzr
0x03C1AB20: f30300aa  mov x19, x0
0x03C1AB24: 030940f9  ldr x3, [x8, #0x10]
0x03C1AB28: 020140f9  ldr x2, [x8]
0x03C1AB2C: 690040f9  ldr x9, [x3]
0x03C1AB30: 20013fd6  blr x9
0x03C1AB34: e00313aa  mov x0, x19
0x03C1AB38: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x03C1AB3C: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C17210 | ContextualizedECS.Query.Entities$$MatchMethod<BoardTilePositionComponent, BornComponent, IdComponent, ItemMergedComponent>
; native signature: bool ContextualizedECS_Query_Entities__MatchMethod_BoardTilePositionComponent__BornComponent__IdComponent__ItemMergedComponent_ (ContextualizedECS_Entity_o* entity, System_ValueTuple_Entity__T1__T2__T3__T4__o* result, const MethodInfo_3C17210* method);
; bytes=324 sha256=3aaebacebe7a4001d5c4b0673df5d9fbd157524b9a8f12cf8665275f59c469ac status=arm64_complete_bound indexed_start=True
0x03C17210: ffc304d1  sub sp, sp, #0x130
0x03C17214: fd8300f9  str x29, [sp, #0x100]
0x03C17218: fe5711a9  stp x30, x21, [sp, #0x110]
0x03C1721C: f44f12a9  stp x20, x19, [sp, #0x120]
0x03C17220: 481c40f9  ldr x8, [x2, #0x38]
0x03C17224: f50302aa  mov x21, x2
0x03C17228: f30301aa  mov x19, x1
0x03C1722C: f40300aa  mov x20, x0
0x03C17230: 680000b5  cbnz x8, #0x3c1723c
0x03C17234: e00315aa  mov x0, x21
0x03C17238: 90fdd497  bl #0x3156878
0x03C1723C: 00e4006f  movi v0.2d, #0000000000000000
0x03C17240: ff0b01b9  str wzr, [sp, #0x108]
0x03C17244: ff6700f9  str xzr, [sp, #0xc8]
0x03C17248: ff230239  strb wzr, [sp, #0x88]
0x03C1724C: e00305ad  stp q0, q0, [sp, #0xa0]
0x03C17250: e027803d  str q0, [sp, #0x90]
0x03C17254: 608201ad  stp q0, q0, [x19, #0x30]
0x03C17258: 608200ad  stp q0, q0, [x19, #0x10]
0x03C1725C: 6002803d  str q0, [x19]
0x03C17260: 940700b4  cbz x20, #0x3c17350
0x03C17264: a81e40f9  ldr x8, [x21, #0x38]
0x03C17268: e1230491  add x1, sp, #0x108
0x03C1726C: e00314aa  mov x0, x20
0x03C17270: 020940f9  ldr x2, [x8, #0x10]
0x03C17274: 1c1c0094  bl #0x3c1e2e4
0x03C17278: 00060036  tbz w0, #0, #0x3c17338
0x03C1727C: a81e40f9  ldr x8, [x21, #0x38]
0x03C17280: e1230391  add x1, sp, #0xc8
0x03C17284: e00314aa  mov x0, x20
0x03C17288: 021140f9  ldr x2, [x8, #0x20]
0x03C1728C: 591c0094  bl #0x3c1e3f0
0x03C17290: 40050036  tbz w0, #0, #0x3c17338
0x03C17294: a81e40f9  ldr x8, [x21, #0x38]
0x03C17298: e1430291  add x1, sp, #0x90
0x03C1729C: e00314aa  mov x0, x20
0x03C172A0: 021940f9  ldr x2, [x8, #0x30]
0x03C172A4: ca1e0094  bl #0x3c1edcc
0x03C172A8: 80040036  tbz w0, #0, #0x3c17338
0x03C172AC: a81e40f9  ldr x8, [x21, #0x38]
0x03C172B0: e1230291  add x1, sp, #0x88
0x03C172B4: e00314aa  mov x0, x20
0x03C172B8: 022140f9  ldr x2, [x8, #0x40]
0x03C172BC: e71f0094  bl #0x3c1f258
0x03C172C0: c0030036  tbz w0, #0, #0x3c17338
0x03C172C4: e08744ad  ldp q0, q1, [sp, #0x90]
0x03C172C8: e22fc03d  ldr q2, [sp, #0xb0]
0x03C172CC: 03e4006f  movi v3.2d, #0000000000000000
0x03C172D0: e30f03ad  stp q3, q3, [sp, #0x60]
0x03C172D4: e30f02ad  stp q3, q3, [sp, #0x40]
0x03C172D8: e00700ad  stp q0, q1, [sp]
0x03C172DC: e20f01ad  stp q2, q3, [sp, #0x20]
0x03C172E0: a81e40f9  ldr x8, [x21, #0x38]
0x03C172E4: e20b41b9  ldr w2, [sp, #0x108]
0x03C172E8: e36740f9  ldr x3, [sp, #0xc8]
0x03C172EC: e5234239  ldrb w5, [sp, #0x88]
0x03C172F0: e00740ad  ldp q0, q1, [sp]
0x03C172F4: e20bc03d  ldr q2, [sp, #0x20]
0x03C172F8: 062940f9  ldr x6, [x8, #0x50]
0x03C172FC: e0c30091  add x0, sp, #0x30
0x03C17300: e4430391  add x4, sp, #0xd0
0x03C17304: e10314aa  mov x1, x20
0x03C17308: e08706ad  stp q0, q1, [sp, #0xd0]
0x03C1730C: e23f803d  str q2, [sp, #0xf0]
0x03C17310: 24053094  bl #0x48187a0
0x03C17314: e1c30091  add x1, sp, #0x30
0x03C17318: 020a8052  movz w2, #0x50
0x03C1731C: e00313aa  mov x0, x19
0x03C17320: 94ddd694  bl #0x71ce970
0x03C17324: e00313aa  mov x0, x19
0x03C17328: e1031faa  mov x1, xzr
0x03C1732C: a6a5d597  bl #0x31809c4
0x03C17330: 20008052  movz w0, #0x1
0x03C17334: 02000014  b #0x3c1733c
0x03C17338: e0031f2a  mov w0, wzr
0x03C1733C: f44f52a9  ldp x20, x19, [sp, #0x120]
0x03C17340: fe5751a9  ldp x30, x21, [sp, #0x110]
0x03C17344: fd8340f9  ldr x29, [sp, #0x100]
0x03C17348: ffc30491  add sp, sp, #0x130
0x03C1734C: c0035fd6  ret
0x03C17350: 57a6d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C17354 | ContextualizedECS.Query.Entities$$MatchMethod<BoardTilePositionComponent, IdComponent, BornComponent, ItemMergedComponent>
; native signature: bool ContextualizedECS_Query_Entities__MatchMethod_BoardTilePositionComponent__IdComponent__BornComponent__ItemMergedComponent_ (ContextualizedECS_Entity_o* entity, System_ValueTuple_Entity__T1__T2__T3__T4__o* result, const MethodInfo_3C17354* method);
; bytes=324 sha256=ad55f4cbd0734d39f1cc889f46fd45633a65653f81c483490fac4a4fe3d6962e status=arm64_complete_bound indexed_start=True
0x03C17354: ff8304d1  sub sp, sp, #0x120
0x03C17358: fd7b00f9  str x29, [sp, #0xf0]
0x03C1735C: fe5710a9  stp x30, x21, [sp, #0x100]
0x03C17360: f44f11a9  stp x20, x19, [sp, #0x110]
0x03C17364: 481c40f9  ldr x8, [x2, #0x38]
0x03C17368: f50302aa  mov x21, x2
0x03C1736C: f30301aa  mov x19, x1
0x03C17370: f40300aa  mov x20, x0
0x03C17374: 680000b5  cbnz x8, #0x3c17380
0x03C17378: e00315aa  mov x0, x21
0x03C1737C: 3ffdd497  bl #0x3156878
0x03C17380: 00e4006f  movi v0.2d, #0000000000000000
0x03C17384: fffb00b9  str wzr, [sp, #0xf8]
0x03C17388: ff4700f9  str xzr, [sp, #0x88]
0x03C1738C: ff030239  strb wzr, [sp, #0x80]
0x03C17390: e00305ad  stp q0, q0, [sp, #0xa0]
0x03C17394: e027803d  str q0, [sp, #0x90]
0x03C17398: 608201ad  stp q0, q0, [x19, #0x30]
0x03C1739C: 608200ad  stp q0, q0, [x19, #0x10]
0x03C173A0: 6002803d  str q0, [x19]
0x03C173A4: 940700b4  cbz x20, #0x3c17494
0x03C173A8: a81e40f9  ldr x8, [x21, #0x38]
0x03C173AC: e1e30391  add x1, sp, #0xf8
0x03C173B0: e00314aa  mov x0, x20
0x03C173B4: 020940f9  ldr x2, [x8, #0x10]
0x03C173B8: cb1b0094  bl #0x3c1e2e4
0x03C173BC: 00060036  tbz w0, #0, #0x3c1747c
0x03C173C0: a81e40f9  ldr x8, [x21, #0x38]
0x03C173C4: e1430291  add x1, sp, #0x90
0x03C173C8: e00314aa  mov x0, x20
0x03C173CC: 021140f9  ldr x2, [x8, #0x20]
0x03C173D0: 7f1e0094  bl #0x3c1edcc
0x03C173D4: 40050036  tbz w0, #0, #0x3c1747c
0x03C173D8: a81e40f9  ldr x8, [x21, #0x38]
0x03C173DC: e1230291  add x1, sp, #0x88
0x03C173E0: e00314aa  mov x0, x20
0x03C173E4: 021940f9  ldr x2, [x8, #0x30]
0x03C173E8: 021c0094  bl #0x3c1e3f0
0x03C173EC: 80040036  tbz w0, #0, #0x3c1747c
0x03C173F0: a81e40f9  ldr x8, [x21, #0x38]
0x03C173F4: e1030291  add x1, sp, #0x80
0x03C173F8: e00314aa  mov x0, x20
0x03C173FC: 022140f9  ldr x2, [x8, #0x40]
0x03C17400: 961f0094  bl #0x3c1f258
0x03C17404: c0030036  tbz w0, #0, #0x3c1747c
0x03C17408: e08744ad  ldp q0, q1, [sp, #0x90]
0x03C1740C: e22fc03d  ldr q2, [sp, #0xb0]
0x03C17410: 03e4006f  movi v3.2d, #0000000000000000
0x03C17414: e30f03ad  stp q3, q3, [sp, #0x60]
0x03C17418: e30f02ad  stp q3, q3, [sp, #0x40]
0x03C1741C: e00700ad  stp q0, q1, [sp]
0x03C17420: e20f01ad  stp q2, q3, [sp, #0x20]
0x03C17424: a81e40f9  ldr x8, [x21, #0x38]
0x03C17428: e2fb40b9  ldr w2, [sp, #0xf8]
0x03C1742C: e44740f9  ldr x4, [sp, #0x88]
0x03C17430: e5034239  ldrb w5, [sp, #0x80]
0x03C17434: e00740ad  ldp q0, q1, [sp]
0x03C17438: e20bc03d  ldr q2, [sp, #0x20]
0x03C1743C: 062940f9  ldr x6, [x8, #0x50]
0x03C17440: e0c30091  add x0, sp, #0x30
0x03C17444: e3030391  add x3, sp, #0xc0
0x03C17448: e10314aa  mov x1, x20
0x03C1744C: e00706ad  stp q0, q1, [sp, #0xc0]
0x03C17450: e23b803d  str q2, [sp, #0xe0]
0x03C17454: e40b3094  bl #0x481a3e4
0x03C17458: e1c30091  add x1, sp, #0x30
0x03C1745C: 020a8052  movz w2, #0x50
0x03C17460: e00313aa  mov x0, x19
0x03C17464: 43ddd694  bl #0x71ce970
0x03C17468: e00313aa  mov x0, x19
0x03C1746C: e1031faa  mov x1, xzr
0x03C17470: 55a5d597  bl #0x31809c4
0x03C17474: 20008052  movz w0, #0x1
0x03C17478: 02000014  b #0x3c17480
0x03C1747C: e0031f2a  mov w0, wzr
0x03C17480: f44f51a9  ldp x20, x19, [sp, #0x110]
0x03C17484: fe5750a9  ldp x30, x21, [sp, #0x100]
0x03C17488: fd7b40f9  ldr x29, [sp, #0xf0]
0x03C1748C: ff830491  add sp, sp, #0x120
0x03C17490: c0035fd6  ret
0x03C17494: 06a6d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C17498 | ContextualizedECS.Query.Entities$$MatchMethod<BoardTilePositionComponent, IdComponent, DynamicItemConfigComponent, PendingInteractionComponent>
; native signature: bool ContextualizedECS_Query_Entities__MatchMethod_BoardTilePositionComponent__IdComponent__DynamicItemConfigComponent__PendingInteractionComponent_ (ContextualizedECS_Entity_o* entity, System_ValueTuple_Entity__T1__T2__T3__T4__o* result, const MethodInfo_3C17498* method);
; bytes=372 sha256=082b61f6bc66e46e31e24c3ee66b868a959a906355d799beea520572b6fd116d status=arm64_complete_bound indexed_start=True
0x03C17498: ff4306d1  sub sp, sp, #0x190
0x03C1749C: fdb300f9  str x29, [sp, #0x160]
0x03C174A0: fe5717a9  stp x30, x21, [sp, #0x170]
0x03C174A4: f44f18a9  stp x20, x19, [sp, #0x180]
0x03C174A8: 481c40f9  ldr x8, [x2, #0x38]
0x03C174AC: f50302aa  mov x21, x2
0x03C174B0: f30301aa  mov x19, x1
0x03C174B4: f40300aa  mov x20, x0
0x03C174B8: 680000b5  cbnz x8, #0x3c174c4
0x03C174BC: e00315aa  mov x0, x21
0x03C174C0: eefcd497  bl #0x3156878
0x03C174C4: 00e4006f  movi v0.2d, #0000000000000000
0x03C174C8: ff6b01b9  str wzr, [sp, #0x168]
0x03C174CC: ffff0ca9  stp xzr, xzr, [sp, #0xc8]
0x03C174D0: ff6f00f9  str xzr, [sp, #0xd8]
0x03C174D4: ffff0ba9  stp xzr, xzr, [sp, #0xb8]
0x03C174D8: e08307ad  stp q0, q0, [sp, #0xf0]
0x03C174DC: e03b803d  str q0, [sp, #0xe0]
0x03C174E0: 7f3200f9  str xzr, [x19, #0x60]
0x03C174E4: 600202ad  stp q0, q0, [x19, #0x40]
0x03C174E8: 600201ad  stp q0, q0, [x19, #0x20]
0x03C174EC: 600200ad  stp q0, q0, [x19]
0x03C174F0: d40800b4  cbz x20, #0x3c17608
0x03C174F4: a81e40f9  ldr x8, [x21, #0x38]
0x03C174F8: e1a30591  add x1, sp, #0x168
0x03C174FC: e00314aa  mov x0, x20
0x03C17500: 020940f9  ldr x2, [x8, #0x10]
0x03C17504: 781b0094  bl #0x3c1e2e4
0x03C17508: 40070036  tbz w0, #0, #0x3c175f0
0x03C1750C: a81e40f9  ldr x8, [x21, #0x38]
0x03C17510: e1830391  add x1, sp, #0xe0
0x03C17514: e00314aa  mov x0, x20
0x03C17518: 021140f9  ldr x2, [x8, #0x20]
0x03C1751C: 2c1e0094  bl #0x3c1edcc
0x03C17520: 80060036  tbz w0, #0, #0x3c175f0
0x03C17524: a81e40f9  ldr x8, [x21, #0x38]
0x03C17528: e1230391  add x1, sp, #0xc8
0x03C1752C: e00314aa  mov x0, x20
0x03C17530: 021940f9  ldr x2, [x8, #0x30]
0x03C17534: 4d1d0094  bl #0x3c1ea68
0x03C17538: c0050036  tbz w0, #0, #0x3c175f0
0x03C1753C: a81e40f9  ldr x8, [x21, #0x38]
0x03C17540: e1e30291  add x1, sp, #0xb8
0x03C17544: e00314aa  mov x0, x20
0x03C17548: 022140f9  ldr x2, [x8, #0x40]
0x03C1754C: 52200094  bl #0x3c1f694
0x03C17550: 00050036  tbz w0, #0, #0x3c175f0
0x03C17554: 03e4006f  movi v3.2d, #0000000000000000
0x03C17558: e00747ad  ldp q0, q1, [sp, #0xe0]
0x03C1755C: e243c03d  ldr q2, [sp, #0x100]
0x03C17560: e38f04ad  stp q3, q3, [sp, #0x90]
0x03C17564: e38f03ad  stp q3, q3, [sp, #0x70]
0x03C17568: e38f02ad  stp q3, q3, [sp, #0x50]
0x03C1756C: e383cc3c  ldur q3, [sp, #0xc8]
0x03C17570: e86f40f9  ldr x8, [sp, #0xd8]
0x03C17574: ff5b00f9  str xzr, [sp, #0xb0]
0x03C17578: e00701ad  stp q0, q1, [sp, #0x20]
0x03C1757C: e213803d  str q2, [sp, #0x40]
0x03C17580: e303803d  str q3, [sp]
0x03C17584: e80b00f9  str x8, [sp, #0x10]
0x03C17588: a81e40f9  ldr x8, [x21, #0x38]
0x03C1758C: e00741ad  ldp q0, q1, [sp, #0x20]
0x03C17590: e26b41b9  ldr w2, [sp, #0x168]
0x03C17594: e213c03d  ldr q2, [sp, #0x40]
0x03C17598: 072940f9  ldr x7, [x8, #0x50]
0x03C1759C: e08709ad  stp q0, q1, [sp, #0x130]
0x03C175A0: e003c03d  ldr q0, [sp]
0x03C175A4: e80b40f9  ldr x8, [sp, #0x10]
0x03C175A8: e59b4ba9  ldp x5, x6, [sp, #0xb8]
0x03C175AC: e0430191  add x0, sp, #0x50
0x03C175B0: e3c30491  add x3, sp, #0x130
0x03C175B4: e4430491  add x4, sp, #0x110
0x03C175B8: e10314aa  mov x1, x20
0x03C175BC: e257803d  str q2, [sp, #0x150]
0x03C175C0: e047803d  str q0, [sp, #0x110]
0x03C175C4: e89300f9  str x8, [sp, #0x120]
0x03C175C8: b2123094  bl #0x481c090
0x03C175CC: e1430191  add x1, sp, #0x50
0x03C175D0: 020d8052  movz w2, #0x68
0x03C175D4: e00313aa  mov x0, x19
0x03C175D8: e6dcd694  bl #0x71ce970
0x03C175DC: e00313aa  mov x0, x19
0x03C175E0: e1031faa  mov x1, xzr
0x03C175E4: f8a4d597  bl #0x31809c4
0x03C175E8: 20008052  movz w0, #0x1
0x03C175EC: 02000014  b #0x3c175f4
0x03C175F0: e0031f2a  mov w0, wzr
0x03C175F4: f44f58a9  ldp x20, x19, [sp, #0x180]
0x03C175F8: fe5757a9  ldp x30, x21, [sp, #0x170]
0x03C175FC: fdb340f9  ldr x29, [sp, #0x160]
0x03C17600: ff430691  add sp, sp, #0x190
0x03C17604: c0035fd6  ret
0x03C17608: a9a5d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1760C | ContextualizedECS.Query.Entities$$MatchMethod<BoardTilePositionComponent, MergeComponent, IdComponent, PendingItemsCombinationComponent>
; native signature: bool ContextualizedECS_Query_Entities__MatchMethod_BoardTilePositionComponent__MergeComponent__IdComponent__PendingItemsCombinationComponent_ (ContextualizedECS_Entity_o* entity, System_ValueTuple_Entity__T1__T2__T3__T4__o* result, const MethodInfo_3C1760C* method);
; bytes=332 sha256=da21c51be0b30d83ac44ef687ba497b97698123ad47f07c10f6eb4d3bbf4a2c0 status=arm64_complete_bound indexed_start=True
0x03C1760C: ffc304d1  sub sp, sp, #0x130
0x03C17610: fd8300f9  str x29, [sp, #0x100]
0x03C17614: fe5711a9  stp x30, x21, [sp, #0x110]
0x03C17618: f44f12a9  stp x20, x19, [sp, #0x120]
0x03C1761C: 481c40f9  ldr x8, [x2, #0x38]
0x03C17620: f50302aa  mov x21, x2
0x03C17624: f30301aa  mov x19, x1
0x03C17628: f40300aa  mov x20, x0
0x03C1762C: 680000b5  cbnz x8, #0x3c17638
0x03C17630: e00315aa  mov x0, x21
0x03C17634: 91fcd497  bl #0x3156878
0x03C17638: 00e4006f  movi v0.2d, #0000000000000000
0x03C1763C: ff0b01b9  str wzr, [sp, #0x108]
0x03C17640: ff7f0ca9  stp xzr, xzr, [sp, #0xc0]
0x03C17644: ff230239  strb wzr, [sp, #0x88]
0x03C17648: e00305ad  stp q0, q0, [sp, #0xa0]
0x03C1764C: e027803d  str q0, [sp, #0x90]
0x03C17650: 7f2a00f9  str xzr, [x19, #0x50]
0x03C17654: 608201ad  stp q0, q0, [x19, #0x30]
0x03C17658: 608200ad  stp q0, q0, [x19, #0x10]
0x03C1765C: 6002803d  str q0, [x19]
0x03C17660: b40700b4  cbz x20, #0x3c17754
0x03C17664: a81e40f9  ldr x8, [x21, #0x38]
0x03C17668: e1230491  add x1, sp, #0x108
0x03C1766C: e00314aa  mov x0, x20
0x03C17670: 020940f9  ldr x2, [x8, #0x10]
0x03C17674: 1c1b0094  bl #0x3c1e2e4
0x03C17678: 20060036  tbz w0, #0, #0x3c1773c
0x03C1767C: a81e40f9  ldr x8, [x21, #0x38]
0x03C17680: e1030391  add x1, sp, #0xc0
0x03C17684: e00314aa  mov x0, x20
0x03C17688: 021140f9  ldr x2, [x8, #0x20]
0x03C1768C: bc1f0094  bl #0x3c1f57c
0x03C17690: 60050036  tbz w0, #0, #0x3c1773c
0x03C17694: a81e40f9  ldr x8, [x21, #0x38]
0x03C17698: e1430291  add x1, sp, #0x90
0x03C1769C: e00314aa  mov x0, x20
0x03C176A0: 021940f9  ldr x2, [x8, #0x30]
0x03C176A4: ca1d0094  bl #0x3c1edcc
0x03C176A8: a0040036  tbz w0, #0, #0x3c1773c
0x03C176AC: a81e40f9  ldr x8, [x21, #0x38]
0x03C176B0: e1230291  add x1, sp, #0x88
0x03C176B4: e00314aa  mov x0, x20
0x03C176B8: 022140f9  ldr x2, [x8, #0x40]
0x03C176BC: 3c200094  bl #0x3c1f7ac
0x03C176C0: e0030036  tbz w0, #0, #0x3c1773c
0x03C176C4: e08744ad  ldp q0, q1, [sp, #0x90]
0x03C176C8: e22fc03d  ldr q2, [sp, #0xb0]
0x03C176CC: 03e4006f  movi v3.2d, #0000000000000000
0x03C176D0: ff4300f9  str xzr, [sp, #0x80]
0x03C176D4: e30f03ad  stp q3, q3, [sp, #0x60]
0x03C176D8: e30f02ad  stp q3, q3, [sp, #0x40]
0x03C176DC: e00700ad  stp q0, q1, [sp]
0x03C176E0: e20f01ad  stp q2, q3, [sp, #0x20]
0x03C176E4: a81e40f9  ldr x8, [x21, #0x38]
0x03C176E8: e20b41b9  ldr w2, [sp, #0x108]
0x03C176EC: e3134ca9  ldp x3, x4, [sp, #0xc0]
0x03C176F0: e6234239  ldrb w6, [sp, #0x88]
0x03C176F4: e00740ad  ldp q0, q1, [sp]
0x03C176F8: e20bc03d  ldr q2, [sp, #0x20]
0x03C176FC: 072940f9  ldr x7, [x8, #0x50]
0x03C17700: e0c30091  add x0, sp, #0x30
0x03C17704: e5430391  add x5, sp, #0xd0
0x03C17708: e10314aa  mov x1, x20
0x03C1770C: e08706ad  stp q0, q1, [sp, #0xd0]
0x03C17710: e23f803d  str q2, [sp, #0xf0]
0x03C17714: d0193094  bl #0x481de54
0x03C17718: e1c30091  add x1, sp, #0x30
0x03C1771C: 020b8052  movz w2, #0x58
0x03C17720: e00313aa  mov x0, x19
0x03C17724: 93dcd694  bl #0x71ce970
0x03C17728: e00313aa  mov x0, x19
0x03C1772C: e1031faa  mov x1, xzr
0x03C17730: a5a4d597  bl #0x31809c4
0x03C17734: 20008052  movz w0, #0x1
0x03C17738: 02000014  b #0x3c17740
0x03C1773C: e0031f2a  mov w0, wzr
0x03C17740: f44f52a9  ldp x20, x19, [sp, #0x120]
0x03C17744: fe5751a9  ldp x30, x21, [sp, #0x110]
0x03C17748: fd8340f9  ldr x29, [sp, #0x100]
0x03C1774C: ffc30491  add sp, sp, #0x130
0x03C17750: c0035fd6  ret
0x03C17754: 56a5d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C17758 | ContextualizedECS.Query.Entities$$MatchMethod<BoardTilePositionComponent, ProducerComponent, FeedingCombinationComponent, InteractionComponent>
; native signature: bool ContextualizedECS_Query_Entities__MatchMethod_BoardTilePositionComponent__ProducerComponent__FeedingCombinationComponent__InteractionComponent_ (ContextualizedECS_Entity_o* entity, System_ValueTuple_Entity__T1__T2__T3__T4__o* result, const MethodInfo_3C17758* method);
; bytes=336 sha256=225e0969c3f3cd91b5026e494fceb35db4ffb7233279519097ead182d6cd5417 status=arm64_complete_bound indexed_start=True
0x03C17758: ff0306d1  sub sp, sp, #0x180
0x03C1775C: fdab00f9  str x29, [sp, #0x150]
0x03C17760: fe5716a9  stp x30, x21, [sp, #0x160]
0x03C17764: f44f17a9  stp x20, x19, [sp, #0x170]
0x03C17768: 481c40f9  ldr x8, [x2, #0x38]
0x03C1776C: f50302aa  mov x21, x2
0x03C17770: f30301aa  mov x19, x1
0x03C17774: f40300aa  mov x20, x0
0x03C17778: 680000b5  cbnz x8, #0x3c17784
0x03C1777C: e00315aa  mov x0, x21
0x03C17780: 3efcd497  bl #0x3156878
0x03C17784: 00e4006f  movi v0.2d, #0000000000000000
0x03C17788: ff5b01b9  str wzr, [sp, #0x158]
0x03C1778C: ff7f0da9  stp xzr, xzr, [sp, #0xd0]
0x03C17790: e00307ad  stp q0, q0, [sp, #0xe0]
0x03C17794: e08305ad  stp q0, q0, [sp, #0xb0]
0x03C17798: 600202ad  stp q0, q0, [x19, #0x40]
0x03C1779C: 600201ad  stp q0, q0, [x19, #0x20]
0x03C177A0: 600200ad  stp q0, q0, [x19]
0x03C177A4: 140800b4  cbz x20, #0x3c178a4
0x03C177A8: a81e40f9  ldr x8, [x21, #0x38]
0x03C177AC: e1630591  add x1, sp, #0x158
0x03C177B0: e00314aa  mov x0, x20
0x03C177B4: 020940f9  ldr x2, [x8, #0x10]
0x03C177B8: cb1a0094  bl #0x3c1e2e4
0x03C177BC: 80060036  tbz w0, #0, #0x3c1788c
0x03C177C0: a81e40f9  ldr x8, [x21, #0x38]
0x03C177C4: e1830391  add x1, sp, #0xe0
0x03C177C8: e00314aa  mov x0, x20
0x03C177CC: 021140f9  ldr x2, [x8, #0x20]
0x03C177D0: 3a200094  bl #0x3c1f8b8
0x03C177D4: c0050036  tbz w0, #0, #0x3c1788c
0x03C177D8: a81e40f9  ldr x8, [x21, #0x38]
0x03C177DC: e1630391  add x1, sp, #0xd8
0x03C177E0: e00314aa  mov x0, x20
0x03C177E4: 021940f9  ldr x2, [x8, #0x30]
0x03C177E8: 331d0094  bl #0x3c1ecb4
0x03C177EC: 00050036  tbz w0, #0, #0x3c1788c
0x03C177F0: a81e40f9  ldr x8, [x21, #0x38]
0x03C177F4: e1c30291  add x1, sp, #0xb0
0x03C177F8: e00314aa  mov x0, x20
0x03C177FC: 022140f9  ldr x2, [x8, #0x40]
0x03C17800: 061e0094  bl #0x3c1f018
0x03C17804: 40040036  tbz w0, #0, #0x3c1788c
0x03C17808: 02e4006f  movi v2.2d, #0000000000000000
0x03C1780C: e00747ad  ldp q0, q1, [sp, #0xe0]
0x03C17810: e28b04ad  stp q2, q2, [sp, #0x90]
0x03C17814: e28b03ad  stp q2, q2, [sp, #0x70]
0x03C17818: e28b02ad  stp q2, q2, [sp, #0x50]
0x03C1781C: e28f45ad  ldp q2, q3, [sp, #0xb0]
0x03C17820: e8134da9  ldp x8, x4, [sp, #0xd0]
0x03C17824: e08701ad  stp q0, q1, [sp, #0x30]
0x03C17828: e08741ad  ldp q0, q1, [sp, #0x30]
0x03C1782C: e20f00ad  stp q2, q3, [sp]
0x03C17830: e81300f9  str x8, [sp, #0x20]
0x03C17834: a81e40f9  ldr x8, [x21, #0x38]
0x03C17838: e25b41b9  ldr w2, [sp, #0x158]
0x03C1783C: e0430191  add x0, sp, #0x50
0x03C17840: e3c30491  add x3, sp, #0x130
0x03C17844: 062940f9  ldr x6, [x8, #0x50]
0x03C17848: e08709ad  stp q0, q1, [sp, #0x130]
0x03C1784C: e00740ad  ldp q0, q1, [sp]
0x03C17850: e81340f9  ldr x8, [sp, #0x20]
0x03C17854: e5030491  add x5, sp, #0x100
0x03C17858: e10314aa  mov x1, x20
0x03C1785C: e00708ad  stp q0, q1, [sp, #0x100]
0x03C17860: e89300f9  str x8, [sp, #0x120]
0x03C17864: ad203094  bl #0x481fb18
0x03C17868: e1430191  add x1, sp, #0x50
0x03C1786C: 020c8052  movz w2, #0x60
0x03C17870: e00313aa  mov x0, x19
0x03C17874: 3fdcd694  bl #0x71ce970
0x03C17878: e00313aa  mov x0, x19
0x03C1787C: e1031faa  mov x1, xzr
0x03C17880: 51a4d597  bl #0x31809c4
0x03C17884: 20008052  movz w0, #0x1
0x03C17888: 02000014  b #0x3c17890
0x03C1788C: e0031f2a  mov w0, wzr
0x03C17890: f44f57a9  ldp x20, x19, [sp, #0x170]
0x03C17894: fe5756a9  ldp x30, x21, [sp, #0x160]
0x03C17898: fdab40f9  ldr x29, [sp, #0x150]
0x03C1789C: ff030691  add sp, sp, #0x180
0x03C178A0: c0035fd6  ret
0x03C178A4: 02a5d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C178A8 | ContextualizedECS.Query.Entities$$MatchMethod<BoardTilePositionComponent, ProducerComponent, TimeCycleComponent, InteractionComponent>
; native signature: bool ContextualizedECS_Query_Entities__MatchMethod_BoardTilePositionComponent__ProducerComponent__TimeCycleComponent__InteractionComponent_ (ContextualizedECS_Entity_o* entity, System_ValueTuple_Entity__T1__T2__T3__T4__o* result, const MethodInfo_3C178A8* method);
; bytes=380 sha256=b8f8f88877abce5f88d4ef809b1f36fce1df3388ba1d0a11e18027677eb91481 status=arm64_complete_bound indexed_start=True
0x03C178A8: fd7bbda9  stp x29, x30, [sp, #-0x30]!
0x03C178AC: f65701a9  stp x22, x21, [sp, #0x10]
0x03C178B0: f44f02a9  stp x20, x19, [sp, #0x20]
0x03C178B4: ff4309d1  sub sp, sp, #0x250
0x03C178B8: 481c40f9  ldr x8, [x2, #0x38]
0x03C178BC: f50302aa  mov x21, x2
0x03C178C0: f30301aa  mov x19, x1
0x03C178C4: f40300aa  mov x20, x0
0x03C178C8: 680000b5  cbnz x8, #0x3c178d4
0x03C178CC: e00315aa  mov x0, x21
0x03C178D0: eafbd497  bl #0x3156878
0x03C178D4: 00e4006f  movi v0.2d, #0000000000000000
0x03C178D8: 02158052  movz w2, #0xa8
0x03C178DC: e00313aa  mov x0, x19
0x03C178E0: e1031f2a  mov w1, wzr
0x03C178E4: ffab01b9  str wzr, [sp, #0x1a8]
0x03C178E8: ff9300f9  str xzr, [sp, #0x120]
0x03C178EC: e0030cad  stp q0, q0, [sp, #0x180]
0x03C178F0: e0030bad  stp q0, q0, [sp, #0x160]
0x03C178F4: e0030aad  stp q0, q0, [sp, #0x140]
0x03C178F8: e04f803d  str q0, [sp, #0x130]
0x03C178FC: e00308ad  stp q0, q0, [sp, #0x100]
0x03C17900: 28dcd694  bl #0x71ce9a0
0x03C17904: f40800b4  cbz x20, #0x3c17a20
0x03C17908: a81e40f9  ldr x8, [x21, #0x38]
0x03C1790C: e1a30691  add x1, sp, #0x1a8
0x03C17910: e00314aa  mov x0, x20
0x03C17914: 020940f9  ldr x2, [x8, #0x10]
0x03C17918: 731a0094  bl #0x3c1e2e4
0x03C1791C: 60070036  tbz w0, #0, #0x3c17a08
0x03C17920: a81e40f9  ldr x8, [x21, #0x38]
0x03C17924: e1030691  add x1, sp, #0x180
0x03C17928: e00314aa  mov x0, x20
0x03C1792C: 021140f9  ldr x2, [x8, #0x20]
0x03C17930: e21f0094  bl #0x3c1f8b8
0x03C17934: a0060036  tbz w0, #0, #0x3c17a08
0x03C17938: a81e40f9  ldr x8, [x21, #0x38]
0x03C1793C: e1c30491  add x1, sp, #0x130
0x03C17940: e00314aa  mov x0, x20
0x03C17944: 021940f9  ldr x2, [x8, #0x30]
0x03C17948: af200094  bl #0x3c1fc04
0x03C1794C: e0050036  tbz w0, #0, #0x3c17a08
0x03C17950: a81e40f9  ldr x8, [x21, #0x38]
0x03C17954: e1030491  add x1, sp, #0x100
0x03C17958: e00314aa  mov x0, x20
0x03C1795C: 022140f9  ldr x2, [x8, #0x40]
0x03C17960: ae1d0094  bl #0x3c1f018
0x03C17964: 20050036  tbz w0, #0, #0x3c17a08
0x03C17968: e0074cad  ldp q0, q1, [sp, #0x180]
0x03C1796C: e20f48ad  ldp q2, q3, [sp, #0x100]
0x03C17970: e89340f9  ldr x8, [sp, #0x120]
0x03C17974: f6ab41b9  ldr w22, [sp, #0x1a8]
0x03C17978: e0630191  add x0, sp, #0x58
0x03C1797C: 02158052  movz w2, #0xa8
0x03C17980: e1031f2a  mov w1, wzr
0x03C17984: e08701ad  stp q0, q1, [sp, #0x30]
0x03C17988: e20f00ad  stp q2, q3, [sp]
0x03C1798C: e81300f9  str x8, [sp, #0x20]
0x03C17990: 04dcd694  bl #0x71ce9a0
0x03C17994: a81e40f9  ldr x8, [x21, #0x38]
0x03C17998: e08741ad  ldp q0, q1, [sp, #0x30]
0x03C1799C: e0830791  add x0, sp, #0x1e0
0x03C179A0: e1c30491  add x1, sp, #0x130
0x03C179A4: 152940f9  ldr x21, [x8, #0x50]
0x03C179A8: 020a8052  movz w2, #0x50
0x03C179AC: e08711ad  stp q0, q1, [sp, #0x230]
0x03C179B0: f0dbd694  bl #0x71ce970
0x03C179B4: e00740ad  ldp q0, q1, [sp]
0x03C179B8: e81340f9  ldr x8, [sp, #0x20]
0x03C179BC: e0630191  add x0, sp, #0x58
0x03C179C0: e3c30891  add x3, sp, #0x230
0x03C179C4: e4830791  add x4, sp, #0x1e0
0x03C179C8: e5c30691  add x5, sp, #0x1b0
0x03C179CC: e10314aa  mov x1, x20
0x03C179D0: e20316aa  mov x2, x22
0x03C179D4: e60315aa  mov x6, x21
0x03C179D8: e0870dad  stp q0, q1, [sp, #0x1b0]
0x03C179DC: e8eb00f9  str x8, [sp, #0x1d0]
0x03C179E0: aa273094  bl #0x4821888
0x03C179E4: e1630191  add x1, sp, #0x58
0x03C179E8: 02158052  movz w2, #0xa8
0x03C179EC: e00313aa  mov x0, x19
0x03C179F0: e0dbd694  bl #0x71ce970
0x03C179F4: e00313aa  mov x0, x19
0x03C179F8: e1031faa  mov x1, xzr
0x03C179FC: f2a3d597  bl #0x31809c4
0x03C17A00: 20008052  movz w0, #0x1
0x03C17A04: 02000014  b #0x3c17a0c
0x03C17A08: e0031f2a  mov w0, wzr
0x03C17A0C: ff430991  add sp, sp, #0x250
0x03C17A10: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03C17A14: f65741a9  ldp x22, x21, [sp, #0x10]
0x03C17A18: fd7bc3a8  ldp x29, x30, [sp], #0x30
0x03C17A1C: c0035fd6  ret
0x03C17A20: a3a4d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C17A24 | ContextualizedECS.Query.Entities$$MatchMethod<BoardTilePositionComponent, ToolSpawningComponent, PendingInteractionComponent, InteractionComponent>
; native signature: bool ContextualizedECS_Query_Entities__MatchMethod_BoardTilePositionComponent__ToolSpawningComponent__PendingInteractionComponent__InteractionComponent_ (ContextualizedECS_Entity_o* entity, System_ValueTuple_Entity__T1__T2__T3__T4__o* result, const MethodInfo_3C17A24* method);
; bytes=340 sha256=2c5257a1043e1ba27a930817c6e13414434aeacd063cb5deeac08226d8017616 status=arm64_complete_bound indexed_start=True
0x03C17A24: ff4305d1  sub sp, sp, #0x150
0x03C17A28: fd9300f9  str x29, [sp, #0x120]
0x03C17A2C: fe5713a9  stp x30, x21, [sp, #0x130]
0x03C17A30: f44f14a9  stp x20, x19, [sp, #0x140]
0x03C17A34: 481c40f9  ldr x8, [x2, #0x38]
0x03C17A38: f50302aa  mov x21, x2
0x03C17A3C: f30301aa  mov x19, x1
0x03C17A40: f40300aa  mov x20, x0
0x03C17A44: 680000b5  cbnz x8, #0x3c17a50
0x03C17A48: e00315aa  mov x0, x21
0x03C17A4C: 8bfbd497  bl #0x3156878
0x03C17A50: 00e4006f  movi v0.2d, #0000000000000000
0x03C17A54: ff2b01b9  str wzr, [sp, #0x128]
0x03C17A58: ff7f0ea9  stp xzr, xzr, [sp, #0xe0]
0x03C17A5C: ff7f0da9  stp xzr, xzr, [sp, #0xd0]
0x03C17A60: ff6300f9  str xzr, [sp, #0xc0]
0x03C17A64: e00305ad  stp q0, q0, [sp, #0xa0]
0x03C17A68: 7f2a00f9  str xzr, [x19, #0x50]
0x03C17A6C: 608201ad  stp q0, q0, [x19, #0x30]
0x03C17A70: 608200ad  stp q0, q0, [x19, #0x10]
0x03C17A74: 6002803d  str q0, [x19]
0x03C17A78: f40700b4  cbz x20, #0x3c17b74
0x03C17A7C: a81e40f9  ldr x8, [x21, #0x38]
0x03C17A80: e1a30491  add x1, sp, #0x128
0x03C17A84: e00314aa  mov x0, x20
0x03C17A88: 020940f9  ldr x2, [x8, #0x10]
0x03C17A8C: 161a0094  bl #0x3c1e2e4
0x03C17A90: 60060036  tbz w0, #0, #0x3c17b5c
0x03C17A94: a81e40f9  ldr x8, [x21, #0x38]
0x03C17A98: e1830391  add x1, sp, #0xe0
0x03C17A9C: e00314aa  mov x0, x20
0x03C17AA0: 021140f9  ldr x2, [x8, #0x20]
0x03C17AA4: 6f210094  bl #0x3c20060
0x03C17AA8: a0050036  tbz w0, #0, #0x3c17b5c
0x03C17AAC: a81e40f9  ldr x8, [x21, #0x38]
0x03C17AB0: e1430391  add x1, sp, #0xd0
0x03C17AB4: e00314aa  mov x0, x20
0x03C17AB8: 021940f9  ldr x2, [x8, #0x30]
0x03C17ABC: f61e0094  bl #0x3c1f694
0x03C17AC0: e0040036  tbz w0, #0, #0x3c17b5c
0x03C17AC4: a81e40f9  ldr x8, [x21, #0x38]
0x03C17AC8: e1830291  add x1, sp, #0xa0
0x03C17ACC: e00314aa  mov x0, x20
0x03C17AD0: 022140f9  ldr x2, [x8, #0x40]
0x03C17AD4: 511d0094  bl #0x3c1f018
0x03C17AD8: 20040036  tbz w0, #0, #0x3c17b5c
0x03C17ADC: e00745ad  ldp q0, q1, [sp, #0xa0]
0x03C17AE0: e86340f9  ldr x8, [sp, #0xc0]
0x03C17AE4: 02e4006f  movi v2.2d, #0000000000000000
0x03C17AE8: ff4b00f9  str xzr, [sp, #0x90]
0x03C17AEC: e28b03ad  stp q2, q2, [sp, #0x70]
0x03C17AF0: e28b02ad  stp q2, q2, [sp, #0x50]
0x03C17AF4: e08700ad  stp q0, q1, [sp, #0x10]
0x03C17AF8: e81b00f9  str x8, [sp, #0x30]
0x03C17AFC: e213803d  str q2, [sp, #0x40]
0x03C17B00: a81e40f9  ldr x8, [x21, #0x38]
0x03C17B04: e22b41b9  ldr w2, [sp, #0x128]
0x03C17B08: e3134ea9  ldp x3, x4, [sp, #0xe0]
0x03C17B0C: e51b4da9  ldp x5, x6, [sp, #0xd0]
0x03C17B10: e08740ad  ldp q0, q1, [sp, #0x10]
0x03C17B14: e91b40f9  ldr x9, [sp, #0x30]
0x03C17B18: 082940f9  ldr x8, [x8, #0x50]
0x03C17B1C: e0030191  add x0, sp, #0x40
0x03C17B20: e7c30391  add x7, sp, #0xf0
0x03C17B24: e10314aa  mov x1, x20
0x03C17B28: e08707ad  stp q0, q1, [sp, #0xf0]
0x03C17B2C: e98b00f9  str x9, [sp, #0x110]
0x03C17B30: e80300f9  str x8, [sp]
0x03C17B34: f12e3094  bl #0x48236f8
0x03C17B38: e1030191  add x1, sp, #0x40
0x03C17B3C: 020b8052  movz w2, #0x58
0x03C17B40: e00313aa  mov x0, x19
0x03C17B44: 8bdbd694  bl #0x71ce970
0x03C17B48: e00313aa  mov x0, x19
0x03C17B4C: e1031faa  mov x1, xzr
0x03C17B50: 9da3d597  bl #0x31809c4
0x03C17B54: 20008052  movz w0, #0x1
0x03C17B58: 02000014  b #0x3c17b60
0x03C17B5C: e0031f2a  mov w0, wzr
0x03C17B60: f44f54a9  ldp x20, x19, [sp, #0x140]
0x03C17B64: fe5753a9  ldp x30, x21, [sp, #0x130]
0x03C17B68: fd9340f9  ldr x29, [sp, #0x120]
0x03C17B6C: ff430591  add sp, sp, #0x150
0x03C17B70: c0035fd6  ret
0x03C17B74: 4ea4d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C17B78 | ContextualizedECS.Query.Entities$$MatchMethod<ExpendableComponent, BoardTilePositionComponent, IdComponent, InteractionComponent>
; native signature: bool ContextualizedECS_Query_Entities__MatchMethod_ExpendableComponent__BoardTilePositionComponent__IdComponent__InteractionComponent_ (ContextualizedECS_Entity_o* entity, System_ValueTuple_Entity__T1__T2__T3__T4__o* result, const MethodInfo_3C17B78* method);
; bytes=408 sha256=7016f769fa29bf7ec190614edbc54082c11fc5e89e159404a53c706b3649e280 status=arm64_complete_bound indexed_start=True
0x03C17B78: fd7bbda9  stp x29, x30, [sp, #-0x30]!
0x03C17B7C: f65701a9  stp x22, x21, [sp, #0x10]
0x03C17B80: f44f02a9  stp x20, x19, [sp, #0x20]
0x03C17B84: ff8309d1  sub sp, sp, #0x260
0x03C17B88: 481c40f9  ldr x8, [x2, #0x38]
0x03C17B8C: f50302aa  mov x21, x2
0x03C17B90: f30301aa  mov x19, x1
0x03C17B94: f40300aa  mov x20, x0
0x03C17B98: 680000b5  cbnz x8, #0x3c17ba4
0x03C17B9C: e00315aa  mov x0, x21
0x03C17BA0: 36fbd497  bl #0x3156878
0x03C17BA4: 00e4006f  movi v0.2d, #0000000000000000
0x03C17BA8: 02138052  movz w2, #0x98
0x03C17BAC: e00313aa  mov x0, x19
0x03C17BB0: e1031f2a  mov w1, wzr
0x03C17BB4: ff9b01b9  str wzr, [sp, #0x198]
0x03C17BB8: ffab00f9  str xzr, [sp, #0x150]
0x03C17BBC: e0830dad  stp q0, q0, [sp, #0x1b0]
0x03C17BC0: e06b803d  str q0, [sp, #0x1a0]
0x03C17BC4: e0830bad  stp q0, q0, [sp, #0x170]
0x03C17BC8: e05b803d  str q0, [sp, #0x160]
0x03C17BCC: e08309ad  stp q0, q0, [sp, #0x130]
0x03C17BD0: 74dbd694  bl #0x71ce9a0
0x03C17BD4: d40900b4  cbz x20, #0x3c17d0c
0x03C17BD8: a81e40f9  ldr x8, [x21, #0x38]
0x03C17BDC: e1830691  add x1, sp, #0x1a0
0x03C17BE0: e00314aa  mov x0, x20
0x03C17BE4: 020940f9  ldr x2, [x8, #0x10]
0x03C17BE8: e91b0094  bl #0x3c1eb8c
0x03C17BEC: 40080036  tbz w0, #0, #0x3c17cf4
0x03C17BF0: a81e40f9  ldr x8, [x21, #0x38]
0x03C17BF4: e1630691  add x1, sp, #0x198
0x03C17BF8: e00314aa  mov x0, x20
0x03C17BFC: 021140f9  ldr x2, [x8, #0x20]
0x03C17C00: b9190094  bl #0x3c1e2e4
0x03C17C04: 80070036  tbz w0, #0, #0x3c17cf4
0x03C17C08: a81e40f9  ldr x8, [x21, #0x38]
0x03C17C0C: e1830591  add x1, sp, #0x160
0x03C17C10: e00314aa  mov x0, x20
0x03C17C14: 021940f9  ldr x2, [x8, #0x30]
0x03C17C18: 6d1c0094  bl #0x3c1edcc
0x03C17C1C: c0060036  tbz w0, #0, #0x3c17cf4
0x03C17C20: a81e40f9  ldr x8, [x21, #0x38]
0x03C17C24: e1c30491  add x1, sp, #0x130
0x03C17C28: e00314aa  mov x0, x20
0x03C17C2C: 022140f9  ldr x2, [x8, #0x40]
0x03C17C30: fa1c0094  bl #0x3c1f018
0x03C17C34: 00060036  tbz w0, #0, #0x3c17cf4
0x03C17C38: e0074dad  ldp q0, q1, [sp, #0x1a0]
0x03C17C3C: e273c03d  ldr q2, [sp, #0x1c0]
0x03C17C40: e3134bad  ldp q3, q4, [sp, #0x160]
0x03C17C44: e8ab40f9  ldr x8, [sp, #0x150]
0x03C17C48: e00703ad  stp q0, q1, [sp, #0x60]
0x03C17C4C: e063c03d  ldr q0, [sp, #0x180]
0x03C17C50: f69b41b9  ldr w22, [sp, #0x198]
0x03C17C54: e0630291  add x0, sp, #0x98
0x03C17C58: 02138052  movz w2, #0x98
0x03C17C5C: e017803d  str q0, [sp, #0x50]
0x03C17C60: e08749ad  ldp q0, q1, [sp, #0x130]
0x03C17C64: e1031f2a  mov w1, wzr
0x03C17C68: e223803d  str q2, [sp, #0x80]
0x03C17C6C: e39301ad  stp q3, q4, [sp, #0x30]
0x03C17C70: e00700ad  stp q0, q1, [sp]
0x03C17C74: e81300f9  str x8, [sp, #0x20]
0x03C17C78: 4adbd694  bl #0x71ce9a0
0x03C17C7C: a81e40f9  ldr x8, [x21, #0x38]
0x03C17C80: e00743ad  ldp q0, q1, [sp, #0x60]
0x03C17C84: e223c03d  ldr q2, [sp, #0x80]
0x03C17C88: e39341ad  ldp q3, q4, [sp, #0x30]
0x03C17C8C: e517c03d  ldr q5, [sp, #0x50]
0x03C17C90: 062940f9  ldr x6, [x8, #0x50]
0x03C17C94: e08711ad  stp q0, q1, [sp, #0x230]
0x03C17C98: e00740ad  ldp q0, q1, [sp]
0x03C17C9C: e81340f9  ldr x8, [sp, #0x20]
0x03C17CA0: e0630291  add x0, sp, #0x98
0x03C17CA4: e2c30891  add x2, sp, #0x230
0x03C17CA8: e4030891  add x4, sp, #0x200
0x03C17CAC: e5430791  add x5, sp, #0x1d0
0x03C17CB0: e10314aa  mov x1, x20
0x03C17CB4: e30316aa  mov x3, x22
0x03C17CB8: e297803d  str q2, [sp, #0x250]
0x03C17CBC: e31310ad  stp q3, q4, [sp, #0x200]
0x03C17CC0: e58b803d  str q5, [sp, #0x220]
0x03C17CC4: e8fb00f9  str x8, [sp, #0x1f0]
0x03C17CC8: e0870ead  stp q0, q1, [sp, #0x1d0]
0x03C17CCC: ce3b3094  bl #0x4826c04
0x03C17CD0: e1630291  add x1, sp, #0x98
0x03C17CD4: 02138052  movz w2, #0x98
0x03C17CD8: e00313aa  mov x0, x19
0x03C17CDC: 25dbd694  bl #0x71ce970
0x03C17CE0: e00313aa  mov x0, x19
0x03C17CE4: e1031faa  mov x1, xzr
0x03C17CE8: 37a3d597  bl #0x31809c4
0x03C17CEC: 20008052  movz w0, #0x1
0x03C17CF0: 02000014  b #0x3c17cf8
0x03C17CF4: e0031f2a  mov w0, wzr
0x03C17CF8: ff830991  add sp, sp, #0x260
0x03C17CFC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03C17D00: f65741a9  ldp x22, x21, [sp, #0x10]
0x03C17D04: fd7bc3a8  ldp x29, x30, [sp], #0x30
0x03C17D08: c0035fd6  ret
0x03C17D0C: e8a3d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C17D10 | ContextualizedECS.Query.Entities$$MatchMethod<ExpendableComponent, BoardTilePositionComponent, TimeDurationComponent, TimeLimitedActivationComponent>
; native signature: bool ContextualizedECS_Query_Entities__MatchMethod_ExpendableComponent__BoardTilePositionComponent__TimeDurationComponent__TimeLimitedActivationComponent_ (ContextualizedECS_Entity_o* entity, System_ValueTuple_Entity__T1__T2__T3__T4__o* result, const MethodInfo_3C17D10* method);
; bytes=352 sha256=c24424d476747d09c069f8e0a3cba32fd6cac7bdc57ab3adada46be17cb1237b status=arm64_complete_bound indexed_start=True
0x03C17D10: ff0307d1  sub sp, sp, #0x1c0
0x03C17D14: fdcb00f9  str x29, [sp, #0x190]
0x03C17D18: fe571aa9  stp x30, x21, [sp, #0x1a0]
0x03C17D1C: f44f1ba9  stp x20, x19, [sp, #0x1b0]
0x03C17D20: 481c40f9  ldr x8, [x2, #0x38]
0x03C17D24: f50302aa  mov x21, x2
0x03C17D28: f30301aa  mov x19, x1
0x03C17D2C: f40300aa  mov x20, x0
0x03C17D30: 680000b5  cbnz x8, #0x3c17d3c
0x03C17D34: e00315aa  mov x0, x21
0x03C17D38: d0fad497  bl #0x3156878
0x03C17D3C: 00e4006f  movi v0.2d, #0000000000000000
0x03C17D40: ff9b01b9  str wzr, [sp, #0x198]
0x03C17D44: e00308ad  stp q0, q0, [sp, #0x100]
0x03C17D48: e00307ad  stp q0, q0, [sp, #0xe0]
0x03C17D4C: e00306ad  stp q0, q0, [sp, #0xc0]
0x03C17D50: e02f803d  str q0, [sp, #0xb0]
0x03C17D54: 600203ad  stp q0, q0, [x19, #0x60]
0x03C17D58: 600202ad  stp q0, q0, [x19, #0x40]
0x03C17D5C: 600201ad  stp q0, q0, [x19, #0x20]
0x03C17D60: 600200ad  stp q0, q0, [x19]
0x03C17D64: 540800b4  cbz x20, #0x3c17e6c
0x03C17D68: a81e40f9  ldr x8, [x21, #0x38]
0x03C17D6C: e1c30391  add x1, sp, #0xf0
0x03C17D70: e00314aa  mov x0, x20
0x03C17D74: 020940f9  ldr x2, [x8, #0x10]
0x03C17D78: 851b0094  bl #0x3c1eb8c
0x03C17D7C: c0060036  tbz w0, #0, #0x3c17e54
0x03C17D80: a81e40f9  ldr x8, [x21, #0x38]
0x03C17D84: e1630691  add x1, sp, #0x198
0x03C17D88: e00314aa  mov x0, x20
0x03C17D8C: 021140f9  ldr x2, [x8, #0x20]
0x03C17D90: 55190094  bl #0x3c1e2e4
0x03C17D94: 00060036  tbz w0, #0, #0x3c17e54
0x03C17D98: a81e40f9  ldr x8, [x21, #0x38]
0x03C17D9C: e1430391  add x1, sp, #0xd0
0x03C17DA0: e00314aa  mov x0, x20
0x03C17DA4: 021940f9  ldr x2, [x8, #0x30]
0x03C17DA8: df1f0094  bl #0x3c1fd24
0x03C17DAC: 40050036  tbz w0, #0, #0x3c17e54
0x03C17DB0: a81e40f9  ldr x8, [x21, #0x38]
0x03C17DB4: e1c30291  add x1, sp, #0xb0
0x03C17DB8: e00314aa  mov x0, x20
0x03C17DBC: 022140f9  ldr x2, [x8, #0x40]
0x03C17DC0: 1d200094  bl #0x3c1fe34
0x03C17DC4: 80040036  tbz w0, #0, #0x3c17e54
0x03C17DC8: e08747ad  ldp q0, q1, [sp, #0xf0]
0x03C17DCC: e247c03d  ldr q2, [sp, #0x110]
0x03C17DD0: 03e4006f  movi v3.2d, #0000000000000000
0x03C17DD4: e38f04ad  stp q3, q3, [sp, #0x90]
0x03C17DD8: e38f03ad  stp q3, q3, [sp, #0x70]
0x03C17DDC: e38f02ad  stp q3, q3, [sp, #0x50]
0x03C17DE0: e38f01ad  stp q3, q3, [sp, #0x30]
0x03C17DE4: e00700ad  stp q0, q1, [sp]
0x03C17DE8: e20b803d  str q2, [sp, #0x20]
0x03C17DEC: a81e40f9  ldr x8, [x21, #0x38]
0x03C17DF0: e00740ad  ldp q0, q1, [sp]
0x03C17DF4: e39b41b9  ldr w3, [sp, #0x198]
0x03C17DF8: e39346ad  ldp q3, q4, [sp, #0xd0]
0x03C17DFC: e20bc03d  ldr q2, [sp, #0x20]
0x03C17E00: 062940f9  ldr x6, [x8, #0x50]
0x03C17E04: e0070bad  stp q0, q1, [sp, #0x160]
0x03C17E08: e08745ad  ldp q0, q1, [sp, #0xb0]
0x03C17E0C: e0c30091  add x0, sp, #0x30
0x03C17E10: e2830591  add x2, sp, #0x160
0x03C17E14: e4030591  add x4, sp, #0x140
0x03C17E18: e5830491  add x5, sp, #0x120
0x03C17E1C: e10314aa  mov x1, x20
0x03C17E20: e263803d  str q2, [sp, #0x180]
0x03C17E24: e3130aad  stp q3, q4, [sp, #0x140]
0x03C17E28: e00709ad  stp q0, q1, [sp, #0x120]
0x03C17E2C: 3e433094  bl #0x4828b24
0x03C17E30: e1c30091  add x1, sp, #0x30
0x03C17E34: 02108052  movz w2, #0x80
0x03C17E38: e00313aa  mov x0, x19
0x03C17E3C: cddad694  bl #0x71ce970
0x03C17E40: e00313aa  mov x0, x19
0x03C17E44: e1031faa  mov x1, xzr
0x03C17E48: dfa2d597  bl #0x31809c4
0x03C17E4C: 20008052  movz w0, #0x1
0x03C17E50: 02000014  b #0x3c17e58
0x03C17E54: e0031f2a  mov w0, wzr
0x03C17E58: f44f5ba9  ldp x20, x19, [sp, #0x1b0]
0x03C17E5C: fe575aa9  ldp x30, x21, [sp, #0x1a0]
0x03C17E60: fdcb40f9  ldr x29, [sp, #0x190]
0x03C17E64: ff030791  add sp, sp, #0x1c0
0x03C17E68: c0035fd6  ret
0x03C17E6C: 90a3d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C17E70 | ContextualizedECS.Query.Entities$$MatchMethod<IdComponent, BoardTilePositionComponent, ImmediateToolComponent, PendingInteractionComponent>
; native signature: bool ContextualizedECS_Query_Entities__MatchMethod_IdComponent__BoardTilePositionComponent__ImmediateToolComponent__PendingInteractionComponent_ (ContextualizedECS_Entity_o* entity, System_ValueTuple_Entity__T1__T2__T3__T4__o* result, const MethodInfo_3C17E70* method);
; bytes=372 sha256=46dbdaadf2e79dec65d753aa11ab39605f64f872e2ee7af8bd4269838c2010c6 status=arm64_complete_bound indexed_start=True
0x03C17E70: ff4306d1  sub sp, sp, #0x190
0x03C17E74: fdb300f9  str x29, [sp, #0x160]
0x03C17E78: fe5717a9  stp x30, x21, [sp, #0x170]
0x03C17E7C: f44f18a9  stp x20, x19, [sp, #0x180]
0x03C17E80: 481c40f9  ldr x8, [x2, #0x38]
0x03C17E84: f50302aa  mov x21, x2
0x03C17E88: f30301aa  mov x19, x1
0x03C17E8C: f40300aa  mov x20, x0
0x03C17E90: 680000b5  cbnz x8, #0x3c17e9c
0x03C17E94: e00315aa  mov x0, x21
0x03C17E98: 78fad497  bl #0x3156878
0x03C17E9C: 00e4006f  movi v0.2d, #0000000000000000
0x03C17EA0: ff6b01b9  str wzr, [sp, #0x168]
0x03C17EA4: ffff0ca9  stp xzr, xzr, [sp, #0xc8]
0x03C17EA8: ff6f00f9  str xzr, [sp, #0xd8]
0x03C17EAC: ffff0ba9  stp xzr, xzr, [sp, #0xb8]
0x03C17EB0: e08307ad  stp q0, q0, [sp, #0xf0]
0x03C17EB4: e03b803d  str q0, [sp, #0xe0]
0x03C17EB8: 7f3200f9  str xzr, [x19, #0x60]
0x03C17EBC: 600202ad  stp q0, q0, [x19, #0x40]
0x03C17EC0: 600201ad  stp q0, q0, [x19, #0x20]
0x03C17EC4: 600200ad  stp q0, q0, [x19]
0x03C17EC8: d40800b4  cbz x20, #0x3c17fe0
0x03C17ECC: a81e40f9  ldr x8, [x21, #0x38]
0x03C17ED0: e1830391  add x1, sp, #0xe0
0x03C17ED4: e00314aa  mov x0, x20
0x03C17ED8: 020940f9  ldr x2, [x8, #0x10]
0x03C17EDC: bc1b0094  bl #0x3c1edcc
0x03C17EE0: 40070036  tbz w0, #0, #0x3c17fc8
0x03C17EE4: a81e40f9  ldr x8, [x21, #0x38]
0x03C17EE8: e1a30591  add x1, sp, #0x168
0x03C17EEC: e00314aa  mov x0, x20
0x03C17EF0: 021140f9  ldr x2, [x8, #0x20]
0x03C17EF4: fc180094  bl #0x3c1e2e4
0x03C17EF8: 80060036  tbz w0, #0, #0x3c17fc8
0x03C17EFC: a81e40f9  ldr x8, [x21, #0x38]
0x03C17F00: e1230391  add x1, sp, #0xc8
0x03C17F04: e00314aa  mov x0, x20
0x03C17F08: 021940f9  ldr x2, [x8, #0x30]
0x03C17F0C: fa1b0094  bl #0x3c1eef4
0x03C17F10: c0050036  tbz w0, #0, #0x3c17fc8
0x03C17F14: a81e40f9  ldr x8, [x21, #0x38]
0x03C17F18: e1e30291  add x1, sp, #0xb8
0x03C17F1C: e00314aa  mov x0, x20
0x03C17F20: 022140f9  ldr x2, [x8, #0x40]
0x03C17F24: dc1d0094  bl #0x3c1f694
0x03C17F28: 00050036  tbz w0, #0, #0x3c17fc8
0x03C17F2C: 03e4006f  movi v3.2d, #0000000000000000
0x03C17F30: e00747ad  ldp q0, q1, [sp, #0xe0]
0x03C17F34: e243c03d  ldr q2, [sp, #0x100]
0x03C17F38: e38f04ad  stp q3, q3, [sp, #0x90]
0x03C17F3C: e38f03ad  stp q3, q3, [sp, #0x70]
0x03C17F40: e38f02ad  stp q3, q3, [sp, #0x50]
0x03C17F44: e383cc3c  ldur q3, [sp, #0xc8]
0x03C17F48: e86f40f9  ldr x8, [sp, #0xd8]
0x03C17F4C: ff5b00f9  str xzr, [sp, #0xb0]
0x03C17F50: e00701ad  stp q0, q1, [sp, #0x20]
0x03C17F54: e213803d  str q2, [sp, #0x40]
0x03C17F58: e303803d  str q3, [sp]
0x03C17F5C: e80b00f9  str x8, [sp, #0x10]
0x03C17F60: a81e40f9  ldr x8, [x21, #0x38]
0x03C17F64: e00741ad  ldp q0, q1, [sp, #0x20]
0x03C17F68: e36b41b9  ldr w3, [sp, #0x168]
0x03C17F6C: e213c03d  ldr q2, [sp, #0x40]
0x03C17F70: 072940f9  ldr x7, [x8, #0x50]
0x03C17F74: e08709ad  stp q0, q1, [sp, #0x130]
0x03C17F78: e003c03d  ldr q0, [sp]
0x03C17F7C: e80b40f9  ldr x8, [sp, #0x10]
0x03C17F80: e59b4ba9  ldp x5, x6, [sp, #0xb8]
0x03C17F84: e0430191  add x0, sp, #0x50
0x03C17F88: e2c30491  add x2, sp, #0x130
0x03C17F8C: e4430491  add x4, sp, #0x110
0x03C17F90: e10314aa  mov x1, x20
0x03C17F94: e257803d  str q2, [sp, #0x150]
0x03C17F98: e047803d  str q0, [sp, #0x110]
0x03C17F9C: e89300f9  str x8, [sp, #0x120]
0x03C17FA0: 5e4a3094  bl #0x482a918
0x03C17FA4: e1430191  add x1, sp, #0x50
0x03C17FA8: 020d8052  movz w2, #0x68
0x03C17FAC: e00313aa  mov x0, x19
0x03C17FB0: 70dad694  bl #0x71ce970
0x03C17FB4: e00313aa  mov x0, x19
0x03C17FB8: e1031faa  mov x1, xzr
0x03C17FBC: 82a2d597  bl #0x31809c4
0x03C17FC0: 20008052  movz w0, #0x1
0x03C17FC4: 02000014  b #0x3c17fcc
0x03C17FC8: e0031f2a  mov w0, wzr
0x03C17FCC: f44f58a9  ldp x20, x19, [sp, #0x180]
0x03C17FD0: fe5757a9  ldp x30, x21, [sp, #0x170]
0x03C17FD4: fdb340f9  ldr x29, [sp, #0x160]
0x03C17FD8: ff430691  add sp, sp, #0x190
0x03C17FDC: c0035fd6  ret
0x03C17FE0: 33a3d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C17FE4 | ContextualizedECS.Query.Entities$$MatchMethod<IdComponent, InteractionComponent, BoardTilePositionComponent, ProducerComponent>
; native signature: bool ContextualizedECS_Query_Entities__MatchMethod_IdComponent__InteractionComponent__BoardTilePositionComponent__ProducerComponent_ (ContextualizedECS_Entity_o* entity, System_ValueTuple_Entity__T1__T2__T3__T4__o* result, const MethodInfo_3C17FE4* method);
; bytes=388 sha256=f3110b6600c7622c1fb7666985afb0cd3e669704c28c382d74c5bc81c7aa8ee8 status=arm64_complete_bound indexed_start=True
0x03C17FE4: fd7bbda9  stp x29, x30, [sp, #-0x30]!
0x03C17FE8: f65701a9  stp x22, x21, [sp, #0x10]
0x03C17FEC: f44f02a9  stp x20, x19, [sp, #0x20]
0x03C17FF0: ff8308d1  sub sp, sp, #0x220
0x03C17FF4: 481c40f9  ldr x8, [x2, #0x38]
0x03C17FF8: f50302aa  mov x21, x2
0x03C17FFC: f30301aa  mov x19, x1
0x03C18000: f40300aa  mov x20, x0
0x03C18004: 680000b5  cbnz x8, #0x3c18010
0x03C18008: e00315aa  mov x0, x21
0x03C1800C: 1bfad497  bl #0x3156878
0x03C18010: 00e4006f  movi v0.2d, #0000000000000000
0x03C18014: 02118052  movz w2, #0x88
0x03C18018: e00313aa  mov x0, x19
0x03C1801C: e1031f2a  mov w1, wzr
0x03C18020: ffb300f9  str xzr, [sp, #0x160]
0x03C18024: ff3b01b9  str wzr, [sp, #0x138]
0x03C18028: e0030cad  stp q0, q0, [sp, #0x180]
0x03C1802C: e05f803d  str q0, [sp, #0x170]
0x03C18030: e0030aad  stp q0, q0, [sp, #0x140]
0x03C18034: e08308ad  stp q0, q0, [sp, #0x110]
0x03C18038: 5adad694  bl #0x71ce9a0
0x03C1803C: 540900b4  cbz x20, #0x3c18164
0x03C18040: a81e40f9  ldr x8, [x21, #0x38]
0x03C18044: e1c30591  add x1, sp, #0x170
0x03C18048: e00314aa  mov x0, x20
0x03C1804C: 020940f9  ldr x2, [x8, #0x10]
0x03C18050: 5f1b0094  bl #0x3c1edcc
0x03C18054: c0070036  tbz w0, #0, #0x3c1814c
0x03C18058: a81e40f9  ldr x8, [x21, #0x38]
0x03C1805C: e1030591  add x1, sp, #0x140
0x03C18060: e00314aa  mov x0, x20
0x03C18064: 021140f9  ldr x2, [x8, #0x20]
0x03C18068: ec1b0094  bl #0x3c1f018
0x03C1806C: 00070036  tbz w0, #0, #0x3c1814c
0x03C18070: a81e40f9  ldr x8, [x21, #0x38]
0x03C18074: e1e30491  add x1, sp, #0x138
0x03C18078: e00314aa  mov x0, x20
0x03C1807C: 021940f9  ldr x2, [x8, #0x30]
0x03C18080: 99180094  bl #0x3c1e2e4
0x03C18084: 40060036  tbz w0, #0, #0x3c1814c
0x03C18088: a81e40f9  ldr x8, [x21, #0x38]
0x03C1808C: e1430491  add x1, sp, #0x110
0x03C18090: e00314aa  mov x0, x20
0x03C18094: 022140f9  ldr x2, [x8, #0x40]
0x03C18098: 081e0094  bl #0x3c1f8b8
0x03C1809C: 80050036  tbz w0, #0, #0x3c1814c
0x03C180A0: e0874bad  ldp q0, q1, [sp, #0x170]
0x03C180A4: e267c03d  ldr q2, [sp, #0x190]
0x03C180A8: e8b340f9  ldr x8, [sp, #0x160]
0x03C180AC: f63b41b9  ldr w22, [sp, #0x138]
0x03C180B0: e08702ad  stp q0, q1, [sp, #0x50]
0x03C180B4: e0074aad  ldp q0, q1, [sp, #0x140]
0x03C180B8: e0230291  add x0, sp, #0x88
0x03C180BC: 02118052  movz w2, #0x88
0x03C180C0: e1031f2a  mov w1, wzr
0x03C180C4: e00701ad  stp q0, q1, [sp, #0x20]
0x03C180C8: e08748ad  ldp q0, q1, [sp, #0x110]
0x03C180CC: e21f803d  str q2, [sp, #0x70]
0x03C180D0: e82300f9  str x8, [sp, #0x40]
0x03C180D4: e00700ad  stp q0, q1, [sp]
0x03C180D8: 32dad694  bl #0x71ce9a0
0x03C180DC: a81e40f9  ldr x8, [x21, #0x38]
0x03C180E0: e08742ad  ldp q0, q1, [sp, #0x50]
0x03C180E4: e21fc03d  ldr q2, [sp, #0x70]
0x03C180E8: e31341ad  ldp q3, q4, [sp, #0x20]
0x03C180EC: e92340f9  ldr x9, [sp, #0x40]
0x03C180F0: 062940f9  ldr x6, [x8, #0x50]
0x03C180F4: e0870fad  stp q0, q1, [sp, #0x1f0]
0x03C180F8: e00740ad  ldp q0, q1, [sp]
0x03C180FC: e0230291  add x0, sp, #0x88
0x03C18100: e2c30791  add x2, sp, #0x1f0
0x03C18104: e3030791  add x3, sp, #0x1c0
0x03C18108: e5830691  add x5, sp, #0x1a0
0x03C1810C: e10314aa  mov x1, x20
0x03C18110: e40316aa  mov x4, x22
0x03C18114: e287803d  str q2, [sp, #0x210]
0x03C18118: e3130ead  stp q3, q4, [sp, #0x1c0]
0x03C1811C: e9f300f9  str x9, [sp, #0x1e0]
0x03C18120: e0070dad  stp q0, q1, [sp, #0x1a0]
0x03C18124: 86513094  bl #0x482c73c
0x03C18128: e1230291  add x1, sp, #0x88
0x03C1812C: 02118052  movz w2, #0x88
0x03C18130: e00313aa  mov x0, x19
0x03C18134: 0fdad694  bl #0x71ce970
0x03C18138: e00313aa  mov x0, x19
0x03C1813C: e1031faa  mov x1, xzr
0x03C18140: 21a2d597  bl #0x31809c4
0x03C18144: 20008052  movz w0, #0x1
0x03C18148: 02000014  b #0x3c18150
0x03C1814C: e0031f2a  mov w0, wzr
0x03C18150: ff830891  add sp, sp, #0x220
0x03C18154: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03C18158: f65741a9  ldp x22, x21, [sp, #0x10]
0x03C1815C: fd7bc3a8  ldp x29, x30, [sp], #0x30
0x03C18160: c0035fd6  ret
0x03C18164: d2a2d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C18168 | ContextualizedECS.Query.Entities$$MatchMethod<__Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType>
; native signature: bool ContextualizedECS_Query_Entities__MatchMethod___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType_ (ContextualizedECS_Entity_o* entity, System_ValueTuple_Entity__T1__T2__T3__T4__o* result, const MethodInfo_3C18168* method);
; bytes=912 sha256=1e5632ec79a8f74f762d54aebafe6180f50bf0f58083ec075c6f09f81733dd55 status=arm64_complete_bound indexed_start=True
0x03C18168: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x03C1816C: fc6f01a9  stp x28, x27, [sp, #0x10]
0x03C18170: fa6702a9  stp x26, x25, [sp, #0x20]
0x03C18174: f85f03a9  stp x24, x23, [sp, #0x30]
0x03C18178: f65704a9  stp x22, x21, [sp, #0x40]
0x03C1817C: f44f05a9  stp x20, x19, [sp, #0x50]
0x03C18180: fd030091  mov x29, sp
0x03C18184: ff0302d1  sub sp, sp, #0x80
0x03C18188: 48d03bd5  mrs x8, tpidr_el0
0x03C1818C: a8031ef8  stur x8, [x29, #-0x20]
0x03C18190: 081540f9  ldr x8, [x8, #0x28]
0x03C18194: f30302aa  mov x19, x2
0x03C18198: f90301aa  mov x25, x1
0x03C1819C: a8831ff8  stur x8, [x29, #-8]
0x03C181A0: 481c40f9  ldr x8, [x2, #0x38]
0x03C181A4: a0831ef8  stur x0, [x29, #-0x18]
0x03C181A8: 880000b5  cbnz x8, #0x3c181b8
0x03C181AC: e00313aa  mov x0, x19
0x03C181B0: b2f9d497  bl #0x3156878
0x03C181B4: 681e40f9  ldr x8, [x19, #0x38]
0x03C181B8: 09a945a9  ldp x9, x10, [x8, #0x58]
0x03C181BC: 0bb146a9  ldp x11, x12, [x8, #0x68]
0x03C181C0: 080540f9  ldr x8, [x8, #8]
0x03C181C4: b3031ff8  stur x19, [x29, #-0x10]
0x03C181C8: 22fd40b9  ldr w2, [x9, #0xfc]
0x03C181CC: 93fd40b9  ldr w19, [x12, #0xfc]
0x03C181D0: 1afd40b9  ldr w26, [x8, #0xfc]
0x03C181D4: 54fd40b9  ldr w20, [x10, #0xfc]
0x03C181D8: 75fd40b9  ldr w21, [x11, #0xfc]
0x03C181DC: 493c0091  add x9, x2, #0xf
0x03C181E0: e8030091  mov x8, sp
0x03C181E4: 29717c92  and x9, x9, #0x1fffffff0
0x03C181E8: 080109cb  sub x8, x8, x9
0x03C181EC: a8831df8  stur x8, [x29, #-0x28]
0x03C181F0: 1f010091  mov sp, x8
0x03C181F4: e8030091  mov x8, sp
0x03C181F8: 080109cb  sub x8, x8, x9
0x03C181FC: a8031cf8  stur x8, [x29, #-0x40]
0x03C18200: 1f010091  mov sp, x8
0x03C18204: 8a3e0091  add x10, x20, #0xf
0x03C18208: e8030091  mov x8, sp
0x03C1820C: 56717c92  and x22, x10, #0x1fffffff0
0x03C18210: 080116cb  sub x8, x8, x22
0x03C18214: a8031df8  stur x8, [x29, #-0x30]
0x03C18218: 1f010091  mov sp, x8
0x03C1821C: e8030091  mov x8, sp
0x03C18220: 080116cb  sub x8, x8, x22
0x03C18224: a8031af8  stur x8, [x29, #-0x60]
0x03C18228: 1f010091  mov sp, x8
0x03C1822C: aa3e0091  add x10, x21, #0xf
0x03C18230: e8030091  mov x8, sp
0x03C18234: 58717c92  and x24, x10, #0x1fffffff0
0x03C18238: 080118cb  sub x8, x8, x24
0x03C1823C: a80318f8  stur x8, [x29, #-0x80]
0x03C18240: 1f010091  mov sp, x8
0x03C18244: e8030091  mov x8, sp
0x03C18248: 080118cb  sub x8, x8, x24
0x03C1824C: a80319f8  stur x8, [x29, #-0x70]
0x03C18250: 1f010091  mov sp, x8
0x03C18254: 6a3e0091  add x10, x19, #0xf
0x03C18258: e8030091  mov x8, sp
0x03C1825C: 57717c92  and x23, x10, #0x1fffffff0
0x03C18260: 080117cb  sub x8, x8, x23
0x03C18264: a8831cf8  stur x8, [x29, #-0x38]
0x03C18268: 1f010091  mov sp, x8
0x03C1826C: e8030091  mov x8, sp
0x03C18270: 080117cb  sub x8, x8, x23
0x03C18274: a88318f8  stur x8, [x29, #-0x78]
0x03C18278: 1f010091  mov sp, x8
0x03C1827C: 4a3f0091  add x10, x26, #0xf
0x03C18280: e8030091  mov x8, sp
0x03C18284: 4a717c92  and x10, x10, #0x1fffffff0
0x03C18288: 08010acb  sub x8, x8, x10
0x03C1828C: a8831af8  stur x8, [x29, #-0x58]
0x03C18290: 1f010091  mov sp, x8
0x03C18294: e8030091  mov x8, sp
0x03C18298: 1c0109cb  sub x28, x8, x9
0x03C1829C: 9f030091  mov sp, x28
0x03C182A0: e0031caa  mov x0, x28
0x03C182A4: e1031f2a  mov w1, wzr
0x03C182A8: a28319f8  stur x2, [x29, #-0x68]
0x03C182AC: bdd9d694  bl #0x71ce9a0
0x03C182B0: e8030091  mov x8, sp
0x03C182B4: 1b0116cb  sub x27, x8, x22
0x03C182B8: 7f030091  mov sp, x27
0x03C182BC: e0031baa  mov x0, x27
0x03C182C0: e1031f2a  mov w1, wzr
0x03C182C4: e20314aa  mov x2, x20
0x03C182C8: b4031bf8  stur x20, [x29, #-0x50]
0x03C182CC: b5d9d694  bl #0x71ce9a0
0x03C182D0: e8030091  mov x8, sp
0x03C182D4: 180118cb  sub x24, x8, x24
0x03C182D8: 1f030091  mov sp, x24
0x03C182DC: e00318aa  mov x0, x24
0x03C182E0: e1031f2a  mov w1, wzr
0x03C182E4: e20315aa  mov x2, x21
0x03C182E8: b5831bf8  stur x21, [x29, #-0x48]
0x03C182EC: add9d694  bl #0x71ce9a0
0x03C182F0: e8030091  mov x8, sp
0x03C182F4: 160117cb  sub x22, x8, x23
0x03C182F8: df020091  mov sp, x22
0x03C182FC: e00316aa  mov x0, x22
0x03C18300: e1031f2a  mov w1, wzr
0x03C18304: e20313aa  mov x2, x19
0x03C18308: f70313aa  mov x23, x19
0x03C1830C: a5d9d694  bl #0x71ce9a0
0x03C18310: e00319aa  mov x0, x25
0x03C18314: e1031f2a  mov w1, wzr
0x03C18318: e2031aaa  mov x2, x26
0x03C1831C: f3031aaa  mov x19, x26
0x03C18320: a0d9d694  bl #0x71ce9a0
0x03C18324: ba835ef8  ldur x26, [x29, #-0x18]
0x03C18328: 5a0e00b4  cbz x26, #0x3c184f0
0x03C1832C: b4035ff8  ldur x20, [x29, #-0x10]
0x03C18330: e0031aaa  mov x0, x26
0x03C18334: e1031caa  mov x1, x28
0x03C18338: 881e40f9  ldr x8, [x20, #0x38]
0x03C1833C: 020940f9  ldr x2, [x8, #0x10]
0x03C18340: 480040f9  ldr x8, [x2]
0x03C18344: 00013fd6  blr x8
0x03C18348: 800b0036  tbz w0, #0, #0x3c184b8
0x03C1834C: 881e40f9  ldr x8, [x20, #0x38]
0x03C18350: e0031aaa  mov x0, x26
0x03C18354: e1031baa  mov x1, x27
0x03C18358: 021140f9  ldr x2, [x8, #0x20]
0x03C1835C: 480040f9  ldr x8, [x2]
0x03C18360: 00013fd6  blr x8
0x03C18364: a00a0036  tbz w0, #0, #0x3c184b8
0x03C18368: 881e40f9  ldr x8, [x20, #0x38]
0x03C1836C: e0031aaa  mov x0, x26
0x03C18370: e10318aa  mov x1, x24
0x03C18374: 021940f9  ldr x2, [x8, #0x30]
0x03C18378: 480040f9  ldr x8, [x2]
0x03C1837C: 00013fd6  blr x8
0x03C18380: c0090036  tbz w0, #0, #0x3c184b8
0x03C18384: 881e40f9  ldr x8, [x20, #0x38]
0x03C18388: e0031aaa  mov x0, x26
0x03C1838C: e10316aa  mov x1, x22
0x03C18390: 022140f9  ldr x2, [x8, #0x40]
0x03C18394: 480040f9  ldr x8, [x2]
0x03C18398: 00013fd6  blr x8
0x03C1839C: e0080036  tbz w0, #0, #0x3c184b8
0x03C183A0: e1031caa  mov x1, x28
0x03C183A4: bc8359f8  ldur x28, [x29, #-0x68]
0x03C183A8: a0835df8  ldur x0, [x29, #-0x28]
0x03C183AC: e2031caa  mov x2, x28
0x03C183B0: 70d9d694  bl #0x71ce970
0x03C183B4: b4035bf8  ldur x20, [x29, #-0x50]
0x03C183B8: a0035df8  ldur x0, [x29, #-0x30]
0x03C183BC: e1031baa  mov x1, x27
0x03C183C0: e20314aa  mov x2, x20
0x03C183C4: 6bd9d694  bl #0x71ce970
0x03C183C8: bb0358f8  ldur x27, [x29, #-0x80]
0x03C183CC: b5835bf8  ldur x21, [x29, #-0x48]
0x03C183D0: e10318aa  mov x1, x24
0x03C183D4: e0031baa  mov x0, x27
0x03C183D8: e20315aa  mov x2, x21
0x03C183DC: 65d9d694  bl #0x71ce970
0x03C183E0: a0835cf8  ldur x0, [x29, #-0x38]
0x03C183E4: e10316aa  mov x1, x22
0x03C183E8: e20317aa  mov x2, x23
0x03C183EC: 61d9d694  bl #0x71ce970
0x03C183F0: b8835af8  ldur x24, [x29, #-0x58]
0x03C183F4: e1031f2a  mov w1, wzr
0x03C183F8: e20313aa  mov x2, x19
0x03C183FC: f60313aa  mov x22, x19
0x03C18400: e00318aa  mov x0, x24
0x03C18404: 67d9d694  bl #0x71ce9a0
0x03C18408: b3035cf8  ldur x19, [x29, #-0x40]
0x03C1840C: a1835df8  ldur x1, [x29, #-0x28]
0x03C18410: e2031caa  mov x2, x28
0x03C18414: e00313aa  mov x0, x19
0x03C18418: 56d9d694  bl #0x71ce970
0x03C1841C: bc035af8  ldur x28, [x29, #-0x60]
0x03C18420: a1035df8  ldur x1, [x29, #-0x30]
0x03C18424: e20314aa  mov x2, x20
0x03C18428: e0031caa  mov x0, x28
0x03C1842C: 51d9d694  bl #0x71ce970
0x03C18430: b40359f8  ldur x20, [x29, #-0x70]
0x03C18434: e1031baa  mov x1, x27
0x03C18438: e20315aa  mov x2, x21
0x03C1843C: e00314aa  mov x0, x20
0x03C18440: 4cd9d694  bl #0x71ce970
0x03C18444: b58358f8  ldur x21, [x29, #-0x78]
0x03C18448: a1835cf8  ldur x1, [x29, #-0x38]
0x03C1844C: e20317aa  mov x2, x23
0x03C18450: e00315aa  mov x0, x21
0x03C18454: 47d9d694  bl #0x71ce970
0x03C18458: b7035ff8  ldur x23, [x29, #-0x10]
0x03C1845C: e00318aa  mov x0, x24
0x03C18460: e1031aaa  mov x1, x26
0x03C18464: e20313aa  mov x2, x19
0x03C18468: e81e40f9  ldr x8, [x23, #0x38]
0x03C1846C: e3031caa  mov x3, x28
0x03C18470: e40314aa  mov x4, x20
0x03C18474: e50315aa  mov x5, x21
0x03C18478: 062940f9  ldr x6, [x8, #0x50]
0x03C1847C: 530a3194  bl #0x485adc8
0x03C18480: e00319aa  mov x0, x25
0x03C18484: e10318aa  mov x1, x24
0x03C18488: e20316aa  mov x2, x22
0x03C1848C: 39d9d694  bl #0x71ce970
0x03C18490: e81e40f9  ldr x8, [x23, #0x38]
0x03C18494: 000540f9  ldr x0, [x8, #8]
0x03C18498: 08d44439  ldrb w8, [x0, #0x135]
0x03C1849C: 48000037  tbnz w8, #0, #0x3c184a4
0x03C184A0: dff8d497  bl #0x315681c
0x03C184A4: e10319aa  mov x1, x25
0x03C184A8: e20318aa  mov x2, x24
0x03C184AC: 47a1d597  bl #0x31809c8
0x03C184B0: 20008052  movz w0, #0x1
0x03C184B4: 02000014  b #0x3c184bc
0x03C184B8: e0031f2a  mov w0, wzr
0x03C184BC: a8035ef8  ldur x8, [x29, #-0x20]
0x03C184C0: 081540f9  ldr x8, [x8, #0x28]
0x03C184C4: a9835ff8  ldur x9, [x29, #-8]
0x03C184C8: 1f0109eb  cmp x8, x9
0x03C184CC: 41010054  b.ne #0x3c184f4
0x03C184D0: bf030091  mov sp, x29
0x03C184D4: f44f45a9  ldp x20, x19, [sp, #0x50]
0x03C184D8: f65744a9  ldp x22, x21, [sp, #0x40]
0x03C184DC: f85f43a9  ldp x24, x23, [sp, #0x30]
0x03C184E0: fa6742a9  ldp x26, x25, [sp, #0x20]
0x03C184E4: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x03C184E8: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x03C184EC: c0035fd6  ret
0x03C184F0: efa1d597  bl #0x3180cac
0x03C184F4: 27d9d694  bl #0x71ce990

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1AB40 | ContextualizedECS.Query.Entities$$With<BoardTilePositionComponent, CollectableComponent, IdComponent, PendingInteractionComponent, InteractionComponent>
; native signature: ContextualizedECS_Query_Entities_MatchDelegate_ValueTuple_Entity__T1__T2__T3__T4__T5___o* ContextualizedECS_Query_Entities__With_BoardTilePositionComponent__CollectableComponent__IdComponent__PendingInteractionComponent__InteractionComponent_ (const MethodInfo_3C1AB40* method);
; bytes=84 sha256=1ab3dfb43c6dca88ce61d05fb3a9379bf99cb4e0df9d74ce269923f57eef79af status=arm64_complete_bound indexed_start=True
0x03C1AB40: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x03C1AB44: 081c40f9  ldr x8, [x0, #0x38]
0x03C1AB48: f30300aa  mov x19, x0
0x03C1AB4C: 880000b5  cbnz x8, #0x3c1ab5c
0x03C1AB50: e00313aa  mov x0, x19
0x03C1AB54: 49efd497  bl #0x3156878
0x03C1AB58: 681e40f9  ldr x8, [x19, #0x38]
0x03C1AB5C: 000540f9  ldr x0, [x8, #8]
0x03C1AB60: 08d44439  ldrb w8, [x0, #0x135]
0x03C1AB64: 48000037  tbnz w8, #0, #0x3c1ab6c
0x03C1AB68: 2defd497  bl #0x315681c
0x03C1AB6C: 4d98d597  bl #0x3180ca0
0x03C1AB70: 681e40f9  ldr x8, [x19, #0x38]
0x03C1AB74: e1031faa  mov x1, xzr
0x03C1AB78: f30300aa  mov x19, x0
0x03C1AB7C: 020140f9  ldr x2, [x8]
0x03C1AB80: 030940f9  ldr x3, [x8, #0x10]
0x03C1AB84: c4081794  bl #0x41dce94
0x03C1AB88: e00313aa  mov x0, x19
0x03C1AB8C: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x03C1AB90: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1AB94 | ContextualizedECS.Query.Entities$$With<BoardTilePositionComponent, ProducerComponent, TimeCycleComponent, PendingInteractionComponent, InteractionComponent>
; native signature: ContextualizedECS_Query_Entities_MatchDelegate_ValueTuple_Entity__T1__T2__T3__T4__T5___o* ContextualizedECS_Query_Entities__With_BoardTilePositionComponent__ProducerComponent__TimeCycleComponent__PendingInteractionComponent__InteractionComponent_ (const MethodInfo_3C1AB94* method);
; bytes=84 sha256=040611a03aee5563fffb93254103567b368ec20666ecef7bd9550d89173e8f00 status=arm64_complete_bound indexed_start=True
0x03C1AB94: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x03C1AB98: 081c40f9  ldr x8, [x0, #0x38]
0x03C1AB9C: f30300aa  mov x19, x0
0x03C1ABA0: 880000b5  cbnz x8, #0x3c1abb0
0x03C1ABA4: e00313aa  mov x0, x19
0x03C1ABA8: 34efd497  bl #0x3156878
0x03C1ABAC: 681e40f9  ldr x8, [x19, #0x38]
0x03C1ABB0: 000540f9  ldr x0, [x8, #8]
0x03C1ABB4: 08d44439  ldrb w8, [x0, #0x135]
0x03C1ABB8: 48000037  tbnz w8, #0, #0x3c1abc0
0x03C1ABBC: 18efd497  bl #0x315681c
0x03C1ABC0: 3898d597  bl #0x3180ca0
0x03C1ABC4: 681e40f9  ldr x8, [x19, #0x38]
0x03C1ABC8: e1031faa  mov x1, xzr
0x03C1ABCC: f30300aa  mov x19, x0
0x03C1ABD0: 020140f9  ldr x2, [x8]
0x03C1ABD4: 030940f9  ldr x3, [x8, #0x10]
0x03C1ABD8: 11091794  bl #0x41dd01c
0x03C1ABDC: e00313aa  mov x0, x19
0x03C1ABE0: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x03C1ABE4: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1ABE8 | ContextualizedECS.Query.Entities$$With<ChargeableComponent, ExpendableComponent, BoardTilePositionComponent, IdComponent, PendingInteractionComponent>
; native signature: ContextualizedECS_Query_Entities_MatchDelegate_ValueTuple_Entity__T1__T2__T3__T4__T5___o* ContextualizedECS_Query_Entities__With_ChargeableComponent__ExpendableComponent__BoardTilePositionComponent__IdComponent__PendingInteractionComponent_ (const MethodInfo_3C1ABE8* method);
; bytes=84 sha256=2a7b147b525cb82de5e7f50ae459d2b16f078a6216ced51412ceb108a59f7e5d status=arm64_complete_bound indexed_start=True
0x03C1ABE8: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x03C1ABEC: 081c40f9  ldr x8, [x0, #0x38]
0x03C1ABF0: f30300aa  mov x19, x0
0x03C1ABF4: 880000b5  cbnz x8, #0x3c1ac04
0x03C1ABF8: e00313aa  mov x0, x19
0x03C1ABFC: 1fefd497  bl #0x3156878
0x03C1AC00: 681e40f9  ldr x8, [x19, #0x38]
0x03C1AC04: 000540f9  ldr x0, [x8, #8]
0x03C1AC08: 08d44439  ldrb w8, [x0, #0x135]
0x03C1AC0C: 48000037  tbnz w8, #0, #0x3c1ac14
0x03C1AC10: 03efd497  bl #0x315681c
0x03C1AC14: 2398d597  bl #0x3180ca0
0x03C1AC18: 681e40f9  ldr x8, [x19, #0x38]
0x03C1AC1C: e1031faa  mov x1, xzr
0x03C1AC20: f30300aa  mov x19, x0
0x03C1AC24: 020140f9  ldr x2, [x8]
0x03C1AC28: 030940f9  ldr x3, [x8, #0x10]
0x03C1AC2C: 5e091794  bl #0x41dd1a4
0x03C1AC30: e00313aa  mov x0, x19
0x03C1AC34: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x03C1AC38: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1AC3C | ContextualizedECS.Query.Entities$$With<ExpendableComponent, BoardTilePositionComponent, IdComponent, InteractionComponent, PendingInteractionComponent>
; native signature: ContextualizedECS_Query_Entities_MatchDelegate_ValueTuple_Entity__T1__T2__T3__T4__T5___o* ContextualizedECS_Query_Entities__With_ExpendableComponent__BoardTilePositionComponent__IdComponent__InteractionComponent__PendingInteractionComponent_ (const MethodInfo_3C1AC3C* method);
; bytes=84 sha256=6f50d85b330696574d4faf4799de131126197e2465cd6e0ab16909fb68ccf4fe status=arm64_complete_bound indexed_start=True
0x03C1AC3C: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x03C1AC40: 081c40f9  ldr x8, [x0, #0x38]
0x03C1AC44: f30300aa  mov x19, x0
0x03C1AC48: 880000b5  cbnz x8, #0x3c1ac58
0x03C1AC4C: e00313aa  mov x0, x19
0x03C1AC50: 0aefd497  bl #0x3156878
0x03C1AC54: 681e40f9  ldr x8, [x19, #0x38]
0x03C1AC58: 000540f9  ldr x0, [x8, #8]
0x03C1AC5C: 08d44439  ldrb w8, [x0, #0x135]
0x03C1AC60: 48000037  tbnz w8, #0, #0x3c1ac68
0x03C1AC64: eeeed497  bl #0x315681c
0x03C1AC68: 0e98d597  bl #0x3180ca0
0x03C1AC6C: 681e40f9  ldr x8, [x19, #0x38]
0x03C1AC70: e1031faa  mov x1, xzr
0x03C1AC74: f30300aa  mov x19, x0
0x03C1AC78: 020140f9  ldr x2, [x8]
0x03C1AC7C: 030940f9  ldr x3, [x8, #0x10]
0x03C1AC80: ab091794  bl #0x41dd32c
0x03C1AC84: e00313aa  mov x0, x19
0x03C1AC88: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x03C1AC8C: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1AC90 | ContextualizedECS.Query.Entities$$With<SpawnerComponent, TimeCycleComponent, BoardTilePositionComponent, IdComponent, InteractionComponent>
; native signature: ContextualizedECS_Query_Entities_MatchDelegate_ValueTuple_Entity__T1__T2__T3__T4__T5___o* ContextualizedECS_Query_Entities__With_SpawnerComponent__TimeCycleComponent__BoardTilePositionComponent__IdComponent__InteractionComponent_ (const MethodInfo_3C1AC90* method);
; bytes=84 sha256=c110fea92f417405ff84d1b67859cbae039c712f53754ffaf1236fd1670fdcd0 status=arm64_complete_bound indexed_start=True
0x03C1AC90: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x03C1AC94: 081c40f9  ldr x8, [x0, #0x38]
0x03C1AC98: f30300aa  mov x19, x0
0x03C1AC9C: 880000b5  cbnz x8, #0x3c1acac
0x03C1ACA0: e00313aa  mov x0, x19
0x03C1ACA4: f5eed497  bl #0x3156878
0x03C1ACA8: 681e40f9  ldr x8, [x19, #0x38]
0x03C1ACAC: 000540f9  ldr x0, [x8, #8]
0x03C1ACB0: 08d44439  ldrb w8, [x0, #0x135]
0x03C1ACB4: 48000037  tbnz w8, #0, #0x3c1acbc
0x03C1ACB8: d9eed497  bl #0x315681c
0x03C1ACBC: f997d597  bl #0x3180ca0
0x03C1ACC0: 681e40f9  ldr x8, [x19, #0x38]
0x03C1ACC4: e1031faa  mov x1, xzr
0x03C1ACC8: f30300aa  mov x19, x0
0x03C1ACCC: 020140f9  ldr x2, [x8]
0x03C1ACD0: 030940f9  ldr x3, [x8, #0x10]
0x03C1ACD4: f8091794  bl #0x41dd4b4
0x03C1ACD8: e00313aa  mov x0, x19
0x03C1ACDC: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x03C1ACE0: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1ACE4 | ContextualizedECS.Query.Entities$$With<__Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType>
; native signature: ContextualizedECS_Query_Entities_MatchDelegate_ValueTuple_Entity__T1__T2__T3__T4__T5___o* ContextualizedECS_Query_Entities__With___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType_ (const MethodInfo_3C1ACE4* method);
; bytes=88 sha256=f5d081d25ef4a074c7545a1376f01e4f73a6c8aedb8ed5e0a07c0e798ae3d312 status=arm64_complete_bound indexed_start=True
0x03C1ACE4: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x03C1ACE8: 081c40f9  ldr x8, [x0, #0x38]
0x03C1ACEC: f30300aa  mov x19, x0
0x03C1ACF0: 880000b5  cbnz x8, #0x3c1ad00
0x03C1ACF4: e00313aa  mov x0, x19
0x03C1ACF8: e0eed497  bl #0x3156878
0x03C1ACFC: 681e40f9  ldr x8, [x19, #0x38]
0x03C1AD00: 000540f9  ldr x0, [x8, #8]
0x03C1AD04: 08d44439  ldrb w8, [x0, #0x135]
0x03C1AD08: 48000037  tbnz w8, #0, #0x3c1ad10
0x03C1AD0C: c4eed497  bl #0x315681c
0x03C1AD10: e497d597  bl #0x3180ca0
0x03C1AD14: 681e40f9  ldr x8, [x19, #0x38]
0x03C1AD18: e1031faa  mov x1, xzr
0x03C1AD1C: f30300aa  mov x19, x0
0x03C1AD20: 030940f9  ldr x3, [x8, #0x10]
0x03C1AD24: 020140f9  ldr x2, [x8]
0x03C1AD28: 690040f9  ldr x9, [x3]
0x03C1AD2C: 20013fd6  blr x9
0x03C1AD30: e00313aa  mov x0, x19
0x03C1AD34: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x03C1AD38: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C184F8 | ContextualizedECS.Query.Entities$$MatchMethod<BoardTilePositionComponent, CollectableComponent, IdComponent, PendingInteractionComponent, InteractionComponent>
; native signature: bool ContextualizedECS_Query_Entities__MatchMethod_BoardTilePositionComponent__CollectableComponent__IdComponent__PendingInteractionComponent__InteractionComponent_ (ContextualizedECS_Entity_o* entity, System_ValueTuple_Entity__T1__T2__T3__T4__T5__o* result, const MethodInfo_3C184F8* method);
; bytes=452 sha256=d1aa49a4871145b1b4f5732d569586e07661f029cd81dd04d2d496d26ce87fea status=arm64_complete_bound indexed_start=True
0x03C184F8: fd7bbca9  stp x29, x30, [sp, #-0x40]!
0x03C184FC: f85f01a9  stp x24, x23, [sp, #0x10]
0x03C18500: f65702a9  stp x22, x21, [sp, #0x20]
0x03C18504: f44f03a9  stp x20, x19, [sp, #0x30]
0x03C18508: ffc308d1  sub sp, sp, #0x230
0x03C1850C: 481c40f9  ldr x8, [x2, #0x38]
0x03C18510: f50302aa  mov x21, x2
0x03C18514: f30301aa  mov x19, x1
0x03C18518: f40300aa  mov x20, x0
0x03C1851C: 680000b5  cbnz x8, #0x3c18528
0x03C18520: e00315aa  mov x0, x21
0x03C18524: d5f8d497  bl #0x3156878
0x03C18528: 00e4006f  movi v0.2d, #0000000000000000
0x03C1852C: 02128052  movz w2, #0x90
0x03C18530: e00313aa  mov x0, x19
0x03C18534: e1031f2a  mov w1, wzr
0x03C18538: ffab01b9  str wzr, [sp, #0x1a8]
0x03C1853C: ff7f19a9  stp xzr, xzr, [sp, #0x190]
0x03C18540: ffd300f9  str xzr, [sp, #0x1a0]
0x03C18544: ff7f15a9  stp xzr, xzr, [sp, #0x150]
0x03C18548: ffa300f9  str xzr, [sp, #0x140]
0x03C1854C: e0830bad  stp q0, q0, [sp, #0x170]
0x03C18550: e05b803d  str q0, [sp, #0x160]
0x03C18554: e00309ad  stp q0, q0, [sp, #0x120]
0x03C18558: 12d9d694  bl #0x71ce9a0
0x03C1855C: f40a00b4  cbz x20, #0x3c186b8
0x03C18560: a81e40f9  ldr x8, [x21, #0x38]
0x03C18564: e1a30691  add x1, sp, #0x1a8
0x03C18568: e00314aa  mov x0, x20
0x03C1856C: 020940f9  ldr x2, [x8, #0x10]
0x03C18570: 5d170094  bl #0x3c1e2e4
0x03C18574: 40090036  tbz w0, #0, #0x3c1869c
0x03C18578: a81e40f9  ldr x8, [x21, #0x38]
0x03C1857C: e1430691  add x1, sp, #0x190
0x03C18580: e00314aa  mov x0, x20
0x03C18584: 021140f9  ldr x2, [x8, #0x20]
0x03C18588: 69180094  bl #0x3c1e72c
0x03C1858C: 80080036  tbz w0, #0, #0x3c1869c
0x03C18590: a81e40f9  ldr x8, [x21, #0x38]
0x03C18594: e1830591  add x1, sp, #0x160
0x03C18598: e00314aa  mov x0, x20
0x03C1859C: 021940f9  ldr x2, [x8, #0x30]
0x03C185A0: 0b1a0094  bl #0x3c1edcc
0x03C185A4: c0070036  tbz w0, #0, #0x3c1869c
0x03C185A8: a81e40f9  ldr x8, [x21, #0x38]
0x03C185AC: e1430591  add x1, sp, #0x150
0x03C185B0: e00314aa  mov x0, x20
0x03C185B4: 022140f9  ldr x2, [x8, #0x40]
0x03C185B8: 371c0094  bl #0x3c1f694
0x03C185BC: 00070036  tbz w0, #0, #0x3c1869c
0x03C185C0: a81e40f9  ldr x8, [x21, #0x38]
0x03C185C4: e1830491  add x1, sp, #0x120
0x03C185C8: e00314aa  mov x0, x20
0x03C185CC: 022940f9  ldr x2, [x8, #0x50]
0x03C185D0: 921a0094  bl #0x3c1f018
0x03C185D4: 40060036  tbz w0, #0, #0x3c1869c
0x03C185D8: e367c03d  ldr q3, [sp, #0x190]
0x03C185DC: e10b4bad  ldp q1, q2, [sp, #0x160]
0x03C185E0: e063c03d  ldr q0, [sp, #0x180]
0x03C185E4: e8d340f9  ldr x8, [sp, #0x1a0]
0x03C185E8: e9a340f9  ldr x9, [sp, #0x140]
0x03C185EC: e10b02ad  stp q1, q2, [sp, #0x40]
0x03C185F0: e00f03ad  stp q0, q3, [sp, #0x60]
0x03C185F4: e00749ad  ldp q0, q1, [sp, #0x120]
0x03C185F8: f6ab41b9  ldr w22, [sp, #0x1a8]
0x03C185FC: f76355a9  ldp x23, x24, [sp, #0x150]
0x03C18600: e0430291  add x0, sp, #0x90
0x03C18604: 02128052  movz w2, #0x90
0x03C18608: e1031f2a  mov w1, wzr
0x03C1860C: e84300f9  str x8, [sp, #0x80]
0x03C18610: e08700ad  stp q0, q1, [sp, #0x10]
0x03C18614: e91b00f9  str x9, [sp, #0x30]
0x03C18618: e2d8d694  bl #0x71ce9a0
0x03C1861C: a81e40f9  ldr x8, [x21, #0x38]
0x03C18620: e31fc03d  ldr q3, [sp, #0x70]
0x03C18624: e10b42ad  ldp q1, q2, [sp, #0x40]
0x03C18628: e01bc03d  ldr q0, [sp, #0x60]
0x03C1862C: 083140f9  ldr x8, [x8, #0x60]
0x03C18630: e94340f9  ldr x9, [sp, #0x80]
0x03C18634: e10b0fad  stp q1, q2, [sp, #0x1e0]
0x03C18638: e00f10ad  stp q0, q3, [sp, #0x200]
0x03C1863C: e08740ad  ldp q0, q1, [sp, #0x10]
0x03C18640: ea1b40f9  ldr x10, [sp, #0x30]
0x03C18644: e0430291  add x0, sp, #0x90
0x03C18648: e3430891  add x3, sp, #0x210
0x03C1864C: e4830791  add x4, sp, #0x1e0
0x03C18650: e7c30691  add x7, sp, #0x1b0
0x03C18654: e10314aa  mov x1, x20
0x03C18658: e20316aa  mov x2, x22
0x03C1865C: e50317aa  mov x5, x23
0x03C18660: e60318aa  mov x6, x24
0x03C18664: e91301f9  str x9, [sp, #0x220]
0x03C18668: e0870dad  stp q0, q1, [sp, #0x1b0]
0x03C1866C: eaeb00f9  str x10, [sp, #0x1d0]
0x03C18670: e80300f9  str x8, [sp]
0x03C18674: 931f3194  bl #0x48604c0
0x03C18678: e1430291  add x1, sp, #0x90
0x03C1867C: 02128052  movz w2, #0x90
0x03C18680: e00313aa  mov x0, x19
0x03C18684: bbd8d694  bl #0x71ce970
0x03C18688: e00313aa  mov x0, x19
0x03C1868C: e1031faa  mov x1, xzr
0x03C18690: cda0d597  bl #0x31809c4
0x03C18694: 20008052  movz w0, #0x1
0x03C18698: 02000014  b #0x3c186a0
0x03C1869C: e0031f2a  mov w0, wzr
0x03C186A0: ffc30891  add sp, sp, #0x230
0x03C186A4: f44f43a9  ldp x20, x19, [sp, #0x30]
0x03C186A8: f65742a9  ldp x22, x21, [sp, #0x20]
0x03C186AC: f85f41a9  ldp x24, x23, [sp, #0x10]
0x03C186B0: fd7bc4a8  ldp x29, x30, [sp], #0x40
0x03C186B4: c0035fd6  ret
0x03C186B8: 7da1d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C186BC | ContextualizedECS.Query.Entities$$MatchMethod<BoardTilePositionComponent, ProducerComponent, TimeCycleComponent, PendingInteractionComponent, InteractionComponent>
; native signature: bool ContextualizedECS_Query_Entities__MatchMethod_BoardTilePositionComponent__ProducerComponent__TimeCycleComponent__PendingInteractionComponent__InteractionComponent_ (ContextualizedECS_Entity_o* entity, System_ValueTuple_Entity__T1__T2__T3__T4__T5__o* result, const MethodInfo_3C186BC* method);
; bytes=428 sha256=b31e250d7cfa2f59a5984fcf1f7aa1afd9826fa5ed25d6b420457b49b5d397a6 status=arm64_complete_bound indexed_start=True
0x03C186BC: fd7bbca9  stp x29, x30, [sp, #-0x40]!
0x03C186C0: f85f01a9  stp x24, x23, [sp, #0x10]
0x03C186C4: f65702a9  stp x22, x21, [sp, #0x20]
0x03C186C8: f44f03a9  stp x20, x19, [sp, #0x30]
0x03C186CC: ff030ad1  sub sp, sp, #0x280
0x03C186D0: 481c40f9  ldr x8, [x2, #0x38]
0x03C186D4: f50302aa  mov x21, x2
0x03C186D8: f30301aa  mov x19, x1
0x03C186DC: f40300aa  mov x20, x0
0x03C186E0: 680000b5  cbnz x8, #0x3c186ec
0x03C186E4: e00315aa  mov x0, x21
0x03C186E8: 64f8d497  bl #0x3156878
0x03C186EC: 00e4006f  movi v0.2d, #0000000000000000
0x03C186F0: 02178052  movz w2, #0xb8
0x03C186F4: e00313aa  mov x0, x19
0x03C186F8: e1031f2a  mov w1, wzr
0x03C186FC: ffdb01b9  str wzr, [sp, #0x1d8]
0x03C18700: ff7f15a9  stp xzr, xzr, [sp, #0x150]
0x03C18704: ffa300f9  str xzr, [sp, #0x140]
0x03C18708: e0830dad  stp q0, q0, [sp, #0x1b0]
0x03C1870C: e0830cad  stp q0, q0, [sp, #0x190]
0x03C18710: e0830bad  stp q0, q0, [sp, #0x170]
0x03C18714: e05b803d  str q0, [sp, #0x160]
0x03C18718: e00309ad  stp q0, q0, [sp, #0x120]
0x03C1871C: a1d8d694  bl #0x71ce9a0
0x03C18720: 340a00b4  cbz x20, #0x3c18864
0x03C18724: a81e40f9  ldr x8, [x21, #0x38]
0x03C18728: e1630791  add x1, sp, #0x1d8
0x03C1872C: e00314aa  mov x0, x20
0x03C18730: 020940f9  ldr x2, [x8, #0x10]
0x03C18734: ec160094  bl #0x3c1e2e4
0x03C18738: 80080036  tbz w0, #0, #0x3c18848
0x03C1873C: a81e40f9  ldr x8, [x21, #0x38]
0x03C18740: e1c30691  add x1, sp, #0x1b0
0x03C18744: e00314aa  mov x0, x20
0x03C18748: 021140f9  ldr x2, [x8, #0x20]
0x03C1874C: 5b1c0094  bl #0x3c1f8b8
0x03C18750: c0070036  tbz w0, #0, #0x3c18848
0x03C18754: a81e40f9  ldr x8, [x21, #0x38]
0x03C18758: e1830591  add x1, sp, #0x160
0x03C1875C: e00314aa  mov x0, x20
0x03C18760: 021940f9  ldr x2, [x8, #0x30]
0x03C18764: 281d0094  bl #0x3c1fc04
0x03C18768: 00070036  tbz w0, #0, #0x3c18848
0x03C1876C: a81e40f9  ldr x8, [x21, #0x38]
0x03C18770: e1430591  add x1, sp, #0x150
0x03C18774: e00314aa  mov x0, x20
0x03C18778: 022140f9  ldr x2, [x8, #0x40]
0x03C1877C: c61b0094  bl #0x3c1f694
0x03C18780: 40060036  tbz w0, #0, #0x3c18848
0x03C18784: a81e40f9  ldr x8, [x21, #0x38]
0x03C18788: e1830491  add x1, sp, #0x120
0x03C1878C: e00314aa  mov x0, x20
0x03C18790: 022940f9  ldr x2, [x8, #0x50]
0x03C18794: 211a0094  bl #0x3c1f018
0x03C18798: 80050036  tbz w0, #0, #0x3c18848
0x03C1879C: e0874dad  ldp q0, q1, [sp, #0x1b0]
0x03C187A0: e20f49ad  ldp q2, q3, [sp, #0x120]
0x03C187A4: e8a340f9  ldr x8, [sp, #0x140]
0x03C187A8: f6db41b9  ldr w22, [sp, #0x1d8]
0x03C187AC: f76355a9  ldp x23, x24, [sp, #0x150]
0x03C187B0: e0a30191  add x0, sp, #0x68
0x03C187B4: 02178052  movz w2, #0xb8
0x03C187B8: e1031f2a  mov w1, wzr
0x03C187BC: e00702ad  stp q0, q1, [sp, #0x40]
0x03C187C0: e28f00ad  stp q2, q3, [sp, #0x10]
0x03C187C4: e81b00f9  str x8, [sp, #0x30]
0x03C187C8: 76d8d694  bl #0x71ce9a0
0x03C187CC: a81e40f9  ldr x8, [x21, #0x38]
0x03C187D0: e00742ad  ldp q0, q1, [sp, #0x40]
0x03C187D4: e0430891  add x0, sp, #0x210
0x03C187D8: e1830591  add x1, sp, #0x160
0x03C187DC: 153140f9  ldr x21, [x8, #0x60]
0x03C187E0: 020a8052  movz w2, #0x50
0x03C187E4: e00713ad  stp q0, q1, [sp, #0x260]
0x03C187E8: 62d8d694  bl #0x71ce970
0x03C187EC: e08740ad  ldp q0, q1, [sp, #0x10]
0x03C187F0: e81b40f9  ldr x8, [sp, #0x30]
0x03C187F4: e0a30191  add x0, sp, #0x68
0x03C187F8: e3830991  add x3, sp, #0x260
0x03C187FC: e4430891  add x4, sp, #0x210
0x03C18800: e7830791  add x7, sp, #0x1e0
0x03C18804: e10314aa  mov x1, x20
0x03C18808: e20316aa  mov x2, x22
0x03C1880C: e50317aa  mov x5, x23
0x03C18810: e60318aa  mov x6, x24
0x03C18814: e0070fad  stp q0, q1, [sp, #0x1e0]
0x03C18818: e80301f9  str x8, [sp, #0x200]
0x03C1881C: f50300f9  str x21, [sp]
0x03C18820: f9273194  bl #0x4862804
0x03C18824: e1a30191  add x1, sp, #0x68
0x03C18828: 02178052  movz w2, #0xb8
0x03C1882C: e00313aa  mov x0, x19
0x03C18830: 50d8d694  bl #0x71ce970
0x03C18834: e00313aa  mov x0, x19
0x03C18838: e1031faa  mov x1, xzr
0x03C1883C: 62a0d597  bl #0x31809c4
0x03C18840: 20008052  movz w0, #0x1
0x03C18844: 02000014  b #0x3c1884c
0x03C18848: e0031f2a  mov w0, wzr
0x03C1884C: ff030a91  add sp, sp, #0x280
0x03C18850: f44f43a9  ldp x20, x19, [sp, #0x30]
0x03C18854: f65742a9  ldp x22, x21, [sp, #0x20]
0x03C18858: f85f41a9  ldp x24, x23, [sp, #0x10]
0x03C1885C: fd7bc4a8  ldp x29, x30, [sp], #0x40
0x03C18860: c0035fd6  ret
0x03C18864: 12a1d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C18868 | ContextualizedECS.Query.Entities$$MatchMethod<ChargeableComponent, ExpendableComponent, BoardTilePositionComponent, IdComponent, PendingInteractionComponent>
; native signature: bool ContextualizedECS_Query_Entities__MatchMethod_ChargeableComponent__ExpendableComponent__BoardTilePositionComponent__IdComponent__PendingInteractionComponent_ (ContextualizedECS_Entity_o* entity, System_ValueTuple_Entity__T1__T2__T3__T4__T5__o* result, const MethodInfo_3C18868* method);
; bytes=436 sha256=41af8ef4a3323fb95393ce1e856db37de6e80c5eef08e40ca758761abbaadb94 status=arm64_complete_bound indexed_start=True
0x03C18868: fd0f1bf8  str x29, [sp, #-0x50]!
0x03C1886C: fe6701a9  stp x30, x25, [sp, #0x10]
0x03C18870: f85f02a9  stp x24, x23, [sp, #0x20]
0x03C18874: f65703a9  stp x22, x21, [sp, #0x30]
0x03C18878: f44f04a9  stp x20, x19, [sp, #0x40]
0x03C1887C: ff8307d1  sub sp, sp, #0x1e0
0x03C18880: 481c40f9  ldr x8, [x2, #0x38]
0x03C18884: f50302aa  mov x21, x2
0x03C18888: f30301aa  mov x19, x1
0x03C1888C: f40300aa  mov x20, x0
0x03C18890: 680000b5  cbnz x8, #0x3c1889c
0x03C18894: e00315aa  mov x0, x21
0x03C18898: f8f7d497  bl #0x3156878
0x03C1889C: 00e4006f  movi v0.2d, #0000000000000000
0x03C188A0: 02118052  movz w2, #0x88
0x03C188A4: e00313aa  mov x0, x19
0x03C188A8: e1031f2a  mov w1, wzr
0x03C188AC: fff700f9  str xzr, [sp, #0x1e8]
0x03C188B0: ff4b01b9  str wzr, [sp, #0x148]
0x03C188B4: e0030bad  stp q0, q0, [sp, #0x160]
0x03C188B8: e057803d  str q0, [sp, #0x150]
0x03C188BC: e00309ad  stp q0, q0, [sp, #0x120]
0x03C188C0: e047803d  str q0, [sp, #0x110]
0x03C188C4: ff7f10a9  stp xzr, xzr, [sp, #0x100]
0x03C188C8: 36d8d694  bl #0x71ce9a0
0x03C188CC: 740a00b4  cbz x20, #0x3c18a18
0x03C188D0: a81e40f9  ldr x8, [x21, #0x38]
0x03C188D4: e1a30791  add x1, sp, #0x1e8
0x03C188D8: e00314aa  mov x0, x20
0x03C188DC: 020940f9  ldr x2, [x8, #0x10]
0x03C188E0: 50170094  bl #0x3c1e620
0x03C188E4: a0080036  tbz w0, #0, #0x3c189f8
0x03C188E8: a81e40f9  ldr x8, [x21, #0x38]
0x03C188EC: e1430591  add x1, sp, #0x150
0x03C188F0: e00314aa  mov x0, x20
0x03C188F4: 021140f9  ldr x2, [x8, #0x20]
0x03C188F8: a5180094  bl #0x3c1eb8c
0x03C188FC: e0070036  tbz w0, #0, #0x3c189f8
0x03C18900: a81e40f9  ldr x8, [x21, #0x38]
0x03C18904: e1230591  add x1, sp, #0x148
0x03C18908: e00314aa  mov x0, x20
0x03C1890C: 021940f9  ldr x2, [x8, #0x30]
0x03C18910: 75160094  bl #0x3c1e2e4
0x03C18914: 20070036  tbz w0, #0, #0x3c189f8
0x03C18918: a81e40f9  ldr x8, [x21, #0x38]
0x03C1891C: e1430491  add x1, sp, #0x110
0x03C18920: e00314aa  mov x0, x20
0x03C18924: 022140f9  ldr x2, [x8, #0x40]
0x03C18928: 29190094  bl #0x3c1edcc
0x03C1892C: 60060036  tbz w0, #0, #0x3c189f8
0x03C18930: a81e40f9  ldr x8, [x21, #0x38]
0x03C18934: e1030491  add x1, sp, #0x100
0x03C18938: e00314aa  mov x0, x20
0x03C1893C: 022940f9  ldr x2, [x8, #0x50]
0x03C18940: 551b0094  bl #0x3c1f694
0x03C18944: a0050036  tbz w0, #0, #0x3c189f8
0x03C18948: e0874aad  ldp q0, q1, [sp, #0x150]
0x03C1894C: e25fc03d  ldr q2, [sp, #0x170]
0x03C18950: f6f740f9  ldr x22, [sp, #0x1e8]
0x03C18954: f74b41b9  ldr w23, [sp, #0x148]
0x03C18958: e00702ad  stp q0, q1, [sp, #0x40]
0x03C1895C: e08748ad  ldp q0, q1, [sp, #0x110]
0x03C18960: e21b803d  str q2, [sp, #0x60]
0x03C18964: e24fc03d  ldr q2, [sp, #0x130]
0x03C18968: f86750a9  ldp x24, x25, [sp, #0x100]
0x03C1896C: e0e30191  add x0, sp, #0x78
0x03C18970: 02118052  movz w2, #0x88
0x03C18974: e1031f2a  mov w1, wzr
0x03C18978: e08700ad  stp q0, q1, [sp, #0x10]
0x03C1897C: e20f803d  str q2, [sp, #0x30]
0x03C18980: 08d8d694  bl #0x71ce9a0
0x03C18984: a81e40f9  ldr x8, [x21, #0x38]
0x03C18988: e00742ad  ldp q0, q1, [sp, #0x40]
0x03C1898C: e21bc03d  ldr q2, [sp, #0x60]
0x03C18990: e39340ad  ldp q3, q4, [sp, #0x10]
0x03C18994: e50fc03d  ldr q5, [sp, #0x30]
0x03C18998: 083140f9  ldr x8, [x8, #0x60]
0x03C1899C: e0e30191  add x0, sp, #0x78
0x03C189A0: e3c30691  add x3, sp, #0x1b0
0x03C189A4: e5030691  add x5, sp, #0x180
0x03C189A8: e10314aa  mov x1, x20
0x03C189AC: e20316aa  mov x2, x22
0x03C189B0: e40317aa  mov x4, x23
0x03C189B4: e60318aa  mov x6, x24
0x03C189B8: e70319aa  mov x7, x25
0x03C189BC: e0870dad  stp q0, q1, [sp, #0x1b0]
0x03C189C0: e277803d  str q2, [sp, #0x1d0]
0x03C189C4: e3130cad  stp q3, q4, [sp, #0x180]
0x03C189C8: e56b803d  str q5, [sp, #0x1a0]
0x03C189CC: e80300f9  str x8, [sp]
0x03C189D0: 30303194  bl #0x4864a90
0x03C189D4: e1e30191  add x1, sp, #0x78
0x03C189D8: 02118052  movz w2, #0x88
0x03C189DC: e00313aa  mov x0, x19
0x03C189E0: e4d7d694  bl #0x71ce970
0x03C189E4: e00313aa  mov x0, x19
0x03C189E8: e1031faa  mov x1, xzr
0x03C189EC: f69fd597  bl #0x31809c4
0x03C189F0: 20008052  movz w0, #0x1
0x03C189F4: 02000014  b #0x3c189fc
0x03C189F8: e0031f2a  mov w0, wzr
0x03C189FC: ff830791  add sp, sp, #0x1e0
0x03C18A00: f44f44a9  ldp x20, x19, [sp, #0x40]
0x03C18A04: f65743a9  ldp x22, x21, [sp, #0x30]
0x03C18A08: f85f42a9  ldp x24, x23, [sp, #0x20]
0x03C18A0C: fe6741a9  ldp x30, x25, [sp, #0x10]
0x03C18A10: fd0745f8  ldr x29, [sp], #0x50
0x03C18A14: c0035fd6  ret
0x03C18A18: a5a0d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C18A1C | ContextualizedECS.Query.Entities$$MatchMethod<ExpendableComponent, BoardTilePositionComponent, IdComponent, InteractionComponent, PendingInteractionComponent>
; native signature: bool ContextualizedECS_Query_Entities__MatchMethod_ExpendableComponent__BoardTilePositionComponent__IdComponent__InteractionComponent__PendingInteractionComponent_ (ContextualizedECS_Entity_o* entity, System_ValueTuple_Entity__T1__T2__T3__T4__T5__o* result, const MethodInfo_3C18A1C* method);
; bytes=460 sha256=53dc55f4269f6acb59823f8ae19e8e77040bfe432a9667a843d3b9e3d47a0aa6 status=arm64_complete_bound indexed_start=True
0x03C18A1C: fd7bbca9  stp x29, x30, [sp, #-0x40]!
0x03C18A20: f85f01a9  stp x24, x23, [sp, #0x10]
0x03C18A24: f65702a9  stp x22, x21, [sp, #0x20]
0x03C18A28: f44f03a9  stp x20, x19, [sp, #0x30]
0x03C18A2C: ff430ad1  sub sp, sp, #0x290
0x03C18A30: 481c40f9  ldr x8, [x2, #0x38]
0x03C18A34: f50302aa  mov x21, x2
0x03C18A38: f30301aa  mov x19, x1
0x03C18A3C: f40300aa  mov x20, x0
0x03C18A40: 680000b5  cbnz x8, #0x3c18a4c
0x03C18A44: e00315aa  mov x0, x21
0x03C18A48: 8cf7d497  bl #0x3156878
0x03C18A4C: 00e4006f  movi v0.2d, #0000000000000000
0x03C18A50: 02158052  movz w2, #0xa8
0x03C18A54: e00313aa  mov x0, x19
0x03C18A58: e1031f2a  mov w1, wzr
0x03C18A5C: ffcb01b9  str wzr, [sp, #0x1c8]
0x03C18A60: ffc300f9  str xzr, [sp, #0x180]
0x03C18A64: e0030fad  stp q0, q0, [sp, #0x1e0]
0x03C18A68: e077803d  str q0, [sp, #0x1d0]
0x03C18A6C: e0030dad  stp q0, q0, [sp, #0x1a0]
0x03C18A70: e067803d  str q0, [sp, #0x190]
0x03C18A74: e0030bad  stp q0, q0, [sp, #0x160]
0x03C18A78: ff7f15a9  stp xzr, xzr, [sp, #0x150]
0x03C18A7C: c9d7d694  bl #0x71ce9a0
0x03C18A80: 340b00b4  cbz x20, #0x3c18be4
0x03C18A84: a81e40f9  ldr x8, [x21, #0x38]
0x03C18A88: e1430791  add x1, sp, #0x1d0
0x03C18A8C: e00314aa  mov x0, x20
0x03C18A90: 020940f9  ldr x2, [x8, #0x10]
0x03C18A94: 3e180094  bl #0x3c1eb8c
0x03C18A98: 80090036  tbz w0, #0, #0x3c18bc8
0x03C18A9C: a81e40f9  ldr x8, [x21, #0x38]
0x03C18AA0: e1230791  add x1, sp, #0x1c8
0x03C18AA4: e00314aa  mov x0, x20
0x03C18AA8: 021140f9  ldr x2, [x8, #0x20]
0x03C18AAC: 0e160094  bl #0x3c1e2e4
0x03C18AB0: c0080036  tbz w0, #0, #0x3c18bc8
0x03C18AB4: a81e40f9  ldr x8, [x21, #0x38]
0x03C18AB8: e1430691  add x1, sp, #0x190
0x03C18ABC: e00314aa  mov x0, x20
0x03C18AC0: 021940f9  ldr x2, [x8, #0x30]
0x03C18AC4: c2180094  bl #0x3c1edcc
0x03C18AC8: 00080036  tbz w0, #0, #0x3c18bc8
0x03C18ACC: a81e40f9  ldr x8, [x21, #0x38]
0x03C18AD0: e1830591  add x1, sp, #0x160
0x03C18AD4: e00314aa  mov x0, x20
0x03C18AD8: 022140f9  ldr x2, [x8, #0x40]
0x03C18ADC: 4f190094  bl #0x3c1f018
0x03C18AE0: 40070036  tbz w0, #0, #0x3c18bc8
0x03C18AE4: a81e40f9  ldr x8, [x21, #0x38]
0x03C18AE8: e1430591  add x1, sp, #0x150
0x03C18AEC: e00314aa  mov x0, x20
0x03C18AF0: 022940f9  ldr x2, [x8, #0x50]
0x03C18AF4: e81a0094  bl #0x3c1f694
0x03C18AF8: 80060036  tbz w0, #0, #0x3c18bc8
0x03C18AFC: e0874ead  ldp q0, q1, [sp, #0x1d0]
0x03C18B00: e27fc03d  ldr q2, [sp, #0x1f0]
0x03C18B04: e8c340f9  ldr x8, [sp, #0x180]
0x03C18B08: f6cb41b9  ldr w22, [sp, #0x1c8]
0x03C18B0C: e08703ad  stp q0, q1, [sp, #0x70]
0x03C18B10: e0874cad  ldp q0, q1, [sp, #0x190]
0x03C18B14: e227803d  str q2, [sp, #0x90]
0x03C18B18: e26fc03d  ldr q2, [sp, #0x1b0]
0x03C18B1C: f76355a9  ldp x23, x24, [sp, #0x150]
0x03C18B20: e00702ad  stp q0, q1, [sp, #0x40]
0x03C18B24: e0074bad  ldp q0, q1, [sp, #0x160]
0x03C18B28: e0a30291  add x0, sp, #0xa8
0x03C18B2C: 02158052  movz w2, #0xa8
0x03C18B30: e1031f2a  mov w1, wzr
0x03C18B34: e21b803d  str q2, [sp, #0x60]
0x03C18B38: e81b00f9  str x8, [sp, #0x30]
0x03C18B3C: e08700ad  stp q0, q1, [sp, #0x10]
0x03C18B40: 98d7d694  bl #0x71ce9a0
0x03C18B44: a81e40f9  ldr x8, [x21, #0x38]
0x03C18B48: e08743ad  ldp q0, q1, [sp, #0x70]
0x03C18B4C: e227c03d  ldr q2, [sp, #0x90]
0x03C18B50: e31342ad  ldp q3, q4, [sp, #0x40]
0x03C18B54: e51bc03d  ldr q5, [sp, #0x60]
0x03C18B58: 083140f9  ldr x8, [x8, #0x60]
0x03C18B5C: e00713ad  stp q0, q1, [sp, #0x260]
0x03C18B60: e08740ad  ldp q0, q1, [sp, #0x10]
0x03C18B64: e91b40f9  ldr x9, [sp, #0x30]
0x03C18B68: e0a30291  add x0, sp, #0xa8
0x03C18B6C: e2830991  add x2, sp, #0x260
0x03C18B70: e4c30891  add x4, sp, #0x230
0x03C18B74: e5030891  add x5, sp, #0x200
0x03C18B78: e10314aa  mov x1, x20
0x03C18B7C: e30316aa  mov x3, x22
0x03C18B80: e60317aa  mov x6, x23
0x03C18B84: e70318aa  mov x7, x24
0x03C18B88: e2a3803d  str q2, [sp, #0x280]
0x03C18B8C: e39311ad  stp q3, q4, [sp, #0x230]
0x03C18B90: e597803d  str q5, [sp, #0x250]
0x03C18B94: e91301f9  str x9, [sp, #0x220]
0x03C18B98: e00710ad  stp q0, q1, [sp, #0x200]
0x03C18B9C: e80300f9  str x8, [sp]
0x03C18BA0: 43383194  bl #0x4866cac
0x03C18BA4: e1a30291  add x1, sp, #0xa8
0x03C18BA8: 02158052  movz w2, #0xa8
0x03C18BAC: e00313aa  mov x0, x19
0x03C18BB0: 70d7d694  bl #0x71ce970
0x03C18BB4: e00313aa  mov x0, x19
0x03C18BB8: e1031faa  mov x1, xzr
0x03C18BBC: 829fd597  bl #0x31809c4
0x03C18BC0: 20008052  movz w0, #0x1
0x03C18BC4: 02000014  b #0x3c18bcc
0x03C18BC8: e0031f2a  mov w0, wzr
0x03C18BCC: ff430a91  add sp, sp, #0x290
0x03C18BD0: f44f43a9  ldp x20, x19, [sp, #0x30]
0x03C18BD4: f65742a9  ldp x22, x21, [sp, #0x20]
0x03C18BD8: f85f41a9  ldp x24, x23, [sp, #0x10]
0x03C18BDC: fd7bc4a8  ldp x29, x30, [sp], #0x40
0x03C18BE0: c0035fd6  ret
0x03C18BE4: 32a0d597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C18BE8 | ContextualizedECS.Query.Entities$$MatchMethod<SpawnerComponent, TimeCycleComponent, BoardTilePositionComponent, IdComponent, InteractionComponent>
; native signature: bool ContextualizedECS_Query_Entities__MatchMethod_SpawnerComponent__TimeCycleComponent__BoardTilePositionComponent__IdComponent__InteractionComponent_ (ContextualizedECS_Entity_o* entity, System_ValueTuple_Entity__T1__T2__T3__T4__T5__o* result, const MethodInfo_3C18BE8* method);
; bytes=472 sha256=317a342e16693bc5a1977a22f2fc3b52f566a5f1f82305cd327aa08a865abce7 status=arm64_complete_bound indexed_start=True
0x03C18BE8: fd7bbda9  stp x29, x30, [sp, #-0x30]!
0x03C18BEC: f65701a9  stp x22, x21, [sp, #0x10]
0x03C18BF0: f44f02a9  stp x20, x19, [sp, #0x20]
0x03C18BF4: ff030cd1  sub sp, sp, #0x300
0x03C18BF8: 481c40f9  ldr x8, [x2, #0x38]
0x03C18BFC: f50302aa  mov x21, x2
0x03C18C00: f30301aa  mov x19, x1
0x03C18C04: f40300aa  mov x20, x0
0x03C18C08: 680000b5  cbnz x8, #0x3c18c14
0x03C18C0C: e00315aa  mov x0, x21
0x03C18C10: 1af7d497  bl #0x3156878
0x03C18C14: 00e4006f  movi v0.2d, #0000000000000000
0x03C18C18: 021a8052  movz w2, #0xd0
0x03C18C1C: e00313aa  mov x0, x19
0x03C18C20: e1031f2a  mov w1, wzr
0x03C18C24: ff1301f9  str xzr, [sp, #0x220]
0x03C18C28: ff0f01f9  str xzr, [sp, #0x218]
0x03C18C2C: ff1701f9  str xzr, [sp, #0x228]
0x03C18C30: ffbb01b9  str wzr, [sp, #0x1b8]
0x03C18C34: ffbb00f9  str xzr, [sp, #0x170]
0x03C18C38: e0830fad  stp q0, q0, [sp, #0x1f0]
0x03C18C3C: e0830ead  stp q0, q0, [sp, #0x1d0]
0x03C18C40: e073803d  str q0, [sp, #0x1c0]
0x03C18C44: e0830cad  stp q0, q0, [sp, #0x190]
0x03C18C48: e063803d  str q0, [sp, #0x180]
0x03C18C4C: e0830aad  stp q0, q0, [sp, #0x150]
0x03C18C50: 54d7d694  bl #0x71ce9a0
0x03C18C54: 540b00b4  cbz x20, #0x3c18dbc
0x03C18C58: a81e40f9  ldr x8, [x21, #0x38]
0x03C18C5C: e1630891  add x1, sp, #0x218
0x03C18C60: e00314aa  mov x0, x20
0x03C18C64: 020940f9  ldr x2, [x8, #0x10]
0x03C18C68: 9e1b0094  bl #0x3c1fae0
0x03C18C6C: c0090036  tbz w0, #0, #0x3c18da4
0x03C18C70: a81e40f9  ldr x8, [x21, #0x38]
0x03C18C74: e1030791  add x1, sp, #0x1c0
0x03C18C78: e00314aa  mov x0, x20
0x03C18C7C: 021140f9  ldr x2, [x8, #0x20]
0x03C18C80: e11b0094  bl #0x3c1fc04
0x03C18C84: 00090036  tbz w0, #0, #0x3c18da4
0x03C18C88: a81e40f9  ldr x8, [x21, #0x38]
0x03C18C8C: e1e30691  add x1, sp, #0x1b8
0x03C18C90: e00314aa  mov x0, x20
0x03C18C94: 021940f9  ldr x2, [x8, #0x30]
0x03C18C98: 93150094  bl #0x3c1e2e4
0x03C18C9C: 40080036  tbz w0, #0, #0x3c18da4
0x03C18CA0: a81e40f9  ldr x8, [x21, #0x38]
0x03C18CA4: e1030691  add x1, sp, #0x180
0x03C18CA8: e00314aa  mov x0, x20
0x03C18CAC: 022140f9  ldr x2, [x8, #0x40]
0x03C18CB0: 47180094  bl #0x3c1edcc
0x03C18CB4: 80070036  tbz w0, #0, #0x3c18da4
0x03C18CB8: a81e40f9  ldr x8, [x21, #0x38]
0x03C18CBC: e1430591  add x1, sp, #0x150
0x03C18CC0: e00314aa  mov x0, x20
0x03C18CC4: 022940f9  ldr x2, [x8, #0x50]
0x03C18CC8: d4180094  bl #0x3c1f018
0x03C18CCC: c0060036  tbz w0, #0, #0x3c18da4
0x03C18CD0: e8670491  add x8, sp, #0x119
0x03C18CD4: 03f1cf3c  ldur q3, [x8, #0xff]
0x03C18CD8: e10b4cad  ldp q1, q2, [sp, #0x180]
0x03C18CDC: e06bc03d  ldr q0, [sp, #0x1a0]
0x03C18CE0: e81741f9  ldr x8, [sp, #0x228]
0x03C18CE4: e9bb40f9  ldr x9, [sp, #0x170]
0x03C18CE8: e18b01ad  stp q1, q2, [sp, #0x30]
0x03C18CEC: e08f02ad  stp q0, q3, [sp, #0x50]
0x03C18CF0: e0874aad  ldp q0, q1, [sp, #0x150]
0x03C18CF4: f6bb41b9  ldr w22, [sp, #0x1b8]
0x03C18CF8: e0030291  add x0, sp, #0x80
0x03C18CFC: 021a8052  movz w2, #0xd0
0x03C18D00: e1031f2a  mov w1, wzr
0x03C18D04: e83b00f9  str x8, [sp, #0x70]
0x03C18D08: e00700ad  stp q0, q1, [sp]
0x03C18D0C: e91300f9  str x9, [sp, #0x20]
0x03C18D10: 24d7d694  bl #0x71ce9a0
0x03C18D14: a81e40f9  ldr x8, [x21, #0x38]
0x03C18D18: e01bc03d  ldr q0, [sp, #0x60]
0x03C18D1C: e93b40f9  ldr x9, [sp, #0x70]
0x03C18D20: e0430a91  add x0, sp, #0x290
0x03C18D24: 153140f9  ldr x21, [x8, #0x60]
0x03C18D28: e1030791  add x1, sp, #0x1c0
0x03C18D2C: 020a8052  movz w2, #0x50
0x03C18D30: e0bb803d  str q0, [sp, #0x2e0]
0x03C18D34: e97b01f9  str x9, [sp, #0x2f0]
0x03C18D38: 0ed7d694  bl #0x71ce970
0x03C18D3C: e08741ad  ldp q0, q1, [sp, #0x30]
0x03C18D40: e217c03d  ldr q2, [sp, #0x50]
0x03C18D44: e31340ad  ldp q3, q4, [sp]
0x03C18D48: e81340f9  ldr x8, [sp, #0x20]
0x03C18D4C: e0030291  add x0, sp, #0x80
0x03C18D50: e2830b91  add x2, sp, #0x2e0
0x03C18D54: e3430a91  add x3, sp, #0x290
0x03C18D58: e5830991  add x5, sp, #0x260
0x03C18D5C: e6c30891  add x6, sp, #0x230
0x03C18D60: e10314aa  mov x1, x20
0x03C18D64: e40316aa  mov x4, x22
0x03C18D68: e70315aa  mov x7, x21
0x03C18D6C: e00713ad  stp q0, q1, [sp, #0x260]
0x03C18D70: e2a3803d  str q2, [sp, #0x280]
0x03C18D74: e39311ad  stp q3, q4, [sp, #0x230]
0x03C18D78: e82b01f9  str x8, [sp, #0x250]
0x03C18D7C: 9a403194  bl #0x4868fe4
0x03C18D80: e1030291  add x1, sp, #0x80
0x03C18D84: 021a8052  movz w2, #0xd0
0x03C18D88: e00313aa  mov x0, x19
0x03C18D8C: f9d6d694  bl #0x71ce970
0x03C18D90: e00313aa  mov x0, x19
0x03C18D94: e1031faa  mov x1, xzr
0x03C18D98: 0b9fd597  bl #0x31809c4
0x03C18D9C: 20008052  movz w0, #0x1
0x03C18DA0: 02000014  b #0x3c18da8
0x03C18DA4: e0031f2a  mov w0, wzr
0x03C18DA8: ff030c91  add sp, sp, #0x300
0x03C18DAC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03C18DB0: f65741a9  ldp x22, x21, [sp, #0x10]
0x03C18DB4: fd7bc3a8  ldp x29, x30, [sp], #0x30
0x03C18DB8: c0035fd6  ret
0x03C18DBC: bc9fd597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C18DC0 | ContextualizedECS.Query.Entities$$MatchMethod<__Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType>
; native signature: bool ContextualizedECS_Query_Entities__MatchMethod___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType_ (ContextualizedECS_Entity_o* entity, System_ValueTuple_Entity__T1__T2__T3__T4__T5__o* result, const MethodInfo_3C18DC0* method);
; bytes=1052 sha256=1ee7679d8f94f321d31b61bc6afc82d86d7cb470d6a79c1cc4ec8b012d7b2e9c status=arm64_complete_bound indexed_start=True
0x03C18DC0: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x03C18DC4: fc6f01a9  stp x28, x27, [sp, #0x10]
0x03C18DC8: fa6702a9  stp x26, x25, [sp, #0x20]
0x03C18DCC: f85f03a9  stp x24, x23, [sp, #0x30]
0x03C18DD0: f65704a9  stp x22, x21, [sp, #0x40]
0x03C18DD4: f44f05a9  stp x20, x19, [sp, #0x50]
0x03C18DD8: fd030091  mov x29, sp
0x03C18DDC: ffc302d1  sub sp, sp, #0xb0
0x03C18DE0: a1831ef8  stur x1, [x29, #-0x18]
0x03C18DE4: 48d03bd5  mrs x8, tpidr_el0
0x03C18DE8: a8031df8  stur x8, [x29, #-0x30]
0x03C18DEC: 081540f9  ldr x8, [x8, #0x28]
0x03C18DF0: f30302aa  mov x19, x2
0x03C18DF4: a8031ff8  stur x8, [x29, #-0x10]
0x03C18DF8: 481c40f9  ldr x8, [x2, #0x38]
0x03C18DFC: a0831df8  stur x0, [x29, #-0x28]
0x03C18E00: 880000b5  cbnz x8, #0x3c18e10
0x03C18E04: e00313aa  mov x0, x19
0x03C18E08: 9cf6d497  bl #0x3156878
0x03C18E0C: 681e40f9  ldr x8, [x19, #0x38]
0x03C18E10: 09a946a9  ldp x9, x10, [x8, #0x68]
0x03C18E14: 0bb147a9  ldp x11, x12, [x8, #0x78]
0x03C18E18: 0d4540f9  ldr x13, [x8, #0x88]
0x03C18E1C: 080540f9  ldr x8, [x8, #8]
0x03C18E20: 22fd40b9  ldr w2, [x9, #0xfc]
0x03C18E24: 5cfd40b9  ldr w28, [x10, #0xfc]
0x03C18E28: b8fd40b9  ldr w24, [x13, #0xfc]
0x03C18E2C: 1afd40b9  ldr w26, [x8, #0xfc]
0x03C18E30: 74fd40b9  ldr w20, [x11, #0xfc]
0x03C18E34: 95fd40b9  ldr w21, [x12, #0xfc]
0x03C18E38: 483c0091  add x8, x2, #0xf
0x03C18E3C: e9030091  mov x9, sp
0x03C18E40: 08717c92  and x8, x8, #0x1fffffff0
0x03C18E44: 290108cb  sub x9, x9, x8
0x03C18E48: b3031ef8  stur x19, [x29, #-0x20]
0x03C18E4C: a9831cf8  stur x9, [x29, #-0x38]
0x03C18E50: 3f010091  mov sp, x9
0x03C18E54: e9030091  mov x9, sp
0x03C18E58: 290108cb  sub x9, x9, x8
0x03C18E5C: a98319f8  stur x9, [x29, #-0x68]
0x03C18E60: 3f010091  mov sp, x9
0x03C18E64: 8a3f0091  add x10, x28, #0xf
0x03C18E68: e9030091  mov x9, sp
0x03C18E6C: 53717c92  and x19, x10, #0x1fffffff0
0x03C18E70: 290113cb  sub x9, x9, x19
0x03C18E74: a9031cf8  stur x9, [x29, #-0x40]
0x03C18E78: 3f010091  mov sp, x9
0x03C18E7C: e9030091  mov x9, sp
0x03C18E80: 290113cb  sub x9, x9, x19
0x03C18E84: a90318f8  stur x9, [x29, #-0x80]
0x03C18E88: 3f010091  mov sp, x9
0x03C18E8C: 8a3e0091  add x10, x20, #0xf
0x03C18E90: e9030091  mov x9, sp
0x03C18E94: 56717c92  and x22, x10, #0x1fffffff0
0x03C18E98: 290116cb  sub x9, x9, x22
0x03C18E9C: a9831bf8  stur x9, [x29, #-0x48]
0x03C18EA0: 3f010091  mov sp, x9
0x03C18EA4: e9030091  mov x9, sp
0x03C18EA8: 290116cb  sub x9, x9, x22
0x03C18EAC: a90316f8  stur x9, [x29, #-0xa0]
0x03C18EB0: 3f010091  mov sp, x9
0x03C18EB4: aa3e0091  add x10, x21, #0xf
0x03C18EB8: e9030091  mov x9, sp
0x03C18EBC: 57717c92  and x23, x10, #0x1fffffff0
0x03C18EC0: 290117cb  sub x9, x9, x23
0x03C18EC4: a9031bf8  stur x9, [x29, #-0x50]
0x03C18EC8: 3f010091  mov sp, x9
0x03C18ECC: e9030091  mov x9, sp
0x03C18ED0: 290117cb  sub x9, x9, x23
0x03C18ED4: a98315f8  stur x9, [x29, #-0xa8]
0x03C18ED8: 3f010091  mov sp, x9
0x03C18EDC: 0a3f0091  add x10, x24, #0xf
0x03C18EE0: e9030091  mov x9, sp
0x03C18EE4: 59717c92  and x25, x10, #0x1fffffff0
0x03C18EE8: 290119cb  sub x9, x9, x25
0x03C18EEC: a9831af8  stur x9, [x29, #-0x58]
0x03C18EF0: 3f010091  mov sp, x9
0x03C18EF4: e9030091  mov x9, sp
0x03C18EF8: 290119cb  sub x9, x9, x25
0x03C18EFC: a90315f8  stur x9, [x29, #-0xb0]
0x03C18F00: 3f010091  mov sp, x9
0x03C18F04: 4a3f0091  add x10, x26, #0xf
0x03C18F08: e9030091  mov x9, sp
0x03C18F0C: 4a717c92  and x10, x10, #0x1fffffff0
0x03C18F10: 29010acb  sub x9, x9, x10
0x03C18F14: a2a736a9  stp x2, x9, [x29, #-0x98]
0x03C18F18: 3f010091  mov sp, x9
0x03C18F1C: e9030091  mov x9, sp
0x03C18F20: 3b0108cb  sub x27, x9, x8
0x03C18F24: 7f030091  mov sp, x27
0x03C18F28: e0031baa  mov x0, x27
0x03C18F2C: e1031f2a  mov w1, wzr
0x03C18F30: 9cd6d694  bl #0x71ce9a0
0x03C18F34: e8030091  mov x8, sp
0x03C18F38: 130113cb  sub x19, x8, x19
0x03C18F3C: 7f020091  mov sp, x19
0x03C18F40: e00313aa  mov x0, x19
0x03C18F44: e1031f2a  mov w1, wzr
0x03C18F48: e2031caa  mov x2, x28
0x03C18F4C: bc8317f8  stur x28, [x29, #-0x88]
0x03C18F50: 94d6d694  bl #0x71ce9a0
0x03C18F54: e8030091  mov x8, sp
0x03C18F58: 160116cb  sub x22, x8, x22
0x03C18F5C: df020091  mov sp, x22
0x03C18F60: e00316aa  mov x0, x22
0x03C18F64: e1031f2a  mov w1, wzr
0x03C18F68: e20314aa  mov x2, x20
0x03C18F6C: b48318f8  stur x20, [x29, #-0x78]
0x03C18F70: 8cd6d694  bl #0x71ce9a0
0x03C18F74: e8030091  mov x8, sp
0x03C18F78: 170117cb  sub x23, x8, x23
0x03C18F7C: ff020091  mov sp, x23
0x03C18F80: e00317aa  mov x0, x23
0x03C18F84: e1031f2a  mov w1, wzr
0x03C18F88: e20315aa  mov x2, x21
0x03C18F8C: b50319f8  stur x21, [x29, #-0x70]
0x03C18F90: 84d6d694  bl #0x71ce9a0
0x03C18F94: e8030091  mov x8, sp
0x03C18F98: 190119cb  sub x25, x8, x25
0x03C18F9C: 3f030091  mov sp, x25
0x03C18FA0: e00319aa  mov x0, x25
0x03C18FA4: e1031f2a  mov w1, wzr
0x03C18FA8: e20318aa  mov x2, x24
0x03C18FAC: b8031af8  stur x24, [x29, #-0x60]
0x03C18FB0: 7cd6d694  bl #0x71ce9a0
0x03C18FB4: a0835ef8  ldur x0, [x29, #-0x18]
0x03C18FB8: e1031f2a  mov w1, wzr
0x03C18FBC: e2031aaa  mov x2, x26
0x03C18FC0: 78d6d694  bl #0x71ce9a0
0x03C18FC4: b8835df8  ldur x24, [x29, #-0x28]
0x03C18FC8: 781000b4  cbz x24, #0x3c191d4
0x03C18FCC: b4035ef8  ldur x20, [x29, #-0x20]
0x03C18FD0: e00318aa  mov x0, x24
0x03C18FD4: e1031baa  mov x1, x27
0x03C18FD8: 881e40f9  ldr x8, [x20, #0x38]
0x03C18FDC: 020940f9  ldr x2, [x8, #0x10]
0x03C18FE0: 480040f9  ldr x8, [x2]
0x03C18FE4: 00013fd6  blr x8
0x03C18FE8: a00d0036  tbz w0, #0, #0x3c1919c
0x03C18FEC: 881e40f9  ldr x8, [x20, #0x38]
0x03C18FF0: e00318aa  mov x0, x24
0x03C18FF4: e10313aa  mov x1, x19
0x03C18FF8: 021140f9  ldr x2, [x8, #0x20]
0x03C18FFC: 480040f9  ldr x8, [x2]
0x03C19000: 00013fd6  blr x8
0x03C19004: c00c0036  tbz w0, #0, #0x3c1919c
0x03C19008: 881e40f9  ldr x8, [x20, #0x38]
0x03C1900C: e00318aa  mov x0, x24
0x03C19010: e10316aa  mov x1, x22
0x03C19014: 021940f9  ldr x2, [x8, #0x30]
0x03C19018: 480040f9  ldr x8, [x2]
0x03C1901C: 00013fd6  blr x8
0x03C19020: e00b0036  tbz w0, #0, #0x3c1919c
0x03C19024: 881e40f9  ldr x8, [x20, #0x38]
0x03C19028: e00318aa  mov x0, x24
0x03C1902C: e10317aa  mov x1, x23
0x03C19030: 022140f9  ldr x2, [x8, #0x40]
0x03C19034: 480040f9  ldr x8, [x2]
0x03C19038: 00013fd6  blr x8
0x03C1903C: 000b0036  tbz w0, #0, #0x3c1919c
0x03C19040: 881e40f9  ldr x8, [x20, #0x38]
0x03C19044: e00318aa  mov x0, x24
0x03C19048: e10319aa  mov x1, x25
0x03C1904C: 022940f9  ldr x2, [x8, #0x50]
0x03C19050: 480040f9  ldr x8, [x2]
0x03C19054: 00013fd6  blr x8
0x03C19058: 200a0036  tbz w0, #0, #0x3c1919c
0x03C1905C: e1031baa  mov x1, x27
0x03C19060: bb8356f8  ldur x27, [x29, #-0x98]
0x03C19064: a0835cf8  ldur x0, [x29, #-0x38]
0x03C19068: e2031baa  mov x2, x27
0x03C1906C: 41d6d694  bl #0x71ce970
0x03C19070: bc8357f8  ldur x28, [x29, #-0x88]
0x03C19074: a0035cf8  ldur x0, [x29, #-0x40]
0x03C19078: e10313aa  mov x1, x19
0x03C1907C: e2031caa  mov x2, x28
0x03C19080: 3cd6d694  bl #0x71ce970
0x03C19084: b48358f8  ldur x20, [x29, #-0x78]
0x03C19088: a0835bf8  ldur x0, [x29, #-0x48]
0x03C1908C: e10316aa  mov x1, x22
0x03C19090: e20314aa  mov x2, x20
0x03C19094: 37d6d694  bl #0x71ce970
0x03C19098: b50359f8  ldur x21, [x29, #-0x70]
0x03C1909C: a0035bf8  ldur x0, [x29, #-0x50]
0x03C190A0: e10317aa  mov x1, x23
0x03C190A4: e20315aa  mov x2, x21
0x03C190A8: 32d6d694  bl #0x71ce970
0x03C190AC: b3037aa9  ldp x19, x0, [x29, #-0x60]
0x03C190B0: e10319aa  mov x1, x25
0x03C190B4: e20313aa  mov x2, x19
0x03C190B8: 2ed6d694  bl #0x71ce970
0x03C190BC: b90357f8  ldur x25, [x29, #-0x90]
0x03C190C0: e1031f2a  mov w1, wzr
0x03C190C4: e2031aaa  mov x2, x26
0x03C190C8: e00319aa  mov x0, x25
0x03C190CC: 35d6d694  bl #0x71ce9a0
0x03C190D0: b68359f8  ldur x22, [x29, #-0x68]
0x03C190D4: a1835cf8  ldur x1, [x29, #-0x38]
0x03C190D8: e2031baa  mov x2, x27
0x03C190DC: e00316aa  mov x0, x22
0x03C190E0: 24d6d694  bl #0x71ce970
0x03C190E4: b70358f8  ldur x23, [x29, #-0x80]
0x03C190E8: a1035cf8  ldur x1, [x29, #-0x40]
0x03C190EC: e2031caa  mov x2, x28
0x03C190F0: e00317aa  mov x0, x23
0x03C190F4: 1fd6d694  bl #0x71ce970
0x03C190F8: bb0356f8  ldur x27, [x29, #-0xa0]
0x03C190FC: a1835bf8  ldur x1, [x29, #-0x48]
0x03C19100: e20314aa  mov x2, x20
0x03C19104: e0031baa  mov x0, x27
0x03C19108: 1ad6d694  bl #0x71ce970
0x03C1910C: b48355f8  ldur x20, [x29, #-0xa8]
0x03C19110: a1035bf8  ldur x1, [x29, #-0x50]
0x03C19114: e20315aa  mov x2, x21
0x03C19118: e00314aa  mov x0, x20
0x03C1911C: 15d6d694  bl #0x71ce970
0x03C19120: b50355f8  ldur x21, [x29, #-0xb0]
0x03C19124: a1835af8  ldur x1, [x29, #-0x58]
0x03C19128: e20313aa  mov x2, x19
0x03C1912C: e00315aa  mov x0, x21
0x03C19130: 10d6d694  bl #0x71ce970
0x03C19134: bc035ef8  ldur x28, [x29, #-0x20]
0x03C19138: e00319aa  mov x0, x25
0x03C1913C: e10318aa  mov x1, x24
0x03C19140: e20316aa  mov x2, x22
0x03C19144: 881f40f9  ldr x8, [x28, #0x38]
0x03C19148: e30317aa  mov x3, x23
0x03C1914C: e4031baa  mov x4, x27
0x03C19150: e50314aa  mov x5, x20
0x03C19154: 073140f9  ldr x7, [x8, #0x60]
0x03C19158: e60315aa  mov x6, x21
0x03C1915C: d1503194  bl #0x486d4a0
0x03C19160: b3835ef8  ldur x19, [x29, #-0x18]
0x03C19164: e10319aa  mov x1, x25
0x03C19168: e2031aaa  mov x2, x26
0x03C1916C: e00313aa  mov x0, x19
0x03C19170: 00d6d694  bl #0x71ce970
0x03C19174: 881f40f9  ldr x8, [x28, #0x38]
0x03C19178: 000540f9  ldr x0, [x8, #8]
0x03C1917C: 08d44439  ldrb w8, [x0, #0x135]
0x03C19180: 48000037  tbnz w8, #0, #0x3c19188
0x03C19184: a6f5d497  bl #0x315681c
0x03C19188: e10313aa  mov x1, x19
0x03C1918C: e20319aa  mov x2, x25
0x03C19190: 0e9ed597  bl #0x31809c8
0x03C19194: 20008052  movz w0, #0x1
0x03C19198: 02000014  b #0x3c191a0
0x03C1919C: e0031f2a  mov w0, wzr
0x03C191A0: a8035df8  ldur x8, [x29, #-0x30]
0x03C191A4: 081540f9  ldr x8, [x8, #0x28]
0x03C191A8: a9035ff8  ldur x9, [x29, #-0x10]
0x03C191AC: 1f0109eb  cmp x8, x9
0x03C191B0: 41010054  b.ne #0x3c191d8
0x03C191B4: bf030091  mov sp, x29
0x03C191B8: f44f45a9  ldp x20, x19, [sp, #0x50]
0x03C191BC: f65744a9  ldp x22, x21, [sp, #0x40]
0x03C191C0: f85f43a9  ldp x24, x23, [sp, #0x30]
0x03C191C4: fa6742a9  ldp x26, x25, [sp, #0x20]
0x03C191C8: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x03C191CC: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x03C191D0: c0035fd6  ret
0x03C191D4: b69ed597  bl #0x3180cac
0x03C191D8: eed5d694  bl #0x71ce990

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1AD3C | ContextualizedECS.Query.Entities$$With<BoardTilePositionComponent, FeedingCombinationComponent, IdComponent, InteractionComponent, ProducerComponent, TimeCycleComponent>
; native signature: ContextualizedECS_Query_Entities_MatchDelegate_ValueTuple_Entity__T1__T2__T3__T4__T5__T6___o* ContextualizedECS_Query_Entities__With_BoardTilePositionComponent__FeedingCombinationComponent__IdComponent__InteractionComponent__ProducerComponent__TimeCycleComponent_ (const MethodInfo_3C1AD3C* method);
; bytes=84 sha256=957611c04b9f89000466ca5890a8a4477abc8e7a97e1b29eeca067a8e920bbc8 status=arm64_complete_bound indexed_start=True
0x03C1AD3C: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x03C1AD40: 081c40f9  ldr x8, [x0, #0x38]
0x03C1AD44: f30300aa  mov x19, x0
0x03C1AD48: 880000b5  cbnz x8, #0x3c1ad58
0x03C1AD4C: e00313aa  mov x0, x19
0x03C1AD50: caeed497  bl #0x3156878
0x03C1AD54: 681e40f9  ldr x8, [x19, #0x38]
0x03C1AD58: 000540f9  ldr x0, [x8, #8]
0x03C1AD5C: 08d44439  ldrb w8, [x0, #0x135]
0x03C1AD60: 48000037  tbnz w8, #0, #0x3c1ad68
0x03C1AD64: aeeed497  bl #0x315681c
0x03C1AD68: ce97d597  bl #0x3180ca0
0x03C1AD6C: 681e40f9  ldr x8, [x19, #0x38]
0x03C1AD70: e1031faa  mov x1, xzr
0x03C1AD74: f30300aa  mov x19, x0
0x03C1AD78: 020140f9  ldr x2, [x8]
0x03C1AD7C: 030940f9  ldr x3, [x8, #0x10]
0x03C1AD80: 2f0a1794  bl #0x41dd63c
0x03C1AD84: e00313aa  mov x0, x19
0x03C1AD88: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x03C1AD8C: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1AD90 | ContextualizedECS.Query.Entities$$With<BoardTilePositionComponent, SpawnerComponent, IdComponent, TimeCycleComponent, InteractionComponent, PendingInteractionComponent>
; native signature: ContextualizedECS_Query_Entities_MatchDelegate_ValueTuple_Entity__T1__T2__T3__T4__T5__T6___o* ContextualizedECS_Query_Entities__With_BoardTilePositionComponent__SpawnerComponent__IdComponent__TimeCycleComponent__InteractionComponent__PendingInteractionComponent_ (const MethodInfo_3C1AD90* method);
; bytes=84 sha256=4d43411c616267e1224ac875b4a44b4e2b08fbd53635d2d7da4cc587bee6ac87 status=arm64_complete_bound indexed_start=True
0x03C1AD90: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x03C1AD94: 081c40f9  ldr x8, [x0, #0x38]
0x03C1AD98: f30300aa  mov x19, x0
0x03C1AD9C: 880000b5  cbnz x8, #0x3c1adac
0x03C1ADA0: e00313aa  mov x0, x19
0x03C1ADA4: b5eed497  bl #0x3156878
0x03C1ADA8: 681e40f9  ldr x8, [x19, #0x38]
0x03C1ADAC: 000540f9  ldr x0, [x8, #8]
0x03C1ADB0: 08d44439  ldrb w8, [x0, #0x135]
0x03C1ADB4: 48000037  tbnz w8, #0, #0x3c1adbc
0x03C1ADB8: 99eed497  bl #0x315681c
0x03C1ADBC: b997d597  bl #0x3180ca0
0x03C1ADC0: 681e40f9  ldr x8, [x19, #0x38]
0x03C1ADC4: e1031faa  mov x1, xzr
0x03C1ADC8: f30300aa  mov x19, x0
0x03C1ADCC: 020140f9  ldr x2, [x8]
0x03C1ADD0: 030940f9  ldr x3, [x8, #0x10]
0x03C1ADD4: 7c0a1794  bl #0x41dd7c4
0x03C1ADD8: e00313aa  mov x0, x19
0x03C1ADDC: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x03C1ADE0: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1ADE4 | ContextualizedECS.Query.Entities$$With<ExpendableComponent, IdComponent, InteractionComponent, PendingInteractionComponent, TimeLimitedActivationComponent, TimeDurationComponent>
; native signature: ContextualizedECS_Query_Entities_MatchDelegate_ValueTuple_Entity__T1__T2__T3__T4__T5__T6___o* ContextualizedECS_Query_Entities__With_ExpendableComponent__IdComponent__InteractionComponent__PendingInteractionComponent__TimeLimitedActivationComponent__TimeDurationComponent_ (const MethodInfo_3C1ADE4* method);
; bytes=84 sha256=ec13c5ca391e6ba1bb399cdd0d75cc23e5acccf357208f3644846dc25fb0d58d status=arm64_complete_bound indexed_start=True
0x03C1ADE4: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x03C1ADE8: 081c40f9  ldr x8, [x0, #0x38]
0x03C1ADEC: f30300aa  mov x19, x0
0x03C1ADF0: 880000b5  cbnz x8, #0x3c1ae00
0x03C1ADF4: e00313aa  mov x0, x19
0x03C1ADF8: a0eed497  bl #0x3156878
0x03C1ADFC: 681e40f9  ldr x8, [x19, #0x38]
0x03C1AE00: 000540f9  ldr x0, [x8, #8]
0x03C1AE04: 08d44439  ldrb w8, [x0, #0x135]
0x03C1AE08: 48000037  tbnz w8, #0, #0x3c1ae10
0x03C1AE0C: 84eed497  bl #0x315681c
0x03C1AE10: a497d597  bl #0x3180ca0
0x03C1AE14: 681e40f9  ldr x8, [x19, #0x38]
0x03C1AE18: e1031faa  mov x1, xzr
0x03C1AE1C: f30300aa  mov x19, x0
0x03C1AE20: 020140f9  ldr x2, [x8]
0x03C1AE24: 030940f9  ldr x3, [x8, #0x10]
0x03C1AE28: c90a1794  bl #0x41dd94c
0x03C1AE2C: e00313aa  mov x0, x19
0x03C1AE30: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x03C1AE34: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C1AE38 | ContextualizedECS.Query.Entities$$With<__Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType>
; native signature: ContextualizedECS_Query_Entities_MatchDelegate_ValueTuple_Entity__T1__T2__T3__T4__T5__T6___o* ContextualizedECS_Query_Entities__With___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType_ (const MethodInfo_3C1AE38* method);
; bytes=88 sha256=77041ac376e4548a97780457d84d67b02f1e0a2d9dd27106f98dc0fb42df15e9 status=arm64_complete_bound indexed_start=True
0x03C1AE38: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x03C1AE3C: 081c40f9  ldr x8, [x0, #0x38]
0x03C1AE40: f30300aa  mov x19, x0
0x03C1AE44: 880000b5  cbnz x8, #0x3c1ae54
0x03C1AE48: e00313aa  mov x0, x19
0x03C1AE4C: 8beed497  bl #0x3156878
0x03C1AE50: 681e40f9  ldr x8, [x19, #0x38]
0x03C1AE54: 000540f9  ldr x0, [x8, #8]
0x03C1AE58: 08d44439  ldrb w8, [x0, #0x135]
0x03C1AE5C: 48000037  tbnz w8, #0, #0x3c1ae64
0x03C1AE60: 6feed497  bl #0x315681c
0x03C1AE64: 8f97d597  bl #0x3180ca0
0x03C1AE68: 681e40f9  ldr x8, [x19, #0x38]
0x03C1AE6C: e1031faa  mov x1, xzr
0x03C1AE70: f30300aa  mov x19, x0
0x03C1AE74: 030940f9  ldr x3, [x8, #0x10]
0x03C1AE78: 020140f9  ldr x2, [x8]
0x03C1AE7C: 690040f9  ldr x9, [x3]
0x03C1AE80: 20013fd6  blr x9
0x03C1AE84: e00313aa  mov x0, x19
0x03C1AE88: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x03C1AE8C: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C191DC | ContextualizedECS.Query.Entities$$MatchMethod<BoardTilePositionComponent, FeedingCombinationComponent, IdComponent, InteractionComponent, ProducerComponent, TimeCycleComponent>
; native signature: bool ContextualizedECS_Query_Entities__MatchMethod_BoardTilePositionComponent__FeedingCombinationComponent__IdComponent__InteractionComponent__ProducerComponent__TimeCycleComponent_ (ContextualizedECS_Entity_o* entity, System_ValueTuple_Entity__T1__T2__T3__T4__T5__T6__o* result, const MethodInfo_3C191DC* method);
; bytes=492 sha256=cd359eb851ddf8c86def4765fdb4ebae3536c0f5c6d0c417c7599be217aaec1e status=arm64_complete_bound indexed_start=True
0x03C191DC: fd0f1cf8  str x29, [sp, #-0x40]!
0x03C191E0: fe5f01a9  stp x30, x23, [sp, #0x10]
0x03C191E4: f65702a9  stp x22, x21, [sp, #0x20]
0x03C191E8: f44f03a9  stp x20, x19, [sp, #0x30]
0x03C191EC: ff830cd1  sub sp, sp, #0x320
0x03C191F0: 481c40f9  ldr x8, [x2, #0x38]
0x03C191F4: f50302aa  mov x21, x2
0x03C191F8: f30301aa  mov x19, x1
0x03C191FC: f40300aa  mov x20, x0
0x03C19200: 680000b5  cbnz x8, #0x3c1920c
0x03C19204: e00315aa  mov x0, x21
0x03C19208: 9cf5d497  bl #0x3156878
0x03C1920C: 00e4006f  movi v0.2d, #0000000000000000
0x03C19210: 021c8052  movz w2, #0xe0
0x03C19214: e00313aa  mov x0, x19
0x03C19218: e1031f2a  mov w1, wzr
0x03C1921C: ff2b03b9  str wzr, [sp, #0x328]
0x03C19220: ff2701f9  str xzr, [sp, #0x248]
0x03C19224: ff0301f9  str xzr, [sp, #0x200]
0x03C19228: e00311ad  stp q0, q0, [sp, #0x220]
0x03C1922C: e087803d  str q0, [sp, #0x210]
0x03C19230: e0030fad  stp q0, q0, [sp, #0x1e0]
0x03C19234: e0030ead  stp q0, q0, [sp, #0x1c0]
0x03C19238: e0030dad  stp q0, q0, [sp, #0x1a0]
0x03C1923C: e0030cad  stp q0, q0, [sp, #0x180]
0x03C19240: e05f803d  str q0, [sp, #0x170]
0x03C19244: d7d5d694  bl #0x71ce9a0
0x03C19248: f40b00b4  cbz x20, #0x3c193c4
0x03C1924C: a81e40f9  ldr x8, [x21, #0x38]
0x03C19250: e1a30c91  add x1, sp, #0x328
0x03C19254: e00314aa  mov x0, x20
0x03C19258: 020940f9  ldr x2, [x8, #0x10]
0x03C1925C: 22140094  bl #0x3c1e2e4
0x03C19260: 400a0036  tbz w0, #0, #0x3c193a8
0x03C19264: a81e40f9  ldr x8, [x21, #0x38]
0x03C19268: e1230991  add x1, sp, #0x248
0x03C1926C: e00314aa  mov x0, x20
0x03C19270: 021140f9  ldr x2, [x8, #0x20]
0x03C19274: 90160094  bl #0x3c1ecb4
0x03C19278: 80090036  tbz w0, #0, #0x3c193a8
0x03C1927C: a81e40f9  ldr x8, [x21, #0x38]
0x03C19280: e1430891  add x1, sp, #0x210
0x03C19284: e00314aa  mov x0, x20
0x03C19288: 021940f9  ldr x2, [x8, #0x30]
0x03C1928C: d0160094  bl #0x3c1edcc
0x03C19290: c0080036  tbz w0, #0, #0x3c193a8
0x03C19294: a81e40f9  ldr x8, [x21, #0x38]
0x03C19298: e1830791  add x1, sp, #0x1e0
0x03C1929C: e00314aa  mov x0, x20
0x03C192A0: 022140f9  ldr x2, [x8, #0x40]
0x03C192A4: 5d170094  bl #0x3c1f018
0x03C192A8: 00080036  tbz w0, #0, #0x3c193a8
0x03C192AC: a81e40f9  ldr x8, [x21, #0x38]
0x03C192B0: e1030791  add x1, sp, #0x1c0
0x03C192B4: e00314aa  mov x0, x20
0x03C192B8: 022940f9  ldr x2, [x8, #0x50]
0x03C192BC: 7f190094  bl #0x3c1f8b8
0x03C192C0: 40070036  tbz w0, #0, #0x3c193a8
0x03C192C4: a81e40f9  ldr x8, [x21, #0x38]
0x03C192C8: e1c30591  add x1, sp, #0x170
0x03C192CC: e00314aa  mov x0, x20
0x03C192D0: 023140f9  ldr x2, [x8, #0x60]
0x03C192D4: 4c1a0094  bl #0x3c1fc04
0x03C192D8: 80060036  tbz w0, #0, #0x3c193a8
0x03C192DC: e08750ad  ldp q0, q1, [sp, #0x210]
0x03C192E0: e28fc03d  ldr q2, [sp, #0x230]
0x03C192E4: e80341f9  ldr x8, [sp, #0x200]
0x03C192E8: f62b43b9  ldr w22, [sp, #0x328]
0x03C192EC: e00703ad  stp q0, q1, [sp, #0x60]
0x03C192F0: e0074fad  ldp q0, q1, [sp, #0x1e0]
0x03C192F4: f72741f9  ldr x23, [sp, #0x248]
0x03C192F8: e0430291  add x0, sp, #0x90
0x03C192FC: 021c8052  movz w2, #0xe0
0x03C19300: e08701ad  stp q0, q1, [sp, #0x30]
0x03C19304: e1034ead  ldp q1, q0, [sp, #0x1c0]
0x03C19308: e1031f2a  mov w1, wzr
0x03C1930C: e223803d  str q2, [sp, #0x80]
0x03C19310: e82b00f9  str x8, [sp, #0x50]
0x03C19314: e18300ad  stp q1, q0, [sp, #0x10]
0x03C19318: a2d5d694  bl #0x71ce9a0
0x03C1931C: a81e40f9  ldr x8, [x21, #0x38]
0x03C19320: e00743ad  ldp q0, q1, [sp, #0x60]
0x03C19324: e223c03d  ldr q2, [sp, #0x80]
0x03C19328: e39341ad  ldp q3, q4, [sp, #0x30]
0x03C1932C: e92b40f9  ldr x9, [sp, #0x50]
0x03C19330: 153940f9  ldr x21, [x8, #0x70]
0x03C19334: e08717ad  stp q0, q1, [sp, #0x2f0]
0x03C19338: e08740ad  ldp q0, q1, [sp, #0x10]
0x03C1933C: e0430991  add x0, sp, #0x250
0x03C19340: e1c30591  add x1, sp, #0x170
0x03C19344: 020a8052  movz w2, #0x50
0x03C19348: e2c7803d  str q2, [sp, #0x310]
0x03C1934C: e31316ad  stp q3, q4, [sp, #0x2c0]
0x03C19350: e97301f9  str x9, [sp, #0x2e0]
0x03C19354: e00715ad  stp q0, q1, [sp, #0x2a0]
0x03C19358: 86d5d694  bl #0x71ce970
0x03C1935C: e0430291  add x0, sp, #0x90
0x03C19360: e4c30b91  add x4, sp, #0x2f0
0x03C19364: e5030b91  add x5, sp, #0x2c0
0x03C19368: e6830a91  add x6, sp, #0x2a0
0x03C1936C: e7430991  add x7, sp, #0x250
0x03C19370: e10314aa  mov x1, x20
0x03C19374: e20316aa  mov x2, x22
0x03C19378: e30317aa  mov x3, x23
0x03C1937C: f50300f9  str x21, [sp]
0x03C19380: f1693194  bl #0x4873b44
0x03C19384: e1430291  add x1, sp, #0x90
0x03C19388: 021c8052  movz w2, #0xe0
0x03C1938C: e00313aa  mov x0, x19
0x03C19390: 78d5d694  bl #0x71ce970
0x03C19394: e00313aa  mov x0, x19
0x03C19398: e1031faa  mov x1, xzr
0x03C1939C: 8a9dd597  bl #0x31809c4
0x03C193A0: 20008052  movz w0, #0x1
0x03C193A4: 02000014  b #0x3c193ac
0x03C193A8: e0031f2a  mov w0, wzr
0x03C193AC: ff830c91  add sp, sp, #0x320
0x03C193B0: f44f43a9  ldp x20, x19, [sp, #0x30]
0x03C193B4: f65742a9  ldp x22, x21, [sp, #0x20]
0x03C193B8: fe5f41a9  ldp x30, x23, [sp, #0x10]
0x03C193BC: fd0744f8  ldr x29, [sp], #0x40
0x03C193C0: c0035fd6  ret
0x03C193C4: 3a9ed597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C193C8 | ContextualizedECS.Query.Entities$$MatchMethod<BoardTilePositionComponent, SpawnerComponent, IdComponent, TimeCycleComponent, InteractionComponent, PendingInteractionComponent>
; native signature: bool ContextualizedECS_Query_Entities__MatchMethod_BoardTilePositionComponent__SpawnerComponent__IdComponent__TimeCycleComponent__InteractionComponent__PendingInteractionComponent_ (ContextualizedECS_Entity_o* entity, System_ValueTuple_Entity__T1__T2__T3__T4__T5__T6__o* result, const MethodInfo_3C193C8* method);
; bytes=500 sha256=eb1c3ef4871fdc72640371fd3d863680e573bb91cc1b1aa533b5ec1691cb8cf0 status=arm64_complete_bound indexed_start=True
0x03C193C8: fd7bbca9  stp x29, x30, [sp, #-0x40]!
0x03C193CC: f85f01a9  stp x24, x23, [sp, #0x10]
0x03C193D0: f65702a9  stp x22, x21, [sp, #0x20]
0x03C193D4: f44f03a9  stp x20, x19, [sp, #0x30]
0x03C193D8: ffc30cd1  sub sp, sp, #0x330
0x03C193DC: 481c40f9  ldr x8, [x2, #0x38]
0x03C193E0: f50302aa  mov x21, x2
0x03C193E4: f30301aa  mov x19, x1
0x03C193E8: f40300aa  mov x20, x0
0x03C193EC: 680000b5  cbnz x8, #0x3c193f8
0x03C193F0: e00315aa  mov x0, x21
0x03C193F4: 21f5d497  bl #0x3156878
0x03C193F8: 00e4006f  movi v0.2d, #0000000000000000
0x03C193FC: 021c8052  movz w2, #0xe0
0x03C19400: e00313aa  mov x0, x19
0x03C19404: e1031f2a  mov w1, wzr
0x03C19408: ff5b02b9  str wzr, [sp, #0x258]
0x03C1940C: ff2701f9  str xzr, [sp, #0x248]
0x03C19410: ff2301f9  str xzr, [sp, #0x240]
0x03C19414: ff2b01f9  str xzr, [sp, #0x250]
0x03C19418: ffdb00f9  str xzr, [sp, #0x1b0]
0x03C1941C: e00311ad  stp q0, q0, [sp, #0x220]
0x03C19420: e00310ad  stp q0, q0, [sp, #0x200]
0x03C19424: e0030fad  stp q0, q0, [sp, #0x1e0]
0x03C19428: e0030ead  stp q0, q0, [sp, #0x1c0]
0x03C1942C: e0830cad  stp q0, q0, [sp, #0x190]
0x03C19430: ff7f18a9  stp xzr, xzr, [sp, #0x180]
0x03C19434: 5bd5d694  bl #0x71ce9a0
0x03C19438: 140c00b4  cbz x20, #0x3c195b8
0x03C1943C: a81e40f9  ldr x8, [x21, #0x38]
0x03C19440: e1630991  add x1, sp, #0x258
0x03C19444: e00314aa  mov x0, x20
0x03C19448: 020940f9  ldr x2, [x8, #0x10]
0x03C1944C: a6130094  bl #0x3c1e2e4
0x03C19450: 600a0036  tbz w0, #0, #0x3c1959c
0x03C19454: a81e40f9  ldr x8, [x21, #0x38]
0x03C19458: e1030991  add x1, sp, #0x240
0x03C1945C: e00314aa  mov x0, x20
0x03C19460: 021140f9  ldr x2, [x8, #0x20]
0x03C19464: 9f190094  bl #0x3c1fae0
0x03C19468: a0090036  tbz w0, #0, #0x3c1959c
0x03C1946C: a81e40f9  ldr x8, [x21, #0x38]
0x03C19470: e1430891  add x1, sp, #0x210
0x03C19474: e00314aa  mov x0, x20
0x03C19478: 021940f9  ldr x2, [x8, #0x30]
0x03C1947C: 54160094  bl #0x3c1edcc
0x03C19480: e0080036  tbz w0, #0, #0x3c1959c
0x03C19484: a81e40f9  ldr x8, [x21, #0x38]
0x03C19488: e1030791  add x1, sp, #0x1c0
0x03C1948C: e00314aa  mov x0, x20
0x03C19490: 022140f9  ldr x2, [x8, #0x40]
0x03C19494: dc190094  bl #0x3c1fc04
0x03C19498: 20080036  tbz w0, #0, #0x3c1959c
0x03C1949C: a81e40f9  ldr x8, [x21, #0x38]
0x03C194A0: e1430691  add x1, sp, #0x190
0x03C194A4: e00314aa  mov x0, x20
0x03C194A8: 022940f9  ldr x2, [x8, #0x50]
0x03C194AC: db160094  bl #0x3c1f018
0x03C194B0: 60070036  tbz w0, #0, #0x3c1959c
0x03C194B4: a81e40f9  ldr x8, [x21, #0x38]
0x03C194B8: e1030691  add x1, sp, #0x180
0x03C194BC: e00314aa  mov x0, x20
0x03C194C0: 023140f9  ldr x2, [x8, #0x60]
0x03C194C4: 74180094  bl #0x3c1f694
0x03C194C8: a0060036  tbz w0, #0, #0x3c1959c
0x03C194CC: e393c03d  ldr q3, [sp, #0x240]
0x03C194D0: e18b50ad  ldp q1, q2, [sp, #0x210]
0x03C194D4: e08fc03d  ldr q0, [sp, #0x230]
0x03C194D8: e82b41f9  ldr x8, [sp, #0x250]
0x03C194DC: e9db40f9  ldr x9, [sp, #0x1b0]
0x03C194E0: e18b02ad  stp q1, q2, [sp, #0x50]
0x03C194E4: e08f03ad  stp q0, q3, [sp, #0x70]
0x03C194E8: e0874cad  ldp q0, q1, [sp, #0x190]
0x03C194EC: f65b42b9  ldr w22, [sp, #0x258]
0x03C194F0: f76358a9  ldp x23, x24, [sp, #0x180]
0x03C194F4: e0830291  add x0, sp, #0xa0
0x03C194F8: 021c8052  movz w2, #0xe0
0x03C194FC: e1031f2a  mov w1, wzr
0x03C19500: e84b00f9  str x8, [sp, #0x90]
0x03C19504: e92300f9  str x9, [sp, #0x40]
0x03C19508: e00701ad  stp q0, q1, [sp, #0x20]
0x03C1950C: 25d5d694  bl #0x71ce9a0
0x03C19510: a81e40f9  ldr x8, [x21, #0x38]
0x03C19514: e38343ad  ldp q3, q0, [sp, #0x70]
0x03C19518: e94b40f9  ldr x9, [sp, #0x90]
0x03C1951C: e18b42ad  ldp q1, q2, [sp, #0x50]
0x03C19520: 153940f9  ldr x21, [x8, #0x70]
0x03C19524: e0430a91  add x0, sp, #0x290
0x03C19528: e1030791  add x1, sp, #0x1c0
0x03C1952C: 020a8052  movz w2, #0x50
0x03C19530: e30318ad  stp q3, q0, [sp, #0x300]
0x03C19534: e99301f9  str x9, [sp, #0x320]
0x03C19538: e10b17ad  stp q1, q2, [sp, #0x2e0]
0x03C1953C: 0dd5d694  bl #0x71ce970
0x03C19540: e00741ad  ldp q0, q1, [sp, #0x20]
0x03C19544: e82340f9  ldr x8, [sp, #0x40]
0x03C19548: e0830291  add x0, sp, #0xa0
0x03C1954C: e3430c91  add x3, sp, #0x310
0x03C19550: e4830b91  add x4, sp, #0x2e0
0x03C19554: e5430a91  add x5, sp, #0x290
0x03C19558: e6830991  add x6, sp, #0x260
0x03C1955C: e10314aa  mov x1, x20
0x03C19560: e20316aa  mov x2, x22
0x03C19564: e00713ad  stp q0, q1, [sp, #0x260]
0x03C19568: e84301f9  str x8, [sp, #0x280]
0x03C1956C: f8d700a9  stp x24, x21, [sp, #8]
0x03C19570: f70300f9  str x23, [sp]
0x03C19574: 54733194  bl #0x48762c4
0x03C19578: e1830291  add x1, sp, #0xa0
0x03C1957C: 021c8052  movz w2, #0xe0
0x03C19580: e00313aa  mov x0, x19
0x03C19584: fbd4d694  bl #0x71ce970
0x03C19588: e00313aa  mov x0, x19
0x03C1958C: e1031faa  mov x1, xzr
0x03C19590: 0d9dd597  bl #0x31809c4
0x03C19594: 20008052  movz w0, #0x1
0x03C19598: 02000014  b #0x3c195a0
0x03C1959C: e0031f2a  mov w0, wzr
0x03C195A0: ffc30c91  add sp, sp, #0x330
0x03C195A4: f44f43a9  ldp x20, x19, [sp, #0x30]
0x03C195A8: f65742a9  ldp x22, x21, [sp, #0x20]
0x03C195AC: f85f41a9  ldp x24, x23, [sp, #0x10]
0x03C195B0: fd7bc4a8  ldp x29, x30, [sp], #0x40
0x03C195B4: c0035fd6  ret
0x03C195B8: bd9dd597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C195BC | ContextualizedECS.Query.Entities$$MatchMethod<ExpendableComponent, IdComponent, InteractionComponent, PendingInteractionComponent, TimeLimitedActivationComponent, TimeDurationComponent>
; native signature: bool ContextualizedECS_Query_Entities__MatchMethod_ExpendableComponent__IdComponent__InteractionComponent__PendingInteractionComponent__TimeLimitedActivationComponent__TimeDurationComponent_ (ContextualizedECS_Entity_o* entity, System_ValueTuple_Entity__T1__T2__T3__T4__T5__T6__o* result, const MethodInfo_3C195BC* method);
; bytes=500 sha256=9a164062c98f27f1c93ba9efe393cdd6eb01e68ababacdd29272356fd097805d status=arm64_complete_bound indexed_start=True
0x03C195BC: fd0f1cf8  str x29, [sp, #-0x40]!
0x03C195C0: fe5f01a9  stp x30, x23, [sp, #0x10]
0x03C195C4: f65702a9  stp x22, x21, [sp, #0x20]
0x03C195C8: f44f03a9  stp x20, x19, [sp, #0x30]
0x03C195CC: ffc30cd1  sub sp, sp, #0x330
0x03C195D0: 481c40f9  ldr x8, [x2, #0x38]
0x03C195D4: f50302aa  mov x21, x2
0x03C195D8: f30301aa  mov x19, x1
0x03C195DC: f40300aa  mov x20, x0
0x03C195E0: 680000b5  cbnz x8, #0x3c195ec
0x03C195E4: e00315aa  mov x0, x21
0x03C195E8: a4f4d497  bl #0x3156878
0x03C195EC: 00e4006f  movi v0.2d, #0000000000000000
0x03C195F0: 021c8052  movz w2, #0xe0
0x03C195F4: e00313aa  mov x0, x19
0x03C195F8: e1031f2a  mov w1, wzr
0x03C195FC: fffb00f9  str xzr, [sp, #0x1f0]
0x03C19600: ff7f1ca9  stp xzr, xzr, [sp, #0x1c0]
0x03C19604: e00312ad  stp q0, q0, [sp, #0x240]
0x03C19608: e00311ad  stp q0, q0, [sp, #0x220]
0x03C1960C: e00310ad  stp q0, q0, [sp, #0x200]
0x03C19610: e0830ead  stp q0, q0, [sp, #0x1d0]
0x03C19614: e0030dad  stp q0, q0, [sp, #0x1a0]
0x03C19618: e0030cad  stp q0, q0, [sp, #0x180]
0x03C1961C: e1d4d694  bl #0x71ce9a0
0x03C19620: 740c00b4  cbz x20, #0x3c197ac
0x03C19624: a81e40f9  ldr x8, [x21, #0x38]
0x03C19628: e1c30891  add x1, sp, #0x230
0x03C1962C: e00314aa  mov x0, x20
0x03C19630: 020940f9  ldr x2, [x8, #0x10]
0x03C19634: 56150094  bl #0x3c1eb8c
0x03C19638: c00a0036  tbz w0, #0, #0x3c19790
0x03C1963C: a81e40f9  ldr x8, [x21, #0x38]
0x03C19640: e1030891  add x1, sp, #0x200
0x03C19644: e00314aa  mov x0, x20
0x03C19648: 021140f9  ldr x2, [x8, #0x20]
0x03C1964C: e0150094  bl #0x3c1edcc
0x03C19650: 000a0036  tbz w0, #0, #0x3c19790
0x03C19654: a81e40f9  ldr x8, [x21, #0x38]
0x03C19658: e1430791  add x1, sp, #0x1d0
0x03C1965C: e00314aa  mov x0, x20
0x03C19660: 021940f9  ldr x2, [x8, #0x30]
0x03C19664: 6d160094  bl #0x3c1f018
0x03C19668: 40090036  tbz w0, #0, #0x3c19790
0x03C1966C: a81e40f9  ldr x8, [x21, #0x38]
0x03C19670: e1030791  add x1, sp, #0x1c0
0x03C19674: e00314aa  mov x0, x20
0x03C19678: 022140f9  ldr x2, [x8, #0x40]
0x03C1967C: 06180094  bl #0x3c1f694
0x03C19680: 80080036  tbz w0, #0, #0x3c19790
0x03C19684: a81e40f9  ldr x8, [x21, #0x38]
0x03C19688: e1830691  add x1, sp, #0x1a0
0x03C1968C: e00314aa  mov x0, x20
0x03C19690: 022940f9  ldr x2, [x8, #0x50]
0x03C19694: e8190094  bl #0x3c1fe34
0x03C19698: c0070036  tbz w0, #0, #0x3c19790
0x03C1969C: a81e40f9  ldr x8, [x21, #0x38]
0x03C196A0: e1030691  add x1, sp, #0x180
0x03C196A4: e00314aa  mov x0, x20
0x03C196A8: 023140f9  ldr x2, [x8, #0x60]
0x03C196AC: 9e190094  bl #0x3c1fd24
0x03C196B0: 00070036  tbz w0, #0, #0x3c19790
0x03C196B4: e08751ad  ldp q0, q1, [sp, #0x230]
0x03C196B8: e297c03d  ldr q2, [sp, #0x250]
0x03C196BC: e8fb40f9  ldr x8, [sp, #0x1f0]
0x03C196C0: f65f5ca9  ldp x22, x23, [sp, #0x1c0]
0x03C196C4: e08703ad  stp q0, q1, [sp, #0x70]
0x03C196C8: e00750ad  ldp q0, q1, [sp, #0x200]
0x03C196CC: e227803d  str q2, [sp, #0x90]
0x03C196D0: e28bc03d  ldr q2, [sp, #0x220]
0x03C196D4: e0830291  add x0, sp, #0xa0
0x03C196D8: e00702ad  stp q0, q1, [sp, #0x40]
0x03C196DC: e1834ead  ldp q1, q0, [sp, #0x1d0]
0x03C196E0: 021c8052  movz w2, #0xe0
0x03C196E4: e1031f2a  mov w1, wzr
0x03C196E8: e21b803d  str q2, [sp, #0x60]
0x03C196EC: e81b00f9  str x8, [sp, #0x30]
0x03C196F0: e18300ad  stp q1, q0, [sp, #0x10]
0x03C196F4: abd4d694  bl #0x71ce9a0
0x03C196F8: a81e40f9  ldr x8, [x21, #0x38]
0x03C196FC: e08743ad  ldp q0, q1, [sp, #0x70]
0x03C19700: e227c03d  ldr q2, [sp, #0x90]
0x03C19704: e31342ad  ldp q3, q4, [sp, #0x40]
0x03C19708: 083940f9  ldr x8, [x8, #0x70]
0x03C1970C: e00718ad  stp q0, q1, [sp, #0x300]
0x03C19710: e08740ad  ldp q0, q1, [sp, #0x10]
0x03C19714: e91b40f9  ldr x9, [sp, #0x30]
0x03C19718: e51bc03d  ldr q5, [sp, #0x60]
0x03C1971C: e2cb803d  str q2, [sp, #0x320]
0x03C19720: e39316ad  stp q3, q4, [sp, #0x2d0]
0x03C19724: e20f4dad  ldp q2, q3, [sp, #0x1a0]
0x03C19728: e00715ad  stp q0, q1, [sp, #0x2a0]
0x03C1972C: e0074cad  ldp q0, q1, [sp, #0x180]
0x03C19730: e96301f9  str x9, [sp, #0x2c0]
0x03C19734: e9830991  add x9, sp, #0x260
0x03C19738: e0830291  add x0, sp, #0xa0
0x03C1973C: e2030c91  add x2, sp, #0x300
0x03C19740: e3430b91  add x3, sp, #0x2d0
0x03C19744: e4830a91  add x4, sp, #0x2a0
0x03C19748: e7030a91  add x7, sp, #0x280
0x03C1974C: e10314aa  mov x1, x20
0x03C19750: e50316aa  mov x5, x22
0x03C19754: e60317aa  mov x6, x23
0x03C19758: e5bf803d  str q5, [sp, #0x2f0]
0x03C1975C: e20f14ad  stp q2, q3, [sp, #0x280]
0x03C19760: e00713ad  stp q0, q1, [sp, #0x260]
0x03C19764: e92300a9  stp x9, x8, [sp]
0x03C19768: f67c3194  bl #0x4878b40
0x03C1976C: e1830291  add x1, sp, #0xa0
0x03C19770: 021c8052  movz w2, #0xe0
0x03C19774: e00313aa  mov x0, x19
0x03C19778: 7ed4d694  bl #0x71ce970
0x03C1977C: e00313aa  mov x0, x19
0x03C19780: e1031faa  mov x1, xzr
0x03C19784: 909cd597  bl #0x31809c4
0x03C19788: 20008052  movz w0, #0x1
0x03C1978C: 02000014  b #0x3c19794
0x03C19790: e0031f2a  mov w0, wzr
0x03C19794: ffc30c91  add sp, sp, #0x330
0x03C19798: f44f43a9  ldp x20, x19, [sp, #0x30]
0x03C1979C: f65742a9  ldp x22, x21, [sp, #0x20]
0x03C197A0: fe5f41a9  ldp x30, x23, [sp, #0x10]
0x03C197A4: fd0744f8  ldr x29, [sp], #0x40
0x03C197A8: c0035fd6  ret
0x03C197AC: 409dd597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3C197B0 | ContextualizedECS.Query.Entities$$MatchMethod<__Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType>
; native signature: bool ContextualizedECS_Query_Entities__MatchMethod___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType_ (ContextualizedECS_Entity_o* entity, System_ValueTuple_Entity__T1__T2__T3__T4__T5__T6__o* result, const MethodInfo_3C197B0* method);
; bytes=1212 sha256=f944bb53d0e713876b72e73d033d472a69f2432f2849eb76ca501a77123c7b4e status=arm64_complete_bound indexed_start=True
0x03C197B0: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x03C197B4: fc6f01a9  stp x28, x27, [sp, #0x10]
0x03C197B8: fa6702a9  stp x26, x25, [sp, #0x20]
0x03C197BC: f85f03a9  stp x24, x23, [sp, #0x30]
0x03C197C0: f65704a9  stp x22, x21, [sp, #0x40]
0x03C197C4: f44f05a9  stp x20, x19, [sp, #0x50]
0x03C197C8: fd030091  mov x29, sp
0x03C197CC: ff4303d1  sub sp, sp, #0xd0
0x03C197D0: a1831ef8  stur x1, [x29, #-0x18]
0x03C197D4: 48d03bd5  mrs x8, tpidr_el0
0x03C197D8: a8031cf8  stur x8, [x29, #-0x40]
0x03C197DC: 081540f9  ldr x8, [x8, #0x28]
0x03C197E0: f30302aa  mov x19, x2
0x03C197E4: a8031ff8  stur x8, [x29, #-0x10]
0x03C197E8: 481c40f9  ldr x8, [x2, #0x38]
0x03C197EC: a0031df8  stur x0, [x29, #-0x30]
0x03C197F0: 880000b5  cbnz x8, #0x3c19800
0x03C197F4: e00313aa  mov x0, x19
0x03C197F8: 20f4d497  bl #0x3156878
0x03C197FC: 681e40f9  ldr x8, [x19, #0x38]
0x03C19800: 09a947a9  ldp x9, x10, [x8, #0x78]
0x03C19804: 0bb148a9  ldp x11, x12, [x8, #0x88]
0x03C19808: 0db949a9  ldp x13, x14, [x8, #0x98]
0x03C1980C: 080540f9  ldr x8, [x8, #8]
0x03C19810: 22fd40b9  ldr w2, [x9, #0xfc]
0x03C19814: b3831df8  stur x19, [x29, #-0x28]
0x03C19818: 73fd40b9  ldr w19, [x11, #0xfc]
0x03C1981C: 9afd40b9  ldr w26, [x12, #0xfc]
0x03C19820: ccfd40b9  ldr w12, [x14, #0xfc]
0x03C19824: 0bfd40b9  ldr w11, [x8, #0xfc]
0x03C19828: 57fd40b9  ldr w23, [x10, #0xfc]
0x03C1982C: b4fd40b9  ldr w20, [x13, #0xfc]
0x03C19830: 483c0091  add x8, x2, #0xf
0x03C19834: e9030091  mov x9, sp
0x03C19838: 08717c92  and x8, x8, #0x1fffffff0
0x03C1983C: 290108cb  sub x9, x9, x8
0x03C19840: ac031ef8  stur x12, [x29, #-0x20]
0x03C19844: ab831cf8  stur x11, [x29, #-0x38]
0x03C19848: a9031af8  stur x9, [x29, #-0x60]
0x03C1984C: 3f010091  mov sp, x9
0x03C19850: e9030091  mov x9, sp
0x03C19854: 290108cb  sub x9, x9, x8
0x03C19858: a90317f8  stur x9, [x29, #-0x90]
0x03C1985C: 3f010091  mov sp, x9
0x03C19860: ea3e0091  add x10, x23, #0xf
0x03C19864: e9030091  mov x9, sp
0x03C19868: 56717c92  and x22, x10, #0x1fffffff0
0x03C1986C: 290116cb  sub x9, x9, x22
0x03C19870: a98319f8  stur x9, [x29, #-0x68]
0x03C19874: 3f010091  mov sp, x9
0x03C19878: e9030091  mov x9, sp
0x03C1987C: 290116cb  sub x9, x9, x22
0x03C19880: a98316f8  stur x9, [x29, #-0x98]
0x03C19884: 3f010091  mov sp, x9
0x03C19888: 6a3e0091  add x10, x19, #0xf
0x03C1988C: e9030091  mov x9, sp
0x03C19890: 58717c92  and x24, x10, #0x1fffffff0
0x03C19894: 290118cb  sub x9, x9, x24
0x03C19898: a90319f8  stur x9, [x29, #-0x70]
0x03C1989C: 3f010091  mov sp, x9
0x03C198A0: e9030091  mov x9, sp
0x03C198A4: 290118cb  sub x9, x9, x24
0x03C198A8: a90315f8  stur x9, [x29, #-0xb0]
0x03C198AC: 3f010091  mov sp, x9
0x03C198B0: 4a3f0091  add x10, x26, #0xf
0x03C198B4: e9030091  mov x9, sp
0x03C198B8: 59717c92  and x25, x10, #0x1fffffff0
0x03C198BC: 290119cb  sub x9, x9, x25
0x03C198C0: a98318f8  stur x9, [x29, #-0x78]
0x03C198C4: 3f010091  mov sp, x9
0x03C198C8: e9030091  mov x9, sp
0x03C198CC: 290119cb  sub x9, x9, x25
0x03C198D0: a90314f8  stur x9, [x29, #-0xc0]
0x03C198D4: 3f010091  mov sp, x9
0x03C198D8: 8a3e0091  add x10, x20, #0xf
0x03C198DC: e9030091  mov x9, sp
0x03C198E0: 5b717c92  and x27, x10, #0x1fffffff0
0x03C198E4: 29011bcb  sub x9, x9, x27
0x03C198E8: a90318f8  stur x9, [x29, #-0x80]
0x03C198EC: 3f010091  mov sp, x9
0x03C198F0: e9030091  mov x9, sp
0x03C198F4: 29011bcb  sub x9, x9, x27
0x03C198F8: a98313f8  stur x9, [x29, #-0xc8]
0x03C198FC: 3f010091  mov sp, x9
0x03C19900: 8a3d0091  add x10, x12, #0xf
0x03C19904: e9030091  mov x9, sp
0x03C19908: 5c717c92  and x28, x10, #0x1fffffff0
0x03C1990C: 29011ccb  sub x9, x9, x28
0x03C19910: a98317f8  stur x9, [x29, #-0x88]
0x03C19914: 3f010091  mov sp, x9
0x03C19918: e9030091  mov x9, sp
0x03C1991C: 29011ccb  sub x9, x9, x28
0x03C19920: a90313f8  stur x9, [x29, #-0xd0]
0x03C19924: 3f010091  mov sp, x9
0x03C19928: 6a3d0091  add x10, x11, #0xf
0x03C1992C: e9030091  mov x9, sp
0x03C19930: 4a717c92  and x10, x10, #0x1fffffff0
0x03C19934: 29010acb  sub x9, x9, x10
0x03C19938: a98b3aa9  stp x9, x2, [x29, #-0x58]
0x03C1993C: 3f010091  mov sp, x9
0x03C19940: e9030091  mov x9, sp
0x03C19944: 350108cb  sub x21, x9, x8
0x03C19948: bf020091  mov sp, x21
0x03C1994C: e00315aa  mov x0, x21
0x03C19950: e1031f2a  mov w1, wzr
0x03C19954: 13d4d694  bl #0x71ce9a0
0x03C19958: e8030091  mov x8, sp
0x03C1995C: 160116cb  sub x22, x8, x22
0x03C19960: df020091  mov sp, x22
0x03C19964: e00316aa  mov x0, x22
0x03C19968: e1031f2a  mov w1, wzr
0x03C1996C: e20317aa  mov x2, x23
0x03C19970: b78314f8  stur x23, [x29, #-0xb8]
0x03C19974: 0bd4d694  bl #0x71ce9a0
0x03C19978: e8030091  mov x8, sp
0x03C1997C: 180118cb  sub x24, x8, x24
0x03C19980: 1f030091  mov sp, x24
0x03C19984: e00318aa  mov x0, x24
0x03C19988: e1031f2a  mov w1, wzr
0x03C1998C: e20313aa  mov x2, x19
0x03C19990: b38315f8  stur x19, [x29, #-0xa8]
0x03C19994: 03d4d694  bl #0x71ce9a0
0x03C19998: e8030091  mov x8, sp
0x03C1999C: 190119cb  sub x25, x8, x25
0x03C199A0: 3f030091  mov sp, x25
0x03C199A4: e00319aa  mov x0, x25
0x03C199A8: e1031f2a  mov w1, wzr
0x03C199AC: e2031aaa  mov x2, x26
0x03C199B0: ba0316f8  stur x26, [x29, #-0xa0]
0x03C199B4: fbd3d694  bl #0x71ce9a0
0x03C199B8: e8030091  mov x8, sp
0x03C199BC: 1b011bcb  sub x27, x8, x27
0x03C199C0: 7f030091  mov sp, x27
0x03C199C4: e0031baa  mov x0, x27
0x03C199C8: e1031f2a  mov w1, wzr
0x03C199CC: e20314aa  mov x2, x20
0x03C199D0: b4831bf8  stur x20, [x29, #-0x48]
0x03C199D4: f3d3d694  bl #0x71ce9a0
0x03C199D8: e8030091  mov x8, sp
0x03C199DC: 1c011ccb  sub x28, x8, x28
0x03C199E0: 9f030091  mov sp, x28
0x03C199E4: a2035ef8  ldur x2, [x29, #-0x20]
0x03C199E8: e0031caa  mov x0, x28
0x03C199EC: e1031f2a  mov w1, wzr
0x03C199F0: ecd3d694  bl #0x71ce9a0
0x03C199F4: b3835cf8  ldur x19, [x29, #-0x38]
0x03C199F8: a0835ef8  ldur x0, [x29, #-0x18]
0x03C199FC: e1031f2a  mov w1, wzr
0x03C19A00: e20313aa  mov x2, x19
0x03C19A04: e7d3d694  bl #0x71ce9a0
0x03C19A08: ba035df8  ldur x26, [x29, #-0x30]
0x03C19A0C: da1200b4  cbz x26, #0x3c19c64
0x03C19A10: b4835df8  ldur x20, [x29, #-0x28]
0x03C19A14: e0031aaa  mov x0, x26
0x03C19A18: e10315aa  mov x1, x21
0x03C19A1C: 881e40f9  ldr x8, [x20, #0x38]
0x03C19A20: 020940f9  ldr x2, [x8, #0x10]
0x03C19A24: 480040f9  ldr x8, [x2]
0x03C19A28: 00013fd6  blr x8
0x03C19A2C: 00100036  tbz w0, #0, #0x3c19c2c
0x03C19A30: 881e40f9  ldr x8, [x20, #0x38]
0x03C19A34: e0031aaa  mov x0, x26
0x03C19A38: e10316aa  mov x1, x22
0x03C19A3C: 021140f9  ldr x2, [x8, #0x20]
0x03C19A40: 480040f9  ldr x8, [x2]
0x03C19A44: 00013fd6  blr x8
0x03C19A48: 200f0036  tbz w0, #0, #0x3c19c2c
0x03C19A4C: 881e40f9  ldr x8, [x20, #0x38]
0x03C19A50: e0031aaa  mov x0, x26
0x03C19A54: e10318aa  mov x1, x24
0x03C19A58: 021940f9  ldr x2, [x8, #0x30]
0x03C19A5C: 480040f9  ldr x8, [x2]
0x03C19A60: 00013fd6  blr x8
0x03C19A64: 400e0036  tbz w0, #0, #0x3c19c2c
0x03C19A68: 881e40f9  ldr x8, [x20, #0x38]
0x03C19A6C: e0031aaa  mov x0, x26
0x03C19A70: e10319aa  mov x1, x25
0x03C19A74: 022140f9  ldr x2, [x8, #0x40]
0x03C19A78: 480040f9  ldr x8, [x2]
0x03C19A7C: 00013fd6  blr x8
0x03C19A80: 600d0036  tbz w0, #0, #0x3c19c2c
0x03C19A84: 881e40f9  ldr x8, [x20, #0x38]
0x03C19A88: e0031aaa  mov x0, x26
0x03C19A8C: e1031baa  mov x1, x27
0x03C19A90: 022940f9  ldr x2, [x8, #0x50]
0x03C19A94: 480040f9  ldr x8, [x2]
0x03C19A98: 00013fd6  blr x8
0x03C19A9C: 800c0036  tbz w0, #0, #0x3c19c2c
0x03C19AA0: 881e40f9  ldr x8, [x20, #0x38]
0x03C19AA4: e0031aaa  mov x0, x26
0x03C19AA8: e1031caa  mov x1, x28
0x03C19AAC: 023140f9  ldr x2, [x8, #0x60]
0x03C19AB0: 480040f9  ldr x8, [x2]
0x03C19AB4: 00013fd6  blr x8
0x03C19AB8: a00b0036  tbz w0, #0, #0x3c19c2c
0x03C19ABC: a0035af8  ldur x0, [x29, #-0x60]
0x03C19AC0: a2035bf8  ldur x2, [x29, #-0x50]
0x03C19AC4: e10315aa  mov x1, x21
0x03C19AC8: aad3d694  bl #0x71ce970
0x03C19ACC: e10316aa  mov x1, x22
0x03C19AD0: b68354f8  ldur x22, [x29, #-0xb8]
0x03C19AD4: a08359f8  ldur x0, [x29, #-0x68]
0x03C19AD8: e20316aa  mov x2, x22
0x03C19ADC: a5d3d694  bl #0x71ce970
0x03C19AE0: b78355f8  ldur x23, [x29, #-0xa8]
0x03C19AE4: a00359f8  ldur x0, [x29, #-0x70]
0x03C19AE8: e10318aa  mov x1, x24
0x03C19AEC: e20317aa  mov x2, x23
0x03C19AF0: a0d3d694  bl #0x71ce970
0x03C19AF4: e10319aa  mov x1, x25
0x03C19AF8: b90356f8  ldur x25, [x29, #-0xa0]
0x03C19AFC: a08358f8  ldur x0, [x29, #-0x78]
0x03C19B00: e20319aa  mov x2, x25
0x03C19B04: 9bd3d694  bl #0x71ce970
0x03C19B08: a00358f8  ldur x0, [x29, #-0x80]
0x03C19B0C: a2835bf8  ldur x2, [x29, #-0x48]
0x03C19B10: e1031baa  mov x1, x27
0x03C19B14: 97d3d694  bl #0x71ce970
0x03C19B18: bb035ef8  ldur x27, [x29, #-0x20]
0x03C19B1C: a08357f8  ldur x0, [x29, #-0x88]
0x03C19B20: e1031caa  mov x1, x28
0x03C19B24: e2031baa  mov x2, x27
0x03C19B28: 92d3d694  bl #0x71ce970
0x03C19B2C: b4835af8  ldur x20, [x29, #-0x58]
0x03C19B30: e1031f2a  mov w1, wzr
0x03C19B34: e20313aa  mov x2, x19
0x03C19B38: e00314aa  mov x0, x20
0x03C19B3C: 99d3d694  bl #0x71ce9a0
0x03C19B40: b50357f8  ldur x21, [x29, #-0x90]
0x03C19B44: a1035af8  ldur x1, [x29, #-0x60]
0x03C19B48: a2035bf8  ldur x2, [x29, #-0x50]
0x03C19B4C: e00315aa  mov x0, x21
0x03C19B50: 88d3d694  bl #0x71ce970
0x03C19B54: b88356f8  ldur x24, [x29, #-0x98]
0x03C19B58: a18359f8  ldur x1, [x29, #-0x68]
0x03C19B5C: e20316aa  mov x2, x22
0x03C19B60: e00318aa  mov x0, x24
0x03C19B64: 83d3d694  bl #0x71ce970
0x03C19B68: bc0355f8  ldur x28, [x29, #-0xb0]
0x03C19B6C: a10359f8  ldur x1, [x29, #-0x70]
0x03C19B70: e20317aa  mov x2, x23
0x03C19B74: e0031caa  mov x0, x28
0x03C19B78: 7ed3d694  bl #0x71ce970
0x03C19B7C: b60354f8  ldur x22, [x29, #-0xc0]
0x03C19B80: a18358f8  ldur x1, [x29, #-0x78]
0x03C19B84: e20319aa  mov x2, x25
0x03C19B88: e00316aa  mov x0, x22
0x03C19B8C: 79d3d694  bl #0x71ce970
0x03C19B90: b78353f8  ldur x23, [x29, #-0xc8]
0x03C19B94: a10358f8  ldur x1, [x29, #-0x80]
0x03C19B98: a2835bf8  ldur x2, [x29, #-0x48]
0x03C19B9C: e00317aa  mov x0, x23
0x03C19BA0: 74d3d694  bl #0x71ce970
0x03C19BA4: b90353f8  ldur x25, [x29, #-0xd0]
0x03C19BA8: a18357f8  ldur x1, [x29, #-0x88]
0x03C19BAC: e2031baa  mov x2, x27
0x03C19BB0: e00319aa  mov x0, x25
0x03C19BB4: 6fd3d694  bl #0x71ce970
0x03C19BB8: bb835df8  ldur x27, [x29, #-0x28]
0x03C19BBC: 681f40f9  ldr x8, [x27, #0x38]
0x03C19BC0: 083940f9  ldr x8, [x8, #0x70]
0x03C19BC4: e80f1ff8  str x8, [sp, #-0x10]!
0x03C19BC8: e00314aa  mov x0, x20
0x03C19BCC: e1031aaa  mov x1, x26
0x03C19BD0: e20315aa  mov x2, x21
0x03C19BD4: e30318aa  mov x3, x24
0x03C19BD8: e4031caa  mov x4, x28
0x03C19BDC: e50316aa  mov x5, x22
0x03C19BE0: e60317aa  mov x6, x23
0x03C19BE4: e70319aa  mov x7, x25
0x03C19BE8: 6c8f3194  bl #0x487d998
0x03C19BEC: ff430091  add sp, sp, #0x10
0x03C19BF0: b5835ef8  ldur x21, [x29, #-0x18]
0x03C19BF4: e10314aa  mov x1, x20
0x03C19BF8: e20313aa  mov x2, x19
0x03C19BFC: e00315aa  mov x0, x21
0x03C19C00: 5cd3d694  bl #0x71ce970
0x03C19C04: 681f40f9  ldr x8, [x27, #0x38]
0x03C19C08: 000540f9  ldr x0, [x8, #8]
0x03C19C0C: 08d44439  ldrb w8, [x0, #0x135]
0x03C19C10: 48000037  tbnz w8, #0, #0x3c19c18
0x03C19C14: 02f3d497  bl #0x315681c
0x03C19C18: a2835af8  ldur x2, [x29, #-0x58]
0x03C19C1C: e10315aa  mov x1, x21
0x03C19C20: 6a9bd597  bl #0x31809c8
0x03C19C24: 20008052  movz w0, #0x1
0x03C19C28: 02000014  b #0x3c19c30
0x03C19C2C: e0031f2a  mov w0, wzr
0x03C19C30: a8035cf8  ldur x8, [x29, #-0x40]
0x03C19C34: 081540f9  ldr x8, [x8, #0x28]
0x03C19C38: a9035ff8  ldur x9, [x29, #-0x10]
0x03C19C3C: 1f0109eb  cmp x8, x9
0x03C19C40: 41010054  b.ne #0x3c19c68
0x03C19C44: bf030091  mov sp, x29
0x03C19C48: f44f45a9  ldp x20, x19, [sp, #0x50]
0x03C19C4C: f65744a9  ldp x22, x21, [sp, #0x40]
0x03C19C50: f85f43a9  ldp x24, x23, [sp, #0x30]
0x03C19C54: fa6742a9  ldp x26, x25, [sp, #0x20]
0x03C19C58: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x03C19C5C: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x03C19C60: c0035fd6  ret
0x03C19C64: 129cd597  bl #0x3180cac
0x03C19C68: 4ad3d694  bl #0x71ce990

