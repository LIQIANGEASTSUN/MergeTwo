; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1096 MergeEngine.ECS.Components.Items.ToolSpawningComponent
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x68FE304 | public void .ctor(ToolSpawningCapability capability, Entity entity) { }
; bytes=136 sha256=7461aa2df408435c3e8cec00043e046566135521f9e1e031625f20fdca436cb0 status=arm64_complete_bound indexed_start=True
0x068FE304: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x068FE308: f65701a9  stp x22, x21, [sp, #0x10]
0x068FE30C: f44f02a9  stp x20, x19, [sp, #0x20]
0x068FE310: 56a100f0  adrp x22, #0x7d29000
0x068FE314: 57710090  adrp x23, #0x7726000
0x068FE318: c80a6339  ldrb w8, [x22, #0x8c2]
0x068FE31C: f7ee43f9  ldr x23, [x23, #0x7d8]
0x068FE320: f50302aa  mov x21, x2
0x068FE324: f40301aa  mov x20, x1
0x068FE328: f30300aa  mov x19, x0
0x068FE32C: c8000037  tbnz w8, #0, #0x68fe344
0x068FE330: 40710090  adrp x0, #0x7726000
0x068FE334: 00ec43f9  ldr x0, [x0, #0x7d8]
0x068FE338: b8092297  bl #0x3180a18
0x068FE33C: 28008052  movz w8, #0x1
0x068FE340: c80a2339  strb w8, [x22, #0x8c2]
0x068FE344: e30240f9  ldr x3, [x23]
0x068FE348: e00313aa  mov x0, x19
0x068FE34C: e10314aa  mov x1, x20
0x068FE350: e20315aa  mov x2, x21
0x068FE354: 01849197  bl #0x4d5f358
0x068FE358: 940100b4  cbz x20, #0x68fe388
0x068FE35C: 810e40f9  ldr x1, [x20, #0x18]
0x068FE360: e00313aa  mov x0, x19
0x068FE364: 018c02f8  str x1, [x0, #0x28]!
0x068FE368: 97092297  bl #0x31809c4
0x068FE36C: 811240f9  ldr x1, [x20, #0x20]
0x068FE370: f65741a9  ldp x22, x21, [sp, #0x10]
0x068FE374: 610e03f8  str x1, [x19, #0x30]!
0x068FE378: e00313aa  mov x0, x19
0x068FE37C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x068FE380: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x068FE384: 90092217  b #0x31809c4
0x068FE388: 490a2297  bl #0x3180cac

