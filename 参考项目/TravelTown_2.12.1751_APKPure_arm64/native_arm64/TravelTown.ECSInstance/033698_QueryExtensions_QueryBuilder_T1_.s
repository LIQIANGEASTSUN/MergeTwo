; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 33698 .QueryExtensions.QueryBuilder<T1>
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; Generic instantiation from Il2CppDumper script.json | RVA 0x4399528 | ContextualizedECS.Query.QueryExtensions.QueryBuilder<__Il2CppFullySharedGenericType>$$.ctor
; native signature: void ContextualizedECS_Query_QueryExtensions_QueryBuilder___Il2CppFullySharedGenericType____ctor (ContextualizedECS_Query_QueryExtensions_QueryBuilder_T1__o __this, ContextualizedECS_Query_Entities_MatchDelegate_T1__o* matcher, ContextualizedECS_Query_Entities_ExcludeDelegate_o* exclude, const MethodInfo_4399528* method);
; bytes=88 sha256=2b45bac17580702bdeb384f38379eaee9252bf766f2bd83ac90d57a92b48ac26 status=arm64_complete_bound indexed_start=True
0x04399528: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0439952C: f44f01a9  stp x20, x19, [sp, #0x10]
0x04399530: f40301aa  mov x20, x1
0x04399534: e1031faa  mov x1, xzr
0x04399538: f30302aa  mov x19, x2
0x0439953C: f50300aa  mov x21, x0
0x04399540: 1f0000f9  str xzr, [x0]
0x04399544: 209db797  bl #0x31809c4
0x04399548: e00315aa  mov x0, x21
0x0439954C: 140c01f8  str x20, [x0, #0x10]!
0x04399550: e10314aa  mov x1, x20
0x04399554: 1c9db797  bl #0x31809c4
0x04399558: e00315aa  mov x0, x21
0x0439955C: 138c01f8  str x19, [x0, #0x18]!
0x04399560: e10313aa  mov x1, x19
0x04399564: 189db797  bl #0x31809c4
0x04399568: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0439956C: bf8e00f8  str xzr, [x21, #8]!
0x04399570: e00315aa  mov x0, x21
0x04399574: e1031faa  mov x1, xzr
0x04399578: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0439957C: 129db717  b #0x31809c4

; Generic instantiation from Il2CppDumper script.json | RVA 0x4399580 | ContextualizedECS.Query.QueryExtensions.QueryBuilder<__Il2CppFullySharedGenericType>$$Where
; native signature: ContextualizedECS_Query_QueryExtensions_QueryBuilder_T1__o ContextualizedECS_Query_QueryExtensions_QueryBuilder___Il2CppFullySharedGenericType___Where (ContextualizedECS_Query_QueryExtensions_QueryBuilder_T1__o __this, System_Func_T1__bool__o* predicate, const MethodInfo_4399580* method);
; bytes=44 sha256=2c78820ac86626c82883b2478bec215edb9347082aaac69e34b657e37b07e140 status=arm64_complete_bound indexed_start=True
0x04399580: fe0f1ef8  str x30, [sp, #-0x20]!
0x04399584: f44f01a9  stp x20, x19, [sp, #0x10]
0x04399588: f30300aa  mov x19, x0
0x0439958C: 018c00f8  str x1, [x0, #8]!
0x04399590: f40308aa  mov x20, x8
0x04399594: 0c9db797  bl #0x31809c4
0x04399598: 610240ad  ldp q1, q0, [x19]
0x0439959C: 810200ad  stp q1, q0, [x20]
0x043995A0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x043995A4: fe0742f8  ldr x30, [sp], #0x20
0x043995A8: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x43995AC | ContextualizedECS.Query.QueryExtensions.QueryBuilder<__Il2CppFullySharedGenericType>$$From
; native signature: ContextualizedECS_Query_QueryExtensions_QueryBuilder_T1__o ContextualizedECS_Query_QueryExtensions_QueryBuilder___Il2CppFullySharedGenericType___From (ContextualizedECS_Query_QueryExtensions_QueryBuilder_T1__o __this, System_Collections_Generic_IEnumerable_Entity__o* source, const MethodInfo_43995AC* method);
; bytes=44 sha256=078f537aa4c7cc23b813083fb4d933d7eebfb5883b48e8741bf5953721ac5d08 status=arm64_complete_bound indexed_start=True
0x043995AC: fe0f1ef8  str x30, [sp, #-0x20]!
0x043995B0: f44f01a9  stp x20, x19, [sp, #0x10]
0x043995B4: f30300aa  mov x19, x0
0x043995B8: f40308aa  mov x20, x8
0x043995BC: 010000f9  str x1, [x0]
0x043995C0: 019db797  bl #0x31809c4
0x043995C4: 610240ad  ldp q1, q0, [x19]
0x043995C8: 810200ad  stp q1, q0, [x20]
0x043995CC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x043995D0: fe0742f8  ldr x30, [sp], #0x20
0x043995D4: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x43995D8 | ContextualizedECS.Query.QueryExtensions.QueryBuilder<__Il2CppFullySharedGenericType>$$All
; native signature: System_Collections_Generic_IEnumerable_T1__o* ContextualizedECS_Query_QueryExtensions_QueryBuilder___Il2CppFullySharedGenericType___All (ContextualizedECS_Query_QueryExtensions_QueryBuilder_T1__o __this, const MethodInfo_43995D8* method);
; bytes=260 sha256=4e089b7370cb9b32cc9ad7d6930552e474df66392c69c4ff7f6d5daf4be1fea0 status=arm64_complete_bound indexed_start=True
0x043995D8: ffc301d1  sub sp, sp, #0x70
0x043995DC: fe2300f9  str x30, [sp, #0x40]
0x043995E0: f65705a9  stp x22, x21, [sp, #0x50]
0x043995E4: f44f06a9  stp x20, x19, [sp, #0x60]
0x043995E8: 281040f9  ldr x8, [x1, #0x20]
0x043995EC: f30301aa  mov x19, x1
0x043995F0: f40300aa  mov x20, x0
0x043995F4: 09d54439  ldrb w9, [x8, #0x135]
0x043995F8: 89000037  tbnz w9, #0, #0x4399608
0x043995FC: e00308aa  mov x0, x8
0x04399600: 87f4b697  bl #0x315681c
0x04399604: e80300aa  mov x8, x0
0x04399608: 086140f9  ldr x8, [x8, #0xc0]
0x0439960C: 000d40f9  ldr x0, [x8, #0x18]
0x04399610: 08d44439  ldrb w8, [x0, #0x135]
0x04399614: 48000037  tbnz w8, #0, #0x439961c
0x04399618: 81f4b697  bl #0x315681c
0x0439961C: a19db797  bl #0x3180ca0
0x04399620: 681240f9  ldr x8, [x19, #0x20]
0x04399624: f50300aa  mov x21, x0
0x04399628: 09d50491  add x9, x8, #0x135
0x0439962C: 29014079  ldrh w9, [x9]
0x04399630: e9000037  tbnz w9, #0, #0x439964c
0x04399634: e00308aa  mov x0, x8
0x04399638: 79f4b697  bl #0x315681c
0x0439963C: 681240f9  ldr x8, [x19, #0x20]
0x04399640: 09d50491  add x9, x8, #0x135
0x04399644: 29014079  ldrh w9, [x9]
0x04399648: 02000014  b #0x4399650
0x0439964C: e00308aa  mov x0, x8
0x04399650: 0a6040f9  ldr x10, [x0, #0xc0]
0x04399654: 4a1140f9  ldr x10, [x10, #0x20]
0x04399658: 560140f9  ldr x22, [x10]
0x0439965C: 89000037  tbnz w9, #0, #0x439966c
0x04399660: e00308aa  mov x0, x8
0x04399664: 6ef4b697  bl #0x315681c
0x04399668: e80300aa  mov x8, x0
0x0439966C: 086140f9  ldr x8, [x8, #0xc0]
0x04399670: 21008012  movn w1, #0x1
0x04399674: e00315aa  mov x0, x21
0x04399678: 021140f9  ldr x2, [x8, #0x20]
0x0439967C: c0023fd6  blr x22
0x04399680: 810240ad  ldp q1, q0, [x20]
0x04399684: e10301ad  stp q1, q0, [sp, #0x20]
0x04399688: 950200b4  cbz x21, #0x43996d8
0x0439968C: 601240f9  ldr x0, [x19, #0x20]
0x04399690: 08d44439  ldrb w8, [x0, #0x135]
0x04399694: 48000037  tbnz w8, #0, #0x439969c
0x04399698: 61f4b697  bl #0x315681c
0x0439969C: 086040f9  ldr x8, [x0, #0xc0]
0x043996A0: e00741ad  ldp q0, q1, [sp, #0x20]
0x043996A4: e2030091  mov x2, sp
0x043996A8: e00315aa  mov x0, x21
0x043996AC: 080d40f9  ldr x8, [x8, #0x18]
0x043996B0: 084140f9  ldr x8, [x8, #0x80]
0x043996B4: e00700ad  stp q0, q1, [sp]
0x043996B8: 01010291  add x1, x8, #0x80
0x043996BC: 1c9caa97  bl #0x2e4072c
0x043996C0: e00315aa  mov x0, x21
0x043996C4: f44f46a9  ldp x20, x19, [sp, #0x60]
0x043996C8: f65745a9  ldp x22, x21, [sp, #0x50]
0x043996CC: fe2340f9  ldr x30, [sp, #0x40]
0x043996D0: ffc30191  add sp, sp, #0x70
0x043996D4: c0035fd6  ret
0x043996D8: 759db797  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x43996DC | ContextualizedECS.Query.QueryExtensions.QueryBuilder<__Il2CppFullySharedGenericType>$$AllPairs
; native signature: System_Collections_Generic_IEnumerable_ValueTuple_T1__T1___o* ContextualizedECS_Query_QueryExtensions_QueryBuilder___Il2CppFullySharedGenericType___AllPairs (ContextualizedECS_Query_QueryExtensions_QueryBuilder_T1__o __this, const MethodInfo_43996DC* method);
; bytes=260 sha256=b5d72815397ea4e1655e66f3c8be3de1ed4ceda8fbd0b9c7efa666e561766275 status=arm64_complete_bound indexed_start=True
0x043996DC: ffc301d1  sub sp, sp, #0x70
0x043996E0: fe2300f9  str x30, [sp, #0x40]
0x043996E4: f65705a9  stp x22, x21, [sp, #0x50]
0x043996E8: f44f06a9  stp x20, x19, [sp, #0x60]
0x043996EC: 281040f9  ldr x8, [x1, #0x20]
0x043996F0: f30301aa  mov x19, x1
0x043996F4: f40300aa  mov x20, x0
0x043996F8: 09d54439  ldrb w9, [x8, #0x135]
0x043996FC: 89000037  tbnz w9, #0, #0x439970c
0x04399700: e00308aa  mov x0, x8
0x04399704: 46f4b697  bl #0x315681c
0x04399708: e80300aa  mov x8, x0
0x0439970C: 086140f9  ldr x8, [x8, #0xc0]
0x04399710: 001940f9  ldr x0, [x8, #0x30]
0x04399714: 08d44439  ldrb w8, [x0, #0x135]
0x04399718: 48000037  tbnz w8, #0, #0x4399720
0x0439971C: 40f4b697  bl #0x315681c
0x04399720: 609db797  bl #0x3180ca0
0x04399724: 681240f9  ldr x8, [x19, #0x20]
0x04399728: f50300aa  mov x21, x0
0x0439972C: 09d50491  add x9, x8, #0x135
0x04399730: 29014079  ldrh w9, [x9]
0x04399734: e9000037  tbnz w9, #0, #0x4399750
0x04399738: e00308aa  mov x0, x8
0x0439973C: 38f4b697  bl #0x315681c
0x04399740: 681240f9  ldr x8, [x19, #0x20]
0x04399744: 09d50491  add x9, x8, #0x135
0x04399748: 29014079  ldrh w9, [x9]
0x0439974C: 02000014  b #0x4399754
0x04399750: e00308aa  mov x0, x8
0x04399754: 0a6040f9  ldr x10, [x0, #0xc0]
0x04399758: 4a1d40f9  ldr x10, [x10, #0x38]
0x0439975C: 560140f9  ldr x22, [x10]
0x04399760: 89000037  tbnz w9, #0, #0x4399770
0x04399764: e00308aa  mov x0, x8
0x04399768: 2df4b697  bl #0x315681c
0x0439976C: e80300aa  mov x8, x0
0x04399770: 086140f9  ldr x8, [x8, #0xc0]
0x04399774: 21008012  movn w1, #0x1
0x04399778: e00315aa  mov x0, x21
0x0439977C: 021d40f9  ldr x2, [x8, #0x38]
0x04399780: c0023fd6  blr x22
0x04399784: 810240ad  ldp q1, q0, [x20]
0x04399788: e10301ad  stp q1, q0, [sp, #0x20]
0x0439978C: 950200b4  cbz x21, #0x43997dc
0x04399790: 601240f9  ldr x0, [x19, #0x20]
0x04399794: 08d44439  ldrb w8, [x0, #0x135]
0x04399798: 48000037  tbnz w8, #0, #0x43997a0
0x0439979C: 20f4b697  bl #0x315681c
0x043997A0: 086040f9  ldr x8, [x0, #0xc0]
0x043997A4: e00741ad  ldp q0, q1, [sp, #0x20]
0x043997A8: e2030091  mov x2, sp
0x043997AC: e00315aa  mov x0, x21
0x043997B0: 081940f9  ldr x8, [x8, #0x30]
0x043997B4: 084140f9  ldr x8, [x8, #0x80]
0x043997B8: e00700ad  stp q0, q1, [sp]
0x043997BC: 01010291  add x1, x8, #0x80
0x043997C0: db9baa97  bl #0x2e4072c
0x043997C4: e00315aa  mov x0, x21
0x043997C8: f44f46a9  ldp x20, x19, [sp, #0x60]
0x043997CC: f65745a9  ldp x22, x21, [sp, #0x50]
0x043997D0: fe2340f9  ldr x30, [sp, #0x40]
0x043997D4: ffc30191  add sp, sp, #0x70
0x043997D8: c0035fd6  ret
0x043997DC: 349db797  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x43997E0 | ContextualizedECS.Query.QueryExtensions.QueryBuilder<__Il2CppFullySharedGenericType>$$One
; native signature: bool ContextualizedECS_Query_QueryExtensions_QueryBuilder___Il2CppFullySharedGenericType___One (ContextualizedECS_Query_QueryExtensions_QueryBuilder_T1__o __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o* result, const MethodInfo_43997E0* method);
; bytes=1344 sha256=cb638ba8fbc2ccd2cddd7420c7f6023158e308c97dc7e667d453efe6552a002f status=arm64_complete_bound indexed_start=True
0x043997E0: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x043997E4: fc6f01a9  stp x28, x27, [sp, #0x10]
0x043997E8: fa6702a9  stp x26, x25, [sp, #0x20]
0x043997EC: f85f03a9  stp x24, x23, [sp, #0x30]
0x043997F0: f65704a9  stp x22, x21, [sp, #0x40]
0x043997F4: f44f05a9  stp x20, x19, [sp, #0x50]
0x043997F8: fd030091  mov x29, sp
0x043997FC: ffc300d1  sub sp, sp, #0x30
0x04399800: 54d03bd5  mrs x20, tpidr_el0
0x04399804: 881640f9  ldr x8, [x20, #0x28]
0x04399808: f3cb01f0  adrp x19, #0x7d18000
0x0439980C: f50302aa  mov x21, x2
0x04399810: f80301aa  mov x24, x1
0x04399814: a8831ff8  stur x8, [x29, #-8]
0x04399818: 68be6d39  ldrb w8, [x19, #0xb6f]
0x0439981C: f70300aa  mov x23, x0
0x04399820: e8010037  tbnz w8, #0, #0x439985c
0x04399824: a09501b0  adrp x0, #0x764e000
0x04399828: 006444f9  ldr x0, [x0, #0x8c8]
0x0439982C: 7b9cb797  bl #0x3180a18
0x04399830: 20970190  adrp x0, #0x767d000
0x04399834: 00f845f9  ldr x0, [x0, #0xbf0]
0x04399838: 789cb797  bl #0x3180a18
0x0439983C: 20970190  adrp x0, #0x767d000
0x04399840: 00fc45f9  ldr x0, [x0, #0xbf8]
0x04399844: 759cb797  bl #0x3180a18
0x04399848: a09501b0  adrp x0, #0x764e000
0x0439984C: 007044f9  ldr x0, [x0, #0x8e0]
0x04399850: 729cb797  bl #0x3180a18
0x04399854: 28008052  movz w8, #0x1
0x04399858: 68be2d39  strb w8, [x19, #0xb6f]
0x0439985C: a01240f9  ldr x0, [x21, #0x20]
0x04399860: 08d44439  ldrb w8, [x0, #0x135]
0x04399864: 48000037  tbnz w8, #0, #0x439986c
0x04399868: edf3b697  bl #0x315681c
0x0439986C: 086040f9  ldr x8, [x0, #0xc0]
0x04399870: 082940f9  ldr x8, [x8, #0x50]
0x04399874: 13fd40b9  ldr w19, [x8, #0xfc]
0x04399878: e8030091  mov x8, sp
0x0439987C: 693e0091  add x9, x19, #0xf
0x04399880: 29717c92  and x9, x9, #0x1fffffff0
0x04399884: 160109cb  sub x22, x8, x9
0x04399888: df020091  mov sp, x22
0x0439988C: e8030091  mov x8, sp
0x04399890: 190109cb  sub x25, x8, x9
0x04399894: 3f030091  mov sp, x25
0x04399898: e00319aa  mov x0, x25
0x0439989C: e1031f2a  mov w1, wzr
0x043998A0: e20313aa  mov x2, x19
0x043998A4: 3fd4b894  bl #0x71ce9a0
0x043998A8: e00318aa  mov x0, x24
0x043998AC: e1031f2a  mov w1, wzr
0x043998B0: e20313aa  mov x2, x19
0x043998B4: b3031ef8  stur x19, [x29, #-0x20]
0x043998B8: 3ad4b894  bl #0x71ce9a0
0x043998BC: f30240f9  ldr x19, [x23]
0x043998C0: 531c00b4  cbz x19, #0x4399c48
0x043998C4: 2a970190  adrp x10, #0x767d000
0x043998C8: 680240f9  ldr x8, [x19]
0x043998CC: 4af945f9  ldr x10, [x10, #0xbf0]
0x043998D0: 095d4279  ldrh w9, [x8, #0x12e]
0x043998D4: 410140f9  ldr x1, [x10]
0x043998D8: 290100b4  cbz x9, #0x43998fc
0x043998DC: 0a5940f9  ldr x10, [x8, #0xb0]
0x043998E0: 4a210091  add x10, x10, #8
0x043998E4: 4b815ff8  ldur x11, [x10, #-8]
0x043998E8: 7f0101eb  cmp x11, x1
0x043998EC: 00010054  b.eq #0x439990c
0x043998F0: 290500f1  subs x9, x9, #1
0x043998F4: 4a410091  add x10, x10, #0x10
0x043998F8: 61ffff54  b.ne #0x43998e4
0x043998FC: e00313aa  mov x0, x19
0x04399900: e2031f2a  mov w2, wzr
0x04399904: 83f4b697  bl #0x3156b10
0x04399908: 04000014  b #0x4399918
0x0439990C: 490180b9  ldrsw x9, [x10]
0x04399910: 0811098b  add x8, x8, x9, lsl #4
0x04399914: 00e10491  add x0, x8, #0x138
0x04399918: 080440a9  ldp x8, x1, [x0]
0x0439991C: e00313aa  mov x0, x19
0x04399920: b8533da9  stp x24, x20, [x29, #-0x30]
0x04399924: 00013fd6  blr x8
0x04399928: f30300aa  mov x19, x0
0x0439992C: 001900b4  cbz x0, #0x4399c4c
0x04399930: bc9501b0  adrp x28, #0x764e000
0x04399934: 34970190  adrp x20, #0x767d000
0x04399938: 9c7344f9  ldr x28, [x28, #0x8e0]
0x0439993C: 94fe45f9  ldr x20, [x20, #0xbf8]
0x04399940: 680240f9  ldr x8, [x19]
0x04399944: 810340f9  ldr x1, [x28]
0x04399948: 095d4279  ldrh w9, [x8, #0x12e]
0x0439994C: 290100b4  cbz x9, #0x4399970
0x04399950: 0a5940f9  ldr x10, [x8, #0xb0]
0x04399954: 4a210091  add x10, x10, #8
0x04399958: 4b815ff8  ldur x11, [x10, #-8]
0x0439995C: 7f0101eb  cmp x11, x1
0x04399960: 00010054  b.eq #0x4399980
0x04399964: 290500f1  subs x9, x9, #1
0x04399968: 4a410091  add x10, x10, #0x10
0x0439996C: 61ffff54  b.ne #0x4399958
0x04399970: e00313aa  mov x0, x19
0x04399974: e2031f2a  mov w2, wzr
0x04399978: 66f4b697  bl #0x3156b10
0x0439997C: 04000014  b #0x439998c
0x04399980: 490180b9  ldrsw x9, [x10]
0x04399984: 0811098b  add x8, x8, x9, lsl #4
0x04399988: 00e10491  add x0, x8, #0x138
0x0439998C: 080440a9  ldp x8, x1, [x0]
0x04399990: e00313aa  mov x0, x19
0x04399994: 00013fd6  blr x8
0x04399998: 20100036  tbz w0, #0, #0x4399b9c
0x0439999C: 680240f9  ldr x8, [x19]
0x043999A0: 810240f9  ldr x1, [x20]
0x043999A4: 095d4279  ldrh w9, [x8, #0x12e]
0x043999A8: 290100b4  cbz x9, #0x43999cc
0x043999AC: 0a5940f9  ldr x10, [x8, #0xb0]
0x043999B0: 4a210091  add x10, x10, #8
0x043999B4: 4b815ff8  ldur x11, [x10, #-8]
0x043999B8: 7f0101eb  cmp x11, x1
0x043999BC: 00010054  b.eq #0x43999dc
0x043999C0: 290500f1  subs x9, x9, #1
0x043999C4: 4a410091  add x10, x10, #0x10
0x043999C8: 61ffff54  b.ne #0x43999b4
0x043999CC: e00313aa  mov x0, x19
0x043999D0: e2031f2a  mov w2, wzr
0x043999D4: 4ff4b697  bl #0x3156b10
0x043999D8: 04000014  b #0x43999e8
0x043999DC: 490180b9  ldrsw x9, [x10]
0x043999E0: 0811098b  add x8, x8, x9, lsl #4
0x043999E4: 00e10491  add x0, x8, #0x138
0x043999E8: 080440a9  ldp x8, x1, [x0]
0x043999EC: e00313aa  mov x0, x19
0x043999F0: 00013fd6  blr x8
0x043999F4: e80e40f9  ldr x8, [x23, #0x18]
0x043999F8: fa0300aa  mov x26, x0
0x043999FC: e80000b4  cbz x8, #0x4399a18
0x04399A00: 002140f9  ldr x0, [x8, #0x40]
0x04399A04: 090d40f9  ldr x9, [x8, #0x18]
0x04399A08: 021540f9  ldr x2, [x8, #0x28]
0x04399A0C: e1031aaa  mov x1, x26
0x04399A10: 20013fd6  blr x9
0x04399A14: 60f90737  tbnz w0, #0, #0x4399940
0x04399A18: fb0a40f9  ldr x27, [x23, #0x10]
0x04399A1C: 5b1100b4  cbz x27, #0x4399c44
0x04399A20: a01240f9  ldr x0, [x21, #0x20]
0x04399A24: 08d40491  add x8, x0, #0x135
0x04399A28: 09014079  ldrh w9, [x8]
0x04399A2C: e9000037  tbnz w9, #0, #0x4399a48
0x04399A30: 7bf3b697  bl #0x315681c
0x04399A34: e80300aa  mov x8, x0
0x04399A38: a01240f9  ldr x0, [x21, #0x20]
0x04399A3C: 09d40491  add x9, x0, #0x135
0x04399A40: 29014079  ldrh w9, [x9]
0x04399A44: 02000014  b #0x4399a4c
0x04399A48: e80300aa  mov x8, x0
0x04399A4C: 086140f9  ldr x8, [x8, #0xc0]
0x04399A50: 082d40f9  ldr x8, [x8, #0x58]
0x04399A54: 180140f9  ldr x24, [x8]
0x04399A58: 49000037  tbnz w9, #0, #0x4399a60
0x04399A5C: 70f3b697  bl #0x315681c
0x04399A60: 086040f9  ldr x8, [x0, #0xc0]
0x04399A64: 032d40f9  ldr x3, [x8, #0x58]
0x04399A68: e0031baa  mov x0, x27
0x04399A6C: e1031aaa  mov x1, x26
0x04399A70: e20319aa  mov x2, x25
0x04399A74: 00033fd6  blr x24
0x04399A78: 40f60736  tbz w0, #0, #0x4399940
0x04399A7C: a2035ef8  ldur x2, [x29, #-0x20]
0x04399A80: e00316aa  mov x0, x22
0x04399A84: e10319aa  mov x1, x25
0x04399A88: bad3b894  bl #0x71ce970
0x04399A8C: a01240f9  ldr x0, [x21, #0x20]
0x04399A90: 08d40491  add x8, x0, #0x135
0x04399A94: 09014079  ldrh w9, [x8]
0x04399A98: e9000037  tbnz w9, #0, #0x4399ab4
0x04399A9C: 60f3b697  bl #0x315681c
0x04399AA0: e80300aa  mov x8, x0
0x04399AA4: a01240f9  ldr x0, [x21, #0x20]
0x04399AA8: 09d40491  add x9, x0, #0x135
0x04399AAC: 29014079  ldrh w9, [x9]
0x04399AB0: 02000014  b #0x4399ab8
0x04399AB4: e80300aa  mov x8, x0
0x04399AB8: 086140f9  ldr x8, [x8, #0xc0]
0x04399ABC: 083140f9  ldr x8, [x8, #0x60]
0x04399AC0: 1a0140f9  ldr x26, [x8]
0x04399AC4: e9000037  tbnz w9, #0, #0x4399ae0
0x04399AC8: 55f3b697  bl #0x315681c
0x04399ACC: e80300aa  mov x8, x0
0x04399AD0: a01240f9  ldr x0, [x21, #0x20]
0x04399AD4: 09d40491  add x9, x0, #0x135
0x04399AD8: 29014079  ldrh w9, [x9]
0x04399ADC: 02000014  b #0x4399ae4
0x04399AE0: e80300aa  mov x8, x0
0x04399AE4: 086140f9  ldr x8, [x8, #0xc0]
0x04399AE8: 1b3140f9  ldr x27, [x8, #0x60]
0x04399AEC: 49000037  tbnz w9, #0, #0x4399af4
0x04399AF0: 4bf3b697  bl #0x315681c
0x04399AF4: 086040f9  ldr x8, [x0, #0xc0]
0x04399AF8: 082940f9  ldr x8, [x8, #0x50]
0x04399AFC: 092940b9  ldr w9, [x8, #0x28]
0x04399B00: e80316aa  mov x8, x22
0x04399B04: 4900f837  tbnz w9, #0x1f, #0x4399b0c
0x04399B08: c80240f9  ldr x8, [x22]
0x04399B0C: a8831ef8  stur x8, [x29, #-0x18]
0x04399B10: 680b40f9  ldr x8, [x27, #0x10]
0x04399B14: a36300d1  sub x3, x29, #0x18
0x04399B18: a43300d1  sub x4, x29, #0xc
0x04399B1C: e0031aaa  mov x0, x26
0x04399B20: e1031baa  mov x1, x27
0x04399B24: e20317aa  mov x2, x23
0x04399B28: 00013fd6  blr x8
0x04399B2C: a8435f38  ldurb w8, [x29, #-0xc]
0x04399B30: 88f0ff34  cbz w8, #0x4399940
0x04399B34: b7035ef8  ldur x23, [x29, #-0x20]
0x04399B38: e00316aa  mov x0, x22
0x04399B3C: e10319aa  mov x1, x25
0x04399B40: e20317aa  mov x2, x23
0x04399B44: 8bd3b894  bl #0x71ce970
0x04399B48: b4035df8  ldur x20, [x29, #-0x30]
0x04399B4C: e10316aa  mov x1, x22
0x04399B50: e20317aa  mov x2, x23
0x04399B54: e00314aa  mov x0, x20
0x04399B58: 86d3b894  bl #0x71ce970
0x04399B5C: a01240f9  ldr x0, [x21, #0x20]
0x04399B60: 08d44439  ldrb w8, [x0, #0x135]
0x04399B64: 48000037  tbnz w8, #0, #0x4399b6c
0x04399B68: 2df3b697  bl #0x315681c
0x04399B6C: 086040f9  ldr x8, [x0, #0xc0]
0x04399B70: 002940f9  ldr x0, [x8, #0x50]
0x04399B74: 08d44439  ldrb w8, [x0, #0x135]
0x04399B78: 48000037  tbnz w8, #0, #0x4399b80
0x04399B7C: 28f3b697  bl #0x315681c
0x04399B80: e10314aa  mov x1, x20
0x04399B84: e20316aa  mov x2, x22
0x04399B88: 909bb797  bl #0x31809c8
0x04399B8C: f4031faa  mov x20, xzr
0x04399B90: 35008052  movz w21, #0x1
0x04399B94: b30000b5  cbnz x19, #0x4399ba8
0x04399B98: 1c000014  b #0x4399c08
0x04399B9C: f4031faa  mov x20, xzr
0x04399BA0: f5031f2a  mov w21, wzr
0x04399BA4: 330300b4  cbz x19, #0x4399c08
0x04399BA8: 680240f9  ldr x8, [x19]
0x04399BAC: aa9501b0  adrp x10, #0x764e000
0x04399BB0: 095d4279  ldrh w9, [x8, #0x12e]
0x04399BB4: 4a6544f9  ldr x10, [x10, #0x8c8]
0x04399BB8: 410140f9  ldr x1, [x10]
0x04399BBC: 290100b4  cbz x9, #0x4399be0
0x04399BC0: 0a5940f9  ldr x10, [x8, #0xb0]
0x04399BC4: 4a210091  add x10, x10, #8
0x04399BC8: 4b815ff8  ldur x11, [x10, #-8]
0x04399BCC: 7f0101eb  cmp x11, x1
0x04399BD0: 00010054  b.eq #0x4399bf0
0x04399BD4: 290500f1  subs x9, x9, #1
0x04399BD8: 4a410091  add x10, x10, #0x10
0x04399BDC: 61ffff54  b.ne #0x4399bc8
0x04399BE0: e00313aa  mov x0, x19
0x04399BE4: e2031f2a  mov w2, wzr
0x04399BE8: caf3b697  bl #0x3156b10
0x04399BEC: 04000014  b #0x4399bfc
0x04399BF0: 490180b9  ldrsw x9, [x10]
0x04399BF4: 0811098b  add x8, x8, x9, lsl #4
0x04399BF8: 00e10491  add x0, x8, #0x138
0x04399BFC: 080440a9  ldp x8, x1, [x0]
0x04399C00: e00313aa  mov x0, x19
0x04399C04: 00013fd6  blr x8
0x04399C08: 540200b5  cbnz x20, #0x4399c50
0x04399C0C: a8835df8  ldur x8, [x29, #-0x28]
0x04399C10: 081540f9  ldr x8, [x8, #0x28]
0x04399C14: a9835ff8  ldur x9, [x29, #-8]
0x04399C18: 1f0109eb  cmp x8, x9
0x04399C1C: e1010054  b.ne #0x4399c58
0x04399C20: e003152a  mov w0, w21
0x04399C24: bf030091  mov sp, x29
0x04399C28: f44f45a9  ldp x20, x19, [sp, #0x50]
0x04399C2C: f65744a9  ldp x22, x21, [sp, #0x40]
0x04399C30: f85f43a9  ldp x24, x23, [sp, #0x30]
0x04399C34: fa6742a9  ldp x26, x25, [sp, #0x20]
0x04399C38: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x04399C3C: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x04399C40: c0035fd6  ret
0x04399C44: 1a9cb797  bl #0x3180cac
0x04399C48: 199cb797  bl #0x3180cac
0x04399C4C: 189cb797  bl #0x3180cac
0x04399C50: e00314aa  mov x0, x20
0x04399C54: 149cb797  bl #0x3180ca4
0x04399C58: 4ed3b894  bl #0x71ce990
0x04399C5C: 07000014  b #0x4399c78
0x04399C60: 06000014  b #0x4399c78
0x04399C64: 05000014  b #0x4399c78
0x04399C68: 04000014  b #0x4399c78
0x04399C6C: 03000014  b #0x4399c78
0x04399C70: 02000014  b #0x4399c78
0x04399C74: 01000014  b #0x4399c78
0x04399C78: f50300aa  mov x21, x0
0x04399C7C: 3f040071  cmp w1, #1
0x04399C80: c1000054  b.ne #0x4399c98
0x04399C84: e00315aa  mov x0, x21
0x04399C88: 22d3b894  bl #0x71ce910
0x04399C8C: 140040f9  ldr x20, [x0]
0x04399C90: 24d3b894  bl #0x71ce920
0x04399C94: c3ffff17  b #0x4399ba0
0x04399C98: f4031faa  mov x20, xzr
0x04399C9C: 02000014  b #0x4399ca4
0x04399CA0: f50300aa  mov x21, x0
0x04399CA4: 330300b4  cbz x19, #0x4399d08
0x04399CA8: 680240f9  ldr x8, [x19]
0x04399CAC: aa9501b0  adrp x10, #0x764e000
0x04399CB0: 095d4279  ldrh w9, [x8, #0x12e]
0x04399CB4: 4a6544f9  ldr x10, [x10, #0x8c8]
0x04399CB8: 410140f9  ldr x1, [x10]
0x04399CBC: 290100b4  cbz x9, #0x4399ce0
0x04399CC0: 0a5940f9  ldr x10, [x8, #0xb0]
0x04399CC4: 4a210091  add x10, x10, #8
0x04399CC8: 4b815ff8  ldur x11, [x10, #-8]
0x04399CCC: 7f0101eb  cmp x11, x1
0x04399CD0: 00010054  b.eq #0x4399cf0
0x04399CD4: 290500f1  subs x9, x9, #1
0x04399CD8: 4a410091  add x10, x10, #0x10
0x04399CDC: 61ffff54  b.ne #0x4399cc8
0x04399CE0: e00313aa  mov x0, x19
0x04399CE4: e2031f2a  mov w2, wzr
0x04399CE8: 8af3b697  bl #0x3156b10
0x04399CEC: 04000014  b #0x4399cfc
0x04399CF0: 490180b9  ldrsw x9, [x10]
0x04399CF4: 0811098b  add x8, x8, x9, lsl #4
0x04399CF8: 00e10491  add x0, x8, #0x138
0x04399CFC: 080440a9  ldp x8, x1, [x0]
0x04399D00: e00313aa  mov x0, x19
0x04399D04: 00013fd6  blr x8
0x04399D08: 740000b5  cbnz x20, #0x4399d14
0x04399D0C: e00315aa  mov x0, x21
0x04399D10: 122fbb97  bl #0x3265958
0x04399D14: e00314aa  mov x0, x20
0x04399D18: e39bb797  bl #0x3180ca4
0x04399D1C: febda997  bl #0x2e09514

; Generic instantiation from Il2CppDumper script.json | RVA 0x4399D20 | ContextualizedECS.Query.QueryExtensions.QueryBuilder<__Il2CppFullySharedGenericType>$$CheckPredicate
; native signature: bool ContextualizedECS_Query_QueryExtensions_QueryBuilder___Il2CppFullySharedGenericType___CheckPredicate (ContextualizedECS_Query_QueryExtensions_QueryBuilder_T1__o __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result, const MethodInfo_4399D20* method);
; bytes=396 sha256=d5081f4e274e8e1557a134d5bdc4a088ed137ed819e13fbb2620d1ac5d174ed8 status=arm64_complete_bound indexed_start=True
0x04399D20: fd7bbca9  stp x29, x30, [sp, #-0x40]!
0x04399D24: f85f01a9  stp x24, x23, [sp, #0x10]
0x04399D28: f65702a9  stp x22, x21, [sp, #0x20]
0x04399D2C: f44f03a9  stp x20, x19, [sp, #0x30]
0x04399D30: fd030091  mov x29, sp
0x04399D34: ff8300d1  sub sp, sp, #0x20
0x04399D38: 58d03bd5  mrs x24, tpidr_el0
0x04399D3C: 081740f9  ldr x8, [x24, #0x28]
0x04399D40: f50302aa  mov x21, x2
0x04399D44: f60301aa  mov x22, x1
0x04399D48: f30300aa  mov x19, x0
0x04399D4C: a8831ff8  stur x8, [x29, #-8]
0x04399D50: a1031ef8  stur x1, [x29, #-0x20]
0x04399D54: 481040f9  ldr x8, [x2, #0x20]
0x04399D58: 09d54439  ldrb w9, [x8, #0x135]
0x04399D5C: 89000037  tbnz w9, #0, #0x4399d6c
0x04399D60: e00308aa  mov x0, x8
0x04399D64: aef2b697  bl #0x315681c
0x04399D68: e80300aa  mov x8, x0
0x04399D6C: 086140f9  ldr x8, [x8, #0xc0]
0x04399D70: 082940f9  ldr x8, [x8, #0x50]
0x04399D74: 17fd40b9  ldr w23, [x8, #0xfc]
0x04399D78: e8030091  mov x8, sp
0x04399D7C: e93e0091  add x9, x23, #0xf
0x04399D80: 29717c92  and x9, x9, #0x1fffffff0
0x04399D84: 140109cb  sub x20, x8, x9
0x04399D88: 9f020091  mov sp, x20
0x04399D8C: 730640f9  ldr x19, [x19, #8]
0x04399D90: 130300b4  cbz x19, #0x4399df0
0x04399D94: a01240f9  ldr x0, [x21, #0x20]
0x04399D98: 08d44439  ldrb w8, [x0, #0x135]
0x04399D9C: 48000037  tbnz w8, #0, #0x4399da4
0x04399DA0: 9ff2b697  bl #0x315681c
0x04399DA4: 086040f9  ldr x8, [x0, #0xc0]
0x04399DA8: e00314aa  mov x0, x20
0x04399DAC: e20317aa  mov x2, x23
0x04399DB0: 082940f9  ldr x8, [x8, #0x50]
0x04399DB4: 082940b9  ldr w8, [x8, #0x28]
0x04399DB8: 1f010071  cmp w8, #0
0x04399DBC: a88300d1  sub x8, x29, #0x20
0x04399DC0: c1b2889a  csel x1, x22, x8, lt
0x04399DC4: ebd2b894  bl #0x71ce970
0x04399DC8: a81240f9  ldr x8, [x21, #0x20]
0x04399DCC: 09d50491  add x9, x8, #0x135
0x04399DD0: 29014079  ldrh w9, [x9]
0x04399DD4: 29010037  tbnz w9, #0, #0x4399df8
0x04399DD8: e00308aa  mov x0, x8
0x04399DDC: 90f2b697  bl #0x315681c
0x04399DE0: a81240f9  ldr x8, [x21, #0x20]
0x04399DE4: 09d50491  add x9, x8, #0x135
0x04399DE8: 29014079  ldrh w9, [x9]
0x04399DEC: 04000014  b #0x4399dfc
0x04399DF0: 20008052  movz w0, #0x1
0x04399DF4: 23000014  b #0x4399e80
0x04399DF8: e00308aa  mov x0, x8
0x04399DFC: 0a6040f9  ldr x10, [x0, #0xc0]
0x04399E00: 4a3940f9  ldr x10, [x10, #0x70]
0x04399E04: 560140f9  ldr x22, [x10]
0x04399E08: e9000037  tbnz w9, #0, #0x4399e24
0x04399E0C: e00308aa  mov x0, x8
0x04399E10: 83f2b697  bl #0x315681c
0x04399E14: a81240f9  ldr x8, [x21, #0x20]
0x04399E18: 09d50491  add x9, x8, #0x135
0x04399E1C: 29014079  ldrh w9, [x9]
0x04399E20: 02000014  b #0x4399e28
0x04399E24: e00308aa  mov x0, x8
0x04399E28: 0a6040f9  ldr x10, [x0, #0xc0]
0x04399E2C: 553940f9  ldr x21, [x10, #0x70]
0x04399E30: 89000037  tbnz w9, #0, #0x4399e40
0x04399E34: e00308aa  mov x0, x8
0x04399E38: 79f2b697  bl #0x315681c
0x04399E3C: e80300aa  mov x8, x0
0x04399E40: 086140f9  ldr x8, [x8, #0xc0]
0x04399E44: 082940f9  ldr x8, [x8, #0x50]
0x04399E48: 082940b9  ldr w8, [x8, #0x28]
0x04399E4C: 4800f837  tbnz w8, #0x1f, #0x4399e54
0x04399E50: 940240f9  ldr x20, [x20]
0x04399E54: b4831ef8  stur x20, [x29, #-0x18]
0x04399E58: a80a40f9  ldr x8, [x21, #0x10]
0x04399E5C: a36300d1  sub x3, x29, #0x18
0x04399E60: a43300d1  sub x4, x29, #0xc
0x04399E64: e00316aa  mov x0, x22
0x04399E68: e10315aa  mov x1, x21
0x04399E6C: e20313aa  mov x2, x19
0x04399E70: 00013fd6  blr x8
0x04399E74: a8435f38  ldurb w8, [x29, #-0xc]
0x04399E78: 1f010071  cmp w8, #0
0x04399E7C: e0079f1a  cset w0, ne
0x04399E80: 081740f9  ldr x8, [x24, #0x28]
0x04399E84: a9835ff8  ldur x9, [x29, #-8]
0x04399E88: 1f0109eb  cmp x8, x9
0x04399E8C: e1000054  b.ne #0x4399ea8
0x04399E90: bf030091  mov sp, x29
0x04399E94: f44f43a9  ldp x20, x19, [sp, #0x30]
0x04399E98: f65742a9  ldp x22, x21, [sp, #0x20]
0x04399E9C: f85f41a9  ldp x24, x23, [sp, #0x10]
0x04399EA0: fd7bc4a8  ldp x29, x30, [sp], #0x40
0x04399EA4: c0035fd6  ret
0x04399EA8: bad2b894  bl #0x71ce990

