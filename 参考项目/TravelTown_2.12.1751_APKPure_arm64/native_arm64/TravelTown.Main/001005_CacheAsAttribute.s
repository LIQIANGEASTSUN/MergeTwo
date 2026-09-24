; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1005 MergeEngine.ECS.Components.CacheAsAttribute
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x67A3340 | public Type[] get_Types() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x067A3340: 000840f9  ldr x0, [x0, #0x10]
0x067A3344: c0035fd6  ret

; RVA 0x67A3348 | public void .ctor(Type[] types) { }
; bytes=48 sha256=d6248c6f3f13d3354a24c429f182507126bc7b2d0d20fa369a304890ea4d5cdc status=arm64_complete_bound indexed_start=True
0x067A3348: fe0f1ef8  str x30, [sp, #-0x20]!
0x067A334C: f44f01a9  stp x20, x19, [sp, #0x10]
0x067A3350: f30301aa  mov x19, x1
0x067A3354: e1031faa  mov x1, xzr
0x067A3358: f40300aa  mov x20, x0
0x067A335C: 8270bc97  bl #0x56bf564
0x067A3360: 930e01f8  str x19, [x20, #0x10]!
0x067A3364: e00314aa  mov x0, x20
0x067A3368: e10313aa  mov x1, x19
0x067A336C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x067A3370: fe0742f8  ldr x30, [sp], #0x20
0x067A3374: 94752717  b #0x31809c4

