; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1085 MergeEngine.ECS.Components.Items.PositionComponent
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x68FDBC0 | public override string get_ComponentKey() { }
; bytes=64 sha256=a17eb62fe5eb21ec4b907232d528cdc710a076becc256b8b2e89dcf37f9ae292 status=arm64_complete_bound indexed_start=True
0x068FDBC0: fe0f1ef8  str x30, [sp, #-0x20]!
0x068FDBC4: f44f01a9  stp x20, x19, [sp, #0x10]
0x068FDBC8: 73a10090  adrp x19, #0x7d29000
0x068FDBCC: b46d0090  adrp x20, #0x76b1000
0x068FDBD0: 68de6239  ldrb w8, [x19, #0x8b7]
0x068FDBD4: 945a40f9  ldr x20, [x20, #0xb0]
0x068FDBD8: c8000037  tbnz w8, #0, #0x68fdbf0
0x068FDBDC: a06d0090  adrp x0, #0x76b1000
0x068FDBE0: 005840f9  ldr x0, [x0, #0xb0]
0x068FDBE4: 8d0b2297  bl #0x3180a18
0x068FDBE8: 28008052  movz w8, #0x1
0x068FDBEC: 68de2239  strb w8, [x19, #0x8b7]
0x068FDBF0: 800240f9  ldr x0, [x20]
0x068FDBF4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x068FDBF8: fe0742f8  ldr x30, [sp], #0x20
0x068FDBFC: c0035fd6  ret

; RVA 0x68FDC00 | public void .ctor(BoardItemPosition position, Entity entity) { }
; bytes=120 sha256=d1400829546ef29328a71f4d785ae6a01ed7260bba5dad1fd4ad5f2a62b457c6 status=arm64_complete_bound indexed_start=True
0x068FDC00: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x068FDC04: f65701a9  stp x22, x21, [sp, #0x10]
0x068FDC08: f44f02a9  stp x20, x19, [sp, #0x20]
0x068FDC0C: 76a10090  adrp x22, #0x7d29000
0x068FDC10: 577100b0  adrp x23, #0x7726000
0x068FDC14: c8e26239  ldrb w8, [x22, #0x8b8]
0x068FDC18: f7ca43f9  ldr x23, [x23, #0x790]
0x068FDC1C: f40302aa  mov x20, x2
0x068FDC20: f50301aa  mov x21, x1
0x068FDC24: f30300aa  mov x19, x0
0x068FDC28: 28010037  tbnz w8, #0, #0x68fdc4c
0x068FDC2C: 407100b0  adrp x0, #0x7726000
0x068FDC30: 00cc43f9  ldr x0, [x0, #0x798]
0x068FDC34: 790b2297  bl #0x3180a18
0x068FDC38: 407100b0  adrp x0, #0x7726000
0x068FDC3C: 00c843f9  ldr x0, [x0, #0x790]
0x068FDC40: 760b2297  bl #0x3180a18
0x068FDC44: 28008052  movz w8, #0x1
0x068FDC48: c8e22239  strb w8, [x22, #0x8b8]
0x068FDC4C: e30240f9  ldr x3, [x23]
0x068FDC50: e00313aa  mov x0, x19
0x068FDC54: e10315aa  mov x1, x21
0x068FDC58: e20314aa  mov x2, x20
0x068FDC5C: da1a6f97  bl #0x44c47c4
0x068FDC60: 681240f9  ldr x8, [x19, #0x20]
0x068FDC64: f65741a9  ldp x22, x21, [sp, #0x10]
0x068FDC68: 681a00f9  str x8, [x19, #0x30]
0x068FDC6C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x068FDC70: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x068FDC74: c0035fd6  ret

; RVA 0x68FDC78 | public override void LoadComponent(SerializedPositionComponent componentData) { }
; bytes=28 sha256=fc7ddb1a74f74b5569990614ec1b7754b4a87bd1958b8d6d78886ddc520be9a6 status=arm64_complete_bound indexed_start=True
0x068FDC78: fe0f1ff8  str x30, [sp, #-0x10]!
0x068FDC7C: a10000b4  cbz x1, #0x68fdc90
0x068FDC80: 280840f9  ldr x8, [x1, #0x10]
0x068FDC84: 081800f9  str x8, [x0, #0x30]
0x068FDC88: fe0741f8  ldr x30, [sp], #0x10
0x068FDC8C: c0035fd6  ret
0x068FDC90: 070c2297  bl #0x3180cac

; RVA 0x68FDC9C | protected override void OnBeforeSerialize() { }
; bytes=76 sha256=c92ac7a7e386324cbecf36e750b63e03b7027fddbcb7caac8c5b08f71e1c59e4 status=arm64_complete_bound indexed_start=True
0x068FDC9C: fe0f1ef8  str x30, [sp, #-0x20]!
0x068FDCA0: f44f01a9  stp x20, x19, [sp, #0x10]
0x068FDCA4: 74a10090  adrp x20, #0x7d29000
0x068FDCA8: 88e66239  ldrb w8, [x20, #0x8b9]
0x068FDCAC: f30300aa  mov x19, x0
0x068FDCB0: c8000037  tbnz w8, #0, #0x68fdcc8
0x068FDCB4: 407100b0  adrp x0, #0x7726000
0x068FDCB8: 00d043f9  ldr x0, [x0, #0x7a0]
0x068FDCBC: 570b2297  bl #0x3180a18
0x068FDCC0: 28008052  movz w8, #0x1
0x068FDCC4: 88e62239  strb w8, [x20, #0x8b9]
0x068FDCC8: 681640f9  ldr x8, [x19, #0x28]
0x068FDCCC: c80000b4  cbz x8, #0x68fdce4
0x068FDCD0: 601a40fd  ldr d0, [x19, #0x30]
0x068FDCD4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x068FDCD8: 000900fd  str d0, [x8, #0x10]
0x068FDCDC: fe0742f8  ldr x30, [sp], #0x20
0x068FDCE0: c0035fd6  ret
0x068FDCE4: f20b2297  bl #0x3180cac

