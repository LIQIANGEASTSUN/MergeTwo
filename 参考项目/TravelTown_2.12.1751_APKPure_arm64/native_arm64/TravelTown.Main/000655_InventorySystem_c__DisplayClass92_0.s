; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 655 .InventorySystem.<>c__DisplayClass92_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x62887C4 | public void .ctor() { }
; bytes=8 sha256=92924005cbd2642015360070d136d76f64eb330094dc6e28e0c31d2feca192db status=arm64_complete_bound indexed_start=True
0x062887C4: e1031faa  mov x1, xzr
0x062887C8: 8d47d117  b #0x56da5fc

; RVA 0x628A820 | internal int <SortBackendSlotsToConfig>b__0(ProducerInventoryItem lhs, ProducerInventoryItem rhs) { }
; bytes=376 sha256=64b3f2c60abf3f56e9f039aa7559e9cbdab997f8594697a3acb429411c13a5e8 status=arm64_complete_bound indexed_start=True
0x0628A820: ff4301d1  sub sp, sp, #0x50
0x0628A824: fe6701a9  stp x30, x25, [sp, #0x10]
0x0628A828: f85f02a9  stp x24, x23, [sp, #0x20]
0x0628A82C: f65703a9  stp x22, x21, [sp, #0x30]
0x0628A830: f44f04a9  stp x20, x19, [sp, #0x40]
0x0628A834: d5d400f0  adrp x21, #0x7d25000
0x0628A838: f7a200b0  adrp x23, #0x76e7000
0x0628A83C: a8e65339  ldrb w8, [x21, #0x4f9]
0x0628A840: f79642f9  ldr x23, [x23, #0x528]
0x0628A844: f40302aa  mov x20, x2
0x0628A848: f60301aa  mov x22, x1
0x0628A84C: f30300aa  mov x19, x0
0x0628A850: a8020037  tbnz w8, #0, #0x628a8a4
0x0628A854: e0a200b0  adrp x0, #0x76e7000
0x0628A858: 009842f9  ldr x0, [x0, #0x530]
0x0628A85C: 6fd83b97  bl #0x3180a18
0x0628A860: e0a200b0  adrp x0, #0x76e7000
0x0628A864: 009c42f9  ldr x0, [x0, #0x538]
0x0628A868: 6cd83b97  bl #0x3180a18
0x0628A86C: e0a200b0  adrp x0, #0x76e7000
0x0628A870: 00a042f9  ldr x0, [x0, #0x540]
0x0628A874: 69d83b97  bl #0x3180a18
0x0628A878: e0a200b0  adrp x0, #0x76e7000
0x0628A87C: 00a442f9  ldr x0, [x0, #0x548]
0x0628A880: 66d83b97  bl #0x3180a18
0x0628A884: e0a200b0  adrp x0, #0x76e7000
0x0628A888: 00a842f9  ldr x0, [x0, #0x550]
0x0628A88C: 63d83b97  bl #0x3180a18
0x0628A890: e0a200b0  adrp x0, #0x76e7000
0x0628A894: 009442f9  ldr x0, [x0, #0x528]
0x0628A898: 60d83b97  bl #0x3180a18
0x0628A89C: 28008052  movz w8, #0x1
0x0628A8A0: a8e61339  strb w8, [x21, #0x4f9]
0x0628A8A4: e00240f9  ldr x0, [x23]
0x0628A8A8: fed83b97  bl #0x3180ca0
0x0628A8AC: e1031faa  mov x1, xzr
0x0628A8B0: f50300aa  mov x21, x0
0x0628A8B4: 523fd197  bl #0x56da5fc
0x0628A8B8: f50600b4  cbz x21, #0x628a994
0x0628A8BC: f8a200b0  adrp x24, #0x76e7000
0x0628A8C0: f9a200b0  adrp x25, #0x76e7000
0x0628A8C4: f7a200b0  adrp x23, #0x76e7000
0x0628A8C8: 189f42f9  ldr x24, [x24, #0x538]
0x0628A8CC: 39a742f9  ldr x25, [x25, #0x548]
0x0628A8D0: f79a42f9  ldr x23, [x23, #0x530]
0x0628A8D4: e00315aa  mov x0, x21
0x0628A8D8: 160c01f8  str x22, [x0, #0x10]!
0x0628A8DC: e10316aa  mov x1, x22
0x0628A8E0: 39d83b97  bl #0x31809c4
0x0628A8E4: e00315aa  mov x0, x21
0x0628A8E8: 148c01f8  str x20, [x0, #0x18]!
0x0628A8EC: e10314aa  mov x1, x20
0x0628A8F0: 35d83b97  bl #0x31809c4
0x0628A8F4: 000340f9  ldr x0, [x24]
0x0628A8F8: 740a40f9  ldr x20, [x19, #0x10]
0x0628A8FC: e9d83b97  bl #0x3180ca0
0x0628A900: 220340f9  ldr x2, [x25]
0x0628A904: e10315aa  mov x1, x21
0x0628A908: e3031faa  mov x3, xzr
0x0628A90C: f60300aa  mov x22, x0
0x0628A910: ab2dbf97  bl #0x5255fbc
0x0628A914: e20240f9  ldr x2, [x23]
0x0628A918: e00314aa  mov x0, x20
0x0628A91C: e10316aa  mov x1, x22
0x0628A920: 0be06697  bl #0x3c4294c
0x0628A924: 800300b4  cbz x0, #0x628a994
0x0628A928: 081840b9  ldr w8, [x0, #0x18]
0x0628A92C: 000340f9  ldr x0, [x24]
0x0628A930: f4a200b0  adrp x20, #0x76e7000
0x0628A934: e80f00b9  str w8, [sp, #0xc]
0x0628A938: 730a40f9  ldr x19, [x19, #0x10]
0x0628A93C: 94aa42f9  ldr x20, [x20, #0x550]
0x0628A940: d8d83b97  bl #0x3180ca0
0x0628A944: 820240f9  ldr x2, [x20]
0x0628A948: e10315aa  mov x1, x21
0x0628A94C: e3031faa  mov x3, xzr
0x0628A950: f40300aa  mov x20, x0
0x0628A954: 9a2dbf97  bl #0x5255fbc
0x0628A958: e20240f9  ldr x2, [x23]
0x0628A95C: e00313aa  mov x0, x19
0x0628A960: e10314aa  mov x1, x20
0x0628A964: fadf6697  bl #0x3c4294c
0x0628A968: 600100b4  cbz x0, #0x628a994
0x0628A96C: 011840b9  ldr w1, [x0, #0x18]
0x0628A970: e0330091  add x0, sp, #0xc
0x0628A974: e2031faa  mov x2, xzr
0x0628A978: 4a24d097  bl #0x5693aa0
0x0628A97C: f44f44a9  ldp x20, x19, [sp, #0x40]
0x0628A980: f65743a9  ldp x22, x21, [sp, #0x30]
0x0628A984: f85f42a9  ldp x24, x23, [sp, #0x20]
0x0628A988: fe6741a9  ldp x30, x25, [sp, #0x10]
0x0628A98C: ff430191  add sp, sp, #0x50
0x0628A990: c0035fd6  ret
0x0628A994: c6d83b97  bl #0x3180cac

