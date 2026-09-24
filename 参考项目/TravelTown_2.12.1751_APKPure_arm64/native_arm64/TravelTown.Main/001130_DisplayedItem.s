; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1130 MergeEngine.ECS.Components.Board.DisplayedItem
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6904D80 | public string get_UUID() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06904D80: 000840f9  ldr x0, [x0, #0x10]
0x06904D84: c0035fd6  ret

; RVA 0x6904D88 | public void set_UUID(string value) { }
; bytes=8 sha256=c89a1c1f5214f4b9e247c7440d0b60c04e62f89681414a3f2a9a7ff16af644f8 status=arm64_complete_bound indexed_start=True
0x06904D88: 010c01f8  str x1, [x0, #0x10]!
0x06904D8C: 0eef2117  b #0x31809c4

; RVA 0x6904D90 | public IItem get_Item() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x06904D90: 000c40f9  ldr x0, [x0, #0x18]
0x06904D94: c0035fd6  ret

; RVA 0x6904D98 | public void set_Item(IItem value) { }
; bytes=8 sha256=5c194bd4c71494b60b12801c5399d356ab6ec7a616961b8674e9f65440f7dd27 status=arm64_complete_bound indexed_start=True
0x06904D98: 018c01f8  str x1, [x0, #0x18]!
0x06904D9C: 0aef2117  b #0x31809c4

; RVA 0x6904DA0 | public MutableBindableProperty<bool> get_IsLoading() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x06904DA0: 001040f9  ldr x0, [x0, #0x20]
0x06904DA4: c0035fd6  ret

; RVA 0x6904DA8 | public long get_ItemAdditionTimestamp() { }
; bytes=8 sha256=c0b9896d6c3d8aacf384c0d0cf5d897e84f621efe31cc89c980be348eb9c6614 status=arm64_complete_bound indexed_start=True
0x06904DA8: 001440f9  ldr x0, [x0, #0x28]
0x06904DAC: c0035fd6  ret

; RVA 0x6904DB0 | public void set_ItemAdditionTimestamp(long value) { }
; bytes=8 sha256=fb47a7abf4cba0cd5311b8b425d77a409859dd7b4fd92dbf5d99d451f425b80c status=arm64_complete_bound indexed_start=True
0x06904DB0: 011400f9  str x1, [x0, #0x28]
0x06904DB4: c0035fd6  ret

; RVA 0x6904DB8 | public string get_Reason() { }
; bytes=8 sha256=6b819324b4a3bc2d390c83c7fe02ea41a1f57ae5d4f2a9b0c9256341a5b8d37f status=arm64_complete_bound indexed_start=True
0x06904DB8: 001840f9  ldr x0, [x0, #0x30]
0x06904DBC: c0035fd6  ret

; RVA 0x6904DC0 | public void set_Reason(string value) { }
; bytes=8 sha256=e6d78c152a906bf45081259bc21b00669e6b76332a73e0c78da4bae6e3df093f status=arm64_complete_bound indexed_start=True
0x06904DC0: 010c03f8  str x1, [x0, #0x30]!
0x06904DC4: 00ef2117  b #0x31809c4

; RVA 0x6904DC8 | public void Wipe() { }
; bytes=112 sha256=79d4843890855488fc6dfa83df19ac9b74716c3d1a44e375832ab8cd575eb303 status=arm64_complete_bound indexed_start=True
0x06904DC8: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06904DCC: f44f01a9  stp x20, x19, [sp, #0x10]
0x06904DD0: 35a100b0  adrp x21, #0x7d29000
0x06904DD4: 546a00f0  adrp x20, #0x764f000
0x06904DD8: a89a6439  ldrb w8, [x21, #0x926]
0x06904DDC: 94ae40f9  ldr x20, [x20, #0x158]
0x06904DE0: f30300aa  mov x19, x0
0x06904DE4: c8000037  tbnz w8, #0, #0x6904dfc
0x06904DE8: 406a00f0  adrp x0, #0x764f000
0x06904DEC: 00ac40f9  ldr x0, [x0, #0x158]
0x06904DF0: 0aef2197  bl #0x3180a18
0x06904DF4: 28008052  movz w8, #0x1
0x06904DF8: a89a2439  strb w8, [x21, #0x926]
0x06904DFC: e00313aa  mov x0, x19
0x06904E00: 1f8c01f8  str xzr, [x0, #0x18]!
0x06904E04: e1031faa  mov x1, xzr
0x06904E08: efee2197  bl #0x31809c4
0x06904E0C: e00313aa  mov x0, x19
0x06904E10: 1f0c01f8  str xzr, [x0, #0x10]!
0x06904E14: e1031faa  mov x1, xzr
0x06904E18: ebee2197  bl #0x31809c4
0x06904E1C: 7f1600f9  str xzr, [x19, #0x28]
0x06904E20: 810240f9  ldr x1, [x20]
0x06904E24: 610e03f8  str x1, [x19, #0x30]!
0x06904E28: e00313aa  mov x0, x19
0x06904E2C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06904E30: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06904E34: e4ee2117  b #0x31809c4

; RVA 0x6904E38 | public void .ctor() { }
; bytes=140 sha256=4bbb6eec4ae38bd5fe71d89e4214210a008f05aae3e3eeec1e39db97d36089fc status=arm64_complete_bound indexed_start=True
0x06904E38: fe0f1df8  str x30, [sp, #-0x30]!
0x06904E3C: f65701a9  stp x22, x21, [sp, #0x10]
0x06904E40: f44f02a9  stp x20, x19, [sp, #0x20]
0x06904E44: 35a100b0  adrp x21, #0x7d29000
0x06904E48: 766b00f0  adrp x22, #0x7673000
0x06904E4C: 746b00f0  adrp x20, #0x7673000
0x06904E50: a89e6439  ldrb w8, [x21, #0x927]
0x06904E54: d64e40f9  ldr x22, [x22, #0x98]
0x06904E58: 945240f9  ldr x20, [x20, #0xa0]
0x06904E5C: f30300aa  mov x19, x0
0x06904E60: 28010037  tbnz w8, #0, #0x6904e84
0x06904E64: 606b00f0  adrp x0, #0x7673000
0x06904E68: 005040f9  ldr x0, [x0, #0xa0]
0x06904E6C: ebee2197  bl #0x3180a18
0x06904E70: 606b00f0  adrp x0, #0x7673000
0x06904E74: 004c40f9  ldr x0, [x0, #0x98]
0x06904E78: e8ee2197  bl #0x3180a18
0x06904E7C: 28008052  movz w8, #0x1
0x06904E80: a89e2439  strb w8, [x21, #0x927]
0x06904E84: c00240f9  ldr x0, [x22]
0x06904E88: 86ef2197  bl #0x3180ca0
0x06904E8C: 820240f9  ldr x2, [x20]
0x06904E90: e1031f2a  mov w1, wzr
0x06904E94: f40300aa  mov x20, x0
0x06904E98: e6716497  bl #0x4221630
0x06904E9C: e00313aa  mov x0, x19
0x06904EA0: 140c02f8  str x20, [x0, #0x20]!
0x06904EA4: e10314aa  mov x1, x20
0x06904EA8: c7ee2197  bl #0x31809c4
0x06904EAC: e00313aa  mov x0, x19
0x06904EB0: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06904EB4: f65741a9  ldp x22, x21, [sp, #0x10]
0x06904EB8: e1031faa  mov x1, xzr
0x06904EBC: fe0743f8  ldr x30, [sp], #0x30
0x06904EC0: cf55b717  b #0x56da5fc

