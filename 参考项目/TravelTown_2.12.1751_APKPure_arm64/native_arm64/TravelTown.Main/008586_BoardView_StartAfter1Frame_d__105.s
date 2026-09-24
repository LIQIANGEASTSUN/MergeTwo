; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 8586 .BoardView.<StartAfter1Frame>d__105
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x669340C | public void .ctor(int <>1__state) { }
; bytes=40 sha256=1e6c99ef47a29efd076c7fe26a2dd0a55d1aae88ea5d7c831925eb33fbfc7a6b status=arm64_complete_bound indexed_start=True
0x0669340C: fe0f1ef8  str x30, [sp, #-0x20]!
0x06693410: f44f01a9  stp x20, x19, [sp, #0x10]
0x06693414: f303012a  mov w19, w1
0x06693418: e1031faa  mov x1, xzr
0x0669341C: f40300aa  mov x20, x0
0x06693420: 771cc197  bl #0x56da5fc
0x06693424: 931200b9  str w19, [x20, #0x10]
0x06693428: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0669342C: fe0742f8  ldr x30, [sp], #0x20
0x06693430: c0035fd6  ret

; RVA 0x669AA6C | private void System.IDisposable.Dispose() { }
; bytes=4 sha256=110f46b5b35c069160560c6ad6786f647dd44e8760a52a46fc22dbbcd7630b91 status=arm64_complete_bound indexed_start=True
0x0669AA6C: c0035fd6  ret

; RVA 0x669AA70 | private bool MoveNext() { }
; bytes=284 sha256=9d8ddf7e7d2fec6876bb0339cb7793d8509eecd02a36b1629984c4ae62048c15 status=arm64_complete_bound indexed_start=True
0x0669AA70: fe0f1ef8  str x30, [sp, #-0x20]!
0x0669AA74: f44f01a9  stp x20, x19, [sp, #0x10]
0x0669AA78: 74b400d0  adrp x20, #0x7d28000
0x0669AA7C: 88f24b39  ldrb w8, [x20, #0x2fc]
0x0669AA80: f30300aa  mov x19, x0
0x0669AA84: 48020037  tbnz w8, #0, #0x669aacc
0x0669AA88: 608300f0  adrp x0, #0x7709000
0x0669AA8C: 007043f9  ldr x0, [x0, #0x6e0]
0x0669AA90: e2972b97  bl #0x3180a18
0x0669AA94: 808200d0  adrp x0, #0x76ec000
0x0669AA98: 004c46f9  ldr x0, [x0, #0xc98]
0x0669AA9C: df972b97  bl #0x3180a18
0x0669AAA0: c07e0090  adrp x0, #0x7672000
0x0669AAA4: 008844f9  ldr x0, [x0, #0x910]
0x0669AAA8: dc972b97  bl #0x3180a18
0x0669AAAC: 608300f0  adrp x0, #0x7709000
0x0669AAB0: 00b440f9  ldr x0, [x0, #0x168]
0x0669AAB4: d9972b97  bl #0x3180a18
0x0669AAB8: c07e00f0  adrp x0, #0x7675000
0x0669AABC: 00e846f9  ldr x0, [x0, #0xdd0]
0x0669AAC0: d6972b97  bl #0x3180a18
0x0669AAC4: 28008052  movz w8, #0x1
0x0669AAC8: 88f20b39  strb w8, [x20, #0x2fc]
0x0669AACC: 681240b9  ldr w8, [x19, #0x10]
0x0669AAD0: 1f050071  cmp w8, #1
0x0669AAD4: 40020054  b.eq #0x669ab1c
0x0669AAD8: 08050035  cbnz w8, #0x669ab78
0x0669AADC: 08008012  movn w8, #0
0x0669AAE0: 681200b9  str w8, [x19, #0x10]
0x0669AAE4: c87e00f0  adrp x8, #0x7675000
0x0669AAE8: 08e946f9  ldr x8, [x8, #0xdd0]
0x0669AAEC: 000140f9  ldr x0, [x8]
0x0669AAF0: 6c982b97  bl #0x3180ca0
0x0669AAF4: e1031faa  mov x1, xzr
0x0669AAF8: f40300aa  mov x20, x0
0x0669AAFC: 7b2c2194  bl #0x6ee5ce8
0x0669AB00: e00313aa  mov x0, x19
0x0669AB04: 148c01f8  str x20, [x0, #0x18]!
0x0669AB08: e10314aa  mov x1, x20
0x0669AB0C: ae972b97  bl #0x31809c4
0x0669AB10: 20008052  movz w0, #0x1
0x0669AB14: 601200b9  str w0, [x19, #0x10]
0x0669AB18: 19000014  b #0x669ab7c
0x0669AB1C: 741240f9  ldr x20, [x19, #0x20]
0x0669AB20: 08008012  movn w8, #0
0x0669AB24: 681200b9  str w8, [x19, #0x10]
0x0669AB28: 140300b4  cbz x20, #0x669ab88
0x0669AB2C: 801640f9  ldr x0, [x20, #0x28]
0x0669AB30: c00200b4  cbz x0, #0x669ab88
0x0669AB34: e1031faa  mov x1, xzr
0x0669AB38: e72cfe97  bl #0x6625ed4
0x0669AB3C: 600200b4  cbz x0, #0x669ab88
0x0669AB40: 08804039  ldrb w8, [x0, #0x20]
0x0669AB44: e8000035  cbnz w8, #0x669ab60
0x0669AB48: 801640f9  ldr x0, [x20, #0x28]
0x0669AB4C: e00100b4  cbz x0, #0x669ab88
0x0669AB50: 888200d0  adrp x8, #0x76ec000
0x0669AB54: 084d46f9  ldr x8, [x8, #0xc98]
0x0669AB58: 010140f9  ldr x1, [x8]
0x0669AB5C: f3af5497  bl #0x3bc6b28
0x0669AB60: 801640f9  ldr x0, [x20, #0x28]
0x0669AB64: 200100b4  cbz x0, #0x669ab88
0x0669AB68: 688300f0  adrp x8, #0x7709000
0x0669AB6C: 087143f9  ldr x8, [x8, #0x6e0]
0x0669AB70: 010140f9  ldr x1, [x8]
0x0669AB74: edaf5497  bl #0x3bc6b28
0x0669AB78: e0031f2a  mov w0, wzr
0x0669AB7C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0669AB80: fe0742f8  ldr x30, [sp], #0x20
0x0669AB84: c0035fd6  ret
0x0669AB88: 49982b97  bl #0x3180cac

; RVA 0x669AB8C | private object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x0669AB8C: 000c40f9  ldr x0, [x0, #0x18]
0x0669AB90: c0035fd6  ret

; RVA 0x669AB94 | private void System.Collections.IEnumerator.Reset() { }
; bytes=56 sha256=72fbe70fc3bef5359ec13fdfe6dfc89772b0876e5dea7b334d790e085ea5f8cc status=arm64_complete_bound indexed_start=True
0x0669AB94: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x0669AB98: a07d00b0  adrp x0, #0x764f000
0x0669AB9C: 00d043f9  ldr x0, [x0, #0x7a0]
0x0669ABA0: a3972b97  bl #0x3180a2c
0x0669ABA4: 3f982b97  bl #0x3180ca0
0x0669ABA8: e1031faa  mov x1, xzr
0x0669ABAC: f30300aa  mov x19, x0
0x0669ABB0: dcf7bf97  bl #0x5698b20
0x0669ABB4: 608300f0  adrp x0, #0x7709000
0x0669ABB8: 007443f9  ldr x0, [x0, #0x6e8]
0x0669ABBC: 9c972b97  bl #0x3180a2c
0x0669ABC0: e10300aa  mov x1, x0
0x0669ABC4: e00313aa  mov x0, x19
0x0669ABC8: ed972b97  bl #0x3180b7c

; RVA 0x669ABCC | private object System.Collections.IEnumerator.get_Current() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x0669ABCC: 000c40f9  ldr x0, [x0, #0x18]
0x0669ABD0: c0035fd6  ret

