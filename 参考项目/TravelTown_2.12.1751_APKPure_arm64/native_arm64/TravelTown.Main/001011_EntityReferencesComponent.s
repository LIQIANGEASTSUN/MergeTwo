; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1011 MergeEngine.ECS.Components.EntityReferencesComponent
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x68F7428 | public void .ctor(Entity entity) { }
; bytes=48 sha256=9fb19feda041e75d6a6c8e75307208bcdaffa519362f8f9c5bc65b73e76be4f3 status=arm64_complete_bound indexed_start=True
0x068F7428: fe0f1ef8  str x30, [sp, #-0x20]!
0x068F742C: f44f01a9  stp x20, x19, [sp, #0x10]
0x068F7430: f30301aa  mov x19, x1
0x068F7434: e1031faa  mov x1, xzr
0x068F7438: f40300aa  mov x20, x0
0x068F743C: 708cb797  bl #0x56da5fc
0x068F7440: 930e01f8  str x19, [x20, #0x10]!
0x068F7444: e00314aa  mov x0, x20
0x068F7448: e10313aa  mov x1, x19
0x068F744C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x068F7450: fe0742f8  ldr x30, [sp], #0x20
0x068F7454: 5c252217  b #0x31809c4

