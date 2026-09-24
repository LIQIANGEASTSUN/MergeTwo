; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 594 MergeEngine.ECS.ItemsEntityService
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x626E2B8 | private DateTime get_ServerDateTime() { }
; bytes=164 sha256=89cc9331ac3b80ce74de911e1d8937803a82783c1ac438eb9c63465f84b6f8f6 status=arm64_complete_bound indexed_start=True
0x0626E2B8: fe0f1ef8  str x30, [sp, #-0x20]!
0x0626E2BC: f44f01a9  stp x20, x19, [sp, #0x10]
0x0626E2C0: b4d500f0  adrp x20, #0x7d25000
0x0626E2C4: 88425039  ldrb w8, [x20, #0x410]
0x0626E2C8: f30300aa  mov x19, x0
0x0626E2CC: c8000037  tbnz w8, #0, #0x626e2e4
0x0626E2D0: 20a000b0  adrp x0, #0x7673000
0x0626E2D4: 006c46f9  ldr x0, [x0, #0xcd8]
0x0626E2D8: d0493c97  bl #0x3180a18
0x0626E2DC: 28008052  movz w8, #0x1
0x0626E2E0: 88421039  strb w8, [x20, #0x410]
0x0626E2E4: 731640f9  ldr x19, [x19, #0x28]
0x0626E2E8: 930300b4  cbz x19, #0x626e358
0x0626E2EC: 2aa000b0  adrp x10, #0x7673000
0x0626E2F0: 680240f9  ldr x8, [x19]
0x0626E2F4: 4a6d46f9  ldr x10, [x10, #0xcd8]
0x0626E2F8: 095d4279  ldrh w9, [x8, #0x12e]
0x0626E2FC: 410140f9  ldr x1, [x10]
0x0626E300: 290100b4  cbz x9, #0x626e324
0x0626E304: 0a5940f9  ldr x10, [x8, #0xb0]
0x0626E308: 4a210091  add x10, x10, #8
0x0626E30C: 4b815ff8  ldur x11, [x10, #-8]
0x0626E310: 7f0101eb  cmp x11, x1
0x0626E314: 00010054  b.eq #0x626e334
0x0626E318: 290500f1  subs x9, x9, #1
0x0626E31C: 4a410091  add x10, x10, #0x10
0x0626E320: 61ffff54  b.ne #0x626e30c
0x0626E324: 22008052  movz w2, #0x1
0x0626E328: e00313aa  mov x0, x19
0x0626E32C: f9a13b97  bl #0x3156b10
0x0626E330: 05000014  b #0x626e344
0x0626E334: 490140b9  ldr w9, [x10]
0x0626E338: 29050011  add w9, w9, #1
0x0626E33C: 08d1298b  add x8, x8, w9, sxtw #4
0x0626E340: 00e10491  add x0, x8, #0x138
0x0626E344: 020440a9  ldp x2, x1, [x0]
0x0626E348: e00313aa  mov x0, x19
0x0626E34C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0626E350: fe0742f8  ldr x30, [sp], #0x20
0x0626E354: 40001fd6  br x2
0x0626E358: 554a3c97  bl #0x3180cac

; RVA 0x626E35C | public double get_TotalSecondsNow() { }
; bytes=176 sha256=e44525a21498ac6e06e37c90fe6c19bb7f6d97a4eef72696fcd56c2d4de89b8b status=arm64_complete_bound indexed_start=True
0x0626E35C: ffc300d1  sub sp, sp, #0x30
0x0626E360: fe5701a9  stp x30, x21, [sp, #0x10]
0x0626E364: f44f02a9  stp x20, x19, [sp, #0x20]
0x0626E368: b4d500f0  adrp x20, #0x7d25000
0x0626E36C: 159f0090  adrp x21, #0x764e000
0x0626E370: 88465039  ldrb w8, [x20, #0x411]
0x0626E374: b52a43f9  ldr x21, [x21, #0x650]
0x0626E378: f30300aa  mov x19, x0
0x0626E37C: 28010037  tbnz w8, #0, #0x626e3a0
0x0626E380: 009f0090  adrp x0, #0x764e000
0x0626E384: 002843f9  ldr x0, [x0, #0x650]
0x0626E388: a4493c97  bl #0x3180a18
0x0626E38C: 009f00f0  adrp x0, #0x7651000
0x0626E390: 00ec43f9  ldr x0, [x0, #0x7d8]
0x0626E394: a1493c97  bl #0x3180a18
0x0626E398: 28008052  movz w8, #0x1
0x0626E39C: 88461039  strb w8, [x20, #0x411]
0x0626E3A0: 149f00f0  adrp x20, #0x7651000
0x0626E3A4: 94ee43f9  ldr x20, [x20, #0x7d8]
0x0626E3A8: e00313aa  mov x0, x19
0x0626E3AC: ff0300f9  str xzr, [sp]
0x0626E3B0: c2ffff97  bl #0x626e2b8
0x0626E3B4: a80240f9  ldr x8, [x21]
0x0626E3B8: e00700f9  str x0, [sp, #8]
0x0626E3BC: 09e140b9  ldr w9, [x8, #0xe0]
0x0626E3C0: 69000035  cbnz w9, #0x626e3cc
0x0626E3C4: e00308aa  mov x0, x8
0x0626E3C8: f1493c97  bl #0x3180b8c
0x0626E3CC: e0230091  add x0, sp, #8
0x0626E3D0: e1031faa  mov x1, xzr
0x0626E3D4: 7c19d097  bl #0x56749c4
0x0626E3D8: 880240f9  ldr x8, [x20]
0x0626E3DC: e00300f9  str x0, [sp]
0x0626E3E0: 09e140b9  ldr w9, [x8, #0xe0]
0x0626E3E4: 69000035  cbnz w9, #0x626e3f0
0x0626E3E8: e00308aa  mov x0, x8
0x0626E3EC: e8493c97  bl #0x3180b8c
0x0626E3F0: e0030091  mov x0, sp
0x0626E3F4: e1031faa  mov x1, xzr
0x0626E3F8: 4cfdd097  bl #0x56ad928
0x0626E3FC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0626E400: fe5741a9  ldp x30, x21, [sp, #0x10]
0x0626E404: ffc30091  add sp, sp, #0x30
0x0626E408: c0035fd6  ret

; RVA 0x626E40C | private long get_CurrentServerTimeMS() { }
; bytes=160 sha256=128bfc8f24f0ac1297660485f56a78081e7bd9e86a81ceef924408e24d4c02a2 status=arm64_complete_bound indexed_start=True
0x0626E40C: fe0f1ef8  str x30, [sp, #-0x20]!
0x0626E410: f44f01a9  stp x20, x19, [sp, #0x10]
0x0626E414: b4d500f0  adrp x20, #0x7d25000
0x0626E418: 884a5039  ldrb w8, [x20, #0x412]
0x0626E41C: f30300aa  mov x19, x0
0x0626E420: c8000037  tbnz w8, #0, #0x626e438
0x0626E424: 20a000b0  adrp x0, #0x7673000
0x0626E428: 006c46f9  ldr x0, [x0, #0xcd8]
0x0626E42C: 7b493c97  bl #0x3180a18
0x0626E430: 28008052  movz w8, #0x1
0x0626E434: 884a1039  strb w8, [x20, #0x412]
0x0626E438: 731640f9  ldr x19, [x19, #0x28]
0x0626E43C: 730300b4  cbz x19, #0x626e4a8
0x0626E440: 2aa000b0  adrp x10, #0x7673000
0x0626E444: 680240f9  ldr x8, [x19]
0x0626E448: 4a6d46f9  ldr x10, [x10, #0xcd8]
0x0626E44C: 095d4279  ldrh w9, [x8, #0x12e]
0x0626E450: 410140f9  ldr x1, [x10]
0x0626E454: 290100b4  cbz x9, #0x626e478
0x0626E458: 0a5940f9  ldr x10, [x8, #0xb0]
0x0626E45C: 4a210091  add x10, x10, #8
0x0626E460: 4b815ff8  ldur x11, [x10, #-8]
0x0626E464: 7f0101eb  cmp x11, x1
0x0626E468: 00010054  b.eq #0x626e488
0x0626E46C: 290500f1  subs x9, x9, #1
0x0626E470: 4a410091  add x10, x10, #0x10
0x0626E474: 61ffff54  b.ne #0x626e460
0x0626E478: e00313aa  mov x0, x19
0x0626E47C: e2031f2a  mov w2, wzr
0x0626E480: a4a13b97  bl #0x3156b10
0x0626E484: 04000014  b #0x626e494
0x0626E488: 490180b9  ldrsw x9, [x10]
0x0626E48C: 0811098b  add x8, x8, x9, lsl #4
0x0626E490: 00e10491  add x0, x8, #0x138
0x0626E494: 020440a9  ldp x2, x1, [x0]
0x0626E498: e00313aa  mov x0, x19
0x0626E49C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0626E4A0: fe0742f8  ldr x30, [sp], #0x20
0x0626E4A4: 40001fd6  br x2
0x0626E4A8: 014a3c97  bl #0x3180cac

; RVA 0x626E4AC | public void TryLoadSharedItemComponents(Entity entity, ItemPayloadBase item) { }
; bytes=1084 sha256=af3f9146ad674901c67db1d6fceb0be9036db21b3097ce5440027fba2f95cc34 status=arm64_complete_bound indexed_start=True
0x0626E4AC: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x0626E4B0: fc6f01a9  stp x28, x27, [sp, #0x10]
0x0626E4B4: fa6702a9  stp x26, x25, [sp, #0x20]
0x0626E4B8: f85f03a9  stp x24, x23, [sp, #0x30]
0x0626E4BC: f65704a9  stp x22, x21, [sp, #0x40]
0x0626E4C0: f44f05a9  stp x20, x19, [sp, #0x50]
0x0626E4C4: b6d500f0  adrp x22, #0x7d25000
0x0626E4C8: c84e5039  ldrb w8, [x22, #0x413]
0x0626E4CC: f40302aa  mov x20, x2
0x0626E4D0: f30301aa  mov x19, x1
0x0626E4D4: f50300aa  mov x21, x0
0x0626E4D8: a8080037  tbnz w8, #0, #0x626e5ec
0x0626E4DC: 009f0090  adrp x0, #0x764e000
0x0626E4E0: 00cc42f9  ldr x0, [x0, #0x598]
0x0626E4E4: 4d493c97  bl #0x3180a18
0x0626E4E8: 60a00090  adrp x0, #0x767a000
0x0626E4EC: 008044f9  ldr x0, [x0, #0x900]
0x0626E4F0: 4a493c97  bl #0x3180a18
0x0626E4F4: 60a00090  adrp x0, #0x767a000
0x0626E4F8: 008444f9  ldr x0, [x0, #0x908]
0x0626E4FC: 47493c97  bl #0x3180a18
0x0626E500: 60a00090  adrp x0, #0x767a000
0x0626E504: 008c44f9  ldr x0, [x0, #0x918]
0x0626E508: 44493c97  bl #0x3180a18
0x0626E50C: 60a00090  adrp x0, #0x767a000
0x0626E510: 009044f9  ldr x0, [x0, #0x920]
0x0626E514: 41493c97  bl #0x3180a18
0x0626E518: 60a00090  adrp x0, #0x767a000
0x0626E51C: 009844f9  ldr x0, [x0, #0x930]
0x0626E520: 3e493c97  bl #0x3180a18
0x0626E524: 80a000d0  adrp x0, #0x7680000
0x0626E528: 003442f9  ldr x0, [x0, #0x468]
0x0626E52C: 3b493c97  bl #0x3180a18
0x0626E530: c0a30090  adrp x0, #0x76e6000
0x0626E534: 000c42f9  ldr x0, [x0, #0x418]
0x0626E538: 38493c97  bl #0x3180a18
0x0626E53C: 60a00090  adrp x0, #0x767a000
0x0626E540: 00a444f9  ldr x0, [x0, #0x948]
0x0626E544: 35493c97  bl #0x3180a18
0x0626E548: 60a00090  adrp x0, #0x767a000
0x0626E54C: 00b044f9  ldr x0, [x0, #0x960]
0x0626E550: 32493c97  bl #0x3180a18
0x0626E554: c0a30090  adrp x0, #0x76e6000
0x0626E558: 001042f9  ldr x0, [x0, #0x420]
0x0626E55C: 2f493c97  bl #0x3180a18
0x0626E560: c0a30090  adrp x0, #0x76e6000
0x0626E564: 001442f9  ldr x0, [x0, #0x428]
0x0626E568: 2c493c97  bl #0x3180a18
0x0626E56C: c0a30090  adrp x0, #0x76e6000
0x0626E570: 001842f9  ldr x0, [x0, #0x430]
0x0626E574: 29493c97  bl #0x3180a18
0x0626E578: c0a30090  adrp x0, #0x76e6000
0x0626E57C: 001c42f9  ldr x0, [x0, #0x438]
0x0626E580: 26493c97  bl #0x3180a18
0x0626E584: c0a30090  adrp x0, #0x76e6000
0x0626E588: 002042f9  ldr x0, [x0, #0x440]
0x0626E58C: 23493c97  bl #0x3180a18
0x0626E590: c0a30090  adrp x0, #0x76e6000
0x0626E594: 002442f9  ldr x0, [x0, #0x448]
0x0626E598: 20493c97  bl #0x3180a18
0x0626E59C: c0a30090  adrp x0, #0x76e6000
0x0626E5A0: 002842f9  ldr x0, [x0, #0x450]
0x0626E5A4: 1d493c97  bl #0x3180a18
0x0626E5A8: c0a30090  adrp x0, #0x76e6000
0x0626E5AC: 002c42f9  ldr x0, [x0, #0x458]
0x0626E5B0: 1a493c97  bl #0x3180a18
0x0626E5B4: c0a30090  adrp x0, #0x76e6000
0x0626E5B8: 003042f9  ldr x0, [x0, #0x460]
0x0626E5BC: 17493c97  bl #0x3180a18
0x0626E5C0: c0a30090  adrp x0, #0x76e6000
0x0626E5C4: 003442f9  ldr x0, [x0, #0x468]
0x0626E5C8: 14493c97  bl #0x3180a18
0x0626E5CC: c0a30090  adrp x0, #0x76e6000
0x0626E5D0: 003842f9  ldr x0, [x0, #0x470]
0x0626E5D4: 11493c97  bl #0x3180a18
0x0626E5D8: c0a30090  adrp x0, #0x76e6000
0x0626E5DC: 003c42f9  ldr x0, [x0, #0x478]
0x0626E5E0: 0e493c97  bl #0x3180a18
0x0626E5E4: 28008052  movz w8, #0x1
0x0626E5E8: c84e1039  strb w8, [x22, #0x413]
0x0626E5EC: d41700b4  cbz x20, #0x626e8e4
0x0626E5F0: 813a40f9  ldr x1, [x20, #0x70]
0x0626E5F4: e00315aa  mov x0, x21
0x0626E5F8: bc000094  bl #0x626e8e8
0x0626E5FC: 813240f9  ldr x1, [x20, #0x60]
0x0626E600: e00315aa  mov x0, x21
0x0626E604: e2000094  bl #0x626e98c
0x0626E608: 813e40f9  ldr x1, [x20, #0x78]
0x0626E60C: e00315aa  mov x0, x21
0x0626E610: f7000094  bl #0x626e9ec
0x0626E614: 931600b4  cbz x19, #0x626e8e4
0x0626E618: 68a00090  adrp x8, #0x767a000
0x0626E61C: 089144f9  ldr x8, [x8, #0x920]
0x0626E620: d6a30090  adrp x22, #0x76e6000
0x0626E624: 78a00090  adrp x24, #0x767a000
0x0626E628: d9a30090  adrp x25, #0x76e6000
0x0626E62C: 7aa00090  adrp x26, #0x767a000
0x0626E630: dba30090  adrp x27, #0x76e6000
0x0626E634: 7ca00090  adrp x28, #0x767a000
0x0626E638: dda30090  adrp x29, #0x76e6000
0x0626E63C: 97a000d0  adrp x23, #0x7680000
0x0626E640: d62242f9  ldr x22, [x22, #0x440]
0x0626E644: 189b44f9  ldr x24, [x24, #0x930]
0x0626E648: 392742f9  ldr x25, [x25, #0x448]
0x0626E64C: 5a8344f9  ldr x26, [x26, #0x900]
0x0626E650: 7b1742f9  ldr x27, [x27, #0x428]
0x0626E654: 9c8f44f9  ldr x28, [x28, #0x918]
0x0626E658: bd1f42f9  ldr x29, [x29, #0x438]
0x0626E65C: f73642f9  ldr x23, [x23, #0x468]
0x0626E660: 010140f9  ldr x1, [x8]
0x0626E664: e00313aa  mov x0, x19
0x0626E668: c7c96697  bl #0x3c20d84
0x0626E66C: c30240f9  ldr x3, [x22]
0x0626E670: e10300aa  mov x1, x0
0x0626E674: e00315aa  mov x0, x21
0x0626E678: e20314aa  mov x2, x20
0x0626E67C: b9e86997  bl #0x3ce8960
0x0626E680: 010340f9  ldr x1, [x24]
0x0626E684: e00313aa  mov x0, x19
0x0626E688: bfc96697  bl #0x3c20d84
0x0626E68C: 823240f9  ldr x2, [x20, #0x60]
0x0626E690: 230340f9  ldr x3, [x25]
0x0626E694: e10300aa  mov x1, x0
0x0626E698: e00315aa  mov x0, x21
0x0626E69C: b1e86997  bl #0x3ce8960
0x0626E6A0: 410340f9  ldr x1, [x26]
0x0626E6A4: e00313aa  mov x0, x19
0x0626E6A8: b7c96697  bl #0x3c20d84
0x0626E6AC: 824240f9  ldr x2, [x20, #0x80]
0x0626E6B0: 630340f9  ldr x3, [x27]
0x0626E6B4: e10300aa  mov x1, x0
0x0626E6B8: e00315aa  mov x0, x21
0x0626E6BC: a9e86997  bl #0x3ce8960
0x0626E6C0: 810340f9  ldr x1, [x28]
0x0626E6C4: e00313aa  mov x0, x19
0x0626E6C8: afc96697  bl #0x3c20d84
0x0626E6CC: 823640f9  ldr x2, [x20, #0x68]
0x0626E6D0: a30340f9  ldr x3, [x29]
0x0626E6D4: e10300aa  mov x1, x0
0x0626E6D8: e00315aa  mov x0, x21
0x0626E6DC: a1e86997  bl #0x3ce8960
0x0626E6E0: 68a00090  adrp x8, #0x767a000
0x0626E6E4: 08b144f9  ldr x8, [x8, #0x960]
0x0626E6E8: e00313aa  mov x0, x19
0x0626E6EC: 010140f9  ldr x1, [x8]
0x0626E6F0: a5c96697  bl #0x3c20d84
0x0626E6F4: c8a30090  adrp x8, #0x76e6000
0x0626E6F8: 823e40f9  ldr x2, [x20, #0x78]
0x0626E6FC: 083942f9  ldr x8, [x8, #0x470]
0x0626E700: e10300aa  mov x1, x0
0x0626E704: e00315aa  mov x0, x21
0x0626E708: 030140f9  ldr x3, [x8]
0x0626E70C: 95e86997  bl #0x3ce8960
0x0626E710: e10240f9  ldr x1, [x23]
0x0626E714: e00313aa  mov x0, x19
0x0626E718: 9bc96697  bl #0x3c20d84
0x0626E71C: c8a30090  adrp x8, #0x76e6000
0x0626E720: 823a40f9  ldr x2, [x20, #0x70]
0x0626E724: 082d42f9  ldr x8, [x8, #0x458]
0x0626E728: e10300aa  mov x1, x0
0x0626E72C: e00315aa  mov x0, x21
0x0626E730: 030140f9  ldr x3, [x8]
0x0626E734: 8be86997  bl #0x3ce8960
0x0626E738: c8a30090  adrp x8, #0x76e6000
0x0626E73C: 080d42f9  ldr x8, [x8, #0x418]
0x0626E740: e00313aa  mov x0, x19
0x0626E744: 010140f9  ldr x1, [x8]
0x0626E748: 8fc96697  bl #0x3c20d84
0x0626E74C: c8a30090  adrp x8, #0x76e6000
0x0626E750: 823a40f9  ldr x2, [x20, #0x70]
0x0626E754: 083142f9  ldr x8, [x8, #0x460]
0x0626E758: e10300aa  mov x1, x0
0x0626E75C: e00315aa  mov x0, x21
0x0626E760: 030140f9  ldr x3, [x8]
0x0626E764: 7fe86997  bl #0x3ce8960
0x0626E768: 68a00090  adrp x8, #0x767a000
0x0626E76C: 08a544f9  ldr x8, [x8, #0x948]
0x0626E770: e00313aa  mov x0, x19
0x0626E774: 010140f9  ldr x1, [x8]
0x0626E778: 83c96697  bl #0x3c20d84
0x0626E77C: c8a30090  adrp x8, #0x76e6000
0x0626E780: 825240f9  ldr x2, [x20, #0xa0]
0x0626E784: 083542f9  ldr x8, [x8, #0x468]
0x0626E788: e10300aa  mov x1, x0
0x0626E78C: e00315aa  mov x0, x21
0x0626E790: 030140f9  ldr x3, [x8]
0x0626E794: 73e86997  bl #0x3ce8960
0x0626E798: 884a40f9  ldr x8, [x20, #0x90]
0x0626E79C: a80100b4  cbz x8, #0x626e7d0
0x0626E7A0: c8a30090  adrp x8, #0x76e6000
0x0626E7A4: 081142f9  ldr x8, [x8, #0x420]
0x0626E7A8: d6a30090  adrp x22, #0x76e6000
0x0626E7AC: e00313aa  mov x0, x19
0x0626E7B0: 010140f9  ldr x1, [x8]
0x0626E7B4: d62a42f9  ldr x22, [x22, #0x450]
0x0626E7B8: 70cc6697  bl #0x3c21978
0x0626E7BC: 824a40f9  ldr x2, [x20, #0x90]
0x0626E7C0: c30240f9  ldr x3, [x22]
0x0626E7C4: e10300aa  mov x1, x0
0x0626E7C8: e00315aa  mov x0, x21
0x0626E7CC: 65e86997  bl #0x3ce8960
0x0626E7D0: 882240f9  ldr x8, [x20, #0x40]
0x0626E7D4: a80000b4  cbz x8, #0x626e7e8
0x0626E7D8: e00315aa  mov x0, x21
0x0626E7DC: e10313aa  mov x1, x19
0x0626E7E0: e20314aa  mov x2, x20
0x0626E7E4: 9a000094  bl #0x626ea4c
0x0626E7E8: 884e40f9  ldr x8, [x20, #0x98]
0x0626E7EC: 080400b4  cbz x8, #0x626e86c
0x0626E7F0: 68a00090  adrp x8, #0x767a000
0x0626E7F4: 088544f9  ldr x8, [x8, #0x908]
0x0626E7F8: e00313aa  mov x0, x19
0x0626E7FC: 010140f9  ldr x1, [x8]
0x0626E800: 61c96697  bl #0x3c20d84
0x0626E804: 200400b4  cbz x0, #0x626e888
0x0626E808: c8a30090  adrp x8, #0x76e6000
0x0626E80C: 824e40f9  ldr x2, [x20, #0x98]
0x0626E810: 081942f9  ldr x8, [x8, #0x430]
0x0626E814: f60300aa  mov x22, x0
0x0626E818: e00315aa  mov x0, x21
0x0626E81C: e10316aa  mov x1, x22
0x0626E820: 030140f9  ldr x3, [x8]
0x0626E824: 4fe86997  bl #0x3ce8960
0x0626E828: e10240f9  ldr x1, [x23]
0x0626E82C: e00313aa  mov x0, x19
0x0626E830: 55c96697  bl #0x3c20d84
0x0626E834: c00100b4  cbz x0, #0x626e86c
0x0626E838: e10240f9  ldr x1, [x23]
0x0626E83C: e00313aa  mov x0, x19
0x0626E840: 51c96697  bl #0x3c20d84
0x0626E844: 000500b4  cbz x0, #0x626e8e4
0x0626E848: c11e40f9  ldr x1, [x22, #0x38]
0x0626E84C: f44f45a9  ldp x20, x19, [sp, #0x50]
0x0626E850: f65744a9  ldp x22, x21, [sp, #0x40]
0x0626E854: f85f43a9  ldp x24, x23, [sp, #0x30]
0x0626E858: fa6742a9  ldp x26, x25, [sp, #0x20]
0x0626E85C: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x0626E860: e2031faa  mov x2, xzr
0x0626E864: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x0626E868: c6461a14  b #0x6900380
0x0626E86C: f44f45a9  ldp x20, x19, [sp, #0x50]
0x0626E870: f65744a9  ldp x22, x21, [sp, #0x40]
0x0626E874: f85f43a9  ldp x24, x23, [sp, #0x30]
0x0626E878: fa6742a9  ldp x26, x25, [sp, #0x20]
0x0626E87C: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x0626E880: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x0626E884: c0035fd6  ret
0x0626E888: c8a30090  adrp x8, #0x76e6000
0x0626E88C: 810a40f9  ldr x1, [x20, #0x10]
0x0626E890: 083d42f9  ldr x8, [x8, #0x478]
0x0626E894: e2031faa  mov x2, xzr
0x0626E898: 000140f9  ldr x0, [x8]
0x0626E89C: c1efc997  bl #0x54ea7a0
0x0626E8A0: 089f0090  adrp x8, #0x764e000
0x0626E8A4: 08cd42f9  ldr x8, [x8, #0x598]
0x0626E8A8: f30300aa  mov x19, x0
0x0626E8AC: 080140f9  ldr x8, [x8]
0x0626E8B0: 09e140b9  ldr w9, [x8, #0xe0]
0x0626E8B4: 69000035  cbnz w9, #0x626e8c0
0x0626E8B8: e00308aa  mov x0, x8
0x0626E8BC: b4483c97  bl #0x3180b8c
0x0626E8C0: e00313aa  mov x0, x19
0x0626E8C4: f44f45a9  ldp x20, x19, [sp, #0x50]
0x0626E8C8: f65744a9  ldp x22, x21, [sp, #0x40]
0x0626E8CC: f85f43a9  ldp x24, x23, [sp, #0x30]
0x0626E8D0: fa6742a9  ldp x26, x25, [sp, #0x20]
0x0626E8D4: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x0626E8D8: e1031faa  mov x1, xzr
0x0626E8DC: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x0626E8E0: e6ed3014  b #0x6eaa078
0x0626E8E4: f2483c97  bl #0x3180cac

; RVA 0x626EA4C | private void TryInitializeTimeLimitedItem(Entity entity, ItemPayloadBase item) { }
; bytes=640 sha256=152879bee27eb6ad4e77d21f0d0734e7e02e78f16c3a193fa884b44fd63f2746 status=arm64_complete_bound indexed_start=True
0x0626EA4C: ff8301d1  sub sp, sp, #0x60
0x0626EA50: e81300fd  str d8, [sp, #0x20]
0x0626EA54: fe5f03a9  stp x30, x23, [sp, #0x30]
0x0626EA58: f65704a9  stp x22, x21, [sp, #0x40]
0x0626EA5C: f44f05a9  stp x20, x19, [sp, #0x50]
0x0626EA60: b6d500f0  adrp x22, #0x7d25000
0x0626EA64: c8525039  ldrb w8, [x22, #0x414]
0x0626EA68: f30302aa  mov x19, x2
0x0626EA6C: f40301aa  mov x20, x1
0x0626EA70: f50300aa  mov x21, x0
0x0626EA74: c8030037  tbnz w8, #0, #0x626eaec
0x0626EA78: e09f00f0  adrp x0, #0x766d000
0x0626EA7C: 006c46f9  ldr x0, [x0, #0xcd8]
0x0626EA80: e6473c97  bl #0x3180a18
0x0626EA84: 60a00090  adrp x0, #0x767a000
0x0626EA88: 00ac44f9  ldr x0, [x0, #0x958]
0x0626EA8C: e3473c97  bl #0x3180a18
0x0626EA90: c0a30090  adrp x0, #0x76e6000
0x0626EA94: 004042f9  ldr x0, [x0, #0x480]
0x0626EA98: e0473c97  bl #0x3180a18
0x0626EA9C: 40a000f0  adrp x0, #0x7679000
0x0626EAA0: 007844f9  ldr x0, [x0, #0x8f0]
0x0626EAA4: dd473c97  bl #0x3180a18
0x0626EAA8: c0a30090  adrp x0, #0x76e6000
0x0626EAAC: 004442f9  ldr x0, [x0, #0x488]
0x0626EAB0: da473c97  bl #0x3180a18
0x0626EAB4: 80a00090  adrp x0, #0x767e000
0x0626EAB8: 00f842f9  ldr x0, [x0, #0x5f0]
0x0626EABC: d7473c97  bl #0x3180a18
0x0626EAC0: c0a30090  adrp x0, #0x76e6000
0x0626EAC4: 004842f9  ldr x0, [x0, #0x490]
0x0626EAC8: d4473c97  bl #0x3180a18
0x0626EACC: c0a30090  adrp x0, #0x76e6000
0x0626EAD0: 004c42f9  ldr x0, [x0, #0x498]
0x0626EAD4: d1473c97  bl #0x3180a18
0x0626EAD8: c0a30090  adrp x0, #0x76e6000
0x0626EADC: 005042f9  ldr x0, [x0, #0x4a0]
0x0626EAE0: ce473c97  bl #0x3180a18
0x0626EAE4: 28008052  movz w8, #0x1
0x0626EAE8: c8521039  strb w8, [x22, #0x414]
0x0626EAEC: f40e00b4  cbz x20, #0x626ecc8
0x0626EAF0: 68a00090  adrp x8, #0x767a000
0x0626EAF4: 08ad44f9  ldr x8, [x8, #0x958]
0x0626EAF8: e00314aa  mov x0, x20
0x0626EAFC: 010140f9  ldr x1, [x8]
0x0626EB00: a1c86697  bl #0x3c20d84
0x0626EB04: a00800b4  cbz x0, #0x626ec18
0x0626EB08: f60300aa  mov x22, x0
0x0626EB0C: 28008052  movz w8, #0x1
0x0626EB10: 08e40039  strb w8, [x0, #0x39]
0x0626EB14: b30d00b4  cbz x19, #0x626ecc8
0x0626EB18: 6012c03d  ldr q0, [x19, #0x40]
0x0626EB1C: c08e44f8  ldr x0, [x22, #0x48]!
0x0626EB20: 0040006e  ext v0.16b, v0.16b, v0.16b, #8
0x0626EB24: c0829d3c  stur q0, [x22, #-0x28]
0x0626EB28: 682e40f9  ldr x8, [x19, #0x58]
0x0626EB2C: c8821ef8  stur x8, [x22, #-0x18]
0x0626EB30: c00100b5  cbnz x0, #0x626eb68
0x0626EB34: 88a00090  adrp x8, #0x767e000
0x0626EB38: 08f942f9  ldr x8, [x8, #0x5f0]
0x0626EB3C: 000140f9  ldr x0, [x8]
0x0626EB40: 58483c97  bl #0x3180ca0
0x0626EB44: e1031faa  mov x1, xzr
0x0626EB48: f70300aa  mov x23, x0
0x0626EB4C: 663d1a94  bl #0x68fe0e4
0x0626EB50: e00316aa  mov x0, x22
0x0626EB54: e10317aa  mov x1, x23
0x0626EB58: d70200f9  str x23, [x22]
0x0626EB5C: 9a473c97  bl #0x31809c4
0x0626EB60: c00240f9  ldr x0, [x22]
0x0626EB64: 200b00b4  cbz x0, #0x626ecc8
0x0626EB68: 612a40f9  ldr x1, [x19, #0x50]
0x0626EB6C: d6a30090  adrp x22, #0x76e6000
0x0626EB70: d64642f9  ldr x22, [x22, #0x488]
0x0626EB74: 018c02f8  str x1, [x0, #0x28]!
0x0626EB78: 93473c97  bl #0x31809c4
0x0626EB7C: 772240f9  ldr x23, [x19, #0x40]
0x0626EB80: e00315aa  mov x0, x21
0x0626EB84: 22feff97  bl #0x626e40c
0x0626EB88: ff0200eb  cmp x23, x0
0x0626EB8C: e803679e  fmov d8, xzr
0x0626EB90: ad010054  b.le #0x626ebc4
0x0626EB94: 772240f9  ldr x23, [x19, #0x40]
0x0626EB98: e00315aa  mov x0, x21
0x0626EB9C: 1cfeff97  bl #0x626e40c
0x0626EBA0: e9f99ed2  movz x9, #0xf7cf
0x0626EBA4: 696abcf2  movk x9, #0xe353, lsl #16
0x0626EBA8: a974d3f2  movk x9, #0x9ba5, lsl #32
0x0626EBAC: e80200cb  sub x8, x23, x0
0x0626EBB0: 8918e4f2  movk x9, #0x20c4, lsl #48
0x0626EBB4: 087d499b  smulh x8, x8, x9
0x0626EBB8: 09fd4793  asr x9, x8, #7
0x0626EBBC: 28fd488b  add x8, x9, x8, lsr #63
0x0626EBC0: 0801629e  scvtf d8, x8
0x0626EBC4: c00240f9  ldr x0, [x22]
0x0626EBC8: 36483c97  bl #0x3180ca0
0x0626EBCC: e1031faa  mov x1, xzr
0x0626EBD0: f50300aa  mov x21, x0
0x0626EBD4: 448bf697  bl #0x60118e4
0x0626EBD8: 950700b4  cbz x21, #0x626ecc8
0x0626EBDC: 602640fd  ldr d0, [x19, #0x48]
0x0626EBE0: c8a30090  adrp x8, #0x76e6000
0x0626EBE4: 084142f9  ldr x8, [x8, #0x480]
0x0626EBE8: e00314aa  mov x0, x20
0x0626EBEC: 00d8615e  scvtf d0, d0
0x0626EBF0: a00e00fd  str d0, [x21, #0x18]
0x0626EBF4: 020140f9  ldr x2, [x8]
0x0626EBF8: e10315aa  mov x1, x21
0x0626EBFC: dbcb6697  bl #0x3c21b68
0x0626EC00: 400600b4  cbz x0, #0x626ecc8
0x0626EC04: 28008052  movz w8, #0x1
0x0626EC08: 081400fd  str d8, [x0, #0x28]
0x0626EC0C: 08000139  strb w8, [x0, #0x40]
0x0626EC10: 08c40039  strb w8, [x0, #0x31]
0x0626EC14: 27000014  b #0x626ecb0
0x0626EC18: 930500b4  cbz x19, #0x626ecc8
0x0626EC1C: c8a30090  adrp x8, #0x76e6000
0x0626EC20: 610a40f9  ldr x1, [x19, #0x10]
0x0626EC24: 084942f9  ldr x8, [x8, #0x490]
0x0626EC28: e2031faa  mov x2, xzr
0x0626EC2C: 000140f9  ldr x0, [x8]
0x0626EC30: dceec997  bl #0x54ea7a0
0x0626EC34: 48a000f0  adrp x8, #0x7679000
0x0626EC38: 087944f9  ldr x8, [x8, #0x8f0]
0x0626EC3C: f30300aa  mov x19, x0
0x0626EC40: 09008092  movn x9, #0
0x0626EC44: 6a0a8052  movz w10, #0x53
0x0626EC48: 080140f9  ldr x8, [x8]
0x0626EC4C: e0230091  add x0, sp, #8
0x0626EC50: e1031faa  mov x1, xzr
0x0626EC54: ea1b00b9  str w10, [sp, #0x18]
0x0626EC58: e8a700a9  stp x8, x9, [sp, #8]
0x0626EC5C: a27ad197  bl #0x56cd6e4
0x0626EC60: e89f00f0  adrp x8, #0x766d000
0x0626EC64: 086d46f9  ldr x8, [x8, #0xcd8]
0x0626EC68: f40300aa  mov x20, x0
0x0626EC6C: 080140f9  ldr x8, [x8]
0x0626EC70: 09e140b9  ldr w9, [x8, #0xe0]
0x0626EC74: 69000035  cbnz w9, #0x626ec80
0x0626EC78: e00308aa  mov x0, x8
0x0626EC7C: c4473c97  bl #0x3180b8c
0x0626EC80: c8a30090  adrp x8, #0x76e6000
0x0626EC84: c9a30090  adrp x9, #0x76e6000
0x0626EC88: 085142f9  ldr x8, [x8, #0x4a0]
0x0626EC8C: 294d42f9  ldr x9, [x9, #0x498]
0x0626EC90: e00313aa  mov x0, x19
0x0626EC94: e10314aa  mov x1, x20
0x0626EC98: 030140f9  ldr x3, [x8]
0x0626EC9C: 240140f9  ldr x4, [x9]
0x0626ECA0: e2031faa  mov x2, xzr
0x0626ECA4: e5031faa  mov x5, xzr
0x0626ECA8: e6031faa  mov x6, xzr
0x0626ECAC: e2f5c797  bl #0x546c434
0x0626ECB0: f44f45a9  ldp x20, x19, [sp, #0x50]
0x0626ECB4: f65744a9  ldp x22, x21, [sp, #0x40]
0x0626ECB8: fe5f43a9  ldp x30, x23, [sp, #0x30]
0x0626ECBC: e81340fd  ldr d8, [sp, #0x20]
0x0626ECC0: ff830191  add sp, sp, #0x60
0x0626ECC4: c0035fd6  ret
0x0626ECC8: f9473c97  bl #0x3180cac

; RVA 0x626E98C | private void CalculateBubbleTimeLeft(SerializedLockedComponent lockedComponent) { }
; bytes=96 sha256=0235a1d4e3af69ba3138a7a73d44bfd5244b0bead6d51789b54e7a8e6b049f8c status=arm64_complete_bound indexed_start=True
0x0626E98C: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0626E990: f44f01a9  stp x20, x19, [sp, #0x10]
0x0626E994: 610200b4  cbz x1, #0x626e9e0
0x0626E998: 28484039  ldrb w8, [x1, #0x12]
0x0626E99C: f30301aa  mov x19, x1
0x0626E9A0: 3f1000f9  str xzr, [x1, #0x20]
0x0626E9A4: e8010034  cbz w8, #0x626e9e0
0x0626E9A8: 750e40f9  ldr x21, [x19, #0x18]
0x0626E9AC: f40300aa  mov x20, x0
0x0626E9B0: 97feff97  bl #0x626e40c
0x0626E9B4: bf0200eb  cmp x21, x0
0x0626E9B8: 4d010054  b.le #0x626e9e0
0x0626E9BC: 750e40f9  ldr x21, [x19, #0x18]
0x0626E9C0: e00314aa  mov x0, x20
0x0626E9C4: 92feff97  bl #0x626e40c
0x0626E9C8: 88a0fdd0  adrp x8, #0x1680000
0x0626E9CC: 007943fd  ldr d0, [x8, #0x6f0]
0x0626E9D0: a80200cb  sub x8, x21, x0
0x0626E9D4: 0101629e  scvtf d1, x8
0x0626E9D8: 2018601e  fdiv d0, d1, d0
0x0626E9DC: 601200fd  str d0, [x19, #0x20]
0x0626E9E0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0626E9E4: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0626E9E8: c0035fd6  ret

; RVA 0x626E9EC | private void CalculateUnlockTimeLeft(SerializedTimeLockComponent timeLockComponent) { }
; bytes=96 sha256=a829fe917ee1d49bb3f90713ca1625e6c49617a5bf610f28815c26f4ce319368 status=arm64_complete_bound indexed_start=True
0x0626E9EC: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0626E9F0: f44f01a9  stp x20, x19, [sp, #0x10]
0x0626E9F4: 610200b4  cbz x1, #0x626ea40
0x0626E9F8: 28604039  ldrb w8, [x1, #0x18]
0x0626E9FC: f30301aa  mov x19, x1
0x0626EA00: 08020034  cbz w8, #0x626ea40
0x0626EA04: 751240f9  ldr x21, [x19, #0x20]
0x0626EA08: f40300aa  mov x20, x0
0x0626EA0C: 7f0a00f9  str xzr, [x19, #0x10]
0x0626EA10: 7ffeff97  bl #0x626e40c
0x0626EA14: bf0200eb  cmp x21, x0
0x0626EA18: 4d010054  b.le #0x626ea40
0x0626EA1C: 751240f9  ldr x21, [x19, #0x20]
0x0626EA20: e00314aa  mov x0, x20
0x0626EA24: 7afeff97  bl #0x626e40c
0x0626EA28: 88a0fdd0  adrp x8, #0x1680000
0x0626EA2C: 007943fd  ldr d0, [x8, #0x6f0]
0x0626EA30: a80200cb  sub x8, x21, x0
0x0626EA34: 0101629e  scvtf d1, x8
0x0626EA38: 2018601e  fdiv d0, d1, d0
0x0626EA3C: 600a00fd  str d0, [x19, #0x10]
0x0626EA40: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0626EA44: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0626EA48: c0035fd6  ret

; RVA 0x626E8E8 | private void CalculateCyclesDelay(SerializedItemSpawningComponent itemSpawningComponent) { }
; bytes=164 sha256=d6defb98444c3f064a7c860ed67e439b12944ce97b000bda55718be0ff534ee5 status=arm64_complete_bound indexed_start=True
0x0626E8E8: fe0f1df8  str x30, [sp, #-0x30]!
0x0626E8EC: f65701a9  stp x22, x21, [sp, #0x10]
0x0626E8F0: f44f02a9  stp x20, x19, [sp, #0x20]
0x0626E8F4: 410400b4  cbz x1, #0x626e97c
0x0626E8F8: 350840f9  ldr x21, [x1, #0x10]
0x0626E8FC: f30301aa  mov x19, x1
0x0626E900: f40300aa  mov x20, x0
0x0626E904: 750000b5  cbnz x21, #0x626e910
0x0626E908: 680e40f9  ldr x8, [x19, #0x18]
0x0626E90C: 880300b4  cbz x8, #0x626e97c
0x0626E910: e00314aa  mov x0, x20
0x0626E914: 7f7e02a9  stp xzr, xzr, [x19, #0x20]
0x0626E918: bdfeff97  bl #0x626e40c
0x0626E91C: bf0200eb  cmp x21, x0
0x0626E920: 95a0fdd0  adrp x21, #0x1680000
0x0626E924: 2d010054  b.le #0x626e948
0x0626E928: 760a40f9  ldr x22, [x19, #0x10]
0x0626E92C: e00314aa  mov x0, x20
0x0626E930: b7feff97  bl #0x626e40c
0x0626E934: a07a43fd  ldr d0, [x21, #0x6f0]
0x0626E938: c80200cb  sub x8, x22, x0
0x0626E93C: 0101629e  scvtf d1, x8
0x0626E940: 2018601e  fdiv d0, d1, d0
0x0626E944: 601200fd  str d0, [x19, #0x20]
0x0626E948: 760e40f9  ldr x22, [x19, #0x18]
0x0626E94C: e00314aa  mov x0, x20
0x0626E950: affeff97  bl #0x626e40c
0x0626E954: df0200eb  cmp x22, x0
0x0626E958: 2d010054  b.le #0x626e97c
0x0626E95C: 760e40f9  ldr x22, [x19, #0x18]
0x0626E960: e00314aa  mov x0, x20
0x0626E964: aafeff97  bl #0x626e40c
0x0626E968: a07a43fd  ldr d0, [x21, #0x6f0]
0x0626E96C: c80200cb  sub x8, x22, x0
0x0626E970: 0101629e  scvtf d1, x8
0x0626E974: 2018601e  fdiv d0, d1, d0
0x0626E978: 601600fd  str d0, [x19, #0x28]
0x0626E97C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0626E980: f65741a9  ldp x22, x21, [sp, #0x10]
0x0626E984: fe0743f8  ldr x30, [sp], #0x30
0x0626E988: c0035fd6  ret

; RVA 0x626ECCC | public void .ctor() { }
; bytes=8 sha256=e362ad5d50c1110d95da12696638b214a87a1b247186f26bd9b8aa543d21689f status=arm64_complete_bound indexed_start=True
0x0626ECCC: e1031faa  mov x1, xzr
0x0626ECD0: bd6a1914  b #0x68c97c4

; Generic instantiation from Il2CppDumper script.json | RVA 0x3CE8960 | MergeEngine.ECS.ItemsEntityService$$TryLoadComponent<object, object>
; native signature: bool MergeEngine_ECS_ItemsEntityService__TryLoadComponent_object__object_ (MergeEngine_ECS_ItemsEntityService_o* __this, Il2CppObject* component, Il2CppObject* payload, const MethodInfo_3CE8960* method);
; bytes=192 sha256=b7a554b1018a873eb729631324a9d5b1f95eaed7f2a82a2de0d19258a554d780 status=arm64_complete_bound indexed_start=True
0x03CE8960: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x03CE8964: f44f01a9  stp x20, x19, [sp, #0x10]
0x03CE8968: 681c40f9  ldr x8, [x3, #0x38]
0x03CE896C: f50303aa  mov x21, x3
0x03CE8970: f30302aa  mov x19, x2
0x03CE8974: f40301aa  mov x20, x1
0x03CE8978: 680000b5  cbnz x8, #0x3ce8984
0x03CE897C: e00315aa  mov x0, x21
0x03CE8980: beb7d197  bl #0x3156878
0x03CE8984: f40300b4  cbz x20, #0x3ce8a00
0x03CE8988: d30300b4  cbz x19, #0x3ce8a00
0x03CE898C: a81e40f9  ldr x8, [x21, #0x38]
0x03CE8990: 010940f9  ldr x1, [x8, #0x10]
0x03CE8994: 28d44439  ldrb w8, [x1, #0x135]
0x03CE8998: 88000037  tbnz w8, #0, #0x3ce89a8
0x03CE899C: e00301aa  mov x0, x1
0x03CE89A0: 9fb7d197  bl #0x315681c
0x03CE89A4: e10300aa  mov x1, x0
0x03CE89A8: 880240f9  ldr x8, [x20]
0x03CE89AC: 095d4279  ldrh w9, [x8, #0x12e]
0x03CE89B0: 290100b4  cbz x9, #0x3ce89d4
0x03CE89B4: 0a5940f9  ldr x10, [x8, #0xb0]
0x03CE89B8: 4a210091  add x10, x10, #8
0x03CE89BC: 4b815ff8  ldur x11, [x10, #-8]
0x03CE89C0: 7f0101eb  cmp x11, x1
0x03CE89C4: 00010054  b.eq #0x3ce89e4
0x03CE89C8: 290500f1  subs x9, x9, #1
0x03CE89CC: 4a410091  add x10, x10, #0x10
0x03CE89D0: 61ffff54  b.ne #0x3ce89bc
0x03CE89D4: e00314aa  mov x0, x20
0x03CE89D8: e2031f2a  mov w2, wzr
0x03CE89DC: 4db8d197  bl #0x3156b10
0x03CE89E0: 04000014  b #0x3ce89f0
0x03CE89E4: 490180b9  ldrsw x9, [x10]
0x03CE89E8: 0811098b  add x8, x8, x9, lsl #4
0x03CE89EC: 00e10491  add x0, x8, #0x138
0x03CE89F0: 080840a9  ldp x8, x2, [x0]
0x03CE89F4: e00314aa  mov x0, x20
0x03CE89F8: e10313aa  mov x1, x19
0x03CE89FC: 00013fd6  blr x8
0x03CE8A00: 7f0200f1  cmp x19, #0
0x03CE8A04: e8079f1a  cset w8, ne
0x03CE8A08: 9f0200f1  cmp x20, #0
0x03CE8A0C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03CE8A10: e9079f1a  cset w9, ne
0x03CE8A14: 2001080a  and w0, w9, w8
0x03CE8A18: fe57c2a8  ldp x30, x21, [sp], #0x20
0x03CE8A1C: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3CE8A20 | MergeEngine.ECS.ItemsEntityService$$TryLoadComponent<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>
; native signature: bool MergeEngine_ECS_ItemsEntityService__TryLoadComponent___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_ (MergeEngine_ECS_ItemsEntityService_o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o component, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o payload, const MethodInfo_3CE8A20* method);
; bytes=476 sha256=c13f1e877b359b710febef03f8115c19b208e07cf699a9e0e4625fccad2229bf status=arm64_complete_bound indexed_start=True
0x03CE8A20: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x03CE8A24: fc6f01a9  stp x28, x27, [sp, #0x10]
0x03CE8A28: fa6702a9  stp x26, x25, [sp, #0x20]
0x03CE8A2C: f85f03a9  stp x24, x23, [sp, #0x30]
0x03CE8A30: f65704a9  stp x22, x21, [sp, #0x40]
0x03CE8A34: f44f05a9  stp x20, x19, [sp, #0x50]
0x03CE8A38: fd030091  mov x29, sp
0x03CE8A3C: ff8300d1  sub sp, sp, #0x20
0x03CE8A40: 5bd03bd5  mrs x27, tpidr_el0
0x03CE8A44: 681740f9  ldr x8, [x27, #0x28]
0x03CE8A48: f40303aa  mov x20, x3
0x03CE8A4C: f60302aa  mov x22, x2
0x03CE8A50: f30301aa  mov x19, x1
0x03CE8A54: a8831ff8  stur x8, [x29, #-8]
0x03CE8A58: a2073ea9  stp x2, x1, [x29, #-0x20]
0x03CE8A5C: 7c1c40f9  ldr x28, [x3, #0x38]
0x03CE8A60: 9c0000b5  cbnz x28, #0x3ce8a70
0x03CE8A64: e00314aa  mov x0, x20
0x03CE8A68: 84b7d197  bl #0x3156878
0x03CE8A6C: 9c1e40f9  ldr x28, [x20, #0x38]
0x03CE8A70: 802340a9  ldp x0, x8, [x28]
0x03CE8A74: 19fc40b9  ldr w25, [x0, #0xfc]
0x03CE8A78: 09d44439  ldrb w9, [x0, #0x135]
0x03CE8A7C: 18fd40b9  ldr w24, [x8, #0xfc]
0x03CE8A80: c9000037  tbnz w9, #0, #0x3ce8a98
0x03CE8A84: 66b7d197  bl #0x315681c
0x03CE8A88: 9c1e40f9  ldr x28, [x20, #0x38]
0x03CE8A8C: 08fc40b9  ldr w8, [x0, #0xfc]
0x03CE8A90: 800340f9  ldr x0, [x28]
0x03CE8A94: 02000014  b #0x3ce8a9c
0x03CE8A98: e803192a  mov w8, w25
0x03CE8A9C: 08410011  add w8, w8, #0x10
0x03CE8AA0: 083d0091  add x8, x8, #0xf
0x03CE8AA4: e9030091  mov x9, sp
0x03CE8AA8: 08717c92  and x8, x8, #0x1fffffff0
0x03CE8AAC: 350108cb  sub x21, x9, x8
0x03CE8AB0: bf020091  mov sp, x21
0x03CE8AB4: 293f0091  add x9, x25, #0xf
0x03CE8AB8: e8030091  mov x8, sp
0x03CE8ABC: 29717c92  and x9, x9, #0x1fffffff0
0x03CE8AC0: 1a0109cb  sub x26, x8, x9
0x03CE8AC4: 5f030091  mov sp, x26
0x03CE8AC8: 093f0091  add x9, x24, #0xf
0x03CE8ACC: e8030091  mov x8, sp
0x03CE8AD0: 29717c92  and x9, x9, #0x1fffffff0
0x03CE8AD4: 170109cb  sub x23, x8, x9
0x03CE8AD8: ff020091  mov sp, x23
0x03CE8ADC: 082840b9  ldr w8, [x0, #0x28]
0x03CE8AE0: e0031aaa  mov x0, x26
0x03CE8AE4: e20319aa  mov x2, x25
0x03CE8AE8: 1f010071  cmp w8, #0
0x03CE8AEC: a86300d1  sub x8, x29, #0x18
0x03CE8AF0: 61b2889a  csel x1, x19, x8, lt
0x03CE8AF4: 9f97d394  bl #0x71ce970
0x03CE8AF8: 800340f9  ldr x0, [x28]
0x03CE8AFC: e1031aaa  mov x1, x26
0x03CE8B00: 5960d297  bl #0x3180c64
0x03CE8B04: e0030036  tbz w0, #0, #0x3ce8b80
0x03CE8B08: 991e40f9  ldr x25, [x20, #0x38]
0x03CE8B0C: ba8300d1  sub x26, x29, #0x20
0x03CE8B10: e00317aa  mov x0, x23
0x03CE8B14: e20318aa  mov x2, x24
0x03CE8B18: 280740f9  ldr x8, [x25, #8]
0x03CE8B1C: 082940b9  ldr w8, [x8, #0x28]
0x03CE8B20: 1f010071  cmp w8, #0
0x03CE8B24: c1b29a9a  csel x1, x22, x26, lt
0x03CE8B28: 9297d394  bl #0x71ce970
0x03CE8B2C: 200740f9  ldr x0, [x25, #8]
0x03CE8B30: e10317aa  mov x1, x23
0x03CE8B34: 4c60d297  bl #0x3180c64
0x03CE8B38: 40020036  tbz w0, #0, #0x3ce8b80
0x03CE8B3C: 991e40f9  ldr x25, [x20, #0x38]
0x03CE8B40: e00317aa  mov x0, x23
0x03CE8B44: e20318aa  mov x2, x24
0x03CE8B48: 280740f9  ldr x8, [x25, #8]
0x03CE8B4C: 082940b9  ldr w8, [x8, #0x28]
0x03CE8B50: 1f010071  cmp w8, #0
0x03CE8B54: c1b29a9a  csel x1, x22, x26, lt
0x03CE8B58: 8697d394  bl #0x71ce970
0x03CE8B5C: 280340f9  ldr x8, [x25]
0x03CE8B60: 09d54439  ldrb w9, [x8, #0x135]
0x03CE8B64: 29010037  tbnz w9, #0, #0x3ce8b88
0x03CE8B68: e00308aa  mov x0, x8
0x03CE8B6C: 2cb7d197  bl #0x315681c
0x03CE8B70: 991e40f9  ldr x25, [x20, #0x38]
0x03CE8B74: b3835ef8  ldur x19, [x29, #-0x18]
0x03CE8B78: 280340f9  ldr x8, [x25]
0x03CE8B7C: 04000014  b #0x3ce8b8c
0x03CE8B80: e0031f2a  mov w0, wzr
0x03CE8B84: 11000014  b #0x3ce8bc8
0x03CE8B88: e00308aa  mov x0, x8
0x03CE8B8C: 290740f9  ldr x9, [x25, #8]
0x03CE8B90: 082940b9  ldr w8, [x8, #0x28]
0x03CE8B94: 210f40f9  ldr x1, [x25, #0x18]
0x03CE8B98: 292940b9  ldr w9, [x9, #0x28]
0x03CE8B9C: 1f010071  cmp w8, #0
0x03CE8BA0: a86300d1  sub x8, x29, #0x18
0x03CE8BA4: 63b2889a  csel x3, x19, x8, lt
0x03CE8BA8: 4900f837  tbnz w9, #0x1f, #0x3ce8bb0
0x03CE8BAC: f70240f9  ldr x23, [x23]
0x03CE8BB0: a44300d1  sub x4, x29, #0x10
0x03CE8BB4: e20315aa  mov x2, x21
0x03CE8BB8: e50317aa  mov x5, x23
0x03CE8BBC: b7031ff8  stur x23, [x29, #-0x10]
0x03CE8BC0: 7362d297  bl #0x318158c
0x03CE8BC4: 20008052  movz w0, #0x1
0x03CE8BC8: 681740f9  ldr x8, [x27, #0x28]
0x03CE8BCC: a9835ff8  ldur x9, [x29, #-8]
0x03CE8BD0: 1f0109eb  cmp x8, x9
0x03CE8BD4: 21010054  b.ne #0x3ce8bf8
0x03CE8BD8: bf030091  mov sp, x29
0x03CE8BDC: f44f45a9  ldp x20, x19, [sp, #0x50]
0x03CE8BE0: f65744a9  ldp x22, x21, [sp, #0x40]
0x03CE8BE4: f85f43a9  ldp x24, x23, [sp, #0x30]
0x03CE8BE8: fa6742a9  ldp x26, x25, [sp, #0x20]
0x03CE8BEC: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x03CE8BF0: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x03CE8BF4: c0035fd6  ret
0x03CE8BF8: 6697d394  bl #0x71ce990

