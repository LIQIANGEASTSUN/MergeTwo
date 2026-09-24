; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1026 MergeEngine.ECS.Components.SerializableComponent<TSerializable>
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; Generic instantiation from Il2CppDumper script.json | RVA 0x44E7F48 | MergeEngine.ECS.Components.SerializableComponent<BoardItemPosition, object>$$get_serializable
; native signature: Il2CppObject* MergeEngine_ECS_Components_SerializableComponent_BoardItemPosition__object___get_serializable (MergeEngine_ECS_Components_SerializableComponent_TCapability__TSerializable__o* __this, const MethodInfo_44E7F48* method);
; bytes=8 sha256=c0b9896d6c3d8aacf384c0d0cf5d897e84f621efe31cc89c980be348eb9c6614 status=arm64_complete_bound indexed_start=True
0x044E7F48: 001440f9  ldr x0, [x0, #0x28]
0x044E7F4C: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x44E8300 | MergeEngine.ECS.Components.SerializableComponent<object, object>$$get_serializable
; native signature: Il2CppObject* MergeEngine_ECS_Components_SerializableComponent_object__object___get_serializable (MergeEngine_ECS_Components_SerializableComponent_TCapability__TSerializable__o* __this, const MethodInfo_44E8300* method);
; bytes=8 sha256=c0b9896d6c3d8aacf384c0d0cf5d897e84f621efe31cc89c980be348eb9c6614 status=arm64_complete_bound indexed_start=True
0x044E8300: 001440f9  ldr x0, [x0, #0x28]
0x044E8304: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x44E86B8 | MergeEngine.ECS.Components.SerializableComponent<__Il2CppFullySharedGenericType, object>$$get_serializable
; native signature: Il2CppObject* MergeEngine_ECS_Components_SerializableComponent___Il2CppFullySharedGenericType__object___get_serializable (MergeEngine_ECS_Components_SerializableComponent_TCapability__TSerializable__o* __this, const MethodInfo_44E86B8* method);
; bytes=36 sha256=fb2a199c9234d662941956ebf468745879beb1e9e8e55625d8e46b79d5b87f64 status=arm64_complete_bound indexed_start=True
0x044E86B8: fe0f1ff8  str x30, [sp, #-0x10]!
0x044E86BC: 281040f9  ldr x8, [x1, #0x20]
0x044E86C0: 086140f9  ldr x8, [x8, #0xc0]
0x044E86C4: 080140f9  ldr x8, [x8]
0x044E86C8: 014140f9  ldr x1, [x8, #0x80]
0x044E86CC: db60b297  bl #0x3180a38
0x044E86D0: 000040f9  ldr x0, [x0]
0x044E86D4: fe0741f8  ldr x30, [sp], #0x10
0x044E86D8: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x44E7F50 | MergeEngine.ECS.Components.SerializableComponent<BoardItemPosition, object>$$.ctor
; native signature: void MergeEngine_ECS_Components_SerializableComponent_BoardItemPosition__object____ctor (MergeEngine_ECS_Components_SerializableComponent_TCapability__TSerializable__o* __this, MergeEngine_Data_BoardItemPosition_o capability, MergeEngine_ECS_Entity_o* entity, const MethodInfo_44E7F50* method);
; bytes=104 sha256=d14e20f4e357cd49e22e091618523d38c8021dc5c7229d60c6ad9e72a9d31cb1 status=arm64_complete_bound indexed_start=True
0x044E7F50: fe0f1df8  str x30, [sp, #-0x30]!
0x044E7F54: f65701a9  stp x22, x21, [sp, #0x10]
0x044E7F58: f44f02a9  stp x20, x19, [sp, #0x20]
0x044E7F5C: 681040f9  ldr x8, [x3, #0x20]
0x044E7F60: f60300aa  mov x22, x0
0x044E7F64: f30303aa  mov x19, x3
0x044E7F68: f40302aa  mov x20, x2
0x044E7F6C: 086140f9  ldr x8, [x8, #0xc0]
0x044E7F70: f50301aa  mov x21, x1
0x044E7F74: 080940f9  ldr x8, [x8, #0x10]
0x044E7F78: e00308aa  mov x0, x8
0x044E7F7C: 5535de97  bl #0x3c754d0
0x044E7F80: e10300aa  mov x1, x0
0x044E7F84: e00316aa  mov x0, x22
0x044E7F88: 018c02f8  str x1, [x0, #0x28]!
0x044E7F8C: 8e62b297  bl #0x31809c4
0x044E7F90: 681240f9  ldr x8, [x19, #0x20]
0x044E7F94: e00316aa  mov x0, x22
0x044E7F98: e10315aa  mov x1, x21
0x044E7F9C: e20314aa  mov x2, x20
0x044E7FA0: 086140f9  ldr x8, [x8, #0xc0]
0x044E7FA4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x044E7FA8: f65741a9  ldp x22, x21, [sp, #0x10]
0x044E7FAC: 031140f9  ldr x3, [x8, #0x20]
0x044E7FB0: fe0743f8  ldr x30, [sp], #0x30
0x044E7FB4: d8dc2114  b #0x4d5f314

; Generic instantiation from Il2CppDumper script.json | RVA 0x44E8308 | MergeEngine.ECS.Components.SerializableComponent<object, object>$$.ctor
; native signature: void MergeEngine_ECS_Components_SerializableComponent_object__object____ctor (MergeEngine_ECS_Components_SerializableComponent_TCapability__TSerializable__o* __this, Il2CppObject* capability, MergeEngine_ECS_Entity_o* entity, const MethodInfo_44E8308* method);
; bytes=104 sha256=a3d82baf232d8f735555c83678fc319a22e0633bc01be725b9263eebe7d3b381 status=arm64_complete_bound indexed_start=True
0x044E8308: fe0f1df8  str x30, [sp, #-0x30]!
0x044E830C: f65701a9  stp x22, x21, [sp, #0x10]
0x044E8310: f44f02a9  stp x20, x19, [sp, #0x20]
0x044E8314: 681040f9  ldr x8, [x3, #0x20]
0x044E8318: f60300aa  mov x22, x0
0x044E831C: f30303aa  mov x19, x3
0x044E8320: f40302aa  mov x20, x2
0x044E8324: 086140f9  ldr x8, [x8, #0xc0]
0x044E8328: f50301aa  mov x21, x1
0x044E832C: 080940f9  ldr x8, [x8, #0x10]
0x044E8330: e00308aa  mov x0, x8
0x044E8334: 6734de97  bl #0x3c754d0
0x044E8338: e10300aa  mov x1, x0
0x044E833C: e00316aa  mov x0, x22
0x044E8340: 018c02f8  str x1, [x0, #0x28]!
0x044E8344: a061b297  bl #0x31809c4
0x044E8348: 681240f9  ldr x8, [x19, #0x20]
0x044E834C: e00316aa  mov x0, x22
0x044E8350: e10315aa  mov x1, x21
0x044E8354: e20314aa  mov x2, x20
0x044E8358: 086140f9  ldr x8, [x8, #0xc0]
0x044E835C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x044E8360: f65741a9  ldp x22, x21, [sp, #0x10]
0x044E8364: 031140f9  ldr x3, [x8, #0x20]
0x044E8368: fe0743f8  ldr x30, [sp], #0x30
0x044E836C: fbdb2114  b #0x4d5f358

; Generic instantiation from Il2CppDumper script.json | RVA 0x44E86DC | MergeEngine.ECS.Components.SerializableComponent<__Il2CppFullySharedGenericType, object>$$.ctor
; native signature: void MergeEngine_ECS_Components_SerializableComponent___Il2CppFullySharedGenericType__object____ctor (MergeEngine_ECS_Components_SerializableComponent_TCapability__TSerializable__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o capability, MergeEngine_ECS_Entity_o* entity, const MethodInfo_44E86DC* method);
; bytes=268 sha256=7dc38f7832ad014ae2a0ea5b1520d8a4ab3864dc9f793bb90c672a22a13b894e status=arm64_complete_bound indexed_start=True
0x044E86DC: fd7bbba9  stp x29, x30, [sp, #-0x50]!
0x044E86E0: f90b00f9  str x25, [sp, #0x10]
0x044E86E4: f85f02a9  stp x24, x23, [sp, #0x20]
0x044E86E8: f65703a9  stp x22, x21, [sp, #0x30]
0x044E86EC: f44f04a9  stp x20, x19, [sp, #0x40]
0x044E86F0: fd030091  mov x29, sp
0x044E86F4: ff8300d1  sub sp, sp, #0x20
0x044E86F8: 59d03bd5  mrs x25, tpidr_el0
0x044E86FC: 281740f9  ldr x8, [x25, #0x28]
0x044E8700: f30302aa  mov x19, x2
0x044E8704: f40300aa  mov x20, x0
0x044E8708: f60303aa  mov x22, x3
0x044E870C: a8831ff8  stur x8, [x29, #-8]
0x044E8710: a1031ef8  stur x1, [x29, #-0x20]
0x044E8714: 681040f9  ldr x8, [x3, #0x20]
0x044E8718: f70301aa  mov x23, x1
0x044E871C: 086140f9  ldr x8, [x8, #0xc0]
0x044E8720: 090d40f9  ldr x9, [x8, #0x18]
0x044E8724: 38fd40b9  ldr w24, [x9, #0xfc]
0x044E8728: e9030091  mov x9, sp
0x044E872C: 0a3f0091  add x10, x24, #0xf
0x044E8730: 4a717c92  and x10, x10, #0x1fffffff0
0x044E8734: 35010acb  sub x21, x9, x10
0x044E8738: bf020091  mov sp, x21
0x044E873C: 000940f9  ldr x0, [x8, #0x10]
0x044E8740: 6433de97  bl #0x3c754d0
0x044E8744: c81240f9  ldr x8, [x22, #0x20]
0x044E8748: e20300aa  mov x2, x0
0x044E874C: e00314aa  mov x0, x20
0x044E8750: 086140f9  ldr x8, [x8, #0xc0]
0x044E8754: 080140f9  ldr x8, [x8]
0x044E8758: 014140f9  ldr x1, [x8, #0x80]
0x044E875C: f7bba497  bl #0x2e17738
0x044E8760: d61240f9  ldr x22, [x22, #0x20]
0x044E8764: e00315aa  mov x0, x21
0x044E8768: e20318aa  mov x2, x24
0x044E876C: c86240f9  ldr x8, [x22, #0xc0]
0x044E8770: 080d40f9  ldr x8, [x8, #0x18]
0x044E8774: 082940b9  ldr w8, [x8, #0x28]
0x044E8778: 1f010071  cmp w8, #0
0x044E877C: a88300d1  sub x8, x29, #0x20
0x044E8780: e1b2889a  csel x1, x23, x8, lt
0x044E8784: 7b98b394  bl #0x71ce970
0x044E8788: c86240f9  ldr x8, [x22, #0xc0]
0x044E878C: 098541a9  ldp x9, x1, [x8, #0x18]
0x044E8790: 282940b9  ldr w8, [x9, #0x28]
0x044E8794: 200040f9  ldr x0, [x1]
0x044E8798: 4800f837  tbnz w8, #0x1f, #0x44e87a0
0x044E879C: b50240f9  ldr x21, [x21]
0x044E87A0: b5cf3ea9  stp x21, x19, [x29, #-0x18]
0x044E87A4: 280840f9  ldr x8, [x1, #0x10]
0x044E87A8: a36300d1  sub x3, x29, #0x18
0x044E87AC: e20314aa  mov x2, x20
0x044E87B0: e40313aa  mov x4, x19
0x044E87B4: 00013fd6  blr x8
0x044E87B8: 281740f9  ldr x8, [x25, #0x28]
0x044E87BC: a9835ff8  ldur x9, [x29, #-8]
0x044E87C0: 1f0109eb  cmp x8, x9
0x044E87C4: 01010054  b.ne #0x44e87e4
0x044E87C8: bf030091  mov sp, x29
0x044E87CC: f44f44a9  ldp x20, x19, [sp, #0x40]
0x044E87D0: f65743a9  ldp x22, x21, [sp, #0x30]
0x044E87D4: f85f42a9  ldp x24, x23, [sp, #0x20]
0x044E87D8: f90b40f9  ldr x25, [sp, #0x10]
0x044E87DC: fd7bc5a8  ldp x29, x30, [sp], #0x50
0x044E87E0: c0035fd6  ret
0x044E87E4: 6b98b394  bl #0x71ce990

; Generic instantiation from Il2CppDumper script.json | RVA 0x44E7FB8 | MergeEngine.ECS.Components.SerializableComponent<BoardItemPosition, object>$$Serialize
; native signature: System_String_o* MergeEngine_ECS_Components_SerializableComponent_BoardItemPosition__object___Serialize (MergeEngine_ECS_Components_SerializableComponent_TCapability__TSerializable__o* __this, const MethodInfo_44E7FB8* method);
; bytes=308 sha256=8230cc12e149cd6099570b9174adca59b7d14a6560b2198f867de9bb1b63f565 status=arm64_complete_bound indexed_start=True
0x044E7FB8: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x044E7FBC: f44f01a9  stp x20, x19, [sp, #0x10]
0x044E7FC0: 95c101b0  adrp x21, #0x7d18000
0x044E7FC4: a8ca7f39  ldrb w8, [x21, #0xff2]
0x044E7FC8: f40301aa  mov x20, x1
0x044E7FCC: f30300aa  mov x19, x0
0x044E7FD0: c8000037  tbnz w8, #0, #0x44e7fe8
0x044E7FD4: a08c0190  adrp x0, #0x767b000
0x044E7FD8: 008840f9  ldr x0, [x0, #0x110]
0x044E7FDC: 8f62b297  bl #0x3180a18
0x044E7FE0: 28008052  movz w8, #0x1
0x044E7FE4: a8ca3f39  strb w8, [x21, #0xff2]
0x044E7FE8: f50313aa  mov x21, x19
0x044E7FEC: a88e42f8  ldr x8, [x21, #0x28]!
0x044E7FF0: c80200b5  cbnz x8, #0x44e8048
0x044E7FF4: 881240f9  ldr x8, [x20, #0x20]
0x044E7FF8: 086140f9  ldr x8, [x8, #0xc0]
0x044E7FFC: 000940f9  ldr x0, [x8, #0x10]
0x044E8000: 3435de97  bl #0x3c754d0
0x044E8004: e10300aa  mov x1, x0
0x044E8008: a00200f9  str x0, [x21]
0x044E800C: e00315aa  mov x0, x21
0x044E8010: 6d62b297  bl #0x31809c4
0x044E8014: 888c01f0  adrp x8, #0x767b000
0x044E8018: 088940f9  ldr x8, [x8, #0x110]
0x044E801C: b50240f9  ldr x21, [x21]
0x044E8020: 000140f9  ldr x0, [x8]
0x044E8024: 08e040b9  ldr w8, [x0, #0xe0]
0x044E8028: 48000035  cbnz w8, #0x44e8030
0x044E802C: d862b297  bl #0x3180b8c
0x044E8030: 881240f9  ldr x8, [x20, #0x20]
0x044E8034: e00315aa  mov x0, x21
0x044E8038: e1031f2a  mov w1, wzr
0x044E803C: 086140f9  ldr x8, [x8, #0xc0]
0x044E8040: 021940f9  ldr x2, [x8, #0x30]
0x044E8044: a918e297  bl #0x3d6e2e8
0x044E8048: 680240f9  ldr x8, [x19]
0x044E804C: e00313aa  mov x0, x19
0x044E8050: 09855fa9  ldp x9, x1, [x8, #0x1f8]
0x044E8054: 20013fd6  blr x9
0x044E8058: 750e40f9  ldr x21, [x19, #0x18]
0x044E805C: 750400b4  cbz x21, #0x44e80e8
0x044E8060: 881240f9  ldr x8, [x20, #0x20]
0x044E8064: 731640f9  ldr x19, [x19, #0x28]
0x044E8068: 096140f9  ldr x9, [x8, #0xc0]
0x044E806C: a80240f9  ldr x8, [x21]
0x044E8070: 342540f9  ldr x20, [x9, #0x48]
0x044E8074: 095d4279  ldrh w9, [x8, #0x12e]
0x044E8078: 811240f9  ldr x1, [x20, #0x20]
0x044E807C: 82a24079  ldrh w2, [x20, #0x50]
0x044E8080: 290100b4  cbz x9, #0x44e80a4
0x044E8084: 0a5940f9  ldr x10, [x8, #0xb0]
0x044E8088: 4a210091  add x10, x10, #8
0x044E808C: 4b815ff8  ldur x11, [x10, #-8]
0x044E8090: 7f0101eb  cmp x11, x1
0x044E8094: e0000054  b.eq #0x44e80b0
0x044E8098: 290500f1  subs x9, x9, #1
0x044E809C: 4a410091  add x10, x10, #0x10
0x044E80A0: 61ffff54  b.ne #0x44e808c
0x044E80A4: e00315aa  mov x0, x21
0x044E80A8: 9abab197  bl #0x3156b10
0x044E80AC: 05000014  b #0x44e80c0
0x044E80B0: 490140b9  ldr w9, [x10]
0x044E80B4: 2901020b  add w9, w9, w2
0x044E80B8: 08d1298b  add x8, x8, w9, sxtw #4
0x044E80BC: 00e10491  add x0, x8, #0x138
0x044E80C0: 000440f9  ldr x0, [x0, #8]
0x044E80C4: e10314aa  mov x1, x20
0x044E80C8: b062b297  bl #0x3180b88
0x044E80CC: 030440f9  ldr x3, [x0, #8]
0x044E80D0: e10313aa  mov x1, x19
0x044E80D4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x044E80D8: e20300aa  mov x2, x0
0x044E80DC: e00315aa  mov x0, x21
0x044E80E0: fe57c2a8  ldp x30, x21, [sp], #0x20
0x044E80E4: 60001fd6  br x3
0x044E80E8: f162b297  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x44E8370 | MergeEngine.ECS.Components.SerializableComponent<object, object>$$Serialize
; native signature: System_String_o* MergeEngine_ECS_Components_SerializableComponent_object__object___Serialize (MergeEngine_ECS_Components_SerializableComponent_TCapability__TSerializable__o* __this, const MethodInfo_44E8370* method);
; bytes=308 sha256=8d0eb3dd4d9adc520a37eafbb6dbdc3bd437eb4b394c10705fe5afe318db915b status=arm64_complete_bound indexed_start=True
0x044E8370: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x044E8374: f44f01a9  stp x20, x19, [sp, #0x10]
0x044E8378: 95c10190  adrp x21, #0x7d18000
0x044E837C: a8d67f39  ldrb w8, [x21, #0xff5]
0x044E8380: f40301aa  mov x20, x1
0x044E8384: f30300aa  mov x19, x0
0x044E8388: c8000037  tbnz w8, #0, #0x44e83a0
0x044E838C: 808c01f0  adrp x0, #0x767b000
0x044E8390: 008840f9  ldr x0, [x0, #0x110]
0x044E8394: a161b297  bl #0x3180a18
0x044E8398: 28008052  movz w8, #0x1
0x044E839C: a8d63f39  strb w8, [x21, #0xff5]
0x044E83A0: f50313aa  mov x21, x19
0x044E83A4: a88e42f8  ldr x8, [x21, #0x28]!
0x044E83A8: c80200b5  cbnz x8, #0x44e8400
0x044E83AC: 881240f9  ldr x8, [x20, #0x20]
0x044E83B0: 086140f9  ldr x8, [x8, #0xc0]
0x044E83B4: 000940f9  ldr x0, [x8, #0x10]
0x044E83B8: 4634de97  bl #0x3c754d0
0x044E83BC: e10300aa  mov x1, x0
0x044E83C0: a00200f9  str x0, [x21]
0x044E83C4: e00315aa  mov x0, x21
0x044E83C8: 7f61b297  bl #0x31809c4
0x044E83CC: 888c01f0  adrp x8, #0x767b000
0x044E83D0: 088940f9  ldr x8, [x8, #0x110]
0x044E83D4: b50240f9  ldr x21, [x21]
0x044E83D8: 000140f9  ldr x0, [x8]
0x044E83DC: 08e040b9  ldr w8, [x0, #0xe0]
0x044E83E0: 48000035  cbnz w8, #0x44e83e8
0x044E83E4: ea61b297  bl #0x3180b8c
0x044E83E8: 881240f9  ldr x8, [x20, #0x20]
0x044E83EC: e00315aa  mov x0, x21
0x044E83F0: e1031f2a  mov w1, wzr
0x044E83F4: 086140f9  ldr x8, [x8, #0xc0]
0x044E83F8: 021940f9  ldr x2, [x8, #0x30]
0x044E83FC: bb17e297  bl #0x3d6e2e8
0x044E8400: 680240f9  ldr x8, [x19]
0x044E8404: e00313aa  mov x0, x19
0x044E8408: 09855fa9  ldp x9, x1, [x8, #0x1f8]
0x044E840C: 20013fd6  blr x9
0x044E8410: 750e40f9  ldr x21, [x19, #0x18]
0x044E8414: 750400b4  cbz x21, #0x44e84a0
0x044E8418: 881240f9  ldr x8, [x20, #0x20]
0x044E841C: 731640f9  ldr x19, [x19, #0x28]
0x044E8420: 096140f9  ldr x9, [x8, #0xc0]
0x044E8424: a80240f9  ldr x8, [x21]
0x044E8428: 342540f9  ldr x20, [x9, #0x48]
0x044E842C: 095d4279  ldrh w9, [x8, #0x12e]
0x044E8430: 811240f9  ldr x1, [x20, #0x20]
0x044E8434: 82a24079  ldrh w2, [x20, #0x50]
0x044E8438: 290100b4  cbz x9, #0x44e845c
0x044E843C: 0a5940f9  ldr x10, [x8, #0xb0]
0x044E8440: 4a210091  add x10, x10, #8
0x044E8444: 4b815ff8  ldur x11, [x10, #-8]
0x044E8448: 7f0101eb  cmp x11, x1
0x044E844C: e0000054  b.eq #0x44e8468
0x044E8450: 290500f1  subs x9, x9, #1
0x044E8454: 4a410091  add x10, x10, #0x10
0x044E8458: 61ffff54  b.ne #0x44e8444
0x044E845C: e00315aa  mov x0, x21
0x044E8460: acb9b197  bl #0x3156b10
0x044E8464: 05000014  b #0x44e8478
0x044E8468: 490140b9  ldr w9, [x10]
0x044E846C: 2901020b  add w9, w9, w2
0x044E8470: 08d1298b  add x8, x8, w9, sxtw #4
0x044E8474: 00e10491  add x0, x8, #0x138
0x044E8478: 000440f9  ldr x0, [x0, #8]
0x044E847C: e10314aa  mov x1, x20
0x044E8480: c261b297  bl #0x3180b88
0x044E8484: 030440f9  ldr x3, [x0, #8]
0x044E8488: e10313aa  mov x1, x19
0x044E848C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x044E8490: e20300aa  mov x2, x0
0x044E8494: e00315aa  mov x0, x21
0x044E8498: fe57c2a8  ldp x30, x21, [sp], #0x20
0x044E849C: 60001fd6  br x3
0x044E84A0: 0362b297  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x44E87E8 | MergeEngine.ECS.Components.SerializableComponent<__Il2CppFullySharedGenericType, object>$$Serialize
; native signature: System_String_o* MergeEngine_ECS_Components_SerializableComponent___Il2CppFullySharedGenericType__object___Serialize (MergeEngine_ECS_Components_SerializableComponent_TCapability__TSerializable__o* __this, const MethodInfo_44E87E8* method);
; bytes=392 sha256=e1211b7b233f4d1ac0ba69b0419116b1731eab0b1bc6ba14a114fd7949317518 status=arm64_complete_bound indexed_start=True
0x044E87E8: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x044E87EC: f44f01a9  stp x20, x19, [sp, #0x10]
0x044E87F0: 95c10190  adrp x21, #0x7d18000
0x044E87F4: a8e27f39  ldrb w8, [x21, #0xff8]
0x044E87F8: f30301aa  mov x19, x1
0x044E87FC: f40300aa  mov x20, x0
0x044E8800: c8000037  tbnz w8, #0, #0x44e8818
0x044E8804: 808c01f0  adrp x0, #0x767b000
0x044E8808: 008840f9  ldr x0, [x0, #0x110]
0x044E880C: 8360b297  bl #0x3180a18
0x044E8810: 28008052  movz w8, #0x1
0x044E8814: a8e23f39  strb w8, [x21, #0xff8]
0x044E8818: 681240f9  ldr x8, [x19, #0x20]
0x044E881C: e00314aa  mov x0, x20
0x044E8820: 086140f9  ldr x8, [x8, #0xc0]
0x044E8824: 080140f9  ldr x8, [x8]
0x044E8828: 014140f9  ldr x1, [x8, #0x80]
0x044E882C: 8360b297  bl #0x3180a38
0x044E8830: 080040f9  ldr x8, [x0]
0x044E8834: 080400b5  cbnz x8, #0x44e88b4
0x044E8838: 681240f9  ldr x8, [x19, #0x20]
0x044E883C: 086140f9  ldr x8, [x8, #0xc0]
0x044E8840: 000940f9  ldr x0, [x8, #0x10]
0x044E8844: 2333de97  bl #0x3c754d0
0x044E8848: 681240f9  ldr x8, [x19, #0x20]
0x044E884C: e20300aa  mov x2, x0
0x044E8850: e00314aa  mov x0, x20
0x044E8854: 086140f9  ldr x8, [x8, #0xc0]
0x044E8858: 080140f9  ldr x8, [x8]
0x044E885C: 014140f9  ldr x1, [x8, #0x80]
0x044E8860: b6bba497  bl #0x2e17738
0x044E8864: 681240f9  ldr x8, [x19, #0x20]
0x044E8868: e00314aa  mov x0, x20
0x044E886C: 086140f9  ldr x8, [x8, #0xc0]
0x044E8870: 080140f9  ldr x8, [x8]
0x044E8874: 014140f9  ldr x1, [x8, #0x80]
0x044E8878: 7060b297  bl #0x3180a38
0x044E887C: 898c01f0  adrp x9, #0x767b000
0x044E8880: 298940f9  ldr x9, [x9, #0x110]
0x044E8884: e80300aa  mov x8, x0
0x044E8888: 150140f9  ldr x21, [x8]
0x044E888C: 200140f9  ldr x0, [x9]
0x044E8890: 09e040b9  ldr w9, [x0, #0xe0]
0x044E8894: 49000035  cbnz w9, #0x44e889c
0x044E8898: bd60b297  bl #0x3180b8c
0x044E889C: 681240f9  ldr x8, [x19, #0x20]
0x044E88A0: e00315aa  mov x0, x21
0x044E88A4: e1031f2a  mov w1, wzr
0x044E88A8: 086140f9  ldr x8, [x8, #0xc0]
0x044E88AC: 021940f9  ldr x2, [x8, #0x30]
0x044E88B0: 8e16e297  bl #0x3d6e2e8
0x044E88B4: 880240f9  ldr x8, [x20]
0x044E88B8: e00314aa  mov x0, x20
0x044E88BC: 09855fa9  ldp x9, x1, [x8, #0x1f8]
0x044E88C0: 20013fd6  blr x9
0x044E88C4: 681240f9  ldr x8, [x19, #0x20]
0x044E88C8: 950e40f9  ldr x21, [x20, #0x18]
0x044E88CC: e00314aa  mov x0, x20
0x044E88D0: 086140f9  ldr x8, [x8, #0xc0]
0x044E88D4: 012140f9  ldr x1, [x8, #0x40]
0x044E88D8: 280040f9  ldr x8, [x1]
0x044E88DC: 00013fd6  blr x8
0x044E88E0: 750400b4  cbz x21, #0x44e896c
0x044E88E4: 681240f9  ldr x8, [x19, #0x20]
0x044E88E8: f40300aa  mov x20, x0
0x044E88EC: 096140f9  ldr x9, [x8, #0xc0]
0x044E88F0: a80240f9  ldr x8, [x21]
0x044E88F4: 332540f9  ldr x19, [x9, #0x48]
0x044E88F8: 095d4279  ldrh w9, [x8, #0x12e]
0x044E88FC: 611240f9  ldr x1, [x19, #0x20]
0x044E8900: 62a24079  ldrh w2, [x19, #0x50]
0x044E8904: 290100b4  cbz x9, #0x44e8928
0x044E8908: 0a5940f9  ldr x10, [x8, #0xb0]
0x044E890C: 4a210091  add x10, x10, #8
0x044E8910: 4b815ff8  ldur x11, [x10, #-8]
0x044E8914: 7f0101eb  cmp x11, x1
0x044E8918: e0000054  b.eq #0x44e8934
0x044E891C: 290500f1  subs x9, x9, #1
0x044E8920: 4a410091  add x10, x10, #0x10
0x044E8924: 61ffff54  b.ne #0x44e8910
0x044E8928: e00315aa  mov x0, x21
0x044E892C: 79b8b197  bl #0x3156b10
0x044E8930: 05000014  b #0x44e8944
0x044E8934: 490140b9  ldr w9, [x10]
0x044E8938: 2901020b  add w9, w9, w2
0x044E893C: 08d1298b  add x8, x8, w9, sxtw #4
0x044E8940: 00e10491  add x0, x8, #0x138
0x044E8944: 000440f9  ldr x0, [x0, #8]
0x044E8948: e10313aa  mov x1, x19
0x044E894C: 8f60b297  bl #0x3180b88
0x044E8950: 030440f9  ldr x3, [x0, #8]
0x044E8954: e10314aa  mov x1, x20
0x044E8958: f44f41a9  ldp x20, x19, [sp, #0x10]
0x044E895C: e20300aa  mov x2, x0
0x044E8960: e00315aa  mov x0, x21
0x044E8964: fe57c2a8  ldp x30, x21, [sp], #0x20
0x044E8968: 60001fd6  br x3
0x044E896C: d060b297  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x44E80EC | MergeEngine.ECS.Components.SerializableComponent<BoardItemPosition, object>$$GetSerialize
; native signature: Il2CppObject* MergeEngine_ECS_Components_SerializableComponent_BoardItemPosition__object___GetSerialize (MergeEngine_ECS_Components_SerializableComponent_TCapability__TSerializable__o* __this, const MethodInfo_44E80EC* method);
; bytes=176 sha256=1c497e4e7d676ddabdf2b3d13d9b16b2fc6ed238a88484a2d34e1d01eb6a8cbe status=arm64_complete_bound indexed_start=True
0x044E80EC: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x044E80F0: f44f01a9  stp x20, x19, [sp, #0x10]
0x044E80F4: 95c10190  adrp x21, #0x7d18000
0x044E80F8: a8ce7f39  ldrb w8, [x21, #0xff3]
0x044E80FC: f40301aa  mov x20, x1
0x044E8100: f30300aa  mov x19, x0
0x044E8104: c8000037  tbnz w8, #0, #0x44e811c
0x044E8108: 808c01f0  adrp x0, #0x767b000
0x044E810C: 008840f9  ldr x0, [x0, #0x110]
0x044E8110: 4262b297  bl #0x3180a18
0x044E8114: 28008052  movz w8, #0x1
0x044E8118: a8ce3f39  strb w8, [x21, #0xff3]
0x044E811C: f50313aa  mov x21, x19
0x044E8120: a88e42f8  ldr x8, [x21, #0x28]!
0x044E8124: c80200b5  cbnz x8, #0x44e817c
0x044E8128: 881240f9  ldr x8, [x20, #0x20]
0x044E812C: 086140f9  ldr x8, [x8, #0xc0]
0x044E8130: 000940f9  ldr x0, [x8, #0x10]
0x044E8134: e734de97  bl #0x3c754d0
0x044E8138: e10300aa  mov x1, x0
0x044E813C: a00200f9  str x0, [x21]
0x044E8140: e00315aa  mov x0, x21
0x044E8144: 2062b297  bl #0x31809c4
0x044E8148: 888c01f0  adrp x8, #0x767b000
0x044E814C: 088940f9  ldr x8, [x8, #0x110]
0x044E8150: b50240f9  ldr x21, [x21]
0x044E8154: 000140f9  ldr x0, [x8]
0x044E8158: 08e040b9  ldr w8, [x0, #0xe0]
0x044E815C: 48000035  cbnz w8, #0x44e8164
0x044E8160: 8b62b297  bl #0x3180b8c
0x044E8164: 881240f9  ldr x8, [x20, #0x20]
0x044E8168: e00315aa  mov x0, x21
0x044E816C: e1031f2a  mov w1, wzr
0x044E8170: 086140f9  ldr x8, [x8, #0xc0]
0x044E8174: 021940f9  ldr x2, [x8, #0x30]
0x044E8178: 5c18e297  bl #0x3d6e2e8
0x044E817C: 680240f9  ldr x8, [x19]
0x044E8180: e00313aa  mov x0, x19
0x044E8184: 09855fa9  ldp x9, x1, [x8, #0x1f8]
0x044E8188: 20013fd6  blr x9
0x044E818C: 601640f9  ldr x0, [x19, #0x28]
0x044E8190: f44f41a9  ldp x20, x19, [sp, #0x10]
0x044E8194: fe57c2a8  ldp x30, x21, [sp], #0x20
0x044E8198: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x44E84A4 | MergeEngine.ECS.Components.SerializableComponent<object, object>$$GetSerialize
; native signature: Il2CppObject* MergeEngine_ECS_Components_SerializableComponent_object__object___GetSerialize (MergeEngine_ECS_Components_SerializableComponent_TCapability__TSerializable__o* __this, const MethodInfo_44E84A4* method);
; bytes=176 sha256=91e437ea424fd3d0ab47d39ceb2bdba513449b5516e4bd10cffa0aaa2306b4f5 status=arm64_complete_bound indexed_start=True
0x044E84A4: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x044E84A8: f44f01a9  stp x20, x19, [sp, #0x10]
0x044E84AC: 95c10190  adrp x21, #0x7d18000
0x044E84B0: a8da7f39  ldrb w8, [x21, #0xff6]
0x044E84B4: f40301aa  mov x20, x1
0x044E84B8: f30300aa  mov x19, x0
0x044E84BC: c8000037  tbnz w8, #0, #0x44e84d4
0x044E84C0: 808c01f0  adrp x0, #0x767b000
0x044E84C4: 008840f9  ldr x0, [x0, #0x110]
0x044E84C8: 5461b297  bl #0x3180a18
0x044E84CC: 28008052  movz w8, #0x1
0x044E84D0: a8da3f39  strb w8, [x21, #0xff6]
0x044E84D4: f50313aa  mov x21, x19
0x044E84D8: a88e42f8  ldr x8, [x21, #0x28]!
0x044E84DC: c80200b5  cbnz x8, #0x44e8534
0x044E84E0: 881240f9  ldr x8, [x20, #0x20]
0x044E84E4: 086140f9  ldr x8, [x8, #0xc0]
0x044E84E8: 000940f9  ldr x0, [x8, #0x10]
0x044E84EC: f933de97  bl #0x3c754d0
0x044E84F0: e10300aa  mov x1, x0
0x044E84F4: a00200f9  str x0, [x21]
0x044E84F8: e00315aa  mov x0, x21
0x044E84FC: 3261b297  bl #0x31809c4
0x044E8500: 888c01f0  adrp x8, #0x767b000
0x044E8504: 088940f9  ldr x8, [x8, #0x110]
0x044E8508: b50240f9  ldr x21, [x21]
0x044E850C: 000140f9  ldr x0, [x8]
0x044E8510: 08e040b9  ldr w8, [x0, #0xe0]
0x044E8514: 48000035  cbnz w8, #0x44e851c
0x044E8518: 9d61b297  bl #0x3180b8c
0x044E851C: 881240f9  ldr x8, [x20, #0x20]
0x044E8520: e00315aa  mov x0, x21
0x044E8524: e1031f2a  mov w1, wzr
0x044E8528: 086140f9  ldr x8, [x8, #0xc0]
0x044E852C: 021940f9  ldr x2, [x8, #0x30]
0x044E8530: 6e17e297  bl #0x3d6e2e8
0x044E8534: 680240f9  ldr x8, [x19]
0x044E8538: e00313aa  mov x0, x19
0x044E853C: 09855fa9  ldp x9, x1, [x8, #0x1f8]
0x044E8540: 20013fd6  blr x9
0x044E8544: 601640f9  ldr x0, [x19, #0x28]
0x044E8548: f44f41a9  ldp x20, x19, [sp, #0x10]
0x044E854C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x044E8550: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x44E8970 | MergeEngine.ECS.Components.SerializableComponent<__Il2CppFullySharedGenericType, object>$$GetSerialize
; native signature: Il2CppObject* MergeEngine_ECS_Components_SerializableComponent___Il2CppFullySharedGenericType__object___GetSerialize (MergeEngine_ECS_Components_SerializableComponent_TCapability__TSerializable__o* __this, const MethodInfo_44E8970* method);
; bytes=252 sha256=173bee43bd9100f46c87a2850177b83a0421226b82900b365be83ba679880cc1 status=arm64_complete_bound indexed_start=True
0x044E8970: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x044E8974: f44f01a9  stp x20, x19, [sp, #0x10]
0x044E8978: 95c10190  adrp x21, #0x7d18000
0x044E897C: a8e67f39  ldrb w8, [x21, #0xff9]
0x044E8980: f40301aa  mov x20, x1
0x044E8984: f30300aa  mov x19, x0
0x044E8988: c8000037  tbnz w8, #0, #0x44e89a0
0x044E898C: 808c01f0  adrp x0, #0x767b000
0x044E8990: 008840f9  ldr x0, [x0, #0x110]
0x044E8994: 2160b297  bl #0x3180a18
0x044E8998: 28008052  movz w8, #0x1
0x044E899C: a8e63f39  strb w8, [x21, #0xff9]
0x044E89A0: 881240f9  ldr x8, [x20, #0x20]
0x044E89A4: e00313aa  mov x0, x19
0x044E89A8: 086140f9  ldr x8, [x8, #0xc0]
0x044E89AC: 080140f9  ldr x8, [x8]
0x044E89B0: 014140f9  ldr x1, [x8, #0x80]
0x044E89B4: 2160b297  bl #0x3180a38
0x044E89B8: 080040f9  ldr x8, [x0]
0x044E89BC: 080400b5  cbnz x8, #0x44e8a3c
0x044E89C0: 881240f9  ldr x8, [x20, #0x20]
0x044E89C4: 086140f9  ldr x8, [x8, #0xc0]
0x044E89C8: 000940f9  ldr x0, [x8, #0x10]
0x044E89CC: c132de97  bl #0x3c754d0
0x044E89D0: 881240f9  ldr x8, [x20, #0x20]
0x044E89D4: e20300aa  mov x2, x0
0x044E89D8: e00313aa  mov x0, x19
0x044E89DC: 086140f9  ldr x8, [x8, #0xc0]
0x044E89E0: 080140f9  ldr x8, [x8]
0x044E89E4: 014140f9  ldr x1, [x8, #0x80]
0x044E89E8: 54bba497  bl #0x2e17738
0x044E89EC: 881240f9  ldr x8, [x20, #0x20]
0x044E89F0: e00313aa  mov x0, x19
0x044E89F4: 086140f9  ldr x8, [x8, #0xc0]
0x044E89F8: 080140f9  ldr x8, [x8]
0x044E89FC: 014140f9  ldr x1, [x8, #0x80]
0x044E8A00: 0e60b297  bl #0x3180a38
0x044E8A04: 898c01f0  adrp x9, #0x767b000
0x044E8A08: 298940f9  ldr x9, [x9, #0x110]
0x044E8A0C: e80300aa  mov x8, x0
0x044E8A10: 150140f9  ldr x21, [x8]
0x044E8A14: 200140f9  ldr x0, [x9]
0x044E8A18: 09e040b9  ldr w9, [x0, #0xe0]
0x044E8A1C: 49000035  cbnz w9, #0x44e8a24
0x044E8A20: 5b60b297  bl #0x3180b8c
0x044E8A24: 881240f9  ldr x8, [x20, #0x20]
0x044E8A28: e00315aa  mov x0, x21
0x044E8A2C: e1031f2a  mov w1, wzr
0x044E8A30: 086140f9  ldr x8, [x8, #0xc0]
0x044E8A34: 021940f9  ldr x2, [x8, #0x30]
0x044E8A38: 2c16e297  bl #0x3d6e2e8
0x044E8A3C: 680240f9  ldr x8, [x19]
0x044E8A40: e00313aa  mov x0, x19
0x044E8A44: 09855fa9  ldp x9, x1, [x8, #0x1f8]
0x044E8A48: 20013fd6  blr x9
0x044E8A4C: 881240f9  ldr x8, [x20, #0x20]
0x044E8A50: e00313aa  mov x0, x19
0x044E8A54: f44f41a9  ldp x20, x19, [sp, #0x10]
0x044E8A58: 086140f9  ldr x8, [x8, #0xc0]
0x044E8A5C: 012140f9  ldr x1, [x8, #0x40]
0x044E8A60: 220040f9  ldr x2, [x1]
0x044E8A64: fe57c2a8  ldp x30, x21, [sp], #0x20
0x044E8A68: 40001fd6  br x2

; Generic instantiation from Il2CppDumper script.json | RVA 0x44E819C | MergeEngine.ECS.Components.SerializableComponent<BoardItemPosition, object>$$OnBeforeSerialize
; native signature: void MergeEngine_ECS_Components_SerializableComponent_BoardItemPosition__object___OnBeforeSerialize (MergeEngine_ECS_Components_SerializableComponent_TCapability__TSerializable__o* __this, const MethodInfo_44E819C* method);
; bytes=4 sha256=110f46b5b35c069160560c6ad6786f647dd44e8760a52a46fc22dbbcd7630b91 status=arm64_complete_bound indexed_start=True
0x044E819C: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x44E8554 | MergeEngine.ECS.Components.SerializableComponent<object, object>$$OnBeforeSerialize
; native signature: void MergeEngine_ECS_Components_SerializableComponent_object__object___OnBeforeSerialize (MergeEngine_ECS_Components_SerializableComponent_TCapability__TSerializable__o* __this, const MethodInfo_44E8554* method);
; bytes=4 sha256=110f46b5b35c069160560c6ad6786f647dd44e8760a52a46fc22dbbcd7630b91 status=arm64_complete_bound indexed_start=True
0x044E8554: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x44E8A6C | MergeEngine.ECS.Components.SerializableComponent<__Il2CppFullySharedGenericType, object>$$OnBeforeSerialize
; native signature: void MergeEngine_ECS_Components_SerializableComponent___Il2CppFullySharedGenericType__object___OnBeforeSerialize (MergeEngine_ECS_Components_SerializableComponent_TCapability__TSerializable__o* __this, const MethodInfo_44E8A6C* method);
; bytes=4 sha256=110f46b5b35c069160560c6ad6786f647dd44e8760a52a46fc22dbbcd7630b91 status=arm64_complete_bound indexed_start=True
0x044E8A6C: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x44E81A0 | MergeEngine.ECS.Components.SerializableComponent<BoardItemPosition, object>$$OnAfterDeserialize
; native signature: void MergeEngine_ECS_Components_SerializableComponent_BoardItemPosition__object___OnAfterDeserialize (MergeEngine_ECS_Components_SerializableComponent_TCapability__TSerializable__o* __this, const MethodInfo_44E81A0* method);
; bytes=4 sha256=110f46b5b35c069160560c6ad6786f647dd44e8760a52a46fc22dbbcd7630b91 status=arm64_complete_bound indexed_start=True
0x044E81A0: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x44E8558 | MergeEngine.ECS.Components.SerializableComponent<object, object>$$OnAfterDeserialize
; native signature: void MergeEngine_ECS_Components_SerializableComponent_object__object___OnAfterDeserialize (MergeEngine_ECS_Components_SerializableComponent_TCapability__TSerializable__o* __this, const MethodInfo_44E8558* method);
; bytes=4 sha256=110f46b5b35c069160560c6ad6786f647dd44e8760a52a46fc22dbbcd7630b91 status=arm64_complete_bound indexed_start=True
0x044E8558: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x44E8A70 | MergeEngine.ECS.Components.SerializableComponent<__Il2CppFullySharedGenericType, object>$$OnAfterDeserialize
; native signature: void MergeEngine_ECS_Components_SerializableComponent___Il2CppFullySharedGenericType__object___OnAfterDeserialize (MergeEngine_ECS_Components_SerializableComponent_TCapability__TSerializable__o* __this, const MethodInfo_44E8A70* method);
; bytes=4 sha256=110f46b5b35c069160560c6ad6786f647dd44e8760a52a46fc22dbbcd7630b91 status=arm64_complete_bound indexed_start=True
0x044E8A70: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x44E81A4 | MergeEngine.ECS.Components.SerializableComponent<BoardItemPosition, object>$$Deserialize
; native signature: void MergeEngine_ECS_Components_SerializableComponent_BoardItemPosition__object___Deserialize (MergeEngine_ECS_Components_SerializableComponent_TCapability__TSerializable__o* __this, System_String_o* componentJson, const MethodInfo_44E81A4* method);
; bytes=348 sha256=e686c3630112a1840dc087d9cf89128149d0b9ea0a1435710b299e255437a79e status=arm64_complete_bound indexed_start=True
0x044E81A4: fe0f1cf8  str x30, [sp, #-0x40]!
0x044E81A8: f85f01a9  stp x24, x23, [sp, #0x10]
0x044E81AC: f65702a9  stp x22, x21, [sp, #0x20]
0x044E81B0: f44f03a9  stp x20, x19, [sp, #0x30]
0x044E81B4: 96c10190  adrp x22, #0x7d18000
0x044E81B8: c8d27f39  ldrb w8, [x22, #0xff4]
0x044E81BC: f40302aa  mov x20, x2
0x044E81C0: f50301aa  mov x21, x1
0x044E81C4: f30300aa  mov x19, x0
0x044E81C8: c8000037  tbnz w8, #0, #0x44e81e0
0x044E81CC: 808c01f0  adrp x0, #0x767b000
0x044E81D0: 008840f9  ldr x0, [x0, #0x110]
0x044E81D4: 1162b297  bl #0x3180a18
0x044E81D8: 28008052  movz w8, #0x1
0x044E81DC: c8d23f39  strb w8, [x22, #0xff4]
0x044E81E0: f30800b4  cbz x19, #0x44e82fc
0x044E81E4: 760e40f9  ldr x22, [x19, #0x18]
0x044E81E8: b60800b4  cbz x22, #0x44e82fc
0x044E81EC: 881240f9  ldr x8, [x20, #0x20]
0x044E81F0: 096140f9  ldr x9, [x8, #0xc0]
0x044E81F4: c80240f9  ldr x8, [x22]
0x044E81F8: 372940f9  ldr x23, [x9, #0x50]
0x044E81FC: 095d4279  ldrh w9, [x8, #0x12e]
0x044E8200: e11240f9  ldr x1, [x23, #0x20]
0x044E8204: e2a24079  ldrh w2, [x23, #0x50]
0x044E8208: 290100b4  cbz x9, #0x44e822c
0x044E820C: 0a5940f9  ldr x10, [x8, #0xb0]
0x044E8210: 4a210091  add x10, x10, #8
0x044E8214: 4b815ff8  ldur x11, [x10, #-8]
0x044E8218: 7f0101eb  cmp x11, x1
0x044E821C: e0000054  b.eq #0x44e8238
0x044E8220: 290500f1  subs x9, x9, #1
0x044E8224: 4a410091  add x10, x10, #0x10
0x044E8228: 61ffff54  b.ne #0x44e8214
0x044E822C: e00316aa  mov x0, x22
0x044E8230: 38bab197  bl #0x3156b10
0x044E8234: 05000014  b #0x44e8248
0x044E8238: 490140b9  ldr w9, [x10]
0x044E823C: 2901020b  add w9, w9, w2
0x044E8240: 08d1298b  add x8, x8, w9, sxtw #4
0x044E8244: 00e10491  add x0, x8, #0x138
0x044E8248: 000440f9  ldr x0, [x0, #8]
0x044E824C: 988c01f0  adrp x24, #0x767b000
0x044E8250: 188b40f9  ldr x24, [x24, #0x110]
0x044E8254: e10317aa  mov x1, x23
0x044E8258: 4c62b297  bl #0x3180b88
0x044E825C: 080440f9  ldr x8, [x0, #8]
0x044E8260: e20300aa  mov x2, x0
0x044E8264: e00316aa  mov x0, x22
0x044E8268: e10315aa  mov x1, x21
0x044E826C: 00013fd6  blr x8
0x044E8270: e10300aa  mov x1, x0
0x044E8274: f50313aa  mov x21, x19
0x044E8278: a18e02f8  str x1, [x21, #0x28]!
0x044E827C: e00315aa  mov x0, x21
0x044E8280: d161b297  bl #0x31809c4
0x044E8284: b60240f9  ldr x22, [x21]
0x044E8288: 560100b5  cbnz x22, #0x44e82b0
0x044E828C: 881240f9  ldr x8, [x20, #0x20]
0x044E8290: 086140f9  ldr x8, [x8, #0xc0]
0x044E8294: 000940f9  ldr x0, [x8, #0x10]
0x044E8298: 8e34de97  bl #0x3c754d0
0x044E829C: e10300aa  mov x1, x0
0x044E82A0: a00200f9  str x0, [x21]
0x044E82A4: e00315aa  mov x0, x21
0x044E82A8: c761b297  bl #0x31809c4
0x044E82AC: b60240f9  ldr x22, [x21]
0x044E82B0: 000340f9  ldr x0, [x24]
0x044E82B4: 08e040b9  ldr w8, [x0, #0xe0]
0x044E82B8: 48000035  cbnz w8, #0x44e82c0
0x044E82BC: 3462b297  bl #0x3180b8c
0x044E82C0: 881240f9  ldr x8, [x20, #0x20]
0x044E82C4: e00316aa  mov x0, x22
0x044E82C8: e1031f2a  mov w1, wzr
0x044E82CC: 086140f9  ldr x8, [x8, #0xc0]
0x044E82D0: 021940f9  ldr x2, [x8, #0x30]
0x044E82D4: 0518e297  bl #0x3d6e2e8
0x044E82D8: 680240f9  ldr x8, [x19]
0x044E82DC: e00313aa  mov x0, x19
0x044E82E0: f44f43a9  ldp x20, x19, [sp, #0x30]
0x044E82E4: f65742a9  ldp x22, x21, [sp, #0x20]
0x044E82E8: 020541f9  ldr x2, [x8, #0x208]
0x044E82EC: 010941f9  ldr x1, [x8, #0x210]
0x044E82F0: f85f41a9  ldp x24, x23, [sp, #0x10]
0x044E82F4: fe0744f8  ldr x30, [sp], #0x40
0x044E82F8: 40001fd6  br x2
0x044E82FC: 6c62b297  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x44E855C | MergeEngine.ECS.Components.SerializableComponent<object, object>$$Deserialize
; native signature: void MergeEngine_ECS_Components_SerializableComponent_object__object___Deserialize (MergeEngine_ECS_Components_SerializableComponent_TCapability__TSerializable__o* __this, System_String_o* componentJson, const MethodInfo_44E855C* method);
; bytes=348 sha256=d37c266f5ffb2bf3d10ab0e131ed6f38da1d5229cd4d3d63ebaedfe96b7ac34e status=arm64_complete_bound indexed_start=True
0x044E855C: fe0f1cf8  str x30, [sp, #-0x40]!
0x044E8560: f85f01a9  stp x24, x23, [sp, #0x10]
0x044E8564: f65702a9  stp x22, x21, [sp, #0x20]
0x044E8568: f44f03a9  stp x20, x19, [sp, #0x30]
0x044E856C: 96c10190  adrp x22, #0x7d18000
0x044E8570: c8de7f39  ldrb w8, [x22, #0xff7]
0x044E8574: f40302aa  mov x20, x2
0x044E8578: f50301aa  mov x21, x1
0x044E857C: f30300aa  mov x19, x0
0x044E8580: c8000037  tbnz w8, #0, #0x44e8598
0x044E8584: 808c01f0  adrp x0, #0x767b000
0x044E8588: 008840f9  ldr x0, [x0, #0x110]
0x044E858C: 2361b297  bl #0x3180a18
0x044E8590: 28008052  movz w8, #0x1
0x044E8594: c8de3f39  strb w8, [x22, #0xff7]
0x044E8598: f30800b4  cbz x19, #0x44e86b4
0x044E859C: 760e40f9  ldr x22, [x19, #0x18]
0x044E85A0: b60800b4  cbz x22, #0x44e86b4
0x044E85A4: 881240f9  ldr x8, [x20, #0x20]
0x044E85A8: 096140f9  ldr x9, [x8, #0xc0]
0x044E85AC: c80240f9  ldr x8, [x22]
0x044E85B0: 372940f9  ldr x23, [x9, #0x50]
0x044E85B4: 095d4279  ldrh w9, [x8, #0x12e]
0x044E85B8: e11240f9  ldr x1, [x23, #0x20]
0x044E85BC: e2a24079  ldrh w2, [x23, #0x50]
0x044E85C0: 290100b4  cbz x9, #0x44e85e4
0x044E85C4: 0a5940f9  ldr x10, [x8, #0xb0]
0x044E85C8: 4a210091  add x10, x10, #8
0x044E85CC: 4b815ff8  ldur x11, [x10, #-8]
0x044E85D0: 7f0101eb  cmp x11, x1
0x044E85D4: e0000054  b.eq #0x44e85f0
0x044E85D8: 290500f1  subs x9, x9, #1
0x044E85DC: 4a410091  add x10, x10, #0x10
0x044E85E0: 61ffff54  b.ne #0x44e85cc
0x044E85E4: e00316aa  mov x0, x22
0x044E85E8: 4ab9b197  bl #0x3156b10
0x044E85EC: 05000014  b #0x44e8600
0x044E85F0: 490140b9  ldr w9, [x10]
0x044E85F4: 2901020b  add w9, w9, w2
0x044E85F8: 08d1298b  add x8, x8, w9, sxtw #4
0x044E85FC: 00e10491  add x0, x8, #0x138
0x044E8600: 000440f9  ldr x0, [x0, #8]
0x044E8604: 988c01f0  adrp x24, #0x767b000
0x044E8608: 188b40f9  ldr x24, [x24, #0x110]
0x044E860C: e10317aa  mov x1, x23
0x044E8610: 5e61b297  bl #0x3180b88
0x044E8614: 080440f9  ldr x8, [x0, #8]
0x044E8618: e20300aa  mov x2, x0
0x044E861C: e00316aa  mov x0, x22
0x044E8620: e10315aa  mov x1, x21
0x044E8624: 00013fd6  blr x8
0x044E8628: e10300aa  mov x1, x0
0x044E862C: f50313aa  mov x21, x19
0x044E8630: a18e02f8  str x1, [x21, #0x28]!
0x044E8634: e00315aa  mov x0, x21
0x044E8638: e360b297  bl #0x31809c4
0x044E863C: b60240f9  ldr x22, [x21]
0x044E8640: 560100b5  cbnz x22, #0x44e8668
0x044E8644: 881240f9  ldr x8, [x20, #0x20]
0x044E8648: 086140f9  ldr x8, [x8, #0xc0]
0x044E864C: 000940f9  ldr x0, [x8, #0x10]
0x044E8650: a033de97  bl #0x3c754d0
0x044E8654: e10300aa  mov x1, x0
0x044E8658: a00200f9  str x0, [x21]
0x044E865C: e00315aa  mov x0, x21
0x044E8660: d960b297  bl #0x31809c4
0x044E8664: b60240f9  ldr x22, [x21]
0x044E8668: 000340f9  ldr x0, [x24]
0x044E866C: 08e040b9  ldr w8, [x0, #0xe0]
0x044E8670: 48000035  cbnz w8, #0x44e8678
0x044E8674: 4661b297  bl #0x3180b8c
0x044E8678: 881240f9  ldr x8, [x20, #0x20]
0x044E867C: e00316aa  mov x0, x22
0x044E8680: e1031f2a  mov w1, wzr
0x044E8684: 086140f9  ldr x8, [x8, #0xc0]
0x044E8688: 021940f9  ldr x2, [x8, #0x30]
0x044E868C: 1717e297  bl #0x3d6e2e8
0x044E8690: 680240f9  ldr x8, [x19]
0x044E8694: e00313aa  mov x0, x19
0x044E8698: f44f43a9  ldp x20, x19, [sp, #0x30]
0x044E869C: f65742a9  ldp x22, x21, [sp, #0x20]
0x044E86A0: 020541f9  ldr x2, [x8, #0x208]
0x044E86A4: 010941f9  ldr x1, [x8, #0x210]
0x044E86A8: f85f41a9  ldp x24, x23, [sp, #0x10]
0x044E86AC: fe0744f8  ldr x30, [sp], #0x40
0x044E86B0: 40001fd6  br x2
0x044E86B4: 7e61b297  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x44E8A74 | MergeEngine.ECS.Components.SerializableComponent<__Il2CppFullySharedGenericType, object>$$Deserialize
; native signature: void MergeEngine_ECS_Components_SerializableComponent___Il2CppFullySharedGenericType__object___Deserialize (MergeEngine_ECS_Components_SerializableComponent_TCapability__TSerializable__o* __this, System_String_o* componentJson, const MethodInfo_44E8A74* method);
; bytes=420 sha256=9b4129d142daddf31b02c91c44e43499ffd9b22c109c3f5db7ccec59667eb88e status=arm64_complete_bound indexed_start=True
0x044E8A74: fe0f1cf8  str x30, [sp, #-0x40]!
0x044E8A78: f85f01a9  stp x24, x23, [sp, #0x10]
0x044E8A7C: f65702a9  stp x22, x21, [sp, #0x20]
0x044E8A80: f44f03a9  stp x20, x19, [sp, #0x30]
0x044E8A84: 96c10190  adrp x22, #0x7d18000
0x044E8A88: c8ea7f39  ldrb w8, [x22, #0xffa]
0x044E8A8C: f40302aa  mov x20, x2
0x044E8A90: f50301aa  mov x21, x1
0x044E8A94: f30300aa  mov x19, x0
0x044E8A98: c8000037  tbnz w8, #0, #0x44e8ab0
0x044E8A9C: 808c01f0  adrp x0, #0x767b000
0x044E8AA0: 008840f9  ldr x0, [x0, #0x110]
0x044E8AA4: dd5fb297  bl #0x3180a18
0x044E8AA8: 28008052  movz w8, #0x1
0x044E8AAC: c8ea3f39  strb w8, [x22, #0xffa]
0x044E8AB0: 330b00b4  cbz x19, #0x44e8c14
0x044E8AB4: 760e40f9  ldr x22, [x19, #0x18]
0x044E8AB8: f60a00b4  cbz x22, #0x44e8c14
0x044E8ABC: 881240f9  ldr x8, [x20, #0x20]
0x044E8AC0: 096140f9  ldr x9, [x8, #0xc0]
0x044E8AC4: c80240f9  ldr x8, [x22]
0x044E8AC8: 372940f9  ldr x23, [x9, #0x50]
0x044E8ACC: 095d4279  ldrh w9, [x8, #0x12e]
0x044E8AD0: e11240f9  ldr x1, [x23, #0x20]
0x044E8AD4: e2a24079  ldrh w2, [x23, #0x50]
0x044E8AD8: 290100b4  cbz x9, #0x44e8afc
0x044E8ADC: 0a5940f9  ldr x10, [x8, #0xb0]
0x044E8AE0: 4a210091  add x10, x10, #8
0x044E8AE4: 4b815ff8  ldur x11, [x10, #-8]
0x044E8AE8: 7f0101eb  cmp x11, x1
0x044E8AEC: e0000054  b.eq #0x44e8b08
0x044E8AF0: 290500f1  subs x9, x9, #1
0x044E8AF4: 4a410091  add x10, x10, #0x10
0x044E8AF8: 61ffff54  b.ne #0x44e8ae4
0x044E8AFC: e00316aa  mov x0, x22
0x044E8B00: 04b8b197  bl #0x3156b10
0x044E8B04: 05000014  b #0x44e8b18
0x044E8B08: 490140b9  ldr w9, [x10]
0x044E8B0C: 2901020b  add w9, w9, w2
0x044E8B10: 08d1298b  add x8, x8, w9, sxtw #4
0x044E8B14: 00e10491  add x0, x8, #0x138
0x044E8B18: 000440f9  ldr x0, [x0, #8]
0x044E8B1C: 988c01f0  adrp x24, #0x767b000
0x044E8B20: 188b40f9  ldr x24, [x24, #0x110]
0x044E8B24: e10317aa  mov x1, x23
0x044E8B28: 1860b297  bl #0x3180b88
0x044E8B2C: 080440f9  ldr x8, [x0, #8]
0x044E8B30: e20300aa  mov x2, x0
0x044E8B34: e00316aa  mov x0, x22
0x044E8B38: e10315aa  mov x1, x21
0x044E8B3C: 00013fd6  blr x8
0x044E8B40: 881240f9  ldr x8, [x20, #0x20]
0x044E8B44: e20300aa  mov x2, x0
0x044E8B48: e00313aa  mov x0, x19
0x044E8B4C: 086140f9  ldr x8, [x8, #0xc0]
0x044E8B50: 080140f9  ldr x8, [x8]
0x044E8B54: 014140f9  ldr x1, [x8, #0x80]
0x044E8B58: f8baa497  bl #0x2e17738
0x044E8B5C: 881240f9  ldr x8, [x20, #0x20]
0x044E8B60: e00313aa  mov x0, x19
0x044E8B64: 086140f9  ldr x8, [x8, #0xc0]
0x044E8B68: 080140f9  ldr x8, [x8]
0x044E8B6C: 014140f9  ldr x1, [x8, #0x80]
0x044E8B70: b25fb297  bl #0x3180a38
0x044E8B74: 080040f9  ldr x8, [x0]
0x044E8B78: 880100b5  cbnz x8, #0x44e8ba8
0x044E8B7C: 881240f9  ldr x8, [x20, #0x20]
0x044E8B80: 086140f9  ldr x8, [x8, #0xc0]
0x044E8B84: 000940f9  ldr x0, [x8, #0x10]
0x044E8B88: 5232de97  bl #0x3c754d0
0x044E8B8C: 881240f9  ldr x8, [x20, #0x20]
0x044E8B90: e20300aa  mov x2, x0
0x044E8B94: e00313aa  mov x0, x19
0x044E8B98: 086140f9  ldr x8, [x8, #0xc0]
0x044E8B9C: 080140f9  ldr x8, [x8]
0x044E8BA0: 014140f9  ldr x1, [x8, #0x80]
0x044E8BA4: e5baa497  bl #0x2e17738
0x044E8BA8: 881240f9  ldr x8, [x20, #0x20]
0x044E8BAC: e00313aa  mov x0, x19
0x044E8BB0: 086140f9  ldr x8, [x8, #0xc0]
0x044E8BB4: 080140f9  ldr x8, [x8]
0x044E8BB8: 014140f9  ldr x1, [x8, #0x80]
0x044E8BBC: 9f5fb297  bl #0x3180a38
0x044E8BC0: e80300aa  mov x8, x0
0x044E8BC4: 000340f9  ldr x0, [x24]
0x044E8BC8: 150140f9  ldr x21, [x8]
0x044E8BCC: 09e040b9  ldr w9, [x0, #0xe0]
0x044E8BD0: 49000035  cbnz w9, #0x44e8bd8
0x044E8BD4: ee5fb297  bl #0x3180b8c
0x044E8BD8: 881240f9  ldr x8, [x20, #0x20]
0x044E8BDC: e00315aa  mov x0, x21
0x044E8BE0: e1031f2a  mov w1, wzr
0x044E8BE4: 086140f9  ldr x8, [x8, #0xc0]
0x044E8BE8: 021940f9  ldr x2, [x8, #0x30]
0x044E8BEC: bf15e297  bl #0x3d6e2e8
0x044E8BF0: 680240f9  ldr x8, [x19]
0x044E8BF4: e00313aa  mov x0, x19
0x044E8BF8: f44f43a9  ldp x20, x19, [sp, #0x30]
0x044E8BFC: f65742a9  ldp x22, x21, [sp, #0x20]
0x044E8C00: 020541f9  ldr x2, [x8, #0x208]
0x044E8C04: 010941f9  ldr x1, [x8, #0x210]
0x044E8C08: f85f41a9  ldp x24, x23, [sp, #0x10]
0x044E8C0C: fe0744f8  ldr x30, [sp], #0x40
0x044E8C10: 40001fd6  br x2
0x044E8C14: 2660b297  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x44E7BF0 | MergeEngine.ECS.Components.SerializableComponent<object>$$get_serializable
; native signature: Il2CppObject* MergeEngine_ECS_Components_SerializableComponent_object___get_serializable (MergeEngine_ECS_Components_SerializableComponent_TSerializable__o* __this, const MethodInfo_44E7BF0* method);
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x044E7BF0: 001040f9  ldr x0, [x0, #0x20]
0x044E7BF4: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x44E7BF8 | MergeEngine.ECS.Components.SerializableComponent<object>$$.ctor
; native signature: void MergeEngine_ECS_Components_SerializableComponent_object____ctor (MergeEngine_ECS_Components_SerializableComponent_TSerializable__o* __this, MergeEngine_ECS_Entity_o* entity, const MethodInfo_44E7BF8* method);
; bytes=8 sha256=898bf099f40e33532c9045b348aae0871702a6dd21364e4bc164851ccf221f43 status=arm64_complete_bound indexed_start=True
0x044E7BF8: e2031faa  mov x2, xzr
0x044E7BFC: 473d9014  b #0x68f7118

; Generic instantiation from Il2CppDumper script.json | RVA 0x44E7C00 | MergeEngine.ECS.Components.SerializableComponent<object>$$OnBeforeSerialize
; native signature: void MergeEngine_ECS_Components_SerializableComponent_object___OnBeforeSerialize (MergeEngine_ECS_Components_SerializableComponent_TSerializable__o* __this, const MethodInfo_44E7C00* method);
; bytes=4 sha256=110f46b5b35c069160560c6ad6786f647dd44e8760a52a46fc22dbbcd7630b91 status=arm64_complete_bound indexed_start=True
0x044E7C00: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x44E7C04 | MergeEngine.ECS.Components.SerializableComponent<object>$$OnAfterDeserialize
; native signature: void MergeEngine_ECS_Components_SerializableComponent_object___OnAfterDeserialize (MergeEngine_ECS_Components_SerializableComponent_TSerializable__o* __this, const MethodInfo_44E7C04* method);
; bytes=4 sha256=110f46b5b35c069160560c6ad6786f647dd44e8760a52a46fc22dbbcd7630b91 status=arm64_complete_bound indexed_start=True
0x044E7C04: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x44E7C08 | MergeEngine.ECS.Components.SerializableComponent<object>$$MergeEngine.ECS.Components.ISerializableComponent.Serialize
; native signature: System_String_o* MergeEngine_ECS_Components_SerializableComponent_object___MergeEngine_ECS_Components_ISerializableComponent_Serialize (MergeEngine_ECS_Components_SerializableComponent_TSerializable__o* __this, const MethodInfo_44E7C08* method);
; bytes=308 sha256=13388074635ec5cc2f11688a616c56a57d21b311de670986efa7d74cd191c263 status=arm64_complete_bound indexed_start=True
0x044E7C08: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x044E7C0C: f44f01a9  stp x20, x19, [sp, #0x10]
0x044E7C10: 95c101b0  adrp x21, #0x7d18000
0x044E7C14: a8be7f39  ldrb w8, [x21, #0xfef]
0x044E7C18: f40301aa  mov x20, x1
0x044E7C1C: f30300aa  mov x19, x0
0x044E7C20: c8000037  tbnz w8, #0, #0x44e7c38
0x044E7C24: a08c0190  adrp x0, #0x767b000
0x044E7C28: 008840f9  ldr x0, [x0, #0x110]
0x044E7C2C: 7b63b297  bl #0x3180a18
0x044E7C30: 28008052  movz w8, #0x1
0x044E7C34: a8be3f39  strb w8, [x21, #0xfef]
0x044E7C38: f50313aa  mov x21, x19
0x044E7C3C: a80e42f8  ldr x8, [x21, #0x20]!
0x044E7C40: c80200b5  cbnz x8, #0x44e7c98
0x044E7C44: 881240f9  ldr x8, [x20, #0x20]
0x044E7C48: 086140f9  ldr x8, [x8, #0xc0]
0x044E7C4C: 000940f9  ldr x0, [x8, #0x10]
0x044E7C50: 2036de97  bl #0x3c754d0
0x044E7C54: e10300aa  mov x1, x0
0x044E7C58: a00200f9  str x0, [x21]
0x044E7C5C: e00315aa  mov x0, x21
0x044E7C60: 5963b297  bl #0x31809c4
0x044E7C64: a88c0190  adrp x8, #0x767b000
0x044E7C68: 088940f9  ldr x8, [x8, #0x110]
0x044E7C6C: b50240f9  ldr x21, [x21]
0x044E7C70: 000140f9  ldr x0, [x8]
0x044E7C74: 08e040b9  ldr w8, [x0, #0xe0]
0x044E7C78: 48000035  cbnz w8, #0x44e7c80
0x044E7C7C: c463b297  bl #0x3180b8c
0x044E7C80: 881240f9  ldr x8, [x20, #0x20]
0x044E7C84: e00315aa  mov x0, x21
0x044E7C88: e1031f2a  mov w1, wzr
0x044E7C8C: 086140f9  ldr x8, [x8, #0xc0]
0x044E7C90: 020d40f9  ldr x2, [x8, #0x18]
0x044E7C94: 9519e297  bl #0x3d6e2e8
0x044E7C98: 680240f9  ldr x8, [x19]
0x044E7C9C: e00313aa  mov x0, x19
0x044E7CA0: 09855fa9  ldp x9, x1, [x8, #0x1f8]
0x044E7CA4: 20013fd6  blr x9
0x044E7CA8: 750e40f9  ldr x21, [x19, #0x18]
0x044E7CAC: 750400b4  cbz x21, #0x44e7d38
0x044E7CB0: 881240f9  ldr x8, [x20, #0x20]
0x044E7CB4: 731240f9  ldr x19, [x19, #0x20]
0x044E7CB8: 096140f9  ldr x9, [x8, #0xc0]
0x044E7CBC: a80240f9  ldr x8, [x21]
0x044E7CC0: 341940f9  ldr x20, [x9, #0x30]
0x044E7CC4: 095d4279  ldrh w9, [x8, #0x12e]
0x044E7CC8: 811240f9  ldr x1, [x20, #0x20]
0x044E7CCC: 82a24079  ldrh w2, [x20, #0x50]
0x044E7CD0: 290100b4  cbz x9, #0x44e7cf4
0x044E7CD4: 0a5940f9  ldr x10, [x8, #0xb0]
0x044E7CD8: 4a210091  add x10, x10, #8
0x044E7CDC: 4b815ff8  ldur x11, [x10, #-8]
0x044E7CE0: 7f0101eb  cmp x11, x1
0x044E7CE4: e0000054  b.eq #0x44e7d00
0x044E7CE8: 290500f1  subs x9, x9, #1
0x044E7CEC: 4a410091  add x10, x10, #0x10
0x044E7CF0: 61ffff54  b.ne #0x44e7cdc
0x044E7CF4: e00315aa  mov x0, x21
0x044E7CF8: 86bbb197  bl #0x3156b10
0x044E7CFC: 05000014  b #0x44e7d10
0x044E7D00: 490140b9  ldr w9, [x10]
0x044E7D04: 2901020b  add w9, w9, w2
0x044E7D08: 08d1298b  add x8, x8, w9, sxtw #4
0x044E7D0C: 00e10491  add x0, x8, #0x138
0x044E7D10: 000440f9  ldr x0, [x0, #8]
0x044E7D14: e10314aa  mov x1, x20
0x044E7D18: 9c63b297  bl #0x3180b88
0x044E7D1C: 030440f9  ldr x3, [x0, #8]
0x044E7D20: e10313aa  mov x1, x19
0x044E7D24: f44f41a9  ldp x20, x19, [sp, #0x10]
0x044E7D28: e20300aa  mov x2, x0
0x044E7D2C: e00315aa  mov x0, x21
0x044E7D30: fe57c2a8  ldp x30, x21, [sp], #0x20
0x044E7D34: 60001fd6  br x3
0x044E7D38: dd63b297  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x44E7D3C | MergeEngine.ECS.Components.SerializableComponent<object>$$GetSerialize
; native signature: Il2CppObject* MergeEngine_ECS_Components_SerializableComponent_object___GetSerialize (MergeEngine_ECS_Components_SerializableComponent_TSerializable__o* __this, const MethodInfo_44E7D3C* method);
; bytes=176 sha256=8e4c0f49fd3ec15edf46e84de54b03d82cf3e74123653a0dadc9dc0952393a88 status=arm64_complete_bound indexed_start=True
0x044E7D3C: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x044E7D40: f44f01a9  stp x20, x19, [sp, #0x10]
0x044E7D44: 95c101b0  adrp x21, #0x7d18000
0x044E7D48: a8c27f39  ldrb w8, [x21, #0xff0]
0x044E7D4C: f40301aa  mov x20, x1
0x044E7D50: f30300aa  mov x19, x0
0x044E7D54: c8000037  tbnz w8, #0, #0x44e7d6c
0x044E7D58: a08c0190  adrp x0, #0x767b000
0x044E7D5C: 008840f9  ldr x0, [x0, #0x110]
0x044E7D60: 2e63b297  bl #0x3180a18
0x044E7D64: 28008052  movz w8, #0x1
0x044E7D68: a8c23f39  strb w8, [x21, #0xff0]
0x044E7D6C: f50313aa  mov x21, x19
0x044E7D70: a80e42f8  ldr x8, [x21, #0x20]!
0x044E7D74: c80200b5  cbnz x8, #0x44e7dcc
0x044E7D78: 881240f9  ldr x8, [x20, #0x20]
0x044E7D7C: 086140f9  ldr x8, [x8, #0xc0]
0x044E7D80: 000940f9  ldr x0, [x8, #0x10]
0x044E7D84: d335de97  bl #0x3c754d0
0x044E7D88: e10300aa  mov x1, x0
0x044E7D8C: a00200f9  str x0, [x21]
0x044E7D90: e00315aa  mov x0, x21
0x044E7D94: 0c63b297  bl #0x31809c4
0x044E7D98: a88c0190  adrp x8, #0x767b000
0x044E7D9C: 088940f9  ldr x8, [x8, #0x110]
0x044E7DA0: b50240f9  ldr x21, [x21]
0x044E7DA4: 000140f9  ldr x0, [x8]
0x044E7DA8: 08e040b9  ldr w8, [x0, #0xe0]
0x044E7DAC: 48000035  cbnz w8, #0x44e7db4
0x044E7DB0: 7763b297  bl #0x3180b8c
0x044E7DB4: 881240f9  ldr x8, [x20, #0x20]
0x044E7DB8: e00315aa  mov x0, x21
0x044E7DBC: e1031f2a  mov w1, wzr
0x044E7DC0: 086140f9  ldr x8, [x8, #0xc0]
0x044E7DC4: 020d40f9  ldr x2, [x8, #0x18]
0x044E7DC8: 4819e297  bl #0x3d6e2e8
0x044E7DCC: 680240f9  ldr x8, [x19]
0x044E7DD0: e00313aa  mov x0, x19
0x044E7DD4: 09855fa9  ldp x9, x1, [x8, #0x1f8]
0x044E7DD8: 20013fd6  blr x9
0x044E7DDC: 601240f9  ldr x0, [x19, #0x20]
0x044E7DE0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x044E7DE4: fe57c2a8  ldp x30, x21, [sp], #0x20
0x044E7DE8: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x44E7DEC | MergeEngine.ECS.Components.SerializableComponent<object>$$MergeEngine.ECS.Components.ISerializableComponent.Deserialize
; native signature: void MergeEngine_ECS_Components_SerializableComponent_object___MergeEngine_ECS_Components_ISerializableComponent_Deserialize (MergeEngine_ECS_Components_SerializableComponent_TSerializable__o* __this, System_String_o* componentJson, const MethodInfo_44E7DEC* method);
; bytes=348 sha256=33be3ddfa90b8a31e5f4d518e7bd617941d116494a3767d7b49d8335502e9f5c status=arm64_complete_bound indexed_start=True
0x044E7DEC: fe0f1cf8  str x30, [sp, #-0x40]!
0x044E7DF0: f85f01a9  stp x24, x23, [sp, #0x10]
0x044E7DF4: f65702a9  stp x22, x21, [sp, #0x20]
0x044E7DF8: f44f03a9  stp x20, x19, [sp, #0x30]
0x044E7DFC: 96c101b0  adrp x22, #0x7d18000
0x044E7E00: c8c67f39  ldrb w8, [x22, #0xff1]
0x044E7E04: f40302aa  mov x20, x2
0x044E7E08: f50301aa  mov x21, x1
0x044E7E0C: f30300aa  mov x19, x0
0x044E7E10: c8000037  tbnz w8, #0, #0x44e7e28
0x044E7E14: a08c0190  adrp x0, #0x767b000
0x044E7E18: 008840f9  ldr x0, [x0, #0x110]
0x044E7E1C: ff62b297  bl #0x3180a18
0x044E7E20: 28008052  movz w8, #0x1
0x044E7E24: c8c63f39  strb w8, [x22, #0xff1]
0x044E7E28: f30800b4  cbz x19, #0x44e7f44
0x044E7E2C: 760e40f9  ldr x22, [x19, #0x18]
0x044E7E30: b60800b4  cbz x22, #0x44e7f44
0x044E7E34: 881240f9  ldr x8, [x20, #0x20]
0x044E7E38: 096140f9  ldr x9, [x8, #0xc0]
0x044E7E3C: c80240f9  ldr x8, [x22]
0x044E7E40: 371d40f9  ldr x23, [x9, #0x38]
0x044E7E44: 095d4279  ldrh w9, [x8, #0x12e]
0x044E7E48: e11240f9  ldr x1, [x23, #0x20]
0x044E7E4C: e2a24079  ldrh w2, [x23, #0x50]
0x044E7E50: 290100b4  cbz x9, #0x44e7e74
0x044E7E54: 0a5940f9  ldr x10, [x8, #0xb0]
0x044E7E58: 4a210091  add x10, x10, #8
0x044E7E5C: 4b815ff8  ldur x11, [x10, #-8]
0x044E7E60: 7f0101eb  cmp x11, x1
0x044E7E64: e0000054  b.eq #0x44e7e80
0x044E7E68: 290500f1  subs x9, x9, #1
0x044E7E6C: 4a410091  add x10, x10, #0x10
0x044E7E70: 61ffff54  b.ne #0x44e7e5c
0x044E7E74: e00316aa  mov x0, x22
0x044E7E78: 26bbb197  bl #0x3156b10
0x044E7E7C: 05000014  b #0x44e7e90
0x044E7E80: 490140b9  ldr w9, [x10]
0x044E7E84: 2901020b  add w9, w9, w2
0x044E7E88: 08d1298b  add x8, x8, w9, sxtw #4
0x044E7E8C: 00e10491  add x0, x8, #0x138
0x044E7E90: 000440f9  ldr x0, [x0, #8]
0x044E7E94: b88c0190  adrp x24, #0x767b000
0x044E7E98: 188b40f9  ldr x24, [x24, #0x110]
0x044E7E9C: e10317aa  mov x1, x23
0x044E7EA0: 3a63b297  bl #0x3180b88
0x044E7EA4: 080440f9  ldr x8, [x0, #8]
0x044E7EA8: e20300aa  mov x2, x0
0x044E7EAC: e00316aa  mov x0, x22
0x044E7EB0: e10315aa  mov x1, x21
0x044E7EB4: 00013fd6  blr x8
0x044E7EB8: e10300aa  mov x1, x0
0x044E7EBC: f50313aa  mov x21, x19
0x044E7EC0: a10e02f8  str x1, [x21, #0x20]!
0x044E7EC4: e00315aa  mov x0, x21
0x044E7EC8: bf62b297  bl #0x31809c4
0x044E7ECC: b60240f9  ldr x22, [x21]
0x044E7ED0: 560100b5  cbnz x22, #0x44e7ef8
0x044E7ED4: 881240f9  ldr x8, [x20, #0x20]
0x044E7ED8: 086140f9  ldr x8, [x8, #0xc0]
0x044E7EDC: 000940f9  ldr x0, [x8, #0x10]
0x044E7EE0: 7c35de97  bl #0x3c754d0
0x044E7EE4: e10300aa  mov x1, x0
0x044E7EE8: a00200f9  str x0, [x21]
0x044E7EEC: e00315aa  mov x0, x21
0x044E7EF0: b562b297  bl #0x31809c4
0x044E7EF4: b60240f9  ldr x22, [x21]
0x044E7EF8: 000340f9  ldr x0, [x24]
0x044E7EFC: 08e040b9  ldr w8, [x0, #0xe0]
0x044E7F00: 48000035  cbnz w8, #0x44e7f08
0x044E7F04: 2263b297  bl #0x3180b8c
0x044E7F08: 881240f9  ldr x8, [x20, #0x20]
0x044E7F0C: e00316aa  mov x0, x22
0x044E7F10: e1031f2a  mov w1, wzr
0x044E7F14: 086140f9  ldr x8, [x8, #0xc0]
0x044E7F18: 020d40f9  ldr x2, [x8, #0x18]
0x044E7F1C: f318e297  bl #0x3d6e2e8
0x044E7F20: 680240f9  ldr x8, [x19]
0x044E7F24: e00313aa  mov x0, x19
0x044E7F28: f44f43a9  ldp x20, x19, [sp, #0x30]
0x044E7F2C: f65742a9  ldp x22, x21, [sp, #0x20]
0x044E7F30: 020541f9  ldr x2, [x8, #0x208]
0x044E7F34: 010941f9  ldr x1, [x8, #0x210]
0x044E7F38: f85f41a9  ldp x24, x23, [sp, #0x10]
0x044E7F3C: fe0744f8  ldr x30, [sp], #0x40
0x044E7F40: 40001fd6  br x2
0x044E7F44: 5a63b297  bl #0x3180cac

