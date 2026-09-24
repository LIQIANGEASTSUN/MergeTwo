; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25781 Merger.MergeBoard.Systems.TimeCycleSystem
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A765EC | public void Tick(TickContext context) { }
; bytes=1476 sha256=1c10e0b207f565799c5b46425fe47f12dccd1348cc6b67bd112978bb2f92b387 status=arm64_complete_bound indexed_start=True
0x06A765EC: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x06A765F0: fc6f01a9  stp x28, x27, [sp, #0x10]
0x06A765F4: fa6702a9  stp x26, x25, [sp, #0x20]
0x06A765F8: f85f03a9  stp x24, x23, [sp, #0x30]
0x06A765FC: f65704a9  stp x22, x21, [sp, #0x40]
0x06A76600: f44f05a9  stp x20, x19, [sp, #0x50]
0x06A76604: ff4307d1  sub sp, sp, #0x1d0
0x06A76608: b5950090  adrp x21, #0x7d2a000
0x06A7660C: a8225c39  ldrb w8, [x21, #0x708]
0x06A76610: f30301aa  mov x19, x1
0x06A76614: f40300aa  mov x20, x0
0x06A76618: 08060037  tbnz w8, #0, #0x6a766d8
0x06A7661C: c06500f0  adrp x0, #0x7731000
0x06A76620: 00b842f9  ldr x0, [x0, #0x570]
0x06A76624: fd281c97  bl #0x3180a18
0x06A76628: c06500f0  adrp x0, #0x7731000
0x06A7662C: 00bc42f9  ldr x0, [x0, #0x578]
0x06A76630: fa281c97  bl #0x3180a18
0x06A76634: c06500f0  adrp x0, #0x7731000
0x06A76638: 00c042f9  ldr x0, [x0, #0x580]
0x06A7663C: f7281c97  bl #0x3180a18
0x06A76640: c06500b0  adrp x0, #0x772f000
0x06A76644: 009c47f9  ldr x0, [x0, #0xf38]
0x06A76648: f4281c97  bl #0x3180a18
0x06A7664C: c06500f0  adrp x0, #0x7731000
0x06A76650: 00c442f9  ldr x0, [x0, #0x588]
0x06A76654: f1281c97  bl #0x3180a18
0x06A76658: c05e0090  adrp x0, #0x764e000
0x06A7665C: 006444f9  ldr x0, [x0, #0x8c8]
0x06A76660: ee281c97  bl #0x3180a18
0x06A76664: c06500f0  adrp x0, #0x7731000
0x06A76668: 00c842f9  ldr x0, [x0, #0x590]
0x06A7666C: eb281c97  bl #0x3180a18
0x06A76670: c06500f0  adrp x0, #0x7731000
0x06A76674: 00cc42f9  ldr x0, [x0, #0x598]
0x06A76678: e8281c97  bl #0x3180a18
0x06A7667C: c05e0090  adrp x0, #0x764e000
0x06A76680: 007044f9  ldr x0, [x0, #0x8e0]
0x06A76684: e5281c97  bl #0x3180a18
0x06A76688: c06500f0  adrp x0, #0x7731000
0x06A7668C: 00d042f9  ldr x0, [x0, #0x5a0]
0x06A76690: e2281c97  bl #0x3180a18
0x06A76694: c06500f0  adrp x0, #0x7731000
0x06A76698: 00d442f9  ldr x0, [x0, #0x5a8]
0x06A7669C: df281c97  bl #0x3180a18
0x06A766A0: c06500f0  adrp x0, #0x7731000
0x06A766A4: 00d842f9  ldr x0, [x0, #0x5b0]
0x06A766A8: dc281c97  bl #0x3180a18
0x06A766AC: c06500f0  adrp x0, #0x7731000
0x06A766B0: 00dc42f9  ldr x0, [x0, #0x5b8]
0x06A766B4: d9281c97  bl #0x3180a18
0x06A766B8: c06500f0  adrp x0, #0x7731000
0x06A766BC: 00e042f9  ldr x0, [x0, #0x5c0]
0x06A766C0: d6281c97  bl #0x3180a18
0x06A766C4: c06500f0  adrp x0, #0x7731000
0x06A766C8: 00e442f9  ldr x0, [x0, #0x5c8]
0x06A766CC: d3281c97  bl #0x3180a18
0x06A766D0: 28008052  movz w8, #0x1
0x06A766D4: a8221c39  strb w8, [x21, #0x708]
0x06A766D8: 00e4006f  movi v0.2d, #0000000000000000
0x06A766DC: ffcb01b9  str wzr, [sp, #0x1c8]
0x06A766E0: e0030dad  stp q0, q0, [sp, #0x1a0]
0x06A766E4: e0030cad  stp q0, q0, [sp, #0x180]
0x06A766E8: e0030bad  stp q0, q0, [sp, #0x160]
0x06A766EC: e057803d  str q0, [sp, #0x150]
0x06A766F0: 600640f9  ldr x0, [x19, #8]
0x06A766F4: 201f00b4  cbz x0, #0x6a76ad8
0x06A766F8: c86500f0  adrp x8, #0x7731000
0x06A766FC: 08dd42f9  ldr x8, [x8, #0x5b8]
0x06A76700: e1230791  add x1, sp, #0x1c8
0x06A76704: 020140f9  ldr x2, [x8]
0x06A76708: f3394d97  bl #0x3dc4ed4
0x06A7670C: 401d0036  tbz w0, #0, #0x6a76ab4
0x06A76710: c86500f0  adrp x8, #0x7731000
0x06A76714: 600640ad  ldp q0, q1, [x19]
0x06A76718: 08b942f9  ldr x8, [x8, #0x570]
0x06A7671C: e08709ad  stp q0, q1, [sp, #0x130]
0x06A76720: 000140f9  ldr x0, [x8]
0x06A76724: bb8d4697  bl #0x3c19e10
0x06A76728: c86500f0  adrp x8, #0x7731000
0x06A7672C: 08d942f9  ldr x8, [x8, #0x5b0]
0x06A76730: e08749ad  ldp q0, q1, [sp, #0x130]
0x06A76734: e10300aa  mov x1, x0
0x06A76738: e0030291  add x0, sp, #0x80
0x06A7673C: 030140f9  ldr x3, [x8]
0x06A76740: e8830391  add x8, sp, #0xe0
0x06A76744: e2031faa  mov x2, xzr
0x06A76748: e00704ad  stp q0, q1, [sp, #0x80]
0x06A7674C: 8eb94b97  bl #0x3d64d84
0x06A76750: d76500f0  adrp x23, #0x7731000
0x06A76754: e10347ad  ldp q1, q0, [sp, #0xe0]
0x06A76758: f7e642f9  ldr x23, [x23, #0x5c8]
0x06A7675C: e1030dad  stp q1, q0, [sp, #0x1a0]
0x06A76760: e00240f9  ldr x0, [x23]
0x06A76764: 08e040b9  ldr w8, [x0, #0xe0]
0x06A76768: 68000035  cbnz w8, #0x6a76774
0x06A7676C: 08291c97  bl #0x3180b8c
0x06A76770: e00240f9  ldr x0, [x23]
0x06A76774: 085c40f9  ldr x8, [x0, #0xb8]
0x06A76778: 150540f9  ldr x21, [x8, #8]
0x06A7677C: f50200b5  cbnz x21, #0x6a767d8
0x06A76780: 08e040b9  ldr w8, [x0, #0xe0]
0x06A76784: 68000035  cbnz w8, #0x6a76790
0x06A76788: 01291c97  bl #0x3180b8c
0x06A7678C: e00240f9  ldr x0, [x23]
0x06A76790: c96500f0  adrp x9, #0x7731000
0x06A76794: 085c40f9  ldr x8, [x0, #0xb8]
0x06A76798: 29c542f9  ldr x9, [x9, #0x588]
0x06A7679C: 160140f9  ldr x22, [x8]
0x06A767A0: 200140f9  ldr x0, [x9]
0x06A767A4: 3f291c97  bl #0x3180ca0
0x06A767A8: c86500f0  adrp x8, #0x7731000
0x06A767AC: 08e142f9  ldr x8, [x8, #0x5c0]
0x06A767B0: e10316aa  mov x1, x22
0x06A767B4: e3031faa  mov x3, xzr
0x06A767B8: f50300aa  mov x21, x0
0x06A767BC: 020140f9  ldr x2, [x8]
0x06A767C0: d3639f97  bl #0x524f70c
0x06A767C4: e80240f9  ldr x8, [x23]
0x06A767C8: e10315aa  mov x1, x21
0x06A767CC: 005d40f9  ldr x0, [x8, #0xb8]
0x06A767D0: 158c00f8  str x21, [x0, #8]!
0x06A767D4: 7c281c97  bl #0x31809c4
0x06A767D8: c86500f0  adrp x8, #0x7731000
0x06A767DC: 08d542f9  ldr x8, [x8, #0x5a8]
0x06A767E0: e0830691  add x0, sp, #0x1a0
0x06A767E4: e10315aa  mov x1, x21
0x06A767E8: 020140f9  ldr x2, [x8]
0x06A767EC: e8030291  add x8, sp, #0x80
0x06A767F0: 93446497  bl #0x4387a3c
0x06A767F4: c86500f0  adrp x8, #0x7731000
0x06A767F8: e00744ad  ldp q0, q1, [sp, #0x80]
0x06A767FC: 08d142f9  ldr x8, [x8, #0x5a0]
0x06A76800: e0830691  add x0, sp, #0x1a0
0x06A76804: e0070dad  stp q0, q1, [sp, #0x1a0]
0x06A76808: 010140f9  ldr x1, [x8]
0x06A7680C: a2446497  bl #0x4387a94
0x06A76810: 401600b4  cbz x0, #0x6a76ad8
0x06A76814: ca6500f0  adrp x10, #0x7731000
0x06A76818: 080040f9  ldr x8, [x0]
0x06A7681C: 4ac942f9  ldr x10, [x10, #0x590]
0x06A76820: f50300aa  mov x21, x0
0x06A76824: 095d4279  ldrh w9, [x8, #0x12e]
0x06A76828: 410140f9  ldr x1, [x10]
0x06A7682C: 290100b4  cbz x9, #0x6a76850
0x06A76830: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A76834: 4a210091  add x10, x10, #8
0x06A76838: 4b815ff8  ldur x11, [x10, #-8]
0x06A7683C: 7f0101eb  cmp x11, x1
0x06A76840: 00010054  b.eq #0x6a76860
0x06A76844: 290500f1  subs x9, x9, #1
0x06A76848: 4a410091  add x10, x10, #0x10
0x06A7684C: 61ffff54  b.ne #0x6a76838
0x06A76850: e00315aa  mov x0, x21
0x06A76854: e2031f2a  mov w2, wzr
0x06A76858: ae801b97  bl #0x3156b10
0x06A7685C: 04000014  b #0x6a7686c
0x06A76860: 490180b9  ldrsw x9, [x10]
0x06A76864: 0811098b  add x8, x8, x9, lsl #4
0x06A76868: 00e10491  add x0, x8, #0x138
0x06A7686C: 080440a9  ldp x8, x1, [x0]
0x06A76870: e00315aa  mov x0, x21
0x06A76874: 00013fd6  blr x8
0x06A76878: f50300aa  mov x21, x0
0x06A7687C: 001300b4  cbz x0, #0x6a76adc
0x06A76880: d95e0090  adrp x25, #0x764e000
0x06A76884: da6500f0  adrp x26, #0x7731000
0x06A76888: db6500b0  adrp x27, #0x772f000
0x06A7688C: dc6500f0  adrp x28, #0x7731000
0x06A76890: dd6500f0  adrp x29, #0x7731000
0x06A76894: 397344f9  ldr x25, [x25, #0x8e0]
0x06A76898: 5acf42f9  ldr x26, [x26, #0x598]
0x06A7689C: 7b9f47f9  ldr x27, [x27, #0xf38]
0x06A768A0: 9cbf42f9  ldr x28, [x28, #0x578]
0x06A768A4: bdc342f9  ldr x29, [x29, #0x580]
0x06A768A8: e8030291  add x8, sp, #0x80
0x06A768AC: 16210091  add x22, x8, #8
0x06A768B0: a80240f9  ldr x8, [x21]
0x06A768B4: 210340f9  ldr x1, [x25]
0x06A768B8: 095d4279  ldrh w9, [x8, #0x12e]
0x06A768BC: 290100b4  cbz x9, #0x6a768e0
0x06A768C0: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A768C4: 4a210091  add x10, x10, #8
0x06A768C8: 4b815ff8  ldur x11, [x10, #-8]
0x06A768CC: 7f0101eb  cmp x11, x1
0x06A768D0: 00010054  b.eq #0x6a768f0
0x06A768D4: 290500f1  subs x9, x9, #1
0x06A768D8: 4a410091  add x10, x10, #0x10
0x06A768DC: 61ffff54  b.ne #0x6a768c8
0x06A768E0: e00315aa  mov x0, x21
0x06A768E4: e2031f2a  mov w2, wzr
0x06A768E8: 8a801b97  bl #0x3156b10
0x06A768EC: 04000014  b #0x6a768fc
0x06A768F0: 490180b9  ldrsw x9, [x10]
0x06A768F4: 0811098b  add x8, x8, x9, lsl #4
0x06A768F8: 00e10491  add x0, x8, #0x138
0x06A768FC: 080440a9  ldp x8, x1, [x0]
0x06A76900: e00315aa  mov x0, x21
0x06A76904: 00013fd6  blr x8
0x06A76908: 000a0036  tbz w0, #0, #0x6a76a48
0x06A7690C: a80240f9  ldr x8, [x21]
0x06A76910: 410340f9  ldr x1, [x26]
0x06A76914: 095d4279  ldrh w9, [x8, #0x12e]
0x06A76918: 290100b4  cbz x9, #0x6a7693c
0x06A7691C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A76920: 4a210091  add x10, x10, #8
0x06A76924: 4b815ff8  ldur x11, [x10, #-8]
0x06A76928: 7f0101eb  cmp x11, x1
0x06A7692C: 00010054  b.eq #0x6a7694c
0x06A76930: 290500f1  subs x9, x9, #1
0x06A76934: 4a410091  add x10, x10, #0x10
0x06A76938: 61ffff54  b.ne #0x6a76924
0x06A7693C: e00315aa  mov x0, x21
0x06A76940: e2031f2a  mov w2, wzr
0x06A76944: 73801b97  bl #0x3156b10
0x06A76948: 04000014  b #0x6a76958
0x06A7694C: 490180b9  ldrsw x9, [x10]
0x06A76950: 0811098b  add x8, x8, x9, lsl #4
0x06A76954: 00e10491  add x0, x8, #0x138
0x06A76958: 090440a9  ldp x9, x1, [x0]
0x06A7695C: e8030291  add x8, sp, #0x80
0x06A76960: e00315aa  mov x0, x21
0x06A76964: 20013fd6  blr x9
0x06A76968: f74340f9  ldr x23, [sp, #0x80]
0x06A7696C: e0830391  add x0, sp, #0xe0
0x06A76970: 020a8052  movz w2, #0x50
0x06A76974: e10316aa  mov x1, x22
0x06A76978: fe5f1d94  bl #0x71ce970
0x06A7697C: e0430591  add x0, sp, #0x150
0x06A76980: e1830391  add x1, sp, #0xe0
0x06A76984: 020a8052  movz w2, #0x50
0x06A76988: fa5f1d94  bl #0x71ce970
0x06A7698C: 620640ad  ldp q2, q1, [x19]
0x06A76990: e8634639  ldrb w8, [sp, #0x198]
0x06A76994: e0cb41bd  ldr s0, [sp, #0x1c8]
0x06A76998: e20703ad  stp q2, q1, [sp, #0x60]
0x06A7699C: 68000034  cbz w8, #0x6a769a8
0x06A769A0: ff630639  strb wzr, [sp, #0x198]
0x06A769A4: 09000014  b #0x6a769c8
0x06A769A8: e10b43ad  ldp q1, q2, [sp, #0x60]
0x06A769AC: 00c0221e  fcvt d0, s0
0x06A769B0: e10b04ad  stp q1, q2, [sp, #0x80]
0x06A769B4: e1030291  add x1, sp, #0x80
0x06A769B8: e2430591  add x2, sp, #0x150
0x06A769BC: e00314aa  mov x0, x20
0x06A769C0: e30317aa  mov x3, x23
0x06A769C4: 88000094  bl #0x6a76be4
0x06A769C8: e0430091  add x0, sp, #0x10
0x06A769CC: e1430591  add x1, sp, #0x150
0x06A769D0: 020a8052  movz w2, #0x50
0x06A769D4: e75f1d94  bl #0x71ce970
0x06A769D8: f70700b4  cbz x23, #0x6a76ad4
0x06A769DC: 780340f9  ldr x24, [x27]
0x06A769E0: e0030291  add x0, sp, #0x80
0x06A769E4: e1430091  add x1, sp, #0x10
0x06A769E8: 020a8052  movz w2, #0x50
0x06A769EC: e15f1d94  bl #0x71ce970
0x06A769F0: e1030291  add x1, sp, #0x80
0x06A769F4: e00317aa  mov x0, x23
0x06A769F8: e20318aa  mov x2, x24
0x06A769FC: b39c4697  bl #0x3c1dcc8
0x06A76A00: e88741b9  ldr w8, [sp, #0x184]
0x06A76A04: 1f050071  cmp w8, #1
0x06A76A08: eb000054  b.lt #0x6a76a24
0x06A76A0C: e86b4639  ldrb w8, [sp, #0x19a]
0x06A76A10: a8000035  cbnz w8, #0x6a76a24
0x06A76A14: e0430591  add x0, sp, #0x150
0x06A76A18: e1031faa  mov x1, xzr
0x06A76A1C: 97960094  bl #0x6a9c478
0x06A76A20: c0000036  tbz w0, #0, #0x6a76a38
0x06A76A24: a20340f9  ldr x2, [x29]
0x06A76A28: e00317aa  mov x0, x23
0x06A76A2C: e1031faa  mov x1, xzr
0x06A76A30: 30984697  bl #0x3c1caf0
0x06A76A34: 9fffff17  b #0x6a768b0
0x06A76A38: 810340f9  ldr x1, [x28]
0x06A76A3C: e00317aa  mov x0, x23
0x06A76A40: 24964697  bl #0x3c1c2d0
0x06A76A44: 9bffff17  b #0x6a768b0
0x06A76A48: f3031faa  mov x19, xzr
0x06A76A4C: 350300b4  cbz x21, #0x6a76ab0
0x06A76A50: ca5e0090  adrp x10, #0x764e000
0x06A76A54: a80240f9  ldr x8, [x21]
0x06A76A58: 4a6544f9  ldr x10, [x10, #0x8c8]
0x06A76A5C: 095d4279  ldrh w9, [x8, #0x12e]
0x06A76A60: 410140f9  ldr x1, [x10]
0x06A76A64: 290100b4  cbz x9, #0x6a76a88
0x06A76A68: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A76A6C: 4a210091  add x10, x10, #8
0x06A76A70: 4b815ff8  ldur x11, [x10, #-8]
0x06A76A74: 7f0101eb  cmp x11, x1
0x06A76A78: 00010054  b.eq #0x6a76a98
0x06A76A7C: 290500f1  subs x9, x9, #1
0x06A76A80: 4a410091  add x10, x10, #0x10
0x06A76A84: 61ffff54  b.ne #0x6a76a70
0x06A76A88: e00315aa  mov x0, x21
0x06A76A8C: e2031f2a  mov w2, wzr
0x06A76A90: 20801b97  bl #0x3156b10
0x06A76A94: 04000014  b #0x6a76aa4
0x06A76A98: 490180b9  ldrsw x9, [x10]
0x06A76A9C: 0811098b  add x8, x8, x9, lsl #4
0x06A76AA0: 00e10491  add x0, x8, #0x138
0x06A76AA4: 080440a9  ldp x8, x1, [x0]
0x06A76AA8: e00315aa  mov x0, x21
0x06A76AAC: 00013fd6  blr x8
0x06A76AB0: 930100b5  cbnz x19, #0x6a76ae0
0x06A76AB4: ff430791  add sp, sp, #0x1d0
0x06A76AB8: f44f45a9  ldp x20, x19, [sp, #0x50]
0x06A76ABC: f65744a9  ldp x22, x21, [sp, #0x40]
0x06A76AC0: f85f43a9  ldp x24, x23, [sp, #0x30]
0x06A76AC4: fa6742a9  ldp x26, x25, [sp, #0x20]
0x06A76AC8: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x06A76ACC: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x06A76AD0: c0035fd6  ret
0x06A76AD4: 76281c97  bl #0x3180cac
0x06A76AD8: 75281c97  bl #0x3180cac
0x06A76ADC: 74281c97  bl #0x3180cac
0x06A76AE0: e00313aa  mov x0, x19
0x06A76AE4: 70281c97  bl #0x3180ca4
0x06A76AE8: 08000014  b #0x6a76b08
0x06A76AEC: 07000014  b #0x6a76b08
0x06A76AF0: 06000014  b #0x6a76b08
0x06A76AF4: 05000014  b #0x6a76b08
0x06A76AF8: 04000014  b #0x6a76b08
0x06A76AFC: 03000014  b #0x6a76b08
0x06A76B00: 02000014  b #0x6a76b08
0x06A76B04: 01000014  b #0x6a76b08
0x06A76B08: f40300aa  mov x20, x0
0x06A76B0C: 3f040071  cmp w1, #1
0x06A76B10: c1000054  b.ne #0x6a76b28
0x06A76B14: e00314aa  mov x0, x20
0x06A76B18: 7e5f1d94  bl #0x71ce910
0x06A76B1C: 130040f9  ldr x19, [x0]
0x06A76B20: 805f1d94  bl #0x71ce920
0x06A76B24: caffff17  b #0x6a76a4c
0x06A76B28: f3031faa  mov x19, xzr
0x06A76B2C: 02000014  b #0x6a76b34
0x06A76B30: f40300aa  mov x20, x0
0x06A76B34: 350300b4  cbz x21, #0x6a76b98
0x06A76B38: ca5e0090  adrp x10, #0x764e000
0x06A76B3C: a80240f9  ldr x8, [x21]
0x06A76B40: 4a6544f9  ldr x10, [x10, #0x8c8]
0x06A76B44: 095d4279  ldrh w9, [x8, #0x12e]
0x06A76B48: 410140f9  ldr x1, [x10]
0x06A76B4C: 290100b4  cbz x9, #0x6a76b70
0x06A76B50: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A76B54: 4a210091  add x10, x10, #8
0x06A76B58: 4b815ff8  ldur x11, [x10, #-8]
0x06A76B5C: 7f0101eb  cmp x11, x1
0x06A76B60: 00010054  b.eq #0x6a76b80
0x06A76B64: 290500f1  subs x9, x9, #1
0x06A76B68: 4a410091  add x10, x10, #0x10
0x06A76B6C: 61ffff54  b.ne #0x6a76b58
0x06A76B70: e00315aa  mov x0, x21
0x06A76B74: e2031f2a  mov w2, wzr
0x06A76B78: e67f1b97  bl #0x3156b10
0x06A76B7C: 04000014  b #0x6a76b8c
0x06A76B80: 490180b9  ldrsw x9, [x10]
0x06A76B84: 0811098b  add x8, x8, x9, lsl #4
0x06A76B88: 00e10491  add x0, x8, #0x138
0x06A76B8C: 080440a9  ldp x8, x1, [x0]
0x06A76B90: e00315aa  mov x0, x21
0x06A76B94: 00013fd6  blr x8
0x06A76B98: 730000b5  cbnz x19, #0x6a76ba4
0x06A76B9C: e00314aa  mov x0, x20
0x06A76BA0: 6ebb1f97  bl #0x3265958
0x06A76BA4: e00313aa  mov x0, x19
0x06A76BA8: 3f281c97  bl #0x3180ca4
0x06A76BAC: 5a4a0e97  bl #0x2e09514

; RVA 0x6A76BB0 | private void ProcessTimeCheckIfLocked(TickContext context, double seconds, ref TimeCycleComponent component, Entity entity) { }
; bytes=52 sha256=56b1981f57a17befedf0cde2e2859c88888a24ce07d2e8fb46eb7a062a37092a status=arm64_complete_bound indexed_start=True
0x06A76BB0: ffc300d1  sub sp, sp, #0x30
0x06A76BB4: fe1300f9  str x30, [sp, #0x20]
0x06A76BB8: 48204139  ldrb w8, [x2, #0x48]
0x06A76BBC: 68000034  cbz w8, #0x6a76bc8
0x06A76BC0: 5f200139  strb wzr, [x2, #0x48]
0x06A76BC4: 05000014  b #0x6a76bd8
0x06A76BC8: 220440ad  ldp q2, q1, [x1]
0x06A76BCC: e1030091  mov x1, sp
0x06A76BD0: e20700ad  stp q2, q1, [sp]
0x06A76BD4: 04000094  bl #0x6a76be4
0x06A76BD8: fe1340f9  ldr x30, [sp, #0x20]
0x06A76BDC: ffc30091  add sp, sp, #0x30
0x06A76BE0: c0035fd6  ret

; RVA 0x6A76BE4 | private void ProcessTime(TickContext context, double seconds, ref TimeCycleComponent component, Entity entity) { }
; bytes=200 sha256=47cd92966a84a3c09ff1a98fa0d869c9d1190b0fd76593df1706c6b3ddb38aa9 status=arm64_complete_bound indexed_start=True
0x06A76BE4: ffc301d1  sub sp, sp, #0x70
0x06A76BE8: e82300fd  str d8, [sp, #0x40]
0x06A76BEC: fe2700f9  str x30, [sp, #0x48]
0x06A76BF0: f65705a9  stp x22, x21, [sp, #0x50]
0x06A76BF4: f44f06a9  stp x20, x19, [sp, #0x60]
0x06A76BF8: f60301aa  mov x22, x1
0x06A76BFC: f50300aa  mov x21, x0
0x06A76C00: e00302aa  mov x0, x2
0x06A76C04: e1031faa  mov x1, xzr
0x06A76C08: f40303aa  mov x20, x3
0x06A76C0C: f30302aa  mov x19, x2
0x06A76C10: 081ca04e  mov v8.16b, v0.16b
0x06A76C14: 19960094  bl #0x6a9c478
0x06A76C18: 80000036  tbz w0, #0, #0x6a76c28
0x06A76C1C: 7f3600b9  str wzr, [x19, #0x34]
0x06A76C20: 7f3e00b9  str wzr, [x19, #0x3c]
0x06A76C24: 1c000014  b #0x6a76c94
0x06A76C28: 683640b9  ldr w8, [x19, #0x34]
0x06A76C2C: 691240b9  ldr w9, [x19, #0x10]
0x06A76C30: 1f01096b  cmp w8, w9
0x06A76C34: aa010054  b.ge #0x6a76c68
0x06A76C38: 601240fd  ldr d0, [x19, #0x20]
0x06A76C3C: 0820601e  fcmp d0, #0.0
0x06A76C40: ad010054  b.le #0x6a76c74
0x06A76C44: c10240ad  ldp q1, q0, [x22]
0x06A76C48: e1830091  add x1, sp, #0x20
0x06A76C4C: e00315aa  mov x0, x21
0x06A76C50: e20313aa  mov x2, x19
0x06A76C54: e10301ad  stp q1, q0, [sp, #0x20]
0x06A76C58: 001da84e  mov v0.16b, v8.16b
0x06A76C5C: e30314aa  mov x3, x20
0x06A76C60: 13000094  bl #0x6a76cac
0x06A76C64: 0c000014  b #0x6a76c94
0x06A76C68: 68008052  movz w8, #0x3
0x06A76C6C: 683e00b9  str w8, [x19, #0x3c]
0x06A76C70: 09000014  b #0x6a76c94
0x06A76C74: c10240ad  ldp q1, q0, [x22]
0x06A76C78: e1030091  mov x1, sp
0x06A76C7C: e00315aa  mov x0, x21
0x06A76C80: e20313aa  mov x2, x19
0x06A76C84: e10300ad  stp q1, q0, [sp]
0x06A76C88: 001da84e  mov v0.16b, v8.16b
0x06A76C8C: e30314aa  mov x3, x20
0x06A76C90: 30000094  bl #0x6a76d50
0x06A76C94: f44f46a9  ldp x20, x19, [sp, #0x60]
0x06A76C98: f65745a9  ldp x22, x21, [sp, #0x50]
0x06A76C9C: fe2740f9  ldr x30, [sp, #0x48]
0x06A76CA0: e82340fd  ldr d8, [sp, #0x40]
0x06A76CA4: ffc30191  add sp, sp, #0x70
0x06A76CA8: c0035fd6  ret

; RVA 0x6A76CAC | private void ProcessDelay(TickContext context, double seconds, ref TimeCycleComponent component, Entity entity) { }
; bytes=164 sha256=0b1e2159e5b112cfcf0b1e374509f97b047aff8fe4e3975e04c9597f2ef47cfe status=arm64_complete_bound indexed_start=True
0x06A76CAC: ff8301d1  sub sp, sp, #0x60
0x06A76CB0: e82300fd  str d8, [sp, #0x40]
0x06A76CB4: fe4f05a9  stp x30, x19, [sp, #0x50]
0x06A76CB8: 081ca04e  mov v8.16b, v0.16b
0x06A76CBC: 401040fd  ldr d0, [x2, #0x20]
0x06A76CC0: f30302aa  mov x19, x2
0x06A76CC4: 0020681e  fcmp d0, d8
0x06A76CC8: cd020054  b.le #0x6a76d20
0x06A76CCC: 683640b9  ldr w8, [x19, #0x34]
0x06A76CD0: 693e40b9  ldr w9, [x19, #0x3c]
0x06A76CD4: 7f1600f9  str xzr, [x19, #0x28]
0x06A76CD8: 1f010071  cmp w8, #0
0x06A76CDC: 29791f12  and w9, w9, #0xfffffffe
0x06A76CE0: ead79f1a  cset w10, gt
0x06A76CE4: 4a791f53  lsl w10, w10, #1
0x06A76CE8: 3f090071  cmp w9, #2
0x06A76CEC: 6a3e00b9  str w10, [x19, #0x3c]
0x06A76CF0: 21010054  b.ne #0x6a76d14
0x06A76CF4: 1f010071  cmp w8, #0
0x06A76CF8: ec000054  b.gt #0x6a76d14
0x06A76CFC: 210040ad  ldp q1, q0, [x1]
0x06A76D00: e1830091  add x1, sp, #0x20
0x06A76D04: e20313aa  mov x2, x19
0x06A76D08: e10301ad  stp q1, q0, [sp, #0x20]
0x06A76D0C: 7e000094  bl #0x6a76f04
0x06A76D10: 601240fd  ldr d0, [x19, #0x20]
0x06A76D14: 0038681e  fsub d0, d0, d8
0x06A76D18: 601200fd  str d0, [x19, #0x20]
0x06A76D1C: 09000014  b #0x6a76d40
0x06A76D20: 7f1200f9  str xzr, [x19, #0x20]
0x06A76D24: 7f3a00b9  str wzr, [x19, #0x38]
0x06A76D28: 220440ad  ldp q2, q1, [x1]
0x06A76D2C: 0039601e  fsub d0, d8, d0
0x06A76D30: e1030091  mov x1, sp
0x06A76D34: e20313aa  mov x2, x19
0x06A76D38: e20700ad  stp q2, q1, [sp]
0x06A76D3C: 05000094  bl #0x6a76d50
0x06A76D40: fe4f45a9  ldp x30, x19, [sp, #0x50]
0x06A76D44: e82340fd  ldr d8, [sp, #0x40]
0x06A76D48: ff830191  add sp, sp, #0x60
0x06A76D4C: c0035fd6  ret

; RVA 0x6A76D50 | private void ProcessCycles(TickContext context, double seconds, ref TimeCycleComponent component, Entity entity) { }
; bytes=404 sha256=979916f603548c0f798889870c3385adcf4f664e3892e6d8ecea13b5acae9cb8 status=arm64_complete_bound indexed_start=True
0x06A76D50: ff0303d1  sub sp, sp, #0xc0
0x06A76D54: e84300fd  str d8, [sp, #0x80]
0x06A76D58: fe4700f9  str x30, [sp, #0x88]
0x06A76D5C: f85f09a9  stp x24, x23, [sp, #0x90]
0x06A76D60: f6570aa9  stp x22, x21, [sp, #0xa0]
0x06A76D64: f44f0ba9  stp x20, x19, [sp, #0xb0]
0x06A76D68: 483840b9  ldr w8, [x2, #0x38]
0x06A76D6C: 490c40b9  ldr w9, [x2, #0xc]
0x06A76D70: 4a0440b9  ldr w10, [x2, #4]
0x06A76D74: f40303aa  mov x20, x3
0x06A76D78: f30302aa  mov x19, x2
0x06A76D7C: 080dc91a  sdiv w8, w8, w9
0x06A76D80: 081ca04e  mov v8.16b, v0.16b
0x06A76D84: f60301aa  mov x22, x1
0x06A76D88: f50300aa  mov x21, x0
0x06A76D8C: 1f010a6b  cmp w8, w10
0x06A76D90: 483000b9  str w8, [x2, #0x30]
0x06A76D94: 6b020054  b.lt #0x6a76de0
0x06A76D98: 680240b9  ldr w8, [x19]
0x06A76D9C: 1f050071  cmp w8, #1
0x06A76DA0: 0b020054  b.lt #0x6a76de0
0x06A76DA4: 0001621e  scvtf d0, w8
0x06A76DA8: 684240b9  ldr w8, [x19, #0x40]
0x06A76DAC: 7ffe0629  stp wzr, wzr, [x19, #0x34]
0x06A76DB0: 601200fd  str d0, [x19, #0x20]
0x06A76DB4: e1830191  add x1, sp, #0x60
0x06A76DB8: 08050011  add w8, w8, #1
0x06A76DBC: 684200b9  str w8, [x19, #0x40]
0x06A76DC0: c10240ad  ldp q1, q0, [x22]
0x06A76DC4: e00315aa  mov x0, x21
0x06A76DC8: e20313aa  mov x2, x19
0x06A76DCC: e30314aa  mov x3, x20
0x06A76DD0: e10303ad  stp q1, q0, [sp, #0x60]
0x06A76DD4: 001da84e  mov v0.16b, v8.16b
0x06A76DD8: b5ffff97  bl #0x6a76cac
0x06A76DDC: 3b000014  b #0x6a76ec8
0x06A76DE0: 601640fd  ldr d0, [x19, #0x28]
0x06A76DE4: 773e40b9  ldr w23, [x19, #0x3c]
0x06A76DE8: 0020681e  fcmp d0, d8
0x06A76DEC: cd020054  b.le #0x6a76e44
0x06A76DF0: 683640b9  ldr w8, [x19, #0x34]
0x06A76DF4: 29008052  movz w9, #0x1
0x06A76DF8: ea7a1f12  and w10, w23, #0xfffffffe
0x06A76DFC: 1f050071  cmp w8, #1
0x06A76E00: 29b5891a  cinc w9, w9, ge
0x06A76E04: 5f090071  cmp w10, #2
0x06A76E08: 693e00b9  str w9, [x19, #0x3c]
0x06A76E0C: 61010054  b.ne #0x6a76e38
0x06A76E10: 1f010071  cmp w8, #0
0x06A76E14: 2c010054  b.gt #0x6a76e38
0x06A76E18: c10240ad  ldp q1, q0, [x22]
0x06A76E1C: e1030191  add x1, sp, #0x40
0x06A76E20: e00315aa  mov x0, x21
0x06A76E24: e20313aa  mov x2, x19
0x06A76E28: e30314aa  mov x3, x20
0x06A76E2C: e10302ad  stp q1, q0, [sp, #0x40]
0x06A76E30: 35000094  bl #0x6a76f04
0x06A76E34: 601640fd  ldr d0, [x19, #0x28]
0x06A76E38: 0038681e  fsub d0, d0, d8
0x06A76E3C: 601600fd  str d0, [x19, #0x28]
0x06A76E40: 22000014  b #0x6a76ec8
0x06A76E44: 683640b9  ldr w8, [x19, #0x34]
0x06A76E48: 0039601e  fsub d0, d8, d0
0x06A76E4C: 7f1600f9  str xzr, [x19, #0x28]
0x06A76E50: 68000034  cbz w8, #0x6a76e5c
0x06A76E54: f8031f2a  mov w24, wzr
0x06A76E58: 06000014  b #0x6a76e70
0x06A76E5C: 680240b9  ldr w8, [x19]
0x06A76E60: 690a40b9  ldr w9, [x19, #8]
0x06A76E64: 2801082a  orr w8, w9, w8
0x06A76E68: 1f010071  cmp w8, #0
0x06A76E6C: f8079f1a  cset w24, ne
0x06A76E70: c20640ad  ldp q2, q1, [x22]
0x06A76E74: e1830091  add x1, sp, #0x20
0x06A76E78: e00315aa  mov x0, x21
0x06A76E7C: e20313aa  mov x2, x19
0x06A76E80: e30314aa  mov x3, x20
0x06A76E84: e20701ad  stp q2, q1, [sp, #0x20]
0x06A76E88: 91000094  bl #0x6a770cc
0x06A76E8C: 683e40b9  ldr w8, [x19, #0x3c]
0x06A76E90: 1f0d0071  cmp w8, #3
0x06A76E94: e8179f1a  cset w8, eq
0x06A76E98: ff0e0071  cmp w23, #3
0x06A76E9C: e9079f1a  cset w9, ne
0x06A76EA0: 2801080a  and w8, w9, w8
0x06A76EA4: 0803082a  orr w8, w24, w8
0x06A76EA8: 08010034  cbz w8, #0x6a76ec8
0x06A76EAC: c10240ad  ldp q1, q0, [x22]
0x06A76EB0: e1030091  mov x1, sp
0x06A76EB4: e00315aa  mov x0, x21
0x06A76EB8: e20313aa  mov x2, x19
0x06A76EBC: e30314aa  mov x3, x20
0x06A76EC0: e10300ad  stp q1, q0, [sp]
0x06A76EC4: c0000094  bl #0x6a771c4
0x06A76EC8: f44f4ba9  ldp x20, x19, [sp, #0xb0]
0x06A76ECC: f6574aa9  ldp x22, x21, [sp, #0xa0]
0x06A76ED0: f85f49a9  ldp x24, x23, [sp, #0x90]
0x06A76ED4: fe4740f9  ldr x30, [sp, #0x88]
0x06A76ED8: e84340fd  ldr d8, [sp, #0x80]
0x06A76EDC: ff030391  add sp, sp, #0xc0
0x06A76EE0: c0035fd6  ret

; RVA 0x6A770AC | private bool SkipCooldownEntirely(TimeCycleComponent component) { }
; bytes=32 sha256=f82d90e8efbd0867d35c85383c844c8be8af15c7b3b17072344fd5ba3393450f status=arm64_complete_bound indexed_start=True
0x06A770AC: 280040b9  ldr w8, [x1]
0x06A770B0: 68000034  cbz w8, #0x6a770bc
0x06A770B4: e0031f2a  mov w0, wzr
0x06A770B8: c0035fd6  ret
0x06A770BC: 280840b9  ldr w8, [x1, #8]
0x06A770C0: 1f010071  cmp w8, #0
0x06A770C4: e0179f1a  cset w0, eq
0x06A770C8: c0035fd6  ret

; RVA 0x6A770CC | private void ProcessCycle(TickContext context, double seconds, ref TimeCycleComponent component, Entity entity) { }
; bytes=248 sha256=b3382f1250efd683953719a95e82c6365bce044219bd22e6955ca60c86d5d254 status=arm64_complete_bound indexed_start=True
0x06A770CC: ff8301d1  sub sp, sp, #0x60
0x06A770D0: e81300fd  str d8, [sp, #0x20]
0x06A770D4: fe1700f9  str x30, [sp, #0x28]
0x06A770D8: f85f03a9  stp x24, x23, [sp, #0x30]
0x06A770DC: f65704a9  stp x22, x21, [sp, #0x40]
0x06A770E0: f44f05a9  stp x20, x19, [sp, #0x50]
0x06A770E4: 979500f0  adrp x23, #0x7d2a000
0x06A770E8: e8265c39  ldrb w8, [x23, #0x709]
0x06A770EC: f40303aa  mov x20, x3
0x06A770F0: f30302aa  mov x19, x2
0x06A770F4: 081ca04e  mov v8.16b, v0.16b
0x06A770F8: f60301aa  mov x22, x1
0x06A770FC: f50300aa  mov x21, x0
0x06A77100: c8000037  tbnz w8, #0, #0x6a77118
0x06A77104: a05e00f0  adrp x0, #0x764e000
0x06A77108: 000447f9  ldr x0, [x0, #0xe08]
0x06A7710C: 43261c97  bl #0x3180a18
0x06A77110: 28008052  movz w8, #0x1
0x06A77114: e8261c39  strb w8, [x23, #0x709]
0x06A77118: 690a40b9  ldr w9, [x19, #8]
0x06A7711C: 683640b9  ldr w8, [x19, #0x34]
0x06A77120: 69000035  cbnz w9, #0x6a7712c
0x06A77124: 1f010071  cmp w8, #0
0x06A77128: 0c040054  b.gt #0x6a771a8
0x06A7712C: 69de4129  ldp w9, w23, [x19, #0xc]
0x06A77130: aa5e00f0  adrp x10, #0x764e000
0x06A77134: 4a0547f9  ldr x10, [x10, #0xe08]
0x06A77138: 3801080b  add w24, w9, w8
0x06A7713C: 783600b9  str w24, [x19, #0x34]
0x06A77140: 400140f9  ldr x0, [x10]
0x06A77144: 08e040b9  ldr w8, [x0, #0xe0]
0x06A77148: 48000035  cbnz w8, #0x6a77150
0x06A7714C: 90261c97  bl #0x3180b8c
0x06A77150: e003182a  mov w0, w24
0x06A77154: e103172a  mov w1, w23
0x06A77158: e2031faa  mov x2, xzr
0x06A7715C: 0981b097  bl #0x5697580
0x06A77160: 680a40b9  ldr w8, [x19, #8]
0x06A77164: 691240b9  ldr w9, [x19, #0x10]
0x06A77168: 603600b9  str w0, [x19, #0x34]
0x06A7716C: 0001621e  scvtf d0, w8
0x06A77170: 1f00096b  cmp w0, w9
0x06A77174: 601600fd  str d0, [x19, #0x28]
0x06A77178: 4a010054  b.ge #0x6a771a0
0x06A7717C: c10240ad  ldp q1, q0, [x22]
0x06A77180: e1030091  mov x1, sp
0x06A77184: e00315aa  mov x0, x21
0x06A77188: e20313aa  mov x2, x19
0x06A7718C: e10300ad  stp q1, q0, [sp]
0x06A77190: 001da84e  mov v0.16b, v8.16b
0x06A77194: e30314aa  mov x3, x20
0x06A77198: eefeff97  bl #0x6a76d50
0x06A7719C: 03000014  b #0x6a771a8
0x06A771A0: 68008052  movz w8, #0x3
0x06A771A4: 683e00b9  str w8, [x19, #0x3c]
0x06A771A8: f44f45a9  ldp x20, x19, [sp, #0x50]
0x06A771AC: f65744a9  ldp x22, x21, [sp, #0x40]
0x06A771B0: f85f43a9  ldp x24, x23, [sp, #0x30]
0x06A771B4: fe1740f9  ldr x30, [sp, #0x28]
0x06A771B8: e81340fd  ldr d8, [sp, #0x20]
0x06A771BC: ff830191  add sp, sp, #0x60
0x06A771C0: c0035fd6  ret

; RVA 0x6A76EE4 | private bool ShouldFireCooldownStartedEvent(TimeCycleState previousState, TimeCycleState currentState) { }
; bytes=32 sha256=c3b370656fb52594f6b5dd73d77402ec4d0c1ed6e9f0206034275fe11d43d0e7 status=arm64_complete_bound indexed_start=True
0x06A76EE4: 28781f12  and w8, w1, #0xfffffffe
0x06A76EE8: 1f090071  cmp w8, #2
0x06A76EEC: 81000054  b.ne #0x6a76efc
0x06A76EF0: 5f080071  cmp w2, #2
0x06A76EF4: e0279f1a  cset w0, lo
0x06A76EF8: c0035fd6  ret
0x06A76EFC: e0031f2a  mov w0, wzr
0x06A76F00: c0035fd6  ret

; RVA 0x6A76F04 | private void AddCooldownStartedResult(TickContext context, ref TimeCycleComponent timeCycleComponent, Entity entity) { }
; bytes=424 sha256=dbaa861861c377e6d059d2921b9c930779cddb0ce9f1b8ad83ac60729c92b8d7 status=arm64_complete_bound indexed_start=True
0x06A76F04: ff8303d1  sub sp, sp, #0xe0
0x06A76F08: fe5300f9  str x30, [sp, #0xa0]
0x06A76F0C: f85f0ba9  stp x24, x23, [sp, #0xb0]
0x06A76F10: f6570ca9  stp x22, x21, [sp, #0xc0]
0x06A76F14: f44f0da9  stp x20, x19, [sp, #0xd0]
0x06A76F18: b7950090  adrp x23, #0x7d2a000
0x06A76F1C: e82a5c39  ldrb w8, [x23, #0x70a]
0x06A76F20: f40303aa  mov x20, x3
0x06A76F24: f60302aa  mov x22, x2
0x06A76F28: f30301aa  mov x19, x1
0x06A76F2C: f50300aa  mov x21, x0
0x06A76F30: a8020037  tbnz w8, #0, #0x6a76f84
0x06A76F34: c06500f0  adrp x0, #0x7731000
0x06A76F38: 00e842f9  ldr x0, [x0, #0x5d0]
0x06A76F3C: b7261c97  bl #0x3180a18
0x06A76F40: c06500f0  adrp x0, #0x7731000
0x06A76F44: 00ec42f9  ldr x0, [x0, #0x5d8]
0x06A76F48: b4261c97  bl #0x3180a18
0x06A76F4C: c06500b0  adrp x0, #0x772f000
0x06A76F50: 009c47f9  ldr x0, [x0, #0xf38]
0x06A76F54: b1261c97  bl #0x3180a18
0x06A76F58: c06500f0  adrp x0, #0x7731000
0x06A76F5C: 00f042f9  ldr x0, [x0, #0x5e0]
0x06A76F60: ae261c97  bl #0x3180a18
0x06A76F64: c06500f0  adrp x0, #0x7731000
0x06A76F68: 00f442f9  ldr x0, [x0, #0x5e8]
0x06A76F6C: ab261c97  bl #0x3180a18
0x06A76F70: c05e00b0  adrp x0, #0x764f000
0x06A76F74: 00ac40f9  ldr x0, [x0, #0x158]
0x06A76F78: a8261c97  bl #0x3180a18
0x06A76F7C: 28008052  movz w8, #0x1
0x06A76F80: e82a1c39  strb w8, [x23, #0x70a]
0x06A76F84: e0030091  mov x0, sp
0x06A76F88: 020a8052  movz w2, #0x50
0x06A76F8C: e10316aa  mov x1, x22
0x06A76F90: 785e1d94  bl #0x71ce970
0x06A76F94: b40800b4  cbz x20, #0x6a770a8
0x06A76F98: c86500b0  adrp x8, #0x772f000
0x06A76F9C: 089d47f9  ldr x8, [x8, #0xf38]
0x06A76FA0: d76500f0  adrp x23, #0x7731000
0x06A76FA4: e0430191  add x0, sp, #0x50
0x06A76FA8: e1030091  mov x1, sp
0x06A76FAC: 160140f9  ldr x22, [x8]
0x06A76FB0: f7ea42f9  ldr x23, [x23, #0x5d0]
0x06A76FB4: 020a8052  movz w2, #0x50
0x06A76FB8: 6e5e1d94  bl #0x71ce970
0x06A76FBC: e1430191  add x1, sp, #0x50
0x06A76FC0: e00314aa  mov x0, x20
0x06A76FC4: e20316aa  mov x2, x22
0x06A76FC8: 409b4697  bl #0x3c1dcc8
0x06A76FCC: e00240f9  ldr x0, [x23]
0x06A76FD0: 760a40f9  ldr x22, [x19, #0x10]
0x06A76FD4: 33271c97  bl #0x3180ca0
0x06A76FD8: e1031faa  mov x1, xzr
0x06A76FDC: f70300aa  mov x23, x0
0x06A76FE0: 8c8c0094  bl #0x6a9a210
0x06A76FE4: 370600b4  cbz x23, #0x6a770a8
0x06A76FE8: d85e00b0  adrp x24, #0x764f000
0x06A76FEC: 18af40f9  ldr x24, [x24, #0x158]
0x06A76FF0: e00317aa  mov x0, x23
0x06A76FF4: 140c01f8  str x20, [x0, #0x10]!
0x06A76FF8: e10314aa  mov x1, x20
0x06A76FFC: 72261c97  bl #0x31809c4
0x06A77000: 020340f9  ldr x2, [x24]
0x06A77004: a10a40f9  ldr x1, [x21, #0x10]
0x06A77008: e00314aa  mov x0, x20
0x06A7700C: e5031faa  mov x5, xzr
0x06A77010: e30302aa  mov x3, x2
0x06A77014: e40302aa  mov x4, x2
0x06A77018: 47b00094  bl #0x6aa3134
0x06A7701C: e10300aa  mov x1, x0
0x06A77020: e00317aa  mov x0, x23
0x06A77024: 018c01f8  str x1, [x0, #0x18]!
0x06A77028: 67261c97  bl #0x31809c4
0x06A7702C: f60300b4  cbz x22, #0x6a770a8
0x06A77030: c86500d0  adrp x8, #0x7731000
0x06A77034: 08f142f9  ldr x8, [x8, #0x5e0]
0x06A77038: d46500d0  adrp x20, #0x7731000
0x06A7703C: e00316aa  mov x0, x22
0x06A77040: e10317aa  mov x1, x23
0x06A77044: 020140f9  ldr x2, [x8]
0x06A77048: 94ee42f9  ldr x20, [x20, #0x5d8]
0x06A7704C: e6304d97  bl #0x3dc33e4
0x06A77050: 800240f9  ldr x0, [x20]
0x06A77054: 730a40f9  ldr x19, [x19, #0x10]
0x06A77058: 12271c97  bl #0x3180ca0
0x06A7705C: e1031faa  mov x1, xzr
0x06A77060: f40300aa  mov x20, x0
0x06A77064: 988c0094  bl #0x6a9a2c4
0x06A77068: 140200b4  cbz x20, #0x6a770a8
0x06A7706C: 28008052  movz w8, #0x1
0x06A77070: 88420039  strb w8, [x20, #0x10]
0x06A77074: b30100b4  cbz x19, #0x6a770a8
0x06A77078: c86500d0  adrp x8, #0x7731000
0x06A7707C: 08f542f9  ldr x8, [x8, #0x5e8]
0x06A77080: e00313aa  mov x0, x19
0x06A77084: e10314aa  mov x1, x20
0x06A77088: 020140f9  ldr x2, [x8]
0x06A7708C: d6304d97  bl #0x3dc33e4
0x06A77090: f44f4da9  ldp x20, x19, [sp, #0xd0]
0x06A77094: f6574ca9  ldp x22, x21, [sp, #0xc0]
0x06A77098: f85f4ba9  ldp x24, x23, [sp, #0xb0]
0x06A7709C: fe5340f9  ldr x30, [sp, #0xa0]
0x06A770A0: ff830391  add sp, sp, #0xe0
0x06A770A4: c0035fd6  ret
0x06A770A8: 01271c97  bl #0x3180cac

; RVA 0x6A771C4 | private void AddCooldownEndedResult(TickContext context, ref TimeCycleComponent timeCycleComponent, Entity entity) { }
; bytes=420 sha256=50c3c452e6b6e571514cb49802833d2abb91e0468ddfa25e28c5ee7daffc9982 status=arm64_complete_bound indexed_start=True
0x06A771C4: ff8303d1  sub sp, sp, #0xe0
0x06A771C8: fe5300f9  str x30, [sp, #0xa0]
0x06A771CC: f85f0ba9  stp x24, x23, [sp, #0xb0]
0x06A771D0: f6570ca9  stp x22, x21, [sp, #0xc0]
0x06A771D4: f44f0da9  stp x20, x19, [sp, #0xd0]
0x06A771D8: 979500f0  adrp x23, #0x7d2a000
0x06A771DC: e82e5c39  ldrb w8, [x23, #0x70b]
0x06A771E0: f40303aa  mov x20, x3
0x06A771E4: f60302aa  mov x22, x2
0x06A771E8: f30301aa  mov x19, x1
0x06A771EC: f50300aa  mov x21, x0
0x06A771F0: a8020037  tbnz w8, #0, #0x6a77244
0x06A771F4: c06500d0  adrp x0, #0x7731000
0x06A771F8: 00f842f9  ldr x0, [x0, #0x5f0]
0x06A771FC: 07261c97  bl #0x3180a18
0x06A77200: c06500d0  adrp x0, #0x7731000
0x06A77204: 00ec42f9  ldr x0, [x0, #0x5d8]
0x06A77208: 04261c97  bl #0x3180a18
0x06A7720C: c0650090  adrp x0, #0x772f000
0x06A77210: 009c47f9  ldr x0, [x0, #0xf38]
0x06A77214: 01261c97  bl #0x3180a18
0x06A77218: c06500d0  adrp x0, #0x7731000
0x06A7721C: 00fc42f9  ldr x0, [x0, #0x5f8]
0x06A77220: fe251c97  bl #0x3180a18
0x06A77224: c06500d0  adrp x0, #0x7731000
0x06A77228: 00f442f9  ldr x0, [x0, #0x5e8]
0x06A7722C: fb251c97  bl #0x3180a18
0x06A77230: c05e0090  adrp x0, #0x764f000
0x06A77234: 00ac40f9  ldr x0, [x0, #0x158]
0x06A77238: f8251c97  bl #0x3180a18
0x06A7723C: 28008052  movz w8, #0x1
0x06A77240: e82e1c39  strb w8, [x23, #0x70b]
0x06A77244: e0030091  mov x0, sp
0x06A77248: 020a8052  movz w2, #0x50
0x06A7724C: e10316aa  mov x1, x22
0x06A77250: c85d1d94  bl #0x71ce970
0x06A77254: 940800b4  cbz x20, #0x6a77364
0x06A77258: c8650090  adrp x8, #0x772f000
0x06A7725C: 089d47f9  ldr x8, [x8, #0xf38]
0x06A77260: d76500d0  adrp x23, #0x7731000
0x06A77264: e0430191  add x0, sp, #0x50
0x06A77268: e1030091  mov x1, sp
0x06A7726C: 160140f9  ldr x22, [x8]
0x06A77270: f7fa42f9  ldr x23, [x23, #0x5f0]
0x06A77274: 020a8052  movz w2, #0x50
0x06A77278: be5d1d94  bl #0x71ce970
0x06A7727C: e1430191  add x1, sp, #0x50
0x06A77280: e00314aa  mov x0, x20
0x06A77284: e20316aa  mov x2, x22
0x06A77288: 909a4697  bl #0x3c1dcc8
0x06A7728C: e00240f9  ldr x0, [x23]
0x06A77290: 760a40f9  ldr x22, [x19, #0x10]
0x06A77294: 83261c97  bl #0x3180ca0
0x06A77298: e1031faa  mov x1, xzr
0x06A7729C: f70300aa  mov x23, x0
0x06A772A0: d28b0094  bl #0x6a9a1e8
0x06A772A4: 170600b4  cbz x23, #0x6a77364
0x06A772A8: d85e0090  adrp x24, #0x764f000
0x06A772AC: 18af40f9  ldr x24, [x24, #0x158]
0x06A772B0: e00317aa  mov x0, x23
0x06A772B4: 140c01f8  str x20, [x0, #0x10]!
0x06A772B8: e10314aa  mov x1, x20
0x06A772BC: c2251c97  bl #0x31809c4
0x06A772C0: 020340f9  ldr x2, [x24]
0x06A772C4: a10a40f9  ldr x1, [x21, #0x10]
0x06A772C8: e00314aa  mov x0, x20
0x06A772CC: e5031faa  mov x5, xzr
0x06A772D0: e30302aa  mov x3, x2
0x06A772D4: e40302aa  mov x4, x2
0x06A772D8: 97af0094  bl #0x6aa3134
0x06A772DC: e10300aa  mov x1, x0
0x06A772E0: e00317aa  mov x0, x23
0x06A772E4: 018c01f8  str x1, [x0, #0x18]!
0x06A772E8: b7251c97  bl #0x31809c4
0x06A772EC: d60300b4  cbz x22, #0x6a77364
0x06A772F0: c86500d0  adrp x8, #0x7731000
0x06A772F4: 08fd42f9  ldr x8, [x8, #0x5f8]
0x06A772F8: d46500d0  adrp x20, #0x7731000
0x06A772FC: e00316aa  mov x0, x22
0x06A77300: e10317aa  mov x1, x23
0x06A77304: 020140f9  ldr x2, [x8]
0x06A77308: 94ee42f9  ldr x20, [x20, #0x5d8]
0x06A7730C: 36304d97  bl #0x3dc33e4
0x06A77310: 800240f9  ldr x0, [x20]
0x06A77314: 730a40f9  ldr x19, [x19, #0x10]
0x06A77318: 62261c97  bl #0x3180ca0
0x06A7731C: e1031faa  mov x1, xzr
0x06A77320: f40300aa  mov x20, x0
0x06A77324: e88b0094  bl #0x6a9a2c4
0x06A77328: f40100b4  cbz x20, #0x6a77364
0x06A7732C: 9f420039  strb wzr, [x20, #0x10]
0x06A77330: b30100b4  cbz x19, #0x6a77364
0x06A77334: c86500d0  adrp x8, #0x7731000
0x06A77338: 08f542f9  ldr x8, [x8, #0x5e8]
0x06A7733C: e00313aa  mov x0, x19
0x06A77340: e10314aa  mov x1, x20
0x06A77344: 020140f9  ldr x2, [x8]
0x06A77348: 27304d97  bl #0x3dc33e4
0x06A7734C: f44f4da9  ldp x20, x19, [sp, #0xd0]
0x06A77350: f6574ca9  ldp x22, x21, [sp, #0xc0]
0x06A77354: f85f4ba9  ldp x24, x23, [sp, #0xb0]
0x06A77358: fe5340f9  ldr x30, [sp, #0xa0]
0x06A7735C: ff830391  add sp, sp, #0xe0
0x06A77360: c0035fd6  ret
0x06A77364: 52261c97  bl #0x3180cac

; RVA 0x6A77368 | public void .ctor() { }
; bytes=8 sha256=3c345cda2751a8d5ad29e1c822f14cb89824e702add8f822b3fb2f4d9d2c15cb status=arm64_complete_bound indexed_start=True
0x06A77368: e1031faa  mov x1, xzr
0x06A7736C: a48cb117  b #0x56da5fc

