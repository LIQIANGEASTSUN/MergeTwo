; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 9490 Merger.Game.Signal.Combinations.JokerCheckPopupOpenedSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x676E420 | public string get_JokerItemId() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x0676E420: 000840f9  ldr x0, [x0, #0x10]
0x0676E424: c0035fd6  ret

; RVA 0x676E428 | public void set_JokerItemId(string value) { }
; bytes=8 sha256=bb574a0e36f0c96c0405d767dda26bac872ad9a8c563f1dadc96b10611df4032 status=arm64_complete_bound indexed_start=True
0x0676E428: 010c01f8  str x1, [x0, #0x10]!
0x0676E42C: 66492817  b #0x31809c4

; RVA 0x676E430 | public string get_BeforeMergeItemId() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x0676E430: 000c40f9  ldr x0, [x0, #0x18]
0x0676E434: c0035fd6  ret

; RVA 0x676E438 | public void set_BeforeMergeItemId(string value) { }
; bytes=8 sha256=f3b318639561d0ac60ecc24762168f825dab5a61e5bf4c318531259da687aee7 status=arm64_complete_bound indexed_start=True
0x0676E438: 018c01f8  str x1, [x0, #0x18]!
0x0676E43C: 62492817  b #0x31809c4

; RVA 0x676E440 | public string get_AfterJokerMergeItemId() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x0676E440: 001040f9  ldr x0, [x0, #0x20]
0x0676E444: c0035fd6  ret

; RVA 0x676E448 | public void set_AfterJokerMergeItemId(string value) { }
; bytes=8 sha256=2efcfc688a556bfd169177411c6522657cd66f8d25973b4b8ce6c837b147a1cb status=arm64_complete_bound indexed_start=True
0x0676E448: 010c02f8  str x1, [x0, #0x20]!
0x0676E44C: 5e492817  b #0x31809c4

; RVA 0x676E450 | public void .ctor(string jokerItemId, string beforeMergeItemId, string afterJokerMergeItemId) { }
; bytes=96 sha256=370ece5129c2ec618a8fa88e1d38d9aa4b0301637411aa1ec7a428bb48990a85 status=arm64_complete_bound indexed_start=True
0x0676E450: fe0f1df8  str x30, [sp, #-0x30]!
0x0676E454: f65701a9  stp x22, x21, [sp, #0x10]
0x0676E458: f44f02a9  stp x20, x19, [sp, #0x20]
0x0676E45C: f50301aa  mov x21, x1
0x0676E460: e1031faa  mov x1, xzr
0x0676E464: f30303aa  mov x19, x3
0x0676E468: f40302aa  mov x20, x2
0x0676E46C: f60300aa  mov x22, x0
0x0676E470: 63b0bd97  bl #0x56da5fc
0x0676E474: e00316aa  mov x0, x22
0x0676E478: 150c01f8  str x21, [x0, #0x10]!
0x0676E47C: e10315aa  mov x1, x21
0x0676E480: 51492897  bl #0x31809c4
0x0676E484: e00316aa  mov x0, x22
0x0676E488: 148c01f8  str x20, [x0, #0x18]!
0x0676E48C: e10314aa  mov x1, x20
0x0676E490: 4d492897  bl #0x31809c4
0x0676E494: d30e02f8  str x19, [x22, #0x20]!
0x0676E498: e00316aa  mov x0, x22
0x0676E49C: e10313aa  mov x1, x19
0x0676E4A0: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0676E4A4: f65741a9  ldp x22, x21, [sp, #0x10]
0x0676E4A8: fe0743f8  ldr x30, [sp], #0x30
0x0676E4AC: 46492817  b #0x31809c4

