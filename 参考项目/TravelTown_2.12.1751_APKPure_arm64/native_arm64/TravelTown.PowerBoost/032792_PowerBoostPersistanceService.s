; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 32792 Merger.MergeBoard.PowerBoost.Services.PowerBoostPersistanceService
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6AD07A8 | public void Setup(string id) { }
; bytes=424 sha256=26f85ca874f1db0c4455916ef4ecf5fa7570ada9b93abf85e884ed0fc758344c status=arm64_complete_bound indexed_start=True
0x06AD07A8: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x06AD07AC: f65701a9  stp x22, x21, [sp, #0x10]
0x06AD07B0: f44f02a9  stp x20, x19, [sp, #0x20]
0x06AD07B4: d59200d0  adrp x21, #0x7d2a000
0x06AD07B8: a8066a39  ldrb w8, [x21, #0xa81]
0x06AD07BC: f40301aa  mov x20, x1
0x06AD07C0: f30300aa  mov x19, x0
0x06AD07C4: a8020037  tbnz w8, #0, #0x6ad0818
0x06AD07C8: e05c00b0  adrp x0, #0x766d000
0x06AD07CC: 006c46f9  ldr x0, [x0, #0xcd8]
0x06AD07D0: 92c01a97  bl #0x3180a18
0x06AD07D4: 006300f0  adrp x0, #0x7733000
0x06AD07D8: 001047f9  ldr x0, [x0, #0xe20]
0x06AD07DC: 8fc01a97  bl #0x3180a18
0x06AD07E0: 005c00b0  adrp x0, #0x7651000
0x06AD07E4: 00fc46f9  ldr x0, [x0, #0xdf8]
0x06AD07E8: 8cc01a97  bl #0x3180a18
0x06AD07EC: 20630090  adrp x0, #0x7734000
0x06AD07F0: 00b440f9  ldr x0, [x0, #0x168]
0x06AD07F4: 89c01a97  bl #0x3180a18
0x06AD07F8: 20630090  adrp x0, #0x7734000
0x06AD07FC: 00b840f9  ldr x0, [x0, #0x170]
0x06AD0800: 86c01a97  bl #0x3180a18
0x06AD0804: 005c0090  adrp x0, #0x7650000
0x06AD0808: 00dc41f9  ldr x0, [x0, #0x3b8]
0x06AD080C: 83c01a97  bl #0x3180a18
0x06AD0810: 28008052  movz w8, #0x1
0x06AD0814: a8062a39  strb w8, [x21, #0xa81]
0x06AD0818: e00314aa  mov x0, x20
0x06AD081C: e1031faa  mov x1, xzr
0x06AD0820: a39ca897  bl #0x54f7aac
0x06AD0824: 00040036  tbz w0, #0, #0x6ad08a4
0x06AD0828: 28630090  adrp x8, #0x7734000
0x06AD082C: 08b540f9  ldr x8, [x8, #0x168]
0x06AD0830: f35c00b0  adrp x19, #0x766d000
0x06AD0834: 736e46f9  ldr x19, [x19, #0xcd8]
0x06AD0838: 175c0090  adrp x23, #0x7650000
0x06AD083C: 000140f9  ldr x0, [x8]
0x06AD0840: 36630090  adrp x22, #0x7734000
0x06AD0844: 155c00b0  adrp x21, #0x7651000
0x06AD0848: f7de41f9  ldr x23, [x23, #0x3b8]
0x06AD084C: d6ba40f9  ldr x22, [x22, #0x170]
0x06AD0850: b5fe46f9  ldr x21, [x21, #0xdf8]
0x06AD0854: e10314aa  mov x1, x20
0x06AD0858: e2031faa  mov x2, xzr
0x06AD085C: d167a897  bl #0x54ea7a0
0x06AD0860: 680240f9  ldr x8, [x19]
0x06AD0864: f30300aa  mov x19, x0
0x06AD0868: 09e140b9  ldr w9, [x8, #0xe0]
0x06AD086C: 69000035  cbnz w9, #0x6ad0878
0x06AD0870: e00308aa  mov x0, x8
0x06AD0874: c6c01a97  bl #0x3180b8c
0x06AD0878: e10240f9  ldr x1, [x23]
0x06AD087C: c30240f9  ldr x3, [x22]
0x06AD0880: a40240f9  ldr x4, [x21]
0x06AD0884: e00313aa  mov x0, x19
0x06AD0888: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06AD088C: f65741a9  ldp x22, x21, [sp, #0x10]
0x06AD0890: e2031faa  mov x2, xzr
0x06AD0894: e5031faa  mov x5, xzr
0x06AD0898: e6031faa  mov x6, xzr
0x06AD089C: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x06AD08A0: e56ea617  b #0x546c434
0x06AD08A4: e00313aa  mov x0, x19
0x06AD08A8: 140c02f8  str x20, [x0, #0x20]!
0x06AD08AC: e10314aa  mov x1, x20
0x06AD08B0: 45c01a97  bl #0x31809c4
0x06AD08B4: e00313aa  mov x0, x19
0x06AD08B8: 26000094  bl #0x6ad0950
0x06AD08BC: 691a40f9  ldr x9, [x19, #0x30]
0x06AD08C0: 690400b4  cbz x9, #0x6ad094c
0x06AD08C4: 740a40f9  ldr x20, [x19, #0x10]
0x06AD08C8: 340400b4  cbz x20, #0x6ad094c
0x06AD08CC: 0a6300f0  adrp x10, #0x7733000
0x06AD08D0: 880240f9  ldr x8, [x20]
0x06AD08D4: 351140b9  ldr w21, [x9, #0x10]
0x06AD08D8: 4a1147f9  ldr x10, [x10, #0xe20]
0x06AD08DC: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD08E0: 410140f9  ldr x1, [x10]
0x06AD08E4: 290100b4  cbz x9, #0x6ad0908
0x06AD08E8: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD08EC: 4a210091  add x10, x10, #8
0x06AD08F0: 4b815ff8  ldur x11, [x10, #-8]
0x06AD08F4: 7f0101eb  cmp x11, x1
0x06AD08F8: 00010054  b.eq #0x6ad0918
0x06AD08FC: 290500f1  subs x9, x9, #1
0x06AD0900: 4a410091  add x10, x10, #0x10
0x06AD0904: 61ffff54  b.ne #0x6ad08f0
0x06AD0908: a2018052  movz w2, #0xd
0x06AD090C: e00314aa  mov x0, x20
0x06AD0910: 80181a97  bl #0x3156b10
0x06AD0914: 05000014  b #0x6ad0928
0x06AD0918: 490140b9  ldr w9, [x10]
0x06AD091C: 29350011  add w9, w9, #0xd
0x06AD0920: 08d1298b  add x8, x8, w9, sxtw #4
0x06AD0924: 00e10491  add x0, x8, #0x138
0x06AD0928: 080840a9  ldp x8, x2, [x0]
0x06AD092C: e00314aa  mov x0, x20
0x06AD0930: e103152a  mov w1, w21
0x06AD0934: 00013fd6  blr x8
0x06AD0938: e00313aa  mov x0, x19
0x06AD093C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06AD0940: f65741a9  ldp x22, x21, [sp, #0x10]
0x06AD0944: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x06AD0948: 72000014  b #0x6ad0b10
0x06AD094C: d8c01a97  bl #0x3180cac

; RVA 0x6AD0B10 | private void SubscribeToStateChanges() { }
; bytes=284 sha256=be9eb17766714a6961f114efcba98be088a7a953c670a11de472971cbea9c340 status=arm64_complete_bound indexed_start=True
0x06AD0B10: fe0f1df8  str x30, [sp, #-0x30]!
0x06AD0B14: f65701a9  stp x22, x21, [sp, #0x10]
0x06AD0B18: f44f02a9  stp x20, x19, [sp, #0x20]
0x06AD0B1C: d49200d0  adrp x20, #0x7d2a000
0x06AD0B20: 880a6a39  ldrb w8, [x20, #0xa82]
0x06AD0B24: f30300aa  mov x19, x0
0x06AD0B28: e8010037  tbnz w8, #0, #0x6ad0b64
0x06AD0B2C: 005d00f0  adrp x0, #0x7673000
0x06AD0B30: 001440f9  ldr x0, [x0, #0x28]
0x06AD0B34: b9bf1a97  bl #0x3180a18
0x06AD0B38: 405d00d0  adrp x0, #0x767a000
0x06AD0B3C: 00d447f9  ldr x0, [x0, #0xfa8]
0x06AD0B40: b6bf1a97  bl #0x3180a18
0x06AD0B44: 006300f0  adrp x0, #0x7733000
0x06AD0B48: 001047f9  ldr x0, [x0, #0xe20]
0x06AD0B4C: b3bf1a97  bl #0x3180a18
0x06AD0B50: 20630090  adrp x0, #0x7734000
0x06AD0B54: 00c440f9  ldr x0, [x0, #0x188]
0x06AD0B58: b0bf1a97  bl #0x3180a18
0x06AD0B5C: 28008052  movz w8, #0x1
0x06AD0B60: 880a2a39  strb w8, [x20, #0xa82]
0x06AD0B64: 740a40f9  ldr x20, [x19, #0x10]
0x06AD0B68: 140600b4  cbz x20, #0x6ad0c28
0x06AD0B6C: 0a6300f0  adrp x10, #0x7733000
0x06AD0B70: 880240f9  ldr x8, [x20]
0x06AD0B74: 4a1147f9  ldr x10, [x10, #0xe20]
0x06AD0B78: 165d00f0  adrp x22, #0x7673000
0x06AD0B7C: 35630090  adrp x21, #0x7734000
0x06AD0B80: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD0B84: 410140f9  ldr x1, [x10]
0x06AD0B88: d61640f9  ldr x22, [x22, #0x28]
0x06AD0B8C: b5c640f9  ldr x21, [x21, #0x188]
0x06AD0B90: 290100b4  cbz x9, #0x6ad0bb4
0x06AD0B94: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD0B98: 4a210091  add x10, x10, #8
0x06AD0B9C: 4b815ff8  ldur x11, [x10, #-8]
0x06AD0BA0: 7f0101eb  cmp x11, x1
0x06AD0BA4: 00010054  b.eq #0x6ad0bc4
0x06AD0BA8: 290500f1  subs x9, x9, #1
0x06AD0BAC: 4a410091  add x10, x10, #0x10
0x06AD0BB0: 61ffff54  b.ne #0x6ad0b9c
0x06AD0BB4: e00314aa  mov x0, x20
0x06AD0BB8: e2031f2a  mov w2, wzr
0x06AD0BBC: d5171a97  bl #0x3156b10
0x06AD0BC0: 04000014  b #0x6ad0bd0
0x06AD0BC4: 490180b9  ldrsw x9, [x10]
0x06AD0BC8: 0811098b  add x8, x8, x9, lsl #4
0x06AD0BCC: 00e10491  add x0, x8, #0x138
0x06AD0BD0: 080440a9  ldp x8, x1, [x0]
0x06AD0BD4: e00314aa  mov x0, x20
0x06AD0BD8: 00013fd6  blr x8
0x06AD0BDC: c80240f9  ldr x8, [x22]
0x06AD0BE0: f40300aa  mov x20, x0
0x06AD0BE4: e00308aa  mov x0, x8
0x06AD0BE8: 2ec01a97  bl #0x3180ca0
0x06AD0BEC: a20240f9  ldr x2, [x21]
0x06AD0BF0: e10313aa  mov x1, x19
0x06AD0BF4: e3031faa  mov x3, xzr
0x06AD0BF8: f50300aa  mov x21, x0
0x06AD0BFC: b03fa197  bl #0x5320abc
0x06AD0C00: 540100b4  cbz x20, #0x6ad0c28
0x06AD0C04: 485d00d0  adrp x8, #0x767a000
0x06AD0C08: 08d547f9  ldr x8, [x8, #0xfa8]
0x06AD0C0C: e00314aa  mov x0, x20
0x06AD0C10: e10315aa  mov x1, x21
0x06AD0C14: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06AD0C18: 020140f9  ldr x2, [x8]
0x06AD0C1C: f65741a9  ldp x22, x21, [sp, #0x10]
0x06AD0C20: fe0743f8  ldr x30, [sp], #0x30
0x06AD0C24: 43f68417  b #0x4c0e530
0x06AD0C28: 21c01a97  bl #0x3180cac

; RVA 0x6AD0C2C | private void System.IDisposable.Dispose() { }
; bytes=284 sha256=88d19e7881e074ee3c1b696fd917d77d84d5bc7cd0bacb8e3de2080b0671f73b status=arm64_complete_bound indexed_start=True
0x06AD0C2C: fe0f1df8  str x30, [sp, #-0x30]!
0x06AD0C30: f65701a9  stp x22, x21, [sp, #0x10]
0x06AD0C34: f44f02a9  stp x20, x19, [sp, #0x20]
0x06AD0C38: d49200d0  adrp x20, #0x7d2a000
0x06AD0C3C: 880e6a39  ldrb w8, [x20, #0xa83]
0x06AD0C40: f30300aa  mov x19, x0
0x06AD0C44: e8010037  tbnz w8, #0, #0x6ad0c80
0x06AD0C48: 005d00f0  adrp x0, #0x7673000
0x06AD0C4C: 001440f9  ldr x0, [x0, #0x28]
0x06AD0C50: 72bf1a97  bl #0x3180a18
0x06AD0C54: 605d00b0  adrp x0, #0x767d000
0x06AD0C58: 005442f9  ldr x0, [x0, #0x4a8]
0x06AD0C5C: 6fbf1a97  bl #0x3180a18
0x06AD0C60: 006300f0  adrp x0, #0x7733000
0x06AD0C64: 001047f9  ldr x0, [x0, #0xe20]
0x06AD0C68: 6cbf1a97  bl #0x3180a18
0x06AD0C6C: 20630090  adrp x0, #0x7734000
0x06AD0C70: 00c440f9  ldr x0, [x0, #0x188]
0x06AD0C74: 69bf1a97  bl #0x3180a18
0x06AD0C78: 28008052  movz w8, #0x1
0x06AD0C7C: 880e2a39  strb w8, [x20, #0xa83]
0x06AD0C80: 740a40f9  ldr x20, [x19, #0x10]
0x06AD0C84: 140600b4  cbz x20, #0x6ad0d44
0x06AD0C88: 0a6300f0  adrp x10, #0x7733000
0x06AD0C8C: 880240f9  ldr x8, [x20]
0x06AD0C90: 4a1147f9  ldr x10, [x10, #0xe20]
0x06AD0C94: 165d00f0  adrp x22, #0x7673000
0x06AD0C98: 35630090  adrp x21, #0x7734000
0x06AD0C9C: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD0CA0: 410140f9  ldr x1, [x10]
0x06AD0CA4: d61640f9  ldr x22, [x22, #0x28]
0x06AD0CA8: b5c640f9  ldr x21, [x21, #0x188]
0x06AD0CAC: 290100b4  cbz x9, #0x6ad0cd0
0x06AD0CB0: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD0CB4: 4a210091  add x10, x10, #8
0x06AD0CB8: 4b815ff8  ldur x11, [x10, #-8]
0x06AD0CBC: 7f0101eb  cmp x11, x1
0x06AD0CC0: 00010054  b.eq #0x6ad0ce0
0x06AD0CC4: 290500f1  subs x9, x9, #1
0x06AD0CC8: 4a410091  add x10, x10, #0x10
0x06AD0CCC: 61ffff54  b.ne #0x6ad0cb8
0x06AD0CD0: e00314aa  mov x0, x20
0x06AD0CD4: e2031f2a  mov w2, wzr
0x06AD0CD8: 8e171a97  bl #0x3156b10
0x06AD0CDC: 04000014  b #0x6ad0cec
0x06AD0CE0: 490180b9  ldrsw x9, [x10]
0x06AD0CE4: 0811098b  add x8, x8, x9, lsl #4
0x06AD0CE8: 00e10491  add x0, x8, #0x138
0x06AD0CEC: 080440a9  ldp x8, x1, [x0]
0x06AD0CF0: e00314aa  mov x0, x20
0x06AD0CF4: 00013fd6  blr x8
0x06AD0CF8: c80240f9  ldr x8, [x22]
0x06AD0CFC: f40300aa  mov x20, x0
0x06AD0D00: e00308aa  mov x0, x8
0x06AD0D04: e7bf1a97  bl #0x3180ca0
0x06AD0D08: a20240f9  ldr x2, [x21]
0x06AD0D0C: e10313aa  mov x1, x19
0x06AD0D10: e3031faa  mov x3, xzr
0x06AD0D14: f50300aa  mov x21, x0
0x06AD0D18: 693fa197  bl #0x5320abc
0x06AD0D1C: 540100b4  cbz x20, #0x6ad0d44
0x06AD0D20: 685d00b0  adrp x8, #0x767d000
0x06AD0D24: 085542f9  ldr x8, [x8, #0x4a8]
0x06AD0D28: e00314aa  mov x0, x20
0x06AD0D2C: e10315aa  mov x1, x21
0x06AD0D30: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06AD0D34: 020140f9  ldr x2, [x8]
0x06AD0D38: f65741a9  ldp x22, x21, [sp, #0x10]
0x06AD0D3C: fe0743f8  ldr x30, [sp], #0x30
0x06AD0D40: 27f68417  b #0x4c0e5dc
0x06AD0D44: dabf1a97  bl #0x3180cac

; RVA 0x6AD0D48 | private void OnPowerBoostModeChanged(int newValue) { }
; bytes=288 sha256=e6646be5b92dfd51af24c13387ed5697d0898f6d0af82477c499633d3674c364 status=arm64_complete_bound indexed_start=True
0x06AD0D48: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x06AD0D4C: f65701a9  stp x22, x21, [sp, #0x10]
0x06AD0D50: f44f02a9  stp x20, x19, [sp, #0x20]
0x06AD0D54: d59200d0  adrp x21, #0x7d2a000
0x06AD0D58: a8126a39  ldrb w8, [x21, #0xa84]
0x06AD0D5C: f403012a  mov w20, w1
0x06AD0D60: f30300aa  mov x19, x0
0x06AD0D64: 28010037  tbnz w8, #0, #0x6ad0d88
0x06AD0D68: 006300f0  adrp x0, #0x7733000
0x06AD0D6C: 001047f9  ldr x0, [x0, #0xe20]
0x06AD0D70: 2abf1a97  bl #0x3180a18
0x06AD0D74: e05b00d0  adrp x0, #0x764e000
0x06AD0D78: 000447f9  ldr x0, [x0, #0xe08]
0x06AD0D7C: 27bf1a97  bl #0x3180a18
0x06AD0D80: 28008052  movz w8, #0x1
0x06AD0D84: a8122a39  strb w8, [x21, #0xa84]
0x06AD0D88: 761a40f9  ldr x22, [x19, #0x30]
0x06AD0D8C: b60000b5  cbnz x22, #0x6ad0da0
0x06AD0D90: e00313aa  mov x0, x19
0x06AD0D94: effeff97  bl #0x6ad0950
0x06AD0D98: 761a40f9  ldr x22, [x19, #0x30]
0x06AD0D9C: d60500b4  cbz x22, #0x6ad0e54
0x06AD0DA0: 750a40f9  ldr x21, [x19, #0x10]
0x06AD0DA4: 150600b4  cbz x21, #0x6ad0e64
0x06AD0DA8: 0a6300f0  adrp x10, #0x7733000
0x06AD0DAC: a80240f9  ldr x8, [x21]
0x06AD0DB0: 4a1147f9  ldr x10, [x10, #0xe20]
0x06AD0DB4: f75b00d0  adrp x23, #0x764e000
0x06AD0DB8: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD0DBC: 410140f9  ldr x1, [x10]
0x06AD0DC0: f70647f9  ldr x23, [x23, #0xe08]
0x06AD0DC4: 290100b4  cbz x9, #0x6ad0de8
0x06AD0DC8: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD0DCC: 4a210091  add x10, x10, #8
0x06AD0DD0: 4b815ff8  ldur x11, [x10, #-8]
0x06AD0DD4: 7f0101eb  cmp x11, x1
0x06AD0DD8: 00010054  b.eq #0x6ad0df8
0x06AD0DDC: 290500f1  subs x9, x9, #1
0x06AD0DE0: 4a410091  add x10, x10, #0x10
0x06AD0DE4: 61ffff54  b.ne #0x6ad0dd0
0x06AD0DE8: 22008052  movz w2, #0x1
0x06AD0DEC: e00315aa  mov x0, x21
0x06AD0DF0: 48171a97  bl #0x3156b10
0x06AD0DF4: 05000014  b #0x6ad0e08
0x06AD0DF8: 490140b9  ldr w9, [x10]
0x06AD0DFC: 29050011  add w9, w9, #1
0x06AD0E00: 08d1298b  add x8, x8, w9, sxtw #4
0x06AD0E04: 00e10491  add x0, x8, #0x138
0x06AD0E08: 080440a9  ldp x8, x1, [x0]
0x06AD0E0C: e00315aa  mov x0, x21
0x06AD0E10: 00013fd6  blr x8
0x06AD0E14: e80240f9  ldr x8, [x23]
0x06AD0E18: f503002a  mov w21, w0
0x06AD0E1C: 09e140b9  ldr w9, [x8, #0xe0]
0x06AD0E20: 69000035  cbnz w9, #0x6ad0e2c
0x06AD0E24: e00308aa  mov x0, x8
0x06AD0E28: 59bf1a97  bl #0x3180b8c
0x06AD0E2C: e003142a  mov w0, w20
0x06AD0E30: e103152a  mov w1, w21
0x06AD0E34: e2031faa  mov x2, xzr
0x06AD0E38: 8019af97  bl #0x5697438
0x06AD0E3C: c01200b9  str w0, [x22, #0x10]
0x06AD0E40: e00313aa  mov x0, x19
0x06AD0E44: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06AD0E48: f65741a9  ldp x22, x21, [sp, #0x10]
0x06AD0E4C: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x06AD0E50: 06000014  b #0x6ad0e68
0x06AD0E54: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06AD0E58: f65741a9  ldp x22, x21, [sp, #0x10]
0x06AD0E5C: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x06AD0E60: c0035fd6  ret
0x06AD0E64: 92bf1a97  bl #0x3180cac

; RVA 0x6AD0950 | private void LoadData() { }
; bytes=448 sha256=7450598a78bc3c3451a193154bf772f7b3408ae4759c67e966cbb1707a9a4cf0 status=arm64_complete_bound indexed_start=True
0x06AD0950: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x06AD0954: f65701a9  stp x22, x21, [sp, #0x10]
0x06AD0958: f44f02a9  stp x20, x19, [sp, #0x20]
0x06AD095C: d49200d0  adrp x20, #0x7d2a000
0x06AD0960: 36630090  adrp x22, #0x7734000
0x06AD0964: 88166a39  ldrb w8, [x20, #0xa85]
0x06AD0968: d6be40f9  ldr x22, [x22, #0x178]
0x06AD096C: f30300aa  mov x19, x0
0x06AD0970: 48020037  tbnz w8, #0, #0x6ad09b8
0x06AD0974: 20630090  adrp x0, #0x7734000
0x06AD0978: 00c040f9  ldr x0, [x0, #0x180]
0x06AD097C: 27c01a97  bl #0x3180a18
0x06AD0980: 006300f0  adrp x0, #0x7733000
0x06AD0984: 001047f9  ldr x0, [x0, #0xe20]
0x06AD0988: 24c01a97  bl #0x3180a18
0x06AD098C: 405c00b0  adrp x0, #0x7659000
0x06AD0990: 000c45f9  ldr x0, [x0, #0xa18]
0x06AD0994: 21c01a97  bl #0x3180a18
0x06AD0998: 405c00b0  adrp x0, #0x7659000
0x06AD099C: 000845f9  ldr x0, [x0, #0xa10]
0x06AD09A0: 1ec01a97  bl #0x3180a18
0x06AD09A4: 20630090  adrp x0, #0x7734000
0x06AD09A8: 00bc40f9  ldr x0, [x0, #0x178]
0x06AD09AC: 1bc01a97  bl #0x3180a18
0x06AD09B0: 28008052  movz w8, #0x1
0x06AD09B4: 88162a39  strb w8, [x20, #0xa85]
0x06AD09B8: c00240f9  ldr x0, [x22]
0x06AD09BC: 755242a9  ldp x21, x20, [x19, #0x20]
0x06AD09C0: b8c01a97  bl #0x3180ca0
0x06AD09C4: f60300aa  mov x22, x0
0x06AD09C8: 81010094  bl #0x6ad0fcc
0x06AD09CC: 770a40f9  ldr x23, [x19, #0x10]
0x06AD09D0: f70900b4  cbz x23, #0x6ad0b0c
0x06AD09D4: 0a6300f0  adrp x10, #0x7733000
0x06AD09D8: e80240f9  ldr x8, [x23]
0x06AD09DC: 4a1147f9  ldr x10, [x10, #0xe20]
0x06AD09E0: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD09E4: 410140f9  ldr x1, [x10]
0x06AD09E8: 290100b4  cbz x9, #0x6ad0a0c
0x06AD09EC: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD09F0: 4a210091  add x10, x10, #8
0x06AD09F4: 4b815ff8  ldur x11, [x10, #-8]
0x06AD09F8: 7f0101eb  cmp x11, x1
0x06AD09FC: 00010054  b.eq #0x6ad0a1c
0x06AD0A00: 290500f1  subs x9, x9, #1
0x06AD0A04: 4a410091  add x10, x10, #0x10
0x06AD0A08: 61ffff54  b.ne #0x6ad09f4
0x06AD0A0C: 22008052  movz w2, #0x1
0x06AD0A10: e00317aa  mov x0, x23
0x06AD0A14: 3f181a97  bl #0x3156b10
0x06AD0A18: 05000014  b #0x6ad0a2c
0x06AD0A1C: 490140b9  ldr w9, [x10]
0x06AD0A20: 29050011  add w9, w9, #1
0x06AD0A24: 08d1298b  add x8, x8, w9, sxtw #4
0x06AD0A28: 00e10491  add x0, x8, #0x138
0x06AD0A2C: 080440a9  ldp x8, x1, [x0]
0x06AD0A30: e00317aa  mov x0, x23
0x06AD0A34: 00013fd6  blr x8
0x06AD0A38: b60600b4  cbz x22, #0x6ad0b0c
0x06AD0A3C: 485c00b0  adrp x8, #0x7659000
0x06AD0A40: 080945f9  ldr x8, [x8, #0xa10]
0x06AD0A44: c01200b9  str w0, [x22, #0x10]
0x06AD0A48: 575c00b0  adrp x23, #0x7659000
0x06AD0A4C: 000140f9  ldr x0, [x8]
0x06AD0A50: f70e45f9  ldr x23, [x23, #0xa18]
0x06AD0A54: 93c01a97  bl #0x3180ca0
0x06AD0A58: e10240f9  ldr x1, [x23]
0x06AD0A5C: f70300aa  mov x23, x0
0x06AD0A60: 79225597  bl #0x4019444
0x06AD0A64: e00316aa  mov x0, x22
0x06AD0A68: 178c01f8  str x23, [x0, #0x18]!
0x06AD0A6C: e10317aa  mov x1, x23
0x06AD0A70: d5bf1a97  bl #0x31809c4
0x06AD0A74: d40400b4  cbz x20, #0x6ad0b0c
0x06AD0A78: 29630090  adrp x9, #0x7734000
0x06AD0A7C: 29c140f9  ldr x9, [x9, #0x180]
0x06AD0A80: 880240f9  ldr x8, [x20]
0x06AD0A84: 370140f9  ldr x23, [x9]
0x06AD0A88: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD0A8C: e11240f9  ldr x1, [x23, #0x20]
0x06AD0A90: e2a24079  ldrh w2, [x23, #0x50]
0x06AD0A94: 290100b4  cbz x9, #0x6ad0ab8
0x06AD0A98: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD0A9C: 4a210091  add x10, x10, #8
0x06AD0AA0: 4b815ff8  ldur x11, [x10, #-8]
0x06AD0AA4: 7f0101eb  cmp x11, x1
0x06AD0AA8: e0000054  b.eq #0x6ad0ac4
0x06AD0AAC: 290500f1  subs x9, x9, #1
0x06AD0AB0: 4a410091  add x10, x10, #0x10
0x06AD0AB4: 61ffff54  b.ne #0x6ad0aa0
0x06AD0AB8: e00314aa  mov x0, x20
0x06AD0ABC: 15181a97  bl #0x3156b10
0x06AD0AC0: 05000014  b #0x6ad0ad4
0x06AD0AC4: 490140b9  ldr w9, [x10]
0x06AD0AC8: 2901020b  add w9, w9, w2
0x06AD0ACC: 08d1298b  add x8, x8, w9, sxtw #4
0x06AD0AD0: 00e10491  add x0, x8, #0x138
0x06AD0AD4: 000440f9  ldr x0, [x0, #8]
0x06AD0AD8: e10317aa  mov x1, x23
0x06AD0ADC: 73c20091  add x19, x19, #0x30
0x06AD0AE0: 2ac01a97  bl #0x3180b88
0x06AD0AE4: e40300aa  mov x4, x0
0x06AD0AE8: 050440f9  ldr x5, [x0, #8]
0x06AD0AEC: e00314aa  mov x0, x20
0x06AD0AF0: e10315aa  mov x1, x21
0x06AD0AF4: e20313aa  mov x2, x19
0x06AD0AF8: e30316aa  mov x3, x22
0x06AD0AFC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06AD0B00: f65741a9  ldp x22, x21, [sp, #0x10]
0x06AD0B04: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x06AD0B08: a0001fd6  br x5
0x06AD0B0C: 68c01a97  bl #0x3180cac

; RVA 0x6AD0E68 | private void SaveData() { }
; bytes=356 sha256=5733db5fe54f78256653d745a9bb3ff563ed086f4dce78f3d7eb9d5d9bcc0d4c status=arm64_complete_bound indexed_start=True
0x06AD0E68: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x06AD0E6C: f65701a9  stp x22, x21, [sp, #0x10]
0x06AD0E70: f44f02a9  stp x20, x19, [sp, #0x20]
0x06AD0E74: d39200d0  adrp x19, #0x7d2a000
0x06AD0E78: 681a6a39  ldrb w8, [x19, #0xa86]
0x06AD0E7C: f40300aa  mov x20, x0
0x06AD0E80: 28010037  tbnz w8, #0, #0x6ad0ea4
0x06AD0E84: 20630090  adrp x0, #0x7734000
0x06AD0E88: 00c840f9  ldr x0, [x0, #0x190]
0x06AD0E8C: e3be1a97  bl #0x3180a18
0x06AD0E90: 205d0090  adrp x0, #0x7674000
0x06AD0E94: 002041f9  ldr x0, [x0, #0x240]
0x06AD0E98: e0be1a97  bl #0x3180a18
0x06AD0E9C: 28008052  movz w8, #0x1
0x06AD0EA0: 681a2a39  strb w8, [x19, #0xa86]
0x06AD0EA4: 951a40f9  ldr x21, [x20, #0x30]
0x06AD0EA8: f50200b4  cbz x21, #0x6ad0f04
0x06AD0EAC: 960e40f9  ldr x22, [x20, #0x18]
0x06AD0EB0: d60800b4  cbz x22, #0x6ad0fc8
0x06AD0EB4: 29630090  adrp x9, #0x7734000
0x06AD0EB8: 29c940f9  ldr x9, [x9, #0x190]
0x06AD0EBC: c80240f9  ldr x8, [x22]
0x06AD0EC0: 944e42a9  ldp x20, x19, [x20, #0x20]
0x06AD0EC4: 370140f9  ldr x23, [x9]
0x06AD0EC8: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD0ECC: e11240f9  ldr x1, [x23, #0x20]
0x06AD0ED0: e2a24079  ldrh w2, [x23, #0x50]
0x06AD0ED4: 290100b4  cbz x9, #0x6ad0ef8
0x06AD0ED8: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD0EDC: 4a210091  add x10, x10, #8
0x06AD0EE0: 4b815ff8  ldur x11, [x10, #-8]
0x06AD0EE4: 7f0101eb  cmp x11, x1
0x06AD0EE8: 60010054  b.eq #0x6ad0f14
0x06AD0EEC: 290500f1  subs x9, x9, #1
0x06AD0EF0: 4a410091  add x10, x10, #0x10
0x06AD0EF4: 61ffff54  b.ne #0x6ad0ee0
0x06AD0EF8: e00316aa  mov x0, x22
0x06AD0EFC: 05171a97  bl #0x3156b10
0x06AD0F00: 09000014  b #0x6ad0f24
0x06AD0F04: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06AD0F08: f65741a9  ldp x22, x21, [sp, #0x10]
0x06AD0F0C: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x06AD0F10: c0035fd6  ret
0x06AD0F14: 490140b9  ldr w9, [x10]
0x06AD0F18: 2901020b  add w9, w9, w2
0x06AD0F1C: 08d1298b  add x8, x8, w9, sxtw #4
0x06AD0F20: 00e10491  add x0, x8, #0x138
0x06AD0F24: 000440f9  ldr x0, [x0, #8]
0x06AD0F28: e10317aa  mov x1, x23
0x06AD0F2C: 17bf1a97  bl #0x3180b88
0x06AD0F30: 080440f9  ldr x8, [x0, #8]
0x06AD0F34: e20300aa  mov x2, x0
0x06AD0F38: e00316aa  mov x0, x22
0x06AD0F3C: e10315aa  mov x1, x21
0x06AD0F40: 00013fd6  blr x8
0x06AD0F44: 330400b4  cbz x19, #0x6ad0fc8
0x06AD0F48: 2a5d0090  adrp x10, #0x7674000
0x06AD0F4C: 680240f9  ldr x8, [x19]
0x06AD0F50: 4a2141f9  ldr x10, [x10, #0x240]
0x06AD0F54: f50300aa  mov x21, x0
0x06AD0F58: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD0F5C: 410140f9  ldr x1, [x10]
0x06AD0F60: 290100b4  cbz x9, #0x6ad0f84
0x06AD0F64: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD0F68: 4a210091  add x10, x10, #8
0x06AD0F6C: 4b815ff8  ldur x11, [x10, #-8]
0x06AD0F70: 7f0101eb  cmp x11, x1
0x06AD0F74: 00010054  b.eq #0x6ad0f94
0x06AD0F78: 290500f1  subs x9, x9, #1
0x06AD0F7C: 4a410091  add x10, x10, #0x10
0x06AD0F80: 61ffff54  b.ne #0x6ad0f6c
0x06AD0F84: e2008052  movz w2, #0x7
0x06AD0F88: e00313aa  mov x0, x19
0x06AD0F8C: e1161a97  bl #0x3156b10
0x06AD0F90: 05000014  b #0x6ad0fa4
0x06AD0F94: 490140b9  ldr w9, [x10]
0x06AD0F98: 291d0011  add w9, w9, #7
0x06AD0F9C: 08d1298b  add x8, x8, w9, sxtw #4
0x06AD0FA0: 00e10491  add x0, x8, #0x138
0x06AD0FA4: 051040a9  ldp x5, x4, [x0]
0x06AD0FA8: e00313aa  mov x0, x19
0x06AD0FAC: e10314aa  mov x1, x20
0x06AD0FB0: e20315aa  mov x2, x21
0x06AD0FB4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06AD0FB8: f65741a9  ldp x22, x21, [sp, #0x10]
0x06AD0FBC: 23008052  movz w3, #0x1
0x06AD0FC0: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x06AD0FC4: a0001fd6  br x5
0x06AD0FC8: 39bf1a97  bl #0x3180cac

; RVA 0x6AD1054 | public bool IsBoostLocallyUnlocked(int boostMode) { }
; bytes=192 sha256=9232a8a3d57d9dcd59c89e1a94535586466bf57646ff219fb401afb28f25c8e9 status=arm64_complete_bound indexed_start=True
0x06AD1054: ffc300d1  sub sp, sp, #0x30
0x06AD1058: fe5701a9  stp x30, x21, [sp, #0x10]
0x06AD105C: f44f02a9  stp x20, x19, [sp, #0x20]
0x06AD1060: d59200b0  adrp x21, #0x7d2a000
0x06AD1064: a81e6a39  ldrb w8, [x21, #0xa87]
0x06AD1068: f303012a  mov w19, w1
0x06AD106C: f40300aa  mov x20, x0
0x06AD1070: 88010037  tbnz w8, #0, #0x6ad10a0
0x06AD1074: 405e00d0  adrp x0, #0x769b000
0x06AD1078: 000c46f9  ldr x0, [x0, #0xc18]
0x06AD107C: 67be1a97  bl #0x3180a18
0x06AD1080: 005c0090  adrp x0, #0x7651000
0x06AD1084: 005441f9  ldr x0, [x0, #0x2a8]
0x06AD1088: 64be1a97  bl #0x3180a18
0x06AD108C: 005c0090  adrp x0, #0x7651000
0x06AD1090: 001042f9  ldr x0, [x0, #0x420]
0x06AD1094: 61be1a97  bl #0x3180a18
0x06AD1098: 28008052  movz w8, #0x1
0x06AD109C: a81e2a39  strb w8, [x21, #0xa87]
0x06AD10A0: 881a40f9  ldr x8, [x20, #0x30]
0x06AD10A4: a80000b5  cbnz x8, #0x6ad10b8
0x06AD10A8: e00314aa  mov x0, x20
0x06AD10AC: 29feff97  bl #0x6ad0950
0x06AD10B0: 881a40f9  ldr x8, [x20, #0x30]
0x06AD10B4: 680200b4  cbz x8, #0x6ad1100
0x06AD10B8: 000d40f9  ldr x0, [x8, #0x18]
0x06AD10BC: 400200b4  cbz x0, #0x6ad1104
0x06AD10C0: 485e00d0  adrp x8, #0x769b000
0x06AD10C4: 080d46f9  ldr x8, [x8, #0xc18]
0x06AD10C8: 145c0090  adrp x20, #0x7651000
0x06AD10CC: e103132a  mov w1, w19
0x06AD10D0: 020140f9  ldr x2, [x8]
0x06AD10D4: 941242f9  ldr x20, [x20, #0x420]
0x06AD10D8: ce235597  bl #0x401a010
0x06AD10DC: 820240f9  ldr x2, [x20]
0x06AD10E0: 01000012  and w1, w0, #1
0x06AD10E4: e0330091  add x0, sp, #0xc
0x06AD10E8: ff1b0079  strh wzr, [sp, #0xc]
0x06AD10EC: 4a995e97  bl #0x4277614
0x06AD10F0: e81b4079  ldrh w8, [sp, #0xc]
0x06AD10F4: 1ffd0371  cmp w8, #0xff
0x06AD10F8: e0979f1a  cset w0, hi
0x06AD10FC: 02000014  b #0x6ad1104
0x06AD1100: e0031f2a  mov w0, wzr
0x06AD1104: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06AD1108: fe5741a9  ldp x30, x21, [sp, #0x10]
0x06AD110C: ffc30091  add sp, sp, #0x30
0x06AD1110: c0035fd6  ret

; RVA 0x6AD1114 | public void MarkBoostAsUnlocked(int boostMode) { }
; bytes=252 sha256=67270ba679b9447b57d1462090a47f51a31afaf255fffd12f34d161a69235413 status=arm64_complete_bound indexed_start=True
0x06AD1114: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06AD1118: f44f01a9  stp x20, x19, [sp, #0x10]
0x06AD111C: d59200b0  adrp x21, #0x7d2a000
0x06AD1120: a8226a39  ldrb w8, [x21, #0xa88]
0x06AD1124: f403012a  mov w20, w1
0x06AD1128: f30300aa  mov x19, x0
0x06AD112C: 28010037  tbnz w8, #0, #0x6ad1150
0x06AD1130: 405c0090  adrp x0, #0x7659000
0x06AD1134: 006445f9  ldr x0, [x0, #0xac8]
0x06AD1138: 38be1a97  bl #0x3180a18
0x06AD113C: 405e00d0  adrp x0, #0x769b000
0x06AD1140: 000c46f9  ldr x0, [x0, #0xc18]
0x06AD1144: 35be1a97  bl #0x3180a18
0x06AD1148: 28008052  movz w8, #0x1
0x06AD114C: a8222a39  strb w8, [x21, #0xa88]
0x06AD1150: 681a40f9  ldr x8, [x19, #0x30]
0x06AD1154: a80000b5  cbnz x8, #0x6ad1168
0x06AD1158: e00313aa  mov x0, x19
0x06AD115C: fdfdff97  bl #0x6ad0950
0x06AD1160: 681a40f9  ldr x8, [x19, #0x30]
0x06AD1164: 280100b4  cbz x8, #0x6ad1188
0x06AD1168: 000d40f9  ldr x0, [x8, #0x18]
0x06AD116C: 000500b4  cbz x0, #0x6ad120c
0x06AD1170: 485e00d0  adrp x8, #0x769b000
0x06AD1174: 080d46f9  ldr x8, [x8, #0xc18]
0x06AD1178: e103142a  mov w1, w20
0x06AD117C: 020140f9  ldr x2, [x8]
0x06AD1180: a4235597  bl #0x401a010
0x06AD1184: 80000036  tbz w0, #0, #0x6ad1194
0x06AD1188: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06AD118C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06AD1190: c0035fd6  ret
0x06AD1194: 681a40f9  ldr x8, [x19, #0x30]
0x06AD1198: a80300b4  cbz x8, #0x6ad120c
0x06AD119C: 000d40f9  ldr x0, [x8, #0x18]
0x06AD11A0: 600300b4  cbz x0, #0x6ad120c
0x06AD11A4: 495c0090  adrp x9, #0x7659000
0x06AD11A8: 296545f9  ldr x9, [x9, #0xac8]
0x06AD11AC: 0a1c40b9  ldr w10, [x0, #0x1c]
0x06AD11B0: 080840f9  ldr x8, [x0, #0x10]
0x06AD11B4: 290140f9  ldr x9, [x9]
0x06AD11B8: 4a050011  add w10, w10, #1
0x06AD11BC: 0a1c00b9  str w10, [x0, #0x1c]
0x06AD11C0: 680200b4  cbz x8, #0x6ad120c
0x06AD11C4: 0a1880b9  ldrsw x10, [x0, #0x18]
0x06AD11C8: 0b1940b9  ldr w11, [x8, #0x18]
0x06AD11CC: 5f010b6b  cmp w10, w11
0x06AD11D0: c2000054  b.hs #0x6ad11e8
0x06AD11D4: 49050011  add w9, w10, #1
0x06AD11D8: 08090a8b  add x8, x8, x10, lsl #2
0x06AD11DC: 091800b9  str w9, [x0, #0x18]
0x06AD11E0: 142100b9  str w20, [x8, #0x20]
0x06AD11E4: 06000014  b #0x6ad11fc
0x06AD11E8: 281140f9  ldr x8, [x9, #0x20]
0x06AD11EC: e103142a  mov w1, w20
0x06AD11F0: 086140f9  ldr x8, [x8, #0xc0]
0x06AD11F4: 023940f9  ldr x2, [x8, #0x70]
0x06AD11F8: a8225597  bl #0x4019c98
0x06AD11FC: e00313aa  mov x0, x19
0x06AD1200: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06AD1204: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06AD1208: 18ffff17  b #0x6ad0e68
0x06AD120C: a8be1a97  bl #0x3180cac

; RVA 0x6AD1210 | public bool WasTooltipShownForBoost(int boostMode) { }
; bytes=120 sha256=bdf60dedbb8d988623ec5215c6abd051bd51d70de7e7dd4abf3ffae2d5e253d8 status=arm64_complete_bound indexed_start=True
0x06AD1210: ffc300d1  sub sp, sp, #0x30
0x06AD1214: fe5701a9  stp x30, x21, [sp, #0x10]
0x06AD1218: f44f02a9  stp x20, x19, [sp, #0x20]
0x06AD121C: d59200b0  adrp x21, #0x7d2a000
0x06AD1220: a8266a39  ldrb w8, [x21, #0xa89]
0x06AD1224: f303012a  mov w19, w1
0x06AD1228: f40300aa  mov x20, x0
0x06AD122C: c8000037  tbnz w8, #0, #0x6ad1244
0x06AD1230: 606000d0  adrp x0, #0x76df000
0x06AD1234: 002444f9  ldr x0, [x0, #0x848]
0x06AD1238: f8bd1a97  bl #0x3180a18
0x06AD123C: 28008052  movz w8, #0x1
0x06AD1240: a8262a39  strb w8, [x21, #0xa89]
0x06AD1244: ff330039  strb wzr, [sp, #0xc]
0x06AD1248: 801e40f9  ldr x0, [x20, #0x38]
0x06AD124C: c00100b4  cbz x0, #0x6ad1284
0x06AD1250: 686000d0  adrp x8, #0x76df000
0x06AD1254: 082544f9  ldr x8, [x8, #0x848]
0x06AD1258: e2330091  add x2, sp, #0xc
0x06AD125C: e103132a  mov w1, w19
0x06AD1260: 030140f9  ldr x3, [x8]
0x06AD1264: 0e2c8d97  bl #0x4e1c29c
0x06AD1268: e8334039  ldrb w8, [sp, #0xc]
0x06AD126C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06AD1270: fe5741a9  ldp x30, x21, [sp, #0x10]
0x06AD1274: 0800080a  and w8, w0, w8
0x06AD1278: 00010012  and w0, w8, #1
0x06AD127C: ffc30091  add sp, sp, #0x30
0x06AD1280: c0035fd6  ret
0x06AD1284: 8abe1a97  bl #0x3180cac

; RVA 0x6AD1288 | public void MarkTooltipAsShownForBoost(int boostMode) { }
; bytes=92 sha256=bb240c25e0f4c334a9843bcad1f56449044acfaacfb42845eaef7d24311def9b status=arm64_complete_bound indexed_start=True
0x06AD1288: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06AD128C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06AD1290: d59200b0  adrp x21, #0x7d2a000
0x06AD1294: a82a6a39  ldrb w8, [x21, #0xa8a]
0x06AD1298: f303012a  mov w19, w1
0x06AD129C: f40300aa  mov x20, x0
0x06AD12A0: c8000037  tbnz w8, #0, #0x6ad12b8
0x06AD12A4: 606000d0  adrp x0, #0x76df000
0x06AD12A8: 002c44f9  ldr x0, [x0, #0x858]
0x06AD12AC: dbbd1a97  bl #0x3180a18
0x06AD12B0: 28008052  movz w8, #0x1
0x06AD12B4: a82a2a39  strb w8, [x21, #0xa8a]
0x06AD12B8: 801e40f9  ldr x0, [x20, #0x38]
0x06AD12BC: 200100b4  cbz x0, #0x6ad12e0
0x06AD12C0: 686000d0  adrp x8, #0x76df000
0x06AD12C4: 082d44f9  ldr x8, [x8, #0x858]
0x06AD12C8: e103132a  mov w1, w19
0x06AD12CC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06AD12D0: 22008052  movz w2, #0x1
0x06AD12D4: 030140f9  ldr x3, [x8]
0x06AD12D8: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06AD12DC: 7f258d17  b #0x4e1a8d8
0x06AD12E0: 73be1a97  bl #0x3180cac

; RVA 0x6AD12E4 | public void .ctor() { }
; bytes=224 sha256=ee476d10057b40ed3a917965a913568c1cd38c1c9d36f20c3c35fde04b33e983 status=arm64_complete_bound indexed_start=True
0x06AD12E4: fe0f1cf8  str x30, [sp, #-0x40]!
0x06AD12E8: f85f01a9  stp x24, x23, [sp, #0x10]
0x06AD12EC: f65702a9  stp x22, x21, [sp, #0x20]
0x06AD12F0: f44f03a9  stp x20, x19, [sp, #0x30]
0x06AD12F4: d79200b0  adrp x23, #0x7d2a000
0x06AD12F8: 185d00f0  adrp x24, #0x7674000
0x06AD12FC: 746000d0  adrp x20, #0x76df000
0x06AD1300: 766000d0  adrp x22, #0x76df000
0x06AD1304: 756000d0  adrp x21, #0x76df000
0x06AD1308: e82e6a39  ldrb w8, [x23, #0xa8b]
0x06AD130C: 183b41f9  ldr x24, [x24, #0x270]
0x06AD1310: 946647f9  ldr x20, [x20, #0xec8]
0x06AD1314: d63244f9  ldr x22, [x22, #0x860]
0x06AD1318: b52a44f9  ldr x21, [x21, #0x850]
0x06AD131C: f30300aa  mov x19, x0
0x06AD1320: e8010037  tbnz w8, #0, #0x6ad135c
0x06AD1324: 606000d0  adrp x0, #0x76df000
0x06AD1328: 002844f9  ldr x0, [x0, #0x850]
0x06AD132C: bbbd1a97  bl #0x3180a18
0x06AD1330: 606000d0  adrp x0, #0x76df000
0x06AD1334: 003044f9  ldr x0, [x0, #0x860]
0x06AD1338: b8bd1a97  bl #0x3180a18
0x06AD133C: 005d00f0  adrp x0, #0x7674000
0x06AD1340: 003841f9  ldr x0, [x0, #0x270]
0x06AD1344: b5bd1a97  bl #0x3180a18
0x06AD1348: 606000d0  adrp x0, #0x76df000
0x06AD134C: 006447f9  ldr x0, [x0, #0xec8]
0x06AD1350: b2bd1a97  bl #0x3180a18
0x06AD1354: 28008052  movz w8, #0x1
0x06AD1358: e82e2a39  strb w8, [x23, #0xa8b]
0x06AD135C: 000340f9  ldr x0, [x24]
0x06AD1360: 50be1a97  bl #0x3180ca0
0x06AD1364: 810240f9  ldr x1, [x20]
0x06AD1368: e2031faa  mov x2, xzr
0x06AD136C: f40300aa  mov x20, x0
0x06AD1370: 8df4fc97  bl #0x6a0e5a4
0x06AD1374: e00313aa  mov x0, x19
0x06AD1378: 148c02f8  str x20, [x0, #0x28]!
0x06AD137C: e10314aa  mov x1, x20
0x06AD1380: 91bd1a97  bl #0x31809c4
0x06AD1384: c00240f9  ldr x0, [x22]
0x06AD1388: 46be1a97  bl #0x3180ca0
0x06AD138C: a10240f9  ldr x1, [x21]
0x06AD1390: f40300aa  mov x20, x0
0x06AD1394: d8218d97  bl #0x4e19af4
0x06AD1398: e00313aa  mov x0, x19
0x06AD139C: 148c03f8  str x20, [x0, #0x38]!
0x06AD13A0: e10314aa  mov x1, x20
0x06AD13A4: 88bd1a97  bl #0x31809c4
0x06AD13A8: e00313aa  mov x0, x19
0x06AD13AC: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06AD13B0: f65742a9  ldp x22, x21, [sp, #0x20]
0x06AD13B4: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06AD13B8: e1031faa  mov x1, xzr
0x06AD13BC: fe0744f8  ldr x30, [sp], #0x40
0x06AD13C0: 8f24b017  b #0x56da5fc

