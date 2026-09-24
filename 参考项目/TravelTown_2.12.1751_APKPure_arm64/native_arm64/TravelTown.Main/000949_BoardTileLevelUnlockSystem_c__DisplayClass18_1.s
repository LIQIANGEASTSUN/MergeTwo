; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 949 .BoardTileLevelUnlockSystem.<>c__DisplayClass18_1
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x678ABFC | public void .ctor() { }
; bytes=8 sha256=c11d496a22eb2a116693336315728709d2c886b16cc12064716b448623ea87cb status=arm64_complete_bound indexed_start=True
0x0678ABFC: e1031faa  mov x1, xzr
0x0678AC00: 7f3ebd17  b #0x56da5fc

; RVA 0x678AE10 | internal void <TryUnlockItems>g__ShakingCompleted|1(bool shaking) { }
; bytes=440 sha256=a1f50b41a980bf30159b66bc97be5f8d0982ceff83080bcc1a043f42b7eb14d8 status=arm64_complete_bound indexed_start=True
0x0678AE10: fe0f1df8  str x30, [sp, #-0x30]!
0x0678AE14: f65701a9  stp x22, x21, [sp, #0x10]
0x0678AE18: f44f02a9  stp x20, x19, [sp, #0x20]
0x0678AE1C: f4ac00d0  adrp x20, #0x7d28000
0x0678AE20: 88f67439  ldrb w8, [x20, #0xd3d]
0x0678AE24: f30300aa  mov x19, x0
0x0678AE28: a8020037  tbnz w8, #0, #0x678ae7c
0x0678AE2C: 207700b0  adrp x0, #0x766f000
0x0678AE30: 008c41f9  ldr x0, [x0, #0x318]
0x0678AE34: f9d62797  bl #0x3180a18
0x0678AE38: 807700f0  adrp x0, #0x767d000
0x0678AE3C: 005844f9  ldr x0, [x0, #0x8b0]
0x0678AE40: f6d62797  bl #0x3180a18
0x0678AE44: 607a00b0  adrp x0, #0x76d7000
0x0678AE48: 00dc42f9  ldr x0, [x0, #0x5b8]
0x0678AE4C: f3d62797  bl #0x3180a18
0x0678AE50: a07b00d0  adrp x0, #0x7700000
0x0678AE54: 004c45f9  ldr x0, [x0, #0xa98]
0x0678AE58: f0d62797  bl #0x3180a18
0x0678AE5C: a07b00d0  adrp x0, #0x7700000
0x0678AE60: 005045f9  ldr x0, [x0, #0xaa0]
0x0678AE64: edd62797  bl #0x3180a18
0x0678AE68: 207c00d0  adrp x0, #0x7710000
0x0678AE6C: 006441f9  ldr x0, [x0, #0x2c8]
0x0678AE70: ead62797  bl #0x3180a18
0x0678AE74: 28008052  movz w8, #0x1
0x0678AE78: 88f63439  strb w8, [x20, #0xd3d]
0x0678AE7C: 681240f9  ldr x8, [x19, #0x20]
0x0678AE80: 280a00b4  cbz x8, #0x678afc4
0x0678AE84: 080940f9  ldr x8, [x8, #0x10]
0x0678AE88: e80900b4  cbz x8, #0x678afc4
0x0678AE8C: 600a40f9  ldr x0, [x19, #0x10]
0x0678AE90: a00900b4  cbz x0, #0x678afc4
0x0678AE94: 697a00b0  adrp x9, #0x76d7000
0x0678AE98: 29dd42f9  ldr x9, [x9, #0x5b8]
0x0678AE9C: 141540f9  ldr x20, [x8, #0x28]
0x0678AEA0: 210140f9  ldr x1, [x9]
0x0678AEA4: 5e8a5197  bl #0x3bed81c
0x0678AEA8: e00800b4  cbz x0, #0x678afc4
0x0678AEAC: a87b00d0  adrp x8, #0x7700000
0x0678AEB0: 085145f9  ldr x8, [x8, #0xaa0]
0x0678AEB4: 161840f9  ldr x22, [x0, #0x30]
0x0678AEB8: 000140f9  ldr x0, [x8]
0x0678AEBC: 79d72797  bl #0x3180ca0
0x0678AEC0: e1031f2a  mov w1, wzr
0x0678AEC4: e20316aa  mov x2, x22
0x0678AEC8: e3031faa  mov x3, xzr
0x0678AECC: f50300aa  mov x21, x0
0x0678AED0: 6f87ff97  bl #0x676cc8c
0x0678AED4: 940700b4  cbz x20, #0x678afc4
0x0678AED8: a87b00d0  adrp x8, #0x7700000
0x0678AEDC: 084d45f9  ldr x8, [x8, #0xa98]
0x0678AEE0: e00314aa  mov x0, x20
0x0678AEE4: e10315aa  mov x1, x21
0x0678AEE8: 020140f9  ldr x2, [x8]
0x0678AEEC: a0675897  bl #0x3da4d6c
0x0678AEF0: 681240f9  ldr x8, [x19, #0x20]
0x0678AEF4: 880600b4  cbz x8, #0x678afc4
0x0678AEF8: 080940f9  ldr x8, [x8, #0x10]
0x0678AEFC: 480600b4  cbz x8, #0x678afc4
0x0678AF00: 084540f9  ldr x8, [x8, #0x88]
0x0678AF04: 080600b4  cbz x8, #0x678afc4
0x0678AF08: 1fa50039  strb wzr, [x8, #0x29]
0x0678AF0C: 680e40f9  ldr x8, [x19, #0x18]
0x0678AF10: a80500b4  cbz x8, #0x678afc4
0x0678AF14: 297700b0  adrp x9, #0x766f000
0x0678AF18: 298d41f9  ldr x9, [x9, #0x318]
0x0678AF1C: 357c00d0  adrp x21, #0x7710000
0x0678AF20: 146940f9  ldr x20, [x8, #0xd0]
0x0678AF24: 200140f9  ldr x0, [x9]
0x0678AF28: b56641f9  ldr x21, [x21, #0x2c8]
0x0678AF2C: 5dd72797  bl #0x3180ca0
0x0678AF30: a20240f9  ldr x2, [x21]
0x0678AF34: e10313aa  mov x1, x19
0x0678AF38: e3031faa  mov x3, xzr
0x0678AF3C: f50300aa  mov x21, x0
0x0678AF40: 774cae97  bl #0x531e11c
0x0678AF44: 140400b4  cbz x20, #0x678afc4
0x0678AF48: 887700f0  adrp x8, #0x767d000
0x0678AF4C: 085944f9  ldr x8, [x8, #0x8b0]
0x0678AF50: e00314aa  mov x0, x20
0x0678AF54: e10315aa  mov x1, x21
0x0678AF58: 020140f9  ldr x2, [x8]
0x0678AF5C: b40b9297  bl #0x4c0de2c
0x0678AF60: 681240f9  ldr x8, [x19, #0x20]
0x0678AF64: 080300b4  cbz x8, #0x678afc4
0x0678AF68: 091940b9  ldr w9, [x8, #0x18]
0x0678AF6C: 29050071  subs w9, w9, #1
0x0678AF70: 091900b9  str w9, [x8, #0x18]
0x0678AF74: 01020054  b.ne #0x678afb4
0x0678AF78: 090940f9  ldr x9, [x8, #0x10]
0x0678AF7C: 490200b4  cbz x9, #0x678afc4
0x0678AF80: 294940f9  ldr x9, [x9, #0x90]
0x0678AF84: e90000b4  cbz x9, #0x678afa0
0x0678AF88: 280d40f9  ldr x8, [x9, #0x18]
0x0678AF8C: 202140f9  ldr x0, [x9, #0x40]
0x0678AF90: 211540f9  ldr x1, [x9, #0x28]
0x0678AF94: 00013fd6  blr x8
0x0678AF98: 681240f9  ldr x8, [x19, #0x20]
0x0678AF9C: 480100b4  cbz x8, #0x678afc4
0x0678AFA0: 080940f9  ldr x8, [x8, #0x10]
0x0678AFA4: 080100b4  cbz x8, #0x678afc4
0x0678AFA8: 084540f9  ldr x8, [x8, #0x88]
0x0678AFAC: c80000b4  cbz x8, #0x678afc4
0x0678AFB0: 1fa50039  strb wzr, [x8, #0x29]
0x0678AFB4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0678AFB8: f65741a9  ldp x22, x21, [sp, #0x10]
0x0678AFBC: fe0743f8  ldr x30, [sp], #0x30
0x0678AFC0: c0035fd6  ret
0x0678AFC4: 3ad72797  bl #0x3180cac

; RVA 0x678AFC8 | internal void <TryUnlockItems>g__UnlockingCompleted|2() { }
; bytes=120 sha256=6776f58f9e54101ca583ed4a9451c16b76d1a5a16a9a4a84785d3cc408e0d439 status=arm64_complete_bound indexed_start=True
0x0678AFC8: fe0f1ef8  str x30, [sp, #-0x20]!
0x0678AFCC: f44f01a9  stp x20, x19, [sp, #0x10]
0x0678AFD0: f4ac00d0  adrp x20, #0x7d28000
0x0678AFD4: 88fa7439  ldrb w8, [x20, #0xd3e]
0x0678AFD8: f30300aa  mov x19, x0
0x0678AFDC: c8000037  tbnz w8, #0, #0x678aff4
0x0678AFE0: 207c00d0  adrp x0, #0x7710000
0x0678AFE4: 007c41f9  ldr x0, [x0, #0x2f8]
0x0678AFE8: 8cd62797  bl #0x3180a18
0x0678AFEC: 28008052  movz w8, #0x1
0x0678AFF0: 88fa3439  strb w8, [x20, #0xd3e]
0x0678AFF4: 681240f9  ldr x8, [x19, #0x20]
0x0678AFF8: 280200b4  cbz x8, #0x678b03c
0x0678AFFC: 080940f9  ldr x8, [x8, #0x10]
0x0678B000: e80100b4  cbz x8, #0x678b03c
0x0678B004: 001540f9  ldr x0, [x8, #0x28]
0x0678B008: a00100b4  cbz x0, #0x678b03c
0x0678B00C: 287c00b0  adrp x8, #0x7710000
0x0678B010: 087d41f9  ldr x8, [x8, #0x2f8]
0x0678B014: 010140f9  ldr x1, [x8]
0x0678B018: 36675897  bl #0x3da4cf0
0x0678B01C: 680e40f9  ldr x8, [x19, #0x18]
0x0678B020: e80000b4  cbz x8, #0x678b03c
0x0678B024: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0678B028: 00c10491  add x0, x8, #0x130
0x0678B02C: 1f9900f9  str xzr, [x8, #0x130]
0x0678B030: e1031faa  mov x1, xzr
0x0678B034: fe0742f8  ldr x30, [sp], #0x20
0x0678B038: 63d62717  b #0x31809c4
0x0678B03C: 1cd72797  bl #0x3180cac

