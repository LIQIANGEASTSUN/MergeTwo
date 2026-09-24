; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 7489 .BubbledItemSystem.<>c__DisplayClass96_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x65897D4 | public void .ctor() { }
; bytes=8 sha256=fdc611bc0008b551522d3dd8eb4775b21ed9261e092f1d551e6ae6ce6fead603 status=arm64_complete_bound indexed_start=True
0x065897D4: e1031faa  mov x1, xzr
0x065897D8: 8943c517  b #0x56da5fc

; RVA 0x65897DC | internal void <SetBurstBubbleData>g__TryBurstBubble|0(List<BubbleData> bubblesList) { }
; bytes=328 sha256=bd0f2b33dd3a454b76493159027de952ddc761a12ea06de9eceed779469c407e status=arm64_complete_bound indexed_start=True
0x065897DC: fe0f1cf8  str x30, [sp, #-0x40]!
0x065897E0: f85f01a9  stp x24, x23, [sp, #0x10]
0x065897E4: f65702a9  stp x22, x21, [sp, #0x20]
0x065897E8: f44f03a9  stp x20, x19, [sp, #0x30]
0x065897EC: f7bc00d0  adrp x23, #0x7d27000
0x065897F0: b88b00f0  adrp x24, #0x7700000
0x065897F4: b58b00f0  adrp x21, #0x7700000
0x065897F8: b68b00f0  adrp x22, #0x7700000
0x065897FC: e8ee5a39  ldrb w8, [x23, #0x6bb]
0x06589800: 18a343f9  ldr x24, [x24, #0x740]
0x06589804: b57a46f9  ldr x21, [x21, #0xcf0]
0x06589808: d67e46f9  ldr x22, [x22, #0xcf8]
0x0658980C: f40301aa  mov x20, x1
0x06589810: f30300aa  mov x19, x0
0x06589814: e8010037  tbnz w8, #0, #0x6589850
0x06589818: a08b00f0  adrp x0, #0x7700000
0x0658981C: 007c46f9  ldr x0, [x0, #0xcf8]
0x06589820: 7edc2f97  bl #0x3180a18
0x06589824: a08b00f0  adrp x0, #0x7700000
0x06589828: 00a043f9  ldr x0, [x0, #0x740]
0x0658982C: 7bdc2f97  bl #0x3180a18
0x06589830: a08b00f0  adrp x0, #0x7700000
0x06589834: 008043f9  ldr x0, [x0, #0x700]
0x06589838: 78dc2f97  bl #0x3180a18
0x0658983C: a08b00f0  adrp x0, #0x7700000
0x06589840: 007846f9  ldr x0, [x0, #0xcf0]
0x06589844: 75dc2f97  bl #0x3180a18
0x06589848: 28008052  movz w8, #0x1
0x0658984C: e8ee1a39  strb w8, [x23, #0x6bb]
0x06589850: 000340f9  ldr x0, [x24]
0x06589854: 13dd2f97  bl #0x3180ca0
0x06589858: a20240f9  ldr x2, [x21]
0x0658985C: e10313aa  mov x1, x19
0x06589860: e3031faa  mov x3, xzr
0x06589864: f50300aa  mov x21, x0
0x06589868: d531b397  bl #0x5255fbc
0x0658986C: c20240f9  ldr x2, [x22]
0x06589870: e00314aa  mov x0, x20
0x06589874: e10315aa  mov x1, x21
0x06589878: 2eee5a97  bl #0x3c45130
0x0658987C: 200300b4  cbz x0, #0x65898e0
0x06589880: 28008052  movz w8, #0x1
0x06589884: 08500039  strb w8, [x0, #0x14]
0x06589888: 680e40f9  ldr x8, [x19, #0x18]
0x0658988C: a80400b4  cbz x8, #0x6589920
0x06589890: 136140f9  ldr x19, [x8, #0xc0]
0x06589894: 730400b4  cbz x19, #0x6589920
0x06589898: aa8b00f0  adrp x10, #0x7700000
0x0658989C: 680240f9  ldr x8, [x19]
0x065898A0: 4a8143f9  ldr x10, [x10, #0x700]
0x065898A4: 095d4279  ldrh w9, [x8, #0x12e]
0x065898A8: 410140f9  ldr x1, [x10]
0x065898AC: 290100b4  cbz x9, #0x65898d0
0x065898B0: 0a5940f9  ldr x10, [x8, #0xb0]
0x065898B4: 4a210091  add x10, x10, #8
0x065898B8: 4b815ff8  ldur x11, [x10, #-8]
0x065898BC: 7f0101eb  cmp x11, x1
0x065898C0: a0010054  b.eq #0x65898f4
0x065898C4: 290500f1  subs x9, x9, #1
0x065898C8: 4a410091  add x10, x10, #0x10
0x065898CC: 61ffff54  b.ne #0x65898b8
0x065898D0: 22008052  movz w2, #0x1
0x065898D4: e00313aa  mov x0, x19
0x065898D8: 8e342f97  bl #0x3156b10
0x065898DC: 0a000014  b #0x6589904
0x065898E0: f44f43a9  ldp x20, x19, [sp, #0x30]
0x065898E4: f65742a9  ldp x22, x21, [sp, #0x20]
0x065898E8: f85f41a9  ldp x24, x23, [sp, #0x10]
0x065898EC: fe0744f8  ldr x30, [sp], #0x40
0x065898F0: c0035fd6  ret
0x065898F4: 490140b9  ldr w9, [x10]
0x065898F8: 29050011  add w9, w9, #1
0x065898FC: 08d1298b  add x8, x8, w9, sxtw #4
0x06589900: 00e10491  add x0, x8, #0x138
0x06589904: 020440a9  ldp x2, x1, [x0]
0x06589908: e00313aa  mov x0, x19
0x0658990C: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06589910: f65742a9  ldp x22, x21, [sp, #0x20]
0x06589914: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06589918: fe0744f8  ldr x30, [sp], #0x40
0x0658991C: 40001fd6  br x2
0x06589920: e3dc2f97  bl #0x3180cac

; RVA 0x658A554 | internal bool <SetBurstBubbleData>b__1(BubbleData i) { }
; bytes=36 sha256=b521bcb5e1b7cb99d9adcc2e314758b8ef7d80b1f355099fc6299736e28a51ff status=arm64_complete_bound indexed_start=True
0x0658A554: fe0f1ff8  str x30, [sp, #-0x10]!
0x0658A558: e10000b4  cbz x1, #0x658a574
0x0658A55C: 281040f9  ldr x8, [x1, #0x20]
0x0658A560: 010840f9  ldr x1, [x0, #0x10]
0x0658A564: e2031faa  mov x2, xzr
0x0658A568: e00308aa  mov x0, x8
0x0658A56C: fe0741f8  ldr x30, [sp], #0x10
0x0658A570: c080bd17  b #0x54ea870
0x0658A574: ced92f97  bl #0x3180cac

