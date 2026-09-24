; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1082 MergeEngine.ECS.Components.Items.MergeComponent
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x68FDAA0 | public MergeType get_MergeType() { }
; bytes=8 sha256=ba269e200604d0dd95f57e6bd974cfb4fb4a15db1799161315f4b00aef67931c status=arm64_complete_bound indexed_start=True
0x068FDAA0: 002840b9  ldr w0, [x0, #0x28]
0x068FDAA4: c0035fd6  ret

; RVA 0x68FDAA8 | public void set_MergeType(MergeType value) { }
; bytes=8 sha256=9e40c154908b27c28daea725a2a8b301cdb33ac03bba4f1283b986b2c7c65080 status=arm64_complete_bound indexed_start=True
0x068FDAA8: 012800b9  str w1, [x0, #0x28]
0x068FDAAC: c0035fd6  ret

; RVA 0x68FDAB0 | public string get_SpecificMergeItem() { }
; bytes=8 sha256=6b819324b4a3bc2d390c83c7fe02ea41a1f57ae5d4f2a9b0c9256341a5b8d37f status=arm64_complete_bound indexed_start=True
0x068FDAB0: 001840f9  ldr x0, [x0, #0x30]
0x068FDAB4: c0035fd6  ret

; RVA 0x68FDAB8 | public void set_SpecificMergeItem(string value) { }
; bytes=8 sha256=c1979304de7c04f9db6e1ef0493b551892b1063a6466f5db69d8c3d662a5182c status=arm64_complete_bound indexed_start=True
0x068FDAB8: 010c03f8  str x1, [x0, #0x30]!
0x068FDABC: c20b2217  b #0x31809c4

; RVA 0x68FDAC0 | public void .ctor(MergeCapability capability, Entity entity) { }
; bytes=128 sha256=c6f183600bf398e97b6ae05075b7ae5f1b06c0a27e23b3fb8977878f5d653ca4 status=arm64_complete_bound indexed_start=True
0x068FDAC0: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x068FDAC4: f65701a9  stp x22, x21, [sp, #0x10]
0x068FDAC8: f44f02a9  stp x20, x19, [sp, #0x20]
0x068FDACC: 76a10090  adrp x22, #0x7d29000
0x068FDAD0: 577100b0  adrp x23, #0x7726000
0x068FDAD4: c8d66239  ldrb w8, [x22, #0x8b5]
0x068FDAD8: f7c243f9  ldr x23, [x23, #0x780]
0x068FDADC: f50302aa  mov x21, x2
0x068FDAE0: f40301aa  mov x20, x1
0x068FDAE4: f30300aa  mov x19, x0
0x068FDAE8: c8000037  tbnz w8, #0, #0x68fdb00
0x068FDAEC: 407100b0  adrp x0, #0x7726000
0x068FDAF0: 00c043f9  ldr x0, [x0, #0x780]
0x068FDAF4: c90b2297  bl #0x3180a18
0x068FDAF8: 28008052  movz w8, #0x1
0x068FDAFC: c8d62239  strb w8, [x22, #0x8b5]
0x068FDB00: e30240f9  ldr x3, [x23]
0x068FDB04: e00313aa  mov x0, x19
0x068FDB08: e10314aa  mov x1, x20
0x068FDB0C: e20315aa  mov x2, x21
0x068FDB10: 12869197  bl #0x4d5f358
0x068FDB14: 540100b4  cbz x20, #0x68fdb3c
0x068FDB18: 881640b9  ldr w8, [x20, #0x14]
0x068FDB1C: f65741a9  ldp x22, x21, [sp, #0x10]
0x068FDB20: 682a00b9  str w8, [x19, #0x28]
0x068FDB24: 810e40f9  ldr x1, [x20, #0x18]
0x068FDB28: 610e03f8  str x1, [x19, #0x30]!
0x068FDB2C: e00313aa  mov x0, x19
0x068FDB30: f44f42a9  ldp x20, x19, [sp, #0x20]
0x068FDB34: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x068FDB38: a30b2217  b #0x31809c4
0x068FDB3C: 5c0c2297  bl #0x3180cac

