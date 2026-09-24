; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 939 MergeEngine.ECS.Systems.Items.BaseItemSystem<T>
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; Generic instantiation from Il2CppDumper script.json | RVA 0x4BEC2C0 | MergeEngine.ECS.Systems.Items.BaseItemSystem<object>$$ProcessComponents
; native signature: void MergeEngine_ECS_Systems_Items_BaseItemSystem_object___ProcessComponents (MergeEngine_ECS_Systems_Items_BaseItemSystem_T__o* __this, System_Collections_ObjectModel_ReadOnlyCollection_T__o* components, const MethodInfo_4BEC2C0* method);
; bytes=1128 sha256=7ee51f7474a9448c86e64189691d735fd5a9713c0eb2760ed81ea55a6c13bc6a status=arm64_complete_bound indexed_start=True
0x04BEC2C0: fe0f1cf8  str x30, [sp, #-0x40]!
0x04BEC2C4: f85f01a9  stp x24, x23, [sp, #0x10]
0x04BEC2C8: f65702a9  stp x22, x21, [sp, #0x20]
0x04BEC2CC: f44f03a9  stp x20, x19, [sp, #0x30]
0x04BEC2D0: 768901d0  adrp x22, #0x7d1a000
0x04BEC2D4: c8f67739  ldrb w8, [x22, #0xdfd]
0x04BEC2D8: f40302aa  mov x20, x2
0x04BEC2DC: f30301aa  mov x19, x1
0x04BEC2E0: f50300aa  mov x21, x0
0x04BEC2E4: 28010037  tbnz w8, #0, #0x4bec308
0x04BEC2E8: 005301d0  adrp x0, #0x764e000
0x04BEC2EC: 006444f9  ldr x0, [x0, #0x8c8]
0x04BEC2F0: ca519697  bl #0x3180a18
0x04BEC2F4: 005301d0  adrp x0, #0x764e000
0x04BEC2F8: 007044f9  ldr x0, [x0, #0x8e0]
0x04BEC2FC: c7519697  bl #0x3180a18
0x04BEC300: 28008052  movz w8, #0x1
0x04BEC304: c8f63739  strb w8, [x22, #0xdfd]
0x04BEC308: a80240f9  ldr x8, [x21]
0x04BEC30C: e00315aa  mov x0, x21
0x04BEC310: e10313aa  mov x1, x19
0x04BEC314: 092541f9  ldr x9, [x8, #0x248]
0x04BEC318: 022941f9  ldr x2, [x8, #0x250]
0x04BEC31C: 20013fd6  blr x9
0x04BEC320: e00f00b4  cbz x0, #0x4bec51c
0x04BEC324: 881240f9  ldr x8, [x20, #0x20]
0x04BEC328: f30300aa  mov x19, x0
0x04BEC32C: 086140f9  ldr x8, [x8, #0xc0]
0x04BEC330: 010d40f9  ldr x1, [x8, #0x18]
0x04BEC334: 28d44439  ldrb w8, [x1, #0x135]
0x04BEC338: 88000037  tbnz w8, #0, #0x4bec348
0x04BEC33C: e00301aa  mov x0, x1
0x04BEC340: 37a99597  bl #0x315681c
0x04BEC344: e10300aa  mov x1, x0
0x04BEC348: 680240f9  ldr x8, [x19]
0x04BEC34C: 095d4279  ldrh w9, [x8, #0x12e]
0x04BEC350: 290100b4  cbz x9, #0x4bec374
0x04BEC354: 0a5940f9  ldr x10, [x8, #0xb0]
0x04BEC358: 4a210091  add x10, x10, #8
0x04BEC35C: 4b815ff8  ldur x11, [x10, #-8]
0x04BEC360: 7f0101eb  cmp x11, x1
0x04BEC364: 00010054  b.eq #0x4bec384
0x04BEC368: 290500f1  subs x9, x9, #1
0x04BEC36C: 4a410091  add x10, x10, #0x10
0x04BEC370: 61ffff54  b.ne #0x4bec35c
0x04BEC374: e00313aa  mov x0, x19
0x04BEC378: e2031f2a  mov w2, wzr
0x04BEC37C: e5a99597  bl #0x3156b10
0x04BEC380: 04000014  b #0x4bec390
0x04BEC384: 490180b9  ldrsw x9, [x10]
0x04BEC388: 0811098b  add x8, x8, x9, lsl #4
0x04BEC38C: 00e10491  add x0, x8, #0x138
0x04BEC390: 080440a9  ldp x8, x1, [x0]
0x04BEC394: 175301d0  adrp x23, #0x764e000
0x04BEC398: f76644f9  ldr x23, [x23, #0x8c8]
0x04BEC39C: e00313aa  mov x0, x19
0x04BEC3A0: 00013fd6  blr x8
0x04BEC3A4: f30300aa  mov x19, x0
0x04BEC3A8: c00b00b4  cbz x0, #0x4bec520
0x04BEC3AC: 185301d0  adrp x24, #0x764e000
0x04BEC3B0: 187344f9  ldr x24, [x24, #0x8e0]
0x04BEC3B4: 680240f9  ldr x8, [x19]
0x04BEC3B8: 010340f9  ldr x1, [x24]
0x04BEC3BC: 095d4279  ldrh w9, [x8, #0x12e]
0x04BEC3C0: 290100b4  cbz x9, #0x4bec3e4
0x04BEC3C4: 0a5940f9  ldr x10, [x8, #0xb0]
0x04BEC3C8: 4a210091  add x10, x10, #8
0x04BEC3CC: 4b815ff8  ldur x11, [x10, #-8]
0x04BEC3D0: 7f0101eb  cmp x11, x1
0x04BEC3D4: 00010054  b.eq #0x4bec3f4
0x04BEC3D8: 290500f1  subs x9, x9, #1
0x04BEC3DC: 4a410091  add x10, x10, #0x10
0x04BEC3E0: 61ffff54  b.ne #0x4bec3cc
0x04BEC3E4: e00313aa  mov x0, x19
0x04BEC3E8: e2031f2a  mov w2, wzr
0x04BEC3EC: c9a99597  bl #0x3156b10
0x04BEC3F0: 04000014  b #0x4bec400
0x04BEC3F4: 490180b9  ldrsw x9, [x10]
0x04BEC3F8: 0811098b  add x8, x8, x9, lsl #4
0x04BEC3FC: 00e10491  add x0, x8, #0x138
0x04BEC400: 080440a9  ldp x8, x1, [x0]
0x04BEC404: e00313aa  mov x0, x19
0x04BEC408: 00013fd6  blr x8
0x04BEC40C: c0040036  tbz w0, #0, #0x4bec4a4
0x04BEC410: 881240f9  ldr x8, [x20, #0x20]
0x04BEC414: 086140f9  ldr x8, [x8, #0xc0]
0x04BEC418: 011540f9  ldr x1, [x8, #0x28]
0x04BEC41C: 28d44439  ldrb w8, [x1, #0x135]
0x04BEC420: 88000037  tbnz w8, #0, #0x4bec430
0x04BEC424: e00301aa  mov x0, x1
0x04BEC428: fda89597  bl #0x315681c
0x04BEC42C: e10300aa  mov x1, x0
0x04BEC430: 680240f9  ldr x8, [x19]
0x04BEC434: 095d4279  ldrh w9, [x8, #0x12e]
0x04BEC438: 290100b4  cbz x9, #0x4bec45c
0x04BEC43C: 0a5940f9  ldr x10, [x8, #0xb0]
0x04BEC440: 4a210091  add x10, x10, #8
0x04BEC444: 4b815ff8  ldur x11, [x10, #-8]
0x04BEC448: 7f0101eb  cmp x11, x1
0x04BEC44C: 00010054  b.eq #0x4bec46c
0x04BEC450: 290500f1  subs x9, x9, #1
0x04BEC454: 4a410091  add x10, x10, #0x10
0x04BEC458: 61ffff54  b.ne #0x4bec444
0x04BEC45C: e00313aa  mov x0, x19
0x04BEC460: e2031f2a  mov w2, wzr
0x04BEC464: aba99597  bl #0x3156b10
0x04BEC468: 04000014  b #0x4bec478
0x04BEC46C: 490180b9  ldrsw x9, [x10]
0x04BEC470: 0811098b  add x8, x8, x9, lsl #4
0x04BEC474: 00e10491  add x0, x8, #0x138
0x04BEC478: 080440a9  ldp x8, x1, [x0]
0x04BEC47C: e00313aa  mov x0, x19
0x04BEC480: 00013fd6  blr x8
0x04BEC484: a80240f9  ldr x8, [x21]
0x04BEC488: f60300aa  mov x22, x0
0x04BEC48C: 092d41f9  ldr x9, [x8, #0x258]
0x04BEC490: 023141f9  ldr x2, [x8, #0x260]
0x04BEC494: e00315aa  mov x0, x21
0x04BEC498: e10316aa  mov x1, x22
0x04BEC49C: 20013fd6  blr x9
0x04BEC4A0: c5ffff17  b #0x4bec3b4
0x04BEC4A4: f4031faa  mov x20, xzr
0x04BEC4A8: f30200b4  cbz x19, #0x4bec504
0x04BEC4AC: 680240f9  ldr x8, [x19]
0x04BEC4B0: e10240f9  ldr x1, [x23]
0x04BEC4B4: 095d4279  ldrh w9, [x8, #0x12e]
0x04BEC4B8: 290100b4  cbz x9, #0x4bec4dc
0x04BEC4BC: 0a5940f9  ldr x10, [x8, #0xb0]
0x04BEC4C0: 4a210091  add x10, x10, #8
0x04BEC4C4: 4b815ff8  ldur x11, [x10, #-8]
0x04BEC4C8: 7f0101eb  cmp x11, x1
0x04BEC4CC: 00010054  b.eq #0x4bec4ec
0x04BEC4D0: 290500f1  subs x9, x9, #1
0x04BEC4D4: 4a410091  add x10, x10, #0x10
0x04BEC4D8: 61ffff54  b.ne #0x4bec4c4
0x04BEC4DC: e00313aa  mov x0, x19
0x04BEC4E0: e2031f2a  mov w2, wzr
0x04BEC4E4: 8ba99597  bl #0x3156b10
0x04BEC4E8: 04000014  b #0x4bec4f8
0x04BEC4EC: 490180b9  ldrsw x9, [x10]
0x04BEC4F0: 0811098b  add x8, x8, x9, lsl #4
0x04BEC4F4: 00e10491  add x0, x8, #0x138
0x04BEC4F8: 080440a9  ldp x8, x1, [x0]
0x04BEC4FC: e00313aa  mov x0, x19
0x04BEC500: 00013fd6  blr x8
0x04BEC504: 140100b5  cbnz x20, #0x4bec524
0x04BEC508: f44f43a9  ldp x20, x19, [sp, #0x30]
0x04BEC50C: f65742a9  ldp x22, x21, [sp, #0x20]
0x04BEC510: f85f41a9  ldp x24, x23, [sp, #0x10]
0x04BEC514: fe0744f8  ldr x30, [sp], #0x40
0x04BEC518: c0035fd6  ret
0x04BEC51C: e4519697  bl #0x3180cac
0x04BEC520: e3519697  bl #0x3180cac
0x04BEC524: e00314aa  mov x0, x20
0x04BEC528: df519697  bl #0x3180ca4
0x04BEC52C: 57000014  b #0x4bec688
0x04BEC530: 3f040071  cmp w1, #1
0x04BEC534: f50300aa  mov x21, x0
0x04BEC538: 60000054  b.eq #0x4bec544
0x04BEC53C: e80301aa  mov x8, x1
0x04BEC540: 53000014  b #0x4bec68c
0x04BEC544: e00315aa  mov x0, x21
0x04BEC548: f2889794  bl #0x71ce910
0x04BEC54C: f50300aa  mov x21, x0
0x04BEC550: 005301d0  adrp x0, #0x764e000
0x04BEC554: 006c42f9  ldr x0, [x0, #0x4d8]
0x04BEC558: 35519697  bl #0x3180a2c
0x04BEC55C: a80240f9  ldr x8, [x21]
0x04BEC560: 010140f9  ldr x1, [x8]
0x04BEC564: dd529697  bl #0x31810d8
0x04BEC568: a0000036  tbz w0, #0, #0x4bec57c
0x04BEC56C: b50240f9  ldr x21, [x21]
0x04BEC570: ec889794  bl #0x71ce920
0x04BEC574: 560100b5  cbnz x22, #0x4bec59c
0x04BEC578: cd519697  bl #0x3180cac
0x04BEC57C: 00018052  movz w0, #0x8
0x04BEC580: ec889794  bl #0x71ce930
0x04BEC584: a80240f9  ldr x8, [x21]
0x04BEC588: 080000f9  str x8, [x0]
0x04BEC58C: 412f0190  adrp x1, #0x71d4000
0x04BEC590: 21a03491  add x1, x1, #0xd28
0x04BEC594: e2031faa  mov x2, xzr
0x04BEC598: ea889794  bl #0x71ce940
0x04BEC59C: 881240f9  ldr x8, [x20, #0x20]
0x04BEC5A0: 096140f9  ldr x9, [x8, #0xc0]
0x04BEC5A4: c80240f9  ldr x8, [x22]
0x04BEC5A8: 382540f9  ldr x24, [x9, #0x48]
0x04BEC5AC: 095d4279  ldrh w9, [x8, #0x12e]
0x04BEC5B0: 011340f9  ldr x1, [x24, #0x20]
0x04BEC5B4: 02a34079  ldrh w2, [x24, #0x50]
0x04BEC5B8: 290100b4  cbz x9, #0x4bec5dc
0x04BEC5BC: 0a5940f9  ldr x10, [x8, #0xb0]
0x04BEC5C0: 4a210091  add x10, x10, #8
0x04BEC5C4: 4b815ff8  ldur x11, [x10, #-8]
0x04BEC5C8: 7f0101eb  cmp x11, x1
0x04BEC5CC: e0000054  b.eq #0x4bec5e8
0x04BEC5D0: 290500f1  subs x9, x9, #1
0x04BEC5D4: 4a410091  add x10, x10, #0x10
0x04BEC5D8: 61ffff54  b.ne #0x4bec5c4
0x04BEC5DC: e00316aa  mov x0, x22
0x04BEC5E0: 4ca99597  bl #0x3156b10
0x04BEC5E4: 05000014  b #0x4bec5f8
0x04BEC5E8: 490140b9  ldr w9, [x10]
0x04BEC5EC: 2901020b  add w9, w9, w2
0x04BEC5F0: 08d1298b  add x8, x8, w9, sxtw #4
0x04BEC5F4: 00e10491  add x0, x8, #0x138
0x04BEC5F8: 000440f9  ldr x0, [x0, #8]
0x04BEC5FC: e10318aa  mov x1, x24
0x04BEC600: 62519697  bl #0x3180b88
0x04BEC604: e10300aa  mov x1, x0
0x04BEC608: 280440f9  ldr x8, [x1, #8]
0x04BEC60C: e00316aa  mov x0, x22
0x04BEC610: 00013fd6  blr x8
0x04BEC614: 600000b5  cbnz x0, #0x4bec620
0x04BEC618: e00315aa  mov x0, x21
0x04BEC61C: a2519697  bl #0x3180ca4
0x04BEC620: 161840f9  ldr x22, [x0, #0x30]
0x04BEC624: 805401f0  adrp x0, #0x767f000
0x04BEC628: 006c46f9  ldr x0, [x0, #0xcd8]
0x04BEC62C: 00519697  bl #0x3180a2c
0x04BEC630: 9c519697  bl #0x3180ca0
0x04BEC634: f80300aa  mov x24, x0
0x04BEC638: e10316aa  mov x1, x22
0x04BEC63C: e20315aa  mov x2, x21
0x04BEC640: e3031faa  mov x3, xzr
0x04BEC644: f3da6e94  bl #0x67a3210
0x04BEC648: e00318aa  mov x0, x24
0x04BEC64C: e10314aa  mov x1, x20
0x04BEC650: 4b519697  bl #0x3180b7c
0x04BEC654: 0d000014  b #0x4bec688
0x04BEC658: 0c000014  b #0x4bec688
0x04BEC65C: 0b000014  b #0x4bec688
0x04BEC660: 0a000014  b #0x4bec688
0x04BEC664: f40301aa  mov x20, x1
0x04BEC668: f50300aa  mov x21, x0
0x04BEC66C: 04000014  b #0x4bec67c
0x04BEC670: f40301aa  mov x20, x1
0x04BEC674: f50300aa  mov x21, x0
0x04BEC678: aa889794  bl #0x71ce920
0x04BEC67C: e10314aa  mov x1, x20
0x04BEC680: 03000014  b #0x4bec68c
0x04BEC684: 01000014  b #0x4bec688
0x04BEC688: f50300aa  mov x21, x0
0x04BEC68C: 3f040071  cmp w1, #1
0x04BEC690: c1000054  b.ne #0x4bec6a8
0x04BEC694: e00315aa  mov x0, x21
0x04BEC698: 9e889794  bl #0x71ce910
0x04BEC69C: 140040f9  ldr x20, [x0]
0x04BEC6A0: a0889794  bl #0x71ce920
0x04BEC6A4: 81ffff17  b #0x4bec4a8
0x04BEC6A8: f4031faa  mov x20, xzr
0x04BEC6AC: 02000014  b #0x4bec6b4
0x04BEC6B0: f50300aa  mov x21, x0
0x04BEC6B4: f30200b4  cbz x19, #0x4bec710
0x04BEC6B8: 680240f9  ldr x8, [x19]
0x04BEC6BC: e10240f9  ldr x1, [x23]
0x04BEC6C0: 095d4279  ldrh w9, [x8, #0x12e]
0x04BEC6C4: 290100b4  cbz x9, #0x4bec6e8
0x04BEC6C8: 0a5940f9  ldr x10, [x8, #0xb0]
0x04BEC6CC: 4a210091  add x10, x10, #8
0x04BEC6D0: 4b815ff8  ldur x11, [x10, #-8]
0x04BEC6D4: 7f0101eb  cmp x11, x1
0x04BEC6D8: 00010054  b.eq #0x4bec6f8
0x04BEC6DC: 290500f1  subs x9, x9, #1
0x04BEC6E0: 4a410091  add x10, x10, #0x10
0x04BEC6E4: 61ffff54  b.ne #0x4bec6d0
0x04BEC6E8: e00313aa  mov x0, x19
0x04BEC6EC: e2031f2a  mov w2, wzr
0x04BEC6F0: 08a99597  bl #0x3156b10
0x04BEC6F4: 04000014  b #0x4bec704
0x04BEC6F8: 490180b9  ldrsw x9, [x10]
0x04BEC6FC: 0811098b  add x8, x8, x9, lsl #4
0x04BEC700: 00e10491  add x0, x8, #0x138
0x04BEC704: 080440a9  ldp x8, x1, [x0]
0x04BEC708: e00313aa  mov x0, x19
0x04BEC70C: 00013fd6  blr x8
0x04BEC710: 740000b5  cbnz x20, #0x4bec71c
0x04BEC714: e00315aa  mov x0, x21
0x04BEC718: 90e49997  bl #0x3265958
0x04BEC71C: e00314aa  mov x0, x20
0x04BEC720: 61519697  bl #0x3180ca4
0x04BEC724: 7c738897  bl #0x2e09514

; Generic instantiation from Il2CppDumper script.json | RVA 0x4BEC740 | MergeEngine.ECS.Systems.Items.BaseItemSystem<__Il2CppFullySharedGenericType>$$ProcessComponents
; native signature: void MergeEngine_ECS_Systems_Items_BaseItemSystem___Il2CppFullySharedGenericType___ProcessComponents (MergeEngine_ECS_Systems_Items_BaseItemSystem_T__o* __this, System_Collections_ObjectModel_ReadOnlyCollection_T__o* components, const MethodInfo_4BEC740* method);
; bytes=1288 sha256=1981f8d46744a71b99e30f3eccf5cc71339c105915e586ab2415189842d9edaf status=arm64_complete_bound indexed_start=True
0x04BEC740: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x04BEC744: fc6f01a9  stp x28, x27, [sp, #0x10]
0x04BEC748: fa6702a9  stp x26, x25, [sp, #0x20]
0x04BEC74C: f85f03a9  stp x24, x23, [sp, #0x30]
0x04BEC750: f65704a9  stp x22, x21, [sp, #0x40]
0x04BEC754: f44f05a9  stp x20, x19, [sp, #0x50]
0x04BEC758: fd030091  mov x29, sp
0x04BEC75C: ff8300d1  sub sp, sp, #0x20
0x04BEC760: 5ad03bd5  mrs x26, tpidr_el0
0x04BEC764: 481740f9  ldr x8, [x26, #0x28]
0x04BEC768: 758901d0  adrp x21, #0x7d1a000
0x04BEC76C: f40302aa  mov x20, x2
0x04BEC770: f30301aa  mov x19, x1
0x04BEC774: a8831ff8  stur x8, [x29, #-8]
0x04BEC778: a8fa7739  ldrb w8, [x21, #0xdfe]
0x04BEC77C: f70300aa  mov x23, x0
0x04BEC780: 28010037  tbnz w8, #0, #0x4bec7a4
0x04BEC784: 005301d0  adrp x0, #0x764e000
0x04BEC788: 006444f9  ldr x0, [x0, #0x8c8]
0x04BEC78C: a3509697  bl #0x3180a18
0x04BEC790: 005301d0  adrp x0, #0x764e000
0x04BEC794: 007044f9  ldr x0, [x0, #0x8e0]
0x04BEC798: a0509697  bl #0x3180a18
0x04BEC79C: 28008052  movz w8, #0x1
0x04BEC7A0: a8fa3739  strb w8, [x21, #0xdfe]
0x04BEC7A4: 881240f9  ldr x8, [x20, #0x20]
0x04BEC7A8: 086140f9  ldr x8, [x8, #0xc0]
0x04BEC7AC: 001d40f9  ldr x0, [x8, #0x38]
0x04BEC7B0: 18fc40b9  ldr w24, [x0, #0xfc]
0x04BEC7B4: 09d44439  ldrb w9, [x0, #0x135]
0x04BEC7B8: e803182a  mov w8, w24
0x04BEC7BC: 69000037  tbnz w9, #0, #0x4bec7c8
0x04BEC7C0: 17a89597  bl #0x315681c
0x04BEC7C4: 08fc40b9  ldr w8, [x0, #0xfc]
0x04BEC7C8: 08410011  add w8, w8, #0x10
0x04BEC7CC: 083d0091  add x8, x8, #0xf
0x04BEC7D0: e9030091  mov x9, sp
0x04BEC7D4: 08717c92  and x8, x8, #0x1fffffff0
0x04BEC7D8: 350108cb  sub x21, x9, x8
0x04BEC7DC: bf020091  mov sp, x21
0x04BEC7E0: 093f0091  add x9, x24, #0xf
0x04BEC7E4: e8030091  mov x8, sp
0x04BEC7E8: 29717c92  and x9, x9, #0x1fffffff0
0x04BEC7EC: 190109cb  sub x25, x8, x9
0x04BEC7F0: 3f030091  mov sp, x25
0x04BEC7F4: e8030091  mov x8, sp
0x04BEC7F8: 160109cb  sub x22, x8, x9
0x04BEC7FC: df020091  mov sp, x22
0x04BEC800: e00316aa  mov x0, x22
0x04BEC804: e1031f2a  mov w1, wzr
0x04BEC808: e20318aa  mov x2, x24
0x04BEC80C: 65889794  bl #0x71ce9a0
0x04BEC810: e80240f9  ldr x8, [x23]
0x04BEC814: e00317aa  mov x0, x23
0x04BEC818: e10313aa  mov x1, x19
0x04BEC81C: 092541f9  ldr x9, [x8, #0x248]
0x04BEC820: 022941f9  ldr x2, [x8, #0x250]
0x04BEC824: 20013fd6  blr x9
0x04BEC828: 201300b4  cbz x0, #0x4beca8c
0x04BEC82C: 881240f9  ldr x8, [x20, #0x20]
0x04BEC830: f30300aa  mov x19, x0
0x04BEC834: 086140f9  ldr x8, [x8, #0xc0]
0x04BEC838: 010d40f9  ldr x1, [x8, #0x18]
0x04BEC83C: 28d44439  ldrb w8, [x1, #0x135]
0x04BEC840: 88000037  tbnz w8, #0, #0x4bec850
0x04BEC844: e00301aa  mov x0, x1
0x04BEC848: f5a79597  bl #0x315681c
0x04BEC84C: e10300aa  mov x1, x0
0x04BEC850: 680240f9  ldr x8, [x19]
0x04BEC854: 095d4279  ldrh w9, [x8, #0x12e]
0x04BEC858: 290100b4  cbz x9, #0x4bec87c
0x04BEC85C: 0a5940f9  ldr x10, [x8, #0xb0]
0x04BEC860: 4a210091  add x10, x10, #8
0x04BEC864: 4b815ff8  ldur x11, [x10, #-8]
0x04BEC868: 7f0101eb  cmp x11, x1
0x04BEC86C: 00010054  b.eq #0x4bec88c
0x04BEC870: 290500f1  subs x9, x9, #1
0x04BEC874: 4a410091  add x10, x10, #0x10
0x04BEC878: 61ffff54  b.ne #0x4bec864
0x04BEC87C: e00313aa  mov x0, x19
0x04BEC880: e2031f2a  mov w2, wzr
0x04BEC884: a3a89597  bl #0x3156b10
0x04BEC888: 04000014  b #0x4bec898
0x04BEC88C: 490180b9  ldrsw x9, [x10]
0x04BEC890: 0811098b  add x8, x8, x9, lsl #4
0x04BEC894: 00e10491  add x0, x8, #0x138
0x04BEC898: 080440a9  ldp x8, x1, [x0]
0x04BEC89C: 1b5301d0  adrp x27, #0x764e000
0x04BEC8A0: 7b6744f9  ldr x27, [x27, #0x8c8]
0x04BEC8A4: e00313aa  mov x0, x19
0x04BEC8A8: 00013fd6  blr x8
0x04BEC8AC: f30300aa  mov x19, x0
0x04BEC8B0: 000f00b4  cbz x0, #0x4beca90
0x04BEC8B4: 1c5301d0  adrp x28, #0x764e000
0x04BEC8B8: 9c7344f9  ldr x28, [x28, #0x8e0]
0x04BEC8BC: 680240f9  ldr x8, [x19]
0x04BEC8C0: 810340f9  ldr x1, [x28]
0x04BEC8C4: 095d4279  ldrh w9, [x8, #0x12e]
0x04BEC8C8: 290100b4  cbz x9, #0x4bec8ec
0x04BEC8CC: 0a5940f9  ldr x10, [x8, #0xb0]
0x04BEC8D0: 4a210091  add x10, x10, #8
0x04BEC8D4: 4b815ff8  ldur x11, [x10, #-8]
0x04BEC8D8: 7f0101eb  cmp x11, x1
0x04BEC8DC: 00010054  b.eq #0x4bec8fc
0x04BEC8E0: 290500f1  subs x9, x9, #1
0x04BEC8E4: 4a410091  add x10, x10, #0x10
0x04BEC8E8: 61ffff54  b.ne #0x4bec8d4
0x04BEC8EC: e00313aa  mov x0, x19
0x04BEC8F0: e2031f2a  mov w2, wzr
0x04BEC8F4: 87a89597  bl #0x3156b10
0x04BEC8F8: 04000014  b #0x4bec908
0x04BEC8FC: 490180b9  ldrsw x9, [x10]
0x04BEC900: 0811098b  add x8, x8, x9, lsl #4
0x04BEC904: 00e10491  add x0, x8, #0x138
0x04BEC908: 080440a9  ldp x8, x1, [x0]
0x04BEC90C: e00313aa  mov x0, x19
0x04BEC910: 00013fd6  blr x8
0x04BEC914: 20070036  tbz w0, #0, #0x4bec9f8
0x04BEC918: 881240f9  ldr x8, [x20, #0x20]
0x04BEC91C: 086140f9  ldr x8, [x8, #0xc0]
0x04BEC920: 011540f9  ldr x1, [x8, #0x28]
0x04BEC924: 28d44439  ldrb w8, [x1, #0x135]
0x04BEC928: 88000037  tbnz w8, #0, #0x4bec938
0x04BEC92C: e00301aa  mov x0, x1
0x04BEC930: bba79597  bl #0x315681c
0x04BEC934: e10300aa  mov x1, x0
0x04BEC938: 680240f9  ldr x8, [x19]
0x04BEC93C: 095d4279  ldrh w9, [x8, #0x12e]
0x04BEC940: 290100b4  cbz x9, #0x4bec964
0x04BEC944: 0a5940f9  ldr x10, [x8, #0xb0]
0x04BEC948: 4a210091  add x10, x10, #8
0x04BEC94C: 4b815ff8  ldur x11, [x10, #-8]
0x04BEC950: 7f0101eb  cmp x11, x1
0x04BEC954: 00010054  b.eq #0x4bec974
0x04BEC958: 290500f1  subs x9, x9, #1
0x04BEC95C: 4a410091  add x10, x10, #0x10
0x04BEC960: 61ffff54  b.ne #0x4bec94c
0x04BEC964: e00313aa  mov x0, x19
0x04BEC968: e2031f2a  mov w2, wzr
0x04BEC96C: 69a89597  bl #0x3156b10
0x04BEC970: 04000014  b #0x4bec980
0x04BEC974: 490180b9  ldrsw x9, [x10]
0x04BEC978: 0811098b  add x8, x8, x9, lsl #4
0x04BEC97C: 00e10491  add x0, x8, #0x138
0x04BEC980: b9831ef8  stur x25, [x29, #-0x18]
0x04BEC984: 010440f9  ldr x1, [x0, #8]
0x04BEC988: 20a040a9  ldp x0, x8, [x1, #8]
0x04BEC98C: a36300d1  sub x3, x29, #0x18
0x04BEC990: e20313aa  mov x2, x19
0x04BEC994: e40319aa  mov x4, x25
0x04BEC998: 00013fd6  blr x8
0x04BEC99C: e00316aa  mov x0, x22
0x04BEC9A0: e10319aa  mov x1, x25
0x04BEC9A4: e20318aa  mov x2, x24
0x04BEC9A8: f2879794  bl #0x71ce970
0x04BEC9AC: e00319aa  mov x0, x25
0x04BEC9B0: e10316aa  mov x1, x22
0x04BEC9B4: e20318aa  mov x2, x24
0x04BEC9B8: ee879794  bl #0x71ce970
0x04BEC9BC: 881240f9  ldr x8, [x20, #0x20]
0x04BEC9C0: e40319aa  mov x4, x25
0x04BEC9C4: 086140f9  ldr x8, [x8, #0xc0]
0x04BEC9C8: 081d40f9  ldr x8, [x8, #0x38]
0x04BEC9CC: 082940b9  ldr w8, [x8, #0x28]
0x04BEC9D0: 4800f837  tbnz w8, #0x1f, #0x4bec9d8
0x04BEC9D4: 240340f9  ldr x4, [x25]
0x04BEC9D8: e80240f9  ldr x8, [x23]
0x04BEC9DC: a4831ef8  stur x4, [x29, #-0x18]
0x04BEC9E0: 013141f9  ldr x1, [x8, #0x260]
0x04BEC9E4: 20a040a9  ldp x0, x8, [x1, #8]
0x04BEC9E8: a36300d1  sub x3, x29, #0x18
0x04BEC9EC: e20317aa  mov x2, x23
0x04BEC9F0: 00013fd6  blr x8
0x04BEC9F4: b2ffff17  b #0x4bec8bc
0x04BEC9F8: f4031faa  mov x20, xzr
0x04BEC9FC: f30200b4  cbz x19, #0x4beca58
0x04BECA00: 680240f9  ldr x8, [x19]
0x04BECA04: 610340f9  ldr x1, [x27]
0x04BECA08: 095d4279  ldrh w9, [x8, #0x12e]
0x04BECA0C: 290100b4  cbz x9, #0x4beca30
0x04BECA10: 0a5940f9  ldr x10, [x8, #0xb0]
0x04BECA14: 4a210091  add x10, x10, #8
0x04BECA18: 4b815ff8  ldur x11, [x10, #-8]
0x04BECA1C: 7f0101eb  cmp x11, x1
0x04BECA20: 00010054  b.eq #0x4beca40
0x04BECA24: 290500f1  subs x9, x9, #1
0x04BECA28: 4a410091  add x10, x10, #0x10
0x04BECA2C: 61ffff54  b.ne #0x4beca18
0x04BECA30: e00313aa  mov x0, x19
0x04BECA34: e2031f2a  mov w2, wzr
0x04BECA38: 36a89597  bl #0x3156b10
0x04BECA3C: 04000014  b #0x4beca4c
0x04BECA40: 490180b9  ldrsw x9, [x10]
0x04BECA44: 0811098b  add x8, x8, x9, lsl #4
0x04BECA48: 00e10491  add x0, x8, #0x138
0x04BECA4C: 080440a9  ldp x8, x1, [x0]
0x04BECA50: e00313aa  mov x0, x19
0x04BECA54: 00013fd6  blr x8
0x04BECA58: f40100b5  cbnz x20, #0x4beca94
0x04BECA5C: 481740f9  ldr x8, [x26, #0x28]
0x04BECA60: a9835ff8  ldur x9, [x29, #-8]
0x04BECA64: 1f0109eb  cmp x8, x9
0x04BECA68: a1010054  b.ne #0x4beca9c
0x04BECA6C: bf030091  mov sp, x29
0x04BECA70: f44f45a9  ldp x20, x19, [sp, #0x50]
0x04BECA74: f65744a9  ldp x22, x21, [sp, #0x40]
0x04BECA78: f85f43a9  ldp x24, x23, [sp, #0x30]
0x04BECA7C: fa6742a9  ldp x26, x25, [sp, #0x20]
0x04BECA80: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x04BECA84: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x04BECA88: c0035fd6  ret
0x04BECA8C: 88509697  bl #0x3180cac
0x04BECA90: 87509697  bl #0x3180cac
0x04BECA94: e00314aa  mov x0, x20
0x04BECA98: 83509697  bl #0x3180ca4
0x04BECA9C: bd879794  bl #0x71ce990
0x04BECAA0: 41000014  b #0x4becba4
0x04BECAA4: f80301aa  mov x24, x1
0x04BECAA8: 1f070071  cmp w24, #1
0x04BECAAC: f70300aa  mov x23, x0
0x04BECAB0: e1070054  b.ne #0x4becbac
0x04BECAB4: e00317aa  mov x0, x23
0x04BECAB8: 96879794  bl #0x71ce910
0x04BECABC: f70300aa  mov x23, x0
0x04BECAC0: 005301d0  adrp x0, #0x764e000
0x04BECAC4: 006c42f9  ldr x0, [x0, #0x4d8]
0x04BECAC8: d94f9697  bl #0x3180a2c
0x04BECACC: e80240f9  ldr x8, [x23]
0x04BECAD0: 010140f9  ldr x1, [x8]
0x04BECAD4: 81519697  bl #0x31810d8
0x04BECAD8: a0020036  tbz w0, #0, #0x4becb2c
0x04BECADC: f70240f9  ldr x23, [x23]
0x04BECAE0: 90879794  bl #0x71ce920
0x04BECAE4: 881240f9  ldr x8, [x20, #0x20]
0x04BECAE8: 086140f9  ldr x8, [x8, #0xc0]
0x04BECAEC: 001d40f9  ldr x0, [x8, #0x38]
0x04BECAF0: 09d44439  ldrb w9, [x0, #0x135]
0x04BECAF4: 89000037  tbnz w9, #0, #0x4becb04
0x04BECAF8: 49a79597  bl #0x315681c
0x04BECAFC: 881240f9  ldr x8, [x20, #0x20]
0x04BECB00: 086140f9  ldr x8, [x8, #0xc0]
0x04BECB04: 012540f9  ldr x1, [x8, #0x48]
0x04BECB08: a54300d1  sub x5, x29, #0x10
0x04BECB0C: e20315aa  mov x2, x21
0x04BECB10: e30316aa  mov x3, x22
0x04BECB14: e4031faa  mov x4, xzr
0x04BECB18: 9d529697  bl #0x318158c
0x04BECB1C: a8035ff8  ldur x8, [x29, #-0x10]
0x04BECB20: 680100b5  cbnz x8, #0x4becb4c
0x04BECB24: e00317aa  mov x0, x23
0x04BECB28: 5f509697  bl #0x3180ca4
0x04BECB2C: 00018052  movz w0, #0x8
0x04BECB30: 80879794  bl #0x71ce930
0x04BECB34: e80240f9  ldr x8, [x23]
0x04BECB38: 080000f9  str x8, [x0]
0x04BECB3C: 412f0190  adrp x1, #0x71d4000
0x04BECB40: 21a03491  add x1, x1, #0xd28
0x04BECB44: e2031faa  mov x2, xzr
0x04BECB48: 7e879794  bl #0x71ce940
0x04BECB4C: 151940f9  ldr x21, [x8, #0x30]
0x04BECB50: 805401f0  adrp x0, #0x767f000
0x04BECB54: 006c46f9  ldr x0, [x0, #0xcd8]
0x04BECB58: b54f9697  bl #0x3180a2c
0x04BECB5C: 51509697  bl #0x3180ca0
0x04BECB60: f60300aa  mov x22, x0
0x04BECB64: e10315aa  mov x1, x21
0x04BECB68: e20317aa  mov x2, x23
0x04BECB6C: e3031faa  mov x3, xzr
0x04BECB70: a8d96e94  bl #0x67a3210
0x04BECB74: e00316aa  mov x0, x22
0x04BECB78: e10314aa  mov x1, x20
0x04BECB7C: 00509697  bl #0x3180b7c
0x04BECB80: 09000014  b #0x4becba4
0x04BECB84: 08000014  b #0x4becba4
0x04BECB88: 07000014  b #0x4becba4
0x04BECB8C: 06000014  b #0x4becba4
0x04BECB90: f80301aa  mov x24, x1
0x04BECB94: f70300aa  mov x23, x0
0x04BECB98: 62879794  bl #0x71ce920
0x04BECB9C: 04000014  b #0x4becbac
0x04BECBA0: 01000014  b #0x4becba4
0x04BECBA4: f80301aa  mov x24, x1
0x04BECBA8: f70300aa  mov x23, x0
0x04BECBAC: 1f070071  cmp w24, #1
0x04BECBB0: c1000054  b.ne #0x4becbc8
0x04BECBB4: e00317aa  mov x0, x23
0x04BECBB8: 56879794  bl #0x71ce910
0x04BECBBC: 140040f9  ldr x20, [x0]
0x04BECBC0: 58879794  bl #0x71ce920
0x04BECBC4: 8effff17  b #0x4bec9fc
0x04BECBC8: f4031faa  mov x20, xzr
0x04BECBCC: 02000014  b #0x4becbd4
0x04BECBD0: f70300aa  mov x23, x0
0x04BECBD4: f30200b4  cbz x19, #0x4becc30
0x04BECBD8: 680240f9  ldr x8, [x19]
0x04BECBDC: 610340f9  ldr x1, [x27]
0x04BECBE0: 095d4279  ldrh w9, [x8, #0x12e]
0x04BECBE4: 290100b4  cbz x9, #0x4becc08
0x04BECBE8: 0a5940f9  ldr x10, [x8, #0xb0]
0x04BECBEC: 4a210091  add x10, x10, #8
0x04BECBF0: 4b815ff8  ldur x11, [x10, #-8]
0x04BECBF4: 7f0101eb  cmp x11, x1
0x04BECBF8: 00010054  b.eq #0x4becc18
0x04BECBFC: 290500f1  subs x9, x9, #1
0x04BECC00: 4a410091  add x10, x10, #0x10
0x04BECC04: 61ffff54  b.ne #0x4becbf0
0x04BECC08: e00313aa  mov x0, x19
0x04BECC0C: e2031f2a  mov w2, wzr
0x04BECC10: c0a79597  bl #0x3156b10
0x04BECC14: 04000014  b #0x4becc24
0x04BECC18: 490180b9  ldrsw x9, [x10]
0x04BECC1C: 0811098b  add x8, x8, x9, lsl #4
0x04BECC20: 00e10491  add x0, x8, #0x138
0x04BECC24: 080440a9  ldp x8, x1, [x0]
0x04BECC28: e00313aa  mov x0, x19
0x04BECC2C: 00013fd6  blr x8
0x04BECC30: 740000b5  cbnz x20, #0x4becc3c
0x04BECC34: e00317aa  mov x0, x23
0x04BECC38: 48e39997  bl #0x3265958
0x04BECC3C: e00314aa  mov x0, x20
0x04BECC40: 19509697  bl #0x3180ca4
0x04BECC44: 34728897  bl #0x2e09514

; Generic instantiation from Il2CppDumper script.json | RVA 0x4BEC728 | MergeEngine.ECS.Systems.Items.BaseItemSystem<object>$$OnWillProcessComponents
; native signature: System_Collections_Generic_IEnumerable_T__o* MergeEngine_ECS_Systems_Items_BaseItemSystem_object___OnWillProcessComponents (MergeEngine_ECS_Systems_Items_BaseItemSystem_T__o* __this, System_Collections_ObjectModel_ReadOnlyCollection_T__o* components, const MethodInfo_4BEC728* method);
; bytes=8 sha256=50ddf39453988ba55a1b7d9bbba7f1ae7c5c5c3f7414c859acf17118fa4886b8 status=arm64_complete_bound indexed_start=True
0x04BEC728: e00301aa  mov x0, x1
0x04BEC72C: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x4BECC48 | MergeEngine.ECS.Systems.Items.BaseItemSystem<__Il2CppFullySharedGenericType>$$OnWillProcessComponents
; native signature: System_Collections_Generic_IEnumerable_T__o* MergeEngine_ECS_Systems_Items_BaseItemSystem___Il2CppFullySharedGenericType___OnWillProcessComponents (MergeEngine_ECS_Systems_Items_BaseItemSystem_T__o* __this, System_Collections_ObjectModel_ReadOnlyCollection_T__o* components, const MethodInfo_4BECC48* method);
; bytes=8 sha256=50ddf39453988ba55a1b7d9bbba7f1ae7c5c5c3f7414c859acf17118fa4886b8 status=arm64_complete_bound indexed_start=True
0x04BECC48: e00301aa  mov x0, x1
0x04BECC4C: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x4BEC730 | MergeEngine.ECS.Systems.Items.BaseItemSystem<object>$$.ctor
; native signature: void MergeEngine_ECS_Systems_Items_BaseItemSystem_object____ctor (MergeEngine_ECS_Systems_Items_BaseItemSystem_T__o* __this, const MethodInfo_4BEC730* method);
; bytes=16 sha256=6af927e397ed79d106901dbfaa8cbda05e78887d75ca6e92409890841b04b319 status=arm64_complete_bound indexed_start=True
0x04BEC730: 281040f9  ldr x8, [x1, #0x20]
0x04BEC734: 086140f9  ldr x8, [x8, #0xc0]
0x04BEC738: 012940f9  ldr x1, [x8, #0x50]
0x04BEC73C: 3a0fe817  b #0x45f0424

; Generic instantiation from Il2CppDumper script.json | RVA 0x4BECC50 | MergeEngine.ECS.Systems.Items.BaseItemSystem<__Il2CppFullySharedGenericType>$$.ctor
; native signature: void MergeEngine_ECS_Systems_Items_BaseItemSystem___Il2CppFullySharedGenericType____ctor (MergeEngine_ECS_Systems_Items_BaseItemSystem_T__o* __this, const MethodInfo_4BECC50* method);
; bytes=20 sha256=025799b8da237309edb058fc0db08ef041a381002e2dc28eb884e1d132f1af13 status=arm64_complete_bound indexed_start=True
0x04BECC50: 281040f9  ldr x8, [x1, #0x20]
0x04BECC54: 086140f9  ldr x8, [x8, #0xc0]
0x04BECC58: 012940f9  ldr x1, [x8, #0x50]
0x04BECC5C: 220040f9  ldr x2, [x1]
0x04BECC60: 40001fd6  br x2

