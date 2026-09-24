; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 895 .BoardInteractionSystem.<>c__DisplayClass59_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x665E77C | public void .ctor() { }
; bytes=8 sha256=10fc03161e13c44e7df88558b10a4906a9d109fa362bf60154fdf5c27de637e8 status=arm64_complete_bound indexed_start=True
0x0665E77C: e1031faa  mov x1, xzr
0x0665E780: 9fefc117  b #0x56da5fc

; RVA 0x665F470 | internal void <BoardItemDragEnded>g__ItemDroppedOnOrderFailed|0() { }
; bytes=128 sha256=0ae874ca671aaab56fb30feb08af10c80acea042c7bba86dd5ecb8e7062c71a9 status=arm64_complete_bound indexed_start=True
0x0665F470: fe0f1ef8  str x30, [sp, #-0x20]!
0x0665F474: f44f01a9  stp x20, x19, [sp, #0x10]
0x0665F478: 54b600b0  adrp x20, #0x7d28000
0x0665F47C: 882e4239  ldrb w8, [x20, #0x8b]
0x0665F480: f30300aa  mov x19, x0
0x0665F484: c8000037  tbnz w8, #0, #0x665f49c
0x0665F488: c0830090  adrp x0, #0x76d7000
0x0665F48C: 00c442f9  ldr x0, [x0, #0x588]
0x0665F490: 62852c97  bl #0x3180a18
0x0665F494: 28008052  movz w8, #0x1
0x0665F498: 882e0239  strb w8, [x20, #0x8b]
0x0665F49C: 600a40f9  ldr x0, [x19, #0x10]
0x0665F4A0: 600200b4  cbz x0, #0x665f4ec
0x0665F4A4: 610e40f9  ldr x1, [x19, #0x18]
0x0665F4A8: e3031f2a  mov w3, wzr
0x0665F4AC: e20301aa  mov x2, x1
0x0665F4B0: d0fcff97  bl #0x665e7f0
0x0665F4B4: 680a40f9  ldr x8, [x19, #0x10]
0x0665F4B8: a80100b4  cbz x8, #0x665f4ec
0x0665F4BC: 003140f9  ldr x0, [x8, #0x60]
0x0665F4C0: 600100b4  cbz x0, #0x665f4ec
0x0665F4C4: c8830090  adrp x8, #0x76d7000
0x0665F4C8: 08c542f9  ldr x8, [x8, #0x588]
0x0665F4CC: 010140f9  ldr x1, [x8]
0x0665F4D0: d3385697  bl #0x3bed81c
0x0665F4D4: c00000b4  cbz x0, #0x665f4ec
0x0665F4D8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0665F4DC: 1fb00039  strb wzr, [x0, #0x2c]
0x0665F4E0: 1f9c0139  strb wzr, [x0, #0x67]
0x0665F4E4: fe0742f8  ldr x30, [sp], #0x20
0x0665F4E8: c0035fd6  ret
0x0665F4EC: f0852c97  bl #0x3180cac

; RVA 0x665F4F0 | internal void <BoardItemDragEnded>g__OnItemCombineComplete|1(bool success, bool shouldSelectItemAtTarget, bool shouldVerifyMerge = False) { }
; bytes=380 sha256=abd8dac688f3f1b22e4d3cfa55b9a7e8a6ed9663d1eb6c62facdaa725649308f status=arm64_complete_bound indexed_start=True
0x0665F4F0: fe0f1cf8  str x30, [sp, #-0x40]!
0x0665F4F4: f85f01a9  stp x24, x23, [sp, #0x10]
0x0665F4F8: f65702a9  stp x22, x21, [sp, #0x20]
0x0665F4FC: f44f03a9  stp x20, x19, [sp, #0x30]
0x0665F500: 57b600b0  adrp x23, #0x7d28000
0x0665F504: e8324239  ldrb w8, [x23, #0x8c]
0x0665F508: f603032a  mov w22, w3
0x0665F50C: f403022a  mov w20, w2
0x0665F510: f503012a  mov w21, w1
0x0665F514: f30300aa  mov x19, x0
0x0665F518: 28010037  tbnz w8, #0, #0x665f53c
0x0665F51C: 208400f0  adrp x0, #0x76e6000
0x0665F520: 008042f9  ldr x0, [x0, #0x500]
0x0665F524: 3d852c97  bl #0x3180a18
0x0665F528: e08000f0  adrp x0, #0x767e000
0x0665F52C: 001c43f9  ldr x0, [x0, #0x638]
0x0665F530: 3a852c97  bl #0x3180a18
0x0665F534: 28008052  movz w8, #0x1
0x0665F538: e8320239  strb w8, [x23, #0x8c]
0x0665F53C: 56020036  tbz w22, #0, #0x665f584
0x0665F540: 600a40f9  ldr x0, [x19, #0x10]
0x0665F544: 200900b4  cbz x0, #0x665f668
0x0665F548: ddf9ff97  bl #0x665dcbc
0x0665F54C: 600a40f9  ldr x0, [x19, #0x10]
0x0665F550: c00800b4  cbz x0, #0x665f668
0x0665F554: 610e40f9  ldr x1, [x19, #0x18]
0x0665F558: 23008052  movz w3, #0x1
0x0665F55C: e20301aa  mov x2, x1
0x0665F560: a4fcff97  bl #0x665e7f0
0x0665F564: 600a40f9  ldr x0, [x19, #0x10]
0x0665F568: 000800b4  cbz x0, #0x665f668
0x0665F56C: 610e40f9  ldr x1, [x19, #0x18]
0x0665F570: f44f43a9  ldp x20, x19, [sp, #0x30]
0x0665F574: f65742a9  ldp x22, x21, [sp, #0x20]
0x0665F578: f85f41a9  ldp x24, x23, [sp, #0x10]
0x0665F57C: fe0744f8  ldr x30, [sp], #0x40
0x0665F580: 8ef5ff17  b #0x665cbb8
0x0665F584: 55010036  tbz w21, #0, #0x665f5ac
0x0665F588: 600a40f9  ldr x0, [x19, #0x10]
0x0665F58C: e00600b4  cbz x0, #0x665f668
0x0665F590: b8f4ff97  bl #0x665c870
0x0665F594: 54050036  tbz w20, #0, #0x665f63c
0x0665F598: 600a40f9  ldr x0, [x19, #0x10]
0x0665F59C: 600600b4  cbz x0, #0x665f668
0x0665F5A0: 611240f9  ldr x1, [x19, #0x20]
0x0665F5A4: 32f9ff97  bl #0x665da6c
0x0665F5A8: 25000014  b #0x665f63c
0x0665F5AC: 601640f9  ldr x0, [x19, #0x28]
0x0665F5B0: c00500b4  cbz x0, #0x665f668
0x0665F5B4: e88000f0  adrp x8, #0x767e000
0x0665F5B8: 081d43f9  ldr x8, [x8, #0x638]
0x0665F5BC: 010140f9  ldr x1, [x8]
0x0665F5C0: 97385697  bl #0x3bed81c
0x0665F5C4: 681640f9  ldr x8, [x19, #0x28]
0x0665F5C8: 080500b4  cbz x8, #0x665f668
0x0665F5CC: 298400f0  adrp x9, #0x76e6000
0x0665F5D0: 298142f9  ldr x9, [x9, #0x500]
0x0665F5D4: f40300aa  mov x20, x0
0x0665F5D8: e00308aa  mov x0, x8
0x0665F5DC: 210140f9  ldr x1, [x9]
0x0665F5E0: 8f385697  bl #0x3bed81c
0x0665F5E4: a00000b4  cbz x0, #0x665f5f8
0x0665F5E8: 08a04039  ldrb w8, [x0, #0x28]
0x0665F5EC: 1f010071  cmp w8, #0
0x0665F5F0: f5079f1a  cset w21, ne
0x0665F5F4: 02000014  b #0x665f5fc
0x0665F5F8: f5031f2a  mov w21, wzr
0x0665F5FC: 760a40f9  ldr x22, [x19, #0x10]
0x0665F600: 560300b4  cbz x22, #0x665f668
0x0665F604: c83640f9  ldr x8, [x22, #0x68]
0x0665F608: 080300b4  cbz x8, #0x665f668
0x0665F60C: f40200b4  cbz x20, #0x665f668
0x0665F610: 771240f9  ldr x23, [x19, #0x20]
0x0665F614: 181940f9  ldr x24, [x8, #0x30]
0x0665F618: e00314aa  mov x0, x20
0x0665F61C: e1031faa  mov x1, xzr
0x0665F620: 72780a94  bl #0x68fd7e8
0x0665F624: 03000012  and w3, w0, #1
0x0665F628: e00316aa  mov x0, x22
0x0665F62C: e10318aa  mov x1, x24
0x0665F630: e20317aa  mov x2, x23
0x0665F634: e403152a  mov w4, w21
0x0665F638: 53fcff97  bl #0x665e784
0x0665F63C: 600a40f9  ldr x0, [x19, #0x10]
0x0665F640: 400100b4  cbz x0, #0x665f668
0x0665F644: 611240f9  ldr x1, [x19, #0x20]
0x0665F648: 5cf5ff97  bl #0x665cbb8
0x0665F64C: 600a40f9  ldr x0, [x19, #0x10]
0x0665F650: c00000b4  cbz x0, #0x665f668
0x0665F654: f44f43a9  ldp x20, x19, [sp, #0x30]
0x0665F658: f65742a9  ldp x22, x21, [sp, #0x20]
0x0665F65C: f85f41a9  ldp x24, x23, [sp, #0x10]
0x0665F660: fe0744f8  ldr x30, [sp], #0x40
0x0665F664: 96f9ff17  b #0x665dcbc
0x0665F668: 91852c97  bl #0x3180cac

; RVA 0x665F66C | internal bool <BoardItemDragEnded>b__2(IItemsCombiner combiner) { }
; bytes=264 sha256=21cec3a8d117889cfec67f9bb7a96de50acca93f60ebe9463b0c8a4f4468e122 status=arm64_complete_bound indexed_start=True
0x0665F66C: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x0665F670: f65701a9  stp x22, x21, [sp, #0x10]
0x0665F674: f44f02a9  stp x20, x19, [sp, #0x20]
0x0665F678: 54b600b0  adrp x20, #0x7d28000
0x0665F67C: 88364239  ldrb w8, [x20, #0x8d]
0x0665F680: f30301aa  mov x19, x1
0x0665F684: f70300aa  mov x23, x0
0x0665F688: 88010037  tbnz w8, #0, #0x665f6b8
0x0665F68C: 40850090  adrp x0, #0x7707000
0x0665F690: 000845f9  ldr x0, [x0, #0xa10]
0x0665F694: e1842c97  bl #0x3180a18
0x0665F698: 40850090  adrp x0, #0x7707000
0x0665F69C: 001c45f9  ldr x0, [x0, #0xa38]
0x0665F6A0: de842c97  bl #0x3180a18
0x0665F6A4: 40850090  adrp x0, #0x7707000
0x0665F6A8: 002045f9  ldr x0, [x0, #0xa40]
0x0665F6AC: db842c97  bl #0x3180a18
0x0665F6B0: 28008052  movz w8, #0x1
0x0665F6B4: 88360239  strb w8, [x20, #0x8d]
0x0665F6B8: e80a40f9  ldr x8, [x23, #0x10]
0x0665F6BC: a80500b4  cbz x8, #0x665f770
0x0665F6C0: 49850090  adrp x9, #0x7707000
0x0665F6C4: 291d45f9  ldr x9, [x9, #0xa38]
0x0665F6C8: 56850090  adrp x22, #0x7707000
0x0665F6CC: 143540f9  ldr x20, [x8, #0x68]
0x0665F6D0: f51640f9  ldr x21, [x23, #0x28]
0x0665F6D4: 200140f9  ldr x0, [x9]
0x0665F6D8: d62245f9  ldr x22, [x22, #0xa40]
0x0665F6DC: 71852c97  bl #0x3180ca0
0x0665F6E0: c20240f9  ldr x2, [x22]
0x0665F6E4: e10317aa  mov x1, x23
0x0665F6E8: f60300aa  mov x22, x0
0x0665F6EC: 22000094  bl #0x665f774
0x0665F6F0: 130400b4  cbz x19, #0x665f770
0x0665F6F4: 4a850090  adrp x10, #0x7707000
0x0665F6F8: 680240f9  ldr x8, [x19]
0x0665F6FC: 4a0945f9  ldr x10, [x10, #0xa10]
0x0665F700: 095d4279  ldrh w9, [x8, #0x12e]
0x0665F704: 410140f9  ldr x1, [x10]
0x0665F708: 290100b4  cbz x9, #0x665f72c
0x0665F70C: 0a5940f9  ldr x10, [x8, #0xb0]
0x0665F710: 4a210091  add x10, x10, #8
0x0665F714: 4b815ff8  ldur x11, [x10, #-8]
0x0665F718: 7f0101eb  cmp x11, x1
0x0665F71C: 00010054  b.eq #0x665f73c
0x0665F720: 290500f1  subs x9, x9, #1
0x0665F724: 4a410091  add x10, x10, #0x10
0x0665F728: 61ffff54  b.ne #0x665f714
0x0665F72C: 22008052  movz w2, #0x1
0x0665F730: e00313aa  mov x0, x19
0x0665F734: f7dc2b97  bl #0x3156b10
0x0665F738: 05000014  b #0x665f74c
0x0665F73C: 490140b9  ldr w9, [x10]
0x0665F740: 29050011  add w9, w9, #1
0x0665F744: 08d1298b  add x8, x8, w9, sxtw #4
0x0665F748: 00e10491  add x0, x8, #0x138
0x0665F74C: 051040a9  ldp x5, x4, [x0]
0x0665F750: e00313aa  mov x0, x19
0x0665F754: e10314aa  mov x1, x20
0x0665F758: e20315aa  mov x2, x21
0x0665F75C: e30316aa  mov x3, x22
0x0665F760: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0665F764: f65741a9  ldp x22, x21, [sp, #0x10]
0x0665F768: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x0665F76C: a0001fd6  br x5
0x0665F770: 4f852c97  bl #0x3180cac

