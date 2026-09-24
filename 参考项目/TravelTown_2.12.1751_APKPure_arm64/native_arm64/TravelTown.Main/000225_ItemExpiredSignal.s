; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 225 MergeEngine.Signal.Items.ItemExpiredSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x5FF3858 | public IMergeItem get_MergeItem() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x05FF3858: 000840f9  ldr x0, [x0, #0x10]
0x05FF385C: c0035fd6  ret

; RVA 0x5FF3860 | public void set_MergeItem(IMergeItem value) { }
; bytes=8 sha256=db6bea7a05b35937586df84240f6d02eb6cd7c02c1c52b8ef3b95d55e2149a15 status=arm64_complete_bound indexed_start=True
0x05FF3860: 010c01f8  str x1, [x0, #0x10]!
0x05FF3864: 58344617  b #0x31809c4

; RVA 0x5FF3868 | public ExpendableComponent get_ExpendableComponent() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x05FF3868: 000c40f9  ldr x0, [x0, #0x18]
0x05FF386C: c0035fd6  ret

; RVA 0x5FF3870 | public void set_ExpendableComponent(ExpendableComponent value) { }
; bytes=8 sha256=a5d041b038dc9499a188ce15279c2d80c4a95e729a73f4dffe0e7234fe7453a9 status=arm64_complete_bound indexed_start=True
0x05FF3870: 018c01f8  str x1, [x0, #0x18]!
0x05FF3874: 54344617  b #0x31809c4

; RVA 0x5FF3878 | public void .ctor(IMergeItem mergeItem, ExpendableComponent expendableComponent) { }
; bytes=68 sha256=9dc6a1ec5e30b34401688bd050c9122b7a457e2507bb936d6ce4222fd9e861fd status=arm64_complete_bound indexed_start=True
0x05FF3878: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x05FF387C: f44f01a9  stp x20, x19, [sp, #0x10]
0x05FF3880: f40301aa  mov x20, x1
0x05FF3884: e1031faa  mov x1, xzr
0x05FF3888: f30302aa  mov x19, x2
0x05FF388C: f50300aa  mov x21, x0
0x05FF3890: 5b9bdb97  bl #0x56da5fc
0x05FF3894: e00315aa  mov x0, x21
0x05FF3898: 140c01f8  str x20, [x0, #0x10]!
0x05FF389C: e10314aa  mov x1, x20
0x05FF38A0: 49344697  bl #0x31809c4
0x05FF38A4: b38e01f8  str x19, [x21, #0x18]!
0x05FF38A8: e10313aa  mov x1, x19
0x05FF38AC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x05FF38B0: e00315aa  mov x0, x21
0x05FF38B4: fe57c2a8  ldp x30, x21, [sp], #0x20
0x05FF38B8: 43344617  b #0x31809c4

