; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 770 MergeEngine.ECS.Systems.State.Board.BoardInventoryStateSystem<TState>
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C1802C | MergeEngine.ECS.Systems.State.Board.BoardInventoryStateSystem<object>$$EntitiesRemovalLogic
; native signature: void MergeEngine_ECS_Systems_State_Board_BoardInventoryStateSystem_object___EntitiesRemovalLogic (MergeEngine_ECS_Systems_State_Board_BoardInventoryStateSystem_TState__o* __this, MergeEngine_ECS_Components_Items_IComponentBase_o* component, const MethodInfo_4C1802C* method);
; bytes=456 sha256=2fc20f027aec02f8f4c32c4390269646e098dfd0b1e3a5a92e916c071bbb9b7d status=arm64_complete_bound indexed_start=True
0x04C1802C: fe0f1df8  str x30, [sp, #-0x30]!
0x04C18030: f65701a9  stp x22, x21, [sp, #0x10]
0x04C18034: f44f02a9  stp x20, x19, [sp, #0x20]
0x04C18038: 158801d0  adrp x21, #0x7d1a000
0x04C1803C: a8027c39  ldrb w8, [x21, #0xf00]
0x04C18040: f30301aa  mov x19, x1
0x04C18044: f40300aa  mov x20, x0
0x04C18048: 88010037  tbnz w8, #0, #0x4c18078
0x04C1804C: 40530190  adrp x0, #0x7680000
0x04C18050: 00c041f9  ldr x0, [x0, #0x380]
0x04C18054: 71a29597  bl #0x3180a18
0x04C18058: 205301d0  adrp x0, #0x767e000
0x04C1805C: 004c42f9  ldr x0, [x0, #0x498]
0x04C18060: 6ea29597  bl #0x3180a18
0x04C18064: 205301d0  adrp x0, #0x767e000
0x04C18068: 00e042f9  ldr x0, [x0, #0x5c0]
0x04C1806C: 6ba29597  bl #0x3180a18
0x04C18070: 28008052  movz w8, #0x1
0x04C18074: a8023c39  strb w8, [x21, #0xf00]
0x04C18078: d30b00b4  cbz x19, #0x4c181f0
0x04C1807C: 49530190  adrp x9, #0x7680000
0x04C18080: 29c141f9  ldr x9, [x9, #0x380]
0x04C18084: 680240f9  ldr x8, [x19]
0x04C18088: 953240f9  ldr x21, [x20, #0x60]
0x04C1808C: 360140f9  ldr x22, [x9]
0x04C18090: 095d4279  ldrh w9, [x8, #0x12e]
0x04C18094: c11240f9  ldr x1, [x22, #0x20]
0x04C18098: c2a24079  ldrh w2, [x22, #0x50]
0x04C1809C: 290100b4  cbz x9, #0x4c180c0
0x04C180A0: 0a5940f9  ldr x10, [x8, #0xb0]
0x04C180A4: 4a210091  add x10, x10, #8
0x04C180A8: 4b815ff8  ldur x11, [x10, #-8]
0x04C180AC: 7f0101eb  cmp x11, x1
0x04C180B0: e0000054  b.eq #0x4c180cc
0x04C180B4: 290500f1  subs x9, x9, #1
0x04C180B8: 4a410091  add x10, x10, #0x10
0x04C180BC: 61ffff54  b.ne #0x4c180a8
0x04C180C0: e00313aa  mov x0, x19
0x04C180C4: 93fa9497  bl #0x3156b10
0x04C180C8: 05000014  b #0x4c180dc
0x04C180CC: 490140b9  ldr w9, [x10]
0x04C180D0: 2901020b  add w9, w9, w2
0x04C180D4: 08d1298b  add x8, x8, w9, sxtw #4
0x04C180D8: 00e10491  add x0, x8, #0x138
0x04C180DC: 000440f9  ldr x0, [x0, #8]
0x04C180E0: e10316aa  mov x1, x22
0x04C180E4: a9a29597  bl #0x3180b88
0x04C180E8: 080440f9  ldr x8, [x0, #8]
0x04C180EC: e10300aa  mov x1, x0
0x04C180F0: e00313aa  mov x0, x19
0x04C180F4: 00013fd6  blr x8
0x04C180F8: d50700b4  cbz x21, #0x4c181f0
0x04C180FC: e10300aa  mov x1, x0
0x04C18100: e00315aa  mov x0, x21
0x04C18104: e2031faa  mov x2, xzr
0x04C18108: 90ba5994  bl #0x6286b48
0x04C1810C: 340700b4  cbz x20, #0x4c181f0
0x04C18110: 2a5301d0  adrp x10, #0x767e000
0x04C18114: 680240f9  ldr x8, [x19]
0x04C18118: 4a4d42f9  ldr x10, [x10, #0x498]
0x04C1811C: 940a40f9  ldr x20, [x20, #0x10]
0x04C18120: 095d4279  ldrh w9, [x8, #0x12e]
0x04C18124: 410140f9  ldr x1, [x10]
0x04C18128: 290100b4  cbz x9, #0x4c1814c
0x04C1812C: 0a5940f9  ldr x10, [x8, #0xb0]
0x04C18130: 4a210091  add x10, x10, #8
0x04C18134: 4b815ff8  ldur x11, [x10, #-8]
0x04C18138: 7f0101eb  cmp x11, x1
0x04C1813C: 00010054  b.eq #0x4c1815c
0x04C18140: 290500f1  subs x9, x9, #1
0x04C18144: 4a410091  add x10, x10, #0x10
0x04C18148: 61ffff54  b.ne #0x4c18134
0x04C1814C: e00313aa  mov x0, x19
0x04C18150: e2031f2a  mov w2, wzr
0x04C18154: 6ffa9497  bl #0x3156b10
0x04C18158: 04000014  b #0x4c18168
0x04C1815C: 490180b9  ldrsw x9, [x10]
0x04C18160: 0811098b  add x8, x8, x9, lsl #4
0x04C18164: 00e10491  add x0, x8, #0x138
0x04C18168: 080440a9  ldp x8, x1, [x0]
0x04C1816C: e00313aa  mov x0, x19
0x04C18170: 00013fd6  blr x8
0x04C18174: f40300b4  cbz x20, #0x4c181f0
0x04C18178: 2a5301d0  adrp x10, #0x767e000
0x04C1817C: 880240f9  ldr x8, [x20]
0x04C18180: 4ae142f9  ldr x10, [x10, #0x5c0]
0x04C18184: f30300aa  mov x19, x0
0x04C18188: 095d4279  ldrh w9, [x8, #0x12e]
0x04C1818C: 410140f9  ldr x1, [x10]
0x04C18190: 290100b4  cbz x9, #0x4c181b4
0x04C18194: 0a5940f9  ldr x10, [x8, #0xb0]
0x04C18198: 4a210091  add x10, x10, #8
0x04C1819C: 4b815ff8  ldur x11, [x10, #-8]
0x04C181A0: 7f0101eb  cmp x11, x1
0x04C181A4: 00010054  b.eq #0x4c181c4
0x04C181A8: 290500f1  subs x9, x9, #1
0x04C181AC: 4a410091  add x10, x10, #0x10
0x04C181B0: 61ffff54  b.ne #0x4c1819c
0x04C181B4: c2008052  movz w2, #0x6
0x04C181B8: e00314aa  mov x0, x20
0x04C181BC: 55fa9497  bl #0x3156b10
0x04C181C0: 05000014  b #0x4c181d4
0x04C181C4: 490140b9  ldr w9, [x10]
0x04C181C8: 29190011  add w9, w9, #6
0x04C181CC: 08d1298b  add x8, x8, w9, sxtw #4
0x04C181D0: 00e10491  add x0, x8, #0x138
0x04C181D4: 030840a9  ldp x3, x2, [x0]
0x04C181D8: e00314aa  mov x0, x20
0x04C181DC: e10313aa  mov x1, x19
0x04C181E0: f44f42a9  ldp x20, x19, [sp, #0x20]
0x04C181E4: f65741a9  ldp x22, x21, [sp, #0x10]
0x04C181E8: fe0743f8  ldr x30, [sp], #0x30
0x04C181EC: 60001fd6  br x3
0x04C181F0: afa29597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C181F4 | MergeEngine.ECS.Systems.State.Board.BoardInventoryStateSystem<object>$$GetExistingEntityIds
; native signature: System_Collections_Generic_List_IdComponent__o* MergeEngine_ECS_Systems_State_Board_BoardInventoryStateSystem_object___GetExistingEntityIds (MergeEngine_ECS_Systems_State_Board_BoardInventoryStateSystem_TState__o* __this, const MethodInfo_4C181F4* method);
; bytes=768 sha256=8d1cb37899820e78d1fcbdeb61f936c7734fccaa55d361661d1c95dba180c26e status=arm64_complete_bound indexed_start=True
0x04C181F4: fe0f1cf8  str x30, [sp, #-0x40]!
0x04C181F8: f85f01a9  stp x24, x23, [sp, #0x10]
0x04C181FC: f65702a9  stp x22, x21, [sp, #0x20]
0x04C18200: f44f03a9  stp x20, x19, [sp, #0x30]
0x04C18204: 158801d0  adrp x21, #0x7d1a000
0x04C18208: a8067c39  ldrb w8, [x21, #0xf01]
0x04C1820C: f30301aa  mov x19, x1
0x04C18210: f40300aa  mov x20, x0
0x04C18214: a8020037  tbnz w8, #0, #0x4c18268
0x04C18218: 40530190  adrp x0, #0x7680000
0x04C1821C: 00c441f9  ldr x0, [x0, #0x388]
0x04C18220: fea19597  bl #0x3180a18
0x04C18224: 40530190  adrp x0, #0x7680000
0x04C18228: 00c841f9  ldr x0, [x0, #0x390]
0x04C1822C: fba19597  bl #0x3180a18
0x04C18230: 40530190  adrp x0, #0x7680000
0x04C18234: 00cc41f9  ldr x0, [x0, #0x398]
0x04C18238: f8a19597  bl #0x3180a18
0x04C1823C: 40530190  adrp x0, #0x7680000
0x04C18240: 00d041f9  ldr x0, [x0, #0x3a0]
0x04C18244: f5a19597  bl #0x3180a18
0x04C18248: 40530190  adrp x0, #0x7680000
0x04C1824C: 00d441f9  ldr x0, [x0, #0x3a8]
0x04C18250: f2a19597  bl #0x3180a18
0x04C18254: 40530190  adrp x0, #0x7680000
0x04C18258: 00d841f9  ldr x0, [x0, #0x3b0]
0x04C1825C: efa19597  bl #0x3180a18
0x04C18260: 28008052  movz w8, #0x1
0x04C18264: a8063c39  strb w8, [x21, #0xf01]
0x04C18268: 541400b4  cbz x20, #0x4c184f0
0x04C1826C: 48530190  adrp x8, #0x7680000
0x04C18270: 08d941f9  ldr x8, [x8, #0x3b0]
0x04C18274: e00314aa  mov x0, x20
0x04C18278: 010140f9  ldr x1, [x8]
0x04C1827C: 137ac697  bl #0x3db6ac8
0x04C18280: 681240f9  ldr x8, [x19, #0x20]
0x04C18284: f40300aa  mov x20, x0
0x04C18288: 086140f9  ldr x8, [x8, #0xc0]
0x04C1828C: 080940f9  ldr x8, [x8, #0x10]
0x04C18290: 09d54439  ldrb w9, [x8, #0x135]
0x04C18294: 89000037  tbnz w9, #0, #0x4c182a4
0x04C18298: e00308aa  mov x0, x8
0x04C1829C: 60f99497  bl #0x315681c
0x04C182A0: e80300aa  mov x8, x0
0x04C182A4: 09e140b9  ldr w9, [x8, #0xe0]
0x04C182A8: 69000035  cbnz w9, #0x4c182b4
0x04C182AC: e00308aa  mov x0, x8
0x04C182B0: 37a29597  bl #0x3180b8c
0x04C182B4: 681240f9  ldr x8, [x19, #0x20]
0x04C182B8: 086140f9  ldr x8, [x8, #0xc0]
0x04C182BC: 000940f9  ldr x0, [x8, #0x10]
0x04C182C0: 08d44439  ldrb w8, [x0, #0x135]
0x04C182C4: 48000037  tbnz w8, #0, #0x4c182cc
0x04C182C8: 55f99497  bl #0x315681c
0x04C182CC: 085c40f9  ldr x8, [x0, #0xb8]
0x04C182D0: 57530190  adrp x23, #0x7680000
0x04C182D4: 150540f9  ldr x21, [x8, #8]
0x04C182D8: f7ce41f9  ldr x23, [x23, #0x398]
0x04C182DC: f50500b5  cbnz x21, #0x4c18398
0x04C182E0: 681240f9  ldr x8, [x19, #0x20]
0x04C182E4: 086140f9  ldr x8, [x8, #0xc0]
0x04C182E8: 000940f9  ldr x0, [x8, #0x10]
0x04C182EC: 08d44439  ldrb w8, [x0, #0x135]
0x04C182F0: 48000037  tbnz w8, #0, #0x4c182f8
0x04C182F4: 4af99497  bl #0x315681c
0x04C182F8: 08e040b9  ldr w8, [x0, #0xe0]
0x04C182FC: 48000035  cbnz w8, #0x4c18304
0x04C18300: 23a29597  bl #0x3180b8c
0x04C18304: 681240f9  ldr x8, [x19, #0x20]
0x04C18308: 086140f9  ldr x8, [x8, #0xc0]
0x04C1830C: 000940f9  ldr x0, [x8, #0x10]
0x04C18310: 08d44439  ldrb w8, [x0, #0x135]
0x04C18314: 48000037  tbnz w8, #0, #0x4c1831c
0x04C18318: 41f99497  bl #0x315681c
0x04C1831C: 49530190  adrp x9, #0x7680000
0x04C18320: 085c40f9  ldr x8, [x0, #0xb8]
0x04C18324: 29d141f9  ldr x9, [x9, #0x3a0]
0x04C18328: 160140f9  ldr x22, [x8]
0x04C1832C: 200140f9  ldr x0, [x9]
0x04C18330: 5ca29597  bl #0x3180ca0
0x04C18334: 681240f9  ldr x8, [x19, #0x20]
0x04C18338: e10316aa  mov x1, x22
0x04C1833C: e3031faa  mov x3, xzr
0x04C18340: f50300aa  mov x21, x0
0x04C18344: 086140f9  ldr x8, [x8, #0xc0]
0x04C18348: 020d40f9  ldr x2, [x8, #0x18]
0x04C1834C: 1cf71894  bl #0x5255fbc
0x04C18350: 681240f9  ldr x8, [x19, #0x20]
0x04C18354: 086140f9  ldr x8, [x8, #0xc0]
0x04C18358: 000940f9  ldr x0, [x8, #0x10]
0x04C1835C: 09d44439  ldrb w9, [x0, #0x135]
0x04C18360: 89000037  tbnz w9, #0, #0x4c18370
0x04C18364: 2ef99497  bl #0x315681c
0x04C18368: 681240f9  ldr x8, [x19, #0x20]
0x04C1836C: 086140f9  ldr x8, [x8, #0xc0]
0x04C18370: 095c40f9  ldr x9, [x0, #0xb8]
0x04C18374: 350500f9  str x21, [x9, #8]
0x04C18378: 000940f9  ldr x0, [x8, #0x10]
0x04C1837C: 08d44439  ldrb w8, [x0, #0x135]
0x04C18380: 48000037  tbnz w8, #0, #0x4c18388
0x04C18384: 26f99497  bl #0x315681c
0x04C18388: 085c40f9  ldr x8, [x0, #0xb8]
0x04C1838C: e10315aa  mov x1, x21
0x04C18390: 00210091  add x0, x8, #8
0x04C18394: 8ca19597  bl #0x31809c4
0x04C18398: e20240f9  ldr x2, [x23]
0x04C1839C: e00314aa  mov x0, x20
0x04C183A0: e10315aa  mov x1, x21
0x04C183A4: c1bbc197  bl #0x3c872a8
0x04C183A8: 681240f9  ldr x8, [x19, #0x20]
0x04C183AC: f40300aa  mov x20, x0
0x04C183B0: 086140f9  ldr x8, [x8, #0xc0]
0x04C183B4: 080940f9  ldr x8, [x8, #0x10]
0x04C183B8: 09d54439  ldrb w9, [x8, #0x135]
0x04C183BC: 89000037  tbnz w9, #0, #0x4c183cc
0x04C183C0: e00308aa  mov x0, x8
0x04C183C4: 16f99497  bl #0x315681c
0x04C183C8: e80300aa  mov x8, x0
0x04C183CC: 09e140b9  ldr w9, [x8, #0xe0]
0x04C183D0: 69000035  cbnz w9, #0x4c183dc
0x04C183D4: e00308aa  mov x0, x8
0x04C183D8: eda19597  bl #0x3180b8c
0x04C183DC: 681240f9  ldr x8, [x19, #0x20]
0x04C183E0: 086140f9  ldr x8, [x8, #0xc0]
0x04C183E4: 000940f9  ldr x0, [x8, #0x10]
0x04C183E8: 08d44439  ldrb w8, [x0, #0x135]
0x04C183EC: 48000037  tbnz w8, #0, #0x4c183f4
0x04C183F0: 0bf99497  bl #0x315681c
0x04C183F4: 085c40f9  ldr x8, [x0, #0xb8]
0x04C183F8: 58530190  adrp x24, #0x7680000
0x04C183FC: 57530190  adrp x23, #0x7680000
0x04C18400: 150940f9  ldr x21, [x8, #0x10]
0x04C18404: 18c741f9  ldr x24, [x24, #0x388]
0x04C18408: f7ca41f9  ldr x23, [x23, #0x390]
0x04C1840C: f50500b5  cbnz x21, #0x4c184c8
0x04C18410: 681240f9  ldr x8, [x19, #0x20]
0x04C18414: 086140f9  ldr x8, [x8, #0xc0]
0x04C18418: 000940f9  ldr x0, [x8, #0x10]
0x04C1841C: 08d44439  ldrb w8, [x0, #0x135]
0x04C18420: 48000037  tbnz w8, #0, #0x4c18428
0x04C18424: fef89497  bl #0x315681c
0x04C18428: 08e040b9  ldr w8, [x0, #0xe0]
0x04C1842C: 48000035  cbnz w8, #0x4c18434
0x04C18430: d7a19597  bl #0x3180b8c
0x04C18434: 681240f9  ldr x8, [x19, #0x20]
0x04C18438: 086140f9  ldr x8, [x8, #0xc0]
0x04C1843C: 000940f9  ldr x0, [x8, #0x10]
0x04C18440: 08d44439  ldrb w8, [x0, #0x135]
0x04C18444: 48000037  tbnz w8, #0, #0x4c1844c
0x04C18448: f5f89497  bl #0x315681c
0x04C1844C: 49530190  adrp x9, #0x7680000
0x04C18450: 085c40f9  ldr x8, [x0, #0xb8]
0x04C18454: 29d541f9  ldr x9, [x9, #0x3a8]
0x04C18458: 160140f9  ldr x22, [x8]
0x04C1845C: 200140f9  ldr x0, [x9]
0x04C18460: 10a29597  bl #0x3180ca0
0x04C18464: 681240f9  ldr x8, [x19, #0x20]
0x04C18468: e10316aa  mov x1, x22
0x04C1846C: e3031faa  mov x3, xzr
0x04C18470: f50300aa  mov x21, x0
0x04C18474: 086140f9  ldr x8, [x8, #0xc0]
0x04C18478: 021140f9  ldr x2, [x8, #0x20]
0x04C1847C: 4ff91894  bl #0x52569b8
0x04C18480: 681240f9  ldr x8, [x19, #0x20]
0x04C18484: 086140f9  ldr x8, [x8, #0xc0]
0x04C18488: 000940f9  ldr x0, [x8, #0x10]
0x04C1848C: 09d44439  ldrb w9, [x0, #0x135]
0x04C18490: 89000037  tbnz w9, #0, #0x4c184a0
0x04C18494: e2f89497  bl #0x315681c
0x04C18498: 681240f9  ldr x8, [x19, #0x20]
0x04C1849C: 086140f9  ldr x8, [x8, #0xc0]
0x04C184A0: 095c40f9  ldr x9, [x0, #0xb8]
0x04C184A4: 350900f9  str x21, [x9, #0x10]
0x04C184A8: 000940f9  ldr x0, [x8, #0x10]
0x04C184AC: 08d44439  ldrb w8, [x0, #0x135]
0x04C184B0: 48000037  tbnz w8, #0, #0x4c184b8
0x04C184B4: daf89497  bl #0x315681c
0x04C184B8: 085c40f9  ldr x8, [x0, #0xb8]
0x04C184BC: e10315aa  mov x1, x21
0x04C184C0: 00410091  add x0, x8, #0x10
0x04C184C4: 40a19597  bl #0x31809c4
0x04C184C8: 020340f9  ldr x2, [x24]
0x04C184CC: e00314aa  mov x0, x20
0x04C184D0: e10315aa  mov x1, x21
0x04C184D4: 70e1c097  bl #0x3c50a94
0x04C184D8: e10240f9  ldr x1, [x23]
0x04C184DC: f44f43a9  ldp x20, x19, [sp, #0x30]
0x04C184E0: f65742a9  ldp x22, x21, [sp, #0x20]
0x04C184E4: f85f41a9  ldp x24, x23, [sp, #0x10]
0x04C184E8: fe0744f8  ldr x30, [sp], #0x40
0x04C184EC: b91ec117  b #0x3c5ffd0
0x04C184F0: efa19597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C184F4 | MergeEngine.ECS.Systems.State.Board.BoardInventoryStateSystem<object>$$ProcessItems
; native signature: void MergeEngine_ECS_Systems_State_Board_BoardInventoryStateSystem_object___ProcessItems (MergeEngine_ECS_Systems_State_Board_BoardInventoryStateSystem_TState__o* __this, Il2CppObject* boardInventory, System_Collections_Generic_List_IdComponent__o* existingEntityIds, const MethodInfo_4C184F4* method);
; bytes=868 sha256=cd88139474a339339ccedea7e28f8ac6cdf8d0943fe8f447c836f7899269a460 status=arm64_complete_bound indexed_start=True
0x04C184F4: ff8302d1  sub sp, sp, #0xa0
0x04C184F8: fd7b04a9  stp x29, x30, [sp, #0x40]
0x04C184FC: fc6f05a9  stp x28, x27, [sp, #0x50]
0x04C18500: fa6706a9  stp x26, x25, [sp, #0x60]
0x04C18504: f85f07a9  stp x24, x23, [sp, #0x70]
0x04C18508: f65708a9  stp x22, x21, [sp, #0x80]
0x04C1850C: f44f09a9  stp x20, x19, [sp, #0x90]
0x04C18510: 178801d0  adrp x23, #0x7d1a000
0x04C18514: e80a7c39  ldrb w8, [x23, #0xf02]
0x04C18518: f30303aa  mov x19, x3
0x04C1851C: f40302aa  mov x20, x2
0x04C18520: f60301aa  mov x22, x1
0x04C18524: f50300aa  mov x21, x0
0x04C18528: c8030037  tbnz w8, #0, #0x4c185a0
0x04C1852C: 005301d0  adrp x0, #0x767a000
0x04C18530: 009444f9  ldr x0, [x0, #0x928]
0x04C18534: 39a19597  bl #0x3180a18
0x04C18538: 40530190  adrp x0, #0x7680000
0x04C1853C: 00dc41f9  ldr x0, [x0, #0x3b8]
0x04C18540: 36a19597  bl #0x3180a18
0x04C18544: 40530190  adrp x0, #0x7680000
0x04C18548: 00e041f9  ldr x0, [x0, #0x3c0]
0x04C1854C: 33a19597  bl #0x3180a18
0x04C18550: 40530190  adrp x0, #0x7680000
0x04C18554: 00e441f9  ldr x0, [x0, #0x3c8]
0x04C18558: 30a19597  bl #0x3180a18
0x04C1855C: 40530190  adrp x0, #0x7680000
0x04C18560: 00e841f9  ldr x0, [x0, #0x3d0]
0x04C18564: 2da19597  bl #0x3180a18
0x04C18568: 40530190  adrp x0, #0x7680000
0x04C1856C: 00b441f9  ldr x0, [x0, #0x368]
0x04C18570: 2aa19597  bl #0x3180a18
0x04C18574: 40530190  adrp x0, #0x7680000
0x04C18578: 00ec41f9  ldr x0, [x0, #0x3d8]
0x04C1857C: 27a19597  bl #0x3180a18
0x04C18580: 40530190  adrp x0, #0x7680000
0x04C18584: 00b841f9  ldr x0, [x0, #0x370]
0x04C18588: 24a19597  bl #0x3180a18
0x04C1858C: 40530190  adrp x0, #0x7680000
0x04C18590: 00bc41f9  ldr x0, [x0, #0x378]
0x04C18594: 21a19597  bl #0x3180a18
0x04C18598: 28008052  movz w8, #0x1
0x04C1859C: e80a3c39  strb w8, [x23, #0xf02]
0x04C185A0: ff7f02a9  stp xzr, xzr, [sp, #0x20]
0x04C185A4: ff1b00f9  str xzr, [sp, #0x30]
0x04C185A8: ff0f00f9  str xzr, [sp, #0x18]
0x04C185AC: 161100b4  cbz x22, #0x4c187cc
0x04C185B0: f51000b4  cbz x21, #0x4c187cc
0x04C185B4: 681240f9  ldr x8, [x19, #0x20]
0x04C185B8: c21640f9  ldr x2, [x22, #0x28]
0x04C185BC: 57530190  adrp x23, #0x7680000
0x04C185C0: 58530190  adrp x24, #0x7680000
0x04C185C4: 086140f9  ldr x8, [x8, #0xc0]
0x04C185C8: e00315aa  mov x0, x21
0x04C185CC: e10314aa  mov x1, x20
0x04C185D0: 031940f9  ldr x3, [x8, #0x30]
0x04C185D4: f7be41f9  ldr x23, [x23, #0x378]
0x04C185D8: 18b741f9  ldr x24, [x24, #0x368]
0x04C185DC: b2fb1d94  bl #0x53974a4
0x04C185E0: e10240f9  ldr x1, [x23]
0x04C185E4: e00315aa  mov x0, x21
0x04C185E8: c578c697  bl #0x3db68fc
0x04C185EC: 681240f9  ldr x8, [x19, #0x20]
0x04C185F0: e10300aa  mov x1, x0
0x04C185F4: e00315aa  mov x0, x21
0x04C185F8: e20316aa  mov x2, x22
0x04C185FC: 086140f9  ldr x8, [x8, #0xc0]
0x04C18600: 031d40f9  ldr x3, [x8, #0x38]
0x04C18604: b97abb97  bl #0x3af70e8
0x04C18608: 000340f9  ldr x0, [x24]
0x04C1860C: b71640f9  ldr x23, [x21, #0x28]
0x04C18610: a4a19597  bl #0x3180ca0
0x04C18614: e1031faa  mov x1, xzr
0x04C18618: f80300aa  mov x24, x0
0x04C1861C: b06b4f94  bl #0x5ff34dc
0x04C18620: 770d00b4  cbz x23, #0x4c187cc
0x04C18624: 48530190  adrp x8, #0x7680000
0x04C18628: 08b941f9  ldr x8, [x8, #0x370]
0x04C1862C: e00317aa  mov x0, x23
0x04C18630: e10318aa  mov x1, x24
0x04C18634: 020140f9  ldr x2, [x8]
0x04C18638: cd31c697  bl #0x3da4d6c
0x04C1863C: c01640f9  ldr x0, [x22, #0x28]
0x04C18640: 600c00b4  cbz x0, #0x4c187cc
0x04C18644: 48530190  adrp x8, #0x7680000
0x04C18648: 08ed41f9  ldr x8, [x8, #0x3d8]
0x04C1864C: 5b530190  adrp x27, #0x7680000
0x04C18650: 7be341f9  ldr x27, [x27, #0x3c0]
0x04C18654: 1c5301d0  adrp x28, #0x767a000
0x04C18658: 010140f9  ldr x1, [x8]
0x04C1865C: 5d530190  adrp x29, #0x7680000
0x04C18660: 5a530190  adrp x26, #0x7680000
0x04C18664: 9c9744f9  ldr x28, [x28, #0x928]
0x04C18668: bdeb41f9  ldr x29, [x29, #0x3d0]
0x04C1866C: 5adf41f9  ldr x26, [x26, #0x3b8]
0x04C18670: e8030091  mov x8, sp
0x04C18674: 7db2d097  bl #0x4045068
0x04C18678: e003c03d  ldr q0, [sp]
0x04C1867C: e80b40f9  ldr x8, [sp, #0x10]
0x04C18680: e00b803d  str q0, [sp, #0x20]
0x04C18684: e81b00f9  str x8, [sp, #0x30]
0x04C18688: 610340f9  ldr x1, [x27]
0x04C1868C: e0830091  add x0, sp, #0x20
0x04C18690: c9f40f94  bl #0x50159b4
0x04C18694: 00080036  tbz w0, #0, #0x4c18794
0x04C18698: f61b40f9  ldr x22, [sp, #0x30]
0x04C1869C: e0031f2a  mov w0, wzr
0x04C186A0: e1031f2a  mov w1, wzr
0x04C186A4: e2031faa  mov x2, xzr
0x04C186A8: e3031faa  mov x3, xzr
0x04C186AC: 94ed7394  bl #0x6913cfc
0x04C186B0: 681240f9  ldr x8, [x19, #0x20]
0x04C186B4: e30300aa  mov x3, x0
0x04C186B8: 086140f9  ldr x8, [x8, #0xc0]
0x04C186BC: 052140f9  ldr x5, [x8, #0x40]
0x04C186C0: e4630091  add x4, sp, #0x18
0x04C186C4: e00315aa  mov x0, x21
0x04C186C8: e10314aa  mov x1, x20
0x04C186CC: e20316aa  mov x2, x22
0x04C186D0: d9fb1d94  bl #0x5397634
0x04C186D4: f703002a  mov w23, w0
0x04C186D8: e00f40f9  ldr x0, [sp, #0x18]
0x04C186DC: 400700b4  cbz x0, #0x4c187c4
0x04C186E0: 810340f9  ldr x1, [x28]
0x04C186E4: a821c097  bl #0x3c20d84
0x04C186E8: e10300aa  mov x1, x0
0x04C186EC: f60600b4  cbz x22, #0x4c187c8
0x04C186F0: 681240f9  ldr x8, [x19, #0x20]
0x04C186F4: c25640f9  ldr x2, [x22, #0xa8]
0x04C186F8: 086140f9  ldr x8, [x8, #0xc0]
0x04C186FC: 032540f9  ldr x3, [x8, #0x48]
0x04C18700: e00315aa  mov x0, x21
0x04C18704: 797abb97  bl #0x3af70e8
0x04C18708: b82e40f9  ldr x24, [x21, #0x58]
0x04C1870C: b80500b4  cbz x24, #0x4c187c0
0x04C18710: 080340f9  ldr x8, [x24]
0x04C18714: f90f40f9  ldr x25, [sp, #0x18]
0x04C18718: a10340f9  ldr x1, [x29]
0x04C1871C: 095d4279  ldrh w9, [x8, #0x12e]
0x04C18720: 290100b4  cbz x9, #0x4c18744
0x04C18724: 0a5940f9  ldr x10, [x8, #0xb0]
0x04C18728: 4a210091  add x10, x10, #8
0x04C1872C: 4b815ff8  ldur x11, [x10, #-8]
0x04C18730: 7f0101eb  cmp x11, x1
0x04C18734: 00010054  b.eq #0x4c18754
0x04C18738: 290500f1  subs x9, x9, #1
0x04C1873C: 4a410091  add x10, x10, #0x10
0x04C18740: 61ffff54  b.ne #0x4c1872c
0x04C18744: e00318aa  mov x0, x24
0x04C18748: e2031f2a  mov w2, wzr
0x04C1874C: f1f89497  bl #0x3156b10
0x04C18750: 04000014  b #0x4c18760
0x04C18754: 490180b9  ldrsw x9, [x10]
0x04C18758: 0811098b  add x8, x8, x9, lsl #4
0x04C1875C: 00e10491  add x0, x8, #0x138
0x04C18760: 080c40a9  ldp x8, x3, [x0]
0x04C18764: e00318aa  mov x0, x24
0x04C18768: e10319aa  mov x1, x25
0x04C1876C: e20316aa  mov x2, x22
0x04C18770: 00013fd6  blr x8
0x04C18774: b7f80737  tbnz w23, #0, #0x4c18688
0x04C18778: 681240f9  ldr x8, [x19, #0x20]
0x04C1877C: e10f40f9  ldr x1, [sp, #0x18]
0x04C18780: 086140f9  ldr x8, [x8, #0xc0]
0x04C18784: 022d40f9  ldr x2, [x8, #0x58]
0x04C18788: e00315aa  mov x0, x21
0x04C1878C: 1afb1d94  bl #0x53973f4
0x04C18790: beffff17  b #0x4c18688
0x04C18794: 410340f9  ldr x1, [x26]
0x04C18798: e0830091  add x0, sp, #0x20
0x04C1879C: 85f40f94  bl #0x50159b0
0x04C187A0: f44f49a9  ldp x20, x19, [sp, #0x90]
0x04C187A4: f65748a9  ldp x22, x21, [sp, #0x80]
0x04C187A8: f85f47a9  ldp x24, x23, [sp, #0x70]
0x04C187AC: fa6746a9  ldp x26, x25, [sp, #0x60]
0x04C187B0: fc6f45a9  ldp x28, x27, [sp, #0x50]
0x04C187B4: fd7b44a9  ldp x29, x30, [sp, #0x40]
0x04C187B8: ff830291  add sp, sp, #0xa0
0x04C187BC: c0035fd6  ret
0x04C187C0: 3ba19597  bl #0x3180cac
0x04C187C4: 3aa19597  bl #0x3180cac
0x04C187C8: 39a19597  bl #0x3180cac
0x04C187CC: 38a19597  bl #0x3180cac
0x04C187D0: 09000014  b #0x4c187f4
0x04C187D4: 08000014  b #0x4c187f4
0x04C187D8: 07000014  b #0x4c187f4
0x04C187DC: 06000014  b #0x4c187f4
0x04C187E0: 05000014  b #0x4c187f4
0x04C187E4: 04000014  b #0x4c187f4
0x04C187E8: 03000014  b #0x4c187f4
0x04C187EC: 02000014  b #0x4c187f4
0x04C187F0: 01000014  b #0x4c187f4
0x04C187F4: f30300aa  mov x19, x0
0x04C187F8: 3f040071  cmp w1, #1
0x04C187FC: 61010054  b.ne #0x4c18828
0x04C18800: e00313aa  mov x0, x19
0x04C18804: 43d89694  bl #0x71ce910
0x04C18808: 140040f9  ldr x20, [x0]
0x04C1880C: 45d89694  bl #0x71ce920
0x04C18810: 410340f9  ldr x1, [x26]
0x04C18814: e0830091  add x0, sp, #0x20
0x04C18818: 66f40f94  bl #0x50159b0
0x04C1881C: 34fcffb4  cbz x20, #0x4c187a0
0x04C18820: e00314aa  mov x0, x20
0x04C18824: 20a19597  bl #0x3180ca4
0x04C18828: f4031faa  mov x20, xzr
0x04C1882C: 02000014  b #0x4c18834
0x04C18830: f30300aa  mov x19, x0
0x04C18834: 410340f9  ldr x1, [x26]
0x04C18838: e0830091  add x0, sp, #0x20
0x04C1883C: 5df40f94  bl #0x50159b0
0x04C18840: 740000b5  cbnz x20, #0x4c1884c
0x04C18844: e00313aa  mov x0, x19
0x04C18848: 44349997  bl #0x3265958
0x04C1884C: e00314aa  mov x0, x20
0x04C18850: 15a19597  bl #0x3180ca4
0x04C18854: 30c38797  bl #0x2e09514

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C18858 | MergeEngine.ECS.Systems.State.Board.BoardInventoryStateSystem<object>$$.ctor
; native signature: void MergeEngine_ECS_Systems_State_Board_BoardInventoryStateSystem_object____ctor (MergeEngine_ECS_Systems_State_Board_BoardInventoryStateSystem_TState__o* __this, const MethodInfo_4C18858* method);
; bytes=16 sha256=01419e2e3cfd1d5b378ed24e978d53593c604ffed47f70239d7782fdf2b0c8d4 status=arm64_complete_bound indexed_start=True
0x04C18858: 281040f9  ldr x8, [x1, #0x20]
0x04C1885C: 086140f9  ldr x8, [x8, #0xc0]
0x04C18860: 013140f9  ldr x1, [x8, #0x60]
0x04C18864: 36fc1d14  b #0x539793c

