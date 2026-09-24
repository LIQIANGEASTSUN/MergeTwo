; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1456 MergeEngine.Configuration.Capabilities.OrderSpawnCapability
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6011840 | public string get_OrderTreeId() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x06011840: 000c40f9  ldr x0, [x0, #0x18]
0x06011844: c0035fd6  ret

; RVA 0x6011848 | private void set_OrderTreeId(string value) { }
; bytes=8 sha256=b0451b553ef1ad1214b0e56bb5d0be38eb3021d79f01b2ee36802828e208aa55 status=arm64_complete_bound indexed_start=True
0x06011848: 018c01f8  str x1, [x0, #0x18]!
0x0601184C: 5ebc4517  b #0x31809c4

; RVA 0x6011850 | public void .ctor() { }
; bytes=8 sha256=734f9ec42fb8f32811eeadd292e538f478cee92418dded79e2d072645ac9a8de status=arm64_complete_bound indexed_start=True
0x06011850: e1031faa  mov x1, xzr
0x06011854: 6a23db17  b #0x56da5fc

