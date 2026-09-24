; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 689 MergeEngine.ECS.Systems.SystemManager
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x63A7548 | public void add_Initialized(Action value) { }
; bytes=156 sha256=11267126c29339f3791f235a24f7c670a8e3fe226c4b3ba0b491b25f49196922 status=arm64_complete_bound indexed_start=True
0x063A7548: fe0f1df8  str x30, [sp, #-0x30]!
0x063A754C: f65701a9  stp x22, x21, [sp, #0x10]
0x063A7550: f44f02a9  stp x20, x19, [sp, #0x20]
0x063A7554: f5cb00f0  adrp x21, #0x7d26000
0x063A7558: a8b64539  ldrb w8, [x21, #0x16d]
0x063A755C: f30301aa  mov x19, x1
0x063A7560: f40300aa  mov x20, x0
0x063A7564: c8000037  tbnz w8, #0, #0x63a757c
0x063A7568: 209500f0  adrp x0, #0x764e000
0x063A756C: 00ac43f9  ldr x0, [x0, #0x758]
0x063A7570: 2a653797  bl #0x3180a18
0x063A7574: 28008052  movz w8, #0x1
0x063A7578: a8b60539  strb w8, [x21, #0x16d]
0x063A757C: 369500f0  adrp x22, #0x764e000
0x063A7580: 950e44f8  ldr x21, [x20, #0x40]!
0x063A7584: d6ae43f9  ldr x22, [x22, #0x758]
0x063A7588: e00315aa  mov x0, x21
0x063A758C: e10313aa  mov x1, x19
0x063A7590: e2031faa  mov x2, xzr
0x063A7594: 63d9cc97  bl #0x56ddb20
0x063A7598: e80300aa  mov x8, x0
0x063A759C: a00000b4  cbz x0, #0x63a75b0
0x063A75A0: c10240f9  ldr x1, [x22]
0x063A75A4: 090140f9  ldr x9, [x8]
0x063A75A8: 3f0101eb  cmp x9, x1
0x063A75AC: 81010054  b.ne #0x63a75dc
0x063A75B0: e00314aa  mov x0, x20
0x063A75B4: e10308aa  mov x1, x8
0x063A75B8: e20315aa  mov x2, x21
0x063A75BC: e1d63897  bl #0x31dd140
0x063A75C0: bf0200eb  cmp x21, x0
0x063A75C4: f50300aa  mov x21, x0
0x063A75C8: 01feff54  b.ne #0x63a7588
0x063A75CC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x063A75D0: f65741a9  ldp x22, x21, [sp, #0x10]
0x063A75D4: fe0743f8  ldr x30, [sp], #0x30
0x063A75D8: c0035fd6  ret
0x063A75DC: e00308aa  mov x0, x8
0x063A75E0: 9a663797  bl #0x3181048

; RVA 0x63A75E4 | public void remove_Initialized(Action value) { }
; bytes=156 sha256=810ad7962ef64d61194bd0142fb3e8ba9ff0966e4112f136ffcdc4588fe0917d status=arm64_complete_bound indexed_start=True
0x063A75E4: fe0f1df8  str x30, [sp, #-0x30]!
0x063A75E8: f65701a9  stp x22, x21, [sp, #0x10]
0x063A75EC: f44f02a9  stp x20, x19, [sp, #0x20]
0x063A75F0: f5cb00f0  adrp x21, #0x7d26000
0x063A75F4: a8ba4539  ldrb w8, [x21, #0x16e]
0x063A75F8: f30301aa  mov x19, x1
0x063A75FC: f40300aa  mov x20, x0
0x063A7600: c8000037  tbnz w8, #0, #0x63a7618
0x063A7604: 209500f0  adrp x0, #0x764e000
0x063A7608: 00ac43f9  ldr x0, [x0, #0x758]
0x063A760C: 03653797  bl #0x3180a18
0x063A7610: 28008052  movz w8, #0x1
0x063A7614: a8ba0539  strb w8, [x21, #0x16e]
0x063A7618: 369500f0  adrp x22, #0x764e000
0x063A761C: 950e44f8  ldr x21, [x20, #0x40]!
0x063A7620: d6ae43f9  ldr x22, [x22, #0x758]
0x063A7624: e00315aa  mov x0, x21
0x063A7628: e10313aa  mov x1, x19
0x063A762C: e2031faa  mov x2, xzr
0x063A7630: bad9cc97  bl #0x56ddd18
0x063A7634: e80300aa  mov x8, x0
0x063A7638: a00000b4  cbz x0, #0x63a764c
0x063A763C: c10240f9  ldr x1, [x22]
0x063A7640: 090140f9  ldr x9, [x8]
0x063A7644: 3f0101eb  cmp x9, x1
0x063A7648: 81010054  b.ne #0x63a7678
0x063A764C: e00314aa  mov x0, x20
0x063A7650: e10308aa  mov x1, x8
0x063A7654: e20315aa  mov x2, x21
0x063A7658: bad63897  bl #0x31dd140
0x063A765C: bf0200eb  cmp x21, x0
0x063A7660: f50300aa  mov x21, x0
0x063A7664: 01feff54  b.ne #0x63a7624
0x063A7668: f44f42a9  ldp x20, x19, [sp, #0x20]
0x063A766C: f65741a9  ldp x22, x21, [sp, #0x10]
0x063A7670: fe0743f8  ldr x30, [sp], #0x30
0x063A7674: c0035fd6  ret
0x063A7678: e00308aa  mov x0, x8
0x063A767C: 73663797  bl #0x3181048

; RVA 0x63A7680 | public bool get_IsInitialized() { }
; bytes=8 sha256=078ba4becdbd72e872ae0ff730955d197071ab6ad37418e7c2e1548bed4f2dbf status=arm64_complete_bound indexed_start=True
0x063A7680: 00204139  ldrb w0, [x0, #0x48]
0x063A7684: c0035fd6  ret

; RVA 0x63A7688 | private void SortSystems() { }
; bytes=260 sha256=82d319a678122cf2d36f8959b883bc430b462c25df81cf104bd3273fcb2be61f status=arm64_complete_bound indexed_start=True
0x063A7688: fe0f1df8  str x30, [sp, #-0x30]!
0x063A768C: f65701a9  stp x22, x21, [sp, #0x10]
0x063A7690: f44f02a9  stp x20, x19, [sp, #0x20]
0x063A7694: f4cb00f0  adrp x20, #0x7d26000
0x063A7698: 569a00d0  adrp x22, #0x76f1000
0x063A769C: 88be4539  ldrb w8, [x20, #0x16f]
0x063A76A0: d63a40f9  ldr x22, [x22, #0x70]
0x063A76A4: f30300aa  mov x19, x0
0x063A76A8: e8010037  tbnz w8, #0, #0x63a76e4
0x063A76AC: 409a00d0  adrp x0, #0x76f1000
0x063A76B0: 003c40f9  ldr x0, [x0, #0x78]
0x063A76B4: d9643797  bl #0x3180a18
0x063A76B8: 409a00d0  adrp x0, #0x76f1000
0x063A76BC: 004040f9  ldr x0, [x0, #0x80]
0x063A76C0: d6643797  bl #0x3180a18
0x063A76C4: 409a00d0  adrp x0, #0x76f1000
0x063A76C8: 004440f9  ldr x0, [x0, #0x88]
0x063A76CC: d3643797  bl #0x3180a18
0x063A76D0: 409a00d0  adrp x0, #0x76f1000
0x063A76D4: 003840f9  ldr x0, [x0, #0x70]
0x063A76D8: d0643797  bl #0x3180a18
0x063A76DC: 28008052  movz w8, #0x1
0x063A76E0: 88be0539  strb w8, [x20, #0x16f]
0x063A76E4: c00240f9  ldr x0, [x22]
0x063A76E8: 731a40f9  ldr x19, [x19, #0x30]
0x063A76EC: 08e040b9  ldr w8, [x0, #0xe0]
0x063A76F0: 68000035  cbnz w8, #0x63a76fc
0x063A76F4: 26653797  bl #0x3180b8c
0x063A76F8: c00240f9  ldr x0, [x22]
0x063A76FC: 085c40f9  ldr x8, [x0, #0xb8]
0x063A7700: 140540f9  ldr x20, [x8, #8]
0x063A7704: f40200b5  cbnz x20, #0x63a7760
0x063A7708: 08e040b9  ldr w8, [x0, #0xe0]
0x063A770C: 68000035  cbnz w8, #0x63a7718
0x063A7710: 1f653797  bl #0x3180b8c
0x063A7714: c00240f9  ldr x0, [x22]
0x063A7718: 499a00d0  adrp x9, #0x76f1000
0x063A771C: 085c40f9  ldr x8, [x0, #0xb8]
0x063A7720: 293d40f9  ldr x9, [x9, #0x78]
0x063A7724: 150140f9  ldr x21, [x8]
0x063A7728: 200140f9  ldr x0, [x9]
0x063A772C: 5d653797  bl #0x3180ca0
0x063A7730: 489a00d0  adrp x8, #0x76f1000
0x063A7734: 084540f9  ldr x8, [x8, #0x88]
0x063A7738: e10315aa  mov x1, x21
0x063A773C: e3031faa  mov x3, xzr
0x063A7740: f40300aa  mov x20, x0
0x063A7744: 020140f9  ldr x2, [x8]
0x063A7748: f5aaa697  bl #0x4d5231c
0x063A774C: c80240f9  ldr x8, [x22]
0x063A7750: e10314aa  mov x1, x20
0x063A7754: 005d40f9  ldr x0, [x8, #0xb8]
0x063A7758: 148c00f8  str x20, [x0, #8]!
0x063A775C: 9a643797  bl #0x31809c4
0x063A7760: 530100b4  cbz x19, #0x63a7788
0x063A7764: 489a00d0  adrp x8, #0x76f1000
0x063A7768: 084140f9  ldr x8, [x8, #0x80]
0x063A776C: e00313aa  mov x0, x19
0x063A7770: e10314aa  mov x1, x20
0x063A7774: f44f42a9  ldp x20, x19, [sp, #0x20]
0x063A7778: 020140f9  ldr x2, [x8]
0x063A777C: f65741a9  ldp x22, x21, [sp, #0x10]
0x063A7780: fe0743f8  ldr x30, [sp], #0x30
0x063A7784: 447a7217  b #0x4046094
0x063A7788: 49653797  bl #0x3180cac

; RVA 0x63A778C | public void InitializeAll(Action beforeInitialized) { }
; bytes=580 sha256=891718dcb659e7ab47877d1adb71e8eb59c89d81f8d1de13d01a6cfc5a0f480a status=arm64_complete_bound indexed_start=True
0x063A778C: fe0f1cf8  str x30, [sp, #-0x40]!
0x063A7790: f85f01a9  stp x24, x23, [sp, #0x10]
0x063A7794: f65702a9  stp x22, x21, [sp, #0x20]
0x063A7798: f44f03a9  stp x20, x19, [sp, #0x30]
0x063A779C: f5cb00f0  adrp x21, #0x7d26000
0x063A77A0: 589a00d0  adrp x24, #0x76f1000
0x063A77A4: a8c24539  ldrb w8, [x21, #0x170]
0x063A77A8: 183b40f9  ldr x24, [x24, #0x70]
0x063A77AC: f40301aa  mov x20, x1
0x063A77B0: f30300aa  mov x19, x0
0x063A77B4: e8010037  tbnz w8, #0, #0x63a77f0
0x063A77B8: 409a00d0  adrp x0, #0x76f1000
0x063A77BC: 004840f9  ldr x0, [x0, #0x90]
0x063A77C0: 96643797  bl #0x3180a18
0x063A77C4: 409a00d0  adrp x0, #0x76f1000
0x063A77C8: 004c40f9  ldr x0, [x0, #0x98]
0x063A77CC: 93643797  bl #0x3180a18
0x063A77D0: 409a00d0  adrp x0, #0x76f1000
0x063A77D4: 005040f9  ldr x0, [x0, #0xa0]
0x063A77D8: 90643797  bl #0x3180a18
0x063A77DC: 409a00d0  adrp x0, #0x76f1000
0x063A77E0: 003840f9  ldr x0, [x0, #0x70]
0x063A77E4: 8d643797  bl #0x3180a18
0x063A77E8: 28008052  movz w8, #0x1
0x063A77EC: a8c20539  strb w8, [x21, #0x170]
0x063A77F0: 080340f9  ldr x8, [x24]
0x063A77F4: 751e40f9  ldr x21, [x19, #0x38]
0x063A77F8: 09e140b9  ldr w9, [x8, #0xe0]
0x063A77FC: 89000035  cbnz w9, #0x63a780c
0x063A7800: e00308aa  mov x0, x8
0x063A7804: e2643797  bl #0x3180b8c
0x063A7808: 080340f9  ldr x8, [x24]
0x063A780C: 095d40f9  ldr x9, [x8, #0xb8]
0x063A7810: 360940f9  ldr x22, [x9, #0x10]
0x063A7814: 160300b5  cbnz x22, #0x63a7874
0x063A7818: 09e140b9  ldr w9, [x8, #0xe0]
0x063A781C: 89000035  cbnz w9, #0x63a782c
0x063A7820: e00308aa  mov x0, x8
0x063A7824: da643797  bl #0x3180b8c
0x063A7828: 080340f9  ldr x8, [x24]
0x063A782C: 499a00d0  adrp x9, #0x76f1000
0x063A7830: 085d40f9  ldr x8, [x8, #0xb8]
0x063A7834: 294940f9  ldr x9, [x9, #0x90]
0x063A7838: 170140f9  ldr x23, [x8]
0x063A783C: 200140f9  ldr x0, [x9]
0x063A7840: 18653797  bl #0x3180ca0
0x063A7844: 489a00d0  adrp x8, #0x76f1000
0x063A7848: 085140f9  ldr x8, [x8, #0xa0]
0x063A784C: f60300aa  mov x22, x0
0x063A7850: 020140f9  ldr x2, [x8]
0x063A7854: e10317aa  mov x1, x23
0x063A7858: e3031faa  mov x3, xzr
0x063A785C: d9cbbd97  bl #0x531a7c0
0x063A7860: 080340f9  ldr x8, [x24]
0x063A7864: 005d40f9  ldr x0, [x8, #0xb8]
0x063A7868: 160c01f8  str x22, [x0, #0x10]!
0x063A786C: e10316aa  mov x1, x22
0x063A7870: 55643797  bl #0x31809c4
0x063A7874: 489a00d0  adrp x8, #0x76f1000
0x063A7878: 084d40f9  ldr x8, [x8, #0x98]
0x063A787C: 020140f9  ldr x2, [x8]
0x063A7880: e00315aa  mov x0, x21
0x063A7884: e10316aa  mov x1, x22
0x063A7888: 6e9c6597  bl #0x3d0ea40
0x063A788C: 28008052  movz w8, #0x1
0x063A7890: 68220139  strb w8, [x19, #0x48]
0x063A7894: b40000b4  cbz x20, #0x63a78a8
0x063A7898: 802240f9  ldr x0, [x20, #0x40]
0x063A789C: 811640f9  ldr x1, [x20, #0x28]
0x063A78A0: 880e40f9  ldr x8, [x20, #0x18]
0x063A78A4: 00013fd6  blr x8
0x063A78A8: 682240f9  ldr x8, [x19, #0x40]
0x063A78AC: a80000b4  cbz x8, #0x63a78c0
0x063A78B0: 002140f9  ldr x0, [x8, #0x40]
0x063A78B4: 011540f9  ldr x1, [x8, #0x28]
0x063A78B8: 090d40f9  ldr x9, [x8, #0x18]
0x063A78BC: 20013fd6  blr x9
0x063A78C0: f44f43a9  ldp x20, x19, [sp, #0x30]
0x063A78C4: f65742a9  ldp x22, x21, [sp, #0x20]
0x063A78C8: f85f41a9  ldp x24, x23, [sp, #0x10]
0x063A78CC: fe0744f8  ldr x30, [sp], #0x40
0x063A78D0: c0035fd6  ret
0x063A78D4: 1e000014  b #0x63a794c
0x063A78D8: 1d000014  b #0x63a794c
0x063A78DC: 1c000014  b #0x63a794c
0x063A78E0: 01000014  b #0x63a78e4
0x063A78E4: f40300aa  mov x20, x0
0x063A78E8: 3f040071  cmp w1, #1
0x063A78EC: c1060054  b.ne #0x63a79c4
0x063A78F0: e00314aa  mov x0, x20
0x063A78F4: 079c3894  bl #0x71ce910
0x063A78F8: f40300aa  mov x20, x0
0x063A78FC: 209500f0  adrp x0, #0x764e000
0x063A7900: 006c42f9  ldr x0, [x0, #0x4d8]
0x063A7904: 4a643797  bl #0x3180a2c
0x063A7908: 880240f9  ldr x8, [x20]
0x063A790C: 010140f9  ldr x1, [x8]
0x063A7910: f2653797  bl #0x31810d8
0x063A7914: 60030037  tbnz w0, #0, #0x63a7980
0x063A7918: 00018052  movz w0, #0x8
0x063A791C: 059c3894  bl #0x71ce930
0x063A7920: 880240f9  ldr x8, [x20]
0x063A7924: 080000f9  str x8, [x0]
0x063A7928: 617100b0  adrp x1, #0x71d4000
0x063A792C: 21a03491  add x1, x1, #0xd28
0x063A7930: e2031faa  mov x2, xzr
0x063A7934: 039c3894  bl #0x71ce940
0x063A7938: 21000014  b #0x63a79bc
0x063A793C: f40300aa  mov x20, x0
0x063A7940: f89b3894  bl #0x71ce920
0x063A7944: 20000014  b #0x63a79c4
0x063A7948: 01000014  b #0x63a794c
0x063A794C: f40300aa  mov x20, x0
0x063A7950: 3f040071  cmp w1, #1
0x063A7954: 81030054  b.ne #0x63a79c4
0x063A7958: e00314aa  mov x0, x20
0x063A795C: ed9b3894  bl #0x71ce910
0x063A7960: f40300aa  mov x20, x0
0x063A7964: 209500f0  adrp x0, #0x764e000
0x063A7968: 006c42f9  ldr x0, [x0, #0x4d8]
0x063A796C: 30643797  bl #0x3180a2c
0x063A7970: 880240f9  ldr x8, [x20]
0x063A7974: 010140f9  ldr x1, [x8]
0x063A7978: d8653797  bl #0x31810d8
0x063A797C: 00010036  tbz w0, #0, #0x63a799c
0x063A7980: 940240f9  ldr x20, [x20]
0x063A7984: e79b3894  bl #0x71ce920
0x063A7988: e00313aa  mov x0, x19
0x063A798C: e10314aa  mov x1, x20
0x063A7990: 10000094  bl #0x63a79d0
0x063A7994: e00314aa  mov x0, x20
0x063A7998: c3643797  bl #0x3180ca4
0x063A799C: 00018052  movz w0, #0x8
0x063A79A0: e49b3894  bl #0x71ce930
0x063A79A4: 880240f9  ldr x8, [x20]
0x063A79A8: 080000f9  str x8, [x0]
0x063A79AC: 617100b0  adrp x1, #0x71d4000
0x063A79B0: 21a03491  add x1, x1, #0xd28
0x063A79B4: e2031faa  mov x2, xzr
0x063A79B8: e29b3894  bl #0x71ce940
0x063A79BC: f40300aa  mov x20, x0
0x063A79C0: d89b3894  bl #0x71ce920
0x063A79C4: e00314aa  mov x0, x20
0x063A79C8: e4f73a97  bl #0x3265958
0x063A79CC: d2862997  bl #0x2e09514

; RVA 0x63A7A78 | private void Zenject.ITickable.Tick() { }
; bytes=16 sha256=3b28f1f7bd0f28da6b1da822c2a35e8271bbf84e0fbcdebb452a46c42443d056 status=arm64_complete_bound indexed_start=True
0x063A7A78: 08204139  ldrb w8, [x0, #0x48]
0x063A7A7C: 48000034  cbz w8, #0x63a7a84
0x063A7A80: 02000014  b #0x63a7a88
0x063A7A84: c0035fd6  ret

; RVA 0x63A7A88 | private void UpdateSystems() { }
; bytes=788 sha256=7df5e9c170605d0d7daac76c741fa782f9ca5383ec923296eab5bc18ff5fc07b status=arm64_complete_bound indexed_start=True
0x063A7A88: ff8302d1  sub sp, sp, #0xa0
0x063A7A8C: fd7b04a9  stp x29, x30, [sp, #0x40]
0x063A7A90: fc6f05a9  stp x28, x27, [sp, #0x50]
0x063A7A94: fa6706a9  stp x26, x25, [sp, #0x60]
0x063A7A98: f85f07a9  stp x24, x23, [sp, #0x70]
0x063A7A9C: f65708a9  stp x22, x21, [sp, #0x80]
0x063A7AA0: f44f09a9  stp x20, x19, [sp, #0x90]
0x063A7AA4: f4cb00f0  adrp x20, #0x7d26000
0x063A7AA8: 88c64539  ldrb w8, [x20, #0x171]
0x063A7AAC: f30300aa  mov x19, x0
0x063A7AB0: 48020037  tbnz w8, #0, #0x63a7af8
0x063A7AB4: 409a00d0  adrp x0, #0x76f1000
0x063A7AB8: 005840f9  ldr x0, [x0, #0xb0]
0x063A7ABC: d7633797  bl #0x3180a18
0x063A7AC0: 409a00d0  adrp x0, #0x76f1000
0x063A7AC4: 005c40f9  ldr x0, [x0, #0xb8]
0x063A7AC8: d4633797  bl #0x3180a18
0x063A7ACC: 409a00d0  adrp x0, #0x76f1000
0x063A7AD0: 006040f9  ldr x0, [x0, #0xc0]
0x063A7AD4: d1633797  bl #0x3180a18
0x063A7AD8: a0960090  adrp x0, #0x767b000
0x063A7ADC: 001043f9  ldr x0, [x0, #0x620]
0x063A7AE0: ce633797  bl #0x3180a18
0x063A7AE4: 409a00d0  adrp x0, #0x76f1000
0x063A7AE8: 006440f9  ldr x0, [x0, #0xc8]
0x063A7AEC: cb633797  bl #0x3180a18
0x063A7AF0: 28008052  movz w8, #0x1
0x063A7AF4: 88c60539  strb w8, [x20, #0x171]
0x063A7AF8: ff7f02a9  stp xzr, xzr, [sp, #0x20]
0x063A7AFC: ff1b00f9  str xzr, [sp, #0x30]
0x063A7B00: 601a40f9  ldr x0, [x19, #0x30]
0x063A7B04: 600e00b4  cbz x0, #0x63a7cd0
0x063A7B08: 489a00d0  adrp x8, #0x76f1000
0x063A7B0C: 086540f9  ldr x8, [x8, #0xc8]
0x063A7B10: 5c9a00d0  adrp x28, #0x76f1000
0x063A7B14: bd960090  adrp x29, #0x767b000
0x063A7B18: 5a9a00d0  adrp x26, #0x76f1000
0x063A7B1C: 010140f9  ldr x1, [x8]
0x063A7B20: 9c5f40f9  ldr x28, [x28, #0xb8]
0x063A7B24: bd1343f9  ldr x29, [x29, #0x620]
0x063A7B28: 5a5b40f9  ldr x26, [x26, #0xb0]
0x063A7B2C: e8230091  add x8, sp, #8
0x063A7B30: 4e757297  bl #0x4045068
0x063A7B34: e083c03c  ldur q0, [sp, #8]
0x063A7B38: e80f40f9  ldr x8, [sp, #0x18]
0x063A7B3C: 339500f0  adrp x19, #0x764e000
0x063A7B40: 549a00d0  adrp x20, #0x76f1000
0x063A7B44: 559a00d0  adrp x21, #0x76f1000
0x063A7B48: 736e42f9  ldr x19, [x19, #0x4d8]
0x063A7B4C: 946a40f9  ldr x20, [x20, #0xd0]
0x063A7B50: b56e40f9  ldr x21, [x21, #0xd8]
0x063A7B54: e00b803d  str q0, [sp, #0x20]
0x063A7B58: e81b00f9  str x8, [sp, #0x30]
0x063A7B5C: 369500f0  adrp x22, #0x764e000
0x063A7B60: d6ce42f9  ldr x22, [x22, #0x598]
0x063A7B64: 3b008052  movz w27, #0x1
0x063A7B68: 810340f9  ldr x1, [x28]
0x063A7B6C: e0830091  add x0, sp, #0x20
0x063A7B70: 91b7b197  bl #0x50159b4
0x063A7B74: 40090036  tbz w0, #0, #0x63a7c9c
0x063A7B78: f71b40f9  ldr x23, [sp, #0x30]
0x063A7B7C: 370300b4  cbz x23, #0x63a7be0
0x063A7B80: e80240f9  ldr x8, [x23]
0x063A7B84: a10340f9  ldr x1, [x29]
0x063A7B88: 095d4279  ldrh w9, [x8, #0x12e]
0x063A7B8C: 290100b4  cbz x9, #0x63a7bb0
0x063A7B90: 0a5940f9  ldr x10, [x8, #0xb0]
0x063A7B94: 4a210091  add x10, x10, #8
0x063A7B98: 4b815ff8  ldur x11, [x10, #-8]
0x063A7B9C: 7f0101eb  cmp x11, x1
0x063A7BA0: 00010054  b.eq #0x63a7bc0
0x063A7BA4: 290500f1  subs x9, x9, #1
0x063A7BA8: 4a410091  add x10, x10, #0x10
0x063A7BAC: 61ffff54  b.ne #0x63a7b98
0x063A7BB0: 22008052  movz w2, #0x1
0x063A7BB4: e00317aa  mov x0, x23
0x063A7BB8: d6bb3697  bl #0x3156b10
0x063A7BBC: 05000014  b #0x63a7bd0
0x063A7BC0: 490140b9  ldr w9, [x10]
0x063A7BC4: 29050011  add w9, w9, #1
0x063A7BC8: 08d1298b  add x8, x8, w9, sxtw #4
0x063A7BCC: 00e10491  add x0, x8, #0x138
0x063A7BD0: 080440a9  ldp x8, x1, [x0]
0x063A7BD4: e00317aa  mov x0, x23
0x063A7BD8: 00013fd6  blr x8
0x063A7BDC: e3ffff17  b #0x63a7b68
0x063A7BE0: 33643797  bl #0x3180cac
0x063A7BE4: 3c000014  b #0x63a7cd4
0x063A7BE8: f80301aa  mov x24, x1
0x063A7BEC: 1f070071  cmp w24, #1
0x063A7BF0: c1060054  b.ne #0x63a7cc8
0x063A7BF4: 479b3894  bl #0x71ce910
0x063A7BF8: f80300aa  mov x24, x0
0x063A7BFC: e00313aa  mov x0, x19
0x063A7C00: 8b633797  bl #0x3180a2c
0x063A7C04: 080340f9  ldr x8, [x24]
0x063A7C08: 010140f9  ldr x1, [x8]
0x063A7C0C: 33653797  bl #0x31810d8
0x063A7C10: 20060036  tbz w0, #0, #0x63a7cd4
0x063A7C14: 180340f9  ldr x24, [x24]
0x063A7C18: 429b3894  bl #0x71ce920
0x063A7C1C: d70600b4  cbz x23, #0x63a7cf4
0x063A7C20: e00317aa  mov x0, x23
0x063A7C24: e1031faa  mov x1, xzr
0x063A7C28: 67cccc97  bl #0x56dadc4
0x063A7C2C: 600600b4  cbz x0, #0x63a7cf8
0x063A7C30: 080040f9  ldr x8, [x0]
0x063A7C34: 09855ba9  ldp x9, x1, [x8, #0x1b8]
0x063A7C38: 20013fd6  blr x9
0x063A7C3C: f70300aa  mov x23, x0
0x063A7C40: e00314aa  mov x0, x20
0x063A7C44: 7a633797  bl #0x3180a2c
0x063A7C48: e10317aa  mov x1, x23
0x063A7C4C: e2031faa  mov x2, xzr
0x063A7C50: d40ac597  bl #0x54ea7a0
0x063A7C54: f90300aa  mov x25, x0
0x063A7C58: e00315aa  mov x0, x21
0x063A7C5C: 74633797  bl #0x3180a2c
0x063A7C60: 10643797  bl #0x3180ca0
0x063A7C64: f70300aa  mov x23, x0
0x063A7C68: e10319aa  mov x1, x25
0x063A7C6C: e20318aa  mov x2, x24
0x063A7C70: e3031faa  mov x3, xzr
0x063A7C74: 99a80a94  bl #0x6651ed8
0x063A7C78: e00316aa  mov x0, x22
0x063A7C7C: 6c633797  bl #0x3180a2c
0x063A7C80: 08e040b9  ldr w8, [x0, #0xe0]
0x063A7C84: 48000035  cbnz w8, #0x63a7c8c
0x063A7C88: c1633797  bl #0x3180b8c
0x063A7C8C: e00317aa  mov x0, x23
0x063A7C90: e1031faa  mov x1, xzr
0x063A7C94: 5bea2b94  bl #0x6ea2600
0x063A7C98: b4ffff17  b #0x63a7b68
0x063A7C9C: 410340f9  ldr x1, [x26]
0x063A7CA0: e0830091  add x0, sp, #0x20
0x063A7CA4: 43b7b197  bl #0x50159b0
0x063A7CA8: f44f49a9  ldp x20, x19, [sp, #0x90]
0x063A7CAC: f65748a9  ldp x22, x21, [sp, #0x80]
0x063A7CB0: f85f47a9  ldp x24, x23, [sp, #0x70]
0x063A7CB4: fa6746a9  ldp x26, x25, [sp, #0x60]
0x063A7CB8: fc6f45a9  ldp x28, x27, [sp, #0x50]
0x063A7CBC: fd7b44a9  ldp x29, x30, [sp, #0x40]
0x063A7CC0: ff830291  add sp, sp, #0xa0
0x063A7CC4: c0035fd6  ret
0x063A7CC8: f30300aa  mov x19, x0
0x063A7CCC: 1c000014  b #0x63a7d3c
0x063A7CD0: f7633797  bl #0x3180cac
0x063A7CD4: 00018052  movz w0, #0x8
0x063A7CD8: 169b3894  bl #0x71ce930
0x063A7CDC: 080340f9  ldr x8, [x24]
0x063A7CE0: 080000f9  str x8, [x0]
0x063A7CE4: 617100b0  adrp x1, #0x71d4000
0x063A7CE8: 21a03491  add x1, x1, #0xd28
0x063A7CEC: e2031faa  mov x2, xzr
0x063A7CF0: 149b3894  bl #0x71ce940
0x063A7CF4: ee633797  bl #0x3180cac
0x063A7CF8: ed633797  bl #0x3180cac
0x063A7CFC: 07000014  b #0x63a7d18
0x063A7D00: 06000014  b #0x63a7d18
0x063A7D04: 07000014  b #0x63a7d20
0x063A7D08: 04000014  b #0x63a7d18
0x063A7D0C: 03000014  b #0x63a7d18
0x063A7D10: 02000014  b #0x63a7d18
0x063A7D14: 01000014  b #0x63a7d18
0x063A7D18: f30300aa  mov x19, x0
0x063A7D1C: 07000014  b #0x63a7d38
0x063A7D20: f30300aa  mov x19, x0
0x063A7D24: f803012a  mov w24, w1
0x063A7D28: fe9a3894  bl #0x71ce920
0x063A7D2C: 04000014  b #0x63a7d3c
0x063A7D30: f30300aa  mov x19, x0
0x063A7D34: 3b008052  movz w27, #0x1
0x063A7D38: f803012a  mov w24, w1
0x063A7D3C: 1f031b6b  cmp w24, w27
0x063A7D40: 61010054  b.ne #0x63a7d6c
0x063A7D44: e00313aa  mov x0, x19
0x063A7D48: f29a3894  bl #0x71ce910
0x063A7D4C: 140040f9  ldr x20, [x0]
0x063A7D50: f49a3894  bl #0x71ce920
0x063A7D54: 410340f9  ldr x1, [x26]
0x063A7D58: e0830091  add x0, sp, #0x20
0x063A7D5C: 15b7b197  bl #0x50159b0
0x063A7D60: 54faffb4  cbz x20, #0x63a7ca8
0x063A7D64: e00314aa  mov x0, x20
0x063A7D68: cf633797  bl #0x3180ca4
0x063A7D6C: f4031faa  mov x20, xzr
0x063A7D70: 02000014  b #0x63a7d78
0x063A7D74: f30300aa  mov x19, x0
0x063A7D78: 410340f9  ldr x1, [x26]
0x063A7D7C: e0830091  add x0, sp, #0x20
0x063A7D80: 0cb7b197  bl #0x50159b0
0x063A7D84: 740000b5  cbnz x20, #0x63a7d90
0x063A7D88: e00313aa  mov x0, x19
0x063A7D8C: f3f63a97  bl #0x3265958
0x063A7D90: e00314aa  mov x0, x20
0x063A7D94: c4633797  bl #0x3180ca4
0x063A7D98: df852997  bl #0x2e09514

; RVA 0x63A7D9C | public void .ctor() { }
; bytes=220 sha256=12d8fae24679f7a19fb63f0416b5b56ffa26639d7accbe76702e980742ac2ab0 status=arm64_complete_bound indexed_start=True
0x063A7D9C: fe0f1cf8  str x30, [sp, #-0x40]!
0x063A7DA0: f85f01a9  stp x24, x23, [sp, #0x10]
0x063A7DA4: f65702a9  stp x22, x21, [sp, #0x20]
0x063A7DA8: f44f03a9  stp x20, x19, [sp, #0x30]
0x063A7DAC: f7cb00f0  adrp x23, #0x7d26000
0x063A7DB0: 589a00d0  adrp x24, #0x76f1000
0x063A7DB4: 549a00d0  adrp x20, #0x76f1000
0x063A7DB8: 569a00d0  adrp x22, #0x76f1000
0x063A7DBC: 559a00d0  adrp x21, #0x76f1000
0x063A7DC0: e8ca4539  ldrb w8, [x23, #0x172]
0x063A7DC4: 187340f9  ldr x24, [x24, #0xe0]
0x063A7DC8: 947640f9  ldr x20, [x20, #0xe8]
0x063A7DCC: d67a40f9  ldr x22, [x22, #0xf0]
0x063A7DD0: b57e40f9  ldr x21, [x21, #0xf8]
0x063A7DD4: f30300aa  mov x19, x0
0x063A7DD8: e8010037  tbnz w8, #0, #0x63a7e14
0x063A7DDC: 409a00d0  adrp x0, #0x76f1000
0x063A7DE0: 007c40f9  ldr x0, [x0, #0xf8]
0x063A7DE4: 0d633797  bl #0x3180a18
0x063A7DE8: 409a00d0  adrp x0, #0x76f1000
0x063A7DEC: 007840f9  ldr x0, [x0, #0xf0]
0x063A7DF0: 0a633797  bl #0x3180a18
0x063A7DF4: 409a00d0  adrp x0, #0x76f1000
0x063A7DF8: 007440f9  ldr x0, [x0, #0xe8]
0x063A7DFC: 07633797  bl #0x3180a18
0x063A7E00: 409a00d0  adrp x0, #0x76f1000
0x063A7E04: 007040f9  ldr x0, [x0, #0xe0]
0x063A7E08: 04633797  bl #0x3180a18
0x063A7E0C: 28008052  movz w8, #0x1
0x063A7E10: e8ca0539  strb w8, [x23, #0x172]
0x063A7E14: 000340f9  ldr x0, [x24]
0x063A7E18: a2633797  bl #0x3180ca0
0x063A7E1C: 810240f9  ldr x1, [x20]
0x063A7E20: f40300aa  mov x20, x0
0x063A7E24: 856f7297  bl #0x4043c38
0x063A7E28: e00313aa  mov x0, x19
0x063A7E2C: 140c03f8  str x20, [x0, #0x30]!
0x063A7E30: e10314aa  mov x1, x20
0x063A7E34: e4623797  bl #0x31809c4
0x063A7E38: c00240f9  ldr x0, [x22]
0x063A7E3C: 99633797  bl #0x3180ca0
0x063A7E40: a10240f9  ldr x1, [x21]
0x063A7E44: f40300aa  mov x20, x0
0x063A7E48: 57e8ac97  bl #0x4ee1fa4
0x063A7E4C: e00313aa  mov x0, x19
0x063A7E50: 148c03f8  str x20, [x0, #0x38]!
0x063A7E54: e10314aa  mov x1, x20
0x063A7E58: db623797  bl #0x31809c4
0x063A7E5C: e00313aa  mov x0, x19
0x063A7E60: f44f43a9  ldp x20, x19, [sp, #0x30]
0x063A7E64: f65742a9  ldp x22, x21, [sp, #0x20]
0x063A7E68: f85f41a9  ldp x24, x23, [sp, #0x10]
0x063A7E6C: e1031faa  mov x1, xzr
0x063A7E70: fe0744f8  ldr x30, [sp], #0x40
0x063A7E74: e2c9cc17  b #0x56da5fc

; RVA 0x63A79D0 | private void <InitializeAll>g__HandleStartupException|18_0(Exception exception) { }
; bytes=168 sha256=b4287bc08622ba946e462e8c248740b979d058e818b46e66da7802afdf35c788 status=arm64_complete_bound indexed_start=True
0x063A79D0: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x063A79D4: f65701a9  stp x22, x21, [sp, #0x10]
0x063A79D8: f44f02a9  stp x20, x19, [sp, #0x20]
0x063A79DC: f7cb00f0  adrp x23, #0x7d26000
0x063A79E0: 969600f0  adrp x22, #0x767a000
0x063A79E4: 559a00d0  adrp x21, #0x76f1000
0x063A79E8: e8ce4539  ldrb w8, [x23, #0x173]
0x063A79EC: d61646f9  ldr x22, [x22, #0xc28]
0x063A79F0: b55640f9  ldr x21, [x21, #0xa8]
0x063A79F4: f30301aa  mov x19, x1
0x063A79F8: f40300aa  mov x20, x0
0x063A79FC: 88010037  tbnz w8, #0, #0x63a7a2c
0x063A7A00: 809600f0  adrp x0, #0x767a000
0x063A7A04: 001446f9  ldr x0, [x0, #0xc28]
0x063A7A08: 04643797  bl #0x3180a18
0x063A7A0C: 809600f0  adrp x0, #0x767a000
0x063A7A10: 001846f9  ldr x0, [x0, #0xc30]
0x063A7A14: 01643797  bl #0x3180a18
0x063A7A18: 409a00d0  adrp x0, #0x76f1000
0x063A7A1C: 005440f9  ldr x0, [x0, #0xa8]
0x063A7A20: fe633797  bl #0x3180a18
0x063A7A24: 28008052  movz w8, #0x1
0x063A7A28: e8ce0539  strb w8, [x23, #0x173]
0x063A7A2C: c00240f9  ldr x0, [x22]
0x063A7A30: 940e40f9  ldr x20, [x20, #0x18]
0x063A7A34: 9b643797  bl #0x3180ca0
0x063A7A38: a10240f9  ldr x1, [x21]
0x063A7A3C: e20313aa  mov x2, x19
0x063A7A40: e3031faa  mov x3, xzr
0x063A7A44: f50300aa  mov x21, x0
0x063A7A48: 7b851494  bl #0x68c9034
0x063A7A4C: 540100b4  cbz x20, #0x63a7a74
0x063A7A50: 889600f0  adrp x8, #0x767a000
0x063A7A54: 081946f9  ldr x8, [x8, #0xc30]
0x063A7A58: e00314aa  mov x0, x20
0x063A7A5C: e10315aa  mov x1, x21
0x063A7A60: f44f42a9  ldp x20, x19, [sp, #0x20]
0x063A7A64: 020140f9  ldr x2, [x8]
0x063A7A68: f65741a9  ldp x22, x21, [sp, #0x10]
0x063A7A6C: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x063A7A70: bff46717  b #0x3da4d6c
0x063A7A74: 8e643797  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DB7430 | MergeEngine.ECS.Systems.SystemManager$$AddSystem<object>
; native signature: bool MergeEngine_ECS_Systems_SystemManager__AddSystem_object_ (MergeEngine_ECS_Systems_SystemManager_o* __this, const MethodInfo_3DB7430* method);
; bytes=108 sha256=97b4d9ddf1351c6b4879560ff3ed68e58c41850bffceca2d0690d03388a88b9a status=arm64_complete_bound indexed_start=True
0x03DB7430: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x03DB7434: f44f01a9  stp x20, x19, [sp, #0x10]
0x03DB7438: 281c40f9  ldr x8, [x1, #0x38]
0x03DB743C: f30301aa  mov x19, x1
0x03DB7440: f40300aa  mov x20, x0
0x03DB7444: 880000b5  cbnz x8, #0x3db7454
0x03DB7448: e00313aa  mov x0, x19
0x03DB744C: 0b7dce97  bl #0x3156878
0x03DB7450: 681e40f9  ldr x8, [x19, #0x38]
0x03DB7454: 000540f9  ldr x0, [x8, #8]
0x03DB7458: 08d44439  ldrb w8, [x0, #0x135]
0x03DB745C: 48000037  tbnz w8, #0, #0x3db7464
0x03DB7460: ef7cce97  bl #0x315681c
0x03DB7464: 0f26cf97  bl #0x3180ca0
0x03DB7468: 681e40f9  ldr x8, [x19, #0x38]
0x03DB746C: e10314aa  mov x1, x20
0x03DB7470: f50300aa  mov x21, x0
0x03DB7474: 020140f9  ldr x2, [x8]
0x03DB7478: 030940f9  ldr x3, [x8, #0x10]
0x03DB747C: b63f5294  bl #0x5247354
0x03DB7480: 681e40f9  ldr x8, [x19, #0x38]
0x03DB7484: e00314aa  mov x0, x20
0x03DB7488: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03DB748C: e10315aa  mov x1, x21
0x03DB7490: 020d40f9  ldr x2, [x8, #0x18]
0x03DB7494: fe57c2a8  ldp x30, x21, [sp], #0x20
0x03DB7498: 07010014  b #0x3db78b4

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DB749C | MergeEngine.ECS.Systems.SystemManager$$AddSystem<object>
; native signature: bool MergeEngine_ECS_Systems_SystemManager__AddSystem_object_ (MergeEngine_ECS_Systems_SystemManager_o* __this, System_Object_array* constructorParameters, const MethodInfo_3DB749C* method);
; bytes=200 sha256=41dfd6affa9f88941475c7c06b6643685dda15b6b5a62d6d8dbb7984776d23a6 status=arm64_complete_bound indexed_start=True
0x03DB749C: fe0f1df8  str x30, [sp, #-0x30]!
0x03DB74A0: f65701a9  stp x22, x21, [sp, #0x10]
0x03DB74A4: f44f02a9  stp x20, x19, [sp, #0x20]
0x03DB74A8: 481c40f9  ldr x8, [x2, #0x38]
0x03DB74AC: f30302aa  mov x19, x2
0x03DB74B0: f50301aa  mov x21, x1
0x03DB74B4: f40300aa  mov x20, x0
0x03DB74B8: 880000b5  cbnz x8, #0x3db74c8
0x03DB74BC: e00313aa  mov x0, x19
0x03DB74C0: ee7cce97  bl #0x3156878
0x03DB74C4: 681e40f9  ldr x8, [x19, #0x38]
0x03DB74C8: 000140f9  ldr x0, [x8]
0x03DB74CC: 08d44439  ldrb w8, [x0, #0x135]
0x03DB74D0: 48000037  tbnz w8, #0, #0x3db74d8
0x03DB74D4: d27cce97  bl #0x315681c
0x03DB74D8: f225cf97  bl #0x3180ca0
0x03DB74DC: 681e40f9  ldr x8, [x19, #0x38]
0x03DB74E0: f60300aa  mov x22, x0
0x03DB74E4: 010540f9  ldr x1, [x8, #8]
0x03DB74E8: e7070694  bl #0x3f39484
0x03DB74EC: b60300b4  cbz x22, #0x3db7560
0x03DB74F0: e00316aa  mov x0, x22
0x03DB74F4: 140c01f8  str x20, [x0, #0x10]!
0x03DB74F8: e10314aa  mov x1, x20
0x03DB74FC: 3225cf97  bl #0x31809c4
0x03DB7500: e00316aa  mov x0, x22
0x03DB7504: 158c01f8  str x21, [x0, #0x18]!
0x03DB7508: e10315aa  mov x1, x21
0x03DB750C: 2e25cf97  bl #0x31809c4
0x03DB7510: 681e40f9  ldr x8, [x19, #0x38]
0x03DB7514: 000d40f9  ldr x0, [x8, #0x18]
0x03DB7518: 08d44439  ldrb w8, [x0, #0x135]
0x03DB751C: 48000037  tbnz w8, #0, #0x3db7524
0x03DB7520: bf7cce97  bl #0x315681c
0x03DB7524: df25cf97  bl #0x3180ca0
0x03DB7528: 681e40f9  ldr x8, [x19, #0x38]
0x03DB752C: e10316aa  mov x1, x22
0x03DB7530: f50300aa  mov x21, x0
0x03DB7534: 020940f9  ldr x2, [x8, #0x10]
0x03DB7538: 031140f9  ldr x3, [x8, #0x20]
0x03DB753C: 863f5294  bl #0x5247354
0x03DB7540: 681e40f9  ldr x8, [x19, #0x38]
0x03DB7544: e00314aa  mov x0, x20
0x03DB7548: e10315aa  mov x1, x21
0x03DB754C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03DB7550: 021540f9  ldr x2, [x8, #0x28]
0x03DB7554: f65741a9  ldp x22, x21, [sp, #0x10]
0x03DB7558: fe0743f8  ldr x30, [sp], #0x30
0x03DB755C: d6000014  b #0x3db78b4
0x03DB7560: d325cf97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DB78B4 | MergeEngine.ECS.Systems.SystemManager$$InternalAddSystem<object>
; native signature: bool MergeEngine_ECS_Systems_SystemManager__InternalAddSystem_object_ (MergeEngine_ECS_Systems_SystemManager_o* __this, System_Func_TSystem__o* instantiateFunction, const MethodInfo_3DB78B4* method);
; bytes=444 sha256=9a8d89750ff8d2d6ed0e509d47ace9ca52687f8a284e1387cabee2b9d4dcf8c7 status=arm64_complete_bound indexed_start=True
0x03DB78B4: fe0f1df8  str x30, [sp, #-0x30]!
0x03DB78B8: f65701a9  stp x22, x21, [sp, #0x10]
0x03DB78BC: f44f02a9  stp x20, x19, [sp, #0x20]
0x03DB78C0: 481c40f9  ldr x8, [x2, #0x38]
0x03DB78C4: f50301aa  mov x21, x1
0x03DB78C8: f30300aa  mov x19, x0
0x03DB78CC: c80200b5  cbnz x8, #0x3db7924
0x03DB78D0: 20c60190  adrp x0, #0x767b000
0x03DB78D4: 000c43f9  ldr x0, [x0, #0x618]
0x03DB78D8: f40302aa  mov x20, x2
0x03DB78DC: 4f24cf97  bl #0x3180a18
0x03DB78E0: 20c60190  adrp x0, #0x767b000
0x03DB78E4: 000843f9  ldr x0, [x0, #0x610]
0x03DB78E8: 4c24cf97  bl #0x3180a18
0x03DB78EC: 20c60190  adrp x0, #0x767b000
0x03DB78F0: 001043f9  ldr x0, [x0, #0x620]
0x03DB78F4: 4924cf97  bl #0x3180a18
0x03DB78F8: 20c60190  adrp x0, #0x767b000
0x03DB78FC: 001443f9  ldr x0, [x0, #0x628]
0x03DB7900: 4624cf97  bl #0x3180a18
0x03DB7904: a0c401f0  adrp x0, #0x764e000
0x03DB7908: 00ac42f9  ldr x0, [x0, #0x558]
0x03DB790C: 4324cf97  bl #0x3180a18
0x03DB7910: 881e40f9  ldr x8, [x20, #0x38]
0x03DB7914: 880000b5  cbnz x8, #0x3db7924
0x03DB7918: e00314aa  mov x0, x20
0x03DB791C: d77bce97  bl #0x3156878
0x03DB7920: 881e40f9  ldr x8, [x20, #0x38]
0x03DB7924: a9c401f0  adrp x9, #0x764e000
0x03DB7928: 29ad42f9  ldr x9, [x9, #0x558]
0x03DB792C: 140140f9  ldr x20, [x8]
0x03DB7930: 200140f9  ldr x0, [x9]
0x03DB7934: 09e040b9  ldr w9, [x0, #0xe0]
0x03DB7938: 49000035  cbnz w9, #0x3db7940
0x03DB793C: 9424cf97  bl #0x3180b8c
0x03DB7940: e00314aa  mov x0, x20
0x03DB7944: e1031faa  mov x1, xzr
0x03DB7948: 1fb66394  bl #0x56a51c4
0x03DB794C: 681e40f9  ldr x8, [x19, #0x38]
0x03DB7950: e80800b4  cbz x8, #0x3db7a6c
0x03DB7954: 29c60190  adrp x9, #0x767b000
0x03DB7958: 290943f9  ldr x9, [x9, #0x610]
0x03DB795C: f60300aa  mov x22, x0
0x03DB7960: e00308aa  mov x0, x8
0x03DB7964: e10316aa  mov x1, x22
0x03DB7968: 220140f9  ldr x2, [x9]
0x03DB796C: 81ad4494  bl #0x4ee2f70
0x03DB7970: f403002a  mov w20, w0
0x03DB7974: 00070037  tbnz w0, #0, #0x3db7a54
0x03DB7978: b50700b4  cbz x21, #0x3db7a6c
0x03DB797C: a80e40f9  ldr x8, [x21, #0x18]
0x03DB7980: a02240f9  ldr x0, [x21, #0x40]
0x03DB7984: a11640f9  ldr x1, [x21, #0x28]
0x03DB7988: 00013fd6  blr x8
0x03DB798C: 681e40f9  ldr x8, [x19, #0x38]
0x03DB7990: e80600b4  cbz x8, #0x3db7a6c
0x03DB7994: 29c60190  adrp x9, #0x767b000
0x03DB7998: 290d43f9  ldr x9, [x9, #0x618]
0x03DB799C: f50300aa  mov x21, x0
0x03DB79A0: e00308aa  mov x0, x8
0x03DB79A4: e10316aa  mov x1, x22
0x03DB79A8: 230140f9  ldr x3, [x9]
0x03DB79AC: e20315aa  mov x2, x21
0x03DB79B0: f3ac4494  bl #0x4ee2d7c
0x03DB79B4: 28c60190  adrp x8, #0x767b000
0x03DB79B8: 081143f9  ldr x8, [x8, #0x620]
0x03DB79BC: e00315aa  mov x0, x21
0x03DB79C0: 010140f9  ldr x1, [x8]
0x03DB79C4: 7324cf97  bl #0x3180b90
0x03DB79C8: c00300b4  cbz x0, #0x3db7a40
0x03DB79CC: e10300aa  mov x1, x0
0x03DB79D0: 601a40f9  ldr x0, [x19, #0x30]
0x03DB79D4: c00400b4  cbz x0, #0x3db7a6c
0x03DB79D8: 29c60190  adrp x9, #0x767b000
0x03DB79DC: 291543f9  ldr x9, [x9, #0x628]
0x03DB79E0: 0a1c40b9  ldr w10, [x0, #0x1c]
0x03DB79E4: 080840f9  ldr x8, [x0, #0x10]
0x03DB79E8: 290140f9  ldr x9, [x9]
0x03DB79EC: 4a050011  add w10, w10, #1
0x03DB79F0: 0a1c00b9  str w10, [x0, #0x1c]
0x03DB79F4: c80300b4  cbz x8, #0x3db7a6c
0x03DB79F8: 0a1880b9  ldrsw x10, [x0, #0x18]
0x03DB79FC: 0b1940b9  ldr w11, [x8, #0x18]
0x03DB7A00: 5f010b6b  cmp w10, w11
0x03DB7A04: 02010054  b.hs #0x3db7a24
0x03DB7A08: 49050011  add w9, w10, #1
0x03DB7A0C: 080d0a8b  add x8, x8, x10, lsl #3
0x03DB7A10: 091800b9  str w9, [x0, #0x18]
0x03DB7A14: 010d02f8  str x1, [x8, #0x20]!
0x03DB7A18: e00308aa  mov x0, x8
0x03DB7A1C: ea23cf97  bl #0x31809c4
0x03DB7A20: 05000014  b #0x3db7a34
0x03DB7A24: 281140f9  ldr x8, [x9, #0x20]
0x03DB7A28: 086140f9  ldr x8, [x8, #0xc0]
0x03DB7A2C: 023940f9  ldr x2, [x8, #0x70]
0x03DB7A30: 8f320a94  bl #0x404446c
0x03DB7A34: e00313aa  mov x0, x19
0x03DB7A38: e1031faa  mov x1, xzr
0x03DB7A3C: 13bf9794  bl #0x63a7688
0x03DB7A40: 601640f9  ldr x0, [x19, #0x28]
0x03DB7A44: 400100b4  cbz x0, #0x3db7a6c
0x03DB7A48: e10315aa  mov x1, x21
0x03DB7A4C: e2031faa  mov x2, xzr
0x03DB7A50: 0a15d094  bl #0x71bce78
0x03DB7A54: e803342a  mvn w8, w20
0x03DB7A58: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03DB7A5C: f65741a9  ldp x22, x21, [sp, #0x10]
0x03DB7A60: 00010012  and w0, w8, #1
0x03DB7A64: fe0743f8  ldr x30, [sp], #0x30
0x03DB7A68: c0035fd6  ret
0x03DB7A6C: 9024cf97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DB7564 | MergeEngine.ECS.Systems.SystemManager$$GetSystem<object>
; native signature: Il2CppObject* MergeEngine_ECS_Systems_SystemManager__GetSystem_object_ (MergeEngine_ECS_Systems_SystemManager_o* __this, const MethodInfo_3DB7564* method);
; bytes=696 sha256=dd619d84593b1726b199b83515c3711eb1267f7b561e24c41851fd09ca03343d status=arm64_complete_bound indexed_start=True
0x03DB7564: ff4301d1  sub sp, sp, #0x50
0x03DB7568: fe6701a9  stp x30, x25, [sp, #0x10]
0x03DB756C: f85f02a9  stp x24, x23, [sp, #0x20]
0x03DB7570: f65703a9  stp x22, x21, [sp, #0x30]
0x03DB7574: f44f04a9  stp x20, x19, [sp, #0x40]
0x03DB7578: 281c40f9  ldr x8, [x1, #0x38]
0x03DB757C: f30301aa  mov x19, x1
0x03DB7580: f40300aa  mov x20, x0
0x03DB7584: a80200b5  cbnz x8, #0x3db75d8
0x03DB7588: 20c60190  adrp x0, #0x767b000
0x03DB758C: 00fc42f9  ldr x0, [x0, #0x5f8]
0x03DB7590: 2225cf97  bl #0x3180a18
0x03DB7594: 20c60190  adrp x0, #0x767b000
0x03DB7598: 000043f9  ldr x0, [x0, #0x600]
0x03DB759C: 1f25cf97  bl #0x3180a18
0x03DB75A0: 20c60190  adrp x0, #0x767b000
0x03DB75A4: 000443f9  ldr x0, [x0, #0x608]
0x03DB75A8: 1c25cf97  bl #0x3180a18
0x03DB75AC: a0c401f0  adrp x0, #0x764e000
0x03DB75B0: 004847f9  ldr x0, [x0, #0xe90]
0x03DB75B4: 1925cf97  bl #0x3180a18
0x03DB75B8: a0c401f0  adrp x0, #0x764e000
0x03DB75BC: 00ac42f9  ldr x0, [x0, #0x558]
0x03DB75C0: 1625cf97  bl #0x3180a18
0x03DB75C4: 681e40f9  ldr x8, [x19, #0x38]
0x03DB75C8: 880000b5  cbnz x8, #0x3db75d8
0x03DB75CC: e00313aa  mov x0, x19
0x03DB75D0: aa7cce97  bl #0x3156878
0x03DB75D4: 681e40f9  ldr x8, [x19, #0x38]
0x03DB75D8: b9c401f0  adrp x25, #0x764e000
0x03DB75DC: 39af42f9  ldr x25, [x25, #0x558]
0x03DB75E0: ff0700f9  str xzr, [sp, #8]
0x03DB75E4: 951e40f9  ldr x21, [x20, #0x38]
0x03DB75E8: 160140f9  ldr x22, [x8]
0x03DB75EC: 200340f9  ldr x0, [x25]
0x03DB75F0: 09e040b9  ldr w9, [x0, #0xe0]
0x03DB75F4: 49000035  cbnz w9, #0x3db75fc
0x03DB75F8: 6525cf97  bl #0x3180b8c
0x03DB75FC: e00316aa  mov x0, x22
0x03DB7600: e1031faa  mov x1, xzr
0x03DB7604: f0b66394  bl #0x56a51c4
0x03DB7608: 951000b4  cbz x21, #0x3db7818
0x03DB760C: 38c60190  adrp x24, #0x767b000
0x03DB7610: 18ff42f9  ldr x24, [x24, #0x5f8]
0x03DB7614: e10300aa  mov x1, x0
0x03DB7618: e2230091  add x2, sp, #8
0x03DB761C: e00315aa  mov x0, x21
0x03DB7620: 030340f9  ldr x3, [x24]
0x03DB7624: a3b44494  bl #0x4ee48b0
0x03DB7628: 600b0037  tbnz w0, #0, #0x3db7794
0x03DB762C: 801e40f9  ldr x0, [x20, #0x38]
0x03DB7630: 400f00b4  cbz x0, #0x3db7818
0x03DB7634: 28c60190  adrp x8, #0x767b000
0x03DB7638: 080143f9  ldr x8, [x8, #0x600]
0x03DB763C: 010140f9  ldr x1, [x8]
0x03DB7640: 07ad4494  bl #0x4ee2a5c
0x03DB7644: 681e40f9  ldr x8, [x19, #0x38]
0x03DB7648: f50300aa  mov x21, x0
0x03DB764C: 080940f9  ldr x8, [x8, #0x10]
0x03DB7650: 09d54439  ldrb w9, [x8, #0x135]
0x03DB7654: 89000037  tbnz w9, #0, #0x3db7664
0x03DB7658: e00308aa  mov x0, x8
0x03DB765C: 707cce97  bl #0x315681c
0x03DB7660: e80300aa  mov x8, x0
0x03DB7664: 09e140b9  ldr w9, [x8, #0xe0]
0x03DB7668: 69000035  cbnz w9, #0x3db7674
0x03DB766C: e00308aa  mov x0, x8
0x03DB7670: 4725cf97  bl #0x3180b8c
0x03DB7674: 681e40f9  ldr x8, [x19, #0x38]
0x03DB7678: 000940f9  ldr x0, [x8, #0x10]
0x03DB767C: 08d44439  ldrb w8, [x0, #0x135]
0x03DB7680: 48000037  tbnz w8, #0, #0x3db7688
0x03DB7684: 667cce97  bl #0x315681c
0x03DB7688: 085c40f9  ldr x8, [x0, #0xb8]
0x03DB768C: 160540f9  ldr x22, [x8, #8]
0x03DB7690: 560500b5  cbnz x22, #0x3db7738
0x03DB7694: 681e40f9  ldr x8, [x19, #0x38]
0x03DB7698: 000940f9  ldr x0, [x8, #0x10]
0x03DB769C: 08d44439  ldrb w8, [x0, #0x135]
0x03DB76A0: 48000037  tbnz w8, #0, #0x3db76a8
0x03DB76A4: 5e7cce97  bl #0x315681c
0x03DB76A8: 08e040b9  ldr w8, [x0, #0xe0]
0x03DB76AC: 48000035  cbnz w8, #0x3db76b4
0x03DB76B0: 3725cf97  bl #0x3180b8c
0x03DB76B4: 681e40f9  ldr x8, [x19, #0x38]
0x03DB76B8: 000940f9  ldr x0, [x8, #0x10]
0x03DB76BC: 08d44439  ldrb w8, [x0, #0x135]
0x03DB76C0: 48000037  tbnz w8, #0, #0x3db76c8
0x03DB76C4: 567cce97  bl #0x315681c
0x03DB76C8: a9c401f0  adrp x9, #0x764e000
0x03DB76CC: 085c40f9  ldr x8, [x0, #0xb8]
0x03DB76D0: 294947f9  ldr x9, [x9, #0xe90]
0x03DB76D4: 170140f9  ldr x23, [x8]
0x03DB76D8: 200140f9  ldr x0, [x9]
0x03DB76DC: 7125cf97  bl #0x3180ca0
0x03DB76E0: 681e40f9  ldr x8, [x19, #0x38]
0x03DB76E4: e10317aa  mov x1, x23
0x03DB76E8: e3031faa  mov x3, xzr
0x03DB76EC: f60300aa  mov x22, x0
0x03DB76F0: 020d40f9  ldr x2, [x8, #0x18]
0x03DB76F4: 327a5294  bl #0x5255fbc
0x03DB76F8: 681e40f9  ldr x8, [x19, #0x38]
0x03DB76FC: 000940f9  ldr x0, [x8, #0x10]
0x03DB7700: 08d44439  ldrb w8, [x0, #0x135]
0x03DB7704: 48000037  tbnz w8, #0, #0x3db770c
0x03DB7708: 457cce97  bl #0x315681c
0x03DB770C: 085c40f9  ldr x8, [x0, #0xb8]
0x03DB7710: 160500f9  str x22, [x8, #8]
0x03DB7714: 681e40f9  ldr x8, [x19, #0x38]
0x03DB7718: 000940f9  ldr x0, [x8, #0x10]
0x03DB771C: 08d44439  ldrb w8, [x0, #0x135]
0x03DB7720: 48000037  tbnz w8, #0, #0x3db7728
0x03DB7724: 3e7cce97  bl #0x315681c
0x03DB7728: 085c40f9  ldr x8, [x0, #0xb8]
0x03DB772C: e10316aa  mov x1, x22
0x03DB7730: 00210091  add x0, x8, #8
0x03DB7734: a424cf97  bl #0x31809c4
0x03DB7738: 28c60190  adrp x8, #0x767b000
0x03DB773C: 080543f9  ldr x8, [x8, #0x608]
0x03DB7740: e00315aa  mov x0, x21
0x03DB7744: e10316aa  mov x1, x22
0x03DB7748: 020140f9  ldr x2, [x8]
0x03DB774C: 7936fa97  bl #0x3c45130
0x03DB7750: 280340f9  ldr x8, [x25]
0x03DB7754: f50300aa  mov x21, x0
0x03DB7758: 09e140b9  ldr w9, [x8, #0xe0]
0x03DB775C: 69000035  cbnz w9, #0x3db7768
0x03DB7760: e00308aa  mov x0, x8
0x03DB7764: 0a25cf97  bl #0x3180b8c
0x03DB7768: e00315aa  mov x0, x21
0x03DB776C: e1031faa  mov x1, xzr
0x03DB7770: e2031faa  mov x2, xzr
0x03DB7774: 32e16394  bl #0x56afc3c
0x03DB7778: e0000036  tbz w0, #0, #0x3db7794
0x03DB777C: 801e40f9  ldr x0, [x20, #0x38]
0x03DB7780: c00400b4  cbz x0, #0x3db7818
0x03DB7784: 030340f9  ldr x3, [x24]
0x03DB7788: e2230091  add x2, sp, #8
0x03DB778C: e10315aa  mov x1, x21
0x03DB7790: 48b44494  bl #0x4ee48b0
0x03DB7794: 681e40f9  ldr x8, [x19, #0x38]
0x03DB7798: f40740f9  ldr x20, [sp, #8]
0x03DB779C: 011140f9  ldr x1, [x8, #0x20]
0x03DB77A0: 28d44439  ldrb w8, [x1, #0x135]
0x03DB77A4: 88000037  tbnz w8, #0, #0x3db77b4
0x03DB77A8: e00301aa  mov x0, x1
0x03DB77AC: 1c7cce97  bl #0x315681c
0x03DB77B0: e10300aa  mov x1, x0
0x03DB77B4: e00314aa  mov x0, x20
0x03DB77B8: f624cf97  bl #0x3180b90
0x03DB77BC: 681e40f9  ldr x8, [x19, #0x38]
0x03DB77C0: f40300aa  mov x20, x0
0x03DB77C4: 131140f9  ldr x19, [x8, #0x20]
0x03DB77C8: 68d64439  ldrb w8, [x19, #0x135]
0x03DB77CC: 88000037  tbnz w8, #0, #0x3db77dc
0x03DB77D0: e00313aa  mov x0, x19
0x03DB77D4: 127cce97  bl #0x315681c
0x03DB77D8: f30300aa  mov x19, x0
0x03DB77DC: 140100b4  cbz x20, #0x3db77fc
0x03DB77E0: e00314aa  mov x0, x20
0x03DB77E4: e10313aa  mov x1, x19
0x03DB77E8: ea24cf97  bl #0x3180b90
0x03DB77EC: a00000b5  cbnz x0, #0x3db7800
0x03DB77F0: e00314aa  mov x0, x20
0x03DB77F4: e10313aa  mov x1, x19
0x03DB77F8: 1426cf97  bl #0x3181048
0x03DB77FC: e0031faa  mov x0, xzr
0x03DB7800: f44f44a9  ldp x20, x19, [sp, #0x40]
0x03DB7804: f65743a9  ldp x22, x21, [sp, #0x30]
0x03DB7808: f85f42a9  ldp x24, x23, [sp, #0x20]
0x03DB780C: fe6741a9  ldp x30, x25, [sp, #0x10]
0x03DB7810: ff430191  add sp, sp, #0x50
0x03DB7814: c0035fd6  ret
0x03DB7818: 2525cf97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DB7A70 | MergeEngine.ECS.Systems.SystemManager$$RemoveSystem<object>
; native signature: bool MergeEngine_ECS_Systems_SystemManager__RemoveSystem_object_ (MergeEngine_ECS_Systems_SystemManager_o* __this, const MethodInfo_3DB7A70* method);
; bytes=324 sha256=91103e661a871def28144974c04f94240f9936bbdb65f600498ef262229d5803 status=arm64_complete_bound indexed_start=True
0x03DB7A70: ffc300d1  sub sp, sp, #0x30
0x03DB7A74: fe5701a9  stp x30, x21, [sp, #0x10]
0x03DB7A78: f44f02a9  stp x20, x19, [sp, #0x20]
0x03DB7A7C: 281c40f9  ldr x8, [x1, #0x38]
0x03DB7A80: f30300aa  mov x19, x0
0x03DB7A84: c80200b5  cbnz x8, #0x3db7adc
0x03DB7A88: 20c60190  adrp x0, #0x767b000
0x03DB7A8C: 001843f9  ldr x0, [x0, #0x630]
0x03DB7A90: f40301aa  mov x20, x1
0x03DB7A94: e123cf97  bl #0x3180a18
0x03DB7A98: 20c60190  adrp x0, #0x767b000
0x03DB7A9C: 00fc42f9  ldr x0, [x0, #0x5f8]
0x03DB7AA0: de23cf97  bl #0x3180a18
0x03DB7AA4: 20c60190  adrp x0, #0x767b000
0x03DB7AA8: 001043f9  ldr x0, [x0, #0x620]
0x03DB7AAC: db23cf97  bl #0x3180a18
0x03DB7AB0: 20c60190  adrp x0, #0x767b000
0x03DB7AB4: 001c43f9  ldr x0, [x0, #0x638]
0x03DB7AB8: d823cf97  bl #0x3180a18
0x03DB7ABC: a0c401f0  adrp x0, #0x764e000
0x03DB7AC0: 00ac42f9  ldr x0, [x0, #0x558]
0x03DB7AC4: d523cf97  bl #0x3180a18
0x03DB7AC8: 881e40f9  ldr x8, [x20, #0x38]
0x03DB7ACC: 880000b5  cbnz x8, #0x3db7adc
0x03DB7AD0: e00314aa  mov x0, x20
0x03DB7AD4: 697bce97  bl #0x3156878
0x03DB7AD8: 881e40f9  ldr x8, [x20, #0x38]
0x03DB7ADC: a9c401f0  adrp x9, #0x764e000
0x03DB7AE0: 29ad42f9  ldr x9, [x9, #0x558]
0x03DB7AE4: ff0700f9  str xzr, [sp, #8]
0x03DB7AE8: 140140f9  ldr x20, [x8]
0x03DB7AEC: 200140f9  ldr x0, [x9]
0x03DB7AF0: 09e040b9  ldr w9, [x0, #0xe0]
0x03DB7AF4: 49000035  cbnz w9, #0x3db7afc
0x03DB7AF8: 2524cf97  bl #0x3180b8c
0x03DB7AFC: e00314aa  mov x0, x20
0x03DB7B00: e1031faa  mov x1, xzr
0x03DB7B04: b0b56394  bl #0x56a51c4
0x03DB7B08: 681e40f9  ldr x8, [x19, #0x38]
0x03DB7B0C: 280500b4  cbz x8, #0x3db7bb0
0x03DB7B10: 29c60190  adrp x9, #0x767b000
0x03DB7B14: 29fd42f9  ldr x9, [x9, #0x5f8]
0x03DB7B18: f50300aa  mov x21, x0
0x03DB7B1C: e2230091  add x2, sp, #8
0x03DB7B20: e00308aa  mov x0, x8
0x03DB7B24: 230140f9  ldr x3, [x9]
0x03DB7B28: e10315aa  mov x1, x21
0x03DB7B2C: 61b34494  bl #0x4ee48b0
0x03DB7B30: f40740f9  ldr x20, [sp, #8]
0x03DB7B34: 340300b4  cbz x20, #0x3db7b98
0x03DB7B38: 28c60190  adrp x8, #0x767b000
0x03DB7B3C: 081143f9  ldr x8, [x8, #0x620]
0x03DB7B40: e00314aa  mov x0, x20
0x03DB7B44: 010140f9  ldr x1, [x8]
0x03DB7B48: 1224cf97  bl #0x3180b90
0x03DB7B4C: 000100b4  cbz x0, #0x3db7b6c
0x03DB7B50: e10300aa  mov x1, x0
0x03DB7B54: 601a40f9  ldr x0, [x19, #0x30]
0x03DB7B58: c00200b4  cbz x0, #0x3db7bb0
0x03DB7B5C: 28c60190  adrp x8, #0x767b000
0x03DB7B60: 081d43f9  ldr x8, [x8, #0x638]
0x03DB7B64: 020140f9  ldr x2, [x8]
0x03DB7B68: e4370a94  bl #0x4045af8
0x03DB7B6C: 601e40f9  ldr x0, [x19, #0x38]
0x03DB7B70: 000200b4  cbz x0, #0x3db7bb0
0x03DB7B74: 28c60190  adrp x8, #0x767b000
0x03DB7B78: 081943f9  ldr x8, [x8, #0x630]
0x03DB7B7C: e10315aa  mov x1, x21
0x03DB7B80: 020140f9  ldr x2, [x8]
0x03DB7B84: bdb14494  bl #0x4ee4278
0x03DB7B88: e00740f9  ldr x0, [sp, #8]
0x03DB7B8C: 200100b4  cbz x0, #0x3db7bb0
0x03DB7B90: e1031faa  mov x1, xzr
0x03DB7B94: 7ebd9794  bl #0x63a718c
0x03DB7B98: 9f0200f1  cmp x20, #0
0x03DB7B9C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03DB7BA0: fe5741a9  ldp x30, x21, [sp, #0x10]
0x03DB7BA4: e0079f1a  cset w0, ne
0x03DB7BA8: ffc30091  add sp, sp, #0x30
0x03DB7BAC: c0035fd6  ret
0x03DB7BB0: 3f24cf97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DB781C | MergeEngine.ECS.Systems.SystemManager$$HasSystem<object>
; native signature: bool MergeEngine_ECS_Systems_SystemManager__HasSystem_object_ (MergeEngine_ECS_Systems_SystemManager_o* __this, const MethodInfo_3DB781C* method);
; bytes=152 sha256=916d2051fd7b2ad124f800658e253ef15af104a76696c7972c3feb84b8a2f04f status=arm64_complete_bound indexed_start=True
0x03DB781C: fe0f1ef8  str x30, [sp, #-0x20]!
0x03DB7820: f44f01a9  stp x20, x19, [sp, #0x10]
0x03DB7824: 281c40f9  ldr x8, [x1, #0x38]
0x03DB7828: f30300aa  mov x19, x0
0x03DB782C: a80100b5  cbnz x8, #0x3db7860
0x03DB7830: 20c60190  adrp x0, #0x767b000
0x03DB7834: 000843f9  ldr x0, [x0, #0x610]
0x03DB7838: f40301aa  mov x20, x1
0x03DB783C: 7724cf97  bl #0x3180a18
0x03DB7840: a0c401f0  adrp x0, #0x764e000
0x03DB7844: 00ac42f9  ldr x0, [x0, #0x558]
0x03DB7848: 7424cf97  bl #0x3180a18
0x03DB784C: 881e40f9  ldr x8, [x20, #0x38]
0x03DB7850: 880000b5  cbnz x8, #0x3db7860
0x03DB7854: e00314aa  mov x0, x20
0x03DB7858: 087cce97  bl #0x3156878
0x03DB785C: 881e40f9  ldr x8, [x20, #0x38]
0x03DB7860: a9c401f0  adrp x9, #0x764e000
0x03DB7864: 29ad42f9  ldr x9, [x9, #0x558]
0x03DB7868: 140140f9  ldr x20, [x8]
0x03DB786C: 200140f9  ldr x0, [x9]
0x03DB7870: 09e040b9  ldr w9, [x0, #0xe0]
0x03DB7874: 49000035  cbnz w9, #0x3db787c
0x03DB7878: c524cf97  bl #0x3180b8c
0x03DB787C: e00314aa  mov x0, x20
0x03DB7880: e1031faa  mov x1, xzr
0x03DB7884: 50b66394  bl #0x56a51c4
0x03DB7888: 681e40f9  ldr x8, [x19, #0x38]
0x03DB788C: 280100b4  cbz x8, #0x3db78b0
0x03DB7890: 29c60190  adrp x9, #0x767b000
0x03DB7894: 290943f9  ldr x9, [x9, #0x610]
0x03DB7898: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03DB789C: e10300aa  mov x1, x0
0x03DB78A0: e00308aa  mov x0, x8
0x03DB78A4: 220140f9  ldr x2, [x9]
0x03DB78A8: fe0742f8  ldr x30, [sp], #0x20
0x03DB78AC: b1ad4414  b #0x4ee2f70
0x03DB78B0: ff24cf97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DB73F0 | MergeEngine.ECS.Systems.SystemManager$$<AddSystem>b__12_0<object>
; native signature: Il2CppObject* MergeEngine_ECS_Systems_SystemManager___AddSystem_b__12_0_object_ (MergeEngine_ECS_Systems_SystemManager_o* __this, const MethodInfo_3DB73F0* method);
; bytes=64 sha256=581a74a0825bd8d87cbe53d58eee685c70da2f4ee52597c96abfd5b2f1c8bb23 status=arm64_complete_bound indexed_start=True
0x03DB73F0: fe0f1ef8  str x30, [sp, #-0x20]!
0x03DB73F4: f44f01a9  stp x20, x19, [sp, #0x10]
0x03DB73F8: 281c40f9  ldr x8, [x1, #0x38]
0x03DB73FC: f30301aa  mov x19, x1
0x03DB7400: f40300aa  mov x20, x0
0x03DB7404: 680000b5  cbnz x8, #0x3db7410
0x03DB7408: e00313aa  mov x0, x19
0x03DB740C: 1b7dce97  bl #0x3156878
0x03DB7410: 800a40f9  ldr x0, [x20, #0x10]
0x03DB7414: c00000b4  cbz x0, #0x3db742c
0x03DB7418: 681e40f9  ldr x8, [x19, #0x38]
0x03DB741C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03DB7420: 010140f9  ldr x1, [x8]
0x03DB7424: fe0742f8  ldr x30, [sp], #0x20
0x03DB7428: 2136f917  b #0x3c04cac
0x03DB742C: 2026cf97  bl #0x3180cac

