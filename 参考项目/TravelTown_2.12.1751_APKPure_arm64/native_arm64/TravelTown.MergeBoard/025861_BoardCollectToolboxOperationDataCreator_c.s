; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25861 .BoardCollectToolboxOperationDataCreator.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A8A4A8 | private static void .cctor() { }
; bytes=104 sha256=78c3deab05af79e594dd55d83f0487e672500d717208bfa6757a6af30178d6ea status=arm64_complete_bound indexed_start=True
0x06A8A4A8: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A8A4AC: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A8A4B0: 13950090  adrp x19, #0x7d2a000
0x06A8A4B4: 346500f0  adrp x20, #0x7731000
0x06A8A4B8: 68d25e39  ldrb w8, [x19, #0x7b4]
0x06A8A4BC: 940e47f9  ldr x20, [x20, #0xe18]
0x06A8A4C0: c8000037  tbnz w8, #0, #0x6a8a4d8
0x06A8A4C4: 206500f0  adrp x0, #0x7731000
0x06A8A4C8: 000c47f9  ldr x0, [x0, #0xe18]
0x06A8A4CC: 53d91b97  bl #0x3180a18
0x06A8A4D0: 28008052  movz w8, #0x1
0x06A8A4D4: 68d21e39  strb w8, [x19, #0x7b4]
0x06A8A4D8: 800240f9  ldr x0, [x20]
0x06A8A4DC: f1d91b97  bl #0x3180ca0
0x06A8A4E0: e1031faa  mov x1, xzr
0x06A8A4E4: f30300aa  mov x19, x0
0x06A8A4E8: 4540b197  bl #0x56da5fc
0x06A8A4EC: 880240f9  ldr x8, [x20]
0x06A8A4F0: e10313aa  mov x1, x19
0x06A8A4F4: 085d40f9  ldr x8, [x8, #0xb8]
0x06A8A4F8: 130100f9  str x19, [x8]
0x06A8A4FC: 880240f9  ldr x8, [x20]
0x06A8A500: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A8A504: 005d40f9  ldr x0, [x8, #0xb8]
0x06A8A508: fe0742f8  ldr x30, [sp], #0x20
0x06A8A50C: 2ed91b17  b #0x31809c4

; RVA 0x6A8A510 | public void .ctor() { }
; bytes=8 sha256=ce973b5f4afd0119b0ebcf63afa722be7a5e900fea358ef97daf72884e1932c2 status=arm64_complete_bound indexed_start=True
0x06A8A510: e1031faa  mov x1, xzr
0x06A8A514: 3a40b117  b #0x56da5fc

; RVA 0x6A8A518 | internal string <CreateOperationData>b__2_0(IMergeItem tool) { }
; bytes=156 sha256=c3f452a2b2ac776467db126a989b098be3c7ddd6db3b2f505b9bd7d6f60650bd status=arm64_complete_bound indexed_start=True
0x06A8A518: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A8A51C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A8A520: 14950090  adrp x20, #0x7d2a000
0x06A8A524: 88d65e39  ldrb w8, [x20, #0x7b5]
0x06A8A528: f30301aa  mov x19, x1
0x06A8A52C: c8000037  tbnz w8, #0, #0x6a8a544
0x06A8A530: 605f00f0  adrp x0, #0x7679000
0x06A8A534: 001044f9  ldr x0, [x0, #0x820]
0x06A8A538: 38d91b97  bl #0x3180a18
0x06A8A53C: 28008052  movz w8, #0x1
0x06A8A540: 88d61e39  strb w8, [x20, #0x7b5]
0x06A8A544: 730300b4  cbz x19, #0x6a8a5b0
0x06A8A548: 6a5f00f0  adrp x10, #0x7679000
0x06A8A54C: 680240f9  ldr x8, [x19]
0x06A8A550: 4a1144f9  ldr x10, [x10, #0x820]
0x06A8A554: 095d4279  ldrh w9, [x8, #0x12e]
0x06A8A558: 410140f9  ldr x1, [x10]
0x06A8A55C: 290100b4  cbz x9, #0x6a8a580
0x06A8A560: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A8A564: 4a210091  add x10, x10, #8
0x06A8A568: 4b815ff8  ldur x11, [x10, #-8]
0x06A8A56C: 7f0101eb  cmp x11, x1
0x06A8A570: 00010054  b.eq #0x6a8a590
0x06A8A574: 290500f1  subs x9, x9, #1
0x06A8A578: 4a410091  add x10, x10, #0x10
0x06A8A57C: 61ffff54  b.ne #0x6a8a568
0x06A8A580: e00313aa  mov x0, x19
0x06A8A584: e2031f2a  mov w2, wzr
0x06A8A588: 62311b97  bl #0x3156b10
0x06A8A58C: 04000014  b #0x6a8a59c
0x06A8A590: 490180b9  ldrsw x9, [x10]
0x06A8A594: 0811098b  add x8, x8, x9, lsl #4
0x06A8A598: 00e10491  add x0, x8, #0x138
0x06A8A59C: 020440a9  ldp x2, x1, [x0]
0x06A8A5A0: e00313aa  mov x0, x19
0x06A8A5A4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A8A5A8: fe0742f8  ldr x30, [sp], #0x20
0x06A8A5AC: 40001fd6  br x2
0x06A8A5B0: bfd91b97  bl #0x3180cac

