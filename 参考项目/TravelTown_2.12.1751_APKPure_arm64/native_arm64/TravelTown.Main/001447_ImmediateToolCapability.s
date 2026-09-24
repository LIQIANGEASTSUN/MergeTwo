; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1447 MergeEngine.Configuration.Capabilities.ImmediateToolCapability
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6010698 | public bool get_IsToolbox() { }
; bytes=8 sha256=0e6de766d449fe554507239b6a7ad2c85106a33b67dea05075aa7cbb025dafb1 status=arm64_complete_bound indexed_start=True
0x06010698: 00404039  ldrb w0, [x0, #0x10]
0x0601069C: c0035fd6  ret

; RVA 0x60106A0 | public void set_IsToolbox(bool value) { }
; bytes=12 sha256=9906fb0bb75f2a4f1e046af27730d9706441c14db85d4c11511dbf71d58892f3 status=arm64_complete_bound indexed_start=True
0x060106A0: 28000012  and w8, w1, #1
0x060106A4: 08400039  strb w8, [x0, #0x10]
0x060106A8: c0035fd6  ret

; RVA 0x60106AC | public List<WeightedTool> get_ToolsWeights() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x060106AC: 000c40f9  ldr x0, [x0, #0x18]
0x060106B0: c0035fd6  ret

; RVA 0x60106B4 | public void set_ToolsWeights(List<WeightedTool> value) { }
; bytes=8 sha256=9ce842099489d786e373817d3c4c38ff83bd5dc435f415ea9b651ca2b9cb30d5 status=arm64_complete_bound indexed_start=True
0x060106B4: 018c01f8  str x1, [x0, #0x18]!
0x060106B8: c3c04517  b #0x31809c4

; RVA 0x60106BC | public List<WeightedToolLevel> get_ToolLevelsWeights() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x060106BC: 001040f9  ldr x0, [x0, #0x20]
0x060106C0: c0035fd6  ret

; RVA 0x60106C4 | public void set_ToolLevelsWeights(List<WeightedToolLevel> value) { }
; bytes=8 sha256=840dc7d5f02a9fc856b4fa9e59d9c8ef13572b12dba8e428c2ff3e90a3f86cec status=arm64_complete_bound indexed_start=True
0x060106C4: 010c02f8  str x1, [x0, #0x20]!
0x060106C8: bfc04517  b #0x31809c4

; RVA 0x60106CC | public int get_NumberOfToolsToSpawn() { }
; bytes=8 sha256=ba269e200604d0dd95f57e6bd974cfb4fb4a15db1799161315f4b00aef67931c status=arm64_complete_bound indexed_start=True
0x060106CC: 002840b9  ldr w0, [x0, #0x28]
0x060106D0: c0035fd6  ret

; RVA 0x60106D4 | public void set_NumberOfToolsToSpawn(int value) { }
; bytes=8 sha256=9e40c154908b27c28daea725a2a8b301cdb33ac03bba4f1283b986b2c7c65080 status=arm64_complete_bound indexed_start=True
0x060106D4: 012800b9  str w1, [x0, #0x28]
0x060106D8: c0035fd6  ret

; RVA 0x60106DC | public void .ctor() { }
; bytes=28 sha256=562dd7467f470794604f7a1a34457bac2787ebcfd6b06739ccb3b2a708673c2f status=arm64_complete_bound indexed_start=True
0x060106DC: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x060106E0: e1031faa  mov x1, xzr
0x060106E4: f30300aa  mov x19, x0
0x060106E8: c527db97  bl #0x56da5fc
0x060106EC: 7f420039  strb wzr, [x19, #0x10]
0x060106F0: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x060106F4: c0035fd6  ret

; RVA 0x60106F8 | public void .ctor(ToolSpawningCapability toolSpawning, int numberOfToolsToSpawn) { }
; bytes=92 sha256=f0c020aa1cfec8d2a8d6805858efb3c38eb98d125117bb0b078e79fc924b6ee2 status=arm64_complete_bound indexed_start=True
0x060106F8: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x060106FC: f44f01a9  stp x20, x19, [sp, #0x10]
0x06010700: f50301aa  mov x21, x1
0x06010704: e1031faa  mov x1, xzr
0x06010708: f303022a  mov w19, w2
0x0601070C: f40300aa  mov x20, x0
0x06010710: bb27db97  bl #0x56da5fc
0x06010714: 28008052  movz w8, #0x1
0x06010718: 88420039  strb w8, [x20, #0x10]
0x0601071C: b50100b4  cbz x21, #0x6010750
0x06010720: a10e40f9  ldr x1, [x21, #0x18]
0x06010724: e00314aa  mov x0, x20
0x06010728: 018c01f8  str x1, [x0, #0x18]!
0x0601072C: a6c04597  bl #0x31809c4
0x06010730: a11240f9  ldr x1, [x21, #0x20]
0x06010734: 810e02f8  str x1, [x20, #0x20]!
0x06010738: e00314aa  mov x0, x20
0x0601073C: a2c04597  bl #0x31809c4
0x06010740: 930a00b9  str w19, [x20, #8]
0x06010744: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06010748: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0601074C: c0035fd6  ret
0x06010750: 57c14597  bl #0x3180cac

