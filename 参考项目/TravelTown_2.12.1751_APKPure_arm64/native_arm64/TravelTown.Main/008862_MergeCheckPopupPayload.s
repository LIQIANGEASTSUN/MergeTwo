; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 8862 Merger.Game.Views.Popups.Data.MergeCheckPopupPayload
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x66F2410 | public MergeCheckItemType get_MergeCheckType() { }
; bytes=8 sha256=6f1929ee2376e6ada94db6d2aafe012dfc8382613e73b99aea0c7dea270fac13 status=arm64_complete_bound indexed_start=True
0x066F2410: 001040b9  ldr w0, [x0, #0x10]
0x066F2414: c0035fd6  ret

; RVA 0x66F2418 | public BoardItemPosition get_FirstItem() { }
; bytes=8 sha256=dc8b3404cbefc1f298a6f8e576a2730bfce403d5309089a5668b64e99ea1b92c status=arm64_complete_bound indexed_start=True
0x066F2418: 004041f8  ldur x0, [x0, #0x14]
0x066F241C: c0035fd6  ret

; RVA 0x66F2420 | public BoardItemPosition get_SecondItem() { }
; bytes=8 sha256=d477916a2bafa522dd82b14bbbdd9e9ebc192bfc1c47fd3b345bb44f82868b97 status=arm64_complete_bound indexed_start=True
0x066F2420: 00c041f8  ldur x0, [x0, #0x1c]
0x066F2424: c0035fd6  ret

; RVA 0x66F2428 | public IItem get_CheckInitiatingItem() { }
; bytes=8 sha256=c0b9896d6c3d8aacf384c0d0cf5d897e84f621efe31cc89c980be348eb9c6614 status=arm64_complete_bound indexed_start=True
0x066F2428: 001440f9  ldr x0, [x0, #0x28]
0x066F242C: c0035fd6  ret

; RVA 0x66F2430 | public IItem get_MergeItem() { }
; bytes=8 sha256=6b819324b4a3bc2d390c83c7fe02ea41a1f57ae5d4f2a9b0c9256341a5b8d37f status=arm64_complete_bound indexed_start=True
0x066F2430: 001840f9  ldr x0, [x0, #0x30]
0x066F2434: c0035fd6  ret

; RVA 0x66F2438 | public IItem get_FirstResultItem() { }
; bytes=8 sha256=095bb56e13b6dfde16ade0b592279392884c282a7c7810cb58472b839de552de status=arm64_complete_bound indexed_start=True
0x066F2438: 001c40f9  ldr x0, [x0, #0x38]
0x066F243C: c0035fd6  ret

; RVA 0x66F2440 | public IItem get_SecondResultItem() { }
; bytes=8 sha256=ac1915dbf8ae56825a9e0c79c21190a655d4b32b9c10f299546aad7c9ecadc66 status=arm64_complete_bound indexed_start=True
0x066F2440: 002040f9  ldr x0, [x0, #0x40]
0x066F2444: c0035fd6  ret

; RVA 0x66F2448 | public Action<BoardItemPosition, BoardItemPosition> get_YesAction() { }
; bytes=8 sha256=62c64bd585db7a91917843362bb75aa8dd20b002bce4874891b0b3ec8fd242b9 status=arm64_complete_bound indexed_start=True
0x066F2448: 002440f9  ldr x0, [x0, #0x48]
0x066F244C: c0035fd6  ret

; RVA 0x66F2450 | public Action get_NoAction() { }
; bytes=8 sha256=989bb1a041c93e09fa2954014eaba1a46b19128664c6bbb210694e0989f09532 status=arm64_complete_bound indexed_start=True
0x066F2450: 002840f9  ldr x0, [x0, #0x50]
0x066F2454: c0035fd6  ret

; RVA 0x66F2458 | public void .ctor(MergeCheckItemType mergeCheckType, BoardItemPosition firstItem, BoardItemPosition secondItem, Action<BoardItemPosition, BoardItemPosition> successAction, IItem checkInitiatingItem, IItem mergeItem, IItem firstResultItem, IItem secondResultItem, Action failAction) { }
; bytes=200 sha256=fc0c55d45346377e9d177d5c1c473ffa2d0aec20ebbe9e064c3dcfdc7650085e status=arm64_complete_bound indexed_start=True
0x066F2458: fe0f1af8  str x30, [sp, #-0x60]!
0x066F245C: fc6f01a9  stp x28, x27, [sp, #0x10]
0x066F2460: fa6702a9  stp x26, x25, [sp, #0x20]
0x066F2464: f85f03a9  stp x24, x23, [sp, #0x30]
0x066F2468: f65704a9  stp x22, x21, [sp, #0x40]
0x066F246C: f44f05a9  stp x20, x19, [sp, #0x50]
0x066F2470: fb6b46a9  ldp x27, x26, [sp, #0x60]
0x066F2474: f903012a  mov w25, w1
0x066F2478: e1031faa  mov x1, xzr
0x066F247C: f30307aa  mov x19, x7
0x066F2480: f40306aa  mov x20, x6
0x066F2484: f50305aa  mov x21, x5
0x066F2488: f60304aa  mov x22, x4
0x066F248C: f70303aa  mov x23, x3
0x066F2490: f80302aa  mov x24, x2
0x066F2494: fc0300aa  mov x28, x0
0x066F2498: 59a0bf97  bl #0x56da5fc
0x066F249C: e0031caa  mov x0, x28
0x066F24A0: 991300b9  str w25, [x28, #0x10]
0x066F24A4: 984301f8  stur x24, [x28, #0x14]
0x066F24A8: 97c301f8  stur x23, [x28, #0x1c]
0x066F24AC: 158c02f8  str x21, [x0, #0x28]!
0x066F24B0: e10315aa  mov x1, x21
0x066F24B4: 44392a97  bl #0x31809c4
0x066F24B8: e0031caa  mov x0, x28
0x066F24BC: 140c03f8  str x20, [x0, #0x30]!
0x066F24C0: e10314aa  mov x1, x20
0x066F24C4: 40392a97  bl #0x31809c4
0x066F24C8: e0031caa  mov x0, x28
0x066F24CC: 138c03f8  str x19, [x0, #0x38]!
0x066F24D0: e10313aa  mov x1, x19
0x066F24D4: 3c392a97  bl #0x31809c4
0x066F24D8: e0031caa  mov x0, x28
0x066F24DC: 1b0c04f8  str x27, [x0, #0x40]!
0x066F24E0: e1031baa  mov x1, x27
0x066F24E4: 38392a97  bl #0x31809c4
0x066F24E8: e0031caa  mov x0, x28
0x066F24EC: 168c04f8  str x22, [x0, #0x48]!
0x066F24F0: e10316aa  mov x1, x22
0x066F24F4: 34392a97  bl #0x31809c4
0x066F24F8: 9a0f05f8  str x26, [x28, #0x50]!
0x066F24FC: e0031caa  mov x0, x28
0x066F2500: e1031aaa  mov x1, x26
0x066F2504: f44f45a9  ldp x20, x19, [sp, #0x50]
0x066F2508: f65744a9  ldp x22, x21, [sp, #0x40]
0x066F250C: f85f43a9  ldp x24, x23, [sp, #0x30]
0x066F2510: fa6742a9  ldp x26, x25, [sp, #0x20]
0x066F2514: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x066F2518: fe0746f8  ldr x30, [sp], #0x60
0x066F251C: 2a392a17  b #0x31809c4

