; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 999 .ImmediateToolCollectSystem.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x67A17D0 | private static void .cctor() { }
; bytes=104 sha256=ec3165586c875c2cb6a4a39ac9fbce9c89c1c5c5a4cd25a2c7680932b990bd54 status=arm64_complete_bound indexed_start=True
0x067A17D0: fe0f1ef8  str x30, [sp, #-0x20]!
0x067A17D4: f44f01a9  stp x20, x19, [sp, #0x10]
0x067A17D8: 33ac00f0  adrp x19, #0x7d28000
0x067A17DC: 747b00f0  adrp x20, #0x7710000
0x067A17E0: 687a7739  ldrb w8, [x19, #0xdde]
0x067A17E4: 940245f9  ldr x20, [x20, #0xa00]
0x067A17E8: c8000037  tbnz w8, #0, #0x67a1800
0x067A17EC: 607b00f0  adrp x0, #0x7710000
0x067A17F0: 000045f9  ldr x0, [x0, #0xa00]
0x067A17F4: 897c2797  bl #0x3180a18
0x067A17F8: 28008052  movz w8, #0x1
0x067A17FC: 687a3739  strb w8, [x19, #0xdde]
0x067A1800: 800240f9  ldr x0, [x20]
0x067A1804: 277d2797  bl #0x3180ca0
0x067A1808: e1031faa  mov x1, xzr
0x067A180C: f30300aa  mov x19, x0
0x067A1810: 7be3bc97  bl #0x56da5fc
0x067A1814: 880240f9  ldr x8, [x20]
0x067A1818: e10313aa  mov x1, x19
0x067A181C: 085d40f9  ldr x8, [x8, #0xb8]
0x067A1820: 130100f9  str x19, [x8]
0x067A1824: 880240f9  ldr x8, [x20]
0x067A1828: f44f41a9  ldp x20, x19, [sp, #0x10]
0x067A182C: 005d40f9  ldr x0, [x8, #0xb8]
0x067A1830: fe0742f8  ldr x30, [sp], #0x20
0x067A1834: 647c2717  b #0x31809c4

; RVA 0x67A1838 | public void .ctor() { }
; bytes=8 sha256=5f366935bd7ed06f2f35eef0521bb0faec071f47ec6aacfb715e2285cadbeae9 status=arm64_complete_bound indexed_start=True
0x067A1838: e1031faa  mov x1, xzr
0x067A183C: 70e3bc17  b #0x56da5fc

; RVA 0x67A1840 | internal string <StartToolCollectionSequence>b__16_0(IMergeItem tool) { }
; bytes=156 sha256=28e0675b1683db45236311c453d15083f9017452a5de1a8ed7ff779409495c8d status=arm64_complete_bound indexed_start=True
0x067A1840: fe0f1ef8  str x30, [sp, #-0x20]!
0x067A1844: f44f01a9  stp x20, x19, [sp, #0x10]
0x067A1848: 34ac00f0  adrp x20, #0x7d28000
0x067A184C: 887e7739  ldrb w8, [x20, #0xddf]
0x067A1850: f30301aa  mov x19, x1
0x067A1854: c8000037  tbnz w8, #0, #0x67a186c
0x067A1858: c0760090  adrp x0, #0x7679000
0x067A185C: 001044f9  ldr x0, [x0, #0x820]
0x067A1860: 6e7c2797  bl #0x3180a18
0x067A1864: 28008052  movz w8, #0x1
0x067A1868: 887e3739  strb w8, [x20, #0xddf]
0x067A186C: 730300b4  cbz x19, #0x67a18d8
0x067A1870: ca760090  adrp x10, #0x7679000
0x067A1874: 680240f9  ldr x8, [x19]
0x067A1878: 4a1144f9  ldr x10, [x10, #0x820]
0x067A187C: 095d4279  ldrh w9, [x8, #0x12e]
0x067A1880: 410140f9  ldr x1, [x10]
0x067A1884: 290100b4  cbz x9, #0x67a18a8
0x067A1888: 0a5940f9  ldr x10, [x8, #0xb0]
0x067A188C: 4a210091  add x10, x10, #8
0x067A1890: 4b815ff8  ldur x11, [x10, #-8]
0x067A1894: 7f0101eb  cmp x11, x1
0x067A1898: 00010054  b.eq #0x67a18b8
0x067A189C: 290500f1  subs x9, x9, #1
0x067A18A0: 4a410091  add x10, x10, #0x10
0x067A18A4: 61ffff54  b.ne #0x67a1890
0x067A18A8: e00313aa  mov x0, x19
0x067A18AC: e2031f2a  mov w2, wzr
0x067A18B0: 98d42697  bl #0x3156b10
0x067A18B4: 04000014  b #0x67a18c4
0x067A18B8: 490180b9  ldrsw x9, [x10]
0x067A18BC: 0811098b  add x8, x8, x9, lsl #4
0x067A18C0: 00e10491  add x0, x8, #0x138
0x067A18C4: 020440a9  ldp x2, x1, [x0]
0x067A18C8: e00313aa  mov x0, x19
0x067A18CC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x067A18D0: fe0742f8  ldr x30, [sp], #0x20
0x067A18D4: 40001fd6  br x2
0x067A18D8: f57c2797  bl #0x3180cac

