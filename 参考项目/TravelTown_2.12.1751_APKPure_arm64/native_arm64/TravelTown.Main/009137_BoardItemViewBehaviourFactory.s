; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 9137 Merger.Game.Views.BoardItem.BoardItemViewBehaviourFactory
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x67316BC | public void .ctor(DiContainer container, IExternalBoardItemViewBehaviour[] factories) { }
; bytes=188 sha256=15fb3813f448fa8c542da8bf775efb4909c62acaf8a41ed5dc004d2ec2b44d13 status=arm64_complete_bound indexed_start=True
0x067316BC: fe0f1cf8  str x30, [sp, #-0x40]!
0x067316C0: f85f01a9  stp x24, x23, [sp, #0x10]
0x067316C4: f65702a9  stp x22, x21, [sp, #0x20]
0x067316C8: f44f03a9  stp x20, x19, [sp, #0x30]
0x067316CC: b7af00f0  adrp x23, #0x7d28000
0x067316D0: f87e0090  adrp x24, #0x770d000
0x067316D4: f67e0090  adrp x22, #0x770d000
0x067316D8: e8366639  ldrb w8, [x23, #0x98d]
0x067316DC: 184344f9  ldr x24, [x24, #0x880]
0x067316E0: d64644f9  ldr x22, [x22, #0x888]
0x067316E4: f30302aa  mov x19, x2
0x067316E8: f50301aa  mov x21, x1
0x067316EC: f40300aa  mov x20, x0
0x067316F0: 28010037  tbnz w8, #0, #0x6731714
0x067316F4: e07e0090  adrp x0, #0x770d000
0x067316F8: 004444f9  ldr x0, [x0, #0x888]
0x067316FC: c73c2997  bl #0x3180a18
0x06731700: e07e0090  adrp x0, #0x770d000
0x06731704: 004044f9  ldr x0, [x0, #0x880]
0x06731708: c43c2997  bl #0x3180a18
0x0673170C: 28008052  movz w8, #0x1
0x06731710: e8362639  strb w8, [x23, #0x98d]
0x06731714: 000340f9  ldr x0, [x24]
0x06731718: 623d2997  bl #0x3180ca0
0x0673171C: c10240f9  ldr x1, [x22]
0x06731720: f60300aa  mov x22, x0
0x06731724: 45496497  bl #0x4043c38
0x06731728: e00314aa  mov x0, x20
0x0673172C: 168c01f8  str x22, [x0, #0x18]!
0x06731730: e10316aa  mov x1, x22
0x06731734: a43c2997  bl #0x31809c4
0x06731738: e00314aa  mov x0, x20
0x0673173C: e1031faa  mov x1, xzr
0x06731740: afa3be97  bl #0x56da5fc
0x06731744: e00314aa  mov x0, x20
0x06731748: 150c01f8  str x21, [x0, #0x10]!
0x0673174C: e10315aa  mov x1, x21
0x06731750: 9d3c2997  bl #0x31809c4
0x06731754: e00314aa  mov x0, x20
0x06731758: 08000094  bl #0x6731778
0x0673175C: e00314aa  mov x0, x20
0x06731760: e10313aa  mov x1, x19
0x06731764: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06731768: f65742a9  ldp x22, x21, [sp, #0x20]
0x0673176C: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06731770: fe0744f8  ldr x30, [sp], #0x40
0x06731774: b3000014  b #0x6731a40

; RVA 0x6731778 | private void CreateAttachers() { }
; bytes=712 sha256=21cf7465ca9a44af427d2d52bfc38101464ad81919142234ccc19aa966b08ae4 status=arm64_complete_bound indexed_start=True
0x06731778: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x0673177C: fc6f01a9  stp x28, x27, [sp, #0x10]
0x06731780: fa6702a9  stp x26, x25, [sp, #0x20]
0x06731784: f85f03a9  stp x24, x23, [sp, #0x30]
0x06731788: f65704a9  stp x22, x21, [sp, #0x40]
0x0673178C: f44f05a9  stp x20, x19, [sp, #0x50]
0x06731790: bdaf00f0  adrp x29, #0x7d28000
0x06731794: f47e0090  adrp x20, #0x770d000
0x06731798: fc7e0090  adrp x28, #0x770d000
0x0673179C: fb7e0090  adrp x27, #0x770d000
0x067317A0: fa7e0090  adrp x26, #0x770d000
0x067317A4: f97e0090  adrp x25, #0x770d000
0x067317A8: f87e0090  adrp x24, #0x770d000
0x067317AC: f77e0090  adrp x23, #0x770d000
0x067317B0: f67e0090  adrp x22, #0x770d000
0x067317B4: f57e0090  adrp x21, #0x770d000
0x067317B8: 944a44f9  ldr x20, [x20, #0x890]
0x067317BC: 9c4f44f9  ldr x28, [x28, #0x898]
0x067317C0: 7b5344f9  ldr x27, [x27, #0x8a0]
0x067317C4: 5a5744f9  ldr x26, [x26, #0x8a8]
0x067317C8: 395b44f9  ldr x25, [x25, #0x8b0]
0x067317CC: 185f44f9  ldr x24, [x24, #0x8b8]
0x067317D0: f76244f9  ldr x23, [x23, #0x8c0]
0x067317D4: d66644f9  ldr x22, [x22, #0x8c8]
0x067317D8: b56a44f9  ldr x21, [x21, #0x8d0]
0x067317DC: a83b6639  ldrb w8, [x29, #0x98e]
0x067317E0: f30300aa  mov x19, x0
0x067317E4: e8070037  tbnz w8, #0, #0x67318e0
0x067317E8: e07e0090  adrp x0, #0x770d000
0x067317EC: 006c44f9  ldr x0, [x0, #0x8d8]
0x067317F0: 8a3c2997  bl #0x3180a18
0x067317F4: e07e0090  adrp x0, #0x770d000
0x067317F8: 004c44f9  ldr x0, [x0, #0x898]
0x067317FC: 873c2997  bl #0x3180a18
0x06731800: e07e0090  adrp x0, #0x770d000
0x06731804: 006044f9  ldr x0, [x0, #0x8c0]
0x06731808: 843c2997  bl #0x3180a18
0x0673180C: e07e0090  adrp x0, #0x770d000
0x06731810: 007044f9  ldr x0, [x0, #0x8e0]
0x06731814: 813c2997  bl #0x3180a18
0x06731818: e07e0090  adrp x0, #0x770d000
0x0673181C: 007444f9  ldr x0, [x0, #0x8e8]
0x06731820: 7e3c2997  bl #0x3180a18
0x06731824: e07e0090  adrp x0, #0x770d000
0x06731828: 004844f9  ldr x0, [x0, #0x890]
0x0673182C: 7b3c2997  bl #0x3180a18
0x06731830: e07e0090  adrp x0, #0x770d000
0x06731834: 007844f9  ldr x0, [x0, #0x8f0]
0x06731838: 783c2997  bl #0x3180a18
0x0673183C: e07e0090  adrp x0, #0x770d000
0x06731840: 007c44f9  ldr x0, [x0, #0x8f8]
0x06731844: 753c2997  bl #0x3180a18
0x06731848: e07e0090  adrp x0, #0x770d000
0x0673184C: 006844f9  ldr x0, [x0, #0x8d0]
0x06731850: 723c2997  bl #0x3180a18
0x06731854: e07e0090  adrp x0, #0x770d000
0x06731858: 005444f9  ldr x0, [x0, #0x8a8]
0x0673185C: 6f3c2997  bl #0x3180a18
0x06731860: e07e0090  adrp x0, #0x770d000
0x06731864: 005044f9  ldr x0, [x0, #0x8a0]
0x06731868: 6c3c2997  bl #0x3180a18
0x0673186C: e07e0090  adrp x0, #0x770d000
0x06731870: 005844f9  ldr x0, [x0, #0x8b0]
0x06731874: 693c2997  bl #0x3180a18
0x06731878: e07e0090  adrp x0, #0x770d000
0x0673187C: 005c44f9  ldr x0, [x0, #0x8b8]
0x06731880: 663c2997  bl #0x3180a18
0x06731884: e07e0090  adrp x0, #0x770d000
0x06731888: 008044f9  ldr x0, [x0, #0x900]
0x0673188C: 633c2997  bl #0x3180a18
0x06731890: e07e0090  adrp x0, #0x770d000
0x06731894: 006444f9  ldr x0, [x0, #0x8c8]
0x06731898: 603c2997  bl #0x3180a18
0x0673189C: e07e0090  adrp x0, #0x770d000
0x067318A0: 008444f9  ldr x0, [x0, #0x908]
0x067318A4: 5d3c2997  bl #0x3180a18
0x067318A8: e07e0090  adrp x0, #0x770d000
0x067318AC: 008844f9  ldr x0, [x0, #0x910]
0x067318B0: 5a3c2997  bl #0x3180a18
0x067318B4: e07e0090  adrp x0, #0x770d000
0x067318B8: 008c44f9  ldr x0, [x0, #0x918]
0x067318BC: 573c2997  bl #0x3180a18
0x067318C0: e07e0090  adrp x0, #0x770d000
0x067318C4: 009044f9  ldr x0, [x0, #0x920]
0x067318C8: 543c2997  bl #0x3180a18
0x067318CC: e07e0090  adrp x0, #0x770d000
0x067318D0: 009444f9  ldr x0, [x0, #0x928]
0x067318D4: 513c2997  bl #0x3180a18
0x067318D8: 28008052  movz w8, #0x1
0x067318DC: a83b2639  strb w8, [x29, #0x98e]
0x067318E0: 810240f9  ldr x1, [x20]
0x067318E4: e00313aa  mov x0, x19
0x067318E8: eaa15297  bl #0x3bda090
0x067318EC: 810340f9  ldr x1, [x28]
0x067318F0: e00313aa  mov x0, x19
0x067318F4: e7a15297  bl #0x3bda090
0x067318F8: 610340f9  ldr x1, [x27]
0x067318FC: e00313aa  mov x0, x19
0x06731900: e4a15297  bl #0x3bda090
0x06731904: 410340f9  ldr x1, [x26]
0x06731908: e00313aa  mov x0, x19
0x0673190C: e1a15297  bl #0x3bda090
0x06731910: 210340f9  ldr x1, [x25]
0x06731914: e00313aa  mov x0, x19
0x06731918: dea15297  bl #0x3bda090
0x0673191C: 010340f9  ldr x1, [x24]
0x06731920: e00313aa  mov x0, x19
0x06731924: dba15297  bl #0x3bda090
0x06731928: e10240f9  ldr x1, [x23]
0x0673192C: e00313aa  mov x0, x19
0x06731930: d8a15297  bl #0x3bda090
0x06731934: c10240f9  ldr x1, [x22]
0x06731938: e00313aa  mov x0, x19
0x0673193C: d5a15297  bl #0x3bda090
0x06731940: a10240f9  ldr x1, [x21]
0x06731944: e00313aa  mov x0, x19
0x06731948: d2a15297  bl #0x3bda090
0x0673194C: e87e0090  adrp x8, #0x770d000
0x06731950: 088544f9  ldr x8, [x8, #0x908]
0x06731954: e00313aa  mov x0, x19
0x06731958: 010140f9  ldr x1, [x8]
0x0673195C: cda15297  bl #0x3bda090
0x06731960: e87e0090  adrp x8, #0x770d000
0x06731964: 087144f9  ldr x8, [x8, #0x8e0]
0x06731968: e00313aa  mov x0, x19
0x0673196C: 010140f9  ldr x1, [x8]
0x06731970: c8a15297  bl #0x3bda090
0x06731974: e87e0090  adrp x8, #0x770d000
0x06731978: 087544f9  ldr x8, [x8, #0x8e8]
0x0673197C: e00313aa  mov x0, x19
0x06731980: 010140f9  ldr x1, [x8]
0x06731984: c3a15297  bl #0x3bda090
0x06731988: e87e0090  adrp x8, #0x770d000
0x0673198C: 088d44f9  ldr x8, [x8, #0x918]
0x06731990: e00313aa  mov x0, x19
0x06731994: 010140f9  ldr x1, [x8]
0x06731998: bea15297  bl #0x3bda090
0x0673199C: e87e0090  adrp x8, #0x770d000
0x067319A0: 089544f9  ldr x8, [x8, #0x928]
0x067319A4: e00313aa  mov x0, x19
0x067319A8: 010140f9  ldr x1, [x8]
0x067319AC: b9a15297  bl #0x3bda090
0x067319B0: e87e0090  adrp x8, #0x770d000
0x067319B4: 089144f9  ldr x8, [x8, #0x920]
0x067319B8: e00313aa  mov x0, x19
0x067319BC: 010140f9  ldr x1, [x8]
0x067319C0: b4a15297  bl #0x3bda090
0x067319C4: e87e0090  adrp x8, #0x770d000
0x067319C8: 088944f9  ldr x8, [x8, #0x910]
0x067319CC: e00313aa  mov x0, x19
0x067319D0: 010140f9  ldr x1, [x8]
0x067319D4: afa15297  bl #0x3bda090
0x067319D8: e87e0090  adrp x8, #0x770d000
0x067319DC: 086d44f9  ldr x8, [x8, #0x8d8]
0x067319E0: e00313aa  mov x0, x19
0x067319E4: 010140f9  ldr x1, [x8]
0x067319E8: aaa15297  bl #0x3bda090
0x067319EC: e87e0090  adrp x8, #0x770d000
0x067319F0: 088144f9  ldr x8, [x8, #0x900]
0x067319F4: e00313aa  mov x0, x19
0x067319F8: 010140f9  ldr x1, [x8]
0x067319FC: a5a15297  bl #0x3bda090
0x06731A00: e87e0090  adrp x8, #0x770d000
0x06731A04: 087944f9  ldr x8, [x8, #0x8f0]
0x06731A08: e00313aa  mov x0, x19
0x06731A0C: 010140f9  ldr x1, [x8]
0x06731A10: a0a15297  bl #0x3bda090
0x06731A14: e87e0090  adrp x8, #0x770d000
0x06731A18: 087d44f9  ldr x8, [x8, #0x8f8]
0x06731A1C: e00313aa  mov x0, x19
0x06731A20: f44f45a9  ldp x20, x19, [sp, #0x50]
0x06731A24: f65744a9  ldp x22, x21, [sp, #0x40]
0x06731A28: 010140f9  ldr x1, [x8]
0x06731A2C: f85f43a9  ldp x24, x23, [sp, #0x30]
0x06731A30: fa6742a9  ldp x26, x25, [sp, #0x20]
0x06731A34: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x06731A38: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x06731A3C: 95a15217  b #0x3bda090

; RVA 0x6731A40 | private void CreateExternalAttachers(IExternalBoardItemViewBehaviour[] factories) { }
; bytes=416 sha256=16fa249ab3b308dfd9f17c6a5c93943d72e016e7e746d61743753f674780b73f status=arm64_complete_bound indexed_start=True
0x06731A40: fe0f1bf8  str x30, [sp, #-0x50]!
0x06731A44: fa6701a9  stp x26, x25, [sp, #0x10]
0x06731A48: f85f02a9  stp x24, x23, [sp, #0x20]
0x06731A4C: f65703a9  stp x22, x21, [sp, #0x30]
0x06731A50: f44f04a9  stp x20, x19, [sp, #0x40]
0x06731A54: b5af00f0  adrp x21, #0x7d28000
0x06731A58: a83e6639  ldrb w8, [x21, #0x98f]
0x06731A5C: f30301aa  mov x19, x1
0x06731A60: f40300aa  mov x20, x0
0x06731A64: 28010037  tbnz w8, #0, #0x6731a88
0x06731A68: e07e0090  adrp x0, #0x770d000
0x06731A6C: 009844f9  ldr x0, [x0, #0x930]
0x06731A70: ea3b2997  bl #0x3180a18
0x06731A74: 407a0090  adrp x0, #0x7679000
0x06731A78: 00b043f9  ldr x0, [x0, #0x760]
0x06731A7C: e73b2997  bl #0x3180a18
0x06731A80: 28008052  movz w8, #0x1
0x06731A84: a83e2639  strb w8, [x21, #0x98f]
0x06731A88: 930a00b4  cbz x19, #0x6731bd8
0x06731A8C: 681a40b9  ldr w8, [x19, #0x18]
0x06731A90: 1f050071  cmp w8, #1
0x06731A94: 6b090054  b.lt #0x6731bc0
0x06731A98: f77e0090  adrp x23, #0x770d000
0x06731A9C: 587a0090  adrp x24, #0x7679000
0x06731AA0: f79a44f9  ldr x23, [x23, #0x930]
0x06731AA4: 18b343f9  ldr x24, [x24, #0x760]
0x06731AA8: f6031f2a  mov w22, wzr
0x06731AAC: df02086b  cmp w22, w8
0x06731AB0: 62090054  b.hs #0x6731bdc
0x06731AB4: 68ce368b  add x8, x19, w22, sxtw #3
0x06731AB8: 151140f9  ldr x21, [x8, #0x20]
0x06731ABC: f50800b4  cbz x21, #0x6731bd8
0x06731AC0: a80240f9  ldr x8, [x21]
0x06731AC4: e10240f9  ldr x1, [x23]
0x06731AC8: 095d4279  ldrh w9, [x8, #0x12e]
0x06731ACC: 290100b4  cbz x9, #0x6731af0
0x06731AD0: 0a5940f9  ldr x10, [x8, #0xb0]
0x06731AD4: 4a210091  add x10, x10, #8
0x06731AD8: 4b815ff8  ldur x11, [x10, #-8]
0x06731ADC: 7f0101eb  cmp x11, x1
0x06731AE0: 00010054  b.eq #0x6731b00
0x06731AE4: 290500f1  subs x9, x9, #1
0x06731AE8: 4a410091  add x10, x10, #0x10
0x06731AEC: 61ffff54  b.ne #0x6731ad8
0x06731AF0: e00315aa  mov x0, x21
0x06731AF4: e2031f2a  mov w2, wzr
0x06731AF8: 06942897  bl #0x3156b10
0x06731AFC: 04000014  b #0x6731b0c
0x06731B00: 490180b9  ldrsw x9, [x10]
0x06731B04: 0811098b  add x8, x8, x9, lsl #4
0x06731B08: 00e10491  add x0, x8, #0x138
0x06731B0C: 080440a9  ldp x8, x1, [x0]
0x06731B10: e00315aa  mov x0, x21
0x06731B14: 00013fd6  blr x8
0x06731B18: 000600b4  cbz x0, #0x6731bd8
0x06731B1C: 080c40f9  ldr x8, [x0, #0x18]
0x06731B20: f50300aa  mov x21, x0
0x06731B24: 1f050071  cmp w8, #1
0x06731B28: 4b040054  b.lt #0x6731bb0
0x06731B2C: f9031faa  mov x25, xzr
0x06731B30: 087d4092  and x8, x8, #0xffffffff
0x06731B34: ba820091  add x26, x21, #0x20
0x06731B38: 3f4328eb  cmp x25, w8, uxtw
0x06731B3C: 02050054  b.hs #0x6731bdc
0x06731B40: 800e40f9  ldr x0, [x20, #0x18]
0x06731B44: a00400b4  cbz x0, #0x6731bd8
0x06731B48: 0a1c40b9  ldr w10, [x0, #0x1c]
0x06731B4C: 417b79f8  ldr x1, [x26, x25, lsl #3]
0x06731B50: 080840f9  ldr x8, [x0, #0x10]
0x06731B54: 090340f9  ldr x9, [x24]
0x06731B58: 4a050011  add w10, w10, #1
0x06731B5C: 0a1c00b9  str w10, [x0, #0x1c]
0x06731B60: c80300b4  cbz x8, #0x6731bd8
0x06731B64: 0a1880b9  ldrsw x10, [x0, #0x18]
0x06731B68: 0b1940b9  ldr w11, [x8, #0x18]
0x06731B6C: 5f010b6b  cmp w10, w11
0x06731B70: 02010054  b.hs #0x6731b90
0x06731B74: 49050011  add w9, w10, #1
0x06731B78: 080d0a8b  add x8, x8, x10, lsl #3
0x06731B7C: 091800b9  str w9, [x0, #0x18]
0x06731B80: 010d02f8  str x1, [x8, #0x20]!
0x06731B84: e00308aa  mov x0, x8
0x06731B88: 8f3b2997  bl #0x31809c4
0x06731B8C: 05000014  b #0x6731ba0
0x06731B90: 281140f9  ldr x8, [x9, #0x20]
0x06731B94: 086140f9  ldr x8, [x8, #0xc0]
0x06731B98: 023940f9  ldr x2, [x8, #0x70]
0x06731B9C: 344a6497  bl #0x404446c
0x06731BA0: a81a40b9  ldr w8, [x21, #0x18]
0x06731BA4: 39070091  add x25, x25, #1
0x06731BA8: 3fc328eb  cmp x25, w8, sxtw
0x06731BAC: 6bfcff54  b.lt #0x6731b38
0x06731BB0: 681a40b9  ldr w8, [x19, #0x18]
0x06731BB4: d6060011  add w22, w22, #1
0x06731BB8: df02086b  cmp w22, w8
0x06731BBC: 8bf7ff54  b.lt #0x6731aac
0x06731BC0: f44f44a9  ldp x20, x19, [sp, #0x40]
0x06731BC4: f65743a9  ldp x22, x21, [sp, #0x30]
0x06731BC8: f85f42a9  ldp x24, x23, [sp, #0x20]
0x06731BCC: fa6741a9  ldp x26, x25, [sp, #0x10]
0x06731BD0: fe0745f8  ldr x30, [sp], #0x50
0x06731BD4: c0035fd6  ret
0x06731BD8: 353c2997  bl #0x3180cac
0x06731BDC: 363c2997  bl #0x3180cb4

; RVA 0x6731BE0 | public void AddBehaviours(Entity entity, BoardItemView2 boardItemView2) { }
; bytes=460 sha256=dd145994aa4b391fc18cf7efe63c6b6225ed3a1521f83f4e6ca174eec96237e6 status=arm64_complete_bound indexed_start=True
0x06731BE0: ff8301d1  sub sp, sp, #0x60
0x06731BE4: fe1300f9  str x30, [sp, #0x20]
0x06731BE8: f85f03a9  stp x24, x23, [sp, #0x30]
0x06731BEC: f65704a9  stp x22, x21, [sp, #0x40]
0x06731BF0: f44f05a9  stp x20, x19, [sp, #0x50]
0x06731BF4: b6af00f0  adrp x22, #0x7d28000
0x06731BF8: c8426639  ldrb w8, [x22, #0x990]
0x06731BFC: f30302aa  mov x19, x2
0x06731C00: f40301aa  mov x20, x1
0x06731C04: f50300aa  mov x21, x0
0x06731C08: 48020037  tbnz w8, #0, #0x6731c50
0x06731C0C: e07e0090  adrp x0, #0x770d000
0x06731C10: 009c44f9  ldr x0, [x0, #0x938]
0x06731C14: 813b2997  bl #0x3180a18
0x06731C18: e07e0090  adrp x0, #0x770d000
0x06731C1C: 00a044f9  ldr x0, [x0, #0x940]
0x06731C20: 7e3b2997  bl #0x3180a18
0x06731C24: e07e0090  adrp x0, #0x770d000
0x06731C28: 00a444f9  ldr x0, [x0, #0x948]
0x06731C2C: 7b3b2997  bl #0x3180a18
0x06731C30: e07e0090  adrp x0, #0x770d000
0x06731C34: 00a844f9  ldr x0, [x0, #0x950]
0x06731C38: 783b2997  bl #0x3180a18
0x06731C3C: e07e0090  adrp x0, #0x770d000
0x06731C40: 00ac44f9  ldr x0, [x0, #0x958]
0x06731C44: 753b2997  bl #0x3180a18
0x06731C48: 28008052  movz w8, #0x1
0x06731C4C: c8422639  strb w8, [x22, #0x990]
0x06731C50: ffff00a9  stp xzr, xzr, [sp, #8]
0x06731C54: ff0f00f9  str xzr, [sp, #0x18]
0x06731C58: a00e40f9  ldr x0, [x21, #0x18]
0x06731C5C: 000700b4  cbz x0, #0x6731d3c
0x06731C60: e87e0090  adrp x8, #0x770d000
0x06731C64: 08ad44f9  ldr x8, [x8, #0x958]
0x06731C68: f77e0090  adrp x23, #0x770d000
0x06731C6C: f87e0090  adrp x24, #0x770d000
0x06731C70: f67e0090  adrp x22, #0x770d000
0x06731C74: 010140f9  ldr x1, [x8]
0x06731C78: f7a244f9  ldr x23, [x23, #0x940]
0x06731C7C: 18ab44f9  ldr x24, [x24, #0x950]
0x06731C80: d69e44f9  ldr x22, [x22, #0x938]
0x06731C84: e8230091  add x8, sp, #8
0x06731C88: f84c6497  bl #0x4045068
0x06731C8C: e10240f9  ldr x1, [x23]
0x06731C90: e0230091  add x0, sp, #8
0x06731C94: 488fa397  bl #0x50159b4
0x06731C98: 80030036  tbz w0, #0, #0x6731d08
0x06731C9C: f50f40f9  ldr x21, [sp, #0x18]
0x06731CA0: d50400b4  cbz x21, #0x6731d38
0x06731CA4: a80240f9  ldr x8, [x21]
0x06731CA8: 010340f9  ldr x1, [x24]
0x06731CAC: 095d4279  ldrh w9, [x8, #0x12e]
0x06731CB0: 290100b4  cbz x9, #0x6731cd4
0x06731CB4: 0a5940f9  ldr x10, [x8, #0xb0]
0x06731CB8: 4a210091  add x10, x10, #8
0x06731CBC: 4b815ff8  ldur x11, [x10, #-8]
0x06731CC0: 7f0101eb  cmp x11, x1
0x06731CC4: 00010054  b.eq #0x6731ce4
0x06731CC8: 290500f1  subs x9, x9, #1
0x06731CCC: 4a410091  add x10, x10, #0x10
0x06731CD0: 61ffff54  b.ne #0x6731cbc
0x06731CD4: e00315aa  mov x0, x21
0x06731CD8: e2031f2a  mov w2, wzr
0x06731CDC: 8d932897  bl #0x3156b10
0x06731CE0: 04000014  b #0x6731cf0
0x06731CE4: 490180b9  ldrsw x9, [x10]
0x06731CE8: 0811098b  add x8, x8, x9, lsl #4
0x06731CEC: 00e10491  add x0, x8, #0x138
0x06731CF0: 080c40a9  ldp x8, x3, [x0]
0x06731CF4: e00315aa  mov x0, x21
0x06731CF8: e10314aa  mov x1, x20
0x06731CFC: e20313aa  mov x2, x19
0x06731D00: 00013fd6  blr x8
0x06731D04: e2ffff17  b #0x6731c8c
0x06731D08: c10240f9  ldr x1, [x22]
0x06731D0C: e0230091  add x0, sp, #8
0x06731D10: 288fa397  bl #0x50159b0
0x06731D14: 530100b4  cbz x19, #0x6731d3c
0x06731D18: e00313aa  mov x0, x19
0x06731D1C: d0fcff97  bl #0x673105c
0x06731D20: f44f45a9  ldp x20, x19, [sp, #0x50]
0x06731D24: f65744a9  ldp x22, x21, [sp, #0x40]
0x06731D28: f85f43a9  ldp x24, x23, [sp, #0x30]
0x06731D2C: fe1340f9  ldr x30, [sp, #0x20]
0x06731D30: ff830191  add sp, sp, #0x60
0x06731D34: c0035fd6  ret
0x06731D38: dd3b2997  bl #0x3180cac
0x06731D3C: dc3b2997  bl #0x3180cac
0x06731D40: 02000014  b #0x6731d48
0x06731D44: 01000014  b #0x6731d48
0x06731D48: f40300aa  mov x20, x0
0x06731D4C: 3f040071  cmp w1, #1
0x06731D50: 61010054  b.ne #0x6731d7c
0x06731D54: e00314aa  mov x0, x20
0x06731D58: ee722a94  bl #0x71ce910
0x06731D5C: 150040f9  ldr x21, [x0]
0x06731D60: f0722a94  bl #0x71ce920
0x06731D64: c10240f9  ldr x1, [x22]
0x06731D68: e0230091  add x0, sp, #8
0x06731D6C: 118fa397  bl #0x50159b0
0x06731D70: 35fdffb4  cbz x21, #0x6731d14
0x06731D74: e00315aa  mov x0, x21
0x06731D78: cb3b2997  bl #0x3180ca4
0x06731D7C: f5031faa  mov x21, xzr
0x06731D80: 02000014  b #0x6731d88
0x06731D84: f40300aa  mov x20, x0
0x06731D88: c10240f9  ldr x1, [x22]
0x06731D8C: e0230091  add x0, sp, #8
0x06731D90: 088fa397  bl #0x50159b0
0x06731D94: 750000b5  cbnz x21, #0x6731da0
0x06731D98: e00314aa  mov x0, x20
0x06731D9C: efce2c97  bl #0x3265958
0x06731DA0: e00315aa  mov x0, x21
0x06731DA4: c03b2997  bl #0x3180ca4
0x06731DA8: db5d1b97  bl #0x2e09514

; Generic instantiation from Il2CppDumper script.json | RVA 0x3BDA090 | Merger.Game.Views.BoardItem.BoardItemViewBehaviourFactory$$RegisterAttacher<object>
; native signature: void Merger_Game_Views_BoardItem_BoardItemViewBehaviourFactory__RegisterAttacher_object_ (Merger_Game_Views_BoardItem_BoardItemViewBehaviourFactory_o* __this, const MethodInfo_3BDA090* method);
; bytes=192 sha256=1f3145701156f78f7cbac0c6312dfecdb98cc01b40a957cac3aaab88d1e6186a status=arm64_complete_bound indexed_start=True
0x03BDA090: fe0f1ef8  str x30, [sp, #-0x20]!
0x03BDA094: f44f01a9  stp x20, x19, [sp, #0x10]
0x03BDA098: 281c40f9  ldr x8, [x1, #0x38]
0x03BDA09C: f40301aa  mov x20, x1
0x03BDA0A0: f30300aa  mov x19, x0
0x03BDA0A4: 080100b5  cbnz x8, #0x3bda0c4
0x03BDA0A8: e0d401f0  adrp x0, #0x7679000
0x03BDA0AC: 00b043f9  ldr x0, [x0, #0x760]
0x03BDA0B0: 5a9ad697  bl #0x3180a18
0x03BDA0B4: 881e40f9  ldr x8, [x20, #0x38]
0x03BDA0B8: 680000b5  cbnz x8, #0x3bda0c4
0x03BDA0BC: e00314aa  mov x0, x20
0x03BDA0C0: eef1d597  bl #0x3156878
0x03BDA0C4: 600a40f9  ldr x0, [x19, #0x10]
0x03BDA0C8: 200400b4  cbz x0, #0x3bda14c
0x03BDA0CC: 881e40f9  ldr x8, [x20, #0x38]
0x03BDA0D0: 010140f9  ldr x1, [x8]
0x03BDA0D4: f6aa0094  bl #0x3c04cac
0x03BDA0D8: 680e40f9  ldr x8, [x19, #0x18]
0x03BDA0DC: 880300b4  cbz x8, #0x3bda14c
0x03BDA0E0: ead401f0  adrp x10, #0x7679000
0x03BDA0E4: 4ab143f9  ldr x10, [x10, #0x760]
0x03BDA0E8: 0b1d40b9  ldr w11, [x8, #0x1c]
0x03BDA0EC: 090940f9  ldr x9, [x8, #0x10]
0x03BDA0F0: 4a0140f9  ldr x10, [x10]
0x03BDA0F4: 6b050011  add w11, w11, #1
0x03BDA0F8: 0b1d00b9  str w11, [x8, #0x1c]
0x03BDA0FC: 890200b4  cbz x9, #0x3bda14c
0x03BDA100: 0b1980b9  ldrsw x11, [x8, #0x18]
0x03BDA104: 2c1940b9  ldr w12, [x9, #0x18]
0x03BDA108: e10300aa  mov x1, x0
0x03BDA10C: 7f010c6b  cmp w11, w12
0x03BDA110: 02010054  b.hs #0x3bda130
0x03BDA114: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03BDA118: 6a050011  add w10, w11, #1
0x03BDA11C: 200d0b8b  add x0, x9, x11, lsl #3
0x03BDA120: 0a1900b9  str w10, [x8, #0x18]
0x03BDA124: 010c02f8  str x1, [x0, #0x20]!
0x03BDA128: fe0742f8  ldr x30, [sp], #0x20
0x03BDA12C: 269ad617  b #0x31809c4
0x03BDA130: 491140f9  ldr x9, [x10, #0x20]
0x03BDA134: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03BDA138: e00308aa  mov x0, x8
0x03BDA13C: 296140f9  ldr x9, [x9, #0xc0]
0x03BDA140: 223940f9  ldr x2, [x9, #0x70]
0x03BDA144: fe0742f8  ldr x30, [sp], #0x20
0x03BDA148: c9a81114  b #0x404446c
0x03BDA14C: d89ad697  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3BDA150 | Merger.Game.Views.BoardItem.BoardItemViewBehaviourFactory$$RegisterAttacher<__Il2CppFullySharedGenericType>
; native signature: void Merger_Game_Views_BoardItem_BoardItemViewBehaviourFactory__RegisterAttacher___Il2CppFullySharedGenericType_ (Merger_Game_Views_BoardItem_BoardItemViewBehaviourFactory_o* __this, const MethodInfo_3BDA150* method);
; bytes=396 sha256=6b056fc4ca12037fb7552ab8fd616775e51af293f34d96bc62260a0901cf21d1 status=arm64_complete_bound indexed_start=True
0x03BDA150: fd7bbba9  stp x29, x30, [sp, #-0x50]!
0x03BDA154: fa6701a9  stp x26, x25, [sp, #0x10]
0x03BDA158: f85f02a9  stp x24, x23, [sp, #0x20]
0x03BDA15C: f65703a9  stp x22, x21, [sp, #0x30]
0x03BDA160: f44f04a9  stp x20, x19, [sp, #0x40]
0x03BDA164: fd030091  mov x29, sp
0x03BDA168: ff4300d1  sub sp, sp, #0x10
0x03BDA16C: 59d03bd5  mrs x25, tpidr_el0
0x03BDA170: 281740f9  ldr x8, [x25, #0x28]
0x03BDA174: f30301aa  mov x19, x1
0x03BDA178: f40300aa  mov x20, x0
0x03BDA17C: a8831ff8  stur x8, [x29, #-8]
0x03BDA180: 3a1c40f9  ldr x26, [x1, #0x38]
0x03BDA184: 3a0100b5  cbnz x26, #0x3bda1a8
0x03BDA188: e0d401f0  adrp x0, #0x7679000
0x03BDA18C: 00b043f9  ldr x0, [x0, #0x760]
0x03BDA190: 229ad697  bl #0x3180a18
0x03BDA194: 7a1e40f9  ldr x26, [x19, #0x38]
0x03BDA198: 9a0000b5  cbnz x26, #0x3bda1a8
0x03BDA19C: e00313aa  mov x0, x19
0x03BDA1A0: b6f1d597  bl #0x3156878
0x03BDA1A4: 7a1e40f9  ldr x26, [x19, #0x38]
0x03BDA1A8: 480740f9  ldr x8, [x26, #8]
0x03BDA1AC: 15fd40b9  ldr w21, [x8, #0xfc]
0x03BDA1B0: e8030091  mov x8, sp
0x03BDA1B4: a93e0091  add x9, x21, #0xf
0x03BDA1B8: 29717c92  and x9, x9, #0x1fffffff0
0x03BDA1BC: 170109cb  sub x23, x8, x9
0x03BDA1C0: ff020091  mov sp, x23
0x03BDA1C4: e8030091  mov x8, sp
0x03BDA1C8: 160109cb  sub x22, x8, x9
0x03BDA1CC: df020091  mov sp, x22
0x03BDA1D0: e8030091  mov x8, sp
0x03BDA1D4: 180109cb  sub x24, x8, x9
0x03BDA1D8: 1f030091  mov sp, x24
0x03BDA1DC: e00318aa  mov x0, x24
0x03BDA1E0: e1031f2a  mov w1, wzr
0x03BDA1E4: e20315aa  mov x2, x21
0x03BDA1E8: eed1d794  bl #0x71ce9a0
0x03BDA1EC: 820a40f9  ldr x2, [x20, #0x10]
0x03BDA1F0: 220700b4  cbz x2, #0x3bda2d4
0x03BDA1F4: 410340f9  ldr x1, [x26]
0x03BDA1F8: a34300d1  sub x3, x29, #0x10
0x03BDA1FC: e40317aa  mov x4, x23
0x03BDA200: 200040f9  ldr x0, [x1]
0x03BDA204: b7031ff8  stur x23, [x29, #-0x10]
0x03BDA208: 280840f9  ldr x8, [x1, #0x10]
0x03BDA20C: 00013fd6  blr x8
0x03BDA210: e00318aa  mov x0, x24
0x03BDA214: e10317aa  mov x1, x23
0x03BDA218: e20315aa  mov x2, x21
0x03BDA21C: d5d1d794  bl #0x71ce970
0x03BDA220: 940e40f9  ldr x20, [x20, #0x18]
0x03BDA224: e00316aa  mov x0, x22
0x03BDA228: e10318aa  mov x1, x24
0x03BDA22C: e20315aa  mov x2, x21
0x03BDA230: d0d1d794  bl #0x71ce970
0x03BDA234: 681e40f9  ldr x8, [x19, #0x38]
0x03BDA238: e10316aa  mov x1, x22
0x03BDA23C: 000540f9  ldr x0, [x8, #8]
0x03BDA240: 559ad697  bl #0x3180b94
0x03BDA244: 940400b4  cbz x20, #0x3bda2d4
0x03BDA248: e9d401f0  adrp x9, #0x7679000
0x03BDA24C: 29b143f9  ldr x9, [x9, #0x760]
0x03BDA250: 8a1e40b9  ldr w10, [x20, #0x1c]
0x03BDA254: 880a40f9  ldr x8, [x20, #0x10]
0x03BDA258: 290140f9  ldr x9, [x9]
0x03BDA25C: 4a050011  add w10, w10, #1
0x03BDA260: 8a1e00b9  str w10, [x20, #0x1c]
0x03BDA264: 880300b4  cbz x8, #0x3bda2d4
0x03BDA268: 8a1a80b9  ldrsw x10, [x20, #0x18]
0x03BDA26C: 0b1940b9  ldr w11, [x8, #0x18]
0x03BDA270: e10300aa  mov x1, x0
0x03BDA274: 5f010b6b  cmp w10, w11
0x03BDA278: e2000054  b.hs #0x3bda294
0x03BDA27C: 49050011  add w9, w10, #1
0x03BDA280: 000d0a8b  add x0, x8, x10, lsl #3
0x03BDA284: 891a00b9  str w9, [x20, #0x18]
0x03BDA288: 010c02f8  str x1, [x0, #0x20]!
0x03BDA28C: ce99d697  bl #0x31809c4
0x03BDA290: 06000014  b #0x3bda2a8
0x03BDA294: 281140f9  ldr x8, [x9, #0x20]
0x03BDA298: e00314aa  mov x0, x20
0x03BDA29C: 086140f9  ldr x8, [x8, #0xc0]
0x03BDA2A0: 023940f9  ldr x2, [x8, #0x70]
0x03BDA2A4: 72a81194  bl #0x404446c
0x03BDA2A8: 281740f9  ldr x8, [x25, #0x28]
0x03BDA2AC: a9835ff8  ldur x9, [x29, #-8]
0x03BDA2B0: 1f0109eb  cmp x8, x9
0x03BDA2B4: 21010054  b.ne #0x3bda2d8
0x03BDA2B8: bf030091  mov sp, x29
0x03BDA2BC: f44f44a9  ldp x20, x19, [sp, #0x40]
0x03BDA2C0: f65743a9  ldp x22, x21, [sp, #0x30]
0x03BDA2C4: f85f42a9  ldp x24, x23, [sp, #0x20]
0x03BDA2C8: fa6741a9  ldp x26, x25, [sp, #0x10]
0x03BDA2CC: fd7bc5a8  ldp x29, x30, [sp], #0x50
0x03BDA2D0: c0035fd6  ret
0x03BDA2D4: 769ad697  bl #0x3180cac
0x03BDA2D8: aed1d794  bl #0x71ce990

