; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 33625 Merger.ProducerExcitement.Services.ChannelListeners.ProducerExcitementCreatedChannelListener
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6AD8A18 | public string get_ChannelName() { }
; bytes=64 sha256=ea0549a85d2bd7b1ed9b551e3f29f495f5a5c93797d1480c036aa084a4dffb07 status=arm64_complete_bound indexed_start=True
0x06AD8A18: fe0f1ef8  str x30, [sp, #-0x20]!
0x06AD8A1C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06AD8A20: 939200d0  adrp x19, #0x7d2a000
0x06AD8A24: f4620090  adrp x20, #0x7734000
0x06AD8A28: 689e6b39  ldrb w8, [x19, #0xae7]
0x06AD8A2C: 945642f9  ldr x20, [x20, #0x4a8]
0x06AD8A30: c8000037  tbnz w8, #0, #0x6ad8a48
0x06AD8A34: e0620090  adrp x0, #0x7734000
0x06AD8A38: 005442f9  ldr x0, [x0, #0x4a8]
0x06AD8A3C: f79f1a97  bl #0x3180a18
0x06AD8A40: 28008052  movz w8, #0x1
0x06AD8A44: 689e2b39  strb w8, [x19, #0xae7]
0x06AD8A48: 800240f9  ldr x0, [x20]
0x06AD8A4C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06AD8A50: fe0742f8  ldr x30, [sp], #0x20
0x06AD8A54: c0035fd6  ret

; RVA 0x6AD5000 | public void .ctor(ISignalBus signalBus, IJsonService jsonService, IGameSessionModel gameSessionModel) { }
; bytes=96 sha256=7d7846c34ab03d0af65089d0f220554aaeb6efdbaa2653fe20cd65930b5e1761 status=arm64_complete_bound indexed_start=True
0x06AD5000: fe0f1df8  str x30, [sp, #-0x30]!
0x06AD5004: f65701a9  stp x22, x21, [sp, #0x10]
0x06AD5008: f44f02a9  stp x20, x19, [sp, #0x20]
0x06AD500C: f50301aa  mov x21, x1
0x06AD5010: e1031faa  mov x1, xzr
0x06AD5014: f30303aa  mov x19, x3
0x06AD5018: f40302aa  mov x20, x2
0x06AD501C: f60300aa  mov x22, x0
0x06AD5020: 7715b097  bl #0x56da5fc
0x06AD5024: e00316aa  mov x0, x22
0x06AD5028: 158c01f8  str x21, [x0, #0x18]!
0x06AD502C: e10315aa  mov x1, x21
0x06AD5030: 65ae1a97  bl #0x31809c4
0x06AD5034: e00316aa  mov x0, x22
0x06AD5038: 140c01f8  str x20, [x0, #0x10]!
0x06AD503C: e10314aa  mov x1, x20
0x06AD5040: 61ae1a97  bl #0x31809c4
0x06AD5044: d30e02f8  str x19, [x22, #0x20]!
0x06AD5048: e00316aa  mov x0, x22
0x06AD504C: e10313aa  mov x1, x19
0x06AD5050: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06AD5054: f65741a9  ldp x22, x21, [sp, #0x10]
0x06AD5058: fe0743f8  ldr x30, [sp], #0x30
0x06AD505C: 5aae1a17  b #0x31809c4

; RVA 0x6AD8A58 | public void HandleMessage(BackendMessageNotification message) { }
; bytes=888 sha256=ee7d933b696c541bea09f3a3f76a38a50a73093c31e0506e1827a7dac7c926ab status=arm64_complete_bound indexed_start=True
0x06AD8A58: ff4301d1  sub sp, sp, #0x50
0x06AD8A5C: fe1300f9  str x30, [sp, #0x20]
0x06AD8A60: f65703a9  stp x22, x21, [sp, #0x30]
0x06AD8A64: f44f04a9  stp x20, x19, [sp, #0x40]
0x06AD8A68: 959200d0  adrp x21, #0x7d2a000
0x06AD8A6C: a8a26b39  ldrb w8, [x21, #0xae8]
0x06AD8A70: f40301aa  mov x20, x1
0x06AD8A74: f30300aa  mov x19, x0
0x06AD8A78: 48020037  tbnz w8, #0, #0x6ad8ac0
0x06AD8A7C: a05c00f0  adrp x0, #0x766f000
0x06AD8A80: 001842f9  ldr x0, [x0, #0x430]
0x06AD8A84: e59f1a97  bl #0x3180a18
0x06AD8A88: c05c00d0  adrp x0, #0x7672000
0x06AD8A8C: 006043f9  ldr x0, [x0, #0x6c0]
0x06AD8A90: e29f1a97  bl #0x3180a18
0x06AD8A94: e0620090  adrp x0, #0x7734000
0x06AD8A98: 005842f9  ldr x0, [x0, #0x4b0]
0x06AD8A9C: df9f1a97  bl #0x3180a18
0x06AD8AA0: e0620090  adrp x0, #0x7734000
0x06AD8AA4: 005c42f9  ldr x0, [x0, #0x4b8]
0x06AD8AA8: dc9f1a97  bl #0x3180a18
0x06AD8AAC: e0620090  adrp x0, #0x7734000
0x06AD8AB0: 006042f9  ldr x0, [x0, #0x4c0]
0x06AD8AB4: d99f1a97  bl #0x3180a18
0x06AD8AB8: 28008052  movz w8, #0x1
0x06AD8ABC: a8a22b39  strb w8, [x21, #0xae8]
0x06AD8AC0: 751240f9  ldr x21, [x19, #0x20]
0x06AD8AC4: b51600b4  cbz x21, #0x6ad8d98
0x06AD8AC8: ca5c00d0  adrp x10, #0x7672000
0x06AD8ACC: a80240f9  ldr x8, [x21]
0x06AD8AD0: 4a6143f9  ldr x10, [x10, #0x6c0]
0x06AD8AD4: b65c00f0  adrp x22, #0x766f000
0x06AD8AD8: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD8ADC: 410140f9  ldr x1, [x10]
0x06AD8AE0: d61a42f9  ldr x22, [x22, #0x430]
0x06AD8AE4: 290100b4  cbz x9, #0x6ad8b08
0x06AD8AE8: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD8AEC: 4a210091  add x10, x10, #8
0x06AD8AF0: 4b815ff8  ldur x11, [x10, #-8]
0x06AD8AF4: 7f0101eb  cmp x11, x1
0x06AD8AF8: 00010054  b.eq #0x6ad8b18
0x06AD8AFC: 290500f1  subs x9, x9, #1
0x06AD8B00: 4a410091  add x10, x10, #0x10
0x06AD8B04: 61ffff54  b.ne #0x6ad8af0
0x06AD8B08: 02018052  movz w2, #0x8
0x06AD8B0C: e00315aa  mov x0, x21
0x06AD8B10: 00f81997  bl #0x3156b10
0x06AD8B14: 05000014  b #0x6ad8b28
0x06AD8B18: 490140b9  ldr w9, [x10]
0x06AD8B1C: 29210011  add w9, w9, #8
0x06AD8B20: 08d1298b  add x8, x8, w9, sxtw #4
0x06AD8B24: 00e10491  add x0, x8, #0x138
0x06AD8B28: 080440a9  ldp x8, x1, [x0]
0x06AD8B2C: e00315aa  mov x0, x21
0x06AD8B30: 00013fd6  blr x8
0x06AD8B34: c10240f9  ldr x1, [x22]
0x06AD8B38: 69d58497  bl #0x4c0e0dc
0x06AD8B3C: e00a0036  tbz w0, #0, #0x6ad8c98
0x06AD8B40: 740b00b4  cbz x20, #0x6ad8cac
0x06AD8B44: 801240f9  ldr x0, [x20, #0x20]
0x06AD8B48: 400b00b4  cbz x0, #0x6ad8cb0
0x06AD8B4C: 080040f9  ldr x8, [x0]
0x06AD8B50: 740a40f9  ldr x20, [x19, #0x10]
0x06AD8B54: 098556a9  ldp x9, x1, [x8, #0x168]
0x06AD8B58: 20013fd6  blr x9
0x06AD8B5C: d40a00b4  cbz x20, #0x6ad8cb4
0x06AD8B60: e9620090  adrp x9, #0x7734000
0x06AD8B64: 295942f9  ldr x9, [x9, #0x4b0]
0x06AD8B68: 880240f9  ldr x8, [x20]
0x06AD8B6C: f50300aa  mov x21, x0
0x06AD8B70: 360140f9  ldr x22, [x9]
0x06AD8B74: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD8B78: c11240f9  ldr x1, [x22, #0x20]
0x06AD8B7C: c2a24079  ldrh w2, [x22, #0x50]
0x06AD8B80: 290100b4  cbz x9, #0x6ad8ba4
0x06AD8B84: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD8B88: 4a210091  add x10, x10, #8
0x06AD8B8C: 4b815ff8  ldur x11, [x10, #-8]
0x06AD8B90: 7f0101eb  cmp x11, x1
0x06AD8B94: e0000054  b.eq #0x6ad8bb0
0x06AD8B98: 290500f1  subs x9, x9, #1
0x06AD8B9C: 4a410091  add x10, x10, #0x10
0x06AD8BA0: 61ffff54  b.ne #0x6ad8b8c
0x06AD8BA4: e00314aa  mov x0, x20
0x06AD8BA8: daf71997  bl #0x3156b10
0x06AD8BAC: 05000014  b #0x6ad8bc0
0x06AD8BB0: 490140b9  ldr w9, [x10]
0x06AD8BB4: 2901020b  add w9, w9, w2
0x06AD8BB8: 08d1298b  add x8, x8, w9, sxtw #4
0x06AD8BBC: 00e10491  add x0, x8, #0x138
0x06AD8BC0: 000440f9  ldr x0, [x0, #8]
0x06AD8BC4: e10316aa  mov x1, x22
0x06AD8BC8: f09f1a97  bl #0x3180b88
0x06AD8BCC: 080440f9  ldr x8, [x0, #8]
0x06AD8BD0: e20300aa  mov x2, x0
0x06AD8BD4: e00314aa  mov x0, x20
0x06AD8BD8: e10315aa  mov x1, x21
0x06AD8BDC: 00013fd6  blr x8
0x06AD8BE0: f50300aa  mov x21, x0
0x06AD8BE4: a00500b4  cbz x0, #0x6ad8c98
0x06AD8BE8: e8620090  adrp x8, #0x7734000
0x06AD8BEC: 730e40f9  ldr x19, [x19, #0x18]
0x06AD8BF0: 086142f9  ldr x8, [x8, #0x4c0]
0x06AD8BF4: 000140f9  ldr x0, [x8]
0x06AD8BF8: 2aa01a97  bl #0x3180ca0
0x06AD8BFC: f40300aa  mov x20, x0
0x06AD8C00: e1031faa  mov x1, xzr
0x06AD8C04: 7e06b097  bl #0x56da5fc
0x06AD8C08: e00314aa  mov x0, x20
0x06AD8C0C: 150c01f8  str x21, [x0, #0x10]!
0x06AD8C10: e10315aa  mov x1, x21
0x06AD8C14: 6c9f1a97  bl #0x31809c4
0x06AD8C18: 130500b4  cbz x19, #0x6ad8cb8
0x06AD8C1C: e9620090  adrp x9, #0x7734000
0x06AD8C20: 295d42f9  ldr x9, [x9, #0x4b8]
0x06AD8C24: 680240f9  ldr x8, [x19]
0x06AD8C28: 350140f9  ldr x21, [x9]
0x06AD8C2C: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD8C30: a11240f9  ldr x1, [x21, #0x20]
0x06AD8C34: a2a24079  ldrh w2, [x21, #0x50]
0x06AD8C38: 290100b4  cbz x9, #0x6ad8c5c
0x06AD8C3C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD8C40: 4a210091  add x10, x10, #8
0x06AD8C44: 4b815ff8  ldur x11, [x10, #-8]
0x06AD8C48: 7f0101eb  cmp x11, x1
0x06AD8C4C: e0000054  b.eq #0x6ad8c68
0x06AD8C50: 290500f1  subs x9, x9, #1
0x06AD8C54: 4a410091  add x10, x10, #0x10
0x06AD8C58: 61ffff54  b.ne #0x6ad8c44
0x06AD8C5C: e00313aa  mov x0, x19
0x06AD8C60: acf71997  bl #0x3156b10
0x06AD8C64: 05000014  b #0x6ad8c78
0x06AD8C68: 490140b9  ldr w9, [x10]
0x06AD8C6C: 2901020b  add w9, w9, w2
0x06AD8C70: 08d1298b  add x8, x8, w9, sxtw #4
0x06AD8C74: 00e10491  add x0, x8, #0x138
0x06AD8C78: 000440f9  ldr x0, [x0, #8]
0x06AD8C7C: e10315aa  mov x1, x21
0x06AD8C80: c29f1a97  bl #0x3180b88
0x06AD8C84: 080440f9  ldr x8, [x0, #8]
0x06AD8C88: e20300aa  mov x2, x0
0x06AD8C8C: e00313aa  mov x0, x19
0x06AD8C90: e10314aa  mov x1, x20
0x06AD8C94: 00013fd6  blr x8
0x06AD8C98: f44f44a9  ldp x20, x19, [sp, #0x40]
0x06AD8C9C: f65743a9  ldp x22, x21, [sp, #0x30]
0x06AD8CA0: fe1340f9  ldr x30, [sp, #0x20]
0x06AD8CA4: ff430191  add sp, sp, #0x50
0x06AD8CA8: c0035fd6  ret
0x06AD8CAC: 00a01a97  bl #0x3180cac
0x06AD8CB0: ff9f1a97  bl #0x3180cac
0x06AD8CB4: fe9f1a97  bl #0x3180cac
0x06AD8CB8: fd9f1a97  bl #0x3180cac
0x06AD8CBC: 04000014  b #0x6ad8ccc
0x06AD8CC0: 03000014  b #0x6ad8ccc
0x06AD8CC4: 02000014  b #0x6ad8ccc
0x06AD8CC8: 01000014  b #0x6ad8ccc
0x06AD8CCC: f30300aa  mov x19, x0
0x06AD8CD0: 3f040071  cmp w1, #1
0x06AD8CD4: 81070054  b.ne #0x6ad8dc4
0x06AD8CD8: e00313aa  mov x0, x19
0x06AD8CDC: 0dd71b94  bl #0x71ce910
0x06AD8CE0: f30300aa  mov x19, x0
0x06AD8CE4: a05b00d0  adrp x0, #0x764e000
0x06AD8CE8: 006c42f9  ldr x0, [x0, #0x4d8]
0x06AD8CEC: 509f1a97  bl #0x3180a2c
0x06AD8CF0: 680240f9  ldr x8, [x19]
0x06AD8CF4: 010140f9  ldr x1, [x8]
0x06AD8CF8: f8a01a97  bl #0x31810d8
0x06AD8CFC: 00050036  tbz w0, #0, #0x6ad8d9c
0x06AD8D00: 730240f9  ldr x19, [x19]
0x06AD8D04: 07d71b94  bl #0x71ce920
0x06AD8D08: 930400b4  cbz x19, #0x6ad8d98
0x06AD8D0C: 680240f9  ldr x8, [x19]
0x06AD8D10: e00313aa  mov x0, x19
0x06AD8D14: 098558a9  ldp x9, x1, [x8, #0x188]
0x06AD8D18: 20013fd6  blr x9
0x06AD8D1C: f30300aa  mov x19, x0
0x06AD8D20: e0620090  adrp x0, #0x7734000
0x06AD8D24: 006442f9  ldr x0, [x0, #0x4c8]
0x06AD8D28: 419f1a97  bl #0x3180a2c
0x06AD8D2C: e10313aa  mov x1, x19
0x06AD8D30: e2031faa  mov x2, xzr
0x06AD8D34: 9b46a897  bl #0x54ea7a0
0x06AD8D38: f30300aa  mov x19, x0
0x06AD8D3C: 005d00b0  adrp x0, #0x7679000
0x06AD8D40: 007844f9  ldr x0, [x0, #0x8f0]
0x06AD8D44: 3a9f1a97  bl #0x3180a2c
0x06AD8D48: 08008092  movn x8, #0
0x06AD8D4C: e0a300a9  stp x0, x8, [sp, #8]
0x06AD8D50: e0230091  add x0, sp, #8
0x06AD8D54: e1031faa  mov x1, xzr
0x06AD8D58: ff1b00b9  str wzr, [sp, #0x18]
0x06AD8D5C: 62d2af97  bl #0x56cd6e4
0x06AD8D60: f40300aa  mov x20, x0
0x06AD8D64: a05c00b0  adrp x0, #0x766d000
0x06AD8D68: 006c46f9  ldr x0, [x0, #0xcd8]
0x06AD8D6C: 309f1a97  bl #0x3180a2c
0x06AD8D70: 08e040b9  ldr w8, [x0, #0xe0]
0x06AD8D74: 48000035  cbnz w8, #0x6ad8d7c
0x06AD8D78: 859f1a97  bl #0x3180b8c
0x06AD8D7C: e00313aa  mov x0, x19
0x06AD8D80: e10314aa  mov x1, x20
0x06AD8D84: e2031faa  mov x2, xzr
0x06AD8D88: e3031faa  mov x3, xzr
0x06AD8D8C: e4031faa  mov x4, xzr
0x06AD8D90: 5c4ea697  bl #0x546c700
0x06AD8D94: c1ffff17  b #0x6ad8c98
0x06AD8D98: c59f1a97  bl #0x3180cac
0x06AD8D9C: 00018052  movz w0, #0x8
0x06AD8DA0: e4d61b94  bl #0x71ce930
0x06AD8DA4: 680240f9  ldr x8, [x19]
0x06AD8DA8: 080000f9  str x8, [x0]
0x06AD8DAC: e1370090  adrp x1, #0x71d4000
0x06AD8DB0: 21a03491  add x1, x1, #0xd28
0x06AD8DB4: e2031faa  mov x2, xzr
0x06AD8DB8: e2d61b94  bl #0x71ce940
0x06AD8DBC: f30300aa  mov x19, x0
0x06AD8DC0: d8d61b94  bl #0x71ce920
0x06AD8DC4: e00313aa  mov x0, x19
0x06AD8DC8: e4321e97  bl #0x3265958
0x06AD8DCC: d2c10c97  bl #0x2e09514

