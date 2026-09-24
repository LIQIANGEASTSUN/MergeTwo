; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 116 .TwoDArray.<>c__DisplayClass17_0<T>
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; Generic instantiation from Il2CppDumper script.json | RVA 0x3F3F7A0 | MergeEngine.Util.TwoDArray.<>c__DisplayClass17_0<object>$$.ctor
; native signature: void MergeEngine_Util_TwoDArray___c__DisplayClass17_0_object____ctor (MergeEngine_Util_TwoDArray___c__DisplayClass17_0_T__o* __this, const MethodInfo_3F3F7A0* method);
; bytes=8 sha256=94be880abeffbe6397553ecde067cb4e227dab01dd029eb6d478274467643758 status=arm64_complete_bound indexed_start=True
0x03F3F7A0: e1031faa  mov x1, xzr
0x03F3F7A4: 966b5e14  b #0x56da5fc

; Generic instantiation from Il2CppDumper script.json | RVA 0x3F3F7A8 | MergeEngine.Util.TwoDArray.<>c__DisplayClass17_0<object>$$<ForEach>b__0
; native signature: void MergeEngine_Util_TwoDArray___c__DisplayClass17_0_object____ForEach_b__0 (MergeEngine_Util_TwoDArray___c__DisplayClass17_0_T__o* __this, System_Object_array* array, const MethodInfo_3F3F7A8* method);
; bytes=140 sha256=82433518234b7978b3979c2d0fbfcafe99870b8af4f950c5960537e935770802 status=arm64_complete_bound indexed_start=True
0x03F3F7A8: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x03F3F7AC: f65701a9  stp x22, x21, [sp, #0x10]
0x03F3F7B0: f44f02a9  stp x20, x19, [sp, #0x20]
0x03F3F7B4: f50300aa  mov x21, x0
0x03F3F7B8: b78e41f8  ldr x23, [x21, #0x18]!
0x03F3F7BC: f30302aa  mov x19, x2
0x03F3F7C0: f40301aa  mov x20, x1
0x03F3F7C4: 770200b5  cbnz x23, #0x3f3f810
0x03F3F7C8: 681240f9  ldr x8, [x19, #0x20]
0x03F3F7CC: f60300aa  mov x22, x0
0x03F3F7D0: 086140f9  ldr x8, [x8, #0xc0]
0x03F3F7D4: 000940f9  ldr x0, [x8, #0x10]
0x03F3F7D8: 08d44439  ldrb w8, [x0, #0x135]
0x03F3F7DC: 48000037  tbnz w8, #0, #0x3f3f7e4
0x03F3F7E0: 0f5cc897  bl #0x315681c
0x03F3F7E4: 2f05c997  bl #0x3180ca0
0x03F3F7E8: 681240f9  ldr x8, [x19, #0x20]
0x03F3F7EC: e10316aa  mov x1, x22
0x03F3F7F0: f70300aa  mov x23, x0
0x03F3F7F4: 086140f9  ldr x8, [x8, #0xc0]
0x03F3F7F8: 028d41a9  ldp x2, x3, [x8, #0x18]
0x03F3F7FC: 768a4f94  bl #0x53221d4
0x03F3F800: e00315aa  mov x0, x21
0x03F3F804: e10317aa  mov x1, x23
0x03F3F808: d70e00f9  str x23, [x22, #0x18]
0x03F3F80C: 6e04c997  bl #0x31809c4
0x03F3F810: 681240f9  ldr x8, [x19, #0x20]
0x03F3F814: e00314aa  mov x0, x20
0x03F3F818: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03F3F81C: f65741a9  ldp x22, x21, [sp, #0x10]
0x03F3F820: 086140f9  ldr x8, [x8, #0xc0]
0x03F3F824: e10317aa  mov x1, x23
0x03F3F828: 021540f9  ldr x2, [x8, #0x28]
0x03F3F82C: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x03F3F830: 0a3ef717  b #0x3d0f058

; Generic instantiation from Il2CppDumper script.json | RVA 0x3F3F834 | MergeEngine.Util.TwoDArray.<>c__DisplayClass17_0<object>$$<ForEach>b__1
; native signature: void MergeEngine_Util_TwoDArray___c__DisplayClass17_0_object____ForEach_b__1 (MergeEngine_Util_TwoDArray___c__DisplayClass17_0_T__o* __this, Il2CppObject* item, const MethodInfo_3F3F834* method);
; bytes=48 sha256=ae606817cd6adcef0df895d295e3d87e6c6461db1e9e1b62f16cc11904cb7651 status=arm64_complete_bound indexed_start=True
0x03F3F834: fe0f1ff8  str x30, [sp, #-0x10]!
0x03F3F838: 010100b4  cbz x1, #0x3f3f858
0x03F3F83C: 080840f9  ldr x8, [x0, #0x10]
0x03F3F840: 080100b4  cbz x8, #0x3f3f860
0x03F3F844: 030d40f9  ldr x3, [x8, #0x18]
0x03F3F848: 002140f9  ldr x0, [x8, #0x40]
0x03F3F84C: 021540f9  ldr x2, [x8, #0x28]
0x03F3F850: fe0741f8  ldr x30, [sp], #0x10
0x03F3F854: 60001fd6  br x3
0x03F3F858: fe0741f8  ldr x30, [sp], #0x10
0x03F3F85C: c0035fd6  ret
0x03F3F860: 1305c997  bl #0x3180cac

