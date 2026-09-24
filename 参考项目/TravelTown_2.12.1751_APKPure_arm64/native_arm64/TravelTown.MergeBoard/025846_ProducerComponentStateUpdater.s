; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25846 Merger.MergeBoard.Logic.State.Updaters.ProducerComponentStateUpdater
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A85828 | protected override void UpdateFromState(ref ProducerComponent component, ItemPayloadBase itemState) { }
; bytes=736 sha256=22b5749f2ffbb6bcdaf57814a742c079ced41d35271c1c2030c474a1c3908f78 status=arm64_complete_bound indexed_start=True
0x06A85828: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x06A8582C: f65701a9  stp x22, x21, [sp, #0x10]
0x06A85830: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A85834: 359500b0  adrp x21, #0x7d2a000
0x06A85838: a8465e39  ldrb w8, [x21, #0x791]
0x06A8583C: f40302aa  mov x20, x2
0x06A85840: f30301aa  mov x19, x1
0x06A85844: 28040037  tbnz w8, #0, #0x6a858c8
0x06A85848: 40620090  adrp x0, #0x76cd000
0x06A8584C: 00a844f9  ldr x0, [x0, #0x950]
0x06A85850: 72ec1b97  bl #0x3180a18
0x06A85854: 40620090  adrp x0, #0x76cd000
0x06A85858: 00ac44f9  ldr x0, [x0, #0x958]
0x06A8585C: 6fec1b97  bl #0x3180a18
0x06A85860: 40620090  adrp x0, #0x76cd000
0x06A85864: 00b044f9  ldr x0, [x0, #0x960]
0x06A85868: 6cec1b97  bl #0x3180a18
0x06A8586C: 40620090  adrp x0, #0x76cd000
0x06A85870: 00b444f9  ldr x0, [x0, #0x968]
0x06A85874: 69ec1b97  bl #0x3180a18
0x06A85878: 40620090  adrp x0, #0x76cd000
0x06A8587C: 00c444f9  ldr x0, [x0, #0x988]
0x06A85880: 66ec1b97  bl #0x3180a18
0x06A85884: 40620090  adrp x0, #0x76cd000
0x06A85888: 00c844f9  ldr x0, [x0, #0x990]
0x06A8588C: 63ec1b97  bl #0x3180a18
0x06A85890: e05f00b0  adrp x0, #0x7682000
0x06A85894: 009446f9  ldr x0, [x0, #0xd28]
0x06A85898: 60ec1b97  bl #0x3180a18
0x06A8589C: 60650090  adrp x0, #0x7731000
0x06A858A0: 006046f9  ldr x0, [x0, #0xcc0]
0x06A858A4: 5dec1b97  bl #0x3180a18
0x06A858A8: 60650090  adrp x0, #0x7731000
0x06A858AC: 006446f9  ldr x0, [x0, #0xcc8]
0x06A858B0: 5aec1b97  bl #0x3180a18
0x06A858B4: 60650090  adrp x0, #0x7731000
0x06A858B8: 006846f9  ldr x0, [x0, #0xcd0]
0x06A858BC: 57ec1b97  bl #0x3180a18
0x06A858C0: 28008052  movz w8, #0x1
0x06A858C4: a8461e39  strb w8, [x21, #0x791]
0x06A858C8: 741100b4  cbz x20, #0x6a85af4
0x06A858CC: 883a40f9  ldr x8, [x20, #0x70]
0x06A858D0: 281100b4  cbz x8, #0x6a85af4
0x06A858D4: 094940b9  ldr w9, [x8, #0x48]
0x06A858D8: eb5f00b0  adrp x11, #0x7682000
0x06A858DC: 0a3d40b9  ldr w10, [x8, #0x3c]
0x06A858E0: 740a40f9  ldr x20, [x19, #0x10]
0x06A858E4: 6b9546f9  ldr x11, [x11, #0xd28]
0x06A858E8: 690a00b9  str w9, [x19, #8]
0x06A858EC: 154d40b9  ldr w21, [x8, #0x4c]
0x06A858F0: 5601090b  add w22, w10, w9
0x06A858F4: 600140f9  ldr x0, [x11]
0x06A858F8: eaec1b97  bl #0x3180ca0
0x06A858FC: e10314aa  mov x1, x20
0x06A85900: e203162a  mov w2, w22
0x06A85904: e303152a  mov w3, w21
0x06A85908: e4031faa  mov x4, xzr
0x06A8590C: f70300aa  mov x23, x0
0x06A85910: 2e8cd597  bl #0x5fe89c8
0x06A85914: e00313aa  mov x0, x19
0x06A85918: e10317aa  mov x1, x23
0x06A8591C: 770200f9  str x23, [x19]
0x06A85920: 29ec1b97  bl #0x31809c4
0x06A85924: 600a40f9  ldr x0, [x19, #0x10]
0x06A85928: e1031faa  mov x1, xzr
0x06A8592C: 23cbdf97  bl #0x62785b8
0x06A85930: 80010036  tbz w0, #0, #0x6a85960
0x06A85934: 680a40f9  ldr x8, [x19, #0x10]
0x06A85938: 680e00b4  cbz x8, #0x6a85b04
0x06A8593C: 600240f9  ldr x0, [x19]
0x06A85940: 200e00b4  cbz x0, #0x6a85b04
0x06A85944: 013540f9  ldr x1, [x8, #0x68]
0x06A85948: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A8594C: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A85950: e2031f2a  mov w2, wzr
0x06A85954: e3031faa  mov x3, xzr
0x06A85958: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x06A8595C: 748ed517  b #0x5fe932c
0x06A85960: 600a40f9  ldr x0, [x19, #0x10]
0x06A85964: e1031faa  mov x1, xzr
0x06A85968: fccadf97  bl #0x6278558
0x06A8596C: 400c0036  tbz w0, #0, #0x6a85af4
0x06A85970: 680a40f9  ldr x8, [x19, #0x10]
0x06A85974: 880c00b4  cbz x8, #0x6a85b04
0x06A85978: 77650090  adrp x23, #0x7731000
0x06A8597C: f76a46f9  ldr x23, [x23, #0xcd0]
0x06A85980: 143540f9  ldr x20, [x8, #0x68]
0x06A85984: e00240f9  ldr x0, [x23]
0x06A85988: 09e040b9  ldr w9, [x0, #0xe0]
0x06A8598C: 69000035  cbnz w9, #0x6a85998
0x06A85990: 7fec1b97  bl #0x3180b8c
0x06A85994: e00240f9  ldr x0, [x23]
0x06A85998: 085c40f9  ldr x8, [x0, #0xb8]
0x06A8599C: 150540f9  ldr x21, [x8, #8]
0x06A859A0: f50200b5  cbnz x21, #0x6a859fc
0x06A859A4: 08e040b9  ldr w8, [x0, #0xe0]
0x06A859A8: 68000035  cbnz w8, #0x6a859b4
0x06A859AC: 78ec1b97  bl #0x3180b8c
0x06A859B0: e00240f9  ldr x0, [x23]
0x06A859B4: 49620090  adrp x9, #0x76cd000
0x06A859B8: 085c40f9  ldr x8, [x0, #0xb8]
0x06A859BC: 29c544f9  ldr x9, [x9, #0x988]
0x06A859C0: 160140f9  ldr x22, [x8]
0x06A859C4: 200140f9  ldr x0, [x9]
0x06A859C8: b6ec1b97  bl #0x3180ca0
0x06A859CC: 68650090  adrp x8, #0x7731000
0x06A859D0: 086146f9  ldr x8, [x8, #0xcc0]
0x06A859D4: e10316aa  mov x1, x22
0x06A859D8: e3031faa  mov x3, xzr
0x06A859DC: f50300aa  mov x21, x0
0x06A859E0: 020140f9  ldr x2, [x8]
0x06A859E4: f5439f97  bl #0x52569b8
0x06A859E8: e80240f9  ldr x8, [x23]
0x06A859EC: e10315aa  mov x1, x21
0x06A859F0: 005d40f9  ldr x0, [x8, #0xb8]
0x06A859F4: 158c00f8  str x21, [x0, #8]!
0x06A859F8: f3eb1b97  bl #0x31809c4
0x06A859FC: 48620090  adrp x8, #0x76cd000
0x06A85A00: 08ad44f9  ldr x8, [x8, #0x958]
0x06A85A04: e00314aa  mov x0, x20
0x06A85A08: e10315aa  mov x1, x21
0x06A85A0C: 020140f9  ldr x2, [x8]
0x06A85A10: a2364797  bl #0x3c53498
0x06A85A14: 48620090  adrp x8, #0x76cd000
0x06A85A18: 08a944f9  ldr x8, [x8, #0x950]
0x06A85A1C: 010140f9  ldr x1, [x8]
0x06A85A20: 0ddb4697  bl #0x3c3c654
0x06A85A24: e80240f9  ldr x8, [x23]
0x06A85A28: f40300aa  mov x20, x0
0x06A85A2C: 09e140b9  ldr w9, [x8, #0xe0]
0x06A85A30: 89000035  cbnz w9, #0x6a85a40
0x06A85A34: e00308aa  mov x0, x8
0x06A85A38: 55ec1b97  bl #0x3180b8c
0x06A85A3C: e80240f9  ldr x8, [x23]
0x06A85A40: 095d40f9  ldr x9, [x8, #0xb8]
0x06A85A44: 350940f9  ldr x21, [x9, #0x10]
0x06A85A48: 150300b5  cbnz x21, #0x6a85aa8
0x06A85A4C: 09e140b9  ldr w9, [x8, #0xe0]
0x06A85A50: 89000035  cbnz w9, #0x6a85a60
0x06A85A54: e00308aa  mov x0, x8
0x06A85A58: 4dec1b97  bl #0x3180b8c
0x06A85A5C: e80240f9  ldr x8, [x23]
0x06A85A60: 49620090  adrp x9, #0x76cd000
0x06A85A64: 085d40f9  ldr x8, [x8, #0xb8]
0x06A85A68: 29c944f9  ldr x9, [x9, #0x990]
0x06A85A6C: 160140f9  ldr x22, [x8]
0x06A85A70: 200140f9  ldr x0, [x9]
0x06A85A74: 8bec1b97  bl #0x3180ca0
0x06A85A78: 68650090  adrp x8, #0x7731000
0x06A85A7C: 086546f9  ldr x8, [x8, #0xcc8]
0x06A85A80: e10316aa  mov x1, x22
0x06A85A84: e3031faa  mov x3, xzr
0x06A85A88: f50300aa  mov x21, x0
0x06A85A8C: 020140f9  ldr x2, [x8]
0x06A85A90: ca439f97  bl #0x52569b8
0x06A85A94: e80240f9  ldr x8, [x23]
0x06A85A98: e10315aa  mov x1, x21
0x06A85A9C: 005d40f9  ldr x0, [x8, #0xb8]
0x06A85AA0: 150c01f8  str x21, [x0, #0x10]!
0x06A85AA4: c8eb1b97  bl #0x31809c4
0x06A85AA8: 48620090  adrp x8, #0x76cd000
0x06A85AAC: 08b144f9  ldr x8, [x8, #0x960]
0x06A85AB0: e00314aa  mov x0, x20
0x06A85AB4: e10315aa  mov x1, x21
0x06A85AB8: 020140f9  ldr x2, [x8]
0x06A85ABC: f62b4797  bl #0x3c50a94
0x06A85AC0: 48620090  adrp x8, #0x76cd000
0x06A85AC4: 08b544f9  ldr x8, [x8, #0x968]
0x06A85AC8: 010140f9  ldr x1, [x8]
0x06A85ACC: 41694797  bl #0x3c5ffd0
0x06A85AD0: 680240f9  ldr x8, [x19]
0x06A85AD4: 880100b4  cbz x8, #0x6a85b04
0x06A85AD8: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A85ADC: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A85AE0: e10300aa  mov x1, x0
0x06A85AE4: e00308aa  mov x0, x8
0x06A85AE8: e2031faa  mov x2, xzr
0x06A85AEC: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x06A85AF0: 5592d517  b #0x5fea444
0x06A85AF4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A85AF8: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A85AFC: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x06A85B00: c0035fd6  ret
0x06A85B04: 6aec1b97  bl #0x3180cac

; RVA 0x6A85B08 | public void .ctor() { }
; bytes=72 sha256=a602fa110d50a79c1639bb22d3881a7d180884eac136f3851b55139b0c1be901 status=arm64_complete_bound indexed_start=True
0x06A85B08: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A85B0C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A85B10: 349500b0  adrp x20, #0x7d2a000
0x06A85B14: 75650090  adrp x21, #0x7731000
0x06A85B18: 884a5e39  ldrb w8, [x20, #0x792]
0x06A85B1C: b56e46f9  ldr x21, [x21, #0xcd8]
0x06A85B20: f30300aa  mov x19, x0
0x06A85B24: c8000037  tbnz w8, #0, #0x6a85b3c
0x06A85B28: 60650090  adrp x0, #0x7731000
0x06A85B2C: 006c46f9  ldr x0, [x0, #0xcd8]
0x06A85B30: baeb1b97  bl #0x3180a18
0x06A85B34: 28008052  movz w8, #0x1
0x06A85B38: 884a1e39  strb w8, [x20, #0x792]
0x06A85B3C: a10240f9  ldr x1, [x21]
0x06A85B40: e00313aa  mov x0, x19
0x06A85B44: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A85B48: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A85B4C: 636a8b17  b #0x4d604d8

