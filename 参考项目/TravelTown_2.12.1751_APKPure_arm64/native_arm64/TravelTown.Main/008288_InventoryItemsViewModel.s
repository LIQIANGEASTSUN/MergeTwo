; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 8288 Merger.Game.ViewModel.InventoryItemsViewModel
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x662AC88 | public int get_NumSlots() { }
; bytes=164 sha256=62f5f820f80a0abed8bb08a8d757099a5a2ef4ff0cd8a7d0c3ab743654ec2589 status=arm64_complete_bound indexed_start=True
0x0662AC88: fe0f1ef8  str x30, [sp, #-0x20]!
0x0662AC8C: f44f01a9  stp x20, x19, [sp, #0x10]
0x0662AC90: f4b700b0  adrp x20, #0x7d27000
0x0662AC94: 88b27839  ldrb w8, [x20, #0xe2c]
0x0662AC98: f30300aa  mov x19, x0
0x0662AC9C: c8000037  tbnz w8, #0, #0x662acb4
0x0662ACA0: e0860090  adrp x0, #0x7706000
0x0662ACA4: 004c44f9  ldr x0, [x0, #0x898]
0x0662ACA8: 5c572d97  bl #0x3180a18
0x0662ACAC: 28008052  movz w8, #0x1
0x0662ACB0: 88b23839  strb w8, [x20, #0xe2c]
0x0662ACB4: 736a40f9  ldr x19, [x19, #0xd0]
0x0662ACB8: 930300b4  cbz x19, #0x662ad28
0x0662ACBC: ea860090  adrp x10, #0x7706000
0x0662ACC0: 680240f9  ldr x8, [x19]
0x0662ACC4: 4a4d44f9  ldr x10, [x10, #0x898]
0x0662ACC8: 095d4279  ldrh w9, [x8, #0x12e]
0x0662ACCC: 410140f9  ldr x1, [x10]
0x0662ACD0: 290100b4  cbz x9, #0x662acf4
0x0662ACD4: 0a5940f9  ldr x10, [x8, #0xb0]
0x0662ACD8: 4a210091  add x10, x10, #8
0x0662ACDC: 4b815ff8  ldur x11, [x10, #-8]
0x0662ACE0: 7f0101eb  cmp x11, x1
0x0662ACE4: 00010054  b.eq #0x662ad04
0x0662ACE8: 290500f1  subs x9, x9, #1
0x0662ACEC: 4a410091  add x10, x10, #0x10
0x0662ACF0: 61ffff54  b.ne #0x662acdc
0x0662ACF4: 42008052  movz w2, #0x2
0x0662ACF8: e00313aa  mov x0, x19
0x0662ACFC: 85af2c97  bl #0x3156b10
0x0662AD00: 05000014  b #0x662ad14
0x0662AD04: 490140b9  ldr w9, [x10]
0x0662AD08: 29090011  add w9, w9, #2
0x0662AD0C: 08d1298b  add x8, x8, w9, sxtw #4
0x0662AD10: 00e10491  add x0, x8, #0x138
0x0662AD14: 020440a9  ldp x2, x1, [x0]
0x0662AD18: e00313aa  mov x0, x19
0x0662AD1C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0662AD20: fe0742f8  ldr x30, [sp], #0x20
0x0662AD24: 40001fd6  br x2
0x0662AD28: e1572d97  bl #0x3180cac

; RVA 0x662AD2C | public int get_NextSlotPrice() { }
; bytes=164 sha256=110d4659117703564b63ff08edd78a9a8e4ba637aae5f2ea9c6faa8a12d4d712 status=arm64_complete_bound indexed_start=True
0x0662AD2C: fe0f1ef8  str x30, [sp, #-0x20]!
0x0662AD30: f44f01a9  stp x20, x19, [sp, #0x10]
0x0662AD34: f4b700b0  adrp x20, #0x7d27000
0x0662AD38: 88b67839  ldrb w8, [x20, #0xe2d]
0x0662AD3C: f30300aa  mov x19, x0
0x0662AD40: c8000037  tbnz w8, #0, #0x662ad58
0x0662AD44: e0860090  adrp x0, #0x7706000
0x0662AD48: 004c44f9  ldr x0, [x0, #0x898]
0x0662AD4C: 33572d97  bl #0x3180a18
0x0662AD50: 28008052  movz w8, #0x1
0x0662AD54: 88b63839  strb w8, [x20, #0xe2d]
0x0662AD58: 736a40f9  ldr x19, [x19, #0xd0]
0x0662AD5C: 930300b4  cbz x19, #0x662adcc
0x0662AD60: ea860090  adrp x10, #0x7706000
0x0662AD64: 680240f9  ldr x8, [x19]
0x0662AD68: 4a4d44f9  ldr x10, [x10, #0x898]
0x0662AD6C: 095d4279  ldrh w9, [x8, #0x12e]
0x0662AD70: 410140f9  ldr x1, [x10]
0x0662AD74: 290100b4  cbz x9, #0x662ad98
0x0662AD78: 0a5940f9  ldr x10, [x8, #0xb0]
0x0662AD7C: 4a210091  add x10, x10, #8
0x0662AD80: 4b815ff8  ldur x11, [x10, #-8]
0x0662AD84: 7f0101eb  cmp x11, x1
0x0662AD88: 00010054  b.eq #0x662ada8
0x0662AD8C: 290500f1  subs x9, x9, #1
0x0662AD90: 4a410091  add x10, x10, #0x10
0x0662AD94: 61ffff54  b.ne #0x662ad80
0x0662AD98: 82008052  movz w2, #0x4
0x0662AD9C: e00313aa  mov x0, x19
0x0662ADA0: 5caf2c97  bl #0x3156b10
0x0662ADA4: 05000014  b #0x662adb8
0x0662ADA8: 490140b9  ldr w9, [x10]
0x0662ADAC: 29110011  add w9, w9, #4
0x0662ADB0: 08d1298b  add x8, x8, w9, sxtw #4
0x0662ADB4: 00e10491  add x0, x8, #0x138
0x0662ADB8: 020440a9  ldp x2, x1, [x0]
0x0662ADBC: e00313aa  mov x0, x19
0x0662ADC0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0662ADC4: fe0742f8  ldr x30, [sp], #0x20
0x0662ADC8: 40001fd6  br x2
0x0662ADCC: b8572d97  bl #0x3180cac

; RVA 0x662ADD0 | public int get_MaxSlots() { }
; bytes=164 sha256=1d0d466d5d4f70435f88e59923ed33b20509994253d382e8122157e2e486d08e status=arm64_complete_bound indexed_start=True
0x0662ADD0: fe0f1ef8  str x30, [sp, #-0x20]!
0x0662ADD4: f44f01a9  stp x20, x19, [sp, #0x10]
0x0662ADD8: f4b700b0  adrp x20, #0x7d27000
0x0662ADDC: 88ba7839  ldrb w8, [x20, #0xe2e]
0x0662ADE0: f30300aa  mov x19, x0
0x0662ADE4: c8000037  tbnz w8, #0, #0x662adfc
0x0662ADE8: e0860090  adrp x0, #0x7706000
0x0662ADEC: 004c44f9  ldr x0, [x0, #0x898]
0x0662ADF0: 0a572d97  bl #0x3180a18
0x0662ADF4: 28008052  movz w8, #0x1
0x0662ADF8: 88ba3839  strb w8, [x20, #0xe2e]
0x0662ADFC: 736a40f9  ldr x19, [x19, #0xd0]
0x0662AE00: 930300b4  cbz x19, #0x662ae70
0x0662AE04: ea860090  adrp x10, #0x7706000
0x0662AE08: 680240f9  ldr x8, [x19]
0x0662AE0C: 4a4d44f9  ldr x10, [x10, #0x898]
0x0662AE10: 095d4279  ldrh w9, [x8, #0x12e]
0x0662AE14: 410140f9  ldr x1, [x10]
0x0662AE18: 290100b4  cbz x9, #0x662ae3c
0x0662AE1C: 0a5940f9  ldr x10, [x8, #0xb0]
0x0662AE20: 4a210091  add x10, x10, #8
0x0662AE24: 4b815ff8  ldur x11, [x10, #-8]
0x0662AE28: 7f0101eb  cmp x11, x1
0x0662AE2C: 00010054  b.eq #0x662ae4c
0x0662AE30: 290500f1  subs x9, x9, #1
0x0662AE34: 4a410091  add x10, x10, #0x10
0x0662AE38: 61ffff54  b.ne #0x662ae24
0x0662AE3C: a2008052  movz w2, #0x5
0x0662AE40: e00313aa  mov x0, x19
0x0662AE44: 33af2c97  bl #0x3156b10
0x0662AE48: 05000014  b #0x662ae5c
0x0662AE4C: 490140b9  ldr w9, [x10]
0x0662AE50: 29150011  add w9, w9, #5
0x0662AE54: 08d1298b  add x8, x8, w9, sxtw #4
0x0662AE58: 00e10491  add x0, x8, #0x138
0x0662AE5C: 020440a9  ldp x2, x1, [x0]
0x0662AE60: e00313aa  mov x0, x19
0x0662AE64: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0662AE68: fe0742f8  ldr x30, [sp], #0x20
0x0662AE6C: 40001fd6  br x2
0x0662AE70: 8f572d97  bl #0x3180cac

; RVA 0x662AE74 | public PlayerResourceEnum get_SlotPurchaseResource() { }
; bytes=160 sha256=df9e7ccf7d8e758c053e6504a9a2d3108d0c4b4c8d984f31747d219f4f952391 status=arm64_complete_bound indexed_start=True
0x0662AE74: fe0f1ef8  str x30, [sp, #-0x20]!
0x0662AE78: f44f01a9  stp x20, x19, [sp, #0x10]
0x0662AE7C: f4b700b0  adrp x20, #0x7d27000
0x0662AE80: 88be7839  ldrb w8, [x20, #0xe2f]
0x0662AE84: f30300aa  mov x19, x0
0x0662AE88: c8000037  tbnz w8, #0, #0x662aea0
0x0662AE8C: e0860090  adrp x0, #0x7706000
0x0662AE90: 004c44f9  ldr x0, [x0, #0x898]
0x0662AE94: e1562d97  bl #0x3180a18
0x0662AE98: 28008052  movz w8, #0x1
0x0662AE9C: 88be3839  strb w8, [x20, #0xe2f]
0x0662AEA0: 736a40f9  ldr x19, [x19, #0xd0]
0x0662AEA4: 730300b4  cbz x19, #0x662af10
0x0662AEA8: ea860090  adrp x10, #0x7706000
0x0662AEAC: 680240f9  ldr x8, [x19]
0x0662AEB0: 4a4d44f9  ldr x10, [x10, #0x898]
0x0662AEB4: 095d4279  ldrh w9, [x8, #0x12e]
0x0662AEB8: 410140f9  ldr x1, [x10]
0x0662AEBC: 290100b4  cbz x9, #0x662aee0
0x0662AEC0: 0a5940f9  ldr x10, [x8, #0xb0]
0x0662AEC4: 4a210091  add x10, x10, #8
0x0662AEC8: 4b815ff8  ldur x11, [x10, #-8]
0x0662AECC: 7f0101eb  cmp x11, x1
0x0662AED0: 00010054  b.eq #0x662aef0
0x0662AED4: 290500f1  subs x9, x9, #1
0x0662AED8: 4a410091  add x10, x10, #0x10
0x0662AEDC: 61ffff54  b.ne #0x662aec8
0x0662AEE0: e00313aa  mov x0, x19
0x0662AEE4: e2031f2a  mov w2, wzr
0x0662AEE8: 0aaf2c97  bl #0x3156b10
0x0662AEEC: 04000014  b #0x662aefc
0x0662AEF0: 490180b9  ldrsw x9, [x10]
0x0662AEF4: 0811098b  add x8, x8, x9, lsl #4
0x0662AEF8: 00e10491  add x0, x8, #0x138
0x0662AEFC: 020440a9  ldp x2, x1, [x0]
0x0662AF00: e00313aa  mov x0, x19
0x0662AF04: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0662AF08: fe0742f8  ldr x30, [sp], #0x20
0x0662AF0C: 40001fd6  br x2
0x0662AF10: 67572d97  bl #0x3180cac

; RVA 0x662AF14 | private InventorySystem get__inventorySystem() { }
; bytes=72 sha256=b4d3652cdea73d5a9df03a797987f4446724d6be9a40282b43247115d10bc440 status=arm64_complete_bound indexed_start=True
0x0662AF14: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0662AF18: f44f01a9  stp x20, x19, [sp, #0x10]
0x0662AF1C: f4b700b0  adrp x20, #0x7d27000
0x0662AF20: f5860090  adrp x21, #0x7706000
0x0662AF24: 88c27839  ldrb w8, [x20, #0xe30]
0x0662AF28: b5c644f9  ldr x21, [x21, #0x988]
0x0662AF2C: f30300aa  mov x19, x0
0x0662AF30: c8000037  tbnz w8, #0, #0x662af48
0x0662AF34: e0860090  adrp x0, #0x7706000
0x0662AF38: 00c444f9  ldr x0, [x0, #0x988]
0x0662AF3C: b7562d97  bl #0x3180a18
0x0662AF40: 28008052  movz w8, #0x1
0x0662AF44: 88c23839  strb w8, [x20, #0xe30]
0x0662AF48: a10240f9  ldr x1, [x21]
0x0662AF4C: e00313aa  mov x0, x19
0x0662AF50: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0662AF54: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0662AF58: e2785a17  b #0x3cc92e0

; RVA 0x662AF5C | private BoardSystem get__boardSystem() { }
; bytes=72 sha256=c6391e864d732f8b5992fad914a03fa4e9211b5fdc644e84cbab3e269b002d25 status=arm64_complete_bound indexed_start=True
0x0662AF5C: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0662AF60: f44f01a9  stp x20, x19, [sp, #0x10]
0x0662AF64: f4b700b0  adrp x20, #0x7d27000
0x0662AF68: f5860090  adrp x21, #0x7706000
0x0662AF6C: 88c67839  ldrb w8, [x20, #0xe31]
0x0662AF70: b54a44f9  ldr x21, [x21, #0x890]
0x0662AF74: f30300aa  mov x19, x0
0x0662AF78: c8000037  tbnz w8, #0, #0x662af90
0x0662AF7C: e0860090  adrp x0, #0x7706000
0x0662AF80: 004844f9  ldr x0, [x0, #0x890]
0x0662AF84: a5562d97  bl #0x3180a18
0x0662AF88: 28008052  movz w8, #0x1
0x0662AF8C: 88c63839  strb w8, [x20, #0xe31]
0x0662AF90: a10240f9  ldr x1, [x21]
0x0662AF94: e00313aa  mov x0, x19
0x0662AF98: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0662AF9C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0662AFA0: d0785a17  b #0x3cc92e0

; RVA 0x662AFA4 | public void TryRemoveItem(int slotIndex) { }
; bytes=148 sha256=7db4f8f77deec3004f964740a917e4827ec7c0827624588bf7754486bf13a2fd status=arm64_complete_bound indexed_start=True
0x0662AFA4: fe0f1df8  str x30, [sp, #-0x30]!
0x0662AFA8: f65701a9  stp x22, x21, [sp, #0x10]
0x0662AFAC: f44f02a9  stp x20, x19, [sp, #0x20]
0x0662AFB0: f6b700b0  adrp x22, #0x7d27000
0x0662AFB4: f5860090  adrp x21, #0x7706000
0x0662AFB8: c8ca7839  ldrb w8, [x22, #0xe32]
0x0662AFBC: b5ca44f9  ldr x21, [x21, #0x990]
0x0662AFC0: f303012a  mov w19, w1
0x0662AFC4: f40300aa  mov x20, x0
0x0662AFC8: 28010037  tbnz w8, #0, #0x662afec
0x0662AFCC: e0860090  adrp x0, #0x7706000
0x0662AFD0: 00cc44f9  ldr x0, [x0, #0x998]
0x0662AFD4: 91562d97  bl #0x3180a18
0x0662AFD8: e0860090  adrp x0, #0x7706000
0x0662AFDC: 00c844f9  ldr x0, [x0, #0x990]
0x0662AFE0: 8e562d97  bl #0x3180a18
0x0662AFE4: 28008052  movz w8, #0x1
0x0662AFE8: c8ca3839  strb w8, [x22, #0xe32]
0x0662AFEC: a00240f9  ldr x0, [x21]
0x0662AFF0: 941240f9  ldr x20, [x20, #0x20]
0x0662AFF4: 2b572d97  bl #0x3180ca0
0x0662AFF8: e103132a  mov w1, w19
0x0662AFFC: e2031f2a  mov w2, wzr
0x0662B000: e3031faa  mov x3, xzr
0x0662B004: f50300aa  mov x21, x0
0x0662B008: 4024e797  bl #0x5ff4108
0x0662B00C: 540100b4  cbz x20, #0x662b034
0x0662B010: c88600f0  adrp x8, #0x7706000
0x0662B014: 08cd44f9  ldr x8, [x8, #0x998]
0x0662B018: e00314aa  mov x0, x20
0x0662B01C: e10315aa  mov x1, x21
0x0662B020: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0662B024: 020140f9  ldr x2, [x8]
0x0662B028: f65741a9  ldp x22, x21, [sp, #0x10]
0x0662B02C: fe0743f8  ldr x30, [sp], #0x30
0x0662B030: 4fe75d17  b #0x3da4d6c
0x0662B034: 1e572d97  bl #0x3180cac

; RVA 0x662B038 | public IMergeItem GetItem(int slotIndex) { }
; bytes=176 sha256=d4c40e3314032c460b221188d8a340246763cfbb0ece378edc9f022a6ce57da9 status=arm64_complete_bound indexed_start=True
0x0662B038: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0662B03C: f44f01a9  stp x20, x19, [sp, #0x10]
0x0662B040: f5b70090  adrp x21, #0x7d27000
0x0662B044: a8ce7839  ldrb w8, [x21, #0xe33]
0x0662B048: f303012a  mov w19, w1
0x0662B04C: f40300aa  mov x20, x0
0x0662B050: c8000037  tbnz w8, #0, #0x662b068
0x0662B054: c08600f0  adrp x0, #0x7706000
0x0662B058: 004c44f9  ldr x0, [x0, #0x898]
0x0662B05C: 6f562d97  bl #0x3180a18
0x0662B060: 28008052  movz w8, #0x1
0x0662B064: a8ce3839  strb w8, [x21, #0xe33]
0x0662B068: 946a40f9  ldr x20, [x20, #0xd0]
0x0662B06C: d40300b4  cbz x20, #0x662b0e4
0x0662B070: ca8600f0  adrp x10, #0x7706000
0x0662B074: 880240f9  ldr x8, [x20]
0x0662B078: 4a4d44f9  ldr x10, [x10, #0x898]
0x0662B07C: 095d4279  ldrh w9, [x8, #0x12e]
0x0662B080: 410140f9  ldr x1, [x10]
0x0662B084: 290100b4  cbz x9, #0x662b0a8
0x0662B088: 0a5940f9  ldr x10, [x8, #0xb0]
0x0662B08C: 4a210091  add x10, x10, #8
0x0662B090: 4b815ff8  ldur x11, [x10, #-8]
0x0662B094: 7f0101eb  cmp x11, x1
0x0662B098: 00010054  b.eq #0x662b0b8
0x0662B09C: 290500f1  subs x9, x9, #1
0x0662B0A0: 4a410091  add x10, x10, #0x10
0x0662B0A4: 61ffff54  b.ne #0x662b090
0x0662B0A8: c2008052  movz w2, #0x6
0x0662B0AC: e00314aa  mov x0, x20
0x0662B0B0: 98ae2c97  bl #0x3156b10
0x0662B0B4: 05000014  b #0x662b0c8
0x0662B0B8: 490140b9  ldr w9, [x10]
0x0662B0BC: 29190011  add w9, w9, #6
0x0662B0C0: 08d1298b  add x8, x8, w9, sxtw #4
0x0662B0C4: 00e10491  add x0, x8, #0x138
0x0662B0C8: 040c40a9  ldp x4, x3, [x0]
0x0662B0CC: e00314aa  mov x0, x20
0x0662B0D0: e103132a  mov w1, w19
0x0662B0D4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0662B0D8: e2031f2a  mov w2, wzr
0x0662B0DC: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0662B0E0: 80001fd6  br x4
0x0662B0E4: f2562d97  bl #0x3180cac

; RVA 0x662B0E8 | public string GetItemUUID(int slotIndex) { }
; bytes=176 sha256=bc2bc43d8769d9a2c25965504f912897168d29020c99bd81aba6cdf3bed7680f status=arm64_complete_bound indexed_start=True
0x0662B0E8: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0662B0EC: f44f01a9  stp x20, x19, [sp, #0x10]
0x0662B0F0: f5b70090  adrp x21, #0x7d27000
0x0662B0F4: a8d27839  ldrb w8, [x21, #0xe34]
0x0662B0F8: f303012a  mov w19, w1
0x0662B0FC: f40300aa  mov x20, x0
0x0662B100: c8000037  tbnz w8, #0, #0x662b118
0x0662B104: c08600f0  adrp x0, #0x7706000
0x0662B108: 004c44f9  ldr x0, [x0, #0x898]
0x0662B10C: 43562d97  bl #0x3180a18
0x0662B110: 28008052  movz w8, #0x1
0x0662B114: a8d23839  strb w8, [x21, #0xe34]
0x0662B118: 946a40f9  ldr x20, [x20, #0xd0]
0x0662B11C: d40300b4  cbz x20, #0x662b194
0x0662B120: ca8600f0  adrp x10, #0x7706000
0x0662B124: 880240f9  ldr x8, [x20]
0x0662B128: 4a4d44f9  ldr x10, [x10, #0x898]
0x0662B12C: 095d4279  ldrh w9, [x8, #0x12e]
0x0662B130: 410140f9  ldr x1, [x10]
0x0662B134: 290100b4  cbz x9, #0x662b158
0x0662B138: 0a5940f9  ldr x10, [x8, #0xb0]
0x0662B13C: 4a210091  add x10, x10, #8
0x0662B140: 4b815ff8  ldur x11, [x10, #-8]
0x0662B144: 7f0101eb  cmp x11, x1
0x0662B148: 00010054  b.eq #0x662b168
0x0662B14C: 290500f1  subs x9, x9, #1
0x0662B150: 4a410091  add x10, x10, #0x10
0x0662B154: 61ffff54  b.ne #0x662b140
0x0662B158: e2008052  movz w2, #0x7
0x0662B15C: e00314aa  mov x0, x20
0x0662B160: 6cae2c97  bl #0x3156b10
0x0662B164: 05000014  b #0x662b178
0x0662B168: 490140b9  ldr w9, [x10]
0x0662B16C: 291d0011  add w9, w9, #7
0x0662B170: 08d1298b  add x8, x8, w9, sxtw #4
0x0662B174: 00e10491  add x0, x8, #0x138
0x0662B178: 040c40a9  ldp x4, x3, [x0]
0x0662B17C: e00314aa  mov x0, x20
0x0662B180: e103132a  mov w1, w19
0x0662B184: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0662B188: e2031f2a  mov w2, wzr
0x0662B18C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0662B190: 80001fd6  br x4
0x0662B194: c6562d97  bl #0x3180cac

; RVA 0x662B198 | public IPromise TryBuyInventorySlot() { }
; bytes=1400 sha256=2e461288f6d4a7c8b020d9634d3226e2e1449adf0af7264ff6155f7369240f8d status=arm64_complete_bound indexed_start=True
0x0662B198: fe0f1cf8  str x30, [sp, #-0x40]!
0x0662B19C: f85f01a9  stp x24, x23, [sp, #0x10]
0x0662B1A0: f65702a9  stp x22, x21, [sp, #0x20]
0x0662B1A4: f44f03a9  stp x20, x19, [sp, #0x30]
0x0662B1A8: f4b70090  adrp x20, #0x7d27000
0x0662B1AC: 88d67839  ldrb w8, [x20, #0xe35]
0x0662B1B0: f30300aa  mov x19, x0
0x0662B1B4: 48050037  tbnz w8, #0, #0x662b25c
0x0662B1B8: 20820090  adrp x0, #0x766f000
0x0662B1BC: 002041f9  ldr x0, [x0, #0x240]
0x0662B1C0: 16562d97  bl #0x3180a18
0x0662B1C4: 008100f0  adrp x0, #0x764e000
0x0662B1C8: 00ac43f9  ldr x0, [x0, #0x758]
0x0662B1CC: 13562d97  bl #0x3180a18
0x0662B1D0: 008100f0  adrp x0, #0x764e000
0x0662B1D4: 006c42f9  ldr x0, [x0, #0x4d8]
0x0662B1D8: 10562d97  bl #0x3180a18
0x0662B1DC: 20820090  adrp x0, #0x766f000
0x0662B1E0: 002441f9  ldr x0, [x0, #0x248]
0x0662B1E4: 0d562d97  bl #0x3180a18
0x0662B1E8: c08600f0  adrp x0, #0x7706000
0x0662B1EC: 004c44f9  ldr x0, [x0, #0x898]
0x0662B1F0: 0a562d97  bl #0x3180a18
0x0662B1F4: 208200d0  adrp x0, #0x7671000
0x0662B1F8: 006047f9  ldr x0, [x0, #0xec0]
0x0662B1FC: 07562d97  bl #0x3180a18
0x0662B200: 608200d0  adrp x0, #0x7679000
0x0662B204: 001044f9  ldr x0, [x0, #0x820]
0x0662B208: 04562d97  bl #0x3180a18
0x0662B20C: a08600b0  adrp x0, #0x7700000
0x0662B210: 004846f9  ldr x0, [x0, #0xc90]
0x0662B214: 01562d97  bl #0x3180a18
0x0662B218: c08600f0  adrp x0, #0x7706000
0x0662B21C: 00d044f9  ldr x0, [x0, #0x9a0]
0x0662B220: fe552d97  bl #0x3180a18
0x0662B224: c08600f0  adrp x0, #0x7706000
0x0662B228: 00d444f9  ldr x0, [x0, #0x9a8]
0x0662B22C: fb552d97  bl #0x3180a18
0x0662B230: c08600f0  adrp x0, #0x7706000
0x0662B234: 00d844f9  ldr x0, [x0, #0x9b0]
0x0662B238: f8552d97  bl #0x3180a18
0x0662B23C: 20820090  adrp x0, #0x766f000
0x0662B240: 00a445f9  ldr x0, [x0, #0xb48]
0x0662B244: f5552d97  bl #0x3180a18
0x0662B248: 208200d0  adrp x0, #0x7671000
0x0662B24C: 00a047f9  ldr x0, [x0, #0xf40]
0x0662B250: f2552d97  bl #0x3180a18
0x0662B254: 28008052  movz w8, #0x1
0x0662B258: 88d63839  strb w8, [x20, #0xe35]
0x0662B25C: 746a40f9  ldr x20, [x19, #0xd0]
0x0662B260: 142500b4  cbz x20, #0x662b700
0x0662B264: d78600f0  adrp x23, #0x7706000
0x0662B268: 880240f9  ldr x8, [x20]
0x0662B26C: f74e44f9  ldr x23, [x23, #0x898]
0x0662B270: 095d4279  ldrh w9, [x8, #0x12e]
0x0662B274: e10240f9  ldr x1, [x23]
0x0662B278: 290100b4  cbz x9, #0x662b29c
0x0662B27C: 0a5940f9  ldr x10, [x8, #0xb0]
0x0662B280: 4a210091  add x10, x10, #8
0x0662B284: 4b815ff8  ldur x11, [x10, #-8]
0x0662B288: 7f0101eb  cmp x11, x1
0x0662B28C: 00010054  b.eq #0x662b2ac
0x0662B290: 290500f1  subs x9, x9, #1
0x0662B294: 4a410091  add x10, x10, #0x10
0x0662B298: 61ffff54  b.ne #0x662b284
0x0662B29C: e00314aa  mov x0, x20
0x0662B2A0: e2031f2a  mov w2, wzr
0x0662B2A4: 1bae2c97  bl #0x3156b10
0x0662B2A8: 04000014  b #0x662b2b8
0x0662B2AC: 490180b9  ldrsw x9, [x10]
0x0662B2B0: 0811098b  add x8, x8, x9, lsl #4
0x0662B2B4: 00e10491  add x0, x8, #0x138
0x0662B2B8: 080440a9  ldp x8, x1, [x0]
0x0662B2BC: e00314aa  mov x0, x20
0x0662B2C0: 00013fd6  blr x8
0x0662B2C4: 746a40f9  ldr x20, [x19, #0xd0]
0x0662B2C8: d42100b4  cbz x20, #0x662b700
0x0662B2CC: 880240f9  ldr x8, [x20]
0x0662B2D0: 368200d0  adrp x22, #0x7671000
0x0662B2D4: e10240f9  ldr x1, [x23]
0x0662B2D8: f503002a  mov w21, w0
0x0662B2DC: 095d4279  ldrh w9, [x8, #0x12e]
0x0662B2E0: d6a247f9  ldr x22, [x22, #0xf40]
0x0662B2E4: 290100b4  cbz x9, #0x662b308
0x0662B2E8: 0a5940f9  ldr x10, [x8, #0xb0]
0x0662B2EC: 4a210091  add x10, x10, #8
0x0662B2F0: 4b815ff8  ldur x11, [x10, #-8]
0x0662B2F4: 7f0101eb  cmp x11, x1
0x0662B2F8: 00010054  b.eq #0x662b318
0x0662B2FC: 290500f1  subs x9, x9, #1
0x0662B300: 4a410091  add x10, x10, #0x10
0x0662B304: 61ffff54  b.ne #0x662b2f0
0x0662B308: 82008052  movz w2, #0x4
0x0662B30C: e00314aa  mov x0, x20
0x0662B310: 00ae2c97  bl #0x3156b10
0x0662B314: 05000014  b #0x662b328
0x0662B318: 490140b9  ldr w9, [x10]
0x0662B31C: 29110011  add w9, w9, #4
0x0662B320: 08d1298b  add x8, x8, w9, sxtw #4
0x0662B324: 00e10491  add x0, x8, #0x138
0x0662B328: 080440a9  ldp x8, x1, [x0]
0x0662B32C: e00314aa  mov x0, x20
0x0662B330: 00013fd6  blr x8
0x0662B334: c80240f9  ldr x8, [x22]
0x0662B338: f603002a  mov w22, w0
0x0662B33C: e00308aa  mov x0, x8
0x0662B340: 58562d97  bl #0x3180ca0
0x0662B344: e103152a  mov w1, w21
0x0662B348: e203162a  mov w2, w22
0x0662B34C: e3031f2a  mov w3, wzr
0x0662B350: e4031faa  mov x4, xzr
0x0662B354: f40300aa  mov x20, x0
0x0662B358: 46d90f94  bl #0x6a21870
0x0662B35C: 756a40f9  ldr x21, [x19, #0xd0]
0x0662B360: 151d00b4  cbz x21, #0x662b700
0x0662B364: a80240f9  ldr x8, [x21]
0x0662B368: e10240f9  ldr x1, [x23]
0x0662B36C: 095d4279  ldrh w9, [x8, #0x12e]
0x0662B370: 290100b4  cbz x9, #0x662b394
0x0662B374: 0a5940f9  ldr x10, [x8, #0xb0]
0x0662B378: 4a210091  add x10, x10, #8
0x0662B37C: 4b815ff8  ldur x11, [x10, #-8]
0x0662B380: 7f0101eb  cmp x11, x1
0x0662B384: 00010054  b.eq #0x662b3a4
0x0662B388: 290500f1  subs x9, x9, #1
0x0662B38C: 4a410091  add x10, x10, #0x10
0x0662B390: 61ffff54  b.ne #0x662b37c
0x0662B394: 42008052  movz w2, #0x2
0x0662B398: e00315aa  mov x0, x21
0x0662B39C: ddad2c97  bl #0x3156b10
0x0662B3A0: 05000014  b #0x662b3b4
0x0662B3A4: 490140b9  ldr w9, [x10]
0x0662B3A8: 29090011  add w9, w9, #2
0x0662B3AC: 08d1298b  add x8, x8, w9, sxtw #4
0x0662B3B0: 00e10491  add x0, x8, #0x138
0x0662B3B4: 080440a9  ldp x8, x1, [x0]
0x0662B3B8: e00315aa  mov x0, x21
0x0662B3BC: 00013fd6  blr x8
0x0662B3C0: a80240f9  ldr x8, [x21]
0x0662B3C4: e10240f9  ldr x1, [x23]
0x0662B3C8: 16040051  sub w22, w0, #1
0x0662B3CC: 095d4279  ldrh w9, [x8, #0x12e]
0x0662B3D0: 290100b4  cbz x9, #0x662b3f4
0x0662B3D4: 0a5940f9  ldr x10, [x8, #0xb0]
0x0662B3D8: 4a210091  add x10, x10, #8
0x0662B3DC: 4b815ff8  ldur x11, [x10, #-8]
0x0662B3E0: 7f0101eb  cmp x11, x1
0x0662B3E4: 00010054  b.eq #0x662b404
0x0662B3E8: 290500f1  subs x9, x9, #1
0x0662B3EC: 4a410091  add x10, x10, #0x10
0x0662B3F0: 61ffff54  b.ne #0x662b3dc
0x0662B3F4: c2008052  movz w2, #0x6
0x0662B3F8: e00315aa  mov x0, x21
0x0662B3FC: c5ad2c97  bl #0x3156b10
0x0662B400: 05000014  b #0x662b414
0x0662B404: 490140b9  ldr w9, [x10]
0x0662B408: 29190011  add w9, w9, #6
0x0662B40C: 08d1298b  add x8, x8, w9, sxtw #4
0x0662B410: 00e10491  add x0, x8, #0x138
0x0662B414: 080c40a9  ldp x8, x3, [x0]
0x0662B418: 188100f0  adrp x24, #0x764e000
0x0662B41C: d78600f0  adrp x23, #0x7706000
0x0662B420: 18af43f9  ldr x24, [x24, #0x758]
0x0662B424: f7d244f9  ldr x23, [x23, #0x9a0]
0x0662B428: e00315aa  mov x0, x21
0x0662B42C: e103162a  mov w1, w22
0x0662B430: e2031f2a  mov w2, wzr
0x0662B434: 00013fd6  blr x8
0x0662B438: f50300aa  mov x21, x0
0x0662B43C: 400300b4  cbz x0, #0x662b4a4
0x0662B440: 6a8200d0  adrp x10, #0x7679000
0x0662B444: a80240f9  ldr x8, [x21]
0x0662B448: 4a1144f9  ldr x10, [x10, #0x820]
0x0662B44C: 095d4279  ldrh w9, [x8, #0x12e]
0x0662B450: 410140f9  ldr x1, [x10]
0x0662B454: 290100b4  cbz x9, #0x662b478
0x0662B458: 0a5940f9  ldr x10, [x8, #0xb0]
0x0662B45C: 4a210091  add x10, x10, #8
0x0662B460: 4b815ff8  ldur x11, [x10, #-8]
0x0662B464: 7f0101eb  cmp x11, x1
0x0662B468: 00010054  b.eq #0x662b488
0x0662B46C: 290500f1  subs x9, x9, #1
0x0662B470: 4a410091  add x10, x10, #0x10
0x0662B474: 61ffff54  b.ne #0x662b460
0x0662B478: e00315aa  mov x0, x21
0x0662B47C: e2031f2a  mov w2, wzr
0x0662B480: a4ad2c97  bl #0x3156b10
0x0662B484: 04000014  b #0x662b494
0x0662B488: 490180b9  ldrsw x9, [x10]
0x0662B48C: 0811098b  add x8, x8, x9, lsl #4
0x0662B490: 00e10491  add x0, x8, #0x138
0x0662B494: 080440a9  ldp x8, x1, [x0]
0x0662B498: e00315aa  mov x0, x21
0x0662B49C: 00013fd6  blr x8
0x0662B4A0: f50300aa  mov x21, x0
0x0662B4A4: 000340f9  ldr x0, [x24]
0x0662B4A8: 766a40f9  ldr x22, [x19, #0xd0]
0x0662B4AC: fd552d97  bl #0x3180ca0
0x0662B4B0: e20240f9  ldr x2, [x23]
0x0662B4B4: e10313aa  mov x1, x19
0x0662B4B8: e3031faa  mov x3, xzr
0x0662B4BC: f70300aa  mov x23, x0
0x0662B4C0: 9c08bf97  bl #0x55ed730
0x0662B4C4: e00313aa  mov x0, x19
0x0662B4C8: e10314aa  mov x1, x20
0x0662B4CC: e20316aa  mov x2, x22
0x0662B4D0: e30315aa  mov x3, x21
0x0662B4D4: e40317aa  mov x4, x23
0x0662B4D8: 74ecff97  bl #0x66266a8
0x0662B4DC: a0020036  tbz w0, #0, #0x662b530
0x0662B4E0: 088100f0  adrp x8, #0x764e000
0x0662B4E4: 086d42f9  ldr x8, [x8, #0x4d8]
0x0662B4E8: 000140f9  ldr x0, [x8]
0x0662B4EC: ed552d97  bl #0x3180ca0
0x0662B4F0: e1031faa  mov x1, xzr
0x0662B4F4: f30300aa  mov x19, x0
0x0662B4F8: 198ec297  bl #0x56ced5c
0x0662B4FC: 28820090  adrp x8, #0x766f000
0x0662B500: 08a545f9  ldr x8, [x8, #0xb48]
0x0662B504: 000140f9  ldr x0, [x8]
0x0662B508: 08e040b9  ldr w8, [x0, #0xe0]
0x0662B50C: 48000035  cbnz w8, #0x662b514
0x0662B510: 9f552d97  bl #0x3180b8c
0x0662B514: e00313aa  mov x0, x19
0x0662B518: f44f43a9  ldp x20, x19, [sp, #0x30]
0x0662B51C: f65742a9  ldp x22, x21, [sp, #0x20]
0x0662B520: f85f41a9  ldp x24, x23, [sp, #0x10]
0x0662B524: e1031faa  mov x1, xzr
0x0662B528: fe0744f8  ldr x30, [sp], #0x40
0x0662B52C: aaa60814  b #0x6854fd4
0x0662B530: 756e40f9  ldr x21, [x19, #0xd8]
0x0662B534: 750e00b4  cbz x21, #0x662b700
0x0662B538: aa8600b0  adrp x10, #0x7700000
0x0662B53C: a80240f9  ldr x8, [x21]
0x0662B540: 4a4946f9  ldr x10, [x10, #0xc90]
0x0662B544: 095d4279  ldrh w9, [x8, #0x12e]
0x0662B548: 410140f9  ldr x1, [x10]
0x0662B54C: 290100b4  cbz x9, #0x662b570
0x0662B550: 0a5940f9  ldr x10, [x8, #0xb0]
0x0662B554: 4a210091  add x10, x10, #8
0x0662B558: 4b815ff8  ldur x11, [x10, #-8]
0x0662B55C: 7f0101eb  cmp x11, x1
0x0662B560: 00010054  b.eq #0x662b580
0x0662B564: 290500f1  subs x9, x9, #1
0x0662B568: 4a410091  add x10, x10, #0x10
0x0662B56C: 61ffff54  b.ne #0x662b558
0x0662B570: 62008052  movz w2, #0x3
0x0662B574: e00315aa  mov x0, x21
0x0662B578: 66ad2c97  bl #0x3156b10
0x0662B57C: 05000014  b #0x662b590
0x0662B580: 490140b9  ldr w9, [x10]
0x0662B584: 290d0011  add w9, w9, #3
0x0662B588: 08d1298b  add x8, x8, w9, sxtw #4
0x0662B58C: 00e10491  add x0, x8, #0x138
0x0662B590: 080840a9  ldp x8, x2, [x0]
0x0662B594: e00315aa  mov x0, x21
0x0662B598: e10314aa  mov x1, x20
0x0662B59C: 00013fd6  blr x8
0x0662B5A0: 080340f9  ldr x8, [x24]
0x0662B5A4: f40300aa  mov x20, x0
0x0662B5A8: e00308aa  mov x0, x8
0x0662B5AC: bd552d97  bl #0x3180ca0
0x0662B5B0: c88600f0  adrp x8, #0x7706000
0x0662B5B4: 08d544f9  ldr x8, [x8, #0x9a8]
0x0662B5B8: e10313aa  mov x1, x19
0x0662B5BC: e3031faa  mov x3, xzr
0x0662B5C0: f50300aa  mov x21, x0
0x0662B5C4: 020140f9  ldr x2, [x8]
0x0662B5C8: 5a08bf97  bl #0x55ed730
0x0662B5CC: b40900b4  cbz x20, #0x662b700
0x0662B5D0: 368200d0  adrp x22, #0x7671000
0x0662B5D4: 880240f9  ldr x8, [x20]
0x0662B5D8: d66247f9  ldr x22, [x22, #0xec0]
0x0662B5DC: 095d4279  ldrh w9, [x8, #0x12e]
0x0662B5E0: c10240f9  ldr x1, [x22]
0x0662B5E4: 290100b4  cbz x9, #0x662b608
0x0662B5E8: 0a5940f9  ldr x10, [x8, #0xb0]
0x0662B5EC: 4a210091  add x10, x10, #8
0x0662B5F0: 4b815ff8  ldur x11, [x10, #-8]
0x0662B5F4: 7f0101eb  cmp x11, x1
0x0662B5F8: 00010054  b.eq #0x662b618
0x0662B5FC: 290500f1  subs x9, x9, #1
0x0662B600: 4a410091  add x10, x10, #0x10
0x0662B604: 61ffff54  b.ne #0x662b5f0
0x0662B608: e00314aa  mov x0, x20
0x0662B60C: e2031f2a  mov w2, wzr
0x0662B610: 40ad2c97  bl #0x3156b10
0x0662B614: 04000014  b #0x662b624
0x0662B618: 490180b9  ldrsw x9, [x10]
0x0662B61C: 0811098b  add x8, x8, x9, lsl #4
0x0662B620: 00e10491  add x0, x8, #0x138
0x0662B624: 080840a9  ldp x8, x2, [x0]
0x0662B628: e00314aa  mov x0, x20
0x0662B62C: e10315aa  mov x1, x21
0x0662B630: 00013fd6  blr x8
0x0662B634: 28820090  adrp x8, #0x766f000
0x0662B638: 082141f9  ldr x8, [x8, #0x240]
0x0662B63C: f40300aa  mov x20, x0
0x0662B640: 080140f9  ldr x8, [x8]
0x0662B644: e00308aa  mov x0, x8
0x0662B648: 96552d97  bl #0x3180ca0
0x0662B64C: c88600f0  adrp x8, #0x7706000
0x0662B650: 08d944f9  ldr x8, [x8, #0x9b0]
0x0662B654: e10313aa  mov x1, x19
0x0662B658: e3031faa  mov x3, xzr
0x0662B65C: f50300aa  mov x21, x0
0x0662B660: 020140f9  ldr x2, [x8]
0x0662B664: dcdab397  bl #0x53221d4
0x0662B668: d40400b4  cbz x20, #0x662b700
0x0662B66C: 2a820090  adrp x10, #0x766f000
0x0662B670: 880240f9  ldr x8, [x20]
0x0662B674: 4a2541f9  ldr x10, [x10, #0x248]
0x0662B678: 095d4279  ldrh w9, [x8, #0x12e]
0x0662B67C: 410140f9  ldr x1, [x10]
0x0662B680: 290100b4  cbz x9, #0x662b6a4
0x0662B684: 0a5940f9  ldr x10, [x8, #0xb0]
0x0662B688: 4a210091  add x10, x10, #8
0x0662B68C: 4b815ff8  ldur x11, [x10, #-8]
0x0662B690: 7f0101eb  cmp x11, x1
0x0662B694: 00010054  b.eq #0x662b6b4
0x0662B698: 290500f1  subs x9, x9, #1
0x0662B69C: 4a410091  add x10, x10, #0x10
0x0662B6A0: 61ffff54  b.ne #0x662b68c
0x0662B6A4: 22008052  movz w2, #0x1
0x0662B6A8: e00314aa  mov x0, x20
0x0662B6AC: 19ad2c97  bl #0x3156b10
0x0662B6B0: 05000014  b #0x662b6c4
0x0662B6B4: 490140b9  ldr w9, [x10]
0x0662B6B8: 29050011  add w9, w9, #1
0x0662B6BC: 08d1298b  add x8, x8, w9, sxtw #4
0x0662B6C0: 00e10491  add x0, x8, #0x138
0x0662B6C4: 080840a9  ldp x8, x2, [x0]
0x0662B6C8: e00314aa  mov x0, x20
0x0662B6CC: e10315aa  mov x1, x21
0x0662B6D0: 00013fd6  blr x8
0x0662B6D4: c00000b4  cbz x0, #0x662b6ec
0x0662B6D8: d40240f9  ldr x20, [x22]
0x0662B6DC: f30300aa  mov x19, x0
0x0662B6E0: e10314aa  mov x1, x20
0x0662B6E4: 2b552d97  bl #0x3180b90
0x0662B6E8: e00000b4  cbz x0, #0x662b704
0x0662B6EC: f44f43a9  ldp x20, x19, [sp, #0x30]
0x0662B6F0: f65742a9  ldp x22, x21, [sp, #0x20]
0x0662B6F4: f85f41a9  ldp x24, x23, [sp, #0x10]
0x0662B6F8: fe0744f8  ldr x30, [sp], #0x40
0x0662B6FC: c0035fd6  ret
0x0662B700: 6b552d97  bl #0x3180cac
0x0662B704: e00313aa  mov x0, x19
0x0662B708: e10314aa  mov x1, x20
0x0662B70C: 4f562d97  bl #0x3181048

; RVA 0x662B710 | public AssetReferenceT<Sprite> GetItemAsset(int slotIndex, InventorySlotType type) { }
; bytes=188 sha256=3cf8604247d8c5876d4cb4f218e810d52ef482cd302eac5d11a5340aaf823b3f status=arm64_complete_bound indexed_start=True
0x0662B710: fe0f1df8  str x30, [sp, #-0x30]!
0x0662B714: f65701a9  stp x22, x21, [sp, #0x10]
0x0662B718: f44f02a9  stp x20, x19, [sp, #0x20]
0x0662B71C: f6b70090  adrp x22, #0x7d27000
0x0662B720: c8da7839  ldrb w8, [x22, #0xe36]
0x0662B724: f303022a  mov w19, w2
0x0662B728: f403012a  mov w20, w1
0x0662B72C: f50300aa  mov x21, x0
0x0662B730: c8000037  tbnz w8, #0, #0x662b748
0x0662B734: c08600f0  adrp x0, #0x7706000
0x0662B738: 004c44f9  ldr x0, [x0, #0x898]
0x0662B73C: b7542d97  bl #0x3180a18
0x0662B740: 28008052  movz w8, #0x1
0x0662B744: c8da3839  strb w8, [x22, #0xe36]
0x0662B748: b56a40f9  ldr x21, [x21, #0xd0]
0x0662B74C: f50300b4  cbz x21, #0x662b7c8
0x0662B750: ca8600f0  adrp x10, #0x7706000
0x0662B754: a80240f9  ldr x8, [x21]
0x0662B758: 4a4d44f9  ldr x10, [x10, #0x898]
0x0662B75C: 095d4279  ldrh w9, [x8, #0x12e]
0x0662B760: 410140f9  ldr x1, [x10]
0x0662B764: 290100b4  cbz x9, #0x662b788
0x0662B768: 0a5940f9  ldr x10, [x8, #0xb0]
0x0662B76C: 4a210091  add x10, x10, #8
0x0662B770: 4b815ff8  ldur x11, [x10, #-8]
0x0662B774: 7f0101eb  cmp x11, x1
0x0662B778: 00010054  b.eq #0x662b798
0x0662B77C: 290500f1  subs x9, x9, #1
0x0662B780: 4a410091  add x10, x10, #0x10
0x0662B784: 61ffff54  b.ne #0x662b770
0x0662B788: 02018052  movz w2, #0x8
0x0662B78C: e00315aa  mov x0, x21
0x0662B790: e0ac2c97  bl #0x3156b10
0x0662B794: 05000014  b #0x662b7a8
0x0662B798: 490140b9  ldr w9, [x10]
0x0662B79C: 29210011  add w9, w9, #8
0x0662B7A0: 08d1298b  add x8, x8, w9, sxtw #4
0x0662B7A4: 00e10491  add x0, x8, #0x138
0x0662B7A8: 040c40a9  ldp x4, x3, [x0]
0x0662B7AC: e00315aa  mov x0, x21
0x0662B7B0: e103142a  mov w1, w20
0x0662B7B4: e203132a  mov w2, w19
0x0662B7B8: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0662B7BC: f65741a9  ldp x22, x21, [sp, #0x10]
0x0662B7C0: fe0743f8  ldr x30, [sp], #0x30
0x0662B7C4: 80001fd6  br x4
0x0662B7C8: 39552d97  bl #0x3180cac

; RVA 0x662B7CC | public void .ctor() { }
; bytes=8 sha256=e6c53dc9a557b23de971c3fafa258591bec77b02728838282422a03791ba4e63 status=arm64_complete_bound indexed_start=True
0x0662B7CC: e1031faa  mov x1, xzr
0x0662B7D0: 399eeb17  b #0x61130b4

; RVA 0x662B7D4 | private void <TryBuyInventorySlot>b__17_0() { }
; bytes=104 sha256=a9b571d02cbe994bdaefc752973aa4ce55973b11b771a8e282aee4d8497c589a status=arm64_complete_bound indexed_start=True
0x0662B7D4: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0662B7D8: f44f01a9  stp x20, x19, [sp, #0x10]
0x0662B7DC: f5b70090  adrp x21, #0x7d27000
0x0662B7E0: 34820090  adrp x20, #0x766f000
0x0662B7E4: a8de7839  ldrb w8, [x21, #0xe37]
0x0662B7E8: 943246f9  ldr x20, [x20, #0xc60]
0x0662B7EC: f30300aa  mov x19, x0
0x0662B7F0: c8000037  tbnz w8, #0, #0x662b808
0x0662B7F4: 20820090  adrp x0, #0x766f000
0x0662B7F8: 003046f9  ldr x0, [x0, #0xc60]
0x0662B7FC: 87542d97  bl #0x3180a18
0x0662B800: 28008052  movz w8, #0x1
0x0662B804: a8de3839  strb w8, [x21, #0xe37]
0x0662B808: 800240f9  ldr x0, [x20]
0x0662B80C: 08e040b9  ldr w8, [x0, #0xe0]
0x0662B810: 68000035  cbnz w8, #0x662b81c
0x0662B814: de542d97  bl #0x3180b8c
0x0662B818: 800240f9  ldr x0, [x20]
0x0662B81C: 085c40f9  ldr x8, [x0, #0xb8]
0x0662B820: e00313aa  mov x0, x19
0x0662B824: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0662B828: e2031faa  mov x2, xzr
0x0662B82C: 012140f9  ldr x1, [x8, #0x40]
0x0662B830: e3031faa  mov x3, xzr
0x0662B834: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0662B838: ce7d0c14  b #0x694af70

; RVA 0x662B83C | private void <TryBuyInventorySlot>b__17_1() { }
; bytes=756 sha256=1c7c4674cf165e3499392b25f0fa26d7aa17c1254f34df0148ee09ce7fd20cd9 status=arm64_complete_bound indexed_start=True
0x0662B83C: fe0f1cf8  str x30, [sp, #-0x40]!
0x0662B840: f85f01a9  stp x24, x23, [sp, #0x10]
0x0662B844: f65702a9  stp x22, x21, [sp, #0x20]
0x0662B848: f44f03a9  stp x20, x19, [sp, #0x30]
0x0662B84C: f4b70090  adrp x20, #0x7d27000
0x0662B850: 88e27839  ldrb w8, [x20, #0xe38]
0x0662B854: f30300aa  mov x19, x0
0x0662B858: 48020037  tbnz w8, #0, #0x662b8a0
0x0662B85C: c08600f0  adrp x0, #0x7706000
0x0662B860: 004c44f9  ldr x0, [x0, #0x898]
0x0662B864: 6d542d97  bl #0x3180a18
0x0662B868: 40820090  adrp x0, #0x7673000
0x0662B86C: 004443f9  ldr x0, [x0, #0x688]
0x0662B870: 6a542d97  bl #0x3180a18
0x0662B874: c08600f0  adrp x0, #0x7706000
0x0662B878: 00dc44f9  ldr x0, [x0, #0x9b8]
0x0662B87C: 67542d97  bl #0x3180a18
0x0662B880: 40820090  adrp x0, #0x7673000
0x0662B884: 005c40f9  ldr x0, [x0, #0xb8]
0x0662B888: 64542d97  bl #0x3180a18
0x0662B88C: c08600f0  adrp x0, #0x7706000
0x0662B890: 00e044f9  ldr x0, [x0, #0x9c0]
0x0662B894: 61542d97  bl #0x3180a18
0x0662B898: 28008052  movz w8, #0x1
0x0662B89C: 88e23839  strb w8, [x20, #0xe38]
0x0662B8A0: 756a40f9  ldr x21, [x19, #0xd0]
0x0662B8A4: 551400b4  cbz x21, #0x662bb2c
0x0662B8A8: d78600f0  adrp x23, #0x7706000
0x0662B8AC: a80240f9  ldr x8, [x21]
0x0662B8B0: f74e44f9  ldr x23, [x23, #0x898]
0x0662B8B4: 56820090  adrp x22, #0x7673000
0x0662B8B8: 745640f9  ldr x20, [x19, #0xa8]
0x0662B8BC: 095d4279  ldrh w9, [x8, #0x12e]
0x0662B8C0: e10240f9  ldr x1, [x23]
0x0662B8C4: d65e40f9  ldr x22, [x22, #0xb8]
0x0662B8C8: 290100b4  cbz x9, #0x662b8ec
0x0662B8CC: 0a5940f9  ldr x10, [x8, #0xb0]
0x0662B8D0: 4a210091  add x10, x10, #8
0x0662B8D4: 4b815ff8  ldur x11, [x10, #-8]
0x0662B8D8: 7f0101eb  cmp x11, x1
0x0662B8DC: 00010054  b.eq #0x662b8fc
0x0662B8E0: 290500f1  subs x9, x9, #1
0x0662B8E4: 4a410091  add x10, x10, #0x10
0x0662B8E8: 61ffff54  b.ne #0x662b8d4
0x0662B8EC: e00315aa  mov x0, x21
0x0662B8F0: e2031f2a  mov w2, wzr
0x0662B8F4: 87ac2c97  bl #0x3156b10
0x0662B8F8: 04000014  b #0x662b908
0x0662B8FC: 490180b9  ldrsw x9, [x10]
0x0662B900: 0811098b  add x8, x8, x9, lsl #4
0x0662B904: 00e10491  add x0, x8, #0x138
0x0662B908: 080440a9  ldp x8, x1, [x0]
0x0662B90C: e00315aa  mov x0, x21
0x0662B910: 00013fd6  blr x8
0x0662B914: c80240f9  ldr x8, [x22]
0x0662B918: f503002a  mov w21, w0
0x0662B91C: 09e140b9  ldr w9, [x8, #0xe0]
0x0662B920: 69000035  cbnz w9, #0x662b92c
0x0662B924: e00308aa  mov x0, x8
0x0662B928: 99542d97  bl #0x3180b8c
0x0662B92C: e003152a  mov w0, w21
0x0662B930: e1031faa  mov x1, xzr
0x0662B934: 7b84ec97  bl #0x614cb20
0x0662B938: 766a40f9  ldr x22, [x19, #0xd0]
0x0662B93C: 960f00b4  cbz x22, #0x662bb2c
0x0662B940: c80240f9  ldr x8, [x22]
0x0662B944: e10240f9  ldr x1, [x23]
0x0662B948: f50300aa  mov x21, x0
0x0662B94C: 095d4279  ldrh w9, [x8, #0x12e]
0x0662B950: 290100b4  cbz x9, #0x662b974
0x0662B954: 0a5940f9  ldr x10, [x8, #0xb0]
0x0662B958: 4a210091  add x10, x10, #8
0x0662B95C: 4b815ff8  ldur x11, [x10, #-8]
0x0662B960: 7f0101eb  cmp x11, x1
0x0662B964: 00010054  b.eq #0x662b984
0x0662B968: 290500f1  subs x9, x9, #1
0x0662B96C: 4a410091  add x10, x10, #0x10
0x0662B970: 61ffff54  b.ne #0x662b95c
0x0662B974: 82008052  movz w2, #0x4
0x0662B978: e00316aa  mov x0, x22
0x0662B97C: 65ac2c97  bl #0x3156b10
0x0662B980: 05000014  b #0x662b994
0x0662B984: 490140b9  ldr w9, [x10]
0x0662B988: 29110011  add w9, w9, #4
0x0662B98C: 08d1298b  add x8, x8, w9, sxtw #4
0x0662B990: 00e10491  add x0, x8, #0x138
0x0662B994: 080440a9  ldp x8, x1, [x0]
0x0662B998: e00316aa  mov x0, x22
0x0662B99C: 00013fd6  blr x8
0x0662B9A0: 740c00b4  cbz x20, #0x662bb2c
0x0662B9A4: 4a820090  adrp x10, #0x7673000
0x0662B9A8: 880240f9  ldr x8, [x20]
0x0662B9AC: 4a4543f9  ldr x10, [x10, #0x688]
0x0662B9B0: f603002a  mov w22, w0
0x0662B9B4: 095d4279  ldrh w9, [x8, #0x12e]
0x0662B9B8: 410140f9  ldr x1, [x10]
0x0662B9BC: 290100b4  cbz x9, #0x662b9e0
0x0662B9C0: 0a5940f9  ldr x10, [x8, #0xb0]
0x0662B9C4: 4a210091  add x10, x10, #8
0x0662B9C8: 4b815ff8  ldur x11, [x10, #-8]
0x0662B9CC: 7f0101eb  cmp x11, x1
0x0662B9D0: 00010054  b.eq #0x662b9f0
0x0662B9D4: 290500f1  subs x9, x9, #1
0x0662B9D8: 4a410091  add x10, x10, #0x10
0x0662B9DC: 61ffff54  b.ne #0x662b9c8
0x0662B9E0: 42008052  movz w2, #0x2
0x0662B9E4: e00314aa  mov x0, x20
0x0662B9E8: 4aac2c97  bl #0x3156b10
0x0662B9EC: 05000014  b #0x662ba00
0x0662B9F0: 490140b9  ldr w9, [x10]
0x0662B9F4: 29090011  add w9, w9, #2
0x0662B9F8: 08d1298b  add x8, x8, w9, sxtw #4
0x0662B9FC: 00e10491  add x0, x8, #0x138
0x0662BA00: 081c40a9  ldp x8, x7, [x0]
0x0662BA04: 24028052  movz w4, #0x11
0x0662BA08: e00314aa  mov x0, x20
0x0662BA0C: e10315aa  mov x1, x21
0x0662BA10: e203162a  mov w2, w22
0x0662BA14: e3031f2a  mov w3, wzr
0x0662BA18: e5031faa  mov x5, xzr
0x0662BA1C: e6031f2a  mov w6, wzr
0x0662BA20: 00013fd6  blr x8
0x0662BA24: 746a40f9  ldr x20, [x19, #0xd0]
0x0662BA28: 340800b4  cbz x20, #0x662bb2c
0x0662BA2C: 880240f9  ldr x8, [x20]
0x0662BA30: e10240f9  ldr x1, [x23]
0x0662BA34: 095d4279  ldrh w9, [x8, #0x12e]
0x0662BA38: 290100b4  cbz x9, #0x662ba5c
0x0662BA3C: 0a5940f9  ldr x10, [x8, #0xb0]
0x0662BA40: 4a210091  add x10, x10, #8
0x0662BA44: 4b815ff8  ldur x11, [x10, #-8]
0x0662BA48: 7f0101eb  cmp x11, x1
0x0662BA4C: 00010054  b.eq #0x662ba6c
0x0662BA50: 290500f1  subs x9, x9, #1
0x0662BA54: 4a410091  add x10, x10, #0x10
0x0662BA58: 61ffff54  b.ne #0x662ba44
0x0662BA5C: 82008052  movz w2, #0x4
0x0662BA60: e00314aa  mov x0, x20
0x0662BA64: 2bac2c97  bl #0x3156b10
0x0662BA68: 05000014  b #0x662ba7c
0x0662BA6C: 490140b9  ldr w9, [x10]
0x0662BA70: 29110011  add w9, w9, #4
0x0662BA74: 08d1298b  add x8, x8, w9, sxtw #4
0x0662BA78: 00e10491  add x0, x8, #0x138
0x0662BA7C: 080440a9  ldp x8, x1, [x0]
0x0662BA80: e00314aa  mov x0, x20
0x0662BA84: 00013fd6  blr x8
0x0662BA88: f403002a  mov w20, w0
0x0662BA8C: e00313aa  mov x0, x19
0x0662BA90: 33fdff97  bl #0x662af5c
0x0662BA94: c00400b4  cbz x0, #0x662bb2c
0x0662BA98: e1031faa  mov x1, xzr
0x0662BA9C: d5ee0094  bl #0x66675f0
0x0662BAA0: f503002a  mov w21, w0
0x0662BAA4: e00313aa  mov x0, x19
0x0662BAA8: 1bfdff97  bl #0x662af14
0x0662BAAC: 000400b4  cbz x0, #0x662bb2c
0x0662BAB0: d88600f0  adrp x24, #0x7706000
0x0662BAB4: 18df44f9  ldr x24, [x24, #0x9b8]
0x0662BAB8: e1031faa  mov x1, xzr
0x0662BABC: b361f197  bl #0x6284188
0x0662BAC0: 761240f9  ldr x22, [x19, #0x20]
0x0662BAC4: f703002a  mov w23, w0
0x0662BAC8: e00313aa  mov x0, x19
0x0662BACC: 6ffcff97  bl #0x662ac88
0x0662BAD0: 080340f9  ldr x8, [x24]
0x0662BAD4: f803002a  mov w24, w0
0x0662BAD8: e00308aa  mov x0, x8
0x0662BADC: 71542d97  bl #0x3180ca0
0x0662BAE0: 01070011  add w1, w24, #1
0x0662BAE4: e2060011  add w2, w23, #1
0x0662BAE8: e303142a  mov w3, w20
0x0662BAEC: e403152a  mov w4, w21
0x0662BAF0: e5031f2a  mov w5, wzr
0x0662BAF4: e6031faa  mov x6, xzr
0x0662BAF8: f30300aa  mov x19, x0
0x0662BAFC: 6b21e797  bl #0x5ff40a8
0x0662BB00: 760100b4  cbz x22, #0x662bb2c
0x0662BB04: c88600f0  adrp x8, #0x7706000
0x0662BB08: 08e144f9  ldr x8, [x8, #0x9c0]
0x0662BB0C: e00316aa  mov x0, x22
0x0662BB10: e10313aa  mov x1, x19
0x0662BB14: f44f43a9  ldp x20, x19, [sp, #0x30]
0x0662BB18: 020140f9  ldr x2, [x8]
0x0662BB1C: f65742a9  ldp x22, x21, [sp, #0x20]
0x0662BB20: f85f41a9  ldp x24, x23, [sp, #0x10]
0x0662BB24: fe0744f8  ldr x30, [sp], #0x40
0x0662BB28: 91e45d17  b #0x3da4d6c
0x0662BB2C: 60542d97  bl #0x3180cac

; RVA 0x662BB30 | private void <TryBuyInventorySlot>b__17_2(Exception exception) { }
; bytes=172 sha256=ecdaa51550269c3e339a692279bc6d4223157f16561fe16353d97c330209d6bb status=arm64_complete_bound indexed_start=True
0x0662BB30: fe0f1df8  str x30, [sp, #-0x30]!
0x0662BB34: f65701a9  stp x22, x21, [sp, #0x10]
0x0662BB38: f44f02a9  stp x20, x19, [sp, #0x20]
0x0662BB3C: f6b70090  adrp x22, #0x7d27000
0x0662BB40: 35820090  adrp x21, #0x766f000
0x0662BB44: d48600f0  adrp x20, #0x7706000
0x0662BB48: c8e67839  ldrb w8, [x22, #0xe39]
0x0662BB4C: b50e45f9  ldr x21, [x21, #0xa18]
0x0662BB50: 94e644f9  ldr x20, [x20, #0x9c8]
0x0662BB54: f30300aa  mov x19, x0
0x0662BB58: 88010037  tbnz w8, #0, #0x662bb88
0x0662BB5C: 20820090  adrp x0, #0x766f000
0x0662BB60: 000c45f9  ldr x0, [x0, #0xa18]
0x0662BB64: ad532d97  bl #0x3180a18
0x0662BB68: 20820090  adrp x0, #0x766f000
0x0662BB6C: 001045f9  ldr x0, [x0, #0xa20]
0x0662BB70: aa532d97  bl #0x3180a18
0x0662BB74: c08600f0  adrp x0, #0x7706000
0x0662BB78: 00e444f9  ldr x0, [x0, #0x9c8]
0x0662BB7C: a7532d97  bl #0x3180a18
0x0662BB80: 28008052  movz w8, #0x1
0x0662BB84: c8e63839  strb w8, [x22, #0xe39]
0x0662BB88: a00240f9  ldr x0, [x21]
0x0662BB8C: 731240f9  ldr x19, [x19, #0x20]
0x0662BB90: 44542d97  bl #0x3180ca0
0x0662BB94: 810240f9  ldr x1, [x20]
0x0662BB98: e003271e  fmov s0, wzr
0x0662BB9C: c30f8752  movz w3, #0x387e
0x0662BBA0: e2031faa  mov x2, xzr
0x0662BBA4: e4031faa  mov x4, xzr
0x0662BBA8: f40300aa  mov x20, x0
0x0662BBAC: dec90b94  bl #0x691e324
0x0662BBB0: 530100b4  cbz x19, #0x662bbd8
0x0662BBB4: 28820090  adrp x8, #0x766f000
0x0662BBB8: 081145f9  ldr x8, [x8, #0xa20]
0x0662BBBC: e00313aa  mov x0, x19
0x0662BBC0: e10314aa  mov x1, x20
0x0662BBC4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0662BBC8: 020140f9  ldr x2, [x8]
0x0662BBCC: f65741a9  ldp x22, x21, [sp, #0x10]
0x0662BBD0: fe0743f8  ldr x30, [sp], #0x30
0x0662BBD4: 66e45d17  b #0x3da4d6c
0x0662BBD8: 35542d97  bl #0x3180cac

