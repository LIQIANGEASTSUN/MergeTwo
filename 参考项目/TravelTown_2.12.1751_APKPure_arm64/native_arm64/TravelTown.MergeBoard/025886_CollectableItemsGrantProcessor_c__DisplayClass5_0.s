; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25886 .CollectableItemsGrantProcessor.<>c__DisplayClass5_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A91DD8 | public void .ctor() { }
; bytes=8 sha256=32da80895d123dbba72f9c1f77e8ea901a7a61f7a40d154350ab8fa4daa985cd status=arm64_complete_bound indexed_start=True
0x06A91DD8: e1031faa  mov x1, xzr
0x06A91DDC: 0822b117  b #0x56da5fc

; RVA 0x6A9259C | internal void <Process>b__0() { }
; bytes=272 sha256=28ff1734b7d3708359ba01a1fd317d2163246c496e893fc42b8aa17039916b35 status=arm64_complete_bound indexed_start=True
0x06A9259C: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A925A0: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A925A4: d3940090  adrp x19, #0x7d2a000
0x06A925A8: 68ce5f39  ldrb w8, [x19, #0x7f3]
0x06A925AC: f40300aa  mov x20, x0
0x06A925B0: 28010037  tbnz w8, #0, #0x6a925d4
0x06A925B4: 005f00b0  adrp x0, #0x7673000
0x06A925B8: 004443f9  ldr x0, [x0, #0x688]
0x06A925BC: 17b91b97  bl #0x3180a18
0x06A925C0: 005f00b0  adrp x0, #0x7673000
0x06A925C4: 005c40f9  ldr x0, [x0, #0xb8]
0x06A925C8: 14b91b97  bl #0x3180a18
0x06A925CC: 28008052  movz w8, #0x1
0x06A925D0: 68ce1f39  strb w8, [x19, #0x7f3]
0x06A925D4: 880e40f9  ldr x8, [x20, #0x18]
0x06A925D8: 880600b4  cbz x8, #0x6a926a8
0x06A925DC: 890a40f9  ldr x9, [x20, #0x10]
0x06A925E0: 490600b4  cbz x9, #0x6a926a8
0x06A925E4: 0a5f00b0  adrp x10, #0x7673000
0x06A925E8: 4a5d40f9  ldr x10, [x10, #0xb8]
0x06A925EC: 131540f9  ldr x19, [x8, #0x28]
0x06A925F0: 352d40b9  ldr w21, [x9, #0x2c]
0x06A925F4: 400140f9  ldr x0, [x10]
0x06A925F8: 08e040b9  ldr w8, [x0, #0xe0]
0x06A925FC: 48000035  cbnz w8, #0x6a92604
0x06A92600: 63b91b97  bl #0x3180b8c
0x06A92604: e003152a  mov w0, w21
0x06A92608: e1031faa  mov x1, xzr
0x06A9260C: 45e9da97  bl #0x614cb20
0x06A92610: 890a40f9  ldr x9, [x20, #0x10]
0x06A92614: a90400b4  cbz x9, #0x6a926a8
0x06A92618: 930400b4  cbz x19, #0x6a926a8
0x06A9261C: 0a5f00b0  adrp x10, #0x7673000
0x06A92620: 680240f9  ldr x8, [x19]
0x06A92624: 4a4543f9  ldr x10, [x10, #0x688]
0x06A92628: 353140b9  ldr w21, [x9, #0x30]
0x06A9262C: f40300aa  mov x20, x0
0x06A92630: 095d4279  ldrh w9, [x8, #0x12e]
0x06A92634: 410140f9  ldr x1, [x10]
0x06A92638: 290100b4  cbz x9, #0x6a9265c
0x06A9263C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A92640: 4a210091  add x10, x10, #8
0x06A92644: 4b815ff8  ldur x11, [x10, #-8]
0x06A92648: 7f0101eb  cmp x11, x1
0x06A9264C: 00010054  b.eq #0x6a9266c
0x06A92650: 290500f1  subs x9, x9, #1
0x06A92654: 4a410091  add x10, x10, #0x10
0x06A92658: 61ffff54  b.ne #0x6a92644
0x06A9265C: 42018052  movz w2, #0xa
0x06A92660: e00313aa  mov x0, x19
0x06A92664: 2b111b97  bl #0x3156b10
0x06A92668: 05000014  b #0x6a9267c
0x06A9266C: 490140b9  ldr w9, [x10]
0x06A92670: 29290011  add w9, w9, #0xa
0x06A92674: 08d1298b  add x8, x8, w9, sxtw #4
0x06A92678: 00e10491  add x0, x8, #0x138
0x06A9267C: 081c40a9  ldp x8, x7, [x0]
0x06A92680: e00313aa  mov x0, x19
0x06A92684: e10314aa  mov x1, x20
0x06A92688: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A9268C: 23008052  movz w3, #0x1
0x06A92690: 84028052  movz w4, #0x14
0x06A92694: e203152a  mov w2, w21
0x06A92698: e5031faa  mov x5, xzr
0x06A9269C: e6031faa  mov x6, xzr
0x06A926A0: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A926A4: 00011fd6  br x8
0x06A926A8: 81b91b97  bl #0x3180cac

