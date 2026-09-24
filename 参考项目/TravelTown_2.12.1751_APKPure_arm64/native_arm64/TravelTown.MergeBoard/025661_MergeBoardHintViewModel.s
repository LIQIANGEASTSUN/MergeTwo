; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25661 Merger.MergeBoard.ViewModel.MergeBoardHintViewModel
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A31780 | public IMergeBoardLayout get_BoardLayout() { }
; bytes=8 sha256=36cc23bb70bc1c1b59cc307e6204dbafdeee922c2168929d194e21890ad85195 status=arm64_complete_bound indexed_start=True
0x06A31780: 003840f9  ldr x0, [x0, #0x70]
0x06A31784: c0035fd6  ret

; RVA 0x6A31788 | public bool IsItemMaxLevel(string itemId) { }
; bytes=172 sha256=f15b1097ab23b69ddd5a27b6cc7d27636308d57c22d6bcc6ab913778a594cec5 status=arm64_complete_bound indexed_start=True
0x06A31788: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A3178C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A31790: d59700b0  adrp x21, #0x7d2a000
0x06A31794: a84e5239  ldrb w8, [x21, #0x493]
0x06A31798: f30301aa  mov x19, x1
0x06A3179C: f40300aa  mov x20, x0
0x06A317A0: c8000037  tbnz w8, #0, #0x6a317b8
0x06A317A4: 406200b0  adrp x0, #0x767a000
0x06A317A8: 004c42f9  ldr x0, [x0, #0x498]
0x06A317AC: 9b3c1d97  bl #0x3180a18
0x06A317B0: 28008052  movz w8, #0x1
0x06A317B4: a84e1239  strb w8, [x21, #0x493]
0x06A317B8: 943640f9  ldr x20, [x20, #0x68]
0x06A317BC: b40300b4  cbz x20, #0x6a31830
0x06A317C0: 4a6200b0  adrp x10, #0x767a000
0x06A317C4: 880240f9  ldr x8, [x20]
0x06A317C8: 4a4d42f9  ldr x10, [x10, #0x498]
0x06A317CC: 095d4279  ldrh w9, [x8, #0x12e]
0x06A317D0: 410140f9  ldr x1, [x10]
0x06A317D4: 290100b4  cbz x9, #0x6a317f8
0x06A317D8: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A317DC: 4a210091  add x10, x10, #8
0x06A317E0: 4b815ff8  ldur x11, [x10, #-8]
0x06A317E4: 7f0101eb  cmp x11, x1
0x06A317E8: 00010054  b.eq #0x6a31808
0x06A317EC: 290500f1  subs x9, x9, #1
0x06A317F0: 4a410091  add x10, x10, #0x10
0x06A317F4: 61ffff54  b.ne #0x6a317e0
0x06A317F8: 42038052  movz w2, #0x1a
0x06A317FC: e00314aa  mov x0, x20
0x06A31800: c4941c97  bl #0x3156b10
0x06A31804: 05000014  b #0x6a31818
0x06A31808: 490140b9  ldr w9, [x10]
0x06A3180C: 29690011  add w9, w9, #0x1a
0x06A31810: 08d1298b  add x8, x8, w9, sxtw #4
0x06A31814: 00e10491  add x0, x8, #0x138
0x06A31818: 030840a9  ldp x3, x2, [x0]
0x06A3181C: e00314aa  mov x0, x20
0x06A31820: e10313aa  mov x1, x19
0x06A31824: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A31828: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A3182C: 60001fd6  br x3
0x06A31830: 1f3d1d97  bl #0x3180cac

; RVA 0x6A31834 | public object GetItemLevel(string itemId) { }
; bytes=224 sha256=1e8682c85fd24e63c25f511efe2ff7809d1e6bfe3abcf5429d77e1276caf01eb status=arm64_complete_bound indexed_start=True
0x06A31834: ffc300d1  sub sp, sp, #0x30
0x06A31838: fe5701a9  stp x30, x21, [sp, #0x10]
0x06A3183C: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A31840: d59700b0  adrp x21, #0x7d2a000
0x06A31844: a8525239  ldrb w8, [x21, #0x494]
0x06A31848: f30301aa  mov x19, x1
0x06A3184C: f40300aa  mov x20, x0
0x06A31850: 28010037  tbnz w8, #0, #0x6a31874
0x06A31854: 406200b0  adrp x0, #0x767a000
0x06A31858: 004c42f9  ldr x0, [x0, #0x498]
0x06A3185C: 6f3c1d97  bl #0x3180a18
0x06A31860: e06000b0  adrp x0, #0x764e000
0x06A31864: 005843f9  ldr x0, [x0, #0x6b0]
0x06A31868: 6c3c1d97  bl #0x3180a18
0x06A3186C: 28008052  movz w8, #0x1
0x06A31870: a8521239  strb w8, [x21, #0x494]
0x06A31874: 943640f9  ldr x20, [x20, #0x68]
0x06A31878: d40400b4  cbz x20, #0x6a31910
0x06A3187C: 4a6200b0  adrp x10, #0x767a000
0x06A31880: 880240f9  ldr x8, [x20]
0x06A31884: 4a4d42f9  ldr x10, [x10, #0x498]
0x06A31888: f56000b0  adrp x21, #0x764e000
0x06A3188C: 095d4279  ldrh w9, [x8, #0x12e]
0x06A31890: 410140f9  ldr x1, [x10]
0x06A31894: b55a43f9  ldr x21, [x21, #0x6b0]
0x06A31898: 290100b4  cbz x9, #0x6a318bc
0x06A3189C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A318A0: 4a210091  add x10, x10, #8
0x06A318A4: 4b815ff8  ldur x11, [x10, #-8]
0x06A318A8: 7f0101eb  cmp x11, x1
0x06A318AC: 00010054  b.eq #0x6a318cc
0x06A318B0: 290500f1  subs x9, x9, #1
0x06A318B4: 4a410091  add x10, x10, #0x10
0x06A318B8: 61ffff54  b.ne #0x6a318a4
0x06A318BC: 22038052  movz w2, #0x19
0x06A318C0: e00314aa  mov x0, x20
0x06A318C4: 93941c97  bl #0x3156b10
0x06A318C8: 05000014  b #0x6a318dc
0x06A318CC: 490140b9  ldr w9, [x10]
0x06A318D0: 29650011  add w9, w9, #0x19
0x06A318D4: 08d1298b  add x8, x8, w9, sxtw #4
0x06A318D8: 00e10491  add x0, x8, #0x138
0x06A318DC: 080840a9  ldp x8, x2, [x0]
0x06A318E0: e00314aa  mov x0, x20
0x06A318E4: e10313aa  mov x1, x19
0x06A318E8: 00013fd6  blr x8
0x06A318EC: a80240f9  ldr x8, [x21]
0x06A318F0: e00f00b9  str w0, [sp, #0xc]
0x06A318F4: e1330091  add x1, sp, #0xc
0x06A318F8: e00308aa  mov x0, x8
0x06A318FC: a63c1d97  bl #0x3180b94
0x06A31900: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A31904: fe5741a9  ldp x30, x21, [sp, #0x10]
0x06A31908: ffc30091  add sp, sp, #0x30
0x06A3190C: c0035fd6  ret
0x06A31910: e73c1d97  bl #0x3180cac

; RVA 0x6A31914 | public bool IsPrioritizeHinting(string id) { }
; bytes=292 sha256=4ecc193da6f1ffc63bb5ffabd1d465cb2095dcbb4279d6ee6e14696d6123676e status=arm64_complete_bound indexed_start=True
0x06A31914: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A31918: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A3191C: d59700b0  adrp x21, #0x7d2a000
0x06A31920: a8565239  ldrb w8, [x21, #0x495]
0x06A31924: f30301aa  mov x19, x1
0x06A31928: f40300aa  mov x20, x0
0x06A3192C: 28010037  tbnz w8, #0, #0x6a31950
0x06A31930: 406200f0  adrp x0, #0x767c000
0x06A31934: 002441f9  ldr x0, [x0, #0x248]
0x06A31938: 383c1d97  bl #0x3180a18
0x06A3193C: 406200b0  adrp x0, #0x767a000
0x06A31940: 004c42f9  ldr x0, [x0, #0x498]
0x06A31944: 353c1d97  bl #0x3180a18
0x06A31948: 28008052  movz w8, #0x1
0x06A3194C: a8561239  strb w8, [x21, #0x495]
0x06A31950: 943640f9  ldr x20, [x20, #0x68]
0x06A31954: 140700b4  cbz x20, #0x6a31a34
0x06A31958: 4a6200b0  adrp x10, #0x767a000
0x06A3195C: 880240f9  ldr x8, [x20]
0x06A31960: 4a4d42f9  ldr x10, [x10, #0x498]
0x06A31964: 095d4279  ldrh w9, [x8, #0x12e]
0x06A31968: 410140f9  ldr x1, [x10]
0x06A3196C: 290100b4  cbz x9, #0x6a31990
0x06A31970: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A31974: 4a210091  add x10, x10, #8
0x06A31978: 4b815ff8  ldur x11, [x10, #-8]
0x06A3197C: 7f0101eb  cmp x11, x1
0x06A31980: 00010054  b.eq #0x6a319a0
0x06A31984: 290500f1  subs x9, x9, #1
0x06A31988: 4a410091  add x10, x10, #0x10
0x06A3198C: 61ffff54  b.ne #0x6a31978
0x06A31990: 82008052  movz w2, #0x4
0x06A31994: e00314aa  mov x0, x20
0x06A31998: 5e941c97  bl #0x3156b10
0x06A3199C: 05000014  b #0x6a319b0
0x06A319A0: 490140b9  ldr w9, [x10]
0x06A319A4: 29110011  add w9, w9, #4
0x06A319A8: 08d1298b  add x8, x8, w9, sxtw #4
0x06A319AC: 00e10491  add x0, x8, #0x138
0x06A319B0: 080840a9  ldp x8, x2, [x0]
0x06A319B4: e00314aa  mov x0, x20
0x06A319B8: e10313aa  mov x1, x19
0x06A319BC: 00013fd6  blr x8
0x06A319C0: a00300b4  cbz x0, #0x6a31a34
0x06A319C4: 4a6200f0  adrp x10, #0x767c000
0x06A319C8: 080040f9  ldr x8, [x0]
0x06A319CC: 4a2541f9  ldr x10, [x10, #0x248]
0x06A319D0: f30300aa  mov x19, x0
0x06A319D4: 095d4279  ldrh w9, [x8, #0x12e]
0x06A319D8: 410140f9  ldr x1, [x10]
0x06A319DC: 290100b4  cbz x9, #0x6a31a00
0x06A319E0: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A319E4: 4a210091  add x10, x10, #8
0x06A319E8: 4b815ff8  ldur x11, [x10, #-8]
0x06A319EC: 7f0101eb  cmp x11, x1
0x06A319F0: 00010054  b.eq #0x6a31a10
0x06A319F4: 290500f1  subs x9, x9, #1
0x06A319F8: 4a410091  add x10, x10, #0x10
0x06A319FC: 61ffff54  b.ne #0x6a319e8
0x06A31A00: e2008052  movz w2, #0x7
0x06A31A04: e00313aa  mov x0, x19
0x06A31A08: 42941c97  bl #0x3156b10
0x06A31A0C: 05000014  b #0x6a31a20
0x06A31A10: 490140b9  ldr w9, [x10]
0x06A31A14: 291d0011  add w9, w9, #7
0x06A31A18: 08d1298b  add x8, x8, w9, sxtw #4
0x06A31A1C: 00e10491  add x0, x8, #0x138
0x06A31A20: 020440a9  ldp x2, x1, [x0]
0x06A31A24: e00313aa  mov x0, x19
0x06A31A28: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A31A2C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A31A30: 40001fd6  br x2
0x06A31A34: 9e3c1d97  bl #0x3180cac

; RVA 0x6A31A38 | public void .ctor() { }
; bytes=8 sha256=20e71fd2e3bfda681890246e514be5b0152b67c65ba1cc042fcb672d41c54115 status=arm64_complete_bound indexed_start=True
0x06A31A38: e1031faa  mov x1, xzr
0x06A31A3C: 7d66fc17  b #0x694b430

