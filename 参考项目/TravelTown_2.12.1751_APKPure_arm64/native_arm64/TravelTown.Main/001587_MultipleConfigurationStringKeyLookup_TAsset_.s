; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1587 GameCore.Configuration.Definitions.MultipleConfigurationStringKeyLookup<TAsset>
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; Generic instantiation from Il2CppDumper script.json | RVA 0x4221388 | GameCore.Configuration.Definitions.MultipleConfigurationStringKeyLookup<object>$$GetKey
; native signature: System_String_o* GameCore_Configuration_Definitions_MultipleConfigurationStringKeyLookup_object___GetKey (GameCore_Configuration_Definitions_MultipleConfigurationStringKeyLookup_TAsset__o* __this, Il2CppObject* item, const MethodInfo_4221388* method);
; bytes=156 sha256=d18a0524930b592629c55117c821594c28075cf4db7801c1fa1d66d77fd39f61 status=arm64_complete_bound indexed_start=True
0x04221388: fe0f1ef8  str x30, [sp, #-0x20]!
0x0422138C: f44f01a9  stp x20, x19, [sp, #0x10]
0x04221390: b4d701f0  adrp x20, #0x7d18000
0x04221394: 88ee5839  ldrb w8, [x20, #0x63b]
0x04221398: f30301aa  mov x19, x1
0x0422139C: c8000037  tbnz w8, #0, #0x42213b4
0x042213A0: c0a20190  adrp x0, #0x7679000
0x042213A4: 001044f9  ldr x0, [x0, #0x820]
0x042213A8: 9c7dbd97  bl #0x3180a18
0x042213AC: 28008052  movz w8, #0x1
0x042213B0: 88ee1839  strb w8, [x20, #0x63b]
0x042213B4: 730300b4  cbz x19, #0x4221420
0x042213B8: caa20190  adrp x10, #0x7679000
0x042213BC: 680240f9  ldr x8, [x19]
0x042213C0: 4a1144f9  ldr x10, [x10, #0x820]
0x042213C4: 095d4279  ldrh w9, [x8, #0x12e]
0x042213C8: 410140f9  ldr x1, [x10]
0x042213CC: 290100b4  cbz x9, #0x42213f0
0x042213D0: 0a5940f9  ldr x10, [x8, #0xb0]
0x042213D4: 4a210091  add x10, x10, #8
0x042213D8: 4b815ff8  ldur x11, [x10, #-8]
0x042213DC: 7f0101eb  cmp x11, x1
0x042213E0: 00010054  b.eq #0x4221400
0x042213E4: 290500f1  subs x9, x9, #1
0x042213E8: 4a410091  add x10, x10, #0x10
0x042213EC: 61ffff54  b.ne #0x42213d8
0x042213F0: e00313aa  mov x0, x19
0x042213F4: e2031f2a  mov w2, wzr
0x042213F8: c6d5bc97  bl #0x3156b10
0x042213FC: 04000014  b #0x422140c
0x04221400: 490180b9  ldrsw x9, [x10]
0x04221404: 0811098b  add x8, x8, x9, lsl #4
0x04221408: 00e10491  add x0, x8, #0x138
0x0422140C: 020440a9  ldp x2, x1, [x0]
0x04221410: e00313aa  mov x0, x19
0x04221414: f44f41a9  ldp x20, x19, [sp, #0x10]
0x04221418: fe0742f8  ldr x30, [sp], #0x20
0x0422141C: 40001fd6  br x2
0x04221420: 237ebd97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x422142C | GameCore.Configuration.Definitions.MultipleConfigurationStringKeyLookup<__Il2CppFullySharedGenericType>$$GetKey
; native signature: System_String_o* GameCore_Configuration_Definitions_MultipleConfigurationStringKeyLookup___Il2CppFullySharedGenericType___GetKey (GameCore_Configuration_Definitions_MultipleConfigurationStringKeyLookup_TAsset__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o item, const MethodInfo_422142C* method);
; bytes=240 sha256=ab2e2963ac9dc4eddbee496312caee27dc23da83fae7cf18ca08efb1fb857bc5 status=arm64_complete_bound indexed_start=True
0x0422142C: fd7bbda9  stp x29, x30, [sp, #-0x30]!
0x04221430: f65701a9  stp x22, x21, [sp, #0x10]
0x04221434: f44f02a9  stp x20, x19, [sp, #0x20]
0x04221438: fd030091  mov x29, sp
0x0422143C: ff8300d1  sub sp, sp, #0x20
0x04221440: 56d03bd5  mrs x22, tpidr_el0
0x04221444: c81640f9  ldr x8, [x22, #0x28]
0x04221448: f40302aa  mov x20, x2
0x0422144C: f30301aa  mov x19, x1
0x04221450: a8831ff8  stur x8, [x29, #-8]
0x04221454: a1831ef8  stur x1, [x29, #-0x18]
0x04221458: 481040f9  ldr x8, [x2, #0x20]
0x0422145C: 096140f9  ldr x9, [x8, #0xc0]
0x04221460: 280140f9  ldr x8, [x9]
0x04221464: 0ad50491  add x10, x8, #0x135
0x04221468: 4a014079  ldrh w10, [x10]
0x0422146C: 2a010037  tbnz w10, #0, #0x4221490
0x04221470: e00308aa  mov x0, x8
0x04221474: ead4bc97  bl #0x315681c
0x04221478: 881240f9  ldr x8, [x20, #0x20]
0x0422147C: 096140f9  ldr x9, [x8, #0xc0]
0x04221480: 280140f9  ldr x8, [x9]
0x04221484: 0ad50491  add x10, x8, #0x135
0x04221488: 4a014079  ldrh w10, [x10]
0x0422148C: 02000014  b #0x4221494
0x04221490: e00308aa  mov x0, x8
0x04221494: 0bfc40b9  ldr w11, [x0, #0xfc]
0x04221498: ec030091  mov x12, sp
0x0422149C: 6b410011  add w11, w11, #0x10
0x042214A0: 6b3d0091  add x11, x11, #0xf
0x042214A4: 6b717c92  and x11, x11, #0x1fffffff0
0x042214A8: 95010bcb  sub x21, x12, x11
0x042214AC: bf020091  mov sp, x21
0x042214B0: ca000037  tbnz w10, #0, #0x42214c8
0x042214B4: e00308aa  mov x0, x8
0x042214B8: d9d4bc97  bl #0x315681c
0x042214BC: 881240f9  ldr x8, [x20, #0x20]
0x042214C0: 096140f9  ldr x9, [x8, #0xc0]
0x042214C4: e80300aa  mov x8, x0
0x042214C8: 2a0540a9  ldp x10, x1, [x9]
0x042214CC: a96300d1  sub x9, x29, #0x18
0x042214D0: a54300d1  sub x5, x29, #0x10
0x042214D4: e00308aa  mov x0, x8
0x042214D8: 4a2940b9  ldr w10, [x10, #0x28]
0x042214DC: e20315aa  mov x2, x21
0x042214E0: e4031faa  mov x4, xzr
0x042214E4: 5f010071  cmp w10, #0
0x042214E8: 63b2899a  csel x3, x19, x9, lt
0x042214EC: 2880bd97  bl #0x318158c
0x042214F0: a0035ff8  ldur x0, [x29, #-0x10]
0x042214F4: c81640f9  ldr x8, [x22, #0x28]
0x042214F8: a9835ff8  ldur x9, [x29, #-8]
0x042214FC: 1f0109eb  cmp x8, x9
0x04221500: c1000054  b.ne #0x4221518
0x04221504: bf030091  mov sp, x29
0x04221508: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0422150C: f65741a9  ldp x22, x21, [sp, #0x10]
0x04221510: fd7bc3a8  ldp x29, x30, [sp], #0x30
0x04221514: c0035fd6  ret
0x04221518: 1eb5be94  bl #0x71ce990

; Generic instantiation from Il2CppDumper script.json | RVA 0x4221424 | GameCore.Configuration.Definitions.MultipleConfigurationStringKeyLookup<object>$$.ctor
; native signature: void GameCore_Configuration_Definitions_MultipleConfigurationStringKeyLookup_object____ctor (GameCore_Configuration_Definitions_MultipleConfigurationStringKeyLookup_TAsset__o* __this, const MethodInfo_4221424* method);
; bytes=8 sha256=cb68b7fdf99e609a0958f5f39c466f66a149f8a9b068ca48a19a6e061be65a08 status=arm64_complete_bound indexed_start=True
0x04221424: e1031faa  mov x1, xzr
0x04221428: 75e45214  b #0x56da5fc

; Generic instantiation from Il2CppDumper script.json | RVA 0x422151C | GameCore.Configuration.Definitions.MultipleConfigurationStringKeyLookup<__Il2CppFullySharedGenericType>$$.ctor
; native signature: void GameCore_Configuration_Definitions_MultipleConfigurationStringKeyLookup___Il2CppFullySharedGenericType____ctor (GameCore_Configuration_Definitions_MultipleConfigurationStringKeyLookup_TAsset__o* __this, const MethodInfo_422151C* method);
; bytes=20 sha256=3909e74c93392ab68baa4ce77711205aa9ea83a12464c536d7582e9ef68c719f status=arm64_complete_bound indexed_start=True
0x0422151C: 281040f9  ldr x8, [x1, #0x20]
0x04221520: 086140f9  ldr x8, [x8, #0xc0]
0x04221524: 010940f9  ldr x1, [x8, #0x10]
0x04221528: 220040f9  ldr x2, [x1]
0x0422152C: 40001fd6  br x2

