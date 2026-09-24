; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25863 Merger.MergeBoard.Logic.BoardOperations.BoardCollectToolFragmentOperationDataCreator
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A8A5B4 | public override string get_OperationType() { }
; bytes=64 sha256=eca0e36ac22216816ce7b8869a22042c963a351eb68f67d9ba34bd4e52c24e7f status=arm64_complete_bound indexed_start=True
0x06A8A5B4: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A8A5B8: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A8A5BC: 13950090  adrp x19, #0x7d2a000
0x06A8A5C0: 945f0090  adrp x20, #0x767a000
0x06A8A5C4: 68da5e39  ldrb w8, [x19, #0x7b6]
0x06A8A5C8: 944245f9  ldr x20, [x20, #0xa80]
0x06A8A5CC: c8000037  tbnz w8, #0, #0x6a8a5e4
0x06A8A5D0: 805f0090  adrp x0, #0x767a000
0x06A8A5D4: 004045f9  ldr x0, [x0, #0xa80]
0x06A8A5D8: 10d91b97  bl #0x3180a18
0x06A8A5DC: 28008052  movz w8, #0x1
0x06A8A5E0: 68da1e39  strb w8, [x19, #0x7b6]
0x06A8A5E4: 800240f9  ldr x0, [x20]
0x06A8A5E8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A8A5EC: fe0742f8  ldr x30, [sp], #0x20
0x06A8A5F0: c0035fd6  ret

; RVA 0x6A8A5F4 | public override List<MergeBoardItemNotificationData> CreateOperationData(TickArgs tickArgs) { }
; bytes=1008 sha256=316963b7c298851430ed3f7947a07390453d43330626123c5f832875b2665dc2 status=arm64_complete_bound indexed_start=True
0x06A8A5F4: fe0f1bf8  str x30, [sp, #-0x50]!
0x06A8A5F8: fa6701a9  stp x26, x25, [sp, #0x10]
0x06A8A5FC: f85f02a9  stp x24, x23, [sp, #0x20]
0x06A8A600: f65703a9  stp x22, x21, [sp, #0x30]
0x06A8A604: f44f04a9  stp x20, x19, [sp, #0x40]
0x06A8A608: 15950090  adrp x21, #0x7d2a000
0x06A8A60C: a8de5e39  ldrb w8, [x21, #0x7b7]
0x06A8A610: f40301aa  mov x20, x1
0x06A8A614: f30300aa  mov x19, x0
0x06A8A618: a8020037  tbnz w8, #0, #0x6a8a66c
0x06A8A61C: 206500d0  adrp x0, #0x7730000
0x06A8A620: 005842f9  ldr x0, [x0, #0x4b0]
0x06A8A624: fdd81b97  bl #0x3180a18
0x06A8A628: 205e0090  adrp x0, #0x764e000
0x06A8A62C: 006444f9  ldr x0, [x0, #0x8c8]
0x06A8A630: fad81b97  bl #0x3180a18
0x06A8A634: 206500b0  adrp x0, #0x772f000
0x06A8A638: 009c42f9  ldr x0, [x0, #0x538]
0x06A8A63C: f7d81b97  bl #0x3180a18
0x06A8A640: 206500b0  adrp x0, #0x772f000
0x06A8A644: 00a442f9  ldr x0, [x0, #0x548]
0x06A8A648: f4d81b97  bl #0x3180a18
0x06A8A64C: 205e0090  adrp x0, #0x764e000
0x06A8A650: 007044f9  ldr x0, [x0, #0x8e0]
0x06A8A654: f1d81b97  bl #0x3180a18
0x06A8A658: 206500b0  adrp x0, #0x772f000
0x06A8A65C: 00b042f9  ldr x0, [x0, #0x560]
0x06A8A660: eed81b97  bl #0x3180a18
0x06A8A664: 28008052  movz w8, #0x1
0x06A8A668: a8de1e39  strb w8, [x21, #0x7b7]
0x06A8A66C: d41500b4  cbz x20, #0x6a8a924
0x06A8A670: 286500b0  adrp x8, #0x772f000
0x06A8A674: 08b142f9  ldr x8, [x8, #0x560]
0x06A8A678: e00314aa  mov x0, x20
0x06A8A67C: 010140f9  ldr x1, [x8]
0x06A8A680: 60e74c97  bl #0x3dc4400
0x06A8A684: 001500b4  cbz x0, #0x6a8a924
0x06A8A688: 2a6500b0  adrp x10, #0x772f000
0x06A8A68C: 080040f9  ldr x8, [x0]
0x06A8A690: 4a9d42f9  ldr x10, [x10, #0x538]
0x06A8A694: f40300aa  mov x20, x0
0x06A8A698: 095d4279  ldrh w9, [x8, #0x12e]
0x06A8A69C: 410140f9  ldr x1, [x10]
0x06A8A6A0: 290100b4  cbz x9, #0x6a8a6c4
0x06A8A6A4: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A8A6A8: 4a210091  add x10, x10, #8
0x06A8A6AC: 4b815ff8  ldur x11, [x10, #-8]
0x06A8A6B0: 7f0101eb  cmp x11, x1
0x06A8A6B4: 00010054  b.eq #0x6a8a6d4
0x06A8A6B8: 290500f1  subs x9, x9, #1
0x06A8A6BC: 4a410091  add x10, x10, #0x10
0x06A8A6C0: 61ffff54  b.ne #0x6a8a6ac
0x06A8A6C4: e00314aa  mov x0, x20
0x06A8A6C8: e2031f2a  mov w2, wzr
0x06A8A6CC: 11311b97  bl #0x3156b10
0x06A8A6D0: 04000014  b #0x6a8a6e0
0x06A8A6D4: 490180b9  ldrsw x9, [x10]
0x06A8A6D8: 0811098b  add x8, x8, x9, lsl #4
0x06A8A6DC: 00e10491  add x0, x8, #0x138
0x06A8A6E0: 080440a9  ldp x8, x1, [x0]
0x06A8A6E4: 385e0090  adrp x24, #0x764e000
0x06A8A6E8: 376500d0  adrp x23, #0x7730000
0x06A8A6EC: 186744f9  ldr x24, [x24, #0x8c8]
0x06A8A6F0: f75a42f9  ldr x23, [x23, #0x4b0]
0x06A8A6F4: e00314aa  mov x0, x20
0x06A8A6F8: 00013fd6  blr x8
0x06A8A6FC: f40300aa  mov x20, x0
0x06A8A700: 401100b4  cbz x0, #0x6a8a928
0x06A8A704: 395e0090  adrp x25, #0x764e000
0x06A8A708: 3a6500b0  adrp x26, #0x772f000
0x06A8A70C: 397344f9  ldr x25, [x25, #0x8e0]
0x06A8A710: 5aa742f9  ldr x26, [x26, #0x548]
0x06A8A714: 880240f9  ldr x8, [x20]
0x06A8A718: 210340f9  ldr x1, [x25]
0x06A8A71C: 095d4279  ldrh w9, [x8, #0x12e]
0x06A8A720: 290100b4  cbz x9, #0x6a8a744
0x06A8A724: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A8A728: 4a210091  add x10, x10, #8
0x06A8A72C: 4b815ff8  ldur x11, [x10, #-8]
0x06A8A730: 7f0101eb  cmp x11, x1
0x06A8A734: 00010054  b.eq #0x6a8a754
0x06A8A738: 290500f1  subs x9, x9, #1
0x06A8A73C: 4a410091  add x10, x10, #0x10
0x06A8A740: 61ffff54  b.ne #0x6a8a72c
0x06A8A744: e00314aa  mov x0, x20
0x06A8A748: e2031f2a  mov w2, wzr
0x06A8A74C: f1301b97  bl #0x3156b10
0x06A8A750: 04000014  b #0x6a8a760
0x06A8A754: 490180b9  ldrsw x9, [x10]
0x06A8A758: 0811098b  add x8, x8, x9, lsl #4
0x06A8A75C: 00e10491  add x0, x8, #0x138
0x06A8A760: 080440a9  ldp x8, x1, [x0]
0x06A8A764: e00314aa  mov x0, x20
0x06A8A768: 00013fd6  blr x8
0x06A8A76C: a0060036  tbz w0, #0, #0x6a8a840
0x06A8A770: 880240f9  ldr x8, [x20]
0x06A8A774: 410340f9  ldr x1, [x26]
0x06A8A778: 095d4279  ldrh w9, [x8, #0x12e]
0x06A8A77C: 290100b4  cbz x9, #0x6a8a7a0
0x06A8A780: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A8A784: 4a210091  add x10, x10, #8
0x06A8A788: 4b815ff8  ldur x11, [x10, #-8]
0x06A8A78C: 7f0101eb  cmp x11, x1
0x06A8A790: 00010054  b.eq #0x6a8a7b0
0x06A8A794: 290500f1  subs x9, x9, #1
0x06A8A798: 4a410091  add x10, x10, #0x10
0x06A8A79C: 61ffff54  b.ne #0x6a8a788
0x06A8A7A0: e00314aa  mov x0, x20
0x06A8A7A4: e2031f2a  mov w2, wzr
0x06A8A7A8: da301b97  bl #0x3156b10
0x06A8A7AC: 04000014  b #0x6a8a7bc
0x06A8A7B0: 490180b9  ldrsw x9, [x10]
0x06A8A7B4: 0811098b  add x8, x8, x9, lsl #4
0x06A8A7B8: 00e10491  add x0, x8, #0x138
0x06A8A7BC: 080440a9  ldp x8, x1, [x0]
0x06A8A7C0: e00314aa  mov x0, x20
0x06A8A7C4: 00013fd6  blr x8
0x06A8A7C8: a00a00b4  cbz x0, #0x6a8a91c
0x06A8A7CC: 750a40f9  ldr x21, [x19, #0x10]
0x06A8A7D0: 950a00b4  cbz x21, #0x6a8a920
0x06A8A7D4: a80240f9  ldr x8, [x21]
0x06A8A7D8: 160840f9  ldr x22, [x0, #0x10]
0x06A8A7DC: e10240f9  ldr x1, [x23]
0x06A8A7E0: 095d4279  ldrh w9, [x8, #0x12e]
0x06A8A7E4: 290100b4  cbz x9, #0x6a8a808
0x06A8A7E8: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A8A7EC: 4a210091  add x10, x10, #8
0x06A8A7F0: 4b815ff8  ldur x11, [x10, #-8]
0x06A8A7F4: 7f0101eb  cmp x11, x1
0x06A8A7F8: 00010054  b.eq #0x6a8a818
0x06A8A7FC: 290500f1  subs x9, x9, #1
0x06A8A800: 4a410091  add x10, x10, #0x10
0x06A8A804: 61ffff54  b.ne #0x6a8a7f0
0x06A8A808: 22008052  movz w2, #0x1
0x06A8A80C: e00315aa  mov x0, x21
0x06A8A810: c0301b97  bl #0x3156b10
0x06A8A814: 05000014  b #0x6a8a828
0x06A8A818: 490140b9  ldr w9, [x10]
0x06A8A81C: 29050011  add w9, w9, #1
0x06A8A820: 08d1298b  add x8, x8, w9, sxtw #4
0x06A8A824: 00e10491  add x0, x8, #0x138
0x06A8A828: 080c40a9  ldp x8, x3, [x0]
0x06A8A82C: e00315aa  mov x0, x21
0x06A8A830: e10316aa  mov x1, x22
0x06A8A834: e2031faa  mov x2, xzr
0x06A8A838: 00013fd6  blr x8
0x06A8A83C: b6ffff17  b #0x6a8a714
0x06A8A840: f5031faa  mov x21, xzr
0x06A8A844: f40200b4  cbz x20, #0x6a8a8a0
0x06A8A848: 880240f9  ldr x8, [x20]
0x06A8A84C: 010340f9  ldr x1, [x24]
0x06A8A850: 095d4279  ldrh w9, [x8, #0x12e]
0x06A8A854: 290100b4  cbz x9, #0x6a8a878
0x06A8A858: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A8A85C: 4a210091  add x10, x10, #8
0x06A8A860: 4b815ff8  ldur x11, [x10, #-8]
0x06A8A864: 7f0101eb  cmp x11, x1
0x06A8A868: 00010054  b.eq #0x6a8a888
0x06A8A86C: 290500f1  subs x9, x9, #1
0x06A8A870: 4a410091  add x10, x10, #0x10
0x06A8A874: 61ffff54  b.ne #0x6a8a860
0x06A8A878: e00314aa  mov x0, x20
0x06A8A87C: e2031f2a  mov w2, wzr
0x06A8A880: a4301b97  bl #0x3156b10
0x06A8A884: 04000014  b #0x6a8a894
0x06A8A888: 490180b9  ldrsw x9, [x10]
0x06A8A88C: 0811098b  add x8, x8, x9, lsl #4
0x06A8A890: 00e10491  add x0, x8, #0x138
0x06A8A894: 080440a9  ldp x8, x1, [x0]
0x06A8A898: e00314aa  mov x0, x20
0x06A8A89C: 00013fd6  blr x8
0x06A8A8A0: 750400b5  cbnz x21, #0x6a8a92c
0x06A8A8A4: 730a40f9  ldr x19, [x19, #0x10]
0x06A8A8A8: f30300b4  cbz x19, #0x6a8a924
0x06A8A8AC: 680240f9  ldr x8, [x19]
0x06A8A8B0: e10240f9  ldr x1, [x23]
0x06A8A8B4: 095d4279  ldrh w9, [x8, #0x12e]
0x06A8A8B8: 290100b4  cbz x9, #0x6a8a8dc
0x06A8A8BC: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A8A8C0: 4a210091  add x10, x10, #8
0x06A8A8C4: 4b815ff8  ldur x11, [x10, #-8]
0x06A8A8C8: 7f0101eb  cmp x11, x1
0x06A8A8CC: 00010054  b.eq #0x6a8a8ec
0x06A8A8D0: 290500f1  subs x9, x9, #1
0x06A8A8D4: 4a410091  add x10, x10, #0x10
0x06A8A8D8: 61ffff54  b.ne #0x6a8a8c4
0x06A8A8DC: 82008052  movz w2, #0x4
0x06A8A8E0: e00313aa  mov x0, x19
0x06A8A8E4: 8b301b97  bl #0x3156b10
0x06A8A8E8: 05000014  b #0x6a8a8fc
0x06A8A8EC: 490140b9  ldr w9, [x10]
0x06A8A8F0: 29110011  add w9, w9, #4
0x06A8A8F4: 08d1298b  add x8, x8, w9, sxtw #4
0x06A8A8F8: 00e10491  add x0, x8, #0x138
0x06A8A8FC: 020440a9  ldp x2, x1, [x0]
0x06A8A900: e00313aa  mov x0, x19
0x06A8A904: f44f44a9  ldp x20, x19, [sp, #0x40]
0x06A8A908: f65743a9  ldp x22, x21, [sp, #0x30]
0x06A8A90C: f85f42a9  ldp x24, x23, [sp, #0x20]
0x06A8A910: fa6741a9  ldp x26, x25, [sp, #0x10]
0x06A8A914: fe0745f8  ldr x30, [sp], #0x50
0x06A8A918: 40001fd6  br x2
0x06A8A91C: e4d81b97  bl #0x3180cac
0x06A8A920: e3d81b97  bl #0x3180cac
0x06A8A924: e2d81b97  bl #0x3180cac
0x06A8A928: e1d81b97  bl #0x3180cac
0x06A8A92C: e00315aa  mov x0, x21
0x06A8A930: ddd81b97  bl #0x3180ca4
0x06A8A934: 05000014  b #0x6a8a948
0x06A8A938: 04000014  b #0x6a8a948
0x06A8A93C: 03000014  b #0x6a8a948
0x06A8A940: 02000014  b #0x6a8a948
0x06A8A944: 01000014  b #0x6a8a948
0x06A8A948: 3f040071  cmp w1, #1
0x06A8A94C: a1000054  b.ne #0x6a8a960
0x06A8A950: f00f1d94  bl #0x71ce910
0x06A8A954: 150040f9  ldr x21, [x0]
0x06A8A958: f20f1d94  bl #0x71ce920
0x06A8A95C: baffff17  b #0x6a8a844
0x06A8A960: f30300aa  mov x19, x0
0x06A8A964: f5031faa  mov x21, xzr
0x06A8A968: 02000014  b #0x6a8a970
0x06A8A96C: f30300aa  mov x19, x0
0x06A8A970: f40200b4  cbz x20, #0x6a8a9cc
0x06A8A974: 880240f9  ldr x8, [x20]
0x06A8A978: 010340f9  ldr x1, [x24]
0x06A8A97C: 095d4279  ldrh w9, [x8, #0x12e]
0x06A8A980: 290100b4  cbz x9, #0x6a8a9a4
0x06A8A984: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A8A988: 4a210091  add x10, x10, #8
0x06A8A98C: 4b815ff8  ldur x11, [x10, #-8]
0x06A8A990: 7f0101eb  cmp x11, x1
0x06A8A994: 00010054  b.eq #0x6a8a9b4
0x06A8A998: 290500f1  subs x9, x9, #1
0x06A8A99C: 4a410091  add x10, x10, #0x10
0x06A8A9A0: 61ffff54  b.ne #0x6a8a98c
0x06A8A9A4: e00314aa  mov x0, x20
0x06A8A9A8: e2031f2a  mov w2, wzr
0x06A8A9AC: 59301b97  bl #0x3156b10
0x06A8A9B0: 04000014  b #0x6a8a9c0
0x06A8A9B4: 490180b9  ldrsw x9, [x10]
0x06A8A9B8: 0811098b  add x8, x8, x9, lsl #4
0x06A8A9BC: 00e10491  add x0, x8, #0x138
0x06A8A9C0: 080440a9  ldp x8, x1, [x0]
0x06A8A9C4: e00314aa  mov x0, x20
0x06A8A9C8: 00013fd6  blr x8
0x06A8A9CC: 750000b5  cbnz x21, #0x6a8a9d8
0x06A8A9D0: e00313aa  mov x0, x19
0x06A8A9D4: e16b1f97  bl #0x3265958
0x06A8A9D8: e00315aa  mov x0, x21
0x06A8A9DC: b2d81b97  bl #0x3180ca4
0x06A8A9E0: cdfa0d97  bl #0x2e09514

; RVA 0x6A8A9E4 | public void .ctor() { }
; bytes=8 sha256=b38c71ae84725ef766f64071e62b79f8388b617ca6c0c6c42a5260fc4a295b88 status=arm64_complete_bound indexed_start=True
0x06A8A9E4: e1031faa  mov x1, xzr
0x06A8A9E8: 053fb117  b #0x56da5fc

