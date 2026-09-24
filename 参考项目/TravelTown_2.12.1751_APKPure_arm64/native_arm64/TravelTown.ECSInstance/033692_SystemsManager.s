; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 33692 ContextualizedECS.Systems.SystemsManager
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x5F15668 | public void .ctor(List<SystemInfo> systems) { }
; bytes=48 sha256=43ed6b8254e95b8fccc3a797f8cc8a114f3e6cc825b7a103b1fb1567616f9a4f status=arm64_complete_bound indexed_start=True
0x05F15668: fe0f1ef8  str x30, [sp, #-0x20]!
0x05F1566C: f44f01a9  stp x20, x19, [sp, #0x10]
0x05F15670: f30301aa  mov x19, x1
0x05F15674: e1031faa  mov x1, xzr
0x05F15678: f40300aa  mov x20, x0
0x05F1567C: e013df97  bl #0x56da5fc
0x05F15680: 930e01f8  str x19, [x20, #0x10]!
0x05F15684: e00314aa  mov x0, x20
0x05F15688: e10313aa  mov x1, x19
0x05F1568C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x05F15690: fe0742f8  ldr x30, [sp], #0x20
0x05F15694: ccac4917  b #0x31809c4

; RVA 0x5F15720 | public TickArgs Tick(TickArgs tickArgs, IEntitiesHolder entitiesHolder) { }
; bytes=156 sha256=bd6815b4c0ec9e0b09f4d4c715362fe6c38ca3bc1ce19c2a9fdf92b6d8319587 status=arm64_complete_bound indexed_start=True
0x05F15720: ffc301d1  sub sp, sp, #0x70
0x05F15724: fe5f04a9  stp x30, x23, [sp, #0x40]
0x05F15728: f65705a9  stp x22, x21, [sp, #0x50]
0x05F1572C: f44f06a9  stp x20, x19, [sp, #0x60]
0x05F15730: 77f000b0  adrp x23, #0x7d22000
0x05F15734: 36bb0090  adrp x22, #0x7679000
0x05F15738: e8767139  ldrb w8, [x23, #0xc5d]
0x05F1573C: d68a43f9  ldr x22, [x22, #0x710]
0x05F15740: f50302aa  mov x21, x2
0x05F15744: f40301aa  mov x20, x1
0x05F15748: f30300aa  mov x19, x0
0x05F1574C: c8000037  tbnz w8, #0, #0x5f15764
0x05F15750: 20bb0090  adrp x0, #0x7679000
0x05F15754: 008843f9  ldr x0, [x0, #0x710]
0x05F15758: b0ac4997  bl #0x3180a18
0x05F1575C: 28008052  movz w8, #0x1
0x05F15760: e8763139  strb w8, [x23, #0xc5d]
0x05F15764: c00240f9  ldr x0, [x22]
0x05F15768: 00e4006f  movi v0.2d, #0000000000000000
0x05F1576C: e00301ad  stp q0, q0, [sp, #0x20]
0x05F15770: 4cad4997  bl #0x3180ca0
0x05F15774: f60300aa  mov x22, x0
0x05F15778: 11000094  bl #0x5f157bc
0x05F1577C: e0830091  add x0, sp, #0x20
0x05F15780: e10315aa  mov x1, x21
0x05F15784: e20314aa  mov x2, x20
0x05F15788: e30316aa  mov x3, x22
0x05F1578C: 2e000094  bl #0x5f15844
0x05F15790: e00741ad  ldp q0, q1, [sp, #0x20]
0x05F15794: e1030091  mov x1, sp
0x05F15798: e00313aa  mov x0, x19
0x05F1579C: e00700ad  stp q0, q1, [sp]
0x05F157A0: 59000094  bl #0x5f15904
0x05F157A4: e01b40f9  ldr x0, [sp, #0x30]
0x05F157A8: f44f46a9  ldp x20, x19, [sp, #0x60]
0x05F157AC: f65745a9  ldp x22, x21, [sp, #0x50]
0x05F157B0: fe5f44a9  ldp x30, x23, [sp, #0x40]
0x05F157B4: ffc30191  add sp, sp, #0x70
0x05F157B8: c0035fd6  ret

; RVA 0x5F15904 | private void ExecuteSystems(TickContext context) { }
; bytes=1028 sha256=2ebdac1db93a8d465f7f28f5ffca6d164c46b394620670da6a608cfd05c3e7c4 status=arm64_complete_bound indexed_start=True
0x05F15904: ff8303d1  sub sp, sp, #0xe0
0x05F15908: fe4b00f9  str x30, [sp, #0x90]
0x05F1590C: fa670aa9  stp x26, x25, [sp, #0xa0]
0x05F15910: f85f0ba9  stp x24, x23, [sp, #0xb0]
0x05F15914: f6570ca9  stp x22, x21, [sp, #0xc0]
0x05F15918: f44f0da9  stp x20, x19, [sp, #0xd0]
0x05F1591C: 76f000b0  adrp x22, #0x7d22000
0x05F15920: 73bd00d0  adrp x19, #0x76c3000
0x05F15924: c87a7139  ldrb w8, [x22, #0xc5e]
0x05F15928: 738e45f9  ldr x19, [x19, #0xb18]
0x05F1592C: f40301aa  mov x20, x1
0x05F15930: f50300aa  mov x21, x0
0x05F15934: 08030037  tbnz w8, #0, #0x5f15994
0x05F15938: 60bd00d0  adrp x0, #0x76c3000
0x05F1593C: 009045f9  ldr x0, [x0, #0xb20]
0x05F15940: 36ac4997  bl #0x3180a18
0x05F15944: 60bd00d0  adrp x0, #0x76c3000
0x05F15948: 009445f9  ldr x0, [x0, #0xb28]
0x05F1594C: 33ac4997  bl #0x3180a18
0x05F15950: 60bd00d0  adrp x0, #0x76c3000
0x05F15954: 009845f9  ldr x0, [x0, #0xb30]
0x05F15958: 30ac4997  bl #0x3180a18
0x05F1595C: 60bd00d0  adrp x0, #0x76c3000
0x05F15960: 009c45f9  ldr x0, [x0, #0xb38]
0x05F15964: 2dac4997  bl #0x3180a18
0x05F15968: 60bd00d0  adrp x0, #0x76c3000
0x05F1596C: 00a045f9  ldr x0, [x0, #0xb40]
0x05F15970: 2aac4997  bl #0x3180a18
0x05F15974: 60bd00d0  adrp x0, #0x76c3000
0x05F15978: 00a445f9  ldr x0, [x0, #0xb48]
0x05F1597C: 27ac4997  bl #0x3180a18
0x05F15980: 60bd00d0  adrp x0, #0x76c3000
0x05F15984: 008c45f9  ldr x0, [x0, #0xb18]
0x05F15988: 24ac4997  bl #0x3180a18
0x05F1598C: 28008052  movz w8, #0x1
0x05F15990: c87a3139  strb w8, [x22, #0xc5e]
0x05F15994: 600240f9  ldr x0, [x19]
0x05F15998: 21008052  movz w1, #0x1
0x05F1599C: e2031f2a  mov w2, wzr
0x05F159A0: e3031f2a  mov w3, wzr
0x05F159A4: e4031faa  mov x4, xzr
0x05F159A8: ff7f05a9  stp xzr, xzr, [sp, #0x50]
0x05F159AC: ff3300f9  str xzr, [sp, #0x60]
0x05F159B0: 5a1f3e94  bl #0x6e9d718
0x05F159B4: e1031faa  mov x1, xzr
0x05F159B8: e2031faa  mov x2, xzr
0x05F159BC: f30300aa  mov x19, x0
0x05F159C0: f034df97  bl #0x56e2d80
0x05F159C4: 80000036  tbz w0, #0, #0x5f159d4
0x05F159C8: e00313aa  mov x0, x19
0x05F159CC: e1031faa  mov x1, xzr
0x05F159D0: af1f3e94  bl #0x6e9d88c
0x05F159D4: a00a40f9  ldr x0, [x21, #0x10]
0x05F159D8: a01100b4  cbz x0, #0x5f15c0c
0x05F159DC: 68bd00d0  adrp x8, #0x76c3000
0x05F159E0: 08a145f9  ldr x8, [x8, #0xb40]
0x05F159E4: 010140f9  ldr x1, [x8]
0x05F159E8: e8c30191  add x8, sp, #0x70
0x05F159EC: 9fbd8497  bl #0x4045068
0x05F159F0: 78bd00d0  adrp x24, #0x76c3000
0x05F159F4: 79bd00d0  adrp x25, #0x76c3000
0x05F159F8: 7abd00d0  adrp x26, #0x76c3000
0x05F159FC: 77bd00d0  adrp x23, #0x76c3000
0x05F15A00: 189745f9  ldr x24, [x24, #0xb28]
0x05F15A04: 39a745f9  ldr x25, [x25, #0xb48]
0x05F15A08: e01fc03d  ldr q0, [sp, #0x70]
0x05F15A0C: e84340f9  ldr x8, [sp, #0x80]
0x05F15A10: 5a9f45f9  ldr x26, [x26, #0xb38]
0x05F15A14: f79245f9  ldr x23, [x23, #0xb20]
0x05F15A18: e017803d  str q0, [sp, #0x50]
0x05F15A1C: e83300f9  str x8, [sp, #0x60]
0x05F15A20: 010340f9  ldr x1, [x24]
0x05F15A24: e0430191  add x0, sp, #0x50
0x05F15A28: e3ffc397  bl #0x50159b4
0x05F15A2C: e0090036  tbz w0, #0, #0x5f15b68
0x05F15A30: f63340f9  ldr x22, [sp, #0x60]
0x05F15A34: 760c00b4  cbz x22, #0x5f15bc0
0x05F15A38: c00e40f9  ldr x0, [x22, #0x18]
0x05F15A3C: 400c00b4  cbz x0, #0x5f15bc4
0x05F15A40: 080040f9  ldr x8, [x0]
0x05F15A44: 09855ba9  ldp x9, x1, [x8, #0x1b8]
0x05F15A48: 20013fd6  blr x9
0x05F15A4C: e10300aa  mov x1, x0
0x05F15A50: 200340f9  ldr x0, [x25]
0x05F15A54: e2031faa  mov x2, xzr
0x05F15A58: 5253d797  bl #0x54ea7a0
0x05F15A5C: 21008052  movz w1, #0x1
0x05F15A60: e2031f2a  mov w2, wzr
0x05F15A64: e3031f2a  mov w3, wzr
0x05F15A68: e4031faa  mov x4, xzr
0x05F15A6C: 2b1f3e94  bl #0x6e9d718
0x05F15A70: f50300aa  mov x21, x0
0x05F15A74: e1031faa  mov x1, xzr
0x05F15A78: e2031faa  mov x2, xzr
0x05F15A7C: c134df97  bl #0x56e2d80
0x05F15A80: 80000036  tbz w0, #0, #0x5f15a90
0x05F15A84: e00315aa  mov x0, x21
0x05F15A88: e1031faa  mov x1, xzr
0x05F15A8C: 801f3e94  bl #0x6e9d88c
0x05F15A90: 800640ad  ldp q0, q1, [x20]
0x05F15A94: d60a40f9  ldr x22, [x22, #0x10]
0x05F15A98: e08701ad  stp q0, q1, [sp, #0x30]
0x05F15A9C: 160500b4  cbz x22, #0x5f15b3c
0x05F15AA0: e08741ad  ldp q0, q1, [sp, #0x30]
0x05F15AA4: 410340f9  ldr x1, [x26]
0x05F15AA8: e08700ad  stp q0, q1, [sp, #0x10]
0x05F15AAC: c80240f9  ldr x8, [x22]
0x05F15AB0: 095d4279  ldrh w9, [x8, #0x12e]
0x05F15AB4: 290100b4  cbz x9, #0x5f15ad8
0x05F15AB8: 0a5940f9  ldr x10, [x8, #0xb0]
0x05F15ABC: 4a210091  add x10, x10, #8
0x05F15AC0: 4b815ff8  ldur x11, [x10, #-8]
0x05F15AC4: 7f0101eb  cmp x11, x1
0x05F15AC8: 00010054  b.eq #0x5f15ae8
0x05F15ACC: 290500f1  subs x9, x9, #1
0x05F15AD0: 4a410091  add x10, x10, #0x10
0x05F15AD4: 61ffff54  b.ne #0x5f15ac0
0x05F15AD8: e00316aa  mov x0, x22
0x05F15ADC: e2031f2a  mov w2, wzr
0x05F15AE0: 0c044997  bl #0x3156b10
0x05F15AE4: 04000014  b #0x5f15af4
0x05F15AE8: 490180b9  ldrsw x9, [x10]
0x05F15AEC: 0811098b  add x8, x8, x9, lsl #4
0x05F15AF0: 00e10491  add x0, x8, #0x138
0x05F15AF4: e08740ad  ldp q0, q1, [sp, #0x10]
0x05F15AF8: 080040f9  ldr x8, [x0]
0x05F15AFC: e08703ad  stp q0, q1, [sp, #0x70]
0x05F15B00: 020440f9  ldr x2, [x0, #8]
0x05F15B04: e1c30191  add x1, sp, #0x70
0x05F15B08: e00316aa  mov x0, x22
0x05F15B0C: 00013fd6  blr x8
0x05F15B10: f6031faa  mov x22, xzr
0x05F15B14: e00315aa  mov x0, x21
0x05F15B18: e1031faa  mov x1, xzr
0x05F15B1C: e2031faa  mov x2, xzr
0x05F15B20: 9834df97  bl #0x56e2d80
0x05F15B24: 80000036  tbz w0, #0, #0x5f15b34
0x05F15B28: e00315aa  mov x0, x21
0x05F15B2C: e1031faa  mov x1, xzr
0x05F15B30: 7e1f3e94  bl #0x6e9d928
0x05F15B34: 76f7ffb4  cbz x22, #0x5f15a20
0x05F15B38: 24000014  b #0x5f15bc8
0x05F15B3C: 5cac4997  bl #0x3180cac
0x05F15B40: 38000014  b #0x5f15c20
0x05F15B44: 3f040071  cmp w1, #1
0x05F15B48: e10700f9  str x1, [sp, #8]
0x05F15B4C: e04f00f9  str x0, [sp, #0x98]
0x05F15B50: 01040054  b.ne #0x5f15bd0
0x05F15B54: e04f40f9  ldr x0, [sp, #0x98]
0x05F15B58: 6ee34a94  bl #0x71ce910
0x05F15B5C: 160040f9  ldr x22, [x0]
0x05F15B60: 70e34a94  bl #0x71ce920
0x05F15B64: ecffff17  b #0x5f15b14
0x05F15B68: f5031faa  mov x21, xzr
0x05F15B6C: e10240f9  ldr x1, [x23]
0x05F15B70: e0430191  add x0, sp, #0x50
0x05F15B74: 8fffc397  bl #0x50159b0
0x05F15B78: 150500b5  cbnz x21, #0x5f15c18
0x05F15B7C: f4031faa  mov x20, xzr
0x05F15B80: e00313aa  mov x0, x19
0x05F15B84: e1031faa  mov x1, xzr
0x05F15B88: e2031faa  mov x2, xzr
0x05F15B8C: 7d34df97  bl #0x56e2d80
0x05F15B90: 80000036  tbz w0, #0, #0x5f15ba0
0x05F15B94: e00313aa  mov x0, x19
0x05F15B98: e1031faa  mov x1, xzr
0x05F15B9C: 631f3e94  bl #0x6e9d928
0x05F15BA0: 940300b5  cbnz x20, #0x5f15c10
0x05F15BA4: f44f4da9  ldp x20, x19, [sp, #0xd0]
0x05F15BA8: f6574ca9  ldp x22, x21, [sp, #0xc0]
0x05F15BAC: f85f4ba9  ldp x24, x23, [sp, #0xb0]
0x05F15BB0: fa674aa9  ldp x26, x25, [sp, #0xa0]
0x05F15BB4: fe4b40f9  ldr x30, [sp, #0x90]
0x05F15BB8: ff830391  add sp, sp, #0xe0
0x05F15BBC: c0035fd6  ret
0x05F15BC0: 3bac4997  bl #0x3180cac
0x05F15BC4: 3aac4997  bl #0x3180cac
0x05F15BC8: e00316aa  mov x0, x22
0x05F15BCC: 36ac4997  bl #0x3180ca4
0x05F15BD0: f6031faa  mov x22, xzr
0x05F15BD4: e00315aa  mov x0, x21
0x05F15BD8: e1031faa  mov x1, xzr
0x05F15BDC: e2031faa  mov x2, xzr
0x05F15BE0: 6834df97  bl #0x56e2d80
0x05F15BE4: f84f40f9  ldr x24, [sp, #0x98]
0x05F15BE8: f40740f9  ldr x20, [sp, #8]
0x05F15BEC: 80000036  tbz w0, #0, #0x5f15bfc
0x05F15BF0: e00315aa  mov x0, x21
0x05F15BF4: e1031faa  mov x1, xzr
0x05F15BF8: 4c1f3e94  bl #0x6e9d928
0x05F15BFC: e00318aa  mov x0, x24
0x05F15C00: 160300b4  cbz x22, #0x5f15c60
0x05F15C04: e00316aa  mov x0, x22
0x05F15C08: 27ac4997  bl #0x3180ca4
0x05F15C0C: 28ac4997  bl #0x3180cac
0x05F15C10: e00314aa  mov x0, x20
0x05F15C14: 24ac4997  bl #0x3180ca4
0x05F15C18: e00315aa  mov x0, x21
0x05F15C1C: 22ac4997  bl #0x3180ca4
0x05F15C20: e10700f9  str x1, [sp, #8]
0x05F15C24: e04f00f9  str x0, [sp, #0x98]
0x05F15C28: ebffff17  b #0x5f15bd4
0x05F15C2C: 02000014  b #0x5f15c34
0x05F15C30: 01000014  b #0x5f15c34
0x05F15C34: f40301aa  mov x20, x1
0x05F15C38: 17000014  b #0x5f15c94
0x05F15C3C: 08000014  b #0x5f15c5c
0x05F15C40: 07000014  b #0x5f15c5c
0x05F15C44: 06000014  b #0x5f15c5c
0x05F15C48: 05000014  b #0x5f15c5c
0x05F15C4C: 04000014  b #0x5f15c5c
0x05F15C50: 03000014  b #0x5f15c5c
0x05F15C54: 02000014  b #0x5f15c5c
0x05F15C58: 01000014  b #0x5f15c5c
0x05F15C5C: f40301aa  mov x20, x1
0x05F15C60: 9f060071  cmp w20, #1
0x05F15C64: a1000054  b.ne #0x5f15c78
0x05F15C68: 2ae34a94  bl #0x71ce910
0x05F15C6C: 150040f9  ldr x21, [x0]
0x05F15C70: 2ce34a94  bl #0x71ce920
0x05F15C74: beffff17  b #0x5f15b6c
0x05F15C78: f60300aa  mov x22, x0
0x05F15C7C: f5031faa  mov x21, xzr
0x05F15C80: e10240f9  ldr x1, [x23]
0x05F15C84: e0430191  add x0, sp, #0x50
0x05F15C88: 4affc397  bl #0x50159b0
0x05F15C8C: e00316aa  mov x0, x22
0x05F15C90: 550100b5  cbnz x21, #0x5f15cb8
0x05F15C94: 9f060071  cmp w20, #1
0x05F15C98: a1000054  b.ne #0x5f15cac
0x05F15C9C: 1de34a94  bl #0x71ce910
0x05F15CA0: 140040f9  ldr x20, [x0]
0x05F15CA4: 1fe34a94  bl #0x71ce920
0x05F15CA8: b6ffff17  b #0x5f15b80
0x05F15CAC: f50300aa  mov x21, x0
0x05F15CB0: f4031faa  mov x20, xzr
0x05F15CB4: 07000014  b #0x5f15cd0
0x05F15CB8: e00315aa  mov x0, x21
0x05F15CBC: faab4997  bl #0x3180ca4
0x05F15CC0: f40301aa  mov x20, x1
0x05F15CC4: f60300aa  mov x22, x0
0x05F15CC8: eeffff17  b #0x5f15c80
0x05F15CCC: f50300aa  mov x21, x0
0x05F15CD0: e00313aa  mov x0, x19
0x05F15CD4: e1031faa  mov x1, xzr
0x05F15CD8: e2031faa  mov x2, xzr
0x05F15CDC: 2934df97  bl #0x56e2d80
0x05F15CE0: 80000036  tbz w0, #0, #0x5f15cf0
0x05F15CE4: e00313aa  mov x0, x19
0x05F15CE8: e1031faa  mov x1, xzr
0x05F15CEC: 0f1f3e94  bl #0x6e9d928
0x05F15CF0: 740000b5  cbnz x20, #0x5f15cfc
0x05F15CF4: e00315aa  mov x0, x21
0x05F15CF8: 183f4d97  bl #0x3265958
0x05F15CFC: e00314aa  mov x0, x20
0x05F15D00: e9ab4997  bl #0x3180ca4
0x05F15D04: 04ce3b97  bl #0x2e09514

