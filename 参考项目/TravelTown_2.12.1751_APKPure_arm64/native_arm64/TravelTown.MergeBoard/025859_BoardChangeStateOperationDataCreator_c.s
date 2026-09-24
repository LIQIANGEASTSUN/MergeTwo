; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25859 .BoardChangeStateOperationDataCreator.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A89D90 | private static void .cctor() { }
; bytes=104 sha256=e5d5996d3703a0164ea4bc65789f04c31cc70aebdd23fff1fb62bd5a6ecbe340 status=arm64_complete_bound indexed_start=True
0x06A89D90: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A89D94: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A89D98: 139500b0  adrp x19, #0x7d2a000
0x06A89D9C: 54650090  adrp x20, #0x7731000
0x06A89DA0: 68c25e39  ldrb w8, [x19, #0x7b0]
0x06A89DA4: 940647f9  ldr x20, [x20, #0xe08]
0x06A89DA8: c8000037  tbnz w8, #0, #0x6a89dc0
0x06A89DAC: 40650090  adrp x0, #0x7731000
0x06A89DB0: 000447f9  ldr x0, [x0, #0xe08]
0x06A89DB4: 19db1b97  bl #0x3180a18
0x06A89DB8: 28008052  movz w8, #0x1
0x06A89DBC: 68c21e39  strb w8, [x19, #0x7b0]
0x06A89DC0: 800240f9  ldr x0, [x20]
0x06A89DC4: b7db1b97  bl #0x3180ca0
0x06A89DC8: e1031faa  mov x1, xzr
0x06A89DCC: f30300aa  mov x19, x0
0x06A89DD0: 0b42b197  bl #0x56da5fc
0x06A89DD4: 880240f9  ldr x8, [x20]
0x06A89DD8: e10313aa  mov x1, x19
0x06A89DDC: 085d40f9  ldr x8, [x8, #0xb8]
0x06A89DE0: 130100f9  str x19, [x8]
0x06A89DE4: 880240f9  ldr x8, [x20]
0x06A89DE8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A89DEC: 005d40f9  ldr x0, [x8, #0xb8]
0x06A89DF0: fe0742f8  ldr x30, [sp], #0x20
0x06A89DF4: f4da1b17  b #0x31809c4

; RVA 0x6A89DF8 | public void .ctor() { }
; bytes=8 sha256=84cc82e6c7291d1b091201f46d99a9d3a87cfdf7e845470bbdf4933825a1029a status=arm64_complete_bound indexed_start=True
0x06A89DF8: e1031faa  mov x1, xzr
0x06A89DFC: 0042b117  b #0x56da5fc

; RVA 0x6A89E00 | internal bool <CreateOperationData>b__2_0(Entity entity) { }
; bytes=92 sha256=492b76bd04da0b93f2f894c34acbb2c1742ee5e36d9e6877fba96fa74d47933c status=arm64_complete_bound indexed_start=True
0x06A89E00: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A89E04: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A89E08: 149500b0  adrp x20, #0x7d2a000
0x06A89E0C: 88c65e39  ldrb w8, [x20, #0x7b1]
0x06A89E10: f30301aa  mov x19, x1
0x06A89E14: c8000037  tbnz w8, #0, #0x6a89e2c
0x06A89E18: 206500d0  adrp x0, #0x772f000
0x06A89E1C: 008c42f9  ldr x0, [x0, #0x518]
0x06A89E20: feda1b97  bl #0x3180a18
0x06A89E24: 28008052  movz w8, #0x1
0x06A89E28: 88c61e39  strb w8, [x20, #0x7b1]
0x06A89E2C: 730100b4  cbz x19, #0x6a89e58
0x06A89E30: 286500d0  adrp x8, #0x772f000
0x06A89E34: 088d42f9  ldr x8, [x8, #0x518]
0x06A89E38: e00313aa  mov x0, x19
0x06A89E3C: 010140f9  ldr x1, [x8]
0x06A89E40: a6464697  bl #0x3c1b8d8
0x06A89E44: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A89E48: e803202a  mvn w8, w0
0x06A89E4C: 00010012  and w0, w8, #1
0x06A89E50: fe0742f8  ldr x30, [sp], #0x20
0x06A89E54: c0035fd6  ret
0x06A89E58: 95db1b97  bl #0x3180cac

