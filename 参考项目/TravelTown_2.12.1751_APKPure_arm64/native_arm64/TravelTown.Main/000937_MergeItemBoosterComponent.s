; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 937 MergeEngine.ECS.Systems.Items.MergeItemBoosterComponent
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x67897F4 | public bool get_ShouldSkipDestroy() { }
; bytes=8 sha256=b5f756a94e2a4fd04c581b81886364460d3cd7c165e6a51d5f3195a9439a10c4 status=arm64_complete_bound indexed_start=True
0x067897F4: 00c04039  ldrb w0, [x0, #0x30]
0x067897F8: c0035fd6  ret

; RVA 0x67897FC | public void set_ShouldSkipDestroy(bool value) { }
; bytes=12 sha256=a249c3c061ec9da6b813e9f7669c4eee4712ae82443eca5c2d67c54d32999205 status=arm64_complete_bound indexed_start=True
0x067897FC: 28000012  and w8, w1, #1
0x06789800: 08c00039  strb w8, [x0, #0x30]
0x06789804: c0035fd6  ret

; RVA 0x6789808 | public void .ctor(Entity entity) { }
; bytes=8 sha256=e0e2d53e43d908ac1db3a44fb088c3bafbdc76c2996997112daff03aba90e39c status=arm64_complete_bound indexed_start=True
0x06789808: e2031faa  mov x2, xzr
0x0678980C: 43b60514  b #0x68f7118

; RVA 0x6789810 | public void LoadComponent(SerializedMergeItemBoosterComponent componentData) { }
; bytes=60 sha256=75eb1b8b5c6362d9b66c303c57d4d2091ea2aa57e4174ae0d985bae4301c5ad1 status=arm64_complete_bound indexed_start=True
0x06789810: fe0f1ef8  str x30, [sp, #-0x20]!
0x06789814: f44f01a9  stp x20, x19, [sp, #0x10]
0x06789818: 810100b4  cbz x1, #0x6789848
0x0678981C: f40301aa  mov x20, x1
0x06789820: 210840f9  ldr x1, [x1, #0x10]
0x06789824: f30300aa  mov x19, x0
0x06789828: 010c02f8  str x1, [x0, #0x20]!
0x0678982C: 66dc2797  bl #0x31809c4
0x06789830: 810e40f9  ldr x1, [x20, #0x18]
0x06789834: 618e02f8  str x1, [x19, #0x28]!
0x06789838: e00313aa  mov x0, x19
0x0678983C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06789840: fe0742f8  ldr x30, [sp], #0x20
0x06789844: 60dc2717  b #0x31809c4
0x06789848: 19dd2797  bl #0x3180cac

