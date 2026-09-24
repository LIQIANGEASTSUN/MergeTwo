; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 11214 .ViewModelBase.<>c__12<T>
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; Generic instantiation from Il2CppDumper script.json | RVA 0x3F287E0 | Framework.Core.MVVM.ViewModel.ViewModelBase.<>c__12<object>$$.cctor
; native signature: void Framework_Core_MVVM_ViewModel_ViewModelBase___c__12_object____cctor (const MethodInfo_3F287E0* method);
; bytes=188 sha256=c95a138e2a8a819113bde62ed73d014c8bee4508ffff9ebe42d88246e48a6d8b status=arm64_complete_bound indexed_start=True
0x03F287E0: fe0f1ef8  str x30, [sp, #-0x20]!
0x03F287E4: f44f01a9  stp x20, x19, [sp, #0x10]
0x03F287E8: f30300aa  mov x19, x0
0x03F287EC: 001040f9  ldr x0, [x0, #0x20]
0x03F287F0: 08d44439  ldrb w8, [x0, #0x135]
0x03F287F4: 48000037  tbnz w8, #0, #0x3f287fc
0x03F287F8: 09b8c897  bl #0x315681c
0x03F287FC: 086040f9  ldr x8, [x0, #0xc0]
0x03F28800: 000140f9  ldr x0, [x8]
0x03F28804: 08d44439  ldrb w8, [x0, #0x135]
0x03F28808: 48000037  tbnz w8, #0, #0x3f28810
0x03F2880C: 04b8c897  bl #0x315681c
0x03F28810: 2461c997  bl #0x3180ca0
0x03F28814: 681240f9  ldr x8, [x19, #0x20]
0x03F28818: f40300aa  mov x20, x0
0x03F2881C: 09d54439  ldrb w9, [x8, #0x135]
0x03F28820: 69000037  tbnz w9, #0, #0x3f2882c
0x03F28824: e00308aa  mov x0, x8
0x03F28828: fdb7c897  bl #0x315681c
0x03F2882C: e00314aa  mov x0, x20
0x03F28830: e1031faa  mov x1, xzr
0x03F28834: 72c75e94  bl #0x56da5fc
0x03F28838: 601240f9  ldr x0, [x19, #0x20]
0x03F2883C: 08d44439  ldrb w8, [x0, #0x135]
0x03F28840: 48000037  tbnz w8, #0, #0x3f28848
0x03F28844: f6b7c897  bl #0x315681c
0x03F28848: 086040f9  ldr x8, [x0, #0xc0]
0x03F2884C: 000940f9  ldr x0, [x8, #0x10]
0x03F28850: 08d44439  ldrb w8, [x0, #0x135]
0x03F28854: 48000037  tbnz w8, #0, #0x3f2885c
0x03F28858: f1b7c897  bl #0x315681c
0x03F2885C: 085c40f9  ldr x8, [x0, #0xb8]
0x03F28860: 140100f9  str x20, [x8]
0x03F28864: 601240f9  ldr x0, [x19, #0x20]
0x03F28868: 08d44439  ldrb w8, [x0, #0x135]
0x03F2886C: 48000037  tbnz w8, #0, #0x3f28874
0x03F28870: ebb7c897  bl #0x315681c
0x03F28874: 086040f9  ldr x8, [x0, #0xc0]
0x03F28878: 000940f9  ldr x0, [x8, #0x10]
0x03F2887C: 08d44439  ldrb w8, [x0, #0x135]
0x03F28880: 48000037  tbnz w8, #0, #0x3f28888
0x03F28884: e6b7c897  bl #0x315681c
0x03F28888: 005c40f9  ldr x0, [x0, #0xb8]
0x03F2888C: e10314aa  mov x1, x20
0x03F28890: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03F28894: fe0742f8  ldr x30, [sp], #0x20
0x03F28898: 4b60c917  b #0x31809c4

; Generic instantiation from Il2CppDumper script.json | RVA 0x3F2889C | Framework.Core.MVVM.ViewModel.ViewModelBase.<>c__12<object>$$.ctor
; native signature: void Framework_Core_MVVM_ViewModel_ViewModelBase___c__12_object____ctor (Framework_Core_MVVM_ViewModel_ViewModelBase___c__12_T__o* __this, const MethodInfo_3F2889C* method);
; bytes=8 sha256=6634f43d43fc8447dc77466a7b6d43df0b2fc6a06ab0cdef58760f4ce2c4cb4d status=arm64_complete_bound indexed_start=True
0x03F2889C: e1031faa  mov x1, xzr
0x03F288A0: 57c75e14  b #0x56da5fc

; Generic instantiation from Il2CppDumper script.json | RVA 0x3F288A4 | Framework.Core.MVVM.ViewModel.ViewModelBase.<>c__12<object>$$<LoadAssetAsync>b__12_0
; native signature: void Framework_Core_MVVM_ViewModel_ViewModelBase___c__12_object____LoadAssetAsync_b__12_0 (Framework_Core_MVVM_ViewModel_ViewModelBase___c__12_T__o* __this, System_Exception_o* exception, const MethodInfo_3F288A4* method);
; bytes=208 sha256=10bb876b1d5bee940e16f035a8d715cb61b7579523dd709220ec3e8c3f2bb78b status=arm64_complete_bound indexed_start=True
0x03F288A4: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x03F288A8: f65701a9  stp x22, x21, [sp, #0x10]
0x03F288AC: f44f02a9  stp x20, x19, [sp, #0x20]
0x03F288B0: 74ef01f0  adrp x20, #0x7d17000
0x03F288B4: 88067d39  ldrb w8, [x20, #0xf41]
0x03F288B8: f30301aa  mov x19, x1
0x03F288BC: e8010037  tbnz w8, #0, #0x3f288f8
0x03F288C0: 20ba01b0  adrp x0, #0x766d000
0x03F288C4: 006c46f9  ldr x0, [x0, #0xcd8]
0x03F288C8: 5460c997  bl #0x3180a18
0x03F288CC: a0ba0190  adrp x0, #0x767c000
0x03F288D0: 002040f9  ldr x0, [x0, #0x40]
0x03F288D4: 5160c997  bl #0x3180a18
0x03F288D8: a0ba0190  adrp x0, #0x767c000
0x03F288DC: 002440f9  ldr x0, [x0, #0x48]
0x03F288E0: 4e60c997  bl #0x3180a18
0x03F288E4: 40b90190  adrp x0, #0x7650000
0x03F288E8: 00dc41f9  ldr x0, [x0, #0x3b8]
0x03F288EC: 4b60c997  bl #0x3180a18
0x03F288F0: 28008052  movz w8, #0x1
0x03F288F4: 88063d39  strb w8, [x20, #0xf41]
0x03F288F8: d30300b4  cbz x19, #0x3f28970
0x03F288FC: 680240f9  ldr x8, [x19]
0x03F28900: 37ba01b0  adrp x23, #0x766d000
0x03F28904: f76e46f9  ldr x23, [x23, #0xcd8]
0x03F28908: 56b90190  adrp x22, #0x7650000
0x03F2890C: 098558a9  ldp x9, x1, [x8, #0x188]
0x03F28910: b5ba0190  adrp x21, #0x767c000
0x03F28914: b4ba0190  adrp x20, #0x767c000
0x03F28918: d6de41f9  ldr x22, [x22, #0x3b8]
0x03F2891C: b52240f9  ldr x21, [x21, #0x40]
0x03F28920: 942640f9  ldr x20, [x20, #0x48]
0x03F28924: e00313aa  mov x0, x19
0x03F28928: 20013fd6  blr x9
0x03F2892C: e80240f9  ldr x8, [x23]
0x03F28930: f30300aa  mov x19, x0
0x03F28934: 09e140b9  ldr w9, [x8, #0xe0]
0x03F28938: 69000035  cbnz w9, #0x3f28944
0x03F2893C: e00308aa  mov x0, x8
0x03F28940: 9360c997  bl #0x3180b8c
0x03F28944: c10240f9  ldr x1, [x22]
0x03F28948: a30240f9  ldr x3, [x21]
0x03F2894C: 840240f9  ldr x4, [x20]
0x03F28950: e00313aa  mov x0, x19
0x03F28954: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03F28958: f65741a9  ldp x22, x21, [sp, #0x10]
0x03F2895C: e2031faa  mov x2, xzr
0x03F28960: e5031faa  mov x5, xzr
0x03F28964: e6031faa  mov x6, xzr
0x03F28968: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x03F2896C: b20e5514  b #0x546c434
0x03F28970: cf60c997  bl #0x3180cac

