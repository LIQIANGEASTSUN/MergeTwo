; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 991 .SpawningItemsSystem.<>c__DisplayClass29_0<T>
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; Generic instantiation from Il2CppDumper script.json | RVA 0x3F4E744 | MergeEngine.ECS.Systems.Items.Producers.SpawningItemsSystem.<>c__DisplayClass29_0<object>$$.ctor
; native signature: void MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem___c__DisplayClass29_0_object____ctor (MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem___c__DisplayClass29_0_T__o* __this, const MethodInfo_3F4E744* method);
; bytes=8 sha256=e4d50d936f95f79fda759f664f59e86ecd0259a831dd1bcb583f6d9aca04b2c4 status=arm64_complete_bound indexed_start=True
0x03F4E744: e1031faa  mov x1, xzr
0x03F4E748: ad2f5e14  b #0x56da5fc

; Generic instantiation from Il2CppDumper script.json | RVA 0x3F4E74C | MergeEngine.ECS.Systems.Items.Producers.SpawningItemsSystem.<>c__DisplayClass29_0<object>$$<OnItemBoosted>g__OnSlideItemCompleted|0
; native signature: void MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem___c__DisplayClass29_0_object____OnItemBoosted_g__OnSlideItemCompleted_0 (MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem___c__DisplayClass29_0_T__o* __this, Merger_Game_Signal_SlideItemInCompletedSignal_o* signal, const MethodInfo_3F4E74C* method);
; bytes=212 sha256=8da1a5d2650aab4512d79bf09f9303f296a78e47a3cf447d0c1cabfba7bf3f35 status=arm64_complete_bound indexed_start=True
0x03F4E74C: fe0f1df8  str x30, [sp, #-0x30]!
0x03F4E750: f65701a9  stp x22, x21, [sp, #0x10]
0x03F4E754: f44f02a9  stp x20, x19, [sp, #0x20]
0x03F4E758: 56ee01d0  adrp x22, #0x7d18000
0x03F4E75C: c86a4039  ldrb w8, [x22, #0x1a]
0x03F4E760: f40302aa  mov x20, x2
0x03F4E764: f50301aa  mov x21, x1
0x03F4E768: f30300aa  mov x19, x0
0x03F4E76C: 28010037  tbnz w8, #0, #0x3f4e790
0x03F4E770: 60b901d0  adrp x0, #0x767c000
0x03F4E774: 003c41f9  ldr x0, [x0, #0x278]
0x03F4E778: a8c8c897  bl #0x3180a18
0x03F4E77C: 60b901d0  adrp x0, #0x767c000
0x03F4E780: 004041f9  ldr x0, [x0, #0x280]
0x03F4E784: a5c8c897  bl #0x3180a18
0x03F4E788: 28008052  movz w8, #0x1
0x03F4E78C: c86a0039  strb w8, [x22, #0x1a]
0x03F4E790: 750400b4  cbz x21, #0x3f4e81c
0x03F4E794: 610a40f9  ldr x1, [x19, #0x10]
0x03F4E798: a0420091  add x0, x21, #0x10
0x03F4E79C: e2031faa  mov x2, xzr
0x03F4E7A0: d8d9a694  bl #0x6904f00
0x03F4E7A4: 40030036  tbz w0, #0, #0x3f4e80c
0x03F4E7A8: 680e40f9  ldr x8, [x19, #0x18]
0x03F4E7AC: 880300b4  cbz x8, #0x3f4e81c
0x03F4E7B0: 151540f9  ldr x21, [x8, #0x28]
0x03F4E7B4: 68b901d0  adrp x8, #0x767c000
0x03F4E7B8: 083d41f9  ldr x8, [x8, #0x278]
0x03F4E7BC: 000140f9  ldr x0, [x8]
0x03F4E7C0: 38c9c897  bl #0x3180ca0
0x03F4E7C4: 881240f9  ldr x8, [x20, #0x20]
0x03F4E7C8: e10313aa  mov x1, x19
0x03F4E7CC: e3031faa  mov x3, xzr
0x03F4E7D0: f40300aa  mov x20, x0
0x03F4E7D4: 086140f9  ldr x8, [x8, #0xc0]
0x03F4E7D8: 020940f9  ldr x2, [x8, #0x10]
0x03F4E7DC: 7e4e4f94  bl #0x53221d4
0x03F4E7E0: f50100b4  cbz x21, #0x3f4e81c
0x03F4E7E4: 68b901d0  adrp x8, #0x767c000
0x03F4E7E8: 084141f9  ldr x8, [x8, #0x280]
0x03F4E7EC: e00315aa  mov x0, x21
0x03F4E7F0: e10314aa  mov x1, x20
0x03F4E7F4: 020140f9  ldr x2, [x8]
0x03F4E7F8: 845ef997  bl #0x3da6208
0x03F4E7FC: 681240f9  ldr x8, [x19, #0x20]
0x03F4E800: e80000b4  cbz x8, #0x3f4e81c
0x03F4E804: 29008052  movz w9, #0x1
0x03F4E808: 09c10139  strb w9, [x8, #0x70]
0x03F4E80C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03F4E810: f65741a9  ldp x22, x21, [sp, #0x10]
0x03F4E814: fe0743f8  ldr x30, [sp], #0x30
0x03F4E818: c0035fd6  ret
0x03F4E81C: 24c9c897  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3F4E820 | MergeEngine.ECS.Systems.Items.Producers.SpawningItemsSystem.<>c__DisplayClass29_0<object>$$<OnItemBoosted>b__1
; native signature: void MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem___c__DisplayClass29_0_object____OnItemBoosted_b__1 (MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem___c__DisplayClass29_0_T__o* __this, const MethodInfo_3F4E820* method);
; bytes=172 sha256=04be706c0b3df4312637400e9db74776aee45df35765227daa0048872267285c status=arm64_complete_bound indexed_start=True
0x03F4E820: fe0f1df8  str x30, [sp, #-0x30]!
0x03F4E824: f65701a9  stp x22, x21, [sp, #0x10]
0x03F4E828: f44f02a9  stp x20, x19, [sp, #0x20]
0x03F4E82C: 53ee01d0  adrp x19, #0x7d18000
0x03F4E830: 686e4039  ldrb w8, [x19, #0x1b]
0x03F4E834: f40300aa  mov x20, x0
0x03F4E838: 28010037  tbnz w8, #0, #0x3f4e85c
0x03F4E83C: 60b901d0  adrp x0, #0x767c000
0x03F4E840: 004441f9  ldr x0, [x0, #0x288]
0x03F4E844: 75c8c897  bl #0x3180a18
0x03F4E848: 60b901d0  adrp x0, #0x767c000
0x03F4E84C: 004841f9  ldr x0, [x0, #0x290]
0x03F4E850: 72c8c897  bl #0x3180a18
0x03F4E854: 28008052  movz w8, #0x1
0x03F4E858: 686e0039  strb w8, [x19, #0x1b]
0x03F4E85C: 880e40f9  ldr x8, [x20, #0x18]
0x03F4E860: 480300b4  cbz x8, #0x3f4e8c8
0x03F4E864: 69b901d0  adrp x9, #0x767c000
0x03F4E868: 294541f9  ldr x9, [x9, #0x288]
0x03F4E86C: 131540f9  ldr x19, [x8, #0x28]
0x03F4E870: 950a40f9  ldr x21, [x20, #0x10]
0x03F4E874: 962a40b9  ldr w22, [x20, #0x28]
0x03F4E878: 200140f9  ldr x0, [x9]
0x03F4E87C: 09c9c897  bl #0x3180ca0
0x03F4E880: e10315aa  mov x1, x21
0x03F4E884: e203162a  mov w2, w22
0x03F4E888: e3031faa  mov x3, xzr
0x03F4E88C: e4031f2a  mov w4, wzr
0x03F4E890: e5031f2a  mov w5, wzr
0x03F4E894: e6031faa  mov x6, xzr
0x03F4E898: f40300aa  mov x20, x0
0x03F4E89C: 6370a094  bl #0x676aa28
0x03F4E8A0: 530100b4  cbz x19, #0x3f4e8c8
0x03F4E8A4: 68b901d0  adrp x8, #0x767c000
0x03F4E8A8: 084941f9  ldr x8, [x8, #0x290]
0x03F4E8AC: e00313aa  mov x0, x19
0x03F4E8B0: e10314aa  mov x1, x20
0x03F4E8B4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03F4E8B8: 020140f9  ldr x2, [x8]
0x03F4E8BC: f65741a9  ldp x22, x21, [sp, #0x10]
0x03F4E8C0: fe0743f8  ldr x30, [sp], #0x30
0x03F4E8C4: 2a59f917  b #0x3da4d6c
0x03F4E8C8: f9c8c897  bl #0x3180cac

