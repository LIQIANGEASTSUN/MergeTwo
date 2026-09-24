; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 33693 .Entities.MatchDelegate<T>
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; Generic instantiation from Il2CppDumper script.json | RVA 0x41DDAD4 | ContextualizedECS.Query.Entities.MatchDelegate<__Il2CppFullySharedGenericType>$$.ctor
; native signature: void ContextualizedECS_Query_Entities_MatchDelegate___Il2CppFullySharedGenericType____ctor (ContextualizedECS_Query_Entities_MatchDelegate_T__o* __this, Il2CppObject* object, intptr_t method, const MethodInfo_41DDAD4* method);
; bytes=180 sha256=cb7381adf0662861eff773c1e89cd809f7da1f0f1bd5dc849c443f42a501b19e status=arm64_complete_bound indexed_start=True
0x041DDAD4: fe0f1df8  str x30, [sp, #-0x30]!
0x041DDAD8: f65701a9  stp x22, x21, [sp, #0x10]
0x041DDADC: f44f02a9  stp x20, x19, [sp, #0x20]
0x041DDAE0: 480440f9  ldr x8, [x2, #8]
0x041DDAE4: f30300aa  mov x19, x0
0x041DDAE8: 021400f9  str x2, [x0, #0x28]
0x041DDAEC: f50302aa  mov x21, x2
0x041DDAF0: 080800f9  str x8, [x0, #0x10]
0x041DDAF4: 010c02f8  str x1, [x0, #0x20]!
0x041DDAF8: f40301aa  mov x20, x1
0x041DDAFC: b28bbe97  bl #0x31809c4
0x041DDB00: b64a4139  ldrb w22, [x21, #0x52]
0x041DDB04: e00315aa  mov x0, x21
0x041DDB08: 732200f9  str x19, [x19, #0x40]
0x041DDB0C: 028cbe97  bl #0x3180b14
0x041DDB10: c0000036  tbz w0, #0, #0x41ddb28
0x041DDB14: df0a0071  cmp w22, #2
0x041DDB18: 61010054  b.ne #0x41ddb44
0x041DDB1C: 6862ffb0  adrp x8, #0x2e2a000
0x041DDB20: 08c13e91  add x8, x8, #0xfb0
0x041DDB24: 05000014  b #0x41ddb38
0x041DDB28: df060071  cmp w22, #1
0x041DDB2C: a1000054  b.ne #0x41ddb40
0x041DDB30: 6862ffb0  adrp x8, #0x2e2a000
0x041DDB34: 08313e91  add x8, x8, #0xf8c
0x041DDB38: 680e00f9  str x8, [x19, #0x18]
0x041DDB3C: 06000014  b #0x41ddb54
0x041DDB40: 940100b4  cbz x20, #0x41ddb70
0x041DDB44: 680a40f9  ldr x8, [x19, #0x10]
0x041DDB48: 691240f9  ldr x9, [x19, #0x20]
0x041DDB4C: 680e00f9  str x8, [x19, #0x18]
0x041DDB50: 692200f9  str x9, [x19, #0x40]
0x041DDB54: 6862ffb0  adrp x8, #0x2e2a000
0x041DDB58: 08a13c91  add x8, x8, #0xf28
0x041DDB5C: 681e00f9  str x8, [x19, #0x38]
0x041DDB60: f44f42a9  ldp x20, x19, [sp, #0x20]
0x041DDB64: f65741a9  ldp x22, x21, [sp, #0x10]
0x041DDB68: fe0743f8  ldr x30, [sp], #0x30
0x041DDB6C: c0035fd6  ret
0x041DDB70: 81a6fe90  adrp x1, #0x16ad000
0x041DDB74: 21bc1691  add x1, x1, #0x5af
0x041DDB78: e0031faa  mov x0, xzr
0x041DDB7C: 538cbe97  bl #0x3180cc8
0x041DDB80: e1031faa  mov x1, xzr
0x041DDB84: fe8bbe97  bl #0x3180b7c

; Generic instantiation from Il2CppDumper script.json | RVA 0x41DDB88 | ContextualizedECS.Query.Entities.MatchDelegate<__Il2CppFullySharedGenericType>$$Invoke
; native signature: bool ContextualizedECS_Query_Entities_MatchDelegate___Il2CppFullySharedGenericType___Invoke (ContextualizedECS_Query_Entities_MatchDelegate_T__o* __this, ContextualizedECS_Entity_o* entity, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o* result, const MethodInfo_41DDB88* method);
; bytes=20 sha256=8f51ff1640c03b4a79334d05f6c0ee7cd5f3db716e58162bf571bc4566f64641 status=arm64_complete_bound indexed_start=True
0x041DDB88: 082040f9  ldr x8, [x0, #0x40]
0x041DDB8C: 040c40f9  ldr x4, [x0, #0x18]
0x041DDB90: 031440f9  ldr x3, [x0, #0x28]
0x041DDB94: e00308aa  mov x0, x8
0x041DDB98: 80001fd6  br x4

; Generic instantiation from Il2CppDumper script.json | RVA 0x41DDB9C | ContextualizedECS.Query.Entities.MatchDelegate<__Il2CppFullySharedGenericType>$$BeginInvoke
; native signature: System_IAsyncResult_o* ContextualizedECS_Query_Entities_MatchDelegate___Il2CppFullySharedGenericType___BeginInvoke (ContextualizedECS_Query_Entities_MatchDelegate_T__o* __this, ContextualizedECS_Entity_o* entity, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o* result, System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo_41DDB9C* method);
; bytes=132 sha256=c5a386e2c4fc008e96d19db0e3f1125c0346188ad7330d850101122e546bfc1a status=arm64_complete_bound indexed_start=True
0x041DDB9C: ff4301d1  sub sp, sp, #0x50
0x041DDBA0: fffb01a9  stp xzr, x30, [sp, #0x18]
0x041DDBA4: f65703a9  stp x22, x21, [sp, #0x30]
0x041DDBA8: f44f04a9  stp x20, x19, [sp, #0x40]
0x041DDBAC: e1ff00a9  stp x1, xzr, [sp, #8]
0x041DDBB0: 081440f9  ldr x8, [x0, #0x28]
0x041DDBB4: f50300aa  mov x21, x0
0x041DDBB8: f30304aa  mov x19, x4
0x041DDBBC: f40303aa  mov x20, x3
0x041DDBC0: 081940f9  ldr x8, [x8, #0x30]
0x041DDBC4: f60302aa  mov x22, x2
0x041DDBC8: 000540f9  ldr x0, [x8, #8]
0x041DDBCC: 448dbe97  bl #0x31810dc
0x041DDBD0: 08d44439  ldrb w8, [x0, #0x135]
0x041DDBD4: 48000037  tbnz w8, #0, #0x41ddbdc
0x041DDBD8: 11e3bd97  bl #0x315681c
0x041DDBDC: 082840b9  ldr w8, [x0, #0x28]
0x041DDBE0: 6800f837  tbnz w8, #0x1f, #0x41ddbec
0x041DDBE4: c00240f9  ldr x0, [x22]
0x041DDBE8: 03000014  b #0x41ddbf4
0x041DDBEC: e10316aa  mov x1, x22
0x041DDBF0: e98bbe97  bl #0x3180b94
0x041DDBF4: e00b00f9  str x0, [sp, #0x10]
0x041DDBF8: e1230091  add x1, sp, #8
0x041DDBFC: e00315aa  mov x0, x21
0x041DDC00: e20314aa  mov x2, x20
0x041DDC04: e30313aa  mov x3, x19
0x041DDC08: 738bbe97  bl #0x31809d4
0x041DDC0C: f44f44a9  ldp x20, x19, [sp, #0x40]
0x041DDC10: f65743a9  ldp x22, x21, [sp, #0x30]
0x041DDC14: fe1340f9  ldr x30, [sp, #0x20]
0x041DDC18: ff430191  add sp, sp, #0x50
0x041DDC1C: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x41DDC20 | ContextualizedECS.Query.Entities.MatchDelegate<__Il2CppFullySharedGenericType>$$EndInvoke
; native signature: bool ContextualizedECS_Query_Entities_MatchDelegate___Il2CppFullySharedGenericType___EndInvoke (ContextualizedECS_Query_Entities_MatchDelegate_T__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o* result, System_IAsyncResult_o* __result, const MethodInfo_41DDC20* method);
; bytes=44 sha256=f18695ba2dc61a4d845bdf4df0a93bb2f67bd79b3e4e2aced1104297359d8668 status=arm64_complete_bound indexed_start=True
0x041DDC20: fe0f1ff8  str x30, [sp, #-0x10]!
0x041DDC24: e00302aa  mov x0, x2
0x041DDC28: e10700f9  str x1, [sp, #8]
0x041DDC2C: e1230091  add x1, sp, #8
0x041DDC30: 6a8bbe97  bl #0x31809d8
0x041DDC34: a00000b4  cbz x0, #0x41ddc48
0x041DDC38: d88bbe97  bl #0x3180b98
0x041DDC3C: 00004039  ldrb w0, [x0]
0x041DDC40: fe0741f8  ldr x30, [sp], #0x10
0x041DDC44: c0035fd6  ret
0x041DDC48: 198cbe97  bl #0x3180cac

