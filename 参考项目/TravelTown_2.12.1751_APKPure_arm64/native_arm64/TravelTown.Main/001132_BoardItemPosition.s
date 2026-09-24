; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1132 MergeEngine.Data.BoardItemPosition
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6904ECC | public int get_Col() { }
; bytes=8 sha256=9bb31e50c9e4b1e6d3afbc308de8dce185c4ece3c405e5fc1e3b97b52d26c6a0 status=arm64_complete_bound indexed_start=True
0x06904ECC: 000040b9  ldr w0, [x0]
0x06904ED0: c0035fd6  ret

; RVA 0x6904ED4 | public int get_Row() { }
; bytes=8 sha256=c40709113e97cec9c72bfbb7a6f1892a5b54d7906ca60d6c400c2e268577b883 status=arm64_complete_bound indexed_start=True
0x06904ED4: 000440b9  ldr w0, [x0, #4]
0x06904ED8: c0035fd6  ret

; RVA 0x68FDC94 | public void .ctor(int col, int row) { }
; bytes=8 sha256=73109c1402501dc23c92eec28460f747d6b135f585b5baa3d3ec3efc2b0a3ddc status=arm64_complete_bound indexed_start=True
0x068FDC94: 01080029  stp w1, w2, [x0]
0x068FDC98: c0035fd6  ret

; RVA 0x6904EDC | public float DistanceTo(BoardItemPosition other) { }
; bytes=36 sha256=afe5447c8f354d2059463d4aaf503a1ebaaff977a9f1b389f7b2b40a5bdc815a status=arm64_complete_bound indexed_start=True
0x06904EDC: 08244029  ldp w8, w9, [x0]
0x06904EE0: 2afc60d3  lsr x10, x1, #0x20
0x06904EE4: 0801014b  sub w8, w8, w1
0x06904EE8: 087d081b  mul w8, w8, w8
0x06904EEC: 29010a4b  sub w9, w9, w10
0x06904EF0: 2821091b  madd w8, w9, w9, w8
0x06904EF4: 0001221e  scvtf s0, w8
0x06904EF8: 00c0211e  fsqrt s0, s0
0x06904EFC: c0035fd6  ret

; RVA 0x6904F00 | public bool Equals(BoardItemPosition other) { }
; bytes=40 sha256=570043dc447432c7f949a6fad3657b5aceb36aa60025ab729cc28046f2156acc status=arm64_complete_bound indexed_start=True
0x06904F00: 080040b9  ldr w8, [x0]
0x06904F04: 1f01016b  cmp w8, w1
0x06904F08: c1000054  b.ne #0x6904f20
0x06904F0C: 080440b9  ldr w8, [x0, #4]
0x06904F10: 29fc60d3  lsr x9, x1, #0x20
0x06904F14: 1f01096b  cmp w8, w9
0x06904F18: e0179f1a  cset w0, eq
0x06904F1C: c0035fd6  ret
0x06904F20: e0031f2a  mov w0, wzr
0x06904F24: c0035fd6  ret

; RVA 0x6904F28 | public Vector2 DirectionTo(BoardItemPosition other) { }
; bytes=28 sha256=cbd649591078d3a2421a5170dada534febefe52b2024e0efb723707c9ba937f1 status=arm64_complete_bound indexed_start=True
0x06904F28: 08244029  ldp w8, w9, [x0]
0x06904F2C: 2afc60d3  lsr x10, x1, #0x20
0x06904F30: 2800084b  sub w8, w1, w8
0x06904F34: 29010a4b  sub w9, w9, w10
0x06904F38: 0001221e  scvtf s0, w8
0x06904F3C: 2101221e  scvtf s1, w9
0x06904F40: c0035fd6  ret

; RVA 0x6904F44 | public override bool Equals(object obj) { }
; bytes=136 sha256=187d43c75b29c8c5f2eb83b71160775bced167e93182e45efcfb8b0638cdda16 status=arm64_complete_bound indexed_start=True
0x06904F44: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06904F48: f44f01a9  stp x20, x19, [sp, #0x10]
0x06904F4C: 35a100b0  adrp x21, #0x7d29000
0x06904F50: a8a26439  ldrb w8, [x21, #0x928]
0x06904F54: f40301aa  mov x20, x1
0x06904F58: f30300aa  mov x19, x0
0x06904F5C: c8000037  tbnz w8, #0, #0x6904f74
0x06904F60: e06b00d0  adrp x0, #0x7682000
0x06904F64: 009044f9  ldr x0, [x0, #0x920]
0x06904F68: acee2197  bl #0x3180a18
0x06904F6C: 28008052  movz w8, #0x1
0x06904F70: a8a22439  strb w8, [x21, #0x928]
0x06904F74: 540200b4  cbz x20, #0x6904fbc
0x06904F78: e86b00d0  adrp x8, #0x7682000
0x06904F7C: 089144f9  ldr x8, [x8, #0x920]
0x06904F80: 890240f9  ldr x9, [x20]
0x06904F84: 080140f9  ldr x8, [x8]
0x06904F88: 3f0108eb  cmp x9, x8
0x06904F8C: 81010054  b.ne #0x6904fbc
0x06904F90: e00314aa  mov x0, x20
0x06904F94: 01ef2197  bl #0x3180b98
0x06904F98: 080040f9  ldr x8, [x0]
0x06904F9C: 690240b9  ldr w9, [x19]
0x06904FA0: 3f01086b  cmp w9, w8
0x06904FA4: c1000054  b.ne #0x6904fbc
0x06904FA8: 690640b9  ldr w9, [x19, #4]
0x06904FAC: 08fd60d3  lsr x8, x8, #0x20
0x06904FB0: 3f01086b  cmp w9, w8
0x06904FB4: e0179f1a  cset w0, eq
0x06904FB8: 02000014  b #0x6904fc0
0x06904FBC: e0031f2a  mov w0, wzr
0x06904FC0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06904FC4: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06904FC8: c0035fd6  ret

; RVA 0x6904FCC | public override int GetHashCode() { }
; bytes=20 sha256=cf7927a2d80a872ccfd4604e4f20e8664e241fb7c9d8f9442127f24dfebac3bf status=arm64_complete_bound indexed_start=True
0x06904FCC: 08244029  ldp w8, w9, [x0]
0x06904FD0: aa318052  movz w10, #0x18d
0x06904FD4: 087d0a1b  mul w8, w8, w10
0x06904FD8: 0001094a  eor w0, w8, w9
0x06904FDC: c0035fd6  ret

; RVA 0x6904FE0 | public override string ToString() { }
; bytes=160 sha256=f41e41c9d26cc71c587f8657d2712d3f06503238017b0df5d75dcf458a61929c status=arm64_complete_bound indexed_start=True
0x06904FE0: fe0f1df8  str x30, [sp, #-0x30]!
0x06904FE4: f65701a9  stp x22, x21, [sp, #0x10]
0x06904FE8: f44f02a9  stp x20, x19, [sp, #0x20]
0x06904FEC: 34a100b0  adrp x20, #0x7d29000
0x06904FF0: 566a00d0  adrp x22, #0x764e000
0x06904FF4: 157100d0  adrp x21, #0x7726000
0x06904FF8: 88a66439  ldrb w8, [x20, #0x929]
0x06904FFC: d65a43f9  ldr x22, [x22, #0x6b0]
0x06905000: b50a45f9  ldr x21, [x21, #0xa10]
0x06905004: f30300aa  mov x19, x0
0x06905008: 28010037  tbnz w8, #0, #0x690502c
0x0690500C: 406a00b0  adrp x0, #0x764e000
0x06905010: 005843f9  ldr x0, [x0, #0x6b0]
0x06905014: 81ee2197  bl #0x3180a18
0x06905018: 007100b0  adrp x0, #0x7726000
0x0690501C: 000845f9  ldr x0, [x0, #0xa10]
0x06905020: 7eee2197  bl #0x3180a18
0x06905024: 28008052  movz w8, #0x1
0x06905028: 88a62439  strb w8, [x20, #0x929]
0x0690502C: 680240b9  ldr w8, [x19]
0x06905030: c00240f9  ldr x0, [x22]
0x06905034: e1330091  add x1, sp, #0xc
0x06905038: e80f00b9  str w8, [sp, #0xc]
0x0690503C: d6ee2197  bl #0x3180b94
0x06905040: f40300aa  mov x20, x0
0x06905044: 680640b9  ldr w8, [x19, #4]
0x06905048: c00240f9  ldr x0, [x22]
0x0690504C: e1230091  add x1, sp, #8
0x06905050: e80b00b9  str w8, [sp, #8]
0x06905054: d0ee2197  bl #0x3180b94
0x06905058: a80240f9  ldr x8, [x21]
0x0690505C: e20300aa  mov x2, x0
0x06905060: e10314aa  mov x1, x20
0x06905064: e3031faa  mov x3, xzr
0x06905068: e00308aa  mov x0, x8
0x0690506C: 9ccbaf97  bl #0x54f7edc
0x06905070: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06905074: f65741a9  ldp x22, x21, [sp, #0x10]
0x06905078: fe0743f8  ldr x30, [sp], #0x30
0x0690507C: c0035fd6  ret

; RVA 0x6905080 | public static BoardItemPosition BottomLeftCorner() { }
; bytes=8 sha256=c0eb97ff90ea68647bd09bf628282b5b59ef383d924d40d95f9abc5ff482895a status=arm64_complete_bound indexed_start=True
0x06905080: 0001c0d2  movz x0, #0x8, lsl #32
0x06905084: c0035fd6  ret

; RVA 0x6905088 | public static BoardItemPosition TopLeftCorner() { }
; bytes=8 sha256=ed86e0b2911b6a4e9edfa1a48e9544ba115299466a1992e2370619d8ce8e29fc status=arm64_complete_bound indexed_start=True
0x06905088: e0031faa  mov x0, xzr
0x0690508C: c0035fd6  ret

