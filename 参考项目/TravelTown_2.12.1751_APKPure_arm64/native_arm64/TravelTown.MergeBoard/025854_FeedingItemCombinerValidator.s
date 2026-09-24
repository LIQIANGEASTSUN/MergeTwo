; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25854 Merger.MergeBoard.Logic.CombineValidators.FeedingItemCombinerValidator
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A867E0 | public bool CanCombineItems(Entity movedEntity, Entity otherEntity) { }
; bytes=260 sha256=a98ccb3bcd6157194215f3f55d7ef51ae45cb2765526c64f45825c2035a55009 status=arm64_complete_bound indexed_start=True
0x06A867E0: ffc302d1  sub sp, sp, #0xb0
0x06A867E4: fe5709a9  stp x30, x21, [sp, #0x90]
0x06A867E8: f44f0aa9  stp x20, x19, [sp, #0xa0]
0x06A867EC: 35950090  adrp x21, #0x7d2a000
0x06A867F0: a8825e39  ldrb w8, [x21, #0x7a0]
0x06A867F4: f40302aa  mov x20, x2
0x06A867F8: f30301aa  mov x19, x1
0x06A867FC: 88010037  tbnz w8, #0, #0x6a8682c
0x06A86800: a05f0090  adrp x0, #0x767a000
0x06A86804: 004442f9  ldr x0, [x0, #0x488]
0x06A86808: 84e81b97  bl #0x3180a18
0x06A8680C: a05f0090  adrp x0, #0x767a000
0x06A86810: 007c42f9  ldr x0, [x0, #0x4f8]
0x06A86814: 81e81b97  bl #0x3180a18
0x06A86818: 406500b0  adrp x0, #0x772f000
0x06A8681C: 008845f9  ldr x0, [x0, #0xb10]
0x06A86820: 7ee81b97  bl #0x3180a18
0x06A86824: 28008052  movz w8, #0x1
0x06A86828: a8821e39  strb w8, [x21, #0x7a0]
0x06A8682C: e0031f2a  mov w0, wzr
0x06A86830: 00e4006f  movi v0.2d, #0000000000000000
0x06A86834: ff7f08a9  stp xzr, xzr, [sp, #0x80]
0x06A86838: e00303ad  stp q0, q0, [sp, #0x60]
0x06A8683C: b30400b4  cbz x19, #0x6a868d0
0x06A86840: 940400b4  cbz x20, #0x6a868d0
0x06A86844: e00313aa  mov x0, x19
0x06A86848: 27000094  bl #0x6a868e4
0x06A8684C: 00040037  tbnz w0, #0, #0x6a868cc
0x06A86850: e00314aa  mov x0, x20
0x06A86854: 24000094  bl #0x6a868e4
0x06A86858: a0030037  tbnz w0, #0, #0x6a868cc
0x06A8685C: a85f0090  adrp x8, #0x767a000
0x06A86860: 087d42f9  ldr x8, [x8, #0x4f8]
0x06A86864: e1230291  add x1, sp, #0x88
0x06A86868: e00314aa  mov x0, x20
0x06A8686C: 020140f9  ldr x2, [x8]
0x06A86870: 11614697  bl #0x3c1ecb4
0x06A86874: c0020036  tbz w0, #0, #0x6a868cc
0x06A86878: 486500b0  adrp x8, #0x772f000
0x06A8687C: 088945f9  ldr x8, [x8, #0xb10]
0x06A86880: e1830191  add x1, sp, #0x60
0x06A86884: e00314aa  mov x0, x20
0x06A86888: 020140f9  ldr x2, [x8]
0x06A8688C: e3614697  bl #0x3c1f018
0x06A86890: e0010036  tbz w0, #0, #0x6a868cc
0x06A86894: a85f0090  adrp x8, #0x767a000
0x06A86898: 084542f9  ldr x8, [x8, #0x488]
0x06A8689C: e00313aa  mov x0, x19
0x06A868A0: 010140f9  ldr x1, [x8]
0x06A868A4: e8c30091  add x8, sp, #0x30
0x06A868A8: 6a524697  bl #0x3c1b250
0x06A868AC: e31b40f9  ldr x3, [sp, #0x30]
0x06A868B0: e00743ad  ldp q0, q1, [sp, #0x60]
0x06A868B4: e80748a9  ldp x8, x1, [sp, #0x80]
0x06A868B8: e2030091  mov x2, sp
0x06A868BC: e00700ad  stp q0, q1, [sp]
0x06A868C0: e81300f9  str x8, [sp, #0x20]
0x06A868C4: 35000094  bl #0x6a86998
0x06A868C8: 02000014  b #0x6a868d0
0x06A868CC: e0031f2a  mov w0, wzr
0x06A868D0: f44f4aa9  ldp x20, x19, [sp, #0xa0]
0x06A868D4: fe5749a9  ldp x30, x21, [sp, #0x90]
0x06A868D8: 00000012  and w0, w0, #1
0x06A868DC: ffc30291  add sp, sp, #0xb0
0x06A868E0: c0035fd6  ret

; RVA 0x6A86A58 | public void ToggleVisuals(IVisualComponent draggedItem, IVisualComponent overlapItemOnDragAction, bool toggle) { }
; bytes=264 sha256=b6ac305606425b3b501b868f9f03263247c6509a6edfe26dc0492b8897df3b1b status=arm64_complete_bound indexed_start=True
0x06A86A58: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A86A5C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A86A60: 35950090  adrp x21, #0x7d2a000
0x06A86A64: a8865e39  ldrb w8, [x21, #0x7a1]
0x06A86A68: f303032a  mov w19, w3
0x06A86A6C: f40302aa  mov x20, x2
0x06A86A70: c8000037  tbnz w8, #0, #0x6a86a88
0x06A86A74: c06100f0  adrp x0, #0x76c1000
0x06A86A78: 00c446f9  ldr x0, [x0, #0xd88]
0x06A86A7C: e7e71b97  bl #0x3180a18
0x06A86A80: 28008052  movz w8, #0x1
0x06A86A84: a8861e39  strb w8, [x21, #0x7a1]
0x06A86A88: b40600b4  cbz x20, #0x6a86b5c
0x06A86A8C: d56100f0  adrp x21, #0x76c1000
0x06A86A90: 880240f9  ldr x8, [x20]
0x06A86A94: b5c646f9  ldr x21, [x21, #0xd88]
0x06A86A98: 095d4279  ldrh w9, [x8, #0x12e]
0x06A86A9C: a10240f9  ldr x1, [x21]
0x06A86AA0: 290100b4  cbz x9, #0x6a86ac4
0x06A86AA4: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A86AA8: 4a210091  add x10, x10, #8
0x06A86AAC: 4b815ff8  ldur x11, [x10, #-8]
0x06A86AB0: 7f0101eb  cmp x11, x1
0x06A86AB4: 00010054  b.eq #0x6a86ad4
0x06A86AB8: 290500f1  subs x9, x9, #1
0x06A86ABC: 4a410091  add x10, x10, #0x10
0x06A86AC0: 61ffff54  b.ne #0x6a86aac
0x06A86AC4: e20b8052  movz w2, #0x5f
0x06A86AC8: e00314aa  mov x0, x20
0x06A86ACC: 11401b97  bl #0x3156b10
0x06A86AD0: 05000014  b #0x6a86ae4
0x06A86AD4: 490140b9  ldr w9, [x10]
0x06A86AD8: 297d0111  add w9, w9, #0x5f
0x06A86ADC: 08d1298b  add x8, x8, w9, sxtw #4
0x06A86AE0: 00e10491  add x0, x8, #0x138
0x06A86AE4: 080840a9  ldp x8, x2, [x0]
0x06A86AE8: 61020012  and w1, w19, #1
0x06A86AEC: e00314aa  mov x0, x20
0x06A86AF0: 00013fd6  blr x8
0x06A86AF4: 880240f9  ldr x8, [x20]
0x06A86AF8: a10240f9  ldr x1, [x21]
0x06A86AFC: 095d4279  ldrh w9, [x8, #0x12e]
0x06A86B00: 290100b4  cbz x9, #0x6a86b24
0x06A86B04: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A86B08: 4a210091  add x10, x10, #8
0x06A86B0C: 4b815ff8  ldur x11, [x10, #-8]
0x06A86B10: 7f0101eb  cmp x11, x1
0x06A86B14: 00010054  b.eq #0x6a86b34
0x06A86B18: 290500f1  subs x9, x9, #1
0x06A86B1C: 4a410091  add x10, x10, #0x10
0x06A86B20: 61ffff54  b.ne #0x6a86b0c
0x06A86B24: e2038052  movz w2, #0x1f
0x06A86B28: e00314aa  mov x0, x20
0x06A86B2C: f93f1b97  bl #0x3156b10
0x06A86B30: 05000014  b #0x6a86b44
0x06A86B34: 490140b9  ldr w9, [x10]
0x06A86B38: 297d0011  add w9, w9, #0x1f
0x06A86B3C: 08d1298b  add x8, x8, w9, sxtw #4
0x06A86B40: 00e10491  add x0, x8, #0x138
0x06A86B44: 030840a9  ldp x3, x2, [x0]
0x06A86B48: 61020012  and w1, w19, #1
0x06A86B4C: e00314aa  mov x0, x20
0x06A86B50: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A86B54: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A86B58: 60001fd6  br x3
0x06A86B5C: 54e81b97  bl #0x3180cac

; RVA 0x6A86998 | private bool CanFeed(FeedingCombinationComponent feedingCombinationComponent, InteractionComponent interactionComponent, string itemId) { }
; bytes=192 sha256=51f45bda43c5cde1834b307cc8cad21b33c29ef5d15d78c06dfcf84943285ae7 status=arm64_complete_bound indexed_start=True
0x06A86998: ff8301d1  sub sp, sp, #0x60
0x06A8699C: fe0703a9  stp x30, x1, [sp, #0x30]
0x06A869A0: f65704a9  stp x22, x21, [sp, #0x40]
0x06A869A4: f44f05a9  stp x20, x19, [sp, #0x50]
0x06A869A8: 36950090  adrp x22, #0x7d2a000
0x06A869AC: c88a5e39  ldrb w8, [x22, #0x7a2]
0x06A869B0: f30303aa  mov x19, x3
0x06A869B4: f40302aa  mov x20, x2
0x06A869B8: f50301aa  mov x21, x1
0x06A869BC: 28010037  tbnz w8, #0, #0x6a869e0
0x06A869C0: 00630090  adrp x0, #0x76e6000
0x06A869C4: 009046f9  ldr x0, [x0, #0xd20]
0x06A869C8: 14e81b97  bl #0x3180a18
0x06A869CC: 405e00f0  adrp x0, #0x7651000
0x06A869D0: 002845f9  ldr x0, [x0, #0xa50]
0x06A869D4: 11e81b97  bl #0x3180a18
0x06A869D8: 28008052  movz w8, #0x1
0x06A869DC: c88a1e39  strb w8, [x22, #0x7a2]
0x06A869E0: e0e30091  add x0, sp, #0x38
0x06A869E4: 5f000094  bl #0x6a86b60
0x06A869E8: 600300b4  cbz x0, #0x6a86a54
0x06A869EC: 081840b9  ldr w8, [x0, #0x18]
0x06A869F0: 1f050071  cmp w8, #1
0x06A869F4: 4b010054  b.lt #0x6a86a1c
0x06A869F8: 810a40f9  ldr x1, [x20, #0x10]
0x06A869FC: 14630090  adrp x20, #0x76e6000
0x06A86A00: 949246f9  ldr x20, [x20, #0xd20]
0x06A86A04: e00315aa  mov x0, x21
0x06A86A08: e20313aa  mov x2, x19
0x06A86A0C: 9d000094  bl #0x6a86c80
0x06A86A10: 810240f9  ldr x1, [x20]
0x06A86A14: dcf24697  bl #0x3c43584
0x06A86A18: 08000014  b #0x6a86a38
0x06A86A1C: 881240f9  ldr x8, [x20, #0x20]
0x06A86A20: 810240ad  ldp q1, q0, [x20]
0x06A86A24: e0030091  mov x0, sp
0x06A86A28: e10313aa  mov x1, x19
0x06A86A2C: e81300f9  str x8, [sp, #0x20]
0x06A86A30: e10300ad  stp q1, q0, [sp]
0x06A86A34: 7e010094  bl #0x6a8702c
0x06A86A38: f44f45a9  ldp x20, x19, [sp, #0x50]
0x06A86A3C: f65744a9  ldp x22, x21, [sp, #0x40]
0x06A86A40: fe1b40f9  ldr x30, [sp, #0x30]
0x06A86A44: 1f0000f1  cmp x0, #0
0x06A86A48: e0079f1a  cset w0, ne
0x06A86A4C: ff830191  add sp, sp, #0x60
0x06A86A50: c0035fd6  ret
0x06A86A54: 96e81b97  bl #0x3180cac

; RVA 0x6A87274 | public void .ctor() { }
; bytes=8 sha256=dfaf1d2fd2b77f60165367445b709c1e49c70b138fb80271e0a77af472cf567f status=arm64_complete_bound indexed_start=True
0x06A87274: e1031faa  mov x1, xzr
0x06A87278: e14cb117  b #0x56da5fc

