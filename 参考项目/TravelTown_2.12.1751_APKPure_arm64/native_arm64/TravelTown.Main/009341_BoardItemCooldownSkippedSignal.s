; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 9341 Merger.Game.Signal.BoardItemCooldownSkippedSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x676AB18 | public IMergeItem get_Item() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x0676AB18: 000840f9  ldr x0, [x0, #0x10]
0x0676AB1C: c0035fd6  ret

; RVA 0x676AB20 | public int get_NumEmptyPositions() { }
; bytes=8 sha256=50abf56e70bf4ffd353b0c6ed3c4e4880c6169bcd84263b80a4680f2ca7fb9ab status=arm64_complete_bound indexed_start=True
0x0676AB20: 001840b9  ldr w0, [x0, #0x18]
0x0676AB24: c0035fd6  ret

; RVA 0x676AB28 | public ResourceMultiple get_Price() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x0676AB28: 001040f9  ldr x0, [x0, #0x20]
0x0676AB2C: c0035fd6  ret

; RVA 0x676AB30 | public bool get_ShowTimeLeft() { }
; bytes=8 sha256=d2625c08dab8a7ed6a0ec29ef5e0b21222fe8c8aa1243088ffebd3218ae29cdc status=arm64_complete_bound indexed_start=True
0x0676AB30: 00a04039  ldrb w0, [x0, #0x28]
0x0676AB34: c0035fd6  ret

; RVA 0x676AB38 | public TimeCycleComponentAnalytics get_TimeCycleComponentAnalytics() { }
; bytes=20 sha256=a4d55a29c5b01326d9c1095a7de1c1c04eecd3e17f328b007551d8629ae8d753 status=arm64_complete_bound indexed_start=True
0x0676AB38: 092840f9  ldr x9, [x0, #0x50]
0x0676AB3C: 018041ad  ldp q1, q0, [x0, #0x30]
0x0676AB40: 091100f9  str x9, [x8, #0x20]
0x0676AB44: 010100ad  stp q1, q0, [x8]
0x0676AB48: c0035fd6  ret

; RVA 0x676AB4C | public void .ctor(IMergeItem item, int numEmptyPositions, ResourceMultiple price, TimeCycleComponentAnalytics timeCycleComponentAnalytics, bool showTimeLeft) { }
; bytes=124 sha256=79ea2eb1fd1566f5a8c530364074f8b85154780813a54510d11f5bd38704cafb status=arm64_complete_bound indexed_start=True
0x0676AB4C: fe0f1cf8  str x30, [sp, #-0x40]!
0x0676AB50: f85f01a9  stp x24, x23, [sp, #0x10]
0x0676AB54: f65702a9  stp x22, x21, [sp, #0x20]
0x0676AB58: f44f03a9  stp x20, x19, [sp, #0x30]
0x0676AB5C: f60301aa  mov x22, x1
0x0676AB60: e1031faa  mov x1, xzr
0x0676AB64: f30304aa  mov x19, x4
0x0676AB68: f40303aa  mov x20, x3
0x0676AB6C: f503022a  mov w21, w2
0x0676AB70: f70300aa  mov x23, x0
0x0676AB74: b8000012  and w24, w5, #1
0x0676AB78: a1bebd97  bl #0x56da5fc
0x0676AB7C: e00317aa  mov x0, x23
0x0676AB80: 160c01f8  str x22, [x0, #0x10]!
0x0676AB84: e10316aa  mov x1, x22
0x0676AB88: 8f572897  bl #0x31809c4
0x0676AB8C: f40e02f8  str x20, [x23, #0x20]!
0x0676AB90: e00317aa  mov x0, x23
0x0676AB94: e10314aa  mov x1, x20
0x0676AB98: f5821fb8  stur w21, [x23, #-8]
0x0676AB9C: 8a572897  bl #0x31809c4
0x0676ABA0: 681240f9  ldr x8, [x19, #0x20]
0x0676ABA4: 610240ad  ldp q1, q0, [x19]
0x0676ABA8: f8220039  strb w24, [x23, #8]
0x0676ABAC: f44f43a9  ldp x20, x19, [sp, #0x30]
0x0676ABB0: e81a00f9  str x8, [x23, #0x30]
0x0676ABB4: e18200ad  stp q1, q0, [x23, #0x10]
0x0676ABB8: f65742a9  ldp x22, x21, [sp, #0x20]
0x0676ABBC: f85f41a9  ldp x24, x23, [sp, #0x10]
0x0676ABC0: fe0744f8  ldr x30, [sp], #0x40
0x0676ABC4: c0035fd6  ret

