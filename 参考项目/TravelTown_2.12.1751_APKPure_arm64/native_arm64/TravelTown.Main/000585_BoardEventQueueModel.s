; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 585 MergeEngine.Model.Board.BoardEventQueueModel
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x61439B4 | private BoardQueueSystem get_BoardQueueSystem() { }
; bytes=184 sha256=bcb19bfc32cfa34624d96b16855695d7c35d61b63dffb73161507ee2e3fe1c71 status=arm64_complete_bound indexed_start=True
0x061439B4: fe0f1ef8  str x30, [sp, #-0x20]!
0x061439B8: f44f01a9  stp x20, x19, [sp, #0x10]
0x061439BC: 14df00b0  adrp x20, #0x7d24000
0x061439C0: 88e65739  ldrb w8, [x20, #0x5f9]
0x061439C4: f30300aa  mov x19, x0
0x061439C8: c8000037  tbnz w8, #0, #0x61439e0
0x061439CC: a0ac00d0  adrp x0, #0x76d9000
0x061439D0: 007044f9  ldr x0, [x0, #0x8e0]
0x061439D4: 11f44097  bl #0x3180a18
0x061439D8: 28008052  movz w8, #0x1
0x061439DC: 88e61739  strb w8, [x20, #0x5f9]
0x061439E0: 731a40f9  ldr x19, [x19, #0x30]
0x061439E4: 330400b4  cbz x19, #0x6143a68
0x061439E8: a9ac00d0  adrp x9, #0x76d9000
0x061439EC: 297144f9  ldr x9, [x9, #0x8e0]
0x061439F0: 680240f9  ldr x8, [x19]
0x061439F4: 340140f9  ldr x20, [x9]
0x061439F8: 095d4279  ldrh w9, [x8, #0x12e]
0x061439FC: 811240f9  ldr x1, [x20, #0x20]
0x06143A00: 82a24079  ldrh w2, [x20, #0x50]
0x06143A04: 290100b4  cbz x9, #0x6143a28
0x06143A08: 0a5940f9  ldr x10, [x8, #0xb0]
0x06143A0C: 4a210091  add x10, x10, #8
0x06143A10: 4b815ff8  ldur x11, [x10, #-8]
0x06143A14: 7f0101eb  cmp x11, x1
0x06143A18: e0000054  b.eq #0x6143a34
0x06143A1C: 290500f1  subs x9, x9, #1
0x06143A20: 4a410091  add x10, x10, #0x10
0x06143A24: 61ffff54  b.ne #0x6143a10
0x06143A28: e00313aa  mov x0, x19
0x06143A2C: 394c4097  bl #0x3156b10
0x06143A30: 05000014  b #0x6143a44
0x06143A34: 490140b9  ldr w9, [x10]
0x06143A38: 2901020b  add w9, w9, w2
0x06143A3C: 08d1298b  add x8, x8, w9, sxtw #4
0x06143A40: 00e10491  add x0, x8, #0x138
0x06143A44: 000440f9  ldr x0, [x0, #8]
0x06143A48: e10314aa  mov x1, x20
0x06143A4C: 4ff44097  bl #0x3180b88
0x06143A50: e10300aa  mov x1, x0
0x06143A54: 020440f9  ldr x2, [x0, #8]
0x06143A58: e00313aa  mov x0, x19
0x06143A5C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06143A60: fe0742f8  ldr x30, [sp], #0x20
0x06143A64: 40001fd6  br x2
0x06143A68: 91f44097  bl #0x3180cac

; RVA 0x6143A6C | public BindableProperty<int> get_BoardEventQueueCount() { }
; bytes=8 sha256=095bb56e13b6dfde16ade0b592279392884c282a7c7810cb58472b839de552de status=arm64_complete_bound indexed_start=True
0x06143A6C: 001c40f9  ldr x0, [x0, #0x38]
0x06143A70: c0035fd6  ret

; RVA 0x6143A74 | protected override void SubscribeToSignals() { }
; bytes=176 sha256=776033eaa79366c808bbd8737156b0c28b5a3de45935e74fc3211e02822400c1 status=arm64_complete_bound indexed_start=True
0x06143A74: fe0f1df8  str x30, [sp, #-0x30]!
0x06143A78: f65701a9  stp x22, x21, [sp, #0x10]
0x06143A7C: f44f02a9  stp x20, x19, [sp, #0x20]
0x06143A80: 14df00b0  adrp x20, #0x7d24000
0x06143A84: 56a800f0  adrp x22, #0x764e000
0x06143A88: d5ac0090  adrp x21, #0x76db000
0x06143A8C: 88ea5739  ldrb w8, [x20, #0x5fa]
0x06143A90: d6ae43f9  ldr x22, [x22, #0x758]
0x06143A94: b56a43f9  ldr x21, [x21, #0x6d0]
0x06143A98: f30300aa  mov x19, x0
0x06143A9C: 88010037  tbnz w8, #0, #0x6143acc
0x06143AA0: 40a800f0  adrp x0, #0x764e000
0x06143AA4: 00ac43f9  ldr x0, [x0, #0x758]
0x06143AA8: dcf34097  bl #0x3180a18
0x06143AAC: c0ac0090  adrp x0, #0x76db000
0x06143AB0: 006843f9  ldr x0, [x0, #0x6d0]
0x06143AB4: d9f34097  bl #0x3180a18
0x06143AB8: c0ac0090  adrp x0, #0x76db000
0x06143ABC: 006c43f9  ldr x0, [x0, #0x6d8]
0x06143AC0: d6f34097  bl #0x3180a18
0x06143AC4: 28008052  movz w8, #0x1
0x06143AC8: 88ea1739  strb w8, [x20, #0x5fa]
0x06143ACC: e00313aa  mov x0, x19
0x06143AD0: e1031faa  mov x1, xzr
0x06143AD4: efbc1d94  bl #0x68b2e90
0x06143AD8: c00240f9  ldr x0, [x22]
0x06143ADC: 741240f9  ldr x20, [x19, #0x20]
0x06143AE0: 70f44097  bl #0x3180ca0
0x06143AE4: a20240f9  ldr x2, [x21]
0x06143AE8: e10313aa  mov x1, x19
0x06143AEC: e3031faa  mov x3, xzr
0x06143AF0: f50300aa  mov x21, x0
0x06143AF4: 0fa7d297  bl #0x55ed730
0x06143AF8: 540100b4  cbz x20, #0x6143b20
0x06143AFC: c8ac0090  adrp x8, #0x76db000
0x06143B00: 086d43f9  ldr x8, [x8, #0x6d8]
0x06143B04: e00314aa  mov x0, x20
0x06143B08: e10315aa  mov x1, x21
0x06143B0C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06143B10: 020140f9  ldr x2, [x8]
0x06143B14: f65741a9  ldp x22, x21, [sp, #0x10]
0x06143B18: fe0743f8  ldr x30, [sp], #0x30
0x06143B1C: 0b867117  b #0x3da5348
0x06143B20: 63f44097  bl #0x3180cac

; RVA 0x6143B24 | protected override void UnsubscribeFromSignals() { }
; bytes=176 sha256=6e0b5f638fe23780c5a66dd8b4eb70bef1f26f64282f13775f3bbdd8364fe003 status=arm64_complete_bound indexed_start=True
0x06143B24: fe0f1df8  str x30, [sp, #-0x30]!
0x06143B28: f65701a9  stp x22, x21, [sp, #0x10]
0x06143B2C: f44f02a9  stp x20, x19, [sp, #0x20]
0x06143B30: 14df00b0  adrp x20, #0x7d24000
0x06143B34: 56a800f0  adrp x22, #0x764e000
0x06143B38: d5ac0090  adrp x21, #0x76db000
0x06143B3C: 88ee5739  ldrb w8, [x20, #0x5fb]
0x06143B40: d6ae43f9  ldr x22, [x22, #0x758]
0x06143B44: b56a43f9  ldr x21, [x21, #0x6d0]
0x06143B48: f30300aa  mov x19, x0
0x06143B4C: 88010037  tbnz w8, #0, #0x6143b7c
0x06143B50: 40a800f0  adrp x0, #0x764e000
0x06143B54: 00ac43f9  ldr x0, [x0, #0x758]
0x06143B58: b0f34097  bl #0x3180a18
0x06143B5C: c0ac0090  adrp x0, #0x76db000
0x06143B60: 006843f9  ldr x0, [x0, #0x6d0]
0x06143B64: adf34097  bl #0x3180a18
0x06143B68: c0ac0090  adrp x0, #0x76db000
0x06143B6C: 007043f9  ldr x0, [x0, #0x6e0]
0x06143B70: aaf34097  bl #0x3180a18
0x06143B74: 28008052  movz w8, #0x1
0x06143B78: 88ee1739  strb w8, [x20, #0x5fb]
0x06143B7C: e00313aa  mov x0, x19
0x06143B80: e1031faa  mov x1, xzr
0x06143B84: c4bc1d94  bl #0x68b2e94
0x06143B88: c00240f9  ldr x0, [x22]
0x06143B8C: 741240f9  ldr x20, [x19, #0x20]
0x06143B90: 44f44097  bl #0x3180ca0
0x06143B94: a20240f9  ldr x2, [x21]
0x06143B98: e10313aa  mov x1, x19
0x06143B9C: e3031faa  mov x3, xzr
0x06143BA0: f50300aa  mov x21, x0
0x06143BA4: e3a6d297  bl #0x55ed730
0x06143BA8: 540100b4  cbz x20, #0x6143bd0
0x06143BAC: c8ac0090  adrp x8, #0x76db000
0x06143BB0: 087143f9  ldr x8, [x8, #0x6e0]
0x06143BB4: e00314aa  mov x0, x20
0x06143BB8: e10315aa  mov x1, x21
0x06143BBC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06143BC0: 020140f9  ldr x2, [x8]
0x06143BC4: f65741a9  ldp x22, x21, [sp, #0x10]
0x06143BC8: fe0743f8  ldr x30, [sp], #0x30
0x06143BCC: a0897117  b #0x3da624c
0x06143BD0: 37f44097  bl #0x3180cac

; RVA 0x6143BD4 | private void BoardEventClosed() { }
; bytes=108 sha256=1ae5503f6734e7c637ad8b0d07cf4a7106e755cd1a143ee8c2ebb1454208a6fa status=arm64_complete_bound indexed_start=True
0x06143BD4: fe0f1ef8  str x30, [sp, #-0x20]!
0x06143BD8: f44f01a9  stp x20, x19, [sp, #0x10]
0x06143BDC: 13df00b0  adrp x19, #0x7d24000
0x06143BE0: 68f25739  ldrb w8, [x19, #0x5fc]
0x06143BE4: f40300aa  mov x20, x0
0x06143BE8: c8000037  tbnz w8, #0, #0x6143c00
0x06143BEC: c0a900d0  adrp x0, #0x767d000
0x06143BF0: 006442f9  ldr x0, [x0, #0x4c8]
0x06143BF4: 89f34097  bl #0x3180a18
0x06143BF8: 28008052  movz w8, #0x1
0x06143BFC: 68f21739  strb w8, [x19, #0x5fc]
0x06143C00: 931e40f9  ldr x19, [x20, #0x38]
0x06143C04: e00314aa  mov x0, x20
0x06143C08: 6bffff97  bl #0x61439b4
0x06143C0C: 800100b4  cbz x0, #0x6143c3c
0x06143C10: e1031faa  mov x1, xzr
0x06143C14: 377a1494  bl #0x66624f0
0x06143C18: 330100b4  cbz x19, #0x6143c3c
0x06143C1C: c8a900d0  adrp x8, #0x767d000
0x06143C20: 086542f9  ldr x8, [x8, #0x4c8]
0x06143C24: e103002a  mov w1, w0
0x06143C28: e00313aa  mov x0, x19
0x06143C2C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06143C30: 020140f9  ldr x2, [x8]
0x06143C34: fe0742f8  ldr x30, [sp], #0x20
0x06143C38: df768317  b #0x42217b4
0x06143C3C: 1cf44097  bl #0x3180cac

; RVA 0x6143C40 | public void SetBoardEventQueue(BoardQueueBackendState boardEventQueueState) { }
; bytes=328 sha256=dc38e46032f74cb911efe0d248e9e4ea81aa80373dbcd3e8351846d85b84f5d5 status=arm64_complete_bound indexed_start=True
0x06143C40: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x06143C44: f65701a9  stp x22, x21, [sp, #0x10]
0x06143C48: f44f02a9  stp x20, x19, [sp, #0x20]
0x06143C4C: 15df00b0  adrp x21, #0x7d24000
0x06143C50: a8f65739  ldrb w8, [x21, #0x5fd]
0x06143C54: f40301aa  mov x20, x1
0x06143C58: f30300aa  mov x19, x0
0x06143C5C: 48020037  tbnz w8, #0, #0x6143ca4
0x06143C60: c0ac0090  adrp x0, #0x76db000
0x06143C64: 007443f9  ldr x0, [x0, #0x6e8]
0x06143C68: 6cf34097  bl #0x3180a18
0x06143C6C: c0ac0090  adrp x0, #0x76db000
0x06143C70: 007843f9  ldr x0, [x0, #0x6f0]
0x06143C74: 69f34097  bl #0x3180a18
0x06143C78: c0a900d0  adrp x0, #0x767d000
0x06143C7C: 006442f9  ldr x0, [x0, #0x4c8]
0x06143C80: 66f34097  bl #0x3180a18
0x06143C84: c0ac0090  adrp x0, #0x76db000
0x06143C88: 007c43f9  ldr x0, [x0, #0x6f8]
0x06143C8C: 63f34097  bl #0x3180a18
0x06143C90: c0ac0090  adrp x0, #0x76db000
0x06143C94: 008043f9  ldr x0, [x0, #0x700]
0x06143C98: 60f34097  bl #0x3180a18
0x06143C9C: 28008052  movz w8, #0x1
0x06143CA0: a8f61739  strb w8, [x21, #0x5fd]
0x06143CA4: 940600b4  cbz x20, #0x6143d74
0x06143CA8: 940e40f9  ldr x20, [x20, #0x18]
0x06143CAC: 540600b4  cbz x20, #0x6143d74
0x06143CB0: d7ac0090  adrp x23, #0x76db000
0x06143CB4: f78243f9  ldr x23, [x23, #0x700]
0x06143CB8: e00240f9  ldr x0, [x23]
0x06143CBC: 08e040b9  ldr w8, [x0, #0xe0]
0x06143CC0: 68000035  cbnz w8, #0x6143ccc
0x06143CC4: b2f34097  bl #0x3180b8c
0x06143CC8: e00240f9  ldr x0, [x23]
0x06143CCC: 085c40f9  ldr x8, [x0, #0xb8]
0x06143CD0: 150540f9  ldr x21, [x8, #8]
0x06143CD4: f50200b5  cbnz x21, #0x6143d30
0x06143CD8: 08e040b9  ldr w8, [x0, #0xe0]
0x06143CDC: 68000035  cbnz w8, #0x6143ce8
0x06143CE0: abf34097  bl #0x3180b8c
0x06143CE4: e00240f9  ldr x0, [x23]
0x06143CE8: c9ac0090  adrp x9, #0x76db000
0x06143CEC: 085c40f9  ldr x8, [x0, #0xb8]
0x06143CF0: 297943f9  ldr x9, [x9, #0x6f0]
0x06143CF4: 160140f9  ldr x22, [x8]
0x06143CF8: 200140f9  ldr x0, [x9]
0x06143CFC: e9f34097  bl #0x3180ca0
0x06143D00: c8ac0090  adrp x8, #0x76db000
0x06143D04: 087d43f9  ldr x8, [x8, #0x6f8]
0x06143D08: e10316aa  mov x1, x22
0x06143D0C: e3031faa  mov x3, xzr
0x06143D10: f50300aa  mov x21, x0
0x06143D14: 020140f9  ldr x2, [x8]
0x06143D18: a948c497  bl #0x5255fbc
0x06143D1C: e80240f9  ldr x8, [x23]
0x06143D20: e10315aa  mov x1, x21
0x06143D24: 005d40f9  ldr x0, [x8, #0xb8]
0x06143D28: 158c00f8  str x21, [x0, #8]!
0x06143D2C: 26f34097  bl #0x31809c4
0x06143D30: c8ac0090  adrp x8, #0x76db000
0x06143D34: 087543f9  ldr x8, [x8, #0x6e8]
0x06143D38: e00314aa  mov x0, x20
0x06143D3C: e10315aa  mov x1, x21
0x06143D40: 020140f9  ldr x2, [x8]
0x06143D44: 72df6b97  bl #0x3c3bb0c
0x06143D48: 681e40f9  ldr x8, [x19, #0x38]
0x06143D4C: c80100b4  cbz x8, #0x6143d84
0x06143D50: c9a900d0  adrp x9, #0x767d000
0x06143D54: 296542f9  ldr x9, [x9, #0x4c8]
0x06143D58: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06143D5C: f65741a9  ldp x22, x21, [sp, #0x10]
0x06143D60: e103002a  mov w1, w0
0x06143D64: 220140f9  ldr x2, [x9]
0x06143D68: e00308aa  mov x0, x8
0x06143D6C: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x06143D70: 91768317  b #0x42217b4
0x06143D74: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06143D78: f65741a9  ldp x22, x21, [sp, #0x10]
0x06143D7C: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x06143D80: c0035fd6  ret
0x06143D84: caf34097  bl #0x3180cac

; RVA 0x6143D88 | public void .ctor() { }
; bytes=140 sha256=90af6adaa256e0aad6164f7d25e34432168729ae7b685612e4e222e7c6f6153c status=arm64_complete_bound indexed_start=True
0x06143D88: fe0f1df8  str x30, [sp, #-0x30]!
0x06143D8C: f65701a9  stp x22, x21, [sp, #0x10]
0x06143D90: f44f02a9  stp x20, x19, [sp, #0x20]
0x06143D94: 15df00b0  adrp x21, #0x7d24000
0x06143D98: 96a900b0  adrp x22, #0x7674000
0x06143D9C: 94a900b0  adrp x20, #0x7674000
0x06143DA0: a8fa5739  ldrb w8, [x21, #0x5fe]
0x06143DA4: d67a42f9  ldr x22, [x22, #0x4f0]
0x06143DA8: 947e42f9  ldr x20, [x20, #0x4f8]
0x06143DAC: f30300aa  mov x19, x0
0x06143DB0: 28010037  tbnz w8, #0, #0x6143dd4
0x06143DB4: 80a900b0  adrp x0, #0x7674000
0x06143DB8: 007c42f9  ldr x0, [x0, #0x4f8]
0x06143DBC: 17f34097  bl #0x3180a18
0x06143DC0: 80a900b0  adrp x0, #0x7674000
0x06143DC4: 007842f9  ldr x0, [x0, #0x4f0]
0x06143DC8: 14f34097  bl #0x3180a18
0x06143DCC: 28008052  movz w8, #0x1
0x06143DD0: a8fa1739  strb w8, [x21, #0x5fe]
0x06143DD4: c00240f9  ldr x0, [x22]
0x06143DD8: b2f34097  bl #0x3180ca0
0x06143DDC: 820240f9  ldr x2, [x20]
0x06143DE0: e1031f2a  mov w1, wzr
0x06143DE4: f40300aa  mov x20, x0
0x06143DE8: 6d768397  bl #0x422179c
0x06143DEC: e00313aa  mov x0, x19
0x06143DF0: 148c03f8  str x20, [x0, #0x38]!
0x06143DF4: e10314aa  mov x1, x20
0x06143DF8: f3f24097  bl #0x31809c4
0x06143DFC: e00313aa  mov x0, x19
0x06143E00: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06143E04: f65741a9  ldp x22, x21, [sp, #0x10]
0x06143E08: e1031faa  mov x1, xzr
0x06143E0C: fe0743f8  ldr x30, [sp], #0x30
0x06143E10: 52202014  b #0x694bf58

