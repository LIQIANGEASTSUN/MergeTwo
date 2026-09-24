; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 968 .TimeCycleSystem.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x67945B4 | private static void .cctor() { }
; bytes=104 sha256=a7f7926a979fea472f31259bd5ff3d9b0cfb3d964dc4494329c541808b1564a5 status=arm64_complete_bound indexed_start=True
0x067945B4: fe0f1ef8  str x30, [sp, #-0x20]!
0x067945B8: f44f01a9  stp x20, x19, [sp, #0x10]
0x067945BC: b3ac0090  adrp x19, #0x7d28000
0x067945C0: f47b0090  adrp x20, #0x7710000
0x067945C4: 68e67539  ldrb w8, [x19, #0xd79]
0x067945C8: 94aa42f9  ldr x20, [x20, #0x550]
0x067945CC: c8000037  tbnz w8, #0, #0x67945e4
0x067945D0: e07b0090  adrp x0, #0x7710000
0x067945D4: 00a842f9  ldr x0, [x0, #0x550]
0x067945D8: 10b12797  bl #0x3180a18
0x067945DC: 28008052  movz w8, #0x1
0x067945E0: 68e63539  strb w8, [x19, #0xd79]
0x067945E4: 800240f9  ldr x0, [x20]
0x067945E8: aeb12797  bl #0x3180ca0
0x067945EC: e1031faa  mov x1, xzr
0x067945F0: f30300aa  mov x19, x0
0x067945F4: 0218bd97  bl #0x56da5fc
0x067945F8: 880240f9  ldr x8, [x20]
0x067945FC: e10313aa  mov x1, x19
0x06794600: 085d40f9  ldr x8, [x8, #0xb8]
0x06794604: 130100f9  str x19, [x8]
0x06794608: 880240f9  ldr x8, [x20]
0x0679460C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06794610: 005d40f9  ldr x0, [x8, #0xb8]
0x06794614: fe0742f8  ldr x30, [sp], #0x20
0x06794618: ebb02717  b #0x31809c4

; RVA 0x679461C | public void .ctor() { }
; bytes=8 sha256=af2c44d668d5bebd8882cf466dde246e61ec47301fc91553e3da998cf9580de0 status=arm64_complete_bound indexed_start=True
0x0679461C: e1031faa  mov x1, xzr
0x06794620: f717bd17  b #0x56da5fc

; RVA 0x6794624 | internal bool <GetUnlockedComponents>b__8_0(ITimeCycleComponent component) { }
; bytes=204 sha256=016d1eeb657f432ff83e351a20e5d5f25604bfd1e79431eaf43efd5ec20f514c status=arm64_complete_bound indexed_start=True
0x06794624: fe0f1ef8  str x30, [sp, #-0x20]!
0x06794628: f44f01a9  stp x20, x19, [sp, #0x10]
0x0679462C: b4ac0090  adrp x20, #0x7d28000
0x06794630: 88ea7539  ldrb w8, [x20, #0xd7a]
0x06794634: f30301aa  mov x19, x1
0x06794638: c8000037  tbnz w8, #0, #0x6794650
0x0679463C: 807a00d0  adrp x0, #0x76e6000
0x06794640: 00f442f9  ldr x0, [x0, #0x5e8]
0x06794644: f5b02797  bl #0x3180a18
0x06794648: 28008052  movz w8, #0x1
0x0679464C: 88ea3539  strb w8, [x20, #0xd7a]
0x06794650: f30400b4  cbz x19, #0x67946ec
0x06794654: 897a00d0  adrp x9, #0x76e6000
0x06794658: 29f542f9  ldr x9, [x9, #0x5e8]
0x0679465C: 680240f9  ldr x8, [x19]
0x06794660: 340140f9  ldr x20, [x9]
0x06794664: 095d4279  ldrh w9, [x8, #0x12e]
0x06794668: 811240f9  ldr x1, [x20, #0x20]
0x0679466C: 82a24079  ldrh w2, [x20, #0x50]
0x06794670: 290100b4  cbz x9, #0x6794694
0x06794674: 0a5940f9  ldr x10, [x8, #0xb0]
0x06794678: 4a210091  add x10, x10, #8
0x0679467C: 4b815ff8  ldur x11, [x10, #-8]
0x06794680: 7f0101eb  cmp x11, x1
0x06794684: e0000054  b.eq #0x67946a0
0x06794688: 290500f1  subs x9, x9, #1
0x0679468C: 4a410091  add x10, x10, #0x10
0x06794690: 61ffff54  b.ne #0x679467c
0x06794694: e00313aa  mov x0, x19
0x06794698: 1e092797  bl #0x3156b10
0x0679469C: 05000014  b #0x67946b0
0x067946A0: 490140b9  ldr w9, [x10]
0x067946A4: 2901020b  add w9, w9, w2
0x067946A8: 08d1298b  add x8, x8, w9, sxtw #4
0x067946AC: 00e10491  add x0, x8, #0x138
0x067946B0: 000440f9  ldr x0, [x0, #8]
0x067946B4: e10314aa  mov x1, x20
0x067946B8: 34b12797  bl #0x3180b88
0x067946BC: 080440f9  ldr x8, [x0, #8]
0x067946C0: e10300aa  mov x1, x0
0x067946C4: e00313aa  mov x0, x19
0x067946C8: 00013fd6  blr x8
0x067946CC: 000100b4  cbz x0, #0x67946ec
0x067946D0: e1031faa  mov x1, xzr
0x067946D4: 10a40594  bl #0x68fd714
0x067946D8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x067946DC: e803202a  mvn w8, w0
0x067946E0: 00010012  and w0, w8, #1
0x067946E4: fe0742f8  ldr x30, [sp], #0x20
0x067946E8: c0035fd6  ret
0x067946EC: 70b12797  bl #0x3180cac

