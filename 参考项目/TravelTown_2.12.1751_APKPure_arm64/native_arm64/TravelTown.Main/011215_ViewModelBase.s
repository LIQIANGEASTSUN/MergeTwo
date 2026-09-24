; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 11215 Framework.Core.MVVM.ViewModel.ViewModelBase
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x694B4B8 | public BindableProperty<Rect> get_SafeArea() { }
; bytes=160 sha256=c05c174ac2d8689c2bdaaa9f33bf0c9d85933dc4fdd16d0bd39a149ff01e7a4a status=arm64_complete_bound indexed_start=True
0x0694B4B8: fe0f1ef8  str x30, [sp, #-0x20]!
0x0694B4BC: f44f01a9  stp x20, x19, [sp, #0x10]
0x0694B4C0: f49e00d0  adrp x20, #0x7d29000
0x0694B4C4: 88367139  ldrb w8, [x20, #0xc4d]
0x0694B4C8: f30300aa  mov x19, x0
0x0694B4CC: c8000037  tbnz w8, #0, #0x694b4e4
0x0694B4D0: e06e00b0  adrp x0, #0x7728000
0x0694B4D4: 002045f9  ldr x0, [x0, #0xa40]
0x0694B4D8: 50d52097  bl #0x3180a18
0x0694B4DC: 28008052  movz w8, #0x1
0x0694B4E0: 88363139  strb w8, [x20, #0xc4d]
0x0694B4E4: 732e40f9  ldr x19, [x19, #0x58]
0x0694B4E8: 730300b4  cbz x19, #0x694b554
0x0694B4EC: ea6e00b0  adrp x10, #0x7728000
0x0694B4F0: 680240f9  ldr x8, [x19]
0x0694B4F4: 4a2145f9  ldr x10, [x10, #0xa40]
0x0694B4F8: 095d4279  ldrh w9, [x8, #0x12e]
0x0694B4FC: 410140f9  ldr x1, [x10]
0x0694B500: 290100b4  cbz x9, #0x694b524
0x0694B504: 0a5940f9  ldr x10, [x8, #0xb0]
0x0694B508: 4a210091  add x10, x10, #8
0x0694B50C: 4b815ff8  ldur x11, [x10, #-8]
0x0694B510: 7f0101eb  cmp x11, x1
0x0694B514: 00010054  b.eq #0x694b534
0x0694B518: 290500f1  subs x9, x9, #1
0x0694B51C: 4a410091  add x10, x10, #0x10
0x0694B520: 61ffff54  b.ne #0x694b50c
0x0694B524: e00313aa  mov x0, x19
0x0694B528: e2031f2a  mov w2, wzr
0x0694B52C: 792d2097  bl #0x3156b10
0x0694B530: 04000014  b #0x694b540
0x0694B534: 490180b9  ldrsw x9, [x10]
0x0694B538: 0811098b  add x8, x8, x9, lsl #4
0x0694B53C: 00e10491  add x0, x8, #0x138
0x0694B540: 020440a9  ldp x2, x1, [x0]
0x0694B544: e00313aa  mov x0, x19
0x0694B548: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0694B54C: fe0742f8  ldr x30, [sp], #0x20
0x0694B550: 40001fd6  br x2
0x0694B554: d6d52097  bl #0x3180cac

; RVA 0x694B558 | protected DiContainer get_Container() { }
; bytes=8 sha256=989bb1a041c93e09fa2954014eaba1a46b19128664c6bbb210694e0989f09532 status=arm64_complete_bound indexed_start=True
0x0694B558: 002840f9  ldr x0, [x0, #0x50]
0x0694B55C: c0035fd6  ret

; RVA 0x694B560 | public IPromise<GameObject> InstantiatePrefab(IAsset assetDefinition, Transform parent, DiContainer container) { }
; bytes=728 sha256=1eb32e708c6ff1c794e6d356fc8b6ccc0f5d0d3f05b71595740108977cd0143b status=arm64_complete_bound indexed_start=True
0x0694B560: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x0694B564: f65701a9  stp x22, x21, [sp, #0x10]
0x0694B568: f44f02a9  stp x20, x19, [sp, #0x20]
0x0694B56C: f79e00d0  adrp x23, #0x7d29000
0x0694B570: e83a7139  ldrb w8, [x23, #0xc4e]
0x0694B574: f30303aa  mov x19, x3
0x0694B578: f50302aa  mov x21, x2
0x0694B57C: f60301aa  mov x22, x1
0x0694B580: f40300aa  mov x20, x0
0x0694B584: c8030037  tbnz w8, #0, #0x694b5fc
0x0694B588: 20690090  adrp x0, #0x766f000
0x0694B58C: 002041f9  ldr x0, [x0, #0x240]
0x0694B590: 22d52097  bl #0x3180a18
0x0694B594: 006900f0  adrp x0, #0x766e000
0x0694B598: 00a041f9  ldr x0, [x0, #0x340]
0x0694B59C: 1fd52097  bl #0x3180a18
0x0694B5A0: 206900f0  adrp x0, #0x7672000
0x0694B5A4: 00b041f9  ldr x0, [x0, #0x360]
0x0694B5A8: 1cd52097  bl #0x3180a18
0x0694B5AC: 20690090  adrp x0, #0x766f000
0x0694B5B0: 002441f9  ldr x0, [x0, #0x248]
0x0694B5B4: 19d52097  bl #0x3180a18
0x0694B5B8: 206900f0  adrp x0, #0x7672000
0x0694B5BC: 00b441f9  ldr x0, [x0, #0x368]
0x0694B5C0: 16d52097  bl #0x3180a18
0x0694B5C4: e06e00b0  adrp x0, #0x7728000
0x0694B5C8: 002445f9  ldr x0, [x0, #0xa48]
0x0694B5CC: 13d52097  bl #0x3180a18
0x0694B5D0: e06e00b0  adrp x0, #0x7728000
0x0694B5D4: 002845f9  ldr x0, [x0, #0xa50]
0x0694B5D8: 10d52097  bl #0x3180a18
0x0694B5DC: e06e00b0  adrp x0, #0x7728000
0x0694B5E0: 002c45f9  ldr x0, [x0, #0xa58]
0x0694B5E4: 0dd52097  bl #0x3180a18
0x0694B5E8: 80690090  adrp x0, #0x767b000
0x0694B5EC: 00b045f9  ldr x0, [x0, #0xb60]
0x0694B5F0: 0ad52097  bl #0x3180a18
0x0694B5F4: 28008052  movz w8, #0x1
0x0694B5F8: e83a3139  strb w8, [x23, #0xc4e]
0x0694B5FC: e10316aa  mov x1, x22
0x0694B600: 8e000094  bl #0x694b838
0x0694B604: 20010036  tbz w0, #0, #0x694b628
0x0694B608: e86e00b0  adrp x8, #0x7728000
0x0694B60C: 082d45f9  ldr x8, [x8, #0xa58]
0x0694B610: e00314aa  mov x0, x20
0x0694B614: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0694B618: f65741a9  ldp x22, x21, [sp, #0x10]
0x0694B61C: 010140f9  ldr x1, [x8]
0x0694B620: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x0694B624: 23905317  b #0x3e2f6b0
0x0694B628: 972240f9  ldr x23, [x20, #0x40]
0x0694B62C: 571000b4  cbz x23, #0x694b834
0x0694B630: 2a6900f0  adrp x10, #0x7672000
0x0694B634: e80240f9  ldr x8, [x23]
0x0694B638: 4ab141f9  ldr x10, [x10, #0x360]
0x0694B63C: 095d4279  ldrh w9, [x8, #0x12e]
0x0694B640: 410140f9  ldr x1, [x10]
0x0694B644: 290100b4  cbz x9, #0x694b668
0x0694B648: 0a5940f9  ldr x10, [x8, #0xb0]
0x0694B64C: 4a210091  add x10, x10, #8
0x0694B650: 4b815ff8  ldur x11, [x10, #-8]
0x0694B654: 7f0101eb  cmp x11, x1
0x0694B658: 00010054  b.eq #0x694b678
0x0694B65C: 290500f1  subs x9, x9, #1
0x0694B660: 4a410091  add x10, x10, #0x10
0x0694B664: 61ffff54  b.ne #0x694b650
0x0694B668: e00317aa  mov x0, x23
0x0694B66C: e2031f2a  mov w2, wzr
0x0694B670: 282d2097  bl #0x3156b10
0x0694B674: 04000014  b #0x694b684
0x0694B678: 490180b9  ldrsw x9, [x10]
0x0694B67C: 0811098b  add x8, x8, x9, lsl #4
0x0694B680: 00e10491  add x0, x8, #0x138
0x0694B684: 081040a9  ldp x8, x4, [x0]
0x0694B688: e00317aa  mov x0, x23
0x0694B68C: e10316aa  mov x1, x22
0x0694B690: e20315aa  mov x2, x21
0x0694B694: e30313aa  mov x3, x19
0x0694B698: 00013fd6  blr x8
0x0694B69C: 086900f0  adrp x8, #0x766e000
0x0694B6A0: 08a141f9  ldr x8, [x8, #0x340]
0x0694B6A4: f30300aa  mov x19, x0
0x0694B6A8: 080140f9  ldr x8, [x8]
0x0694B6AC: e00308aa  mov x0, x8
0x0694B6B0: 7cd52097  bl #0x3180ca0
0x0694B6B4: 88690090  adrp x8, #0x767b000
0x0694B6B8: 08b145f9  ldr x8, [x8, #0xb60]
0x0694B6BC: e10314aa  mov x1, x20
0x0694B6C0: e3031faa  mov x3, xzr
0x0694B6C4: f50300aa  mov x21, x0
0x0694B6C8: 020140f9  ldr x2, [x8]
0x0694B6CC: c25aa797  bl #0x53221d4
0x0694B6D0: 330b00b4  cbz x19, #0x694b834
0x0694B6D4: 2a6900f0  adrp x10, #0x7672000
0x0694B6D8: 680240f9  ldr x8, [x19]
0x0694B6DC: 4ab541f9  ldr x10, [x10, #0x368]
0x0694B6E0: 095d4279  ldrh w9, [x8, #0x12e]
0x0694B6E4: 410140f9  ldr x1, [x10]
0x0694B6E8: 290100b4  cbz x9, #0x694b70c
0x0694B6EC: 0a5940f9  ldr x10, [x8, #0xb0]
0x0694B6F0: 4a210091  add x10, x10, #8
0x0694B6F4: 4b815ff8  ldur x11, [x10, #-8]
0x0694B6F8: 7f0101eb  cmp x11, x1
0x0694B6FC: 00010054  b.eq #0x694b71c
0x0694B700: 290500f1  subs x9, x9, #1
0x0694B704: 4a410091  add x10, x10, #0x10
0x0694B708: 61ffff54  b.ne #0x694b6f4
0x0694B70C: e00313aa  mov x0, x19
0x0694B710: e2031f2a  mov w2, wzr
0x0694B714: ff2c2097  bl #0x3156b10
0x0694B718: 04000014  b #0x694b728
0x0694B71C: 490180b9  ldrsw x9, [x10]
0x0694B720: 0811098b  add x8, x8, x9, lsl #4
0x0694B724: 00e10491  add x0, x8, #0x138
0x0694B728: 080840a9  ldp x8, x2, [x0]
0x0694B72C: e00313aa  mov x0, x19
0x0694B730: e10315aa  mov x1, x21
0x0694B734: 00013fd6  blr x8
0x0694B738: f66e00b0  adrp x22, #0x7728000
0x0694B73C: d62a45f9  ldr x22, [x22, #0xa50]
0x0694B740: c00240f9  ldr x0, [x22]
0x0694B744: 08e040b9  ldr w8, [x0, #0xe0]
0x0694B748: 68000035  cbnz w8, #0x694b754
0x0694B74C: 10d52097  bl #0x3180b8c
0x0694B750: c00240f9  ldr x0, [x22]
0x0694B754: 085c40f9  ldr x8, [x0, #0xb8]
0x0694B758: 140540f9  ldr x20, [x8, #8]
0x0694B75C: f40200b5  cbnz x20, #0x694b7b8
0x0694B760: 08e040b9  ldr w8, [x0, #0xe0]
0x0694B764: 68000035  cbnz w8, #0x694b770
0x0694B768: 09d52097  bl #0x3180b8c
0x0694B76C: c00240f9  ldr x0, [x22]
0x0694B770: 29690090  adrp x9, #0x766f000
0x0694B774: 085c40f9  ldr x8, [x0, #0xb8]
0x0694B778: 292141f9  ldr x9, [x9, #0x240]
0x0694B77C: 150140f9  ldr x21, [x8]
0x0694B780: 200140f9  ldr x0, [x9]
0x0694B784: 47d52097  bl #0x3180ca0
0x0694B788: e86e00b0  adrp x8, #0x7728000
0x0694B78C: 082545f9  ldr x8, [x8, #0xa48]
0x0694B790: e10315aa  mov x1, x21
0x0694B794: e3031faa  mov x3, xzr
0x0694B798: f40300aa  mov x20, x0
0x0694B79C: 020140f9  ldr x2, [x8]
0x0694B7A0: 8d5aa797  bl #0x53221d4
0x0694B7A4: c80240f9  ldr x8, [x22]
0x0694B7A8: e10314aa  mov x1, x20
0x0694B7AC: 005d40f9  ldr x0, [x8, #0xb8]
0x0694B7B0: 148c00f8  str x20, [x0, #8]!
0x0694B7B4: 84d42097  bl #0x31809c4
0x0694B7B8: 2a690090  adrp x10, #0x766f000
0x0694B7BC: 680240f9  ldr x8, [x19]
0x0694B7C0: 4a2541f9  ldr x10, [x10, #0x248]
0x0694B7C4: 095d4279  ldrh w9, [x8, #0x12e]
0x0694B7C8: 410140f9  ldr x1, [x10]
0x0694B7CC: 290100b4  cbz x9, #0x694b7f0
0x0694B7D0: 0a5940f9  ldr x10, [x8, #0xb0]
0x0694B7D4: 4a210091  add x10, x10, #8
0x0694B7D8: 4b815ff8  ldur x11, [x10, #-8]
0x0694B7DC: 7f0101eb  cmp x11, x1
0x0694B7E0: 00010054  b.eq #0x694b800
0x0694B7E4: 290500f1  subs x9, x9, #1
0x0694B7E8: 4a410091  add x10, x10, #0x10
0x0694B7EC: 61ffff54  b.ne #0x694b7d8
0x0694B7F0: 22008052  movz w2, #0x1
0x0694B7F4: e00313aa  mov x0, x19
0x0694B7F8: c62c2097  bl #0x3156b10
0x0694B7FC: 05000014  b #0x694b810
0x0694B800: 490140b9  ldr w9, [x10]
0x0694B804: 29050011  add w9, w9, #1
0x0694B808: 08d1298b  add x8, x8, w9, sxtw #4
0x0694B80C: 00e10491  add x0, x8, #0x138
0x0694B810: 080840a9  ldp x8, x2, [x0]
0x0694B814: e00313aa  mov x0, x19
0x0694B818: e10314aa  mov x1, x20
0x0694B81C: 00013fd6  blr x8
0x0694B820: e00313aa  mov x0, x19
0x0694B824: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0694B828: f65741a9  ldp x22, x21, [sp, #0x10]
0x0694B82C: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x0694B830: c0035fd6  ret
0x0694B834: 1ed52097  bl #0x3180cac

; RVA 0x694B838 | private bool IsAssetInvalid(IAsset assetDefinition) { }
; bytes=172 sha256=970ddbbbe812940aa3cff6cc0f7a71685dbe20c97ccbaee0c952e46784f00d9b status=arm64_complete_bound indexed_start=True
0x0694B838: fe0f1ef8  str x30, [sp, #-0x20]!
0x0694B83C: f44f01a9  stp x20, x19, [sp, #0x10]
0x0694B840: f49e00d0  adrp x20, #0x7d29000
0x0694B844: 883e7139  ldrb w8, [x20, #0xc4f]
0x0694B848: f30301aa  mov x19, x1
0x0694B84C: c8000037  tbnz w8, #0, #0x694b864
0x0694B850: 606900d0  adrp x0, #0x7679000
0x0694B854: 000043f9  ldr x0, [x0, #0x600]
0x0694B858: 70d42097  bl #0x3180a18
0x0694B85C: 28008052  movz w8, #0x1
0x0694B860: 883e3139  strb w8, [x20, #0xc4f]
0x0694B864: 730200b4  cbz x19, #0x694b8b0
0x0694B868: 6a6900d0  adrp x10, #0x7679000
0x0694B86C: 680240f9  ldr x8, [x19]
0x0694B870: 4a0143f9  ldr x10, [x10, #0x600]
0x0694B874: 095d4279  ldrh w9, [x8, #0x12e]
0x0694B878: 410140f9  ldr x1, [x10]
0x0694B87C: 290100b4  cbz x9, #0x694b8a0
0x0694B880: 0a5940f9  ldr x10, [x8, #0xb0]
0x0694B884: 4a210091  add x10, x10, #8
0x0694B888: 4b815ff8  ldur x11, [x10, #-8]
0x0694B88C: 7f0101eb  cmp x11, x1
0x0694B890: 40010054  b.eq #0x694b8b8
0x0694B894: 290500f1  subs x9, x9, #1
0x0694B898: 4a410091  add x10, x10, #0x10
0x0694B89C: 61ffff54  b.ne #0x694b888
0x0694B8A0: e00313aa  mov x0, x19
0x0694B8A4: e2031f2a  mov w2, wzr
0x0694B8A8: 9a2c2097  bl #0x3156b10
0x0694B8AC: 06000014  b #0x694b8c4
0x0694B8B0: 28008052  movz w8, #0x1
0x0694B8B4: 08000014  b #0x694b8d4
0x0694B8B8: 490180b9  ldrsw x9, [x10]
0x0694B8BC: 0811098b  add x8, x8, x9, lsl #4
0x0694B8C0: 00e10491  add x0, x8, #0x138
0x0694B8C4: 080440a9  ldp x8, x1, [x0]
0x0694B8C8: e00313aa  mov x0, x19
0x0694B8CC: 00013fd6  blr x8
0x0694B8D0: 08000052  eor w8, w0, #1
0x0694B8D4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0694B8D8: 00010012  and w0, w8, #1
0x0694B8DC: fe0742f8  ldr x30, [sp], #0x20
0x0694B8E0: c0035fd6  ret

; RVA 0x694B8E4 | private void OnAssetLoaded(Object obj) { }
; bytes=88 sha256=909e262ccd3de7102f4d261ec738604ea6e28ce339886d4817632d490ec99d38 status=arm64_complete_bound indexed_start=True
0x0694B8E4: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0694B8E8: f44f01a9  stp x20, x19, [sp, #0x10]
0x0694B8EC: f59e00d0  adrp x21, #0x7d29000
0x0694B8F0: a8427139  ldrb w8, [x21, #0xc50]
0x0694B8F4: f30301aa  mov x19, x1
0x0694B8F8: f40300aa  mov x20, x0
0x0694B8FC: c8000037  tbnz w8, #0, #0x694b914
0x0694B900: e06e00b0  adrp x0, #0x7728000
0x0694B904: 003045f9  ldr x0, [x0, #0xa60]
0x0694B908: 44d42097  bl #0x3180a18
0x0694B90C: 28008052  movz w8, #0x1
0x0694B910: a8423139  strb w8, [x21, #0xc50]
0x0694B914: 803240f9  ldr x0, [x20, #0x60]
0x0694B918: 000100b4  cbz x0, #0x694b938
0x0694B91C: e86e00b0  adrp x8, #0x7728000
0x0694B920: 083145f9  ldr x8, [x8, #0xa60]
0x0694B924: e10313aa  mov x1, x19
0x0694B928: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0694B92C: 020140f9  ldr x2, [x8]
0x0694B930: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0694B934: bcd5a517  b #0x52c1024
0x0694B938: ddd42097  bl #0x3180cac

; RVA 0x694B93C | public void UnloadAllAssets() { }
; bytes=592 sha256=266d8d6b112ccbbaba427e0aaa3a3ac37706aac74a1da1d8f35df43065a89399 status=arm64_complete_bound indexed_start=True
0x0694B93C: ff4302d1  sub sp, sp, #0x90
0x0694B940: fe6f04a9  stp x30, x27, [sp, #0x40]
0x0694B944: fa6705a9  stp x26, x25, [sp, #0x50]
0x0694B948: f85f06a9  stp x24, x23, [sp, #0x60]
0x0694B94C: f65707a9  stp x22, x21, [sp, #0x70]
0x0694B950: f44f08a9  stp x20, x19, [sp, #0x80]
0x0694B954: f49e00d0  adrp x20, #0x7d29000
0x0694B958: 88467139  ldrb w8, [x20, #0xc51]
0x0694B95C: f30300aa  mov x19, x0
0x0694B960: 08030037  tbnz w8, #0, #0x694b9c0
0x0694B964: e06e00b0  adrp x0, #0x7728000
0x0694B968: 003445f9  ldr x0, [x0, #0xa68]
0x0694B96C: 2bd42097  bl #0x3180a18
0x0694B970: e06e00b0  adrp x0, #0x7728000
0x0694B974: 003845f9  ldr x0, [x0, #0xa70]
0x0694B978: 28d42097  bl #0x3180a18
0x0694B97C: e06e00b0  adrp x0, #0x7728000
0x0694B980: 003c45f9  ldr x0, [x0, #0xa78]
0x0694B984: 25d42097  bl #0x3180a18
0x0694B988: e06e00b0  adrp x0, #0x7728000
0x0694B98C: 004045f9  ldr x0, [x0, #0xa80]
0x0694B990: 22d42097  bl #0x3180a18
0x0694B994: e06e00b0  adrp x0, #0x7728000
0x0694B998: 004445f9  ldr x0, [x0, #0xa88]
0x0694B99C: 1fd42097  bl #0x3180a18
0x0694B9A0: 806c00b0  adrp x0, #0x76dc000
0x0694B9A4: 002045f9  ldr x0, [x0, #0xa40]
0x0694B9A8: 1cd42097  bl #0x3180a18
0x0694B9AC: 006800f0  adrp x0, #0x764e000
0x0694B9B0: 007042f9  ldr x0, [x0, #0x4e0]
0x0694B9B4: 19d42097  bl #0x3180a18
0x0694B9B8: 28008052  movz w8, #0x1
0x0694B9BC: 88463139  strb w8, [x20, #0xc51]
0x0694B9C0: ff7f02a9  stp xzr, xzr, [sp, #0x20]
0x0694B9C4: ff1b00f9  str xzr, [sp, #0x30]
0x0694B9C8: 603240f9  ldr x0, [x19, #0x60]
0x0694B9CC: 400a00b4  cbz x0, #0x694bb14
0x0694B9D0: e86e00b0  adrp x8, #0x7728000
0x0694B9D4: 084545f9  ldr x8, [x8, #0xa88]
0x0694B9D8: f96e00b0  adrp x25, #0x7728000
0x0694B9DC: 1a6800f0  adrp x26, #0x764e000
0x0694B9E0: 393b45f9  ldr x25, [x25, #0xa70]
0x0694B9E4: 5a7342f9  ldr x26, [x26, #0x4e0]
0x0694B9E8: 010140f9  ldr x1, [x8]
0x0694B9EC: 9b6c00b0  adrp x27, #0x76dc000
0x0694B9F0: f76e00b0  adrp x23, #0x7728000
0x0694B9F4: f86e00b0  adrp x24, #0x7728000
0x0694B9F8: 7b2345f9  ldr x27, [x27, #0xa40]
0x0694B9FC: f74245f9  ldr x23, [x23, #0xa80]
0x0694BA00: 183745f9  ldr x24, [x24, #0xa68]
0x0694BA04: e8230091  add x8, sp, #8
0x0694BA08: e8d3a597  bl #0x52c09a8
0x0694BA0C: e083c03c  ldur q0, [sp, #8]
0x0694BA10: e80f40f9  ldr x8, [sp, #0x18]
0x0694BA14: e00b803d  str q0, [sp, #0x20]
0x0694BA18: e81b00f9  str x8, [sp, #0x30]
0x0694BA1C: 210340f9  ldr x1, [x25]
0x0694BA20: e0830091  add x0, sp, #0x20
0x0694BA24: 88269b97  bl #0x5015444
0x0694BA28: 80050036  tbz w0, #0, #0x694bad8
0x0694BA2C: 400340f9  ldr x0, [x26]
0x0694BA30: f41b40f9  ldr x20, [sp, #0x30]
0x0694BA34: 08e040b9  ldr w8, [x0, #0xe0]
0x0694BA38: 48000035  cbnz w8, #0x694ba40
0x0694BA3C: 54d42097  bl #0x3180b8c
0x0694BA40: e00314aa  mov x0, x20
0x0694BA44: e1031faa  mov x1, xzr
0x0694BA48: e2031faa  mov x2, xzr
0x0694BA4C: 4a4c1694  bl #0x6edeb74
0x0694BA50: 60fe0736  tbz w0, #0, #0x694ba1c
0x0694BA54: 752240f9  ldr x21, [x19, #0x40]
0x0694BA58: d50500b4  cbz x21, #0x694bb10
0x0694BA5C: 760340f9  ldr x22, [x27]
0x0694BA60: a80240f9  ldr x8, [x21]
0x0694BA64: c11240f9  ldr x1, [x22, #0x20]
0x0694BA68: 095d4279  ldrh w9, [x8, #0x12e]
0x0694BA6C: c2a24079  ldrh w2, [x22, #0x50]
0x0694BA70: 290100b4  cbz x9, #0x694ba94
0x0694BA74: 0a5940f9  ldr x10, [x8, #0xb0]
0x0694BA78: 4a210091  add x10, x10, #8
0x0694BA7C: 4b815ff8  ldur x11, [x10, #-8]
0x0694BA80: 7f0101eb  cmp x11, x1
0x0694BA84: e0000054  b.eq #0x694baa0
0x0694BA88: 290500f1  subs x9, x9, #1
0x0694BA8C: 4a410091  add x10, x10, #0x10
0x0694BA90: 61ffff54  b.ne #0x694ba7c
0x0694BA94: e00315aa  mov x0, x21
0x0694BA98: 1e2c2097  bl #0x3156b10
0x0694BA9C: 05000014  b #0x694bab0
0x0694BAA0: 490140b9  ldr w9, [x10]
0x0694BAA4: 2901020b  add w9, w9, w2
0x0694BAA8: 08d1298b  add x8, x8, w9, sxtw #4
0x0694BAAC: 00e10491  add x0, x8, #0x138
0x0694BAB0: 000440f9  ldr x0, [x0, #8]
0x0694BAB4: e10316aa  mov x1, x22
0x0694BAB8: 34d42097  bl #0x3180b88
0x0694BABC: 080440f9  ldr x8, [x0, #8]
0x0694BAC0: e30300aa  mov x3, x0
0x0694BAC4: e00315aa  mov x0, x21
0x0694BAC8: e10314aa  mov x1, x20
0x0694BACC: e2031f2a  mov w2, wzr
0x0694BAD0: 00013fd6  blr x8
0x0694BAD4: d2ffff17  b #0x694ba1c
0x0694BAD8: 010340f9  ldr x1, [x24]
0x0694BADC: e0830091  add x0, sp, #0x20
0x0694BAE0: 58269b97  bl #0x5015440
0x0694BAE4: 603240f9  ldr x0, [x19, #0x60]
0x0694BAE8: 600100b4  cbz x0, #0x694bb14
0x0694BAEC: e10240f9  ldr x1, [x23]
0x0694BAF0: 79d2a597  bl #0x52c04d4
0x0694BAF4: f44f48a9  ldp x20, x19, [sp, #0x80]
0x0694BAF8: f65747a9  ldp x22, x21, [sp, #0x70]
0x0694BAFC: f85f46a9  ldp x24, x23, [sp, #0x60]
0x0694BB00: fa6745a9  ldp x26, x25, [sp, #0x50]
0x0694BB04: fe6f44a9  ldp x30, x27, [sp, #0x40]
0x0694BB08: ff430291  add sp, sp, #0x90
0x0694BB0C: c0035fd6  ret
0x0694BB10: 67d42097  bl #0x3180cac
0x0694BB14: 66d42097  bl #0x3180cac
0x0694BB18: 04000014  b #0x694bb28
0x0694BB1C: 03000014  b #0x694bb28
0x0694BB20: 02000014  b #0x694bb28
0x0694BB24: 01000014  b #0x694bb28
0x0694BB28: f40300aa  mov x20, x0
0x0694BB2C: 3f040071  cmp w1, #1
0x0694BB30: 61010054  b.ne #0x694bb5c
0x0694BB34: e00314aa  mov x0, x20
0x0694BB38: 760b2294  bl #0x71ce910
0x0694BB3C: 150040f9  ldr x21, [x0]
0x0694BB40: 780b2294  bl #0x71ce920
0x0694BB44: 010340f9  ldr x1, [x24]
0x0694BB48: e0830091  add x0, sp, #0x20
0x0694BB4C: 3d269b97  bl #0x5015440
0x0694BB50: b5fcffb4  cbz x21, #0x694bae4
0x0694BB54: e00315aa  mov x0, x21
0x0694BB58: 53d42097  bl #0x3180ca4
0x0694BB5C: f5031faa  mov x21, xzr
0x0694BB60: 02000014  b #0x694bb68
0x0694BB64: f40300aa  mov x20, x0
0x0694BB68: 010340f9  ldr x1, [x24]
0x0694BB6C: e0830091  add x0, sp, #0x20
0x0694BB70: 34269b97  bl #0x5015440
0x0694BB74: 750000b5  cbnz x21, #0x694bb80
0x0694BB78: e00314aa  mov x0, x20
0x0694BB7C: 77672497  bl #0x3265958
0x0694BB80: e00315aa  mov x0, x21
0x0694BB84: 48d42097  bl #0x3180ca4
0x0694BB88: 63f61297  bl #0x2e09514

; RVA 0x694BB8C | public void UnloadAsset(Object asset) { }
; bytes=236 sha256=83775f19a912be98c023b80d1fe8094bad86c0dc28d32a5ca99efb32e6deb639 status=arm64_complete_bound indexed_start=True
0x0694BB8C: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0694BB90: f44f01a9  stp x20, x19, [sp, #0x10]
0x0694BB94: f59e00d0  adrp x21, #0x7d29000
0x0694BB98: a84a7139  ldrb w8, [x21, #0xc52]
0x0694BB9C: f30301aa  mov x19, x1
0x0694BBA0: f40300aa  mov x20, x0
0x0694BBA4: 28010037  tbnz w8, #0, #0x694bbc8
0x0694BBA8: e06e00b0  adrp x0, #0x7728000
0x0694BBAC: 004845f9  ldr x0, [x0, #0xa90]
0x0694BBB0: 9ad32097  bl #0x3180a18
0x0694BBB4: 806c00b0  adrp x0, #0x76dc000
0x0694BBB8: 002045f9  ldr x0, [x0, #0xa40]
0x0694BBBC: 97d32097  bl #0x3180a18
0x0694BBC0: 28008052  movz w8, #0x1
0x0694BBC4: a84a3139  strb w8, [x21, #0xc52]
0x0694BBC8: 803240f9  ldr x0, [x20, #0x60]
0x0694BBCC: 400500b4  cbz x0, #0x694bc74
0x0694BBD0: e86e00b0  adrp x8, #0x7728000
0x0694BBD4: 084945f9  ldr x8, [x8, #0xa90]
0x0694BBD8: e10313aa  mov x1, x19
0x0694BBDC: 020140f9  ldr x2, [x8]
0x0694BBE0: c8d2a597  bl #0x52c0700
0x0694BBE4: 942240f9  ldr x20, [x20, #0x40]
0x0694BBE8: 740400b4  cbz x20, #0x694bc74
0x0694BBEC: 896c00b0  adrp x9, #0x76dc000
0x0694BBF0: 292145f9  ldr x9, [x9, #0xa40]
0x0694BBF4: 880240f9  ldr x8, [x20]
0x0694BBF8: 350140f9  ldr x21, [x9]
0x0694BBFC: 095d4279  ldrh w9, [x8, #0x12e]
0x0694BC00: a11240f9  ldr x1, [x21, #0x20]
0x0694BC04: a2a24079  ldrh w2, [x21, #0x50]
0x0694BC08: 290100b4  cbz x9, #0x694bc2c
0x0694BC0C: 0a5940f9  ldr x10, [x8, #0xb0]
0x0694BC10: 4a210091  add x10, x10, #8
0x0694BC14: 4b815ff8  ldur x11, [x10, #-8]
0x0694BC18: 7f0101eb  cmp x11, x1
0x0694BC1C: e0000054  b.eq #0x694bc38
0x0694BC20: 290500f1  subs x9, x9, #1
0x0694BC24: 4a410091  add x10, x10, #0x10
0x0694BC28: 61ffff54  b.ne #0x694bc14
0x0694BC2C: e00314aa  mov x0, x20
0x0694BC30: b82b2097  bl #0x3156b10
0x0694BC34: 05000014  b #0x694bc48
0x0694BC38: 490140b9  ldr w9, [x10]
0x0694BC3C: 2901020b  add w9, w9, w2
0x0694BC40: 08d1298b  add x8, x8, w9, sxtw #4
0x0694BC44: 00e10491  add x0, x8, #0x138
0x0694BC48: 000440f9  ldr x0, [x0, #8]
0x0694BC4C: e10315aa  mov x1, x21
0x0694BC50: ced32097  bl #0x3180b88
0x0694BC54: e30300aa  mov x3, x0
0x0694BC58: 040440f9  ldr x4, [x0, #8]
0x0694BC5C: e00314aa  mov x0, x20
0x0694BC60: e10313aa  mov x1, x19
0x0694BC64: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0694BC68: e2031f2a  mov w2, wzr
0x0694BC6C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0694BC70: 80001fd6  br x4
0x0694BC74: 0ed42097  bl #0x3180cac

; RVA 0x694BC78 | public GameObject InstantiateInjected(GameObject original, Transform parent, bool worldPositionStays = False) { }
; bytes=28 sha256=a5673f658f4d324bafd364fc53f45c8a0a450fe686f5c8d47523fa18d2b34ca4 status=arm64_complete_bound indexed_start=True
0x0694BC78: fe0f1ff8  str x30, [sp, #-0x10]!
0x0694BC7C: 002840f9  ldr x0, [x0, #0x50]
0x0694BC80: 800000b4  cbz x0, #0x694bc90
0x0694BC84: e3031faa  mov x3, xzr
0x0694BC88: fe0741f8  ldr x30, [sp], #0x10
0x0694BC8C: 908e2114  b #0x71af6cc
0x0694BC90: 07d42097  bl #0x3180cac

; RVA 0x694BC94 | public void RequestAssetOverrideTransition(Asset localAsset, IAsset remoteAsset, string transition, object payload) { }
; bytes=324 sha256=58f20cf492c5b7de5c1f97586c124b65d6afe958e72f850af41fee7d455e4115 status=arm64_complete_bound indexed_start=True
0x0694BC94: fe67bca9  stp x30, x25, [sp, #-0x40]!
0x0694BC98: f85f01a9  stp x24, x23, [sp, #0x10]
0x0694BC9C: f65702a9  stp x22, x21, [sp, #0x20]
0x0694BCA0: f44f03a9  stp x20, x19, [sp, #0x30]
0x0694BCA4: f89e00d0  adrp x24, #0x7d29000
0x0694BCA8: 084f7139  ldrb w8, [x24, #0xc53]
0x0694BCAC: f50304aa  mov x21, x4
0x0694BCB0: f60303aa  mov x22, x3
0x0694BCB4: f30302aa  mov x19, x2
0x0694BCB8: f40301aa  mov x20, x1
0x0694BCBC: f70300aa  mov x23, x0
0x0694BCC0: c8000037  tbnz w8, #0, #0x694bcd8
0x0694BCC4: 20690090  adrp x0, #0x766f000
0x0694BCC8: 006444f9  ldr x0, [x0, #0x8c8]
0x0694BCCC: 53d32097  bl #0x3180a18
0x0694BCD0: 28008052  movz w8, #0x1
0x0694BCD4: 084f3139  strb w8, [x24, #0xc53]
0x0694BCD8: f82640f9  ldr x24, [x23, #0x48]
0x0694BCDC: d80700b4  cbz x24, #0x694bdd4
0x0694BCE0: 39690090  adrp x25, #0x766f000
0x0694BCE4: 080340f9  ldr x8, [x24]
0x0694BCE8: 396744f9  ldr x25, [x25, #0x8c8]
0x0694BCEC: 095d4279  ldrh w9, [x8, #0x12e]
0x0694BCF0: 210340f9  ldr x1, [x25]
0x0694BCF4: 290100b4  cbz x9, #0x694bd18
0x0694BCF8: 0a5940f9  ldr x10, [x8, #0xb0]
0x0694BCFC: 4a210091  add x10, x10, #8
0x0694BD00: 4b815ff8  ldur x11, [x10, #-8]
0x0694BD04: 7f0101eb  cmp x11, x1
0x0694BD08: 00010054  b.eq #0x694bd28
0x0694BD0C: 290500f1  subs x9, x9, #1
0x0694BD10: 4a410091  add x10, x10, #0x10
0x0694BD14: 61ffff54  b.ne #0x694bd00
0x0694BD18: e00318aa  mov x0, x24
0x0694BD1C: e2031f2a  mov w2, wzr
0x0694BD20: 7c2b2097  bl #0x3156b10
0x0694BD24: 04000014  b #0x694bd34
0x0694BD28: 490180b9  ldrsw x9, [x10]
0x0694BD2C: 0811098b  add x8, x8, x9, lsl #4
0x0694BD30: 00e10491  add x0, x8, #0x138
0x0694BD34: 080c40a9  ldp x8, x3, [x0]
0x0694BD38: e00318aa  mov x0, x24
0x0694BD3C: e10314aa  mov x1, x20
0x0694BD40: e20313aa  mov x2, x19
0x0694BD44: 00013fd6  blr x8
0x0694BD48: e00317aa  mov x0, x23
0x0694BD4C: e10316aa  mov x1, x22
0x0694BD50: e20315aa  mov x2, x21
0x0694BD54: 87fcff97  bl #0x694af70
0x0694BD58: f52640f9  ldr x21, [x23, #0x48]
0x0694BD5C: d50300b4  cbz x21, #0x694bdd4
0x0694BD60: a80240f9  ldr x8, [x21]
0x0694BD64: 210340f9  ldr x1, [x25]
0x0694BD68: 095d4279  ldrh w9, [x8, #0x12e]
0x0694BD6C: 290100b4  cbz x9, #0x694bd90
0x0694BD70: 0a5940f9  ldr x10, [x8, #0xb0]
0x0694BD74: 4a210091  add x10, x10, #8
0x0694BD78: 4b815ff8  ldur x11, [x10, #-8]
0x0694BD7C: 7f0101eb  cmp x11, x1
0x0694BD80: 00010054  b.eq #0x694bda0
0x0694BD84: 290500f1  subs x9, x9, #1
0x0694BD88: 4a410091  add x10, x10, #0x10
0x0694BD8C: 61ffff54  b.ne #0x694bd78
0x0694BD90: 62008052  movz w2, #0x3
0x0694BD94: e00315aa  mov x0, x21
0x0694BD98: 5e2b2097  bl #0x3156b10
0x0694BD9C: 05000014  b #0x694bdb0
0x0694BDA0: 490140b9  ldr w9, [x10]
0x0694BDA4: 290d0011  add w9, w9, #3
0x0694BDA8: 08d1298b  add x8, x8, w9, sxtw #4
0x0694BDAC: 00e10491  add x0, x8, #0x138
0x0694BDB0: 040c40a9  ldp x4, x3, [x0]
0x0694BDB4: e00315aa  mov x0, x21
0x0694BDB8: e10314aa  mov x1, x20
0x0694BDBC: e20313aa  mov x2, x19
0x0694BDC0: f44f43a9  ldp x20, x19, [sp, #0x30]
0x0694BDC4: f65742a9  ldp x22, x21, [sp, #0x20]
0x0694BDC8: f85f41a9  ldp x24, x23, [sp, #0x10]
0x0694BDCC: fe67c4a8  ldp x30, x25, [sp], #0x40
0x0694BDD0: 80001fd6  br x4
0x0694BDD4: b6d32097  bl #0x3180cac

; RVA 0x694B430 | public void .ctor() { }
; bytes=136 sha256=f9373b7c54d40d660f2dfecffb1acecafa65013036c9ab3739dc489699d60729 status=arm64_complete_bound indexed_start=True
0x0694B430: fe0f1df8  str x30, [sp, #-0x30]!
0x0694B434: f65701a9  stp x22, x21, [sp, #0x10]
0x0694B438: f44f02a9  stp x20, x19, [sp, #0x20]
0x0694B43C: f59e00d0  adrp x21, #0x7d29000
0x0694B440: f66e00b0  adrp x22, #0x7728000
0x0694B444: f46e00b0  adrp x20, #0x7728000
0x0694B448: a8527139  ldrb w8, [x21, #0xc54]
0x0694B44C: d61a45f9  ldr x22, [x22, #0xa30]
0x0694B450: 941e45f9  ldr x20, [x20, #0xa38]
0x0694B454: f30300aa  mov x19, x0
0x0694B458: 28010037  tbnz w8, #0, #0x694b47c
0x0694B45C: e06e00b0  adrp x0, #0x7728000
0x0694B460: 001c45f9  ldr x0, [x0, #0xa38]
0x0694B464: 6dd52097  bl #0x3180a18
0x0694B468: e06e00b0  adrp x0, #0x7728000
0x0694B46C: 001845f9  ldr x0, [x0, #0xa30]
0x0694B470: 6ad52097  bl #0x3180a18
0x0694B474: 28008052  movz w8, #0x1
0x0694B478: a8523139  strb w8, [x21, #0xc54]
0x0694B47C: c00240f9  ldr x0, [x22]
0x0694B480: 08d62097  bl #0x3180ca0
0x0694B484: 810240f9  ldr x1, [x20]
0x0694B488: f40300aa  mov x20, x0
0x0694B48C: 6dd2a597  bl #0x52bfe40
0x0694B490: e00313aa  mov x0, x19
0x0694B494: 140c06f8  str x20, [x0, #0x60]!
0x0694B498: e10314aa  mov x1, x20
0x0694B49C: 4ad52097  bl #0x31809c4
0x0694B4A0: e00313aa  mov x0, x19
0x0694B4A4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0694B4A8: f65741a9  ldp x22, x21, [sp, #0x10]
0x0694B4AC: e1031faa  mov x1, xzr
0x0694B4B0: fe0743f8  ldr x30, [sp], #0x30
0x0694B4B4: 929efd17  b #0x68b2efc

; Generic instantiation from Il2CppDumper script.json | RVA 0x3E2F6B0 | Framework.Core.MVVM.ViewModel.ViewModelBase$$GetFailedPromise<object>
; native signature: strange_extensions_promise_api_IPromise_T__o* Framework_Core_MVVM_ViewModel_ViewModelBase__GetFailedPromise_object_ (Framework_Core_MVVM_ViewModel_ViewModelBase_o* __this, const MethodInfo_3E2F6B0* method);
; bytes=396 sha256=00323d3c0475a9855dd47f93aa9008d92ae5d10d4fb0b38a45917c3d17144f58 status=arm64_complete_bound indexed_start=True
0x03E2F6B0: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x03E2F6B4: f44f01a9  stp x20, x19, [sp, #0x10]
0x03E2F6B8: 281c40f9  ldr x8, [x1, #0x38]
0x03E2F6BC: f30301aa  mov x19, x1
0x03E2F6C0: 480200b5  cbnz x8, #0x3e2f708
0x03E2F6C4: e0c001f0  adrp x0, #0x764e000
0x03E2F6C8: 007443f9  ldr x0, [x0, #0x6e8]
0x03E2F6CC: d344cd97  bl #0x3180a18
0x03E2F6D0: e0c001f0  adrp x0, #0x764e000
0x03E2F6D4: 00f442f9  ldr x0, [x0, #0x5e8]
0x03E2F6D8: d044cd97  bl #0x3180a18
0x03E2F6DC: 00c20190  adrp x0, #0x766f000
0x03E2F6E0: 002441f9  ldr x0, [x0, #0x248]
0x03E2F6E4: cd44cd97  bl #0x3180a18
0x03E2F6E8: 60c20190  adrp x0, #0x767b000
0x03E2F6EC: 00ac45f9  ldr x0, [x0, #0xb58]
0x03E2F6F0: ca44cd97  bl #0x3180a18
0x03E2F6F4: 681e40f9  ldr x8, [x19, #0x38]
0x03E2F6F8: 880000b5  cbnz x8, #0x3e2f708
0x03E2F6FC: e00313aa  mov x0, x19
0x03E2F700: 5e9ccc97  bl #0x3156878
0x03E2F704: 681e40f9  ldr x8, [x19, #0x38]
0x03E2F708: 000140f9  ldr x0, [x8]
0x03E2F70C: 08d44439  ldrb w8, [x0, #0x135]
0x03E2F710: 48000037  tbnz w8, #0, #0x3e2f718
0x03E2F714: 429ccc97  bl #0x315681c
0x03E2F718: 6245cd97  bl #0x3180ca0
0x03E2F71C: 681e40f9  ldr x8, [x19, #0x38]
0x03E2F720: f30300aa  mov x19, x0
0x03E2F724: 010540f9  ldr x1, [x8, #8]
0x03E2F728: 49fd1494  bl #0x436ec4c
0x03E2F72C: e8c001f0  adrp x8, #0x764e000
0x03E2F730: 08f542f9  ldr x8, [x8, #0x5e8]
0x03E2F734: 69c20190  adrp x9, #0x767b000
0x03E2F738: 150140f9  ldr x21, [x8]
0x03E2F73C: 29ad45f9  ldr x9, [x9, #0xb58]
0x03E2F740: a81e40f9  ldr x8, [x21, #0x38]
0x03E2F744: 340140f9  ldr x20, [x9]
0x03E2F748: 880000b5  cbnz x8, #0x3e2f758
0x03E2F74C: e00315aa  mov x0, x21
0x03E2F750: 4a9ccc97  bl #0x3156878
0x03E2F754: a81e40f9  ldr x8, [x21, #0x38]
0x03E2F758: 000940f9  ldr x0, [x8, #0x10]
0x03E2F75C: 08d44439  ldrb w8, [x0, #0x135]
0x03E2F760: 48000037  tbnz w8, #0, #0x3e2f768
0x03E2F764: 2e9ccc97  bl #0x315681c
0x03E2F768: 08e040b9  ldr w8, [x0, #0xe0]
0x03E2F76C: 48000035  cbnz w8, #0x3e2f774
0x03E2F770: 0745cd97  bl #0x3180b8c
0x03E2F774: a81e40f9  ldr x8, [x21, #0x38]
0x03E2F778: 000940f9  ldr x0, [x8, #0x10]
0x03E2F77C: 08d44439  ldrb w8, [x0, #0x135]
0x03E2F780: 48000037  tbnz w8, #0, #0x3e2f788
0x03E2F784: 269ccc97  bl #0x315681c
0x03E2F788: 085c40f9  ldr x8, [x0, #0xb8]
0x03E2F78C: e00314aa  mov x0, x20
0x03E2F790: e2031faa  mov x2, xzr
0x03E2F794: 010140f9  ldr x1, [x8]
0x03E2F798: ae3fcd94  bl #0x717f650
0x03E2F79C: e8c001f0  adrp x8, #0x764e000
0x03E2F7A0: 087543f9  ldr x8, [x8, #0x6e8]
0x03E2F7A4: 000140f9  ldr x0, [x8]
0x03E2F7A8: 3e45cd97  bl #0x3180ca0
0x03E2F7AC: e10314aa  mov x1, x20
0x03E2F7B0: e2031faa  mov x2, xzr
0x03E2F7B4: f50300aa  mov x21, x0
0x03E2F7B8: aaf95e94  bl #0x55ede60
0x03E2F7BC: f30300b4  cbz x19, #0x3e2f838
0x03E2F7C0: 0ac20190  adrp x10, #0x766f000
0x03E2F7C4: 680240f9  ldr x8, [x19]
0x03E2F7C8: 4a2541f9  ldr x10, [x10, #0x248]
0x03E2F7CC: 095d4279  ldrh w9, [x8, #0x12e]
0x03E2F7D0: 410140f9  ldr x1, [x10]
0x03E2F7D4: 290100b4  cbz x9, #0x3e2f7f8
0x03E2F7D8: 0a5940f9  ldr x10, [x8, #0xb0]
0x03E2F7DC: 4a210091  add x10, x10, #8
0x03E2F7E0: 4b815ff8  ldur x11, [x10, #-8]
0x03E2F7E4: 7f0101eb  cmp x11, x1
0x03E2F7E8: 00010054  b.eq #0x3e2f808
0x03E2F7EC: 290500f1  subs x9, x9, #1
0x03E2F7F0: 4a410091  add x10, x10, #0x10
0x03E2F7F4: 61ffff54  b.ne #0x3e2f7e0
0x03E2F7F8: 82008052  movz w2, #0x4
0x03E2F7FC: e00313aa  mov x0, x19
0x03E2F800: c49ccc97  bl #0x3156b10
0x03E2F804: 05000014  b #0x3e2f818
0x03E2F808: 490140b9  ldr w9, [x10]
0x03E2F80C: 29110011  add w9, w9, #4
0x03E2F810: 08d1298b  add x8, x8, w9, sxtw #4
0x03E2F814: 00e10491  add x0, x8, #0x138
0x03E2F818: 080840a9  ldp x8, x2, [x0]
0x03E2F81C: e00313aa  mov x0, x19
0x03E2F820: e10315aa  mov x1, x21
0x03E2F824: 00013fd6  blr x8
0x03E2F828: e00313aa  mov x0, x19
0x03E2F82C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03E2F830: fe57c2a8  ldp x30, x21, [sp], #0x20
0x03E2F834: c0035fd6  ret
0x03E2F838: 1d45cd97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3E2F83C | Framework.Core.MVVM.ViewModel.ViewModelBase$$LoadAssetAsync<object>
; native signature: strange_extensions_promise_api_IPromise_T__o* Framework_Core_MVVM_ViewModel_ViewModelBase__LoadAssetAsync_object_ (Framework_Core_MVVM_ViewModel_ViewModelBase_o* __this, Framework_Core_Assets_IAsset_o* assetDefinition, const MethodInfo_3E2F83C* method);
; bytes=804 sha256=5c0234f7fc8819ada04bb3d8ce8d43597c771e6d900ab58cfae34a8f27bdacfc status=arm64_complete_bound indexed_start=True
0x03E2F83C: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x03E2F840: f65701a9  stp x22, x21, [sp, #0x10]
0x03E2F844: f44f02a9  stp x20, x19, [sp, #0x20]
0x03E2F848: 481c40f9  ldr x8, [x2, #0x38]
0x03E2F84C: f30302aa  mov x19, x2
0x03E2F850: f40301aa  mov x20, x1
0x03E2F854: f50300aa  mov x21, x0
0x03E2F858: c80100b5  cbnz x8, #0x3e2f890
0x03E2F85C: 00c20190  adrp x0, #0x766f000
0x03E2F860: 002041f9  ldr x0, [x0, #0x240]
0x03E2F864: 6d44cd97  bl #0x3180a18
0x03E2F868: 00c20190  adrp x0, #0x766f000
0x03E2F86C: 002441f9  ldr x0, [x0, #0x248]
0x03E2F870: 6a44cd97  bl #0x3180a18
0x03E2F874: 60c20190  adrp x0, #0x767b000
0x03E2F878: 00b045f9  ldr x0, [x0, #0xb60]
0x03E2F87C: 6744cd97  bl #0x3180a18
0x03E2F880: 681e40f9  ldr x8, [x19, #0x38]
0x03E2F884: 680000b5  cbnz x8, #0x3e2f890
0x03E2F888: e00313aa  mov x0, x19
0x03E2F88C: fb9bcc97  bl #0x3156878
0x03E2F890: e00315aa  mov x0, x21
0x03E2F894: e10314aa  mov x1, x20
0x03E2F898: e2031faa  mov x2, xzr
0x03E2F89C: e76fac94  bl #0x694b838
0x03E2F8A0: e0000036  tbz w0, #0, #0x3e2f8bc
0x03E2F8A4: 681e40f9  ldr x8, [x19, #0x38]
0x03E2F8A8: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03E2F8AC: f65741a9  ldp x22, x21, [sp, #0x10]
0x03E2F8B0: 010140f9  ldr x1, [x8]
0x03E2F8B4: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x03E2F8B8: 7effff17  b #0x3e2f6b0
0x03E2F8BC: b62240f9  ldr x22, [x21, #0x40]
0x03E2F8C0: f61400b4  cbz x22, #0x3e2fb5c
0x03E2F8C4: 691e40f9  ldr x9, [x19, #0x38]
0x03E2F8C8: c80240f9  ldr x8, [x22]
0x03E2F8CC: 370940f9  ldr x23, [x9, #0x10]
0x03E2F8D0: 095d4279  ldrh w9, [x8, #0x12e]
0x03E2F8D4: e11240f9  ldr x1, [x23, #0x20]
0x03E2F8D8: e2a24079  ldrh w2, [x23, #0x50]
0x03E2F8DC: 290100b4  cbz x9, #0x3e2f900
0x03E2F8E0: 0a5940f9  ldr x10, [x8, #0xb0]
0x03E2F8E4: 4a210091  add x10, x10, #8
0x03E2F8E8: 4b815ff8  ldur x11, [x10, #-8]
0x03E2F8EC: 7f0101eb  cmp x11, x1
0x03E2F8F0: e0000054  b.eq #0x3e2f90c
0x03E2F8F4: 290500f1  subs x9, x9, #1
0x03E2F8F8: 4a410091  add x10, x10, #0x10
0x03E2F8FC: 61ffff54  b.ne #0x3e2f8e8
0x03E2F900: e00316aa  mov x0, x22
0x03E2F904: 839ccc97  bl #0x3156b10
0x03E2F908: 05000014  b #0x3e2f91c
0x03E2F90C: 490140b9  ldr w9, [x10]
0x03E2F910: 2901020b  add w9, w9, w2
0x03E2F914: 08d1298b  add x8, x8, w9, sxtw #4
0x03E2F918: 00e10491  add x0, x8, #0x138
0x03E2F91C: 000440f9  ldr x0, [x0, #8]
0x03E2F920: e10317aa  mov x1, x23
0x03E2F924: 9944cd97  bl #0x3180b88
0x03E2F928: 080440f9  ldr x8, [x0, #8]
0x03E2F92C: e20300aa  mov x2, x0
0x03E2F930: e00316aa  mov x0, x22
0x03E2F934: e10314aa  mov x1, x20
0x03E2F938: 00013fd6  blr x8
0x03E2F93C: 681e40f9  ldr x8, [x19, #0x38]
0x03E2F940: f40300aa  mov x20, x0
0x03E2F944: 080d40f9  ldr x8, [x8, #0x18]
0x03E2F948: 09d54439  ldrb w9, [x8, #0x135]
0x03E2F94C: 89000037  tbnz w9, #0, #0x3e2f95c
0x03E2F950: e00308aa  mov x0, x8
0x03E2F954: b29bcc97  bl #0x315681c
0x03E2F958: e80300aa  mov x8, x0
0x03E2F95C: e00308aa  mov x0, x8
0x03E2F960: d044cd97  bl #0x3180ca0
0x03E2F964: 69c20190  adrp x9, #0x767b000
0x03E2F968: 681e40f9  ldr x8, [x19, #0x38]
0x03E2F96C: 29b145f9  ldr x9, [x9, #0xb60]
0x03E2F970: e10315aa  mov x1, x21
0x03E2F974: f60300aa  mov x22, x0
0x03E2F978: 031140f9  ldr x3, [x8, #0x20]
0x03E2F97C: 220140f9  ldr x2, [x9]
0x03E2F980: 15ca5394  bl #0x53221d4
0x03E2F984: d40e00b4  cbz x20, #0x3e2fb5c
0x03E2F988: 681e40f9  ldr x8, [x19, #0x38]
0x03E2F98C: 010540f9  ldr x1, [x8, #8]
0x03E2F990: 28d44439  ldrb w8, [x1, #0x135]
0x03E2F994: 88000037  tbnz w8, #0, #0x3e2f9a4
0x03E2F998: e00301aa  mov x0, x1
0x03E2F99C: a09bcc97  bl #0x315681c
0x03E2F9A0: e10300aa  mov x1, x0
0x03E2F9A4: 880240f9  ldr x8, [x20]
0x03E2F9A8: 095d4279  ldrh w9, [x8, #0x12e]
0x03E2F9AC: 290100b4  cbz x9, #0x3e2f9d0
0x03E2F9B0: 0a5940f9  ldr x10, [x8, #0xb0]
0x03E2F9B4: 4a210091  add x10, x10, #8
0x03E2F9B8: 4b815ff8  ldur x11, [x10, #-8]
0x03E2F9BC: 7f0101eb  cmp x11, x1
0x03E2F9C0: 00010054  b.eq #0x3e2f9e0
0x03E2F9C4: 290500f1  subs x9, x9, #1
0x03E2F9C8: 4a410091  add x10, x10, #0x10
0x03E2F9CC: 61ffff54  b.ne #0x3e2f9b8
0x03E2F9D0: e00314aa  mov x0, x20
0x03E2F9D4: e2031f2a  mov w2, wzr
0x03E2F9D8: 4e9ccc97  bl #0x3156b10
0x03E2F9DC: 04000014  b #0x3e2f9ec
0x03E2F9E0: 490180b9  ldrsw x9, [x10]
0x03E2F9E4: 0811098b  add x8, x8, x9, lsl #4
0x03E2F9E8: 00e10491  add x0, x8, #0x138
0x03E2F9EC: 080840a9  ldp x8, x2, [x0]
0x03E2F9F0: e00314aa  mov x0, x20
0x03E2F9F4: e10316aa  mov x1, x22
0x03E2F9F8: 00013fd6  blr x8
0x03E2F9FC: 681e40f9  ldr x8, [x19, #0x38]
0x03E2FA00: 001d40f9  ldr x0, [x8, #0x38]
0x03E2FA04: 08d44439  ldrb w8, [x0, #0x135]
0x03E2FA08: 48000037  tbnz w8, #0, #0x3e2fa10
0x03E2FA0C: 849bcc97  bl #0x315681c
0x03E2FA10: 08e040b9  ldr w8, [x0, #0xe0]
0x03E2FA14: 48000035  cbnz w8, #0x3e2fa1c
0x03E2FA18: 5d44cd97  bl #0x3180b8c
0x03E2FA1C: 681e40f9  ldr x8, [x19, #0x38]
0x03E2FA20: 001d40f9  ldr x0, [x8, #0x38]
0x03E2FA24: 08d44439  ldrb w8, [x0, #0x135]
0x03E2FA28: 48000037  tbnz w8, #0, #0x3e2fa30
0x03E2FA2C: 7c9bcc97  bl #0x315681c
0x03E2FA30: 085c40f9  ldr x8, [x0, #0xb8]
0x03E2FA34: 150540f9  ldr x21, [x8, #8]
0x03E2FA38: 550500b5  cbnz x21, #0x3e2fae0
0x03E2FA3C: 681e40f9  ldr x8, [x19, #0x38]
0x03E2FA40: 001d40f9  ldr x0, [x8, #0x38]
0x03E2FA44: 08d44439  ldrb w8, [x0, #0x135]
0x03E2FA48: 48000037  tbnz w8, #0, #0x3e2fa50
0x03E2FA4C: 749bcc97  bl #0x315681c
0x03E2FA50: 08e040b9  ldr w8, [x0, #0xe0]
0x03E2FA54: 48000035  cbnz w8, #0x3e2fa5c
0x03E2FA58: 4d44cd97  bl #0x3180b8c
0x03E2FA5C: 681e40f9  ldr x8, [x19, #0x38]
0x03E2FA60: 001d40f9  ldr x0, [x8, #0x38]
0x03E2FA64: 08d44439  ldrb w8, [x0, #0x135]
0x03E2FA68: 48000037  tbnz w8, #0, #0x3e2fa70
0x03E2FA6C: 6c9bcc97  bl #0x315681c
0x03E2FA70: 09c20190  adrp x9, #0x766f000
0x03E2FA74: 085c40f9  ldr x8, [x0, #0xb8]
0x03E2FA78: 292141f9  ldr x9, [x9, #0x240]
0x03E2FA7C: 160140f9  ldr x22, [x8]
0x03E2FA80: 200140f9  ldr x0, [x9]
0x03E2FA84: 8744cd97  bl #0x3180ca0
0x03E2FA88: 681e40f9  ldr x8, [x19, #0x38]
0x03E2FA8C: e10316aa  mov x1, x22
0x03E2FA90: e3031faa  mov x3, xzr
0x03E2FA94: f50300aa  mov x21, x0
0x03E2FA98: 022140f9  ldr x2, [x8, #0x40]
0x03E2FA9C: cec95394  bl #0x53221d4
0x03E2FAA0: 681e40f9  ldr x8, [x19, #0x38]
0x03E2FAA4: 001d40f9  ldr x0, [x8, #0x38]
0x03E2FAA8: 08d44439  ldrb w8, [x0, #0x135]
0x03E2FAAC: 48000037  tbnz w8, #0, #0x3e2fab4
0x03E2FAB0: 5b9bcc97  bl #0x315681c
0x03E2FAB4: 085c40f9  ldr x8, [x0, #0xb8]
0x03E2FAB8: 150500f9  str x21, [x8, #8]
0x03E2FABC: 681e40f9  ldr x8, [x19, #0x38]
0x03E2FAC0: 001d40f9  ldr x0, [x8, #0x38]
0x03E2FAC4: 08d44439  ldrb w8, [x0, #0x135]
0x03E2FAC8: 48000037  tbnz w8, #0, #0x3e2fad0
0x03E2FACC: 549bcc97  bl #0x315681c
0x03E2FAD0: 085c40f9  ldr x8, [x0, #0xb8]
0x03E2FAD4: e10315aa  mov x1, x21
0x03E2FAD8: 00210091  add x0, x8, #8
0x03E2FADC: ba43cd97  bl #0x31809c4
0x03E2FAE0: 0ac20190  adrp x10, #0x766f000
0x03E2FAE4: 880240f9  ldr x8, [x20]
0x03E2FAE8: 4a2541f9  ldr x10, [x10, #0x248]
0x03E2FAEC: 095d4279  ldrh w9, [x8, #0x12e]
0x03E2FAF0: 410140f9  ldr x1, [x10]
0x03E2FAF4: 290100b4  cbz x9, #0x3e2fb18
0x03E2FAF8: 0a5940f9  ldr x10, [x8, #0xb0]
0x03E2FAFC: 4a210091  add x10, x10, #8
0x03E2FB00: 4b815ff8  ldur x11, [x10, #-8]
0x03E2FB04: 7f0101eb  cmp x11, x1
0x03E2FB08: 00010054  b.eq #0x3e2fb28
0x03E2FB0C: 290500f1  subs x9, x9, #1
0x03E2FB10: 4a410091  add x10, x10, #0x10
0x03E2FB14: 61ffff54  b.ne #0x3e2fb00
0x03E2FB18: 22008052  movz w2, #0x1
0x03E2FB1C: e00314aa  mov x0, x20
0x03E2FB20: fc9bcc97  bl #0x3156b10
0x03E2FB24: 05000014  b #0x3e2fb38
0x03E2FB28: 490140b9  ldr w9, [x10]
0x03E2FB2C: 29050011  add w9, w9, #1
0x03E2FB30: 08d1298b  add x8, x8, w9, sxtw #4
0x03E2FB34: 00e10491  add x0, x8, #0x138
0x03E2FB38: 080840a9  ldp x8, x2, [x0]
0x03E2FB3C: e00314aa  mov x0, x20
0x03E2FB40: e10315aa  mov x1, x21
0x03E2FB44: 00013fd6  blr x8
0x03E2FB48: e00314aa  mov x0, x20
0x03E2FB4C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03E2FB50: f65741a9  ldp x22, x21, [sp, #0x10]
0x03E2FB54: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x03E2FB58: c0035fd6  ret
0x03E2FB5C: 5444cd97  bl #0x3180cac

