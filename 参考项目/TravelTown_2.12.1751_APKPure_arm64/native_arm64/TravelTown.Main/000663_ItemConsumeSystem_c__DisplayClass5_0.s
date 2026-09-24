; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 663 .ItemConsumeSystem.<>c__DisplayClass5_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x628AB6C | public void .ctor() { }
; bytes=8 sha256=53ee4bacdbd85c9cffe24da46265560330235c03237c212e223a42eec661008f status=arm64_complete_bound indexed_start=True
0x0628AB6C: e1031faa  mov x1, xzr
0x0628AB70: a33ed117  b #0x56da5fc

; RVA 0x628B410 | internal void <TryConsumeInteractionCostItems>b__0(ItemMultiple itemMultiple) { }
; bytes=428 sha256=515f369a41718bc8e514786f3233d9c15039a76950489224069a69563c7b1d67 status=arm64_complete_bound indexed_start=True
0x0628B410: fe67bca9  stp x30, x25, [sp, #-0x40]!
0x0628B414: f85f01a9  stp x24, x23, [sp, #0x10]
0x0628B418: f65702a9  stp x22, x21, [sp, #0x20]
0x0628B41C: f44f03a9  stp x20, x19, [sp, #0x30]
0x0628B420: d5d400d0  adrp x21, #0x7d25000
0x0628B424: a8225439  ldrb w8, [x21, #0x508]
0x0628B428: f30301aa  mov x19, x1
0x0628B42C: f40300aa  mov x20, x0
0x0628B430: a8020037  tbnz w8, #0, #0x628b484
0x0628B434: e0a20090  adrp x0, #0x76e7000
0x0628B438: 00ec42f9  ldr x0, [x0, #0x5d8]
0x0628B43C: 77d53b97  bl #0x3180a18
0x0628B440: e0a20090  adrp x0, #0x76e7000
0x0628B444: 00f042f9  ldr x0, [x0, #0x5e0]
0x0628B448: 74d53b97  bl #0x3180a18
0x0628B44C: 609f00f0  adrp x0, #0x767a000
0x0628B450: 00f443f9  ldr x0, [x0, #0x7e8]
0x0628B454: 71d53b97  bl #0x3180a18
0x0628B458: 809f00f0  adrp x0, #0x767e000
0x0628B45C: 001440f9  ldr x0, [x0, #0x28]
0x0628B460: 6ed53b97  bl #0x3180a18
0x0628B464: 809f00d0  adrp x0, #0x767d000
0x0628B468: 00b841f9  ldr x0, [x0, #0x370]
0x0628B46C: 6bd53b97  bl #0x3180a18
0x0628B470: 809f00b0  adrp x0, #0x767c000
0x0628B474: 00fc47f9  ldr x0, [x0, #0xff8]
0x0628B478: 68d53b97  bl #0x3180a18
0x0628B47C: 28008052  movz w8, #0x1
0x0628B480: a8221439  strb w8, [x21, #0x508]
0x0628B484: b30900b4  cbz x19, #0x628b5b8
0x0628B488: 789f00f0  adrp x24, #0x767a000
0x0628B48C: 18f743f9  ldr x24, [x24, #0x7e8]
0x0628B490: 969f00b0  adrp x22, #0x767c000
0x0628B494: 979f00d0  adrp x23, #0x767d000
0x0628B498: 950e40f9  ldr x21, [x20, #0x18]
0x0628B49C: 010340f9  ldr x1, [x24]
0x0628B4A0: d6fe47f9  ldr x22, [x22, #0xff8]
0x0628B4A4: f7ba41f9  ldr x23, [x23, #0x370]
0x0628B4A8: e00313aa  mov x0, x19
0x0628B4AC: 5b1bc497  bl #0x5392218
0x0628B4B0: c80240f9  ldr x8, [x22]
0x0628B4B4: f60300aa  mov x22, x0
0x0628B4B8: e00308aa  mov x0, x8
0x0628B4BC: f9d53b97  bl #0x3180ca0
0x0628B4C0: e10240f9  ldr x1, [x23]
0x0628B4C4: f70300aa  mov x23, x0
0x0628B4C8: 22347997  bl #0x40d8550
0x0628B4CC: 750700b4  cbz x21, #0x628b5b8
0x0628B4D0: e8a20090  adrp x8, #0x76e7000
0x0628B4D4: 08ed42f9  ldr x8, [x8, #0x5d8]
0x0628B4D8: e00315aa  mov x0, x21
0x0628B4DC: e10316aa  mov x1, x22
0x0628B4E0: e20317aa  mov x2, x23
0x0628B4E4: 030140f9  ldr x3, [x8]
0x0628B4E8: 255eb197  bl #0x4ee2d7c
0x0628B4EC: e00313aa  mov x0, x19
0x0628B4F0: e1031faa  mov x1, xzr
0x0628B4F4: 824ef697  bl #0x601eefc
0x0628B4F8: 1f040071  cmp w0, #1
0x0628B4FC: 4b050054  b.lt #0x628b5a4
0x0628B500: f7a20090  adrp x23, #0x76e7000
0x0628B504: 999f00f0  adrp x25, #0x767e000
0x0628B508: f7f242f9  ldr x23, [x23, #0x5e0]
0x0628B50C: 391740f9  ldr x25, [x25, #0x28]
0x0628B510: f6031f2a  mov w22, wzr
0x0628B514: 010340f9  ldr x1, [x24]
0x0628B518: 950e40f9  ldr x21, [x20, #0x18]
0x0628B51C: e00313aa  mov x0, x19
0x0628B520: 3e1bc497  bl #0x5392218
0x0628B524: b50400b4  cbz x21, #0x628b5b8
0x0628B528: e20240f9  ldr x2, [x23]
0x0628B52C: e10300aa  mov x1, x0
0x0628B530: e00315aa  mov x0, x21
0x0628B534: f25db197  bl #0x4ee2cfc
0x0628B538: 000400b4  cbz x0, #0x628b5b8
0x0628B53C: 0a1c40b9  ldr w10, [x0, #0x1c]
0x0628B540: 8006442d  ldp s0, s1, [x20, #0x20]
0x0628B544: 080840f9  ldr x8, [x0, #0x10]
0x0628B548: 290340f9  ldr x9, [x25]
0x0628B54C: 4a050011  add w10, w10, #1
0x0628B550: 0a1c00b9  str w10, [x0, #0x1c]
0x0628B554: 280300b4  cbz x8, #0x628b5b8
0x0628B558: 0a1880b9  ldrsw x10, [x0, #0x18]
0x0628B55C: 0b1940b9  ldr w11, [x8, #0x18]
0x0628B560: 5f010b6b  cmp w10, w11
0x0628B564: c2000054  b.hs #0x628b57c
0x0628B568: 49050011  add w9, w10, #1
0x0628B56C: 080d0a8b  add x8, x8, x10, lsl #3
0x0628B570: 091800b9  str w9, [x0, #0x18]
0x0628B574: 0005042d  stp s0, s1, [x8, #0x20]
0x0628B578: 05000014  b #0x628b58c
0x0628B57C: 281140f9  ldr x8, [x9, #0x20]
0x0628B580: 086140f9  ldr x8, [x8, #0xc0]
0x0628B584: 013940f9  ldr x1, [x8, #0x70]
0x0628B588: 0c367997  bl #0x40d8db8
0x0628B58C: e00313aa  mov x0, x19
0x0628B590: e1031faa  mov x1, xzr
0x0628B594: d6060011  add w22, w22, #1
0x0628B598: 594ef697  bl #0x601eefc
0x0628B59C: df02006b  cmp w22, w0
0x0628B5A0: abfbff54  b.lt #0x628b514
0x0628B5A4: f44f43a9  ldp x20, x19, [sp, #0x30]
0x0628B5A8: f65742a9  ldp x22, x21, [sp, #0x20]
0x0628B5AC: f85f41a9  ldp x24, x23, [sp, #0x10]
0x0628B5B0: fe67c4a8  ldp x30, x25, [sp], #0x40
0x0628B5B4: c0035fd6  ret
0x0628B5B8: bdd53b97  bl #0x3180cac

; RVA 0x628B5BC | internal void <TryConsumeInteractionCostItems>b__1() { }
; bytes=32 sha256=b0c7bea240b7cbe2b9c894c1d12f1f7fd75112238cca4813733e664d80d509c8 status=arm64_complete_bound indexed_start=True
0x0628B5BC: 080840f9  ldr x8, [x0, #0x10]
0x0628B5C0: c80000b4  cbz x8, #0x628b5d8
0x0628B5C4: 012840b9  ldr w1, [x0, #0x28]
0x0628B5C8: 030d40f9  ldr x3, [x8, #0x18]
0x0628B5CC: 002140f9  ldr x0, [x8, #0x40]
0x0628B5D0: 021540f9  ldr x2, [x8, #0x28]
0x0628B5D4: 60001fd6  br x3
0x0628B5D8: c0035fd6  ret

