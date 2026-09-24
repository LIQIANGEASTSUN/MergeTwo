; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 529 MergeEngine.Model.Configuration.DynamicMergeItemConfigurationModel
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x613B558 | public void AddDynamicMergeItem(string id, IMergeItem mergeItem) { }
; bytes=104 sha256=7ac874520cd8d05a539dfffc4188e7f07a7aff81d6fc6f797bfceb0da70fe699 status=arm64_complete_bound indexed_start=True
0x0613B558: fe0f1df8  str x30, [sp, #-0x30]!
0x0613B55C: f65701a9  stp x22, x21, [sp, #0x10]
0x0613B560: f44f02a9  stp x20, x19, [sp, #0x20]
0x0613B564: 56df00b0  adrp x22, #0x7d24000
0x0613B568: c8325639  ldrb w8, [x22, #0x58c]
0x0613B56C: f30302aa  mov x19, x2
0x0613B570: f40301aa  mov x20, x1
0x0613B574: f50300aa  mov x21, x0
0x0613B578: c8000037  tbnz w8, #0, #0x613b590
0x0613B57C: 00ad0090  adrp x0, #0x76db000
0x0613B580: 009c40f9  ldr x0, [x0, #0x138]
0x0613B584: 25154197  bl #0x3180a18
0x0613B588: 28008052  movz w8, #0x1
0x0613B58C: c8321639  strb w8, [x22, #0x58c]
0x0613B590: a01640f9  ldr x0, [x21, #0x28]
0x0613B594: 400100b4  cbz x0, #0x613b5bc
0x0613B598: 08ad0090  adrp x8, #0x76db000
0x0613B59C: 089d40f9  ldr x8, [x8, #0x138]
0x0613B5A0: e10314aa  mov x1, x20
0x0613B5A4: e20313aa  mov x2, x19
0x0613B5A8: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0613B5AC: 030140f9  ldr x3, [x8]
0x0613B5B0: f65741a9  ldp x22, x21, [sp, #0x10]
0x0613B5B4: fe0743f8  ldr x30, [sp], #0x30
0x0613B5B8: ec9db617  b #0x4ee2d68
0x0613B5BC: bc154197  bl #0x3180cac

; RVA 0x613B5C0 | public IMergeItem GetDynamicMergeItem(string id) { }
; bytes=144 sha256=4c0aab9ffaf354e6fca3a714b5705bf61d08e596de4cc29c5daef7b02c0655e1 status=arm64_complete_bound indexed_start=True
0x0613B5C0: ffc300d1  sub sp, sp, #0x30
0x0613B5C4: fe5701a9  stp x30, x21, [sp, #0x10]
0x0613B5C8: f44f02a9  stp x20, x19, [sp, #0x20]
0x0613B5CC: 55df00b0  adrp x21, #0x7d24000
0x0613B5D0: a8365639  ldrb w8, [x21, #0x58d]
0x0613B5D4: f30301aa  mov x19, x1
0x0613B5D8: f40300aa  mov x20, x0
0x0613B5DC: c8000037  tbnz w8, #0, #0x613b5f4
0x0613B5E0: 00ad0090  adrp x0, #0x76db000
0x0613B5E4: 00a040f9  ldr x0, [x0, #0x140]
0x0613B5E8: 0c154197  bl #0x3180a18
0x0613B5EC: 28008052  movz w8, #0x1
0x0613B5F0: a8361639  strb w8, [x21, #0x58d]
0x0613B5F4: e00313aa  mov x0, x19
0x0613B5F8: e1031faa  mov x1, xzr
0x0613B5FC: ff0700f9  str xzr, [sp, #8]
0x0613B600: 2bf1ce97  bl #0x54f7aac
0x0613B604: e803002a  mov w8, w0
0x0613B608: e0031faa  mov x0, xzr
0x0613B60C: 88010037  tbnz w8, #0, #0x613b63c
0x0613B610: 801640f9  ldr x0, [x20, #0x28]
0x0613B614: c00100b4  cbz x0, #0x613b64c
0x0613B618: 08ad0090  adrp x8, #0x76db000
0x0613B61C: 08a140f9  ldr x8, [x8, #0x140]
0x0613B620: e2230091  add x2, sp, #8
0x0613B624: e10313aa  mov x1, x19
0x0613B628: 030140f9  ldr x3, [x8]
0x0613B62C: a1a4b697  bl #0x4ee48b0
0x0613B630: e80740f9  ldr x8, [sp, #8]
0x0613B634: 1f000072  tst w0, #1
0x0613B638: 00119f9a  csel x0, x8, xzr, ne
0x0613B63C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0613B640: fe5741a9  ldp x30, x21, [sp, #0x10]
0x0613B644: ffc30091  add sp, sp, #0x30
0x0613B648: c0035fd6  ret
0x0613B64C: 98154197  bl #0x3180cac

; RVA 0x613B650 | public IMergeItem GetDynamicMergeItemFromComponent(IComponentBase component) { }
; bytes=308 sha256=c93b30e4bf34726f07d96f9435ce00757809d151f8fb5f7f450b229b225618a9 status=arm64_complete_bound indexed_start=True
0x0613B650: ffc300d1  sub sp, sp, #0x30
0x0613B654: fe5701a9  stp x30, x21, [sp, #0x10]
0x0613B658: f44f02a9  stp x20, x19, [sp, #0x20]
0x0613B65C: 55df00b0  adrp x21, #0x7d24000
0x0613B660: a83a5639  ldrb w8, [x21, #0x58e]
0x0613B664: f40301aa  mov x20, x1
0x0613B668: f30300aa  mov x19, x0
0x0613B66C: 28010037  tbnz w8, #0, #0x613b690
0x0613B670: 00ad0090  adrp x0, #0x76db000
0x0613B674: 00a040f9  ldr x0, [x0, #0x140]
0x0613B678: e8144197  bl #0x3180a18
0x0613B67C: 00ad0090  adrp x0, #0x76db000
0x0613B680: 00a440f9  ldr x0, [x0, #0x148]
0x0613B684: e5144197  bl #0x3180a18
0x0613B688: 28008052  movz w8, #0x1
0x0613B68C: a83a1639  strb w8, [x21, #0x58e]
0x0613B690: ff0700f9  str xzr, [sp, #8]
0x0613B694: 740700b4  cbz x20, #0x613b780
0x0613B698: 09ad0090  adrp x9, #0x76db000
0x0613B69C: 29a540f9  ldr x9, [x9, #0x148]
0x0613B6A0: 880240f9  ldr x8, [x20]
0x0613B6A4: 350140f9  ldr x21, [x9]
0x0613B6A8: 095d4279  ldrh w9, [x8, #0x12e]
0x0613B6AC: a11240f9  ldr x1, [x21, #0x20]
0x0613B6B0: a2a24079  ldrh w2, [x21, #0x50]
0x0613B6B4: 290100b4  cbz x9, #0x613b6d8
0x0613B6B8: 0a5940f9  ldr x10, [x8, #0xb0]
0x0613B6BC: 4a210091  add x10, x10, #8
0x0613B6C0: 4b815ff8  ldur x11, [x10, #-8]
0x0613B6C4: 7f0101eb  cmp x11, x1
0x0613B6C8: e0000054  b.eq #0x613b6e4
0x0613B6CC: 290500f1  subs x9, x9, #1
0x0613B6D0: 4a410091  add x10, x10, #0x10
0x0613B6D4: 61ffff54  b.ne #0x613b6c0
0x0613B6D8: e00314aa  mov x0, x20
0x0613B6DC: 0d6d4097  bl #0x3156b10
0x0613B6E0: 05000014  b #0x613b6f4
0x0613B6E4: 490140b9  ldr w9, [x10]
0x0613B6E8: 2901020b  add w9, w9, w2
0x0613B6EC: 08d1298b  add x8, x8, w9, sxtw #4
0x0613B6F0: 00e10491  add x0, x8, #0x138
0x0613B6F4: 000440f9  ldr x0, [x0, #8]
0x0613B6F8: e10315aa  mov x1, x21
0x0613B6FC: 23154197  bl #0x3180b88
0x0613B700: 080440f9  ldr x8, [x0, #8]
0x0613B704: e10300aa  mov x1, x0
0x0613B708: e00314aa  mov x0, x20
0x0613B70C: 00013fd6  blr x8
0x0613B710: 000300b4  cbz x0, #0x613b770
0x0613B714: e1031faa  mov x1, xzr
0x0613B718: f40300aa  mov x20, x0
0x0613B71C: 4f021f94  bl #0x68fc058
0x0613B720: e1031faa  mov x1, xzr
0x0613B724: e2f0ce97  bl #0x54f7aac
0x0613B728: e803002a  mov w8, w0
0x0613B72C: e0031faa  mov x0, xzr
0x0613B730: 08020037  tbnz w8, #0, #0x613b770
0x0613B734: 731640f9  ldr x19, [x19, #0x28]
0x0613B738: e00314aa  mov x0, x20
0x0613B73C: e1031faa  mov x1, xzr
0x0613B740: 46021f94  bl #0x68fc058
0x0613B744: f30100b4  cbz x19, #0x613b780
0x0613B748: 08ad0090  adrp x8, #0x76db000
0x0613B74C: 08a140f9  ldr x8, [x8, #0x140]
0x0613B750: e10300aa  mov x1, x0
0x0613B754: e2230091  add x2, sp, #8
0x0613B758: e00313aa  mov x0, x19
0x0613B75C: 030140f9  ldr x3, [x8]
0x0613B760: 54a4b697  bl #0x4ee48b0
0x0613B764: e80740f9  ldr x8, [sp, #8]
0x0613B768: 1f000072  tst w0, #1
0x0613B76C: 00119f9a  csel x0, x8, xzr, ne
0x0613B770: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0613B774: fe5741a9  ldp x30, x21, [sp, #0x10]
0x0613B778: ffc30091  add sp, sp, #0x30
0x0613B77C: c0035fd6  ret
0x0613B780: 4b154197  bl #0x3180cac

; RVA 0x613B784 | public IMergeItem GetDynamicMergeItemWithItemId(string itemId) { }
; bytes=304 sha256=b24d7d4dba6527e5cc2fc8fa5953626f9a91689e7e442e728114b52fff0eed81 status=arm64_complete_bound indexed_start=True
0x0613B784: fe0f1df8  str x30, [sp, #-0x30]!
0x0613B788: f65701a9  stp x22, x21, [sp, #0x10]
0x0613B78C: f44f02a9  stp x20, x19, [sp, #0x20]
0x0613B790: 55df00b0  adrp x21, #0x7d24000
0x0613B794: 16ad0090  adrp x22, #0x76db000
0x0613B798: a83e5639  ldrb w8, [x21, #0x58f]
0x0613B79C: d6aa40f9  ldr x22, [x22, #0x150]
0x0613B7A0: f40301aa  mov x20, x1
0x0613B7A4: f30300aa  mov x19, x0
0x0613B7A8: 48020037  tbnz w8, #0, #0x613b7f0
0x0613B7AC: 00ad0090  adrp x0, #0x76db000
0x0613B7B0: 00ac40f9  ldr x0, [x0, #0x158]
0x0613B7B4: 99144197  bl #0x3180a18
0x0613B7B8: 00ad0090  adrp x0, #0x76db000
0x0613B7BC: 00b040f9  ldr x0, [x0, #0x160]
0x0613B7C0: 96144197  bl #0x3180a18
0x0613B7C4: 20aa00b0  adrp x0, #0x7680000
0x0613B7C8: 002c40f9  ldr x0, [x0, #0x58]
0x0613B7CC: 93144197  bl #0x3180a18
0x0613B7D0: 00ad0090  adrp x0, #0x76db000
0x0613B7D4: 00b440f9  ldr x0, [x0, #0x168]
0x0613B7D8: 90144197  bl #0x3180a18
0x0613B7DC: 00ad0090  adrp x0, #0x76db000
0x0613B7E0: 00a840f9  ldr x0, [x0, #0x150]
0x0613B7E4: 8d144197  bl #0x3180a18
0x0613B7E8: 28008052  movz w8, #0x1
0x0613B7EC: a83e1639  strb w8, [x21, #0x58f]
0x0613B7F0: c00240f9  ldr x0, [x22]
0x0613B7F4: 2b154197  bl #0x3180ca0
0x0613B7F8: e1031faa  mov x1, xzr
0x0613B7FC: f50300aa  mov x21, x0
0x0613B800: 7f7bd697  bl #0x56da5fc
0x0613B804: 750500b4  cbz x21, #0x613b8b0
0x0613B808: f60315aa  mov x22, x21
0x0613B80C: d40e01f8  str x20, [x22, #0x10]!
0x0613B810: e00316aa  mov x0, x22
0x0613B814: e10314aa  mov x1, x20
0x0613B818: 6b144197  bl #0x31809c4
0x0613B81C: c00240f9  ldr x0, [x22]
0x0613B820: e1031faa  mov x1, xzr
0x0613B824: a2f0ce97  bl #0x54f7aac
0x0613B828: c0000036  tbz w0, #0, #0x613b840
0x0613B82C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0613B830: f65741a9  ldp x22, x21, [sp, #0x10]
0x0613B834: e0031faa  mov x0, xzr
0x0613B838: fe0743f8  ldr x30, [sp], #0x30
0x0613B83C: c0035fd6  ret
0x0613B840: 601640f9  ldr x0, [x19, #0x28]
0x0613B844: 600300b4  cbz x0, #0x613b8b0
0x0613B848: 08ad0090  adrp x8, #0x76db000
0x0613B84C: 08ad40f9  ldr x8, [x8, #0x158]
0x0613B850: 010140f9  ldr x1, [x8]
0x0613B854: d69cb697  bl #0x4ee2bac
0x0613B858: 28aa00b0  adrp x8, #0x7680000
0x0613B85C: 082d40f9  ldr x8, [x8, #0x58]
0x0613B860: f30300aa  mov x19, x0
0x0613B864: 080140f9  ldr x8, [x8]
0x0613B868: e00308aa  mov x0, x8
0x0613B86C: 0d154197  bl #0x3180ca0
0x0613B870: 08ad0090  adrp x8, #0x76db000
0x0613B874: 08b540f9  ldr x8, [x8, #0x168]
0x0613B878: e10315aa  mov x1, x21
0x0613B87C: e3031faa  mov x3, xzr
0x0613B880: f40300aa  mov x20, x0
0x0613B884: 020140f9  ldr x2, [x8]
0x0613B888: cd69c497  bl #0x5255fbc
0x0613B88C: 08ad0090  adrp x8, #0x76db000
0x0613B890: 08b140f9  ldr x8, [x8, #0x160]
0x0613B894: e00313aa  mov x0, x19
0x0613B898: e10314aa  mov x1, x20
0x0613B89C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0613B8A0: 020140f9  ldr x2, [x8]
0x0613B8A4: f65741a9  ldp x22, x21, [sp, #0x10]
0x0613B8A8: fe0743f8  ldr x30, [sp], #0x30
0x0613B8AC: 21266c17  b #0x3c45130
0x0613B8B0: ff144197  bl #0x3180cac

; RVA 0x613B8BC | public void .ctor() { }
; bytes=136 sha256=4ed6ff053e65ab8a4a87bb2faedbdee15e6ddc71fcc5f43ae10fd1ef2ba42a9b status=arm64_complete_bound indexed_start=True
0x0613B8BC: fe0f1df8  str x30, [sp, #-0x30]!
0x0613B8C0: f65701a9  stp x22, x21, [sp, #0x10]
0x0613B8C4: f44f02a9  stp x20, x19, [sp, #0x20]
0x0613B8C8: 55df00b0  adrp x21, #0x7d24000
0x0613B8CC: 16ad0090  adrp x22, #0x76db000
0x0613B8D0: 14ad0090  adrp x20, #0x76db000
0x0613B8D4: a8425639  ldrb w8, [x21, #0x590]
0x0613B8D8: d6ba40f9  ldr x22, [x22, #0x170]
0x0613B8DC: 94be40f9  ldr x20, [x20, #0x178]
0x0613B8E0: f30300aa  mov x19, x0
0x0613B8E4: 28010037  tbnz w8, #0, #0x613b908
0x0613B8E8: 00ad0090  adrp x0, #0x76db000
0x0613B8EC: 00bc40f9  ldr x0, [x0, #0x178]
0x0613B8F0: 4a144197  bl #0x3180a18
0x0613B8F4: 00ad0090  adrp x0, #0x76db000
0x0613B8F8: 00b840f9  ldr x0, [x0, #0x170]
0x0613B8FC: 47144197  bl #0x3180a18
0x0613B900: 28008052  movz w8, #0x1
0x0613B904: a8421639  strb w8, [x21, #0x590]
0x0613B908: c00240f9  ldr x0, [x22]
0x0613B90C: e5144197  bl #0x3180ca0
0x0613B910: 810240f9  ldr x1, [x20]
0x0613B914: f40300aa  mov x20, x0
0x0613B918: a399b697  bl #0x4ee1fa4
0x0613B91C: e00313aa  mov x0, x19
0x0613B920: 148c02f8  str x20, [x0, #0x28]!
0x0613B924: e10314aa  mov x1, x20
0x0613B928: 27144197  bl #0x31809c4
0x0613B92C: e00313aa  mov x0, x19
0x0613B930: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0613B934: f65741a9  ldp x22, x21, [sp, #0x10]
0x0613B938: e1031faa  mov x1, xzr
0x0613B93C: fe0743f8  ldr x30, [sp], #0x30
0x0613B940: 86412014  b #0x694bf58

