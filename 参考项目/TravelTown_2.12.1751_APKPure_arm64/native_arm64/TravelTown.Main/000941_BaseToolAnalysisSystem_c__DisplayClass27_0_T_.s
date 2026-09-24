; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 941 .BaseToolAnalysisSystem.<>c__DisplayClass27_0<T>
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; Generic instantiation from Il2CppDumper script.json | RVA 0x3F4D984 | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem.<>c__DisplayClass27_0<object>$$.ctor
; native signature: void MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem___c__DisplayClass27_0_object____ctor (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem___c__DisplayClass27_0_T__o* __this, const MethodInfo_3F4D984* method);
; bytes=8 sha256=01f52f8bed8a27a5c3141c9cf56cdea68fe32c1a2493f4fad48d0e6636853974 status=arm64_complete_bound indexed_start=True
0x03F4D984: e1031faa  mov x1, xzr
0x03F4D988: 1d335e14  b #0x56da5fc

; Generic instantiation from Il2CppDumper script.json | RVA 0x3F4DCE8 | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem.<>c__DisplayClass27_0<__Il2CppFullySharedGenericType>$$.ctor
; native signature: void MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem___c__DisplayClass27_0___Il2CppFullySharedGenericType____ctor (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem___c__DisplayClass27_0_T__o* __this, const MethodInfo_3F4DCE8* method);
; bytes=8 sha256=16456ef4d881973b0c6b33e621c8d0035e1d20cabb7e2cea77b830ba6752a8fd status=arm64_complete_bound indexed_start=True
0x03F4DCE8: e1031faa  mov x1, xzr
0x03F4DCEC: 44325e14  b #0x56da5fc

