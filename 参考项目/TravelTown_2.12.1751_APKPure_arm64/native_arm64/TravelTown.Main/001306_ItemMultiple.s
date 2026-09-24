; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1306 MergeEngine.Configuration.Definitions.ItemMultiple
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A29AAC | public HashSet<string> get_RewardQueueUuids() { }
; bytes=8 sha256=f637e07b3820a82a5634a0174c92391b8ec5194fafa5b124fa3a73d3007ae512 status=arm64_complete_bound indexed_start=True
0x06A29AAC: 003440f9  ldr x0, [x0, #0x68]
0x06A29AB0: c0035fd6  ret

; RVA 0x6A29AB4 | public void set_RewardQueueUuids(HashSet<string> value) { }
; bytes=8 sha256=3c1bd86c14052f7a976a0bb9f53e0c16137187369f9266bbd58ccc446d4113b7 status=arm64_complete_bound indexed_start=True
0x06A29AB4: 018c06f8  str x1, [x0, #0x68]!
0x06A29AB8: c35b1d17  b #0x31809c4

; RVA 0x6A29ABC | public override bool Equals(IRewardViewData other) { }
; bytes=64 sha256=570b4d8cab823b4537b1f67d0edfa730d62db35eacac6809d4aabf90ebb67a6c status=arm64_complete_bound indexed_start=True
0x06A29ABC: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A29AC0: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A29AC4: e2031faa  mov x2, xzr
0x06A29AC8: f30301aa  mov x19, x1
0x06A29ACC: f40300aa  mov x20, x0
0x06A29AD0: a3d6d797  bl #0x601f55c
0x06A29AD4: c0000036  tbz w0, #0, #0x6a29aec
0x06A29AD8: e00314aa  mov x0, x20
0x06A29ADC: e10313aa  mov x1, x19
0x06A29AE0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A29AE4: fe0742f8  ldr x30, [sp], #0x20
0x06A29AE8: 05000014  b #0x6a29afc
0x06A29AEC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A29AF0: e0031f2a  mov w0, wzr
0x06A29AF4: fe0742f8  ldr x30, [sp], #0x20
0x06A29AF8: c0035fd6  ret

; RVA 0x6A29AFC | public bool CompareItems(IRewardViewData other) { }
; bytes=168 sha256=5d0a1dd43060bb43baadaaadbd18c2bf0bba8e9a6a7f73a1179e9ab2a04228c4 status=arm64_complete_bound indexed_start=True
0x06A29AFC: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A29B00: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A29B04: 159800b0  adrp x21, #0x7d2a000
0x06A29B08: a8865039  ldrb w8, [x21, #0x421]
0x06A29B0C: f40301aa  mov x20, x1
0x06A29B10: f30300aa  mov x19, x0
0x06A29B14: c8000037  tbnz w8, #0, #0x6a29b2c
0x06A29B18: 20650090  adrp x0, #0x76cd000
0x06A29B1C: 00bc45f9  ldr x0, [x0, #0xb78]
0x06A29B20: be5b1d97  bl #0x3180a18
0x06A29B24: 28008052  movz w8, #0x1
0x06A29B28: a8861039  strb w8, [x21, #0x421]
0x06A29B2C: f40100b4  cbz x20, #0x6a29b68
0x06A29B30: 28650090  adrp x8, #0x76cd000
0x06A29B34: 08bd45f9  ldr x8, [x8, #0xb78]
0x06A29B38: 890240f9  ldr x9, [x20]
0x06A29B3C: 080140f9  ldr x8, [x8]
0x06A29B40: 2bc14439  ldrb w11, [x9, #0x130]
0x06A29B44: 0ac14439  ldrb w10, [x8, #0x130]
0x06A29B48: 7f010a6b  cmp w11, w10
0x06A29B4C: e3000054  b.lo #0x6a29b68
0x06A29B50: 296540f9  ldr x9, [x9, #0xc8]
0x06A29B54: 290d0a8b  add x9, x9, x10, lsl #3
0x06A29B58: 29815ff8  ldur x9, [x9, #-8]
0x06A29B5C: 3f0108eb  cmp x9, x8
0x06A29B60: 88029f9a  csel x8, x20, xzr, eq
0x06A29B64: a0000054  b.eq #0x6a29b78
0x06A29B68: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A29B6C: e0031f2a  mov w0, wzr
0x06A29B70: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A29B74: c0035fd6  ret
0x06A29B78: 480100b4  cbz x8, #0x6a29ba0
0x06A29B7C: 603240f9  ldr x0, [x19, #0x60]
0x06A29B80: 000100b4  cbz x0, #0x6a29ba0
0x06A29B84: 090040f9  ldr x9, [x0]
0x06A29B88: 013140f9  ldr x1, [x8, #0x60]
0x06A29B8C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A29B90: 233541f9  ldr x3, [x9, #0x268]
0x06A29B94: 223941f9  ldr x2, [x9, #0x270]
0x06A29B98: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A29B9C: 60001fd6  br x3
0x06A29BA0: 435c1d97  bl #0x3180cac

; RVA 0x6A29BA4 | protected void .ctor() { }
; bytes=144 sha256=e150f40bce6c001c401d5fe9b94531a8b9ef69a6de9d7193f4d484ebf1e866ef status=arm64_complete_bound indexed_start=True
0x06A29BA4: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A29BA8: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A29BAC: 159800b0  adrp x21, #0x7d2a000
0x06A29BB0: 546200d0  adrp x20, #0x7673000
0x06A29BB4: a88a5039  ldrb w8, [x21, #0x422]
0x06A29BB8: 945e40f9  ldr x20, [x20, #0xb8]
0x06A29BBC: f30300aa  mov x19, x0
0x06A29BC0: 28010037  tbnz w8, #0, #0x6a29be4
0x06A29BC4: 206800d0  adrp x0, #0x772f000
0x06A29BC8: 006840f9  ldr x0, [x0, #0xd0]
0x06A29BCC: 935b1d97  bl #0x3180a18
0x06A29BD0: 406200d0  adrp x0, #0x7673000
0x06A29BD4: 005c40f9  ldr x0, [x0, #0xb8]
0x06A29BD8: 905b1d97  bl #0x3180a18
0x06A29BDC: 28008052  movz w8, #0x1
0x06A29BE0: a88a1039  strb w8, [x21, #0x422]
0x06A29BE4: 800240f9  ldr x0, [x20]
0x06A29BE8: 356800d0  adrp x21, #0x772f000
0x06A29BEC: 08e040b9  ldr w8, [x0, #0xe0]
0x06A29BF0: b56a40f9  ldr x21, [x21, #0xd0]
0x06A29BF4: 68000035  cbnz w8, #0x6a29c00
0x06A29BF8: e55b1d97  bl #0x3180b8c
0x06A29BFC: 800240f9  ldr x0, [x20]
0x06A29C00: 085c40f9  ldr x8, [x0, #0xb8]
0x06A29C04: 20008052  movz w0, #0x1
0x06A29C08: e1031faa  mov x1, xzr
0x06A29C0C: 142140f9  ldr x20, [x8, #0x40]
0x06A29C10: 00d8d797  bl #0x601fc10
0x06A29C14: a40240f9  ldr x4, [x21]
0x06A29C18: e20300aa  mov x2, x0
0x06A29C1C: e00313aa  mov x0, x19
0x06A29C20: e10314aa  mov x1, x20
0x06A29C24: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A29C28: e3031faa  mov x3, xzr
0x06A29C2C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A29C30: e2a3a517  b #0x5392bb8

; RVA 0x6A29C34 | public void .ctor(string itemId, int amount, RewardDestination destination) { }
; bytes=260 sha256=e3b66c5a487f2454b0eb182f6bbe2d0d718e17c360dcb037a0cdb403e4db8edc status=arm64_complete_bound indexed_start=True
0x06A29C34: fe0f1bf8  str x30, [sp, #-0x50]!
0x06A29C38: fa6701a9  stp x26, x25, [sp, #0x10]
0x06A29C3C: f85f02a9  stp x24, x23, [sp, #0x20]
0x06A29C40: f65703a9  stp x22, x21, [sp, #0x30]
0x06A29C44: f44f04a9  stp x20, x19, [sp, #0x40]
0x06A29C48: 199800b0  adrp x25, #0x7d2a000
0x06A29C4C: b76200b0  adrp x23, #0x767e000
0x06A29C50: 586200d0  adrp x24, #0x7673000
0x06A29C54: 288f5039  ldrb w8, [x25, #0x423]
0x06A29C58: f77a42f9  ldr x23, [x23, #0x4f0]
0x06A29C5C: 185f40f9  ldr x24, [x24, #0xb8]
0x06A29C60: f30303aa  mov x19, x3
0x06A29C64: f503022a  mov w21, w2
0x06A29C68: f60301aa  mov x22, x1
0x06A29C6C: f40300aa  mov x20, x0
0x06A29C70: e8010037  tbnz w8, #0, #0x6a29cac
0x06A29C74: 206800d0  adrp x0, #0x772f000
0x06A29C78: 006c40f9  ldr x0, [x0, #0xd8]
0x06A29C7C: 675b1d97  bl #0x3180a18
0x06A29C80: a06200b0  adrp x0, #0x767e000
0x06A29C84: 007842f9  ldr x0, [x0, #0x4f0]
0x06A29C88: 645b1d97  bl #0x3180a18
0x06A29C8C: 406200d0  adrp x0, #0x7673000
0x06A29C90: 00c440f9  ldr x0, [x0, #0x188]
0x06A29C94: 615b1d97  bl #0x3180a18
0x06A29C98: 406200d0  adrp x0, #0x7673000
0x06A29C9C: 005c40f9  ldr x0, [x0, #0xb8]
0x06A29CA0: 5e5b1d97  bl #0x3180a18
0x06A29CA4: 28008052  movz w8, #0x1
0x06A29CA8: 288f1039  strb w8, [x25, #0x423]
0x06A29CAC: e00240f9  ldr x0, [x23]
0x06A29CB0: 5a6200d0  adrp x26, #0x7673000
0x06A29CB4: 396800d0  adrp x25, #0x772f000
0x06A29CB8: 5ac740f9  ldr x26, [x26, #0x188]
0x06A29CBC: 396f40f9  ldr x25, [x25, #0xd8]
0x06A29CC0: f85b1d97  bl #0x3180ca0
0x06A29CC4: e10316aa  mov x1, x22
0x06A29CC8: e2031faa  mov x2, xzr
0x06A29CCC: f70300aa  mov x23, x0
0x06A29CD0: 926ad797  bl #0x6004718
0x06A29CD4: 000340f9  ldr x0, [x24]
0x06A29CD8: 08e040b9  ldr w8, [x0, #0xe0]
0x06A29CDC: 68000035  cbnz w8, #0x6a29ce8
0x06A29CE0: ab5b1d97  bl #0x3180b8c
0x06A29CE4: 000340f9  ldr x0, [x24]
0x06A29CE8: 085c40f9  ldr x8, [x0, #0xb8]
0x06A29CEC: 400340f9  ldr x0, [x26]
0x06A29CF0: 162140f9  ldr x22, [x8, #0x40]
0x06A29CF4: eb5b1d97  bl #0x3180ca0
0x06A29CF8: e103152a  mov w1, w21
0x06A29CFC: e2031faa  mov x2, xzr
0x06A29D00: f80300aa  mov x24, x0
0x06A29D04: dad7d797  bl #0x601fc6c
0x06A29D08: 250340f9  ldr x5, [x25]
0x06A29D0C: e00314aa  mov x0, x20
0x06A29D10: e10317aa  mov x1, x23
0x06A29D14: e20316aa  mov x2, x22
0x06A29D18: e30318aa  mov x3, x24
0x06A29D1C: e40313aa  mov x4, x19
0x06A29D20: f44f44a9  ldp x20, x19, [sp, #0x40]
0x06A29D24: f65743a9  ldp x22, x21, [sp, #0x30]
0x06A29D28: f85f42a9  ldp x24, x23, [sp, #0x20]
0x06A29D2C: fa6741a9  ldp x26, x25, [sp, #0x10]
0x06A29D30: fe0745f8  ldr x30, [sp], #0x50
0x06A29D34: a3a3a517  b #0x5392bc0

; RVA 0x6A29D38 | public void .ctor(MergeItemWeakReference itemReference, int amount) { }
; bytes=204 sha256=e27833ba06b10502bd82133000b7158fc26d0a1035a008f79ecad528b5b2466c status=arm64_complete_bound indexed_start=True
0x06A29D38: fe0f1cf8  str x30, [sp, #-0x40]!
0x06A29D3C: f85f01a9  stp x24, x23, [sp, #0x10]
0x06A29D40: f65702a9  stp x22, x21, [sp, #0x20]
0x06A29D44: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A29D48: 179800b0  adrp x23, #0x7d2a000
0x06A29D4C: 566200d0  adrp x22, #0x7673000
0x06A29D50: e8925039  ldrb w8, [x23, #0x424]
0x06A29D54: d65e40f9  ldr x22, [x22, #0xb8]
0x06A29D58: f503022a  mov w21, w2
0x06A29D5C: f30301aa  mov x19, x1
0x06A29D60: f40300aa  mov x20, x0
0x06A29D64: 88010037  tbnz w8, #0, #0x6a29d94
0x06A29D68: 206800d0  adrp x0, #0x772f000
0x06A29D6C: 006c40f9  ldr x0, [x0, #0xd8]
0x06A29D70: 2a5b1d97  bl #0x3180a18
0x06A29D74: 406200d0  adrp x0, #0x7673000
0x06A29D78: 00c440f9  ldr x0, [x0, #0x188]
0x06A29D7C: 275b1d97  bl #0x3180a18
0x06A29D80: 406200d0  adrp x0, #0x7673000
0x06A29D84: 005c40f9  ldr x0, [x0, #0xb8]
0x06A29D88: 245b1d97  bl #0x3180a18
0x06A29D8C: 28008052  movz w8, #0x1
0x06A29D90: e8921039  strb w8, [x23, #0x424]
0x06A29D94: c00240f9  ldr x0, [x22]
0x06A29D98: 576200d0  adrp x23, #0x7673000
0x06A29D9C: 386800d0  adrp x24, #0x772f000
0x06A29DA0: 08e040b9  ldr w8, [x0, #0xe0]
0x06A29DA4: f7c640f9  ldr x23, [x23, #0x188]
0x06A29DA8: 186f40f9  ldr x24, [x24, #0xd8]
0x06A29DAC: 68000035  cbnz w8, #0x6a29db8
0x06A29DB0: 775b1d97  bl #0x3180b8c
0x06A29DB4: c00240f9  ldr x0, [x22]
0x06A29DB8: 085c40f9  ldr x8, [x0, #0xb8]
0x06A29DBC: e00240f9  ldr x0, [x23]
0x06A29DC0: 162140f9  ldr x22, [x8, #0x40]
0x06A29DC4: b75b1d97  bl #0x3180ca0
0x06A29DC8: e103152a  mov w1, w21
0x06A29DCC: e2031faa  mov x2, xzr
0x06A29DD0: f70300aa  mov x23, x0
0x06A29DD4: a6d7d797  bl #0x601fc6c
0x06A29DD8: 050340f9  ldr x5, [x24]
0x06A29DDC: e00314aa  mov x0, x20
0x06A29DE0: e10313aa  mov x1, x19
0x06A29DE4: e20316aa  mov x2, x22
0x06A29DE8: e30317aa  mov x3, x23
0x06A29DEC: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A29DF0: f65742a9  ldp x22, x21, [sp, #0x20]
0x06A29DF4: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06A29DF8: e4031faa  mov x4, xzr
0x06A29DFC: fe0744f8  ldr x30, [sp], #0x40
0x06A29E00: 70a3a517  b #0x5392bc0

; RVA 0x6A29E04 | public void .ctor(string itemId, RewardAmount rewardAmount) { }
; bytes=200 sha256=b868f2e4b61a8e543e0993a2b835390bae86e73bc14bb32b6e3d6946e4660316 status=arm64_complete_bound indexed_start=True
0x06A29E04: fe0f1cf8  str x30, [sp, #-0x40]!
0x06A29E08: f85f01a9  stp x24, x23, [sp, #0x10]
0x06A29E0C: f65702a9  stp x22, x21, [sp, #0x20]
0x06A29E10: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A29E14: 189800b0  adrp x24, #0x7d2a000
0x06A29E18: b66200b0  adrp x22, #0x767e000
0x06A29E1C: 576200d0  adrp x23, #0x7673000
0x06A29E20: 08975039  ldrb w8, [x24, #0x425]
0x06A29E24: d67a42f9  ldr x22, [x22, #0x4f0]
0x06A29E28: f75e40f9  ldr x23, [x23, #0xb8]
0x06A29E2C: f30302aa  mov x19, x2
0x06A29E30: f50301aa  mov x21, x1
0x06A29E34: f40300aa  mov x20, x0
0x06A29E38: 88010037  tbnz w8, #0, #0x6a29e68
0x06A29E3C: 206800d0  adrp x0, #0x772f000
0x06A29E40: 006c40f9  ldr x0, [x0, #0xd8]
0x06A29E44: f55a1d97  bl #0x3180a18
0x06A29E48: a06200b0  adrp x0, #0x767e000
0x06A29E4C: 007842f9  ldr x0, [x0, #0x4f0]
0x06A29E50: f25a1d97  bl #0x3180a18
0x06A29E54: 406200d0  adrp x0, #0x7673000
0x06A29E58: 005c40f9  ldr x0, [x0, #0xb8]
0x06A29E5C: ef5a1d97  bl #0x3180a18
0x06A29E60: 28008052  movz w8, #0x1
0x06A29E64: 08971039  strb w8, [x24, #0x425]
0x06A29E68: c00240f9  ldr x0, [x22]
0x06A29E6C: 386800d0  adrp x24, #0x772f000
0x06A29E70: 186f40f9  ldr x24, [x24, #0xd8]
0x06A29E74: 8b5b1d97  bl #0x3180ca0
0x06A29E78: e10315aa  mov x1, x21
0x06A29E7C: e2031faa  mov x2, xzr
0x06A29E80: f60300aa  mov x22, x0
0x06A29E84: 256ad797  bl #0x6004718
0x06A29E88: e00240f9  ldr x0, [x23]
0x06A29E8C: 08e040b9  ldr w8, [x0, #0xe0]
0x06A29E90: 68000035  cbnz w8, #0x6a29e9c
0x06A29E94: 3e5b1d97  bl #0x3180b8c
0x06A29E98: e00240f9  ldr x0, [x23]
0x06A29E9C: 085c40f9  ldr x8, [x0, #0xb8]
0x06A29EA0: 050340f9  ldr x5, [x24]
0x06A29EA4: e00314aa  mov x0, x20
0x06A29EA8: e10316aa  mov x1, x22
0x06A29EAC: 022140f9  ldr x2, [x8, #0x40]
0x06A29EB0: e30313aa  mov x3, x19
0x06A29EB4: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A29EB8: f65742a9  ldp x22, x21, [sp, #0x20]
0x06A29EBC: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06A29EC0: e4031faa  mov x4, xzr
0x06A29EC4: fe0744f8  ldr x30, [sp], #0x40
0x06A29EC8: 3ea3a517  b #0x5392bc0

; RVA 0x6A29ECC | public void .ctor(MergeItemWeakReference itemReference, RewardAmount rewardAmount, RewardDestination destination, RewardSource rewardSource) { }
; bytes=180 sha256=fcc7aceefec6d58809de21e8110f415a52883d96598cdfdbb2f09aaacf8d5d05 status=arm64_complete_bound indexed_start=True
0x06A29ECC: fe67bca9  stp x30, x25, [sp, #-0x40]!
0x06A29ED0: f85f01a9  stp x24, x23, [sp, #0x10]
0x06A29ED4: f65702a9  stp x22, x21, [sp, #0x20]
0x06A29ED8: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A29EDC: 199800b0  adrp x25, #0x7d2a000
0x06A29EE0: 586200d0  adrp x24, #0x7673000
0x06A29EE4: 289b5039  ldrb w8, [x25, #0x426]
0x06A29EE8: 185f40f9  ldr x24, [x24, #0xb8]
0x06A29EEC: f30304aa  mov x19, x4
0x06A29EF0: f50303aa  mov x21, x3
0x06A29EF4: f60302aa  mov x22, x2
0x06A29EF8: f70301aa  mov x23, x1
0x06A29EFC: f40300aa  mov x20, x0
0x06A29F00: 28010037  tbnz w8, #0, #0x6a29f24
0x06A29F04: 206800d0  adrp x0, #0x772f000
0x06A29F08: 006c40f9  ldr x0, [x0, #0xd8]
0x06A29F0C: c35a1d97  bl #0x3180a18
0x06A29F10: 406200d0  adrp x0, #0x7673000
0x06A29F14: 005c40f9  ldr x0, [x0, #0xb8]
0x06A29F18: c05a1d97  bl #0x3180a18
0x06A29F1C: 28008052  movz w8, #0x1
0x06A29F20: 289b1039  strb w8, [x25, #0x426]
0x06A29F24: 000340f9  ldr x0, [x24]
0x06A29F28: 396800d0  adrp x25, #0x772f000
0x06A29F2C: 08e040b9  ldr w8, [x0, #0xe0]
0x06A29F30: 396f40f9  ldr x25, [x25, #0xd8]
0x06A29F34: 68000035  cbnz w8, #0x6a29f40
0x06A29F38: 155b1d97  bl #0x3180b8c
0x06A29F3C: 000340f9  ldr x0, [x24]
0x06A29F40: 085c40f9  ldr x8, [x0, #0xb8]
0x06A29F44: 250340f9  ldr x5, [x25]
0x06A29F48: e00314aa  mov x0, x20
0x06A29F4C: e10317aa  mov x1, x23
0x06A29F50: 022140f9  ldr x2, [x8, #0x40]
0x06A29F54: e30316aa  mov x3, x22
0x06A29F58: e40315aa  mov x4, x21
0x06A29F5C: 19a3a597  bl #0x5392bc0
0x06A29F60: 930e04f8  str x19, [x20, #0x40]!
0x06A29F64: e00314aa  mov x0, x20
0x06A29F68: e10313aa  mov x1, x19
0x06A29F6C: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A29F70: f65742a9  ldp x22, x21, [sp, #0x20]
0x06A29F74: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06A29F78: fe67c4a8  ldp x30, x25, [sp], #0x40
0x06A29F7C: 925a1d17  b #0x31809c4

; RVA 0x6A29F80 | public override IRewardViewData Clone() { }
; bytes=188 sha256=b4473452704023b62128a439b47822f1d44bf118e340de44c941f3dbea1f9c0f status=arm64_complete_bound indexed_start=True
0x06A29F80: fe0f1cf8  str x30, [sp, #-0x40]!
0x06A29F84: f85f01a9  stp x24, x23, [sp, #0x10]
0x06A29F88: f65702a9  stp x22, x21, [sp, #0x20]
0x06A29F8C: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A29F90: 149800b0  adrp x20, #0x7d2a000
0x06A29F94: 889e5039  ldrb w8, [x20, #0x427]
0x06A29F98: f30300aa  mov x19, x0
0x06A29F9C: c8000037  tbnz w8, #0, #0x6a29fb4
0x06A29FA0: 20650090  adrp x0, #0x76cd000
0x06A29FA4: 00bc45f9  ldr x0, [x0, #0xb78]
0x06A29FA8: 9c5a1d97  bl #0x3180a18
0x06A29FAC: 28008052  movz w8, #0x1
0x06A29FB0: 889e1039  strb w8, [x20, #0x427]
0x06A29FB4: 601240f9  ldr x0, [x19, #0x20]
0x06A29FB8: 000400b4  cbz x0, #0x6a2a038
0x06A29FBC: 34650090  adrp x20, #0x76cd000
0x06A29FC0: 753240f9  ldr x21, [x19, #0x60]
0x06A29FC4: 94be45f9  ldr x20, [x20, #0xb78]
0x06A29FC8: e1031faa  mov x1, xzr
0x06A29FCC: 5ed8d797  bl #0x6020144
0x06A29FD0: 880240f9  ldr x8, [x20]
0x06A29FD4: 76de43a9  ldp x22, x23, [x19, #0x38]
0x06A29FD8: f80300aa  mov x24, x0
0x06A29FDC: e00308aa  mov x0, x8
0x06A29FE0: 305b1d97  bl #0x3180ca0
0x06A29FE4: e10315aa  mov x1, x21
0x06A29FE8: e20318aa  mov x2, x24
0x06A29FEC: e30316aa  mov x3, x22
0x06A29FF0: e40317aa  mov x4, x23
0x06A29FF4: f40300aa  mov x20, x0
0x06A29FF8: b5ffff97  bl #0x6a29ecc
0x06A29FFC: f40100b4  cbz x20, #0x6a2a038
0x06A2A000: 68ce4039  ldrb w8, [x19, #0x33]
0x06A2A004: e00314aa  mov x0, x20
0x06A2A008: 88ce0039  strb w8, [x20, #0x33]
0x06A2A00C: 68624039  ldrb w8, [x19, #0x18]
0x06A2A010: 88620039  strb w8, [x20, #0x18]
0x06A2A014: 613640f9  ldr x1, [x19, #0x68]
0x06A2A018: 018c06f8  str x1, [x0, #0x68]!
0x06A2A01C: 6a5a1d97  bl #0x31809c4
0x06A2A020: e00314aa  mov x0, x20
0x06A2A024: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A2A028: f65742a9  ldp x22, x21, [sp, #0x20]
0x06A2A02C: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06A2A030: fe0744f8  ldr x30, [sp], #0x40
0x06A2A034: c0035fd6  ret
0x06A2A038: 1d5b1d97  bl #0x3180cac

; RVA 0x6A2A03C | protected override string GetExtraLogData() { }
; bytes=120 sha256=7fd5ffcff4ef6691e0bcf806f3c4420d4b3bc745f2b179f081c77e463c91177a status=arm64_complete_bound indexed_start=True
0x06A2A03C: fe0f1df8  str x30, [sp, #-0x30]!
0x06A2A040: f65701a9  stp x22, x21, [sp, #0x10]
0x06A2A044: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A2A048: 15980090  adrp x21, #0x7d2a000
0x06A2A04C: 166500d0  adrp x22, #0x76cc000
0x06A2A050: 346800b0  adrp x20, #0x772f000
0x06A2A054: a8a25039  ldrb w8, [x21, #0x428]
0x06A2A058: d6d642f9  ldr x22, [x22, #0x5a8]
0x06A2A05C: 947240f9  ldr x20, [x20, #0xe0]
0x06A2A060: f30300aa  mov x19, x0
0x06A2A064: 28010037  tbnz w8, #0, #0x6a2a088
0x06A2A068: 006500d0  adrp x0, #0x76cc000
0x06A2A06C: 00d442f9  ldr x0, [x0, #0x5a8]
0x06A2A070: 6a5a1d97  bl #0x3180a18
0x06A2A074: 206800b0  adrp x0, #0x772f000
0x06A2A078: 007040f9  ldr x0, [x0, #0xe0]
0x06A2A07C: 675a1d97  bl #0x3180a18
0x06A2A080: 28008052  movz w8, #0x1
0x06A2A084: a8a21039  strb w8, [x21, #0x428]
0x06A2A088: c10240f9  ldr x1, [x22]
0x06A2A08C: e00313aa  mov x0, x19
0x06A2A090: 02a2a597  bl #0x5392898
0x06A2A094: 880240f9  ldr x8, [x20]
0x06A2A098: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A2A09C: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A2A0A0: e10300aa  mov x1, x0
0x06A2A0A4: e00308aa  mov x0, x8
0x06A2A0A8: e2031faa  mov x2, xzr
0x06A2A0AC: fe0743f8  ldr x30, [sp], #0x30
0x06A2A0B0: bc01ab17  b #0x54ea7a0

; RVA 0x6A2A0B4 | private AssetReferenceT<Sprite> Merger.Rewards.Interfaces.IRewardViewPresentable.get_SpriteReference() { }
; bytes=196 sha256=25f129772f272b72ed3c41c96c1fff8fe9f9e1b711254a53ee226b2fa5cd285e status=arm64_complete_bound indexed_start=True
0x06A2A0B4: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A2A0B8: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A2A0BC: 14980090  adrp x20, #0x7d2a000
0x06A2A0C0: 95620090  adrp x21, #0x767a000
0x06A2A0C4: 88a65039  ldrb w8, [x20, #0x429]
0x06A2A0C8: b5f643f9  ldr x21, [x21, #0x7e8]
0x06A2A0CC: f30300aa  mov x19, x0
0x06A2A0D0: 28010037  tbnz w8, #0, #0x6a2a0f4
0x06A2A0D4: a06200d0  adrp x0, #0x7680000
0x06A2A0D8: 004843f9  ldr x0, [x0, #0x690]
0x06A2A0DC: 4f5a1d97  bl #0x3180a18
0x06A2A0E0: 80620090  adrp x0, #0x767a000
0x06A2A0E4: 00f443f9  ldr x0, [x0, #0x7e8]
0x06A2A0E8: 4c5a1d97  bl #0x3180a18
0x06A2A0EC: 28008052  movz w8, #0x1
0x06A2A0F0: 88a61039  strb w8, [x20, #0x429]
0x06A2A0F4: a10240f9  ldr x1, [x21]
0x06A2A0F8: e00313aa  mov x0, x19
0x06A2A0FC: 47a0a597  bl #0x5392218
0x06A2A100: a00300b4  cbz x0, #0x6a2a174
0x06A2A104: aa6200d0  adrp x10, #0x7680000
0x06A2A108: 080040f9  ldr x8, [x0]
0x06A2A10C: 4a4943f9  ldr x10, [x10, #0x690]
0x06A2A110: f30300aa  mov x19, x0
0x06A2A114: 095d4279  ldrh w9, [x8, #0x12e]
0x06A2A118: 410140f9  ldr x1, [x10]
0x06A2A11C: 290100b4  cbz x9, #0x6a2a140
0x06A2A120: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A2A124: 4a210091  add x10, x10, #8
0x06A2A128: 4b815ff8  ldur x11, [x10, #-8]
0x06A2A12C: 7f0101eb  cmp x11, x1
0x06A2A130: 00010054  b.eq #0x6a2a150
0x06A2A134: 290500f1  subs x9, x9, #1
0x06A2A138: 4a410091  add x10, x10, #0x10
0x06A2A13C: 61ffff54  b.ne #0x6a2a128
0x06A2A140: 42008052  movz w2, #0x2
0x06A2A144: e00313aa  mov x0, x19
0x06A2A148: 72b21c97  bl #0x3156b10
0x06A2A14C: 05000014  b #0x6a2a160
0x06A2A150: 490140b9  ldr w9, [x10]
0x06A2A154: 29090011  add w9, w9, #2
0x06A2A158: 08d1298b  add x8, x8, w9, sxtw #4
0x06A2A15C: 00e10491  add x0, x8, #0x138
0x06A2A160: 020440a9  ldp x2, x1, [x0]
0x06A2A164: e00313aa  mov x0, x19
0x06A2A168: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A2A16C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A2A170: 40001fd6  br x2
0x06A2A174: ce5a1d97  bl #0x3180cac

; RVA 0x6A2A178 | public override bool get_ShouldHideIButton() { }
; bytes=8 sha256=2b59db05426e0f313d72b30f3398c65721de2562a59dc46ceeba224f98d0b876 status=arm64_complete_bound indexed_start=True
0x06A2A178: e0031f2a  mov w0, wzr
0x06A2A17C: c0035fd6  ret

; RVA 0x6A2A180 | public override bool get_HasCollectScreen() { }
; bytes=8 sha256=2b59db05426e0f313d72b30f3398c65721de2562a59dc46ceeba224f98d0b876 status=arm64_complete_bound indexed_start=True
0x06A2A180: e0031f2a  mov w0, wzr
0x06A2A184: c0035fd6  ret

; RVA 0x6A2A188 | public override bool get_ShowInfoButtonAfterContentLoad() { }
; bytes=248 sha256=34f520ac0b8712a29ad0e4c3b020fb77af7f2bbf44ab92f4a710856f9c81241f status=arm64_complete_bound indexed_start=True
0x06A2A188: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A2A18C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A2A190: 15980090  adrp x21, #0x7d2a000
0x06A2A194: 94620090  adrp x20, #0x767a000
0x06A2A198: a8aa5039  ldrb w8, [x21, #0x42a]
0x06A2A19C: 94f643f9  ldr x20, [x20, #0x7e8]
0x06A2A1A0: f30300aa  mov x19, x0
0x06A2A1A4: 88010037  tbnz w8, #0, #0x6a2a1d4
0x06A2A1A8: a0620090  adrp x0, #0x767e000
0x06A2A1AC: 00a442f9  ldr x0, [x0, #0x548]
0x06A2A1B0: 1a5a1d97  bl #0x3180a18
0x06A2A1B4: 80620090  adrp x0, #0x767a000
0x06A2A1B8: 00f443f9  ldr x0, [x0, #0x7e8]
0x06A2A1BC: 175a1d97  bl #0x3180a18
0x06A2A1C0: 806500d0  adrp x0, #0x76dc000
0x06A2A1C4: 00c840f9  ldr x0, [x0, #0x190]
0x06A2A1C8: 145a1d97  bl #0x3180a18
0x06A2A1CC: 28008052  movz w8, #0x1
0x06A2A1D0: a8aa1039  strb w8, [x21, #0x42a]
0x06A2A1D4: 810240f9  ldr x1, [x20]
0x06A2A1D8: 946500d0  adrp x20, #0x76dc000
0x06A2A1DC: 94ca40f9  ldr x20, [x20, #0x190]
0x06A2A1E0: e00313aa  mov x0, x19
0x06A2A1E4: 0da0a597  bl #0x5392218
0x06A2A1E8: 200400b4  cbz x0, #0x6a2a26c
0x06A2A1EC: aa620090  adrp x10, #0x767e000
0x06A2A1F0: 080040f9  ldr x8, [x0]
0x06A2A1F4: 4aa542f9  ldr x10, [x10, #0x548]
0x06A2A1F8: f30300aa  mov x19, x0
0x06A2A1FC: 095d4279  ldrh w9, [x8, #0x12e]
0x06A2A200: 410140f9  ldr x1, [x10]
0x06A2A204: 290100b4  cbz x9, #0x6a2a228
0x06A2A208: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A2A20C: 4a210091  add x10, x10, #8
0x06A2A210: 4b815ff8  ldur x11, [x10, #-8]
0x06A2A214: 7f0101eb  cmp x11, x1
0x06A2A218: 00010054  b.eq #0x6a2a238
0x06A2A21C: 290500f1  subs x9, x9, #1
0x06A2A220: 4a410091  add x10, x10, #0x10
0x06A2A224: 61ffff54  b.ne #0x6a2a210
0x06A2A228: c2038052  movz w2, #0x1e
0x06A2A22C: e00313aa  mov x0, x19
0x06A2A230: 38b21c97  bl #0x3156b10
0x06A2A234: 05000014  b #0x6a2a248
0x06A2A238: 490140b9  ldr w9, [x10]
0x06A2A23C: 29790011  add w9, w9, #0x1e
0x06A2A240: 08d1298b  add x8, x8, w9, sxtw #4
0x06A2A244: 00e10491  add x0, x8, #0x138
0x06A2A248: 080440a9  ldp x8, x1, [x0]
0x06A2A24C: e00313aa  mov x0, x19
0x06A2A250: 00013fd6  blr x8
0x06A2A254: c00000b4  cbz x0, #0x6a2a26c
0x06A2A258: 081440f9  ldr x8, [x0, #0x28]
0x06A2A25C: 680000b4  cbz x8, #0x6a2a268
0x06A2A260: 000940f9  ldr x0, [x8, #0x10]
0x06A2A264: 02000014  b #0x6a2a26c
0x06A2A268: e0031faa  mov x0, xzr
0x06A2A26C: 810240f9  ldr x1, [x20]
0x06A2A270: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A2A274: e2031faa  mov x2, xzr
0x06A2A278: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A2A27C: 7d01ab17  b #0x54ea870

; RVA 0x6A2A280 | public override string GetBottomText(RewardDisplayTextData rewardDisplayTextData) { }
; bytes=172 sha256=9f02883425241ea7068180f409cc2819a21533c16978b7f79d8365790942e4f7 status=arm64_complete_bound indexed_start=True
0x06A2A280: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A2A284: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A2A288: 15980090  adrp x21, #0x7d2a000
0x06A2A28C: a8ae5039  ldrb w8, [x21, #0x42b]
0x06A2A290: f30301aa  mov x19, x1
0x06A2A294: f40300aa  mov x20, x0
0x06A2A298: c8000037  tbnz w8, #0, #0x6a2a2b0
0x06A2A29C: 20610090  adrp x0, #0x764e000
0x06A2A2A0: 00ec42f9  ldr x0, [x0, #0x5d8]
0x06A2A2A4: dd591d97  bl #0x3180a18
0x06A2A2A8: 28008052  movz w8, #0x1
0x06A2A2AC: a8ae1039  strb w8, [x21, #0x42b]
0x06A2A2B0: 881240f9  ldr x8, [x20, #0x20]
0x06A2A2B4: a80300b4  cbz x8, #0x6a2a328
0x06A2A2B8: 081140b9  ldr w8, [x8, #0x10]
0x06A2A2BC: a8010035  cbnz w8, #0x6a2a2f0
0x06A2A2C0: e00314aa  mov x0, x20
0x06A2A2C4: e1031faa  mov x1, xzr
0x06A2A2C8: 0dd3d797  bl #0x601eefc
0x06A2A2CC: 1f040071  cmp w0, #1
0x06A2A2D0: 6d000054  b.le #0x6a2a2dc
0x06A2A2D4: b30000b5  cbnz x19, #0x6a2a2e8
0x06A2A2D8: 14000014  b #0x6a2a328
0x06A2A2DC: 730200b4  cbz x19, #0x6a2a328
0x06A2A2E0: 68424039  ldrb w8, [x19, #0x10]
0x06A2A2E4: 68000035  cbnz w8, #0x6a2a2f0
0x06A2A2E8: 68824039  ldrb w8, [x19, #0x20]
0x06A2A2EC: 28010034  cbz w8, #0x6a2a310
0x06A2A2F0: 28610090  adrp x8, #0x764e000
0x06A2A2F4: 08ed42f9  ldr x8, [x8, #0x5d8]
0x06A2A2F8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A2A2FC: 080140f9  ldr x8, [x8]
0x06A2A300: 085d40f9  ldr x8, [x8, #0xb8]
0x06A2A304: 000140f9  ldr x0, [x8]
0x06A2A308: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A2A30C: c0035fd6  ret
0x06A2A310: e00314aa  mov x0, x20
0x06A2A314: e10313aa  mov x1, x19
0x06A2A318: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A2A31C: e2031faa  mov x2, xzr
0x06A2A320: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A2A324: 10b5db17  b #0x6117764
0x06A2A328: 615a1d97  bl #0x3180cac

; RVA 0x6A2A32C | private IItem Merger.Rewards.Interfaces.Datas.IRewardItemViewData.get_Item() { }
; bytes=72 sha256=bf7a09e2f298908b27d4f3c130f3627d62714bbecaf60282a10e54f68ca93c90 status=arm64_complete_bound indexed_start=True
0x06A2A32C: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A2A330: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A2A334: 14980090  adrp x20, #0x7d2a000
0x06A2A338: 95620090  adrp x21, #0x767a000
0x06A2A33C: 88b25039  ldrb w8, [x20, #0x42c]
0x06A2A340: b5f643f9  ldr x21, [x21, #0x7e8]
0x06A2A344: f30300aa  mov x19, x0
0x06A2A348: c8000037  tbnz w8, #0, #0x6a2a360
0x06A2A34C: 80620090  adrp x0, #0x767a000
0x06A2A350: 00f443f9  ldr x0, [x0, #0x7e8]
0x06A2A354: b1591d97  bl #0x3180a18
0x06A2A358: 28008052  movz w8, #0x1
0x06A2A35C: 88b21039  strb w8, [x20, #0x42c]
0x06A2A360: a10240f9  ldr x1, [x21]
0x06A2A364: e00313aa  mov x0, x19
0x06A2A368: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A2A36C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A2A370: aa9fa517  b #0x5392218

