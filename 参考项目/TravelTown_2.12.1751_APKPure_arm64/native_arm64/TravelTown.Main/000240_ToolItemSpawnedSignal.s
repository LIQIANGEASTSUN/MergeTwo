; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 240 MergeEngine.Signal.Items.ToolItemSpawnedSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x5FF3E14 | public IMergeItem get_SpawnedFrom() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x05FF3E14: 001040f9  ldr x0, [x0, #0x20]
0x05FF3E18: c0035fd6  ret

; RVA 0x5FF3E1C | public void .ctor(IMergeItem spawned, int level, IMergeItem spawnedFrom) { }
; bytes=84 sha256=1802d22449a7154ec35e550140904e39b8bc876ad7617a8b8132d45ff3981e49 status=arm64_complete_bound indexed_start=True
0x05FF3E1C: fe0f1df8  str x30, [sp, #-0x30]!
0x05FF3E20: f65701a9  stp x22, x21, [sp, #0x10]
0x05FF3E24: f44f02a9  stp x20, x19, [sp, #0x20]
0x05FF3E28: f50301aa  mov x21, x1
0x05FF3E2C: e1031faa  mov x1, xzr
0x05FF3E30: f30303aa  mov x19, x3
0x05FF3E34: f403022a  mov w20, w2
0x05FF3E38: f60300aa  mov x22, x0
0x05FF3E3C: f099db97  bl #0x56da5fc
0x05FF3E40: e00316aa  mov x0, x22
0x05FF3E44: 150c01f8  str x21, [x0, #0x10]!
0x05FF3E48: e10315aa  mov x1, x21
0x05FF3E4C: de324697  bl #0x31809c4
0x05FF3E50: d30e02f8  str x19, [x22, #0x20]!
0x05FF3E54: d4821fb8  stur w20, [x22, #-8]
0x05FF3E58: e00316aa  mov x0, x22
0x05FF3E5C: e10313aa  mov x1, x19
0x05FF3E60: f44f42a9  ldp x20, x19, [sp, #0x20]
0x05FF3E64: f65741a9  ldp x22, x21, [sp, #0x10]
0x05FF3E68: fe0743f8  ldr x30, [sp], #0x30
0x05FF3E6C: d6324617  b #0x31809c4

