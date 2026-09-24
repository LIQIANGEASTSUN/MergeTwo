; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 118 MergeEngine.Util.WeightedItem<T>
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; Generic instantiation from Il2CppDumper script.json | RVA 0x4945424 | MergeEngine.Util.WeightedItem<int>$$get_Item
; native signature: int32_t MergeEngine_Util_WeightedItem_int___get_Item (MergeEngine_Util_WeightedItem_T__o* __this, const MethodInfo_4945424* method);
; bytes=8 sha256=6f1929ee2376e6ada94db6d2aafe012dfc8382613e73b99aea0c7dea270fac13 status=arm64_complete_bound indexed_start=True
0x04945424: 001040b9  ldr w0, [x0, #0x10]
0x04945428: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x4945478 | MergeEngine.Util.WeightedItem<Int32Enum>$$get_Item
; native signature: int32_t MergeEngine_Util_WeightedItem_Int32Enum___get_Item (MergeEngine_Util_WeightedItem_T__o* __this, const MethodInfo_4945478* method);
; bytes=8 sha256=6f1929ee2376e6ada94db6d2aafe012dfc8382613e73b99aea0c7dea270fac13 status=arm64_complete_bound indexed_start=True
0x04945478: 001040b9  ldr w0, [x0, #0x10]
0x0494547C: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x49454CC | MergeEngine.Util.WeightedItem<object>$$get_Item
; native signature: Il2CppObject* MergeEngine_Util_WeightedItem_object___get_Item (MergeEngine_Util_WeightedItem_T__o* __this, const MethodInfo_49454CC* method);
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x049454CC: 000840f9  ldr x0, [x0, #0x10]
0x049454D0: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x494552C | MergeEngine.Util.WeightedItem<__Il2CppFullySharedGenericType>$$get_Item
; native signature: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o MergeEngine_Util_WeightedItem___Il2CppFullySharedGenericType___get_Item (MergeEngine_Util_WeightedItem_T__o* __this, const MethodInfo_494552C* method);
; bytes=152 sha256=d466a1b96bf5c4983e23c5f8d6799ce0883762e407ea2be562aee317e946421e status=arm64_complete_bound indexed_start=True
0x0494552C: fd7bbda9  stp x29, x30, [sp, #-0x30]!
0x04945530: f65701a9  stp x22, x21, [sp, #0x10]
0x04945534: f44f02a9  stp x20, x19, [sp, #0x20]
0x04945538: fd030091  mov x29, sp
0x0494553C: ff4300d1  sub sp, sp, #0x10
0x04945540: 56d03bd5  mrs x22, tpidr_el0
0x04945544: c81640f9  ldr x8, [x22, #0x28]
0x04945548: f30301aa  mov x19, x1
0x0494554C: a8831ff8  stur x8, [x29, #-8]
0x04945550: 481040f9  ldr x8, [x2, #0x20]
0x04945554: 086140f9  ldr x8, [x8, #0xc0]
0x04945558: 082540a9  ldp x8, x9, [x8]
0x0494555C: 34fd40b9  ldr w20, [x9, #0xfc]
0x04945560: e9030091  mov x9, sp
0x04945564: 8a3e0091  add x10, x20, #0xf
0x04945568: 4a717c92  and x10, x10, #0x1fffffff0
0x0494556C: 35010acb  sub x21, x9, x10
0x04945570: bf020091  mov sp, x21
0x04945574: 014140f9  ldr x1, [x8, #0x80]
0x04945578: 30eda097  bl #0x3180a38
0x0494557C: e10300aa  mov x1, x0
0x04945580: e00315aa  mov x0, x21
0x04945584: e20314aa  mov x2, x20
0x04945588: fa24a294  bl #0x71ce970
0x0494558C: e00313aa  mov x0, x19
0x04945590: e10315aa  mov x1, x21
0x04945594: e20314aa  mov x2, x20
0x04945598: f624a294  bl #0x71ce970
0x0494559C: c81640f9  ldr x8, [x22, #0x28]
0x049455A0: a9835ff8  ldur x9, [x29, #-8]
0x049455A4: 1f0109eb  cmp x8, x9
0x049455A8: c1000054  b.ne #0x49455c0
0x049455AC: bf030091  mov sp, x29
0x049455B0: f44f42a9  ldp x20, x19, [sp, #0x20]
0x049455B4: f65741a9  ldp x22, x21, [sp, #0x10]
0x049455B8: fd7bc3a8  ldp x29, x30, [sp], #0x30
0x049455BC: c0035fd6  ret
0x049455C0: f424a294  bl #0x71ce990

; Generic instantiation from Il2CppDumper script.json | RVA 0x494542C | MergeEngine.Util.WeightedItem<int>$$get_Weight
; native signature: int32_t MergeEngine_Util_WeightedItem_int___get_Weight (MergeEngine_Util_WeightedItem_T__o* __this, const MethodInfo_494542C* method);
; bytes=8 sha256=ca9be5891608b757b7bc8d84905b452237de4af4115e73ad7cd6348b92859bf1 status=arm64_complete_bound indexed_start=True
0x0494542C: 001440b9  ldr w0, [x0, #0x14]
0x04945430: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x4945480 | MergeEngine.Util.WeightedItem<Int32Enum>$$get_Weight
; native signature: int32_t MergeEngine_Util_WeightedItem_Int32Enum___get_Weight (MergeEngine_Util_WeightedItem_T__o* __this, const MethodInfo_4945480* method);
; bytes=8 sha256=ca9be5891608b757b7bc8d84905b452237de4af4115e73ad7cd6348b92859bf1 status=arm64_complete_bound indexed_start=True
0x04945480: 001440b9  ldr w0, [x0, #0x14]
0x04945484: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x49454D4 | MergeEngine.Util.WeightedItem<object>$$get_Weight
; native signature: int32_t MergeEngine_Util_WeightedItem_object___get_Weight (MergeEngine_Util_WeightedItem_T__o* __this, const MethodInfo_49454D4* method);
; bytes=8 sha256=50abf56e70bf4ffd353b0c6ed3c4e4880c6169bcd84263b80a4680f2ca7fb9ab status=arm64_complete_bound indexed_start=True
0x049454D4: 001840b9  ldr w0, [x0, #0x18]
0x049454D8: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x49455C4 | MergeEngine.Util.WeightedItem<__Il2CppFullySharedGenericType>$$get_Weight
; native signature: int32_t MergeEngine_Util_WeightedItem___Il2CppFullySharedGenericType___get_Weight (MergeEngine_Util_WeightedItem_T__o* __this, const MethodInfo_49455C4* method);
; bytes=40 sha256=b04b6801552dfc804290744b114b6e9aac144723db29edc7810cd58dd4f6fea1 status=arm64_complete_bound indexed_start=True
0x049455C4: fe0f1ff8  str x30, [sp, #-0x10]!
0x049455C8: 281040f9  ldr x8, [x1, #0x20]
0x049455CC: 086140f9  ldr x8, [x8, #0xc0]
0x049455D0: 080140f9  ldr x8, [x8]
0x049455D4: 084140f9  ldr x8, [x8, #0x80]
0x049455D8: 01810091  add x1, x8, #0x20
0x049455DC: 17eda097  bl #0x3180a38
0x049455E0: 000040b9  ldr w0, [x0]
0x049455E4: fe0741f8  ldr x30, [sp], #0x10
0x049455E8: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x4945434 | MergeEngine.Util.WeightedItem<int>$$get_SumWeights
; native signature: int32_t MergeEngine_Util_WeightedItem_int___get_SumWeights (MergeEngine_Util_WeightedItem_T__o* __this, const MethodInfo_4945434* method);
; bytes=8 sha256=50abf56e70bf4ffd353b0c6ed3c4e4880c6169bcd84263b80a4680f2ca7fb9ab status=arm64_complete_bound indexed_start=True
0x04945434: 001840b9  ldr w0, [x0, #0x18]
0x04945438: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x4945488 | MergeEngine.Util.WeightedItem<Int32Enum>$$get_SumWeights
; native signature: int32_t MergeEngine_Util_WeightedItem_Int32Enum___get_SumWeights (MergeEngine_Util_WeightedItem_T__o* __this, const MethodInfo_4945488* method);
; bytes=8 sha256=50abf56e70bf4ffd353b0c6ed3c4e4880c6169bcd84263b80a4680f2ca7fb9ab status=arm64_complete_bound indexed_start=True
0x04945488: 001840b9  ldr w0, [x0, #0x18]
0x0494548C: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x49454DC | MergeEngine.Util.WeightedItem<object>$$get_SumWeights
; native signature: int32_t MergeEngine_Util_WeightedItem_object___get_SumWeights (MergeEngine_Util_WeightedItem_T__o* __this, const MethodInfo_49454DC* method);
; bytes=8 sha256=7a2c484f16193ad2c5617bbe6704b2ccbdcc31004cfa1370a3ba4533f12de7f9 status=arm64_complete_bound indexed_start=True
0x049454DC: 001c40b9  ldr w0, [x0, #0x1c]
0x049454E0: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x49455EC | MergeEngine.Util.WeightedItem<__Il2CppFullySharedGenericType>$$get_SumWeights
; native signature: int32_t MergeEngine_Util_WeightedItem___Il2CppFullySharedGenericType___get_SumWeights (MergeEngine_Util_WeightedItem_T__o* __this, const MethodInfo_49455EC* method);
; bytes=40 sha256=ceb695b7708fd6da3c381194894b5380c1c5259cd1de3652c5af25dd757c179f status=arm64_complete_bound indexed_start=True
0x049455EC: fe0f1ff8  str x30, [sp, #-0x10]!
0x049455F0: 281040f9  ldr x8, [x1, #0x20]
0x049455F4: 086140f9  ldr x8, [x8, #0xc0]
0x049455F8: 080140f9  ldr x8, [x8]
0x049455FC: 084140f9  ldr x8, [x8, #0x80]
0x04945600: 01010191  add x1, x8, #0x40
0x04945604: 0deda097  bl #0x3180a38
0x04945608: 000040b9  ldr w0, [x0]
0x0494560C: fe0741f8  ldr x30, [sp], #0x10
0x04945610: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x494543C | MergeEngine.Util.WeightedItem<int>$$.ctor
; native signature: void MergeEngine_Util_WeightedItem_int____ctor (MergeEngine_Util_WeightedItem_T__o* __this, int32_t item, int32_t weight, int32_t sumWeights, const MethodInfo_494543C* method);
; bytes=60 sha256=13ea3185f063af149e8b759b723c4233ad3d82ee5c2bdbd19461027915b7e469 status=arm64_complete_bound indexed_start=True
0x0494543C: fe0f1df8  str x30, [sp, #-0x30]!
0x04945440: f65701a9  stp x22, x21, [sp, #0x10]
0x04945444: f44f02a9  stp x20, x19, [sp, #0x20]
0x04945448: f503012a  mov w21, w1
0x0494544C: e1031faa  mov x1, xzr
0x04945450: f303032a  mov w19, w3
0x04945454: f403022a  mov w20, w2
0x04945458: f60300aa  mov x22, x0
0x0494545C: 68543694  bl #0x56da5fc
0x04945460: d5520229  stp w21, w20, [x22, #0x10]
0x04945464: d31a00b9  str w19, [x22, #0x18]
0x04945468: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0494546C: f65741a9  ldp x22, x21, [sp, #0x10]
0x04945470: fe0743f8  ldr x30, [sp], #0x30
0x04945474: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x4945490 | MergeEngine.Util.WeightedItem<Int32Enum>$$.ctor
; native signature: void MergeEngine_Util_WeightedItem_Int32Enum____ctor (MergeEngine_Util_WeightedItem_T__o* __this, int32_t item, int32_t weight, int32_t sumWeights, const MethodInfo_4945490* method);
; bytes=60 sha256=5d6a683266b3f8e6d573dfa24a6e6d365d557514150bf54d58b1158e6b7f2a35 status=arm64_complete_bound indexed_start=True
0x04945490: fe0f1df8  str x30, [sp, #-0x30]!
0x04945494: f65701a9  stp x22, x21, [sp, #0x10]
0x04945498: f44f02a9  stp x20, x19, [sp, #0x20]
0x0494549C: f503012a  mov w21, w1
0x049454A0: e1031faa  mov x1, xzr
0x049454A4: f303032a  mov w19, w3
0x049454A8: f403022a  mov w20, w2
0x049454AC: f60300aa  mov x22, x0
0x049454B0: 53543694  bl #0x56da5fc
0x049454B4: d5520229  stp w21, w20, [x22, #0x10]
0x049454B8: d31a00b9  str w19, [x22, #0x18]
0x049454BC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x049454C0: f65741a9  ldp x22, x21, [sp, #0x10]
0x049454C4: fe0743f8  ldr x30, [sp], #0x30
0x049454C8: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x49454E4 | MergeEngine.Util.WeightedItem<object>$$.ctor
; native signature: void MergeEngine_Util_WeightedItem_object____ctor (MergeEngine_Util_WeightedItem_T__o* __this, Il2CppObject* item, int32_t weight, int32_t sumWeights, const MethodInfo_49454E4* method);
; bytes=72 sha256=65c35b2b603117213eec4749a3955a03b0168a5c85f5d4829393b9648ddc98d8 status=arm64_complete_bound indexed_start=True
0x049454E4: fe0f1df8  str x30, [sp, #-0x30]!
0x049454E8: f65701a9  stp x22, x21, [sp, #0x10]
0x049454EC: f44f02a9  stp x20, x19, [sp, #0x20]
0x049454F0: f50301aa  mov x21, x1
0x049454F4: e1031faa  mov x1, xzr
0x049454F8: f303032a  mov w19, w3
0x049454FC: f403022a  mov w20, w2
0x04945500: f60300aa  mov x22, x0
0x04945504: 3e543694  bl #0x56da5fc
0x04945508: d50e01f8  str x21, [x22, #0x10]!
0x0494550C: e00316aa  mov x0, x22
0x04945510: e10315aa  mov x1, x21
0x04945514: 2ceda097  bl #0x31809c4
0x04945518: d44e0129  stp w20, w19, [x22, #8]
0x0494551C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x04945520: f65741a9  ldp x22, x21, [sp, #0x10]
0x04945524: fe0743f8  ldr x30, [sp], #0x30
0x04945528: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x4945614 | MergeEngine.Util.WeightedItem<__Il2CppFullySharedGenericType>$$.ctor
; native signature: void MergeEngine_Util_WeightedItem___Il2CppFullySharedGenericType____ctor (MergeEngine_Util_WeightedItem_T__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o item, int32_t weight, int32_t sumWeights, const MethodInfo_4945614* method);
; bytes=296 sha256=ce2d54beff0bb5ab5d7143a4f1c7051398197de0ce7443e5845ba2cf0d5dba6c status=arm64_complete_bound indexed_start=True
0x04945614: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x04945618: fb0b00f9  str x27, [sp, #0x10]
0x0494561C: fa6702a9  stp x26, x25, [sp, #0x20]
0x04945620: f85f03a9  stp x24, x23, [sp, #0x30]
0x04945624: f65704a9  stp x22, x21, [sp, #0x40]
0x04945628: f44f05a9  stp x20, x19, [sp, #0x50]
0x0494562C: fd030091  mov x29, sp
0x04945630: ff4300d1  sub sp, sp, #0x10
0x04945634: 5ad03bd5  mrs x26, tpidr_el0
0x04945638: 481740f9  ldr x8, [x26, #0x28]
0x0494563C: f40304aa  mov x20, x4
0x04945640: f303032a  mov w19, w3
0x04945644: f503022a  mov w21, w2
0x04945648: a8831ff8  stur x8, [x29, #-8]
0x0494564C: a1031ff8  stur x1, [x29, #-0x10]
0x04945650: 881040f9  ldr x8, [x4, #0x20]
0x04945654: f60301aa  mov x22, x1
0x04945658: f80300aa  mov x24, x0
0x0494565C: 086140f9  ldr x8, [x8, #0xc0]
0x04945660: 080540f9  ldr x8, [x8, #8]
0x04945664: 17fd40b9  ldr w23, [x8, #0xfc]
0x04945668: e8030091  mov x8, sp
0x0494566C: e93e0091  add x9, x23, #0xf
0x04945670: 29717c92  and x9, x9, #0x1fffffff0
0x04945674: 190109cb  sub x25, x8, x9
0x04945678: 3f030091  mov sp, x25
0x0494567C: e1031faa  mov x1, xzr
0x04945680: df533694  bl #0x56da5fc
0x04945684: 9b1240f9  ldr x27, [x20, #0x20]
0x04945688: e00319aa  mov x0, x25
0x0494568C: e20317aa  mov x2, x23
0x04945690: 686340f9  ldr x8, [x27, #0xc0]
0x04945694: 080540f9  ldr x8, [x8, #8]
0x04945698: 082940b9  ldr w8, [x8, #0x28]
0x0494569C: 1f010071  cmp w8, #0
0x049456A0: a84300d1  sub x8, x29, #0x10
0x049456A4: c1b2889a  csel x1, x22, x8, lt
0x049456A8: b224a294  bl #0x71ce970
0x049456AC: 686340f9  ldr x8, [x27, #0xc0]
0x049456B0: e00318aa  mov x0, x24
0x049456B4: e20319aa  mov x2, x25
0x049456B8: e303172a  mov w3, w23
0x049456BC: 080140f9  ldr x8, [x8]
0x049456C0: 014140f9  ldr x1, [x8, #0x80]
0x049456C4: deeca097  bl #0x3180a3c
0x049456C8: 881240f9  ldr x8, [x20, #0x20]
0x049456CC: e00318aa  mov x0, x24
0x049456D0: e203152a  mov w2, w21
0x049456D4: 086140f9  ldr x8, [x8, #0xc0]
0x049456D8: 080140f9  ldr x8, [x8]
0x049456DC: 084140f9  ldr x8, [x8, #0x80]
0x049456E0: 01810091  add x1, x8, #0x20
0x049456E4: 03489397  bl #0x2e176f0
0x049456E8: 881240f9  ldr x8, [x20, #0x20]
0x049456EC: e00318aa  mov x0, x24
0x049456F0: e203132a  mov w2, w19
0x049456F4: 086140f9  ldr x8, [x8, #0xc0]
0x049456F8: 080140f9  ldr x8, [x8]
0x049456FC: 084140f9  ldr x8, [x8, #0x80]
0x04945700: 01010191  add x1, x8, #0x40
0x04945704: fb479397  bl #0x2e176f0
0x04945708: 481740f9  ldr x8, [x26, #0x28]
0x0494570C: a9835ff8  ldur x9, [x29, #-8]
0x04945710: 1f0109eb  cmp x8, x9
0x04945714: 21010054  b.ne #0x4945738
0x04945718: bf030091  mov sp, x29
0x0494571C: f44f45a9  ldp x20, x19, [sp, #0x50]
0x04945720: f65744a9  ldp x22, x21, [sp, #0x40]
0x04945724: f85f43a9  ldp x24, x23, [sp, #0x30]
0x04945728: fa6742a9  ldp x26, x25, [sp, #0x20]
0x0494572C: fb0b40f9  ldr x27, [sp, #0x10]
0x04945730: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x04945734: c0035fd6  ret
0x04945738: 9624a294  bl #0x71ce990

