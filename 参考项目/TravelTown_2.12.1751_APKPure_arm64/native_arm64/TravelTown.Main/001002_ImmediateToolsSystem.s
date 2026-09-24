; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1002 MergeEngine.ECS.Systems.Items.ImmidateToolsSystem.ImmediateToolsSystem
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x67A19B4 | public MutableBindableProperty<bool> get_IsImmediateToolsEnabled() { }
; bytes=8 sha256=d598436bff3a9dd6f386d52e9d196b4b622d920d9df2d4b374773cddd2c4c4b8 status=arm64_complete_bound indexed_start=True
0x067A19B4: 002c40f9  ldr x0, [x0, #0x58]
0x067A19B8: c0035fd6  ret

; RVA 0x67A19BC | public bool IsToolbox(IMergeItem mergeItem) { }
; bytes=276 sha256=66cf21ed2436ee8cfa15f71bc40bab7cab7ccd56d4a83c82b45ff52e167e65a4 status=arm64_complete_bound indexed_start=True
0x067A19BC: fe0f1ef8  str x30, [sp, #-0x20]!
0x067A19C0: f44f01a9  stp x20, x19, [sp, #0x10]
0x067A19C4: 34ac00f0  adrp x20, #0x7d28000
0x067A19C8: 88867739  ldrb w8, [x20, #0xde1]
0x067A19CC: f30301aa  mov x19, x1
0x067A19D0: c8000037  tbnz w8, #0, #0x67a19e8
0x067A19D4: e07600b0  adrp x0, #0x767e000
0x067A19D8: 00a442f9  ldr x0, [x0, #0x548]
0x067A19DC: 0f7c2797  bl #0x3180a18
0x067A19E0: 28008052  movz w8, #0x1
0x067A19E4: 88863739  strb w8, [x20, #0xde1]
0x067A19E8: 330700b4  cbz x19, #0x67a1acc
0x067A19EC: f47600b0  adrp x20, #0x767e000
0x067A19F0: 680240f9  ldr x8, [x19]
0x067A19F4: 94a642f9  ldr x20, [x20, #0x548]
0x067A19F8: 095d4279  ldrh w9, [x8, #0x12e]
0x067A19FC: 810240f9  ldr x1, [x20]
0x067A1A00: 290100b4  cbz x9, #0x67a1a24
0x067A1A04: 0a5940f9  ldr x10, [x8, #0xb0]
0x067A1A08: 4a210091  add x10, x10, #8
0x067A1A0C: 4b815ff8  ldur x11, [x10, #-8]
0x067A1A10: 7f0101eb  cmp x11, x1
0x067A1A14: 00010054  b.eq #0x67a1a34
0x067A1A18: 290500f1  subs x9, x9, #1
0x067A1A1C: 4a410091  add x10, x10, #0x10
0x067A1A20: 61ffff54  b.ne #0x67a1a0c
0x067A1A24: 82018052  movz w2, #0xc
0x067A1A28: e00313aa  mov x0, x19
0x067A1A2C: 39d42697  bl #0x3156b10
0x067A1A30: 05000014  b #0x67a1a44
0x067A1A34: 490140b9  ldr w9, [x10]
0x067A1A38: 29310011  add w9, w9, #0xc
0x067A1A3C: 08d1298b  add x8, x8, w9, sxtw #4
0x067A1A40: 00e10491  add x0, x8, #0x138
0x067A1A44: 080440a9  ldp x8, x1, [x0]
0x067A1A48: e00313aa  mov x0, x19
0x067A1A4C: 00013fd6  blr x8
0x067A1A50: 800300b4  cbz x0, #0x67a1ac0
0x067A1A54: 680240f9  ldr x8, [x19]
0x067A1A58: 810240f9  ldr x1, [x20]
0x067A1A5C: 095d4279  ldrh w9, [x8, #0x12e]
0x067A1A60: 290100b4  cbz x9, #0x67a1a84
0x067A1A64: 0a5940f9  ldr x10, [x8, #0xb0]
0x067A1A68: 4a210091  add x10, x10, #8
0x067A1A6C: 4b815ff8  ldur x11, [x10, #-8]
0x067A1A70: 7f0101eb  cmp x11, x1
0x067A1A74: 00010054  b.eq #0x67a1a94
0x067A1A78: 290500f1  subs x9, x9, #1
0x067A1A7C: 4a410091  add x10, x10, #0x10
0x067A1A80: 61ffff54  b.ne #0x67a1a6c
0x067A1A84: 82018052  movz w2, #0xc
0x067A1A88: e00313aa  mov x0, x19
0x067A1A8C: 21d42697  bl #0x3156b10
0x067A1A90: 05000014  b #0x67a1aa4
0x067A1A94: 490140b9  ldr w9, [x10]
0x067A1A98: 29310011  add w9, w9, #0xc
0x067A1A9C: 08d1298b  add x8, x8, w9, sxtw #4
0x067A1AA0: 00e10491  add x0, x8, #0x138
0x067A1AA4: 080440a9  ldp x8, x1, [x0]
0x067A1AA8: e00313aa  mov x0, x19
0x067A1AAC: 00013fd6  blr x8
0x067A1AB0: e00000b4  cbz x0, #0x67a1acc
0x067A1AB4: 08404039  ldrb w8, [x0, #0x10]
0x067A1AB8: 1f010071  cmp w8, #0
0x067A1ABC: e0079f1a  cset w0, ne
0x067A1AC0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x067A1AC4: fe0742f8  ldr x30, [sp], #0x20
0x067A1AC8: c0035fd6  ret
0x067A1ACC: 787c2797  bl #0x3180cac

; RVA 0x67A1AD0 | public bool IsTool(IMergeItem mergeItem) { }
; bytes=292 sha256=d570a3c2502856ce1e81c45ed71e26d5097a79506a452fe324ba21b260b7f801 status=arm64_complete_bound indexed_start=True
0x067A1AD0: fe0f1ef8  str x30, [sp, #-0x20]!
0x067A1AD4: f44f01a9  stp x20, x19, [sp, #0x10]
0x067A1AD8: 34ac00f0  adrp x20, #0x7d28000
0x067A1ADC: 888a7739  ldrb w8, [x20, #0xde2]
0x067A1AE0: f30301aa  mov x19, x1
0x067A1AE4: c8000037  tbnz w8, #0, #0x67a1afc
0x067A1AE8: e07600b0  adrp x0, #0x767e000
0x067A1AEC: 00a442f9  ldr x0, [x0, #0x548]
0x067A1AF0: ca7b2797  bl #0x3180a18
0x067A1AF4: 28008052  movz w8, #0x1
0x067A1AF8: 888a3739  strb w8, [x20, #0xde2]
0x067A1AFC: b30700b4  cbz x19, #0x67a1bf0
0x067A1B00: f47600b0  adrp x20, #0x767e000
0x067A1B04: 680240f9  ldr x8, [x19]
0x067A1B08: 94a642f9  ldr x20, [x20, #0x548]
0x067A1B0C: 095d4279  ldrh w9, [x8, #0x12e]
0x067A1B10: 810240f9  ldr x1, [x20]
0x067A1B14: 290100b4  cbz x9, #0x67a1b38
0x067A1B18: 0a5940f9  ldr x10, [x8, #0xb0]
0x067A1B1C: 4a210091  add x10, x10, #8
0x067A1B20: 4b815ff8  ldur x11, [x10, #-8]
0x067A1B24: 7f0101eb  cmp x11, x1
0x067A1B28: 00010054  b.eq #0x67a1b48
0x067A1B2C: 290500f1  subs x9, x9, #1
0x067A1B30: 4a410091  add x10, x10, #0x10
0x067A1B34: 61ffff54  b.ne #0x67a1b20
0x067A1B38: e2028052  movz w2, #0x17
0x067A1B3C: e00313aa  mov x0, x19
0x067A1B40: f4d32697  bl #0x3156b10
0x067A1B44: 05000014  b #0x67a1b58
0x067A1B48: 490140b9  ldr w9, [x10]
0x067A1B4C: 295d0011  add w9, w9, #0x17
0x067A1B50: 08d1298b  add x8, x8, w9, sxtw #4
0x067A1B54: 00e10491  add x0, x8, #0x138
0x067A1B58: 080440a9  ldp x8, x1, [x0]
0x067A1B5C: e00313aa  mov x0, x19
0x067A1B60: 00013fd6  blr x8
0x067A1B64: 200200b4  cbz x0, #0x67a1ba8
0x067A1B68: 680240f9  ldr x8, [x19]
0x067A1B6C: 810240f9  ldr x1, [x20]
0x067A1B70: 095d4279  ldrh w9, [x8, #0x12e]
0x067A1B74: 290100b4  cbz x9, #0x67a1b98
0x067A1B78: 0a5940f9  ldr x10, [x8, #0xb0]
0x067A1B7C: 4a210091  add x10, x10, #8
0x067A1B80: 4b815ff8  ldur x11, [x10, #-8]
0x067A1B84: 7f0101eb  cmp x11, x1
0x067A1B88: 40010054  b.eq #0x67a1bb0
0x067A1B8C: 290500f1  subs x9, x9, #1
0x067A1B90: 4a410091  add x10, x10, #0x10
0x067A1B94: 61ffff54  b.ne #0x67a1b80
0x067A1B98: e2028052  movz w2, #0x17
0x067A1B9C: e00313aa  mov x0, x19
0x067A1BA0: dcd32697  bl #0x3156b10
0x067A1BA4: 07000014  b #0x67a1bc0
0x067A1BA8: e8031f2a  mov w8, wzr
0x067A1BAC: 0d000014  b #0x67a1be0
0x067A1BB0: 490140b9  ldr w9, [x10]
0x067A1BB4: 295d0011  add w9, w9, #0x17
0x067A1BB8: 08d1298b  add x8, x8, w9, sxtw #4
0x067A1BBC: 00e10491  add x0, x8, #0x138
0x067A1BC0: 080440a9  ldp x8, x1, [x0]
0x067A1BC4: e00313aa  mov x0, x19
0x067A1BC8: 00013fd6  blr x8
0x067A1BCC: 200100b4  cbz x0, #0x67a1bf0
0x067A1BD0: 000840f9  ldr x0, [x0, #0x10]
0x067A1BD4: e1031faa  mov x1, xzr
0x067A1BD8: b557b597  bl #0x54f7aac
0x067A1BDC: 08000052  eor w8, w0, #1
0x067A1BE0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x067A1BE4: 00010012  and w0, w8, #1
0x067A1BE8: fe0742f8  ldr x30, [sp], #0x20
0x067A1BEC: c0035fd6  ret
0x067A1BF0: 2f7c2797  bl #0x3180cac

; RVA 0x67A1BF4 | protected override void InitializeSystem() { }
; bytes=392 sha256=09fd1b15fd4b4775adf70167b80d633a22c09a6f1967d80b485ca59e90c4f76d status=arm64_complete_bound indexed_start=True
0x067A1BF4: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x067A1BF8: f65701a9  stp x22, x21, [sp, #0x10]
0x067A1BFC: f44f02a9  stp x20, x19, [sp, #0x20]
0x067A1C00: 34ac00f0  adrp x20, #0x7d28000
0x067A1C04: 888e7739  ldrb w8, [x20, #0xde3]
0x067A1C08: f30300aa  mov x19, x0
0x067A1C0C: 08030037  tbnz w8, #0, #0x67a1c6c
0x067A1C10: 607600d0  adrp x0, #0x766f000
0x067A1C14: 008c41f9  ldr x0, [x0, #0x318]
0x067A1C18: 807b2797  bl #0x3180a18
0x067A1C1C: 807600d0  adrp x0, #0x7673000
0x067A1C20: 001440f9  ldr x0, [x0, #0x28]
0x067A1C24: 7d7b2797  bl #0x3180a18
0x067A1C28: 807600b0  adrp x0, #0x7672000
0x067A1C2C: 001044f9  ldr x0, [x0, #0x820]
0x067A1C30: 7a7b2797  bl #0x3180a18
0x067A1C34: 807600d0  adrp x0, #0x7673000
0x067A1C38: 001840f9  ldr x0, [x0, #0x30]
0x067A1C3C: 777b2797  bl #0x3180a18
0x067A1C40: 207900f0  adrp x0, #0x76c8000
0x067A1C44: 003c47f9  ldr x0, [x0, #0xe78]
0x067A1C48: 747b2797  bl #0x3180a18
0x067A1C4C: 607b00f0  adrp x0, #0x7710000
0x067A1C50: 006445f9  ldr x0, [x0, #0xac8]
0x067A1C54: 717b2797  bl #0x3180a18
0x067A1C58: 607b00f0  adrp x0, #0x7710000
0x067A1C5C: 006845f9  ldr x0, [x0, #0xad0]
0x067A1C60: 6e7b2797  bl #0x3180a18
0x067A1C64: 28008052  movz w8, #0x1
0x067A1C68: 888e3739  strb w8, [x20, #0xde3]
0x067A1C6C: 777600d0  adrp x23, #0x766f000
0x067A1C70: 767b00f0  adrp x22, #0x7710000
0x067A1C74: 742240f9  ldr x20, [x19, #0x40]
0x067A1C78: f78e41f9  ldr x23, [x23, #0x318]
0x067A1C7C: d66645f9  ldr x22, [x22, #0xac8]
0x067A1C80: 940500b4  cbz x20, #0x67a1d30
0x067A1C84: 2a7900f0  adrp x10, #0x76c8000
0x067A1C88: 880240f9  ldr x8, [x20]
0x067A1C8C: 4a3d47f9  ldr x10, [x10, #0xe78]
0x067A1C90: 095d4279  ldrh w9, [x8, #0x12e]
0x067A1C94: 410140f9  ldr x1, [x10]
0x067A1C98: 290100b4  cbz x9, #0x67a1cbc
0x067A1C9C: 0a5940f9  ldr x10, [x8, #0xb0]
0x067A1CA0: 4a210091  add x10, x10, #8
0x067A1CA4: 4b815ff8  ldur x11, [x10, #-8]
0x067A1CA8: 7f0101eb  cmp x11, x1
0x067A1CAC: 00010054  b.eq #0x67a1ccc
0x067A1CB0: 290500f1  subs x9, x9, #1
0x067A1CB4: 4a410091  add x10, x10, #0x10
0x067A1CB8: 61ffff54  b.ne #0x67a1ca4
0x067A1CBC: e00314aa  mov x0, x20
0x067A1CC0: e2031f2a  mov w2, wzr
0x067A1CC4: 93d32697  bl #0x3156b10
0x067A1CC8: 04000014  b #0x67a1cd8
0x067A1CCC: 490180b9  ldrsw x9, [x10]
0x067A1CD0: 0811098b  add x8, x8, x9, lsl #4
0x067A1CD4: 00e10491  add x0, x8, #0x138
0x067A1CD8: 080440a9  ldp x8, x1, [x0]
0x067A1CDC: e00314aa  mov x0, x20
0x067A1CE0: 00013fd6  blr x8
0x067A1CE4: 600200b4  cbz x0, #0x67a1d30
0x067A1CE8: 887600d0  adrp x8, #0x7673000
0x067A1CEC: 081540f9  ldr x8, [x8, #0x28]
0x067A1CF0: f40300aa  mov x20, x0
0x067A1CF4: 000140f9  ldr x0, [x8]
0x067A1CF8: ea7b2797  bl #0x3180ca0
0x067A1CFC: 687b00f0  adrp x8, #0x7710000
0x067A1D00: 086945f9  ldr x8, [x8, #0xad0]
0x067A1D04: e10313aa  mov x1, x19
0x067A1D08: e3031faa  mov x3, xzr
0x067A1D0C: f50300aa  mov x21, x0
0x067A1D10: 020140f9  ldr x2, [x8]
0x067A1D14: 6afbad97  bl #0x5320abc
0x067A1D18: 887600d0  adrp x8, #0x7673000
0x067A1D1C: 081940f9  ldr x8, [x8, #0x30]
0x067A1D20: e00314aa  mov x0, x20
0x067A1D24: e10315aa  mov x1, x21
0x067A1D28: 020140f9  ldr x2, [x8]
0x067A1D2C: c3b29197  bl #0x4c0e838
0x067A1D30: e00240f9  ldr x0, [x23]
0x067A1D34: 742e40f9  ldr x20, [x19, #0x58]
0x067A1D38: da7b2797  bl #0x3180ca0
0x067A1D3C: c20240f9  ldr x2, [x22]
0x067A1D40: e10313aa  mov x1, x19
0x067A1D44: e3031faa  mov x3, xzr
0x067A1D48: f50300aa  mov x21, x0
0x067A1D4C: f4f0ad97  bl #0x531e11c
0x067A1D50: 540100b4  cbz x20, #0x67a1d78
0x067A1D54: 887600b0  adrp x8, #0x7672000
0x067A1D58: 081144f9  ldr x8, [x8, #0x820]
0x067A1D5C: e00314aa  mov x0, x20
0x067A1D60: e10315aa  mov x1, x21
0x067A1D64: f44f42a9  ldp x20, x19, [sp, #0x20]
0x067A1D68: 020140f9  ldr x2, [x8]
0x067A1D6C: f65741a9  ldp x22, x21, [sp, #0x10]
0x067A1D70: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x067A1D74: c5b09117  b #0x4c0e088
0x067A1D78: cd7b2797  bl #0x3180cac

; RVA 0x67A1D7C | protected override void OnGameStarted() { }
; bytes=28 sha256=ed4e8a96510da0ab6bc04c8fe787f3774d4192a4a9f0a1dce3878f5cf2214138 status=arm64_complete_bound indexed_start=True
0x067A1D7C: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x067A1D80: e1031faa  mov x1, xzr
0x067A1D84: f30300aa  mov x19, x0
0x067A1D88: 6615f097  bl #0x63a7320
0x067A1D8C: e00313aa  mov x0, x19
0x067A1D90: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x067A1D94: 01000014  b #0x67a1d98

; RVA 0x67A1F6C | protected override void DisposeSystem() { }
; bytes=392 sha256=ed7105c2d731e5cd19efb9592217c81ca39e09d9093cfff10818c112852c6e20 status=arm64_complete_bound indexed_start=True
0x067A1F6C: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x067A1F70: f65701a9  stp x22, x21, [sp, #0x10]
0x067A1F74: f44f02a9  stp x20, x19, [sp, #0x20]
0x067A1F78: 34ac00f0  adrp x20, #0x7d28000
0x067A1F7C: 88927739  ldrb w8, [x20, #0xde4]
0x067A1F80: f30300aa  mov x19, x0
0x067A1F84: 08030037  tbnz w8, #0, #0x67a1fe4
0x067A1F88: 607600d0  adrp x0, #0x766f000
0x067A1F8C: 008c41f9  ldr x0, [x0, #0x318]
0x067A1F90: a27a2797  bl #0x3180a18
0x067A1F94: 807600d0  adrp x0, #0x7673000
0x067A1F98: 001440f9  ldr x0, [x0, #0x28]
0x067A1F9C: 9f7a2797  bl #0x3180a18
0x067A1FA0: 807600d0  adrp x0, #0x7673000
0x067A1FA4: 003c40f9  ldr x0, [x0, #0x78]
0x067A1FA8: 9c7a2797  bl #0x3180a18
0x067A1FAC: 807600b0  adrp x0, #0x7672000
0x067A1FB0: 001c44f9  ldr x0, [x0, #0x838]
0x067A1FB4: 997a2797  bl #0x3180a18
0x067A1FB8: 207900f0  adrp x0, #0x76c8000
0x067A1FBC: 003c47f9  ldr x0, [x0, #0xe78]
0x067A1FC0: 967a2797  bl #0x3180a18
0x067A1FC4: 607b00f0  adrp x0, #0x7710000
0x067A1FC8: 006445f9  ldr x0, [x0, #0xac8]
0x067A1FCC: 937a2797  bl #0x3180a18
0x067A1FD0: 607b00f0  adrp x0, #0x7710000
0x067A1FD4: 006845f9  ldr x0, [x0, #0xad0]
0x067A1FD8: 907a2797  bl #0x3180a18
0x067A1FDC: 28008052  movz w8, #0x1
0x067A1FE0: 88923739  strb w8, [x20, #0xde4]
0x067A1FE4: 777600d0  adrp x23, #0x766f000
0x067A1FE8: 767b00f0  adrp x22, #0x7710000
0x067A1FEC: 742240f9  ldr x20, [x19, #0x40]
0x067A1FF0: f78e41f9  ldr x23, [x23, #0x318]
0x067A1FF4: d66645f9  ldr x22, [x22, #0xac8]
0x067A1FF8: 940500b4  cbz x20, #0x67a20a8
0x067A1FFC: 2a7900f0  adrp x10, #0x76c8000
0x067A2000: 880240f9  ldr x8, [x20]
0x067A2004: a2b12814  b #0x71ce68c
0x067A2008: 095d4279  ldrh w9, [x8, #0x12e]
0x067A200C: 410140f9  ldr x1, [x10]
0x067A2010: 290100b4  cbz x9, #0x67a2034
0x067A2014: 0a5940f9  ldr x10, [x8, #0xb0]
0x067A2018: 4a210091  add x10, x10, #8
0x067A201C: 4b815ff8  ldur x11, [x10, #-8]
0x067A2020: 7f0101eb  cmp x11, x1
0x067A2024: 00010054  b.eq #0x67a2044
0x067A2028: 290500f1  subs x9, x9, #1
0x067A202C: 4a410091  add x10, x10, #0x10
0x067A2030: 61ffff54  b.ne #0x67a201c
0x067A2034: e00314aa  mov x0, x20
0x067A2038: e2031f2a  mov w2, wzr
0x067A203C: b5d22697  bl #0x3156b10
0x067A2040: 04000014  b #0x67a2050
0x067A2044: 490180b9  ldrsw x9, [x10]
0x067A2048: 0811098b  add x8, x8, x9, lsl #4
0x067A204C: 00e10491  add x0, x8, #0x138
0x067A2050: 080440a9  ldp x8, x1, [x0]
0x067A2054: e00314aa  mov x0, x20
0x067A2058: 00013fd6  blr x8
0x067A205C: 600200b4  cbz x0, #0x67a20a8
0x067A2060: 887600b0  adrp x8, #0x7673000
0x067A2064: 081540f9  ldr x8, [x8, #0x28]
0x067A2068: f40300aa  mov x20, x0
0x067A206C: 000140f9  ldr x0, [x8]
0x067A2070: 0c7b2797  bl #0x3180ca0
0x067A2074: 687b00d0  adrp x8, #0x7710000
0x067A2078: 086945f9  ldr x8, [x8, #0xad0]
0x067A207C: e10313aa  mov x1, x19
0x067A2080: e3031faa  mov x3, xzr
0x067A2084: f50300aa  mov x21, x0
0x067A2088: 020140f9  ldr x2, [x8]
0x067A208C: 8cfaad97  bl #0x5320abc
0x067A2090: 887600b0  adrp x8, #0x7673000
0x067A2094: 083d40f9  ldr x8, [x8, #0x78]
0x067A2098: e00314aa  mov x0, x20
0x067A209C: e10315aa  mov x1, x21
0x067A20A0: 020140f9  ldr x2, [x8]
0x067A20A4: f6b19197  bl #0x4c0e87c
0x067A20A8: e00240f9  ldr x0, [x23]
0x067A20AC: 742e40f9  ldr x20, [x19, #0x58]
0x067A20B0: fc7a2797  bl #0x3180ca0
0x067A20B4: c20240f9  ldr x2, [x22]
0x067A20B8: e10313aa  mov x1, x19
0x067A20BC: e3031faa  mov x3, xzr
0x067A20C0: f50300aa  mov x21, x0
0x067A20C4: 16f0ad97  bl #0x531e11c
0x067A20C8: 540100b4  cbz x20, #0x67a20f0
0x067A20CC: 88760090  adrp x8, #0x7672000
0x067A20D0: 081d44f9  ldr x8, [x8, #0x838]
0x067A20D4: e00314aa  mov x0, x20
0x067A20D8: e10315aa  mov x1, x21
0x067A20DC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x067A20E0: 020140f9  ldr x2, [x8]
0x067A20E4: f65741a9  ldp x22, x21, [sp, #0x10]
0x067A20E8: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x067A20EC: f8af9117  b #0x4c0e0cc
0x067A20F0: ef7a2797  bl #0x3180cac

; RVA 0x67A20F4 | protected override void EntityCreated(Entity entity) { }
; bytes=4 sha256=788f1512f26f87f558ccda89030f23036527961be061f31e047ad5b93b8aafe2 status=arm64_complete_bound indexed_start=True
0x067A20F4: 01000014  b #0x67a20f8

; RVA 0x67A2180 | private void OnPlayerLevelChanged(int newLevel) { }
; bytes=4 sha256=b8052ff52fe50e8760609e6499bd451d3b55f59f64c00268ac1d82d588f58133 status=arm64_complete_bound indexed_start=True
0x067A2180: 06ffff17  b #0x67a1d98

; RVA 0x67A2184 | private void OnImmediateToolsStateChanged(bool isEnabled) { }
; bytes=4 sha256=788f1512f26f87f558ccda89030f23036527961be061f31e047ad5b93b8aafe2 status=arm64_complete_bound indexed_start=True
0x067A2184: 01000014  b #0x67a2188

; RVA 0x67A1D98 | private void UpdateImmediateToolsState() { }
; bytes=468 sha256=eab63245ee8788301ee040790c0186ef57f7f69eff522201418343a502081177 status=arm64_complete_bound indexed_start=True
0x067A1D98: ffc300d1  sub sp, sp, #0x30
0x067A1D9C: fe5701a9  stp x30, x21, [sp, #0x10]
0x067A1DA0: f44f02a9  stp x20, x19, [sp, #0x20]
0x067A1DA4: 34ac00f0  adrp x20, #0x7d28000
0x067A1DA8: 88967739  ldrb w8, [x20, #0xde5]
0x067A1DAC: f30300aa  mov x19, x0
0x067A1DB0: 08030037  tbnz w8, #0, #0x67a1e10
0x067A1DB4: 607600d0  adrp x0, #0x766f000
0x067A1DB8: 00f844f9  ldr x0, [x0, #0x9f0]
0x067A1DBC: 177b2797  bl #0x3180a18
0x067A1DC0: e07600b0  adrp x0, #0x767e000
0x067A1DC4: 003842f9  ldr x0, [x0, #0x470]
0x067A1DC8: 147b2797  bl #0x3180a18
0x067A1DCC: 207900f0  adrp x0, #0x76c8000
0x067A1DD0: 003c47f9  ldr x0, [x0, #0xe78]
0x067A1DD4: 117b2797  bl #0x3180a18
0x067A1DD8: 807600b0  adrp x0, #0x7672000
0x067A1DDC: 007c44f9  ldr x0, [x0, #0x8f8]
0x067A1DE0: 0e7b2797  bl #0x3180a18
0x067A1DE4: 007600b0  adrp x0, #0x7662000
0x067A1DE8: 006c44f9  ldr x0, [x0, #0x8d8]
0x067A1DEC: 0b7b2797  bl #0x3180a18
0x067A1DF0: 607500f0  adrp x0, #0x7650000
0x067A1DF4: 00d046f9  ldr x0, [x0, #0xda0]
0x067A1DF8: 087b2797  bl #0x3180a18
0x067A1DFC: 007600b0  adrp x0, #0x7662000
0x067A1E00: 007444f9  ldr x0, [x0, #0x8e8]
0x067A1E04: 057b2797  bl #0x3180a18
0x067A1E08: 28008052  movz w8, #0x1
0x067A1E0C: 88963739  strb w8, [x20, #0xde5]
0x067A1E10: 742640f9  ldr x20, [x19, #0x48]
0x067A1E14: 740300b4  cbz x20, #0x67a1e80
0x067A1E18: ea7600b0  adrp x10, #0x767e000
0x067A1E1C: 880240f9  ldr x8, [x20]
0x067A1E20: 4a3942f9  ldr x10, [x10, #0x470]
0x067A1E24: 095d4279  ldrh w9, [x8, #0x12e]
0x067A1E28: 410140f9  ldr x1, [x10]
0x067A1E2C: 290100b4  cbz x9, #0x67a1e50
0x067A1E30: 0a5940f9  ldr x10, [x8, #0xb0]
0x067A1E34: 4a210091  add x10, x10, #8
0x067A1E38: 4b815ff8  ldur x11, [x10, #-8]
0x067A1E3C: 7f0101eb  cmp x11, x1
0x067A1E40: 00010054  b.eq #0x67a1e60
0x067A1E44: 290500f1  subs x9, x9, #1
0x067A1E48: 4a410091  add x10, x10, #0x10
0x067A1E4C: 61ffff54  b.ne #0x67a1e38
0x067A1E50: 42008052  movz w2, #0x2
0x067A1E54: e00314aa  mov x0, x20
0x067A1E58: 2ed32697  bl #0x3156b10
0x067A1E5C: 05000014  b #0x67a1e70
0x067A1E60: 490140b9  ldr w9, [x10]
0x067A1E64: 29090011  add w9, w9, #2
0x067A1E68: 08d1298b  add x8, x8, w9, sxtw #4
0x067A1E6C: 00e10491  add x0, x8, #0x138
0x067A1E70: 080440a9  ldp x8, x1, [x0]
0x067A1E74: e00314aa  mov x0, x20
0x067A1E78: 00013fd6  blr x8
0x067A1E7C: f40300aa  mov x20, x0
0x067A1E80: 752240f9  ldr x21, [x19, #0x40]
0x067A1E84: 750400b4  cbz x21, #0x67a1f10
0x067A1E88: 2a7900f0  adrp x10, #0x76c8000
0x067A1E8C: a80240f9  ldr x8, [x21]
0x067A1E90: 4a3d47f9  ldr x10, [x10, #0xe78]
0x067A1E94: 095d4279  ldrh w9, [x8, #0x12e]
0x067A1E98: 410140f9  ldr x1, [x10]
0x067A1E9C: 290100b4  cbz x9, #0x67a1ec0
0x067A1EA0: 0a5940f9  ldr x10, [x8, #0xb0]
0x067A1EA4: 4a210091  add x10, x10, #8
0x067A1EA8: 4b815ff8  ldur x11, [x10, #-8]
0x067A1EAC: 7f0101eb  cmp x11, x1
0x067A1EB0: 00010054  b.eq #0x67a1ed0
0x067A1EB4: 290500f1  subs x9, x9, #1
0x067A1EB8: 4a410091  add x10, x10, #0x10
0x067A1EBC: 61ffff54  b.ne #0x67a1ea8
0x067A1EC0: e00315aa  mov x0, x21
0x067A1EC4: e2031f2a  mov w2, wzr
0x067A1EC8: 12d32697  bl #0x3156b10
0x067A1ECC: 04000014  b #0x67a1edc
0x067A1ED0: 490180b9  ldrsw x9, [x10]
0x067A1ED4: 0811098b  add x8, x8, x9, lsl #4
0x067A1ED8: 00e10491  add x0, x8, #0x138
0x067A1EDC: 080440a9  ldp x8, x1, [x0]
0x067A1EE0: e00315aa  mov x0, x21
0x067A1EE4: 00013fd6  blr x8
0x067A1EE8: 400100b4  cbz x0, #0x67a1f10
0x067A1EEC: 687500f0  adrp x8, #0x7650000
0x067A1EF0: 012040b9  ldr w1, [x0, #0x20]
0x067A1EF4: 08d146f9  ldr x8, [x8, #0xda0]
0x067A1EF8: e0230091  add x0, sp, #8
0x067A1EFC: ff0700f9  str xzr, [sp, #8]
0x067A1F00: 020140f9  ldr x2, [x8]
0x067A1F04: f7656b97  bl #0x427b6e0
0x067A1F08: e80740f9  ldr x8, [sp, #8]
0x067A1F0C: 02000014  b #0x67a1f14
0x067A1F10: e8031faa  mov x8, xzr
0x067A1F14: 602e40f9  ldr x0, [x19, #0x58]
0x067A1F18: 9f1e0072  tst w20, #0xff
0x067A1F1C: 20010054  b.eq #0x67a1f40
0x067A1F20: 1f1d0072  tst w8, #0xff
0x067A1F24: e0000054  b.eq #0x67a1f40
0x067A1F28: 000200b4  cbz x0, #0x67a1f68
0x067A1F2C: 89fe60d3  lsr x9, x20, #0x20
0x067A1F30: 08fd60d3  lsr x8, x8, #0x20
0x067A1F34: 1f01096b  cmp w8, w9
0x067A1F38: e1b79f1a  cset w1, ge
0x067A1F3C: 03000014  b #0x67a1f48
0x067A1F40: 400100b4  cbz x0, #0x67a1f68
0x067A1F44: e1031f2a  mov w1, wzr
0x067A1F48: 887600b0  adrp x8, #0x7672000
0x067A1F4C: 087d44f9  ldr x8, [x8, #0x8f8]
0x067A1F50: 020140f9  ldr x2, [x8]
0x067A1F54: befd6997  bl #0x422164c
0x067A1F58: f44f42a9  ldp x20, x19, [sp, #0x20]
0x067A1F5C: fe5741a9  ldp x30, x21, [sp, #0x10]
0x067A1F60: ffc30091  add sp, sp, #0x30
0x067A1F64: c0035fd6  ret
0x067A1F68: 517b2797  bl #0x3180cac

; RVA 0x67A20F8 | private void ProcessEntity(Entity entity) { }
; bytes=136 sha256=3ca4adfe787c4443752bb7af08c6f8d24292f2b1afaf1b723bcdffbda3508d4f status=arm64_complete_bound indexed_start=True
0x067A20F8: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x067A20FC: f44f01a9  stp x20, x19, [sp, #0x10]
0x067A2100: 35ac00d0  adrp x21, #0x7d28000
0x067A2104: a89a7739  ldrb w8, [x21, #0xde6]
0x067A2108: f30301aa  mov x19, x1
0x067A210C: f40300aa  mov x20, x0
0x067A2110: c8000037  tbnz w8, #0, #0x67a2128
0x067A2114: 80760090  adrp x0, #0x7672000
0x067A2118: 007844f9  ldr x0, [x0, #0x8f0]
0x067A211C: 3f7a2797  bl #0x3180a18
0x067A2120: 28008052  movz w8, #0x1
0x067A2124: a89a3739  strb w8, [x21, #0xde6]
0x067A2128: e00314aa  mov x0, x20
0x067A212C: e10313aa  mov x1, x19
0x067A2130: c1000094  bl #0x67a2434
0x067A2134: 40010036  tbz w0, #0, #0x67a215c
0x067A2138: 882e40f9  ldr x8, [x20, #0x58]
0x067A213C: 080200b4  cbz x8, #0x67a217c
0x067A2140: 08814039  ldrb w8, [x8, #0x20]
0x067A2144: 28010034  cbz w8, #0x67a2168
0x067A2148: e00314aa  mov x0, x20
0x067A214C: e10313aa  mov x1, x19
0x067A2150: f44f41a9  ldp x20, x19, [sp, #0x10]
0x067A2154: fe57c2a8  ldp x30, x21, [sp], #0x20
0x067A2158: f8000014  b #0x67a2538
0x067A215C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x067A2160: fe57c2a8  ldp x30, x21, [sp], #0x20
0x067A2164: c0035fd6  ret
0x067A2168: e00314aa  mov x0, x20
0x067A216C: e10313aa  mov x1, x19
0x067A2170: f44f41a9  ldp x20, x19, [sp, #0x10]
0x067A2174: fe57c2a8  ldp x30, x21, [sp], #0x20
0x067A2178: 34010014  b #0x67a2648
0x067A217C: cc7a2797  bl #0x3180cac

; RVA 0x67A2188 | private void UpdateAllBoardItems() { }
; bytes=684 sha256=029015761f344fb39c53e631356bfb9a73fa7736bab553f30f622293ef48f044 status=arm64_complete_bound indexed_start=True
0x067A2188: ff0301d1  sub sp, sp, #0x40
0x067A218C: fe5f01a9  stp x30, x23, [sp, #0x10]
0x067A2190: f65702a9  stp x22, x21, [sp, #0x20]
0x067A2194: f44f03a9  stp x20, x19, [sp, #0x30]
0x067A2198: 33ac00d0  adrp x19, #0x7d28000
0x067A219C: f57600d0  adrp x21, #0x7680000
0x067A21A0: 689e7739  ldrb w8, [x19, #0xde7]
0x067A21A4: b5fe41f9  ldr x21, [x21, #0x3f8]
0x067A21A8: f40300aa  mov x20, x0
0x067A21AC: 48020037  tbnz w8, #0, #0x67a21f4
0x067A21B0: 60750090  adrp x0, #0x764e000
0x067A21B4: 006444f9  ldr x0, [x0, #0x8c8]
0x067A21B8: 187a2797  bl #0x3180a18
0x067A21BC: a07900b0  adrp x0, #0x76d7000
0x067A21C0: 00d042f9  ldr x0, [x0, #0x5a0]
0x067A21C4: 157a2797  bl #0x3180a18
0x067A21C8: 60750090  adrp x0, #0x764e000
0x067A21CC: 007044f9  ldr x0, [x0, #0x8e0]
0x067A21D0: 127a2797  bl #0x3180a18
0x067A21D4: 607a00d0  adrp x0, #0x76f0000
0x067A21D8: 00c040f9  ldr x0, [x0, #0x180]
0x067A21DC: 0f7a2797  bl #0x3180a18
0x067A21E0: e07600d0  adrp x0, #0x7680000
0x067A21E4: 00fc41f9  ldr x0, [x0, #0x3f8]
0x067A21E8: 0c7a2797  bl #0x3180a18
0x067A21EC: 28008052  movz w8, #0x1
0x067A21F0: 689e3739  strb w8, [x19, #0xde7]
0x067A21F4: a10240f9  ldr x1, [x21]
0x067A21F8: e00314aa  mov x0, x20
0x067A21FC: 33525897  bl #0x3db6ac8
0x067A2200: c00b00b4  cbz x0, #0x67a2378
0x067A2204: 687a00d0  adrp x8, #0x76f0000
0x067A2208: 08c140f9  ldr x8, [x8, #0x180]
0x067A220C: 75750090  adrp x21, #0x764e000
0x067A2210: 010140f9  ldr x1, [x8]
0x067A2214: b56644f9  ldr x21, [x21, #0x8c8]
0x067A2218: 6c8e7297  bl #0x4445bc8
0x067A221C: f30300aa  mov x19, x0
0x067A2220: e00a00b4  cbz x0, #0x67a237c
0x067A2224: 76750090  adrp x22, #0x764e000
0x067A2228: b77900b0  adrp x23, #0x76d7000
0x067A222C: d67244f9  ldr x22, [x22, #0x8e0]
0x067A2230: f7d242f9  ldr x23, [x23, #0x5a0]
0x067A2234: 680240f9  ldr x8, [x19]
0x067A2238: c10240f9  ldr x1, [x22]
0x067A223C: 095d4279  ldrh w9, [x8, #0x12e]
0x067A2240: 290100b4  cbz x9, #0x67a2264
0x067A2244: 0a5940f9  ldr x10, [x8, #0xb0]
0x067A2248: 4a210091  add x10, x10, #8
0x067A224C: 4b815ff8  ldur x11, [x10, #-8]
0x067A2250: 7f0101eb  cmp x11, x1
0x067A2254: 00010054  b.eq #0x67a2274
0x067A2258: 290500f1  subs x9, x9, #1
0x067A225C: 4a410091  add x10, x10, #0x10
0x067A2260: 61ffff54  b.ne #0x67a224c
0x067A2264: e00313aa  mov x0, x19
0x067A2268: e2031f2a  mov w2, wzr
0x067A226C: 29d22697  bl #0x3156b10
0x067A2270: 04000014  b #0x67a2280
0x067A2274: 490180b9  ldrsw x9, [x10]
0x067A2278: 0811098b  add x8, x8, x9, lsl #4
0x067A227C: 00e10491  add x0, x8, #0x138
0x067A2280: 080440a9  ldp x8, x1, [x0]
0x067A2284: e00313aa  mov x0, x19
0x067A2288: 00013fd6  blr x8
0x067A228C: 80030036  tbz w0, #0, #0x67a22fc
0x067A2290: 680240f9  ldr x8, [x19]
0x067A2294: e10240f9  ldr x1, [x23]
0x067A2298: 095d4279  ldrh w9, [x8, #0x12e]
0x067A229C: 290100b4  cbz x9, #0x67a22c0
0x067A22A0: 0a5940f9  ldr x10, [x8, #0xb0]
0x067A22A4: 4a210091  add x10, x10, #8
0x067A22A8: 4b815ff8  ldur x11, [x10, #-8]
0x067A22AC: 7f0101eb  cmp x11, x1
0x067A22B0: 00010054  b.eq #0x67a22d0
0x067A22B4: 290500f1  subs x9, x9, #1
0x067A22B8: 4a410091  add x10, x10, #0x10
0x067A22BC: 61ffff54  b.ne #0x67a22a8
0x067A22C0: e00313aa  mov x0, x19
0x067A22C4: e2031f2a  mov w2, wzr
0x067A22C8: 12d22697  bl #0x3156b10
0x067A22CC: 04000014  b #0x67a22dc
0x067A22D0: 490180b9  ldrsw x9, [x10]
0x067A22D4: 0811098b  add x8, x8, x9, lsl #4
0x067A22D8: 00e10491  add x0, x8, #0x138
0x067A22DC: 080440a9  ldp x8, x1, [x0]
0x067A22E0: e00313aa  mov x0, x19
0x067A22E4: 00013fd6  blr x8
0x067A22E8: 600400b4  cbz x0, #0x67a2374
0x067A22EC: 010840f9  ldr x1, [x0, #0x10]
0x067A22F0: e00314aa  mov x0, x20
0x067A22F4: 81ffff97  bl #0x67a20f8
0x067A22F8: cfffff17  b #0x67a2234
0x067A22FC: f4031faa  mov x20, xzr
0x067A2300: f30200b4  cbz x19, #0x67a235c
0x067A2304: 680240f9  ldr x8, [x19]
0x067A2308: a10240f9  ldr x1, [x21]
0x067A230C: 095d4279  ldrh w9, [x8, #0x12e]
0x067A2310: 290100b4  cbz x9, #0x67a2334
0x067A2314: 0a5940f9  ldr x10, [x8, #0xb0]
0x067A2318: 4a210091  add x10, x10, #8
0x067A231C: 4b815ff8  ldur x11, [x10, #-8]
0x067A2320: 7f0101eb  cmp x11, x1
0x067A2324: 00010054  b.eq #0x67a2344
0x067A2328: 290500f1  subs x9, x9, #1
0x067A232C: 4a410091  add x10, x10, #0x10
0x067A2330: 61ffff54  b.ne #0x67a231c
0x067A2334: e00313aa  mov x0, x19
0x067A2338: e2031f2a  mov w2, wzr
0x067A233C: f5d12697  bl #0x3156b10
0x067A2340: 04000014  b #0x67a2350
0x067A2344: 490180b9  ldrsw x9, [x10]
0x067A2348: 0811098b  add x8, x8, x9, lsl #4
0x067A234C: 00e10491  add x0, x8, #0x138
0x067A2350: 080440a9  ldp x8, x1, [x0]
0x067A2354: e00313aa  mov x0, x19
0x067A2358: 00013fd6  blr x8
0x067A235C: 340100b5  cbnz x20, #0x67a2380
0x067A2360: f44f43a9  ldp x20, x19, [sp, #0x30]
0x067A2364: f65742a9  ldp x22, x21, [sp, #0x20]
0x067A2368: fe5f41a9  ldp x30, x23, [sp, #0x10]
0x067A236C: ff030191  add sp, sp, #0x40
0x067A2370: c0035fd6  ret
0x067A2374: 4e7a2797  bl #0x3180cac
0x067A2378: 4d7a2797  bl #0x3180cac
0x067A237C: 4c7a2797  bl #0x3180cac
0x067A2380: e00314aa  mov x0, x20
0x067A2384: 487a2797  bl #0x3180ca4
0x067A2388: 04000014  b #0x67a2398
0x067A238C: 03000014  b #0x67a2398
0x067A2390: 02000014  b #0x67a2398
0x067A2394: 01000014  b #0x67a2398
0x067A2398: 3f040071  cmp w1, #1
0x067A239C: a1000054  b.ne #0x67a23b0
0x067A23A0: 5cb12894  bl #0x71ce910
0x067A23A4: 140040f9  ldr x20, [x0]
0x067A23A8: 5eb12894  bl #0x71ce920
0x067A23AC: d5ffff17  b #0x67a2300
0x067A23B0: e00700f9  str x0, [sp, #8]
0x067A23B4: f4031faa  mov x20, xzr
0x067A23B8: 02000014  b #0x67a23c0
0x067A23BC: e00700f9  str x0, [sp, #8]
0x067A23C0: f30200b4  cbz x19, #0x67a241c
0x067A23C4: 680240f9  ldr x8, [x19]
0x067A23C8: a10240f9  ldr x1, [x21]
0x067A23CC: 095d4279  ldrh w9, [x8, #0x12e]
0x067A23D0: 290100b4  cbz x9, #0x67a23f4
0x067A23D4: 0a5940f9  ldr x10, [x8, #0xb0]
0x067A23D8: 4a210091  add x10, x10, #8
0x067A23DC: 4b815ff8  ldur x11, [x10, #-8]
0x067A23E0: 7f0101eb  cmp x11, x1
0x067A23E4: 00010054  b.eq #0x67a2404
0x067A23E8: 290500f1  subs x9, x9, #1
0x067A23EC: 4a410091  add x10, x10, #0x10
0x067A23F0: 61ffff54  b.ne #0x67a23dc
0x067A23F4: e00313aa  mov x0, x19
0x067A23F8: e2031f2a  mov w2, wzr
0x067A23FC: c5d12697  bl #0x3156b10
0x067A2400: 04000014  b #0x67a2410
0x067A2404: 490180b9  ldrsw x9, [x10]
0x067A2408: 0811098b  add x8, x8, x9, lsl #4
0x067A240C: 00e10491  add x0, x8, #0x138
0x067A2410: 080440a9  ldp x8, x1, [x0]
0x067A2414: e00313aa  mov x0, x19
0x067A2418: 00013fd6  blr x8
0x067A241C: 740000b5  cbnz x20, #0x67a2428
0x067A2420: e00740f9  ldr x0, [sp, #8]
0x067A2424: 4d0d2b97  bl #0x3265958
0x067A2428: e00314aa  mov x0, x20
0x067A242C: 1e7a2797  bl #0x3180ca4
0x067A2430: 399c1997  bl #0x2e09514

; RVA 0x67A2434 | private bool IsToolOrToolbox(Entity entity) { }
; bytes=260 sha256=b4bef71c109b9948150f81c2dccf72a2b9e8f99f7f38d7f4384a39104ab478f5 status=arm64_complete_bound indexed_start=True
0x067A2434: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x067A2438: f44f01a9  stp x20, x19, [sp, #0x10]
0x067A243C: 35ac00d0  adrp x21, #0x7d28000
0x067A2440: a8a27739  ldrb w8, [x21, #0xde8]
0x067A2444: f40301aa  mov x20, x1
0x067A2448: f30300aa  mov x19, x0
0x067A244C: 28010037  tbnz w8, #0, #0x67a2470
0x067A2450: c0760090  adrp x0, #0x767a000
0x067A2454: 009044f9  ldr x0, [x0, #0x920]
0x067A2458: 70792797  bl #0x3180a18
0x067A245C: c0760090  adrp x0, #0x767a000
0x067A2460: 004c42f9  ldr x0, [x0, #0x498]
0x067A2464: 6d792797  bl #0x3180a18
0x067A2468: 28008052  movz w8, #0x1
0x067A246C: a8a23739  strb w8, [x21, #0xde8]
0x067A2470: 340600b4  cbz x20, #0x67a2534
0x067A2474: c8760090  adrp x8, #0x767a000
0x067A2478: 089144f9  ldr x8, [x8, #0x920]
0x067A247C: e00314aa  mov x0, x20
0x067A2480: 010140f9  ldr x1, [x8]
0x067A2484: 40fa5197  bl #0x3c20d84
0x067A2488: 800400b4  cbz x0, #0x67a2518
0x067A248C: 732a40f9  ldr x19, [x19, #0x50]
0x067A2490: 330500b4  cbz x19, #0x67a2534
0x067A2494: ca760090  adrp x10, #0x767a000
0x067A2498: 680240f9  ldr x8, [x19]
0x067A249C: 4a4d42f9  ldr x10, [x10, #0x498]
0x067A24A0: 141840f9  ldr x20, [x0, #0x30]
0x067A24A4: 095d4279  ldrh w9, [x8, #0x12e]
0x067A24A8: 410140f9  ldr x1, [x10]
0x067A24AC: 290100b4  cbz x9, #0x67a24d0
0x067A24B0: 0a5940f9  ldr x10, [x8, #0xb0]
0x067A24B4: 4a210091  add x10, x10, #8
0x067A24B8: 4b815ff8  ldur x11, [x10, #-8]
0x067A24BC: 7f0101eb  cmp x11, x1
0x067A24C0: 00010054  b.eq #0x67a24e0
0x067A24C4: 290500f1  subs x9, x9, #1
0x067A24C8: 4a410091  add x10, x10, #0x10
0x067A24CC: 61ffff54  b.ne #0x67a24b8
0x067A24D0: 22018052  movz w2, #0x9
0x067A24D4: e00313aa  mov x0, x19
0x067A24D8: 8ed12697  bl #0x3156b10
0x067A24DC: 05000014  b #0x67a24f0
0x067A24E0: 490140b9  ldr w9, [x10]
0x067A24E4: 29250011  add w9, w9, #9
0x067A24E8: 08d1298b  add x8, x8, w9, sxtw #4
0x067A24EC: 00e10491  add x0, x8, #0x138
0x067A24F0: 080840a9  ldp x8, x2, [x0]
0x067A24F4: e00313aa  mov x0, x19
0x067A24F8: e10314aa  mov x1, x20
0x067A24FC: 00013fd6  blr x8
0x067A2500: c00000b4  cbz x0, #0x67a2518
0x067A2504: e10300aa  mov x1, x0
0x067A2508: f30300aa  mov x19, x0
0x067A250C: 2cfdff97  bl #0x67a19bc
0x067A2510: a0000036  tbz w0, #0, #0x67a2524
0x067A2514: 20008052  movz w0, #0x1
0x067A2518: f44f41a9  ldp x20, x19, [sp, #0x10]
0x067A251C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x067A2520: c0035fd6  ret
0x067A2524: e10313aa  mov x1, x19
0x067A2528: f44f41a9  ldp x20, x19, [sp, #0x10]
0x067A252C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x067A2530: 68fdff17  b #0x67a1ad0
0x067A2534: de792797  bl #0x3180cac

; RVA 0x67A2538 | private void AddImmediateToolBehavior(Entity entity) { }
; bytes=272 sha256=125ca0b5a2e47fe7d1056c7fbf0141229e8042e0d94350b2c55063cecbc6cee7 status=arm64_complete_bound indexed_start=True
0x067A2538: fe0f1df8  str x30, [sp, #-0x30]!
0x067A253C: f65701a9  stp x22, x21, [sp, #0x10]
0x067A2540: f44f02a9  stp x20, x19, [sp, #0x20]
0x067A2544: 35ac00d0  adrp x21, #0x7d28000
0x067A2548: a8a67739  ldrb w8, [x21, #0xde9]
0x067A254C: f30301aa  mov x19, x1
0x067A2550: f40300aa  mov x20, x0
0x067A2554: 28010037  tbnz w8, #0, #0x67a2578
0x067A2558: c0760090  adrp x0, #0x767a000
0x067A255C: 009044f9  ldr x0, [x0, #0x920]
0x067A2560: 2e792797  bl #0x3180a18
0x067A2564: c0760090  adrp x0, #0x767a000
0x067A2568: 004c42f9  ldr x0, [x0, #0x498]
0x067A256C: 2b792797  bl #0x3180a18
0x067A2570: 28008052  movz w8, #0x1
0x067A2574: a8a63739  strb w8, [x21, #0xde9]
0x067A2578: 730600b4  cbz x19, #0x67a2644
0x067A257C: c8760090  adrp x8, #0x767a000
0x067A2580: 089144f9  ldr x8, [x8, #0x920]
0x067A2584: e00313aa  mov x0, x19
0x067A2588: 010140f9  ldr x1, [x8]
0x067A258C: fef95197  bl #0x3c20d84
0x067A2590: a00500b4  cbz x0, #0x67a2644
0x067A2594: 952a40f9  ldr x21, [x20, #0x50]
0x067A2598: 750500b4  cbz x21, #0x67a2644
0x067A259C: ca760090  adrp x10, #0x767a000
0x067A25A0: a80240f9  ldr x8, [x21]
0x067A25A4: 4a4d42f9  ldr x10, [x10, #0x498]
0x067A25A8: 161840f9  ldr x22, [x0, #0x30]
0x067A25AC: 095d4279  ldrh w9, [x8, #0x12e]
0x067A25B0: 410140f9  ldr x1, [x10]
0x067A25B4: 290100b4  cbz x9, #0x67a25d8
0x067A25B8: 0a5940f9  ldr x10, [x8, #0xb0]
0x067A25BC: 4a210091  add x10, x10, #8
0x067A25C0: 4b815ff8  ldur x11, [x10, #-8]
0x067A25C4: 7f0101eb  cmp x11, x1
0x067A25C8: 00010054  b.eq #0x67a25e8
0x067A25CC: 290500f1  subs x9, x9, #1
0x067A25D0: 4a410091  add x10, x10, #0x10
0x067A25D4: 61ffff54  b.ne #0x67a25c0
0x067A25D8: 22018052  movz w2, #0x9
0x067A25DC: e00315aa  mov x0, x21
0x067A25E0: 4cd12697  bl #0x3156b10
0x067A25E4: 05000014  b #0x67a25f8
0x067A25E8: 490140b9  ldr w9, [x10]
0x067A25EC: 29250011  add w9, w9, #9
0x067A25F0: 08d1298b  add x8, x8, w9, sxtw #4
0x067A25F4: 00e10491  add x0, x8, #0x138
0x067A25F8: 080840a9  ldp x8, x2, [x0]
0x067A25FC: e00315aa  mov x0, x21
0x067A2600: e10316aa  mov x1, x22
0x067A2604: 00013fd6  blr x8
0x067A2608: e10313aa  mov x1, x19
0x067A260C: e20300aa  mov x2, x0
0x067A2610: f50300aa  mov x21, x0
0x067A2614: 54000094  bl #0x67a2764
0x067A2618: e00314aa  mov x0, x20
0x067A261C: e10313aa  mov x1, x19
0x067A2620: b3000094  bl #0x67a28ec
0x067A2624: e10313aa  mov x1, x19
0x067A2628: e20315aa  mov x2, x21
0x067A262C: e8000094  bl #0x67a29cc
0x067A2630: e10313aa  mov x1, x19
0x067A2634: f44f42a9  ldp x20, x19, [sp, #0x20]
0x067A2638: f65741a9  ldp x22, x21, [sp, #0x10]
0x067A263C: fe0743f8  ldr x30, [sp], #0x30
0x067A2640: ff000014  b #0x67a2a3c
0x067A2644: 9a792797  bl #0x3180cac

; RVA 0x67A28EC | private void RemoveConflictingComponents(Entity entity) { }
; bytes=224 sha256=77a89751df1475bb5308375b0f6380745f7ec78649b429d8ab7cce52666cfca9 status=arm64_complete_bound indexed_start=True
0x067A28EC: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x067A28F0: f65701a9  stp x22, x21, [sp, #0x10]
0x067A28F4: f44f02a9  stp x20, x19, [sp, #0x20]
0x067A28F8: 35ac00d0  adrp x21, #0x7d28000
0x067A28FC: a8aa7739  ldrb w8, [x21, #0xdea]
0x067A2900: f40301aa  mov x20, x1
0x067A2904: f30300aa  mov x19, x0
0x067A2908: 48020037  tbnz w8, #0, #0x67a2950
0x067A290C: 607b00d0  adrp x0, #0x7710000
0x067A2910: 007445f9  ldr x0, [x0, #0xae8]
0x067A2914: 41782797  bl #0x3180a18
0x067A2918: 607b00d0  adrp x0, #0x7710000
0x067A291C: 007845f9  ldr x0, [x0, #0xaf0]
0x067A2920: 3e782797  bl #0x3180a18
0x067A2924: 607b00d0  adrp x0, #0x7710000
0x067A2928: 007c45f9  ldr x0, [x0, #0xaf8]
0x067A292C: 3b782797  bl #0x3180a18
0x067A2930: 607b00d0  adrp x0, #0x7710000
0x067A2934: 008045f9  ldr x0, [x0, #0xb00]
0x067A2938: 38782797  bl #0x3180a18
0x067A293C: 607b00d0  adrp x0, #0x7710000
0x067A2940: 008445f9  ldr x0, [x0, #0xb08]
0x067A2944: 35782797  bl #0x3180a18
0x067A2948: 28008052  movz w8, #0x1
0x067A294C: a8aa3739  strb w8, [x21, #0xdea]
0x067A2950: d40300b4  cbz x20, #0x67a29c8
0x067A2954: 687b00d0  adrp x8, #0x7710000
0x067A2958: 088145f9  ldr x8, [x8, #0xb00]
0x067A295C: 757b00d0  adrp x21, #0x7710000
0x067A2960: 767b00d0  adrp x22, #0x7710000
0x067A2964: 777b00d0  adrp x23, #0x7710000
0x067A2968: 010140f9  ldr x1, [x8]
0x067A296C: b57645f9  ldr x21, [x21, #0xae8]
0x067A2970: d67e45f9  ldr x22, [x22, #0xaf8]
0x067A2974: f77a45f9  ldr x23, [x23, #0xaf0]
0x067A2978: e00314aa  mov x0, x20
0x067A297C: 61fb5197  bl #0x3c21700
0x067A2980: a10240f9  ldr x1, [x21]
0x067A2984: e00314aa  mov x0, x20
0x067A2988: 5efb5197  bl #0x3c21700
0x067A298C: c10240f9  ldr x1, [x22]
0x067A2990: e00314aa  mov x0, x20
0x067A2994: 5bfb5197  bl #0x3c21700
0x067A2998: e10240f9  ldr x1, [x23]
0x067A299C: e00314aa  mov x0, x20
0x067A29A0: 58fb5197  bl #0x3c21700
0x067A29A4: 601640f9  ldr x0, [x19, #0x28]
0x067A29A8: 000100b4  cbz x0, #0x67a29c8
0x067A29AC: 687b00d0  adrp x8, #0x7710000
0x067A29B0: 088545f9  ldr x8, [x8, #0xb08]
0x067A29B4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x067A29B8: f65741a9  ldp x22, x21, [sp, #0x10]
0x067A29BC: 010140f9  ldr x1, [x8]
0x067A29C0: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x067A29C4: cb085817  b #0x3da4cf0
0x067A29C8: b9782797  bl #0x3180cac

; RVA 0x67A29CC | private void RemoveSingleToolComponents(Entity entity, IMergeItem mergeItem) { }
; bytes=112 sha256=df60c1b357a30f43ffe26cc3f2ae233055fc4c8553791e51bca81f15311d2881 status=arm64_complete_bound indexed_start=True
0x067A29CC: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x067A29D0: f44f01a9  stp x20, x19, [sp, #0x10]
0x067A29D4: 35ac00d0  adrp x21, #0x7d28000
0x067A29D8: a8ae7739  ldrb w8, [x21, #0xdeb]
0x067A29DC: f40302aa  mov x20, x2
0x067A29E0: f30301aa  mov x19, x1
0x067A29E4: c8000037  tbnz w8, #0, #0x67a29fc
0x067A29E8: 407b00f0  adrp x0, #0x770d000
0x067A29EC: 00f046f9  ldr x0, [x0, #0xde0]
0x067A29F0: 0a782797  bl #0x3180a18
0x067A29F4: 28008052  movz w8, #0x1
0x067A29F8: a8ae3739  strb w8, [x21, #0xdeb]
0x067A29FC: e10314aa  mov x1, x20
0x067A2A00: 34fcff97  bl #0x67a1ad0
0x067A2A04: 40010036  tbz w0, #0, #0x67a2a2c
0x067A2A08: 930100b4  cbz x19, #0x67a2a38
0x067A2A0C: 487b00f0  adrp x8, #0x770d000
0x067A2A10: 08f146f9  ldr x8, [x8, #0xde0]
0x067A2A14: e00313aa  mov x0, x19
0x067A2A18: 010140f9  ldr x1, [x8]
0x067A2A1C: daf85197  bl #0x3c20d84
0x067A2A20: 600000b4  cbz x0, #0x67a2a2c
0x067A2A24: 48008052  movz w8, #0x2
0x067A2A28: 082800b9  str w8, [x0, #0x28]
0x067A2A2C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x067A2A30: fe57c2a8  ldp x30, x21, [sp], #0x20
0x067A2A34: c0035fd6  ret
0x067A2A38: 9d782797  bl #0x3180cac

; RVA 0x67A2764 | private void EnsureImmediateToolComponent(Entity entity, IMergeItem mergeItem) { }
; bytes=392 sha256=b798b0baa403a422607a6abcc2b228b7f3086124f0f91056726b1c33ad3f686f status=arm64_complete_bound indexed_start=True
0x067A2764: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x067A2768: f65701a9  stp x22, x21, [sp, #0x10]
0x067A276C: f44f02a9  stp x20, x19, [sp, #0x20]
0x067A2770: 35ac00d0  adrp x21, #0x7d28000
0x067A2774: a8b27739  ldrb w8, [x21, #0xdec]
0x067A2778: f40302aa  mov x20, x2
0x067A277C: f30301aa  mov x19, x1
0x067A2780: 48020037  tbnz w8, #0, #0x67a27c8
0x067A2784: 607b00d0  adrp x0, #0x7710000
0x067A2788: 006c45f9  ldr x0, [x0, #0xad8]
0x067A278C: a3782797  bl #0x3180a18
0x067A2790: c0760090  adrp x0, #0x767a000
0x067A2794: 008c44f9  ldr x0, [x0, #0x918]
0x067A2798: a0782797  bl #0x3180a18
0x067A279C: 407b00f0  adrp x0, #0x770d000
0x067A27A0: 00ec46f9  ldr x0, [x0, #0xdd8]
0x067A27A4: 9d782797  bl #0x3180a18
0x067A27A8: e0760090  adrp x0, #0x767e000
0x067A27AC: 00a442f9  ldr x0, [x0, #0x548]
0x067A27B0: 9a782797  bl #0x3180a18
0x067A27B4: 607b00d0  adrp x0, #0x7710000
0x067A27B8: 007045f9  ldr x0, [x0, #0xae0]
0x067A27BC: 97782797  bl #0x3180a18
0x067A27C0: 28008052  movz w8, #0x1
0x067A27C4: a8b23739  strb w8, [x21, #0xdec]
0x067A27C8: 130900b4  cbz x19, #0x67a28e8
0x067A27CC: 487b00f0  adrp x8, #0x770d000
0x067A27D0: 08ed46f9  ldr x8, [x8, #0xdd8]
0x067A27D4: e00313aa  mov x0, x19
0x067A27D8: 010140f9  ldr x1, [x8]
0x067A27DC: 6af95197  bl #0x3c20d84
0x067A27E0: a00000b4  cbz x0, #0x67a27f4
0x067A27E4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x067A27E8: f65741a9  ldp x22, x21, [sp, #0x10]
0x067A27EC: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x067A27F0: c0035fd6  ret
0x067A27F4: 777b00d0  adrp x23, #0x7710000
0x067A27F8: f77245f9  ldr x23, [x23, #0xae0]
0x067A27FC: e00240f9  ldr x0, [x23]
0x067A2800: 28792797  bl #0x3180ca0
0x067A2804: e1031faa  mov x1, xzr
0x067A2808: f60300aa  mov x22, x0
0x067A280C: b4b7e197  bl #0x60106dc
0x067A2810: e10314aa  mov x1, x20
0x067A2814: 6afcff97  bl #0x67a19bc
0x067A2818: 60050036  tbz w0, #0, #0x67a28c4
0x067A281C: c8760090  adrp x8, #0x767a000
0x067A2820: 088d44f9  ldr x8, [x8, #0x918]
0x067A2824: e00313aa  mov x0, x19
0x067A2828: 010140f9  ldr x1, [x8]
0x067A282C: 56f95197  bl #0x3c20d84
0x067A2830: c00500b4  cbz x0, #0x67a28e8
0x067A2834: b40500b4  cbz x20, #0x67a28e8
0x067A2838: ea760090  adrp x10, #0x767e000
0x067A283C: 880240f9  ldr x8, [x20]
0x067A2840: 153040b9  ldr w21, [x0, #0x30]
0x067A2844: 4aa542f9  ldr x10, [x10, #0x548]
0x067A2848: 095d4279  ldrh w9, [x8, #0x12e]
0x067A284C: 410140f9  ldr x1, [x10]
0x067A2850: 290100b4  cbz x9, #0x67a2874
0x067A2854: 0a5940f9  ldr x10, [x8, #0xb0]
0x067A2858: 4a210091  add x10, x10, #8
0x067A285C: 4b815ff8  ldur x11, [x10, #-8]
0x067A2860: 7f0101eb  cmp x11, x1
0x067A2864: 00010054  b.eq #0x67a2884
0x067A2868: 290500f1  subs x9, x9, #1
0x067A286C: 4a410091  add x10, x10, #0x10
0x067A2870: 61ffff54  b.ne #0x67a285c
0x067A2874: 82018052  movz w2, #0xc
0x067A2878: e00314aa  mov x0, x20
0x067A287C: a5d02697  bl #0x3156b10
0x067A2880: 05000014  b #0x67a2894
0x067A2884: 490140b9  ldr w9, [x10]
0x067A2888: 29310011  add w9, w9, #0xc
0x067A288C: 08d1298b  add x8, x8, w9, sxtw #4
0x067A2890: 00e10491  add x0, x8, #0x138
0x067A2894: 080440a9  ldp x8, x1, [x0]
0x067A2898: e00314aa  mov x0, x20
0x067A289C: 00013fd6  blr x8
0x067A28A0: e80240f9  ldr x8, [x23]
0x067A28A4: f40300aa  mov x20, x0
0x067A28A8: e00308aa  mov x0, x8
0x067A28AC: fd782797  bl #0x3180ca0
0x067A28B0: e10314aa  mov x1, x20
0x067A28B4: e203152a  mov w2, w21
0x067A28B8: e3031faa  mov x3, xzr
0x067A28BC: f60300aa  mov x22, x0
0x067A28C0: 8eb7e197  bl #0x60106f8
0x067A28C4: 687b00d0  adrp x8, #0x7710000
0x067A28C8: 086d45f9  ldr x8, [x8, #0xad8]
0x067A28CC: e00313aa  mov x0, x19
0x067A28D0: e10316aa  mov x1, x22
0x067A28D4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x067A28D8: 020140f9  ldr x2, [x8]
0x067A28DC: f65741a9  ldp x22, x21, [sp, #0x10]
0x067A28E0: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x067A28E4: d5f75117  b #0x3c20838
0x067A28E8: f1782797  bl #0x3180cac

; RVA 0x67A2A3C | private void EnableVisualEffects(Entity entity) { }
; bytes=96 sha256=dd0abf5ebdf4c4b9193dc3e545341ff6583190b08a03cd13985cd6e2b1a1f52c status=arm64_complete_bound indexed_start=True
0x067A2A3C: fe0f1ef8  str x30, [sp, #-0x20]!
0x067A2A40: f44f01a9  stp x20, x19, [sp, #0x10]
0x067A2A44: 34ac00d0  adrp x20, #0x7d28000
0x067A2A48: 88b67739  ldrb w8, [x20, #0xded]
0x067A2A4C: f30301aa  mov x19, x1
0x067A2A50: c8000037  tbnz w8, #0, #0x67a2a68
0x067A2A54: e0760090  adrp x0, #0x767e000
0x067A2A58: 00d042f9  ldr x0, [x0, #0x5a0]
0x067A2A5C: ef772797  bl #0x3180a18
0x067A2A60: 28008052  movz w8, #0x1
0x067A2A64: 88b63739  strb w8, [x20, #0xded]
0x067A2A68: 930100b4  cbz x19, #0x67a2a98
0x067A2A6C: e8760090  adrp x8, #0x767e000
0x067A2A70: 08d142f9  ldr x8, [x8, #0x5a0]
0x067A2A74: e00313aa  mov x0, x19
0x067A2A78: 010140f9  ldr x1, [x8]
0x067A2A7C: c2f85197  bl #0x3c20d84
0x067A2A80: 600000b4  cbz x0, #0x67a2a8c
0x067A2A84: 28008052  movz w8, #0x1
0x067A2A88: 08b40039  strb w8, [x0, #0x2d]
0x067A2A8C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x067A2A90: fe0742f8  ldr x30, [sp], #0x20
0x067A2A94: c0035fd6  ret
0x067A2A98: 85782797  bl #0x3180cac

; RVA 0x67A2648 | private void RemoveImmediateToolBehavior(Entity entity) { }
; bytes=284 sha256=74fa14200653b22eabf8fcad3c8af6fffbf6b9abca9facbc89aaba6862d98fa5 status=arm64_complete_bound indexed_start=True
0x067A2648: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x067A264C: f44f01a9  stp x20, x19, [sp, #0x10]
0x067A2650: 35ac00d0  adrp x21, #0x7d28000
0x067A2654: a8ba7739  ldrb w8, [x21, #0xdee]
0x067A2658: f30301aa  mov x19, x1
0x067A265C: f40300aa  mov x20, x0
0x067A2660: 28010037  tbnz w8, #0, #0x67a2684
0x067A2664: c0760090  adrp x0, #0x767a000
0x067A2668: 009044f9  ldr x0, [x0, #0x920]
0x067A266C: eb782797  bl #0x3180a18
0x067A2670: c0760090  adrp x0, #0x767a000
0x067A2674: 004c42f9  ldr x0, [x0, #0x498]
0x067A2678: e8782797  bl #0x3180a18
0x067A267C: 28008052  movz w8, #0x1
0x067A2680: a8ba3739  strb w8, [x21, #0xdee]
0x067A2684: f30600b4  cbz x19, #0x67a2760
0x067A2688: c8760090  adrp x8, #0x767a000
0x067A268C: 089144f9  ldr x8, [x8, #0x920]
0x067A2690: e00313aa  mov x0, x19
0x067A2694: 010140f9  ldr x1, [x8]
0x067A2698: bbf95197  bl #0x3c20d84
0x067A269C: 200600b4  cbz x0, #0x67a2760
0x067A26A0: 942a40f9  ldr x20, [x20, #0x50]
0x067A26A4: f40500b4  cbz x20, #0x67a2760
0x067A26A8: ca760090  adrp x10, #0x767a000
0x067A26AC: 880240f9  ldr x8, [x20]
0x067A26B0: 4a4d42f9  ldr x10, [x10, #0x498]
0x067A26B4: 151840f9  ldr x21, [x0, #0x30]
0x067A26B8: 095d4279  ldrh w9, [x8, #0x12e]
0x067A26BC: 410140f9  ldr x1, [x10]
0x067A26C0: 290100b4  cbz x9, #0x67a26e4
0x067A26C4: 0a5940f9  ldr x10, [x8, #0xb0]
0x067A26C8: 4a210091  add x10, x10, #8
0x067A26CC: 4b815ff8  ldur x11, [x10, #-8]
0x067A26D0: 7f0101eb  cmp x11, x1
0x067A26D4: 00010054  b.eq #0x67a26f4
0x067A26D8: 290500f1  subs x9, x9, #1
0x067A26DC: 4a410091  add x10, x10, #0x10
0x067A26E0: 61ffff54  b.ne #0x67a26cc
0x067A26E4: 22018052  movz w2, #0x9
0x067A26E8: e00314aa  mov x0, x20
0x067A26EC: 09d12697  bl #0x3156b10
0x067A26F0: 05000014  b #0x67a2704
0x067A26F4: 490140b9  ldr w9, [x10]
0x067A26F8: 29250011  add w9, w9, #9
0x067A26FC: 08d1298b  add x8, x8, w9, sxtw #4
0x067A2700: 00e10491  add x0, x8, #0x138
0x067A2704: 080840a9  ldp x8, x2, [x0]
0x067A2708: e00314aa  mov x0, x20
0x067A270C: e10315aa  mov x1, x21
0x067A2710: 00013fd6  blr x8
0x067A2714: e10313aa  mov x1, x19
0x067A2718: f40300aa  mov x20, x0
0x067A271C: e0000094  bl #0x67a2a9c
0x067A2720: a0010036  tbz w0, #0, #0x67a2754
0x067A2724: e10313aa  mov x1, x19
0x067A2728: f4000094  bl #0x67a2af8
0x067A272C: e10313aa  mov x1, x19
0x067A2730: e20314aa  mov x2, x20
0x067A2734: 30010094  bl #0x67a2bf4
0x067A2738: e10313aa  mov x1, x19
0x067A273C: e20314aa  mov x2, x20
0x067A2740: eb010094  bl #0x67a2eec
0x067A2744: e10313aa  mov x1, x19
0x067A2748: f44f41a9  ldp x20, x19, [sp, #0x10]
0x067A274C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x067A2750: 08010014  b #0x67a2b70
0x067A2754: f44f41a9  ldp x20, x19, [sp, #0x10]
0x067A2758: fe57c2a8  ldp x30, x21, [sp], #0x20
0x067A275C: c0035fd6  ret
0x067A2760: 53792797  bl #0x3180cac

; RVA 0x67A2A9C | private bool HasImmediateToolComponent(Entity entity) { }
; bytes=92 sha256=78bf56eb4e9aafcea64a47a58a928e2c37bbdbdf526ade81314b92daf5835a16 status=arm64_complete_bound indexed_start=True
0x067A2A9C: fe0f1ef8  str x30, [sp, #-0x20]!
0x067A2AA0: f44f01a9  stp x20, x19, [sp, #0x10]
0x067A2AA4: 34ac00d0  adrp x20, #0x7d28000
0x067A2AA8: 88be7739  ldrb w8, [x20, #0xdef]
0x067A2AAC: f30301aa  mov x19, x1
0x067A2AB0: c8000037  tbnz w8, #0, #0x67a2ac8
0x067A2AB4: 407b00f0  adrp x0, #0x770d000
0x067A2AB8: 00ec46f9  ldr x0, [x0, #0xdd8]
0x067A2ABC: d7772797  bl #0x3180a18
0x067A2AC0: 28008052  movz w8, #0x1
0x067A2AC4: 88be3739  strb w8, [x20, #0xdef]
0x067A2AC8: 730100b4  cbz x19, #0x67a2af4
0x067A2ACC: 487b00f0  adrp x8, #0x770d000
0x067A2AD0: 08ed46f9  ldr x8, [x8, #0xdd8]
0x067A2AD4: e00313aa  mov x0, x19
0x067A2AD8: 010140f9  ldr x1, [x8]
0x067A2ADC: aaf85197  bl #0x3c20d84
0x067A2AE0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x067A2AE4: 1f0000f1  cmp x0, #0
0x067A2AE8: e0079f1a  cset w0, ne
0x067A2AEC: fe0742f8  ldr x30, [sp], #0x20
0x067A2AF0: c0035fd6  ret
0x067A2AF4: 6e782797  bl #0x3180cac

; RVA 0x67A2AF8 | private void RemoveImmediateComponents(Entity entity) { }
; bytes=80 sha256=a3553ba8edce25210618c5cee83651a2aa6725513ac4f190bacbe4c3b0a8e0e1 status=arm64_complete_bound indexed_start=True
0x067A2AF8: fe0f1ef8  str x30, [sp, #-0x20]!
0x067A2AFC: f44f01a9  stp x20, x19, [sp, #0x10]
0x067A2B00: 34ac00d0  adrp x20, #0x7d28000
0x067A2B04: 88c27739  ldrb w8, [x20, #0xdf0]
0x067A2B08: f30301aa  mov x19, x1
0x067A2B0C: c8000037  tbnz w8, #0, #0x67a2b24
0x067A2B10: 607b00d0  adrp x0, #0x7710000
0x067A2B14: 008845f9  ldr x0, [x0, #0xb10]
0x067A2B18: c0772797  bl #0x3180a18
0x067A2B1C: 28008052  movz w8, #0x1
0x067A2B20: 88c23739  strb w8, [x20, #0xdf0]
0x067A2B24: 130100b4  cbz x19, #0x67a2b44
0x067A2B28: 687b00d0  adrp x8, #0x7710000
0x067A2B2C: 088945f9  ldr x8, [x8, #0xb10]
0x067A2B30: e00313aa  mov x0, x19
0x067A2B34: f44f41a9  ldp x20, x19, [sp, #0x10]
0x067A2B38: 010140f9  ldr x1, [x8]
0x067A2B3C: fe0742f8  ldr x30, [sp], #0x20
0x067A2B40: f0fa5117  b #0x3c21700
0x067A2B44: 5a782797  bl #0x3180cac

; RVA 0x67A2B70 | private void DisableVisualEffects(Entity entity) { }
; bytes=132 sha256=46770950d29818d365d6f28baa755faa36cabc56d224a7d19a5d2bd105ca3a26 status=arm64_complete_bound indexed_start=True
0x067A2B70: fe0f1ef8  str x30, [sp, #-0x20]!
0x067A2B74: f44f01a9  stp x20, x19, [sp, #0x10]
0x067A2B78: 34ac00d0  adrp x20, #0x7d28000
0x067A2B7C: 88c67739  ldrb w8, [x20, #0xdf1]
0x067A2B80: f30301aa  mov x19, x1
0x067A2B84: 28010037  tbnz w8, #0, #0x67a2ba8
0x067A2B88: c07a00f0  adrp x0, #0x76fd000
0x067A2B8C: 00f842f9  ldr x0, [x0, #0x5f0]
0x067A2B90: a2772797  bl #0x3180a18
0x067A2B94: e0760090  adrp x0, #0x767e000
0x067A2B98: 00d042f9  ldr x0, [x0, #0x5a0]
0x067A2B9C: 9f772797  bl #0x3180a18
0x067A2BA0: 28008052  movz w8, #0x1
0x067A2BA4: 88c63739  strb w8, [x20, #0xdf1]
0x067A2BA8: 530200b4  cbz x19, #0x67a2bf0
0x067A2BAC: e8760090  adrp x8, #0x767e000
0x067A2BB0: 08d142f9  ldr x8, [x8, #0x5a0]
0x067A2BB4: d47a00f0  adrp x20, #0x76fd000
0x067A2BB8: e00313aa  mov x0, x19
0x067A2BBC: 010140f9  ldr x1, [x8]
0x067A2BC0: 94fa42f9  ldr x20, [x20, #0x5f0]
0x067A2BC4: 70f85197  bl #0x3c20d84
0x067A2BC8: 810240f9  ldr x1, [x20]
0x067A2BCC: f40300aa  mov x20, x0
0x067A2BD0: e00313aa  mov x0, x19
0x067A2BD4: 6cf85197  bl #0x3c20d84
0x067A2BD8: 740000b4  cbz x20, #0x67a2be4
0x067A2BDC: 400000b5  cbnz x0, #0x67a2be4
0x067A2BE0: 9fb60039  strb wzr, [x20, #0x2d]
0x067A2BE4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x067A2BE8: fe0742f8  ldr x30, [sp], #0x20
0x067A2BEC: c0035fd6  ret
0x067A2BF0: 2f782797  bl #0x3180cac

; RVA 0x67A2B48 | private void RestoreOriginalComponents(Entity entity, IMergeItem mergeItem) { }
; bytes=40 sha256=3417c3b5ddd181779c6006f040ed2078273d765b9f3d8d75e04c089f7c98bbc8 status=arm64_complete_bound indexed_start=True
0x067A2B48: fe0f1ef8  str x30, [sp, #-0x20]!
0x067A2B4C: f44f01a9  stp x20, x19, [sp, #0x10]
0x067A2B50: f30302aa  mov x19, x2
0x067A2B54: f40301aa  mov x20, x1
0x067A2B58: 27000094  bl #0x67a2bf4
0x067A2B5C: e10314aa  mov x1, x20
0x067A2B60: e20313aa  mov x2, x19
0x067A2B64: f44f41a9  ldp x20, x19, [sp, #0x10]
0x067A2B68: fe0742f8  ldr x30, [sp], #0x20
0x067A2B6C: e0000014  b #0x67a2eec

; RVA 0x67A2BF4 | private void RestoreToolBoxComponents(Entity entity, IMergeItem mergeItem) { }
; bytes=760 sha256=ea788875b12040a45244d65ef46e09b7fcd2002f68eab82bc4b1649362b1db46 status=arm64_complete_bound indexed_start=True
0x067A2BF4: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x067A2BF8: f44f01a9  stp x20, x19, [sp, #0x10]
0x067A2BFC: 35ac00d0  adrp x21, #0x7d28000
0x067A2C00: a8ca7739  ldrb w8, [x21, #0xdf2]
0x067A2C04: f40302aa  mov x20, x2
0x067A2C08: f30301aa  mov x19, x1
0x067A2C0C: 88010037  tbnz w8, #0, #0x67a2c3c
0x067A2C10: 607b00d0  adrp x0, #0x7710000
0x067A2C14: 008c45f9  ldr x0, [x0, #0xb18]
0x067A2C18: 80772797  bl #0x3180a18
0x067A2C1C: 607b00d0  adrp x0, #0x7710000
0x067A2C20: 009045f9  ldr x0, [x0, #0xb20]
0x067A2C24: 7d772797  bl #0x3180a18
0x067A2C28: e0760090  adrp x0, #0x767e000
0x067A2C2C: 00a442f9  ldr x0, [x0, #0x548]
0x067A2C30: 7a772797  bl #0x3180a18
0x067A2C34: 28008052  movz w8, #0x1
0x067A2C38: a8ca3739  strb w8, [x21, #0xdf2]
0x067A2C3C: e10314aa  mov x1, x20
0x067A2C40: 5ffbff97  bl #0x67a19bc
0x067A2C44: c0120036  tbz w0, #0, #0x67a2e9c
0x067A2C48: 141500b4  cbz x20, #0x67a2ee8
0x067A2C4C: f5760090  adrp x21, #0x767e000
0x067A2C50: 880240f9  ldr x8, [x20]
0x067A2C54: b5a642f9  ldr x21, [x21, #0x548]
0x067A2C58: 095d4279  ldrh w9, [x8, #0x12e]
0x067A2C5C: a10240f9  ldr x1, [x21]
0x067A2C60: 290100b4  cbz x9, #0x67a2c84
0x067A2C64: 0a5940f9  ldr x10, [x8, #0xb0]
0x067A2C68: 4a210091  add x10, x10, #8
0x067A2C6C: 4b815ff8  ldur x11, [x10, #-8]
0x067A2C70: 7f0101eb  cmp x11, x1
0x067A2C74: 00010054  b.eq #0x67a2c94
0x067A2C78: 290500f1  subs x9, x9, #1
0x067A2C7C: 4a410091  add x10, x10, #0x10
0x067A2C80: 61ffff54  b.ne #0x67a2c6c
0x067A2C84: 82018052  movz w2, #0xc
0x067A2C88: e00314aa  mov x0, x20
0x067A2C8C: a1cf2697  bl #0x3156b10
0x067A2C90: 05000014  b #0x67a2ca4
0x067A2C94: 490140b9  ldr w9, [x10]
0x067A2C98: 29310011  add w9, w9, #0xc
0x067A2C9C: 08d1298b  add x8, x8, w9, sxtw #4
0x067A2CA0: 00e10491  add x0, x8, #0x138
0x067A2CA4: 080440a9  ldp x8, x1, [x0]
0x067A2CA8: e00314aa  mov x0, x20
0x067A2CAC: 00013fd6  blr x8
0x067A2CB0: 200700b4  cbz x0, #0x67a2d94
0x067A2CB4: 880240f9  ldr x8, [x20]
0x067A2CB8: a10240f9  ldr x1, [x21]
0x067A2CBC: 095d4279  ldrh w9, [x8, #0x12e]
0x067A2CC0: 290100b4  cbz x9, #0x67a2ce4
0x067A2CC4: 0a5940f9  ldr x10, [x8, #0xb0]
0x067A2CC8: 4a210091  add x10, x10, #8
0x067A2CCC: 4b815ff8  ldur x11, [x10, #-8]
0x067A2CD0: 7f0101eb  cmp x11, x1
0x067A2CD4: 00010054  b.eq #0x67a2cf4
0x067A2CD8: 290500f1  subs x9, x9, #1
0x067A2CDC: 4a410091  add x10, x10, #0x10
0x067A2CE0: 61ffff54  b.ne #0x67a2ccc
0x067A2CE4: 82018052  movz w2, #0xc
0x067A2CE8: e00314aa  mov x0, x20
0x067A2CEC: 89cf2697  bl #0x3156b10
0x067A2CF0: 05000014  b #0x67a2d04
0x067A2CF4: 490140b9  ldr w9, [x10]
0x067A2CF8: 29310011  add w9, w9, #0xc
0x067A2CFC: 08d1298b  add x8, x8, w9, sxtw #4
0x067A2D00: 00e10491  add x0, x8, #0x138
0x067A2D04: 080440a9  ldp x8, x1, [x0]
0x067A2D08: e00314aa  mov x0, x20
0x067A2D0C: 00013fd6  blr x8
0x067A2D10: c00e00b4  cbz x0, #0x67a2ee8
0x067A2D14: 08404039  ldrb w8, [x0, #0x10]
0x067A2D18: e8030034  cbz w8, #0x67a2d94
0x067A2D1C: 880240f9  ldr x8, [x20]
0x067A2D20: a10240f9  ldr x1, [x21]
0x067A2D24: 095d4279  ldrh w9, [x8, #0x12e]
0x067A2D28: 290100b4  cbz x9, #0x67a2d4c
0x067A2D2C: 0a5940f9  ldr x10, [x8, #0xb0]
0x067A2D30: 4a210091  add x10, x10, #8
0x067A2D34: 4b815ff8  ldur x11, [x10, #-8]
0x067A2D38: 7f0101eb  cmp x11, x1
0x067A2D3C: 00010054  b.eq #0x67a2d5c
0x067A2D40: 290500f1  subs x9, x9, #1
0x067A2D44: 4a410091  add x10, x10, #0x10
0x067A2D48: 61ffff54  b.ne #0x67a2d34
0x067A2D4C: 82018052  movz w2, #0xc
0x067A2D50: e00314aa  mov x0, x20
0x067A2D54: 6fcf2697  bl #0x3156b10
0x067A2D58: 05000014  b #0x67a2d6c
0x067A2D5C: 490140b9  ldr w9, [x10]
0x067A2D60: 29310011  add w9, w9, #0xc
0x067A2D64: 08d1298b  add x8, x8, w9, sxtw #4
0x067A2D68: 00e10491  add x0, x8, #0x138
0x067A2D6C: 080440a9  ldp x8, x1, [x0]
0x067A2D70: e00314aa  mov x0, x20
0x067A2D74: 00013fd6  blr x8
0x067A2D78: 930b00b4  cbz x19, #0x67a2ee8
0x067A2D7C: 687b00d0  adrp x8, #0x7710000
0x067A2D80: 089145f9  ldr x8, [x8, #0xb20]
0x067A2D84: e10300aa  mov x1, x0
0x067A2D88: e00313aa  mov x0, x19
0x067A2D8C: 020140f9  ldr x2, [x8]
0x067A2D90: aaf65197  bl #0x3c20838
0x067A2D94: 880240f9  ldr x8, [x20]
0x067A2D98: a10240f9  ldr x1, [x21]
0x067A2D9C: 095d4279  ldrh w9, [x8, #0x12e]
0x067A2DA0: 290100b4  cbz x9, #0x67a2dc4
0x067A2DA4: 0a5940f9  ldr x10, [x8, #0xb0]
0x067A2DA8: 4a210091  add x10, x10, #8
0x067A2DAC: 4b815ff8  ldur x11, [x10, #-8]
0x067A2DB0: 7f0101eb  cmp x11, x1
0x067A2DB4: 00010054  b.eq #0x67a2dd4
0x067A2DB8: 290500f1  subs x9, x9, #1
0x067A2DBC: 4a410091  add x10, x10, #0x10
0x067A2DC0: 61ffff54  b.ne #0x67a2dac
0x067A2DC4: 42008052  movz w2, #0x2
0x067A2DC8: e00314aa  mov x0, x20
0x067A2DCC: 51cf2697  bl #0x3156b10
0x067A2DD0: 05000014  b #0x67a2de4
0x067A2DD4: 490140b9  ldr w9, [x10]
0x067A2DD8: 29090011  add w9, w9, #2
0x067A2DDC: 08d1298b  add x8, x8, w9, sxtw #4
0x067A2DE0: 00e10491  add x0, x8, #0x138
0x067A2DE4: 080440a9  ldp x8, x1, [x0]
0x067A2DE8: e00314aa  mov x0, x20
0x067A2DEC: 00013fd6  blr x8
0x067A2DF0: 600500b4  cbz x0, #0x67a2e9c
0x067A2DF4: 880240f9  ldr x8, [x20]
0x067A2DF8: a10240f9  ldr x1, [x21]
0x067A2DFC: 095d4279  ldrh w9, [x8, #0x12e]
0x067A2E00: 290100b4  cbz x9, #0x67a2e24
0x067A2E04: 0a5940f9  ldr x10, [x8, #0xb0]
0x067A2E08: 4a210091  add x10, x10, #8
0x067A2E0C: 4b815ff8  ldur x11, [x10, #-8]
0x067A2E10: 7f0101eb  cmp x11, x1
0x067A2E14: 00010054  b.eq #0x67a2e34
0x067A2E18: 290500f1  subs x9, x9, #1
0x067A2E1C: 4a410091  add x10, x10, #0x10
0x067A2E20: 61ffff54  b.ne #0x67a2e0c
0x067A2E24: 42008052  movz w2, #0x2
0x067A2E28: e00314aa  mov x0, x20
0x067A2E2C: 39cf2697  bl #0x3156b10
0x067A2E30: 05000014  b #0x67a2e44
0x067A2E34: 490140b9  ldr w9, [x10]
0x067A2E38: 29090011  add w9, w9, #2
0x067A2E3C: 08d1298b  add x8, x8, w9, sxtw #4
0x067A2E40: 00e10491  add x0, x8, #0x138
0x067A2E44: 080440a9  ldp x8, x1, [x0]
0x067A2E48: e00314aa  mov x0, x20
0x067A2E4C: 00013fd6  blr x8
0x067A2E50: c00400b4  cbz x0, #0x67a2ee8
0x067A2E54: 08404039  ldrb w8, [x0, #0x10]
0x067A2E58: 28020034  cbz w8, #0x67a2e9c
0x067A2E5C: 880240f9  ldr x8, [x20]
0x067A2E60: a10240f9  ldr x1, [x21]
0x067A2E64: 095d4279  ldrh w9, [x8, #0x12e]
0x067A2E68: 290100b4  cbz x9, #0x67a2e8c
0x067A2E6C: 0a5940f9  ldr x10, [x8, #0xb0]
0x067A2E70: 4a210091  add x10, x10, #8
0x067A2E74: 4b815ff8  ldur x11, [x10, #-8]
0x067A2E78: 7f0101eb  cmp x11, x1
0x067A2E7C: 60010054  b.eq #0x67a2ea8
0x067A2E80: 290500f1  subs x9, x9, #1
0x067A2E84: 4a410091  add x10, x10, #0x10
0x067A2E88: 61ffff54  b.ne #0x67a2e74
0x067A2E8C: 42008052  movz w2, #0x2
0x067A2E90: e00314aa  mov x0, x20
0x067A2E94: 1fcf2697  bl #0x3156b10
0x067A2E98: 08000014  b #0x67a2eb8
0x067A2E9C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x067A2EA0: fe57c2a8  ldp x30, x21, [sp], #0x20
0x067A2EA4: c0035fd6  ret
0x067A2EA8: 490140b9  ldr w9, [x10]
0x067A2EAC: 29090011  add w9, w9, #2
0x067A2EB0: 08d1298b  add x8, x8, w9, sxtw #4
0x067A2EB4: 00e10491  add x0, x8, #0x138
0x067A2EB8: 080440a9  ldp x8, x1, [x0]
0x067A2EBC: e00314aa  mov x0, x20
0x067A2EC0: 00013fd6  blr x8
0x067A2EC4: 330100b4  cbz x19, #0x67a2ee8
0x067A2EC8: 687b00d0  adrp x8, #0x7710000
0x067A2ECC: 088d45f9  ldr x8, [x8, #0xb18]
0x067A2ED0: e10300aa  mov x1, x0
0x067A2ED4: e00313aa  mov x0, x19
0x067A2ED8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x067A2EDC: 020140f9  ldr x2, [x8]
0x067A2EE0: fe57c2a8  ldp x30, x21, [sp], #0x20
0x067A2EE4: 55f65117  b #0x3c20838
0x067A2EE8: 71772797  bl #0x3180cac

; RVA 0x67A2EEC | private void RestoreSingleToolComponents(Entity entity, IMergeItem mergeItem) { }
; bytes=664 sha256=b4a336e429c4ddd355fadb52f5a1121c00113c3e4848fae0ebf3286292735c9f status=arm64_complete_bound indexed_start=True
0x067A2EEC: fe0f1df8  str x30, [sp, #-0x30]!
0x067A2EF0: f65701a9  stp x22, x21, [sp, #0x10]
0x067A2EF4: f44f02a9  stp x20, x19, [sp, #0x20]
0x067A2EF8: 35ac00d0  adrp x21, #0x7d28000
0x067A2EFC: a8ce7739  ldrb w8, [x21, #0xdf3]
0x067A2F00: f40302aa  mov x20, x2
0x067A2F04: f30301aa  mov x19, x1
0x067A2F08: 48020037  tbnz w8, #0, #0x67a2f50
0x067A2F0C: c07900b0  adrp x0, #0x76db000
0x067A2F10: 00b443f9  ldr x0, [x0, #0x768]
0x067A2F14: c1762797  bl #0x3180a18
0x067A2F18: 607b00d0  adrp x0, #0x7710000
0x067A2F1C: 009445f9  ldr x0, [x0, #0xb28]
0x067A2F20: be762797  bl #0x3180a18
0x067A2F24: c07900b0  adrp x0, #0x76db000
0x067A2F28: 005444f9  ldr x0, [x0, #0x8a8]
0x067A2F2C: bb762797  bl #0x3180a18
0x067A2F30: 407b00f0  adrp x0, #0x770d000
0x067A2F34: 00f046f9  ldr x0, [x0, #0xde0]
0x067A2F38: b8762797  bl #0x3180a18
0x067A2F3C: e0760090  adrp x0, #0x767e000
0x067A2F40: 00a442f9  ldr x0, [x0, #0x548]
0x067A2F44: b5762797  bl #0x3180a18
0x067A2F48: 28008052  movz w8, #0x1
0x067A2F4C: a8ce3739  strb w8, [x21, #0xdf3]
0x067A2F50: e10314aa  mov x1, x20
0x067A2F54: dffaff97  bl #0x67a1ad0
0x067A2F58: 600a0036  tbz w0, #0, #0x67a30a4
0x067A2F5C: 331100b4  cbz x19, #0x67a3180
0x067A2F60: 487b00f0  adrp x8, #0x770d000
0x067A2F64: 08f146f9  ldr x8, [x8, #0xde0]
0x067A2F68: e00313aa  mov x0, x19
0x067A2F6C: 010140f9  ldr x1, [x8]
0x067A2F70: 85f75197  bl #0x3c20d84
0x067A2F74: e00000b4  cbz x0, #0x67a2f90
0x067A2F78: 1f2800b9  str wzr, [x0, #0x28]
0x067A2F7C: c87900b0  adrp x8, #0x76db000
0x067A2F80: 085544f9  ldr x8, [x8, #0x8a8]
0x067A2F84: e00313aa  mov x0, x19
0x067A2F88: 010140f9  ldr x1, [x8]
0x067A2F8C: 16f55197  bl #0x3c203e4
0x067A2F90: 940f00b4  cbz x20, #0x67a3180
0x067A2F94: f5760090  adrp x21, #0x767e000
0x067A2F98: 880240f9  ldr x8, [x20]
0x067A2F9C: b5a642f9  ldr x21, [x21, #0x548]
0x067A2FA0: 095d4279  ldrh w9, [x8, #0x12e]
0x067A2FA4: a10240f9  ldr x1, [x21]
0x067A2FA8: 290100b4  cbz x9, #0x67a2fcc
0x067A2FAC: 0a5940f9  ldr x10, [x8, #0xb0]
0x067A2FB0: 4a210091  add x10, x10, #8
0x067A2FB4: 4b815ff8  ldur x11, [x10, #-8]
0x067A2FB8: 7f0101eb  cmp x11, x1
0x067A2FBC: 00010054  b.eq #0x67a2fdc
0x067A2FC0: 290500f1  subs x9, x9, #1
0x067A2FC4: 4a410091  add x10, x10, #0x10
0x067A2FC8: 61ffff54  b.ne #0x67a2fb4
0x067A2FCC: 82008052  movz w2, #0x4
0x067A2FD0: e00314aa  mov x0, x20
0x067A2FD4: cfce2697  bl #0x3156b10
0x067A2FD8: 05000014  b #0x67a2fec
0x067A2FDC: 490140b9  ldr w9, [x10]
0x067A2FE0: 29110011  add w9, w9, #4
0x067A2FE4: 08d1298b  add x8, x8, w9, sxtw #4
0x067A2FE8: 00e10491  add x0, x8, #0x138
0x067A2FEC: 080440a9  ldp x8, x1, [x0]
0x067A2FF0: e00314aa  mov x0, x20
0x067A2FF4: 00013fd6  blr x8
0x067A2FF8: 600500b4  cbz x0, #0x67a30a4
0x067A2FFC: 880240f9  ldr x8, [x20]
0x067A3000: a10240f9  ldr x1, [x21]
0x067A3004: 095d4279  ldrh w9, [x8, #0x12e]
0x067A3008: 290100b4  cbz x9, #0x67a302c
0x067A300C: 0a5940f9  ldr x10, [x8, #0xb0]
0x067A3010: 4a210091  add x10, x10, #8
0x067A3014: 4b815ff8  ldur x11, [x10, #-8]
0x067A3018: 7f0101eb  cmp x11, x1
0x067A301C: 00010054  b.eq #0x67a303c
0x067A3020: 290500f1  subs x9, x9, #1
0x067A3024: 4a410091  add x10, x10, #0x10
0x067A3028: 61ffff54  b.ne #0x67a3014
0x067A302C: 82008052  movz w2, #0x4
0x067A3030: e00314aa  mov x0, x20
0x067A3034: b7ce2697  bl #0x3156b10
0x067A3038: 05000014  b #0x67a304c
0x067A303C: 490140b9  ldr w9, [x10]
0x067A3040: 29110011  add w9, w9, #4
0x067A3044: 08d1298b  add x8, x8, w9, sxtw #4
0x067A3048: 00e10491  add x0, x8, #0x138
0x067A304C: 080440a9  ldp x8, x1, [x0]
0x067A3050: e00314aa  mov x0, x20
0x067A3054: 00013fd6  blr x8
0x067A3058: 400900b4  cbz x0, #0x67a3180
0x067A305C: 08404039  ldrb w8, [x0, #0x10]
0x067A3060: 28020034  cbz w8, #0x67a30a4
0x067A3064: 880240f9  ldr x8, [x20]
0x067A3068: a10240f9  ldr x1, [x21]
0x067A306C: 095d4279  ldrh w9, [x8, #0x12e]
0x067A3070: 290100b4  cbz x9, #0x67a3094
0x067A3074: 0a5940f9  ldr x10, [x8, #0xb0]
0x067A3078: 4a210091  add x10, x10, #8
0x067A307C: 4b815ff8  ldur x11, [x10, #-8]
0x067A3080: 7f0101eb  cmp x11, x1
0x067A3084: 80010054  b.eq #0x67a30b4
0x067A3088: 290500f1  subs x9, x9, #1
0x067A308C: 4a410091  add x10, x10, #0x10
0x067A3090: 61ffff54  b.ne #0x67a307c
0x067A3094: 82008052  movz w2, #0x4
0x067A3098: e00314aa  mov x0, x20
0x067A309C: 9dce2697  bl #0x3156b10
0x067A30A0: 09000014  b #0x67a30c4
0x067A30A4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x067A30A8: f65741a9  ldp x22, x21, [sp, #0x10]
0x067A30AC: fe0743f8  ldr x30, [sp], #0x30
0x067A30B0: c0035fd6  ret
0x067A30B4: 490140b9  ldr w9, [x10]
0x067A30B8: 29110011  add w9, w9, #4
0x067A30BC: 08d1298b  add x8, x8, w9, sxtw #4
0x067A30C0: 00e10491  add x0, x8, #0x138
0x067A30C4: 080440a9  ldp x8, x1, [x0]
0x067A30C8: e00314aa  mov x0, x20
0x067A30CC: 00013fd6  blr x8
0x067A30D0: 880240f9  ldr x8, [x20]
0x067A30D4: a10240f9  ldr x1, [x21]
0x067A30D8: f50300aa  mov x21, x0
0x067A30DC: 095d4279  ldrh w9, [x8, #0x12e]
0x067A30E0: 290100b4  cbz x9, #0x67a3104
0x067A30E4: 0a5940f9  ldr x10, [x8, #0xb0]
0x067A30E8: 4a210091  add x10, x10, #8
0x067A30EC: 4b815ff8  ldur x11, [x10, #-8]
0x067A30F0: 7f0101eb  cmp x11, x1
0x067A30F4: 00010054  b.eq #0x67a3114
0x067A30F8: 290500f1  subs x9, x9, #1
0x067A30FC: 4a410091  add x10, x10, #0x10
0x067A3100: 61ffff54  b.ne #0x67a30ec
0x067A3104: a2008052  movz w2, #0x5
0x067A3108: e00314aa  mov x0, x20
0x067A310C: 81ce2697  bl #0x3156b10
0x067A3110: 05000014  b #0x67a3124
0x067A3114: 490140b9  ldr w9, [x10]
0x067A3118: 29150011  add w9, w9, #5
0x067A311C: 08d1298b  add x8, x8, w9, sxtw #4
0x067A3120: 00e10491  add x0, x8, #0x138
0x067A3124: 080440a9  ldp x8, x1, [x0]
0x067A3128: e00314aa  mov x0, x20
0x067A312C: 00013fd6  blr x8
0x067A3130: c8790090  adrp x8, #0x76db000
0x067A3134: 08b543f9  ldr x8, [x8, #0x768]
0x067A3138: f40300aa  mov x20, x0
0x067A313C: 080140f9  ldr x8, [x8]
0x067A3140: e00308aa  mov x0, x8
0x067A3144: d7762797  bl #0x3180ca0
0x067A3148: e10315aa  mov x1, x21
0x067A314C: e20314aa  mov x2, x20
0x067A3150: e3031faa  mov x3, xzr
0x067A3154: f60300aa  mov x22, x0
0x067A3158: f3b2e197  bl #0x600fd24
0x067A315C: 687b00b0  adrp x8, #0x7710000
0x067A3160: 089545f9  ldr x8, [x8, #0xb28]
0x067A3164: e00313aa  mov x0, x19
0x067A3168: e10316aa  mov x1, x22
0x067A316C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x067A3170: 020140f9  ldr x2, [x8]
0x067A3174: f65741a9  ldp x22, x21, [sp, #0x10]
0x067A3178: fe0743f8  ldr x30, [sp], #0x30
0x067A317C: aff55117  b #0x3c20838
0x067A3180: cb762797  bl #0x3180cac

; RVA 0x67A3184 | public void .ctor() { }
; bytes=140 sha256=0e3b4e0b5c7cd988249f2c465ab92853955015c7b456421346175eb73fc7f5fc status=arm64_complete_bound indexed_start=True
0x067A3184: fe0f1df8  str x30, [sp, #-0x30]!
0x067A3188: f65701a9  stp x22, x21, [sp, #0x10]
0x067A318C: f44f02a9  stp x20, x19, [sp, #0x20]
0x067A3190: 35ac00b0  adrp x21, #0x7d28000
0x067A3194: 96760090  adrp x22, #0x7673000
0x067A3198: 94760090  adrp x20, #0x7673000
0x067A319C: a8d27739  ldrb w8, [x21, #0xdf4]
0x067A31A0: d64e40f9  ldr x22, [x22, #0x98]
0x067A31A4: 945240f9  ldr x20, [x20, #0xa0]
0x067A31A8: f30300aa  mov x19, x0
0x067A31AC: 28010037  tbnz w8, #0, #0x67a31d0
0x067A31B0: 80760090  adrp x0, #0x7673000
0x067A31B4: 005040f9  ldr x0, [x0, #0xa0]
0x067A31B8: 18762797  bl #0x3180a18
0x067A31BC: 80760090  adrp x0, #0x7673000
0x067A31C0: 004c40f9  ldr x0, [x0, #0x98]
0x067A31C4: 15762797  bl #0x3180a18
0x067A31C8: 28008052  movz w8, #0x1
0x067A31CC: a8d23739  strb w8, [x21, #0xdf4]
0x067A31D0: c00240f9  ldr x0, [x22]
0x067A31D4: b3762797  bl #0x3180ca0
0x067A31D8: 820240f9  ldr x2, [x20]
0x067A31DC: e1031f2a  mov w1, wzr
0x067A31E0: f40300aa  mov x20, x0
0x067A31E4: 13f96997  bl #0x4221630
0x067A31E8: e00313aa  mov x0, x19
0x067A31EC: 148c05f8  str x20, [x0, #0x58]!
0x067A31F0: e10314aa  mov x1, x20
0x067A31F4: f4752797  bl #0x31809c4
0x067A31F8: e00313aa  mov x0, x19
0x067A31FC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x067A3200: f65741a9  ldp x22, x21, [sp, #0x10]
0x067A3204: e1031faa  mov x1, xzr
0x067A3208: fe0743f8  ldr x30, [sp], #0x30
0x067A320C: cd10f017  b #0x63a7540

