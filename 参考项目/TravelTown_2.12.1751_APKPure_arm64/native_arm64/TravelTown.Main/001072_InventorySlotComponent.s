; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1072 MergeEngine.ECS.Components.Items.InventorySlotComponent
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x68FD43C | public void .ctor(InventorySlotCapability capability, Entity entity) { }
; bytes=128 sha256=a1cf61b2bbd3eb0fc29941665ba6750b5e132750115563b29d5855e3ca230f62 status=arm64_complete_bound indexed_start=True
0x068FD43C: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x068FD440: f65701a9  stp x22, x21, [sp, #0x10]
0x068FD444: f44f02a9  stp x20, x19, [sp, #0x20]
0x068FD448: 76a10090  adrp x22, #0x7d29000
0x068FD44C: 577100b0  adrp x23, #0x7726000
0x068FD450: c8c66239  ldrb w8, [x22, #0x8b1]
0x068FD454: f7b643f9  ldr x23, [x23, #0x768]
0x068FD458: f50302aa  mov x21, x2
0x068FD45C: f40301aa  mov x20, x1
0x068FD460: f30300aa  mov x19, x0
0x068FD464: c8000037  tbnz w8, #0, #0x68fd47c
0x068FD468: 407100b0  adrp x0, #0x7726000
0x068FD46C: 00b443f9  ldr x0, [x0, #0x768]
0x068FD470: 6a0d2297  bl #0x3180a18
0x068FD474: 28008052  movz w8, #0x1
0x068FD478: c8c62239  strb w8, [x22, #0x8b1]
0x068FD47C: e30240f9  ldr x3, [x23]
0x068FD480: e00313aa  mov x0, x19
0x068FD484: e10314aa  mov x1, x20
0x068FD488: e20315aa  mov x2, x21
0x068FD48C: b3879197  bl #0x4d5f358
0x068FD490: 540100b4  cbz x20, #0x68fd4b8
0x068FD494: 804241fc  ldur d0, [x20, #0x14]
0x068FD498: f65741a9  ldp x22, x21, [sp, #0x10]
0x068FD49C: 601600fd  str d0, [x19, #0x28]
0x068FD4A0: 811240f9  ldr x1, [x20, #0x20]
0x068FD4A4: 610e03f8  str x1, [x19, #0x30]!
0x068FD4A8: e00313aa  mov x0, x19
0x068FD4AC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x068FD4B0: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x068FD4B4: 440d2217  b #0x31809c4
0x068FD4B8: fd0d2297  bl #0x3180cac

; RVA 0x68FD4BC | public void LoadComponent(SerializedInventorySlotComponent componentData) { }
; bytes=36 sha256=35643c55cfb43f94d760f91424b158134aa171c38340c32f40cf56c6ee439261 status=arm64_complete_bound indexed_start=True
0x068FD4BC: fe0f1ff8  str x30, [sp, #-0x10]!
0x068FD4C0: e10000b4  cbz x1, #0x68fd4dc
0x068FD4C4: 200840fd  ldr d0, [x1, #0x10]
0x068FD4C8: 001400fd  str d0, [x0, #0x28]
0x068FD4CC: 210c40f9  ldr x1, [x1, #0x18]
0x068FD4D0: 010c03f8  str x1, [x0, #0x30]!
0x068FD4D4: fe0741f8  ldr x30, [sp], #0x10
0x068FD4D8: 3b0d2217  b #0x31809c4
0x068FD4DC: f40d2297  bl #0x3180cac

