; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 222 MergeEngine.Signal.Items.ItemCreatedFirstTimeSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x5FF376C | public BoardItemPosition get_Position() { }
; bytes=8 sha256=d477916a2bafa522dd82b14bbbdd9e9ebc192bfc1c47fd3b345bb44f82868b97 status=arm64_complete_bound indexed_start=True
0x05FF376C: 00c041f8  ldur x0, [x0, #0x1c]
0x05FF3770: c0035fd6  ret

; RVA 0x5FF3774 | public void .ctor(IMergeItem item, BoardItemPosition position) { }
; bytes=60 sha256=7405daca5401002a181bf975a4ccc6b32c6a65ff6b58c58af8054af4e21bc541 status=arm64_complete_bound indexed_start=True
0x05FF3774: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x05FF3778: f44f01a9  stp x20, x19, [sp, #0x10]
0x05FF377C: f40301aa  mov x20, x1
0x05FF3780: e1031faa  mov x1, xzr
0x05FF3784: f30302aa  mov x19, x2
0x05FF3788: f50300aa  mov x21, x0
0x05FF378C: 9c9bdb97  bl #0x56da5fc
0x05FF3790: b40e01f8  str x20, [x21, #0x10]!
0x05FF3794: e00315aa  mov x0, x21
0x05FF3798: e10314aa  mov x1, x20
0x05FF379C: 8a344697  bl #0x31809c4
0x05FF37A0: b3c200f8  stur x19, [x21, #0xc]
0x05FF37A4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x05FF37A8: fe57c2a8  ldp x30, x21, [sp], #0x20
0x05FF37AC: c0035fd6  ret

