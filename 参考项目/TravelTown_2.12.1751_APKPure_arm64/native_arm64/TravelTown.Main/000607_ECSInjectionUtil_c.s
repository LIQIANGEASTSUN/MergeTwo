; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 607 .ECSInjectionUtil.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6271B38 | private static void .cctor() { }
; bytes=104 sha256=8c51cbc7a8c32d3702ee5f267ce5492eeceffce36a2e6ae6363f852fc9e2b8f7 status=arm64_complete_bound indexed_start=True
0x06271B38: fe0f1ef8  str x30, [sp, #-0x20]!
0x06271B3C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06271B40: b3d50090  adrp x19, #0x7d25000
0x06271B44: b4a300b0  adrp x20, #0x76e6000
0x06271B48: 68c25039  ldrb w8, [x19, #0x430]
0x06271B4C: 941a43f9  ldr x20, [x20, #0x630]
0x06271B50: c8000037  tbnz w8, #0, #0x6271b68
0x06271B54: a0a300b0  adrp x0, #0x76e6000
0x06271B58: 001843f9  ldr x0, [x0, #0x630]
0x06271B5C: af3b3c97  bl #0x3180a18
0x06271B60: 28008052  movz w8, #0x1
0x06271B64: 68c21039  strb w8, [x19, #0x430]
0x06271B68: 800240f9  ldr x0, [x20]
0x06271B6C: 4d3c3c97  bl #0x3180ca0
0x06271B70: e1031faa  mov x1, xzr
0x06271B74: f30300aa  mov x19, x0
0x06271B78: a1a2d197  bl #0x56da5fc
0x06271B7C: 880240f9  ldr x8, [x20]
0x06271B80: e10313aa  mov x1, x19
0x06271B84: 085d40f9  ldr x8, [x8, #0xb8]
0x06271B88: 130100f9  str x19, [x8]
0x06271B8C: 880240f9  ldr x8, [x20]
0x06271B90: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06271B94: 005d40f9  ldr x0, [x8, #0xb8]
0x06271B98: fe0742f8  ldr x30, [sp], #0x20
0x06271B9C: 8a3b3c17  b #0x31809c4

; RVA 0x6271BA0 | public void .ctor() { }
; bytes=8 sha256=8b1497f49e895b1f09df2b5fa67178f31ee22b5105e5a9074850511993496234 status=arm64_complete_bound indexed_start=True
0x06271BA0: e1031faa  mov x1, xzr
0x06271BA4: 96a2d117  b #0x56da5fc

; RVA 0x6271BA8 | internal bool <InjectComponents>b__2_0(FieldInfo field) { }
; bytes=84 sha256=de7e09e982da59f8a86cdda37aed41b6af775f4133d205fc2eabd43cfa31a1af status=arm64_complete_bound indexed_start=True
0x06271BA8: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06271BAC: f44f01a9  stp x20, x19, [sp, #0x10]
0x06271BB0: b4d50090  adrp x20, #0x7d25000
0x06271BB4: b5a300b0  adrp x21, #0x76e6000
0x06271BB8: 88c65039  ldrb w8, [x20, #0x431]
0x06271BBC: b53243f9  ldr x21, [x21, #0x660]
0x06271BC0: f30301aa  mov x19, x1
0x06271BC4: c8000037  tbnz w8, #0, #0x6271bdc
0x06271BC8: a0a300b0  adrp x0, #0x76e6000
0x06271BCC: 003043f9  ldr x0, [x0, #0x660]
0x06271BD0: 923b3c97  bl #0x3180a18
0x06271BD4: 28008052  movz w8, #0x1
0x06271BD8: 88c61039  strb w8, [x20, #0x431]
0x06271BDC: a10240f9  ldr x1, [x21]
0x06271BE0: e00313aa  mov x0, x19
0x06271BE4: cd0d6697  bl #0x3bf5318
0x06271BE8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06271BEC: 1f0000f1  cmp x0, #0
0x06271BF0: e0079f1a  cset w0, ne
0x06271BF4: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06271BF8: c0035fd6  ret

; RVA 0x6271BFC | internal bool <InjectSystems>b__3_0(FieldInfo field) { }
; bytes=84 sha256=31715c7bab462be815eb47e689eda1bfde0de9fbe573e3db643d7cf2f13670e5 status=arm64_complete_bound indexed_start=True
0x06271BFC: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06271C00: f44f01a9  stp x20, x19, [sp, #0x10]
0x06271C04: b4d50090  adrp x20, #0x7d25000
0x06271C08: b5a300b0  adrp x21, #0x76e6000
0x06271C0C: 88ca5039  ldrb w8, [x20, #0x432]
0x06271C10: b53643f9  ldr x21, [x21, #0x668]
0x06271C14: f30301aa  mov x19, x1
0x06271C18: c8000037  tbnz w8, #0, #0x6271c30
0x06271C1C: a0a300b0  adrp x0, #0x76e6000
0x06271C20: 003443f9  ldr x0, [x0, #0x668]
0x06271C24: 7d3b3c97  bl #0x3180a18
0x06271C28: 28008052  movz w8, #0x1
0x06271C2C: 88ca1039  strb w8, [x20, #0x432]
0x06271C30: a10240f9  ldr x1, [x21]
0x06271C34: e00313aa  mov x0, x19
0x06271C38: b80d6697  bl #0x3bf5318
0x06271C3C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06271C40: 1f0000f1  cmp x0, #0
0x06271C44: e0079f1a  cset w0, ne
0x06271C48: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06271C4C: c0035fd6  ret

