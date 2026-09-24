; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1071 MergeEngine.ECS.Components.Items.InteractionConstraintComponent
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x68FD3C0 | public bool get_DisableDragging() { }
; bytes=8 sha256=d2625c08dab8a7ed6a0ec29ef5e0b21222fe8c8aa1243088ffebd3218ae29cdc status=arm64_complete_bound indexed_start=True
0x068FD3C0: 00a04039  ldrb w0, [x0, #0x28]
0x068FD3C4: c0035fd6  ret

; RVA 0x68FD3C8 | public void .ctor(InteractionConstraintCapability capability, Entity entity) { }
; bytes=116 sha256=1e95c298051520622d44ad9cacbf8f4657b9c701f5558230cb5dee0be6f8c6bd status=arm64_complete_bound indexed_start=True
0x068FD3C8: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x068FD3CC: f65701a9  stp x22, x21, [sp, #0x10]
0x068FD3D0: f44f02a9  stp x20, x19, [sp, #0x20]
0x068FD3D4: 76a10090  adrp x22, #0x7d29000
0x068FD3D8: 577100b0  adrp x23, #0x7726000
0x068FD3DC: c8c26239  ldrb w8, [x22, #0x8b0]
0x068FD3E0: f7b243f9  ldr x23, [x23, #0x760]
0x068FD3E4: f50302aa  mov x21, x2
0x068FD3E8: f40301aa  mov x20, x1
0x068FD3EC: f30300aa  mov x19, x0
0x068FD3F0: c8000037  tbnz w8, #0, #0x68fd408
0x068FD3F4: 407100b0  adrp x0, #0x7726000
0x068FD3F8: 00b043f9  ldr x0, [x0, #0x760]
0x068FD3FC: 870d2297  bl #0x3180a18
0x068FD400: 28008052  movz w8, #0x1
0x068FD404: c8c22239  strb w8, [x22, #0x8b0]
0x068FD408: e30240f9  ldr x3, [x23]
0x068FD40C: e00313aa  mov x0, x19
0x068FD410: e10314aa  mov x1, x20
0x068FD414: e20315aa  mov x2, x21
0x068FD418: d0879197  bl #0x4d5f358
0x068FD41C: f40000b4  cbz x20, #0x68fd438
0x068FD420: 88464039  ldrb w8, [x20, #0x11]
0x068FD424: f65741a9  ldp x22, x21, [sp, #0x10]
0x068FD428: 68a20039  strb w8, [x19, #0x28]
0x068FD42C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x068FD430: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x068FD434: c0035fd6  ret
0x068FD438: 1d0e2297  bl #0x3180cac

