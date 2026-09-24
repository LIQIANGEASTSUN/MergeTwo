; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 9440 Merger.Game.Signal.SkipBoardItemCooldownSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x676CA44 | public SelectedBoardItem get_SelectedBoardItem() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x0676CA44: 000840f9  ldr x0, [x0, #0x10]
0x0676CA48: c0035fd6  ret

; RVA 0x676CA4C | public ResourceMultiple get_Price() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x0676CA4C: 000c40f9  ldr x0, [x0, #0x18]
0x0676CA50: c0035fd6  ret

; RVA 0x676CA54 | public void .ctor(SelectedBoardItem selectedBoardItem, ResourceMultiple price, IPromise skipCooldownPromise) { }
; bytes=96 sha256=5d88e8805e6b7d02b9c80e034845a93c3909072412482f33ca616000a59aa366 status=arm64_complete_bound indexed_start=True
0x0676CA54: fe0f1df8  str x30, [sp, #-0x30]!
0x0676CA58: f65701a9  stp x22, x21, [sp, #0x10]
0x0676CA5C: f44f02a9  stp x20, x19, [sp, #0x20]
0x0676CA60: f50301aa  mov x21, x1
0x0676CA64: e1031faa  mov x1, xzr
0x0676CA68: f30303aa  mov x19, x3
0x0676CA6C: f40302aa  mov x20, x2
0x0676CA70: f60300aa  mov x22, x0
0x0676CA74: e2b6bd97  bl #0x56da5fc
0x0676CA78: e00316aa  mov x0, x22
0x0676CA7C: 150c01f8  str x21, [x0, #0x10]!
0x0676CA80: e10315aa  mov x1, x21
0x0676CA84: d04f2897  bl #0x31809c4
0x0676CA88: e00316aa  mov x0, x22
0x0676CA8C: 148c01f8  str x20, [x0, #0x18]!
0x0676CA90: e10314aa  mov x1, x20
0x0676CA94: cc4f2897  bl #0x31809c4
0x0676CA98: d30e02f8  str x19, [x22, #0x20]!
0x0676CA9C: e00316aa  mov x0, x22
0x0676CAA0: e10313aa  mov x1, x19
0x0676CAA4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0676CAA8: f65741a9  ldp x22, x21, [sp, #0x10]
0x0676CAAC: fe0743f8  ldr x30, [sp], #0x30
0x0676CAB0: c54f2817  b #0x31809c4

