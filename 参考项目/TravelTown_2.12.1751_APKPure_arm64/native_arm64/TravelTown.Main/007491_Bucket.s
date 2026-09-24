; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 7491 Merger.Bubbles.Buckets.Bucket
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x658A578 | public int get_Start() { }
; bytes=8 sha256=6f1929ee2376e6ada94db6d2aafe012dfc8382613e73b99aea0c7dea270fac13 status=arm64_complete_bound indexed_start=True
0x0658A578: 001040b9  ldr w0, [x0, #0x10]
0x0658A57C: c0035fd6  ret

; RVA 0x658A580 | public int get_End() { }
; bytes=8 sha256=ca9be5891608b757b7bc8d84905b452237de4af4115e73ad7cd6348b92859bf1 status=arm64_complete_bound indexed_start=True
0x0658A580: 001440b9  ldr w0, [x0, #0x14]
0x0658A584: c0035fd6  ret

; RVA 0x658A588 | public int get_MinDataAmount() { }
; bytes=8 sha256=50abf56e70bf4ffd353b0c6ed3c4e4880c6169bcd84263b80a4680f2ca7fb9ab status=arm64_complete_bound indexed_start=True
0x0658A588: 001840b9  ldr w0, [x0, #0x18]
0x0658A58C: c0035fd6  ret

; RVA 0x658A590 | public int get_MaxDataAmount() { }
; bytes=8 sha256=7a2c484f16193ad2c5617bbe6704b2ccbdcc31004cfa1370a3ba4533f12de7f9 status=arm64_complete_bound indexed_start=True
0x0658A590: 001c40b9  ldr w0, [x0, #0x1c]
0x0658A594: c0035fd6  ret

; RVA 0x658A598 | public float get_Addition() { }
; bytes=8 sha256=a5bfaf2bf15e7ed2bbebabf184eb22baa400c683753e53493ef824c1f7363202 status=arm64_complete_bound indexed_start=True
0x0658A598: 002040bd  ldr s0, [x0, #0x20]
0x0658A59C: c0035fd6  ret

; RVA 0x658A5A0 | public int get_SpawnedBubbles() { }
; bytes=8 sha256=a2e28d6b3f73d0b0251bc7d259573fb064536ce8240cdf9c1eb3c614e9c5fd54 status=arm64_complete_bound indexed_start=True
0x0658A5A0: 002440b9  ldr w0, [x0, #0x24]
0x0658A5A4: c0035fd6  ret

; RVA 0x658A5A8 | public void set_SpawnedBubbles(int value) { }
; bytes=8 sha256=789d7b57c17b823d5e5cd288cb3fa3ae4d22145bd1e8a59998e7d459d1ce427b status=arm64_complete_bound indexed_start=True
0x0658A5A8: 012400b9  str w1, [x0, #0x24]
0x0658A5AC: c0035fd6  ret

; RVA 0x658A5B0 | public int get_BurstBubbles() { }
; bytes=8 sha256=ba269e200604d0dd95f57e6bd974cfb4fb4a15db1799161315f4b00aef67931c status=arm64_complete_bound indexed_start=True
0x0658A5B0: 002840b9  ldr w0, [x0, #0x28]
0x0658A5B4: c0035fd6  ret

; RVA 0x658A5B8 | public void set_BurstBubbles(int value) { }
; bytes=8 sha256=9e40c154908b27c28daea725a2a8b301cdb33ac03bba4f1283b986b2c7c65080 status=arm64_complete_bound indexed_start=True
0x0658A5B8: 012800b9  str w1, [x0, #0x28]
0x0658A5BC: c0035fd6  ret

; RVA 0x658A5C0 | public bool get_IsConversionCalculated() { }
; bytes=8 sha256=3cd77b542a8f1965476bdea8c21a73c2fb1e20ff99d64f405907bf1ea9d5e914 status=arm64_complete_bound indexed_start=True
0x0658A5C0: 00b04039  ldrb w0, [x0, #0x2c]
0x0658A5C4: c0035fd6  ret

; RVA 0x658A5C8 | public void set_IsConversionCalculated(bool value) { }
; bytes=12 sha256=ce8d5d8afe972cd28069b4b4a58125409cd58277b9130e0dda4d655f89038168 status=arm64_complete_bound indexed_start=True
0x0658A5C8: 28000012  and w8, w1, #1
0x0658A5CC: 08b00039  strb w8, [x0, #0x2c]
0x0658A5D0: c0035fd6  ret

; RVA 0x658A5D4 | public float get_ConversionRatio() { }
; bytes=8 sha256=65461f1495cb4082c64735adafd24d794ebe70a1f1c15613543d046c6d6a93ef status=arm64_complete_bound indexed_start=True
0x0658A5D4: 003040bd  ldr s0, [x0, #0x30]
0x0658A5D8: c0035fd6  ret

; RVA 0x658A5DC | private void set_ConversionRatio(float value) { }
; bytes=8 sha256=c502fc48fab30b68a73e620fbf06fe8b703f217790a219e4082ca46a54a1ccda status=arm64_complete_bound indexed_start=True
0x0658A5DC: 003000bd  str s0, [x0, #0x30]
0x0658A5E0: c0035fd6  ret

; RVA 0x657DE2C | public void .ctor(int start, int end, float addition, int minDataAmount, int maxDataAmount) { }
; bytes=80 sha256=a1b86d613a40e59f5087cf3be64ebbfcdcd3e1b5ca0885a25079b25f611a2278 status=arm64_complete_bound indexed_start=True
0x0657DE2C: e80f1cfc  str d8, [sp, #-0x40]!
0x0657DE30: fe5f01a9  stp x30, x23, [sp, #0x10]
0x0657DE34: f65702a9  stp x22, x21, [sp, #0x20]
0x0657DE38: f44f03a9  stp x20, x19, [sp, #0x30]
0x0657DE3C: f603012a  mov w22, w1
0x0657DE40: e1031faa  mov x1, xzr
0x0657DE44: f303042a  mov w19, w4
0x0657DE48: f403032a  mov w20, w3
0x0657DE4C: 081ca04e  mov v8.16b, v0.16b
0x0657DE50: f503022a  mov w21, w2
0x0657DE54: f70300aa  mov x23, x0
0x0657DE58: e971c597  bl #0x56da5fc
0x0657DE5C: f6560229  stp w22, w21, [x23, #0x10]
0x0657DE60: e82200bd  str s8, [x23, #0x20]
0x0657DE64: f44e0329  stp w20, w19, [x23, #0x18]
0x0657DE68: f44f43a9  ldp x20, x19, [sp, #0x30]
0x0657DE6C: f65742a9  ldp x22, x21, [sp, #0x20]
0x0657DE70: fe5f41a9  ldp x30, x23, [sp, #0x10]
0x0657DE74: e80744fc  ldr d8, [sp], #0x40
0x0657DE78: c0035fd6  ret

; RVA 0x657F8E4 | public void UpdateConversionRatio(float newRatio) { }
; bytes=8 sha256=c502fc48fab30b68a73e620fbf06fe8b703f217790a219e4082ca46a54a1ccda status=arm64_complete_bound indexed_start=True
0x0657F8E4: 003000bd  str s0, [x0, #0x30]
0x0657F8E8: c0035fd6  ret

; RVA 0x657FA4C | public bool IsInBucket(int price) { }
; bytes=36 sha256=00944f8e95d225731db529267c1489c9839c6d0778a05d3daf8761b299d28a0f status=arm64_complete_bound indexed_start=True
0x0657FA4C: 081040b9  ldr w8, [x0, #0x10]
0x0657FA50: 1f01016b  cmp w8, w1
0x0657FA54: 6d000054  b.le #0x657fa60
0x0657FA58: e0031f2a  mov w0, wzr
0x0657FA5C: c0035fd6  ret
0x0657FA60: 081440b9  ldr w8, [x0, #0x14]
0x0657FA64: 1f01016b  cmp w8, w1
0x0657FA68: e0b79f1a  cset w0, ge
0x0657FA6C: c0035fd6  ret

