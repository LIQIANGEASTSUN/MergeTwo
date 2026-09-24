; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 239 MergeEngine.Signal.Items.SpawnerSpawnedItemSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x5FF3D88 | public IItemSpawningComponent get_Spawner() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x05FF3D88: 000840f9  ldr x0, [x0, #0x10]
0x05FF3D8C: c0035fd6  ret

; RVA 0x5FF3D90 | public IMergeItem get_SpawnerItem() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x05FF3D90: 000c40f9  ldr x0, [x0, #0x18]
0x05FF3D94: c0035fd6  ret

; RVA 0x5FF3D98 | public IMergeItem get_SpawnedItem() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x05FF3D98: 001040f9  ldr x0, [x0, #0x20]
0x05FF3D9C: c0035fd6  ret

; RVA 0x5FF3DA0 | public int get_EmptyTiles() { }
; bytes=8 sha256=ba269e200604d0dd95f57e6bd974cfb4fb4a15db1799161315f4b00aef67931c status=arm64_complete_bound indexed_start=True
0x05FF3DA0: 002840b9  ldr w0, [x0, #0x28]
0x05FF3DA4: c0035fd6  ret

; RVA 0x5FF3DA8 | public void .ctor(IItemSpawningComponent spawner, IMergeItem spawnerItem, IMergeItem spawnedItem, int emptyTiles) { }
; bytes=108 sha256=eb8fe56382d5222d14a9374802906a2d83004c969217cbce80f1a65db387ac84 status=arm64_complete_bound indexed_start=True
0x05FF3DA8: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x05FF3DAC: f65701a9  stp x22, x21, [sp, #0x10]
0x05FF3DB0: f44f02a9  stp x20, x19, [sp, #0x20]
0x05FF3DB4: f60301aa  mov x22, x1
0x05FF3DB8: e1031faa  mov x1, xzr
0x05FF3DBC: f303042a  mov w19, w4
0x05FF3DC0: f40303aa  mov x20, x3
0x05FF3DC4: f50302aa  mov x21, x2
0x05FF3DC8: f70300aa  mov x23, x0
0x05FF3DCC: 0c9adb97  bl #0x56da5fc
0x05FF3DD0: e00317aa  mov x0, x23
0x05FF3DD4: 160c01f8  str x22, [x0, #0x10]!
0x05FF3DD8: e10316aa  mov x1, x22
0x05FF3DDC: fa324697  bl #0x31809c4
0x05FF3DE0: e00317aa  mov x0, x23
0x05FF3DE4: 158c01f8  str x21, [x0, #0x18]!
0x05FF3DE8: e10315aa  mov x1, x21
0x05FF3DEC: f6324697  bl #0x31809c4
0x05FF3DF0: f40e02f8  str x20, [x23, #0x20]!
0x05FF3DF4: e00317aa  mov x0, x23
0x05FF3DF8: e10314aa  mov x1, x20
0x05FF3DFC: f2324697  bl #0x31809c4
0x05FF3E00: f30a00b9  str w19, [x23, #8]
0x05FF3E04: f44f42a9  ldp x20, x19, [sp, #0x20]
0x05FF3E08: f65741a9  ldp x22, x21, [sp, #0x10]
0x05FF3E0C: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x05FF3E10: c0035fd6  ret

