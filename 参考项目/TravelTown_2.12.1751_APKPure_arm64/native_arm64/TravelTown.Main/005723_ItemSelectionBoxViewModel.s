; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 5723 Merger.ItemSelectionBox.ViewModels.ItemSelectionBoxViewModel
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x63E17C0 | public ObservableDictionary<string, List<IMergeItem>> get_SelectionItems() { }
; bytes=28 sha256=85cf08fabb868e24b80c3f480f12e6e04150635f640b708ad4babf0a67dd36ab status=arm64_complete_bound indexed_start=True
0x063E17C0: fe0f1ff8  str x30, [sp, #-0x10]!
0x063E17C4: 086c40f9  ldr x8, [x0, #0xd8]
0x063E17C8: 880000b4  cbz x8, #0x63e17d8
0x063E17CC: 001540f9  ldr x0, [x8, #0x28]
0x063E17D0: fe0741f8  ldr x30, [sp], #0x10
0x063E17D4: c0035fd6  ret
0x063E17D8: 357d3697  bl #0x3180cac

; RVA 0x63E2BD0 | public void SelectItem(string fromUniqueId, string toUniqueId, BoardItemPosition boardItemPosition) { }
; bytes=152 sha256=8cbd28d8932cfdaf6091095b2aa838f34650e5d1fd0f574ca0fcd1ff1325d939 status=arm64_complete_bound indexed_start=True
0x063E2BD0: fe67bca9  stp x30, x25, [sp, #-0x40]!
0x063E2BD4: f85f01a9  stp x24, x23, [sp, #0x10]
0x063E2BD8: f65702a9  stp x22, x21, [sp, #0x20]
0x063E2BDC: f44f03a9  stp x20, x19, [sp, #0x30]
0x063E2BE0: 37ca0090  adrp x23, #0x7d26000
0x063E2BE4: 999800b0  adrp x25, #0x76f3000
0x063E2BE8: 989800b0  adrp x24, #0x76f3000
0x063E2BEC: e8be4e39  ldrb w8, [x23, #0x3af]
0x063E2BF0: 395343f9  ldr x25, [x25, #0x6a0]
0x063E2BF4: 185743f9  ldr x24, [x24, #0x6a8]
0x063E2BF8: f40303aa  mov x20, x3
0x063E2BFC: f50302aa  mov x21, x2
0x063E2C00: f60301aa  mov x22, x1
0x063E2C04: f30300aa  mov x19, x0
0x063E2C08: 28010037  tbnz w8, #0, #0x63e2c2c
0x063E2C0C: 809800b0  adrp x0, #0x76f3000
0x063E2C10: 005443f9  ldr x0, [x0, #0x6a8]
0x063E2C14: 81773697  bl #0x3180a18
0x063E2C18: 809800b0  adrp x0, #0x76f3000
0x063E2C1C: 005043f9  ldr x0, [x0, #0x6a0]
0x063E2C20: 7e773697  bl #0x3180a18
0x063E2C24: 28008052  movz w8, #0x1
0x063E2C28: e8be0e39  strb w8, [x23, #0x3af]
0x063E2C2C: 200340f9  ldr x0, [x25]
0x063E2C30: 1c783697  bl #0x3180ca0
0x063E2C34: e10316aa  mov x1, x22
0x063E2C38: e20315aa  mov x2, x21
0x063E2C3C: e30314aa  mov x3, x20
0x063E2C40: f70300aa  mov x23, x0
0x063E2C44: be000094  bl #0x63e2f3c
0x063E2C48: 020340f9  ldr x2, [x24]
0x063E2C4C: e00313aa  mov x0, x19
0x063E2C50: e10317aa  mov x1, x23
0x063E2C54: f44f43a9  ldp x20, x19, [sp, #0x30]
0x063E2C58: f65742a9  ldp x22, x21, [sp, #0x20]
0x063E2C5C: f85f41a9  ldp x24, x23, [sp, #0x10]
0x063E2C60: fe67c4a8  ldp x30, x25, [sp], #0x40
0x063E2C64: dc8f5f17  b #0x3bc6bd4

; RVA 0x63E2F94 | public virtual void TransitionToMergeGraph(IMergeItem mergeItem) { }
; bytes=316 sha256=b529fb665f2916c923e594001ed96cecc0135456fa9f94fdaeb07dab31c95b10 status=arm64_complete_bound indexed_start=True
0x063E2F94: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x063E2F98: f65701a9  stp x22, x21, [sp, #0x10]
0x063E2F9C: f44f02a9  stp x20, x19, [sp, #0x20]
0x063E2FA0: 35ca0090  adrp x21, #0x7d26000
0x063E2FA4: a8c24e39  ldrb w8, [x21, #0x3b0]
0x063E2FA8: f40301aa  mov x20, x1
0x063E2FAC: f30300aa  mov x19, x0
0x063E2FB0: e8010037  tbnz w8, #0, #0x63e2fec
0x063E2FB4: 609400b0  adrp x0, #0x766f000
0x063E2FB8: 003046f9  ldr x0, [x0, #0xc60]
0x063E2FBC: 97763697  bl #0x3180a18
0x063E2FC0: a09400f0  adrp x0, #0x7679000
0x063E2FC4: 001044f9  ldr x0, [x0, #0x820]
0x063E2FC8: 94763697  bl #0x3180a18
0x063E2FCC: c09400f0  adrp x0, #0x767d000
0x063E2FD0: 00b041f9  ldr x0, [x0, #0x360]
0x063E2FD4: 91763697  bl #0x3180a18
0x063E2FD8: 809800b0  adrp x0, #0x76f3000
0x063E2FDC: 006843f9  ldr x0, [x0, #0x6d0]
0x063E2FE0: 8e763697  bl #0x3180a18
0x063E2FE4: 28008052  movz w8, #0x1
0x063E2FE8: a8c20e39  strb w8, [x21, #0x3b0]
0x063E2FEC: 140700b4  cbz x20, #0x63e30cc
0x063E2FF0: aa9400f0  adrp x10, #0x7679000
0x063E2FF4: 880240f9  ldr x8, [x20]
0x063E2FF8: 4a1144f9  ldr x10, [x10, #0x820]
0x063E2FFC: d69400f0  adrp x22, #0x767d000
0x063E3000: 95980090  adrp x21, #0x76f3000
0x063E3004: 77940090  adrp x23, #0x766f000
0x063E3008: 095d4279  ldrh w9, [x8, #0x12e]
0x063E300C: 410140f9  ldr x1, [x10]
0x063E3010: d6b241f9  ldr x22, [x22, #0x360]
0x063E3014: b56a43f9  ldr x21, [x21, #0x6d0]
0x063E3018: f73246f9  ldr x23, [x23, #0xc60]
0x063E301C: 290100b4  cbz x9, #0x63e3040
0x063E3020: 0a5940f9  ldr x10, [x8, #0xb0]
0x063E3024: 4a210091  add x10, x10, #8
0x063E3028: 4b815ff8  ldur x11, [x10, #-8]
0x063E302C: 7f0101eb  cmp x11, x1
0x063E3030: 00010054  b.eq #0x63e3050
0x063E3034: 290500f1  subs x9, x9, #1
0x063E3038: 4a410091  add x10, x10, #0x10
0x063E303C: 61ffff54  b.ne #0x63e3028
0x063E3040: e00314aa  mov x0, x20
0x063E3044: e2031f2a  mov w2, wzr
0x063E3048: b2ce3597  bl #0x3156b10
0x063E304C: 04000014  b #0x63e305c
0x063E3050: 490180b9  ldrsw x9, [x10]
0x063E3054: 0811098b  add x8, x8, x9, lsl #4
0x063E3058: 00e10491  add x0, x8, #0x138
0x063E305C: 080440a9  ldp x8, x1, [x0]
0x063E3060: e00314aa  mov x0, x20
0x063E3064: 00013fd6  blr x8
0x063E3068: c80240f9  ldr x8, [x22]
0x063E306C: f60300aa  mov x22, x0
0x063E3070: e00308aa  mov x0, x8
0x063E3074: 0b773697  bl #0x3180ca0
0x063E3078: a20240f9  ldr x2, [x21]
0x063E307C: e10314aa  mov x1, x20
0x063E3080: e30316aa  mov x3, x22
0x063E3084: e4031faa  mov x4, xzr
0x063E3088: e5031faa  mov x5, xzr
0x063E308C: f50300aa  mov x21, x0
0x063E3090: 79fa0b94  bl #0x66e1a74
0x063E3094: e00240f9  ldr x0, [x23]
0x063E3098: 08e040b9  ldr w8, [x0, #0xe0]
0x063E309C: 68000035  cbnz w8, #0x63e30a8
0x063E30A0: bb763697  bl #0x3180b8c
0x063E30A4: e00240f9  ldr x0, [x23]
0x063E30A8: 085c40f9  ldr x8, [x0, #0xb8]
0x063E30AC: e00313aa  mov x0, x19
0x063E30B0: e20315aa  mov x2, x21
0x063E30B4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x063E30B8: 011940f9  ldr x1, [x8, #0x30]
0x063E30BC: f65741a9  ldp x22, x21, [sp, #0x10]
0x063E30C0: e3031faa  mov x3, xzr
0x063E30C4: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x063E30C8: aa9f1514  b #0x694af70
0x063E30CC: f8763697  bl #0x3180cac

; RVA 0x63E1E2C | public bool TryGetMergeItems(string uuid, out List<IMergeItem> mergeItems) { }
; bytes=112 sha256=baf94ba046c4f282d64a6c20cc3b9f88cc70ae6a570b9e5100dd44063f62aafa status=arm64_complete_bound indexed_start=True
0x063E1E2C: fe0f1df8  str x30, [sp, #-0x30]!
0x063E1E30: f65701a9  stp x22, x21, [sp, #0x10]
0x063E1E34: f44f02a9  stp x20, x19, [sp, #0x20]
0x063E1E38: 36ca00b0  adrp x22, #0x7d26000
0x063E1E3C: c8c64e39  ldrb w8, [x22, #0x3b1]
0x063E1E40: f30302aa  mov x19, x2
0x063E1E44: f40301aa  mov x20, x1
0x063E1E48: f50300aa  mov x21, x0
0x063E1E4C: c8000037  tbnz w8, #0, #0x63e1e64
0x063E1E50: 809800d0  adrp x0, #0x76f3000
0x063E1E54: 002043f9  ldr x0, [x0, #0x640]
0x063E1E58: f07a3697  bl #0x3180a18
0x063E1E5C: 28008052  movz w8, #0x1
0x063E1E60: c8c60e39  strb w8, [x22, #0x3b1]
0x063E1E64: a86e40f9  ldr x8, [x21, #0xd8]
0x063E1E68: 880100b4  cbz x8, #0x63e1e98
0x063E1E6C: 001540f9  ldr x0, [x8, #0x28]
0x063E1E70: 400100b4  cbz x0, #0x63e1e98
0x063E1E74: 889800d0  adrp x8, #0x76f3000
0x063E1E78: 082143f9  ldr x8, [x8, #0x640]
0x063E1E7C: e10314aa  mov x1, x20
0x063E1E80: e20313aa  mov x2, x19
0x063E1E84: f44f42a9  ldp x20, x19, [sp, #0x20]
0x063E1E88: 030140f9  ldr x3, [x8]
0x063E1E8C: f65741a9  ldp x22, x21, [sp, #0x10]
0x063E1E90: fe0743f8  ldr x30, [sp], #0x30
0x063E1E94: 650a7d17  b #0x4324828
0x063E1E98: 857b3697  bl #0x3180cac

; RVA 0x63E2674 | public float GetDiffScore(string itemId) { }
; bytes=304 sha256=22ab1943a643c887e7b4c7cbb20f6494d71875da8929fe495947e40c7c1131bd status=arm64_complete_bound indexed_start=True
0x063E2674: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x063E2678: f44f01a9  stp x20, x19, [sp, #0x10]
0x063E267C: 35ca0090  adrp x21, #0x7d26000
0x063E2680: a8ca4e39  ldrb w8, [x21, #0x3b2]
0x063E2684: f30301aa  mov x19, x1
0x063E2688: f40300aa  mov x20, x0
0x063E268C: 28010037  tbnz w8, #0, #0x63e26b0
0x063E2690: e0940090  adrp x0, #0x767e000
0x063E2694: 00a442f9  ldr x0, [x0, #0x548]
0x063E2698: e0783697  bl #0x3180a18
0x063E269C: c0940090  adrp x0, #0x767a000
0x063E26A0: 004c42f9  ldr x0, [x0, #0x498]
0x063E26A4: dd783697  bl #0x3180a18
0x063E26A8: 28008052  movz w8, #0x1
0x063E26AC: a8ca0e39  strb w8, [x21, #0x3b2]
0x063E26B0: 947240f9  ldr x20, [x20, #0xe0]
0x063E26B4: 740700b4  cbz x20, #0x63e27a0
0x063E26B8: ca940090  adrp x10, #0x767a000
0x063E26BC: 880240f9  ldr x8, [x20]
0x063E26C0: 4a4d42f9  ldr x10, [x10, #0x498]
0x063E26C4: 095d4279  ldrh w9, [x8, #0x12e]
0x063E26C8: 410140f9  ldr x1, [x10]
0x063E26CC: 290100b4  cbz x9, #0x63e26f0
0x063E26D0: 0a5940f9  ldr x10, [x8, #0xb0]
0x063E26D4: 4a210091  add x10, x10, #8
0x063E26D8: 4b815ff8  ldur x11, [x10, #-8]
0x063E26DC: 7f0101eb  cmp x11, x1
0x063E26E0: 00010054  b.eq #0x63e2700
0x063E26E4: 290500f1  subs x9, x9, #1
0x063E26E8: 4a410091  add x10, x10, #0x10
0x063E26EC: 61ffff54  b.ne #0x63e26d8
0x063E26F0: 22018052  movz w2, #0x9
0x063E26F4: e00314aa  mov x0, x20
0x063E26F8: 06d13597  bl #0x3156b10
0x063E26FC: 05000014  b #0x63e2710
0x063E2700: 490140b9  ldr w9, [x10]
0x063E2704: 29250011  add w9, w9, #9
0x063E2708: 08d1298b  add x8, x8, w9, sxtw #4
0x063E270C: 00e10491  add x0, x8, #0x138
0x063E2710: 080840a9  ldp x8, x2, [x0]
0x063E2714: e00314aa  mov x0, x20
0x063E2718: e10313aa  mov x1, x19
0x063E271C: 00013fd6  blr x8
0x063E2720: 000400b4  cbz x0, #0x63e27a0
0x063E2724: ea940090  adrp x10, #0x767e000
0x063E2728: 080040f9  ldr x8, [x0]
0x063E272C: 4aa542f9  ldr x10, [x10, #0x548]
0x063E2730: f30300aa  mov x19, x0
0x063E2734: 095d4279  ldrh w9, [x8, #0x12e]
0x063E2738: 410140f9  ldr x1, [x10]
0x063E273C: 290100b4  cbz x9, #0x63e2760
0x063E2740: 0a5940f9  ldr x10, [x8, #0xb0]
0x063E2744: 4a210091  add x10, x10, #8
0x063E2748: 4b815ff8  ldur x11, [x10, #-8]
0x063E274C: 7f0101eb  cmp x11, x1
0x063E2750: 00010054  b.eq #0x63e2770
0x063E2754: 290500f1  subs x9, x9, #1
0x063E2758: 4a410091  add x10, x10, #0x10
0x063E275C: 61ffff54  b.ne #0x63e2748
0x063E2760: e2018052  movz w2, #0xf
0x063E2764: e00313aa  mov x0, x19
0x063E2768: ead03597  bl #0x3156b10
0x063E276C: 05000014  b #0x63e2780
0x063E2770: 490140b9  ldr w9, [x10]
0x063E2774: 293d0011  add w9, w9, #0xf
0x063E2778: 08d1298b  add x8, x8, w9, sxtw #4
0x063E277C: 00e10491  add x0, x8, #0x138
0x063E2780: 080440a9  ldp x8, x1, [x0]
0x063E2784: e00313aa  mov x0, x19
0x063E2788: 00013fd6  blr x8
0x063E278C: a00000b4  cbz x0, #0x63e27a0
0x063E2790: 001440bd  ldr s0, [x0, #0x14]
0x063E2794: f44f41a9  ldp x20, x19, [sp, #0x10]
0x063E2798: fe57c2a8  ldp x30, x21, [sp], #0x20
0x063E279C: c0035fd6  ret
0x063E27A0: 43793697  bl #0x3180cac

; RVA 0x63E30D0 | public void .ctor() { }
; bytes=140 sha256=d2775d66338ee6d2fdfefd0bf52921c1f0c401ac6219b1c2782bb0984c2ff957 status=arm64_complete_bound indexed_start=True
0x063E30D0: fe0f1df8  str x30, [sp, #-0x30]!
0x063E30D4: f65701a9  stp x22, x21, [sp, #0x10]
0x063E30D8: f44f02a9  stp x20, x19, [sp, #0x20]
0x063E30DC: 15ca00f0  adrp x21, #0x7d26000
0x063E30E0: 769400f0  adrp x22, #0x7672000
0x063E30E4: 94980090  adrp x20, #0x76f3000
0x063E30E8: a8ce4e39  ldrb w8, [x21, #0x3b3]
0x063E30EC: d6ae41f9  ldr x22, [x22, #0x358]
0x063E30F0: 946e43f9  ldr x20, [x20, #0x6d8]
0x063E30F4: f30300aa  mov x19, x0
0x063E30F8: 28010037  tbnz w8, #0, #0x63e311c
0x063E30FC: 609400f0  adrp x0, #0x7672000
0x063E3100: 00ac41f9  ldr x0, [x0, #0x358]
0x063E3104: 45763697  bl #0x3180a18
0x063E3108: 80980090  adrp x0, #0x76f3000
0x063E310C: 006c43f9  ldr x0, [x0, #0x6d8]
0x063E3110: 42763697  bl #0x3180a18
0x063E3114: 28008052  movz w8, #0x1
0x063E3118: a8ce0e39  strb w8, [x21, #0x3b3]
0x063E311C: c00240f9  ldr x0, [x22]
0x063E3120: e0763697  bl #0x3180ca0
0x063E3124: 810240f9  ldr x1, [x20]
0x063E3128: e2031faa  mov x2, xzr
0x063E312C: f40300aa  mov x20, x0
0x063E3130: 87db1594  bl #0x6959f4c
0x063E3134: e00313aa  mov x0, x19
0x063E3138: 140c0df8  str x20, [x0, #0xd0]!
0x063E313C: e10314aa  mov x1, x20
0x063E3140: 21763697  bl #0x31809c4
0x063E3144: e00313aa  mov x0, x19
0x063E3148: f44f42a9  ldp x20, x19, [sp, #0x20]
0x063E314C: f65741a9  ldp x22, x21, [sp, #0x10]
0x063E3150: e1031faa  mov x1, xzr
0x063E3154: fe0743f8  ldr x30, [sp], #0x30
0x063E3158: f1080914  b #0x662551c

