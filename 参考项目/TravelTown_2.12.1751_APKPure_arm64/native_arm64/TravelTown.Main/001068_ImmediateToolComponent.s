; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1068 MergeEngine.ECS.Components.Items.ImmediateToolComponent
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x68FC898 | public bool get_IsToolbox() { }
; bytes=72 sha256=428b048071086a7ea607cb39bcd16d8b9bf38a3aee4189f7287d59393491b16c status=arm64_complete_bound indexed_start=True
0x068FC898: fe0f1ef8  str x30, [sp, #-0x20]!
0x068FC89C: f44f01a9  stp x20, x19, [sp, #0x10]
0x068FC8A0: 74a100b0  adrp x20, #0x7d29000
0x068FC8A4: 88926239  ldrb w8, [x20, #0x8a4]
0x068FC8A8: f30300aa  mov x19, x0
0x068FC8AC: c8000037  tbnz w8, #0, #0x68fc8c4
0x068FC8B0: 407100d0  adrp x0, #0x7726000
0x068FC8B4: 007043f9  ldr x0, [x0, #0x6e0]
0x068FC8B8: 58102297  bl #0x3180a18
0x068FC8BC: 28008052  movz w8, #0x1
0x068FC8C0: 88922239  strb w8, [x20, #0x8a4]
0x068FC8C4: 681240f9  ldr x8, [x19, #0x20]
0x068FC8C8: a80000b4  cbz x8, #0x68fc8dc
0x068FC8CC: 00414039  ldrb w0, [x8, #0x10]
0x068FC8D0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x068FC8D4: fe0742f8  ldr x30, [sp], #0x20
0x068FC8D8: c0035fd6  ret
0x068FC8DC: f4102297  bl #0x3180cac

; RVA 0x68FC8E0 | public List<WeightedTool> get_ToolsWeights() { }
; bytes=72 sha256=f1cb8d223596ff7fe5475a4418da6a98829c9702fe6b86194d1a0c64fc546f8f status=arm64_complete_bound indexed_start=True
0x068FC8E0: fe0f1ef8  str x30, [sp, #-0x20]!
0x068FC8E4: f44f01a9  stp x20, x19, [sp, #0x10]
0x068FC8E8: 74a100b0  adrp x20, #0x7d29000
0x068FC8EC: 88966239  ldrb w8, [x20, #0x8a5]
0x068FC8F0: f30300aa  mov x19, x0
0x068FC8F4: c8000037  tbnz w8, #0, #0x68fc90c
0x068FC8F8: 407100d0  adrp x0, #0x7726000
0x068FC8FC: 007043f9  ldr x0, [x0, #0x6e0]
0x068FC900: 46102297  bl #0x3180a18
0x068FC904: 28008052  movz w8, #0x1
0x068FC908: 88962239  strb w8, [x20, #0x8a5]
0x068FC90C: 681240f9  ldr x8, [x19, #0x20]
0x068FC910: a80000b4  cbz x8, #0x68fc924
0x068FC914: 000d40f9  ldr x0, [x8, #0x18]
0x068FC918: f44f41a9  ldp x20, x19, [sp, #0x10]
0x068FC91C: fe0742f8  ldr x30, [sp], #0x20
0x068FC920: c0035fd6  ret
0x068FC924: e2102297  bl #0x3180cac

; RVA 0x68FC928 | public List<WeightedToolLevel> get_ToolLevelsWeights() { }
; bytes=72 sha256=4f459451033fef2081dcd56a801e615f01db119ba06d3dd6baf49ce413814022 status=arm64_complete_bound indexed_start=True
0x068FC928: fe0f1ef8  str x30, [sp, #-0x20]!
0x068FC92C: f44f01a9  stp x20, x19, [sp, #0x10]
0x068FC930: 74a100b0  adrp x20, #0x7d29000
0x068FC934: 889a6239  ldrb w8, [x20, #0x8a6]
0x068FC938: f30300aa  mov x19, x0
0x068FC93C: c8000037  tbnz w8, #0, #0x68fc954
0x068FC940: 407100d0  adrp x0, #0x7726000
0x068FC944: 007043f9  ldr x0, [x0, #0x6e0]
0x068FC948: 34102297  bl #0x3180a18
0x068FC94C: 28008052  movz w8, #0x1
0x068FC950: 889a2239  strb w8, [x20, #0x8a6]
0x068FC954: 681240f9  ldr x8, [x19, #0x20]
0x068FC958: a80000b4  cbz x8, #0x68fc96c
0x068FC95C: 001140f9  ldr x0, [x8, #0x20]
0x068FC960: f44f41a9  ldp x20, x19, [sp, #0x10]
0x068FC964: fe0742f8  ldr x30, [sp], #0x20
0x068FC968: c0035fd6  ret
0x068FC96C: d0102297  bl #0x3180cac

; RVA 0x68FC970 | public int get_NumberOfToolsToSpawn() { }
; bytes=72 sha256=91cae035c663c0c2f79231faec4930e2e0d1573222962df559188ff44661c462 status=arm64_complete_bound indexed_start=True
0x068FC970: fe0f1ef8  str x30, [sp, #-0x20]!
0x068FC974: f44f01a9  stp x20, x19, [sp, #0x10]
0x068FC978: 74a100b0  adrp x20, #0x7d29000
0x068FC97C: 889e6239  ldrb w8, [x20, #0x8a7]
0x068FC980: f30300aa  mov x19, x0
0x068FC984: c8000037  tbnz w8, #0, #0x68fc99c
0x068FC988: 407100d0  adrp x0, #0x7726000
0x068FC98C: 007043f9  ldr x0, [x0, #0x6e0]
0x068FC990: 22102297  bl #0x3180a18
0x068FC994: 28008052  movz w8, #0x1
0x068FC998: 889e2239  strb w8, [x20, #0x8a7]
0x068FC99C: 681240f9  ldr x8, [x19, #0x20]
0x068FC9A0: a80000b4  cbz x8, #0x68fc9b4
0x068FC9A4: 002940b9  ldr w0, [x8, #0x28]
0x068FC9A8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x068FC9AC: fe0742f8  ldr x30, [sp], #0x20
0x068FC9B0: c0035fd6  ret
0x068FC9B4: be102297  bl #0x3180cac

; RVA 0x68FC9B8 | public void .ctor(ImmediateToolCapability capability, Entity entity) { }
; bytes=96 sha256=1ea4ddf36604dfd69bca2dfb18a39dc0d8cd8a2e8693e83b32a04d9d8db369b4 status=arm64_complete_bound indexed_start=True
0x068FC9B8: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x068FC9BC: f65701a9  stp x22, x21, [sp, #0x10]
0x068FC9C0: f44f02a9  stp x20, x19, [sp, #0x20]
0x068FC9C4: 76a100b0  adrp x22, #0x7d29000
0x068FC9C8: 577100d0  adrp x23, #0x7726000
0x068FC9CC: c8a26239  ldrb w8, [x22, #0x8a8]
0x068FC9D0: f77643f9  ldr x23, [x23, #0x6e8]
0x068FC9D4: f30302aa  mov x19, x2
0x068FC9D8: f40301aa  mov x20, x1
0x068FC9DC: f50300aa  mov x21, x0
0x068FC9E0: c8000037  tbnz w8, #0, #0x68fc9f8
0x068FC9E4: 407100d0  adrp x0, #0x7726000
0x068FC9E8: 007443f9  ldr x0, [x0, #0x6e8]
0x068FC9EC: 0b102297  bl #0x3180a18
0x068FC9F0: 28008052  movz w8, #0x1
0x068FC9F4: c8a22239  strb w8, [x22, #0x8a8]
0x068FC9F8: e30240f9  ldr x3, [x23]
0x068FC9FC: e00315aa  mov x0, x21
0x068FCA00: e10314aa  mov x1, x20
0x068FCA04: e20313aa  mov x2, x19
0x068FCA08: f44f42a9  ldp x20, x19, [sp, #0x20]
0x068FCA0C: f65741a9  ldp x22, x21, [sp, #0x10]
0x068FCA10: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x068FCA14: 518a9117  b #0x4d5f358

