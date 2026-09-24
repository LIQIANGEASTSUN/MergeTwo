; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 606 MergeEngine.ECS.Util.ComponentSerializationUtil
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; Generic instantiation from Il2CppDumper script.json | RVA 0x3BEE478 | MergeEngine.ECS.Util.ComponentSerializationUtil$$TryDeserialize<bool>
; native signature: bool MergeEngine_ECS_Util_ComponentSerializationUtil__TryDeserialize_bool_ (System_Collections_Generic_Dictionary_string__string__o* entity, System_String_o* key, bool defaultValue, System_Func_string__T__o* convertFunction, const MethodInfo_3BEE478* method);
; bytes=252 sha256=b1567c3c4083b6103198360353fb42c36b3e8ae4d58808f1a17aecfe5f1d3a79 status=arm64_complete_bound indexed_start=True
0x03BEE478: ff0301d1  sub sp, sp, #0x40
0x03BEE47C: fe5f01a9  stp x30, x23, [sp, #0x10]
0x03BEE480: f65702a9  stp x22, x21, [sp, #0x20]
0x03BEE484: f44f03a9  stp x20, x19, [sp, #0x30]
0x03BEE488: 881c40f9  ldr x8, [x4, #0x38]
0x03BEE48C: f50304aa  mov x21, x4
0x03BEE490: f40303aa  mov x20, x3
0x03BEE494: f303022a  mov w19, w2
0x03BEE498: f60301aa  mov x22, x1
0x03BEE49C: f70300aa  mov x23, x0
0x03BEE4A0: 080100b5  cbnz x8, #0x3bee4c0
0x03BEE4A4: 00d301d0  adrp x0, #0x7650000
0x03BEE4A8: 002843f9  ldr x0, [x0, #0x650]
0x03BEE4AC: 5b49d697  bl #0x3180a18
0x03BEE4B0: a81e40f9  ldr x8, [x21, #0x38]
0x03BEE4B4: 680000b5  cbnz x8, #0x3bee4c0
0x03BEE4B8: e00315aa  mov x0, x21
0x03BEE4BC: efa0d597  bl #0x3156878
0x03BEE4C0: ff0700f9  str xzr, [sp, #8]
0x03BEE4C4: 970400b4  cbz x23, #0x3bee554
0x03BEE4C8: 08d301d0  adrp x8, #0x7650000
0x03BEE4CC: 082943f9  ldr x8, [x8, #0x650]
0x03BEE4D0: e2230091  add x2, sp, #8
0x03BEE4D4: e00317aa  mov x0, x23
0x03BEE4D8: e10316aa  mov x1, x22
0x03BEE4DC: 030140f9  ldr x3, [x8]
0x03BEE4E0: f4d84b94  bl #0x4ee48b0
0x03BEE4E4: 80030036  tbz w0, #0, #0x3bee554
0x03BEE4E8: 140100b4  cbz x20, #0x3bee508
0x03BEE4EC: e10740f9  ldr x1, [sp, #8]
0x03BEE4F0: 880e40f9  ldr x8, [x20, #0x18]
0x03BEE4F4: 802240f9  ldr x0, [x20, #0x40]
0x03BEE4F8: 821640f9  ldr x2, [x20, #0x28]
0x03BEE4FC: 00013fd6  blr x8
0x03BEE500: f303002a  mov w19, w0
0x03BEE504: 14000014  b #0x3bee554
0x03BEE508: a81e40f9  ldr x8, [x21, #0x38]
0x03BEE50C: f30740f9  ldr x19, [sp, #8]
0x03BEE510: 010140f9  ldr x1, [x8]
0x03BEE514: 28d44439  ldrb w8, [x1, #0x135]
0x03BEE518: 88000037  tbnz w8, #0, #0x3bee528
0x03BEE51C: e00301aa  mov x0, x1
0x03BEE520: bfa0d597  bl #0x315681c
0x03BEE524: e10300aa  mov x1, x0
0x03BEE528: 330200b4  cbz x19, #0x3bee56c
0x03BEE52C: 680240f9  ldr x8, [x19]
0x03BEE530: 292040f9  ldr x9, [x1, #0x40]
0x03BEE534: e00313aa  mov x0, x19
0x03BEE538: 082140f9  ldr x8, [x8, #0x40]
0x03BEE53C: 1f0109eb  cmp x8, x9
0x03BEE540: 81010054  b.ne #0x3bee570
0x03BEE544: 9549d697  bl #0x3180b98
0x03BEE548: 08004039  ldrb w8, [x0]
0x03BEE54C: 1f010071  cmp w8, #0
0x03BEE550: f3079f1a  cset w19, ne
0x03BEE554: 60020012  and w0, w19, #1
0x03BEE558: f44f43a9  ldp x20, x19, [sp, #0x30]
0x03BEE55C: f65742a9  ldp x22, x21, [sp, #0x20]
0x03BEE560: fe5f41a9  ldp x30, x23, [sp, #0x10]
0x03BEE564: ff030191  add sp, sp, #0x40
0x03BEE568: c0035fd6  ret
0x03BEE56C: d049d697  bl #0x3180cac
0x03BEE570: b64ad697  bl #0x3181048

; Generic instantiation from Il2CppDumper script.json | RVA 0x3BEE574 | MergeEngine.ECS.Util.ComponentSerializationUtil$$TryDeserialize<object>
; native signature: Il2CppObject* MergeEngine_ECS_Util_ComponentSerializationUtil__TryDeserialize_object_ (System_Collections_Generic_Dictionary_string__string__o* entity, System_String_o* key, Il2CppObject* defaultValue, System_Func_string__T__o* convertFunction, const MethodInfo_3BEE574* method);
; bytes=240 sha256=4df758cdbe32731646217b663657ee5e6f2e540d7b3e7b175ffe18774d0397c6 status=arm64_complete_bound indexed_start=True
0x03BEE574: ff0301d1  sub sp, sp, #0x40
0x03BEE578: fe5f01a9  stp x30, x23, [sp, #0x10]
0x03BEE57C: f65702a9  stp x22, x21, [sp, #0x20]
0x03BEE580: f44f03a9  stp x20, x19, [sp, #0x30]
0x03BEE584: 881c40f9  ldr x8, [x4, #0x38]
0x03BEE588: f50304aa  mov x21, x4
0x03BEE58C: f40303aa  mov x20, x3
0x03BEE590: f30302aa  mov x19, x2
0x03BEE594: f60301aa  mov x22, x1
0x03BEE598: f70300aa  mov x23, x0
0x03BEE59C: 080100b5  cbnz x8, #0x3bee5bc
0x03BEE5A0: 00d301d0  adrp x0, #0x7650000
0x03BEE5A4: 002843f9  ldr x0, [x0, #0x650]
0x03BEE5A8: 1c49d697  bl #0x3180a18
0x03BEE5AC: a81e40f9  ldr x8, [x21, #0x38]
0x03BEE5B0: 680000b5  cbnz x8, #0x3bee5bc
0x03BEE5B4: e00315aa  mov x0, x21
0x03BEE5B8: b0a0d597  bl #0x3156878
0x03BEE5BC: ff0700f9  str xzr, [sp, #8]
0x03BEE5C0: 770400b4  cbz x23, #0x3bee64c
0x03BEE5C4: 08d301d0  adrp x8, #0x7650000
0x03BEE5C8: 082943f9  ldr x8, [x8, #0x650]
0x03BEE5CC: e2230091  add x2, sp, #8
0x03BEE5D0: e00317aa  mov x0, x23
0x03BEE5D4: e10316aa  mov x1, x22
0x03BEE5D8: 030140f9  ldr x3, [x8]
0x03BEE5DC: b5d84b94  bl #0x4ee48b0
0x03BEE5E0: 60030036  tbz w0, #0, #0x3bee64c
0x03BEE5E4: 140100b4  cbz x20, #0x3bee604
0x03BEE5E8: e10740f9  ldr x1, [sp, #8]
0x03BEE5EC: 880e40f9  ldr x8, [x20, #0x18]
0x03BEE5F0: 802240f9  ldr x0, [x20, #0x40]
0x03BEE5F4: 821640f9  ldr x2, [x20, #0x28]
0x03BEE5F8: 00013fd6  blr x8
0x03BEE5FC: f30300aa  mov x19, x0
0x03BEE600: 13000014  b #0x3bee64c
0x03BEE604: a81e40f9  ldr x8, [x21, #0x38]
0x03BEE608: f50740f9  ldr x21, [sp, #8]
0x03BEE60C: 140140f9  ldr x20, [x8]
0x03BEE610: 88d64439  ldrb w8, [x20, #0x135]
0x03BEE614: 88000037  tbnz w8, #0, #0x3bee624
0x03BEE618: e00314aa  mov x0, x20
0x03BEE61C: 80a0d597  bl #0x315681c
0x03BEE620: f40300aa  mov x20, x0
0x03BEE624: 350100b4  cbz x21, #0x3bee648
0x03BEE628: e00315aa  mov x0, x21
0x03BEE62C: e10314aa  mov x1, x20
0x03BEE630: 5849d697  bl #0x3180b90
0x03BEE634: f30300aa  mov x19, x0
0x03BEE638: a00000b5  cbnz x0, #0x3bee64c
0x03BEE63C: e00315aa  mov x0, x21
0x03BEE640: e10314aa  mov x1, x20
0x03BEE644: 814ad697  bl #0x3181048
0x03BEE648: f3031faa  mov x19, xzr
0x03BEE64C: e00313aa  mov x0, x19
0x03BEE650: f44f43a9  ldp x20, x19, [sp, #0x30]
0x03BEE654: f65742a9  ldp x22, x21, [sp, #0x20]
0x03BEE658: fe5f41a9  ldp x30, x23, [sp, #0x10]
0x03BEE65C: ff030191  add sp, sp, #0x40
0x03BEE660: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3BEE664 | MergeEngine.ECS.Util.ComponentSerializationUtil$$TryDeserialize<__Il2CppFullySharedGenericType>
; native signature: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o MergeEngine_ECS_Util_ComponentSerializationUtil__TryDeserialize___Il2CppFullySharedGenericType_ (System_Collections_Generic_Dictionary_string__string__o* entity, System_String_o* key, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o defaultValue, System_Func_string__T__o* convertFunction, const MethodInfo_3BEE664* method);
; bytes=388 sha256=ce401f37dafd7396e8322ac01ce9f52811297699c6581ddd7f262f2bccc385be status=arm64_complete_bound indexed_start=True
0x03BEE664: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x03BEE668: fb0b00f9  str x27, [sp, #0x10]
0x03BEE66C: fa6702a9  stp x26, x25, [sp, #0x20]
0x03BEE670: f85f03a9  stp x24, x23, [sp, #0x30]
0x03BEE674: f65704a9  stp x22, x21, [sp, #0x40]
0x03BEE678: f44f05a9  stp x20, x19, [sp, #0x50]
0x03BEE67C: fd030091  mov x29, sp
0x03BEE680: ffc300d1  sub sp, sp, #0x30
0x03BEE684: 5bd03bd5  mrs x27, tpidr_el0
0x03BEE688: 681740f9  ldr x8, [x27, #0x28]
0x03BEE68C: f70305aa  mov x23, x5
0x03BEE690: f30304aa  mov x19, x4
0x03BEE694: f60303aa  mov x22, x3
0x03BEE698: a8831ff8  stur x8, [x29, #-8]
0x03BEE69C: a2031ef8  stur x2, [x29, #-0x20]
0x03BEE6A0: a81c40f9  ldr x8, [x5, #0x38]
0x03BEE6A4: f80302aa  mov x24, x2
0x03BEE6A8: f90301aa  mov x25, x1
0x03BEE6AC: fa0300aa  mov x26, x0
0x03BEE6B0: 280100b5  cbnz x8, #0x3bee6d4
0x03BEE6B4: 00d301d0  adrp x0, #0x7650000
0x03BEE6B8: 002843f9  ldr x0, [x0, #0x650]
0x03BEE6BC: d748d697  bl #0x3180a18
0x03BEE6C0: e81e40f9  ldr x8, [x23, #0x38]
0x03BEE6C4: 880000b5  cbnz x8, #0x3bee6d4
0x03BEE6C8: e00317aa  mov x0, x23
0x03BEE6CC: 6ba0d597  bl #0x3156878
0x03BEE6D0: e81e40f9  ldr x8, [x23, #0x38]
0x03BEE6D4: 090140f9  ldr x9, [x8]
0x03BEE6D8: 34fd40b9  ldr w20, [x9, #0xfc]
0x03BEE6DC: e9030091  mov x9, sp
0x03BEE6E0: 8a3e0091  add x10, x20, #0xf
0x03BEE6E4: 4a717c92  and x10, x10, #0x1fffffff0
0x03BEE6E8: 35010acb  sub x21, x9, x10
0x03BEE6EC: bf020091  mov sp, x21
0x03BEE6F0: bf831df8  stur xzr, [x29, #-0x28]
0x03BEE6F4: da0200b4  cbz x26, #0x3bee74c
0x03BEE6F8: 08d301d0  adrp x8, #0x7650000
0x03BEE6FC: 082943f9  ldr x8, [x8, #0x650]
0x03BEE700: a2a300d1  sub x2, x29, #0x28
0x03BEE704: e0031aaa  mov x0, x26
0x03BEE708: e10319aa  mov x1, x25
0x03BEE70C: 030140f9  ldr x3, [x8]
0x03BEE710: 68d84b94  bl #0x4ee48b0
0x03BEE714: a0010036  tbz w0, #0, #0x3bee748
0x03BEE718: b60400b4  cbz x22, #0x3bee7ac
0x03BEE71C: e81e40f9  ldr x8, [x23, #0x38]
0x03BEE720: a36300d1  sub x3, x29, #0x18
0x03BEE724: e20316aa  mov x2, x22
0x03BEE728: e40315aa  mov x4, x21
0x03BEE72C: 010940f9  ldr x1, [x8, #0x10]
0x03BEE730: a8835df8  ldur x8, [x29, #-0x28]
0x03BEE734: 200040f9  ldr x0, [x1]
0x03BEE738: a8d73ea9  stp x8, x21, [x29, #-0x18]
0x03BEE73C: 280840f9  ldr x8, [x1, #0x10]
0x03BEE740: 00013fd6  blr x8
0x03BEE744: 0a000014  b #0x3bee76c
0x03BEE748: e81e40f9  ldr x8, [x23, #0x38]
0x03BEE74C: 080140f9  ldr x8, [x8]
0x03BEE750: e00315aa  mov x0, x21
0x03BEE754: e20314aa  mov x2, x20
0x03BEE758: 082940b9  ldr w8, [x8, #0x28]
0x03BEE75C: 1f010071  cmp w8, #0
0x03BEE760: a88300d1  sub x8, x29, #0x20
0x03BEE764: 01b3889a  csel x1, x24, x8, lt
0x03BEE768: 8280d794  bl #0x71ce970
0x03BEE76C: e00313aa  mov x0, x19
0x03BEE770: e10315aa  mov x1, x21
0x03BEE774: e20314aa  mov x2, x20
0x03BEE778: 7e80d794  bl #0x71ce970
0x03BEE77C: 681740f9  ldr x8, [x27, #0x28]
0x03BEE780: a9835ff8  ldur x9, [x29, #-8]
0x03BEE784: 1f0109eb  cmp x8, x9
0x03BEE788: e1020054  b.ne #0x3bee7e4
0x03BEE78C: bf030091  mov sp, x29
0x03BEE790: f44f45a9  ldp x20, x19, [sp, #0x50]
0x03BEE794: f65744a9  ldp x22, x21, [sp, #0x40]
0x03BEE798: f85f43a9  ldp x24, x23, [sp, #0x30]
0x03BEE79C: fa6742a9  ldp x26, x25, [sp, #0x20]
0x03BEE7A0: fb0b40f9  ldr x27, [sp, #0x10]
0x03BEE7A4: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x03BEE7A8: c0035fd6  ret
0x03BEE7AC: e81e40f9  ldr x8, [x23, #0x38]
0x03BEE7B0: b6835df8  ldur x22, [x29, #-0x28]
0x03BEE7B4: 010140f9  ldr x1, [x8]
0x03BEE7B8: 28d44439  ldrb w8, [x1, #0x135]
0x03BEE7BC: 88000037  tbnz w8, #0, #0x3bee7cc
0x03BEE7C0: e00301aa  mov x0, x1
0x03BEE7C4: 16a0d597  bl #0x315681c
0x03BEE7C8: e10300aa  mov x1, x0
0x03BEE7CC: e00316aa  mov x0, x22
0x03BEE7D0: e20315aa  mov x2, x21
0x03BEE7D4: f348d697  bl #0x3180ba0
0x03BEE7D8: e10300aa  mov x1, x0
0x03BEE7DC: e00313aa  mov x0, x19
0x03BEE7E0: e5ffff17  b #0x3bee774
0x03BEE7E4: 6b80d794  bl #0x71ce990

