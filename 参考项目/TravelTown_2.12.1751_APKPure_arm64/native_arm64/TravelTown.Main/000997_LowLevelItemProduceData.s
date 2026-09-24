; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 997 MergeEngine.ECS.Systems.Items.Producers.LowLevelItemProduce.LowLevelItemProduceData
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x679F410 | public string get_UniqueId() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x0679F410: 000840f9  ldr x0, [x0, #0x10]
0x0679F414: c0035fd6  ret

; RVA 0x679F418 | public void set_UniqueId(string value) { }
; bytes=8 sha256=79c3cfb0d65cc3c0bdaa0d90f5a2f6d79e456c7ad69c03320018d2c1357138c4 status=arm64_complete_bound indexed_start=True
0x0679F418: 010c01f8  str x1, [x0, #0x10]!
0x0679F41C: 6a852717  b #0x31809c4

; RVA 0x679F420 | public int get_Boost() { }
; bytes=8 sha256=50abf56e70bf4ffd353b0c6ed3c4e4880c6169bcd84263b80a4680f2ca7fb9ab status=arm64_complete_bound indexed_start=True
0x0679F420: 001840b9  ldr w0, [x0, #0x18]
0x0679F424: c0035fd6  ret

; RVA 0x679F428 | public void set_Boost(int value) { }
; bytes=8 sha256=6e9ff5dd14743d62b4c65ceed8cc7444a06b1f6a6df852c7ffa011f059b9080f status=arm64_complete_bound indexed_start=True
0x0679F428: 011800b9  str w1, [x0, #0x18]
0x0679F42C: c0035fd6  ret

; RVA 0x679F430 | public string get_OrderId() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x0679F430: 001040f9  ldr x0, [x0, #0x20]
0x0679F434: c0035fd6  ret

; RVA 0x679F438 | public void set_OrderId(string value) { }
; bytes=8 sha256=544f27e2388d2e2242bb3e84035a0f336afdc36458d90aa2c9b70341c716d53f status=arm64_complete_bound indexed_start=True
0x0679F438: 010c02f8  str x1, [x0, #0x20]!
0x0679F43C: 62852717  b #0x31809c4

; RVA 0x679F440 | public string get_Reason() { }
; bytes=8 sha256=c0b9896d6c3d8aacf384c0d0cf5d897e84f621efe31cc89c980be348eb9c6614 status=arm64_complete_bound indexed_start=True
0x0679F440: 001440f9  ldr x0, [x0, #0x28]
0x0679F444: c0035fd6  ret

; RVA 0x679F448 | public void set_Reason(string value) { }
; bytes=8 sha256=08364b0cf45104f82d445ec90e4a2ccc751d7fee1f393578b3b12e77430528e5 status=arm64_complete_bound indexed_start=True
0x0679F448: 018c02f8  str x1, [x0, #0x28]!
0x0679F44C: 5e852717  b #0x31809c4

; RVA 0x679DAD0 | public void .ctor() { }
; bytes=8 sha256=469dec22987d0d2eb141a2b5ecbae5e63676897c1cf09e4056ed47cf6eca8c1f status=arm64_complete_bound indexed_start=True
0x0679DAD0: e1031faa  mov x1, xzr
0x0679DAD4: caf2bc17  b #0x56da5fc

