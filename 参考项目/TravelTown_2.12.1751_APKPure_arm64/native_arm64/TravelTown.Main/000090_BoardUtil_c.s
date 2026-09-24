; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 90 .BoardUtil.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x5FE84A0 | private static void .cctor() { }
; bytes=104 sha256=73ce38fc0f73d46c274894f2500e36379b2783c18d78275cd7daaea5fef10296 status=arm64_complete_bound indexed_start=True
0x05FE84A0: fe0f1ef8  str x30, [sp, #-0x20]!
0x05FE84A4: f44f01a9  stp x20, x19, [sp, #0x10]
0x05FE84A8: d3e900f0  adrp x19, #0x7d23000
0x05FE84AC: 34b700b0  adrp x20, #0x76cd000
0x05FE84B0: 68725839  ldrb w8, [x19, #0x61c]
0x05FE84B4: 94a643f9  ldr x20, [x20, #0x748]
0x05FE84B8: c8000037  tbnz w8, #0, #0x5fe84d0
0x05FE84BC: 20b700b0  adrp x0, #0x76cd000
0x05FE84C0: 00a443f9  ldr x0, [x0, #0x748]
0x05FE84C4: 55614697  bl #0x3180a18
0x05FE84C8: 28008052  movz w8, #0x1
0x05FE84CC: 68721839  strb w8, [x19, #0x61c]
0x05FE84D0: 800240f9  ldr x0, [x20]
0x05FE84D4: f3614697  bl #0x3180ca0
0x05FE84D8: e1031faa  mov x1, xzr
0x05FE84DC: f30300aa  mov x19, x0
0x05FE84E0: 47c8db97  bl #0x56da5fc
0x05FE84E4: 880240f9  ldr x8, [x20]
0x05FE84E8: e10313aa  mov x1, x19
0x05FE84EC: 085d40f9  ldr x8, [x8, #0xb8]
0x05FE84F0: 130100f9  str x19, [x8]
0x05FE84F4: 880240f9  ldr x8, [x20]
0x05FE84F8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x05FE84FC: 005d40f9  ldr x0, [x8, #0xb8]
0x05FE8500: fe0742f8  ldr x30, [sp], #0x20
0x05FE8504: 30614617  b #0x31809c4

; RVA 0x5FE8508 | public void .ctor() { }
; bytes=8 sha256=b24c8ae9b0fa15c56afc61651cdec56fc719162fa9e0862f9df62cce4fe1657a status=arm64_complete_bound indexed_start=True
0x05FE8508: e1031faa  mov x1, xzr
0x05FE850C: 3cc8db17  b #0x56da5fc

; RVA 0x5FE8510 | internal bool <AnyItemsCanBeProduced>b__0_0(ITimeCycleComponent component) { }
; bytes=172 sha256=013b26007af67ab6c4b9f5e9c672d57d4da02c49d045b6cd8a8ba7dcbba4fbc7 status=arm64_complete_bound indexed_start=True
0x05FE8510: fe0f1ef8  str x30, [sp, #-0x20]!
0x05FE8514: f44f01a9  stp x20, x19, [sp, #0x10]
0x05FE8518: d4e900f0  adrp x20, #0x7d23000
0x05FE851C: 88765839  ldrb w8, [x20, #0x61d]
0x05FE8520: f30301aa  mov x19, x1
0x05FE8524: c8000037  tbnz w8, #0, #0x5fe853c
0x05FE8528: 80b400d0  adrp x0, #0x767a000
0x05FE852C: 000043f9  ldr x0, [x0, #0x600]
0x05FE8530: 3a614697  bl #0x3180a18
0x05FE8534: 28008052  movz w8, #0x1
0x05FE8538: 88761839  strb w8, [x20, #0x61d]
0x05FE853C: f30300b4  cbz x19, #0x5fe85b8
0x05FE8540: 8ab400d0  adrp x10, #0x767a000
0x05FE8544: 680240f9  ldr x8, [x19]
0x05FE8548: 4a0143f9  ldr x10, [x10, #0x600]
0x05FE854C: 095d4279  ldrh w9, [x8, #0x12e]
0x05FE8550: 410140f9  ldr x1, [x10]
0x05FE8554: 290100b4  cbz x9, #0x5fe8578
0x05FE8558: 0a5940f9  ldr x10, [x8, #0xb0]
0x05FE855C: 4a210091  add x10, x10, #8
0x05FE8560: 4b815ff8  ldur x11, [x10, #-8]
0x05FE8564: 7f0101eb  cmp x11, x1
0x05FE8568: 00010054  b.eq #0x5fe8588
0x05FE856C: 290500f1  subs x9, x9, #1
0x05FE8570: 4a410091  add x10, x10, #0x10
0x05FE8574: 61ffff54  b.ne #0x5fe8560
0x05FE8578: 42018052  movz w2, #0xa
0x05FE857C: e00313aa  mov x0, x19
0x05FE8580: 64b94597  bl #0x3156b10
0x05FE8584: 05000014  b #0x5fe8598
0x05FE8588: 490140b9  ldr w9, [x10]
0x05FE858C: 29290011  add w9, w9, #0xa
0x05FE8590: 08d1298b  add x8, x8, w9, sxtw #4
0x05FE8594: 00e10491  add x0, x8, #0x138
0x05FE8598: 080440a9  ldp x8, x1, [x0]
0x05FE859C: e00313aa  mov x0, x19
0x05FE85A0: 00013fd6  blr x8
0x05FE85A4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x05FE85A8: 1f000071  cmp w0, #0
0x05FE85AC: e0d79f1a  cset w0, gt
0x05FE85B0: fe0742f8  ldr x30, [sp], #0x20
0x05FE85B4: c0035fd6  ret
0x05FE85B8: bd614697  bl #0x3180cac

; RVA 0x5FE85BC | internal bool <GetProducerThatCanProduce>b__1_0(ITimeCycleComponent component) { }
; bytes=172 sha256=a50eb6cbd58d4dfcafb09ad5ca29c50d21ed02abc31be31cf3514d9647dbced8 status=arm64_complete_bound indexed_start=True
0x05FE85BC: fe0f1ef8  str x30, [sp, #-0x20]!
0x05FE85C0: f44f01a9  stp x20, x19, [sp, #0x10]
0x05FE85C4: d4e900f0  adrp x20, #0x7d23000
0x05FE85C8: 887a5839  ldrb w8, [x20, #0x61e]
0x05FE85CC: f30301aa  mov x19, x1
0x05FE85D0: c8000037  tbnz w8, #0, #0x5fe85e8
0x05FE85D4: 80b400d0  adrp x0, #0x767a000
0x05FE85D8: 000043f9  ldr x0, [x0, #0x600]
0x05FE85DC: 0f614697  bl #0x3180a18
0x05FE85E0: 28008052  movz w8, #0x1
0x05FE85E4: 887a1839  strb w8, [x20, #0x61e]
0x05FE85E8: f30300b4  cbz x19, #0x5fe8664
0x05FE85EC: 8ab400d0  adrp x10, #0x767a000
0x05FE85F0: 680240f9  ldr x8, [x19]
0x05FE85F4: 4a0143f9  ldr x10, [x10, #0x600]
0x05FE85F8: 095d4279  ldrh w9, [x8, #0x12e]
0x05FE85FC: 410140f9  ldr x1, [x10]
0x05FE8600: 290100b4  cbz x9, #0x5fe8624
0x05FE8604: 0a5940f9  ldr x10, [x8, #0xb0]
0x05FE8608: 4a210091  add x10, x10, #8
0x05FE860C: 4b815ff8  ldur x11, [x10, #-8]
0x05FE8610: 7f0101eb  cmp x11, x1
0x05FE8614: 00010054  b.eq #0x5fe8634
0x05FE8618: 290500f1  subs x9, x9, #1
0x05FE861C: 4a410091  add x10, x10, #0x10
0x05FE8620: 61ffff54  b.ne #0x5fe860c
0x05FE8624: 42018052  movz w2, #0xa
0x05FE8628: e00313aa  mov x0, x19
0x05FE862C: 39b94597  bl #0x3156b10
0x05FE8630: 05000014  b #0x5fe8644
0x05FE8634: 490140b9  ldr w9, [x10]
0x05FE8638: 29290011  add w9, w9, #0xa
0x05FE863C: 08d1298b  add x8, x8, w9, sxtw #4
0x05FE8640: 00e10491  add x0, x8, #0x138
0x05FE8644: 080440a9  ldp x8, x1, [x0]
0x05FE8648: e00313aa  mov x0, x19
0x05FE864C: 00013fd6  blr x8
0x05FE8650: f44f41a9  ldp x20, x19, [sp, #0x10]
0x05FE8654: 1f000071  cmp w0, #0
0x05FE8658: e0d79f1a  cset w0, gt
0x05FE865C: fe0742f8  ldr x30, [sp], #0x20
0x05FE8660: c0035fd6  ret
0x05FE8664: 92614697  bl #0x3180cac

; RVA 0x5FE8668 | internal string <HasUnmergedProducersOnBoard>b__2_0(ITimeCycleComponent producer) { }
; bytes=192 sha256=af939d866647a7da85bb3321e0510b48245c8bab4b79bf0093d299063d5f3dce status=arm64_complete_bound indexed_start=True
0x05FE8668: fe0f1ef8  str x30, [sp, #-0x20]!
0x05FE866C: f44f01a9  stp x20, x19, [sp, #0x10]
0x05FE8670: d4e900f0  adrp x20, #0x7d23000
0x05FE8674: 887e5839  ldrb w8, [x20, #0x61f]
0x05FE8678: f30301aa  mov x19, x1
0x05FE867C: c8000037  tbnz w8, #0, #0x5fe8694
0x05FE8680: a0b400d0  adrp x0, #0x767e000
0x05FE8684: 00d442f9  ldr x0, [x0, #0x5a8]
0x05FE8688: e4604697  bl #0x3180a18
0x05FE868C: 28008052  movz w8, #0x1
0x05FE8690: 887e1839  strb w8, [x20, #0x61f]
0x05FE8694: 930400b4  cbz x19, #0x5fe8724
0x05FE8698: a9b400d0  adrp x9, #0x767e000
0x05FE869C: 29d542f9  ldr x9, [x9, #0x5a8]
0x05FE86A0: 680240f9  ldr x8, [x19]
0x05FE86A4: 340140f9  ldr x20, [x9]
0x05FE86A8: 095d4279  ldrh w9, [x8, #0x12e]
0x05FE86AC: 811240f9  ldr x1, [x20, #0x20]
0x05FE86B0: 82a24079  ldrh w2, [x20, #0x50]
0x05FE86B4: 290100b4  cbz x9, #0x5fe86d8
0x05FE86B8: 0a5940f9  ldr x10, [x8, #0xb0]
0x05FE86BC: 4a210091  add x10, x10, #8
0x05FE86C0: 4b815ff8  ldur x11, [x10, #-8]
0x05FE86C4: 7f0101eb  cmp x11, x1
0x05FE86C8: e0000054  b.eq #0x5fe86e4
0x05FE86CC: 290500f1  subs x9, x9, #1
0x05FE86D0: 4a410091  add x10, x10, #0x10
0x05FE86D4: 61ffff54  b.ne #0x5fe86c0
0x05FE86D8: e00313aa  mov x0, x19
0x05FE86DC: 0db94597  bl #0x3156b10
0x05FE86E0: 05000014  b #0x5fe86f4
0x05FE86E4: 490140b9  ldr w9, [x10]
0x05FE86E8: 2901020b  add w9, w9, w2
0x05FE86EC: 08d1298b  add x8, x8, w9, sxtw #4
0x05FE86F0: 00e10491  add x0, x8, #0x138
0x05FE86F4: 000440f9  ldr x0, [x0, #8]
0x05FE86F8: e10314aa  mov x1, x20
0x05FE86FC: 23614697  bl #0x3180b88
0x05FE8700: 080440f9  ldr x8, [x0, #8]
0x05FE8704: e10300aa  mov x1, x0
0x05FE8708: e00313aa  mov x0, x19
0x05FE870C: 00013fd6  blr x8
0x05FE8710: a00000b4  cbz x0, #0x5fe8724
0x05FE8714: 001840f9  ldr x0, [x0, #0x30]
0x05FE8718: f44f41a9  ldp x20, x19, [sp, #0x10]
0x05FE871C: fe0742f8  ldr x30, [sp], #0x20
0x05FE8720: c0035fd6  ret
0x05FE8724: 62614697  bl #0x3180cac

; RVA 0x5FE8728 | internal bool <HasUnmergedProducersOnBoard>b__2_1(IGrouping<string, ITimeCycleComponent> g) { }
; bytes=84 sha256=f4f989f38552737ea5f67ad3e0c0661be26fcd8f66b3d17893b6aba7b81b5397 status=arm64_complete_bound indexed_start=True
0x05FE8728: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x05FE872C: f44f01a9  stp x20, x19, [sp, #0x10]
0x05FE8730: d4e900f0  adrp x20, #0x7d23000
0x05FE8734: 35b700b0  adrp x21, #0x76cd000
0x05FE8738: 88825839  ldrb w8, [x20, #0x620]
0x05FE873C: b50e44f9  ldr x21, [x21, #0x818]
0x05FE8740: f30301aa  mov x19, x1
0x05FE8744: c8000037  tbnz w8, #0, #0x5fe875c
0x05FE8748: 20b700b0  adrp x0, #0x76cd000
0x05FE874C: 000c44f9  ldr x0, [x0, #0x818]
0x05FE8750: b2604697  bl #0x3180a18
0x05FE8754: 28008052  movz w8, #0x1
0x05FE8758: 88821839  strb w8, [x20, #0x620]
0x05FE875C: a10240f9  ldr x1, [x21]
0x05FE8760: e00313aa  mov x0, x19
0x05FE8764: 6d477197  bl #0x3c3a518
0x05FE8768: f44f41a9  ldp x20, x19, [sp, #0x10]
0x05FE876C: 1f040071  cmp w0, #1
0x05FE8770: e0d79f1a  cset w0, gt
0x05FE8774: fe57c2a8  ldp x30, x21, [sp], #0x20
0x05FE8778: c0035fd6  ret

; RVA 0x5FE877C | internal bool <HasToolsOnBoard>b__3_0(CollectableComponent component) { }
; bytes=24 sha256=10e32633d20cce1f0d23f16c8ac201c3bbc94caf0b38186c468f534be3329637 status=arm64_complete_bound indexed_start=True
0x05FE877C: 810000b4  cbz x1, #0x5fe878c
0x05FE8780: e00301aa  mov x0, x1
0x05FE8784: e1031faa  mov x1, xzr
0x05FE8788: b24c2414  b #0x68fba50
0x05FE878C: fe0f1ff8  str x30, [sp, #-0x10]!
0x05FE8790: 47614697  bl #0x3180cac

; RVA 0x5FE8794 | internal bool <GetFirstToolOnBoard>b__4_0(CollectableComponent component) { }
; bytes=24 sha256=c2c1b739cfd879ff55dbef65984a97d9aeaa602c40f3187b43252cdfec2d0b9f status=arm64_complete_bound indexed_start=True
0x05FE8794: 810000b4  cbz x1, #0x5fe87a4
0x05FE8798: e00301aa  mov x0, x1
0x05FE879C: e1031faa  mov x1, xzr
0x05FE87A0: ac4c2414  b #0x68fba50
0x05FE87A4: fe0f1ff8  str x30, [sp, #-0x10]!
0x05FE87A8: 41614697  bl #0x3180cac

; RVA 0x5FE87AC | internal bool <GetTimeCycleComponents>b__5_0(PositionComponent component) { }
; bytes=92 sha256=015b511ed76e5882ae4937e887d2bec9869821850c0ca0ca0d1cf5bdf4b7b669 status=arm64_complete_bound indexed_start=True
0x05FE87AC: fe0f1ef8  str x30, [sp, #-0x20]!
0x05FE87B0: f44f01a9  stp x20, x19, [sp, #0x10]
0x05FE87B4: d4e900f0  adrp x20, #0x7d23000
0x05FE87B8: 88865839  ldrb w8, [x20, #0x621]
0x05FE87BC: f30301aa  mov x19, x1
0x05FE87C0: c8000037  tbnz w8, #0, #0x5fe87d8
0x05FE87C4: 20b700b0  adrp x0, #0x76cd000
0x05FE87C8: 001044f9  ldr x0, [x0, #0x820]
0x05FE87CC: 93604697  bl #0x3180a18
0x05FE87D0: 28008052  movz w8, #0x1
0x05FE87D4: 88861839  strb w8, [x20, #0x621]
0x05FE87D8: 730100b4  cbz x19, #0x5fe8804
0x05FE87DC: 28b700b0  adrp x8, #0x76cd000
0x05FE87E0: 081144f9  ldr x8, [x8, #0x820]
0x05FE87E4: e00313aa  mov x0, x19
0x05FE87E8: 010140f9  ldr x1, [x8]
0x05FE87EC: 1c147097  bl #0x3bed85c
0x05FE87F0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x05FE87F4: 1f0000f1  cmp x0, #0
0x05FE87F8: e0079f1a  cset w0, ne
0x05FE87FC: fe0742f8  ldr x30, [sp], #0x20
0x05FE8800: c0035fd6  ret
0x05FE8804: 2a614697  bl #0x3180cac

; RVA 0x5FE8808 | internal IEnumerable<ITimeCycleComponent> <GetTimeCycleComponents>b__5_1(PositionComponent comp) { }
; bytes=80 sha256=3f9a454331ecef33428fb513ad9f06a3846a69bc92c2f113b5a9b39885e11d38 status=arm64_complete_bound indexed_start=True
0x05FE8808: fe0f1ef8  str x30, [sp, #-0x20]!
0x05FE880C: f44f01a9  stp x20, x19, [sp, #0x10]
0x05FE8810: d4e900f0  adrp x20, #0x7d23000
0x05FE8814: 888a5839  ldrb w8, [x20, #0x622]
0x05FE8818: f30301aa  mov x19, x1
0x05FE881C: c8000037  tbnz w8, #0, #0x5fe8834
0x05FE8820: 20b700b0  adrp x0, #0x76cd000
0x05FE8824: 001044f9  ldr x0, [x0, #0x820]
0x05FE8828: 7c604697  bl #0x3180a18
0x05FE882C: 28008052  movz w8, #0x1
0x05FE8830: 888a1839  strb w8, [x20, #0x622]
0x05FE8834: 130100b4  cbz x19, #0x5fe8854
0x05FE8838: 28b700b0  adrp x8, #0x76cd000
0x05FE883C: 081144f9  ldr x8, [x8, #0x820]
0x05FE8840: e00313aa  mov x0, x19
0x05FE8844: f44f41a9  ldp x20, x19, [sp, #0x10]
0x05FE8848: 010140f9  ldr x1, [x8]
0x05FE884C: fe0742f8  ldr x30, [sp], #0x20
0x05FE8850: 03147017  b #0x3bed85c
0x05FE8854: 16614697  bl #0x3180cac

