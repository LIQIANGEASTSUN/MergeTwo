; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 604 MergeEngine.ECS.Util.ComponentCacheUtil
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6270A60 | public static List<Type> GetTypesToCacheAs(Type componentType) { }
; bytes=884 sha256=1366674085da5b32cebd0048033463e0fa8d174d646b5d943c4bae6fa701e140 status=arm64_complete_bound indexed_start=True
0x06270A60: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x06270A64: fc6f01a9  stp x28, x27, [sp, #0x10]
0x06270A68: fa6702a9  stp x26, x25, [sp, #0x20]
0x06270A6C: f85f03a9  stp x24, x23, [sp, #0x30]
0x06270A70: f65704a9  stp x22, x21, [sp, #0x40]
0x06270A74: f44f05a9  stp x20, x19, [sp, #0x50]
0x06270A78: b4d500b0  adrp x20, #0x7d25000
0x06270A7C: 56a300f0  adrp x22, #0x76db000
0x06270A80: 888e5039  ldrb w8, [x20, #0x423]
0x06270A84: d69243f9  ldr x22, [x22, #0x720]
0x06270A88: f30300aa  mov x19, x0
0x06270A8C: 88040037  tbnz w8, #0, #0x6270b1c
0x06270A90: a0a300d0  adrp x0, #0x76e6000
0x06270A94: 00d442f9  ldr x0, [x0, #0x5a8]
0x06270A98: e03f3c97  bl #0x3180a18
0x06270A9C: a0a300d0  adrp x0, #0x76e6000
0x06270AA0: 00d842f9  ldr x0, [x0, #0x5b0]
0x06270AA4: dd3f3c97  bl #0x3180a18
0x06270AA8: a0a300d0  adrp x0, #0x76e6000
0x06270AAC: 00dc42f9  ldr x0, [x0, #0x5b8]
0x06270AB0: da3f3c97  bl #0x3180a18
0x06270AB4: 40a300f0  adrp x0, #0x76db000
0x06270AB8: 009043f9  ldr x0, [x0, #0x720]
0x06270ABC: d73f3c97  bl #0x3180a18
0x06270AC0: a0a300d0  adrp x0, #0x76e6000
0x06270AC4: 00e042f9  ldr x0, [x0, #0x5c0]
0x06270AC8: d43f3c97  bl #0x3180a18
0x06270ACC: a0a300d0  adrp x0, #0x76e6000
0x06270AD0: 00e442f9  ldr x0, [x0, #0x5c8]
0x06270AD4: d13f3c97  bl #0x3180a18
0x06270AD8: a0a300d0  adrp x0, #0x76e6000
0x06270ADC: 00e842f9  ldr x0, [x0, #0x5d0]
0x06270AE0: ce3f3c97  bl #0x3180a18
0x06270AE4: e09e00d0  adrp x0, #0x764e000
0x06270AE8: 00cc45f9  ldr x0, [x0, #0xb98]
0x06270AEC: cb3f3c97  bl #0x3180a18
0x06270AF0: e09e00d0  adrp x0, #0x764e000
0x06270AF4: 007045f9  ldr x0, [x0, #0xae0]
0x06270AF8: c83f3c97  bl #0x3180a18
0x06270AFC: e09e00d0  adrp x0, #0x764e000
0x06270B00: 006c45f9  ldr x0, [x0, #0xad8]
0x06270B04: c53f3c97  bl #0x3180a18
0x06270B08: e09e00d0  adrp x0, #0x764e000
0x06270B0C: 00ac42f9  ldr x0, [x0, #0x558]
0x06270B10: c23f3c97  bl #0x3180a18
0x06270B14: 28008052  movz w8, #0x1
0x06270B18: 888e1039  strb w8, [x20, #0x423]
0x06270B1C: c00240f9  ldr x0, [x22]
0x06270B20: 08e040b9  ldr w8, [x0, #0xe0]
0x06270B24: 68000035  cbnz w8, #0x6270b30
0x06270B28: 19403c97  bl #0x3180b8c
0x06270B2C: c00240f9  ldr x0, [x22]
0x06270B30: 085c40f9  ldr x8, [x0, #0xb8]
0x06270B34: 000140f9  ldr x0, [x8]
0x06270B38: a01400b4  cbz x0, #0x6270dcc
0x06270B3C: a8a300d0  adrp x8, #0x76e6000
0x06270B40: 08e542f9  ldr x8, [x8, #0x5c8]
0x06270B44: b7a300d0  adrp x23, #0x76e6000
0x06270B48: e10313aa  mov x1, x19
0x06270B4C: 020140f9  ldr x2, [x8]
0x06270B50: f7ea42f9  ldr x23, [x23, #0x5d0]
0x06270B54: 07c9b197  bl #0x4ee2f70
0x06270B58: 40020036  tbz w0, #0, #0x6270ba0
0x06270B5C: c00240f9  ldr x0, [x22]
0x06270B60: 08e040b9  ldr w8, [x0, #0xe0]
0x06270B64: 68000035  cbnz w8, #0x6270b70
0x06270B68: 09403c97  bl #0x3180b8c
0x06270B6C: c00240f9  ldr x0, [x22]
0x06270B70: 085c40f9  ldr x8, [x0, #0xb8]
0x06270B74: 000140f9  ldr x0, [x8]
0x06270B78: a01200b4  cbz x0, #0x6270dcc
0x06270B7C: e20240f9  ldr x2, [x23]
0x06270B80: e10313aa  mov x1, x19
0x06270B84: f44f45a9  ldp x20, x19, [sp, #0x50]
0x06270B88: f65744a9  ldp x22, x21, [sp, #0x40]
0x06270B8C: f85f43a9  ldp x24, x23, [sp, #0x30]
0x06270B90: fa6742a9  ldp x26, x25, [sp, #0x20]
0x06270B94: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x06270B98: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x06270B9C: 58c8b117  b #0x4ee2cfc
0x06270BA0: c00240f9  ldr x0, [x22]
0x06270BA4: 08e040b9  ldr w8, [x0, #0xe0]
0x06270BA8: 68000035  cbnz w8, #0x6270bb4
0x06270BAC: f83f3c97  bl #0x3180b8c
0x06270BB0: c00240f9  ldr x0, [x22]
0x06270BB4: e99e00d0  adrp x9, #0x764e000
0x06270BB8: 085c40f9  ldr x8, [x0, #0xb8]
0x06270BBC: 296d45f9  ldr x9, [x9, #0xad8]
0x06270BC0: 140140f9  ldr x20, [x8]
0x06270BC4: 200140f9  ldr x0, [x9]
0x06270BC8: 36403c97  bl #0x3180ca0
0x06270BCC: e89e00d0  adrp x8, #0x764e000
0x06270BD0: 087145f9  ldr x8, [x8, #0xae0]
0x06270BD4: f50300aa  mov x21, x0
0x06270BD8: 010140f9  ldr x1, [x8]
0x06270BDC: 174c7797  bl #0x4043c38
0x06270BE0: 740f00b4  cbz x20, #0x6270dcc
0x06270BE4: a8a300d0  adrp x8, #0x76e6000
0x06270BE8: 08e142f9  ldr x8, [x8, #0x5c0]
0x06270BEC: e00314aa  mov x0, x20
0x06270BF0: e10313aa  mov x1, x19
0x06270BF4: e20315aa  mov x2, x21
0x06270BF8: 030140f9  ldr x3, [x8]
0x06270BFC: 60c8b197  bl #0x4ee2d7c
0x06270C00: b8a300d0  adrp x24, #0x76e6000
0x06270C04: f99e00d0  adrp x25, #0x764e000
0x06270C08: fc9e00d0  adrp x28, #0x764e000
0x06270C0C: 18df42f9  ldr x24, [x24, #0x5b8]
0x06270C10: 39af42f9  ldr x25, [x25, #0x558]
0x06270C14: 9ccf45f9  ldr x28, [x28, #0xb98]
0x06270C18: f40313aa  mov x20, x19
0x06270C1C: 200340f9  ldr x0, [x25]
0x06270C20: 150340f9  ldr x21, [x24]
0x06270C24: 08e040b9  ldr w8, [x0, #0xe0]
0x06270C28: 48000035  cbnz w8, #0x6270c30
0x06270C2C: d83f3c97  bl #0x3180b8c
0x06270C30: e00315aa  mov x0, x21
0x06270C34: e1031faa  mov x1, xzr
0x06270C38: 63d1d097  bl #0x56a51c4
0x06270C3C: e10300aa  mov x1, x0
0x06270C40: e00314aa  mov x0, x20
0x06270C44: e2031faa  mov x2, xzr
0x06270C48: fdfbd097  bl #0x56afc3c
0x06270C4C: 80f80736  tbz w0, #0, #0x6270b5c
0x06270C50: 200340f9  ldr x0, [x25]
0x06270C54: 08e040b9  ldr w8, [x0, #0xe0]
0x06270C58: 48000035  cbnz w8, #0x6270c60
0x06270C5C: cc3f3c97  bl #0x3180b8c
0x06270C60: e00314aa  mov x0, x20
0x06270C64: e1031faa  mov x1, xzr
0x06270C68: e2031faa  mov x2, xzr
0x06270C6C: f4fbd097  bl #0x56afc3c
0x06270C70: 60f70736  tbz w0, #0, #0x6270b5c
0x06270C74: 200340f9  ldr x0, [x25]
0x06270C78: a9a300d0  adrp x9, #0x76e6000
0x06270C7C: 08e040b9  ldr w8, [x0, #0xe0]
0x06270C80: 29d542f9  ldr x9, [x9, #0x5a8]
0x06270C84: 350140f9  ldr x21, [x9]
0x06270C88: 48000035  cbnz w8, #0x6270c90
0x06270C8C: c03f3c97  bl #0x3180b8c
0x06270C90: e00315aa  mov x0, x21
0x06270C94: e1031faa  mov x1, xzr
0x06270C98: 4bd1d097  bl #0x56a51c4
0x06270C9C: e10300aa  mov x1, x0
0x06270CA0: e00314aa  mov x0, x20
0x06270CA4: e2031faa  mov x2, xzr
0x06270CA8: 1848d197  bl #0x56c2d08
0x06270CAC: 000800b4  cbz x0, #0x6270dac
0x06270CB0: a8a300d0  adrp x8, #0x76e6000
0x06270CB4: 090040f9  ldr x9, [x0]
0x06270CB8: 08d942f9  ldr x8, [x8, #0x5b0]
0x06270CBC: 2bc14439  ldrb w11, [x9, #0x130]
0x06270CC0: 080140f9  ldr x8, [x8]
0x06270CC4: 0ac14439  ldrb w10, [x8, #0x130]
0x06270CC8: 7f010a6b  cmp w11, w10
0x06270CCC: 03070054  b.lo #0x6270dac
0x06270CD0: 296540f9  ldr x9, [x9, #0xc8]
0x06270CD4: 290d0a8b  add x9, x9, x10, lsl #3
0x06270CD8: 29815ff8  ldur x9, [x9, #-8]
0x06270CDC: 3f0108eb  cmp x9, x8
0x06270CE0: 61060054  b.ne #0x6270dac
0x06270CE4: 1d0840f9  ldr x29, [x0, #0x10]
0x06270CE8: 3d0700b4  cbz x29, #0x6270dcc
0x06270CEC: a80f40f9  ldr x8, [x29, #0x18]
0x06270CF0: 1f050071  cmp w8, #1
0x06270CF4: cb050054  b.lt #0x6270dac
0x06270CF8: fb031faa  mov x27, xzr
0x06270CFC: 087d4092  and x8, x8, #0xffffffff
0x06270D00: ba830091  add x26, x29, #0x20
0x06270D04: 7f4328eb  cmp x27, w8, uxtw
0x06270D08: 42060054  b.hs #0x6270dd0
0x06270D0C: c00240f9  ldr x0, [x22]
0x06270D10: 557b7bf8  ldr x21, [x26, x27, lsl #3]
0x06270D14: 08e040b9  ldr w8, [x0, #0xe0]
0x06270D18: 68000035  cbnz w8, #0x6270d24
0x06270D1C: 9c3f3c97  bl #0x3180b8c
0x06270D20: c00240f9  ldr x0, [x22]
0x06270D24: 085c40f9  ldr x8, [x0, #0xb8]
0x06270D28: 000140f9  ldr x0, [x8]
0x06270D2C: 000500b4  cbz x0, #0x6270dcc
0x06270D30: e20240f9  ldr x2, [x23]
0x06270D34: e10313aa  mov x1, x19
0x06270D38: f1c7b197  bl #0x4ee2cfc
0x06270D3C: 800400b4  cbz x0, #0x6270dcc
0x06270D40: 0a1c40b9  ldr w10, [x0, #0x1c]
0x06270D44: 080840f9  ldr x8, [x0, #0x10]
0x06270D48: 890340f9  ldr x9, [x28]
0x06270D4C: 4a050011  add w10, w10, #1
0x06270D50: 0a1c00b9  str w10, [x0, #0x1c]
0x06270D54: c80300b4  cbz x8, #0x6270dcc
0x06270D58: 0a1880b9  ldrsw x10, [x0, #0x18]
0x06270D5C: 0b1940b9  ldr w11, [x8, #0x18]
0x06270D60: 5f010b6b  cmp w10, w11
0x06270D64: 22010054  b.hs #0x6270d88
0x06270D68: 49050011  add w9, w10, #1
0x06270D6C: 080d0a8b  add x8, x8, x10, lsl #3
0x06270D70: 091800b9  str w9, [x0, #0x18]
0x06270D74: 150d02f8  str x21, [x8, #0x20]!
0x06270D78: e00308aa  mov x0, x8
0x06270D7C: e10315aa  mov x1, x21
0x06270D80: 113f3c97  bl #0x31809c4
0x06270D84: 06000014  b #0x6270d9c
0x06270D88: 281140f9  ldr x8, [x9, #0x20]
0x06270D8C: e10315aa  mov x1, x21
0x06270D90: 086140f9  ldr x8, [x8, #0xc0]
0x06270D94: 023940f9  ldr x2, [x8, #0x70]
0x06270D98: b54d7797  bl #0x404446c
0x06270D9C: a81b40b9  ldr w8, [x29, #0x18]
0x06270DA0: 7b070091  add x27, x27, #1
0x06270DA4: 7fc328eb  cmp x27, w8, sxtw
0x06270DA8: ebfaff54  b.lt #0x6270d04
0x06270DAC: 140100b4  cbz x20, #0x6270dcc
0x06270DB0: 880240f9  ldr x8, [x20]
0x06270DB4: e00314aa  mov x0, x20
0x06270DB8: 094544f9  ldr x9, [x8, #0x888]
0x06270DBC: 014944f9  ldr x1, [x8, #0x890]
0x06270DC0: 20013fd6  blr x9
0x06270DC4: f40300aa  mov x20, x0
0x06270DC8: 95ffff17  b #0x6270c1c
0x06270DCC: b83f3c97  bl #0x3180cac
0x06270DD0: b93f3c97  bl #0x3180cb4

; RVA 0x6270DD4 | private static void .cctor() { }
; bytes=152 sha256=49ec1825ebbb85ac019858c422ef8591afd29459757f2bc2255f64574aa69525 status=arm64_complete_bound indexed_start=True
0x06270DD4: fe0f1df8  str x30, [sp, #-0x30]!
0x06270DD8: f65701a9  stp x22, x21, [sp, #0x10]
0x06270DDC: f44f02a9  stp x20, x19, [sp, #0x20]
0x06270DE0: b5d500b0  adrp x21, #0x7d25000
0x06270DE4: b6a300d0  adrp x22, #0x76e6000
0x06270DE8: b3a300d0  adrp x19, #0x76e6000
0x06270DEC: 54a300f0  adrp x20, #0x76db000
0x06270DF0: a8925039  ldrb w8, [x21, #0x424]
0x06270DF4: d6ee42f9  ldr x22, [x22, #0x5d8]
0x06270DF8: 73f242f9  ldr x19, [x19, #0x5e0]
0x06270DFC: 949243f9  ldr x20, [x20, #0x720]
0x06270E00: 88010037  tbnz w8, #0, #0x6270e30
0x06270E04: 40a300f0  adrp x0, #0x76db000
0x06270E08: 009043f9  ldr x0, [x0, #0x720]
0x06270E0C: 033f3c97  bl #0x3180a18
0x06270E10: a0a300d0  adrp x0, #0x76e6000
0x06270E14: 00f042f9  ldr x0, [x0, #0x5e0]
0x06270E18: 003f3c97  bl #0x3180a18
0x06270E1C: a0a300d0  adrp x0, #0x76e6000
0x06270E20: 00ec42f9  ldr x0, [x0, #0x5d8]
0x06270E24: fd3e3c97  bl #0x3180a18
0x06270E28: 28008052  movz w8, #0x1
0x06270E2C: a8921039  strb w8, [x21, #0x424]
0x06270E30: c00240f9  ldr x0, [x22]
0x06270E34: 9b3f3c97  bl #0x3180ca0
0x06270E38: 610240f9  ldr x1, [x19]
0x06270E3C: f30300aa  mov x19, x0
0x06270E40: 59c4b197  bl #0x4ee1fa4
0x06270E44: 880240f9  ldr x8, [x20]
0x06270E48: e10313aa  mov x1, x19
0x06270E4C: f65741a9  ldp x22, x21, [sp, #0x10]
0x06270E50: 085d40f9  ldr x8, [x8, #0xb8]
0x06270E54: 130100f9  str x19, [x8]
0x06270E58: 880240f9  ldr x8, [x20]
0x06270E5C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06270E60: 005d40f9  ldr x0, [x8, #0xb8]
0x06270E64: fe0743f8  ldr x30, [sp], #0x30
0x06270E68: d73e3c17  b #0x31809c4

