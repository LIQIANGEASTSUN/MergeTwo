; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 9847 .SyncPayloadServiceBase.<>c__DisplayClass13_0<TPayload>
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; Generic instantiation from Il2CppDumper script.json | RVA 0x3F38EAC | Merger.Services.Backend.Sync.SyncPayloadServiceBase.<>c__DisplayClass13_0<object>$$.ctor
; native signature: void Merger_Services_Backend_Sync_SyncPayloadServiceBase___c__DisplayClass13_0_object____ctor (Merger_Services_Backend_Sync_SyncPayloadServiceBase___c__DisplayClass13_0_TPayload__o* __this, const MethodInfo_3F38EAC* method);
; bytes=8 sha256=ebf9a26e4ab8645d2f5b154cbfdaf89f33074bc12ba1b051c39cd308d46165b5 status=arm64_complete_bound indexed_start=True
0x03F38EAC: e1031faa  mov x1, xzr
0x03F38EB0: d3855e14  b #0x56da5fc

; Generic instantiation from Il2CppDumper script.json | RVA 0x3F39140 | Merger.Services.Backend.Sync.SyncPayloadServiceBase.<>c__DisplayClass13_0<__Il2CppFullySharedGenericType>$$.ctor
; native signature: void Merger_Services_Backend_Sync_SyncPayloadServiceBase___c__DisplayClass13_0___Il2CppFullySharedGenericType____ctor (Merger_Services_Backend_Sync_SyncPayloadServiceBase___c__DisplayClass13_0_TPayload__o* __this, const MethodInfo_3F39140* method);
; bytes=8 sha256=9baf48141ccdaf35699e39ce045d08fdf271afb7fe679869222981a52118f458 status=arm64_complete_bound indexed_start=True
0x03F39140: e1031faa  mov x1, xzr
0x03F39144: 2e855e14  b #0x56da5fc

