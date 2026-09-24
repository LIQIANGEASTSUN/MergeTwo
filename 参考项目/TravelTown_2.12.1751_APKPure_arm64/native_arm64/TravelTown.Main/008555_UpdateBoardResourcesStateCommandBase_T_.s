; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 8555 Merger.Game.Command.UpdateBoardResourcesStateCommandBase<T>
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; Generic instantiation from Il2CppDumper script.json | RVA 0x46C26E4 | Merger.Game.Command.UpdateBoardResourcesStateCommandBase<object>$$Execute
; native signature: void Merger_Game_Command_UpdateBoardResourcesStateCommandBase_object___Execute (Merger_Game_Command_UpdateBoardResourcesStateCommandBase_T__o* __this, Il2CppObject* signal, const MethodInfo_46C26E4* method);
; bytes=520 sha256=bb1abcf6f5d998c484fc8e9e81e82af188f8e16283872d4aabb6b3dcc2f1a91b status=arm64_complete_bound indexed_start=True
0x046C26E4: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x046C26E8: f44f01a9  stp x20, x19, [sp, #0x10]
0x046C26EC: b4b201f0  adrp x20, #0x7d19000
0x046C26F0: 88666639  ldrb w8, [x20, #0x999]
0x046C26F4: f30300aa  mov x19, x0
0x046C26F8: 48020037  tbnz w8, #0, #0x46c2740
0x046C26FC: c07d0190  adrp x0, #0x767a000
0x046C2700: 000443f9  ldr x0, [x0, #0x608]
0x046C2704: c5f8aa97  bl #0x3180a18
0x046C2708: 807d0190  adrp x0, #0x7672000
0x046C270C: 006043f9  ldr x0, [x0, #0x6c0]
0x046C2710: c2f8aa97  bl #0x3180a18
0x046C2714: e07d0190  adrp x0, #0x767e000
0x046C2718: 00d847f9  ldr x0, [x0, #0xfb0]
0x046C271C: bff8aa97  bl #0x3180a18
0x046C2720: e07d0190  adrp x0, #0x767e000
0x046C2724: 00dc47f9  ldr x0, [x0, #0xfb8]
0x046C2728: bcf8aa97  bl #0x3180a18
0x046C272C: e07d0190  adrp x0, #0x767e000
0x046C2730: 00e047f9  ldr x0, [x0, #0xfc0]
0x046C2734: b9f8aa97  bl #0x3180a18
0x046C2738: 28008052  movz w8, #0x1
0x046C273C: 88662639  strb w8, [x20, #0x999]
0x046C2740: 741e40f9  ldr x20, [x19, #0x38]
0x046C2744: 340d00b4  cbz x20, #0x46c28e8
0x046C2748: e97d0190  adrp x9, #0x767e000
0x046C274C: 29dd47f9  ldr x9, [x9, #0xfb8]
0x046C2750: 880240f9  ldr x8, [x20]
0x046C2754: 350140f9  ldr x21, [x9]
0x046C2758: 095d4279  ldrh w9, [x8, #0x12e]
0x046C275C: a11240f9  ldr x1, [x21, #0x20]
0x046C2760: a2a24079  ldrh w2, [x21, #0x50]
0x046C2764: 290100b4  cbz x9, #0x46c2788
0x046C2768: 0a5940f9  ldr x10, [x8, #0xb0]
0x046C276C: 4a210091  add x10, x10, #8
0x046C2770: 4b815ff8  ldur x11, [x10, #-8]
0x046C2774: 7f0101eb  cmp x11, x1
0x046C2778: e0000054  b.eq #0x46c2794
0x046C277C: 290500f1  subs x9, x9, #1
0x046C2780: 4a410091  add x10, x10, #0x10
0x046C2784: 61ffff54  b.ne #0x46c2770
0x046C2788: e00314aa  mov x0, x20
0x046C278C: e150aa97  bl #0x3156b10
0x046C2790: 05000014  b #0x46c27a4
0x046C2794: 490140b9  ldr w9, [x10]
0x046C2798: 2901020b  add w9, w9, w2
0x046C279C: 08d1298b  add x8, x8, w9, sxtw #4
0x046C27A0: 00e10491  add x0, x8, #0x138
0x046C27A4: 000440f9  ldr x0, [x0, #8]
0x046C27A8: e10315aa  mov x1, x21
0x046C27AC: f7f8aa97  bl #0x3180b88
0x046C27B0: 080440f9  ldr x8, [x0, #8]
0x046C27B4: e10300aa  mov x1, x0
0x046C27B8: e00314aa  mov x0, x20
0x046C27BC: 00013fd6  blr x8
0x046C27C0: 752240f9  ldr x21, [x19, #0x40]
0x046C27C4: 350900b4  cbz x21, #0x46c28e8
0x046C27C8: 8a7d0190  adrp x10, #0x7672000
0x046C27CC: a80240f9  ldr x8, [x21]
0x046C27D0: 4a6143f9  ldr x10, [x10, #0x6c0]
0x046C27D4: f40300aa  mov x20, x0
0x046C27D8: 095d4279  ldrh w9, [x8, #0x12e]
0x046C27DC: 410140f9  ldr x1, [x10]
0x046C27E0: 290100b4  cbz x9, #0x46c2804
0x046C27E4: 0a5940f9  ldr x10, [x8, #0xb0]
0x046C27E8: 4a210091  add x10, x10, #8
0x046C27EC: 4b815ff8  ldur x11, [x10, #-8]
0x046C27F0: 7f0101eb  cmp x11, x1
0x046C27F4: 00010054  b.eq #0x46c2814
0x046C27F8: 290500f1  subs x9, x9, #1
0x046C27FC: 4a410091  add x10, x10, #0x10
0x046C2800: 61ffff54  b.ne #0x46c27ec
0x046C2804: a2008052  movz w2, #0x5
0x046C2808: e00315aa  mov x0, x21
0x046C280C: c150aa97  bl #0x3156b10
0x046C2810: 05000014  b #0x46c2824
0x046C2814: 490140b9  ldr w9, [x10]
0x046C2818: 29150011  add w9, w9, #5
0x046C281C: 08d1298b  add x8, x8, w9, sxtw #4
0x046C2820: 00e10491  add x0, x8, #0x138
0x046C2824: 080440a9  ldp x8, x1, [x0]
0x046C2828: e00315aa  mov x0, x21
0x046C282C: 00013fd6  blr x8
0x046C2830: c00500b4  cbz x0, #0x46c28e8
0x046C2834: 082040b9  ldr w8, [x0, #0x20]
0x046C2838: 1f050071  cmp w8, #1
0x046C283C: 81010054  b.ne #0x46c286c
0x046C2840: 540500b4  cbz x20, #0x46c28e8
0x046C2844: e00314aa  mov x0, x20
0x046C2848: e1031faa  mov x1, xzr
0x046C284C: 5dfc7294  bl #0x63819c0
0x046C2850: c00400b4  cbz x0, #0x46c28e8
0x046C2854: 001040f9  ldr x0, [x0, #0x20]
0x046C2858: 800400b4  cbz x0, #0x46c28e8
0x046C285C: e1031faa  mov x1, xzr
0x046C2860: 85c17294  bl #0x6372e74
0x046C2864: f40300aa  mov x20, x0
0x046C2868: 02000014  b #0x46c2870
0x046C286C: f4031faa  mov x20, xzr
0x046C2870: 731a40f9  ldr x19, [x19, #0x30]
0x046C2874: b30300b4  cbz x19, #0x46c28e8
0x046C2878: ea7d0190  adrp x10, #0x767e000
0x046C287C: 680240f9  ldr x8, [x19]
0x046C2880: 4ad947f9  ldr x10, [x10, #0xfb0]
0x046C2884: 095d4279  ldrh w9, [x8, #0x12e]
0x046C2888: 410140f9  ldr x1, [x10]
0x046C288C: 290100b4  cbz x9, #0x46c28b0
0x046C2890: 0a5940f9  ldr x10, [x8, #0xb0]
0x046C2894: 4a210091  add x10, x10, #8
0x046C2898: 4b815ff8  ldur x11, [x10, #-8]
0x046C289C: 7f0101eb  cmp x11, x1
0x046C28A0: 00010054  b.eq #0x46c28c0
0x046C28A4: 290500f1  subs x9, x9, #1
0x046C28A8: 4a410091  add x10, x10, #0x10
0x046C28AC: 61ffff54  b.ne #0x46c2898
0x046C28B0: 42008052  movz w2, #0x2
0x046C28B4: e00313aa  mov x0, x19
0x046C28B8: 9650aa97  bl #0x3156b10
0x046C28BC: 05000014  b #0x46c28d0
0x046C28C0: 490140b9  ldr w9, [x10]
0x046C28C4: 29090011  add w9, w9, #2
0x046C28C8: 08d1298b  add x8, x8, w9, sxtw #4
0x046C28CC: 00e10491  add x0, x8, #0x138
0x046C28D0: 030840a9  ldp x3, x2, [x0]
0x046C28D4: e00313aa  mov x0, x19
0x046C28D8: e10314aa  mov x1, x20
0x046C28DC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x046C28E0: fe57c2a8  ldp x30, x21, [sp], #0x20
0x046C28E4: 60001fd6  br x3
0x046C28E8: f1f8aa97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x46C28FC | Merger.Game.Command.UpdateBoardResourcesStateCommandBase<__Il2CppFullySharedGenericType>$$Execute
; native signature: void Merger_Game_Command_UpdateBoardResourcesStateCommandBase___Il2CppFullySharedGenericType___Execute (Merger_Game_Command_UpdateBoardResourcesStateCommandBase_T__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o signal, const MethodInfo_46C28FC* method);
; bytes=520 sha256=ce4b4c65f552569d37b3bedf5f924f35ae3d61fcd7c123b133b70244d4088777 status=arm64_complete_bound indexed_start=True
0x046C28FC: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x046C2900: f44f01a9  stp x20, x19, [sp, #0x10]
0x046C2904: b4b201f0  adrp x20, #0x7d19000
0x046C2908: 886a6639  ldrb w8, [x20, #0x99a]
0x046C290C: f30300aa  mov x19, x0
0x046C2910: 48020037  tbnz w8, #0, #0x46c2958
0x046C2914: c07d0190  adrp x0, #0x767a000
0x046C2918: 000443f9  ldr x0, [x0, #0x608]
0x046C291C: 3ff8aa97  bl #0x3180a18
0x046C2920: 807d0190  adrp x0, #0x7672000
0x046C2924: 006043f9  ldr x0, [x0, #0x6c0]
0x046C2928: 3cf8aa97  bl #0x3180a18
0x046C292C: e07d0190  adrp x0, #0x767e000
0x046C2930: 00d847f9  ldr x0, [x0, #0xfb0]
0x046C2934: 39f8aa97  bl #0x3180a18
0x046C2938: e07d0190  adrp x0, #0x767e000
0x046C293C: 00dc47f9  ldr x0, [x0, #0xfb8]
0x046C2940: 36f8aa97  bl #0x3180a18
0x046C2944: e07d0190  adrp x0, #0x767e000
0x046C2948: 00e047f9  ldr x0, [x0, #0xfc0]
0x046C294C: 33f8aa97  bl #0x3180a18
0x046C2950: 28008052  movz w8, #0x1
0x046C2954: 886a2639  strb w8, [x20, #0x99a]
0x046C2958: 741e40f9  ldr x20, [x19, #0x38]
0x046C295C: 340d00b4  cbz x20, #0x46c2b00
0x046C2960: e97d0190  adrp x9, #0x767e000
0x046C2964: 29dd47f9  ldr x9, [x9, #0xfb8]
0x046C2968: 880240f9  ldr x8, [x20]
0x046C296C: 350140f9  ldr x21, [x9]
0x046C2970: 095d4279  ldrh w9, [x8, #0x12e]
0x046C2974: a11240f9  ldr x1, [x21, #0x20]
0x046C2978: a2a24079  ldrh w2, [x21, #0x50]
0x046C297C: 290100b4  cbz x9, #0x46c29a0
0x046C2980: 0a5940f9  ldr x10, [x8, #0xb0]
0x046C2984: 4a210091  add x10, x10, #8
0x046C2988: 4b815ff8  ldur x11, [x10, #-8]
0x046C298C: 7f0101eb  cmp x11, x1
0x046C2990: e0000054  b.eq #0x46c29ac
0x046C2994: 290500f1  subs x9, x9, #1
0x046C2998: 4a410091  add x10, x10, #0x10
0x046C299C: 61ffff54  b.ne #0x46c2988
0x046C29A0: e00314aa  mov x0, x20
0x046C29A4: 5b50aa97  bl #0x3156b10
0x046C29A8: 05000014  b #0x46c29bc
0x046C29AC: 490140b9  ldr w9, [x10]
0x046C29B0: 2901020b  add w9, w9, w2
0x046C29B4: 08d1298b  add x8, x8, w9, sxtw #4
0x046C29B8: 00e10491  add x0, x8, #0x138
0x046C29BC: 000440f9  ldr x0, [x0, #8]
0x046C29C0: e10315aa  mov x1, x21
0x046C29C4: 71f8aa97  bl #0x3180b88
0x046C29C8: 080440f9  ldr x8, [x0, #8]
0x046C29CC: e10300aa  mov x1, x0
0x046C29D0: e00314aa  mov x0, x20
0x046C29D4: 00013fd6  blr x8
0x046C29D8: 752240f9  ldr x21, [x19, #0x40]
0x046C29DC: 350900b4  cbz x21, #0x46c2b00
0x046C29E0: 8a7d0190  adrp x10, #0x7672000
0x046C29E4: a80240f9  ldr x8, [x21]
0x046C29E8: 4a6143f9  ldr x10, [x10, #0x6c0]
0x046C29EC: f40300aa  mov x20, x0
0x046C29F0: 095d4279  ldrh w9, [x8, #0x12e]
0x046C29F4: 410140f9  ldr x1, [x10]
0x046C29F8: 290100b4  cbz x9, #0x46c2a1c
0x046C29FC: 0a5940f9  ldr x10, [x8, #0xb0]
0x046C2A00: 4a210091  add x10, x10, #8
0x046C2A04: 4b815ff8  ldur x11, [x10, #-8]
0x046C2A08: 7f0101eb  cmp x11, x1
0x046C2A0C: 00010054  b.eq #0x46c2a2c
0x046C2A10: 290500f1  subs x9, x9, #1
0x046C2A14: 4a410091  add x10, x10, #0x10
0x046C2A18: 61ffff54  b.ne #0x46c2a04
0x046C2A1C: a2008052  movz w2, #0x5
0x046C2A20: e00315aa  mov x0, x21
0x046C2A24: 3b50aa97  bl #0x3156b10
0x046C2A28: 05000014  b #0x46c2a3c
0x046C2A2C: 490140b9  ldr w9, [x10]
0x046C2A30: 29150011  add w9, w9, #5
0x046C2A34: 08d1298b  add x8, x8, w9, sxtw #4
0x046C2A38: 00e10491  add x0, x8, #0x138
0x046C2A3C: 080440a9  ldp x8, x1, [x0]
0x046C2A40: e00315aa  mov x0, x21
0x046C2A44: 00013fd6  blr x8
0x046C2A48: c00500b4  cbz x0, #0x46c2b00
0x046C2A4C: 082040b9  ldr w8, [x0, #0x20]
0x046C2A50: 1f050071  cmp w8, #1
0x046C2A54: 81010054  b.ne #0x46c2a84
0x046C2A58: 540500b4  cbz x20, #0x46c2b00
0x046C2A5C: e00314aa  mov x0, x20
0x046C2A60: e1031faa  mov x1, xzr
0x046C2A64: d7fb7294  bl #0x63819c0
0x046C2A68: c00400b4  cbz x0, #0x46c2b00
0x046C2A6C: 001040f9  ldr x0, [x0, #0x20]
0x046C2A70: 800400b4  cbz x0, #0x46c2b00
0x046C2A74: e1031faa  mov x1, xzr
0x046C2A78: ffc07294  bl #0x6372e74
0x046C2A7C: f40300aa  mov x20, x0
0x046C2A80: 02000014  b #0x46c2a88
0x046C2A84: f4031faa  mov x20, xzr
0x046C2A88: 731a40f9  ldr x19, [x19, #0x30]
0x046C2A8C: b30300b4  cbz x19, #0x46c2b00
0x046C2A90: ea7d0190  adrp x10, #0x767e000
0x046C2A94: 680240f9  ldr x8, [x19]
0x046C2A98: 4ad947f9  ldr x10, [x10, #0xfb0]
0x046C2A9C: 095d4279  ldrh w9, [x8, #0x12e]
0x046C2AA0: 410140f9  ldr x1, [x10]
0x046C2AA4: 290100b4  cbz x9, #0x46c2ac8
0x046C2AA8: 0a5940f9  ldr x10, [x8, #0xb0]
0x046C2AAC: 4a210091  add x10, x10, #8
0x046C2AB0: 4b815ff8  ldur x11, [x10, #-8]
0x046C2AB4: 7f0101eb  cmp x11, x1
0x046C2AB8: 00010054  b.eq #0x46c2ad8
0x046C2ABC: 290500f1  subs x9, x9, #1
0x046C2AC0: 4a410091  add x10, x10, #0x10
0x046C2AC4: 61ffff54  b.ne #0x46c2ab0
0x046C2AC8: 42008052  movz w2, #0x2
0x046C2ACC: e00313aa  mov x0, x19
0x046C2AD0: 1050aa97  bl #0x3156b10
0x046C2AD4: 05000014  b #0x46c2ae8
0x046C2AD8: 490140b9  ldr w9, [x10]
0x046C2ADC: 29090011  add w9, w9, #2
0x046C2AE0: 08d1298b  add x8, x8, w9, sxtw #4
0x046C2AE4: 00e10491  add x0, x8, #0x138
0x046C2AE8: 030840a9  ldp x3, x2, [x0]
0x046C2AEC: e00313aa  mov x0, x19
0x046C2AF0: e10314aa  mov x1, x20
0x046C2AF4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x046C2AF8: fe57c2a8  ldp x30, x21, [sp], #0x20
0x046C2AFC: 60001fd6  br x3
0x046C2B00: 6bf8aa97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x46C28EC | Merger.Game.Command.UpdateBoardResourcesStateCommandBase<object>$$.ctor
; native signature: void Merger_Game_Command_UpdateBoardResourcesStateCommandBase_object____ctor (Merger_Game_Command_UpdateBoardResourcesStateCommandBase_T__o* __this, const MethodInfo_46C28EC* method);
; bytes=16 sha256=00384906134b9204efa241c48689d9e202ae429d86e5b50b1e74edcc00925ac3 status=arm64_complete_bound indexed_start=True
0x046C28EC: 281040f9  ldr x8, [x1, #0x20]
0x046C28F0: 086140f9  ldr x8, [x8, #0xc0]
0x046C28F4: 010540f9  ldr x1, [x8, #8]
0x046C28F8: 4c7f1714  b #0x4ca2628

; Generic instantiation from Il2CppDumper script.json | RVA 0x46C2B04 | Merger.Game.Command.UpdateBoardResourcesStateCommandBase<__Il2CppFullySharedGenericType>$$.ctor
; native signature: void Merger_Game_Command_UpdateBoardResourcesStateCommandBase___Il2CppFullySharedGenericType____ctor (Merger_Game_Command_UpdateBoardResourcesStateCommandBase_T__o* __this, const MethodInfo_46C2B04* method);
; bytes=20 sha256=eab5557b96d6e7833175d8db3868fbe91f806fcd781b1ddb649a1063959a3fda status=arm64_complete_bound indexed_start=True
0x046C2B04: 281040f9  ldr x8, [x1, #0x20]
0x046C2B08: 086140f9  ldr x8, [x8, #0xc0]
0x046C2B0C: 010540f9  ldr x1, [x8, #8]
0x046C2B10: 220040f9  ldr x2, [x1]
0x046C2B14: 40001fd6  br x2

