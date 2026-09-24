; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1004 MergeEngine.ECS.Components.BaseIdComponent<TCapability>
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; Generic instantiation from Il2CppDumper script.json | RVA 0x4BEC144 | MergeEngine.ECS.Components.BaseIdComponent<object>$$get_Id
; native signature: System_String_o* MergeEngine_ECS_Components_BaseIdComponent_object___get_Id (MergeEngine_ECS_Components_BaseIdComponent_TCapability__o* __this, const MethodInfo_4BEC144* method);
; bytes=32 sha256=abe0ff812a306162b6b261d5c158ee24713a5630ab938a5b26023038ae85397c status=arm64_complete_bound indexed_start=True
0x04BEC144: fe0f1ff8  str x30, [sp, #-0x10]!
0x04BEC148: c00000b4  cbz x0, #0x4bec160
0x04BEC14C: 081040f9  ldr x8, [x0, #0x20]
0x04BEC150: 880000b4  cbz x8, #0x4bec160
0x04BEC154: 000940f9  ldr x0, [x8, #0x10]
0x04BEC158: fe0741f8  ldr x30, [sp], #0x10
0x04BEC15C: c0035fd6  ret
0x04BEC160: d3529697  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4BEC164 | MergeEngine.ECS.Components.BaseIdComponent<object>$$get_UUId
; native signature: System_String_o* MergeEngine_ECS_Components_BaseIdComponent_object___get_UUId (MergeEngine_ECS_Components_BaseIdComponent_TCapability__o* __this, const MethodInfo_4BEC164* method);
; bytes=32 sha256=c8c17b19794edbc4c4b077515fe8d68d3b19efc3dfe4c81a15752dc6706e79a0 status=arm64_complete_bound indexed_start=True
0x04BEC164: fe0f1ff8  str x30, [sp, #-0x10]!
0x04BEC168: c00000b4  cbz x0, #0x4bec180
0x04BEC16C: 081040f9  ldr x8, [x0, #0x20]
0x04BEC170: 880000b4  cbz x8, #0x4bec180
0x04BEC174: 000d40f9  ldr x0, [x8, #0x18]
0x04BEC178: fe0741f8  ldr x30, [sp], #0x10
0x04BEC17C: c0035fd6  ret
0x04BEC180: cb529697  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4BEC184 | MergeEngine.ECS.Components.BaseIdComponent<object>$$.ctor
; native signature: void MergeEngine_ECS_Components_BaseIdComponent_object____ctor (MergeEngine_ECS_Components_BaseIdComponent_TCapability__o* __this, Il2CppObject* capability, MergeEngine_ECS_Entity_o* entity, const MethodInfo_4BEC184* method);
; bytes=16 sha256=c33c162fafc0a5b54e0648907ce2f7d6af70808c5cfe6695279c12e9e1597fe4 status=arm64_complete_bound indexed_start=True
0x04BEC184: 681040f9  ldr x8, [x3, #0x20]
0x04BEC188: 086140f9  ldr x8, [x8, #0xc0]
0x04BEC18C: 030940f9  ldr x3, [x8, #0x10]
0x04BEC190: 72cc0514  b #0x4d5f358

