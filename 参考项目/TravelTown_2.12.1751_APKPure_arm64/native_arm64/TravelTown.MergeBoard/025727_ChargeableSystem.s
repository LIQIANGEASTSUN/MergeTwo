; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25727 Merger.MergeBoard.Systems.ChargeableSystem
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A65460 | public void Tick(TickContext context) { }
; bytes=596 sha256=61f58fa250329b743572d468c3193e2aaaafb6f033e795abb31dbe2076a72c81 status=arm64_complete_bound indexed_start=True
0x06A65460: ffc306d1  sub sp, sp, #0x1b0
0x06A65464: fd7b16a9  stp x29, x30, [sp, #0x160]
0x06A65468: fa6717a9  stp x26, x25, [sp, #0x170]
0x06A6546C: f85f18a9  stp x24, x23, [sp, #0x180]
0x06A65470: f65719a9  stp x22, x21, [sp, #0x190]
0x06A65474: f44f1aa9  stp x20, x19, [sp, #0x1a0]
0x06A65478: 3a9600b0  adrp x26, #0x7d2a000
0x06A6547C: 596600f0  adrp x25, #0x7730000
0x06A65480: 556600d0  adrp x21, #0x772f000
0x06A65484: 566600d0  adrp x22, #0x772f000
0x06A65488: 586600f0  adrp x24, #0x7730000
0x06A6548C: 576600f0  adrp x23, #0x7730000
0x06A65490: 48775a39  ldrb w8, [x26, #0x69d]
0x06A65494: 391745f9  ldr x25, [x25, #0xa28]
0x06A65498: b53647f9  ldr x21, [x21, #0xe68]
0x06A6549C: d62647f9  ldr x22, [x22, #0xe48]
0x06A654A0: 181b45f9  ldr x24, [x24, #0xa30]
0x06A654A4: f71e45f9  ldr x23, [x23, #0xa38]
0x06A654A8: f30301aa  mov x19, x1
0x06A654AC: f40300aa  mov x20, x0
0x06A654B0: 28040037  tbnz w8, #0, #0x6a65534
0x06A654B4: 406600f0  adrp x0, #0x7730000
0x06A654B8: 002045f9  ldr x0, [x0, #0xa40]
0x06A654BC: 576d1c97  bl #0x3180a18
0x06A654C0: 406600d0  adrp x0, #0x772f000
0x06A654C4: 002447f9  ldr x0, [x0, #0xe48]
0x06A654C8: 546d1c97  bl #0x3180a18
0x06A654CC: 406600f0  adrp x0, #0x7730000
0x06A654D0: 001445f9  ldr x0, [x0, #0xa28]
0x06A654D4: 516d1c97  bl #0x3180a18
0x06A654D8: 406600d0  adrp x0, #0x772f000
0x06A654DC: 003447f9  ldr x0, [x0, #0xe68]
0x06A654E0: 4e6d1c97  bl #0x3180a18
0x06A654E4: 405f00b0  adrp x0, #0x764e000
0x06A654E8: 000447f9  ldr x0, [x0, #0xe08]
0x06A654EC: 4b6d1c97  bl #0x3180a18
0x06A654F0: 406600f0  adrp x0, #0x7730000
0x06A654F4: 001c45f9  ldr x0, [x0, #0xa38]
0x06A654F8: 486d1c97  bl #0x3180a18
0x06A654FC: 406600f0  adrp x0, #0x7730000
0x06A65500: 001845f9  ldr x0, [x0, #0xa30]
0x06A65504: 456d1c97  bl #0x3180a18
0x06A65508: 406600f0  adrp x0, #0x7730000
0x06A6550C: 002445f9  ldr x0, [x0, #0xa48]
0x06A65510: 426d1c97  bl #0x3180a18
0x06A65514: 406600f0  adrp x0, #0x7730000
0x06A65518: 002845f9  ldr x0, [x0, #0xa50]
0x06A6551C: 3f6d1c97  bl #0x3180a18
0x06A65520: 405f00d0  adrp x0, #0x764f000
0x06A65524: 00ac40f9  ldr x0, [x0, #0x158]
0x06A65528: 3c6d1c97  bl #0x3180a18
0x06A6552C: 28008052  movz w8, #0x1
0x06A65530: 48771a39  strb w8, [x26, #0x69d]
0x06A65534: 00e4006f  movi v0.2d, #0000000000000000
0x06A65538: e0a30091  add x0, sp, #0x28
0x06A6553C: 02118052  movz w2, #0x88
0x06A65540: e1031f2a  mov w1, wzr
0x06A65544: e08305ad  stp q0, q0, [sp, #0xb0]
0x06A65548: 16a51d94  bl #0x71ce9a0
0x06A6554C: 600640ad  ldp q0, q1, [x19]
0x06A65550: 200340f9  ldr x0, [x25]
0x06A65554: e00700ad  stp q0, q1, [sp]
0x06A65558: a4d54697  bl #0x3c1abe8
0x06A6555C: a80240f9  ldr x8, [x21]
0x06A65560: f50300aa  mov x21, x0
0x06A65564: e00308aa  mov x0, x8
0x06A65568: ce6d1c97  bl #0x3180ca0
0x06A6556C: c20240f9  ldr x2, [x22]
0x06A65570: e1031faa  mov x1, xzr
0x06A65574: e3031faa  mov x3, xzr
0x06A65578: f60300aa  mov x22, x0
0x06A6557C: e3c1d297  bl #0x5f15d08
0x06A65580: e00740ad  ldp q0, q1, [sp]
0x06A65584: 030340f9  ldr x3, [x24]
0x06A65588: e8c30291  add x8, sp, #0xb0
0x06A6558C: e0430391  add x0, sp, #0xd0
0x06A65590: e10315aa  mov x1, x21
0x06A65594: e20316aa  mov x2, x22
0x06A65598: e08706ad  stp q0, q1, [sp, #0xd0]
0x06A6559C: ea034c97  bl #0x3d66544
0x06A655A0: e20240f9  ldr x2, [x23]
0x06A655A4: e0c30291  add x0, sp, #0xb0
0x06A655A8: e1a30091  add x1, sp, #0x28
0x06A655AC: a6c66497  bl #0x4397044
0x06A655B0: 20070036  tbz w0, #0, #0x6a65694
0x06A655B4: e83b40b9  ldr w8, [sp, #0x38]
0x06A655B8: 1f050071  cmp w8, #1
0x06A655BC: c0060054  b.eq #0x6a65694
0x06A655C0: 485f00b0  adrp x8, #0x764e000
0x06A655C4: 080547f9  ldr x8, [x8, #0xe08]
0x06A655C8: f55b4629  ldp w21, w22, [sp, #0x30]
0x06A655CC: 000140f9  ldr x0, [x8]
0x06A655D0: 08e040b9  ldr w8, [x0, #0xe0]
0x06A655D4: 48000035  cbnz w8, #0x6a655dc
0x06A655D8: 6d6d1c97  bl #0x3180b8c
0x06A655DC: c0060011  add w0, w22, #1
0x06A655E0: a1060051  sub w1, w21, #1
0x06A655E4: e2031faa  mov x2, xzr
0x06A655E8: e6c7b097  bl #0x5697580
0x06A655EC: 486600f0  adrp x8, #0x7730000
0x06A655F0: 082945f9  ldr x8, [x8, #0xa50]
0x06A655F4: e03700b9  str w0, [sp, #0x34]
0x06A655F8: e0430391  add x0, sp, #0xd0
0x06A655FC: e1a30091  add x1, sp, #0x28
0x06A65600: 150140f9  ldr x21, [x8]
0x06A65604: 02118052  movz w2, #0x88
0x06A65608: daa41d94  bl #0x71ce970
0x06A6560C: e0430391  add x0, sp, #0xd0
0x06A65610: e10315aa  mov x1, x21
0x06A65614: 4d864d97  bl #0x3dc6f48
0x06A65618: 485f00d0  adrp x8, #0x764f000
0x06A6561C: e01740f9  ldr x0, [sp, #0x28]
0x06A65620: 810e40f9  ldr x1, [x20, #0x18]
0x06A65624: 08ad40f9  ldr x8, [x8, #0x158]
0x06A65628: e5031faa  mov x5, xzr
0x06A6562C: 020140f9  ldr x2, [x8]
0x06A65630: e30302aa  mov x3, x2
0x06A65634: e40302aa  mov x4, x2
0x06A65638: bff60094  bl #0x6aa3134
0x06A6563C: 486600f0  adrp x8, #0x7730000
0x06A65640: 730a40f9  ldr x19, [x19, #0x10]
0x06A65644: 082145f9  ldr x8, [x8, #0xa40]
0x06A65648: f50300aa  mov x21, x0
0x06A6564C: 080140f9  ldr x8, [x8]
0x06A65650: e00308aa  mov x0, x8
0x06A65654: 936d1c97  bl #0x3180ca0
0x06A65658: e1031faa  mov x1, xzr
0x06A6565C: f40300aa  mov x20, x0
0x06A65660: 12d30094  bl #0x6a9a2a8
0x06A65664: 740200b4  cbz x20, #0x6a656b0
0x06A65668: e00314aa  mov x0, x20
0x06A6566C: 150c01f8  str x21, [x0, #0x10]!
0x06A65670: e10315aa  mov x1, x21
0x06A65674: d46c1c97  bl #0x31809c4
0x06A65678: d30100b4  cbz x19, #0x6a656b0
0x06A6567C: 486600f0  adrp x8, #0x7730000
0x06A65680: 082545f9  ldr x8, [x8, #0xa48]
0x06A65684: e00313aa  mov x0, x19
0x06A65688: e10314aa  mov x1, x20
0x06A6568C: 020140f9  ldr x2, [x8]
0x06A65690: 55774d97  bl #0x3dc33e4
0x06A65694: f44f5aa9  ldp x20, x19, [sp, #0x1a0]
0x06A65698: f65759a9  ldp x22, x21, [sp, #0x190]
0x06A6569C: f85f58a9  ldp x24, x23, [sp, #0x180]
0x06A656A0: fa6757a9  ldp x26, x25, [sp, #0x170]
0x06A656A4: fd7b56a9  ldp x29, x30, [sp, #0x160]
0x06A656A8: ffc30691  add sp, sp, #0x1b0
0x06A656AC: c0035fd6  ret
0x06A656B0: 7f6d1c97  bl #0x3180cac

; RVA 0x6A656B4 | public void .ctor() { }
; bytes=8 sha256=4a4ffe50840bb6e65e1cc599c5ba6573b26632492f05e2af39da58b452fe2f7d status=arm64_complete_bound indexed_start=True
0x06A656B4: e1031faa  mov x1, xzr
0x06A656B8: d1d3b117  b #0x56da5fc

