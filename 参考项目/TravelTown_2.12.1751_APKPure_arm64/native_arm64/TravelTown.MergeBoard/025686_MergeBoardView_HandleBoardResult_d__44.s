; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25686 .MergeBoardView.<HandleBoardResult>d__44
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A3BDE0 | public void .ctor(int <>1__state) { }
; bytes=40 sha256=f83ac76253f77b2668dc602e2b14b62194e808314dc4709236e6c4af2ccd2b7f status=arm64_complete_bound indexed_start=True
0x06A3BDE0: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A3BDE4: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A3BDE8: f303012a  mov w19, w1
0x06A3BDEC: e1031faa  mov x1, xzr
0x06A3BDF0: f40300aa  mov x20, x0
0x06A3BDF4: 027ab297  bl #0x56da5fc
0x06A3BDF8: 931200b9  str w19, [x20, #0x10]
0x06A3BDFC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A3BE00: fe0742f8  ldr x30, [sp], #0x20
0x06A3BE04: c0035fd6  ret

; RVA 0x6A3CE98 | private void System.IDisposable.Dispose() { }
; bytes=4 sha256=110f46b5b35c069160560c6ad6786f647dd44e8760a52a46fc22dbbcd7630b91 status=arm64_complete_bound indexed_start=True
0x06A3CE98: c0035fd6  ret

; RVA 0x6A3CE9C | private bool MoveNext() { }
; bytes=596 sha256=243d361d6c37c60eb8cb37d2f2fd82926288d55b7de3442d1e426c071d423061 status=arm64_complete_bound indexed_start=True
0x06A3CE9C: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x06A3CEA0: f65701a9  stp x22, x21, [sp, #0x10]
0x06A3CEA4: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A3CEA8: 749700d0  adrp x20, #0x7d2a000
0x06A3CEAC: 881e5439  ldrb w8, [x20, #0x507]
0x06A3CEB0: f30300aa  mov x19, x0
0x06A3CEB4: a8020037  tbnz w8, #0, #0x6a3cf08
0x06A3CEB8: 806000d0  adrp x0, #0x764e000
0x06A3CEBC: 00ac43f9  ldr x0, [x0, #0x758]
0x06A3CEC0: d60e1d97  bl #0x3180a18
0x06A3CEC4: 206400b0  adrp x0, #0x76c1000
0x06A3CEC8: 009846f9  ldr x0, [x0, #0xd30]
0x06A3CECC: d30e1d97  bl #0x3180a18
0x06A3CED0: 806100f0  adrp x0, #0x766f000
0x06A3CED4: 002441f9  ldr x0, [x0, #0x248]
0x06A3CED8: d00e1d97  bl #0x3180a18
0x06A3CEDC: 806700f0  adrp x0, #0x772f000
0x06A3CEE0: 00f843f9  ldr x0, [x0, #0x7f0]
0x06A3CEE4: cd0e1d97  bl #0x3180a18
0x06A3CEE8: 806700f0  adrp x0, #0x772f000
0x06A3CEEC: 00fc43f9  ldr x0, [x0, #0x7f8]
0x06A3CEF0: ca0e1d97  bl #0x3180a18
0x06A3CEF4: 806700f0  adrp x0, #0x772f000
0x06A3CEF8: 00ec42f9  ldr x0, [x0, #0x5d8]
0x06A3CEFC: c70e1d97  bl #0x3180a18
0x06A3CF00: 28008052  movz w8, #0x1
0x06A3CF04: 881e1439  strb w8, [x20, #0x507]
0x06A3CF08: 681240b9  ldr w8, [x19, #0x10]
0x06A3CF0C: 1f050071  cmp w8, #1
0x06A3CF10: 20090054  b.eq #0x6a3d034
0x06A3CF14: 280e0035  cbnz w8, #0x6a3d0d8
0x06A3CF18: 08008012  movn w8, #0
0x06A3CF1C: 681200b9  str w8, [x19, #0x10]
0x06A3CF20: 886700f0  adrp x8, #0x772f000
0x06A3CF24: 741240f9  ldr x20, [x19, #0x20]
0x06A3CF28: 08fd43f9  ldr x8, [x8, #0x7f8]
0x06A3CF2C: 000140f9  ldr x0, [x8]
0x06A3CF30: 5c0f1d97  bl #0x3180ca0
0x06A3CF34: e1031faa  mov x1, xzr
0x06A3CF38: f60300aa  mov x22, x0
0x06A3CF3C: b075b297  bl #0x56da5fc
0x06A3CF40: f50313aa  mov x21, x19
0x06A3CF44: b60e03f8  str x22, [x21, #0x30]!
0x06A3CF48: e00315aa  mov x0, x21
0x06A3CF4C: e10316aa  mov x1, x22
0x06A3CF50: 9d0e1d97  bl #0x31809c4
0x06A3CF54: a00240f9  ldr x0, [x21]
0x06A3CF58: a00c00b4  cbz x0, #0x6a3d0ec
0x06A3CF5C: a1025ff8  ldur x1, [x21, #-0x10]
0x06A3CF60: 010c01f8  str x1, [x0, #0x10]!
0x06A3CF64: 980e1d97  bl #0x31809c4
0x06A3CF68: 340c00b4  cbz x20, #0x6a3d0ec
0x06A3CF6C: 801640f9  ldr x0, [x20, #0x28]
0x06A3CF70: e00b00b4  cbz x0, #0x6a3d0ec
0x06A3CF74: 09d6ff97  bl #0x6a32798
0x06A3CF78: 286400b0  adrp x8, #0x76c1000
0x06A3CF7C: 089946f9  ldr x8, [x8, #0xd30]
0x06A3CF80: 010140f9  ldr x1, [x8]
0x06A3CF84: 138c4897  bl #0x3c5ffd0
0x06A3CF88: 61de42a9  ldp x1, x23, [x19, #0x28]
0x06A3CF8C: f60300aa  mov x22, x0
0x06A3CF90: faf4ff97  bl #0x6a3a378
0x06A3CF94: d70a00b4  cbz x23, #0x6a3d0ec
0x06A3CF98: e08e01f8  str x0, [x23, #0x18]!
0x06A3CF9C: e10300aa  mov x1, x0
0x06A3CFA0: e00317aa  mov x0, x23
0x06A3CFA4: 880e1d97  bl #0x31809c4
0x06A3CFA8: e00314aa  mov x0, x20
0x06A3CFAC: e10316aa  mov x1, x22
0x06A3CFB0: 9cf1ff97  bl #0x6a39620
0x06A3CFB4: 802a40f9  ldr x0, [x20, #0x50]
0x06A3CFB8: a00900b4  cbz x0, #0x6a3d0ec
0x06A3CFBC: 611640f9  ldr x1, [x19, #0x28]
0x06A3CFC0: 442a0094  bl #0x6a478d0
0x06A3CFC4: e10300aa  mov x1, x0
0x06A3CFC8: e00313aa  mov x0, x19
0x06A3CFCC: 018c03f8  str x1, [x0, #0x38]!
0x06A3CFD0: 7d0e1d97  bl #0x31809c4
0x06A3CFD4: e00314aa  mov x0, x20
0x06A3CFD8: e10316aa  mov x1, x22
0x06A3CFDC: 98f3ff97  bl #0x6a39e3c
0x06A3CFE0: 803240f9  ldr x0, [x20, #0x60]
0x06A3CFE4: 400800b4  cbz x0, #0x6a3d0ec
0x06A3CFE8: 611640f9  ldr x1, [x19, #0x28]
0x06A3CFEC: b9e5ff97  bl #0x6a366d0
0x06A3CFF0: 681a40f9  ldr x8, [x19, #0x30]
0x06A3CFF4: c80700b4  cbz x8, #0x6a3d0ec
0x06A3CFF8: 010d40f9  ldr x1, [x8, #0x18]
0x06A3CFFC: e00314aa  mov x0, x20
0x06A3D000: effcff97  bl #0x6a3c3bc
0x06A3D004: a80240f9  ldr x8, [x21]
0x06A3D008: 280700b4  cbz x8, #0x6a3d0ec
0x06A3D00C: 010d40f9  ldr x1, [x8, #0x18]
0x06A3D010: e00314aa  mov x0, x20
0x06A3D014: adfdff97  bl #0x6a3c6c8
0x06A3D018: 7f8e01f8  str xzr, [x19, #0x18]!
0x06A3D01C: e00313aa  mov x0, x19
0x06A3D020: e1031faa  mov x1, xzr
0x06A3D024: 680e1d97  bl #0x31809c4
0x06A3D028: 20008052  movz w0, #0x1
0x06A3D02C: 60821fb8  stur w0, [x19, #-8]
0x06A3D030: 2b000014  b #0x6a3d0dc
0x06A3D034: 08008012  movn w8, #0
0x06A3D038: 681200b9  str w8, [x19, #0x10]
0x06A3D03C: 886000b0  adrp x8, #0x764e000
0x06A3D040: 755243a9  ldp x21, x20, [x19, #0x30]
0x06A3D044: 08ad43f9  ldr x8, [x8, #0x758]
0x06A3D048: 000140f9  ldr x0, [x8]
0x06A3D04C: 150f1d97  bl #0x3180ca0
0x06A3D050: 886700d0  adrp x8, #0x772f000
0x06A3D054: 08f943f9  ldr x8, [x8, #0x7f0]
0x06A3D058: e10315aa  mov x1, x21
0x06A3D05C: e3031faa  mov x3, xzr
0x06A3D060: f30300aa  mov x19, x0
0x06A3D064: 020140f9  ldr x2, [x8]
0x06A3D068: b2c1ae97  bl #0x55ed730
0x06A3D06C: 140400b4  cbz x20, #0x6a3d0ec
0x06A3D070: 8a6100d0  adrp x10, #0x766f000
0x06A3D074: 880240f9  ldr x8, [x20]
0x06A3D078: 4a2541f9  ldr x10, [x10, #0x248]
0x06A3D07C: 095d4279  ldrh w9, [x8, #0x12e]
0x06A3D080: 410140f9  ldr x1, [x10]
0x06A3D084: 290100b4  cbz x9, #0x6a3d0a8
0x06A3D088: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A3D08C: 4a210091  add x10, x10, #8
0x06A3D090: 4b815ff8  ldur x11, [x10, #-8]
0x06A3D094: 7f0101eb  cmp x11, x1
0x06A3D098: 00010054  b.eq #0x6a3d0b8
0x06A3D09C: 290500f1  subs x9, x9, #1
0x06A3D0A0: 4a410091  add x10, x10, #0x10
0x06A3D0A4: 61ffff54  b.ne #0x6a3d090
0x06A3D0A8: 62008052  movz w2, #0x3
0x06A3D0AC: e00314aa  mov x0, x20
0x06A3D0B0: 98661c97  bl #0x3156b10
0x06A3D0B4: 05000014  b #0x6a3d0c8
0x06A3D0B8: 490140b9  ldr w9, [x10]
0x06A3D0BC: 290d0011  add w9, w9, #3
0x06A3D0C0: 08d1298b  add x8, x8, w9, sxtw #4
0x06A3D0C4: 00e10491  add x0, x8, #0x138
0x06A3D0C8: 080840a9  ldp x8, x2, [x0]
0x06A3D0CC: e00314aa  mov x0, x20
0x06A3D0D0: e10313aa  mov x1, x19
0x06A3D0D4: 00013fd6  blr x8
0x06A3D0D8: e0031f2a  mov w0, wzr
0x06A3D0DC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A3D0E0: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A3D0E4: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x06A3D0E8: c0035fd6  ret
0x06A3D0EC: f00e1d97  bl #0x3180cac

; RVA 0x6A3D0F4 | private object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x06A3D0F4: 000c40f9  ldr x0, [x0, #0x18]
0x06A3D0F8: c0035fd6  ret

; RVA 0x6A3D0FC | private void System.Collections.IEnumerator.Reset() { }
; bytes=56 sha256=67b60aaf477314d857e25bc4856f1fafd0563dd4c1d7bb3f3e5980b670d385e5 status=arm64_complete_bound indexed_start=True
0x06A3D0FC: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x06A3D100: 806000d0  adrp x0, #0x764f000
0x06A3D104: 00d043f9  ldr x0, [x0, #0x7a0]
0x06A3D108: 490e1d97  bl #0x3180a2c
0x06A3D10C: e50e1d97  bl #0x3180ca0
0x06A3D110: e1031faa  mov x1, xzr
0x06A3D114: f30300aa  mov x19, x0
0x06A3D118: 826eb197  bl #0x5698b20
0x06A3D11C: 806700d0  adrp x0, #0x772f000
0x06A3D120: 000044f9  ldr x0, [x0, #0x800]
0x06A3D124: 420e1d97  bl #0x3180a2c
0x06A3D128: e10300aa  mov x1, x0
0x06A3D12C: e00313aa  mov x0, x19
0x06A3D130: 930e1d97  bl #0x3180b7c

; RVA 0x6A3D134 | private object System.Collections.IEnumerator.get_Current() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x06A3D134: 000c40f9  ldr x0, [x0, #0x18]
0x06A3D138: c0035fd6  ret

