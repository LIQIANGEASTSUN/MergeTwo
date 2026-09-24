; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 762 MergeEngine.ECS.Systems.State.StateSystemBase<TStatePayload>
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; Generic instantiation from Il2CppDumper script.json | RVA 0x454505C | MergeEngine.ECS.Systems.State.StateSystemBase<object>$$get_StateContext
; native signature: GameCore_States_Contexts_StateContext_TStatePayload__o* MergeEngine_ECS_Systems_State_StateSystemBase_object___get_StateContext (MergeEngine_ECS_Systems_State_StateSystemBase_TStatePayload__o* __this, const MethodInfo_454505C* method);
; bytes=8 sha256=ac1915dbf8ae56825a9e0c79c21190a655d4b32b9c10f299546aad7c9ecadc66 status=arm64_complete_bound indexed_start=True
0x0454505C: 002040f9  ldr x0, [x0, #0x40]
0x04545060: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x4545064 | MergeEngine.ECS.Systems.State.StateSystemBase<object>$$set_StateContext
; native signature: void MergeEngine_ECS_Systems_State_StateSystemBase_object___set_StateContext (MergeEngine_ECS_Systems_State_StateSystemBase_TStatePayload__o* __this, GameCore_States_Contexts_StateContext_TStatePayload__o* value, const MethodInfo_4545064* method);
; bytes=8 sha256=835182fff9e1a0308db1416844f0535f65b33bf573b688af281d30b135bba85f status=arm64_complete_bound indexed_start=True
0x04545064: 010c04f8  str x1, [x0, #0x40]!
0x04545068: 57eeb017  b #0x31809c4

; Generic instantiation from Il2CppDumper script.json | RVA 0x454506C | MergeEngine.ECS.Systems.State.StateSystemBase<object>$$InitializeSystem
; native signature: void MergeEngine_ECS_Systems_State_StateSystemBase_object___InitializeSystem (MergeEngine_ECS_Systems_State_StateSystemBase_TStatePayload__o* __this, const MethodInfo_454506C* method);
; bytes=132 sha256=8ed055e82c98f570eb1979d7d525ac4ed938e4b383ff4d10a40a3974e25bd082 status=arm64_complete_bound indexed_start=True
0x0454506C: fe0f1df8  str x30, [sp, #-0x30]!
0x04545070: f65701a9  stp x22, x21, [sp, #0x10]
0x04545074: f44f02a9  stp x20, x19, [sp, #0x20]
0x04545078: 082040f9  ldr x8, [x0, #0x40]
0x0454507C: 880300b4  cbz x8, #0x45450ec
0x04545080: 291040f9  ldr x9, [x1, #0x20]
0x04545084: f50300aa  mov x21, x0
0x04545088: 141140f9  ldr x20, [x8, #0x20]
0x0454508C: f30301aa  mov x19, x1
0x04545090: 296140f9  ldr x9, [x9, #0xc0]
0x04545094: 201940f9  ldr x0, [x9, #0x30]
0x04545098: 09d44439  ldrb w9, [x0, #0x135]
0x0454509C: 49000037  tbnz w9, #0, #0x45450a4
0x045450A0: df45b097  bl #0x315681c
0x045450A4: ffeeb097  bl #0x3180ca0
0x045450A8: 681240f9  ldr x8, [x19, #0x20]
0x045450AC: e10315aa  mov x1, x21
0x045450B0: f60300aa  mov x22, x0
0x045450B4: 086140f9  ldr x8, [x8, #0xc0]
0x045450B8: 021540f9  ldr x2, [x8, #0x28]
0x045450BC: 031d40f9  ldr x3, [x8, #0x38]
0x045450C0: 45743794  bl #0x53221d4
0x045450C4: 540100b4  cbz x20, #0x45450ec
0x045450C8: 681240f9  ldr x8, [x19, #0x20]
0x045450CC: e00314aa  mov x0, x20
0x045450D0: e10316aa  mov x1, x22
0x045450D4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x045450D8: 086140f9  ldr x8, [x8, #0xc0]
0x045450DC: f65741a9  ldp x22, x21, [sp, #0x10]
0x045450E0: 022140f9  ldr x2, [x8, #0x40]
0x045450E4: fe0743f8  ldr x30, [sp], #0x30
0x045450E8: a3281b14  b #0x4c0f374
0x045450EC: f0eeb097  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x45450F0 | MergeEngine.ECS.Systems.State.StateSystemBase<object>$$DisposeSystem
; native signature: void MergeEngine_ECS_Systems_State_StateSystemBase_object___DisposeSystem (MergeEngine_ECS_Systems_State_StateSystemBase_TStatePayload__o* __this, const MethodInfo_45450F0* method);
; bytes=144 sha256=9f6b990228b5d719aca531e302ca03f269e073fb8b74f57a199fb8c5daf37fd6 status=arm64_complete_bound indexed_start=True
0x045450F0: fe0f1df8  str x30, [sp, #-0x30]!
0x045450F4: f65701a9  stp x22, x21, [sp, #0x10]
0x045450F8: f44f02a9  stp x20, x19, [sp, #0x20]
0x045450FC: 082040f9  ldr x8, [x0, #0x40]
0x04545100: e80300b4  cbz x8, #0x454517c
0x04545104: 291040f9  ldr x9, [x1, #0x20]
0x04545108: f30300aa  mov x19, x0
0x0454510C: 151140f9  ldr x21, [x8, #0x20]
0x04545110: f40301aa  mov x20, x1
0x04545114: 296140f9  ldr x9, [x9, #0xc0]
0x04545118: 201940f9  ldr x0, [x9, #0x30]
0x0454511C: 09d44439  ldrb w9, [x0, #0x135]
0x04545120: 49000037  tbnz w9, #0, #0x4545128
0x04545124: be45b097  bl #0x315681c
0x04545128: deeeb097  bl #0x3180ca0
0x0454512C: 881240f9  ldr x8, [x20, #0x20]
0x04545130: e10313aa  mov x1, x19
0x04545134: f60300aa  mov x22, x0
0x04545138: 086140f9  ldr x8, [x8, #0xc0]
0x0454513C: 021540f9  ldr x2, [x8, #0x28]
0x04545140: 031d40f9  ldr x3, [x8, #0x38]
0x04545144: 24743794  bl #0x53221d4
0x04545148: b50100b4  cbz x21, #0x454517c
0x0454514C: 881240f9  ldr x8, [x20, #0x20]
0x04545150: e00315aa  mov x0, x21
0x04545154: e10316aa  mov x1, x22
0x04545158: 086140f9  ldr x8, [x8, #0xc0]
0x0454515C: 022540f9  ldr x2, [x8, #0x48]
0x04545160: 96281b94  bl #0x4c0f3b8
0x04545164: e00313aa  mov x0, x19
0x04545168: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0454516C: f65741a9  ldp x22, x21, [sp, #0x10]
0x04545170: e1031faa  mov x1, xzr
0x04545174: fe0743f8  ldr x30, [sp], #0x30
0x04545178: 69887914  b #0x63a731c
0x0454517C: cceeb097  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3AF70E8 | MergeEngine.ECS.Systems.State.StateSystemBase<object>$$TryLoadComponent<object, object>
; native signature: bool MergeEngine_ECS_Systems_State_StateSystemBase_object___TryLoadComponent_object__object_ (MergeEngine_ECS_Systems_State_StateSystemBase_TStatePayload__o* __this, Il2CppObject* component, Il2CppObject* payload, const MethodInfo_3AF70E8* method);
; bytes=192 sha256=272850d973209877e2bbe3daff5ba1e8404ed03df1b68f9a385308ae0f265d56 status=arm64_complete_bound indexed_start=True
0x03AF70E8: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x03AF70EC: f44f01a9  stp x20, x19, [sp, #0x10]
0x03AF70F0: 681c40f9  ldr x8, [x3, #0x38]
0x03AF70F4: f50303aa  mov x21, x3
0x03AF70F8: f30302aa  mov x19, x2
0x03AF70FC: f40301aa  mov x20, x1
0x03AF7100: 680000b5  cbnz x8, #0x3af710c
0x03AF7104: e00315aa  mov x0, x21
0x03AF7108: dc7dd997  bl #0x3156878
0x03AF710C: f40300b4  cbz x20, #0x3af7188
0x03AF7110: d30300b4  cbz x19, #0x3af7188
0x03AF7114: a81e40f9  ldr x8, [x21, #0x38]
0x03AF7118: 010940f9  ldr x1, [x8, #0x10]
0x03AF711C: 28d44439  ldrb w8, [x1, #0x135]
0x03AF7120: 88000037  tbnz w8, #0, #0x3af7130
0x03AF7124: e00301aa  mov x0, x1
0x03AF7128: bd7dd997  bl #0x315681c
0x03AF712C: e10300aa  mov x1, x0
0x03AF7130: 880240f9  ldr x8, [x20]
0x03AF7134: 095d4279  ldrh w9, [x8, #0x12e]
0x03AF7138: 290100b4  cbz x9, #0x3af715c
0x03AF713C: 0a5940f9  ldr x10, [x8, #0xb0]
0x03AF7140: 4a210091  add x10, x10, #8
0x03AF7144: 4b815ff8  ldur x11, [x10, #-8]
0x03AF7148: 7f0101eb  cmp x11, x1
0x03AF714C: 00010054  b.eq #0x3af716c
0x03AF7150: 290500f1  subs x9, x9, #1
0x03AF7154: 4a410091  add x10, x10, #0x10
0x03AF7158: 61ffff54  b.ne #0x3af7144
0x03AF715C: e00314aa  mov x0, x20
0x03AF7160: e2031f2a  mov w2, wzr
0x03AF7164: 6b7ed997  bl #0x3156b10
0x03AF7168: 04000014  b #0x3af7178
0x03AF716C: 490180b9  ldrsw x9, [x10]
0x03AF7170: 0811098b  add x8, x8, x9, lsl #4
0x03AF7174: 00e10491  add x0, x8, #0x138
0x03AF7178: 080840a9  ldp x8, x2, [x0]
0x03AF717C: e00314aa  mov x0, x20
0x03AF7180: e10313aa  mov x1, x19
0x03AF7184: 00013fd6  blr x8
0x03AF7188: 7f0200f1  cmp x19, #0
0x03AF718C: e8079f1a  cset w8, ne
0x03AF7190: 9f0200f1  cmp x20, #0
0x03AF7194: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03AF7198: e9079f1a  cset w9, ne
0x03AF719C: 2001080a  and w0, w9, w8
0x03AF71A0: fe57c2a8  ldp x30, x21, [sp], #0x20
0x03AF71A4: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3AF71A8 | MergeEngine.ECS.Systems.State.StateSystemBase<object>$$TryLoadComponent<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>
; native signature: bool MergeEngine_ECS_Systems_State_StateSystemBase_object___TryLoadComponent___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_ (MergeEngine_ECS_Systems_State_StateSystemBase_TStatePayload__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o component, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o payload, const MethodInfo_3AF71A8* method);
; bytes=476 sha256=19fd4cad441cb100d96d0c554725d62cda5a57835321e085af371f6b13b68b17 status=arm64_complete_bound indexed_start=True
0x03AF71A8: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x03AF71AC: fc6f01a9  stp x28, x27, [sp, #0x10]
0x03AF71B0: fa6702a9  stp x26, x25, [sp, #0x20]
0x03AF71B4: f85f03a9  stp x24, x23, [sp, #0x30]
0x03AF71B8: f65704a9  stp x22, x21, [sp, #0x40]
0x03AF71BC: f44f05a9  stp x20, x19, [sp, #0x50]
0x03AF71C0: fd030091  mov x29, sp
0x03AF71C4: ff8300d1  sub sp, sp, #0x20
0x03AF71C8: 5bd03bd5  mrs x27, tpidr_el0
0x03AF71CC: 681740f9  ldr x8, [x27, #0x28]
0x03AF71D0: f40303aa  mov x20, x3
0x03AF71D4: f60302aa  mov x22, x2
0x03AF71D8: f30301aa  mov x19, x1
0x03AF71DC: a8831ff8  stur x8, [x29, #-8]
0x03AF71E0: a2073ea9  stp x2, x1, [x29, #-0x20]
0x03AF71E4: 7c1c40f9  ldr x28, [x3, #0x38]
0x03AF71E8: 9c0000b5  cbnz x28, #0x3af71f8
0x03AF71EC: e00314aa  mov x0, x20
0x03AF71F0: a27dd997  bl #0x3156878
0x03AF71F4: 9c1e40f9  ldr x28, [x20, #0x38]
0x03AF71F8: 802340a9  ldp x0, x8, [x28]
0x03AF71FC: 19fc40b9  ldr w25, [x0, #0xfc]
0x03AF7200: 09d44439  ldrb w9, [x0, #0x135]
0x03AF7204: 18fd40b9  ldr w24, [x8, #0xfc]
0x03AF7208: c9000037  tbnz w9, #0, #0x3af7220
0x03AF720C: 847dd997  bl #0x315681c
0x03AF7210: 9c1e40f9  ldr x28, [x20, #0x38]
0x03AF7214: 08fc40b9  ldr w8, [x0, #0xfc]
0x03AF7218: 800340f9  ldr x0, [x28]
0x03AF721C: 02000014  b #0x3af7224
0x03AF7220: e803192a  mov w8, w25
0x03AF7224: 08410011  add w8, w8, #0x10
0x03AF7228: 083d0091  add x8, x8, #0xf
0x03AF722C: e9030091  mov x9, sp
0x03AF7230: 08717c92  and x8, x8, #0x1fffffff0
0x03AF7234: 350108cb  sub x21, x9, x8
0x03AF7238: bf020091  mov sp, x21
0x03AF723C: 293f0091  add x9, x25, #0xf
0x03AF7240: e8030091  mov x8, sp
0x03AF7244: 29717c92  and x9, x9, #0x1fffffff0
0x03AF7248: 1a0109cb  sub x26, x8, x9
0x03AF724C: 5f030091  mov sp, x26
0x03AF7250: 093f0091  add x9, x24, #0xf
0x03AF7254: e8030091  mov x8, sp
0x03AF7258: 29717c92  and x9, x9, #0x1fffffff0
0x03AF725C: 170109cb  sub x23, x8, x9
0x03AF7260: ff020091  mov sp, x23
0x03AF7264: 082840b9  ldr w8, [x0, #0x28]
0x03AF7268: e0031aaa  mov x0, x26
0x03AF726C: e20319aa  mov x2, x25
0x03AF7270: 1f010071  cmp w8, #0
0x03AF7274: a86300d1  sub x8, x29, #0x18
0x03AF7278: 61b2889a  csel x1, x19, x8, lt
0x03AF727C: bd5ddb94  bl #0x71ce970
0x03AF7280: 800340f9  ldr x0, [x28]
0x03AF7284: e1031aaa  mov x1, x26
0x03AF7288: 7726da97  bl #0x3180c64
0x03AF728C: e0030036  tbz w0, #0, #0x3af7308
0x03AF7290: 991e40f9  ldr x25, [x20, #0x38]
0x03AF7294: ba8300d1  sub x26, x29, #0x20
0x03AF7298: e00317aa  mov x0, x23
0x03AF729C: e20318aa  mov x2, x24
0x03AF72A0: 280740f9  ldr x8, [x25, #8]
0x03AF72A4: 082940b9  ldr w8, [x8, #0x28]
0x03AF72A8: 1f010071  cmp w8, #0
0x03AF72AC: c1b29a9a  csel x1, x22, x26, lt
0x03AF72B0: b05ddb94  bl #0x71ce970
0x03AF72B4: 200740f9  ldr x0, [x25, #8]
0x03AF72B8: e10317aa  mov x1, x23
0x03AF72BC: 6a26da97  bl #0x3180c64
0x03AF72C0: 40020036  tbz w0, #0, #0x3af7308
0x03AF72C4: 991e40f9  ldr x25, [x20, #0x38]
0x03AF72C8: e00317aa  mov x0, x23
0x03AF72CC: e20318aa  mov x2, x24
0x03AF72D0: 280740f9  ldr x8, [x25, #8]
0x03AF72D4: 082940b9  ldr w8, [x8, #0x28]
0x03AF72D8: 1f010071  cmp w8, #0
0x03AF72DC: c1b29a9a  csel x1, x22, x26, lt
0x03AF72E0: a45ddb94  bl #0x71ce970
0x03AF72E4: 280340f9  ldr x8, [x25]
0x03AF72E8: 09d54439  ldrb w9, [x8, #0x135]
0x03AF72EC: 29010037  tbnz w9, #0, #0x3af7310
0x03AF72F0: e00308aa  mov x0, x8
0x03AF72F4: 4a7dd997  bl #0x315681c
0x03AF72F8: 991e40f9  ldr x25, [x20, #0x38]
0x03AF72FC: b3835ef8  ldur x19, [x29, #-0x18]
0x03AF7300: 280340f9  ldr x8, [x25]
0x03AF7304: 04000014  b #0x3af7314
0x03AF7308: e0031f2a  mov w0, wzr
0x03AF730C: 11000014  b #0x3af7350
0x03AF7310: e00308aa  mov x0, x8
0x03AF7314: 290740f9  ldr x9, [x25, #8]
0x03AF7318: 082940b9  ldr w8, [x8, #0x28]
0x03AF731C: 210f40f9  ldr x1, [x25, #0x18]
0x03AF7320: 292940b9  ldr w9, [x9, #0x28]
0x03AF7324: 1f010071  cmp w8, #0
0x03AF7328: a86300d1  sub x8, x29, #0x18
0x03AF732C: 63b2889a  csel x3, x19, x8, lt
0x03AF7330: 4900f837  tbnz w9, #0x1f, #0x3af7338
0x03AF7334: f70240f9  ldr x23, [x23]
0x03AF7338: a44300d1  sub x4, x29, #0x10
0x03AF733C: e20315aa  mov x2, x21
0x03AF7340: e50317aa  mov x5, x23
0x03AF7344: b7031ff8  stur x23, [x29, #-0x10]
0x03AF7348: 9128da97  bl #0x318158c
0x03AF734C: 20008052  movz w0, #0x1
0x03AF7350: 681740f9  ldr x8, [x27, #0x28]
0x03AF7354: a9835ff8  ldur x9, [x29, #-8]
0x03AF7358: 1f0109eb  cmp x8, x9
0x03AF735C: 21010054  b.ne #0x3af7380
0x03AF7360: bf030091  mov sp, x29
0x03AF7364: f44f45a9  ldp x20, x19, [sp, #0x50]
0x03AF7368: f65744a9  ldp x22, x21, [sp, #0x40]
0x03AF736C: f85f43a9  ldp x24, x23, [sp, #0x30]
0x03AF7370: fa6742a9  ldp x26, x25, [sp, #0x20]
0x03AF7374: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x03AF7378: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x03AF737C: c0035fd6  ret
0x03AF7380: 845ddb94  bl #0x71ce990

; Generic instantiation from Il2CppDumper script.json | RVA 0x4545180 | MergeEngine.ECS.Systems.State.StateSystemBase<object>$$LoadStateInternal
; native signature: void MergeEngine_ECS_Systems_State_StateSystemBase_object___LoadStateInternal (MergeEngine_ECS_Systems_State_StateSystemBase_TStatePayload__o* __this, Il2CppObject* state, const MethodInfo_4545180* method);
; bytes=24 sha256=140ad45a7d9c20998c14c5194e03c0c223eb4c89539a0684380a5ccd98dcbd66 status=arm64_complete_bound indexed_start=True
0x04545180: a10000b4  cbz x1, #0x4545194
0x04545184: 080040f9  ldr x8, [x0]
0x04545188: 030541f9  ldr x3, [x8, #0x208]
0x0454518C: 020941f9  ldr x2, [x8, #0x210]
0x04545190: 60001fd6  br x3
0x04545194: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x4545198 | MergeEngine.ECS.Systems.State.StateSystemBase<object>$$.ctor
; native signature: void MergeEngine_ECS_Systems_State_StateSystemBase_object____ctor (MergeEngine_ECS_Systems_State_StateSystemBase_TStatePayload__o* __this, const MethodInfo_4545198* method);
; bytes=8 sha256=91a6c6254ef19d438db0d3a41cb309441fdf6bf1cf33e2fa14c3d01d9afb0068 status=arm64_complete_bound indexed_start=True
0x04545198: e1031faa  mov x1, xzr
0x0454519C: e9887914  b #0x63a7540

