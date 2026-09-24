; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25702 Merger.MergeBoard.View.Layout.MergeBoardLayout
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A41A50 | public Dictionary<int, RectTransform> get_Tiles() { }
; bytes=8 sha256=6b819324b4a3bc2d390c83c7fe02ea41a1f57ae5d4f2a9b0c9256341a5b8d37f status=arm64_complete_bound indexed_start=True
0x06A41A50: 001840f9  ldr x0, [x0, #0x30]
0x06A41A54: c0035fd6  ret

; RVA 0x6A41A58 | public Vector2 get_GetTileSize() { }
; bytes=8 sha256=cfafe8b2681b573d4ae779221e212f868c62157c95710a8a92cb55f845c0ae0c status=arm64_complete_bound indexed_start=True
0x06A41A58: 0004452d  ldp s0, s1, [x0, #0x28]
0x06A41A5C: c0035fd6  ret

; RVA 0x6A41A60 | public Vector2 get_GetScaledTileSize() { }
; bytes=484 sha256=ab8cf91dc97330dd98e992d00b581d33b8e03b99e0ac5eebb3993b10e160abef status=arm64_complete_bound indexed_start=True
0x06A41A60: ff8301d1  sub sp, sp, #0x60
0x06A41A64: e923026d  stp d9, d8, [sp, #0x20]
0x06A41A68: fe5f03a9  stp x30, x23, [sp, #0x30]
0x06A41A6C: f65704a9  stp x22, x21, [sp, #0x40]
0x06A41A70: f44f05a9  stp x20, x19, [sp, #0x50]
0x06A41A74: 549700b0  adrp x20, #0x7d2a000
0x06A41A78: 880e5539  ldrb w8, [x20, #0x543]
0x06A41A7C: f30300aa  mov x19, x0
0x06A41A80: a8020037  tbnz w8, #0, #0x6a41ad4
0x06A41A84: 606700d0  adrp x0, #0x772f000
0x06A41A88: 00e443f9  ldr x0, [x0, #0x7c8]
0x06A41A8C: e3fb1c97  bl #0x3180a18
0x06A41A90: 606700d0  adrp x0, #0x772f000
0x06A41A94: 00e843f9  ldr x0, [x0, #0x7d0]
0x06A41A98: e0fb1c97  bl #0x3180a18
0x06A41A9C: 606700d0  adrp x0, #0x772f000
0x06A41AA0: 00ec43f9  ldr x0, [x0, #0x7d8]
0x06A41AA4: ddfb1c97  bl #0x3180a18
0x06A41AA8: 606700d0  adrp x0, #0x772f000
0x06A41AAC: 00f043f9  ldr x0, [x0, #0x7e0]
0x06A41AB0: dafb1c97  bl #0x3180a18
0x06A41AB4: 606000b0  adrp x0, #0x764e000
0x06A41AB8: 007042f9  ldr x0, [x0, #0x4e0]
0x06A41ABC: d7fb1c97  bl #0x3180a18
0x06A41AC0: 606700d0  adrp x0, #0x772f000
0x06A41AC4: 00f443f9  ldr x0, [x0, #0x7e8]
0x06A41AC8: d4fb1c97  bl #0x3180a18
0x06A41ACC: 28008052  movz w8, #0x1
0x06A41AD0: 880e1539  strb w8, [x20, #0x543]
0x06A41AD4: ffff00a9  stp xzr, xzr, [sp, #8]
0x06A41AD8: ff0f00f9  str xzr, [sp, #0x18]
0x06A41ADC: 601a40f9  ldr x0, [x19, #0x30]
0x06A41AE0: c00600b4  cbz x0, #0x6a41bb8
0x06A41AE4: 686700d0  adrp x8, #0x772f000
0x06A41AE8: 08e543f9  ldr x8, [x8, #0x7c8]
0x06A41AEC: 010140f9  ldr x1, [x8]
0x06A41AF0: 9ecf8f97  bl #0x4e35968
0x06A41AF4: 200600b4  cbz x0, #0x6a41bb8
0x06A41AF8: 686700d0  adrp x8, #0x772f000
0x06A41AFC: 08f543f9  ldr x8, [x8, #0x7e8]
0x06A41B00: 766700d0  adrp x22, #0x772f000
0x06A41B04: 776000b0  adrp x23, #0x764e000
0x06A41B08: 756700d0  adrp x21, #0x772f000
0x06A41B0C: 010140f9  ldr x1, [x8]
0x06A41B10: d6ee43f9  ldr x22, [x22, #0x7d8]
0x06A41B14: f77242f9  ldr x23, [x23, #0x4e0]
0x06A41B18: b5ea43f9  ldr x21, [x21, #0x7d0]
0x06A41B1C: e8230091  add x8, sp, #8
0x06A41B20: ed0c7397  bl #0x4704ed4
0x06A41B24: c10240f9  ldr x1, [x22]
0x06A41B28: e0230091  add x0, sp, #8
0x06A41B2C: 831c9897  bl #0x5048d38
0x06A41B30: c0020036  tbz w0, #0, #0x6a41b88
0x06A41B34: e00240f9  ldr x0, [x23]
0x06A41B38: f40f40f9  ldr x20, [sp, #0x18]
0x06A41B3C: 08e040b9  ldr w8, [x0, #0xe0]
0x06A41B40: 48000035  cbnz w8, #0x6a41b48
0x06A41B44: 12fc1c97  bl #0x3180b8c
0x06A41B48: e00314aa  mov x0, x20
0x06A41B4C: e1031faa  mov x1, xzr
0x06A41B50: e2031faa  mov x2, xzr
0x06A41B54: 08741294  bl #0x6edeb74
0x06A41B58: 60fe0736  tbz w0, #0, #0x6a41b24
0x06A41B5C: 140300b4  cbz x20, #0x6a41bbc
0x06A41B60: 6826452d  ldp s8, s9, [x19, #0x28]
0x06A41B64: e00314aa  mov x0, x20
0x06A41B68: e1031faa  mov x1, xzr
0x06A41B6C: 0fa61294  bl #0x6eeb3a8
0x06A41B70: a10240f9  ldr x1, [x21]
0x06A41B74: e0230091  add x0, sp, #8
0x06A41B78: 0809201e  fmul s8, s8, s0
0x06A41B7C: 2909211e  fmul s9, s9, s1
0x06A41B80: 6d1c9897  bl #0x5048d34
0x06A41B84: 05000014  b #0x6a41b98
0x06A41B88: a10240f9  ldr x1, [x21]
0x06A41B8C: e0230091  add x0, sp, #8
0x06A41B90: 691c9897  bl #0x5048d34
0x06A41B94: 6826452d  ldp s8, s9, [x19, #0x28]
0x06A41B98: 001da84e  mov v0.16b, v8.16b
0x06A41B9C: 211da94e  mov v1.16b, v9.16b
0x06A41BA0: f44f45a9  ldp x20, x19, [sp, #0x50]
0x06A41BA4: f65744a9  ldp x22, x21, [sp, #0x40]
0x06A41BA8: fe5f43a9  ldp x30, x23, [sp, #0x30]
0x06A41BAC: e923426d  ldp d9, d8, [sp, #0x20]
0x06A41BB0: ff830191  add sp, sp, #0x60
0x06A41BB4: c0035fd6  ret
0x06A41BB8: 3dfc1c97  bl #0x3180cac
0x06A41BBC: 3cfc1c97  bl #0x3180cac
0x06A41BC0: 04000014  b #0x6a41bd0
0x06A41BC4: 03000014  b #0x6a41bd0
0x06A41BC8: 02000014  b #0x6a41bd0
0x06A41BCC: 01000014  b #0x6a41bd0
0x06A41BD0: f40300aa  mov x20, x0
0x06A41BD4: 3f040071  cmp w1, #1
0x06A41BD8: a1010054  b.ne #0x6a41c0c
0x06A41BDC: e00314aa  mov x0, x20
0x06A41BE0: 4c331e94  bl #0x71ce910
0x06A41BE4: 150040f9  ldr x21, [x0]
0x06A41BE8: 4e331e94  bl #0x71ce920
0x06A41BEC: 686700d0  adrp x8, #0x772f000
0x06A41BF0: 08e943f9  ldr x8, [x8, #0x7d0]
0x06A41BF4: e0230091  add x0, sp, #8
0x06A41BF8: 010140f9  ldr x1, [x8]
0x06A41BFC: 4e1c9897  bl #0x5048d34
0x06A41C00: b5fcffb4  cbz x21, #0x6a41b94
0x06A41C04: e00315aa  mov x0, x21
0x06A41C08: 27fc1c97  bl #0x3180ca4
0x06A41C0C: f5031faa  mov x21, xzr
0x06A41C10: 02000014  b #0x6a41c18
0x06A41C14: f40300aa  mov x20, x0
0x06A41C18: 686700d0  adrp x8, #0x772f000
0x06A41C1C: 08e943f9  ldr x8, [x8, #0x7d0]
0x06A41C20: 010140f9  ldr x1, [x8]
0x06A41C24: e0230091  add x0, sp, #8
0x06A41C28: 431c9897  bl #0x5048d34
0x06A41C2C: 750000b5  cbnz x21, #0x6a41c38
0x06A41C30: e00314aa  mov x0, x20
0x06A41C34: 498f2097  bl #0x3265958
0x06A41C38: e00315aa  mov x0, x21
0x06A41C3C: 1afc1c97  bl #0x3180ca4
0x06A41C40: 351e0f97  bl #0x2e09514

; RVA 0x6A3CB9C | public void CreateBoard(IEnumerable<int> configuredTileIndices) { }
; bytes=16 sha256=88614e6b972beb8eac9c43ba918f4f85e8586c3b87fba9d3dbd809fd6aee2e35 status=arm64_complete_bound indexed_start=True
0x06A3CB9C: 080040f9  ldr x8, [x0]
0x06A3CBA0: 031d41f9  ldr x3, [x8, #0x238]
0x06A3CBA4: 022141f9  ldr x2, [x8, #0x240]
0x06A3CBA8: 60001fd6  br x3

; RVA 0x6A36D80 | public Nullable<int> GetIndexForTransform(Transform tileTransform) { }
; bytes=548 sha256=296f949450395c5c3da8475766d88c8540e3b79d04af42f7210cf210679b9af4 status=arm64_complete_bound indexed_start=True
0x06A36D80: ffc302d1  sub sp, sp, #0xb0
0x06A36D84: eb2b066d  stp d11, d10, [sp, #0x60]
0x06A36D88: e923076d  stp d9, d8, [sp, #0x70]
0x06A36D8C: fe4300f9  str x30, [sp, #0x80]
0x06A36D90: f65709a9  stp x22, x21, [sp, #0x90]
0x06A36D94: f44f0aa9  stp x20, x19, [sp, #0xa0]
0x06A36D98: b5970090  adrp x21, #0x7d2a000
0x06A36D9C: a8125539  ldrb w8, [x21, #0x544]
0x06A36DA0: f30301aa  mov x19, x1
0x06A36DA4: f40300aa  mov x20, x0
0x06A36DA8: 08030037  tbnz w8, #0, #0x6a36e08
0x06A36DAC: c06700b0  adrp x0, #0x772f000
0x06A36DB0: 00f042f9  ldr x0, [x0, #0x5e0]
0x06A36DB4: 19271d97  bl #0x3180a18
0x06A36DB8: c06700b0  adrp x0, #0x772f000
0x06A36DBC: 00f442f9  ldr x0, [x0, #0x5e8]
0x06A36DC0: 16271d97  bl #0x3180a18
0x06A36DC4: c06700b0  adrp x0, #0x772f000
0x06A36DC8: 00f842f9  ldr x0, [x0, #0x5f0]
0x06A36DCC: 13271d97  bl #0x3180a18
0x06A36DD0: c06700b0  adrp x0, #0x772f000
0x06A36DD4: 00fc42f9  ldr x0, [x0, #0x5f8]
0x06A36DD8: 10271d97  bl #0x3180a18
0x06A36DDC: c06700b0  adrp x0, #0x772f000
0x06A36DE0: 000043f9  ldr x0, [x0, #0x600]
0x06A36DE4: 0d271d97  bl #0x3180a18
0x06A36DE8: c06700b0  adrp x0, #0x772f000
0x06A36DEC: 000443f9  ldr x0, [x0, #0x608]
0x06A36DF0: 0a271d97  bl #0x3180a18
0x06A36DF4: c06000d0  adrp x0, #0x7650000
0x06A36DF8: 00d046f9  ldr x0, [x0, #0xda0]
0x06A36DFC: 07271d97  bl #0x3180a18
0x06A36E00: 28008052  movz w8, #0x1
0x06A36E04: a8121539  strb w8, [x21, #0x544]
0x06A36E08: 00e4006f  movi v0.2d, #0000000000000000
0x06A36E0C: ff2b00f9  str xzr, [sp, #0x50]
0x06A36E10: e08301ad  stp q0, q0, [sp, #0x30]
0x06A36E14: 801a40f9  ldr x0, [x20, #0x30]
0x06A36E18: 400800b4  cbz x0, #0x6a36f20
0x06A36E1C: c86700b0  adrp x8, #0x772f000
0x06A36E20: 08f142f9  ldr x8, [x8, #0x5e0]
0x06A36E24: d66700b0  adrp x22, #0x772f000
0x06A36E28: d56700b0  adrp x21, #0x772f000
0x06A36E2C: 010140f9  ldr x1, [x8]
0x06A36E30: d6fa42f9  ldr x22, [x22, #0x5f0]
0x06A36E34: b5f642f9  ldr x21, [x21, #0x5e8]
0x06A36E38: e8230091  add x8, sp, #8
0x06A36E3C: 55fc8f97  bl #0x4e35f90
0x06A36E40: 4964fd90  adrp x9, #0x16be000
0x06A36E44: e083c03c  ldur q0, [sp, #8]
0x06A36E48: e183c13c  ldur q1, [sp, #0x18]
0x06A36E4C: e81740f9  ldr x8, [sp, #0x28]
0x06A36E50: 2b0146bd  ldr s11, [x9, #0x600]
0x06A36E54: e08701ad  stp q0, q1, [sp, #0x30]
0x06A36E58: e82b00f9  str x8, [sp, #0x50]
0x06A36E5C: c10240f9  ldr x1, [x22]
0x06A36E60: e0c30091  add x0, sp, #0x30
0x06A36E64: 0e449897  bl #0x5047e9c
0x06A36E68: 00040036  tbz w0, #0, #0x6a36ee8
0x06A36E6C: e02740f9  ldr x0, [sp, #0x48]
0x06A36E70: 400500b4  cbz x0, #0x6a36f18
0x06A36E74: f42340f9  ldr x20, [sp, #0x40]
0x06A36E78: e1031faa  mov x1, xzr
0x06A36E7C: 1ccb1294  bl #0x6ee9aec
0x06A36E80: f30400b4  cbz x19, #0x6a36f1c
0x06A36E84: 081ca04e  mov v8.16b, v0.16b
0x06A36E88: 291ca14e  mov v9.16b, v1.16b
0x06A36E8C: 4a1ca24e  mov v10.16b, v2.16b
0x06A36E90: e00313aa  mov x0, x19
0x06A36E94: e1031faa  mov x1, xzr
0x06A36E98: 15cb1294  bl #0x6ee9aec
0x06A36E9C: 0039201e  fsub s0, s8, s0
0x06A36EA0: 2139211e  fsub s1, s9, s1
0x06A36EA4: 4239221e  fsub s2, s10, s2
0x06A36EA8: 0008201e  fmul s0, s0, s0
0x06A36EAC: 2108211e  fmul s1, s1, s1
0x06A36EB0: 0028211e  fadd s0, s0, s1
0x06A36EB4: 4108221e  fmul s1, s2, s2
0x06A36EB8: 2028201e  fadd s0, s1, s0
0x06A36EBC: 00202b1e  fcmp s0, s11
0x06A36EC0: e5fcff54  b.pl #0x6a36e5c
0x06A36EC4: c86000d0  adrp x8, #0x7650000
0x06A36EC8: 08d146f9  ldr x8, [x8, #0xda0]
0x06A36ECC: ff0700f9  str xzr, [sp, #8]
0x06A36ED0: 020140f9  ldr x2, [x8]
0x06A36ED4: e0230091  add x0, sp, #8
0x06A36ED8: e103142a  mov w1, w20
0x06A36EDC: 01126197  bl #0x427b6e0
0x06A36EE0: f30740f9  ldr x19, [sp, #8]
0x06A36EE4: 02000014  b #0x6a36eec
0x06A36EE8: f3031faa  mov x19, xzr
0x06A36EEC: a10240f9  ldr x1, [x21]
0x06A36EF0: e0c30091  add x0, sp, #0x30
0x06A36EF4: 33449897  bl #0x5047fc0
0x06A36EF8: e00313aa  mov x0, x19
0x06A36EFC: f44f4aa9  ldp x20, x19, [sp, #0xa0]
0x06A36F00: f65749a9  ldp x22, x21, [sp, #0x90]
0x06A36F04: fe4340f9  ldr x30, [sp, #0x80]
0x06A36F08: e923476d  ldp d9, d8, [sp, #0x70]
0x06A36F0C: eb2b466d  ldp d11, d10, [sp, #0x60]
0x06A36F10: ffc30291  add sp, sp, #0xb0
0x06A36F14: c0035fd6  ret
0x06A36F18: 65271d97  bl #0x3180cac
0x06A36F1C: 64271d97  bl #0x3180cac
0x06A36F20: 63271d97  bl #0x3180cac
0x06A36F24: 05000014  b #0x6a36f38
0x06A36F28: 04000014  b #0x6a36f38
0x06A36F2C: 03000014  b #0x6a36f38
0x06A36F30: 02000014  b #0x6a36f38
0x06A36F34: 01000014  b #0x6a36f38
0x06A36F38: f30300aa  mov x19, x0
0x06A36F3C: 3f040071  cmp w1, #1
0x06A36F40: 61010054  b.ne #0x6a36f6c
0x06A36F44: e00313aa  mov x0, x19
0x06A36F48: 725e1e94  bl #0x71ce910
0x06A36F4C: 140040f9  ldr x20, [x0]
0x06A36F50: 745e1e94  bl #0x71ce920
0x06A36F54: a10240f9  ldr x1, [x21]
0x06A36F58: e0c30091  add x0, sp, #0x30
0x06A36F5C: 19449897  bl #0x5047fc0
0x06A36F60: b40000b5  cbnz x20, #0x6a36f74
0x06A36F64: f3031faa  mov x19, xzr
0x06A36F68: e4ffff17  b #0x6a36ef8
0x06A36F6C: f4031faa  mov x20, xzr
0x06A36F70: 04000014  b #0x6a36f80
0x06A36F74: e00314aa  mov x0, x20
0x06A36F78: 4b271d97  bl #0x3180ca4
0x06A36F7C: f30300aa  mov x19, x0
0x06A36F80: a10240f9  ldr x1, [x21]
0x06A36F84: e0c30091  add x0, sp, #0x30
0x06A36F88: 0e449897  bl #0x5047fc0
0x06A36F8C: 740000b5  cbnz x20, #0x6a36f98
0x06A36F90: e00313aa  mov x0, x19
0x06A36F94: 71ba2097  bl #0x3265958
0x06A36F98: e00314aa  mov x0, x20
0x06A36F9C: 42271d97  bl #0x3180ca4
0x06A36FA0: 5d490f97  bl #0x2e09514

; RVA 0x6A3926C | public bool ContainsIndex(int index) { }
; bytes=88 sha256=499296ac8b3074fb8bae7d59b5612eab65eada2402e8808f4f331e990cfdb4ba status=arm64_complete_bound indexed_start=True
0x06A3926C: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A39270: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A39274: 959700b0  adrp x21, #0x7d2a000
0x06A39278: a8165539  ldrb w8, [x21, #0x545]
0x06A3927C: f303012a  mov w19, w1
0x06A39280: f40300aa  mov x20, x0
0x06A39284: c8000037  tbnz w8, #0, #0x6a3929c
0x06A39288: a06700d0  adrp x0, #0x772f000
0x06A3928C: 008843f9  ldr x0, [x0, #0x710]
0x06A39290: e21d1d97  bl #0x3180a18
0x06A39294: 28008052  movz w8, #0x1
0x06A39298: a8161539  strb w8, [x21, #0x545]
0x06A3929C: 801a40f9  ldr x0, [x20, #0x30]
0x06A392A0: 000100b4  cbz x0, #0x6a392c0
0x06A392A4: a86700d0  adrp x8, #0x772f000
0x06A392A8: 088943f9  ldr x8, [x8, #0x710]
0x06A392AC: e103132a  mov w1, w19
0x06A392B0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A392B4: 020140f9  ldr x2, [x8]
0x06A392B8: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A392BC: a4f28f17  b #0x4e35d4c
0x06A392C0: 7b1e1d97  bl #0x3180cac

; RVA 0x6A3604C | public RectTransform GetTransformAtPosition(int index) { }
; bytes=88 sha256=cf13e0c291a9cddbcc6ab02228be14f13fbfce6e90b1e86949dfd8c7578220bb status=arm64_complete_bound indexed_start=True
0x06A3604C: fe0f1df8  str x30, [sp, #-0x30]!
0x06A36050: f65701a9  stp x22, x21, [sp, #0x10]
0x06A36054: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A36058: b6970090  adrp x22, #0x7d2a000
0x06A3605C: d56700b0  adrp x21, #0x772f000
0x06A36060: c81a5539  ldrb w8, [x22, #0x546]
0x06A36064: b5c642f9  ldr x21, [x21, #0x588]
0x06A36068: f303012a  mov w19, w1
0x06A3606C: f40300aa  mov x20, x0
0x06A36070: c8000037  tbnz w8, #0, #0x6a36088
0x06A36074: c06700b0  adrp x0, #0x772f000
0x06A36078: 00c442f9  ldr x0, [x0, #0x588]
0x06A3607C: 672a1d97  bl #0x3180a18
0x06A36080: 28008052  movz w8, #0x1
0x06A36084: c81a1539  strb w8, [x22, #0x546]
0x06A36088: 801a40f9  ldr x0, [x20, #0x30]
0x06A3608C: a20240f9  ldr x2, [x21]
0x06A36090: e103132a  mov w1, w19
0x06A36094: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A36098: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A3609C: fe0743f8  ldr x30, [sp], #0x30
0x06A360A0: 1ab04617  b #0x3be2108

; RVA 0x6A3BBB8 | public RectTransform GetTransformForPosition(Vector2 localPosition) { }
; bytes=552 sha256=024c7977437482128fa026ca056d113c798087e6d92da3054299a60644183461 status=arm64_complete_bound indexed_start=True
0x06A3BBB8: ff8302d1  sub sp, sp, #0xa0
0x06A3BBBC: ec1b00fd  str d12, [sp, #0x30]
0x06A3BBC0: eb2b046d  stp d11, d10, [sp, #0x40]
0x06A3BBC4: e923056d  stp d9, d8, [sp, #0x50]
0x06A3BBC8: fe6706a9  stp x30, x25, [sp, #0x60]
0x06A3BBCC: f85f07a9  stp x24, x23, [sp, #0x70]
0x06A3BBD0: f65708a9  stp x22, x21, [sp, #0x80]
0x06A3BBD4: f44f09a9  stp x20, x19, [sp, #0x90]
0x06A3BBD8: 749700f0  adrp x20, #0x7d2a000
0x06A3BBDC: 881e5539  ldrb w8, [x20, #0x547]
0x06A3BBE0: 281ca14e  mov v8.16b, v1.16b
0x06A3BBE4: 091ca04e  mov v9.16b, v0.16b
0x06A3BBE8: f30300aa  mov x19, x0
0x06A3BBEC: a8020037  tbnz w8, #0, #0x6a3bc40
0x06A3BBF0: a0670090  adrp x0, #0x772f000
0x06A3BBF4: 00f042f9  ldr x0, [x0, #0x5e0]
0x06A3BBF8: 88131d97  bl #0x3180a18
0x06A3BBFC: a0670090  adrp x0, #0x772f000
0x06A3BC00: 00b843f9  ldr x0, [x0, #0x770]
0x06A3BC04: 85131d97  bl #0x3180a18
0x06A3BC08: a0670090  adrp x0, #0x772f000
0x06A3BC0C: 00f442f9  ldr x0, [x0, #0x5e8]
0x06A3BC10: 82131d97  bl #0x3180a18
0x06A3BC14: a0670090  adrp x0, #0x772f000
0x06A3BC18: 00f842f9  ldr x0, [x0, #0x5f0]
0x06A3BC1C: 7f131d97  bl #0x3180a18
0x06A3BC20: a0670090  adrp x0, #0x772f000
0x06A3BC24: 00fc42f9  ldr x0, [x0, #0x5f8]
0x06A3BC28: 7c131d97  bl #0x3180a18
0x06A3BC2C: a0670090  adrp x0, #0x772f000
0x06A3BC30: 000443f9  ldr x0, [x0, #0x608]
0x06A3BC34: 79131d97  bl #0x3180a18
0x06A3BC38: 28008052  movz w8, #0x1
0x06A3BC3C: 881e1539  strb w8, [x20, #0x547]
0x06A3BC40: 00e4006f  movi v0.2d, #0000000000000000
0x06A3BC44: ff1300f9  str xzr, [sp, #0x20]
0x06A3BC48: e00300ad  stp q0, q0, [sp]
0x06A3BC4C: 601a40f9  ldr x0, [x19, #0x30]
0x06A3BC50: e00800b4  cbz x0, #0x6a3bd6c
0x06A3BC54: a8670090  adrp x8, #0x772f000
0x06A3BC58: 08b943f9  ldr x8, [x8, #0x770]
0x06A3BC5C: 010140f9  ldr x1, [x8]
0x06A3BC60: eae68f97  bl #0x4e35808
0x06A3BC64: c0060034  cbz w0, #0x6a3bd3c
0x06A3BC68: 601a40f9  ldr x0, [x19, #0x30]
0x06A3BC6C: 000800b4  cbz x0, #0x6a3bd6c
0x06A3BC70: a8670090  adrp x8, #0x772f000
0x06A3BC74: 08f142f9  ldr x8, [x8, #0x5e0]
0x06A3BC78: b7670090  adrp x23, #0x772f000
0x06A3BC7C: b6670090  adrp x22, #0x772f000
0x06A3BC80: 010140f9  ldr x1, [x8]
0x06A3BC84: f7fa42f9  ldr x23, [x23, #0x5f0]
0x06A3BC88: d6f642f9  ldr x22, [x22, #0x5e8]
0x06A3BC8C: e8030091  mov x8, sp
0x06A3BC90: c0e88f97  bl #0x4e35f90
0x06A3BC94: 946000f0  adrp x20, #0x764e000
0x06A3BC98: 940647f9  ldr x20, [x20, #0xe08]
0x06A3BC9C: 0810b012  movn w8, #0x8080, lsl #16
0x06A3BCA0: f3031faa  mov x19, xzr
0x06A3BCA4: d8960090  adrp x24, #0x7d13000
0x06A3BCA8: 0c01271e  fmov s12, w8
0x06A3BCAC: 39008052  movz w25, #0x1
0x06A3BCB0: e10240f9  ldr x1, [x23]
0x06A3BCB4: e0030091  mov x0, sp
0x06A3BCB8: 79309897  bl #0x5047e9c
0x06A3BCBC: 80030036  tbz w0, #0, #0x6a3bd2c
0x06A3BCC0: f50f40f9  ldr x21, [sp, #0x18]
0x06A3BCC4: 350500b4  cbz x21, #0x6a3bd68
0x06A3BCC8: e00315aa  mov x0, x21
0x06A3BCCC: e1031faa  mov x1, xzr
0x06A3BCD0: 87b71294  bl #0x6ee9aec
0x06A3BCD4: 086b5b39  ldrb w8, [x24, #0x6da]
0x06A3BCD8: 0a1ca04e  mov v10.16b, v0.16b
0x06A3BCDC: 2b1ca14e  mov v11.16b, v1.16b
0x06A3BCE0: 88000035  cbnz w8, #0x6a3bcf0
0x06A3BCE4: e00314aa  mov x0, x20
0x06A3BCE8: 4c131d97  bl #0x3180a18
0x06A3BCEC: 196b1b39  strb w25, [x24, #0x6da]
0x06A3BCF0: 800240f9  ldr x0, [x20]
0x06A3BCF4: 08e040b9  ldr w8, [x0, #0xe0]
0x06A3BCF8: 48000035  cbnz w8, #0x6a3bd00
0x06A3BCFC: a4131d97  bl #0x3180b8c
0x06A3BD00: 20392a1e  fsub s0, s9, s10
0x06A3BD04: 01392b1e  fsub s1, s8, s11
0x06A3BD08: 0008201e  fmul s0, s0, s0
0x06A3BD0C: 2108211e  fmul s1, s1, s1
0x06A3BD10: 0028211e  fadd s0, s0, s1
0x06A3BD14: 00c0211e  fsqrt s0, s0
0x06A3BD18: 00202c1e  fcmp s0, s12
0x06A3BD1C: a5fcff54  b.pl #0x6a3bcb0
0x06A3BD20: 0c1ca04e  mov v12.16b, v0.16b
0x06A3BD24: f30315aa  mov x19, x21
0x06A3BD28: e2ffff17  b #0x6a3bcb0
0x06A3BD2C: c10240f9  ldr x1, [x22]
0x06A3BD30: e0030091  mov x0, sp
0x06A3BD34: a3309897  bl #0x5047fc0
0x06A3BD38: 02000014  b #0x6a3bd40
0x06A3BD3C: f3031faa  mov x19, xzr
0x06A3BD40: e00313aa  mov x0, x19
0x06A3BD44: f44f49a9  ldp x20, x19, [sp, #0x90]
0x06A3BD48: f65748a9  ldp x22, x21, [sp, #0x80]
0x06A3BD4C: f85f47a9  ldp x24, x23, [sp, #0x70]
0x06A3BD50: fe6746a9  ldp x30, x25, [sp, #0x60]
0x06A3BD54: e923456d  ldp d9, d8, [sp, #0x50]
0x06A3BD58: eb2b446d  ldp d11, d10, [sp, #0x40]
0x06A3BD5C: ec1b40fd  ldr d12, [sp, #0x30]
0x06A3BD60: ff830291  add sp, sp, #0xa0
0x06A3BD64: c0035fd6  ret
0x06A3BD68: d1131d97  bl #0x3180cac
0x06A3BD6C: d0131d97  bl #0x3180cac
0x06A3BD70: 03000014  b #0x6a3bd7c
0x06A3BD74: 02000014  b #0x6a3bd7c
0x06A3BD78: 01000014  b #0x6a3bd7c
0x06A3BD7C: f40300aa  mov x20, x0
0x06A3BD80: 3f040071  cmp w1, #1
0x06A3BD84: 61010054  b.ne #0x6a3bdb0
0x06A3BD88: e00314aa  mov x0, x20
0x06A3BD8C: e14a1e94  bl #0x71ce910
0x06A3BD90: 150040f9  ldr x21, [x0]
0x06A3BD94: e34a1e94  bl #0x71ce920
0x06A3BD98: c10240f9  ldr x1, [x22]
0x06A3BD9C: e0030091  mov x0, sp
0x06A3BDA0: 88309897  bl #0x5047fc0
0x06A3BDA4: f5fcffb4  cbz x21, #0x6a3bd40
0x06A3BDA8: e00315aa  mov x0, x21
0x06A3BDAC: be131d97  bl #0x3180ca4
0x06A3BDB0: f5031faa  mov x21, xzr
0x06A3BDB4: 02000014  b #0x6a3bdbc
0x06A3BDB8: f40300aa  mov x20, x0
0x06A3BDBC: c10240f9  ldr x1, [x22]
0x06A3BDC0: e0030091  mov x0, sp
0x06A3BDC4: 7f309897  bl #0x5047fc0
0x06A3BDC8: 750000b5  cbnz x21, #0x6a3bdd4
0x06A3BDCC: e00314aa  mov x0, x20
0x06A3BDD0: e2a62097  bl #0x3265958
0x06A3BDD4: e00315aa  mov x0, x21
0x06A3BDD8: b3131d97  bl #0x3180ca4
0x06A3BDDC: ce350f97  bl #0x2e09514

; RVA 0x6A41C44 | public virtual void ToggleIndexText(bool isActive) { }
; bytes=4 sha256=110f46b5b35c069160560c6ad6786f647dd44e8760a52a46fc22dbbcd7630b91 status=arm64_complete_bound indexed_start=True
0x06A41C44: c0035fd6  ret

; RVA 0x6A3C980 | public void ClearBoard() { }
; bytes=512 sha256=155fb84e1603aff5f72e465851519665702a7df5214449d72eec1ff7e812d0a1 status=arm64_complete_bound indexed_start=True
0x06A3C980: ff0302d1  sub sp, sp, #0x80
0x06A3C984: fe2300f9  str x30, [sp, #0x40]
0x06A3C988: f85f05a9  stp x24, x23, [sp, #0x50]
0x06A3C98C: f65706a9  stp x22, x21, [sp, #0x60]
0x06A3C990: f44f07a9  stp x20, x19, [sp, #0x70]
0x06A3C994: 749700d0  adrp x20, #0x7d2a000
0x06A3C998: 88225539  ldrb w8, [x20, #0x548]
0x06A3C99C: f30300aa  mov x19, x0
0x06A3C9A0: 08030037  tbnz w8, #0, #0x6a3ca00
0x06A3C9A4: 806700f0  adrp x0, #0x772f000
0x06A3C9A8: 00e043f9  ldr x0, [x0, #0x7c0]
0x06A3C9AC: 1b101d97  bl #0x3180a18
0x06A3C9B0: 806700f0  adrp x0, #0x772f000
0x06A3C9B4: 00e443f9  ldr x0, [x0, #0x7c8]
0x06A3C9B8: 18101d97  bl #0x3180a18
0x06A3C9BC: 806700f0  adrp x0, #0x772f000
0x06A3C9C0: 00e843f9  ldr x0, [x0, #0x7d0]
0x06A3C9C4: 15101d97  bl #0x3180a18
0x06A3C9C8: 806700f0  adrp x0, #0x772f000
0x06A3C9CC: 00ec43f9  ldr x0, [x0, #0x7d8]
0x06A3C9D0: 12101d97  bl #0x3180a18
0x06A3C9D4: 806700f0  adrp x0, #0x772f000
0x06A3C9D8: 00f043f9  ldr x0, [x0, #0x7e0]
0x06A3C9DC: 0f101d97  bl #0x3180a18
0x06A3C9E0: 806000d0  adrp x0, #0x764e000
0x06A3C9E4: 007042f9  ldr x0, [x0, #0x4e0]
0x06A3C9E8: 0c101d97  bl #0x3180a18
0x06A3C9EC: 806700f0  adrp x0, #0x772f000
0x06A3C9F0: 00f443f9  ldr x0, [x0, #0x7e8]
0x06A3C9F4: 09101d97  bl #0x3180a18
0x06A3C9F8: 28008052  movz w8, #0x1
0x06A3C9FC: 88221539  strb w8, [x20, #0x548]
0x06A3CA00: ff7f02a9  stp xzr, xzr, [sp, #0x20]
0x06A3CA04: ff1b00f9  str xzr, [sp, #0x30]
0x06A3CA08: 601a40f9  ldr x0, [x19, #0x30]
0x06A3CA0C: a00700b4  cbz x0, #0x6a3cb00
0x06A3CA10: 886700f0  adrp x8, #0x772f000
0x06A3CA14: 08e543f9  ldr x8, [x8, #0x7c8]
0x06A3CA18: 010140f9  ldr x1, [x8]
0x06A3CA1C: d3e38f97  bl #0x4e35968
0x06A3CA20: 000700b4  cbz x0, #0x6a3cb00
0x06A3CA24: 886700f0  adrp x8, #0x772f000
0x06A3CA28: 08f543f9  ldr x8, [x8, #0x7e8]
0x06A3CA2C: 976700f0  adrp x23, #0x772f000
0x06A3CA30: f7ee43f9  ldr x23, [x23, #0x7d8]
0x06A3CA34: 986000d0  adrp x24, #0x764e000
0x06A3CA38: 010140f9  ldr x1, [x8]
0x06A3CA3C: 956700f0  adrp x21, #0x772f000
0x06A3CA40: 966700f0  adrp x22, #0x772f000
0x06A3CA44: 187342f9  ldr x24, [x24, #0x4e0]
0x06A3CA48: b5e243f9  ldr x21, [x21, #0x7c0]
0x06A3CA4C: d6ea43f9  ldr x22, [x22, #0x7d0]
0x06A3CA50: e8230091  add x8, sp, #8
0x06A3CA54: 20217397  bl #0x4704ed4
0x06A3CA58: e083c03c  ldur q0, [sp, #8]
0x06A3CA5C: e80f40f9  ldr x8, [sp, #0x18]
0x06A3CA60: e00b803d  str q0, [sp, #0x20]
0x06A3CA64: e81b00f9  str x8, [sp, #0x30]
0x06A3CA68: e10240f9  ldr x1, [x23]
0x06A3CA6C: e0830091  add x0, sp, #0x20
0x06A3CA70: b2309897  bl #0x5048d38
0x06A3CA74: 80020036  tbz w0, #0, #0x6a3cac4
0x06A3CA78: 000340f9  ldr x0, [x24]
0x06A3CA7C: f41b40f9  ldr x20, [sp, #0x30]
0x06A3CA80: 08e040b9  ldr w8, [x0, #0xe0]
0x06A3CA84: 48000035  cbnz w8, #0x6a3ca8c
0x06A3CA88: 41101d97  bl #0x3180b8c
0x06A3CA8C: e00314aa  mov x0, x20
0x06A3CA90: e1031faa  mov x1, xzr
0x06A3CA94: e2031faa  mov x2, xzr
0x06A3CA98: 37881294  bl #0x6edeb74
0x06A3CA9C: 60fe0736  tbz w0, #0, #0x6a3ca68
0x06A3CAA0: d40200b4  cbz x20, #0x6a3caf8
0x06A3CAA4: e00314aa  mov x0, x20
0x06A3CAA8: e1031faa  mov x1, xzr
0x06A3CAAC: 097d1294  bl #0x6edbed0
0x06A3CAB0: 600200b4  cbz x0, #0x6a3cafc
0x06A3CAB4: e1031f2a  mov w1, wzr
0x06A3CAB8: e2031faa  mov x2, xzr
0x06A3CABC: ec891294  bl #0x6edf26c
0x06A3CAC0: eaffff17  b #0x6a3ca68
0x06A3CAC4: c10240f9  ldr x1, [x22]
0x06A3CAC8: e0830091  add x0, sp, #0x20
0x06A3CACC: 9a309897  bl #0x5048d34
0x06A3CAD0: 601a40f9  ldr x0, [x19, #0x30]
0x06A3CAD4: 600100b4  cbz x0, #0x6a3cb00
0x06A3CAD8: a10240f9  ldr x1, [x21]
0x06A3CADC: 81e48f97  bl #0x4e35ce0
0x06A3CAE0: f44f47a9  ldp x20, x19, [sp, #0x70]
0x06A3CAE4: f65746a9  ldp x22, x21, [sp, #0x60]
0x06A3CAE8: f85f45a9  ldp x24, x23, [sp, #0x50]
0x06A3CAEC: fe2340f9  ldr x30, [sp, #0x40]
0x06A3CAF0: ff030291  add sp, sp, #0x80
0x06A3CAF4: c0035fd6  ret
0x06A3CAF8: 6d101d97  bl #0x3180cac
0x06A3CAFC: 6c101d97  bl #0x3180cac
0x06A3CB00: 6b101d97  bl #0x3180cac
0x06A3CB04: 05000014  b #0x6a3cb18
0x06A3CB08: 04000014  b #0x6a3cb18
0x06A3CB0C: 03000014  b #0x6a3cb18
0x06A3CB10: 02000014  b #0x6a3cb18
0x06A3CB14: 01000014  b #0x6a3cb18
0x06A3CB18: 3f040071  cmp w1, #1
0x06A3CB1C: 61010054  b.ne #0x6a3cb48
0x06A3CB20: 7c471e94  bl #0x71ce910
0x06A3CB24: 080040f9  ldr x8, [x0]
0x06A3CB28: e82700f9  str x8, [sp, #0x48]
0x06A3CB2C: 7d471e94  bl #0x71ce920
0x06A3CB30: c10240f9  ldr x1, [x22]
0x06A3CB34: e0830091  add x0, sp, #0x20
0x06A3CB38: 7f309897  bl #0x5048d34
0x06A3CB3C: e02740f9  ldr x0, [sp, #0x48]
0x06A3CB40: 80fcffb4  cbz x0, #0x6a3cad0
0x06A3CB44: 58101d97  bl #0x3180ca4
0x06A3CB48: f30300aa  mov x19, x0
0x06A3CB4C: ff2700f9  str xzr, [sp, #0x48]
0x06A3CB50: 02000014  b #0x6a3cb58
0x06A3CB54: f30300aa  mov x19, x0
0x06A3CB58: c10240f9  ldr x1, [x22]
0x06A3CB5C: e0830091  add x0, sp, #0x20
0x06A3CB60: 75309897  bl #0x5048d34
0x06A3CB64: e82740f9  ldr x8, [sp, #0x48]
0x06A3CB68: 680000b5  cbnz x8, #0x6a3cb74
0x06A3CB6C: e00313aa  mov x0, x19
0x06A3CB70: 7aa32097  bl #0x3265958
0x06A3CB74: e02740f9  ldr x0, [sp, #0x48]
0x06A3CB78: 4b101d97  bl #0x3180ca4
0x06A3CB7C: 66320f97  bl #0x2e09514

; RVA 0x6A409D8 | protected void .ctor() { }
; bytes=136 sha256=94f65aa8fdedec42605bcd13c5203aca8663daae555dd8623622b05596474c8e status=arm64_complete_bound indexed_start=True
0x06A409D8: fe0f1df8  str x30, [sp, #-0x30]!
0x06A409DC: f65701a9  stp x22, x21, [sp, #0x10]
0x06A409E0: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A409E4: 559700d0  adrp x21, #0x7d2a000
0x06A409E8: 16640090  adrp x22, #0x76c0000
0x06A409EC: 14640090  adrp x20, #0x76c0000
0x06A409F0: a8265539  ldrb w8, [x21, #0x549]
0x06A409F4: d63e44f9  ldr x22, [x22, #0x878]
0x06A409F8: 944244f9  ldr x20, [x20, #0x880]
0x06A409FC: f30300aa  mov x19, x0
0x06A40A00: 28010037  tbnz w8, #0, #0x6a40a24
0x06A40A04: 00640090  adrp x0, #0x76c0000
0x06A40A08: 004044f9  ldr x0, [x0, #0x880]
0x06A40A0C: 03001d97  bl #0x3180a18
0x06A40A10: 00640090  adrp x0, #0x76c0000
0x06A40A14: 003c44f9  ldr x0, [x0, #0x878]
0x06A40A18: 00001d97  bl #0x3180a18
0x06A40A1C: 28008052  movz w8, #0x1
0x06A40A20: a8261539  strb w8, [x21, #0x549]
0x06A40A24: c00240f9  ldr x0, [x22]
0x06A40A28: 9e001d97  bl #0x3180ca0
0x06A40A2C: 810240f9  ldr x1, [x20]
0x06A40A30: f40300aa  mov x20, x0
0x06A40A34: cad08f97  bl #0x4e34d5c
0x06A40A38: e00313aa  mov x0, x19
0x06A40A3C: 140c03f8  str x20, [x0, #0x30]!
0x06A40A40: e10314aa  mov x1, x20
0x06A40A44: e0ff1c97  bl #0x31809c4
0x06A40A48: e00313aa  mov x0, x19
0x06A40A4C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A40A50: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A40A54: e1031faa  mov x1, xzr
0x06A40A58: fe0743f8  ldr x30, [sp], #0x30
0x06A40A5C: 5988f917  b #0x68a2bc0

