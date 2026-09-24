; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 33690 ContextualizedECS.Systems.SystemInfoExtensions
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x5F151DC | public static SystemInfo Last(SystemInfo system) { }
; bytes=148 sha256=298cbc1a8986b3ca1e023f1e822203e0d958871fd56660354dbe5569a0d46c77 status=arm64_complete_bound indexed_start=True
0x05F151DC: fe0f1df8  str x30, [sp, #-0x30]!
0x05F151E0: f65701a9  stp x22, x21, [sp, #0x10]
0x05F151E4: f44f02a9  stp x20, x19, [sp, #0x20]
0x05F151E8: 75f000b0  adrp x21, #0x7d22000
0x05F151EC: 36bb00d0  adrp x22, #0x767b000
0x05F151F0: 74bd00d0  adrp x20, #0x76c3000
0x05F151F4: a85e7139  ldrb w8, [x21, #0xc57]
0x05F151F8: d6ee42f9  ldr x22, [x22, #0x5d8]
0x05F151FC: 944a45f9  ldr x20, [x20, #0xa90]
0x05F15200: f30300aa  mov x19, x0
0x05F15204: 28010037  tbnz w8, #0, #0x5f15228
0x05F15208: 20bb00d0  adrp x0, #0x767b000
0x05F1520C: 00ec42f9  ldr x0, [x0, #0x5d8]
0x05F15210: 02ae4997  bl #0x3180a18
0x05F15214: 60bd00d0  adrp x0, #0x76c3000
0x05F15218: 004845f9  ldr x0, [x0, #0xa90]
0x05F1521C: ffad4997  bl #0x3180a18
0x05F15220: 28008052  movz w8, #0x1
0x05F15224: a85e3139  strb w8, [x21, #0xc57]
0x05F15228: c00240f9  ldr x0, [x22]
0x05F1522C: 9dae4997  bl #0x3180ca0
0x05F15230: 820240f9  ldr x2, [x20]
0x05F15234: e1031faa  mov x1, xzr
0x05F15238: e3031faa  mov x3, xzr
0x05F1523C: f40300aa  mov x20, x0
0x05F15240: 0905cd97  bl #0x5256664
0x05F15244: 530100b4  cbz x19, #0x5f1526c
0x05F15248: e00313aa  mov x0, x19
0x05F1524C: 140c02f8  str x20, [x0, #0x20]!
0x05F15250: e10314aa  mov x1, x20
0x05F15254: dcad4997  bl #0x31809c4
0x05F15258: e00313aa  mov x0, x19
0x05F1525C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x05F15260: f65741a9  ldp x22, x21, [sp, #0x10]
0x05F15264: fe0743f8  ldr x30, [sp], #0x30
0x05F15268: c0035fd6  ret
0x05F1526C: 90ae4997  bl #0x3180cac

; RVA 0x5F15270 | private static int ResolveLast(IList<SystemInfo> systems) { }
; bytes=156 sha256=d7c63f40f9d8fbea5d28d053a8b30405fe3adbfd77a51fea668e3c729c70def1 status=arm64_complete_bound indexed_start=True
0x05F15270: fe0f1ef8  str x30, [sp, #-0x20]!
0x05F15274: f44f01a9  stp x20, x19, [sp, #0x10]
0x05F15278: 74f000b0  adrp x20, #0x7d22000
0x05F1527C: 88627139  ldrb w8, [x20, #0xc58]
0x05F15280: f30300aa  mov x19, x0
0x05F15284: c8000037  tbnz w8, #0, #0x5f1529c
0x05F15288: 20bb00d0  adrp x0, #0x767b000
0x05F1528C: 00f442f9  ldr x0, [x0, #0x5e8]
0x05F15290: e2ad4997  bl #0x3180a18
0x05F15294: 28008052  movz w8, #0x1
0x05F15298: 88623139  strb w8, [x20, #0xc58]
0x05F1529C: 730300b4  cbz x19, #0x5f15308
0x05F152A0: 2abb00d0  adrp x10, #0x767b000
0x05F152A4: 680240f9  ldr x8, [x19]
0x05F152A8: 4af542f9  ldr x10, [x10, #0x5e8]
0x05F152AC: 095d4279  ldrh w9, [x8, #0x12e]
0x05F152B0: 410140f9  ldr x1, [x10]
0x05F152B4: 290100b4  cbz x9, #0x5f152d8
0x05F152B8: 0a5940f9  ldr x10, [x8, #0xb0]
0x05F152BC: 4a210091  add x10, x10, #8
0x05F152C0: 4b815ff8  ldur x11, [x10, #-8]
0x05F152C4: 7f0101eb  cmp x11, x1
0x05F152C8: 00010054  b.eq #0x5f152e8
0x05F152CC: 290500f1  subs x9, x9, #1
0x05F152D0: 4a410091  add x10, x10, #0x10
0x05F152D4: 61ffff54  b.ne #0x5f152c0
0x05F152D8: e00313aa  mov x0, x19
0x05F152DC: e2031f2a  mov w2, wzr
0x05F152E0: 0c064997  bl #0x3156b10
0x05F152E4: 04000014  b #0x5f152f4
0x05F152E8: 490180b9  ldrsw x9, [x10]
0x05F152EC: 0811098b  add x8, x8, x9, lsl #4
0x05F152F0: 00e10491  add x0, x8, #0x138
0x05F152F4: 020440a9  ldp x2, x1, [x0]
0x05F152F8: e00313aa  mov x0, x19
0x05F152FC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x05F15300: fe0742f8  ldr x30, [sp], #0x20
0x05F15304: 40001fd6  br x2
0x05F15308: 69ae4997  bl #0x3180cac

; RVA 0x5F1530C | public static SystemInfo First(SystemInfo system) { }
; bytes=148 sha256=ffdd20a7b97cc4896a416fde6fa20beac2195466519906861076f89fd6e7057f status=arm64_complete_bound indexed_start=True
0x05F1530C: fe0f1df8  str x30, [sp, #-0x30]!
0x05F15310: f65701a9  stp x22, x21, [sp, #0x10]
0x05F15314: f44f02a9  stp x20, x19, [sp, #0x20]
0x05F15318: 75f000b0  adrp x21, #0x7d22000
0x05F1531C: 36bb00d0  adrp x22, #0x767b000
0x05F15320: 74bd00d0  adrp x20, #0x76c3000
0x05F15324: a8667139  ldrb w8, [x21, #0xc59]
0x05F15328: d6ee42f9  ldr x22, [x22, #0x5d8]
0x05F1532C: 944e45f9  ldr x20, [x20, #0xa98]
0x05F15330: f30300aa  mov x19, x0
0x05F15334: 28010037  tbnz w8, #0, #0x5f15358
0x05F15338: 20bb00d0  adrp x0, #0x767b000
0x05F1533C: 00ec42f9  ldr x0, [x0, #0x5d8]
0x05F15340: b6ad4997  bl #0x3180a18
0x05F15344: 60bd00d0  adrp x0, #0x76c3000
0x05F15348: 004c45f9  ldr x0, [x0, #0xa98]
0x05F1534C: b3ad4997  bl #0x3180a18
0x05F15350: 28008052  movz w8, #0x1
0x05F15354: a8663139  strb w8, [x21, #0xc59]
0x05F15358: c00240f9  ldr x0, [x22]
0x05F1535C: 51ae4997  bl #0x3180ca0
0x05F15360: 820240f9  ldr x2, [x20]
0x05F15364: e1031faa  mov x1, xzr
0x05F15368: e3031faa  mov x3, xzr
0x05F1536C: f40300aa  mov x20, x0
0x05F15370: bd04cd97  bl #0x5256664
0x05F15374: 530100b4  cbz x19, #0x5f1539c
0x05F15378: e00313aa  mov x0, x19
0x05F1537C: 140c02f8  str x20, [x0, #0x20]!
0x05F15380: e10314aa  mov x1, x20
0x05F15384: 90ad4997  bl #0x31809c4
0x05F15388: e00313aa  mov x0, x19
0x05F1538C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x05F15390: f65741a9  ldp x22, x21, [sp, #0x10]
0x05F15394: fe0743f8  ldr x30, [sp], #0x30
0x05F15398: c0035fd6  ret
0x05F1539C: 44ae4997  bl #0x3180cac

; RVA 0x5F153A0 | private static int ResolveFirst(IList<SystemInfo> systems) { }
; bytes=8 sha256=2b59db05426e0f313d72b30f3398c65721de2562a59dc46ceeba224f98d0b876 status=arm64_complete_bound indexed_start=True
0x05F153A0: e0031f2a  mov w0, wzr
0x05F153A4: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DB6E70 | ContextualizedECS.Systems.SystemInfoExtensions$$Register<object>
; native signature: ContextualizedECS_Systems_SystemInfo_o* ContextualizedECS_Systems_SystemInfoExtensions__Register_object_ (ContextualizedECS_Systems_SystemsBuilder_o* builder, Il2CppObject* system, const MethodInfo_3DB6E70* method);
; bytes=216 sha256=a62920e9a0f0997977a96227924206cf8c3570dd916490c920022fd2d7f05d45 status=arm64_complete_bound indexed_start=True
0x03DB6E70: fe0f1df8  str x30, [sp, #-0x30]!
0x03DB6E74: f65701a9  stp x22, x21, [sp, #0x10]
0x03DB6E78: f44f02a9  stp x20, x19, [sp, #0x20]
0x03DB6E7C: 481c40f9  ldr x8, [x2, #0x38]
0x03DB6E80: f40301aa  mov x20, x1
0x03DB6E84: f30300aa  mov x19, x0
0x03DB6E88: a80100b5  cbnz x8, #0x3db6ebc
0x03DB6E8C: 20c601b0  adrp x0, #0x767b000
0x03DB6E90: 00f042f9  ldr x0, [x0, #0x5e0]
0x03DB6E94: f50302aa  mov x21, x2
0x03DB6E98: e026cf97  bl #0x3180a18
0x03DB6E9C: c0c40190  adrp x0, #0x764e000
0x03DB6EA0: 00ac42f9  ldr x0, [x0, #0x558]
0x03DB6EA4: dd26cf97  bl #0x3180a18
0x03DB6EA8: a81e40f9  ldr x8, [x21, #0x38]
0x03DB6EAC: 880000b5  cbnz x8, #0x3db6ebc
0x03DB6EB0: e00315aa  mov x0, x21
0x03DB6EB4: 717ece97  bl #0x3156878
0x03DB6EB8: a81e40f9  ldr x8, [x21, #0x38]
0x03DB6EBC: c9c40190  adrp x9, #0x764e000
0x03DB6EC0: 29ad42f9  ldr x9, [x9, #0x558]
0x03DB6EC4: 150540f9  ldr x21, [x8, #8]
0x03DB6EC8: 200140f9  ldr x0, [x9]
0x03DB6ECC: 09e040b9  ldr w9, [x0, #0xe0]
0x03DB6ED0: 49000035  cbnz w9, #0x3db6ed8
0x03DB6ED4: 2e27cf97  bl #0x3180b8c
0x03DB6ED8: e00315aa  mov x0, x21
0x03DB6EDC: e1031faa  mov x1, xzr
0x03DB6EE0: b9b86394  bl #0x56a51c4
0x03DB6EE4: 28c601b0  adrp x8, #0x767b000
0x03DB6EE8: 08f142f9  ldr x8, [x8, #0x5e0]
0x03DB6EEC: f60300aa  mov x22, x0
0x03DB6EF0: 080140f9  ldr x8, [x8]
0x03DB6EF4: e00308aa  mov x0, x8
0x03DB6EF8: 6a27cf97  bl #0x3180ca0
0x03DB6EFC: e10314aa  mov x1, x20
0x03DB6F00: e20316aa  mov x2, x22
0x03DB6F04: e3031faa  mov x3, xzr
0x03DB6F08: f50300aa  mov x21, x0
0x03DB6F0C: a3788594  bl #0x5f15198
0x03DB6F10: b30100b4  cbz x19, #0x3db6f44
0x03DB6F14: e00313aa  mov x0, x19
0x03DB6F18: e10315aa  mov x1, x21
0x03DB6F1C: e2031faa  mov x2, xzr
0x03DB6F20: 22798594  bl #0x5f153a8
0x03DB6F24: e00315aa  mov x0, x21
0x03DB6F28: e1031faa  mov x1, xzr
0x03DB6F2C: ac788594  bl #0x5f151dc
0x03DB6F30: e00315aa  mov x0, x21
0x03DB6F34: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03DB6F38: f65741a9  ldp x22, x21, [sp, #0x10]
0x03DB6F3C: fe0743f8  ldr x30, [sp], #0x30
0x03DB6F40: c0035fd6  ret
0x03DB6F44: 5a27cf97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DB6F48 | ContextualizedECS.Systems.SystemInfoExtensions$$Register<__Il2CppFullySharedGenericType>
; native signature: ContextualizedECS_Systems_SystemInfo_o* ContextualizedECS_Systems_SystemInfoExtensions__Register___Il2CppFullySharedGenericType_ (ContextualizedECS_Systems_SystemsBuilder_o* builder, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o system, const MethodInfo_3DB6F48* method);
; bytes=348 sha256=4ee4e977cd5d8c9bce990bcf8213c27317cc1e6208fc37b371a66fba15d800a4 status=arm64_complete_bound indexed_start=True
0x03DB6F48: fd7bbca9  stp x29, x30, [sp, #-0x40]!
0x03DB6F4C: f85f01a9  stp x24, x23, [sp, #0x10]
0x03DB6F50: f65702a9  stp x22, x21, [sp, #0x20]
0x03DB6F54: f44f03a9  stp x20, x19, [sp, #0x30]
0x03DB6F58: fd030091  mov x29, sp
0x03DB6F5C: ff4300d1  sub sp, sp, #0x10
0x03DB6F60: 57d03bd5  mrs x23, tpidr_el0
0x03DB6F64: e81640f9  ldr x8, [x23, #0x28]
0x03DB6F68: f40302aa  mov x20, x2
0x03DB6F6C: f50301aa  mov x21, x1
0x03DB6F70: f30300aa  mov x19, x0
0x03DB6F74: a8831ff8  stur x8, [x29, #-8]
0x03DB6F78: a1031ff8  stur x1, [x29, #-0x10]
0x03DB6F7C: 581c40f9  ldr x24, [x2, #0x38]
0x03DB6F80: 980100b5  cbnz x24, #0x3db6fb0
0x03DB6F84: 20c601b0  adrp x0, #0x767b000
0x03DB6F88: 00f042f9  ldr x0, [x0, #0x5e0]
0x03DB6F8C: a326cf97  bl #0x3180a18
0x03DB6F90: c0c40190  adrp x0, #0x764e000
0x03DB6F94: 00ac42f9  ldr x0, [x0, #0x558]
0x03DB6F98: a026cf97  bl #0x3180a18
0x03DB6F9C: 981e40f9  ldr x24, [x20, #0x38]
0x03DB6FA0: 980000b5  cbnz x24, #0x3db6fb0
0x03DB6FA4: e00314aa  mov x0, x20
0x03DB6FA8: 347ece97  bl #0x3156878
0x03DB6FAC: 981e40f9  ldr x24, [x20, #0x38]
0x03DB6FB0: 080340f9  ldr x8, [x24]
0x03DB6FB4: e9030091  mov x9, sp
0x03DB6FB8: 02fd40b9  ldr w2, [x8, #0xfc]
0x03DB6FBC: 4a3c0091  add x10, x2, #0xf
0x03DB6FC0: 4a717c92  and x10, x10, #0x1fffffff0
0x03DB6FC4: 36010acb  sub x22, x9, x10
0x03DB6FC8: df020091  mov sp, x22
0x03DB6FCC: 082940b9  ldr w8, [x8, #0x28]
0x03DB6FD0: e00316aa  mov x0, x22
0x03DB6FD4: 1f010071  cmp w8, #0
0x03DB6FD8: a84300d1  sub x8, x29, #0x10
0x03DB6FDC: a1b2889a  csel x1, x21, x8, lt
0x03DB6FE0: 645ed094  bl #0x71ce970
0x03DB6FE4: 000340f9  ldr x0, [x24]
0x03DB6FE8: e10316aa  mov x1, x22
0x03DB6FEC: ea26cf97  bl #0x3180b94
0x03DB6FF0: c8c40190  adrp x8, #0x764e000
0x03DB6FF4: 08ad42f9  ldr x8, [x8, #0x558]
0x03DB6FF8: 891e40f9  ldr x9, [x20, #0x38]
0x03DB6FFC: f50300aa  mov x21, x0
0x03DB7000: 080140f9  ldr x8, [x8]
0x03DB7004: 340540f9  ldr x20, [x9, #8]
0x03DB7008: 0ae140b9  ldr w10, [x8, #0xe0]
0x03DB700C: 6a000035  cbnz w10, #0x3db7018
0x03DB7010: e00308aa  mov x0, x8
0x03DB7014: de26cf97  bl #0x3180b8c
0x03DB7018: e00314aa  mov x0, x20
0x03DB701C: e1031faa  mov x1, xzr
0x03DB7020: 69b86394  bl #0x56a51c4
0x03DB7024: 28c60190  adrp x8, #0x767b000
0x03DB7028: 08f142f9  ldr x8, [x8, #0x5e0]
0x03DB702C: f60300aa  mov x22, x0
0x03DB7030: 080140f9  ldr x8, [x8]
0x03DB7034: e00308aa  mov x0, x8
0x03DB7038: 1a27cf97  bl #0x3180ca0
0x03DB703C: e10315aa  mov x1, x21
0x03DB7040: e20316aa  mov x2, x22
0x03DB7044: e3031faa  mov x3, xzr
0x03DB7048: f40300aa  mov x20, x0
0x03DB704C: 53788594  bl #0x5f15198
0x03DB7050: 730200b4  cbz x19, #0x3db709c
0x03DB7054: e00313aa  mov x0, x19
0x03DB7058: e10314aa  mov x1, x20
0x03DB705C: e2031faa  mov x2, xzr
0x03DB7060: d2788594  bl #0x5f153a8
0x03DB7064: e00314aa  mov x0, x20
0x03DB7068: e1031faa  mov x1, xzr
0x03DB706C: 5c788594  bl #0x5f151dc
0x03DB7070: e81640f9  ldr x8, [x23, #0x28]
0x03DB7074: a9835ff8  ldur x9, [x29, #-8]
0x03DB7078: 1f0109eb  cmp x8, x9
0x03DB707C: 21010054  b.ne #0x3db70a0
0x03DB7080: e00314aa  mov x0, x20
0x03DB7084: bf030091  mov sp, x29
0x03DB7088: f44f43a9  ldp x20, x19, [sp, #0x30]
0x03DB708C: f65742a9  ldp x22, x21, [sp, #0x20]
0x03DB7090: f85f41a9  ldp x24, x23, [sp, #0x10]
0x03DB7094: fd7bc4a8  ldp x29, x30, [sp], #0x40
0x03DB7098: c0035fd6  ret
0x03DB709C: 0427cf97  bl #0x3180cac
0x03DB70A0: 3c5ed094  bl #0x71ce990

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DB6D68 | ContextualizedECS.Systems.SystemInfoExtensions$$After<__Il2CppFullySharedGenericType>
; native signature: ContextualizedECS_Systems_SystemInfo_o* ContextualizedECS_Systems_SystemInfoExtensions__After___Il2CppFullySharedGenericType_ (ContextualizedECS_Systems_SystemInfo_o* system, const MethodInfo_3DB6D68* method);
; bytes=132 sha256=bb0a8eb1f4fa45817c69faa0ebe80cd6a888db3f9a4a84269280a2b70e4e1498 status=arm64_complete_bound indexed_start=True
0x03DB6D68: fe0f1ef8  str x30, [sp, #-0x20]!
0x03DB6D6C: f44f01a9  stp x20, x19, [sp, #0x10]
0x03DB6D70: 281c40f9  ldr x8, [x1, #0x38]
0x03DB6D74: f40301aa  mov x20, x1
0x03DB6D78: f30300aa  mov x19, x0
0x03DB6D7C: 080100b5  cbnz x8, #0x3db6d9c
0x03DB6D80: 20c601b0  adrp x0, #0x767b000
0x03DB6D84: 00ec42f9  ldr x0, [x0, #0x5d8]
0x03DB6D88: 2427cf97  bl #0x3180a18
0x03DB6D8C: 881e40f9  ldr x8, [x20, #0x38]
0x03DB6D90: 680000b5  cbnz x8, #0x3db6d9c
0x03DB6D94: e00314aa  mov x0, x20
0x03DB6D98: b87ece97  bl #0x3156878
0x03DB6D9C: 28c601b0  adrp x8, #0x767b000
0x03DB6DA0: 08ed42f9  ldr x8, [x8, #0x5d8]
0x03DB6DA4: 000140f9  ldr x0, [x8]
0x03DB6DA8: be27cf97  bl #0x3180ca0
0x03DB6DAC: 881e40f9  ldr x8, [x20, #0x38]
0x03DB6DB0: e1031faa  mov x1, xzr
0x03DB6DB4: e3031faa  mov x3, xzr
0x03DB6DB8: f40300aa  mov x20, x0
0x03DB6DBC: 020140f9  ldr x2, [x8]
0x03DB6DC0: 297e5294  bl #0x5256664
0x03DB6DC4: 330100b4  cbz x19, #0x3db6de8
0x03DB6DC8: e00313aa  mov x0, x19
0x03DB6DCC: 140c02f8  str x20, [x0, #0x20]!
0x03DB6DD0: e10314aa  mov x1, x20
0x03DB6DD4: fc26cf97  bl #0x31809c4
0x03DB6DD8: e00313aa  mov x0, x19
0x03DB6DDC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03DB6DE0: fe0742f8  ldr x30, [sp], #0x20
0x03DB6DE4: c0035fd6  ret
0x03DB6DE8: b127cf97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DB70A4 | ContextualizedECS.Systems.SystemInfoExtensions$$ResolveAfter<__Il2CppFullySharedGenericType>
; native signature: int32_t ContextualizedECS_Systems_SystemInfoExtensions__ResolveAfter___Il2CppFullySharedGenericType_ (System_Collections_Generic_IList_SystemInfo__o* systems, const MethodInfo_3DB70A4* method);
; bytes=420 sha256=463e53994cc26519287c5d5b049dd807e581480d91e13e30d7a8770aa4a44f0d status=arm64_complete_bound indexed_start=True
0x03DB70A4: fe0f1bf8  str x30, [sp, #-0x50]!
0x03DB70A8: fa6701a9  stp x26, x25, [sp, #0x10]
0x03DB70AC: f85f02a9  stp x24, x23, [sp, #0x20]
0x03DB70B0: f65703a9  stp x22, x21, [sp, #0x30]
0x03DB70B4: f44f04a9  stp x20, x19, [sp, #0x40]
0x03DB70B8: 281c40f9  ldr x8, [x1, #0x38]
0x03DB70BC: f30301aa  mov x19, x1
0x03DB70C0: f40300aa  mov x20, x0
0x03DB70C4: c80100b5  cbnz x8, #0x3db70fc
0x03DB70C8: 20c60190  adrp x0, #0x767b000
0x03DB70CC: 00f442f9  ldr x0, [x0, #0x5e8]
0x03DB70D0: 5226cf97  bl #0x3180a18
0x03DB70D4: 20c60190  adrp x0, #0x767b000
0x03DB70D8: 00f842f9  ldr x0, [x0, #0x5f0]
0x03DB70DC: 4f26cf97  bl #0x3180a18
0x03DB70E0: a0c401f0  adrp x0, #0x764e000
0x03DB70E4: 00ac42f9  ldr x0, [x0, #0x558]
0x03DB70E8: 4c26cf97  bl #0x3180a18
0x03DB70EC: 681e40f9  ldr x8, [x19, #0x38]
0x03DB70F0: 680000b5  cbnz x8, #0x3db70fc
0x03DB70F4: e00313aa  mov x0, x19
0x03DB70F8: e07dce97  bl #0x3156878
0x03DB70FC: 540a00b4  cbz x20, #0x3db7244
0x03DB7100: 38c60190  adrp x24, #0x767b000
0x03DB7104: 39c60190  adrp x25, #0x767b000
0x03DB7108: bac401f0  adrp x26, #0x764e000
0x03DB710C: 18f742f9  ldr x24, [x24, #0x5e8]
0x03DB7110: 39fb42f9  ldr x25, [x25, #0x5f0]
0x03DB7114: 5aaf42f9  ldr x26, [x26, #0x558]
0x03DB7118: f5031f2a  mov w21, wzr
0x03DB711C: 880240f9  ldr x8, [x20]
0x03DB7120: 010340f9  ldr x1, [x24]
0x03DB7124: 095d4279  ldrh w9, [x8, #0x12e]
0x03DB7128: 290100b4  cbz x9, #0x3db714c
0x03DB712C: 0a5940f9  ldr x10, [x8, #0xb0]
0x03DB7130: 4a210091  add x10, x10, #8
0x03DB7134: 4b815ff8  ldur x11, [x10, #-8]
0x03DB7138: 7f0101eb  cmp x11, x1
0x03DB713C: 00010054  b.eq #0x3db715c
0x03DB7140: 290500f1  subs x9, x9, #1
0x03DB7144: 4a410091  add x10, x10, #0x10
0x03DB7148: 61ffff54  b.ne #0x3db7134
0x03DB714C: e00314aa  mov x0, x20
0x03DB7150: e2031f2a  mov w2, wzr
0x03DB7154: 6f7ece97  bl #0x3156b10
0x03DB7158: 04000014  b #0x3db7168
0x03DB715C: 490180b9  ldrsw x9, [x10]
0x03DB7160: 0811098b  add x8, x8, x9, lsl #4
0x03DB7164: 00e10491  add x0, x8, #0x138
0x03DB7168: 080440a9  ldp x8, x1, [x0]
0x03DB716C: e00314aa  mov x0, x20
0x03DB7170: 00013fd6  blr x8
0x03DB7174: bf02006b  cmp w21, w0
0x03DB7178: 6a050054  b.ge #0x3db7224
0x03DB717C: 880240f9  ldr x8, [x20]
0x03DB7180: 210340f9  ldr x1, [x25]
0x03DB7184: 095d4279  ldrh w9, [x8, #0x12e]
0x03DB7188: 290100b4  cbz x9, #0x3db71ac
0x03DB718C: 0a5940f9  ldr x10, [x8, #0xb0]
0x03DB7190: 4a210091  add x10, x10, #8
0x03DB7194: 4b815ff8  ldur x11, [x10, #-8]
0x03DB7198: 7f0101eb  cmp x11, x1
0x03DB719C: 00010054  b.eq #0x3db71bc
0x03DB71A0: 290500f1  subs x9, x9, #1
0x03DB71A4: 4a410091  add x10, x10, #0x10
0x03DB71A8: 61ffff54  b.ne #0x3db7194
0x03DB71AC: e00314aa  mov x0, x20
0x03DB71B0: e2031f2a  mov w2, wzr
0x03DB71B4: 577ece97  bl #0x3156b10
0x03DB71B8: 04000014  b #0x3db71c8
0x03DB71BC: 490180b9  ldrsw x9, [x10]
0x03DB71C0: 0811098b  add x8, x8, x9, lsl #4
0x03DB71C4: 00e10491  add x0, x8, #0x138
0x03DB71C8: 080840a9  ldp x8, x2, [x0]
0x03DB71CC: e00314aa  mov x0, x20
0x03DB71D0: e103152a  mov w1, w21
0x03DB71D4: 00013fd6  blr x8
0x03DB71D8: 600300b4  cbz x0, #0x3db7244
0x03DB71DC: 480340f9  ldr x8, [x26]
0x03DB71E0: 691e40f9  ldr x9, [x19, #0x38]
0x03DB71E4: 160c40f9  ldr x22, [x0, #0x18]
0x03DB71E8: 0ae140b9  ldr w10, [x8, #0xe0]
0x03DB71EC: 370140f9  ldr x23, [x9]
0x03DB71F0: 6a000035  cbnz w10, #0x3db71fc
0x03DB71F4: e00308aa  mov x0, x8
0x03DB71F8: 6526cf97  bl #0x3180b8c
0x03DB71FC: e00317aa  mov x0, x23
0x03DB7200: e1031faa  mov x1, xzr
0x03DB7204: f0b76394  bl #0x56a51c4
0x03DB7208: e10300aa  mov x1, x0
0x03DB720C: e00316aa  mov x0, x22
0x03DB7210: e2031faa  mov x2, xzr
0x03DB7214: 14df6394  bl #0x56aee64
0x03DB7218: b5060011  add w21, w21, #1
0x03DB721C: 00f80736  tbz w0, #0, #0x3db711c
0x03DB7220: 02000014  b #0x3db7228
0x03DB7224: 15008012  movn w21, #0
0x03DB7228: e003152a  mov w0, w21
0x03DB722C: f44f44a9  ldp x20, x19, [sp, #0x40]
0x03DB7230: f65743a9  ldp x22, x21, [sp, #0x30]
0x03DB7234: f85f42a9  ldp x24, x23, [sp, #0x20]
0x03DB7238: fa6741a9  ldp x26, x25, [sp, #0x10]
0x03DB723C: fe0745f8  ldr x30, [sp], #0x50
0x03DB7240: c0035fd6  ret
0x03DB7244: 9a26cf97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DB6DEC | ContextualizedECS.Systems.SystemInfoExtensions$$Before<__Il2CppFullySharedGenericType>
; native signature: ContextualizedECS_Systems_SystemInfo_o* ContextualizedECS_Systems_SystemInfoExtensions__Before___Il2CppFullySharedGenericType_ (ContextualizedECS_Systems_SystemInfo_o* system, const MethodInfo_3DB6DEC* method);
; bytes=132 sha256=4b56997cce7b1e793fc0d542195a1eabcd04993d744a0dc1fa516b2b1d97f4ea status=arm64_complete_bound indexed_start=True
0x03DB6DEC: fe0f1ef8  str x30, [sp, #-0x20]!
0x03DB6DF0: f44f01a9  stp x20, x19, [sp, #0x10]
0x03DB6DF4: 281c40f9  ldr x8, [x1, #0x38]
0x03DB6DF8: f40301aa  mov x20, x1
0x03DB6DFC: f30300aa  mov x19, x0
0x03DB6E00: 080100b5  cbnz x8, #0x3db6e20
0x03DB6E04: 20c601b0  adrp x0, #0x767b000
0x03DB6E08: 00ec42f9  ldr x0, [x0, #0x5d8]
0x03DB6E0C: 0327cf97  bl #0x3180a18
0x03DB6E10: 881e40f9  ldr x8, [x20, #0x38]
0x03DB6E14: 680000b5  cbnz x8, #0x3db6e20
0x03DB6E18: e00314aa  mov x0, x20
0x03DB6E1C: 977ece97  bl #0x3156878
0x03DB6E20: 28c601b0  adrp x8, #0x767b000
0x03DB6E24: 08ed42f9  ldr x8, [x8, #0x5d8]
0x03DB6E28: 000140f9  ldr x0, [x8]
0x03DB6E2C: 9d27cf97  bl #0x3180ca0
0x03DB6E30: 881e40f9  ldr x8, [x20, #0x38]
0x03DB6E34: e1031faa  mov x1, xzr
0x03DB6E38: e3031faa  mov x3, xzr
0x03DB6E3C: f40300aa  mov x20, x0
0x03DB6E40: 020140f9  ldr x2, [x8]
0x03DB6E44: 087e5294  bl #0x5256664
0x03DB6E48: 330100b4  cbz x19, #0x3db6e6c
0x03DB6E4C: e00313aa  mov x0, x19
0x03DB6E50: 140c02f8  str x20, [x0, #0x20]!
0x03DB6E54: e10314aa  mov x1, x20
0x03DB6E58: db26cf97  bl #0x31809c4
0x03DB6E5C: e00313aa  mov x0, x19
0x03DB6E60: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03DB6E64: fe0742f8  ldr x30, [sp], #0x20
0x03DB6E68: c0035fd6  ret
0x03DB6E6C: 9027cf97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DB7248 | ContextualizedECS.Systems.SystemInfoExtensions$$ResolveBefore<__Il2CppFullySharedGenericType>
; native signature: int32_t ContextualizedECS_Systems_SystemInfoExtensions__ResolveBefore___Il2CppFullySharedGenericType_ (System_Collections_Generic_IList_SystemInfo__o* systems, const MethodInfo_3DB7248* method);
; bytes=424 sha256=1cddc969862dfc8cb9247d72a14157dfc490f96b34108c1fd3267ba31abade26 status=arm64_complete_bound indexed_start=True
0x03DB7248: fe0f1bf8  str x30, [sp, #-0x50]!
0x03DB724C: fa6701a9  stp x26, x25, [sp, #0x10]
0x03DB7250: f85f02a9  stp x24, x23, [sp, #0x20]
0x03DB7254: f65703a9  stp x22, x21, [sp, #0x30]
0x03DB7258: f44f04a9  stp x20, x19, [sp, #0x40]
0x03DB725C: 281c40f9  ldr x8, [x1, #0x38]
0x03DB7260: f30301aa  mov x19, x1
0x03DB7264: f40300aa  mov x20, x0
0x03DB7268: c80100b5  cbnz x8, #0x3db72a0
0x03DB726C: 20c60190  adrp x0, #0x767b000
0x03DB7270: 00f442f9  ldr x0, [x0, #0x5e8]
0x03DB7274: e925cf97  bl #0x3180a18
0x03DB7278: 20c60190  adrp x0, #0x767b000
0x03DB727C: 00f842f9  ldr x0, [x0, #0x5f0]
0x03DB7280: e625cf97  bl #0x3180a18
0x03DB7284: a0c401f0  adrp x0, #0x764e000
0x03DB7288: 00ac42f9  ldr x0, [x0, #0x558]
0x03DB728C: e325cf97  bl #0x3180a18
0x03DB7290: 681e40f9  ldr x8, [x19, #0x38]
0x03DB7294: 680000b5  cbnz x8, #0x3db72a0
0x03DB7298: e00313aa  mov x0, x19
0x03DB729C: 777dce97  bl #0x3156878
0x03DB72A0: 740a00b4  cbz x20, #0x3db73ec
0x03DB72A4: 38c60190  adrp x24, #0x767b000
0x03DB72A8: 39c60190  adrp x25, #0x767b000
0x03DB72AC: bac401f0  adrp x26, #0x764e000
0x03DB72B0: 18f742f9  ldr x24, [x24, #0x5e8]
0x03DB72B4: 39fb42f9  ldr x25, [x25, #0x5f0]
0x03DB72B8: 5aaf42f9  ldr x26, [x26, #0x558]
0x03DB72BC: f5031f2a  mov w21, wzr
0x03DB72C0: 880240f9  ldr x8, [x20]
0x03DB72C4: 010340f9  ldr x1, [x24]
0x03DB72C8: 095d4279  ldrh w9, [x8, #0x12e]
0x03DB72CC: 290100b4  cbz x9, #0x3db72f0
0x03DB72D0: 0a5940f9  ldr x10, [x8, #0xb0]
0x03DB72D4: 4a210091  add x10, x10, #8
0x03DB72D8: 4b815ff8  ldur x11, [x10, #-8]
0x03DB72DC: 7f0101eb  cmp x11, x1
0x03DB72E0: 00010054  b.eq #0x3db7300
0x03DB72E4: 290500f1  subs x9, x9, #1
0x03DB72E8: 4a410091  add x10, x10, #0x10
0x03DB72EC: 61ffff54  b.ne #0x3db72d8
0x03DB72F0: e00314aa  mov x0, x20
0x03DB72F4: e2031f2a  mov w2, wzr
0x03DB72F8: 067ece97  bl #0x3156b10
0x03DB72FC: 04000014  b #0x3db730c
0x03DB7300: 490180b9  ldrsw x9, [x10]
0x03DB7304: 0811098b  add x8, x8, x9, lsl #4
0x03DB7308: 00e10491  add x0, x8, #0x138
0x03DB730C: 080440a9  ldp x8, x1, [x0]
0x03DB7310: e00314aa  mov x0, x20
0x03DB7314: 00013fd6  blr x8
0x03DB7318: bf02006b  cmp w21, w0
0x03DB731C: 6a050054  b.ge #0x3db73c8
0x03DB7320: 880240f9  ldr x8, [x20]
0x03DB7324: 210340f9  ldr x1, [x25]
0x03DB7328: 095d4279  ldrh w9, [x8, #0x12e]
0x03DB732C: 290100b4  cbz x9, #0x3db7350
0x03DB7330: 0a5940f9  ldr x10, [x8, #0xb0]
0x03DB7334: 4a210091  add x10, x10, #8
0x03DB7338: 4b815ff8  ldur x11, [x10, #-8]
0x03DB733C: 7f0101eb  cmp x11, x1
0x03DB7340: 00010054  b.eq #0x3db7360
0x03DB7344: 290500f1  subs x9, x9, #1
0x03DB7348: 4a410091  add x10, x10, #0x10
0x03DB734C: 61ffff54  b.ne #0x3db7338
0x03DB7350: e00314aa  mov x0, x20
0x03DB7354: e2031f2a  mov w2, wzr
0x03DB7358: ee7dce97  bl #0x3156b10
0x03DB735C: 04000014  b #0x3db736c
0x03DB7360: 490180b9  ldrsw x9, [x10]
0x03DB7364: 0811098b  add x8, x8, x9, lsl #4
0x03DB7368: 00e10491  add x0, x8, #0x138
0x03DB736C: 080840a9  ldp x8, x2, [x0]
0x03DB7370: e00314aa  mov x0, x20
0x03DB7374: e103152a  mov w1, w21
0x03DB7378: 00013fd6  blr x8
0x03DB737C: 800300b4  cbz x0, #0x3db73ec
0x03DB7380: 480340f9  ldr x8, [x26]
0x03DB7384: 691e40f9  ldr x9, [x19, #0x38]
0x03DB7388: 160c40f9  ldr x22, [x0, #0x18]
0x03DB738C: 0ae140b9  ldr w10, [x8, #0xe0]
0x03DB7390: 370140f9  ldr x23, [x9]
0x03DB7394: 6a000035  cbnz w10, #0x3db73a0
0x03DB7398: e00308aa  mov x0, x8
0x03DB739C: fc25cf97  bl #0x3180b8c
0x03DB73A0: e00317aa  mov x0, x23
0x03DB73A4: e1031faa  mov x1, xzr
0x03DB73A8: 87b76394  bl #0x56a51c4
0x03DB73AC: e10300aa  mov x1, x0
0x03DB73B0: e00316aa  mov x0, x22
0x03DB73B4: e2031faa  mov x2, xzr
0x03DB73B8: abde6394  bl #0x56aee64
0x03DB73BC: a0000037  tbnz w0, #0, #0x3db73d0
0x03DB73C0: b5060011  add w21, w21, #1
0x03DB73C4: bfffff17  b #0x3db72c0
0x03DB73C8: 00008012  movn w0, #0
0x03DB73CC: 02000014  b #0x3db73d4
0x03DB73D0: a0060051  sub w0, w21, #1
0x03DB73D4: f44f44a9  ldp x20, x19, [sp, #0x40]
0x03DB73D8: f65743a9  ldp x22, x21, [sp, #0x30]
0x03DB73DC: f85f42a9  ldp x24, x23, [sp, #0x20]
0x03DB73E0: fa6741a9  ldp x26, x25, [sp, #0x10]
0x03DB73E4: fe0745f8  ldr x30, [sp], #0x50
0x03DB73E8: c0035fd6  ret
0x03DB73EC: 3026cf97  bl #0x3180cac

