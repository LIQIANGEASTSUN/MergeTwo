; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 121 MergeEngine.Util.WeightedItemList<TItem>
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; Generic instantiation from Il2CppDumper script.json | RVA 0x49443D8 | MergeEngine.Util.WeightedItemList<int>$$get_PlainItems
; native signature: System_Collections_Generic_List_TItem__o* MergeEngine_Util_WeightedItemList_int___get_PlainItems (MergeEngine_Util_WeightedItemList_TItem__o* __this, const MethodInfo_49443D8* method);
; bytes=352 sha256=df25a2464b593f22b6292a067925b04aac6a06cf412d2de391c942e2e2f9a4b5 status=arm64_complete_bound indexed_start=True
0x049443D8: fe0f1df8  str x30, [sp, #-0x30]!
0x049443DC: f65701a9  stp x22, x21, [sp, #0x10]
0x049443E0: f44f02a9  stp x20, x19, [sp, #0x20]
0x049443E4: 291040f9  ldr x9, [x1, #0x20]
0x049443E8: e80300aa  mov x8, x0
0x049443EC: 140940f9  ldr x20, [x8, #0x10]
0x049443F0: f30301aa  mov x19, x1
0x049443F4: 296140f9  ldr x9, [x9, #0xc0]
0x049443F8: 201140f9  ldr x0, [x9, #0x20]
0x049443FC: 09d44439  ldrb w9, [x0, #0x135]
0x04944400: 49000037  tbnz w9, #0, #0x4944408
0x04944404: 0649a097  bl #0x315681c
0x04944408: 08e040b9  ldr w8, [x0, #0xe0]
0x0494440C: 48000035  cbnz w8, #0x4944414
0x04944410: dff1a097  bl #0x3180b8c
0x04944414: 681240f9  ldr x8, [x19, #0x20]
0x04944418: 086140f9  ldr x8, [x8, #0xc0]
0x0494441C: 001140f9  ldr x0, [x8, #0x20]
0x04944420: 08d44439  ldrb w8, [x0, #0x135]
0x04944424: 48000037  tbnz w8, #0, #0x494442c
0x04944428: fd48a097  bl #0x315681c
0x0494442C: 085c40f9  ldr x8, [x0, #0xb8]
0x04944430: 150540f9  ldr x21, [x8, #8]
0x04944434: 950600b5  cbnz x21, #0x4944504
0x04944438: 681240f9  ldr x8, [x19, #0x20]
0x0494443C: 086140f9  ldr x8, [x8, #0xc0]
0x04944440: 001140f9  ldr x0, [x8, #0x20]
0x04944444: 08d44439  ldrb w8, [x0, #0x135]
0x04944448: 48000037  tbnz w8, #0, #0x4944450
0x0494444C: f448a097  bl #0x315681c
0x04944450: 08e040b9  ldr w8, [x0, #0xe0]
0x04944454: 48000035  cbnz w8, #0x494445c
0x04944458: cdf1a097  bl #0x3180b8c
0x0494445C: 681240f9  ldr x8, [x19, #0x20]
0x04944460: 086140f9  ldr x8, [x8, #0xc0]
0x04944464: 001140f9  ldr x0, [x8, #0x20]
0x04944468: 09d44439  ldrb w9, [x0, #0x135]
0x0494446C: 89000037  tbnz w9, #0, #0x494447c
0x04944470: eb48a097  bl #0x315681c
0x04944474: 681240f9  ldr x8, [x19, #0x20]
0x04944478: 086140f9  ldr x8, [x8, #0xc0]
0x0494447C: 080d40f9  ldr x8, [x8, #0x18]
0x04944480: 095c40f9  ldr x9, [x0, #0xb8]
0x04944484: 0ad54439  ldrb w10, [x8, #0x135]
0x04944488: 360140f9  ldr x22, [x9]
0x0494448C: 8a000037  tbnz w10, #0, #0x494449c
0x04944490: e00308aa  mov x0, x8
0x04944494: e248a097  bl #0x315681c
0x04944498: e80300aa  mov x8, x0
0x0494449C: e00308aa  mov x0, x8
0x049444A0: 00f2a097  bl #0x3180ca0
0x049444A4: 681240f9  ldr x8, [x19, #0x20]
0x049444A8: e10316aa  mov x1, x22
0x049444AC: f50300aa  mov x21, x0
0x049444B0: 086140f9  ldr x8, [x8, #0xc0]
0x049444B4: 028d42a9  ldp x2, x3, [x8, #0x28]
0x049444B8: 6b482494  bl #0x5256664
0x049444BC: 681240f9  ldr x8, [x19, #0x20]
0x049444C0: 086140f9  ldr x8, [x8, #0xc0]
0x049444C4: 001140f9  ldr x0, [x8, #0x20]
0x049444C8: 09d44439  ldrb w9, [x0, #0x135]
0x049444CC: 89000037  tbnz w9, #0, #0x49444dc
0x049444D0: d348a097  bl #0x315681c
0x049444D4: 681240f9  ldr x8, [x19, #0x20]
0x049444D8: 086140f9  ldr x8, [x8, #0xc0]
0x049444DC: 095c40f9  ldr x9, [x0, #0xb8]
0x049444E0: 350500f9  str x21, [x9, #8]
0x049444E4: 001140f9  ldr x0, [x8, #0x20]
0x049444E8: 08d44439  ldrb w8, [x0, #0x135]
0x049444EC: 48000037  tbnz w8, #0, #0x49444f4
0x049444F0: cb48a097  bl #0x315681c
0x049444F4: 085c40f9  ldr x8, [x0, #0xb8]
0x049444F8: e10315aa  mov x1, x21
0x049444FC: 00210091  add x0, x8, #8
0x04944500: 31f1a097  bl #0x31809c4
0x04944504: 681240f9  ldr x8, [x19, #0x20]
0x04944508: e00314aa  mov x0, x20
0x0494450C: e10315aa  mov x1, x21
0x04944510: 086140f9  ldr x8, [x8, #0xc0]
0x04944514: 021d40f9  ldr x2, [x8, #0x38]
0x04944518: e52fcc97  bl #0x3c504ac
0x0494451C: 681240f9  ldr x8, [x19, #0x20]
0x04944520: f44f42a9  ldp x20, x19, [sp, #0x20]
0x04944524: f65741a9  ldp x22, x21, [sp, #0x10]
0x04944528: 086140f9  ldr x8, [x8, #0xc0]
0x0494452C: 012940f9  ldr x1, [x8, #0x50]
0x04944530: fe0743f8  ldr x30, [sp], #0x30
0x04944534: 2b6ecc17  b #0x3c5fde0

; Generic instantiation from Il2CppDumper script.json | RVA 0x49447BC | MergeEngine.Util.WeightedItemList<Int32Enum>$$get_PlainItems
; native signature: System_Collections_Generic_List_TItem__o* MergeEngine_Util_WeightedItemList_Int32Enum___get_PlainItems (MergeEngine_Util_WeightedItemList_TItem__o* __this, const MethodInfo_49447BC* method);
; bytes=352 sha256=afe823fceaadeda3b73f4bb353f1932a931fb536163f5a815deabc938e488397 status=arm64_complete_bound indexed_start=True
0x049447BC: fe0f1df8  str x30, [sp, #-0x30]!
0x049447C0: f65701a9  stp x22, x21, [sp, #0x10]
0x049447C4: f44f02a9  stp x20, x19, [sp, #0x20]
0x049447C8: 291040f9  ldr x9, [x1, #0x20]
0x049447CC: e80300aa  mov x8, x0
0x049447D0: 140940f9  ldr x20, [x8, #0x10]
0x049447D4: f30301aa  mov x19, x1
0x049447D8: 296140f9  ldr x9, [x9, #0xc0]
0x049447DC: 201140f9  ldr x0, [x9, #0x20]
0x049447E0: 09d44439  ldrb w9, [x0, #0x135]
0x049447E4: 49000037  tbnz w9, #0, #0x49447ec
0x049447E8: 0d48a097  bl #0x315681c
0x049447EC: 08e040b9  ldr w8, [x0, #0xe0]
0x049447F0: 48000035  cbnz w8, #0x49447f8
0x049447F4: e6f0a097  bl #0x3180b8c
0x049447F8: 681240f9  ldr x8, [x19, #0x20]
0x049447FC: 086140f9  ldr x8, [x8, #0xc0]
0x04944800: 001140f9  ldr x0, [x8, #0x20]
0x04944804: 08d44439  ldrb w8, [x0, #0x135]
0x04944808: 48000037  tbnz w8, #0, #0x4944810
0x0494480C: 0448a097  bl #0x315681c
0x04944810: 085c40f9  ldr x8, [x0, #0xb8]
0x04944814: 150540f9  ldr x21, [x8, #8]
0x04944818: 950600b5  cbnz x21, #0x49448e8
0x0494481C: 681240f9  ldr x8, [x19, #0x20]
0x04944820: 086140f9  ldr x8, [x8, #0xc0]
0x04944824: 001140f9  ldr x0, [x8, #0x20]
0x04944828: 08d44439  ldrb w8, [x0, #0x135]
0x0494482C: 48000037  tbnz w8, #0, #0x4944834
0x04944830: fb47a097  bl #0x315681c
0x04944834: 08e040b9  ldr w8, [x0, #0xe0]
0x04944838: 48000035  cbnz w8, #0x4944840
0x0494483C: d4f0a097  bl #0x3180b8c
0x04944840: 681240f9  ldr x8, [x19, #0x20]
0x04944844: 086140f9  ldr x8, [x8, #0xc0]
0x04944848: 001140f9  ldr x0, [x8, #0x20]
0x0494484C: 09d44439  ldrb w9, [x0, #0x135]
0x04944850: 89000037  tbnz w9, #0, #0x4944860
0x04944854: f247a097  bl #0x315681c
0x04944858: 681240f9  ldr x8, [x19, #0x20]
0x0494485C: 086140f9  ldr x8, [x8, #0xc0]
0x04944860: 080d40f9  ldr x8, [x8, #0x18]
0x04944864: 095c40f9  ldr x9, [x0, #0xb8]
0x04944868: 0ad54439  ldrb w10, [x8, #0x135]
0x0494486C: 360140f9  ldr x22, [x9]
0x04944870: 8a000037  tbnz w10, #0, #0x4944880
0x04944874: e00308aa  mov x0, x8
0x04944878: e947a097  bl #0x315681c
0x0494487C: e80300aa  mov x8, x0
0x04944880: e00308aa  mov x0, x8
0x04944884: 07f1a097  bl #0x3180ca0
0x04944888: 681240f9  ldr x8, [x19, #0x20]
0x0494488C: e10316aa  mov x1, x22
0x04944890: f50300aa  mov x21, x0
0x04944894: 086140f9  ldr x8, [x8, #0xc0]
0x04944898: 028d42a9  ldp x2, x3, [x8, #0x28]
0x0494489C: b9472494  bl #0x5256780
0x049448A0: 681240f9  ldr x8, [x19, #0x20]
0x049448A4: 086140f9  ldr x8, [x8, #0xc0]
0x049448A8: 001140f9  ldr x0, [x8, #0x20]
0x049448AC: 09d44439  ldrb w9, [x0, #0x135]
0x049448B0: 89000037  tbnz w9, #0, #0x49448c0
0x049448B4: da47a097  bl #0x315681c
0x049448B8: 681240f9  ldr x8, [x19, #0x20]
0x049448BC: 086140f9  ldr x8, [x8, #0xc0]
0x049448C0: 095c40f9  ldr x9, [x0, #0xb8]
0x049448C4: 350500f9  str x21, [x9, #8]
0x049448C8: 001140f9  ldr x0, [x8, #0x20]
0x049448CC: 08d44439  ldrb w8, [x0, #0x135]
0x049448D0: 48000037  tbnz w8, #0, #0x49448d8
0x049448D4: d247a097  bl #0x315681c
0x049448D8: 085c40f9  ldr x8, [x0, #0xb8]
0x049448DC: e10315aa  mov x1, x21
0x049448E0: 00210091  add x0, x8, #8
0x049448E4: 38f0a097  bl #0x31809c4
0x049448E8: 681240f9  ldr x8, [x19, #0x20]
0x049448EC: e00314aa  mov x0, x20
0x049448F0: e10315aa  mov x1, x21
0x049448F4: 086140f9  ldr x8, [x8, #0xc0]
0x049448F8: 021d40f9  ldr x2, [x8, #0x38]
0x049448FC: a92fcc97  bl #0x3c507a0
0x04944900: 681240f9  ldr x8, [x19, #0x20]
0x04944904: f44f42a9  ldp x20, x19, [sp, #0x20]
0x04944908: f65741a9  ldp x22, x21, [sp, #0x10]
0x0494490C: 086140f9  ldr x8, [x8, #0xc0]
0x04944910: 012940f9  ldr x1, [x8, #0x50]
0x04944914: fe0743f8  ldr x30, [sp], #0x30
0x04944918: 516dcc17  b #0x3c5fe5c

; Generic instantiation from Il2CppDumper script.json | RVA 0x4944BA0 | MergeEngine.Util.WeightedItemList<object>$$get_PlainItems
; native signature: System_Collections_Generic_List_TItem__o* MergeEngine_Util_WeightedItemList_object___get_PlainItems (MergeEngine_Util_WeightedItemList_TItem__o* __this, const MethodInfo_4944BA0* method);
; bytes=352 sha256=83d663cd9183e44d074a2c340090e3840b44952b071c2f6dcda7b7506fe8d497 status=arm64_complete_bound indexed_start=True
0x04944BA0: fe0f1df8  str x30, [sp, #-0x30]!
0x04944BA4: f65701a9  stp x22, x21, [sp, #0x10]
0x04944BA8: f44f02a9  stp x20, x19, [sp, #0x20]
0x04944BAC: 291040f9  ldr x9, [x1, #0x20]
0x04944BB0: e80300aa  mov x8, x0
0x04944BB4: 140940f9  ldr x20, [x8, #0x10]
0x04944BB8: f30301aa  mov x19, x1
0x04944BBC: 296140f9  ldr x9, [x9, #0xc0]
0x04944BC0: 201140f9  ldr x0, [x9, #0x20]
0x04944BC4: 09d44439  ldrb w9, [x0, #0x135]
0x04944BC8: 49000037  tbnz w9, #0, #0x4944bd0
0x04944BCC: 1447a097  bl #0x315681c
0x04944BD0: 08e040b9  ldr w8, [x0, #0xe0]
0x04944BD4: 48000035  cbnz w8, #0x4944bdc
0x04944BD8: edefa097  bl #0x3180b8c
0x04944BDC: 681240f9  ldr x8, [x19, #0x20]
0x04944BE0: 086140f9  ldr x8, [x8, #0xc0]
0x04944BE4: 001140f9  ldr x0, [x8, #0x20]
0x04944BE8: 08d44439  ldrb w8, [x0, #0x135]
0x04944BEC: 48000037  tbnz w8, #0, #0x4944bf4
0x04944BF0: 0b47a097  bl #0x315681c
0x04944BF4: 085c40f9  ldr x8, [x0, #0xb8]
0x04944BF8: 150540f9  ldr x21, [x8, #8]
0x04944BFC: 950600b5  cbnz x21, #0x4944ccc
0x04944C00: 681240f9  ldr x8, [x19, #0x20]
0x04944C04: 086140f9  ldr x8, [x8, #0xc0]
0x04944C08: 001140f9  ldr x0, [x8, #0x20]
0x04944C0C: 08d44439  ldrb w8, [x0, #0x135]
0x04944C10: 48000037  tbnz w8, #0, #0x4944c18
0x04944C14: 0247a097  bl #0x315681c
0x04944C18: 08e040b9  ldr w8, [x0, #0xe0]
0x04944C1C: 48000035  cbnz w8, #0x4944c24
0x04944C20: dbefa097  bl #0x3180b8c
0x04944C24: 681240f9  ldr x8, [x19, #0x20]
0x04944C28: 086140f9  ldr x8, [x8, #0xc0]
0x04944C2C: 001140f9  ldr x0, [x8, #0x20]
0x04944C30: 09d44439  ldrb w9, [x0, #0x135]
0x04944C34: 89000037  tbnz w9, #0, #0x4944c44
0x04944C38: f946a097  bl #0x315681c
0x04944C3C: 681240f9  ldr x8, [x19, #0x20]
0x04944C40: 086140f9  ldr x8, [x8, #0xc0]
0x04944C44: 080d40f9  ldr x8, [x8, #0x18]
0x04944C48: 095c40f9  ldr x9, [x0, #0xb8]
0x04944C4C: 0ad54439  ldrb w10, [x8, #0x135]
0x04944C50: 360140f9  ldr x22, [x9]
0x04944C54: 8a000037  tbnz w10, #0, #0x4944c64
0x04944C58: e00308aa  mov x0, x8
0x04944C5C: f046a097  bl #0x315681c
0x04944C60: e80300aa  mov x8, x0
0x04944C64: e00308aa  mov x0, x8
0x04944C68: 0ef0a097  bl #0x3180ca0
0x04944C6C: 681240f9  ldr x8, [x19, #0x20]
0x04944C70: e10316aa  mov x1, x22
0x04944C74: f50300aa  mov x21, x0
0x04944C78: 086140f9  ldr x8, [x8, #0xc0]
0x04944C7C: 028d42a9  ldp x2, x3, [x8, #0x28]
0x04944C80: 4e472494  bl #0x52569b8
0x04944C84: 681240f9  ldr x8, [x19, #0x20]
0x04944C88: 086140f9  ldr x8, [x8, #0xc0]
0x04944C8C: 001140f9  ldr x0, [x8, #0x20]
0x04944C90: 09d44439  ldrb w9, [x0, #0x135]
0x04944C94: 89000037  tbnz w9, #0, #0x4944ca4
0x04944C98: e146a097  bl #0x315681c
0x04944C9C: 681240f9  ldr x8, [x19, #0x20]
0x04944CA0: 086140f9  ldr x8, [x8, #0xc0]
0x04944CA4: 095c40f9  ldr x9, [x0, #0xb8]
0x04944CA8: 350500f9  str x21, [x9, #8]
0x04944CAC: 001140f9  ldr x0, [x8, #0x20]
0x04944CB0: 08d44439  ldrb w8, [x0, #0x135]
0x04944CB4: 48000037  tbnz w8, #0, #0x4944cbc
0x04944CB8: d946a097  bl #0x315681c
0x04944CBC: 085c40f9  ldr x8, [x0, #0xb8]
0x04944CC0: e10315aa  mov x1, x21
0x04944CC4: 00210091  add x0, x8, #8
0x04944CC8: 3fefa097  bl #0x31809c4
0x04944CCC: 681240f9  ldr x8, [x19, #0x20]
0x04944CD0: e00314aa  mov x0, x20
0x04944CD4: e10315aa  mov x1, x21
0x04944CD8: 086140f9  ldr x8, [x8, #0xc0]
0x04944CDC: 021d40f9  ldr x2, [x8, #0x38]
0x04944CE0: 6d2fcc97  bl #0x3c50a94
0x04944CE4: 681240f9  ldr x8, [x19, #0x20]
0x04944CE8: f44f42a9  ldp x20, x19, [sp, #0x20]
0x04944CEC: f65741a9  ldp x22, x21, [sp, #0x10]
0x04944CF0: 086140f9  ldr x8, [x8, #0xc0]
0x04944CF4: 012940f9  ldr x1, [x8, #0x50]
0x04944CF8: fe0743f8  ldr x30, [sp], #0x30
0x04944CFC: b56ccc17  b #0x3c5ffd0

; Generic instantiation from Il2CppDumper script.json | RVA 0x4944F84 | MergeEngine.Util.WeightedItemList<__Il2CppFullySharedGenericType>$$get_PlainItems
; native signature: System_Collections_Generic_List_TItem__o* MergeEngine_Util_WeightedItemList___Il2CppFullySharedGenericType___get_PlainItems (MergeEngine_Util_WeightedItemList_TItem__o* __this, const MethodInfo_4944F84* method);
; bytes=364 sha256=7d6b1acaf8c867dfefe798ef17eb24fdeaf9eec51879a3015aff662c8c44e697 status=arm64_complete_bound indexed_start=True
0x04944F84: fe0f1df8  str x30, [sp, #-0x30]!
0x04944F88: f65701a9  stp x22, x21, [sp, #0x10]
0x04944F8C: f44f02a9  stp x20, x19, [sp, #0x20]
0x04944F90: 291040f9  ldr x9, [x1, #0x20]
0x04944F94: e80300aa  mov x8, x0
0x04944F98: 140940f9  ldr x20, [x8, #0x10]
0x04944F9C: f30301aa  mov x19, x1
0x04944FA0: 296140f9  ldr x9, [x9, #0xc0]
0x04944FA4: 201140f9  ldr x0, [x9, #0x20]
0x04944FA8: 09d44439  ldrb w9, [x0, #0x135]
0x04944FAC: 49000037  tbnz w9, #0, #0x4944fb4
0x04944FB0: 1b46a097  bl #0x315681c
0x04944FB4: 08e040b9  ldr w8, [x0, #0xe0]
0x04944FB8: 48000035  cbnz w8, #0x4944fc0
0x04944FBC: f4eea097  bl #0x3180b8c
0x04944FC0: 681240f9  ldr x8, [x19, #0x20]
0x04944FC4: 086140f9  ldr x8, [x8, #0xc0]
0x04944FC8: 001140f9  ldr x0, [x8, #0x20]
0x04944FCC: 08d44439  ldrb w8, [x0, #0x135]
0x04944FD0: 48000037  tbnz w8, #0, #0x4944fd8
0x04944FD4: 1246a097  bl #0x315681c
0x04944FD8: 085c40f9  ldr x8, [x0, #0xb8]
0x04944FDC: 150540f9  ldr x21, [x8, #8]
0x04944FE0: b50600b5  cbnz x21, #0x49450b4
0x04944FE4: 681240f9  ldr x8, [x19, #0x20]
0x04944FE8: 086140f9  ldr x8, [x8, #0xc0]
0x04944FEC: 001140f9  ldr x0, [x8, #0x20]
0x04944FF0: 08d44439  ldrb w8, [x0, #0x135]
0x04944FF4: 48000037  tbnz w8, #0, #0x4944ffc
0x04944FF8: 0946a097  bl #0x315681c
0x04944FFC: 08e040b9  ldr w8, [x0, #0xe0]
0x04945000: 48000035  cbnz w8, #0x4945008
0x04945004: e2eea097  bl #0x3180b8c
0x04945008: 681240f9  ldr x8, [x19, #0x20]
0x0494500C: 086140f9  ldr x8, [x8, #0xc0]
0x04945010: 001140f9  ldr x0, [x8, #0x20]
0x04945014: 09d44439  ldrb w9, [x0, #0x135]
0x04945018: 89000037  tbnz w9, #0, #0x4945028
0x0494501C: 0046a097  bl #0x315681c
0x04945020: 681240f9  ldr x8, [x19, #0x20]
0x04945024: 086140f9  ldr x8, [x8, #0xc0]
0x04945028: 080d40f9  ldr x8, [x8, #0x18]
0x0494502C: 095c40f9  ldr x9, [x0, #0xb8]
0x04945030: 0ad54439  ldrb w10, [x8, #0x135]
0x04945034: 360140f9  ldr x22, [x9]
0x04945038: 8a000037  tbnz w10, #0, #0x4945048
0x0494503C: e00308aa  mov x0, x8
0x04945040: f745a097  bl #0x315681c
0x04945044: e80300aa  mov x8, x0
0x04945048: e00308aa  mov x0, x8
0x0494504C: 15efa097  bl #0x3180ca0
0x04945050: 681240f9  ldr x8, [x19, #0x20]
0x04945054: e10316aa  mov x1, x22
0x04945058: f50300aa  mov x21, x0
0x0494505C: 086140f9  ldr x8, [x8, #0xc0]
0x04945060: 028d42a9  ldp x2, x3, [x8, #0x28]
0x04945064: 680040f9  ldr x8, [x3]
0x04945068: 00013fd6  blr x8
0x0494506C: 681240f9  ldr x8, [x19, #0x20]
0x04945070: 086140f9  ldr x8, [x8, #0xc0]
0x04945074: 001140f9  ldr x0, [x8, #0x20]
0x04945078: 09d44439  ldrb w9, [x0, #0x135]
0x0494507C: 89000037  tbnz w9, #0, #0x494508c
0x04945080: e745a097  bl #0x315681c
0x04945084: 681240f9  ldr x8, [x19, #0x20]
0x04945088: 086140f9  ldr x8, [x8, #0xc0]
0x0494508C: 095c40f9  ldr x9, [x0, #0xb8]
0x04945090: 350500f9  str x21, [x9, #8]
0x04945094: 001140f9  ldr x0, [x8, #0x20]
0x04945098: 08d44439  ldrb w8, [x0, #0x135]
0x0494509C: 48000037  tbnz w8, #0, #0x49450a4
0x049450A0: df45a097  bl #0x315681c
0x049450A4: 085c40f9  ldr x8, [x0, #0xb8]
0x049450A8: e10315aa  mov x1, x21
0x049450AC: 00210091  add x0, x8, #8
0x049450B0: 45eea097  bl #0x31809c4
0x049450B4: 681240f9  ldr x8, [x19, #0x20]
0x049450B8: e00314aa  mov x0, x20
0x049450BC: e10315aa  mov x1, x21
0x049450C0: 086140f9  ldr x8, [x8, #0xc0]
0x049450C4: 021d40f9  ldr x2, [x8, #0x38]
0x049450C8: 480040f9  ldr x8, [x2]
0x049450CC: 00013fd6  blr x8
0x049450D0: 681240f9  ldr x8, [x19, #0x20]
0x049450D4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x049450D8: f65741a9  ldp x22, x21, [sp, #0x10]
0x049450DC: 086140f9  ldr x8, [x8, #0xc0]
0x049450E0: 012940f9  ldr x1, [x8, #0x50]
0x049450E4: 220040f9  ldr x2, [x1]
0x049450E8: fe0743f8  ldr x30, [sp], #0x30
0x049450EC: 40001fd6  br x2

; Generic instantiation from Il2CppDumper script.json | RVA 0x4944538 | MergeEngine.Util.WeightedItemList<int>$$get_Count
; native signature: int32_t MergeEngine_Util_WeightedItemList_int___get_Count (MergeEngine_Util_WeightedItemList_TItem__o* __this, const MethodInfo_4944538* method);
; bytes=28 sha256=7351b9e57e5bedfb14751df5e23437ec7713222be01f24979c423afdef756d41 status=arm64_complete_bound indexed_start=True
0x04944538: fe0f1ff8  str x30, [sp, #-0x10]!
0x0494453C: 080840f9  ldr x8, [x0, #0x10]
0x04944540: 880000b4  cbz x8, #0x4944550
0x04944544: 001940b9  ldr w0, [x8, #0x18]
0x04944548: fe0741f8  ldr x30, [sp], #0x10
0x0494454C: c0035fd6  ret
0x04944550: d7f1a097  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x494491C | MergeEngine.Util.WeightedItemList<Int32Enum>$$get_Count
; native signature: int32_t MergeEngine_Util_WeightedItemList_Int32Enum___get_Count (MergeEngine_Util_WeightedItemList_TItem__o* __this, const MethodInfo_494491C* method);
; bytes=28 sha256=2b890ec59253485d0441f5aa8c3c595548449574286e49a4b3bd54ccb11e25ab status=arm64_complete_bound indexed_start=True
0x0494491C: fe0f1ff8  str x30, [sp, #-0x10]!
0x04944920: 080840f9  ldr x8, [x0, #0x10]
0x04944924: 880000b4  cbz x8, #0x4944934
0x04944928: 001940b9  ldr w0, [x8, #0x18]
0x0494492C: fe0741f8  ldr x30, [sp], #0x10
0x04944930: c0035fd6  ret
0x04944934: def0a097  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4944D00 | MergeEngine.Util.WeightedItemList<object>$$get_Count
; native signature: int32_t MergeEngine_Util_WeightedItemList_object___get_Count (MergeEngine_Util_WeightedItemList_TItem__o* __this, const MethodInfo_4944D00* method);
; bytes=28 sha256=b27841568a90ecb323730e7f5623ee75b791aa93f89202c2f040f4ba67bc21a6 status=arm64_complete_bound indexed_start=True
0x04944D00: fe0f1ff8  str x30, [sp, #-0x10]!
0x04944D04: 080840f9  ldr x8, [x0, #0x10]
0x04944D08: 880000b4  cbz x8, #0x4944d18
0x04944D0C: 001940b9  ldr w0, [x8, #0x18]
0x04944D10: fe0741f8  ldr x30, [sp], #0x10
0x04944D14: c0035fd6  ret
0x04944D18: e5efa097  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x49450F0 | MergeEngine.Util.WeightedItemList<__Il2CppFullySharedGenericType>$$get_Count
; native signature: int32_t MergeEngine_Util_WeightedItemList___Il2CppFullySharedGenericType___get_Count (MergeEngine_Util_WeightedItemList_TItem__o* __this, const MethodInfo_49450F0* method);
; bytes=40 sha256=0d978da4e157a7f866e05450a54dc27cc55680d9b3be38e209006fdb6ea5f8d0 status=arm64_complete_bound indexed_start=True
0x049450F0: fe0f1ff8  str x30, [sp, #-0x10]!
0x049450F4: 000840f9  ldr x0, [x0, #0x10]
0x049450F8: e00000b4  cbz x0, #0x4945114
0x049450FC: 281040f9  ldr x8, [x1, #0x20]
0x04945100: 086140f9  ldr x8, [x8, #0xc0]
0x04945104: 013140f9  ldr x1, [x8, #0x60]
0x04945108: 220040f9  ldr x2, [x1]
0x0494510C: fe0741f8  ldr x30, [sp], #0x10
0x04945110: 40001fd6  br x2
0x04945114: e6eea097  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4944554 | MergeEngine.Util.WeightedItemList<int>$$AddItem
; native signature: void MergeEngine_Util_WeightedItemList_int___AddItem (MergeEngine_Util_WeightedItemList_TItem__o* __this, MergeEngine_Util_WeightedItem_TItem__o* item, const MethodInfo_4944554* method);
; bytes=128 sha256=5b9359f57e7dc6b62879df5566c687544ed31f1b759ce562b295359ea1c5d526 status=arm64_complete_bound indexed_start=True
0x04944554: fe0f1ff8  str x30, [sp, #-0x10]!
0x04944558: c10300b4  cbz x1, #0x49445d0
0x0494455C: 491040f9  ldr x9, [x2, #0x20]
0x04944560: e80300aa  mov x8, x0
0x04944564: 2a1840b9  ldr w10, [x1, #0x18]
0x04944568: 000840f9  ldr x0, [x0, #0x10]
0x0494456C: 296140f9  ldr x9, [x9, #0xc0]
0x04944570: 0a1900b9  str w10, [x8, #0x18]
0x04944574: e00200b4  cbz x0, #0x49445d0
0x04944578: 0a1c40b9  ldr w10, [x0, #0x1c]
0x0494457C: 080840f9  ldr x8, [x0, #0x10]
0x04944580: 293d40f9  ldr x9, [x9, #0x78]
0x04944584: 4a050011  add w10, w10, #1
0x04944588: 0a1c00b9  str w10, [x0, #0x1c]
0x0494458C: 280200b4  cbz x8, #0x49445d0
0x04944590: 0a1880b9  ldrsw x10, [x0, #0x18]
0x04944594: 0b1940b9  ldr w11, [x8, #0x18]
0x04944598: 5f010b6b  cmp w10, w11
0x0494459C: 02010054  b.hs #0x49445bc
0x049445A0: 49050011  add w9, w10, #1
0x049445A4: 080d0a8b  add x8, x8, x10, lsl #3
0x049445A8: 091800b9  str w9, [x0, #0x18]
0x049445AC: 010d02f8  str x1, [x8, #0x20]!
0x049445B0: e00308aa  mov x0, x8
0x049445B4: fe0741f8  ldr x30, [sp], #0x10
0x049445B8: 03f1a017  b #0x31809c4
0x049445BC: 281140f9  ldr x8, [x9, #0x20]
0x049445C0: 086140f9  ldr x8, [x8, #0xc0]
0x049445C4: 023940f9  ldr x2, [x8, #0x70]
0x049445C8: fe0741f8  ldr x30, [sp], #0x10
0x049445CC: a8ffdb17  b #0x404446c
0x049445D0: b7f1a097  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4944938 | MergeEngine.Util.WeightedItemList<Int32Enum>$$AddItem
; native signature: void MergeEngine_Util_WeightedItemList_Int32Enum___AddItem (MergeEngine_Util_WeightedItemList_TItem__o* __this, MergeEngine_Util_WeightedItem_TItem__o* item, const MethodInfo_4944938* method);
; bytes=128 sha256=f2ea100eca254c9b21431b3ebcf210072d2bdb5d13068583d7bb37b761757ef8 status=arm64_complete_bound indexed_start=True
0x04944938: fe0f1ff8  str x30, [sp, #-0x10]!
0x0494493C: c10300b4  cbz x1, #0x49449b4
0x04944940: 491040f9  ldr x9, [x2, #0x20]
0x04944944: e80300aa  mov x8, x0
0x04944948: 2a1840b9  ldr w10, [x1, #0x18]
0x0494494C: 000840f9  ldr x0, [x0, #0x10]
0x04944950: 296140f9  ldr x9, [x9, #0xc0]
0x04944954: 0a1900b9  str w10, [x8, #0x18]
0x04944958: e00200b4  cbz x0, #0x49449b4
0x0494495C: 0a1c40b9  ldr w10, [x0, #0x1c]
0x04944960: 080840f9  ldr x8, [x0, #0x10]
0x04944964: 293d40f9  ldr x9, [x9, #0x78]
0x04944968: 4a050011  add w10, w10, #1
0x0494496C: 0a1c00b9  str w10, [x0, #0x1c]
0x04944970: 280200b4  cbz x8, #0x49449b4
0x04944974: 0a1880b9  ldrsw x10, [x0, #0x18]
0x04944978: 0b1940b9  ldr w11, [x8, #0x18]
0x0494497C: 5f010b6b  cmp w10, w11
0x04944980: 02010054  b.hs #0x49449a0
0x04944984: 49050011  add w9, w10, #1
0x04944988: 080d0a8b  add x8, x8, x10, lsl #3
0x0494498C: 091800b9  str w9, [x0, #0x18]
0x04944990: 010d02f8  str x1, [x8, #0x20]!
0x04944994: e00308aa  mov x0, x8
0x04944998: fe0741f8  ldr x30, [sp], #0x10
0x0494499C: 0af0a017  b #0x31809c4
0x049449A0: 281140f9  ldr x8, [x9, #0x20]
0x049449A4: 086140f9  ldr x8, [x8, #0xc0]
0x049449A8: 023940f9  ldr x2, [x8, #0x70]
0x049449AC: fe0741f8  ldr x30, [sp], #0x10
0x049449B0: affedb17  b #0x404446c
0x049449B4: bef0a097  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4944D1C | MergeEngine.Util.WeightedItemList<object>$$AddItem
; native signature: void MergeEngine_Util_WeightedItemList_object___AddItem (MergeEngine_Util_WeightedItemList_TItem__o* __this, MergeEngine_Util_WeightedItem_TItem__o* item, const MethodInfo_4944D1C* method);
; bytes=128 sha256=922592ccbd43b386e9a42b1c88ac05256260dde80a615fce21cbd84c8e88f098 status=arm64_complete_bound indexed_start=True
0x04944D1C: fe0f1ff8  str x30, [sp, #-0x10]!
0x04944D20: c10300b4  cbz x1, #0x4944d98
0x04944D24: 491040f9  ldr x9, [x2, #0x20]
0x04944D28: e80300aa  mov x8, x0
0x04944D2C: 2a1c40b9  ldr w10, [x1, #0x1c]
0x04944D30: 000840f9  ldr x0, [x0, #0x10]
0x04944D34: 296140f9  ldr x9, [x9, #0xc0]
0x04944D38: 0a1900b9  str w10, [x8, #0x18]
0x04944D3C: e00200b4  cbz x0, #0x4944d98
0x04944D40: 0a1c40b9  ldr w10, [x0, #0x1c]
0x04944D44: 080840f9  ldr x8, [x0, #0x10]
0x04944D48: 293d40f9  ldr x9, [x9, #0x78]
0x04944D4C: 4a050011  add w10, w10, #1
0x04944D50: 0a1c00b9  str w10, [x0, #0x1c]
0x04944D54: 280200b4  cbz x8, #0x4944d98
0x04944D58: 0a1880b9  ldrsw x10, [x0, #0x18]
0x04944D5C: 0b1940b9  ldr w11, [x8, #0x18]
0x04944D60: 5f010b6b  cmp w10, w11
0x04944D64: 02010054  b.hs #0x4944d84
0x04944D68: 49050011  add w9, w10, #1
0x04944D6C: 080d0a8b  add x8, x8, x10, lsl #3
0x04944D70: 091800b9  str w9, [x0, #0x18]
0x04944D74: 010d02f8  str x1, [x8, #0x20]!
0x04944D78: e00308aa  mov x0, x8
0x04944D7C: fe0741f8  ldr x30, [sp], #0x10
0x04944D80: 11efa017  b #0x31809c4
0x04944D84: 281140f9  ldr x8, [x9, #0x20]
0x04944D88: 086140f9  ldr x8, [x8, #0xc0]
0x04944D8C: 023940f9  ldr x2, [x8, #0x70]
0x04944D90: fe0741f8  ldr x30, [sp], #0x10
0x04944D94: b6fddb17  b #0x404446c
0x04944D98: c5efa097  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4945118 | MergeEngine.Util.WeightedItemList<__Il2CppFullySharedGenericType>$$AddItem
; native signature: void MergeEngine_Util_WeightedItemList___Il2CppFullySharedGenericType___AddItem (MergeEngine_Util_WeightedItemList_TItem__o* __this, MergeEngine_Util_WeightedItem_TItem__o* item, const MethodInfo_4945118* method);
; bytes=120 sha256=400f1144866f946ed5eb32454f914eede0feda70491e3b311c4d1eec4f66e9e3 status=arm64_complete_bound indexed_start=True
0x04945118: ffc300d1  sub sp, sp, #0x30
0x0494511C: fe5701a9  stp x30, x21, [sp, #0x10]
0x04945120: f44f02a9  stp x20, x19, [sp, #0x20]
0x04945124: 410300b4  cbz x1, #0x494518c
0x04945128: 481040f9  ldr x8, [x2, #0x20]
0x0494512C: f30301aa  mov x19, x1
0x04945130: f50300aa  mov x21, x0
0x04945134: e00313aa  mov x0, x19
0x04945138: 086140f9  ldr x8, [x8, #0xc0]
0x0494513C: f40302aa  mov x20, x2
0x04945140: 013940f9  ldr x1, [x8, #0x70]
0x04945144: 280040f9  ldr x8, [x1]
0x04945148: 00013fd6  blr x8
0x0494514C: a20a40f9  ldr x2, [x21, #0x10]
0x04945150: a01a00b9  str w0, [x21, #0x18]
0x04945154: c20100b4  cbz x2, #0x494518c
0x04945158: 881240f9  ldr x8, [x20, #0x20]
0x0494515C: e3230091  add x3, sp, #8
0x04945160: e40313aa  mov x4, x19
0x04945164: 086140f9  ldr x8, [x8, #0xc0]
0x04945168: 013d40f9  ldr x1, [x8, #0x78]
0x0494516C: 200040f9  ldr x0, [x1]
0x04945170: f30700f9  str x19, [sp, #8]
0x04945174: 280840f9  ldr x8, [x1, #0x10]
0x04945178: 00013fd6  blr x8
0x0494517C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x04945180: fe5741a9  ldp x30, x21, [sp, #0x10]
0x04945184: ffc30091  add sp, sp, #0x30
0x04945188: c0035fd6  ret
0x0494518C: c8eea097  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x49445D4 | MergeEngine.Util.WeightedItemList<int>$$AddItems
; native signature: void MergeEngine_Util_WeightedItemList_int___AddItems (MergeEngine_Util_WeightedItemList_TItem__o* __this, System_Collections_Generic_IEnumerable_WeightedItem_TItem___o* items, const MethodInfo_49445D4* method);
; bytes=128 sha256=b71751c646e43807b1f828eacc35646ca5456a03231c36c4923f73b712a6677b status=arm64_complete_bound indexed_start=True
0x049445D4: fe0f1df8  str x30, [sp, #-0x30]!
0x049445D8: f65701a9  stp x22, x21, [sp, #0x10]
0x049445DC: f44f02a9  stp x20, x19, [sp, #0x20]
0x049445E0: 481040f9  ldr x8, [x2, #0x20]
0x049445E4: f40302aa  mov x20, x2
0x049445E8: f30301aa  mov x19, x1
0x049445EC: f50300aa  mov x21, x0
0x049445F0: 086140f9  ldr x8, [x8, #0xc0]
0x049445F4: 084540f9  ldr x8, [x8, #0x88]
0x049445F8: 09d54439  ldrb w9, [x8, #0x135]
0x049445FC: 89000037  tbnz w9, #0, #0x494460c
0x04944600: e00308aa  mov x0, x8
0x04944604: 8648a097  bl #0x315681c
0x04944608: e80300aa  mov x8, x0
0x0494460C: e00308aa  mov x0, x8
0x04944610: a4f1a097  bl #0x3180ca0
0x04944614: 881240f9  ldr x8, [x20, #0x20]
0x04944618: e10315aa  mov x1, x21
0x0494461C: f60300aa  mov x22, x0
0x04944620: 086140f9  ldr x8, [x8, #0xc0]
0x04944624: 024140f9  ldr x2, [x8, #0x80]
0x04944628: 034940f9  ldr x3, [x8, #0x90]
0x0494462C: ea762794  bl #0x53221d4
0x04944630: 881240f9  ldr x8, [x20, #0x20]
0x04944634: e00313aa  mov x0, x19
0x04944638: e10316aa  mov x1, x22
0x0494463C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x04944640: 086140f9  ldr x8, [x8, #0xc0]
0x04944644: f65741a9  ldp x22, x21, [sp, #0x10]
0x04944648: 024d40f9  ldr x2, [x8, #0x98]
0x0494464C: fe0743f8  ldr x30, [sp], #0x30
0x04944650: 822acf17  b #0x3d0f058

; Generic instantiation from Il2CppDumper script.json | RVA 0x49449B8 | MergeEngine.Util.WeightedItemList<Int32Enum>$$AddItems
; native signature: void MergeEngine_Util_WeightedItemList_Int32Enum___AddItems (MergeEngine_Util_WeightedItemList_TItem__o* __this, System_Collections_Generic_IEnumerable_WeightedItem_TItem___o* items, const MethodInfo_49449B8* method);
; bytes=128 sha256=59cacbe80cea5efe55762ffced3877c164cd2e332b99e48519de569d3539365f status=arm64_complete_bound indexed_start=True
0x049449B8: fe0f1df8  str x30, [sp, #-0x30]!
0x049449BC: f65701a9  stp x22, x21, [sp, #0x10]
0x049449C0: f44f02a9  stp x20, x19, [sp, #0x20]
0x049449C4: 481040f9  ldr x8, [x2, #0x20]
0x049449C8: f40302aa  mov x20, x2
0x049449CC: f30301aa  mov x19, x1
0x049449D0: f50300aa  mov x21, x0
0x049449D4: 086140f9  ldr x8, [x8, #0xc0]
0x049449D8: 084540f9  ldr x8, [x8, #0x88]
0x049449DC: 09d54439  ldrb w9, [x8, #0x135]
0x049449E0: 89000037  tbnz w9, #0, #0x49449f0
0x049449E4: e00308aa  mov x0, x8
0x049449E8: 8d47a097  bl #0x315681c
0x049449EC: e80300aa  mov x8, x0
0x049449F0: e00308aa  mov x0, x8
0x049449F4: abf0a097  bl #0x3180ca0
0x049449F8: 881240f9  ldr x8, [x20, #0x20]
0x049449FC: e10315aa  mov x1, x21
0x04944A00: f60300aa  mov x22, x0
0x04944A04: 086140f9  ldr x8, [x8, #0xc0]
0x04944A08: 024140f9  ldr x2, [x8, #0x80]
0x04944A0C: 034940f9  ldr x3, [x8, #0x90]
0x04944A10: f1752794  bl #0x53221d4
0x04944A14: 881240f9  ldr x8, [x20, #0x20]
0x04944A18: e00313aa  mov x0, x19
0x04944A1C: e10316aa  mov x1, x22
0x04944A20: f44f42a9  ldp x20, x19, [sp, #0x20]
0x04944A24: 086140f9  ldr x8, [x8, #0xc0]
0x04944A28: f65741a9  ldp x22, x21, [sp, #0x10]
0x04944A2C: 024d40f9  ldr x2, [x8, #0x98]
0x04944A30: fe0743f8  ldr x30, [sp], #0x30
0x04944A34: 8929cf17  b #0x3d0f058

; Generic instantiation from Il2CppDumper script.json | RVA 0x4944D9C | MergeEngine.Util.WeightedItemList<object>$$AddItems
; native signature: void MergeEngine_Util_WeightedItemList_object___AddItems (MergeEngine_Util_WeightedItemList_TItem__o* __this, System_Collections_Generic_IEnumerable_WeightedItem_TItem___o* items, const MethodInfo_4944D9C* method);
; bytes=128 sha256=f7f0b89f3f4607d327083ec100b1749072b484dccb8373af73c06de8ca801e2d status=arm64_complete_bound indexed_start=True
0x04944D9C: fe0f1df8  str x30, [sp, #-0x30]!
0x04944DA0: f65701a9  stp x22, x21, [sp, #0x10]
0x04944DA4: f44f02a9  stp x20, x19, [sp, #0x20]
0x04944DA8: 481040f9  ldr x8, [x2, #0x20]
0x04944DAC: f40302aa  mov x20, x2
0x04944DB0: f30301aa  mov x19, x1
0x04944DB4: f50300aa  mov x21, x0
0x04944DB8: 086140f9  ldr x8, [x8, #0xc0]
0x04944DBC: 084540f9  ldr x8, [x8, #0x88]
0x04944DC0: 09d54439  ldrb w9, [x8, #0x135]
0x04944DC4: 89000037  tbnz w9, #0, #0x4944dd4
0x04944DC8: e00308aa  mov x0, x8
0x04944DCC: 9446a097  bl #0x315681c
0x04944DD0: e80300aa  mov x8, x0
0x04944DD4: e00308aa  mov x0, x8
0x04944DD8: b2efa097  bl #0x3180ca0
0x04944DDC: 881240f9  ldr x8, [x20, #0x20]
0x04944DE0: e10315aa  mov x1, x21
0x04944DE4: f60300aa  mov x22, x0
0x04944DE8: 086140f9  ldr x8, [x8, #0xc0]
0x04944DEC: 024140f9  ldr x2, [x8, #0x80]
0x04944DF0: 034940f9  ldr x3, [x8, #0x90]
0x04944DF4: f8742794  bl #0x53221d4
0x04944DF8: 881240f9  ldr x8, [x20, #0x20]
0x04944DFC: e00313aa  mov x0, x19
0x04944E00: e10316aa  mov x1, x22
0x04944E04: f44f42a9  ldp x20, x19, [sp, #0x20]
0x04944E08: 086140f9  ldr x8, [x8, #0xc0]
0x04944E0C: f65741a9  ldp x22, x21, [sp, #0x10]
0x04944E10: 024d40f9  ldr x2, [x8, #0x98]
0x04944E14: fe0743f8  ldr x30, [sp], #0x30
0x04944E18: 9028cf17  b #0x3d0f058

; Generic instantiation from Il2CppDumper script.json | RVA 0x4945190 | MergeEngine.Util.WeightedItemList<__Il2CppFullySharedGenericType>$$AddItems
; native signature: void MergeEngine_Util_WeightedItemList___Il2CppFullySharedGenericType___AddItems (MergeEngine_Util_WeightedItemList_TItem__o* __this, System_Collections_Generic_IEnumerable_WeightedItem_TItem___o* items, const MethodInfo_4945190* method);
; bytes=136 sha256=e7fdeabb048f6815c70ccc280850fe28f5b72ebb897433b0c514d32425ff948e status=arm64_complete_bound indexed_start=True
0x04945190: fe0f1df8  str x30, [sp, #-0x30]!
0x04945194: f65701a9  stp x22, x21, [sp, #0x10]
0x04945198: f44f02a9  stp x20, x19, [sp, #0x20]
0x0494519C: 481040f9  ldr x8, [x2, #0x20]
0x049451A0: f40302aa  mov x20, x2
0x049451A4: f30301aa  mov x19, x1
0x049451A8: f50300aa  mov x21, x0
0x049451AC: 086140f9  ldr x8, [x8, #0xc0]
0x049451B0: 084540f9  ldr x8, [x8, #0x88]
0x049451B4: 09d54439  ldrb w9, [x8, #0x135]
0x049451B8: 89000037  tbnz w9, #0, #0x49451c8
0x049451BC: e00308aa  mov x0, x8
0x049451C0: 9745a097  bl #0x315681c
0x049451C4: e80300aa  mov x8, x0
0x049451C8: e00308aa  mov x0, x8
0x049451CC: b5eea097  bl #0x3180ca0
0x049451D0: 881240f9  ldr x8, [x20, #0x20]
0x049451D4: e10315aa  mov x1, x21
0x049451D8: f60300aa  mov x22, x0
0x049451DC: 086140f9  ldr x8, [x8, #0xc0]
0x049451E0: 034940f9  ldr x3, [x8, #0x90]
0x049451E4: 024140f9  ldr x2, [x8, #0x80]
0x049451E8: 690040f9  ldr x9, [x3]
0x049451EC: 20013fd6  blr x9
0x049451F0: 881240f9  ldr x8, [x20, #0x20]
0x049451F4: e00313aa  mov x0, x19
0x049451F8: e10316aa  mov x1, x22
0x049451FC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x04945200: 086140f9  ldr x8, [x8, #0xc0]
0x04945204: f65741a9  ldp x22, x21, [sp, #0x10]
0x04945208: 024d40f9  ldr x2, [x8, #0x98]
0x0494520C: 430040f9  ldr x3, [x2]
0x04945210: fe0743f8  ldr x30, [sp], #0x30
0x04945214: 60001fd6  br x3

; Generic instantiation from Il2CppDumper script.json | RVA 0x4944654 | MergeEngine.Util.WeightedItemList<int>$$GetItem
; native signature: int32_t MergeEngine_Util_WeightedItemList_int___GetItem (MergeEngine_Util_WeightedItemList_TItem__o* __this, System_Random_o* random, const MethodInfo_4944654* method);
; bytes=232 sha256=18ead3c0bc2519bb519b8e7b6a9ee4d0bbbecb3f5dd0798c6dd564e696a92c3a status=arm64_complete_bound indexed_start=True
0x04944654: fe0f1df8  str x30, [sp, #-0x30]!
0x04944658: f65701a9  stp x22, x21, [sp, #0x10]
0x0494465C: f44f02a9  stp x20, x19, [sp, #0x20]
0x04944660: 481040f9  ldr x8, [x2, #0x20]
0x04944664: f30302aa  mov x19, x2
0x04944668: f60301aa  mov x22, x1
0x0494466C: f50300aa  mov x21, x0
0x04944670: 086140f9  ldr x8, [x8, #0xc0]
0x04944674: 085140f9  ldr x8, [x8, #0xa0]
0x04944678: 09d54439  ldrb w9, [x8, #0x135]
0x0494467C: 89000037  tbnz w9, #0, #0x494468c
0x04944680: e00308aa  mov x0, x8
0x04944684: 6648a097  bl #0x315681c
0x04944688: e80300aa  mov x8, x0
0x0494468C: e00308aa  mov x0, x8
0x04944690: 84f1a097  bl #0x3180ca0
0x04944694: 681240f9  ldr x8, [x19, #0x20]
0x04944698: f40300aa  mov x20, x0
0x0494469C: 086140f9  ldr x8, [x8, #0xc0]
0x049446A0: 015540f9  ldr x1, [x8, #0xa8]
0x049446A4: 825c0794  bl #0x4b1b8ac
0x049446A8: 960400b4  cbz x22, #0x4944738
0x049446AC: c80240f9  ldr x8, [x22]
0x049446B0: a11a40b9  ldr w1, [x21, #0x18]
0x049446B4: e00316aa  mov x0, x22
0x049446B8: 09895aa9  ldp x9, x2, [x8, #0x1a8]
0x049446BC: 20013fd6  blr x9
0x049446C0: d40300b4  cbz x20, #0x4944738
0x049446C4: 08040011  add w8, w0, #1
0x049446C8: 881200b9  str w8, [x20, #0x10]
0x049446CC: 681240f9  ldr x8, [x19, #0x20]
0x049446D0: b50a40f9  ldr x21, [x21, #0x10]
0x049446D4: 086140f9  ldr x8, [x8, #0xc0]
0x049446D8: 005d40f9  ldr x0, [x8, #0xb8]
0x049446DC: 08d44439  ldrb w8, [x0, #0x135]
0x049446E0: 48000037  tbnz w8, #0, #0x49446e8
0x049446E4: 4e48a097  bl #0x315681c
0x049446E8: 6ef1a097  bl #0x3180ca0
0x049446EC: 681240f9  ldr x8, [x19, #0x20]
0x049446F0: e10314aa  mov x1, x20
0x049446F4: f60300aa  mov x22, x0
0x049446F8: 086140f9  ldr x8, [x8, #0xc0]
0x049446FC: 025940f9  ldr x2, [x8, #0xb0]
0x04944700: 036140f9  ldr x3, [x8, #0xc0]
0x04944704: 2e462494  bl #0x5255fbc
0x04944708: 681240f9  ldr x8, [x19, #0x20]
0x0494470C: e00315aa  mov x0, x21
0x04944710: e10316aa  mov x1, x22
0x04944714: 086140f9  ldr x8, [x8, #0xc0]
0x04944718: 026540f9  ldr x2, [x8, #0xc8]
0x0494471C: 8cf8cb97  bl #0x3c4294c
0x04944720: c00000b4  cbz x0, #0x4944738
0x04944724: 001040b9  ldr w0, [x0, #0x10]
0x04944728: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0494472C: f65741a9  ldp x22, x21, [sp, #0x10]
0x04944730: fe0743f8  ldr x30, [sp], #0x30
0x04944734: c0035fd6  ret
0x04944738: 5df1a097  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4944A38 | MergeEngine.Util.WeightedItemList<Int32Enum>$$GetItem
; native signature: int32_t MergeEngine_Util_WeightedItemList_Int32Enum___GetItem (MergeEngine_Util_WeightedItemList_TItem__o* __this, System_Random_o* random, const MethodInfo_4944A38* method);
; bytes=232 sha256=874300ac62dbf801a0cd111039bd0d72d21ecaf9b87fb8d54ea9293b452e0589 status=arm64_complete_bound indexed_start=True
0x04944A38: fe0f1df8  str x30, [sp, #-0x30]!
0x04944A3C: f65701a9  stp x22, x21, [sp, #0x10]
0x04944A40: f44f02a9  stp x20, x19, [sp, #0x20]
0x04944A44: 481040f9  ldr x8, [x2, #0x20]
0x04944A48: f30302aa  mov x19, x2
0x04944A4C: f60301aa  mov x22, x1
0x04944A50: f50300aa  mov x21, x0
0x04944A54: 086140f9  ldr x8, [x8, #0xc0]
0x04944A58: 085140f9  ldr x8, [x8, #0xa0]
0x04944A5C: 09d54439  ldrb w9, [x8, #0x135]
0x04944A60: 89000037  tbnz w9, #0, #0x4944a70
0x04944A64: e00308aa  mov x0, x8
0x04944A68: 6d47a097  bl #0x315681c
0x04944A6C: e80300aa  mov x8, x0
0x04944A70: e00308aa  mov x0, x8
0x04944A74: 8bf0a097  bl #0x3180ca0
0x04944A78: 681240f9  ldr x8, [x19, #0x20]
0x04944A7C: f40300aa  mov x20, x0
0x04944A80: 086140f9  ldr x8, [x8, #0xc0]
0x04944A84: 015540f9  ldr x1, [x8, #0xa8]
0x04944A88: 945b0794  bl #0x4b1b8d8
0x04944A8C: 960400b4  cbz x22, #0x4944b1c
0x04944A90: c80240f9  ldr x8, [x22]
0x04944A94: a11a40b9  ldr w1, [x21, #0x18]
0x04944A98: e00316aa  mov x0, x22
0x04944A9C: 09895aa9  ldp x9, x2, [x8, #0x1a8]
0x04944AA0: 20013fd6  blr x9
0x04944AA4: d40300b4  cbz x20, #0x4944b1c
0x04944AA8: 08040011  add w8, w0, #1
0x04944AAC: 881200b9  str w8, [x20, #0x10]
0x04944AB0: 681240f9  ldr x8, [x19, #0x20]
0x04944AB4: b50a40f9  ldr x21, [x21, #0x10]
0x04944AB8: 086140f9  ldr x8, [x8, #0xc0]
0x04944ABC: 005d40f9  ldr x0, [x8, #0xb8]
0x04944AC0: 08d44439  ldrb w8, [x0, #0x135]
0x04944AC4: 48000037  tbnz w8, #0, #0x4944acc
0x04944AC8: 5547a097  bl #0x315681c
0x04944ACC: 75f0a097  bl #0x3180ca0
0x04944AD0: 681240f9  ldr x8, [x19, #0x20]
0x04944AD4: e10314aa  mov x1, x20
0x04944AD8: f60300aa  mov x22, x0
0x04944ADC: 086140f9  ldr x8, [x8, #0xc0]
0x04944AE0: 025940f9  ldr x2, [x8, #0xb0]
0x04944AE4: 036140f9  ldr x3, [x8, #0xc0]
0x04944AE8: 35452494  bl #0x5255fbc
0x04944AEC: 681240f9  ldr x8, [x19, #0x20]
0x04944AF0: e00315aa  mov x0, x21
0x04944AF4: e10316aa  mov x1, x22
0x04944AF8: 086140f9  ldr x8, [x8, #0xc0]
0x04944AFC: 026540f9  ldr x2, [x8, #0xc8]
0x04944B00: 93f7cb97  bl #0x3c4294c
0x04944B04: c00000b4  cbz x0, #0x4944b1c
0x04944B08: 001040b9  ldr w0, [x0, #0x10]
0x04944B0C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x04944B10: f65741a9  ldp x22, x21, [sp, #0x10]
0x04944B14: fe0743f8  ldr x30, [sp], #0x30
0x04944B18: c0035fd6  ret
0x04944B1C: 64f0a097  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4944E1C | MergeEngine.Util.WeightedItemList<object>$$GetItem
; native signature: Il2CppObject* MergeEngine_Util_WeightedItemList_object___GetItem (MergeEngine_Util_WeightedItemList_TItem__o* __this, System_Random_o* random, const MethodInfo_4944E1C* method);
; bytes=232 sha256=6f0a6ebe0621b3aec6835903030ee331a9460e1ea8da10396cf9e13d772c75d7 status=arm64_complete_bound indexed_start=True
0x04944E1C: fe0f1df8  str x30, [sp, #-0x30]!
0x04944E20: f65701a9  stp x22, x21, [sp, #0x10]
0x04944E24: f44f02a9  stp x20, x19, [sp, #0x20]
0x04944E28: 481040f9  ldr x8, [x2, #0x20]
0x04944E2C: f30302aa  mov x19, x2
0x04944E30: f60301aa  mov x22, x1
0x04944E34: f50300aa  mov x21, x0
0x04944E38: 086140f9  ldr x8, [x8, #0xc0]
0x04944E3C: 085140f9  ldr x8, [x8, #0xa0]
0x04944E40: 09d54439  ldrb w9, [x8, #0x135]
0x04944E44: 89000037  tbnz w9, #0, #0x4944e54
0x04944E48: e00308aa  mov x0, x8
0x04944E4C: 7446a097  bl #0x315681c
0x04944E50: e80300aa  mov x8, x0
0x04944E54: e00308aa  mov x0, x8
0x04944E58: 92efa097  bl #0x3180ca0
0x04944E5C: 681240f9  ldr x8, [x19, #0x20]
0x04944E60: f40300aa  mov x20, x0
0x04944E64: 086140f9  ldr x8, [x8, #0xc0]
0x04944E68: 015540f9  ldr x1, [x8, #0xa8]
0x04944E6C: 4d5c0794  bl #0x4b1bfa0
0x04944E70: 960400b4  cbz x22, #0x4944f00
0x04944E74: c80240f9  ldr x8, [x22]
0x04944E78: a11a40b9  ldr w1, [x21, #0x18]
0x04944E7C: e00316aa  mov x0, x22
0x04944E80: 09895aa9  ldp x9, x2, [x8, #0x1a8]
0x04944E84: 20013fd6  blr x9
0x04944E88: d40300b4  cbz x20, #0x4944f00
0x04944E8C: 08040011  add w8, w0, #1
0x04944E90: 881200b9  str w8, [x20, #0x10]
0x04944E94: 681240f9  ldr x8, [x19, #0x20]
0x04944E98: b50a40f9  ldr x21, [x21, #0x10]
0x04944E9C: 086140f9  ldr x8, [x8, #0xc0]
0x04944EA0: 005d40f9  ldr x0, [x8, #0xb8]
0x04944EA4: 08d44439  ldrb w8, [x0, #0x135]
0x04944EA8: 48000037  tbnz w8, #0, #0x4944eb0
0x04944EAC: 5c46a097  bl #0x315681c
0x04944EB0: 7cefa097  bl #0x3180ca0
0x04944EB4: 681240f9  ldr x8, [x19, #0x20]
0x04944EB8: e10314aa  mov x1, x20
0x04944EBC: f60300aa  mov x22, x0
0x04944EC0: 086140f9  ldr x8, [x8, #0xc0]
0x04944EC4: 025940f9  ldr x2, [x8, #0xb0]
0x04944EC8: 036140f9  ldr x3, [x8, #0xc0]
0x04944ECC: 3c442494  bl #0x5255fbc
0x04944ED0: 681240f9  ldr x8, [x19, #0x20]
0x04944ED4: e00315aa  mov x0, x21
0x04944ED8: e10316aa  mov x1, x22
0x04944EDC: 086140f9  ldr x8, [x8, #0xc0]
0x04944EE0: 026540f9  ldr x2, [x8, #0xc8]
0x04944EE4: 9af6cb97  bl #0x3c4294c
0x04944EE8: c00000b4  cbz x0, #0x4944f00
0x04944EEC: 000840f9  ldr x0, [x0, #0x10]
0x04944EF0: f44f42a9  ldp x20, x19, [sp, #0x20]
0x04944EF4: f65741a9  ldp x22, x21, [sp, #0x10]
0x04944EF8: fe0743f8  ldr x30, [sp], #0x30
0x04944EFC: c0035fd6  ret
0x04944F00: 6befa097  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4945218 | MergeEngine.Util.WeightedItemList<__Il2CppFullySharedGenericType>$$GetItem
; native signature: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o MergeEngine_Util_WeightedItemList___Il2CppFullySharedGenericType___GetItem (MergeEngine_Util_WeightedItemList_TItem__o* __this, System_Random_o* random, const MethodInfo_4945218* method);
; bytes=388 sha256=80c16d3a03b3e9329c1477f3ae27d2a3b9bd897eb748fd9f295ce252b0c03782 status=arm64_complete_bound indexed_start=True
0x04945218: fd7bbba9  stp x29, x30, [sp, #-0x50]!
0x0494521C: fa6701a9  stp x26, x25, [sp, #0x10]
0x04945220: f85f02a9  stp x24, x23, [sp, #0x20]
0x04945224: f65703a9  stp x22, x21, [sp, #0x30]
0x04945228: f44f04a9  stp x20, x19, [sp, #0x40]
0x0494522C: fd030091  mov x29, sp
0x04945230: ff8300d1  sub sp, sp, #0x20
0x04945234: 5ad03bd5  mrs x26, tpidr_el0
0x04945238: 481740f9  ldr x8, [x26, #0x28]
0x0494523C: f60303aa  mov x22, x3
0x04945240: f30302aa  mov x19, x2
0x04945244: f90301aa  mov x25, x1
0x04945248: a8831ff8  stur x8, [x29, #-8]
0x0494524C: 681040f9  ldr x8, [x3, #0x20]
0x04945250: f70300aa  mov x23, x0
0x04945254: 086140f9  ldr x8, [x8, #0xc0]
0x04945258: 096d40f9  ldr x9, [x8, #0xd8]
0x0494525C: 34fd40b9  ldr w20, [x9, #0xfc]
0x04945260: e9030091  mov x9, sp
0x04945264: 8a3e0091  add x10, x20, #0xf
0x04945268: 4a717c92  and x10, x10, #0x1fffffff0
0x0494526C: 35010acb  sub x21, x9, x10
0x04945270: bf020091  mov sp, x21
0x04945274: 005140f9  ldr x0, [x8, #0xa0]
0x04945278: 08d44439  ldrb w8, [x0, #0x135]
0x0494527C: 48000037  tbnz w8, #0, #0x4945284
0x04945280: 6745a097  bl #0x315681c
0x04945284: 87eea097  bl #0x3180ca0
0x04945288: c81240f9  ldr x8, [x22, #0x20]
0x0494528C: f80300aa  mov x24, x0
0x04945290: 086140f9  ldr x8, [x8, #0xc0]
0x04945294: 015540f9  ldr x1, [x8, #0xa8]
0x04945298: 280040f9  ldr x8, [x1]
0x0494529C: 00013fd6  blr x8
0x049452A0: b90700b4  cbz x25, #0x4945394
0x049452A4: 280340f9  ldr x8, [x25]
0x049452A8: e11a40b9  ldr w1, [x23, #0x18]
0x049452AC: e00319aa  mov x0, x25
0x049452B0: 09895aa9  ldp x9, x2, [x8, #0x1a8]
0x049452B4: 20013fd6  blr x9
0x049452B8: f80600b4  cbz x24, #0x4945394
0x049452BC: 08040011  add w8, w0, #1
0x049452C0: 081300b9  str w8, [x24, #0x10]
0x049452C4: c81240f9  ldr x8, [x22, #0x20]
0x049452C8: f90a40f9  ldr x25, [x23, #0x10]
0x049452CC: 086140f9  ldr x8, [x8, #0xc0]
0x049452D0: 005d40f9  ldr x0, [x8, #0xb8]
0x049452D4: 08d44439  ldrb w8, [x0, #0x135]
0x049452D8: 48000037  tbnz w8, #0, #0x49452e0
0x049452DC: 5045a097  bl #0x315681c
0x049452E0: 70eea097  bl #0x3180ca0
0x049452E4: c81240f9  ldr x8, [x22, #0x20]
0x049452E8: e10318aa  mov x1, x24
0x049452EC: f70300aa  mov x23, x0
0x049452F0: 086140f9  ldr x8, [x8, #0xc0]
0x049452F4: 036140f9  ldr x3, [x8, #0xc0]
0x049452F8: 025940f9  ldr x2, [x8, #0xb0]
0x049452FC: 690040f9  ldr x9, [x3]
0x04945300: 20013fd6  blr x9
0x04945304: c81240f9  ldr x8, [x22, #0x20]
0x04945308: a38300d1  sub x3, x29, #0x20
0x0494530C: a44300d1  sub x4, x29, #0x10
0x04945310: e2031faa  mov x2, xzr
0x04945314: 086140f9  ldr x8, [x8, #0xc0]
0x04945318: 016540f9  ldr x1, [x8, #0xc8]
0x0494531C: 200040f9  ldr x0, [x1]
0x04945320: b95f3ea9  stp x25, x23, [x29, #-0x20]
0x04945324: 280840f9  ldr x8, [x1, #0x10]
0x04945328: 00013fd6  blr x8
0x0494532C: a2035ff8  ldur x2, [x29, #-0x10]
0x04945330: 220300b4  cbz x2, #0x4945394
0x04945334: c81240f9  ldr x8, [x22, #0x20]
0x04945338: a38300d1  sub x3, x29, #0x20
0x0494533C: e40315aa  mov x4, x21
0x04945340: 086140f9  ldr x8, [x8, #0xc0]
0x04945344: 016940f9  ldr x1, [x8, #0xd0]
0x04945348: 200040f9  ldr x0, [x1]
0x0494534C: b5031ef8  stur x21, [x29, #-0x20]
0x04945350: 280840f9  ldr x8, [x1, #0x10]
0x04945354: 00013fd6  blr x8
0x04945358: e00313aa  mov x0, x19
0x0494535C: e10315aa  mov x1, x21
0x04945360: e20314aa  mov x2, x20
0x04945364: 8325a294  bl #0x71ce970
0x04945368: 481740f9  ldr x8, [x26, #0x28]
0x0494536C: a9835ff8  ldur x9, [x29, #-8]
0x04945370: 1f0109eb  cmp x8, x9
0x04945374: 21010054  b.ne #0x4945398
0x04945378: bf030091  mov sp, x29
0x0494537C: f44f44a9  ldp x20, x19, [sp, #0x40]
0x04945380: f65743a9  ldp x22, x21, [sp, #0x30]
0x04945384: f85f42a9  ldp x24, x23, [sp, #0x20]
0x04945388: fa6741a9  ldp x26, x25, [sp, #0x10]
0x0494538C: fd7bc5a8  ldp x29, x30, [sp], #0x50
0x04945390: c0035fd6  ret
0x04945394: 46eea097  bl #0x3180cac
0x04945398: 7e25a294  bl #0x71ce990

; Generic instantiation from Il2CppDumper script.json | RVA 0x494473C | MergeEngine.Util.WeightedItemList<int>$$.ctor
; native signature: void MergeEngine_Util_WeightedItemList_int____ctor (MergeEngine_Util_WeightedItemList_TItem__o* __this, const MethodInfo_494473C* method);
; bytes=112 sha256=60f6d272528a7b5beeba6c78f7728b0fb52517dfc1fb676084510a9de000159f status=arm64_complete_bound indexed_start=True
0x0494473C: fe0f1ef8  str x30, [sp, #-0x20]!
0x04944740: f44f01a9  stp x20, x19, [sp, #0x10]
0x04944744: 281040f9  ldr x8, [x1, #0x20]
0x04944748: f40301aa  mov x20, x1
0x0494474C: f30300aa  mov x19, x0
0x04944750: 086140f9  ldr x8, [x8, #0xc0]
0x04944754: 080540f9  ldr x8, [x8, #8]
0x04944758: 09d54439  ldrb w9, [x8, #0x135]
0x0494475C: 89000037  tbnz w9, #0, #0x494476c
0x04944760: e00308aa  mov x0, x8
0x04944764: 2e48a097  bl #0x315681c
0x04944768: e80300aa  mov x8, x0
0x0494476C: e00308aa  mov x0, x8
0x04944770: 4cf1a097  bl #0x3180ca0
0x04944774: 881240f9  ldr x8, [x20, #0x20]
0x04944778: f40300aa  mov x20, x0
0x0494477C: 086140f9  ldr x8, [x8, #0xc0]
0x04944780: 017140f9  ldr x1, [x8, #0xe0]
0x04944784: 2dfddb97  bl #0x4043c38
0x04944788: e00313aa  mov x0, x19
0x0494478C: 140c01f8  str x20, [x0, #0x10]!
0x04944790: e10314aa  mov x1, x20
0x04944794: 8cf0a097  bl #0x31809c4
0x04944798: e00313aa  mov x0, x19
0x0494479C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x049447A0: e1031faa  mov x1, xzr
0x049447A4: fe0742f8  ldr x30, [sp], #0x20
0x049447A8: 95573614  b #0x56da5fc

; Generic instantiation from Il2CppDumper script.json | RVA 0x4944B20 | MergeEngine.Util.WeightedItemList<Int32Enum>$$.ctor
; native signature: void MergeEngine_Util_WeightedItemList_Int32Enum____ctor (MergeEngine_Util_WeightedItemList_TItem__o* __this, const MethodInfo_4944B20* method);
; bytes=112 sha256=7fd56dc7b72f2df9fde2653d0cd4cdfc3b502e974efceb006c74251a980ad997 status=arm64_complete_bound indexed_start=True
0x04944B20: fe0f1ef8  str x30, [sp, #-0x20]!
0x04944B24: f44f01a9  stp x20, x19, [sp, #0x10]
0x04944B28: 281040f9  ldr x8, [x1, #0x20]
0x04944B2C: f40301aa  mov x20, x1
0x04944B30: f30300aa  mov x19, x0
0x04944B34: 086140f9  ldr x8, [x8, #0xc0]
0x04944B38: 080540f9  ldr x8, [x8, #8]
0x04944B3C: 09d54439  ldrb w9, [x8, #0x135]
0x04944B40: 89000037  tbnz w9, #0, #0x4944b50
0x04944B44: e00308aa  mov x0, x8
0x04944B48: 3547a097  bl #0x315681c
0x04944B4C: e80300aa  mov x8, x0
0x04944B50: e00308aa  mov x0, x8
0x04944B54: 53f0a097  bl #0x3180ca0
0x04944B58: 881240f9  ldr x8, [x20, #0x20]
0x04944B5C: f40300aa  mov x20, x0
0x04944B60: 086140f9  ldr x8, [x8, #0xc0]
0x04944B64: 017140f9  ldr x1, [x8, #0xe0]
0x04944B68: 34fcdb97  bl #0x4043c38
0x04944B6C: e00313aa  mov x0, x19
0x04944B70: 140c01f8  str x20, [x0, #0x10]!
0x04944B74: e10314aa  mov x1, x20
0x04944B78: 93efa097  bl #0x31809c4
0x04944B7C: e00313aa  mov x0, x19
0x04944B80: f44f41a9  ldp x20, x19, [sp, #0x10]
0x04944B84: e1031faa  mov x1, xzr
0x04944B88: fe0742f8  ldr x30, [sp], #0x20
0x04944B8C: 9c563614  b #0x56da5fc

; Generic instantiation from Il2CppDumper script.json | RVA 0x4944F04 | MergeEngine.Util.WeightedItemList<object>$$.ctor
; native signature: void MergeEngine_Util_WeightedItemList_object____ctor (MergeEngine_Util_WeightedItemList_TItem__o* __this, const MethodInfo_4944F04* method);
; bytes=112 sha256=61af62616d223413f34bc5282ce08c83cb0ac1dc46cb1ec85bfadb65c9101896 status=arm64_complete_bound indexed_start=True
0x04944F04: fe0f1ef8  str x30, [sp, #-0x20]!
0x04944F08: f44f01a9  stp x20, x19, [sp, #0x10]
0x04944F0C: 281040f9  ldr x8, [x1, #0x20]
0x04944F10: f40301aa  mov x20, x1
0x04944F14: f30300aa  mov x19, x0
0x04944F18: 086140f9  ldr x8, [x8, #0xc0]
0x04944F1C: 080540f9  ldr x8, [x8, #8]
0x04944F20: 09d54439  ldrb w9, [x8, #0x135]
0x04944F24: 89000037  tbnz w9, #0, #0x4944f34
0x04944F28: e00308aa  mov x0, x8
0x04944F2C: 3c46a097  bl #0x315681c
0x04944F30: e80300aa  mov x8, x0
0x04944F34: e00308aa  mov x0, x8
0x04944F38: 5aefa097  bl #0x3180ca0
0x04944F3C: 881240f9  ldr x8, [x20, #0x20]
0x04944F40: f40300aa  mov x20, x0
0x04944F44: 086140f9  ldr x8, [x8, #0xc0]
0x04944F48: 017140f9  ldr x1, [x8, #0xe0]
0x04944F4C: 3bfbdb97  bl #0x4043c38
0x04944F50: e00313aa  mov x0, x19
0x04944F54: 140c01f8  str x20, [x0, #0x10]!
0x04944F58: e10314aa  mov x1, x20
0x04944F5C: 9aeea097  bl #0x31809c4
0x04944F60: e00313aa  mov x0, x19
0x04944F64: f44f41a9  ldp x20, x19, [sp, #0x10]
0x04944F68: e1031faa  mov x1, xzr
0x04944F6C: fe0742f8  ldr x30, [sp], #0x20
0x04944F70: a3553614  b #0x56da5fc

; Generic instantiation from Il2CppDumper script.json | RVA 0x494539C | MergeEngine.Util.WeightedItemList<__Il2CppFullySharedGenericType>$$.ctor
; native signature: void MergeEngine_Util_WeightedItemList___Il2CppFullySharedGenericType____ctor (MergeEngine_Util_WeightedItemList_TItem__o* __this, const MethodInfo_494539C* method);
; bytes=116 sha256=477b1e42db8bf065bd716880cbc5fc47559a3923c3f2d28550d6d0b009b32bf1 status=arm64_complete_bound indexed_start=True
0x0494539C: fe0f1ef8  str x30, [sp, #-0x20]!
0x049453A0: f44f01a9  stp x20, x19, [sp, #0x10]
0x049453A4: 281040f9  ldr x8, [x1, #0x20]
0x049453A8: f40301aa  mov x20, x1
0x049453AC: f30300aa  mov x19, x0
0x049453B0: 086140f9  ldr x8, [x8, #0xc0]
0x049453B4: 080540f9  ldr x8, [x8, #8]
0x049453B8: 09d54439  ldrb w9, [x8, #0x135]
0x049453BC: 89000037  tbnz w9, #0, #0x49453cc
0x049453C0: e00308aa  mov x0, x8
0x049453C4: 1645a097  bl #0x315681c
0x049453C8: e80300aa  mov x8, x0
0x049453CC: e00308aa  mov x0, x8
0x049453D0: 34eea097  bl #0x3180ca0
0x049453D4: 881240f9  ldr x8, [x20, #0x20]
0x049453D8: f40300aa  mov x20, x0
0x049453DC: 086140f9  ldr x8, [x8, #0xc0]
0x049453E0: 017140f9  ldr x1, [x8, #0xe0]
0x049453E4: 280040f9  ldr x8, [x1]
0x049453E8: 00013fd6  blr x8
0x049453EC: e00313aa  mov x0, x19
0x049453F0: 140c01f8  str x20, [x0, #0x10]!
0x049453F4: e10314aa  mov x1, x20
0x049453F8: 73eda097  bl #0x31809c4
0x049453FC: e00313aa  mov x0, x19
0x04945400: f44f41a9  ldp x20, x19, [sp, #0x10]
0x04945404: e1031faa  mov x1, xzr
0x04945408: fe0742f8  ldr x30, [sp], #0x20
0x0494540C: 7c543614  b #0x56da5fc

; Generic instantiation from Il2CppDumper script.json | RVA 0x49447AC | MergeEngine.Util.WeightedItemList<int>$$<AddItems>b__7_0
; native signature: void MergeEngine_Util_WeightedItemList_int____AddItems_b__7_0 (MergeEngine_Util_WeightedItemList_TItem__o* __this, MergeEngine_Util_WeightedItem_TItem__o* item, const MethodInfo_49447AC* method);
; bytes=16 sha256=19e43e596ef608f60768328865fba598a072b3f9050dd3844ee276315929c040 status=arm64_complete_bound indexed_start=True
0x049447AC: 481040f9  ldr x8, [x2, #0x20]
0x049447B0: 086140f9  ldr x8, [x8, #0xc0]
0x049447B4: 027540f9  ldr x2, [x8, #0xe8]
0x049447B8: 67ffff17  b #0x4944554

; Generic instantiation from Il2CppDumper script.json | RVA 0x4944B90 | MergeEngine.Util.WeightedItemList<Int32Enum>$$<AddItems>b__7_0
; native signature: void MergeEngine_Util_WeightedItemList_Int32Enum____AddItems_b__7_0 (MergeEngine_Util_WeightedItemList_TItem__o* __this, MergeEngine_Util_WeightedItem_TItem__o* item, const MethodInfo_4944B90* method);
; bytes=16 sha256=19e43e596ef608f60768328865fba598a072b3f9050dd3844ee276315929c040 status=arm64_complete_bound indexed_start=True
0x04944B90: 481040f9  ldr x8, [x2, #0x20]
0x04944B94: 086140f9  ldr x8, [x8, #0xc0]
0x04944B98: 027540f9  ldr x2, [x8, #0xe8]
0x04944B9C: 67ffff17  b #0x4944938

; Generic instantiation from Il2CppDumper script.json | RVA 0x4944F74 | MergeEngine.Util.WeightedItemList<object>$$<AddItems>b__7_0
; native signature: void MergeEngine_Util_WeightedItemList_object____AddItems_b__7_0 (MergeEngine_Util_WeightedItemList_TItem__o* __this, MergeEngine_Util_WeightedItem_TItem__o* item, const MethodInfo_4944F74* method);
; bytes=16 sha256=19e43e596ef608f60768328865fba598a072b3f9050dd3844ee276315929c040 status=arm64_complete_bound indexed_start=True
0x04944F74: 481040f9  ldr x8, [x2, #0x20]
0x04944F78: 086140f9  ldr x8, [x8, #0xc0]
0x04944F7C: 027540f9  ldr x2, [x8, #0xe8]
0x04944F80: 67ffff17  b #0x4944d1c

; Generic instantiation from Il2CppDumper script.json | RVA 0x4945410 | MergeEngine.Util.WeightedItemList<__Il2CppFullySharedGenericType>$$<AddItems>b__7_0
; native signature: void MergeEngine_Util_WeightedItemList___Il2CppFullySharedGenericType____AddItems_b__7_0 (MergeEngine_Util_WeightedItemList_TItem__o* __this, MergeEngine_Util_WeightedItem_TItem__o* item, const MethodInfo_4945410* method);
; bytes=20 sha256=cbaf0756bd0bfa9ec720a13d53375adfc5ff1dd42fdea96269b21005246ffc00 status=arm64_complete_bound indexed_start=True
0x04945410: 481040f9  ldr x8, [x2, #0x20]
0x04945414: 086140f9  ldr x8, [x8, #0xc0]
0x04945418: 027540f9  ldr x2, [x8, #0xe8]
0x0494541C: 430040f9  ldr x3, [x2]
0x04945420: 60001fd6  br x3

