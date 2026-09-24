; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 234 MergeEngine.Signal.Items.MergeItemSignalBase
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x5FF3BD8 | public IMergeItem get_Item() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x05FF3BD8: 000840f9  ldr x0, [x0, #0x10]
0x05FF3BDC: c0035fd6  ret

; RVA 0x5FF3BE0 | public int get_Level() { }
; bytes=8 sha256=50abf56e70bf4ffd353b0c6ed3c4e4880c6169bcd84263b80a4680f2ca7fb9ab status=arm64_complete_bound indexed_start=True
0x05FF3BE0: 001840b9  ldr w0, [x0, #0x18]
0x05FF3BE4: c0035fd6  ret

; RVA 0x5FF21AC | protected void .ctor(IMergeItem item) { }
; bytes=48 sha256=1cc44928d27246ea104bfc2185ca4bc7b53fabceb695cf941624cd0d3a429353 status=arm64_complete_bound indexed_start=True
0x05FF21AC: fe0f1ef8  str x30, [sp, #-0x20]!
0x05FF21B0: f44f01a9  stp x20, x19, [sp, #0x10]
0x05FF21B4: f30301aa  mov x19, x1
0x05FF21B8: e1031faa  mov x1, xzr
0x05FF21BC: f40300aa  mov x20, x0
0x05FF21C0: 0fa1db97  bl #0x56da5fc
0x05FF21C4: 930e01f8  str x19, [x20, #0x10]!
0x05FF21C8: e00314aa  mov x0, x20
0x05FF21CC: e10313aa  mov x1, x19
0x05FF21D0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x05FF21D4: fe0742f8  ldr x30, [sp], #0x20
0x05FF21D8: fb394617  b #0x31809c4

; RVA 0x5FF20A0 | protected void .ctor(IMergeItem item, int level) { }
; bytes=60 sha256=9f3a98a0151fb0c1783d543587fc17a7204ec599675a9449c05fab35c3723429 status=arm64_complete_bound indexed_start=True
0x05FF20A0: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x05FF20A4: f44f01a9  stp x20, x19, [sp, #0x10]
0x05FF20A8: f40301aa  mov x20, x1
0x05FF20AC: e1031faa  mov x1, xzr
0x05FF20B0: f303022a  mov w19, w2
0x05FF20B4: f50300aa  mov x21, x0
0x05FF20B8: 51a1db97  bl #0x56da5fc
0x05FF20BC: b40e01f8  str x20, [x21, #0x10]!
0x05FF20C0: e00315aa  mov x0, x21
0x05FF20C4: e10314aa  mov x1, x20
0x05FF20C8: 3f3a4697  bl #0x31809c4
0x05FF20CC: b30a00b9  str w19, [x21, #8]
0x05FF20D0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x05FF20D4: fe57c2a8  ldp x30, x21, [sp], #0x20
0x05FF20D8: c0035fd6  ret

