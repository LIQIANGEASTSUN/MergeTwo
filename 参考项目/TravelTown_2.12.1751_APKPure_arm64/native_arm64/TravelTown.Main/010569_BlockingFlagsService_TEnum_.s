; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 10569 Framework.Core.Services.BlockingFlagsService<TEnum>
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C1693C | Framework.Core.Services.BlockingFlagsService<Int32Enum>$$get_Enabled
; native signature: Framework_Core_DataBinding_BindableProperty_bool__o* Framework_Core_Services_BlockingFlagsService_Int32Enum___get_Enabled (Framework_Core_Services_BlockingFlagsService_TEnum__o* __this, const MethodInfo_4C1693C* method);
; bytes=136 sha256=cc34d78bbc6eb8f471428b341fbd987abdddd2e5081a2f0ea9493cb432c7df18 status=arm64_complete_bound indexed_start=True
0x04C1693C: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x04C16940: 131440f9  ldr x19, [x0, #0x28]
0x04C16944: f30300b4  cbz x19, #0x4c169c0
0x04C16948: 281040f9  ldr x8, [x1, #0x20]
0x04C1694C: 086140f9  ldr x8, [x8, #0xc0]
0x04C16950: 010540f9  ldr x1, [x8, #8]
0x04C16954: 28d44439  ldrb w8, [x1, #0x135]
0x04C16958: 88000037  tbnz w8, #0, #0x4c16968
0x04C1695C: e00301aa  mov x0, x1
0x04C16960: afff9497  bl #0x315681c
0x04C16964: e10300aa  mov x1, x0
0x04C16968: 680240f9  ldr x8, [x19]
0x04C1696C: 095d4279  ldrh w9, [x8, #0x12e]
0x04C16970: 290100b4  cbz x9, #0x4c16994
0x04C16974: 0a5940f9  ldr x10, [x8, #0xb0]
0x04C16978: 4a210091  add x10, x10, #8
0x04C1697C: 4b815ff8  ldur x11, [x10, #-8]
0x04C16980: 7f0101eb  cmp x11, x1
0x04C16984: 00010054  b.eq #0x4c169a4
0x04C16988: 290500f1  subs x9, x9, #1
0x04C1698C: 4a410091  add x10, x10, #0x10
0x04C16990: 61ffff54  b.ne #0x4c1697c
0x04C16994: e00313aa  mov x0, x19
0x04C16998: e2031f2a  mov w2, wzr
0x04C1699C: 5d009597  bl #0x3156b10
0x04C169A0: 04000014  b #0x4c169b0
0x04C169A4: 490180b9  ldrsw x9, [x10]
0x04C169A8: 0811098b  add x8, x8, x9, lsl #4
0x04C169AC: 00e10491  add x0, x8, #0x138
0x04C169B0: 020440a9  ldp x2, x1, [x0]
0x04C169B4: e00313aa  mov x0, x19
0x04C169B8: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x04C169BC: 40001fd6  br x2
0x04C169C0: bba89597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C16D44 | Framework.Core.Services.BlockingFlagsService<__Il2CppFullySharedGenericStructType>$$get_Enabled
; native signature: Framework_Core_DataBinding_BindableProperty_bool__o* Framework_Core_Services_BlockingFlagsService___Il2CppFullySharedGenericStructType___get_Enabled (Framework_Core_Services_BlockingFlagsService_TEnum__o* __this, const MethodInfo_4C16D44* method);
; bytes=136 sha256=e319fa08991f55078c27ec1145d42b5a6fb5368b128dc7324bf202ceb203c978 status=arm64_complete_bound indexed_start=True
0x04C16D44: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x04C16D48: 131440f9  ldr x19, [x0, #0x28]
0x04C16D4C: f30300b4  cbz x19, #0x4c16dc8
0x04C16D50: 281040f9  ldr x8, [x1, #0x20]
0x04C16D54: 086140f9  ldr x8, [x8, #0xc0]
0x04C16D58: 010540f9  ldr x1, [x8, #8]
0x04C16D5C: 28d44439  ldrb w8, [x1, #0x135]
0x04C16D60: 88000037  tbnz w8, #0, #0x4c16d70
0x04C16D64: e00301aa  mov x0, x1
0x04C16D68: adfe9497  bl #0x315681c
0x04C16D6C: e10300aa  mov x1, x0
0x04C16D70: 680240f9  ldr x8, [x19]
0x04C16D74: 095d4279  ldrh w9, [x8, #0x12e]
0x04C16D78: 290100b4  cbz x9, #0x4c16d9c
0x04C16D7C: 0a5940f9  ldr x10, [x8, #0xb0]
0x04C16D80: 4a210091  add x10, x10, #8
0x04C16D84: 4b815ff8  ldur x11, [x10, #-8]
0x04C16D88: 7f0101eb  cmp x11, x1
0x04C16D8C: 00010054  b.eq #0x4c16dac
0x04C16D90: 290500f1  subs x9, x9, #1
0x04C16D94: 4a410091  add x10, x10, #0x10
0x04C16D98: 61ffff54  b.ne #0x4c16d84
0x04C16D9C: e00313aa  mov x0, x19
0x04C16DA0: e2031f2a  mov w2, wzr
0x04C16DA4: 5bff9497  bl #0x3156b10
0x04C16DA8: 04000014  b #0x4c16db8
0x04C16DAC: 490180b9  ldrsw x9, [x10]
0x04C16DB0: 0811098b  add x8, x8, x9, lsl #4
0x04C16DB4: 00e10491  add x0, x8, #0x138
0x04C16DB8: 020440a9  ldp x2, x1, [x0]
0x04C16DBC: e00313aa  mov x0, x19
0x04C16DC0: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x04C16DC4: 40001fd6  br x2
0x04C16DC8: b9a79597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C169C4 | Framework.Core.Services.BlockingFlagsService<Int32Enum>$$RaiseBlockingFlag
; native signature: void Framework_Core_Services_BlockingFlagsService_Int32Enum___RaiseBlockingFlag (Framework_Core_Services_BlockingFlagsService_TEnum__o* __this, int32_t flagToRaise, const MethodInfo_4C169C4* method);
; bytes=156 sha256=3a3ef74e3ca45f05000298dbd8e009c284b66162069ed60892580e7beb796c21 status=arm64_complete_bound indexed_start=True
0x04C169C4: fe0f1ef8  str x30, [sp, #-0x20]!
0x04C169C8: f44f01a9  stp x20, x19, [sp, #0x10]
0x04C169CC: 141440f9  ldr x20, [x0, #0x28]
0x04C169D0: 740400b4  cbz x20, #0x4c16a5c
0x04C169D4: 481040f9  ldr x8, [x2, #0x20]
0x04C169D8: f303012a  mov w19, w1
0x04C169DC: 086140f9  ldr x8, [x8, #0xc0]
0x04C169E0: 010540f9  ldr x1, [x8, #8]
0x04C169E4: 28d44439  ldrb w8, [x1, #0x135]
0x04C169E8: 88000037  tbnz w8, #0, #0x4c169f8
0x04C169EC: e00301aa  mov x0, x1
0x04C169F0: 8bff9497  bl #0x315681c
0x04C169F4: e10300aa  mov x1, x0
0x04C169F8: 880240f9  ldr x8, [x20]
0x04C169FC: 095d4279  ldrh w9, [x8, #0x12e]
0x04C16A00: 290100b4  cbz x9, #0x4c16a24
0x04C16A04: 0a5940f9  ldr x10, [x8, #0xb0]
0x04C16A08: 4a210091  add x10, x10, #8
0x04C16A0C: 4b815ff8  ldur x11, [x10, #-8]
0x04C16A10: 7f0101eb  cmp x11, x1
0x04C16A14: 00010054  b.eq #0x4c16a34
0x04C16A18: 290500f1  subs x9, x9, #1
0x04C16A1C: 4a410091  add x10, x10, #0x10
0x04C16A20: 61ffff54  b.ne #0x4c16a0c
0x04C16A24: 42008052  movz w2, #0x2
0x04C16A28: e00314aa  mov x0, x20
0x04C16A2C: 39009597  bl #0x3156b10
0x04C16A30: 05000014  b #0x4c16a44
0x04C16A34: 490140b9  ldr w9, [x10]
0x04C16A38: 29090011  add w9, w9, #2
0x04C16A3C: 08d1298b  add x8, x8, w9, sxtw #4
0x04C16A40: 00e10491  add x0, x8, #0x138
0x04C16A44: 030840a9  ldp x3, x2, [x0]
0x04C16A48: e00314aa  mov x0, x20
0x04C16A4C: e103132a  mov w1, w19
0x04C16A50: f44f41a9  ldp x20, x19, [sp, #0x10]
0x04C16A54: fe0742f8  ldr x30, [sp], #0x20
0x04C16A58: 60001fd6  br x3
0x04C16A5C: 94a89597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C16DCC | Framework.Core.Services.BlockingFlagsService<__Il2CppFullySharedGenericStructType>$$RaiseBlockingFlag
; native signature: void Framework_Core_Services_BlockingFlagsService___Il2CppFullySharedGenericStructType___RaiseBlockingFlag (Framework_Core_Services_BlockingFlagsService_TEnum__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o flagToRaise, const MethodInfo_4C16DCC* method);
; bytes=260 sha256=17440e16f9285299db6dad788ddc91235d141943775005c5e61d730a68852b2f status=arm64_complete_bound indexed_start=True
0x04C16DCC: fd7bbda9  stp x29, x30, [sp, #-0x30]!
0x04C16DD0: f65701a9  stp x22, x21, [sp, #0x10]
0x04C16DD4: f44f02a9  stp x20, x19, [sp, #0x20]
0x04C16DD8: fd030091  mov x29, sp
0x04C16DDC: ff4300d1  sub sp, sp, #0x10
0x04C16DE0: 55d03bd5  mrs x21, tpidr_el0
0x04C16DE4: a81640f9  ldr x8, [x21, #0x28]
0x04C16DE8: a8831ff8  stur x8, [x29, #-8]
0x04C16DEC: 561040f9  ldr x22, [x2, #0x20]
0x04C16DF0: c86240f9  ldr x8, [x22, #0xc0]
0x04C16DF4: 080d40f9  ldr x8, [x8, #0x18]
0x04C16DF8: 02fd40b9  ldr w2, [x8, #0xfc]
0x04C16DFC: e8030091  mov x8, sp
0x04C16E00: 493c0091  add x9, x2, #0xf
0x04C16E04: 29717c92  and x9, x9, #0x1fffffff0
0x04C16E08: 130109cb  sub x19, x8, x9
0x04C16E0C: 7f020091  mov sp, x19
0x04C16E10: 141440f9  ldr x20, [x0, #0x28]
0x04C16E14: e00313aa  mov x0, x19
0x04C16E18: d6de9694  bl #0x71ce970
0x04C16E1C: 740500b4  cbz x20, #0x4c16ec8
0x04C16E20: c86240f9  ldr x8, [x22, #0xc0]
0x04C16E24: 010540f9  ldr x1, [x8, #8]
0x04C16E28: 28d44439  ldrb w8, [x1, #0x135]
0x04C16E2C: 88000037  tbnz w8, #0, #0x4c16e3c
0x04C16E30: e00301aa  mov x0, x1
0x04C16E34: 7afe9497  bl #0x315681c
0x04C16E38: e10300aa  mov x1, x0
0x04C16E3C: 880240f9  ldr x8, [x20]
0x04C16E40: 095d4279  ldrh w9, [x8, #0x12e]
0x04C16E44: 290100b4  cbz x9, #0x4c16e68
0x04C16E48: 0a5940f9  ldr x10, [x8, #0xb0]
0x04C16E4C: 4a210091  add x10, x10, #8
0x04C16E50: 4b815ff8  ldur x11, [x10, #-8]
0x04C16E54: 7f0101eb  cmp x11, x1
0x04C16E58: 00010054  b.eq #0x4c16e78
0x04C16E5C: 290500f1  subs x9, x9, #1
0x04C16E60: 4a410091  add x10, x10, #0x10
0x04C16E64: 61ffff54  b.ne #0x4c16e50
0x04C16E68: 42008052  movz w2, #0x2
0x04C16E6C: e00314aa  mov x0, x20
0x04C16E70: 28ff9497  bl #0x3156b10
0x04C16E74: 05000014  b #0x4c16e88
0x04C16E78: 490140b9  ldr w9, [x10]
0x04C16E7C: 29090011  add w9, w9, #2
0x04C16E80: 08d1298b  add x8, x8, w9, sxtw #4
0x04C16E84: 00e10491  add x0, x8, #0x138
0x04C16E88: b3031ff8  stur x19, [x29, #-0x10]
0x04C16E8C: 010440f9  ldr x1, [x0, #8]
0x04C16E90: a34300d1  sub x3, x29, #0x10
0x04C16E94: e20314aa  mov x2, x20
0x04C16E98: e40313aa  mov x4, x19
0x04C16E9C: 20a040a9  ldp x0, x8, [x1, #8]
0x04C16EA0: 00013fd6  blr x8
0x04C16EA4: a81640f9  ldr x8, [x21, #0x28]
0x04C16EA8: a9835ff8  ldur x9, [x29, #-8]
0x04C16EAC: 1f0109eb  cmp x8, x9
0x04C16EB0: e1000054  b.ne #0x4c16ecc
0x04C16EB4: bf030091  mov sp, x29
0x04C16EB8: f44f42a9  ldp x20, x19, [sp, #0x20]
0x04C16EBC: f65741a9  ldp x22, x21, [sp, #0x10]
0x04C16EC0: fd7bc3a8  ldp x29, x30, [sp], #0x30
0x04C16EC4: c0035fd6  ret
0x04C16EC8: 79a79597  bl #0x3180cac
0x04C16ECC: b1de9694  bl #0x71ce990

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C16A60 | Framework.Core.Services.BlockingFlagsService<Int32Enum>$$ClearBlockingFlag
; native signature: void Framework_Core_Services_BlockingFlagsService_Int32Enum___ClearBlockingFlag (Framework_Core_Services_BlockingFlagsService_TEnum__o* __this, int32_t flagToClear, const MethodInfo_4C16A60* method);
; bytes=156 sha256=8fdd209f193f54d29775301253ede4eec85326fc96ca0fd93c938a73dc21528f status=arm64_complete_bound indexed_start=True
0x04C16A60: fe0f1ef8  str x30, [sp, #-0x20]!
0x04C16A64: f44f01a9  stp x20, x19, [sp, #0x10]
0x04C16A68: 141440f9  ldr x20, [x0, #0x28]
0x04C16A6C: 740400b4  cbz x20, #0x4c16af8
0x04C16A70: 481040f9  ldr x8, [x2, #0x20]
0x04C16A74: f303012a  mov w19, w1
0x04C16A78: 086140f9  ldr x8, [x8, #0xc0]
0x04C16A7C: 010540f9  ldr x1, [x8, #8]
0x04C16A80: 28d44439  ldrb w8, [x1, #0x135]
0x04C16A84: 88000037  tbnz w8, #0, #0x4c16a94
0x04C16A88: e00301aa  mov x0, x1
0x04C16A8C: 64ff9497  bl #0x315681c
0x04C16A90: e10300aa  mov x1, x0
0x04C16A94: 880240f9  ldr x8, [x20]
0x04C16A98: 095d4279  ldrh w9, [x8, #0x12e]
0x04C16A9C: 290100b4  cbz x9, #0x4c16ac0
0x04C16AA0: 0a5940f9  ldr x10, [x8, #0xb0]
0x04C16AA4: 4a210091  add x10, x10, #8
0x04C16AA8: 4b815ff8  ldur x11, [x10, #-8]
0x04C16AAC: 7f0101eb  cmp x11, x1
0x04C16AB0: 00010054  b.eq #0x4c16ad0
0x04C16AB4: 290500f1  subs x9, x9, #1
0x04C16AB8: 4a410091  add x10, x10, #0x10
0x04C16ABC: 61ffff54  b.ne #0x4c16aa8
0x04C16AC0: 22008052  movz w2, #0x1
0x04C16AC4: e00314aa  mov x0, x20
0x04C16AC8: 12009597  bl #0x3156b10
0x04C16ACC: 05000014  b #0x4c16ae0
0x04C16AD0: 490140b9  ldr w9, [x10]
0x04C16AD4: 29050011  add w9, w9, #1
0x04C16AD8: 08d1298b  add x8, x8, w9, sxtw #4
0x04C16ADC: 00e10491  add x0, x8, #0x138
0x04C16AE0: 030840a9  ldp x3, x2, [x0]
0x04C16AE4: e00314aa  mov x0, x20
0x04C16AE8: e103132a  mov w1, w19
0x04C16AEC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x04C16AF0: fe0742f8  ldr x30, [sp], #0x20
0x04C16AF4: 60001fd6  br x3
0x04C16AF8: 6da89597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C16ED0 | Framework.Core.Services.BlockingFlagsService<__Il2CppFullySharedGenericStructType>$$ClearBlockingFlag
; native signature: void Framework_Core_Services_BlockingFlagsService___Il2CppFullySharedGenericStructType___ClearBlockingFlag (Framework_Core_Services_BlockingFlagsService_TEnum__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o flagToClear, const MethodInfo_4C16ED0* method);
; bytes=260 sha256=7ca88424c6130a5f47d59ac3ec65658db996bdb060aff4a06e537a9100946fc5 status=arm64_complete_bound indexed_start=True
0x04C16ED0: fd7bbda9  stp x29, x30, [sp, #-0x30]!
0x04C16ED4: f65701a9  stp x22, x21, [sp, #0x10]
0x04C16ED8: f44f02a9  stp x20, x19, [sp, #0x20]
0x04C16EDC: fd030091  mov x29, sp
0x04C16EE0: ff4300d1  sub sp, sp, #0x10
0x04C16EE4: 55d03bd5  mrs x21, tpidr_el0
0x04C16EE8: a81640f9  ldr x8, [x21, #0x28]
0x04C16EEC: a8831ff8  stur x8, [x29, #-8]
0x04C16EF0: 561040f9  ldr x22, [x2, #0x20]
0x04C16EF4: c86240f9  ldr x8, [x22, #0xc0]
0x04C16EF8: 080d40f9  ldr x8, [x8, #0x18]
0x04C16EFC: 02fd40b9  ldr w2, [x8, #0xfc]
0x04C16F00: e8030091  mov x8, sp
0x04C16F04: 493c0091  add x9, x2, #0xf
0x04C16F08: 29717c92  and x9, x9, #0x1fffffff0
0x04C16F0C: 130109cb  sub x19, x8, x9
0x04C16F10: 7f020091  mov sp, x19
0x04C16F14: 141440f9  ldr x20, [x0, #0x28]
0x04C16F18: e00313aa  mov x0, x19
0x04C16F1C: 95de9694  bl #0x71ce970
0x04C16F20: 740500b4  cbz x20, #0x4c16fcc
0x04C16F24: c86240f9  ldr x8, [x22, #0xc0]
0x04C16F28: 010540f9  ldr x1, [x8, #8]
0x04C16F2C: 28d44439  ldrb w8, [x1, #0x135]
0x04C16F30: 88000037  tbnz w8, #0, #0x4c16f40
0x04C16F34: e00301aa  mov x0, x1
0x04C16F38: 39fe9497  bl #0x315681c
0x04C16F3C: e10300aa  mov x1, x0
0x04C16F40: 880240f9  ldr x8, [x20]
0x04C16F44: 095d4279  ldrh w9, [x8, #0x12e]
0x04C16F48: 290100b4  cbz x9, #0x4c16f6c
0x04C16F4C: 0a5940f9  ldr x10, [x8, #0xb0]
0x04C16F50: 4a210091  add x10, x10, #8
0x04C16F54: 4b815ff8  ldur x11, [x10, #-8]
0x04C16F58: 7f0101eb  cmp x11, x1
0x04C16F5C: 00010054  b.eq #0x4c16f7c
0x04C16F60: 290500f1  subs x9, x9, #1
0x04C16F64: 4a410091  add x10, x10, #0x10
0x04C16F68: 61ffff54  b.ne #0x4c16f54
0x04C16F6C: 22008052  movz w2, #0x1
0x04C16F70: e00314aa  mov x0, x20
0x04C16F74: e7fe9497  bl #0x3156b10
0x04C16F78: 05000014  b #0x4c16f8c
0x04C16F7C: 490140b9  ldr w9, [x10]
0x04C16F80: 29050011  add w9, w9, #1
0x04C16F84: 08d1298b  add x8, x8, w9, sxtw #4
0x04C16F88: 00e10491  add x0, x8, #0x138
0x04C16F8C: b3031ff8  stur x19, [x29, #-0x10]
0x04C16F90: 010440f9  ldr x1, [x0, #8]
0x04C16F94: a34300d1  sub x3, x29, #0x10
0x04C16F98: e20314aa  mov x2, x20
0x04C16F9C: e40313aa  mov x4, x19
0x04C16FA0: 20a040a9  ldp x0, x8, [x1, #8]
0x04C16FA4: 00013fd6  blr x8
0x04C16FA8: a81640f9  ldr x8, [x21, #0x28]
0x04C16FAC: a9835ff8  ldur x9, [x29, #-8]
0x04C16FB0: 1f0109eb  cmp x8, x9
0x04C16FB4: e1000054  b.ne #0x4c16fd0
0x04C16FB8: bf030091  mov sp, x29
0x04C16FBC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x04C16FC0: f65741a9  ldp x22, x21, [sp, #0x10]
0x04C16FC4: fd7bc3a8  ldp x29, x30, [sp], #0x30
0x04C16FC8: c0035fd6  ret
0x04C16FCC: 38a79597  bl #0x3180cac
0x04C16FD0: 70de9694  bl #0x71ce990

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C16AFC | Framework.Core.Services.BlockingFlagsService<Int32Enum>$$ClearBlockingFlags
; native signature: void Framework_Core_Services_BlockingFlagsService_Int32Enum___ClearBlockingFlags (Framework_Core_Services_BlockingFlagsService_TEnum__o* __this, System_Int32Enum_array* flags, const MethodInfo_4C16AFC* method);
; bytes=156 sha256=0f866757a1d1fe6f0772dd38062269c5c5ccd2a86d22060e85406838865276dd status=arm64_complete_bound indexed_start=True
0x04C16AFC: fe0f1ef8  str x30, [sp, #-0x20]!
0x04C16B00: f44f01a9  stp x20, x19, [sp, #0x10]
0x04C16B04: 141440f9  ldr x20, [x0, #0x28]
0x04C16B08: 740400b4  cbz x20, #0x4c16b94
0x04C16B0C: 481040f9  ldr x8, [x2, #0x20]
0x04C16B10: f30301aa  mov x19, x1
0x04C16B14: 086140f9  ldr x8, [x8, #0xc0]
0x04C16B18: 010540f9  ldr x1, [x8, #8]
0x04C16B1C: 28d44439  ldrb w8, [x1, #0x135]
0x04C16B20: 88000037  tbnz w8, #0, #0x4c16b30
0x04C16B24: e00301aa  mov x0, x1
0x04C16B28: 3dff9497  bl #0x315681c
0x04C16B2C: e10300aa  mov x1, x0
0x04C16B30: 880240f9  ldr x8, [x20]
0x04C16B34: 095d4279  ldrh w9, [x8, #0x12e]
0x04C16B38: 290100b4  cbz x9, #0x4c16b5c
0x04C16B3C: 0a5940f9  ldr x10, [x8, #0xb0]
0x04C16B40: 4a210091  add x10, x10, #8
0x04C16B44: 4b815ff8  ldur x11, [x10, #-8]
0x04C16B48: 7f0101eb  cmp x11, x1
0x04C16B4C: 00010054  b.eq #0x4c16b6c
0x04C16B50: 290500f1  subs x9, x9, #1
0x04C16B54: 4a410091  add x10, x10, #0x10
0x04C16B58: 61ffff54  b.ne #0x4c16b44
0x04C16B5C: 62008052  movz w2, #0x3
0x04C16B60: e00314aa  mov x0, x20
0x04C16B64: ebff9497  bl #0x3156b10
0x04C16B68: 05000014  b #0x4c16b7c
0x04C16B6C: 490140b9  ldr w9, [x10]
0x04C16B70: 290d0011  add w9, w9, #3
0x04C16B74: 08d1298b  add x8, x8, w9, sxtw #4
0x04C16B78: 00e10491  add x0, x8, #0x138
0x04C16B7C: 030840a9  ldp x3, x2, [x0]
0x04C16B80: e00314aa  mov x0, x20
0x04C16B84: e10313aa  mov x1, x19
0x04C16B88: f44f41a9  ldp x20, x19, [sp, #0x10]
0x04C16B8C: fe0742f8  ldr x30, [sp], #0x20
0x04C16B90: 60001fd6  br x3
0x04C16B94: 46a89597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C16FD4 | Framework.Core.Services.BlockingFlagsService<__Il2CppFullySharedGenericStructType>$$ClearBlockingFlags
; native signature: void Framework_Core_Services_BlockingFlagsService___Il2CppFullySharedGenericStructType___ClearBlockingFlags (Framework_Core_Services_BlockingFlagsService_TEnum__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_array* flags, const MethodInfo_4C16FD4* method);
; bytes=156 sha256=4705e03be1d42d41095bfb5ba94ef9d593b4064d30a1fed772078fe21a981117 status=arm64_complete_bound indexed_start=True
0x04C16FD4: fe0f1ef8  str x30, [sp, #-0x20]!
0x04C16FD8: f44f01a9  stp x20, x19, [sp, #0x10]
0x04C16FDC: 141440f9  ldr x20, [x0, #0x28]
0x04C16FE0: 740400b4  cbz x20, #0x4c1706c
0x04C16FE4: 481040f9  ldr x8, [x2, #0x20]
0x04C16FE8: f30301aa  mov x19, x1
0x04C16FEC: 086140f9  ldr x8, [x8, #0xc0]
0x04C16FF0: 010540f9  ldr x1, [x8, #8]
0x04C16FF4: 28d44439  ldrb w8, [x1, #0x135]
0x04C16FF8: 88000037  tbnz w8, #0, #0x4c17008
0x04C16FFC: e00301aa  mov x0, x1
0x04C17000: 07fe9497  bl #0x315681c
0x04C17004: e10300aa  mov x1, x0
0x04C17008: 880240f9  ldr x8, [x20]
0x04C1700C: 095d4279  ldrh w9, [x8, #0x12e]
0x04C17010: 290100b4  cbz x9, #0x4c17034
0x04C17014: 0a5940f9  ldr x10, [x8, #0xb0]
0x04C17018: 4a210091  add x10, x10, #8
0x04C1701C: 4b815ff8  ldur x11, [x10, #-8]
0x04C17020: 7f0101eb  cmp x11, x1
0x04C17024: 00010054  b.eq #0x4c17044
0x04C17028: 290500f1  subs x9, x9, #1
0x04C1702C: 4a410091  add x10, x10, #0x10
0x04C17030: 61ffff54  b.ne #0x4c1701c
0x04C17034: 62008052  movz w2, #0x3
0x04C17038: e00314aa  mov x0, x20
0x04C1703C: b5fe9497  bl #0x3156b10
0x04C17040: 05000014  b #0x4c17054
0x04C17044: 490140b9  ldr w9, [x10]
0x04C17048: 290d0011  add w9, w9, #3
0x04C1704C: 08d1298b  add x8, x8, w9, sxtw #4
0x04C17050: 00e10491  add x0, x8, #0x138
0x04C17054: 030840a9  ldp x3, x2, [x0]
0x04C17058: e00314aa  mov x0, x20
0x04C1705C: e10313aa  mov x1, x19
0x04C17060: f44f41a9  ldp x20, x19, [sp, #0x10]
0x04C17064: fe0742f8  ldr x30, [sp], #0x20
0x04C17068: 60001fd6  br x3
0x04C1706C: 10a79597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C16B98 | Framework.Core.Services.BlockingFlagsService<Int32Enum>$$HasBlockingFlag
; native signature: bool Framework_Core_Services_BlockingFlagsService_Int32Enum___HasBlockingFlag (Framework_Core_Services_BlockingFlagsService_TEnum__o* __this, int32_t flag, const MethodInfo_4C16B98* method);
; bytes=156 sha256=37b88d51e2d6e29cd9e9f1a258af3f2e6c499158c533522d5709420ed7100d4e status=arm64_complete_bound indexed_start=True
0x04C16B98: fe0f1ef8  str x30, [sp, #-0x20]!
0x04C16B9C: f44f01a9  stp x20, x19, [sp, #0x10]
0x04C16BA0: 141440f9  ldr x20, [x0, #0x28]
0x04C16BA4: 740400b4  cbz x20, #0x4c16c30
0x04C16BA8: 481040f9  ldr x8, [x2, #0x20]
0x04C16BAC: f303012a  mov w19, w1
0x04C16BB0: 086140f9  ldr x8, [x8, #0xc0]
0x04C16BB4: 010540f9  ldr x1, [x8, #8]
0x04C16BB8: 28d44439  ldrb w8, [x1, #0x135]
0x04C16BBC: 88000037  tbnz w8, #0, #0x4c16bcc
0x04C16BC0: e00301aa  mov x0, x1
0x04C16BC4: 16ff9497  bl #0x315681c
0x04C16BC8: e10300aa  mov x1, x0
0x04C16BCC: 880240f9  ldr x8, [x20]
0x04C16BD0: 095d4279  ldrh w9, [x8, #0x12e]
0x04C16BD4: 290100b4  cbz x9, #0x4c16bf8
0x04C16BD8: 0a5940f9  ldr x10, [x8, #0xb0]
0x04C16BDC: 4a210091  add x10, x10, #8
0x04C16BE0: 4b815ff8  ldur x11, [x10, #-8]
0x04C16BE4: 7f0101eb  cmp x11, x1
0x04C16BE8: 00010054  b.eq #0x4c16c08
0x04C16BEC: 290500f1  subs x9, x9, #1
0x04C16BF0: 4a410091  add x10, x10, #0x10
0x04C16BF4: 61ffff54  b.ne #0x4c16be0
0x04C16BF8: 82008052  movz w2, #0x4
0x04C16BFC: e00314aa  mov x0, x20
0x04C16C00: c4ff9497  bl #0x3156b10
0x04C16C04: 05000014  b #0x4c16c18
0x04C16C08: 490140b9  ldr w9, [x10]
0x04C16C0C: 29110011  add w9, w9, #4
0x04C16C10: 08d1298b  add x8, x8, w9, sxtw #4
0x04C16C14: 00e10491  add x0, x8, #0x138
0x04C16C18: 030840a9  ldp x3, x2, [x0]
0x04C16C1C: e00314aa  mov x0, x20
0x04C16C20: e103132a  mov w1, w19
0x04C16C24: f44f41a9  ldp x20, x19, [sp, #0x10]
0x04C16C28: fe0742f8  ldr x30, [sp], #0x20
0x04C16C2C: 60001fd6  br x3
0x04C16C30: 1fa89597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C17070 | Framework.Core.Services.BlockingFlagsService<__Il2CppFullySharedGenericStructType>$$HasBlockingFlag
; native signature: bool Framework_Core_Services_BlockingFlagsService___Il2CppFullySharedGenericStructType___HasBlockingFlag (Framework_Core_Services_BlockingFlagsService_TEnum__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o flag, const MethodInfo_4C17070* method);
; bytes=272 sha256=e46c8ffd5644b6b92de8b5c64bc41ec089ad63a35e18bf19f86af57b3a6ef77f status=arm64_complete_bound indexed_start=True
0x04C17070: fd7bbda9  stp x29, x30, [sp, #-0x30]!
0x04C17074: f65701a9  stp x22, x21, [sp, #0x10]
0x04C17078: f44f02a9  stp x20, x19, [sp, #0x20]
0x04C1707C: fd030091  mov x29, sp
0x04C17080: ff8300d1  sub sp, sp, #0x20
0x04C17084: 55d03bd5  mrs x21, tpidr_el0
0x04C17088: a81640f9  ldr x8, [x21, #0x28]
0x04C1708C: a8831ff8  stur x8, [x29, #-8]
0x04C17090: 561040f9  ldr x22, [x2, #0x20]
0x04C17094: c86240f9  ldr x8, [x22, #0xc0]
0x04C17098: 080d40f9  ldr x8, [x8, #0x18]
0x04C1709C: 02fd40b9  ldr w2, [x8, #0xfc]
0x04C170A0: e8030091  mov x8, sp
0x04C170A4: 493c0091  add x9, x2, #0xf
0x04C170A8: 29717c92  and x9, x9, #0x1fffffff0
0x04C170AC: 140109cb  sub x20, x8, x9
0x04C170B0: 9f020091  mov sp, x20
0x04C170B4: 131440f9  ldr x19, [x0, #0x28]
0x04C170B8: e00314aa  mov x0, x20
0x04C170BC: 2dde9694  bl #0x71ce970
0x04C170C0: d30500b4  cbz x19, #0x4c17178
0x04C170C4: c86240f9  ldr x8, [x22, #0xc0]
0x04C170C8: 010540f9  ldr x1, [x8, #8]
0x04C170CC: 28d44439  ldrb w8, [x1, #0x135]
0x04C170D0: 88000037  tbnz w8, #0, #0x4c170e0
0x04C170D4: e00301aa  mov x0, x1
0x04C170D8: d1fd9497  bl #0x315681c
0x04C170DC: e10300aa  mov x1, x0
0x04C170E0: 680240f9  ldr x8, [x19]
0x04C170E4: 095d4279  ldrh w9, [x8, #0x12e]
0x04C170E8: 290100b4  cbz x9, #0x4c1710c
0x04C170EC: 0a5940f9  ldr x10, [x8, #0xb0]
0x04C170F0: 4a210091  add x10, x10, #8
0x04C170F4: 4b815ff8  ldur x11, [x10, #-8]
0x04C170F8: 7f0101eb  cmp x11, x1
0x04C170FC: 00010054  b.eq #0x4c1711c
0x04C17100: 290500f1  subs x9, x9, #1
0x04C17104: 4a410091  add x10, x10, #0x10
0x04C17108: 61ffff54  b.ne #0x4c170f4
0x04C1710C: 82008052  movz w2, #0x4
0x04C17110: e00313aa  mov x0, x19
0x04C17114: 7ffe9497  bl #0x3156b10
0x04C17118: 05000014  b #0x4c1712c
0x04C1711C: 490140b9  ldr w9, [x10]
0x04C17120: 29110011  add w9, w9, #4
0x04C17124: 08d1298b  add x8, x8, w9, sxtw #4
0x04C17128: 00e10491  add x0, x8, #0x138
0x04C1712C: b4831ef8  stur x20, [x29, #-0x18]
0x04C17130: 010440f9  ldr x1, [x0, #8]
0x04C17134: a36300d1  sub x3, x29, #0x18
0x04C17138: a43300d1  sub x4, x29, #0xc
0x04C1713C: e20313aa  mov x2, x19
0x04C17140: 20a040a9  ldp x0, x8, [x1, #8]
0x04C17144: 00013fd6  blr x8
0x04C17148: a8435f38  ldurb w8, [x29, #-0xc]
0x04C1714C: a91640f9  ldr x9, [x21, #0x28]
0x04C17150: aa835ff8  ldur x10, [x29, #-8]
0x04C17154: 1f010071  cmp w8, #0
0x04C17158: e0079f1a  cset w0, ne
0x04C1715C: 3f010aeb  cmp x9, x10
0x04C17160: e1000054  b.ne #0x4c1717c
0x04C17164: bf030091  mov sp, x29
0x04C17168: f44f42a9  ldp x20, x19, [sp, #0x20]
0x04C1716C: f65741a9  ldp x22, x21, [sp, #0x10]
0x04C17170: fd7bc3a8  ldp x29, x30, [sp], #0x30
0x04C17174: c0035fd6  ret
0x04C17178: cda69597  bl #0x3180cac
0x04C1717C: 05de9694  bl #0x71ce990

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C16C34 | Framework.Core.Services.BlockingFlagsService<Int32Enum>$$Framework.Util.BlockingFlags.IDebugBlockingFlags.GetBlockingFlags
; native signature: System_Collections_Generic_List_string__o* Framework_Core_Services_BlockingFlagsService_Int32Enum___Framework_Util_BlockingFlags_IDebugBlockingFlags_GetBlockingFlags (Framework_Core_Services_BlockingFlagsService_TEnum__o* __this, const MethodInfo_4C16C34* method);
; bytes=160 sha256=deb1edc8361c65c585784153ddb49df4ed0a4045d24cda1fd2983c72064d0f82 status=arm64_complete_bound indexed_start=True
0x04C16C34: fe0f1ef8  str x30, [sp, #-0x20]!
0x04C16C38: f44f01a9  stp x20, x19, [sp, #0x10]
0x04C16C3C: 34880190  adrp x20, #0x7d1a000
0x04C16C40: 88ce7b39  ldrb w8, [x20, #0xef3]
0x04C16C44: f30300aa  mov x19, x0
0x04C16C48: c8000037  tbnz w8, #0, #0x4c16c60
0x04C16C4C: 205301d0  adrp x0, #0x767c000
0x04C16C50: 00a041f9  ldr x0, [x0, #0x340]
0x04C16C54: 71a79597  bl #0x3180a18
0x04C16C58: 28008052  movz w8, #0x1
0x04C16C5C: 88ce3b39  strb w8, [x20, #0xef3]
0x04C16C60: 731640f9  ldr x19, [x19, #0x28]
0x04C16C64: 730300b4  cbz x19, #0x4c16cd0
0x04C16C68: 2a5301d0  adrp x10, #0x767c000
0x04C16C6C: 680240f9  ldr x8, [x19]
0x04C16C70: 4aa141f9  ldr x10, [x10, #0x340]
0x04C16C74: 095d4279  ldrh w9, [x8, #0x12e]
0x04C16C78: 410140f9  ldr x1, [x10]
0x04C16C7C: 290100b4  cbz x9, #0x4c16ca0
0x04C16C80: 0a5940f9  ldr x10, [x8, #0xb0]
0x04C16C84: 4a210091  add x10, x10, #8
0x04C16C88: 4b815ff8  ldur x11, [x10, #-8]
0x04C16C8C: 7f0101eb  cmp x11, x1
0x04C16C90: 00010054  b.eq #0x4c16cb0
0x04C16C94: 290500f1  subs x9, x9, #1
0x04C16C98: 4a410091  add x10, x10, #0x10
0x04C16C9C: 61ffff54  b.ne #0x4c16c88
0x04C16CA0: e00313aa  mov x0, x19
0x04C16CA4: e2031f2a  mov w2, wzr
0x04C16CA8: 9aff9497  bl #0x3156b10
0x04C16CAC: 04000014  b #0x4c16cbc
0x04C16CB0: 490180b9  ldrsw x9, [x10]
0x04C16CB4: 0811098b  add x8, x8, x9, lsl #4
0x04C16CB8: 00e10491  add x0, x8, #0x138
0x04C16CBC: 020440a9  ldp x2, x1, [x0]
0x04C16CC0: e00313aa  mov x0, x19
0x04C16CC4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x04C16CC8: fe0742f8  ldr x30, [sp], #0x20
0x04C16CCC: 40001fd6  br x2
0x04C16CD0: f7a79597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C17180 | Framework.Core.Services.BlockingFlagsService<__Il2CppFullySharedGenericStructType>$$Framework.Util.BlockingFlags.IDebugBlockingFlags.GetBlockingFlags
; native signature: System_Collections_Generic_List_string__o* Framework_Core_Services_BlockingFlagsService___Il2CppFullySharedGenericStructType___Framework_Util_BlockingFlags_IDebugBlockingFlags_GetBlockingFlags (Framework_Core_Services_BlockingFlagsService_TEnum__o* __this, const MethodInfo_4C17180* method);
; bytes=160 sha256=eea764280ec875cbb84f0127a6168bd90571666dc55d32e9c472340eb8c69b9c status=arm64_complete_bound indexed_start=True
0x04C17180: fe0f1ef8  str x30, [sp, #-0x20]!
0x04C17184: f44f01a9  stp x20, x19, [sp, #0x10]
0x04C17188: 148801f0  adrp x20, #0x7d1a000
0x04C1718C: 88d27b39  ldrb w8, [x20, #0xef4]
0x04C17190: f30300aa  mov x19, x0
0x04C17194: c8000037  tbnz w8, #0, #0x4c171ac
0x04C17198: 205301b0  adrp x0, #0x767c000
0x04C1719C: 00a041f9  ldr x0, [x0, #0x340]
0x04C171A0: 1ea69597  bl #0x3180a18
0x04C171A4: 28008052  movz w8, #0x1
0x04C171A8: 88d23b39  strb w8, [x20, #0xef4]
0x04C171AC: 731640f9  ldr x19, [x19, #0x28]
0x04C171B0: 730300b4  cbz x19, #0x4c1721c
0x04C171B4: 2a5301b0  adrp x10, #0x767c000
0x04C171B8: 680240f9  ldr x8, [x19]
0x04C171BC: 4aa141f9  ldr x10, [x10, #0x340]
0x04C171C0: 095d4279  ldrh w9, [x8, #0x12e]
0x04C171C4: 410140f9  ldr x1, [x10]
0x04C171C8: 290100b4  cbz x9, #0x4c171ec
0x04C171CC: 0a5940f9  ldr x10, [x8, #0xb0]
0x04C171D0: 4a210091  add x10, x10, #8
0x04C171D4: 4b815ff8  ldur x11, [x10, #-8]
0x04C171D8: 7f0101eb  cmp x11, x1
0x04C171DC: 00010054  b.eq #0x4c171fc
0x04C171E0: 290500f1  subs x9, x9, #1
0x04C171E4: 4a410091  add x10, x10, #0x10
0x04C171E8: 61ffff54  b.ne #0x4c171d4
0x04C171EC: e00313aa  mov x0, x19
0x04C171F0: e2031f2a  mov w2, wzr
0x04C171F4: 47fe9497  bl #0x3156b10
0x04C171F8: 04000014  b #0x4c17208
0x04C171FC: 490180b9  ldrsw x9, [x10]
0x04C17200: 0811098b  add x8, x8, x9, lsl #4
0x04C17204: 00e10491  add x0, x8, #0x138
0x04C17208: 020440a9  ldp x2, x1, [x0]
0x04C1720C: e00313aa  mov x0, x19
0x04C17210: f44f41a9  ldp x20, x19, [sp, #0x10]
0x04C17214: fe0742f8  ldr x30, [sp], #0x20
0x04C17218: 40001fd6  br x2
0x04C1721C: a4a69597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C16CD4 | Framework.Core.Services.BlockingFlagsService<Int32Enum>$$.ctor
; native signature: void Framework_Core_Services_BlockingFlagsService_Int32Enum____ctor (Framework_Core_Services_BlockingFlagsService_TEnum__o* __this, const MethodInfo_4C16CD4* method);
; bytes=112 sha256=7fd4caf22dcbdb7c3633897cc149c3539d97708fef69e15ca547251822ce4ec0 status=arm64_complete_bound indexed_start=True
0x04C16CD4: fe0f1ef8  str x30, [sp, #-0x20]!
0x04C16CD8: f44f01a9  stp x20, x19, [sp, #0x10]
0x04C16CDC: 281040f9  ldr x8, [x1, #0x20]
0x04C16CE0: f40301aa  mov x20, x1
0x04C16CE4: f30300aa  mov x19, x0
0x04C16CE8: 086140f9  ldr x8, [x8, #0xc0]
0x04C16CEC: 082540f9  ldr x8, [x8, #0x48]
0x04C16CF0: 09d54439  ldrb w9, [x8, #0x135]
0x04C16CF4: 89000037  tbnz w9, #0, #0x4c16d04
0x04C16CF8: e00308aa  mov x0, x8
0x04C16CFC: c8fe9497  bl #0x315681c
0x04C16D00: e80300aa  mov x8, x0
0x04C16D04: e00308aa  mov x0, x8
0x04C16D08: e6a79597  bl #0x3180ca0
0x04C16D0C: 881240f9  ldr x8, [x20, #0x20]
0x04C16D10: f40300aa  mov x20, x0
0x04C16D14: 086140f9  ldr x8, [x8, #0xc0]
0x04C16D18: 012940f9  ldr x1, [x8, #0x50]
0x04C16D1C: 6a020094  bl #0x4c176c4
0x04C16D20: e00313aa  mov x0, x19
0x04C16D24: 148c02f8  str x20, [x0, #0x28]!
0x04C16D28: e10314aa  mov x1, x20
0x04C16D2C: 26a79597  bl #0x31809c4
0x04C16D30: e00313aa  mov x0, x19
0x04C16D34: f44f41a9  ldp x20, x19, [sp, #0x10]
0x04C16D38: e1031faa  mov x1, xzr
0x04C16D3C: fe0742f8  ldr x30, [sp], #0x20
0x04C16D40: a1ca7214  b #0x68c97c4

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C17220 | Framework.Core.Services.BlockingFlagsService<__Il2CppFullySharedGenericStructType>$$.ctor
; native signature: void Framework_Core_Services_BlockingFlagsService___Il2CppFullySharedGenericStructType____ctor (Framework_Core_Services_BlockingFlagsService_TEnum__o* __this, const MethodInfo_4C17220* method);
; bytes=116 sha256=f5f8e828a8fa3983e4fc06a95b7d4ca7904529d3b8dd97ce9643207506dc2362 status=arm64_complete_bound indexed_start=True
0x04C17220: fe0f1ef8  str x30, [sp, #-0x20]!
0x04C17224: f44f01a9  stp x20, x19, [sp, #0x10]
0x04C17228: 281040f9  ldr x8, [x1, #0x20]
0x04C1722C: f40301aa  mov x20, x1
0x04C17230: f30300aa  mov x19, x0
0x04C17234: 086140f9  ldr x8, [x8, #0xc0]
0x04C17238: 082540f9  ldr x8, [x8, #0x48]
0x04C1723C: 09d54439  ldrb w9, [x8, #0x135]
0x04C17240: 89000037  tbnz w9, #0, #0x4c17250
0x04C17244: e00308aa  mov x0, x8
0x04C17248: 75fd9497  bl #0x315681c
0x04C1724C: e80300aa  mov x8, x0
0x04C17250: e00308aa  mov x0, x8
0x04C17254: 93a69597  bl #0x3180ca0
0x04C17258: 881240f9  ldr x8, [x20, #0x20]
0x04C1725C: f40300aa  mov x20, x0
0x04C17260: 086140f9  ldr x8, [x8, #0xc0]
0x04C17264: 012940f9  ldr x1, [x8, #0x50]
0x04C17268: 280040f9  ldr x8, [x1]
0x04C1726C: 00013fd6  blr x8
0x04C17270: e00313aa  mov x0, x19
0x04C17274: 148c02f8  str x20, [x0, #0x28]!
0x04C17278: e10314aa  mov x1, x20
0x04C1727C: d2a59597  bl #0x31809c4
0x04C17280: e00313aa  mov x0, x19
0x04C17284: f44f41a9  ldp x20, x19, [sp, #0x10]
0x04C17288: e1031faa  mov x1, xzr
0x04C1728C: fe0742f8  ldr x30, [sp], #0x20
0x04C17290: 4dc97214  b #0x68c97c4

