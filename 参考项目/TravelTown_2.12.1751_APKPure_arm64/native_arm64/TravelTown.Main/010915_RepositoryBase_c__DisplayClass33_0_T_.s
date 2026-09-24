; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 10915 .RepositoryBase.<>c__DisplayClass33_0<T>
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; Generic instantiation from Il2CppDumper script.json | RVA 0x3F55028 | Framework.Core.Services.Backend.Repositories.RepositoryBase.<>c__DisplayClass33_0<object>$$.ctor
; native signature: void Framework_Core_Services_Backend_Repositories_RepositoryBase___c__DisplayClass33_0_object____ctor (Framework_Core_Services_Backend_Repositories_RepositoryBase___c__DisplayClass33_0_T__o* __this, const MethodInfo_3F55028* method);
; bytes=8 sha256=1eea25396112da7acd322af2d8fb05487a22f41d14050a57a03c3bb63892f46a status=arm64_complete_bound indexed_start=True
0x03F55028: e1031faa  mov x1, xzr
0x03F5502C: 74155e14  b #0x56da5fc

; Generic instantiation from Il2CppDumper script.json | RVA 0x3F5577C | Framework.Core.Services.Backend.Repositories.RepositoryBase.<>c__DisplayClass33_0<__Il2CppFullySharedGenericType>$$.ctor
; native signature: void Framework_Core_Services_Backend_Repositories_RepositoryBase___c__DisplayClass33_0___Il2CppFullySharedGenericType____ctor (Framework_Core_Services_Backend_Repositories_RepositoryBase___c__DisplayClass33_0_T__o* __this, const MethodInfo_3F5577C* method);
; bytes=8 sha256=09698930de48b84a6a181b4e978f8ae7b9272541a8ddec77837c1cbd573263b5 status=arm64_complete_bound indexed_start=True
0x03F5577C: e1031faa  mov x1, xzr
0x03F55780: 9f135e14  b #0x56da5fc

