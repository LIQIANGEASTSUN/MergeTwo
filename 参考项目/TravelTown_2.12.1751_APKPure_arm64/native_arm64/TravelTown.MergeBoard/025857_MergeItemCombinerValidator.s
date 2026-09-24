; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25857 Merger.MergeBoard.Logic.CombineValidators.MergeItemCombinerValidator
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A87644 | public bool CanCombineItems(Entity entity1, Entity entity2) { }
; bytes=476 sha256=584272405cbcd163ffe25f696e7def648d7d9d300debe79cc53325f79d12aaaf status=arm64_complete_bound indexed_start=True
0x06A87644: ff4307d1  sub sp, sp, #0x1d0
0x06A87648: fd7b1aa9  stp x29, x30, [sp, #0x1a0]
0x06A8764C: f6571ba9  stp x22, x21, [sp, #0x1b0]
0x06A87650: f44f1ca9  stp x20, x19, [sp, #0x1c0]
0x06A87654: 169500f0  adrp x22, #0x7d2a000
0x06A87658: c89a5e39  ldrb w8, [x22, #0x7a6]
0x06A8765C: f40302aa  mov x20, x2
0x06A87660: f50301aa  mov x21, x1
0x06A87664: f30300aa  mov x19, x0
0x06A87668: 88010037  tbnz w8, #0, #0x6a87698
0x06A8766C: 805f00f0  adrp x0, #0x767a000
0x06A87670: 004442f9  ldr x0, [x0, #0x488]
0x06A87674: e9e41b97  bl #0x3180a18
0x06A87678: 805f00f0  adrp x0, #0x767a000
0x06A8767C: 009042f9  ldr x0, [x0, #0x520]
0x06A87680: e6e41b97  bl #0x3180a18
0x06A87684: 406500d0  adrp x0, #0x7731000
0x06A87688: 00ac43f9  ldr x0, [x0, #0x758]
0x06A8768C: e3e41b97  bl #0x3180a18
0x06A87690: 28008052  movz w8, #0x1
0x06A87694: c89a1e39  strb w8, [x22, #0x7a6]
0x06A87698: e0031f2a  mov w0, wzr
0x06A8769C: ff7f19a9  stp xzr, xzr, [sp, #0x190]
0x06A876A0: ff7f18a9  stp xzr, xzr, [sp, #0x180]
0x06A876A4: ffff16a9  stp xzr, xzr, [sp, #0x168]
0x06A876A8: ff7b01b9  str wzr, [sp, #0x178]
0x06A876AC: ff7f15a9  stp xzr, xzr, [sp, #0x150]
0x06A876B0: ff6301b9  str wzr, [sp, #0x160]
0x06A876B4: d50800b4  cbz x21, #0x6a877cc
0x06A876B8: b40800b4  cbz x20, #0x6a877cc
0x06A876BC: 566500d0  adrp x22, #0x7731000
0x06A876C0: d6ae43f9  ldr x22, [x22, #0x758]
0x06A876C4: e1430691  add x1, sp, #0x190
0x06A876C8: e00315aa  mov x0, x21
0x06A876CC: c20240f9  ldr x2, [x22]
0x06A876D0: ab5f4697  bl #0x3c1f57c
0x06A876D4: a0070036  tbz w0, #0, #0x6a877c8
0x06A876D8: c20240f9  ldr x2, [x22]
0x06A876DC: e1030691  add x1, sp, #0x180
0x06A876E0: e00314aa  mov x0, x20
0x06A876E4: a65f4697  bl #0x3c1f57c
0x06A876E8: 00070036  tbz w0, #0, #0x6a877c8
0x06A876EC: 965f00f0  adrp x22, #0x767a000
0x06A876F0: d69242f9  ldr x22, [x22, #0x520]
0x06A876F4: e1a30591  add x1, sp, #0x168
0x06A876F8: e00315aa  mov x0, x21
0x06A876FC: c20240f9  ldr x2, [x22]
0x06A87700: 825b4697  bl #0x3c1e508
0x06A87704: 40010036  tbz w0, #0, #0x6a8772c
0x06A87708: c20240f9  ldr x2, [x22]
0x06A8770C: e1430591  add x1, sp, #0x150
0x06A87710: e00314aa  mov x0, x20
0x06A87714: 7d5b4697  bl #0x3c1e508
0x06A87718: a0000036  tbz w0, #0, #0x6a8772c
0x06A8771C: e8a34539  ldrb w8, [sp, #0x168]
0x06A87720: e9434539  ldrb w9, [sp, #0x150]
0x06A87724: 0801092a  orr w8, w8, w9
0x06A87728: 08050035  cbnz w8, #0x6a877c8
0x06A8772C: 965f00f0  adrp x22, #0x767a000
0x06A87730: d64642f9  ldr x22, [x22, #0x488]
0x06A87734: e8c30391  add x8, sp, #0xf0
0x06A87738: e00315aa  mov x0, x21
0x06A8773C: c10240f9  ldr x1, [x22]
0x06A87740: c44e4697  bl #0x3c1b250
0x06A87744: e08747ad  ldp q0, q1, [sp, #0xf0]
0x06A87748: e247c03d  ldr q2, [sp, #0x110]
0x06A8774C: c10240f9  ldr x1, [x22]
0x06A87750: e8030391  add x8, sp, #0xc0
0x06A87754: e00314aa  mov x0, x20
0x06A87758: e00709ad  stp q0, q1, [sp, #0x120]
0x06A8775C: e253803d  str q2, [sp, #0x140]
0x06A87760: bc4e4697  bl #0x3c1b250
0x06A87764: e31349ad  ldp q3, q4, [sp, #0x120]
0x06A87768: e18346ad  ldp q1, q0, [sp, #0xd0]
0x06A8776C: e233c03d  ldr q2, [sp, #0xc0]
0x06A87770: e10b59a9  ldp x1, x2, [sp, #0x190]
0x06A87774: e31358a9  ldp x3, x4, [sp, #0x180]
0x06A87778: e39304ad  stp q3, q4, [sp, #0x90]
0x06A8777C: e353c03d  ldr q3, [sp, #0x140]
0x06A87780: e5430291  add x5, sp, #0x90
0x06A87784: e6830191  add x6, sp, #0x60
0x06A87788: e00313aa  mov x0, x19
0x06A8778C: e10308ad  stp q1, q0, [sp, #0x100]
0x06A87790: e23f803d  str q2, [sp, #0xf0]
0x06A87794: e32f803d  str q3, [sp, #0xb0]
0x06A87798: e20703ad  stp q2, q1, [sp, #0x60]
0x06A8779C: e023803d  str q0, [sp, #0x80]
0x06A877A0: 20000094  bl #0x6a87820
0x06A877A4: 60000036  tbz w0, #0, #0x6a877b0
0x06A877A8: 20008052  movz w0, #0x1
0x06A877AC: 08000014  b #0x6a877cc
0x06A877B0: e00315aa  mov x0, x21
0x06A877B4: 4cfcff97  bl #0x6a868e4
0x06A877B8: 80000037  tbnz w0, #0, #0x6a877c8
0x06A877BC: e00314aa  mov x0, x20
0x06A877C0: 49fcff97  bl #0x6a868e4
0x06A877C4: 00010036  tbz w0, #0, #0x6a877e4
0x06A877C8: e0031f2a  mov w0, wzr
0x06A877CC: f44f5ca9  ldp x20, x19, [sp, #0x1c0]
0x06A877D0: f6575ba9  ldp x22, x21, [sp, #0x1b0]
0x06A877D4: fd7b5aa9  ldp x29, x30, [sp, #0x1a0]
0x06A877D8: 00000012  and w0, w0, #1
0x06A877DC: ff430791  add sp, sp, #0x1d0
0x06A877E0: c0035fd6  ret
0x06A877E4: e00749ad  ldp q0, q1, [sp, #0x120]
0x06A877E8: e253c03d  ldr q2, [sp, #0x140]
0x06A877EC: e10b59a9  ldp x1, x2, [sp, #0x190]
0x06A877F0: e31358a9  ldp x3, x4, [sp, #0x180]
0x06A877F4: e08701ad  stp q0, q1, [sp, #0x30]
0x06A877F8: e08747ad  ldp q0, q1, [sp, #0xf0]
0x06A877FC: e217803d  str q2, [sp, #0x50]
0x06A87800: e247c03d  ldr q2, [sp, #0x110]
0x06A87804: e5c30091  add x5, sp, #0x30
0x06A87808: e6030091  mov x6, sp
0x06A8780C: e00313aa  mov x0, x19
0x06A87810: e00700ad  stp q0, q1, [sp]
0x06A87814: e20b803d  str q2, [sp, #0x20]
0x06A87818: 5e000094  bl #0x6a87990
0x06A8781C: ecffff17  b #0x6a877cc

; RVA 0x6A87B20 | public void ToggleVisuals(IVisualComponent draggedItem, IVisualComponent overlapItemOnDragAction, bool toggle) { }
; bytes=376 sha256=8a66c32bd731d20cbe47ae8f5c6d21cd7efa58b422e8246f1a3e3e54558ec25e status=arm64_complete_bound indexed_start=True
0x06A87B20: fe0f1df8  str x30, [sp, #-0x30]!
0x06A87B24: f65701a9  stp x22, x21, [sp, #0x10]
0x06A87B28: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A87B2C: 169500f0  adrp x22, #0x7d2a000
0x06A87B30: c89e5e39  ldrb w8, [x22, #0x7a7]
0x06A87B34: f303032a  mov w19, w3
0x06A87B38: f50302aa  mov x21, x2
0x06A87B3C: f40301aa  mov x20, x1
0x06A87B40: c8000037  tbnz w8, #0, #0x6a87b58
0x06A87B44: c06100d0  adrp x0, #0x76c1000
0x06A87B48: 00c446f9  ldr x0, [x0, #0xd88]
0x06A87B4C: b3e31b97  bl #0x3180a18
0x06A87B50: 28008052  movz w8, #0x1
0x06A87B54: c89e1e39  strb w8, [x22, #0x7a7]
0x06A87B58: f50900b4  cbz x21, #0x6a87c94
0x06A87B5C: d66100d0  adrp x22, #0x76c1000
0x06A87B60: a80240f9  ldr x8, [x21]
0x06A87B64: d6c646f9  ldr x22, [x22, #0xd88]
0x06A87B68: 095d4279  ldrh w9, [x8, #0x12e]
0x06A87B6C: c10240f9  ldr x1, [x22]
0x06A87B70: 290100b4  cbz x9, #0x6a87b94
0x06A87B74: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A87B78: 4a210091  add x10, x10, #8
0x06A87B7C: 4b815ff8  ldur x11, [x10, #-8]
0x06A87B80: 7f0101eb  cmp x11, x1
0x06A87B84: 00010054  b.eq #0x6a87ba4
0x06A87B88: 290500f1  subs x9, x9, #1
0x06A87B8C: 4a410091  add x10, x10, #0x10
0x06A87B90: 61ffff54  b.ne #0x6a87b7c
0x06A87B94: e20b8052  movz w2, #0x5f
0x06A87B98: e00315aa  mov x0, x21
0x06A87B9C: dd3b1b97  bl #0x3156b10
0x06A87BA0: 05000014  b #0x6a87bb4
0x06A87BA4: 490140b9  ldr w9, [x10]
0x06A87BA8: 297d0111  add w9, w9, #0x5f
0x06A87BAC: 08d1298b  add x8, x8, w9, sxtw #4
0x06A87BB0: 00e10491  add x0, x8, #0x138
0x06A87BB4: 080840a9  ldp x8, x2, [x0]
0x06A87BB8: 61020012  and w1, w19, #1
0x06A87BBC: e00315aa  mov x0, x21
0x06A87BC0: 00013fd6  blr x8
0x06A87BC4: a80240f9  ldr x8, [x21]
0x06A87BC8: c10240f9  ldr x1, [x22]
0x06A87BCC: 095d4279  ldrh w9, [x8, #0x12e]
0x06A87BD0: 290100b4  cbz x9, #0x6a87bf4
0x06A87BD4: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A87BD8: 4a210091  add x10, x10, #8
0x06A87BDC: 4b815ff8  ldur x11, [x10, #-8]
0x06A87BE0: 7f0101eb  cmp x11, x1
0x06A87BE4: 00010054  b.eq #0x6a87c04
0x06A87BE8: 290500f1  subs x9, x9, #1
0x06A87BEC: 4a410091  add x10, x10, #0x10
0x06A87BF0: 61ffff54  b.ne #0x6a87bdc
0x06A87BF4: 22018052  movz w2, #0x9
0x06A87BF8: e00315aa  mov x0, x21
0x06A87BFC: c53b1b97  bl #0x3156b10
0x06A87C00: 05000014  b #0x6a87c14
0x06A87C04: 490140b9  ldr w9, [x10]
0x06A87C08: 29250011  add w9, w9, #9
0x06A87C0C: 08d1298b  add x8, x8, w9, sxtw #4
0x06A87C10: 00e10491  add x0, x8, #0x138
0x06A87C14: 080840a9  ldp x8, x2, [x0]
0x06A87C18: 61020012  and w1, w19, #1
0x06A87C1C: e00315aa  mov x0, x21
0x06A87C20: 00013fd6  blr x8
0x06A87C24: 940300b4  cbz x20, #0x6a87c94
0x06A87C28: 880240f9  ldr x8, [x20]
0x06A87C2C: c10240f9  ldr x1, [x22]
0x06A87C30: 095d4279  ldrh w9, [x8, #0x12e]
0x06A87C34: 290100b4  cbz x9, #0x6a87c58
0x06A87C38: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A87C3C: 4a210091  add x10, x10, #8
0x06A87C40: 4b815ff8  ldur x11, [x10, #-8]
0x06A87C44: 7f0101eb  cmp x11, x1
0x06A87C48: 00010054  b.eq #0x6a87c68
0x06A87C4C: 290500f1  subs x9, x9, #1
0x06A87C50: 4a410091  add x10, x10, #0x10
0x06A87C54: 61ffff54  b.ne #0x6a87c40
0x06A87C58: 22018052  movz w2, #0x9
0x06A87C5C: e00314aa  mov x0, x20
0x06A87C60: ac3b1b97  bl #0x3156b10
0x06A87C64: 05000014  b #0x6a87c78
0x06A87C68: 490140b9  ldr w9, [x10]
0x06A87C6C: 29250011  add w9, w9, #9
0x06A87C70: 08d1298b  add x8, x8, w9, sxtw #4
0x06A87C74: 00e10491  add x0, x8, #0x138
0x06A87C78: 030840a9  ldp x3, x2, [x0]
0x06A87C7C: 61020012  and w1, w19, #1
0x06A87C80: e00314aa  mov x0, x20
0x06A87C84: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A87C88: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A87C8C: fe0743f8  ldr x30, [sp], #0x30
0x06A87C90: 60001fd6  br x3
0x06A87C94: 06e41b97  bl #0x3180cac

; RVA 0x6A87820 | private bool CanMergeSame(MergeComponent item1, MergeComponent item2, IdComponent id1, IdComponent id2) { }
; bytes=368 sha256=cef73371d317a359ae2ad7c837c13351e499f352ae9016e5a9044ecd05eaf8f5 status=arm64_complete_bound indexed_start=True
0x06A87820: fe0f1cf8  str x30, [sp, #-0x40]!
0x06A87824: f85f01a9  stp x24, x23, [sp, #0x10]
0x06A87828: f65702a9  stp x22, x21, [sp, #0x20]
0x06A8782C: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A87830: 189500f0  adrp x24, #0x7d2a000
0x06A87834: 08a35e39  ldrb w8, [x24, #0x7a8]
0x06A87838: f50306aa  mov x21, x6
0x06A8783C: f40305aa  mov x20, x5
0x06A87840: f60303aa  mov x22, x3
0x06A87844: f70301aa  mov x23, x1
0x06A87848: f30300aa  mov x19, x0
0x06A8784C: 28010037  tbnz w8, #0, #0x6a87870
0x06A87850: 805f00f0  adrp x0, #0x767a000
0x06A87854: 004c42f9  ldr x0, [x0, #0x498]
0x06A87858: 70e41b97  bl #0x3180a18
0x06A8785C: 805f00d0  adrp x0, #0x7679000
0x06A87860: 001044f9  ldr x0, [x0, #0x820]
0x06A87864: 6de41b97  bl #0x3180a18
0x06A87868: 28008052  movz w8, #0x1
0x06A8786C: 08a31e39  strb w8, [x24, #0x7a8]
0x06A87870: e802162a  orr w8, w23, w22
0x06A87874: 68030035  cbnz w8, #0x6a878e0
0x06A87878: 800240f9  ldr x0, [x20]
0x06A8787C: a10240f9  ldr x1, [x21]
0x06A87880: e2031faa  mov x2, xzr
0x06A87884: fb8ba997  bl #0x54ea870
0x06A87888: c0020036  tbz w0, #0, #0x6a878e0
0x06A8788C: 730a40f9  ldr x19, [x19, #0x10]
0x06A87890: f30700b4  cbz x19, #0x6a8798c
0x06A87894: 8a5f00f0  adrp x10, #0x767a000
0x06A87898: 680240f9  ldr x8, [x19]
0x06A8789C: 940240f9  ldr x20, [x20]
0x06A878A0: 4a4d42f9  ldr x10, [x10, #0x498]
0x06A878A4: 095d4279  ldrh w9, [x8, #0x12e]
0x06A878A8: 410140f9  ldr x1, [x10]
0x06A878AC: 290100b4  cbz x9, #0x6a878d0
0x06A878B0: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A878B4: 4a210091  add x10, x10, #8
0x06A878B8: 4b815ff8  ldur x11, [x10, #-8]
0x06A878BC: 7f0101eb  cmp x11, x1
0x06A878C0: c0010054  b.eq #0x6a878f8
0x06A878C4: 290500f1  subs x9, x9, #1
0x06A878C8: 4a410091  add x10, x10, #0x10
0x06A878CC: 61ffff54  b.ne #0x6a878b8
0x06A878D0: a2018052  movz w2, #0xd
0x06A878D4: e00313aa  mov x0, x19
0x06A878D8: 8e3c1b97  bl #0x3156b10
0x06A878DC: 0b000014  b #0x6a87908
0x06A878E0: e0031f2a  mov w0, wzr
0x06A878E4: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A878E8: f65742a9  ldp x22, x21, [sp, #0x20]
0x06A878EC: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06A878F0: fe0744f8  ldr x30, [sp], #0x40
0x06A878F4: c0035fd6  ret
0x06A878F8: 490140b9  ldr w9, [x10]
0x06A878FC: 29350011  add w9, w9, #0xd
0x06A87900: 08d1298b  add x8, x8, w9, sxtw #4
0x06A87904: 00e10491  add x0, x8, #0x138
0x06A87908: 080840a9  ldp x8, x2, [x0]
0x06A8790C: e00313aa  mov x0, x19
0x06A87910: e10314aa  mov x1, x20
0x06A87914: 00013fd6  blr x8
0x06A87918: 60feffb4  cbz x0, #0x6a878e4
0x06A8791C: 8a5f00d0  adrp x10, #0x7679000
0x06A87920: 080040f9  ldr x8, [x0]
0x06A87924: 4a1144f9  ldr x10, [x10, #0x820]
0x06A87928: f30300aa  mov x19, x0
0x06A8792C: 095d4279  ldrh w9, [x8, #0x12e]
0x06A87930: 410140f9  ldr x1, [x10]
0x06A87934: 290100b4  cbz x9, #0x6a87958
0x06A87938: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A8793C: 4a210091  add x10, x10, #8
0x06A87940: 4b815ff8  ldur x11, [x10, #-8]
0x06A87944: 7f0101eb  cmp x11, x1
0x06A87948: 00010054  b.eq #0x6a87968
0x06A8794C: 290500f1  subs x9, x9, #1
0x06A87950: 4a410091  add x10, x10, #0x10
0x06A87954: 61ffff54  b.ne #0x6a87940
0x06A87958: e00313aa  mov x0, x19
0x06A8795C: e2031f2a  mov w2, wzr
0x06A87960: 6c3c1b97  bl #0x3156b10
0x06A87964: 04000014  b #0x6a87974
0x06A87968: 490180b9  ldrsw x9, [x10]
0x06A8796C: 0811098b  add x8, x8, x9, lsl #4
0x06A87970: 00e10491  add x0, x8, #0x138
0x06A87974: 080440a9  ldp x8, x1, [x0]
0x06A87978: e00313aa  mov x0, x19
0x06A8797C: 00013fd6  blr x8
0x06A87980: 1f0000f1  cmp x0, #0
0x06A87984: e0079f1a  cset w0, ne
0x06A87988: d7ffff17  b #0x6a878e4
0x06A8798C: c8e41b97  bl #0x3180cac

; RVA 0x6A87990 | private bool CanMergeSpecificItem(MergeComponent firstMerge, MergeComponent secondMerge, IdComponent id1, IdComponent id2) { }
; bytes=400 sha256=e3c62d4c06c7b06aa5bfd90a6b2888cada42783d31e0f4ec2b493e83b1e8a5f7 status=arm64_complete_bound indexed_start=True
0x06A87990: fe0f1bf8  str x30, [sp, #-0x50]!
0x06A87994: fa6701a9  stp x26, x25, [sp, #0x10]
0x06A87998: f85f02a9  stp x24, x23, [sp, #0x20]
0x06A8799C: f65703a9  stp x22, x21, [sp, #0x30]
0x06A879A0: f44f04a9  stp x20, x19, [sp, #0x40]
0x06A879A4: 1a9500f0  adrp x26, #0x7d2a000
0x06A879A8: 48a75e39  ldrb w8, [x26, #0x7a9]
0x06A879AC: f30306aa  mov x19, x6
0x06A879B0: f60305aa  mov x22, x5
0x06A879B4: f70304aa  mov x23, x4
0x06A879B8: f80303aa  mov x24, x3
0x06A879BC: f50302aa  mov x21, x2
0x06A879C0: f90301aa  mov x25, x1
0x06A879C4: f40300aa  mov x20, x0
0x06A879C8: 28010037  tbnz w8, #0, #0x6a879ec
0x06A879CC: 805f00f0  adrp x0, #0x767a000
0x06A879D0: 004c42f9  ldr x0, [x0, #0x498]
0x06A879D4: 11e41b97  bl #0x3180a18
0x06A879D8: 805f00d0  adrp x0, #0x7679000
0x06A879DC: 001044f9  ldr x0, [x0, #0x820]
0x06A879E0: 0ee41b97  bl #0x3180a18
0x06A879E4: 28008052  movz w8, #0x1
0x06A879E8: 48a71e39  strb w8, [x26, #0x7a9]
0x06A879EC: 3f0f0071  cmp w25, #3
0x06A879F0: a0000054  b.eq #0x6a87a04
0x06A879F4: 1f0f0071  cmp w24, #3
0x06A879F8: f50317aa  mov x21, x23
0x06A879FC: f30316aa  mov x19, x22
0x06A87A00: 61030054  b.ne #0x6a87a6c
0x06A87A04: 730240f9  ldr x19, [x19]
0x06A87A08: e10315aa  mov x1, x21
0x06A87A0C: e2031faa  mov x2, xzr
0x06A87A10: e00313aa  mov x0, x19
0x06A87A14: 978ba997  bl #0x54ea870
0x06A87A18: a0020036  tbz w0, #0, #0x6a87a6c
0x06A87A1C: 940a40f9  ldr x20, [x20, #0x10]
0x06A87A20: f40700b4  cbz x20, #0x6a87b1c
0x06A87A24: 8a5f00f0  adrp x10, #0x767a000
0x06A87A28: 880240f9  ldr x8, [x20]
0x06A87A2C: 4a4d42f9  ldr x10, [x10, #0x498]
0x06A87A30: 095d4279  ldrh w9, [x8, #0x12e]
0x06A87A34: 410140f9  ldr x1, [x10]
0x06A87A38: 290100b4  cbz x9, #0x6a87a5c
0x06A87A3C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A87A40: 4a210091  add x10, x10, #8
0x06A87A44: 4b815ff8  ldur x11, [x10, #-8]
0x06A87A48: 7f0101eb  cmp x11, x1
0x06A87A4C: 40010054  b.eq #0x6a87a74
0x06A87A50: 290500f1  subs x9, x9, #1
0x06A87A54: 4a410091  add x10, x10, #0x10
0x06A87A58: 61ffff54  b.ne #0x6a87a44
0x06A87A5C: a2018052  movz w2, #0xd
0x06A87A60: e00314aa  mov x0, x20
0x06A87A64: 2b3c1b97  bl #0x3156b10
0x06A87A68: 07000014  b #0x6a87a84
0x06A87A6C: e0031f2a  mov w0, wzr
0x06A87A70: 25000014  b #0x6a87b04
0x06A87A74: 490140b9  ldr w9, [x10]
0x06A87A78: 29350011  add w9, w9, #0xd
0x06A87A7C: 08d1298b  add x8, x8, w9, sxtw #4
0x06A87A80: 00e10491  add x0, x8, #0x138
0x06A87A84: 080840a9  ldp x8, x2, [x0]
0x06A87A88: e00314aa  mov x0, x20
0x06A87A8C: e10313aa  mov x1, x19
0x06A87A90: 00013fd6  blr x8
0x06A87A94: 800300b4  cbz x0, #0x6a87b04
0x06A87A98: 8a5f00d0  adrp x10, #0x7679000
0x06A87A9C: 080040f9  ldr x8, [x0]
0x06A87AA0: 4a1144f9  ldr x10, [x10, #0x820]
0x06A87AA4: f30300aa  mov x19, x0
0x06A87AA8: 095d4279  ldrh w9, [x8, #0x12e]
0x06A87AAC: 410140f9  ldr x1, [x10]
0x06A87AB0: 290100b4  cbz x9, #0x6a87ad4
0x06A87AB4: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A87AB8: 4a210091  add x10, x10, #8
0x06A87ABC: 4b815ff8  ldur x11, [x10, #-8]
0x06A87AC0: 7f0101eb  cmp x11, x1
0x06A87AC4: 00010054  b.eq #0x6a87ae4
0x06A87AC8: 290500f1  subs x9, x9, #1
0x06A87ACC: 4a410091  add x10, x10, #0x10
0x06A87AD0: 61ffff54  b.ne #0x6a87abc
0x06A87AD4: e00313aa  mov x0, x19
0x06A87AD8: e2031f2a  mov w2, wzr
0x06A87ADC: 0d3c1b97  bl #0x3156b10
0x06A87AE0: 04000014  b #0x6a87af0
0x06A87AE4: 490180b9  ldrsw x9, [x10]
0x06A87AE8: 0811098b  add x8, x8, x9, lsl #4
0x06A87AEC: 00e10491  add x0, x8, #0x138
0x06A87AF0: 080440a9  ldp x8, x1, [x0]
0x06A87AF4: e00313aa  mov x0, x19
0x06A87AF8: 00013fd6  blr x8
0x06A87AFC: 1f0000f1  cmp x0, #0
0x06A87B00: e0079f1a  cset w0, ne
0x06A87B04: f44f44a9  ldp x20, x19, [sp, #0x40]
0x06A87B08: f65743a9  ldp x22, x21, [sp, #0x30]
0x06A87B0C: f85f42a9  ldp x24, x23, [sp, #0x20]
0x06A87B10: fa6741a9  ldp x26, x25, [sp, #0x10]
0x06A87B14: fe0745f8  ldr x30, [sp], #0x50
0x06A87B18: c0035fd6  ret
0x06A87B1C: 64e41b97  bl #0x3180cac

; RVA 0x6A87C98 | public void .ctor() { }
; bytes=8 sha256=d646c224737281fd0dc89a9d6a28f41e7ee47111db7871c1ea7e7f9df2c619b3 status=arm64_complete_bound indexed_start=True
0x06A87C98: e1031faa  mov x1, xzr
0x06A87C9C: 584ab117  b #0x56da5fc

