; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 687 .SystemManager.<>c__15<TSystem>
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; Generic instantiation from Il2CppDumper script.json | RVA 0x3F28C14 | MergeEngine.ECS.Systems.SystemManager.<>c__15<object>$$.cctor
; native signature: void MergeEngine_ECS_Systems_SystemManager___c__15_object____cctor (const MethodInfo_3F28C14* method);
; bytes=188 sha256=285843636a1a2c75f4db7b14e3cc146694b0d6e9c60b5b7916c563cf86275039 status=arm64_complete_bound indexed_start=True
0x03F28C14: fe0f1ef8  str x30, [sp, #-0x20]!
0x03F28C18: f44f01a9  stp x20, x19, [sp, #0x10]
0x03F28C1C: f30300aa  mov x19, x0
0x03F28C20: 001040f9  ldr x0, [x0, #0x20]
0x03F28C24: 08d44439  ldrb w8, [x0, #0x135]
0x03F28C28: 48000037  tbnz w8, #0, #0x3f28c30
0x03F28C2C: fcb6c897  bl #0x315681c
0x03F28C30: 086040f9  ldr x8, [x0, #0xc0]
0x03F28C34: 000140f9  ldr x0, [x8]
0x03F28C38: 08d44439  ldrb w8, [x0, #0x135]
0x03F28C3C: 48000037  tbnz w8, #0, #0x3f28c44
0x03F28C40: f7b6c897  bl #0x315681c
0x03F28C44: 1760c997  bl #0x3180ca0
0x03F28C48: 681240f9  ldr x8, [x19, #0x20]
0x03F28C4C: f40300aa  mov x20, x0
0x03F28C50: 09d54439  ldrb w9, [x8, #0x135]
0x03F28C54: 69000037  tbnz w9, #0, #0x3f28c60
0x03F28C58: e00308aa  mov x0, x8
0x03F28C5C: f0b6c897  bl #0x315681c
0x03F28C60: e00314aa  mov x0, x20
0x03F28C64: e1031faa  mov x1, xzr
0x03F28C68: 65c65e94  bl #0x56da5fc
0x03F28C6C: 601240f9  ldr x0, [x19, #0x20]
0x03F28C70: 08d44439  ldrb w8, [x0, #0x135]
0x03F28C74: 48000037  tbnz w8, #0, #0x3f28c7c
0x03F28C78: e9b6c897  bl #0x315681c
0x03F28C7C: 086040f9  ldr x8, [x0, #0xc0]
0x03F28C80: 000940f9  ldr x0, [x8, #0x10]
0x03F28C84: 08d44439  ldrb w8, [x0, #0x135]
0x03F28C88: 48000037  tbnz w8, #0, #0x3f28c90
0x03F28C8C: e4b6c897  bl #0x315681c
0x03F28C90: 085c40f9  ldr x8, [x0, #0xb8]
0x03F28C94: 140100f9  str x20, [x8]
0x03F28C98: 601240f9  ldr x0, [x19, #0x20]
0x03F28C9C: 08d44439  ldrb w8, [x0, #0x135]
0x03F28CA0: 48000037  tbnz w8, #0, #0x3f28ca8
0x03F28CA4: deb6c897  bl #0x315681c
0x03F28CA8: 086040f9  ldr x8, [x0, #0xc0]
0x03F28CAC: 000940f9  ldr x0, [x8, #0x10]
0x03F28CB0: 08d44439  ldrb w8, [x0, #0x135]
0x03F28CB4: 48000037  tbnz w8, #0, #0x3f28cbc
0x03F28CB8: d9b6c897  bl #0x315681c
0x03F28CBC: 005c40f9  ldr x0, [x0, #0xb8]
0x03F28CC0: e10314aa  mov x1, x20
0x03F28CC4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03F28CC8: fe0742f8  ldr x30, [sp], #0x20
0x03F28CCC: 3e5fc917  b #0x31809c4

; Generic instantiation from Il2CppDumper script.json | RVA 0x3F28CD0 | MergeEngine.ECS.Systems.SystemManager.<>c__15<object>$$.ctor
; native signature: void MergeEngine_ECS_Systems_SystemManager___c__15_object____ctor (MergeEngine_ECS_Systems_SystemManager___c__15_TSystem__o* __this, const MethodInfo_3F28CD0* method);
; bytes=8 sha256=a35de1c7d1429b97328daa6aa7749b6a81ac8e786b90d15311e6269bb698e3e2 status=arm64_complete_bound indexed_start=True
0x03F28CD0: e1031faa  mov x1, xzr
0x03F28CD4: 4ac65e14  b #0x56da5fc

; Generic instantiation from Il2CppDumper script.json | RVA 0x3F28CD8 | MergeEngine.ECS.Systems.SystemManager.<>c__15<object>$$<GetSystem>b__15_0
; native signature: bool MergeEngine_ECS_Systems_SystemManager___c__15_object____GetSystem_b__15_0 (MergeEngine_ECS_Systems_SystemManager___c__15_TSystem__o* __this, System_Type_o* systemType, const MethodInfo_3F28CD8* method);
; bytes=144 sha256=b798240dd7fc1a371ebccd306c88139fe5a81fdc8afee08c9e6f22d879731b22 status=arm64_complete_bound indexed_start=True
0x03F28CD8: fe0f1df8  str x30, [sp, #-0x30]!
0x03F28CDC: f65701a9  stp x22, x21, [sp, #0x10]
0x03F28CE0: f44f02a9  stp x20, x19, [sp, #0x20]
0x03F28CE4: 76ef01f0  adrp x22, #0x7d17000
0x03F28CE8: 35b901d0  adrp x21, #0x764e000
0x03F28CEC: c8127d39  ldrb w8, [x22, #0xf44]
0x03F28CF0: b5ae42f9  ldr x21, [x21, #0x558]
0x03F28CF4: f40302aa  mov x20, x2
0x03F28CF8: f30301aa  mov x19, x1
0x03F28CFC: c8000037  tbnz w8, #0, #0x3f28d14
0x03F28D00: 20b901d0  adrp x0, #0x764e000
0x03F28D04: 00ac42f9  ldr x0, [x0, #0x558]
0x03F28D08: 445fc997  bl #0x3180a18
0x03F28D0C: 28008052  movz w8, #0x1
0x03F28D10: c8123d39  strb w8, [x22, #0xf44]
0x03F28D14: 881240f9  ldr x8, [x20, #0x20]
0x03F28D18: a00240f9  ldr x0, [x21]
0x03F28D1C: 086140f9  ldr x8, [x8, #0xc0]
0x03F28D20: 09e040b9  ldr w9, [x0, #0xe0]
0x03F28D24: 140d40f9  ldr x20, [x8, #0x18]
0x03F28D28: 49000035  cbnz w9, #0x3f28d30
0x03F28D2C: 985fc997  bl #0x3180b8c
0x03F28D30: e00314aa  mov x0, x20
0x03F28D34: e1031faa  mov x1, xzr
0x03F28D38: 23f15d94  bl #0x56a51c4
0x03F28D3C: 530100b4  cbz x19, #0x3f28d64
0x03F28D40: 680240f9  ldr x8, [x19]
0x03F28D44: e10300aa  mov x1, x0
0x03F28D48: e00313aa  mov x0, x19
0x03F28D4C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03F28D50: 034541f9  ldr x3, [x8, #0x288]
0x03F28D54: 024941f9  ldr x2, [x8, #0x290]
0x03F28D58: f65741a9  ldp x22, x21, [sp, #0x10]
0x03F28D5C: fe0743f8  ldr x30, [sp], #0x30
0x03F28D60: 60001fd6  br x3
0x03F28D64: d25fc997  bl #0x3180cac

