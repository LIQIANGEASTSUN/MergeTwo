; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25680 Merger.MergeBoard.View.MergeBoardCombinationVerificationView
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A36524 | private void Start() { }
; bytes=204 sha256=4809e1a6356fba68691561a8139c52ac7f628492ec4e13b0bfa5d62972966e5e status=arm64_complete_bound indexed_start=True
0x06A36524: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A36528: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A3652C: b5970090  adrp x21, #0x7d2a000
0x06A36530: d4600090  adrp x20, #0x764e000
0x06A36534: a83a5339  ldrb w8, [x21, #0x4ce]
0x06A36538: 947242f9  ldr x20, [x20, #0x4e0]
0x06A3653C: f30300aa  mov x19, x0
0x06A36540: 88010037  tbnz w8, #0, #0x6a36570
0x06A36544: 806600f0  adrp x0, #0x7709000
0x06A36548: 009040f9  ldr x0, [x0, #0x120]
0x06A3654C: 33291d97  bl #0x3180a18
0x06A36550: c06700b0  adrp x0, #0x772f000
0x06A36554: 00d042f9  ldr x0, [x0, #0x5a0]
0x06A36558: 30291d97  bl #0x3180a18
0x06A3655C: c0600090  adrp x0, #0x764e000
0x06A36560: 007042f9  ldr x0, [x0, #0x4e0]
0x06A36564: 2d291d97  bl #0x3180a18
0x06A36568: 28008052  movz w8, #0x1
0x06A3656C: a83a1339  strb w8, [x21, #0x4ce]
0x06A36570: 800240f9  ldr x0, [x20]
0x06A36574: 741e40f9  ldr x20, [x19, #0x38]
0x06A36578: 08e040b9  ldr w8, [x0, #0xe0]
0x06A3657C: 48000035  cbnz w8, #0x6a36584
0x06A36580: 83291d97  bl #0x3180b8c
0x06A36584: e00314aa  mov x0, x20
0x06A36588: e1031faa  mov x1, xzr
0x06A3658C: e2031faa  mov x2, xzr
0x06A36590: 79a11294  bl #0x6edeb74
0x06A36594: 60020036  tbz w0, #0, #0x6a365e0
0x06A36598: 886600f0  adrp x8, #0x7709000
0x06A3659C: 741e40f9  ldr x20, [x19, #0x38]
0x06A365A0: 089140f9  ldr x8, [x8, #0x120]
0x06A365A4: 000140f9  ldr x0, [x8]
0x06A365A8: be291d97  bl #0x3180ca0
0x06A365AC: c86700b0  adrp x8, #0x772f000
0x06A365B0: 08d142f9  ldr x8, [x8, #0x5a0]
0x06A365B4: e10313aa  mov x1, x19
0x06A365B8: e3031faa  mov x3, xzr
0x06A365BC: f50300aa  mov x21, x0
0x06A365C0: 020140f9  ldr x2, [x8]
0x06A365C4: 04afa397  bl #0x53221d4
0x06A365C8: 340100b4  cbz x20, #0x6a365ec
0x06A365CC: e00314aa  mov x0, x20
0x06A365D0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A365D4: e10315aa  mov x1, x21
0x06A365D8: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A365DC: a6f6ff17  b #0x6a34074
0x06A365E0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A365E4: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A365E8: c0035fd6  ret
0x06A365EC: b0291d97  bl #0x3180cac

; RVA 0x6A365F0 | protected override void OnDestroy() { }
; bytes=224 sha256=3da0e7440338dee86f78cc0a21f4a2d17b02aff015e0a3688b6de82966b5fd3e status=arm64_complete_bound indexed_start=True
0x06A365F0: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A365F4: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A365F8: b5970090  adrp x21, #0x7d2a000
0x06A365FC: d4600090  adrp x20, #0x764e000
0x06A36600: a83e5339  ldrb w8, [x21, #0x4cf]
0x06A36604: 947242f9  ldr x20, [x20, #0x4e0]
0x06A36608: f30300aa  mov x19, x0
0x06A3660C: e8010037  tbnz w8, #0, #0x6a36648
0x06A36610: 806600f0  adrp x0, #0x7709000
0x06A36614: 009040f9  ldr x0, [x0, #0x120]
0x06A36618: 00291d97  bl #0x3180a18
0x06A3661C: c06700b0  adrp x0, #0x772f000
0x06A36620: 00d042f9  ldr x0, [x0, #0x5a0]
0x06A36624: fd281d97  bl #0x3180a18
0x06A36628: c0600090  adrp x0, #0x764e000
0x06A3662C: 007042f9  ldr x0, [x0, #0x4e0]
0x06A36630: fa281d97  bl #0x3180a18
0x06A36634: c06700b0  adrp x0, #0x772f000
0x06A36638: 00d442f9  ldr x0, [x0, #0x5a8]
0x06A3663C: f7281d97  bl #0x3180a18
0x06A36640: 28008052  movz w8, #0x1
0x06A36644: a83e1339  strb w8, [x21, #0x4cf]
0x06A36648: 800240f9  ldr x0, [x20]
0x06A3664C: 741e40f9  ldr x20, [x19, #0x38]
0x06A36650: 08e040b9  ldr w8, [x0, #0xe0]
0x06A36654: 48000035  cbnz w8, #0x6a3665c
0x06A36658: 4d291d97  bl #0x3180b8c
0x06A3665C: e00314aa  mov x0, x20
0x06A36660: e1031faa  mov x1, xzr
0x06A36664: e2031faa  mov x2, xzr
0x06A36668: 43a11294  bl #0x6edeb74
0x06A3666C: 20020036  tbz w0, #0, #0x6a366b0
0x06A36670: 886600f0  adrp x8, #0x7709000
0x06A36674: 741e40f9  ldr x20, [x19, #0x38]
0x06A36678: 089140f9  ldr x8, [x8, #0x120]
0x06A3667C: 000140f9  ldr x0, [x8]
0x06A36680: 88291d97  bl #0x3180ca0
0x06A36684: c86700b0  adrp x8, #0x772f000
0x06A36688: 08d142f9  ldr x8, [x8, #0x5a0]
0x06A3668C: e10313aa  mov x1, x19
0x06A36690: e3031faa  mov x3, xzr
0x06A36694: f50300aa  mov x21, x0
0x06A36698: 020140f9  ldr x2, [x8]
0x06A3669C: ceaea397  bl #0x53221d4
0x06A366A0: 740100b4  cbz x20, #0x6a366cc
0x06A366A4: e00314aa  mov x0, x20
0x06A366A8: e10315aa  mov x1, x21
0x06A366AC: fef6ff97  bl #0x6a342a4
0x06A366B0: c86700b0  adrp x8, #0x772f000
0x06A366B4: 08d542f9  ldr x8, [x8, #0x5a8]
0x06A366B8: e00313aa  mov x0, x19
0x06A366BC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A366C0: 010140f9  ldr x1, [x8]
0x06A366C4: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A366C8: 9ced7b17  b #0x4931d38
0x06A366CC: 78291d97  bl #0x3180cac

; RVA 0x6A366D0 | public void ConfirmCombination(TickArgs boardResult) { }
; bytes=156 sha256=b129d6582ddc044e8e64b6a394fb8e12848c62231c2bbdfb2ebaf1454e599ecb status=arm64_complete_bound indexed_start=True
0x06A366D0: ffc300d1  sub sp, sp, #0x30
0x06A366D4: fe5701a9  stp x30, x21, [sp, #0x10]
0x06A366D8: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A366DC: b5970090  adrp x21, #0x7d2a000
0x06A366E0: a8425339  ldrb w8, [x21, #0x4d0]
0x06A366E4: f40301aa  mov x20, x1
0x06A366E8: f30300aa  mov x19, x0
0x06A366EC: 28010037  tbnz w8, #0, #0x6a36710
0x06A366F0: c06700b0  adrp x0, #0x772f000
0x06A366F4: 00d842f9  ldr x0, [x0, #0x5b0]
0x06A366F8: c8281d97  bl #0x3180a18
0x06A366FC: c06700b0  adrp x0, #0x772f000
0x06A36700: 00dc42f9  ldr x0, [x0, #0x5b8]
0x06A36704: c5281d97  bl #0x3180a18
0x06A36708: 28008052  movz w8, #0x1
0x06A3670C: a8421339  strb w8, [x21, #0x4d0]
0x06A36710: ff0700f9  str xzr, [sp, #8]
0x06A36714: b40200b4  cbz x20, #0x6a36768
0x06A36718: c86700b0  adrp x8, #0x772f000
0x06A3671C: 08d942f9  ldr x8, [x8, #0x5b0]
0x06A36720: e00314aa  mov x0, x20
0x06A36724: 010140f9  ldr x1, [x8]
0x06A36728: 25384e97  bl #0x3dc47bc
0x06A3672C: 60010036  tbz w0, #0, #0x6a36758
0x06A36730: c86700b0  adrp x8, #0x772f000
0x06A36734: 08dd42f9  ldr x8, [x8, #0x5b8]
0x06A36738: e1230091  add x1, sp, #8
0x06A3673C: e00314aa  mov x0, x20
0x06A36740: 020140f9  ldr x2, [x8]
0x06A36744: 373a4e97  bl #0x3dc5020
0x06A36748: 80000036  tbz w0, #0, #0x6a36758
0x06A3674C: e10740f9  ldr x1, [sp, #8]
0x06A36750: e00313aa  mov x0, x19
0x06A36754: 06000094  bl #0x6a3676c
0x06A36758: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A3675C: fe5741a9  ldp x30, x21, [sp, #0x10]
0x06A36760: ffc30091  add sp, sp, #0x30
0x06A36764: c0035fd6  ret
0x06A36768: 51291d97  bl #0x3180cac

; RVA 0x6A3676C | private void OpenVerifyCombinationPopup(PendingItemsCombinationResult result) { }
; bytes=620 sha256=991f50bf4c6e9ee29780a80324fa428f12836ad2a1db931e7b8dcd8453f41a0d status=arm64_complete_bound indexed_start=True
0x06A3676C: ff0302d1  sub sp, sp, #0x80
0x06A36770: fd7b02a9  stp x29, x30, [sp, #0x20]
0x06A36774: fc6f03a9  stp x28, x27, [sp, #0x30]
0x06A36778: fa6704a9  stp x26, x25, [sp, #0x40]
0x06A3677C: f85f05a9  stp x24, x23, [sp, #0x50]
0x06A36780: f65706a9  stp x22, x21, [sp, #0x60]
0x06A36784: f44f07a9  stp x20, x19, [sp, #0x70]
0x06A36788: b4970090  adrp x20, #0x7d2a000
0x06A3678C: d66700b0  adrp x22, #0x772f000
0x06A36790: 88465339  ldrb w8, [x20, #0x4d1]
0x06A36794: d6e242f9  ldr x22, [x22, #0x5c0]
0x06A36798: f50301aa  mov x21, x1
0x06A3679C: f30300aa  mov x19, x0
0x06A367A0: 68030037  tbnz w8, #0, #0x6a3680c
0x06A367A4: c06500f0  adrp x0, #0x76f1000
0x06A367A8: 008842f9  ldr x0, [x0, #0x510]
0x06A367AC: 9b281d97  bl #0x3180a18
0x06A367B0: c0600090  adrp x0, #0x764e000
0x06A367B4: 00ac43f9  ldr x0, [x0, #0x758]
0x06A367B8: 98281d97  bl #0x3180a18
0x06A367BC: c06100b0  adrp x0, #0x766f000
0x06A367C0: 003046f9  ldr x0, [x0, #0xc60]
0x06A367C4: 95281d97  bl #0x3180a18
0x06A367C8: 806600f0  adrp x0, #0x7709000
0x06A367CC: 004841f9  ldr x0, [x0, #0x290]
0x06A367D0: 92281d97  bl #0x3180a18
0x06A367D4: c06700b0  adrp x0, #0x772f000
0x06A367D8: 00e442f9  ldr x0, [x0, #0x5c8]
0x06A367DC: 8f281d97  bl #0x3180a18
0x06A367E0: c06700b0  adrp x0, #0x772f000
0x06A367E4: 00e842f9  ldr x0, [x0, #0x5d0]
0x06A367E8: 8c281d97  bl #0x3180a18
0x06A367EC: c06700b0  adrp x0, #0x772f000
0x06A367F0: 00e042f9  ldr x0, [x0, #0x5c0]
0x06A367F4: 89281d97  bl #0x3180a18
0x06A367F8: c06700b0  adrp x0, #0x772f000
0x06A367FC: 00ec42f9  ldr x0, [x0, #0x5d8]
0x06A36800: 86281d97  bl #0x3180a18
0x06A36804: 28008052  movz w8, #0x1
0x06A36808: 88461339  strb w8, [x20, #0x4d1]
0x06A3680C: c00240f9  ldr x0, [x22]
0x06A36810: 24291d97  bl #0x3180ca0
0x06A36814: e1031faa  mov x1, xzr
0x06A36818: f40300aa  mov x20, x0
0x06A3681C: 788fb297  bl #0x56da5fc
0x06A36820: b40d00b4  cbz x20, #0x6a369d4
0x06A36824: e00314aa  mov x0, x20
0x06A36828: 130c01f8  str x19, [x0, #0x10]!
0x06A3682C: e10313aa  mov x1, x19
0x06A36830: 65281d97  bl #0x31809c4
0x06A36834: f80314aa  mov x24, x20
0x06A36838: 150f02f8  str x21, [x24, #0x20]!
0x06A3683C: e00318aa  mov x0, x24
0x06A36840: e10315aa  mov x1, x21
0x06A36844: 60281d97  bl #0x31809c4
0x06A36848: 080340f9  ldr x8, [x24]
0x06A3684C: 480c00b4  cbz x8, #0x6a369d4
0x06A36850: 091140b9  ldr w9, [x8, #0x10]
0x06A36854: e00313aa  mov x0, x19
0x06A36858: 891a00b9  str w9, [x20, #0x18]
0x06A3685C: 010d40f9  ldr x1, [x8, #0x18]
0x06A36860: 60000094  bl #0x6a369e0
0x06A36864: 881240f9  ldr x8, [x20, #0x20]
0x06A36868: 680b00b4  cbz x8, #0x6a369d4
0x06A3686C: 011140f9  ldr x1, [x8, #0x20]
0x06A36870: f60300aa  mov x22, x0
0x06A36874: e00313aa  mov x0, x19
0x06A36878: 5a000094  bl #0x6a369e0
0x06A3687C: 080340f9  ldr x8, [x24]
0x06A36880: a80a00b4  cbz x8, #0x6a369d4
0x06A36884: f70300aa  mov x23, x0
0x06A36888: 601640f9  ldr x0, [x19, #0x28]
0x06A3688C: 400a00b4  cbz x0, #0x6a369d4
0x06A36890: 010d40f9  ldr x1, [x8, #0x18]
0x06A36894: c8f0ff97  bl #0x6a32bb4
0x06A36898: 080340f9  ldr x8, [x24]
0x06A3689C: c80900b4  cbz x8, #0x6a369d4
0x06A368A0: f50300aa  mov x21, x0
0x06A368A4: 601640f9  ldr x0, [x19, #0x28]
0x06A368A8: 600900b4  cbz x0, #0x6a369d4
0x06A368AC: 011140f9  ldr x1, [x8, #0x20]
0x06A368B0: c1f0ff97  bl #0x6a32bb4
0x06A368B4: 080340f9  ldr x8, [x24]
0x06A368B8: e80800b4  cbz x8, #0x6a369d4
0x06A368BC: f80300aa  mov x24, x0
0x06A368C0: 601640f9  ldr x0, [x19, #0x28]
0x06A368C4: 800800b4  cbz x0, #0x6a369d4
0x06A368C8: d96500f0  adrp x25, #0x76f1000
0x06A368CC: dc6700b0  adrp x28, #0x772f000
0x06A368D0: 398b42f9  ldr x25, [x25, #0x510]
0x06A368D4: 9ce742f9  ldr x28, [x28, #0x5c8]
0x06A368D8: 011540f9  ldr x1, [x8, #0x28]
0x06A368DC: dd6700b0  adrp x29, #0x772f000
0x06A368E0: bdeb42f9  ldr x29, [x29, #0x5d0]
0x06A368E4: 89f0ff97  bl #0x6a32b08
0x06A368E8: 280340f9  ldr x8, [x25]
0x06A368EC: 9a1a40b9  ldr w26, [x20, #0x18]
0x06A368F0: fb0300aa  mov x27, x0
0x06A368F4: e00308aa  mov x0, x8
0x06A368F8: ea281d97  bl #0x3180ca0
0x06A368FC: 820340f9  ldr x2, [x28]
0x06A36900: e10314aa  mov x1, x20
0x06A36904: e3031faa  mov x3, xzr
0x06A36908: fc0300aa  mov x28, x0
0x06A3690C: c0dba397  bl #0x532d80c
0x06A36910: c8600090  adrp x8, #0x764e000
0x06A36914: 08ad43f9  ldr x8, [x8, #0x758]
0x06A36918: 000140f9  ldr x0, [x8]
0x06A3691C: e1281d97  bl #0x3180ca0
0x06A36920: a20340f9  ldr x2, [x29]
0x06A36924: e10314aa  mov x1, x20
0x06A36928: e3031faa  mov x3, xzr
0x06A3692C: fd0300aa  mov x29, x0
0x06A36930: 80dbae97  bl #0x55ed730
0x06A36934: 886600f0  adrp x8, #0x7709000
0x06A36938: 084941f9  ldr x8, [x8, #0x290]
0x06A3693C: 000140f9  ldr x0, [x8]
0x06A36940: d8281d97  bl #0x3180ca0
0x06A36944: e1031a2a  mov w1, w26
0x06A36948: e20316aa  mov x2, x22
0x06A3694C: e30317aa  mov x3, x23
0x06A36950: e4031caa  mov x4, x28
0x06A36954: e50315aa  mov x5, x21
0x06A36958: e60318aa  mov x6, x24
0x06A3695C: e7031baa  mov x7, x27
0x06A36960: f90300aa  mov x25, x0
0x06A36964: fdff00a9  stp x29, xzr, [sp, #8]
0x06A36968: fb0300f9  str x27, [sp]
0x06A3696C: bbeef297  bl #0x66f2458
0x06A36970: 811240f9  ldr x1, [x20, #0x20]
0x06A36974: d46100b0  adrp x20, #0x766f000
0x06A36978: 943246f9  ldr x20, [x20, #0xc60]
0x06A3697C: e00313aa  mov x0, x19
0x06A36980: 32000094  bl #0x6a36a48
0x06A36984: 800240f9  ldr x0, [x20]
0x06A36988: 731640f9  ldr x19, [x19, #0x28]
0x06A3698C: 08e040b9  ldr w8, [x0, #0xe0]
0x06A36990: 48000035  cbnz w8, #0x6a36998
0x06A36994: 7e281d97  bl #0x3180b8c
0x06A36998: f30100b4  cbz x19, #0x6a369d4
0x06A3699C: 880240f9  ldr x8, [x20]
0x06A369A0: e00313aa  mov x0, x19
0x06A369A4: e20319aa  mov x2, x25
0x06A369A8: f44f47a9  ldp x20, x19, [sp, #0x70]
0x06A369AC: 085d40f9  ldr x8, [x8, #0xb8]
0x06A369B0: f65746a9  ldp x22, x21, [sp, #0x60]
0x06A369B4: f85f45a9  ldp x24, x23, [sp, #0x50]
0x06A369B8: fa6744a9  ldp x26, x25, [sp, #0x40]
0x06A369BC: 014d40f9  ldr x1, [x8, #0x98]
0x06A369C0: fc6f43a9  ldp x28, x27, [sp, #0x30]
0x06A369C4: fd7b42a9  ldp x29, x30, [sp, #0x20]
0x06A369C8: e3031faa  mov x3, xzr
0x06A369CC: ff030291  add sp, sp, #0x80
0x06A369D0: 6851fc17  b #0x694af70
0x06A369D4: b6281d97  bl #0x3180cac

; RVA 0x6A36AD8 | private void OnItemRemoved(IBoardItemView boardItemView) { }
; bytes=144 sha256=ece5190df374b9d0b85a2428bfe643a0f37388204fcef90bd0dc6a1d50c2521f status=arm64_complete_bound indexed_start=True
0x06A36AD8: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A36ADC: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A36AE0: b5970090  adrp x21, #0x7d2a000
0x06A36AE4: a84a5339  ldrb w8, [x21, #0x4d2]
0x06A36AE8: f40301aa  mov x20, x1
0x06A36AEC: f30300aa  mov x19, x0
0x06A36AF0: c8000037  tbnz w8, #0, #0x6a36b08
0x06A36AF4: c06700b0  adrp x0, #0x772f000
0x06A36AF8: 00ec42f9  ldr x0, [x0, #0x5d8]
0x06A36AFC: c7271d97  bl #0x3180a18
0x06A36B00: 28008052  movz w8, #0x1
0x06A36B04: a84a1339  strb w8, [x21, #0x4d2]
0x06A36B08: 68024139  ldrb w8, [x19, #0x40]
0x06A36B0C: 28010034  cbz w8, #0x6a36b30
0x06A36B10: 682e40f9  ldr x8, [x19, #0x58]
0x06A36B14: e80000b4  cbz x8, #0x6a36b30
0x06A36B18: 692640f9  ldr x9, [x19, #0x48]
0x06A36B1C: 3f0114eb  cmp x9, x20
0x06A36B20: e0000054  b.eq #0x6a36b3c
0x06A36B24: 692a40f9  ldr x9, [x19, #0x50]
0x06A36B28: 3f0114eb  cmp x9, x20
0x06A36B2C: 80000054  b.eq #0x6a36b3c
0x06A36B30: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A36B34: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A36B38: c0035fd6  ret
0x06A36B3C: 018941a9  ldp x1, x2, [x8, #0x18]
0x06A36B40: 031140b9  ldr w3, [x8, #0x10]
0x06A36B44: e00313aa  mov x0, x19
0x06A36B48: 08000094  bl #0x6a36b68
0x06A36B4C: 601640f9  ldr x0, [x19, #0x28]
0x06A36B50: a00000b4  cbz x0, #0x6a36b64
0x06A36B54: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A36B58: e1031faa  mov x1, xzr
0x06A36B5C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A36B60: 3351fc17  b #0x694b02c
0x06A36B64: 52281d97  bl #0x3180cac

; RVA 0x6A369E0 | private BoardItemPosition GetBoardItemPosition(Entity entity) { }
; bytes=104 sha256=94ceb1d2c7289052ad48375c65e6afe03a14f69e1aa3613a03df6fcd7346fac5 status=arm64_complete_bound indexed_start=True
0x06A369E0: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A369E4: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A369E8: b5970090  adrp x21, #0x7d2a000
0x06A369EC: a84e5339  ldrb w8, [x21, #0x4d3]
0x06A369F0: f40301aa  mov x20, x1
0x06A369F4: f30300aa  mov x19, x0
0x06A369F8: c8000037  tbnz w8, #0, #0x6a36a10
0x06A369FC: 406400d0  adrp x0, #0x76c0000
0x06A36A00: 006447f9  ldr x0, [x0, #0xec8]
0x06A36A04: 05281d97  bl #0x3180a18
0x06A36A08: 28008052  movz w8, #0x1
0x06A36A0C: a84e1339  strb w8, [x21, #0x4d3]
0x06A36A10: b40100b4  cbz x20, #0x6a36a44
0x06A36A14: 486400d0  adrp x8, #0x76c0000
0x06A36A18: 086547f9  ldr x8, [x8, #0xec8]
0x06A36A1C: e00314aa  mov x0, x20
0x06A36A20: 010140f9  ldr x1, [x8]
0x06A36A24: 1b914797  bl #0x3c1ae90
0x06A36A28: 681a40f9  ldr x8, [x19, #0x30]
0x06A36A2C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A36A30: e10300aa  mov x1, x0
0x06A36A34: e2031faa  mov x2, xzr
0x06A36A38: e00308aa  mov x0, x8
0x06A36A3C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A36A40: bd890114  b #0x6a99134
0x06A36A44: 9a281d97  bl #0x3180cac

; RVA 0x6A36B68 | private void OnVerifyCombinationFailed(Entity firstItem, Entity secondItem, MergeCheckItemType checkType) { }
; bytes=180 sha256=04dacae8148ef84bc20c8c505508f31c425dfbd8e31737a659df543cc76d497f status=arm64_complete_bound indexed_start=True
0x06A36B68: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x06A36B6C: f65701a9  stp x22, x21, [sp, #0x10]
0x06A36B70: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A36B74: b7970090  adrp x23, #0x7d2a000
0x06A36B78: e8525339  ldrb w8, [x23, #0x4d4]
0x06A36B7C: f303032a  mov w19, w3
0x06A36B80: f40302aa  mov x20, x2
0x06A36B84: f50301aa  mov x21, x1
0x06A36B88: f60300aa  mov x22, x0
0x06A36B8C: 28010037  tbnz w8, #0, #0x6a36bb0
0x06A36B90: 406400d0  adrp x0, #0x76c0000
0x06A36B94: 006447f9  ldr x0, [x0, #0xec8]
0x06A36B98: a0271d97  bl #0x3180a18
0x06A36B9C: c06700b0  adrp x0, #0x772f000
0x06A36BA0: 00ec42f9  ldr x0, [x0, #0x5d8]
0x06A36BA4: 9d271d97  bl #0x3180a18
0x06A36BA8: 28008052  movz w8, #0x1
0x06A36BAC: e8521339  strb w8, [x23, #0x4d4]
0x06A36BB0: e00316aa  mov x0, x22
0x06A36BB4: 1a000094  bl #0x6a36c1c
0x06A36BB8: 150300b4  cbz x21, #0x6a36c18
0x06A36BBC: 576400d0  adrp x23, #0x76c0000
0x06A36BC0: f76647f9  ldr x23, [x23, #0xec8]
0x06A36BC4: d61640f9  ldr x22, [x22, #0x28]
0x06A36BC8: e00315aa  mov x0, x21
0x06A36BCC: e10240f9  ldr x1, [x23]
0x06A36BD0: b0904797  bl #0x3c1ae90
0x06A36BD4: 340200b4  cbz x20, #0x6a36c18
0x06A36BD8: e10240f9  ldr x1, [x23]
0x06A36BDC: f50300aa  mov x21, x0
0x06A36BE0: e00314aa  mov x0, x20
0x06A36BE4: ab904797  bl #0x3c1ae90
0x06A36BE8: 960100b4  cbz x22, #0x6a36c18
0x06A36BEC: e30300aa  mov x3, x0
0x06A36BF0: c03640f9  ldr x0, [x22, #0x68]
0x06A36BF4: 200100b4  cbz x0, #0x6a36c18
0x06A36BF8: e203152a  mov w2, w21
0x06A36BFC: e403132a  mov w4, w19
0x06A36C00: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A36C04: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A36C08: e1031f2a  mov w1, wzr
0x06A36C0C: e5031faa  mov x5, xzr
0x06A36C10: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x06A36C14: fc920114  b #0x6a9b804
0x06A36C18: 25281d97  bl #0x3180cac

; RVA 0x6A36C58 | private void OnVerifyCombinationSuccess(BoardItemPosition firstItemPosition, BoardItemPosition secondItemPosition, MergeCheckItemType checkType) { }
; bytes=296 sha256=24998c41a96eab920b76caac783686a3310a982c8e795ad412efb81309516268 status=arm64_complete_bound indexed_start=True
0x06A36C58: ff0301d1  sub sp, sp, #0x40
0x06A36C5C: fe5f01a9  stp x30, x23, [sp, #0x10]
0x06A36C60: f65702a9  stp x22, x21, [sp, #0x20]
0x06A36C64: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A36C68: b7970090  adrp x23, #0x7d2a000
0x06A36C6C: e8565339  ldrb w8, [x23, #0x4d5]
0x06A36C70: f303032a  mov w19, w3
0x06A36C74: f50302aa  mov x21, x2
0x06A36C78: f60301aa  mov x22, x1
0x06A36C7C: f40300aa  mov x20, x0
0x06A36C80: 88010037  tbnz w8, #0, #0x6a36cb0
0x06A36C84: 60610090  adrp x0, #0x7662000
0x06A36C88: 007444f9  ldr x0, [x0, #0x8e8]
0x06A36C8C: 63271d97  bl #0x3180a18
0x06A36C90: 606100b0  adrp x0, #0x7663000
0x06A36C94: 003c43f9  ldr x0, [x0, #0x678]
0x06A36C98: 60271d97  bl #0x3180a18
0x06A36C9C: c06700b0  adrp x0, #0x772f000
0x06A36CA0: 00ec42f9  ldr x0, [x0, #0x5d8]
0x06A36CA4: 5d271d97  bl #0x3180a18
0x06A36CA8: 28008052  movz w8, #0x1
0x06A36CAC: e8561339  strb w8, [x23, #0x4d5]
0x06A36CB0: e00314aa  mov x0, x20
0x06A36CB4: daffff97  bl #0x6a36c1c
0x06A36CB8: 971a40f9  ldr x23, [x20, #0x30]
0x06A36CBC: e10316aa  mov x1, x22
0x06A36CC0: e2031faa  mov x2, xzr
0x06A36CC4: e00317aa  mov x0, x23
0x06A36CC8: 99890194  bl #0x6a9932c
0x06A36CCC: 970500b4  cbz x23, #0x6a36d7c
0x06A36CD0: e10300aa  mov x1, x0
0x06A36CD4: e00317aa  mov x0, x23
0x06A36CD8: 2a000094  bl #0x6a36d80
0x06A36CDC: e00700f9  str x0, [sp, #8]
0x06A36CE0: 971a40f9  ldr x23, [x20, #0x30]
0x06A36CE4: f60300aa  mov x22, x0
0x06A36CE8: e10315aa  mov x1, x21
0x06A36CEC: e2031faa  mov x2, xzr
0x06A36CF0: e00317aa  mov x0, x23
0x06A36CF4: 8e890194  bl #0x6a9932c
0x06A36CF8: 370400b4  cbz x23, #0x6a36d7c
0x06A36CFC: e10300aa  mov x1, x0
0x06A36D00: e00317aa  mov x0, x23
0x06A36D04: d51e0012  and w21, w22, #0xff
0x06A36D08: 1e000094  bl #0x6a36d80
0x06A36D0C: e00300f9  str x0, [sp]
0x06A36D10: d5020034  cbz w21, #0x6a36d68
0x06A36D14: 1f1c0072  tst w0, #0xff
0x06A36D18: 80020054  b.eq #0x6a36d68
0x06A36D1C: 951640f9  ldr x21, [x20, #0x28]
0x06A36D20: 746100b0  adrp x20, #0x7663000
0x06A36D24: 943e43f9  ldr x20, [x20, #0x678]
0x06A36D28: e0230091  add x0, sp, #8
0x06A36D2C: 810240f9  ldr x1, [x20]
0x06A36D30: 72126197  bl #0x427b6f8
0x06A36D34: 810240f9  ldr x1, [x20]
0x06A36D38: f403002a  mov w20, w0
0x06A36D3C: e0030091  mov x0, sp
0x06A36D40: 6e126197  bl #0x427b6f8
0x06A36D44: d50100b4  cbz x21, #0x6a36d7c
0x06A36D48: e303002a  mov w3, w0
0x06A36D4C: a03640f9  ldr x0, [x21, #0x68]
0x06A36D50: 600100b4  cbz x0, #0x6a36d7c
0x06A36D54: 21008052  movz w1, #0x1
0x06A36D58: e203142a  mov w2, w20
0x06A36D5C: e403132a  mov w4, w19
0x06A36D60: e5031faa  mov x5, xzr
0x06A36D64: a8920194  bl #0x6a9b804
0x06A36D68: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A36D6C: f65742a9  ldp x22, x21, [sp, #0x20]
0x06A36D70: fe5f41a9  ldp x30, x23, [sp, #0x10]
0x06A36D74: ff030191  add sp, sp, #0x40
0x06A36D78: c0035fd6  ret
0x06A36D7C: cc271d97  bl #0x3180cac

; RVA 0x6A36A48 | private void OnPopupOpened(PendingItemsCombinationResult result) { }
; bytes=144 sha256=899a6b22c759bed95a54d05adaded248aaab594954af35f4ba30c2dc07f0ab42 status=arm64_complete_bound indexed_start=True
0x06A36A48: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A36A4C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A36A50: f40300aa  mov x20, x0
0x06A36A54: 001c40f9  ldr x0, [x0, #0x38]
0x06A36A58: f30301aa  mov x19, x1
0x06A36A5C: 28008052  movz w8, #0x1
0x06A36A60: 88020139  strb w8, [x20, #0x40]
0x06A36A64: c00000b4  cbz x0, #0x6a36a7c
0x06A36A68: 730300b4  cbz x19, #0x6a36ad4
0x06A36A6C: 610e40f9  ldr x1, [x19, #0x18]
0x06A36A70: 4d010094  bl #0x6a36fa4
0x06A36A74: e10300aa  mov x1, x0
0x06A36A78: 02000014  b #0x6a36a80
0x06A36A7C: e1031faa  mov x1, xzr
0x06A36A80: f50314aa  mov x21, x20
0x06A36A84: a18e04f8  str x1, [x21, #0x48]!
0x06A36A88: e00315aa  mov x0, x21
0x06A36A8C: ce271d97  bl #0x31809c4
0x06A36A90: a0025ff8  ldur x0, [x21, #-0x10]
0x06A36A94: c00000b4  cbz x0, #0x6a36aac
0x06A36A98: f30100b4  cbz x19, #0x6a36ad4
0x06A36A9C: 611240f9  ldr x1, [x19, #0x20]
0x06A36AA0: 41010094  bl #0x6a36fa4
0x06A36AA4: e10300aa  mov x1, x0
0x06A36AA8: 02000014  b #0x6a36ab0
0x06A36AAC: e1031faa  mov x1, xzr
0x06A36AB0: e00314aa  mov x0, x20
0x06A36AB4: 010c05f8  str x1, [x0, #0x50]!
0x06A36AB8: c3271d97  bl #0x31809c4
0x06A36ABC: 938e05f8  str x19, [x20, #0x58]!
0x06A36AC0: e00314aa  mov x0, x20
0x06A36AC4: e10313aa  mov x1, x19
0x06A36AC8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A36ACC: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A36AD0: bd271d17  b #0x31809c4
0x06A36AD4: 76281d97  bl #0x3180cac

; RVA 0x6A36C1C | private void OnPopupClosed() { }
; bytes=60 sha256=5dee80d15a745bfb762bdb32338da19f9f421bc68c1671d0931ccf7db56d339a status=arm64_complete_bound indexed_start=True
0x06A36C1C: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x06A36C20: f30300aa  mov x19, x0
0x06A36C24: 1f000139  strb wzr, [x0, #0x40]
0x06A36C28: 1f8c04f8  str xzr, [x0, #0x48]!
0x06A36C2C: e1031faa  mov x1, xzr
0x06A36C30: 65271d97  bl #0x31809c4
0x06A36C34: e00313aa  mov x0, x19
0x06A36C38: 1f0c05f8  str xzr, [x0, #0x50]!
0x06A36C3C: e1031faa  mov x1, xzr
0x06A36C40: 61271d97  bl #0x31809c4
0x06A36C44: 7f8e05f8  str xzr, [x19, #0x58]!
0x06A36C48: e00313aa  mov x0, x19
0x06A36C4C: e1031faa  mov x1, xzr
0x06A36C50: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x06A36C54: 5c271d17  b #0x31809c4

; RVA 0x6A36FFC | public void .ctor() { }
; bytes=72 sha256=1f95c2acc6f7e5284daa418b539cceff3dab6e938bc80934be5ff5165db7b031 status=arm64_complete_bound indexed_start=True
0x06A36FFC: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A37000: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A37004: 949700f0  adrp x20, #0x7d2a000
0x06A37008: d5670090  adrp x21, #0x772f000
0x06A3700C: 885a5339  ldrb w8, [x20, #0x4d6]
0x06A37010: b50e43f9  ldr x21, [x21, #0x618]
0x06A37014: f30300aa  mov x19, x0
0x06A37018: c8000037  tbnz w8, #0, #0x6a37030
0x06A3701C: c0670090  adrp x0, #0x772f000
0x06A37020: 000c43f9  ldr x0, [x0, #0x618]
0x06A37024: 7d261d97  bl #0x3180a18
0x06A37028: 28008052  movz w8, #0x1
0x06A3702C: 885a1339  strb w8, [x20, #0x4d6]
0x06A37030: a10240f9  ldr x1, [x21]
0x06A37034: e00313aa  mov x0, x19
0x06A37038: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A3703C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A37040: 4feb7b17  b #0x4931d7c