; Generic instantiation from Il2CppDumper script.json | RVA 0x3F38EB4 | Merger.Services.Backend.Sync.SyncPayloadServiceBase.<>c__DisplayClass13_0<object>$$<HandleSyncRequest>b__0
; native signature: void Merger_Services_Backend_Sync_SyncPayloadServiceBase___c__DisplayClass13_0_object____HandleSyncRequest_b__0 (Merger_Services_Backend_Sync_SyncPayloadServiceBase___c__DisplayClass13_0_TPayload__o* __this, System_Exception_o* exception, const MethodInfo_3F38EB4* method);
; bytes=320 sha256=c84986dfa48a84bfa0bd0a494abe452ef4cce09107d9de45e65f1eef080a194a status=arm64_complete_bound indexed_start=True
0x03F38EB4: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x03F38EB8: f65701a9  stp x22, x21, [sp, #0x10]
0x03F38EBC: f44f02a9  stp x20, x19, [sp, #0x20]
0x03F38EC0: f5ee01f0  adrp x21, #0x7d17000
0x03F38EC4: a8f27d39  ldrb w8, [x21, #0xf7c]
0x03F38EC8: f40301aa  mov x20, x1
0x03F38ECC: f30300aa  mov x19, x0
0x03F38ED0: 88010037  tbnz w8, #0, #0x3f38f00
0x03F38ED4: a0b801d0  adrp x0, #0x764e000
0x03F38ED8: 006c42f9  ldr x0, [x0, #0x4d8]
0x03F38EDC: cf1ec997  bl #0x3180a18
0x03F38EE0: a0b901f0  adrp x0, #0x766f000
0x03F38EE4: 002441f9  ldr x0, [x0, #0x248]
0x03F38EE8: cc1ec997  bl #0x3180a18
0x03F38EEC: 20ba0190  adrp x0, #0x767c000
0x03F38EF0: 008840f9  ldr x0, [x0, #0x110]
0x03F38EF4: c91ec997  bl #0x3180a18
0x03F38EF8: 28008052  movz w8, #0x1
0x03F38EFC: a8f23d39  strb w8, [x21, #0xf7c]
0x03F38F00: 600e40f9  ldr x0, [x19, #0x18]
0x03F38F04: 600700b4  cbz x0, #0x3f38ff0
0x03F38F08: 080040f9  ldr x8, [x0]
0x03F38F0C: 730a40f9  ldr x19, [x19, #0x10]
0x03F38F10: 094d41f9  ldr x9, [x8, #0x298]
0x03F38F14: 015141f9  ldr x1, [x8, #0x2a0]
0x03F38F18: 20013fd6  blr x9
0x03F38F1C: b40600b4  cbz x20, #0x3f38ff0
0x03F38F20: 880240f9  ldr x8, [x20]
0x03F38F24: 36ba0190  adrp x22, #0x767c000
0x03F38F28: b7b801d0  adrp x23, #0x764e000
0x03F38F2C: f50300aa  mov x21, x0
0x03F38F30: 098558a9  ldp x9, x1, [x8, #0x188]
0x03F38F34: d68a40f9  ldr x22, [x22, #0x110]
0x03F38F38: f76e42f9  ldr x23, [x23, #0x4d8]
0x03F38F3C: e00314aa  mov x0, x20
0x03F38F40: 20013fd6  blr x9
0x03F38F44: c10240f9  ldr x1, [x22]
0x03F38F48: e20300aa  mov x2, x0
0x03F38F4C: e00315aa  mov x0, x21
0x03F38F50: e3031faa  mov x3, xzr
0x03F38F54: 79f95694  bl #0x54f7538
0x03F38F58: e80240f9  ldr x8, [x23]
0x03F38F5C: f50300aa  mov x21, x0
0x03F38F60: e00308aa  mov x0, x8
0x03F38F64: 4f1fc997  bl #0x3180ca0
0x03F38F68: e10315aa  mov x1, x21
0x03F38F6C: e2031faa  mov x2, xzr
0x03F38F70: f40300aa  mov x20, x0
0x03F38F74: 81575e94  bl #0x56ced78
0x03F38F78: d30300b4  cbz x19, #0x3f38ff0
0x03F38F7C: aab901f0  adrp x10, #0x766f000
0x03F38F80: 680240f9  ldr x8, [x19]
0x03F38F84: 4a2541f9  ldr x10, [x10, #0x248]
0x03F38F88: 095d4279  ldrh w9, [x8, #0x12e]
0x03F38F8C: 410140f9  ldr x1, [x10]
0x03F38F90: 290100b4  cbz x9, #0x3f38fb4
0x03F38F94: 0a5940f9  ldr x10, [x8, #0xb0]
0x03F38F98: 4a210091  add x10, x10, #8
0x03F38F9C: 4b815ff8  ldur x11, [x10, #-8]
0x03F38FA0: 7f0101eb  cmp x11, x1
0x03F38FA4: 00010054  b.eq #0x3f38fc4
0x03F38FA8: 290500f1  subs x9, x9, #1
0x03F38FAC: 4a410091  add x10, x10, #0x10
0x03F38FB0: 61ffff54  b.ne #0x3f38f9c
0x03F38FB4: 82008052  movz w2, #0x4
0x03F38FB8: e00313aa  mov x0, x19
0x03F38FBC: d576c897  bl #0x3156b10
0x03F38FC0: 05000014  b #0x3f38fd4
0x03F38FC4: 490140b9  ldr w9, [x10]
0x03F38FC8: 29110011  add w9, w9, #4
0x03F38FCC: 08d1298b  add x8, x8, w9, sxtw #4
0x03F38FD0: 00e10491  add x0, x8, #0x138
0x03F38FD4: 030840a9  ldp x3, x2, [x0]
0x03F38FD8: e00313aa  mov x0, x19
0x03F38FDC: e10314aa  mov x1, x20
0x03F38FE0: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03F38FE4: f65741a9  ldp x22, x21, [sp, #0x10]
0x03F38FE8: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x03F38FEC: 60001fd6  br x3
0x03F38FF0: 2f1fc997  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3F39148 | Merger.Services.Backend.Sync.SyncPayloadServiceBase.<>c__DisplayClass13_0<__Il2CppFullySharedGenericType>$$<HandleSyncRequest>b__0
; native signature: void Merger_Services_Backend_Sync_SyncPayloadServiceBase___c__DisplayClass13_0___Il2CppFullySharedGenericType____HandleSyncRequest_b__0 (Merger_Services_Backend_Sync_SyncPayloadServiceBase___c__DisplayClass13_0_TPayload__o* __this, System_Exception_o* exception, const MethodInfo_3F39148* method);
; bytes=320 sha256=7dd49245360df92374a423b3fd405739173708d4b5b073e94dd8bdeeb75c10d3 status=arm64_complete_bound indexed_start=True
0x03F39148: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x03F3914C: f65701a9  stp x22, x21, [sp, #0x10]
0x03F39150: f44f02a9  stp x20, x19, [sp, #0x20]
0x03F39154: f5ee01d0  adrp x21, #0x7d17000
0x03F39158: a8f67d39  ldrb w8, [x21, #0xf7d]
0x03F3915C: f40301aa  mov x20, x1
0x03F39160: f30300aa  mov x19, x0
0x03F39164: 88010037  tbnz w8, #0, #0x3f39194
0x03F39168: a0b801b0  adrp x0, #0x764e000
0x03F3916C: 006c42f9  ldr x0, [x0, #0x4d8]
0x03F39170: 2a1ec997  bl #0x3180a18
0x03F39174: a0b901d0  adrp x0, #0x766f000
0x03F39178: 002441f9  ldr x0, [x0, #0x248]
0x03F3917C: 271ec997  bl #0x3180a18
0x03F39180: 00ba01f0  adrp x0, #0x767c000
0x03F39184: 008840f9  ldr x0, [x0, #0x110]
0x03F39188: 241ec997  bl #0x3180a18
0x03F3918C: 28008052  movz w8, #0x1
0x03F39190: a8f63d39  strb w8, [x21, #0xf7d]
0x03F39194: 600e40f9  ldr x0, [x19, #0x18]
0x03F39198: 600700b4  cbz x0, #0x3f39284
0x03F3919C: 080040f9  ldr x8, [x0]
0x03F391A0: 730a40f9  ldr x19, [x19, #0x10]
0x03F391A4: 094d41f9  ldr x9, [x8, #0x298]
0x03F391A8: 015141f9  ldr x1, [x8, #0x2a0]
0x03F391AC: 20013fd6  blr x9
0x03F391B0: b40600b4  cbz x20, #0x3f39284
0x03F391B4: 880240f9  ldr x8, [x20]
0x03F391B8: 16ba01f0  adrp x22, #0x767c000
0x03F391BC: b7b801b0  adrp x23, #0x764e000
0x03F391C0: f50300aa  mov x21, x0
0x03F391C4: 098558a9  ldp x9, x1, [x8, #0x188]
0x03F391C8: d68a40f9  ldr x22, [x22, #0x110]
0x03F391CC: f76e42f9  ldr x23, [x23, #0x4d8]
0x03F391D0: e00314aa  mov x0, x20
0x03F391D4: 20013fd6  blr x9
0x03F391D8: c10240f9  ldr x1, [x22]
0x03F391DC: e20300aa  mov x2, x0
0x03F391E0: e00315aa  mov x0, x21
0x03F391E4: e3031faa  mov x3, xzr
0x03F391E8: d4f85694  bl #0x54f7538
0x03F391EC: e80240f9  ldr x8, [x23]
0x03F391F0: f50300aa  mov x21, x0
0x03F391F4: e00308aa  mov x0, x8
0x03F391F8: aa1ec997  bl #0x3180ca0
0x03F391FC: e10315aa  mov x1, x21
0x03F39200: e2031faa  mov x2, xzr
0x03F39204: f40300aa  mov x20, x0
0x03F39208: dc565e94  bl #0x56ced78
0x03F3920C: d30300b4  cbz x19, #0x3f39284
0x03F39210: aab901d0  adrp x10, #0x766f000
0x03F39214: 680240f9  ldr x8, [x19]
0x03F39218: 4a2541f9  ldr x10, [x10, #0x248]
0x03F3921C: 095d4279  ldrh w9, [x8, #0x12e]
0x03F39220: 410140f9  ldr x1, [x10]
0x03F39224: 290100b4  cbz x9, #0x3f39248
0x03F39228: 0a5940f9  ldr x10, [x8, #0xb0]
0x03F3922C: 4a210091  add x10, x10, #8
0x03F39230: 4b815ff8  ldur x11, [x10, #-8]
0x03F39234: 7f0101eb  cmp x11, x1
0x03F39238: 00010054  b.eq #0x3f39258
0x03F3923C: 290500f1  subs x9, x9, #1
0x03F39240: 4a410091  add x10, x10, #0x10
0x03F39244: 61ffff54  b.ne #0x3f39230
0x03F39248: 82008052  movz w2, #0x4
0x03F3924C: e00313aa  mov x0, x19
0x03F39250: 3076c897  bl #0x3156b10
0x03F39254: 05000014  b #0x3f39268
0x03F39258: 490140b9  ldr w9, [x10]
0x03F3925C: 29110011  add w9, w9, #4
0x03F39260: 08d1298b  add x8, x8, w9, sxtw #4
0x03F39264: 00e10491  add x0, x8, #0x138
0x03F39268: 030840a9  ldp x3, x2, [x0]
0x03F3926C: e00313aa  mov x0, x19
0x03F39270: e10314aa  mov x1, x20
0x03F39274: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03F39278: f65741a9  ldp x22, x21, [sp, #0x10]
0x03F3927C: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x03F39280: 60001fd6  br x3
0x03F39284: 8a1ec997  bl #0x3180cac

