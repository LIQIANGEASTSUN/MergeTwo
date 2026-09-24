; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 96 .ItemSpawningQueue.<>c__DisplayClass17_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x5FEA43C | public void .ctor() { }
; bytes=8 sha256=ccc4ca4effb9519bfc11a0b49eed826a210353ca4ae07eba3262cb1f38c59d2b status=arm64_complete_bound indexed_start=True
0x05FEA43C: e1031faa  mov x1, xzr
0x05FEA440: 6fc0db17  b #0x56da5fc

; RVA 0x5FEAD8C | internal bool <GetNextItems>b__1(ConsumedItemToProducedItemMapping item) { }
; bytes=248 sha256=31bb2bed17b5cdc1bc1a97cfad4bfe00976fe760098349167f80a5880fefa7fa status=arm64_complete_bound indexed_start=True
0x05FEAD8C: fe0f1df8  str x30, [sp, #-0x30]!
0x05FEAD90: f65701a9  stp x22, x21, [sp, #0x10]
0x05FEAD94: f44f02a9  stp x20, x19, [sp, #0x20]
0x05FEAD98: d5e900b0  adrp x21, #0x7d23000
0x05FEAD9C: 16b700f0  adrp x22, #0x76cd000
0x05FEADA0: a8c65839  ldrb w8, [x21, #0x631]
0x05FEADA4: d69e45f9  ldr x22, [x22, #0xb38]
0x05FEADA8: f40301aa  mov x20, x1
0x05FEADAC: f30300aa  mov x19, x0
0x05FEADB0: e8010037  tbnz w8, #0, #0x5feadec
0x05FEADB4: 00b700f0  adrp x0, #0x76cd000
0x05FEADB8: 00a045f9  ldr x0, [x0, #0xb40]
0x05FEADBC: 17574697  bl #0x3180a18
0x05FEADC0: 00b700f0  adrp x0, #0x76cd000
0x05FEADC4: 00a445f9  ldr x0, [x0, #0xb48]
0x05FEADC8: 14574697  bl #0x3180a18
0x05FEADCC: 00b700f0  adrp x0, #0x76cd000
0x05FEADD0: 00a845f9  ldr x0, [x0, #0xb50]
0x05FEADD4: 11574697  bl #0x3180a18
0x05FEADD8: 00b700f0  adrp x0, #0x76cd000
0x05FEADDC: 009c45f9  ldr x0, [x0, #0xb38]
0x05FEADE0: 0e574697  bl #0x3180a18
0x05FEADE4: 28008052  movz w8, #0x1
0x05FEADE8: a8c61839  strb w8, [x21, #0x631]
0x05FEADEC: c00240f9  ldr x0, [x22]
0x05FEADF0: ac574697  bl #0x3180ca0
0x05FEADF4: e1031faa  mov x1, xzr
0x05FEADF8: f50300aa  mov x21, x0
0x05FEADFC: 00bedb97  bl #0x56da5fc
0x05FEAE00: 150400b4  cbz x21, #0x5feae80
0x05FEAE04: e00315aa  mov x0, x21
0x05FEAE08: 140c01f8  str x20, [x0, #0x10]!
0x05FEAE0C: e10314aa  mov x1, x20
0x05FEAE10: ed564697  bl #0x31809c4
0x05FEAE14: 730a40f9  ldr x19, [x19, #0x10]
0x05FEAE18: b30200b4  cbz x19, #0x5feae6c
0x05FEAE1C: 08b700f0  adrp x8, #0x76cd000
0x05FEAE20: 08a545f9  ldr x8, [x8, #0xb48]
0x05FEAE24: 14b700f0  adrp x20, #0x76cd000
0x05FEAE28: 16b700f0  adrp x22, #0x76cd000
0x05FEAE2C: 000140f9  ldr x0, [x8]
0x05FEAE30: 94aa45f9  ldr x20, [x20, #0xb50]
0x05FEAE34: d6a245f9  ldr x22, [x22, #0xb40]
0x05FEAE38: 9a574697  bl #0x3180ca0
0x05FEAE3C: 820240f9  ldr x2, [x20]
0x05FEAE40: e10315aa  mov x1, x21
0x05FEAE44: e3031faa  mov x3, xzr
0x05FEAE48: f40300aa  mov x20, x0
0x05FEAE4C: 5cacc997  bl #0x5255fbc
0x05FEAE50: c20240f9  ldr x2, [x22]
0x05FEAE54: e00313aa  mov x0, x19
0x05FEAE58: e10314aa  mov x1, x20
0x05FEAE5C: b5687197  bl #0x3c45130
0x05FEAE60: 1f0000f1  cmp x0, #0
0x05FEAE64: e0079f1a  cset w0, ne
0x05FEAE68: 02000014  b #0x5feae70
0x05FEAE6C: e0031f2a  mov w0, wzr
0x05FEAE70: f44f42a9  ldp x20, x19, [sp, #0x20]
0x05FEAE74: f65741a9  ldp x22, x21, [sp, #0x10]
0x05FEAE78: fe0743f8  ldr x30, [sp], #0x30
0x05FEAE7C: c0035fd6  ret
0x05FEAE80: 8b574697  bl #0x3180cac

; RVA 0x5FEAE8C | internal bool <GetNextItems>b__0(Combination item) { }
; bytes=248 sha256=21e0f95fcc0acc17ce01f7336466d5b355c2e1485fe21cb584f3d7a98c4888d3 status=arm64_complete_bound indexed_start=True
0x05FEAE8C: fe0f1df8  str x30, [sp, #-0x30]!
0x05FEAE90: f65701a9  stp x22, x21, [sp, #0x10]
0x05FEAE94: f44f02a9  stp x20, x19, [sp, #0x20]
0x05FEAE98: d5e900b0  adrp x21, #0x7d23000
0x05FEAE9C: 16b700f0  adrp x22, #0x76cd000
0x05FEAEA0: a8ca5839  ldrb w8, [x21, #0x632]
0x05FEAEA4: d6ae45f9  ldr x22, [x22, #0xb58]
0x05FEAEA8: f40301aa  mov x20, x1
0x05FEAEAC: f30300aa  mov x19, x0
0x05FEAEB0: e8010037  tbnz w8, #0, #0x5feaeec
0x05FEAEB4: 00b700f0  adrp x0, #0x76cd000
0x05FEAEB8: 00a045f9  ldr x0, [x0, #0xb40]
0x05FEAEBC: d7564697  bl #0x3180a18
0x05FEAEC0: 00b700f0  adrp x0, #0x76cd000
0x05FEAEC4: 00a445f9  ldr x0, [x0, #0xb48]
0x05FEAEC8: d4564697  bl #0x3180a18
0x05FEAECC: 00b700f0  adrp x0, #0x76cd000
0x05FEAED0: 00b045f9  ldr x0, [x0, #0xb60]
0x05FEAED4: d1564697  bl #0x3180a18
0x05FEAED8: 00b700f0  adrp x0, #0x76cd000
0x05FEAEDC: 00ac45f9  ldr x0, [x0, #0xb58]
0x05FEAEE0: ce564697  bl #0x3180a18
0x05FEAEE4: 28008052  movz w8, #0x1
0x05FEAEE8: a8ca1839  strb w8, [x21, #0x632]
0x05FEAEEC: c00240f9  ldr x0, [x22]
0x05FEAEF0: 6c574697  bl #0x3180ca0
0x05FEAEF4: e1031faa  mov x1, xzr
0x05FEAEF8: f50300aa  mov x21, x0
0x05FEAEFC: c0bddb97  bl #0x56da5fc
0x05FEAF00: 150400b4  cbz x21, #0x5feaf80
0x05FEAF04: e00315aa  mov x0, x21
0x05FEAF08: 140c01f8  str x20, [x0, #0x10]!
0x05FEAF0C: e10314aa  mov x1, x20
0x05FEAF10: ad564697  bl #0x31809c4
0x05FEAF14: 730a40f9  ldr x19, [x19, #0x10]
0x05FEAF18: b30200b4  cbz x19, #0x5feaf6c
0x05FEAF1C: 08b700f0  adrp x8, #0x76cd000
0x05FEAF20: 08a545f9  ldr x8, [x8, #0xb48]
0x05FEAF24: 14b700f0  adrp x20, #0x76cd000
0x05FEAF28: 16b700f0  adrp x22, #0x76cd000
0x05FEAF2C: 000140f9  ldr x0, [x8]
0x05FEAF30: 94b245f9  ldr x20, [x20, #0xb60]
0x05FEAF34: d6a245f9  ldr x22, [x22, #0xb40]
0x05FEAF38: 5a574697  bl #0x3180ca0
0x05FEAF3C: 820240f9  ldr x2, [x20]
0x05FEAF40: e10315aa  mov x1, x21
0x05FEAF44: e3031faa  mov x3, xzr
0x05FEAF48: f40300aa  mov x20, x0
0x05FEAF4C: 1cacc997  bl #0x5255fbc
0x05FEAF50: c20240f9  ldr x2, [x22]
0x05FEAF54: e00313aa  mov x0, x19
0x05FEAF58: e10314aa  mov x1, x20
0x05FEAF5C: 75687197  bl #0x3c45130
0x05FEAF60: 1f0000f1  cmp x0, #0
0x05FEAF64: e0079f1a  cset w0, ne
0x05FEAF68: 02000014  b #0x5feaf70
0x05FEAF6C: e0031f2a  mov w0, wzr
0x05FEAF70: f44f42a9  ldp x20, x19, [sp, #0x20]
0x05FEAF74: f65741a9  ldp x22, x21, [sp, #0x10]
0x05FEAF78: fe0743f8  ldr x30, [sp], #0x30
0x05FEAF7C: c0035fd6  ret
0x05FEAF80: 4b574697  bl #0x3180cac

