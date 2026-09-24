; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 691 MergeEngine.ECS.Systems.TickableSystem<TComponent>
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; Generic instantiation from Il2CppDumper script.json | RVA 0x45F03B0 | MergeEngine.ECS.Systems.TickableSystem<object>$$MergeEngine.ECS.Systems.ITickableSystem.Tick
; native signature: void MergeEngine_ECS_Systems_TickableSystem_object___MergeEngine_ECS_Systems_ITickableSystem_Tick (MergeEngine_ECS_Systems_TickableSystem_TComponent__o* __this, const MethodInfo_45F03B0* method);
; bytes=116 sha256=b138efa589932e071da1d0d22b6618aca2d7d0b6dc0e6cbcc40c17eafd2b948b status=arm64_complete_bound indexed_start=True
0x045F03B0: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x045F03B4: f44f01a9  stp x20, x19, [sp, #0x10]
0x045F03B8: 400300b4  cbz x0, #0x45f0420
0x045F03BC: 281040f9  ldr x8, [x1, #0x20]
0x045F03C0: f50301aa  mov x21, x1
0x045F03C4: f30300aa  mov x19, x0
0x045F03C8: 086140f9  ldr x8, [x8, #0xc0]
0x045F03CC: 010140f9  ldr x1, [x8]
0x045F03D0: be19df97  bl #0x3db6ac8
0x045F03D4: 000200b4  cbz x0, #0x45f0414
0x045F03D8: a81240f9  ldr x8, [x21, #0x20]
0x045F03DC: f40300aa  mov x20, x0
0x045F03E0: 086140f9  ldr x8, [x8, #0xc0]
0x045F03E4: 010940f9  ldr x1, [x8, #0x10]
0x045F03E8: 6055f997  bl #0x4445968
0x045F03EC: 1f040071  cmp w0, #1
0x045F03F0: 2b010054  b.lt #0x45f0414
0x045F03F4: 680240f9  ldr x8, [x19]
0x045F03F8: e00313aa  mov x0, x19
0x045F03FC: e10314aa  mov x1, x20
0x045F0400: f44f41a9  ldp x20, x19, [sp, #0x10]
0x045F0404: 031d41f9  ldr x3, [x8, #0x238]
0x045F0408: 022141f9  ldr x2, [x8, #0x240]
0x045F040C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x045F0410: 60001fd6  br x3
0x045F0414: f44f41a9  ldp x20, x19, [sp, #0x10]
0x045F0418: fe57c2a8  ldp x30, x21, [sp], #0x20
0x045F041C: c0035fd6  ret
0x045F0420: 2342ae97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x45F042C | MergeEngine.ECS.Systems.TickableSystem<__Il2CppFullySharedGenericType>$$MergeEngine.ECS.Systems.ITickableSystem.Tick
; native signature: void MergeEngine_ECS_Systems_TickableSystem___Il2CppFullySharedGenericType___MergeEngine_ECS_Systems_ITickableSystem_Tick (MergeEngine_ECS_Systems_TickableSystem_TComponent__o* __this, const MethodInfo_45F042C* method);
; bytes=124 sha256=bea36d2301f2d6606831db48889e19ee2246fbc488d8116561431f3fd2ee5291 status=arm64_complete_bound indexed_start=True
0x045F042C: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x045F0430: f44f01a9  stp x20, x19, [sp, #0x10]
0x045F0434: 800300b4  cbz x0, #0x45f04a4
0x045F0438: 281040f9  ldr x8, [x1, #0x20]
0x045F043C: f50301aa  mov x21, x1
0x045F0440: f30300aa  mov x19, x0
0x045F0444: 086140f9  ldr x8, [x8, #0xc0]
0x045F0448: 010140f9  ldr x1, [x8]
0x045F044C: 280040f9  ldr x8, [x1]
0x045F0450: 00013fd6  blr x8
0x045F0454: 200200b4  cbz x0, #0x45f0498
0x045F0458: a81240f9  ldr x8, [x21, #0x20]
0x045F045C: f40300aa  mov x20, x0
0x045F0460: 086140f9  ldr x8, [x8, #0xc0]
0x045F0464: 010940f9  ldr x1, [x8, #0x10]
0x045F0468: 280040f9  ldr x8, [x1]
0x045F046C: 00013fd6  blr x8
0x045F0470: 1f040071  cmp w0, #1
0x045F0474: 2b010054  b.lt #0x45f0498
0x045F0478: 680240f9  ldr x8, [x19]
0x045F047C: e00313aa  mov x0, x19
0x045F0480: e10314aa  mov x1, x20
0x045F0484: f44f41a9  ldp x20, x19, [sp, #0x10]
0x045F0488: 031d41f9  ldr x3, [x8, #0x238]
0x045F048C: 022141f9  ldr x2, [x8, #0x240]
0x045F0490: fe57c2a8  ldp x30, x21, [sp], #0x20
0x045F0494: 60001fd6  br x3
0x045F0498: f44f41a9  ldp x20, x19, [sp, #0x10]
0x045F049C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x045F04A0: c0035fd6  ret
0x045F04A4: 0242ae97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x45F0424 | MergeEngine.ECS.Systems.TickableSystem<object>$$.ctor
; native signature: void MergeEngine_ECS_Systems_TickableSystem_object____ctor (MergeEngine_ECS_Systems_TickableSystem_TComponent__o* __this, const MethodInfo_45F0424* method);
; bytes=8 sha256=1dc5f68e0ead067e95250914626f788c7028796b4891e41711c54cdecc9ff212 status=arm64_complete_bound indexed_start=True
0x045F0424: e1031faa  mov x1, xzr
0x045F0428: 46dc7614  b #0x63a7540

; Generic instantiation from Il2CppDumper script.json | RVA 0x45F04A8 | MergeEngine.ECS.Systems.TickableSystem<__Il2CppFullySharedGenericType>$$.ctor
; native signature: void MergeEngine_ECS_Systems_TickableSystem___Il2CppFullySharedGenericType____ctor (MergeEngine_ECS_Systems_TickableSystem_TComponent__o* __this, const MethodInfo_45F04A8* method);
; bytes=8 sha256=be7f988174881b0a252a8ec29d06d1b26a07620e8e2cfd820e1aa815779ef9cb status=arm64_complete_bound indexed_start=True
0x045F04A8: e1031faa  mov x1, xzr
0x045F04AC: 25dc7614  b #0x63a7540

