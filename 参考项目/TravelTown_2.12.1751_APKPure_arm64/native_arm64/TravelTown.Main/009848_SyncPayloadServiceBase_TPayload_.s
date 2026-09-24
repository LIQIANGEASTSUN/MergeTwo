; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 9848 Merger.Services.Backend.Sync.SyncPayloadServiceBase<TPayload>
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; Generic instantiation from Il2CppDumper script.json | RVA 0x45527EC | Merger.Services.Backend.Sync.SyncPayloadServiceBase<object>$$get_JsonService
; native signature: Framework_Core_Services_IJsonService_o* Merger_Services_Backend_Sync_SyncPayloadServiceBase_object___get_JsonService (Merger_Services_Backend_Sync_SyncPayloadServiceBase_TPayload__o* __this, const MethodInfo_45527EC* method);
; bytes=8 sha256=c0b9896d6c3d8aacf384c0d0cf5d897e84f621efe31cc89c980be348eb9c6614 status=arm64_complete_bound indexed_start=True
0x045527EC: 001440f9  ldr x0, [x0, #0x28]
0x045527F0: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x4552C9C | Merger.Services.Backend.Sync.SyncPayloadServiceBase<__Il2CppFullySharedGenericType>$$get_JsonService
; native signature: Framework_Core_Services_IJsonService_o* Merger_Services_Backend_Sync_SyncPayloadServiceBase___Il2CppFullySharedGenericType___get_JsonService (Merger_Services_Backend_Sync_SyncPayloadServiceBase_TPayload__o* __this, const MethodInfo_4552C9C* method);
; bytes=8 sha256=c0b9896d6c3d8aacf384c0d0cf5d897e84f621efe31cc89c980be348eb9c6614 status=arm64_complete_bound indexed_start=True
0x04552C9C: 001440f9  ldr x0, [x0, #0x28]
0x04552CA0: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x45527F4 | Merger.Services.Backend.Sync.SyncPayloadServiceBase<object>$$get_GameStarted
; native signature: bool Merger_Services_Backend_Sync_SyncPayloadServiceBase_object___get_GameStarted (Merger_Services_Backend_Sync_SyncPayloadServiceBase_TPayload__o* __this, const MethodInfo_45527F4* method);
; bytes=184 sha256=c5fec778d1381fe2458648f2d0ca8519107ae7aed3557f9d847d3d11e12eb5e1 status=arm64_complete_bound indexed_start=True
0x045527F4: fe0f1ef8  str x30, [sp, #-0x20]!
0x045527F8: f44f01a9  stp x20, x19, [sp, #0x10]
0x045527FC: 34be01f0  adrp x20, #0x7d19000
0x04552800: 882e4639  ldrb w8, [x20, #0x18b]
0x04552804: f30300aa  mov x19, x0
0x04552808: 28010037  tbnz w8, #0, #0x455282c
0x0455280C: 00890190  adrp x0, #0x7672000
0x04552810: 008844f9  ldr x0, [x0, #0x910]
0x04552814: 81b8b097  bl #0x3180a18
0x04552818: 00890190  adrp x0, #0x7672000
0x0455281C: 006043f9  ldr x0, [x0, #0x6c0]
0x04552820: 7eb8b097  bl #0x3180a18
0x04552824: 28008052  movz w8, #0x1
0x04552828: 882e0639  strb w8, [x20, #0x18b]
0x0455282C: 732240f9  ldr x19, [x19, #0x40]
0x04552830: d30300b4  cbz x19, #0x45528a8
0x04552834: 0a890190  adrp x10, #0x7672000
0x04552838: 680240f9  ldr x8, [x19]
0x0455283C: 4a6143f9  ldr x10, [x10, #0x6c0]
0x04552840: 095d4279  ldrh w9, [x8, #0x12e]
0x04552844: 410140f9  ldr x1, [x10]
0x04552848: 290100b4  cbz x9, #0x455286c
0x0455284C: 0a5940f9  ldr x10, [x8, #0xb0]
0x04552850: 4a210091  add x10, x10, #8
0x04552854: 4b815ff8  ldur x11, [x10, #-8]
0x04552858: 7f0101eb  cmp x11, x1
0x0455285C: 00010054  b.eq #0x455287c
0x04552860: 290500f1  subs x9, x9, #1
0x04552864: 4a410091  add x10, x10, #0x10
0x04552868: 61ffff54  b.ne #0x4552854
0x0455286C: e00313aa  mov x0, x19
0x04552870: e2031f2a  mov w2, wzr
0x04552874: a710b097  bl #0x3156b10
0x04552878: 04000014  b #0x4552888
0x0455287C: 490180b9  ldrsw x9, [x10]
0x04552880: 0811098b  add x8, x8, x9, lsl #4
0x04552884: 00e10491  add x0, x8, #0x138
0x04552888: 080440a9  ldp x8, x1, [x0]
0x0455288C: e00313aa  mov x0, x19
0x04552890: 00013fd6  blr x8
0x04552894: a00000b4  cbz x0, #0x45528a8
0x04552898: 00804039  ldrb w0, [x0, #0x20]
0x0455289C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x045528A0: fe0742f8  ldr x30, [sp], #0x20
0x045528A4: c0035fd6  ret
0x045528A8: 01b9b097  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4552CA4 | Merger.Services.Backend.Sync.SyncPayloadServiceBase<__Il2CppFullySharedGenericType>$$get_GameStarted
; native signature: bool Merger_Services_Backend_Sync_SyncPayloadServiceBase___Il2CppFullySharedGenericType___get_GameStarted (Merger_Services_Backend_Sync_SyncPayloadServiceBase_TPayload__o* __this, const MethodInfo_4552CA4* method);
; bytes=184 sha256=04bd5131545326715c08730b17b3832b67748783b061d15f6c61d435222af982 status=arm64_complete_bound indexed_start=True
0x04552CA4: fe0f1ef8  str x30, [sp, #-0x20]!
0x04552CA8: f44f01a9  stp x20, x19, [sp, #0x10]
0x04552CAC: 34be01f0  adrp x20, #0x7d19000
0x04552CB0: 883a4639  ldrb w8, [x20, #0x18e]
0x04552CB4: f30300aa  mov x19, x0
0x04552CB8: 28010037  tbnz w8, #0, #0x4552cdc
0x04552CBC: 00890190  adrp x0, #0x7672000
0x04552CC0: 008844f9  ldr x0, [x0, #0x910]
0x04552CC4: 55b7b097  bl #0x3180a18
0x04552CC8: 00890190  adrp x0, #0x7672000
0x04552CCC: 006043f9  ldr x0, [x0, #0x6c0]
0x04552CD0: 52b7b097  bl #0x3180a18
0x04552CD4: 28008052  movz w8, #0x1
0x04552CD8: 883a0639  strb w8, [x20, #0x18e]
0x04552CDC: 732240f9  ldr x19, [x19, #0x40]
0x04552CE0: d30300b4  cbz x19, #0x4552d58
0x04552CE4: 0a890190  adrp x10, #0x7672000
0x04552CE8: 680240f9  ldr x8, [x19]
0x04552CEC: 4a6143f9  ldr x10, [x10, #0x6c0]
0x04552CF0: 095d4279  ldrh w9, [x8, #0x12e]
0x04552CF4: 410140f9  ldr x1, [x10]
0x04552CF8: 290100b4  cbz x9, #0x4552d1c
0x04552CFC: 0a5940f9  ldr x10, [x8, #0xb0]
0x04552D00: 4a210091  add x10, x10, #8
0x04552D04: 4b815ff8  ldur x11, [x10, #-8]
0x04552D08: 7f0101eb  cmp x11, x1
0x04552D0C: 00010054  b.eq #0x4552d2c
0x04552D10: 290500f1  subs x9, x9, #1
0x04552D14: 4a410091  add x10, x10, #0x10
0x04552D18: 61ffff54  b.ne #0x4552d04
0x04552D1C: e00313aa  mov x0, x19
0x04552D20: e2031f2a  mov w2, wzr
0x04552D24: 7b0fb097  bl #0x3156b10
0x04552D28: 04000014  b #0x4552d38
0x04552D2C: 490180b9  ldrsw x9, [x10]
0x04552D30: 0811098b  add x8, x8, x9, lsl #4
0x04552D34: 00e10491  add x0, x8, #0x138
0x04552D38: 080440a9  ldp x8, x1, [x0]
0x04552D3C: e00313aa  mov x0, x19
0x04552D40: 00013fd6  blr x8
0x04552D44: a00000b4  cbz x0, #0x4552d58
0x04552D48: 00804039  ldrb w0, [x0, #0x20]
0x04552D4C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x04552D50: fe0742f8  ldr x30, [sp], #0x20
0x04552D54: c0035fd6  ret
0x04552D58: d5b7b097  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x45528AC | Merger.Services.Backend.Sync.SyncPayloadServiceBase<object>$$HandleSyncRequest
; native signature: strange_extensions_promise_api_IPromise_o* Merger_Services_Backend_Sync_SyncPayloadServiceBase_object___HandleSyncRequest (Merger_Services_Backend_Sync_SyncPayloadServiceBase_TPayload__o* __this, Merger_Services_Backend_Sync_BackendSyncEntitiesWrapper_o* backendSyncEntitiesWrapper, bool sendAsCheat, const MethodInfo_45528AC* method);
; bytes=740 sha256=a204c9d25de4b5ece6fae7ad3b4bee93e4532c00d5fafc74dd6d206c78c24652 status=arm64_complete_bound indexed_start=True
0x045528AC: fe0f1bf8  str x30, [sp, #-0x50]!
0x045528B0: fa6701a9  stp x26, x25, [sp, #0x10]
0x045528B4: f85f02a9  stp x24, x23, [sp, #0x20]
0x045528B8: f65703a9  stp x22, x21, [sp, #0x30]
0x045528BC: f44f04a9  stp x20, x19, [sp, #0x40]
0x045528C0: 35be01f0  adrp x21, #0x7d19000
0x045528C4: a8324639  ldrb w8, [x21, #0x18c]
0x045528C8: f30303aa  mov x19, x3
0x045528CC: f703022a  mov w23, w2
0x045528D0: f40301aa  mov x20, x1
0x045528D4: f60300aa  mov x22, x0
0x045528D8: 48020037  tbnz w8, #0, #0x4552920
0x045528DC: e08801b0  adrp x0, #0x766f000
0x045528E0: 002041f9  ldr x0, [x0, #0x240]
0x045528E4: 4db8b097  bl #0x3180a18
0x045528E8: e0870190  adrp x0, #0x764e000
0x045528EC: 00ac43f9  ldr x0, [x0, #0x758]
0x045528F0: 4ab8b097  bl #0x3180a18
0x045528F4: e08801b0  adrp x0, #0x766f000
0x045528F8: 002441f9  ldr x0, [x0, #0x248]
0x045528FC: 47b8b097  bl #0x3180a18
0x04552900: e08801f0  adrp x0, #0x7671000
0x04552904: 006047f9  ldr x0, [x0, #0xec0]
0x04552908: 44b8b097  bl #0x3180a18
0x0455290C: e08801b0  adrp x0, #0x766f000
0x04552910: 007044f9  ldr x0, [x0, #0x8e0]
0x04552914: 41b8b097  bl #0x3180a18
0x04552918: 28008052  movz w8, #0x1
0x0455291C: a8320639  strb w8, [x21, #0x18c]
0x04552920: 681240f9  ldr x8, [x19, #0x20]
0x04552924: 086140f9  ldr x8, [x8, #0xc0]
0x04552928: 000540f9  ldr x0, [x8, #8]
0x0455292C: 08d44439  ldrb w8, [x0, #0x135]
0x04552930: 48000037  tbnz w8, #0, #0x4552938
0x04552934: ba0fb097  bl #0x315681c
0x04552938: dab8b097  bl #0x3180ca0
0x0455293C: 681240f9  ldr x8, [x19, #0x20]
0x04552940: f50300aa  mov x21, x0
0x04552944: 086140f9  ldr x8, [x8, #0xc0]
0x04552948: 010940f9  ldr x1, [x8, #0x10]
0x0455294C: 5899e797  bl #0x3f38eac
0x04552950: f51100b4  cbz x21, #0x4552b8c
0x04552954: f88801b0  adrp x24, #0x766f000
0x04552958: fa870190  adrp x26, #0x764e000
0x0455295C: 187344f9  ldr x24, [x24, #0x8e0]
0x04552960: 5aaf43f9  ldr x26, [x26, #0x758]
0x04552964: e00315aa  mov x0, x21
0x04552968: 168c01f8  str x22, [x0, #0x18]!
0x0455296C: e10316aa  mov x1, x22
0x04552970: 15b8b097  bl #0x31809c4
0x04552974: c80240f9  ldr x8, [x22]
0x04552978: e00316aa  mov x0, x22
0x0455297C: e10314aa  mov x1, x20
0x04552980: 093d41f9  ldr x9, [x8, #0x278]
0x04552984: 024141f9  ldr x2, [x8, #0x280]
0x04552988: 20013fd6  blr x9
0x0455298C: 080340f9  ldr x8, [x24]
0x04552990: f80300aa  mov x24, x0
0x04552994: e00308aa  mov x0, x8
0x04552998: c2b8b097  bl #0x3180ca0
0x0455299C: e1031faa  mov x1, xzr
0x045529A0: f90300aa  mov x25, x0
0x045529A4: c6b95194  bl #0x59c10bc
0x045529A8: f40315aa  mov x20, x21
0x045529AC: 990e01f8  str x25, [x20, #0x10]!
0x045529B0: e00314aa  mov x0, x20
0x045529B4: e10319aa  mov x1, x25
0x045529B8: 03b8b097  bl #0x31809c4
0x045529BC: c90240f9  ldr x9, [x22]
0x045529C0: ff020072  tst w23, #1
0x045529C4: 08068052  movz w8, #0x30
0x045529C8: 0a078052  movz w10, #0x38
0x045529CC: 4811889a  csel x8, x10, x8, ne
0x045529D0: c26a68f8  ldr x2, [x22, x8]
0x045529D4: 284541f9  ldr x8, [x9, #0x288]
0x045529D8: 234941f9  ldr x3, [x9, #0x290]
0x045529DC: e00316aa  mov x0, x22
0x045529E0: e10318aa  mov x1, x24
0x045529E4: 00013fd6  blr x8
0x045529E8: 480340f9  ldr x8, [x26]
0x045529EC: 980240f9  ldr x24, [x20]
0x045529F0: f60300aa  mov x22, x0
0x045529F4: e00308aa  mov x0, x8
0x045529F8: aab8b097  bl #0x3180ca0
0x045529FC: 980c00b4  cbz x24, #0x4552b8c
0x04552A00: f98801f0  adrp x25, #0x7671000
0x04552A04: 080340f9  ldr x8, [x24]
0x04552A08: 396347f9  ldr x25, [x25, #0xec0]
0x04552A0C: f70300aa  mov x23, x0
0x04552A10: 095d4279  ldrh w9, [x8, #0x12e]
0x04552A14: 210340f9  ldr x1, [x25]
0x04552A18: 290100b4  cbz x9, #0x4552a3c
0x04552A1C: 0a5940f9  ldr x10, [x8, #0xb0]
0x04552A20: 4a210091  add x10, x10, #8
0x04552A24: 4b815ff8  ldur x11, [x10, #-8]
0x04552A28: 7f0101eb  cmp x11, x1
0x04552A2C: 00010054  b.eq #0x4552a4c
0x04552A30: 290500f1  subs x9, x9, #1
0x04552A34: 4a410091  add x10, x10, #0x10
0x04552A38: 61ffff54  b.ne #0x4552a24
0x04552A3C: 22008052  movz w2, #0x1
0x04552A40: e00318aa  mov x0, x24
0x04552A44: 3310b097  bl #0x3156b10
0x04552A48: 05000014  b #0x4552a5c
0x04552A4C: 490140b9  ldr w9, [x10]
0x04552A50: 29050011  add w9, w9, #1
0x04552A54: 08d1298b  add x8, x8, w9, sxtw #4
0x04552A58: 00e10491  add x0, x8, #0x138
0x04552A5C: 020440f9  ldr x2, [x0, #8]
0x04552A60: e00317aa  mov x0, x23
0x04552A64: e10318aa  mov x1, x24
0x04552A68: e3031faa  mov x3, xzr
0x04552A6C: 316b4294  bl #0x55ed730
0x04552A70: f60800b4  cbz x22, #0x4552b8c
0x04552A74: c80240f9  ldr x8, [x22]
0x04552A78: f88801b0  adrp x24, #0x766f000
0x04552A7C: 210340f9  ldr x1, [x25]
0x04552A80: 095d4279  ldrh w9, [x8, #0x12e]
0x04552A84: 182341f9  ldr x24, [x24, #0x240]
0x04552A88: 290100b4  cbz x9, #0x4552aac
0x04552A8C: 0a5940f9  ldr x10, [x8, #0xb0]
0x04552A90: 4a210091  add x10, x10, #8
0x04552A94: 4b815ff8  ldur x11, [x10, #-8]
0x04552A98: 7f0101eb  cmp x11, x1
0x04552A9C: 00010054  b.eq #0x4552abc
0x04552AA0: 290500f1  subs x9, x9, #1
0x04552AA4: 4a410091  add x10, x10, #0x10
0x04552AA8: 61ffff54  b.ne #0x4552a94
0x04552AAC: e00316aa  mov x0, x22
0x04552AB0: e2031f2a  mov w2, wzr
0x04552AB4: 1710b097  bl #0x3156b10
0x04552AB8: 04000014  b #0x4552ac8
0x04552ABC: 490180b9  ldrsw x9, [x10]
0x04552AC0: 0811098b  add x8, x8, x9, lsl #4
0x04552AC4: 00e10491  add x0, x8, #0x138
0x04552AC8: 080840a9  ldp x8, x2, [x0]
0x04552ACC: e00316aa  mov x0, x22
0x04552AD0: e10317aa  mov x1, x23
0x04552AD4: 00013fd6  blr x8
0x04552AD8: 080340f9  ldr x8, [x24]
0x04552ADC: f60300aa  mov x22, x0
0x04552AE0: e00308aa  mov x0, x8
0x04552AE4: 6fb8b097  bl #0x3180ca0
0x04552AE8: 681240f9  ldr x8, [x19, #0x20]
0x04552AEC: e10315aa  mov x1, x21
0x04552AF0: e3031faa  mov x3, xzr
0x04552AF4: f30300aa  mov x19, x0
0x04552AF8: 086140f9  ldr x8, [x8, #0xc0]
0x04552AFC: 021940f9  ldr x2, [x8, #0x30]
0x04552B00: b53d3794  bl #0x53221d4
0x04552B04: 560400b4  cbz x22, #0x4552b8c
0x04552B08: ea8801b0  adrp x10, #0x766f000
0x04552B0C: c80240f9  ldr x8, [x22]
0x04552B10: 4a2541f9  ldr x10, [x10, #0x248]
0x04552B14: 095d4279  ldrh w9, [x8, #0x12e]
0x04552B18: 410140f9  ldr x1, [x10]
0x04552B1C: 290100b4  cbz x9, #0x4552b40
0x04552B20: 0a5940f9  ldr x10, [x8, #0xb0]
0x04552B24: 4a210091  add x10, x10, #8
0x04552B28: 4b815ff8  ldur x11, [x10, #-8]
0x04552B2C: 7f0101eb  cmp x11, x1
0x04552B30: 00010054  b.eq #0x4552b50
0x04552B34: 290500f1  subs x9, x9, #1
0x04552B38: 4a410091  add x10, x10, #0x10
0x04552B3C: 61ffff54  b.ne #0x4552b28
0x04552B40: 22008052  movz w2, #0x1
0x04552B44: e00316aa  mov x0, x22
0x04552B48: f20fb097  bl #0x3156b10
0x04552B4C: 05000014  b #0x4552b60
0x04552B50: 490140b9  ldr w9, [x10]
0x04552B54: 29050011  add w9, w9, #1
0x04552B58: 08d1298b  add x8, x8, w9, sxtw #4
0x04552B5C: 00e10491  add x0, x8, #0x138
0x04552B60: 080840a9  ldp x8, x2, [x0]
0x04552B64: e00316aa  mov x0, x22
0x04552B68: e10313aa  mov x1, x19
0x04552B6C: 00013fd6  blr x8
0x04552B70: 800240f9  ldr x0, [x20]
0x04552B74: f44f44a9  ldp x20, x19, [sp, #0x40]
0x04552B78: f65743a9  ldp x22, x21, [sp, #0x30]
0x04552B7C: f85f42a9  ldp x24, x23, [sp, #0x20]
0x04552B80: fa6741a9  ldp x26, x25, [sp, #0x10]
0x04552B84: fe0745f8  ldr x30, [sp], #0x50
0x04552B88: c0035fd6  ret
0x04552B8C: 48b8b097  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4552D5C | Merger.Services.Backend.Sync.SyncPayloadServiceBase<__Il2CppFullySharedGenericType>$$HandleSyncRequest
; native signature: strange_extensions_promise_api_IPromise_o* Merger_Services_Backend_Sync_SyncPayloadServiceBase___Il2CppFullySharedGenericType___HandleSyncRequest (Merger_Services_Backend_Sync_SyncPayloadServiceBase_TPayload__o* __this, Merger_Services_Backend_Sync_BackendSyncEntitiesWrapper_o* backendSyncEntitiesWrapper, bool sendAsCheat, const MethodInfo_4552D5C* method);
; bytes=920 sha256=04e4ba98d02978b46a73775c1d34882c68b27c0e09ad713166bd2839f8ef3b4e status=arm64_complete_bound indexed_start=True
0x04552D5C: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x04552D60: fc6f01a9  stp x28, x27, [sp, #0x10]
0x04552D64: fa6702a9  stp x26, x25, [sp, #0x20]
0x04552D68: f85f03a9  stp x24, x23, [sp, #0x30]
0x04552D6C: f65704a9  stp x22, x21, [sp, #0x40]
0x04552D70: f44f05a9  stp x20, x19, [sp, #0x50]
0x04552D74: fd030091  mov x29, sp
0x04552D78: ffc300d1  sub sp, sp, #0x30
0x04552D7C: 48d03bd5  mrs x8, tpidr_el0
0x04552D80: a8831df8  stur x8, [x29, #-0x28]
0x04552D84: 081540f9  ldr x8, [x8, #0x28]
0x04552D88: 35be01f0  adrp x21, #0x7d19000
0x04552D8C: f30303aa  mov x19, x3
0x04552D90: f703022a  mov w23, w2
0x04552D94: a8831ff8  stur x8, [x29, #-8]
0x04552D98: a83e4639  ldrb w8, [x21, #0x18f]
0x04552D9C: f40301aa  mov x20, x1
0x04552DA0: f60300aa  mov x22, x0
0x04552DA4: 48020037  tbnz w8, #0, #0x4552dec
0x04552DA8: e08801b0  adrp x0, #0x766f000
0x04552DAC: 002041f9  ldr x0, [x0, #0x240]
0x04552DB0: 1ab7b097  bl #0x3180a18
0x04552DB4: e0870190  adrp x0, #0x764e000
0x04552DB8: 00ac43f9  ldr x0, [x0, #0x758]
0x04552DBC: 17b7b097  bl #0x3180a18
0x04552DC0: e08801b0  adrp x0, #0x766f000
0x04552DC4: 002441f9  ldr x0, [x0, #0x248]
0x04552DC8: 14b7b097  bl #0x3180a18
0x04552DCC: e08801f0  adrp x0, #0x7671000
0x04552DD0: 006047f9  ldr x0, [x0, #0xec0]
0x04552DD4: 11b7b097  bl #0x3180a18
0x04552DD8: e08801b0  adrp x0, #0x766f000
0x04552DDC: 007044f9  ldr x0, [x0, #0x8e0]
0x04552DE0: 0eb7b097  bl #0x3180a18
0x04552DE4: 28008052  movz w8, #0x1
0x04552DE8: a83e0639  strb w8, [x21, #0x18f]
0x04552DEC: 681240f9  ldr x8, [x19, #0x20]
0x04552DF0: 156140f9  ldr x21, [x8, #0xc0]
0x04552DF4: a81240f9  ldr x8, [x21, #0x20]
0x04552DF8: 19fd40b9  ldr w25, [x8, #0xfc]
0x04552DFC: e8030091  mov x8, sp
0x04552E00: 293f0091  add x9, x25, #0xf
0x04552E04: 29717c92  and x9, x9, #0x1fffffff0
0x04552E08: 180109cb  sub x24, x8, x9
0x04552E0C: 1f030091  mov sp, x24
0x04552E10: e8030091  mov x8, sp
0x04552E14: 1a0109cb  sub x26, x8, x9
0x04552E18: 5f030091  mov sp, x26
0x04552E1C: e0031aaa  mov x0, x26
0x04552E20: e1031f2a  mov w1, wzr
0x04552E24: e20319aa  mov x2, x25
0x04552E28: deeeb194  bl #0x71ce9a0
0x04552E2C: a00640f9  ldr x0, [x21, #8]
0x04552E30: 08d44439  ldrb w8, [x0, #0x135]
0x04552E34: 48000037  tbnz w8, #0, #0x4552e3c
0x04552E38: 790eb097  bl #0x315681c
0x04552E3C: 99b7b097  bl #0x3180ca0
0x04552E40: 681240f9  ldr x8, [x19, #0x20]
0x04552E44: f50300aa  mov x21, x0
0x04552E48: 086140f9  ldr x8, [x8, #0xc0]
0x04552E4C: 010940f9  ldr x1, [x8, #0x10]
0x04552E50: 280040f9  ldr x8, [x1]
0x04552E54: 00013fd6  blr x8
0x04552E58: b51400b4  cbz x21, #0x45530ec
0x04552E5C: fb8801b0  adrp x27, #0x766f000
0x04552E60: fc870190  adrp x28, #0x764e000
0x04552E64: 7b7344f9  ldr x27, [x27, #0x8e0]
0x04552E68: 9caf43f9  ldr x28, [x28, #0x758]
0x04552E6C: e00315aa  mov x0, x21
0x04552E70: 168c01f8  str x22, [x0, #0x18]!
0x04552E74: e10316aa  mov x1, x22
0x04552E78: d3b6b097  bl #0x31809c4
0x04552E7C: c80240f9  ldr x8, [x22]
0x04552E80: b4633ea9  stp x20, x24, [x29, #-0x20]
0x04552E84: a38300d1  sub x3, x29, #0x20
0x04552E88: e20316aa  mov x2, x22
0x04552E8C: 014141f9  ldr x1, [x8, #0x280]
0x04552E90: e40318aa  mov x4, x24
0x04552E94: 20a040a9  ldp x0, x8, [x1, #8]
0x04552E98: 00013fd6  blr x8
0x04552E9C: e0031aaa  mov x0, x26
0x04552EA0: e10318aa  mov x1, x24
0x04552EA4: e20319aa  mov x2, x25
0x04552EA8: b2eeb194  bl #0x71ce970
0x04552EAC: 600340f9  ldr x0, [x27]
0x04552EB0: 7cb7b097  bl #0x3180ca0
0x04552EB4: e1031faa  mov x1, xzr
0x04552EB8: fb0300aa  mov x27, x0
0x04552EBC: 80b85194  bl #0x59c10bc
0x04552EC0: f40315aa  mov x20, x21
0x04552EC4: 9b0e01f8  str x27, [x20, #0x10]!
0x04552EC8: e00314aa  mov x0, x20
0x04552ECC: e1031baa  mov x1, x27
0x04552ED0: bdb6b097  bl #0x31809c4
0x04552ED4: ff020072  tst w23, #1
0x04552ED8: 08068052  movz w8, #0x30
0x04552EDC: 09078052  movz w9, #0x38
0x04552EE0: 2811889a  csel x8, x9, x8, ne
0x04552EE4: d76a68f8  ldr x23, [x22, x8]
0x04552EE8: e00318aa  mov x0, x24
0x04552EEC: e1031aaa  mov x1, x26
0x04552EF0: e20319aa  mov x2, x25
0x04552EF4: 9feeb194  bl #0x71ce970
0x04552EF8: 681240f9  ldr x8, [x19, #0x20]
0x04552EFC: 086140f9  ldr x8, [x8, #0xc0]
0x04552F00: 081140f9  ldr x8, [x8, #0x20]
0x04552F04: 082940b9  ldr w8, [x8, #0x28]
0x04552F08: 4800f837  tbnz w8, #0x1f, #0x4552f10
0x04552F0C: 180340f9  ldr x24, [x24]
0x04552F10: c80240f9  ldr x8, [x22]
0x04552F14: b85f3ea9  stp x24, x23, [x29, #-0x20]
0x04552F18: a38300d1  sub x3, x29, #0x20
0x04552F1C: a44300d1  sub x4, x29, #0x10
0x04552F20: 014941f9  ldr x1, [x8, #0x290]
0x04552F24: e20316aa  mov x2, x22
0x04552F28: 20a040a9  ldp x0, x8, [x1, #8]
0x04552F2C: 00013fd6  blr x8
0x04552F30: 800340f9  ldr x0, [x28]
0x04552F34: b6035ff8  ldur x22, [x29, #-0x10]
0x04552F38: 980240f9  ldr x24, [x20]
0x04552F3C: 59b7b097  bl #0x3180ca0
0x04552F40: 780d00b4  cbz x24, #0x45530ec
0x04552F44: f98801f0  adrp x25, #0x7671000
0x04552F48: 080340f9  ldr x8, [x24]
0x04552F4C: 396347f9  ldr x25, [x25, #0xec0]
0x04552F50: f70300aa  mov x23, x0
0x04552F54: 095d4279  ldrh w9, [x8, #0x12e]
0x04552F58: 210340f9  ldr x1, [x25]
0x04552F5C: 290100b4  cbz x9, #0x4552f80
0x04552F60: 0a5940f9  ldr x10, [x8, #0xb0]
0x04552F64: 4a210091  add x10, x10, #8
0x04552F68: 4b815ff8  ldur x11, [x10, #-8]
0x04552F6C: 7f0101eb  cmp x11, x1
0x04552F70: 00010054  b.eq #0x4552f90
0x04552F74: 290500f1  subs x9, x9, #1
0x04552F78: 4a410091  add x10, x10, #0x10
0x04552F7C: 61ffff54  b.ne #0x4552f68
0x04552F80: 22008052  movz w2, #0x1
0x04552F84: e00318aa  mov x0, x24
0x04552F88: e20eb097  bl #0x3156b10
0x04552F8C: 05000014  b #0x4552fa0
0x04552F90: 490140b9  ldr w9, [x10]
0x04552F94: 29050011  add w9, w9, #1
0x04552F98: 08d1298b  add x8, x8, w9, sxtw #4
0x04552F9C: 00e10491  add x0, x8, #0x138
0x04552FA0: 020440f9  ldr x2, [x0, #8]
0x04552FA4: e00317aa  mov x0, x23
0x04552FA8: e10318aa  mov x1, x24
0x04552FAC: e3031faa  mov x3, xzr
0x04552FB0: e0694294  bl #0x55ed730
0x04552FB4: d60900b4  cbz x22, #0x45530ec
0x04552FB8: c80240f9  ldr x8, [x22]
0x04552FBC: f88801b0  adrp x24, #0x766f000
0x04552FC0: 210340f9  ldr x1, [x25]
0x04552FC4: 095d4279  ldrh w9, [x8, #0x12e]
0x04552FC8: 182341f9  ldr x24, [x24, #0x240]
0x04552FCC: 290100b4  cbz x9, #0x4552ff0
0x04552FD0: 0a5940f9  ldr x10, [x8, #0xb0]
0x04552FD4: 4a210091  add x10, x10, #8
0x04552FD8: 4b815ff8  ldur x11, [x10, #-8]
0x04552FDC: 7f0101eb  cmp x11, x1
0x04552FE0: 00010054  b.eq #0x4553000
0x04552FE4: 290500f1  subs x9, x9, #1
0x04552FE8: 4a410091  add x10, x10, #0x10
0x04552FEC: 61ffff54  b.ne #0x4552fd8
0x04552FF0: e00316aa  mov x0, x22
0x04552FF4: e2031f2a  mov w2, wzr
0x04552FF8: c60eb097  bl #0x3156b10
0x04552FFC: 04000014  b #0x455300c
0x04553000: 490180b9  ldrsw x9, [x10]
0x04553004: 0811098b  add x8, x8, x9, lsl #4
0x04553008: 00e10491  add x0, x8, #0x138
0x0455300C: 080840a9  ldp x8, x2, [x0]
0x04553010: e00316aa  mov x0, x22
0x04553014: e10317aa  mov x1, x23
0x04553018: 00013fd6  blr x8
0x0455301C: 080340f9  ldr x8, [x24]
0x04553020: f60300aa  mov x22, x0
0x04553024: e00308aa  mov x0, x8
0x04553028: 1eb7b097  bl #0x3180ca0
0x0455302C: 681240f9  ldr x8, [x19, #0x20]
0x04553030: e10315aa  mov x1, x21
0x04553034: e3031faa  mov x3, xzr
0x04553038: f30300aa  mov x19, x0
0x0455303C: 086140f9  ldr x8, [x8, #0xc0]
0x04553040: 021940f9  ldr x2, [x8, #0x30]
0x04553044: 643c3794  bl #0x53221d4
0x04553048: 360500b4  cbz x22, #0x45530ec
0x0455304C: ea880190  adrp x10, #0x766f000
0x04553050: c80240f9  ldr x8, [x22]
0x04553054: 4a2541f9  ldr x10, [x10, #0x248]
0x04553058: 095d4279  ldrh w9, [x8, #0x12e]
0x0455305C: 410140f9  ldr x1, [x10]
0x04553060: 290100b4  cbz x9, #0x4553084
0x04553064: 0a5940f9  ldr x10, [x8, #0xb0]
0x04553068: 4a210091  add x10, x10, #8
0x0455306C: 4b815ff8  ldur x11, [x10, #-8]
0x04553070: 7f0101eb  cmp x11, x1
0x04553074: 00010054  b.eq #0x4553094
0x04553078: 290500f1  subs x9, x9, #1
0x0455307C: 4a410091  add x10, x10, #0x10
0x04553080: 61ffff54  b.ne #0x455306c
0x04553084: 22008052  movz w2, #0x1
0x04553088: e00316aa  mov x0, x22
0x0455308C: a10eb097  bl #0x3156b10
0x04553090: 05000014  b #0x45530a4
0x04553094: 490140b9  ldr w9, [x10]
0x04553098: 29050011  add w9, w9, #1
0x0455309C: 08d1298b  add x8, x8, w9, sxtw #4
0x045530A0: 00e10491  add x0, x8, #0x138
0x045530A4: 080840a9  ldp x8, x2, [x0]
0x045530A8: e00316aa  mov x0, x22
0x045530AC: e10313aa  mov x1, x19
0x045530B0: 00013fd6  blr x8
0x045530B4: a8835df8  ldur x8, [x29, #-0x28]
0x045530B8: 800240f9  ldr x0, [x20]
0x045530BC: 081540f9  ldr x8, [x8, #0x28]
0x045530C0: a9835ff8  ldur x9, [x29, #-8]
0x045530C4: 1f0109eb  cmp x8, x9
0x045530C8: 41010054  b.ne #0x45530f0
0x045530CC: bf030091  mov sp, x29
0x045530D0: f44f45a9  ldp x20, x19, [sp, #0x50]
0x045530D4: f65744a9  ldp x22, x21, [sp, #0x40]
0x045530D8: f85f43a9  ldp x24, x23, [sp, #0x30]
0x045530DC: fa6742a9  ldp x26, x25, [sp, #0x20]
0x045530E0: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x045530E4: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x045530E8: c0035fd6  ret
0x045530EC: f0b6b097  bl #0x3180cac
0x045530F0: 28eeb194  bl #0x71ce990

; Generic instantiation from Il2CppDumper script.json | RVA 0x4552B90 | Merger.Services.Backend.Sync.SyncPayloadServiceBase<object>$$GetResourceValue
; native signature: int32_t Merger_Services_Backend_Sync_SyncPayloadServiceBase_object___GetResourceValue (Merger_Services_Backend_Sync_SyncPayloadServiceBase_TPayload__o* __this, int32_t resource, const MethodInfo_4552B90* method);
; bytes=260 sha256=1e1773a7206481e7b12753ec4adf34a917d7f4f5f4e81098b8a01107fe7cad19 status=arm64_complete_bound indexed_start=True
0x04552B90: fe0f1df8  str x30, [sp, #-0x30]!
0x04552B94: f65701a9  stp x22, x21, [sp, #0x10]
0x04552B98: f44f02a9  stp x20, x19, [sp, #0x20]
0x04552B9C: 36be01f0  adrp x22, #0x7d19000
0x04552BA0: 158901b0  adrp x21, #0x7673000
0x04552BA4: c8364639  ldrb w8, [x22, #0x18d]
0x04552BA8: b55e40f9  ldr x21, [x21, #0xb8]
0x04552BAC: f403012a  mov w20, w1
0x04552BB0: f30300aa  mov x19, x0
0x04552BB4: 88010037  tbnz w8, #0, #0x4552be4
0x04552BB8: e08801b0  adrp x0, #0x766f000
0x04552BBC: 00fc40f9  ldr x0, [x0, #0x1f8]
0x04552BC0: 96b7b097  bl #0x3180a18
0x04552BC4: 008901b0  adrp x0, #0x7673000
0x04552BC8: 004443f9  ldr x0, [x0, #0x688]
0x04552BCC: 93b7b097  bl #0x3180a18
0x04552BD0: 008901b0  adrp x0, #0x7673000
0x04552BD4: 005c40f9  ldr x0, [x0, #0xb8]
0x04552BD8: 90b7b097  bl #0x3180a18
0x04552BDC: 28008052  movz w8, #0x1
0x04552BE0: c8360639  strb w8, [x22, #0x18d]
0x04552BE4: a00240f9  ldr x0, [x21]
0x04552BE8: 732640f9  ldr x19, [x19, #0x48]
0x04552BEC: 08e040b9  ldr w8, [x0, #0xe0]
0x04552BF0: 48000035  cbnz w8, #0x4552bf8
0x04552BF4: e6b7b097  bl #0x3180b8c
0x04552BF8: e003142a  mov w0, w20
0x04552BFC: e1031faa  mov x1, xzr
0x04552C00: c8e76f94  bl #0x614cb20
0x04552C04: 730400b4  cbz x19, #0x4552c90
0x04552C08: 0a8901b0  adrp x10, #0x7673000
0x04552C0C: 680240f9  ldr x8, [x19]
0x04552C10: 4a4543f9  ldr x10, [x10, #0x688]
0x04552C14: f58801b0  adrp x21, #0x766f000
0x04552C18: f40300aa  mov x20, x0
0x04552C1C: 095d4279  ldrh w9, [x8, #0x12e]
0x04552C20: 410140f9  ldr x1, [x10]
0x04552C24: b5fe40f9  ldr x21, [x21, #0x1f8]
0x04552C28: 290100b4  cbz x9, #0x4552c4c
0x04552C2C: 0a5940f9  ldr x10, [x8, #0xb0]
0x04552C30: 4a210091  add x10, x10, #8
0x04552C34: 4b815ff8  ldur x11, [x10, #-8]
0x04552C38: 7f0101eb  cmp x11, x1
0x04552C3C: 00010054  b.eq #0x4552c5c
0x04552C40: 290500f1  subs x9, x9, #1
0x04552C44: 4a410091  add x10, x10, #0x10
0x04552C48: 61ffff54  b.ne #0x4552c34
0x04552C4C: 22008052  movz w2, #0x1
0x04552C50: e00313aa  mov x0, x19
0x04552C54: af0fb097  bl #0x3156b10
0x04552C58: 05000014  b #0x4552c6c
0x04552C5C: 490140b9  ldr w9, [x10]
0x04552C60: 29050011  add w9, w9, #1
0x04552C64: 08d1298b  add x8, x8, w9, sxtw #4
0x04552C68: 00e10491  add x0, x8, #0x138
0x04552C6C: 080840a9  ldp x8, x2, [x0]
0x04552C70: e00313aa  mov x0, x19
0x04552C74: e10314aa  mov x1, x20
0x04552C78: 00013fd6  blr x8
0x04552C7C: a10240f9  ldr x1, [x21]
0x04552C80: f44f42a9  ldp x20, x19, [sp, #0x20]
0x04552C84: f65741a9  ldp x22, x21, [sp, #0x10]
0x04552C88: fe0743f8  ldr x30, [sp], #0x30
0x04552C8C: 00ef1a14  b #0x4c0e88c
0x04552C90: 07b8b097  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x45530F4 | Merger.Services.Backend.Sync.SyncPayloadServiceBase<__Il2CppFullySharedGenericType>$$GetResourceValue
; native signature: int32_t Merger_Services_Backend_Sync_SyncPayloadServiceBase___Il2CppFullySharedGenericType___GetResourceValue (Merger_Services_Backend_Sync_SyncPayloadServiceBase_TPayload__o* __this, int32_t resource, const MethodInfo_45530F4* method);
; bytes=260 sha256=b48ffc3b722026706d836644c0b4e974556b3c768d1c77e5bce977311450e82c status=arm64_complete_bound indexed_start=True
0x045530F4: fe0f1df8  str x30, [sp, #-0x30]!
0x045530F8: f65701a9  stp x22, x21, [sp, #0x10]
0x045530FC: f44f02a9  stp x20, x19, [sp, #0x20]
0x04553100: 36be01d0  adrp x22, #0x7d19000
0x04553104: 15890190  adrp x21, #0x7673000
0x04553108: c8424639  ldrb w8, [x22, #0x190]
0x0455310C: b55e40f9  ldr x21, [x21, #0xb8]
0x04553110: f403012a  mov w20, w1
0x04553114: f30300aa  mov x19, x0
0x04553118: 88010037  tbnz w8, #0, #0x4553148
0x0455311C: e0880190  adrp x0, #0x766f000
0x04553120: 00fc40f9  ldr x0, [x0, #0x1f8]
0x04553124: 3db6b097  bl #0x3180a18
0x04553128: 00890190  adrp x0, #0x7673000
0x0455312C: 004443f9  ldr x0, [x0, #0x688]
0x04553130: 3ab6b097  bl #0x3180a18
0x04553134: 00890190  adrp x0, #0x7673000
0x04553138: 005c40f9  ldr x0, [x0, #0xb8]
0x0455313C: 37b6b097  bl #0x3180a18
0x04553140: 28008052  movz w8, #0x1
0x04553144: c8420639  strb w8, [x22, #0x190]
0x04553148: a00240f9  ldr x0, [x21]
0x0455314C: 732640f9  ldr x19, [x19, #0x48]
0x04553150: 08e040b9  ldr w8, [x0, #0xe0]
0x04553154: 48000035  cbnz w8, #0x455315c
0x04553158: 8db6b097  bl #0x3180b8c
0x0455315C: e003142a  mov w0, w20
0x04553160: e1031faa  mov x1, xzr
0x04553164: 6fe66f94  bl #0x614cb20
0x04553168: 730400b4  cbz x19, #0x45531f4
0x0455316C: 0a890190  adrp x10, #0x7673000
0x04553170: 680240f9  ldr x8, [x19]
0x04553174: 4a4543f9  ldr x10, [x10, #0x688]
0x04553178: f5880190  adrp x21, #0x766f000
0x0455317C: f40300aa  mov x20, x0
0x04553180: 095d4279  ldrh w9, [x8, #0x12e]
0x04553184: 410140f9  ldr x1, [x10]
0x04553188: b5fe40f9  ldr x21, [x21, #0x1f8]
0x0455318C: 290100b4  cbz x9, #0x45531b0
0x04553190: 0a5940f9  ldr x10, [x8, #0xb0]
0x04553194: 4a210091  add x10, x10, #8
0x04553198: 4b815ff8  ldur x11, [x10, #-8]
0x0455319C: 7f0101eb  cmp x11, x1
0x045531A0: 00010054  b.eq #0x45531c0
0x045531A4: 290500f1  subs x9, x9, #1
0x045531A8: 4a410091  add x10, x10, #0x10
0x045531AC: 61ffff54  b.ne #0x4553198
0x045531B0: 22008052  movz w2, #0x1
0x045531B4: e00313aa  mov x0, x19
0x045531B8: 560eb097  bl #0x3156b10
0x045531BC: 05000014  b #0x45531d0
0x045531C0: 490140b9  ldr w9, [x10]
0x045531C4: 29050011  add w9, w9, #1
0x045531C8: 08d1298b  add x8, x8, w9, sxtw #4
0x045531CC: 00e10491  add x0, x8, #0x138
0x045531D0: 080840a9  ldp x8, x2, [x0]
0x045531D4: e00313aa  mov x0, x19
0x045531D8: e10314aa  mov x1, x20
0x045531DC: 00013fd6  blr x8
0x045531E0: a10240f9  ldr x1, [x21]
0x045531E4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x045531E8: f65741a9  ldp x22, x21, [sp, #0x10]
0x045531EC: fe0743f8  ldr x30, [sp], #0x30
0x045531F0: a7ed1a14  b #0x4c0e88c
0x045531F4: aeb6b097  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4552C94 | Merger.Services.Backend.Sync.SyncPayloadServiceBase<object>$$.ctor
; native signature: void Merger_Services_Backend_Sync_SyncPayloadServiceBase_object____ctor (Merger_Services_Backend_Sync_SyncPayloadServiceBase_TPayload__o* __this, const MethodInfo_4552C94* method);
; bytes=8 sha256=7f3eaed3f65e68510b53f3b7d4e5eb06226905ac00a3470702e5ef410a5232a8 status=arm64_complete_bound indexed_start=True
0x04552C94: e1031faa  mov x1, xzr
0x04552C98: cbda8d14  b #0x68c97c4

; Generic instantiation from Il2CppDumper script.json | RVA 0x45531F8 | Merger.Services.Backend.Sync.SyncPayloadServiceBase<__Il2CppFullySharedGenericType>$$.ctor
; native signature: void Merger_Services_Backend_Sync_SyncPayloadServiceBase___Il2CppFullySharedGenericType____ctor (Merger_Services_Backend_Sync_SyncPayloadServiceBase_TPayload__o* __this, const MethodInfo_45531F8* method);
; bytes=8 sha256=9e05aca0b3670a4de1ed8ef0a279fbc545828d502b55b67e0bf91c3abc6c35e0 status=arm64_complete_bound indexed_start=True
0x045531F8: e1031faa  mov x1, xzr
0x045531FC: 72d98d14  b #0x68c97c4

