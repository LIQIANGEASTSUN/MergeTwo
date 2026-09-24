; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25732 Merger.MergeBoard.Systems.ExpendableTimerActivationSystem
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A664EC | private long get_CurrentServerTimeMS() { }
; bytes=160 sha256=1be0be091df0c38399eae34e0b58490164cb8a7dba553a739195eafdac7e87fe status=arm64_complete_bound indexed_start=True
0x06A664EC: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A664F0: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A664F4: 34960090  adrp x20, #0x7d2a000
0x06A664F8: 888a5a39  ldrb w8, [x20, #0x6a2]
0x06A664FC: f30300aa  mov x19, x0
0x06A66500: c8000037  tbnz w8, #0, #0x6a66518
0x06A66504: 606000b0  adrp x0, #0x7673000
0x06A66508: 006c46f9  ldr x0, [x0, #0xcd8]
0x06A6650C: 43691c97  bl #0x3180a18
0x06A66510: 28008052  movz w8, #0x1
0x06A66514: 888a1a39  strb w8, [x20, #0x6a2]
0x06A66518: 730a40f9  ldr x19, [x19, #0x10]
0x06A6651C: 730300b4  cbz x19, #0x6a66588
0x06A66520: 6a6000b0  adrp x10, #0x7673000
0x06A66524: 680240f9  ldr x8, [x19]
0x06A66528: 4a6d46f9  ldr x10, [x10, #0xcd8]
0x06A6652C: 095d4279  ldrh w9, [x8, #0x12e]
0x06A66530: 410140f9  ldr x1, [x10]
0x06A66534: 290100b4  cbz x9, #0x6a66558
0x06A66538: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A6653C: 4a210091  add x10, x10, #8
0x06A66540: 4b815ff8  ldur x11, [x10, #-8]
0x06A66544: 7f0101eb  cmp x11, x1
0x06A66548: 00010054  b.eq #0x6a66568
0x06A6654C: 290500f1  subs x9, x9, #1
0x06A66550: 4a410091  add x10, x10, #0x10
0x06A66554: 61ffff54  b.ne #0x6a66540
0x06A66558: e00313aa  mov x0, x19
0x06A6655C: e2031f2a  mov w2, wzr
0x06A66560: 6cc11b97  bl #0x3156b10
0x06A66564: 04000014  b #0x6a66574
0x06A66568: 490180b9  ldrsw x9, [x10]
0x06A6656C: 0811098b  add x8, x8, x9, lsl #4
0x06A66570: 00e10491  add x0, x8, #0x138
0x06A66574: 020440a9  ldp x2, x1, [x0]
0x06A66578: e00313aa  mov x0, x19
0x06A6657C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A66580: fe0742f8  ldr x30, [sp], #0x20
0x06A66584: 40001fd6  br x2
0x06A66588: c9691c97  bl #0x3180cac

; RVA 0x6A6658C | public void Tick(TickContext context) { }
; bytes=140 sha256=f1bf0ab1067aa8e1f1450ba0d1d0b0a63c793f1a729b7202a1a3b8b16df5e6ff status=arm64_complete_bound indexed_start=True
0x06A6658C: ff8301d1  sub sp, sp, #0x60
0x06A66590: fe5704a9  stp x30, x21, [sp, #0x40]
0x06A66594: f44f05a9  stp x20, x19, [sp, #0x50]
0x06A66598: 35960090  adrp x21, #0x7d2a000
0x06A6659C: a88e5a39  ldrb w8, [x21, #0x6a3]
0x06A665A0: f40301aa  mov x20, x1
0x06A665A4: f30300aa  mov x19, x0
0x06A665A8: c8000037  tbnz w8, #0, #0x6a665c0
0x06A665AC: 406600d0  adrp x0, #0x7730000
0x06A665B0: 00c045f9  ldr x0, [x0, #0xb80]
0x06A665B4: 19691c97  bl #0x3180a18
0x06A665B8: 28008052  movz w8, #0x1
0x06A665BC: a88e1a39  strb w8, [x21, #0x6a3]
0x06A665C0: 810240ad  ldp q1, q0, [x20]
0x06A665C4: e1830091  add x1, sp, #0x20
0x06A665C8: e00313aa  mov x0, x19
0x06A665CC: e10301ad  stp q1, q0, [sp, #0x20]
0x06A665D0: 12000094  bl #0x6a66618
0x06A665D4: 800640f9  ldr x0, [x20, #8]
0x06A665D8: e00100b4  cbz x0, #0x6a66614
0x06A665DC: 486600d0  adrp x8, #0x7730000
0x06A665E0: 08c145f9  ldr x8, [x8, #0xb80]
0x06A665E4: 010140f9  ldr x1, [x8]
0x06A665E8: 41784d97  bl #0x3dc46ec
0x06A665EC: c0000036  tbz w0, #0, #0x6a66604
0x06A665F0: 810240ad  ldp q1, q0, [x20]
0x06A665F4: e1030091  mov x1, sp
0x06A665F8: e00313aa  mov x0, x19
0x06A665FC: e10300ad  stp q1, q0, [sp]
0x06A66600: d9000094  bl #0x6a66964
0x06A66604: f44f45a9  ldp x20, x19, [sp, #0x50]
0x06A66608: fe5744a9  ldp x30, x21, [sp, #0x40]
0x06A6660C: ff830191  add sp, sp, #0x60
0x06A66610: c0035fd6  ret
0x06A66614: a6691c97  bl #0x3180cac

; RVA 0x6A66618 | private void HandleFirstTimeProduceTrigger(TickContext context) { }
; bytes=844 sha256=2bb94d89981bd356354868ffa6cba0c368dc98b6ae5cf3b1c338b02d935429af status=arm64_complete_bound indexed_start=True
0x06A66618: fd7bbba9  stp x29, x30, [sp, #-0x50]!
0x06A6661C: fa6701a9  stp x26, x25, [sp, #0x10]
0x06A66620: f85f02a9  stp x24, x23, [sp, #0x20]
0x06A66624: f65703a9  stp x22, x21, [sp, #0x30]
0x06A66628: f44f04a9  stp x20, x19, [sp, #0x40]
0x06A6662C: ff4311d1  sub sp, sp, #0x450
0x06A66630: 3a960090  adrp x26, #0x7d2a000
0x06A66634: 596600d0  adrp x25, #0x7730000
0x06A66638: 556600b0  adrp x21, #0x772f000
0x06A6663C: 566600b0  adrp x22, #0x772f000
0x06A66640: 586600d0  adrp x24, #0x7730000
0x06A66644: 576600d0  adrp x23, #0x7730000
0x06A66648: 48935a39  ldrb w8, [x26, #0x6a4]
0x06A6664C: 39c745f9  ldr x25, [x25, #0xb88]
0x06A66650: b53647f9  ldr x21, [x21, #0xe68]
0x06A66654: d62647f9  ldr x22, [x22, #0xe48]
0x06A66658: 18cb45f9  ldr x24, [x24, #0xb90]
0x06A6665C: f7ce45f9  ldr x23, [x23, #0xb98]
0x06A66660: f30301aa  mov x19, x1
0x06A66664: f40300aa  mov x20, x0
0x06A66668: 48050037  tbnz w8, #0, #0x6a66710
0x06A6666C: 406600b0  adrp x0, #0x772f000
0x06A66670: 002447f9  ldr x0, [x0, #0xe48]
0x06A66674: e9681c97  bl #0x3180a18
0x06A66678: 406600d0  adrp x0, #0x7730000
0x06A6667C: 00c445f9  ldr x0, [x0, #0xb88]
0x06A66680: e6681c97  bl #0x3180a18
0x06A66684: 406600b0  adrp x0, #0x772f000
0x06A66688: 003447f9  ldr x0, [x0, #0xe68]
0x06A6668C: e3681c97  bl #0x3180a18
0x06A66690: 406600d0  adrp x0, #0x7730000
0x06A66694: 00d045f9  ldr x0, [x0, #0xba0]
0x06A66698: e0681c97  bl #0x3180a18
0x06A6669C: 406600d0  adrp x0, #0x7730000
0x06A666A0: 00d445f9  ldr x0, [x0, #0xba8]
0x06A666A4: dd681c97  bl #0x3180a18
0x06A666A8: 406600d0  adrp x0, #0x7730000
0x06A666AC: 00d845f9  ldr x0, [x0, #0xbb0]
0x06A666B0: da681c97  bl #0x3180a18
0x06A666B4: 406600d0  adrp x0, #0x7730000
0x06A666B8: 00dc45f9  ldr x0, [x0, #0xbb8]
0x06A666BC: d7681c97  bl #0x3180a18
0x06A666C0: 406600d0  adrp x0, #0x7730000
0x06A666C4: 00c845f9  ldr x0, [x0, #0xb90]
0x06A666C8: d4681c97  bl #0x3180a18
0x06A666CC: 406600d0  adrp x0, #0x7730000
0x06A666D0: 00e045f9  ldr x0, [x0, #0xbc0]
0x06A666D4: d1681c97  bl #0x3180a18
0x06A666D8: 406600d0  adrp x0, #0x7730000
0x06A666DC: 00e445f9  ldr x0, [x0, #0xbc8]
0x06A666E0: ce681c97  bl #0x3180a18
0x06A666E4: 406600d0  adrp x0, #0x7730000
0x06A666E8: 00cc45f9  ldr x0, [x0, #0xb98]
0x06A666EC: cb681c97  bl #0x3180a18
0x06A666F0: 406500d0  adrp x0, #0x7710000
0x06A666F4: 00e042f9  ldr x0, [x0, #0x5c0]
0x06A666F8: c8681c97  bl #0x3180a18
0x06A666FC: 405f00b0  adrp x0, #0x764f000
0x06A66700: 00ac40f9  ldr x0, [x0, #0x158]
0x06A66704: c5681c97  bl #0x3180a18
0x06A66708: 28008052  movz w8, #0x1
0x06A6670C: 48931a39  strb w8, [x26, #0x6a4]
0x06A66710: 00e4006f  movi v0.2d, #0000000000000000
0x06A66714: e0430d91  add x0, sp, #0x350
0x06A66718: 021c8052  movz w2, #0xe0
0x06A6671C: e1031f2a  mov w1, wzr
0x06A66720: e013813d  str q0, [sp, #0x440]
0x06A66724: e00f813d  str q0, [sp, #0x430]
0x06A66728: 9ea01d94  bl #0x71ce9a0
0x06A6672C: 00e4006f  movi v0.2d, #0000000000000000
0x06A66730: e08319ad  stp q0, q0, [sp, #0x330]
0x06A66734: 610240ad  ldp q1, q0, [x19]
0x06A66738: 200340f9  ldr x0, [x25]
0x06A6673C: e18318ad  stp q1, q0, [sp, #0x310]
0x06A66740: a9d14697  bl #0x3c1ade4
0x06A66744: a80240f9  ldr x8, [x21]
0x06A66748: f50300aa  mov x21, x0
0x06A6674C: e00308aa  mov x0, x8
0x06A66750: 54691c97  bl #0x3180ca0
0x06A66754: c20240f9  ldr x2, [x22]
0x06A66758: e1031faa  mov x1, xzr
0x06A6675C: e3031faa  mov x3, xzr
0x06A66760: f60300aa  mov x22, x0
0x06A66764: 69bdd297  bl #0x5f15d08
0x06A66768: e08758ad  ldp q0, q1, [sp, #0x310]
0x06A6676C: 030340f9  ldr x3, [x24]
0x06A66770: e8c30c91  add x8, sp, #0x330
0x06A66774: e0c30891  add x0, sp, #0x230
0x06A66778: e10315aa  mov x1, x21
0x06A6677C: e20316aa  mov x2, x22
0x06A66780: e08711ad  stp q0, q1, [sp, #0x230]
0x06A66784: 38004c97  bl #0x3d66864
0x06A66788: e00240f9  ldr x0, [x23]
0x06A6678C: 08e040b9  ldr w8, [x0, #0xe0]
0x06A66790: 68000035  cbnz w8, #0x6a6679c
0x06A66794: fe681c97  bl #0x3180b8c
0x06A66798: e00240f9  ldr x0, [x23]
0x06A6679C: 085c40f9  ldr x8, [x0, #0xb8]
0x06A667A0: 596600d0  adrp x25, #0x7730000
0x06A667A4: 586600d0  adrp x24, #0x7730000
0x06A667A8: 150540f9  ldr x21, [x8, #8]
0x06A667AC: 39df45f9  ldr x25, [x25, #0xbb8]
0x06A667B0: 18db45f9  ldr x24, [x24, #0xbb0]
0x06A667B4: f50200b5  cbnz x21, #0x6a66810
0x06A667B8: 08e040b9  ldr w8, [x0, #0xe0]
0x06A667BC: 68000035  cbnz w8, #0x6a667c8
0x06A667C0: f3681c97  bl #0x3180b8c
0x06A667C4: e00240f9  ldr x0, [x23]
0x06A667C8: 496600d0  adrp x9, #0x7730000
0x06A667CC: 085c40f9  ldr x8, [x0, #0xb8]
0x06A667D0: 29d545f9  ldr x9, [x9, #0xba8]
0x06A667D4: 160140f9  ldr x22, [x8]
0x06A667D8: 200140f9  ldr x0, [x9]
0x06A667DC: 31691c97  bl #0x3180ca0
0x06A667E0: 486600d0  adrp x8, #0x7730000
0x06A667E4: 08e545f9  ldr x8, [x8, #0xbc8]
0x06A667E8: e10316aa  mov x1, x22
0x06A667EC: e3031faa  mov x3, xzr
0x06A667F0: f50300aa  mov x21, x0
0x06A667F4: 020140f9  ldr x2, [x8]
0x06A667F8: 20af9f97  bl #0x5252478
0x06A667FC: e80240f9  ldr x8, [x23]
0x06A66800: e10315aa  mov x1, x21
0x06A66804: 005d40f9  ldr x0, [x8, #0xb8]
0x06A66808: 158c00f8  str x21, [x0, #8]!
0x06A6680C: 6e681c97  bl #0x31809c4
0x06A66810: 220340f9  ldr x2, [x25]
0x06A66814: e8c31091  add x8, sp, #0x430
0x06A66818: e0c30c91  add x0, sp, #0x330
0x06A6681C: e10315aa  mov x1, x21
0x06A66820: b9c96497  bl #0x4398f04
0x06A66824: 020340f9  ldr x2, [x24]
0x06A66828: e0c31091  add x0, sp, #0x430
0x06A6682C: e1430d91  add x1, sp, #0x350
0x06A66830: 21ca6497  bl #0x43990b4
0x06A66834: 80080036  tbz w0, #0, #0x6a66944
0x06A66838: 586500d0  adrp x24, #0x7710000
0x06A6683C: 595f00b0  adrp x25, #0x764f000
0x06A66840: 566600d0  adrp x22, #0x7730000
0x06A66844: f5ab41f9  ldr x21, [sp, #0x350]
0x06A66848: 18e342f9  ldr x24, [x24, #0x5c0]
0x06A6684C: 39af40f9  ldr x25, [x25, #0x158]
0x06A66850: d6d245f9  ldr x22, [x22, #0xba0]
0x06A66854: e0c30891  add x0, sp, #0x230
0x06A66858: e1430d91  add x1, sp, #0x350
0x06A6685C: 021c8052  movz w2, #0xe0
0x06A66860: f7c30191  add x23, sp, #0x70
0x06A66864: 43a01d94  bl #0x71ce970
0x06A66868: e08757ad  ldp q0, q1, [sp, #0x2f0]
0x06A6686C: e0430591  add x0, sp, #0x150
0x06A66870: e1430d91  add x1, sp, #0x350
0x06A66874: 021c8052  movz w2, #0xe0
0x06A66878: e08702ad  stp q0, q1, [sp, #0x50]
0x06A6687C: 3da01d94  bl #0x71ce970
0x06A66880: e0874fad  ldp q0, q1, [sp, #0x1f0]
0x06A66884: e0c30191  add x0, sp, #0x70
0x06A66888: e1430d91  add x1, sp, #0x350
0x06A6688C: 021c8052  movz w2, #0xe0
0x06A66890: e08701ad  stp q0, q1, [sp, #0x30]
0x06A66894: 37a01d94  bl #0x71ce970
0x06A66898: e083c73c  ldur q0, [sp, #0x78]
0x06A6689C: e182c13c  ldur q1, [x23, #0x18]
0x06A668A0: e282c23c  ldur q2, [x23, #0x28]
0x06A668A4: 050340f9  ldr x5, [x24]
0x06A668A8: e2430191  add x2, sp, #0x50
0x06A668AC: e3c30091  add x3, sp, #0x30
0x06A668B0: e4030091  mov x4, sp
0x06A668B4: e00314aa  mov x0, x20
0x06A668B8: e10315aa  mov x1, x21
0x06A668BC: e00700ad  stp q0, q1, [sp]
0x06A668C0: e20b803d  str q2, [sp, #0x20]
0x06A668C4: a9010094  bl #0x6a66f68
0x06A668C8: 220340f9  ldr x2, [x25]
0x06A668CC: e0ab41f9  ldr x0, [sp, #0x350]
0x06A668D0: 810e40f9  ldr x1, [x20, #0x18]
0x06A668D4: e5031faa  mov x5, xzr
0x06A668D8: e30302aa  mov x3, x2
0x06A668DC: e40302aa  mov x4, x2
0x06A668E0: 15f20094  bl #0x6aa3134
0x06A668E4: c80240f9  ldr x8, [x22]
0x06A668E8: 730a40f9  ldr x19, [x19, #0x10]
0x06A668EC: f50300aa  mov x21, x0
0x06A668F0: e00308aa  mov x0, x8
0x06A668F4: eb681c97  bl #0x3180ca0
0x06A668F8: e1031faa  mov x1, xzr
0x06A668FC: f40300aa  mov x20, x0
0x06A66900: d7ce0094  bl #0x6a9a45c
0x06A66904: f40200b4  cbz x20, #0x6a66960
0x06A66908: e1ab41f9  ldr x1, [sp, #0x350]
0x06A6690C: e00314aa  mov x0, x20
0x06A66910: 010c01f8  str x1, [x0, #0x10]!
0x06A66914: 2c681c97  bl #0x31809c4
0x06A66918: e00314aa  mov x0, x20
0x06A6691C: 150c02f8  str x21, [x0, #0x20]!
0x06A66920: e10315aa  mov x1, x21
0x06A66924: 28681c97  bl #0x31809c4
0x06A66928: d30100b4  cbz x19, #0x6a66960
0x06A6692C: 486600d0  adrp x8, #0x7730000
0x06A66930: 08e145f9  ldr x8, [x8, #0xbc0]
0x06A66934: e00313aa  mov x0, x19
0x06A66938: e10314aa  mov x1, x20
0x06A6693C: 020140f9  ldr x2, [x8]
0x06A66940: a9724d97  bl #0x3dc33e4
0x06A66944: ff431191  add sp, sp, #0x450
0x06A66948: f44f44a9  ldp x20, x19, [sp, #0x40]
0x06A6694C: f65743a9  ldp x22, x21, [sp, #0x30]
0x06A66950: f85f42a9  ldp x24, x23, [sp, #0x20]
0x06A66954: fa6741a9  ldp x26, x25, [sp, #0x10]
0x06A66958: fd7bc5a8  ldp x29, x30, [sp], #0x50
0x06A6695C: c0035fd6  ret
0x06A66960: d3681c97  bl #0x3180cac

; RVA 0x6A66964 | private void HandleCreatedTrigger(TickContext context) { }
; bytes=1540 sha256=8153357dba5cad7d9420c932232b552933c77d1c55d412c85e843a6ff3d93382 status=arm64_complete_bound indexed_start=True
0x06A66964: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x06A66968: fc6f01a9  stp x28, x27, [sp, #0x10]
0x06A6696C: fa6702a9  stp x26, x25, [sp, #0x20]
0x06A66970: f85f03a9  stp x24, x23, [sp, #0x30]
0x06A66974: f65704a9  stp x22, x21, [sp, #0x40]
0x06A66978: f44f05a9  stp x20, x19, [sp, #0x50]
0x06A6697C: ff8308d1  sub sp, sp, #0x220
0x06A66980: 3a960090  adrp x26, #0x7d2a000
0x06A66984: 596600d0  adrp x25, #0x7730000
0x06A66988: 556600b0  adrp x21, #0x772f000
0x06A6698C: 566600b0  adrp x22, #0x772f000
0x06A66990: 586600d0  adrp x24, #0x7730000
0x06A66994: 576600d0  adrp x23, #0x7730000
0x06A66998: 48975a39  ldrb w8, [x26, #0x6a5]
0x06A6699C: 39eb45f9  ldr x25, [x25, #0xbd0]
0x06A669A0: b53647f9  ldr x21, [x21, #0xe68]
0x06A669A4: d62647f9  ldr x22, [x22, #0xe48]
0x06A669A8: 18ef45f9  ldr x24, [x24, #0xbd8]
0x06A669AC: f7ce45f9  ldr x23, [x23, #0xb98]
0x06A669B0: f30301aa  mov x19, x1
0x06A669B4: f40300aa  mov x20, x0
0x06A669B8: c8060037  tbnz w8, #0, #0x6a66a90
0x06A669BC: 406600b0  adrp x0, #0x772f000
0x06A669C0: 002447f9  ldr x0, [x0, #0xe48]
0x06A669C4: 15681c97  bl #0x3180a18
0x06A669C8: 406600d0  adrp x0, #0x7730000
0x06A669CC: 00e845f9  ldr x0, [x0, #0xbd0]
0x06A669D0: 12681c97  bl #0x3180a18
0x06A669D4: 406600b0  adrp x0, #0x772f000
0x06A669D8: 003447f9  ldr x0, [x0, #0xe68]
0x06A669DC: 0f681c97  bl #0x3180a18
0x06A669E0: 406600d0  adrp x0, #0x7730000
0x06A669E4: 00d045f9  ldr x0, [x0, #0xba0]
0x06A669E8: 0c681c97  bl #0x3180a18
0x06A669EC: 406600d0  adrp x0, #0x7730000
0x06A669F0: 00f045f9  ldr x0, [x0, #0xbe0]
0x06A669F4: 09681c97  bl #0x3180a18
0x06A669F8: 405f0090  adrp x0, #0x764e000
0x06A669FC: 006444f9  ldr x0, [x0, #0x8c8]
0x06A66A00: 06681c97  bl #0x3180a18
0x06A66A04: 406600d0  adrp x0, #0x7730000
0x06A66A08: 00f445f9  ldr x0, [x0, #0xbe8]
0x06A66A0C: 03681c97  bl #0x3180a18
0x06A66A10: 406600d0  adrp x0, #0x7730000
0x06A66A14: 00f845f9  ldr x0, [x0, #0xbf0]
0x06A66A18: 00681c97  bl #0x3180a18
0x06A66A1C: 405f0090  adrp x0, #0x764e000
0x06A66A20: 007044f9  ldr x0, [x0, #0x8e0]
0x06A66A24: fd671c97  bl #0x3180a18
0x06A66A28: 406600d0  adrp x0, #0x7730000
0x06A66A2C: 00fc45f9  ldr x0, [x0, #0xbf8]
0x06A66A30: fa671c97  bl #0x3180a18
0x06A66A34: 406600d0  adrp x0, #0x7730000
0x06A66A38: 000046f9  ldr x0, [x0, #0xc00]
0x06A66A3C: f7671c97  bl #0x3180a18
0x06A66A40: 406600d0  adrp x0, #0x7730000
0x06A66A44: 00ec45f9  ldr x0, [x0, #0xbd8]
0x06A66A48: f4671c97  bl #0x3180a18
0x06A66A4C: 406600d0  adrp x0, #0x7730000
0x06A66A50: 00e045f9  ldr x0, [x0, #0xbc0]
0x06A66A54: f1671c97  bl #0x3180a18
0x06A66A58: 406600d0  adrp x0, #0x7730000
0x06A66A5C: 000446f9  ldr x0, [x0, #0xc08]
0x06A66A60: ee671c97  bl #0x3180a18
0x06A66A64: 406600d0  adrp x0, #0x7730000
0x06A66A68: 00cc45f9  ldr x0, [x0, #0xb98]
0x06A66A6C: eb671c97  bl #0x3180a18
0x06A66A70: c06400d0  adrp x0, #0x7700000
0x06A66A74: 006045f9  ldr x0, [x0, #0xac0]
0x06A66A78: e8671c97  bl #0x3180a18
0x06A66A7C: 405f00b0  adrp x0, #0x764f000
0x06A66A80: 00ac40f9  ldr x0, [x0, #0x158]
0x06A66A84: e5671c97  bl #0x3180a18
0x06A66A88: 28008052  movz w8, #0x1
0x06A66A8C: 48971a39  strb w8, [x26, #0x6a5]
0x06A66A90: 00e4006f  movi v0.2d, #0000000000000000
0x06A66A94: e00310ad  stp q0, q0, [sp, #0x200]
0x06A66A98: 610240ad  ldp q1, q0, [x19]
0x06A66A9C: 200340f9  ldr x0, [x25]
0x06A66AA0: e1030fad  stp q1, q0, [sp, #0x1e0]
0x06A66AA4: 81ce4697  bl #0x3c1a4a8
0x06A66AA8: a80240f9  ldr x8, [x21]
0x06A66AAC: f50300aa  mov x21, x0
0x06A66AB0: e00308aa  mov x0, x8
0x06A66AB4: 7b681c97  bl #0x3180ca0
0x06A66AB8: c20240f9  ldr x2, [x22]
0x06A66ABC: e1031faa  mov x1, xzr
0x06A66AC0: e3031faa  mov x3, xzr
0x06A66AC4: f60300aa  mov x22, x0
0x06A66AC8: 90bcd297  bl #0x5f15d08
0x06A66ACC: e0074fad  ldp q0, q1, [sp, #0x1e0]
0x06A66AD0: 030340f9  ldr x3, [x24]
0x06A66AD4: e8c30591  add x8, sp, #0x170
0x06A66AD8: e0c30391  add x0, sp, #0xf0
0x06A66ADC: e10315aa  mov x1, x21
0x06A66AE0: e20316aa  mov x2, x22
0x06A66AE4: e08707ad  stp q0, q1, [sp, #0xf0]
0x06A66AE8: 77fb4b97  bl #0x3d658c4
0x06A66AEC: e1834bad  ldp q1, q0, [sp, #0x170]
0x06A66AF0: e00240f9  ldr x0, [x23]
0x06A66AF4: e10310ad  stp q1, q0, [sp, #0x200]
0x06A66AF8: 08e040b9  ldr w8, [x0, #0xe0]
0x06A66AFC: 68000035  cbnz w8, #0x6a66b08
0x06A66B00: 23681c97  bl #0x3180b8c
0x06A66B04: e00240f9  ldr x0, [x23]
0x06A66B08: 085c40f9  ldr x8, [x0, #0xb8]
0x06A66B0C: 596600d0  adrp x25, #0x7730000
0x06A66B10: 586600d0  adrp x24, #0x7730000
0x06A66B14: 150940f9  ldr x21, [x8, #0x10]
0x06A66B18: 390346f9  ldr x25, [x25, #0xc00]
0x06A66B1C: 18ff45f9  ldr x24, [x24, #0xbf8]
0x06A66B20: f50200b5  cbnz x21, #0x6a66b7c
0x06A66B24: 08e040b9  ldr w8, [x0, #0xe0]
0x06A66B28: 68000035  cbnz w8, #0x6a66b34
0x06A66B2C: 18681c97  bl #0x3180b8c
0x06A66B30: e00240f9  ldr x0, [x23]
0x06A66B34: 496600d0  adrp x9, #0x7730000
0x06A66B38: 085c40f9  ldr x8, [x0, #0xb8]
0x06A66B3C: 29f145f9  ldr x9, [x9, #0xbe0]
0x06A66B40: 160140f9  ldr x22, [x8]
0x06A66B44: 200140f9  ldr x0, [x9]
0x06A66B48: 56681c97  bl #0x3180ca0
0x06A66B4C: 486600d0  adrp x8, #0x7730000
0x06A66B50: 080546f9  ldr x8, [x8, #0xc08]
0x06A66B54: e10316aa  mov x1, x22
0x06A66B58: e3031faa  mov x3, xzr
0x06A66B5C: f50300aa  mov x21, x0
0x06A66B60: 020140f9  ldr x2, [x8]
0x06A66B64: f3a79f97  bl #0x5250b30
0x06A66B68: e80240f9  ldr x8, [x23]
0x06A66B6C: e10315aa  mov x1, x21
0x06A66B70: 005d40f9  ldr x0, [x8, #0xb8]
0x06A66B74: 150c01f8  str x21, [x0, #0x10]!
0x06A66B78: 93671c97  bl #0x31809c4
0x06A66B7C: 220340f9  ldr x2, [x25]
0x06A66B80: e8c30391  add x8, sp, #0xf0
0x06A66B84: e0030891  add x0, sp, #0x200
0x06A66B88: e10315aa  mov x1, x21
0x06A66B8C: 71a06497  bl #0x438ed50
0x06A66B90: e08747ad  ldp q0, q1, [sp, #0xf0]
0x06A66B94: 010340f9  ldr x1, [x24]
0x06A66B98: e0030891  add x0, sp, #0x200
0x06A66B9C: e00710ad  stp q0, q1, [sp, #0x200]
0x06A66BA0: 82a06497  bl #0x438eda8
0x06A66BA4: 201700b4  cbz x0, #0x6a66e88
0x06A66BA8: 4a6600d0  adrp x10, #0x7730000
0x06A66BAC: 080040f9  ldr x8, [x0]
0x06A66BB0: 4af545f9  ldr x10, [x10, #0xbe8]
0x06A66BB4: f50300aa  mov x21, x0
0x06A66BB8: 095d4279  ldrh w9, [x8, #0x12e]
0x06A66BBC: 410140f9  ldr x1, [x10]
0x06A66BC0: 290100b4  cbz x9, #0x6a66be4
0x06A66BC4: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A66BC8: 4a210091  add x10, x10, #8
0x06A66BCC: 4b815ff8  ldur x11, [x10, #-8]
0x06A66BD0: 7f0101eb  cmp x11, x1
0x06A66BD4: 00010054  b.eq #0x6a66bf4
0x06A66BD8: 290500f1  subs x9, x9, #1
0x06A66BDC: 4a410091  add x10, x10, #0x10
0x06A66BE0: 61ffff54  b.ne #0x6a66bcc
0x06A66BE4: e00315aa  mov x0, x21
0x06A66BE8: e2031f2a  mov w2, wzr
0x06A66BEC: c9bf1b97  bl #0x3156b10
0x06A66BF0: 04000014  b #0x6a66c00
0x06A66BF4: 490180b9  ldrsw x9, [x10]
0x06A66BF8: 0811098b  add x8, x8, x9, lsl #4
0x06A66BFC: 00e10491  add x0, x8, #0x138
0x06A66C00: 080440a9  ldp x8, x1, [x0]
0x06A66C04: e00315aa  mov x0, x21
0x06A66C08: 00013fd6  blr x8
0x06A66C0C: f50300aa  mov x21, x0
0x06A66C10: e01300b4  cbz x0, #0x6a66e8c
0x06A66C14: 5c5f0090  adrp x28, #0x764e000
0x06A66C18: 9c7344f9  ldr x28, [x28, #0x8e0]
0x06A66C1C: e8c30391  add x8, sp, #0xf0
0x06A66C20: e9030291  add x9, sp, #0x80
0x06A66C24: 16210091  add x22, x8, #8
0x06A66C28: 3bc10091  add x27, x9, #0x30
0x06A66C2C: 3d410191  add x29, x9, #0x50
0x06A66C30: a80240f9  ldr x8, [x21]
0x06A66C34: 810340f9  ldr x1, [x28]
0x06A66C38: 095d4279  ldrh w9, [x8, #0x12e]
0x06A66C3C: 290100b4  cbz x9, #0x6a66c60
0x06A66C40: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A66C44: 4a210091  add x10, x10, #8
0x06A66C48: 4b815ff8  ldur x11, [x10, #-8]
0x06A66C4C: 7f0101eb  cmp x11, x1
0x06A66C50: 00010054  b.eq #0x6a66c70
0x06A66C54: 290500f1  subs x9, x9, #1
0x06A66C58: 4a410091  add x10, x10, #0x10
0x06A66C5C: 61ffff54  b.ne #0x6a66c48
0x06A66C60: e00315aa  mov x0, x21
0x06A66C64: e2031f2a  mov w2, wzr
0x06A66C68: aabf1b97  bl #0x3156b10
0x06A66C6C: 04000014  b #0x6a66c7c
0x06A66C70: 490180b9  ldrsw x9, [x10]
0x06A66C74: 0811098b  add x8, x8, x9, lsl #4
0x06A66C78: 00e10491  add x0, x8, #0x138
0x06A66C7C: 080440a9  ldp x8, x1, [x0]
0x06A66C80: e00315aa  mov x0, x21
0x06A66C84: 00013fd6  blr x8
0x06A66C88: 600b0036  tbz w0, #0, #0x6a66df4
0x06A66C8C: a80240f9  ldr x8, [x21]
0x06A66C90: 4a6600d0  adrp x10, #0x7730000
0x06A66C94: 095d4279  ldrh w9, [x8, #0x12e]
0x06A66C98: 4af945f9  ldr x10, [x10, #0xbf0]
0x06A66C9C: 410140f9  ldr x1, [x10]
0x06A66CA0: 290100b4  cbz x9, #0x6a66cc4
0x06A66CA4: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A66CA8: 4a210091  add x10, x10, #8
0x06A66CAC: 4b815ff8  ldur x11, [x10, #-8]
0x06A66CB0: 7f0101eb  cmp x11, x1
0x06A66CB4: 00010054  b.eq #0x6a66cd4
0x06A66CB8: 290500f1  subs x9, x9, #1
0x06A66CBC: 4a410091  add x10, x10, #0x10
0x06A66CC0: 61ffff54  b.ne #0x6a66cac
0x06A66CC4: e00315aa  mov x0, x21
0x06A66CC8: e2031f2a  mov w2, wzr
0x06A66CCC: 91bf1b97  bl #0x3156b10
0x06A66CD0: 04000014  b #0x6a66ce0
0x06A66CD4: 490180b9  ldrsw x9, [x10]
0x06A66CD8: 0811098b  add x8, x8, x9, lsl #4
0x06A66CDC: 00e10491  add x0, x8, #0x138
0x06A66CE0: 090440a9  ldp x9, x1, [x0]
0x06A66CE4: e8c30391  add x8, sp, #0xf0
0x06A66CE8: e00315aa  mov x0, x21
0x06A66CEC: 20013fd6  blr x9
0x06A66CF0: f77b40f9  ldr x23, [sp, #0xf0]
0x06A66CF4: e0c30591  add x0, sp, #0x170
0x06A66CF8: 020e8052  movz w2, #0x70
0x06A66CFC: e10316aa  mov x1, x22
0x06A66D00: 1c9f1d94  bl #0x71ce970
0x06A66D04: e0c30391  add x0, sp, #0xf0
0x06A66D08: e1c30591  add x1, sp, #0x170
0x06A66D0C: 020e8052  movz w2, #0x70
0x06A66D10: 189f1d94  bl #0x71ce970
0x06A66D14: e0030291  add x0, sp, #0x80
0x06A66D18: e1c30391  add x1, sp, #0xf0
0x06A66D1C: 020e8052  movz w2, #0x70
0x06A66D20: 149f1d94  bl #0x71ce970
0x06A66D24: c86400d0  adrp x8, #0x7700000
0x06A66D28: a10340ad  ldp q1, q0, [x29]
0x06A66D2C: 630b40ad  ldp q3, q2, [x27]
0x06A66D30: e4974bad  ldp q4, q5, [sp, #0x170]
0x06A66D34: e667c03d  ldr q6, [sp, #0x190]
0x06A66D38: 086145f9  ldr x8, [x8, #0xac0]
0x06A66D3C: e10303ad  stp q1, q0, [sp, #0x60]
0x06A66D40: e30b02ad  stp q3, q2, [sp, #0x40]
0x06A66D44: e49700ad  stp q4, q5, [sp, #0x10]
0x06A66D48: 050140f9  ldr x5, [x8]
0x06A66D4C: e60f803d  str q6, [sp, #0x30]
0x06A66D50: e2830191  add x2, sp, #0x60
0x06A66D54: e3030191  add x3, sp, #0x40
0x06A66D58: e4430091  add x4, sp, #0x10
0x06A66D5C: e00314aa  mov x0, x20
0x06A66D60: e10317aa  mov x1, x23
0x06A66D64: 81000094  bl #0x6a66f68
0x06A66D68: 485f00b0  adrp x8, #0x764f000
0x06A66D6C: 810e40f9  ldr x1, [x20, #0x18]
0x06A66D70: 08ad40f9  ldr x8, [x8, #0x158]
0x06A66D74: 020140f9  ldr x2, [x8]
0x06A66D78: e00317aa  mov x0, x23
0x06A66D7C: e30302aa  mov x3, x2
0x06A66D80: e40302aa  mov x4, x2
0x06A66D84: e5031faa  mov x5, xzr
0x06A66D88: ebf00094  bl #0x6aa3134
0x06A66D8C: 486600d0  adrp x8, #0x7730000
0x06A66D90: 780a40f9  ldr x24, [x19, #0x10]
0x06A66D94: 08d145f9  ldr x8, [x8, #0xba0]
0x06A66D98: fa0300aa  mov x26, x0
0x06A66D9C: 000140f9  ldr x0, [x8]
0x06A66DA0: c0671c97  bl #0x3180ca0
0x06A66DA4: f90300aa  mov x25, x0
0x06A66DA8: e1031faa  mov x1, xzr
0x06A66DAC: accd0094  bl #0x6a9a45c
0x06A66DB0: 990600b4  cbz x25, #0x6a66e80
0x06A66DB4: e00319aa  mov x0, x25
0x06A66DB8: 170c01f8  str x23, [x0, #0x10]!
0x06A66DBC: e10317aa  mov x1, x23
0x06A66DC0: 01671c97  bl #0x31809c4
0x06A66DC4: e00319aa  mov x0, x25
0x06A66DC8: 1a0c02f8  str x26, [x0, #0x20]!
0x06A66DCC: e1031aaa  mov x1, x26
0x06A66DD0: fd661c97  bl #0x31809c4
0x06A66DD4: 980500b4  cbz x24, #0x6a66e84
0x06A66DD8: 486600d0  adrp x8, #0x7730000
0x06A66DDC: 08e145f9  ldr x8, [x8, #0xbc0]
0x06A66DE0: 020140f9  ldr x2, [x8]
0x06A66DE4: e00318aa  mov x0, x24
0x06A66DE8: e10319aa  mov x1, x25
0x06A66DEC: 7e714d97  bl #0x3dc33e4
0x06A66DF0: 90ffff17  b #0x6a66c30
0x06A66DF4: f3031faa  mov x19, xzr
0x06A66DF8: 350300b4  cbz x21, #0x6a66e5c
0x06A66DFC: a80240f9  ldr x8, [x21]
0x06A66E00: 4a5f0090  adrp x10, #0x764e000
0x06A66E04: 095d4279  ldrh w9, [x8, #0x12e]
0x06A66E08: 4a6544f9  ldr x10, [x10, #0x8c8]
0x06A66E0C: 410140f9  ldr x1, [x10]
0x06A66E10: 290100b4  cbz x9, #0x6a66e34
0x06A66E14: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A66E18: 4a210091  add x10, x10, #8
0x06A66E1C: 4b815ff8  ldur x11, [x10, #-8]
0x06A66E20: 7f0101eb  cmp x11, x1
0x06A66E24: 00010054  b.eq #0x6a66e44
0x06A66E28: 290500f1  subs x9, x9, #1
0x06A66E2C: 4a410091  add x10, x10, #0x10
0x06A66E30: 61ffff54  b.ne #0x6a66e1c
0x06A66E34: e00315aa  mov x0, x21
0x06A66E38: e2031f2a  mov w2, wzr
0x06A66E3C: 35bf1b97  bl #0x3156b10
0x06A66E40: 04000014  b #0x6a66e50
0x06A66E44: 490180b9  ldrsw x9, [x10]
0x06A66E48: 0811098b  add x8, x8, x9, lsl #4
0x06A66E4C: 00e10491  add x0, x8, #0x138
0x06A66E50: 080440a9  ldp x8, x1, [x0]
0x06A66E54: e00315aa  mov x0, x21
0x06A66E58: 00013fd6  blr x8
0x06A66E5C: b30100b5  cbnz x19, #0x6a66e90
0x06A66E60: ff830891  add sp, sp, #0x220
0x06A66E64: f44f45a9  ldp x20, x19, [sp, #0x50]
0x06A66E68: f65744a9  ldp x22, x21, [sp, #0x40]
0x06A66E6C: f85f43a9  ldp x24, x23, [sp, #0x30]
0x06A66E70: fa6742a9  ldp x26, x25, [sp, #0x20]
0x06A66E74: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x06A66E78: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x06A66E7C: c0035fd6  ret
0x06A66E80: 8b671c97  bl #0x3180cac
0x06A66E84: 8a671c97  bl #0x3180cac
0x06A66E88: 89671c97  bl #0x3180cac
0x06A66E8C: 88671c97  bl #0x3180cac
0x06A66E90: e00313aa  mov x0, x19
0x06A66E94: 84671c97  bl #0x3180ca4
0x06A66E98: 0a000014  b #0x6a66ec0
0x06A66E9C: 09000014  b #0x6a66ec0
0x06A66EA0: 08000014  b #0x6a66ec0
0x06A66EA4: 07000014  b #0x6a66ec0
0x06A66EA8: 06000014  b #0x6a66ec0
0x06A66EAC: 05000014  b #0x6a66ec0
0x06A66EB0: 04000014  b #0x6a66ec0
0x06A66EB4: 03000014  b #0x6a66ec0
0x06A66EB8: 02000014  b #0x6a66ec0
0x06A66EBC: 01000014  b #0x6a66ec0
0x06A66EC0: f40300aa  mov x20, x0
0x06A66EC4: 3f040071  cmp w1, #1
0x06A66EC8: c1000054  b.ne #0x6a66ee0
0x06A66ECC: e00314aa  mov x0, x20
0x06A66ED0: 909e1d94  bl #0x71ce910
0x06A66ED4: 130040f9  ldr x19, [x0]
0x06A66ED8: 929e1d94  bl #0x71ce920
0x06A66EDC: c7ffff17  b #0x6a66df8
0x06A66EE0: f3031faa  mov x19, xzr
0x06A66EE4: 02000014  b #0x6a66eec
0x06A66EE8: f40300aa  mov x20, x0
0x06A66EEC: 350300b4  cbz x21, #0x6a66f50
0x06A66EF0: a80240f9  ldr x8, [x21]
0x06A66EF4: 4a5f0090  adrp x10, #0x764e000
0x06A66EF8: 095d4279  ldrh w9, [x8, #0x12e]
0x06A66EFC: 4a6544f9  ldr x10, [x10, #0x8c8]
0x06A66F00: 410140f9  ldr x1, [x10]
0x06A66F04: 290100b4  cbz x9, #0x6a66f28
0x06A66F08: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A66F0C: 4a210091  add x10, x10, #8
0x06A66F10: 4b815ff8  ldur x11, [x10, #-8]
0x06A66F14: 7f0101eb  cmp x11, x1
0x06A66F18: 00010054  b.eq #0x6a66f38
0x06A66F1C: 290500f1  subs x9, x9, #1
0x06A66F20: 4a410091  add x10, x10, #0x10
0x06A66F24: 61ffff54  b.ne #0x6a66f10
0x06A66F28: e00315aa  mov x0, x21
0x06A66F2C: e2031f2a  mov w2, wzr
0x06A66F30: f8be1b97  bl #0x3156b10
0x06A66F34: 04000014  b #0x6a66f44
0x06A66F38: 490180b9  ldrsw x9, [x10]
0x06A66F3C: 0811098b  add x8, x8, x9, lsl #4
0x06A66F40: 00e10491  add x0, x8, #0x138
0x06A66F44: 080440a9  ldp x8, x1, [x0]
0x06A66F48: e00315aa  mov x0, x21
0x06A66F4C: 00013fd6  blr x8
0x06A66F50: 730000b5  cbnz x19, #0x6a66f5c
0x06A66F54: e00314aa  mov x0, x20
0x06A66F58: 80fa1f97  bl #0x3265958
0x06A66F5C: e00313aa  mov x0, x19
0x06A66F60: 51671c97  bl #0x3180ca4
0x06A66F64: 6c890e97  bl #0x2e09514

; RVA 0x6A66F68 | private void ActivateTimer(Entity entity, TimeDurationComponent timeDurationComponent, TimeLimitedActivationComponent timeLimitedActivationComponent, ExpendableComponent expendableComponent, string triggerReason) { }
; bytes=448 sha256=ffa2182b8eeb24e298584ed5414635a75676fe45c7b6b706c856f73ec3c7547e status=arm64_complete_bound indexed_start=True
0x06A66F68: ff4303d1  sub sp, sp, #0xd0
0x06A66F6C: e923066d  stp d9, d8, [sp, #0x60]
0x06A66F70: fe3b00f9  str x30, [sp, #0x70]
0x06A66F74: fc6f08a9  stp x28, x27, [sp, #0x80]
0x06A66F78: fa6709a9  stp x26, x25, [sp, #0x90]
0x06A66F7C: f85f0aa9  stp x24, x23, [sp, #0xa0]
0x06A66F80: f6570ba9  stp x22, x21, [sp, #0xb0]
0x06A66F84: f44f0ca9  stp x20, x19, [sp, #0xc0]
0x06A66F88: 39960090  adrp x25, #0x7d2a000
0x06A66F8C: 289b5a39  ldrb w8, [x25, #0x6a6]
0x06A66F90: f30305aa  mov x19, x5
0x06A66F94: f60304aa  mov x22, x4
0x06A66F98: f80303aa  mov x24, x3
0x06A66F9C: f70302aa  mov x23, x2
0x06A66FA0: f40301aa  mov x20, x1
0x06A66FA4: f50300aa  mov x21, x0
0x06A66FA8: 28010037  tbnz w8, #0, #0x6a66fcc
0x06A66FAC: 406600d0  adrp x0, #0x7730000
0x06A66FB0: 000846f9  ldr x0, [x0, #0xc10]
0x06A66FB4: 99661c97  bl #0x3180a18
0x06A66FB8: 406600d0  adrp x0, #0x7730000
0x06A66FBC: 000c46f9  ldr x0, [x0, #0xc18]
0x06A66FC0: 96661c97  bl #0x3180a18
0x06A66FC4: 28008052  movz w8, #0x1
0x06A66FC8: 289b1a39  strb w8, [x25, #0x6a6]
0x06A66FCC: e89240b8  ldur w8, [x23, #9]
0x06A66FD0: e90e40b9  ldr w9, [x23, #0xc]
0x06A66FD4: e90240fd  ldr d9, [x23]
0x06A66FD8: 0afeefd2  movz x10, #0x7ff0, lsl #48
0x06A66FDC: 4001679e  fmov d0, x10
0x06A66FE0: e9b307b8  stur w9, [sp, #0x7b]
0x06A66FE4: e87b00b9  str w8, [sp, #0x78]
0x06A66FE8: 081f40b9  ldr w8, [x24, #0x1c]
0x06A66FEC: e80a40fd  ldr d8, [x23, #0x10]
0x06A66FF0: 099341b8  ldur w9, [x24, #0x19]
0x06A66FF4: fa0e40f9  ldr x26, [x23, #0x18]
0x06A66FF8: e8b303b8  stur w8, [sp, #0x3b]
0x06A66FFC: 0801789e  fcvtzs x8, d8
0x06A67000: 0021601e  fcmp d8, d0
0x06A67004: 1b00f0d2  movz x27, #0x8000, lsl #48
0x06A67008: e00315aa  mov x0, x21
0x06A6700C: e93b00b9  str w9, [sp, #0x38]
0x06A67010: 7903889a  csel x25, x27, x8, eq
0x06A67014: 36fdff97  bl #0x6a664ec
0x06A67018: f80300aa  mov x24, x0
0x06A6701C: e00315aa  mov x0, x21
0x06A67020: 33fdff97  bl #0x6a664ec
0x06A67024: e87b40b9  ldr w8, [sp, #0x78]
0x06A67028: e9b347b8  ldur w9, [sp, #0x7b]
0x06A6702C: e83300b9  str w8, [sp, #0x30]
0x06A67030: e93303b8  stur w9, [sp, #0x33]
0x06A67034: 940700b4  cbz x20, #0x6a67124
0x06A67038: 486600b0  adrp x8, #0x7730000
0x06A6703C: 080946f9  ldr x8, [x8, #0xc10]
0x06A67040: c960fdb0  adrp x9, #0x1680000
0x06A67044: 217943fd  ldr d1, [x9, #0x6f0]
0x06A67048: 5c6600b0  adrp x28, #0x7730000
0x06A6704C: 0afeefd2  movz x10, #0x7ff0, lsl #48
0x06A67050: 9c0f46f9  ldr x28, [x28, #0xc18]
0x06A67054: e93340b9  ldr w9, [sp, #0x30]
0x06A67058: 4201679e  fmov d2, x10
0x06A6705C: ea3343b8  ldur w10, [sp, #0x33]
0x06A67060: 020140f9  ldr x2, [x8]
0x06A67064: 0003629e  scvtf d0, x24
0x06A67068: 0109611e  fmul d1, d8, d1
0x06A6706C: 3f0300f1  cmp x25, #0
0x06A67070: 2028601e  fadd d0, d1, d0
0x06A67074: f70300aa  mov x23, x0
0x06A67078: 2b008052  movz w11, #0x1
0x06A6707C: f8179f1a  cset w24, eq
0x06A67080: 0800789e  fcvtzs x8, d0
0x06A67084: 0020621e  fcmp d0, d2
0x06A67088: e1030191  add x1, sp, #0x40
0x06A6708C: e00314aa  mov x0, x20
0x06A67090: e92300fd  str d9, [sp, #0x40]
0x06A67094: e82b00fd  str d8, [sp, #0x50]
0x06A67098: eb230139  strb w11, [sp, #0x48]
0x06A6709C: e99304b8  stur w9, [sp, #0x49]
0x06A670A0: ea4f00b9  str w10, [sp, #0x4c]
0x06A670A4: 7b03889a  csel x27, x27, x8, eq
0x06A670A8: fa2f00f9  str x26, [sp, #0x58]
0x06A670AC: 3ddb4697  bl #0x3c1dda0
0x06A670B0: 820340f9  ldr x2, [x28]
0x06A670B4: e83b40b9  ldr w8, [sp, #0x38]
0x06A670B8: e9b343b8  ldur w9, [sp, #0x3b]
0x06A670BC: e1030191  add x1, sp, #0x40
0x06A670C0: e00314aa  mov x0, x20
0x06A670C4: f96f04a9  stp x25, x27, [sp, #0x40]
0x06A670C8: f72b00f9  str x23, [sp, #0x50]
0x06A670CC: f8630139  strb w24, [sp, #0x58]
0x06A670D0: e89305b8  stur w8, [sp, #0x59]
0x06A670D4: e95f00b9  str w9, [sp, #0x5c]
0x06A670D8: 67db4697  bl #0x3c1de74
0x06A670DC: c18240ad  ldp q1, q0, [x22, #0x10]
0x06A670E0: c202c03d  ldr q2, [x22]
0x06A670E4: e2030091  mov x2, sp
0x06A670E8: e00315aa  mov x0, x21
0x06A670EC: e10314aa  mov x1, x20
0x06A670F0: e30313aa  mov x3, x19
0x06A670F4: e18300ad  stp q1, q0, [sp, #0x10]
0x06A670F8: e203803d  str q2, [sp]
0x06A670FC: 0b000094  bl #0x6a67128
0x06A67100: f44f4ca9  ldp x20, x19, [sp, #0xc0]
0x06A67104: f6574ba9  ldp x22, x21, [sp, #0xb0]
0x06A67108: f85f4aa9  ldp x24, x23, [sp, #0xa0]
0x06A6710C: fa6749a9  ldp x26, x25, [sp, #0x90]
0x06A67110: fc6f48a9  ldp x28, x27, [sp, #0x80]
0x06A67114: fe3b40f9  ldr x30, [sp, #0x70]
0x06A67118: e923466d  ldp d9, d8, [sp, #0x60]
0x06A6711C: ff430391  add sp, sp, #0xd0
0x06A67120: c0035fd6  ret
0x06A67124: e2661c97  bl #0x3180cac

; RVA 0x6A67128 | private void SaveAnalyticSessionData(Entity entity, ExpendableComponent expendableComponent, string triggerReason) { }
; bytes=332 sha256=6c0b9410ad5dfd638732490af47eed762755c5a047f9e520d2adc2105d506bd8 status=arm64_complete_bound indexed_start=True
0x06A67128: ff8301d1  sub sp, sp, #0x60
0x06A6712C: fe5f03a9  stp x30, x23, [sp, #0x30]
0x06A67130: f65704a9  stp x22, x21, [sp, #0x40]
0x06A67134: f44f05a9  stp x20, x19, [sp, #0x50]
0x06A67138: 179600f0  adrp x23, #0x7d2a000
0x06A6713C: e89e5a39  ldrb w8, [x23, #0x6a7]
0x06A67140: f30303aa  mov x19, x3
0x06A67144: f40302aa  mov x20, x2
0x06A67148: f60301aa  mov x22, x1
0x06A6714C: f50300aa  mov x21, x0
0x06A67150: 88010037  tbnz w8, #0, #0x6a67180
0x06A67154: 806000f0  adrp x0, #0x767a000
0x06A67158: 004442f9  ldr x0, [x0, #0x488]
0x06A6715C: 2f661c97  bl #0x3180a18
0x06A67160: 806000f0  adrp x0, #0x767a000
0x06A67164: 00b442f9  ldr x0, [x0, #0x568]
0x06A67168: 2c661c97  bl #0x3180a18
0x06A6716C: c06400b0  adrp x0, #0x7700000
0x06A67170: 005c45f9  ldr x0, [x0, #0xab8]
0x06A67174: 29661c97  bl #0x3180a18
0x06A67178: 28008052  movz w8, #0x1
0x06A6717C: e89e1a39  strb w8, [x23, #0x6a7]
0x06A67180: 960700b4  cbz x22, #0x6a67270
0x06A67184: 886000f0  adrp x8, #0x767a000
0x06A67188: 084542f9  ldr x8, [x8, #0x488]
0x06A6718C: b51240f9  ldr x21, [x21, #0x20]
0x06A67190: e00316aa  mov x0, x22
0x06A67194: 010140f9  ldr x1, [x8]
0x06A67198: e8030091  mov x8, sp
0x06A6719C: 2dd04697  bl #0x3c1b250
0x06A671A0: 950600b4  cbz x21, #0x6a67270
0x06A671A4: 8a6000f0  adrp x10, #0x767a000
0x06A671A8: a80240f9  ldr x8, [x21]
0x06A671AC: 4ab542f9  ldr x10, [x10, #0x568]
0x06A671B0: f60740f9  ldr x22, [sp, #8]
0x06A671B4: 095d4279  ldrh w9, [x8, #0x12e]
0x06A671B8: 410140f9  ldr x1, [x10]
0x06A671BC: 290100b4  cbz x9, #0x6a671e0
0x06A671C0: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A671C4: 4a210091  add x10, x10, #8
0x06A671C8: 4b815ff8  ldur x11, [x10, #-8]
0x06A671CC: 7f0101eb  cmp x11, x1
0x06A671D0: 00010054  b.eq #0x6a671f0
0x06A671D4: 290500f1  subs x9, x9, #1
0x06A671D8: 4a410091  add x10, x10, #0x10
0x06A671DC: 61ffff54  b.ne #0x6a671c8
0x06A671E0: 22008052  movz w2, #0x1
0x06A671E4: e00315aa  mov x0, x21
0x06A671E8: 4abe1b97  bl #0x3156b10
0x06A671EC: 05000014  b #0x6a67200
0x06A671F0: 490140b9  ldr w9, [x10]
0x06A671F4: 29050011  add w9, w9, #1
0x06A671F8: 08d1298b  add x8, x8, w9, sxtw #4
0x06A671FC: 00e10491  add x0, x8, #0x138
0x06A67200: 080840a9  ldp x8, x2, [x0]
0x06A67204: e00315aa  mov x0, x21
0x06A67208: e10316aa  mov x1, x22
0x06A6720C: 00013fd6  blr x8
0x06A67210: 881640f9  ldr x8, [x20, #0x28]
0x06A67214: e80200b4  cbz x8, #0x6a67270
0x06A67218: c96400b0  adrp x9, #0x7700000
0x06A6721C: 295d45f9  ldr x9, [x9, #0xab8]
0x06A67220: f40300aa  mov x20, x0
0x06A67224: 001140b9  ldr w0, [x8, #0x10]
0x06A67228: 21008052  movz w1, #0x1
0x06A6722C: 220140f9  ldr x2, [x9]
0x06A67230: e30313aa  mov x3, x19
0x06A67234: e4031faa  mov x4, xzr
0x06A67238: e5031faa  mov x5, xzr
0x06A6723C: 35008052  movz w21, #0x1
0x06A67240: f9b5f497  bl #0x6794a24
0x06A67244: 740100b4  cbz x20, #0x6a67270
0x06A67248: 808e03f8  str x0, [x20, #0x38]!
0x06A6724C: e10300aa  mov x1, x0
0x06A67250: e00314aa  mov x0, x20
0x06A67254: dc651c97  bl #0x31809c4
0x06A67258: 95220039  strb w21, [x20, #8]
0x06A6725C: f44f45a9  ldp x20, x19, [sp, #0x50]
0x06A67260: f65744a9  ldp x22, x21, [sp, #0x40]
0x06A67264: fe5f43a9  ldp x30, x23, [sp, #0x30]
0x06A67268: ff830191  add sp, sp, #0x60
0x06A6726C: c0035fd6  ret
0x06A67270: 8f661c97  bl #0x3180cac

; RVA 0x6A67274 | public void .ctor() { }
; bytes=8 sha256=762d0ef6b72d3c1b27757494f2f7619622b74734c8a495c7b9661769b42eba09 status=arm64_complete_bound indexed_start=True
0x06A67274: e1031faa  mov x1, xzr
0x06A67278: e1ccb117  b #0x56da5fc

