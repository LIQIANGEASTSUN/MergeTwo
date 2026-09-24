; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 8590 Merger.Game.Views.GameViewBase<TViewModel>
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; Generic instantiation from Il2CppDumper script.json | RVA 0x5269B3C | Merger.Game.Views.GameViewBase<object>$$get_HasGameStarted
; native signature: bool Merger_Game_Views_GameViewBase_object___get_HasGameStarted (Merger_Game_Views_GameViewBase_TViewModel__o* __this, const MethodInfo_5269B3C* method);
; bytes=88 sha256=96f1e93e4c7b5ab90b30d4acb089c7897fb765413f0df8d467f2d6f96f953a4b status=arm64_complete_bound indexed_start=True
0x05269B3C: fe0f1ef8  str x30, [sp, #-0x20]!
0x05269B40: f44f01a9  stp x20, x19, [sp, #0x10]
0x05269B44: 945501d0  adrp x20, #0x7d1b000
0x05269B48: 885e7f39  ldrb w8, [x20, #0xfd7]
0x05269B4C: f30300aa  mov x19, x0
0x05269B50: c8000037  tbnz w8, #0, #0x5269b68
0x05269B54: 402001b0  adrp x0, #0x7672000
0x05269B58: 008844f9  ldr x0, [x0, #0x910]
0x05269B5C: af5b7c97  bl #0x3180a18
0x05269B60: 28008052  movz w8, #0x1
0x05269B64: 885e3f39  strb w8, [x20, #0xfd7]
0x05269B68: 530100b4  cbz x19, #0x5269b90
0x05269B6C: 601640f9  ldr x0, [x19, #0x28]
0x05269B70: 000100b4  cbz x0, #0x5269b90
0x05269B74: e1031faa  mov x1, xzr
0x05269B78: d7f04e94  bl #0x6625ed4
0x05269B7C: a00000b4  cbz x0, #0x5269b90
0x05269B80: 00804039  ldrb w0, [x0, #0x20]
0x05269B84: f44f41a9  ldp x20, x19, [sp, #0x10]
0x05269B88: fe0742f8  ldr x30, [sp], #0x20
0x05269B8C: c0035fd6  ret
0x05269B90: 475c7c97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x5269B94 | Merger.Game.Views.GameViewBase<object>$$Awake
; native signature: void Merger_Game_Views_GameViewBase_object___Awake (Merger_Game_Views_GameViewBase_TViewModel__o* __this, const MethodInfo_5269B94* method);
; bytes=220 sha256=0a0c54e9ccbf36304f012afb5e10f193409aa04f0ad1bcc5ea63ad41cc26f4fc status=arm64_complete_bound indexed_start=True
0x05269B94: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x05269B98: f44f01a9  stp x20, x19, [sp, #0x10]
0x05269B9C: 955501d0  adrp x21, #0x7d1b000
0x05269BA0: a8627f39  ldrb w8, [x21, #0xfd8]
0x05269BA4: f40301aa  mov x20, x1
0x05269BA8: f30300aa  mov x19, x0
0x05269BAC: 28010037  tbnz w8, #0, #0x5269bd0
0x05269BB0: 202001d0  adrp x0, #0x766f000
0x05269BB4: 008c41f9  ldr x0, [x0, #0x318]
0x05269BB8: 985b7c97  bl #0x3180a18
0x05269BBC: 802001b0  adrp x0, #0x767a000
0x05269BC0: 00d847f9  ldr x0, [x0, #0xfb0]
0x05269BC4: 955b7c97  bl #0x3180a18
0x05269BC8: 28008052  movz w8, #0x1
0x05269BCC: a8623f39  strb w8, [x21, #0xfd8]
0x05269BD0: 881240f9  ldr x8, [x20, #0x20]
0x05269BD4: e00313aa  mov x0, x19
0x05269BD8: 086140f9  ldr x8, [x8, #0xc0]
0x05269BDC: 010940f9  ldr x1, [x8, #0x10]
0x05269BE0: d7ffff97  bl #0x5269b3c
0x05269BE4: e0000036  tbz w0, #0, #0x5269c00
0x05269BE8: 680240f9  ldr x8, [x19]
0x05269BEC: e00313aa  mov x0, x19
0x05269BF0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x05269BF4: 02855ca9  ldp x2, x1, [x8, #0x1c8]
0x05269BF8: fe57c2a8  ldp x30, x21, [sp], #0x20
0x05269BFC: 40001fd6  br x2
0x05269C00: 730300b4  cbz x19, #0x5269c6c
0x05269C04: 601640f9  ldr x0, [x19, #0x28]
0x05269C08: 200300b4  cbz x0, #0x5269c6c
0x05269C0C: e1031faa  mov x1, xzr
0x05269C10: b1f04e94  bl #0x6625ed4
0x05269C14: 282001d0  adrp x8, #0x766f000
0x05269C18: 088d41f9  ldr x8, [x8, #0x318]
0x05269C1C: f50300aa  mov x21, x0
0x05269C20: 080140f9  ldr x8, [x8]
0x05269C24: e00308aa  mov x0, x8
0x05269C28: 1e5c7c97  bl #0x3180ca0
0x05269C2C: 881240f9  ldr x8, [x20, #0x20]
0x05269C30: e10313aa  mov x1, x19
0x05269C34: e3031faa  mov x3, xzr
0x05269C38: f40300aa  mov x20, x0
0x05269C3C: 086140f9  ldr x8, [x8, #0xc0]
0x05269C40: 021540f9  ldr x2, [x8, #0x28]
0x05269C44: 36d10294  bl #0x531e11c
0x05269C48: 350100b4  cbz x21, #0x5269c6c
0x05269C4C: 882001b0  adrp x8, #0x767a000
0x05269C50: 08d947f9  ldr x8, [x8, #0xfb0]
0x05269C54: e10314aa  mov x1, x20
0x05269C58: f44f41a9  ldp x20, x19, [sp, #0x10]
0x05269C5C: e00315aa  mov x0, x21
0x05269C60: 020140f9  ldr x2, [x8]
0x05269C64: fe57c2a8  ldp x30, x21, [sp], #0x20
0x05269C68: 4690e617  b #0x4c0dd80
0x05269C6C: 105c7c97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x5269C70 | Merger.Game.Views.GameViewBase<object>$$OnDestroy
; native signature: void Merger_Game_Views_GameViewBase_object___OnDestroy (Merger_Game_Views_GameViewBase_TViewModel__o* __this, const MethodInfo_5269C70* method);
; bytes=200 sha256=7d343195e2edf2b15577b433c62c24584b8c7a7591180cfb9195e690f77240d0 status=arm64_complete_bound indexed_start=True
0x05269C70: fe0f1df8  str x30, [sp, #-0x30]!
0x05269C74: f65701a9  stp x22, x21, [sp, #0x10]
0x05269C78: f44f02a9  stp x20, x19, [sp, #0x20]
0x05269C7C: 955501d0  adrp x21, #0x7d1b000
0x05269C80: a8667f39  ldrb w8, [x21, #0xfd9]
0x05269C84: f30301aa  mov x19, x1
0x05269C88: f40300aa  mov x20, x0
0x05269C8C: 28010037  tbnz w8, #0, #0x5269cb0
0x05269C90: 202001d0  adrp x0, #0x766f000
0x05269C94: 008c41f9  ldr x0, [x0, #0x318]
0x05269C98: 605b7c97  bl #0x3180a18
0x05269C9C: a0200190  adrp x0, #0x767d000
0x05269CA0: 005844f9  ldr x0, [x0, #0x8b0]
0x05269CA4: 5d5b7c97  bl #0x3180a18
0x05269CA8: 28008052  movz w8, #0x1
0x05269CAC: a8663f39  strb w8, [x21, #0xfd9]
0x05269CB0: 340400b4  cbz x20, #0x5269d34
0x05269CB4: 801640f9  ldr x0, [x20, #0x28]
0x05269CB8: e00300b4  cbz x0, #0x5269d34
0x05269CBC: 352001d0  adrp x21, #0x766f000
0x05269CC0: b58e41f9  ldr x21, [x21, #0x318]
0x05269CC4: e1031faa  mov x1, xzr
0x05269CC8: 83f04e94  bl #0x6625ed4
0x05269CCC: a80240f9  ldr x8, [x21]
0x05269CD0: f50300aa  mov x21, x0
0x05269CD4: e00308aa  mov x0, x8
0x05269CD8: f25b7c97  bl #0x3180ca0
0x05269CDC: 681240f9  ldr x8, [x19, #0x20]
0x05269CE0: e10314aa  mov x1, x20
0x05269CE4: e3031faa  mov x3, xzr
0x05269CE8: f60300aa  mov x22, x0
0x05269CEC: 086140f9  ldr x8, [x8, #0xc0]
0x05269CF0: 021540f9  ldr x2, [x8, #0x28]
0x05269CF4: 0ad10294  bl #0x531e11c
0x05269CF8: f50100b4  cbz x21, #0x5269d34
0x05269CFC: a8200190  adrp x8, #0x767d000
0x05269D00: 085944f9  ldr x8, [x8, #0x8b0]
0x05269D04: e00315aa  mov x0, x21
0x05269D08: e10316aa  mov x1, x22
0x05269D0C: 020140f9  ldr x2, [x8]
0x05269D10: 4790e697  bl #0x4c0de2c
0x05269D14: 681240f9  ldr x8, [x19, #0x20]
0x05269D18: e00314aa  mov x0, x20
0x05269D1C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x05269D20: f65741a9  ldp x22, x21, [sp, #0x10]
0x05269D24: 086140f9  ldr x8, [x8, #0xc0]
0x05269D28: 011940f9  ldr x1, [x8, #0x30]
0x05269D2C: fe0743f8  ldr x30, [sp], #0x30
0x05269D30: 0220db17  b #0x4931d38
0x05269D34: de5b7c97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x5269D38 | Merger.Game.Views.GameViewBase<object>$$GameStartedChanged
; native signature: void Merger_Game_Views_GameViewBase_object___GameStartedChanged (Merger_Game_Views_GameViewBase_TViewModel__o* __this, bool started, const MethodInfo_5269D38* method);
; bytes=220 sha256=949dc8d2ad8e8fd08d8bc5e0201bcb8602a7b12e7855069a1673b8d9abe424e4 status=arm64_complete_bound indexed_start=True
0x05269D38: fe0f1df8  str x30, [sp, #-0x30]!
0x05269D3C: f65701a9  stp x22, x21, [sp, #0x10]
0x05269D40: f44f02a9  stp x20, x19, [sp, #0x20]
0x05269D44: 965501d0  adrp x22, #0x7d1b000
0x05269D48: c86a7f39  ldrb w8, [x22, #0xfda]
0x05269D4C: f40302aa  mov x20, x2
0x05269D50: f503012a  mov w21, w1
0x05269D54: f30300aa  mov x19, x0
0x05269D58: 28010037  tbnz w8, #0, #0x5269d7c
0x05269D5C: 202001d0  adrp x0, #0x766f000
0x05269D60: 008c41f9  ldr x0, [x0, #0x318]
0x05269D64: 2d5b7c97  bl #0x3180a18
0x05269D68: a0200190  adrp x0, #0x767d000
0x05269D6C: 005844f9  ldr x0, [x0, #0x8b0]
0x05269D70: 2a5b7c97  bl #0x3180a18
0x05269D74: 28008052  movz w8, #0x1
0x05269D78: c86a3f39  strb w8, [x22, #0xfda]
0x05269D7C: 35040036  tbz w21, #0, #0x5269e00
0x05269D80: 930400b4  cbz x19, #0x5269e10
0x05269D84: 601640f9  ldr x0, [x19, #0x28]
0x05269D88: 400400b4  cbz x0, #0x5269e10
0x05269D8C: e1031faa  mov x1, xzr
0x05269D90: 51f04e94  bl #0x6625ed4
0x05269D94: 282001d0  adrp x8, #0x766f000
0x05269D98: 088d41f9  ldr x8, [x8, #0x318]
0x05269D9C: f50300aa  mov x21, x0
0x05269DA0: 080140f9  ldr x8, [x8]
0x05269DA4: e00308aa  mov x0, x8
0x05269DA8: be5b7c97  bl #0x3180ca0
0x05269DAC: 881240f9  ldr x8, [x20, #0x20]
0x05269DB0: e10313aa  mov x1, x19
0x05269DB4: e3031faa  mov x3, xzr
0x05269DB8: f40300aa  mov x20, x0
0x05269DBC: 086140f9  ldr x8, [x8, #0xc0]
0x05269DC0: 021540f9  ldr x2, [x8, #0x28]
0x05269DC4: d6d00294  bl #0x531e11c
0x05269DC8: 550200b4  cbz x21, #0x5269e10
0x05269DCC: a8200190  adrp x8, #0x767d000
0x05269DD0: 085944f9  ldr x8, [x8, #0x8b0]
0x05269DD4: e00315aa  mov x0, x21
0x05269DD8: e10314aa  mov x1, x20
0x05269DDC: 020140f9  ldr x2, [x8]
0x05269DE0: 1390e697  bl #0x4c0de2c
0x05269DE4: 680240f9  ldr x8, [x19]
0x05269DE8: e00313aa  mov x0, x19
0x05269DEC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x05269DF0: f65741a9  ldp x22, x21, [sp, #0x10]
0x05269DF4: 02855ca9  ldp x2, x1, [x8, #0x1c8]
0x05269DF8: fe0743f8  ldr x30, [sp], #0x30
0x05269DFC: 40001fd6  br x2
0x05269E00: f44f42a9  ldp x20, x19, [sp, #0x20]
0x05269E04: f65741a9  ldp x22, x21, [sp, #0x10]
0x05269E08: fe0743f8  ldr x30, [sp], #0x30
0x05269E0C: c0035fd6  ret
0x05269E10: a75b7c97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x5269E14 | Merger.Game.Views.GameViewBase<object>$$GameStarted
; native signature: void Merger_Game_Views_GameViewBase_object___GameStarted (Merger_Game_Views_GameViewBase_TViewModel__o* __this, const MethodInfo_5269E14* method);
; bytes=4 sha256=110f46b5b35c069160560c6ad6786f647dd44e8760a52a46fc22dbbcd7630b91 status=arm64_complete_bound indexed_start=True
0x05269E14: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x5269E18 | Merger.Game.Views.GameViewBase<object>$$.ctor
; native signature: void Merger_Game_Views_GameViewBase_object____ctor (Merger_Game_Views_GameViewBase_TViewModel__o* __this, const MethodInfo_5269E18* method);
; bytes=16 sha256=e4efdec9e88bc1c5ecd593f331fa3c8b405517d424000c50f6b793b0a9c9eca0 status=arm64_complete_bound indexed_start=True
0x05269E18: 281040f9  ldr x8, [x1, #0x20]
0x05269E1C: 086140f9  ldr x8, [x8, #0xc0]
0x05269E20: 011d40f9  ldr x1, [x8, #0x38]
0x05269E24: d61fdb17  b #0x4931d7c

