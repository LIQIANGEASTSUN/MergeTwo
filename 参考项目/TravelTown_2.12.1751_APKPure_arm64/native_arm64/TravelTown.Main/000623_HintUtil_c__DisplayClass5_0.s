; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 623 .HintUtil.<>c__DisplayClass5_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6274780 | public void .ctor() { }
; bytes=8 sha256=832e5375eb91f1bea6f76755dcffee74a45a805a2faa1d7afaa5e4584debf98a status=arm64_complete_bound indexed_start=True
0x06274780: e1031faa  mov x1, xzr
0x06274784: 9e97d117  b #0x56da5fc

; RVA 0x6277AC8 | internal bool <TryFindMergeAnyHint>b__2(PositionComponent position) { }
; bytes=276 sha256=20d6d8dddfe1cea627533df17efbe07798c432732cf69cbda47b4a64dd6a1f75 status=arm64_complete_bound indexed_start=True
0x06277AC8: fe0f1df8  str x30, [sp, #-0x30]!
0x06277ACC: f65701a9  stp x22, x21, [sp, #0x10]
0x06277AD0: f44f02a9  stp x20, x19, [sp, #0x20]
0x06277AD4: 75d500d0  adrp x21, #0x7d25000
0x06277AD8: a88a5139  ldrb w8, [x21, #0x462]
0x06277ADC: f40301aa  mov x20, x1
0x06277AE0: f30300aa  mov x19, x0
0x06277AE4: 88010037  tbnz w8, #0, #0x6277b14
0x06277AE8: 20a00090  adrp x0, #0x767b000
0x06277AEC: 00cc47f9  ldr x0, [x0, #0xf98]
0x06277AF0: ca233c97  bl #0x3180a18
0x06277AF4: 60a300f0  adrp x0, #0x76e6000
0x06277AF8: 004444f9  ldr x0, [x0, #0x888]
0x06277AFC: c7233c97  bl #0x3180a18
0x06277B00: 609f0090  adrp x0, #0x7663000
0x06277B04: 00f446f9  ldr x0, [x0, #0xde8]
0x06277B08: c4233c97  bl #0x3180a18
0x06277B0C: 28008052  movz w8, #0x1
0x06277B10: a88a1139  strb w8, [x21, #0x462]
0x06277B14: e00314aa  mov x0, x20
0x06277B18: 0de6ff97  bl #0x627134c
0x06277B1C: 20020037  tbnz w0, #0, #0x6277b60
0x06277B20: 750a40f9  ldr x21, [x19, #0x10]
0x06277B24: 350200b4  cbz x21, #0x6277b68
0x06277B28: 940500b4  cbz x20, #0x6277bd8
0x06277B2C: 28a00090  adrp x8, #0x767b000
0x06277B30: 08cd47f9  ldr x8, [x8, #0xf98]
0x06277B34: e00314aa  mov x0, x20
0x06277B38: 010140f9  ldr x1, [x8]
0x06277B3C: 38d76597  bl #0x3bed81c
0x06277B40: c00400b4  cbz x0, #0x6277bd8
0x06277B44: 689f0090  adrp x8, #0x7663000
0x06277B48: 011840f9  ldr x1, [x0, #0x30]
0x06277B4C: 08f546f9  ldr x8, [x8, #0xde8]
0x06277B50: e00315aa  mov x0, x21
0x06277B54: 020140f9  ldr x2, [x8]
0x06277B58: 29337797  bl #0x40447fc
0x06277B5C: 80000036  tbz w0, #0, #0x6277b6c
0x06277B60: e0031f2a  mov w0, wzr
0x06277B64: 0e000014  b #0x6277b9c
0x06277B68: 940300b4  cbz x20, #0x6277bd8
0x06277B6C: 76a300f0  adrp x22, #0x76e6000
0x06277B70: 750e40f9  ldr x21, [x19, #0x18]
0x06277B74: d64644f9  ldr x22, [x22, #0x888]
0x06277B78: e00314aa  mov x0, x20
0x06277B7C: c10240f9  ldr x1, [x22]
0x06277B80: 27d76597  bl #0x3bed81c
0x06277B84: 621240f9  ldr x2, [x19, #0x20]
0x06277B88: e10300aa  mov x1, x0
0x06277B8C: e00315aa  mov x0, x21
0x06277B90: 10ddff97  bl #0x626efd0
0x06277B94: c0000036  tbz w0, #0, #0x6277bac
0x06277B98: 20008052  movz w0, #0x1
0x06277B9C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06277BA0: f65741a9  ldp x22, x21, [sp, #0x10]
0x06277BA4: fe0743f8  ldr x30, [sp], #0x30
0x06277BA8: c0035fd6  ret
0x06277BAC: c10240f9  ldr x1, [x22]
0x06277BB0: 750e40f9  ldr x21, [x19, #0x18]
0x06277BB4: e00314aa  mov x0, x20
0x06277BB8: 19d76597  bl #0x3bed81c
0x06277BBC: 621240f9  ldr x2, [x19, #0x20]
0x06277BC0: e10300aa  mov x1, x0
0x06277BC4: e00315aa  mov x0, x21
0x06277BC8: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06277BCC: f65741a9  ldp x22, x21, [sp, #0x10]
0x06277BD0: fe0743f8  ldr x30, [sp], #0x30
0x06277BD4: d8ddff17  b #0x626f334
0x06277BD8: 35243c97  bl #0x3180cac

; RVA 0x6277BDC | internal int <TryFindMergeAnyHint>b__4(MergeComponent merge) { }
; bytes=216 sha256=eb7af39b162d603274326fe84d91a3f8c2ac910dab464d7d794621cf324a4c24 status=arm64_complete_bound indexed_start=True
0x06277BDC: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06277BE0: f44f01a9  stp x20, x19, [sp, #0x10]
0x06277BE4: 75d500d0  adrp x21, #0x7d25000
0x06277BE8: a88e5139  ldrb w8, [x21, #0x463]
0x06277BEC: f40301aa  mov x20, x1
0x06277BF0: f30300aa  mov x19, x0
0x06277BF4: 28010037  tbnz w8, #0, #0x6277c18
0x06277BF8: 20a00090  adrp x0, #0x767b000
0x06277BFC: 00cc47f9  ldr x0, [x0, #0xf98]
0x06277C00: 86233c97  bl #0x3180a18
0x06277C04: 00a000f0  adrp x0, #0x767a000
0x06277C08: 004c42f9  ldr x0, [x0, #0x498]
0x06277C0C: 83233c97  bl #0x3180a18
0x06277C10: 28008052  movz w8, #0x1
0x06277C14: a88e1139  strb w8, [x21, #0x463]
0x06277C18: d40400b4  cbz x20, #0x6277cb0
0x06277C1C: 28a00090  adrp x8, #0x767b000
0x06277C20: 08cd47f9  ldr x8, [x8, #0xf98]
0x06277C24: 731240f9  ldr x19, [x19, #0x20]
0x06277C28: e00314aa  mov x0, x20
0x06277C2C: 010140f9  ldr x1, [x8]
0x06277C30: fbd66597  bl #0x3bed81c
0x06277C34: e00300b4  cbz x0, #0x6277cb0
0x06277C38: d30300b4  cbz x19, #0x6277cb0
0x06277C3C: 0aa000f0  adrp x10, #0x767a000
0x06277C40: 680240f9  ldr x8, [x19]
0x06277C44: 4a4d42f9  ldr x10, [x10, #0x498]
0x06277C48: 141840f9  ldr x20, [x0, #0x30]
0x06277C4C: 095d4279  ldrh w9, [x8, #0x12e]
0x06277C50: 410140f9  ldr x1, [x10]
0x06277C54: 290100b4  cbz x9, #0x6277c78
0x06277C58: 0a5940f9  ldr x10, [x8, #0xb0]
0x06277C5C: 4a210091  add x10, x10, #8
0x06277C60: 4b815ff8  ldur x11, [x10, #-8]
0x06277C64: 7f0101eb  cmp x11, x1
0x06277C68: 00010054  b.eq #0x6277c88
0x06277C6C: 290500f1  subs x9, x9, #1
0x06277C70: 4a410091  add x10, x10, #0x10
0x06277C74: 61ffff54  b.ne #0x6277c60
0x06277C78: 22038052  movz w2, #0x19
0x06277C7C: e00313aa  mov x0, x19
0x06277C80: a47b3b97  bl #0x3156b10
0x06277C84: 05000014  b #0x6277c98
0x06277C88: 490140b9  ldr w9, [x10]
0x06277C8C: 29650011  add w9, w9, #0x19
0x06277C90: 08d1298b  add x8, x8, w9, sxtw #4
0x06277C94: 00e10491  add x0, x8, #0x138
0x06277C98: 030840a9  ldp x3, x2, [x0]
0x06277C9C: e00313aa  mov x0, x19
0x06277CA0: e10314aa  mov x1, x20
0x06277CA4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06277CA8: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06277CAC: 60001fd6  br x3
0x06277CB0: ff233c97  bl #0x3180cac

