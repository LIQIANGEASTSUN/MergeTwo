; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 221 MergeEngine.Signal.Items.ItemAppearedSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x5FF3708 | public IMergeItem get_MergeItem() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x05FF3708: 000840f9  ldr x0, [x0, #0x10]
0x05FF370C: c0035fd6  ret

; RVA 0x5FF3710 | public void set_MergeItem(IMergeItem value) { }
; bytes=8 sha256=a7e66329b4559e4aa91ad5d43f549e43d59f9d25e995f404552dbdec045525b1 status=arm64_complete_bound indexed_start=True
0x05FF3710: 010c01f8  str x1, [x0, #0x10]!
0x05FF3714: ac344617  b #0x31809c4

; RVA 0x5FF3718 | public Entity get_Entity() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x05FF3718: 000c40f9  ldr x0, [x0, #0x18]
0x05FF371C: c0035fd6  ret

; RVA 0x5FF3720 | public void set_Entity(Entity value) { }
; bytes=8 sha256=2ef4a67e120626c8c37e64fe6545c7fd9ad9c646808112d4bdba20e43802749c status=arm64_complete_bound indexed_start=True
0x05FF3720: 018c01f8  str x1, [x0, #0x18]!
0x05FF3724: a8344617  b #0x31809c4

; RVA 0x5FF3728 | public void .ctor(IMergeItem mergeItem, Entity entity) { }
; bytes=68 sha256=1ab9fd84f28660a44edffc734fdabaf4c3aab44fbe30fced37b1b4b427133c2e status=arm64_complete_bound indexed_start=True
0x05FF3728: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x05FF372C: f44f01a9  stp x20, x19, [sp, #0x10]
0x05FF3730: f40301aa  mov x20, x1
0x05FF3734: e1031faa  mov x1, xzr
0x05FF3738: f30302aa  mov x19, x2
0x05FF373C: f50300aa  mov x21, x0
0x05FF3740: af9bdb97  bl #0x56da5fc
0x05FF3744: e00315aa  mov x0, x21
0x05FF3748: 140c01f8  str x20, [x0, #0x10]!
0x05FF374C: e10314aa  mov x1, x20
0x05FF3750: 9d344697  bl #0x31809c4
0x05FF3754: b38e01f8  str x19, [x21, #0x18]!
0x05FF3758: e10313aa  mov x1, x19
0x05FF375C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x05FF3760: e00315aa  mov x0, x21
0x05FF3764: fe57c2a8  ldp x30, x21, [sp], #0x20
0x05FF3768: 97344617  b #0x31809c4

