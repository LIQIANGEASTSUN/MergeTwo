; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25873 Merger.MergeBoard.Logic.BoardOperations.BoardOperationActionsBuilder
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A8E064 | public IBoardOperationActionsBuilder SetAction(Entity entity, string destination) { }
; bytes=96 sha256=3c7caa0f9fd0549a1dbde1fe710ce080178228be80e0b49e63765057f0fa1f70 status=arm64_complete_bound indexed_start=True
0x06A8E064: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x06A8E068: f65701a9  stp x22, x21, [sp, #0x10]
0x06A8E06C: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A8E070: f6940090  adrp x22, #0x7d2a000
0x06A8E074: 975f0090  adrp x23, #0x767e000
0x06A8E078: c8265f39  ldrb w8, [x22, #0x7c9]
0x06A8E07C: f7fe42f9  ldr x23, [x23, #0x5f8]
0x06A8E080: f30302aa  mov x19, x2
0x06A8E084: f40301aa  mov x20, x1
0x06A8E088: f50300aa  mov x21, x0
0x06A8E08C: c8000037  tbnz w8, #0, #0x6a8e0a4
0x06A8E090: 805f0090  adrp x0, #0x767e000
0x06A8E094: 00fc42f9  ldr x0, [x0, #0x5f8]
0x06A8E098: 60ca1b97  bl #0x3180a18
0x06A8E09C: 28008052  movz w8, #0x1
0x06A8E0A0: c8261f39  strb w8, [x22, #0x7c9]
0x06A8E0A4: e20240f9  ldr x2, [x23]
0x06A8E0A8: e00315aa  mov x0, x21
0x06A8E0AC: e10314aa  mov x1, x20
0x06A8E0B0: e30313aa  mov x3, x19
0x06A8E0B4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A8E0B8: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A8E0BC: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x06A8E0C0: 01000014  b #0x6a8e0c4

; RVA 0x6A8E238 | public IBoardOperationActionsBuilder RemoveAction(Entity entity, string destination) { }
; bytes=96 sha256=59b537ec0d7f01ac8ebe729e04518c827a83d5d643d59adc8aa42a2d9144db76 status=arm64_complete_bound indexed_start=True
0x06A8E238: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x06A8E23C: f65701a9  stp x22, x21, [sp, #0x10]
0x06A8E240: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A8E244: f6940090  adrp x22, #0x7d2a000
0x06A8E248: f75e00b0  adrp x23, #0x766b000
0x06A8E24C: c82a5f39  ldrb w8, [x22, #0x7ca]
0x06A8E250: f7b240f9  ldr x23, [x23, #0x160]
0x06A8E254: f30302aa  mov x19, x2
0x06A8E258: f40301aa  mov x20, x1
0x06A8E25C: f50300aa  mov x21, x0
0x06A8E260: c8000037  tbnz w8, #0, #0x6a8e278
0x06A8E264: e05e00b0  adrp x0, #0x766b000
0x06A8E268: 00b040f9  ldr x0, [x0, #0x160]
0x06A8E26C: ebc91b97  bl #0x3180a18
0x06A8E270: 28008052  movz w8, #0x1
0x06A8E274: c82a1f39  strb w8, [x22, #0x7ca]
0x06A8E278: e20240f9  ldr x2, [x23]
0x06A8E27C: e00315aa  mov x0, x21
0x06A8E280: e10314aa  mov x1, x20
0x06A8E284: e30313aa  mov x3, x19
0x06A8E288: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A8E28C: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A8E290: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x06A8E294: 8cffff17  b #0x6a8e0c4

; RVA 0x6A8E298 | public IBoardOperationActionsBuilder UpdateAction(Entity entity, string destination) { }
; bytes=96 sha256=71eab1cc117f9027bc7c90ee9f22c0530ae0ceb20ed706bf14f2c6a3ae1bbb18 status=arm64_complete_bound indexed_start=True
0x06A8E298: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x06A8E29C: f65701a9  stp x22, x21, [sp, #0x10]
0x06A8E2A0: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A8E2A4: f6940090  adrp x22, #0x7d2a000
0x06A8E2A8: 575f00d0  adrp x23, #0x7678000
0x06A8E2AC: c82e5f39  ldrb w8, [x22, #0x7cb]
0x06A8E2B0: f7d247f9  ldr x23, [x23, #0xfa0]
0x06A8E2B4: f30302aa  mov x19, x2
0x06A8E2B8: f40301aa  mov x20, x1
0x06A8E2BC: f50300aa  mov x21, x0
0x06A8E2C0: c8000037  tbnz w8, #0, #0x6a8e2d8
0x06A8E2C4: 405f00d0  adrp x0, #0x7678000
0x06A8E2C8: 00d047f9  ldr x0, [x0, #0xfa0]
0x06A8E2CC: d3c91b97  bl #0x3180a18
0x06A8E2D0: 28008052  movz w8, #0x1
0x06A8E2D4: c82e1f39  strb w8, [x22, #0x7cb]
0x06A8E2D8: e20240f9  ldr x2, [x23]
0x06A8E2DC: e00315aa  mov x0, x21
0x06A8E2E0: e10314aa  mov x1, x20
0x06A8E2E4: e30313aa  mov x3, x19
0x06A8E2E8: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A8E2EC: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A8E2F0: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x06A8E2F4: 74ffff17  b #0x6a8e0c4

; RVA 0x6A8E2F8 | public IBoardOperationActionsBuilder WithExtraData(ExtraData extraData) { }
; bytes=36 sha256=5ca600e19a049468b2de59daae9e5ebe775c4b80b39a1ef7eebe2b79d7208825 status=arm64_complete_bound indexed_start=True
0x06A8E2F8: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x06A8E2FC: f30300aa  mov x19, x0
0x06A8E300: 001040f9  ldr x0, [x0, #0x20]
0x06A8E304: 600000b4  cbz x0, #0x6a8e310
0x06A8E308: 010c02f8  str x1, [x0, #0x20]!
0x06A8E30C: aec91b97  bl #0x31809c4
0x06A8E310: e00313aa  mov x0, x19
0x06A8E314: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x06A8E318: c0035fd6  ret

; RVA 0x6A8E31C | public List<MergeBoardItemNotificationData> Build() { }
; bytes=200 sha256=729c0b8fd3612031a4e85cfc608fb49773e9b7a3e9d3cecdd2ca394cc2565fd9 status=arm64_complete_bound indexed_start=True
0x06A8E31C: fe0f1df8  str x30, [sp, #-0x30]!
0x06A8E320: f65701a9  stp x22, x21, [sp, #0x10]
0x06A8E324: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A8E328: f5940090  adrp x21, #0x7d2a000
0x06A8E32C: 966100f0  adrp x22, #0x76c1000
0x06A8E330: 146500f0  adrp x20, #0x7731000
0x06A8E334: a8325f39  ldrb w8, [x21, #0x7cc]
0x06A8E338: d60247f9  ldr x22, [x22, #0xe00]
0x06A8E33C: 947a47f9  ldr x20, [x20, #0xef0]
0x06A8E340: f30300aa  mov x19, x0
0x06A8E344: 88010037  tbnz w8, #0, #0x6a8e374
0x06A8E348: 006500f0  adrp x0, #0x7731000
0x06A8E34C: 007c47f9  ldr x0, [x0, #0xef8]
0x06A8E350: b2c91b97  bl #0x3180a18
0x06A8E354: 006500f0  adrp x0, #0x7731000
0x06A8E358: 007847f9  ldr x0, [x0, #0xef0]
0x06A8E35C: afc91b97  bl #0x3180a18
0x06A8E360: 806100f0  adrp x0, #0x76c1000
0x06A8E364: 000047f9  ldr x0, [x0, #0xe00]
0x06A8E368: acc91b97  bl #0x3180a18
0x06A8E36C: 28008052  movz w8, #0x1
0x06A8E370: a8321f39  strb w8, [x21, #0x7cc]
0x06A8E374: c00240f9  ldr x0, [x22]
0x06A8E378: 750e40f9  ldr x21, [x19, #0x18]
0x06A8E37C: 49ca1b97  bl #0x3180ca0
0x06A8E380: 820240f9  ldr x2, [x20]
0x06A8E384: e10315aa  mov x1, x21
0x06A8E388: f40300aa  mov x20, x0
0x06A8E38C: 75d65697  bl #0x4043d60
0x06A8E390: 680e40f9  ldr x8, [x19, #0x18]
0x06A8E394: 680200b4  cbz x8, #0x6a8e3e0
0x06A8E398: 02254329  ldp w2, w9, [x8, #0x18]
0x06A8E39C: 29050011  add w9, w9, #1
0x06A8E3A0: 5f040071  cmp w2, #1
0x06A8E3A4: 1f250329  stp wzr, w9, [x8, #0x18]
0x06A8E3A8: ab000054  b.lt #0x6a8e3bc
0x06A8E3AC: 000940f9  ldr x0, [x8, #0x10]
0x06A8E3B0: e1031f2a  mov w1, wzr
0x06A8E3B4: e3031faa  mov x3, xzr
0x06A8E3B8: 31aeb097  bl #0x56b9c7c
0x06A8E3BC: 7f0e02f8  str xzr, [x19, #0x20]!
0x06A8E3C0: e00313aa  mov x0, x19
0x06A8E3C4: e1031faa  mov x1, xzr
0x06A8E3C8: 7fc91b97  bl #0x31809c4
0x06A8E3CC: e00314aa  mov x0, x20
0x06A8E3D0: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A8E3D4: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A8E3D8: fe0743f8  ldr x30, [sp], #0x30
0x06A8E3DC: c0035fd6  ret
0x06A8E3E0: 33ca1b97  bl #0x3180cac

; RVA 0x6A8E0C4 | private IBoardOperationActionsBuilder AddAction(Entity entity, string action, string destination) { }
; bytes=372 sha256=9f0fd05279ed007353ddbdb9aeecb767bead8615e1d670cd00a26aea086776af status=arm64_complete_bound indexed_start=True
0x06A8E0C4: fe0f1cf8  str x30, [sp, #-0x40]!
0x06A8E0C8: f85f01a9  stp x24, x23, [sp, #0x10]
0x06A8E0CC: f65702a9  stp x22, x21, [sp, #0x20]
0x06A8E0D0: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A8E0D4: f7940090  adrp x23, #0x7d2a000
0x06A8E0D8: e8365f39  ldrb w8, [x23, #0x7cd]
0x06A8E0DC: f40303aa  mov x20, x3
0x06A8E0E0: f50302aa  mov x21, x2
0x06A8E0E4: f60301aa  mov x22, x1
0x06A8E0E8: f30300aa  mov x19, x0
0x06A8E0EC: 28010037  tbnz w8, #0, #0x6a8e110
0x06A8E0F0: 806100f0  adrp x0, #0x76c1000
0x06A8E0F4: 00e846f9  ldr x0, [x0, #0xdd0]
0x06A8E0F8: 48ca1b97  bl #0x3180a18
0x06A8E0FC: 806100f0  adrp x0, #0x76c1000
0x06A8E100: 00f446f9  ldr x0, [x0, #0xde8]
0x06A8E104: 45ca1b97  bl #0x3180a18
0x06A8E108: 28008052  movz w8, #0x1
0x06A8E10C: e8361f39  strb w8, [x23, #0x7cd]
0x06A8E110: 770a40f9  ldr x23, [x19, #0x10]
0x06A8E114: 170900b4  cbz x23, #0x6a8e234
0x06A8E118: 896100f0  adrp x9, #0x76c1000
0x06A8E11C: 29e946f9  ldr x9, [x9, #0xdd0]
0x06A8E120: e80240f9  ldr x8, [x23]
0x06A8E124: 380140f9  ldr x24, [x9]
0x06A8E128: 095d4279  ldrh w9, [x8, #0x12e]
0x06A8E12C: 011340f9  ldr x1, [x24, #0x20]
0x06A8E130: 02a34079  ldrh w2, [x24, #0x50]
0x06A8E134: 290100b4  cbz x9, #0x6a8e158
0x06A8E138: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A8E13C: 4a210091  add x10, x10, #8
0x06A8E140: 4b815ff8  ldur x11, [x10, #-8]
0x06A8E144: 7f0101eb  cmp x11, x1
0x06A8E148: e0000054  b.eq #0x6a8e164
0x06A8E14C: 290500f1  subs x9, x9, #1
0x06A8E150: 4a410091  add x10, x10, #0x10
0x06A8E154: 61ffff54  b.ne #0x6a8e140
0x06A8E158: e00317aa  mov x0, x23
0x06A8E15C: 6d221b97  bl #0x3156b10
0x06A8E160: 05000014  b #0x6a8e174
0x06A8E164: 490140b9  ldr w9, [x10]
0x06A8E168: 2901020b  add w9, w9, w2
0x06A8E16C: 08d1298b  add x8, x8, w9, sxtw #4
0x06A8E170: 00e10491  add x0, x8, #0x138
0x06A8E174: 000440f9  ldr x0, [x0, #8]
0x06A8E178: e10318aa  mov x1, x24
0x06A8E17C: 83ca1b97  bl #0x3180b88
0x06A8E180: 080440f9  ldr x8, [x0, #8]
0x06A8E184: e40300aa  mov x4, x0
0x06A8E188: e00317aa  mov x0, x23
0x06A8E18C: e10316aa  mov x1, x22
0x06A8E190: e20315aa  mov x2, x21
0x06A8E194: e30314aa  mov x3, x20
0x06A8E198: 00013fd6  blr x8
0x06A8E19C: 680e40f9  ldr x8, [x19, #0x18]
0x06A8E1A0: a80400b4  cbz x8, #0x6a8e234
0x06A8E1A4: 8a6100f0  adrp x10, #0x76c1000
0x06A8E1A8: 4af546f9  ldr x10, [x10, #0xde8]
0x06A8E1AC: 0b1d40b9  ldr w11, [x8, #0x1c]
0x06A8E1B0: 090940f9  ldr x9, [x8, #0x10]
0x06A8E1B4: 4a0140f9  ldr x10, [x10]
0x06A8E1B8: 6b050011  add w11, w11, #1
0x06A8E1BC: 0b1d00b9  str w11, [x8, #0x1c]
0x06A8E1C0: a90300b4  cbz x9, #0x6a8e234
0x06A8E1C4: 0b1980b9  ldrsw x11, [x8, #0x18]
0x06A8E1C8: 2c1940b9  ldr w12, [x9, #0x18]
0x06A8E1CC: f40300aa  mov x20, x0
0x06A8E1D0: 7f010c6b  cmp w11, w12
0x06A8E1D4: 02010054  b.hs #0x6a8e1f4
0x06A8E1D8: 6a050011  add w10, w11, #1
0x06A8E1DC: 200d0b8b  add x0, x9, x11, lsl #3
0x06A8E1E0: 0a1900b9  str w10, [x8, #0x18]
0x06A8E1E4: 140c02f8  str x20, [x0, #0x20]!
0x06A8E1E8: e10314aa  mov x1, x20
0x06A8E1EC: f6c91b97  bl #0x31809c4
0x06A8E1F0: 07000014  b #0x6a8e20c
0x06A8E1F4: 491140f9  ldr x9, [x10, #0x20]
0x06A8E1F8: e00308aa  mov x0, x8
0x06A8E1FC: e10314aa  mov x1, x20
0x06A8E200: 296140f9  ldr x9, [x9, #0xc0]
0x06A8E204: 223940f9  ldr x2, [x9, #0x70]
0x06A8E208: 99d85697  bl #0x404446c
0x06A8E20C: e00313aa  mov x0, x19
0x06A8E210: 140c02f8  str x20, [x0, #0x20]!
0x06A8E214: e10314aa  mov x1, x20
0x06A8E218: ebc91b97  bl #0x31809c4
0x06A8E21C: e00313aa  mov x0, x19
0x06A8E220: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A8E224: f65742a9  ldp x22, x21, [sp, #0x20]
0x06A8E228: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06A8E22C: fe0744f8  ldr x30, [sp], #0x40
0x06A8E230: c0035fd6  ret
0x06A8E234: 9eca1b97  bl #0x3180cac

; RVA 0x6A8E3E4 | public void .ctor() { }
; bytes=136 sha256=592d970b85f5d048915c5778dd0a19229283111cbf216f245aed8edf71115825 status=arm64_complete_bound indexed_start=True
0x06A8E3E4: fe0f1df8  str x30, [sp, #-0x30]!
0x06A8E3E8: f65701a9  stp x22, x21, [sp, #0x10]
0x06A8E3EC: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A8E3F0: f5940090  adrp x21, #0x7d2a000
0x06A8E3F4: 966100f0  adrp x22, #0x76c1000
0x06A8E3F8: 946100f0  adrp x20, #0x76c1000
0x06A8E3FC: a83a5f39  ldrb w8, [x21, #0x7ce]
0x06A8E400: d60247f9  ldr x22, [x22, #0xe00]
0x06A8E404: 94fe46f9  ldr x20, [x20, #0xdf8]
0x06A8E408: f30300aa  mov x19, x0
0x06A8E40C: 28010037  tbnz w8, #0, #0x6a8e430
0x06A8E410: 806100f0  adrp x0, #0x76c1000
0x06A8E414: 00fc46f9  ldr x0, [x0, #0xdf8]
0x06A8E418: 80c91b97  bl #0x3180a18
0x06A8E41C: 806100f0  adrp x0, #0x76c1000
0x06A8E420: 000047f9  ldr x0, [x0, #0xe00]
0x06A8E424: 7dc91b97  bl #0x3180a18
0x06A8E428: 28008052  movz w8, #0x1
0x06A8E42C: a83a1f39  strb w8, [x21, #0x7ce]
0x06A8E430: c00240f9  ldr x0, [x22]
0x06A8E434: 1bca1b97  bl #0x3180ca0
0x06A8E438: 810240f9  ldr x1, [x20]
0x06A8E43C: f40300aa  mov x20, x0
0x06A8E440: fed55697  bl #0x4043c38
0x06A8E444: e00313aa  mov x0, x19
0x06A8E448: 148c01f8  str x20, [x0, #0x18]!
0x06A8E44C: e10314aa  mov x1, x20
0x06A8E450: 5dc91b97  bl #0x31809c4
0x06A8E454: e00313aa  mov x0, x19
0x06A8E458: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A8E45C: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A8E460: e1031faa  mov x1, xzr
0x06A8E464: fe0743f8  ldr x30, [sp], #0x30
0x06A8E468: 6530b117  b #0x56da5fc

