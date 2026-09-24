; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 10919 .RepositoryBase.<>c__DisplayClass42_0<TRequest>
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; Generic instantiation from Il2CppDumper script.json | RVA 0x4B0AED4 | Framework.Core.Services.Backend.Repositories.RepositoryBase.<>c__DisplayClass42_0<__Il2CppFullySharedGenericType>$$.ctor
; native signature: void Framework_Core_Services_Backend_Repositories_RepositoryBase___c__DisplayClass42_0___Il2CppFullySharedGenericType____ctor (Framework_Core_Services_Backend_Repositories_RepositoryBase___c__DisplayClass42_0_TRequest__o* __this, const MethodInfo_4B0AED4* method);
; bytes=8 sha256=d8386d686bae98caefb5966264a5854c4c2435c92a3291d661f90e544d7f9524 status=arm64_complete_bound indexed_start=True
0x04B0AED4: e1031faa  mov x1, xzr
0x04B0AED8: c93d2f14  b #0x56da5fc

; Generic instantiation from Il2CppDumper script.json | RVA 0x4B0AEDC | Framework.Core.Services.Backend.Repositories.RepositoryBase.<>c__DisplayClass42_0<__Il2CppFullySharedGenericType>$$<Delete>b__0
; native signature: void Framework_Core_Services_Backend_Repositories_RepositoryBase___c__DisplayClass42_0___Il2CppFullySharedGenericType____Delete_b__0 (Framework_Core_Services_Backend_Repositories_RepositoryBase___c__DisplayClass42_0_TRequest__o* __this, Framework_Core_Services_Backend_Http_Data_HttpResponse_o* __, const MethodInfo_4B0AEDC* method);
; bytes=164 sha256=202b22766b25fa7cc0fbae568840e22bfe71236b82009618207b772157361d74 status=arm64_complete_bound indexed_start=True
0x04B0AEDC: fe0f1ef8  str x30, [sp, #-0x20]!
0x04B0AEE0: f44f01a9  stp x20, x19, [sp, #0x10]
0x04B0AEE4: 94900190  adrp x20, #0x7d1a000
0x04B0AEE8: 888e5439  ldrb w8, [x20, #0x523]
0x04B0AEEC: f30300aa  mov x19, x0
0x04B0AEF0: c8000037  tbnz w8, #0, #0x4b0af08
0x04B0AEF4: 205b01f0  adrp x0, #0x7671000
0x04B0AEF8: 006047f9  ldr x0, [x0, #0xec0]
0x04B0AEFC: c7d69997  bl #0x3180a18
0x04B0AF00: 28008052  movz w8, #0x1
0x04B0AF04: 888e1439  strb w8, [x20, #0x523]
0x04B0AF08: 730a40f9  ldr x19, [x19, #0x10]
0x04B0AF0C: 930300b4  cbz x19, #0x4b0af7c
0x04B0AF10: 2a5b01f0  adrp x10, #0x7671000
0x04B0AF14: 680240f9  ldr x8, [x19]
0x04B0AF18: 4a6147f9  ldr x10, [x10, #0xec0]
0x04B0AF1C: 095d4279  ldrh w9, [x8, #0x12e]
0x04B0AF20: 410140f9  ldr x1, [x10]
0x04B0AF24: 290100b4  cbz x9, #0x4b0af48
0x04B0AF28: 0a5940f9  ldr x10, [x8, #0xb0]
0x04B0AF2C: 4a210091  add x10, x10, #8
0x04B0AF30: 4b815ff8  ldur x11, [x10, #-8]
0x04B0AF34: 7f0101eb  cmp x11, x1
0x04B0AF38: 00010054  b.eq #0x4b0af58
0x04B0AF3C: 290500f1  subs x9, x9, #1
0x04B0AF40: 4a410091  add x10, x10, #0x10
0x04B0AF44: 61ffff54  b.ne #0x4b0af30
0x04B0AF48: 22008052  movz w2, #0x1
0x04B0AF4C: e00313aa  mov x0, x19
0x04B0AF50: f02e9997  bl #0x3156b10
0x04B0AF54: 05000014  b #0x4b0af68
0x04B0AF58: 490140b9  ldr w9, [x10]
0x04B0AF5C: 29050011  add w9, w9, #1
0x04B0AF60: 08d1298b  add x8, x8, w9, sxtw #4
0x04B0AF64: 00e10491  add x0, x8, #0x138
0x04B0AF68: 020440a9  ldp x2, x1, [x0]
0x04B0AF6C: e00313aa  mov x0, x19
0x04B0AF70: f44f41a9  ldp x20, x19, [sp, #0x10]
0x04B0AF74: fe0742f8  ldr x30, [sp], #0x20
0x04B0AF78: 40001fd6  br x2
0x04B0AF7C: 4cd79997  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4B0AF80 | Framework.Core.Services.Backend.Repositories.RepositoryBase.<>c__DisplayClass42_0<__Il2CppFullySharedGenericType>$$<Delete>b__1
; native signature: void Framework_Core_Services_Backend_Repositories_RepositoryBase___c__DisplayClass42_0___Il2CppFullySharedGenericType____Delete_b__1 (Framework_Core_Services_Backend_Repositories_RepositoryBase___c__DisplayClass42_0_TRequest__o* __this, System_Exception_o* exception, const MethodInfo_4B0AF80* method);
; bytes=172 sha256=ad7d8e89c459df195c2f17f05c0b1ef9ace483bfd2ca0f474d3425a074598702 status=arm64_complete_bound indexed_start=True
0x04B0AF80: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x04B0AF84: f44f01a9  stp x20, x19, [sp, #0x10]
0x04B0AF88: 95900190  adrp x21, #0x7d1a000
0x04B0AF8C: a8925439  ldrb w8, [x21, #0x524]
0x04B0AF90: f30301aa  mov x19, x1
0x04B0AF94: f40300aa  mov x20, x0
0x04B0AF98: c8000037  tbnz w8, #0, #0x4b0afb0
0x04B0AF9C: 205b01b0  adrp x0, #0x766f000
0x04B0AFA0: 002441f9  ldr x0, [x0, #0x248]
0x04B0AFA4: 9dd69997  bl #0x3180a18
0x04B0AFA8: 28008052  movz w8, #0x1
0x04B0AFAC: a8921439  strb w8, [x21, #0x524]
0x04B0AFB0: 940a40f9  ldr x20, [x20, #0x10]
0x04B0AFB4: b40300b4  cbz x20, #0x4b0b028
0x04B0AFB8: 2a5b01b0  adrp x10, #0x766f000
0x04B0AFBC: 880240f9  ldr x8, [x20]
0x04B0AFC0: 4a2541f9  ldr x10, [x10, #0x248]
0x04B0AFC4: 095d4279  ldrh w9, [x8, #0x12e]
0x04B0AFC8: 410140f9  ldr x1, [x10]
0x04B0AFCC: 290100b4  cbz x9, #0x4b0aff0
0x04B0AFD0: 0a5940f9  ldr x10, [x8, #0xb0]
0x04B0AFD4: 4a210091  add x10, x10, #8
0x04B0AFD8: 4b815ff8  ldur x11, [x10, #-8]
0x04B0AFDC: 7f0101eb  cmp x11, x1
0x04B0AFE0: 00010054  b.eq #0x4b0b000
0x04B0AFE4: 290500f1  subs x9, x9, #1
0x04B0AFE8: 4a410091  add x10, x10, #0x10
0x04B0AFEC: 61ffff54  b.ne #0x4b0afd8
0x04B0AFF0: 82008052  movz w2, #0x4
0x04B0AFF4: e00314aa  mov x0, x20
0x04B0AFF8: c62e9997  bl #0x3156b10
0x04B0AFFC: 05000014  b #0x4b0b010
0x04B0B000: 490140b9  ldr w9, [x10]
0x04B0B004: 29110011  add w9, w9, #4
0x04B0B008: 08d1298b  add x8, x8, w9, sxtw #4
0x04B0B00C: 00e10491  add x0, x8, #0x138
0x04B0B010: 030840a9  ldp x3, x2, [x0]
0x04B0B014: e00314aa  mov x0, x20
0x04B0B018: e10313aa  mov x1, x19
0x04B0B01C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x04B0B020: fe57c2a8  ldp x30, x21, [sp], #0x20
0x04B0B024: 60001fd6  br x3
0x04B0B028: 21d79997  bl #0x3180cac

