; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1350 MergeEngine.Configuration.Definitions.WeakReferences.References.DynamicMergeItemWeakReference
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x60046E4 | public DynamicMergeItemConfig get_DynamicConfig() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x060046E4: 001040f9  ldr x0, [x0, #0x20]
0x060046E8: c0035fd6  ret

; RVA 0x60046EC | public void .ctor(string uniqueId, DynamicMergeItemConfig dynamicMergeItemData) { }
; bytes=44 sha256=fdb2bf70ac9aa7dcc495553d8ce756f0d992e516ac50fcceea836dc7d10d25b3 status=arm64_complete_bound indexed_start=True
0x060046EC: fe0f1ef8  str x30, [sp, #-0x20]!
0x060046F0: f44f01a9  stp x20, x19, [sp, #0x10]
0x060046F4: f30302aa  mov x19, x2
0x060046F8: f40300aa  mov x20, x0
0x060046FC: 07000094  bl #0x6004718
0x06004700: 930e02f8  str x19, [x20, #0x20]!
0x06004704: e00314aa  mov x0, x20
0x06004708: e10313aa  mov x1, x19
0x0600470C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06004710: fe0742f8  ldr x30, [sp], #0x20
0x06004714: acf04517  b #0x31809c4

; RVA 0x6004770 | public override bool Equals(MergeItemWeakReference other) { }
; bytes=184 sha256=7d175b3ed0f1902553f4ab7fee9a0c015f2cc03fdc0d431b0d3fed7b14b12ec0 status=arm64_complete_bound indexed_start=True
0x06004770: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06004774: f44f01a9  stp x20, x19, [sp, #0x10]
0x06004778: f5e800f0  adrp x21, #0x7d23000
0x0600477C: a8be5c39  ldrb w8, [x21, #0x72f]
0x06004780: f30301aa  mov x19, x1
0x06004784: f40300aa  mov x20, x0
0x06004788: c8000037  tbnz w8, #0, #0x60047a0
0x0600478C: e0b300d0  adrp x0, #0x7682000
0x06004790: 00ec46f9  ldr x0, [x0, #0xdd8]
0x06004794: a1f04597  bl #0x3180a18
0x06004798: 28008052  movz w8, #0x1
0x0600479C: a8be1c39  strb w8, [x21, #0x72f]
0x060047A0: b30300b4  cbz x19, #0x6004814
0x060047A4: e8b300d0  adrp x8, #0x7682000
0x060047A8: 08ed46f9  ldr x8, [x8, #0xdd8]
0x060047AC: 690240f9  ldr x9, [x19]
0x060047B0: 080140f9  ldr x8, [x8]
0x060047B4: 2bc14439  ldrb w11, [x9, #0x130]
0x060047B8: 0ac14439  ldrb w10, [x8, #0x130]
0x060047BC: 7f010a6b  cmp w11, w10
0x060047C0: a3020054  b.lo #0x6004814
0x060047C4: 296540f9  ldr x9, [x9, #0xc8]
0x060047C8: 290d0a8b  add x9, x9, x10, lsl #3
0x060047CC: 29815ff8  ldur x9, [x9, #-8]
0x060047D0: 3f0108eb  cmp x9, x8
0x060047D4: 01020054  b.ne #0x6004814
0x060047D8: e00314aa  mov x0, x20
0x060047DC: e10313aa  mov x1, x19
0x060047E0: 12000094  bl #0x6004828
0x060047E4: 80010036  tbz w0, #0, #0x6004814
0x060047E8: 891240f9  ldr x9, [x20, #0x20]
0x060047EC: c90100b4  cbz x9, #0x6004824
0x060047F0: 681240f9  ldr x8, [x19, #0x20]
0x060047F4: 880100b4  cbz x8, #0x6004824
0x060047F8: 200940f9  ldr x0, [x9, #0x10]
0x060047FC: 400100b4  cbz x0, #0x6004824
0x06004800: 010940f9  ldr x1, [x8, #0x10]
0x06004804: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06004808: e2031faa  mov x2, xzr
0x0600480C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06004810: 8ac8d317  b #0x54f6a38
0x06004814: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06004818: e0031f2a  mov w0, wzr
0x0600481C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06004820: c0035fd6  ret
0x06004824: 22f14597  bl #0x3180cac

