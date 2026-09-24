; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 10917 .RepositoryBase.<>c__DisplayClass39_0<TResponse>
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; Generic instantiation from Il2CppDumper script.json | RVA 0x4B07630 | Framework.Core.Services.Backend.Repositories.RepositoryBase.<>c__DisplayClass39_0<__Il2CppFullySharedGenericType>$$.ctor
; native signature: void Framework_Core_Services_Backend_Repositories_RepositoryBase___c__DisplayClass39_0___Il2CppFullySharedGenericType____ctor (Framework_Core_Services_Backend_Repositories_RepositoryBase___c__DisplayClass39_0_TResponse__o* __this, const MethodInfo_4B07630* method);
; bytes=8 sha256=1a552202a2580653f666b9577b30f4b0283fd432627f86d1cb99863bf3947eb0 status=arm64_complete_bound indexed_start=True
0x04B07630: e1031faa  mov x1, xzr
0x04B07634: f24b2f14  b #0x56da5fc

; Generic instantiation from Il2CppDumper script.json | RVA 0x4B07638 | Framework.Core.Services.Backend.Repositories.RepositoryBase.<>c__DisplayClass39_0<__Il2CppFullySharedGenericType>$$<WebsocketRequest>b__0
; native signature: void Framework_Core_Services_Backend_Repositories_RepositoryBase___c__DisplayClass39_0___Il2CppFullySharedGenericType____WebsocketRequest_b__0 (Framework_Core_Services_Backend_Repositories_RepositoryBase___c__DisplayClass39_0_TResponse__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o response, const MethodInfo_4B07638* method);
; bytes=196 sha256=b379318947901ec248b19a5590b4dd71fa1c099970ec8b331627c0de15daca4f status=arm64_complete_bound indexed_start=True
0x04B07638: fd7bbda9  stp x29, x30, [sp, #-0x30]!
0x04B0763C: f65701a9  stp x22, x21, [sp, #0x10]
0x04B07640: f44f02a9  stp x20, x19, [sp, #0x20]
0x04B07644: fd030091  mov x29, sp
0x04B07648: ff8300d1  sub sp, sp, #0x20
0x04B0764C: 55d03bd5  mrs x21, tpidr_el0
0x04B07650: a81640f9  ldr x8, [x21, #0x28]
0x04B07654: e9030091  mov x9, sp
0x04B07658: a8831ff8  stur x8, [x29, #-8]
0x04B0765C: a1831ef8  stur x1, [x29, #-0x18]
0x04B07660: 561040f9  ldr x22, [x2, #0x20]
0x04B07664: c86240f9  ldr x8, [x22, #0xc0]
0x04B07668: 080940f9  ldr x8, [x8, #0x10]
0x04B0766C: 02fd40b9  ldr w2, [x8, #0xfc]
0x04B07670: 4a3c0091  add x10, x2, #0xf
0x04B07674: 4a717c92  and x10, x10, #0x1fffffff0
0x04B07678: 33010acb  sub x19, x9, x10
0x04B0767C: 7f020091  mov sp, x19
0x04B07680: 082940b9  ldr w8, [x8, #0x28]
0x04B07684: 140840f9  ldr x20, [x0, #0x10]
0x04B07688: e00313aa  mov x0, x19
0x04B0768C: 1f010071  cmp w8, #0
0x04B07690: a86300d1  sub x8, x29, #0x18
0x04B07694: 21b0889a  csel x1, x1, x8, lt
0x04B07698: b61c9b94  bl #0x71ce970
0x04B0769C: d40200b4  cbz x20, #0x4b076f4
0x04B076A0: c86240f9  ldr x8, [x22, #0xc0]
0x04B076A4: 090541a9  ldp x9, x1, [x8, #0x10]
0x04B076A8: 282940b9  ldr w8, [x9, #0x28]
0x04B076AC: 200040f9  ldr x0, [x1]
0x04B076B0: 4800f837  tbnz w8, #0x1f, #0x4b076b8
0x04B076B4: 730240f9  ldr x19, [x19]
0x04B076B8: b3031ff8  stur x19, [x29, #-0x10]
0x04B076BC: 280840f9  ldr x8, [x1, #0x10]
0x04B076C0: a34300d1  sub x3, x29, #0x10
0x04B076C4: e20314aa  mov x2, x20
0x04B076C8: e40313aa  mov x4, x19
0x04B076CC: 00013fd6  blr x8
0x04B076D0: a81640f9  ldr x8, [x21, #0x28]
0x04B076D4: a9835ff8  ldur x9, [x29, #-8]
0x04B076D8: 1f0109eb  cmp x8, x9
0x04B076DC: e1000054  b.ne #0x4b076f8
0x04B076E0: bf030091  mov sp, x29
0x04B076E4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x04B076E8: f65741a9  ldp x22, x21, [sp, #0x10]
0x04B076EC: fd7bc3a8  ldp x29, x30, [sp], #0x30
0x04B076F0: c0035fd6  ret
0x04B076F4: 6ee59997  bl #0x3180cac
0x04B076F8: a61c9b94  bl #0x71ce990

; Generic instantiation from Il2CppDumper script.json | RVA 0x4B076FC | Framework.Core.Services.Backend.Repositories.RepositoryBase.<>c__DisplayClass39_0<__Il2CppFullySharedGenericType>$$<WebsocketRequest>b__1
; native signature: void Framework_Core_Services_Backend_Repositories_RepositoryBase___c__DisplayClass39_0___Il2CppFullySharedGenericType____WebsocketRequest_b__1 (Framework_Core_Services_Backend_Repositories_RepositoryBase___c__DisplayClass39_0_TResponse__o* __this, System_Exception_o* exception, const MethodInfo_4B076FC* method);
; bytes=28 sha256=08a5dd904f78e4b7124a1d676d3c7e3bcc735ceb11d10f9947949df13f901069 status=arm64_complete_bound indexed_start=True
0x04B076FC: fe0f1ff8  str x30, [sp, #-0x10]!
0x04B07700: 000840f9  ldr x0, [x0, #0x10]
0x04B07704: 800000b4  cbz x0, #0x4b07714
0x04B07708: e2031faa  mov x2, xzr
0x04B0770C: fe0741f8  ldr x30, [sp], #0x10
0x04B07710: cbe43a14  b #0x59c0a3c
0x04B07714: 66e59997  bl #0x3180cac

