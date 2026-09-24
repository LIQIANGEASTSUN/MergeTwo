; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 11339 Framework.Core.Command.CommandBase<TSignal>
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; Generic instantiation from Il2CppDumper script.json | RVA 0x4CA256C | Framework.Core.Command.CommandBase<object>$$RequestTransition
; native signature: bool Framework_Core_Command_CommandBase_object___RequestTransition (Framework_Core_Command_CommandBase_TSignal__o* __this, System_String_o* transition, Il2CppObject* payload, const MethodInfo_4CA256C* method);
; bytes=188 sha256=50a70565d72ee1e9710403720d4d24576fec608cc3ac018611cb90528099b1ad status=arm64_complete_bound indexed_start=True
0x04CA256C: fe0f1df8  str x30, [sp, #-0x30]!
0x04CA2570: f65701a9  stp x22, x21, [sp, #0x10]
0x04CA2574: f44f02a9  stp x20, x19, [sp, #0x20]
0x04CA2578: d68301b0  adrp x22, #0x7d1b000
0x04CA257C: c8e24a39  ldrb w8, [x22, #0x2b8]
0x04CA2580: f30302aa  mov x19, x2
0x04CA2584: f40301aa  mov x20, x1
0x04CA2588: f50300aa  mov x21, x0
0x04CA258C: c8000037  tbnz w8, #0, #0x4ca25a4
0x04CA2590: 604e01b0  adrp x0, #0x766f000
0x04CA2594: 006c44f9  ldr x0, [x0, #0x8d8]
0x04CA2598: 20799397  bl #0x3180a18
0x04CA259C: 28008052  movz w8, #0x1
0x04CA25A0: c8e20a39  strb w8, [x22, #0x2b8]
0x04CA25A4: b51640f9  ldr x21, [x21, #0x28]
0x04CA25A8: f50300b4  cbz x21, #0x4ca2624
0x04CA25AC: 6a4e01b0  adrp x10, #0x766f000
0x04CA25B0: a80240f9  ldr x8, [x21]
0x04CA25B4: 4a6d44f9  ldr x10, [x10, #0x8d8]
0x04CA25B8: 095d4279  ldrh w9, [x8, #0x12e]
0x04CA25BC: 410140f9  ldr x1, [x10]
0x04CA25C0: 290100b4  cbz x9, #0x4ca25e4
0x04CA25C4: 0a5940f9  ldr x10, [x8, #0xb0]
0x04CA25C8: 4a210091  add x10, x10, #8
0x04CA25CC: 4b815ff8  ldur x11, [x10, #-8]
0x04CA25D0: 7f0101eb  cmp x11, x1
0x04CA25D4: 00010054  b.eq #0x4ca25f4
0x04CA25D8: 290500f1  subs x9, x9, #1
0x04CA25DC: 4a410091  add x10, x10, #0x10
0x04CA25E0: 61ffff54  b.ne #0x4ca25cc
0x04CA25E4: 22018052  movz w2, #0x9
0x04CA25E8: e00315aa  mov x0, x21
0x04CA25EC: 49d19297  bl #0x3156b10
0x04CA25F0: 05000014  b #0x4ca2604
0x04CA25F4: 490140b9  ldr w9, [x10]
0x04CA25F8: 29250011  add w9, w9, #9
0x04CA25FC: 08d1298b  add x8, x8, w9, sxtw #4
0x04CA2600: 00e10491  add x0, x8, #0x138
0x04CA2604: 040c40a9  ldp x4, x3, [x0]
0x04CA2608: e00315aa  mov x0, x21
0x04CA260C: e10314aa  mov x1, x20
0x04CA2610: e20313aa  mov x2, x19
0x04CA2614: f44f42a9  ldp x20, x19, [sp, #0x20]
0x04CA2618: f65741a9  ldp x22, x21, [sp, #0x10]
0x04CA261C: fe0743f8  ldr x30, [sp], #0x30
0x04CA2620: 80001fd6  br x4
0x04CA2624: a2799397  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4CA2630 | Framework.Core.Command.CommandBase<__Il2CppFullySharedGenericType>$$RequestTransition
; native signature: bool Framework_Core_Command_CommandBase___Il2CppFullySharedGenericType___RequestTransition (Framework_Core_Command_CommandBase_TSignal__o* __this, System_String_o* transition, Il2CppObject* payload, const MethodInfo_4CA2630* method);
; bytes=188 sha256=fda04023f3f4f63e6046dc4738bd4531f505f8ac79ce691d4bfd29c6270036f5 status=arm64_complete_bound indexed_start=True
0x04CA2630: fe0f1df8  str x30, [sp, #-0x30]!
0x04CA2634: f65701a9  stp x22, x21, [sp, #0x10]
0x04CA2638: f44f02a9  stp x20, x19, [sp, #0x20]
0x04CA263C: d68301b0  adrp x22, #0x7d1b000
0x04CA2640: c8e64a39  ldrb w8, [x22, #0x2b9]
0x04CA2644: f30302aa  mov x19, x2
0x04CA2648: f40301aa  mov x20, x1
0x04CA264C: f50300aa  mov x21, x0
0x04CA2650: c8000037  tbnz w8, #0, #0x4ca2668
0x04CA2654: 604e01b0  adrp x0, #0x766f000
0x04CA2658: 006c44f9  ldr x0, [x0, #0x8d8]
0x04CA265C: ef789397  bl #0x3180a18
0x04CA2660: 28008052  movz w8, #0x1
0x04CA2664: c8e60a39  strb w8, [x22, #0x2b9]
0x04CA2668: b51640f9  ldr x21, [x21, #0x28]
0x04CA266C: f50300b4  cbz x21, #0x4ca26e8
0x04CA2670: 6a4e01b0  adrp x10, #0x766f000
0x04CA2674: a80240f9  ldr x8, [x21]
0x04CA2678: 4a6d44f9  ldr x10, [x10, #0x8d8]
0x04CA267C: 095d4279  ldrh w9, [x8, #0x12e]
0x04CA2680: 410140f9  ldr x1, [x10]
0x04CA2684: 290100b4  cbz x9, #0x4ca26a8
0x04CA2688: 0a5940f9  ldr x10, [x8, #0xb0]
0x04CA268C: 4a210091  add x10, x10, #8
0x04CA2690: 4b815ff8  ldur x11, [x10, #-8]
0x04CA2694: 7f0101eb  cmp x11, x1
0x04CA2698: 00010054  b.eq #0x4ca26b8
0x04CA269C: 290500f1  subs x9, x9, #1
0x04CA26A0: 4a410091  add x10, x10, #0x10
0x04CA26A4: 61ffff54  b.ne #0x4ca2690
0x04CA26A8: 22018052  movz w2, #0x9
0x04CA26AC: e00315aa  mov x0, x21
0x04CA26B0: 18d19297  bl #0x3156b10
0x04CA26B4: 05000014  b #0x4ca26c8
0x04CA26B8: 490140b9  ldr w9, [x10]
0x04CA26BC: 29250011  add w9, w9, #9
0x04CA26C0: 08d1298b  add x8, x8, w9, sxtw #4
0x04CA26C4: 00e10491  add x0, x8, #0x138
0x04CA26C8: 040c40a9  ldp x4, x3, [x0]
0x04CA26CC: e00315aa  mov x0, x21
0x04CA26D0: e10314aa  mov x1, x20
0x04CA26D4: e20313aa  mov x2, x19
0x04CA26D8: f44f42a9  ldp x20, x19, [sp, #0x20]
0x04CA26DC: f65741a9  ldp x22, x21, [sp, #0x10]
0x04CA26E0: fe0743f8  ldr x30, [sp], #0x30
0x04CA26E4: 80001fd6  br x4
0x04CA26E8: 71799397  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4CA2628 | Framework.Core.Command.CommandBase<object>$$.ctor
; native signature: void Framework_Core_Command_CommandBase_object____ctor (Framework_Core_Command_CommandBase_TSignal__o* __this, const MethodInfo_4CA2628* method);
; bytes=8 sha256=1b70c2e7d5b3425039c3b91dee7275c74b5e5ffdc0b2ab6b29cd04b1bcb10c45 status=arm64_complete_bound indexed_start=True
0x04CA2628: e1031faa  mov x1, xzr
0x04CA262C: 34427014  b #0x68b2efc

; Generic instantiation from Il2CppDumper script.json | RVA 0x4CA26EC | Framework.Core.Command.CommandBase<__Il2CppFullySharedGenericType>$$.ctor
; native signature: void Framework_Core_Command_CommandBase___Il2CppFullySharedGenericType____ctor (Framework_Core_Command_CommandBase_TSignal__o* __this, const MethodInfo_4CA26EC* method);
; bytes=8 sha256=5bc99177daadccdc336dc0a736df5855b73cd049bef57b520df73119c31c38fb status=arm64_complete_bound indexed_start=True
0x04CA26EC: e1031faa  mov x1, xzr
0x04CA26F0: 03427014  b #0x68b2efc

