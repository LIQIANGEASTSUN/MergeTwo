; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25875 Merger.MergeBoard.Logic.BoardOperations.BoardOperationsTracker
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A8E46C | public void Process(TickArgs result) { }
; bytes=952 sha256=7f926c126b036f423a64c735009f413aa7ed88e8f60cf7c18660c462fc01aad0 status=arm64_complete_bound indexed_start=True
0x06A8E46C: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x06A8E470: fc6f01a9  stp x28, x27, [sp, #0x10]
0x06A8E474: fa6702a9  stp x26, x25, [sp, #0x20]
0x06A8E478: f85f03a9  stp x24, x23, [sp, #0x30]
0x06A8E47C: f65704a9  stp x22, x21, [sp, #0x40]
0x06A8E480: f44f05a9  stp x20, x19, [sp, #0x50]
0x06A8E484: f5940090  adrp x21, #0x7d2a000
0x06A8E488: a83e5f39  ldrb w8, [x21, #0x7cf]
0x06A8E48C: f40301aa  mov x20, x1
0x06A8E490: f30300aa  mov x19, x0
0x06A8E494: 68030037  tbnz w8, #0, #0x6a8e500
0x06A8E498: 006500f0  adrp x0, #0x7731000
0x06A8E49C: 008047f9  ldr x0, [x0, #0xf00]
0x06A8E4A0: 5ec91b97  bl #0x3180a18
0x06A8E4A4: 006500f0  adrp x0, #0x7731000
0x06A8E4A8: 008447f9  ldr x0, [x0, #0xf08]
0x06A8E4AC: 5bc91b97  bl #0x3180a18
0x06A8E4B0: 006500f0  adrp x0, #0x7731000
0x06A8E4B4: 008847f9  ldr x0, [x0, #0xf10]
0x06A8E4B8: 58c91b97  bl #0x3180a18
0x06A8E4BC: 006500f0  adrp x0, #0x7731000
0x06A8E4C0: 008c47f9  ldr x0, [x0, #0xf18]
0x06A8E4C4: 55c91b97  bl #0x3180a18
0x06A8E4C8: 806100f0  adrp x0, #0x76c1000
0x06A8E4CC: 00ec46f9  ldr x0, [x0, #0xdd8]
0x06A8E4D0: 52c91b97  bl #0x3180a18
0x06A8E4D4: 006500d0  adrp x0, #0x7730000
0x06A8E4D8: 008441f9  ldr x0, [x0, #0x308]
0x06A8E4DC: 4fc91b97  bl #0x3180a18
0x06A8E4E0: 806100f0  adrp x0, #0x76c1000
0x06A8E4E4: 00e046f9  ldr x0, [x0, #0xdc0]
0x06A8E4E8: 4cc91b97  bl #0x3180a18
0x06A8E4EC: 806100f0  adrp x0, #0x76c1000
0x06A8E4F0: 00dc46f9  ldr x0, [x0, #0xdb8]
0x06A8E4F4: 49c91b97  bl #0x3180a18
0x06A8E4F8: 28008052  movz w8, #0x1
0x06A8E4FC: a83e1f39  strb w8, [x21, #0x7cf]
0x06A8E500: 680a40f9  ldr x8, [x19, #0x10]
0x06A8E504: 481300b4  cbz x8, #0x6a8e76c
0x06A8E508: b41800b4  cbz x20, #0x6a8e81c
0x06A8E50C: e00314aa  mov x0, x20
0x06A8E510: e1031faa  mov x1, xzr
0x06A8E514: 4420d297  bl #0x5f16624
0x06A8E518: a0120036  tbz w0, #0, #0x6a8e76c
0x06A8E51C: 886100f0  adrp x8, #0x76c1000
0x06A8E520: 08dd46f9  ldr x8, [x8, #0xdb8]
0x06A8E524: 000140f9  ldr x0, [x8]
0x06A8E528: dec91b97  bl #0x3180ca0
0x06A8E52C: 886100f0  adrp x8, #0x76c1000
0x06A8E530: 08e146f9  ldr x8, [x8, #0xdc0]
0x06A8E534: f50300aa  mov x21, x0
0x06A8E538: 010140f9  ldr x1, [x8]
0x06A8E53C: bfd55697  bl #0x4043c38
0x06A8E540: 7a0e40f9  ldr x26, [x19, #0x18]
0x06A8E544: da1600b4  cbz x26, #0x6a8e81c
0x06A8E548: 481b40b9  ldr w8, [x26, #0x18]
0x06A8E54C: 1f050071  cmp w8, #1
0x06A8E550: 2b100054  b.lt #0x6a8e754
0x06A8E554: 1c6500f0  adrp x28, #0x7731000
0x06A8E558: 1d6500f0  adrp x29, #0x7731000
0x06A8E55C: 9c8b47f9  ldr x28, [x28, #0xf10]
0x06A8E560: bd8347f9  ldr x29, [x29, #0xf00]
0x06A8E564: fb031f2a  mov w27, wzr
0x06A8E568: 7f03086b  cmp w27, w8
0x06A8E56C: a2150054  b.hs #0x6a8e820
0x06A8E570: 48cf3b8b  add x8, x26, w27, sxtw #3
0x06A8E574: 171140f9  ldr x23, [x8, #0x20]
0x06A8E578: 371500b4  cbz x23, #0x6a8e81c
0x06A8E57C: e80240f9  ldr x8, [x23]
0x06A8E580: 810340f9  ldr x1, [x28]
0x06A8E584: 095d4279  ldrh w9, [x8, #0x12e]
0x06A8E588: 290100b4  cbz x9, #0x6a8e5ac
0x06A8E58C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A8E590: 4a210091  add x10, x10, #8
0x06A8E594: 4b815ff8  ldur x11, [x10, #-8]
0x06A8E598: 7f0101eb  cmp x11, x1
0x06A8E59C: 00010054  b.eq #0x6a8e5bc
0x06A8E5A0: 290500f1  subs x9, x9, #1
0x06A8E5A4: 4a410091  add x10, x10, #0x10
0x06A8E5A8: 61ffff54  b.ne #0x6a8e594
0x06A8E5AC: 22008052  movz w2, #0x1
0x06A8E5B0: e00317aa  mov x0, x23
0x06A8E5B4: 57211b97  bl #0x3156b10
0x06A8E5B8: 05000014  b #0x6a8e5cc
0x06A8E5BC: 490140b9  ldr w9, [x10]
0x06A8E5C0: 29050011  add w9, w9, #1
0x06A8E5C4: 08d1298b  add x8, x8, w9, sxtw #4
0x06A8E5C8: 00e10491  add x0, x8, #0x138
0x06A8E5CC: 080840a9  ldp x8, x2, [x0]
0x06A8E5D0: e00317aa  mov x0, x23
0x06A8E5D4: e10314aa  mov x1, x20
0x06A8E5D8: 00013fd6  blr x8
0x06A8E5DC: a10340f9  ldr x1, [x29]
0x06A8E5E0: f60300aa  mov x22, x0
0x06A8E5E4: 4a674597  bl #0x3be830c
0x06A8E5E8: e00a0037  tbnz w0, #0, #0x6a8e744
0x06A8E5EC: e80240f9  ldr x8, [x23]
0x06A8E5F0: 780a40f9  ldr x24, [x19, #0x10]
0x06A8E5F4: 810340f9  ldr x1, [x28]
0x06A8E5F8: 095d4279  ldrh w9, [x8, #0x12e]
0x06A8E5FC: 290100b4  cbz x9, #0x6a8e620
0x06A8E600: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A8E604: 4a210091  add x10, x10, #8
0x06A8E608: 4b815ff8  ldur x11, [x10, #-8]
0x06A8E60C: 7f0101eb  cmp x11, x1
0x06A8E610: 00010054  b.eq #0x6a8e630
0x06A8E614: 290500f1  subs x9, x9, #1
0x06A8E618: 4a410091  add x10, x10, #0x10
0x06A8E61C: 61ffff54  b.ne #0x6a8e608
0x06A8E620: e00317aa  mov x0, x23
0x06A8E624: e2031f2a  mov w2, wzr
0x06A8E628: 3a211b97  bl #0x3156b10
0x06A8E62C: 04000014  b #0x6a8e63c
0x06A8E630: 490180b9  ldrsw x9, [x10]
0x06A8E634: 0811098b  add x8, x8, x9, lsl #4
0x06A8E638: 00e10491  add x0, x8, #0x138
0x06A8E63C: 080440a9  ldp x8, x1, [x0]
0x06A8E640: e00317aa  mov x0, x23
0x06A8E644: 00013fd6  blr x8
0x06A8E648: b80e00b4  cbz x24, #0x6a8e81c
0x06A8E64C: 886100f0  adrp x8, #0x76c1000
0x06A8E650: 08ed46f9  ldr x8, [x8, #0xdd8]
0x06A8E654: f70300aa  mov x23, x0
0x06A8E658: 190140f9  ldr x25, [x8]
0x06A8E65C: 080340f9  ldr x8, [x24]
0x06A8E660: 211340f9  ldr x1, [x25, #0x20]
0x06A8E664: 095d4279  ldrh w9, [x8, #0x12e]
0x06A8E668: 22a34079  ldrh w2, [x25, #0x50]
0x06A8E66C: 290100b4  cbz x9, #0x6a8e690
0x06A8E670: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A8E674: 4a210091  add x10, x10, #8
0x06A8E678: 4b815ff8  ldur x11, [x10, #-8]
0x06A8E67C: 7f0101eb  cmp x11, x1
0x06A8E680: e0000054  b.eq #0x6a8e69c
0x06A8E684: 290500f1  subs x9, x9, #1
0x06A8E688: 4a410091  add x10, x10, #0x10
0x06A8E68C: 61ffff54  b.ne #0x6a8e678
0x06A8E690: e00318aa  mov x0, x24
0x06A8E694: 1f211b97  bl #0x3156b10
0x06A8E698: 05000014  b #0x6a8e6ac
0x06A8E69C: 490140b9  ldr w9, [x10]
0x06A8E6A0: 2901020b  add w9, w9, w2
0x06A8E6A4: 08d1298b  add x8, x8, w9, sxtw #4
0x06A8E6A8: 00e10491  add x0, x8, #0x138
0x06A8E6AC: 000440f9  ldr x0, [x0, #8]
0x06A8E6B0: e10319aa  mov x1, x25
0x06A8E6B4: 35c91b97  bl #0x3180b88
0x06A8E6B8: 080440f9  ldr x8, [x0, #8]
0x06A8E6BC: e40300aa  mov x4, x0
0x06A8E6C0: e00318aa  mov x0, x24
0x06A8E6C4: e10317aa  mov x1, x23
0x06A8E6C8: e20316aa  mov x2, x22
0x06A8E6CC: e3031faa  mov x3, xzr
0x06A8E6D0: 00013fd6  blr x8
0x06A8E6D4: 550a00b4  cbz x21, #0x6a8e81c
0x06A8E6D8: a80240f9  ldr x8, [x21]
0x06A8E6DC: 0a6500f0  adrp x10, #0x7731000
0x06A8E6E0: f60300aa  mov x22, x0
0x06A8E6E4: 095d4279  ldrh w9, [x8, #0x12e]
0x06A8E6E8: 4a8d47f9  ldr x10, [x10, #0xf18]
0x06A8E6EC: 410140f9  ldr x1, [x10]
0x06A8E6F0: 290100b4  cbz x9, #0x6a8e714
0x06A8E6F4: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A8E6F8: 4a210091  add x10, x10, #8
0x06A8E6FC: 4b815ff8  ldur x11, [x10, #-8]
0x06A8E700: 7f0101eb  cmp x11, x1
0x06A8E704: 00010054  b.eq #0x6a8e724
0x06A8E708: 290500f1  subs x9, x9, #1
0x06A8E70C: 4a410091  add x10, x10, #0x10
0x06A8E710: 61ffff54  b.ne #0x6a8e6fc
0x06A8E714: 42008052  movz w2, #0x2
0x06A8E718: e00315aa  mov x0, x21
0x06A8E71C: fd201b97  bl #0x3156b10
0x06A8E720: 05000014  b #0x6a8e734
0x06A8E724: 490140b9  ldr w9, [x10]
0x06A8E728: 29090011  add w9, w9, #2
0x06A8E72C: 08d1298b  add x8, x8, w9, sxtw #4
0x06A8E730: 00e10491  add x0, x8, #0x138
0x06A8E734: 080840a9  ldp x8, x2, [x0]
0x06A8E738: e00315aa  mov x0, x21
0x06A8E73C: e10316aa  mov x1, x22
0x06A8E740: 00013fd6  blr x8
0x06A8E744: 481b40b9  ldr w8, [x26, #0x18]
0x06A8E748: 7b070011  add w27, w27, #1
0x06A8E74C: 7f03086b  cmp w27, w8
0x06A8E750: cbf0ff54  b.lt #0x6a8e568
0x06A8E754: 086500f0  adrp x8, #0x7731000
0x06A8E758: 088547f9  ldr x8, [x8, #0xf08]
0x06A8E75C: e00315aa  mov x0, x21
0x06A8E760: 010140f9  ldr x1, [x8]
0x06A8E764: 36664597  bl #0x3be803c
0x06A8E768: 00010036  tbz w0, #0, #0x6a8e788
0x06A8E76C: f44f45a9  ldp x20, x19, [sp, #0x50]
0x06A8E770: f65744a9  ldp x22, x21, [sp, #0x40]
0x06A8E774: f85f43a9  ldp x24, x23, [sp, #0x30]
0x06A8E778: fa6742a9  ldp x26, x25, [sp, #0x20]
0x06A8E77C: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x06A8E780: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x06A8E784: c0035fd6  ret
0x06A8E788: e10314aa  mov x1, x20
0x06A8E78C: 26000094  bl #0x6a8e824
0x06A8E790: 740a40f9  ldr x20, [x19, #0x10]
0x06A8E794: 540400b4  cbz x20, #0x6a8e81c
0x06A8E798: 0a6500d0  adrp x10, #0x7730000
0x06A8E79C: 880240f9  ldr x8, [x20]
0x06A8E7A0: 4a8541f9  ldr x10, [x10, #0x308]
0x06A8E7A4: f30300aa  mov x19, x0
0x06A8E7A8: 095d4279  ldrh w9, [x8, #0x12e]
0x06A8E7AC: 410140f9  ldr x1, [x10]
0x06A8E7B0: 290100b4  cbz x9, #0x6a8e7d4
0x06A8E7B4: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A8E7B8: 4a210091  add x10, x10, #8
0x06A8E7BC: 4b815ff8  ldur x11, [x10, #-8]
0x06A8E7C0: 7f0101eb  cmp x11, x1
0x06A8E7C4: 00010054  b.eq #0x6a8e7e4
0x06A8E7C8: 290500f1  subs x9, x9, #1
0x06A8E7CC: 4a410091  add x10, x10, #0x10
0x06A8E7D0: 61ffff54  b.ne #0x6a8e7bc
0x06A8E7D4: e00314aa  mov x0, x20
0x06A8E7D8: e2031f2a  mov w2, wzr
0x06A8E7DC: cd201b97  bl #0x3156b10
0x06A8E7E0: 04000014  b #0x6a8e7f0
0x06A8E7E4: 490180b9  ldrsw x9, [x10]
0x06A8E7E8: 0811098b  add x8, x8, x9, lsl #4
0x06A8E7EC: 00e10491  add x0, x8, #0x138
0x06A8E7F0: 040c40a9  ldp x4, x3, [x0]
0x06A8E7F4: e00314aa  mov x0, x20
0x06A8E7F8: e10315aa  mov x1, x21
0x06A8E7FC: e20313aa  mov x2, x19
0x06A8E800: f44f45a9  ldp x20, x19, [sp, #0x50]
0x06A8E804: f65744a9  ldp x22, x21, [sp, #0x40]
0x06A8E808: f85f43a9  ldp x24, x23, [sp, #0x30]
0x06A8E80C: fa6742a9  ldp x26, x25, [sp, #0x20]
0x06A8E810: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x06A8E814: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x06A8E818: 80001fd6  br x4
0x06A8E81C: 24c91b97  bl #0x3180cac
0x06A8E820: 25c91b97  bl #0x3180cb4

; RVA 0x6A8E824 | private Dictionary<string, string> GetOperationsMetadata(TickArgs result) { }
; bytes=240 sha256=b966b82f8bc2ce85128d1f2b2f347751a8e0af024420491fadde26acfda362c8 status=arm64_complete_bound indexed_start=True
0x06A8E824: fe0f1df8  str x30, [sp, #-0x30]!
0x06A8E828: f65701a9  stp x22, x21, [sp, #0x10]
0x06A8E82C: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A8E830: f6940090  adrp x22, #0x7d2a000
0x06A8E834: 155e00d0  adrp x21, #0x7650000
0x06A8E838: 745e0090  adrp x20, #0x765a000
0x06A8E83C: c8425f39  ldrb w8, [x22, #0x7d0]
0x06A8E840: b51e44f9  ldr x21, [x21, #0x838]
0x06A8E844: 94ae44f9  ldr x20, [x20, #0x958]
0x06A8E848: f30301aa  mov x19, x1
0x06A8E84C: 48020037  tbnz w8, #0, #0x6a8e894
0x06A8E850: 005e00d0  adrp x0, #0x7650000
0x06A8E854: 00e843f9  ldr x0, [x0, #0x7d0]
0x06A8E858: 70c81b97  bl #0x3180a18
0x06A8E85C: 605e0090  adrp x0, #0x765a000
0x06A8E860: 00ac44f9  ldr x0, [x0, #0x958]
0x06A8E864: 6dc81b97  bl #0x3180a18
0x06A8E868: 005e00d0  adrp x0, #0x7650000
0x06A8E86C: 001c44f9  ldr x0, [x0, #0x838]
0x06A8E870: 6ac81b97  bl #0x3180a18
0x06A8E874: 006500f0  adrp x0, #0x7731000
0x06A8E878: 009047f9  ldr x0, [x0, #0xf20]
0x06A8E87C: 67c81b97  bl #0x3180a18
0x06A8E880: 405f00f0  adrp x0, #0x7679000
0x06A8E884: 004847f9  ldr x0, [x0, #0xe90]
0x06A8E888: 64c81b97  bl #0x3180a18
0x06A8E88C: 28008052  movz w8, #0x1
0x06A8E890: c8421f39  strb w8, [x22, #0x7d0]
0x06A8E894: a00240f9  ldr x0, [x21]
0x06A8E898: ff0700f9  str xzr, [sp, #8]
0x06A8E89C: 01c91b97  bl #0x3180ca0
0x06A8E8A0: 810240f9  ldr x1, [x20]
0x06A8E8A4: f40300aa  mov x20, x0
0x06A8E8A8: bf4d9197  bl #0x4ee1fa4
0x06A8E8AC: 330300b4  cbz x19, #0x6a8e910
0x06A8E8B0: 086500f0  adrp x8, #0x7731000
0x06A8E8B4: 089147f9  ldr x8, [x8, #0xf20]
0x06A8E8B8: e1230091  add x1, sp, #8
0x06A8E8BC: e00313aa  mov x0, x19
0x06A8E8C0: 020140f9  ldr x2, [x8]
0x06A8E8C4: d7d94c97  bl #0x3dc5020
0x06A8E8C8: a0010036  tbz w0, #0, #0x6a8e8fc
0x06A8E8CC: e80740f9  ldr x8, [sp, #8]
0x06A8E8D0: 080200b4  cbz x8, #0x6a8e910
0x06A8E8D4: f40100b4  cbz x20, #0x6a8e910
0x06A8E8D8: 020940f9  ldr x2, [x8, #0x10]
0x06A8E8DC: 485f00f0  adrp x8, #0x7679000
0x06A8E8E0: 095e00d0  adrp x9, #0x7650000
0x06A8E8E4: 084947f9  ldr x8, [x8, #0xe90]
0x06A8E8E8: 29e943f9  ldr x9, [x9, #0x7d0]
0x06A8E8EC: e00314aa  mov x0, x20
0x06A8E8F0: 010140f9  ldr x1, [x8]
0x06A8E8F4: 230140f9  ldr x3, [x9]
0x06A8E8F8: 21519197  bl #0x4ee2d7c
0x06A8E8FC: e00314aa  mov x0, x20
0x06A8E900: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A8E904: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A8E908: fe0743f8  ldr x30, [sp], #0x30
0x06A8E90C: c0035fd6  ret
0x06A8E910: e7c81b97  bl #0x3180cac

; RVA 0x6A8E914 | public void .ctor() { }
; bytes=8 sha256=0ae5ddf72875222e455fcb0a378a09c9b575e88ccbbb8e91b711bf6766af092b status=arm64_complete_bound indexed_start=True
0x06A8E914: e1031faa  mov x1, xzr
0x06A8E918: 392fb117  b #0x56da5fc

