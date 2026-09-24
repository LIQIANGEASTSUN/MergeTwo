; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1027 MergeEngine.ECS.Components.TimeComponent
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x68F8DE4 | public double get_TimeMultiplier() { }
; bytes=8 sha256=2594837cad53e8a1b3ab23dbcca4f9ed83b9ba7f68aae4e5aa5b9dc6ba57176c status=arm64_complete_bound indexed_start=True
0x068F8DE4: 001840fd  ldr d0, [x0, #0x30]
0x068F8DE8: c0035fd6  ret

; RVA 0x68F8DEC | public void set_TimeMultiplier(double value) { }
; bytes=8 sha256=7a73515bcc24c5b5a125949b62a760f71e9865db1601d64088edfc2616643e40 status=arm64_complete_bound indexed_start=True
0x068F8DEC: 001800fd  str d0, [x0, #0x30]
0x068F8DF0: c0035fd6  ret

; RVA 0x68F8DF4 | public void .ctor(Entity entity) { }
; bytes=56 sha256=7a77d7799d21bd9d6991cb8f92f49f75671cf003575568ed6a5ccde4e29b3996 status=arm64_complete_bound indexed_start=True
0x068F8DF4: fe0f1ef8  str x30, [sp, #-0x20]!
0x068F8DF8: f44f01a9  stp x20, x19, [sp, #0x10]
0x068F8DFC: f30301aa  mov x19, x1
0x068F8E00: 08fee7d2  movz x8, #0x3ff0, lsl #48
0x068F8E04: e1031faa  mov x1, xzr
0x068F8E08: f40300aa  mov x20, x0
0x068F8E0C: 081800f9  str x8, [x0, #0x30]
0x068F8E10: fb85b797  bl #0x56da5fc
0x068F8E14: 930e01f8  str x19, [x20, #0x10]!
0x068F8E18: e00314aa  mov x0, x20
0x068F8E1C: e10313aa  mov x1, x19
0x068F8E20: f44f41a9  ldp x20, x19, [sp, #0x10]
0x068F8E24: fe0742f8  ldr x30, [sp], #0x20
0x068F8E28: e71e2217  b #0x31809c4