; Generic instantiation from Il2CppDumper script.json | RVA 0x3F55030 | Framework.Core.Services.Backend.Repositories.RepositoryBase.<>c__DisplayClass33_0<object>$$<ConvertToObjectInternal>b__0
; native signature: void Framework_Core_Services_Backend_Repositories_RepositoryBase___c__DisplayClass33_0_object____ConvertToObjectInternal_b__0 (Framework_Core_Services_Backend_Repositories_RepositoryBase___c__DisplayClass33_0_T__o* __this, Il2CppObject* obj, const MethodInfo_3F55030* method);
; bytes=252 sha256=f2423224f007076cf30fdfbb8e8662691f2c29077396a689b25c8cd44f157bdb status=arm64_complete_bound indexed_start=True
0x03F55030: fe0f1bf8  str x30, [sp, #-0x50]!
0x03F55034: fa6701a9  stp x26, x25, [sp, #0x10]
0x03F55038: f85f02a9  stp x24, x23, [sp, #0x20]
0x03F5503C: f65703a9  stp x22, x21, [sp, #0x30]
0x03F55040: f44f04a9  stp x20, x19, [sp, #0x40]
0x03F55044: 16ee01f0  adrp x22, #0x7d18000
0x03F55048: c8364139  ldrb w8, [x22, #0x4d]
0x03F5504C: f40302aa  mov x20, x2
0x03F55050: f30301aa  mov x19, x1
0x03F55054: f50300aa  mov x21, x0
0x03F55058: 28010037  tbnz w8, #0, #0x3f5507c
0x03F5505C: 20b901d0  adrp x0, #0x767b000
0x03F55060: 000c41f9  ldr x0, [x0, #0x218]
0x03F55064: 6daec897  bl #0x3180a18
0x03F55068: 20b901d0  adrp x0, #0x767b000
0x03F5506C: 001041f9  ldr x0, [x0, #0x220]
0x03F55070: 6aaec897  bl #0x3180a18
0x03F55074: 28008052  movz w8, #0x1
0x03F55078: c8360139  strb w8, [x22, #0x4d]
0x03F5507C: a00a40f9  ldr x0, [x21, #0x10]
0x03F55080: 400500b4  cbz x0, #0x3f55128
0x03F55084: e1031faa  mov x1, xzr
0x03F55088: 9fb57994  bl #0x5dc2704
0x03F5508C: a80e40f9  ldr x8, [x21, #0x18]
0x03F55090: c80400b4  cbz x8, #0x3f55128
0x03F55094: a00a40f9  ldr x0, [x21, #0x10]
0x03F55098: 800400b4  cbz x0, #0x3f55128
0x03F5509C: 37b901d0  adrp x23, #0x767b000
0x03F550A0: 162540f9  ldr x22, [x8, #0x48]
0x03F550A4: b81240f9  ldr x24, [x21, #0x20]
0x03F550A8: f70e41f9  ldr x23, [x23, #0x218]
0x03F550AC: e1031faa  mov x1, xzr
0x03F550B0: 3fb57994  bl #0x5dc25ac
0x03F550B4: e80240f9  ldr x8, [x23]
0x03F550B8: b9a24039  ldrb w25, [x21, #0x28]
0x03F550BC: fa0300aa  mov x26, x0
0x03F550C0: e00308aa  mov x0, x8
0x03F550C4: f7aec897  bl #0x3180ca0
0x03F550C8: 4003229e  scvtf s0, x26
0x03F550CC: e10318aa  mov x1, x24
0x03F550D0: e203192a  mov w2, w25
0x03F550D4: e3031faa  mov x3, xzr
0x03F550D8: f70300aa  mov x23, x0
0x03F550DC: ad24a794  bl #0x691e390
0x03F550E0: 560200b4  cbz x22, #0x3f55128
0x03F550E4: 28b901d0  adrp x8, #0x767b000
0x03F550E8: 081141f9  ldr x8, [x8, #0x220]
0x03F550EC: e00316aa  mov x0, x22
0x03F550F0: e10317aa  mov x1, x23
0x03F550F4: 020140f9  ldr x2, [x8]
0x03F550F8: 1d3ff997  bl #0x3da4d6c
0x03F550FC: 881240f9  ldr x8, [x20, #0x20]
0x03F55100: e00315aa  mov x0, x21
0x03F55104: e10313aa  mov x1, x19
0x03F55108: f44f44a9  ldp x20, x19, [sp, #0x40]
0x03F5510C: 086140f9  ldr x8, [x8, #0xc0]
0x03F55110: f65743a9  ldp x22, x21, [sp, #0x30]
0x03F55114: f85f42a9  ldp x24, x23, [sp, #0x20]
0x03F55118: fa6741a9  ldp x26, x25, [sp, #0x10]
0x03F5511C: 020940f9  ldr x2, [x8, #0x10]
0x03F55120: fe0745f8  ldr x30, [sp], #0x50
0x03F55124: 02000014  b #0x3f5512c
0x03F55128: e1aec897  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3F55784 | Framework.Core.Services.Backend.Repositories.RepositoryBase.<>c__DisplayClass33_0<__Il2CppFullySharedGenericType>$$<ConvertToObjectInternal>b__0
; native signature: void Framework_Core_Services_Backend_Repositories_RepositoryBase___c__DisplayClass33_0___Il2CppFullySharedGenericType____ConvertToObjectInternal_b__0 (Framework_Core_Services_Backend_Repositories_RepositoryBase___c__DisplayClass33_0_T__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o obj, const MethodInfo_3F55784* method);
; bytes=420 sha256=35f06b493904f7145e8fdcb9489d0989a0810185a00e256a1bf61e6b7b77801d status=arm64_complete_bound indexed_start=True
0x03F55784: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x03F55788: fc6f01a9  stp x28, x27, [sp, #0x10]
0x03F5578C: fa6702a9  stp x26, x25, [sp, #0x20]
0x03F55790: f85f03a9  stp x24, x23, [sp, #0x30]
0x03F55794: f65704a9  stp x22, x21, [sp, #0x40]
0x03F55798: f44f05a9  stp x20, x19, [sp, #0x50]
0x03F5579C: fd030091  mov x29, sp
0x03F557A0: ff8300d1  sub sp, sp, #0x20
0x03F557A4: 58d03bd5  mrs x24, tpidr_el0
0x03F557A8: 081740f9  ldr x8, [x24, #0x28]
0x03F557AC: 15ee01f0  adrp x21, #0x7d18000
0x03F557B0: f60302aa  mov x22, x2
0x03F557B4: f40301aa  mov x20, x1
0x03F557B8: a8831ff8  stur x8, [x29, #-8]
0x03F557BC: a83e4139  ldrb w8, [x21, #0x4f]
0x03F557C0: f30300aa  mov x19, x0
0x03F557C4: a1831ef8  stur x1, [x29, #-0x18]
0x03F557C8: 28010037  tbnz w8, #0, #0x3f557ec
0x03F557CC: 20b901d0  adrp x0, #0x767b000
0x03F557D0: 000c41f9  ldr x0, [x0, #0x218]
0x03F557D4: 91acc897  bl #0x3180a18
0x03F557D8: 20b901d0  adrp x0, #0x767b000
0x03F557DC: 001041f9  ldr x0, [x0, #0x220]
0x03F557E0: 8eacc897  bl #0x3180a18
0x03F557E4: 28008052  movz w8, #0x1
0x03F557E8: a83e0139  strb w8, [x21, #0x4f]
0x03F557EC: c81240f9  ldr x8, [x22, #0x20]
0x03F557F0: 086140f9  ldr x8, [x8, #0xc0]
0x03F557F4: 080540f9  ldr x8, [x8, #8]
0x03F557F8: 17fd40b9  ldr w23, [x8, #0xfc]
0x03F557FC: e8030091  mov x8, sp
0x03F55800: e93e0091  add x9, x23, #0xf
0x03F55804: 29717c92  and x9, x9, #0x1fffffff0
0x03F55808: 150109cb  sub x21, x8, x9
0x03F5580C: bf020091  mov sp, x21
0x03F55810: 600a40f9  ldr x0, [x19, #0x10]
0x03F55814: 600800b4  cbz x0, #0x3f55920
0x03F55818: e1031faa  mov x1, xzr
0x03F5581C: bab37994  bl #0x5dc2704
0x03F55820: 680e40f9  ldr x8, [x19, #0x18]
0x03F55824: e80700b4  cbz x8, #0x3f55920
0x03F55828: 600a40f9  ldr x0, [x19, #0x10]
0x03F5582C: b8031ef8  stur x24, [x29, #-0x20]
0x03F55830: 800700b4  cbz x0, #0x3f55920
0x03F55834: 39b901d0  adrp x25, #0x767b000
0x03F55838: 182540f9  ldr x24, [x8, #0x48]
0x03F5583C: 7a1240f9  ldr x26, [x19, #0x20]
0x03F55840: 390f41f9  ldr x25, [x25, #0x218]
0x03F55844: e1031faa  mov x1, xzr
0x03F55848: 59b37994  bl #0x5dc25ac
0x03F5584C: 280340f9  ldr x8, [x25]
0x03F55850: 7ba24039  ldrb w27, [x19, #0x28]
0x03F55854: fc0300aa  mov x28, x0
0x03F55858: e00308aa  mov x0, x8
0x03F5585C: 11adc897  bl #0x3180ca0
0x03F55860: 8003229e  scvtf s0, x28
0x03F55864: e1031aaa  mov x1, x26
0x03F55868: e2031b2a  mov w2, w27
0x03F5586C: e3031faa  mov x3, xzr
0x03F55870: f90300aa  mov x25, x0
0x03F55874: c722a794  bl #0x691e390
0x03F55878: 580500b4  cbz x24, #0x3f55920
0x03F5587C: 28b901d0  adrp x8, #0x767b000
0x03F55880: 081141f9  ldr x8, [x8, #0x220]
0x03F55884: e00318aa  mov x0, x24
0x03F55888: e10319aa  mov x1, x25
0x03F5588C: 020140f9  ldr x2, [x8]
0x03F55890: 373df997  bl #0x3da4d6c
0x03F55894: d61240f9  ldr x22, [x22, #0x20]
0x03F55898: e00315aa  mov x0, x21
0x03F5589C: e20317aa  mov x2, x23
0x03F558A0: c86240f9  ldr x8, [x22, #0xc0]
0x03F558A4: 080540f9  ldr x8, [x8, #8]
0x03F558A8: 082940b9  ldr w8, [x8, #0x28]
0x03F558AC: 1f010071  cmp w8, #0
0x03F558B0: a86300d1  sub x8, x29, #0x18
0x03F558B4: 81b2889a  csel x1, x20, x8, lt
0x03F558B8: 2ee4c994  bl #0x71ce970
0x03F558BC: c86240f9  ldr x8, [x22, #0xc0]
0x03F558C0: 098540a9  ldp x9, x1, [x8, #8]
0x03F558C4: 282940b9  ldr w8, [x9, #0x28]
0x03F558C8: 200040f9  ldr x0, [x1]
0x03F558CC: 4800f837  tbnz w8, #0x1f, #0x3f558d4
0x03F558D0: b50240f9  ldr x21, [x21]
0x03F558D4: b5031ff8  stur x21, [x29, #-0x10]
0x03F558D8: 280840f9  ldr x8, [x1, #0x10]
0x03F558DC: b4035ef8  ldur x20, [x29, #-0x20]
0x03F558E0: a34300d1  sub x3, x29, #0x10
0x03F558E4: e20313aa  mov x2, x19
0x03F558E8: e40315aa  mov x4, x21
0x03F558EC: 00013fd6  blr x8
0x03F558F0: 881640f9  ldr x8, [x20, #0x28]
0x03F558F4: a9835ff8  ldur x9, [x29, #-8]
0x03F558F8: 1f0109eb  cmp x8, x9
0x03F558FC: 41010054  b.ne #0x3f55924
0x03F55900: bf030091  mov sp, x29
0x03F55904: f44f45a9  ldp x20, x19, [sp, #0x50]
0x03F55908: f65744a9  ldp x22, x21, [sp, #0x40]
0x03F5590C: f85f43a9  ldp x24, x23, [sp, #0x30]
0x03F55910: fa6742a9  ldp x26, x25, [sp, #0x20]
0x03F55914: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x03F55918: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x03F5591C: c0035fd6  ret
0x03F55920: e3acc897  bl #0x3180cac
0x03F55924: 1be4c994  bl #0x71ce990

; Generic instantiation from Il2CppDumper script.json | RVA 0x3F5512C | Framework.Core.Services.Backend.Repositories.RepositoryBase.<>c__DisplayClass33_0<object>$$<ConvertToObjectInternal>g__HandleDeserializedResponse|1
; native signature: void Framework_Core_Services_Backend_Repositories_RepositoryBase___c__DisplayClass33_0_object____ConvertToObjectInternal_g__HandleDeserializedResponse_1 (Framework_Core_Services_Backend_Repositories_RepositoryBase___c__DisplayClass33_0_T__o* __this, Il2CppObject* deserializedResponse, const MethodInfo_3F5512C* method);
; bytes=1616 sha256=08ccfffb66878900a3c27df4e3cfa663d6daf9c90008370de2f9742ed2af9db2 status=arm64_complete_bound indexed_start=True
0x03F5512C: fe0f1cf8  str x30, [sp, #-0x40]!
0x03F55130: f85f01a9  stp x24, x23, [sp, #0x10]
0x03F55134: f65702a9  stp x22, x21, [sp, #0x20]
0x03F55138: f44f03a9  stp x20, x19, [sp, #0x30]
0x03F5513C: 16ee01f0  adrp x22, #0x7d18000
0x03F55140: c83a4139  ldrb w8, [x22, #0x4e]
0x03F55144: f50302aa  mov x21, x2
0x03F55148: f40301aa  mov x20, x1
0x03F5514C: f30300aa  mov x19, x0
0x03F55150: e8040037  tbnz w8, #0, #0x3f551ec
0x03F55154: c0b80190  adrp x0, #0x766d000
0x03F55158: 006c46f9  ldr x0, [x0, #0xcd8]
0x03F5515C: 2faec897  bl #0x3180a18
0x03F55160: c0b801d0  adrp x0, #0x766f000
0x03F55164: 002441f9  ldr x0, [x0, #0x248]
0x03F55168: 2caec897  bl #0x3180a18
0x03F5516C: 20b901d0  adrp x0, #0x767b000
0x03F55170: 00f840f9  ldr x0, [x0, #0x1f0]
0x03F55174: 29aec897  bl #0x3180a18
0x03F55178: 20b901d0  adrp x0, #0x767b000
0x03F5517C: 008046f9  ldr x0, [x0, #0xd00]
0x03F55180: 26aec897  bl #0x3180a18
0x03F55184: c0b701b0  adrp x0, #0x764e000
0x03F55188: 005c43f9  ldr x0, [x0, #0x6b8]
0x03F5518C: 23aec897  bl #0x3180a18
0x03F55190: c0b701b0  adrp x0, #0x764e000
0x03F55194: 00ac42f9  ldr x0, [x0, #0x558]
0x03F55198: 20aec897  bl #0x3180a18
0x03F5519C: 20b901d0  adrp x0, #0x767b000
0x03F551A0: 008446f9  ldr x0, [x0, #0xd08]
0x03F551A4: 1daec897  bl #0x3180a18
0x03F551A8: 20b901d0  adrp x0, #0x767b000
0x03F551AC: 00f040f9  ldr x0, [x0, #0x1e0]
0x03F551B0: 1aaec897  bl #0x3180a18
0x03F551B4: 20b901f0  adrp x0, #0x767c000
0x03F551B8: 007441f9  ldr x0, [x0, #0x2e8]
0x03F551BC: 17aec897  bl #0x3180a18
0x03F551C0: c0b701b0  adrp x0, #0x764e000
0x03F551C4: 005847f9  ldr x0, [x0, #0xeb0]
0x03F551C8: 14aec897  bl #0x3180a18
0x03F551CC: 20b901d0  adrp x0, #0x767b000
0x03F551D0: 009446f9  ldr x0, [x0, #0xd28]
0x03F551D4: 11aec897  bl #0x3180a18
0x03F551D8: 20b901f0  adrp x0, #0x767c000
0x03F551DC: 007841f9  ldr x0, [x0, #0x2f0]
0x03F551E0: 0eaec897  bl #0x3180a18
0x03F551E4: 28008052  movz w8, #0x1
0x03F551E8: c83a0139  strb w8, [x22, #0x4e]
0x03F551EC: ff0700f9  str xzr, [sp, #8]
0x03F551F0: 761a40f9  ldr x22, [x19, #0x30]
0x03F551F4: 760600b4  cbz x22, #0x3f552c0
0x03F551F8: c9b701b0  adrp x9, #0x764e000
0x03F551FC: a81240f9  ldr x8, [x21, #0x20]
0x03F55200: 29ad42f9  ldr x9, [x9, #0x558]
0x03F55204: 086140f9  ldr x8, [x8, #0xc0]
0x03F55208: 200140f9  ldr x0, [x9]
0x03F5520C: 171140f9  ldr x23, [x8, #0x20]
0x03F55210: 09e040b9  ldr w9, [x0, #0xe0]
0x03F55214: 49000035  cbnz w9, #0x3f5521c
0x03F55218: 5daec897  bl #0x3180b8c
0x03F5521C: e00317aa  mov x0, x23
0x03F55220: e1031faa  mov x1, xzr
0x03F55224: e83f5d94  bl #0x56a51c4
0x03F55228: 800b00b4  cbz x0, #0x3f55398
0x03F5522C: 080040f9  ldr x8, [x0]
0x03F55230: 09855ba9  ldp x9, x1, [x8, #0x1b8]
0x03F55234: 20013fd6  blr x9
0x03F55238: a81240f9  ldr x8, [x21, #0x20]
0x03F5523C: f70300aa  mov x23, x0
0x03F55240: 086140f9  ldr x8, [x8, #0xc0]
0x03F55244: 010d40f9  ldr x1, [x8, #0x18]
0x03F55248: 28d44439  ldrb w8, [x1, #0x135]
0x03F5524C: 88000037  tbnz w8, #0, #0x3f5525c
0x03F55250: e00301aa  mov x0, x1
0x03F55254: 7205c897  bl #0x315681c
0x03F55258: e10300aa  mov x1, x0
0x03F5525C: c80240f9  ldr x8, [x22]
0x03F55260: 095d4279  ldrh w9, [x8, #0x12e]
0x03F55264: 290100b4  cbz x9, #0x3f55288
0x03F55268: 0a5940f9  ldr x10, [x8, #0xb0]
0x03F5526C: 4a210091  add x10, x10, #8
0x03F55270: 4b815ff8  ldur x11, [x10, #-8]
0x03F55274: 7f0101eb  cmp x11, x1
0x03F55278: 00010054  b.eq #0x3f55298
0x03F5527C: 290500f1  subs x9, x9, #1
0x03F55280: 4a410091  add x10, x10, #0x10
0x03F55284: 61ffff54  b.ne #0x3f55270
0x03F55288: e00316aa  mov x0, x22
0x03F5528C: e2031f2a  mov w2, wzr
0x03F55290: 2006c897  bl #0x3156b10
0x03F55294: 04000014  b #0x3f552a4
0x03F55298: 490180b9  ldrsw x9, [x10]
0x03F5529C: 0811098b  add x8, x8, x9, lsl #4
0x03F552A0: 00e10491  add x0, x8, #0x138
0x03F552A4: 081040a9  ldp x8, x4, [x0]
0x03F552A8: e3230091  add x3, sp, #8
0x03F552AC: e00316aa  mov x0, x22
0x03F552B0: e10314aa  mov x1, x20
0x03F552B4: e20317aa  mov x2, x23
0x03F552B8: 00013fd6  blr x8
0x03F552BC: 200d0036  tbz w0, #0, #0x3f55460
0x03F552C0: 680e40f9  ldr x8, [x19, #0x18]
0x03F552C4: 680600b4  cbz x8, #0x3f55390
0x03F552C8: 29b901d0  adrp x9, #0x767b000
0x03F552CC: 298546f9  ldr x9, [x9, #0xd08]
0x03F552D0: 162540f9  ldr x22, [x8, #0x48]
0x03F552D4: 200140f9  ldr x0, [x9]
0x03F552D8: 72aec897  bl #0x3180ca0
0x03F552DC: f70300aa  mov x23, x0
0x03F552E0: e10314aa  mov x1, x20
0x03F552E4: e2031faa  mov x2, xzr
0x03F552E8: 2adfa194  bl #0x67ccf90
0x03F552EC: 560500b4  cbz x22, #0x3f55394
0x03F552F0: 28b901d0  adrp x8, #0x767b000
0x03F552F4: 088146f9  ldr x8, [x8, #0xd00]
0x03F552F8: 020140f9  ldr x2, [x8]
0x03F552FC: e00316aa  mov x0, x22
0x03F55300: e10317aa  mov x1, x23
0x03F55304: 9a3ef997  bl #0x3da4d6c
0x03F55308: 732240f9  ldr x19, [x19, #0x40]
0x03F5530C: 531900b4  cbz x19, #0x3f55634
0x03F55310: a81240f9  ldr x8, [x21, #0x20]
0x03F55314: 086140f9  ldr x8, [x8, #0xc0]
0x03F55318: 011940f9  ldr x1, [x8, #0x30]
0x03F5531C: 28d44439  ldrb w8, [x1, #0x135]
0x03F55320: 88000037  tbnz w8, #0, #0x3f55330
0x03F55324: e00301aa  mov x0, x1
0x03F55328: 3d05c897  bl #0x315681c
0x03F5532C: e10300aa  mov x1, x0
0x03F55330: 680240f9  ldr x8, [x19]
0x03F55334: 095d4279  ldrh w9, [x8, #0x12e]
0x03F55338: 290100b4  cbz x9, #0x3f5535c
0x03F5533C: 0a5940f9  ldr x10, [x8, #0xb0]
0x03F55340: 4a210091  add x10, x10, #8
0x03F55344: 4b815ff8  ldur x11, [x10, #-8]
0x03F55348: 7f0101eb  cmp x11, x1
0x03F5534C: 00010054  b.eq #0x3f5536c
0x03F55350: 290500f1  subs x9, x9, #1
0x03F55354: 4a410091  add x10, x10, #0x10
0x03F55358: 61ffff54  b.ne #0x3f55344
0x03F5535C: 22008052  movz w2, #0x1
0x03F55360: e00313aa  mov x0, x19
0x03F55364: eb05c897  bl #0x3156b10
0x03F55368: 05000014  b #0x3f5537c
0x03F5536C: 490140b9  ldr w9, [x10]
0x03F55370: 29050011  add w9, w9, #1
0x03F55374: 08d1298b  add x8, x8, w9, sxtw #4
0x03F55378: 00e10491  add x0, x8, #0x138
0x03F5537C: 080840a9  ldp x8, x2, [x0]
0x03F55380: e00313aa  mov x0, x19
0x03F55384: e10314aa  mov x1, x20
0x03F55388: 00013fd6  blr x8
0x03F5538C: a4000014  b #0x3f5561c
0x03F55390: 47aec897  bl #0x3180cac
0x03F55394: 46aec897  bl #0x3180cac
0x03F55398: 45aec897  bl #0x3180cac
0x03F5539C: 04000014  b #0x3f553ac
0x03F553A0: 03000014  b #0x3f553ac
0x03F553A4: b1000014  b #0x3f55668
0x03F553A8: 01000014  b #0x3f553ac
0x03F553AC: f60300aa  mov x22, x0
0x03F553B0: 3f040071  cmp w1, #1
0x03F553B4: e11d0054  b.ne #0x3f55770
0x03F553B8: e00316aa  mov x0, x22
0x03F553BC: 55e5c994  bl #0x71ce910
0x03F553C0: f40300aa  mov x20, x0
0x03F553C4: c0b701b0  adrp x0, #0x764e000
0x03F553C8: 006c42f9  ldr x0, [x0, #0x4d8]
0x03F553CC: 98adc897  bl #0x3180a2c
0x03F553D0: 880240f9  ldr x8, [x20]
0x03F553D4: 010140f9  ldr x1, [x8]
0x03F553D8: 40afc897  bl #0x31810d8
0x03F553DC: e0120036  tbz w0, #0, #0x3f55638
0x03F553E0: 940240f9  ldr x20, [x20]
0x03F553E4: 4fe5c994  bl #0x71ce920
0x03F553E8: 741200b4  cbz x20, #0x3f55634
0x03F553EC: 880240f9  ldr x8, [x20]
0x03F553F0: 751a40f9  ldr x21, [x19, #0x30]
0x03F553F4: e00314aa  mov x0, x20
0x03F553F8: 098558a9  ldp x9, x1, [x8, #0x188]
0x03F553FC: 20013fd6  blr x9
0x03F55400: f60300aa  mov x22, x0
0x03F55404: 20b901f0  adrp x0, #0x767c000
0x03F55408: 007c41f9  ldr x0, [x0, #0x2f8]
0x03F5540C: 88adc897  bl #0x3180a2c
0x03F55410: e10315aa  mov x1, x21
0x03F55414: e20316aa  mov x2, x22
0x03F55418: e3031faa  mov x3, xzr
0x03F5541C: b08a5694  bl #0x54f7edc
0x03F55420: e00700f9  str x0, [sp, #8]
0x03F55424: c0b80190  adrp x0, #0x766d000
0x03F55428: 006c46f9  ldr x0, [x0, #0xcd8]
0x03F5542C: 80adc897  bl #0x3180a2c
0x03F55430: 08e040b9  ldr w8, [x0, #0xe0]
0x03F55434: 48000035  cbnz w8, #0x3f5543c
0x03F55438: d5adc897  bl #0x3180b8c
0x03F5543C: c0b701f0  adrp x0, #0x7650000
0x03F55440: 00dc41f9  ldr x0, [x0, #0x3b8]
0x03F55444: 7aadc897  bl #0x3180a2c
0x03F55448: e10300aa  mov x1, x0
0x03F5544C: e00314aa  mov x0, x20
0x03F55450: e2031faa  mov x2, xzr
0x03F55454: e3031faa  mov x3, xzr
0x03F55458: e4031faa  mov x4, xzr
0x03F5545C: 535c5494  bl #0x546c5a8
0x03F55460: 28b901d0  adrp x8, #0x767b000
0x03F55464: 742240f9  ldr x20, [x19, #0x40]
0x03F55468: f60740f9  ldr x22, [sp, #8]
0x03F5546C: 08f940f9  ldr x8, [x8, #0x1f0]
0x03F55470: 000140f9  ldr x0, [x8]
0x03F55474: 0baec897  bl #0x3180ca0
0x03F55478: e10316aa  mov x1, x22
0x03F5547C: e2031faa  mov x2, xzr
0x03F55480: f50300aa  mov x21, x0
0x03F55484: 0c65a794  bl #0x692e8b4
0x03F55488: 740d00b4  cbz x20, #0x3f55634
0x03F5548C: cab801d0  adrp x10, #0x766f000
0x03F55490: 880240f9  ldr x8, [x20]
0x03F55494: 4a2541f9  ldr x10, [x10, #0x248]
0x03F55498: 095d4279  ldrh w9, [x8, #0x12e]
0x03F5549C: 410140f9  ldr x1, [x10]
0x03F554A0: 290100b4  cbz x9, #0x3f554c4
0x03F554A4: 0a5940f9  ldr x10, [x8, #0xb0]
0x03F554A8: 4a210091  add x10, x10, #8
0x03F554AC: 4b815ff8  ldur x11, [x10, #-8]
0x03F554B0: 7f0101eb  cmp x11, x1
0x03F554B4: 00010054  b.eq #0x3f554d4
0x03F554B8: 290500f1  subs x9, x9, #1
0x03F554BC: 4a410091  add x10, x10, #0x10
0x03F554C0: 61ffff54  b.ne #0x3f554ac
0x03F554C4: 82008052  movz w2, #0x4
0x03F554C8: e00314aa  mov x0, x20
0x03F554CC: 9105c897  bl #0x3156b10
0x03F554D0: 05000014  b #0x3f554e4
0x03F554D4: 490140b9  ldr w9, [x10]
0x03F554D8: 29110011  add w9, w9, #4
0x03F554DC: 08d1298b  add x8, x8, w9, sxtw #4
0x03F554E0: 00e10491  add x0, x8, #0x138
0x03F554E4: 080840a9  ldp x8, x2, [x0]
0x03F554E8: e00314aa  mov x0, x20
0x03F554EC: e10315aa  mov x1, x21
0x03F554F0: 00013fd6  blr x8
0x03F554F4: c8b701b0  adrp x8, #0x764e000
0x03F554F8: 085d43f9  ldr x8, [x8, #0x6b8]
0x03F554FC: a1008052  movz w1, #0x5
0x03F55500: 000140f9  ldr x0, [x8]
0x03F55504: 7eadc897  bl #0x3180afc
0x03F55508: 600900b4  cbz x0, #0x3f55634
0x03F5550C: 081840b9  ldr w8, [x0, #0x18]
0x03F55510: f40300aa  mov x20, x0
0x03F55514: e8080034  cbz w8, #0x3f55630
0x03F55518: e10740f9  ldr x1, [sp, #8]
0x03F5551C: f50314aa  mov x21, x20
0x03F55520: a10e02f8  str x1, [x21, #0x20]!
0x03F55524: e00315aa  mov x0, x21
0x03F55528: 27adc897  bl #0x31809c4
0x03F5552C: a8825fb8  ldur w8, [x21, #-8]
0x03F55530: 1f050071  cmp w8, #1
0x03F55534: e9070054  b.ls #0x3f55630
0x03F55538: c8b701b0  adrp x8, #0x764e000
0x03F5553C: 085947f9  ldr x8, [x8, #0xeb0]
0x03F55540: f50314aa  mov x21, x20
0x03F55544: 010140f9  ldr x1, [x8]
0x03F55548: a18e02f8  str x1, [x21, #0x28]!
0x03F5554C: e00315aa  mov x0, x21
0x03F55550: 1dadc897  bl #0x31809c4
0x03F55554: a8025fb8  ldur w8, [x21, #-0x10]
0x03F55558: 1f090071  cmp w8, #2
0x03F5555C: a9060054  b.ls #0x3f55630
0x03F55560: 612640f9  ldr x1, [x19, #0x48]
0x03F55564: f50314aa  mov x21, x20
0x03F55568: a10e03f8  str x1, [x21, #0x30]!
0x03F5556C: e00315aa  mov x0, x21
0x03F55570: 15adc897  bl #0x31809c4
0x03F55574: a8825eb8  ldur w8, [x21, #-0x18]
0x03F55578: 1f0d0071  cmp w8, #3
0x03F5557C: a9050054  b.ls #0x3f55630
0x03F55580: 28b901d0  adrp x8, #0x767b000
0x03F55584: 089546f9  ldr x8, [x8, #0xd28]
0x03F55588: f50314aa  mov x21, x20
0x03F5558C: 010140f9  ldr x1, [x8]
0x03F55590: a18e03f8  str x1, [x21, #0x38]!
0x03F55594: e00315aa  mov x0, x21
0x03F55598: 0badc897  bl #0x31809c4
0x03F5559C: a8025eb8  ldur w8, [x21, #-0x20]
0x03F555A0: 1f110071  cmp w8, #4
0x03F555A4: 69040054  b.ls #0x3f55630
0x03F555A8: 611e40f9  ldr x1, [x19, #0x38]
0x03F555AC: e00314aa  mov x0, x20
0x03F555B0: 010c04f8  str x1, [x0, #0x40]!
0x03F555B4: 04adc897  bl #0x31809c4
0x03F555B8: e00314aa  mov x0, x20
0x03F555BC: e1031faa  mov x1, xzr
0x03F555C0: 85895694  bl #0x54f7bd4
0x03F555C4: c8b80190  adrp x8, #0x766d000
0x03F555C8: 086d46f9  ldr x8, [x8, #0xcd8]
0x03F555CC: f30300aa  mov x19, x0
0x03F555D0: 080140f9  ldr x8, [x8]
0x03F555D4: 09e140b9  ldr w9, [x8, #0xe0]
0x03F555D8: 69000035  cbnz w9, #0x3f555e4
0x03F555DC: e00308aa  mov x0, x8
0x03F555E0: 6badc897  bl #0x3180b8c
0x03F555E4: 28b901f0  adrp x8, #0x767c000
0x03F555E8: 29b901d0  adrp x9, #0x767b000
0x03F555EC: 2ab901f0  adrp x10, #0x767c000
0x03F555F0: 087941f9  ldr x8, [x8, #0x2f0]
0x03F555F4: 29f140f9  ldr x9, [x9, #0x1e0]
0x03F555F8: 4a7541f9  ldr x10, [x10, #0x2e8]
0x03F555FC: e00313aa  mov x0, x19
0x03F55600: 010140f9  ldr x1, [x8]
0x03F55604: 230140f9  ldr x3, [x9]
0x03F55608: 440140f9  ldr x4, [x10]
0x03F5560C: e2031faa  mov x2, xzr
0x03F55610: e5031faa  mov x5, xzr
0x03F55614: e6031faa  mov x6, xzr
0x03F55618: 875b5494  bl #0x546c434
0x03F5561C: f44f43a9  ldp x20, x19, [sp, #0x30]
0x03F55620: f65742a9  ldp x22, x21, [sp, #0x20]
0x03F55624: f85f41a9  ldp x24, x23, [sp, #0x10]
0x03F55628: fe0744f8  ldr x30, [sp], #0x40
0x03F5562C: c0035fd6  ret
0x03F55630: a1adc897  bl #0x3180cb4
0x03F55634: 9eadc897  bl #0x3180cac
0x03F55638: 00018052  movz w0, #0x8
0x03F5563C: bde4c994  bl #0x71ce930
0x03F55640: 880240f9  ldr x8, [x20]
0x03F55644: 080000f9  str x8, [x0]
0x03F55648: e19301f0  adrp x1, #0x71d4000
0x03F5564C: 21a03491  add x1, x1, #0xd28
0x03F55650: e2031faa  mov x2, xzr
0x03F55654: bbe4c994  bl #0x71ce940
0x03F55658: 44000014  b #0x3f55768
0x03F5565C: f60300aa  mov x22, x0
0x03F55660: b0e4c994  bl #0x71ce920
0x03F55664: 43000014  b #0x3f55770
0x03F55668: f60300aa  mov x22, x0
0x03F5566C: 3f040071  cmp w1, #1
0x03F55670: 01080054  b.ne #0x3f55770
0x03F55674: e00316aa  mov x0, x22
0x03F55678: a6e4c994  bl #0x71ce910
0x03F5567C: f60300aa  mov x22, x0
0x03F55680: c0b701b0  adrp x0, #0x764e000
0x03F55684: 006c42f9  ldr x0, [x0, #0x4d8]
0x03F55688: e9acc897  bl #0x3180a2c
0x03F5568C: c80240f9  ldr x8, [x22]
0x03F55690: 010140f9  ldr x1, [x8]
0x03F55694: 91aec897  bl #0x31810d8
0x03F55698: 80050036  tbz w0, #0, #0x3f55748
0x03F5569C: d60240f9  ldr x22, [x22]
0x03F556A0: a0e4c994  bl #0x71ce920
0x03F556A4: 20b901f0  adrp x0, #0x767c000
0x03F556A8: 771e40f9  ldr x23, [x19, #0x38]
0x03F556AC: 008041f9  ldr x0, [x0, #0x300]
0x03F556B0: dfacc897  bl #0x3180a2c
0x03F556B4: f80300aa  mov x24, x0
0x03F556B8: 20b901f0  adrp x0, #0x767c000
0x03F556BC: 008441f9  ldr x0, [x0, #0x308]
0x03F556C0: dbacc897  bl #0x3180a2c
0x03F556C4: e10300aa  mov x1, x0
0x03F556C8: e00318aa  mov x0, x24
0x03F556CC: e20316aa  mov x2, x22
0x03F556D0: e30317aa  mov x3, x23
0x03F556D4: e4031faa  mov x4, xzr
0x03F556D8: 128a5694  bl #0x54f7f20
0x03F556DC: f60300aa  mov x22, x0
0x03F556E0: c0b80190  adrp x0, #0x766d000
0x03F556E4: 006c46f9  ldr x0, [x0, #0xcd8]
0x03F556E8: d1acc897  bl #0x3180a2c
0x03F556EC: 08e040b9  ldr w8, [x0, #0xe0]
0x03F556F0: 48000035  cbnz w8, #0x3f556f8
0x03F556F4: 26adc897  bl #0x3180b8c
0x03F556F8: 20b901f0  adrp x0, #0x767c000
0x03F556FC: 007841f9  ldr x0, [x0, #0x2f0]
0x03F55700: cbacc897  bl #0x3180a2c
0x03F55704: f70300aa  mov x23, x0
0x03F55708: 20b901d0  adrp x0, #0x767b000
0x03F5570C: 00f040f9  ldr x0, [x0, #0x1e0]
0x03F55710: c7acc897  bl #0x3180a2c
0x03F55714: f80300aa  mov x24, x0
0x03F55718: 20b901f0  adrp x0, #0x767c000
0x03F5571C: 007441f9  ldr x0, [x0, #0x2e8]
0x03F55720: c3acc897  bl #0x3180a2c
0x03F55724: e40300aa  mov x4, x0
0x03F55728: e00316aa  mov x0, x22
0x03F5572C: e10317aa  mov x1, x23
0x03F55730: e2031faa  mov x2, xzr
0x03F55734: e30318aa  mov x3, x24
0x03F55738: e5031faa  mov x5, xzr
0x03F5573C: e6031faa  mov x6, xzr
0x03F55740: 3d5b5494  bl #0x546c434
0x03F55744: f1feff17  b #0x3f55308
0x03F55748: 00018052  movz w0, #0x8
0x03F5574C: 79e4c994  bl #0x71ce930
0x03F55750: c80240f9  ldr x8, [x22]
0x03F55754: 080000f9  str x8, [x0]
0x03F55758: e19301f0  adrp x1, #0x71d4000
0x03F5575C: 21a03491  add x1, x1, #0xd28
0x03F55760: e2031faa  mov x2, xzr
0x03F55764: 77e4c994  bl #0x71ce940
0x03F55768: f60300aa  mov x22, x0
0x03F5576C: 6de4c994  bl #0x71ce920
0x03F55770: e00316aa  mov x0, x22
0x03F55774: 7940cc97  bl #0x3265958
0x03F55778: 67cfba97  bl #0x2e09514

; Generic instantiation from Il2CppDumper script.json | RVA 0x3F55928 | Framework.Core.Services.Backend.Repositories.RepositoryBase.<>c__DisplayClass33_0<__Il2CppFullySharedGenericType>$$<ConvertToObjectInternal>g__HandleDeserializedResponse|1
; native signature: void Framework_Core_Services_Backend_Repositories_RepositoryBase___c__DisplayClass33_0___Il2CppFullySharedGenericType____ConvertToObjectInternal_g__HandleDeserializedResponse_1 (Framework_Core_Services_Backend_Repositories_RepositoryBase___c__DisplayClass33_0_T__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o deserializedResponse, const MethodInfo_3F55928* method);
; bytes=1924 sha256=566d0f4fdbdbe92dee3f7a122e9c61154a72e406da2914f27e784c799ae0a485 status=arm64_complete_bound indexed_start=True
0x03F55928: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x03F5592C: fb0b00f9  str x27, [sp, #0x10]
0x03F55930: fa6702a9  stp x26, x25, [sp, #0x20]
0x03F55934: f85f03a9  stp x24, x23, [sp, #0x30]
0x03F55938: f65704a9  stp x22, x21, [sp, #0x40]
0x03F5593C: f44f05a9  stp x20, x19, [sp, #0x50]
0x03F55940: fd030091  mov x29, sp
0x03F55944: ff0301d1  sub sp, sp, #0x40
0x03F55948: 5bd03bd5  mrs x27, tpidr_el0
0x03F5594C: 681740f9  ldr x8, [x27, #0x28]
0x03F55950: 14ee01f0  adrp x20, #0x7d18000
0x03F55954: f50302aa  mov x21, x2
0x03F55958: f60301aa  mov x22, x1
0x03F5595C: a8831ff8  stur x8, [x29, #-8]
0x03F55960: 88424139  ldrb w8, [x20, #0x50]
0x03F55964: f30300aa  mov x19, x0
0x03F55968: a1031df8  stur x1, [x29, #-0x30]
0x03F5596C: e8040037  tbnz w8, #0, #0x3f55a08
0x03F55970: c0b80190  adrp x0, #0x766d000
0x03F55974: 006c46f9  ldr x0, [x0, #0xcd8]
0x03F55978: 28acc897  bl #0x3180a18
0x03F5597C: c0b801d0  adrp x0, #0x766f000
0x03F55980: 002441f9  ldr x0, [x0, #0x248]
0x03F55984: 25acc897  bl #0x3180a18
0x03F55988: 20b901d0  adrp x0, #0x767b000
0x03F5598C: 00f840f9  ldr x0, [x0, #0x1f0]
0x03F55990: 22acc897  bl #0x3180a18
0x03F55994: 20b901d0  adrp x0, #0x767b000
0x03F55998: 008046f9  ldr x0, [x0, #0xd00]
0x03F5599C: 1facc897  bl #0x3180a18
0x03F559A0: c0b701b0  adrp x0, #0x764e000
0x03F559A4: 005c43f9  ldr x0, [x0, #0x6b8]
0x03F559A8: 1cacc897  bl #0x3180a18
0x03F559AC: c0b701b0  adrp x0, #0x764e000
0x03F559B0: 00ac42f9  ldr x0, [x0, #0x558]
0x03F559B4: 19acc897  bl #0x3180a18
0x03F559B8: 20b901d0  adrp x0, #0x767b000
0x03F559BC: 008446f9  ldr x0, [x0, #0xd08]
0x03F559C0: 16acc897  bl #0x3180a18
0x03F559C4: 20b901d0  adrp x0, #0x767b000
0x03F559C8: 00f040f9  ldr x0, [x0, #0x1e0]
0x03F559CC: 13acc897  bl #0x3180a18
0x03F559D0: 20b901f0  adrp x0, #0x767c000
0x03F559D4: 007441f9  ldr x0, [x0, #0x2e8]
0x03F559D8: 10acc897  bl #0x3180a18
0x03F559DC: c0b701b0  adrp x0, #0x764e000
0x03F559E0: 005847f9  ldr x0, [x0, #0xeb0]
0x03F559E4: 0dacc897  bl #0x3180a18
0x03F559E8: 20b901d0  adrp x0, #0x767b000
0x03F559EC: 009446f9  ldr x0, [x0, #0xd28]
0x03F559F0: 0aacc897  bl #0x3180a18
0x03F559F4: 20b901f0  adrp x0, #0x767c000
0x03F559F8: 007841f9  ldr x0, [x0, #0x2f0]
0x03F559FC: 07acc897  bl #0x3180a18
0x03F55A00: 28008052  movz w8, #0x1
0x03F55A04: 88420139  strb w8, [x20, #0x50]
0x03F55A08: b91240f9  ldr x25, [x21, #0x20]
0x03F55A0C: 286340f9  ldr x8, [x25, #0xc0]
0x03F55A10: 090540f9  ldr x9, [x8, #8]
0x03F55A14: 37fd40b9  ldr w23, [x9, #0xfc]
0x03F55A18: e9030091  mov x9, sp
0x03F55A1C: ea3e0091  add x10, x23, #0xf
0x03F55A20: 4a717c92  and x10, x10, #0x1fffffff0
0x03F55A24: 34010acb  sub x20, x9, x10
0x03F55A28: 9f020091  mov sp, x20
0x03F55A2C: bf831cf8  stur xzr, [x29, #-0x38]
0x03F55A30: 781a40f9  ldr x24, [x19, #0x30]
0x03F55A34: b80800b4  cbz x24, #0x3f55b48
0x03F55A38: 080540f9  ldr x8, [x8, #8]
0x03F55A3C: dab701b0  adrp x26, #0x764e000
0x03F55A40: e00314aa  mov x0, x20
0x03F55A44: e20317aa  mov x2, x23
0x03F55A48: 082940b9  ldr w8, [x8, #0x28]
0x03F55A4C: 5aaf42f9  ldr x26, [x26, #0x558]
0x03F55A50: 1f010071  cmp w8, #0
0x03F55A54: a8c300d1  sub x8, x29, #0x30
0x03F55A58: c1b2889a  csel x1, x22, x8, lt
0x03F55A5C: c5e3c994  bl #0x71ce970
0x03F55A60: 400340f9  ldr x0, [x26]
0x03F55A64: 286340f9  ldr x8, [x25, #0xc0]
0x03F55A68: 09e040b9  ldr w9, [x0, #0xe0]
0x03F55A6C: 191140f9  ldr x25, [x8, #0x20]
0x03F55A70: 49000035  cbnz w9, #0x3f55a78
0x03F55A74: 46acc897  bl #0x3180b8c
0x03F55A78: e00319aa  mov x0, x25
0x03F55A7C: e1031faa  mov x1, xzr
0x03F55A80: d13d5d94  bl #0x56a51c4
0x03F55A84: 001100b4  cbz x0, #0x3f55ca4
0x03F55A88: 080040f9  ldr x8, [x0]
0x03F55A8C: 09855ba9  ldp x9, x1, [x8, #0x1b8]
0x03F55A90: 20013fd6  blr x9
0x03F55A94: a81240f9  ldr x8, [x21, #0x20]
0x03F55A98: f90300aa  mov x25, x0
0x03F55A9C: 086140f9  ldr x8, [x8, #0xc0]
0x03F55AA0: 010d40f9  ldr x1, [x8, #0x18]
0x03F55AA4: 29d44439  ldrb w9, [x1, #0x135]
0x03F55AA8: c9000037  tbnz w9, #0, #0x3f55ac0
0x03F55AAC: e00301aa  mov x0, x1
0x03F55AB0: 5b03c897  bl #0x315681c
0x03F55AB4: e10300aa  mov x1, x0
0x03F55AB8: a81240f9  ldr x8, [x21, #0x20]
0x03F55ABC: 086140f9  ldr x8, [x8, #0xc0]
0x03F55AC0: 080540f9  ldr x8, [x8, #8]
0x03F55AC4: fa0314aa  mov x26, x20
0x03F55AC8: 082940b9  ldr w8, [x8, #0x28]
0x03F55ACC: 4800f837  tbnz w8, #0x1f, #0x3f55ad4
0x03F55AD0: 9a0240f9  ldr x26, [x20]
0x03F55AD4: 080340f9  ldr x8, [x24]
0x03F55AD8: 095d4279  ldrh w9, [x8, #0x12e]
0x03F55ADC: 290100b4  cbz x9, #0x3f55b00
0x03F55AE0: 0a5940f9  ldr x10, [x8, #0xb0]
0x03F55AE4: 4a210091  add x10, x10, #8
0x03F55AE8: 4b815ff8  ldur x11, [x10, #-8]
0x03F55AEC: 7f0101eb  cmp x11, x1
0x03F55AF0: 00010054  b.eq #0x3f55b10
0x03F55AF4: 290500f1  subs x9, x9, #1
0x03F55AF8: 4a410091  add x10, x10, #0x10
0x03F55AFC: 61ffff54  b.ne #0x3f55ae8
0x03F55B00: e00318aa  mov x0, x24
0x03F55B04: e2031f2a  mov w2, wzr
0x03F55B08: 0204c897  bl #0x3156b10
0x03F55B0C: 04000014  b #0x3f55b1c
0x03F55B10: 490180b9  ldrsw x9, [x10]
0x03F55B14: 0811098b  add x8, x8, x9, lsl #4
0x03F55B18: 00e10491  add x0, x8, #0x138
0x03F55B1C: a8e300d1  sub x8, x29, #0x38
0x03F55B20: bae73da9  stp x26, x25, [x29, #-0x28]
0x03F55B24: a8831ef8  stur x8, [x29, #-0x18]
0x03F55B28: 010440f9  ldr x1, [x0, #8]
0x03F55B2C: 20a040a9  ldp x0, x8, [x1, #8]
0x03F55B30: a3a300d1  sub x3, x29, #0x28
0x03F55B34: a43300d1  sub x4, x29, #0xc
0x03F55B38: e20318aa  mov x2, x24
0x03F55B3C: 00013fd6  blr x8
0x03F55B40: a8435f38  ldurb w8, [x29, #-0xc]
0x03F55B44: 68110034  cbz w8, #0x3f55d70
0x03F55B48: 680e40f9  ldr x8, [x19, #0x18]
0x03F55B4C: 880a00b4  cbz x8, #0x3f55c9c
0x03F55B50: b91240f9  ldr x25, [x21, #0x20]
0x03F55B54: 182540f9  ldr x24, [x8, #0x48]
0x03F55B58: a8c300d1  sub x8, x29, #0x30
0x03F55B5C: e00314aa  mov x0, x20
0x03F55B60: 296340f9  ldr x9, [x25, #0xc0]
0x03F55B64: e20317aa  mov x2, x23
0x03F55B68: 290540f9  ldr x9, [x9, #8]
0x03F55B6C: 292940b9  ldr w9, [x9, #0x28]
0x03F55B70: 3f010071  cmp w9, #0
0x03F55B74: c1b2889a  csel x1, x22, x8, lt
0x03F55B78: 7ee3c994  bl #0x71ce970
0x03F55B7C: 286340f9  ldr x8, [x25, #0xc0]
0x03F55B80: 000540f9  ldr x0, [x8, #8]
0x03F55B84: e10314aa  mov x1, x20
0x03F55B88: 03acc897  bl #0x3180b94
0x03F55B8C: 28b901d0  adrp x8, #0x767b000
0x03F55B90: 088546f9  ldr x8, [x8, #0xd08]
0x03F55B94: fa0300aa  mov x26, x0
0x03F55B98: 000140f9  ldr x0, [x8]
0x03F55B9C: 41acc897  bl #0x3180ca0
0x03F55BA0: f90300aa  mov x25, x0
0x03F55BA4: e1031aaa  mov x1, x26
0x03F55BA8: e2031faa  mov x2, xzr
0x03F55BAC: f9dca194  bl #0x67ccf90
0x03F55BB0: 980700b4  cbz x24, #0x3f55ca0
0x03F55BB4: 28b901d0  adrp x8, #0x767b000
0x03F55BB8: 088146f9  ldr x8, [x8, #0xd00]
0x03F55BBC: 020140f9  ldr x2, [x8]
0x03F55BC0: e00318aa  mov x0, x24
0x03F55BC4: e10319aa  mov x1, x25
0x03F55BC8: 693cf997  bl #0x3da4d6c
0x03F55BCC: b81240f9  ldr x24, [x21, #0x20]
0x03F55BD0: 732240f9  ldr x19, [x19, #0x40]
0x03F55BD4: a8c300d1  sub x8, x29, #0x30
0x03F55BD8: e00314aa  mov x0, x20
0x03F55BDC: 096340f9  ldr x9, [x24, #0xc0]
0x03F55BE0: e20317aa  mov x2, x23
0x03F55BE4: 290540f9  ldr x9, [x9, #8]
0x03F55BE8: 292940b9  ldr w9, [x9, #0x28]
0x03F55BEC: 3f010071  cmp w9, #0
0x03F55BF0: c1b2889a  csel x1, x22, x8, lt
0x03F55BF4: 5fe3c994  bl #0x71ce970
0x03F55BF8: 331b00b4  cbz x19, #0x3f55f5c
0x03F55BFC: 086340f9  ldr x8, [x24, #0xc0]
0x03F55C00: 011940f9  ldr x1, [x8, #0x30]
0x03F55C04: 29d44439  ldrb w9, [x1, #0x135]
0x03F55C08: c9000037  tbnz w9, #0, #0x3f55c20
0x03F55C0C: e00301aa  mov x0, x1
0x03F55C10: 0303c897  bl #0x315681c
0x03F55C14: a81240f9  ldr x8, [x21, #0x20]
0x03F55C18: e10300aa  mov x1, x0
0x03F55C1C: 086140f9  ldr x8, [x8, #0xc0]
0x03F55C20: 080540f9  ldr x8, [x8, #8]
0x03F55C24: 082940b9  ldr w8, [x8, #0x28]
0x03F55C28: 4800f837  tbnz w8, #0x1f, #0x3f55c30
0x03F55C2C: 940240f9  ldr x20, [x20]
0x03F55C30: 680240f9  ldr x8, [x19]
0x03F55C34: 095d4279  ldrh w9, [x8, #0x12e]
0x03F55C38: 290100b4  cbz x9, #0x3f55c5c
0x03F55C3C: 0a5940f9  ldr x10, [x8, #0xb0]
0x03F55C40: 4a210091  add x10, x10, #8
0x03F55C44: 4b815ff8  ldur x11, [x10, #-8]
0x03F55C48: 7f0101eb  cmp x11, x1
0x03F55C4C: 00010054  b.eq #0x3f55c6c
0x03F55C50: 290500f1  subs x9, x9, #1
0x03F55C54: 4a410091  add x10, x10, #0x10
0x03F55C58: 61ffff54  b.ne #0x3f55c44
0x03F55C5C: 22008052  movz w2, #0x1
0x03F55C60: e00313aa  mov x0, x19
0x03F55C64: ab03c897  bl #0x3156b10
0x03F55C68: 05000014  b #0x3f55c7c
0x03F55C6C: 490140b9  ldr w9, [x10]
0x03F55C70: 29050011  add w9, w9, #1
0x03F55C74: 08d1298b  add x8, x8, w9, sxtw #4
0x03F55C78: 00e10491  add x0, x8, #0x138
0x03F55C7C: b4831df8  stur x20, [x29, #-0x28]
0x03F55C80: 010440f9  ldr x1, [x0, #8]
0x03F55C84: a3a300d1  sub x3, x29, #0x28
0x03F55C88: e20313aa  mov x2, x19
0x03F55C8C: e40314aa  mov x4, x20
0x03F55C90: 20a040a9  ldp x0, x8, [x1, #8]
0x03F55C94: 00013fd6  blr x8
0x03F55C98: a5000014  b #0x3f55f2c
0x03F55C9C: 04acc897  bl #0x3180cac
0x03F55CA0: 03acc897  bl #0x3180cac
0x03F55CA4: 02acc897  bl #0x3180cac
0x03F55CA8: 05000014  b #0x3f55cbc
0x03F55CAC: 04000014  b #0x3f55cbc
0x03F55CB0: ba000014  b #0x3f55f98
0x03F55CB4: b9000014  b #0x3f55f98
0x03F55CB8: 01000014  b #0x3f55cbc
0x03F55CBC: f80300aa  mov x24, x0
0x03F55CC0: 3f040071  cmp w1, #1
0x03F55CC4: e11e0054  b.ne #0x3f560a0
0x03F55CC8: e00318aa  mov x0, x24
0x03F55CCC: 11e3c994  bl #0x71ce910
0x03F55CD0: f40300aa  mov x20, x0
0x03F55CD4: c0b701b0  adrp x0, #0x764e000
0x03F55CD8: 006c42f9  ldr x0, [x0, #0x4d8]
0x03F55CDC: 54abc897  bl #0x3180a2c
0x03F55CE0: 880240f9  ldr x8, [x20]
0x03F55CE4: 010140f9  ldr x1, [x8]
0x03F55CE8: fcacc897  bl #0x31810d8
0x03F55CEC: e0130036  tbz w0, #0, #0x3f55f68
0x03F55CF0: 940240f9  ldr x20, [x20]
0x03F55CF4: 0be3c994  bl #0x71ce920
0x03F55CF8: 341300b4  cbz x20, #0x3f55f5c
0x03F55CFC: 880240f9  ldr x8, [x20]
0x03F55D00: 751a40f9  ldr x21, [x19, #0x30]
0x03F55D04: e00314aa  mov x0, x20
0x03F55D08: 098558a9  ldp x9, x1, [x8, #0x188]
0x03F55D0C: 20013fd6  blr x9
0x03F55D10: f60300aa  mov x22, x0
0x03F55D14: 20b901f0  adrp x0, #0x767c000
0x03F55D18: 007c41f9  ldr x0, [x0, #0x2f8]
0x03F55D1C: 44abc897  bl #0x3180a2c
0x03F55D20: e10315aa  mov x1, x21
0x03F55D24: e20316aa  mov x2, x22
0x03F55D28: e3031faa  mov x3, xzr
0x03F55D2C: 6c885694  bl #0x54f7edc
0x03F55D30: a0831cf8  stur x0, [x29, #-0x38]
0x03F55D34: c0b80190  adrp x0, #0x766d000
0x03F55D38: 006c46f9  ldr x0, [x0, #0xcd8]
0x03F55D3C: 3cabc897  bl #0x3180a2c
0x03F55D40: 08e040b9  ldr w8, [x0, #0xe0]
0x03F55D44: 48000035  cbnz w8, #0x3f55d4c
0x03F55D48: 91abc897  bl #0x3180b8c
0x03F55D4C: c0b701f0  adrp x0, #0x7650000
0x03F55D50: 00dc41f9  ldr x0, [x0, #0x3b8]
0x03F55D54: 36abc897  bl #0x3180a2c
0x03F55D58: e10300aa  mov x1, x0
0x03F55D5C: e00314aa  mov x0, x20
0x03F55D60: e2031faa  mov x2, xzr
0x03F55D64: e3031faa  mov x3, xzr
0x03F55D68: e4031faa  mov x4, xzr
0x03F55D6C: 0f5a5494  bl #0x546c5a8
0x03F55D70: 28b901d0  adrp x8, #0x767b000
0x03F55D74: 742240f9  ldr x20, [x19, #0x40]
0x03F55D78: b6835cf8  ldur x22, [x29, #-0x38]
0x03F55D7C: 08f940f9  ldr x8, [x8, #0x1f0]
0x03F55D80: 000140f9  ldr x0, [x8]
0x03F55D84: c7abc897  bl #0x3180ca0
0x03F55D88: e10316aa  mov x1, x22
0x03F55D8C: e2031faa  mov x2, xzr
0x03F55D90: f50300aa  mov x21, x0
0x03F55D94: c862a794  bl #0x692e8b4
0x03F55D98: 340e00b4  cbz x20, #0x3f55f5c
0x03F55D9C: cab801d0  adrp x10, #0x766f000
0x03F55DA0: 880240f9  ldr x8, [x20]
0x03F55DA4: 4a2541f9  ldr x10, [x10, #0x248]
0x03F55DA8: 095d4279  ldrh w9, [x8, #0x12e]
0x03F55DAC: 410140f9  ldr x1, [x10]
0x03F55DB0: 290100b4  cbz x9, #0x3f55dd4
0x03F55DB4: 0a5940f9  ldr x10, [x8, #0xb0]
0x03F55DB8: 4a210091  add x10, x10, #8
0x03F55DBC: 4b815ff8  ldur x11, [x10, #-8]
0x03F55DC0: 7f0101eb  cmp x11, x1
0x03F55DC4: 00010054  b.eq #0x3f55de4
0x03F55DC8: 290500f1  subs x9, x9, #1
0x03F55DCC: 4a410091  add x10, x10, #0x10
0x03F55DD0: 61ffff54  b.ne #0x3f55dbc
0x03F55DD4: 82008052  movz w2, #0x4
0x03F55DD8: e00314aa  mov x0, x20
0x03F55DDC: 4d03c897  bl #0x3156b10
0x03F55DE0: 05000014  b #0x3f55df4
0x03F55DE4: 490140b9  ldr w9, [x10]
0x03F55DE8: 29110011  add w9, w9, #4
0x03F55DEC: 08d1298b  add x8, x8, w9, sxtw #4
0x03F55DF0: 00e10491  add x0, x8, #0x138
0x03F55DF4: 080840a9  ldp x8, x2, [x0]
0x03F55DF8: e00314aa  mov x0, x20
0x03F55DFC: e10315aa  mov x1, x21
0x03F55E00: 00013fd6  blr x8
0x03F55E04: c8b701b0  adrp x8, #0x764e000
0x03F55E08: 085d43f9  ldr x8, [x8, #0x6b8]
0x03F55E0C: a1008052  movz w1, #0x5
0x03F55E10: 000140f9  ldr x0, [x8]
0x03F55E14: 3aabc897  bl #0x3180afc
0x03F55E18: 200a00b4  cbz x0, #0x3f55f5c
0x03F55E1C: 081840b9  ldr w8, [x0, #0x18]
0x03F55E20: f40300aa  mov x20, x0
0x03F55E24: e8090034  cbz w8, #0x3f55f60
0x03F55E28: a1835cf8  ldur x1, [x29, #-0x38]
0x03F55E2C: f50314aa  mov x21, x20
0x03F55E30: a10e02f8  str x1, [x21, #0x20]!
0x03F55E34: e00315aa  mov x0, x21
0x03F55E38: e3aac897  bl #0x31809c4
0x03F55E3C: a8825fb8  ldur w8, [x21, #-8]
0x03F55E40: 1f050071  cmp w8, #1
0x03F55E44: e9080054  b.ls #0x3f55f60
0x03F55E48: c8b701b0  adrp x8, #0x764e000
0x03F55E4C: 085947f9  ldr x8, [x8, #0xeb0]
0x03F55E50: f50314aa  mov x21, x20
0x03F55E54: 010140f9  ldr x1, [x8]
0x03F55E58: a18e02f8  str x1, [x21, #0x28]!
0x03F55E5C: e00315aa  mov x0, x21
0x03F55E60: d9aac897  bl #0x31809c4
0x03F55E64: a8025fb8  ldur w8, [x21, #-0x10]
0x03F55E68: 1f090071  cmp w8, #2
0x03F55E6C: a9070054  b.ls #0x3f55f60
0x03F55E70: 612640f9  ldr x1, [x19, #0x48]
0x03F55E74: f50314aa  mov x21, x20
0x03F55E78: a10e03f8  str x1, [x21, #0x30]!
0x03F55E7C: e00315aa  mov x0, x21
0x03F55E80: d1aac897  bl #0x31809c4
0x03F55E84: a8825eb8  ldur w8, [x21, #-0x18]
0x03F55E88: 1f0d0071  cmp w8, #3
0x03F55E8C: a9060054  b.ls #0x3f55f60
0x03F55E90: 28b901d0  adrp x8, #0x767b000
0x03F55E94: 089546f9  ldr x8, [x8, #0xd28]
0x03F55E98: f50314aa  mov x21, x20
0x03F55E9C: 010140f9  ldr x1, [x8]
0x03F55EA0: a18e03f8  str x1, [x21, #0x38]!
0x03F55EA4: e00315aa  mov x0, x21
0x03F55EA8: c7aac897  bl #0x31809c4
0x03F55EAC: a8025eb8  ldur w8, [x21, #-0x20]
0x03F55EB0: 1f110071  cmp w8, #4
0x03F55EB4: 69050054  b.ls #0x3f55f60
0x03F55EB8: 611e40f9  ldr x1, [x19, #0x38]
0x03F55EBC: e00314aa  mov x0, x20
0x03F55EC0: 010c04f8  str x1, [x0, #0x40]!
0x03F55EC4: c0aac897  bl #0x31809c4
0x03F55EC8: e00314aa  mov x0, x20
0x03F55ECC: e1031faa  mov x1, xzr
0x03F55ED0: 41875694  bl #0x54f7bd4
0x03F55ED4: c8b80190  adrp x8, #0x766d000
0x03F55ED8: 086d46f9  ldr x8, [x8, #0xcd8]
0x03F55EDC: f30300aa  mov x19, x0
0x03F55EE0: 080140f9  ldr x8, [x8]
0x03F55EE4: 09e140b9  ldr w9, [x8, #0xe0]
0x03F55EE8: 69000035  cbnz w9, #0x3f55ef4
0x03F55EEC: e00308aa  mov x0, x8
0x03F55EF0: 27abc897  bl #0x3180b8c
0x03F55EF4: 28b901f0  adrp x8, #0x767c000
0x03F55EF8: 29b901d0  adrp x9, #0x767b000
0x03F55EFC: 2ab901f0  adrp x10, #0x767c000
0x03F55F00: 087941f9  ldr x8, [x8, #0x2f0]
0x03F55F04: 29f140f9  ldr x9, [x9, #0x1e0]
0x03F55F08: 4a7541f9  ldr x10, [x10, #0x2e8]
0x03F55F0C: e00313aa  mov x0, x19
0x03F55F10: 010140f9  ldr x1, [x8]
0x03F55F14: 230140f9  ldr x3, [x9]
0x03F55F18: 440140f9  ldr x4, [x10]
0x03F55F1C: e2031faa  mov x2, xzr
0x03F55F20: e5031faa  mov x5, xzr
0x03F55F24: e6031faa  mov x6, xzr
0x03F55F28: 43595494  bl #0x546c434
0x03F55F2C: 681740f9  ldr x8, [x27, #0x28]
0x03F55F30: a9835ff8  ldur x9, [x29, #-8]
0x03F55F34: 1f0109eb  cmp x8, x9
0x03F55F38: 61010054  b.ne #0x3f55f64
0x03F55F3C: bf030091  mov sp, x29
0x03F55F40: f44f45a9  ldp x20, x19, [sp, #0x50]
0x03F55F44: f65744a9  ldp x22, x21, [sp, #0x40]
0x03F55F48: f85f43a9  ldp x24, x23, [sp, #0x30]
0x03F55F4C: fa6742a9  ldp x26, x25, [sp, #0x20]
0x03F55F50: fb0b40f9  ldr x27, [sp, #0x10]
0x03F55F54: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x03F55F58: c0035fd6  ret
0x03F55F5C: 54abc897  bl #0x3180cac
0x03F55F60: 55abc897  bl #0x3180cb4
0x03F55F64: 8be2c994  bl #0x71ce990
0x03F55F68: 00018052  movz w0, #0x8
0x03F55F6C: 71e2c994  bl #0x71ce930
0x03F55F70: 880240f9  ldr x8, [x20]
0x03F55F74: 080000f9  str x8, [x0]
0x03F55F78: e19301f0  adrp x1, #0x71d4000
0x03F55F7C: 21a03491  add x1, x1, #0xd28
0x03F55F80: e2031faa  mov x2, xzr
0x03F55F84: 6fe2c994  bl #0x71ce940
0x03F55F88: 44000014  b #0x3f56098
0x03F55F8C: f80300aa  mov x24, x0
0x03F55F90: 64e2c994  bl #0x71ce920
0x03F55F94: 43000014  b #0x3f560a0
0x03F55F98: f80300aa  mov x24, x0
0x03F55F9C: 3f040071  cmp w1, #1
0x03F55FA0: 01080054  b.ne #0x3f560a0
0x03F55FA4: e00318aa  mov x0, x24
0x03F55FA8: 5ae2c994  bl #0x71ce910
0x03F55FAC: f80300aa  mov x24, x0
0x03F55FB0: c0b701b0  adrp x0, #0x764e000
0x03F55FB4: 006c42f9  ldr x0, [x0, #0x4d8]
0x03F55FB8: 9daac897  bl #0x3180a2c
0x03F55FBC: 080340f9  ldr x8, [x24]
0x03F55FC0: 010140f9  ldr x1, [x8]
0x03F55FC4: 45acc897  bl #0x31810d8
0x03F55FC8: 80050036  tbz w0, #0, #0x3f56078
0x03F55FCC: 180340f9  ldr x24, [x24]
0x03F55FD0: 54e2c994  bl #0x71ce920
0x03F55FD4: 20b901f0  adrp x0, #0x767c000
0x03F55FD8: 791e40f9  ldr x25, [x19, #0x38]
0x03F55FDC: 008041f9  ldr x0, [x0, #0x300]
0x03F55FE0: 93aac897  bl #0x3180a2c
0x03F55FE4: fa0300aa  mov x26, x0
0x03F55FE8: 20b901f0  adrp x0, #0x767c000
0x03F55FEC: 008441f9  ldr x0, [x0, #0x308]
0x03F55FF0: 8faac897  bl #0x3180a2c
0x03F55FF4: e10300aa  mov x1, x0
0x03F55FF8: e0031aaa  mov x0, x26
0x03F55FFC: e20318aa  mov x2, x24
0x03F56000: e30319aa  mov x3, x25
0x03F56004: e4031faa  mov x4, xzr
0x03F56008: c6875694  bl #0x54f7f20
0x03F5600C: f80300aa  mov x24, x0
0x03F56010: a0b801f0  adrp x0, #0x766d000
0x03F56014: 006c46f9  ldr x0, [x0, #0xcd8]
0x03F56018: 85aac897  bl #0x3180a2c
0x03F5601C: 08e040b9  ldr w8, [x0, #0xe0]
0x03F56020: 48000035  cbnz w8, #0x3f56028
0x03F56024: daaac897  bl #0x3180b8c
0x03F56028: 20b901d0  adrp x0, #0x767c000
0x03F5602C: 007841f9  ldr x0, [x0, #0x2f0]
0x03F56030: 7faac897  bl #0x3180a2c
0x03F56034: f90300aa  mov x25, x0
0x03F56038: 20b901b0  adrp x0, #0x767b000
0x03F5603C: 00f040f9  ldr x0, [x0, #0x1e0]
0x03F56040: 7baac897  bl #0x3180a2c
0x03F56044: fa0300aa  mov x26, x0
0x03F56048: 20b901d0  adrp x0, #0x767c000
0x03F5604C: 007441f9  ldr x0, [x0, #0x2e8]
0x03F56050: 77aac897  bl #0x3180a2c
0x03F56054: e40300aa  mov x4, x0
0x03F56058: e00318aa  mov x0, x24
0x03F5605C: e10319aa  mov x1, x25
0x03F56060: e2031faa  mov x2, xzr
0x03F56064: e3031aaa  mov x3, x26
0x03F56068: e5031faa  mov x5, xzr
0x03F5606C: e6031faa  mov x6, xzr
0x03F56070: f1585494  bl #0x546c434
0x03F56074: d6feff17  b #0x3f55bcc
0x03F56078: 00018052  movz w0, #0x8
0x03F5607C: 2de2c994  bl #0x71ce930
0x03F56080: 080340f9  ldr x8, [x24]
0x03F56084: 080000f9  str x8, [x0]
0x03F56088: e19301d0  adrp x1, #0x71d4000
0x03F5608C: 21a03491  add x1, x1, #0xd28
0x03F56090: e2031faa  mov x2, xzr
0x03F56094: 2be2c994  bl #0x71ce940
0x03F56098: f80300aa  mov x24, x0
0x03F5609C: 21e2c994  bl #0x71ce920
0x03F560A0: e00318aa  mov x0, x24
0x03F560A4: 2d3ecc97  bl #0x3265958
0x03F560A8: 1bcdba97  bl #0x2e09514

