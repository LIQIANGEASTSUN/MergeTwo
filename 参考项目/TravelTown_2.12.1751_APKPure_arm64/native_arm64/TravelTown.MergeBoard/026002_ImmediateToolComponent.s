; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 26002 Merger.MergeBoard.Components.ImmediateToolComponent
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9BF44 | public List<WeightedTool> get_ToolsWeights() { }
; bytes=8 sha256=4197ad96213c98161e13fbfd6185a724b5570ba296d316558cbd5cc5c1842369 status=arm64_complete_bound indexed_start=True
0x06A9BF44: 000040f9  ldr x0, [x0]
0x06A9BF48: c0035fd6  ret

; RVA 0x6A9BF4C | public void set_ToolsWeights(List<WeightedTool> value) { }
; bytes=8 sha256=90afb21d864be688f8e998a55de80c6516e10dc816b7e370474047cb6c0a63d4 status=arm64_complete_bound indexed_start=True
0x06A9BF4C: 010000f9  str x1, [x0]
0x06A9BF50: 9d921b17  b #0x31809c4

; RVA 0x6A9BF54 | public List<WeightedToolLevel> get_ToolLevelsWeights() { }
; bytes=8 sha256=19647f57f48e23c8730ecfc85bdce80bf67ce4eae56e82f97661432fa2018025 status=arm64_complete_bound indexed_start=True
0x06A9BF54: 000440f9  ldr x0, [x0, #8]
0x06A9BF58: c0035fd6  ret

; RVA 0x6A9BF5C | public void set_ToolLevelsWeights(List<WeightedToolLevel> value) { }
; bytes=8 sha256=1c1d4a971baaf1896ab9fd883237315302246df6f399b3984b2b172cc11ee67b status=arm64_complete_bound indexed_start=True
0x06A9BF5C: 018c00f8  str x1, [x0, #8]!
0x06A9BF60: 99921b17  b #0x31809c4

; RVA 0x6A9BF64 | public int get_NumberOfToolsToSpawn() { }
; bytes=8 sha256=6f1929ee2376e6ada94db6d2aafe012dfc8382613e73b99aea0c7dea270fac13 status=arm64_complete_bound indexed_start=True
0x06A9BF64: 001040b9  ldr w0, [x0, #0x10]
0x06A9BF68: c0035fd6  ret

; RVA 0x6A9BF6C | public void set_NumberOfToolsToSpawn(int value) { }
; bytes=8 sha256=4f1731a5a3d5539e5c40e4019b837526eaa31ef7b03eb65ceaee7084e15a198b status=arm64_complete_bound indexed_start=True
0x06A9BF6C: 011000b9  str w1, [x0, #0x10]
0x06A9BF70: c0035fd6  ret

; RVA 0x6A9BF74 | public bool get_IsToolbox() { }
; bytes=16 sha256=8ebb3a22278c9cfc708bbd7a5d4428fd48e806b444a50707bbfe895e4ff64de9 status=arm64_complete_bound indexed_start=True
0x06A9BF74: 081040b9  ldr w8, [x0, #0x10]
0x06A9BF78: 1f010071  cmp w8, #0
0x06A9BF7C: e0d79f1a  cset w0, gt
0x06A9BF80: c0035fd6  ret

