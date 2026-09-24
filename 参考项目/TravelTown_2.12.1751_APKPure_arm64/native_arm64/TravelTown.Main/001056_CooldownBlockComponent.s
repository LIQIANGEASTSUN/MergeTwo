; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1056 MergeEngine.ECS.Components.Items.CooldownBlockComponent
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x68FBFEC | public void .ctor(Entity entity) { }
; bytes=48 sha256=7480715b2223622ee130c570e1472968cd7ac8431d2fb7a3de04bcfa350be7e0 status=arm64_complete_bound indexed_start=True
0x068FBFEC: fe0f1ef8  str x30, [sp, #-0x20]!
0x068FBFF0: f44f01a9  stp x20, x19, [sp, #0x10]
0x068FBFF4: f30301aa  mov x19, x1
0x068FBFF8: e1031faa  mov x1, xzr
0x068FBFFC: f40300aa  mov x20, x0
0x068FC000: 7f79b797  bl #0x56da5fc
0x068FC004: 930e01f8  str x19, [x20, #0x10]!
0x068FC008: e00314aa  mov x0, x20
0x068FC00C: e10313aa  mov x1, x19
0x068FC010: f44f41a9  ldp x20, x19, [sp, #0x10]
0x068FC014: fe0742f8  ldr x30, [sp], #0x20
0x068FC018: 6b122217  b #0x31809c4

