; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 781 MergeEngine.ECS.Systems.State.Board.ItemsStateSystemBase<TLoadable>
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; Generic instantiation from Il2CppDumper script.json | RVA 0x53971D0 | MergeEngine.ECS.Systems.State.Board.ItemsStateSystemBase<object>$$LoadState
; native signature: void MergeEngine_ECS_Systems_State_Board_ItemsStateSystemBase_object___LoadState (MergeEngine_ECS_Systems_State_Board_ItemsStateSystemBase_TLoadable__o* __this, Il2CppObject* newState, const MethodInfo_53971D0* method);
; bytes=548 sha256=73eb958061bda51205e0b76b41436ba49ec08211654dfd0841f4dcf2805e0a81 status=arm64_complete_bound indexed_start=True
0x053971D0: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x053971D4: f65701a9  stp x22, x21, [sp, #0x10]
0x053971D8: f44f02a9  stp x20, x19, [sp, #0x20]
0x053971DC: 354c01b0  adrp x21, #0x7d1c000
0x053971E0: a8224f39  ldrb w8, [x21, #0x3c8]
0x053971E4: f40301aa  mov x20, x1
0x053971E8: f30300aa  mov x19, x0
0x053971EC: c8000037  tbnz w8, #0, #0x5397204
0x053971F0: 401701f0  adrp x0, #0x7682000
0x053971F4: 00d446f9  ldr x0, [x0, #0xda8]
0x053971F8: 08a67797  bl #0x3180a18
0x053971FC: 28008052  movz w8, #0x1
0x05397200: a8220f39  strb w8, [x21, #0x3c8]
0x05397204: d40800b4  cbz x20, #0x539731c
0x05397208: 680240f9  ldr x8, [x19]
0x0539720C: 571701f0  adrp x23, #0x7682000
0x05397210: 091541f9  ldr x9, [x8, #0x228]
0x05397214: 011941f9  ldr x1, [x8, #0x230]
0x05397218: f7d646f9  ldr x23, [x23, #0xda8]
0x0539721C: e00313aa  mov x0, x19
0x05397220: 20013fd6  blr x9
0x05397224: 762a40f9  ldr x22, [x19, #0x50]
0x05397228: 560800b4  cbz x22, #0x5397330
0x0539722C: c80240f9  ldr x8, [x22]
0x05397230: e10240f9  ldr x1, [x23]
0x05397234: f50300aa  mov x21, x0
0x05397238: 095d4279  ldrh w9, [x8, #0x12e]
0x0539723C: 290100b4  cbz x9, #0x5397260
0x05397240: 0a5940f9  ldr x10, [x8, #0xb0]
0x05397244: 4a210091  add x10, x10, #8
0x05397248: 4b815ff8  ldur x11, [x10, #-8]
0x0539724C: 7f0101eb  cmp x11, x1
0x05397250: 00010054  b.eq #0x5397270
0x05397254: 290500f1  subs x9, x9, #1
0x05397258: 4a410091  add x10, x10, #0x10
0x0539725C: 61ffff54  b.ne #0x5397248
0x05397260: 42008052  movz w2, #0x2
0x05397264: e00316aa  mov x0, x22
0x05397268: 2afe7697  bl #0x3156b10
0x0539726C: 05000014  b #0x5397280
0x05397270: 490140b9  ldr w9, [x10]
0x05397274: 29090011  add w9, w9, #2
0x05397278: 08d1298b  add x8, x8, w9, sxtw #4
0x0539727C: 00e10491  add x0, x8, #0x138
0x05397280: 080840a9  ldp x8, x2, [x0]
0x05397284: 21008052  movz w1, #0x1
0x05397288: e00316aa  mov x0, x22
0x0539728C: 00013fd6  blr x8
0x05397290: 680240f9  ldr x8, [x19]
0x05397294: 091d41f9  ldr x9, [x8, #0x238]
0x05397298: 032141f9  ldr x3, [x8, #0x240]
0x0539729C: e00313aa  mov x0, x19
0x053972A0: e10314aa  mov x1, x20
0x053972A4: e20315aa  mov x2, x21
0x053972A8: 20013fd6  blr x9
0x053972AC: f4031faa  mov x20, xzr
0x053972B0: 732a40f9  ldr x19, [x19, #0x50]
0x053972B4: d30300b4  cbz x19, #0x539732c
0x053972B8: 680240f9  ldr x8, [x19]
0x053972BC: e10240f9  ldr x1, [x23]
0x053972C0: 095d4279  ldrh w9, [x8, #0x12e]
0x053972C4: 290100b4  cbz x9, #0x53972e8
0x053972C8: 0a5940f9  ldr x10, [x8, #0xb0]
0x053972CC: 4a210091  add x10, x10, #8
0x053972D0: 4b815ff8  ldur x11, [x10, #-8]
0x053972D4: 7f0101eb  cmp x11, x1
0x053972D8: 00010054  b.eq #0x53972f8
0x053972DC: 290500f1  subs x9, x9, #1
0x053972E0: 4a410091  add x10, x10, #0x10
0x053972E4: 61ffff54  b.ne #0x53972d0
0x053972E8: 22008052  movz w2, #0x1
0x053972EC: e00313aa  mov x0, x19
0x053972F0: 08fe7697  bl #0x3156b10
0x053972F4: 05000014  b #0x5397308
0x053972F8: 490140b9  ldr w9, [x10]
0x053972FC: 29050011  add w9, w9, #1
0x05397300: 08d1298b  add x8, x8, w9, sxtw #4
0x05397304: 00e10491  add x0, x8, #0x138
0x05397308: 080840a9  ldp x8, x2, [x0]
0x0539730C: 21008052  movz w1, #0x1
0x05397310: e00313aa  mov x0, x19
0x05397314: 00013fd6  blr x8
0x05397318: f40000b5  cbnz x20, #0x5397334
0x0539731C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x05397320: f65741a9  ldp x22, x21, [sp, #0x10]
0x05397324: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x05397328: c0035fd6  ret
0x0539732C: 60a67797  bl #0x3180cac
0x05397330: 5fa67797  bl #0x3180cac
0x05397334: e00314aa  mov x0, x20
0x05397338: 5ba67797  bl #0x3180ca4
0x0539733C: 02000014  b #0x5397344
0x05397340: 01000014  b #0x5397344
0x05397344: f50300aa  mov x21, x0
0x05397348: 3f040071  cmp w1, #1
0x0539734C: c1000054  b.ne #0x5397364
0x05397350: e00315aa  mov x0, x21
0x05397354: 6fdd7894  bl #0x71ce910
0x05397358: 140040f9  ldr x20, [x0]
0x0539735C: 71dd7894  bl #0x71ce920
0x05397360: d4ffff17  b #0x53972b0
0x05397364: f4031faa  mov x20, xzr
0x05397368: 02000014  b #0x5397370
0x0539736C: f50300aa  mov x21, x0
0x05397370: 732a40f9  ldr x19, [x19, #0x50]
0x05397374: 530000b5  cbnz x19, #0x539737c
0x05397378: 4da67797  bl #0x3180cac
0x0539737C: 680240f9  ldr x8, [x19]
0x05397380: e10240f9  ldr x1, [x23]
0x05397384: 095d4279  ldrh w9, [x8, #0x12e]
0x05397388: 290100b4  cbz x9, #0x53973ac
0x0539738C: 0a5940f9  ldr x10, [x8, #0xb0]
0x05397390: 4a210091  add x10, x10, #8
0x05397394: 4b815ff8  ldur x11, [x10, #-8]
0x05397398: 7f0101eb  cmp x11, x1
0x0539739C: 00010054  b.eq #0x53973bc
0x053973A0: 290500f1  subs x9, x9, #1
0x053973A4: 4a410091  add x10, x10, #0x10
0x053973A8: 61ffff54  b.ne #0x5397394
0x053973AC: 22008052  movz w2, #0x1
0x053973B0: e00313aa  mov x0, x19
0x053973B4: d7fd7697  bl #0x3156b10
0x053973B8: 05000014  b #0x53973cc
0x053973BC: 490140b9  ldr w9, [x10]
0x053973C0: 29050011  add w9, w9, #1
0x053973C4: 08d1298b  add x8, x8, w9, sxtw #4
0x053973C8: 00e10491  add x0, x8, #0x138
0x053973CC: 080840a9  ldp x8, x2, [x0]
0x053973D0: 21008052  movz w1, #0x1
0x053973D4: e00313aa  mov x0, x19
0x053973D8: 00013fd6  blr x8
0x053973DC: 740000b5  cbnz x20, #0x53973e8
0x053973E0: e00315aa  mov x0, x21
0x053973E4: 5d397b97  bl #0x3265958
0x053973E8: e00314aa  mov x0, x20
0x053973EC: 2ea67797  bl #0x3180ca4
0x053973F0: 49c86997  bl #0x2e09514

; Generic instantiation from Il2CppDumper script.json | RVA 0x53973F4 | MergeEngine.ECS.Systems.State.Board.ItemsStateSystemBase<object>$$AddNewEntity
; native signature: void MergeEngine_ECS_Systems_State_Board_ItemsStateSystemBase_object___AddNewEntity (MergeEngine_ECS_Systems_State_Board_ItemsStateSystemBase_TLoadable__o* __this, MergeEngine_ECS_Entity_o* entity, const MethodInfo_53973F4* method);
; bytes=176 sha256=5d720ba5cacc17e2f68f66ab1d3603e2a8053b2e18d02714c30e6614fac90517 status=arm64_complete_bound indexed_start=True
0x053973F4: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x053973F8: f44f01a9  stp x20, x19, [sp, #0x10]
0x053973FC: 354c01b0  adrp x21, #0x7d1c000
0x05397400: a8264f39  ldrb w8, [x21, #0x3c9]
0x05397404: f30301aa  mov x19, x1
0x05397408: f40300aa  mov x20, x0
0x0539740C: c8000037  tbnz w8, #0, #0x5397424
0x05397410: 201701f0  adrp x0, #0x767e000
0x05397414: 00e042f9  ldr x0, [x0, #0x5c0]
0x05397418: 80a57797  bl #0x3180a18
0x0539741C: 28008052  movz w8, #0x1
0x05397420: a8260f39  strb w8, [x21, #0x3c9]
0x05397424: f40300b4  cbz x20, #0x53974a0
0x05397428: 940a40f9  ldr x20, [x20, #0x10]
0x0539742C: b40300b4  cbz x20, #0x53974a0
0x05397430: 2a1701f0  adrp x10, #0x767e000
0x05397434: 880240f9  ldr x8, [x20]
0x05397438: 4ae142f9  ldr x10, [x10, #0x5c0]
0x0539743C: 095d4279  ldrh w9, [x8, #0x12e]
0x05397440: 410140f9  ldr x1, [x10]
0x05397444: 290100b4  cbz x9, #0x5397468
0x05397448: 0a5940f9  ldr x10, [x8, #0xb0]
0x0539744C: 4a210091  add x10, x10, #8
0x05397450: 4b815ff8  ldur x11, [x10, #-8]
0x05397454: 7f0101eb  cmp x11, x1
0x05397458: 00010054  b.eq #0x5397478
0x0539745C: 290500f1  subs x9, x9, #1
0x05397460: 4a410091  add x10, x10, #0x10
0x05397464: 61ffff54  b.ne #0x5397450
0x05397468: a2008052  movz w2, #0x5
0x0539746C: e00314aa  mov x0, x20
0x05397470: a8fd7697  bl #0x3156b10
0x05397474: 05000014  b #0x5397488
0x05397478: 490140b9  ldr w9, [x10]
0x0539747C: 29150011  add w9, w9, #5
0x05397480: 08d1298b  add x8, x8, w9, sxtw #4
0x05397484: 00e10491  add x0, x8, #0x138
0x05397488: 030840a9  ldp x3, x2, [x0]
0x0539748C: e00314aa  mov x0, x20
0x05397490: e10313aa  mov x1, x19
0x05397494: f44f41a9  ldp x20, x19, [sp, #0x10]
0x05397498: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0539749C: 60001fd6  br x3
0x053974A0: 03a67797  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x53974A4 | MergeEngine.ECS.Systems.State.Board.ItemsStateSystemBase<object>$$HandleExistingEntities
; native signature: void MergeEngine_ECS_Systems_State_Board_ItemsStateSystemBase_object___HandleExistingEntities (MergeEngine_ECS_Systems_State_Board_ItemsStateSystemBase_TLoadable__o* __this, System_Collections_Generic_List_IdComponent__o* existingEntitiesIds, System_Collections_Generic_IEnumerable_ItemPayloadBase__o* items, const MethodInfo_53974A4* method);
; bytes=400 sha256=4a67f0a2b91b6a0b2c438d58f2bcfad65fbcc4d42b96d4f978f0c24f65dd0a94 status=arm64_complete_bound indexed_start=True
0x053974A4: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x053974A8: fc6f01a9  stp x28, x27, [sp, #0x10]
0x053974AC: fa6702a9  stp x26, x25, [sp, #0x20]
0x053974B0: f85f03a9  stp x24, x23, [sp, #0x30]
0x053974B4: f65704a9  stp x22, x21, [sp, #0x40]
0x053974B8: f44f05a9  stp x20, x19, [sp, #0x50]
0x053974BC: 374c01b0  adrp x23, #0x7d1c000
0x053974C0: e82a4f39  ldrb w8, [x23, #0x3ca]
0x053974C4: f30303aa  mov x19, x3
0x053974C8: f40302aa  mov x20, x2
0x053974CC: f50301aa  mov x21, x1
0x053974D0: f60300aa  mov x22, x0
0x053974D4: 48020037  tbnz w8, #0, #0x539751c
0x053974D8: 401701f0  adrp x0, #0x7682000
0x053974DC: 00d846f9  ldr x0, [x0, #0xdb0]
0x053974E0: 4ea57797  bl #0x3180a18
0x053974E4: 401701f0  adrp x0, #0x7682000
0x053974E8: 00dc46f9  ldr x0, [x0, #0xdb8]
0x053974EC: 4ba57797  bl #0x3180a18
0x053974F0: 401701f0  adrp x0, #0x7682000
0x053974F4: 00e046f9  ldr x0, [x0, #0xdc0]
0x053974F8: 48a57797  bl #0x3180a18
0x053974FC: 401701f0  adrp x0, #0x7682000
0x05397500: 00e446f9  ldr x0, [x0, #0xdc8]
0x05397504: 45a57797  bl #0x3180a18
0x05397508: 401701f0  adrp x0, #0x7682000
0x0539750C: 00e846f9  ldr x0, [x0, #0xdd0]
0x05397510: 42a57797  bl #0x3180a18
0x05397514: 28008052  movz w8, #0x1
0x05397518: e82a0f39  strb w8, [x23, #0x3ca]
0x0539751C: b50800b4  cbz x21, #0x5397630
0x05397520: a81a40b9  ldr w8, [x21, #0x18]
0x05397524: 17050071  subs w23, w8, #1
0x05397528: 64070054  b.mi #0x5397614
0x0539752C: 5b1701f0  adrp x27, #0x7682000
0x05397530: 5c1701f0  adrp x28, #0x7682000
0x05397534: 5d1701f0  adrp x29, #0x7682000
0x05397538: 7beb46f9  ldr x27, [x27, #0xdd0]
0x0539753C: 9cdf46f9  ldr x28, [x28, #0xdb8]
0x05397540: bddb46f9  ldr x29, [x29, #0xdb0]
0x05397544: 681240f9  ldr x8, [x19, #0x20]
0x05397548: 086140f9  ldr x8, [x8, #0xc0]
0x0539754C: 001140f9  ldr x0, [x8, #0x20]
0x05397550: 08d44439  ldrb w8, [x0, #0x135]
0x05397554: 48000037  tbnz w8, #0, #0x539755c
0x05397558: b1fc7697  bl #0x315681c
0x0539755C: d1a57797  bl #0x3180ca0
0x05397560: 681240f9  ldr x8, [x19, #0x20]
0x05397564: f90300aa  mov x25, x0
0x05397568: 086140f9  ldr x8, [x8, #0xc0]
0x0539756C: 011540f9  ldr x1, [x8, #0x28]
0x05397570: 3a12de97  bl #0x4b1be58
0x05397574: 620340f9  ldr x2, [x27]
0x05397578: e00315aa  mov x0, x21
0x0539757C: e103172a  mov w1, w23
0x05397580: 07b3b297  bl #0x404419c
0x05397584: 790500b4  cbz x25, #0x5397630
0x05397588: f80319aa  mov x24, x25
0x0539758C: 000f01f8  str x0, [x24, #0x10]!
0x05397590: e10300aa  mov x1, x0
0x05397594: e00318aa  mov x0, x24
0x05397598: 0ba57797  bl #0x31809c4
0x0539759C: 080340f9  ldr x8, [x24]
0x053975A0: 680300b4  cbz x8, #0x539760c
0x053975A4: 800340f9  ldr x0, [x28]
0x053975A8: bea57797  bl #0x3180ca0
0x053975AC: 681240f9  ldr x8, [x19, #0x20]
0x053975B0: e10319aa  mov x1, x25
0x053975B4: e3031faa  mov x3, xzr
0x053975B8: fa0300aa  mov x26, x0
0x053975BC: 086140f9  ldr x8, [x8, #0xc0]
0x053975C0: 021940f9  ldr x2, [x8, #0x30]
0x053975C4: 7efafa97  bl #0x5255fbc
0x053975C8: a20340f9  ldr x2, [x29]
0x053975CC: e00314aa  mov x0, x20
0x053975D0: e1031aaa  mov x1, x26
0x053975D4: 9d3ca297  bl #0x3c26848
0x053975D8: a0010036  tbz w0, #0, #0x539760c
0x053975DC: c80240f9  ldr x8, [x22]
0x053975E0: 010340f9  ldr x1, [x24]
0x053975E4: e00316aa  mov x0, x22
0x053975E8: 090d41f9  ldr x9, [x8, #0x218]
0x053975EC: 021141f9  ldr x2, [x8, #0x220]
0x053975F0: 20013fd6  blr x9
0x053975F4: 481701f0  adrp x8, #0x7682000
0x053975F8: 010340f9  ldr x1, [x24]
0x053975FC: 08e146f9  ldr x8, [x8, #0xdc0]
0x05397600: e00315aa  mov x0, x21
0x05397604: 020140f9  ldr x2, [x8]
0x05397608: 3cb9b297  bl #0x4045af8
0x0539760C: f7060071  subs w23, w23, #1
0x05397610: a5f9ff54  b.pl #0x5397544
0x05397614: f44f45a9  ldp x20, x19, [sp, #0x50]
0x05397618: f65744a9  ldp x22, x21, [sp, #0x40]
0x0539761C: f85f43a9  ldp x24, x23, [sp, #0x30]
0x05397620: fa6742a9  ldp x26, x25, [sp, #0x20]
0x05397624: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x05397628: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x0539762C: c0035fd6  ret
0x05397630: 9fa57797  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x5397634 | MergeEngine.ECS.Systems.State.Board.ItemsStateSystemBase<object>$$TryGetEntity
; native signature: bool MergeEngine_ECS_Systems_State_Board_ItemsStateSystemBase_object___TryGetEntity (MergeEngine_ECS_Systems_State_Board_ItemsStateSystemBase_TLoadable__o* __this, System_Collections_Generic_IEnumerable_IdComponent__o* existingEntityIds, Merger_Services_Backend_Sync_Data_Payloads_Board_ItemPayloadBase_o* item, MergeEngine_Configuration_MergeItemInstanceConfiguration_o* configuration, MergeEngine_ECS_Entity_o** entity, const MethodInfo_5397634* method);
; bytes=512 sha256=6d5e60e89f3066f7097fdc4a1f8f153749b0fd20b407bef5b2396762f9176eb9 status=arm64_complete_bound indexed_start=True
0x05397634: ff4301d1  sub sp, sp, #0x50
0x05397638: fe6701a9  stp x30, x25, [sp, #0x10]
0x0539763C: f85f02a9  stp x24, x23, [sp, #0x20]
0x05397640: f65703a9  stp x22, x21, [sp, #0x30]
0x05397644: f44f04a9  stp x20, x19, [sp, #0x40]
0x05397648: 394c01b0  adrp x25, #0x7d1c000
0x0539764C: 282f4f39  ldrb w8, [x25, #0x3cb]
0x05397650: f80305aa  mov x24, x5
0x05397654: f30304aa  mov x19, x4
0x05397658: f40303aa  mov x20, x3
0x0539765C: f70302aa  mov x23, x2
0x05397660: f50301aa  mov x21, x1
0x05397664: f60300aa  mov x22, x0
0x05397668: 88010037  tbnz w8, #0, #0x5397698
0x0539766C: 401701f0  adrp x0, #0x7682000
0x05397670: 00ec46f9  ldr x0, [x0, #0xdd8]
0x05397674: e9a47797  bl #0x3180a18
0x05397678: 201701f0  adrp x0, #0x767e000
0x0539767C: 00dc42f9  ldr x0, [x0, #0x5b8]
0x05397680: e6a47797  bl #0x3180a18
0x05397684: 001701f0  adrp x0, #0x767a000
0x05397688: 004c42f9  ldr x0, [x0, #0x498]
0x0539768C: e3a47797  bl #0x3180a18
0x05397690: 28008052  movz w8, #0x1
0x05397694: 282f0f39  strb w8, [x25, #0x3cb]
0x05397698: ff0700f9  str xzr, [sp, #8]
0x0539769C: b70c00b4  cbz x23, #0x5397830
0x053976A0: 081340f9  ldr x8, [x24, #0x20]
0x053976A4: e20e40f9  ldr x2, [x23, #0x18]
0x053976A8: e3230091  add x3, sp, #8
0x053976AC: e10315aa  mov x1, x21
0x053976B0: 086140f9  ldr x8, [x8, #0xc0]
0x053976B4: 042140f9  ldr x4, [x8, #0x40]
0x053976B8: 5f000094  bl #0x5397834
0x053976BC: f503002a  mov w21, w0
0x053976C0: a0000036  tbz w0, #0, #0x53976d4
0x053976C4: e80740f9  ldr x8, [sp, #8]
0x053976C8: 480b00b4  cbz x8, #0x5397830
0x053976CC: 010940f9  ldr x1, [x8, #0x10]
0x053976D0: 4e000014  b #0x5397808
0x053976D4: f94640f9  ldr x25, [x23, #0x88]
0x053976D8: f70a40f9  ldr x23, [x23, #0x10]
0x053976DC: 190200b4  cbz x25, #0x539771c
0x053976E0: 481701f0  adrp x8, #0x7682000
0x053976E4: 08ed46f9  ldr x8, [x8, #0xdd8]
0x053976E8: 000140f9  ldr x0, [x8]
0x053976EC: 6da57797  bl #0x3180ca0
0x053976F0: e10317aa  mov x1, x23
0x053976F4: e20319aa  mov x2, x25
0x053976F8: e3031faa  mov x3, xzr
0x053976FC: f80300aa  mov x24, x0
0x05397700: fbb33194  bl #0x60046ec
0x05397704: 780900b4  cbz x24, #0x5397830
0x05397708: 080340f9  ldr x8, [x24]
0x0539770C: e00318aa  mov x0, x24
0x05397710: 09855ea9  ldp x9, x1, [x8, #0x1e8]
0x05397714: 20013fd6  blr x9
0x05397718: 1d000014  b #0x539778c
0x0539771C: d82640f9  ldr x24, [x22, #0x48]
0x05397720: 980800b4  cbz x24, #0x5397830
0x05397724: 0a1701f0  adrp x10, #0x767a000
0x05397728: 080340f9  ldr x8, [x24]
0x0539772C: 4a4d42f9  ldr x10, [x10, #0x498]
0x05397730: 095d4279  ldrh w9, [x8, #0x12e]
0x05397734: 410140f9  ldr x1, [x10]
0x05397738: 290100b4  cbz x9, #0x539775c
0x0539773C: 0a5940f9  ldr x10, [x8, #0xb0]
0x05397740: 4a210091  add x10, x10, #8
0x05397744: 4b815ff8  ldur x11, [x10, #-8]
0x05397748: 7f0101eb  cmp x11, x1
0x0539774C: 00010054  b.eq #0x539776c
0x05397750: 290500f1  subs x9, x9, #1
0x05397754: 4a410091  add x10, x10, #0x10
0x05397758: 61ffff54  b.ne #0x5397744
0x0539775C: 22018052  movz w2, #0x9
0x05397760: e00318aa  mov x0, x24
0x05397764: ebfc7697  bl #0x3156b10
0x05397768: 05000014  b #0x539777c
0x0539776C: 490140b9  ldr w9, [x10]
0x05397770: 29250011  add w9, w9, #9
0x05397774: 08d1298b  add x8, x8, w9, sxtw #4
0x05397778: 00e10491  add x0, x8, #0x138
0x0539777C: 080840a9  ldp x8, x2, [x0]
0x05397780: e00318aa  mov x0, x24
0x05397784: e10317aa  mov x1, x23
0x05397788: 00013fd6  blr x8
0x0539778C: f70300aa  mov x23, x0
0x05397790: 160500b4  cbz x22, #0x5397830
0x05397794: d60e40f9  ldr x22, [x22, #0x18]
0x05397798: d60400b4  cbz x22, #0x5397830
0x0539779C: 2a1701f0  adrp x10, #0x767e000
0x053977A0: c80240f9  ldr x8, [x22]
0x053977A4: 4add42f9  ldr x10, [x10, #0x5b8]
0x053977A8: 095d4279  ldrh w9, [x8, #0x12e]
0x053977AC: 410140f9  ldr x1, [x10]
0x053977B0: 290100b4  cbz x9, #0x53977d4
0x053977B4: 0a5940f9  ldr x10, [x8, #0xb0]
0x053977B8: 4a210091  add x10, x10, #8
0x053977BC: 4b815ff8  ldur x11, [x10, #-8]
0x053977C0: 7f0101eb  cmp x11, x1
0x053977C4: 00010054  b.eq #0x53977e4
0x053977C8: 290500f1  subs x9, x9, #1
0x053977CC: 4a410091  add x10, x10, #0x10
0x053977D0: 61ffff54  b.ne #0x53977bc
0x053977D4: e00316aa  mov x0, x22
0x053977D8: e2031f2a  mov w2, wzr
0x053977DC: cdfc7697  bl #0x3156b10
0x053977E0: 04000014  b #0x53977f0
0x053977E4: 490180b9  ldrsw x9, [x10]
0x053977E8: 0811098b  add x8, x8, x9, lsl #4
0x053977EC: 00e10491  add x0, x8, #0x138
0x053977F0: 080c40a9  ldp x8, x3, [x0]
0x053977F4: e00316aa  mov x0, x22
0x053977F8: e10317aa  mov x1, x23
0x053977FC: e20314aa  mov x2, x20
0x05397800: 00013fd6  blr x8
0x05397804: e10300aa  mov x1, x0
0x05397808: e00313aa  mov x0, x19
0x0539780C: 610200f9  str x1, [x19]
0x05397810: 6da47797  bl #0x31809c4
0x05397814: a0020012  and w0, w21, #1
0x05397818: f44f44a9  ldp x20, x19, [sp, #0x40]
0x0539781C: f65743a9  ldp x22, x21, [sp, #0x30]
0x05397820: f85f42a9  ldp x24, x23, [sp, #0x20]
0x05397824: fe6741a9  ldp x30, x25, [sp, #0x10]
0x05397828: ff430191  add sp, sp, #0x50
0x0539782C: c0035fd6  ret
0x05397830: 1fa57797  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x5397834 | MergeEngine.ECS.Systems.State.Board.ItemsStateSystemBase<object>$$TryGetExistingItem
; native signature: bool MergeEngine_ECS_Systems_State_Board_ItemsStateSystemBase_object___TryGetExistingItem (MergeEngine_ECS_Systems_State_Board_ItemsStateSystemBase_TLoadable__o* __this, System_Collections_Generic_IEnumerable_IdComponent__o* existingItems, System_String_o* itemUuid, MergeEngine_ECS_Components_Items_IdComponent_o** existingItem, const MethodInfo_5397834* method);
; bytes=264 sha256=89da092563db1809cf23ae6a9384c3a3190957818a0c8aefcaec78ffa5a084a7 status=arm64_complete_bound indexed_start=True
0x05397834: fe67bca9  stp x30, x25, [sp, #-0x40]!
0x05397838: f85f01a9  stp x24, x23, [sp, #0x10]
0x0539783C: f65702a9  stp x22, x21, [sp, #0x20]
0x05397840: f44f03a9  stp x20, x19, [sp, #0x30]
0x05397844: 374c01b0  adrp x23, #0x7d1c000
0x05397848: e8324f39  ldrb w8, [x23, #0x3cc]
0x0539784C: f50304aa  mov x21, x4
0x05397850: f30303aa  mov x19, x3
0x05397854: f60302aa  mov x22, x2
0x05397858: f40301aa  mov x20, x1
0x0539785C: 28010037  tbnz w8, #0, #0x5397880
0x05397860: 401701f0  adrp x0, #0x7682000
0x05397864: 00f046f9  ldr x0, [x0, #0xde0]
0x05397868: 6ca47797  bl #0x3180a18
0x0539786C: 401701f0  adrp x0, #0x7682000
0x05397870: 00f446f9  ldr x0, [x0, #0xde8]
0x05397874: 69a47797  bl #0x3180a18
0x05397878: 28008052  movz w8, #0x1
0x0539787C: e8320f39  strb w8, [x23, #0x3cc]
0x05397880: a81240f9  ldr x8, [x21, #0x20]
0x05397884: 086140f9  ldr x8, [x8, #0xc0]
0x05397888: 002540f9  ldr x0, [x8, #0x48]
0x0539788C: 08d44439  ldrb w8, [x0, #0x135]
0x05397890: 48000037  tbnz w8, #0, #0x5397898
0x05397894: e2fb7697  bl #0x315681c
0x05397898: 02a57797  bl #0x3180ca0
0x0539789C: a81240f9  ldr x8, [x21, #0x20]
0x053978A0: f70300aa  mov x23, x0
0x053978A4: 086140f9  ldr x8, [x8, #0xc0]
0x053978A8: 012940f9  ldr x1, [x8, #0x50]
0x053978AC: d275ae97  bl #0x3f34ff4
0x053978B0: 570400b4  cbz x23, #0x5397938
0x053978B4: 581701f0  adrp x24, #0x7682000
0x053978B8: 591701f0  adrp x25, #0x7682000
0x053978BC: 18f746f9  ldr x24, [x24, #0xde8]
0x053978C0: 39f346f9  ldr x25, [x25, #0xde0]
0x053978C4: e00317aa  mov x0, x23
0x053978C8: 160c01f8  str x22, [x0, #0x10]!
0x053978CC: e10316aa  mov x1, x22
0x053978D0: 3da47797  bl #0x31809c4
0x053978D4: 000340f9  ldr x0, [x24]
0x053978D8: f2a47797  bl #0x3180ca0
0x053978DC: a81240f9  ldr x8, [x21, #0x20]
0x053978E0: e10317aa  mov x1, x23
0x053978E4: e3031faa  mov x3, xzr
0x053978E8: f50300aa  mov x21, x0
0x053978EC: 086140f9  ldr x8, [x8, #0xc0]
0x053978F0: 022d40f9  ldr x2, [x8, #0x58]
0x053978F4: b2f9fa97  bl #0x5255fbc
0x053978F8: 220340f9  ldr x2, [x25]
0x053978FC: e00314aa  mov x0, x20
0x05397900: e10315aa  mov x1, x21
0x05397904: 0bb6a297  bl #0x3c45130
0x05397908: e10300aa  mov x1, x0
0x0539790C: 600200f9  str x0, [x19]
0x05397910: e00313aa  mov x0, x19
0x05397914: 2ca47797  bl #0x31809c4
0x05397918: 680240f9  ldr x8, [x19]
0x0539791C: f44f43a9  ldp x20, x19, [sp, #0x30]
0x05397920: f65742a9  ldp x22, x21, [sp, #0x20]
0x05397924: f85f41a9  ldp x24, x23, [sp, #0x10]
0x05397928: 1f0100f1  cmp x8, #0
0x0539792C: e0079f1a  cset w0, ne
0x05397930: fe67c4a8  ldp x30, x25, [sp], #0x40
0x05397934: c0035fd6  ret
0x05397938: dda47797  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x539793C | MergeEngine.ECS.Systems.State.Board.ItemsStateSystemBase<object>$$.ctor
; native signature: void MergeEngine_ECS_Systems_State_Board_ItemsStateSystemBase_object____ctor (MergeEngine_ECS_Systems_State_Board_ItemsStateSystemBase_TLoadable__o* __this, const MethodInfo_539793C* method);
; bytes=16 sha256=9797538c6c7a9ff7d9dba0612f457251362b4fcd6908e1bf4bcf64ffb0b0ba0c status=arm64_complete_bound indexed_start=True
0x0539793C: 281040f9  ldr x8, [x1, #0x20]
0x05397940: 086140f9  ldr x8, [x8, #0xc0]
0x05397944: 013140f9  ldr x1, [x8, #0x60]
0x05397948: 14b6c617  b #0x4545198

