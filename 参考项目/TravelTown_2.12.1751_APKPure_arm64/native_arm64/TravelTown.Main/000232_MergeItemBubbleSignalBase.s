; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 232 MergeEngine.Signal.Items.MergeItemBubbleSignalBase
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x5FF3B2C | public SmarterBubblesAnalyticsData get_SmarterBubblesAnalyticsData() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x05FF3B2C: 001040f9  ldr x0, [x0, #0x20]
0x05FF3B30: c0035fd6  ret

; RVA 0x5FF3B34 | public void set_SmarterBubblesAnalyticsData(SmarterBubblesAnalyticsData value) { }
; bytes=8 sha256=8e8e036727a2b6706ab5a982027511ab7d4165fbcc0324fff078d45a68d59fa8 status=arm64_complete_bound indexed_start=True
0x05FF3B34: 010c02f8  str x1, [x0, #0x20]!
0x05FF3B38: a3334617  b #0x31809c4

; RVA 0x5FF3B3C | protected void .ctor(IMergeItem item) { }
; bytes=48 sha256=5fbd941c10665390b839540ee404df2396a3d26a5324e0b85b1deeb6e61b75d6 status=arm64_complete_bound indexed_start=True
0x05FF3B3C: fe0f1ef8  str x30, [sp, #-0x20]!
0x05FF3B40: f44f01a9  stp x20, x19, [sp, #0x10]
0x05FF3B44: f30301aa  mov x19, x1
0x05FF3B48: e1031faa  mov x1, xzr
0x05FF3B4C: f40300aa  mov x20, x0
0x05FF3B50: ab9adb97  bl #0x56da5fc
0x05FF3B54: 930e01f8  str x19, [x20, #0x10]!
0x05FF3B58: e00314aa  mov x0, x20
0x05FF3B5C: e10313aa  mov x1, x19
0x05FF3B60: f44f41a9  ldp x20, x19, [sp, #0x10]
0x05FF3B64: fe0742f8  ldr x30, [sp], #0x20
0x05FF3B68: 97334617  b #0x31809c4

; RVA 0x5FF3B6C | protected void .ctor(IMergeItem item, int level) { }
; bytes=60 sha256=2fea84c8b01466ea7b81b39541834260cb7a40cc0e99aecd5de64fa8d387788b status=arm64_complete_bound indexed_start=True
0x05FF3B6C: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x05FF3B70: f44f01a9  stp x20, x19, [sp, #0x10]
0x05FF3B74: f40301aa  mov x20, x1
0x05FF3B78: e1031faa  mov x1, xzr
0x05FF3B7C: f303022a  mov w19, w2
0x05FF3B80: f50300aa  mov x21, x0
0x05FF3B84: 9e9adb97  bl #0x56da5fc
0x05FF3B88: b40e01f8  str x20, [x21, #0x10]!
0x05FF3B8C: e00315aa  mov x0, x21
0x05FF3B90: e10314aa  mov x1, x20
0x05FF3B94: 8c334697  bl #0x31809c4
0x05FF3B98: b30a00b9  str w19, [x21, #8]
0x05FF3B9C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x05FF3BA0: fe57c2a8  ldp x30, x21, [sp], #0x20
0x05FF3BA4: c0035fd6  ret

