; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25778 .SystemsZenjectExtension.SystemsBuilderWithContext
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A765B8 | public void .ctor(SystemsBuilder builder, DiContainer container) { }
; bytes=52 sha256=c88c55499db1f97bf69bc05edae8aceffe697c9582aaf49c8566acb9113b86d3 status=arm64_complete_bound indexed_start=True
0x06A765B8: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A765BC: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A765C0: f30301aa  mov x19, x1
0x06A765C4: e10302aa  mov x1, x2
0x06A765C8: f40300aa  mov x20, x0
0x06A765CC: 020000f9  str x2, [x0]
0x06A765D0: fd281c97  bl #0x31809c4
0x06A765D4: 938e00f8  str x19, [x20, #8]!
0x06A765D8: e00314aa  mov x0, x20
0x06A765DC: e10313aa  mov x1, x19
0x06A765E0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A765E4: fe0742f8  ldr x30, [sp], #0x20
0x06A765E8: f7281c17  b #0x31809c4

; Generic instantiation from Il2CppDumper script.json | RVA 0x3E5714C | Merger.MergeBoard.Systems.SystemsZenjectExtension.SystemsBuilderWithContext$$Register<object>
; native signature: ContextualizedECS_Systems_SystemInfo_o* Merger_MergeBoard_Systems_SystemsZenjectExtension_SystemsBuilderWithContext__Register_object_ (Merger_MergeBoard_Systems_SystemsZenjectExtension_SystemsBuilderWithContext_o __this, const MethodInfo_3E5714C* method);
; bytes=88 sha256=f1813543b0b2df6eff9d440c790afd97ddd910d9059173a9dddadec1176c11e6 status=arm64_complete_bound indexed_start=True
0x03E5714C: fe0f1ef8  str x30, [sp, #-0x20]!
0x03E57150: f44f01a9  stp x20, x19, [sp, #0x10]
0x03E57154: 281c40f9  ldr x8, [x1, #0x38]
0x03E57158: f30301aa  mov x19, x1
0x03E5715C: f40300aa  mov x20, x0
0x03E57160: 680000b5  cbnz x8, #0x3e5716c
0x03E57164: e00313aa  mov x0, x19
0x03E57168: c4fdcb97  bl #0x3156878
0x03E5716C: 800240f9  ldr x0, [x20]
0x03E57170: 800100b4  cbz x0, #0x3e571a0
0x03E57174: 681e40f9  ldr x8, [x19, #0x38]
0x03E57178: 940640f9  ldr x20, [x20, #8]
0x03E5717C: 010140f9  ldr x1, [x8]
0x03E57180: cbb6f697  bl #0x3c04cac
0x03E57184: 681e40f9  ldr x8, [x19, #0x38]
0x03E57188: e10300aa  mov x1, x0
0x03E5718C: e00314aa  mov x0, x20
0x03E57190: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03E57194: 020940f9  ldr x2, [x8, #0x10]
0x03E57198: fe0742f8  ldr x30, [sp], #0x20
0x03E5719C: 357ffd17  b #0x3db6e70
0x03E571A0: c3a6cc97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3E571A4 | Merger.MergeBoard.Systems.SystemsZenjectExtension.SystemsBuilderWithContext$$Register<__Il2CppFullySharedGenericType>
; native signature: ContextualizedECS_Systems_SystemInfo_o* Merger_MergeBoard_Systems_SystemsZenjectExtension_SystemsBuilderWithContext__Register___Il2CppFullySharedGenericType_ (Merger_MergeBoard_Systems_SystemsZenjectExtension_SystemsBuilderWithContext_o __this, const MethodInfo_3E571A4* method);
; bytes=224 sha256=e83369f94be5ca6f51050def74214464916652fa1d43acbe5683b56e3a92b75b status=arm64_complete_bound indexed_start=True
0x03E571A4: fd7bbda9  stp x29, x30, [sp, #-0x30]!
0x03E571A8: f65701a9  stp x22, x21, [sp, #0x10]
0x03E571AC: f44f02a9  stp x20, x19, [sp, #0x20]
0x03E571B0: fd030091  mov x29, sp
0x03E571B4: ff8300d1  sub sp, sp, #0x20
0x03E571B8: 56d03bd5  mrs x22, tpidr_el0
0x03E571BC: c81640f9  ldr x8, [x22, #0x28]
0x03E571C0: f30301aa  mov x19, x1
0x03E571C4: f50300aa  mov x21, x0
0x03E571C8: a8831ff8  stur x8, [x29, #-8]
0x03E571CC: 281c40f9  ldr x8, [x1, #0x38]
0x03E571D0: 880000b5  cbnz x8, #0x3e571e0
0x03E571D4: e00313aa  mov x0, x19
0x03E571D8: a8fdcb97  bl #0x3156878
0x03E571DC: 681e40f9  ldr x8, [x19, #0x38]
0x03E571E0: 090540f9  ldr x9, [x8, #8]
0x03E571E4: ea030091  mov x10, sp
0x03E571E8: 29fd40b9  ldr w9, [x9, #0xfc]
0x03E571EC: 293d0091  add x9, x9, #0xf
0x03E571F0: 29717c92  and x9, x9, #0x1fffffff0
0x03E571F4: 540109cb  sub x20, x10, x9
0x03E571F8: 9f020091  mov sp, x20
0x03E571FC: a20240f9  ldr x2, [x21]
0x03E57200: e20300b4  cbz x2, #0x3e5727c
0x03E57204: 010140f9  ldr x1, [x8]
0x03E57208: b50640f9  ldr x21, [x21, #8]
0x03E5720C: a38300d1  sub x3, x29, #0x20
0x03E57210: e40314aa  mov x4, x20
0x03E57214: 200040f9  ldr x0, [x1]
0x03E57218: b4031ef8  stur x20, [x29, #-0x20]
0x03E5721C: 280840f9  ldr x8, [x1, #0x10]
0x03E57220: 00013fd6  blr x8
0x03E57224: 681e40f9  ldr x8, [x19, #0x38]
0x03E57228: 098540a9  ldp x9, x1, [x8, #8]
0x03E5722C: 282940b9  ldr w8, [x9, #0x28]
0x03E57230: 200040f9  ldr x0, [x1]
0x03E57234: 4800f837  tbnz w8, #0x1f, #0x3e5723c
0x03E57238: 940240f9  ldr x20, [x20]
0x03E5723C: b5533ea9  stp x21, x20, [x29, #-0x20]
0x03E57240: 280840f9  ldr x8, [x1, #0x10]
0x03E57244: a38300d1  sub x3, x29, #0x20
0x03E57248: a44300d1  sub x4, x29, #0x10
0x03E5724C: e2031faa  mov x2, xzr
0x03E57250: 00013fd6  blr x8
0x03E57254: a0035ff8  ldur x0, [x29, #-0x10]
0x03E57258: c81640f9  ldr x8, [x22, #0x28]
0x03E5725C: a9835ff8  ldur x9, [x29, #-8]
0x03E57260: 1f0109eb  cmp x8, x9
0x03E57264: e1000054  b.ne #0x3e57280
0x03E57268: bf030091  mov sp, x29
0x03E5726C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03E57270: f65741a9  ldp x22, x21, [sp, #0x10]
0x03E57274: fd7bc3a8  ldp x29, x30, [sp], #0x30
0x03E57278: c0035fd6  ret
0x03E5727C: 8ca6cc97  bl #0x3180cac
0x03E57280: c4ddcd94  bl #0x71ce990

