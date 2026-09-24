; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25775 Merger.MergeBoard.Systems.SplitSystem
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A75450 | public void Tick(TickContext context) { }
; bytes=1220 sha256=eea6d89a05d41633c03e56266b7f4f193174684a6b53a44acf50b03804bb66c7 status=arm64_complete_bound indexed_start=True
0x06A75450: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x06A75454: fc6f01a9  stp x28, x27, [sp, #0x10]
0x06A75458: fa6702a9  stp x26, x25, [sp, #0x20]
0x06A7545C: f85f03a9  stp x24, x23, [sp, #0x30]
0x06A75460: f65704a9  stp x22, x21, [sp, #0x40]
0x06A75464: f44f05a9  stp x20, x19, [sp, #0x50]
0x06A75468: ff030ad1  sub sp, sp, #0x280
0x06A7546C: 48d03bd5  mrs x8, tpidr_el0
0x06A75470: e80700f9  str x8, [sp, #8]
0x06A75474: 081540f9  ldr x8, [x8, #0x28]
0x06A75478: ba9500b0  adrp x26, #0x7d2a000
0x06A7547C: d96500f0  adrp x25, #0x7730000
0x06A75480: d36500d0  adrp x19, #0x772f000
0x06A75484: e83f01f9  str x8, [sp, #0x278]
0x06A75488: f6650090  adrp x22, #0x7731000
0x06A7548C: d86500f0  adrp x24, #0x7730000
0x06A75490: d76500f0  adrp x23, #0x7730000
0x06A75494: 48fb5b39  ldrb w8, [x26, #0x6fe]
0x06A75498: 39ef44f9  ldr x25, [x25, #0x9d8]
0x06A7549C: 733647f9  ldr x19, [x19, #0xe68]
0x06A754A0: d68a42f9  ldr x22, [x22, #0x510]
0x06A754A4: 18f744f9  ldr x24, [x24, #0x9e8]
0x06A754A8: f7fa44f9  ldr x23, [x23, #0x9f0]
0x06A754AC: f40301aa  mov x20, x1
0x06A754B0: f50300aa  mov x21, x0
0x06A754B4: c8030037  tbnz w8, #0, #0x6a7552c
0x06A754B8: e0650090  adrp x0, #0x7731000
0x06A754BC: 008842f9  ldr x0, [x0, #0x510]
0x06A754C0: 562d1c97  bl #0x3180a18
0x06A754C4: c06500f0  adrp x0, #0x7730000
0x06A754C8: 00ec44f9  ldr x0, [x0, #0x9d8]
0x06A754CC: 532d1c97  bl #0x3180a18
0x06A754D0: c06500d0  adrp x0, #0x772f000
0x06A754D4: 003447f9  ldr x0, [x0, #0xe68]
0x06A754D8: 502d1c97  bl #0x3180a18
0x06A754DC: c05e00b0  adrp x0, #0x764e000
0x06A754E0: 006444f9  ldr x0, [x0, #0x8c8]
0x06A754E4: 4d2d1c97  bl #0x3180a18
0x06A754E8: c06500f0  adrp x0, #0x7730000
0x06A754EC: 00fc44f9  ldr x0, [x0, #0x9f8]
0x06A754F0: 4a2d1c97  bl #0x3180a18
0x06A754F4: c06500f0  adrp x0, #0x7730000
0x06A754F8: 000045f9  ldr x0, [x0, #0xa00]
0x06A754FC: 472d1c97  bl #0x3180a18
0x06A75500: c05e00b0  adrp x0, #0x764e000
0x06A75504: 007044f9  ldr x0, [x0, #0x8e0]
0x06A75508: 442d1c97  bl #0x3180a18
0x06A7550C: c06500f0  adrp x0, #0x7730000
0x06A75510: 00f844f9  ldr x0, [x0, #0x9f0]
0x06A75514: 412d1c97  bl #0x3180a18
0x06A75518: c06500f0  adrp x0, #0x7730000
0x06A7551C: 00f444f9  ldr x0, [x0, #0x9e8]
0x06A75520: 3e2d1c97  bl #0x3180a18
0x06A75524: 28008052  movz w8, #0x1
0x06A75528: 48fb1b39  strb w8, [x26, #0x6fe]
0x06A7552C: 00e4006f  movi v0.2d, #0000000000000000
0x06A75530: ff7302b9  str wzr, [sp, #0x270]
0x06A75534: ff2302b9  str wzr, [sp, #0x220]
0x06A75538: e0030ead  stp q0, q0, [sp, #0x1c0]
0x06A7553C: e08311ad  stp q0, q0, [sp, #0x230]
0x06A75540: e08312ad  stp q0, q0, [sp, #0x250]
0x06A75544: e0030fad  stp q0, q0, [sp, #0x1e0]
0x06A75548: e00310ad  stp q0, q0, [sp, #0x200]
0x06A7554C: 810240ad  ldp q1, q0, [x20]
0x06A75550: 200340f9  ldr x0, [x25]
0x06A75554: e1030cad  stp q1, q0, [sp, #0x180]
0x06A75558: 80934697  bl #0x3c1a358
0x06A7555C: 680240f9  ldr x8, [x19]
0x06A75560: f30300aa  mov x19, x0
0x06A75564: e00308aa  mov x0, x8
0x06A75568: ce2d1c97  bl #0x3180ca0
0x06A7556C: c20240f9  ldr x2, [x22]
0x06A75570: e1031faa  mov x1, xzr
0x06A75574: e3031faa  mov x3, xzr
0x06A75578: f60300aa  mov x22, x0
0x06A7557C: e381d297  bl #0x5f15d08
0x06A75580: e0074cad  ldp q0, q1, [sp, #0x180]
0x06A75584: 030340f9  ldr x3, [x24]
0x06A75588: e8830691  add x8, sp, #0x1a0
0x06A7558C: e0830391  add x0, sp, #0xe0
0x06A75590: e10313aa  mov x1, x19
0x06A75594: e20316aa  mov x2, x22
0x06A75598: e00707ad  stp q0, q1, [sp, #0xe0]
0x06A7559C: 2ac04b97  bl #0x3d65644
0x06A755A0: e0074dad  ldp q0, q1, [sp, #0x1a0]
0x06A755A4: e10240f9  ldr x1, [x23]
0x06A755A8: e0030791  add x0, sp, #0x1c0
0x06A755AC: e0070ead  stp q0, q1, [sp, #0x1c0]
0x06A755B0: bb5f6497  bl #0x438d49c
0x06A755B4: a01400b4  cbz x0, #0x6a75848
0x06A755B8: ca6500f0  adrp x10, #0x7730000
0x06A755BC: 080040f9  ldr x8, [x0]
0x06A755C0: 4afd44f9  ldr x10, [x10, #0x9f8]
0x06A755C4: f30300aa  mov x19, x0
0x06A755C8: 095d4279  ldrh w9, [x8, #0x12e]
0x06A755CC: 410140f9  ldr x1, [x10]
0x06A755D0: 290100b4  cbz x9, #0x6a755f4
0x06A755D4: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A755D8: 4a210091  add x10, x10, #8
0x06A755DC: 4b815ff8  ldur x11, [x10, #-8]
0x06A755E0: 7f0101eb  cmp x11, x1
0x06A755E4: 00010054  b.eq #0x6a75604
0x06A755E8: 290500f1  subs x9, x9, #1
0x06A755EC: 4a410091  add x10, x10, #0x10
0x06A755F0: 61ffff54  b.ne #0x6a755dc
0x06A755F4: e00313aa  mov x0, x19
0x06A755F8: e2031f2a  mov w2, wzr
0x06A755FC: 45851b97  bl #0x3156b10
0x06A75600: 04000014  b #0x6a75610
0x06A75604: 490180b9  ldrsw x9, [x10]
0x06A75608: 0811098b  add x8, x8, x9, lsl #4
0x06A7560C: 00e10491  add x0, x8, #0x138
0x06A75610: 080440a9  ldp x8, x1, [x0]
0x06A75614: e00313aa  mov x0, x19
0x06A75618: 00013fd6  blr x8
0x06A7561C: f30300aa  mov x19, x0
0x06A75620: 601100b4  cbz x0, #0x6a7584c
0x06A75624: dd5e00b0  adrp x29, #0x764e000
0x06A75628: dc6500f0  adrp x28, #0x7730000
0x06A7562C: bd7344f9  ldr x29, [x29, #0x8e0]
0x06A75630: 9c0345f9  ldr x28, [x28, #0xa00]
0x06A75634: e8830391  add x8, sp, #0xe0
0x06A75638: e9430291  add x9, sp, #0x90
0x06A7563C: ea030191  add x10, sp, #0x40
0x06A75640: 16310091  add x22, x8, #0xc
0x06A75644: 17710191  add x23, x8, #0x5c
0x06A75648: 2b310091  add x11, x9, #0xc
0x06A7564C: 48310091  add x8, x10, #0xc
0x06A75650: e82f01a9  stp x8, x11, [sp, #0x10]
0x06A75654: 680240f9  ldr x8, [x19]
0x06A75658: a10340f9  ldr x1, [x29]
0x06A7565C: 095d4279  ldrh w9, [x8, #0x12e]
0x06A75660: 290100b4  cbz x9, #0x6a75684
0x06A75664: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A75668: 4a210091  add x10, x10, #8
0x06A7566C: 4b815ff8  ldur x11, [x10, #-8]
0x06A75670: 7f0101eb  cmp x11, x1
0x06A75674: 00010054  b.eq #0x6a75694
0x06A75678: 290500f1  subs x9, x9, #1
0x06A7567C: 4a410091  add x10, x10, #0x10
0x06A75680: 61ffff54  b.ne #0x6a7566c
0x06A75684: e00313aa  mov x0, x19
0x06A75688: e2031f2a  mov w2, wzr
0x06A7568C: 21851b97  bl #0x3156b10
0x06A75690: 04000014  b #0x6a756a0
0x06A75694: 490180b9  ldrsw x9, [x10]
0x06A75698: 0811098b  add x8, x8, x9, lsl #4
0x06A7569C: 00e10491  add x0, x8, #0x138
0x06A756A0: 080440a9  ldp x8, x1, [x0]
0x06A756A4: e00313aa  mov x0, x19
0x06A756A8: 00013fd6  blr x8
0x06A756AC: e0070036  tbz w0, #0, #0x6a757a8
0x06A756B0: 680240f9  ldr x8, [x19]
0x06A756B4: 810340f9  ldr x1, [x28]
0x06A756B8: 095d4279  ldrh w9, [x8, #0x12e]
0x06A756BC: 290100b4  cbz x9, #0x6a756e0
0x06A756C0: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A756C4: 4a210091  add x10, x10, #8
0x06A756C8: 4b815ff8  ldur x11, [x10, #-8]
0x06A756CC: 7f0101eb  cmp x11, x1
0x06A756D0: 00010054  b.eq #0x6a756f0
0x06A756D4: 290500f1  subs x9, x9, #1
0x06A756D8: 4a410091  add x10, x10, #0x10
0x06A756DC: 61ffff54  b.ne #0x6a756c8
0x06A756E0: e00313aa  mov x0, x19
0x06A756E4: e2031f2a  mov w2, wzr
0x06A756E8: 0a851b97  bl #0x3156b10
0x06A756EC: 04000014  b #0x6a756fc
0x06A756F0: 490180b9  ldrsw x9, [x10]
0x06A756F4: 0811098b  add x8, x8, x9, lsl #4
0x06A756F8: 00e10491  add x0, x8, #0x138
0x06A756FC: 090440a9  ldp x9, x1, [x0]
0x06A75700: e8830391  add x8, sp, #0xe0
0x06A75704: e00313aa  mov x0, x19
0x06A75708: 20013fd6  blr x9
0x06A7570C: fa7340f9  ldr x26, [sp, #0xe0]
0x06A75710: f8eb40b9  ldr w24, [sp, #0xe8]
0x06A75714: e0c30891  add x0, sp, #0x230
0x06A75718: 82088052  movz w2, #0x44
0x06A7571C: e10316aa  mov x1, x22
0x06A75720: 94641d94  bl #0x71ce970
0x06A75724: fb9b40f9  ldr x27, [sp, #0x130]
0x06A75728: f93b41b9  ldr w25, [sp, #0x138]
0x06A7572C: e0830791  add x0, sp, #0x1e0
0x06A75730: 82088052  movz w2, #0x44
0x06A75734: e10317aa  mov x1, x23
0x06A75738: 8e641d94  bl #0x71ce970
0x06A7573C: 1f03196b  cmp w24, w25
0x06A75740: a1f8ff54  b.ne #0x6a75654
0x06A75744: e00315aa  mov x0, x21
0x06A75748: e1031aaa  mov x1, x26
0x06A7574C: e2031baa  mov x2, x27
0x06A75750: 71000094  bl #0x6a75914
0x06A75754: 00f80736  tbz w0, #0, #0x6a75654
0x06A75758: e00f40f9  ldr x0, [sp, #0x18]
0x06A7575C: e1c30891  add x1, sp, #0x230
0x06A75760: 82088052  movz w2, #0x44
0x06A75764: 83641d94  bl #0x71ce970
0x06A75768: e00b40f9  ldr x0, [sp, #0x10]
0x06A7576C: e1830791  add x1, sp, #0x1e0
0x06A75770: 82088052  movz w2, #0x44
0x06A75774: 7f641d94  bl #0x71ce970
0x06A75778: 810240ad  ldp q1, q0, [x20]
0x06A7577C: fa4b00f9  str x26, [sp, #0x90]
0x06A75780: f89b00b9  str w24, [sp, #0x98]
0x06A75784: fb2300f9  str x27, [sp, #0x40]
0x06A75788: e10301ad  stp q1, q0, [sp, #0x20]
0x06A7578C: f84b00b9  str w24, [sp, #0x48]
0x06A75790: e1430291  add x1, sp, #0x90
0x06A75794: e2030191  add x2, sp, #0x40
0x06A75798: e3830091  add x3, sp, #0x20
0x06A7579C: e00315aa  mov x0, x21
0x06A757A0: 91000094  bl #0x6a759e4
0x06A757A4: acffff17  b #0x6a75654
0x06A757A8: f4031faa  mov x20, xzr
0x06A757AC: 330300b4  cbz x19, #0x6a75810
0x06A757B0: 680240f9  ldr x8, [x19]
0x06A757B4: ca5e00b0  adrp x10, #0x764e000
0x06A757B8: 095d4279  ldrh w9, [x8, #0x12e]
0x06A757BC: 4a6544f9  ldr x10, [x10, #0x8c8]
0x06A757C0: 410140f9  ldr x1, [x10]
0x06A757C4: 290100b4  cbz x9, #0x6a757e8
0x06A757C8: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A757CC: 4a210091  add x10, x10, #8
0x06A757D0: 4b815ff8  ldur x11, [x10, #-8]
0x06A757D4: 7f0101eb  cmp x11, x1
0x06A757D8: 00010054  b.eq #0x6a757f8
0x06A757DC: 290500f1  subs x9, x9, #1
0x06A757E0: 4a410091  add x10, x10, #0x10
0x06A757E4: 61ffff54  b.ne #0x6a757d0
0x06A757E8: e00313aa  mov x0, x19
0x06A757EC: e2031f2a  mov w2, wzr
0x06A757F0: c8841b97  bl #0x3156b10
0x06A757F4: 04000014  b #0x6a75804
0x06A757F8: 490180b9  ldrsw x9, [x10]
0x06A757FC: 0811098b  add x8, x8, x9, lsl #4
0x06A75800: 00e10491  add x0, x8, #0x138
0x06A75804: 080440a9  ldp x8, x1, [x0]
0x06A75808: e00313aa  mov x0, x19
0x06A7580C: 00013fd6  blr x8
0x06A75810: 140200b5  cbnz x20, #0x6a75850
0x06A75814: e80740f9  ldr x8, [sp, #8]
0x06A75818: 081540f9  ldr x8, [x8, #0x28]
0x06A7581C: e93f41f9  ldr x9, [sp, #0x278]
0x06A75820: 1f0109eb  cmp x8, x9
0x06A75824: a1010054  b.ne #0x6a75858
0x06A75828: ff030a91  add sp, sp, #0x280
0x06A7582C: f44f45a9  ldp x20, x19, [sp, #0x50]
0x06A75830: f65744a9  ldp x22, x21, [sp, #0x40]
0x06A75834: f85f43a9  ldp x24, x23, [sp, #0x30]
0x06A75838: fa6742a9  ldp x26, x25, [sp, #0x20]
0x06A7583C: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x06A75840: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x06A75844: c0035fd6  ret
0x06A75848: 192d1c97  bl #0x3180cac
0x06A7584C: 182d1c97  bl #0x3180cac
0x06A75850: e00314aa  mov x0, x20
0x06A75854: 142d1c97  bl #0x3180ca4
0x06A75858: 4e641d94  bl #0x71ce990
0x06A7585C: 04000014  b #0x6a7586c
0x06A75860: 03000014  b #0x6a7586c
0x06A75864: 02000014  b #0x6a7586c
0x06A75868: 01000014  b #0x6a7586c
0x06A7586C: f50300aa  mov x21, x0
0x06A75870: 3f040071  cmp w1, #1
0x06A75874: c1000054  b.ne #0x6a7588c
0x06A75878: e00315aa  mov x0, x21
0x06A7587C: 25641d94  bl #0x71ce910
0x06A75880: 140040f9  ldr x20, [x0]
0x06A75884: 27641d94  bl #0x71ce920
0x06A75888: c9ffff17  b #0x6a757ac
0x06A7588C: f4031faa  mov x20, xzr
0x06A75890: 02000014  b #0x6a75898
0x06A75894: f50300aa  mov x21, x0
0x06A75898: 330300b4  cbz x19, #0x6a758fc
0x06A7589C: 680240f9  ldr x8, [x19]
0x06A758A0: ca5e00b0  adrp x10, #0x764e000
0x06A758A4: 095d4279  ldrh w9, [x8, #0x12e]
0x06A758A8: 4a6544f9  ldr x10, [x10, #0x8c8]
0x06A758AC: 410140f9  ldr x1, [x10]
0x06A758B0: 290100b4  cbz x9, #0x6a758d4
0x06A758B4: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A758B8: 4a210091  add x10, x10, #8
0x06A758BC: 4b815ff8  ldur x11, [x10, #-8]
0x06A758C0: 7f0101eb  cmp x11, x1
0x06A758C4: 00010054  b.eq #0x6a758e4
0x06A758C8: 290500f1  subs x9, x9, #1
0x06A758CC: 4a410091  add x10, x10, #0x10
0x06A758D0: 61ffff54  b.ne #0x6a758bc
0x06A758D4: e00313aa  mov x0, x19
0x06A758D8: e2031f2a  mov w2, wzr
0x06A758DC: 8d841b97  bl #0x3156b10
0x06A758E0: 04000014  b #0x6a758f0
0x06A758E4: 490180b9  ldrsw x9, [x10]
0x06A758E8: 0811098b  add x8, x8, x9, lsl #4
0x06A758EC: 00e10491  add x0, x8, #0x138
0x06A758F0: 080440a9  ldp x8, x1, [x0]
0x06A758F4: e00313aa  mov x0, x19
0x06A758F8: 00013fd6  blr x8
0x06A758FC: 740000b5  cbnz x20, #0x6a75908
0x06A75900: e00315aa  mov x0, x21
0x06A75904: 15c01f97  bl #0x3265958
0x06A75908: e00314aa  mov x0, x20
0x06A7590C: e62c1c97  bl #0x3180ca4
0x06A75910: 014f0e97  bl #0x2e09514

; RVA 0x6A75914 | private bool CanPerformSplit(Entity firstEntity, Entity secondEntity) { }
; bytes=208 sha256=fb562b123568da4efe88e590ae88be571082950900ac22141de46d1d838914e9 status=arm64_complete_bound indexed_start=True
0x06A75914: ff0301d1  sub sp, sp, #0x40
0x06A75918: fe0b00f9  str x30, [sp, #0x10]
0x06A7591C: f65702a9  stp x22, x21, [sp, #0x20]
0x06A75920: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A75924: b69500b0  adrp x22, #0x7d2a000
0x06A75928: c8fe5b39  ldrb w8, [x22, #0x6ff]
0x06A7592C: f30302aa  mov x19, x2
0x06A75930: f40301aa  mov x20, x1
0x06A75934: f50300aa  mov x21, x0
0x06A75938: c8000037  tbnz w8, #0, #0x6a75950
0x06A7593C: c06500f0  adrp x0, #0x7730000
0x06A75940: 000445f9  ldr x0, [x0, #0xa08]
0x06A75944: 352c1c97  bl #0x3180a18
0x06A75948: 28008052  movz w8, #0x1
0x06A7594C: c8fe1b39  strb w8, [x22, #0x6ff]
0x06A75950: ff1b00b9  str wzr, [sp, #0x18]
0x06A75954: ff0b00b9  str wzr, [sp, #8]
0x06A75958: 540400b4  cbz x20, #0x6a759e0
0x06A7595C: d66500f0  adrp x22, #0x7730000
0x06A75960: d60645f9  ldr x22, [x22, #0xa08]
0x06A75964: e1630091  add x1, sp, #0x18
0x06A75968: e00314aa  mov x0, x20
0x06A7596C: c20240f9  ldr x2, [x22]
0x06A75970: b8a34697  bl #0x3c1e850
0x06A75974: a0010036  tbz w0, #0, #0x6a759a8
0x06A75978: 530300b4  cbz x19, #0x6a759e0
0x06A7597C: c20240f9  ldr x2, [x22]
0x06A75980: e1230091  add x1, sp, #8
0x06A75984: e00313aa  mov x0, x19
0x06A75988: b2a34697  bl #0x3c1e850
0x06A7598C: e0000036  tbz w0, #0, #0x6a759a8
0x06A75990: e81b40b9  ldr w8, [sp, #0x18]
0x06A75994: 1f050071  cmp w8, #1
0x06A75998: 60010054  b.eq #0x6a759c4
0x06A7599C: e80b40b9  ldr w8, [sp, #8]
0x06A759A0: 1f050071  cmp w8, #1
0x06A759A4: 00010054  b.eq #0x6a759c4
0x06A759A8: e0031f2a  mov w0, wzr
0x06A759AC: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A759B0: f65742a9  ldp x22, x21, [sp, #0x20]
0x06A759B4: fe0b40f9  ldr x30, [sp, #0x10]
0x06A759B8: 00000012  and w0, w0, #1
0x06A759BC: ff030191  add sp, sp, #0x40
0x06A759C0: c0035fd6  ret
0x06A759C4: a01640f9  ldr x0, [x21, #0x28]
0x06A759C8: c00000b4  cbz x0, #0x6a759e0
0x06A759CC: e10314aa  mov x1, x20
0x06A759D0: e20313aa  mov x2, x19
0x06A759D4: e3031faa  mov x3, xzr
0x06A759D8: b2480094  bl #0x6a87ca0
0x06A759DC: f4ffff17  b #0x6a759ac
0x06A759E0: b32c1c97  bl #0x3180cac

; RVA 0x6A759E4 | private void PerformSplit(ValueTuple<Entity, BoardTilePositionComponent, MergeComponent, IdComponent> firstEntity, ValueTuple<Entity, BoardTilePositionComponent, MergeComponent, IdComponent> secondEntity, TickContext context) { }
; bytes=932 sha256=4416d3807a53f6a42ef76fb2fb93e9d218ac5327f1f26ccb19a4e7b92752357d status=arm64_complete_bound indexed_start=True
0x06A759E4: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x06A759E8: fc6f01a9  stp x28, x27, [sp, #0x10]
0x06A759EC: fa6702a9  stp x26, x25, [sp, #0x20]
0x06A759F0: f85f03a9  stp x24, x23, [sp, #0x30]
0x06A759F4: f65704a9  stp x22, x21, [sp, #0x40]
0x06A759F8: f44f05a9  stp x20, x19, [sp, #0x50]
0x06A759FC: ff8309d1  sub sp, sp, #0x260
0x06A75A00: 5cd03bd5  mrs x28, tpidr_el0
0x06A75A04: 881740f9  ldr x8, [x28, #0x28]
0x06A75A08: b69500b0  adrp x22, #0x7d2a000
0x06A75A0C: f30303aa  mov x19, x3
0x06A75A10: f50302aa  mov x21, x2
0x06A75A14: e82f01f9  str x8, [sp, #0x258]
0x06A75A18: c8025c39  ldrb w8, [x22, #0x700]
0x06A75A1C: f70301aa  mov x23, x1
0x06A75A20: f40300aa  mov x20, x0
0x06A75A24: 48020037  tbnz w8, #0, #0x6a75a6c
0x06A75A28: c06500d0  adrp x0, #0x772f000
0x06A75A2C: 003c47f9  ldr x0, [x0, #0xe78]
0x06A75A30: fa2b1c97  bl #0x3180a18
0x06A75A34: e0650090  adrp x0, #0x7731000
0x06A75A38: 008c42f9  ldr x0, [x0, #0x518]
0x06A75A3C: f72b1c97  bl #0x3180a18
0x06A75A40: c06500d0  adrp x0, #0x772f000
0x06A75A44: 005447f9  ldr x0, [x0, #0xea8]
0x06A75A48: f42b1c97  bl #0x3180a18
0x06A75A4C: e0650090  adrp x0, #0x7731000
0x06A75A50: 009042f9  ldr x0, [x0, #0x520]
0x06A75A54: f12b1c97  bl #0x3180a18
0x06A75A58: c05e00d0  adrp x0, #0x764f000
0x06A75A5C: 00ac40f9  ldr x0, [x0, #0x158]
0x06A75A60: ee2b1c97  bl #0x3180a18
0x06A75A64: 28008052  movz w8, #0x1
0x06A75A68: c8021c39  strb w8, [x22, #0x700]
0x06A75A6C: e81240b9  ldr w8, [x23, #0x10]
0x06A75A70: e0a30591  add x0, sp, #0x168
0x06A75A74: 02098052  movz w2, #0x48
0x06A75A78: 1f110071  cmp w8, #4
0x06A75A7C: e102959a  csel x1, x23, x21, eq
0x06A75A80: 368440f8  ldr x22, [x1], #8
0x06A75A84: b902979a  csel x25, x21, x23, eq
0x06A75A88: ba631d94  bl #0x71ce970
0x06A75A8C: e0630791  add x0, sp, #0x1d8
0x06A75A90: e1a30591  add x1, sp, #0x168
0x06A75A94: 02098052  movz w2, #0x48
0x06A75A98: b6631d94  bl #0x71ce970
0x06A75A9C: 281f40b9  ldr w8, [x25, #0x1c]
0x06A75AA0: 20c3c03c  ldur q0, [x25, #0xc]
0x06A75AA4: 370340f9  ldr x23, [x25]
0x06A75AA8: 350b40b9  ldr w21, [x25, #8]
0x06A75AAC: e83302b9  str w8, [sp, #0x230]
0x06A75AB0: e08b803d  str q0, [sp, #0x220]
0x06A75AB4: 2083c23c  ldur q0, [x25, #0x28]
0x06A75AB8: 2183c33c  ldur q1, [x25, #0x38]
0x06A75ABC: 381340f9  ldr x24, [x25, #0x20]
0x06A75AC0: 282740f9  ldr x8, [x25, #0x48]
0x06A75AC4: e93342b9  ldr w9, [sp, #0x230]
0x06A75AC8: e0070aad  stp q0, q1, [sp, #0x140]
0x06A75ACC: e28bc03d  ldr q2, [sp, #0x220]
0x06A75AD0: e0074aad  ldp q0, q1, [sp, #0x140]
0x06A75AD4: e8b300f9  str x8, [sp, #0x160]
0x06A75AD8: e95302b9  str w9, [sp, #0x250]
0x06A75ADC: e293803d  str q2, [sp, #0x240]
0x06A75AE0: e0870dad  stp q0, q1, [sp, #0x1b0]
0x06A75AE4: e8eb00f9  str x8, [sp, #0x1d0]
0x06A75AE8: 801640f9  ldr x0, [x20, #0x28]
0x06A75AEC: a01400b4  cbz x0, #0x6a75d80
0x06A75AF0: e10318aa  mov x1, x24
0x06A75AF4: e2031faa  mov x2, xzr
0x06A75AF8: 374a0094  bl #0x6a883d4
0x06A75AFC: e1031faa  mov x1, xzr
0x06A75B00: fa0300aa  mov x26, x0
0x06A75B04: ea07aa97  bl #0x54f7aac
0x06A75B08: 40120037  tbnz w0, #0, #0x6a75d50
0x06A75B0C: 610240ad  ldp q1, q0, [x19]
0x06A75B10: e8430391  add x8, sp, #0xd0
0x06A75B14: 00210091  add x0, x8, #8
0x06A75B18: e1630791  add x1, sp, #0x1d8
0x06A75B1C: 02098052  movz w2, #0x48
0x06A75B20: f9030291  add x25, sp, #0x80
0x06A75B24: e10309ad  stp q1, q0, [sp, #0x120]
0x06A75B28: 92631d94  bl #0x71ce970
0x06A75B2C: e0874dad  ldp q0, q1, [sp, #0x1b0]
0x06A75B30: e8eb40f9  ldr x8, [sp, #0x1d0]
0x06A75B34: e293c03d  ldr q2, [sp, #0x240]
0x06A75B38: e95342b9  ldr w9, [sp, #0x250]
0x06A75B3C: e1830491  add x1, sp, #0x120
0x06A75B40: e2430391  add x2, sp, #0xd0
0x06A75B44: e3030291  add x3, sp, #0x80
0x06A75B48: e00314aa  mov x0, x20
0x06A75B4C: e8db0ca9  stp x8, x22, [sp, #0xc8]
0x06A75B50: 2083823c  stur q0, [x25, #0x28]
0x06A75B54: 2183833c  stur q1, [x25, #0x38]
0x06A75B58: f74300f9  str x23, [sp, #0x80]
0x06A75B5C: f58b00b9  str w21, [sp, #0x88]
0x06A75B60: 22c3803c  stur q2, [x25, #0xc]
0x06A75B64: e99f00b9  str w9, [sp, #0x9c]
0x06A75B68: f85300f9  str x24, [sp, #0xa0]
0x06A75B6C: 87000094  bl #0x6a75d88
0x06A75B70: e203002a  mov w2, w0
0x06A75B74: e00314aa  mov x0, x20
0x06A75B78: e1031aaa  mov x1, x26
0x06A75B7C: b2000094  bl #0x6a75e44
0x06A75B80: f90300aa  mov x25, x0
0x06A75B84: e00314aa  mov x0, x20
0x06A75B88: e1031aaa  mov x1, x26
0x06A75B8C: e203152a  mov w2, w21
0x06A75B90: ad000094  bl #0x6a75e44
0x06A75B94: 600640ad  ldp q0, q1, [x19]
0x06A75B98: f80300aa  mov x24, x0
0x06A75B9C: e0830191  add x0, sp, #0x60
0x06A75BA0: e10317aa  mov x1, x23
0x06A75BA4: e2031faa  mov x2, xzr
0x06A75BA8: e00703ad  stp q0, q1, [sp, #0x60]
0x06A75BAC: f08c0094  bl #0x6a98f6c
0x06A75BB0: 610240ad  ldp q1, q0, [x19]
0x06A75BB4: e0030191  add x0, sp, #0x40
0x06A75BB8: e10316aa  mov x1, x22
0x06A75BBC: e2031faa  mov x2, xzr
0x06A75BC0: e10302ad  stp q1, q0, [sp, #0x40]
0x06A75BC4: ea8c0094  bl #0x6a98f6c
0x06A75BC8: 610240ad  ldp q1, q0, [x19]
0x06A75BCC: e0830091  add x0, sp, #0x20
0x06A75BD0: e10319aa  mov x1, x25
0x06A75BD4: e2031faa  mov x2, xzr
0x06A75BD8: e3031faa  mov x3, xzr
0x06A75BDC: e10301ad  stp q1, q0, [sp, #0x20]
0x06A75BE0: a08c0094  bl #0x6a98e60
0x06A75BE4: 610240ad  ldp q1, q0, [x19]
0x06A75BE8: e0030091  mov x0, sp
0x06A75BEC: e10318aa  mov x1, x24
0x06A75BF0: e2031faa  mov x2, xzr
0x06A75BF4: e3031faa  mov x3, xzr
0x06A75BF8: e10300ad  stp q1, q0, [sp]
0x06A75BFC: 998c0094  bl #0x6a98e60
0x06A75C00: e8650090  adrp x8, #0x7731000
0x06A75C04: 7a0a40f9  ldr x26, [x19, #0x10]
0x06A75C08: 088d42f9  ldr x8, [x8, #0x518]
0x06A75C0C: 000140f9  ldr x0, [x8]
0x06A75C10: 242c1c97  bl #0x3180ca0
0x06A75C14: e1031faa  mov x1, xzr
0x06A75C18: fb0300aa  mov x27, x0
0x06A75C1C: e3930094  bl #0x6a9aba8
0x06A75C20: 1b0b00b4  cbz x27, #0x6a75d80
0x06A75C24: e0031baa  mov x0, x27
0x06A75C28: 160c01f8  str x22, [x0, #0x10]!
0x06A75C2C: e10316aa  mov x1, x22
0x06A75C30: 652b1c97  bl #0x31809c4
0x06A75C34: e0031baa  mov x0, x27
0x06A75C38: 178c01f8  str x23, [x0, #0x18]!
0x06A75C3C: e10317aa  mov x1, x23
0x06A75C40: 612b1c97  bl #0x31809c4
0x06A75C44: e0031baa  mov x0, x27
0x06A75C48: 190c02f8  str x25, [x0, #0x20]!
0x06A75C4C: e10319aa  mov x1, x25
0x06A75C50: 5d2b1c97  bl #0x31809c4
0x06A75C54: f6031baa  mov x22, x27
0x06A75C58: d88e02f8  str x24, [x22, #0x28]!
0x06A75C5C: e00316aa  mov x0, x22
0x06A75C60: e10318aa  mov x1, x24
0x06A75C64: 582b1c97  bl #0x31809c4
0x06A75C68: d50a00b9  str w21, [x22, #8]
0x06A75C6C: ba0800b4  cbz x26, #0x6a75d80
0x06A75C70: e8650090  adrp x8, #0x7731000
0x06A75C74: 089142f9  ldr x8, [x8, #0x520]
0x06A75C78: e0031aaa  mov x0, x26
0x06A75C7C: e1031baa  mov x1, x27
0x06A75C80: 020140f9  ldr x2, [x8]
0x06A75C84: d8354d97  bl #0x3dc33e4
0x06A75C88: da5e00d0  adrp x26, #0x764f000
0x06A75C8C: 750a40f9  ldr x21, [x19, #0x10]
0x06A75C90: 810e40f9  ldr x1, [x20, #0x18]
0x06A75C94: 5aaf40f9  ldr x26, [x26, #0x158]
0x06A75C98: e00319aa  mov x0, x25
0x06A75C9C: e5031faa  mov x5, xzr
0x06A75CA0: 420340f9  ldr x2, [x26]
0x06A75CA4: e30302aa  mov x3, x2
0x06A75CA8: e40302aa  mov x4, x2
0x06A75CAC: 22b50094  bl #0x6aa3134
0x06A75CB0: db6500d0  adrp x27, #0x772f000
0x06A75CB4: 7b3f47f9  ldr x27, [x27, #0xe78]
0x06A75CB8: f70300aa  mov x23, x0
0x06A75CBC: 680340f9  ldr x8, [x27]
0x06A75CC0: e00308aa  mov x0, x8
0x06A75CC4: f72b1c97  bl #0x3180ca0
0x06A75CC8: e10319aa  mov x1, x25
0x06A75CCC: e20317aa  mov x2, x23
0x06A75CD0: e3031faa  mov x3, xzr
0x06A75CD4: f60300aa  mov x22, x0
0x06A75CD8: d4920094  bl #0x6a9a828
0x06A75CDC: 350500b4  cbz x21, #0x6a75d80
0x06A75CE0: d76500d0  adrp x23, #0x772f000
0x06A75CE4: f75647f9  ldr x23, [x23, #0xea8]
0x06A75CE8: e00315aa  mov x0, x21
0x06A75CEC: e10316aa  mov x1, x22
0x06A75CF0: e20240f9  ldr x2, [x23]
0x06A75CF4: bc354d97  bl #0x3dc33e4
0x06A75CF8: 420340f9  ldr x2, [x26]
0x06A75CFC: 810e40f9  ldr x1, [x20, #0x18]
0x06A75D00: 730a40f9  ldr x19, [x19, #0x10]
0x06A75D04: e00318aa  mov x0, x24
0x06A75D08: e30302aa  mov x3, x2
0x06A75D0C: e40302aa  mov x4, x2
0x06A75D10: e5031faa  mov x5, xzr
0x06A75D14: 08b50094  bl #0x6aa3134
0x06A75D18: 680340f9  ldr x8, [x27]
0x06A75D1C: f50300aa  mov x21, x0
0x06A75D20: e00308aa  mov x0, x8
0x06A75D24: df2b1c97  bl #0x3180ca0
0x06A75D28: e10318aa  mov x1, x24
0x06A75D2C: e20315aa  mov x2, x21
0x06A75D30: e3031faa  mov x3, xzr
0x06A75D34: f40300aa  mov x20, x0
0x06A75D38: bc920094  bl #0x6a9a828
0x06A75D3C: 330200b4  cbz x19, #0x6a75d80
0x06A75D40: e20240f9  ldr x2, [x23]
0x06A75D44: e00313aa  mov x0, x19
0x06A75D48: e10314aa  mov x1, x20
0x06A75D4C: a6354d97  bl #0x3dc33e4
0x06A75D50: 881740f9  ldr x8, [x28, #0x28]
0x06A75D54: e92f41f9  ldr x9, [sp, #0x258]
0x06A75D58: 1f0109eb  cmp x8, x9
0x06A75D5C: 41010054  b.ne #0x6a75d84
0x06A75D60: ff830991  add sp, sp, #0x260
0x06A75D64: f44f45a9  ldp x20, x19, [sp, #0x50]
0x06A75D68: f65744a9  ldp x22, x21, [sp, #0x40]
0x06A75D6C: f85f43a9  ldp x24, x23, [sp, #0x30]
0x06A75D70: fa6742a9  ldp x26, x25, [sp, #0x20]
0x06A75D74: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x06A75D78: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x06A75D7C: c0035fd6  ret
0x06A75D80: cb2b1c97  bl #0x3180cac
0x06A75D84: 03631d94  bl #0x71ce990

; RVA 0x6A75D88 | private int GetOriginalSplitterPosition(TickContext context, ValueTuple<Entity, BoardTilePositionComponent, MergeComponent, IdComponent> splitterEntity, ValueTuple<Entity, BoardTilePositionComponent, MergeComponent, IdComponent> targetEntity) { }
; bytes=188 sha256=379a8e59eaad3b017f3e50834e34520a755febceae5a1a2f8da7b3ffbfe4ee4b status=arm64_complete_bound indexed_start=True
0x06A75D88: ff8301d1  sub sp, sp, #0x60
0x06A75D8C: fe5f03a9  stp x30, x23, [sp, #0x30]
0x06A75D90: f65704a9  stp x22, x21, [sp, #0x40]
0x06A75D94: f44f05a9  stp x20, x19, [sp, #0x50]
0x06A75D98: b79500b0  adrp x23, #0x7d2a000
0x06A75D9C: e8065c39  ldrb w8, [x23, #0x701]
0x06A75DA0: f30303aa  mov x19, x3
0x06A75DA4: f60302aa  mov x22, x2
0x06A75DA8: f50301aa  mov x21, x1
0x06A75DAC: f40300aa  mov x20, x0
0x06A75DB0: c8000037  tbnz w8, #0, #0x6a75dc8
0x06A75DB4: e0650090  adrp x0, #0x7731000
0x06A75DB8: 009442f9  ldr x0, [x0, #0x528]
0x06A75DBC: 172b1c97  bl #0x3180a18
0x06A75DC0: 28008052  movz w8, #0x1
0x06A75DC4: e8061c39  strb w8, [x23, #0x701]
0x06A75DC8: ff7f02a9  stp xzr, xzr, [sp, #0x20]
0x06A75DCC: c00240f9  ldr x0, [x22]
0x06A75DD0: 800300b4  cbz x0, #0x6a75e40
0x06A75DD4: f6650090  adrp x22, #0x7731000
0x06A75DD8: d69642f9  ldr x22, [x22, #0x528]
0x06A75DDC: e1a30091  add x1, sp, #0x28
0x06A75DE0: c20240f9  ldr x2, [x22]
0x06A75DE4: 60a54697  bl #0x3c1f364
0x06A75DE8: 60000036  tbz w0, #0, #0x6a75df4
0x06A75DEC: e02b40b9  ldr w0, [sp, #0x28]
0x06A75DF0: 0f000014  b #0x6a75e2c
0x06A75DF4: 600240f9  ldr x0, [x19]
0x06A75DF8: 400200b4  cbz x0, #0x6a75e40
0x06A75DFC: c20240f9  ldr x2, [x22]
0x06A75E00: e1830091  add x1, sp, #0x20
0x06A75E04: 58a54697  bl #0x3c1f364
0x06A75E08: 60000036  tbz w0, #0, #0x6a75e14
0x06A75E0C: e02340b9  ldr w0, [sp, #0x20]
0x06A75E10: 07000014  b #0x6a75e2c
0x06A75E14: a10240ad  ldp q1, q0, [x21]
0x06A75E18: e1030091  mov x1, sp
0x06A75E1C: e00314aa  mov x0, x20
0x06A75E20: e10300ad  stp q1, q0, [sp]
0x06A75E24: 620a40b9  ldr w2, [x19, #8]
0x06A75E28: 39000094  bl #0x6a75f0c
0x06A75E2C: f44f45a9  ldp x20, x19, [sp, #0x50]
0x06A75E30: f65744a9  ldp x22, x21, [sp, #0x40]
0x06A75E34: fe5f43a9  ldp x30, x23, [sp, #0x30]
0x06A75E38: ff830191  add sp, sp, #0x60
0x06A75E3C: c0035fd6  ret
0x06A75E40: 9b2b1c97  bl #0x3180cac

; RVA 0x6A75E44 | private Entity CreateSplitResultEntity(string itemId, int position) { }
; bytes=200 sha256=1ded5f27d76404eae34936da797a5adf260583c9df60a8b8b19e2c96efd08531 status=arm64_complete_bound indexed_start=True
0x06A75E44: fe0f1df8  str x30, [sp, #-0x30]!
0x06A75E48: f65701a9  stp x22, x21, [sp, #0x10]
0x06A75E4C: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A75E50: b69500b0  adrp x22, #0x7d2a000
0x06A75E54: c80a5c39  ldrb w8, [x22, #0x702]
0x06A75E58: f303022a  mov w19, w2
0x06A75E5C: f40301aa  mov x20, x1
0x06A75E60: f50300aa  mov x21, x0
0x06A75E64: c8000037  tbnz w8, #0, #0x6a75e7c
0x06A75E68: 60620090  adrp x0, #0x76c1000
0x06A75E6C: 005843f9  ldr x0, [x0, #0x6b0]
0x06A75E70: ea2a1c97  bl #0x3180a18
0x06A75E74: 28008052  movz w8, #0x1
0x06A75E78: c80a1c39  strb w8, [x22, #0x702]
0x06A75E7C: b51240f9  ldr x21, [x21, #0x20]
0x06A75E80: 550400b4  cbz x21, #0x6a75f08
0x06A75E84: 6a620090  adrp x10, #0x76c1000
0x06A75E88: a80240f9  ldr x8, [x21]
0x06A75E8C: 4a5943f9  ldr x10, [x10, #0x6b0]
0x06A75E90: 095d4279  ldrh w9, [x8, #0x12e]
0x06A75E94: 410140f9  ldr x1, [x10]
0x06A75E98: 290100b4  cbz x9, #0x6a75ebc
0x06A75E9C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A75EA0: 4a210091  add x10, x10, #8
0x06A75EA4: 4b815ff8  ldur x11, [x10, #-8]
0x06A75EA8: 7f0101eb  cmp x11, x1
0x06A75EAC: 00010054  b.eq #0x6a75ecc
0x06A75EB0: 290500f1  subs x9, x9, #1
0x06A75EB4: 4a410091  add x10, x10, #0x10
0x06A75EB8: 61ffff54  b.ne #0x6a75ea4
0x06A75EBC: 22008052  movz w2, #0x1
0x06A75EC0: e00315aa  mov x0, x21
0x06A75EC4: 13831b97  bl #0x3156b10
0x06A75EC8: 05000014  b #0x6a75edc
0x06A75ECC: 490140b9  ldr w9, [x10]
0x06A75ED0: 29050011  add w9, w9, #1
0x06A75ED4: 08d1298b  add x8, x8, w9, sxtw #4
0x06A75ED8: 00e10491  add x0, x8, #0x138
0x06A75EDC: 071840a9  ldp x7, x6, [x0]
0x06A75EE0: e00315aa  mov x0, x21
0x06A75EE4: e10314aa  mov x1, x20
0x06A75EE8: e203132a  mov w2, w19
0x06A75EEC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A75EF0: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A75EF4: 03208052  movz w3, #0x100
0x06A75EF8: e4031f2a  mov w4, wzr
0x06A75EFC: e5031faa  mov x5, xzr
0x06A75F00: fe0743f8  ldr x30, [sp], #0x30
0x06A75F04: e0001fd6  br x7
0x06A75F08: 692b1c97  bl #0x3180cac

; RVA 0x6A75F0C | private int FindNearestPosition(TickContext context, int targetPosition) { }
; bytes=600 sha256=94de5d6e410c7526a5f7169efb144aebbe0fbada61489ff7308a6fefa1be1a46 status=arm64_complete_bound indexed_start=True
0x06A75F0C: ffc302d1  sub sp, sp, #0xb0
0x06A75F10: fe3300f9  str x30, [sp, #0x60]
0x06A75F14: fa6707a9  stp x26, x25, [sp, #0x70]
0x06A75F18: f85f08a9  stp x24, x23, [sp, #0x80]
0x06A75F1C: f65709a9  stp x22, x21, [sp, #0x90]
0x06A75F20: f44f0aa9  stp x20, x19, [sp, #0xa0]
0x06A75F24: ba9500b0  adrp x26, #0x7d2a000
0x06A75F28: d96500d0  adrp x25, #0x772f000
0x06A75F2C: d76500d0  adrp x23, #0x772f000
0x06A75F30: d66500d0  adrp x22, #0x772f000
0x06A75F34: f8650090  adrp x24, #0x7731000
0x06A75F38: 480f5c39  ldrb w8, [x26, #0x703]
0x06A75F3C: 392b47f9  ldr x25, [x25, #0xe50]
0x06A75F40: f75247f9  ldr x23, [x23, #0xea0]
0x06A75F44: d64e47f9  ldr x22, [x22, #0xe98]
0x06A75F48: 189b42f9  ldr x24, [x24, #0x530]
0x06A75F4C: f303022a  mov w19, w2
0x06A75F50: f50301aa  mov x21, x1
0x06A75F54: f40300aa  mov x20, x0
0x06A75F58: c8030037  tbnz w8, #0, #0x6a75fd0
0x06A75F5C: c06500d0  adrp x0, #0x772f000
0x06A75F60: 002847f9  ldr x0, [x0, #0xe50]
0x06A75F64: ad2a1c97  bl #0x3180a18
0x06A75F68: c06500d0  adrp x0, #0x772f000
0x06A75F6C: 003047f9  ldr x0, [x0, #0xe60]
0x06A75F70: aa2a1c97  bl #0x3180a18
0x06A75F74: 60620090  adrp x0, #0x76c1000
0x06A75F78: 007c46f9  ldr x0, [x0, #0xcf8]
0x06A75F7C: a72a1c97  bl #0x3180a18
0x06A75F80: c06500d0  adrp x0, #0x772f000
0x06A75F84: 003847f9  ldr x0, [x0, #0xe70]
0x06A75F88: a42a1c97  bl #0x3180a18
0x06A75F8C: 60620090  adrp x0, #0x76c1000
0x06A75F90: 002047f9  ldr x0, [x0, #0xe40]
0x06A75F94: a12a1c97  bl #0x3180a18
0x06A75F98: c06500d0  adrp x0, #0x772f000
0x06A75F9C: 004c47f9  ldr x0, [x0, #0xe98]
0x06A75FA0: 9e2a1c97  bl #0x3180a18
0x06A75FA4: c06500d0  adrp x0, #0x772f000
0x06A75FA8: 005047f9  ldr x0, [x0, #0xea0]
0x06A75FAC: 9b2a1c97  bl #0x3180a18
0x06A75FB0: e0650090  adrp x0, #0x7731000
0x06A75FB4: 009c42f9  ldr x0, [x0, #0x538]
0x06A75FB8: 982a1c97  bl #0x3180a18
0x06A75FBC: e0650090  adrp x0, #0x7731000
0x06A75FC0: 009842f9  ldr x0, [x0, #0x530]
0x06A75FC4: 952a1c97  bl #0x3180a18
0x06A75FC8: 28008052  movz w8, #0x1
0x06A75FCC: 480f1c39  strb w8, [x26, #0x703]
0x06A75FD0: 00e4006f  movi v0.2d, #0000000000000000
0x06A75FD4: ff6f00b9  str wzr, [sp, #0x6c]
0x06A75FD8: e00301ad  stp q0, q0, [sp, #0x20]
0x06A75FDC: a10240ad  ldp q1, q0, [x21]
0x06A75FE0: 200340f9  ldr x0, [x25]
0x06A75FE4: e10300ad  stp q1, q0, [sp]
0x06A75FE8: 218f4697  bl #0x3c19c6c
0x06A75FEC: e00740ad  ldp q0, q1, [sp]
0x06A75FF0: e30240f9  ldr x3, [x23]
0x06A75FF4: e10300aa  mov x1, x0
0x06A75FF8: e8830091  add x8, sp, #0x20
0x06A75FFC: e0030191  add x0, sp, #0x40
0x06A76000: e2031faa  mov x2, xzr
0x06A76004: e00702ad  stp q0, q1, [sp, #0x40]
0x06A76008: 97ba4b97  bl #0x3d64a64
0x06A7600C: c10240f9  ldr x1, [x22]
0x06A76010: e0830091  add x0, sp, #0x20
0x06A76014: ed3e6497  bl #0x4385bc8
0x06A76018: 080340f9  ldr x8, [x24]
0x06A7601C: f50300aa  mov x21, x0
0x06A76020: 09e140b9  ldr w9, [x8, #0xe0]
0x06A76024: 89000035  cbnz w9, #0x6a76034
0x06A76028: e00308aa  mov x0, x8
0x06A7602C: d82a1c97  bl #0x3180b8c
0x06A76030: 080340f9  ldr x8, [x24]
0x06A76034: 095d40f9  ldr x9, [x8, #0xb8]
0x06A76038: da6500b0  adrp x26, #0x772f000
0x06A7603C: 596200f0  adrp x25, #0x76c1000
0x06A76040: 360540f9  ldr x22, [x9, #8]
0x06A76044: 5a3347f9  ldr x26, [x26, #0xe60]
0x06A76048: 397f46f9  ldr x25, [x25, #0xcf8]
0x06A7604C: 160300b5  cbnz x22, #0x6a760ac
0x06A76050: 09e140b9  ldr w9, [x8, #0xe0]
0x06A76054: 89000035  cbnz w9, #0x6a76064
0x06A76058: e00308aa  mov x0, x8
0x06A7605C: cc2a1c97  bl #0x3180b8c
0x06A76060: 080340f9  ldr x8, [x24]
0x06A76064: c96500b0  adrp x9, #0x772f000
0x06A76068: 085d40f9  ldr x8, [x8, #0xb8]
0x06A7606C: 293947f9  ldr x9, [x9, #0xe70]
0x06A76070: 170140f9  ldr x23, [x8]
0x06A76074: 200140f9  ldr x0, [x9]
0x06A76078: 0a2b1c97  bl #0x3180ca0
0x06A7607C: c86500f0  adrp x8, #0x7731000
0x06A76080: 089d42f9  ldr x8, [x8, #0x538]
0x06A76084: e10317aa  mov x1, x23
0x06A76088: e3031faa  mov x3, xzr
0x06A7608C: f60300aa  mov x22, x0
0x06A76090: 020140f9  ldr x2, [x8]
0x06A76094: 8e5f9f97  bl #0x524decc
0x06A76098: 080340f9  ldr x8, [x24]
0x06A7609C: e10316aa  mov x1, x22
0x06A760A0: 005d40f9  ldr x0, [x8, #0xb8]
0x06A760A4: 168c00f8  str x22, [x0, #8]!
0x06A760A8: 472a1c97  bl #0x31809c4
0x06A760AC: 420340f9  ldr x2, [x26]
0x06A760B0: e00315aa  mov x0, x21
0x06A760B4: e10316aa  mov x1, x22
0x06A760B8: f55c4797  bl #0x3c4d48c
0x06A760BC: 210340f9  ldr x1, [x25]
0x06A760C0: 48a74797  bl #0x3c5fde0
0x06A760C4: 950a40f9  ldr x21, [x20, #0x10]
0x06A760C8: d50400b4  cbz x21, #0x6a76160
0x06A760CC: 4a6200f0  adrp x10, #0x76c1000
0x06A760D0: a80240f9  ldr x8, [x21]
0x06A760D4: 4a2147f9  ldr x10, [x10, #0xe40]
0x06A760D8: f40300aa  mov x20, x0
0x06A760DC: 095d4279  ldrh w9, [x8, #0x12e]
0x06A760E0: 410140f9  ldr x1, [x10]
0x06A760E4: 290100b4  cbz x9, #0x6a76108
0x06A760E8: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A760EC: 4a210091  add x10, x10, #8
0x06A760F0: 4b815ff8  ldur x11, [x10, #-8]
0x06A760F4: 7f0101eb  cmp x11, x1
0x06A760F8: 00010054  b.eq #0x6a76118
0x06A760FC: 290500f1  subs x9, x9, #1
0x06A76100: 4a410091  add x10, x10, #0x10
0x06A76104: 61ffff54  b.ne #0x6a760f0
0x06A76108: 42008052  movz w2, #0x2
0x06A7610C: e00315aa  mov x0, x21
0x06A76110: 80821b97  bl #0x3156b10
0x06A76114: 05000014  b #0x6a76128
0x06A76118: 490140b9  ldr w9, [x10]
0x06A7611C: 29090011  add w9, w9, #2
0x06A76120: 08d1298b  add x8, x8, w9, sxtw #4
0x06A76124: 00e10491  add x0, x8, #0x138
0x06A76128: 081040a9  ldp x8, x4, [x0]
0x06A7612C: e3b30191  add x3, sp, #0x6c
0x06A76130: e00315aa  mov x0, x21
0x06A76134: e10314aa  mov x1, x20
0x06A76138: e203132a  mov w2, w19
0x06A7613C: 00013fd6  blr x8
0x06A76140: e06f40b9  ldr w0, [sp, #0x6c]
0x06A76144: f44f4aa9  ldp x20, x19, [sp, #0xa0]
0x06A76148: f65749a9  ldp x22, x21, [sp, #0x90]
0x06A7614C: f85f48a9  ldp x24, x23, [sp, #0x80]
0x06A76150: fa6747a9  ldp x26, x25, [sp, #0x70]
0x06A76154: fe3340f9  ldr x30, [sp, #0x60]
0x06A76158: ffc30291  add sp, sp, #0xb0
0x06A7615C: c0035fd6  ret
0x06A76160: d32a1c97  bl #0x3180cac

; RVA 0x6A76164 | public void .ctor() { }
; bytes=8 sha256=5ce5711133267a6d18d3c8e73d94777fe72671cb1a4572502b02a1ec95a171c0 status=arm64_complete_bound indexed_start=True
0x06A76164: e1031faa  mov x1, xzr
0x06A76168: 2591b117  b #0x56da5fc

