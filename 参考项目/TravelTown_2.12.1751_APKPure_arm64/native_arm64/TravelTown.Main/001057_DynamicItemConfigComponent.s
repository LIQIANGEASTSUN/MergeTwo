; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1057 MergeEngine.ECS.Components.Items.DynamicItemConfigComponent
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x68FC01C | public DynamicMergeItemConfig get_DynamicItemConfig() { }
; bytes=60 sha256=35e1b022f5e7c63b4ed60d4f269cdfa256e58fc6ba9720fd1494e6d2526b663b status=arm64_complete_bound indexed_start=True
0x068FC01C: fe0f1ef8  str x30, [sp, #-0x20]!
0x068FC020: f44f01a9  stp x20, x19, [sp, #0x10]
0x068FC024: 74a100b0  adrp x20, #0x7d29000
0x068FC028: 88666239  ldrb w8, [x20, #0x899]
0x068FC02C: f30300aa  mov x19, x0
0x068FC030: c8000037  tbnz w8, #0, #0x68fc048
0x068FC034: 407100d0  adrp x0, #0x7726000
0x068FC038: 003c43f9  ldr x0, [x0, #0x678]
0x068FC03C: 77122297  bl #0x3180a18
0x068FC040: 28008052  movz w8, #0x1
0x068FC044: 88662239  strb w8, [x20, #0x899]
0x068FC048: 601240f9  ldr x0, [x19, #0x20]
0x068FC04C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x068FC050: fe0742f8  ldr x30, [sp], #0x20
0x068FC054: c0035fd6  ret

; RVA 0x68FC058 | public string get_DynamicMergeItemId() { }
; bytes=72 sha256=74cd880c6d891d7041ae2f8928e97053af15596988f46569730aa81c362473c9 status=arm64_complete_bound indexed_start=True
0x068FC058: fe0f1ef8  str x30, [sp, #-0x20]!
0x068FC05C: f44f01a9  stp x20, x19, [sp, #0x10]
0x068FC060: 74a100b0  adrp x20, #0x7d29000
0x068FC064: 886a6239  ldrb w8, [x20, #0x89a]
0x068FC068: f30300aa  mov x19, x0
0x068FC06C: c8000037  tbnz w8, #0, #0x68fc084
0x068FC070: 407100d0  adrp x0, #0x7726000
0x068FC074: 003c43f9  ldr x0, [x0, #0x678]
0x068FC078: 68122297  bl #0x3180a18
0x068FC07C: 28008052  movz w8, #0x1
0x068FC080: 886a2239  strb w8, [x20, #0x89a]
0x068FC084: 681240f9  ldr x8, [x19, #0x20]
0x068FC088: a80000b4  cbz x8, #0x68fc09c
0x068FC08C: 000940f9  ldr x0, [x8, #0x10]
0x068FC090: f44f41a9  ldp x20, x19, [sp, #0x10]
0x068FC094: fe0742f8  ldr x30, [sp], #0x20
0x068FC098: c0035fd6  ret
0x068FC09C: 04132297  bl #0x3180cac

; RVA 0x68FC0A0 | public void .ctor(DynamicMergeItemConfig capability, Entity entity) { }
; bytes=96 sha256=4defaf701c6859a16122d666bf52e45a6d44ad1a9348ce0ce9b9409ee34939ba status=arm64_complete_bound indexed_start=True
0x068FC0A0: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x068FC0A4: f65701a9  stp x22, x21, [sp, #0x10]
0x068FC0A8: f44f02a9  stp x20, x19, [sp, #0x20]
0x068FC0AC: 76a100b0  adrp x22, #0x7d29000
0x068FC0B0: 577100d0  adrp x23, #0x7726000
0x068FC0B4: c86e6239  ldrb w8, [x22, #0x89b]
0x068FC0B8: f74243f9  ldr x23, [x23, #0x680]
0x068FC0BC: f30302aa  mov x19, x2
0x068FC0C0: f40301aa  mov x20, x1
0x068FC0C4: f50300aa  mov x21, x0
0x068FC0C8: c8000037  tbnz w8, #0, #0x68fc0e0
0x068FC0CC: 407100d0  adrp x0, #0x7726000
0x068FC0D0: 004043f9  ldr x0, [x0, #0x680]
0x068FC0D4: 51122297  bl #0x3180a18
0x068FC0D8: 28008052  movz w8, #0x1
0x068FC0DC: c86e2239  strb w8, [x22, #0x89b]
0x068FC0E0: e30240f9  ldr x3, [x23]
0x068FC0E4: e00315aa  mov x0, x21
0x068FC0E8: e10314aa  mov x1, x20
0x068FC0EC: e20313aa  mov x2, x19
0x068FC0F0: f44f42a9  ldp x20, x19, [sp, #0x20]
0x068FC0F4: f65741a9  ldp x22, x21, [sp, #0x10]
0x068FC0F8: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x068FC0FC: 978c9117  b #0x4d5f358

