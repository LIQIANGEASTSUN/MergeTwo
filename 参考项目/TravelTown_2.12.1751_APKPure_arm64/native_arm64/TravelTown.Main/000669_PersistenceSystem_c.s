; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 669 .PersistenceSystem.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x628DD90 | private static void .cctor() { }
; bytes=104 sha256=4e5182c21136215d479256ab58bb24be2c76d15fa3af6d8dc7bb19995383e9cf status=arm64_complete_bound indexed_start=True
0x0628DD90: fe0f1ef8  str x30, [sp, #-0x20]!
0x0628DD94: f44f01a9  stp x20, x19, [sp, #0x10]
0x0628DD98: d3d40090  adrp x19, #0x7d25000
0x0628DD9C: d4a200d0  adrp x20, #0x76e7000
0x0628DDA0: 68725439  ldrb w8, [x19, #0x51c]
0x0628DDA4: 941a43f9  ldr x20, [x20, #0x630]
0x0628DDA8: c8000037  tbnz w8, #0, #0x628ddc0
0x0628DDAC: c0a200d0  adrp x0, #0x76e7000
0x0628DDB0: 001843f9  ldr x0, [x0, #0x630]
0x0628DDB4: 19cb3b97  bl #0x3180a18
0x0628DDB8: 28008052  movz w8, #0x1
0x0628DDBC: 68721439  strb w8, [x19, #0x51c]
0x0628DDC0: 800240f9  ldr x0, [x20]
0x0628DDC4: b7cb3b97  bl #0x3180ca0
0x0628DDC8: e1031faa  mov x1, xzr
0x0628DDCC: f30300aa  mov x19, x0
0x0628DDD0: 0b32d197  bl #0x56da5fc
0x0628DDD4: 880240f9  ldr x8, [x20]
0x0628DDD8: e10313aa  mov x1, x19
0x0628DDDC: 085d40f9  ldr x8, [x8, #0xb8]
0x0628DDE0: 130100f9  str x19, [x8]
0x0628DDE4: 880240f9  ldr x8, [x20]
0x0628DDE8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0628DDEC: 005d40f9  ldr x0, [x8, #0xb8]
0x0628DDF0: fe0742f8  ldr x30, [sp], #0x20
0x0628DDF4: f4ca3b17  b #0x31809c4

; RVA 0x628DDF8 | public void .ctor() { }
; bytes=8 sha256=879862747cc1f398c8b714dfab26453119dbe27aeb039b06dddf63c5ba7428c1 status=arm64_complete_bound indexed_start=True
0x0628DDF8: e1031faa  mov x1, xzr
0x0628DDFC: 0032d117  b #0x56da5fc

; RVA 0x628DE00 | internal bool <InitializeSystem>b__15_0(FieldInfo field) { }
; bytes=84 sha256=80ff0568beb498f9a44d707e5fac38390bb053b5c03a32648241ebd27d364657 status=arm64_complete_bound indexed_start=True
0x0628DE00: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0628DE04: f44f01a9  stp x20, x19, [sp, #0x10]
0x0628DE08: d4d40090  adrp x20, #0x7d25000
0x0628DE0C: d5a200d0  adrp x21, #0x76e7000
0x0628DE10: 88765439  ldrb w8, [x20, #0x51d]
0x0628DE14: b5d243f9  ldr x21, [x21, #0x7a0]
0x0628DE18: f30301aa  mov x19, x1
0x0628DE1C: c8000037  tbnz w8, #0, #0x628de34
0x0628DE20: c0a200d0  adrp x0, #0x76e7000
0x0628DE24: 00d043f9  ldr x0, [x0, #0x7a0]
0x0628DE28: fcca3b97  bl #0x3180a18
0x0628DE2C: 28008052  movz w8, #0x1
0x0628DE30: 88761439  strb w8, [x20, #0x51d]
0x0628DE34: a10240f9  ldr x1, [x21]
0x0628DE38: e00313aa  mov x0, x19
0x0628DE3C: 379d6597  bl #0x3bf5318
0x0628DE40: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0628DE44: 1f0000f1  cmp x0, #0
0x0628DE48: e0079f1a  cset w0, ne
0x0628DE4C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0628DE50: c0035fd6  ret

; RVA 0x628DE54 | internal string <InitializeSystem>b__15_1(FieldInfo field) { }
; bytes=56 sha256=dd8b9d811b78d027b9fb963cb5f09acd770a2ea14384cc6c818aa2b559d08d24 status=arm64_complete_bound indexed_start=True
0x0628DE54: fe0f1ff8  str x30, [sp, #-0x10]!
0x0628DE58: 810100b4  cbz x1, #0x628de88
0x0628DE5C: 280040f9  ldr x8, [x1]
0x0628DE60: e00301aa  mov x0, x1
0x0628DE64: e1031faa  mov x1, xzr
0x0628DE68: 096541f9  ldr x9, [x8, #0x2c8]
0x0628DE6C: 026941f9  ldr x2, [x8, #0x2d0]
0x0628DE70: 20013fd6  blr x9
0x0628DE74: a00000b4  cbz x0, #0x628de88
0x0628DE78: 080040f9  ldr x8, [x0]
0x0628DE7C: 028556a9  ldp x2, x1, [x8, #0x168]
0x0628DE80: fe0741f8  ldr x30, [sp], #0x10
0x0628DE84: 40001fd6  br x2
0x0628DE88: 89cb3b97  bl #0x3180cac

; RVA 0x628DE8C | internal bool <SerializeAndSave>b__26_0(PersistentComponent persistent) { }
; bytes=24 sha256=734a2b863db9e29a9dbbf78cb3e3f1dcebb88d27d207bf7a2499288d339b23db status=arm64_complete_bound indexed_start=True
0x0628DE8C: fe0f1ff8  str x30, [sp, #-0x10]!
0x0628DE90: 810000b4  cbz x1, #0x628dea0
0x0628DE94: 20a04039  ldrb w0, [x1, #0x28]
0x0628DE98: fe0741f8  ldr x30, [sp], #0x10
0x0628DE9C: c0035fd6  ret
0x0628DEA0: 83cb3b97  bl #0x3180cac

