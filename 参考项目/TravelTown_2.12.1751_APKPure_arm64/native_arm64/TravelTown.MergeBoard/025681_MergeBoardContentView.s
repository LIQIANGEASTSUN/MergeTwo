; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25681 Merger.MergeBoard.View.MergeBoardContentView
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A37090 | public MergeBoardLayout get_Layout() { }
; bytes=8 sha256=c0b9896d6c3d8aacf384c0d0cf5d897e84f621efe31cc89c980be348eb9c6614 status=arm64_complete_bound indexed_start=True
0x06A37090: 001440f9  ldr x0, [x0, #0x28]
0x06A37094: c0035fd6  ret

; RVA 0x6A37098 | public MergeBoardItemsContainer get_ItemsContainer() { }
; bytes=8 sha256=6b819324b4a3bc2d390c83c7fe02ea41a1f57ae5d4f2a9b0c9256341a5b8d37f status=arm64_complete_bound indexed_start=True
0x06A37098: 001840f9  ldr x0, [x0, #0x30]
0x06A3709C: c0035fd6  ret

; RVA 0x6A370A0 | public Vector2 get_CurrentOffset() { }
; bytes=8 sha256=af08016fbfb0696f6c55d3d0983c27420d01d8ba51f1f801312850e9f66def4a status=arm64_complete_bound indexed_start=True
0x06A370A0: 0004492d  ldp s0, s1, [x0, #0x48]
0x06A370A4: c0035fd6  ret

; RVA 0x6A370A8 | private void set_CurrentOffset(Vector2 value) { }
; bytes=8 sha256=28c4c269c4aad912e59a0f97e215bd1dd3f6e536523d2ab10a7664ad101e9607 status=arm64_complete_bound indexed_start=True
0x06A370A8: 0004092d  stp s0, s1, [x0, #0x48]
0x06A370AC: c0035fd6  ret

; RVA 0x6A370B0 | private void Awake() { }
; bytes=84 sha256=e946c8555fa4c301185b7988a46bb6fadb690d61c6c2dbbaf81dfa187845f07f status=arm64_complete_bound indexed_start=True
0x06A370B0: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x06A370B4: f30300aa  mov x19, x0
0x06A370B8: 001440f9  ldr x0, [x0, #0x28]
0x06A370BC: 200200b4  cbz x0, #0x6a37100
0x06A370C0: e1031faa  mov x1, xzr
0x06A370C4: 99cff997  bl #0x68aaf28
0x06A370C8: c00100b4  cbz x0, #0x6a37100
0x06A370CC: e1031faa  mov x1, xzr
0x06A370D0: a5c91294  bl #0x6ee9764
0x06A370D4: 601a40f9  ldr x0, [x19, #0x30]
0x06A370D8: 6006072d  stp s0, s1, [x19, #0x38]
0x06A370DC: 200100b4  cbz x0, #0x6a37100
0x06A370E0: e1031faa  mov x1, xzr
0x06A370E4: 91cff997  bl #0x68aaf28
0x06A370E8: c00000b4  cbz x0, #0x6a37100
0x06A370EC: e1031faa  mov x1, xzr
0x06A370F0: 9dc91294  bl #0x6ee9764
0x06A370F4: 6006082d  stp s0, s1, [x19, #0x40]
0x06A370F8: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x06A370FC: c0035fd6  ret
0x06A37100: eb261d97  bl #0x3180cac

; RVA 0x6A37104 | public void SetContentOffset(Vector2 offset) { }
; bytes=116 sha256=49a1d10495871976b392397ff70e5a3b7558f10fe8bb9cf16b88ad7fba2598f1 status=arm64_complete_bound indexed_start=True
0x06A37104: e923be6d  stp d9, d8, [sp, #-0x20]!
0x06A37108: fe4f01a9  stp x30, x19, [sp, #0x10]
0x06A3710C: f30300aa  mov x19, x0
0x06A37110: 001440f9  ldr x0, [x0, #0x28]
0x06A37114: 6006092d  stp s0, s1, [x19, #0x48]
0x06A37118: e00200b4  cbz x0, #0x6a37174
0x06A3711C: e1031faa  mov x1, xzr
0x06A37120: 281ca14e  mov v8.16b, v1.16b
0x06A37124: 091ca04e  mov v9.16b, v0.16b
0x06A37128: 80cff997  bl #0x68aaf28
0x06A3712C: 400200b4  cbz x0, #0x6a37174
0x06A37130: 6202472d  ldp s2, s0, [x19, #0x38]
0x06A37134: e1031faa  mov x1, xzr
0x06A37138: 0129201e  fadd s1, s8, s0
0x06A3713C: 2029221e  fadd s0, s9, s2
0x06A37140: adc91294  bl #0x6ee97f4
0x06A37144: 601a40f9  ldr x0, [x19, #0x30]
0x06A37148: 600100b4  cbz x0, #0x6a37174
0x06A3714C: e1031faa  mov x1, xzr
0x06A37150: 76cff997  bl #0x68aaf28
0x06A37154: 000100b4  cbz x0, #0x6a37174
0x06A37158: 6202482d  ldp s2, s0, [x19, #0x40]
0x06A3715C: fe4f41a9  ldp x30, x19, [sp, #0x10]
0x06A37160: e1031faa  mov x1, xzr
0x06A37164: 0129201e  fadd s1, s8, s0
0x06A37168: 2029221e  fadd s0, s9, s2
0x06A3716C: e923c26c  ldp d9, d8, [sp], #0x20
0x06A37170: a1c91214  b #0x6ee97f4
0x06A37174: ce261d97  bl #0x3180cac

; RVA 0x6A37178 | public void .ctor() { }
; bytes=8 sha256=9e96803920e10013c36138673dbfdf18e14e98601098fc0a02f33a3ad8284f51 status=arm64_complete_bound indexed_start=True
0x06A37178: e1031faa  mov x1, xzr
0x06A3717C: 91aef917  b #0x68a2bc0

