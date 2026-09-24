; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 688 .SystemManager.<>c__DisplayClass13_0<TSystem>
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; Generic instantiation from Il2CppDumper script.json | RVA 0x3F39484 | MergeEngine.ECS.Systems.SystemManager.<>c__DisplayClass13_0<object>$$.ctor
; native signature: void MergeEngine_ECS_Systems_SystemManager___c__DisplayClass13_0_object____ctor (MergeEngine_ECS_Systems_SystemManager___c__DisplayClass13_0_TSystem__o* __this, const MethodInfo_3F39484* method);
; bytes=8 sha256=d83f3391089be2f5f7638764d0d7b83489ceb149a5fa56d8fad5a9397d8e2d48 status=arm64_complete_bound indexed_start=True
0x03F39484: e1031faa  mov x1, xzr
0x03F39488: 5d845e14  b #0x56da5fc

; Generic instantiation from Il2CppDumper script.json | RVA 0x3F3948C | MergeEngine.ECS.Systems.SystemManager.<>c__DisplayClass13_0<object>$$<AddSystem>b__0
; native signature: Il2CppObject* MergeEngine_ECS_Systems_SystemManager___c__DisplayClass13_0_object____AddSystem_b__0 (MergeEngine_ECS_Systems_SystemManager___c__DisplayClass13_0_TSystem__o* __this, const MethodInfo_3F3948C* method);
; bytes=52 sha256=8194513e877b8cf950b8a0f87aa1462e9f2c3019b1d82f838ecf158a7fb2d420 status=arm64_complete_bound indexed_start=True
0x03F3948C: fe0f1ff8  str x30, [sp, #-0x10]!
0x03F39490: 080840f9  ldr x8, [x0, #0x10]
0x03F39494: 480100b4  cbz x8, #0x3f394bc
0x03F39498: 080940f9  ldr x8, [x8, #0x10]
0x03F3949C: 080100b4  cbz x8, #0x3f394bc
0x03F394A0: 291040f9  ldr x9, [x1, #0x20]
0x03F394A4: 010c40f9  ldr x1, [x0, #0x18]
0x03F394A8: e00308aa  mov x0, x8
0x03F394AC: 296140f9  ldr x9, [x9, #0xc0]
0x03F394B0: 220540f9  ldr x2, [x9, #8]
0x03F394B4: fe0741f8  ldr x30, [sp], #0x10
0x03F394B8: 512ef317  b #0x3c04dfc
0x03F394BC: fc1dc997  bl #0x3180cac

