; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1012 MergeEngine.ECS.Components.HintComponent
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x68F7458 | public void .ctor(Entity entity) { }
; bytes=56 sha256=96e4fcde5e0fe2f5f988fdc24291dc704d5b8ec8d0c4b1c85551b1476be934b9 status=arm64_complete_bound indexed_start=True
0x068F7458: fe0f1ef8  str x30, [sp, #-0x20]!
0x068F745C: f44f01a9  stp x20, x19, [sp, #0x10]
0x068F7460: f30301aa  mov x19, x1
0x068F7464: 08fef7d2  movz x8, #0xbff0, lsl #48
0x068F7468: e1031faa  mov x1, xzr
0x068F746C: f40300aa  mov x20, x0
0x068F7470: 081000f9  str x8, [x0, #0x20]
0x068F7474: 628cb797  bl #0x56da5fc
0x068F7478: 930e01f8  str x19, [x20, #0x10]!
0x068F747C: e00314aa  mov x0, x20
0x068F7480: e10313aa  mov x1, x19
0x068F7484: f44f41a9  ldp x20, x19, [sp, #0x10]
0x068F7488: fe0742f8  ldr x30, [sp], #0x20
0x068F748C: 4e252217  b #0x31809c4