; Generic instantiation from Il2CppDumper script.json | RVA 0x3F4D98C | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem.<>c__DisplayClass27_0<object>$$<CalculateItemsLevelSum>b__0
; native signature: bool MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem___c__DisplayClass27_0_object____CalculateItemsLevelSum_b__0 (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem___c__DisplayClass27_0_T__o* __this, MergeEngine_Configuration_IMergeItem_o* item, const MethodInfo_3F4D98C* method);
; bytes=200 sha256=d080a7c867b5c6e52c3b5bb92e4312666ed82062f1473345b16372fd722f6a0b status=arm64_complete_bound indexed_start=True
0x03F4D98C: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x03F4D990: f44f01a9  stp x20, x19, [sp, #0x10]
0x03F4D994: 55ee01f0  adrp x21, #0x7d18000
0x03F4D998: a84a4039  ldrb w8, [x21, #0x12]
0x03F4D99C: f30301aa  mov x19, x1
0x03F4D9A0: f40300aa  mov x20, x0
0x03F4D9A4: 28010037  tbnz w8, #0, #0x3f4d9c8
0x03F4D9A8: 60b901f0  adrp x0, #0x767c000
0x03F4D9AC: 002441f9  ldr x0, [x0, #0x248]
0x03F4D9B0: 1accc897  bl #0x3180a18
0x03F4D9B4: 60b901f0  adrp x0, #0x767c000
0x03F4D9B8: 002841f9  ldr x0, [x0, #0x250]
0x03F4D9BC: 17ccc897  bl #0x3180a18
0x03F4D9C0: 28008052  movz w8, #0x1
0x03F4D9C4: a84a0039  strb w8, [x21, #0x12]
0x03F4D9C8: 940a40f9  ldr x20, [x20, #0x10]
0x03F4D9CC: 340400b4  cbz x20, #0x3f4da50
0x03F4D9D0: 6ab901f0  adrp x10, #0x767c000
0x03F4D9D4: 880240f9  ldr x8, [x20]
0x03F4D9D8: 4a2541f9  ldr x10, [x10, #0x248]
0x03F4D9DC: 095d4279  ldrh w9, [x8, #0x12e]
0x03F4D9E0: 410140f9  ldr x1, [x10]
0x03F4D9E4: 290100b4  cbz x9, #0x3f4da08
0x03F4D9E8: 0a5940f9  ldr x10, [x8, #0xb0]
0x03F4D9EC: 4a210091  add x10, x10, #8
0x03F4D9F0: 4b815ff8  ldur x11, [x10, #-8]
0x03F4D9F4: 7f0101eb  cmp x11, x1
0x03F4D9F8: 00010054  b.eq #0x3f4da18
0x03F4D9FC: 290500f1  subs x9, x9, #1
0x03F4DA00: 4a410091  add x10, x10, #0x10
0x03F4DA04: 61ffff54  b.ne #0x3f4d9f0
0x03F4DA08: e00314aa  mov x0, x20
0x03F4DA0C: e2031f2a  mov w2, wzr
0x03F4DA10: 4024c897  bl #0x3156b10
0x03F4DA14: 04000014  b #0x3f4da24
0x03F4DA18: 490180b9  ldrsw x9, [x10]
0x03F4DA1C: 0811098b  add x8, x8, x9, lsl #4
0x03F4DA20: 00e10491  add x0, x8, #0x138
0x03F4DA24: 080440a9  ldp x8, x1, [x0]
0x03F4DA28: e00314aa  mov x0, x20
0x03F4DA2C: 00013fd6  blr x8
0x03F4DA30: 000100b4  cbz x0, #0x3f4da50
0x03F4DA34: 68b901f0  adrp x8, #0x767c000
0x03F4DA38: 082941f9  ldr x8, [x8, #0x250]
0x03F4DA3C: e10313aa  mov x1, x19
0x03F4DA40: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03F4DA44: 020140f9  ldr x2, [x8]
0x03F4DA48: fe57c2a8  ldp x30, x21, [sp], #0x20
0x03F4DA4C: 6cdb0314  b #0x40447fc
0x03F4DA50: 97ccc897  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3F4DCF0 | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem.<>c__DisplayClass27_0<__Il2CppFullySharedGenericType>$$<CalculateItemsLevelSum>b__0
; native signature: bool MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem___c__DisplayClass27_0___Il2CppFullySharedGenericType____CalculateItemsLevelSum_b__0 (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem___c__DisplayClass27_0_T__o* __this, MergeEngine_Configuration_IMergeItem_o* item, const MethodInfo_3F4DCF0* method);
; bytes=200 sha256=e6153ff94c8f2f0311386a78a5565278601f60724ff58240786cb0d8d142d0d0 status=arm64_complete_bound indexed_start=True
0x03F4DCF0: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x03F4DCF4: f44f01a9  stp x20, x19, [sp, #0x10]
0x03F4DCF8: 55ee01f0  adrp x21, #0x7d18000
0x03F4DCFC: a8564039  ldrb w8, [x21, #0x15]
0x03F4DD00: f30301aa  mov x19, x1
0x03F4DD04: f40300aa  mov x20, x0
0x03F4DD08: 28010037  tbnz w8, #0, #0x3f4dd2c
0x03F4DD0C: 60b901f0  adrp x0, #0x767c000
0x03F4DD10: 002441f9  ldr x0, [x0, #0x248]
0x03F4DD14: 41cbc897  bl #0x3180a18
0x03F4DD18: 60b901f0  adrp x0, #0x767c000
0x03F4DD1C: 002841f9  ldr x0, [x0, #0x250]
0x03F4DD20: 3ecbc897  bl #0x3180a18
0x03F4DD24: 28008052  movz w8, #0x1
0x03F4DD28: a8560039  strb w8, [x21, #0x15]
0x03F4DD2C: 940a40f9  ldr x20, [x20, #0x10]
0x03F4DD30: 340400b4  cbz x20, #0x3f4ddb4
0x03F4DD34: 6ab901f0  adrp x10, #0x767c000
0x03F4DD38: 880240f9  ldr x8, [x20]
0x03F4DD3C: 4a2541f9  ldr x10, [x10, #0x248]
0x03F4DD40: 095d4279  ldrh w9, [x8, #0x12e]
0x03F4DD44: 410140f9  ldr x1, [x10]
0x03F4DD48: 290100b4  cbz x9, #0x3f4dd6c
0x03F4DD4C: 0a5940f9  ldr x10, [x8, #0xb0]
0x03F4DD50: 4a210091  add x10, x10, #8
0x03F4DD54: 4b815ff8  ldur x11, [x10, #-8]
0x03F4DD58: 7f0101eb  cmp x11, x1
0x03F4DD5C: 00010054  b.eq #0x3f4dd7c
0x03F4DD60: 290500f1  subs x9, x9, #1
0x03F4DD64: 4a410091  add x10, x10, #0x10
0x03F4DD68: 61ffff54  b.ne #0x3f4dd54
0x03F4DD6C: e00314aa  mov x0, x20
0x03F4DD70: e2031f2a  mov w2, wzr
0x03F4DD74: 6723c897  bl #0x3156b10
0x03F4DD78: 04000014  b #0x3f4dd88
0x03F4DD7C: 490180b9  ldrsw x9, [x10]
0x03F4DD80: 0811098b  add x8, x8, x9, lsl #4
0x03F4DD84: 00e10491  add x0, x8, #0x138
0x03F4DD88: 080440a9  ldp x8, x1, [x0]
0x03F4DD8C: e00314aa  mov x0, x20
0x03F4DD90: 00013fd6  blr x8
0x03F4DD94: 000100b4  cbz x0, #0x3f4ddb4
0x03F4DD98: 68b901f0  adrp x8, #0x767c000
0x03F4DD9C: 082941f9  ldr x8, [x8, #0x250]
0x03F4DDA0: e10313aa  mov x1, x19
0x03F4DDA4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03F4DDA8: 020140f9  ldr x2, [x8]
0x03F4DDAC: fe57c2a8  ldp x30, x21, [sp], #0x20
0x03F4DDB0: 93da0314  b #0x40447fc
0x03F4DDB4: becbc897  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3F4DA54 | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem.<>c__DisplayClass27_0<object>$$<CalculateItemsLevelSum>b__1
; native signature: int32_t MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem___c__DisplayClass27_0_object____CalculateItemsLevelSum_b__1 (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem___c__DisplayClass27_0_T__o* __this, MergeEngine_Configuration_IMergeItem_o* item, const MethodInfo_3F4DA54* method);
; bytes=340 sha256=685e65f5f1777b1951b06b1eee6a71739979ec7b61d8a5b284ec8e9f69a726b5 status=arm64_complete_bound indexed_start=True
0x03F4DA54: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x03F4DA58: f44f01a9  stp x20, x19, [sp, #0x10]
0x03F4DA5C: 54ee01f0  adrp x20, #0x7d18000
0x03F4DA60: 884e4039  ldrb w8, [x20, #0x13]
0x03F4DA64: f50301aa  mov x21, x1
0x03F4DA68: f30300aa  mov x19, x0
0x03F4DA6C: 88010037  tbnz w8, #0, #0x3f4da9c
0x03F4DA70: 60b901f0  adrp x0, #0x767c000
0x03F4DA74: 002c41f9  ldr x0, [x0, #0x258]
0x03F4DA78: e8cbc897  bl #0x3180a18
0x03F4DA7C: 60b901b0  adrp x0, #0x767a000
0x03F4DA80: 004c42f9  ldr x0, [x0, #0x498]
0x03F4DA84: e5cbc897  bl #0x3180a18
0x03F4DA88: 60b90190  adrp x0, #0x7679000
0x03F4DA8C: 001044f9  ldr x0, [x0, #0x820]
0x03F4DA90: e2cbc897  bl #0x3180a18
0x03F4DA94: 28008052  movz w8, #0x1
0x03F4DA98: 884e0039  strb w8, [x20, #0x13]
0x03F4DA9C: 690e40f9  ldr x9, [x19, #0x18]
0x03F4DAA0: 290800b4  cbz x9, #0x3f4dba4
0x03F4DAA4: 150800b4  cbz x21, #0x3f4dba4
0x03F4DAA8: 6ab90190  adrp x10, #0x7679000
0x03F4DAAC: a80240f9  ldr x8, [x21]
0x03F4DAB0: 4a1144f9  ldr x10, [x10, #0x820]
0x03F4DAB4: 334540f9  ldr x19, [x9, #0x88]
0x03F4DAB8: 342140f9  ldr x20, [x9, #0x40]
0x03F4DABC: 095d4279  ldrh w9, [x8, #0x12e]
0x03F4DAC0: 410140f9  ldr x1, [x10]
0x03F4DAC4: 290100b4  cbz x9, #0x3f4dae8
0x03F4DAC8: 0a5940f9  ldr x10, [x8, #0xb0]
0x03F4DACC: 4a210091  add x10, x10, #8
0x03F4DAD0: 4b815ff8  ldur x11, [x10, #-8]
0x03F4DAD4: 7f0101eb  cmp x11, x1
0x03F4DAD8: 00010054  b.eq #0x3f4daf8
0x03F4DADC: 290500f1  subs x9, x9, #1
0x03F4DAE0: 4a410091  add x10, x10, #0x10
0x03F4DAE4: 61ffff54  b.ne #0x3f4dad0
0x03F4DAE8: e00315aa  mov x0, x21
0x03F4DAEC: e2031f2a  mov w2, wzr
0x03F4DAF0: 0824c897  bl #0x3156b10
0x03F4DAF4: 04000014  b #0x3f4db04
0x03F4DAF8: 490180b9  ldrsw x9, [x10]
0x03F4DAFC: 0811098b  add x8, x8, x9, lsl #4
0x03F4DB00: 00e10491  add x0, x8, #0x138
0x03F4DB04: 080440a9  ldp x8, x1, [x0]
0x03F4DB08: e00315aa  mov x0, x21
0x03F4DB0C: 00013fd6  blr x8
0x03F4DB10: b40400b4  cbz x20, #0x3f4dba4
0x03F4DB14: 6ab901b0  adrp x10, #0x767a000
0x03F4DB18: 880240f9  ldr x8, [x20]
0x03F4DB1C: 4a4d42f9  ldr x10, [x10, #0x498]
0x03F4DB20: f50300aa  mov x21, x0
0x03F4DB24: 095d4279  ldrh w9, [x8, #0x12e]
0x03F4DB28: 410140f9  ldr x1, [x10]
0x03F4DB2C: 290100b4  cbz x9, #0x3f4db50
0x03F4DB30: 0a5940f9  ldr x10, [x8, #0xb0]
0x03F4DB34: 4a210091  add x10, x10, #8
0x03F4DB38: 4b815ff8  ldur x11, [x10, #-8]
0x03F4DB3C: 7f0101eb  cmp x11, x1
0x03F4DB40: 00010054  b.eq #0x3f4db60
0x03F4DB44: 290500f1  subs x9, x9, #1
0x03F4DB48: 4a410091  add x10, x10, #0x10
0x03F4DB4C: 61ffff54  b.ne #0x3f4db38
0x03F4DB50: 22038052  movz w2, #0x19
0x03F4DB54: e00314aa  mov x0, x20
0x03F4DB58: ee23c897  bl #0x3156b10
0x03F4DB5C: 05000014  b #0x3f4db70
0x03F4DB60: 490140b9  ldr w9, [x10]
0x03F4DB64: 29650011  add w9, w9, #0x19
0x03F4DB68: 08d1298b  add x8, x8, w9, sxtw #4
0x03F4DB6C: 00e10491  add x0, x8, #0x138
0x03F4DB70: 080840a9  ldp x8, x2, [x0]
0x03F4DB74: e00314aa  mov x0, x20
0x03F4DB78: e10315aa  mov x1, x21
0x03F4DB7C: 00013fd6  blr x8
0x03F4DB80: 330100b4  cbz x19, #0x3f4dba4
0x03F4DB84: 68b901f0  adrp x8, #0x767c000
0x03F4DB88: 082d41f9  ldr x8, [x8, #0x258]
0x03F4DB8C: e103002a  mov w1, w0
0x03F4DB90: e00313aa  mov x0, x19
0x03F4DB94: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03F4DB98: 020140f9  ldr x2, [x8]
0x03F4DB9C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x03F4DBA0: b4773b14  b #0x4e2ba70
0x03F4DBA4: 42ccc897  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3F4DDB8 | MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem.<>c__DisplayClass27_0<__Il2CppFullySharedGenericType>$$<CalculateItemsLevelSum>b__1
; native signature: int32_t MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem___c__DisplayClass27_0___Il2CppFullySharedGenericType____CalculateItemsLevelSum_b__1 (MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem___c__DisplayClass27_0_T__o* __this, MergeEngine_Configuration_IMergeItem_o* item, const MethodInfo_3F4DDB8* method);
; bytes=340 sha256=28277bcdc198b12eb1718e44514615fa851d66d3a3fd8ebbcf0b273488d3ad34 status=arm64_complete_bound indexed_start=True
0x03F4DDB8: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x03F4DDBC: f44f01a9  stp x20, x19, [sp, #0x10]
0x03F4DDC0: 54ee01f0  adrp x20, #0x7d18000
0x03F4DDC4: 885a4039  ldrb w8, [x20, #0x16]
0x03F4DDC8: f50301aa  mov x21, x1
0x03F4DDCC: f30300aa  mov x19, x0
0x03F4DDD0: 88010037  tbnz w8, #0, #0x3f4de00
0x03F4DDD4: 60b901f0  adrp x0, #0x767c000
0x03F4DDD8: 002c41f9  ldr x0, [x0, #0x258]
0x03F4DDDC: 0fcbc897  bl #0x3180a18
0x03F4DDE0: 60b901b0  adrp x0, #0x767a000
0x03F4DDE4: 004c42f9  ldr x0, [x0, #0x498]
0x03F4DDE8: 0ccbc897  bl #0x3180a18
0x03F4DDEC: 60b90190  adrp x0, #0x7679000
0x03F4DDF0: 001044f9  ldr x0, [x0, #0x820]
0x03F4DDF4: 09cbc897  bl #0x3180a18
0x03F4DDF8: 28008052  movz w8, #0x1
0x03F4DDFC: 885a0039  strb w8, [x20, #0x16]
0x03F4DE00: 690e40f9  ldr x9, [x19, #0x18]
0x03F4DE04: 290800b4  cbz x9, #0x3f4df08
0x03F4DE08: 150800b4  cbz x21, #0x3f4df08
0x03F4DE0C: 6ab90190  adrp x10, #0x7679000
0x03F4DE10: a80240f9  ldr x8, [x21]
0x03F4DE14: 4a1144f9  ldr x10, [x10, #0x820]
0x03F4DE18: 334540f9  ldr x19, [x9, #0x88]
0x03F4DE1C: 342140f9  ldr x20, [x9, #0x40]
0x03F4DE20: 095d4279  ldrh w9, [x8, #0x12e]
0x03F4DE24: 410140f9  ldr x1, [x10]
0x03F4DE28: 290100b4  cbz x9, #0x3f4de4c
0x03F4DE2C: 0a5940f9  ldr x10, [x8, #0xb0]
0x03F4DE30: 4a210091  add x10, x10, #8
0x03F4DE34: 4b815ff8  ldur x11, [x10, #-8]
0x03F4DE38: 7f0101eb  cmp x11, x1
0x03F4DE3C: 00010054  b.eq #0x3f4de5c
0x03F4DE40: 290500f1  subs x9, x9, #1
0x03F4DE44: 4a410091  add x10, x10, #0x10
0x03F4DE48: 61ffff54  b.ne #0x3f4de34
0x03F4DE4C: e00315aa  mov x0, x21
0x03F4DE50: e2031f2a  mov w2, wzr
0x03F4DE54: 2f23c897  bl #0x3156b10
0x03F4DE58: 04000014  b #0x3f4de68
0x03F4DE5C: 490180b9  ldrsw x9, [x10]
0x03F4DE60: 0811098b  add x8, x8, x9, lsl #4
0x03F4DE64: 00e10491  add x0, x8, #0x138
0x03F4DE68: 080440a9  ldp x8, x1, [x0]
0x03F4DE6C: e00315aa  mov x0, x21
0x03F4DE70: 00013fd6  blr x8
0x03F4DE74: b40400b4  cbz x20, #0x3f4df08
0x03F4DE78: 6ab901b0  adrp x10, #0x767a000
0x03F4DE7C: 880240f9  ldr x8, [x20]
0x03F4DE80: 4a4d42f9  ldr x10, [x10, #0x498]
0x03F4DE84: f50300aa  mov x21, x0
0x03F4DE88: 095d4279  ldrh w9, [x8, #0x12e]
0x03F4DE8C: 410140f9  ldr x1, [x10]
0x03F4DE90: 290100b4  cbz x9, #0x3f4deb4
0x03F4DE94: 0a5940f9  ldr x10, [x8, #0xb0]
0x03F4DE98: 4a210091  add x10, x10, #8
0x03F4DE9C: 4b815ff8  ldur x11, [x10, #-8]
0x03F4DEA0: 7f0101eb  cmp x11, x1
0x03F4DEA4: 00010054  b.eq #0x3f4dec4
0x03F4DEA8: 290500f1  subs x9, x9, #1
0x03F4DEAC: 4a410091  add x10, x10, #0x10
0x03F4DEB0: 61ffff54  b.ne #0x3f4de9c
0x03F4DEB4: 22038052  movz w2, #0x19
0x03F4DEB8: e00314aa  mov x0, x20
0x03F4DEBC: 1523c897  bl #0x3156b10
0x03F4DEC0: 05000014  b #0x3f4ded4
0x03F4DEC4: 490140b9  ldr w9, [x10]
0x03F4DEC8: 29650011  add w9, w9, #0x19
0x03F4DECC: 08d1298b  add x8, x8, w9, sxtw #4
0x03F4DED0: 00e10491  add x0, x8, #0x138
0x03F4DED4: 080840a9  ldp x8, x2, [x0]
0x03F4DED8: e00314aa  mov x0, x20
0x03F4DEDC: e10315aa  mov x1, x21
0x03F4DEE0: 00013fd6  blr x8
0x03F4DEE4: 330100b4  cbz x19, #0x3f4df08
0x03F4DEE8: 68b901f0  adrp x8, #0x767c000
0x03F4DEEC: 082d41f9  ldr x8, [x8, #0x258]
0x03F4DEF0: e103002a  mov w1, w0
0x03F4DEF4: e00313aa  mov x0, x19
0x03F4DEF8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03F4DEFC: 020140f9  ldr x2, [x8]
0x03F4DF00: fe57c2a8  ldp x30, x21, [sp], #0x20
0x03F4DF04: db763b14  b #0x4e2ba70
0x03F4DF08: 69cbc897  bl #0x3180cac

