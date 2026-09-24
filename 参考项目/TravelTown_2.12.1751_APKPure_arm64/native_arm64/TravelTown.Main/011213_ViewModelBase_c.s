; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 11213 .ViewModelBase.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x694BDD8 | private static void .cctor() { }
; bytes=104 sha256=43565dbbc1288477f483f8b3ae9974560b24b6bc9154897bc9490df059e867fd status=arm64_complete_bound indexed_start=True
0x0694BDD8: fe0f1ef8  str x30, [sp, #-0x20]!
0x0694BDDC: f44f01a9  stp x20, x19, [sp, #0x10]
0x0694BDE0: f39e00d0  adrp x19, #0x7d29000
0x0694BDE4: f46e00b0  adrp x20, #0x7728000
0x0694BDE8: 68567139  ldrb w8, [x19, #0xc55]
0x0694BDEC: 942a45f9  ldr x20, [x20, #0xa50]
0x0694BDF0: c8000037  tbnz w8, #0, #0x694be08
0x0694BDF4: e06e00b0  adrp x0, #0x7728000
0x0694BDF8: 002845f9  ldr x0, [x0, #0xa50]
0x0694BDFC: 07d32097  bl #0x3180a18
0x0694BE00: 28008052  movz w8, #0x1
0x0694BE04: 68563139  strb w8, [x19, #0xc55]
0x0694BE08: 800240f9  ldr x0, [x20]
0x0694BE0C: a5d32097  bl #0x3180ca0
0x0694BE10: e1031faa  mov x1, xzr
0x0694BE14: f30300aa  mov x19, x0
0x0694BE18: f939b697  bl #0x56da5fc
0x0694BE1C: 880240f9  ldr x8, [x20]
0x0694BE20: e10313aa  mov x1, x19
0x0694BE24: 085d40f9  ldr x8, [x8, #0xb8]
0x0694BE28: 130100f9  str x19, [x8]
0x0694BE2C: 880240f9  ldr x8, [x20]
0x0694BE30: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0694BE34: 005d40f9  ldr x0, [x8, #0xb8]
0x0694BE38: fe0742f8  ldr x30, [sp], #0x20
0x0694BE3C: e2d22017  b #0x31809c4

; RVA 0x694BE40 | public void .ctor() { }
; bytes=8 sha256=64e1b021cd55323344201632a3de407c6d20811a39271a2cfa7506b7ba92bb07 status=arm64_complete_bound indexed_start=True
0x0694BE40: e1031faa  mov x1, xzr
0x0694BE44: ee39b617  b #0x56da5fc

; RVA 0x694BE48 | internal void <InstantiatePrefab>b__9_0(Exception e) { }
; bytes=208 sha256=935d8b6ba9c1cdbacbcf4416f11d16c2da8904a32b168d8b1bc7fb13dcbe0035 status=arm64_complete_bound indexed_start=True
0x0694BE48: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x0694BE4C: f65701a9  stp x22, x21, [sp, #0x10]
0x0694BE50: f44f02a9  stp x20, x19, [sp, #0x20]
0x0694BE54: f49e00d0  adrp x20, #0x7d29000
0x0694BE58: 885a7139  ldrb w8, [x20, #0xc56]
0x0694BE5C: f30301aa  mov x19, x1
0x0694BE60: e8010037  tbnz w8, #0, #0x694be9c
0x0694BE64: 006900d0  adrp x0, #0x766d000
0x0694BE68: 006c46f9  ldr x0, [x0, #0xcd8]
0x0694BE6C: ebd22097  bl #0x3180a18
0x0694BE70: 806900b0  adrp x0, #0x767c000
0x0694BE74: 002040f9  ldr x0, [x0, #0x40]
0x0694BE78: e8d22097  bl #0x3180a18
0x0694BE7C: 606900f0  adrp x0, #0x767a000
0x0694BE80: 004840f9  ldr x0, [x0, #0x90]
0x0694BE84: e5d22097  bl #0x3180a18
0x0694BE88: 206800b0  adrp x0, #0x7650000
0x0694BE8C: 00dc41f9  ldr x0, [x0, #0x3b8]
0x0694BE90: e2d22097  bl #0x3180a18
0x0694BE94: 28008052  movz w8, #0x1
0x0694BE98: 885a3139  strb w8, [x20, #0xc56]
0x0694BE9C: d30300b4  cbz x19, #0x694bf14
0x0694BEA0: 680240f9  ldr x8, [x19]
0x0694BEA4: 176900d0  adrp x23, #0x766d000
0x0694BEA8: f76e46f9  ldr x23, [x23, #0xcd8]
0x0694BEAC: 366800b0  adrp x22, #0x7650000
0x0694BEB0: 098558a9  ldp x9, x1, [x8, #0x188]
0x0694BEB4: 956900b0  adrp x21, #0x767c000
0x0694BEB8: 746900f0  adrp x20, #0x767a000
0x0694BEBC: d6de41f9  ldr x22, [x22, #0x3b8]
0x0694BEC0: b52240f9  ldr x21, [x21, #0x40]
0x0694BEC4: 944a40f9  ldr x20, [x20, #0x90]
0x0694BEC8: e00313aa  mov x0, x19
0x0694BECC: 20013fd6  blr x9
0x0694BED0: e80240f9  ldr x8, [x23]
0x0694BED4: f30300aa  mov x19, x0
0x0694BED8: 09e140b9  ldr w9, [x8, #0xe0]
0x0694BEDC: 69000035  cbnz w9, #0x694bee8
0x0694BEE0: e00308aa  mov x0, x8
0x0694BEE4: 2ad32097  bl #0x3180b8c
0x0694BEE8: c10240f9  ldr x1, [x22]
0x0694BEEC: a30240f9  ldr x3, [x21]
0x0694BEF0: 840240f9  ldr x4, [x20]
0x0694BEF4: e00313aa  mov x0, x19
0x0694BEF8: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0694BEFC: f65741a9  ldp x22, x21, [sp, #0x10]
0x0694BF00: e2031faa  mov x2, xzr
0x0694BF04: e5031faa  mov x5, xzr
0x0694BF08: e6031faa  mov x6, xzr
0x0694BF0C: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x0694BF10: 4981ac17  b #0x546c434
0x0694BF14: 66d32097  bl #0x3180cac

