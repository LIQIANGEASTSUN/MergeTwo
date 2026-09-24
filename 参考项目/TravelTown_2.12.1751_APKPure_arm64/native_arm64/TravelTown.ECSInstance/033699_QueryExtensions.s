; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 33699 ContextualizedECS.Query.QueryExtensions
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D64A64 | ContextualizedECS.Query.QueryExtensions$$Query<ValueTuple<object, BoardTilePositionComponent>>
; native signature: ContextualizedECS_Query_QueryExtensions_QueryBuilder_T__o ContextualizedECS_Query_QueryExtensions__Query_ValueTuple_object__BoardTilePositionComponent__ (ContextualizedECS_Context_TickContext_o context, ContextualizedECS_Query_Entities_MatchDelegate_T__o* match, ContextualizedECS_Query_Entities_ExcludeDelegate_o* exclude, const MethodInfo_3D64A64* method);
; bytes=160 sha256=dd1788bd40314bc72da640caadd8990095ba93e91851b73b8258b763d789db98 status=arm64_complete_bound indexed_start=True
0x03D64A64: ff4302d1  sub sp, sp, #0x90
0x03D64A68: fe5f06a9  stp x30, x23, [sp, #0x60]
0x03D64A6C: f65707a9  stp x22, x21, [sp, #0x70]
0x03D64A70: f44f08a9  stp x20, x19, [sp, #0x80]
0x03D64A74: 691c40f9  ldr x9, [x3, #0x38]
0x03D64A78: f40303aa  mov x20, x3
0x03D64A7C: f60302aa  mov x22, x2
0x03D64A80: f70301aa  mov x23, x1
0x03D64A84: f50300aa  mov x21, x0
0x03D64A88: f30308aa  mov x19, x8
0x03D64A8C: 890000b5  cbnz x9, #0x3d64a9c
0x03D64A90: e00314aa  mov x0, x20
0x03D64A94: 79c7cf97  bl #0x3156878
0x03D64A98: 891e40f9  ldr x9, [x20, #0x38]
0x03D64A9C: 00e4006f  movi v0.2d, #0000000000000000
0x03D64AA0: e00302ad  stp q0, q0, [sp, #0x40]
0x03D64AA4: e00301ad  stp q0, q0, [sp, #0x20]
0x03D64AA8: 230940f9  ldr x3, [x9, #0x10]
0x03D64AAC: e0830091  add x0, sp, #0x20
0x03D64AB0: e10317aa  mov x1, x23
0x03D64AB4: e20316aa  mov x2, x22
0x03D64AB8: 18841894  bl #0x4385b18
0x03D64ABC: e00741ad  ldp q0, q1, [sp, #0x20]
0x03D64AC0: e00315aa  mov x0, x21
0x03D64AC4: e1031faa  mov x1, xzr
0x03D64AC8: e00702ad  stp q0, q1, [sp, #0x40]
0x03D64ACC: edc68694  bl #0x5f16680
0x03D64AD0: 881e40f9  ldr x8, [x20, #0x38]
0x03D64AD4: e10300aa  mov x1, x0
0x03D64AD8: e0030191  add x0, sp, #0x40
0x03D64ADC: 020d40f9  ldr x2, [x8, #0x18]
0x03D64AE0: e8030091  mov x8, sp
0x03D64AE4: 2e841894  bl #0x4385b9c
0x03D64AE8: e10340ad  ldp q1, q0, [sp]
0x03D64AEC: f65747a9  ldp x22, x21, [sp, #0x70]
0x03D64AF0: fe5f46a9  ldp x30, x23, [sp, #0x60]
0x03D64AF4: 610200ad  stp q1, q0, [x19]
0x03D64AF8: f44f48a9  ldp x20, x19, [sp, #0x80]
0x03D64AFC: ff430291  add sp, sp, #0x90
0x03D64B00: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D64B04 | ContextualizedECS.Query.QueryExtensions$$Query<ValueTuple<object, BornComponent>>
; native signature: ContextualizedECS_Query_QueryExtensions_QueryBuilder_T__o ContextualizedECS_Query_QueryExtensions__Query_ValueTuple_object__BornComponent__ (ContextualizedECS_Context_TickContext_o context, ContextualizedECS_Query_Entities_MatchDelegate_T__o* match, ContextualizedECS_Query_Entities_ExcludeDelegate_o* exclude, const MethodInfo_3D64B04* method);
; bytes=160 sha256=50947ac98d4ccf894aeb9a1d53eecdcd1d3d06cc54365803fc4378d54d318bbd status=arm64_complete_bound indexed_start=True
0x03D64B04: ff4302d1  sub sp, sp, #0x90
0x03D64B08: fe5f06a9  stp x30, x23, [sp, #0x60]
0x03D64B0C: f65707a9  stp x22, x21, [sp, #0x70]
0x03D64B10: f44f08a9  stp x20, x19, [sp, #0x80]
0x03D64B14: 691c40f9  ldr x9, [x3, #0x38]
0x03D64B18: f40303aa  mov x20, x3
0x03D64B1C: f60302aa  mov x22, x2
0x03D64B20: f70301aa  mov x23, x1
0x03D64B24: f50300aa  mov x21, x0
0x03D64B28: f30308aa  mov x19, x8
0x03D64B2C: 890000b5  cbnz x9, #0x3d64b3c
0x03D64B30: e00314aa  mov x0, x20
0x03D64B34: 51c7cf97  bl #0x3156878
0x03D64B38: 891e40f9  ldr x9, [x20, #0x38]
0x03D64B3C: 00e4006f  movi v0.2d, #0000000000000000
0x03D64B40: e00302ad  stp q0, q0, [sp, #0x40]
0x03D64B44: e00301ad  stp q0, q0, [sp, #0x20]
0x03D64B48: 230940f9  ldr x3, [x9, #0x10]
0x03D64B4C: e0830091  add x0, sp, #0x20
0x03D64B50: e10317aa  mov x1, x23
0x03D64B54: e20316aa  mov x2, x22
0x03D64B58: 74851894  bl #0x4386128
0x03D64B5C: e00741ad  ldp q0, q1, [sp, #0x20]
0x03D64B60: e00315aa  mov x0, x21
0x03D64B64: e1031faa  mov x1, xzr
0x03D64B68: e00702ad  stp q0, q1, [sp, #0x40]
0x03D64B6C: c5c68694  bl #0x5f16680
0x03D64B70: 881e40f9  ldr x8, [x20, #0x38]
0x03D64B74: e10300aa  mov x1, x0
0x03D64B78: e0030191  add x0, sp, #0x40
0x03D64B7C: 020d40f9  ldr x2, [x8, #0x18]
0x03D64B80: e8030091  mov x8, sp
0x03D64B84: 8a851894  bl #0x43861ac
0x03D64B88: e10340ad  ldp q1, q0, [sp]
0x03D64B8C: f65747a9  ldp x22, x21, [sp, #0x70]
0x03D64B90: fe5f46a9  ldp x30, x23, [sp, #0x60]
0x03D64B94: 610200ad  stp q1, q0, [x19]
0x03D64B98: f44f48a9  ldp x20, x19, [sp, #0x80]
0x03D64B9C: ff430291  add sp, sp, #0x90
0x03D64BA0: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D64BA4 | ContextualizedECS.Query.QueryExtensions$$Query<ValueTuple<object, DeadComponent>>
; native signature: ContextualizedECS_Query_QueryExtensions_QueryBuilder_T__o ContextualizedECS_Query_QueryExtensions__Query_ValueTuple_object__DeadComponent__ (ContextualizedECS_Context_TickContext_o context, ContextualizedECS_Query_Entities_MatchDelegate_T__o* match, ContextualizedECS_Query_Entities_ExcludeDelegate_o* exclude, const MethodInfo_3D64BA4* method);
; bytes=160 sha256=f968e9e587c9914622c8f93082787df39de595ece01a25c6020c466793fbb7d0 status=arm64_complete_bound indexed_start=True
0x03D64BA4: ff4302d1  sub sp, sp, #0x90
0x03D64BA8: fe5f06a9  stp x30, x23, [sp, #0x60]
0x03D64BAC: f65707a9  stp x22, x21, [sp, #0x70]
0x03D64BB0: f44f08a9  stp x20, x19, [sp, #0x80]
0x03D64BB4: 691c40f9  ldr x9, [x3, #0x38]
0x03D64BB8: f40303aa  mov x20, x3
0x03D64BBC: f60302aa  mov x22, x2
0x03D64BC0: f70301aa  mov x23, x1
0x03D64BC4: f50300aa  mov x21, x0
0x03D64BC8: f30308aa  mov x19, x8
0x03D64BCC: 890000b5  cbnz x9, #0x3d64bdc
0x03D64BD0: e00314aa  mov x0, x20
0x03D64BD4: 29c7cf97  bl #0x3156878
0x03D64BD8: 891e40f9  ldr x9, [x20, #0x38]
0x03D64BDC: 00e4006f  movi v0.2d, #0000000000000000
0x03D64BE0: e00302ad  stp q0, q0, [sp, #0x40]
0x03D64BE4: e00301ad  stp q0, q0, [sp, #0x20]
0x03D64BE8: 230940f9  ldr x3, [x9, #0x10]
0x03D64BEC: e0830091  add x0, sp, #0x20
0x03D64BF0: e10317aa  mov x1, x23
0x03D64BF4: e20316aa  mov x2, x22
0x03D64BF8: d0861894  bl #0x4386738
0x03D64BFC: e00741ad  ldp q0, q1, [sp, #0x20]
0x03D64C00: e00315aa  mov x0, x21
0x03D64C04: e1031faa  mov x1, xzr
0x03D64C08: e00702ad  stp q0, q1, [sp, #0x40]
0x03D64C0C: 9dc68694  bl #0x5f16680
0x03D64C10: 881e40f9  ldr x8, [x20, #0x38]
0x03D64C14: e10300aa  mov x1, x0
0x03D64C18: e0030191  add x0, sp, #0x40
0x03D64C1C: 020d40f9  ldr x2, [x8, #0x18]
0x03D64C20: e8030091  mov x8, sp
0x03D64C24: e6861894  bl #0x43867bc
0x03D64C28: e10340ad  ldp q1, q0, [sp]
0x03D64C2C: f65747a9  ldp x22, x21, [sp, #0x70]
0x03D64C30: fe5f46a9  ldp x30, x23, [sp, #0x60]
0x03D64C34: 610200ad  stp q1, q0, [x19]
0x03D64C38: f44f48a9  ldp x20, x19, [sp, #0x80]
0x03D64C3C: ff430291  add sp, sp, #0x90
0x03D64C40: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D64C44 | ContextualizedECS.Query.QueryExtensions$$Query<ValueTuple<object, IdComponent>>
; native signature: ContextualizedECS_Query_QueryExtensions_QueryBuilder_T__o ContextualizedECS_Query_QueryExtensions__Query_ValueTuple_object__IdComponent__ (ContextualizedECS_Context_TickContext_o context, ContextualizedECS_Query_Entities_MatchDelegate_T__o* match, ContextualizedECS_Query_Entities_ExcludeDelegate_o* exclude, const MethodInfo_3D64C44* method);
; bytes=160 sha256=ffc41794b26b18020e237c10e8ea88516cfe40218b12c2aca2b13ca416990baa status=arm64_complete_bound indexed_start=True
0x03D64C44: ff4302d1  sub sp, sp, #0x90
0x03D64C48: fe5f06a9  stp x30, x23, [sp, #0x60]
0x03D64C4C: f65707a9  stp x22, x21, [sp, #0x70]
0x03D64C50: f44f08a9  stp x20, x19, [sp, #0x80]
0x03D64C54: 691c40f9  ldr x9, [x3, #0x38]
0x03D64C58: f40303aa  mov x20, x3
0x03D64C5C: f60302aa  mov x22, x2
0x03D64C60: f70301aa  mov x23, x1
0x03D64C64: f50300aa  mov x21, x0
0x03D64C68: f30308aa  mov x19, x8
0x03D64C6C: 890000b5  cbnz x9, #0x3d64c7c
0x03D64C70: e00314aa  mov x0, x20
0x03D64C74: 01c7cf97  bl #0x3156878
0x03D64C78: 891e40f9  ldr x9, [x20, #0x38]
0x03D64C7C: 00e4006f  movi v0.2d, #0000000000000000
0x03D64C80: e00302ad  stp q0, q0, [sp, #0x40]
0x03D64C84: e00301ad  stp q0, q0, [sp, #0x20]
0x03D64C88: 230940f9  ldr x3, [x9, #0x10]
0x03D64C8C: e0830091  add x0, sp, #0x20
0x03D64C90: e10317aa  mov x1, x23
0x03D64C94: e20316aa  mov x2, x22
0x03D64C98: 2c881894  bl #0x4386d48
0x03D64C9C: e00741ad  ldp q0, q1, [sp, #0x20]
0x03D64CA0: e00315aa  mov x0, x21
0x03D64CA4: e1031faa  mov x1, xzr
0x03D64CA8: e00702ad  stp q0, q1, [sp, #0x40]
0x03D64CAC: 75c68694  bl #0x5f16680
0x03D64CB0: 881e40f9  ldr x8, [x20, #0x38]
0x03D64CB4: e10300aa  mov x1, x0
0x03D64CB8: e0030191  add x0, sp, #0x40
0x03D64CBC: 020d40f9  ldr x2, [x8, #0x18]
0x03D64CC0: e8030091  mov x8, sp
0x03D64CC4: 42881894  bl #0x4386dcc
0x03D64CC8: e10340ad  ldp q1, q0, [sp]
0x03D64CCC: f65747a9  ldp x22, x21, [sp, #0x70]
0x03D64CD0: fe5f46a9  ldp x30, x23, [sp, #0x60]
0x03D64CD4: 610200ad  stp q1, q0, [x19]
0x03D64CD8: f44f48a9  ldp x20, x19, [sp, #0x80]
0x03D64CDC: ff430291  add sp, sp, #0x90
0x03D64CE0: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D64CE4 | ContextualizedECS.Query.QueryExtensions$$Query<ValueTuple<object, ItemMovedComponent>>
; native signature: ContextualizedECS_Query_QueryExtensions_QueryBuilder_T__o ContextualizedECS_Query_QueryExtensions__Query_ValueTuple_object__ItemMovedComponent__ (ContextualizedECS_Context_TickContext_o context, ContextualizedECS_Query_Entities_MatchDelegate_T__o* match, ContextualizedECS_Query_Entities_ExcludeDelegate_o* exclude, const MethodInfo_3D64CE4* method);
; bytes=160 sha256=da90834b81256837c50c6bcf66841535168071c9e1bcb4e82bcd8bf39a6fedda status=arm64_complete_bound indexed_start=True
0x03D64CE4: ff4302d1  sub sp, sp, #0x90
0x03D64CE8: fe5f06a9  stp x30, x23, [sp, #0x60]
0x03D64CEC: f65707a9  stp x22, x21, [sp, #0x70]
0x03D64CF0: f44f08a9  stp x20, x19, [sp, #0x80]
0x03D64CF4: 691c40f9  ldr x9, [x3, #0x38]
0x03D64CF8: f40303aa  mov x20, x3
0x03D64CFC: f60302aa  mov x22, x2
0x03D64D00: f70301aa  mov x23, x1
0x03D64D04: f50300aa  mov x21, x0
0x03D64D08: f30308aa  mov x19, x8
0x03D64D0C: 890000b5  cbnz x9, #0x3d64d1c
0x03D64D10: e00314aa  mov x0, x20
0x03D64D14: d9c6cf97  bl #0x3156878
0x03D64D18: 891e40f9  ldr x9, [x20, #0x38]
0x03D64D1C: 00e4006f  movi v0.2d, #0000000000000000
0x03D64D20: e00302ad  stp q0, q0, [sp, #0x40]
0x03D64D24: e00301ad  stp q0, q0, [sp, #0x20]
0x03D64D28: 230940f9  ldr x3, [x9, #0x10]
0x03D64D2C: e0830091  add x0, sp, #0x20
0x03D64D30: e10317aa  mov x1, x23
0x03D64D34: e20316aa  mov x2, x22
0x03D64D38: a7891894  bl #0x43873d4
0x03D64D3C: e00741ad  ldp q0, q1, [sp, #0x20]
0x03D64D40: e00315aa  mov x0, x21
0x03D64D44: e1031faa  mov x1, xzr
0x03D64D48: e00702ad  stp q0, q1, [sp, #0x40]
0x03D64D4C: 4dc68694  bl #0x5f16680
0x03D64D50: 881e40f9  ldr x8, [x20, #0x38]
0x03D64D54: e10300aa  mov x1, x0
0x03D64D58: e0030191  add x0, sp, #0x40
0x03D64D5C: 020d40f9  ldr x2, [x8, #0x18]
0x03D64D60: e8030091  mov x8, sp
0x03D64D64: bd891894  bl #0x4387458
0x03D64D68: e10340ad  ldp q1, q0, [sp]
0x03D64D6C: f65747a9  ldp x22, x21, [sp, #0x70]
0x03D64D70: fe5f46a9  ldp x30, x23, [sp, #0x60]
0x03D64D74: 610200ad  stp q1, q0, [x19]
0x03D64D78: f44f48a9  ldp x20, x19, [sp, #0x80]
0x03D64D7C: ff430291  add sp, sp, #0x90
0x03D64D80: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D64D84 | ContextualizedECS.Query.QueryExtensions$$Query<ValueTuple<object, TimeCycleComponent>>
; native signature: ContextualizedECS_Query_QueryExtensions_QueryBuilder_T__o ContextualizedECS_Query_QueryExtensions__Query_ValueTuple_object__TimeCycleComponent__ (ContextualizedECS_Context_TickContext_o context, ContextualizedECS_Query_Entities_MatchDelegate_T__o* match, ContextualizedECS_Query_Entities_ExcludeDelegate_o* exclude, const MethodInfo_3D64D84* method);
; bytes=160 sha256=fe0c81b20f394b446a9713e0202f33900ac8be12be655922ff28a80773a10890 status=arm64_complete_bound indexed_start=True
0x03D64D84: ff4302d1  sub sp, sp, #0x90
0x03D64D88: fe5f06a9  stp x30, x23, [sp, #0x60]
0x03D64D8C: f65707a9  stp x22, x21, [sp, #0x70]
0x03D64D90: f44f08a9  stp x20, x19, [sp, #0x80]
0x03D64D94: 691c40f9  ldr x9, [x3, #0x38]
0x03D64D98: f40303aa  mov x20, x3
0x03D64D9C: f60302aa  mov x22, x2
0x03D64DA0: f70301aa  mov x23, x1
0x03D64DA4: f50300aa  mov x21, x0
0x03D64DA8: f30308aa  mov x19, x8
0x03D64DAC: 890000b5  cbnz x9, #0x3d64dbc
0x03D64DB0: e00314aa  mov x0, x20
0x03D64DB4: b1c6cf97  bl #0x3156878
0x03D64DB8: 891e40f9  ldr x9, [x20, #0x38]
0x03D64DBC: 00e4006f  movi v0.2d, #0000000000000000
0x03D64DC0: e00302ad  stp q0, q0, [sp, #0x40]
0x03D64DC4: e00301ad  stp q0, q0, [sp, #0x20]
0x03D64DC8: 230940f9  ldr x3, [x9, #0x10]
0x03D64DCC: e0830091  add x0, sp, #0x20
0x03D64DD0: e10317aa  mov x1, x23
0x03D64DD4: e20316aa  mov x2, x22
0x03D64DD8: 038b1894  bl #0x43879e4
0x03D64DDC: e00741ad  ldp q0, q1, [sp, #0x20]
0x03D64DE0: e00315aa  mov x0, x21
0x03D64DE4: e1031faa  mov x1, xzr
0x03D64DE8: e00702ad  stp q0, q1, [sp, #0x40]
0x03D64DEC: 25c68694  bl #0x5f16680
0x03D64DF0: 881e40f9  ldr x8, [x20, #0x38]
0x03D64DF4: e10300aa  mov x1, x0
0x03D64DF8: e0030191  add x0, sp, #0x40
0x03D64DFC: 020d40f9  ldr x2, [x8, #0x18]
0x03D64E00: e8030091  mov x8, sp
0x03D64E04: 198b1894  bl #0x4387a68
0x03D64E08: e10340ad  ldp q1, q0, [sp]
0x03D64E0C: f65747a9  ldp x22, x21, [sp, #0x70]
0x03D64E10: fe5f46a9  ldp x30, x23, [sp, #0x60]
0x03D64E14: 610200ad  stp q1, q0, [x19]
0x03D64E18: f44f48a9  ldp x20, x19, [sp, #0x80]
0x03D64E1C: ff430291  add sp, sp, #0x90
0x03D64E20: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D64E24 | ContextualizedECS.Query.QueryExtensions$$Query<ValueTuple<object, TimeLockComponent>>
; native signature: ContextualizedECS_Query_QueryExtensions_QueryBuilder_T__o ContextualizedECS_Query_QueryExtensions__Query_ValueTuple_object__TimeLockComponent__ (ContextualizedECS_Context_TickContext_o context, ContextualizedECS_Query_Entities_MatchDelegate_T__o* match, ContextualizedECS_Query_Entities_ExcludeDelegate_o* exclude, const MethodInfo_3D64E24* method);
; bytes=160 sha256=4976d0c928d50e47d3ead85111ea682a7dccf98c3e99747a5c33f76de196942e status=arm64_complete_bound indexed_start=True
0x03D64E24: ff4302d1  sub sp, sp, #0x90
0x03D64E28: fe5f06a9  stp x30, x23, [sp, #0x60]
0x03D64E2C: f65707a9  stp x22, x21, [sp, #0x70]
0x03D64E30: f44f08a9  stp x20, x19, [sp, #0x80]
0x03D64E34: 691c40f9  ldr x9, [x3, #0x38]
0x03D64E38: f40303aa  mov x20, x3
0x03D64E3C: f60302aa  mov x22, x2
0x03D64E40: f70301aa  mov x23, x1
0x03D64E44: f50300aa  mov x21, x0
0x03D64E48: f30308aa  mov x19, x8
0x03D64E4C: 890000b5  cbnz x9, #0x3d64e5c
0x03D64E50: e00314aa  mov x0, x20
0x03D64E54: 89c6cf97  bl #0x3156878
0x03D64E58: 891e40f9  ldr x9, [x20, #0x38]
0x03D64E5C: 00e4006f  movi v0.2d, #0000000000000000
0x03D64E60: e00302ad  stp q0, q0, [sp, #0x40]
0x03D64E64: e00301ad  stp q0, q0, [sp, #0x20]
0x03D64E68: 230940f9  ldr x3, [x9, #0x10]
0x03D64E6C: e0830091  add x0, sp, #0x20
0x03D64E70: e10317aa  mov x1, x23
0x03D64E74: e20316aa  mov x2, x22
0x03D64E78: 7b8c1894  bl #0x4388064
0x03D64E7C: e00741ad  ldp q0, q1, [sp, #0x20]
0x03D64E80: e00315aa  mov x0, x21
0x03D64E84: e1031faa  mov x1, xzr
0x03D64E88: e00702ad  stp q0, q1, [sp, #0x40]
0x03D64E8C: fdc58694  bl #0x5f16680
0x03D64E90: 881e40f9  ldr x8, [x20, #0x38]
0x03D64E94: e10300aa  mov x1, x0
0x03D64E98: e0030191  add x0, sp, #0x40
0x03D64E9C: 020d40f9  ldr x2, [x8, #0x18]
0x03D64EA0: e8030091  mov x8, sp
0x03D64EA4: 918c1894  bl #0x43880e8
0x03D64EA8: e10340ad  ldp q1, q0, [sp]
0x03D64EAC: f65747a9  ldp x22, x21, [sp, #0x70]
0x03D64EB0: fe5f46a9  ldp x30, x23, [sp, #0x60]
0x03D64EB4: 610200ad  stp q1, q0, [x19]
0x03D64EB8: f44f48a9  ldp x20, x19, [sp, #0x80]
0x03D64EBC: ff430291  add sp, sp, #0x90
0x03D64EC0: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D64EC4 | ContextualizedECS.Query.QueryExtensions$$Query<ValueTuple<object, BoardTilePositionComponent, BoxComponent>>
; native signature: ContextualizedECS_Query_QueryExtensions_QueryBuilder_T__o ContextualizedECS_Query_QueryExtensions__Query_ValueTuple_object__BoardTilePositionComponent__BoxComponent__ (ContextualizedECS_Context_TickContext_o context, ContextualizedECS_Query_Entities_MatchDelegate_T__o* match, ContextualizedECS_Query_Entities_ExcludeDelegate_o* exclude, const MethodInfo_3D64EC4* method);
; bytes=160 sha256=6b39205f112624a5efa4ae065b336ea9d6d7504074c3dd7112f504f467d5998a status=arm64_complete_bound indexed_start=True
0x03D64EC4: ff4302d1  sub sp, sp, #0x90
0x03D64EC8: fe5f06a9  stp x30, x23, [sp, #0x60]
0x03D64ECC: f65707a9  stp x22, x21, [sp, #0x70]
0x03D64ED0: f44f08a9  stp x20, x19, [sp, #0x80]
0x03D64ED4: 691c40f9  ldr x9, [x3, #0x38]
0x03D64ED8: f40303aa  mov x20, x3
0x03D64EDC: f60302aa  mov x22, x2
0x03D64EE0: f70301aa  mov x23, x1
0x03D64EE4: f50300aa  mov x21, x0
0x03D64EE8: f30308aa  mov x19, x8
0x03D64EEC: 890000b5  cbnz x9, #0x3d64efc
0x03D64EF0: e00314aa  mov x0, x20
0x03D64EF4: 61c6cf97  bl #0x3156878
0x03D64EF8: 891e40f9  ldr x9, [x20, #0x38]
0x03D64EFC: 00e4006f  movi v0.2d, #0000000000000000
0x03D64F00: e00302ad  stp q0, q0, [sp, #0x40]
0x03D64F04: e00301ad  stp q0, q0, [sp, #0x20]
0x03D64F08: 230940f9  ldr x3, [x9, #0x10]
0x03D64F0C: e0830091  add x0, sp, #0x20
0x03D64F10: e10317aa  mov x1, x23
0x03D64F14: e20316aa  mov x2, x22
0x03D64F18: e78d1894  bl #0x43886b4
0x03D64F1C: e00741ad  ldp q0, q1, [sp, #0x20]
0x03D64F20: e00315aa  mov x0, x21
0x03D64F24: e1031faa  mov x1, xzr
0x03D64F28: e00702ad  stp q0, q1, [sp, #0x40]
0x03D64F2C: d5c58694  bl #0x5f16680
0x03D64F30: 881e40f9  ldr x8, [x20, #0x38]
0x03D64F34: e10300aa  mov x1, x0
0x03D64F38: e0030191  add x0, sp, #0x40
0x03D64F3C: 020d40f9  ldr x2, [x8, #0x18]
0x03D64F40: e8030091  mov x8, sp
0x03D64F44: fd8d1894  bl #0x4388738
0x03D64F48: e10340ad  ldp q1, q0, [sp]
0x03D64F4C: f65747a9  ldp x22, x21, [sp, #0x70]
0x03D64F50: fe5f46a9  ldp x30, x23, [sp, #0x60]
0x03D64F54: 610200ad  stp q1, q0, [x19]
0x03D64F58: f44f48a9  ldp x20, x19, [sp, #0x80]
0x03D64F5C: ff430291  add sp, sp, #0x90
0x03D64F60: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D64F64 | ContextualizedECS.Query.QueryExtensions$$Query<ValueTuple<object, BoardTilePositionComponent, IdComponent>>
; native signature: ContextualizedECS_Query_QueryExtensions_QueryBuilder_T__o ContextualizedECS_Query_QueryExtensions__Query_ValueTuple_object__BoardTilePositionComponent__IdComponent__ (ContextualizedECS_Context_TickContext_o context, ContextualizedECS_Query_Entities_MatchDelegate_T__o* match, ContextualizedECS_Query_Entities_ExcludeDelegate_o* exclude, const MethodInfo_3D64F64* method);
; bytes=160 sha256=e2b809c23c24cd5fde4ad5662cdf5687c1b86fd786be760ec7256485e294dd26 status=arm64_complete_bound indexed_start=True
0x03D64F64: ff4302d1  sub sp, sp, #0x90
0x03D64F68: fe5f06a9  stp x30, x23, [sp, #0x60]
0x03D64F6C: f65707a9  stp x22, x21, [sp, #0x70]
0x03D64F70: f44f08a9  stp x20, x19, [sp, #0x80]
0x03D64F74: 691c40f9  ldr x9, [x3, #0x38]
0x03D64F78: f40303aa  mov x20, x3
0x03D64F7C: f60302aa  mov x22, x2
0x03D64F80: f70301aa  mov x23, x1
0x03D64F84: f50300aa  mov x21, x0
0x03D64F88: f30308aa  mov x19, x8
0x03D64F8C: 890000b5  cbnz x9, #0x3d64f9c
0x03D64F90: e00314aa  mov x0, x20
0x03D64F94: 39c6cf97  bl #0x3156878
0x03D64F98: 891e40f9  ldr x9, [x20, #0x38]
0x03D64F9C: 00e4006f  movi v0.2d, #0000000000000000
0x03D64FA0: e00302ad  stp q0, q0, [sp, #0x40]
0x03D64FA4: e00301ad  stp q0, q0, [sp, #0x20]
0x03D64FA8: 230940f9  ldr x3, [x9, #0x10]
0x03D64FAC: e0830091  add x0, sp, #0x20
0x03D64FB0: e10317aa  mov x1, x23
0x03D64FB4: e20316aa  mov x2, x22
0x03D64FB8: 478f1894  bl #0x4388cd4
0x03D64FBC: e00741ad  ldp q0, q1, [sp, #0x20]
0x03D64FC0: e00315aa  mov x0, x21
0x03D64FC4: e1031faa  mov x1, xzr
0x03D64FC8: e00702ad  stp q0, q1, [sp, #0x40]
0x03D64FCC: adc58694  bl #0x5f16680
0x03D64FD0: 881e40f9  ldr x8, [x20, #0x38]
0x03D64FD4: e10300aa  mov x1, x0
0x03D64FD8: e0030191  add x0, sp, #0x40
0x03D64FDC: 020d40f9  ldr x2, [x8, #0x18]
0x03D64FE0: e8030091  mov x8, sp
0x03D64FE4: 5d8f1894  bl #0x4388d58
0x03D64FE8: e10340ad  ldp q1, q0, [sp]
0x03D64FEC: f65747a9  ldp x22, x21, [sp, #0x70]
0x03D64FF0: fe5f46a9  ldp x30, x23, [sp, #0x60]
0x03D64FF4: 610200ad  stp q1, q0, [x19]
0x03D64FF8: f44f48a9  ldp x20, x19, [sp, #0x80]
0x03D64FFC: ff430291  add sp, sp, #0x90
0x03D65000: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D65004 | ContextualizedECS.Query.QueryExtensions$$Query<ValueTuple<object, BoardTilePositionComponent, MergeComponent>>
; native signature: ContextualizedECS_Query_QueryExtensions_QueryBuilder_T__o ContextualizedECS_Query_QueryExtensions__Query_ValueTuple_object__BoardTilePositionComponent__MergeComponent__ (ContextualizedECS_Context_TickContext_o context, ContextualizedECS_Query_Entities_MatchDelegate_T__o* match, ContextualizedECS_Query_Entities_ExcludeDelegate_o* exclude, const MethodInfo_3D65004* method);
; bytes=160 sha256=e3092e0f444435fffb28b3559b8587f45c2ecb9496b324f8381394e02f5df353 status=arm64_complete_bound indexed_start=True
0x03D65004: ff4302d1  sub sp, sp, #0x90
0x03D65008: fe5f06a9  stp x30, x23, [sp, #0x60]
0x03D6500C: f65707a9  stp x22, x21, [sp, #0x70]
0x03D65010: f44f08a9  stp x20, x19, [sp, #0x80]
0x03D65014: 691c40f9  ldr x9, [x3, #0x38]
0x03D65018: f40303aa  mov x20, x3
0x03D6501C: f60302aa  mov x22, x2
0x03D65020: f70301aa  mov x23, x1
0x03D65024: f50300aa  mov x21, x0
0x03D65028: f30308aa  mov x19, x8
0x03D6502C: 890000b5  cbnz x9, #0x3d6503c
0x03D65030: e00314aa  mov x0, x20
0x03D65034: 11c6cf97  bl #0x3156878
0x03D65038: 891e40f9  ldr x9, [x20, #0x38]
0x03D6503C: 00e4006f  movi v0.2d, #0000000000000000
0x03D65040: e00302ad  stp q0, q0, [sp, #0x40]
0x03D65044: e00301ad  stp q0, q0, [sp, #0x20]
0x03D65048: 230940f9  ldr x3, [x9, #0x10]
0x03D6504C: e0830091  add x0, sp, #0x20
0x03D65050: e10317aa  mov x1, x23
0x03D65054: e20316aa  mov x2, x22
0x03D65058: b5901894  bl #0x438932c
0x03D6505C: e00741ad  ldp q0, q1, [sp, #0x20]
0x03D65060: e00315aa  mov x0, x21
0x03D65064: e1031faa  mov x1, xzr
0x03D65068: e00702ad  stp q0, q1, [sp, #0x40]
0x03D6506C: 85c58694  bl #0x5f16680
0x03D65070: 881e40f9  ldr x8, [x20, #0x38]
0x03D65074: e10300aa  mov x1, x0
0x03D65078: e0030191  add x0, sp, #0x40
0x03D6507C: 020d40f9  ldr x2, [x8, #0x18]
0x03D65080: e8030091  mov x8, sp
0x03D65084: cb901894  bl #0x43893b0
0x03D65088: e10340ad  ldp q1, q0, [sp]
0x03D6508C: f65747a9  ldp x22, x21, [sp, #0x70]
0x03D65090: fe5f46a9  ldp x30, x23, [sp, #0x60]
0x03D65094: 610200ad  stp q1, q0, [x19]
0x03D65098: f44f48a9  ldp x20, x19, [sp, #0x80]
0x03D6509C: ff430291  add sp, sp, #0x90
0x03D650A0: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D650A4 | ContextualizedECS.Query.QueryExtensions$$Query<ValueTuple<object, BoardTilePositionComponent, TimeCycleComponent>>
; native signature: ContextualizedECS_Query_QueryExtensions_QueryBuilder_T__o ContextualizedECS_Query_QueryExtensions__Query_ValueTuple_object__BoardTilePositionComponent__TimeCycleComponent__ (ContextualizedECS_Context_TickContext_o context, ContextualizedECS_Query_Entities_MatchDelegate_T__o* match, ContextualizedECS_Query_Entities_ExcludeDelegate_o* exclude, const MethodInfo_3D650A4* method);
; bytes=160 sha256=6df5d87fcc80aa88f62b28aeda905b18f322192831b95e899aae933ecb090f92 status=arm64_complete_bound indexed_start=True
0x03D650A4: ff4302d1  sub sp, sp, #0x90
0x03D650A8: fe5f06a9  stp x30, x23, [sp, #0x60]
0x03D650AC: f65707a9  stp x22, x21, [sp, #0x70]
0x03D650B0: f44f08a9  stp x20, x19, [sp, #0x80]
0x03D650B4: 691c40f9  ldr x9, [x3, #0x38]
0x03D650B8: f40303aa  mov x20, x3
0x03D650BC: f60302aa  mov x22, x2
0x03D650C0: f70301aa  mov x23, x1
0x03D650C4: f50300aa  mov x21, x0
0x03D650C8: f30308aa  mov x19, x8
0x03D650CC: 890000b5  cbnz x9, #0x3d650dc
0x03D650D0: e00314aa  mov x0, x20
0x03D650D4: e9c5cf97  bl #0x3156878
0x03D650D8: 891e40f9  ldr x9, [x20, #0x38]
0x03D650DC: 00e4006f  movi v0.2d, #0000000000000000
0x03D650E0: e00302ad  stp q0, q0, [sp, #0x40]
0x03D650E4: e00301ad  stp q0, q0, [sp, #0x20]
0x03D650E8: 230940f9  ldr x3, [x9, #0x10]
0x03D650EC: e0830091  add x0, sp, #0x20
0x03D650F0: e10317aa  mov x1, x23
0x03D650F4: e20316aa  mov x2, x22
0x03D650F8: 15921894  bl #0x438994c
0x03D650FC: e00741ad  ldp q0, q1, [sp, #0x20]
0x03D65100: e00315aa  mov x0, x21
0x03D65104: e1031faa  mov x1, xzr
0x03D65108: e00702ad  stp q0, q1, [sp, #0x40]
0x03D6510C: 5dc58694  bl #0x5f16680
0x03D65110: 881e40f9  ldr x8, [x20, #0x38]
0x03D65114: e10300aa  mov x1, x0
0x03D65118: e0030191  add x0, sp, #0x40
0x03D6511C: 020d40f9  ldr x2, [x8, #0x18]
0x03D65120: e8030091  mov x8, sp
0x03D65124: 2b921894  bl #0x43899d0
0x03D65128: e10340ad  ldp q1, q0, [sp]
0x03D6512C: f65747a9  ldp x22, x21, [sp, #0x70]
0x03D65130: fe5f46a9  ldp x30, x23, [sp, #0x60]
0x03D65134: 610200ad  stp q1, q0, [x19]
0x03D65138: f44f48a9  ldp x20, x19, [sp, #0x80]
0x03D6513C: ff430291  add sp, sp, #0x90
0x03D65140: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D65144 | ContextualizedECS.Query.QueryExtensions$$Query<ValueTuple<object, BoardTilePositionComponent, TimeLockComponent>>
; native signature: ContextualizedECS_Query_QueryExtensions_QueryBuilder_T__o ContextualizedECS_Query_QueryExtensions__Query_ValueTuple_object__BoardTilePositionComponent__TimeLockComponent__ (ContextualizedECS_Context_TickContext_o context, ContextualizedECS_Query_Entities_MatchDelegate_T__o* match, ContextualizedECS_Query_Entities_ExcludeDelegate_o* exclude, const MethodInfo_3D65144* method);
; bytes=160 sha256=34a232cb42bce62b56cc6615ee4fa902f4d185905623a3a05922128c2b9c4cb8 status=arm64_complete_bound indexed_start=True
0x03D65144: ff4302d1  sub sp, sp, #0x90
0x03D65148: fe5f06a9  stp x30, x23, [sp, #0x60]
0x03D6514C: f65707a9  stp x22, x21, [sp, #0x70]
0x03D65150: f44f08a9  stp x20, x19, [sp, #0x80]
0x03D65154: 691c40f9  ldr x9, [x3, #0x38]
0x03D65158: f40303aa  mov x20, x3
0x03D6515C: f60302aa  mov x22, x2
0x03D65160: f70301aa  mov x23, x1
0x03D65164: f50300aa  mov x21, x0
0x03D65168: f30308aa  mov x19, x8
0x03D6516C: 890000b5  cbnz x9, #0x3d6517c
0x03D65170: e00314aa  mov x0, x20
0x03D65174: c1c5cf97  bl #0x3156878
0x03D65178: 891e40f9  ldr x9, [x20, #0x38]
0x03D6517C: 00e4006f  movi v0.2d, #0000000000000000
0x03D65180: e00302ad  stp q0, q0, [sp, #0x40]
0x03D65184: e00301ad  stp q0, q0, [sp, #0x20]
0x03D65188: 230940f9  ldr x3, [x9, #0x10]
0x03D6518C: e0830091  add x0, sp, #0x20
0x03D65190: e10317aa  mov x1, x23
0x03D65194: e20316aa  mov x2, x22
0x03D65198: 89931894  bl #0x4389fbc
0x03D6519C: e00741ad  ldp q0, q1, [sp, #0x20]
0x03D651A0: e00315aa  mov x0, x21
0x03D651A4: e1031faa  mov x1, xzr
0x03D651A8: e00702ad  stp q0, q1, [sp, #0x40]
0x03D651AC: 35c58694  bl #0x5f16680
0x03D651B0: 881e40f9  ldr x8, [x20, #0x38]
0x03D651B4: e10300aa  mov x1, x0
0x03D651B8: e0030191  add x0, sp, #0x40
0x03D651BC: 020d40f9  ldr x2, [x8, #0x18]
0x03D651C0: e8030091  mov x8, sp
0x03D651C4: 9f931894  bl #0x438a040
0x03D651C8: e10340ad  ldp q1, q0, [sp]
0x03D651CC: f65747a9  ldp x22, x21, [sp, #0x70]
0x03D651D0: fe5f46a9  ldp x30, x23, [sp, #0x60]
0x03D651D4: 610200ad  stp q1, q0, [x19]
0x03D651D8: f44f48a9  ldp x20, x19, [sp, #0x80]
0x03D651DC: ff430291  add sp, sp, #0x90
0x03D651E0: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D651E4 | ContextualizedECS.Query.QueryExtensions$$Query<ValueTuple<object, BornComponent, IdComponent>>
; native signature: ContextualizedECS_Query_QueryExtensions_QueryBuilder_T__o ContextualizedECS_Query_QueryExtensions__Query_ValueTuple_object__BornComponent__IdComponent__ (ContextualizedECS_Context_TickContext_o context, ContextualizedECS_Query_Entities_MatchDelegate_T__o* match, ContextualizedECS_Query_Entities_ExcludeDelegate_o* exclude, const MethodInfo_3D651E4* method);
; bytes=160 sha256=3054d7a39c7aa0c1fc8500ccec690e1539111ba51e0a728dc9fcae9650f251bd status=arm64_complete_bound indexed_start=True
0x03D651E4: ff4302d1  sub sp, sp, #0x90
0x03D651E8: fe5f06a9  stp x30, x23, [sp, #0x60]
0x03D651EC: f65707a9  stp x22, x21, [sp, #0x70]
0x03D651F0: f44f08a9  stp x20, x19, [sp, #0x80]
0x03D651F4: 691c40f9  ldr x9, [x3, #0x38]
0x03D651F8: f40303aa  mov x20, x3
0x03D651FC: f60302aa  mov x22, x2
0x03D65200: f70301aa  mov x23, x1
0x03D65204: f50300aa  mov x21, x0
0x03D65208: f30308aa  mov x19, x8
0x03D6520C: 890000b5  cbnz x9, #0x3d6521c
0x03D65210: e00314aa  mov x0, x20
0x03D65214: 99c5cf97  bl #0x3156878
0x03D65218: 891e40f9  ldr x9, [x20, #0x38]
0x03D6521C: 00e4006f  movi v0.2d, #0000000000000000
0x03D65220: e00302ad  stp q0, q0, [sp, #0x40]
0x03D65224: e00301ad  stp q0, q0, [sp, #0x20]
0x03D65228: 230940f9  ldr x3, [x9, #0x10]
0x03D6522C: e0830091  add x0, sp, #0x20
0x03D65230: e10317aa  mov x1, x23
0x03D65234: e20316aa  mov x2, x22
0x03D65238: 04951894  bl #0x438a648
0x03D6523C: e00741ad  ldp q0, q1, [sp, #0x20]
0x03D65240: e00315aa  mov x0, x21
0x03D65244: e1031faa  mov x1, xzr
0x03D65248: e00702ad  stp q0, q1, [sp, #0x40]
0x03D6524C: 0dc58694  bl #0x5f16680
0x03D65250: 881e40f9  ldr x8, [x20, #0x38]
0x03D65254: e10300aa  mov x1, x0
0x03D65258: e0030191  add x0, sp, #0x40
0x03D6525C: 020d40f9  ldr x2, [x8, #0x18]
0x03D65260: e8030091  mov x8, sp
0x03D65264: 1a951894  bl #0x438a6cc
0x03D65268: e10340ad  ldp q1, q0, [sp]
0x03D6526C: f65747a9  ldp x22, x21, [sp, #0x70]
0x03D65270: fe5f46a9  ldp x30, x23, [sp, #0x60]
0x03D65274: 610200ad  stp q1, q0, [x19]
0x03D65278: f44f48a9  ldp x20, x19, [sp, #0x80]
0x03D6527C: ff430291  add sp, sp, #0x90
0x03D65280: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D65284 | ContextualizedECS.Query.QueryExtensions$$Query<ValueTuple<object, CollectableComponent, IdComponent>>
; native signature: ContextualizedECS_Query_QueryExtensions_QueryBuilder_T__o ContextualizedECS_Query_QueryExtensions__Query_ValueTuple_object__CollectableComponent__IdComponent__ (ContextualizedECS_Context_TickContext_o context, ContextualizedECS_Query_Entities_MatchDelegate_T__o* match, ContextualizedECS_Query_Entities_ExcludeDelegate_o* exclude, const MethodInfo_3D65284* method);
; bytes=160 sha256=86728b2e2c10b8729fecad044430456a62001c235aede849e1b8740e5be65e17 status=arm64_complete_bound indexed_start=True
0x03D65284: ff4302d1  sub sp, sp, #0x90
0x03D65288: fe5f06a9  stp x30, x23, [sp, #0x60]
0x03D6528C: f65707a9  stp x22, x21, [sp, #0x70]
0x03D65290: f44f08a9  stp x20, x19, [sp, #0x80]
0x03D65294: 691c40f9  ldr x9, [x3, #0x38]
0x03D65298: f40303aa  mov x20, x3
0x03D6529C: f60302aa  mov x22, x2
0x03D652A0: f70301aa  mov x23, x1
0x03D652A4: f50300aa  mov x21, x0
0x03D652A8: f30308aa  mov x19, x8
0x03D652AC: 890000b5  cbnz x9, #0x3d652bc
0x03D652B0: e00314aa  mov x0, x20
0x03D652B4: 71c5cf97  bl #0x3156878
0x03D652B8: 891e40f9  ldr x9, [x20, #0x38]
0x03D652BC: 00e4006f  movi v0.2d, #0000000000000000
0x03D652C0: e00302ad  stp q0, q0, [sp, #0x40]
0x03D652C4: e00301ad  stp q0, q0, [sp, #0x20]
0x03D652C8: 230940f9  ldr x3, [x9, #0x10]
0x03D652CC: e0830091  add x0, sp, #0x20
0x03D652D0: e10317aa  mov x1, x23
0x03D652D4: e20316aa  mov x2, x22
0x03D652D8: 72961894  bl #0x438aca0
0x03D652DC: e00741ad  ldp q0, q1, [sp, #0x20]
0x03D652E0: e00315aa  mov x0, x21
0x03D652E4: e1031faa  mov x1, xzr
0x03D652E8: e00702ad  stp q0, q1, [sp, #0x40]
0x03D652EC: e5c48694  bl #0x5f16680
0x03D652F0: 881e40f9  ldr x8, [x20, #0x38]
0x03D652F4: e10300aa  mov x1, x0
0x03D652F8: e0030191  add x0, sp, #0x40
0x03D652FC: 020d40f9  ldr x2, [x8, #0x18]
0x03D65300: e8030091  mov x8, sp
0x03D65304: 88961894  bl #0x438ad24
0x03D65308: e10340ad  ldp q1, q0, [sp]
0x03D6530C: f65747a9  ldp x22, x21, [sp, #0x70]
0x03D65310: fe5f46a9  ldp x30, x23, [sp, #0x60]
0x03D65314: 610200ad  stp q1, q0, [x19]
0x03D65318: f44f48a9  ldp x20, x19, [sp, #0x80]
0x03D6531C: ff430291  add sp, sp, #0x90
0x03D65320: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D65324 | ContextualizedECS.Query.QueryExtensions$$Query<ValueTuple<object, IdComponent, BoardTilePositionComponent>>
; native signature: ContextualizedECS_Query_QueryExtensions_QueryBuilder_T__o ContextualizedECS_Query_QueryExtensions__Query_ValueTuple_object__IdComponent__BoardTilePositionComponent__ (ContextualizedECS_Context_TickContext_o context, ContextualizedECS_Query_Entities_MatchDelegate_T__o* match, ContextualizedECS_Query_Entities_ExcludeDelegate_o* exclude, const MethodInfo_3D65324* method);
; bytes=160 sha256=ba6e95d5659ef661d4ab39ce0b9f6e1e15d76c22a4491d7978d8aeeec81e9564 status=arm64_complete_bound indexed_start=True
0x03D65324: ff4302d1  sub sp, sp, #0x90
0x03D65328: fe5f06a9  stp x30, x23, [sp, #0x60]
0x03D6532C: f65707a9  stp x22, x21, [sp, #0x70]
0x03D65330: f44f08a9  stp x20, x19, [sp, #0x80]
0x03D65334: 691c40f9  ldr x9, [x3, #0x38]
0x03D65338: f40303aa  mov x20, x3
0x03D6533C: f60302aa  mov x22, x2
0x03D65340: f70301aa  mov x23, x1
0x03D65344: f50300aa  mov x21, x0
0x03D65348: f30308aa  mov x19, x8
0x03D6534C: 890000b5  cbnz x9, #0x3d6535c
0x03D65350: e00314aa  mov x0, x20
0x03D65354: 49c5cf97  bl #0x3156878
0x03D65358: 891e40f9  ldr x9, [x20, #0x38]
0x03D6535C: 00e4006f  movi v0.2d, #0000000000000000
0x03D65360: e00302ad  stp q0, q0, [sp, #0x40]
0x03D65364: e00301ad  stp q0, q0, [sp, #0x20]
0x03D65368: 230940f9  ldr x3, [x9, #0x10]
0x03D6536C: e0830091  add x0, sp, #0x20
0x03D65370: e10317aa  mov x1, x23
0x03D65374: e20316aa  mov x2, x22
0x03D65378: e6971894  bl #0x438b310
0x03D6537C: e00741ad  ldp q0, q1, [sp, #0x20]
0x03D65380: e00315aa  mov x0, x21
0x03D65384: e1031faa  mov x1, xzr
0x03D65388: e00702ad  stp q0, q1, [sp, #0x40]
0x03D6538C: bdc48694  bl #0x5f16680
0x03D65390: 881e40f9  ldr x8, [x20, #0x38]
0x03D65394: e10300aa  mov x1, x0
0x03D65398: e0030191  add x0, sp, #0x40
0x03D6539C: 020d40f9  ldr x2, [x8, #0x18]
0x03D653A0: e8030091  mov x8, sp
0x03D653A4: fc971894  bl #0x438b394
0x03D653A8: e10340ad  ldp q1, q0, [sp]
0x03D653AC: f65747a9  ldp x22, x21, [sp, #0x70]
0x03D653B0: fe5f46a9  ldp x30, x23, [sp, #0x60]
0x03D653B4: 610200ad  stp q1, q0, [x19]
0x03D653B8: f44f48a9  ldp x20, x19, [sp, #0x80]
0x03D653BC: ff430291  add sp, sp, #0x90
0x03D653C0: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D653C4 | ContextualizedECS.Query.QueryExtensions$$Query<ValueTuple<object, InteractionComponent, BoardTilePositionComponent>>
; native signature: ContextualizedECS_Query_QueryExtensions_QueryBuilder_T__o ContextualizedECS_Query_QueryExtensions__Query_ValueTuple_object__InteractionComponent__BoardTilePositionComponent__ (ContextualizedECS_Context_TickContext_o context, ContextualizedECS_Query_Entities_MatchDelegate_T__o* match, ContextualizedECS_Query_Entities_ExcludeDelegate_o* exclude, const MethodInfo_3D653C4* method);
; bytes=160 sha256=e5a6a8826215fc37d704fbe4f265de88adb8b475c09e470d730600f9541e6f8e status=arm64_complete_bound indexed_start=True
0x03D653C4: ff4302d1  sub sp, sp, #0x90
0x03D653C8: fe5f06a9  stp x30, x23, [sp, #0x60]
0x03D653CC: f65707a9  stp x22, x21, [sp, #0x70]
0x03D653D0: f44f08a9  stp x20, x19, [sp, #0x80]
0x03D653D4: 691c40f9  ldr x9, [x3, #0x38]
0x03D653D8: f40303aa  mov x20, x3
0x03D653DC: f60302aa  mov x22, x2
0x03D653E0: f70301aa  mov x23, x1
0x03D653E4: f50300aa  mov x21, x0
0x03D653E8: f30308aa  mov x19, x8
0x03D653EC: 890000b5  cbnz x9, #0x3d653fc
0x03D653F0: e00314aa  mov x0, x20
0x03D653F4: 21c5cf97  bl #0x3156878
0x03D653F8: 891e40f9  ldr x9, [x20, #0x38]
0x03D653FC: 00e4006f  movi v0.2d, #0000000000000000
0x03D65400: e00302ad  stp q0, q0, [sp, #0x40]
0x03D65404: e00301ad  stp q0, q0, [sp, #0x20]
0x03D65408: 230940f9  ldr x3, [x9, #0x10]
0x03D6540C: e0830091  add x0, sp, #0x20
0x03D65410: e10317aa  mov x1, x23
0x03D65414: e20316aa  mov x2, x22
0x03D65418: 54991894  bl #0x438b968
0x03D6541C: e00741ad  ldp q0, q1, [sp, #0x20]
0x03D65420: e00315aa  mov x0, x21
0x03D65424: e1031faa  mov x1, xzr
0x03D65428: e00702ad  stp q0, q1, [sp, #0x40]
0x03D6542C: 95c48694  bl #0x5f16680
0x03D65430: 881e40f9  ldr x8, [x20, #0x38]
0x03D65434: e10300aa  mov x1, x0
0x03D65438: e0030191  add x0, sp, #0x40
0x03D6543C: 020d40f9  ldr x2, [x8, #0x18]
0x03D65440: e8030091  mov x8, sp
0x03D65444: 6a991894  bl #0x438b9ec
0x03D65448: e10340ad  ldp q1, q0, [sp]
0x03D6544C: f65747a9  ldp x22, x21, [sp, #0x70]
0x03D65450: fe5f46a9  ldp x30, x23, [sp, #0x60]
0x03D65454: 610200ad  stp q1, q0, [x19]
0x03D65458: f44f48a9  ldp x20, x19, [sp, #0x80]
0x03D6545C: ff430291  add sp, sp, #0x90
0x03D65460: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D65464 | ContextualizedECS.Query.QueryExtensions$$Query<ValueTuple<object, PendingInteractionComponent, InteractionComponent>>
; native signature: ContextualizedECS_Query_QueryExtensions_QueryBuilder_T__o ContextualizedECS_Query_QueryExtensions__Query_ValueTuple_object__PendingInteractionComponent__InteractionComponent__ (ContextualizedECS_Context_TickContext_o context, ContextualizedECS_Query_Entities_MatchDelegate_T__o* match, ContextualizedECS_Query_Entities_ExcludeDelegate_o* exclude, const MethodInfo_3D65464* method);
; bytes=160 sha256=9701a2615c424870b562f3bc6c1771229d1d86b3b14b219feb4187364d5bf8e2 status=arm64_complete_bound indexed_start=True
0x03D65464: ff4302d1  sub sp, sp, #0x90
0x03D65468: fe5f06a9  stp x30, x23, [sp, #0x60]
0x03D6546C: f65707a9  stp x22, x21, [sp, #0x70]
0x03D65470: f44f08a9  stp x20, x19, [sp, #0x80]
0x03D65474: 691c40f9  ldr x9, [x3, #0x38]
0x03D65478: f40303aa  mov x20, x3
0x03D6547C: f60302aa  mov x22, x2
0x03D65480: f70301aa  mov x23, x1
0x03D65484: f50300aa  mov x21, x0
0x03D65488: f30308aa  mov x19, x8
0x03D6548C: 890000b5  cbnz x9, #0x3d6549c
0x03D65490: e00314aa  mov x0, x20
0x03D65494: f9c4cf97  bl #0x3156878
0x03D65498: 891e40f9  ldr x9, [x20, #0x38]
0x03D6549C: 00e4006f  movi v0.2d, #0000000000000000
0x03D654A0: e00302ad  stp q0, q0, [sp, #0x40]
0x03D654A4: e00301ad  stp q0, q0, [sp, #0x20]
0x03D654A8: 230940f9  ldr x3, [x9, #0x10]
0x03D654AC: e0830091  add x0, sp, #0x20
0x03D654B0: e10317aa  mov x1, x23
0x03D654B4: e20316aa  mov x2, x22
0x03D654B8: cf9a1894  bl #0x438bff4
0x03D654BC: e00741ad  ldp q0, q1, [sp, #0x20]
0x03D654C0: e00315aa  mov x0, x21
0x03D654C4: e1031faa  mov x1, xzr
0x03D654C8: e00702ad  stp q0, q1, [sp, #0x40]
0x03D654CC: 6dc48694  bl #0x5f16680
0x03D654D0: 881e40f9  ldr x8, [x20, #0x38]
0x03D654D4: e10300aa  mov x1, x0
0x03D654D8: e0030191  add x0, sp, #0x40
0x03D654DC: 020d40f9  ldr x2, [x8, #0x18]
0x03D654E0: e8030091  mov x8, sp
0x03D654E4: e59a1894  bl #0x438c078
0x03D654E8: e10340ad  ldp q1, q0, [sp]
0x03D654EC: f65747a9  ldp x22, x21, [sp, #0x70]
0x03D654F0: fe5f46a9  ldp x30, x23, [sp, #0x60]
0x03D654F4: 610200ad  stp q1, q0, [x19]
0x03D654F8: f44f48a9  ldp x20, x19, [sp, #0x80]
0x03D654FC: ff430291  add sp, sp, #0x90
0x03D65500: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D65504 | ContextualizedECS.Query.QueryExtensions$$Query<ValueTuple<object, BoardTilePositionComponent, IdComponent, InteractionComponent>>
; native signature: ContextualizedECS_Query_QueryExtensions_QueryBuilder_T__o ContextualizedECS_Query_QueryExtensions__Query_ValueTuple_object__BoardTilePositionComponent__IdComponent__InteractionComponent__ (ContextualizedECS_Context_TickContext_o context, ContextualizedECS_Query_Entities_MatchDelegate_T__o* match, ContextualizedECS_Query_Entities_ExcludeDelegate_o* exclude, const MethodInfo_3D65504* method);
; bytes=160 sha256=ca577cbcfaeeaa22ff7a5dc43fd41e71bc44371cb97b70f289ef890dde09f02e status=arm64_complete_bound indexed_start=True
0x03D65504: ff4302d1  sub sp, sp, #0x90
0x03D65508: fe5f06a9  stp x30, x23, [sp, #0x60]
0x03D6550C: f65707a9  stp x22, x21, [sp, #0x70]
0x03D65510: f44f08a9  stp x20, x19, [sp, #0x80]
0x03D65514: 691c40f9  ldr x9, [x3, #0x38]
0x03D65518: f40303aa  mov x20, x3
0x03D6551C: f60302aa  mov x22, x2
0x03D65520: f70301aa  mov x23, x1
0x03D65524: f50300aa  mov x21, x0
0x03D65528: f30308aa  mov x19, x8
0x03D6552C: 890000b5  cbnz x9, #0x3d6553c
0x03D65530: e00314aa  mov x0, x20
0x03D65534: d1c4cf97  bl #0x3156878
0x03D65538: 891e40f9  ldr x9, [x20, #0x38]
0x03D6553C: 00e4006f  movi v0.2d, #0000000000000000
0x03D65540: e00302ad  stp q0, q0, [sp, #0x40]
0x03D65544: e00301ad  stp q0, q0, [sp, #0x20]
0x03D65548: 230940f9  ldr x3, [x9, #0x10]
0x03D6554C: e0830091  add x0, sp, #0x20
0x03D65550: e10317aa  mov x1, x23
0x03D65554: e20316aa  mov x2, x22
0x03D65558: 3d9c1894  bl #0x438c64c
0x03D6555C: e00741ad  ldp q0, q1, [sp, #0x20]
0x03D65560: e00315aa  mov x0, x21
0x03D65564: e1031faa  mov x1, xzr
0x03D65568: e00702ad  stp q0, q1, [sp, #0x40]
0x03D6556C: 45c48694  bl #0x5f16680
0x03D65570: 881e40f9  ldr x8, [x20, #0x38]
0x03D65574: e10300aa  mov x1, x0
0x03D65578: e0030191  add x0, sp, #0x40
0x03D6557C: 020d40f9  ldr x2, [x8, #0x18]
0x03D65580: e8030091  mov x8, sp
0x03D65584: 539c1894  bl #0x438c6d0
0x03D65588: e10340ad  ldp q1, q0, [sp]
0x03D6558C: f65747a9  ldp x22, x21, [sp, #0x70]
0x03D65590: fe5f46a9  ldp x30, x23, [sp, #0x60]
0x03D65594: 610200ad  stp q1, q0, [x19]
0x03D65598: f44f48a9  ldp x20, x19, [sp, #0x80]
0x03D6559C: ff430291  add sp, sp, #0x90
0x03D655A0: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D655A4 | ContextualizedECS.Query.QueryExtensions$$Query<ValueTuple<object, BoardTilePositionComponent, ItemMovedComponent, IdComponent>>
; native signature: ContextualizedECS_Query_QueryExtensions_QueryBuilder_T__o ContextualizedECS_Query_QueryExtensions__Query_ValueTuple_object__BoardTilePositionComponent__ItemMovedComponent__IdComponent__ (ContextualizedECS_Context_TickContext_o context, ContextualizedECS_Query_Entities_MatchDelegate_T__o* match, ContextualizedECS_Query_Entities_ExcludeDelegate_o* exclude, const MethodInfo_3D655A4* method);
; bytes=160 sha256=ed3546878a2c7cd6a89d362e52bdecbb06aae70e8c1d58e5b7796c19bf063a4c status=arm64_complete_bound indexed_start=True
0x03D655A4: ff4302d1  sub sp, sp, #0x90
0x03D655A8: fe5f06a9  stp x30, x23, [sp, #0x60]
0x03D655AC: f65707a9  stp x22, x21, [sp, #0x70]
0x03D655B0: f44f08a9  stp x20, x19, [sp, #0x80]
0x03D655B4: 691c40f9  ldr x9, [x3, #0x38]
0x03D655B8: f40303aa  mov x20, x3
0x03D655BC: f60302aa  mov x22, x2
0x03D655C0: f70301aa  mov x23, x1
0x03D655C4: f50300aa  mov x21, x0
0x03D655C8: f30308aa  mov x19, x8
0x03D655CC: 890000b5  cbnz x9, #0x3d655dc
0x03D655D0: e00314aa  mov x0, x20
0x03D655D4: a9c4cf97  bl #0x3156878
0x03D655D8: 891e40f9  ldr x9, [x20, #0x38]
0x03D655DC: 00e4006f  movi v0.2d, #0000000000000000
0x03D655E0: e00302ad  stp q0, q0, [sp, #0x40]
0x03D655E4: e00301ad  stp q0, q0, [sp, #0x20]
0x03D655E8: 230940f9  ldr x3, [x9, #0x10]
0x03D655EC: e0830091  add x0, sp, #0x20
0x03D655F0: e10317aa  mov x1, x23
0x03D655F4: e20316aa  mov x2, x22
0x03D655F8: b59d1894  bl #0x438cccc
0x03D655FC: e00741ad  ldp q0, q1, [sp, #0x20]
0x03D65600: e00315aa  mov x0, x21
0x03D65604: e1031faa  mov x1, xzr
0x03D65608: e00702ad  stp q0, q1, [sp, #0x40]
0x03D6560C: 1dc48694  bl #0x5f16680
0x03D65610: 881e40f9  ldr x8, [x20, #0x38]
0x03D65614: e10300aa  mov x1, x0
0x03D65618: e0030191  add x0, sp, #0x40
0x03D6561C: 020d40f9  ldr x2, [x8, #0x18]
0x03D65620: e8030091  mov x8, sp
0x03D65624: cb9d1894  bl #0x438cd50
0x03D65628: e10340ad  ldp q1, q0, [sp]
0x03D6562C: f65747a9  ldp x22, x21, [sp, #0x70]
0x03D65630: fe5f46a9  ldp x30, x23, [sp, #0x60]
0x03D65634: 610200ad  stp q1, q0, [x19]
0x03D65638: f44f48a9  ldp x20, x19, [sp, #0x80]
0x03D6563C: ff430291  add sp, sp, #0x90
0x03D65640: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D65644 | ContextualizedECS.Query.QueryExtensions$$Query<ValueTuple<object, BoardTilePositionComponent, MergeComponent, IdComponent>>
; native signature: ContextualizedECS_Query_QueryExtensions_QueryBuilder_T__o ContextualizedECS_Query_QueryExtensions__Query_ValueTuple_object__BoardTilePositionComponent__MergeComponent__IdComponent__ (ContextualizedECS_Context_TickContext_o context, ContextualizedECS_Query_Entities_MatchDelegate_T__o* match, ContextualizedECS_Query_Entities_ExcludeDelegate_o* exclude, const MethodInfo_3D65644* method);
; bytes=160 sha256=6910183bea6b17dfae105c8a72527a18dc679c42b13c9e00b37830e9f5c23631 status=arm64_complete_bound indexed_start=True
0x03D65644: ff4302d1  sub sp, sp, #0x90
0x03D65648: fe5f06a9  stp x30, x23, [sp, #0x60]
0x03D6564C: f65707a9  stp x22, x21, [sp, #0x70]
0x03D65650: f44f08a9  stp x20, x19, [sp, #0x80]
0x03D65654: 691c40f9  ldr x9, [x3, #0x38]
0x03D65658: f40303aa  mov x20, x3
0x03D6565C: f60302aa  mov x22, x2
0x03D65660: f70301aa  mov x23, x1
0x03D65664: f50300aa  mov x21, x0
0x03D65668: f30308aa  mov x19, x8
0x03D6566C: 890000b5  cbnz x9, #0x3d6567c
0x03D65670: e00314aa  mov x0, x20
0x03D65674: 81c4cf97  bl #0x3156878
0x03D65678: 891e40f9  ldr x9, [x20, #0x38]
0x03D6567C: 00e4006f  movi v0.2d, #0000000000000000
0x03D65680: e00302ad  stp q0, q0, [sp, #0x40]
0x03D65684: e00301ad  stp q0, q0, [sp, #0x20]
0x03D65688: 230940f9  ldr x3, [x9, #0x10]
0x03D6568C: e0830091  add x0, sp, #0x20
0x03D65690: e10317aa  mov x1, x23
0x03D65694: e20316aa  mov x2, x22
0x03D65698: 2a9f1894  bl #0x438d340
0x03D6569C: e00741ad  ldp q0, q1, [sp, #0x20]
0x03D656A0: e00315aa  mov x0, x21
0x03D656A4: e1031faa  mov x1, xzr
0x03D656A8: e00702ad  stp q0, q1, [sp, #0x40]
0x03D656AC: f5c38694  bl #0x5f16680
0x03D656B0: 881e40f9  ldr x8, [x20, #0x38]
0x03D656B4: e10300aa  mov x1, x0
0x03D656B8: e0030191  add x0, sp, #0x40
0x03D656BC: 020d40f9  ldr x2, [x8, #0x18]
0x03D656C0: e8030091  mov x8, sp
0x03D656C4: 409f1894  bl #0x438d3c4
0x03D656C8: e10340ad  ldp q1, q0, [sp]
0x03D656CC: f65747a9  ldp x22, x21, [sp, #0x70]
0x03D656D0: fe5f46a9  ldp x30, x23, [sp, #0x60]
0x03D656D4: 610200ad  stp q1, q0, [x19]
0x03D656D8: f44f48a9  ldp x20, x19, [sp, #0x80]
0x03D656DC: ff430291  add sp, sp, #0x90
0x03D656E0: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D656E4 | ContextualizedECS.Query.QueryExtensions$$Query<ValueTuple<object, CollectableComponent, IdComponent, BornComponent>>
; native signature: ContextualizedECS_Query_QueryExtensions_QueryBuilder_T__o ContextualizedECS_Query_QueryExtensions__Query_ValueTuple_object__CollectableComponent__IdComponent__BornComponent__ (ContextualizedECS_Context_TickContext_o context, ContextualizedECS_Query_Entities_MatchDelegate_T__o* match, ContextualizedECS_Query_Entities_ExcludeDelegate_o* exclude, const MethodInfo_3D656E4* method);
; bytes=160 sha256=e799f9c499fc94a000b63cd0ea97fd9b42aa7392a18a836a0835a9691821c699 status=arm64_complete_bound indexed_start=True
0x03D656E4: ff4302d1  sub sp, sp, #0x90
0x03D656E8: fe5f06a9  stp x30, x23, [sp, #0x60]
0x03D656EC: f65707a9  stp x22, x21, [sp, #0x70]
0x03D656F0: f44f08a9  stp x20, x19, [sp, #0x80]
0x03D656F4: 691c40f9  ldr x9, [x3, #0x38]
0x03D656F8: f40303aa  mov x20, x3
0x03D656FC: f60302aa  mov x22, x2
0x03D65700: f70301aa  mov x23, x1
0x03D65704: f50300aa  mov x21, x0
0x03D65708: f30308aa  mov x19, x8
0x03D6570C: 890000b5  cbnz x9, #0x3d6571c
0x03D65710: e00314aa  mov x0, x20
0x03D65714: 59c4cf97  bl #0x3156878
0x03D65718: 891e40f9  ldr x9, [x20, #0x38]
0x03D6571C: 00e4006f  movi v0.2d, #0000000000000000
0x03D65720: e00302ad  stp q0, q0, [sp, #0x40]
0x03D65724: e00301ad  stp q0, q0, [sp, #0x20]
0x03D65728: 230940f9  ldr x3, [x9, #0x10]
0x03D6572C: e0830091  add x0, sp, #0x20
0x03D65730: e10317aa  mov x1, x23
0x03D65734: e20316aa  mov x2, x22
0x03D65738: 9ea01894  bl #0x438d9b0
0x03D6573C: e00741ad  ldp q0, q1, [sp, #0x20]
0x03D65740: e00315aa  mov x0, x21
0x03D65744: e1031faa  mov x1, xzr
0x03D65748: e00702ad  stp q0, q1, [sp, #0x40]
0x03D6574C: cdc38694  bl #0x5f16680
0x03D65750: 881e40f9  ldr x8, [x20, #0x38]
0x03D65754: e10300aa  mov x1, x0
0x03D65758: e0030191  add x0, sp, #0x40
0x03D6575C: 020d40f9  ldr x2, [x8, #0x18]
0x03D65760: e8030091  mov x8, sp
0x03D65764: b4a01894  bl #0x438da34
0x03D65768: e10340ad  ldp q1, q0, [sp]
0x03D6576C: f65747a9  ldp x22, x21, [sp, #0x70]
0x03D65770: fe5f46a9  ldp x30, x23, [sp, #0x60]
0x03D65774: 610200ad  stp q1, q0, [x19]
0x03D65778: f44f48a9  ldp x20, x19, [sp, #0x80]
0x03D6577C: ff430291  add sp, sp, #0x90
0x03D65780: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D65784 | ContextualizedECS.Query.QueryExtensions$$Query<ValueTuple<object, DeadComponent, ItemConsumedComponent, IdComponent>>
; native signature: ContextualizedECS_Query_QueryExtensions_QueryBuilder_T__o ContextualizedECS_Query_QueryExtensions__Query_ValueTuple_object__DeadComponent__ItemConsumedComponent__IdComponent__ (ContextualizedECS_Context_TickContext_o context, ContextualizedECS_Query_Entities_MatchDelegate_T__o* match, ContextualizedECS_Query_Entities_ExcludeDelegate_o* exclude, const MethodInfo_3D65784* method);
; bytes=160 sha256=f19367a894d0cea7e0fbe638d3f1f1507bf6778ed5cd91c6dd952047fbfafcf6 status=arm64_complete_bound indexed_start=True
0x03D65784: ff4302d1  sub sp, sp, #0x90
0x03D65788: fe5f06a9  stp x30, x23, [sp, #0x60]
0x03D6578C: f65707a9  stp x22, x21, [sp, #0x70]
0x03D65790: f44f08a9  stp x20, x19, [sp, #0x80]
0x03D65794: 691c40f9  ldr x9, [x3, #0x38]
0x03D65798: f40303aa  mov x20, x3
0x03D6579C: f60302aa  mov x22, x2
0x03D657A0: f70301aa  mov x23, x1
0x03D657A4: f50300aa  mov x21, x0
0x03D657A8: f30308aa  mov x19, x8
0x03D657AC: 890000b5  cbnz x9, #0x3d657bc
0x03D657B0: e00314aa  mov x0, x20
0x03D657B4: 31c4cf97  bl #0x3156878
0x03D657B8: 891e40f9  ldr x9, [x20, #0x38]
0x03D657BC: 00e4006f  movi v0.2d, #0000000000000000
0x03D657C0: e00302ad  stp q0, q0, [sp, #0x40]
0x03D657C4: e00301ad  stp q0, q0, [sp, #0x20]
0x03D657C8: 230940f9  ldr x3, [x9, #0x10]
0x03D657CC: e0830091  add x0, sp, #0x20
0x03D657D0: e10317aa  mov x1, x23
0x03D657D4: e20316aa  mov x2, x22
0x03D657D8: 16a21894  bl #0x438e030
0x03D657DC: e00741ad  ldp q0, q1, [sp, #0x20]
0x03D657E0: e00315aa  mov x0, x21
0x03D657E4: e1031faa  mov x1, xzr
0x03D657E8: e00702ad  stp q0, q1, [sp, #0x40]
0x03D657EC: a5c38694  bl #0x5f16680
0x03D657F0: 881e40f9  ldr x8, [x20, #0x38]
0x03D657F4: e10300aa  mov x1, x0
0x03D657F8: e0030191  add x0, sp, #0x40
0x03D657FC: 020d40f9  ldr x2, [x8, #0x18]
0x03D65800: e8030091  mov x8, sp
0x03D65804: 2ca21894  bl #0x438e0b4
0x03D65808: e10340ad  ldp q1, q0, [sp]
0x03D6580C: f65747a9  ldp x22, x21, [sp, #0x70]
0x03D65810: fe5f46a9  ldp x30, x23, [sp, #0x60]
0x03D65814: 610200ad  stp q1, q0, [x19]
0x03D65818: f44f48a9  ldp x20, x19, [sp, #0x80]
0x03D6581C: ff430291  add sp, sp, #0x90
0x03D65820: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D65824 | ContextualizedECS.Query.QueryExtensions$$Query<ValueTuple<object, ExpendableComponent, BoardTilePositionComponent, DeadComponent>>
; native signature: ContextualizedECS_Query_QueryExtensions_QueryBuilder_T__o ContextualizedECS_Query_QueryExtensions__Query_ValueTuple_object__ExpendableComponent__BoardTilePositionComponent__DeadComponent__ (ContextualizedECS_Context_TickContext_o context, ContextualizedECS_Query_Entities_MatchDelegate_T__o* match, ContextualizedECS_Query_Entities_ExcludeDelegate_o* exclude, const MethodInfo_3D65824* method);
; bytes=160 sha256=878fb5630b081d1f3860af3026862e74ea893269d2cbe28b92db75430ad241a2 status=arm64_complete_bound indexed_start=True
0x03D65824: ff4302d1  sub sp, sp, #0x90
0x03D65828: fe5f06a9  stp x30, x23, [sp, #0x60]
0x03D6582C: f65707a9  stp x22, x21, [sp, #0x70]
0x03D65830: f44f08a9  stp x20, x19, [sp, #0x80]
0x03D65834: 691c40f9  ldr x9, [x3, #0x38]
0x03D65838: f40303aa  mov x20, x3
0x03D6583C: f60302aa  mov x22, x2
0x03D65840: f70301aa  mov x23, x1
0x03D65844: f50300aa  mov x21, x0
0x03D65848: f30308aa  mov x19, x8
0x03D6584C: 890000b5  cbnz x9, #0x3d6585c
0x03D65850: e00314aa  mov x0, x20
0x03D65854: 09c4cf97  bl #0x3156878
0x03D65858: 891e40f9  ldr x9, [x20, #0x38]
0x03D6585C: 00e4006f  movi v0.2d, #0000000000000000
0x03D65860: e00302ad  stp q0, q0, [sp, #0x40]
0x03D65864: e00301ad  stp q0, q0, [sp, #0x20]
0x03D65868: 230940f9  ldr x3, [x9, #0x10]
0x03D6586C: e0830091  add x0, sp, #0x20
0x03D65870: e10317aa  mov x1, x23
0x03D65874: e20316aa  mov x2, x22
0x03D65878: 8aa31894  bl #0x438e6a0
0x03D6587C: e00741ad  ldp q0, q1, [sp, #0x20]
0x03D65880: e00315aa  mov x0, x21
0x03D65884: e1031faa  mov x1, xzr
0x03D65888: e00702ad  stp q0, q1, [sp, #0x40]
0x03D6588C: 7dc38694  bl #0x5f16680
0x03D65890: 881e40f9  ldr x8, [x20, #0x38]
0x03D65894: e10300aa  mov x1, x0
0x03D65898: e0030191  add x0, sp, #0x40
0x03D6589C: 020d40f9  ldr x2, [x8, #0x18]
0x03D658A0: e8030091  mov x8, sp
0x03D658A4: a0a31894  bl #0x438e724
0x03D658A8: e10340ad  ldp q1, q0, [sp]
0x03D658AC: f65747a9  ldp x22, x21, [sp, #0x70]
0x03D658B0: fe5f46a9  ldp x30, x23, [sp, #0x60]
0x03D658B4: 610200ad  stp q1, q0, [x19]
0x03D658B8: f44f48a9  ldp x20, x19, [sp, #0x80]
0x03D658BC: ff430291  add sp, sp, #0x90
0x03D658C0: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D658C4 | ContextualizedECS.Query.QueryExtensions$$Query<ValueTuple<object, ExpendableComponent, TimeLimitedActivationComponent, TimeDurationComponent>>
; native signature: ContextualizedECS_Query_QueryExtensions_QueryBuilder_T__o ContextualizedECS_Query_QueryExtensions__Query_ValueTuple_object__ExpendableComponent__TimeLimitedActivationComponent__TimeDurationComponent__ (ContextualizedECS_Context_TickContext_o context, ContextualizedECS_Query_Entities_MatchDelegate_T__o* match, ContextualizedECS_Query_Entities_ExcludeDelegate_o* exclude, const MethodInfo_3D658C4* method);
; bytes=160 sha256=96ee0880ad7b7909896d248047422161b229272729809520a5568a1e2d161502 status=arm64_complete_bound indexed_start=True
0x03D658C4: ff4302d1  sub sp, sp, #0x90
0x03D658C8: fe5f06a9  stp x30, x23, [sp, #0x60]
0x03D658CC: f65707a9  stp x22, x21, [sp, #0x70]
0x03D658D0: f44f08a9  stp x20, x19, [sp, #0x80]
0x03D658D4: 691c40f9  ldr x9, [x3, #0x38]
0x03D658D8: f40303aa  mov x20, x3
0x03D658DC: f60302aa  mov x22, x2
0x03D658E0: f70301aa  mov x23, x1
0x03D658E4: f50300aa  mov x21, x0
0x03D658E8: f30308aa  mov x19, x8
0x03D658EC: 890000b5  cbnz x9, #0x3d658fc
0x03D658F0: e00314aa  mov x0, x20
0x03D658F4: e1c3cf97  bl #0x3156878
0x03D658F8: 891e40f9  ldr x9, [x20, #0x38]
0x03D658FC: 00e4006f  movi v0.2d, #0000000000000000
0x03D65900: e00302ad  stp q0, q0, [sp, #0x40]
0x03D65904: e00301ad  stp q0, q0, [sp, #0x20]
0x03D65908: 230940f9  ldr x3, [x9, #0x10]
0x03D6590C: e0830091  add x0, sp, #0x20
0x03D65910: e10317aa  mov x1, x23
0x03D65914: e20316aa  mov x2, x22
0x03D65918: f8a41894  bl #0x438ecf8
0x03D6591C: e00741ad  ldp q0, q1, [sp, #0x20]
0x03D65920: e00315aa  mov x0, x21
0x03D65924: e1031faa  mov x1, xzr
0x03D65928: e00702ad  stp q0, q1, [sp, #0x40]
0x03D6592C: 55c38694  bl #0x5f16680
0x03D65930: 881e40f9  ldr x8, [x20, #0x38]
0x03D65934: e10300aa  mov x1, x0
0x03D65938: e0030191  add x0, sp, #0x40
0x03D6593C: 020d40f9  ldr x2, [x8, #0x18]
0x03D65940: e8030091  mov x8, sp
0x03D65944: 0ea51894  bl #0x438ed7c
0x03D65948: e10340ad  ldp q1, q0, [sp]
0x03D6594C: f65747a9  ldp x22, x21, [sp, #0x70]
0x03D65950: fe5f46a9  ldp x30, x23, [sp, #0x60]
0x03D65954: 610200ad  stp q1, q0, [x19]
0x03D65958: f44f48a9  ldp x20, x19, [sp, #0x80]
0x03D6595C: ff430291  add sp, sp, #0x90
0x03D65960: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D65964 | ContextualizedECS.Query.QueryExtensions$$Query<ValueTuple<object, FeedingCombinationComponent, DeadComponent, BoardTilePositionComponent>>
; native signature: ContextualizedECS_Query_QueryExtensions_QueryBuilder_T__o ContextualizedECS_Query_QueryExtensions__Query_ValueTuple_object__FeedingCombinationComponent__DeadComponent__BoardTilePositionComponent__ (ContextualizedECS_Context_TickContext_o context, ContextualizedECS_Query_Entities_MatchDelegate_T__o* match, ContextualizedECS_Query_Entities_ExcludeDelegate_o* exclude, const MethodInfo_3D65964* method);
; bytes=160 sha256=841353caf921641ef7df63d0994d8eb6f9d3b471ab356f8f5a891880cceca614 status=arm64_complete_bound indexed_start=True
0x03D65964: ff4302d1  sub sp, sp, #0x90
0x03D65968: fe5f06a9  stp x30, x23, [sp, #0x60]
0x03D6596C: f65707a9  stp x22, x21, [sp, #0x70]
0x03D65970: f44f08a9  stp x20, x19, [sp, #0x80]
0x03D65974: 691c40f9  ldr x9, [x3, #0x38]
0x03D65978: f40303aa  mov x20, x3
0x03D6597C: f60302aa  mov x22, x2
0x03D65980: f70301aa  mov x23, x1
0x03D65984: f50300aa  mov x21, x0
0x03D65988: f30308aa  mov x19, x8
0x03D6598C: 890000b5  cbnz x9, #0x3d6599c
0x03D65990: e00314aa  mov x0, x20
0x03D65994: b9c3cf97  bl #0x3156878
0x03D65998: 891e40f9  ldr x9, [x20, #0x38]
0x03D6599C: 00e4006f  movi v0.2d, #0000000000000000
0x03D659A0: e00302ad  stp q0, q0, [sp, #0x40]
0x03D659A4: e00301ad  stp q0, q0, [sp, #0x20]
0x03D659A8: 230940f9  ldr x3, [x9, #0x10]
0x03D659AC: e0830091  add x0, sp, #0x20
0x03D659B0: e10317aa  mov x1, x23
0x03D659B4: e20316aa  mov x2, x22
0x03D659B8: 74a61894  bl #0x438f388
0x03D659BC: e00741ad  ldp q0, q1, [sp, #0x20]
0x03D659C0: e00315aa  mov x0, x21
0x03D659C4: e1031faa  mov x1, xzr
0x03D659C8: e00702ad  stp q0, q1, [sp, #0x40]
0x03D659CC: 2dc38694  bl #0x5f16680
0x03D659D0: 881e40f9  ldr x8, [x20, #0x38]
0x03D659D4: e10300aa  mov x1, x0
0x03D659D8: e0030191  add x0, sp, #0x40
0x03D659DC: 020d40f9  ldr x2, [x8, #0x18]
0x03D659E0: e8030091  mov x8, sp
0x03D659E4: 8aa61894  bl #0x438f40c
0x03D659E8: e10340ad  ldp q1, q0, [sp]
0x03D659EC: f65747a9  ldp x22, x21, [sp, #0x70]
0x03D659F0: fe5f46a9  ldp x30, x23, [sp, #0x60]
0x03D659F4: 610200ad  stp q1, q0, [x19]
0x03D659F8: f44f48a9  ldp x20, x19, [sp, #0x80]
0x03D659FC: ff430291  add sp, sp, #0x90
0x03D65A00: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D65A04 | ContextualizedECS.Query.QueryExtensions$$Query<ValueTuple<object, IdComponent, DeadComponent, BoardTilePositionComponent>>
; native signature: ContextualizedECS_Query_QueryExtensions_QueryBuilder_T__o ContextualizedECS_Query_QueryExtensions__Query_ValueTuple_object__IdComponent__DeadComponent__BoardTilePositionComponent__ (ContextualizedECS_Context_TickContext_o context, ContextualizedECS_Query_Entities_MatchDelegate_T__o* match, ContextualizedECS_Query_Entities_ExcludeDelegate_o* exclude, const MethodInfo_3D65A04* method);
; bytes=160 sha256=6052bdaef63cce14891a4b9b7d961a9b052fd85f3a727ce98b132d1c6ee5f8e3 status=arm64_complete_bound indexed_start=True
0x03D65A04: ff4302d1  sub sp, sp, #0x90
0x03D65A08: fe5f06a9  stp x30, x23, [sp, #0x60]
0x03D65A0C: f65707a9  stp x22, x21, [sp, #0x70]
0x03D65A10: f44f08a9  stp x20, x19, [sp, #0x80]
0x03D65A14: 691c40f9  ldr x9, [x3, #0x38]
0x03D65A18: f40303aa  mov x20, x3
0x03D65A1C: f60302aa  mov x22, x2
0x03D65A20: f70301aa  mov x23, x1
0x03D65A24: f50300aa  mov x21, x0
0x03D65A28: f30308aa  mov x19, x8
0x03D65A2C: 890000b5  cbnz x9, #0x3d65a3c
0x03D65A30: e00314aa  mov x0, x20
0x03D65A34: 91c3cf97  bl #0x3156878
0x03D65A38: 891e40f9  ldr x9, [x20, #0x38]
0x03D65A3C: 00e4006f  movi v0.2d, #0000000000000000
0x03D65A40: e00302ad  stp q0, q0, [sp, #0x40]
0x03D65A44: e00301ad  stp q0, q0, [sp, #0x20]
0x03D65A48: 230940f9  ldr x3, [x9, #0x10]
0x03D65A4C: e0830091  add x0, sp, #0x20
0x03D65A50: e10317aa  mov x1, x23
0x03D65A54: e20316aa  mov x2, x22
0x03D65A58: e0a71894  bl #0x438f9d8
0x03D65A5C: e00741ad  ldp q0, q1, [sp, #0x20]
0x03D65A60: e00315aa  mov x0, x21
0x03D65A64: e1031faa  mov x1, xzr
0x03D65A68: e00702ad  stp q0, q1, [sp, #0x40]
0x03D65A6C: 05c38694  bl #0x5f16680
0x03D65A70: 881e40f9  ldr x8, [x20, #0x38]
0x03D65A74: e10300aa  mov x1, x0
0x03D65A78: e0030191  add x0, sp, #0x40
0x03D65A7C: 020d40f9  ldr x2, [x8, #0x18]
0x03D65A80: e8030091  mov x8, sp
0x03D65A84: f6a71894  bl #0x438fa5c
0x03D65A88: e10340ad  ldp q1, q0, [sp]
0x03D65A8C: f65747a9  ldp x22, x21, [sp, #0x70]
0x03D65A90: fe5f46a9  ldp x30, x23, [sp, #0x60]
0x03D65A94: 610200ad  stp q1, q0, [x19]
0x03D65A98: f44f48a9  ldp x20, x19, [sp, #0x80]
0x03D65A9C: ff430291  add sp, sp, #0x90
0x03D65AA0: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D65AA4 | ContextualizedECS.Query.QueryExtensions$$Query<ValueTuple<object, IdComponent, LockComponent, BoxComponent>>
; native signature: ContextualizedECS_Query_QueryExtensions_QueryBuilder_T__o ContextualizedECS_Query_QueryExtensions__Query_ValueTuple_object__IdComponent__LockComponent__BoxComponent__ (ContextualizedECS_Context_TickContext_o context, ContextualizedECS_Query_Entities_MatchDelegate_T__o* match, ContextualizedECS_Query_Entities_ExcludeDelegate_o* exclude, const MethodInfo_3D65AA4* method);
; bytes=160 sha256=9c0adfbaf6ed974b69a4c969172b899d524e18be2ee185ab0838407229dfad97 status=arm64_complete_bound indexed_start=True
0x03D65AA4: ff4302d1  sub sp, sp, #0x90
0x03D65AA8: fe5f06a9  stp x30, x23, [sp, #0x60]
0x03D65AAC: f65707a9  stp x22, x21, [sp, #0x70]
0x03D65AB0: f44f08a9  stp x20, x19, [sp, #0x80]
0x03D65AB4: 691c40f9  ldr x9, [x3, #0x38]
0x03D65AB8: f40303aa  mov x20, x3
0x03D65ABC: f60302aa  mov x22, x2
0x03D65AC0: f70301aa  mov x23, x1
0x03D65AC4: f50300aa  mov x21, x0
0x03D65AC8: f30308aa  mov x19, x8
0x03D65ACC: 890000b5  cbnz x9, #0x3d65adc
0x03D65AD0: e00314aa  mov x0, x20
0x03D65AD4: 69c3cf97  bl #0x3156878
0x03D65AD8: 891e40f9  ldr x9, [x20, #0x38]
0x03D65ADC: 00e4006f  movi v0.2d, #0000000000000000
0x03D65AE0: e00302ad  stp q0, q0, [sp, #0x40]
0x03D65AE4: e00301ad  stp q0, q0, [sp, #0x20]
0x03D65AE8: 230940f9  ldr x3, [x9, #0x10]
0x03D65AEC: e0830091  add x0, sp, #0x20
0x03D65AF0: e10317aa  mov x1, x23
0x03D65AF4: e20316aa  mov x2, x22
0x03D65AF8: 4ea91894  bl #0x4390030
0x03D65AFC: e00741ad  ldp q0, q1, [sp, #0x20]
0x03D65B00: e00315aa  mov x0, x21
0x03D65B04: e1031faa  mov x1, xzr
0x03D65B08: e00702ad  stp q0, q1, [sp, #0x40]
0x03D65B0C: ddc28694  bl #0x5f16680
0x03D65B10: 881e40f9  ldr x8, [x20, #0x38]
0x03D65B14: e10300aa  mov x1, x0
0x03D65B18: e0030191  add x0, sp, #0x40
0x03D65B1C: 020d40f9  ldr x2, [x8, #0x18]
0x03D65B20: e8030091  mov x8, sp
0x03D65B24: 64a91894  bl #0x43900b4
0x03D65B28: e10340ad  ldp q1, q0, [sp]
0x03D65B2C: f65747a9  ldp x22, x21, [sp, #0x70]
0x03D65B30: fe5f46a9  ldp x30, x23, [sp, #0x60]
0x03D65B34: 610200ad  stp q1, q0, [x19]
0x03D65B38: f44f48a9  ldp x20, x19, [sp, #0x80]
0x03D65B3C: ff430291  add sp, sp, #0x90
0x03D65B40: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D65B44 | ContextualizedECS.Query.QueryExtensions$$Query<ValueTuple<object, ResourceConsumedComponent, InteractionComponent, BoardTilePositionComponent>>
; native signature: ContextualizedECS_Query_QueryExtensions_QueryBuilder_T__o ContextualizedECS_Query_QueryExtensions__Query_ValueTuple_object__ResourceConsumedComponent__InteractionComponent__BoardTilePositionComponent__ (ContextualizedECS_Context_TickContext_o context, ContextualizedECS_Query_Entities_MatchDelegate_T__o* match, ContextualizedECS_Query_Entities_ExcludeDelegate_o* exclude, const MethodInfo_3D65B44* method);
; bytes=160 sha256=71e941c0a1e0979e87c45cc5d858827355745cdd7e04467d83c796a2d8cff9b9 status=arm64_complete_bound indexed_start=True
0x03D65B44: ff4302d1  sub sp, sp, #0x90
0x03D65B48: fe5f06a9  stp x30, x23, [sp, #0x60]
0x03D65B4C: f65707a9  stp x22, x21, [sp, #0x70]
0x03D65B50: f44f08a9  stp x20, x19, [sp, #0x80]
0x03D65B54: 691c40f9  ldr x9, [x3, #0x38]
0x03D65B58: f40303aa  mov x20, x3
0x03D65B5C: f60302aa  mov x22, x2
0x03D65B60: f70301aa  mov x23, x1
0x03D65B64: f50300aa  mov x21, x0
0x03D65B68: f30308aa  mov x19, x8
0x03D65B6C: 890000b5  cbnz x9, #0x3d65b7c
0x03D65B70: e00314aa  mov x0, x20
0x03D65B74: 41c3cf97  bl #0x3156878
0x03D65B78: 891e40f9  ldr x9, [x20, #0x38]
0x03D65B7C: 00e4006f  movi v0.2d, #0000000000000000
0x03D65B80: e00302ad  stp q0, q0, [sp, #0x40]
0x03D65B84: e00301ad  stp q0, q0, [sp, #0x20]
0x03D65B88: 230940f9  ldr x3, [x9, #0x10]
0x03D65B8C: e0830091  add x0, sp, #0x20
0x03D65B90: e10317aa  mov x1, x23
0x03D65B94: e20316aa  mov x2, x22
0x03D65B98: c2aa1894  bl #0x43906a0
0x03D65B9C: e00741ad  ldp q0, q1, [sp, #0x20]
0x03D65BA0: e00315aa  mov x0, x21
0x03D65BA4: e1031faa  mov x1, xzr
0x03D65BA8: e00702ad  stp q0, q1, [sp, #0x40]
0x03D65BAC: b5c28694  bl #0x5f16680
0x03D65BB0: 881e40f9  ldr x8, [x20, #0x38]
0x03D65BB4: e10300aa  mov x1, x0
0x03D65BB8: e0030191  add x0, sp, #0x40
0x03D65BBC: 020d40f9  ldr x2, [x8, #0x18]
0x03D65BC0: e8030091  mov x8, sp
0x03D65BC4: d8aa1894  bl #0x4390724
0x03D65BC8: e10340ad  ldp q1, q0, [sp]
0x03D65BCC: f65747a9  ldp x22, x21, [sp, #0x70]
0x03D65BD0: fe5f46a9  ldp x30, x23, [sp, #0x60]
0x03D65BD4: 610200ad  stp q1, q0, [x19]
0x03D65BD8: f44f48a9  ldp x20, x19, [sp, #0x80]
0x03D65BDC: ff430291  add sp, sp, #0x90
0x03D65BE0: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D65BE4 | ContextualizedECS.Query.QueryExtensions$$Query<ValueTuple<object, TimeDurationComponent, IdComponent, BoardTilePositionComponent>>
; native signature: ContextualizedECS_Query_QueryExtensions_QueryBuilder_T__o ContextualizedECS_Query_QueryExtensions__Query_ValueTuple_object__TimeDurationComponent__IdComponent__BoardTilePositionComponent__ (ContextualizedECS_Context_TickContext_o context, ContextualizedECS_Query_Entities_MatchDelegate_T__o* match, ContextualizedECS_Query_Entities_ExcludeDelegate_o* exclude, const MethodInfo_3D65BE4* method);
; bytes=160 sha256=7942e842c2c45e5179dc1dab26769fc350e6611eba4396807e5eae5eafa45b19 status=arm64_complete_bound indexed_start=True
0x03D65BE4: ff4302d1  sub sp, sp, #0x90
0x03D65BE8: fe5f06a9  stp x30, x23, [sp, #0x60]
0x03D65BEC: f65707a9  stp x22, x21, [sp, #0x70]
0x03D65BF0: f44f08a9  stp x20, x19, [sp, #0x80]
0x03D65BF4: 691c40f9  ldr x9, [x3, #0x38]
0x03D65BF8: f40303aa  mov x20, x3
0x03D65BFC: f60302aa  mov x22, x2
0x03D65C00: f70301aa  mov x23, x1
0x03D65C04: f50300aa  mov x21, x0
0x03D65C08: f30308aa  mov x19, x8
0x03D65C0C: 890000b5  cbnz x9, #0x3d65c1c
0x03D65C10: e00314aa  mov x0, x20
0x03D65C14: 19c3cf97  bl #0x3156878
0x03D65C18: 891e40f9  ldr x9, [x20, #0x38]
0x03D65C1C: 00e4006f  movi v0.2d, #0000000000000000
0x03D65C20: e00302ad  stp q0, q0, [sp, #0x40]
0x03D65C24: e00301ad  stp q0, q0, [sp, #0x20]
0x03D65C28: 230940f9  ldr x3, [x9, #0x10]
0x03D65C2C: e0830091  add x0, sp, #0x20
0x03D65C30: e10317aa  mov x1, x23
0x03D65C34: e20316aa  mov x2, x22
0x03D65C38: 30ac1894  bl #0x4390cf8
0x03D65C3C: e00741ad  ldp q0, q1, [sp, #0x20]
0x03D65C40: e00315aa  mov x0, x21
0x03D65C44: e1031faa  mov x1, xzr
0x03D65C48: e00702ad  stp q0, q1, [sp, #0x40]
0x03D65C4C: 8dc28694  bl #0x5f16680
0x03D65C50: 881e40f9  ldr x8, [x20, #0x38]
0x03D65C54: e10300aa  mov x1, x0
0x03D65C58: e0030191  add x0, sp, #0x40
0x03D65C5C: 020d40f9  ldr x2, [x8, #0x18]
0x03D65C60: e8030091  mov x8, sp
0x03D65C64: 46ac1894  bl #0x4390d7c
0x03D65C68: e10340ad  ldp q1, q0, [sp]
0x03D65C6C: f65747a9  ldp x22, x21, [sp, #0x70]
0x03D65C70: fe5f46a9  ldp x30, x23, [sp, #0x60]
0x03D65C74: 610200ad  stp q1, q0, [x19]
0x03D65C78: f44f48a9  ldp x20, x19, [sp, #0x80]
0x03D65C7C: ff430291  add sp, sp, #0x90
0x03D65C80: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D65C84 | ContextualizedECS.Query.QueryExtensions$$Query<ValueTuple<object, TimeLockComponent, BoardTilePositionComponent, IdComponent>>
; native signature: ContextualizedECS_Query_QueryExtensions_QueryBuilder_T__o ContextualizedECS_Query_QueryExtensions__Query_ValueTuple_object__TimeLockComponent__BoardTilePositionComponent__IdComponent__ (ContextualizedECS_Context_TickContext_o context, ContextualizedECS_Query_Entities_MatchDelegate_T__o* match, ContextualizedECS_Query_Entities_ExcludeDelegate_o* exclude, const MethodInfo_3D65C84* method);
; bytes=160 sha256=93c11418c4cfd765a055252f318ee74726e22fbcfe4e3bca7bab3b91d6272f51 status=arm64_complete_bound indexed_start=True
0x03D65C84: ff4302d1  sub sp, sp, #0x90
0x03D65C88: fe5f06a9  stp x30, x23, [sp, #0x60]
0x03D65C8C: f65707a9  stp x22, x21, [sp, #0x70]
0x03D65C90: f44f08a9  stp x20, x19, [sp, #0x80]
0x03D65C94: 691c40f9  ldr x9, [x3, #0x38]
0x03D65C98: f40303aa  mov x20, x3
0x03D65C9C: f60302aa  mov x22, x2
0x03D65CA0: f70301aa  mov x23, x1
0x03D65CA4: f50300aa  mov x21, x0
0x03D65CA8: f30308aa  mov x19, x8
0x03D65CAC: 890000b5  cbnz x9, #0x3d65cbc
0x03D65CB0: e00314aa  mov x0, x20
0x03D65CB4: f1c2cf97  bl #0x3156878
0x03D65CB8: 891e40f9  ldr x9, [x20, #0x38]
0x03D65CBC: 00e4006f  movi v0.2d, #0000000000000000
0x03D65CC0: e00302ad  stp q0, q0, [sp, #0x40]
0x03D65CC4: e00301ad  stp q0, q0, [sp, #0x20]
0x03D65CC8: 230940f9  ldr x3, [x9, #0x10]
0x03D65CCC: e0830091  add x0, sp, #0x20
0x03D65CD0: e10317aa  mov x1, x23
0x03D65CD4: e20316aa  mov x2, x22
0x03D65CD8: a4ad1894  bl #0x4391368
0x03D65CDC: e00741ad  ldp q0, q1, [sp, #0x20]
0x03D65CE0: e00315aa  mov x0, x21
0x03D65CE4: e1031faa  mov x1, xzr
0x03D65CE8: e00702ad  stp q0, q1, [sp, #0x40]
0x03D65CEC: 65c28694  bl #0x5f16680
0x03D65CF0: 881e40f9  ldr x8, [x20, #0x38]
0x03D65CF4: e10300aa  mov x1, x0
0x03D65CF8: e0030191  add x0, sp, #0x40
0x03D65CFC: 020d40f9  ldr x2, [x8, #0x18]
0x03D65D00: e8030091  mov x8, sp
0x03D65D04: baad1894  bl #0x43913ec
0x03D65D08: e10340ad  ldp q1, q0, [sp]
0x03D65D0C: f65747a9  ldp x22, x21, [sp, #0x70]
0x03D65D10: fe5f46a9  ldp x30, x23, [sp, #0x60]
0x03D65D14: 610200ad  stp q1, q0, [x19]
0x03D65D18: f44f48a9  ldp x20, x19, [sp, #0x80]
0x03D65D1C: ff430291  add sp, sp, #0x90
0x03D65D20: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D65D24 | ContextualizedECS.Query.QueryExtensions$$Query<ValueTuple<object, BoardTilePositionComponent, BornComponent, IdComponent, ItemMergedComponent>>
; native signature: ContextualizedECS_Query_QueryExtensions_QueryBuilder_T__o ContextualizedECS_Query_QueryExtensions__Query_ValueTuple_object__BoardTilePositionComponent__BornComponent__IdComponent__ItemMergedComponent__ (ContextualizedECS_Context_TickContext_o context, ContextualizedECS_Query_Entities_MatchDelegate_T__o* match, ContextualizedECS_Query_Entities_ExcludeDelegate_o* exclude, const MethodInfo_3D65D24* method);
; bytes=160 sha256=2073749d0a5d47b3a47b72d9f792a94b8bd087b5b03c8e2f138ef6eb24f848fd status=arm64_complete_bound indexed_start=True
0x03D65D24: ff4302d1  sub sp, sp, #0x90
0x03D65D28: fe5f06a9  stp x30, x23, [sp, #0x60]
0x03D65D2C: f65707a9  stp x22, x21, [sp, #0x70]
0x03D65D30: f44f08a9  stp x20, x19, [sp, #0x80]
0x03D65D34: 691c40f9  ldr x9, [x3, #0x38]
0x03D65D38: f40303aa  mov x20, x3
0x03D65D3C: f60302aa  mov x22, x2
0x03D65D40: f70301aa  mov x23, x1
0x03D65D44: f50300aa  mov x21, x0
0x03D65D48: f30308aa  mov x19, x8
0x03D65D4C: 890000b5  cbnz x9, #0x3d65d5c
0x03D65D50: e00314aa  mov x0, x20
0x03D65D54: c9c2cf97  bl #0x3156878
0x03D65D58: 891e40f9  ldr x9, [x20, #0x38]
0x03D65D5C: 00e4006f  movi v0.2d, #0000000000000000
0x03D65D60: e00302ad  stp q0, q0, [sp, #0x40]
0x03D65D64: e00301ad  stp q0, q0, [sp, #0x20]
0x03D65D68: 230940f9  ldr x3, [x9, #0x10]
0x03D65D6C: e0830091  add x0, sp, #0x20
0x03D65D70: e10317aa  mov x1, x23
0x03D65D74: e20316aa  mov x2, x22
0x03D65D78: 1caf1894  bl #0x43919e8
0x03D65D7C: e00741ad  ldp q0, q1, [sp, #0x20]
0x03D65D80: e00315aa  mov x0, x21
0x03D65D84: e1031faa  mov x1, xzr
0x03D65D88: e00702ad  stp q0, q1, [sp, #0x40]
0x03D65D8C: 3dc28694  bl #0x5f16680
0x03D65D90: 881e40f9  ldr x8, [x20, #0x38]
0x03D65D94: e10300aa  mov x1, x0
0x03D65D98: e0030191  add x0, sp, #0x40
0x03D65D9C: 020d40f9  ldr x2, [x8, #0x18]
0x03D65DA0: e8030091  mov x8, sp
0x03D65DA4: 32af1894  bl #0x4391a6c
0x03D65DA8: e10340ad  ldp q1, q0, [sp]
0x03D65DAC: f65747a9  ldp x22, x21, [sp, #0x70]
0x03D65DB0: fe5f46a9  ldp x30, x23, [sp, #0x60]
0x03D65DB4: 610200ad  stp q1, q0, [x19]
0x03D65DB8: f44f48a9  ldp x20, x19, [sp, #0x80]
0x03D65DBC: ff430291  add sp, sp, #0x90
0x03D65DC0: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D65DC4 | ContextualizedECS.Query.QueryExtensions$$Query<ValueTuple<object, BoardTilePositionComponent, IdComponent, BornComponent, ItemMergedComponent>>
; native signature: ContextualizedECS_Query_QueryExtensions_QueryBuilder_T__o ContextualizedECS_Query_QueryExtensions__Query_ValueTuple_object__BoardTilePositionComponent__IdComponent__BornComponent__ItemMergedComponent__ (ContextualizedECS_Context_TickContext_o context, ContextualizedECS_Query_Entities_MatchDelegate_T__o* match, ContextualizedECS_Query_Entities_ExcludeDelegate_o* exclude, const MethodInfo_3D65DC4* method);
; bytes=160 sha256=53a77c5642818e2a1d3a5a8fdb7a4ad6e9b32578662242d51bb0e0e0f1b4839c status=arm64_complete_bound indexed_start=True
0x03D65DC4: ff4302d1  sub sp, sp, #0x90
0x03D65DC8: fe5f06a9  stp x30, x23, [sp, #0x60]
0x03D65DCC: f65707a9  stp x22, x21, [sp, #0x70]
0x03D65DD0: f44f08a9  stp x20, x19, [sp, #0x80]
0x03D65DD4: 691c40f9  ldr x9, [x3, #0x38]
0x03D65DD8: f40303aa  mov x20, x3
0x03D65DDC: f60302aa  mov x22, x2
0x03D65DE0: f70301aa  mov x23, x1
0x03D65DE4: f50300aa  mov x21, x0
0x03D65DE8: f30308aa  mov x19, x8
0x03D65DEC: 890000b5  cbnz x9, #0x3d65dfc
0x03D65DF0: e00314aa  mov x0, x20
0x03D65DF4: a1c2cf97  bl #0x3156878
0x03D65DF8: 891e40f9  ldr x9, [x20, #0x38]
0x03D65DFC: 00e4006f  movi v0.2d, #0000000000000000
0x03D65E00: e00302ad  stp q0, q0, [sp, #0x40]
0x03D65E04: e00301ad  stp q0, q0, [sp, #0x20]
0x03D65E08: 230940f9  ldr x3, [x9, #0x10]
0x03D65E0C: e0830091  add x0, sp, #0x20
0x03D65E10: e10317aa  mov x1, x23
0x03D65E14: e20316aa  mov x2, x22
0x03D65E18: 90b01894  bl #0x4392058
0x03D65E1C: e00741ad  ldp q0, q1, [sp, #0x20]
0x03D65E20: e00315aa  mov x0, x21
0x03D65E24: e1031faa  mov x1, xzr
0x03D65E28: e00702ad  stp q0, q1, [sp, #0x40]
0x03D65E2C: 15c28694  bl #0x5f16680
0x03D65E30: 881e40f9  ldr x8, [x20, #0x38]
0x03D65E34: e10300aa  mov x1, x0
0x03D65E38: e0030191  add x0, sp, #0x40
0x03D65E3C: 020d40f9  ldr x2, [x8, #0x18]
0x03D65E40: e8030091  mov x8, sp
0x03D65E44: a6b01894  bl #0x43920dc
0x03D65E48: e10340ad  ldp q1, q0, [sp]
0x03D65E4C: f65747a9  ldp x22, x21, [sp, #0x70]
0x03D65E50: fe5f46a9  ldp x30, x23, [sp, #0x60]
0x03D65E54: 610200ad  stp q1, q0, [x19]
0x03D65E58: f44f48a9  ldp x20, x19, [sp, #0x80]
0x03D65E5C: ff430291  add sp, sp, #0x90
0x03D65E60: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D65E64 | ContextualizedECS.Query.QueryExtensions$$Query<ValueTuple<object, BoardTilePositionComponent, IdComponent, DynamicItemConfigComponent, PendingInteractionComponent>>
; native signature: ContextualizedECS_Query_QueryExtensions_QueryBuilder_T__o ContextualizedECS_Query_QueryExtensions__Query_ValueTuple_object__BoardTilePositionComponent__IdComponent__DynamicItemConfigComponent__PendingInteractionComponent__ (ContextualizedECS_Context_TickContext_o context, ContextualizedECS_Query_Entities_MatchDelegate_T__o* match, ContextualizedECS_Query_Entities_ExcludeDelegate_o* exclude, const MethodInfo_3D65E64* method);
; bytes=160 sha256=e55d1103e681491310c73ec146d2c6a55839c6b66ca7921e974b31b6b4dfc70b status=arm64_complete_bound indexed_start=True
0x03D65E64: ff4302d1  sub sp, sp, #0x90
0x03D65E68: fe5f06a9  stp x30, x23, [sp, #0x60]
0x03D65E6C: f65707a9  stp x22, x21, [sp, #0x70]
0x03D65E70: f44f08a9  stp x20, x19, [sp, #0x80]
0x03D65E74: 691c40f9  ldr x9, [x3, #0x38]
0x03D65E78: f40303aa  mov x20, x3
0x03D65E7C: f60302aa  mov x22, x2
0x03D65E80: f70301aa  mov x23, x1
0x03D65E84: f50300aa  mov x21, x0
0x03D65E88: f30308aa  mov x19, x8
0x03D65E8C: 890000b5  cbnz x9, #0x3d65e9c
0x03D65E90: e00314aa  mov x0, x20
0x03D65E94: 79c2cf97  bl #0x3156878
0x03D65E98: 891e40f9  ldr x9, [x20, #0x38]
0x03D65E9C: 00e4006f  movi v0.2d, #0000000000000000
0x03D65EA0: e00302ad  stp q0, q0, [sp, #0x40]
0x03D65EA4: e00301ad  stp q0, q0, [sp, #0x20]
0x03D65EA8: 230940f9  ldr x3, [x9, #0x10]
0x03D65EAC: e0830091  add x0, sp, #0x20
0x03D65EB0: e10317aa  mov x1, x23
0x03D65EB4: e20316aa  mov x2, x22
0x03D65EB8: 04b21894  bl #0x43926c8
0x03D65EBC: e00741ad  ldp q0, q1, [sp, #0x20]
0x03D65EC0: e00315aa  mov x0, x21
0x03D65EC4: e1031faa  mov x1, xzr
0x03D65EC8: e00702ad  stp q0, q1, [sp, #0x40]
0x03D65ECC: edc18694  bl #0x5f16680
0x03D65ED0: 881e40f9  ldr x8, [x20, #0x38]
0x03D65ED4: e10300aa  mov x1, x0
0x03D65ED8: e0030191  add x0, sp, #0x40
0x03D65EDC: 020d40f9  ldr x2, [x8, #0x18]
0x03D65EE0: e8030091  mov x8, sp
0x03D65EE4: 1ab21894  bl #0x439274c
0x03D65EE8: e10340ad  ldp q1, q0, [sp]
0x03D65EEC: f65747a9  ldp x22, x21, [sp, #0x70]
0x03D65EF0: fe5f46a9  ldp x30, x23, [sp, #0x60]
0x03D65EF4: 610200ad  stp q1, q0, [x19]
0x03D65EF8: f44f48a9  ldp x20, x19, [sp, #0x80]
0x03D65EFC: ff430291  add sp, sp, #0x90
0x03D65F00: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D65F04 | ContextualizedECS.Query.QueryExtensions$$Query<ValueTuple<object, BoardTilePositionComponent, MergeComponent, IdComponent, PendingItemsCombinationComponent>>
; native signature: ContextualizedECS_Query_QueryExtensions_QueryBuilder_T__o ContextualizedECS_Query_QueryExtensions__Query_ValueTuple_object__BoardTilePositionComponent__MergeComponent__IdComponent__PendingItemsCombinationComponent__ (ContextualizedECS_Context_TickContext_o context, ContextualizedECS_Query_Entities_MatchDelegate_T__o* match, ContextualizedECS_Query_Entities_ExcludeDelegate_o* exclude, const MethodInfo_3D65F04* method);
; bytes=160 sha256=fe2c5a35bf8419213dcbc2c83cfebd341b924bdd996f5df87c5e21a238f38d81 status=arm64_complete_bound indexed_start=True
0x03D65F04: ff4302d1  sub sp, sp, #0x90
0x03D65F08: fe5f06a9  stp x30, x23, [sp, #0x60]
0x03D65F0C: f65707a9  stp x22, x21, [sp, #0x70]
0x03D65F10: f44f08a9  stp x20, x19, [sp, #0x80]
0x03D65F14: 691c40f9  ldr x9, [x3, #0x38]
0x03D65F18: f40303aa  mov x20, x3
0x03D65F1C: f60302aa  mov x22, x2
0x03D65F20: f70301aa  mov x23, x1
0x03D65F24: f50300aa  mov x21, x0
0x03D65F28: f30308aa  mov x19, x8
0x03D65F2C: 890000b5  cbnz x9, #0x3d65f3c
0x03D65F30: e00314aa  mov x0, x20
0x03D65F34: 51c2cf97  bl #0x3156878
0x03D65F38: 891e40f9  ldr x9, [x20, #0x38]
0x03D65F3C: 00e4006f  movi v0.2d, #0000000000000000
0x03D65F40: e00302ad  stp q0, q0, [sp, #0x40]
0x03D65F44: e00301ad  stp q0, q0, [sp, #0x20]
0x03D65F48: 230940f9  ldr x3, [x9, #0x10]
0x03D65F4C: e0830091  add x0, sp, #0x20
0x03D65F50: e10317aa  mov x1, x23
0x03D65F54: e20316aa  mov x2, x22
0x03D65F58: 7cb31894  bl #0x4392d48
0x03D65F5C: e00741ad  ldp q0, q1, [sp, #0x20]
0x03D65F60: e00315aa  mov x0, x21
0x03D65F64: e1031faa  mov x1, xzr
0x03D65F68: e00702ad  stp q0, q1, [sp, #0x40]
0x03D65F6C: c5c18694  bl #0x5f16680
0x03D65F70: 881e40f9  ldr x8, [x20, #0x38]
0x03D65F74: e10300aa  mov x1, x0
0x03D65F78: e0030191  add x0, sp, #0x40
0x03D65F7C: 020d40f9  ldr x2, [x8, #0x18]
0x03D65F80: e8030091  mov x8, sp
0x03D65F84: 92b31894  bl #0x4392dcc
0x03D65F88: e10340ad  ldp q1, q0, [sp]
0x03D65F8C: f65747a9  ldp x22, x21, [sp, #0x70]
0x03D65F90: fe5f46a9  ldp x30, x23, [sp, #0x60]
0x03D65F94: 610200ad  stp q1, q0, [x19]
0x03D65F98: f44f48a9  ldp x20, x19, [sp, #0x80]
0x03D65F9C: ff430291  add sp, sp, #0x90
0x03D65FA0: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D65FA4 | ContextualizedECS.Query.QueryExtensions$$Query<ValueTuple<object, BoardTilePositionComponent, ProducerComponent, FeedingCombinationComponent, InteractionComponent>>
; native signature: ContextualizedECS_Query_QueryExtensions_QueryBuilder_T__o ContextualizedECS_Query_QueryExtensions__Query_ValueTuple_object__BoardTilePositionComponent__ProducerComponent__FeedingCombinationComponent__InteractionComponent__ (ContextualizedECS_Context_TickContext_o context, ContextualizedECS_Query_Entities_MatchDelegate_T__o* match, ContextualizedECS_Query_Entities_ExcludeDelegate_o* exclude, const MethodInfo_3D65FA4* method);
; bytes=160 sha256=130d9bb0e59a9760efa7fe673e0ad9956730a3494ba8bba44e9e89936c6cdf66 status=arm64_complete_bound indexed_start=True
0x03D65FA4: ff4302d1  sub sp, sp, #0x90
0x03D65FA8: fe5f06a9  stp x30, x23, [sp, #0x60]
0x03D65FAC: f65707a9  stp x22, x21, [sp, #0x70]
0x03D65FB0: f44f08a9  stp x20, x19, [sp, #0x80]
0x03D65FB4: 691c40f9  ldr x9, [x3, #0x38]
0x03D65FB8: f40303aa  mov x20, x3
0x03D65FBC: f60302aa  mov x22, x2
0x03D65FC0: f70301aa  mov x23, x1
0x03D65FC4: f50300aa  mov x21, x0
0x03D65FC8: f30308aa  mov x19, x8
0x03D65FCC: 890000b5  cbnz x9, #0x3d65fdc
0x03D65FD0: e00314aa  mov x0, x20
0x03D65FD4: 29c2cf97  bl #0x3156878
0x03D65FD8: 891e40f9  ldr x9, [x20, #0x38]
0x03D65FDC: 00e4006f  movi v0.2d, #0000000000000000
0x03D65FE0: e00302ad  stp q0, q0, [sp, #0x40]
0x03D65FE4: e00301ad  stp q0, q0, [sp, #0x20]
0x03D65FE8: 230940f9  ldr x3, [x9, #0x10]
0x03D65FEC: e0830091  add x0, sp, #0x20
0x03D65FF0: e10317aa  mov x1, x23
0x03D65FF4: e20316aa  mov x2, x22
0x03D65FF8: f4b41894  bl #0x43933c8
0x03D65FFC: e00741ad  ldp q0, q1, [sp, #0x20]
0x03D66000: e00315aa  mov x0, x21
0x03D66004: e1031faa  mov x1, xzr
0x03D66008: e00702ad  stp q0, q1, [sp, #0x40]
0x03D6600C: 9dc18694  bl #0x5f16680
0x03D66010: 881e40f9  ldr x8, [x20, #0x38]
0x03D66014: e10300aa  mov x1, x0
0x03D66018: e0030191  add x0, sp, #0x40
0x03D6601C: 020d40f9  ldr x2, [x8, #0x18]
0x03D66020: e8030091  mov x8, sp
0x03D66024: 0ab51894  bl #0x439344c
0x03D66028: e10340ad  ldp q1, q0, [sp]
0x03D6602C: f65747a9  ldp x22, x21, [sp, #0x70]
0x03D66030: fe5f46a9  ldp x30, x23, [sp, #0x60]
0x03D66034: 610200ad  stp q1, q0, [x19]
0x03D66038: f44f48a9  ldp x20, x19, [sp, #0x80]
0x03D6603C: ff430291  add sp, sp, #0x90
0x03D66040: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D66044 | ContextualizedECS.Query.QueryExtensions$$Query<ValueTuple<object, BoardTilePositionComponent, ProducerComponent, TimeCycleComponent, InteractionComponent>>
; native signature: ContextualizedECS_Query_QueryExtensions_QueryBuilder_T__o ContextualizedECS_Query_QueryExtensions__Query_ValueTuple_object__BoardTilePositionComponent__ProducerComponent__TimeCycleComponent__InteractionComponent__ (ContextualizedECS_Context_TickContext_o context, ContextualizedECS_Query_Entities_MatchDelegate_T__o* match, ContextualizedECS_Query_Entities_ExcludeDelegate_o* exclude, const MethodInfo_3D66044* method);
; bytes=160 sha256=b69f9cc1b0ecd9e3fcb00ded95e890cbb6e079cbfb7c11884424889241c7b2cc status=arm64_complete_bound indexed_start=True
0x03D66044: ff4302d1  sub sp, sp, #0x90
0x03D66048: fe5f06a9  stp x30, x23, [sp, #0x60]
0x03D6604C: f65707a9  stp x22, x21, [sp, #0x70]
0x03D66050: f44f08a9  stp x20, x19, [sp, #0x80]
0x03D66054: 691c40f9  ldr x9, [x3, #0x38]
0x03D66058: f40303aa  mov x20, x3
0x03D6605C: f60302aa  mov x22, x2
0x03D66060: f70301aa  mov x23, x1
0x03D66064: f50300aa  mov x21, x0
0x03D66068: f30308aa  mov x19, x8
0x03D6606C: 890000b5  cbnz x9, #0x3d6607c
0x03D66070: e00314aa  mov x0, x20
0x03D66074: 01c2cf97  bl #0x3156878
0x03D66078: 891e40f9  ldr x9, [x20, #0x38]
0x03D6607C: 00e4006f  movi v0.2d, #0000000000000000
0x03D66080: e00302ad  stp q0, q0, [sp, #0x40]
0x03D66084: e00301ad  stp q0, q0, [sp, #0x20]
0x03D66088: 230940f9  ldr x3, [x9, #0x10]
0x03D6608C: e0830091  add x0, sp, #0x20
0x03D66090: e10317aa  mov x1, x23
0x03D66094: e20316aa  mov x2, x22
0x03D66098: 68b61894  bl #0x4393a38
0x03D6609C: e00741ad  ldp q0, q1, [sp, #0x20]
0x03D660A0: e00315aa  mov x0, x21
0x03D660A4: e1031faa  mov x1, xzr
0x03D660A8: e00702ad  stp q0, q1, [sp, #0x40]
0x03D660AC: 75c18694  bl #0x5f16680
0x03D660B0: 881e40f9  ldr x8, [x20, #0x38]
0x03D660B4: e10300aa  mov x1, x0
0x03D660B8: e0030191  add x0, sp, #0x40
0x03D660BC: 020d40f9  ldr x2, [x8, #0x18]
0x03D660C0: e8030091  mov x8, sp
0x03D660C4: 7eb61894  bl #0x4393abc
0x03D660C8: e10340ad  ldp q1, q0, [sp]
0x03D660CC: f65747a9  ldp x22, x21, [sp, #0x70]
0x03D660D0: fe5f46a9  ldp x30, x23, [sp, #0x60]
0x03D660D4: 610200ad  stp q1, q0, [x19]
0x03D660D8: f44f48a9  ldp x20, x19, [sp, #0x80]
0x03D660DC: ff430291  add sp, sp, #0x90
0x03D660E0: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D660E4 | ContextualizedECS.Query.QueryExtensions$$Query<ValueTuple<object, BoardTilePositionComponent, ToolSpawningComponent, PendingInteractionComponent, InteractionComponent>>
; native signature: ContextualizedECS_Query_QueryExtensions_QueryBuilder_T__o ContextualizedECS_Query_QueryExtensions__Query_ValueTuple_object__BoardTilePositionComponent__ToolSpawningComponent__PendingInteractionComponent__InteractionComponent__ (ContextualizedECS_Context_TickContext_o context, ContextualizedECS_Query_Entities_MatchDelegate_T__o* match, ContextualizedECS_Query_Entities_ExcludeDelegate_o* exclude, const MethodInfo_3D660E4* method);
; bytes=160 sha256=5aa7add44ac190a09013c8f83f0495a7c70cb7444de962a0fb65f86bb45f241b status=arm64_complete_bound indexed_start=True
0x03D660E4: ff4302d1  sub sp, sp, #0x90
0x03D660E8: fe5f06a9  stp x30, x23, [sp, #0x60]
0x03D660EC: f65707a9  stp x22, x21, [sp, #0x70]
0x03D660F0: f44f08a9  stp x20, x19, [sp, #0x80]
0x03D660F4: 691c40f9  ldr x9, [x3, #0x38]
0x03D660F8: f40303aa  mov x20, x3
0x03D660FC: f60302aa  mov x22, x2
0x03D66100: f70301aa  mov x23, x1
0x03D66104: f50300aa  mov x21, x0
0x03D66108: f30308aa  mov x19, x8
0x03D6610C: 890000b5  cbnz x9, #0x3d6611c
0x03D66110: e00314aa  mov x0, x20
0x03D66114: d9c1cf97  bl #0x3156878
0x03D66118: 891e40f9  ldr x9, [x20, #0x38]
0x03D6611C: 00e4006f  movi v0.2d, #0000000000000000
0x03D66120: e00302ad  stp q0, q0, [sp, #0x40]
0x03D66124: e00301ad  stp q0, q0, [sp, #0x20]
0x03D66128: 230940f9  ldr x3, [x9, #0x10]
0x03D6612C: e0830091  add x0, sp, #0x20
0x03D66130: e10317aa  mov x1, x23
0x03D66134: e20316aa  mov x2, x22
0x03D66138: e0b71894  bl #0x43940b8
0x03D6613C: e00741ad  ldp q0, q1, [sp, #0x20]
0x03D66140: e00315aa  mov x0, x21
0x03D66144: e1031faa  mov x1, xzr
0x03D66148: e00702ad  stp q0, q1, [sp, #0x40]
0x03D6614C: 4dc18694  bl #0x5f16680
0x03D66150: 881e40f9  ldr x8, [x20, #0x38]
0x03D66154: e10300aa  mov x1, x0
0x03D66158: e0030191  add x0, sp, #0x40
0x03D6615C: 020d40f9  ldr x2, [x8, #0x18]
0x03D66160: e8030091  mov x8, sp
0x03D66164: f6b71894  bl #0x439413c
0x03D66168: e10340ad  ldp q1, q0, [sp]
0x03D6616C: f65747a9  ldp x22, x21, [sp, #0x70]
0x03D66170: fe5f46a9  ldp x30, x23, [sp, #0x60]
0x03D66174: 610200ad  stp q1, q0, [x19]
0x03D66178: f44f48a9  ldp x20, x19, [sp, #0x80]
0x03D6617C: ff430291  add sp, sp, #0x90
0x03D66180: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D66184 | ContextualizedECS.Query.QueryExtensions$$Query<ValueTuple<object, ExpendableComponent, BoardTilePositionComponent, IdComponent, InteractionComponent>>
; native signature: ContextualizedECS_Query_QueryExtensions_QueryBuilder_T__o ContextualizedECS_Query_QueryExtensions__Query_ValueTuple_object__ExpendableComponent__BoardTilePositionComponent__IdComponent__InteractionComponent__ (ContextualizedECS_Context_TickContext_o context, ContextualizedECS_Query_Entities_MatchDelegate_T__o* match, ContextualizedECS_Query_Entities_ExcludeDelegate_o* exclude, const MethodInfo_3D66184* method);
; bytes=160 sha256=62775465669bc8937b37fb65a4083f323d970e79e46a1e718f97b1c3f42204c1 status=arm64_complete_bound indexed_start=True
0x03D66184: ff4302d1  sub sp, sp, #0x90
0x03D66188: fe5f06a9  stp x30, x23, [sp, #0x60]
0x03D6618C: f65707a9  stp x22, x21, [sp, #0x70]
0x03D66190: f44f08a9  stp x20, x19, [sp, #0x80]
0x03D66194: 691c40f9  ldr x9, [x3, #0x38]
0x03D66198: f40303aa  mov x20, x3
0x03D6619C: f60302aa  mov x22, x2
0x03D661A0: f70301aa  mov x23, x1
0x03D661A4: f50300aa  mov x21, x0
0x03D661A8: f30308aa  mov x19, x8
0x03D661AC: 890000b5  cbnz x9, #0x3d661bc
0x03D661B0: e00314aa  mov x0, x20
0x03D661B4: b1c1cf97  bl #0x3156878
0x03D661B8: 891e40f9  ldr x9, [x20, #0x38]
0x03D661BC: 00e4006f  movi v0.2d, #0000000000000000
0x03D661C0: e00302ad  stp q0, q0, [sp, #0x40]
0x03D661C4: e00301ad  stp q0, q0, [sp, #0x20]
0x03D661C8: 230940f9  ldr x3, [x9, #0x10]
0x03D661CC: e0830091  add x0, sp, #0x20
0x03D661D0: e10317aa  mov x1, x23
0x03D661D4: e20316aa  mov x2, x22
0x03D661D8: 58b91894  bl #0x4394738
0x03D661DC: e00741ad  ldp q0, q1, [sp, #0x20]
0x03D661E0: e00315aa  mov x0, x21
0x03D661E4: e1031faa  mov x1, xzr
0x03D661E8: e00702ad  stp q0, q1, [sp, #0x40]
0x03D661EC: 25c18694  bl #0x5f16680
0x03D661F0: 881e40f9  ldr x8, [x20, #0x38]
0x03D661F4: e10300aa  mov x1, x0
0x03D661F8: e0030191  add x0, sp, #0x40
0x03D661FC: 020d40f9  ldr x2, [x8, #0x18]
0x03D66200: e8030091  mov x8, sp
0x03D66204: 6eb91894  bl #0x43947bc
0x03D66208: e10340ad  ldp q1, q0, [sp]
0x03D6620C: f65747a9  ldp x22, x21, [sp, #0x70]
0x03D66210: fe5f46a9  ldp x30, x23, [sp, #0x60]
0x03D66214: 610200ad  stp q1, q0, [x19]
0x03D66218: f44f48a9  ldp x20, x19, [sp, #0x80]
0x03D6621C: ff430291  add sp, sp, #0x90
0x03D66220: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D66224 | ContextualizedECS.Query.QueryExtensions$$Query<ValueTuple<object, ExpendableComponent, BoardTilePositionComponent, TimeDurationComponent, TimeLimitedActivationComponent>>
; native signature: ContextualizedECS_Query_QueryExtensions_QueryBuilder_T__o ContextualizedECS_Query_QueryExtensions__Query_ValueTuple_object__ExpendableComponent__BoardTilePositionComponent__TimeDurationComponent__TimeLimitedActivationComponent__ (ContextualizedECS_Context_TickContext_o context, ContextualizedECS_Query_Entities_MatchDelegate_T__o* match, ContextualizedECS_Query_Entities_ExcludeDelegate_o* exclude, const MethodInfo_3D66224* method);
; bytes=160 sha256=fc4dc73a3f9c4fd275a741b614d88339a23542397262328114bf2ec2150cf684 status=arm64_complete_bound indexed_start=True
0x03D66224: ff4302d1  sub sp, sp, #0x90
0x03D66228: fe5f06a9  stp x30, x23, [sp, #0x60]
0x03D6622C: f65707a9  stp x22, x21, [sp, #0x70]
0x03D66230: f44f08a9  stp x20, x19, [sp, #0x80]
0x03D66234: 691c40f9  ldr x9, [x3, #0x38]
0x03D66238: f40303aa  mov x20, x3
0x03D6623C: f60302aa  mov x22, x2
0x03D66240: f70301aa  mov x23, x1
0x03D66244: f50300aa  mov x21, x0
0x03D66248: f30308aa  mov x19, x8
0x03D6624C: 890000b5  cbnz x9, #0x3d6625c
0x03D66250: e00314aa  mov x0, x20
0x03D66254: 89c1cf97  bl #0x3156878
0x03D66258: 891e40f9  ldr x9, [x20, #0x38]
0x03D6625C: 00e4006f  movi v0.2d, #0000000000000000
0x03D66260: e00302ad  stp q0, q0, [sp, #0x40]
0x03D66264: e00301ad  stp q0, q0, [sp, #0x20]
0x03D66268: 230940f9  ldr x3, [x9, #0x10]
0x03D6626C: e0830091  add x0, sp, #0x20
0x03D66270: e10317aa  mov x1, x23
0x03D66274: e20316aa  mov x2, x22
0x03D66278: d0ba1894  bl #0x4394db8
0x03D6627C: e00741ad  ldp q0, q1, [sp, #0x20]
0x03D66280: e00315aa  mov x0, x21
0x03D66284: e1031faa  mov x1, xzr
0x03D66288: e00702ad  stp q0, q1, [sp, #0x40]
0x03D6628C: fdc08694  bl #0x5f16680
0x03D66290: 881e40f9  ldr x8, [x20, #0x38]
0x03D66294: e10300aa  mov x1, x0
0x03D66298: e0030191  add x0, sp, #0x40
0x03D6629C: 020d40f9  ldr x2, [x8, #0x18]
0x03D662A0: e8030091  mov x8, sp
0x03D662A4: e6ba1894  bl #0x4394e3c
0x03D662A8: e10340ad  ldp q1, q0, [sp]
0x03D662AC: f65747a9  ldp x22, x21, [sp, #0x70]
0x03D662B0: fe5f46a9  ldp x30, x23, [sp, #0x60]
0x03D662B4: 610200ad  stp q1, q0, [x19]
0x03D662B8: f44f48a9  ldp x20, x19, [sp, #0x80]
0x03D662BC: ff430291  add sp, sp, #0x90
0x03D662C0: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D662C4 | ContextualizedECS.Query.QueryExtensions$$Query<ValueTuple<object, IdComponent, BoardTilePositionComponent, ImmediateToolComponent, PendingInteractionComponent>>
; native signature: ContextualizedECS_Query_QueryExtensions_QueryBuilder_T__o ContextualizedECS_Query_QueryExtensions__Query_ValueTuple_object__IdComponent__BoardTilePositionComponent__ImmediateToolComponent__PendingInteractionComponent__ (ContextualizedECS_Context_TickContext_o context, ContextualizedECS_Query_Entities_MatchDelegate_T__o* match, ContextualizedECS_Query_Entities_ExcludeDelegate_o* exclude, const MethodInfo_3D662C4* method);
; bytes=160 sha256=d8a2a638052127ecf88f09929b6343c89ec82ec9c58f6397100a2052d7f45843 status=arm64_complete_bound indexed_start=True
0x03D662C4: ff4302d1  sub sp, sp, #0x90
0x03D662C8: fe5f06a9  stp x30, x23, [sp, #0x60]
0x03D662CC: f65707a9  stp x22, x21, [sp, #0x70]
0x03D662D0: f44f08a9  stp x20, x19, [sp, #0x80]
0x03D662D4: 691c40f9  ldr x9, [x3, #0x38]
0x03D662D8: f40303aa  mov x20, x3
0x03D662DC: f60302aa  mov x22, x2
0x03D662E0: f70301aa  mov x23, x1
0x03D662E4: f50300aa  mov x21, x0
0x03D662E8: f30308aa  mov x19, x8
0x03D662EC: 890000b5  cbnz x9, #0x3d662fc
0x03D662F0: e00314aa  mov x0, x20
0x03D662F4: 61c1cf97  bl #0x3156878
0x03D662F8: 891e40f9  ldr x9, [x20, #0x38]
0x03D662FC: 00e4006f  movi v0.2d, #0000000000000000
0x03D66300: e00302ad  stp q0, q0, [sp, #0x40]
0x03D66304: e00301ad  stp q0, q0, [sp, #0x20]
0x03D66308: 230940f9  ldr x3, [x9, #0x10]
0x03D6630C: e0830091  add x0, sp, #0x20
0x03D66310: e10317aa  mov x1, x23
0x03D66314: e20316aa  mov x2, x22
0x03D66318: 48bc1894  bl #0x4395438
0x03D6631C: e00741ad  ldp q0, q1, [sp, #0x20]
0x03D66320: e00315aa  mov x0, x21
0x03D66324: e1031faa  mov x1, xzr
0x03D66328: e00702ad  stp q0, q1, [sp, #0x40]
0x03D6632C: d5c08694  bl #0x5f16680
0x03D66330: 881e40f9  ldr x8, [x20, #0x38]
0x03D66334: e10300aa  mov x1, x0
0x03D66338: e0030191  add x0, sp, #0x40
0x03D6633C: 020d40f9  ldr x2, [x8, #0x18]
0x03D66340: e8030091  mov x8, sp
0x03D66344: 5ebc1894  bl #0x43954bc
0x03D66348: e10340ad  ldp q1, q0, [sp]
0x03D6634C: f65747a9  ldp x22, x21, [sp, #0x70]
0x03D66350: fe5f46a9  ldp x30, x23, [sp, #0x60]
0x03D66354: 610200ad  stp q1, q0, [x19]
0x03D66358: f44f48a9  ldp x20, x19, [sp, #0x80]
0x03D6635C: ff430291  add sp, sp, #0x90
0x03D66360: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D66364 | ContextualizedECS.Query.QueryExtensions$$Query<ValueTuple<object, IdComponent, InteractionComponent, BoardTilePositionComponent, ProducerComponent>>
; native signature: ContextualizedECS_Query_QueryExtensions_QueryBuilder_T__o ContextualizedECS_Query_QueryExtensions__Query_ValueTuple_object__IdComponent__InteractionComponent__BoardTilePositionComponent__ProducerComponent__ (ContextualizedECS_Context_TickContext_o context, ContextualizedECS_Query_Entities_MatchDelegate_T__o* match, ContextualizedECS_Query_Entities_ExcludeDelegate_o* exclude, const MethodInfo_3D66364* method);
; bytes=160 sha256=9bb018bd2ac57d181a59296eedbb4b70e15d14c9737c8707c73127a9d6855755 status=arm64_complete_bound indexed_start=True
0x03D66364: ff4302d1  sub sp, sp, #0x90
0x03D66368: fe5f06a9  stp x30, x23, [sp, #0x60]
0x03D6636C: f65707a9  stp x22, x21, [sp, #0x70]
0x03D66370: f44f08a9  stp x20, x19, [sp, #0x80]
0x03D66374: 691c40f9  ldr x9, [x3, #0x38]
0x03D66378: f40303aa  mov x20, x3
0x03D6637C: f60302aa  mov x22, x2
0x03D66380: f70301aa  mov x23, x1
0x03D66384: f50300aa  mov x21, x0
0x03D66388: f30308aa  mov x19, x8
0x03D6638C: 890000b5  cbnz x9, #0x3d6639c
0x03D66390: e00314aa  mov x0, x20
0x03D66394: 39c1cf97  bl #0x3156878
0x03D66398: 891e40f9  ldr x9, [x20, #0x38]
0x03D6639C: 00e4006f  movi v0.2d, #0000000000000000
0x03D663A0: e00302ad  stp q0, q0, [sp, #0x40]
0x03D663A4: e00301ad  stp q0, q0, [sp, #0x20]
0x03D663A8: 230940f9  ldr x3, [x9, #0x10]
0x03D663AC: e0830091  add x0, sp, #0x20
0x03D663B0: e10317aa  mov x1, x23
0x03D663B4: e20316aa  mov x2, x22
0x03D663B8: c0bd1894  bl #0x4395ab8
0x03D663BC: e00741ad  ldp q0, q1, [sp, #0x20]
0x03D663C0: e00315aa  mov x0, x21
0x03D663C4: e1031faa  mov x1, xzr
0x03D663C8: e00702ad  stp q0, q1, [sp, #0x40]
0x03D663CC: adc08694  bl #0x5f16680
0x03D663D0: 881e40f9  ldr x8, [x20, #0x38]
0x03D663D4: e10300aa  mov x1, x0
0x03D663D8: e0030191  add x0, sp, #0x40
0x03D663DC: 020d40f9  ldr x2, [x8, #0x18]
0x03D663E0: e8030091  mov x8, sp
0x03D663E4: d6bd1894  bl #0x4395b3c
0x03D663E8: e10340ad  ldp q1, q0, [sp]
0x03D663EC: f65747a9  ldp x22, x21, [sp, #0x70]
0x03D663F0: fe5f46a9  ldp x30, x23, [sp, #0x60]
0x03D663F4: 610200ad  stp q1, q0, [x19]
0x03D663F8: f44f48a9  ldp x20, x19, [sp, #0x80]
0x03D663FC: ff430291  add sp, sp, #0x90
0x03D66400: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D66404 | ContextualizedECS.Query.QueryExtensions$$Query<ValueTuple<object, BoardTilePositionComponent, CollectableComponent, IdComponent, PendingInteractionComponent, InteractionComponent>>
; native signature: ContextualizedECS_Query_QueryExtensions_QueryBuilder_T__o ContextualizedECS_Query_QueryExtensions__Query_ValueTuple_object__BoardTilePositionComponent__CollectableComponent__IdComponent__PendingInteractionComponent__InteractionComponent__ (ContextualizedECS_Context_TickContext_o context, ContextualizedECS_Query_Entities_MatchDelegate_T__o* match, ContextualizedECS_Query_Entities_ExcludeDelegate_o* exclude, const MethodInfo_3D66404* method);
; bytes=160 sha256=781f6ec803d7b1c07add6a7bed8128e488e03169734d383703b673c4e97352ba status=arm64_complete_bound indexed_start=True
0x03D66404: ff4302d1  sub sp, sp, #0x90
0x03D66408: fe5f06a9  stp x30, x23, [sp, #0x60]
0x03D6640C: f65707a9  stp x22, x21, [sp, #0x70]
0x03D66410: f44f08a9  stp x20, x19, [sp, #0x80]
0x03D66414: 691c40f9  ldr x9, [x3, #0x38]
0x03D66418: f40303aa  mov x20, x3
0x03D6641C: f60302aa  mov x22, x2
0x03D66420: f70301aa  mov x23, x1
0x03D66424: f50300aa  mov x21, x0
0x03D66428: f30308aa  mov x19, x8
0x03D6642C: 890000b5  cbnz x9, #0x3d6643c
0x03D66430: e00314aa  mov x0, x20
0x03D66434: 11c1cf97  bl #0x3156878
0x03D66438: 891e40f9  ldr x9, [x20, #0x38]
0x03D6643C: 00e4006f  movi v0.2d, #0000000000000000
0x03D66440: e00302ad  stp q0, q0, [sp, #0x40]
0x03D66444: e00301ad  stp q0, q0, [sp, #0x20]
0x03D66448: 230940f9  ldr x3, [x9, #0x10]
0x03D6644C: e0830091  add x0, sp, #0x20
0x03D66450: e10317aa  mov x1, x23
0x03D66454: e20316aa  mov x2, x22
0x03D66458: 38bf1894  bl #0x4396138
0x03D6645C: e00741ad  ldp q0, q1, [sp, #0x20]
0x03D66460: e00315aa  mov x0, x21
0x03D66464: e1031faa  mov x1, xzr
0x03D66468: e00702ad  stp q0, q1, [sp, #0x40]
0x03D6646C: 85c08694  bl #0x5f16680
0x03D66470: 881e40f9  ldr x8, [x20, #0x38]
0x03D66474: e10300aa  mov x1, x0
0x03D66478: e0030191  add x0, sp, #0x40
0x03D6647C: 020d40f9  ldr x2, [x8, #0x18]
0x03D66480: e8030091  mov x8, sp
0x03D66484: 4ebf1894  bl #0x43961bc
0x03D66488: e10340ad  ldp q1, q0, [sp]
0x03D6648C: f65747a9  ldp x22, x21, [sp, #0x70]
0x03D66490: fe5f46a9  ldp x30, x23, [sp, #0x60]
0x03D66494: 610200ad  stp q1, q0, [x19]
0x03D66498: f44f48a9  ldp x20, x19, [sp, #0x80]
0x03D6649C: ff430291  add sp, sp, #0x90
0x03D664A0: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D664A4 | ContextualizedECS.Query.QueryExtensions$$Query<ValueTuple<object, BoardTilePositionComponent, ProducerComponent, TimeCycleComponent, PendingInteractionComponent, InteractionComponent>>
; native signature: ContextualizedECS_Query_QueryExtensions_QueryBuilder_T__o ContextualizedECS_Query_QueryExtensions__Query_ValueTuple_object__BoardTilePositionComponent__ProducerComponent__TimeCycleComponent__PendingInteractionComponent__InteractionComponent__ (ContextualizedECS_Context_TickContext_o context, ContextualizedECS_Query_Entities_MatchDelegate_T__o* match, ContextualizedECS_Query_Entities_ExcludeDelegate_o* exclude, const MethodInfo_3D664A4* method);
; bytes=160 sha256=8757b275aead7fe4937097baae3df2e5e21fe3342b3c2dbb661596720b806ade status=arm64_complete_bound indexed_start=True
0x03D664A4: ff4302d1  sub sp, sp, #0x90
0x03D664A8: fe5f06a9  stp x30, x23, [sp, #0x60]
0x03D664AC: f65707a9  stp x22, x21, [sp, #0x70]
0x03D664B0: f44f08a9  stp x20, x19, [sp, #0x80]
0x03D664B4: 691c40f9  ldr x9, [x3, #0x38]
0x03D664B8: f40303aa  mov x20, x3
0x03D664BC: f60302aa  mov x22, x2
0x03D664C0: f70301aa  mov x23, x1
0x03D664C4: f50300aa  mov x21, x0
0x03D664C8: f30308aa  mov x19, x8
0x03D664CC: 890000b5  cbnz x9, #0x3d664dc
0x03D664D0: e00314aa  mov x0, x20
0x03D664D4: e9c0cf97  bl #0x3156878
0x03D664D8: 891e40f9  ldr x9, [x20, #0x38]
0x03D664DC: 00e4006f  movi v0.2d, #0000000000000000
0x03D664E0: e00302ad  stp q0, q0, [sp, #0x40]
0x03D664E4: e00301ad  stp q0, q0, [sp, #0x20]
0x03D664E8: 230940f9  ldr x3, [x9, #0x10]
0x03D664EC: e0830091  add x0, sp, #0x20
0x03D664F0: e10317aa  mov x1, x23
0x03D664F4: e20316aa  mov x2, x22
0x03D664F8: afc01894  bl #0x43967b4
0x03D664FC: e00741ad  ldp q0, q1, [sp, #0x20]
0x03D66500: e00315aa  mov x0, x21
0x03D66504: e1031faa  mov x1, xzr
0x03D66508: e00702ad  stp q0, q1, [sp, #0x40]
0x03D6650C: 5dc08694  bl #0x5f16680
0x03D66510: 881e40f9  ldr x8, [x20, #0x38]
0x03D66514: e10300aa  mov x1, x0
0x03D66518: e0030191  add x0, sp, #0x40
0x03D6651C: 020d40f9  ldr x2, [x8, #0x18]
0x03D66520: e8030091  mov x8, sp
0x03D66524: c5c01894  bl #0x4396838
0x03D66528: e10340ad  ldp q1, q0, [sp]
0x03D6652C: f65747a9  ldp x22, x21, [sp, #0x70]
0x03D66530: fe5f46a9  ldp x30, x23, [sp, #0x60]
0x03D66534: 610200ad  stp q1, q0, [x19]
0x03D66538: f44f48a9  ldp x20, x19, [sp, #0x80]
0x03D6653C: ff430291  add sp, sp, #0x90
0x03D66540: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D66544 | ContextualizedECS.Query.QueryExtensions$$Query<ValueTuple<object, ChargeableComponent, ExpendableComponent, BoardTilePositionComponent, IdComponent, PendingInteractionComponent>>
; native signature: ContextualizedECS_Query_QueryExtensions_QueryBuilder_T__o ContextualizedECS_Query_QueryExtensions__Query_ValueTuple_object__ChargeableComponent__ExpendableComponent__BoardTilePositionComponent__IdComponent__PendingInteractionComponent__ (ContextualizedECS_Context_TickContext_o context, ContextualizedECS_Query_Entities_MatchDelegate_T__o* match, ContextualizedECS_Query_Entities_ExcludeDelegate_o* exclude, const MethodInfo_3D66544* method);
; bytes=160 sha256=23518a49806ab38e2a114ff628ae255b5dece26a1f878a724966f4cbf74ebfe0 status=arm64_complete_bound indexed_start=True
0x03D66544: ff4302d1  sub sp, sp, #0x90
0x03D66548: fe5f06a9  stp x30, x23, [sp, #0x60]
0x03D6654C: f65707a9  stp x22, x21, [sp, #0x70]
0x03D66550: f44f08a9  stp x20, x19, [sp, #0x80]
0x03D66554: 691c40f9  ldr x9, [x3, #0x38]
0x03D66558: f40303aa  mov x20, x3
0x03D6655C: f60302aa  mov x22, x2
0x03D66560: f70301aa  mov x23, x1
0x03D66564: f50300aa  mov x21, x0
0x03D66568: f30308aa  mov x19, x8
0x03D6656C: 890000b5  cbnz x9, #0x3d6657c
0x03D66570: e00314aa  mov x0, x20
0x03D66574: c1c0cf97  bl #0x3156878
0x03D66578: 891e40f9  ldr x9, [x20, #0x38]
0x03D6657C: 00e4006f  movi v0.2d, #0000000000000000
0x03D66580: e00302ad  stp q0, q0, [sp, #0x40]
0x03D66584: e00301ad  stp q0, q0, [sp, #0x20]
0x03D66588: 230940f9  ldr x3, [x9, #0x10]
0x03D6658C: e0830091  add x0, sp, #0x20
0x03D66590: e10317aa  mov x1, x23
0x03D66594: e20316aa  mov x2, x22
0x03D66598: 28c21894  bl #0x4396e38
0x03D6659C: e00741ad  ldp q0, q1, [sp, #0x20]
0x03D665A0: e00315aa  mov x0, x21
0x03D665A4: e1031faa  mov x1, xzr
0x03D665A8: e00702ad  stp q0, q1, [sp, #0x40]
0x03D665AC: 35c08694  bl #0x5f16680
0x03D665B0: 881e40f9  ldr x8, [x20, #0x38]
0x03D665B4: e10300aa  mov x1, x0
0x03D665B8: e0030191  add x0, sp, #0x40
0x03D665BC: 020d40f9  ldr x2, [x8, #0x18]
0x03D665C0: e8030091  mov x8, sp
0x03D665C4: 3ec21894  bl #0x4396ebc
0x03D665C8: e10340ad  ldp q1, q0, [sp]
0x03D665CC: f65747a9  ldp x22, x21, [sp, #0x70]
0x03D665D0: fe5f46a9  ldp x30, x23, [sp, #0x60]
0x03D665D4: 610200ad  stp q1, q0, [x19]
0x03D665D8: f44f48a9  ldp x20, x19, [sp, #0x80]
0x03D665DC: ff430291  add sp, sp, #0x90
0x03D665E0: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D665E4 | ContextualizedECS.Query.QueryExtensions$$Query<ValueTuple<object, ExpendableComponent, BoardTilePositionComponent, IdComponent, InteractionComponent, PendingInteractionComponent>>
; native signature: ContextualizedECS_Query_QueryExtensions_QueryBuilder_T__o ContextualizedECS_Query_QueryExtensions__Query_ValueTuple_object__ExpendableComponent__BoardTilePositionComponent__IdComponent__InteractionComponent__PendingInteractionComponent__ (ContextualizedECS_Context_TickContext_o context, ContextualizedECS_Query_Entities_MatchDelegate_T__o* match, ContextualizedECS_Query_Entities_ExcludeDelegate_o* exclude, const MethodInfo_3D665E4* method);
; bytes=160 sha256=b4f2af1640126d29e01f3ebe020bc5069fa14f9dcbd7d21be121f7e3ed89fc80 status=arm64_complete_bound indexed_start=True
0x03D665E4: ff4302d1  sub sp, sp, #0x90
0x03D665E8: fe5f06a9  stp x30, x23, [sp, #0x60]
0x03D665EC: f65707a9  stp x22, x21, [sp, #0x70]
0x03D665F0: f44f08a9  stp x20, x19, [sp, #0x80]
0x03D665F4: 691c40f9  ldr x9, [x3, #0x38]
0x03D665F8: f40303aa  mov x20, x3
0x03D665FC: f60302aa  mov x22, x2
0x03D66600: f70301aa  mov x23, x1
0x03D66604: f50300aa  mov x21, x0
0x03D66608: f30308aa  mov x19, x8
0x03D6660C: 890000b5  cbnz x9, #0x3d6661c
0x03D66610: e00314aa  mov x0, x20
0x03D66614: 99c0cf97  bl #0x3156878
0x03D66618: 891e40f9  ldr x9, [x20, #0x38]
0x03D6661C: 00e4006f  movi v0.2d, #0000000000000000
0x03D66620: e00302ad  stp q0, q0, [sp, #0x40]
0x03D66624: e00301ad  stp q0, q0, [sp, #0x20]
0x03D66628: 230940f9  ldr x3, [x9, #0x10]
0x03D6662C: e0830091  add x0, sp, #0x20
0x03D66630: e10317aa  mov x1, x23
0x03D66634: e20316aa  mov x2, x22
0x03D66638: a0c31894  bl #0x43974b8
0x03D6663C: e00741ad  ldp q0, q1, [sp, #0x20]
0x03D66640: e00315aa  mov x0, x21
0x03D66644: e1031faa  mov x1, xzr
0x03D66648: e00702ad  stp q0, q1, [sp, #0x40]
0x03D6664C: 0dc08694  bl #0x5f16680
0x03D66650: 881e40f9  ldr x8, [x20, #0x38]
0x03D66654: e10300aa  mov x1, x0
0x03D66658: e0030191  add x0, sp, #0x40
0x03D6665C: 020d40f9  ldr x2, [x8, #0x18]
0x03D66660: e8030091  mov x8, sp
0x03D66664: b6c31894  bl #0x439753c
0x03D66668: e10340ad  ldp q1, q0, [sp]
0x03D6666C: f65747a9  ldp x22, x21, [sp, #0x70]
0x03D66670: fe5f46a9  ldp x30, x23, [sp, #0x60]
0x03D66674: 610200ad  stp q1, q0, [x19]
0x03D66678: f44f48a9  ldp x20, x19, [sp, #0x80]
0x03D6667C: ff430291  add sp, sp, #0x90
0x03D66680: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D66684 | ContextualizedECS.Query.QueryExtensions$$Query<ValueTuple<object, SpawnerComponent, TimeCycleComponent, BoardTilePositionComponent, IdComponent, InteractionComponent>>
; native signature: ContextualizedECS_Query_QueryExtensions_QueryBuilder_T__o ContextualizedECS_Query_QueryExtensions__Query_ValueTuple_object__SpawnerComponent__TimeCycleComponent__BoardTilePositionComponent__IdComponent__InteractionComponent__ (ContextualizedECS_Context_TickContext_o context, ContextualizedECS_Query_Entities_MatchDelegate_T__o* match, ContextualizedECS_Query_Entities_ExcludeDelegate_o* exclude, const MethodInfo_3D66684* method);
; bytes=160 sha256=f30c2a66907fab91b462391e98f16ed193315478bcd600af523e7d03ccfb2da5 status=arm64_complete_bound indexed_start=True
0x03D66684: ff4302d1  sub sp, sp, #0x90
0x03D66688: fe5f06a9  stp x30, x23, [sp, #0x60]
0x03D6668C: f65707a9  stp x22, x21, [sp, #0x70]
0x03D66690: f44f08a9  stp x20, x19, [sp, #0x80]
0x03D66694: 691c40f9  ldr x9, [x3, #0x38]
0x03D66698: f40303aa  mov x20, x3
0x03D6669C: f60302aa  mov x22, x2
0x03D666A0: f70301aa  mov x23, x1
0x03D666A4: f50300aa  mov x21, x0
0x03D666A8: f30308aa  mov x19, x8
0x03D666AC: 890000b5  cbnz x9, #0x3d666bc
0x03D666B0: e00314aa  mov x0, x20
0x03D666B4: 71c0cf97  bl #0x3156878
0x03D666B8: 891e40f9  ldr x9, [x20, #0x38]
0x03D666BC: 00e4006f  movi v0.2d, #0000000000000000
0x03D666C0: e00302ad  stp q0, q0, [sp, #0x40]
0x03D666C4: e00301ad  stp q0, q0, [sp, #0x20]
0x03D666C8: 230940f9  ldr x3, [x9, #0x10]
0x03D666CC: e0830091  add x0, sp, #0x20
0x03D666D0: e10317aa  mov x1, x23
0x03D666D4: e20316aa  mov x2, x22
0x03D666D8: 18c51894  bl #0x4397b38
0x03D666DC: e00741ad  ldp q0, q1, [sp, #0x20]
0x03D666E0: e00315aa  mov x0, x21
0x03D666E4: e1031faa  mov x1, xzr
0x03D666E8: e00702ad  stp q0, q1, [sp, #0x40]
0x03D666EC: e5bf8694  bl #0x5f16680
0x03D666F0: 881e40f9  ldr x8, [x20, #0x38]
0x03D666F4: e10300aa  mov x1, x0
0x03D666F8: e0030191  add x0, sp, #0x40
0x03D666FC: 020d40f9  ldr x2, [x8, #0x18]
0x03D66700: e8030091  mov x8, sp
0x03D66704: 2ec51894  bl #0x4397bbc
0x03D66708: e10340ad  ldp q1, q0, [sp]
0x03D6670C: f65747a9  ldp x22, x21, [sp, #0x70]
0x03D66710: fe5f46a9  ldp x30, x23, [sp, #0x60]
0x03D66714: 610200ad  stp q1, q0, [x19]
0x03D66718: f44f48a9  ldp x20, x19, [sp, #0x80]
0x03D6671C: ff430291  add sp, sp, #0x90
0x03D66720: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D66724 | ContextualizedECS.Query.QueryExtensions$$Query<ValueTuple<object, BoardTilePositionComponent, FeedingCombinationComponent, IdComponent, InteractionComponent, ProducerComponent, TimeCycleComponent>>
; native signature: ContextualizedECS_Query_QueryExtensions_QueryBuilder_T__o ContextualizedECS_Query_QueryExtensions__Query_ValueTuple_object__BoardTilePositionComponent__FeedingCombinationComponent__IdComponent__InteractionComponent__ProducerComponent__TimeCycleComponent__ (ContextualizedECS_Context_TickContext_o context, ContextualizedECS_Query_Entities_MatchDelegate_T__o* match, ContextualizedECS_Query_Entities_ExcludeDelegate_o* exclude, const MethodInfo_3D66724* method);
; bytes=160 sha256=104f1238425a2082f7403dfe77f774bee511c5623fdcc650b97083ea81dfd63a status=arm64_complete_bound indexed_start=True
0x03D66724: ff4302d1  sub sp, sp, #0x90
0x03D66728: fe5f06a9  stp x30, x23, [sp, #0x60]
0x03D6672C: f65707a9  stp x22, x21, [sp, #0x70]
0x03D66730: f44f08a9  stp x20, x19, [sp, #0x80]
0x03D66734: 691c40f9  ldr x9, [x3, #0x38]
0x03D66738: f40303aa  mov x20, x3
0x03D6673C: f60302aa  mov x22, x2
0x03D66740: f70301aa  mov x23, x1
0x03D66744: f50300aa  mov x21, x0
0x03D66748: f30308aa  mov x19, x8
0x03D6674C: 890000b5  cbnz x9, #0x3d6675c
0x03D66750: e00314aa  mov x0, x20
0x03D66754: 49c0cf97  bl #0x3156878
0x03D66758: 891e40f9  ldr x9, [x20, #0x38]
0x03D6675C: 00e4006f  movi v0.2d, #0000000000000000
0x03D66760: e00302ad  stp q0, q0, [sp, #0x40]
0x03D66764: e00301ad  stp q0, q0, [sp, #0x20]
0x03D66768: 230940f9  ldr x3, [x9, #0x10]
0x03D6676C: e0830091  add x0, sp, #0x20
0x03D66770: e10317aa  mov x1, x23
0x03D66774: e20316aa  mov x2, x22
0x03D66778: 8fc61894  bl #0x43981b4
0x03D6677C: e00741ad  ldp q0, q1, [sp, #0x20]
0x03D66780: e00315aa  mov x0, x21
0x03D66784: e1031faa  mov x1, xzr
0x03D66788: e00702ad  stp q0, q1, [sp, #0x40]
0x03D6678C: bdbf8694  bl #0x5f16680
0x03D66790: 881e40f9  ldr x8, [x20, #0x38]
0x03D66794: e10300aa  mov x1, x0
0x03D66798: e0030191  add x0, sp, #0x40
0x03D6679C: 020d40f9  ldr x2, [x8, #0x18]
0x03D667A0: e8030091  mov x8, sp
0x03D667A4: a5c61894  bl #0x4398238
0x03D667A8: e10340ad  ldp q1, q0, [sp]
0x03D667AC: f65747a9  ldp x22, x21, [sp, #0x70]
0x03D667B0: fe5f46a9  ldp x30, x23, [sp, #0x60]
0x03D667B4: 610200ad  stp q1, q0, [x19]
0x03D667B8: f44f48a9  ldp x20, x19, [sp, #0x80]
0x03D667BC: ff430291  add sp, sp, #0x90
0x03D667C0: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D667C4 | ContextualizedECS.Query.QueryExtensions$$Query<ValueTuple<object, BoardTilePositionComponent, SpawnerComponent, IdComponent, TimeCycleComponent, InteractionComponent, PendingInteractionComponent>>
; native signature: ContextualizedECS_Query_QueryExtensions_QueryBuilder_T__o ContextualizedECS_Query_QueryExtensions__Query_ValueTuple_object__BoardTilePositionComponent__SpawnerComponent__IdComponent__TimeCycleComponent__InteractionComponent__PendingInteractionComponent__ (ContextualizedECS_Context_TickContext_o context, ContextualizedECS_Query_Entities_MatchDelegate_T__o* match, ContextualizedECS_Query_Entities_ExcludeDelegate_o* exclude, const MethodInfo_3D667C4* method);
; bytes=160 sha256=5e74ef7243675a4b7bea27c11215e5cfea23f392936eabc6f60021517347375a status=arm64_complete_bound indexed_start=True
0x03D667C4: ff4302d1  sub sp, sp, #0x90
0x03D667C8: fe5f06a9  stp x30, x23, [sp, #0x60]
0x03D667CC: f65707a9  stp x22, x21, [sp, #0x70]
0x03D667D0: f44f08a9  stp x20, x19, [sp, #0x80]
0x03D667D4: 691c40f9  ldr x9, [x3, #0x38]
0x03D667D8: f40303aa  mov x20, x3
0x03D667DC: f60302aa  mov x22, x2
0x03D667E0: f70301aa  mov x23, x1
0x03D667E4: f50300aa  mov x21, x0
0x03D667E8: f30308aa  mov x19, x8
0x03D667EC: 890000b5  cbnz x9, #0x3d667fc
0x03D667F0: e00314aa  mov x0, x20
0x03D667F4: 21c0cf97  bl #0x3156878
0x03D667F8: 891e40f9  ldr x9, [x20, #0x38]
0x03D667FC: 00e4006f  movi v0.2d, #0000000000000000
0x03D66800: e00302ad  stp q0, q0, [sp, #0x40]
0x03D66804: e00301ad  stp q0, q0, [sp, #0x20]
0x03D66808: 230940f9  ldr x3, [x9, #0x10]
0x03D6680C: e0830091  add x0, sp, #0x20
0x03D66810: e10317aa  mov x1, x23
0x03D66814: e20316aa  mov x2, x22
0x03D66818: 06c81894  bl #0x4398830
0x03D6681C: e00741ad  ldp q0, q1, [sp, #0x20]
0x03D66820: e00315aa  mov x0, x21
0x03D66824: e1031faa  mov x1, xzr
0x03D66828: e00702ad  stp q0, q1, [sp, #0x40]
0x03D6682C: 95bf8694  bl #0x5f16680
0x03D66830: 881e40f9  ldr x8, [x20, #0x38]
0x03D66834: e10300aa  mov x1, x0
0x03D66838: e0030191  add x0, sp, #0x40
0x03D6683C: 020d40f9  ldr x2, [x8, #0x18]
0x03D66840: e8030091  mov x8, sp
0x03D66844: 1cc81894  bl #0x43988b4
0x03D66848: e10340ad  ldp q1, q0, [sp]
0x03D6684C: f65747a9  ldp x22, x21, [sp, #0x70]
0x03D66850: fe5f46a9  ldp x30, x23, [sp, #0x60]
0x03D66854: 610200ad  stp q1, q0, [x19]
0x03D66858: f44f48a9  ldp x20, x19, [sp, #0x80]
0x03D6685C: ff430291  add sp, sp, #0x90
0x03D66860: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D66864 | ContextualizedECS.Query.QueryExtensions$$Query<ValueTuple<object, ExpendableComponent, IdComponent, InteractionComponent, PendingInteractionComponent, TimeLimitedActivationComponent, TimeDurationComponent>>
; native signature: ContextualizedECS_Query_QueryExtensions_QueryBuilder_T__o ContextualizedECS_Query_QueryExtensions__Query_ValueTuple_object__ExpendableComponent__IdComponent__InteractionComponent__PendingInteractionComponent__TimeLimitedActivationComponent__TimeDurationComponent__ (ContextualizedECS_Context_TickContext_o context, ContextualizedECS_Query_Entities_MatchDelegate_T__o* match, ContextualizedECS_Query_Entities_ExcludeDelegate_o* exclude, const MethodInfo_3D66864* method);
; bytes=160 sha256=759f0c1018acad586ced3aa1e17b4b3cc14a87f10cd625a45fc1eb57bb831223 status=arm64_complete_bound indexed_start=True
0x03D66864: ff4302d1  sub sp, sp, #0x90
0x03D66868: fe5f06a9  stp x30, x23, [sp, #0x60]
0x03D6686C: f65707a9  stp x22, x21, [sp, #0x70]
0x03D66870: f44f08a9  stp x20, x19, [sp, #0x80]
0x03D66874: 691c40f9  ldr x9, [x3, #0x38]
0x03D66878: f40303aa  mov x20, x3
0x03D6687C: f60302aa  mov x22, x2
0x03D66880: f70301aa  mov x23, x1
0x03D66884: f50300aa  mov x21, x0
0x03D66888: f30308aa  mov x19, x8
0x03D6688C: 890000b5  cbnz x9, #0x3d6689c
0x03D66890: e00314aa  mov x0, x20
0x03D66894: f9bfcf97  bl #0x3156878
0x03D66898: 891e40f9  ldr x9, [x20, #0x38]
0x03D6689C: 00e4006f  movi v0.2d, #0000000000000000
0x03D668A0: e00302ad  stp q0, q0, [sp, #0x40]
0x03D668A4: e00301ad  stp q0, q0, [sp, #0x20]
0x03D668A8: 230940f9  ldr x3, [x9, #0x10]
0x03D668AC: e0830091  add x0, sp, #0x20
0x03D668B0: e10317aa  mov x1, x23
0x03D668B4: e20316aa  mov x2, x22
0x03D668B8: 7dc91894  bl #0x4398eac
0x03D668BC: e00741ad  ldp q0, q1, [sp, #0x20]
0x03D668C0: e00315aa  mov x0, x21
0x03D668C4: e1031faa  mov x1, xzr
0x03D668C8: e00702ad  stp q0, q1, [sp, #0x40]
0x03D668CC: 6dbf8694  bl #0x5f16680
0x03D668D0: 881e40f9  ldr x8, [x20, #0x38]
0x03D668D4: e10300aa  mov x1, x0
0x03D668D8: e0030191  add x0, sp, #0x40
0x03D668DC: 020d40f9  ldr x2, [x8, #0x18]
0x03D668E0: e8030091  mov x8, sp
0x03D668E4: 93c91894  bl #0x4398f30
0x03D668E8: e10340ad  ldp q1, q0, [sp]
0x03D668EC: f65747a9  ldp x22, x21, [sp, #0x70]
0x03D668F0: fe5f46a9  ldp x30, x23, [sp, #0x60]
0x03D668F4: 610200ad  stp q1, q0, [x19]
0x03D668F8: f44f48a9  ldp x20, x19, [sp, #0x80]
0x03D668FC: ff430291  add sp, sp, #0x90
0x03D66900: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D66904 | ContextualizedECS.Query.QueryExtensions$$Query<__Il2CppFullySharedGenericType>
; native signature: ContextualizedECS_Query_QueryExtensions_QueryBuilder_T__o ContextualizedECS_Query_QueryExtensions__Query___Il2CppFullySharedGenericType_ (ContextualizedECS_Context_TickContext_o context, ContextualizedECS_Query_Entities_MatchDelegate_T__o* match, ContextualizedECS_Query_Entities_ExcludeDelegate_o* exclude, const MethodInfo_3D66904* method);
; bytes=164 sha256=4f11e581312280d7e9af1317d24cd2c3a8a4d2c7ce0e49131ff10f06e4fa57db status=arm64_complete_bound indexed_start=True
0x03D66904: ff4302d1  sub sp, sp, #0x90
0x03D66908: fe5f06a9  stp x30, x23, [sp, #0x60]
0x03D6690C: f65707a9  stp x22, x21, [sp, #0x70]
0x03D66910: f44f08a9  stp x20, x19, [sp, #0x80]
0x03D66914: 691c40f9  ldr x9, [x3, #0x38]
0x03D66918: f40303aa  mov x20, x3
0x03D6691C: f60302aa  mov x22, x2
0x03D66920: f70301aa  mov x23, x1
0x03D66924: f50300aa  mov x21, x0
0x03D66928: f30308aa  mov x19, x8
0x03D6692C: 890000b5  cbnz x9, #0x3d6693c
0x03D66930: e00314aa  mov x0, x20
0x03D66934: d1bfcf97  bl #0x3156878
0x03D66938: 891e40f9  ldr x9, [x20, #0x38]
0x03D6693C: 00e4006f  movi v0.2d, #0000000000000000
0x03D66940: e00302ad  stp q0, q0, [sp, #0x40]
0x03D66944: e00301ad  stp q0, q0, [sp, #0x20]
0x03D66948: 230940f9  ldr x3, [x9, #0x10]
0x03D6694C: e0830091  add x0, sp, #0x20
0x03D66950: e10317aa  mov x1, x23
0x03D66954: e20316aa  mov x2, x22
0x03D66958: f4ca1894  bl #0x4399528
0x03D6695C: e00741ad  ldp q0, q1, [sp, #0x20]
0x03D66960: e00315aa  mov x0, x21
0x03D66964: e1031faa  mov x1, xzr
0x03D66968: e00702ad  stp q0, q1, [sp, #0x40]
0x03D6696C: 45bf8694  bl #0x5f16680
0x03D66970: 881e40f9  ldr x8, [x20, #0x38]
0x03D66974: e10300aa  mov x1, x0
0x03D66978: e0030191  add x0, sp, #0x40
0x03D6697C: 020d40f9  ldr x2, [x8, #0x18]
0x03D66980: e8030091  mov x8, sp
0x03D66984: 490040f9  ldr x9, [x2]
0x03D66988: 20013fd6  blr x9
0x03D6698C: e10340ad  ldp q1, q0, [sp]
0x03D66990: f65747a9  ldp x22, x21, [sp, #0x70]
0x03D66994: fe5f46a9  ldp x30, x23, [sp, #0x60]
0x03D66998: 610200ad  stp q1, q0, [x19]
0x03D6699C: f44f48a9  ldp x20, x19, [sp, #0x80]
0x03D669A0: ff430291  add sp, sp, #0x90
0x03D669A4: c0035fd6  ret

